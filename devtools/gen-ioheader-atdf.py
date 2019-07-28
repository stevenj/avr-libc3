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

GEN_IO_HEADER_ATDF_VERSION = "0.90"

import argparse
import os, sys
import zipfile
from lxml import etree
from textwrap import wrap
import pprint

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
C_SECTION_BEGIN = """
#if !defined (__ASSEMBLER__)

#include <stdint.h>

typedef volatile uint8_t  register8_t;
typedef volatile uint16_t register16_t;
typedef volatile uint32_t register32_t;

#ifdef _REGISTER16
#undef _REGISTER16
#endif
#define _REGISTER16(regname)   \\
    __extension__ union \\
    { \\
        register16_t regname; \\
        struct \\
        { \\
            register8_t regname ## L; \\
            register8_t regname ## H; \\
        }; \\
    }

#ifdef _REGISTER32
#undef _REGISTER32
#endif
#define _REGISTER32(regname)  \\
    __extension__ union \\
    { \\
        register32_t regname; \\
        struct \\
        { \\
            register8_t regname ## 0; \\
            register8_t regname ## 1; \\
            register8_t regname ## 2; \\
            register8_t regname ## 3; \\
        }; \\
    }

"""

ASM_SECTION_BEGIN = "#else\n"

C_ASM_SECTION_END = "#endif\n"

MAX_COLUMN = 80


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


def xint(str):
    if str.startswith("0x"):
        return int(str, 16)
    return int(str)


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


def get_module_base_address(dom, instance):
    # Gets the lowest USED address of a module
    # This is necessary because some devices define EVERYTHING as starting at 0x00
    # when, they actually don't (Attiny10 I am looking at you)
    # So the TRUE base address is the module offset, plus the lowest used address of the module.
    # This MAY have the side effect of giving slightly different results from standard
    # headers, IF the module starts with reserved registers, but should not impede operation
    # in any way.

    # First get the module base address:
    periphs = dom.find(
        './/peripherals/module/instance/register-group[@name="{}"]'.format(instance)
    )
    base_addr = xint(periphs.get("offset"))

    # Now find lowest address in the registers.
    min_addr = None
    regs = dom.find('.//modules/module/register-group[@name="{}"]'.format(instance))
    for reg in regs:
        debug_group(reg)
        addr = xint(reg.get("offset"))
        if (min_addr == None) or (addr < min_addr):
            min_addr = addr
    min_addr += base_addr  # minimum absolute address.

    # Return the peripheral Base, and minimum address so we can use it for offset calculations.
    return (base_addr, min_addr)


