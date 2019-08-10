#!/usr/bin/python3

#
#    This file is part of avr-libc3.
#
#    Redistribution and use in source and binary forms, with or without
#    modification, are permitted provided that the following conditions are met:
#
#    * Redistributions of source code must retain the above copyright
#      notice, this list of conditions and the following disclaimer.
#
#    * Redistributions in binary form must reproduce the above copyright
#      notice, this list of conditions and the following disclaimer in
#      the documentation and/or other materials provided with the
#      distribution.
#
#    * Neither the name of the copyright holders nor the names of
#      contributors may be used to endorse or promote products derived
#      from this software without specific prior written permission.
#
#   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
#   AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
#   IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
#   ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
#   LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
#   CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
#   SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
#   INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
#   CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
#   ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
#   POSSIBILITY OF SUCH DAMAGE. */
#
#   Copyright 2018
#   Written by Balint Cristian <cristian dot balint at gmail dot com>
#
#   Copyright 2019, Steven Johnson (Sakurainds at gmail dot com)
#     * Converted to Python3, format corrected and modularized
#     * Fix License of generated files, as data is "derived" from microchip
#       code/data and needs to keep that license.
#     * Add proper argument handling
#     * Process .atdf files DIRECTLY from packs in a given directory. Simplifies
#       updates, as all is required is to upgrade pack, and regenerate.  No need
#       to extract any files from the pack.
#
import argparse
import os, sys
import zipfile
from lxml import etree
from textwrap import wrap
import math
import pprint


def xint(str):
    """ Converts a Hex or Decimal encoded number to a int.
        Saves having to worry about whats encoded in the atdf files. """
    if str.startswith("0x"):
        return int(str, 16)
    return int(str)


class AVR_ATDF_File:
    def __init__(self, data):
        # Read the XML Data, and save it for later processing.
        self.dom = etree.fromstring(data)

    def getDeviceName(self):
        return self.dom.find(".//devices/device").get("name")

    def getArchitecture(self):
        return self.dom.find(".//devices/device").get("architecture").upper()

    def get_module_base_address(self, instance):
        # Gets the lowest USED address of a module
        # This is necessary because some devices define EVERYTHING as starting at 0x00
        # when, they actually don't (Attiny10 I am looking at you)
        # So the TRUE base address is the module offset, plus the lowest used address of the module.
        # This MAY have the side effect of giving slightly different results from standard
        # headers, IF the module starts with reserved registers, but should not impede operation
        # in any way.

        # First get the module base address:
        periphs = self.dom.find(
            './/peripherals/module/instance/register-group[@name="{}"]'.format(instance)
        )
        base_addr = xint(periphs.get("offset"))

        # Now find lowest address in the registers.
        min_addr = None
        regs = self.dom.find(
            './/modules/module/register-group[@name="{}"]'.format(instance)
        )
        for reg in regs:
            debug_group(reg)
            addr = xint(reg.get("offset"))
            if (min_addr == None) or (addr < min_addr):
                min_addr = addr
        min_addr += base_addr  # minimum absolute address.

        # Return the peripheral Base, and minimum address so we can use it for offset calculations.
        return (base_addr, min_addr)

    def getPeripheralModule(self, name):
        return self.dom.find('.//peripherals/module[@name="{}"]'.format(name))

    def getPeripheralModuleInstance(self, name):
        return self.dom.find('.//peripherals/module/instance[@name="{}"]'.format(name))

    def getAllPeripheralModules(self):
        return self.dom.findall(".//peripherals/module")

    def getModuleInstanceRegisters(self, name):
        return self.dom.find(
            './/peripherals/module/instance/register-group[@name-in-module="{}"]'.format(
                name
            )
        )

    def getModuleRegisters(self, module, group=None):
        if group == None:
            group = module
        return self.dom.findall(
            './/modules/module[@name="{0}"]/register-group[@name="{1}"]/register'.format(
                module, group
            )
        )

    def getAllModules(self):
        return self.dom.findall(".//modules/module")

    def getAllModuleNames(self):
        module_names = []
        for module in self.getAllModules():
            module_names.append(module.get("name"))
        return module_names

    def getModule(self, module):
        return self.dom.find('.//modules/module[@name="{0}"]'.format(module))

    def getAllModuleRegisterGroups(self, module=None):
        if module is None:
            search_term = ".//modules/module/register-group"
        else:
            search_term = './/modules/module[@name="{0}"]/register-group'

        return self.dom.findall(search_term.format(module))

    def getModuleRegisterGroup(self, group):
        return self.dom.find(
            './/modules/module/register-group[@name="{}"]'.format(group)
        )

    def getAllModuleRegisters(self, module):
        return self.dom.findall(
            './/modules/module[@name="{0}"]/register-group/register'.format(module)
        )

    def getModuleRegisterValueGroup(self, module, group):
        return self.dom.find(
            './/modules/module[@name="{0}"]/value-group[@name="{1}"]'.format(
                module, group
            )
        )

    def getModuleUnion(self, union_name):
        return self.dom.find(
            './modules/module/register-group[@class="union"][@name="{}"]'.format(
                union_name
            )
        )

    def getAllRegisters(self, module, group):
        """ For a module and register group, return an array of all registers.
            Array entry being an array of [MODNAME, UNIONNAME, NAME, OFFSET, SIZE, CAPTION]
            Sorted by OFFSET.
        """
        regs = []
        for reg in self.getModuleRegisters(module, group):
            regs.append(
                [
                    reg.get("name"),
                    xint(reg.get("offset")),
                    xint(reg.get("size")),
                    reg.get("caption"),
                ]
            )
        return sorted(regs, key=lambda reg: reg[1])

    def getAllInterrupts(self):
        # Returns a sorted list of interrupts of the format:
        # [ base address, modnum, name, comment ]
        # Note, if name is None, then this is a group break, and only the comment should be used.
        # modnum is the number of the modules which share the IRQ, used for sorting.
        # ie, if two irq's share a offset, the first has a mod num of 0, the next 1, and so on.
        all_ints = []

        def get_modnum(index):
            modnum = 0
            for x in all_ints:
                if x[0] == index:
                    if x[1] >= modnum:
                        modnum = x[1] + 1

            return modnum

        last_instance = None
        for intr in self.dom.findall(".//interrupts/"):
            if intr.tag == "interrupt":
                """
                <interrupt index="10" module-instance="TCA0" name="LCMP0"/>
                """
                instance_name = intr.get("module-instance")
                intr_name = intr.get("name")

                name = "{}_{}_vect".format(instance_name, intr_name)
                comment = intr.get("caption")
                if comment is None:
                    comment = "{} - {} Interrupt".format(
                        intr.get("module-instance"), intr.get("name")
                    )

                intr_index = xint(intr.get("index"))
                modnum = get_modnum(intr_index)

                if instance_name != last_instance:
                    all_ints.append(
                        [
                            intr_index,
                            modnum,
                            None,
                            "{} interrupt vectors".format(instance_name),
                        ]
                    )
                    last_instance = instance_name

                all_ints.append([intr_index, modnum, name, comment])

            elif intr.tag == "interrupt-group":
                """
                <interrupt-group index="3" module-instance="EDMA" name-in-module="EDMA"/>

                ...

                <modules>
                    <module name="EDMA" id="I3002" version="XMEGAE" caption="Enhanced DMA Controller">
                        <interrupt-group name="EDMA">
                            <interrupt index="0" name="CH0" caption="EDMA Channel 0 Interrupt"/>
                            <interrupt index="1" name="CH1" caption="EDMA Channel 1 Interrupt"/>
                            <interrupt index="2" name="CH2" caption="EDMA Channel 2 Interrupt"/>
                            <interrupt index="3" name="CH3" caption="EDMA Channel 3 Interrupt"/>
                        </interrupt-group>
                    </module>
                </modules>
                """

                base_index = xint(intr.get("index"))
                instance_name = intr.get("module-instance")
                module_name = intr.get("name-in-module")

                for modintr in self.dom.findall(
                    './/modules/module/interrupt-group[@name="{}"]'.format(module_name)
                ):
                    for subintr in modintr:
                        intr_index = base_index + xint(subintr.get("index"))
                        modnum = get_modnum(intr_index)
                        subintr_name = subintr.get("name")

                        if last_instance != instance_name:
                            all_ints.append(
                                [
                                    intr_index,
                                    modnum,
                                    None,
                                    "{} interrupt vectors".format(instance_name),
                                ]
                            )
                            last_instance = instance_name

                        intr_name = modintr.get("name")
                        name = "{}_{}_vect".format(instance_name, subintr_name)
                        comment = modintr.get("caption")
                        if comment is None:
                            comment = "{} - {} Interrupt".format(
                                instance_name, subintr_name
                            )

                        all_ints.append([intr_index, modnum, name, comment])

            else:
                print("ERROR: Unkonwn interrupt entry {}".format(intr.tag))
                exit(1)

        return all_ints  # sorted(all_ints, key=int_sorting)

    def getPortDefinesFromPeripheralsModule(self):
        """ 
        Returns an array of peripherals found in the peripherals module, 
        with the format:

        <peripherals>
            <module name="PORT">
                <instance name="PORTB" caption="I/O Port">
                    <register-group name="PORTB" name-in-module="PORTB" offset="0x00" address-space="data" caption="I/O Port"/>
                    <signals>
                        <signal group="P" function="default" pad="PB0" index="0"/>
                        <signal group="P" function="default" pad="PB1" index="1"/>
                        <signal group="P" function="default" pad="PB2" index="2"/>
                        <signal group="P" function="default" pad="PB3" index="3"/>
                    </signals>
                </instance>
            </module>
        
        <peripherals>
            <module id="I2103" name="PORT">
                <instance name="PORTA">
                    <register-group address-space="data" name="PORTA" name-in-module="PORT" offset="0x0400"/>
                    <signals>
                        <signal function="IOPORT" group="PIN" index="0" pad="PA0"/>
                        <signal function="IOPORT" group="PIN" index="1" pad="PA1"/>
                        <signal function="IOPORT" group="PIN" index="2" pad="PA2"/>
                        <signal function="IOPORT" group="PIN" index="3" pad="PA3"/>
                        <signal function="IOPORT" group="PIN" index="4" pad="PA4"/>
                        <signal function="IOPORT" group="PIN" index="5" pad="PA5"/>
                        <signal function="IOPORT" group="PIN" index="6" pad="PA6"/>
                        <signal function="IOPORT" group="PIN" index="7" pad="PA7"/>
                    </signals>
                </instance>
        """
        defines = []
        portpins = 0
        last_portname = "PXX"
        module = self.getPeripheralModule("PORT")

        # aquire signal groups
        for signal_group in module.findall(".//instance/signals/signal"):
            portname = signal_group.get("pad")
            portindex = signal_group.get("index")
            # Line break between different ports.
            if last_portname[:-1] != portname[:-1]:
                defines.append(["", ""])
            if (portname is not None) and (portindex is not None):
                defines.append([portname, "({})".format(portindex)])
                portpins += 1
            last_portname = portname

        if portpins == 0:
            return None
        return defines

    def getVectorSize(self):
        pgmsize = xint(
            self.dom.find(
                ".//address-spaces/address-space/[@name='prog'][@id='prog']"
            ).get("size")
        )

        vectorsize = 0x02
        if pgmsize > 8196:
            vectorsize = 0x04

        return vectorsize

    def getAddressSpaces(self):
        return self.dom.findall(".//address-spaces/address-space")

    def getMemorySegment(self, name):
        return self.dom.find(
            './/address-spaces/address-space/memory-segment[@name="{}"]'.format(name)
        )

    def getMemorySegmentType(self, name):
        return self.dom.find(
            './/address-spaces/address-space/memory-segment[@type="{}"]'.format(name)
        )

    def getPropertyGroup(self, name):
        return self.dom.findall(
            './/property-groups/property-group[@name="{}"]/property'.format(name)
        )


