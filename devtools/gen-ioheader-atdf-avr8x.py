#!/usr/bin/python

#
#    This file is part of avr-libc.
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



import sys
from lxml import etree




if len(sys.argv) < 2:
  print "Usage %s <atdf_file>" % sys.argv[0]
  sys.exit(-1)

atdf_filename = sys.argv[1]
dom = etree.parse(atdf_filename)


devname = dom.find('.//devices/device').get('name').upper()
avrcode = int(''.join(ele for ele in devname if ele.isdigit()))


arch = dom.find('.//devices/device').get('architecture').upper()

if ( arch != "AVR8X" ):
  print "ERROR: device %s in %s is not AVR8X arch." % ( devname, arch )
  sys.exit(-1)


##
## lincense header
##

print
print "/* This file is part of avr-libc."
print
print "   Automatically created by devtools/gen-ioheader-atdf-avr8x.py"
print "   DO NOT EDIT!"
print
print "   Redistribution and use in source and binary forms, with or without"
print "   modification, are permitted provided that the following conditions are met:"
print
print "   * Redistributions of source code must retain the above copyright"
print "     notice, this list of conditions and the following disclaimer."
print
print "   * Redistributions in binary form must reproduce the above copyright"
print "     notice, this list of conditions and the following disclaimer in"
print "     the documentation and/or other materials provided with the"
print "     distribution."
print
print "   * Neither the name of the copyright holders nor the names of"
print "     contributors may be used to endorse or promote products derived"
print "     from this software without specific prior written permission."
print
print "  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS \"AS IS\""
print "  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE"
print "  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE"
print "  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE"
print "  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR"
print "  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF"
print "  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS"
print "  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN"
print "  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)"
print "  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE"
print "  POSSIBILITY OF SUCH DAMAGE. */"
print

##
##  header sequence
##

print
print
print
print '#ifndef _AVR_IO_H_'
print '#  error "Include <avr/io.h> instead of this file."'
print '#endif'
print
print '#ifndef _AVR_IOXXX_H_'
print '#  define _AVR_IOXXX_H_ "iotn%s.h"' % avrcode
print '#else'
print '#  error "Attempt to include more than one <avr/ioXXX.h> file."'
print '#endif'
print
print '#ifndef _AVR_%s_H_INCLUDED' % devname
print '#define _AVR_%s_H_INCLUDED' % devname
print

print '/* Ungrouped common registers */'

for module in ['CPU', 'GPIO']:

  baseaddr = int( dom.find('.//peripherals/module/instance/register-group[@name-in-module="%s"]' % module).get('offset'), 16 )
  for register in dom.findall('.//modules/module[@name="%s"]/register-group[@name="%s"]/register' % (module, module)):

    offset = int( register.get('offset'), 16 )
    print '#define %s  _SFR_MEM8(0x%04X)  /* %s */' \
      % ( register.get('name'), baseaddr + offset, register.get('caption') )

  print

# avr-libc
print '/* Deprecated */'
print '#define GPIO0  _SFR_MEM8(0x001C)  /* General Purpose IO Register 0 */'
print '#define GPIO1  _SFR_MEM8(0x001D)  /* General Purpose IO Register 1 */'
print '#define GPIO2  _SFR_MEM8(0x001E)  /* General Purpose IO Register 2 */'
print '#define GPIO3  _SFR_MEM8(0x001F)  /* General Purpose IO Register 3 */'


print
print '/* C Language Only */'
print '#if !defined (__ASSEMBLER__)'
print
print '#include <stdint.h>'
print
print 'typedef volatile uint8_t register8_t;'
print 'typedef volatile uint16_t register16_t;'
print 'typedef volatile uint32_t register32_t;'
print
print
print '#ifdef _WORDREGISTER'
print '#undef _WORDREGISTER'
print '#endif'
print '#define _WORDREGISTER(regname)   \\'
print '    __extension__ union \\'
print '    { \\'
print '        register16_t regname; \\'
print '        struct \\'
print '        { \\'
print '            register8_t regname ## L; \\'
print '            register8_t regname ## H; \\'
print '        }; \\'
print '    }'
print
print '#ifdef _DWORDREGISTER'
print '#undef _DWORDREGISTER'
print '#endif'
print '#define _DWORDREGISTER(regname)  \\'
print '    __extension__ union \\'
print '    { \\'
print '        register32_t regname; \\'
print '        struct \\'
print '        { \\'
print '            register8_t regname ## 0; \\'
print '            register8_t regname ## 1; \\'
print '            register8_t regname ## 2; \\'
print '            register8_t regname ## 3; \\'
print '        }; \\'
print '    }'
print
print