def process_atdf(data, pack, filename, changelog):
    # Process an .atdf XML file and generate a C/ASM header file.
    # data : the textual data of the .atdf XML file.
    # changelog : Changelog information to embed in the file header.
    global all_defines
    all_defines = {}  # Reset known defines for this file.

    new_header = ""
    dom = etree.fromstring(data)

    devname = dom.find(".//devices/device").get("name")
    arch = dom.find(".//devices/device").get("architecture").upper()

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

    new_header += section_heading("Ungrouped common register")

    regs = []

    for module in ["CPU", "GPIO"]:
        module_instance = dom.find(
            './/peripherals/module/instance/register-group[@name-in-module="{}"]'.format(
                module
            )
        )
        if module_instance is not None:
            baseaddr = int(module_instance.get("offset"), 16)

            for register in dom.findall(
                './/modules/module[@name="{0}"]/register-group[@name="{0}"]/register'.format(
                    module
                )
            ):
                offset = int(register.get("offset"), 16)
                regs.append(
                    [
                        register.get("name"),
                        baseaddr + offset,
                        register.get("caption"),
                        int(register.get("size")),
                    ]
                )

    defines = []
    if regs is not None:
        regs.sort(key=lambda reg: reg[1])

        nextreg = None
        for reg in regs:
            if reg is not None:
                if (nextreg is not None) and (nextreg != reg[1]):
                    # Put a line gap between discontiguous addresses.
                    defines.append(["", ""])

                sfrmem = "_SFR_MEM8 " if reg[3] == 1 else "_SFR_MEM16"
                defines.append(
                    [reg[0], "{0}(0x{1:04X})".format(sfrmem, reg[1]), reg[2]]
                )
                nextreg = reg[1] + reg[3]

    new_header += emit_defines(defines)

    new_header += "\n\n"

    ##
    # C header sequence
    ##
    new_header += section_heading("C LANGUAGE - ONLY", divider="~")
    new_header += C_SECTION_BEGIN

    ##
    # IO Module structures
    ##

    # To save work, we buffer the asm definitions, as we create C definitions.
    asm_defs = []

    new_header += section_heading("IO Module Structures")

    # iterate all <module>
    for module in dom.findall(".//modules/module"):
        groups = module.findall(".//register-group")

        # skip blank module
        if len(groups) == 0:
            continue

        # skip GPIO HEADER
        if module.get("name") not in ["GPIO"]:
            new_header += section_heading(
                "{} - {}".format(module.get("name"), module.get("caption")), divider="-"
            )

        masks = {}
        # iterate all <register-group>
        for register_group in groups:

            # description
            if module.get("name") not in ["CPU", "GPIO"]:
                group_caption = register_group.get("caption")
                new_header += "/* {} */\n".format(group_caption)
                asm_defs.append(["", "", group_caption])

            # case when union-tag
            if register_group.get("union-tag"):
                new_header += "typedef union {}_union {{\n".format(
                    register_group.get("name")
                )
                regs = []
                type_size = 0
                name_size = 0
                desc_size = 0

                # First we collect the register information and work out field sizes.
                for subregister_group in register_group:
                    rtype = subregister_group.get("name-in-module") + "_t"
                    type_size = chk_size(rtype, type_size)
                    name = subregister_group.get("name") + ";"
                    name_size = chk_size(name, name_size)
                    desc = "{0} - {1} Mode".format(
                        register_group.get("caption"),
                        subregister_group.get("name").title(),
                    )
                    desc_size = chk_size(desc, desc_size)

                    regs.append([rtype, name, desc])

                # Then we emit the register information:
                for subreg in regs:
                    new_header += "    {0:<{1}} {2:<{3}}  /* {4:<{5}} */\n".format(
                        subreg[0], type_size, subreg[1], name_size, subreg[2], desc_size
                    )
                new_header += "}} {}_t;\n\n".format(register_group.get("name"))

                continue

            regs = {}
            max_offset = 0

            # sort registers by offset
            for register in register_group.findall("./register"):

                # Shift offset to true base address, if need be.
                offset = xint(register.get("offset"))

                if offset > max_offset:
                    max_offset = offset
                regs[offset] = register

                # mask of each bitfield
                for bitfield in register.findall(".//bitfield"):
                    if bitfield.get("values"):
                        masks[bitfield.get("values")] = int(bitfield.get("mask"), 16)

            if module.get("name") not in ["CPU", "GPIO"]:
                new_header += "typedef struct {}_struct\n{{\n".format(
                    register_group.get("name")
                )

                offset = 0
                reglist = []
                maxreg_size = 0
                while offset <= max_offset:

                    if offset in regs:
                        regsize = xint(regs[offset].get("size"))

                        caption = regs[offset].get("caption")
                        if (caption is None) or (len(caption) == 0):
                            caption = group_caption
                        caption = "/* {} */".format(caption)
                        name = regs[offset].get("name")

                        if regsize == 1:
                            reg_entry = "    register8_t {}; ".format(name)
                        elif regsize == 2:
                            reg_entry = "    _REGISTER16({}); ".format(name)
                        elif regsize == 4:
                            reg_entry = "    _REGISTER32({}); ".format(name)
                        else:
                            print("ERROR: unknown register size={}".format(regsize))
                            sys.exit(-1)

                        offset += regsize
                    else:
                        # fill reserved.  Count number of contiguous reserved registers.
                        rsv_cnt = 1
                        while ((offset + rsv_cnt) < max_offset) and (
                            (offset + rsv_cnt) not in regs
                        ):
                            rsv_cnt += 1

                        if rsv_cnt == 1:
                            reg_entry = "    register8_t rsv_0x{:02X};".format(offset)
                            caption = ""
                        else:
                            reg_entry = "    register8_t rsv_0x{:02X}[{}];".format(
                                offset, rsv_cnt
                            )
                            caption = ""
                        offset += rsv_cnt
                    reglist.append([reg_entry, caption])
                    if len(reg_entry) > maxreg_size:
                        maxreg_size = len(reg_entry)

                # Render register field list
                for reg in reglist:
                    new_header += "{0:<{1}}{2}\n".format(reg[0], maxreg_size, reg[1])

                new_header += "}} {}_t;\n\n".format(register_group.get("name"))

            if module.get("name") == "FUSE":
                new_header += "/* avr-libc typedef for avr/fuse.h */\n"
                new_header += "typedef FUSE_t NVM_FUSES_t;\n\n"

        vals = {}
        # sort value-group
        for value_group in module.findall(".//value-group"):
            name = value_group.get("name")
            name = name.replace("_DEFAULT", "")
            name = name.replace("_NORMAL", "")
            vals[name] = value_group

        for val in sorted(vals.keys()):
            value_group = vals[val]

            name = value_group.get("name")
            name = name.replace("_DEFAULT", "")
            name = name.replace("_NORMAL", "")
            name = name.replace("CPU_", "")
            name = name.replace("FUSE_", "")
            name = name.replace("LOCKBIT_", "")

            new_header += "/* {} */\ntypedef enum {}_enum\n{{\n".format(
                value_group.get("caption"), name
            )

            if value_group.get("name") in masks:
                # position of first bit given bitfield mask
                mask = "{}".format(bin(masks[value_group.get("name")]))

                firstbit = mask[::-1].index("1")

                values = []
                vn_size = 0
                vd_size = 0
                group_enums = []
                for value in value_group:
                    value_name = "{0}_{1}_gc".format(name, value.get("name"))
                    if len(value_name) > vn_size:
                        vn_size = len(value_name)

                    if firstbit != 0:
                        fstring = "(0x{0:02X}<<{1})"
                    else:
                        fstring = "(0x{0:02X})"
                    value_data = fstring.format(xint(value.get("value")), firstbit)
                    if len(value_data) > vd_size:
                        vd_size = len(value_data)

                    comment = format(value.get("caption"))

                    values.append([value_name, value_data, comment])

                for value in values:
                    if value[0] not in group_enums:
                        new_header += "    {0:<{1}} = {2:<{3}}, /* {4} */\n".format(
                            value[0], vn_size, value[1], vd_size, value[2]
                        )
                        group_enums.append(value[0])
                    else:
                        new_header += "    /* WARNING Attempt to redefine {0} as {1} */\n".format(
                            value[0], value[1]
                        )

                    asm_defs.append(value)

                new_header += "}} {}_t;\n\n".format(name)
                asm_defs.append(["", ""])  # Line break in asm defs
                asm_defs.append(["", ""])  # Line break in asm defs

        # avr-libc
        # SLEEP aliases
        if module.get("name") == "SLPCTRL":
            for value in value_group:
                slpdef = []
                label = value.get("name")
                label = label.replace("STDBY", "STANDBY")
                label = label.replace("PDOWN", "PWR_DOWN")
                define = [
                    "SLEEP_MODE_{}".format(label),
                    "(0x{:<02X}<<{})".format(xint(value.get("value")), firstbit),
                ]
                slpdef.append(define)
                asm_defs.append(define)

                new_header += emit_defines(slpdef, "C")
            new_header += "\n"
            asm_defs.append(["", ""])  # Line break in asm defs

    ##
    # IO module instances
    ##

    new_header += section_heading("IO Module Instances. Mapped to memory.")

    regs = []
    for module in dom.findall(".//peripherals/module"):

        if module.get("name") in ["CPU", "GPIO"]:
            continue

        # order all by offset - Because multiple modules may have the same offset,
        # order by sorting, NOT exclusively.
        for register in module.findall(".//register-group"):
            offset = xint(register.get("offset"))
            regs.append([offset, register])

    tsize = 0
    reglist = []
    # Sorting by the offset.
    for reg in sorted(regs, key=lambda reg: reg[0]):
        module_name = reg[1].get("name-in-module")

        module = dom.find('modules/module[@name="%s"]' % module_name)
        # Sometimes there is no module, so skip if thats the case.
        if module is not None:
            typestr = "*({}_t *)".format(module_name)
            tsize = chk_size(typestr, tsize)

            name = reg[1].get("name")
            value = "({:<{}} 0x{:04X})".format(typestr, tsize, reg[0])

            reglist.append([name, value, module.get("caption")])

    new_header += emit_defines(reglist, "C")

    new_header += ASM_SECTION_BEGIN
    new_header += section_heading("ASM LANGUAGE - ONLY", divider="~")
    new_header += emit_defines(asm_defs, "ASM")

    new_header += C_ASM_SECTION_END
    new_header += section_heading("C/ASM COMMON DEFINITIONS", divider="~")

    ##
    # IO register names
    ##

    new_header += section_heading("Flattened fully qualified IO register names")

    regs = []
    for module in dom.findall(".//peripherals/module"):

        # order all by offset
        # order all by offset - Because multiple modules may have the same offset,
        # order by sorting, NOT exclusively.
        for register in module.findall(".//register-group"):
            offset = xint(register.get("offset"))
            regs.append([offset, register])

    for reg in sorted(regs, key=lambda reg: reg[0]):

        module = dom.find(
            './/modules/module[@name="{}"]'.format(reg[1].get("name-in-module"))
        )

        if module is None:
            continue

        # check label usage
        instlabel = dom.find(
            '*.//peripherals/module/instance/[@name="{}"]'.format(reg[1].get("name"))
        )
        mainlabel = instlabel.getparent()

        if instlabel.get("name") == mainlabel.get("name"):
            instance_label = "/* {0} - {2} */\n"
        else:
            instance_label = "/* {0} ({1}) - {2} */\n"

        new_header += instance_label.format(
            reg[1].get("name-in-module"), reg[1].get("name"), module.get("caption")
        )

        unions = {}
        # aquire unions and members
        for register_group in module.findall("register-group/register-group"):
            if register_group.get("union-tag-value"):
                unions[register_group.get("name-in-module")] = register_group

        # aquire register groups
        for register_group in module.findall("register-group"):

            # skip special unions
            if register_group.get("union-tag"):
                continue

            # order by offset key
            entries = {}
            for register in register_group.findall(".//register"):

                idx = xint(register.get("offset"))
                entries[idx] = register

            name = reg[1].get("name")

            # if union append a marker
            if register_group.get("name") in unions:
                name += "_" + unions[register_group.get("name")].get("name")

            defines = []

            def add_define(name, size, value):
                nonlocal defines

                defvalue = "_SFR_MEM{0:<2}(0x{1:04X})".format(size, value)
                defines.append([name, defvalue])

            for entry in sorted(entries.keys()):

                reg_address = xint(reg[1].get("offset")) + xint(
                    entries[entry].get("offset")
                )
                reg_size = xint(entries[entry].get("size"))
                defname = "{}_{}".format(name, entries[entry].get("name"))

                add_define(defname, reg_size * 8, reg_address)

                defname = "{}_{}".format(reg[1].get("name"), entries[entry].get("name"))
                if (xint(entries[entry].get("size")) == 2) and (
                    register_group.get("name") not in unions
                ):
                    add_define(defname + "L", 8, reg_address)
                    add_define(defname + "H", 8, reg_address + 1)

                if (xint(entries[entry].get("size")) == 4) and (
                    register_group.get("name") not in unions
                ):
                    add_define(defname + "0", 8, reg_address)
                    add_define(defname + "1", 8, reg_address + 1)
                    add_define(defname + "2", 8, reg_address + 2)
                    add_define(defname + "3", 8, reg_address + 3)

            new_header += emit_defines(defines)

        new_header += "\n\n"

    ##
    # Bitfield definitions
    ##

    new_header += section_heading("Bitfield Definitions")

    defined = {}
    for module in dom.findall("modules/module"):

        # skip module with no bitfields
        if len(module.findall("register-group/register/bitfield")) == 0:
            continue

        new_header += "/* {} - {} */\n".format(
            module.get("name"), module.get("caption")
        )

        # aquire register groups
        for register_group in module.findall("register-group"):

            # skip special unions
            if register_group.get("union-tag"):
                continue

            regs = {}
            for register in register_group.findall("register"):
                regs[xint(register.get("offset"))] = register

            for register in sorted(regs.keys()):

                bitfields = regs[register].findall(".//bitfield")
                if not bitfields:
                    continue

                new_header += "/* {}.{}  bit masks and bit positions */\n".format(
                    register_group.get("name"), regs[register].get("name")
                )

                bits = []
                for bitfield in bitfields:
                    bits.append([xint(bitfield.get("mask")), bitfield])

                # sort list by mask
                bits.sort(key=lambda tup: tup[0])

                defines = []
                for bitfield in bits:

                    # compute bit slices
                    mask = "%s" % bin(bitfield[0])
                    firstbit = mask[::-1].index("1")
                    bitspans = mask.count("1")

                    caption = bitfield[1].get("caption")
                    name = "{}_{}_{}".format(
                        register_group.get("name"),
                        regs[register].get("name"),
                        bitfield[1].get("name"),
                    )

                    if name in defined:
                        defines.append(["", "", "{} is already defined.".format(name)])
                    #    continue

                    defined[name] = True

                    if bitspans == 1:
                        defines.append(
                            [
                                "{}_bm".format(name),
                                "(0x{:02X})".format(bitfield[0]),
                                "{} bit mask.".format(caption),
                            ]
                        )
                        defines.append(
                            [
                                "{}_bp".format(name),
                                "({})".format(firstbit),
                                "{} bit position.".format(caption),
                            ]
                        )
                    else:
                        defines.append(
                            [
                                "{}_gm".format(name),
                                "(0x{:02X})".format(bitfield[0]),
                                "{} group mask.".format(caption),
                            ]
                        )
                        defines.append(
                            [
                                "{}_gp".format(name),
                                "({})".format(firstbit),
                                "{} group position.".format(caption),
                            ]
                        )

                        for b in range(bitspans):
                            defines.append(
                                [
                                    "{}{}_bm".format(name, b),
                                    "(1<<{})".format(firstbit + b),
                                    "{} bit {} mask.".format(caption, b),
                                ]
                            )
                            defines.append(
                                [
                                    "{}{}_bp".format(name, b),
                                    "({})".format(firstbit + b),
                                    "{} bit {} position.".format(caption, b),
                                ]
                            )

                new_header += emit_defines(defines) + "\n"

    # avr-libc aliases - TODO: Move to upper level header
    new_header += """// Generic Port Pins"

#define PIN0_bm 0x01
#define PIN0_bp 0
#define PIN1_bm 0x02
#define PIN1_bp 1
#define PIN2_bm 0x04
#define PIN2_bp 2
#define PIN3_bm 0x08
#define PIN3_bp 3
#define PIN4_bm 0x10
#define PIN4_bp 4
#define PIN5_bm 0x20
#define PIN5_bp 5
#define PIN6_bm 0x40
#define PIN6_bp 6
#define PIN7_bm 0x80
#define PIN7_bp 7

"""

    ##
    # Interrupt vectors
    ##
    new_header += section_heading("Interrupt Vector Definitions")
    new_header += "/* Vector 0 is the reset vector */\n"

    idvector = 0
    prevname = ""
    defines = []
    # TODO: Process interrupt groups,
    # Make an list of all interrupts, both directly defined and in groups.
    # then emit the vector table by sorting by absolute offset.
    for interrupt in dom.findall(".//interrupts/interrupt"):

        name = interrupt.get("module-instance")
        idvector = int(interrupt.get("index"))

        if name is not None:
            if prevname != name:
                defines.append(["", "", "{} interrupt vectors".format(name)])
                prevname = name

        comment = interrupt.get("caption")

        instance = interrupt.get("module-instance")
        name = interrupt.get("name")
        if name is None:
            name = interrupt.get("name-in-module")  # Three cheers for Inconsistency :(

        vect_name = "{}_vect".format(name)

        if instance is not None:
            vect_name = "{}_{}".format(instance, vect_name)

        defines.append(["{}_num".format(vect_name), "({})".format(idvector), ""])
        defines.append([vect_name, "_VECTOR({})".format(idvector), comment])

    pgmsize = xint(
        dom.find(".//address-spaces/address-space/[@name='prog'][@id='prog']").get(
            "size"
        )
    )

    vectorsize = 0x02
    if pgmsize > 8196:
        vectorsize = 0x04

    defines.append(["", ""])
    defines.append(
        ["_VECTOR_SIZE", "({})".format(vectorsize), "Size of individual vector."]
    )
    defines.append(
        [
            "_VECTORS_SIZE",
            "({} * _VECTOR_SIZE)".format(idvector + 1),
            "Size of all vectors",
        ]
    )
    defines.append(["", ""])

    new_header += emit_defines(defines)

    ##
    # Constants
    ##

    new_header += section_heading("Constants")

    for addrspace in dom.findall(".//address-spaces/address-space"):

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

    # avr-libc aliases
    # TODO: Move these aliases into global definitions, instead of every generated file.
    defines = []
    defines.append(["FLASHSTART", "PROGMEM_START"])
    defines.append(["FLASHEND", "PROGMEM_END"])
    defines.append(["RAMSTART", "INTERNAL_SRAM_START"])
    defines.append(["RAMSIZE", "INTERNAL_SRAM_SIZE"])
    defines.append(["RAMEND", "INTERNAL_SRAM_END"])
    defines.append(["E2END", "EEPROM_END"])
    defines.append(["E2PAGESIZE", "EEPROM_PAGE_SIZE"])
    defines.append(["", ""])

    new_header += emit_defines(defines)

    ##
    # Fuses
    ##

    fusesize = int(
        dom.find('.//address-spaces/address-space/memory-segment[@name="FUSES"]').get(
            "size"
        ),
        16,
    )

    new_header += section_heading("Fuses/LockBits/Signatures")

    defines.append(["", "", "============ Fuses ============"])
    defines.append(["", ""])

    defines.append(["FUSE_MEMORY_SIZE", "{}".format((fusesize - 1))])
    defines.append(["", ""])

    new_header += emit_defines(defines)

    fuses = {}
    for register in dom.findall(
        './/modules/module[@name="FUSE"]/register-group/register'
    ):
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

    ##
    ## Lockbits & Signature
    ##

    defines = []

    defines.append(["", "", "========== Lock Bits =========="])
    defines.append(["", ""])

    lockbits = dom.find(
        './/devices/device/address-spaces/address-space/memory-segment[@type="lockbits"]'
    )
    if lockbits is None:
        defines.append(["", "", "__LOCK_BITS_DO_NOT_EXIST"])
    else:
        defines.append(["__LOCK_BITS_EXIST", ""])

    defines.append(["", ""])

    defines.append(["", "", "========== Signature =========="])
    defines.append(["", ""])

    for signature in dom.findall(
        './/property-groups/property-group[@name="SIGNATURES"]/property'
    ):

        name = signature.get("name")
        if name.startswith("SIGNATURE"):
            sid = name[9:]

            svalue = xint(signature.get("value"))
            defines.append(["SIGNATURE_{}".format(sid), "({:02X})".format(svalue)])

    new_header += emit_defines(defines)

    # Close out header file.
    new_header += "\n\n#endif /* #ifdef _AVR_{}_H_INCLUDED */\n".format(devname)
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


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument(
        "packdir",
        help="Directory containing Atmel/Microchip device Packs for AVR devices.",
        type=dir_path,
    )
    parser.add_argument(
        "outputdir",
        help="Directory to output converted headerfiles into.",
        type=dir_path,
    )
    args = parser.parse_args()

    processed_atpacks = 0
    changelog = []

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
                        print(changelog)

                for atdf in atpack.namelist():
                    if atdf.endswith(".atdf"):
                        # then it IS an .atdf file to be processed.
                        print("    Processing {}".format(atdf))
                        atdf_data = atpack.read(atdf)
                        header_file = process_atdf(atdf_data, filename, atdf, changelog)
                        print(header_file)
                        processed_atdfs += 1
                if processed_atpacks == 0:
                    print("No ATDF Files found in {}".format(fullname))

        else:
            continue

    if processed_atpacks == 0:
        print("No ATDF Pack Files found in {}".format(args.packdir))


if __name__ == "__main__":
    main()