GEN_IO_HEADER_ATDF_VERSION = "0.91"

# TODO: Extract the Microchip license directly from include/component-version.h
MicrochipLicense = """Generated Source Derived from data:
Copyright (c) 2019 Microchip Technology Inc.
                   
Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the Licence at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License. """

AVRLIBC3_License = """This file is part of avr-libc3.

Automatically created by devtools/gen-ioheader-atdf.py (V{0})

.atpack File: {1}
.ATDF File:   {2}
Version:      {3}
Date:         {4}
Device:       {5}
Architecture: {6}

Changelog:
"""

HEADER_BEGIN = """

#ifndef _AVR_IO_H_
#  error "Include <avr/io.h> instead of this file."
#endif

#ifndef _AVR_IOXXX_H_
#  define _AVR_IOXXX_H_ "io{0}.h"
#else
#  error "Attempt to include more than one <avr/ioXXX.h> file."
#endif

#ifndef _AVR_{0}_H_INCLUDED
#  define _AVR_{0}_H_INCLUDED

"""
C_SECTION_BEGIN = "#if !defined (__ASSEMBLER__)\n"

ASM_SECTION_BEGIN = "#else\n"

C_ASM_SECTION_END = "#endif\n"

MAX_COLUMN = 80


def sizeFields(data):
    """ Take a 2 dimensional array and calculate the maximum size each element of each array entry """
    results = []
    for row in data:
        c_count = 0
        for column in row:
            if len(results) <= c_count:
                results.append(len(column))
            elif len(column) > results[c_count]:
                results[c_count] = len(column)
            c_count += 1
    return results


def dir_path(string):
    if os.path.isdir(string):
        return string
    else:
        raise argparse.ArgumentTypeError(
            "{0} is not a valid directory path".format(string)
        )


def begin_block_comment():
    return "/" + "*" * (MAX_COLUMN - 2) + "\n"


def end_block_comment():
    return " " + "*" * (MAX_COLUMN - 2) + "/\n"


def commentblock_text(text=" ", indent=2):
    # indent a block of text a certain number of chanacters.
    comment_block = ""
    prefix = " * " + " " * indent
    postfix = " * "
    tlen = MAX_COLUMN - (len(prefix) + len(postfix))

    for line in text.split("\n"):
        comment_block += "{0}{1:<{3}.{3}}{2}\n".format(prefix, line, postfix, tlen)

    return comment_block