##
## IO Module structures
##

print "/*"
print "=========================================================================="
print "IO Module Structures"
print "=========================================================================="
print "*/"
print
print

# iterate all <module>
for module in dom.findall(".//modules/module"):

  groups = module.findall('register-group')

  # skip blank module
  if (len(groups) == 0):
    continue

  # skip GPIO HEADER
  if module.get('name') not in ["GPIO"]:

    print "/*"
    print "--------------------------------------------------------------------------"
    print "%s - %s" % ( module.get('name'), module.get('caption') )
    print "--------------------------------------------------------------------------"
    print "*/"
    print

  masks = {}
  # iterate all <register-group>
  for register_group in groups:

    # description
    entries = int(register_group.get('size'), 16)
    if module.get('name') not in ["CPU","GPIO"]:
      print "/* %s */" % register_group.get('caption')

    # case when union-tag
    if ( register_group.get('union-tag') ):
      print "typedef union %s_union" % register_group.get('name')
      print "{"
      for subregister_group in register_group:
        print "    %s_t %s;  /* %s - %s Mode */" \
          % ( subregister_group.get('name-in-module'),
              subregister_group.get('name'),
              register_group.get('caption'),
              subregister_group.get('name').title() )
      print "} %s_t;" % register_group.get('name')
      print

      continue

    if module.get('name') not in ["CPU","GPIO"]:
      print "typedef struct %s_struct" % register_group.get('name')
      print "{"

    regs = {}
    # sort childs by offset
    for register in register_group:

      offset = int(register.get('offset'), 16)
      regs[offset] = register

      # mask of each bitfield
      for bitfield in register.findall('.//bitfield'):
        if bitfield.get('values'):
          masks[bitfield.get('values')] = int(bitfield.get('mask'), 16)

    if module.get('name') not in ["CPU","GPIO"]:

     for offset in range(entries):

      if ( regs.has_key(offset) ):

        regsize = int( regs[offset].get('size') )

        if   ( regsize == 1 ):
          print "    register8_t %s;  /* %s */" % ( regs[offset].get('name'), regs[offset].get('caption') )
        elif ( regsize == 2 ):
          print "    _WORDREGISTER(%s);  /* %s */" % ( regs[offset].get('name'), regs[offset].get('caption') )
        else:
          print "ERROR: unknown register size=%i" % regsize
          sys.exit(-1)

      else:
        # skip if previous was WORD
        if ( regs.has_key(offset-1) ):
          if ( int( regs[offset-1].get('size')) > 1 ):
            continue
        # fill reserved
        print "    register8_t reserved_0x%02X;" % offset

    if module.get('name') not in ["CPU","GPIO"]:
      print "} %s_t;" % register_group.get('name')
      print

    if module.get('name') == "FUSE":
      print "/* avr-libc typedef for avr/fuse.h */"
      print "typedef FUSE_t NVM_FUSES_t;"
      print

  vals = {}
  # sort value-group
  for value_group in module.findall('.//value-group'):
    name = value_group.get('name')
    name = name.replace('_DEFAULT','')
    name = name.replace('_NORMAL','')
    vals[name] = value_group

  for val in sorted(vals.keys()):
    value_group = vals[val]

    name = value_group.get('name')
    name = name.replace('_DEFAULT','')
    name = name.replace('_NORMAL','')
    name = name.replace('CPU_','')
    name = name.replace('FUSE_','')
    name = name.replace('LOCKBIT_','')

    print "/* %s */" % value_group.get('caption')
    print "typedef enum %s_enum" % name
    print "{"

    # position of first bit given bitfield mask
    mask = "%s" % bin(masks[value_group.get('name')])

    firstbit = mask[::-1].index('1')

    for value in value_group:
      print "    %s_%s_gc = (0x%02X<<%i),  /* %s */" \
        % ( name, value.get('name'),
            int( value.get('value'), 16 ),
            firstbit, value.get('caption') )

    print "} %s_t;" % name
    print

  # avr-libc
  # SLEEP aliases
  if ( module.get("name") == "SLPCTRL" ):

    for value in value_group:
      label = value.get('name')
      label = label.replace('STDBY','STANDBY')
      label = label.replace('PDOWN','PWR_DOWN')
      print "#define SLEEP_MODE_%s (0x%02X<<%i)" \
        % ( label, int( value.get('value'), 16 ), firstbit )
    print

