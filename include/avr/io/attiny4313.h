/******************************************************************************
 *   This file is part of avr-libc3.                                          * 
 *                                                                            * 
 *   Automatically created by devtools/gen-ioheader-atdf.py (V0.91)           * 
 *                                                                            * 
 *   .atpack File: ATtiny4313.atdf                                            * 
 *   .ATDF File:   atdf/ATtiny4313.atdf                                       * 
 *   Version:      2.0.10                                                     * 
 *   Date:         2019-04-25                                                 * 
 *   Device:       ATtiny4313                                                 * 
 *   Architecture: AVR8                                                       * 
 *                                                                            * 
 *   Changelog:                                                               * 
 *                                                                            * 
 *   2.0.10 2019-04-25 :                                                      * 
 *        - Added missing TCB1 PORTMUX for tiny3217/3216/1617/1616/1614.      * 
 *    2.0.2 2019-01-24 :                                                      * 
 *        - Corrected TC2 instance in ATtiny441.                              * 
 *        - Corrected defines for ATtiny1634.                                 * 
 *        - Refactored away family header files, now there is one header file * 
 *        - per device.                                                       * 
 *        - Corrected FUSE_MEMORY_SIZE for ATtiny4/5/9/10/20/40.              * 
 *        - Added simulator support for mega1609/1608/809/808.                * 
 *        - Succeeds Atmel.ATtiny_DFP 1.3.229.                                * 
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
#  define _AVR_IOXXX_H_ "ioATtiny4313.h"
#else
#  error "Attempt to include more than one <avr/ioXXX.h> file."
#endif

#ifndef _AVR_ATtiny4313_H_INCLUDED
#  define _AVR_ATtiny4313_H_INCLUDED

/*
================================================================================
Ungrouped common register
================================================================================
*/

#define PRR    _SFR_MEM8 (0x26) /* Power reduction register */
#define BODCR  _SFR_MEM8 (0x27) /* BOD control register */

#define GPIOR0 _SFR_MEM8 (0x33) /* General Purpose I/O Register 0 */
#define GPIOR1 _SFR_MEM8 (0x34) /* General Purpose I/O Register 1 */
#define GPIOR2 _SFR_MEM8 (0x35) /* General Purpose I/O Register 2 */

#define GTCCR  _SFR_MEM8 (0x43) /* General Timer Counter Control Register */

#define CLKPR  _SFR_MEM8 (0x46) /* Clock Prescale Register */

#define OSCCAL _SFR_MEM8 (0x51) /* Oscillator Calibration Register */

#define MCUSR  _SFR_MEM8 (0x54) /* MCU Status register */
#define MCUCR  _SFR_MEM8 (0x55) /* MCU Control Register */

#define SPMCSR _SFR_MEM8 (0x57) /* Store Program Memory Control and Status register */

#define SP     _SFR_MEM16(0x5D) /* Stack Pointer  */
#define SREG   _SFR_MEM8 (0x5F) /* Status Register */


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


/* Self Programming enable */
typedef enum FUSE_SELFPRGEN_enum
{
    FUSE_SELFPRGEN_CLEAR_gc = (0x00), /* Self Programming enable - CLEAR */
    FUSE_SELFPRGEN_SET_gc   = (0x01), /* Self Programming enable - SET */
} FUSE_SELFPRGEN_t;

/* Debug Wire enable */
typedef enum FUSE_DWEN_enum
{
    FUSE_DWEN_CLEAR_gc = (0x00), /* Debug Wire enable - CLEAR */
    FUSE_DWEN_SET_gc   = (0x80), /* Debug Wire enable - SET */
} FUSE_DWEN_t;

/* Preserve EEPROM through the Chip Erase cycle */
typedef enum FUSE_EESAVE_enum
{
    FUSE_EESAVE_CLEAR_gc = (0x00), /* Preserve EEPROM through the Chip Erase cycle - CLEAR */
    FUSE_EESAVE_SET_gc   = (0x40), /* Preserve EEPROM through the Chip Erase cycle - SET */
} FUSE_EESAVE_t;

/* Serial program downloading (SPI) enable */
typedef enum FUSE_SPIEN_enum
{
    FUSE_SPIEN_CLEAR_gc = (0x00), /* Serial program downloading (SPI) enable - CLEAR */
    FUSE_SPIEN_SET_gc   = (0x20), /* Serial program downloading (SPI) enable - SET */
} FUSE_SPIEN_t;

/* Watch-dog Timer always on */
typedef enum FUSE_WDTON_enum
{
    FUSE_WDTON_CLEAR_gc = (0x00), /* Watch-dog Timer always on - CLEAR */
    FUSE_WDTON_SET_gc   = (0x10), /* Watch-dog Timer always on - SET */
} FUSE_WDTON_t;

/* Brown-out Detector trigger level */
typedef enum FUSE_BODLEVEL_enum
{
    FUSE_BODLEVEL_4V3_gc      = (0x04<<1), /* Brown-out detection at VCC=4.3 V */
    FUSE_BODLEVEL_2V7_gc      = (0x05<<1), /* Brown-out detection at VCC=2.7 V */
    FUSE_BODLEVEL_1V8_gc      = (0x06<<1), /* Brown-out detection at VCC=1.8 V */
    FUSE_BODLEVEL_DISABLED_gc = (0x07<<1), /* Brown-out detection disabled */
} FUSE_BODLEVEL_t;

/* External reset disable */
typedef enum FUSE_RSTDISBL_enum
{
    FUSE_RSTDISBL_CLEAR_gc = (0x00), /* External reset disable - CLEAR */
    FUSE_RSTDISBL_SET_gc   = (0x01), /* External reset disable - SET */
} FUSE_RSTDISBL_t;

/* Divide clock by 8 internally */
typedef enum FUSE_CKDIV8_enum
{
    FUSE_CKDIV8_CLEAR_gc = (0x00), /* Divide clock by 8 internally - CLEAR */
    FUSE_CKDIV8_SET_gc   = (0x80), /* Divide clock by 8 internally - SET */
} FUSE_CKDIV8_t;

/* Clock output on PORTD2 */
typedef enum FUSE_CKOUT_enum
{
    FUSE_CKOUT_CLEAR_gc = (0x00), /* Clock output on PORTD2 - CLEAR */
    FUSE_CKOUT_SET_gc   = (0x40), /* Clock output on PORTD2 - SET */
} FUSE_CKOUT_t;

/* Select Clock Source */
typedef enum FUSE_SUT_CKSEL_enum
{
    FUSE_SUT_CKSEL_EXTCLK_14CK_0MS_gc               = (0x00), /* Ext. Clock; Start-up time: 14 CK + 0   ms */
    FUSE_SUT_CKSEL_EXTCLK_14CK_4MS1_gc              = (0x10), /* Ext. Clock; Start-up time: 14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTCLK_14CK_65MS_gc              = (0x20), /* Ext. Clock; Start-up time: 14 CK + 65  ms */
    FUSE_SUT_CKSEL_INTRCOSC_4MHZ_14CK_0MS_gc        = (0x02), /* Int. RC Osc. 4 MHz; Start-up time: 14 CK + 0   ms */
    FUSE_SUT_CKSEL_INTRCOSC_4MHZ_14CK_4MS1_gc       = (0x12), /* Int. RC Osc. 4 MHz; Start-up time: 14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_INTRCOSC_4MHZ_14CK_65MS_gc       = (0x22), /* Int. RC Osc. 4 MHz; Start-up time: 14 CK + 65  ms */
    FUSE_SUT_CKSEL_INTRCOSC_8MHZ_14CK_0MS_gc        = (0x04), /* Int. RC Osc. 8 MHz; Start-up time: 14 CK + 0   ms */
    FUSE_SUT_CKSEL_INTRCOSC_8MHZ_14CK_4MS1_gc       = (0x14), /* Int. RC Osc. 8 MHz; Start-up time: 14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_INTRCOSC_8MHZ_14CK_65MS_gc       = (0x24), /* Int. RC Osc. 8 MHz; Start-up time: 14 CK + 65  ms */
    FUSE_SUT_CKSEL_INTRCOSC_128KHZ_14CK_0MS_gc      = (0x06), /* Int. RC Osc. 128 kHz; Start-up time: 14 CK + 0 ms */
    FUSE_SUT_CKSEL_INTRCOSC_128KHZ_14CK_4MS_gc      = (0x16), /* Int. RC Osc. 128 kHz; Start-up time: 14 CK + 4 ms */
    FUSE_SUT_CKSEL_INTRCOSC_128KHZ_14CK_64MS_gc     = (0x26), /* Int. RC Osc. 128 kHz; Start-up time: 14 CK + 64 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_14CK_4MS1_gc = (0x08), /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time: 14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_14CK_65MS_gc = (0x18), /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time: 14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_14CK_0MS_gc  = (0x28), /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time: 14 CK + 0 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_14CK_4MS1_gc = (0x38), /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time: 14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_14CK_65MS_gc = (0x09), /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time: 14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_14CK_0MS_gc  = (0x19), /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time: 14 CK + 0 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_14CK_4MS1_gc = (0x29), /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time: 14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_14CK_65MS_gc = (0x39), /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time: 14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_14CK_4MS1_gc  = (0x0A), /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time: 14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_14CK_65MS_gc  = (0x1A), /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time: 14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_14CK_0MS_gc   = (0x2A), /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time: 14 CK + 0 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_14CK_4MS1_gc  = (0x3A), /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time: 14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_14CK_65MS_gc  = (0x0B), /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time: 14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_14CK_0MS_gc   = (0x1B), /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time: 14 CK + 0 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_14CK_4MS1_gc  = (0x2B), /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time: 14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_14CK_65MS_gc  = (0x3B), /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time: 14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_14CK_4MS1_gc   = (0x0C), /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time: 14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_14CK_65MS_gc   = (0x1C), /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time: 14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_14CK_0MS_gc    = (0x2C), /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time: 14 CK + 0 ms */
    FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_14CK_4MS1_gc   = (0x3C), /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time: 14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_14CK_65MS_gc   = (0x0D), /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time: 14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_14CK_0MS_gc    = (0x1D), /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time: 14 CK + 0 ms */
    FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_14CK_4MS1_gc   = (0x2D), /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time: 14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_14CK_65MS_gc   = (0x3D), /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time: 14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_14CK_4MS1_gc     = (0x0E), /* Ext. Crystal Osc. 8.0-    MHz; Start-up time: 14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_14CK_65MS_gc     = (0x1E), /* Ext. Crystal Osc. 8.0-    MHz; Start-up time: 14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_14CK_0MS_gc      = (0x2E), /* Ext. Crystal Osc. 8.0-    MHz; Start-up time: 14 CK + 0 ms */
    FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_14CK_4MS1_gc     = (0x3E), /* Ext. Crystal Osc. 8.0-    MHz; Start-up time: 14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_14CK_65MS_gc     = (0x0F), /* Ext. Crystal Osc. 8.0-    MHz; Start-up time: 14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_14CK_0MS_gc      = (0x1F), /* Ext. Crystal Osc. 8.0-    MHz; Start-up time: 14 CK + 0 ms */
    FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_14CK_4MS1_gc     = (0x2F), /* Ext. Crystal Osc. 8.0-    MHz; Start-up time: 14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_14CK_65MS_gc     = (0x3F), /* Ext. Crystal Osc. 8.0-    MHz; Start-up time: 14 CK + 65 ms */
} FUSE_SUT_CKSEL_t;

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

/*
--------------------------------------------------------------------------------
PORT - I/O Port
--------------------------------------------------------------------------------
*/

typedef struct PORTB_struct
{
    register8_t rsv_0x00[54]; /* RESERVED REGISTER BLOCK */
    register8_t PINB;         /* Port B Input Pins */
    register8_t DDRB;         /* Port B Data Direction Register */
    register8_t PORTB;        /* Port B Data Register */
} PORTB_t;


/*
--------------------------------------------------------------------------------
PORT - I/O Port
--------------------------------------------------------------------------------
*/

typedef struct PORTD_struct
{
    register8_t rsv_0x00[48]; /* RESERVED REGISTER BLOCK */
    register8_t PIND;         /* Input Pins, Port D */
    register8_t DDRD;         /* Data Direction Register, Port D */
    register8_t PORTD;        /* Data Register, Port D */
} PORTD_t;


/*
--------------------------------------------------------------------------------
PORT - I/O Port
--------------------------------------------------------------------------------
*/

typedef struct PORTA_struct
{
    register8_t rsv_0x00[57]; /* RESERVED REGISTER BLOCK */
    register8_t PINA;         /* Port A Input Pins */
    register8_t DDRA;         /* Port A Data Direction Register */
    register8_t PORTA;        /* Port A Data Register */
} PORTA_t;


/*
--------------------------------------------------------------------------------
TC8 - Timer/Counter, 8-bit
--------------------------------------------------------------------------------
*/