def commentblock_changelog(changelog, indent=8):
    # Print out a changelog.
    # indent a block of text a certain number of chanacters.
    comment_block = ""
    version_line = " * {:>8} {:>10} :"
    prefix = " *" + " " * indent + "- "
    postfix = " * "
    tlen = MAX_COLUMN - (len(prefix) + len(postfix))
    vlen = MAX_COLUMN - (len(version_line) + len(postfix))

    for entry in changelog:
        vline = version_line.format(entry[0], entry[1])
        vlen = MAX_COLUMN - (len(vline) + len(postfix))

        comment_block += "{0}{1:<{3}.{3}}{2}\n".format(vline, " ", postfix, vlen)

        for line in entry[2].split(". "):
            if len(line) > 0:
                if not line.endswith("."):
                    line = line + "."
                for subline in wrap(line.strip(), width=tlen):
                    comment_block += "{0}{1:<{3}.{3}}{2}\n".format(
                        prefix, subline, postfix, tlen
                    )

    return comment_block


def section_heading(text, divider="="):
    return """/*
{0}
{1}
{0}
*/\n\n""".format(
        divider * MAX_COLUMN, text
    )


def debug_group(group):
    try:
        print(etree.tostring(group, pretty_print=True).decode("utf-8"))
    except:
        print(*group)


def chk_size(string, size):
    if size >= len(string):
        return size
    return len(string)


all_defines = {}  # Dictionary of all defines.


def check_redefine(define, value, namespace="GLOBAL"):
    # Checks if define already specified.
    # If it is, checks its defined value.
    # If its the same, returns True
    # If its different, returns the value already defined
    # If it is not defined, returns False
    global all_defines

    if len(define) < 1:
        return False

    if namespace not in all_defines:
        all_defines[namespace] = {}

    if define in all_defines[namespace]:
        if value == all_defines[namespace][define]:
            return True
        else:
            return all_defines[namespace][define]

    if namespace != "GLOBAL":
        return check_redefine(define, value)

    return False


def emit_defines(defines, namespace="GLOBAL"):
    # Defines are [name, value, comment]
    # calculate field size, and show nicely aligned, thats all.
    # defines are checked for duplicates in the namespace, and globally
    global all_defines

    defoutput = ""
    nsize = 0
    vsize = 0

    # Get field sizes first.
    for define in defines:
        nsize = chk_size(define[0], nsize)
        vsize = chk_size(define[1], vsize)

    for define in defines:
        oldvalue = check_redefine(define[0], define[1], namespace)
        if oldvalue is not False:  # Its being redefined.
            if oldvalue is True:  # Its perfectly redefined, no problems.
                defoutput += "/* {0} ALREADY DEFINED */\n".format(define[0])
            else:  # ERROR, Redefinition tries to change value.  Emit error so building against this file will fail.
                # For some reason, plenty of files have enums with the SAME name, but different values.  In the same structure.
                defoutput += "/* WARNING: {0} ALREADY DEFINED as '{1}' NOT '{2}' */\n".format(
                    define[0], oldvalue, define[1]
                )
            continue

        if len(define[0]) > 0:
            # Record Define and its known value.
            all_defines[namespace][define[0]] = define[1]

            defoutput += "#define {0:<{1}} {2:<{3}} ".format(
                define[0], nsize, define[1], vsize
            )
        if (len(define) > 2) and (define[2] is not None) and (len(define[2]) > 0):
            defoutput += "/* {} */\n".format(define[2])
        else:
            defoutput += "\n"

    return defoutput


def emit_enum(data):
    enum_str = ""
    padding = sizeFields(data)

    for value in data:
        enum_str += "    {0:<{1}} = {2:<{3}}, /* {4} */\n".format(
            value[0], padding[0], value[1], padding[1], value[2]
        )
    return enum_str


def emit_UngroupedCommonRegisters(atdf):
    regs = []
    maxoffset = 0

    for module in ["CPU", "GPIO"]:
        module_instance = atdf.getModuleInstanceRegisters(module)
        if module_instance is not None:
            baseaddr = xint(module_instance.get("offset"))

            # First create an unsorted list of the registers.
            for register in atdf.getModuleRegisters(module):
                offset = xint(register.get("offset"))
                if offset > maxoffset:
                    maxoffset = offset
                regs.append(
                    [
                        register.get("name"),
                        baseaddr + offset,
                        register.get("caption"),
                        xint(register.get("size")),
                    ]
                )

    offsetlen = len("{:X}".format(maxoffset))

    defines = []
    if regs is not None:
        nextreg = None
        for reg in sorted(regs, key=lambda reg: reg[1]):
            if reg is not None:
                if (nextreg is not None) and (nextreg != reg[1]):
                    # Put a line gap between discontiguous addresses.
                    defines.append(["", ""])

                if reg[3] == 1:
                    sfrmem = "_SFR_MEM8 "
                elif reg[3] == 2:
                    sfrmem = "_SFR_MEM16"
                elif reg[3] == 4:
                    sfrmem = "_SFR_MEM32"
                else:
                    print("ERROR: Unknown size if SFR Register - {}".format(reg[3]))
                    exit(-1)

                defines.append(
                    [
                        reg[0],
                        "{0}(0x{1:{2}X})".format(sfrmem, reg[1], offsetlen),
                        reg[2],
                    ]
                )
                nextreg = reg[1] + reg[3]

    return emit_defines(defines)


def enumerate_mask(mask):
    # get all unique values defined by a bitmask. (as an array)
    maskvals = {}
    for val in range(mask + 1):
        maskvals[val & mask] = 1
    return sorted(maskvals.keys())