##
## IO module instances
##

print "/*"
print "=========================================================================="
print "IO Module Instances. Mapped to memory."
print "=========================================================================="
print "*/"
print

regs = {}
for module in dom.findall(".//peripherals/module"):

  if module.get('name') in ["CPU","GPIO"]:
    continue

  # order all by offset
  for register in module.findall('.//register-group'):
    offset = int(register.get('offset'), 16)
    regs[offset] = register

for offset in sorted(regs.keys()):

  module = dom.find('modules/module[@name="%s"]' % regs[offset].get('name-in-module'))
  valstr = "(*(%s_t *) 0x%04X)" % (regs[offset].get('name-in-module'), offset)
  print "#define %-8s %32s /* %s */" \
    % ( regs[offset].get('name'), valstr, module.get('caption') )

print
print "#endif /* !defined (__ASSEMBLER__) */"
print

##
## IO register names
##

print
print "/* ========== Flattened fully qualified IO register names ========== */"
print
print

regs = {}
for module in dom.findall(".//peripherals/module"):

  # order all by offset
  for register in module.findall('.//register-group'):
    offset = int(register.get('offset'), 16)
    regs[offset] = register

for offset in sorted(regs.keys()):

  module = dom.find('.//modules/module[@name="%s"]' % regs[offset].get('name-in-module'))

  # check label usage
  instlabel = dom.find('*.//peripherals/module/instance/[@name="%s"]' % regs[offset].get('name'))
  mainlabel = instlabel.getparent()

  if ( instlabel.get('name') == mainlabel.get('name') ):

    print "/* %s - %s */" \
      % ( regs[offset].get('name-in-module'),
          module.get('caption') )
  else:

    print "/* %s (%s) - %s */" \
      % ( regs[offset].get('name-in-module'),
          regs[offset].get('name'),
          module.get('caption') )

  unions = {}
  # aquire unions and members
  for register_group in module.findall('register-group/register-group'):
    if ( register_group.get('union-tag-value') ):
      unions[register_group.get('name-in-module')] = register_group

  # aquire register groups
  for register_group in module.findall('register-group'):

    # skip special unions
    if ( register_group.get('union-tag') ):
      continue

    # order by offset key
    entries = {}
    for register in register_group.findall('.//register'):

      idx = int(register.get('offset'), 16)
      entries[idx] = register

    name = regs[offset].get('name')

    # if union append a marker
    if ( unions.has_key(register_group.get('name')) ):
      name += "_" + unions[register_group.get('name')].get('name')

    for entry in sorted(entries.keys()):

          print "#define %s_%s  _SFR_MEM%i(0x%04X)" \
            % ( name, entries[entry].get('name'),
                int(entries[entry].get('size'))*8,
                int(regs[offset].get('offset'), 16)+int(entries[entry].get('offset'), 16) )

          if ( ( int(entries[entry].get('size')) == 2 ) and
               ( not unions.has_key(register_group.get('name')) ) ):

            print "#define %s_%sL  _SFR_MEM8(0x%04X)" \
              % ( regs[offset].get('name'), entries[entry].get('name'),
                  int(regs[offset].get('offset'), 16)+int(entries[entry].get('offset'), 16) )
            print "#define %s_%sH  _SFR_MEM8(0x%04X)" \
              % ( regs[offset].get('name'), entries[entry].get('name'),
                  int(regs[offset].get('offset'), 16)+int(entries[entry].get('offset'), 16)+1 )

  print
  print

##
## Bitfield definitions
##


print
print "/*================== Bitfield Definitions ================== */"
print

