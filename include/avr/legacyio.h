/* Copyright (c) 2002,2003,2005,2006,2007 Marek Michalkiewicz, Joerg Wunsch
   Copyright (c) 2007 Eric B. Weddington
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/** \file */
/** \defgroup avr_io <avr/legacyio/io.h>: AVR device-specific IO definitions
    \code #include <avr/legacyio/io.h> \endcode

    This header file includes the apropriate IO definitions for the
    device that has been specified by the <tt>-mmcu=</tt> compiler
    command-line switch.  This is done by diverting to the appropriate
    file <tt>&lt;avr/legacyio/io</tt><em>XXXX</em><tt>.h&gt;</tt> which should
    never be included directly.  Some register names common to all
    AVR devices are defined directly within <tt>&lt;avr/legacyio/common.h&gt;</tt>,
    which is included in <tt>&lt;avr/legacyio/io.h&gt;</tt>,
    but most of the details come from the respective include file.

    Note that this file always includes the following files:
    \code
    #include <avr/legacyio/common.h>
    #include <avr/legacyio/portpins.h>
    #include <avr/legacyio/sfr_defs.h>
    #include <avr/legacyio/version.h>
    \endcode
    See \ref avr_sfr for more details about that header file.

    Included are definitions of the IO register set and their
    respective bit values as specified in the Atmel documentation.
    Note that inconsistencies in naming conventions,
    so even identical functions sometimes get different names on
    different devices.

    Also included are the specific names useable for interrupt
    function definitions as documented
    \ref avr_signames "here".

    Finally, the following macros are defined:

    - \b RAMEND
    <br>
    The last on-chip RAM address.
    <br>
    - \b XRAMEND
    <br>
    The last possible RAM location that is addressable. This is equal to
    RAMEND for devices that do not allow for external RAM. For devices
    that allow external RAM, this will be larger than RAMEND.
    <br>
    - \b E2END
    <br>
    The last EEPROM address.
    <br>
    - \b FLASHEND
    <br>
    The last byte address in the Flash program space.
    <br>
    - \b SPM_PAGESIZE
    <br>
    For devices with bootloader support, the flash pagesize
    (in bytes) to be used for the \c SPM instruction.
    - \b E2PAGESIZE
    <br>
    The size of the EEPROM page.

*/

#ifndef _AVR_LEGACY_IO_H_
#define _AVR_LEGACY_IO_H_

