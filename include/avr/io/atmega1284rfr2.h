/******************************************************************************
 *   This file is part of avr-libc3.                                          * 
 *                                                                            * 
 *   Automatically created by devtools/gen-ioheader-atdf.py (V0.91)           * 
 *                                                                            * 
 *   .atpack File: ATmega1284RFR2.atdf                                        * 
 *   .ATDF File:   atdf/ATmega1284RFR2.atdf                                   * 
 *   Version:      2.0.12                                                     * 
 *   Date:         2019-04-26                                                 * 
 *   Device:       ATmega1284RFR2                                             * 
 *   Architecture: AVR8                                                       * 
 *                                                                            * 
 *   Changelog:                                                               * 
 *                                                                            * 
 *   2.0.12 2019-04-26 :                                                      * 
 *        - Added missing registers and corrceted event generator list for    * 
 *        - mega4809/4808/3209/3208/1609/1608/809/808.                        * 
 *    2.0.2 2019-01-24 :                                                      * 
 *        - Succeeds Atmel.ATmega_DFP 1.3.300.                                * 
 *                                                                            * 
 *   Generated Source Derived from data:                                      * 
 *   Copyright (c) 2019 Microchip Technology Inc.                             * 
 *                                                                            * 
 *   Licensed under the Apache License, Version 2.0 (the "License");          * 
 *   you may not use this file except in compliance with the License.         * 
 *   You may obtain a copy of the Licence at                                  * 
 *                                                                            * 
 *       http://www.apache.org/licenses/LICENSE-2.0                           * 
 *                                                                            * 
 *   Unless required by applicable law or agreed to in writing, software      * 
 *   distributed under the License is distributed on an "AS IS" BASIS,        * 
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. * 
 *   See the License for the specific language governing permissions and      * 
 *   limitations under the License.                                           * 
 ******************************************************************************/


#ifndef _AVR_IO_H_
#  error "Include <avr/io.h> instead of this file."
#endif

#ifndef _AVR_IOXXX_H_
#  define _AVR_IOXXX_H_ "ioATmega1284RFR2.h"
#else
#  error "Attempt to include more than one <avr/ioXXX.h> file."
#endif

#ifndef _AVR_ATmega1284RFR2_H_INCLUDED
#  define _AVR_ATmega1284RFR2_H_INCLUDED

/*
================================================================================
Ungrouped common register
================================================================================
*/

#define GPIOR0 _SFR_MEM8 (0x3E) /* General Purpose IO Register 0 */

#define GPIOR1 _SFR_MEM8 (0x4A) /* General Purpose IO Register 1 */
#define GPIOR2 _SFR_MEM8 (0x4B) /* General Purpose I/O Register 2 */

#define SMCR   _SFR_MEM8 (0x53) /* Sleep Mode Control Register */
#define MCUSR  _SFR_MEM8 (0x54) /* MCU Status Register */
#define MCUCR  _SFR_MEM8 (0x55) /* MCU Control Register */

#define RAMPZ  _SFR_MEM8 (0x5B) /* Extended Z-pointer Register for ELPM/SPM */

#define SP     _SFR_MEM16(0x5D) /* Stack Pointer  */
#define SREG   _SFR_MEM8 (0x5F) /* Status Register */

#define CLKPR  _SFR_MEM8 (0x61) /* Clock Prescale Register */

#define PRR2   _SFR_MEM8 (0x63) /* Power Reduction Register 2 */
#define PRR0   _SFR_MEM8 (0x64) /* Power Reduction Register0 */
#define PRR1   _SFR_MEM8 (0x65) /* Power Reduction Register 1 */
#define OSCCAL _SFR_MEM8 (0x66) /* Oscillator Calibration Value */


/*
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
C LANGUAGE - ONLY
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

#if !defined (__ASSEMBLER__)
/*
================================================================================
IO Module Structures
================================================================================
*/


/*
--------------------------------------------------------------------------------
FUSE - Fuses
--------------------------------------------------------------------------------
*/

typedef struct FUSE_struct
{
    register8_t LOW;     
    register8_t HIGH;    
    register8_t EXTENDED;
} FUSE_t;


/* Brown-out Detector trigger level */
typedef enum FUSE_BODLEVEL_enum
{
    FUSE_BODLEVEL_DISABLED_gc = (0x07), /* Brown-out detection disabled */
    FUSE_BODLEVEL_1V8_gc      = (0x06), /* Brown-out detection at VCC=1.8 V */
    FUSE_BODLEVEL_1V9_gc      = (0x05), /* Brown-out detection at VCC=1.9 V */
    FUSE_BODLEVEL_2V0_gc      = (0x04), /* Brown-out detection at VCC=2.0 V */
    FUSE_BODLEVEL_2V1_gc      = (0x03), /* Brown-out detection at VCC=2.1 V */
    FUSE_BODLEVEL_2V2_gc      = (0x02), /* Brown-out detection at VCC=2.2 V */
    FUSE_BODLEVEL_2V3_gc      = (0x01), /* Brown-out detection at VCC=2.3 V */
    FUSE_BODLEVEL_2V4_gc      = (0x00), /* Brown-out detection at VCC=2.4 V */
} FUSE_BODLEVEL_t;

/* On-Chip Debug Enabled */
typedef enum FUSE_OCDEN_enum
{
    FUSE_OCDEN_CLEAR_gc = (0x00), /* On-Chip Debug Enabled - CLEAR */
    FUSE_OCDEN_SET_gc   = (0x80), /* On-Chip Debug Enabled - SET */
} FUSE_OCDEN_t;

/* JTAG Interface Enabled */
typedef enum FUSE_JTAGEN_enum
{
    FUSE_JTAGEN_CLEAR_gc = (0x00), /* JTAG Interface Enabled - CLEAR */
    FUSE_JTAGEN_SET_gc   = (0x40), /* JTAG Interface Enabled - SET */
} FUSE_JTAGEN_t;

/* Serial program downloading (SPI) enabled */
typedef enum FUSE_SPIEN_enum
{
    FUSE_SPIEN_CLEAR_gc = (0x00), /* Serial program downloading (SPI) enabled - CLEAR */
    FUSE_SPIEN_SET_gc   = (0x20), /* Serial program downloading (SPI) enabled - SET */
} FUSE_SPIEN_t;

/* Watchdog timer always on */
typedef enum FUSE_WDTON_enum
{
    FUSE_WDTON_CLEAR_gc = (0x00), /* Watchdog timer always on - CLEAR */
    FUSE_WDTON_SET_gc   = (0x10), /* Watchdog timer always on - SET */
} FUSE_WDTON_t;

/* Preserve EEPROM through the Chip Erase cycle */
typedef enum FUSE_EESAVE_enum
{
    FUSE_EESAVE_CLEAR_gc = (0x00), /* Preserve EEPROM through the Chip Erase cycle - CLEAR */
    FUSE_EESAVE_SET_gc   = (0x08), /* Preserve EEPROM through the Chip Erase cycle - SET */
} FUSE_EESAVE_t;

/* Select Boot Size */
typedef enum FUSE_BOOTSZ_enum
{
    FUSE_BOOTSZ_512W_FE00_gc  = (0x03<<1), /* Boot Flash size=512 words start address=$FE00 */
    FUSE_BOOTSZ_1024W_FC00_gc = (0x02<<1), /* Boot Flash size=1024 words start address=$FC00 */
    FUSE_BOOTSZ_2048W_F800_gc = (0x01<<1), /* Boot Flash size=2048 words start address=$F800 */
    FUSE_BOOTSZ_4096W_F000_gc = (0x00<<1), /* Boot Flash size=4096 words start address=$F000 */
} FUSE_BOOTSZ_t;

/* Boot Reset vector Enabled */
typedef enum FUSE_BOOTRST_enum
{
    FUSE_BOOTRST_CLEAR_gc = (0x00), /* Boot Reset vector Enabled - CLEAR */
    FUSE_BOOTRST_SET_gc   = (0x01), /* Boot Reset vector Enabled - SET */
} FUSE_BOOTRST_t;

/* Divide clock by 8 internally */
typedef enum FUSE_CKDIV8_enum
{
    FUSE_CKDIV8_CLEAR_gc = (0x00), /* Divide clock by 8 internally - CLEAR */
    FUSE_CKDIV8_SET_gc   = (0x80), /* Divide clock by 8 internally - SET */
} FUSE_CKDIV8_t;

/* Clock output on PORTE7 */
typedef enum FUSE_CKOUT_enum
{
    FUSE_CKOUT_CLEAR_gc = (0x00), /* Clock output on PORTE7 - CLEAR */
    FUSE_CKOUT_SET_gc   = (0x40), /* Clock output on PORTE7 - SET */
} FUSE_CKOUT_t;

/* Select Clock Source : Start-up time */
typedef enum FUSE_CKSEL_SUT_enum
{
    FUSE_CKSEL_SUT_EXTCLK_6CK_0MS_gc           = (0x00), /* Ext. Clock; Start-up time: 6 CK + 0 ms */
    FUSE_CKSEL_SUT_EXTCLK_6CK_4MS1_gc          = (0x10), /* Ext. Clock; Start-up time: 6 CK + 4.1 ms */
    FUSE_CKSEL_SUT_EXTCLK_6CK_65MS_gc          = (0x20), /* Ext. Clock; Start-up time: 6 CK + 65 ms */
    FUSE_CKSEL_SUT_INTRCOSC_6CK_0MS_gc         = (0x02), /* Int. RC Osc.; Start-up time: 6 CK + 0 ms */
    FUSE_CKSEL_SUT_INTRCOSC_6CK_4MS1_gc        = (0x12), /* Int. RC Osc.; Start-up time: 6 CK + 4.1 ms */
    FUSE_CKSEL_SUT_INTRCOSC_6CK_65MS_gc        = (0x22), /* Int. RC Osc.; Start-up time: 6 CK + 65 ms */
    FUSE_CKSEL_SUT_INTRCOSC_128KHZ_6CK_0MS_gc  = (0x03), /* Int. 128kHz RC Osc.; Start-up time: 6 CK + 0 ms */
    FUSE_CKSEL_SUT_INTRCOSC_128KHZ_6CK_4MS1_gc = (0x13), /* Int. 128kHz RC Osc.; Start-up time: 6 CK + 4.1 ms */
    FUSE_CKSEL_SUT_INTRCOSC_128KHZ_6CK_65MS_gc = (0x23), /* Int. 128kHz RC Osc.; Start-up time: 6 CK + 65 ms */
    FUSE_CKSEL_SUT_TOSC_258CK_4MS1_gc          = (0x06), /* Tranceiver Oscillator; Start-up time: 258 CK + 4.1 ms */
    FUSE_CKSEL_SUT_TOSC_258CK_65MS_gc          = (0x16), /* Tranceiver Oscillator; Start-up time: 258 CK + 65 ms */
    FUSE_CKSEL_SUT_TOSC_1KCK_0MS_gc            = (0x26), /* Tranceiver Oscillator; Start-up time: 1K CK + 0 ms */
    FUSE_CKSEL_SUT_TOSC_1KCK_4MS1_gc           = (0x36), /* Tranceiver Oscillator; Start-up time: 1K CK + 4.1 ms */
    FUSE_CKSEL_SUT_TOSC_1KCK_65MS_gc           = (0x07), /* Tranceiver Oscillator; Start-up time: 1K CK + 65 ms */
    FUSE_CKSEL_SUT_TOSC_16KCK_0MS_gc           = (0x17), /* Tranceiver Oscillator; Start-up time: 16K CK + 0 ms */
    FUSE_CKSEL_SUT_TOSC_16KCK_4MS1_gc          = (0x27), /* Tranceiver Oscillator; Start-up time: 16K CK + 4.1 ms */
    FUSE_CKSEL_SUT_TOSC_16KCK_65MS_gc          = (0x37), /* Tranceiver Oscillator; Start-up time: 16K CK + 65 ms */
    FUSE_CKSEL_SUT_TOSC_258CK_4MS1_gc          = (0x08), /* Tranceiver Oscillator; Start-up time: 258 CK + 4.1 ms */
    FUSE_CKSEL_SUT_TOSC_258CK_65MS_gc          = (0x18), /* Tranceiver Oscillator; Start-up time: 258 CK + 65 ms */
    FUSE_CKSEL_SUT_TOSC_1KCK_0MS_gc            = (0x28), /* Tranceiver Oscillator; Start-up time: 1K CK + 0 ms */
    FUSE_CKSEL_SUT_TOSC_1KCK_4MS1_gc           = (0x38), /* Tranceiver Oscillator; Start-up time: 1K CK + 4.1 ms */
    FUSE_CKSEL_SUT_TOSC_1KCK_65MS_gc           = (0x09), /* Tranceiver Oscillator; Start-up time: 1K CK + 65 ms */
    FUSE_CKSEL_SUT_TOSC_16KCK_0MS_gc           = (0x19), /* Tranceiver Oscillator; Start-up time: 16K CK + 0 ms */
    FUSE_CKSEL_SUT_TOSC_16KCK_4MS1_gc          = (0x29), /* Tranceiver Oscillator; Start-up time: 16K CK + 4.1 ms */
    FUSE_CKSEL_SUT_TOSC_16KCK_65MS_gc          = (0x39), /* Tranceiver Oscillator; Start-up time: 16K CK + 65 ms */
    FUSE_CKSEL_SUT_TOSC_258CK_4MS1_gc          = (0x0A), /* Tranceiver Oscillator; Start-up time: 258 CK + 4.1 ms */
    FUSE_CKSEL_SUT_TOSC_258CK_65MS_gc          = (0x1A), /* Tranceiver Oscillator; Start-up time: 258 CK + 65 ms */
    FUSE_CKSEL_SUT_TOSC_1KCK_0MS_gc            = (0x2A), /* Tranceiver Oscillator; Start-up time: 1K CK + 0 ms */
    FUSE_CKSEL_SUT_TOSC_1KCK_4MS1_gc           = (0x3A), /* Tranceiver Oscillator; Start-up time: 1K CK + 4.1 ms */
    FUSE_CKSEL_SUT_TOSC_1KCK_65MS_gc           = (0x0B), /* Tranceiver Oscillator; Start-up time: 1K CK + 65 ms */
    FUSE_CKSEL_SUT_TOSC_16KCK_0MS_gc           = (0x1B), /* Tranceiver Oscillator; Start-up time: 16K CK + 0 ms */
    FUSE_CKSEL_SUT_TOSC_16KCK_4MS1_gc          = (0x2B), /* Tranceiver Oscillator; Start-up time: 16K CK + 4.1 ms */
    FUSE_CKSEL_SUT_TOSC_16KCK_65MS_gc          = (0x3B), /* Tranceiver Oscillator; Start-up time: 16K CK + 65 ms */
    FUSE_CKSEL_SUT_TOSC_258CK_4MS1_gc          = (0x0C), /* Tranceiver Oscillator; Start-up time: 258 CK + 4.1 ms */
    FUSE_CKSEL_SUT_TOSC_258CK_65MS_gc          = (0x1C), /* Tranceiver Oscillator; Start-up time: 258 CK + 65 ms */
    FUSE_CKSEL_SUT_TOSC_1KCK_0MS_gc            = (0x2C), /* Tranceiver Oscillator; Start-up time: 1K CK + 0 ms */
    FUSE_CKSEL_SUT_TOSC_1KCK_4MS1_gc           = (0x3C), /* Tranceiver Oscillator; Start-up time: 1K CK + 4.1 ms */
    FUSE_CKSEL_SUT_TOSC_1KCK_65MS_gc           = (0x0D), /* Tranceiver Oscillator; Start-up time: 1K CK + 65 ms */
    FUSE_CKSEL_SUT_TOSC_16KCK_0MS_gc           = (0x1D), /* Tranceiver Oscillator; Start-up time: 16K CK + 0 ms */
    FUSE_CKSEL_SUT_TOSC_16KCK_4MS1_gc          = (0x2D), /* Tranceiver Oscillator; Start-up time: 16K CK + 4.1 ms */
    FUSE_CKSEL_SUT_TOSC_16KCK_65MS_gc          = (0x3D), /* Tranceiver Oscillator; Start-up time: 16K CK + 65 ms */
    FUSE_CKSEL_SUT_TOSC_258CK_4MS1_gc          = (0x0E), /* Tranceiver Oscillator; Start-up time: 258 CK + 4.1 ms */
    FUSE_CKSEL_SUT_TOSC_258CK_65MS_gc          = (0x1E), /* Tranceiver Oscillator; Start-up time: 258 CK + 65 ms */
    FUSE_CKSEL_SUT_TOSC_1KCK_0MS_gc            = (0x2E), /* Tranceiver Oscillator; Start-up time: 1K CK + 0 ms */
    FUSE_CKSEL_SUT_TOSC_1KCK_4MS1_gc           = (0x3E), /* Tranceiver Oscillator; Start-up time: 1K CK + 4.1 ms */
    FUSE_CKSEL_SUT_TOSC_1KCK_65MS_gc           = (0x0F), /* Tranceiver Oscillator; Start-up time: 1K CK + 65 ms */
    FUSE_CKSEL_SUT_TOSC_16KCK_0MS_gc           = (0x1F), /* Tranceiver Oscillator; Start-up time: 16K CK + 0 ms */
    FUSE_CKSEL_SUT_TOSC_16KCK_4MS1_gc          = (0x2F), /* Tranceiver Oscillator; Start-up time: 16K CK + 4.1 ms */
    FUSE_CKSEL_SUT_TOSC_16KCK_65MS_gc          = (0x3F), /* Tranceiver Oscillator; Start-up time: 16K CK + 65 ms */
} FUSE_CKSEL_SUT_t;

/*
--------------------------------------------------------------------------------
LOCKBIT - Lockbits
--------------------------------------------------------------------------------
*/

typedef struct LOCKBIT_struct
{
    register8_t LOCKBIT;
} LOCKBIT_t;


/* Memory Lock */
typedef enum LOCKBIT_LB_enum
{
    LOCKBIT_LB_PROG_VER_DISABLED_gc = (0x00), /* Further programming and verification disabled */
    LOCKBIT_LB_PROG_DISABLED_gc     = (0x02), /* Further programming disabled */
    LOCKBIT_LB_NO_LOCK_gc           = (0x03), /* No memory lock features enabled */
} LOCKBIT_LB_t;

/* Boot Loader Protection Mode */
typedef enum LOCKBIT_BLB0_enum
{
    LOCKBIT_BLB0_LPM_SPM_DISABLE_gc = (0x00<<2), /* LPM and SPM prohibited in Application Section */
    LOCKBIT_BLB0_LPM_DISABLE_gc     = (0x01<<2), /* LPM prohibited in Application Section */
    LOCKBIT_BLB0_SPM_DISABLE_gc     = (0x02<<2), /* SPM prohibited in Application Section */
    LOCKBIT_BLB0_NO_LOCK_gc         = (0x03<<2), /* No lock on SPM and LPM in Application Section */
} LOCKBIT_BLB0_t;

/* Boot Loader Protection Mode */
typedef enum LOCKBIT_BLB1_enum
{
    LOCKBIT_BLB1_LPM_SPM_DISABLE_gc = (0x00<<4), /* LPM and SPM prohibited in Boot Section */
    LOCKBIT_BLB1_LPM_DISABLE_gc     = (0x01<<4), /* LPM prohibited in Boot Section */
    LOCKBIT_BLB1_SPM_DISABLE_gc     = (0x02<<4), /* SPM prohibited in Boot Section */
    LOCKBIT_BLB1_NO_LOCK_gc         = (0x03<<4), /* No lock on SPM and LPM in Boot Section */
} LOCKBIT_BLB1_t;

/*
--------------------------------------------------------------------------------
AC - Analog Comparator
--------------------------------------------------------------------------------
*/

typedef struct AC_struct
{
    register8_t rsv_0x00[80]; /* RESERVED REGISTER BLOCK */
    register8_t ACSR;         /* Analog Comparator Control And Status Register */
    register8_t rsv_0x51[42]; /* RESERVED REGISTER BLOCK */
    register8_t ADCSRB;       /* ADC Control and Status Register B */
    register8_t rsv_0x7C[3];  /* RESERVED REGISTER BLOCK */
    register8_t DIDR1;        /* Digital Input Disable Register 1 */
} AC_t;


/* Analog Comparator Multiplexer Enable */
typedef enum AC_ACME_enum
{
    AC_ACME_CLEAR_gc = (0x00), /* Analog Comparator Multiplexer Enable - CLEAR */
    AC_ACME_SET_gc   = (0x40), /* Analog Comparator Multiplexer Enable - SET */
} AC_ACME_t;

/* Analog Comparator Disable */
typedef enum AC_ACD_enum
{
    AC_ACD_CLEAR_gc = (0x00), /* Analog Comparator Disable - CLEAR */
    AC_ACD_SET_gc   = (0x80), /* Analog Comparator Disable - SET */
} AC_ACD_t;

/* Analog Comparator Bandgap Select */
typedef enum AC_ACBG_enum
{
    AC_ACBG_CLEAR_gc = (0x00), /* Analog Comparator Bandgap Select - CLEAR */
    AC_ACBG_SET_gc   = (0x40), /* Analog Comparator Bandgap Select - SET */
} AC_ACBG_t;

/* Analog Compare Output */
typedef enum AC_ACO_enum
{
    AC_ACO_CLEAR_gc = (0x00), /* Analog Compare Output - CLEAR */
    AC_ACO_SET_gc   = (0x20), /* Analog Compare Output - SET */
} AC_ACO_t;

/* Analog Comparator Interrupt Flag */
typedef enum AC_ACI_enum
{
    AC_ACI_CLEAR_gc = (0x00), /* Analog Comparator Interrupt Flag - CLEAR */
    AC_ACI_SET_gc   = (0x10), /* Analog Comparator Interrupt Flag - SET */
} AC_ACI_t;

/* Analog Comparator Interrupt Enable */
typedef enum AC_ACIE_enum
{
    AC_ACIE_CLEAR_gc = (0x00), /* Analog Comparator Interrupt Enable - CLEAR */
    AC_ACIE_SET_gc   = (0x08), /* Analog Comparator Interrupt Enable - SET */
} AC_ACIE_t;

/* Analog Comparator Input Capture Enable */
typedef enum AC_ACIC_enum
{
    AC_ACIC_CLEAR_gc = (0x00), /* Analog Comparator Input Capture Enable - CLEAR */
    AC_ACIC_SET_gc   = (0x04), /* Analog Comparator Input Capture Enable - SET */
} AC_ACIC_t;

/* Analog Comparator Interrupt Mode Select */
typedef enum AC_ACIS_enum
{
    AC_ACIS_VAL_0x00_gc = (0x00), /* Interrupt on Toggle */
    AC_ACIS_VAL_0x01_gc = (0x01), /* Reserved */
    AC_ACIS_VAL_0x02_gc = (0x02), /* Interrupt on Falling Edge */
    AC_ACIS_VAL_0x03_gc = (0x03), /* Interrupt on Rising Edge */
} AC_ACIS_t;

/* AIN1 Digital Input Disable */
typedef enum AC_AIN1D_enum
{
    AC_AIN1D_CLEAR_gc = (0x00), /* AIN1 Digital Input Disable - CLEAR */
    AC_AIN1D_SET_gc   = (0x02), /* AIN1 Digital Input Disable - SET */
} AC_AIN1D_t;

/* AIN0 Digital Input Disable */
typedef enum AC_AIN0D_enum
{
    AC_AIN0D_CLEAR_gc = (0x00), /* AIN0 Digital Input Disable - CLEAR */
    AC_AIN0D_SET_gc   = (0x01), /* AIN0 Digital Input Disable - SET */
} AC_AIN0D_t;

/*
--------------------------------------------------------------------------------
USART - USART
--------------------------------------------------------------------------------
*/

typedef struct USART0_struct
{
    register8_t rsv_0x00[192]; /* RESERVED REGISTER BLOCK */
    register8_t UCSR0A;        /* USART0 Control and Status Register A */
    register8_t UCSR0B;        /* USART0 Control and Status Register B */
    register8_t UCSR0C;        /* USART0 Control and Status Register C */
    register8_t rsv_0xC3;      /* RESERVED REGISTER */
    _REGISTER16 (UBRR0);       /* USART0 Baud Rate Register  Bytes */
    register8_t rsv_0xC5;      /* RESERVED REGISTER */
    register8_t UDR0;          /* USART0 I/O Data Register */
} USART0_t;


/*
--------------------------------------------------------------------------------
USART - USART
--------------------------------------------------------------------------------
*/

typedef struct USART1_struct
{
    register8_t rsv_0x00[200]; /* RESERVED REGISTER BLOCK */
    register8_t UCSR1A;        /* USART1 Control and Status Register A */
    register8_t UCSR1B;        /* USART1 Control and Status Register B */
    register8_t UCSR1C;        /* USART1 Control and Status Register C */
    register8_t rsv_0xCB;      /* RESERVED REGISTER */
    _REGISTER16 (UBRR1);       /* USART1 Baud Rate Register  Bytes */
    register8_t rsv_0xCD;      /* RESERVED REGISTER */
    register8_t UDR1;          /* USART1 I/O Data Register */
} USART1_t;


/* USART Receive Complete */
typedef enum USART0_RXC0_enum
{
    USART0_RXC0_CLEAR_gc = (0x00), /* USART Receive Complete - CLEAR */
    USART0_RXC0_SET_gc   = (0x80), /* USART Receive Complete - SET */
} USART0_RXC0_t;

/* USART Transmit Complete */
typedef enum USART0_TXC0_enum
{
    USART0_TXC0_CLEAR_gc = (0x00), /* USART Transmit Complete - CLEAR */
    USART0_TXC0_SET_gc   = (0x40), /* USART Transmit Complete - SET */
} USART0_TXC0_t;

/* USART Data Register Empty */
typedef enum USART0_UDRE0_enum
{
    USART0_UDRE0_CLEAR_gc = (0x00), /* USART Data Register Empty - CLEAR */
    USART0_UDRE0_SET_gc   = (0x20), /* USART Data Register Empty - SET */
} USART0_UDRE0_t;

/* Frame Error */
typedef enum USART0_FE0_enum
{
    USART0_FE0_CLEAR_gc = (0x00), /* Frame Error - CLEAR */
    USART0_FE0_SET_gc   = (0x10), /* Frame Error - SET */
} USART0_FE0_t;

/* Data OverRun */
typedef enum USART0_DOR0_enum
{
    USART0_DOR0_CLEAR_gc = (0x00), /* Data OverRun - CLEAR */
    USART0_DOR0_SET_gc   = (0x08), /* Data OverRun - SET */
} USART0_DOR0_t;

/* USART Parity Error */
typedef enum USART0_UPE0_enum
{
    USART0_UPE0_CLEAR_gc = (0x00), /* USART Parity Error - CLEAR */
    USART0_UPE0_SET_gc   = (0x04), /* USART Parity Error - SET */
} USART0_UPE0_t;

/* Double the USART Transmission Speed */
typedef enum USART0_U2X0_enum
{
    USART0_U2X0_CLEAR_gc = (0x00), /* Double the USART Transmission Speed - CLEAR */
    USART0_U2X0_SET_gc   = (0x02), /* Double the USART Transmission Speed - SET */
} USART0_U2X0_t;

/* Multi-processor Communication Mode */
typedef enum USART0_MPCM0_enum
{
    USART0_MPCM0_CLEAR_gc = (0x00), /* Multi-processor Communication Mode - CLEAR */
    USART0_MPCM0_SET_gc   = (0x01), /* Multi-processor Communication Mode - SET */
} USART0_MPCM0_t;

/* RX Complete Interrupt Enable */
typedef enum USART0_RXCIE0_enum
{
    USART0_RXCIE0_CLEAR_gc = (0x00), /* RX Complete Interrupt Enable - CLEAR */
    USART0_RXCIE0_SET_gc   = (0x80), /* RX Complete Interrupt Enable - SET */
} USART0_RXCIE0_t;

/* TX Complete Interrupt Enable */
typedef enum USART0_TXCIE0_enum
{
    USART0_TXCIE0_CLEAR_gc = (0x00), /* TX Complete Interrupt Enable - CLEAR */
    USART0_TXCIE0_SET_gc   = (0x40), /* TX Complete Interrupt Enable - SET */
} USART0_TXCIE0_t;

/* USART Data Register Empty Interrupt Enable */
typedef enum USART0_UDRIE0_enum
{
    USART0_UDRIE0_CLEAR_gc = (0x00), /* USART Data Register Empty Interrupt Enable - CLEAR */
    USART0_UDRIE0_SET_gc   = (0x20), /* USART Data Register Empty Interrupt Enable - SET */
} USART0_UDRIE0_t;

/* Receiver Enable */
typedef enum USART0_RXEN0_enum
{
    USART0_RXEN0_CLEAR_gc = (0x00), /* Receiver Enable - CLEAR */
    USART0_RXEN0_SET_gc   = (0x10), /* Receiver Enable - SET */
} USART0_RXEN0_t;

/* Transmitter Enable */
typedef enum USART0_TXEN0_enum
{
    USART0_TXEN0_CLEAR_gc = (0x00), /* Transmitter Enable - CLEAR */
    USART0_TXEN0_SET_gc   = (0x08), /* Transmitter Enable - SET */
} USART0_TXEN0_t;

/* Character Size */
typedef enum USART0_UCSZ02_enum
{
    USART0_UCSZ02_CLEAR_gc = (0x00), /* Character Size - CLEAR */
    USART0_UCSZ02_SET_gc   = (0x04), /* Character Size - SET */
} USART0_UCSZ02_t;

/* Receive Data Bit 8 */
typedef enum USART0_RXB80_enum
{
    USART0_RXB80_CLEAR_gc = (0x00), /* Receive Data Bit 8 - CLEAR */
    USART0_RXB80_SET_gc   = (0x02), /* Receive Data Bit 8 - SET */
} USART0_RXB80_t;

/* Transmit Data Bit 8 */
typedef enum USART0_TXB80_enum
{
    USART0_TXB80_CLEAR_gc = (0x00), /* Transmit Data Bit 8 - CLEAR */
    USART0_TXB80_SET_gc   = (0x01), /* Transmit Data Bit 8 - SET */
} USART0_TXB80_t;

/* USART Mode Select */
typedef enum USART0_UMSEL0_enum
{
    USART0_UMSEL0_VAL_0x00_gc = (0x00<<6), /* Asynchronous USART */
    USART0_UMSEL0_VAL_0x01_gc = (0x01<<6), /* Synchronous USART */
    USART0_UMSEL0_VAL_0x02_gc = (0x02<<6), /* Reserved */
    USART0_UMSEL0_VAL_0x03_gc = (0x03<<6), /* Master SPI (MSPIM) */
} USART0_UMSEL0_t;

/* Parity Mode */
typedef enum USART0_UPM0_enum
{
    USART0_UPM0_VAL_0x00_gc = (0x00<<4), /* Disabled */
    USART0_UPM0_VAL_0x01_gc = (0x01<<4), /* Reserved */
    USART0_UPM0_VAL_0x02_gc = (0x02<<4), /* Enabled, Even Parity */
    USART0_UPM0_VAL_0x03_gc = (0x03<<4), /* Enabled, Odd Parity */
} USART0_UPM0_t;

/* Stop Bit Select */
typedef enum USART0_USBS0_enum
{
    USART0_USBS0_VAL_0x00_gc = (0x00<<3), /* 1-bit */
    USART0_USBS0_VAL_0x01_gc = (0x01<<3), /* 2-bit */
} USART0_USBS0_t;

/* Character Size */
typedef enum USART0_UCSZ0_enum
{
    USART0_UCSZ0_VAL_0_gc = (0x00<<1), /* 5-bit */
    USART0_UCSZ0_VAL_1_gc = (0x01<<1), /* 6-bit */
    USART0_UCSZ0_VAL_2_gc = (0x02<<1), /* 7-bit */
    USART0_UCSZ0_VAL_3_gc = (0x03<<1), /* 8-bit */
    USART0_UCSZ0_VAL_4_gc = (0x04<<1), /* Reserved */
    USART0_UCSZ0_VAL_5_gc = (0x05<<1), /* Reserved */
    USART0_UCSZ0_VAL_6_gc = (0x06<<1), /* Reserved */
    USART0_UCSZ0_VAL_7_gc = (0x07<<1), /* 9-bit */
} USART0_UCSZ0_t;

/* Clock Polarity */
typedef enum USART0_UCPOL0_enum
{
    USART0_UCPOL0_VAL_0_gc = (0x00), /* Rising XCKn Edge (Transmitted Data Changed), Falling XCKn Edge (Received Data Sampled) */
    USART0_UCPOL0_VAL_1_gc = (0x01), /* Falling XCKn Edge (Transmitted Data Changed), Rising XCKn Edge (Received Data Sampled) */
} USART0_UCPOL0_t;

/* USART Receive Complete */
typedef enum USART1_RXC1_enum
{
    USART1_RXC1_CLEAR_gc = (0x00), /* USART Receive Complete - CLEAR */
    USART1_RXC1_SET_gc   = (0x80), /* USART Receive Complete - SET */
} USART1_RXC1_t;

/* USART Transmit Complete */
typedef enum USART1_TXC1_enum
{
    USART1_TXC1_CLEAR_gc = (0x00), /* USART Transmit Complete - CLEAR */
    USART1_TXC1_SET_gc   = (0x40), /* USART Transmit Complete - SET */
} USART1_TXC1_t;

/* USART Data Register Empty */
typedef enum USART1_UDRE1_enum
{
    USART1_UDRE1_CLEAR_gc = (0x00), /* USART Data Register Empty - CLEAR */
    USART1_UDRE1_SET_gc   = (0x20), /* USART Data Register Empty - SET */
} USART1_UDRE1_t;

/* Frame Error */
typedef enum USART1_FE1_enum
{
    USART1_FE1_CLEAR_gc = (0x00), /* Frame Error - CLEAR */
    USART1_FE1_SET_gc   = (0x10), /* Frame Error - SET */
} USART1_FE1_t;

/* Data OverRun */
typedef enum USART1_DOR1_enum
{
    USART1_DOR1_CLEAR_gc = (0x00), /* Data OverRun - CLEAR */
    USART1_DOR1_SET_gc   = (0x08), /* Data OverRun - SET */
} USART1_DOR1_t;

/* USART Parity Error */
typedef enum USART1_UPE1_enum
{
    USART1_UPE1_CLEAR_gc = (0x00), /* USART Parity Error - CLEAR */
    USART1_UPE1_SET_gc   = (0x04), /* USART Parity Error - SET */
} USART1_UPE1_t;

/* Double the USART Transmission Speed */
typedef enum USART1_U2X1_enum
{
    USART1_U2X1_CLEAR_gc = (0x00), /* Double the USART Transmission Speed - CLEAR */
    USART1_U2X1_SET_gc   = (0x02), /* Double the USART Transmission Speed - SET */
} USART1_U2X1_t;

/* Multi-processor Communication Mode */
typedef enum USART1_MPCM1_enum
{
    USART1_MPCM1_CLEAR_gc = (0x00), /* Multi-processor Communication Mode - CLEAR */
    USART1_MPCM1_SET_gc   = (0x01), /* Multi-processor Communication Mode - SET */
} USART1_MPCM1_t;

/* RX Complete Interrupt Enable */
typedef enum USART1_RXCIE1_enum
{
    USART1_RXCIE1_CLEAR_gc = (0x00), /* RX Complete Interrupt Enable - CLEAR */
    USART1_RXCIE1_SET_gc   = (0x80), /* RX Complete Interrupt Enable - SET */
} USART1_RXCIE1_t;

/* TX Complete Interrupt Enable */
typedef enum USART1_TXCIE1_enum
{
    USART1_TXCIE1_CLEAR_gc = (0x00), /* TX Complete Interrupt Enable - CLEAR */
    USART1_TXCIE1_SET_gc   = (0x40), /* TX Complete Interrupt Enable - SET */
} USART1_TXCIE1_t;

/* USART Data Register Empty Interrupt Enable */
typedef enum USART1_UDRIE1_enum
{
    USART1_UDRIE1_CLEAR_gc = (0x00), /* USART Data Register Empty Interrupt Enable - CLEAR */
    USART1_UDRIE1_SET_gc   = (0x20), /* USART Data Register Empty Interrupt Enable - SET */
} USART1_UDRIE1_t;

/* Receiver Enable */
typedef enum USART1_RXEN1_enum
{
    USART1_RXEN1_CLEAR_gc = (0x00), /* Receiver Enable - CLEAR */
    USART1_RXEN1_SET_gc   = (0x10), /* Receiver Enable - SET */
} USART1_RXEN1_t;

/* Transmitter Enable */
typedef enum USART1_TXEN1_enum
{
    USART1_TXEN1_CLEAR_gc = (0x00), /* Transmitter Enable - CLEAR */
    USART1_TXEN1_SET_gc   = (0x08), /* Transmitter Enable - SET */
} USART1_TXEN1_t;

/* Character Size */
typedef enum USART1_UCSZ12_enum
{
    USART1_UCSZ12_CLEAR_gc = (0x00), /* Character Size - CLEAR */
    USART1_UCSZ12_SET_gc   = (0x04), /* Character Size - SET */
} USART1_UCSZ12_t;

/* Receive Data Bit 8 */
typedef enum USART1_RXB81_enum
{
    USART1_RXB81_CLEAR_gc = (0x00), /* Receive Data Bit 8 - CLEAR */
    USART1_RXB81_SET_gc   = (0x02), /* Receive Data Bit 8 - SET */
} USART1_RXB81_t;

/* Transmit Data Bit 8 */
typedef enum USART1_TXB81_enum
{
    USART1_TXB81_CLEAR_gc = (0x00), /* Transmit Data Bit 8 - CLEAR */
    USART1_TXB81_SET_gc   = (0x01), /* Transmit Data Bit 8 - SET */
} USART1_TXB81_t;

/* USART Mode Select */
typedef enum USART1_UMSEL1_enum
{
    USART1_UMSEL1_VAL_0x00_gc = (0x00<<6), /* Asynchronous USART */
    USART1_UMSEL1_VAL_0x01_gc = (0x01<<6), /* Synchronous USART */
    USART1_UMSEL1_VAL_0x02_gc = (0x02<<6), /* Reserved */
    USART1_UMSEL1_VAL_0x03_gc = (0x03<<6), /* Master SPI (MSPIM) */
} USART1_UMSEL1_t;

/* Parity Mode */
typedef enum USART1_UPM1_enum
{
    USART1_UPM1_VAL_0x00_gc = (0x00<<4), /* Disabled */
    USART1_UPM1_VAL_0x01_gc = (0x01<<4), /* Reserved */
    USART1_UPM1_VAL_0x02_gc = (0x02<<4), /* Enabled, Even Parity */
    USART1_UPM1_VAL_0x03_gc = (0x03<<4), /* Enabled, Odd Parity */
} USART1_UPM1_t;

/* Stop Bit Select */
typedef enum USART1_USBS1_enum
{
    USART1_USBS1_VAL_0x00_gc = (0x00<<3), /* 1-bit */
    USART1_USBS1_VAL_0x01_gc = (0x01<<3), /* 2-bit */
} USART1_USBS1_t;

/* Character Size */
typedef enum USART1_UCSZ1_enum
{
    USART1_UCSZ1_VAL_0_gc = (0x00<<1), /* 5-bit */
    USART1_UCSZ1_VAL_1_gc = (0x01<<1), /* 6-bit */
    USART1_UCSZ1_VAL_2_gc = (0x02<<1), /* 7-bit */
    USART1_UCSZ1_VAL_3_gc = (0x03<<1), /* 8-bit */
    USART1_UCSZ1_VAL_4_gc = (0x04<<1), /* Reserved */
    USART1_UCSZ1_VAL_5_gc = (0x05<<1), /* Reserved */
    USART1_UCSZ1_VAL_6_gc = (0x06<<1), /* Reserved */
    USART1_UCSZ1_VAL_7_gc = (0x07<<1), /* 9-bit */
} USART1_UCSZ1_t;

/* Clock Polarity */
typedef enum USART1_UCPOL1_enum
{
    USART1_UCPOL1_VAL_0_gc = (0x00), /* Rising XCKn Edge (Transmitted Data Changed), Falling XCKn Edge (Received Data Sampled) */
    USART1_UCPOL1_VAL_1_gc = (0x01), /* Falling XCKn Edge (Transmitted Data Changed), Rising XCKn Edge (Received Data Sampled) */
} USART1_UCPOL1_t;

/*
--------------------------------------------------------------------------------
TWI - Two Wire Serial Interface
--------------------------------------------------------------------------------
*/

typedef struct TWI_struct
{
    register8_t rsv_0x00[184]; /* RESERVED REGISTER BLOCK */
    register8_t TWBR;          /* TWI Bit Rate Register */
    register8_t TWSR;          /* TWI Status Register */
    register8_t TWAR;          /* TWI (Slave) Address Register */
    register8_t TWDR;          /* TWI Data Register */
    register8_t TWCR;          /* TWI Control Register */
    register8_t TWAMR;         /* TWI (Slave) Address Mask Register */
} TWI_t;


/* TWI Address Mask */
#define TWI_TWAMR_TWAM_gc(x) ((x<<1) & 0xFE)

/* Reserved Bit */
typedef enum TWI_Res_enum
{
    TWI_Res_CLEAR_gc = (0x00), /* Reserved Bit - CLEAR */
    TWI_Res_SET_gc   = (0x01), /* Reserved Bit - SET */
} TWI_Res_t;

/* TWI Interrupt Flag */
typedef enum TWI_TWINT_enum
{
    TWI_TWINT_CLEAR_gc = (0x00), /* TWI Interrupt Flag - CLEAR */
    TWI_TWINT_SET_gc   = (0x80), /* TWI Interrupt Flag - SET */
} TWI_TWINT_t;

/* TWI Enable Acknowledge Bit */
typedef enum TWI_TWEA_enum
{
    TWI_TWEA_CLEAR_gc = (0x00), /* TWI Enable Acknowledge Bit - CLEAR */
    TWI_TWEA_SET_gc   = (0x40), /* TWI Enable Acknowledge Bit - SET */
} TWI_TWEA_t;

/* TWI START Condition Bit */
typedef enum TWI_TWSTA_enum
{
    TWI_TWSTA_CLEAR_gc = (0x00), /* TWI START Condition Bit - CLEAR */
    TWI_TWSTA_SET_gc   = (0x20), /* TWI START Condition Bit - SET */
} TWI_TWSTA_t;

/* TWI STOP Condition Bit */
typedef enum TWI_TWSTO_enum
{
    TWI_TWSTO_CLEAR_gc = (0x00), /* TWI STOP Condition Bit - CLEAR */
    TWI_TWSTO_SET_gc   = (0x10), /* TWI STOP Condition Bit - SET */
} TWI_TWSTO_t;

/* TWI Write Collision Flag */
typedef enum TWI_TWWC_enum
{
    TWI_TWWC_CLEAR_gc = (0x00), /* TWI Write Collision Flag - CLEAR */
    TWI_TWWC_SET_gc   = (0x08), /* TWI Write Collision Flag - SET */
} TWI_TWWC_t;

/* TWI Enable Bit */
typedef enum TWI_TWEN_enum
{
    TWI_TWEN_CLEAR_gc = (0x00), /* TWI Enable Bit - CLEAR */
    TWI_TWEN_SET_gc   = (0x04), /* TWI Enable Bit - SET */
} TWI_TWEN_t;

/* Reserved Bit */
typedef enum TWI_Res_enum
{
    TWI_Res_CLEAR_gc = (0x00), /* Reserved Bit - CLEAR */
    TWI_Res_SET_gc   = (0x02), /* Reserved Bit - SET */
} TWI_Res_t;

/* TWI Interrupt Enable */
typedef enum TWI_TWIE_enum
{
    TWI_TWIE_CLEAR_gc = (0x00), /* TWI Interrupt Enable - CLEAR */
    TWI_TWIE_SET_gc   = (0x01), /* TWI Interrupt Enable - SET */
} TWI_TWIE_t;

/* TWI Status */
typedef enum TWI_TWS_enum
{
    TWI_TWS_VAL_0x00_gc = (0x00<<3), /* Bus error due to illegal START or STOP condition. */
    TWI_TWS_VAL_0x08_gc = (0x08<<3), /* A START condition has been transmitted. */
    TWI_TWS_VAL_0x10_gc = (0x10<<3), /* A repeated START condition has been transmitted. */
    TWI_TWS_VAL_0x18_gc = (0x18<<3), /* SLA+W has been transmitted; ACK has been received. */
    TWI_TWS_VAL_0x20_gc = (0x20<<3), /* SLA+W has been transmitted; NOT ACK has been received. */
    TWI_TWS_VAL_0x28_gc = (0x28<<3), /* Data byte has been transmitted; ACK has been received. */
    TWI_TWS_VAL_0x30_gc = (0x30<<3), /* Data byte has been transmitted; NOT ACK has been received. */
    TWI_TWS_VAL_0x38_gc = (0x38<<3), /* Arbitration lost in SLA+W or data bytes (Transmitter); Arbitration lost in SLA+R or NOT ACK bit (Receiver). */
    TWI_TWS_VAL_0x40_gc = (0x40<<3), /* SLA+R has been transmitted; ACK has been received. */
    TWI_TWS_VAL_0x48_gc = (0x48<<3), /* SLA+R has been transmitted; NOT ACK has been received. */
    TWI_TWS_VAL_0x50_gc = (0x50<<3), /* Data byte has been received; ACK has been returned. */
    TWI_TWS_VAL_0x58_gc = (0x58<<3), /* Data byte has been received; NOT ACK has been returned. */
    TWI_TWS_VAL_0x60_gc = (0x60<<3), /* Own SLA+W has been received; ACK has been returned. */
    TWI_TWS_VAL_0x68_gc = (0x68<<3), /* Arbitration lost in SLA+R/W as Master; own SLA+W has been received; ACK has been returned. */
    TWI_TWS_VAL_0x70_gc = (0x70<<3), /* General call address has been received; ACK has been returned. */
    TWI_TWS_VAL_0x78_gc = (0x78<<3), /* Arbitration lost in SLA+R/W as Master; general call address has been received; ACK has been returned. */
    TWI_TWS_VAL_0x80_gc = (0x80<<3), /* Previously addressed with own SLA+W; data has been received; ACK has been returned. */
    TWI_TWS_VAL_0x88_gc = (0x88<<3), /* Previously addressed with own SLA+W; data has been received; NOT ACK has been returned. */
    TWI_TWS_VAL_0x90_gc = (0x90<<3), /* Previously addressed with general call; data has been received; ACK has been returned. */
    TWI_TWS_VAL_0x98_gc = (0x98<<3), /* Previously addressed with general call; data has been received; NOT ACK has been returned. */
    TWI_TWS_VAL_0xA0_gc = (0xA0<<3), /* A STOP condition or repeated START condition has been received while still addressed as Slave. */
    TWI_TWS_VAL_0xA8_gc = (0xA8<<3), /* Own SLA+R has been received; ACK has been returned. */
    TWI_TWS_VAL_0xB0_gc = (0xB0<<3), /* Arbitration lost in SLA+R/W as Master; own SLA+R has been received; ACK has been returned. */
    TWI_TWS_VAL_0xB8_gc = (0xB8<<3), /* Data byte in TWDR has been transmitted; ACK has been received. */
    TWI_TWS_VAL_0xC0_gc = (0xC0<<3), /* Data byte in TWDR has been transmitted; NO ACK has been received. */
    TWI_TWS_VAL_0xC8_gc = (0xC8<<3), /* Last data byte in TWDR has been transmitted (TWEA = 0); ACK has been received. */
    TWI_TWS_VAL_0xF8_gc = (0xF8<<3), /* No relevant state information available; TWINT = 0. */
} TWI_TWS_t;

/* Reserved Bit */
typedef enum TWI_Res_enum
{
    TWI_Res_CLEAR_gc = (0x00), /* Reserved Bit - CLEAR */
    TWI_Res_SET_gc   = (0x04), /* Reserved Bit - SET */
} TWI_Res_t;

/* TWI Prescaler Bits */
typedef enum TWI_TWPS_enum
{
    TWI_TWPS_VAL_0x00_gc = (0x00), /* 1 */
    TWI_TWPS_VAL_0x01_gc = (0x01), /* 4 */
    TWI_TWPS_VAL_0x02_gc = (0x02), /* 16 */
    TWI_TWPS_VAL_0x03_gc = (0x03), /* 64 */
} TWI_TWPS_t;

/* TWI (Slave) Address */
#define TWI_TWAR_TWA_gc(x) ((x<<1) & 0xFE)

/* TWI General Call Recognition Enable Bit */
typedef enum TWI_TWGCE_enum
{
    TWI_TWGCE_CLEAR_gc = (0x00), /* TWI General Call Recognition Enable Bit - CLEAR */
    TWI_TWGCE_SET_gc   = (0x01), /* TWI General Call Recognition Enable Bit - SET */
} TWI_TWGCE_t;

/*
--------------------------------------------------------------------------------
SPI - Serial Peripheral Interface
--------------------------------------------------------------------------------
*/

typedef struct SPI_struct
{
    register8_t rsv_0x00[76]; /* RESERVED REGISTER BLOCK */
    register8_t SPCR;         /* SPI Control Register */
    register8_t SPSR;         /* SPI Status Register */
    register8_t SPDR;         /* SPI Data Register */
} SPI_t;


/*
--------------------------------------------------------------------------------
SPI - Serial Peripheral Interface
--------------------------------------------------------------------------------
*/

typedef struct USART0_SPI_struct
{
    register8_t rsv_0x00[192]; /* RESERVED REGISTER BLOCK */
    register8_t UCSR0A;        /* USART0 MSPIM Control and Status Register A */
    register8_t UCSR0B;        /* USART0 MSPIM Control and Status Register B */
    register8_t UCSR0C;        /* USART0 MSPIM Control and Status Register C */
} USART0_SPI_t;


/*
--------------------------------------------------------------------------------
SPI - Serial Peripheral Interface
--------------------------------------------------------------------------------
*/

typedef struct USART1_SPI_struct
{
    register8_t rsv_0x00[200]; /* RESERVED REGISTER BLOCK */
    register8_t UCSR1A;        /* USART1 MSPIM Control and Status Register A */
    register8_t UCSR1B;        /* USART1 MSPIM Control and Status Register B */
    register8_t UCSR1C;        /* USART1 MSPIM Control and Status Register C */
} USART1_SPI_t;


/* SPI Interrupt Enable */
typedef enum SPI_SPIE_enum
{
    SPI_SPIE_CLEAR_gc = (0x00), /* SPI Interrupt Enable - CLEAR */
    SPI_SPIE_SET_gc   = (0x80), /* SPI Interrupt Enable - SET */
} SPI_SPIE_t;

/* SPI Enable */
typedef enum SPI_SPE_enum
{
    SPI_SPE_CLEAR_gc = (0x00), /* SPI Enable - CLEAR */
    SPI_SPE_SET_gc   = (0x40), /* SPI Enable - SET */
} SPI_SPE_t;

/* Data Order */
typedef enum SPI_DORD_enum
{
    SPI_DORD_CLEAR_gc = (0x00), /* Data Order - CLEAR */
    SPI_DORD_SET_gc   = (0x20), /* Data Order - SET */
} SPI_DORD_t;

/* Master/Slave Select */
typedef enum SPI_MSTR_enum
{
    SPI_MSTR_CLEAR_gc = (0x00), /* Master/Slave Select - CLEAR */
    SPI_MSTR_SET_gc   = (0x10), /* Master/Slave Select - SET */
} SPI_MSTR_t;

/* Clock polarity */
typedef enum SPI_CPOL_enum
{
    SPI_CPOL_VAL_0_gc = (0x00<<3), /* Rising (Leading Edge), Falling (Trailing Edge) */
    SPI_CPOL_VAL_1_gc = (0x01<<3), /* Falling (Leading Egde), Rising (Trailing Edge) */
} SPI_CPOL_t;

/* Clock Phase */
typedef enum SPI_CPHA_enum
{
    SPI_CPHA_VAL_0_gc = (0x00<<2), /* Sample (Leading Edge), Setup (Trailing Edge) */
    SPI_CPHA_VAL_1_gc = (0x01<<2), /* Setup (Leading Edge), Sample (Trailing Edge) */
} SPI_CPHA_t;

/* SPI Clock Rate Select 1 and 0 */
typedef enum SPI_SPR_enum
{
    SPI_SPR_VAL_0x00_gc = (0x00), /* fosc/4 / fosc/2 (SPI2X=0/1) */
    SPI_SPR_VAL_0x01_gc = (0x01), /* fosc/16 / fosc/8 (SPI2X=0/1) */
    SPI_SPR_VAL_0x02_gc = (0x02), /* fosc/64 / fosc/32 (SPI2X=0/1) */
    SPI_SPR_VAL_0x03_gc = (0x03), /* fosc/128 / fosc/64 (SPI2X=0/1) */
} SPI_SPR_t;

/* SPI Interrupt Flag */
typedef enum SPI_SPIF_enum
{
    SPI_SPIF_CLEAR_gc = (0x00), /* SPI Interrupt Flag - CLEAR */
    SPI_SPIF_SET_gc   = (0x80), /* SPI Interrupt Flag - SET */
} SPI_SPIF_t;

/* Write Collision Flag */
typedef enum SPI_WCOL_enum
{
    SPI_WCOL_CLEAR_gc = (0x00), /* Write Collision Flag - CLEAR */
    SPI_WCOL_SET_gc   = (0x40), /* Write Collision Flag - SET */
} SPI_WCOL_t;

/* Reserved */
#define SPI_SPSR_Res_gc(x) ((x<<1) & 0x3E)

/* Double SPI Speed Bit */
typedef enum SPI_SPI2X_enum
{
    SPI_SPI2X_CLEAR_gc = (0x00), /* Double SPI Speed Bit - CLEAR */
    SPI_SPI2X_SET_gc   = (0x01), /* Double SPI Speed Bit - SET */
} SPI_SPI2X_t;

/* USART Receive Complete */
typedef enum USART0_SPI_RXC0_enum
{
    USART0_SPI_RXC0_CLEAR_gc = (0x00), /* USART Receive Complete - CLEAR */
    USART0_SPI_RXC0_SET_gc   = (0x80), /* USART Receive Complete - SET */
} USART0_SPI_RXC0_t;

/* USART Transmit Complete */
typedef enum USART0_SPI_TXC0_enum
{
    USART0_SPI_TXC0_CLEAR_gc = (0x00), /* USART Transmit Complete - CLEAR */
    USART0_SPI_TXC0_SET_gc   = (0x40), /* USART Transmit Complete - SET */
} USART0_SPI_TXC0_t;

/* USART Data Register Empty */
typedef enum USART0_SPI_UDRE0_enum
{
    USART0_SPI_UDRE0_CLEAR_gc = (0x00), /* USART Data Register Empty - CLEAR */
    USART0_SPI_UDRE0_SET_gc   = (0x20), /* USART Data Register Empty - SET */
} USART0_SPI_UDRE0_t;

/* RX Complete Interrupt Enable */
typedef enum USART0_SPI_RXCIE0_enum
{
    USART0_SPI_RXCIE0_CLEAR_gc = (0x00), /* RX Complete Interrupt Enable - CLEAR */
    USART0_SPI_RXCIE0_SET_gc   = (0x80), /* RX Complete Interrupt Enable - SET */
} USART0_SPI_RXCIE0_t;

/* TX Complete Interrupt Enable */
typedef enum USART0_SPI_TXCIE0_enum
{
    USART0_SPI_TXCIE0_CLEAR_gc = (0x00), /* TX Complete Interrupt Enable - CLEAR */
    USART0_SPI_TXCIE0_SET_gc   = (0x40), /* TX Complete Interrupt Enable - SET */
} USART0_SPI_TXCIE0_t;

/* USART Data Register Empty Interrupt Enable */
typedef enum USART0_SPI_UDRIE0_enum
{
    USART0_SPI_UDRIE0_CLEAR_gc = (0x00), /* USART Data Register Empty Interrupt Enable - CLEAR */
    USART0_SPI_UDRIE0_SET_gc   = (0x20), /* USART Data Register Empty Interrupt Enable - SET */
} USART0_SPI_UDRIE0_t;

/* Receiver Enable */
typedef enum USART0_SPI_RXEN0_enum
{
    USART0_SPI_RXEN0_CLEAR_gc = (0x00), /* Receiver Enable - CLEAR */
    USART0_SPI_RXEN0_SET_gc   = (0x10), /* Receiver Enable - SET */
} USART0_SPI_RXEN0_t;

/* Transmitter Enable */
typedef enum USART0_SPI_TXEN0_enum
{
    USART0_SPI_TXEN0_CLEAR_gc = (0x00), /* Transmitter Enable - CLEAR */
    USART0_SPI_TXEN0_SET_gc   = (0x08), /* Transmitter Enable - SET */
} USART0_SPI_TXEN0_t;

/* Data Order */
typedef enum USART0_SPI_UDORD0_enum
{
    USART0_SPI_UDORD0_CLEAR_gc = (0x00), /* Data Order - CLEAR */
    USART0_SPI_UDORD0_SET_gc   = (0x04), /* Data Order - SET */
} USART0_SPI_UDORD0_t;

/* Clock Phase */
typedef enum USART0_SPI_UCPHA0_enum
{
    USART0_SPI_UCPHA0_CLEAR_gc = (0x00), /* Clock Phase - CLEAR */
    USART0_SPI_UCPHA0_SET_gc   = (0x02), /* Clock Phase - SET */
} USART0_SPI_UCPHA0_t;

/* Clock Polarity */
typedef enum USART0_SPI_UCPOL0_enum
{
    USART0_SPI_UCPOL0_CLEAR_gc = (0x00), /* Clock Polarity - CLEAR */
    USART0_SPI_UCPOL0_SET_gc   = (0x01), /* Clock Polarity - SET */
} USART0_SPI_UCPOL0_t;

/* USART Receive Complete */
typedef enum USART1_SPI_RXC1_enum
{
    USART1_SPI_RXC1_CLEAR_gc = (0x00), /* USART Receive Complete - CLEAR */
    USART1_SPI_RXC1_SET_gc   = (0x80), /* USART Receive Complete - SET */
} USART1_SPI_RXC1_t;

/* USART Transmit Complete */
typedef enum USART1_SPI_TXC1_enum
{
    USART1_SPI_TXC1_CLEAR_gc = (0x00), /* USART Transmit Complete - CLEAR */
    USART1_SPI_TXC1_SET_gc   = (0x40), /* USART Transmit Complete - SET */
} USART1_SPI_TXC1_t;

/* USART Data Register Empty */
typedef enum USART1_SPI_UDRE1_enum
{
    USART1_SPI_UDRE1_CLEAR_gc = (0x00), /* USART Data Register Empty - CLEAR */
    USART1_SPI_UDRE1_SET_gc   = (0x20), /* USART Data Register Empty - SET */
} USART1_SPI_UDRE1_t;

/* RX Complete Interrupt Enable */
typedef enum USART1_SPI_RXCIE1_enum
{
    USART1_SPI_RXCIE1_CLEAR_gc = (0x00), /* RX Complete Interrupt Enable - CLEAR */
    USART1_SPI_RXCIE1_SET_gc   = (0x80), /* RX Complete Interrupt Enable - SET */
} USART1_SPI_RXCIE1_t;

/* TX Complete Interrupt Enable */
typedef enum USART1_SPI_TXCIE1_enum
{
    USART1_SPI_TXCIE1_CLEAR_gc = (0x00), /* TX Complete Interrupt Enable - CLEAR */
    USART1_SPI_TXCIE1_SET_gc   = (0x40), /* TX Complete Interrupt Enable - SET */
} USART1_SPI_TXCIE1_t;

/* USART Data Register Empty Interrupt Enable */
typedef enum USART1_SPI_UDRIE1_enum
{
    USART1_SPI_UDRIE1_CLEAR_gc = (0x00), /* USART Data Register Empty Interrupt Enable - CLEAR */
    USART1_SPI_UDRIE1_SET_gc   = (0x20), /* USART Data Register Empty Interrupt Enable - SET */
} USART1_SPI_UDRIE1_t;

/* Receiver Enable */
typedef enum USART1_SPI_RXEN1_enum
{
    USART1_SPI_RXEN1_CLEAR_gc = (0x00), /* Receiver Enable - CLEAR */
    USART1_SPI_RXEN1_SET_gc   = (0x10), /* Receiver Enable - SET */
} USART1_SPI_RXEN1_t;

/* Transmitter Enable */
typedef enum USART1_SPI_TXEN1_enum
{
    USART1_SPI_TXEN1_CLEAR_gc = (0x00), /* Transmitter Enable - CLEAR */
    USART1_SPI_TXEN1_SET_gc   = (0x08), /* Transmitter Enable - SET */
} USART1_SPI_TXEN1_t;

/* Data Order */
typedef enum USART1_SPI_UDORD1_enum
{
    USART1_SPI_UDORD1_CLEAR_gc = (0x00), /* Data Order - CLEAR */
    USART1_SPI_UDORD1_SET_gc   = (0x04), /* Data Order - SET */
} USART1_SPI_UDORD1_t;

/* Clock Phase */
typedef enum USART1_SPI_UCPHA1_enum
{
    USART1_SPI_UCPHA1_CLEAR_gc = (0x00), /* Clock Phase - CLEAR */
    USART1_SPI_UCPHA1_SET_gc   = (0x02), /* Clock Phase - SET */
} USART1_SPI_UCPHA1_t;

/* Clock Polarity */
typedef enum USART1_SPI_UCPOL1_enum
{
    USART1_SPI_UCPOL1_CLEAR_gc = (0x00), /* Clock Polarity - CLEAR */
    USART1_SPI_UCPOL1_SET_gc   = (0x01), /* Clock Polarity - SET */
} USART1_SPI_UCPOL1_t;

/*
--------------------------------------------------------------------------------
PORT - I/O Port
--------------------------------------------------------------------------------
*/

typedef struct PORTA_struct
{
    register8_t rsv_0x00[32]; /* RESERVED REGISTER BLOCK */
    register8_t PINA;         /* Port A Input Pins Address */
    register8_t DDRA;         /* Port A Data Direction Register */
    register8_t PORTA;        /* Port A Data Register */
} PORTA_t;


/*
--------------------------------------------------------------------------------
PORT - I/O Port
--------------------------------------------------------------------------------
*/

typedef struct PORTB_struct
{
    register8_t rsv_0x00[35]; /* RESERVED REGISTER BLOCK */
    register8_t PINB;         /* Port B Input Pins Address */
    register8_t DDRB;         /* Port B Data Direction Register */
    register8_t PORTB;        /* Port B Data Register */
} PORTB_t;


/*
--------------------------------------------------------------------------------
PORT - I/O Port
--------------------------------------------------------------------------------
*/

typedef struct PORTC_struct
{
    register8_t rsv_0x00[38]; /* RESERVED REGISTER BLOCK */
    register8_t PINC;         /* Port C Input Pins Address */
    register8_t DDRC;         /* Port C Data Direction Register */
    register8_t PORTC;        /* Port C Data Register */
} PORTC_t;


/*
--------------------------------------------------------------------------------
PORT - I/O Port
--------------------------------------------------------------------------------
*/

typedef struct PORTD_struct
{
    register8_t rsv_0x00[41]; /* RESERVED REGISTER BLOCK */
    register8_t PIND;         /* Port D Input Pins Address */
    register8_t DDRD;         /* Port D Data Direction Register */
    register8_t PORTD;        /* Port D Data Register */
} PORTD_t;


/*
--------------------------------------------------------------------------------
PORT - I/O Port
--------------------------------------------------------------------------------
*/

typedef struct PORTE_struct
{
    register8_t rsv_0x00[44]; /* RESERVED REGISTER BLOCK */
    register8_t PINE;         /* Port E Input Pins Address */
    register8_t DDRE;         /* Port E Data Direction Register */
    register8_t PORTE;        /* Port E Data Register */
} PORTE_t;


/*
--------------------------------------------------------------------------------
PORT - I/O Port
--------------------------------------------------------------------------------
*/

typedef struct PORTF_struct
{
    register8_t rsv_0x00[47]; /* RESERVED REGISTER BLOCK */
    register8_t PINF;         /* Port F Input Pins Address */
    register8_t DDRF;         /* Port F Data Direction Register */
    register8_t PORTF;        /* Port F Data Register */
} PORTF_t;


/*
--------------------------------------------------------------------------------
PORT - I/O Port
--------------------------------------------------------------------------------
*/

typedef struct PORTG_struct
{
    register8_t rsv_0x00[50]; /* RESERVED REGISTER BLOCK */
    register8_t PING;         /* Port G Input Pins Address */
    register8_t DDRG;         /* Port G Data Direction Register */
    register8_t PORTG;        /* Port G Data Register */
} PORTG_t;


/*
--------------------------------------------------------------------------------
TC8 - Timer/Counter, 8-bit
--------------------------------------------------------------------------------
*/

typedef struct TC0_struct
{
    register8_t rsv_0x00[53]; /* RESERVED REGISTER BLOCK */
    register8_t TIFR0;        /* Timer/Counter0 Interrupt Flag Register */
    register8_t rsv_0x36[13]; /* RESERVED REGISTER BLOCK */
    register8_t GTCCR;        /* General Timer/Counter Control Register */
    register8_t TCCR0A;       /* Timer/Counter0 Control Register A */
    register8_t TCCR0B;       /* Timer/Counter0 Control Register B */
    register8_t TCNT0;        /* Timer/Counter0 Register */
    register8_t OCR0A;        /* Timer/Counter0 Output Compare Register */
    register8_t OCR0B;        /* Timer/Counter0 Output Compare Register B */
    register8_t rsv_0x49[37]; /* RESERVED REGISTER BLOCK */
    register8_t TIMSK0;       /* Timer/Counter0 Interrupt Mask Register */
} TC0_t;


/* Force Output Compare A */
typedef enum TC0_FOC0A_enum
{
    TC0_FOC0A_CLEAR_gc = (0x00), /* Force Output Compare A - CLEAR */
    TC0_FOC0A_SET_gc   = (0x80), /* Force Output Compare A - SET */
} TC0_FOC0A_t;

/* Force Output Compare B */
typedef enum TC0_FOC0B_enum
{
    TC0_FOC0B_CLEAR_gc = (0x00), /* Force Output Compare B - CLEAR */
    TC0_FOC0B_SET_gc   = (0x40), /* Force Output Compare B - SET */
} TC0_FOC0B_t;

/* Reserved Bit */
#define TC0_TCCR0B_Res_gc(x) ((x<<4) & 0x30)

/* Timer/Counter0 Control Register B-WGM02 */
typedef enum TC0_WGM02_enum
{
    TC0_WGM02_CLEAR_gc = (0x00), /* Timer/Counter0 Control Register B-WGM02 - CLEAR */
    TC0_WGM02_SET_gc   = (0x08), /* Timer/Counter0 Control Register B-WGM02 - SET */
} TC0_WGM02_t;

/* Clock Select */
typedef enum TC0_CS0_enum
{
    TC0_CS0_VAL_0x00_gc = (0x00), /* No clock source (Timer/Counter0 stopped) */
    TC0_CS0_VAL_0x01_gc = (0x01), /* clk_IO/1 (no prescaling) */
    TC0_CS0_VAL_0x02_gc = (0x02), /* clk_IO/8 (from prescaler) */
    TC0_CS0_VAL_0x03_gc = (0x03), /* clk_IO/64 (from prescaler) */
    TC0_CS0_VAL_0x04_gc = (0x04), /* clk_IO/256 (from prescaler) */
    TC0_CS0_VAL_0x05_gc = (0x05), /* clk_IO/1024 (from prescaler) */
    TC0_CS0_VAL_0x06_gc = (0x06), /* External clock source on T0 pin, clock on falling edge */
    TC0_CS0_VAL_0x07_gc = (0x07), /* External clock source on T0 pin, clock on rising edge */
} TC0_CS0_t;

/* Compare Match Output A Mode */
typedef enum TC0_COM0A_enum
{
    TC0_COM0A_VAL_0_gc = (0x00<<6), /* Normal port operation, OC0A disconnected */
    TC0_COM0A_VAL_1_gc = (0x01<<6), /* Toggle OC0A on Compare Match */
    TC0_COM0A_VAL_2_gc = (0x02<<6), /* Clear OC0A on Compare Match */
    TC0_COM0A_VAL_3_gc = (0x03<<6), /* Set OC0A on Compare Match */
} TC0_COM0A_t;

/* Compare Match Output B Mode */
typedef enum TC0_COM0B_enum
{
    TC0_COM0B_VAL_0_gc = (0x00<<4), /* Normal port operation, OC0B disconnected */
    TC0_COM0B_VAL_1_gc = (0x01<<4), /* Toggle OC0B on Compare Match */
    TC0_COM0B_VAL_2_gc = (0x02<<4), /* Clear OC0B on Compare Match */
    TC0_COM0B_VAL_3_gc = (0x03<<4), /* Set OC0B on Compare Match */
} TC0_COM0B_t;

/* Reserved Bit */
#define TC0_TCCR0A_Res_gc(x) ((x<<2) & 0x0C)

/* Waveform Generation Mode */
typedef enum TC0_WGM0_enum
{
    TC0_WGM0_VAL_0x0_gc = (0x00), /* Normal mode of operation */
    TC0_WGM0_VAL_0x1_gc = (0x01), /* PWM, phase correct, TOP=0xFF */
    TC0_WGM0_VAL_0x2_gc = (0x02), /* CTC, TOP = OCRA */
    TC0_WGM0_VAL_0x3_gc = (0x03), /* Fast PWM, TOP=0xFF */
    TC0_WGM0_VAL_0x4_gc = (0x04), /* Reserved */
    TC0_WGM0_VAL_0x5_gc = (0x05), /* PWM, Phase correct, TOP = OCRA */
    TC0_WGM0_VAL_0x6_gc = (0x06), /* Reserved */
    TC0_WGM0_VAL_0x7_gc = (0x07), /* Fast PWM, TOP=OCRA */
} TC0_WGM0_t;

/* Reserved */
#define TC0_TIMSK0_Res_gc(x) ((x<<3) & 0xF8)

/* Timer/Counter0 Output Compare Match B Interrupt Enable */
typedef enum TC0_OCIE0B_enum
{
    TC0_OCIE0B_CLEAR_gc = (0x00), /* Timer/Counter0 Output Compare Match B Interrupt Enable - CLEAR */
    TC0_OCIE0B_SET_gc   = (0x04), /* Timer/Counter0 Output Compare Match B Interrupt Enable - SET */
} TC0_OCIE0B_t;

/* Timer/Counter0 Output Compare Match A Interrupt Enable */
typedef enum TC0_OCIE0A_enum
{
    TC0_OCIE0A_CLEAR_gc = (0x00), /* Timer/Counter0 Output Compare Match A Interrupt Enable - CLEAR */
    TC0_OCIE0A_SET_gc   = (0x02), /* Timer/Counter0 Output Compare Match A Interrupt Enable - SET */
} TC0_OCIE0A_t;

/* Timer/Counter0 Overflow Interrupt Enable */
typedef enum TC0_TOIE0_enum
{
    TC0_TOIE0_CLEAR_gc = (0x00), /* Timer/Counter0 Overflow Interrupt Enable - CLEAR */
    TC0_TOIE0_SET_gc   = (0x01), /* Timer/Counter0 Overflow Interrupt Enable - SET */
} TC0_TOIE0_t;

/* Reserved */
#define TC0_TIFR0_Res_gc(x) ((x<<3) & 0xF8)

/* Timer/Counter0 Output Compare B Match Flag */
typedef enum TC0_OCF0B_enum
{
    TC0_OCF0B_CLEAR_gc = (0x00), /* Timer/Counter0 Output Compare B Match Flag - CLEAR */
    TC0_OCF0B_SET_gc   = (0x04), /* Timer/Counter0 Output Compare B Match Flag - SET */
} TC0_OCF0B_t;

/* Timer/Counter0 Output Compare A Match Flag */
typedef enum TC0_OCF0A_enum
{
    TC0_OCF0A_CLEAR_gc = (0x00), /* Timer/Counter0 Output Compare A Match Flag - CLEAR */
    TC0_OCF0A_SET_gc   = (0x02), /* Timer/Counter0 Output Compare A Match Flag - SET */
} TC0_OCF0A_t;

/* Timer/Counter0 Overflow Flag */
typedef enum TC0_TOV0_enum
{
    TC0_TOV0_CLEAR_gc = (0x00), /* Timer/Counter0 Overflow Flag - CLEAR */
    TC0_TOV0_SET_gc   = (0x01), /* Timer/Counter0 Overflow Flag - SET */
} TC0_TOV0_t;

/* Timer/Counter Synchronization Mode */
typedef enum TC0_TSM_enum
{
    TC0_TSM_CLEAR_gc = (0x00), /* Timer/Counter Synchronization Mode - CLEAR */
    TC0_TSM_SET_gc   = (0x80), /* Timer/Counter Synchronization Mode - SET */
} TC0_TSM_t;

/* Reserved */
#define TC0_GTCCR_Res_gc(x) ((x<<2) & 0x7C)

/* Prescaler Reset Timer/Counter2 */
typedef enum TC0_PSRASY_enum
{
    TC0_PSRASY_CLEAR_gc = (0x00), /* Prescaler Reset Timer/Counter2 - CLEAR */
    TC0_PSRASY_SET_gc   = (0x02), /* Prescaler Reset Timer/Counter2 - SET */
} TC0_PSRASY_t;

/* Prescaler Reset for Synchronous Timer/Counters */
typedef enum TC0_PSRSYNC_enum
{
    TC0_PSRSYNC_CLEAR_gc = (0x00), /* Prescaler Reset for Synchronous Timer/Counters - CLEAR */
    TC0_PSRSYNC_SET_gc   = (0x01), /* Prescaler Reset for Synchronous Timer/Counters - SET */
} TC0_PSRSYNC_t;

/*
--------------------------------------------------------------------------------
TC8_ASYNC - Timer/Counter, 8-bit Async
--------------------------------------------------------------------------------
*/

typedef struct TC2_struct
{
    register8_t rsv_0x00[55]; /* RESERVED REGISTER BLOCK */
    register8_t TIFR2;        /* Timer/Counter Interrupt Flag Register */
    register8_t rsv_0x38[11]; /* RESERVED REGISTER BLOCK */
    register8_t GTCCR;        /* General Timer Counter Control register */
    register8_t rsv_0x44[44]; /* RESERVED REGISTER BLOCK */
    register8_t TIMSK2;       /* Timer/Counter Interrupt Mask register */
    register8_t rsv_0x71[63]; /* RESERVED REGISTER BLOCK */
    register8_t TCCR2A;       /* Timer/Counter2 Control Register A */
    register8_t TCCR2B;       /* Timer/Counter2 Control Register B */
    register8_t TCNT2;        /* Timer/Counter2 */
    register8_t OCR2A;        /* Timer/Counter2 Output Compare Register A */
    register8_t OCR2B;        /* Timer/Counter2 Output Compare Register B */
    register8_t rsv_0xB5;     /* RESERVED REGISTER */
    register8_t ASSR;         /* Asynchronous Status Register */
} TC2_t;


/* Reserved Bit */
#define TC2_TIMSK2_Res_gc(x) ((x<<3) & 0xF8)

/* Timer/Counter2 Output Compare Match B Interrupt Enable */
typedef enum TC2_OCIE2B_enum
{
    TC2_OCIE2B_CLEAR_gc = (0x00), /* Timer/Counter2 Output Compare Match B Interrupt Enable - CLEAR */
    TC2_OCIE2B_SET_gc   = (0x04), /* Timer/Counter2 Output Compare Match B Interrupt Enable - SET */
} TC2_OCIE2B_t;

/* Timer/Counter2 Output Compare Match A Interrupt Enable */
typedef enum TC2_OCIE2A_enum
{
    TC2_OCIE2A_CLEAR_gc = (0x00), /* Timer/Counter2 Output Compare Match A Interrupt Enable - CLEAR */
    TC2_OCIE2A_SET_gc   = (0x02), /* Timer/Counter2 Output Compare Match A Interrupt Enable - SET */
} TC2_OCIE2A_t;

/* Timer/Counter2 Overflow Interrupt Enable */
typedef enum TC2_TOIE2_enum
{
    TC2_TOIE2_CLEAR_gc = (0x00), /* Timer/Counter2 Overflow Interrupt Enable - CLEAR */
    TC2_TOIE2_SET_gc   = (0x01), /* Timer/Counter2 Overflow Interrupt Enable - SET */
} TC2_TOIE2_t;

/* Reserved Bit */
#define TC2_TIFR2_Res_gc(x) ((x<<3) & 0xF8)

/* Output Compare Flag 2 B */
typedef enum TC2_OCF2B_enum
{
    TC2_OCF2B_CLEAR_gc = (0x00), /* Output Compare Flag 2 B - CLEAR */
    TC2_OCF2B_SET_gc   = (0x04), /* Output Compare Flag 2 B - SET */
} TC2_OCF2B_t;

/* Output Compare Flag 2 A */
typedef enum TC2_OCF2A_enum
{
    TC2_OCF2A_CLEAR_gc = (0x00), /* Output Compare Flag 2 A - CLEAR */
    TC2_OCF2A_SET_gc   = (0x02), /* Output Compare Flag 2 A - SET */
} TC2_OCF2A_t;

/* Timer/Counter2 Overflow Flag */
typedef enum TC2_TOV2_enum
{
    TC2_TOV2_CLEAR_gc = (0x00), /* Timer/Counter2 Overflow Flag - CLEAR */
    TC2_TOV2_SET_gc   = (0x01), /* Timer/Counter2 Overflow Flag - SET */
} TC2_TOV2_t;

/* Compare Match Output A Mode */
typedef enum TC2_COM2A_enum
{
    TC2_COM2A_VAL_0_gc = (0x00<<6), /* Normal port operation, OC2A disconnected */
    TC2_COM2A_VAL_1_gc = (0x01<<6), /* Toggle OC2A on Compare Match */
    TC2_COM2A_VAL_2_gc = (0x02<<6), /* Clear OC2A on Compare Match */
    TC2_COM2A_VAL_3_gc = (0x03<<6), /* Set OC2A on Compare Match */
} TC2_COM2A_t;

/* Compare Match Output B Mode */
typedef enum TC2_COM2B_enum
{
    TC2_COM2B_VAL_0_gc = (0x00<<4), /* Normal port operation, OC2B disconnected */
    TC2_COM2B_VAL_1_gc = (0x01<<4), /* Toggle OC2B on Compare Match */
    TC2_COM2B_VAL_2_gc = (0x02<<4), /* Clear OC2B on Compare Match */
    TC2_COM2B_VAL_3_gc = (0x03<<4), /* Set OC2B on Compare Match */
} TC2_COM2B_t;

/* Reserved */
#define TC2_TCCR2A_Res_gc(x) ((x<<2) & 0x0C)

/* Waveform Generation Mode */
typedef enum TC2_WGM2_enum
{
    TC2_WGM2_VAL_0x0_gc = (0x00), /* Normal mode of operation */
    TC2_WGM2_VAL_0x1_gc = (0x01), /* PWM, phase correct, TOP=0xFF */
    TC2_WGM2_VAL_0x2_gc = (0x02), /* CTC, TOP = OCRA */
    TC2_WGM2_VAL_0x3_gc = (0x03), /* Fast PWM, TOP=0xFF */
    TC2_WGM2_VAL_0x4_gc = (0x04), /* Reserved */
    TC2_WGM2_VAL_0x5_gc = (0x05), /* PWM, Phase correct, TOP = OCRA */
    TC2_WGM2_VAL_0x6_gc = (0x06), /* Reserved */
    TC2_WGM2_VAL_0x7_gc = (0x07), /* Fast PWM, TOP=OCRA */
} TC2_WGM2_t;

/* Force Output Compare A */
typedef enum TC2_FOC2A_enum
{
    TC2_FOC2A_CLEAR_gc = (0x00), /* Force Output Compare A - CLEAR */
    TC2_FOC2A_SET_gc   = (0x80), /* Force Output Compare A - SET */
} TC2_FOC2A_t;

/* Force Output Compare B */
typedef enum TC2_FOC2B_enum
{
    TC2_FOC2B_CLEAR_gc = (0x00), /* Force Output Compare B - CLEAR */
    TC2_FOC2B_SET_gc   = (0x40), /* Force Output Compare B - SET */
} TC2_FOC2B_t;

/* Reserved */
#define TC2_TCCR2B_Res_gc(x) ((x<<4) & 0x30)

/* Waveform Generation Mode */
typedef enum TC2_WGM22_enum
{
    TC2_WGM22_CLEAR_gc = (0x00), /* Waveform Generation Mode - CLEAR */
    TC2_WGM22_SET_gc   = (0x08), /* Waveform Generation Mode - SET */
} TC2_WGM22_t;

/* Clock Select */
typedef enum TC2_CS2_enum
{
    TC2_CS2_VAL_0x00_gc = (0x00), /* No clock source (Timer/Counter2 stopped) */
    TC2_CS2_VAL_0x01_gc = (0x01), /* clk_T2S/1 (no prescaling) */
    TC2_CS2_VAL_0x02_gc = (0x02), /* clk_T2S/8 (from prescaler) */
    TC2_CS2_VAL_0x03_gc = (0x03), /* clk_T2S/32 (from prescaler) */
    TC2_CS2_VAL_0x04_gc = (0x04), /* clk_T2S/64 (from prescaler) */
    TC2_CS2_VAL_0x05_gc = (0x05), /* clk_T2S/128 (from prescaler) */
    TC2_CS2_VAL_0x06_gc = (0x06), /* clk_T2S/256 (from prescaler) */
    TC2_CS2_VAL_0x07_gc = (0x07), /* clk_T2S/1024 (from prescaler) */
} TC2_CS2_t;

/* Enable External Clock Input for AMR */
typedef enum TC2_EXCLKAMR_enum
{
    TC2_EXCLKAMR_CLEAR_gc = (0x00), /* Enable External Clock Input for AMR - CLEAR */
    TC2_EXCLKAMR_SET_gc   = (0x80), /* Enable External Clock Input for AMR - SET */
} TC2_EXCLKAMR_t;

/* Enable External Clock Input */
typedef enum TC2_EXCLK_enum
{
    TC2_EXCLK_CLEAR_gc = (0x00), /* Enable External Clock Input - CLEAR */
    TC2_EXCLK_SET_gc   = (0x40), /* Enable External Clock Input - SET */
} TC2_EXCLK_t;

/* Timer/Counter2 Asynchronous Mode */
typedef enum TC2_AS2_enum
{
    TC2_AS2_CLEAR_gc = (0x00), /* Timer/Counter2 Asynchronous Mode - CLEAR */
    TC2_AS2_SET_gc   = (0x20), /* Timer/Counter2 Asynchronous Mode - SET */
} TC2_AS2_t;

/* Timer/Counter2 Update Busy */
typedef enum TC2_TCN2UB_enum
{
    TC2_TCN2UB_CLEAR_gc = (0x00), /* Timer/Counter2 Update Busy - CLEAR */
    TC2_TCN2UB_SET_gc   = (0x10), /* Timer/Counter2 Update Busy - SET */
} TC2_TCN2UB_t;

/* Timer/Counter2 Output Compare Register A Update Busy */
typedef enum TC2_OCR2AUB_enum
{
    TC2_OCR2AUB_CLEAR_gc = (0x00), /* Timer/Counter2 Output Compare Register A Update Busy - CLEAR */
    TC2_OCR2AUB_SET_gc   = (0x08), /* Timer/Counter2 Output Compare Register A Update Busy - SET */
} TC2_OCR2AUB_t;

/* Timer/Counter2 Output Compare Register B Update Busy */
typedef enum TC2_OCR2BUB_enum
{
    TC2_OCR2BUB_CLEAR_gc = (0x00), /* Timer/Counter2 Output Compare Register B Update Busy - CLEAR */
    TC2_OCR2BUB_SET_gc   = (0x04), /* Timer/Counter2 Output Compare Register B Update Busy - SET */
} TC2_OCR2BUB_t;

/* Timer/Counter2 Control Register A Update Busy */
typedef enum TC2_TCR2AUB_enum
{
    TC2_TCR2AUB_CLEAR_gc = (0x00), /* Timer/Counter2 Control Register A Update Busy - CLEAR */
    TC2_TCR2AUB_SET_gc   = (0x02), /* Timer/Counter2 Control Register A Update Busy - SET */
} TC2_TCR2AUB_t;

/* Timer/Counter2 Control Register B Update Busy */
typedef enum TC2_TCR2BUB_enum
{
    TC2_TCR2BUB_CLEAR_gc = (0x00), /* Timer/Counter2 Control Register B Update Busy - CLEAR */
    TC2_TCR2BUB_SET_gc   = (0x01), /* Timer/Counter2 Control Register B Update Busy - SET */
} TC2_TCR2BUB_t;

/* Timer/Counter Synchronization Mode */
typedef enum TC2_TSM_enum
{
    TC2_TSM_CLEAR_gc = (0x00), /* Timer/Counter Synchronization Mode - CLEAR */
    TC2_TSM_SET_gc   = (0x80), /* Timer/Counter Synchronization Mode - SET */
} TC2_TSM_t;

/* Prescaler Reset Timer/Counter2 */
typedef enum TC2_PSRASY_enum
{
    TC2_PSRASY_CLEAR_gc = (0x00), /* Prescaler Reset Timer/Counter2 - CLEAR */
    TC2_PSRASY_SET_gc   = (0x02), /* Prescaler Reset Timer/Counter2 - SET */
} TC2_PSRASY_t;

/*
--------------------------------------------------------------------------------
WDT - Watchdog Timer
--------------------------------------------------------------------------------
*/

typedef struct WDT_struct
{
    register8_t rsv_0x00[96]; /* RESERVED REGISTER BLOCK */
    register8_t WDTCSR;       /* Watchdog Timer Control Register */
} WDT_t;


/* Watchdog Timeout Interrupt Flag */
typedef enum WDT_WDIF_enum
{
    WDT_WDIF_CLEAR_gc = (0x00), /* Watchdog Timeout Interrupt Flag - CLEAR */
    WDT_WDIF_SET_gc   = (0x80), /* Watchdog Timeout Interrupt Flag - SET */
} WDT_WDIF_t;

/* Watchdog Timeout Interrupt Enable */
typedef enum WDT_WDIE_enum
{
    WDT_WDIE_CLEAR_gc = (0x00), /* Watchdog Timeout Interrupt Enable - CLEAR */
    WDT_WDIE_SET_gc   = (0x40), /* Watchdog Timeout Interrupt Enable - SET */
} WDT_WDIE_t;

/* Watchdog Timer Prescaler Bits */
typedef enum WDT_WDP_enum
{
    WDT_WDP_VAL_0x00_gc = (0x00), /* Oscillator Cycles 2K */
    WDT_WDP_VAL_0x01_gc = (0x01), /* Oscillator Cycles 4K */
    WDT_WDP_VAL_0x02_gc = (0x02), /* Oscillator Cycles 8K */
    WDT_WDP_VAL_0x03_gc = (0x03), /* Oscillator Cycles 16K */
    WDT_WDP_VAL_0x04_gc = (0x04), /* Oscillator Cycles 32K */
    WDT_WDP_VAL_0x05_gc = (0x05), /* Oscillator Cycles 64K */
    WDT_WDP_VAL_0x06_gc = (0x06), /* Oscillator Cycles 128K */
    WDT_WDP_VAL_0x07_gc = (0x07), /* Oscillator Cycles 256K */
    WDT_WDP_VAL_0x08_gc = (0x08), /* Oscillator Cycles 512K */
    WDT_WDP_VAL_0x09_gc = (0x09), /* Oscillator Cycles 1024K */
} WDT_WDP_t;

/* Watchdog Change Enable */
typedef enum WDT_WDCE_enum
{
    WDT_WDCE_CLEAR_gc = (0x00), /* Watchdog Change Enable - CLEAR */
    WDT_WDCE_SET_gc   = (0x10), /* Watchdog Change Enable - SET */
} WDT_WDCE_t;

/* Watch Dog Enable */
typedef enum WDT_WDE_enum
{
    WDT_WDE_CLEAR_gc = (0x00), /* Watch Dog Enable - CLEAR */
    WDT_WDE_SET_gc   = (0x08), /* Watch Dog Enable - SET */
} WDT_WDE_t;

/*
--------------------------------------------------------------------------------
TC16 - Timer/Counter, 16-bit
--------------------------------------------------------------------------------
*/

typedef struct TC5_struct
{
    register8_t rsv_0x00[58];  /* RESERVED REGISTER BLOCK */
    register8_t TIFR5;         /* Timer/Counter5 Interrupt Flag Register */
    register8_t rsv_0x3B[56];  /* RESERVED REGISTER BLOCK */
    register8_t TIMSK5;        /* Timer/Counter5 Interrupt Mask Register */
    register8_t rsv_0x74[172]; /* RESERVED REGISTER BLOCK */
    register8_t TCCR5A;        /* Timer/Counter5 Control Register A */
    register8_t TCCR5B;        /* Timer/Counter5 Control Register B */
    register8_t TCCR5C;        /* Timer/Counter5 Control Register C */
    register8_t rsv_0x123;     /* RESERVED REGISTER */
    _REGISTER16 (TCNT5);       /* Timer/Counter5  Bytes */
    register8_t rsv_0x125;     /* RESERVED REGISTER */
    _REGISTER16 (ICR5);        /* Timer/Counter5 Input Capture Register  Bytes */
    register8_t rsv_0x127;     /* RESERVED REGISTER */
    _REGISTER16 (OCR5A);       /* Timer/Counter5 Output Compare Register A  Bytes */
    register8_t rsv_0x129;     /* RESERVED REGISTER */
    _REGISTER16 (OCR5B);       /* Timer/Counter5 Output Compare Register B  Bytes */
    register8_t rsv_0x12B;     /* RESERVED REGISTER */
    _REGISTER16 (OCR5C);       /* Timer/Counter5 Output Compare Register C  Bytes */
} TC5_t;


/*
--------------------------------------------------------------------------------
TC16 - Timer/Counter, 16-bit
--------------------------------------------------------------------------------
*/

typedef struct TC4_struct
{
    register8_t rsv_0x00[57]; /* RESERVED REGISTER BLOCK */
    register8_t TIFR4;        /* Timer/Counter4 Interrupt Flag Register */
    register8_t rsv_0x3A[56]; /* RESERVED REGISTER BLOCK */
    register8_t TIMSK4;       /* Timer/Counter4 Interrupt Mask Register */
    register8_t rsv_0x73[45]; /* RESERVED REGISTER BLOCK */
    register8_t TCCR4A;       /* Timer/Counter4 Control Register A */
    register8_t TCCR4B;       /* Timer/Counter4 Control Register B */
    register8_t TCCR4C;       /* Timer/Counter4 Control Register C */
    register8_t rsv_0xA3;     /* RESERVED REGISTER */
    _REGISTER16 (TCNT4);      /* Timer/Counter4  Bytes */
    register8_t rsv_0xA5;     /* RESERVED REGISTER */
    _REGISTER16 (ICR4);       /* Timer/Counter4 Input Capture Register  Bytes */
    register8_t rsv_0xA7;     /* RESERVED REGISTER */
    _REGISTER16 (OCR4A);      /* Timer/Counter4 Output Compare Register A  Bytes */
    register8_t rsv_0xA9;     /* RESERVED REGISTER */
    _REGISTER16 (OCR4B);      /* Timer/Counter4 Output Compare Register B  Bytes */
    register8_t rsv_0xAB;     /* RESERVED REGISTER */
    _REGISTER16 (OCR4C);      /* Timer/Counter4 Output Compare Register C  Bytes */
} TC4_t;


/*
--------------------------------------------------------------------------------
TC16 - Timer/Counter, 16-bit
--------------------------------------------------------------------------------
*/

typedef struct TC3_struct
{
    register8_t rsv_0x00[56]; /* RESERVED REGISTER BLOCK */
    register8_t TIFR3;        /* Timer/Counter3 Interrupt Flag Register */
    register8_t rsv_0x39[56]; /* RESERVED REGISTER BLOCK */
    register8_t TIMSK3;       /* Timer/Counter3 Interrupt Mask Register */
    register8_t rsv_0x72[30]; /* RESERVED REGISTER BLOCK */
    register8_t TCCR3A;       /* Timer/Counter3 Control Register A */
    register8_t TCCR3B;       /* Timer/Counter3 Control Register B */
    register8_t TCCR3C;       /* Timer/Counter3 Control Register C */
    register8_t rsv_0x93;     /* RESERVED REGISTER */
    _REGISTER16 (TCNT3);      /* Timer/Counter3  Bytes */
    register8_t rsv_0x95;     /* RESERVED REGISTER */
    _REGISTER16 (ICR3);       /* Timer/Counter3 Input Capture Register  Bytes */
    register8_t rsv_0x97;     /* RESERVED REGISTER */
    _REGISTER16 (OCR3A);      /* Timer/Counter3 Output Compare Register A  Bytes */
    register8_t rsv_0x99;     /* RESERVED REGISTER */
    _REGISTER16 (OCR3B);      /* Timer/Counter3 Output Compare Register B  Bytes */
    register8_t rsv_0x9B;     /* RESERVED REGISTER */
    _REGISTER16 (OCR3C);      /* Timer/Counter3 Output Compare Register C  Bytes */
} TC3_t;


/*
--------------------------------------------------------------------------------
TC16 - Timer/Counter, 16-bit
--------------------------------------------------------------------------------
*/

typedef struct TC1_struct
{
    register8_t rsv_0x00[54]; /* RESERVED REGISTER BLOCK */
    register8_t TIFR1;        /* Timer/Counter1 Interrupt Flag Register */
    register8_t rsv_0x37[56]; /* RESERVED REGISTER BLOCK */
    register8_t TIMSK1;       /* Timer/Counter1 Interrupt Mask Register */
    register8_t rsv_0x70[16]; /* RESERVED REGISTER BLOCK */
    register8_t TCCR1A;       /* Timer/Counter1 Control Register A */
    register8_t TCCR1B;       /* Timer/Counter1 Control Register B */
    register8_t TCCR1C;       /* Timer/Counter1 Control Register C */
    register8_t rsv_0x83;     /* RESERVED REGISTER */
    _REGISTER16 (TCNT1);      /* Timer/Counter1  Bytes */
    register8_t rsv_0x85;     /* RESERVED REGISTER */
    _REGISTER16 (ICR1);       /* Timer/Counter1 Input Capture Register  Bytes */
    register8_t rsv_0x87;     /* RESERVED REGISTER */
    _REGISTER16 (OCR1A);      /* Timer/Counter1 Output Compare Register A  Bytes */
    register8_t rsv_0x89;     /* RESERVED REGISTER */
    _REGISTER16 (OCR1B);      /* Timer/Counter1 Output Compare Register B  Bytes */
    register8_t rsv_0x8B;     /* RESERVED REGISTER */
    _REGISTER16 (OCR1C);      /* Timer/Counter1 Output Compare Register C  Bytes */
} TC1_t;


/* Compare Output Mode for Channel A */
typedef enum TC5_COM5A_enum
{
    TC5_COM5A_VAL_0_gc = (0x00<<6), /* Normal operation */
    TC5_COM5A_VAL_1_gc = (0x01<<6), /* Reserved */
    TC5_COM5A_VAL_2_gc = (0x02<<6), /* Reserved */
    TC5_COM5A_VAL_3_gc = (0x03<<6), /* Reserved */
} TC5_COM5A_t;

/* Compare Output Mode for Channel B */
typedef enum TC5_COM5B_enum
{
    TC5_COM5B_VAL_0_gc = (0x00<<4), /* Normal operation */
    TC5_COM5B_VAL_1_gc = (0x01<<4), /* Reserved */
    TC5_COM5B_VAL_2_gc = (0x02<<4), /* Reserved */
    TC5_COM5B_VAL_3_gc = (0x03<<4), /* Reserved */
} TC5_COM5B_t;

/* Compare Output Mode for Channel C */
typedef enum TC5_COM5C_enum
{
    TC5_COM5C_VAL_0_gc = (0x00<<2), /* Normal operation */
    TC5_COM5C_VAL_1_gc = (0x01<<2), /* Reserved */
    TC5_COM5C_VAL_2_gc = (0x02<<2), /* Reserved */
    TC5_COM5C_VAL_3_gc = (0x03<<2), /* Reserved */
} TC5_COM5C_t;

/* Waveform Generation Mode */
typedef enum TC5_WGM5_enum
{
    TC5_WGM5_VAL_0x0_gc = (0x00), /* Normal mode of operation */
    TC5_WGM5_VAL_0x1_gc = (0x01), /* PWM, phase correct, 8-bit */
    TC5_WGM5_VAL_0x2_gc = (0x02), /* PWM, phase correct, 9-bit */
    TC5_WGM5_VAL_0x3_gc = (0x03), /* PWM, phase correct, 10-bit */
    TC5_WGM5_VAL_0x4_gc = (0x04), /* CTC, TOP = OCRnA */
    TC5_WGM5_VAL_0x5_gc = (0x05), /* Fast PWM, 8-bit */
    TC5_WGM5_VAL_0x6_gc = (0x06), /* Fast PWM, 9-bit */
    TC5_WGM5_VAL_0x7_gc = (0x07), /* Fast PWM, 10-bit */
    TC5_WGM5_VAL_0x8_gc = (0x08), /* PWM, Phase and frequency correct, TOP = ICRn */
    TC5_WGM5_VAL_0x9_gc = (0x09), /* PWM, Phase and frequency correct, TOP = OCRnA */
    TC5_WGM5_VAL_0xA_gc = (0x0A), /* PWM, Phase correct, TOP = ICRn */
    TC5_WGM5_VAL_0xB_gc = (0x0B), /* PWM, Phase correct, TOP = OCRnA */
    TC5_WGM5_VAL_0xC_gc = (0x0C), /* CTC, TOP = OCRnA */
    TC5_WGM5_VAL_0xD_gc = (0x0D), /* Reserved */
    TC5_WGM5_VAL_0xE_gc = (0x0E), /* Fast PWM, TOP = ICRn */
    TC5_WGM5_VAL_0xF_gc = (0x0F), /* Fast PWM, TOP = OCRnA */
} TC5_WGM5_t;

/* Input Capture 5 Noise Canceller */
typedef enum TC5_ICNC5_enum
{
    TC5_ICNC5_CLEAR_gc = (0x00), /* Input Capture 5 Noise Canceller - CLEAR */
    TC5_ICNC5_SET_gc   = (0x80), /* Input Capture 5 Noise Canceller - SET */
} TC5_ICNC5_t;

/* Input Capture 5 Edge Select */
typedef enum TC5_ICES5_enum
{
    TC5_ICES5_CLEAR_gc = (0x00), /* Input Capture 5 Edge Select - CLEAR */
    TC5_ICES5_SET_gc   = (0x40), /* Input Capture 5 Edge Select - SET */
} TC5_ICES5_t;

/* Reserved Bit */
typedef enum TC5_Res_enum
{
    TC5_Res_CLEAR_gc = (0x00), /* Reserved Bit - CLEAR */
    TC5_Res_SET_gc   = (0x20), /* Reserved Bit - SET */
} TC5_Res_t;

/* Waveform Generation Mode */
typedef enum TC5_WGM5_enum
{
    TC5_WGM5_VAL_0x0_gc = (0x00<<3), /* Normal mode of operation */
    TC5_WGM5_VAL_0x1_gc = (0x01<<3), /* PWM, phase correct, 8-bit */
    TC5_WGM5_VAL_0x2_gc = (0x02<<3), /* PWM, phase correct, 9-bit */
    TC5_WGM5_VAL_0x3_gc = (0x03<<3), /* PWM, phase correct, 10-bit */
    TC5_WGM5_VAL_0x4_gc = (0x04<<3), /* CTC, TOP = OCRnA */
    TC5_WGM5_VAL_0x5_gc = (0x05<<3), /* Fast PWM, 8-bit */
    TC5_WGM5_VAL_0x6_gc = (0x06<<3), /* Fast PWM, 9-bit */
    TC5_WGM5_VAL_0x7_gc = (0x07<<3), /* Fast PWM, 10-bit */
    TC5_WGM5_VAL_0x8_gc = (0x08<<3), /* PWM, Phase and frequency correct, TOP = ICRn */
    TC5_WGM5_VAL_0x9_gc = (0x09<<3), /* PWM, Phase and frequency correct, TOP = OCRnA */
    TC5_WGM5_VAL_0xA_gc = (0x0A<<3), /* PWM, Phase correct, TOP = ICRn */
    TC5_WGM5_VAL_0xB_gc = (0x0B<<3), /* PWM, Phase correct, TOP = OCRnA */
    TC5_WGM5_VAL_0xC_gc = (0x0C<<3), /* CTC, TOP = OCRnA */
    TC5_WGM5_VAL_0xD_gc = (0x0D<<3), /* Reserved */
    TC5_WGM5_VAL_0xE_gc = (0x0E<<3), /* Fast PWM, TOP = ICRn */
    TC5_WGM5_VAL_0xF_gc = (0x0F<<3), /* Fast PWM, TOP = OCRnA */
} TC5_WGM5_t;

/* Clock Select */
typedef enum TC5_CS5_enum
{
    TC5_CS5_VAL_0x00_gc = (0x00), /* No clock source (Timer/Counter stopped) */
    TC5_CS5_VAL_0x01_gc = (0x01), /* clk_IO/1 (no prescaling) */
    TC5_CS5_VAL_0x02_gc = (0x02), /* clk_IO/8 (from prescaler) */
    TC5_CS5_VAL_0x03_gc = (0x03), /* clk_IO/64 (from prescaler) */
    TC5_CS5_VAL_0x04_gc = (0x04), /* clk_IO/256 (from prescaler) */
    TC5_CS5_VAL_0x05_gc = (0x05), /* clk_IO/1024 (from prescaler) */
    TC5_CS5_VAL_0x06_gc = (0x06), /* Reserved */
    TC5_CS5_VAL_0x07_gc = (0x07), /* Reserved */
} TC5_CS5_t;

/* Force Output Compare for Channel A */
typedef enum TC5_FOC5A_enum
{
    TC5_FOC5A_CLEAR_gc = (0x00), /* Force Output Compare for Channel A - CLEAR */
    TC5_FOC5A_SET_gc   = (0x80), /* Force Output Compare for Channel A - SET */
} TC5_FOC5A_t;

/* Force Output Compare for Channel B */
typedef enum TC5_FOC5B_enum
{
    TC5_FOC5B_CLEAR_gc = (0x00), /* Force Output Compare for Channel B - CLEAR */
    TC5_FOC5B_SET_gc   = (0x40), /* Force Output Compare for Channel B - SET */
} TC5_FOC5B_t;

/* Force Output Compare for Channel C */
typedef enum TC5_FOC5C_enum
{
    TC5_FOC5C_CLEAR_gc = (0x00), /* Force Output Compare for Channel C - CLEAR */
    TC5_FOC5C_SET_gc   = (0x20), /* Force Output Compare for Channel C - SET */
} TC5_FOC5C_t;

/* Reserved */
#define TC5_TCCR5C_Res_gc(x) (x & 0x1F)

/* Timer/Counter5 Input Capture Interrupt Enable */
typedef enum TC5_ICIE5_enum
{
    TC5_ICIE5_CLEAR_gc = (0x00), /* Timer/Counter5 Input Capture Interrupt Enable - CLEAR */
    TC5_ICIE5_SET_gc   = (0x20), /* Timer/Counter5 Input Capture Interrupt Enable - SET */
} TC5_ICIE5_t;

/* Timer/Counter5 Output Compare C Match Interrupt Enable */
typedef enum TC5_OCIE5C_enum
{
    TC5_OCIE5C_CLEAR_gc = (0x00), /* Timer/Counter5 Output Compare C Match Interrupt Enable - CLEAR */
    TC5_OCIE5C_SET_gc   = (0x08), /* Timer/Counter5 Output Compare C Match Interrupt Enable - SET */
} TC5_OCIE5C_t;

/* Timer/Counter5 Output Compare B Match Interrupt Enable */
typedef enum TC5_OCIE5B_enum
{
    TC5_OCIE5B_CLEAR_gc = (0x00), /* Timer/Counter5 Output Compare B Match Interrupt Enable - CLEAR */
    TC5_OCIE5B_SET_gc   = (0x04), /* Timer/Counter5 Output Compare B Match Interrupt Enable - SET */
} TC5_OCIE5B_t;

/* Timer/Counter5 Output Compare A Match Interrupt Enable */
typedef enum TC5_OCIE5A_enum
{
    TC5_OCIE5A_CLEAR_gc = (0x00), /* Timer/Counter5 Output Compare A Match Interrupt Enable - CLEAR */
    TC5_OCIE5A_SET_gc   = (0x02), /* Timer/Counter5 Output Compare A Match Interrupt Enable - SET */
} TC5_OCIE5A_t;

/* Timer/Counter5 Overflow Interrupt Enable */
typedef enum TC5_TOIE5_enum
{
    TC5_TOIE5_CLEAR_gc = (0x00), /* Timer/Counter5 Overflow Interrupt Enable - CLEAR */
    TC5_TOIE5_SET_gc   = (0x01), /* Timer/Counter5 Overflow Interrupt Enable - SET */
} TC5_TOIE5_t;

/* Timer/Counter5 Input Capture Flag */
typedef enum TC5_ICF5_enum
{
    TC5_ICF5_CLEAR_gc = (0x00), /* Timer/Counter5 Input Capture Flag - CLEAR */
    TC5_ICF5_SET_gc   = (0x20), /* Timer/Counter5 Input Capture Flag - SET */
} TC5_ICF5_t;

/* Timer/Counter5 Output Compare C Match Flag */
typedef enum TC5_OCF5C_enum
{
    TC5_OCF5C_CLEAR_gc = (0x00), /* Timer/Counter5 Output Compare C Match Flag - CLEAR */
    TC5_OCF5C_SET_gc   = (0x08), /* Timer/Counter5 Output Compare C Match Flag - SET */
} TC5_OCF5C_t;

/* Timer/Counter5 Output Compare B Match Flag */
typedef enum TC5_OCF5B_enum
{
    TC5_OCF5B_CLEAR_gc = (0x00), /* Timer/Counter5 Output Compare B Match Flag - CLEAR */
    TC5_OCF5B_SET_gc   = (0x04), /* Timer/Counter5 Output Compare B Match Flag - SET */
} TC5_OCF5B_t;

/* Timer/Counter5 Output Compare A Match Flag */
typedef enum TC5_OCF5A_enum
{
    TC5_OCF5A_CLEAR_gc = (0x00), /* Timer/Counter5 Output Compare A Match Flag - CLEAR */
    TC5_OCF5A_SET_gc   = (0x02), /* Timer/Counter5 Output Compare A Match Flag - SET */
} TC5_OCF5A_t;

/* Timer/Counter5 Overflow Flag */
typedef enum TC5_TOV5_enum
{
    TC5_TOV5_CLEAR_gc = (0x00), /* Timer/Counter5 Overflow Flag - CLEAR */
    TC5_TOV5_SET_gc   = (0x01), /* Timer/Counter5 Overflow Flag - SET */
} TC5_TOV5_t;

/* Compare Output Mode for Channel A */
typedef enum TC4_COM4A_enum
{
    TC4_COM4A_VAL_0_gc = (0x00<<6), /* Normal operation */
    TC4_COM4A_VAL_1_gc = (0x01<<6), /* Reserved */
    TC4_COM4A_VAL_2_gc = (0x02<<6), /* Reserved */
    TC4_COM4A_VAL_3_gc = (0x03<<6), /* Reserved */
} TC4_COM4A_t;

/* Compare Output Mode for Channel B */
typedef enum TC4_COM4B_enum
{
    TC4_COM4B_VAL_0_gc = (0x00<<4), /* Normal operation */
    TC4_COM4B_VAL_1_gc = (0x01<<4), /* Reserved */
    TC4_COM4B_VAL_2_gc = (0x02<<4), /* Reserved */
    TC4_COM4B_VAL_3_gc = (0x03<<4), /* Reserved */
} TC4_COM4B_t;

/* Compare Output Mode for Channel C */
typedef enum TC4_COM4C_enum
{
    TC4_COM4C_VAL_0_gc = (0x00<<2), /* Normal operation */
    TC4_COM4C_VAL_1_gc = (0x01<<2), /* Reserved */
    TC4_COM4C_VAL_2_gc = (0x02<<2), /* Reserved */
    TC4_COM4C_VAL_3_gc = (0x03<<2), /* Reserved */
} TC4_COM4C_t;

/* Waveform Generation Mode */
typedef enum TC4_WGM4_enum
{
    TC4_WGM4_VAL_0x0_gc = (0x00), /* Normal mode of operation */
    TC4_WGM4_VAL_0x1_gc = (0x01), /* PWM, phase correct, 8-bit */
    TC4_WGM4_VAL_0x2_gc = (0x02), /* PWM, phase correct, 9-bit */
    TC4_WGM4_VAL_0x3_gc = (0x03), /* PWM, phase correct, 10-bit */
    TC4_WGM4_VAL_0x4_gc = (0x04), /* CTC, TOP = OCRnA */
    TC4_WGM4_VAL_0x5_gc = (0x05), /* Fast PWM, 8-bit */
    TC4_WGM4_VAL_0x6_gc = (0x06), /* Fast PWM, 9-bit */
    TC4_WGM4_VAL_0x7_gc = (0x07), /* Fast PWM, 10-bit */
    TC4_WGM4_VAL_0x8_gc = (0x08), /* PWM, Phase and frequency correct, TOP = ICRn */
    TC4_WGM4_VAL_0x9_gc = (0x09), /* PWM, Phase and frequency correct, TOP = OCRnA */
    TC4_WGM4_VAL_0xA_gc = (0x0A), /* PWM, Phase correct, TOP = ICRn */
    TC4_WGM4_VAL_0xB_gc = (0x0B), /* PWM, Phase correct, TOP = OCRnA */
    TC4_WGM4_VAL_0xC_gc = (0x0C), /* CTC, TOP = OCRnA */
    TC4_WGM4_VAL_0xD_gc = (0x0D), /* Reserved */
    TC4_WGM4_VAL_0xE_gc = (0x0E), /* Fast PWM, TOP = ICRn */
    TC4_WGM4_VAL_0xF_gc = (0x0F), /* Fast PWM, TOP = OCRnA */
} TC4_WGM4_t;

/* Input Capture 4 Noise Canceller */
typedef enum TC4_ICNC4_enum
{
    TC4_ICNC4_CLEAR_gc = (0x00), /* Input Capture 4 Noise Canceller - CLEAR */
    TC4_ICNC4_SET_gc   = (0x80), /* Input Capture 4 Noise Canceller - SET */
} TC4_ICNC4_t;

/* Input Capture 4 Edge Select */
typedef enum TC4_ICES4_enum
{
    TC4_ICES4_CLEAR_gc = (0x00), /* Input Capture 4 Edge Select - CLEAR */
    TC4_ICES4_SET_gc   = (0x40), /* Input Capture 4 Edge Select - SET */
} TC4_ICES4_t;

/* Reserved Bit */
typedef enum TC4_Res_enum
{
    TC4_Res_CLEAR_gc = (0x00), /* Reserved Bit - CLEAR */
    TC4_Res_SET_gc   = (0x20), /* Reserved Bit - SET */
} TC4_Res_t;

/* Waveform Generation Mode */
typedef enum TC4_WGM4_enum
{
    TC4_WGM4_VAL_0x0_gc = (0x00<<3), /* Normal mode of operation */
    TC4_WGM4_VAL_0x1_gc = (0x01<<3), /* PWM, phase correct, 8-bit */
    TC4_WGM4_VAL_0x2_gc = (0x02<<3), /* PWM, phase correct, 9-bit */
    TC4_WGM4_VAL_0x3_gc = (0x03<<3), /* PWM, phase correct, 10-bit */
    TC4_WGM4_VAL_0x4_gc = (0x04<<3), /* CTC, TOP = OCRnA */
    TC4_WGM4_VAL_0x5_gc = (0x05<<3), /* Fast PWM, 8-bit */
    TC4_WGM4_VAL_0x6_gc = (0x06<<3), /* Fast PWM, 9-bit */
    TC4_WGM4_VAL_0x7_gc = (0x07<<3), /* Fast PWM, 10-bit */
    TC4_WGM4_VAL_0x8_gc = (0x08<<3), /* PWM, Phase and frequency correct, TOP = ICRn */
    TC4_WGM4_VAL_0x9_gc = (0x09<<3), /* PWM, Phase and frequency correct, TOP = OCRnA */
    TC4_WGM4_VAL_0xA_gc = (0x0A<<3), /* PWM, Phase correct, TOP = ICRn */
    TC4_WGM4_VAL_0xB_gc = (0x0B<<3), /* PWM, Phase correct, TOP = OCRnA */
    TC4_WGM4_VAL_0xC_gc = (0x0C<<3), /* CTC, TOP = OCRnA */
    TC4_WGM4_VAL_0xD_gc = (0x0D<<3), /* Reserved */
    TC4_WGM4_VAL_0xE_gc = (0x0E<<3), /* Fast PWM, TOP = ICRn */
    TC4_WGM4_VAL_0xF_gc = (0x0F<<3), /* Fast PWM, TOP = OCRnA */
} TC4_WGM4_t;

/* Clock Select */
typedef enum TC4_CS4_enum
{
    TC4_CS4_VAL_0x00_gc = (0x00), /* No clock source (Timer/Counter stopped) */
    TC4_CS4_VAL_0x01_gc = (0x01), /* clk_IO/1 (no prescaling) */
    TC4_CS4_VAL_0x02_gc = (0x02), /* clk_IO/8 (from prescaler) */
    TC4_CS4_VAL_0x03_gc = (0x03), /* clk_IO/64 (from prescaler) */
    TC4_CS4_VAL_0x04_gc = (0x04), /* clk_IO/256 (from prescaler) */
    TC4_CS4_VAL_0x05_gc = (0x05), /* clk_IO/1024 (from prescaler) */
    TC4_CS4_VAL_0x06_gc = (0x06), /* Reserved */
    TC4_CS4_VAL_0x07_gc = (0x07), /* Reserved */
} TC4_CS4_t;

/* Force Output Compare for Channel A */
typedef enum TC4_FOC4A_enum
{
    TC4_FOC4A_CLEAR_gc = (0x00), /* Force Output Compare for Channel A - CLEAR */
    TC4_FOC4A_SET_gc   = (0x80), /* Force Output Compare for Channel A - SET */
} TC4_FOC4A_t;

/* Force Output Compare for Channel B */
typedef enum TC4_FOC4B_enum
{
    TC4_FOC4B_CLEAR_gc = (0x00), /* Force Output Compare for Channel B - CLEAR */
    TC4_FOC4B_SET_gc   = (0x40), /* Force Output Compare for Channel B - SET */
} TC4_FOC4B_t;

/* Force Output Compare for Channel C */
typedef enum TC4_FOC4C_enum
{
    TC4_FOC4C_CLEAR_gc = (0x00), /* Force Output Compare for Channel C - CLEAR */
    TC4_FOC4C_SET_gc   = (0x20), /* Force Output Compare for Channel C - SET */
} TC4_FOC4C_t;

/* Reserved */
#define TC4_TCCR4C_Res_gc(x) (x & 0x1F)

/* Timer/Counter4 Input Capture Interrupt Enable */
typedef enum TC4_ICIE4_enum
{
    TC4_ICIE4_CLEAR_gc = (0x00), /* Timer/Counter4 Input Capture Interrupt Enable - CLEAR */
    TC4_ICIE4_SET_gc   = (0x20), /* Timer/Counter4 Input Capture Interrupt Enable - SET */
} TC4_ICIE4_t;

/* Timer/Counter4 Output Compare C Match Interrupt Enable */
typedef enum TC4_OCIE4C_enum
{
    TC4_OCIE4C_CLEAR_gc = (0x00), /* Timer/Counter4 Output Compare C Match Interrupt Enable - CLEAR */
    TC4_OCIE4C_SET_gc   = (0x08), /* Timer/Counter4 Output Compare C Match Interrupt Enable - SET */
} TC4_OCIE4C_t;

/* Timer/Counter4 Output Compare B Match Interrupt Enable */
typedef enum TC4_OCIE4B_enum
{
    TC4_OCIE4B_CLEAR_gc = (0x00), /* Timer/Counter4 Output Compare B Match Interrupt Enable - CLEAR */
    TC4_OCIE4B_SET_gc   = (0x04), /* Timer/Counter4 Output Compare B Match Interrupt Enable - SET */
} TC4_OCIE4B_t;

/* Timer/Counter4 Output Compare A Match Interrupt Enable */
typedef enum TC4_OCIE4A_enum
{
    TC4_OCIE4A_CLEAR_gc = (0x00), /* Timer/Counter4 Output Compare A Match Interrupt Enable - CLEAR */
    TC4_OCIE4A_SET_gc   = (0x02), /* Timer/Counter4 Output Compare A Match Interrupt Enable - SET */
} TC4_OCIE4A_t;

/* Timer/Counter4 Overflow Interrupt Enable */
typedef enum TC4_TOIE4_enum
{
    TC4_TOIE4_CLEAR_gc = (0x00), /* Timer/Counter4 Overflow Interrupt Enable - CLEAR */
    TC4_TOIE4_SET_gc   = (0x01), /* Timer/Counter4 Overflow Interrupt Enable - SET */
} TC4_TOIE4_t;

/* Timer/Counter4 Input Capture Flag */
typedef enum TC4_ICF4_enum
{
    TC4_ICF4_CLEAR_gc = (0x00), /* Timer/Counter4 Input Capture Flag - CLEAR */
    TC4_ICF4_SET_gc   = (0x20), /* Timer/Counter4 Input Capture Flag - SET */
} TC4_ICF4_t;

/* Timer/Counter4 Output Compare C Match Flag */
typedef enum TC4_OCF4C_enum
{
    TC4_OCF4C_CLEAR_gc = (0x00), /* Timer/Counter4 Output Compare C Match Flag - CLEAR */
    TC4_OCF4C_SET_gc   = (0x08), /* Timer/Counter4 Output Compare C Match Flag - SET */
} TC4_OCF4C_t;

/* Timer/Counter4 Output Compare B Match Flag */
typedef enum TC4_OCF4B_enum
{
    TC4_OCF4B_CLEAR_gc = (0x00), /* Timer/Counter4 Output Compare B Match Flag - CLEAR */
    TC4_OCF4B_SET_gc   = (0x04), /* Timer/Counter4 Output Compare B Match Flag - SET */
} TC4_OCF4B_t;

/* Timer/Counter4 Output Compare A Match Flag */
typedef enum TC4_OCF4A_enum
{
    TC4_OCF4A_CLEAR_gc = (0x00), /* Timer/Counter4 Output Compare A Match Flag - CLEAR */
    TC4_OCF4A_SET_gc   = (0x02), /* Timer/Counter4 Output Compare A Match Flag - SET */
} TC4_OCF4A_t;

/* Timer/Counter4 Overflow Flag */
typedef enum TC4_TOV4_enum
{
    TC4_TOV4_CLEAR_gc = (0x00), /* Timer/Counter4 Overflow Flag - CLEAR */
    TC4_TOV4_SET_gc   = (0x01), /* Timer/Counter4 Overflow Flag - SET */
} TC4_TOV4_t;

/* Compare Output Mode for Channel A */
typedef enum TC3_COM3A_enum
{
    TC3_COM3A_VAL_0_gc = (0x00<<6), /* Normal port operation, OCnA/OCnB/OCnC disconnected. */
    TC3_COM3A_VAL_1_gc = (0x01<<6), /* Toggle OCnA/OCnB/OCnC on Compare Match. */
    TC3_COM3A_VAL_2_gc = (0x02<<6), /* Clear OCnA/OCnB/OCnC on Compare Match (set output to low level). */
    TC3_COM3A_VAL_3_gc = (0x03<<6), /* Set OCnA/OCnB/OCnC on Compare Match (set output to high level). */
} TC3_COM3A_t;

/* Compare Output Mode for Channel B */
typedef enum TC3_COM3B_enum
{
    TC3_COM3B_VAL_0_gc = (0x00<<4), /* Normal port operation, OCnA/OCnB/OCnC disconnected. */
    TC3_COM3B_VAL_1_gc = (0x01<<4), /* Toggle OCnA/OCnB/OCnC on Compare Match. */
    TC3_COM3B_VAL_2_gc = (0x02<<4), /* Clear OCnA/OCnB/OCnC on Compare Match (set output to low level). */
    TC3_COM3B_VAL_3_gc = (0x03<<4), /* Set OCnA/OCnB/OCnC on Compare Match (set output to high level). */
} TC3_COM3B_t;

/* Compare Output Mode for Channel C */
typedef enum TC3_COM3C_enum
{
    TC3_COM3C_VAL_0_gc = (0x00<<2), /* Normal port operation, OCnA/OCnB/OCnC disconnected. */
    TC3_COM3C_VAL_1_gc = (0x01<<2), /* Toggle OCnA/OCnB/OCnC on Compare Match. */
    TC3_COM3C_VAL_2_gc = (0x02<<2), /* Clear OCnA/OCnB/OCnC on Compare Match (set output to low level). */
    TC3_COM3C_VAL_3_gc = (0x03<<2), /* Set OCnA/OCnB/OCnC on Compare Match (set output to high level). */
} TC3_COM3C_t;

/* Waveform Generation Mode */
typedef enum TC3_WGM3_enum
{
    TC3_WGM3_VAL_0x0_gc = (0x00), /* Normal mode of operation */
    TC3_WGM3_VAL_0x1_gc = (0x01), /* PWM, phase correct, 8-bit */
    TC3_WGM3_VAL_0x2_gc = (0x02), /* PWM, phase correct, 9-bit */
    TC3_WGM3_VAL_0x3_gc = (0x03), /* PWM, phase correct, 10-bit */
    TC3_WGM3_VAL_0x4_gc = (0x04), /* CTC, TOP = OCRnA */
    TC3_WGM3_VAL_0x5_gc = (0x05), /* Fast PWM, 8-bit */
    TC3_WGM3_VAL_0x6_gc = (0x06), /* Fast PWM, 9-bit */
    TC3_WGM3_VAL_0x7_gc = (0x07), /* Fast PWM, 10-bit */
    TC3_WGM3_VAL_0x8_gc = (0x08), /* PWM, Phase and frequency correct, TOP = ICRn */
    TC3_WGM3_VAL_0x9_gc = (0x09), /* PWM, Phase and frequency correct, TOP = OCRnA */
    TC3_WGM3_VAL_0xA_gc = (0x0A), /* PWM, Phase correct, TOP = ICRn */
    TC3_WGM3_VAL_0xB_gc = (0x0B), /* PWM, Phase correct, TOP = OCRnA */
    TC3_WGM3_VAL_0xC_gc = (0x0C), /* CTC, TOP = OCRnA */
    TC3_WGM3_VAL_0xD_gc = (0x0D), /* Reserved */
    TC3_WGM3_VAL_0xE_gc = (0x0E), /* Fast PWM, TOP = ICRn */
    TC3_WGM3_VAL_0xF_gc = (0x0F), /* Fast PWM, TOP = OCRnA */
} TC3_WGM3_t;

/* Input Capture 3 Noise Canceller */
typedef enum TC3_ICNC3_enum
{
    TC3_ICNC3_CLEAR_gc = (0x00), /* Input Capture 3 Noise Canceller - CLEAR */
    TC3_ICNC3_SET_gc   = (0x80), /* Input Capture 3 Noise Canceller - SET */
} TC3_ICNC3_t;

/* Input Capture 3 Edge Select */
typedef enum TC3_ICES3_enum
{
    TC3_ICES3_CLEAR_gc = (0x00), /* Input Capture 3 Edge Select - CLEAR */
    TC3_ICES3_SET_gc   = (0x40), /* Input Capture 3 Edge Select - SET */
} TC3_ICES3_t;

/* Reserved Bit */
typedef enum TC3_Res_enum
{
    TC3_Res_CLEAR_gc = (0x00), /* Reserved Bit - CLEAR */
    TC3_Res_SET_gc   = (0x20), /* Reserved Bit - SET */
} TC3_Res_t;

/* Waveform Generation Mode */
typedef enum TC3_WGM3_enum
{
    TC3_WGM3_VAL_0x0_gc = (0x00<<3), /* Normal mode of operation */
    TC3_WGM3_VAL_0x1_gc = (0x01<<3), /* PWM, phase correct, 8-bit */
    TC3_WGM3_VAL_0x2_gc = (0x02<<3), /* PWM, phase correct, 9-bit */
    TC3_WGM3_VAL_0x3_gc = (0x03<<3), /* PWM, phase correct, 10-bit */
    TC3_WGM3_VAL_0x4_gc = (0x04<<3), /* CTC, TOP = OCRnA */
    TC3_WGM3_VAL_0x5_gc = (0x05<<3), /* Fast PWM, 8-bit */
    TC3_WGM3_VAL_0x6_gc = (0x06<<3), /* Fast PWM, 9-bit */
    TC3_WGM3_VAL_0x7_gc = (0x07<<3), /* Fast PWM, 10-bit */
    TC3_WGM3_VAL_0x8_gc = (0x08<<3), /* PWM, Phase and frequency correct, TOP = ICRn */
    TC3_WGM3_VAL_0x9_gc = (0x09<<3), /* PWM, Phase and frequency correct, TOP = OCRnA */
    TC3_WGM3_VAL_0xA_gc = (0x0A<<3), /* PWM, Phase correct, TOP = ICRn */
    TC3_WGM3_VAL_0xB_gc = (0x0B<<3), /* PWM, Phase correct, TOP = OCRnA */
    TC3_WGM3_VAL_0xC_gc = (0x0C<<3), /* CTC, TOP = OCRnA */
    TC3_WGM3_VAL_0xD_gc = (0x0D<<3), /* Reserved */
    TC3_WGM3_VAL_0xE_gc = (0x0E<<3), /* Fast PWM, TOP = ICRn */
    TC3_WGM3_VAL_0xF_gc = (0x0F<<3), /* Fast PWM, TOP = OCRnA */
} TC3_WGM3_t;

/* Clock Select */
typedef enum TC3_CS3_enum
{
    TC3_CS3_VAL_0x00_gc = (0x00), /* No clock source (Timer/Counter stopped) */
    TC3_CS3_VAL_0x01_gc = (0x01), /* clk_IO/1 (no prescaling) */
    TC3_CS3_VAL_0x02_gc = (0x02), /* clk_IO/8 (from prescaler) */
    TC3_CS3_VAL_0x03_gc = (0x03), /* clk_IO/64 (from prescaler) */
    TC3_CS3_VAL_0x04_gc = (0x04), /* clk_IO/256 (from prescaler) */
    TC3_CS3_VAL_0x05_gc = (0x05), /* clk_IO/1024 (from prescaler) */
    TC3_CS3_VAL_0x06_gc = (0x06), /* External clock source on Tn pin, clock on falling edge */
    TC3_CS3_VAL_0x07_gc = (0x07), /* External clock source on Tn pin, clock on rising edge */
} TC3_CS3_t;

/* Force Output Compare for Channel A */
typedef enum TC3_FOC3A_enum
{
    TC3_FOC3A_CLEAR_gc = (0x00), /* Force Output Compare for Channel A - CLEAR */
    TC3_FOC3A_SET_gc   = (0x80), /* Force Output Compare for Channel A - SET */
} TC3_FOC3A_t;

/* Force Output Compare for Channel B */
typedef enum TC3_FOC3B_enum
{
    TC3_FOC3B_CLEAR_gc = (0x00), /* Force Output Compare for Channel B - CLEAR */
    TC3_FOC3B_SET_gc   = (0x40), /* Force Output Compare for Channel B - SET */
} TC3_FOC3B_t;

/* Force Output Compare for Channel C */
typedef enum TC3_FOC3C_enum
{
    TC3_FOC3C_CLEAR_gc = (0x00), /* Force Output Compare for Channel C - CLEAR */
    TC3_FOC3C_SET_gc   = (0x20), /* Force Output Compare for Channel C - SET */
} TC3_FOC3C_t;

/* Reserved */
#define TC3_TCCR3C_Res_gc(x) (x & 0x1F)

/* Timer/Counter3 Input Capture Interrupt Enable */
typedef enum TC3_ICIE3_enum
{
    TC3_ICIE3_CLEAR_gc = (0x00), /* Timer/Counter3 Input Capture Interrupt Enable - CLEAR */
    TC3_ICIE3_SET_gc   = (0x20), /* Timer/Counter3 Input Capture Interrupt Enable - SET */
} TC3_ICIE3_t;

/* Timer/Counter3 Output Compare C Match Interrupt Enable */
typedef enum TC3_OCIE3C_enum
{
    TC3_OCIE3C_CLEAR_gc = (0x00), /* Timer/Counter3 Output Compare C Match Interrupt Enable - CLEAR */
    TC3_OCIE3C_SET_gc   = (0x08), /* Timer/Counter3 Output Compare C Match Interrupt Enable - SET */
} TC3_OCIE3C_t;

/* Timer/Counter3 Output Compare B Match Interrupt Enable */
typedef enum TC3_OCIE3B_enum
{
    TC3_OCIE3B_CLEAR_gc = (0x00), /* Timer/Counter3 Output Compare B Match Interrupt Enable - CLEAR */
    TC3_OCIE3B_SET_gc   = (0x04), /* Timer/Counter3 Output Compare B Match Interrupt Enable - SET */
} TC3_OCIE3B_t;

/* Timer/Counter3 Output Compare A Match Interrupt Enable */
typedef enum TC3_OCIE3A_enum
{
    TC3_OCIE3A_CLEAR_gc = (0x00), /* Timer/Counter3 Output Compare A Match Interrupt Enable - CLEAR */
    TC3_OCIE3A_SET_gc   = (0x02), /* Timer/Counter3 Output Compare A Match Interrupt Enable - SET */
} TC3_OCIE3A_t;

/* Timer/Counter3 Overflow Interrupt Enable */
typedef enum TC3_TOIE3_enum
{
    TC3_TOIE3_CLEAR_gc = (0x00), /* Timer/Counter3 Overflow Interrupt Enable - CLEAR */
    TC3_TOIE3_SET_gc   = (0x01), /* Timer/Counter3 Overflow Interrupt Enable - SET */
} TC3_TOIE3_t;

/* Timer/Counter3 Input Capture Flag */
typedef enum TC3_ICF3_enum
{
    TC3_ICF3_CLEAR_gc = (0x00), /* Timer/Counter3 Input Capture Flag - CLEAR */
    TC3_ICF3_SET_gc   = (0x20), /* Timer/Counter3 Input Capture Flag - SET */
} TC3_ICF3_t;

/* Timer/Counter3 Output Compare C Match Flag */
typedef enum TC3_OCF3C_enum
{
    TC3_OCF3C_CLEAR_gc = (0x00), /* Timer/Counter3 Output Compare C Match Flag - CLEAR */
    TC3_OCF3C_SET_gc   = (0x08), /* Timer/Counter3 Output Compare C Match Flag - SET */
} TC3_OCF3C_t;

/* Timer/Counter3 Output Compare B Match Flag */
typedef enum TC3_OCF3B_enum
{
    TC3_OCF3B_CLEAR_gc = (0x00), /* Timer/Counter3 Output Compare B Match Flag - CLEAR */
    TC3_OCF3B_SET_gc   = (0x04), /* Timer/Counter3 Output Compare B Match Flag - SET */
} TC3_OCF3B_t;

/* Timer/Counter3 Output Compare A Match Flag */
typedef enum TC3_OCF3A_enum
{
    TC3_OCF3A_CLEAR_gc = (0x00), /* Timer/Counter3 Output Compare A Match Flag - CLEAR */
    TC3_OCF3A_SET_gc   = (0x02), /* Timer/Counter3 Output Compare A Match Flag - SET */
} TC3_OCF3A_t;

/* Timer/Counter3 Overflow Flag */
typedef enum TC3_TOV3_enum
{
    TC3_TOV3_CLEAR_gc = (0x00), /* Timer/Counter3 Overflow Flag - CLEAR */
    TC3_TOV3_SET_gc   = (0x01), /* Timer/Counter3 Overflow Flag - SET */
} TC3_TOV3_t;

/* Compare Output Mode for Channel A */
typedef enum TC1_COM1A_enum
{
    TC1_COM1A_VAL_0_gc = (0x00<<6), /* Normal port operation, OCnA/OCnB/OCnC disconnected. */
    TC1_COM1A_VAL_1_gc = (0x01<<6), /* Toggle OCnA/OCnB/OCnC on Compare Match. */
    TC1_COM1A_VAL_2_gc = (0x02<<6), /* Clear OCnA/OCnB/OCnC on Compare Match (set output to low level). */
    TC1_COM1A_VAL_3_gc = (0x03<<6), /* Set OCnA/OCnB/OCnC on Compare Match (set output to high level). */
} TC1_COM1A_t;

/* Compare Output Mode for Channel B */
typedef enum TC1_COM1B_enum
{
    TC1_COM1B_VAL_0_gc = (0x00<<4), /* Normal port operation, OCnA/OCnB/OCnC disconnected. */
    TC1_COM1B_VAL_1_gc = (0x01<<4), /* Toggle OCnA/OCnB/OCnC on Compare Match. */
    TC1_COM1B_VAL_2_gc = (0x02<<4), /* Clear OCnA/OCnB/OCnC on Compare Match (set output to low level). */
    TC1_COM1B_VAL_3_gc = (0x03<<4), /* Set OCnA/OCnB/OCnC on Compare Match (set output to high level). */
} TC1_COM1B_t;

/* Compare Output Mode for Channel C */
typedef enum TC1_COM1C_enum
{
    TC1_COM1C_VAL_0_gc = (0x00<<2), /* Normal port operation, OCnA/OCnB/OCnC disconnected. */
    TC1_COM1C_VAL_1_gc = (0x01<<2), /* Toggle OCnA/OCnB/OCnC on Compare Match. */
    TC1_COM1C_VAL_2_gc = (0x02<<2), /* Clear OCnA/OCnB/OCnC on Compare Match (set output to low level). */
    TC1_COM1C_VAL_3_gc = (0x03<<2), /* Set OCnA/OCnB/OCnC on Compare Match (set output to high level). */
} TC1_COM1C_t;

/* Waveform Generation Mode */
typedef enum TC1_WGM1_enum
{
    TC1_WGM1_VAL_0x0_gc = (0x00), /* Normal mode of operation */
    TC1_WGM1_VAL_0x1_gc = (0x01), /* PWM, phase correct, 8-bit */
    TC1_WGM1_VAL_0x2_gc = (0x02), /* PWM, phase correct, 9-bit */
    TC1_WGM1_VAL_0x3_gc = (0x03), /* PWM, phase correct, 10-bit */
    TC1_WGM1_VAL_0x4_gc = (0x04), /* CTC, TOP = OCRnA */
    TC1_WGM1_VAL_0x5_gc = (0x05), /* Fast PWM, 8-bit */
    TC1_WGM1_VAL_0x6_gc = (0x06), /* Fast PWM, 9-bit */
    TC1_WGM1_VAL_0x7_gc = (0x07), /* Fast PWM, 10-bit */
    TC1_WGM1_VAL_0x8_gc = (0x08), /* PWM, Phase and frequency correct, TOP = ICRn */
    TC1_WGM1_VAL_0x9_gc = (0x09), /* PWM, Phase and frequency correct, TOP = OCRnA */
    TC1_WGM1_VAL_0xA_gc = (0x0A), /* PWM, Phase correct, TOP = ICRn */
    TC1_WGM1_VAL_0xB_gc = (0x0B), /* PWM, Phase correct, TOP = OCRnA */
    TC1_WGM1_VAL_0xC_gc = (0x0C), /* CTC, TOP = OCRnA */
    TC1_WGM1_VAL_0xD_gc = (0x0D), /* Reserved */
    TC1_WGM1_VAL_0xE_gc = (0x0E), /* Fast PWM, TOP = ICRn */
    TC1_WGM1_VAL_0xF_gc = (0x0F), /* Fast PWM, TOP = OCRnA */
} TC1_WGM1_t;

/* Input Capture 1 Noise Canceller */
typedef enum TC1_ICNC1_enum
{
    TC1_ICNC1_CLEAR_gc = (0x00), /* Input Capture 1 Noise Canceller - CLEAR */
    TC1_ICNC1_SET_gc   = (0x80), /* Input Capture 1 Noise Canceller - SET */
} TC1_ICNC1_t;

/* Input Capture 1 Edge Select */
typedef enum TC1_ICES1_enum
{
    TC1_ICES1_CLEAR_gc = (0x00), /* Input Capture 1 Edge Select - CLEAR */
    TC1_ICES1_SET_gc   = (0x40), /* Input Capture 1 Edge Select - SET */
} TC1_ICES1_t;

/* Reserved Bit */
typedef enum TC1_Res_enum
{
    TC1_Res_CLEAR_gc = (0x00), /* Reserved Bit - CLEAR */
    TC1_Res_SET_gc   = (0x20), /* Reserved Bit - SET */
} TC1_Res_t;

/* Waveform Generation Mode */
typedef enum TC1_WGM1_enum
{
    TC1_WGM1_VAL_0x0_gc = (0x00<<3), /* Normal mode of operation */
    TC1_WGM1_VAL_0x1_gc = (0x01<<3), /* PWM, phase correct, 8-bit */
    TC1_WGM1_VAL_0x2_gc = (0x02<<3), /* PWM, phase correct, 9-bit */
    TC1_WGM1_VAL_0x3_gc = (0x03<<3), /* PWM, phase correct, 10-bit */
    TC1_WGM1_VAL_0x4_gc = (0x04<<3), /* CTC, TOP = OCRnA */
    TC1_WGM1_VAL_0x5_gc = (0x05<<3), /* Fast PWM, 8-bit */
    TC1_WGM1_VAL_0x6_gc = (0x06<<3), /* Fast PWM, 9-bit */
    TC1_WGM1_VAL_0x7_gc = (0x07<<3), /* Fast PWM, 10-bit */
    TC1_WGM1_VAL_0x8_gc = (0x08<<3), /* PWM, Phase and frequency correct, TOP = ICRn */
    TC1_WGM1_VAL_0x9_gc = (0x09<<3), /* PWM, Phase and frequency correct, TOP = OCRnA */
    TC1_WGM1_VAL_0xA_gc = (0x0A<<3), /* PWM, Phase correct, TOP = ICRn */
    TC1_WGM1_VAL_0xB_gc = (0x0B<<3), /* PWM, Phase correct, TOP = OCRnA */
    TC1_WGM1_VAL_0xC_gc = (0x0C<<3), /* CTC, TOP = OCRnA */
    TC1_WGM1_VAL_0xD_gc = (0x0D<<3), /* Reserved */
    TC1_WGM1_VAL_0xE_gc = (0x0E<<3), /* Fast PWM, TOP = ICRn */
    TC1_WGM1_VAL_0xF_gc = (0x0F<<3), /* Fast PWM, TOP = OCRnA */
} TC1_WGM1_t;

/* Clock Select */
typedef enum TC1_CS1_enum
{
    TC1_CS1_VAL_0x00_gc = (0x00), /* No clock source (Timer/Counter stopped) */
    TC1_CS1_VAL_0x01_gc = (0x01), /* clk_IO/1 (no prescaling) */
    TC1_CS1_VAL_0x02_gc = (0x02), /* clk_IO/8 (from prescaler) */
    TC1_CS1_VAL_0x03_gc = (0x03), /* clk_IO/64 (from prescaler) */
    TC1_CS1_VAL_0x04_gc = (0x04), /* clk_IO/256 (from prescaler) */
    TC1_CS1_VAL_0x05_gc = (0x05), /* clk_IO/1024 (from prescaler) */
    TC1_CS1_VAL_0x06_gc = (0x06), /* External clock source on Tn pin, clock on falling edge */
    TC1_CS1_VAL_0x07_gc = (0x07), /* External clock source on Tn pin, clock on rising edge */
} TC1_CS1_t;

/* Force Output Compare for Channel A */
typedef enum TC1_FOC1A_enum
{
    TC1_FOC1A_CLEAR_gc = (0x00), /* Force Output Compare for Channel A - CLEAR */
    TC1_FOC1A_SET_gc   = (0x80), /* Force Output Compare for Channel A - SET */
} TC1_FOC1A_t;

/* Force Output Compare for Channel B */
typedef enum TC1_FOC1B_enum
{
    TC1_FOC1B_CLEAR_gc = (0x00), /* Force Output Compare for Channel B - CLEAR */
    TC1_FOC1B_SET_gc   = (0x40), /* Force Output Compare for Channel B - SET */
} TC1_FOC1B_t;

/* Force Output Compare for Channel C */
typedef enum TC1_FOC1C_enum
{
    TC1_FOC1C_CLEAR_gc = (0x00), /* Force Output Compare for Channel C - CLEAR */
    TC1_FOC1C_SET_gc   = (0x20), /* Force Output Compare for Channel C - SET */
} TC1_FOC1C_t;

/* Reserved */
#define TC1_TCCR1C_Res_gc(x) (x & 0x1F)

/* Timer/Counter1 Input Capture Interrupt Enable */
typedef enum TC1_ICIE1_enum
{
    TC1_ICIE1_CLEAR_gc = (0x00), /* Timer/Counter1 Input Capture Interrupt Enable - CLEAR */
    TC1_ICIE1_SET_gc   = (0x20), /* Timer/Counter1 Input Capture Interrupt Enable - SET */
} TC1_ICIE1_t;

/* Timer/Counter1 Output Compare C Match Interrupt Enable */
typedef enum TC1_OCIE1C_enum
{
    TC1_OCIE1C_CLEAR_gc = (0x00), /* Timer/Counter1 Output Compare C Match Interrupt Enable - CLEAR */
    TC1_OCIE1C_SET_gc   = (0x08), /* Timer/Counter1 Output Compare C Match Interrupt Enable - SET */
} TC1_OCIE1C_t;

/* Timer/Counter1 Output Compare B Match Interrupt Enable */
typedef enum TC1_OCIE1B_enum
{
    TC1_OCIE1B_CLEAR_gc = (0x00), /* Timer/Counter1 Output Compare B Match Interrupt Enable - CLEAR */
    TC1_OCIE1B_SET_gc   = (0x04), /* Timer/Counter1 Output Compare B Match Interrupt Enable - SET */
} TC1_OCIE1B_t;

/* Timer/Counter1 Output Compare A Match Interrupt Enable */
typedef enum TC1_OCIE1A_enum
{
    TC1_OCIE1A_CLEAR_gc = (0x00), /* Timer/Counter1 Output Compare A Match Interrupt Enable - CLEAR */
    TC1_OCIE1A_SET_gc   = (0x02), /* Timer/Counter1 Output Compare A Match Interrupt Enable - SET */
} TC1_OCIE1A_t;

/* Timer/Counter1 Overflow Interrupt Enable */
typedef enum TC1_TOIE1_enum
{
    TC1_TOIE1_CLEAR_gc = (0x00), /* Timer/Counter1 Overflow Interrupt Enable - CLEAR */
    TC1_TOIE1_SET_gc   = (0x01), /* Timer/Counter1 Overflow Interrupt Enable - SET */
} TC1_TOIE1_t;

/* Timer/Counter1 Input Capture Flag */
typedef enum TC1_ICF1_enum
{
    TC1_ICF1_CLEAR_gc = (0x00), /* Timer/Counter1 Input Capture Flag - CLEAR */
    TC1_ICF1_SET_gc   = (0x20), /* Timer/Counter1 Input Capture Flag - SET */
} TC1_ICF1_t;

/* Timer/Counter1 Output Compare C Match Flag */
typedef enum TC1_OCF1C_enum
{
    TC1_OCF1C_CLEAR_gc = (0x00), /* Timer/Counter1 Output Compare C Match Flag - CLEAR */
    TC1_OCF1C_SET_gc   = (0x08), /* Timer/Counter1 Output Compare C Match Flag - SET */
} TC1_OCF1C_t;

/* Timer/Counter1 Output Compare B Match Flag */
typedef enum TC1_OCF1B_enum
{
    TC1_OCF1B_CLEAR_gc = (0x00), /* Timer/Counter1 Output Compare B Match Flag - CLEAR */
    TC1_OCF1B_SET_gc   = (0x04), /* Timer/Counter1 Output Compare B Match Flag - SET */
} TC1_OCF1B_t;

/* Timer/Counter1 Output Compare A Match Flag */
typedef enum TC1_OCF1A_enum
{
    TC1_OCF1A_CLEAR_gc = (0x00), /* Timer/Counter1 Output Compare A Match Flag - CLEAR */
    TC1_OCF1A_SET_gc   = (0x02), /* Timer/Counter1 Output Compare A Match Flag - SET */
} TC1_OCF1A_t;

/* Timer/Counter1 Overflow Flag */
typedef enum TC1_TOV1_enum
{
    TC1_TOV1_CLEAR_gc = (0x00), /* Timer/Counter1 Overflow Flag - CLEAR */
    TC1_TOV1_SET_gc   = (0x01), /* Timer/Counter1 Overflow Flag - SET */
} TC1_TOV1_t;

/*
--------------------------------------------------------------------------------
TRX24 - Low-Power 2.4 GHz Transceiver
--------------------------------------------------------------------------------
*/

typedef struct TRX24_struct
{
    register8_t rsv_0x00[190];  /* RESERVED REGISTER BLOCK */
    register8_t IRQ_MASK1;      /* Transceiver Interrupt Enable Register 1 */
    register8_t IRQ_STATUS1;    /* Transceiver Interrupt Status Register 1 */
    register8_t rsv_0xC0[76];   /* RESERVED REGISTER BLOCK */
    register8_t MAFCR0;         /* Multiple Address Filter Configuration Register 0 */
    register8_t MAFCR1;         /* Multiple Address Filter Configuration Register 1 */
    register8_t MAFSA0L;        /* Transceiver MAC Short Address Register for Frame Filter 0 (Low Byte) */
    register8_t MAFSA0H;        /* Transceiver MAC Short Address Register for Frame Filter 0 (High Byte) */
    register8_t MAFPA0L;        /* Transceiver Personal Area Network ID Register for Frame Filter 0 (Low Byte) */
    register8_t MAFPA0H;        /* Transceiver Personal Area Network ID Register for Frame Filter 0 (High Byte) */
    register8_t MAFSA1L;        /* Transceiver MAC Short Address Register for Frame Filter 1 (Low Byte) */
    register8_t MAFSA1H;        /* Transceiver MAC Short Address Register for Frame Filter 1 (High Byte) */
    register8_t MAFPA1L;        /* Transceiver Personal Area Network ID Register for Frame Filter 1 (Low Byte) */
    register8_t MAFPA1H;        /* Transceiver Personal Area Network ID Register for Frame Filter 1 (High Byte) */
    register8_t MAFSA2L;        /* Transceiver MAC Short Address Register for Frame Filter 2 (Low Byte) */
    register8_t MAFSA2H;        /* Transceiver MAC Short Address Register for Frame Filter 2 (High Byte) */
    register8_t MAFPA2L;        /* Transceiver Personal Area Network ID Register for Frame Filter 2 (Low Byte) */
    register8_t MAFPA2H;        /* Transceiver Personal Area Network ID Register for Frame Filter 2 (High Byte) */
    register8_t MAFSA3L;        /* Transceiver MAC Short Address Register for Frame Filter 3 (Low Byte) */
    register8_t MAFSA3H;        /* Transceiver MAC Short Address Register for Frame Filter 3 (High Byte) */
    register8_t MAFPA3L;        /* Transceiver Personal Area Network ID Register for Frame Filter 3 (Low Byte) */
    register8_t MAFPA3H;        /* Transceiver Personal Area Network ID Register for Frame Filter 3 (High Byte) */
    register8_t rsv_0x11E[26];  /* RESERVED REGISTER BLOCK */
    register8_t PARCR;          /* Power Amplifier Ramp up/down Control Register */
    register8_t rsv_0x139[3];   /* RESERVED REGISTER BLOCK */
    register8_t AES_CTRL;       /* AES Control Register */
    register8_t AES_STATUS;     /* AES Status Register */
    register8_t AES_STATE;      /* AES Plain and Cipher Text Buffer Register */
    register8_t AES_KEY;        /* AES Encryption and Decryption Key Buffer Register */
    register8_t rsv_0x140;      /* RESERVED REGISTER */
    register8_t TRX_STATUS;     /* Transceiver Status Register */
    register8_t TRX_STATE;      /* Transceiver State Control Register */
    register8_t TRX_CTRL_0;     /* Reserved */
    register8_t TRX_CTRL_1;     /* Transceiver Control Register 1 */
    register8_t PHY_TX_PWR;     /* Transceiver Transmit Power Control Register */
    register8_t PHY_RSSI;       /* Receiver Signal Strength Indicator Register */
    register8_t PHY_ED_LEVEL;   /* Transceiver Energy Detection Level Register */
    register8_t PHY_CC_CCA;     /* Transceiver Clear Channel Assessment (CCA) Control Register */
    register8_t CCA_THRES;      /* Transceiver CCA Threshold Setting Register */
    register8_t RX_CTRL;        /* Transceiver Receive Control Register */
    register8_t SFD_VALUE;      /* Start of Frame Delimiter Value Register */
    register8_t TRX_CTRL_2;     /* Transceiver Control Register 2 */
    register8_t ANT_DIV;        /* Antenna Diversity Control Register */
    register8_t IRQ_MASK;       /* Transceiver Interrupt Enable Register */
    register8_t IRQ_STATUS;     /* Transceiver Interrupt Status Register */
    register8_t VREG_CTRL;      /* Voltage Regulator Control and Status Register */
    register8_t BATMON;         /* Battery Monitor Control and Status Register */
    register8_t XOSC_CTRL;      /* Crystal Oscillator Control Register */
    register8_t CC_CTRL_0;      /* Channel Control Register 0 */
    register8_t CC_CTRL_1;      /* Channel Control Register 1 */
    register8_t RX_SYN;         /* Transceiver Receiver Sensitivity Control Register */
    register8_t TRX_RPC;        /* Transceiver Reduced Power Consumption Control */
    register8_t XAH_CTRL_1;     /* Transceiver Acknowledgment Frame Control Register 1 */
    register8_t FTN_CTRL;       /* Transceiver Filter Tuning Control Register */
    register8_t rsv_0x159;      /* RESERVED REGISTER */
    register8_t PLL_CF;         /* Transceiver Center Frequency Calibration Control Register */
    register8_t PLL_DCU;        /* Transceiver Delay Cell Calibration Control Register */
    register8_t PART_NUM;       /* Device Identification Register (Part Number) */
    register8_t VERSION_NUM;    /* Device Identification Register (Version Number) */
    register8_t MAN_ID_0;       /* Device Identification Register (Manufacture ID Low Byte) */
    register8_t MAN_ID_1;       /* Device Identification Register (Manufacture ID High Byte) */
    register8_t SHORT_ADDR_0;   /* Transceiver MAC Short Address Register (Low Byte) */
    register8_t SHORT_ADDR_1;   /* Transceiver MAC Short Address Register (High Byte) */
    register8_t PAN_ID_0;       /* Transceiver Personal Area Network ID Register (Low Byte) */
    register8_t PAN_ID_1;       /* Transceiver Personal Area Network ID Register (High Byte) */
    register8_t IEEE_ADDR_0;    /* Transceiver MAC IEEE Address Register 0 */
    register8_t IEEE_ADDR_1;    /* Transceiver MAC IEEE Address Register 1 */
    register8_t IEEE_ADDR_2;    /* Transceiver MAC IEEE Address Register 2 */
    register8_t IEEE_ADDR_3;    /* Transceiver MAC IEEE Address Register 3 */
    register8_t IEEE_ADDR_4;    /* Transceiver MAC IEEE Address Register 4 */
    register8_t IEEE_ADDR_5;    /* Transceiver MAC IEEE Address Register 5 */
    register8_t IEEE_ADDR_6;    /* Transceiver MAC IEEE Address Register 6 */
    register8_t IEEE_ADDR_7;    /* Transceiver MAC IEEE Address Register 7 */
    register8_t XAH_CTRL_0;     /* Transceiver Extended Operating Mode Control Register */
    register8_t CSMA_SEED_0;    /* Transceiver CSMA-CA Random Number Generator Seed Register */
    register8_t CSMA_SEED_1;    /* Transceiver Acknowledgment Frame Control Register 2 */
    register8_t CSMA_BE;        /* Transceiver CSMA-CA Back-off Exponent Control Register */
    register8_t rsv_0x170[6];   /* RESERVED REGISTER BLOCK */
    register8_t TST_CTRL_DIGI;  /* Transceiver Digital Test Control Register */
    register8_t rsv_0x177[4];   /* RESERVED REGISTER BLOCK */
    register8_t TST_RX_LENGTH;  /* Transceiver Received Frame Length Register */
    register8_t rsv_0x17C[4];   /* RESERVED REGISTER BLOCK */
    register8_t TRXFBST;        /* Start of frame buffer */
    register8_t rsv_0x181[126]; /* RESERVED REGISTER BLOCK */
    register8_t TRXFBEND;       /* End of frame buffer */
} TRX24_t;


/* ext. PA Ramp Down Lead Time */
typedef enum TRX24_PALTD_enum
{
    TRX24_PALTD_PALTD_MINUS_3US_gc = (0x00<<5), /* -3us */
    TRX24_PALTD_PALTD_MINUS_2US_gc = (0x01<<5), /* -2us */
    TRX24_PALTD_PALTD_MINUS_1US_gc = (0x02<<5), /* -1us */
    TRX24_PALTD_PALTD_0US_gc       = (0x03<<5), /* 0us */
    TRX24_PALTD_PALTD_1US_gc       = (0x04<<5), /* 1us */
    TRX24_PALTD_PALTD_2US_gc       = (0x05<<5), /* 2us */
    TRX24_PALTD_PALTD_3US_gc       = (0x06<<5), /* 3us */
    TRX24_PALTD_PALTD_4US_gc       = (0x07<<5), /* 4us */
} TRX24_PALTD_t;

/* ext. PA Ramp Up Lead Time */
typedef enum TRX24_PALTU_enum
{
    TRX24_PALTU_PALTU_MINUS_3US_gc = (0x00<<2), /* -3us */
    TRX24_PALTU_PALTU_MINUS_2US_gc = (0x01<<2), /* -2us */
    TRX24_PALTU_PALTU_MINUS_1US_gc = (0x02<<2), /* -1us */
    TRX24_PALTU_PALTU_0US_gc       = (0x03<<2), /* 0us */
    TRX24_PALTU_PALTU_1US_gc       = (0x04<<2), /* 1us */
    TRX24_PALTU_PALTU_2US_gc       = (0x05<<2), /* 2us */
    TRX24_PALTU_PALTU_3US_gc       = (0x06<<2), /* 3us */
    TRX24_PALTU_PALTU_4US_gc       = (0x07<<2), /* 4us */
} TRX24_PALTU_t;

/* Power Amplifier Ramp Down Frequency Inversion */
typedef enum TRX24_PARDFI_enum
{
    TRX24_PARDFI_CLEAR_gc = (0x00), /* Power Amplifier Ramp Down Frequency Inversion - CLEAR */
    TRX24_PARDFI_SET_gc   = (0x02), /* Power Amplifier Ramp Down Frequency Inversion - SET */
} TRX24_PARDFI_t;

/* Power Amplifier Ramp Up Frequency Inversion */
typedef enum TRX24_PARUFI_enum
{
    TRX24_PARUFI_CLEAR_gc = (0x00), /* Power Amplifier Ramp Up Frequency Inversion - CLEAR */
    TRX24_PARUFI_SET_gc   = (0x01), /* Power Amplifier Ramp Up Frequency Inversion - SET */
} TRX24_PARUFI_t;

/* Reserved Bit */
#define TRX24_MAFCR0_Res_gc(x) ((x<<4) & 0xF0)

/* Multiple Address Filter 3 Enable */
typedef enum TRX24_MAF3EN_enum
{
    TRX24_MAF3EN_CLEAR_gc = (0x00), /* Multiple Address Filter 3 Enable - CLEAR */
    TRX24_MAF3EN_SET_gc   = (0x08), /* Multiple Address Filter 3 Enable - SET */
} TRX24_MAF3EN_t;

/* Multiple Address Filter 2 Enable */
typedef enum TRX24_MAF2EN_enum
{
    TRX24_MAF2EN_CLEAR_gc = (0x00), /* Multiple Address Filter 2 Enable - CLEAR */
    TRX24_MAF2EN_SET_gc   = (0x04), /* Multiple Address Filter 2 Enable - SET */
} TRX24_MAF2EN_t;

/* Multiple Address Filter 1 Enable */
typedef enum TRX24_MAF1EN_enum
{
    TRX24_MAF1EN_CLEAR_gc = (0x00), /* Multiple Address Filter 1 Enable - CLEAR */
    TRX24_MAF1EN_SET_gc   = (0x02), /* Multiple Address Filter 1 Enable - SET */
} TRX24_MAF1EN_t;

/* Multiple Address Filter 0 Enable */
typedef enum TRX24_MAF0EN_enum
{
    TRX24_MAF0EN_CLEAR_gc = (0x00), /* Multiple Address Filter 0 Enable - CLEAR */
    TRX24_MAF0EN_SET_gc   = (0x01), /* Multiple Address Filter 0 Enable - SET */
} TRX24_MAF0EN_t;

/* Set Data Pending bit for address filter 3. */
typedef enum TRX24_AACK_3_SET_PD_enum
{
    TRX24_AACK_3_SET_PD_CLEAR_gc = (0x00), /* Set Data Pending bit for address filter 3. - CLEAR */
    TRX24_AACK_3_SET_PD_SET_gc   = (0x80), /* Set Data Pending bit for address filter 3. - SET */
} TRX24_AACK_3_SET_PD_t;

/* Enable PAN Coordinator mode for address filter 3. */
typedef enum TRX24_AACK_3_I_AM_COORD_enum
{
    TRX24_AACK_3_I_AM_COORD_CLEAR_gc = (0x00), /* Enable PAN Coordinator mode for address filter 3. - CLEAR */
    TRX24_AACK_3_I_AM_COORD_SET_gc   = (0x40), /* Enable PAN Coordinator mode for address filter 3. - SET */
} TRX24_AACK_3_I_AM_COORD_t;

/* Set Data Pending bit for address filter 2. */
typedef enum TRX24_AACK_2_SET_PD_enum
{
    TRX24_AACK_2_SET_PD_CLEAR_gc = (0x00), /* Set Data Pending bit for address filter 2. - CLEAR */
    TRX24_AACK_2_SET_PD_SET_gc   = (0x20), /* Set Data Pending bit for address filter 2. - SET */
} TRX24_AACK_2_SET_PD_t;

/* Enable PAN Coordinator mode for address filter 2. */
typedef enum TRX24_AACK_2_I_AM_COORD_enum
{
    TRX24_AACK_2_I_AM_COORD_CLEAR_gc = (0x00), /* Enable PAN Coordinator mode for address filter 2. - CLEAR */
    TRX24_AACK_2_I_AM_COORD_SET_gc   = (0x10), /* Enable PAN Coordinator mode for address filter 2. - SET */
} TRX24_AACK_2_I_AM_COORD_t;

/* Set Data Pending bit for address filter 1. */
typedef enum TRX24_AACK_1_SET_PD_enum
{
    TRX24_AACK_1_SET_PD_CLEAR_gc = (0x00), /* Set Data Pending bit for address filter 1. - CLEAR */
    TRX24_AACK_1_SET_PD_SET_gc   = (0x08), /* Set Data Pending bit for address filter 1. - SET */
} TRX24_AACK_1_SET_PD_t;

/* Enable PAN Coordinator mode for address filter 1. */
typedef enum TRX24_AACK_1_I_AM_COORD_enum
{
    TRX24_AACK_1_I_AM_COORD_CLEAR_gc = (0x00), /* Enable PAN Coordinator mode for address filter 1. - CLEAR */
    TRX24_AACK_1_I_AM_COORD_SET_gc   = (0x04), /* Enable PAN Coordinator mode for address filter 1. - SET */
} TRX24_AACK_1_I_AM_COORD_t;

/* Set Data Pending bit for address filter 0. */
typedef enum TRX24_AACK_0_SET_PD_enum
{
    TRX24_AACK_0_SET_PD_CLEAR_gc = (0x00), /* Set Data Pending bit for address filter 0. - CLEAR */
    TRX24_AACK_0_SET_PD_SET_gc   = (0x02), /* Set Data Pending bit for address filter 0. - SET */
} TRX24_AACK_0_SET_PD_t;

/* Enable PAN Coordinator mode for address filter 0. */
typedef enum TRX24_AACK_0_I_AM_COORD_enum
{
    TRX24_AACK_0_I_AM_COORD_CLEAR_gc = (0x00), /* Enable PAN Coordinator mode for address filter 0. - CLEAR */
    TRX24_AACK_0_I_AM_COORD_SET_gc   = (0x01), /* Enable PAN Coordinator mode for address filter 0. - SET */
} TRX24_AACK_0_I_AM_COORD_t;

/* Request AES Operation. */
typedef enum TRX24_AES_REQUEST_enum
{
    TRX24_AES_REQUEST_CLEAR_gc = (0x00), /* Request AES Operation. - CLEAR */
    TRX24_AES_REQUEST_SET_gc   = (0x80), /* Request AES Operation. - SET */
} TRX24_AES_REQUEST_t;

/* Set AES Operation Mode */
typedef enum TRX24_AES_MODE_enum
{
    TRX24_AES_MODE_AES_MODE_ECB_gc = (0x00<<5), /* AES Mode is ECB (Electronic Code Book). */
    TRX24_AES_MODE_AES_MODE_CBC_gc = (0x01<<5), /* AES Mode is CBC (Cipher Block Chaining). */
} TRX24_AES_MODE_t;

/* Set AES Operation Direction */
typedef enum TRX24_AES_DIR_enum
{
    TRX24_AES_DIR_AES_DIR_ENC_gc = (0x00<<3), /* AES operation is encryption. */
    TRX24_AES_DIR_AES_DIR_DEC_gc = (0x01<<3), /* AES operation is decryption. */
} TRX24_AES_DIR_t;

/* AES Interrupt Enable */
typedef enum TRX24_AES_IM_enum
{
    TRX24_AES_IM_CLEAR_gc = (0x00), /* AES Interrupt Enable - CLEAR */
    TRX24_AES_IM_SET_gc   = (0x04), /* AES Interrupt Enable - SET */
} TRX24_AES_IM_t;

/* AES Operation Finished with Error */
typedef enum TRX24_AES_ER_enum
{
    TRX24_AES_ER_CLEAR_gc = (0x00), /* AES Operation Finished with Error - CLEAR */
    TRX24_AES_ER_SET_gc   = (0x80), /* AES Operation Finished with Error - SET */
} TRX24_AES_ER_t;

/* Reserved */
#define TRX24_AES_STATUS_Res_gc(x) ((x<<1) & 0x7E)

/* AES Operation Finished with Success */
typedef enum TRX24_AES_DONE_enum
{
    TRX24_AES_DONE_CLEAR_gc = (0x00), /* AES Operation Finished with Success - CLEAR */
    TRX24_AES_DONE_SET_gc   = (0x01), /* AES Operation Finished with Success - SET */
} TRX24_AES_DONE_t;

/* CCA Algorithm Status */
typedef enum TRX24_CCA_DONE_enum
{
    TRX24_CCA_DONE_CCA_NOT_FIN_gc = (0x00<<7), /* CCA calculation not finished */
    TRX24_CCA_DONE_CCA_FIN_gc     = (0x01<<7), /* CCA calculation finished */
} TRX24_CCA_DONE_t;

/* CCA Status Result */
typedef enum TRX24_CCA_STATUS_enum
{
    TRX24_CCA_STATUS_CCA_BUSY_gc = (0x00<<6), /* Channel indicated as busy. */
    TRX24_CCA_STATUS_CCA_IDLE_gc = (0x01<<6), /* Channel indicated as idle. */
} TRX24_CCA_STATUS_t;

/* Test mode status */
typedef enum TRX24_TST_STATUS_enum
{
    TRX24_TST_STATUS_TST_DISABLED_gc = (0x00<<5), /* Test mode is disabled. */
    TRX24_TST_STATUS_TST_ENABLED_gc  = (0x01<<5), /* Test mode is active. */
} TRX24_TST_STATUS_t;

/* Transceiver Main Status */
typedef enum TRX24_TRX_STATUS_enum
{
    TRX24_TRX_STATUS_P_ON_gc                         = (0x00), /* P_ON */
    TRX24_TRX_STATUS_BUSY_RX_gc                      = (0x01), /* BUSY_RX */
    TRX24_TRX_STATUS_BUSY_TX_gc                      = (0x02), /* BUSY_TX */
    TRX24_TRX_STATUS_RX_ON_gc                        = (0x06), /* RX_ON */
    TRX24_TRX_STATUS_TRX_OFF_gc                      = (0x08), /* TRX_OFF */
    TRX24_TRX_STATUS_PLL_ON_gc                       = (0x09), /* PLL_ON */
    TRX24_TRX_STATUS_SLEEP_gc                        = (0x0F), /* SLEEP */
    TRX24_TRX_STATUS_BUSY_RX_AACK_gc                 = (0x11), /* BUSY_RX_AACK */
    TRX24_TRX_STATUS_BUSY_TX_ARET_gc                 = (0x12), /* BUSY_TX_ARET */
    TRX24_TRX_STATUS_RX_AACK_ON_gc                   = (0x16), /* RX_AACK_ON */
    TRX24_TRX_STATUS_TX_ARET_ON_gc                   = (0x19), /* TX_ARET_ON */
    TRX24_TRX_STATUS_STATE_TRANSITION_IN_PROGRESS_gc = (0x1F), /* STATE_TRANSITION_IN_PROGRESS */
} TRX24_TRX_STATUS_t;

/* Transaction Status */
typedef enum TRX24_TRAC_STATUS_enum
{
    TRX24_TRAC_STATUS_TRAC_SUCCESS_gc                = (0x00<<5), /* SUCCESS (RX_AACK, TX_ARET) */
    TRX24_TRAC_STATUS_TRAC_SUCCESS_DATA_PENDING_gc   = (0x01<<5), /* SUCCESS_DATA_PENDING (TX_ARET) */
    TRX24_TRAC_STATUS_TRAC_SUCCESS_WAIT_FOR_ACK_gc   = (0x02<<5), /* SUCCESS_WAIT_FOR_ACK (RX_AACK) */
    TRX24_TRAC_STATUS_TRAC_CHANNEL_ACCESS_FAILURE_gc = (0x03<<5), /* CHANNEL_ACCESS_FAILURE (TX_ARET) */
    TRX24_TRAC_STATUS_TRAC_NO_ACK_gc                 = (0x05<<5), /* NO_ACK (TX_ARET) */
    TRX24_TRAC_STATUS_TRAC_INVALID_gc                = (0x07<<5), /* INVALID (RX_AACK, TX_ARET) */
} TRX24_TRAC_STATUS_t;

/* State Control Command */
typedef enum TRX24_TRX_CMD_enum
{
    TRX24_TRX_CMD_CMD_NOP_gc           = (0x00), /* NOP */
    TRX24_TRX_CMD_CMD_TX_START_gc      = (0x02), /* TX_START */
    TRX24_TRX_CMD_CMD_FORCE_TRX_OFF_gc = (0x03), /* FORCE_TRX_OFF */
    TRX24_TRX_CMD_CMD_FORCE_PLL_ON_gc  = (0x04), /* FORCE_PLL_ON */
    TRX24_TRX_CMD_CMD_RX_ON_gc         = (0x06), /* RX_ON */
    TRX24_TRX_CMD_CMD_TRX_OFF_gc       = (0x08), /* TRX_OFF */
    TRX24_TRX_CMD_CMD_PLL_ON_gc        = (0x09), /* PLL_ON (TX_ON) */
    TRX24_TRX_CMD_CMD_RX_AACK_ON_gc    = (0x16), /* RX_AACK_ON */
    TRX24_TRX_CMD_CMD_TX_ARET_ON_gc    = (0x19), /* TX_ARET_ON */
} TRX24_TRX_CMD_t;

/* Reserved */
typedef enum TRX24_Res7_enum
{
    TRX24_Res7_CLEAR_gc = (0x00), /* Reserved - CLEAR */
    TRX24_Res7_SET_gc   = (0x80), /* Reserved - SET */
} TRX24_Res7_t;

/* Enable Phase Measurement Unit */
typedef enum TRX24_PMU_EN_enum
{
    TRX24_PMU_EN_CLEAR_gc = (0x00), /* Enable Phase Measurement Unit - CLEAR */
    TRX24_PMU_EN_SET_gc   = (0x40), /* Enable Phase Measurement Unit - SET */
} TRX24_PMU_EN_t;

/* Start of Phase Measurement Unit */
typedef enum TRX24_PMU_START_enum
{
    TRX24_PMU_START_CLEAR_gc = (0x00), /* Start of Phase Measurement Unit - CLEAR */
    TRX24_PMU_START_SET_gc   = (0x20), /* Start of Phase Measurement Unit - SET */
} TRX24_PMU_START_t;

/* PMU IF Inverse */
typedef enum TRX24_PMU_IF_INV_enum
{
    TRX24_PMU_IF_INV_CLEAR_gc = (0x00), /* PMU IF Inverse - CLEAR */
    TRX24_PMU_IF_INV_SET_gc   = (0x10), /* PMU IF Inverse - SET */
} TRX24_PMU_IF_INV_t;

/* Reserved */
#define TRX24_TRX_CTRL_0_Res_gc(x) (x & 0x0F)

/* External PA support enable */
typedef enum TRX24_PA_EXT_EN_enum
{
    TRX24_PA_EXT_EN_CLEAR_gc = (0x00), /* External PA support enable - CLEAR */
    TRX24_PA_EXT_EN_SET_gc   = (0x80), /* External PA support enable - SET */
} TRX24_PA_EXT_EN_t;

/* Connect Frame Start IRQ to TC1 */
typedef enum TRX24_IRQ_2_EXT_EN_enum
{
    TRX24_IRQ_2_EXT_EN_CLEAR_gc = (0x00), /* Connect Frame Start IRQ to TC1 - CLEAR */
    TRX24_IRQ_2_EXT_EN_SET_gc   = (0x40), /* Connect Frame Start IRQ to TC1 - SET */
} TRX24_IRQ_2_EXT_EN_t;

/* Enable Automatic CRC Calculation */
typedef enum TRX24_TX_AUTO_CRC_ON_enum
{
    TRX24_TX_AUTO_CRC_ON_CLEAR_gc = (0x00), /* Enable Automatic CRC Calculation - CLEAR */
    TRX24_TX_AUTO_CRC_ON_SET_gc   = (0x20), /* Enable Automatic CRC Calculation - SET */
} TRX24_TX_AUTO_CRC_ON_t;

/* Enable PLL TX filter */
typedef enum TRX24_PLL_TX_FLT_enum
{
    TRX24_PLL_TX_FLT_CLEAR_gc = (0x00), /* Enable PLL TX filter - CLEAR */
    TRX24_PLL_TX_FLT_SET_gc   = (0x10), /* Enable PLL TX filter - SET */
} TRX24_PLL_TX_FLT_t;

/* Reserved */
#define TRX24_TRX_CTRL_1_Res_gc(x) (x & 0x0F)

/* Reserved */
#define TRX24_PHY_TX_PWR_Res_gc(x) ((x<<4) & 0xF0)

/* Transmit Power Setting */
typedef enum TRX24_TX_PWR_enum
{
    TRX24_TX_PWR_VAL_0_gc  = (0x00), /* 3.5 dBm */
    TRX24_TX_PWR_VAL_1_gc  = (0x01), /* 3.3 dBm */
    TRX24_TX_PWR_VAL_2_gc  = (0x02), /* 2.8 dBm */
    TRX24_TX_PWR_VAL_3_gc  = (0x03), /* 2.3 dBm */
    TRX24_TX_PWR_VAL_4_gc  = (0x04), /* 1.8 dBm */
    TRX24_TX_PWR_VAL_5_gc  = (0x05), /* 1.2 dBm */
    TRX24_TX_PWR_VAL_6_gc  = (0x06), /* 0.5 dBm */
    TRX24_TX_PWR_VAL_7_gc  = (0x07), /* -0.5 dBm */
    TRX24_TX_PWR_VAL_8_gc  = (0x08), /* -1.5 dBm */
    TRX24_TX_PWR_VAL_9_gc  = (0x09), /* -2.5 dBm */
    TRX24_TX_PWR_VAL_10_gc = (0x0A), /* -3.5 dBm */
    TRX24_TX_PWR_VAL_11_gc = (0x0B), /* -4.5 dBm */
    TRX24_TX_PWR_VAL_12_gc = (0x0C), /* -6.5 dBm */
    TRX24_TX_PWR_VAL_13_gc = (0x0D), /* -8.5 dBm */
    TRX24_TX_PWR_VAL_14_gc = (0x0E), /* -11.5 dBm */
    TRX24_TX_PWR_VAL_15_gc = (0x0F), /* -16.5 dBm */
} TRX24_TX_PWR_t;

/* Received Frame CRC Status */
typedef enum TRX24_RX_CRC_VALID_enum
{
    TRX24_RX_CRC_VALID_CRC_INVALID_gc = (0x00<<7), /* CRC (FCS) not valid */
    TRX24_RX_CRC_VALID_CRC_VALID_gc   = (0x01<<7), /* CRC (FCS) valid */
} TRX24_RX_CRC_VALID_t;

/* Random Value */
#define TRX24_PHY_RSSI_RND_VALUE_gc(x) ((x<<5) & 0x60)

/* Receiver Signal Strength Indicator */
typedef enum TRX24_RSSI_enum
{
    TRX24_RSSI_RSSI_MIN_gc          = (0x00), /* Minimum RSSI value: P(RF) < -90 dBm */
    TRX24_RSSI_RSSI_MIN_PLUS_3dB_gc = (0x01), /* P(RF) = RSSI_BASE_VAL+3 · (RSSI-1) [dBm] */
    TRX24_RSSI_VAL_2_gc             = (0x02), /* ... */
    TRX24_RSSI_RSSI_MAX_gc          = (0x1C), /* Maximum RSSI value: P(RF) ≥ -10 dBm */
} TRX24_RSSI_t;

/* Energy Detection Level */
typedef enum TRX24_ED_LEVEL_enum
{
    TRX24_ED_LEVEL_ED_MIN_gc          = (0x00), /* Minimum result of last ED measurement */
    TRX24_ED_LEVEL_ED_MIN_PLUS_1dB_gc = (0x01), /* P(RF) = RSSI_BASE_VAL+ED [dBm] */
    TRX24_ED_LEVEL_VAL_0x02_gc        = (0x02), /* ... */
    TRX24_ED_LEVEL_ED_MAX_gc          = (0x54), /* Maximum result of last ED measurement */
    TRX24_ED_LEVEL_ED_RESET_gc        = (0xFF), /* Reset value */
} TRX24_ED_LEVEL_t;

/* Manual CCA Measurement Request */
typedef enum TRX24_CCA_REQUEST_enum
{
    TRX24_CCA_REQUEST_CLEAR_gc = (0x00), /* Manual CCA Measurement Request - CLEAR */
    TRX24_CCA_REQUEST_SET_gc   = (0x80), /* Manual CCA Measurement Request - SET */
} TRX24_CCA_REQUEST_t;

/* Select CCA Measurement Mode */
typedef enum TRX24_CCA_MODE_enum
{
    TRX24_CCA_MODE_CCA_CS_OR_ED_gc  = (0x00<<5), /* Mode 3a, Carrier sense OR energy above threshold */
    TRX24_CCA_MODE_CCA_ED_gc        = (0x01<<5), /* Mode 1, Energy above threshold */
    TRX24_CCA_MODE_CCA_CS_gc        = (0x02<<5), /* Mode 2, Carrier sense only */
    TRX24_CCA_MODE_CCA_CS_AND_ED_gc = (0x03<<5), /* Mode 3b, Carrier sense AND energy above threshold */
} TRX24_CCA_MODE_t;

/* RX/TX Channel Selection */
typedef enum TRX24_CHANNEL_enum
{
    TRX24_CHANNEL_F_2405MHZ_gc = (0x0B), /* 2405 MHz */
    TRX24_CHANNEL_F_2410MHZ_gc = (0x0C), /* 2410 MHz */
    TRX24_CHANNEL_F_2415MHZ_gc = (0x0D), /* 2415 MHz */
    TRX24_CHANNEL_F_2420MHZ_gc = (0x0E), /* 2420 MHz */
    TRX24_CHANNEL_F_2425MHZ_gc = (0x0F), /* 2425 MHz */
    TRX24_CHANNEL_F_2430MHZ_gc = (0x10), /* 2430 MHz */
    TRX24_CHANNEL_F_2435MHZ_gc = (0x11), /* 2435 MHz */
    TRX24_CHANNEL_F_2440MHZ_gc = (0x12), /* 2440 MHz */
    TRX24_CHANNEL_F_2445MHZ_gc = (0x13), /* 2445 MHz */
    TRX24_CHANNEL_F_2450MHZ_gc = (0x14), /* 2450 MHz */
    TRX24_CHANNEL_F_2455MHZ_gc = (0x15), /* 2455 MHz */
    TRX24_CHANNEL_F_2460MHZ_gc = (0x16), /* 2460 MHz */
    TRX24_CHANNEL_F_2465MHZ_gc = (0x17), /* 2465 MHz */
    TRX24_CHANNEL_F_2470MHZ_gc = (0x18), /* 2470 MHz */
    TRX24_CHANNEL_F_2475MHZ_gc = (0x19), /* 2475 MHz */
    TRX24_CHANNEL_F_2480MHZ_gc = (0x1A), /* 2480 MHz */
} TRX24_CHANNEL_t;

/* CS Threshold Level for CCA Measurement */
#define TRX24_CCA_THRES_CCA_CS_THRES_gc(x) ((x<<4) & 0xF0)

/* ED Threshold Level for CCA Measurement */
#define TRX24_CCA_THRES_CCA_ED_THRES_gc(x) (x & 0x0F)

/* Receiver Sensitivity Control */
typedef enum TRX24_PDT_THRES_enum
{
    TRX24_PDT_THRES_PDT_THRES_ANT_DIV_OFF_gc = (0x07), /* Reset value, to be used if Antenna Diversity algorithm is disabled */
    TRX24_PDT_THRES_PDT_THRES_ANT_DIV_ON_gc  = (0x03), /* Recommended correlator threshold for Antenna Diversity operation */
} TRX24_PDT_THRES_t;

/* Start of Frame Delimiter Value */
typedef enum TRX24_SFD_VALUE_enum
{
    TRX24_SFD_VALUE_IEEE_SFD_gc = (0xA7), /* IEEE 802.15.4 compliant value of the SFD */
} TRX24_SFD_VALUE_t;

/* RX Safe Mode */
typedef enum TRX24_RX_SAFE_MODE_enum
{
    TRX24_RX_SAFE_MODE_CLEAR_gc = (0x00), /* RX Safe Mode - CLEAR */
    TRX24_RX_SAFE_MODE_SET_gc   = (0x80), /* RX Safe Mode - SET */
} TRX24_RX_SAFE_MODE_t;

/* Reserved */
#define TRX24_TRX_CTRL_2_Res_gc(x) ((x<<2) & 0x7C)

/* Data Rate Selection */
typedef enum TRX24_OQPSK_DATA_RATE_enum
{
    TRX24_OQPSK_DATA_RATE_RATE_250KB_gc  = (0x00), /* 250 kb/s (IEEE 802.15.4 compliant) */
    TRX24_OQPSK_DATA_RATE_RATE_500KB_gc  = (0x01), /* 500 kb/s */
    TRX24_OQPSK_DATA_RATE_RATE_1000KB_gc = (0x02), /* 1000 kb/s */
    TRX24_OQPSK_DATA_RATE_RATE_2000KB_gc = (0x03), /* 2000 kb/s */
} TRX24_OQPSK_DATA_RATE_t;

/* Antenna Diversity Antenna Status */
typedef enum TRX24_ANT_SEL_enum
{
    TRX24_ANT_SEL_ANTENNA_0_gc = (0x00<<7), /* Antenna 0 */
    TRX24_ANT_SEL_ANTENNA_1_gc = (0x01<<7), /* Antenna 1 */
} TRX24_ANT_SEL_t;

/* Reserved */
#define TRX24_ANT_DIV_Res_gc(x) ((x<<4) & 0x70)

/* Enable Antenna Diversity */
typedef enum TRX24_ANT_DIV_EN_enum
{
    TRX24_ANT_DIV_EN_VAL_0_gc = (0x00<<3), /* Antenna Diversity algorithm disabled */
    TRX24_ANT_DIV_EN_VAL_1_gc = (0x01<<3), /* Antenna Diversity algorithm enabled */
} TRX24_ANT_DIV_EN_t;

/* Enable External Antenna Switch Control */
typedef enum TRX24_ANT_EXT_SW_EN_enum
{
    TRX24_ANT_EXT_SW_EN_ANT_DIV_EXT_SW_DIS_gc = (0x00<<2), /* Antenna Diversity RF switch control disabled */
    TRX24_ANT_EXT_SW_EN_ANT_DIV_EXT_SW_EN_gc  = (0x01<<2), /* Antenna Diversity RF switch control enabled */
} TRX24_ANT_EXT_SW_EN_t;

/* Static Antenna Diversity Switch Control */
typedef enum TRX24_ANT_CTRL_enum
{
    TRX24_ANT_CTRL_VAL_0_gc     = (0x00), /* Reserved */
    TRX24_ANT_CTRL_ANT_1_gc     = (0x01), /* Antenna 1: DIG1=H, DIG2=L */
    TRX24_ANT_CTRL_ANT_0_gc     = (0x02), /* Antenna 0: DIG1=L, DIG2=H */
    TRX24_ANT_CTRL_ANT_RESET_gc = (0x03), /* Default value for ANT_EXT_SW_EN=0; Mandatory setting for applications not using Antenna Diversity */
} TRX24_ANT_CTRL_t;

/* Awake Interrupt Enable */
typedef enum TRX24_AWAKE_EN_enum
{
    TRX24_AWAKE_EN_CLEAR_gc = (0x00), /* Awake Interrupt Enable - CLEAR */
    TRX24_AWAKE_EN_SET_gc   = (0x80), /* Awake Interrupt Enable - SET */
} TRX24_AWAKE_EN_t;

/* TX_END Interrupt Enable */
typedef enum TRX24_TX_END_EN_enum
{
    TRX24_TX_END_EN_CLEAR_gc = (0x00), /* TX_END Interrupt Enable - CLEAR */
    TRX24_TX_END_EN_SET_gc   = (0x40), /* TX_END Interrupt Enable - SET */
} TRX24_TX_END_EN_t;

/* Address Match Interrupt Enable */
typedef enum TRX24_AMI_EN_enum
{
    TRX24_AMI_EN_CLEAR_gc = (0x00), /* Address Match Interrupt Enable - CLEAR */
    TRX24_AMI_EN_SET_gc   = (0x20), /* Address Match Interrupt Enable - SET */
} TRX24_AMI_EN_t;

/* End of ED Measurement Interrupt Enable */
typedef enum TRX24_CCA_ED_DONE_EN_enum
{
    TRX24_CCA_ED_DONE_EN_CLEAR_gc = (0x00), /* End of ED Measurement Interrupt Enable - CLEAR */
    TRX24_CCA_ED_DONE_EN_SET_gc   = (0x10), /* End of ED Measurement Interrupt Enable - SET */
} TRX24_CCA_ED_DONE_EN_t;

/* RX_END Interrupt Enable */
typedef enum TRX24_RX_END_EN_enum
{
    TRX24_RX_END_EN_CLEAR_gc = (0x00), /* RX_END Interrupt Enable - CLEAR */
    TRX24_RX_END_EN_SET_gc   = (0x08), /* RX_END Interrupt Enable - SET */
} TRX24_RX_END_EN_t;

/* RX_START Interrupt Enable */
typedef enum TRX24_RX_START_EN_enum
{
    TRX24_RX_START_EN_CLEAR_gc = (0x00), /* RX_START Interrupt Enable - CLEAR */
    TRX24_RX_START_EN_SET_gc   = (0x04), /* RX_START Interrupt Enable - SET */
} TRX24_RX_START_EN_t;

/* PLL Unlock Interrupt Enable */
typedef enum TRX24_PLL_UNLOCK_EN_enum
{
    TRX24_PLL_UNLOCK_EN_CLEAR_gc = (0x00), /* PLL Unlock Interrupt Enable - CLEAR */
    TRX24_PLL_UNLOCK_EN_SET_gc   = (0x02), /* PLL Unlock Interrupt Enable - SET */
} TRX24_PLL_UNLOCK_EN_t;

/* PLL Lock Interrupt Enable */
typedef enum TRX24_PLL_LOCK_EN_enum
{
    TRX24_PLL_LOCK_EN_CLEAR_gc = (0x00), /* PLL Lock Interrupt Enable - CLEAR */
    TRX24_PLL_LOCK_EN_SET_gc   = (0x01), /* PLL Lock Interrupt Enable - SET */
} TRX24_PLL_LOCK_EN_t;

/* Awake Interrupt Status */
typedef enum TRX24_AWAKE_enum
{
    TRX24_AWAKE_CLEAR_gc = (0x00), /* Awake Interrupt Status - CLEAR */
    TRX24_AWAKE_SET_gc   = (0x80), /* Awake Interrupt Status - SET */
} TRX24_AWAKE_t;

/* TX_END Interrupt Status */
typedef enum TRX24_TX_END_enum
{
    TRX24_TX_END_CLEAR_gc = (0x00), /* TX_END Interrupt Status - CLEAR */
    TRX24_TX_END_SET_gc   = (0x40), /* TX_END Interrupt Status - SET */
} TRX24_TX_END_t;

/* Address Match Interrupt Status */
typedef enum TRX24_AMI_enum
{
    TRX24_AMI_CLEAR_gc = (0x00), /* Address Match Interrupt Status - CLEAR */
    TRX24_AMI_SET_gc   = (0x20), /* Address Match Interrupt Status - SET */
} TRX24_AMI_t;

/* End of ED Measurement Interrupt Status */
typedef enum TRX24_CCA_ED_DONE_enum
{
    TRX24_CCA_ED_DONE_CLEAR_gc = (0x00), /* End of ED Measurement Interrupt Status - CLEAR */
    TRX24_CCA_ED_DONE_SET_gc   = (0x10), /* End of ED Measurement Interrupt Status - SET */
} TRX24_CCA_ED_DONE_t;

/* RX_END Interrupt Status */
typedef enum TRX24_RX_END_enum
{
    TRX24_RX_END_CLEAR_gc = (0x00), /* RX_END Interrupt Status - CLEAR */
    TRX24_RX_END_SET_gc   = (0x08), /* RX_END Interrupt Status - SET */
} TRX24_RX_END_t;

/* RX_START Interrupt Status */
typedef enum TRX24_RX_START_enum
{
    TRX24_RX_START_CLEAR_gc = (0x00), /* RX_START Interrupt Status - CLEAR */
    TRX24_RX_START_SET_gc   = (0x04), /* RX_START Interrupt Status - SET */
} TRX24_RX_START_t;

/* PLL Unlock Interrupt Status */
typedef enum TRX24_PLL_UNLOCK_enum
{
    TRX24_PLL_UNLOCK_CLEAR_gc = (0x00), /* PLL Unlock Interrupt Status - CLEAR */
    TRX24_PLL_UNLOCK_SET_gc   = (0x02), /* PLL Unlock Interrupt Status - SET */
} TRX24_PLL_UNLOCK_t;

/* PLL Lock Interrupt Status */
typedef enum TRX24_PLL_LOCK_enum
{
    TRX24_PLL_LOCK_CLEAR_gc = (0x00), /* PLL Lock Interrupt Status - CLEAR */
    TRX24_PLL_LOCK_SET_gc   = (0x01), /* PLL Lock Interrupt Status - SET */
} TRX24_PLL_LOCK_t;

/* Reserved Bit */
#define TRX24_IRQ_MASK1_Res_gc(x) ((x<<5) & 0xE0)

/* Address Match Interrupt enable Address filter 3 */
typedef enum TRX24_MAF_3_AMI_EN_enum
{
    TRX24_MAF_3_AMI_EN_CLEAR_gc = (0x00), /* Address Match Interrupt enable Address filter 3 - CLEAR */
    TRX24_MAF_3_AMI_EN_SET_gc   = (0x10), /* Address Match Interrupt enable Address filter 3 - SET */
} TRX24_MAF_3_AMI_EN_t;

/* Address Match Interrupt enable Address filter 2 */
typedef enum TRX24_MAF_2_AMI_EN_enum
{
    TRX24_MAF_2_AMI_EN_CLEAR_gc = (0x00), /* Address Match Interrupt enable Address filter 2 - CLEAR */
    TRX24_MAF_2_AMI_EN_SET_gc   = (0x08), /* Address Match Interrupt enable Address filter 2 - SET */
} TRX24_MAF_2_AMI_EN_t;

/* Address Match Interrupt enable Address filter 1 */
typedef enum TRX24_MAF_1_AMI_EN_enum
{
    TRX24_MAF_1_AMI_EN_CLEAR_gc = (0x00), /* Address Match Interrupt enable Address filter 1 - CLEAR */
    TRX24_MAF_1_AMI_EN_SET_gc   = (0x04), /* Address Match Interrupt enable Address filter 1 - SET */
} TRX24_MAF_1_AMI_EN_t;

/* Address Match Interrupt enable Address filter 0 */
typedef enum TRX24_MAF_0_AMI_EN_enum
{
    TRX24_MAF_0_AMI_EN_CLEAR_gc = (0x00), /* Address Match Interrupt enable Address filter 0 - CLEAR */
    TRX24_MAF_0_AMI_EN_SET_gc   = (0x02), /* Address Match Interrupt enable Address filter 0 - SET */
} TRX24_MAF_0_AMI_EN_t;

/* Transmit Start Interrupt enable */
typedef enum TRX24_TX_START_EN_enum
{
    TRX24_TX_START_EN_CLEAR_gc = (0x00), /* Transmit Start Interrupt enable - CLEAR */
    TRX24_TX_START_EN_SET_gc   = (0x01), /* Transmit Start Interrupt enable - SET */
} TRX24_TX_START_EN_t;

/* Reserved Bit */
#define TRX24_IRQ_STATUS1_Res_gc(x) ((x<<5) & 0xE0)

/* Address Match Interrupt Status Address filter 3 */
typedef enum TRX24_MAF_3_AMI_enum
{
    TRX24_MAF_3_AMI_CLEAR_gc = (0x00), /* Address Match Interrupt Status Address filter 3 - CLEAR */
    TRX24_MAF_3_AMI_SET_gc   = (0x10), /* Address Match Interrupt Status Address filter 3 - SET */
} TRX24_MAF_3_AMI_t;

/* Address Match Interrupt Status Address filter 2 */
typedef enum TRX24_MAF_2_AMI_enum
{
    TRX24_MAF_2_AMI_CLEAR_gc = (0x00), /* Address Match Interrupt Status Address filter 2 - CLEAR */
    TRX24_MAF_2_AMI_SET_gc   = (0x08), /* Address Match Interrupt Status Address filter 2 - SET */
} TRX24_MAF_2_AMI_t;

/* Address Match Interrupt Status Address filter 1 */
typedef enum TRX24_MAF_1_AMI_enum
{
    TRX24_MAF_1_AMI_CLEAR_gc = (0x00), /* Address Match Interrupt Status Address filter 1 - CLEAR */
    TRX24_MAF_1_AMI_SET_gc   = (0x04), /* Address Match Interrupt Status Address filter 1 - SET */
} TRX24_MAF_1_AMI_t;

/* Address Match Interrupt Status Address filter 0 */
typedef enum TRX24_MAF_0_AMI_enum
{
    TRX24_MAF_0_AMI_CLEAR_gc = (0x00), /* Address Match Interrupt Status Address filter 0 - CLEAR */
    TRX24_MAF_0_AMI_SET_gc   = (0x02), /* Address Match Interrupt Status Address filter 0 - SET */
} TRX24_MAF_0_AMI_t;

/* Transmit Start Interrupt Status */
typedef enum TRX24_TX_START_enum
{
    TRX24_TX_START_CLEAR_gc = (0x00), /* Transmit Start Interrupt Status - CLEAR */
    TRX24_TX_START_SET_gc   = (0x01), /* Transmit Start Interrupt Status - SET */
} TRX24_TX_START_t;

/* Use External AVDD Regulator */
typedef enum TRX24_AVREG_EXT_enum
{
    TRX24_AVREG_EXT_AVDD_INT_gc = (0x00<<7), /* Internal AVDD voltage regulator for the analog section is enabled. */
    TRX24_AVREG_EXT_AVDD_EXT_gc = (0x01<<7), /* Internal AVDD voltage regulator is disabled; use external regulated 1.8V supply voltage for the analog section. */
} TRX24_AVREG_EXT_t;

/* AVDD Supply Voltage Valid */
typedef enum TRX24_AVDD_OK_enum
{
    TRX24_AVDD_OK_VAL_0_gc = (0x00<<6), /* Analog voltage regulator disabled or supply voltage not stable */
    TRX24_AVDD_OK_VAL_1_gc = (0x01<<6), /* Analog supply voltage has settled */
} TRX24_AVDD_OK_t;

/* Use External DVDD Regulator */
typedef enum TRX24_DVREG_EXT_enum
{
    TRX24_DVREG_EXT_DVDD_INT_gc = (0x00<<3), /* Internal DVDD voltage regulator for the digital section is enabled. */
    TRX24_DVREG_EXT_DVDD_EXT_gc = (0x01<<3), /* Internal DVDD voltage regulator is disabled; use external regulated 1.8V supply voltage for the digital section. */
} TRX24_DVREG_EXT_t;

/* DVDD Supply Voltage Valid */
typedef enum TRX24_DVDD_OK_enum
{
    TRX24_DVDD_OK_VAL_0_gc = (0x00<<2), /* Digital voltage regulator disabled or supply voltage not stable */
    TRX24_DVDD_OK_VAL_1_gc = (0x01<<2), /* Digital supply voltage has settled */
} TRX24_DVDD_OK_t;

/* Battery Monitor Interrupt Status */
typedef enum TRX24_BAT_LOW_enum
{
    TRX24_BAT_LOW_CLEAR_gc = (0x00), /* Battery Monitor Interrupt Status - CLEAR */
    TRX24_BAT_LOW_SET_gc   = (0x80), /* Battery Monitor Interrupt Status - SET */
} TRX24_BAT_LOW_t;

/* Battery Monitor Interrupt Enable */
typedef enum TRX24_BAT_LOW_EN_enum
{
    TRX24_BAT_LOW_EN_CLEAR_gc = (0x00), /* Battery Monitor Interrupt Enable - CLEAR */
    TRX24_BAT_LOW_EN_SET_gc   = (0x40), /* Battery Monitor Interrupt Enable - SET */
} TRX24_BAT_LOW_EN_t;

/* Battery Monitor Status */
typedef enum TRX24_BATMON_OK_enum
{
    TRX24_BATMON_OK_VAL_0_gc = (0x00<<5), /* The battery voltage is below the threshold. */
    TRX24_BATMON_OK_VAL_1_gc = (0x01<<5), /* The battery voltage is above the threshold. */
} TRX24_BATMON_OK_t;

/* Battery Monitor Voltage Range */
typedef enum TRX24_BATMON_HR_enum
{
    TRX24_BATMON_HR_BATMON_HR_DIS_gc = (0x00<<4), /* Enables the low range, see BATMON_VTH */
    TRX24_BATMON_HR_BATMON_HR_EN_gc  = (0x01<<4), /* Enables the high range, see BATMON_VTH */
} TRX24_BATMON_HR_t;

/* Battery Monitor Threshold Voltage */
typedef enum TRX24_BATMON_VTH_enum
{
    TRX24_BATMON_VTH_VAL_0x0_gc = (0x00), /* 2.550V / 1.70V (BATMON_HR=1/0) */
    TRX24_BATMON_VTH_VAL_0x1_gc = (0x01), /* 2.625V / 1.75V (BATMON_HR=1/0) */
    TRX24_BATMON_VTH_VAL_0x2_gc = (0x02), /* 2.700V / 1.80V (BATMON_HR=1/0) */
    TRX24_BATMON_VTH_VAL_0x3_gc = (0x03), /* 2.775V / 1.85V (BATMON_HR=1/0) */
    TRX24_BATMON_VTH_VAL_0x4_gc = (0x04), /* 2.850V / 1.90V (BATMON_HR=1/0) */
    TRX24_BATMON_VTH_VAL_0x5_gc = (0x05), /* 2.925V / 1.95V (BATMON_HR=1/0) */
    TRX24_BATMON_VTH_VAL_0x6_gc = (0x06), /* 3.000V / 2.00V (BATMON_HR=1/0) */
    TRX24_BATMON_VTH_VAL_0x7_gc = (0x07), /* 3.075V / 2.05V (BATMON_HR=1/0) */
    TRX24_BATMON_VTH_VAL_0x8_gc = (0x08), /* 3.150V / 2.10V (BATMON_HR=1/0) */
    TRX24_BATMON_VTH_VAL_0x9_gc = (0x09), /* 3.225V / 2.15V (BATMON_HR=1/0) */
    TRX24_BATMON_VTH_VAL_0xA_gc = (0x0A), /* 3.300V / 2.20V (BATMON_HR=1/0) */
    TRX24_BATMON_VTH_VAL_0xB_gc = (0x0B), /* 3.375V / 2.25V (BATMON_HR=1/0) */
    TRX24_BATMON_VTH_VAL_0xC_gc = (0x0C), /* 3.450V / 2.30V (BATMON_HR=1/0) */
    TRX24_BATMON_VTH_VAL_0xD_gc = (0x0D), /* 3.525V / 2.35V (BATMON_HR=1/0) */
    TRX24_BATMON_VTH_VAL_0xE_gc = (0x0E), /* 3.600V / 2.40V (BATMON_HR=1/0) */
    TRX24_BATMON_VTH_VAL_0xF_gc = (0x0F), /* 3.675V / 2.45V (BATMON_HR=1/0) */
} TRX24_BATMON_VTH_t;

/* Crystal Oscillator Operating Mode */
typedef enum TRX24_XTAL_MODE_enum
{
    TRX24_XTAL_MODE_VAL_0x4_gc = (0x04<<4), /* Internal crystal oscillator disabled; use external reference frequency. */
    TRX24_XTAL_MODE_VAL_0xF_gc = (0x0F<<4), /* Internal crystal oscillator enabled; amplitude regulation of oscillation enabled. */
} TRX24_XTAL_MODE_t;

/* Crystal Oscillator Load Capacitance Trimming */
typedef enum TRX24_XTAL_TRIM_enum
{
    TRX24_XTAL_TRIM_XTAL_TRIM_MIN_gc = (0x00), /* 0.0 pF, trimming capacitors disconnected */
    TRX24_XTAL_TRIM_VAL_0x1_gc       = (0x01), /* 0.3 pF, trimming capacitor switched on */
    TRX24_XTAL_TRIM_VAL_0x2_gc       = (0x02), /* ... */
    TRX24_XTAL_TRIM_XTAL_TRIM_MAX_gc = (0x0F), /* 4.5 pF, trimming capacitor switched on */
} TRX24_XTAL_TRIM_t;

/* Prevent Frame Reception */
typedef enum TRX24_RX_PDT_DIS_enum
{
    TRX24_RX_PDT_DIS_CLEAR_gc = (0x00), /* Prevent Frame Reception - CLEAR */
    TRX24_RX_PDT_DIS_SET_gc   = (0x80), /* Prevent Frame Reception - SET */
} TRX24_RX_PDT_DIS_t;

/* Receiver Override Function */
typedef enum TRX24_RX_OVERRIDE_enum
{
    TRX24_RX_OVERRIDE_CLEAR_gc = (0x00), /* Receiver Override Function - CLEAR */
    TRX24_RX_OVERRIDE_SET_gc   = (0x40), /* Receiver Override Function - SET */
} TRX24_RX_OVERRIDE_t;

/* Reserved */
#define TRX24_RX_SYN_Res_gc(x) ((x<<4) & 0x30)

/* Reduce Receiver Sensitivity */
typedef enum TRX24_RX_PDT_LEVEL_enum
{
    TRX24_RX_PDT_LEVEL_RX_PDT_LEVEL_MIN_gc = (0x00), /* RX_THRES ≤ RSSI_BASE_VAL (Reset value); RSSI value not considered */
    TRX24_RX_PDT_LEVEL_VAL_0x1_gc          = (0x01), /* RX_THRES > RSSI_BASE_VAL + 0 · 3; RSSI > -90 dBm */
    TRX24_RX_PDT_LEVEL_VAL_0x2_gc          = (0x02), /* ... */
    TRX24_RX_PDT_LEVEL_VAL_0xE_gc          = (0x0E), /* RX_THRES > RSSI_BASE_VAL + 13 · 3; RSSI > -51 dBm */
    TRX24_RX_PDT_LEVEL_RX_PDT_LEVEL_MAX_gc = (0x0F), /* RX_THRES > RSSI_BASE_VAL + 14 · 3; RSSI > -48 dBm */
} TRX24_RX_PDT_LEVEL_t;

/* Smart Receiving Mode Timing */
typedef enum TRX24_RX_RPC_CTRL_enum
{
    TRX24_RX_RPC_CTRL_VAL_0_gc = (0x00<<6), /* Activates minimum power saving behaviour for smart receiving mode */
    TRX24_RX_RPC_CTRL_VAL_1_gc = (0x01<<6), /* Reserved */
    TRX24_RX_RPC_CTRL_VAL_2_gc = (0x02<<6), /* Reserved */
    TRX24_RX_RPC_CTRL_VAL_3_gc = (0x03<<6), /* Activates maximum power saving behaviour for smart receiving mode */
} TRX24_RX_RPC_CTRL_t;

/* Reciver Smart Receiving Mode Enable */
typedef enum TRX24_RX_RPC_EN_enum
{
    TRX24_RX_RPC_EN_CLEAR_gc = (0x00), /* Reciver Smart Receiving Mode Enable - CLEAR */
    TRX24_RX_RPC_EN_SET_gc   = (0x20), /* Reciver Smart Receiving Mode Enable - SET */
} TRX24_RX_RPC_EN_t;

/* Smart Receiving Mode Reduced Sensitivity Enable */
typedef enum TRX24_PDT_RPC_EN_enum
{
    TRX24_PDT_RPC_EN_CLEAR_gc = (0x00), /* Smart Receiving Mode Reduced Sensitivity Enable - CLEAR */
    TRX24_PDT_RPC_EN_SET_gc   = (0x10), /* Smart Receiving Mode Reduced Sensitivity Enable - SET */
} TRX24_PDT_RPC_EN_t;

/* PLL Smart Receiving Mode Enable */
typedef enum TRX24_PLL_RPC_EN_enum
{
    TRX24_PLL_RPC_EN_CLEAR_gc = (0x00), /* PLL Smart Receiving Mode Enable - CLEAR */
    TRX24_PLL_RPC_EN_SET_gc   = (0x08), /* PLL Smart Receiving Mode Enable - SET */
} TRX24_PLL_RPC_EN_t;

/* Reserved */
typedef enum TRX24_Res0_enum
{
    TRX24_Res0_CLEAR_gc = (0x00), /* Reserved - CLEAR */
    TRX24_Res0_SET_gc   = (0x04), /* Reserved - SET */
} TRX24_Res0_t;

/* Smart Receiving Mode IPAN Handling Enable */
typedef enum TRX24_IPAN_RPC_EN_enum
{
    TRX24_IPAN_RPC_EN_CLEAR_gc = (0x00), /* Smart Receiving Mode IPAN Handling Enable - CLEAR */
    TRX24_IPAN_RPC_EN_SET_gc   = (0x02), /* Smart Receiving Mode IPAN Handling Enable - SET */
} TRX24_IPAN_RPC_EN_t;

/* Smart Receiving in Extended Operating Modes Enable */
typedef enum TRX24_XAH_RPC_EN_enum
{
    TRX24_XAH_RPC_EN_CLEAR_gc = (0x00), /* Smart Receiving in Extended Operating Modes Enable - CLEAR */
    TRX24_XAH_RPC_EN_SET_gc   = (0x01), /* Smart Receiving in Extended Operating Modes Enable - SET */
} TRX24_XAH_RPC_EN_t;

/* Filter Reserved Frames */
typedef enum TRX24_AACK_FLTR_RES_FT_enum
{
    TRX24_AACK_FLTR_RES_FT_CLEAR_gc = (0x00), /* Filter Reserved Frames - CLEAR */
    TRX24_AACK_FLTR_RES_FT_SET_gc   = (0x20), /* Filter Reserved Frames - SET */
} TRX24_AACK_FLTR_RES_FT_t;

/* Process Reserved Frames */
typedef enum TRX24_AACK_UPLD_RES_FT_enum
{
    TRX24_AACK_UPLD_RES_FT_CLEAR_gc = (0x00), /* Process Reserved Frames - CLEAR */
    TRX24_AACK_UPLD_RES_FT_SET_gc   = (0x10), /* Process Reserved Frames - SET */
} TRX24_AACK_UPLD_RES_FT_t;

/* Reduce Acknowledgment Time */
typedef enum TRX24_AACK_ACK_TIME_enum
{
    TRX24_AACK_ACK_TIME_AACK_ACK_TIME_12_SYM_gc = (0x00<<2), /* 12 symbols acknowledgment time */
    TRX24_AACK_ACK_TIME_AACK_ACK_TIME_2_SYM_gc  = (0x01<<2), /*  2 symbols acknowledgment time */
} TRX24_AACK_ACK_TIME_t;

/* Enable Promiscuous Mode */
typedef enum TRX24_AACK_PROM_MODE_enum
{
    TRX24_AACK_PROM_MODE_CLEAR_gc = (0x00), /* Enable Promiscuous Mode - CLEAR */
    TRX24_AACK_PROM_MODE_SET_gc   = (0x02), /* Enable Promiscuous Mode - SET */
} TRX24_AACK_PROM_MODE_t;

/* Start Calibration Loop of Filter Tuning Network */
typedef enum TRX24_FTN_START_enum
{
    TRX24_FTN_START_CLEAR_gc = (0x00), /* Start Calibration Loop of Filter Tuning Network - CLEAR */
    TRX24_FTN_START_SET_gc   = (0x80), /* Start Calibration Loop of Filter Tuning Network - SET */
} TRX24_FTN_START_t;

/* Start Center Frequency Calibration */
typedef enum TRX24_PLL_CF_START_enum
{
    TRX24_PLL_CF_START_CLEAR_gc = (0x00), /* Start Center Frequency Calibration - CLEAR */
    TRX24_PLL_CF_START_SET_gc   = (0x80), /* Start Center Frequency Calibration - SET */
} TRX24_PLL_CF_START_t;

/* Start Delay Cell Calibration */
typedef enum TRX24_PLL_DCU_START_enum
{
    TRX24_PLL_DCU_START_CLEAR_gc = (0x00), /* Start Delay Cell Calibration - CLEAR */
    TRX24_PLL_DCU_START_SET_gc   = (0x80), /* Start Delay Cell Calibration - SET */
} TRX24_PLL_DCU_START_t;

/* Part Number */
typedef enum TRX24_PART_NUM_enum
{
    TRX24_PART_NUM_P_ATmega128RFA1_gc = (0x83), /* ATmega128RFA1 part number */
    TRX24_PART_NUM_P_RFA2_gc          = (0x93), /* RFA2 family */
    TRX24_PART_NUM_P_RFR2_gc          = (0x94), /* RFR2 family */
} TRX24_PART_NUM_t;

/* Version Number */
typedef enum TRX24_VERSION_NUM_enum
{
    TRX24_VERSION_NUM_REV_A_gc = (0x0C), /* Revision A */
    TRX24_VERSION_NUM_REV_B_gc = (0x01), /* Revision B */
    TRX24_VERSION_NUM_REV_C_gc = (0x03), /* Revision C */
    TRX24_VERSION_NUM_REV_D_gc = (0x04), /* Revision D */
} TRX24_VERSION_NUM_t;

/* Manufacturer ID (Low Byte) */
typedef enum TRX24_MAN_ID_07_enum
{
    TRX24_MAN_ID_07_CLEAR_gc = (0x00), /* Manufacturer ID (Low Byte) - CLEAR */
    TRX24_MAN_ID_07_SET_gc   = (0x80), /* Manufacturer ID (Low Byte) - SET */
} TRX24_MAN_ID_07_t;

/* Manufacturer ID (Low Byte) */
typedef enum TRX24_MAN_ID_06_enum
{
    TRX24_MAN_ID_06_CLEAR_gc = (0x00), /* Manufacturer ID (Low Byte) - CLEAR */
    TRX24_MAN_ID_06_SET_gc   = (0x40), /* Manufacturer ID (Low Byte) - SET */
} TRX24_MAN_ID_06_t;

/* Manufacturer ID (Low Byte) */
typedef enum TRX24_MAN_ID_05_enum
{
    TRX24_MAN_ID_05_CLEAR_gc = (0x00), /* Manufacturer ID (Low Byte) - CLEAR */
    TRX24_MAN_ID_05_SET_gc   = (0x20), /* Manufacturer ID (Low Byte) - SET */
} TRX24_MAN_ID_05_t;

/* Manufacturer ID (Low Byte) */
typedef enum TRX24_MAN_ID_04_enum
{
    TRX24_MAN_ID_04_CLEAR_gc = (0x00), /* Manufacturer ID (Low Byte) - CLEAR */
    TRX24_MAN_ID_04_SET_gc   = (0x10), /* Manufacturer ID (Low Byte) - SET */
} TRX24_MAN_ID_04_t;

/* Manufacturer ID (Low Byte) */
typedef enum TRX24_MAN_ID_03_enum
{
    TRX24_MAN_ID_03_CLEAR_gc = (0x00), /* Manufacturer ID (Low Byte) - CLEAR */
    TRX24_MAN_ID_03_SET_gc   = (0x08), /* Manufacturer ID (Low Byte) - SET */
} TRX24_MAN_ID_03_t;

/* Manufacturer ID (Low Byte) */
typedef enum TRX24_MAN_ID_02_enum
{
    TRX24_MAN_ID_02_CLEAR_gc = (0x00), /* Manufacturer ID (Low Byte) - CLEAR */
    TRX24_MAN_ID_02_SET_gc   = (0x04), /* Manufacturer ID (Low Byte) - SET */
} TRX24_MAN_ID_02_t;

/* Manufacturer ID (Low Byte) */
typedef enum TRX24_MAN_ID_01_enum
{
    TRX24_MAN_ID_01_CLEAR_gc = (0x00), /* Manufacturer ID (Low Byte) - CLEAR */
    TRX24_MAN_ID_01_SET_gc   = (0x02), /* Manufacturer ID (Low Byte) - SET */
} TRX24_MAN_ID_01_t;

/* Manufacturer ID (Low Byte) */
typedef enum TRX24_MAN_ID_00_enum
{
    TRX24_MAN_ID_00_ATMEL_BYTE_0_gc = (0x1F), /* Atmel JEDEC manufacturer ID, bits [7:0] of 32 bit manufacturer ID: 00 00 00 1F */
} TRX24_MAN_ID_00_t;

/* Manufacturer ID (High Byte) */
typedef enum TRX24_MAN_ID__enum
{
    TRX24_MAN_ID__ATMEL_BYTE_1_gc = (0x00), /* Atmel JEDEC manufacturer ID, bits [15:8] of 32 bit manufacturer ID: 00 00 00 1F */
} TRX24_MAN_ID__t;

/* MAC Short Address */
typedef enum TRX24_SHORT_ADDR_07_enum
{
    TRX24_SHORT_ADDR_07_CLEAR_gc = (0x00), /* MAC Short Address - CLEAR */
    TRX24_SHORT_ADDR_07_SET_gc   = (0x80), /* MAC Short Address - SET */
} TRX24_SHORT_ADDR_07_t;

/* MAC Short Address */
typedef enum TRX24_SHORT_ADDR_06_enum
{
    TRX24_SHORT_ADDR_06_CLEAR_gc = (0x00), /* MAC Short Address - CLEAR */
    TRX24_SHORT_ADDR_06_SET_gc   = (0x40), /* MAC Short Address - SET */
} TRX24_SHORT_ADDR_06_t;

/* MAC Short Address */
typedef enum TRX24_SHORT_ADDR_05_enum
{
    TRX24_SHORT_ADDR_05_CLEAR_gc = (0x00), /* MAC Short Address - CLEAR */
    TRX24_SHORT_ADDR_05_SET_gc   = (0x20), /* MAC Short Address - SET */
} TRX24_SHORT_ADDR_05_t;

/* MAC Short Address */
typedef enum TRX24_SHORT_ADDR_04_enum
{
    TRX24_SHORT_ADDR_04_CLEAR_gc = (0x00), /* MAC Short Address - CLEAR */
    TRX24_SHORT_ADDR_04_SET_gc   = (0x10), /* MAC Short Address - SET */
} TRX24_SHORT_ADDR_04_t;

/* MAC Short Address */
typedef enum TRX24_SHORT_ADDR_03_enum
{
    TRX24_SHORT_ADDR_03_CLEAR_gc = (0x00), /* MAC Short Address - CLEAR */
    TRX24_SHORT_ADDR_03_SET_gc   = (0x08), /* MAC Short Address - SET */
} TRX24_SHORT_ADDR_03_t;

/* MAC Short Address */
typedef enum TRX24_SHORT_ADDR_02_enum
{
    TRX24_SHORT_ADDR_02_CLEAR_gc = (0x00), /* MAC Short Address - CLEAR */
    TRX24_SHORT_ADDR_02_SET_gc   = (0x04), /* MAC Short Address - SET */
} TRX24_SHORT_ADDR_02_t;

/* MAC Short Address */
typedef enum TRX24_SHORT_ADDR_01_enum
{
    TRX24_SHORT_ADDR_01_CLEAR_gc = (0x00), /* MAC Short Address - CLEAR */
    TRX24_SHORT_ADDR_01_SET_gc   = (0x02), /* MAC Short Address - SET */
} TRX24_SHORT_ADDR_01_t;

/* MAC Short Address */
typedef enum TRX24_SHORT_ADDR_00_enum
{
    TRX24_SHORT_ADDR_00_CLEAR_gc = (0x00), /* MAC Short Address - CLEAR */
    TRX24_SHORT_ADDR_00_SET_gc   = (0x01), /* MAC Short Address - SET */
} TRX24_SHORT_ADDR_00_t;

/* MAC Personal Area Network ID */
typedef enum TRX24_PAN_ID_07_enum
{
    TRX24_PAN_ID_07_CLEAR_gc = (0x00), /* MAC Personal Area Network ID - CLEAR */
    TRX24_PAN_ID_07_SET_gc   = (0x80), /* MAC Personal Area Network ID - SET */
} TRX24_PAN_ID_07_t;

/* MAC Personal Area Network ID */
typedef enum TRX24_PAN_ID_06_enum
{
    TRX24_PAN_ID_06_CLEAR_gc = (0x00), /* MAC Personal Area Network ID - CLEAR */
    TRX24_PAN_ID_06_SET_gc   = (0x40), /* MAC Personal Area Network ID - SET */
} TRX24_PAN_ID_06_t;

/* MAC Personal Area Network ID */
typedef enum TRX24_PAN_ID_05_enum
{
    TRX24_PAN_ID_05_CLEAR_gc = (0x00), /* MAC Personal Area Network ID - CLEAR */
    TRX24_PAN_ID_05_SET_gc   = (0x20), /* MAC Personal Area Network ID - SET */
} TRX24_PAN_ID_05_t;

/* MAC Personal Area Network ID */
typedef enum TRX24_PAN_ID_04_enum
{
    TRX24_PAN_ID_04_CLEAR_gc = (0x00), /* MAC Personal Area Network ID - CLEAR */
    TRX24_PAN_ID_04_SET_gc   = (0x10), /* MAC Personal Area Network ID - SET */
} TRX24_PAN_ID_04_t;

/* MAC Personal Area Network ID */
typedef enum TRX24_PAN_ID_03_enum
{
    TRX24_PAN_ID_03_CLEAR_gc = (0x00), /* MAC Personal Area Network ID - CLEAR */
    TRX24_PAN_ID_03_SET_gc   = (0x08), /* MAC Personal Area Network ID - SET */
} TRX24_PAN_ID_03_t;

/* MAC Personal Area Network ID */
typedef enum TRX24_PAN_ID_02_enum
{
    TRX24_PAN_ID_02_CLEAR_gc = (0x00), /* MAC Personal Area Network ID - CLEAR */
    TRX24_PAN_ID_02_SET_gc   = (0x04), /* MAC Personal Area Network ID - SET */
} TRX24_PAN_ID_02_t;

/* MAC Personal Area Network ID */
typedef enum TRX24_PAN_ID_01_enum
{
    TRX24_PAN_ID_01_CLEAR_gc = (0x00), /* MAC Personal Area Network ID - CLEAR */
    TRX24_PAN_ID_01_SET_gc   = (0x02), /* MAC Personal Area Network ID - SET */
} TRX24_PAN_ID_01_t;

/* MAC Personal Area Network ID */
typedef enum TRX24_PAN_ID_00_enum
{
    TRX24_PAN_ID_00_CLEAR_gc = (0x00), /* MAC Personal Area Network ID - CLEAR */
    TRX24_PAN_ID_00_SET_gc   = (0x01), /* MAC Personal Area Network ID - SET */
} TRX24_PAN_ID_00_t;

/* MAC IEEE Address */
typedef enum TRX24_IEEE_ADDR_07_enum
{
    TRX24_IEEE_ADDR_07_CLEAR_gc = (0x00), /* MAC IEEE Address - CLEAR */
    TRX24_IEEE_ADDR_07_SET_gc   = (0x80), /* MAC IEEE Address - SET */
} TRX24_IEEE_ADDR_07_t;

/* MAC IEEE Address */
typedef enum TRX24_IEEE_ADDR_06_enum
{
    TRX24_IEEE_ADDR_06_CLEAR_gc = (0x00), /* MAC IEEE Address - CLEAR */
    TRX24_IEEE_ADDR_06_SET_gc   = (0x40), /* MAC IEEE Address - SET */
} TRX24_IEEE_ADDR_06_t;

/* MAC IEEE Address */
typedef enum TRX24_IEEE_ADDR_05_enum
{
    TRX24_IEEE_ADDR_05_CLEAR_gc = (0x00), /* MAC IEEE Address - CLEAR */
    TRX24_IEEE_ADDR_05_SET_gc   = (0x20), /* MAC IEEE Address - SET */
} TRX24_IEEE_ADDR_05_t;

/* MAC IEEE Address */
typedef enum TRX24_IEEE_ADDR_04_enum
{
    TRX24_IEEE_ADDR_04_CLEAR_gc = (0x00), /* MAC IEEE Address - CLEAR */
    TRX24_IEEE_ADDR_04_SET_gc   = (0x10), /* MAC IEEE Address - SET */
} TRX24_IEEE_ADDR_04_t;

/* MAC IEEE Address */
typedef enum TRX24_IEEE_ADDR_03_enum
{
    TRX24_IEEE_ADDR_03_CLEAR_gc = (0x00), /* MAC IEEE Address - CLEAR */
    TRX24_IEEE_ADDR_03_SET_gc   = (0x08), /* MAC IEEE Address - SET */
} TRX24_IEEE_ADDR_03_t;

/* MAC IEEE Address */
typedef enum TRX24_IEEE_ADDR_02_enum
{
    TRX24_IEEE_ADDR_02_CLEAR_gc = (0x00), /* MAC IEEE Address - CLEAR */
    TRX24_IEEE_ADDR_02_SET_gc   = (0x04), /* MAC IEEE Address - SET */
} TRX24_IEEE_ADDR_02_t;

/* MAC IEEE Address */
typedef enum TRX24_IEEE_ADDR_01_enum
{
    TRX24_IEEE_ADDR_01_CLEAR_gc = (0x00), /* MAC IEEE Address - CLEAR */
    TRX24_IEEE_ADDR_01_SET_gc   = (0x02), /* MAC IEEE Address - SET */
} TRX24_IEEE_ADDR_01_t;

/* MAC IEEE Address */
typedef enum TRX24_IEEE_ADDR_00_enum
{
    TRX24_IEEE_ADDR_00_CLEAR_gc = (0x00), /* MAC IEEE Address - CLEAR */
    TRX24_IEEE_ADDR_00_SET_gc   = (0x01), /* MAC IEEE Address - SET */
} TRX24_IEEE_ADDR_00_t;

/* Maximum Number of Frame Re-transmission Attempts */
typedef enum TRX24_MAX_FRAME_RETRIES_enum
{
    TRX24_MAX_FRAME_RETRIES_VAL_0x0_gc = (0x00<<4), /* Retransmission of frame is not attempted. */
    TRX24_MAX_FRAME_RETRIES_VAL_0x1_gc = (0x01<<4), /* Retransmission of frame is attempted once. */
    TRX24_MAX_FRAME_RETRIES_VAL_0x2_gc = (0x02<<4), /* ... */
    TRX24_MAX_FRAME_RETRIES_VAL_0xF_gc = (0x0F<<4), /* Retransmission of frame is attempted 15 times. */
} TRX24_MAX_FRAME_RETRIES_t;

/* Maximum Number of CSMA-CA Procedure Repetition Attempts */
typedef enum TRX24_MAX_CSMA_RETRIES_enum
{
    TRX24_MAX_CSMA_RETRIES_VAL_0x0_gc = (0x00<<1), /* No repetition of CSMA-CA procedure */
    TRX24_MAX_CSMA_RETRIES_VAL_0x1_gc = (0x01<<1), /* One repetition of CSMA-CA procedure */
    TRX24_MAX_CSMA_RETRIES_VAL_0x2_gc = (0x02<<1), /* ... */
    TRX24_MAX_CSMA_RETRIES_VAL_0x5_gc = (0x05<<1), /* Five repetitions (highest IEEE 802.15.4 compliant value) */
    TRX24_MAX_CSMA_RETRIES_VAL_0x6_gc = (0x06<<1), /* Reserved */
    TRX24_MAX_CSMA_RETRIES_VAL_0x7_gc = (0x07<<1), /* Immediate frame re-transmission without performing CSMA-CA */
} TRX24_MAX_CSMA_RETRIES_t;

/* Set Slotted Acknowledgment */
typedef enum TRX24_SLOTTED_OPERATION_enum
{
    TRX24_SLOTTED_OPERATION_SLOTTED_OP_DIS_gc = (0x00), /* The radio transceiver operates in unslotted mode. An acknowledgment frame is automatically sent if requested. */
    TRX24_SLOTTED_OPERATION_SLOTTED_OP_EN_gc  = (0x01), /* The transmission of an acknowledgment frame has to be controlled by the microcontroller. */
} TRX24_SLOTTED_OPERATION_t;

/* Seed Value for CSMA Random Number Generator */
typedef enum TRX24_CSMA_SEED_07_enum
{
    TRX24_CSMA_SEED_07_CLEAR_gc = (0x00), /* Seed Value for CSMA Random Number Generator - CLEAR */
    TRX24_CSMA_SEED_07_SET_gc   = (0x80), /* Seed Value for CSMA Random Number Generator - SET */
} TRX24_CSMA_SEED_07_t;

/* Seed Value for CSMA Random Number Generator */
typedef enum TRX24_CSMA_SEED_06_enum
{
    TRX24_CSMA_SEED_06_CLEAR_gc = (0x00), /* Seed Value for CSMA Random Number Generator - CLEAR */
    TRX24_CSMA_SEED_06_SET_gc   = (0x40), /* Seed Value for CSMA Random Number Generator - SET */
} TRX24_CSMA_SEED_06_t;

/* Seed Value for CSMA Random Number Generator */
typedef enum TRX24_CSMA_SEED_05_enum
{
    TRX24_CSMA_SEED_05_CLEAR_gc = (0x00), /* Seed Value for CSMA Random Number Generator - CLEAR */
    TRX24_CSMA_SEED_05_SET_gc   = (0x20), /* Seed Value for CSMA Random Number Generator - SET */
} TRX24_CSMA_SEED_05_t;

/* Seed Value for CSMA Random Number Generator */
typedef enum TRX24_CSMA_SEED_04_enum
{
    TRX24_CSMA_SEED_04_CLEAR_gc = (0x00), /* Seed Value for CSMA Random Number Generator - CLEAR */
    TRX24_CSMA_SEED_04_SET_gc   = (0x10), /* Seed Value for CSMA Random Number Generator - SET */
} TRX24_CSMA_SEED_04_t;

/* Seed Value for CSMA Random Number Generator */
typedef enum TRX24_CSMA_SEED_03_enum
{
    TRX24_CSMA_SEED_03_CLEAR_gc = (0x00), /* Seed Value for CSMA Random Number Generator - CLEAR */
    TRX24_CSMA_SEED_03_SET_gc   = (0x08), /* Seed Value for CSMA Random Number Generator - SET */
} TRX24_CSMA_SEED_03_t;

/* Seed Value for CSMA Random Number Generator */
typedef enum TRX24_CSMA_SEED_02_enum
{
    TRX24_CSMA_SEED_02_CLEAR_gc = (0x00), /* Seed Value for CSMA Random Number Generator - CLEAR */
    TRX24_CSMA_SEED_02_SET_gc   = (0x04), /* Seed Value for CSMA Random Number Generator - SET */
} TRX24_CSMA_SEED_02_t;

/* Seed Value for CSMA Random Number Generator */
typedef enum TRX24_CSMA_SEED_01_enum
{
    TRX24_CSMA_SEED_01_CLEAR_gc = (0x00), /* Seed Value for CSMA Random Number Generator - CLEAR */
    TRX24_CSMA_SEED_01_SET_gc   = (0x02), /* Seed Value for CSMA Random Number Generator - SET */
} TRX24_CSMA_SEED_01_t;

/* Seed Value for CSMA Random Number Generator */
typedef enum TRX24_CSMA_SEED_00_enum
{
    TRX24_CSMA_SEED_00_CLEAR_gc = (0x00), /* Seed Value for CSMA Random Number Generator - CLEAR */
    TRX24_CSMA_SEED_00_SET_gc   = (0x01), /* Seed Value for CSMA Random Number Generator - SET */
} TRX24_CSMA_SEED_00_t;

/* Acknowledgment Frame Filter Mode */
typedef enum TRX24_AACK_FVN_MODE_enum
{
    TRX24_AACK_FVN_MODE_VAL_0_gc = (0x00<<6), /* Acknowledge frames with version number 0 */
    TRX24_AACK_FVN_MODE_VAL_1_gc = (0x01<<6), /* Acknowledge frames with version number 0 or 1 */
    TRX24_AACK_FVN_MODE_VAL_2_gc = (0x02<<6), /* Acknowledge frames with version number 0 or 1 or 2 */
    TRX24_AACK_FVN_MODE_VAL_3_gc = (0x03<<6), /* Acknowledge frames independent of frame version number */
} TRX24_AACK_FVN_MODE_t;

/* Set Frame Pending Sub-field */
typedef enum TRX24_AACK_SET_PD_enum
{
    TRX24_AACK_SET_PD_CLEAR_gc = (0x00), /* Set Frame Pending Sub-field - CLEAR */
    TRX24_AACK_SET_PD_SET_gc   = (0x20), /* Set Frame Pending Sub-field - SET */
} TRX24_AACK_SET_PD_t;

/* Disable Acknowledgment Frame Transmission */
typedef enum TRX24_AACK_DIS_ACK_enum
{
    TRX24_AACK_DIS_ACK_CLEAR_gc = (0x00), /* Disable Acknowledgment Frame Transmission - CLEAR */
    TRX24_AACK_DIS_ACK_SET_gc   = (0x10), /* Disable Acknowledgment Frame Transmission - SET */
} TRX24_AACK_DIS_ACK_t;

/* Set Personal Area Network Coordinator */
typedef enum TRX24_AACK_I_AM_COORD_enum
{
    TRX24_AACK_I_AM_COORD_CLEAR_gc = (0x00), /* Set Personal Area Network Coordinator - CLEAR */
    TRX24_AACK_I_AM_COORD_SET_gc   = (0x08), /* Set Personal Area Network Coordinator - SET */
} TRX24_AACK_I_AM_COORD_t;

/* Seed Value for CSMA Random Number Generator */
#define TRX24_CSMA_SEED_1_CSMA_SEED_1_gc(x) (x & 0x07)

/* Maximum Back-off Exponent */
typedef enum TRX24_MAX_BE_enum
{
    TRX24_MAX_BE_VAL_1_gc = (0x01<<4), /* This value is not valid for the maximum back-off exponent. */
    TRX24_MAX_BE_VAL_2_gc = (0x02<<4), /* This value is not valid for the maximum back-off exponent. */
    TRX24_MAX_BE_VAL_3_gc = (0x03<<4), /* Minimum, IEEE compliant value for the maximum back-off exponent. */
    TRX24_MAX_BE_VAL_4_gc = (0x04<<4), /* ... */
    TRX24_MAX_BE_VAL_8_gc = (0x08<<4), /* Maximum, IEEE compliant value for the maximum back-off exponent. */
} TRX24_MAX_BE_t;

/* Minimum Back-off Exponent */
typedef enum TRX24_MIN_BE_enum
{
    TRX24_MIN_BE_VAL_0_gc = (0x00), /* Minimum value of minimum back-off exponent. */
    TRX24_MIN_BE_VAL_1_gc = (0x01), /* ... */
    TRX24_MIN_BE_VAL_8_gc = (0x08), /* Maximum value of minimum back-off exponent. MIN_BE must be smaller or equal to MAX_BE. */
} TRX24_MIN_BE_t;

/* Digital Test Controller Register */
typedef enum TRX24_TST_CTRL_DIG_enum
{
    TRX24_TST_CTRL_DIG_VAL_0_gc  = (0x00), /* NORMAL (no test is active) */
    TRX24_TST_CTRL_DIG_VAL_15_gc = (0x0F), /* TST_CONT_TX (continuous transmit) */
} TRX24_TST_CTRL_DIG_t;

/*
--------------------------------------------------------------------------------
SYMCNT - MAC Symbol Counter
--------------------------------------------------------------------------------
*/

typedef struct SYMCNT_struct
{
    register8_t rsv_0x00[215]; /* RESERVED REGISTER BLOCK */
    register8_t SCRSTRLL;      /* Symbol Counter Received Frame Timestamp Register LL-Byte */
    register8_t SCRSTRLH;      /* Symbol Counter Received Frame Timestamp Register LH-Byte */
    register8_t SCRSTRHL;      /* Symbol Counter Received Frame Timestamp Register HL-Byte */
    register8_t SCRSTRHH;      /* Symbol Counter Received Frame Timestamp Register HH-Byte */
    register8_t SCCSR;         /* Symbol Counter Compare Source Register */
    register8_t SCCR0;         /* Symbol Counter Control Register 0 */
    register8_t SCCR1;         /* Symbol Counter Control Register 1 */
    register8_t SCSR;          /* Symbol Counter Status Register */
    register8_t SCIRQM;        /* Symbol Counter Interrupt Mask Register */
    register8_t SCIRQS;        /* Symbol Counter Interrupt Status Register */
    register8_t SCCNTLL;       /* Symbol Counter Register LL-Byte */
    register8_t SCCNTLH;       /* Symbol Counter Register LH-Byte */
    register8_t SCCNTHL;       /* Symbol Counter Register HL-Byte */
    register8_t SCCNTHH;       /* Symbol Counter Register HH-Byte */
    register8_t SCBTSRLL;      /* Symbol Counter Beacon Timestamp Register LL-Byte */
    register8_t SCBTSRLH;      /* Symbol Counter Beacon Timestamp Register LH-Byte */
    register8_t SCBTSRHL;      /* Symbol Counter Beacon Timestamp Register HL-Byte */
    register8_t SCBTSRHH;      /* Symbol Counter Beacon Timestamp Register HH-Byte */
    register8_t SCTSRLL;       /* Symbol Counter Frame Timestamp Register LL-Byte */
    register8_t SCTSRLH;       /* Symbol Counter Frame Timestamp Register LH-Byte */
    register8_t SCTSRHL;       /* Symbol Counter Frame Timestamp Register HL-Byte */
    register8_t SCTSRHH;       /* Symbol Counter Frame Timestamp Register HH-Byte */
    register8_t SCOCR3LL;      /* Symbol Counter Output Compare Register 3 LL-Byte */
    register8_t SCOCR3LH;      /* Symbol Counter Output Compare Register 3 LH-Byte */
    register8_t SCOCR3HL;      /* Symbol Counter Output Compare Register 3 HL-Byte */
    register8_t SCOCR3HH;      /* Symbol Counter Output Compare Register 3 HH-Byte */
    register8_t SCOCR2LL;      /* Symbol Counter Output Compare Register 2 LL-Byte */
    register8_t SCOCR2LH;      /* Symbol Counter Output Compare Register 2 LH-Byte */
    register8_t SCOCR2HL;      /* Symbol Counter Output Compare Register 2 HL-Byte */
    register8_t SCOCR2HH;      /* Symbol Counter Output Compare Register 2 HH-Byte */
    register8_t SCOCR1LL;      /* Symbol Counter Output Compare Register 1 LL-Byte */
    register8_t SCOCR1LH;      /* Symbol Counter Output Compare Register 1 LH-Byte */
    register8_t SCOCR1HL;      /* Symbol Counter Output Compare Register 1 HL-Byte */
    register8_t SCOCR1HH;      /* Symbol Counter Output Compare Register 1 HH-Byte */
    register8_t SCTSTRLL;      /* Symbol Counter Transmit Frame Timestamp Register LL-Byte */
    register8_t SCTSTRLH;      /* Symbol Counter Transmit Frame Timestamp Register LH-Byte */
    register8_t SCTSTRHL;      /* Symbol Counter Transmit Frame Timestamp Register HL-Byte */
    register8_t SCTSTRHH;      /* Symbol Counter Transmit Frame Timestamp Register HH-Byte */
} SYMCNT_t;


/* Reserved Bit */
#define SYMCNT_SCIRQS_Res_gc(x) ((x<<5) & 0xE0)

/* Backoff Slot Counter IRQ */
typedef enum SYMCNT_IRQSBO_enum
{
    SYMCNT_IRQSBO_CLEAR_gc = (0x00), /* Backoff Slot Counter IRQ - CLEAR */
    SYMCNT_IRQSBO_SET_gc   = (0x10), /* Backoff Slot Counter IRQ - SET */
} SYMCNT_IRQSBO_t;

/* Symbol Counter Overflow IRQ */
typedef enum SYMCNT_IRQSOF_enum
{
    SYMCNT_IRQSOF_CLEAR_gc = (0x00), /* Symbol Counter Overflow IRQ - CLEAR */
    SYMCNT_IRQSOF_SET_gc   = (0x08), /* Symbol Counter Overflow IRQ - SET */
} SYMCNT_IRQSOF_t;

/* Compare Unit 3 Compare Match IRQ */
#define SYMCNT_SCIRQS_IRQSCP_gc(x) (x & 0x07)

/* Reserved Bit */
#define SYMCNT_SCIRQM_Res_gc(x) ((x<<5) & 0xE0)

/* Backoff Slot Counter IRQ enable */
typedef enum SYMCNT_IRQMBO_enum
{
    SYMCNT_IRQMBO_CLEAR_gc = (0x00), /* Backoff Slot Counter IRQ enable - CLEAR */
    SYMCNT_IRQMBO_SET_gc   = (0x10), /* Backoff Slot Counter IRQ enable - SET */
} SYMCNT_IRQMBO_t;

/* Symbol Counter Overflow IRQ enable */
typedef enum SYMCNT_IRQMOF_enum
{
    SYMCNT_IRQMOF_CLEAR_gc = (0x00), /* Symbol Counter Overflow IRQ enable - CLEAR */
    SYMCNT_IRQMOF_SET_gc   = (0x08), /* Symbol Counter Overflow IRQ enable - SET */
} SYMCNT_IRQMOF_t;

/* Symbol Counter Compare Match 3 IRQ enable */
#define SYMCNT_SCIRQM_IRQMCP_gc(x) (x & 0x07)

/* Reserved Bit */
#define SYMCNT_SCSR_Res_gc(x) ((x<<1) & 0xFE)

/* Symbol Counter busy */
typedef enum SYMCNT_SCBSY_enum
{
    SYMCNT_SCBSY_CLEAR_gc = (0x00), /* Symbol Counter busy - CLEAR */
    SYMCNT_SCBSY_SET_gc   = (0x01), /* Symbol Counter busy - SET */
} SYMCNT_SCBSY_t;

/* Reserved Bit */
#define SYMCNT_SCCR1_Res_gc(x) ((x<<6) & 0xC0)

/* Symbol Counter Beacon Timestamp Mask Register */
typedef enum SYMCNT_SCBTSM_enum
{
    SYMCNT_SCBTSM_CLEAR_gc = (0x00), /* Symbol Counter Beacon Timestamp Mask Register - CLEAR */
    SYMCNT_SCBTSM_SET_gc   = (0x20), /* Symbol Counter Beacon Timestamp Mask Register - SET */
} SYMCNT_SCBTSM_t;

/* Clock divider for synchronous clock source (16MHz Transceiver Clock) */
typedef enum SYMCNT_SCCKDIV_enum
{
    SYMCNT_SCCKDIV_VAL_0_gc = (0x00<<2), /* Transceiver Clock divided by 256, (62.5kHz) */
    SYMCNT_SCCKDIV_VAL_1_gc = (0x01<<2), /* Transceiver Clock divided by 128, (125kHz) */
    SYMCNT_SCCKDIV_VAL_2_gc = (0x02<<2), /* Transceiver Clock divided by 64,  (250kHz) */
    SYMCNT_SCCKDIV_VAL_3_gc = (0x03<<2), /* Transceiver Clock divided by 32,  (500kHz) */
    SYMCNT_SCCKDIV_VAL_4_gc = (0x04<<2), /* Transceiver Clock divided by 16,  (1MHz) */
    SYMCNT_SCCKDIV_VAL_5_gc = (0x05<<2), /* Transceiver Clock divided by 8,   (2MHz) */
    SYMCNT_SCCKDIV_VAL_6_gc = (0x06<<2), /* Transceiver Clock divided by 4,   (4MHz) */
} SYMCNT_SCCKDIV_t;

/* Enable External Clock Source on PG2 */
typedef enum SYMCNT_SCEECLK_enum
{
    SYMCNT_SCEECLK_CLEAR_gc = (0x00), /* Enable External Clock Source on PG2 - CLEAR */
    SYMCNT_SCEECLK_SET_gc   = (0x02), /* Enable External Clock Source on PG2 - SET */
} SYMCNT_SCEECLK_t;

/* Backoff Slot Counter enable */
typedef enum SYMCNT_SCENBO_enum
{
    SYMCNT_SCENBO_CLEAR_gc = (0x00), /* Backoff Slot Counter enable - CLEAR */
    SYMCNT_SCENBO_SET_gc   = (0x01), /* Backoff Slot Counter enable - SET */
} SYMCNT_SCENBO_t;

/* Symbol Counter Synchronization */
typedef enum SYMCNT_SCRES_enum
{
    SYMCNT_SCRES_CLEAR_gc = (0x00), /* Symbol Counter Synchronization - CLEAR */
    SYMCNT_SCRES_SET_gc   = (0x80), /* Symbol Counter Synchronization - SET */
} SYMCNT_SCRES_t;

/* Manual Beacon Timestamp */
typedef enum SYMCNT_SCMBTS_enum
{
    SYMCNT_SCMBTS_CLEAR_gc = (0x00), /* Manual Beacon Timestamp - CLEAR */
    SYMCNT_SCMBTS_SET_gc   = (0x40), /* Manual Beacon Timestamp - SET */
} SYMCNT_SCMBTS_t;

/* Symbol Counter enable */
typedef enum SYMCNT_SCEN_enum
{
    SYMCNT_SCEN_CLEAR_gc = (0x00), /* Symbol Counter enable - CLEAR */
    SYMCNT_SCEN_SET_gc   = (0x20), /* Symbol Counter enable - SET */
} SYMCNT_SCEN_t;

/* Symbol Counter Clock Source select */
typedef enum SYMCNT_SCCKSEL_enum
{
    SYMCNT_SCCKSEL_CLEAR_gc = (0x00), /* Symbol Counter Clock Source select - CLEAR */
    SYMCNT_SCCKSEL_SET_gc   = (0x10), /* Symbol Counter Clock Source select - SET */
} SYMCNT_SCCKSEL_t;

/* Symbol Counter Automatic Timestamping enable */
typedef enum SYMCNT_SCTSE_enum
{
    SYMCNT_SCTSE_CLEAR_gc = (0x00), /* Symbol Counter Automatic Timestamping enable - CLEAR */
    SYMCNT_SCTSE_SET_gc   = (0x08), /* Symbol Counter Automatic Timestamping enable - SET */
} SYMCNT_SCTSE_t;

/* Symbol Counter Compare Unit 3 Mode select */
#define SYMCNT_SCCR0_SCCMP_gc(x) (x & 0x07)

/* Reserved Bit */
#define SYMCNT_SCCSR_Res_gc(x) ((x<<6) & 0xC0)

/* Symbol Counter Compare Source select register for Compare Unit 3 */
typedef enum SYMCNT_SCCS3_enum
{
    SYMCNT_SCCS3_VAL_0_gc = (0x00<<4), /* Compare Unit 3 Relative Compare Source = Beacon Timestamp Register */
    SYMCNT_SCCS3_VAL_1_gc = (0x01<<4), /* Compare Unit 3 Relative Compare Source = Transmit Frame Timestamp Register */
    SYMCNT_SCCS3_VAL_2_gc = (0x02<<4), /* Compare Unit 3 Relative Compare Source = Received Frame Timestamp Register */
} SYMCNT_SCCS3_t;

/* Symbol Counter Compare Source select register for Compare Unit 2 */
typedef enum SYMCNT_SCCS2_enum
{
    SYMCNT_SCCS2_VAL_0_gc = (0x00<<2), /* Compare Unit 2 Relative Compare Source = Beacon Timestamp Register */
    SYMCNT_SCCS2_VAL_1_gc = (0x01<<2), /* Compare Unit 2 Relative Compare Source = Transmit Frame Timestamp Register */
    SYMCNT_SCCS2_VAL_2_gc = (0x02<<2), /* Compare Unit 2 Relative Compare Source = Received Frame Timestamp Register */
} SYMCNT_SCCS2_t;

/* Symbol Counter Compare Source select register for Compare Units */
typedef enum SYMCNT_SCCS1_enum
{
    SYMCNT_SCCS1_VAL_0_gc = (0x00), /* Compare Unit 1 Relative Compare Source = Beacon Timestamp Register */
    SYMCNT_SCCS1_VAL_1_gc = (0x01), /* Compare Unit 1 Relative Compare Source = Transmit Frame Timestamp Register */
    SYMCNT_SCCS1_VAL_2_gc = (0x02), /* Compare Unit 1 Relative Compare Source = Received Frame Timestamp Register */
} SYMCNT_SCCS1_t;

/*
--------------------------------------------------------------------------------
EEPROM - EEPROM
--------------------------------------------------------------------------------
*/

typedef struct EEPROM_struct
{
    register8_t rsv_0x00[63]; /* RESERVED REGISTER BLOCK */
    register8_t EECR;         /* EEPROM Control Register */
    register8_t EEDR;         /* EEPROM Data Register */
    _REGISTER16 (EEAR);       /* EEPROM Address Register  Bytes */
} EEPROM_t;


/* Reserved */
#define EEPROM_EECR_Res_gc(x) ((x<<6) & 0xC0)

/* EEPROM Programming Mode */
typedef enum EEPROM_EEPM_enum
{
    EEPROM_EEPM_VAL_0x00_gc = (0x00<<4), /* Erase and Write in one operation (Atomic Operation) */
    EEPROM_EEPM_VAL_0x01_gc = (0x01<<4), /* Erase only */
    EEPROM_EEPM_VAL_0x02_gc = (0x02<<4), /* Write only */
    EEPROM_EEPM_VAL_0x03_gc = (0x03<<4), /* Reserved for future use */
} EEPROM_EEPM_t;

/* EEPROM Ready Interrupt Enable */
typedef enum EEPROM_EERIE_enum
{
    EEPROM_EERIE_CLEAR_gc = (0x00), /* EEPROM Ready Interrupt Enable - CLEAR */
    EEPROM_EERIE_SET_gc   = (0x08), /* EEPROM Ready Interrupt Enable - SET */
} EEPROM_EERIE_t;

/* EEPROM Master Write Enable */
typedef enum EEPROM_EEMPE_enum
{
    EEPROM_EEMPE_CLEAR_gc = (0x00), /* EEPROM Master Write Enable - CLEAR */
    EEPROM_EEMPE_SET_gc   = (0x04), /* EEPROM Master Write Enable - SET */
} EEPROM_EEMPE_t;

/* EEPROM Programming Enable */
typedef enum EEPROM_EEPE_enum
{
    EEPROM_EEPE_CLEAR_gc = (0x00), /* EEPROM Programming Enable - CLEAR */
    EEPROM_EEPE_SET_gc   = (0x02), /* EEPROM Programming Enable - SET */
} EEPROM_EEPE_t;

/* EEPROM Read Enable */
typedef enum EEPROM_EERE_enum
{
    EEPROM_EERE_CLEAR_gc = (0x00), /* EEPROM Read Enable - CLEAR */
    EEPROM_EERE_SET_gc   = (0x01), /* EEPROM Read Enable - SET */
} EEPROM_EERE_t;

/*
--------------------------------------------------------------------------------
JTAG - JTAG Interface
--------------------------------------------------------------------------------
*/

typedef struct JTAG_struct
{
    register8_t rsv_0x00[81]; /* RESERVED REGISTER BLOCK */
    register8_t OCDR;         /* On-Chip Debug Register */
    register8_t rsv_0x52[2];  /* RESERVED REGISTER BLOCK */
    register8_t MCUSR;        /* MCU Status Register */
    register8_t MCUCR;        /* MCU Control Register */
} JTAG_t;


/* On-Chip Debug Register Data */
typedef enum JTAG_OCDR_enum
{
    JTAG_OCDR_VAL_0_gc = (0x00), /* Refer to the debugger documentation for further information on how to use this register. */
} JTAG_OCDR_t;

/* JTAG Interface Disable */
typedef enum JTAG_JTD_enum
{
    JTAG_JTD_CLEAR_gc = (0x00), /* JTAG Interface Disable - CLEAR */
    JTAG_JTD_SET_gc   = (0x80), /* JTAG Interface Disable - SET */
} JTAG_JTD_t;

/* JTAG Reset Flag */
typedef enum JTAG_JTRF_enum
{
    JTAG_JTRF_CLEAR_gc = (0x00), /* JTAG Reset Flag - CLEAR */
    JTAG_JTRF_SET_gc   = (0x10), /* JTAG Reset Flag - SET */
} JTAG_JTRF_t;

/*
--------------------------------------------------------------------------------
EXINT - External Interrupts
--------------------------------------------------------------------------------
*/

typedef struct EXINT_struct
{
    register8_t rsv_0x00[59]; /* RESERVED REGISTER BLOCK */
    register8_t PCIFR;        /* Pin Change Interrupt Flag Register */
    register8_t EIFR;         /* External Interrupt Flag Register */
    register8_t EIMSK;        /* External Interrupt Mask Register */
    register8_t rsv_0x3E[42]; /* RESERVED REGISTER BLOCK */
    register8_t PCICR;        /* Pin Change Interrupt Control Register */
    register8_t EICRA;        /* External Interrupt Control Register A */
    register8_t EICRB;        /* External Interrupt Control Register B */
    register8_t PCMSK0;       /* Pin Change Mask Register 0 */
    register8_t PCMSK1;       /* Pin Change Mask Register 1 */
    register8_t PCMSK2;       /* Pin Change Mask Register 2 */
} EXINT_t;


/* External Interrupt 3 Sense Control Bit */
typedef enum EXINT_ISC3_enum
{
    EXINT_ISC3_VAL_0x00_gc = (0x00<<6), /* The low level of INTn generates an interrupt request. */
    EXINT_ISC3_VAL_0x01_gc = (0x01<<6), /* Any edge of INTn generates asynchronously an interrupt request. */
    EXINT_ISC3_VAL_0x02_gc = (0x02<<6), /* The falling edge of INTn generates asynchronously an interrupt request. */
    EXINT_ISC3_VAL_0x03_gc = (0x03<<6), /* The rising edge of INTn generates asynchronously an interrupt request. */
} EXINT_ISC3_t;

/* External Interrupt 2 Sense Control Bit */
typedef enum EXINT_ISC2_enum
{
    EXINT_ISC2_VAL_0x00_gc = (0x00<<4), /* The low level of INTn generates an interrupt request. */
    EXINT_ISC2_VAL_0x01_gc = (0x01<<4), /* Any edge of INTn generates asynchronously an interrupt request. */
    EXINT_ISC2_VAL_0x02_gc = (0x02<<4), /* The falling edge of INTn generates asynchronously an interrupt request. */
    EXINT_ISC2_VAL_0x03_gc = (0x03<<4), /* The rising edge of INTn generates asynchronously an interrupt request. */
} EXINT_ISC2_t;

/* External Interrupt 1 Sense Control Bit */
typedef enum EXINT_ISC1_enum
{
    EXINT_ISC1_VAL_0x00_gc = (0x00<<2), /* The low level of INTn generates an interrupt request. */
    EXINT_ISC1_VAL_0x01_gc = (0x01<<2), /* Any edge of INTn generates asynchronously an interrupt request. */
    EXINT_ISC1_VAL_0x02_gc = (0x02<<2), /* The falling edge of INTn generates asynchronously an interrupt request. */
    EXINT_ISC1_VAL_0x03_gc = (0x03<<2), /* The rising edge of INTn generates asynchronously an interrupt request. */
} EXINT_ISC1_t;

/* External Interrupt 0 Sense Control Bit */
typedef enum EXINT_ISC0_enum
{
    EXINT_ISC0_VAL_0x00_gc = (0x00), /* The low level of INTn generates an interrupt request. */
    EXINT_ISC0_VAL_0x01_gc = (0x01), /* Any edge of INTn generates asynchronously an interrupt request. */
    EXINT_ISC0_VAL_0x02_gc = (0x02), /* The falling edge of INTn generates asynchronously an interrupt request. */
    EXINT_ISC0_VAL_0x03_gc = (0x03), /* The rising edge of INTn generates asynchronously an interrupt request. */
} EXINT_ISC0_t;

/* External Interrupt 7 Sense Control Bit */
typedef enum EXINT_ISC7_enum
{
    EXINT_ISC7_VAL_0x00_gc = (0x00<<6), /* The low level of INTn generates an interrupt request. */
    EXINT_ISC7_VAL_0x01_gc = (0x01<<6), /* Any edge of INTn generates asynchronously an interrupt request. */
    EXINT_ISC7_VAL_0x02_gc = (0x02<<6), /* The falling edge of INTn generates asynchronously an interrupt request. */
    EXINT_ISC7_VAL_0x03_gc = (0x03<<6), /* The rising edge of INTn generates asynchronously an interrupt request. */
} EXINT_ISC7_t;

/* External Interrupt 6 Sense Control Bit */
typedef enum EXINT_ISC6_enum
{
    EXINT_ISC6_VAL_0x00_gc = (0x00<<4), /* The low level of INTn generates an interrupt request. */
    EXINT_ISC6_VAL_0x01_gc = (0x01<<4), /* Any edge of INTn generates asynchronously an interrupt request. */
    EXINT_ISC6_VAL_0x02_gc = (0x02<<4), /* The falling edge of INTn generates asynchronously an interrupt request. */
    EXINT_ISC6_VAL_0x03_gc = (0x03<<4), /* The rising edge of INTn generates asynchronously an interrupt request. */
} EXINT_ISC6_t;

/* External Interrupt 5 Sense Control Bit */
typedef enum EXINT_ISC5_enum
{
    EXINT_ISC5_VAL_0x00_gc = (0x00<<2), /* The low level of INTn generates an interrupt request. */
    EXINT_ISC5_VAL_0x01_gc = (0x01<<2), /* Any edge of INTn generates asynchronously an interrupt request. */
    EXINT_ISC5_VAL_0x02_gc = (0x02<<2), /* The falling edge of INTn generates asynchronously an interrupt request. */
    EXINT_ISC5_VAL_0x03_gc = (0x03<<2), /* The rising edge of INTn generates asynchronously an interrupt request. */
} EXINT_ISC5_t;

/* External Interrupt 4 Sense Control Bit */
typedef enum EXINT_ISC4_enum
{
    EXINT_ISC4_VAL_0x00_gc = (0x00), /* The low level of INTn generates an interrupt request. */
    EXINT_ISC4_VAL_0x01_gc = (0x01), /* Any edge of INTn generates asynchronously an interrupt request. */
    EXINT_ISC4_VAL_0x02_gc = (0x02), /* The falling edge of INTn generates asynchronously an interrupt request. */
    EXINT_ISC4_VAL_0x03_gc = (0x03), /* The rising edge of INTn generates asynchronously an interrupt request. */
} EXINT_ISC4_t;

/* External Interrupt Request Enable */
typedef enum EXINT_INT_enum
{
    EXINT_INT_VAL_0x00_gc = (0x00), /* All external pin interrupts are disabled. */
    EXINT_INT_VAL_0xff_gc = (0xFF), /* All external pin interrupts are enabled. */
} EXINT_INT_t;

/* External Interrupt Flag */
typedef enum EXINT_INTF_enum
{
    EXINT_INTF_VAL_0x00_gc = (0x00), /* No edge or logic change on INT7:0 occurred. */
    EXINT_INTF_VAL_0x01_gc = (0x01), /* A edge or logic change on INT0 occurred and triggered an interrupt request. */
    EXINT_INTF_VAL_0x02_gc = (0x02), /* ... */
    EXINT_INTF_VAL_0x80_gc = (0x80), /* A edge or logic change on INT7 occurred and triggered an interrupt request. */
} EXINT_INTF_t;

/* Reserved Bit */
#define EXINT_PCIFR_Res_gc(x) ((x<<3) & 0xF8)

/* Pin Change Interrupt Flags */
#define EXINT_PCIFR_PCIF_gc(x) (x & 0x07)

/* Reserved Bit */
#define EXINT_PCICR_Res_gc(x) ((x<<3) & 0xF8)

/* Pin Change Interrupt Enables */
#define EXINT_PCICR_PCIE_gc(x) (x & 0x07)

/*
--------------------------------------------------------------------------------
ADC - Analog-to-Digital Converter
--------------------------------------------------------------------------------
*/

typedef struct ADC_struct
{
    register8_t rsv_0x00[119]; /* RESERVED REGISTER BLOCK */
    register8_t ADCSRC;        /* The ADC Control and Status Register C */
    _REGISTER16 (ADC);         /* ADC Data Register  Bytes */
    register8_t rsv_0x79;      /* RESERVED REGISTER */
    register8_t ADCSRA;        /* The ADC Control and Status Register A */
    register8_t ADCSRB;        /* The ADC Control and Status Register B */
    register8_t ADMUX;         /* The ADC Multiplexer Selection Register */
    register8_t DIDR2;         /* Digital Input Disable Register 2 */
    register8_t DIDR0;         /* Digital Input Disable Register 0 */
} ADC_t;


/* Reference Selection Bits */
typedef enum ADC_REFS_enum
{
    ADC_REFS_VAL_0x00_gc = (0x00<<6), /* AREF, Internal reference voltage generation turned off */
    ADC_REFS_VAL_0x01_gc = (0x01<<6), /* AVDD with external capacitor at AREF pin */
    ADC_REFS_VAL_0x02_gc = (0x02<<6), /* Internal 1.5V Voltage Reference (no external capacitor at AREF pin) */
    ADC_REFS_VAL_0x03_gc = (0x03<<6), /* Internal 1.6V Voltage Reference (no external capacitor at AREF pin) */
} ADC_REFS_t;

/* ADC Left Adjust Result */
typedef enum ADC_ADLAR_enum
{
    ADC_ADLAR_CLEAR_gc = (0x00), /* ADC Left Adjust Result - CLEAR */
    ADC_ADLAR_SET_gc   = (0x20), /* ADC Left Adjust Result - SET */
} ADC_ADLAR_t;

/* Analog Channel and Gain Selection Bits */
#define ADC_ADMUX_MUX_gc(x) (x & 0x1F)

/* ADC Enable */
typedef enum ADC_ADEN_enum
{
    ADC_ADEN_CLEAR_gc = (0x00), /* ADC Enable - CLEAR */
    ADC_ADEN_SET_gc   = (0x80), /* ADC Enable - SET */
} ADC_ADEN_t;

/* ADC Start Conversion */
typedef enum ADC_ADSC_enum
{
    ADC_ADSC_CLEAR_gc = (0x00), /* ADC Start Conversion - CLEAR */
    ADC_ADSC_SET_gc   = (0x40), /* ADC Start Conversion - SET */
} ADC_ADSC_t;

/* ADC Auto Trigger Enable */
typedef enum ADC_ADATE_enum
{
    ADC_ADATE_CLEAR_gc = (0x00), /* ADC Auto Trigger Enable - CLEAR */
    ADC_ADATE_SET_gc   = (0x20), /* ADC Auto Trigger Enable - SET */
} ADC_ADATE_t;

/* ADC Interrupt Flag */
typedef enum ADC_ADIF_enum
{
    ADC_ADIF_CLEAR_gc = (0x00), /* ADC Interrupt Flag - CLEAR */
    ADC_ADIF_SET_gc   = (0x10), /* ADC Interrupt Flag - SET */
} ADC_ADIF_t;

/* ADC Interrupt Enable */
typedef enum ADC_ADIE_enum
{
    ADC_ADIE_CLEAR_gc = (0x00), /* ADC Interrupt Enable - CLEAR */
    ADC_ADIE_SET_gc   = (0x08), /* ADC Interrupt Enable - SET */
} ADC_ADIE_t;

/* ADC  Prescaler Select Bits */
typedef enum ADC_ADPS_enum
{
    ADC_ADPS_VAL_0x00_gc = (0x00), /* 2 */
    ADC_ADPS_VAL_0x01_gc = (0x01), /* 2 */
    ADC_ADPS_VAL_0x02_gc = (0x02), /* 4 */
    ADC_ADPS_VAL_0x03_gc = (0x03), /* 8 */
    ADC_ADPS_VAL_0x04_gc = (0x04), /* 16 */
    ADC_ADPS_VAL_0x05_gc = (0x05), /* 32 */
    ADC_ADPS_VAL_0x06_gc = (0x06), /* 64 */
    ADC_ADPS_VAL_0x07_gc = (0x07), /* 128 */
} ADC_ADPS_t;

/* AVDD Supply Voltage OK */
typedef enum ADC_AVDDOK_enum
{
    ADC_AVDDOK_CLEAR_gc = (0x00), /* AVDD Supply Voltage OK - CLEAR */
    ADC_AVDDOK_SET_gc   = (0x80), /* AVDD Supply Voltage OK - SET */
} ADC_AVDDOK_t;

/* Analog Comparator Multiplexer Enable */
typedef enum ADC_ACME_enum
{
    ADC_ACME_CLEAR_gc = (0x00), /* Analog Comparator Multiplexer Enable - CLEAR */
    ADC_ACME_SET_gc   = (0x40), /* Analog Comparator Multiplexer Enable - SET */
} ADC_ACME_t;

/* Reference Voltage OK */
typedef enum ADC_REFOK_enum
{
    ADC_REFOK_CLEAR_gc = (0x00), /* Reference Voltage OK - CLEAR */
    ADC_REFOK_SET_gc   = (0x20), /* Reference Voltage OK - SET */
} ADC_REFOK_t;

/* Analog Channel Change */
typedef enum ADC_ACCH_enum
{
    ADC_ACCH_CLEAR_gc = (0x00), /* Analog Channel Change - CLEAR */
    ADC_ACCH_SET_gc   = (0x10), /* Analog Channel Change - SET */
} ADC_ACCH_t;

/* Analog Channel and Gain Selection Bits */
typedef enum ADC_MUX5_enum
{
    ADC_MUX5_CLEAR_gc = (0x00), /* Analog Channel and Gain Selection Bits - CLEAR */
    ADC_MUX5_SET_gc   = (0x08), /* Analog Channel and Gain Selection Bits - SET */
} ADC_MUX5_t;

/* ADC Auto Trigger Source */
typedef enum ADC_ADTS_enum
{
    ADC_ADTS_VAL_0x00_gc = (0x00), /* Free Running mode */
    ADC_ADTS_VAL_0x01_gc = (0x01), /* Analog Comparator */
    ADC_ADTS_VAL_0x02_gc = (0x02), /* External Interrupt Request 0 */
    ADC_ADTS_VAL_0x03_gc = (0x03), /* Timer/Counter0 Compare Match A */
    ADC_ADTS_VAL_0x04_gc = (0x04), /* Timer/Counter0 Overflow */
    ADC_ADTS_VAL_0x05_gc = (0x05), /* Timer/Counter1 Compare Match B */
    ADC_ADTS_VAL_0x06_gc = (0x06), /* Timer/Counter1 Overflow */
    ADC_ADTS_VAL_0x07_gc = (0x07), /* Timer/Counter1 Capture Event */
} ADC_ADTS_t;

/* ADC Track-and-Hold Time */
typedef enum ADC_ADTHT_enum
{
    ADC_ADTHT_VAL_0x00_gc = (0x00<<6), /* Single ended: 1, differential 3 ADC clock cycles */
    ADC_ADTHT_VAL_0x01_gc = (0x01<<6), /* Single ended: 2, differential 5 ADC clock cycles */
    ADC_ADTHT_VAL_0x02_gc = (0x02<<6), /* Single ended: 3, differential 7 ADC clock cycles */
    ADC_ADTHT_VAL_0x03_gc = (0x03<<6), /* Single ended: 4, differential 9 ADC clock cycles */
} ADC_ADTHT_t;

/* Reserved */
typedef enum ADC_Res0_enum
{
    ADC_Res0_CLEAR_gc = (0x00), /* Reserved - CLEAR */
    ADC_Res0_SET_gc   = (0x20), /* Reserved - SET */
} ADC_Res0_t;

/* ADC Start-up Time */
typedef enum ADC_ADSUT_enum
{
    ADC_ADSUT_VAL_0x00_gc = (0x00), /* 3 ADC clock cycles */
    ADC_ADSUT_VAL_0x01_gc = (0x01), /* 7 ADC clock cycles */
    ADC_ADSUT_VAL_0x02_gc = (0x02), /* 11 ADC clock cycles */
    ADC_ADSUT_VAL_0x03_gc = (0x03), /* 15 ADC clock cycles */
    ADC_ADSUT_VAL_0x04_gc = (0x04), /* ... */
    ADC_ADSUT_VAL_0x3E_gc = (0x3E), /* 251 ADC clock cycles */
    ADC_ADSUT_VAL_0x3F_gc = (0x3F), /* 255 ADC clock cycles */
} ADC_ADSUT_t;

/* Reserved Bits */
typedef enum ADC_ADC15D_enum
{
    ADC_ADC15D_CLEAR_gc = (0x00), /* Reserved Bits - CLEAR */
    ADC_ADC15D_SET_gc   = (0x80), /* Reserved Bits - SET */
} ADC_ADC15D_t;

/* Reserved Bits */
typedef enum ADC_ADC14D_enum
{
    ADC_ADC14D_CLEAR_gc = (0x00), /* Reserved Bits - CLEAR */
    ADC_ADC14D_SET_gc   = (0x40), /* Reserved Bits - SET */
} ADC_ADC14D_t;

/* Reserved Bits */
typedef enum ADC_ADC13D_enum
{
    ADC_ADC13D_CLEAR_gc = (0x00), /* Reserved Bits - CLEAR */
    ADC_ADC13D_SET_gc   = (0x20), /* Reserved Bits - SET */
} ADC_ADC13D_t;

/* Reserved Bits */
typedef enum ADC_ADC12D_enum
{
    ADC_ADC12D_CLEAR_gc = (0x00), /* Reserved Bits - CLEAR */
    ADC_ADC12D_SET_gc   = (0x10), /* Reserved Bits - SET */
} ADC_ADC12D_t;

/* Reserved Bits */
typedef enum ADC_ADC11D_enum
{
    ADC_ADC11D_CLEAR_gc = (0x00), /* Reserved Bits - CLEAR */
    ADC_ADC11D_SET_gc   = (0x08), /* Reserved Bits - SET */
} ADC_ADC11D_t;

/* Reserved Bits */
typedef enum ADC_ADC10D_enum
{
    ADC_ADC10D_CLEAR_gc = (0x00), /* Reserved Bits - CLEAR */
    ADC_ADC10D_SET_gc   = (0x04), /* Reserved Bits - SET */
} ADC_ADC10D_t;

/* Reserved Bits */
typedef enum ADC_ADC9D_enum
{
    ADC_ADC9D_CLEAR_gc = (0x00), /* Reserved Bits - CLEAR */
    ADC_ADC9D_SET_gc   = (0x02), /* Reserved Bits - SET */
} ADC_ADC9D_t;

/* Reserved Bits */
typedef enum ADC_ADC8D_enum
{
    ADC_ADC8D_CLEAR_gc = (0x00), /* Reserved Bits - CLEAR */
    ADC_ADC8D_SET_gc   = (0x01), /* Reserved Bits - SET */
} ADC_ADC8D_t;

/* Disable ADC7:0 Digital Input */
typedef enum ADC_ADC7D_enum
{
    ADC_ADC7D_CLEAR_gc = (0x00), /* Disable ADC7:0 Digital Input - CLEAR */
    ADC_ADC7D_SET_gc   = (0x80), /* Disable ADC7:0 Digital Input - SET */
} ADC_ADC7D_t;

/* Disable ADC7:0 Digital Input */
typedef enum ADC_ADC6D_enum
{
    ADC_ADC6D_CLEAR_gc = (0x00), /* Disable ADC7:0 Digital Input - CLEAR */
    ADC_ADC6D_SET_gc   = (0x40), /* Disable ADC7:0 Digital Input - SET */
} ADC_ADC6D_t;

/* Disable ADC7:0 Digital Input */
typedef enum ADC_ADC5D_enum
{
    ADC_ADC5D_CLEAR_gc = (0x00), /* Disable ADC7:0 Digital Input - CLEAR */
    ADC_ADC5D_SET_gc   = (0x20), /* Disable ADC7:0 Digital Input - SET */
} ADC_ADC5D_t;

/* Disable ADC7:0 Digital Input */
typedef enum ADC_ADC4D_enum
{
    ADC_ADC4D_CLEAR_gc = (0x00), /* Disable ADC7:0 Digital Input - CLEAR */
    ADC_ADC4D_SET_gc   = (0x10), /* Disable ADC7:0 Digital Input - SET */
} ADC_ADC4D_t;

/* Disable ADC7:0 Digital Input */
typedef enum ADC_ADC3D_enum
{
    ADC_ADC3D_CLEAR_gc = (0x00), /* Disable ADC7:0 Digital Input - CLEAR */
    ADC_ADC3D_SET_gc   = (0x08), /* Disable ADC7:0 Digital Input - SET */
} ADC_ADC3D_t;

/* Disable ADC7:0 Digital Input */
typedef enum ADC_ADC2D_enum
{
    ADC_ADC2D_CLEAR_gc = (0x00), /* Disable ADC7:0 Digital Input - CLEAR */
    ADC_ADC2D_SET_gc   = (0x04), /* Disable ADC7:0 Digital Input - SET */
} ADC_ADC2D_t;

/* Disable ADC7:0 Digital Input */
typedef enum ADC_ADC1D_enum
{
    ADC_ADC1D_CLEAR_gc = (0x00), /* Disable ADC7:0 Digital Input - CLEAR */
    ADC_ADC1D_SET_gc   = (0x02), /* Disable ADC7:0 Digital Input - SET */
} ADC_ADC1D_t;

/* Disable ADC7:0 Digital Input */
typedef enum ADC_ADC0D_enum
{
    ADC_ADC0D_CLEAR_gc = (0x00), /* Disable ADC7:0 Digital Input - CLEAR */
    ADC_ADC0D_SET_gc   = (0x01), /* Disable ADC7:0 Digital Input - SET */
} ADC_ADC0D_t;

/*
--------------------------------------------------------------------------------
BOOT_LOAD - Bootloader
--------------------------------------------------------------------------------
*/

typedef struct BOOT_LOAD_struct
{
    register8_t rsv_0x00[87]; /* RESERVED REGISTER BLOCK */
    register8_t SPMCSR;       /* Store Program Memory Control Register */
} BOOT_LOAD_t;


/* SPM Interrupt Enable */
typedef enum BOOT_LOAD_SPMIE_enum
{
    BOOT_LOAD_SPMIE_CLEAR_gc = (0x00), /* SPM Interrupt Enable - CLEAR */
    BOOT_LOAD_SPMIE_SET_gc   = (0x80), /* SPM Interrupt Enable - SET */
} BOOT_LOAD_SPMIE_t;

/* Read While Write Section Busy */
typedef enum BOOT_LOAD_RWWSB_enum
{
    BOOT_LOAD_RWWSB_CLEAR_gc = (0x00), /* Read While Write Section Busy - CLEAR */
    BOOT_LOAD_RWWSB_SET_gc   = (0x40), /* Read While Write Section Busy - SET */
} BOOT_LOAD_RWWSB_t;

/* Signature Row Read */
typedef enum BOOT_LOAD_SIGRD_enum
{
    BOOT_LOAD_SIGRD_CLEAR_gc = (0x00), /* Signature Row Read - CLEAR */
    BOOT_LOAD_SIGRD_SET_gc   = (0x20), /* Signature Row Read - SET */
} BOOT_LOAD_SIGRD_t;

/* Read While Write Section Read Enable */
typedef enum BOOT_LOAD_RWWSRE_enum
{
    BOOT_LOAD_RWWSRE_CLEAR_gc = (0x00), /* Read While Write Section Read Enable - CLEAR */
    BOOT_LOAD_RWWSRE_SET_gc   = (0x10), /* Read While Write Section Read Enable - SET */
} BOOT_LOAD_RWWSRE_t;

/* Boot Lock Bit Set */
typedef enum BOOT_LOAD_BLBSET_enum
{
    BOOT_LOAD_BLBSET_CLEAR_gc = (0x00), /* Boot Lock Bit Set - CLEAR */
    BOOT_LOAD_BLBSET_SET_gc   = (0x08), /* Boot Lock Bit Set - SET */
} BOOT_LOAD_BLBSET_t;

/* Page Write */
typedef enum BOOT_LOAD_PGWRT_enum
{
    BOOT_LOAD_PGWRT_CLEAR_gc = (0x00), /* Page Write - CLEAR */
    BOOT_LOAD_PGWRT_SET_gc   = (0x04), /* Page Write - SET */
} BOOT_LOAD_PGWRT_t;

/* Page Erase */
typedef enum BOOT_LOAD_PGERS_enum
{
    BOOT_LOAD_PGERS_CLEAR_gc = (0x00), /* Page Erase - CLEAR */
    BOOT_LOAD_PGERS_SET_gc   = (0x02), /* Page Erase - SET */
} BOOT_LOAD_PGERS_t;

/* Store Program Memory Enable */
typedef enum BOOT_LOAD_SPMEN_enum
{
    BOOT_LOAD_SPMEN_CLEAR_gc = (0x00), /* Store Program Memory Enable - CLEAR */
    BOOT_LOAD_SPMEN_SET_gc   = (0x01), /* Store Program Memory Enable - SET */
} BOOT_LOAD_SPMEN_t;

/*
--------------------------------------------------------------------------------
CPU - CPU Registers
--------------------------------------------------------------------------------
*/

typedef struct CPU_struct
{
    register8_t rsv_0x00[62]; /* RESERVED REGISTER BLOCK */
    register8_t GPIOR0;       /* General Purpose IO Register 0 */
    register8_t rsv_0x3F[11]; /* RESERVED REGISTER BLOCK */
    register8_t GPIOR1;       /* General Purpose IO Register 1 */
    register8_t GPIOR2;       /* General Purpose I/O Register 2 */
    register8_t rsv_0x4C[7];  /* RESERVED REGISTER BLOCK */
    register8_t SMCR;         /* Sleep Mode Control Register */
    register8_t MCUSR;        /* MCU Status Register */
    register8_t MCUCR;        /* MCU Control Register */
    register8_t rsv_0x56[5];  /* RESERVED REGISTER BLOCK */
    register8_t RAMPZ;        /* Extended Z-pointer Register for ELPM/SPM */
    register8_t rsv_0x5C;     /* RESERVED REGISTER */
    _REGISTER16 (SP);         /* Stack Pointer  */
    register8_t rsv_0x5E;     /* RESERVED REGISTER */
    register8_t SREG;         /* Status Register */
    register8_t rsv_0x60;     /* RESERVED REGISTER */
    register8_t CLKPR;        /* Clock Prescale Register */
    register8_t rsv_0x62;     /* RESERVED REGISTER */
    register8_t PRR2;         /* Power Reduction Register 2 */
    register8_t PRR0;         /* Power Reduction Register0 */
    register8_t PRR1;         /* Power Reduction Register 1 */
    register8_t OSCCAL;       /* Oscillator Calibration Value */
} CPU_t;


/* Global Interrupt Enable */
typedef enum CPU_I_enum
{
    CPU_I_CLEAR_gc = (0x00), /* Global Interrupt Enable - CLEAR */
    CPU_I_SET_gc   = (0x80), /* Global Interrupt Enable - SET */
} CPU_I_t;

/* Bit Copy Storage */
typedef enum CPU_T_enum
{
    CPU_T_CLEAR_gc = (0x00), /* Bit Copy Storage - CLEAR */
    CPU_T_SET_gc   = (0x40), /* Bit Copy Storage - SET */
} CPU_T_t;

/* Half Carry Flag */
typedef enum CPU_H_enum
{
    CPU_H_CLEAR_gc = (0x00), /* Half Carry Flag - CLEAR */
    CPU_H_SET_gc   = (0x20), /* Half Carry Flag - SET */
} CPU_H_t;

/* Sign Bit */
typedef enum CPU_S_enum
{
    CPU_S_CLEAR_gc = (0x00), /* Sign Bit - CLEAR */
    CPU_S_SET_gc   = (0x10), /* Sign Bit - SET */
} CPU_S_t;

/* Two's Complement Overflow Flag */
typedef enum CPU_V_enum
{
    CPU_V_CLEAR_gc = (0x00), /* Two's Complement Overflow Flag - CLEAR */
    CPU_V_SET_gc   = (0x08), /* Two's Complement Overflow Flag - SET */
} CPU_V_t;

/* Negative Flag */
typedef enum CPU_N_enum
{
    CPU_N_CLEAR_gc = (0x00), /* Negative Flag - CLEAR */
    CPU_N_SET_gc   = (0x04), /* Negative Flag - SET */
} CPU_N_t;

/* Zero Flag */
typedef enum CPU_Z_enum
{
    CPU_Z_CLEAR_gc = (0x00), /* Zero Flag - CLEAR */
    CPU_Z_SET_gc   = (0x02), /* Zero Flag - SET */
} CPU_Z_t;

/* Carry Flag */
typedef enum CPU_C_enum
{
    CPU_C_CLEAR_gc = (0x00), /* Carry Flag - CLEAR */
    CPU_C_SET_gc   = (0x01), /* Carry Flag - SET */
} CPU_C_t;

/* JTAG Interface Disable */
typedef enum CPU_JTD_enum
{
    CPU_JTD_CLEAR_gc = (0x00), /* JTAG Interface Disable - CLEAR */
    CPU_JTD_SET_gc   = (0x80), /* JTAG Interface Disable - SET */
} CPU_JTD_t;

/* Reserved */
#define CPU_MCUCR_Res_gc(x) ((x<<5) & 0x60)

/* Pull-up Disable */
typedef enum CPU_PUD_enum
{
    CPU_PUD_CLEAR_gc = (0x00), /* Pull-up Disable - CLEAR */
    CPU_PUD_SET_gc   = (0x10), /* Pull-up Disable - SET */
} CPU_PUD_t;

/* Interrupt Vector Select */
typedef enum CPU_IVSEL_enum
{
    CPU_IVSEL_CLEAR_gc = (0x00), /* Interrupt Vector Select - CLEAR */
    CPU_IVSEL_SET_gc   = (0x02), /* Interrupt Vector Select - SET */
} CPU_IVSEL_t;

/* Interrupt Vector Change Enable */
typedef enum CPU_IVCE_enum
{
    CPU_IVCE_CLEAR_gc = (0x00), /* Interrupt Vector Change Enable - CLEAR */
    CPU_IVCE_SET_gc   = (0x01), /* Interrupt Vector Change Enable - SET */
} CPU_IVCE_t;

/* Reserved */
#define CPU_MCUSR_Res_gc(x) ((x<<5) & 0xE0)

/* JTAG Reset Flag */
typedef enum CPU_JTRF_enum
{
    CPU_JTRF_CLEAR_gc = (0x00), /* JTAG Reset Flag - CLEAR */
    CPU_JTRF_SET_gc   = (0x10), /* JTAG Reset Flag - SET */
} CPU_JTRF_t;

/* Watchdog Reset Flag */
typedef enum CPU_WDRF_enum
{
    CPU_WDRF_CLEAR_gc = (0x00), /* Watchdog Reset Flag - CLEAR */
    CPU_WDRF_SET_gc   = (0x08), /* Watchdog Reset Flag - SET */
} CPU_WDRF_t;

/* Brown-out Reset Flag */
typedef enum CPU_BORF_enum
{
    CPU_BORF_CLEAR_gc = (0x00), /* Brown-out Reset Flag - CLEAR */
    CPU_BORF_SET_gc   = (0x04), /* Brown-out Reset Flag - SET */
} CPU_BORF_t;

/* External Reset Flag */
typedef enum CPU_EXTRF_enum
{
    CPU_EXTRF_CLEAR_gc = (0x00), /* External Reset Flag - CLEAR */
    CPU_EXTRF_SET_gc   = (0x02), /* External Reset Flag - SET */
} CPU_EXTRF_t;

/* Power-on Reset Flag */
typedef enum CPU_PORF_enum
{
    CPU_PORF_CLEAR_gc = (0x00), /* Power-on Reset Flag - CLEAR */
    CPU_PORF_SET_gc   = (0x01), /* Power-on Reset Flag - SET */
} CPU_PORF_t;

/* Oscillator Calibration Tuning Value */
typedef enum CPU_CAL_enum
{
    CPU_CAL_VAL_0x00_gc = (0x00), /* Calibration value for lowest oscillator frequency */
    CPU_CAL_VAL_0x7f_gc = (0x7F), /* End value of low frequency range calibration */
    CPU_CAL_VAL_0x80_gc = (0x80), /* Start value of high frequency range calibration */
    CPU_CAL_VAL_0xff_gc = (0xFF), /* Calibration value for highest oscillator frequency */
} CPU_CAL_t;

/* Clock Prescaler Change Enable */
typedef enum CPU_CLKPCE_enum
{
    CPU_CLKPCE_CLEAR_gc = (0x00), /* Clock Prescaler Change Enable - CLEAR */
    CPU_CLKPCE_SET_gc   = (0x80), /* Clock Prescaler Change Enable - SET */
} CPU_CLKPCE_t;

/* Reserved */
#define CPU_CLKPR_Res_gc(x) ((x<<4) & 0x70)

/* Clock Prescaler Select Bits */
typedef enum CPU_CLKPS_enum
{
    CPU_CLKPS_VAL_0x0_gc = (0x00), /* Division factor 1   / RC-Oscillator   2 */
    CPU_CLKPS_VAL_0x1_gc = (0x01), /* Division factor 2   / RC-Oscillator   4 */
    CPU_CLKPS_VAL_0x2_gc = (0x02), /* Division factor 4   / RC-Oscillator   8 */
    CPU_CLKPS_VAL_0x3_gc = (0x03), /* Division factor 8   / RC-Oscillator  16 */
    CPU_CLKPS_VAL_0x4_gc = (0x04), /* Division factor 16  / RC-Oscillator  32 */
    CPU_CLKPS_VAL_0x5_gc = (0x05), /* Division factor 32  / RC-Oscillator  64 */
    CPU_CLKPS_VAL_0x6_gc = (0x06), /* Division factor 64  / RC-Oscillator 128 */
    CPU_CLKPS_VAL_0x7_gc = (0x07), /* Division factor 128 / RC-Oscillator 256 */
    CPU_CLKPS_VAL_0x8_gc = (0x08), /* Division factor 256 / RC-Oscillator 512 */
    CPU_CLKPS_VAL_0x9_gc = (0x09), /* Reserved */
    CPU_CLKPS_VAL_0xA_gc = (0x0A), /* Reserved */
    CPU_CLKPS_VAL_0xB_gc = (0x0B), /* Reserved */
    CPU_CLKPS_VAL_0xC_gc = (0x0C), /* Reserved */
    CPU_CLKPS_VAL_0xD_gc = (0x0D), /* Reserved */
    CPU_CLKPS_VAL_0xE_gc = (0x0E), /* Reserved */
    CPU_CLKPS_VAL_0xF_gc = (0x0F), /* Division factor 1 only permitted for RC-Oscillator. Flash and EEPROM programming is not allowed. */
} CPU_CLKPS_t;

/* Reserved */
#define CPU_SMCR_Res_gc(x) ((x<<4) & 0xF0)

/* Sleep Mode Select bits */
typedef enum CPU_SM_enum
{
    CPU_SM_IDLE_gc     = (0x00<<1), /* Idle */
    CPU_SM_ADC_gc      = (0x01<<1), /* ADC Noise Reduction (If Available) */
    CPU_SM_PDOWN_gc    = (0x02<<1), /* Power Down */
    CPU_SM_PSAVE_gc    = (0x03<<1), /* Power Save */
    CPU_SM_VAL_0x04_gc = (0x04<<1), /* Reserved */
    CPU_SM_VAL_0x05_gc = (0x05<<1), /* Reserved */
    CPU_SM_STDBY_gc    = (0x06<<1), /* Standby */
    CPU_SM_ESTDBY_gc   = (0x07<<1), /* Extended Standby */
} CPU_SM_t;

/* Sleep Enable */
typedef enum CPU_SE_enum
{
    CPU_SE_CLEAR_gc = (0x00), /* Sleep Enable - CLEAR */
    CPU_SE_SET_gc   = (0x01), /* Sleep Enable - SET */
} CPU_SE_t;

/* Reserved */
#define CPU_RAMPZ_Res_gc(x) ((x<<1) & 0xFE)

/* Extended Z-Pointer Value */
typedef enum CPU_RAMPZ0_enum
{
    CPU_RAMPZ0_VAL_0_gc = (0x00), /* Default value of Z-pointer MSB's. */
} CPU_RAMPZ0_t;

/* General Purpose I/O Register 0 Value */
typedef enum CPU_GPIOR07_enum
{
    CPU_GPIOR07_CLEAR_gc = (0x00), /* General Purpose I/O Register 0 Value - CLEAR */
    CPU_GPIOR07_SET_gc   = (0x80), /* General Purpose I/O Register 0 Value - SET */
} CPU_GPIOR07_t;

/* General Purpose I/O Register 0 Value */
typedef enum CPU_GPIOR06_enum
{
    CPU_GPIOR06_CLEAR_gc = (0x00), /* General Purpose I/O Register 0 Value - CLEAR */
    CPU_GPIOR06_SET_gc   = (0x40), /* General Purpose I/O Register 0 Value - SET */
} CPU_GPIOR06_t;

/* General Purpose I/O Register 0 Value */
typedef enum CPU_GPIOR05_enum
{
    CPU_GPIOR05_CLEAR_gc = (0x00), /* General Purpose I/O Register 0 Value - CLEAR */
    CPU_GPIOR05_SET_gc   = (0x20), /* General Purpose I/O Register 0 Value - SET */
} CPU_GPIOR05_t;

/* General Purpose I/O Register 0 Value */
typedef enum CPU_GPIOR04_enum
{
    CPU_GPIOR04_CLEAR_gc = (0x00), /* General Purpose I/O Register 0 Value - CLEAR */
    CPU_GPIOR04_SET_gc   = (0x10), /* General Purpose I/O Register 0 Value - SET */
} CPU_GPIOR04_t;

/* General Purpose I/O Register 0 Value */
typedef enum CPU_GPIOR03_enum
{
    CPU_GPIOR03_CLEAR_gc = (0x00), /* General Purpose I/O Register 0 Value - CLEAR */
    CPU_GPIOR03_SET_gc   = (0x08), /* General Purpose I/O Register 0 Value - SET */
} CPU_GPIOR03_t;

/* General Purpose I/O Register 0 Value */
typedef enum CPU_GPIOR02_enum
{
    CPU_GPIOR02_CLEAR_gc = (0x00), /* General Purpose I/O Register 0 Value - CLEAR */
    CPU_GPIOR02_SET_gc   = (0x04), /* General Purpose I/O Register 0 Value - SET */
} CPU_GPIOR02_t;

/* General Purpose I/O Register 0 Value */
typedef enum CPU_GPIOR01_enum
{
    CPU_GPIOR01_CLEAR_gc = (0x00), /* General Purpose I/O Register 0 Value - CLEAR */
    CPU_GPIOR01_SET_gc   = (0x02), /* General Purpose I/O Register 0 Value - SET */
} CPU_GPIOR01_t;

/* General Purpose I/O Register 0 Value */
typedef enum CPU_GPIOR00_enum
{
    CPU_GPIOR00_CLEAR_gc = (0x00), /* General Purpose I/O Register 0 Value - CLEAR */
    CPU_GPIOR00_SET_gc   = (0x01), /* General Purpose I/O Register 0 Value - SET */
} CPU_GPIOR00_t;

/* Power Reduction SRAM3 */
typedef enum CPU_PRRAM3_enum
{
    CPU_PRRAM3_CLEAR_gc = (0x00), /* Power Reduction SRAM3 - CLEAR */
    CPU_PRRAM3_SET_gc   = (0x08), /* Power Reduction SRAM3 - SET */
} CPU_PRRAM3_t;

/* Power Reduction SRAM2 */
typedef enum CPU_PRRAM2_enum
{
    CPU_PRRAM2_CLEAR_gc = (0x00), /* Power Reduction SRAM2 - CLEAR */
    CPU_PRRAM2_SET_gc   = (0x04), /* Power Reduction SRAM2 - SET */
} CPU_PRRAM2_t;

/* Power Reduction SRAM1 */
typedef enum CPU_PRRAM1_enum
{
    CPU_PRRAM1_CLEAR_gc = (0x00), /* Power Reduction SRAM1 - CLEAR */
    CPU_PRRAM1_SET_gc   = (0x02), /* Power Reduction SRAM1 - SET */
} CPU_PRRAM1_t;

/* Power Reduction SRAM0 */
typedef enum CPU_PRRAM0_enum
{
    CPU_PRRAM0_CLEAR_gc = (0x00), /* Power Reduction SRAM0 - CLEAR */
    CPU_PRRAM0_SET_gc   = (0x01), /* Power Reduction SRAM0 - SET */
} CPU_PRRAM0_t;

/* Reserved Bit */
typedef enum CPU_Res_enum
{
    CPU_Res_CLEAR_gc = (0x00), /* Reserved Bit - CLEAR */
    CPU_Res_SET_gc   = (0x80), /* Reserved Bit - SET */
} CPU_Res_t;

/* Power Reduction Transceiver */
typedef enum CPU_PRTRX24_enum
{
    CPU_PRTRX24_CLEAR_gc = (0x00), /* Power Reduction Transceiver - CLEAR */
    CPU_PRTRX24_SET_gc   = (0x40), /* Power Reduction Transceiver - SET */
} CPU_PRTRX24_t;

/* Power Reduction Timer/Counter5 */
typedef enum CPU_PRTIM5_enum
{
    CPU_PRTIM5_CLEAR_gc = (0x00), /* Power Reduction Timer/Counter5 - CLEAR */
    CPU_PRTIM5_SET_gc   = (0x20), /* Power Reduction Timer/Counter5 - SET */
} CPU_PRTIM5_t;

/* Power Reduction Timer/Counter4 */
typedef enum CPU_PRTIM4_enum
{
    CPU_PRTIM4_CLEAR_gc = (0x00), /* Power Reduction Timer/Counter4 - CLEAR */
    CPU_PRTIM4_SET_gc   = (0x10), /* Power Reduction Timer/Counter4 - SET */
} CPU_PRTIM4_t;

/* Power Reduction Timer/Counter3 */
typedef enum CPU_PRTIM3_enum
{
    CPU_PRTIM3_CLEAR_gc = (0x00), /* Power Reduction Timer/Counter3 - CLEAR */
    CPU_PRTIM3_SET_gc   = (0x08), /* Power Reduction Timer/Counter3 - SET */
} CPU_PRTIM3_t;

/* Power Reduction USART1 */
typedef enum CPU_PRUSART1_enum
{
    CPU_PRUSART1_CLEAR_gc = (0x00), /* Power Reduction USART1 - CLEAR */
    CPU_PRUSART1_SET_gc   = (0x01), /* Power Reduction USART1 - SET */
} CPU_PRUSART1_t;

/* Power Reduction TWI */
typedef enum CPU_PRTWI_enum
{
    CPU_PRTWI_CLEAR_gc = (0x00), /* Power Reduction TWI - CLEAR */
    CPU_PRTWI_SET_gc   = (0x80), /* Power Reduction TWI - SET */
} CPU_PRTWI_t;

/* Power Reduction Timer/Counter2 */
typedef enum CPU_PRTIM2_enum
{
    CPU_PRTIM2_CLEAR_gc = (0x00), /* Power Reduction Timer/Counter2 - CLEAR */
    CPU_PRTIM2_SET_gc   = (0x40), /* Power Reduction Timer/Counter2 - SET */
} CPU_PRTIM2_t;

/* Power Reduction Timer/Counter0 */
typedef enum CPU_PRTIM0_enum
{
    CPU_PRTIM0_CLEAR_gc = (0x00), /* Power Reduction Timer/Counter0 - CLEAR */
    CPU_PRTIM0_SET_gc   = (0x20), /* Power Reduction Timer/Counter0 - SET */
} CPU_PRTIM0_t;

/* Power Reduction PGA */
typedef enum CPU_PRPGA_enum
{
    CPU_PRPGA_CLEAR_gc = (0x00), /* Power Reduction PGA - CLEAR */
    CPU_PRPGA_SET_gc   = (0x10), /* Power Reduction PGA - SET */
} CPU_PRPGA_t;

/* Power Reduction Timer/Counter1 */
typedef enum CPU_PRTIM1_enum
{
    CPU_PRTIM1_CLEAR_gc = (0x00), /* Power Reduction Timer/Counter1 - CLEAR */
    CPU_PRTIM1_SET_gc   = (0x08), /* Power Reduction Timer/Counter1 - SET */
} CPU_PRTIM1_t;

/* Power Reduction Serial Peripheral Interface */
typedef enum CPU_PRSPI_enum
{
    CPU_PRSPI_CLEAR_gc = (0x00), /* Power Reduction Serial Peripheral Interface - CLEAR */
    CPU_PRSPI_SET_gc   = (0x04), /* Power Reduction Serial Peripheral Interface - SET */
} CPU_PRSPI_t;

/* Power Reduction USART */
typedef enum CPU_PRUSART0_enum
{
    CPU_PRUSART0_CLEAR_gc = (0x00), /* Power Reduction USART - CLEAR */
    CPU_PRUSART0_SET_gc   = (0x02), /* Power Reduction USART - SET */
} CPU_PRUSART0_t;

/* Power Reduction ADC */
typedef enum CPU_PRADC_enum
{
    CPU_PRADC_CLEAR_gc = (0x00), /* Power Reduction ADC - CLEAR */
    CPU_PRADC_SET_gc   = (0x01), /* Power Reduction ADC - SET */
} CPU_PRADC_t;

/*
--------------------------------------------------------------------------------
FLASH - FLASH Controller
--------------------------------------------------------------------------------
*/

typedef struct FLASH_struct
{
    register8_t rsv_0x00[103]; /* RESERVED REGISTER BLOCK */
    register8_t BGCR;          /* Reference Voltage Calibration Register */
    register8_t rsv_0x68[13];  /* RESERVED REGISTER BLOCK */
    register8_t NEMCR;         /* Flash Extended-Mode Control-Register */
} FLASH_t;


/* Enable Extended Address Mode for Extra Rows */
typedef enum FLASH_ENEAM_enum
{
    FLASH_ENEAM_CLEAR_gc = (0x00), /* Enable Extended Address Mode for Extra Rows - CLEAR */
    FLASH_ENEAM_SET_gc   = (0x40), /* Enable Extended Address Mode for Extra Rows - SET */
} FLASH_ENEAM_t;

/* Address for Extended Address Mode of Extra Rows */
typedef enum FLASH_AEAM_enum
{
    FLASH_AEAM_VAL_0_gc = (0x00<<4), /* Factory Row */
    FLASH_AEAM_VAL_1_gc = (0x01<<4), /* User Row 1 */
    FLASH_AEAM_VAL_2_gc = (0x02<<4), /* User Row 2 */
    FLASH_AEAM_VAL_3_gc = (0x03<<4), /* User Row 3 */
} FLASH_AEAM_t;

/* Reserved Bit */
typedef enum FLASH_Res_enum
{
    FLASH_Res_CLEAR_gc = (0x00), /* Reserved Bit - CLEAR */
    FLASH_Res_SET_gc   = (0x80), /* Reserved Bit - SET */
} FLASH_Res_t;

/* Fine Calibration Bits */
typedef enum FLASH_BGCAL_FINE_enum
{
    FLASH_BGCAL_FINE_VAL_0_gc  = (0x00<<3), /* Center value */
    FLASH_BGCAL_FINE_VAL_1_gc  = (0x01<<3), /* Voltage step up */
    FLASH_BGCAL_FINE_VAL_8_gc  = (0x08<<3), /* Voltage step down */
    FLASH_BGCAL_FINE_VAL_7_gc  = (0x07<<3), /* Setting for highest voltage */
    FLASH_BGCAL_FINE_VAL_15_gc = (0x0F<<3), /* Setting for lowest voltage */
} FLASH_BGCAL_FINE_t;

/* Coarse Calibration Bits */
typedef enum FLASH_BGCAL_enum
{
    FLASH_BGCAL_VAL_4_gc = (0x04), /* Center value */
    FLASH_BGCAL_VAL_3_gc = (0x03), /* Voltage step up */
    FLASH_BGCAL_VAL_5_gc = (0x05), /* Voltage step down */
    FLASH_BGCAL_VAL_0_gc = (0x00), /* Setting for highest voltage */
    FLASH_BGCAL_VAL_7_gc = (0x07), /* Setting for lowest voltage */
} FLASH_BGCAL_t;

/*
--------------------------------------------------------------------------------
PWRCTRL - Power Controller
--------------------------------------------------------------------------------
*/

typedef struct PWRCTRL_struct
{
    register8_t rsv_0x00[85];  /* RESERVED REGISTER BLOCK */
    register8_t MCUCR;         /* MCU Control Register */
    register8_t rsv_0x56[217]; /* RESERVED REGISTER BLOCK */
    register8_t LLCR;          /* Low Leakage Voltage Regulator Control Register */
    register8_t LLDRL;         /* Low Leakage Voltage Regulator Data Register (Low-Byte) */
    register8_t LLDRH;         /* Low Leakage Voltage Regulator Data Register (High-Byte) */
    register8_t DRTRAM3;       /* Data Retention Configuration Register #3 */
    register8_t DRTRAM2;       /* Data Retention Configuration Register #2 */
    register8_t DRTRAM1;       /* Data Retention Configuration Register #1 */
    register8_t DRTRAM0;       /* Data Retention Configuration Register #0 */
    register8_t DPDS0;         /* Port Driver Strength Register 0 */
    register8_t DPDS1;         /* Port Driver Strength Register 1 */
    register8_t rsv_0x138;     /* RESERVED REGISTER */
    register8_t TRXPR;         /* Transceiver Pin Register */
} PWRCTRL_t;


/* Reserved */
#define PWRCTRL_TRXPR_Res_gc(x) ((x<<4) & 0xF0)

/* Multi-purpose Transceiver Control Bit */
typedef enum PWRCTRL_SLPTR_enum
{
    PWRCTRL_SLPTR_CLEAR_gc = (0x00), /* Multi-purpose Transceiver Control Bit - CLEAR */
    PWRCTRL_SLPTR_SET_gc   = (0x02), /* Multi-purpose Transceiver Control Bit - SET */
} PWRCTRL_SLPTR_t;

/* Force Transceiver Reset */
typedef enum PWRCTRL_TRXRST_enum
{
    PWRCTRL_TRXRST_CLEAR_gc = (0x00), /* Force Transceiver Reset - CLEAR */
    PWRCTRL_TRXRST_SET_gc   = (0x01), /* Force Transceiver Reset - SET */
} PWRCTRL_TRXRST_t;

/* Reserved */
#define PWRCTRL_DRTRAM0_Res_gc(x) ((x<<6) & 0xC0)

/* DRT Switch OK */
typedef enum PWRCTRL_DRTSWOK_enum
{
    PWRCTRL_DRTSWOK_CLEAR_gc = (0x00), /* DRT Switch OK - CLEAR */
    PWRCTRL_DRTSWOK_SET_gc   = (0x20), /* DRT Switch OK - SET */
} PWRCTRL_DRTSWOK_t;

/* Enable SRAM Data Retention */
typedef enum PWRCTRL_ENDRT_enum
{
    PWRCTRL_ENDRT_CLEAR_gc = (0x00), /* Enable SRAM Data Retention - CLEAR */
    PWRCTRL_ENDRT_SET_gc   = (0x10), /* Enable SRAM Data Retention - SET */
} PWRCTRL_ENDRT_t;

/* Reserved */
#define PWRCTRL_DRTRAM1_Res_gc(x) ((x<<6) & 0xC0)

/* DRT Switch OK */
typedef enum PWRCTRL_DRTSWOK_enum
{
    PWRCTRL_DRTSWOK_CLEAR_gc = (0x00), /* DRT Switch OK - CLEAR */
    PWRCTRL_DRTSWOK_SET_gc   = (0x20), /* DRT Switch OK - SET */
} PWRCTRL_DRTSWOK_t;

/* Enable SRAM Data Retention */
typedef enum PWRCTRL_ENDRT_enum
{
    PWRCTRL_ENDRT_CLEAR_gc = (0x00), /* Enable SRAM Data Retention - CLEAR */
    PWRCTRL_ENDRT_SET_gc   = (0x10), /* Enable SRAM Data Retention - SET */
} PWRCTRL_ENDRT_t;

/* Reserved Bit */
typedef enum PWRCTRL_Res_enum
{
    PWRCTRL_Res_CLEAR_gc = (0x00), /* Reserved Bit - CLEAR */
    PWRCTRL_Res_SET_gc   = (0x40), /* Reserved Bit - SET */
} PWRCTRL_Res_t;

/* DRT Switch OK */
typedef enum PWRCTRL_DRTSWOK_enum
{
    PWRCTRL_DRTSWOK_CLEAR_gc = (0x00), /* DRT Switch OK - CLEAR */
    PWRCTRL_DRTSWOK_SET_gc   = (0x20), /* DRT Switch OK - SET */
} PWRCTRL_DRTSWOK_t;

/* Enable SRAM Data Retention */
typedef enum PWRCTRL_ENDRT_enum
{
    PWRCTRL_ENDRT_CLEAR_gc = (0x00), /* Enable SRAM Data Retention - CLEAR */
    PWRCTRL_ENDRT_SET_gc   = (0x10), /* Enable SRAM Data Retention - SET */
} PWRCTRL_ENDRT_t;

/* Reserved */
#define PWRCTRL_DRTRAM3_Res_gc(x) ((x<<6) & 0xC0)

/* DRT Switch OK */
typedef enum PWRCTRL_DRTSWOK_enum
{
    PWRCTRL_DRTSWOK_CLEAR_gc = (0x00), /* DRT Switch OK - CLEAR */
    PWRCTRL_DRTSWOK_SET_gc   = (0x20), /* DRT Switch OK - SET */
} PWRCTRL_DRTSWOK_t;

/* Enable SRAM Data Retention */
typedef enum PWRCTRL_ENDRT_enum
{
    PWRCTRL_ENDRT_CLEAR_gc = (0x00), /* Enable SRAM Data Retention - CLEAR */
    PWRCTRL_ENDRT_SET_gc   = (0x10), /* Enable SRAM Data Retention - SET */
} PWRCTRL_ENDRT_t;

/* Reserved */
#define PWRCTRL_LLDRL_Res_gc(x) ((x<<4) & 0xF0)

/* Low-Byte Data Register Bits */
typedef enum PWRCTRL_LLDRL_enum
{
    PWRCTRL_LLDRL_VAL_0x00_gc = (0x00), /* Calibration limit for fast process corner/high output voltage */
    PWRCTRL_LLDRL_VAL_0x08_gc = (0x08), /* Calibration limit for slow process corner/low output voltage */
} PWRCTRL_LLDRL_t;

/* Reserved */
#define PWRCTRL_LLDRH_Res_gc(x) ((x<<5) & 0xE0)

/* High-Byte Data Register Bits */
typedef enum PWRCTRL_LLDRH_enum
{
    PWRCTRL_LLDRH_VAL_0x00_gc = (0x00), /* Calibration limit for fast process corner/high output voltage */
    PWRCTRL_LLDRH_VAL_0x10_gc = (0x10), /* Calibration limit for slow process corner/low output voltage */
} PWRCTRL_LLDRH_t;

/* Reserved Bit */
#define PWRCTRL_LLCR_Res_gc(x) ((x<<6) & 0xC0)

/* Calibration Done */
typedef enum PWRCTRL_LLDONE_enum
{
    PWRCTRL_LLDONE_CLEAR_gc = (0x00), /* Calibration Done - CLEAR */
    PWRCTRL_LLDONE_SET_gc   = (0x20), /* Calibration Done - SET */
} PWRCTRL_LLDONE_t;

/* Comparator Output */
typedef enum PWRCTRL_LLCOMP_enum
{
    PWRCTRL_LLCOMP_CLEAR_gc = (0x00), /* Comparator Output - CLEAR */
    PWRCTRL_LLCOMP_SET_gc   = (0x10), /* Comparator Output - SET */
} PWRCTRL_LLCOMP_t;

/* Calibration Active */
typedef enum PWRCTRL_LLCAL_enum
{
    PWRCTRL_LLCAL_CLEAR_gc = (0x00), /* Calibration Active - CLEAR */
    PWRCTRL_LLCAL_SET_gc   = (0x08), /* Calibration Active - SET */
} PWRCTRL_LLCAL_t;

/* Temperature Coefficient of Current Source */
typedef enum PWRCTRL_LLTCO_enum
{
    PWRCTRL_LLTCO_CLEAR_gc = (0x00), /* Temperature Coefficient of Current Source - CLEAR */
    PWRCTRL_LLTCO_SET_gc   = (0x04), /* Temperature Coefficient of Current Source - SET */
} PWRCTRL_LLTCO_t;

/* Short Lower Calibration Circuit */
typedef enum PWRCTRL_LLSHORT_enum
{
    PWRCTRL_LLSHORT_CLEAR_gc = (0x00), /* Short Lower Calibration Circuit - CLEAR */
    PWRCTRL_LLSHORT_SET_gc   = (0x02), /* Short Lower Calibration Circuit - SET */
} PWRCTRL_LLSHORT_t;

/* Enable Automatic Calibration */
typedef enum PWRCTRL_LLENCAL_enum
{
    PWRCTRL_LLENCAL_CLEAR_gc = (0x00), /* Enable Automatic Calibration - CLEAR */
    PWRCTRL_LLENCAL_SET_gc   = (0x01), /* Enable Automatic Calibration - SET */
} PWRCTRL_LLENCAL_t;

/* Driver Strength Port F */
typedef enum PWRCTRL_PFDRV_enum
{
    PWRCTRL_PFDRV_PAD_IO_2MA_gc = (0x00<<6), /* 2 mA */
    PWRCTRL_PFDRV_PAD_IO_4MA_gc = (0x01<<6), /* 4 mA */
    PWRCTRL_PFDRV_PAD_IO_6MA_gc = (0x02<<6), /* 6 mA */
    PWRCTRL_PFDRV_PAD_IO_8MA_gc = (0x03<<6), /* 8 mA */
} PWRCTRL_PFDRV_t;

/* Driver Strength Port E */
typedef enum PWRCTRL_PEDRV_enum
{
    PWRCTRL_PEDRV_PAD_IO_2MA_gc = (0x00<<4), /* 2 mA */
    PWRCTRL_PEDRV_PAD_IO_4MA_gc = (0x01<<4), /* 4 mA */
    PWRCTRL_PEDRV_PAD_IO_6MA_gc = (0x02<<4), /* 6 mA */
    PWRCTRL_PEDRV_PAD_IO_8MA_gc = (0x03<<4), /* 8 mA */
} PWRCTRL_PEDRV_t;

/* Driver Strength Port D */
typedef enum PWRCTRL_PDDRV_enum
{
    PWRCTRL_PDDRV_PAD_IO_2MA_gc = (0x00<<2), /* 2 mA */
    PWRCTRL_PDDRV_PAD_IO_4MA_gc = (0x01<<2), /* 4 mA */
    PWRCTRL_PDDRV_PAD_IO_6MA_gc = (0x02<<2), /* 6 mA */
    PWRCTRL_PDDRV_PAD_IO_8MA_gc = (0x03<<2), /* 8 mA */
} PWRCTRL_PDDRV_t;

/* Driver Strength Port B */
typedef enum PWRCTRL_PBDRV_enum
{
    PWRCTRL_PBDRV_PAD_IO_2MA_gc = (0x00), /* 2 mA */
    PWRCTRL_PBDRV_PAD_IO_4MA_gc = (0x01), /* 4 mA */
    PWRCTRL_PBDRV_PAD_IO_6MA_gc = (0x02), /* 6 mA */
    PWRCTRL_PBDRV_PAD_IO_8MA_gc = (0x03), /* 8 mA */
} PWRCTRL_PBDRV_t;

/* Reserved */
#define PWRCTRL_DPDS1_Res_gc(x) ((x<<2) & 0xFC)

/* Driver Strength Port G */
typedef enum PWRCTRL_PGDRV_enum
{
    PWRCTRL_PGDRV_PAD_IO_2MA_gc = (0x00), /* 2 mA */
    PWRCTRL_PGDRV_PAD_IO_4MA_gc = (0x01), /* 4 mA */
    PWRCTRL_PGDRV_PAD_IO_6MA_gc = (0x02), /* 6 mA */
    PWRCTRL_PGDRV_PAD_IO_8MA_gc = (0x03), /* 8 mA */
} PWRCTRL_PGDRV_t;

/* Pull-up Disable */
typedef enum PWRCTRL_PUD_enum
{
    PWRCTRL_PUD_CLEAR_gc = (0x00), /* Pull-up Disable - CLEAR */
    PWRCTRL_PUD_SET_gc   = (0x10), /* Pull-up Disable - SET */
} PWRCTRL_PUD_t;
/*
================================================================================
IO Module Instances. Mapped to memory.
================================================================================
*/

#define AC         (*(AC_t *) 0x0000)         /* Analog Comparator */
#define USART0     (*(USART0_t *) 0x0000)     /* USART */
#define USART1     (*(USART1_t *) 0x0000)     /* USART */
#define TWI        (*(TWI_t *) 0x0000)        /* Two Wire Serial Interface */
#define SPI        (*(SPI_t *) 0x0000)        /* Serial Peripheral Interface */
#define USART0_SPI (*(USART0_SPI_t *) 0x0000) /* Serial Peripheral Interface */
#define USART1_SPI (*(USART1_SPI_t *) 0x0000) /* Serial Peripheral Interface */
#define PORTA      (*(PORTA_t *) 0x0000)      /* I/O Port */
#define PORTB      (*(PORTB_t *) 0x0000)      /* I/O Port */
#define PORTC      (*(PORTC_t *) 0x0000)      /* I/O Port */
#define PORTD      (*(PORTD_t *) 0x0000)      /* I/O Port */
#define PORTE      (*(PORTE_t *) 0x0000)      /* I/O Port */
#define PORTF      (*(PORTF_t *) 0x0000)      /* I/O Port */
#define PORTG      (*(PORTG_t *) 0x0000)      /* I/O Port */
#define TC0        (*(TC0_t *) 0x0000)        /* Timer/Counter, 8-bit */
#define TC2        (*(TC2_t *) 0x0000)        /* Timer/Counter, 8-bit Async */
#define WDT        (*(WDT_t *) 0x0000)        /* Watchdog Timer */
#define TC5        (*(TC5_t *) 0x0000)        /* Timer/Counter, 16-bit */
#define TC4        (*(TC4_t *) 0x0000)        /* Timer/Counter, 16-bit */
#define TC3        (*(TC3_t *) 0x0000)        /* Timer/Counter, 16-bit */
#define TC1        (*(TC1_t *) 0x0000)        /* Timer/Counter, 16-bit */
#define TRX24      (*(TRX24_t *) 0x0000)      /* Low-Power 2.4 GHz Transceiver */
#define SYMCNT     (*(SYMCNT_t *) 0x0000)     /* MAC Symbol Counter */
#define EEPROM     (*(EEPROM_t *) 0x0000)     /* EEPROM */
#define JTAG       (*(JTAG_t *) 0x0000)       /* JTAG Interface */
#define EXINT      (*(EXINT_t *) 0x0000)      /* External Interrupts */
#define ADC        (*(ADC_t *) 0x0000)        /* Analog-to-Digital Converter */
#define BOOT_LOAD  (*(BOOT_LOAD_t *) 0x0000)  /* Bootloader */
#define CPU        (*(CPU_t *) 0x0000)        /* CPU Registers */
#define FLASH      (*(FLASH_t *) 0x0000)      /* FLASH Controller */
#define PWRCTRL    (*(PWRCTRL_t *) 0x0000)    /* Power Controller */
#define FUSE       (*(FUSE_t *) 0x0000)       /* Fuses */
#define LOCKBIT    (*(LOCKBIT_t *) 0x0000)    /* Lockbits */
#else
/*
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
ASM LANGUAGE - ONLY
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/


/*
--------------------------------------------------------------------------------
FUSE - Fuses
--------------------------------------------------------------------------------
*/


/* Brown-out Detector trigger level */
#define FUSE_BODLEVEL_DISABLED_gc (0x07) /* Brown-out detection disabled */
#define FUSE_BODLEVEL_1V8_gc      (0x06) /* Brown-out detection at VCC=1.8 V */
#define FUSE_BODLEVEL_1V9_gc      (0x05) /* Brown-out detection at VCC=1.9 V */
#define FUSE_BODLEVEL_2V0_gc      (0x04) /* Brown-out detection at VCC=2.0 V */
#define FUSE_BODLEVEL_2V1_gc      (0x03) /* Brown-out detection at VCC=2.1 V */
#define FUSE_BODLEVEL_2V2_gc      (0x02) /* Brown-out detection at VCC=2.2 V */
#define FUSE_BODLEVEL_2V3_gc      (0x01) /* Brown-out detection at VCC=2.3 V */
#define FUSE_BODLEVEL_2V4_gc      (0x00) /* Brown-out detection at VCC=2.4 V */


/* On-Chip Debug Enabled */
#define FUSE_OCDEN_CLEAR_gc (0x00) /* On-Chip Debug Enabled - CLEAR */
#define FUSE_OCDEN_SET_gc   (0x80) /* On-Chip Debug Enabled - SET */


/* JTAG Interface Enabled */
#define FUSE_JTAGEN_CLEAR_gc (0x00) /* JTAG Interface Enabled - CLEAR */
#define FUSE_JTAGEN_SET_gc   (0x40) /* JTAG Interface Enabled - SET */


/* Serial program downloading (SPI) enabled */
#define FUSE_SPIEN_CLEAR_gc (0x00) /* Serial program downloading (SPI) enabled - CLEAR */
#define FUSE_SPIEN_SET_gc   (0x20) /* Serial program downloading (SPI) enabled - SET */


/* Watchdog timer always on */
#define FUSE_WDTON_CLEAR_gc (0x00) /* Watchdog timer always on - CLEAR */
#define FUSE_WDTON_SET_gc   (0x10) /* Watchdog timer always on - SET */


/* Preserve EEPROM through the Chip Erase cycle */
#define FUSE_EESAVE_CLEAR_gc (0x00) /* Preserve EEPROM through the Chip Erase cycle - CLEAR */
#define FUSE_EESAVE_SET_gc   (0x08) /* Preserve EEPROM through the Chip Erase cycle - SET */


/* Select Boot Size */
#define FUSE_BOOTSZ_512W_FE00_gc  (0x03<<1) /* Boot Flash size=512 words start address=$FE00 */
#define FUSE_BOOTSZ_1024W_FC00_gc (0x02<<1) /* Boot Flash size=1024 words start address=$FC00 */
#define FUSE_BOOTSZ_2048W_F800_gc (0x01<<1) /* Boot Flash size=2048 words start address=$F800 */
#define FUSE_BOOTSZ_4096W_F000_gc (0x00<<1) /* Boot Flash size=4096 words start address=$F000 */


/* Boot Reset vector Enabled */
#define FUSE_BOOTRST_CLEAR_gc (0x00) /* Boot Reset vector Enabled - CLEAR */
#define FUSE_BOOTRST_SET_gc   (0x01) /* Boot Reset vector Enabled - SET */


/* Divide clock by 8 internally */
#define FUSE_CKDIV8_CLEAR_gc (0x00) /* Divide clock by 8 internally - CLEAR */
#define FUSE_CKDIV8_SET_gc   (0x80) /* Divide clock by 8 internally - SET */


/* Clock output on PORTE7 */
#define FUSE_CKOUT_CLEAR_gc (0x00) /* Clock output on PORTE7 - CLEAR */
#define FUSE_CKOUT_SET_gc   (0x40) /* Clock output on PORTE7 - SET */


/* Select Clock Source : Start-up time */
#define FUSE_CKSEL_SUT_EXTCLK_6CK_0MS_gc           (0x00) /* Ext. Clock; Start-up time: 6 CK + 0 ms */
#define FUSE_CKSEL_SUT_EXTCLK_6CK_4MS1_gc          (0x10) /* Ext. Clock; Start-up time: 6 CK + 4.1 ms */
#define FUSE_CKSEL_SUT_EXTCLK_6CK_65MS_gc          (0x20) /* Ext. Clock; Start-up time: 6 CK + 65 ms */
#define FUSE_CKSEL_SUT_INTRCOSC_6CK_0MS_gc         (0x02) /* Int. RC Osc.; Start-up time: 6 CK + 0 ms */
#define FUSE_CKSEL_SUT_INTRCOSC_6CK_4MS1_gc        (0x12) /* Int. RC Osc.; Start-up time: 6 CK + 4.1 ms */
#define FUSE_CKSEL_SUT_INTRCOSC_6CK_65MS_gc        (0x22) /* Int. RC Osc.; Start-up time: 6 CK + 65 ms */
#define FUSE_CKSEL_SUT_INTRCOSC_128KHZ_6CK_0MS_gc  (0x03) /* Int. 128kHz RC Osc.; Start-up time: 6 CK + 0 ms */
#define FUSE_CKSEL_SUT_INTRCOSC_128KHZ_6CK_4MS1_gc (0x13) /* Int. 128kHz RC Osc.; Start-up time: 6 CK + 4.1 ms */
#define FUSE_CKSEL_SUT_INTRCOSC_128KHZ_6CK_65MS_gc (0x23) /* Int. 128kHz RC Osc.; Start-up time: 6 CK + 65 ms */
#define FUSE_CKSEL_SUT_TOSC_258CK_4MS1_gc          (0x06) /* Tranceiver Oscillator; Start-up time: 258 CK + 4.1 ms */
#define FUSE_CKSEL_SUT_TOSC_258CK_65MS_gc          (0x16) /* Tranceiver Oscillator; Start-up time: 258 CK + 65 ms */
#define FUSE_CKSEL_SUT_TOSC_1KCK_0MS_gc            (0x26) /* Tranceiver Oscillator; Start-up time: 1K CK + 0 ms */
#define FUSE_CKSEL_SUT_TOSC_1KCK_4MS1_gc           (0x36) /* Tranceiver Oscillator; Start-up time: 1K CK + 4.1 ms */
#define FUSE_CKSEL_SUT_TOSC_1KCK_65MS_gc           (0x07) /* Tranceiver Oscillator; Start-up time: 1K CK + 65 ms */
#define FUSE_CKSEL_SUT_TOSC_16KCK_0MS_gc           (0x17) /* Tranceiver Oscillator; Start-up time: 16K CK + 0 ms */
#define FUSE_CKSEL_SUT_TOSC_16KCK_4MS1_gc          (0x27) /* Tranceiver Oscillator; Start-up time: 16K CK + 4.1 ms */
#define FUSE_CKSEL_SUT_TOSC_16KCK_65MS_gc          (0x37) /* Tranceiver Oscillator; Start-up time: 16K CK + 65 ms */
/* WARNING: FUSE_CKSEL_SUT_TOSC_258CK_4MS1_gc ALREADY DEFINED as '(0x06)' NOT '(0x08)' */
/* WARNING: FUSE_CKSEL_SUT_TOSC_258CK_65MS_gc ALREADY DEFINED as '(0x16)' NOT '(0x18)' */
/* WARNING: FUSE_CKSEL_SUT_TOSC_1KCK_0MS_gc ALREADY DEFINED as '(0x26)' NOT '(0x28)' */
/* WARNING: FUSE_CKSEL_SUT_TOSC_1KCK_4MS1_gc ALREADY DEFINED as '(0x36)' NOT '(0x38)' */
/* WARNING: FUSE_CKSEL_SUT_TOSC_1KCK_65MS_gc ALREADY DEFINED as '(0x07)' NOT '(0x09)' */
/* WARNING: FUSE_CKSEL_SUT_TOSC_16KCK_0MS_gc ALREADY DEFINED as '(0x17)' NOT '(0x19)' */
/* WARNING: FUSE_CKSEL_SUT_TOSC_16KCK_4MS1_gc ALREADY DEFINED as '(0x27)' NOT '(0x29)' */
/* WARNING: FUSE_CKSEL_SUT_TOSC_16KCK_65MS_gc ALREADY DEFINED as '(0x37)' NOT '(0x39)' */
/* WARNING: FUSE_CKSEL_SUT_TOSC_258CK_4MS1_gc ALREADY DEFINED as '(0x06)' NOT '(0x0A)' */
/* WARNING: FUSE_CKSEL_SUT_TOSC_258CK_65MS_gc ALREADY DEFINED as '(0x16)' NOT '(0x1A)' */
/* WARNING: FUSE_CKSEL_SUT_TOSC_1KCK_0MS_gc ALREADY DEFINED as '(0x26)' NOT '(0x2A)' */
/* WARNING: FUSE_CKSEL_SUT_TOSC_1KCK_4MS1_gc ALREADY DEFINED as '(0x36)' NOT '(0x3A)' */
/* WARNING: FUSE_CKSEL_SUT_TOSC_1KCK_65MS_gc ALREADY DEFINED as '(0x07)' NOT '(0x0B)' */
/* WARNING: FUSE_CKSEL_SUT_TOSC_16KCK_0MS_gc ALREADY DEFINED as '(0x17)' NOT '(0x1B)' */
/* WARNING: FUSE_CKSEL_SUT_TOSC_16KCK_4MS1_gc ALREADY DEFINED as '(0x27)' NOT '(0x2B)' */
/* WARNING: FUSE_CKSEL_SUT_TOSC_16KCK_65MS_gc ALREADY DEFINED as '(0x37)' NOT '(0x3B)' */
/* WARNING: FUSE_CKSEL_SUT_TOSC_258CK_4MS1_gc ALREADY DEFINED as '(0x06)' NOT '(0x0C)' */
/* WARNING: FUSE_CKSEL_SUT_TOSC_258CK_65MS_gc ALREADY DEFINED as '(0x16)' NOT '(0x1C)' */
/* WARNING: FUSE_CKSEL_SUT_TOSC_1KCK_0MS_gc ALREADY DEFINED as '(0x26)' NOT '(0x2C)' */
/* WARNING: FUSE_CKSEL_SUT_TOSC_1KCK_4MS1_gc ALREADY DEFINED as '(0x36)' NOT '(0x3C)' */
/* WARNING: FUSE_CKSEL_SUT_TOSC_1KCK_65MS_gc ALREADY DEFINED as '(0x07)' NOT '(0x0D)' */
/* WARNING: FUSE_CKSEL_SUT_TOSC_16KCK_0MS_gc ALREADY DEFINED as '(0x17)' NOT '(0x1D)' */
/* WARNING: FUSE_CKSEL_SUT_TOSC_16KCK_4MS1_gc ALREADY DEFINED as '(0x27)' NOT '(0x2D)' */
/* WARNING: FUSE_CKSEL_SUT_TOSC_16KCK_65MS_gc ALREADY DEFINED as '(0x37)' NOT '(0x3D)' */
/* WARNING: FUSE_CKSEL_SUT_TOSC_258CK_4MS1_gc ALREADY DEFINED as '(0x06)' NOT '(0x0E)' */
/* WARNING: FUSE_CKSEL_SUT_TOSC_258CK_65MS_gc ALREADY DEFINED as '(0x16)' NOT '(0x1E)' */
/* WARNING: FUSE_CKSEL_SUT_TOSC_1KCK_0MS_gc ALREADY DEFINED as '(0x26)' NOT '(0x2E)' */
/* WARNING: FUSE_CKSEL_SUT_TOSC_1KCK_4MS1_gc ALREADY DEFINED as '(0x36)' NOT '(0x3E)' */
/* WARNING: FUSE_CKSEL_SUT_TOSC_1KCK_65MS_gc ALREADY DEFINED as '(0x07)' NOT '(0x0F)' */
/* WARNING: FUSE_CKSEL_SUT_TOSC_16KCK_0MS_gc ALREADY DEFINED as '(0x17)' NOT '(0x1F)' */
/* WARNING: FUSE_CKSEL_SUT_TOSC_16KCK_4MS1_gc ALREADY DEFINED as '(0x27)' NOT '(0x2F)' */
/* WARNING: FUSE_CKSEL_SUT_TOSC_16KCK_65MS_gc ALREADY DEFINED as '(0x37)' NOT '(0x3F)' */


/*
--------------------------------------------------------------------------------
LOCKBIT - Lockbits
--------------------------------------------------------------------------------
*/


/* Memory Lock */
#define LOCKBIT_LB_PROG_VER_DISABLED_gc (0x00) /* Further programming and verification disabled */
#define LOCKBIT_LB_PROG_DISABLED_gc     (0x02) /* Further programming disabled */
#define LOCKBIT_LB_NO_LOCK_gc           (0x03) /* No memory lock features enabled */


/* Boot Loader Protection Mode */
#define LOCKBIT_BLB0_LPM_SPM_DISABLE_gc (0x00<<2) /* LPM and SPM prohibited in Application Section */
#define LOCKBIT_BLB0_LPM_DISABLE_gc     (0x01<<2) /* LPM prohibited in Application Section */
#define LOCKBIT_BLB0_SPM_DISABLE_gc     (0x02<<2) /* SPM prohibited in Application Section */
#define LOCKBIT_BLB0_NO_LOCK_gc         (0x03<<2) /* No lock on SPM and LPM in Application Section */


/* Boot Loader Protection Mode */
#define LOCKBIT_BLB1_LPM_SPM_DISABLE_gc (0x00<<4) /* LPM and SPM prohibited in Boot Section */
#define LOCKBIT_BLB1_LPM_DISABLE_gc     (0x01<<4) /* LPM prohibited in Boot Section */
#define LOCKBIT_BLB1_SPM_DISABLE_gc     (0x02<<4) /* SPM prohibited in Boot Section */
#define LOCKBIT_BLB1_NO_LOCK_gc         (0x03<<4) /* No lock on SPM and LPM in Boot Section */


/*
--------------------------------------------------------------------------------
AC - Analog Comparator
--------------------------------------------------------------------------------
*/


/* Analog Comparator Multiplexer Enable */
#define AC_ACME_CLEAR_gc (0x00) /* Analog Comparator Multiplexer Enable - CLEAR */
#define AC_ACME_SET_gc   (0x40) /* Analog Comparator Multiplexer Enable - SET */


/* Analog Comparator Disable */
#define AC_ACD_CLEAR_gc (0x00) /* Analog Comparator Disable - CLEAR */
#define AC_ACD_SET_gc   (0x80) /* Analog Comparator Disable - SET */


/* Analog Comparator Bandgap Select */
#define AC_ACBG_CLEAR_gc (0x00) /* Analog Comparator Bandgap Select - CLEAR */
#define AC_ACBG_SET_gc   (0x40) /* Analog Comparator Bandgap Select - SET */


/* Analog Compare Output */
#define AC_ACO_CLEAR_gc (0x00) /* Analog Compare Output - CLEAR */
#define AC_ACO_SET_gc   (0x20) /* Analog Compare Output - SET */


/* Analog Comparator Interrupt Flag */
#define AC_ACI_CLEAR_gc (0x00) /* Analog Comparator Interrupt Flag - CLEAR */
#define AC_ACI_SET_gc   (0x10) /* Analog Comparator Interrupt Flag - SET */


/* Analog Comparator Interrupt Enable */
#define AC_ACIE_CLEAR_gc (0x00) /* Analog Comparator Interrupt Enable - CLEAR */
#define AC_ACIE_SET_gc   (0x08) /* Analog Comparator Interrupt Enable - SET */


/* Analog Comparator Input Capture Enable */
#define AC_ACIC_CLEAR_gc (0x00) /* Analog Comparator Input Capture Enable - CLEAR */
#define AC_ACIC_SET_gc   (0x04) /* Analog Comparator Input Capture Enable - SET */


/* Analog Comparator Interrupt Mode Select */
#define AC_ACIS_VAL_0x00_gc (0x00) /* Interrupt on Toggle */
#define AC_ACIS_VAL_0x01_gc (0x01) /* Reserved */
#define AC_ACIS_VAL_0x02_gc (0x02) /* Interrupt on Falling Edge */
#define AC_ACIS_VAL_0x03_gc (0x03) /* Interrupt on Rising Edge */


/* AIN1 Digital Input Disable */
#define AC_AIN1D_CLEAR_gc (0x00) /* AIN1 Digital Input Disable - CLEAR */
#define AC_AIN1D_SET_gc   (0x02) /* AIN1 Digital Input Disable - SET */


/* AIN0 Digital Input Disable */
#define AC_AIN0D_CLEAR_gc (0x00) /* AIN0 Digital Input Disable - CLEAR */
#define AC_AIN0D_SET_gc   (0x01) /* AIN0 Digital Input Disable - SET */


/*
--------------------------------------------------------------------------------
USART - USART
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
USART - USART
--------------------------------------------------------------------------------
*/


/* USART Receive Complete */
#define USART0_RXC0_CLEAR_gc (0x00) /* USART Receive Complete - CLEAR */
#define USART0_RXC0_SET_gc   (0x80) /* USART Receive Complete - SET */


/* USART Transmit Complete */
#define USART0_TXC0_CLEAR_gc (0x00) /* USART Transmit Complete - CLEAR */
#define USART0_TXC0_SET_gc   (0x40) /* USART Transmit Complete - SET */


/* USART Data Register Empty */
#define USART0_UDRE0_CLEAR_gc (0x00) /* USART Data Register Empty - CLEAR */
#define USART0_UDRE0_SET_gc   (0x20) /* USART Data Register Empty - SET */


/* Frame Error */
#define USART0_FE0_CLEAR_gc (0x00) /* Frame Error - CLEAR */
#define USART0_FE0_SET_gc   (0x10) /* Frame Error - SET */


/* Data OverRun */
#define USART0_DOR0_CLEAR_gc (0x00) /* Data OverRun - CLEAR */
#define USART0_DOR0_SET_gc   (0x08) /* Data OverRun - SET */


/* USART Parity Error */
#define USART0_UPE0_CLEAR_gc (0x00) /* USART Parity Error - CLEAR */
#define USART0_UPE0_SET_gc   (0x04) /* USART Parity Error - SET */


/* Double the USART Transmission Speed */
#define USART0_U2X0_CLEAR_gc (0x00) /* Double the USART Transmission Speed - CLEAR */
#define USART0_U2X0_SET_gc   (0x02) /* Double the USART Transmission Speed - SET */


/* Multi-processor Communication Mode */
#define USART0_MPCM0_CLEAR_gc (0x00) /* Multi-processor Communication Mode - CLEAR */
#define USART0_MPCM0_SET_gc   (0x01) /* Multi-processor Communication Mode - SET */


/* RX Complete Interrupt Enable */
#define USART0_RXCIE0_CLEAR_gc (0x00) /* RX Complete Interrupt Enable - CLEAR */
#define USART0_RXCIE0_SET_gc   (0x80) /* RX Complete Interrupt Enable - SET */


/* TX Complete Interrupt Enable */
#define USART0_TXCIE0_CLEAR_gc (0x00) /* TX Complete Interrupt Enable - CLEAR */
#define USART0_TXCIE0_SET_gc   (0x40) /* TX Complete Interrupt Enable - SET */


/* USART Data Register Empty Interrupt Enable */
#define USART0_UDRIE0_CLEAR_gc (0x00) /* USART Data Register Empty Interrupt Enable - CLEAR */
#define USART0_UDRIE0_SET_gc   (0x20) /* USART Data Register Empty Interrupt Enable - SET */


/* Receiver Enable */
#define USART0_RXEN0_CLEAR_gc (0x00) /* Receiver Enable - CLEAR */
#define USART0_RXEN0_SET_gc   (0x10) /* Receiver Enable - SET */


/* Transmitter Enable */
#define USART0_TXEN0_CLEAR_gc (0x00) /* Transmitter Enable - CLEAR */
#define USART0_TXEN0_SET_gc   (0x08) /* Transmitter Enable - SET */


/* Character Size */
#define USART0_UCSZ02_CLEAR_gc (0x00) /* Character Size - CLEAR */
#define USART0_UCSZ02_SET_gc   (0x04) /* Character Size - SET */


/* Receive Data Bit 8 */
#define USART0_RXB80_CLEAR_gc (0x00) /* Receive Data Bit 8 - CLEAR */
#define USART0_RXB80_SET_gc   (0x02) /* Receive Data Bit 8 - SET */


/* Transmit Data Bit 8 */
#define USART0_TXB80_CLEAR_gc (0x00) /* Transmit Data Bit 8 - CLEAR */
#define USART0_TXB80_SET_gc   (0x01) /* Transmit Data Bit 8 - SET */


/* USART Mode Select */
#define USART0_UMSEL0_VAL_0x00_gc (0x00<<6) /* Asynchronous USART */
#define USART0_UMSEL0_VAL_0x01_gc (0x01<<6) /* Synchronous USART */
#define USART0_UMSEL0_VAL_0x02_gc (0x02<<6) /* Reserved */
#define USART0_UMSEL0_VAL_0x03_gc (0x03<<6) /* Master SPI (MSPIM) */


/* Parity Mode */
#define USART0_UPM0_VAL_0x00_gc (0x00<<4) /* Disabled */
#define USART0_UPM0_VAL_0x01_gc (0x01<<4) /* Reserved */
#define USART0_UPM0_VAL_0x02_gc (0x02<<4) /* Enabled, Even Parity */
#define USART0_UPM0_VAL_0x03_gc (0x03<<4) /* Enabled, Odd Parity */


/* Stop Bit Select */
#define USART0_USBS0_VAL_0x00_gc (0x00<<3) /* 1-bit */
#define USART0_USBS0_VAL_0x01_gc (0x01<<3) /* 2-bit */


/* Character Size */
#define USART0_UCSZ0_VAL_0_gc (0x00<<1) /* 5-bit */
#define USART0_UCSZ0_VAL_1_gc (0x01<<1) /* 6-bit */
#define USART0_UCSZ0_VAL_2_gc (0x02<<1) /* 7-bit */
#define USART0_UCSZ0_VAL_3_gc (0x03<<1) /* 8-bit */
#define USART0_UCSZ0_VAL_4_gc (0x04<<1) /* Reserved */
#define USART0_UCSZ0_VAL_5_gc (0x05<<1) /* Reserved */
#define USART0_UCSZ0_VAL_6_gc (0x06<<1) /* Reserved */
#define USART0_UCSZ0_VAL_7_gc (0x07<<1) /* 9-bit */


/* Clock Polarity */
#define USART0_UCPOL0_VAL_0_gc (0x00) /* Rising XCKn Edge (Transmitted Data Changed), Falling XCKn Edge (Received Data Sampled) */
#define USART0_UCPOL0_VAL_1_gc (0x01) /* Falling XCKn Edge (Transmitted Data Changed), Rising XCKn Edge (Received Data Sampled) */


/* USART Receive Complete */
#define USART1_RXC1_CLEAR_gc (0x00) /* USART Receive Complete - CLEAR */
#define USART1_RXC1_SET_gc   (0x80) /* USART Receive Complete - SET */


/* USART Transmit Complete */
#define USART1_TXC1_CLEAR_gc (0x00) /* USART Transmit Complete - CLEAR */
#define USART1_TXC1_SET_gc   (0x40) /* USART Transmit Complete - SET */


/* USART Data Register Empty */
#define USART1_UDRE1_CLEAR_gc (0x00) /* USART Data Register Empty - CLEAR */
#define USART1_UDRE1_SET_gc   (0x20) /* USART Data Register Empty - SET */


/* Frame Error */
#define USART1_FE1_CLEAR_gc (0x00) /* Frame Error - CLEAR */
#define USART1_FE1_SET_gc   (0x10) /* Frame Error - SET */


/* Data OverRun */
#define USART1_DOR1_CLEAR_gc (0x00) /* Data OverRun - CLEAR */
#define USART1_DOR1_SET_gc   (0x08) /* Data OverRun - SET */


/* USART Parity Error */
#define USART1_UPE1_CLEAR_gc (0x00) /* USART Parity Error - CLEAR */
#define USART1_UPE1_SET_gc   (0x04) /* USART Parity Error - SET */


/* Double the USART Transmission Speed */
#define USART1_U2X1_CLEAR_gc (0x00) /* Double the USART Transmission Speed - CLEAR */
#define USART1_U2X1_SET_gc   (0x02) /* Double the USART Transmission Speed - SET */


/* Multi-processor Communication Mode */
#define USART1_MPCM1_CLEAR_gc (0x00) /* Multi-processor Communication Mode - CLEAR */
#define USART1_MPCM1_SET_gc   (0x01) /* Multi-processor Communication Mode - SET */


/* RX Complete Interrupt Enable */
#define USART1_RXCIE1_CLEAR_gc (0x00) /* RX Complete Interrupt Enable - CLEAR */
#define USART1_RXCIE1_SET_gc   (0x80) /* RX Complete Interrupt Enable - SET */


/* TX Complete Interrupt Enable */
#define USART1_TXCIE1_CLEAR_gc (0x00) /* TX Complete Interrupt Enable - CLEAR */
#define USART1_TXCIE1_SET_gc   (0x40) /* TX Complete Interrupt Enable - SET */


/* USART Data Register Empty Interrupt Enable */
#define USART1_UDRIE1_CLEAR_gc (0x00) /* USART Data Register Empty Interrupt Enable - CLEAR */
#define USART1_UDRIE1_SET_gc   (0x20) /* USART Data Register Empty Interrupt Enable - SET */


/* Receiver Enable */
#define USART1_RXEN1_CLEAR_gc (0x00) /* Receiver Enable - CLEAR */
#define USART1_RXEN1_SET_gc   (0x10) /* Receiver Enable - SET */


/* Transmitter Enable */
#define USART1_TXEN1_CLEAR_gc (0x00) /* Transmitter Enable - CLEAR */
#define USART1_TXEN1_SET_gc   (0x08) /* Transmitter Enable - SET */


/* Character Size */
#define USART1_UCSZ12_CLEAR_gc (0x00) /* Character Size - CLEAR */
#define USART1_UCSZ12_SET_gc   (0x04) /* Character Size - SET */


/* Receive Data Bit 8 */
#define USART1_RXB81_CLEAR_gc (0x00) /* Receive Data Bit 8 - CLEAR */
#define USART1_RXB81_SET_gc   (0x02) /* Receive Data Bit 8 - SET */


/* Transmit Data Bit 8 */
#define USART1_TXB81_CLEAR_gc (0x00) /* Transmit Data Bit 8 - CLEAR */
#define USART1_TXB81_SET_gc   (0x01) /* Transmit Data Bit 8 - SET */


/* USART Mode Select */
#define USART1_UMSEL1_VAL_0x00_gc (0x00<<6) /* Asynchronous USART */
#define USART1_UMSEL1_VAL_0x01_gc (0x01<<6) /* Synchronous USART */
#define USART1_UMSEL1_VAL_0x02_gc (0x02<<6) /* Reserved */
#define USART1_UMSEL1_VAL_0x03_gc (0x03<<6) /* Master SPI (MSPIM) */


/* Parity Mode */
#define USART1_UPM1_VAL_0x00_gc (0x00<<4) /* Disabled */
#define USART1_UPM1_VAL_0x01_gc (0x01<<4) /* Reserved */
#define USART1_UPM1_VAL_0x02_gc (0x02<<4) /* Enabled, Even Parity */
#define USART1_UPM1_VAL_0x03_gc (0x03<<4) /* Enabled, Odd Parity */


/* Stop Bit Select */
#define USART1_USBS1_VAL_0x00_gc (0x00<<3) /* 1-bit */
#define USART1_USBS1_VAL_0x01_gc (0x01<<3) /* 2-bit */


/* Character Size */
#define USART1_UCSZ1_VAL_0_gc (0x00<<1) /* 5-bit */
#define USART1_UCSZ1_VAL_1_gc (0x01<<1) /* 6-bit */
#define USART1_UCSZ1_VAL_2_gc (0x02<<1) /* 7-bit */
#define USART1_UCSZ1_VAL_3_gc (0x03<<1) /* 8-bit */
#define USART1_UCSZ1_VAL_4_gc (0x04<<1) /* Reserved */
#define USART1_UCSZ1_VAL_5_gc (0x05<<1) /* Reserved */
#define USART1_UCSZ1_VAL_6_gc (0x06<<1) /* Reserved */
#define USART1_UCSZ1_VAL_7_gc (0x07<<1) /* 9-bit */


/* Clock Polarity */
#define USART1_UCPOL1_VAL_0_gc (0x00) /* Rising XCKn Edge (Transmitted Data Changed), Falling XCKn Edge (Received Data Sampled) */
#define USART1_UCPOL1_VAL_1_gc (0x01) /* Falling XCKn Edge (Transmitted Data Changed), Rising XCKn Edge (Received Data Sampled) */


/*
--------------------------------------------------------------------------------
TWI - Two Wire Serial Interface
--------------------------------------------------------------------------------
*/


/* TWI Address Mask */
#define TWI_TWAMR_TWAM_gc(x) ((x<<1) & 0xFE)

/* Reserved Bit */
#define TWI_Res_CLEAR_gc (0x00) /* Reserved Bit - CLEAR */
#define TWI_Res_SET_gc   (0x01) /* Reserved Bit - SET */


/* TWI Interrupt Flag */
#define TWI_TWINT_CLEAR_gc (0x00) /* TWI Interrupt Flag - CLEAR */
#define TWI_TWINT_SET_gc   (0x80) /* TWI Interrupt Flag - SET */


/* TWI Enable Acknowledge Bit */
#define TWI_TWEA_CLEAR_gc (0x00) /* TWI Enable Acknowledge Bit - CLEAR */
#define TWI_TWEA_SET_gc   (0x40) /* TWI Enable Acknowledge Bit - SET */


/* TWI START Condition Bit */
#define TWI_TWSTA_CLEAR_gc (0x00) /* TWI START Condition Bit - CLEAR */
#define TWI_TWSTA_SET_gc   (0x20) /* TWI START Condition Bit - SET */


/* TWI STOP Condition Bit */
#define TWI_TWSTO_CLEAR_gc (0x00) /* TWI STOP Condition Bit - CLEAR */
#define TWI_TWSTO_SET_gc   (0x10) /* TWI STOP Condition Bit - SET */


/* TWI Write Collision Flag */
#define TWI_TWWC_CLEAR_gc (0x00) /* TWI Write Collision Flag - CLEAR */
#define TWI_TWWC_SET_gc   (0x08) /* TWI Write Collision Flag - SET */


/* TWI Enable Bit */
#define TWI_TWEN_CLEAR_gc (0x00) /* TWI Enable Bit - CLEAR */
#define TWI_TWEN_SET_gc   (0x04) /* TWI Enable Bit - SET */


/* Reserved Bit */
/* TWI_Res_CLEAR_gc ALREADY DEFINED */
/* WARNING: TWI_Res_SET_gc ALREADY DEFINED as '(0x01)' NOT '(0x02)' */


/* TWI Interrupt Enable */
#define TWI_TWIE_CLEAR_gc (0x00) /* TWI Interrupt Enable - CLEAR */
#define TWI_TWIE_SET_gc   (0x01) /* TWI Interrupt Enable - SET */


/* TWI Status */
#define TWI_TWS_VAL_0x00_gc (0x00<<3) /* Bus error due to illegal START or STOP condition. */
#define TWI_TWS_VAL_0x08_gc (0x08<<3) /* A START condition has been transmitted. */
#define TWI_TWS_VAL_0x10_gc (0x10<<3) /* A repeated START condition has been transmitted. */
#define TWI_TWS_VAL_0x18_gc (0x18<<3) /* SLA+W has been transmitted; ACK has been received. */
#define TWI_TWS_VAL_0x20_gc (0x20<<3) /* SLA+W has been transmitted; NOT ACK has been received. */
#define TWI_TWS_VAL_0x28_gc (0x28<<3) /* Data byte has been transmitted; ACK has been received. */
#define TWI_TWS_VAL_0x30_gc (0x30<<3) /* Data byte has been transmitted; NOT ACK has been received. */
#define TWI_TWS_VAL_0x38_gc (0x38<<3) /* Arbitration lost in SLA+W or data bytes (Transmitter); Arbitration lost in SLA+R or NOT ACK bit (Receiver). */
#define TWI_TWS_VAL_0x40_gc (0x40<<3) /* SLA+R has been transmitted; ACK has been received. */
#define TWI_TWS_VAL_0x48_gc (0x48<<3) /* SLA+R has been transmitted; NOT ACK has been received. */
#define TWI_TWS_VAL_0x50_gc (0x50<<3) /* Data byte has been received; ACK has been returned. */
#define TWI_TWS_VAL_0x58_gc (0x58<<3) /* Data byte has been received; NOT ACK has been returned. */
#define TWI_TWS_VAL_0x60_gc (0x60<<3) /* Own SLA+W has been received; ACK has been returned. */
#define TWI_TWS_VAL_0x68_gc (0x68<<3) /* Arbitration lost in SLA+R/W as Master; own SLA+W has been received; ACK has been returned. */
#define TWI_TWS_VAL_0x70_gc (0x70<<3) /* General call address has been received; ACK has been returned. */
#define TWI_TWS_VAL_0x78_gc (0x78<<3) /* Arbitration lost in SLA+R/W as Master; general call address has been received; ACK has been returned. */
#define TWI_TWS_VAL_0x80_gc (0x80<<3) /* Previously addressed with own SLA+W; data has been received; ACK has been returned. */
#define TWI_TWS_VAL_0x88_gc (0x88<<3) /* Previously addressed with own SLA+W; data has been received; NOT ACK has been returned. */
#define TWI_TWS_VAL_0x90_gc (0x90<<3) /* Previously addressed with general call; data has been received; ACK has been returned. */
#define TWI_TWS_VAL_0x98_gc (0x98<<3) /* Previously addressed with general call; data has been received; NOT ACK has been returned. */
#define TWI_TWS_VAL_0xA0_gc (0xA0<<3) /* A STOP condition or repeated START condition has been received while still addressed as Slave. */
#define TWI_TWS_VAL_0xA8_gc (0xA8<<3) /* Own SLA+R has been received; ACK has been returned. */
#define TWI_TWS_VAL_0xB0_gc (0xB0<<3) /* Arbitration lost in SLA+R/W as Master; own SLA+R has been received; ACK has been returned. */
#define TWI_TWS_VAL_0xB8_gc (0xB8<<3) /* Data byte in TWDR has been transmitted; ACK has been received. */
#define TWI_TWS_VAL_0xC0_gc (0xC0<<3) /* Data byte in TWDR has been transmitted; NO ACK has been received. */
#define TWI_TWS_VAL_0xC8_gc (0xC8<<3) /* Last data byte in TWDR has been transmitted (TWEA = 0); ACK has been received. */
#define TWI_TWS_VAL_0xF8_gc (0xF8<<3) /* No relevant state information available; TWINT = 0. */


/* Reserved Bit */
/* TWI_Res_CLEAR_gc ALREADY DEFINED */
/* WARNING: TWI_Res_SET_gc ALREADY DEFINED as '(0x01)' NOT '(0x04)' */


/* TWI Prescaler Bits */
#define TWI_TWPS_VAL_0x00_gc (0x00) /* 1 */
#define TWI_TWPS_VAL_0x01_gc (0x01) /* 4 */
#define TWI_TWPS_VAL_0x02_gc (0x02) /* 16 */
#define TWI_TWPS_VAL_0x03_gc (0x03) /* 64 */


/* TWI (Slave) Address */
#define TWI_TWAR_TWA_gc(x) ((x<<1) & 0xFE)

/* TWI General Call Recognition Enable Bit */
#define TWI_TWGCE_CLEAR_gc (0x00) /* TWI General Call Recognition Enable Bit - CLEAR */
#define TWI_TWGCE_SET_gc   (0x01) /* TWI General Call Recognition Enable Bit - SET */


/*
--------------------------------------------------------------------------------
SPI - Serial Peripheral Interface
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
SPI - Serial Peripheral Interface
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
SPI - Serial Peripheral Interface
--------------------------------------------------------------------------------
*/


/* SPI Interrupt Enable */
#define SPI_SPIE_CLEAR_gc (0x00) /* SPI Interrupt Enable - CLEAR */
#define SPI_SPIE_SET_gc   (0x80) /* SPI Interrupt Enable - SET */


/* SPI Enable */
#define SPI_SPE_CLEAR_gc (0x00) /* SPI Enable - CLEAR */
#define SPI_SPE_SET_gc   (0x40) /* SPI Enable - SET */


/* Data Order */
#define SPI_DORD_CLEAR_gc (0x00) /* Data Order - CLEAR */
#define SPI_DORD_SET_gc   (0x20) /* Data Order - SET */


/* Master/Slave Select */
#define SPI_MSTR_CLEAR_gc (0x00) /* Master/Slave Select - CLEAR */
#define SPI_MSTR_SET_gc   (0x10) /* Master/Slave Select - SET */


/* Clock polarity */
#define SPI_CPOL_VAL_0_gc (0x00<<3) /* Rising (Leading Edge), Falling (Trailing Edge) */
#define SPI_CPOL_VAL_1_gc (0x01<<3) /* Falling (Leading Egde), Rising (Trailing Edge) */


/* Clock Phase */
#define SPI_CPHA_VAL_0_gc (0x00<<2) /* Sample (Leading Edge), Setup (Trailing Edge) */
#define SPI_CPHA_VAL_1_gc (0x01<<2) /* Setup (Leading Edge), Sample (Trailing Edge) */


/* SPI Clock Rate Select 1 and 0 */
#define SPI_SPR_VAL_0x00_gc (0x00) /* fosc/4 / fosc/2 (SPI2X=0/1) */
#define SPI_SPR_VAL_0x01_gc (0x01) /* fosc/16 / fosc/8 (SPI2X=0/1) */
#define SPI_SPR_VAL_0x02_gc (0x02) /* fosc/64 / fosc/32 (SPI2X=0/1) */
#define SPI_SPR_VAL_0x03_gc (0x03) /* fosc/128 / fosc/64 (SPI2X=0/1) */


/* SPI Interrupt Flag */
#define SPI_SPIF_CLEAR_gc (0x00) /* SPI Interrupt Flag - CLEAR */
#define SPI_SPIF_SET_gc   (0x80) /* SPI Interrupt Flag - SET */


/* Write Collision Flag */
#define SPI_WCOL_CLEAR_gc (0x00) /* Write Collision Flag - CLEAR */
#define SPI_WCOL_SET_gc   (0x40) /* Write Collision Flag - SET */


/* Reserved */
#define SPI_SPSR_Res_gc(x) ((x<<1) & 0x3E)

/* Double SPI Speed Bit */
#define SPI_SPI2X_CLEAR_gc (0x00) /* Double SPI Speed Bit - CLEAR */
#define SPI_SPI2X_SET_gc   (0x01) /* Double SPI Speed Bit - SET */


/* USART Receive Complete */
#define USART0_SPI_RXC0_CLEAR_gc (0x00) /* USART Receive Complete - CLEAR */
#define USART0_SPI_RXC0_SET_gc   (0x80) /* USART Receive Complete - SET */


/* USART Transmit Complete */
#define USART0_SPI_TXC0_CLEAR_gc (0x00) /* USART Transmit Complete - CLEAR */
#define USART0_SPI_TXC0_SET_gc   (0x40) /* USART Transmit Complete - SET */


/* USART Data Register Empty */
#define USART0_SPI_UDRE0_CLEAR_gc (0x00) /* USART Data Register Empty - CLEAR */
#define USART0_SPI_UDRE0_SET_gc   (0x20) /* USART Data Register Empty - SET */


/* RX Complete Interrupt Enable */
#define USART0_SPI_RXCIE0_CLEAR_gc (0x00) /* RX Complete Interrupt Enable - CLEAR */
#define USART0_SPI_RXCIE0_SET_gc   (0x80) /* RX Complete Interrupt Enable - SET */


/* TX Complete Interrupt Enable */
#define USART0_SPI_TXCIE0_CLEAR_gc (0x00) /* TX Complete Interrupt Enable - CLEAR */
#define USART0_SPI_TXCIE0_SET_gc   (0x40) /* TX Complete Interrupt Enable - SET */


/* USART Data Register Empty Interrupt Enable */
#define USART0_SPI_UDRIE0_CLEAR_gc (0x00) /* USART Data Register Empty Interrupt Enable - CLEAR */
#define USART0_SPI_UDRIE0_SET_gc   (0x20) /* USART Data Register Empty Interrupt Enable - SET */


/* Receiver Enable */
#define USART0_SPI_RXEN0_CLEAR_gc (0x00) /* Receiver Enable - CLEAR */
#define USART0_SPI_RXEN0_SET_gc   (0x10) /* Receiver Enable - SET */


/* Transmitter Enable */
#define USART0_SPI_TXEN0_CLEAR_gc (0x00) /* Transmitter Enable - CLEAR */
#define USART0_SPI_TXEN0_SET_gc   (0x08) /* Transmitter Enable - SET */


/* Data Order */
#define USART0_SPI_UDORD0_CLEAR_gc (0x00) /* Data Order - CLEAR */
#define USART0_SPI_UDORD0_SET_gc   (0x04) /* Data Order - SET */


/* Clock Phase */
#define USART0_SPI_UCPHA0_CLEAR_gc (0x00) /* Clock Phase - CLEAR */
#define USART0_SPI_UCPHA0_SET_gc   (0x02) /* Clock Phase - SET */


/* Clock Polarity */
#define USART0_SPI_UCPOL0_CLEAR_gc (0x00) /* Clock Polarity - CLEAR */
#define USART0_SPI_UCPOL0_SET_gc   (0x01) /* Clock Polarity - SET */


/* USART Receive Complete */
#define USART1_SPI_RXC1_CLEAR_gc (0x00) /* USART Receive Complete - CLEAR */
#define USART1_SPI_RXC1_SET_gc   (0x80) /* USART Receive Complete - SET */


/* USART Transmit Complete */
#define USART1_SPI_TXC1_CLEAR_gc (0x00) /* USART Transmit Complete - CLEAR */
#define USART1_SPI_TXC1_SET_gc   (0x40) /* USART Transmit Complete - SET */


/* USART Data Register Empty */
#define USART1_SPI_UDRE1_CLEAR_gc (0x00) /* USART Data Register Empty - CLEAR */
#define USART1_SPI_UDRE1_SET_gc   (0x20) /* USART Data Register Empty - SET */


/* RX Complete Interrupt Enable */
#define USART1_SPI_RXCIE1_CLEAR_gc (0x00) /* RX Complete Interrupt Enable - CLEAR */
#define USART1_SPI_RXCIE1_SET_gc   (0x80) /* RX Complete Interrupt Enable - SET */


/* TX Complete Interrupt Enable */
#define USART1_SPI_TXCIE1_CLEAR_gc (0x00) /* TX Complete Interrupt Enable - CLEAR */
#define USART1_SPI_TXCIE1_SET_gc   (0x40) /* TX Complete Interrupt Enable - SET */


/* USART Data Register Empty Interrupt Enable */
#define USART1_SPI_UDRIE1_CLEAR_gc (0x00) /* USART Data Register Empty Interrupt Enable - CLEAR */
#define USART1_SPI_UDRIE1_SET_gc   (0x20) /* USART Data Register Empty Interrupt Enable - SET */


/* Receiver Enable */
#define USART1_SPI_RXEN1_CLEAR_gc (0x00) /* Receiver Enable - CLEAR */
#define USART1_SPI_RXEN1_SET_gc   (0x10) /* Receiver Enable - SET */


/* Transmitter Enable */
#define USART1_SPI_TXEN1_CLEAR_gc (0x00) /* Transmitter Enable - CLEAR */
#define USART1_SPI_TXEN1_SET_gc   (0x08) /* Transmitter Enable - SET */


/* Data Order */
#define USART1_SPI_UDORD1_CLEAR_gc (0x00) /* Data Order - CLEAR */
#define USART1_SPI_UDORD1_SET_gc   (0x04) /* Data Order - SET */


/* Clock Phase */
#define USART1_SPI_UCPHA1_CLEAR_gc (0x00) /* Clock Phase - CLEAR */
#define USART1_SPI_UCPHA1_SET_gc   (0x02) /* Clock Phase - SET */


/* Clock Polarity */
#define USART1_SPI_UCPOL1_CLEAR_gc (0x00) /* Clock Polarity - CLEAR */
#define USART1_SPI_UCPOL1_SET_gc   (0x01) /* Clock Polarity - SET */


/*
--------------------------------------------------------------------------------
PORT - I/O Port
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
PORT - I/O Port
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
PORT - I/O Port
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
PORT - I/O Port
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
PORT - I/O Port
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
PORT - I/O Port
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
PORT - I/O Port
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
TC8 - Timer/Counter, 8-bit
--------------------------------------------------------------------------------
*/


/* Force Output Compare A */
#define TC0_FOC0A_CLEAR_gc (0x00) /* Force Output Compare A - CLEAR */
#define TC0_FOC0A_SET_gc   (0x80) /* Force Output Compare A - SET */


/* Force Output Compare B */
#define TC0_FOC0B_CLEAR_gc (0x00) /* Force Output Compare B - CLEAR */
#define TC0_FOC0B_SET_gc   (0x40) /* Force Output Compare B - SET */


/* Reserved Bit */
#define TC0_TCCR0B_Res_gc(x) ((x<<4) & 0x30)

/* Timer/Counter0 Control Register B-WGM02 */
#define TC0_WGM02_CLEAR_gc (0x00) /* Timer/Counter0 Control Register B-WGM02 - CLEAR */
#define TC0_WGM02_SET_gc   (0x08) /* Timer/Counter0 Control Register B-WGM02 - SET */


/* Clock Select */
#define TC0_CS0_VAL_0x00_gc (0x00) /* No clock source (Timer/Counter0 stopped) */
#define TC0_CS0_VAL_0x01_gc (0x01) /* clk_IO/1 (no prescaling) */
#define TC0_CS0_VAL_0x02_gc (0x02) /* clk_IO/8 (from prescaler) */
#define TC0_CS0_VAL_0x03_gc (0x03) /* clk_IO/64 (from prescaler) */
#define TC0_CS0_VAL_0x04_gc (0x04) /* clk_IO/256 (from prescaler) */
#define TC0_CS0_VAL_0x05_gc (0x05) /* clk_IO/1024 (from prescaler) */
#define TC0_CS0_VAL_0x06_gc (0x06) /* External clock source on T0 pin, clock on falling edge */
#define TC0_CS0_VAL_0x07_gc (0x07) /* External clock source on T0 pin, clock on rising edge */


/* Compare Match Output A Mode */
#define TC0_COM0A_VAL_0_gc (0x00<<6) /* Normal port operation, OC0A disconnected */
#define TC0_COM0A_VAL_1_gc (0x01<<6) /* Toggle OC0A on Compare Match */
#define TC0_COM0A_VAL_2_gc (0x02<<6) /* Clear OC0A on Compare Match */
#define TC0_COM0A_VAL_3_gc (0x03<<6) /* Set OC0A on Compare Match */


/* Compare Match Output B Mode */
#define TC0_COM0B_VAL_0_gc (0x00<<4) /* Normal port operation, OC0B disconnected */
#define TC0_COM0B_VAL_1_gc (0x01<<4) /* Toggle OC0B on Compare Match */
#define TC0_COM0B_VAL_2_gc (0x02<<4) /* Clear OC0B on Compare Match */
#define TC0_COM0B_VAL_3_gc (0x03<<4) /* Set OC0B on Compare Match */


/* Reserved Bit */
#define TC0_TCCR0A_Res_gc(x) ((x<<2) & 0x0C)

/* Waveform Generation Mode */
#define TC0_WGM0_VAL_0x0_gc (0x00) /* Normal mode of operation */
#define TC0_WGM0_VAL_0x1_gc (0x01) /* PWM, phase correct, TOP=0xFF */
#define TC0_WGM0_VAL_0x2_gc (0x02) /* CTC, TOP = OCRA */
#define TC0_WGM0_VAL_0x3_gc (0x03) /* Fast PWM, TOP=0xFF */
#define TC0_WGM0_VAL_0x4_gc (0x04) /* Reserved */
#define TC0_WGM0_VAL_0x5_gc (0x05) /* PWM, Phase correct, TOP = OCRA */
#define TC0_WGM0_VAL_0x6_gc (0x06) /* Reserved */
#define TC0_WGM0_VAL_0x7_gc (0x07) /* Fast PWM, TOP=OCRA */


/* Reserved */
#define TC0_TIMSK0_Res_gc(x) ((x<<3) & 0xF8)

/* Timer/Counter0 Output Compare Match B Interrupt Enable */
#define TC0_OCIE0B_CLEAR_gc (0x00) /* Timer/Counter0 Output Compare Match B Interrupt Enable - CLEAR */
#define TC0_OCIE0B_SET_gc   (0x04) /* Timer/Counter0 Output Compare Match B Interrupt Enable - SET */


/* Timer/Counter0 Output Compare Match A Interrupt Enable */
#define TC0_OCIE0A_CLEAR_gc (0x00) /* Timer/Counter0 Output Compare Match A Interrupt Enable - CLEAR */
#define TC0_OCIE0A_SET_gc   (0x02) /* Timer/Counter0 Output Compare Match A Interrupt Enable - SET */


/* Timer/Counter0 Overflow Interrupt Enable */
#define TC0_TOIE0_CLEAR_gc (0x00) /* Timer/Counter0 Overflow Interrupt Enable - CLEAR */
#define TC0_TOIE0_SET_gc   (0x01) /* Timer/Counter0 Overflow Interrupt Enable - SET */


/* Reserved */
#define TC0_TIFR0_Res_gc(x) ((x<<3) & 0xF8)

/* Timer/Counter0 Output Compare B Match Flag */
#define TC0_OCF0B_CLEAR_gc (0x00) /* Timer/Counter0 Output Compare B Match Flag - CLEAR */
#define TC0_OCF0B_SET_gc   (0x04) /* Timer/Counter0 Output Compare B Match Flag - SET */


/* Timer/Counter0 Output Compare A Match Flag */
#define TC0_OCF0A_CLEAR_gc (0x00) /* Timer/Counter0 Output Compare A Match Flag - CLEAR */
#define TC0_OCF0A_SET_gc   (0x02) /* Timer/Counter0 Output Compare A Match Flag - SET */


/* Timer/Counter0 Overflow Flag */
#define TC0_TOV0_CLEAR_gc (0x00) /* Timer/Counter0 Overflow Flag - CLEAR */
#define TC0_TOV0_SET_gc   (0x01) /* Timer/Counter0 Overflow Flag - SET */


/* Timer/Counter Synchronization Mode */
#define TC0_TSM_CLEAR_gc (0x00) /* Timer/Counter Synchronization Mode - CLEAR */
#define TC0_TSM_SET_gc   (0x80) /* Timer/Counter Synchronization Mode - SET */


/* Reserved */
#define TC0_GTCCR_Res_gc(x) ((x<<2) & 0x7C)

/* Prescaler Reset Timer/Counter2 */
#define TC0_PSRASY_CLEAR_gc (0x00) /* Prescaler Reset Timer/Counter2 - CLEAR */
#define TC0_PSRASY_SET_gc   (0x02) /* Prescaler Reset Timer/Counter2 - SET */


/* Prescaler Reset for Synchronous Timer/Counters */
#define TC0_PSRSYNC_CLEAR_gc (0x00) /* Prescaler Reset for Synchronous Timer/Counters - CLEAR */
#define TC0_PSRSYNC_SET_gc   (0x01) /* Prescaler Reset for Synchronous Timer/Counters - SET */


/*
--------------------------------------------------------------------------------
TC8_ASYNC - Timer/Counter, 8-bit Async
--------------------------------------------------------------------------------
*/


/* Reserved Bit */
#define TC2_TIMSK2_Res_gc(x) ((x<<3) & 0xF8)

/* Timer/Counter2 Output Compare Match B Interrupt Enable */
#define TC2_OCIE2B_CLEAR_gc (0x00) /* Timer/Counter2 Output Compare Match B Interrupt Enable - CLEAR */
#define TC2_OCIE2B_SET_gc   (0x04) /* Timer/Counter2 Output Compare Match B Interrupt Enable - SET */


/* Timer/Counter2 Output Compare Match A Interrupt Enable */
#define TC2_OCIE2A_CLEAR_gc (0x00) /* Timer/Counter2 Output Compare Match A Interrupt Enable - CLEAR */
#define TC2_OCIE2A_SET_gc   (0x02) /* Timer/Counter2 Output Compare Match A Interrupt Enable - SET */


/* Timer/Counter2 Overflow Interrupt Enable */
#define TC2_TOIE2_CLEAR_gc (0x00) /* Timer/Counter2 Overflow Interrupt Enable - CLEAR */
#define TC2_TOIE2_SET_gc   (0x01) /* Timer/Counter2 Overflow Interrupt Enable - SET */


/* Reserved Bit */
#define TC2_TIFR2_Res_gc(x) ((x<<3) & 0xF8)

/* Output Compare Flag 2 B */
#define TC2_OCF2B_CLEAR_gc (0x00) /* Output Compare Flag 2 B - CLEAR */
#define TC2_OCF2B_SET_gc   (0x04) /* Output Compare Flag 2 B - SET */


/* Output Compare Flag 2 A */
#define TC2_OCF2A_CLEAR_gc (0x00) /* Output Compare Flag 2 A - CLEAR */
#define TC2_OCF2A_SET_gc   (0x02) /* Output Compare Flag 2 A - SET */


/* Timer/Counter2 Overflow Flag */
#define TC2_TOV2_CLEAR_gc (0x00) /* Timer/Counter2 Overflow Flag - CLEAR */
#define TC2_TOV2_SET_gc   (0x01) /* Timer/Counter2 Overflow Flag - SET */


/* Compare Match Output A Mode */
#define TC2_COM2A_VAL_0_gc (0x00<<6) /* Normal port operation, OC2A disconnected */
#define TC2_COM2A_VAL_1_gc (0x01<<6) /* Toggle OC2A on Compare Match */
#define TC2_COM2A_VAL_2_gc (0x02<<6) /* Clear OC2A on Compare Match */
#define TC2_COM2A_VAL_3_gc (0x03<<6) /* Set OC2A on Compare Match */


/* Compare Match Output B Mode */
#define TC2_COM2B_VAL_0_gc (0x00<<4) /* Normal port operation, OC2B disconnected */
#define TC2_COM2B_VAL_1_gc (0x01<<4) /* Toggle OC2B on Compare Match */
#define TC2_COM2B_VAL_2_gc (0x02<<4) /* Clear OC2B on Compare Match */
#define TC2_COM2B_VAL_3_gc (0x03<<4) /* Set OC2B on Compare Match */


/* Reserved */
#define TC2_TCCR2A_Res_gc(x) ((x<<2) & 0x0C)

/* Waveform Generation Mode */
#define TC2_WGM2_VAL_0x0_gc (0x00) /* Normal mode of operation */
#define TC2_WGM2_VAL_0x1_gc (0x01) /* PWM, phase correct, TOP=0xFF */
#define TC2_WGM2_VAL_0x2_gc (0x02) /* CTC, TOP = OCRA */
#define TC2_WGM2_VAL_0x3_gc (0x03) /* Fast PWM, TOP=0xFF */
#define TC2_WGM2_VAL_0x4_gc (0x04) /* Reserved */
#define TC2_WGM2_VAL_0x5_gc (0x05) /* PWM, Phase correct, TOP = OCRA */
#define TC2_WGM2_VAL_0x6_gc (0x06) /* Reserved */
#define TC2_WGM2_VAL_0x7_gc (0x07) /* Fast PWM, TOP=OCRA */


/* Force Output Compare A */
#define TC2_FOC2A_CLEAR_gc (0x00) /* Force Output Compare A - CLEAR */
#define TC2_FOC2A_SET_gc   (0x80) /* Force Output Compare A - SET */


/* Force Output Compare B */
#define TC2_FOC2B_CLEAR_gc (0x00) /* Force Output Compare B - CLEAR */
#define TC2_FOC2B_SET_gc   (0x40) /* Force Output Compare B - SET */


/* Reserved */
#define TC2_TCCR2B_Res_gc(x) ((x<<4) & 0x30)

/* Waveform Generation Mode */
#define TC2_WGM22_CLEAR_gc (0x00) /* Waveform Generation Mode - CLEAR */
#define TC2_WGM22_SET_gc   (0x08) /* Waveform Generation Mode - SET */


/* Clock Select */
#define TC2_CS2_VAL_0x00_gc (0x00) /* No clock source (Timer/Counter2 stopped) */
#define TC2_CS2_VAL_0x01_gc (0x01) /* clk_T2S/1 (no prescaling) */
#define TC2_CS2_VAL_0x02_gc (0x02) /* clk_T2S/8 (from prescaler) */
#define TC2_CS2_VAL_0x03_gc (0x03) /* clk_T2S/32 (from prescaler) */
#define TC2_CS2_VAL_0x04_gc (0x04) /* clk_T2S/64 (from prescaler) */
#define TC2_CS2_VAL_0x05_gc (0x05) /* clk_T2S/128 (from prescaler) */
#define TC2_CS2_VAL_0x06_gc (0x06) /* clk_T2S/256 (from prescaler) */
#define TC2_CS2_VAL_0x07_gc (0x07) /* clk_T2S/1024 (from prescaler) */


/* Enable External Clock Input for AMR */
#define TC2_EXCLKAMR_CLEAR_gc (0x00) /* Enable External Clock Input for AMR - CLEAR */
#define TC2_EXCLKAMR_SET_gc   (0x80) /* Enable External Clock Input for AMR - SET */


/* Enable External Clock Input */
#define TC2_EXCLK_CLEAR_gc (0x00) /* Enable External Clock Input - CLEAR */
#define TC2_EXCLK_SET_gc   (0x40) /* Enable External Clock Input - SET */


/* Timer/Counter2 Asynchronous Mode */
#define TC2_AS2_CLEAR_gc (0x00) /* Timer/Counter2 Asynchronous Mode - CLEAR */
#define TC2_AS2_SET_gc   (0x20) /* Timer/Counter2 Asynchronous Mode - SET */


/* Timer/Counter2 Update Busy */
#define TC2_TCN2UB_CLEAR_gc (0x00) /* Timer/Counter2 Update Busy - CLEAR */
#define TC2_TCN2UB_SET_gc   (0x10) /* Timer/Counter2 Update Busy - SET */


/* Timer/Counter2 Output Compare Register A Update Busy */
#define TC2_OCR2AUB_CLEAR_gc (0x00) /* Timer/Counter2 Output Compare Register A Update Busy - CLEAR */
#define TC2_OCR2AUB_SET_gc   (0x08) /* Timer/Counter2 Output Compare Register A Update Busy - SET */


/* Timer/Counter2 Output Compare Register B Update Busy */
#define TC2_OCR2BUB_CLEAR_gc (0x00) /* Timer/Counter2 Output Compare Register B Update Busy - CLEAR */
#define TC2_OCR2BUB_SET_gc   (0x04) /* Timer/Counter2 Output Compare Register B Update Busy - SET */


/* Timer/Counter2 Control Register A Update Busy */
#define TC2_TCR2AUB_CLEAR_gc (0x00) /* Timer/Counter2 Control Register A Update Busy - CLEAR */
#define TC2_TCR2AUB_SET_gc   (0x02) /* Timer/Counter2 Control Register A Update Busy - SET */


/* Timer/Counter2 Control Register B Update Busy */
#define TC2_TCR2BUB_CLEAR_gc (0x00) /* Timer/Counter2 Control Register B Update Busy - CLEAR */
#define TC2_TCR2BUB_SET_gc   (0x01) /* Timer/Counter2 Control Register B Update Busy - SET */


/* Timer/Counter Synchronization Mode */
#define TC2_TSM_CLEAR_gc (0x00) /* Timer/Counter Synchronization Mode - CLEAR */
#define TC2_TSM_SET_gc   (0x80) /* Timer/Counter Synchronization Mode - SET */


/* Prescaler Reset Timer/Counter2 */
#define TC2_PSRASY_CLEAR_gc (0x00) /* Prescaler Reset Timer/Counter2 - CLEAR */
#define TC2_PSRASY_SET_gc   (0x02) /* Prescaler Reset Timer/Counter2 - SET */


/*
--------------------------------------------------------------------------------
WDT - Watchdog Timer
--------------------------------------------------------------------------------
*/


/* Watchdog Timeout Interrupt Flag */
#define WDT_WDIF_CLEAR_gc (0x00) /* Watchdog Timeout Interrupt Flag - CLEAR */
#define WDT_WDIF_SET_gc   (0x80) /* Watchdog Timeout Interrupt Flag - SET */


/* Watchdog Timeout Interrupt Enable */
#define WDT_WDIE_CLEAR_gc (0x00) /* Watchdog Timeout Interrupt Enable - CLEAR */
#define WDT_WDIE_SET_gc   (0x40) /* Watchdog Timeout Interrupt Enable - SET */


/* Watchdog Timer Prescaler Bits */
#define WDT_WDP_VAL_0x00_gc (0x00) /* Oscillator Cycles 2K */
#define WDT_WDP_VAL_0x01_gc (0x01) /* Oscillator Cycles 4K */
#define WDT_WDP_VAL_0x02_gc (0x02) /* Oscillator Cycles 8K */
#define WDT_WDP_VAL_0x03_gc (0x03) /* Oscillator Cycles 16K */
#define WDT_WDP_VAL_0x04_gc (0x04) /* Oscillator Cycles 32K */
#define WDT_WDP_VAL_0x05_gc (0x05) /* Oscillator Cycles 64K */
#define WDT_WDP_VAL_0x06_gc (0x06) /* Oscillator Cycles 128K */
#define WDT_WDP_VAL_0x07_gc (0x07) /* Oscillator Cycles 256K */
#define WDT_WDP_VAL_0x08_gc (0x08) /* Oscillator Cycles 512K */
#define WDT_WDP_VAL_0x09_gc (0x09) /* Oscillator Cycles 1024K */


/* Watchdog Change Enable */
#define WDT_WDCE_CLEAR_gc (0x00) /* Watchdog Change Enable - CLEAR */
#define WDT_WDCE_SET_gc   (0x10) /* Watchdog Change Enable - SET */


/* Watch Dog Enable */
#define WDT_WDE_CLEAR_gc (0x00) /* Watch Dog Enable - CLEAR */
#define WDT_WDE_SET_gc   (0x08) /* Watch Dog Enable - SET */


/*
--------------------------------------------------------------------------------
TC16 - Timer/Counter, 16-bit
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
TC16 - Timer/Counter, 16-bit
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
TC16 - Timer/Counter, 16-bit
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
TC16 - Timer/Counter, 16-bit
--------------------------------------------------------------------------------
*/


/* Compare Output Mode for Channel A */
#define TC5_COM5A_VAL_0_gc (0x00<<6) /* Normal operation */
#define TC5_COM5A_VAL_1_gc (0x01<<6) /* Reserved */
#define TC5_COM5A_VAL_2_gc (0x02<<6) /* Reserved */
#define TC5_COM5A_VAL_3_gc (0x03<<6) /* Reserved */


/* Compare Output Mode for Channel B */
#define TC5_COM5B_VAL_0_gc (0x00<<4) /* Normal operation */
#define TC5_COM5B_VAL_1_gc (0x01<<4) /* Reserved */
#define TC5_COM5B_VAL_2_gc (0x02<<4) /* Reserved */
#define TC5_COM5B_VAL_3_gc (0x03<<4) /* Reserved */


/* Compare Output Mode for Channel C */
#define TC5_COM5C_VAL_0_gc (0x00<<2) /* Normal operation */
#define TC5_COM5C_VAL_1_gc (0x01<<2) /* Reserved */
#define TC5_COM5C_VAL_2_gc (0x02<<2) /* Reserved */
#define TC5_COM5C_VAL_3_gc (0x03<<2) /* Reserved */


/* Waveform Generation Mode */
#define TC5_WGM5_VAL_0x0_gc (0x00) /* Normal mode of operation */
#define TC5_WGM5_VAL_0x1_gc (0x01) /* PWM, phase correct, 8-bit */
#define TC5_WGM5_VAL_0x2_gc (0x02) /* PWM, phase correct, 9-bit */
#define TC5_WGM5_VAL_0x3_gc (0x03) /* PWM, phase correct, 10-bit */
#define TC5_WGM5_VAL_0x4_gc (0x04) /* CTC, TOP = OCRnA */
#define TC5_WGM5_VAL_0x5_gc (0x05) /* Fast PWM, 8-bit */
#define TC5_WGM5_VAL_0x6_gc (0x06) /* Fast PWM, 9-bit */
#define TC5_WGM5_VAL_0x7_gc (0x07) /* Fast PWM, 10-bit */
#define TC5_WGM5_VAL_0x8_gc (0x08) /* PWM, Phase and frequency correct, TOP = ICRn */
#define TC5_WGM5_VAL_0x9_gc (0x09) /* PWM, Phase and frequency correct, TOP = OCRnA */
#define TC5_WGM5_VAL_0xA_gc (0x0A) /* PWM, Phase correct, TOP = ICRn */
#define TC5_WGM5_VAL_0xB_gc (0x0B) /* PWM, Phase correct, TOP = OCRnA */
#define TC5_WGM5_VAL_0xC_gc (0x0C) /* CTC, TOP = OCRnA */
#define TC5_WGM5_VAL_0xD_gc (0x0D) /* Reserved */
#define TC5_WGM5_VAL_0xE_gc (0x0E) /* Fast PWM, TOP = ICRn */
#define TC5_WGM5_VAL_0xF_gc (0x0F) /* Fast PWM, TOP = OCRnA */


/* Input Capture 5 Noise Canceller */
#define TC5_ICNC5_CLEAR_gc (0x00) /* Input Capture 5 Noise Canceller - CLEAR */
#define TC5_ICNC5_SET_gc   (0x80) /* Input Capture 5 Noise Canceller - SET */


/* Input Capture 5 Edge Select */
#define TC5_ICES5_CLEAR_gc (0x00) /* Input Capture 5 Edge Select - CLEAR */
#define TC5_ICES5_SET_gc   (0x40) /* Input Capture 5 Edge Select - SET */


/* Reserved Bit */
#define TC5_Res_CLEAR_gc (0x00) /* Reserved Bit - CLEAR */
#define TC5_Res_SET_gc   (0x20) /* Reserved Bit - SET */


/* Waveform Generation Mode */
/* WARNING: TC5_WGM5_VAL_0x0_gc ALREADY DEFINED as '(0x00)' NOT '(0x00<<3)' */
/* WARNING: TC5_WGM5_VAL_0x1_gc ALREADY DEFINED as '(0x01)' NOT '(0x01<<3)' */
/* WARNING: TC5_WGM5_VAL_0x2_gc ALREADY DEFINED as '(0x02)' NOT '(0x02<<3)' */
/* WARNING: TC5_WGM5_VAL_0x3_gc ALREADY DEFINED as '(0x03)' NOT '(0x03<<3)' */
/* WARNING: TC5_WGM5_VAL_0x4_gc ALREADY DEFINED as '(0x04)' NOT '(0x04<<3)' */
/* WARNING: TC5_WGM5_VAL_0x5_gc ALREADY DEFINED as '(0x05)' NOT '(0x05<<3)' */
/* WARNING: TC5_WGM5_VAL_0x6_gc ALREADY DEFINED as '(0x06)' NOT '(0x06<<3)' */
/* WARNING: TC5_WGM5_VAL_0x7_gc ALREADY DEFINED as '(0x07)' NOT '(0x07<<3)' */
/* WARNING: TC5_WGM5_VAL_0x8_gc ALREADY DEFINED as '(0x08)' NOT '(0x08<<3)' */
/* WARNING: TC5_WGM5_VAL_0x9_gc ALREADY DEFINED as '(0x09)' NOT '(0x09<<3)' */
/* WARNING: TC5_WGM5_VAL_0xA_gc ALREADY DEFINED as '(0x0A)' NOT '(0x0A<<3)' */
/* WARNING: TC5_WGM5_VAL_0xB_gc ALREADY DEFINED as '(0x0B)' NOT '(0x0B<<3)' */
/* WARNING: TC5_WGM5_VAL_0xC_gc ALREADY DEFINED as '(0x0C)' NOT '(0x0C<<3)' */
/* WARNING: TC5_WGM5_VAL_0xD_gc ALREADY DEFINED as '(0x0D)' NOT '(0x0D<<3)' */
/* WARNING: TC5_WGM5_VAL_0xE_gc ALREADY DEFINED as '(0x0E)' NOT '(0x0E<<3)' */
/* WARNING: TC5_WGM5_VAL_0xF_gc ALREADY DEFINED as '(0x0F)' NOT '(0x0F<<3)' */


/* Clock Select */
#define TC5_CS5_VAL_0x00_gc (0x00) /* No clock source (Timer/Counter stopped) */
#define TC5_CS5_VAL_0x01_gc (0x01) /* clk_IO/1 (no prescaling) */
#define TC5_CS5_VAL_0x02_gc (0x02) /* clk_IO/8 (from prescaler) */
#define TC5_CS5_VAL_0x03_gc (0x03) /* clk_IO/64 (from prescaler) */
#define TC5_CS5_VAL_0x04_gc (0x04) /* clk_IO/256 (from prescaler) */
#define TC5_CS5_VAL_0x05_gc (0x05) /* clk_IO/1024 (from prescaler) */
#define TC5_CS5_VAL_0x06_gc (0x06) /* Reserved */
#define TC5_CS5_VAL_0x07_gc (0x07) /* Reserved */


/* Force Output Compare for Channel A */
#define TC5_FOC5A_CLEAR_gc (0x00) /* Force Output Compare for Channel A - CLEAR */
#define TC5_FOC5A_SET_gc   (0x80) /* Force Output Compare for Channel A - SET */


/* Force Output Compare for Channel B */
#define TC5_FOC5B_CLEAR_gc (0x00) /* Force Output Compare for Channel B - CLEAR */
#define TC5_FOC5B_SET_gc   (0x40) /* Force Output Compare for Channel B - SET */


/* Force Output Compare for Channel C */
#define TC5_FOC5C_CLEAR_gc (0x00) /* Force Output Compare for Channel C - CLEAR */
#define TC5_FOC5C_SET_gc   (0x20) /* Force Output Compare for Channel C - SET */


/* Reserved */
#define TC5_TCCR5C_Res_gc(x) (x & 0x1F)

/* Timer/Counter5 Input Capture Interrupt Enable */
#define TC5_ICIE5_CLEAR_gc (0x00) /* Timer/Counter5 Input Capture Interrupt Enable - CLEAR */
#define TC5_ICIE5_SET_gc   (0x20) /* Timer/Counter5 Input Capture Interrupt Enable - SET */


/* Timer/Counter5 Output Compare C Match Interrupt Enable */
#define TC5_OCIE5C_CLEAR_gc (0x00) /* Timer/Counter5 Output Compare C Match Interrupt Enable - CLEAR */
#define TC5_OCIE5C_SET_gc   (0x08) /* Timer/Counter5 Output Compare C Match Interrupt Enable - SET */


/* Timer/Counter5 Output Compare B Match Interrupt Enable */
#define TC5_OCIE5B_CLEAR_gc (0x00) /* Timer/Counter5 Output Compare B Match Interrupt Enable - CLEAR */
#define TC5_OCIE5B_SET_gc   (0x04) /* Timer/Counter5 Output Compare B Match Interrupt Enable - SET */


/* Timer/Counter5 Output Compare A Match Interrupt Enable */
#define TC5_OCIE5A_CLEAR_gc (0x00) /* Timer/Counter5 Output Compare A Match Interrupt Enable - CLEAR */
#define TC5_OCIE5A_SET_gc   (0x02) /* Timer/Counter5 Output Compare A Match Interrupt Enable - SET */


/* Timer/Counter5 Overflow Interrupt Enable */
#define TC5_TOIE5_CLEAR_gc (0x00) /* Timer/Counter5 Overflow Interrupt Enable - CLEAR */
#define TC5_TOIE5_SET_gc   (0x01) /* Timer/Counter5 Overflow Interrupt Enable - SET */


/* Timer/Counter5 Input Capture Flag */
#define TC5_ICF5_CLEAR_gc (0x00) /* Timer/Counter5 Input Capture Flag - CLEAR */
#define TC5_ICF5_SET_gc   (0x20) /* Timer/Counter5 Input Capture Flag - SET */


/* Timer/Counter5 Output Compare C Match Flag */
#define TC5_OCF5C_CLEAR_gc (0x00) /* Timer/Counter5 Output Compare C Match Flag - CLEAR */
#define TC5_OCF5C_SET_gc   (0x08) /* Timer/Counter5 Output Compare C Match Flag - SET */


/* Timer/Counter5 Output Compare B Match Flag */
#define TC5_OCF5B_CLEAR_gc (0x00) /* Timer/Counter5 Output Compare B Match Flag - CLEAR */
#define TC5_OCF5B_SET_gc   (0x04) /* Timer/Counter5 Output Compare B Match Flag - SET */


/* Timer/Counter5 Output Compare A Match Flag */
#define TC5_OCF5A_CLEAR_gc (0x00) /* Timer/Counter5 Output Compare A Match Flag - CLEAR */
#define TC5_OCF5A_SET_gc   (0x02) /* Timer/Counter5 Output Compare A Match Flag - SET */


/* Timer/Counter5 Overflow Flag */
#define TC5_TOV5_CLEAR_gc (0x00) /* Timer/Counter5 Overflow Flag - CLEAR */
#define TC5_TOV5_SET_gc   (0x01) /* Timer/Counter5 Overflow Flag - SET */


/* Compare Output Mode for Channel A */
#define TC4_COM4A_VAL_0_gc (0x00<<6) /* Normal operation */
#define TC4_COM4A_VAL_1_gc (0x01<<6) /* Reserved */
#define TC4_COM4A_VAL_2_gc (0x02<<6) /* Reserved */
#define TC4_COM4A_VAL_3_gc (0x03<<6) /* Reserved */


/* Compare Output Mode for Channel B */
#define TC4_COM4B_VAL_0_gc (0x00<<4) /* Normal operation */
#define TC4_COM4B_VAL_1_gc (0x01<<4) /* Reserved */
#define TC4_COM4B_VAL_2_gc (0x02<<4) /* Reserved */
#define TC4_COM4B_VAL_3_gc (0x03<<4) /* Reserved */


/* Compare Output Mode for Channel C */
#define TC4_COM4C_VAL_0_gc (0x00<<2) /* Normal operation */
#define TC4_COM4C_VAL_1_gc (0x01<<2) /* Reserved */
#define TC4_COM4C_VAL_2_gc (0x02<<2) /* Reserved */
#define TC4_COM4C_VAL_3_gc (0x03<<2) /* Reserved */


/* Waveform Generation Mode */
#define TC4_WGM4_VAL_0x0_gc (0x00) /* Normal mode of operation */
#define TC4_WGM4_VAL_0x1_gc (0x01) /* PWM, phase correct, 8-bit */
#define TC4_WGM4_VAL_0x2_gc (0x02) /* PWM, phase correct, 9-bit */
#define TC4_WGM4_VAL_0x3_gc (0x03) /* PWM, phase correct, 10-bit */
#define TC4_WGM4_VAL_0x4_gc (0x04) /* CTC, TOP = OCRnA */
#define TC4_WGM4_VAL_0x5_gc (0x05) /* Fast PWM, 8-bit */
#define TC4_WGM4_VAL_0x6_gc (0x06) /* Fast PWM, 9-bit */
#define TC4_WGM4_VAL_0x7_gc (0x07) /* Fast PWM, 10-bit */
#define TC4_WGM4_VAL_0x8_gc (0x08) /* PWM, Phase and frequency correct, TOP = ICRn */
#define TC4_WGM4_VAL_0x9_gc (0x09) /* PWM, Phase and frequency correct, TOP = OCRnA */
#define TC4_WGM4_VAL_0xA_gc (0x0A) /* PWM, Phase correct, TOP = ICRn */
#define TC4_WGM4_VAL_0xB_gc (0x0B) /* PWM, Phase correct, TOP = OCRnA */
#define TC4_WGM4_VAL_0xC_gc (0x0C) /* CTC, TOP = OCRnA */
#define TC4_WGM4_VAL_0xD_gc (0x0D) /* Reserved */
#define TC4_WGM4_VAL_0xE_gc (0x0E) /* Fast PWM, TOP = ICRn */
#define TC4_WGM4_VAL_0xF_gc (0x0F) /* Fast PWM, TOP = OCRnA */


/* Input Capture 4 Noise Canceller */
#define TC4_ICNC4_CLEAR_gc (0x00) /* Input Capture 4 Noise Canceller - CLEAR */
#define TC4_ICNC4_SET_gc   (0x80) /* Input Capture 4 Noise Canceller - SET */


/* Input Capture 4 Edge Select */
#define TC4_ICES4_CLEAR_gc (0x00) /* Input Capture 4 Edge Select - CLEAR */
#define TC4_ICES4_SET_gc   (0x40) /* Input Capture 4 Edge Select - SET */


/* Reserved Bit */
#define TC4_Res_CLEAR_gc (0x00) /* Reserved Bit - CLEAR */
#define TC4_Res_SET_gc   (0x20) /* Reserved Bit - SET */


/* Waveform Generation Mode */
/* WARNING: TC4_WGM4_VAL_0x0_gc ALREADY DEFINED as '(0x00)' NOT '(0x00<<3)' */
/* WARNING: TC4_WGM4_VAL_0x1_gc ALREADY DEFINED as '(0x01)' NOT '(0x01<<3)' */
/* WARNING: TC4_WGM4_VAL_0x2_gc ALREADY DEFINED as '(0x02)' NOT '(0x02<<3)' */
/* WARNING: TC4_WGM4_VAL_0x3_gc ALREADY DEFINED as '(0x03)' NOT '(0x03<<3)' */
/* WARNING: TC4_WGM4_VAL_0x4_gc ALREADY DEFINED as '(0x04)' NOT '(0x04<<3)' */
/* WARNING: TC4_WGM4_VAL_0x5_gc ALREADY DEFINED as '(0x05)' NOT '(0x05<<3)' */
/* WARNING: TC4_WGM4_VAL_0x6_gc ALREADY DEFINED as '(0x06)' NOT '(0x06<<3)' */
/* WARNING: TC4_WGM4_VAL_0x7_gc ALREADY DEFINED as '(0x07)' NOT '(0x07<<3)' */
/* WARNING: TC4_WGM4_VAL_0x8_gc ALREADY DEFINED as '(0x08)' NOT '(0x08<<3)' */
/* WARNING: TC4_WGM4_VAL_0x9_gc ALREADY DEFINED as '(0x09)' NOT '(0x09<<3)' */
/* WARNING: TC4_WGM4_VAL_0xA_gc ALREADY DEFINED as '(0x0A)' NOT '(0x0A<<3)' */
/* WARNING: TC4_WGM4_VAL_0xB_gc ALREADY DEFINED as '(0x0B)' NOT '(0x0B<<3)' */
/* WARNING: TC4_WGM4_VAL_0xC_gc ALREADY DEFINED as '(0x0C)' NOT '(0x0C<<3)' */
/* WARNING: TC4_WGM4_VAL_0xD_gc ALREADY DEFINED as '(0x0D)' NOT '(0x0D<<3)' */
/* WARNING: TC4_WGM4_VAL_0xE_gc ALREADY DEFINED as '(0x0E)' NOT '(0x0E<<3)' */
/* WARNING: TC4_WGM4_VAL_0xF_gc ALREADY DEFINED as '(0x0F)' NOT '(0x0F<<3)' */


/* Clock Select */
#define TC4_CS4_VAL_0x00_gc (0x00) /* No clock source (Timer/Counter stopped) */
#define TC4_CS4_VAL_0x01_gc (0x01) /* clk_IO/1 (no prescaling) */
#define TC4_CS4_VAL_0x02_gc (0x02) /* clk_IO/8 (from prescaler) */
#define TC4_CS4_VAL_0x03_gc (0x03) /* clk_IO/64 (from prescaler) */
#define TC4_CS4_VAL_0x04_gc (0x04) /* clk_IO/256 (from prescaler) */
#define TC4_CS4_VAL_0x05_gc (0x05) /* clk_IO/1024 (from prescaler) */
#define TC4_CS4_VAL_0x06_gc (0x06) /* Reserved */
#define TC4_CS4_VAL_0x07_gc (0x07) /* Reserved */


/* Force Output Compare for Channel A */
#define TC4_FOC4A_CLEAR_gc (0x00) /* Force Output Compare for Channel A - CLEAR */
#define TC4_FOC4A_SET_gc   (0x80) /* Force Output Compare for Channel A - SET */


/* Force Output Compare for Channel B */
#define TC4_FOC4B_CLEAR_gc (0x00) /* Force Output Compare for Channel B - CLEAR */
#define TC4_FOC4B_SET_gc   (0x40) /* Force Output Compare for Channel B - SET */


/* Force Output Compare for Channel C */
#define TC4_FOC4C_CLEAR_gc (0x00) /* Force Output Compare for Channel C - CLEAR */
#define TC4_FOC4C_SET_gc   (0x20) /* Force Output Compare for Channel C - SET */


/* Reserved */
#define TC4_TCCR4C_Res_gc(x) (x & 0x1F)

/* Timer/Counter4 Input Capture Interrupt Enable */
#define TC4_ICIE4_CLEAR_gc (0x00) /* Timer/Counter4 Input Capture Interrupt Enable - CLEAR */
#define TC4_ICIE4_SET_gc   (0x20) /* Timer/Counter4 Input Capture Interrupt Enable - SET */


/* Timer/Counter4 Output Compare C Match Interrupt Enable */
#define TC4_OCIE4C_CLEAR_gc (0x00) /* Timer/Counter4 Output Compare C Match Interrupt Enable - CLEAR */
#define TC4_OCIE4C_SET_gc   (0x08) /* Timer/Counter4 Output Compare C Match Interrupt Enable - SET */


/* Timer/Counter4 Output Compare B Match Interrupt Enable */
#define TC4_OCIE4B_CLEAR_gc (0x00) /* Timer/Counter4 Output Compare B Match Interrupt Enable - CLEAR */
#define TC4_OCIE4B_SET_gc   (0x04) /* Timer/Counter4 Output Compare B Match Interrupt Enable - SET */


/* Timer/Counter4 Output Compare A Match Interrupt Enable */
#define TC4_OCIE4A_CLEAR_gc (0x00) /* Timer/Counter4 Output Compare A Match Interrupt Enable - CLEAR */
#define TC4_OCIE4A_SET_gc   (0x02) /* Timer/Counter4 Output Compare A Match Interrupt Enable - SET */


/* Timer/Counter4 Overflow Interrupt Enable */
#define TC4_TOIE4_CLEAR_gc (0x00) /* Timer/Counter4 Overflow Interrupt Enable - CLEAR */
#define TC4_TOIE4_SET_gc   (0x01) /* Timer/Counter4 Overflow Interrupt Enable - SET */


/* Timer/Counter4 Input Capture Flag */
#define TC4_ICF4_CLEAR_gc (0x00) /* Timer/Counter4 Input Capture Flag - CLEAR */
#define TC4_ICF4_SET_gc   (0x20) /* Timer/Counter4 Input Capture Flag - SET */


/* Timer/Counter4 Output Compare C Match Flag */
#define TC4_OCF4C_CLEAR_gc (0x00) /* Timer/Counter4 Output Compare C Match Flag - CLEAR */
#define TC4_OCF4C_SET_gc   (0x08) /* Timer/Counter4 Output Compare C Match Flag - SET */


/* Timer/Counter4 Output Compare B Match Flag */
#define TC4_OCF4B_CLEAR_gc (0x00) /* Timer/Counter4 Output Compare B Match Flag - CLEAR */
#define TC4_OCF4B_SET_gc   (0x04) /* Timer/Counter4 Output Compare B Match Flag - SET */


/* Timer/Counter4 Output Compare A Match Flag */
#define TC4_OCF4A_CLEAR_gc (0x00) /* Timer/Counter4 Output Compare A Match Flag - CLEAR */
#define TC4_OCF4A_SET_gc   (0x02) /* Timer/Counter4 Output Compare A Match Flag - SET */


/* Timer/Counter4 Overflow Flag */
#define TC4_TOV4_CLEAR_gc (0x00) /* Timer/Counter4 Overflow Flag - CLEAR */
#define TC4_TOV4_SET_gc   (0x01) /* Timer/Counter4 Overflow Flag - SET */


/* Compare Output Mode for Channel A */
#define TC3_COM3A_VAL_0_gc (0x00<<6) /* Normal port operation, OCnA/OCnB/OCnC disconnected. */
#define TC3_COM3A_VAL_1_gc (0x01<<6) /* Toggle OCnA/OCnB/OCnC on Compare Match. */
#define TC3_COM3A_VAL_2_gc (0x02<<6) /* Clear OCnA/OCnB/OCnC on Compare Match (set output to low level). */
#define TC3_COM3A_VAL_3_gc (0x03<<6) /* Set OCnA/OCnB/OCnC on Compare Match (set output to high level). */


/* Compare Output Mode for Channel B */
#define TC3_COM3B_VAL_0_gc (0x00<<4) /* Normal port operation, OCnA/OCnB/OCnC disconnected. */
#define TC3_COM3B_VAL_1_gc (0x01<<4) /* Toggle OCnA/OCnB/OCnC on Compare Match. */
#define TC3_COM3B_VAL_2_gc (0x02<<4) /* Clear OCnA/OCnB/OCnC on Compare Match (set output to low level). */
#define TC3_COM3B_VAL_3_gc (0x03<<4) /* Set OCnA/OCnB/OCnC on Compare Match (set output to high level). */


/* Compare Output Mode for Channel C */
#define TC3_COM3C_VAL_0_gc (0x00<<2) /* Normal port operation, OCnA/OCnB/OCnC disconnected. */
#define TC3_COM3C_VAL_1_gc (0x01<<2) /* Toggle OCnA/OCnB/OCnC on Compare Match. */
#define TC3_COM3C_VAL_2_gc (0x02<<2) /* Clear OCnA/OCnB/OCnC on Compare Match (set output to low level). */
#define TC3_COM3C_VAL_3_gc (0x03<<2) /* Set OCnA/OCnB/OCnC on Compare Match (set output to high level). */


/* Waveform Generation Mode */
#define TC3_WGM3_VAL_0x0_gc (0x00) /* Normal mode of operation */
#define TC3_WGM3_VAL_0x1_gc (0x01) /* PWM, phase correct, 8-bit */
#define TC3_WGM3_VAL_0x2_gc (0x02) /* PWM, phase correct, 9-bit */
#define TC3_WGM3_VAL_0x3_gc (0x03) /* PWM, phase correct, 10-bit */
#define TC3_WGM3_VAL_0x4_gc (0x04) /* CTC, TOP = OCRnA */
#define TC3_WGM3_VAL_0x5_gc (0x05) /* Fast PWM, 8-bit */
#define TC3_WGM3_VAL_0x6_gc (0x06) /* Fast PWM, 9-bit */
#define TC3_WGM3_VAL_0x7_gc (0x07) /* Fast PWM, 10-bit */
#define TC3_WGM3_VAL_0x8_gc (0x08) /* PWM, Phase and frequency correct, TOP = ICRn */
#define TC3_WGM3_VAL_0x9_gc (0x09) /* PWM, Phase and frequency correct, TOP = OCRnA */
#define TC3_WGM3_VAL_0xA_gc (0x0A) /* PWM, Phase correct, TOP = ICRn */
#define TC3_WGM3_VAL_0xB_gc (0x0B) /* PWM, Phase correct, TOP = OCRnA */
#define TC3_WGM3_VAL_0xC_gc (0x0C) /* CTC, TOP = OCRnA */
#define TC3_WGM3_VAL_0xD_gc (0x0D) /* Reserved */
#define TC3_WGM3_VAL_0xE_gc (0x0E) /* Fast PWM, TOP = ICRn */
#define TC3_WGM3_VAL_0xF_gc (0x0F) /* Fast PWM, TOP = OCRnA */


/* Input Capture 3 Noise Canceller */
#define TC3_ICNC3_CLEAR_gc (0x00) /* Input Capture 3 Noise Canceller - CLEAR */
#define TC3_ICNC3_SET_gc   (0x80) /* Input Capture 3 Noise Canceller - SET */


/* Input Capture 3 Edge Select */
#define TC3_ICES3_CLEAR_gc (0x00) /* Input Capture 3 Edge Select - CLEAR */
#define TC3_ICES3_SET_gc   (0x40) /* Input Capture 3 Edge Select - SET */


/* Reserved Bit */
#define TC3_Res_CLEAR_gc (0x00) /* Reserved Bit - CLEAR */
#define TC3_Res_SET_gc   (0x20) /* Reserved Bit - SET */


/* Waveform Generation Mode */
/* WARNING: TC3_WGM3_VAL_0x0_gc ALREADY DEFINED as '(0x00)' NOT '(0x00<<3)' */
/* WARNING: TC3_WGM3_VAL_0x1_gc ALREADY DEFINED as '(0x01)' NOT '(0x01<<3)' */
/* WARNING: TC3_WGM3_VAL_0x2_gc ALREADY DEFINED as '(0x02)' NOT '(0x02<<3)' */
/* WARNING: TC3_WGM3_VAL_0x3_gc ALREADY DEFINED as '(0x03)' NOT '(0x03<<3)' */
/* WARNING: TC3_WGM3_VAL_0x4_gc ALREADY DEFINED as '(0x04)' NOT '(0x04<<3)' */
/* WARNING: TC3_WGM3_VAL_0x5_gc ALREADY DEFINED as '(0x05)' NOT '(0x05<<3)' */
/* WARNING: TC3_WGM3_VAL_0x6_gc ALREADY DEFINED as '(0x06)' NOT '(0x06<<3)' */
/* WARNING: TC3_WGM3_VAL_0x7_gc ALREADY DEFINED as '(0x07)' NOT '(0x07<<3)' */
/* WARNING: TC3_WGM3_VAL_0x8_gc ALREADY DEFINED as '(0x08)' NOT '(0x08<<3)' */
/* WARNING: TC3_WGM3_VAL_0x9_gc ALREADY DEFINED as '(0x09)' NOT '(0x09<<3)' */
/* WARNING: TC3_WGM3_VAL_0xA_gc ALREADY DEFINED as '(0x0A)' NOT '(0x0A<<3)' */
/* WARNING: TC3_WGM3_VAL_0xB_gc ALREADY DEFINED as '(0x0B)' NOT '(0x0B<<3)' */
/* WARNING: TC3_WGM3_VAL_0xC_gc ALREADY DEFINED as '(0x0C)' NOT '(0x0C<<3)' */
/* WARNING: TC3_WGM3_VAL_0xD_gc ALREADY DEFINED as '(0x0D)' NOT '(0x0D<<3)' */
/* WARNING: TC3_WGM3_VAL_0xE_gc ALREADY DEFINED as '(0x0E)' NOT '(0x0E<<3)' */
/* WARNING: TC3_WGM3_VAL_0xF_gc ALREADY DEFINED as '(0x0F)' NOT '(0x0F<<3)' */


/* Clock Select */
#define TC3_CS3_VAL_0x00_gc (0x00) /* No clock source (Timer/Counter stopped) */
#define TC3_CS3_VAL_0x01_gc (0x01) /* clk_IO/1 (no prescaling) */
#define TC3_CS3_VAL_0x02_gc (0x02) /* clk_IO/8 (from prescaler) */
#define TC3_CS3_VAL_0x03_gc (0x03) /* clk_IO/64 (from prescaler) */
#define TC3_CS3_VAL_0x04_gc (0x04) /* clk_IO/256 (from prescaler) */
#define TC3_CS3_VAL_0x05_gc (0x05) /* clk_IO/1024 (from prescaler) */
#define TC3_CS3_VAL_0x06_gc (0x06) /* External clock source on Tn pin, clock on falling edge */
#define TC3_CS3_VAL_0x07_gc (0x07) /* External clock source on Tn pin, clock on rising edge */


/* Force Output Compare for Channel A */
#define TC3_FOC3A_CLEAR_gc (0x00) /* Force Output Compare for Channel A - CLEAR */
#define TC3_FOC3A_SET_gc   (0x80) /* Force Output Compare for Channel A - SET */


/* Force Output Compare for Channel B */
#define TC3_FOC3B_CLEAR_gc (0x00) /* Force Output Compare for Channel B - CLEAR */
#define TC3_FOC3B_SET_gc   (0x40) /* Force Output Compare for Channel B - SET */


/* Force Output Compare for Channel C */
#define TC3_FOC3C_CLEAR_gc (0x00) /* Force Output Compare for Channel C - CLEAR */
#define TC3_FOC3C_SET_gc   (0x20) /* Force Output Compare for Channel C - SET */


/* Reserved */
#define TC3_TCCR3C_Res_gc(x) (x & 0x1F)

/* Timer/Counter3 Input Capture Interrupt Enable */
#define TC3_ICIE3_CLEAR_gc (0x00) /* Timer/Counter3 Input Capture Interrupt Enable - CLEAR */
#define TC3_ICIE3_SET_gc   (0x20) /* Timer/Counter3 Input Capture Interrupt Enable - SET */


/* Timer/Counter3 Output Compare C Match Interrupt Enable */
#define TC3_OCIE3C_CLEAR_gc (0x00) /* Timer/Counter3 Output Compare C Match Interrupt Enable - CLEAR */
#define TC3_OCIE3C_SET_gc   (0x08) /* Timer/Counter3 Output Compare C Match Interrupt Enable - SET */


/* Timer/Counter3 Output Compare B Match Interrupt Enable */
#define TC3_OCIE3B_CLEAR_gc (0x00) /* Timer/Counter3 Output Compare B Match Interrupt Enable - CLEAR */
#define TC3_OCIE3B_SET_gc   (0x04) /* Timer/Counter3 Output Compare B Match Interrupt Enable - SET */


/* Timer/Counter3 Output Compare A Match Interrupt Enable */
#define TC3_OCIE3A_CLEAR_gc (0x00) /* Timer/Counter3 Output Compare A Match Interrupt Enable - CLEAR */
#define TC3_OCIE3A_SET_gc   (0x02) /* Timer/Counter3 Output Compare A Match Interrupt Enable - SET */


/* Timer/Counter3 Overflow Interrupt Enable */
#define TC3_TOIE3_CLEAR_gc (0x00) /* Timer/Counter3 Overflow Interrupt Enable - CLEAR */
#define TC3_TOIE3_SET_gc   (0x01) /* Timer/Counter3 Overflow Interrupt Enable - SET */


/* Timer/Counter3 Input Capture Flag */
#define TC3_ICF3_CLEAR_gc (0x00) /* Timer/Counter3 Input Capture Flag - CLEAR */
#define TC3_ICF3_SET_gc   (0x20) /* Timer/Counter3 Input Capture Flag - SET */


/* Timer/Counter3 Output Compare C Match Flag */
#define TC3_OCF3C_CLEAR_gc (0x00) /* Timer/Counter3 Output Compare C Match Flag - CLEAR */
#define TC3_OCF3C_SET_gc   (0x08) /* Timer/Counter3 Output Compare C Match Flag - SET */


/* Timer/Counter3 Output Compare B Match Flag */
#define TC3_OCF3B_CLEAR_gc (0x00) /* Timer/Counter3 Output Compare B Match Flag - CLEAR */
#define TC3_OCF3B_SET_gc   (0x04) /* Timer/Counter3 Output Compare B Match Flag - SET */


/* Timer/Counter3 Output Compare A Match Flag */
#define TC3_OCF3A_CLEAR_gc (0x00) /* Timer/Counter3 Output Compare A Match Flag - CLEAR */
#define TC3_OCF3A_SET_gc   (0x02) /* Timer/Counter3 Output Compare A Match Flag - SET */


/* Timer/Counter3 Overflow Flag */
#define TC3_TOV3_CLEAR_gc (0x00) /* Timer/Counter3 Overflow Flag - CLEAR */
#define TC3_TOV3_SET_gc   (0x01) /* Timer/Counter3 Overflow Flag - SET */


/* Compare Output Mode for Channel A */
#define TC1_COM1A_VAL_0_gc (0x00<<6) /* Normal port operation, OCnA/OCnB/OCnC disconnected. */
#define TC1_COM1A_VAL_1_gc (0x01<<6) /* Toggle OCnA/OCnB/OCnC on Compare Match. */
#define TC1_COM1A_VAL_2_gc (0x02<<6) /* Clear OCnA/OCnB/OCnC on Compare Match (set output to low level). */
#define TC1_COM1A_VAL_3_gc (0x03<<6) /* Set OCnA/OCnB/OCnC on Compare Match (set output to high level). */


/* Compare Output Mode for Channel B */
#define TC1_COM1B_VAL_0_gc (0x00<<4) /* Normal port operation, OCnA/OCnB/OCnC disconnected. */
#define TC1_COM1B_VAL_1_gc (0x01<<4) /* Toggle OCnA/OCnB/OCnC on Compare Match. */
#define TC1_COM1B_VAL_2_gc (0x02<<4) /* Clear OCnA/OCnB/OCnC on Compare Match (set output to low level). */
#define TC1_COM1B_VAL_3_gc (0x03<<4) /* Set OCnA/OCnB/OCnC on Compare Match (set output to high level). */


/* Compare Output Mode for Channel C */
#define TC1_COM1C_VAL_0_gc (0x00<<2) /* Normal port operation, OCnA/OCnB/OCnC disconnected. */
#define TC1_COM1C_VAL_1_gc (0x01<<2) /* Toggle OCnA/OCnB/OCnC on Compare Match. */
#define TC1_COM1C_VAL_2_gc (0x02<<2) /* Clear OCnA/OCnB/OCnC on Compare Match (set output to low level). */
#define TC1_COM1C_VAL_3_gc (0x03<<2) /* Set OCnA/OCnB/OCnC on Compare Match (set output to high level). */


/* Waveform Generation Mode */
#define TC1_WGM1_VAL_0x0_gc (0x00) /* Normal mode of operation */
#define TC1_WGM1_VAL_0x1_gc (0x01) /* PWM, phase correct, 8-bit */
#define TC1_WGM1_VAL_0x2_gc (0x02) /* PWM, phase correct, 9-bit */
#define TC1_WGM1_VAL_0x3_gc (0x03) /* PWM, phase correct, 10-bit */
#define TC1_WGM1_VAL_0x4_gc (0x04) /* CTC, TOP = OCRnA */
#define TC1_WGM1_VAL_0x5_gc (0x05) /* Fast PWM, 8-bit */
#define TC1_WGM1_VAL_0x6_gc (0x06) /* Fast PWM, 9-bit */
#define TC1_WGM1_VAL_0x7_gc (0x07) /* Fast PWM, 10-bit */
#define TC1_WGM1_VAL_0x8_gc (0x08) /* PWM, Phase and frequency correct, TOP = ICRn */
#define TC1_WGM1_VAL_0x9_gc (0x09) /* PWM, Phase and frequency correct, TOP = OCRnA */
#define TC1_WGM1_VAL_0xA_gc (0x0A) /* PWM, Phase correct, TOP = ICRn */
#define TC1_WGM1_VAL_0xB_gc (0x0B) /* PWM, Phase correct, TOP = OCRnA */
#define TC1_WGM1_VAL_0xC_gc (0x0C) /* CTC, TOP = OCRnA */
#define TC1_WGM1_VAL_0xD_gc (0x0D) /* Reserved */
#define TC1_WGM1_VAL_0xE_gc (0x0E) /* Fast PWM, TOP = ICRn */
#define TC1_WGM1_VAL_0xF_gc (0x0F) /* Fast PWM, TOP = OCRnA */


/* Input Capture 1 Noise Canceller */
#define TC1_ICNC1_CLEAR_gc (0x00) /* Input Capture 1 Noise Canceller - CLEAR */
#define TC1_ICNC1_SET_gc   (0x80) /* Input Capture 1 Noise Canceller - SET */


/* Input Capture 1 Edge Select */
#define TC1_ICES1_CLEAR_gc (0x00) /* Input Capture 1 Edge Select - CLEAR */
#define TC1_ICES1_SET_gc   (0x40) /* Input Capture 1 Edge Select - SET */


/* Reserved Bit */
#define TC1_Res_CLEAR_gc (0x00) /* Reserved Bit - CLEAR */
#define TC1_Res_SET_gc   (0x20) /* Reserved Bit - SET */


/* Waveform Generation Mode */
/* WARNING: TC1_WGM1_VAL_0x0_gc ALREADY DEFINED as '(0x00)' NOT '(0x00<<3)' */
/* WARNING: TC1_WGM1_VAL_0x1_gc ALREADY DEFINED as '(0x01)' NOT '(0x01<<3)' */
/* WARNING: TC1_WGM1_VAL_0x2_gc ALREADY DEFINED as '(0x02)' NOT '(0x02<<3)' */
/* WARNING: TC1_WGM1_VAL_0x3_gc ALREADY DEFINED as '(0x03)' NOT '(0x03<<3)' */
/* WARNING: TC1_WGM1_VAL_0x4_gc ALREADY DEFINED as '(0x04)' NOT '(0x04<<3)' */
/* WARNING: TC1_WGM1_VAL_0x5_gc ALREADY DEFINED as '(0x05)' NOT '(0x05<<3)' */
/* WARNING: TC1_WGM1_VAL_0x6_gc ALREADY DEFINED as '(0x06)' NOT '(0x06<<3)' */
/* WARNING: TC1_WGM1_VAL_0x7_gc ALREADY DEFINED as '(0x07)' NOT '(0x07<<3)' */
/* WARNING: TC1_WGM1_VAL_0x8_gc ALREADY DEFINED as '(0x08)' NOT '(0x08<<3)' */
/* WARNING: TC1_WGM1_VAL_0x9_gc ALREADY DEFINED as '(0x09)' NOT '(0x09<<3)' */
/* WARNING: TC1_WGM1_VAL_0xA_gc ALREADY DEFINED as '(0x0A)' NOT '(0x0A<<3)' */
/* WARNING: TC1_WGM1_VAL_0xB_gc ALREADY DEFINED as '(0x0B)' NOT '(0x0B<<3)' */
/* WARNING: TC1_WGM1_VAL_0xC_gc ALREADY DEFINED as '(0x0C)' NOT '(0x0C<<3)' */
/* WARNING: TC1_WGM1_VAL_0xD_gc ALREADY DEFINED as '(0x0D)' NOT '(0x0D<<3)' */
/* WARNING: TC1_WGM1_VAL_0xE_gc ALREADY DEFINED as '(0x0E)' NOT '(0x0E<<3)' */
/* WARNING: TC1_WGM1_VAL_0xF_gc ALREADY DEFINED as '(0x0F)' NOT '(0x0F<<3)' */


/* Clock Select */
#define TC1_CS1_VAL_0x00_gc (0x00) /* No clock source (Timer/Counter stopped) */
#define TC1_CS1_VAL_0x01_gc (0x01) /* clk_IO/1 (no prescaling) */
#define TC1_CS1_VAL_0x02_gc (0x02) /* clk_IO/8 (from prescaler) */
#define TC1_CS1_VAL_0x03_gc (0x03) /* clk_IO/64 (from prescaler) */
#define TC1_CS1_VAL_0x04_gc (0x04) /* clk_IO/256 (from prescaler) */
#define TC1_CS1_VAL_0x05_gc (0x05) /* clk_IO/1024 (from prescaler) */
#define TC1_CS1_VAL_0x06_gc (0x06) /* External clock source on Tn pin, clock on falling edge */
#define TC1_CS1_VAL_0x07_gc (0x07) /* External clock source on Tn pin, clock on rising edge */


/* Force Output Compare for Channel A */
#define TC1_FOC1A_CLEAR_gc (0x00) /* Force Output Compare for Channel A - CLEAR */
#define TC1_FOC1A_SET_gc   (0x80) /* Force Output Compare for Channel A - SET */


/* Force Output Compare for Channel B */
#define TC1_FOC1B_CLEAR_gc (0x00) /* Force Output Compare for Channel B - CLEAR */
#define TC1_FOC1B_SET_gc   (0x40) /* Force Output Compare for Channel B - SET */


/* Force Output Compare for Channel C */
#define TC1_FOC1C_CLEAR_gc (0x00) /* Force Output Compare for Channel C - CLEAR */
#define TC1_FOC1C_SET_gc   (0x20) /* Force Output Compare for Channel C - SET */


/* Reserved */
#define TC1_TCCR1C_Res_gc(x) (x & 0x1F)

/* Timer/Counter1 Input Capture Interrupt Enable */
#define TC1_ICIE1_CLEAR_gc (0x00) /* Timer/Counter1 Input Capture Interrupt Enable - CLEAR */
#define TC1_ICIE1_SET_gc   (0x20) /* Timer/Counter1 Input Capture Interrupt Enable - SET */


/* Timer/Counter1 Output Compare C Match Interrupt Enable */
#define TC1_OCIE1C_CLEAR_gc (0x00) /* Timer/Counter1 Output Compare C Match Interrupt Enable - CLEAR */
#define TC1_OCIE1C_SET_gc   (0x08) /* Timer/Counter1 Output Compare C Match Interrupt Enable - SET */


/* Timer/Counter1 Output Compare B Match Interrupt Enable */
#define TC1_OCIE1B_CLEAR_gc (0x00) /* Timer/Counter1 Output Compare B Match Interrupt Enable - CLEAR */
#define TC1_OCIE1B_SET_gc   (0x04) /* Timer/Counter1 Output Compare B Match Interrupt Enable - SET */


/* Timer/Counter1 Output Compare A Match Interrupt Enable */
#define TC1_OCIE1A_CLEAR_gc (0x00) /* Timer/Counter1 Output Compare A Match Interrupt Enable - CLEAR */
#define TC1_OCIE1A_SET_gc   (0x02) /* Timer/Counter1 Output Compare A Match Interrupt Enable - SET */


/* Timer/Counter1 Overflow Interrupt Enable */
#define TC1_TOIE1_CLEAR_gc (0x00) /* Timer/Counter1 Overflow Interrupt Enable - CLEAR */
#define TC1_TOIE1_SET_gc   (0x01) /* Timer/Counter1 Overflow Interrupt Enable - SET */


/* Timer/Counter1 Input Capture Flag */
#define TC1_ICF1_CLEAR_gc (0x00) /* Timer/Counter1 Input Capture Flag - CLEAR */
#define TC1_ICF1_SET_gc   (0x20) /* Timer/Counter1 Input Capture Flag - SET */


/* Timer/Counter1 Output Compare C Match Flag */
#define TC1_OCF1C_CLEAR_gc (0x00) /* Timer/Counter1 Output Compare C Match Flag - CLEAR */
#define TC1_OCF1C_SET_gc   (0x08) /* Timer/Counter1 Output Compare C Match Flag - SET */


/* Timer/Counter1 Output Compare B Match Flag */
#define TC1_OCF1B_CLEAR_gc (0x00) /* Timer/Counter1 Output Compare B Match Flag - CLEAR */
#define TC1_OCF1B_SET_gc   (0x04) /* Timer/Counter1 Output Compare B Match Flag - SET */


/* Timer/Counter1 Output Compare A Match Flag */
#define TC1_OCF1A_CLEAR_gc (0x00) /* Timer/Counter1 Output Compare A Match Flag - CLEAR */
#define TC1_OCF1A_SET_gc   (0x02) /* Timer/Counter1 Output Compare A Match Flag - SET */


/* Timer/Counter1 Overflow Flag */
#define TC1_TOV1_CLEAR_gc (0x00) /* Timer/Counter1 Overflow Flag - CLEAR */
#define TC1_TOV1_SET_gc   (0x01) /* Timer/Counter1 Overflow Flag - SET */


/*
--------------------------------------------------------------------------------
TRX24 - Low-Power 2.4 GHz Transceiver
--------------------------------------------------------------------------------
*/


/* ext. PA Ramp Down Lead Time */
#define TRX24_PALTD_PALTD_MINUS_3US_gc (0x00<<5) /* -3us */
#define TRX24_PALTD_PALTD_MINUS_2US_gc (0x01<<5) /* -2us */
#define TRX24_PALTD_PALTD_MINUS_1US_gc (0x02<<5) /* -1us */
#define TRX24_PALTD_PALTD_0US_gc       (0x03<<5) /* 0us */
#define TRX24_PALTD_PALTD_1US_gc       (0x04<<5) /* 1us */
#define TRX24_PALTD_PALTD_2US_gc       (0x05<<5) /* 2us */
#define TRX24_PALTD_PALTD_3US_gc       (0x06<<5) /* 3us */
#define TRX24_PALTD_PALTD_4US_gc       (0x07<<5) /* 4us */


/* ext. PA Ramp Up Lead Time */
#define TRX24_PALTU_PALTU_MINUS_3US_gc (0x00<<2) /* -3us */
#define TRX24_PALTU_PALTU_MINUS_2US_gc (0x01<<2) /* -2us */
#define TRX24_PALTU_PALTU_MINUS_1US_gc (0x02<<2) /* -1us */
#define TRX24_PALTU_PALTU_0US_gc       (0x03<<2) /* 0us */
#define TRX24_PALTU_PALTU_1US_gc       (0x04<<2) /* 1us */
#define TRX24_PALTU_PALTU_2US_gc       (0x05<<2) /* 2us */
#define TRX24_PALTU_PALTU_3US_gc       (0x06<<2) /* 3us */
#define TRX24_PALTU_PALTU_4US_gc       (0x07<<2) /* 4us */


/* Power Amplifier Ramp Down Frequency Inversion */
#define TRX24_PARDFI_CLEAR_gc (0x00) /* Power Amplifier Ramp Down Frequency Inversion - CLEAR */
#define TRX24_PARDFI_SET_gc   (0x02) /* Power Amplifier Ramp Down Frequency Inversion - SET */


/* Power Amplifier Ramp Up Frequency Inversion */
#define TRX24_PARUFI_CLEAR_gc (0x00) /* Power Amplifier Ramp Up Frequency Inversion - CLEAR */
#define TRX24_PARUFI_SET_gc   (0x01) /* Power Amplifier Ramp Up Frequency Inversion - SET */


/* Reserved Bit */
#define TRX24_MAFCR0_Res_gc(x) ((x<<4) & 0xF0)

/* Multiple Address Filter 3 Enable */
#define TRX24_MAF3EN_CLEAR_gc (0x00) /* Multiple Address Filter 3 Enable - CLEAR */
#define TRX24_MAF3EN_SET_gc   (0x08) /* Multiple Address Filter 3 Enable - SET */


/* Multiple Address Filter 2 Enable */
#define TRX24_MAF2EN_CLEAR_gc (0x00) /* Multiple Address Filter 2 Enable - CLEAR */
#define TRX24_MAF2EN_SET_gc   (0x04) /* Multiple Address Filter 2 Enable - SET */


/* Multiple Address Filter 1 Enable */
#define TRX24_MAF1EN_CLEAR_gc (0x00) /* Multiple Address Filter 1 Enable - CLEAR */
#define TRX24_MAF1EN_SET_gc   (0x02) /* Multiple Address Filter 1 Enable - SET */


/* Multiple Address Filter 0 Enable */
#define TRX24_MAF0EN_CLEAR_gc (0x00) /* Multiple Address Filter 0 Enable - CLEAR */
#define TRX24_MAF0EN_SET_gc   (0x01) /* Multiple Address Filter 0 Enable - SET */


/* Set Data Pending bit for address filter 3. */
#define TRX24_AACK_3_SET_PD_CLEAR_gc (0x00) /* Set Data Pending bit for address filter 3. - CLEAR */
#define TRX24_AACK_3_SET_PD_SET_gc   (0x80) /* Set Data Pending bit for address filter 3. - SET */


/* Enable PAN Coordinator mode for address filter 3. */
#define TRX24_AACK_3_I_AM_COORD_CLEAR_gc (0x00) /* Enable PAN Coordinator mode for address filter 3. - CLEAR */
#define TRX24_AACK_3_I_AM_COORD_SET_gc   (0x40) /* Enable PAN Coordinator mode for address filter 3. - SET */


/* Set Data Pending bit for address filter 2. */
#define TRX24_AACK_2_SET_PD_CLEAR_gc (0x00) /* Set Data Pending bit for address filter 2. - CLEAR */
#define TRX24_AACK_2_SET_PD_SET_gc   (0x20) /* Set Data Pending bit for address filter 2. - SET */


/* Enable PAN Coordinator mode for address filter 2. */
#define TRX24_AACK_2_I_AM_COORD_CLEAR_gc (0x00) /* Enable PAN Coordinator mode for address filter 2. - CLEAR */
#define TRX24_AACK_2_I_AM_COORD_SET_gc   (0x10) /* Enable PAN Coordinator mode for address filter 2. - SET */


/* Set Data Pending bit for address filter 1. */
#define TRX24_AACK_1_SET_PD_CLEAR_gc (0x00) /* Set Data Pending bit for address filter 1. - CLEAR */
#define TRX24_AACK_1_SET_PD_SET_gc   (0x08) /* Set Data Pending bit for address filter 1. - SET */


/* Enable PAN Coordinator mode for address filter 1. */
#define TRX24_AACK_1_I_AM_COORD_CLEAR_gc (0x00) /* Enable PAN Coordinator mode for address filter 1. - CLEAR */
#define TRX24_AACK_1_I_AM_COORD_SET_gc   (0x04) /* Enable PAN Coordinator mode for address filter 1. - SET */


/* Set Data Pending bit for address filter 0. */
#define TRX24_AACK_0_SET_PD_CLEAR_gc (0x00) /* Set Data Pending bit for address filter 0. - CLEAR */
#define TRX24_AACK_0_SET_PD_SET_gc   (0x02) /* Set Data Pending bit for address filter 0. - SET */


/* Enable PAN Coordinator mode for address filter 0. */
#define TRX24_AACK_0_I_AM_COORD_CLEAR_gc (0x00) /* Enable PAN Coordinator mode for address filter 0. - CLEAR */
#define TRX24_AACK_0_I_AM_COORD_SET_gc   (0x01) /* Enable PAN Coordinator mode for address filter 0. - SET */


/* Request AES Operation. */
#define TRX24_AES_REQUEST_CLEAR_gc (0x00) /* Request AES Operation. - CLEAR */
#define TRX24_AES_REQUEST_SET_gc   (0x80) /* Request AES Operation. - SET */


/* Set AES Operation Mode */
#define TRX24_AES_MODE_AES_MODE_ECB_gc (0x00<<5) /* AES Mode is ECB (Electronic Code Book). */
#define TRX24_AES_MODE_AES_MODE_CBC_gc (0x01<<5) /* AES Mode is CBC (Cipher Block Chaining). */


/* Set AES Operation Direction */
#define TRX24_AES_DIR_AES_DIR_ENC_gc (0x00<<3) /* AES operation is encryption. */
#define TRX24_AES_DIR_AES_DIR_DEC_gc (0x01<<3) /* AES operation is decryption. */


/* AES Interrupt Enable */
#define TRX24_AES_IM_CLEAR_gc (0x00) /* AES Interrupt Enable - CLEAR */
#define TRX24_AES_IM_SET_gc   (0x04) /* AES Interrupt Enable - SET */


/* AES Operation Finished with Error */
#define TRX24_AES_ER_CLEAR_gc (0x00) /* AES Operation Finished with Error - CLEAR */
#define TRX24_AES_ER_SET_gc   (0x80) /* AES Operation Finished with Error - SET */


/* Reserved */
#define TRX24_AES_STATUS_Res_gc(x) ((x<<1) & 0x7E)

/* AES Operation Finished with Success */
#define TRX24_AES_DONE_CLEAR_gc (0x00) /* AES Operation Finished with Success - CLEAR */
#define TRX24_AES_DONE_SET_gc   (0x01) /* AES Operation Finished with Success - SET */


/* CCA Algorithm Status */
#define TRX24_CCA_DONE_CCA_NOT_FIN_gc (0x00<<7) /* CCA calculation not finished */
#define TRX24_CCA_DONE_CCA_FIN_gc     (0x01<<7) /* CCA calculation finished */


/* CCA Status Result */
#define TRX24_CCA_STATUS_CCA_BUSY_gc (0x00<<6) /* Channel indicated as busy. */
#define TRX24_CCA_STATUS_CCA_IDLE_gc (0x01<<6) /* Channel indicated as idle. */


/* Test mode status */
#define TRX24_TST_STATUS_TST_DISABLED_gc (0x00<<5) /* Test mode is disabled. */
#define TRX24_TST_STATUS_TST_ENABLED_gc  (0x01<<5) /* Test mode is active. */


/* Transceiver Main Status */
#define TRX24_TRX_STATUS_P_ON_gc                         (0x00) /* P_ON */
#define TRX24_TRX_STATUS_BUSY_RX_gc                      (0x01) /* BUSY_RX */
#define TRX24_TRX_STATUS_BUSY_TX_gc                      (0x02) /* BUSY_TX */
#define TRX24_TRX_STATUS_RX_ON_gc                        (0x06) /* RX_ON */
#define TRX24_TRX_STATUS_TRX_OFF_gc                      (0x08) /* TRX_OFF */
#define TRX24_TRX_STATUS_PLL_ON_gc                       (0x09) /* PLL_ON */
#define TRX24_TRX_STATUS_SLEEP_gc                        (0x0F) /* SLEEP */
#define TRX24_TRX_STATUS_BUSY_RX_AACK_gc                 (0x11) /* BUSY_RX_AACK */
#define TRX24_TRX_STATUS_BUSY_TX_ARET_gc                 (0x12) /* BUSY_TX_ARET */
#define TRX24_TRX_STATUS_RX_AACK_ON_gc                   (0x16) /* RX_AACK_ON */
#define TRX24_TRX_STATUS_TX_ARET_ON_gc                   (0x19) /* TX_ARET_ON */
#define TRX24_TRX_STATUS_STATE_TRANSITION_IN_PROGRESS_gc (0x1F) /* STATE_TRANSITION_IN_PROGRESS */


/* Transaction Status */
#define TRX24_TRAC_STATUS_TRAC_SUCCESS_gc                (0x00<<5) /* SUCCESS (RX_AACK, TX_ARET) */
#define TRX24_TRAC_STATUS_TRAC_SUCCESS_DATA_PENDING_gc   (0x01<<5) /* SUCCESS_DATA_PENDING (TX_ARET) */
#define TRX24_TRAC_STATUS_TRAC_SUCCESS_WAIT_FOR_ACK_gc   (0x02<<5) /* SUCCESS_WAIT_FOR_ACK (RX_AACK) */
#define TRX24_TRAC_STATUS_TRAC_CHANNEL_ACCESS_FAILURE_gc (0x03<<5) /* CHANNEL_ACCESS_FAILURE (TX_ARET) */
#define TRX24_TRAC_STATUS_TRAC_NO_ACK_gc                 (0x05<<5) /* NO_ACK (TX_ARET) */
#define TRX24_TRAC_STATUS_TRAC_INVALID_gc                (0x07<<5) /* INVALID (RX_AACK, TX_ARET) */


/* State Control Command */
#define TRX24_TRX_CMD_CMD_NOP_gc           (0x00) /* NOP */
#define TRX24_TRX_CMD_CMD_TX_START_gc      (0x02) /* TX_START */
#define TRX24_TRX_CMD_CMD_FORCE_TRX_OFF_gc (0x03) /* FORCE_TRX_OFF */
#define TRX24_TRX_CMD_CMD_FORCE_PLL_ON_gc  (0x04) /* FORCE_PLL_ON */
#define TRX24_TRX_CMD_CMD_RX_ON_gc         (0x06) /* RX_ON */
#define TRX24_TRX_CMD_CMD_TRX_OFF_gc       (0x08) /* TRX_OFF */
#define TRX24_TRX_CMD_CMD_PLL_ON_gc        (0x09) /* PLL_ON (TX_ON) */
#define TRX24_TRX_CMD_CMD_RX_AACK_ON_gc    (0x16) /* RX_AACK_ON */
#define TRX24_TRX_CMD_CMD_TX_ARET_ON_gc    (0x19) /* TX_ARET_ON */


/* Reserved */
#define TRX24_Res7_CLEAR_gc (0x00) /* Reserved - CLEAR */
#define TRX24_Res7_SET_gc   (0x80) /* Reserved - SET */


/* Enable Phase Measurement Unit */
#define TRX24_PMU_EN_CLEAR_gc (0x00) /* Enable Phase Measurement Unit - CLEAR */
#define TRX24_PMU_EN_SET_gc   (0x40) /* Enable Phase Measurement Unit - SET */


/* Start of Phase Measurement Unit */
#define TRX24_PMU_START_CLEAR_gc (0x00) /* Start of Phase Measurement Unit - CLEAR */
#define TRX24_PMU_START_SET_gc   (0x20) /* Start of Phase Measurement Unit - SET */


/* PMU IF Inverse */
#define TRX24_PMU_IF_INV_CLEAR_gc (0x00) /* PMU IF Inverse - CLEAR */
#define TRX24_PMU_IF_INV_SET_gc   (0x10) /* PMU IF Inverse - SET */


/* Reserved */
#define TRX24_TRX_CTRL_0_Res_gc(x) (x & 0x0F)

/* External PA support enable */
#define TRX24_PA_EXT_EN_CLEAR_gc (0x00) /* External PA support enable - CLEAR */
#define TRX24_PA_EXT_EN_SET_gc   (0x80) /* External PA support enable - SET */


/* Connect Frame Start IRQ to TC1 */
#define TRX24_IRQ_2_EXT_EN_CLEAR_gc (0x00) /* Connect Frame Start IRQ to TC1 - CLEAR */
#define TRX24_IRQ_2_EXT_EN_SET_gc   (0x40) /* Connect Frame Start IRQ to TC1 - SET */


/* Enable Automatic CRC Calculation */
#define TRX24_TX_AUTO_CRC_ON_CLEAR_gc (0x00) /* Enable Automatic CRC Calculation - CLEAR */
#define TRX24_TX_AUTO_CRC_ON_SET_gc   (0x20) /* Enable Automatic CRC Calculation - SET */


/* Enable PLL TX filter */
#define TRX24_PLL_TX_FLT_CLEAR_gc (0x00) /* Enable PLL TX filter - CLEAR */
#define TRX24_PLL_TX_FLT_SET_gc   (0x10) /* Enable PLL TX filter - SET */


/* Reserved */
#define TRX24_TRX_CTRL_1_Res_gc(x) (x & 0x0F)

/* Reserved */
#define TRX24_PHY_TX_PWR_Res_gc(x) ((x<<4) & 0xF0)

/* Transmit Power Setting */
#define TRX24_TX_PWR_VAL_0_gc  (0x00) /* 3.5 dBm */
#define TRX24_TX_PWR_VAL_1_gc  (0x01) /* 3.3 dBm */
#define TRX24_TX_PWR_VAL_2_gc  (0x02) /* 2.8 dBm */
#define TRX24_TX_PWR_VAL_3_gc  (0x03) /* 2.3 dBm */
#define TRX24_TX_PWR_VAL_4_gc  (0x04) /* 1.8 dBm */
#define TRX24_TX_PWR_VAL_5_gc  (0x05) /* 1.2 dBm */
#define TRX24_TX_PWR_VAL_6_gc  (0x06) /* 0.5 dBm */
#define TRX24_TX_PWR_VAL_7_gc  (0x07) /* -0.5 dBm */
#define TRX24_TX_PWR_VAL_8_gc  (0x08) /* -1.5 dBm */
#define TRX24_TX_PWR_VAL_9_gc  (0x09) /* -2.5 dBm */
#define TRX24_TX_PWR_VAL_10_gc (0x0A) /* -3.5 dBm */
#define TRX24_TX_PWR_VAL_11_gc (0x0B) /* -4.5 dBm */
#define TRX24_TX_PWR_VAL_12_gc (0x0C) /* -6.5 dBm */
#define TRX24_TX_PWR_VAL_13_gc (0x0D) /* -8.5 dBm */
#define TRX24_TX_PWR_VAL_14_gc (0x0E) /* -11.5 dBm */
#define TRX24_TX_PWR_VAL_15_gc (0x0F) /* -16.5 dBm */


/* Received Frame CRC Status */
#define TRX24_RX_CRC_VALID_CRC_INVALID_gc (0x00<<7) /* CRC (FCS) not valid */
#define TRX24_RX_CRC_VALID_CRC_VALID_gc   (0x01<<7) /* CRC (FCS) valid */


/* Random Value */
#define TRX24_PHY_RSSI_RND_VALUE_gc(x) ((x<<5) & 0x60)

/* Receiver Signal Strength Indicator */
#define TRX24_RSSI_RSSI_MIN_gc          (0x00) /* Minimum RSSI value: P(RF) < -90 dBm */
#define TRX24_RSSI_RSSI_MIN_PLUS_3dB_gc (0x01) /* P(RF) = RSSI_BASE_VAL+3 · (RSSI-1) [dBm] */
#define TRX24_RSSI_VAL_2_gc             (0x02) /* ... */
#define TRX24_RSSI_RSSI_MAX_gc          (0x1C) /* Maximum RSSI value: P(RF) ≥ -10 dBm */


/* Energy Detection Level */
#define TRX24_ED_LEVEL_ED_MIN_gc          (0x00) /* Minimum result of last ED measurement */
#define TRX24_ED_LEVEL_ED_MIN_PLUS_1dB_gc (0x01) /* P(RF) = RSSI_BASE_VAL+ED [dBm] */
#define TRX24_ED_LEVEL_VAL_0x02_gc        (0x02) /* ... */
#define TRX24_ED_LEVEL_ED_MAX_gc          (0x54) /* Maximum result of last ED measurement */
#define TRX24_ED_LEVEL_ED_RESET_gc        (0xFF) /* Reset value */


/* Manual CCA Measurement Request */
#define TRX24_CCA_REQUEST_CLEAR_gc (0x00) /* Manual CCA Measurement Request - CLEAR */
#define TRX24_CCA_REQUEST_SET_gc   (0x80) /* Manual CCA Measurement Request - SET */


/* Select CCA Measurement Mode */
#define TRX24_CCA_MODE_CCA_CS_OR_ED_gc  (0x00<<5) /* Mode 3a, Carrier sense OR energy above threshold */
#define TRX24_CCA_MODE_CCA_ED_gc        (0x01<<5) /* Mode 1, Energy above threshold */
#define TRX24_CCA_MODE_CCA_CS_gc        (0x02<<5) /* Mode 2, Carrier sense only */
#define TRX24_CCA_MODE_CCA_CS_AND_ED_gc (0x03<<5) /* Mode 3b, Carrier sense AND energy above threshold */


/* RX/TX Channel Selection */
#define TRX24_CHANNEL_F_2405MHZ_gc (0x0B) /* 2405 MHz */
#define TRX24_CHANNEL_F_2410MHZ_gc (0x0C) /* 2410 MHz */
#define TRX24_CHANNEL_F_2415MHZ_gc (0x0D) /* 2415 MHz */
#define TRX24_CHANNEL_F_2420MHZ_gc (0x0E) /* 2420 MHz */
#define TRX24_CHANNEL_F_2425MHZ_gc (0x0F) /* 2425 MHz */
#define TRX24_CHANNEL_F_2430MHZ_gc (0x10) /* 2430 MHz */
#define TRX24_CHANNEL_F_2435MHZ_gc (0x11) /* 2435 MHz */
#define TRX24_CHANNEL_F_2440MHZ_gc (0x12) /* 2440 MHz */
#define TRX24_CHANNEL_F_2445MHZ_gc (0x13) /* 2445 MHz */
#define TRX24_CHANNEL_F_2450MHZ_gc (0x14) /* 2450 MHz */
#define TRX24_CHANNEL_F_2455MHZ_gc (0x15) /* 2455 MHz */
#define TRX24_CHANNEL_F_2460MHZ_gc (0x16) /* 2460 MHz */
#define TRX24_CHANNEL_F_2465MHZ_gc (0x17) /* 2465 MHz */
#define TRX24_CHANNEL_F_2470MHZ_gc (0x18) /* 2470 MHz */
#define TRX24_CHANNEL_F_2475MHZ_gc (0x19) /* 2475 MHz */
#define TRX24_CHANNEL_F_2480MHZ_gc (0x1A) /* 2480 MHz */


/* CS Threshold Level for CCA Measurement */
#define TRX24_CCA_THRES_CCA_CS_THRES_gc(x) ((x<<4) & 0xF0)

/* ED Threshold Level for CCA Measurement */
#define TRX24_CCA_THRES_CCA_ED_THRES_gc(x) (x & 0x0F)

/* Receiver Sensitivity Control */
#define TRX24_PDT_THRES_PDT_THRES_ANT_DIV_OFF_gc (0x07) /* Reset value, to be used if Antenna Diversity algorithm is disabled */
#define TRX24_PDT_THRES_PDT_THRES_ANT_DIV_ON_gc  (0x03) /* Recommended correlator threshold for Antenna Diversity operation */


/* Start of Frame Delimiter Value */
#define TRX24_SFD_VALUE_IEEE_SFD_gc (0xA7) /* IEEE 802.15.4 compliant value of the SFD */


/* RX Safe Mode */
#define TRX24_RX_SAFE_MODE_CLEAR_gc (0x00) /* RX Safe Mode - CLEAR */
#define TRX24_RX_SAFE_MODE_SET_gc   (0x80) /* RX Safe Mode - SET */


/* Reserved */
#define TRX24_TRX_CTRL_2_Res_gc(x) ((x<<2) & 0x7C)

/* Data Rate Selection */
#define TRX24_OQPSK_DATA_RATE_RATE_250KB_gc  (0x00) /* 250 kb/s (IEEE 802.15.4 compliant) */
#define TRX24_OQPSK_DATA_RATE_RATE_500KB_gc  (0x01) /* 500 kb/s */
#define TRX24_OQPSK_DATA_RATE_RATE_1000KB_gc (0x02) /* 1000 kb/s */
#define TRX24_OQPSK_DATA_RATE_RATE_2000KB_gc (0x03) /* 2000 kb/s */


/* Antenna Diversity Antenna Status */
#define TRX24_ANT_SEL_ANTENNA_0_gc (0x00<<7) /* Antenna 0 */
#define TRX24_ANT_SEL_ANTENNA_1_gc (0x01<<7) /* Antenna 1 */


/* Reserved */
#define TRX24_ANT_DIV_Res_gc(x) ((x<<4) & 0x70)

/* Enable Antenna Diversity */
#define TRX24_ANT_DIV_EN_VAL_0_gc (0x00<<3) /* Antenna Diversity algorithm disabled */
#define TRX24_ANT_DIV_EN_VAL_1_gc (0x01<<3) /* Antenna Diversity algorithm enabled */


/* Enable External Antenna Switch Control */
#define TRX24_ANT_EXT_SW_EN_ANT_DIV_EXT_SW_DIS_gc (0x00<<2) /* Antenna Diversity RF switch control disabled */
#define TRX24_ANT_EXT_SW_EN_ANT_DIV_EXT_SW_EN_gc  (0x01<<2) /* Antenna Diversity RF switch control enabled */


/* Static Antenna Diversity Switch Control */
#define TRX24_ANT_CTRL_VAL_0_gc     (0x00) /* Reserved */
#define TRX24_ANT_CTRL_ANT_1_gc     (0x01) /* Antenna 1: DIG1=H, DIG2=L */
#define TRX24_ANT_CTRL_ANT_0_gc     (0x02) /* Antenna 0: DIG1=L, DIG2=H */
#define TRX24_ANT_CTRL_ANT_RESET_gc (0x03) /* Default value for ANT_EXT_SW_EN=0; Mandatory setting for applications not using Antenna Diversity */


/* Awake Interrupt Enable */
#define TRX24_AWAKE_EN_CLEAR_gc (0x00) /* Awake Interrupt Enable - CLEAR */
#define TRX24_AWAKE_EN_SET_gc   (0x80) /* Awake Interrupt Enable - SET */


/* TX_END Interrupt Enable */
#define TRX24_TX_END_EN_CLEAR_gc (0x00) /* TX_END Interrupt Enable - CLEAR */
#define TRX24_TX_END_EN_SET_gc   (0x40) /* TX_END Interrupt Enable - SET */


/* Address Match Interrupt Enable */
#define TRX24_AMI_EN_CLEAR_gc (0x00) /* Address Match Interrupt Enable - CLEAR */
#define TRX24_AMI_EN_SET_gc   (0x20) /* Address Match Interrupt Enable - SET */


/* End of ED Measurement Interrupt Enable */
#define TRX24_CCA_ED_DONE_EN_CLEAR_gc (0x00) /* End of ED Measurement Interrupt Enable - CLEAR */
#define TRX24_CCA_ED_DONE_EN_SET_gc   (0x10) /* End of ED Measurement Interrupt Enable - SET */


/* RX_END Interrupt Enable */
#define TRX24_RX_END_EN_CLEAR_gc (0x00) /* RX_END Interrupt Enable - CLEAR */
#define TRX24_RX_END_EN_SET_gc   (0x08) /* RX_END Interrupt Enable - SET */


/* RX_START Interrupt Enable */
#define TRX24_RX_START_EN_CLEAR_gc (0x00) /* RX_START Interrupt Enable - CLEAR */
#define TRX24_RX_START_EN_SET_gc   (0x04) /* RX_START Interrupt Enable - SET */


/* PLL Unlock Interrupt Enable */
#define TRX24_PLL_UNLOCK_EN_CLEAR_gc (0x00) /* PLL Unlock Interrupt Enable - CLEAR */
#define TRX24_PLL_UNLOCK_EN_SET_gc   (0x02) /* PLL Unlock Interrupt Enable - SET */


/* PLL Lock Interrupt Enable */
#define TRX24_PLL_LOCK_EN_CLEAR_gc (0x00) /* PLL Lock Interrupt Enable - CLEAR */
#define TRX24_PLL_LOCK_EN_SET_gc   (0x01) /* PLL Lock Interrupt Enable - SET */


/* Awake Interrupt Status */
#define TRX24_AWAKE_CLEAR_gc (0x00) /* Awake Interrupt Status - CLEAR */
#define TRX24_AWAKE_SET_gc   (0x80) /* Awake Interrupt Status - SET */


/* TX_END Interrupt Status */
#define TRX24_TX_END_CLEAR_gc (0x00) /* TX_END Interrupt Status - CLEAR */
#define TRX24_TX_END_SET_gc   (0x40) /* TX_END Interrupt Status - SET */


/* Address Match Interrupt Status */
#define TRX24_AMI_CLEAR_gc (0x00) /* Address Match Interrupt Status - CLEAR */
#define TRX24_AMI_SET_gc   (0x20) /* Address Match Interrupt Status - SET */


/* End of ED Measurement Interrupt Status */
#define TRX24_CCA_ED_DONE_CLEAR_gc (0x00) /* End of ED Measurement Interrupt Status - CLEAR */
#define TRX24_CCA_ED_DONE_SET_gc   (0x10) /* End of ED Measurement Interrupt Status - SET */


/* RX_END Interrupt Status */
#define TRX24_RX_END_CLEAR_gc (0x00) /* RX_END Interrupt Status - CLEAR */
#define TRX24_RX_END_SET_gc   (0x08) /* RX_END Interrupt Status - SET */


/* RX_START Interrupt Status */
#define TRX24_RX_START_CLEAR_gc (0x00) /* RX_START Interrupt Status - CLEAR */
#define TRX24_RX_START_SET_gc   (0x04) /* RX_START Interrupt Status - SET */


/* PLL Unlock Interrupt Status */
#define TRX24_PLL_UNLOCK_CLEAR_gc (0x00) /* PLL Unlock Interrupt Status - CLEAR */
#define TRX24_PLL_UNLOCK_SET_gc   (0x02) /* PLL Unlock Interrupt Status - SET */


/* PLL Lock Interrupt Status */
#define TRX24_PLL_LOCK_CLEAR_gc (0x00) /* PLL Lock Interrupt Status - CLEAR */
#define TRX24_PLL_LOCK_SET_gc   (0x01) /* PLL Lock Interrupt Status - SET */


/* Reserved Bit */
#define TRX24_IRQ_MASK1_Res_gc(x) ((x<<5) & 0xE0)

/* Address Match Interrupt enable Address filter 3 */
#define TRX24_MAF_3_AMI_EN_CLEAR_gc (0x00) /* Address Match Interrupt enable Address filter 3 - CLEAR */
#define TRX24_MAF_3_AMI_EN_SET_gc   (0x10) /* Address Match Interrupt enable Address filter 3 - SET */


/* Address Match Interrupt enable Address filter 2 */
#define TRX24_MAF_2_AMI_EN_CLEAR_gc (0x00) /* Address Match Interrupt enable Address filter 2 - CLEAR */
#define TRX24_MAF_2_AMI_EN_SET_gc   (0x08) /* Address Match Interrupt enable Address filter 2 - SET */


/* Address Match Interrupt enable Address filter 1 */
#define TRX24_MAF_1_AMI_EN_CLEAR_gc (0x00) /* Address Match Interrupt enable Address filter 1 - CLEAR */
#define TRX24_MAF_1_AMI_EN_SET_gc   (0x04) /* Address Match Interrupt enable Address filter 1 - SET */


/* Address Match Interrupt enable Address filter 0 */
#define TRX24_MAF_0_AMI_EN_CLEAR_gc (0x00) /* Address Match Interrupt enable Address filter 0 - CLEAR */
#define TRX24_MAF_0_AMI_EN_SET_gc   (0x02) /* Address Match Interrupt enable Address filter 0 - SET */


/* Transmit Start Interrupt enable */
#define TRX24_TX_START_EN_CLEAR_gc (0x00) /* Transmit Start Interrupt enable - CLEAR */
#define TRX24_TX_START_EN_SET_gc   (0x01) /* Transmit Start Interrupt enable - SET */


/* Reserved Bit */
#define TRX24_IRQ_STATUS1_Res_gc(x) ((x<<5) & 0xE0)

/* Address Match Interrupt Status Address filter 3 */
#define TRX24_MAF_3_AMI_CLEAR_gc (0x00) /* Address Match Interrupt Status Address filter 3 - CLEAR */
#define TRX24_MAF_3_AMI_SET_gc   (0x10) /* Address Match Interrupt Status Address filter 3 - SET */


/* Address Match Interrupt Status Address filter 2 */
#define TRX24_MAF_2_AMI_CLEAR_gc (0x00) /* Address Match Interrupt Status Address filter 2 - CLEAR */
#define TRX24_MAF_2_AMI_SET_gc   (0x08) /* Address Match Interrupt Status Address filter 2 - SET */


/* Address Match Interrupt Status Address filter 1 */
#define TRX24_MAF_1_AMI_CLEAR_gc (0x00) /* Address Match Interrupt Status Address filter 1 - CLEAR */
#define TRX24_MAF_1_AMI_SET_gc   (0x04) /* Address Match Interrupt Status Address filter 1 - SET */


/* Address Match Interrupt Status Address filter 0 */
#define TRX24_MAF_0_AMI_CLEAR_gc (0x00) /* Address Match Interrupt Status Address filter 0 - CLEAR */
#define TRX24_MAF_0_AMI_SET_gc   (0x02) /* Address Match Interrupt Status Address filter 0 - SET */


/* Transmit Start Interrupt Status */
#define TRX24_TX_START_CLEAR_gc (0x00) /* Transmit Start Interrupt Status - CLEAR */
#define TRX24_TX_START_SET_gc   (0x01) /* Transmit Start Interrupt Status - SET */


/* Use External AVDD Regulator */
#define TRX24_AVREG_EXT_AVDD_INT_gc (0x00<<7) /* Internal AVDD voltage regulator for the analog section is enabled. */
#define TRX24_AVREG_EXT_AVDD_EXT_gc (0x01<<7) /* Internal AVDD voltage regulator is disabled; use external regulated 1.8V supply voltage for the analog section. */


/* AVDD Supply Voltage Valid */
#define TRX24_AVDD_OK_VAL_0_gc (0x00<<6) /* Analog voltage regulator disabled or supply voltage not stable */
#define TRX24_AVDD_OK_VAL_1_gc (0x01<<6) /* Analog supply voltage has settled */


/* Use External DVDD Regulator */
#define TRX24_DVREG_EXT_DVDD_INT_gc (0x00<<3) /* Internal DVDD voltage regulator for the digital section is enabled. */
#define TRX24_DVREG_EXT_DVDD_EXT_gc (0x01<<3) /* Internal DVDD voltage regulator is disabled; use external regulated 1.8V supply voltage for the digital section. */


/* DVDD Supply Voltage Valid */
#define TRX24_DVDD_OK_VAL_0_gc (0x00<<2) /* Digital voltage regulator disabled or supply voltage not stable */
#define TRX24_DVDD_OK_VAL_1_gc (0x01<<2) /* Digital supply voltage has settled */


/* Battery Monitor Interrupt Status */
#define TRX24_BAT_LOW_CLEAR_gc (0x00) /* Battery Monitor Interrupt Status - CLEAR */
#define TRX24_BAT_LOW_SET_gc   (0x80) /* Battery Monitor Interrupt Status - SET */


/* Battery Monitor Interrupt Enable */
#define TRX24_BAT_LOW_EN_CLEAR_gc (0x00) /* Battery Monitor Interrupt Enable - CLEAR */
#define TRX24_BAT_LOW_EN_SET_gc   (0x40) /* Battery Monitor Interrupt Enable - SET */


/* Battery Monitor Status */
#define TRX24_BATMON_OK_VAL_0_gc (0x00<<5) /* The battery voltage is below the threshold. */
#define TRX24_BATMON_OK_VAL_1_gc (0x01<<5) /* The battery voltage is above the threshold. */


/* Battery Monitor Voltage Range */
#define TRX24_BATMON_HR_BATMON_HR_DIS_gc (0x00<<4) /* Enables the low range, see BATMON_VTH */
#define TRX24_BATMON_HR_BATMON_HR_EN_gc  (0x01<<4) /* Enables the high range, see BATMON_VTH */


/* Battery Monitor Threshold Voltage */
#define TRX24_BATMON_VTH_VAL_0x0_gc (0x00) /* 2.550V / 1.70V (BATMON_HR=1/0) */
#define TRX24_BATMON_VTH_VAL_0x1_gc (0x01) /* 2.625V / 1.75V (BATMON_HR=1/0) */
#define TRX24_BATMON_VTH_VAL_0x2_gc (0x02) /* 2.700V / 1.80V (BATMON_HR=1/0) */
#define TRX24_BATMON_VTH_VAL_0x3_gc (0x03) /* 2.775V / 1.85V (BATMON_HR=1/0) */
#define TRX24_BATMON_VTH_VAL_0x4_gc (0x04) /* 2.850V / 1.90V (BATMON_HR=1/0) */
#define TRX24_BATMON_VTH_VAL_0x5_gc (0x05) /* 2.925V / 1.95V (BATMON_HR=1/0) */
#define TRX24_BATMON_VTH_VAL_0x6_gc (0x06) /* 3.000V / 2.00V (BATMON_HR=1/0) */
#define TRX24_BATMON_VTH_VAL_0x7_gc (0x07) /* 3.075V / 2.05V (BATMON_HR=1/0) */
#define TRX24_BATMON_VTH_VAL_0x8_gc (0x08) /* 3.150V / 2.10V (BATMON_HR=1/0) */
#define TRX24_BATMON_VTH_VAL_0x9_gc (0x09) /* 3.225V / 2.15V (BATMON_HR=1/0) */
#define TRX24_BATMON_VTH_VAL_0xA_gc (0x0A) /* 3.300V / 2.20V (BATMON_HR=1/0) */
#define TRX24_BATMON_VTH_VAL_0xB_gc (0x0B) /* 3.375V / 2.25V (BATMON_HR=1/0) */
#define TRX24_BATMON_VTH_VAL_0xC_gc (0x0C) /* 3.450V / 2.30V (BATMON_HR=1/0) */
#define TRX24_BATMON_VTH_VAL_0xD_gc (0x0D) /* 3.525V / 2.35V (BATMON_HR=1/0) */
#define TRX24_BATMON_VTH_VAL_0xE_gc (0x0E) /* 3.600V / 2.40V (BATMON_HR=1/0) */
#define TRX24_BATMON_VTH_VAL_0xF_gc (0x0F) /* 3.675V / 2.45V (BATMON_HR=1/0) */


/* Crystal Oscillator Operating Mode */
#define TRX24_XTAL_MODE_VAL_0x4_gc (0x04<<4) /* Internal crystal oscillator disabled; use external reference frequency. */
#define TRX24_XTAL_MODE_VAL_0xF_gc (0x0F<<4) /* Internal crystal oscillator enabled; amplitude regulation of oscillation enabled. */


/* Crystal Oscillator Load Capacitance Trimming */
#define TRX24_XTAL_TRIM_XTAL_TRIM_MIN_gc (0x00) /* 0.0 pF, trimming capacitors disconnected */
#define TRX24_XTAL_TRIM_VAL_0x1_gc       (0x01) /* 0.3 pF, trimming capacitor switched on */
#define TRX24_XTAL_TRIM_VAL_0x2_gc       (0x02) /* ... */
#define TRX24_XTAL_TRIM_XTAL_TRIM_MAX_gc (0x0F) /* 4.5 pF, trimming capacitor switched on */


/* Prevent Frame Reception */
#define TRX24_RX_PDT_DIS_CLEAR_gc (0x00) /* Prevent Frame Reception - CLEAR */
#define TRX24_RX_PDT_DIS_SET_gc   (0x80) /* Prevent Frame Reception - SET */


/* Receiver Override Function */
#define TRX24_RX_OVERRIDE_CLEAR_gc (0x00) /* Receiver Override Function - CLEAR */
#define TRX24_RX_OVERRIDE_SET_gc   (0x40) /* Receiver Override Function - SET */


/* Reserved */
#define TRX24_RX_SYN_Res_gc(x) ((x<<4) & 0x30)

/* Reduce Receiver Sensitivity */
#define TRX24_RX_PDT_LEVEL_RX_PDT_LEVEL_MIN_gc (0x00) /* RX_THRES ≤ RSSI_BASE_VAL (Reset value); RSSI value not considered */
#define TRX24_RX_PDT_LEVEL_VAL_0x1_gc          (0x01) /* RX_THRES > RSSI_BASE_VAL + 0 · 3; RSSI > -90 dBm */
#define TRX24_RX_PDT_LEVEL_VAL_0x2_gc          (0x02) /* ... */
#define TRX24_RX_PDT_LEVEL_VAL_0xE_gc          (0x0E) /* RX_THRES > RSSI_BASE_VAL + 13 · 3; RSSI > -51 dBm */
#define TRX24_RX_PDT_LEVEL_RX_PDT_LEVEL_MAX_gc (0x0F) /* RX_THRES > RSSI_BASE_VAL + 14 · 3; RSSI > -48 dBm */


/* Smart Receiving Mode Timing */
#define TRX24_RX_RPC_CTRL_VAL_0_gc (0x00<<6) /* Activates minimum power saving behaviour for smart receiving mode */
#define TRX24_RX_RPC_CTRL_VAL_1_gc (0x01<<6) /* Reserved */
#define TRX24_RX_RPC_CTRL_VAL_2_gc (0x02<<6) /* Reserved */
#define TRX24_RX_RPC_CTRL_VAL_3_gc (0x03<<6) /* Activates maximum power saving behaviour for smart receiving mode */


/* Reciver Smart Receiving Mode Enable */
#define TRX24_RX_RPC_EN_CLEAR_gc (0x00) /* Reciver Smart Receiving Mode Enable - CLEAR */
#define TRX24_RX_RPC_EN_SET_gc   (0x20) /* Reciver Smart Receiving Mode Enable - SET */


/* Smart Receiving Mode Reduced Sensitivity Enable */
#define TRX24_PDT_RPC_EN_CLEAR_gc (0x00) /* Smart Receiving Mode Reduced Sensitivity Enable - CLEAR */
#define TRX24_PDT_RPC_EN_SET_gc   (0x10) /* Smart Receiving Mode Reduced Sensitivity Enable - SET */


/* PLL Smart Receiving Mode Enable */
#define TRX24_PLL_RPC_EN_CLEAR_gc (0x00) /* PLL Smart Receiving Mode Enable - CLEAR */
#define TRX24_PLL_RPC_EN_SET_gc   (0x08) /* PLL Smart Receiving Mode Enable - SET */


/* Reserved */
#define TRX24_Res0_CLEAR_gc (0x00) /* Reserved - CLEAR */
#define TRX24_Res0_SET_gc   (0x04) /* Reserved - SET */


/* Smart Receiving Mode IPAN Handling Enable */
#define TRX24_IPAN_RPC_EN_CLEAR_gc (0x00) /* Smart Receiving Mode IPAN Handling Enable - CLEAR */
#define TRX24_IPAN_RPC_EN_SET_gc   (0x02) /* Smart Receiving Mode IPAN Handling Enable - SET */


/* Smart Receiving in Extended Operating Modes Enable */
#define TRX24_XAH_RPC_EN_CLEAR_gc (0x00) /* Smart Receiving in Extended Operating Modes Enable - CLEAR */
#define TRX24_XAH_RPC_EN_SET_gc   (0x01) /* Smart Receiving in Extended Operating Modes Enable - SET */


/* Filter Reserved Frames */
#define TRX24_AACK_FLTR_RES_FT_CLEAR_gc (0x00) /* Filter Reserved Frames - CLEAR */
#define TRX24_AACK_FLTR_RES_FT_SET_gc   (0x20) /* Filter Reserved Frames - SET */


/* Process Reserved Frames */
#define TRX24_AACK_UPLD_RES_FT_CLEAR_gc (0x00) /* Process Reserved Frames - CLEAR */
#define TRX24_AACK_UPLD_RES_FT_SET_gc   (0x10) /* Process Reserved Frames - SET */


/* Reduce Acknowledgment Time */
#define TRX24_AACK_ACK_TIME_AACK_ACK_TIME_12_SYM_gc (0x00<<2) /* 12 symbols acknowledgment time */
#define TRX24_AACK_ACK_TIME_AACK_ACK_TIME_2_SYM_gc  (0x01<<2) /*  2 symbols acknowledgment time */


/* Enable Promiscuous Mode */
#define TRX24_AACK_PROM_MODE_CLEAR_gc (0x00) /* Enable Promiscuous Mode - CLEAR */
#define TRX24_AACK_PROM_MODE_SET_gc   (0x02) /* Enable Promiscuous Mode - SET */


/* Start Calibration Loop of Filter Tuning Network */
#define TRX24_FTN_START_CLEAR_gc (0x00) /* Start Calibration Loop of Filter Tuning Network - CLEAR */
#define TRX24_FTN_START_SET_gc   (0x80) /* Start Calibration Loop of Filter Tuning Network - SET */


/* Start Center Frequency Calibration */
#define TRX24_PLL_CF_START_CLEAR_gc (0x00) /* Start Center Frequency Calibration - CLEAR */
#define TRX24_PLL_CF_START_SET_gc   (0x80) /* Start Center Frequency Calibration - SET */


/* Start Delay Cell Calibration */
#define TRX24_PLL_DCU_START_CLEAR_gc (0x00) /* Start Delay Cell Calibration - CLEAR */
#define TRX24_PLL_DCU_START_SET_gc   (0x80) /* Start Delay Cell Calibration - SET */


/* Part Number */
#define TRX24_PART_NUM_P_ATmega128RFA1_gc (0x83) /* ATmega128RFA1 part number */
#define TRX24_PART_NUM_P_RFA2_gc          (0x93) /* RFA2 family */
#define TRX24_PART_NUM_P_RFR2_gc          (0x94) /* RFR2 family */


/* Version Number */
#define TRX24_VERSION_NUM_REV_A_gc (0x0C) /* Revision A */
#define TRX24_VERSION_NUM_REV_B_gc (0x01) /* Revision B */
#define TRX24_VERSION_NUM_REV_C_gc (0x03) /* Revision C */
#define TRX24_VERSION_NUM_REV_D_gc (0x04) /* Revision D */


/* Manufacturer ID (Low Byte) */
#define TRX24_MAN_ID_07_CLEAR_gc (0x00) /* Manufacturer ID (Low Byte) - CLEAR */
#define TRX24_MAN_ID_07_SET_gc   (0x80) /* Manufacturer ID (Low Byte) - SET */


/* Manufacturer ID (Low Byte) */
#define TRX24_MAN_ID_06_CLEAR_gc (0x00) /* Manufacturer ID (Low Byte) - CLEAR */
#define TRX24_MAN_ID_06_SET_gc   (0x40) /* Manufacturer ID (Low Byte) - SET */


/* Manufacturer ID (Low Byte) */
#define TRX24_MAN_ID_05_CLEAR_gc (0x00) /* Manufacturer ID (Low Byte) - CLEAR */
#define TRX24_MAN_ID_05_SET_gc   (0x20) /* Manufacturer ID (Low Byte) - SET */


/* Manufacturer ID (Low Byte) */
#define TRX24_MAN_ID_04_CLEAR_gc (0x00) /* Manufacturer ID (Low Byte) - CLEAR */
#define TRX24_MAN_ID_04_SET_gc   (0x10) /* Manufacturer ID (Low Byte) - SET */


/* Manufacturer ID (Low Byte) */
#define TRX24_MAN_ID_03_CLEAR_gc (0x00) /* Manufacturer ID (Low Byte) - CLEAR */
#define TRX24_MAN_ID_03_SET_gc   (0x08) /* Manufacturer ID (Low Byte) - SET */


/* Manufacturer ID (Low Byte) */
#define TRX24_MAN_ID_02_CLEAR_gc (0x00) /* Manufacturer ID (Low Byte) - CLEAR */
#define TRX24_MAN_ID_02_SET_gc   (0x04) /* Manufacturer ID (Low Byte) - SET */


/* Manufacturer ID (Low Byte) */
#define TRX24_MAN_ID_01_CLEAR_gc (0x00) /* Manufacturer ID (Low Byte) - CLEAR */
#define TRX24_MAN_ID_01_SET_gc   (0x02) /* Manufacturer ID (Low Byte) - SET */


/* Manufacturer ID (Low Byte) */
#define TRX24_MAN_ID_00_ATMEL_BYTE_0_gc (0x1F) /* Atmel JEDEC manufacturer ID, bits [7:0] of 32 bit manufacturer ID: 00 00 00 1F */


/* Manufacturer ID (High Byte) */
#define TRX24_MAN_ID__ATMEL_BYTE_1_gc (0x00) /* Atmel JEDEC manufacturer ID, bits [15:8] of 32 bit manufacturer ID: 00 00 00 1F */


/* MAC Short Address */
#define TRX24_SHORT_ADDR_07_CLEAR_gc (0x00) /* MAC Short Address - CLEAR */
#define TRX24_SHORT_ADDR_07_SET_gc   (0x80) /* MAC Short Address - SET */


/* MAC Short Address */
#define TRX24_SHORT_ADDR_06_CLEAR_gc (0x00) /* MAC Short Address - CLEAR */
#define TRX24_SHORT_ADDR_06_SET_gc   (0x40) /* MAC Short Address - SET */


/* MAC Short Address */
#define TRX24_SHORT_ADDR_05_CLEAR_gc (0x00) /* MAC Short Address - CLEAR */
#define TRX24_SHORT_ADDR_05_SET_gc   (0x20) /* MAC Short Address - SET */


/* MAC Short Address */
#define TRX24_SHORT_ADDR_04_CLEAR_gc (0x00) /* MAC Short Address - CLEAR */
#define TRX24_SHORT_ADDR_04_SET_gc   (0x10) /* MAC Short Address - SET */


/* MAC Short Address */
#define TRX24_SHORT_ADDR_03_CLEAR_gc (0x00) /* MAC Short Address - CLEAR */
#define TRX24_SHORT_ADDR_03_SET_gc   (0x08) /* MAC Short Address - SET */


/* MAC Short Address */
#define TRX24_SHORT_ADDR_02_CLEAR_gc (0x00) /* MAC Short Address - CLEAR */
#define TRX24_SHORT_ADDR_02_SET_gc   (0x04) /* MAC Short Address - SET */


/* MAC Short Address */
#define TRX24_SHORT_ADDR_01_CLEAR_gc (0x00) /* MAC Short Address - CLEAR */
#define TRX24_SHORT_ADDR_01_SET_gc   (0x02) /* MAC Short Address - SET */


/* MAC Short Address */
#define TRX24_SHORT_ADDR_00_CLEAR_gc (0x00) /* MAC Short Address - CLEAR */
#define TRX24_SHORT_ADDR_00_SET_gc   (0x01) /* MAC Short Address - SET */


/* MAC Personal Area Network ID */
#define TRX24_PAN_ID_07_CLEAR_gc (0x00) /* MAC Personal Area Network ID - CLEAR */
#define TRX24_PAN_ID_07_SET_gc   (0x80) /* MAC Personal Area Network ID - SET */


/* MAC Personal Area Network ID */
#define TRX24_PAN_ID_06_CLEAR_gc (0x00) /* MAC Personal Area Network ID - CLEAR */
#define TRX24_PAN_ID_06_SET_gc   (0x40) /* MAC Personal Area Network ID - SET */


/* MAC Personal Area Network ID */
#define TRX24_PAN_ID_05_CLEAR_gc (0x00) /* MAC Personal Area Network ID - CLEAR */
#define TRX24_PAN_ID_05_SET_gc   (0x20) /* MAC Personal Area Network ID - SET */


/* MAC Personal Area Network ID */
#define TRX24_PAN_ID_04_CLEAR_gc (0x00) /* MAC Personal Area Network ID - CLEAR */
#define TRX24_PAN_ID_04_SET_gc   (0x10) /* MAC Personal Area Network ID - SET */


/* MAC Personal Area Network ID */
#define TRX24_PAN_ID_03_CLEAR_gc (0x00) /* MAC Personal Area Network ID - CLEAR */
#define TRX24_PAN_ID_03_SET_gc   (0x08) /* MAC Personal Area Network ID - SET */


/* MAC Personal Area Network ID */
#define TRX24_PAN_ID_02_CLEAR_gc (0x00) /* MAC Personal Area Network ID - CLEAR */
#define TRX24_PAN_ID_02_SET_gc   (0x04) /* MAC Personal Area Network ID - SET */


/* MAC Personal Area Network ID */
#define TRX24_PAN_ID_01_CLEAR_gc (0x00) /* MAC Personal Area Network ID - CLEAR */
#define TRX24_PAN_ID_01_SET_gc   (0x02) /* MAC Personal Area Network ID - SET */


/* MAC Personal Area Network ID */
#define TRX24_PAN_ID_00_CLEAR_gc (0x00) /* MAC Personal Area Network ID - CLEAR */
#define TRX24_PAN_ID_00_SET_gc   (0x01) /* MAC Personal Area Network ID - SET */


/* MAC IEEE Address */
#define TRX24_IEEE_ADDR_07_CLEAR_gc (0x00) /* MAC IEEE Address - CLEAR */
#define TRX24_IEEE_ADDR_07_SET_gc   (0x80) /* MAC IEEE Address - SET */


/* MAC IEEE Address */
#define TRX24_IEEE_ADDR_06_CLEAR_gc (0x00) /* MAC IEEE Address - CLEAR */
#define TRX24_IEEE_ADDR_06_SET_gc   (0x40) /* MAC IEEE Address - SET */


/* MAC IEEE Address */
#define TRX24_IEEE_ADDR_05_CLEAR_gc (0x00) /* MAC IEEE Address - CLEAR */
#define TRX24_IEEE_ADDR_05_SET_gc   (0x20) /* MAC IEEE Address - SET */


/* MAC IEEE Address */
#define TRX24_IEEE_ADDR_04_CLEAR_gc (0x00) /* MAC IEEE Address - CLEAR */
#define TRX24_IEEE_ADDR_04_SET_gc   (0x10) /* MAC IEEE Address - SET */


/* MAC IEEE Address */
#define TRX24_IEEE_ADDR_03_CLEAR_gc (0x00) /* MAC IEEE Address - CLEAR */
#define TRX24_IEEE_ADDR_03_SET_gc   (0x08) /* MAC IEEE Address - SET */


/* MAC IEEE Address */
#define TRX24_IEEE_ADDR_02_CLEAR_gc (0x00) /* MAC IEEE Address - CLEAR */
#define TRX24_IEEE_ADDR_02_SET_gc   (0x04) /* MAC IEEE Address - SET */


/* MAC IEEE Address */
#define TRX24_IEEE_ADDR_01_CLEAR_gc (0x00) /* MAC IEEE Address - CLEAR */
#define TRX24_IEEE_ADDR_01_SET_gc   (0x02) /* MAC IEEE Address - SET */


/* MAC IEEE Address */
#define TRX24_IEEE_ADDR_00_CLEAR_gc (0x00) /* MAC IEEE Address - CLEAR */
#define TRX24_IEEE_ADDR_00_SET_gc   (0x01) /* MAC IEEE Address - SET */


/* Maximum Number of Frame Re-transmission Attempts */
#define TRX24_MAX_FRAME_RETRIES_VAL_0x0_gc (0x00<<4) /* Retransmission of frame is not attempted. */
#define TRX24_MAX_FRAME_RETRIES_VAL_0x1_gc (0x01<<4) /* Retransmission of frame is attempted once. */
#define TRX24_MAX_FRAME_RETRIES_VAL_0x2_gc (0x02<<4) /* ... */
#define TRX24_MAX_FRAME_RETRIES_VAL_0xF_gc (0x0F<<4) /* Retransmission of frame is attempted 15 times. */


/* Maximum Number of CSMA-CA Procedure Repetition Attempts */
#define TRX24_MAX_CSMA_RETRIES_VAL_0x0_gc (0x00<<1) /* No repetition of CSMA-CA procedure */
#define TRX24_MAX_CSMA_RETRIES_VAL_0x1_gc (0x01<<1) /* One repetition of CSMA-CA procedure */
#define TRX24_MAX_CSMA_RETRIES_VAL_0x2_gc (0x02<<1) /* ... */
#define TRX24_MAX_CSMA_RETRIES_VAL_0x5_gc (0x05<<1) /* Five repetitions (highest IEEE 802.15.4 compliant value) */
#define TRX24_MAX_CSMA_RETRIES_VAL_0x6_gc (0x06<<1) /* Reserved */
#define TRX24_MAX_CSMA_RETRIES_VAL_0x7_gc (0x07<<1) /* Immediate frame re-transmission without performing CSMA-CA */


/* Set Slotted Acknowledgment */
#define TRX24_SLOTTED_OPERATION_SLOTTED_OP_DIS_gc (0x00) /* The radio transceiver operates in unslotted mode. An acknowledgment frame is automatically sent if requested. */
#define TRX24_SLOTTED_OPERATION_SLOTTED_OP_EN_gc  (0x01) /* The transmission of an acknowledgment frame has to be controlled by the microcontroller. */


/* Seed Value for CSMA Random Number Generator */
#define TRX24_CSMA_SEED_07_CLEAR_gc (0x00) /* Seed Value for CSMA Random Number Generator - CLEAR */
#define TRX24_CSMA_SEED_07_SET_gc   (0x80) /* Seed Value for CSMA Random Number Generator - SET */


/* Seed Value for CSMA Random Number Generator */
#define TRX24_CSMA_SEED_06_CLEAR_gc (0x00) /* Seed Value for CSMA Random Number Generator - CLEAR */
#define TRX24_CSMA_SEED_06_SET_gc   (0x40) /* Seed Value for CSMA Random Number Generator - SET */


/* Seed Value for CSMA Random Number Generator */
#define TRX24_CSMA_SEED_05_CLEAR_gc (0x00) /* Seed Value for CSMA Random Number Generator - CLEAR */
#define TRX24_CSMA_SEED_05_SET_gc   (0x20) /* Seed Value for CSMA Random Number Generator - SET */


/* Seed Value for CSMA Random Number Generator */
#define TRX24_CSMA_SEED_04_CLEAR_gc (0x00) /* Seed Value for CSMA Random Number Generator - CLEAR */
#define TRX24_CSMA_SEED_04_SET_gc   (0x10) /* Seed Value for CSMA Random Number Generator - SET */


/* Seed Value for CSMA Random Number Generator */
#define TRX24_CSMA_SEED_03_CLEAR_gc (0x00) /* Seed Value for CSMA Random Number Generator - CLEAR */
#define TRX24_CSMA_SEED_03_SET_gc   (0x08) /* Seed Value for CSMA Random Number Generator - SET */


/* Seed Value for CSMA Random Number Generator */
#define TRX24_CSMA_SEED_02_CLEAR_gc (0x00) /* Seed Value for CSMA Random Number Generator - CLEAR */
#define TRX24_CSMA_SEED_02_SET_gc   (0x04) /* Seed Value for CSMA Random Number Generator - SET */


/* Seed Value for CSMA Random Number Generator */
#define TRX24_CSMA_SEED_01_CLEAR_gc (0x00) /* Seed Value for CSMA Random Number Generator - CLEAR */
#define TRX24_CSMA_SEED_01_SET_gc   (0x02) /* Seed Value for CSMA Random Number Generator - SET */


/* Seed Value for CSMA Random Number Generator */
#define TRX24_CSMA_SEED_00_CLEAR_gc (0x00) /* Seed Value for CSMA Random Number Generator - CLEAR */
#define TRX24_CSMA_SEED_00_SET_gc   (0x01) /* Seed Value for CSMA Random Number Generator - SET */


/* Acknowledgment Frame Filter Mode */
#define TRX24_AACK_FVN_MODE_VAL_0_gc (0x00<<6) /* Acknowledge frames with version number 0 */
#define TRX24_AACK_FVN_MODE_VAL_1_gc (0x01<<6) /* Acknowledge frames with version number 0 or 1 */
#define TRX24_AACK_FVN_MODE_VAL_2_gc (0x02<<6) /* Acknowledge frames with version number 0 or 1 or 2 */
#define TRX24_AACK_FVN_MODE_VAL_3_gc (0x03<<6) /* Acknowledge frames independent of frame version number */


/* Set Frame Pending Sub-field */
#define TRX24_AACK_SET_PD_CLEAR_gc (0x00) /* Set Frame Pending Sub-field - CLEAR */
#define TRX24_AACK_SET_PD_SET_gc   (0x20) /* Set Frame Pending Sub-field - SET */


/* Disable Acknowledgment Frame Transmission */
#define TRX24_AACK_DIS_ACK_CLEAR_gc (0x00) /* Disable Acknowledgment Frame Transmission - CLEAR */
#define TRX24_AACK_DIS_ACK_SET_gc   (0x10) /* Disable Acknowledgment Frame Transmission - SET */


/* Set Personal Area Network Coordinator */
#define TRX24_AACK_I_AM_COORD_CLEAR_gc (0x00) /* Set Personal Area Network Coordinator - CLEAR */
#define TRX24_AACK_I_AM_COORD_SET_gc   (0x08) /* Set Personal Area Network Coordinator - SET */


/* Seed Value for CSMA Random Number Generator */
#define TRX24_CSMA_SEED_1_CSMA_SEED_1_gc(x) (x & 0x07)

/* Maximum Back-off Exponent */
#define TRX24_MAX_BE_VAL_1_gc (0x01<<4) /* This value is not valid for the maximum back-off exponent. */
#define TRX24_MAX_BE_VAL_2_gc (0x02<<4) /* This value is not valid for the maximum back-off exponent. */
#define TRX24_MAX_BE_VAL_3_gc (0x03<<4) /* Minimum, IEEE compliant value for the maximum back-off exponent. */
#define TRX24_MAX_BE_VAL_4_gc (0x04<<4) /* ... */
#define TRX24_MAX_BE_VAL_8_gc (0x08<<4) /* Maximum, IEEE compliant value for the maximum back-off exponent. */


/* Minimum Back-off Exponent */
#define TRX24_MIN_BE_VAL_0_gc (0x00) /* Minimum value of minimum back-off exponent. */
#define TRX24_MIN_BE_VAL_1_gc (0x01) /* ... */
#define TRX24_MIN_BE_VAL_8_gc (0x08) /* Maximum value of minimum back-off exponent. MIN_BE must be smaller or equal to MAX_BE. */


/* Digital Test Controller Register */
#define TRX24_TST_CTRL_DIG_VAL_0_gc  (0x00) /* NORMAL (no test is active) */
#define TRX24_TST_CTRL_DIG_VAL_15_gc (0x0F) /* TST_CONT_TX (continuous transmit) */


/*
--------------------------------------------------------------------------------
SYMCNT - MAC Symbol Counter
--------------------------------------------------------------------------------
*/


/* Reserved Bit */
#define SYMCNT_SCIRQS_Res_gc(x) ((x<<5) & 0xE0)

/* Backoff Slot Counter IRQ */
#define SYMCNT_IRQSBO_CLEAR_gc (0x00) /* Backoff Slot Counter IRQ - CLEAR */
#define SYMCNT_IRQSBO_SET_gc   (0x10) /* Backoff Slot Counter IRQ - SET */


/* Symbol Counter Overflow IRQ */
#define SYMCNT_IRQSOF_CLEAR_gc (0x00) /* Symbol Counter Overflow IRQ - CLEAR */
#define SYMCNT_IRQSOF_SET_gc   (0x08) /* Symbol Counter Overflow IRQ - SET */


/* Compare Unit 3 Compare Match IRQ */
#define SYMCNT_SCIRQS_IRQSCP_gc(x) (x & 0x07)

/* Reserved Bit */
#define SYMCNT_SCIRQM_Res_gc(x) ((x<<5) & 0xE0)

/* Backoff Slot Counter IRQ enable */
#define SYMCNT_IRQMBO_CLEAR_gc (0x00) /* Backoff Slot Counter IRQ enable - CLEAR */
#define SYMCNT_IRQMBO_SET_gc   (0x10) /* Backoff Slot Counter IRQ enable - SET */


/* Symbol Counter Overflow IRQ enable */
#define SYMCNT_IRQMOF_CLEAR_gc (0x00) /* Symbol Counter Overflow IRQ enable - CLEAR */
#define SYMCNT_IRQMOF_SET_gc   (0x08) /* Symbol Counter Overflow IRQ enable - SET */


/* Symbol Counter Compare Match 3 IRQ enable */
#define SYMCNT_SCIRQM_IRQMCP_gc(x) (x & 0x07)

/* Reserved Bit */
#define SYMCNT_SCSR_Res_gc(x) ((x<<1) & 0xFE)

/* Symbol Counter busy */
#define SYMCNT_SCBSY_CLEAR_gc (0x00) /* Symbol Counter busy - CLEAR */
#define SYMCNT_SCBSY_SET_gc   (0x01) /* Symbol Counter busy - SET */


/* Reserved Bit */
#define SYMCNT_SCCR1_Res_gc(x) ((x<<6) & 0xC0)

/* Symbol Counter Beacon Timestamp Mask Register */
#define SYMCNT_SCBTSM_CLEAR_gc (0x00) /* Symbol Counter Beacon Timestamp Mask Register - CLEAR */
#define SYMCNT_SCBTSM_SET_gc   (0x20) /* Symbol Counter Beacon Timestamp Mask Register - SET */


/* Clock divider for synchronous clock source (16MHz Transceiver Clock) */
#define SYMCNT_SCCKDIV_VAL_0_gc (0x00<<2) /* Transceiver Clock divided by 256, (62.5kHz) */
#define SYMCNT_SCCKDIV_VAL_1_gc (0x01<<2) /* Transceiver Clock divided by 128, (125kHz) */
#define SYMCNT_SCCKDIV_VAL_2_gc (0x02<<2) /* Transceiver Clock divided by 64,  (250kHz) */
#define SYMCNT_SCCKDIV_VAL_3_gc (0x03<<2) /* Transceiver Clock divided by 32,  (500kHz) */
#define SYMCNT_SCCKDIV_VAL_4_gc (0x04<<2) /* Transceiver Clock divided by 16,  (1MHz) */
#define SYMCNT_SCCKDIV_VAL_5_gc (0x05<<2) /* Transceiver Clock divided by 8,   (2MHz) */
#define SYMCNT_SCCKDIV_VAL_6_gc (0x06<<2) /* Transceiver Clock divided by 4,   (4MHz) */


/* Enable External Clock Source on PG2 */
#define SYMCNT_SCEECLK_CLEAR_gc (0x00) /* Enable External Clock Source on PG2 - CLEAR */
#define SYMCNT_SCEECLK_SET_gc   (0x02) /* Enable External Clock Source on PG2 - SET */


/* Backoff Slot Counter enable */
#define SYMCNT_SCENBO_CLEAR_gc (0x00) /* Backoff Slot Counter enable - CLEAR */
#define SYMCNT_SCENBO_SET_gc   (0x01) /* Backoff Slot Counter enable - SET */


/* Symbol Counter Synchronization */
#define SYMCNT_SCRES_CLEAR_gc (0x00) /* Symbol Counter Synchronization - CLEAR */
#define SYMCNT_SCRES_SET_gc   (0x80) /* Symbol Counter Synchronization - SET */


/* Manual Beacon Timestamp */
#define SYMCNT_SCMBTS_CLEAR_gc (0x00) /* Manual Beacon Timestamp - CLEAR */
#define SYMCNT_SCMBTS_SET_gc   (0x40) /* Manual Beacon Timestamp - SET */


/* Symbol Counter enable */
#define SYMCNT_SCEN_CLEAR_gc (0x00) /* Symbol Counter enable - CLEAR */
#define SYMCNT_SCEN_SET_gc   (0x20) /* Symbol Counter enable - SET */


/* Symbol Counter Clock Source select */
#define SYMCNT_SCCKSEL_CLEAR_gc (0x00) /* Symbol Counter Clock Source select - CLEAR */
#define SYMCNT_SCCKSEL_SET_gc   (0x10) /* Symbol Counter Clock Source select - SET */


/* Symbol Counter Automatic Timestamping enable */
#define SYMCNT_SCTSE_CLEAR_gc (0x00) /* Symbol Counter Automatic Timestamping enable - CLEAR */
#define SYMCNT_SCTSE_SET_gc   (0x08) /* Symbol Counter Automatic Timestamping enable - SET */


/* Symbol Counter Compare Unit 3 Mode select */
#define SYMCNT_SCCR0_SCCMP_gc(x) (x & 0x07)

/* Reserved Bit */
#define SYMCNT_SCCSR_Res_gc(x) ((x<<6) & 0xC0)

/* Symbol Counter Compare Source select register for Compare Unit 3 */
#define SYMCNT_SCCS3_VAL_0_gc (0x00<<4) /* Compare Unit 3 Relative Compare Source = Beacon Timestamp Register */
#define SYMCNT_SCCS3_VAL_1_gc (0x01<<4) /* Compare Unit 3 Relative Compare Source = Transmit Frame Timestamp Register */
#define SYMCNT_SCCS3_VAL_2_gc (0x02<<4) /* Compare Unit 3 Relative Compare Source = Received Frame Timestamp Register */


/* Symbol Counter Compare Source select register for Compare Unit 2 */
#define SYMCNT_SCCS2_VAL_0_gc (0x00<<2) /* Compare Unit 2 Relative Compare Source = Beacon Timestamp Register */
#define SYMCNT_SCCS2_VAL_1_gc (0x01<<2) /* Compare Unit 2 Relative Compare Source = Transmit Frame Timestamp Register */
#define SYMCNT_SCCS2_VAL_2_gc (0x02<<2) /* Compare Unit 2 Relative Compare Source = Received Frame Timestamp Register */


/* Symbol Counter Compare Source select register for Compare Units */
#define SYMCNT_SCCS1_VAL_0_gc (0x00) /* Compare Unit 1 Relative Compare Source = Beacon Timestamp Register */
#define SYMCNT_SCCS1_VAL_1_gc (0x01) /* Compare Unit 1 Relative Compare Source = Transmit Frame Timestamp Register */
#define SYMCNT_SCCS1_VAL_2_gc (0x02) /* Compare Unit 1 Relative Compare Source = Received Frame Timestamp Register */


/*
--------------------------------------------------------------------------------
EEPROM - EEPROM
--------------------------------------------------------------------------------
*/


/* Reserved */
#define EEPROM_EECR_Res_gc(x) ((x<<6) & 0xC0)

/* EEPROM Programming Mode */
#define EEPROM_EEPM_VAL_0x00_gc (0x00<<4) /* Erase and Write in one operation (Atomic Operation) */
#define EEPROM_EEPM_VAL_0x01_gc (0x01<<4) /* Erase only */
#define EEPROM_EEPM_VAL_0x02_gc (0x02<<4) /* Write only */
#define EEPROM_EEPM_VAL_0x03_gc (0x03<<4) /* Reserved for future use */


/* EEPROM Ready Interrupt Enable */
#define EEPROM_EERIE_CLEAR_gc (0x00) /* EEPROM Ready Interrupt Enable - CLEAR */
#define EEPROM_EERIE_SET_gc   (0x08) /* EEPROM Ready Interrupt Enable - SET */


/* EEPROM Master Write Enable */
#define EEPROM_EEMPE_CLEAR_gc (0x00) /* EEPROM Master Write Enable - CLEAR */
#define EEPROM_EEMPE_SET_gc   (0x04) /* EEPROM Master Write Enable - SET */


/* EEPROM Programming Enable */
#define EEPROM_EEPE_CLEAR_gc (0x00) /* EEPROM Programming Enable - CLEAR */
#define EEPROM_EEPE_SET_gc   (0x02) /* EEPROM Programming Enable - SET */


/* EEPROM Read Enable */
#define EEPROM_EERE_CLEAR_gc (0x00) /* EEPROM Read Enable - CLEAR */
#define EEPROM_EERE_SET_gc   (0x01) /* EEPROM Read Enable - SET */


/*
--------------------------------------------------------------------------------
JTAG - JTAG Interface
--------------------------------------------------------------------------------
*/


/* On-Chip Debug Register Data */
#define JTAG_OCDR_VAL_0_gc (0x00) /* Refer to the debugger documentation for further information on how to use this register. */


/* JTAG Interface Disable */
#define JTAG_JTD_CLEAR_gc (0x00) /* JTAG Interface Disable - CLEAR */
#define JTAG_JTD_SET_gc   (0x80) /* JTAG Interface Disable - SET */


/* JTAG Reset Flag */
#define JTAG_JTRF_CLEAR_gc (0x00) /* JTAG Reset Flag - CLEAR */
#define JTAG_JTRF_SET_gc   (0x10) /* JTAG Reset Flag - SET */


/*
--------------------------------------------------------------------------------
EXINT - External Interrupts
--------------------------------------------------------------------------------
*/


/* External Interrupt 3 Sense Control Bit */
#define EXINT_ISC3_VAL_0x00_gc (0x00<<6) /* The low level of INTn generates an interrupt request. */
#define EXINT_ISC3_VAL_0x01_gc (0x01<<6) /* Any edge of INTn generates asynchronously an interrupt request. */
#define EXINT_ISC3_VAL_0x02_gc (0x02<<6) /* The falling edge of INTn generates asynchronously an interrupt request. */
#define EXINT_ISC3_VAL_0x03_gc (0x03<<6) /* The rising edge of INTn generates asynchronously an interrupt request. */


/* External Interrupt 2 Sense Control Bit */
#define EXINT_ISC2_VAL_0x00_gc (0x00<<4) /* The low level of INTn generates an interrupt request. */
#define EXINT_ISC2_VAL_0x01_gc (0x01<<4) /* Any edge of INTn generates asynchronously an interrupt request. */
#define EXINT_ISC2_VAL_0x02_gc (0x02<<4) /* The falling edge of INTn generates asynchronously an interrupt request. */
#define EXINT_ISC2_VAL_0x03_gc (0x03<<4) /* The rising edge of INTn generates asynchronously an interrupt request. */


/* External Interrupt 1 Sense Control Bit */
#define EXINT_ISC1_VAL_0x00_gc (0x00<<2) /* The low level of INTn generates an interrupt request. */
#define EXINT_ISC1_VAL_0x01_gc (0x01<<2) /* Any edge of INTn generates asynchronously an interrupt request. */
#define EXINT_ISC1_VAL_0x02_gc (0x02<<2) /* The falling edge of INTn generates asynchronously an interrupt request. */
#define EXINT_ISC1_VAL_0x03_gc (0x03<<2) /* The rising edge of INTn generates asynchronously an interrupt request. */


/* External Interrupt 0 Sense Control Bit */
#define EXINT_ISC0_VAL_0x00_gc (0x00) /* The low level of INTn generates an interrupt request. */
#define EXINT_ISC0_VAL_0x01_gc (0x01) /* Any edge of INTn generates asynchronously an interrupt request. */
#define EXINT_ISC0_VAL_0x02_gc (0x02) /* The falling edge of INTn generates asynchronously an interrupt request. */
#define EXINT_ISC0_VAL_0x03_gc (0x03) /* The rising edge of INTn generates asynchronously an interrupt request. */


/* External Interrupt 7 Sense Control Bit */
#define EXINT_ISC7_VAL_0x00_gc (0x00<<6) /* The low level of INTn generates an interrupt request. */
#define EXINT_ISC7_VAL_0x01_gc (0x01<<6) /* Any edge of INTn generates asynchronously an interrupt request. */
#define EXINT_ISC7_VAL_0x02_gc (0x02<<6) /* The falling edge of INTn generates asynchronously an interrupt request. */
#define EXINT_ISC7_VAL_0x03_gc (0x03<<6) /* The rising edge of INTn generates asynchronously an interrupt request. */


/* External Interrupt 6 Sense Control Bit */
#define EXINT_ISC6_VAL_0x00_gc (0x00<<4) /* The low level of INTn generates an interrupt request. */
#define EXINT_ISC6_VAL_0x01_gc (0x01<<4) /* Any edge of INTn generates asynchronously an interrupt request. */
#define EXINT_ISC6_VAL_0x02_gc (0x02<<4) /* The falling edge of INTn generates asynchronously an interrupt request. */
#define EXINT_ISC6_VAL_0x03_gc (0x03<<4) /* The rising edge of INTn generates asynchronously an interrupt request. */


/* External Interrupt 5 Sense Control Bit */
#define EXINT_ISC5_VAL_0x00_gc (0x00<<2) /* The low level of INTn generates an interrupt request. */
#define EXINT_ISC5_VAL_0x01_gc (0x01<<2) /* Any edge of INTn generates asynchronously an interrupt request. */
#define EXINT_ISC5_VAL_0x02_gc (0x02<<2) /* The falling edge of INTn generates asynchronously an interrupt request. */
#define EXINT_ISC5_VAL_0x03_gc (0x03<<2) /* The rising edge of INTn generates asynchronously an interrupt request. */


/* External Interrupt 4 Sense Control Bit */
#define EXINT_ISC4_VAL_0x00_gc (0x00) /* The low level of INTn generates an interrupt request. */
#define EXINT_ISC4_VAL_0x01_gc (0x01) /* Any edge of INTn generates asynchronously an interrupt request. */
#define EXINT_ISC4_VAL_0x02_gc (0x02) /* The falling edge of INTn generates asynchronously an interrupt request. */
#define EXINT_ISC4_VAL_0x03_gc (0x03) /* The rising edge of INTn generates asynchronously an interrupt request. */


/* External Interrupt Request Enable */
#define EXINT_INT_VAL_0x00_gc (0x00) /* All external pin interrupts are disabled. */
#define EXINT_INT_VAL_0xff_gc (0xFF) /* All external pin interrupts are enabled. */


/* External Interrupt Flag */
#define EXINT_INTF_VAL_0x00_gc (0x00) /* No edge or logic change on INT7:0 occurred. */
#define EXINT_INTF_VAL_0x01_gc (0x01) /* A edge or logic change on INT0 occurred and triggered an interrupt request. */
#define EXINT_INTF_VAL_0x02_gc (0x02) /* ... */
#define EXINT_INTF_VAL_0x80_gc (0x80) /* A edge or logic change on INT7 occurred and triggered an interrupt request. */


/* Reserved Bit */
#define EXINT_PCIFR_Res_gc(x) ((x<<3) & 0xF8)

/* Pin Change Interrupt Flags */
#define EXINT_PCIFR_PCIF_gc(x) (x & 0x07)

/* Reserved Bit */
#define EXINT_PCICR_Res_gc(x) ((x<<3) & 0xF8)

/* Pin Change Interrupt Enables */
#define EXINT_PCICR_PCIE_gc(x) (x & 0x07)

/*
--------------------------------------------------------------------------------
ADC - Analog-to-Digital Converter
--------------------------------------------------------------------------------
*/


/* Reference Selection Bits */
#define ADC_REFS_VAL_0x00_gc (0x00<<6) /* AREF, Internal reference voltage generation turned off */
#define ADC_REFS_VAL_0x01_gc (0x01<<6) /* AVDD with external capacitor at AREF pin */
#define ADC_REFS_VAL_0x02_gc (0x02<<6) /* Internal 1.5V Voltage Reference (no external capacitor at AREF pin) */
#define ADC_REFS_VAL_0x03_gc (0x03<<6) /* Internal 1.6V Voltage Reference (no external capacitor at AREF pin) */


/* ADC Left Adjust Result */
#define ADC_ADLAR_CLEAR_gc (0x00) /* ADC Left Adjust Result - CLEAR */
#define ADC_ADLAR_SET_gc   (0x20) /* ADC Left Adjust Result - SET */


/* Analog Channel and Gain Selection Bits */
#define ADC_ADMUX_MUX_gc(x) (x & 0x1F)

/* ADC Enable */
#define ADC_ADEN_CLEAR_gc (0x00) /* ADC Enable - CLEAR */
#define ADC_ADEN_SET_gc   (0x80) /* ADC Enable - SET */


/* ADC Start Conversion */
#define ADC_ADSC_CLEAR_gc (0x00) /* ADC Start Conversion - CLEAR */
#define ADC_ADSC_SET_gc   (0x40) /* ADC Start Conversion - SET */


/* ADC Auto Trigger Enable */
#define ADC_ADATE_CLEAR_gc (0x00) /* ADC Auto Trigger Enable - CLEAR */
#define ADC_ADATE_SET_gc   (0x20) /* ADC Auto Trigger Enable - SET */


/* ADC Interrupt Flag */
#define ADC_ADIF_CLEAR_gc (0x00) /* ADC Interrupt Flag - CLEAR */
#define ADC_ADIF_SET_gc   (0x10) /* ADC Interrupt Flag - SET */


/* ADC Interrupt Enable */
#define ADC_ADIE_CLEAR_gc (0x00) /* ADC Interrupt Enable - CLEAR */
#define ADC_ADIE_SET_gc   (0x08) /* ADC Interrupt Enable - SET */


/* ADC  Prescaler Select Bits */
#define ADC_ADPS_VAL_0x00_gc (0x00) /* 2 */
#define ADC_ADPS_VAL_0x01_gc (0x01) /* 2 */
#define ADC_ADPS_VAL_0x02_gc (0x02) /* 4 */
#define ADC_ADPS_VAL_0x03_gc (0x03) /* 8 */
#define ADC_ADPS_VAL_0x04_gc (0x04) /* 16 */
#define ADC_ADPS_VAL_0x05_gc (0x05) /* 32 */
#define ADC_ADPS_VAL_0x06_gc (0x06) /* 64 */
#define ADC_ADPS_VAL_0x07_gc (0x07) /* 128 */


/* AVDD Supply Voltage OK */
#define ADC_AVDDOK_CLEAR_gc (0x00) /* AVDD Supply Voltage OK - CLEAR */
#define ADC_AVDDOK_SET_gc   (0x80) /* AVDD Supply Voltage OK - SET */


/* Analog Comparator Multiplexer Enable */
#define ADC_ACME_CLEAR_gc (0x00) /* Analog Comparator Multiplexer Enable - CLEAR */
#define ADC_ACME_SET_gc   (0x40) /* Analog Comparator Multiplexer Enable - SET */


/* Reference Voltage OK */
#define ADC_REFOK_CLEAR_gc (0x00) /* Reference Voltage OK - CLEAR */
#define ADC_REFOK_SET_gc   (0x20) /* Reference Voltage OK - SET */


/* Analog Channel Change */
#define ADC_ACCH_CLEAR_gc (0x00) /* Analog Channel Change - CLEAR */
#define ADC_ACCH_SET_gc   (0x10) /* Analog Channel Change - SET */


/* Analog Channel and Gain Selection Bits */
#define ADC_MUX5_CLEAR_gc (0x00) /* Analog Channel and Gain Selection Bits - CLEAR */
#define ADC_MUX5_SET_gc   (0x08) /* Analog Channel and Gain Selection Bits - SET */


/* ADC Auto Trigger Source */
#define ADC_ADTS_VAL_0x00_gc (0x00) /* Free Running mode */
#define ADC_ADTS_VAL_0x01_gc (0x01) /* Analog Comparator */
#define ADC_ADTS_VAL_0x02_gc (0x02) /* External Interrupt Request 0 */
#define ADC_ADTS_VAL_0x03_gc (0x03) /* Timer/Counter0 Compare Match A */
#define ADC_ADTS_VAL_0x04_gc (0x04) /* Timer/Counter0 Overflow */
#define ADC_ADTS_VAL_0x05_gc (0x05) /* Timer/Counter1 Compare Match B */
#define ADC_ADTS_VAL_0x06_gc (0x06) /* Timer/Counter1 Overflow */
#define ADC_ADTS_VAL_0x07_gc (0x07) /* Timer/Counter1 Capture Event */


/* ADC Track-and-Hold Time */
#define ADC_ADTHT_VAL_0x00_gc (0x00<<6) /* Single ended: 1, differential 3 ADC clock cycles */
#define ADC_ADTHT_VAL_0x01_gc (0x01<<6) /* Single ended: 2, differential 5 ADC clock cycles */
#define ADC_ADTHT_VAL_0x02_gc (0x02<<6) /* Single ended: 3, differential 7 ADC clock cycles */
#define ADC_ADTHT_VAL_0x03_gc (0x03<<6) /* Single ended: 4, differential 9 ADC clock cycles */


/* Reserved */
#define ADC_Res0_CLEAR_gc (0x00) /* Reserved - CLEAR */
#define ADC_Res0_SET_gc   (0x20) /* Reserved - SET */


/* ADC Start-up Time */
#define ADC_ADSUT_VAL_0x00_gc (0x00) /* 3 ADC clock cycles */
#define ADC_ADSUT_VAL_0x01_gc (0x01) /* 7 ADC clock cycles */
#define ADC_ADSUT_VAL_0x02_gc (0x02) /* 11 ADC clock cycles */
#define ADC_ADSUT_VAL_0x03_gc (0x03) /* 15 ADC clock cycles */
#define ADC_ADSUT_VAL_0x04_gc (0x04) /* ... */
#define ADC_ADSUT_VAL_0x3E_gc (0x3E) /* 251 ADC clock cycles */
#define ADC_ADSUT_VAL_0x3F_gc (0x3F) /* 255 ADC clock cycles */


/* Reserved Bits */
#define ADC_ADC15D_CLEAR_gc (0x00) /* Reserved Bits - CLEAR */
#define ADC_ADC15D_SET_gc   (0x80) /* Reserved Bits - SET */


/* Reserved Bits */
#define ADC_ADC14D_CLEAR_gc (0x00) /* Reserved Bits - CLEAR */
#define ADC_ADC14D_SET_gc   (0x40) /* Reserved Bits - SET */


/* Reserved Bits */
#define ADC_ADC13D_CLEAR_gc (0x00) /* Reserved Bits - CLEAR */
#define ADC_ADC13D_SET_gc   (0x20) /* Reserved Bits - SET */


/* Reserved Bits */
#define ADC_ADC12D_CLEAR_gc (0x00) /* Reserved Bits - CLEAR */
#define ADC_ADC12D_SET_gc   (0x10) /* Reserved Bits - SET */


/* Reserved Bits */
#define ADC_ADC11D_CLEAR_gc (0x00) /* Reserved Bits - CLEAR */
#define ADC_ADC11D_SET_gc   (0x08) /* Reserved Bits - SET */


/* Reserved Bits */
#define ADC_ADC10D_CLEAR_gc (0x00) /* Reserved Bits - CLEAR */
#define ADC_ADC10D_SET_gc   (0x04) /* Reserved Bits - SET */


/* Reserved Bits */
#define ADC_ADC9D_CLEAR_gc (0x00) /* Reserved Bits - CLEAR */
#define ADC_ADC9D_SET_gc   (0x02) /* Reserved Bits - SET */


/* Reserved Bits */
#define ADC_ADC8D_CLEAR_gc (0x00) /* Reserved Bits - CLEAR */
#define ADC_ADC8D_SET_gc   (0x01) /* Reserved Bits - SET */


/* Disable ADC7:0 Digital Input */
#define ADC_ADC7D_CLEAR_gc (0x00) /* Disable ADC7:0 Digital Input - CLEAR */
#define ADC_ADC7D_SET_gc   (0x80) /* Disable ADC7:0 Digital Input - SET */


/* Disable ADC7:0 Digital Input */
#define ADC_ADC6D_CLEAR_gc (0x00) /* Disable ADC7:0 Digital Input - CLEAR */
#define ADC_ADC6D_SET_gc   (0x40) /* Disable ADC7:0 Digital Input - SET */


/* Disable ADC7:0 Digital Input */
#define ADC_ADC5D_CLEAR_gc (0x00) /* Disable ADC7:0 Digital Input - CLEAR */
#define ADC_ADC5D_SET_gc   (0x20) /* Disable ADC7:0 Digital Input - SET */


/* Disable ADC7:0 Digital Input */
#define ADC_ADC4D_CLEAR_gc (0x00) /* Disable ADC7:0 Digital Input - CLEAR */
#define ADC_ADC4D_SET_gc   (0x10) /* Disable ADC7:0 Digital Input - SET */


/* Disable ADC7:0 Digital Input */
#define ADC_ADC3D_CLEAR_gc (0x00) /* Disable ADC7:0 Digital Input - CLEAR */
#define ADC_ADC3D_SET_gc   (0x08) /* Disable ADC7:0 Digital Input - SET */


/* Disable ADC7:0 Digital Input */
#define ADC_ADC2D_CLEAR_gc (0x00) /* Disable ADC7:0 Digital Input - CLEAR */
#define ADC_ADC2D_SET_gc   (0x04) /* Disable ADC7:0 Digital Input - SET */


/* Disable ADC7:0 Digital Input */
#define ADC_ADC1D_CLEAR_gc (0x00) /* Disable ADC7:0 Digital Input - CLEAR */
#define ADC_ADC1D_SET_gc   (0x02) /* Disable ADC7:0 Digital Input - SET */


/* Disable ADC7:0 Digital Input */
#define ADC_ADC0D_CLEAR_gc (0x00) /* Disable ADC7:0 Digital Input - CLEAR */
#define ADC_ADC0D_SET_gc   (0x01) /* Disable ADC7:0 Digital Input - SET */


/*
--------------------------------------------------------------------------------
BOOT_LOAD - Bootloader
--------------------------------------------------------------------------------
*/


/* SPM Interrupt Enable */
#define BOOT_LOAD_SPMIE_CLEAR_gc (0x00) /* SPM Interrupt Enable - CLEAR */
#define BOOT_LOAD_SPMIE_SET_gc   (0x80) /* SPM Interrupt Enable - SET */


/* Read While Write Section Busy */
#define BOOT_LOAD_RWWSB_CLEAR_gc (0x00) /* Read While Write Section Busy - CLEAR */
#define BOOT_LOAD_RWWSB_SET_gc   (0x40) /* Read While Write Section Busy - SET */


/* Signature Row Read */
#define BOOT_LOAD_SIGRD_CLEAR_gc (0x00) /* Signature Row Read - CLEAR */
#define BOOT_LOAD_SIGRD_SET_gc   (0x20) /* Signature Row Read - SET */


/* Read While Write Section Read Enable */
#define BOOT_LOAD_RWWSRE_CLEAR_gc (0x00) /* Read While Write Section Read Enable - CLEAR */
#define BOOT_LOAD_RWWSRE_SET_gc   (0x10) /* Read While Write Section Read Enable - SET */


/* Boot Lock Bit Set */
#define BOOT_LOAD_BLBSET_CLEAR_gc (0x00) /* Boot Lock Bit Set - CLEAR */
#define BOOT_LOAD_BLBSET_SET_gc   (0x08) /* Boot Lock Bit Set - SET */


/* Page Write */
#define BOOT_LOAD_PGWRT_CLEAR_gc (0x00) /* Page Write - CLEAR */
#define BOOT_LOAD_PGWRT_SET_gc   (0x04) /* Page Write - SET */


/* Page Erase */
#define BOOT_LOAD_PGERS_CLEAR_gc (0x00) /* Page Erase - CLEAR */
#define BOOT_LOAD_PGERS_SET_gc   (0x02) /* Page Erase - SET */


/* Store Program Memory Enable */
#define BOOT_LOAD_SPMEN_CLEAR_gc (0x00) /* Store Program Memory Enable - CLEAR */
#define BOOT_LOAD_SPMEN_SET_gc   (0x01) /* Store Program Memory Enable - SET */


/*
--------------------------------------------------------------------------------
CPU - CPU Registers
--------------------------------------------------------------------------------
*/


/* Global Interrupt Enable */
#define CPU_I_CLEAR_gc (0x00) /* Global Interrupt Enable - CLEAR */
#define CPU_I_SET_gc   (0x80) /* Global Interrupt Enable - SET */


/* Bit Copy Storage */
#define CPU_T_CLEAR_gc (0x00) /* Bit Copy Storage - CLEAR */
#define CPU_T_SET_gc   (0x40) /* Bit Copy Storage - SET */


/* Half Carry Flag */
#define CPU_H_CLEAR_gc (0x00) /* Half Carry Flag - CLEAR */
#define CPU_H_SET_gc   (0x20) /* Half Carry Flag - SET */


/* Sign Bit */
#define CPU_S_CLEAR_gc (0x00) /* Sign Bit - CLEAR */
#define CPU_S_SET_gc   (0x10) /* Sign Bit - SET */


/* Two's Complement Overflow Flag */
#define CPU_V_CLEAR_gc (0x00) /* Two's Complement Overflow Flag - CLEAR */
#define CPU_V_SET_gc   (0x08) /* Two's Complement Overflow Flag - SET */


/* Negative Flag */
#define CPU_N_CLEAR_gc (0x00) /* Negative Flag - CLEAR */
#define CPU_N_SET_gc   (0x04) /* Negative Flag - SET */


/* Zero Flag */
#define CPU_Z_CLEAR_gc (0x00) /* Zero Flag - CLEAR */
#define CPU_Z_SET_gc   (0x02) /* Zero Flag - SET */


/* Carry Flag */
#define CPU_C_CLEAR_gc (0x00) /* Carry Flag - CLEAR */
#define CPU_C_SET_gc   (0x01) /* Carry Flag - SET */


/* JTAG Interface Disable */
#define CPU_JTD_CLEAR_gc (0x00) /* JTAG Interface Disable - CLEAR */
#define CPU_JTD_SET_gc   (0x80) /* JTAG Interface Disable - SET */


/* Reserved */
#define CPU_MCUCR_Res_gc(x) ((x<<5) & 0x60)

/* Pull-up Disable */
#define CPU_PUD_CLEAR_gc (0x00) /* Pull-up Disable - CLEAR */
#define CPU_PUD_SET_gc   (0x10) /* Pull-up Disable - SET */


/* Interrupt Vector Select */
#define CPU_IVSEL_CLEAR_gc (0x00) /* Interrupt Vector Select - CLEAR */
#define CPU_IVSEL_SET_gc   (0x02) /* Interrupt Vector Select - SET */


/* Interrupt Vector Change Enable */
#define CPU_IVCE_CLEAR_gc (0x00) /* Interrupt Vector Change Enable - CLEAR */
#define CPU_IVCE_SET_gc   (0x01) /* Interrupt Vector Change Enable - SET */


/* Reserved */
#define CPU_MCUSR_Res_gc(x) ((x<<5) & 0xE0)

/* JTAG Reset Flag */
#define CPU_JTRF_CLEAR_gc (0x00) /* JTAG Reset Flag - CLEAR */
#define CPU_JTRF_SET_gc   (0x10) /* JTAG Reset Flag - SET */


/* Watchdog Reset Flag */
#define CPU_WDRF_CLEAR_gc (0x00) /* Watchdog Reset Flag - CLEAR */
#define CPU_WDRF_SET_gc   (0x08) /* Watchdog Reset Flag - SET */


/* Brown-out Reset Flag */
#define CPU_BORF_CLEAR_gc (0x00) /* Brown-out Reset Flag - CLEAR */
#define CPU_BORF_SET_gc   (0x04) /* Brown-out Reset Flag - SET */


/* External Reset Flag */
#define CPU_EXTRF_CLEAR_gc (0x00) /* External Reset Flag - CLEAR */
#define CPU_EXTRF_SET_gc   (0x02) /* External Reset Flag - SET */


/* Power-on Reset Flag */
#define CPU_PORF_CLEAR_gc (0x00) /* Power-on Reset Flag - CLEAR */
#define CPU_PORF_SET_gc   (0x01) /* Power-on Reset Flag - SET */


/* Oscillator Calibration Tuning Value */
#define CPU_CAL_VAL_0x00_gc (0x00) /* Calibration value for lowest oscillator frequency */
#define CPU_CAL_VAL_0x7f_gc (0x7F) /* End value of low frequency range calibration */
#define CPU_CAL_VAL_0x80_gc (0x80) /* Start value of high frequency range calibration */
#define CPU_CAL_VAL_0xff_gc (0xFF) /* Calibration value for highest oscillator frequency */


/* Clock Prescaler Change Enable */
#define CPU_CLKPCE_CLEAR_gc (0x00) /* Clock Prescaler Change Enable - CLEAR */
#define CPU_CLKPCE_SET_gc   (0x80) /* Clock Prescaler Change Enable - SET */


/* Reserved */
#define CPU_CLKPR_Res_gc(x) ((x<<4) & 0x70)

/* Clock Prescaler Select Bits */
#define CPU_CLKPS_VAL_0x0_gc (0x00) /* Division factor 1   / RC-Oscillator   2 */
#define CPU_CLKPS_VAL_0x1_gc (0x01) /* Division factor 2   / RC-Oscillator   4 */
#define CPU_CLKPS_VAL_0x2_gc (0x02) /* Division factor 4   / RC-Oscillator   8 */
#define CPU_CLKPS_VAL_0x3_gc (0x03) /* Division factor 8   / RC-Oscillator  16 */
#define CPU_CLKPS_VAL_0x4_gc (0x04) /* Division factor 16  / RC-Oscillator  32 */
#define CPU_CLKPS_VAL_0x5_gc (0x05) /* Division factor 32  / RC-Oscillator  64 */
#define CPU_CLKPS_VAL_0x6_gc (0x06) /* Division factor 64  / RC-Oscillator 128 */
#define CPU_CLKPS_VAL_0x7_gc (0x07) /* Division factor 128 / RC-Oscillator 256 */
#define CPU_CLKPS_VAL_0x8_gc (0x08) /* Division factor 256 / RC-Oscillator 512 */
#define CPU_CLKPS_VAL_0x9_gc (0x09) /* Reserved */
#define CPU_CLKPS_VAL_0xA_gc (0x0A) /* Reserved */
#define CPU_CLKPS_VAL_0xB_gc (0x0B) /* Reserved */
#define CPU_CLKPS_VAL_0xC_gc (0x0C) /* Reserved */
#define CPU_CLKPS_VAL_0xD_gc (0x0D) /* Reserved */
#define CPU_CLKPS_VAL_0xE_gc (0x0E) /* Reserved */
#define CPU_CLKPS_VAL_0xF_gc (0x0F) /* Division factor 1 only permitted for RC-Oscillator. Flash and EEPROM programming is not allowed. */


/* Reserved */
#define CPU_SMCR_Res_gc(x) ((x<<4) & 0xF0)

/* Sleep Mode Select bits */
#define CPU_SM_IDLE_gc     (0x00<<1) /* Idle */
#define CPU_SM_ADC_gc      (0x01<<1) /* ADC Noise Reduction (If Available) */
#define CPU_SM_PDOWN_gc    (0x02<<1) /* Power Down */
#define CPU_SM_PSAVE_gc    (0x03<<1) /* Power Save */
#define CPU_SM_VAL_0x04_gc (0x04<<1) /* Reserved */
#define CPU_SM_VAL_0x05_gc (0x05<<1) /* Reserved */
#define CPU_SM_STDBY_gc    (0x06<<1) /* Standby */
#define CPU_SM_ESTDBY_gc   (0x07<<1) /* Extended Standby */


/* Sleep Enable */
#define CPU_SE_CLEAR_gc (0x00) /* Sleep Enable - CLEAR */
#define CPU_SE_SET_gc   (0x01) /* Sleep Enable - SET */


/* Reserved */
#define CPU_RAMPZ_Res_gc(x) ((x<<1) & 0xFE)

/* Extended Z-Pointer Value */
#define CPU_RAMPZ0_VAL_0_gc (0x00) /* Default value of Z-pointer MSB's. */


/* General Purpose I/O Register 0 Value */
#define CPU_GPIOR07_CLEAR_gc (0x00) /* General Purpose I/O Register 0 Value - CLEAR */
#define CPU_GPIOR07_SET_gc   (0x80) /* General Purpose I/O Register 0 Value - SET */


/* General Purpose I/O Register 0 Value */
#define CPU_GPIOR06_CLEAR_gc (0x00) /* General Purpose I/O Register 0 Value - CLEAR */
#define CPU_GPIOR06_SET_gc   (0x40) /* General Purpose I/O Register 0 Value - SET */


/* General Purpose I/O Register 0 Value */
#define CPU_GPIOR05_CLEAR_gc (0x00) /* General Purpose I/O Register 0 Value - CLEAR */
#define CPU_GPIOR05_SET_gc   (0x20) /* General Purpose I/O Register 0 Value - SET */


/* General Purpose I/O Register 0 Value */
#define CPU_GPIOR04_CLEAR_gc (0x00) /* General Purpose I/O Register 0 Value - CLEAR */
#define CPU_GPIOR04_SET_gc   (0x10) /* General Purpose I/O Register 0 Value - SET */


/* General Purpose I/O Register 0 Value */
#define CPU_GPIOR03_CLEAR_gc (0x00) /* General Purpose I/O Register 0 Value - CLEAR */
#define CPU_GPIOR03_SET_gc   (0x08) /* General Purpose I/O Register 0 Value - SET */


/* General Purpose I/O Register 0 Value */
#define CPU_GPIOR02_CLEAR_gc (0x00) /* General Purpose I/O Register 0 Value - CLEAR */
#define CPU_GPIOR02_SET_gc   (0x04) /* General Purpose I/O Register 0 Value - SET */


/* General Purpose I/O Register 0 Value */
#define CPU_GPIOR01_CLEAR_gc (0x00) /* General Purpose I/O Register 0 Value - CLEAR */
#define CPU_GPIOR01_SET_gc   (0x02) /* General Purpose I/O Register 0 Value - SET */


/* General Purpose I/O Register 0 Value */
#define CPU_GPIOR00_CLEAR_gc (0x00) /* General Purpose I/O Register 0 Value - CLEAR */
#define CPU_GPIOR00_SET_gc   (0x01) /* General Purpose I/O Register 0 Value - SET */


/* Power Reduction SRAM3 */
#define CPU_PRRAM3_CLEAR_gc (0x00) /* Power Reduction SRAM3 - CLEAR */
#define CPU_PRRAM3_SET_gc   (0x08) /* Power Reduction SRAM3 - SET */


/* Power Reduction SRAM2 */
#define CPU_PRRAM2_CLEAR_gc (0x00) /* Power Reduction SRAM2 - CLEAR */
#define CPU_PRRAM2_SET_gc   (0x04) /* Power Reduction SRAM2 - SET */


/* Power Reduction SRAM1 */
#define CPU_PRRAM1_CLEAR_gc (0x00) /* Power Reduction SRAM1 - CLEAR */
#define CPU_PRRAM1_SET_gc   (0x02) /* Power Reduction SRAM1 - SET */


/* Power Reduction SRAM0 */
#define CPU_PRRAM0_CLEAR_gc (0x00) /* Power Reduction SRAM0 - CLEAR */
#define CPU_PRRAM0_SET_gc   (0x01) /* Power Reduction SRAM0 - SET */


/* Reserved Bit */
#define CPU_Res_CLEAR_gc (0x00) /* Reserved Bit - CLEAR */
#define CPU_Res_SET_gc   (0x80) /* Reserved Bit - SET */


/* Power Reduction Transceiver */
#define CPU_PRTRX24_CLEAR_gc (0x00) /* Power Reduction Transceiver - CLEAR */
#define CPU_PRTRX24_SET_gc   (0x40) /* Power Reduction Transceiver - SET */


/* Power Reduction Timer/Counter5 */
#define CPU_PRTIM5_CLEAR_gc (0x00) /* Power Reduction Timer/Counter5 - CLEAR */
#define CPU_PRTIM5_SET_gc   (0x20) /* Power Reduction Timer/Counter5 - SET */


/* Power Reduction Timer/Counter4 */
#define CPU_PRTIM4_CLEAR_gc (0x00) /* Power Reduction Timer/Counter4 - CLEAR */
#define CPU_PRTIM4_SET_gc   (0x10) /* Power Reduction Timer/Counter4 - SET */


/* Power Reduction Timer/Counter3 */
#define CPU_PRTIM3_CLEAR_gc (0x00) /* Power Reduction Timer/Counter3 - CLEAR */
#define CPU_PRTIM3_SET_gc   (0x08) /* Power Reduction Timer/Counter3 - SET */


/* Power Reduction USART1 */
#define CPU_PRUSART1_CLEAR_gc (0x00) /* Power Reduction USART1 - CLEAR */
#define CPU_PRUSART1_SET_gc   (0x01) /* Power Reduction USART1 - SET */


/* Power Reduction TWI */
#define CPU_PRTWI_CLEAR_gc (0x00) /* Power Reduction TWI - CLEAR */
#define CPU_PRTWI_SET_gc   (0x80) /* Power Reduction TWI - SET */


/* Power Reduction Timer/Counter2 */
#define CPU_PRTIM2_CLEAR_gc (0x00) /* Power Reduction Timer/Counter2 - CLEAR */
#define CPU_PRTIM2_SET_gc   (0x40) /* Power Reduction Timer/Counter2 - SET */


/* Power Reduction Timer/Counter0 */
#define CPU_PRTIM0_CLEAR_gc (0x00) /* Power Reduction Timer/Counter0 - CLEAR */
#define CPU_PRTIM0_SET_gc   (0x20) /* Power Reduction Timer/Counter0 - SET */


/* Power Reduction PGA */
#define CPU_PRPGA_CLEAR_gc (0x00) /* Power Reduction PGA - CLEAR */
#define CPU_PRPGA_SET_gc   (0x10) /* Power Reduction PGA - SET */


/* Power Reduction Timer/Counter1 */
#define CPU_PRTIM1_CLEAR_gc (0x00) /* Power Reduction Timer/Counter1 - CLEAR */
#define CPU_PRTIM1_SET_gc   (0x08) /* Power Reduction Timer/Counter1 - SET */


/* Power Reduction Serial Peripheral Interface */
#define CPU_PRSPI_CLEAR_gc (0x00) /* Power Reduction Serial Peripheral Interface - CLEAR */
#define CPU_PRSPI_SET_gc   (0x04) /* Power Reduction Serial Peripheral Interface - SET */


/* Power Reduction USART */
#define CPU_PRUSART0_CLEAR_gc (0x00) /* Power Reduction USART - CLEAR */
#define CPU_PRUSART0_SET_gc   (0x02) /* Power Reduction USART - SET */


/* Power Reduction ADC */
#define CPU_PRADC_CLEAR_gc (0x00) /* Power Reduction ADC - CLEAR */
#define CPU_PRADC_SET_gc   (0x01) /* Power Reduction ADC - SET */


/*
--------------------------------------------------------------------------------
FLASH - FLASH Controller
--------------------------------------------------------------------------------
*/


/* Enable Extended Address Mode for Extra Rows */
#define FLASH_ENEAM_CLEAR_gc (0x00) /* Enable Extended Address Mode for Extra Rows - CLEAR */
#define FLASH_ENEAM_SET_gc   (0x40) /* Enable Extended Address Mode for Extra Rows - SET */


/* Address for Extended Address Mode of Extra Rows */
#define FLASH_AEAM_VAL_0_gc (0x00<<4) /* Factory Row */
#define FLASH_AEAM_VAL_1_gc (0x01<<4) /* User Row 1 */
#define FLASH_AEAM_VAL_2_gc (0x02<<4) /* User Row 2 */
#define FLASH_AEAM_VAL_3_gc (0x03<<4) /* User Row 3 */


/* Reserved Bit */
#define FLASH_Res_CLEAR_gc (0x00) /* Reserved Bit - CLEAR */
#define FLASH_Res_SET_gc   (0x80) /* Reserved Bit - SET */


/* Fine Calibration Bits */
#define FLASH_BGCAL_FINE_VAL_0_gc  (0x00<<3) /* Center value */
#define FLASH_BGCAL_FINE_VAL_1_gc  (0x01<<3) /* Voltage step up */
#define FLASH_BGCAL_FINE_VAL_8_gc  (0x08<<3) /* Voltage step down */
#define FLASH_BGCAL_FINE_VAL_7_gc  (0x07<<3) /* Setting for highest voltage */
#define FLASH_BGCAL_FINE_VAL_15_gc (0x0F<<3) /* Setting for lowest voltage */


/* Coarse Calibration Bits */
#define FLASH_BGCAL_VAL_4_gc (0x04) /* Center value */
#define FLASH_BGCAL_VAL_3_gc (0x03) /* Voltage step up */
#define FLASH_BGCAL_VAL_5_gc (0x05) /* Voltage step down */
#define FLASH_BGCAL_VAL_0_gc (0x00) /* Setting for highest voltage */
#define FLASH_BGCAL_VAL_7_gc (0x07) /* Setting for lowest voltage */


/*
--------------------------------------------------------------------------------
PWRCTRL - Power Controller
--------------------------------------------------------------------------------
*/


/* Reserved */
#define PWRCTRL_TRXPR_Res_gc(x) ((x<<4) & 0xF0)

/* Multi-purpose Transceiver Control Bit */
#define PWRCTRL_SLPTR_CLEAR_gc (0x00) /* Multi-purpose Transceiver Control Bit - CLEAR */
#define PWRCTRL_SLPTR_SET_gc   (0x02) /* Multi-purpose Transceiver Control Bit - SET */


/* Force Transceiver Reset */
#define PWRCTRL_TRXRST_CLEAR_gc (0x00) /* Force Transceiver Reset - CLEAR */
#define PWRCTRL_TRXRST_SET_gc   (0x01) /* Force Transceiver Reset - SET */


/* Reserved */
#define PWRCTRL_DRTRAM0_Res_gc(x) ((x<<6) & 0xC0)

/* DRT Switch OK */
#define PWRCTRL_DRTSWOK_CLEAR_gc (0x00) /* DRT Switch OK - CLEAR */
#define PWRCTRL_DRTSWOK_SET_gc   (0x20) /* DRT Switch OK - SET */


/* Enable SRAM Data Retention */
#define PWRCTRL_ENDRT_CLEAR_gc (0x00) /* Enable SRAM Data Retention - CLEAR */
#define PWRCTRL_ENDRT_SET_gc   (0x10) /* Enable SRAM Data Retention - SET */


/* Reserved */
#define PWRCTRL_DRTRAM1_Res_gc(x) ((x<<6) & 0xC0)

/* DRT Switch OK */
/* PWRCTRL_DRTSWOK_CLEAR_gc ALREADY DEFINED */
/* PWRCTRL_DRTSWOK_SET_gc ALREADY DEFINED */


/* Enable SRAM Data Retention */
/* PWRCTRL_ENDRT_CLEAR_gc ALREADY DEFINED */
/* PWRCTRL_ENDRT_SET_gc ALREADY DEFINED */


/* Reserved Bit */
#define PWRCTRL_Res_CLEAR_gc (0x00) /* Reserved Bit - CLEAR */
#define PWRCTRL_Res_SET_gc   (0x40) /* Reserved Bit - SET */


/* DRT Switch OK */
/* PWRCTRL_DRTSWOK_CLEAR_gc ALREADY DEFINED */
/* PWRCTRL_DRTSWOK_SET_gc ALREADY DEFINED */


/* Enable SRAM Data Retention */
/* PWRCTRL_ENDRT_CLEAR_gc ALREADY DEFINED */
/* PWRCTRL_ENDRT_SET_gc ALREADY DEFINED */


/* Reserved */
#define PWRCTRL_DRTRAM3_Res_gc(x) ((x<<6) & 0xC0)

/* DRT Switch OK */
/* PWRCTRL_DRTSWOK_CLEAR_gc ALREADY DEFINED */
/* PWRCTRL_DRTSWOK_SET_gc ALREADY DEFINED */


/* Enable SRAM Data Retention */
/* PWRCTRL_ENDRT_CLEAR_gc ALREADY DEFINED */
/* PWRCTRL_ENDRT_SET_gc ALREADY DEFINED */


/* Reserved */
#define PWRCTRL_LLDRL_Res_gc(x) ((x<<4) & 0xF0)

/* Low-Byte Data Register Bits */
#define PWRCTRL_LLDRL_VAL_0x00_gc (0x00) /* Calibration limit for fast process corner/high output voltage */
#define PWRCTRL_LLDRL_VAL_0x08_gc (0x08) /* Calibration limit for slow process corner/low output voltage */


/* Reserved */
#define PWRCTRL_LLDRH_Res_gc(x) ((x<<5) & 0xE0)

/* High-Byte Data Register Bits */
#define PWRCTRL_LLDRH_VAL_0x00_gc (0x00) /* Calibration limit for fast process corner/high output voltage */
#define PWRCTRL_LLDRH_VAL_0x10_gc (0x10) /* Calibration limit for slow process corner/low output voltage */


/* Reserved Bit */
#define PWRCTRL_LLCR_Res_gc(x) ((x<<6) & 0xC0)

/* Calibration Done */
#define PWRCTRL_LLDONE_CLEAR_gc (0x00) /* Calibration Done - CLEAR */
#define PWRCTRL_LLDONE_SET_gc   (0x20) /* Calibration Done - SET */


/* Comparator Output */
#define PWRCTRL_LLCOMP_CLEAR_gc (0x00) /* Comparator Output - CLEAR */
#define PWRCTRL_LLCOMP_SET_gc   (0x10) /* Comparator Output - SET */


/* Calibration Active */
#define PWRCTRL_LLCAL_CLEAR_gc (0x00) /* Calibration Active - CLEAR */
#define PWRCTRL_LLCAL_SET_gc   (0x08) /* Calibration Active - SET */


/* Temperature Coefficient of Current Source */
#define PWRCTRL_LLTCO_CLEAR_gc (0x00) /* Temperature Coefficient of Current Source - CLEAR */
#define PWRCTRL_LLTCO_SET_gc   (0x04) /* Temperature Coefficient of Current Source - SET */


/* Short Lower Calibration Circuit */
#define PWRCTRL_LLSHORT_CLEAR_gc (0x00) /* Short Lower Calibration Circuit - CLEAR */
#define PWRCTRL_LLSHORT_SET_gc   (0x02) /* Short Lower Calibration Circuit - SET */


/* Enable Automatic Calibration */
#define PWRCTRL_LLENCAL_CLEAR_gc (0x00) /* Enable Automatic Calibration - CLEAR */
#define PWRCTRL_LLENCAL_SET_gc   (0x01) /* Enable Automatic Calibration - SET */


/* Driver Strength Port F */
#define PWRCTRL_PFDRV_PAD_IO_2MA_gc (0x00<<6) /* 2 mA */
#define PWRCTRL_PFDRV_PAD_IO_4MA_gc (0x01<<6) /* 4 mA */
#define PWRCTRL_PFDRV_PAD_IO_6MA_gc (0x02<<6) /* 6 mA */
#define PWRCTRL_PFDRV_PAD_IO_8MA_gc (0x03<<6) /* 8 mA */


/* Driver Strength Port E */
#define PWRCTRL_PEDRV_PAD_IO_2MA_gc (0x00<<4) /* 2 mA */
#define PWRCTRL_PEDRV_PAD_IO_4MA_gc (0x01<<4) /* 4 mA */
#define PWRCTRL_PEDRV_PAD_IO_6MA_gc (0x02<<4) /* 6 mA */
#define PWRCTRL_PEDRV_PAD_IO_8MA_gc (0x03<<4) /* 8 mA */


/* Driver Strength Port D */
#define PWRCTRL_PDDRV_PAD_IO_2MA_gc (0x00<<2) /* 2 mA */
#define PWRCTRL_PDDRV_PAD_IO_4MA_gc (0x01<<2) /* 4 mA */
#define PWRCTRL_PDDRV_PAD_IO_6MA_gc (0x02<<2) /* 6 mA */
#define PWRCTRL_PDDRV_PAD_IO_8MA_gc (0x03<<2) /* 8 mA */


/* Driver Strength Port B */
#define PWRCTRL_PBDRV_PAD_IO_2MA_gc (0x00) /* 2 mA */
#define PWRCTRL_PBDRV_PAD_IO_4MA_gc (0x01) /* 4 mA */
#define PWRCTRL_PBDRV_PAD_IO_6MA_gc (0x02) /* 6 mA */
#define PWRCTRL_PBDRV_PAD_IO_8MA_gc (0x03) /* 8 mA */


/* Reserved */
#define PWRCTRL_DPDS1_Res_gc(x) ((x<<2) & 0xFC)

/* Driver Strength Port G */
#define PWRCTRL_PGDRV_PAD_IO_2MA_gc (0x00) /* 2 mA */
#define PWRCTRL_PGDRV_PAD_IO_4MA_gc (0x01) /* 4 mA */
#define PWRCTRL_PGDRV_PAD_IO_6MA_gc (0x02) /* 6 mA */
#define PWRCTRL_PGDRV_PAD_IO_8MA_gc (0x03) /* 8 mA */


/* Pull-up Disable */
#define PWRCTRL_PUD_CLEAR_gc (0x00) /* Pull-up Disable - CLEAR */
#define PWRCTRL_PUD_SET_gc   (0x10) /* Pull-up Disable - SET */

#endif

/*
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
C/ASM COMMON DEFINITIONS
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

/*
================================================================================
Flattened fully qualified IO register names
================================================================================
*/


/* AC - Analog Comparator (0x00) */
#define AC_BASE             _SFR_MEM8 (0x00)  /* AC Base Address */
#define AC_ACSR             _SFR_MEM8 (0x50)  /* Analog Comparator Control And Status Register */
#define AC_ADCSRB           _SFR_MEM8 (0x7B)  /* ADC Control and Status Register B */
#define AC_DIDR1            _SFR_MEM8 (0x7F)  /* Digital Input Disable Register 1 */

/* USART0 - USART (0x00) */
#define USART00_BASE        _SFR_MEM8 (0x00)  /* USART00 Base Address */
#define USART00_UCSR0A      _SFR_MEM8 (0xC0)  /* USART0 Control and Status Register A */
#define USART00_UCSR0B      _SFR_MEM8 (0xC1)  /* USART0 Control and Status Register B */
#define USART00_UCSR0C      _SFR_MEM8 (0xC2)  /* USART0 Control and Status Register C */
#define USART00_UBRR0       _SFR_MEM16(0xC4)  /* USART0 Baud Rate Register  Bytes */
#define USART00_UBRR0L      _SFR_MEM8 (0xC4)  /* USART0 Baud Rate Register  Bytes LOW BYTE */
#define USART00_UBRR0H      _SFR_MEM8 (0xC5)  /* USART0 Baud Rate Register  Bytes HIGH BYTE */
#define USART00_UDR0        _SFR_MEM8 (0xC6)  /* USART0 I/O Data Register */

/* USART1 - USART (0x00) */
#define USART11_BASE        _SFR_MEM8 (0x00)  /* USART11 Base Address */
#define USART11_UCSR1A      _SFR_MEM8 (0xC8)  /* USART1 Control and Status Register A */
#define USART11_UCSR1B      _SFR_MEM8 (0xC9)  /* USART1 Control and Status Register B */
#define USART11_UCSR1C      _SFR_MEM8 (0xCA)  /* USART1 Control and Status Register C */
#define USART11_UBRR1       _SFR_MEM16(0xCC)  /* USART1 Baud Rate Register  Bytes */
#define USART11_UBRR1L      _SFR_MEM8 (0xCC)  /* USART1 Baud Rate Register  Bytes LOW BYTE */
#define USART11_UBRR1H      _SFR_MEM8 (0xCD)  /* USART1 Baud Rate Register  Bytes HIGH BYTE */
#define USART11_UDR1        _SFR_MEM8 (0xCE)  /* USART1 I/O Data Register */

/* TWI - Two Wire Serial Interface (0x00) */
#define TWI_BASE            _SFR_MEM8 (0x00)  /* TWI Base Address */
#define TWI_TWBR            _SFR_MEM8 (0xB8)  /* TWI Bit Rate Register */
#define TWI_TWSR            _SFR_MEM8 (0xB9)  /* TWI Status Register */
#define TWI_TWAR            _SFR_MEM8 (0xBA)  /* TWI (Slave) Address Register */
#define TWI_TWDR            _SFR_MEM8 (0xBB)  /* TWI Data Register */
#define TWI_TWCR            _SFR_MEM8 (0xBC)  /* TWI Control Register */
#define TWI_TWAMR           _SFR_MEM8 (0xBD)  /* TWI (Slave) Address Mask Register */

/* SPI - Serial Peripheral Interface (0x00) */
#define SPI_BASE            _SFR_MEM8 (0x00)  /* SPI Base Address */
#define SPI_SPCR            _SFR_MEM8 (0x4C)  /* SPI Control Register */
#define SPI_SPSR            _SFR_MEM8 (0x4D)  /* SPI Status Register */
#define SPI_SPDR            _SFR_MEM8 (0x4E)  /* SPI Data Register */

/* USART0_SPI - Serial Peripheral Interface (0x00) */
/* SPI_BASE ALREADY DEFINED */
#define SPI_UCSR0A          _SFR_MEM8 (0xC0)  /* USART0 MSPIM Control and Status Register A */
#define SPI_UCSR0B          _SFR_MEM8 (0xC1)  /* USART0 MSPIM Control and Status Register B */
#define SPI_UCSR0C          _SFR_MEM8 (0xC2)  /* USART0 MSPIM Control and Status Register C */

/* USART1_SPI - Serial Peripheral Interface (0x00) */
/* SPI_BASE ALREADY DEFINED */
#define SPI_UCSR1A          _SFR_MEM8 (0xC8)  /* USART1 MSPIM Control and Status Register A */
#define SPI_UCSR1B          _SFR_MEM8 (0xC9)  /* USART1 MSPIM Control and Status Register B */
#define SPI_UCSR1C          _SFR_MEM8 (0xCA)  /* USART1 MSPIM Control and Status Register C */

/* PORTA - I/O Port (0x00) */
#define PORTAA_BASE         _SFR_MEM8 (0x00)  /* PORTAA Base Address */
#define PORTAA_PINA         _SFR_MEM8 (0x20)  /* Port A Input Pins Address */
#define PORTAA_DDRA         _SFR_MEM8 (0x21)  /* Port A Data Direction Register */
#define PORTAA_PORTA        _SFR_MEM8 (0x22)  /* Port A Data Register */

/* PORTB - I/O Port (0x00) */
#define PORTBB_BASE         _SFR_MEM8 (0x00)  /* PORTBB Base Address */
#define PORTBB_PINB         _SFR_MEM8 (0x23)  /* Port B Input Pins Address */
#define PORTBB_DDRB         _SFR_MEM8 (0x24)  /* Port B Data Direction Register */
#define PORTBB_PORTB        _SFR_MEM8 (0x25)  /* Port B Data Register */

/* PORTC - I/O Port (0x00) */
#define PORTCC_BASE         _SFR_MEM8 (0x00)  /* PORTCC Base Address */
#define PORTCC_PINC         _SFR_MEM8 (0x26)  /* Port C Input Pins Address */
#define PORTCC_DDRC         _SFR_MEM8 (0x27)  /* Port C Data Direction Register */
#define PORTCC_PORTC        _SFR_MEM8 (0x28)  /* Port C Data Register */

/* PORTD - I/O Port (0x00) */
#define PORTDD_BASE         _SFR_MEM8 (0x00)  /* PORTDD Base Address */
#define PORTDD_PIND         _SFR_MEM8 (0x29)  /* Port D Input Pins Address */
#define PORTDD_DDRD         _SFR_MEM8 (0x2A)  /* Port D Data Direction Register */
#define PORTDD_PORTD        _SFR_MEM8 (0x2B)  /* Port D Data Register */

/* PORTE - I/O Port (0x00) */
#define PORTEE_BASE         _SFR_MEM8 (0x00)  /* PORTEE Base Address */
#define PORTEE_PINE         _SFR_MEM8 (0x2C)  /* Port E Input Pins Address */
#define PORTEE_DDRE         _SFR_MEM8 (0x2D)  /* Port E Data Direction Register */
#define PORTEE_PORTE        _SFR_MEM8 (0x2E)  /* Port E Data Register */

/* PORTF - I/O Port (0x00) */
#define PORTFF_BASE         _SFR_MEM8 (0x00)  /* PORTFF Base Address */
#define PORTFF_PINF         _SFR_MEM8 (0x2F)  /* Port F Input Pins Address */
#define PORTFF_DDRF         _SFR_MEM8 (0x30)  /* Port F Data Direction Register */
#define PORTFF_PORTF        _SFR_MEM8 (0x31)  /* Port F Data Register */

/* PORTG - I/O Port (0x00) */
#define PORTGG_BASE         _SFR_MEM8 (0x00)  /* PORTGG Base Address */
#define PORTGG_PING         _SFR_MEM8 (0x32)  /* Port G Input Pins Address */
#define PORTGG_DDRG         _SFR_MEM8 (0x33)  /* Port G Data Direction Register */
#define PORTGG_PORTG        _SFR_MEM8 (0x34)  /* Port G Data Register */

/* TC0 - Timer/Counter, 8-bit (0x00) */
#define TC8_BASE            _SFR_MEM8 (0x00)  /* TC8 Base Address */
#define TC8_TIFR0           _SFR_MEM8 (0x35)  /* Timer/Counter0 Interrupt Flag Register */
#define TC8_GTCCR           _SFR_MEM8 (0x43)  /* General Timer/Counter Control Register */
#define TC8_TCCR0A          _SFR_MEM8 (0x44)  /* Timer/Counter0 Control Register A */
#define TC8_TCCR0B          _SFR_MEM8 (0x45)  /* Timer/Counter0 Control Register B */
#define TC8_TCNT0           _SFR_MEM8 (0x46)  /* Timer/Counter0 Register */
#define TC8_OCR0A           _SFR_MEM8 (0x47)  /* Timer/Counter0 Output Compare Register */
#define TC8_OCR0B           _SFR_MEM8 (0x48)  /* Timer/Counter0 Output Compare Register B */
#define TC8_TIMSK0          _SFR_MEM8 (0x6E)  /* Timer/Counter0 Interrupt Mask Register */

/* TC2 - Timer/Counter, 8-bit Async (0x00) */
#define TC8_ASYNC_BASE      _SFR_MEM8 (0x00)  /* TC8_ASYNC Base Address */
#define TC8_ASYNC_TIFR2     _SFR_MEM8 (0x37)  /* Timer/Counter Interrupt Flag Register */
#define TC8_ASYNC_GTCCR     _SFR_MEM8 (0x43)  /* General Timer Counter Control register */
#define TC8_ASYNC_TIMSK2    _SFR_MEM8 (0x70)  /* Timer/Counter Interrupt Mask register */
#define TC8_ASYNC_TCCR2A    _SFR_MEM8 (0xB0)  /* Timer/Counter2 Control Register A */
#define TC8_ASYNC_TCCR2B    _SFR_MEM8 (0xB1)  /* Timer/Counter2 Control Register B */
#define TC8_ASYNC_TCNT2     _SFR_MEM8 (0xB2)  /* Timer/Counter2 */
#define TC8_ASYNC_OCR2A     _SFR_MEM8 (0xB3)  /* Timer/Counter2 Output Compare Register A */
#define TC8_ASYNC_OCR2B     _SFR_MEM8 (0xB4)  /* Timer/Counter2 Output Compare Register B */
#define TC8_ASYNC_ASSR      _SFR_MEM8 (0xB6)  /* Asynchronous Status Register */

/* WDT - Watchdog Timer (0x00) */
#define WDT_BASE            _SFR_MEM8 (0x00)  /* WDT Base Address */
#define WDT_WDTCSR          _SFR_MEM8 (0x60)  /* Watchdog Timer Control Register */

/* TC5 - Timer/Counter, 16-bit (0x00) */
#define TC16_BASE           _SFR_MEM8 (0x00)  /* TC16 Base Address */
#define TC16_TIFR5          _SFR_MEM8 (0x3A)  /* Timer/Counter5 Interrupt Flag Register */
#define TC16_TIMSK5         _SFR_MEM8 (0x73)  /* Timer/Counter5 Interrupt Mask Register */
#define TC16_TCCR5A         _SFR_MEM8 (0x120) /* Timer/Counter5 Control Register A */
#define TC16_TCCR5B         _SFR_MEM8 (0x121) /* Timer/Counter5 Control Register B */
#define TC16_TCCR5C         _SFR_MEM8 (0x122) /* Timer/Counter5 Control Register C */
#define TC16_TCNT5          _SFR_MEM16(0x124) /* Timer/Counter5  Bytes */
#define TC16_TCNT5L         _SFR_MEM8 (0x124) /* Timer/Counter5  Bytes LOW BYTE */
#define TC16_TCNT5H         _SFR_MEM8 (0x125) /* Timer/Counter5  Bytes HIGH BYTE */
#define TC16_ICR5           _SFR_MEM16(0x126) /* Timer/Counter5 Input Capture Register  Bytes */
#define TC16_ICR5L          _SFR_MEM8 (0x126) /* Timer/Counter5 Input Capture Register  Bytes LOW BYTE */
#define TC16_ICR5H          _SFR_MEM8 (0x127) /* Timer/Counter5 Input Capture Register  Bytes HIGH BYTE */
#define TC16_OCR5A          _SFR_MEM16(0x128) /* Timer/Counter5 Output Compare Register A  Bytes */
#define TC16_OCR5AL         _SFR_MEM8 (0x128) /* Timer/Counter5 Output Compare Register A  Bytes LOW BYTE */
#define TC16_OCR5AH         _SFR_MEM8 (0x129) /* Timer/Counter5 Output Compare Register A  Bytes HIGH BYTE */
#define TC16_OCR5B          _SFR_MEM16(0x12A) /* Timer/Counter5 Output Compare Register B  Bytes */
#define TC16_OCR5BL         _SFR_MEM8 (0x12A) /* Timer/Counter5 Output Compare Register B  Bytes LOW BYTE */
#define TC16_OCR5BH         _SFR_MEM8 (0x12B) /* Timer/Counter5 Output Compare Register B  Bytes HIGH BYTE */
#define TC16_OCR5C          _SFR_MEM16(0x12C) /* Timer/Counter5 Output Compare Register C  Bytes */
#define TC16_OCR5CL         _SFR_MEM8 (0x12C) /* Timer/Counter5 Output Compare Register C  Bytes LOW BYTE */
#define TC16_OCR5CH         _SFR_MEM8 (0x12D) /* Timer/Counter5 Output Compare Register C  Bytes HIGH BYTE */

/* TC4 - Timer/Counter, 16-bit (0x00) */
/* TC16_BASE ALREADY DEFINED */
#define TC16_TIFR4          _SFR_MEM8 (0x39)  /* Timer/Counter4 Interrupt Flag Register */
#define TC16_TIMSK4         _SFR_MEM8 (0x72)  /* Timer/Counter4 Interrupt Mask Register */
#define TC16_TCCR4A         _SFR_MEM8 (0xA0)  /* Timer/Counter4 Control Register A */
#define TC16_TCCR4B         _SFR_MEM8 (0xA1)  /* Timer/Counter4 Control Register B */
#define TC16_TCCR4C         _SFR_MEM8 (0xA2)  /* Timer/Counter4 Control Register C */
#define TC16_TCNT4          _SFR_MEM16(0xA4)  /* Timer/Counter4  Bytes */
#define TC16_TCNT4L         _SFR_MEM8 (0xA4)  /* Timer/Counter4  Bytes LOW BYTE */
#define TC16_TCNT4H         _SFR_MEM8 (0xA5)  /* Timer/Counter4  Bytes HIGH BYTE */
#define TC16_ICR4           _SFR_MEM16(0xA6)  /* Timer/Counter4 Input Capture Register  Bytes */
#define TC16_ICR4L          _SFR_MEM8 (0xA6)  /* Timer/Counter4 Input Capture Register  Bytes LOW BYTE */
#define TC16_ICR4H          _SFR_MEM8 (0xA7)  /* Timer/Counter4 Input Capture Register  Bytes HIGH BYTE */
#define TC16_OCR4A          _SFR_MEM16(0xA8)  /* Timer/Counter4 Output Compare Register A  Bytes */
#define TC16_OCR4AL         _SFR_MEM8 (0xA8)  /* Timer/Counter4 Output Compare Register A  Bytes LOW BYTE */
#define TC16_OCR4AH         _SFR_MEM8 (0xA9)  /* Timer/Counter4 Output Compare Register A  Bytes HIGH BYTE */
#define TC16_OCR4B          _SFR_MEM16(0xAA)  /* Timer/Counter4 Output Compare Register B  Bytes */
#define TC16_OCR4BL         _SFR_MEM8 (0xAA)  /* Timer/Counter4 Output Compare Register B  Bytes LOW BYTE */
#define TC16_OCR4BH         _SFR_MEM8 (0xAB)  /* Timer/Counter4 Output Compare Register B  Bytes HIGH BYTE */
#define TC16_OCR4C          _SFR_MEM16(0xAC)  /* Timer/Counter4 Output Compare Register C  Bytes */
#define TC16_OCR4CL         _SFR_MEM8 (0xAC)  /* Timer/Counter4 Output Compare Register C  Bytes LOW BYTE */
#define TC16_OCR4CH         _SFR_MEM8 (0xAD)  /* Timer/Counter4 Output Compare Register C  Bytes HIGH BYTE */

/* TC3 - Timer/Counter, 16-bit (0x00) */
/* TC16_BASE ALREADY DEFINED */
#define TC16_TIFR3          _SFR_MEM8 (0x38)  /* Timer/Counter3 Interrupt Flag Register */
#define TC16_TIMSK3         _SFR_MEM8 (0x71)  /* Timer/Counter3 Interrupt Mask Register */
#define TC16_TCCR3A         _SFR_MEM8 (0x90)  /* Timer/Counter3 Control Register A */
#define TC16_TCCR3B         _SFR_MEM8 (0x91)  /* Timer/Counter3 Control Register B */
#define TC16_TCCR3C         _SFR_MEM8 (0x92)  /* Timer/Counter3 Control Register C */
#define TC16_TCNT3          _SFR_MEM16(0x94)  /* Timer/Counter3  Bytes */
#define TC16_TCNT3L         _SFR_MEM8 (0x94)  /* Timer/Counter3  Bytes LOW BYTE */
#define TC16_TCNT3H         _SFR_MEM8 (0x95)  /* Timer/Counter3  Bytes HIGH BYTE */
#define TC16_ICR3           _SFR_MEM16(0x96)  /* Timer/Counter3 Input Capture Register  Bytes */
#define TC16_ICR3L          _SFR_MEM8 (0x96)  /* Timer/Counter3 Input Capture Register  Bytes LOW BYTE */
#define TC16_ICR3H          _SFR_MEM8 (0x97)  /* Timer/Counter3 Input Capture Register  Bytes HIGH BYTE */
#define TC16_OCR3A          _SFR_MEM16(0x98)  /* Timer/Counter3 Output Compare Register A  Bytes */
#define TC16_OCR3AL         _SFR_MEM8 (0x98)  /* Timer/Counter3 Output Compare Register A  Bytes LOW BYTE */
#define TC16_OCR3AH         _SFR_MEM8 (0x99)  /* Timer/Counter3 Output Compare Register A  Bytes HIGH BYTE */
#define TC16_OCR3B          _SFR_MEM16(0x9A)  /* Timer/Counter3 Output Compare Register B  Bytes */
#define TC16_OCR3BL         _SFR_MEM8 (0x9A)  /* Timer/Counter3 Output Compare Register B  Bytes LOW BYTE */
#define TC16_OCR3BH         _SFR_MEM8 (0x9B)  /* Timer/Counter3 Output Compare Register B  Bytes HIGH BYTE */
#define TC16_OCR3C          _SFR_MEM16(0x9C)  /* Timer/Counter3 Output Compare Register C  Bytes */
#define TC16_OCR3CL         _SFR_MEM8 (0x9C)  /* Timer/Counter3 Output Compare Register C  Bytes LOW BYTE */
#define TC16_OCR3CH         _SFR_MEM8 (0x9D)  /* Timer/Counter3 Output Compare Register C  Bytes HIGH BYTE */

/* TC1 - Timer/Counter, 16-bit (0x00) */
/* TC16_BASE ALREADY DEFINED */
#define TC16_TIFR1          _SFR_MEM8 (0x36)  /* Timer/Counter1 Interrupt Flag Register */
#define TC16_TIMSK1         _SFR_MEM8 (0x6F)  /* Timer/Counter1 Interrupt Mask Register */
#define TC16_TCCR1A         _SFR_MEM8 (0x80)  /* Timer/Counter1 Control Register A */
#define TC16_TCCR1B         _SFR_MEM8 (0x81)  /* Timer/Counter1 Control Register B */
#define TC16_TCCR1C         _SFR_MEM8 (0x82)  /* Timer/Counter1 Control Register C */
#define TC16_TCNT1          _SFR_MEM16(0x84)  /* Timer/Counter1  Bytes */
#define TC16_TCNT1L         _SFR_MEM8 (0x84)  /* Timer/Counter1  Bytes LOW BYTE */
#define TC16_TCNT1H         _SFR_MEM8 (0x85)  /* Timer/Counter1  Bytes HIGH BYTE */
#define TC16_ICR1           _SFR_MEM16(0x86)  /* Timer/Counter1 Input Capture Register  Bytes */
#define TC16_ICR1L          _SFR_MEM8 (0x86)  /* Timer/Counter1 Input Capture Register  Bytes LOW BYTE */
#define TC16_ICR1H          _SFR_MEM8 (0x87)  /* Timer/Counter1 Input Capture Register  Bytes HIGH BYTE */
#define TC16_OCR1A          _SFR_MEM16(0x88)  /* Timer/Counter1 Output Compare Register A  Bytes */
#define TC16_OCR1AL         _SFR_MEM8 (0x88)  /* Timer/Counter1 Output Compare Register A  Bytes LOW BYTE */
#define TC16_OCR1AH         _SFR_MEM8 (0x89)  /* Timer/Counter1 Output Compare Register A  Bytes HIGH BYTE */
#define TC16_OCR1B          _SFR_MEM16(0x8A)  /* Timer/Counter1 Output Compare Register B  Bytes */
#define TC16_OCR1BL         _SFR_MEM8 (0x8A)  /* Timer/Counter1 Output Compare Register B  Bytes LOW BYTE */
#define TC16_OCR1BH         _SFR_MEM8 (0x8B)  /* Timer/Counter1 Output Compare Register B  Bytes HIGH BYTE */
#define TC16_OCR1C          _SFR_MEM16(0x8C)  /* Timer/Counter1 Output Compare Register C  Bytes */
#define TC16_OCR1CL         _SFR_MEM8 (0x8C)  /* Timer/Counter1 Output Compare Register C  Bytes LOW BYTE */
#define TC16_OCR1CH         _SFR_MEM8 (0x8D)  /* Timer/Counter1 Output Compare Register C  Bytes HIGH BYTE */

/* TRX24 - Low-Power 2.4 GHz Transceiver (0x00) */
#define TRX24_BASE          _SFR_MEM8 (0x00)  /* TRX24 Base Address */
#define TRX24_IRQ_MASK1     _SFR_MEM8 (0xBE)  /* Transceiver Interrupt Enable Register 1 */
#define TRX24_IRQ_STATUS1   _SFR_MEM8 (0xBF)  /* Transceiver Interrupt Status Register 1 */
#define TRX24_MAFCR0        _SFR_MEM8 (0x10C) /* Multiple Address Filter Configuration Register 0 */
#define TRX24_MAFCR1        _SFR_MEM8 (0x10D) /* Multiple Address Filter Configuration Register 1 */
#define TRX24_MAFSA0L       _SFR_MEM8 (0x10E) /* Transceiver MAC Short Address Register for Frame Filter 0 (Low Byte) */
#define TRX24_MAFSA0H       _SFR_MEM8 (0x10F) /* Transceiver MAC Short Address Register for Frame Filter 0 (High Byte) */
#define TRX24_MAFPA0L       _SFR_MEM8 (0x110) /* Transceiver Personal Area Network ID Register for Frame Filter 0 (Low Byte) */
#define TRX24_MAFPA0H       _SFR_MEM8 (0x111) /* Transceiver Personal Area Network ID Register for Frame Filter 0 (High Byte) */
#define TRX24_MAFSA1L       _SFR_MEM8 (0x112) /* Transceiver MAC Short Address Register for Frame Filter 1 (Low Byte) */
#define TRX24_MAFSA1H       _SFR_MEM8 (0x113) /* Transceiver MAC Short Address Register for Frame Filter 1 (High Byte) */
#define TRX24_MAFPA1L       _SFR_MEM8 (0x114) /* Transceiver Personal Area Network ID Register for Frame Filter 1 (Low Byte) */
#define TRX24_MAFPA1H       _SFR_MEM8 (0x115) /* Transceiver Personal Area Network ID Register for Frame Filter 1 (High Byte) */
#define TRX24_MAFSA2L       _SFR_MEM8 (0x116) /* Transceiver MAC Short Address Register for Frame Filter 2 (Low Byte) */
#define TRX24_MAFSA2H       _SFR_MEM8 (0x117) /* Transceiver MAC Short Address Register for Frame Filter 2 (High Byte) */
#define TRX24_MAFPA2L       _SFR_MEM8 (0x118) /* Transceiver Personal Area Network ID Register for Frame Filter 2 (Low Byte) */
#define TRX24_MAFPA2H       _SFR_MEM8 (0x119) /* Transceiver Personal Area Network ID Register for Frame Filter 2 (High Byte) */
#define TRX24_MAFSA3L       _SFR_MEM8 (0x11A) /* Transceiver MAC Short Address Register for Frame Filter 3 (Low Byte) */
#define TRX24_MAFSA3H       _SFR_MEM8 (0x11B) /* Transceiver MAC Short Address Register for Frame Filter 3 (High Byte) */
#define TRX24_MAFPA3L       _SFR_MEM8 (0x11C) /* Transceiver Personal Area Network ID Register for Frame Filter 3 (Low Byte) */
#define TRX24_MAFPA3H       _SFR_MEM8 (0x11D) /* Transceiver Personal Area Network ID Register for Frame Filter 3 (High Byte) */
#define TRX24_PARCR         _SFR_MEM8 (0x138) /* Power Amplifier Ramp up/down Control Register */
#define TRX24_AES_CTRL      _SFR_MEM8 (0x13C) /* AES Control Register */
#define TRX24_AES_STATUS    _SFR_MEM8 (0x13D) /* AES Status Register */
#define TRX24_AES_STATE     _SFR_MEM8 (0x13E) /* AES Plain and Cipher Text Buffer Register */
#define TRX24_AES_KEY       _SFR_MEM8 (0x13F) /* AES Encryption and Decryption Key Buffer Register */
#define TRX24_TRX_STATUS    _SFR_MEM8 (0x141) /* Transceiver Status Register */
#define TRX24_TRX_STATE     _SFR_MEM8 (0x142) /* Transceiver State Control Register */
#define TRX24_TRX_CTRL_0    _SFR_MEM8 (0x143) /* Reserved */
#define TRX24_TRX_CTRL_1    _SFR_MEM8 (0x144) /* Transceiver Control Register 1 */
#define TRX24_PHY_TX_PWR    _SFR_MEM8 (0x145) /* Transceiver Transmit Power Control Register */
#define TRX24_PHY_RSSI      _SFR_MEM8 (0x146) /* Receiver Signal Strength Indicator Register */
#define TRX24_PHY_ED_LEVEL  _SFR_MEM8 (0x147) /* Transceiver Energy Detection Level Register */
#define TRX24_PHY_CC_CCA    _SFR_MEM8 (0x148) /* Transceiver Clear Channel Assessment (CCA) Control Register */
#define TRX24_CCA_THRES     _SFR_MEM8 (0x149) /* Transceiver CCA Threshold Setting Register */
#define TRX24_RX_CTRL       _SFR_MEM8 (0x14A) /* Transceiver Receive Control Register */
#define TRX24_SFD_VALUE     _SFR_MEM8 (0x14B) /* Start of Frame Delimiter Value Register */
#define TRX24_TRX_CTRL_2    _SFR_MEM8 (0x14C) /* Transceiver Control Register 2 */
#define TRX24_ANT_DIV       _SFR_MEM8 (0x14D) /* Antenna Diversity Control Register */
#define TRX24_IRQ_MASK      _SFR_MEM8 (0x14E) /* Transceiver Interrupt Enable Register */
#define TRX24_IRQ_STATUS    _SFR_MEM8 (0x14F) /* Transceiver Interrupt Status Register */
#define TRX24_VREG_CTRL     _SFR_MEM8 (0x150) /* Voltage Regulator Control and Status Register */
#define TRX24_BATMON        _SFR_MEM8 (0x151) /* Battery Monitor Control and Status Register */
#define TRX24_XOSC_CTRL     _SFR_MEM8 (0x152) /* Crystal Oscillator Control Register */
#define TRX24_CC_CTRL_0     _SFR_MEM8 (0x153) /* Channel Control Register 0 */
#define TRX24_CC_CTRL_1     _SFR_MEM8 (0x154) /* Channel Control Register 1 */
#define TRX24_RX_SYN        _SFR_MEM8 (0x155) /* Transceiver Receiver Sensitivity Control Register */
#define TRX24_TRX_RPC       _SFR_MEM8 (0x156) /* Transceiver Reduced Power Consumption Control */
#define TRX24_XAH_CTRL_1    _SFR_MEM8 (0x157) /* Transceiver Acknowledgment Frame Control Register 1 */
#define TRX24_FTN_CTRL      _SFR_MEM8 (0x158) /* Transceiver Filter Tuning Control Register */
#define TRX24_PLL_CF        _SFR_MEM8 (0x15A) /* Transceiver Center Frequency Calibration Control Register */
#define TRX24_PLL_DCU       _SFR_MEM8 (0x15B) /* Transceiver Delay Cell Calibration Control Register */
#define TRX24_PART_NUM      _SFR_MEM8 (0x15C) /* Device Identification Register (Part Number) */
#define TRX24_VERSION_NUM   _SFR_MEM8 (0x15D) /* Device Identification Register (Version Number) */
#define TRX24_MAN_ID_0      _SFR_MEM8 (0x15E) /* Device Identification Register (Manufacture ID Low Byte) */
#define TRX24_MAN_ID_1      _SFR_MEM8 (0x15F) /* Device Identification Register (Manufacture ID High Byte) */
#define TRX24_SHORT_ADDR_0  _SFR_MEM8 (0x160) /* Transceiver MAC Short Address Register (Low Byte) */
#define TRX24_SHORT_ADDR_1  _SFR_MEM8 (0x161) /* Transceiver MAC Short Address Register (High Byte) */
#define TRX24_PAN_ID_0      _SFR_MEM8 (0x162) /* Transceiver Personal Area Network ID Register (Low Byte) */
#define TRX24_PAN_ID_1      _SFR_MEM8 (0x163) /* Transceiver Personal Area Network ID Register (High Byte) */
#define TRX24_IEEE_ADDR_0   _SFR_MEM8 (0x164) /* Transceiver MAC IEEE Address Register 0 */
#define TRX24_IEEE_ADDR_1   _SFR_MEM8 (0x165) /* Transceiver MAC IEEE Address Register 1 */
#define TRX24_IEEE_ADDR_2   _SFR_MEM8 (0x166) /* Transceiver MAC IEEE Address Register 2 */
#define TRX24_IEEE_ADDR_3   _SFR_MEM8 (0x167) /* Transceiver MAC IEEE Address Register 3 */
#define TRX24_IEEE_ADDR_4   _SFR_MEM8 (0x168) /* Transceiver MAC IEEE Address Register 4 */
#define TRX24_IEEE_ADDR_5   _SFR_MEM8 (0x169) /* Transceiver MAC IEEE Address Register 5 */
#define TRX24_IEEE_ADDR_6   _SFR_MEM8 (0x16A) /* Transceiver MAC IEEE Address Register 6 */
#define TRX24_IEEE_ADDR_7   _SFR_MEM8 (0x16B) /* Transceiver MAC IEEE Address Register 7 */
#define TRX24_XAH_CTRL_0    _SFR_MEM8 (0x16C) /* Transceiver Extended Operating Mode Control Register */
#define TRX24_CSMA_SEED_0   _SFR_MEM8 (0x16D) /* Transceiver CSMA-CA Random Number Generator Seed Register */
#define TRX24_CSMA_SEED_1   _SFR_MEM8 (0x16E) /* Transceiver Acknowledgment Frame Control Register 2 */
#define TRX24_CSMA_BE       _SFR_MEM8 (0x16F) /* Transceiver CSMA-CA Back-off Exponent Control Register */
#define TRX24_TST_CTRL_DIGI _SFR_MEM8 (0x176) /* Transceiver Digital Test Control Register */
#define TRX24_TST_RX_LENGTH _SFR_MEM8 (0x17B) /* Transceiver Received Frame Length Register */
#define TRX24_TRXFBST       _SFR_MEM8 (0x180) /* Start of frame buffer */
#define TRX24_TRXFBEND      _SFR_MEM8 (0x1FF) /* End of frame buffer */

/* SYMCNT - MAC Symbol Counter (0x00) */
#define SYMCNT_BASE         _SFR_MEM8 (0x00)  /* SYMCNT Base Address */
#define SYMCNT_SCRSTRLL     _SFR_MEM8 (0xD7)  /* Symbol Counter Received Frame Timestamp Register LL-Byte */
#define SYMCNT_SCRSTRLH     _SFR_MEM8 (0xD8)  /* Symbol Counter Received Frame Timestamp Register LH-Byte */
#define SYMCNT_SCRSTRHL     _SFR_MEM8 (0xD9)  /* Symbol Counter Received Frame Timestamp Register HL-Byte */
#define SYMCNT_SCRSTRHH     _SFR_MEM8 (0xDA)  /* Symbol Counter Received Frame Timestamp Register HH-Byte */
#define SYMCNT_SCCSR        _SFR_MEM8 (0xDB)  /* Symbol Counter Compare Source Register */
#define SYMCNT_SCCR0        _SFR_MEM8 (0xDC)  /* Symbol Counter Control Register 0 */
#define SYMCNT_SCCR1        _SFR_MEM8 (0xDD)  /* Symbol Counter Control Register 1 */
#define SYMCNT_SCSR         _SFR_MEM8 (0xDE)  /* Symbol Counter Status Register */
#define SYMCNT_SCIRQM       _SFR_MEM8 (0xDF)  /* Symbol Counter Interrupt Mask Register */
#define SYMCNT_SCIRQS       _SFR_MEM8 (0xE0)  /* Symbol Counter Interrupt Status Register */
#define SYMCNT_SCCNTLL      _SFR_MEM8 (0xE1)  /* Symbol Counter Register LL-Byte */
#define SYMCNT_SCCNTLH      _SFR_MEM8 (0xE2)  /* Symbol Counter Register LH-Byte */
#define SYMCNT_SCCNTHL      _SFR_MEM8 (0xE3)  /* Symbol Counter Register HL-Byte */
#define SYMCNT_SCCNTHH      _SFR_MEM8 (0xE4)  /* Symbol Counter Register HH-Byte */
#define SYMCNT_SCBTSRLL     _SFR_MEM8 (0xE5)  /* Symbol Counter Beacon Timestamp Register LL-Byte */
#define SYMCNT_SCBTSRLH     _SFR_MEM8 (0xE6)  /* Symbol Counter Beacon Timestamp Register LH-Byte */
#define SYMCNT_SCBTSRHL     _SFR_MEM8 (0xE7)  /* Symbol Counter Beacon Timestamp Register HL-Byte */
#define SYMCNT_SCBTSRHH     _SFR_MEM8 (0xE8)  /* Symbol Counter Beacon Timestamp Register HH-Byte */
#define SYMCNT_SCTSRLL      _SFR_MEM8 (0xE9)  /* Symbol Counter Frame Timestamp Register LL-Byte */
#define SYMCNT_SCTSRLH      _SFR_MEM8 (0xEA)  /* Symbol Counter Frame Timestamp Register LH-Byte */
#define SYMCNT_SCTSRHL      _SFR_MEM8 (0xEB)  /* Symbol Counter Frame Timestamp Register HL-Byte */
#define SYMCNT_SCTSRHH      _SFR_MEM8 (0xEC)  /* Symbol Counter Frame Timestamp Register HH-Byte */
#define SYMCNT_SCOCR3LL     _SFR_MEM8 (0xED)  /* Symbol Counter Output Compare Register 3 LL-Byte */
#define SYMCNT_SCOCR3LH     _SFR_MEM8 (0xEE)  /* Symbol Counter Output Compare Register 3 LH-Byte */
#define SYMCNT_SCOCR3HL     _SFR_MEM8 (0xEF)  /* Symbol Counter Output Compare Register 3 HL-Byte */
#define SYMCNT_SCOCR3HH     _SFR_MEM8 (0xF0)  /* Symbol Counter Output Compare Register 3 HH-Byte */
#define SYMCNT_SCOCR2LL     _SFR_MEM8 (0xF1)  /* Symbol Counter Output Compare Register 2 LL-Byte */
#define SYMCNT_SCOCR2LH     _SFR_MEM8 (0xF2)  /* Symbol Counter Output Compare Register 2 LH-Byte */
#define SYMCNT_SCOCR2HL     _SFR_MEM8 (0xF3)  /* Symbol Counter Output Compare Register 2 HL-Byte */
#define SYMCNT_SCOCR2HH     _SFR_MEM8 (0xF4)  /* Symbol Counter Output Compare Register 2 HH-Byte */
#define SYMCNT_SCOCR1LL     _SFR_MEM8 (0xF5)  /* Symbol Counter Output Compare Register 1 LL-Byte */
#define SYMCNT_SCOCR1LH     _SFR_MEM8 (0xF6)  /* Symbol Counter Output Compare Register 1 LH-Byte */
#define SYMCNT_SCOCR1HL     _SFR_MEM8 (0xF7)  /* Symbol Counter Output Compare Register 1 HL-Byte */
#define SYMCNT_SCOCR1HH     _SFR_MEM8 (0xF8)  /* Symbol Counter Output Compare Register 1 HH-Byte */
#define SYMCNT_SCTSTRLL     _SFR_MEM8 (0xF9)  /* Symbol Counter Transmit Frame Timestamp Register LL-Byte */
#define SYMCNT_SCTSTRLH     _SFR_MEM8 (0xFA)  /* Symbol Counter Transmit Frame Timestamp Register LH-Byte */
#define SYMCNT_SCTSTRHL     _SFR_MEM8 (0xFB)  /* Symbol Counter Transmit Frame Timestamp Register HL-Byte */
#define SYMCNT_SCTSTRHH     _SFR_MEM8 (0xFC)  /* Symbol Counter Transmit Frame Timestamp Register HH-Byte */

/* EEPROM - EEPROM (0x00) */
#define EEPROM_BASE         _SFR_MEM8 (0x00)  /* EEPROM Base Address */
#define EEPROM_EECR         _SFR_MEM8 (0x3F)  /* EEPROM Control Register */
#define EEPROM_EEDR         _SFR_MEM8 (0x40)  /* EEPROM Data Register */
#define EEPROM_EEAR         _SFR_MEM16(0x41)  /* EEPROM Address Register  Bytes */
#define EEPROM_EEARL        _SFR_MEM8 (0x41)  /* EEPROM Address Register  Bytes LOW BYTE */
#define EEPROM_EEARH        _SFR_MEM8 (0x42)  /* EEPROM Address Register  Bytes HIGH BYTE */

/* JTAG - JTAG Interface (0x00) */
#define JTAG_BASE           _SFR_MEM8 (0x00)  /* JTAG Base Address */
#define JTAG_OCDR           _SFR_MEM8 (0x51)  /* On-Chip Debug Register */
#define JTAG_MCUSR          _SFR_MEM8 (0x54)  /* MCU Status Register */
#define JTAG_MCUCR          _SFR_MEM8 (0x55)  /* MCU Control Register */

/* EXINT - External Interrupts (0x00) */
#define EXINT_BASE          _SFR_MEM8 (0x00)  /* EXINT Base Address */
#define EXINT_PCIFR         _SFR_MEM8 (0x3B)  /* Pin Change Interrupt Flag Register */
#define EXINT_EIFR          _SFR_MEM8 (0x3C)  /* External Interrupt Flag Register */
#define EXINT_EIMSK         _SFR_MEM8 (0x3D)  /* External Interrupt Mask Register */
#define EXINT_PCICR         _SFR_MEM8 (0x68)  /* Pin Change Interrupt Control Register */
#define EXINT_EICRA         _SFR_MEM8 (0x69)  /* External Interrupt Control Register A */
#define EXINT_EICRB         _SFR_MEM8 (0x6A)  /* External Interrupt Control Register B */
#define EXINT_PCMSK0        _SFR_MEM8 (0x6B)  /* Pin Change Mask Register 0 */
#define EXINT_PCMSK1        _SFR_MEM8 (0x6C)  /* Pin Change Mask Register 1 */
#define EXINT_PCMSK2        _SFR_MEM8 (0x6D)  /* Pin Change Mask Register 2 */

/* ADC - Analog-to-Digital Converter (0x00) */
#define ADC_BASE            _SFR_MEM8 (0x00)  /* ADC Base Address */
#define ADC_ADCSRC          _SFR_MEM8 (0x77)  /* The ADC Control and Status Register C */
#define ADC_ADC             _SFR_MEM16(0x78)  /* ADC Data Register  Bytes */
#define ADC_ADCL            _SFR_MEM8 (0x78)  /* ADC Data Register  Bytes LOW BYTE */
#define ADC_ADCH            _SFR_MEM8 (0x79)  /* ADC Data Register  Bytes HIGH BYTE */
#define ADC_ADCSRA          _SFR_MEM8 (0x7A)  /* The ADC Control and Status Register A */
#define ADC_ADCSRB          _SFR_MEM8 (0x7B)  /* The ADC Control and Status Register B */
#define ADC_ADMUX           _SFR_MEM8 (0x7C)  /* The ADC Multiplexer Selection Register */
#define ADC_DIDR2           _SFR_MEM8 (0x7D)  /* Digital Input Disable Register 2 */
#define ADC_DIDR0           _SFR_MEM8 (0x7E)  /* Digital Input Disable Register 0 */

/* BOOT_LOAD - Bootloader (0x00) */
#define BOOT_LOAD_BASE      _SFR_MEM8 (0x00)  /* BOOT_LOAD Base Address */
#define BOOT_LOAD_SPMCSR    _SFR_MEM8 (0x57)  /* Store Program Memory Control Register */

/* CPU - CPU Registers (0x00) */
#define CPU_BASE            _SFR_MEM8 (0x00)  /* CPU Base Address */
#define CPU_GPIOR0          _SFR_MEM8 (0x3E)  /* General Purpose IO Register 0 */
#define CPU_GPIOR1          _SFR_MEM8 (0x4A)  /* General Purpose IO Register 1 */
#define CPU_GPIOR2          _SFR_MEM8 (0x4B)  /* General Purpose I/O Register 2 */
#define CPU_SMCR            _SFR_MEM8 (0x53)  /* Sleep Mode Control Register */
#define CPU_MCUSR           _SFR_MEM8 (0x54)  /* MCU Status Register */
#define CPU_MCUCR           _SFR_MEM8 (0x55)  /* MCU Control Register */
#define CPU_RAMPZ           _SFR_MEM8 (0x5B)  /* Extended Z-pointer Register for ELPM/SPM */
#define CPU_SP              _SFR_MEM16(0x5D)  /* Stack Pointer  */
#define CPU_SPL             _SFR_MEM8 (0x5D)  /* Stack Pointer  LOW BYTE */
#define CPU_SPH             _SFR_MEM8 (0x5E)  /* Stack Pointer  HIGH BYTE */
#define CPU_SREG            _SFR_MEM8 (0x5F)  /* Status Register */
#define CPU_CLKPR           _SFR_MEM8 (0x61)  /* Clock Prescale Register */
#define CPU_PRR2            _SFR_MEM8 (0x63)  /* Power Reduction Register 2 */
#define CPU_PRR0            _SFR_MEM8 (0x64)  /* Power Reduction Register0 */
#define CPU_PRR1            _SFR_MEM8 (0x65)  /* Power Reduction Register 1 */
#define CPU_OSCCAL          _SFR_MEM8 (0x66)  /* Oscillator Calibration Value */

/* FLASH - FLASH Controller (0x00) */
#define FLASH_BASE          _SFR_MEM8 (0x00)  /* FLASH Base Address */
#define FLASH_BGCR          _SFR_MEM8 (0x67)  /* Reference Voltage Calibration Register */
#define FLASH_NEMCR         _SFR_MEM8 (0x75)  /* Flash Extended-Mode Control-Register */

/* PWRCTRL - Power Controller (0x00) */
#define PWRCTRL_BASE        _SFR_MEM8 (0x00)  /* PWRCTRL Base Address */
#define PWRCTRL_MCUCR       _SFR_MEM8 (0x55)  /* MCU Control Register */
#define PWRCTRL_LLCR        _SFR_MEM8 (0x12F) /* Low Leakage Voltage Regulator Control Register */
#define PWRCTRL_LLDRL       _SFR_MEM8 (0x130) /* Low Leakage Voltage Regulator Data Register (Low-Byte) */
#define PWRCTRL_LLDRH       _SFR_MEM8 (0x131) /* Low Leakage Voltage Regulator Data Register (High-Byte) */
#define PWRCTRL_DRTRAM3     _SFR_MEM8 (0x132) /* Data Retention Configuration Register #3 */
#define PWRCTRL_DRTRAM2     _SFR_MEM8 (0x133) /* Data Retention Configuration Register #2 */
#define PWRCTRL_DRTRAM1     _SFR_MEM8 (0x134) /* Data Retention Configuration Register #1 */
#define PWRCTRL_DRTRAM0     _SFR_MEM8 (0x135) /* Data Retention Configuration Register #0 */
#define PWRCTRL_DPDS0       _SFR_MEM8 (0x136) /* Port Driver Strength Register 0 */
#define PWRCTRL_DPDS1       _SFR_MEM8 (0x137) /* Port Driver Strength Register 1 */
#define PWRCTRL_TRXPR       _SFR_MEM8 (0x139) /* Transceiver Pin Register */

/* FUSE - Fuses (0x00) */
#define FUSE_BASE           _SFR_MEM8 (0x00)  /* FUSE Base Address */
#define FUSE_LOW            _SFR_MEM8 (0x00)  
#define FUSE_HIGH           _SFR_MEM8 (0x01)  
#define FUSE_EXTENDED       _SFR_MEM8 (0x02)  

/* LOCKBIT - Lockbits (0x00) */
#define LOCKBIT_BASE        _SFR_MEM8 (0x00)  /* LOCKBIT Base Address */
#define LOCKBIT_LOCKBIT     _SFR_MEM8 (0x00)  
/* avr-libc typedef for avr/fuse.h */
typedef FUSE_t NVM_FUSES_t;

/*
================================================================================
Interrupt Vector Definitions
================================================================================
*/

/* Vector 0 is the reset vector */
#define None_RESET_vect_num             (0)                 
#define None_RESET_vect                 _VECTOR(0)          /* External Pin,Power-on Reset,Brown-out Reset,Watchdog Reset,and JTAG AVR Reset. See Datasheet. */
#define None_INT0_vect_num              (1)                 
#define None_INT0_vect                  _VECTOR(1)          /* External Interrupt Request 0 */
#define None_INT1_vect_num              (2)                 
#define None_INT1_vect                  _VECTOR(2)          /* External Interrupt Request 1 */
#define None_INT2_vect_num              (3)                 
#define None_INT2_vect                  _VECTOR(3)          /* External Interrupt Request 2 */
#define None_INT3_vect_num              (4)                 
#define None_INT3_vect                  _VECTOR(4)          /* External Interrupt Request 3 */
#define None_INT4_vect_num              (5)                 
#define None_INT4_vect                  _VECTOR(5)          /* External Interrupt Request 4 */
#define None_INT5_vect_num              (6)                 
#define None_INT5_vect                  _VECTOR(6)          /* External Interrupt Request 5 */
#define None_INT6_vect_num              (7)                 
#define None_INT6_vect                  _VECTOR(7)          /* External Interrupt Request 6 */
#define None_INT7_vect_num              (8)                 
#define None_INT7_vect                  _VECTOR(8)          /* External Interrupt Request 7 */
#define None_PCINT0_vect_num            (9)                 
#define None_PCINT0_vect                _VECTOR(9)          /* Pin Change Interrupt Request 0 */
#define None_PCINT1_vect_num            (10)                
#define None_PCINT1_vect                _VECTOR(10)         /* Pin Change Interrupt Request 1 */
#define None_PCINT2_vect_num            (11)                
#define None_PCINT2_vect                _VECTOR(11)         /* Pin Change Interrupt Request 2 */
#define None_WDT_vect_num               (12)                
#define None_WDT_vect                   _VECTOR(12)         /* Watchdog Time-out Interrupt */
#define None_TIMER2_COMPA_vect_num      (13)                
#define None_TIMER2_COMPA_vect          _VECTOR(13)         /* Timer/Counter2 Compare Match A */
#define None_TIMER2_COMPB_vect_num      (14)                
#define None_TIMER2_COMPB_vect          _VECTOR(14)         /* Timer/Counter2 Compare Match B */
#define None_TIMER2_OVF_vect_num        (15)                
#define None_TIMER2_OVF_vect            _VECTOR(15)         /* Timer/Counter2 Overflow */
#define None_TIMER1_CAPT_vect_num       (16)                
#define None_TIMER1_CAPT_vect           _VECTOR(16)         /* Timer/Counter1 Capture Event */
#define None_TIMER1_COMPA_vect_num      (17)                
#define None_TIMER1_COMPA_vect          _VECTOR(17)         /* Timer/Counter1 Compare Match A */
#define None_TIMER1_COMPB_vect_num      (18)                
#define None_TIMER1_COMPB_vect          _VECTOR(18)         /* Timer/Counter1 Compare Match B */
#define None_TIMER1_COMPC_vect_num      (19)                
#define None_TIMER1_COMPC_vect          _VECTOR(19)         /* Timer/Counter1 Compare Match C */
#define None_TIMER1_OVF_vect_num        (20)                
#define None_TIMER1_OVF_vect            _VECTOR(20)         /* Timer/Counter1 Overflow */
#define None_TIMER0_COMPA_vect_num      (21)                
#define None_TIMER0_COMPA_vect          _VECTOR(21)         /* Timer/Counter0 Compare Match A */
#define None_TIMER0_COMPB_vect_num      (22)                
#define None_TIMER0_COMPB_vect          _VECTOR(22)         /* Timer/Counter0 Compare Match B */
#define None_TIMER0_OVF_vect_num        (23)                
#define None_TIMER0_OVF_vect            _VECTOR(23)         /* Timer/Counter0 Overflow */
#define None_SPI_STC_vect_num           (24)                
#define None_SPI_STC_vect               _VECTOR(24)         /* SPI Serial Transfer Complete */
#define None_USART0_RX_vect_num         (25)                
#define None_USART0_RX_vect             _VECTOR(25)         /* USART0, Rx Complete */
#define None_USART0_UDRE_vect_num       (26)                
#define None_USART0_UDRE_vect           _VECTOR(26)         /* USART0 Data register Empty */
#define None_USART0_TX_vect_num         (27)                
#define None_USART0_TX_vect             _VECTOR(27)         /* USART0, Tx Complete */
#define None_ANALOG_COMP_vect_num       (28)                
#define None_ANALOG_COMP_vect           _VECTOR(28)         /* Analog Comparator */
#define None_ADC_vect_num               (29)                
#define None_ADC_vect                   _VECTOR(29)         /* ADC Conversion Complete */
#define None_EE_READY_vect_num          (30)                
#define None_EE_READY_vect              _VECTOR(30)         /* EEPROM Ready */
#define None_TIMER3_CAPT_vect_num       (31)                
#define None_TIMER3_CAPT_vect           _VECTOR(31)         /* Timer/Counter3 Capture Event */
#define None_TIMER3_COMPA_vect_num      (32)                
#define None_TIMER3_COMPA_vect          _VECTOR(32)         /* Timer/Counter3 Compare Match A */
#define None_TIMER3_COMPB_vect_num      (33)                
#define None_TIMER3_COMPB_vect          _VECTOR(33)         /* Timer/Counter3 Compare Match B */
#define None_TIMER3_COMPC_vect_num      (34)                
#define None_TIMER3_COMPC_vect          _VECTOR(34)         /* Timer/Counter3 Compare Match C */
#define None_TIMER3_OVF_vect_num        (35)                
#define None_TIMER3_OVF_vect            _VECTOR(35)         /* Timer/Counter3 Overflow */
#define None_USART1_RX_vect_num         (36)                
#define None_USART1_RX_vect             _VECTOR(36)         /* USART1, Rx Complete */
#define None_USART1_UDRE_vect_num       (37)                
#define None_USART1_UDRE_vect           _VECTOR(37)         /* USART1 Data register Empty */
#define None_USART1_TX_vect_num         (38)                
#define None_USART1_TX_vect             _VECTOR(38)         /* USART1, Tx Complete */
#define None_TWI_vect_num               (39)                
#define None_TWI_vect                   _VECTOR(39)         /* 2-wire Serial Interface */
#define None_SPM_READY_vect_num         (40)                
#define None_SPM_READY_vect             _VECTOR(40)         /* Store Program Memory Read */
#define None_TIMER4_CAPT_vect_num       (41)                
#define None_TIMER4_CAPT_vect           _VECTOR(41)         /* Timer/Counter4 Capture Event */
#define None_TIMER4_COMPA_vect_num      (42)                
#define None_TIMER4_COMPA_vect          _VECTOR(42)         /* Timer/Counter4 Compare Match A */
#define None_TIMER4_COMPB_vect_num      (43)                
#define None_TIMER4_COMPB_vect          _VECTOR(43)         /* Timer/Counter4 Compare Match B */
#define None_TIMER4_COMPC_vect_num      (44)                
#define None_TIMER4_COMPC_vect          _VECTOR(44)         /* Timer/Counter4 Compare Match C */
#define None_TIMER4_OVF_vect_num        (45)                
#define None_TIMER4_OVF_vect            _VECTOR(45)         /* Timer/Counter4 Overflow */
#define None_TIMER5_CAPT_vect_num       (46)                
#define None_TIMER5_CAPT_vect           _VECTOR(46)         /* Timer/Counter5 Capture Event */
#define None_TIMER5_COMPA_vect_num      (47)                
#define None_TIMER5_COMPA_vect          _VECTOR(47)         /* Timer/Counter5 Compare Match A */
#define None_TIMER5_COMPB_vect_num      (48)                
#define None_TIMER5_COMPB_vect          _VECTOR(48)         /* Timer/Counter5 Compare Match B */
#define None_TIMER5_COMPC_vect_num      (49)                
#define None_TIMER5_COMPC_vect          _VECTOR(49)         /* Timer/Counter5 Compare Match C */
#define None_TIMER5_OVF_vect_num        (50)                
#define None_TIMER5_OVF_vect            _VECTOR(50)         /* Timer/Counter5 Overflow */
#define None_TRX24_PLL_LOCK_vect_num    (57)                
#define None_TRX24_PLL_LOCK_vect        _VECTOR(57)         /* TRX24 - PLL lock interrupt */
#define None_TRX24_PLL_UNLOCK_vect_num  (58)                
#define None_TRX24_PLL_UNLOCK_vect      _VECTOR(58)         /* TRX24 - PLL unlock interrupt */
#define None_TRX24_RX_START_vect_num    (59)                
#define None_TRX24_RX_START_vect        _VECTOR(59)         /* TRX24 - Receive start interrupt */
#define None_TRX24_RX_END_vect_num      (60)                
#define None_TRX24_RX_END_vect          _VECTOR(60)         /* TRX24 - RX_END interrupt */
#define None_TRX24_CCA_ED_DONE_vect_num (61)                
#define None_TRX24_CCA_ED_DONE_vect     _VECTOR(61)         /* TRX24 - CCA/ED done interrupt */
#define None_TRX24_XAH_AMI_vect_num     (62)                
#define None_TRX24_XAH_AMI_vect         _VECTOR(62)         /* TRX24 - XAH - AMI */
#define None_TRX24_TX_END_vect_num      (63)                
#define None_TRX24_TX_END_vect          _VECTOR(63)         /* TRX24 - TX_END interrupt */
#define None_TRX24_AWAKE_vect_num       (64)                
#define None_TRX24_AWAKE_vect           _VECTOR(64)         /* TRX24 AWAKE - tranceiver is reaching state TRX_OFF */
#define None_SCNT_CMP1_vect_num         (65)                
#define None_SCNT_CMP1_vect             _VECTOR(65)         /* Symbol counter - compare match 1 interrupt */
#define None_SCNT_CMP2_vect_num         (66)                
#define None_SCNT_CMP2_vect             _VECTOR(66)         /* Symbol counter - compare match 2 interrupt */
#define None_SCNT_CMP3_vect_num         (67)                
#define None_SCNT_CMP3_vect             _VECTOR(67)         /* Symbol counter - compare match 3 interrupt */
#define None_SCNT_OVFL_vect_num         (68)                
#define None_SCNT_OVFL_vect             _VECTOR(68)         /* Symbol counter - overflow interrupt */
#define None_SCNT_BACKOFF_vect_num      (69)                
#define None_SCNT_BACKOFF_vect          _VECTOR(69)         /* Symbol counter - backoff interrupt */
#define None_AES_READY_vect_num         (70)                
#define None_AES_READY_vect             _VECTOR(70)         /* AES engine ready interrupt */
#define None_BAT_LOW_vect_num           (71)                
#define None_BAT_LOW_vect               _VECTOR(71)         /* Battery monitor indicates supply voltage below threshold */
#define None_TRX24_TX_START_vect_num    (72)                
#define None_TRX24_TX_START_vect        _VECTOR(72)         /* TRX24 TX start interrupt */
#define None_TRX24_AMI0_vect_num        (73)                
#define None_TRX24_AMI0_vect            _VECTOR(73)         /* Address match interrupt of address filter 0 */
#define None_TRX24_AMI1_vect_num        (74)                
#define None_TRX24_AMI1_vect            _VECTOR(74)         /* Address match interrupt of address filter 1 */
#define None_TRX24_AMI2_vect_num        (75)                
#define None_TRX24_AMI2_vect            _VECTOR(75)         /* Address match interrupt of address filter 2 */
#define None_TRX24_AMI3_vect_num        (76)                
#define None_TRX24_AMI3_vect            _VECTOR(76)         /* Address match interrupt of address filter 3 */

/* Vector Table Size */
#define _VECTOR_SIZE                    (4)                 /* Size of individual vector. */
#define _VECTORS_SIZE                   (77 * _VECTOR_SIZE) /* Size of all vectors */
/*
================================================================================
Constants
================================================================================
*/

#define PROGMEM_START            (0x0000)                                         
#define PROGMEM_SIZE             (0x20000)                                        
#define PROGMEM_END              (PROGMEM_START + PROGMEM_SIZE - 1)               

#define FLASH_START              (0x0000)                                         
#define FLASH_SIZE               (0x20000)                                        
#define FLASH_PAGE_SIZE          (0x0100)                                         
#define FLASH_END                (FLASH_START + FLASH_SIZE - 1)                   

#define BOOT_SECTION_1_START     (0x1FC00)                                        
#define BOOT_SECTION_1_SIZE      (0x0400)                                         
#define BOOT_SECTION_1_PAGE_SIZE (0x0100)                                         
#define BOOT_SECTION_1_END       (BOOT_SECTION_1_START + BOOT_SECTION_1_SIZE - 1) 

#define BOOT_SECTION_2_START     (0x1F800)                                        
#define BOOT_SECTION_2_SIZE      (0x0800)                                         
#define BOOT_SECTION_2_PAGE_SIZE (0x0100)                                         
#define BOOT_SECTION_2_END       (BOOT_SECTION_2_START + BOOT_SECTION_2_SIZE - 1) 

#define BOOT_SECTION_3_START     (0x1F000)                                        
#define BOOT_SECTION_3_SIZE      (0x1000)                                         
#define BOOT_SECTION_3_PAGE_SIZE (0x0100)                                         
#define BOOT_SECTION_3_END       (BOOT_SECTION_3_START + BOOT_SECTION_3_SIZE - 1) 

#define BOOT_SECTION_4_START     (0x1E000)                                        
#define BOOT_SECTION_4_SIZE      (0x2000)                                         
#define BOOT_SECTION_4_PAGE_SIZE (0x0100)                                         
#define BOOT_SECTION_4_END       (BOOT_SECTION_4_START + BOOT_SECTION_4_SIZE - 1) 

#define SIGNATURESMEM_START  (0x0000)                                       
#define SIGNATURESMEM_SIZE   (0x0003)                                       
#define SIGNATURESMEM_END    (SIGNATURESMEM_START + SIGNATURESMEM_SIZE - 1) 

#define SIGNATURES_START     (0x0000)                                       
#define SIGNATURES_SIZE      (0x0003)                                       
#define SIGNATURES_PAGE_SIZE (0x0001)                                       
#define SIGNATURES_END       (SIGNATURES_START + SIGNATURES_SIZE - 1)       

#define FUSESMEM_START  (0x0000)                             
#define FUSESMEM_SIZE   (0x0003)                             
#define FUSESMEM_END    (FUSESMEM_START + FUSESMEM_SIZE - 1) 

#define FUSES_START     (0x0000)                             
#define FUSES_SIZE      (0x0003)                             
#define FUSES_PAGE_SIZE (0x0001)                             
#define FUSES_END       (FUSES_START + FUSES_SIZE - 1)       

#define LOCKBITSMEM_START  (0x0000)                                   
#define LOCKBITSMEM_SIZE   (0x0001)                                   
#define LOCKBITSMEM_END    (LOCKBITSMEM_START + LOCKBITSMEM_SIZE - 1) 

#define LOCKBITS_START     (0x0000)                                   
#define LOCKBITS_SIZE      (0x0001)                                   
#define LOCKBITS_PAGE_SIZE (0x0001)                                   
#define LOCKBITS_END       (LOCKBITS_START + LOCKBITS_SIZE - 1)       

#define USER_SIGNATURESMEM_START  (0x0100)                                                 
#define USER_SIGNATURESMEM_SIZE   (0x0300)                                                 
#define USER_SIGNATURESMEM_END    (USER_SIGNATURESMEM_START + USER_SIGNATURESMEM_SIZE - 1) 

#define USER_SIGNATURES_START     (0x0100)                                                 
#define USER_SIGNATURES_SIZE      (0x0300)                                                 
#define USER_SIGNATURES_PAGE_SIZE (0x0100)                                                 
#define USER_SIGNATURES_END       (USER_SIGNATURES_START + USER_SIGNATURES_SIZE - 1)       

#define DATAMEM_START       (0x0000)                               
#define DATAMEM_SIZE        (0x4200)                               
#define DATAMEM_END         (DATAMEM_START + DATAMEM_SIZE - 1)     

#define REGISTERS_START     (0x0000)                               
#define REGISTERS_SIZE      (0x0020)                               
#define REGISTERS_PAGE_SIZE (0x0001)                               
#define REGISTERS_END       (REGISTERS_START + REGISTERS_SIZE - 1) 

#define MAPPED_IO_START     (0x0020)                               
#define MAPPED_IO_SIZE      (0x01E0)                               
#define MAPPED_IO_PAGE_SIZE (0x0001)                               
#define MAPPED_IO_END       (MAPPED_IO_START + MAPPED_IO_SIZE - 1) 

#define IRAM_START          (0x0200)                               
#define IRAM_SIZE           (0x4000)                               
#define IRAM_PAGE_SIZE      (0x0001)                               
#define IRAM_END            (IRAM_START + IRAM_SIZE - 1)           

#define EEPROMMEM_START         (0x0000)                               
#define EEPROMMEM_SIZE          (0x1000)                               
#define EEPROMMEM_END           (EEPROMMEM_START + EEPROMMEM_SIZE - 1) 

#define EEPROM_START            (0x0000)                               
#define EEPROM_SIZE             (0x1000)                               
#define EEPROM_PAGE_SIZE        (0x0008)                               
#define EEPROM_END              (EEPROM_START + EEPROM_SIZE - 1)       

/* Added MAPPED_EEPROM segment names for avr-libc */
#define MAPPED_EEPROM_START     (EEPROM_START)                         
#define MAPPED_EEPROM_SIZE      (EEPROM_SIZE)                          
#define MAPPED_EEPROM_PAGE_SIZE (EEPROM_PAGE_SIZE)                     
#define MAPPED_EEPROM_END       (EEPROM_END)                           

#define IOMEM_START (0x0000)                       
#define IOMEM_SIZE  (0x0040)                       
#define IOMEM_END   (IOMEM_START + IOMEM_SIZE - 1) 

#define OSCCALMEM_START  (0x0000)                               
#define OSCCALMEM_SIZE   (0x0001)                               
#define OSCCALMEM_END    (OSCCALMEM_START + OSCCALMEM_SIZE - 1) 

#define OSCCAL_START     (0x0000)                               
#define OSCCAL_SIZE      (0x0001)                               
#define OSCCAL_PAGE_SIZE (0x0001)                               
#define OSCCAL_END       (OSCCAL_START + OSCCAL_SIZE - 1)       

/* ============ Port Bits ============ */

#define PORTA0 (0) 
#define PORTA1 (1) 
#define PORTA2 (2) 
#define PORTA3 (3) 
#define PORTA4 (4) 
#define PORTA5 (5) 
#define PORTA6 (6) 
#define PORTA7 (7) 
#define PORTB0 (0) 
#define PORTB1 (1) 
#define PORTB2 (2) 
#define PORTB3 (3) 
#define PORTB4 (4) 
#define PORTB5 (5) 
#define PORTB6 (6) 
#define PORTB7 (7) 
#define PORTC0 (0) 
#define PORTC1 (1) 
#define PORTC2 (2) 
#define PORTC3 (3) 
#define PORTC4 (4) 
#define PORTC5 (5) 
#define PORTC6 (6) 
#define PORTC7 (7) 
#define PORTD0 (0) 
#define PORTD1 (1) 
#define PORTD2 (2) 
#define PORTD3 (3) 
#define PORTD4 (4) 
#define PORTD5 (5) 
#define PORTD6 (6) 
#define PORTD7 (7) 
#define PORTE0 (0) 
#define PORTE1 (1) 
#define PORTE2 (2) 
#define PORTE3 (3) 
#define PORTE4 (4) 
#define PORTE5 (5) 
#define PORTE6 (6) 
#define PORTE7 (7) 
#define PORTF0 (0) 
#define PORTF1 (1) 
#define PORTF2 (2) 
#define PORTF3 (3) 
#define PORTF4 (4) 
#define PORTF5 (5) 
#define PORTF6 (6) 
#define PORTF7 (7) 
#define PORTG0 (0) 
#define PORTG1 (1) 
#define PORTG2 (2) 
#define PORTG3 (3) 
#define PORTG4 (4) 
#define PORTG5 (5) 
#define PORTG6 (6) 
#define PORTG7 (7) 

/*
================================================================================
Fuses/LockBits/Signatures
================================================================================
*/

/* ============ Fuses ============ */

#define FUSE_MEMORY_SIZE 2 

/* Fuse offset 0x00 */
#define CKSEL_SUT0 (unsigned char)~_BV(0) /* Select Clock Source : Start-up time bit 0 */
#define CKSEL_SUT1 (unsigned char)~_BV(1) /* Select Clock Source : Start-up time bit 1 */
#define CKSEL_SUT2 (unsigned char)~_BV(2) /* Select Clock Source : Start-up time bit 2 */
#define CKSEL_SUT3 (unsigned char)~_BV(3) /* Select Clock Source : Start-up time bit 3 */
#define CKSEL_SUT4 (unsigned char)~_BV(4) /* Select Clock Source : Start-up time bit 4 */
#define CKSEL_SUT5 (unsigned char)~_BV(5) /* Select Clock Source : Start-up time bit 5 */
#define CKOUT      (unsigned char)~_BV(6) /* Clock output on PORTE7 */
#define CKDIV8     (unsigned char)~_BV(7) /* Divide clock by 8 internally */

/* Fuse offset 0x01 */
#define BOOTRST (unsigned char)~_BV(0) /* Boot Reset vector Enabled */
#define BOOTSZ0 (unsigned char)~_BV(1) /* Select Boot Size bit 0 */
#define BOOTSZ1 (unsigned char)~_BV(2) /* Select Boot Size bit 1 */
#define EESAVE  (unsigned char)~_BV(3) /* Preserve EEPROM through the Chip Erase cycle */
#define WDTON   (unsigned char)~_BV(4) /* Watchdog timer always on */
#define SPIEN   (unsigned char)~_BV(5) /* Serial program downloading (SPI) enabled */
#define JTAGEN  (unsigned char)~_BV(6) /* JTAG Interface Enabled */
#define OCDEN   (unsigned char)~_BV(7) /* On-Chip Debug Enabled */

/* Fuse offset 0x02 */
#define BODLEVEL0 (unsigned char)~_BV(0) /* Brown-out Detector trigger level bit 0 */
#define BODLEVEL1 (unsigned char)~_BV(1) /* Brown-out Detector trigger level bit 1 */
#define BODLEVEL2 (unsigned char)~_BV(2) /* Brown-out Detector trigger level bit 2 */


/* ========== Lock Bits ========== */
#define __LOCK_BITS_EXIST  


/* ========== Signature ========== */
#define SIGNATURE_0 (0x1E) 
#define SIGNATURE_1 (0xA7) 
#define SIGNATURE_2 (0x03) 

#endif /* #ifdef _AVR_ATmega1284RFR2_H_INCLUDED */