typedef struct TC0_struct
{
    register8_t rsv_0x00[80]; /* RESERVED REGISTER BLOCK */
    register8_t TCCR0A;       /* Timer/Counter  Control Register A */
    register8_t rsv_0x51;     /* RESERVED REGISTER */
    register8_t TCNT0;        /* Timer/Counter0 */
    register8_t TCCR0B;       /* Timer/Counter Control Register B */
    register8_t rsv_0x54[2];  /* RESERVED REGISTER BLOCK */
    register8_t OCR0A;        /* Timer/Counter0 Output Compare Register */
    register8_t rsv_0x57;     /* RESERVED REGISTER */
    register8_t TIFR;         /* Timer/Counter Interrupt Flag register */
    register8_t TIMSK;        /* Timer/Counter Interrupt Mask Register */
    register8_t rsv_0x5A[2];  /* RESERVED REGISTER BLOCK */
    register8_t OCR0B;        /* Timer/Counter0 Output Compare Register */
} TC0_t;


/* Timer/Counter0 Output Compare Match B Interrupt Enable */
typedef enum TC0_OCIE0B_enum
{
    TC0_OCIE0B_CLEAR_gc = (0x00), /* Timer/Counter0 Output Compare Match B Interrupt Enable - CLEAR */
    TC0_OCIE0B_SET_gc   = (0x04), /* Timer/Counter0 Output Compare Match B Interrupt Enable - SET */
} TC0_OCIE0B_t;

/* Timer/Counter0 Overflow Interrupt Enable */
typedef enum TC0_TOIE0_enum
{
    TC0_TOIE0_CLEAR_gc = (0x00), /* Timer/Counter0 Overflow Interrupt Enable - CLEAR */
    TC0_TOIE0_SET_gc   = (0x02), /* Timer/Counter0 Overflow Interrupt Enable - SET */
} TC0_TOIE0_t;

/* Timer/Counter0 Output Compare Match A Interrupt Enable */
typedef enum TC0_OCIE0A_enum
{
    TC0_OCIE0A_CLEAR_gc = (0x00), /* Timer/Counter0 Output Compare Match A Interrupt Enable - CLEAR */
    TC0_OCIE0A_SET_gc   = (0x01), /* Timer/Counter0 Output Compare Match A Interrupt Enable - SET */
} TC0_OCIE0A_t;

/* Timer/Counter0 Output Compare Flag 0B */
typedef enum TC0_OCF0B_enum
{
    TC0_OCF0B_CLEAR_gc = (0x00), /* Timer/Counter0 Output Compare Flag 0B - CLEAR */
    TC0_OCF0B_SET_gc   = (0x04), /* Timer/Counter0 Output Compare Flag 0B - SET */
} TC0_OCF0B_t;

/* Timer/Counter0 Overflow Flag */
typedef enum TC0_TOV0_enum
{
    TC0_TOV0_CLEAR_gc = (0x00), /* Timer/Counter0 Overflow Flag - CLEAR */
    TC0_TOV0_SET_gc   = (0x02), /* Timer/Counter0 Overflow Flag - SET */
} TC0_TOV0_t;

/* Timer/Counter0 Output Compare Flag 0A */
typedef enum TC0_OCF0A_enum
{
    TC0_OCF0A_CLEAR_gc = (0x00), /* Timer/Counter0 Output Compare Flag 0A - CLEAR */
    TC0_OCF0A_SET_gc   = (0x01), /* Timer/Counter0 Output Compare Flag 0A - SET */
} TC0_OCF0A_t;

/* Compare Match Output A Mode */
#define TC0_TCCR0A_COM0A_gc(x) ((x<<6) & 0xC0)

/* Compare Match Output B Mode */
#define TC0_TCCR0A_COM0B_gc(x) ((x<<4) & 0x30)

/* Waveform Generation Mode */
#define TC0_TCCR0A_WGM0_gc(x) (x & 0x03)

/* Force Output Compare B */
typedef enum TC0_FOC0A_enum
{
    TC0_FOC0A_CLEAR_gc = (0x00), /* Force Output Compare B - CLEAR */
    TC0_FOC0A_SET_gc   = (0x80), /* Force Output Compare B - SET */
} TC0_FOC0A_t;

/* Force Output Compare B */
typedef enum TC0_FOC0B_enum
{
    TC0_FOC0B_CLEAR_gc = (0x00), /* Force Output Compare B - CLEAR */
    TC0_FOC0B_SET_gc   = (0x40), /* Force Output Compare B - SET */
} TC0_FOC0B_t;

/* Timer/Counter Control Register B-WGM02 */
typedef enum TC0_WGM02_enum
{
    TC0_WGM02_CLEAR_gc = (0x00), /* Timer/Counter Control Register B-WGM02 - CLEAR */
    TC0_WGM02_SET_gc   = (0x08), /* Timer/Counter Control Register B-WGM02 - SET */
} TC0_WGM02_t;

/* Clock Select */
typedef enum TC0_CS0_enum
{
    TC0_CS0_VAL_0x00_gc = (0x00), /* No Clock Source (Stopped) */
    TC0_CS0_VAL_0x01_gc = (0x01), /* Running, No Prescaling */
    TC0_CS0_VAL_0x02_gc = (0x02), /* Running, CLK/8 */
    TC0_CS0_VAL_0x03_gc = (0x03), /* Running, CLK/64 */
    TC0_CS0_VAL_0x04_gc = (0x04), /* Running, CLK/256 */
    TC0_CS0_VAL_0x05_gc = (0x05), /* Running, CLK/1024 */
    TC0_CS0_VAL_0x06_gc = (0x06), /* Running, ExtClk Tx Falling Edge */
    TC0_CS0_VAL_0x07_gc = (0x07), /* Running, ExtClk Tx Rising Edge */
} TC0_CS0_t;

/*
--------------------------------------------------------------------------------
TC16 - Timer/Counter, 16-bit
--------------------------------------------------------------------------------
*/

typedef struct TC1_struct
{
    register8_t rsv_0x00[66]; /* RESERVED REGISTER BLOCK */
    register8_t TCCR1C;       /* Timer/Counter1 Control Register C */
    register8_t rsv_0x43;     /* RESERVED REGISTER */
    _REGISTER16 (ICR1);       /* Timer/Counter1 Input Capture Register  Bytes */
    register8_t rsv_0x45[3];  /* RESERVED REGISTER BLOCK */
    _REGISTER16 (OCR1B);      /* Timer/Counter1 Output Compare Register  Bytes */
    register8_t rsv_0x49;     /* RESERVED REGISTER */
    _REGISTER16 (OCR1A);      /* Timer/Counter1 Output Compare Register  Bytes */
    register8_t rsv_0x4B;     /* RESERVED REGISTER */
    _REGISTER16 (TCNT1);      /* Timer/Counter1  Bytes */
    register8_t rsv_0x4D;     /* RESERVED REGISTER */
    register8_t TCCR1B;       /* Timer/Counter1 Control Register B */
    register8_t TCCR1A;       /* Timer/Counter1 Control Register A */
    register8_t rsv_0x50[8];  /* RESERVED REGISTER BLOCK */
    register8_t TIFR;         /* Timer/Counter Interrupt Flag register */
    register8_t TIMSK;        /* Timer/Counter Interrupt Mask Register */
} TC1_t;


/* Timer/Counter1 Overflow Interrupt Enable */
typedef enum TC1_TOIE1_enum
{
    TC1_TOIE1_CLEAR_gc = (0x00), /* Timer/Counter1 Overflow Interrupt Enable - CLEAR */
    TC1_TOIE1_SET_gc   = (0x80), /* Timer/Counter1 Overflow Interrupt Enable - SET */
} TC1_TOIE1_t;

/* Timer/Counter1 Output CompareA Match Interrupt Enable */
typedef enum TC1_OCIE1A_enum
{
    TC1_OCIE1A_CLEAR_gc = (0x00), /* Timer/Counter1 Output CompareA Match Interrupt Enable - CLEAR */
    TC1_OCIE1A_SET_gc   = (0x40), /* Timer/Counter1 Output CompareA Match Interrupt Enable - SET */
} TC1_OCIE1A_t;

/* Timer/Counter1 Output CompareB Match Interrupt Enable */
typedef enum TC1_OCIE1B_enum
{
    TC1_OCIE1B_CLEAR_gc = (0x00), /* Timer/Counter1 Output CompareB Match Interrupt Enable - CLEAR */
    TC1_OCIE1B_SET_gc   = (0x20), /* Timer/Counter1 Output CompareB Match Interrupt Enable - SET */
} TC1_OCIE1B_t;

/* Timer/Counter1 Input Capture Interrupt Enable */
typedef enum TC1_ICIE1_enum
{
    TC1_ICIE1_CLEAR_gc = (0x00), /* Timer/Counter1 Input Capture Interrupt Enable - CLEAR */
    TC1_ICIE1_SET_gc   = (0x08), /* Timer/Counter1 Input Capture Interrupt Enable - SET */
} TC1_ICIE1_t;

/* Timer/Counter1 Overflow Flag */
typedef enum TC1_TOV1_enum
{
    TC1_TOV1_CLEAR_gc = (0x00), /* Timer/Counter1 Overflow Flag - CLEAR */
    TC1_TOV1_SET_gc   = (0x80), /* Timer/Counter1 Overflow Flag - SET */
} TC1_TOV1_t;

/* Output Compare Flag 1A */
typedef enum TC1_OCF1A_enum
{
    TC1_OCF1A_CLEAR_gc = (0x00), /* Output Compare Flag 1A - CLEAR */
    TC1_OCF1A_SET_gc   = (0x40), /* Output Compare Flag 1A - SET */
} TC1_OCF1A_t;

/* Output Compare Flag 1B */
typedef enum TC1_OCF1B_enum
{
    TC1_OCF1B_CLEAR_gc = (0x00), /* Output Compare Flag 1B - CLEAR */
    TC1_OCF1B_SET_gc   = (0x20), /* Output Compare Flag 1B - SET */
} TC1_OCF1B_t;

/* Input Capture Flag 1 */
typedef enum TC1_ICF1_enum
{
    TC1_ICF1_CLEAR_gc = (0x00), /* Input Capture Flag 1 - CLEAR */
    TC1_ICF1_SET_gc   = (0x08), /* Input Capture Flag 1 - SET */
} TC1_ICF1_t;

/* Compare Output Mode 1A, bits */
#define TC1_TCCR1A_COM1A_gc(x) ((x<<6) & 0xC0)

/* Compare Output Mode 1B, bits */
#define TC1_TCCR1A_COM1B_gc(x) ((x<<4) & 0x30)

/* Pulse Width Modulator Select Bits */
#define TC1_TCCR1A_WGM1_gc(x) (x & 0x03)

/* Input Capture 1 Noise Canceler */
typedef enum TC1_ICNC1_enum
{
    TC1_ICNC1_CLEAR_gc = (0x00), /* Input Capture 1 Noise Canceler - CLEAR */
    TC1_ICNC1_SET_gc   = (0x80), /* Input Capture 1 Noise Canceler - SET */
} TC1_ICNC1_t;

/* Input Capture 1 Edge Select */
typedef enum TC1_ICES1_enum
{
    TC1_ICES1_CLEAR_gc = (0x00), /* Input Capture 1 Edge Select - CLEAR */
    TC1_ICES1_SET_gc   = (0x40), /* Input Capture 1 Edge Select - SET */
} TC1_ICES1_t;

/* Waveform Generation Mode Bits */
#define TC1_TCCR1B_WGM1_gc(x) ((x<<3) & 0x18)