#if defined(__AVR_AT94K__)
#  include <avr/legacyio/ioat94k.h>
#elif defined(__AVR_AT43USB320__)
#  include <avr/legacyio/io43u32x.h>
#elif defined(__AVR_AT43USB355__)
#  include <avr/legacyio/io43u35x.h>
#elif defined(__AVR_AT76C711__)
#  include <avr/legacyio/io76c711.h>
#elif defined(__AVR_AT86RF401__)
#  include <avr/legacyio/io86r401.h>
#elif defined(__AVR_AT90PWM1__)
#  include <avr/legacyio/io90pwm1.h>
#elif defined(__AVR_AT90PWM2__)
#  include <avr/legacyio/io90pwmx.h>
#elif defined(__AVR_AT90PWM2B__)
#  include <avr/legacyio/io90pwm2b.h>
#elif defined(__AVR_AT90PWM3__)
#  include <avr/legacyio/io90pwmx.h>
#elif defined(__AVR_AT90PWM3B__)
#  include <avr/legacyio/io90pwm3b.h>
#elif defined(__AVR_AT90PWM216__)
#  include <avr/legacyio/io90pwm216.h>
#elif defined(__AVR_AT90PWM316__)
#  include <avr/legacyio/io90pwm316.h>
#elif defined(__AVR_AT90PWM161__)
#  include <avr/legacyio/io90pwm161.h>
#elif defined(__AVR_AT90PWM81__)
#  include <avr/legacyio/io90pwm81.h>
#elif defined(__AVR_ATmega8U2__)
#  include <avr/legacyio/iom8u2.h>
#elif defined(__AVR_ATmega16M1__)
#  include <avr/legacyio/iom16m1.h>
#elif defined(__AVR_ATmega16U2__)
#  include <avr/legacyio/iom16u2.h>
#elif defined(__AVR_ATmega16U4__)
#  include <avr/legacyio/iom16u4.h>
#elif defined(__AVR_ATmega32C1__)
#  include <avr/legacyio/iom32c1.h>
#elif defined(__AVR_ATmega32M1__)
#  include <avr/legacyio/iom32m1.h>
#elif defined(__AVR_ATmega32U2__)
#  include <avr/legacyio/iom32u2.h>
#elif defined(__AVR_ATmega32U4__)
#  include <avr/legacyio/iom32u4.h>
#elif defined(__AVR_ATmega32U6__)
#  include <avr/legacyio/iom32u6.h>
#elif defined(__AVR_ATmega64C1__)
#  include <avr/legacyio/iom64c1.h>
#elif defined(__AVR_ATmega64M1__)
#  include <avr/legacyio/iom64m1.h>
#elif defined(__AVR_ATmega128__)
#  include <avr/legacyio/iom128.h>
#elif defined(__AVR_ATmega128A__)
#  include <avr/legacyio/iom128a.h>
#elif defined(__AVR_ATmega1280__)
#  include <avr/legacyio/iom1280.h>
#elif defined(__AVR_ATmega1281__)
#  include <avr/legacyio/iom1281.h>
#elif defined(__AVR_ATmega1284__)
#  include <avr/legacyio/iom1284.h>
#elif defined(__AVR_ATmega1284P__)
#  include <avr/legacyio/iom1284p.h>
#elif defined(__AVR_ATmega128RFA1__)
#  include <avr/legacyio/iom128rfa1.h>
#elif defined(__AVR_ATmega1284RFR2__)
#  include <avr/legacyio/iom1284rfr2.h>
#elif defined(__AVR_ATmega128RFR2__)
#  include <avr/legacyio/iom128rfr2.h>
#elif defined(__AVR_ATmega2564RFR2__)
#  include <avr/legacyio/iom2564rfr2.h>
#elif defined(__AVR_ATmega256RFR2__)
#  include <avr/legacyio/iom256rfr2.h>
#elif defined(__AVR_ATmega2560__)
#  include <avr/legacyio/iom2560.h>
#elif defined(__AVR_ATmega2561__)
#  include <avr/legacyio/iom2561.h>
#elif defined(__AVR_AT90CAN32__)
#  include <avr/legacyio/iocan32.h>
#elif defined(__AVR_AT90CAN64__)
#  include <avr/legacyio/iocan64.h>
#elif defined(__AVR_AT90CAN128__)
#  include <avr/legacyio/iocan128.h>
#elif defined(__AVR_AT90USB82__)
#  include <avr/legacyio/iousb82.h>
#elif defined(__AVR_AT90USB162__)
#  include <avr/legacyio/iousb162.h>
#elif defined(__AVR_AT90USB646__)
#  include <avr/legacyio/iousb646.h>
#elif defined(__AVR_AT90USB647__)
#  include <avr/legacyio/iousb647.h>
#elif defined(__AVR_AT90USB1286__)
#  include <avr/legacyio/iousb1286.h>
#elif defined(__AVR_AT90USB1287__)
#  include <avr/legacyio/iousb1287.h>
#elif defined(__AVR_ATmega644RFR2__)
#  include <avr/legacyio/iom644rfr2.h>
#elif defined(__AVR_ATmega64RFR2__)
#  include <avr/legacyio/iom64rfr2.h>
#elif defined(__AVR_ATmega64__)
#  include <avr/legacyio/iom64.h>
#elif defined(__AVR_ATmega64A__)
#  include <avr/legacyio/iom64a.h>
#elif defined(__AVR_ATmega640__)
#  include <avr/legacyio/iom640.h>
#elif defined(__AVR_ATmega644__)
#  include <avr/legacyio/iom644.h>
#elif defined(__AVR_ATmega644A__)
#  include <avr/legacyio/iom644a.h>
#elif defined(__AVR_ATmega644P__)
#  include <avr/legacyio/iom644p.h>
#elif defined(__AVR_ATmega644PA__)
#  include <avr/legacyio/iom644pa.h>
#elif defined(__AVR_ATmega645__) || defined(__AVR_ATmega645A__) ||                       \
    defined(__AVR_ATmega645P__)