def emit_bitfields(atdf, module_name, group_name, bitfield):
    c_section = ""
    asm_section = ""

    # We do this because there are comments in the atdf and they are picked up as bitfields.
    if bitfield.tag != "bitfield":
        return c_section, asm_section

    reg_bitfields = len(bitfield.getparent().findall("bitfield"))

    # Array of [Name, Value, comment] (idx = value as an integer, everything else is a string)
    enumdata = []

    bitfield_name = bitfield.get("name")
    bitfield_caption = bitfield.get("caption")
    if (bitfield_caption is None) or (len(bitfield_caption) == 0):
        bitfield_caption = "{}-{}".format(
            bitfield.getparent().get("caption"), bitfield.get("name")
        )
    # Emit Enums for field values
    bitvalue = bitfield.get("values")
    valgroup = None
    if bitvalue is not None:
        valgroup = atdf.getModuleRegisterValueGroup(module_name, bitvalue)

    def add_constant(value, state_name, comment, comment_suffix=None):

        cmtstr = "{}"
        if comment_suffix is not None:
            cmtstr += " - {}"

        enumdata.append(
            [
                "{}_{}_{}_gc".format(group_name, bitfield_name, state_name),
                value,
                cmtstr.format(comment, comment_suffix),
            ]
        )

    mask = xint(bitfield.get("mask"))
    if valgroup is None:

        # No Value group so invent enum for field from known data
        bits = bin(mask).count("1")  # Number of set bits
        reg = bitfield.getparent()
        if reg.tag != "register":
            reg = reg.getparent()
        max_bits = xint(reg.get("size")) * 8
        if bits == 1:
            # Single bit field
            add_constant("(0x00)", "CLEAR", bitfield_caption, "CLEAR")
            add_constant("(0x{:02X})".format(mask), "SET", bitfield_caption, "SET")
        elif (bits != max_bits) and (reg_bitfields > 1):
            # Multi bit field that does not occupy whole register
            shift = int(math.log2(mask & -mask))  # Get first set bit in mask.
            fval = "(x & 0x{0:02X})"
            if shift != 0:
                fval = "((x<<{1}) & 0x{0:02X})"

            numval_field = "\n/* {} */\n#define {}_{}_{}_gc(x) {}\n".format(
                bitfield_caption,
                group_name,
                reg.get("name"),
                bitfield_name,
                fval.format(mask, shift),
            )
            c_section += numval_field
            asm_section += numval_field
    else:
        shift = int(math.log2(mask & -mask))  # Get first set bit in mask.
        fval = "(0x{:02X})"
        if shift != 0:
            fval = "(0x{:02X}<<{})"

        for value in valgroup:
            add_constant(
                fval.format(xint(value.get("value")), shift),
                value.get("name"),
                value.get("caption"),
            )

    if len(enumdata) > 0:
        c_section += "\n/* {} */\n".format(bitfield_caption)
        c_section += "typedef enum {}_{}_enum\n{{\n".format(group_name, bitfield_name)
        c_section += emit_enum(enumdata)
        c_section += "}} {}_{}_t;\n".format(group_name, bitfield_name)

        asm_section += "\n/* {} */\n".format(bitfield_caption)
        asm_section += emit_defines(enumdata)
        asm_section += "\n"

    return c_section, asm_section


def emit_IOModuleStructures(atdf):
    # iterate all <module>
    c_section = ""
    asm_section = ""

    unions = []

    for module in atdf.getAllModules():
        module_name = module.get("name")

        # First we emit the register structures of the Module
        # And save any union information we come across for separate processing.
        for register_group in atdf.getAllModuleRegisterGroups(module_name):

            c_section += "\n"
            c_section += section_heading(
                "{} - {}".format(module.get("name"), module.get("caption")), divider="-"
            )

            asm_section += "\n"
            asm_section += section_heading(
                "{} - {}".format(module.get("name"), module.get("caption")), divider="-"
            )

            if register_group.get("class") == "union":
                unions.append(register_group)
            else:
                group_name = register_group.get("name")

                regs = []
                last_offset = -1
                for reg in atdf.getAllRegisters(module_name, group_name):
                    rsv_cnt = reg[1] - (last_offset + 1)

                    if rsv_cnt == 1:
                        regs.append(
                            [
                                "register8_t",  # Type
                                "rsv_0x{:02X};".format(last_offset + 1),  # name
                                "RESERVED REGISTER",  # comment
                            ]
                        )
                    elif rsv_cnt != 0:
                        regs.append(
                            [
                                "register8_t",  # Type
                                "rsv_0x{:02X}[{}];".format(
                                    last_offset + 1, rsv_cnt
                                ),  # name
                                "RESERVED REGISTER BLOCK",  # comment
                            ]
                        )
                    last_offset = reg[1]

                    if reg[2] == 1:
                        reg_type = "register8_t"
                        reg_name = "{};".format(reg[0])
                    elif reg[2] == 2:
                        reg_type = "_REGISTER16"
                        reg_name = "({});".format(reg[0])
                    elif reg[2] == 4:
                        reg_type = "_REGISTER32"
                        reg_name = "({});".format(reg[0])
                    else:
                        print("ERROR: unknown register size={}".format(reg[2]))
                        sys.exit(-1)

                    regs.append([reg_type, reg_name, reg[3]])  # Type  # name  # comment

                if len(regs) > 0:
                    padding = sizeFields(regs)

                    # Emit Structure of registers
                    c_section += "typedef struct {}_struct\n{{\n".format(group_name)

                    for reg in regs:
                        fstr = "    {0:<{1}} {2:<{3}}\n"
                        if len(reg[2]) > 0:
                            fstr = fstr.rstrip() + " /* {4} */\n"

                        c_section += fstr.format(
                            reg[0], padding[0], reg[1], padding[1], reg[2]
                        )

                    c_section += "}} {}_t;\n\n".format(group_name)

        # THEN, we emit the saved unions, if any.
        for union in unions:
            """ 
            <register-group caption="16-bit Timer/Counter Type A" class="union" name="TCA" size="0x40" union-tag="TCA.SINGLE.CTRLD.SPLITM">
                <register-group name="SINGLE" name-in-module="TCA_SINGLE" offset="0" union-tag-value="0"/>
                <register-group name="SPLIT" name-in-module="TCA_SPLIT" offset="0" union-tag-value="1"/>
            </register-group>
            """

            # Text format the union information
            regs = []

            for reg in union:  # A union is a register-group we process specially
                union_name = union.get("name")
                regs.append(
                    [
                        "{}_t".format(reg.get("name-in-module")),
                        "{};".format(reg.get("name")),
                        "{0} = {1}".format(
                            register_group.get("union-tag"), reg.get("union-tag-value")
                        ),
                    ]
                )

            padding = sizeFields(regs)

            # Then we emit the register information:
            caption = union.get("caption")
            if len(caption) == 0:
                print("ERROR: Missing Caption in UNION")
                exit(-1)

            c_section += "/* {} */\n".format(caption)

            c_section += "typedef union {}_union {{\n".format(union_name)

            for subreg in regs:
                c_section += "    {0:<{1}} {2:<{3}} /* {4} */\n".format(
                    subreg[0], padding[0], subreg[1], padding[1], subreg[2]
                )

            c_section += "}} {}_t;\n\n".format(union_name)

        # NOW we emit the enums which define the fields we can use in the registers.
        # And generate matching #defines for use when we use assembler.
        for reggroup in atdf.getAllModuleRegisterGroups(module_name):
            group_name = reggroup.get("name")
            for reg in reggroup:

                def process_bitfield(mode_name, bitfields):
                    nonlocal c_section
                    nonlocal asm_section

                    for bitfield in bitfields:
                        new_c_section, new_asm_section = emit_bitfields(
                            atdf, module_name, mode_name, bitfield
                        )
                        if len(new_c_section) > 0:
                            c_section += new_c_section
                            asm_section += new_asm_section

                if reg.find("./mode") != None:
                    for mode in reg:
                        mode_name = "{}_{}".format(group_name, mode.get("name"))
                        process_bitfield(mode_name, mode)
                else:
                    process_bitfield(group_name, reg)

    return c_section, asm_section