defined = {}
for module in dom.findall('modules/module'):

  # skip module with no bitfields
  if ( len(module.findall('register-group/register/bitfield')) == 0 ):
    continue

  print "/* %s - %s */" % (module.get('name'), module.get('caption'))

  # aquire register groups
  for register_group in module.findall('register-group'):

    # skip special unions
    if ( register_group.get('union-tag') ):
      continue

    regs = {}
    for register in register_group.findall('register'):
      regs[int(register.get("offset"), 16)] = register

    for register in sorted(regs.keys()):

      bitfields = regs[register].findall('.//bitfield')
      if ( not bitfields ):
        continue

      print "/* %s.%s  bit masks and bit positions */" % ( register_group.get("name"), regs[register].get('name') )

      bits = []
      for bitfield in bitfields:
        bits.append( [ int(bitfield.get('mask'), 16), bitfield ] )

      # sort list by mask
      bits.sort(key=lambda tup: tup[0])

      for bitfield in bits:

        # compute bit slices
        mask = "%s" % bin(bitfield[0])
        firstbit = mask[::-1].index('1')
        bitspans = mask.count('1')

        caption = bitfield[1].get('caption')
        name = "%s_%s" % ( register_group.get("name"),  bitfield[1].get('name') )

        if defined.has_key(name):
          print "/* %s  is already defined. */" % name
          continue

        defined[name] = True

        if ( bitspans == 1 ):

          print "#define %s_bm  0x%02X  /* %s bit mask. */" \
            % ( name, bitfield[0], caption )
          print "#define %s_bp  %i  /* %s bit position. */" \
            % ( name, firstbit, caption )

        else:

          print "#define %s_gm  0x%02X  /* %s group mask. */" \
            % ( name, bitfield[0], caption )
          print "#define %s_gp  %i  /* %s group position. */" \
            % ( name, firstbit, caption )

          for b in range(bitspans):

            print "#define %s%i_bm  (1<<%i)  /* %s bit %i mask. */" \
              % ( name, b, firstbit+b, caption, b )
            print "#define %s%i_bp  %i  /* %s bit %i position. */" \
              % ( name, b, firstbit+b, caption, b )
      print

# avr-libc aliases
print "// Generic Port Pins"
print
print "#define PIN0_bm 0x01"
print "#define PIN0_bp 0"
print "#define PIN1_bm 0x02"
print "#define PIN1_bp 1"
print "#define PIN2_bm 0x04"
print "#define PIN2_bp 2"
print "#define PIN3_bm 0x08"
print "#define PIN3_bp 3"
print "#define PIN4_bm 0x10"
print "#define PIN4_bp 4"
print "#define PIN5_bm 0x20"
print "#define PIN5_bp 5"
print "#define PIN6_bm 0x40"
print "#define PIN6_bp 6"
print "#define PIN7_bm 0x80"
print "#define PIN7_bp 7"
print

##
## Interrupt vectors
##

print "/* ========== Interrupt Vector Definitions ========== */"
print "/* Vector 0 is the reset vector */"

idvector = 0
prevname = ''
for interrupt in dom.findall(".//interrupts/interrupt"):

  name = interrupt.get("module-instance")
  idvector = int(interrupt.get("index"))

  if ( prevname != name ):
    print
    print "/* %s interrupt vectors */" % name
    prevname = name

  print "#define %s_%s_vect_num  %i" \
    % ( interrupt.get("module-instance"), interrupt.get("name"), idvector )
  print "#define %s_%s_vect      _VECTOR(%i)  /*  */" \
    % ( interrupt.get("module-instance"), interrupt.get("name"), idvector )


pgmsize = int( dom.find(".//address-spaces/address-space/memory-segment[@name='PROGMEM']").get('size'), 16)

vectorsize = 0x02
if ( pgmsize > 8196 ):
  vectorsize = 0x04

print
print "#define _VECTOR_SIZE %i /* Size of individual vector. */" % vectorsize
print "#define _VECTORS_SIZE (%i * _VECTOR_SIZE)" % (idvector + 1)
print

##
## Constants
##

print
print "/* ========== Constants ========== */"
print