#  include <avr/legacyio/iom645.h>
#elif defined(__AVR_ATmega6450__) || defined(__AVR_ATmega6450A__) ||                     \
    defined(__AVR_ATmega6450P__)
#  include <avr/legacyio/iom6450.h>
#elif defined(__AVR_ATmega649__) || defined(__AVR_ATmega649A__)
#  include <avr/legacyio/iom649.h>
#elif defined(__AVR_ATmega6490__) || defined(__AVR_ATmega6490A__) ||                     \
    defined(__AVR_ATmega6490P__)
#  include <avr/legacyio/iom6490.h>
#elif defined(__AVR_ATmega649P__)
#  include <avr/legacyio/iom649p.h>
#elif defined(__AVR_ATmega64HVE__)
#  include <avr/legacyio/iom64hve.h>
#elif defined(__AVR_ATmega64HVE2__)
#  include <avr/legacyio/iom64hve2.h>
#elif defined(__AVR_ATmega103__)
#  include <avr/legacyio/iom103.h>
#elif defined(__AVR_ATmega32__)
#  include <avr/legacyio/iom32.h>
#elif defined(__AVR_ATmega32A__)
#  include <avr/legacyio/iom32a.h>
#elif defined(__AVR_ATmega323__)
#  include <avr/legacyio/iom323.h>
#elif defined(__AVR_ATmega324P__) || defined(__AVR_ATmega324A__)
#  include <avr/legacyio/iom324.h>
#elif defined(__AVR_ATmega324PA__)
#  include <avr/legacyio/iom324pa.h>
#elif defined(__AVR_ATmega325__) || defined(__AVR_ATmega325A__)
#  include <avr/legacyio/iom325.h>
#elif defined(__AVR_ATmega325P__)
#  include <avr/legacyio/iom325.h>
#elif defined(__AVR_ATmega325PA__)
#  include <avr/legacyio/iom325pa.h>
#elif defined(__AVR_ATmega3250__) || defined(__AVR_ATmega3250A__)
#  include <avr/legacyio/iom3250.h>
#elif defined(__AVR_ATmega3250P__)
#  include <avr/legacyio/iom3250.h>
#elif defined(__AVR_ATmega3250PA__)
#  include <avr/legacyio/iom3250pa.h>
#elif defined(__AVR_ATmega328P__) || defined(__AVR_ATmega328__)
#  include <avr/legacyio/iom328p.h>
#elif defined(__AVR_ATmega329__) || defined(__AVR_ATmega329A__)
#  include <avr/legacyio/iom329.h>
#elif defined(__AVR_ATmega329P__) || defined(__AVR_ATmega329PA__)
#  include <avr/legacyio/iom329.h>
#elif defined(__AVR_ATmega3290__) || defined(__AVR_ATmega3290A__)
#  include <avr/legacyio/iom3290.h>
#elif defined(__AVR_ATmega3290P__)
#  include <avr/legacyio/iom3290.h>
#elif defined(__AVR_ATmega3290PA__)
#  include <avr/legacyio/iom3290pa.h>
#elif defined(__AVR_ATmega32HVB__)
#  include <avr/legacyio/iom32hvb.h>
#elif defined(__AVR_ATmega32HVBREVB__)
#  include <avr/legacyio/iom32hvbrevb.h>
#elif defined(__AVR_ATmega406__)
#  include <avr/legacyio/iom406.h>
#elif defined(__AVR_ATmega16__)
#  include <avr/legacyio/iom16.h>
#elif defined(__AVR_ATmega16A__)
#  include <avr/legacyio/iom16a.h>
#elif defined(__AVR_ATmega161__)
#  include <avr/legacyio/iom161.h>
#elif defined(__AVR_ATmega162__)
#  include <avr/legacyio/iom162.h>
#elif defined(__AVR_ATmega163__)
#  include <avr/legacyio/iom163.h>
#elif defined(__AVR_ATmega164P__) || defined(__AVR_ATmega164A__)
#  include <avr/legacyio/iom164.h>
#elif defined(__AVR_ATmega164PA__)
#  include <avr/legacyio/iom164pa.h>
#elif defined(__AVR_ATmega165__)
#  include <avr/legacyio/iom165.h>
#elif defined(__AVR_ATmega165A__)
#  include <avr/legacyio/iom165a.h>
#elif defined(__AVR_ATmega165P__)
#  include <avr/legacyio/iom165p.h>
#elif defined(__AVR_ATmega165PA__)
#  include <avr/legacyio/iom165pa.h>
#elif defined(__AVR_ATmega168__)
#  include <avr/legacyio/iom168.h>
#elif defined(__AVR_ATmega168A__)
#  include <avr/legacyio/iom168a.h>
#elif defined(__AVR_ATmega168P__)
#  include <avr/legacyio/iom168p.h>
#elif defined(__AVR_ATmega168PA__)
#  include <avr/legacyio/iom168pa.h>
#elif defined(__AVR_ATmega169__) || defined(__AVR_ATmega169A__)
#  include <avr/legacyio/iom169.h>
#elif defined(__AVR_ATmega169P__)
#  include <avr/legacyio/iom169p.h>
#elif defined(__AVR_ATmega169PA__)
#  include <avr/legacyio/iom169pa.h>
#elif defined(__AVR_ATmega8HVA__)
#  include <avr/legacyio/iom8hva.h>
#elif defined(__AVR_ATmega16HVA__)
#  include <avr/legacyio/iom16hva.h>
#elif defined(__AVR_ATmega16HVA2__)
#  include <avr/legacyio/iom16hva2.h>
#elif defined(__AVR_ATmega16HVB__)
#  include <avr/legacyio/iom16hvb.h>
#elif defined(__AVR_ATmega16HVBREVB__)
#  include <avr/legacyio/iom16hvbrevb.h>
#elif defined(__AVR_ATmega8__)
#  include <avr/legacyio/iom8.h>
#elif defined(__AVR_ATmega8A__)
#  include <avr/legacyio/iom8a.h>
#elif defined(__AVR_ATmega48__)
#  include <avr/legacyio/iom48.h>
#elif defined(__AVR_ATmega48A__)
#  include <avr/legacyio/iom48a.h>
#elif defined(__AVR_ATmega48PA__)
#  include <avr/legacyio/iom48pa.h>
#elif defined(__AVR_ATmega48PB__)
#  include <avr/legacyio/iom48pb.h>
#elif defined(__AVR_ATmega48P__)
#  include <avr/legacyio/iom48p.h>
#elif defined(__AVR_ATmega88__)
#  include <avr/legacyio/iom88.h>
#elif defined(__AVR_ATmega88A__)
#  include <avr/legacyio/iom88a.h>
#elif defined(__AVR_ATmega88P__)
#  include <avr/legacyio/iom88p.h>
#elif defined(__AVR_ATmega88PA__)
#  include <avr/legacyio/iom88pa.h>
#elif defined(__AVR_ATmega88PB__)
#  include <avr/legacyio/iom88pb.h>
#elif defined(__AVR_ATmega8515__)
#  include <avr/legacyio/iom8515.h>
#elif defined(__AVR_ATmega8535__)
#  include <avr/legacyio/iom8535.h>
#elif defined(__AVR_AT90S8535__)
#  include <avr/legacyio/io8535.h>
#elif defined(__AVR_AT90C8534__)
#  include <avr/legacyio/io8534.h>
#elif defined(__AVR_AT90S8515__)
#  include <avr/legacyio/io8515.h>
#elif defined(__AVR_AT90S4434__)
#  include <avr/legacyio/io4434.h>
#elif defined(__AVR_AT90S4433__)
#  include <avr/legacyio/io4433.h>
#elif defined(__AVR_AT90S4414__)
#  include <avr/legacyio/io4414.h>
#elif defined(__AVR_ATtiny22__)
#  include <avr/legacyio/iotn22.h>
#elif defined(__AVR_ATtiny26__)
#  include <avr/legacyio/iotn26.h>
#elif defined(__AVR_AT90S2343__)
#  include <avr/legacyio/io2343.h>
#elif defined(__AVR_AT90S2333__)
#  include <avr/legacyio/io2333.h>
#elif defined(__AVR_AT90S2323__)
#  include <avr/legacyio/io2323.h>
#elif defined(__AVR_AT90S2313__)
#  include <avr/legacyio/io2313.h>
#elif defined(__AVR_ATtiny4__)
#  include <avr/legacyio/iotn4.h>
#elif defined(__AVR_ATtiny5__)
#  include <avr/legacyio/iotn5.h>
#elif defined(__AVR_ATtiny9__)
#  include <avr/legacyio/iotn9.h>
#elif defined(__AVR_ATtiny10__)
#  include <avr/legacyio/iotn10.h>
#elif defined(__AVR_ATtiny20__)
#  include <avr/legacyio/iotn20.h>
#elif defined(__AVR_ATtiny40__)
#  include <avr/legacyio/iotn40.h>
#elif defined(__AVR_ATtiny2313__)
#  include <avr/legacyio/iotn2313.h>
#elif defined(__AVR_ATtiny2313A__)
#  include <avr/legacyio/iotn2313a.h>
#elif defined(__AVR_ATtiny13__)
#  include <avr/legacyio/iotn13.h>
#elif defined(__AVR_ATtiny13A__)
#  include <avr/legacyio/iotn13a.h>
#elif defined(__AVR_ATtiny25__)
#  include <avr/legacyio/iotn25.h>
#elif defined(__AVR_ATtiny4313__)
#  include <avr/legacyio/iotn4313.h>
#elif defined(__AVR_ATtiny45__)
#  include <avr/legacyio/iotn45.h>
#elif defined(__AVR_ATtiny85__)
#  include <avr/legacyio/iotn85.h>
#elif defined(__AVR_ATtiny24__)
#  include <avr/legacyio/iotn24.h>
#elif defined(__AVR_ATtiny24A__)
#  include <avr/legacyio/iotn24a.h>
#elif defined(__AVR_ATtiny44__)
#  include <avr/legacyio/iotn44.h>
#elif defined(__AVR_ATtiny44A__)
#  include <avr/legacyio/iotn44a.h>
#elif defined(__AVR_ATtiny441__)
#  include <avr/legacyio/iotn441.h>
#elif defined(__AVR_ATtiny84__)
#  include <avr/legacyio/iotn84.h>
#elif defined(__AVR_ATtiny84A__)
#  include <avr/legacyio/iotn84a.h>
#elif defined(__AVR_ATtiny841__)
#  include <avr/legacyio/iotn841.h>
#elif defined(__AVR_ATtiny261__)
#  include <avr/legacyio/iotn261.h>
#elif defined(__AVR_ATtiny261A__)
#  include <avr/legacyio/iotn261a.h>
#elif defined(__AVR_ATtiny461__)
#  include <avr/legacyio/iotn461.h>
#elif defined(__AVR_ATtiny461A__)
#  include <avr/legacyio/iotn461a.h>
#elif defined(__AVR_ATtiny861__)
#  include <avr/legacyio/iotn861.h>
#elif defined(__AVR_ATtiny861A__)
#  include <avr/legacyio/iotn861a.h>
#elif defined(__AVR_ATtiny43U__)
#  include <avr/legacyio/iotn43u.h>
#elif defined(__AVR_ATtiny48__)
#  include <avr/legacyio/iotn48.h>
#elif defined(__AVR_ATtiny88__)
#  include <avr/legacyio/iotn88.h>
#elif defined(__AVR_ATtiny828__)
#  include <avr/legacyio/iotn828.h>
#elif defined(__AVR_ATtiny87__)
#  include <avr/legacyio/iotn87.h>
#elif defined(__AVR_ATtiny167__)
#  include <avr/legacyio/iotn167.h>
#elif defined(__AVR_ATtiny1634__)
#  include <avr/legacyio/iotn1634.h>
#elif defined(__AVR_ATtiny202__)
#  include <avr/legacyio/iotn202.h>
#elif defined(__AVR_ATtiny204__)
#  include <avr/legacyio/iotn204.h>
#elif defined(__AVR_ATtiny212__)
#  include <avr/legacyio/iotn212.h>
#elif defined(__AVR_ATtiny214__)
#  include <avr/legacyio/iotn214.h>
#elif defined(__AVR_ATtiny402__)
#  include <avr/legacyio/iotn402.h>
#elif defined(__AVR_ATtiny404__)
#  include <avr/legacyio/iotn404.h>
#elif defined(__AVR_ATtiny406__)
#  include <avr/legacyio/iotn406.h>
#elif defined(__AVR_ATtiny412__)
#  include <avr/legacyio/iotn412.h>
#elif defined(__AVR_ATtiny414__)
#  include <avr/legacyio/iotn414.h>
#elif defined(__AVR_ATtiny416__)
#  include <avr/legacyio/iotn416.h>
#elif defined(__AVR_ATtiny417__)
#  include <avr/legacyio/iotn417.h>
#elif defined(__AVR_ATtiny804__)
#  include <avr/legacyio/iotn804.h>
#elif defined(__AVR_ATtiny806__)
#  include <avr/legacyio/iotn806.h>
#elif defined(__AVR_ATtiny807__)
#  include <avr/legacyio/iotn807.h>
#elif defined(__AVR_ATtiny814__)
#  include <avr/legacyio/iotn814.h>
#elif defined(__AVR_ATtiny816__)
#  include <avr/legacyio/iotn816.h>
#elif defined(__AVR_ATtiny817__)
#  include <avr/legacyio/iotn817.h>
#elif defined(__AVR_ATtiny1604__)
#  include <avr/legacyio/iotn1604.h>
#elif defined(__AVR_ATtiny1606__)
#  include <avr/legacyio/iotn1606.h>
#elif defined(__AVR_ATtiny1607__)
#  include <avr/legacyio/iotn1607.h>
#elif defined(__AVR_ATtiny1614__)
#  include <avr/legacyio/iotn1614.h>
#elif defined(__AVR_ATtiny1616__)
#  include <avr/legacyio/iotn1616.h>
#elif defined(__AVR_ATtiny1617__)
#  include <avr/legacyio/iotn1617.h>
#elif defined(__AVR_ATtiny3214__)
#  include <avr/legacyio/iotn3214.h>
#elif defined(__AVR_ATtiny3216__)
#  include <avr/legacyio/iotn3216.h>
#elif defined(__AVR_ATtiny3217__)
#  include <avr/legacyio/iotn3217.h>
#elif defined(__AVR_AT90SCR100__)
#  include <avr/legacyio/io90scr100.h>
#elif defined(__AVR_ATxmega8E5__)
#  include <avr/legacyio/iox8e5.h>
#elif defined(__AVR_ATxmega16A4__)
#  include <avr/legacyio/iox16a4.h>
#elif defined(__AVR_ATxmega16A4U__)
#  include <avr/legacyio/iox16a4u.h>
#elif defined(__AVR_ATxmega16C4__)
#  include <avr/legacyio/iox16c4.h>
#elif defined(__AVR_ATxmega16D4__)
#  include <avr/legacyio/iox16d4.h>
#elif defined(__AVR_ATxmega32A4__)
#  include <avr/legacyio/iox32a4.h>
#elif defined(__AVR_ATxmega32A4U__)
#  include <avr/legacyio/iox32a4u.h>
#elif defined(__AVR_ATxmega32C3__)
#  include <avr/legacyio/iox32c3.h>
#elif defined(__AVR_ATxmega32C4__)
#  include <avr/legacyio/iox32c4.h>
#elif defined(__AVR_ATxmega32D3__)
#  include <avr/legacyio/iox32d3.h>
#elif defined(__AVR_ATxmega32D4__)
#  include <avr/legacyio/iox32d4.h>
#elif defined(__AVR_ATxmega32E5__)
#  include <avr/legacyio/iox32e5.h>
#elif defined(__AVR_ATxmega64A1__)
#  include <avr/legacyio/iox64a1.h>
#elif defined(__AVR_ATxmega64A1U__)
#  include <avr/legacyio/iox64a1u.h>
#elif defined(__AVR_ATxmega64A3__)
#  include <avr/legacyio/iox64a3.h>
#elif defined(__AVR_ATxmega64A3U__)
#  include <avr/legacyio/iox64a3u.h>
#elif defined(__AVR_ATxmega64A4U__)
#  include <avr/legacyio/iox64a4u.h>
#elif defined(__AVR_ATxmega64B1__)
#  include <avr/legacyio/iox64b1.h>
#elif defined(__AVR_ATxmega64B3__)
#  include <avr/legacyio/iox64b3.h>
#elif defined(__AVR_ATxmega64C3__)
#  include <avr/legacyio/iox64c3.h>
#elif defined(__AVR_ATxmega64D3__)
#  include <avr/legacyio/iox64d3.h>
#elif defined(__AVR_ATxmega64D4__)
#  include <avr/legacyio/iox64d4.h>
#elif defined(__AVR_ATxmega128A1__)
#  include <avr/legacyio/iox128a1.h>
#elif defined(__AVR_ATxmega128A1U__)
#  include <avr/legacyio/iox128a1u.h>
#elif defined(__AVR_ATxmega128A4U__)
#  include <avr/legacyio/iox128a4u.h>
#elif defined(__AVR_ATxmega128A3__)
#  include <avr/legacyio/iox128a3.h>
#elif defined(__AVR_ATxmega128A3U__)
#  include <avr/legacyio/iox128a3u.h>
#elif defined(__AVR_ATxmega128B1__)
#  include <avr/legacyio/iox128b1.h>
#elif defined(__AVR_ATxmega128B3__)
#  include <avr/legacyio/iox128b3.h>
#elif defined(__AVR_ATxmega128C3__)
#  include <avr/legacyio/iox128c3.h>
#elif defined(__AVR_ATxmega128D3__)
#  include <avr/legacyio/iox128d3.h>
#elif defined(__AVR_ATxmega128D4__)
#  include <avr/legacyio/iox128d4.h>
#elif defined(__AVR_ATxmega192A3__)
#  include <avr/legacyio/iox192a3.h>
#elif defined(__AVR_ATxmega192A3U__)
#  include <avr/legacyio/iox192a3u.h>
#elif defined(__AVR_ATxmega192C3__)
#  include <avr/legacyio/iox192c3.h>
#elif defined(__AVR_ATxmega192D3__)
#  include <avr/legacyio/iox192d3.h>
#elif defined(__AVR_ATxmega256A3__)
#  include <avr/legacyio/iox256a3.h>
#elif defined(__AVR_ATxmega256A3U__)
#  include <avr/legacyio/iox256a3u.h>
#elif defined(__AVR_ATxmega256A3B__)
#  include <avr/legacyio/iox256a3b.h>
#elif defined(__AVR_ATxmega256A3BU__)
#  include <avr/legacyio/iox256a3bu.h>
#elif defined(__AVR_ATxmega256C3__)
#  include <avr/legacyio/iox256c3.h>
#elif defined(__AVR_ATxmega256D3__)
#  include <avr/legacyio/iox256d3.h>
#elif defined(__AVR_ATxmega384C3__)
#  include <avr/legacyio/iox384c3.h>
#elif defined(__AVR_ATxmega384D3__)
#  include <avr/legacyio/iox384d3.h>
#elif defined(__AVR_ATA5702M322__)
#  include <avr/legacyio/ioa5702m322.h>
#elif defined(__AVR_ATA5782__)
#  include <avr/legacyio/ioa5782.h>
#elif defined(__AVR_ATA5790__)
#  include <avr/legacyio/ioa5790.h>
#elif defined(__AVR_ATA5790N__)
#  include <avr/legacyio/ioa5790n.h>
#elif defined(__AVR_ATA5831__)
#  include <avr/legacyio/ioa5831.h>
#elif defined(__AVR_ATA5272__)
#  include <avr/legacyio/ioa5272.h>
#elif defined(__AVR_ATA5505__)
#  include <avr/legacyio/ioa5505.h>
#elif defined(__AVR_ATA5795__)
#  include <avr/legacyio/ioa5795.h>
#elif defined(__AVR_ATA6285__)
#  include <avr/legacyio/ioa6285.h>
#elif defined(__AVR_ATA6286__)
#  include <avr/legacyio/ioa6286.h>
#elif defined(__AVR_ATA6289__)
#  include <avr/legacyio/ioa6289.h>
#elif defined(__AVR_ATA6612C__)
#  include <avr/legacyio/ioa6612c.h>
#elif defined(__AVR_ATA6613C__)
#  include <avr/legacyio/ioa6613c.h>
#elif defined(__AVR_ATA6614Q__)
#  include <avr/legacyio/ioa6614q.h>
#elif defined(__AVR_ATA6616C__)
#  include <avr/legacyio/ioa6616c.h>
#elif defined(__AVR_ATA6617C__)
#  include <avr/legacyio/ioa6617c.h>
#elif defined(__AVR_ATA664251__)
#  include <avr/legacyio/ioa664251.h>
/* avr1: the following only supported for assembler programs */
#elif defined(__AVR_ATtiny28__)
#  include <avr/legacyio/iotn28.h>
#elif defined(__AVR_AT90S1200__)
#  include <avr/legacyio/io1200.h>
#elif defined(__AVR_ATtiny15__)
#  include <avr/legacyio/iotn15.h>
#elif defined(__AVR_ATtiny12__)
#  include <avr/legacyio/iotn12.h>
#elif defined(__AVR_ATtiny11__)
#  include <avr/legacyio/iotn11.h>
#elif defined(__AVR_M3000__)
#  include <avr/legacyio/iom3000.h>
#elif defined(__AVR_DEV_LIB_NAME__)
#  define __concat__(a, b) a##b
#  define __header1__(a, b) __concat__(a, b)
#  define __AVR_DEVICE_HEADER__ <avr/__header1__(io,__AVR_DEV_LIB_NAME__).h>
#  include __AVR_DEVICE_HEADER__
#else
#  if !defined(__COMPILING_AVR_LIBC__)
#    warning "device type not defined"
#  endif
#endif

#endif /* _AVR_LEGACY_IO_H_ */