def emit_IOModuleInstances(atdf):
    regs = []
    defines = []
    for module in atdf.getAllPeripheralModules():
        # order all by offset
        for register in module.findall(".//register-group"):
            regs.append([xint(register.get("offset")), register])

    for reg in sorted(regs, key=lambda reg: reg[0]):
        module_name = reg[1].get("name-in-module")

        module = atdf.getModuleRegisterGroup(module_name)
        module_comment = module.get("caption")
        defines.append(
            [
                reg[1].get("name"),
                "(*({}_t *) 0x{:04X})".format(module_name, reg[0]),
                module_comment,
            ]
        )

    return emit_defines(defines)


def emit_IORegisterNames(atdf):
    def fmtAddress(address, size, width):
        return "_SFR_MEM{:<2}(0x{:0{}X})".format(size * 8, address, width)

    ##
    ## IO register names
    ##
    new_header = ""
    reg_group = []
    for module in atdf.getAllPeripheralModules():
        # order all by offset
        for register in module.findall(".//register-group"):
            reg_group.append([xint(register.get("offset")), register])

    group_cnt = 0
    regs = []
    max_reg = 0

    for group in sorted(reg_group, key=lambda reg_group: reg_group[0]):
        module_name = group[1].get("name-in-module")
        group_offset = xint(group[1].get("offset"))
        periph_instance = group[1].getparent()
        periph_instance_name = periph_instance.get("name")
        periph_module = periph_instance.getparent()
        periph_module_name = periph_module.get("name")

        # None Unions have one register group, identified by their name
        reg_groups = [module_name]
        union = atdf.getModuleUnion(module_name)
        if union is not None:
            for reg in atdf.getModuleUnion(module_name):
                reg_groups.append(reg.get("name-in-module"))

        for group_name in reg_groups:
            for reg in atdf.getModuleRegisters(periph_module.get("name"), group_name):
                # Get Module Reg Group Caption
                group_caption = reg.getparent().get("caption")

                if group_caption is None:  # No Module Reg Group Caption
                    # Get Module Caption
                    group_caption = reg.getparent().getparent().get("caption")

                if group_caption is None:  # No Instance Caption
                    group_caption = group[1].get("caption")

                if group_name.startswith(periph_module_name):
                    base_name = group_name.replace(
                        periph_module_name, periph_instance_name, 1
                    )
                else:
                    base_name = periph_module_name
                reg_name = "{}_{}".format(base_name, reg.get("name"))

                reg_offset = xint(reg.get("offset"))

                regs.append(
                    [
                        group_cnt,
                        group_offset,
                        reg_offset,
                        xint(reg.get("size")),
                        periph_instance_name,
                        base_name,
                        reg_name,
                        group_caption,
                        reg.get("caption"),
                    ]
                )
                if (group_offset + reg_offset) > max_reg:
                    max_reg = reg_offset
            group_cnt += 1

    defines = []
    prev_group_comment = ""
    if max_reg >= 0xFF:
        reg_addr_size = 2
    else:
        reg_addr_size = 4

    for reg in sorted(regs, key=lambda reg: (reg[0] * 0x1000000) + reg[1] + reg[2]):
        group_comment = "{} - {} (0x{:0{}X})".format(
            reg[4], reg[7], reg[1], reg_addr_size
        )
        if group_comment != prev_group_comment:
            defines.append(["", "", ""])
            defines.append(["", "", group_comment])
            defines.append(
                [
                    "{}_BASE".format(reg[5]),
                    fmtAddress(reg[1], reg[3], reg_addr_size),
                    "{} Base Address".format(reg[5]),
                ]
            )
            prev_group_comment = group_comment
        defines.append(
            [reg[6], fmtAddress(reg[1] + reg[2], reg[3], reg_addr_size), reg[8]]
        )

        if reg[3] == 2:
            defines.append(
                [
                    reg[6] + "L",
                    fmtAddress(reg[1] + reg[2], 1, reg_addr_size),
                    "{} LOW BYTE".format(reg[8]),
                ]
            )
            defines.append(
                [
                    reg[6] + "H",
                    fmtAddress(reg[1] + reg[2] + 1, 1, reg_addr_size),
                    "{} HIGH BYTE".format(reg[8]),
                ]
            )
        elif reg[3] == 4:
            defines.append(
                [
                    reg[6] + "L",
                    fmtAddress(reg[1] + reg[2], 2, reg_addr_size),
                    "{} LOW WORD".format(reg[8]),
                ]
            )
            defines.append(
                [
                    reg[6] + "0",
                    fmtAddress(reg[1] + reg[2], 1, reg_addr_size),
                    "{} LOW BYTE".format(reg[8]),
                ]
            )
            defines.append(
                [
                    reg[6] + "1",
                    fmtAddress(reg[1] + reg[2] + 1, 1, reg_addr_size),
                    "{} 2nd BYTE".format(reg[8]),
                ]
            )
            defines.append(
                [
                    reg[6] + "H",
                    fmtAddress(reg[1] + reg[2] + 2, 2, reg_addr_size),
                    "{} HIGH WORD".format(reg[8]),
                ]
            )
            defines.append(
                [
                    reg[6] + "2",
                    fmtAddress(reg[1] + reg[2] + 2, 1, reg_addr_size),
                    "{} 3rd BYTE".format(reg[8]),
                ]
            )
            defines.append(
                [
                    reg[6] + "3",
                    fmtAddress(reg[1] + reg[2] + 3, 1, reg_addr_size),
                    "{} HIGH BYTE".format(reg[8]),
                ]
            )

    new_header += emit_defines(defines)

    return new_header


def emit_aliases(atdf):

    c_section = ""

    # AVR-LIBC3 Alias
    # FUSE aliases
    c_section += "/* avr-libc typedef for avr/fuse.h */\n"
    c_section += "typedef FUSE_t NVM_FUSES_t;\n\n"

    return c_section


def emit_interrupt_vectors(atdf):
    new_header = ""
    ##
    # Interrupt vectors
    ##
    new_header += section_heading("Interrupt Vector Definitions")
    new_header += "/* Vector 0 is the reset vector */\n"

    defines = []
    # Make an list of all interrupts, both directly defined and in groups.
    # then emit the vector table by sorting by absolute offset.
    for interrupt in atdf.getAllInterrupts():
        if interrupt[2] is None:
            # Section Label
            defines.append(["", "", None])
            defines.append(["", "", interrupt[3]])
        else:
            defines.append(
                ["{}_num".format(interrupt[2]), "({})".format(interrupt[0]), ""]
            )
            defines.append(
                [interrupt[2], "_VECTOR({})".format(interrupt[0]), interrupt[3]]
            )

    vectorsize = atdf.getVectorSize()

    defines.append(["", ""])
    defines.append(["", "", "Vector Table Size"])
    defines.append(
        ["_VECTOR_SIZE", "({})".format(vectorsize), "Size of individual vector."]
    )
    defines.append(
        [
            "_VECTORS_SIZE",
            "({} * _VECTOR_SIZE)".format(interrupt[0] + 1),
            "Size of all vectors",
        ]
    )

    new_header += emit_defines(defines)
    return new_header