for addrspace in dom.findall(".//address-spaces/address-space"):

  space = addrspace.get('id').upper()

  print "#define %sMEM_START     (0x%04X)" % (space, int(addrspace.get('start'), 16))
  print "#define %sMEM_SIZE      (%i)" % (space, int(addrspace.get('size'), 16))
  print "#define %sMEM_END       (%sMEM_START + %sMEM_SIZE - 1)" % (space, space, space)
  print

  for segment in addrspace.findall("memory-segment"):

    name = segment.get('name')

    pagesize = 0
    # if entry exists
    if ( segment.get('pagesize') ):
      pagesize = int(segment.get('pagesize'), 16)

    print "#define %s_START     (0x%04X)" % (name, int(segment.get('start'), 16))
    print "#define %s_SIZE      (%i)" %     (name, int(segment.get('size'), 16))
    print "#define %s_PAGE_SIZE (%i)" %     (name, pagesize)
    print "#define %s_END       (%s_START + %s_SIZE - 1)" % (name, name, name)
    print

    # mapped alias EEPROM
    if ( name == "EEPROM" ):
      print "/* Added MAPPED_EEPROM segment names for avr-libc */"
      print "#define MAPPED_EEPROM_START     (EEPROM_START)"
      print "#define MAPPED_EEPROM_SIZE      (EEPROM_SIZE)"
      print "#define MAPPED_EEPROM_PAGE_SIZE (EEPROM_PAGE_SIZE)"
      print "#define MAPPED_EEPROM_END       (MAPPED_EEPROM_START + MAPPED_EEPROM_SIZE - 1)"
      print

# avr-libc aliases
print "#define FLASHSTART   PROGMEM_START"
print "#define FLASHEND     PROGMEM_END"
print "#define RAMSTART     INTERNAL_SRAM_START"
print "#define RAMSIZE      INTERNAL_SRAM_SIZE"
print "#define RAMEND       INTERNAL_SRAM_END"
print "#define E2END        EEPROM_END"
print "#define E2PAGESIZE   EEPROM_PAGE_SIZE"
print

##
## Fuses
##

fusesize = int( dom.find('.//address-spaces/address-space/memory-segment[@name="FUSES"]').get('size'), 16 )

print "/* ========== Fuses ========== */"
print "#define FUSE_MEMORY_SIZE %i" % (fusesize - 1)
print

fuses = {}
for register in dom.findall('.//modules/module[@name="FUSE"]/register-group[@name="FUSE"]/register'):

  # order by offset
  fuses[int(register.get('offset'), 16)] = register

for f in range(fusesize):

  print "/* Fuse offset 0x%02X*/" % f

  if fuses.has_key(f):

    bits={}
    for bitfield in fuses[f].findall('.//bitfield'):
      mask = "%s" % bin(int(bitfield.get('mask'), 16))
      # compute first bit position
      firstbit = mask[::-1].index('1')
      bits[firstbit] = bitfield

    for bit in sorted(bits.keys()):

      # compute bits start and span
      mask = "%s" % bin(int(bits[bit].get('mask'), 16))
      firstbit = mask[::-1].index('1')
      bitspans = mask.count('1')

      if ( bitspans == 1 ):
        print "#define %s  (unsigned char)~_BV(%i)  /* %s */" % ( bits[bit].get('name'), firstbit, bits[bit].get('caption') )
      else:
        for b in range(bitspans):
          print "#define %s%i  (unsigned char)~_BV(%i)  /* %s Bit %i */" % ( bits[bit].get('name'), b, firstbit + b, bits[bit].get('caption'), b )

    print

  else:
    print

##
## Lockbits & Signature
##

print "/* ========== Lock Bits ========== */"
print "#define __LOCK_BITS_EXIST"
print
print "/* ========== Signature ========== */"

for signature in dom.findall('.//property-groups/property-group[@name="SIGNATURES"]/property'):

  sid = int(''.join(ele for ele in signature.get('name') if ele.isdigit()))
  svalue = int(signature.get('value'), 16)
  print "#define SIGNATURE_%i 0x%02X" % ( sid, svalue )

print
print
print "#endif /* #ifdef _AVR_%s_H_INCLUDED */" % devname
print
print