/* Clock Select1 bits */
typedef enum TC1_CS1_enum
{
    TC1_CS1_VAL_0x00_gc = (0x00), /* No Clock Source (Stopped) */
    TC1_CS1_VAL_0x01_gc = (0x01), /* Running, No Prescaling */
    TC1_CS1_VAL_0x02_gc = (0x02), /* Running, CLK/8 */
    TC1_CS1_VAL_0x03_gc = (0x03), /* Running, CLK/64 */
    TC1_CS1_VAL_0x04_gc = (0x04), /* Running, CLK/256 */
    TC1_CS1_VAL_0x05_gc = (0x05), /* Running, CLK/1024 */
    TC1_CS1_VAL_0x06_gc = (0x06), /* Running, ExtClk Tx Falling Edge */
    TC1_CS1_VAL_0x07_gc = (0x07), /* Running, ExtClk Tx Rising Edge */
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

/*
--------------------------------------------------------------------------------
WDT - Watchdog Timer
--------------------------------------------------------------------------------
*/

typedef struct WDT_struct
{
    register8_t rsv_0x00[65]; /* RESERVED REGISTER BLOCK */
    register8_t WDTCR;        /* Watchdog Timer Control Register */
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
USART - USART
--------------------------------------------------------------------------------
*/

typedef struct USART_struct
{
    register8_t rsv_0x00[34]; /* RESERVED REGISTER BLOCK */
    register8_t UBRRH;        /* USART Baud Rate Register High Byte */
    register8_t UCSRC;        /* USART Control and Status Register C */
    register8_t rsv_0x24[5];  /* RESERVED REGISTER BLOCK */
    register8_t UBRRL;        /* USART Baud Rate Register Low Byte */
    register8_t UCSRB;        /* USART Control and Status Register B */
    register8_t UCSRA;        /* USART Control and Status Register A */
    register8_t UDR;          /* USART I/O Data Register */
} USART_t;


/* USART Receive Complete */
typedef enum USART_RXC_enum
{
    USART_RXC_CLEAR_gc = (0x00), /* USART Receive Complete - CLEAR */
    USART_RXC_SET_gc   = (0x80), /* USART Receive Complete - SET */
} USART_RXC_t;

/* USART Transmitt Complete */
typedef enum USART_TXC_enum
{
    USART_TXC_CLEAR_gc = (0x00), /* USART Transmitt Complete - CLEAR */
    USART_TXC_SET_gc   = (0x40), /* USART Transmitt Complete - SET */
} USART_TXC_t;

/* USART Data Register Empty */
typedef enum USART_UDRE_enum
{
    USART_UDRE_CLEAR_gc = (0x00), /* USART Data Register Empty - CLEAR */
    USART_UDRE_SET_gc   = (0x20), /* USART Data Register Empty - SET */
} USART_UDRE_t;

/* Framing Error */
typedef enum USART_FE_enum
{
    USART_FE_CLEAR_gc = (0x00), /* Framing Error - CLEAR */
    USART_FE_SET_gc   = (0x10), /* Framing Error - SET */
} USART_FE_t;

/* Data overRun */
typedef enum USART_DOR_enum
{
    USART_DOR_CLEAR_gc = (0x00), /* Data overRun - CLEAR */
    USART_DOR_SET_gc   = (0x08), /* Data overRun - SET */
} USART_DOR_t;

/* USART Parity Error */
typedef enum USART_UPE_enum
{
    USART_UPE_CLEAR_gc = (0x00), /* USART Parity Error - CLEAR */
    USART_UPE_SET_gc   = (0x04), /* USART Parity Error - SET */
} USART_UPE_t;

/* Double the USART Transmission Speed */
typedef enum USART_U2X_enum
{
    USART_U2X_CLEAR_gc = (0x00), /* Double the USART Transmission Speed - CLEAR */
    USART_U2X_SET_gc   = (0x02), /* Double the USART Transmission Speed - SET */
} USART_U2X_t;

/* Multi-processor Communication Mode */
typedef enum USART_MPCM_enum
{
    USART_MPCM_CLEAR_gc = (0x00), /* Multi-processor Communication Mode - CLEAR */
    USART_MPCM_SET_gc   = (0x01), /* Multi-processor Communication Mode - SET */
} USART_MPCM_t;

/* RX Complete Interrupt Enable */
typedef enum USART_RXCIE_enum
{
    USART_RXCIE_CLEAR_gc = (0x00), /* RX Complete Interrupt Enable - CLEAR */
    USART_RXCIE_SET_gc   = (0x80), /* RX Complete Interrupt Enable - SET */
} USART_RXCIE_t;

/* TX Complete Interrupt Enable */
typedef enum USART_TXCIE_enum
{
    USART_TXCIE_CLEAR_gc = (0x00), /* TX Complete Interrupt Enable - CLEAR */
    USART_TXCIE_SET_gc   = (0x40), /* TX Complete Interrupt Enable - SET */
} USART_TXCIE_t;

/* USART Data register Empty Interrupt Enable */
typedef enum USART_UDRIE_enum
{
    USART_UDRIE_CLEAR_gc = (0x00), /* USART Data register Empty Interrupt Enable - CLEAR */
    USART_UDRIE_SET_gc   = (0x20), /* USART Data register Empty Interrupt Enable - SET */
} USART_UDRIE_t;

/* Receiver Enable */
typedef enum USART_RXEN_enum
{
    USART_RXEN_CLEAR_gc = (0x00), /* Receiver Enable - CLEAR */
    USART_RXEN_SET_gc   = (0x10), /* Receiver Enable - SET */
} USART_RXEN_t;

/* Transmitter Enable */
typedef enum USART_TXEN_enum
{
    USART_TXEN_CLEAR_gc = (0x00), /* Transmitter Enable - CLEAR */
    USART_TXEN_SET_gc   = (0x08), /* Transmitter Enable - SET */
} USART_TXEN_t;

/* Character Size */
typedef enum USART_UCSZ2_enum
{
    USART_UCSZ2_CLEAR_gc = (0x00), /* Character Size - CLEAR */
    USART_UCSZ2_SET_gc   = (0x04), /* Character Size - SET */
} USART_UCSZ2_t;

/* Receive Data Bit 8 */
typedef enum USART_RXB8_enum
{
    USART_RXB8_CLEAR_gc = (0x00), /* Receive Data Bit 8 - CLEAR */
    USART_RXB8_SET_gc   = (0x02), /* Receive Data Bit 8 - SET */
} USART_RXB8_t;

/* Transmit Data Bit 8 */
typedef enum USART_TXB8_enum
{
    USART_TXB8_CLEAR_gc = (0x00), /* Transmit Data Bit 8 - CLEAR */
    USART_TXB8_SET_gc   = (0x01), /* Transmit Data Bit 8 - SET */
} USART_TXB8_t;

/* USART Mode Select */
typedef enum USART_UMSEL_enum
{
    USART_UMSEL_VAL_0x00_gc = (0x00<<6), /* Asynchronous Operation */
    USART_UMSEL_VAL_0x01_gc = (0x01<<6), /* Synchronous Operation */
    USART_UMSEL_VAL_0x03_gc = (0x03<<6), /* Master SPI */
} USART_UMSEL_t;

/* Parity Mode Bits */
typedef enum USART_UPM_enum
{
    USART_UPM_VAL_0x00_gc = (0x00<<4), /* Disabled */
    USART_UPM_VAL_0x01_gc = (0x01<<4), /* Reserved */
    USART_UPM_VAL_0x02_gc = (0x02<<4), /* Enabled, Even Parity */
    USART_UPM_VAL_0x03_gc = (0x03<<4), /* Enabled, Odd Parity */
} USART_UPM_t;

/* Stop Bit Select */
typedef enum USART_USBS_enum
{
    USART_USBS_VAL_0x00_gc = (0x00<<3), /* 1-bit */
    USART_USBS_VAL_0x01_gc = (0x01<<3), /* 2-bit */
} USART_USBS_t;

/* Character Size Bits */
#define USART_UCSRC_UCSZ_gc(x) ((x<<1) & 0x06)

/* Clock Polarity */
typedef enum USART_UCPOL_enum
{
    USART_UCPOL_CLEAR_gc = (0x00), /* Clock Polarity - CLEAR */
    USART_UCPOL_SET_gc   = (0x01), /* Clock Polarity - SET */
} USART_UCPOL_t;

/*
--------------------------------------------------------------------------------
AC - Analog Comparator
--------------------------------------------------------------------------------
*/

typedef struct AC_struct
{
    register8_t rsv_0x00[33]; /* RESERVED REGISTER BLOCK */
    register8_t DIDR;         /* Digital Input Disable Register 1 */
    register8_t rsv_0x22[6];  /* RESERVED REGISTER BLOCK */
    register8_t ACSR;         /* Analog Comparator Control And Status Register */
} AC_t;


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

/* Analog Comparator Control And Status Register-ACIC */
typedef enum AC_ACIC_enum
{
    AC_ACIC_CLEAR_gc = (0x00), /* Analog Comparator Control And Status Register-ACIC - CLEAR */
    AC_ACIC_SET_gc   = (0x04), /* Analog Comparator Control And Status Register-ACIC - SET */
} AC_ACIC_t;

/* Analog Comparator Interrupt Mode Select bits */
typedef enum AC_ACIS_enum
{
    AC_ACIS_VAL_0x00_gc = (0x00), /* Interrupt on Toggle */
    AC_ACIS_VAL_0x01_gc = (0x01), /* Reserved */
    AC_ACIS_VAL_0x02_gc = (0x02), /* Interrupt on Falling Edge */
    AC_ACIS_VAL_0x03_gc = (0x03), /* Interrupt on Rising Edge */
} AC_ACIS_t;

/*
--------------------------------------------------------------------------------
EEPROM - EEPROM
--------------------------------------------------------------------------------
*/

typedef struct EEPROM_struct
{
    register8_t rsv_0x00[60]; /* RESERVED REGISTER BLOCK */
    register8_t EECR;         /* EEPROM Control Register */
    register8_t EEDR;         /* EEPROM Data Register */
    register8_t EEAR;         /* EEPROM Read/Write Access */
} EEPROM_t;


/* EEPROM Control Register-EEPM */
typedef enum EEPROM_EEPM_enum
{
    EEPROM_EEPM_VAL_0x00_gc = (0x00<<4), /* Erase and Write in one operation */
    EEPROM_EEPM_VAL_0x01_gc = (0x01<<4), /* Erase Only */
    EEPROM_EEPM_VAL_0x02_gc = (0x02<<4), /* Write Only */
} EEPROM_EEPM_t;

/* EEProm Ready Interrupt Enable */
typedef enum EEPROM_EERIE_enum
{
    EEPROM_EERIE_CLEAR_gc = (0x00), /* EEProm Ready Interrupt Enable - CLEAR */
    EEPROM_EERIE_SET_gc   = (0x08), /* EEProm Ready Interrupt Enable - SET */
} EEPROM_EERIE_t;

/* EEPROM Master Write Enable */
typedef enum EEPROM_EEMPE_enum
{
    EEPROM_EEMPE_CLEAR_gc = (0x00), /* EEPROM Master Write Enable - CLEAR */
    EEPROM_EEMPE_SET_gc   = (0x04), /* EEPROM Master Write Enable - SET */
} EEPROM_EEMPE_t;

/* EEPROM Write Enable */
typedef enum EEPROM_EEPE_enum
{
    EEPROM_EEPE_CLEAR_gc = (0x00), /* EEPROM Write Enable - CLEAR */
    EEPROM_EEPE_SET_gc   = (0x02), /* EEPROM Write Enable - SET */
} EEPROM_EEPE_t;

/* EEPROM Read Enable */
typedef enum EEPROM_EERE_enum
{
    EEPROM_EERE_CLEAR_gc = (0x00), /* EEPROM Read Enable - CLEAR */
    EEPROM_EERE_SET_gc   = (0x01), /* EEPROM Read Enable - SET */
} EEPROM_EERE_t;

/*
--------------------------------------------------------------------------------
USI - Universal Serial Interface
--------------------------------------------------------------------------------
*/

typedef struct USI_struct
{
    register8_t rsv_0x00[45]; /* RESERVED REGISTER BLOCK */
    register8_t USICR;        /* USI Control Register */
    register8_t USISR;        /* USI Status Register */
    register8_t USIDR;        /* USI Data Register */
} USI_t;


/* Start Condition Interrupt Flag */
typedef enum USI_USISIF_enum
{
    USI_USISIF_CLEAR_gc = (0x00), /* Start Condition Interrupt Flag - CLEAR */
    USI_USISIF_SET_gc   = (0x80), /* Start Condition Interrupt Flag - SET */
} USI_USISIF_t;

/* Counter Overflow Interrupt Flag */
typedef enum USI_USIOIF_enum
{
    USI_USIOIF_CLEAR_gc = (0x00), /* Counter Overflow Interrupt Flag - CLEAR */
    USI_USIOIF_SET_gc   = (0x40), /* Counter Overflow Interrupt Flag - SET */
} USI_USIOIF_t;

/* Stop Condition Flag */
typedef enum USI_USIPF_enum
{
    USI_USIPF_CLEAR_gc = (0x00), /* Stop Condition Flag - CLEAR */
    USI_USIPF_SET_gc   = (0x20), /* Stop Condition Flag - SET */
} USI_USIPF_t;

/* Data Output Collision */
typedef enum USI_USIDC_enum
{
    USI_USIDC_CLEAR_gc = (0x00), /* Data Output Collision - CLEAR */
    USI_USIDC_SET_gc   = (0x10), /* Data Output Collision - SET */
} USI_USIDC_t;

/* USI Counter Value Bits */
#define USI_USISR_USICNT_gc(x) (x & 0x0F)

/* Start Condition Interrupt Enable */
typedef enum USI_USISIE_enum
{
    USI_USISIE_CLEAR_gc = (0x00), /* Start Condition Interrupt Enable - CLEAR */
    USI_USISIE_SET_gc   = (0x80), /* Start Condition Interrupt Enable - SET */
} USI_USISIE_t;

/* Counter Overflow Interrupt Enable */
typedef enum USI_USIOIE_enum
{
    USI_USIOIE_CLEAR_gc = (0x00), /* Counter Overflow Interrupt Enable - CLEAR */
    USI_USIOIE_SET_gc   = (0x40), /* Counter Overflow Interrupt Enable - SET */
} USI_USIOIE_t;

/* USI Wire Mode Bits */
typedef enum USI_USIWM_enum
{
    USI_USIWM_VAL_0x00_gc = (0x00<<4), /* Normal Operation */
    USI_USIWM_VAL_0x01_gc = (0x01<<4), /* Three-Wire Mode */
    USI_USIWM_VAL_0x02_gc = (0x02<<4), /* Two-Wire Mode */
    USI_USIWM_VAL_0x03_gc = (0x03<<4), /* Two-Wire Mode Held Low */
} USI_USIWM_t;

/* USI Clock Source Select Bits */
#define USI_USICR_USICS_gc(x) ((x<<2) & 0x0C)

/* Clock Strobe */
typedef enum USI_USICLK_enum
{
    USI_USICLK_CLEAR_gc = (0x00), /* Clock Strobe - CLEAR */
    USI_USICLK_SET_gc   = (0x02), /* Clock Strobe - SET */
} USI_USICLK_t;

/* Toggle Clock Port Pin */
typedef enum USI_USITC_enum
{
    USI_USITC_CLEAR_gc = (0x00), /* Toggle Clock Port Pin - CLEAR */
    USI_USITC_SET_gc   = (0x01), /* Toggle Clock Port Pin - SET */
} USI_USITC_t;

/*
--------------------------------------------------------------------------------
EXINT - External Interrupts
--------------------------------------------------------------------------------
*/

typedef struct EXINT_struct
{
    register8_t rsv_0x00[36]; /* RESERVED REGISTER BLOCK */
    register8_t PCMSK1;       /* Pin Change Interrupt Mask Register 1 */
    register8_t PCMSK2;       /* Pin Change Interrupt Mask Register 2 */
    register8_t rsv_0x26[26]; /* RESERVED REGISTER BLOCK */
    register8_t PCMSK0;       /* Pin Change Interrupt Mask Register 0 */
    register8_t rsv_0x41[25]; /* RESERVED REGISTER BLOCK */
    register8_t GIFR;         /* General Interrupt Flag Register */
    register8_t GIMSK;        /* General Interrupt Mask Register */
} EXINT_t;


/* External Interrupt Request 1 Enable */
#define EXINT_GIMSK_INT_gc(x) ((x<<6) & 0xC0)

/* General Interrupt Mask Register-PCIE */
typedef enum EXINT_PCIE_enum
{
    EXINT_PCIE_CLEAR_gc = (0x00), /* General Interrupt Mask Register-PCIE - CLEAR */
    EXINT_PCIE_SET_gc   = (0x20), /* General Interrupt Mask Register-PCIE - SET */
} EXINT_PCIE_t;

/* External Interrupt Flags */
#define EXINT_GIFR_INTF_gc(x) ((x<<6) & 0xC0)

/* Pin Change Interrupt Flags */
#define EXINT_GIFR_PCIF_gc(x) ((x<<3) & 0x38)

/*
--------------------------------------------------------------------------------
CPU - CPU Registers
--------------------------------------------------------------------------------
*/

typedef struct CPU_struct
{
    register8_t rsv_0x00[38]; /* RESERVED REGISTER BLOCK */
    register8_t PRR;          /* Power reduction register */
    register8_t BODCR;        /* BOD control register */
    register8_t rsv_0x28[11]; /* RESERVED REGISTER BLOCK */
    register8_t GPIOR0;       /* General Purpose I/O Register 0 */
    register8_t GPIOR1;       /* General Purpose I/O Register 1 */
    register8_t GPIOR2;       /* General Purpose I/O Register 2 */
    register8_t rsv_0x36[13]; /* RESERVED REGISTER BLOCK */
    register8_t GTCCR;        /* General Timer Counter Control Register */
    register8_t rsv_0x44[2];  /* RESERVED REGISTER BLOCK */
    register8_t CLKPR;        /* Clock Prescale Register */
    register8_t rsv_0x47[10]; /* RESERVED REGISTER BLOCK */
    register8_t OSCCAL;       /* Oscillator Calibration Register */
    register8_t rsv_0x52[2];  /* RESERVED REGISTER BLOCK */
    register8_t MCUSR;        /* MCU Status register */
    register8_t MCUCR;        /* MCU Control Register */
    register8_t rsv_0x56;     /* RESERVED REGISTER */
    register8_t SPMCSR;       /* Store Program Memory Control and Status register */
    register8_t rsv_0x58[5];  /* RESERVED REGISTER BLOCK */
    _REGISTER16 (SP);         /* Stack Pointer  */
    register8_t rsv_0x5E;     /* RESERVED REGISTER */
    register8_t SREG;         /* Status Register */
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

/* Clear Temporary Page Buffer */
typedef enum CPU_CTPB_enum
{
    CPU_CTPB_CLEAR_gc = (0x00), /* Clear Temporary Page Buffer - CLEAR */
    CPU_CTPB_SET_gc   = (0x10), /* Clear Temporary Page Buffer - SET */
} CPU_CTPB_t;

/* Read Fuse and Lock Bits */
typedef enum CPU_RFLB_enum
{
    CPU_RFLB_CLEAR_gc = (0x00), /* Read Fuse and Lock Bits - CLEAR */
    CPU_RFLB_SET_gc   = (0x08), /* Read Fuse and Lock Bits - SET */
} CPU_RFLB_t;

/* Page Write */
typedef enum CPU_PGWRT_enum
{
    CPU_PGWRT_CLEAR_gc = (0x00), /* Page Write - CLEAR */
    CPU_PGWRT_SET_gc   = (0x04), /* Page Write - SET */
} CPU_PGWRT_t;

/* Page Erase */
typedef enum CPU_PGERS_enum
{
    CPU_PGERS_CLEAR_gc = (0x00), /* Page Erase - CLEAR */
    CPU_PGERS_SET_gc   = (0x02), /* Page Erase - SET */
} CPU_PGERS_t;

/* Store Program Memory Enable */
typedef enum CPU_SPMEN_enum
{
    CPU_SPMEN_CLEAR_gc = (0x00), /* Store Program Memory Enable - CLEAR */
    CPU_SPMEN_SET_gc   = (0x01), /* Store Program Memory Enable - SET */
} CPU_SPMEN_t;

/* Pull-up Disable */
typedef enum CPU_PUD_enum
{
    CPU_PUD_CLEAR_gc = (0x00), /* Pull-up Disable - CLEAR */
    CPU_PUD_SET_gc   = (0x80), /* Pull-up Disable - SET */
} CPU_PUD_t;

/* Sleep Mode Select Bits */
typedef enum CPU_SM_enum
{
    CPU_SM_IDLE_gc   = (0x00<<4), /* Idle */
    CPU_SM_PDOWN2_gc = (0x01<<4), /* Power Down */
    CPU_SM_STDBY_gc  = (0x04<<4), /* Standby */
    CPU_SM_PDOWN_gc  = (0x05<<4), /* Power Down  */
} CPU_SM_t;

/* Sleep Enable */
typedef enum CPU_SE_enum
{
    CPU_SE_CLEAR_gc = (0x00), /* Sleep Enable - CLEAR */
    CPU_SE_SET_gc   = (0x20), /* Sleep Enable - SET */
} CPU_SE_t;

/* Interrupt Sense Control 1 bits */
typedef enum CPU_ISC1_enum
{
    CPU_ISC1_VAL_0x00_gc = (0x00<<2), /* Low Level of INTX */
    CPU_ISC1_VAL_0x01_gc = (0x01<<2), /* Any Logical Change in INTX */
    CPU_ISC1_VAL_0x02_gc = (0x02<<2), /* Falling Edge of INTX */
    CPU_ISC1_VAL_0x03_gc = (0x03<<2), /* Rising Edge of INTX */
} CPU_ISC1_t;

/* Interrupt Sense Control 0 bits */
typedef enum CPU_ISC0_enum
{
    CPU_ISC0_VAL_0x00_gc = (0x00), /* Low Level of INTX */
    CPU_ISC0_VAL_0x01_gc = (0x01), /* Any Logical Change in INTX */
    CPU_ISC0_VAL_0x02_gc = (0x02), /* Falling Edge of INTX */
    CPU_ISC0_VAL_0x03_gc = (0x03), /* Rising Edge of INTX */
} CPU_ISC0_t;

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

/* Power-On Reset Flag */
typedef enum CPU_PORF_enum
{
    CPU_PORF_CLEAR_gc = (0x00), /* Power-On Reset Flag - CLEAR */
    CPU_PORF_SET_gc   = (0x01), /* Power-On Reset Flag - SET */
} CPU_PORF_t;

/* Clock Prescaler Change Enable */
typedef enum CPU_CLKPCE_enum
{
    CPU_CLKPCE_CLEAR_gc = (0x00), /* Clock Prescaler Change Enable - CLEAR */
    CPU_CLKPCE_SET_gc   = (0x80), /* Clock Prescaler Change Enable - SET */
} CPU_CLKPCE_t;

/* Clock Prescaler Select Bits */
typedef enum CPU_CLKPS_enum
{
    CPU_CLKPS_VAL_0x00_gc = (0x00), /* 1 */
    CPU_CLKPS_VAL_0x01_gc = (0x01), /* 2 */
    CPU_CLKPS_VAL_0x02_gc = (0x02), /* 4 */
    CPU_CLKPS_VAL_0x03_gc = (0x03), /* 8 */
    CPU_CLKPS_VAL_0x04_gc = (0x04), /* 16 */
    CPU_CLKPS_VAL_0x05_gc = (0x05), /* 32 */
    CPU_CLKPS_VAL_0x06_gc = (0x06), /* 64 */
    CPU_CLKPS_VAL_0x07_gc = (0x07), /* 128 */
    CPU_CLKPS_VAL_0x08_gc = (0x08), /* 256 */
} CPU_CLKPS_t;

/* General Timer Counter Control Register-PSR10 */
typedef enum CPU_PSR10_enum
{
    CPU_PSR10_CLEAR_gc = (0x00), /* General Timer Counter Control Register-PSR10 - CLEAR */
    CPU_PSR10_SET_gc   = (0x01), /* General Timer Counter Control Register-PSR10 - SET */
} CPU_PSR10_t;

/* Power reduction register-PRTIM */
#define CPU_PRR_PRTIM_gc(x) ((x<<2) & 0x0C)

/* Power reduction register-PRUSI */
typedef enum CPU_PRUSI_enum
{
    CPU_PRUSI_CLEAR_gc = (0x00), /* Power reduction register-PRUSI - CLEAR */
    CPU_PRUSI_SET_gc   = (0x02), /* Power reduction register-PRUSI - SET */
} CPU_PRUSI_t;

/* Power reduction register-PRUSART */
typedef enum CPU_PRUSART_enum
{
    CPU_PRUSART_CLEAR_gc = (0x00), /* Power reduction register-PRUSART - CLEAR */
    CPU_PRUSART_SET_gc   = (0x01), /* Power reduction register-PRUSART - SET */
} CPU_PRUSART_t;

/* BOD control register-BPDS */
typedef enum CPU_BPDS_enum
{
    CPU_BPDS_CLEAR_gc = (0x00), /* BOD control register-BPDS - CLEAR */
    CPU_BPDS_SET_gc   = (0x02), /* BOD control register-BPDS - SET */
} CPU_BPDS_t;

/* BOD control register-BPDSE */
typedef enum CPU_BPDSE_enum
{
    CPU_BPDSE_CLEAR_gc = (0x00), /* BOD control register-BPDSE - CLEAR */
    CPU_BPDSE_SET_gc   = (0x01), /* BOD control register-BPDSE - SET */
} CPU_BPDSE_t;
/*
================================================================================
IO Module Instances. Mapped to memory.
================================================================================
*/

#define PORTB   (*(PORTB_t *) 0x0000)   /* I/O Port */
#define PORTD   (*(PORTD_t *) 0x0000)   /* I/O Port */
#define PORTA   (*(PORTA_t *) 0x0000)   /* I/O Port */
#define TC0     (*(TC0_t *) 0x0000)     /* Timer/Counter, 8-bit */
#define TC1     (*(TC1_t *) 0x0000)     /* Timer/Counter, 16-bit */
#define WDT     (*(WDT_t *) 0x0000)     /* Watchdog Timer */
#define USART   (*(USART_t *) 0x0000)   /* USART */
#define AC      (*(AC_t *) 0x0000)      /* Analog Comparator */
#define EEPROM  (*(EEPROM_t *) 0x0000)  /* EEPROM */
#define USI     (*(USI_t *) 0x0000)     /* Universal Serial Interface */
#define EXINT   (*(EXINT_t *) 0x0000)   /* External Interrupts */
#define CPU     (*(CPU_t *) 0x0000)     /* CPU Registers */
#define FUSE    (*(FUSE_t *) 0x0000)    /* Fuses */
#define LOCKBIT (*(LOCKBIT_t *) 0x0000) /* Lockbits */
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


/* Self Programming enable */
#define FUSE_SELFPRGEN_CLEAR_gc (0x00) /* Self Programming enable - CLEAR */
#define FUSE_SELFPRGEN_SET_gc   (0x01) /* Self Programming enable - SET */


/* Debug Wire enable */
#define FUSE_DWEN_CLEAR_gc (0x00) /* Debug Wire enable - CLEAR */
#define FUSE_DWEN_SET_gc   (0x80) /* Debug Wire enable - SET */


/* Preserve EEPROM through the Chip Erase cycle */
#define FUSE_EESAVE_CLEAR_gc (0x00) /* Preserve EEPROM through the Chip Erase cycle - CLEAR */
#define FUSE_EESAVE_SET_gc   (0x40) /* Preserve EEPROM through the Chip Erase cycle - SET */


/* Serial program downloading (SPI) enable */
#define FUSE_SPIEN_CLEAR_gc (0x00) /* Serial program downloading (SPI) enable - CLEAR */
#define FUSE_SPIEN_SET_gc   (0x20) /* Serial program downloading (SPI) enable - SET */


/* Watch-dog Timer always on */
#define FUSE_WDTON_CLEAR_gc (0x00) /* Watch-dog Timer always on - CLEAR */
#define FUSE_WDTON_SET_gc   (0x10) /* Watch-dog Timer always on - SET */


/* Brown-out Detector trigger level */
#define FUSE_BODLEVEL_4V3_gc      (0x04<<1) /* Brown-out detection at VCC=4.3 V */
#define FUSE_BODLEVEL_2V7_gc      (0x05<<1) /* Brown-out detection at VCC=2.7 V */
#define FUSE_BODLEVEL_1V8_gc      (0x06<<1) /* Brown-out detection at VCC=1.8 V */
#define FUSE_BODLEVEL_DISABLED_gc (0x07<<1) /* Brown-out detection disabled */


/* External reset disable */
#define FUSE_RSTDISBL_CLEAR_gc (0x00) /* External reset disable - CLEAR */
#define FUSE_RSTDISBL_SET_gc   (0x01) /* External reset disable - SET */


/* Divide clock by 8 internally */
#define FUSE_CKDIV8_CLEAR_gc (0x00) /* Divide clock by 8 internally - CLEAR */
#define FUSE_CKDIV8_SET_gc   (0x80) /* Divide clock by 8 internally - SET */


/* Clock output on PORTD2 */
#define FUSE_CKOUT_CLEAR_gc (0x00) /* Clock output on PORTD2 - CLEAR */
#define FUSE_CKOUT_SET_gc   (0x40) /* Clock output on PORTD2 - SET */


/* Select Clock Source */
#define FUSE_SUT_CKSEL_EXTCLK_14CK_0MS_gc               (0x00) /* Ext. Clock; Start-up time: 14 CK + 0   ms */
#define FUSE_SUT_CKSEL_EXTCLK_14CK_4MS1_gc              (0x10) /* Ext. Clock; Start-up time: 14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTCLK_14CK_65MS_gc              (0x20) /* Ext. Clock; Start-up time: 14 CK + 65  ms */
#define FUSE_SUT_CKSEL_INTRCOSC_4MHZ_14CK_0MS_gc        (0x02) /* Int. RC Osc. 4 MHz; Start-up time: 14 CK + 0   ms */
#define FUSE_SUT_CKSEL_INTRCOSC_4MHZ_14CK_4MS1_gc       (0x12) /* Int. RC Osc. 4 MHz; Start-up time: 14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_INTRCOSC_4MHZ_14CK_65MS_gc       (0x22) /* Int. RC Osc. 4 MHz; Start-up time: 14 CK + 65  ms */
#define FUSE_SUT_CKSEL_INTRCOSC_8MHZ_14CK_0MS_gc        (0x04) /* Int. RC Osc. 8 MHz; Start-up time: 14 CK + 0   ms */
#define FUSE_SUT_CKSEL_INTRCOSC_8MHZ_14CK_4MS1_gc       (0x14) /* Int. RC Osc. 8 MHz; Start-up time: 14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_INTRCOSC_8MHZ_14CK_65MS_gc       (0x24) /* Int. RC Osc. 8 MHz; Start-up time: 14 CK + 65  ms */
#define FUSE_SUT_CKSEL_INTRCOSC_128KHZ_14CK_0MS_gc      (0x06) /* Int. RC Osc. 128 kHz; Start-up time: 14 CK + 0 ms */
#define FUSE_SUT_CKSEL_INTRCOSC_128KHZ_14CK_4MS_gc      (0x16) /* Int. RC Osc. 128 kHz; Start-up time: 14 CK + 4 ms */
#define FUSE_SUT_CKSEL_INTRCOSC_128KHZ_14CK_64MS_gc     (0x26) /* Int. RC Osc. 128 kHz; Start-up time: 14 CK + 64 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_14CK_4MS1_gc (0x08) /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time: 14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_14CK_65MS_gc (0x18) /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time: 14 CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_14CK_0MS_gc  (0x28) /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time: 14 CK + 0 ms */
/* WARNING: FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_14CK_4MS1_gc ALREADY DEFINED as '(0x08)' NOT '(0x38)' */
/* WARNING: FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_14CK_65MS_gc ALREADY DEFINED as '(0x18)' NOT '(0x09)' */
/* WARNING: FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_14CK_0MS_gc ALREADY DEFINED as '(0x28)' NOT '(0x19)' */
/* WARNING: FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_14CK_4MS1_gc ALREADY DEFINED as '(0x08)' NOT '(0x29)' */
/* WARNING: FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_14CK_65MS_gc ALREADY DEFINED as '(0x18)' NOT '(0x39)' */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_14CK_4MS1_gc  (0x0A) /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time: 14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_14CK_65MS_gc  (0x1A) /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time: 14 CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_14CK_0MS_gc   (0x2A) /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time: 14 CK + 0 ms */
/* WARNING: FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_14CK_4MS1_gc ALREADY DEFINED as '(0x0A)' NOT '(0x3A)' */
/* WARNING: FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_14CK_65MS_gc ALREADY DEFINED as '(0x1A)' NOT '(0x0B)' */
/* WARNING: FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_14CK_0MS_gc ALREADY DEFINED as '(0x2A)' NOT '(0x1B)' */
/* WARNING: FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_14CK_4MS1_gc ALREADY DEFINED as '(0x0A)' NOT '(0x2B)' */
/* WARNING: FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_14CK_65MS_gc ALREADY DEFINED as '(0x1A)' NOT '(0x3B)' */
#define FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_14CK_4MS1_gc   (0x0C) /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time: 14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_14CK_65MS_gc   (0x1C) /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time: 14 CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_14CK_0MS_gc    (0x2C) /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time: 14 CK + 0 ms */
/* WARNING: FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_14CK_4MS1_gc ALREADY DEFINED as '(0x0C)' NOT '(0x3C)' */
/* WARNING: FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_14CK_65MS_gc ALREADY DEFINED as '(0x1C)' NOT '(0x0D)' */
/* WARNING: FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_14CK_0MS_gc ALREADY DEFINED as '(0x2C)' NOT '(0x1D)' */
/* WARNING: FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_14CK_4MS1_gc ALREADY DEFINED as '(0x0C)' NOT '(0x2D)' */
/* WARNING: FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_14CK_65MS_gc ALREADY DEFINED as '(0x1C)' NOT '(0x3D)' */
#define FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_14CK_4MS1_gc     (0x0E) /* Ext. Crystal Osc. 8.0-    MHz; Start-up time: 14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_14CK_65MS_gc     (0x1E) /* Ext. Crystal Osc. 8.0-    MHz; Start-up time: 14 CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_14CK_0MS_gc      (0x2E) /* Ext. Crystal Osc. 8.0-    MHz; Start-up time: 14 CK + 0 ms */
/* WARNING: FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_14CK_4MS1_gc ALREADY DEFINED as '(0x0E)' NOT '(0x3E)' */
/* WARNING: FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_14CK_65MS_gc ALREADY DEFINED as '(0x1E)' NOT '(0x0F)' */
/* WARNING: FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_14CK_0MS_gc ALREADY DEFINED as '(0x2E)' NOT '(0x1F)' */
/* WARNING: FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_14CK_4MS1_gc ALREADY DEFINED as '(0x0E)' NOT '(0x2F)' */
/* WARNING: FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_14CK_65MS_gc ALREADY DEFINED as '(0x1E)' NOT '(0x3F)' */


/*
--------------------------------------------------------------------------------
LOCKBIT - Lockbits
--------------------------------------------------------------------------------
*/


/* Memory Lock */
#define LOCKBIT_LB_PROG_VER_DISABLED_gc (0x00) /* Further programming and verification disabled */
#define LOCKBIT_LB_PROG_DISABLED_gc     (0x02) /* Further programming disabled */
#define LOCKBIT_LB_NO_LOCK_gc           (0x03) /* No memory lock features enabled */


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


/* Timer/Counter0 Output Compare Match B Interrupt Enable */
#define TC0_OCIE0B_CLEAR_gc (0x00) /* Timer/Counter0 Output Compare Match B Interrupt Enable - CLEAR */
#define TC0_OCIE0B_SET_gc   (0x04) /* Timer/Counter0 Output Compare Match B Interrupt Enable - SET */


/* Timer/Counter0 Overflow Interrupt Enable */
#define TC0_TOIE0_CLEAR_gc (0x00) /* Timer/Counter0 Overflow Interrupt Enable - CLEAR */
#define TC0_TOIE0_SET_gc   (0x02) /* Timer/Counter0 Overflow Interrupt Enable - SET */


/* Timer/Counter0 Output Compare Match A Interrupt Enable */
#define TC0_OCIE0A_CLEAR_gc (0x00) /* Timer/Counter0 Output Compare Match A Interrupt Enable - CLEAR */
#define TC0_OCIE0A_SET_gc   (0x01) /* Timer/Counter0 Output Compare Match A Interrupt Enable - SET */


/* Timer/Counter0 Output Compare Flag 0B */
#define TC0_OCF0B_CLEAR_gc (0x00) /* Timer/Counter0 Output Compare Flag 0B - CLEAR */
#define TC0_OCF0B_SET_gc   (0x04) /* Timer/Counter0 Output Compare Flag 0B - SET */


/* Timer/Counter0 Overflow Flag */
#define TC0_TOV0_CLEAR_gc (0x00) /* Timer/Counter0 Overflow Flag - CLEAR */
#define TC0_TOV0_SET_gc   (0x02) /* Timer/Counter0 Overflow Flag - SET */


/* Timer/Counter0 Output Compare Flag 0A */
#define TC0_OCF0A_CLEAR_gc (0x00) /* Timer/Counter0 Output Compare Flag 0A - CLEAR */
#define TC0_OCF0A_SET_gc   (0x01) /* Timer/Counter0 Output Compare Flag 0A - SET */


/* Compare Match Output A Mode */
#define TC0_TCCR0A_COM0A_gc(x) ((x<<6) & 0xC0)

/* Compare Match Output B Mode */
#define TC0_TCCR0A_COM0B_gc(x) ((x<<4) & 0x30)

/* Waveform Generation Mode */
#define TC0_TCCR0A_WGM0_gc(x) (x & 0x03)

/* Force Output Compare B */
#define TC0_FOC0A_CLEAR_gc (0x00) /* Force Output Compare B - CLEAR */
#define TC0_FOC0A_SET_gc   (0x80) /* Force Output Compare B - SET */


/* Force Output Compare B */
#define TC0_FOC0B_CLEAR_gc (0x00) /* Force Output Compare B - CLEAR */
#define TC0_FOC0B_SET_gc   (0x40) /* Force Output Compare B - SET */


/* Timer/Counter Control Register B-WGM02 */
#define TC0_WGM02_CLEAR_gc (0x00) /* Timer/Counter Control Register B-WGM02 - CLEAR */
#define TC0_WGM02_SET_gc   (0x08) /* Timer/Counter Control Register B-WGM02 - SET */


/* Clock Select */
#define TC0_CS0_VAL_0x00_gc (0x00) /* No Clock Source (Stopped) */
#define TC0_CS0_VAL_0x01_gc (0x01) /* Running, No Prescaling */
#define TC0_CS0_VAL_0x02_gc (0x02) /* Running, CLK/8 */
#define TC0_CS0_VAL_0x03_gc (0x03) /* Running, CLK/64 */
#define TC0_CS0_VAL_0x04_gc (0x04) /* Running, CLK/256 */
#define TC0_CS0_VAL_0x05_gc (0x05) /* Running, CLK/1024 */
#define TC0_CS0_VAL_0x06_gc (0x06) /* Running, ExtClk Tx Falling Edge */
#define TC0_CS0_VAL_0x07_gc (0x07) /* Running, ExtClk Tx Rising Edge */


/*
--------------------------------------------------------------------------------
TC16 - Timer/Counter, 16-bit
--------------------------------------------------------------------------------
*/


/* Timer/Counter1 Overflow Interrupt Enable */
#define TC1_TOIE1_CLEAR_gc (0x00) /* Timer/Counter1 Overflow Interrupt Enable - CLEAR */
#define TC1_TOIE1_SET_gc   (0x80) /* Timer/Counter1 Overflow Interrupt Enable - SET */


/* Timer/Counter1 Output CompareA Match Interrupt Enable */
#define TC1_OCIE1A_CLEAR_gc (0x00) /* Timer/Counter1 Output CompareA Match Interrupt Enable - CLEAR */
#define TC1_OCIE1A_SET_gc   (0x40) /* Timer/Counter1 Output CompareA Match Interrupt Enable - SET */


/* Timer/Counter1 Output CompareB Match Interrupt Enable */
#define TC1_OCIE1B_CLEAR_gc (0x00) /* Timer/Counter1 Output CompareB Match Interrupt Enable - CLEAR */
#define TC1_OCIE1B_SET_gc   (0x20) /* Timer/Counter1 Output CompareB Match Interrupt Enable - SET */


/* Timer/Counter1 Input Capture Interrupt Enable */
#define TC1_ICIE1_CLEAR_gc (0x00) /* Timer/Counter1 Input Capture Interrupt Enable - CLEAR */
#define TC1_ICIE1_SET_gc   (0x08) /* Timer/Counter1 Input Capture Interrupt Enable - SET */


/* Timer/Counter1 Overflow Flag */
#define TC1_TOV1_CLEAR_gc (0x00) /* Timer/Counter1 Overflow Flag - CLEAR */
#define TC1_TOV1_SET_gc   (0x80) /* Timer/Counter1 Overflow Flag - SET */


/* Output Compare Flag 1A */
#define TC1_OCF1A_CLEAR_gc (0x00) /* Output Compare Flag 1A - CLEAR */
#define TC1_OCF1A_SET_gc   (0x40) /* Output Compare Flag 1A - SET */


/* Output Compare Flag 1B */
#define TC1_OCF1B_CLEAR_gc (0x00) /* Output Compare Flag 1B - CLEAR */
#define TC1_OCF1B_SET_gc   (0x20) /* Output Compare Flag 1B - SET */


/* Input Capture Flag 1 */
#define TC1_ICF1_CLEAR_gc (0x00) /* Input Capture Flag 1 - CLEAR */
#define TC1_ICF1_SET_gc   (0x08) /* Input Capture Flag 1 - SET */


/* Compare Output Mode 1A, bits */
#define TC1_TCCR1A_COM1A_gc(x) ((x<<6) & 0xC0)

/* Compare Output Mode 1B, bits */
#define TC1_TCCR1A_COM1B_gc(x) ((x<<4) & 0x30)

/* Pulse Width Modulator Select Bits */
#define TC1_TCCR1A_WGM1_gc(x) (x & 0x03)

/* Input Capture 1 Noise Canceler */
#define TC1_ICNC1_CLEAR_gc (0x00) /* Input Capture 1 Noise Canceler - CLEAR */
#define TC1_ICNC1_SET_gc   (0x80) /* Input Capture 1 Noise Canceler - SET */


/* Input Capture 1 Edge Select */
#define TC1_ICES1_CLEAR_gc (0x00) /* Input Capture 1 Edge Select - CLEAR */
#define TC1_ICES1_SET_gc   (0x40) /* Input Capture 1 Edge Select - SET */


/* Waveform Generation Mode Bits */
#define TC1_TCCR1B_WGM1_gc(x) ((x<<3) & 0x18)

/* Clock Select1 bits */
#define TC1_CS1_VAL_0x00_gc (0x00) /* No Clock Source (Stopped) */
#define TC1_CS1_VAL_0x01_gc (0x01) /* Running, No Prescaling */
#define TC1_CS1_VAL_0x02_gc (0x02) /* Running, CLK/8 */
#define TC1_CS1_VAL_0x03_gc (0x03) /* Running, CLK/64 */
#define TC1_CS1_VAL_0x04_gc (0x04) /* Running, CLK/256 */
#define TC1_CS1_VAL_0x05_gc (0x05) /* Running, CLK/1024 */
#define TC1_CS1_VAL_0x06_gc (0x06) /* Running, ExtClk Tx Falling Edge */
#define TC1_CS1_VAL_0x07_gc (0x07) /* Running, ExtClk Tx Rising Edge */


/* Force Output Compare for Channel A */
#define TC1_FOC1A_CLEAR_gc (0x00) /* Force Output Compare for Channel A - CLEAR */
#define TC1_FOC1A_SET_gc   (0x80) /* Force Output Compare for Channel A - SET */


/* Force Output Compare for Channel B */
#define TC1_FOC1B_CLEAR_gc (0x00) /* Force Output Compare for Channel B - CLEAR */
#define TC1_FOC1B_SET_gc   (0x40) /* Force Output Compare for Channel B - SET */


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
USART - USART
--------------------------------------------------------------------------------
*/


/* USART Receive Complete */
#define USART_RXC_CLEAR_gc (0x00) /* USART Receive Complete - CLEAR */
#define USART_RXC_SET_gc   (0x80) /* USART Receive Complete - SET */


/* USART Transmitt Complete */
#define USART_TXC_CLEAR_gc (0x00) /* USART Transmitt Complete - CLEAR */
#define USART_TXC_SET_gc   (0x40) /* USART Transmitt Complete - SET */


/* USART Data Register Empty */
#define USART_UDRE_CLEAR_gc (0x00) /* USART Data Register Empty - CLEAR */
#define USART_UDRE_SET_gc   (0x20) /* USART Data Register Empty - SET */


/* Framing Error */
#define USART_FE_CLEAR_gc (0x00) /* Framing Error - CLEAR */
#define USART_FE_SET_gc   (0x10) /* Framing Error - SET */


/* Data overRun */
#define USART_DOR_CLEAR_gc (0x00) /* Data overRun - CLEAR */
#define USART_DOR_SET_gc   (0x08) /* Data overRun - SET */


/* USART Parity Error */
#define USART_UPE_CLEAR_gc (0x00) /* USART Parity Error - CLEAR */
#define USART_UPE_SET_gc   (0x04) /* USART Parity Error - SET */


/* Double the USART Transmission Speed */
#define USART_U2X_CLEAR_gc (0x00) /* Double the USART Transmission Speed - CLEAR */
#define USART_U2X_SET_gc   (0x02) /* Double the USART Transmission Speed - SET */


/* Multi-processor Communication Mode */
#define USART_MPCM_CLEAR_gc (0x00) /* Multi-processor Communication Mode - CLEAR */
#define USART_MPCM_SET_gc   (0x01) /* Multi-processor Communication Mode - SET */


/* RX Complete Interrupt Enable */
#define USART_RXCIE_CLEAR_gc (0x00) /* RX Complete Interrupt Enable - CLEAR */
#define USART_RXCIE_SET_gc   (0x80) /* RX Complete Interrupt Enable - SET */


/* TX Complete Interrupt Enable */
#define USART_TXCIE_CLEAR_gc (0x00) /* TX Complete Interrupt Enable - CLEAR */
#define USART_TXCIE_SET_gc   (0x40) /* TX Complete Interrupt Enable - SET */


/* USART Data register Empty Interrupt Enable */
#define USART_UDRIE_CLEAR_gc (0x00) /* USART Data register Empty Interrupt Enable - CLEAR */
#define USART_UDRIE_SET_gc   (0x20) /* USART Data register Empty Interrupt Enable - SET */


/* Receiver Enable */
#define USART_RXEN_CLEAR_gc (0x00) /* Receiver Enable - CLEAR */
#define USART_RXEN_SET_gc   (0x10) /* Receiver Enable - SET */


/* Transmitter Enable */
#define USART_TXEN_CLEAR_gc (0x00) /* Transmitter Enable - CLEAR */
#define USART_TXEN_SET_gc   (0x08) /* Transmitter Enable - SET */


/* Character Size */
#define USART_UCSZ2_CLEAR_gc (0x00) /* Character Size - CLEAR */
#define USART_UCSZ2_SET_gc   (0x04) /* Character Size - SET */


/* Receive Data Bit 8 */
#define USART_RXB8_CLEAR_gc (0x00) /* Receive Data Bit 8 - CLEAR */
#define USART_RXB8_SET_gc   (0x02) /* Receive Data Bit 8 - SET */


/* Transmit Data Bit 8 */
#define USART_TXB8_CLEAR_gc (0x00) /* Transmit Data Bit 8 - CLEAR */
#define USART_TXB8_SET_gc   (0x01) /* Transmit Data Bit 8 - SET */


/* USART Mode Select */
#define USART_UMSEL_VAL_0x00_gc (0x00<<6) /* Asynchronous Operation */
#define USART_UMSEL_VAL_0x01_gc (0x01<<6) /* Synchronous Operation */
#define USART_UMSEL_VAL_0x03_gc (0x03<<6) /* Master SPI */


/* Parity Mode Bits */
#define USART_UPM_VAL_0x00_gc (0x00<<4) /* Disabled */
#define USART_UPM_VAL_0x01_gc (0x01<<4) /* Reserved */
#define USART_UPM_VAL_0x02_gc (0x02<<4) /* Enabled, Even Parity */
#define USART_UPM_VAL_0x03_gc (0x03<<4) /* Enabled, Odd Parity */


/* Stop Bit Select */
#define USART_USBS_VAL_0x00_gc (0x00<<3) /* 1-bit */
#define USART_USBS_VAL_0x01_gc (0x01<<3) /* 2-bit */


/* Character Size Bits */
#define USART_UCSRC_UCSZ_gc(x) ((x<<1) & 0x06)

/* Clock Polarity */
#define USART_UCPOL_CLEAR_gc (0x00) /* Clock Polarity - CLEAR */
#define USART_UCPOL_SET_gc   (0x01) /* Clock Polarity - SET */


/*
--------------------------------------------------------------------------------
AC - Analog Comparator
--------------------------------------------------------------------------------
*/


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


/* Analog Comparator Control And Status Register-ACIC */
#define AC_ACIC_CLEAR_gc (0x00) /* Analog Comparator Control And Status Register-ACIC - CLEAR */
#define AC_ACIC_SET_gc   (0x04) /* Analog Comparator Control And Status Register-ACIC - SET */


/* Analog Comparator Interrupt Mode Select bits */
#define AC_ACIS_VAL_0x00_gc (0x00) /* Interrupt on Toggle */
#define AC_ACIS_VAL_0x01_gc (0x01) /* Reserved */
#define AC_ACIS_VAL_0x02_gc (0x02) /* Interrupt on Falling Edge */
#define AC_ACIS_VAL_0x03_gc (0x03) /* Interrupt on Rising Edge */


/*
--------------------------------------------------------------------------------
EEPROM - EEPROM
--------------------------------------------------------------------------------
*/


/* EEPROM Control Register-EEPM */
#define EEPROM_EEPM_VAL_0x00_gc (0x00<<4) /* Erase and Write in one operation */
#define EEPROM_EEPM_VAL_0x01_gc (0x01<<4) /* Erase Only */
#define EEPROM_EEPM_VAL_0x02_gc (0x02<<4) /* Write Only */


/* EEProm Ready Interrupt Enable */
#define EEPROM_EERIE_CLEAR_gc (0x00) /* EEProm Ready Interrupt Enable - CLEAR */
#define EEPROM_EERIE_SET_gc   (0x08) /* EEProm Ready Interrupt Enable - SET */


/* EEPROM Master Write Enable */
#define EEPROM_EEMPE_CLEAR_gc (0x00) /* EEPROM Master Write Enable - CLEAR */
#define EEPROM_EEMPE_SET_gc   (0x04) /* EEPROM Master Write Enable - SET */


/* EEPROM Write Enable */
#define EEPROM_EEPE_CLEAR_gc (0x00) /* EEPROM Write Enable - CLEAR */
#define EEPROM_EEPE_SET_gc   (0x02) /* EEPROM Write Enable - SET */


/* EEPROM Read Enable */
#define EEPROM_EERE_CLEAR_gc (0x00) /* EEPROM Read Enable - CLEAR */
#define EEPROM_EERE_SET_gc   (0x01) /* EEPROM Read Enable - SET */


/*
--------------------------------------------------------------------------------
USI - Universal Serial Interface
--------------------------------------------------------------------------------
*/


/* Start Condition Interrupt Flag */
#define USI_USISIF_CLEAR_gc (0x00) /* Start Condition Interrupt Flag - CLEAR */
#define USI_USISIF_SET_gc   (0x80) /* Start Condition Interrupt Flag - SET */


/* Counter Overflow Interrupt Flag */
#define USI_USIOIF_CLEAR_gc (0x00) /* Counter Overflow Interrupt Flag - CLEAR */
#define USI_USIOIF_SET_gc   (0x40) /* Counter Overflow Interrupt Flag - SET */


/* Stop Condition Flag */
#define USI_USIPF_CLEAR_gc (0x00) /* Stop Condition Flag - CLEAR */
#define USI_USIPF_SET_gc   (0x20) /* Stop Condition Flag - SET */


/* Data Output Collision */
#define USI_USIDC_CLEAR_gc (0x00) /* Data Output Collision - CLEAR */
#define USI_USIDC_SET_gc   (0x10) /* Data Output Collision - SET */


/* USI Counter Value Bits */
#define USI_USISR_USICNT_gc(x) (x & 0x0F)

/* Start Condition Interrupt Enable */
#define USI_USISIE_CLEAR_gc (0x00) /* Start Condition Interrupt Enable - CLEAR */
#define USI_USISIE_SET_gc   (0x80) /* Start Condition Interrupt Enable - SET */


/* Counter Overflow Interrupt Enable */
#define USI_USIOIE_CLEAR_gc (0x00) /* Counter Overflow Interrupt Enable - CLEAR */
#define USI_USIOIE_SET_gc   (0x40) /* Counter Overflow Interrupt Enable - SET */


/* USI Wire Mode Bits */
#define USI_USIWM_VAL_0x00_gc (0x00<<4) /* Normal Operation */
#define USI_USIWM_VAL_0x01_gc (0x01<<4) /* Three-Wire Mode */
#define USI_USIWM_VAL_0x02_gc (0x02<<4) /* Two-Wire Mode */
#define USI_USIWM_VAL_0x03_gc (0x03<<4) /* Two-Wire Mode Held Low */


/* USI Clock Source Select Bits */
#define USI_USICR_USICS_gc(x) ((x<<2) & 0x0C)

/* Clock Strobe */
#define USI_USICLK_CLEAR_gc (0x00) /* Clock Strobe - CLEAR */
#define USI_USICLK_SET_gc   (0x02) /* Clock Strobe - SET */


/* Toggle Clock Port Pin */
#define USI_USITC_CLEAR_gc (0x00) /* Toggle Clock Port Pin - CLEAR */
#define USI_USITC_SET_gc   (0x01) /* Toggle Clock Port Pin - SET */


/*
--------------------------------------------------------------------------------
EXINT - External Interrupts
--------------------------------------------------------------------------------
*/


/* External Interrupt Request 1 Enable */
#define EXINT_GIMSK_INT_gc(x) ((x<<6) & 0xC0)

/* General Interrupt Mask Register-PCIE */
#define EXINT_PCIE_CLEAR_gc (0x00) /* General Interrupt Mask Register-PCIE - CLEAR */
#define EXINT_PCIE_SET_gc   (0x20) /* General Interrupt Mask Register-PCIE - SET */


/* External Interrupt Flags */
#define EXINT_GIFR_INTF_gc(x) ((x<<6) & 0xC0)

/* Pin Change Interrupt Flags */
#define EXINT_GIFR_PCIF_gc(x) ((x<<3) & 0x38)

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


/* Clear Temporary Page Buffer */
#define CPU_CTPB_CLEAR_gc (0x00) /* Clear Temporary Page Buffer - CLEAR */
#define CPU_CTPB_SET_gc   (0x10) /* Clear Temporary Page Buffer - SET */


/* Read Fuse and Lock Bits */
#define CPU_RFLB_CLEAR_gc (0x00) /* Read Fuse and Lock Bits - CLEAR */
#define CPU_RFLB_SET_gc   (0x08) /* Read Fuse and Lock Bits - SET */


/* Page Write */
#define CPU_PGWRT_CLEAR_gc (0x00) /* Page Write - CLEAR */
#define CPU_PGWRT_SET_gc   (0x04) /* Page Write - SET */


/* Page Erase */
#define CPU_PGERS_CLEAR_gc (0x00) /* Page Erase - CLEAR */
#define CPU_PGERS_SET_gc   (0x02) /* Page Erase - SET */


/* Store Program Memory Enable */
#define CPU_SPMEN_CLEAR_gc (0x00) /* Store Program Memory Enable - CLEAR */
#define CPU_SPMEN_SET_gc   (0x01) /* Store Program Memory Enable - SET */


/* Pull-up Disable */
#define CPU_PUD_CLEAR_gc (0x00) /* Pull-up Disable - CLEAR */
#define CPU_PUD_SET_gc   (0x80) /* Pull-up Disable - SET */


/* Sleep Mode Select Bits */
#define CPU_SM_IDLE_gc   (0x00<<4) /* Idle */
#define CPU_SM_PDOWN2_gc (0x01<<4) /* Power Down */
#define CPU_SM_STDBY_gc  (0x04<<4) /* Standby */
#define CPU_SM_PDOWN_gc  (0x05<<4) /* Power Down  */


/* Sleep Enable */
#define CPU_SE_CLEAR_gc (0x00) /* Sleep Enable - CLEAR */
#define CPU_SE_SET_gc   (0x20) /* Sleep Enable - SET */


/* Interrupt Sense Control 1 bits */
#define CPU_ISC1_VAL_0x00_gc (0x00<<2) /* Low Level of INTX */
#define CPU_ISC1_VAL_0x01_gc (0x01<<2) /* Any Logical Change in INTX */
#define CPU_ISC1_VAL_0x02_gc (0x02<<2) /* Falling Edge of INTX */
#define CPU_ISC1_VAL_0x03_gc (0x03<<2) /* Rising Edge of INTX */


/* Interrupt Sense Control 0 bits */
#define CPU_ISC0_VAL_0x00_gc (0x00) /* Low Level of INTX */
#define CPU_ISC0_VAL_0x01_gc (0x01) /* Any Logical Change in INTX */
#define CPU_ISC0_VAL_0x02_gc (0x02) /* Falling Edge of INTX */
#define CPU_ISC0_VAL_0x03_gc (0x03) /* Rising Edge of INTX */


/* Watchdog Reset Flag */
#define CPU_WDRF_CLEAR_gc (0x00) /* Watchdog Reset Flag - CLEAR */
#define CPU_WDRF_SET_gc   (0x08) /* Watchdog Reset Flag - SET */


/* Brown-out Reset Flag */
#define CPU_BORF_CLEAR_gc (0x00) /* Brown-out Reset Flag - CLEAR */
#define CPU_BORF_SET_gc   (0x04) /* Brown-out Reset Flag - SET */


/* External Reset Flag */
#define CPU_EXTRF_CLEAR_gc (0x00) /* External Reset Flag - CLEAR */
#define CPU_EXTRF_SET_gc   (0x02) /* External Reset Flag - SET */


/* Power-On Reset Flag */
#define CPU_PORF_CLEAR_gc (0x00) /* Power-On Reset Flag - CLEAR */
#define CPU_PORF_SET_gc   (0x01) /* Power-On Reset Flag - SET */


/* Clock Prescaler Change Enable */
#define CPU_CLKPCE_CLEAR_gc (0x00) /* Clock Prescaler Change Enable - CLEAR */
#define CPU_CLKPCE_SET_gc   (0x80) /* Clock Prescaler Change Enable - SET */


/* Clock Prescaler Select Bits */
#define CPU_CLKPS_VAL_0x00_gc (0x00) /* 1 */
#define CPU_CLKPS_VAL_0x01_gc (0x01) /* 2 */
#define CPU_CLKPS_VAL_0x02_gc (0x02) /* 4 */
#define CPU_CLKPS_VAL_0x03_gc (0x03) /* 8 */
#define CPU_CLKPS_VAL_0x04_gc (0x04) /* 16 */
#define CPU_CLKPS_VAL_0x05_gc (0x05) /* 32 */
#define CPU_CLKPS_VAL_0x06_gc (0x06) /* 64 */
#define CPU_CLKPS_VAL_0x07_gc (0x07) /* 128 */
#define CPU_CLKPS_VAL_0x08_gc (0x08) /* 256 */


/* General Timer Counter Control Register-PSR10 */
#define CPU_PSR10_CLEAR_gc (0x00) /* General Timer Counter Control Register-PSR10 - CLEAR */
#define CPU_PSR10_SET_gc   (0x01) /* General Timer Counter Control Register-PSR10 - SET */


/* Power reduction register-PRTIM */
#define CPU_PRR_PRTIM_gc(x) ((x<<2) & 0x0C)

/* Power reduction register-PRUSI */
#define CPU_PRUSI_CLEAR_gc (0x00) /* Power reduction register-PRUSI - CLEAR */
#define CPU_PRUSI_SET_gc   (0x02) /* Power reduction register-PRUSI - SET */


/* Power reduction register-PRUSART */
#define CPU_PRUSART_CLEAR_gc (0x00) /* Power reduction register-PRUSART - CLEAR */
#define CPU_PRUSART_SET_gc   (0x01) /* Power reduction register-PRUSART - SET */


/* BOD control register-BPDS */
#define CPU_BPDS_CLEAR_gc (0x00) /* BOD control register-BPDS - CLEAR */
#define CPU_BPDS_SET_gc   (0x02) /* BOD control register-BPDS - SET */


/* BOD control register-BPDSE */
#define CPU_BPDSE_CLEAR_gc (0x00) /* BOD control register-BPDSE - CLEAR */
#define CPU_BPDSE_SET_gc   (0x01) /* BOD control register-BPDSE - SET */

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


/* PORTB - I/O Port (0x0000) */
#define PORTBB_BASE     _SFR_MEM8 (0x0000) /* PORTBB Base Address */
#define PORTBB_PINB     _SFR_MEM8 (0x0036) /* Port B Input Pins */
#define PORTBB_DDRB     _SFR_MEM8 (0x0037) /* Port B Data Direction Register */
#define PORTBB_PORTB    _SFR_MEM8 (0x0038) /* Port B Data Register */

/* PORTD - I/O Port (0x0000) */
#define PORTDD_BASE     _SFR_MEM8 (0x0000) /* PORTDD Base Address */
#define PORTDD_PIND     _SFR_MEM8 (0x0030) /* Input Pins, Port D */
#define PORTDD_DDRD     _SFR_MEM8 (0x0031) /* Data Direction Register, Port D */
#define PORTDD_PORTD    _SFR_MEM8 (0x0032) /* Data Register, Port D */

/* PORTA - I/O Port (0x0000) */
#define PORTAA_BASE     _SFR_MEM8 (0x0000) /* PORTAA Base Address */
#define PORTAA_PINA     _SFR_MEM8 (0x0039) /* Port A Input Pins */
#define PORTAA_DDRA     _SFR_MEM8 (0x003A) /* Port A Data Direction Register */
#define PORTAA_PORTA    _SFR_MEM8 (0x003B) /* Port A Data Register */

/* TC0 - Timer/Counter, 8-bit (0x0000) */
#define TC8_BASE        _SFR_MEM8 (0x0000) /* TC8 Base Address */
#define TC8_TCCR0A      _SFR_MEM8 (0x0050) /* Timer/Counter  Control Register A */
#define TC8_TCNT0       _SFR_MEM8 (0x0052) /* Timer/Counter0 */
#define TC8_TCCR0B      _SFR_MEM8 (0x0053) /* Timer/Counter Control Register B */
#define TC8_OCR0A       _SFR_MEM8 (0x0056) /* Timer/Counter0 Output Compare Register */
#define TC8_TIFR        _SFR_MEM8 (0x0058) /* Timer/Counter Interrupt Flag register */
#define TC8_TIMSK       _SFR_MEM8 (0x0059) /* Timer/Counter Interrupt Mask Register */
#define TC8_OCR0B       _SFR_MEM8 (0x005C) /* Timer/Counter0 Output Compare Register */

/* TC1 - Timer/Counter, 16-bit (0x0000) */
#define TC16_BASE       _SFR_MEM8 (0x0000) /* TC16 Base Address */
#define TC16_TCCR1C     _SFR_MEM8 (0x0042) /* Timer/Counter1 Control Register C */
#define TC16_ICR1       _SFR_MEM16(0x0044) /* Timer/Counter1 Input Capture Register  Bytes */
#define TC16_ICR1L      _SFR_MEM8 (0x0044) /* Timer/Counter1 Input Capture Register  Bytes LOW BYTE */
#define TC16_ICR1H      _SFR_MEM8 (0x0045) /* Timer/Counter1 Input Capture Register  Bytes HIGH BYTE */
#define TC16_OCR1B      _SFR_MEM16(0x0048) /* Timer/Counter1 Output Compare Register  Bytes */
#define TC16_OCR1BL     _SFR_MEM8 (0x0048) /* Timer/Counter1 Output Compare Register  Bytes LOW BYTE */
#define TC16_OCR1BH     _SFR_MEM8 (0x0049) /* Timer/Counter1 Output Compare Register  Bytes HIGH BYTE */
#define TC16_OCR1A      _SFR_MEM16(0x004A) /* Timer/Counter1 Output Compare Register  Bytes */
#define TC16_OCR1AL     _SFR_MEM8 (0x004A) /* Timer/Counter1 Output Compare Register  Bytes LOW BYTE */
#define TC16_OCR1AH     _SFR_MEM8 (0x004B) /* Timer/Counter1 Output Compare Register  Bytes HIGH BYTE */
#define TC16_TCNT1      _SFR_MEM16(0x004C) /* Timer/Counter1  Bytes */
#define TC16_TCNT1L     _SFR_MEM8 (0x004C) /* Timer/Counter1  Bytes LOW BYTE */
#define TC16_TCNT1H     _SFR_MEM8 (0x004D) /* Timer/Counter1  Bytes HIGH BYTE */
#define TC16_TCCR1B     _SFR_MEM8 (0x004E) /* Timer/Counter1 Control Register B */
#define TC16_TCCR1A     _SFR_MEM8 (0x004F) /* Timer/Counter1 Control Register A */
#define TC16_TIFR       _SFR_MEM8 (0x0058) /* Timer/Counter Interrupt Flag register */
#define TC16_TIMSK      _SFR_MEM8 (0x0059) /* Timer/Counter Interrupt Mask Register */

/* WDT - Watchdog Timer (0x0000) */
#define WDT_BASE        _SFR_MEM8 (0x0000) /* WDT Base Address */
#define WDT_WDTCR       _SFR_MEM8 (0x0041) /* Watchdog Timer Control Register */

/* USART - USART (0x0000) */
#define USART_BASE      _SFR_MEM8 (0x0000) /* USART Base Address */
#define USART_UBRRH     _SFR_MEM8 (0x0022) /* USART Baud Rate Register High Byte */
#define USART_UCSRC     _SFR_MEM8 (0x0023) /* USART Control and Status Register C */
#define USART_UBRRL     _SFR_MEM8 (0x0029) /* USART Baud Rate Register Low Byte */
#define USART_UCSRB     _SFR_MEM8 (0x002A) /* USART Control and Status Register B */
#define USART_UCSRA     _SFR_MEM8 (0x002B) /* USART Control and Status Register A */
#define USART_UDR       _SFR_MEM8 (0x002C) /* USART I/O Data Register */

/* AC - Analog Comparator (0x0000) */
#define AC_BASE         _SFR_MEM8 (0x0000) /* AC Base Address */
#define AC_DIDR         _SFR_MEM8 (0x0021) /* Digital Input Disable Register 1 */
#define AC_ACSR         _SFR_MEM8 (0x0028) /* Analog Comparator Control And Status Register */

/* EEPROM - EEPROM (0x0000) */
#define EEPROM_BASE     _SFR_MEM8 (0x0000) /* EEPROM Base Address */
#define EEPROM_EECR     _SFR_MEM8 (0x003C) /* EEPROM Control Register */
#define EEPROM_EEDR     _SFR_MEM8 (0x003D) /* EEPROM Data Register */
#define EEPROM_EEAR     _SFR_MEM8 (0x003E) /* EEPROM Read/Write Access */

/* USI - Universal Serial Interface (0x0000) */
#define USI_BASE        _SFR_MEM8 (0x0000) /* USI Base Address */
#define USI_USICR       _SFR_MEM8 (0x002D) /* USI Control Register */
#define USI_USISR       _SFR_MEM8 (0x002E) /* USI Status Register */
#define USI_USIDR       _SFR_MEM8 (0x002F) /* USI Data Register */

/* EXINT - External Interrupts (0x0000) */
#define EXINT_BASE      _SFR_MEM8 (0x0000) /* EXINT Base Address */
#define EXINT_PCMSK1    _SFR_MEM8 (0x0024) /* Pin Change Interrupt Mask Register 1 */
#define EXINT_PCMSK2    _SFR_MEM8 (0x0025) /* Pin Change Interrupt Mask Register 2 */
#define EXINT_PCMSK0    _SFR_MEM8 (0x0040) /* Pin Change Interrupt Mask Register 0 */
#define EXINT_GIFR      _SFR_MEM8 (0x005A) /* General Interrupt Flag Register */
#define EXINT_GIMSK     _SFR_MEM8 (0x005B) /* General Interrupt Mask Register */

/* CPU - CPU Registers (0x0000) */
#define CPU_BASE        _SFR_MEM8 (0x0000) /* CPU Base Address */
#define CPU_PRR         _SFR_MEM8 (0x0026) /* Power reduction register */
#define CPU_BODCR       _SFR_MEM8 (0x0027) /* BOD control register */
#define CPU_GPIOR0      _SFR_MEM8 (0x0033) /* General Purpose I/O Register 0 */
#define CPU_GPIOR1      _SFR_MEM8 (0x0034) /* General Purpose I/O Register 1 */
#define CPU_GPIOR2      _SFR_MEM8 (0x0035) /* General Purpose I/O Register 2 */
#define CPU_GTCCR       _SFR_MEM8 (0x0043) /* General Timer Counter Control Register */
#define CPU_CLKPR       _SFR_MEM8 (0x0046) /* Clock Prescale Register */
#define CPU_OSCCAL      _SFR_MEM8 (0x0051) /* Oscillator Calibration Register */
#define CPU_MCUSR       _SFR_MEM8 (0x0054) /* MCU Status register */
#define CPU_MCUCR       _SFR_MEM8 (0x0055) /* MCU Control Register */
#define CPU_SPMCSR      _SFR_MEM8 (0x0057) /* Store Program Memory Control and Status register */
#define CPU_SP          _SFR_MEM16(0x005D) /* Stack Pointer  */
#define CPU_SPL         _SFR_MEM8 (0x005D) /* Stack Pointer  LOW BYTE */
#define CPU_SPH         _SFR_MEM8 (0x005E) /* Stack Pointer  HIGH BYTE */
#define CPU_SREG        _SFR_MEM8 (0x005F) /* Status Register */

/* FUSE - Fuses (0x0000) */
#define FUSE_BASE       _SFR_MEM8 (0x0000) /* FUSE Base Address */
#define FUSE_LOW        _SFR_MEM8 (0x0000) 
#define FUSE_HIGH       _SFR_MEM8 (0x0001) 
#define FUSE_EXTENDED   _SFR_MEM8 (0x0002) 

/* LOCKBIT - Lockbits (0x0000) */
#define LOCKBIT_BASE    _SFR_MEM8 (0x0000) /* LOCKBIT Base Address */
#define LOCKBIT_LOCKBIT _SFR_MEM8 (0x0000) 
/* avr-libc typedef for avr/fuse.h */
typedef FUSE_t NVM_FUSES_t;

/*
================================================================================
Interrupt Vector Definitions
================================================================================
*/

/* Vector 0 is the reset vector */
#define None_RESET_vect_num        (0)                 
#define None_RESET_vect            _VECTOR(0)          /* External Reset, Power-on Reset and Watchdog Reset */
#define None_INT0_vect_num         (1)                 
#define None_INT0_vect             _VECTOR(1)          /* External Interrupt Request 0 */
#define None_INT1_vect_num         (2)                 
#define None_INT1_vect             _VECTOR(2)          /* External Interrupt Request 1 */
#define None_TIMER1_CAPT_vect_num  (3)                 
#define None_TIMER1_CAPT_vect      _VECTOR(3)          /* Timer/Counter1 Capture Event */
#define None_TIMER1_COMPA_vect_num (4)                 
#define None_TIMER1_COMPA_vect     _VECTOR(4)          /* Timer/Counter1 Compare Match A */
#define None_TIMER1_OVF_vect_num   (5)                 
#define None_TIMER1_OVF_vect       _VECTOR(5)          /* Timer/Counter1 Overflow */
#define None_TIMER0_OVF_vect_num   (6)                 
#define None_TIMER0_OVF_vect       _VECTOR(6)          /* Timer/Counter0 Overflow */
#define None_USART_RX_vect_num     (7)                 
#define None_USART_RX_vect         _VECTOR(7)          /* USART, Rx Complete */
#define None_USART_UDRE_vect_num   (8)                 
#define None_USART_UDRE_vect       _VECTOR(8)          /* USART Data Register Empty */
#define None_USART_TX_vect_num     (9)                 
#define None_USART_TX_vect         _VECTOR(9)          /* USART, Tx Complete */
#define None_ANA_COMP_vect_num     (10)                
#define None_ANA_COMP_vect         _VECTOR(10)         /* Analog Comparator */
#define None_PCINT_B_vect_num      (11)                
#define None_PCINT_B_vect          _VECTOR(11)         /* Pin Change Interrupt Request B */
#define None_TIMER1_COMPB_vect_num (12)                
#define None_TIMER1_COMPB_vect     _VECTOR(12)         
#define None_TIMER0_COMPA_vect_num (13)                
#define None_TIMER0_COMPA_vect     _VECTOR(13)         
#define None_TIMER0_COMPB_vect_num (14)                
#define None_TIMER0_COMPB_vect     _VECTOR(14)         
#define None_USI_START_vect_num    (15)                
#define None_USI_START_vect        _VECTOR(15)         /* USI Start Condition */
#define None_USI_OVERFLOW_vect_num (16)                
#define None_USI_OVERFLOW_vect     _VECTOR(16)         /* USI Overflow */
#define None_EEPROM_Ready_vect_num (17)                
#define None_EEPROM_Ready_vect     _VECTOR(17)         
#define None_WDT_OVERFLOW_vect_num (18)                
#define None_WDT_OVERFLOW_vect     _VECTOR(18)         /* Watchdog Timer Overflow */
#define None_PCINT_A_vect_num      (19)                
#define None_PCINT_A_vect          _VECTOR(19)         /* Pin Change Interrupt Request A */
#define None_PCINT_D_vect_num      (20)                
#define None_PCINT_D_vect          _VECTOR(20)         /* Pin Change Interrupt Request D */

/* Vector Table Size */
#define _VECTOR_SIZE               (2)                 /* Size of individual vector. */
#define _VECTORS_SIZE              (21 * _VECTOR_SIZE) /* Size of all vectors */
/*
================================================================================
Constants
================================================================================
*/

#define PROGMEM_START   (0x0000)                           
#define PROGMEM_SIZE    (0x1000)                           
#define PROGMEM_END     (PROGMEM_START + PROGMEM_SIZE - 1) 

#define FLASH_START     (0x0000)                           
#define FLASH_SIZE      (0x1000)                           
#define FLASH_PAGE_SIZE (0x0040)                           
#define FLASH_END       (FLASH_START + FLASH_SIZE - 1)     

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

#define DATAMEM_START       (0x0000)                               
#define DATAMEM_SIZE        (0x0160)                               
#define DATAMEM_END         (DATAMEM_START + DATAMEM_SIZE - 1)     

#define REGISTERS_START     (0x0000)                               
#define REGISTERS_SIZE      (0x0020)                               
#define REGISTERS_PAGE_SIZE (0x0001)                               
#define REGISTERS_END       (REGISTERS_START + REGISTERS_SIZE - 1) 

#define MAPPED_IO_START     (0x0020)                               
#define MAPPED_IO_SIZE      (0x0040)                               
#define MAPPED_IO_PAGE_SIZE (0x0001)                               
#define MAPPED_IO_END       (MAPPED_IO_START + MAPPED_IO_SIZE - 1) 

#define IRAM_START          (0x0060)                               
#define IRAM_SIZE           (0x0100)                               
#define IRAM_PAGE_SIZE      (0x0001)                               
#define IRAM_END            (IRAM_START + IRAM_SIZE - 1)           

#define EEPROMMEM_START         (0x0000)                               
#define EEPROMMEM_SIZE          (0x0100)                               
#define EEPROMMEM_END           (EEPROMMEM_START + EEPROMMEM_SIZE - 1) 

#define EEPROM_START            (0x0000)                               
#define EEPROM_SIZE             (0x0100)                               
#define EEPROM_PAGE_SIZE        (0x0004)                               
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
#define OSCCALMEM_SIZE   (0x0002)                               
#define OSCCALMEM_END    (OSCCALMEM_START + OSCCALMEM_SIZE - 1) 

#define OSCCAL_START     (0x0000)                               
#define OSCCAL_SIZE      (0x0002)                               
#define OSCCAL_PAGE_SIZE (0x0001)                               
#define OSCCAL_END       (OSCCAL_START + OSCCAL_SIZE - 1)       

/* ============ Port Bits ============ */

#define PORTB0 (0) 
#define PORTB1 (1) 
#define PORTB2 (2) 
#define PORTB3 (3) 
#define PORTB4 (4) 
#define PORTB5 (5) 
#define PORTB6 (6) 
#define PORTB7 (7) 
#define PORTD0 (0) 
#define PORTD1 (1) 
#define PORTD2 (2) 
#define PORTD3 (3) 
#define PORTD4 (4) 
#define PORTD5 (5) 
#define PORTD6 (6) 
#define PORTA0 (0) 
#define PORTA1 (1) 
#define PORTA2 (2) 

/*
================================================================================
Fuses/LockBits/Signatures
================================================================================
*/

/* ============ Fuses ============ */

#define FUSE_MEMORY_SIZE 2 

/* Fuse offset 0x00 */
#define SUT_CKSEL0 (unsigned char)~_BV(0) /* Select Clock Source bit 0 */
#define SUT_CKSEL1 (unsigned char)~_BV(1) /* Select Clock Source bit 1 */
#define SUT_CKSEL2 (unsigned char)~_BV(2) /* Select Clock Source bit 2 */
#define SUT_CKSEL3 (unsigned char)~_BV(3) /* Select Clock Source bit 3 */
#define SUT_CKSEL4 (unsigned char)~_BV(4) /* Select Clock Source bit 4 */
#define SUT_CKSEL5 (unsigned char)~_BV(5) /* Select Clock Source bit 5 */
#define CKOUT      (unsigned char)~_BV(6) /* Clock output on PORTD2 */
#define CKDIV8     (unsigned char)~_BV(7) /* Divide clock by 8 internally */

/* Fuse offset 0x01 */
#define RSTDISBL  (unsigned char)~_BV(0) /* External reset disable */
#define BODLEVEL0 (unsigned char)~_BV(1) /* Brown-out Detector trigger level bit 0 */
#define BODLEVEL1 (unsigned char)~_BV(2) /* Brown-out Detector trigger level bit 1 */
#define BODLEVEL2 (unsigned char)~_BV(3) /* Brown-out Detector trigger level bit 2 */
#define WDTON     (unsigned char)~_BV(4) /* Watch-dog Timer always on */
#define SPIEN     (unsigned char)~_BV(5) /* Serial program downloading (SPI) enable */
#define EESAVE    (unsigned char)~_BV(6) /* Preserve EEPROM through the Chip Erase cycle */
#define DWEN      (unsigned char)~_BV(7) /* Debug Wire enable */

/* Fuse offset 0x02 */
#define SELFPRGEN (unsigned char)~_BV(0) /* Self Programming enable */


/* ========== Lock Bits ========== */
#define __LOCK_BITS_EXIST  


/* ========== Signature ========== */
#define SIGNATURE_0 (0x1E) 
#define SIGNATURE_1 (0x92) 
#define SIGNATURE_2 (0x0D) 

#endif /* #ifdef _AVR_ATtiny4313_H_INCLUDED */