def emit_constants(atdf):
    ##
    # Constants
    ##
    new_header = ""

    new_header += section_heading("Constants")

    for addrspace in atdf.getAddressSpaces():

        space = addrspace.get("id").upper()

        defines = []

        defines.append(
            [
                "{}MEM_START".format(space),
                "(0x{:04X})".format(xint(addrspace.get("start"))),
            ]
        )
        defines.append(
            [
                "{}MEM_SIZE".format(space),
                "(0x{:04X})".format(xint(addrspace.get("size"))),
            ]
        )
        defines.append(
            [
                "{}MEM_END".format(space),
                "({0}MEM_START + {0}MEM_SIZE - 1)".format(space),
            ]
        )
        defines.append(["", ""])  # Causes a newline on emission

        for segment in addrspace.findall("memory-segment"):

            name = segment.get("name")

            pagesize = 1  # Default to a pagesize of 1 byte.  Not 0 as previously set.
            # if entry exists
            if segment.get("pagesize"):
                pagesize = xint(segment.get("pagesize"))

            defines.append(
                [
                    "{}_START".format(name),
                    "(0x{:04X})".format(xint(segment.get("start"))),
                ]
            )
            defines.append(
                ["{}_SIZE".format(name), "(0x{:04X})".format(xint(segment.get("size")))]
            )
            defines.append(["{}_PAGE_SIZE".format(name), "(0x{:04X})".format(pagesize)])
            defines.append(
                ["{}_END".format(name), "({0}_START + {0}_SIZE - 1)".format(name)]
            )
            defines.append(["", ""])  # Causes a newline on emission

            # mapped alias EEPROM
            if name == "EEPROM":
                if check_redefine("MAPPED_EEPROM_START", "(EEPROM_START)") is False:
                    defines.append(
                        ["", "", "Added MAPPED_EEPROM segment names for avr-libc"]
                    )
                    defines.append(["MAPPED_EEPROM_START", "(EEPROM_START)"])
                    defines.append(["MAPPED_EEPROM_SIZE", "(EEPROM_SIZE)"])
                    defines.append(["MAPPED_EEPROM_PAGE_SIZE", "(EEPROM_PAGE_SIZE)"])
                    defines.append(["MAPPED_EEPROM_END", "(EEPROM_END)"])
                    defines.append(["", ""])  # Causes a newline on emission

        new_header += emit_defines(defines)
    return new_header


def emit_portpins(atdf):
    ##
    # IO Ports - Consistent Definitions that can be used by portpins.h
    # YAY Consistency, there at seemingly AT LEAST 3 different ways port pins are defined,
    # so we need to try them all in order of preference.
    ##
    new_header = ""

    defines = []
    defines.append(["", "", "============ Port Bits ============"])
    defines.append(["", ""])

    """ 
    <peripherals>
        <module name="PORT">
            <instance name="PORTB" caption="I/O Port">
                <register-group name="PORTB" name-in-module="PORTB" offset="0x00" address-space="data" caption="I/O Port"/>
                <signals>
                    <signal group="P" function="default" pad="PB0" index="0"/>
                    <signal group="P" function="default" pad="PB1" index="1"/>
                    <signal group="P" function="default" pad="PB2" index="2"/>
                    <signal group="P" function="default" pad="PB3" index="3"/>
                </signals>
            </instance>
        </module>
    
    <peripherals>
        <module id="I2103" name="PORT">
            <instance name="PORTA">
                <register-group address-space="data" name="PORTA" name-in-module="PORT" offset="0x0400"/>
                <signals>
                    <signal function="IOPORT" group="PIN" index="0" pad="PA0"/>
                    <signal function="IOPORT" group="PIN" index="1" pad="PA1"/>
                    <signal function="IOPORT" group="PIN" index="2" pad="PA2"/>
                    <signal function="IOPORT" group="PIN" index="3" pad="PA3"/>
                    <signal function="IOPORT" group="PIN" index="4" pad="PA4"/>
                    <signal function="IOPORT" group="PIN" index="5" pad="PA5"/>
                    <signal function="IOPORT" group="PIN" index="6" pad="PA6"/>
                    <signal function="IOPORT" group="PIN" index="7" pad="PA7"/>
                </signals>
            </instance>
    """

    portpins = 0
    module = atdf.getPeripheralModule("PORT")
    if module is not None:
        last_portname = "PXX"

        # aquire signal groups
        for signal_group in module.findall(".//instance/signals/signal"):
            portname = signal_group.get("pad")
            portindex = signal_group.get("index")
            # Line break between different ports.
            if last_portname[:-1] != portname[:-1]:
                defines.append(["", ""])
            if (portname is not None) and (portindex is not None):
                defines.append([portname, "({})".format(portindex)])
                portpins += 1
            last_portname = portname

    if portpins == 0:
        # No Portpins found with primary method.  Fallback to looking at the module.
        """
        <modules>
            <module caption="I/O Port" name="PORT">
                <register-group caption="I/O Port" name="PORTB">
                    <register caption="Data Register, Port B" name="PORTB" offset="0x18" size="1" mask="0x1F"/>
                    <register caption="Data Direction Register, Port B" name="DDRB" offset="0x17" size="1" mask="0x1F"/>
                    <register caption="Input Pins, Port B" name="PINB" offset="0x16" size="1" mask="0x3F"/>
                </register-group>
            </module>       
        </modules>

        OR

        <modules>
            <module caption="" name="PORTA">
                <register-group caption="" name="PORTA">
                    <register caption="Port A Data Register" name="PORTA" offset="0x22" size="1" mask="0xFF"/>
                    <register caption="Port A Data Direction Register" name="DDRA" offset="0x21" size="1" mask="0xFF"/>
                    <register caption="Port A Input Pins" name="PINA" offset="0x20" size="1" mask="0xFF"/>
                </register-group>
            </module>
            <module caption="" name="PORTB">
                <register-group caption="" name="PORTB">
                    <register caption="Port B Data Register" name="PORTB" offset="0x25" size="1" mask="0xFF"/>
                    <register caption="Port B Data Direction Register" name="DDRB" offset="0x24" size="1" mask="0xFF"/>
                    <register caption="Port B Input Pins" name="PINB" offset="0x23" size="1" mask="0xFF" ocd-rw="R"/>
                </register-group>
            </module>
        </modules>=
        """
        for modulename in atdf.getAllModuleNames():
            if modulename.startswith("PORT"):
                for register_group in atdf.getAllModuleRegisterGroups(modulename):
                    portname = register_group.get("name")
                    for reg in register_group.findall(
                        './/register[@name="{}"]'.format(portname)
                    ):
                        mask = reg.get("mask")
                        if mask is not None:
                            bits = xint(mask)
                        else:
                            # Check if we have bitfields, and then OR them together to get a mask.
                            bits = 0
                            for bitfield in reg:
                                mask = bitfield.get("mask")
                                if mask is not None:
                                    bits = bits | xint(mask)

                        bitcount = 0
                        while bits > 0:
                            if (bits | 0x1) != 0:
                                defines.append(
                                    [
                                        "{}{}".format(portname, bitcount),
                                        "({})".format(bitcount),
                                    ]
                                )
                                portpins += 1
                            bits >>= 1
                            bitcount += 1

    if portpins == 0:
        # Third fallback - Just look for ports defined, and assume all 8 bits are present.
        """
        <peripherals>
            <module name="PORT" id="I6075" version="XMEGAAU">
                <instance name="PORTA">
                    <register-group address-space="data" offset="0x0600" name-in-module="PORT" name="PORTA"/>
                </instance>
                <instance name="PORTB">
                    <register-group address-space="data" offset="0x0620" name-in-module="PORT" name="PORTB"/>
                </instance>
                <instance name="PORTC">
                    <register-group address-space="data" offset="0x0640" name-in-module="PORT" name="PORTC"/>
                </instance>
                <instance name="PORTD">
                    <register-group address-space="data" offset="0x0660" name-in-module="PORT" name="PORTD"/>
                </instance>
                <instance name="PORTE">
                    <register-group address-space="data" offset="0x0680" name-in-module="PORT" name="PORTE"/>
                </instance>
                <instance name="PORTF">
                    <register-group address-space="data" offset="0x06A0" name-in-module="PORT" name="PORTF"/>
                </instance>
                <instance name="PORTR">
                    <register-group address-space="data" offset="0x07E0" name-in-module="PORT" name="PORTR"/>
                </instance>
            </module>
        </peripherals>
        """
        module = atdf.getPeripheralModule("PORT")
        # aquire instances
        for instance in module.findall(".//instance"):
            portname = instance.get("name")

            for bit in range(8):
                defines.append(["{}{}".format(portname, bit), "({})".format(bit)])
                portpins += 1

    if portpins == 0:
        print("ERROR: No Port Pins WTF")
        exit()

    defines.append(["", ""])

    new_header += emit_defines(defines)

    return new_header


def emit_fuses(atdf):
    ##
    # Fuses
    ##
    new_header = ""
    defines = []

    fusesize = xint(atdf.getMemorySegment("FUSES").get("size"))

    new_header += section_heading("Fuses/LockBits/Signatures")

    defines.append(["", "", "============ Fuses ============"])
    defines.append(["", ""])

    defines.append(["FUSE_MEMORY_SIZE", "{}".format((fusesize - 1))])
    defines.append(["", ""])

    new_header += emit_defines(defines)

    fuses = {}
    for register in atdf.getModuleRegisters("FUSE"):
        # order by offset
        fuses[xint(register.get("offset"))] = register

    for f in range(fusesize):
        defines = []

        defines.append(["", "", "Fuse offset 0x{:02X}".format(f)])

        if f in fuses:

            bits = {}
            for bitfield in fuses[f].findall(".//bitfield"):
                mask = "%s" % bin(int(bitfield.get("mask"), 16))
                # compute first bit position
                firstbit = mask[::-1].index("1")
                bits[firstbit] = bitfield

            for bit in sorted(bits.keys()):

                # compute bits start and span
                mask = "%s" % bin(int(bits[bit].get("mask"), 16))
                firstbit = mask[::-1].index("1")
                bitspans = mask.count("1")

                if bitspans == 1:
                    defines.append(
                        [
                            bits[bit].get("name"),
                            "(unsigned char)~_BV({})".format(firstbit),
                            bits[bit].get("caption"),
                        ]
                    )
                else:
                    for b in range(bitspans):
                        defines.append(
                            [
                                "{}{}".format(bits[bit].get("name"), b),
                                "(unsigned char)~_BV({})".format(firstbit + b),
                                "{} bit {}".format(bits[bit].get("caption"), b),
                            ]
                        )
            defines.append(["", ""])  # Emit newline
        else:
            defines.append(["", ""])  # Emit newline

        new_header += emit_defines(defines)

    return new_header


def emit_lockbits(atdf):
    ##
    ## Lockbits
    ##

    defines = []

    defines.append(["", ""])
    defines.append(["", "", "========== Lock Bits =========="])

    lockbits = atdf.getMemorySegmentType("lockbits")

    if lockbits is None:
        defines.append(["", "", "__LOCK_BITS_DO_NOT_EXIST"])
    else:
        defines.append(["__LOCK_BITS_EXIST", ""])

    defines.append(["", ""])

    return emit_defines(defines)


def emit_signature(atdf):
    defines = []

    defines.append(["", ""])
    defines.append(["", "", "========== Signature =========="])

    for signature in atdf.getPropertyGroup("SIGNATURES"):
        name = signature.get("name")
        if name.startswith("SIGNATURE"):
            sid = name[9:]

            svalue = xint(signature.get("value"))
            defines.append(["SIGNATURE_{}".format(sid), "(0x{:02X})".format(svalue)])

    return emit_defines(defines)


def process_atdf(data, pack, filename, changelog):
    # Process an .atdf XML file and generate a C/ASM header file.
    # data : the textual data of the .atdf XML file.
    # changelog : Changelog information to embed in the file header.
    global all_defines
    all_defines = {}  # Reset known defines for this file.

    new_header = ""

    atdf = AVR_ATDF_File(data)
    devname = atdf.getDeviceName()
    arch = atdf.getArchitecture()

    ##
    # license/file header
    ##

    new_header += begin_block_comment()
    new_header += commentblock_text(
        AVRLIBC3_License.format(
            GEN_IO_HEADER_ATDF_VERSION,
            pack,
            filename,
            changelog[0][0],
            changelog[0][1],
            devname,
            arch,
        )
    )

    new_header += commentblock_changelog(changelog)

    new_header += commentblock_text()
    new_header += commentblock_text(MicrochipLicense)

    new_header += end_block_comment()

    ##
    # header sequence
    ##
    new_header += HEADER_BEGIN.format(devname)

    ##
    # Common Registers
    ##
    new_header += section_heading("Ungrouped common register")
    new_header += emit_UngroupedCommonRegisters(atdf)
    new_header += "\n\n"

    ##
    # C header sequence
    ##
    new_header += section_heading("C LANGUAGE - ONLY", divider="~")
    new_header += C_SECTION_BEGIN

    ##
    # IO Module structures
    ##

    new_header += section_heading("IO Module Structures")

    c_section, asm_section = emit_IOModuleStructures(atdf)

    c_section += section_heading("IO Module Instances. Mapped to memory.")

    c_section += emit_IOModuleInstances(atdf)

    new_header += c_section

    new_header += ASM_SECTION_BEGIN
    new_header += section_heading("ASM LANGUAGE - ONLY", divider="~")
    new_header += asm_section

    new_header += C_ASM_SECTION_END
    new_header += "\n"

    new_header += section_heading("C/ASM COMMON DEFINITIONS", divider="~")

    new_header += section_heading("Flattened fully qualified IO register names")

    new_header += emit_IORegisterNames(atdf)

    new_header += emit_aliases(atdf)

    new_header += emit_interrupt_vectors(atdf)

    new_header += emit_constants(atdf)

    new_header += emit_portpins(atdf)

    new_header += emit_fuses(atdf)

    new_header += emit_lockbits(atdf)

    new_header += emit_signature(atdf)

    # Close out header file.
    new_header += "\n#endif /* #ifdef _AVR_{}_H_INCLUDED */\n".format(devname)
    return new_header


def process_pdsc(data):
    # Process the pdsc file to extract the version and changelog.
    # Return a formated changelog and date/time string that can be
    # embedded into the generated header files.
    changelog = []

    root = etree.fromstring(data)
    for release in root.iterfind("releases/release"):
        ver = release.get("version")
        date = release.get("date")
        changes = release.text

        if ver is None:
            ver = "??.??"
        if date is None:
            date = "UNKNOWN"
        if changes is None:
            changes = "NO LISTED CHANGES"

        changelog.append([ver, date, changes])

    if len(changelog) < 1:
        changelog = [[None, None, None]]

    return changelog


import urllib.request
import re


def dl_file(url, destination):
    resp = urllib.request.urlopen(url)
    length = int(resp.getheader("content-length"))
    blocksize = 4096

    outfilename = "{}/temp.atdf".format(destination)
    basefilename = url[url.rfind("/") + 1 :]
    destfilename = "{}/{}".format(destination, basefilename)
    outfile = open(outfilename, "w+b")
    size = 0.0
    while True:
        buf = resp.read(blocksize)
        if not buf:
            break
        outfile.write(buf)
        size += len(buf)
        print(
            "Downloading {} : {} bytes : {:.2f}%\r".format(
                basefilename, length, size / length * 100
            ),
            end="",
        )
    outfile.close()
    print("\nDONE.  Verifying")
    zip = zipfile.ZipFile(outfilename)
    if zip.testzip() is None:
        print("Verified OK.")
        os.rename(outfilename, destfilename)
    else:
        print("ERROR: File Failed to Verify!!!")
        os.remove(outfilename)


def fetch_microchip_packs(cachedir):
    def check_filename_is_avr(filename):
        # Check if the filename represents an AVR processor, or NOT.
        # returns True if it does, false otherwise.
        if filename.startswith("Microchip.AT"):
            return True
        if filename.startswith("Microchip.XMEGA"):
            return True
        return False

    def synthetic_version(data):
        return (xint(data[2]) * 1000000) + (xint(data[3]) * 1000) + xint(data[4])

    MICROCHIP_PACK_SOURCE = "https://packs.download.microchip.com"
    print("Downloading list of .atpack files from Microchip.  Please Wait...")
    atdf_source = urllib.request.urlopen(MICROCHIP_PACK_SOURCE).read().decode("utf-8")

    print("Processing...")
    files = {}
    matches = re.findall('data-link="(.*atpack)"', atdf_source)
    for (
        filename
    ) in matches:  # A List of all .atpack files being distributed by Microchip
        if check_filename_is_avr(filename):
            filedata = filename.split(".")
            filedata.append(filename)
            if filedata[1] in files:
                # Check if the data is the latest version
                if synthetic_version(filedata) > synthetic_version(files[filedata[1]]):
                    files[filedata[1]] = filedata
            else:
                files[filedata[1]] = filedata

    # Now have list of relevant .atdf files.
    # Check files in cachedir
    cachefiles = []
    for cachefile in os.listdir(cachedir):
        if cachefile.endswith(".atpack"):
            cachefiles.append(cachefile)

    for file in cachefiles:
        cachefile = "{}/{}".format(cachedir, file)

        parts = file.split(".")  # Get file components.
        # FIRST: Delete unknown .atdf files.
        if parts[1] not in files:
            print(
                "\nCache File {} Unknown.  Removing from Cache Directory".format(file)
            )
            os.remove(cachefile)
            continue

        # Check if its current
        if synthetic_version(parts) != synthetic_version(files[parts[1]]):
            print(
                "\nCache File {} Invalid Version. Should be {}.{}.{}.  Removing from Cache Directory".format(
                    file, files[parts[1]][2], files[parts[1]][3], files[parts[1]][4]
                )
            )
            os.remove(cachefile)
            continue
        else:
            # It is current, so verify if its valid.
            print("\nTesting cached .atdf file: {}".format(file))
            atdf_file = zipfile.ZipFile(cachefile)
            if atdf_file.testzip() is not None:
                print("ATDF File is Corrupted! Removing from Cache Directory")
                os.remove(cachefile)
            else:
                # File is good, and is valid so no need to download.
                print("Cached ATDF File is OK! No need to download.")
                files.pop(parts[1], None)

    # By now files ONLY contains files we NEED to get from Microchip
    for dlkey in files:
        # Download them one by one
        dl_file("{}/{}".format(MICROCHIP_PACK_SOURCE, files[dlkey][6]), cachedir)


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument(
        "packdir",
        help="Directory containing Atmel/Microchip device Packs for AVR devices.",
        type=dir_path,
    )
    parser.add_argument(
        "outputdir",
        nargs="?",
        help="Directory to output converted headerfiles into. If not specified, nothing is saved.",
        type=dir_path,
        default=None,
    )
    parser.add_argument(
        "-s",
        "--skip-atpack-check",
        action="store_true",
        help="Do not check for new atpacks from microchip",
    )
    parser.add_argument(
        "-d", "--dump", action="store_true", help="Dump output to stdout"
    )
    parser.add_argument(
        "-m",
        "--mcu",
        help="Specify the AVR MCU to generate for.  Default is ALL if not specified.",
    )
    args = parser.parse_args()

    processed_atpacks = 0
    changelog = []
    if not args.skip_atpack_check:  # Dont skip atpack checks
        fetch_microchip_packs(args.packdir)

    if (args.outputdir is None) and (not args.dump):
        # Dont generate headers.
        exit(1)

    for filename in os.listdir(args.packdir):
        if filename.endswith(".atpack"):
            processed_atpacks += 1
            fullname = "{}{}".format(args.packdir, filename)
            # extract version from filename
            print("Processing {}".format(fullname))

            with zipfile.ZipFile(fullname, "r") as atpack:
                processed_atdfs = 0

                for pdsc in atpack.namelist():
                    if pdsc.endswith(".pdsc"):
                        print("    Processing {}".format(pdsc))
                        pdsc_data = atpack.read(pdsc)
                        changelog = process_pdsc(pdsc_data)

                for atdf in atpack.namelist():
                    filename = os.path.basename(atdf)
                    if (args.mcu is not None) and (
                        filename.lower() != "{}.atdf".format(args.mcu.lower())
                    ):
                        continue  # Don't process this file.

                    if atdf.endswith(".atdf"):
                        # then it IS an .atdf file to be processed.
                        print("    Processing {}".format(atdf))
                        atdf_data = atpack.read(atdf)
                        header_file = process_atdf(atdf_data, filename, atdf, changelog)

                        if args.dump:
                            print(header_file)

                        if args.outputdir is not None:
                            filename = (
                                os.path.join(args.outputdir, filename[:-5].lower())
                                + ".h"
                            )
                            print("        Saving {}".format(filename))
                            outfile = open(filename, "w+")
                            outfile.write(header_file)
                            outfile.close()

                        processed_atdfs += 1
                if processed_atpacks == 0:
                    print("No ATDF Files found in {}".format(fullname))

        else:
            continue

    if processed_atpacks == 0:
        print("No ATDF Pack Files found in {}".format(args.packdir))


if __name__ == "__main__":
    main()
