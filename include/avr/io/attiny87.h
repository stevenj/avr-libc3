/******************************************************************************
 *   This file is part of avr-libc3.                                          * 
 *                                                                            * 
 *   Automatically created by devtools/gen-ioheader-atdf.py (V0.91)           * 
 *                                                                            * 
 *   .atpack File: ATtiny87.atdf                                              * 
 *   .ATDF File:   atdf/ATtiny87.atdf                                         * 
 *   Version:      2.0.10                                                     * 
 *   Date:         2019-04-25                                                 * 
 *   Device:       ATtiny87                                                   * 
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
#  define _AVR_IOXXX_H_ "ioATtiny87.h"
#else
#  error "Attempt to include more than one <avr/ioXXX.h> file."
#endif

#ifndef _AVR_ATtiny87_H_INCLUDED
#  define _AVR_ATtiny87_H_INCLUDED

/*
================================================================================
Ungrouped common register
================================================================================
*/

#define PORTCR  _SFR_MEM8 (0x32) /* Port Control Register */

#define GPIOR0  _SFR_MEM8 (0x3E) /* General purpose register 0 */

#define GPIOR1  _SFR_MEM8 (0x4A) /* General Purpose register 1 */
#define GPIOR2  _SFR_MEM8 (0x4B) /* General Purpose IO register 2 */

#define DWDR    _SFR_MEM8 (0x51) /* DebugWire data register */

#define SMCR    _SFR_MEM8 (0x53) /* Sleep Mode Control Register */
#define MCUSR   _SFR_MEM8 (0x54) /* MCU Status register */
#define MCUCR   _SFR_MEM8 (0x55) /* MCU Control Register */

#define SP      _SFR_MEM16(0x5D) /* Stack Pointer  Bytes */
#define SREG    _SFR_MEM8 (0x5F) /* Status Register */

#define CLKPR   _SFR_MEM8 (0x61) /* Clock Prescale Register */
#define CLKCSR  _SFR_MEM8 (0x62) /* Clock Control & Status Register */
#define CLKSELR _SFR_MEM8 (0x63) /* Clock Selection Register */
#define PRR     _SFR_MEM8 (0x64) /* Power Reduction Register */

#define OSCCAL  _SFR_MEM8 (0x66) /* Oscillator Calibration Register */


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

/* Reset Disabled (Enable PB7 as i/o pin) */
typedef enum FUSE_RSTDISBL_enum
{
    FUSE_RSTDISBL_CLEAR_gc = (0x00), /* Reset Disabled (Enable PB7 as i/o pin) - CLEAR */
    FUSE_RSTDISBL_SET_gc   = (0x80), /* Reset Disabled (Enable PB7 as i/o pin) - SET */
} FUSE_RSTDISBL_t;

/* Debug Wire enable */
typedef enum FUSE_DWEN_enum
{
    FUSE_DWEN_CLEAR_gc = (0x00), /* Debug Wire enable - CLEAR */
    FUSE_DWEN_SET_gc   = (0x40), /* Debug Wire enable - SET */
} FUSE_DWEN_t;

/* Serial program downloading (SPI) enabled */
typedef enum FUSE_SPIEN_enum
{
    FUSE_SPIEN_CLEAR_gc = (0x00), /* Serial program downloading (SPI) enabled - CLEAR */
    FUSE_SPIEN_SET_gc   = (0x20), /* Serial program downloading (SPI) enabled - SET */
} FUSE_SPIEN_t;

/* Watch-dog Timer always ON */
typedef enum FUSE_WDTON_enum
{
    FUSE_WDTON_CLEAR_gc = (0x00), /* Watch-dog Timer always ON - CLEAR */
    FUSE_WDTON_SET_gc   = (0x10), /* Watch-dog Timer always ON - SET */
} FUSE_WDTON_t;

/* Preserve EEPROM through the Chip Erase cycle */
typedef enum FUSE_EESAVE_enum
{
    FUSE_EESAVE_CLEAR_gc = (0x00), /* Preserve EEPROM through the Chip Erase cycle - CLEAR */
    FUSE_EESAVE_SET_gc   = (0x08), /* Preserve EEPROM through the Chip Erase cycle - SET */
} FUSE_EESAVE_t;

/* Brown-out Detector trigger level */
typedef enum FUSE_BODLEVEL_enum
{
    FUSE_BODLEVEL_4V3_gc      = (0x04), /* Brown-out detection at VCC=4.3 V */
    FUSE_BODLEVEL_2V7_gc      = (0x05), /* Brown-out detection at VCC=2.7 V */
    FUSE_BODLEVEL_1V8_gc      = (0x06), /* Brown-out detection at VCC=1.8 V */
    FUSE_BODLEVEL_2V3_gc      = (0x03), /* Brown-out detection at VCC=2.3 V */
    FUSE_BODLEVEL_2V2_gc      = (0x02), /* Brown-out detection at VCC=2.2 V */
    FUSE_BODLEVEL_1V9_gc      = (0x01), /* Brown-out detection at VCC=1.9 V */
    FUSE_BODLEVEL_2V0_gc      = (0x00), /* Brown-out detection at VCC=2.0 V */
    FUSE_BODLEVEL_DISABLED_gc = (0x07), /* Brown-out detection disabled */
} FUSE_BODLEVEL_t;

/* Divide clock by 8 internally */
typedef enum FUSE_CKDIV8_enum
{
    FUSE_CKDIV8_CLEAR_gc = (0x00), /* Divide clock by 8 internally - CLEAR */
    FUSE_CKDIV8_SET_gc   = (0x80), /* Divide clock by 8 internally - SET */
} FUSE_CKDIV8_t;

/* Clock output on PORTB5 */
typedef enum FUSE_CKOUT_enum
{
    FUSE_CKOUT_CLEAR_gc = (0x00), /* Clock output on PORTB5 - CLEAR */
    FUSE_CKOUT_SET_gc   = (0x40), /* Clock output on PORTB5 - SET */
} FUSE_CKOUT_t;

/* Select Clock source */
typedef enum FUSE_SUT_CKSEL_enum
{
    FUSE_SUT_CKSEL_EXTCLK_6CK_14CK_0MS_gc                 = (0x00), /* Ext. Clock; Start-up time PWRDWN/RESET: 6 CK/14 CK + 0 ms */
    FUSE_SUT_CKSEL_EXTCLK_6CK_14CK_4MS_gc                 = (0x10), /* Ext. Clock; Start-up time PWRDWN/RESET: 6 CK/14 CK + 4 ms */
    FUSE_SUT_CKSEL_EXTCLK_6CK_14CK_64MS_gc                = (0x20), /* Ext. Clock; Start-up time PWRDWN/RESET: 6 CK/14 CK + 64 ms */
    FUSE_SUT_CKSEL_INTRCOSC_8MHZ_6CK_14CK_0MS_gc          = (0x02), /* Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 0 ms */
    FUSE_SUT_CKSEL_INTRCOSC_8MHZ_6CK_14CK_4MS_gc          = (0x12), /* Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 4 ms */
    FUSE_SUT_CKSEL_INTRCOSC_8MHZ_6CK_14CK_64MS_gc         = (0x22), /* Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 64 ms */
    FUSE_SUT_CKSEL_WDOSC_128KHZ_6CK_14CK_0MS_gc           = (0x03), /* WD. Osc. 128 kHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 0 ms */
    FUSE_SUT_CKSEL_WDOSC_128KHZ_6CK_14CK_4MS_gc           = (0x13), /* WD. Osc. 128 kHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 4 ms */
    FUSE_SUT_CKSEL_WDOSC_128KHZ_6CK_14CK_64MS_gc          = (0x23), /* WD. Osc. 128 kHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 64 ms */
    FUSE_SUT_CKSEL_EXTLOFXTAL_1KCK_4MS_gc                 = (0x04), /* Ext. Low-Freq. Crystal; Start-up time PWRDWN/RESET: 1024 CK 4 ms */
    FUSE_SUT_CKSEL_EXTLOFXTAL_1KCK_64MS_gc                = (0x14), /* Ext. Low-Freq. Crystal; Start-up time PWRDWN/RESET: 1024 CK + 64 ms */
    FUSE_SUT_CKSEL_EXTLOFXTAL_32KCK_64MS_gc               = (0x24), /* Ext. Low-Freq. Crystal; Start-up time PWRDWN/RESET: 32768 CK + 64 ms */
    FUSE_SUT_CKSEL_EXTCRES_0MHZ4_0MHZ9_258CK_14CK_4MS1_gc = (0x08), /* Ext. Ceramic Res. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTCRES_0MHZ4_0MHZ9_258CK_14CK_65MS_gc = (0x18), /* Ext. Ceramic Res. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTCRES_0MHZ4_0MHZ9_1KCK_14CK_0MS_gc   = (0x28), /* Ext. Ceramic Res. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 1024 CK /14 CK + 0 ms */
    FUSE_SUT_CKSEL_EXTCRES_0MHZ4_0MHZ9_1KCK_14CK_4MS1_gc  = (0x38), /* Ext. Ceramic Res. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 1024 CK /14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTCRES_0MHZ4_0MHZ9_1KCK_14CK_65MS_gc  = (0x09), /* Ext. Ceramic Res. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 1024 CK /14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_16KCK_14CK_0MS_gc  = (0x19), /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 16384 CK/14 CK + 0 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_16KCK_14CK_4MS1_gc = (0x29), /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 16384 CK/14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_16KCK_14CK_65MS_gc = (0x39), /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 16384 CK/14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTCRES_0MHZ9_3MHZ_258CK_14CK_4MS1_gc  = (0x0A), /* Ext. Ceramic Res. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTCRES_0MHZ9_3MHZ_258CK_14CK_65MS_gc  = (0x1A), /* Ext. Ceramic Res. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTCRES_0MHZ9_3MHZ_1KCK_14CK_0MS_gc    = (0x2A), /* Ext. Ceramic Res. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 1024 CK /14 CK + 0 ms */
    FUSE_SUT_CKSEL_EXTCRES_0MHZ9_3MHZ_1KCK_14CK_4MS1_gc   = (0x3A), /* Ext. Ceramic Res. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 1024 CK /14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTCRES_0MHZ9_3MHZ_1KCK_14CK_65MS_gc   = (0x0B), /* Ext. Ceramic Res. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 1024 CK /14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_16KCK_14CK_0MS_gc   = (0x1B), /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 16384 CK/14 CK + 0 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_16KCK_14CK_4MS1_gc  = (0x2B), /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 16384 CK/14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_16KCK_14CK_65MS_gc  = (0x3B), /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 16384 CK/14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTCRES_3MHZ_8MHZ_258CK_14CK_4MS1_gc   = (0x0C), /* Ext. Ceramic Res. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTCRES_3MHZ_8MHZ_258CK_14CK_65MS_gc   = (0x1C), /* Ext. Ceramic Res. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTCRES_3MHZ_8MHZ_1KCK_14CK_0MS_gc     = (0x2C), /* Ext. Ceramic Res. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 1024 CK /14 CK + 0 ms */
    FUSE_SUT_CKSEL_EXTCRES_3MHZ_8MHZ_1KCK_14CK_4MS1_gc    = (0x3C), /* Ext. Ceramic Res. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 1024 CK /14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTCRES_3MHZ_8MHZ_1KCK_14CK_65MS_gc    = (0x0D), /* Ext. Ceramic Res. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 1024 CK /14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_16KCK_14CK_0MS_gc    = (0x1D), /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 16384 CK/14 CK + 0 ms */
    FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_16KCK_14CK_4MS1_gc   = (0x2D), /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 16384 CK/14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_16KCK_14CK_65MS_gc   = (0x3D), /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 16384 CK/14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTCRES_8MHZ_16MHZ_258CK_14CK_4MS1_gc  = (0x0E), /* Ext. Ceramic Res. 8.0-16.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTCRES_8MHZ_16MHZ_258CK_14CK_65MS_gc  = (0x1E), /* Ext. Ceramic Res. 8.0-16.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTCRES_8MHZ_16MHZ_1KCK_14CK_0MS_gc    = (0x2E), /* Ext. Ceramic Res. 8.0-16.0 MHz; Start-up time PWRDWN/RESET: 1024 CK /14 CK + 0 ms */
    FUSE_SUT_CKSEL_EXTCRES_8MHZ_16MHZ_1KCK_14CK_4MS1_gc   = (0x3E), /* Ext. Ceramic Res. 8.0-16.0 MHz; Start-up time PWRDWN/RESET: 1024 CK /14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTCRES_8MHZ_16MHZ_1KCK_14CK_65MS_gc   = (0x0F), /* Ext. Ceramic Res. 8.0-16.0 MHz; Start-up time PWRDWN/RESET: 1024 CK /14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTXOSC_8MHZ_16MHZ_16KCK_14CK_0MS_gc   = (0x1F), /* Ext. Crystal Osc. 8.0-16.0 MHz; Start-up time PWRDWN/RESET: 16384 CK/14 CK + 0 ms */
    FUSE_SUT_CKSEL_EXTXOSC_8MHZ_16MHZ_16KCK_14CK_4MS1_gc  = (0x2F), /* Ext. Crystal Osc. 8.0-16.0 MHz; Start-up time PWRDWN/RESET: 16384 CK/14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTXOSC_8MHZ_16MHZ_16KCK_14CK_65MS_gc  = (0x3F), /* Ext. Crystal Osc. 8.0-16.0 MHz; Start-up time PWRDWN/RESET: 16384 CK/14 CK + 65 ms */
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

typedef struct PORTA_struct
{
    register8_t rsv_0x00[32]; /* RESERVED REGISTER BLOCK */
    register8_t PINA;         /* Port A Input Pins */
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
    register8_t PINB;         /* Port B Input Pins */
    register8_t DDRB;         /* Port B Data Direction Register */
    register8_t PORTB;        /* Port B Data Register */
} PORTB_t;


/*
--------------------------------------------------------------------------------
LINUART - Local Interconnect Network
--------------------------------------------------------------------------------
*/

typedef struct LINUART_struct
{
    register8_t rsv_0x00[200]; /* RESERVED REGISTER BLOCK */
    register8_t LINCR;         /* LIN Control Register */
    register8_t LINSIR;        /* LIN Status and Interrupt Register */
    register8_t LINENIR;       /* LIN Enable Interrupt Register */
    register8_t LINERR;        /* LIN Error Register */
    register8_t LINBTR;        /* LIN Bit Timing Register */
    register8_t LINBRRL;       /* LIN Baud Rate Low Register */
    register8_t LINBRRH;       /* LIN Baud Rate High Register */
    register8_t LINDLR;        /* LIN Data Length Register */
    register8_t LINIDR;        /* LIN Identifier Register */
    register8_t LINSEL;        /* LIN Data Buffer Selection Register */
    register8_t LINDAT;        /* LIN Data Register */
} LINUART_t;


/* Software Reset */
typedef enum LINUART_LSWRES_enum
{
    LINUART_LSWRES_CLEAR_gc = (0x00), /* Software Reset - CLEAR */
    LINUART_LSWRES_SET_gc   = (0x80), /* Software Reset - SET */
} LINUART_LSWRES_t;

/* LIN Standard */
typedef enum LINUART_LIN13_enum
{
    LINUART_LIN13_CLEAR_gc = (0x00), /* LIN Standard - CLEAR */
    LINUART_LIN13_SET_gc   = (0x40), /* LIN Standard - SET */
} LINUART_LIN13_t;

/* LIN Configuration bits */
#define LINUART_LINCR_LCONF_gc(x) ((x<<4) & 0x30)

/* LIN or UART Enable */
typedef enum LINUART_LENA_enum
{
    LINUART_LENA_CLEAR_gc = (0x00), /* LIN or UART Enable - CLEAR */
    LINUART_LENA_SET_gc   = (0x08), /* LIN or UART Enable - SET */
} LINUART_LENA_t;

/* LIN Command and Mode bits */
#define LINUART_LINCR_LCMD_gc(x) (x & 0x07)

/* Identifier Status bits */
#define LINUART_LINSIR_LIDST_gc(x) ((x<<5) & 0xE0)

/* Busy Signal */
typedef enum LINUART_LBUSY_enum
{
    LINUART_LBUSY_CLEAR_gc = (0x00), /* Busy Signal - CLEAR */
    LINUART_LBUSY_SET_gc   = (0x10), /* Busy Signal - SET */
} LINUART_LBUSY_t;

/* Error Interrupt */
typedef enum LINUART_LERR_enum
{
    LINUART_LERR_CLEAR_gc = (0x00), /* Error Interrupt - CLEAR */
    LINUART_LERR_SET_gc   = (0x08), /* Error Interrupt - SET */
} LINUART_LERR_t;

/* Identifier Interrupt */
typedef enum LINUART_LIDOK_enum
{
    LINUART_LIDOK_CLEAR_gc = (0x00), /* Identifier Interrupt - CLEAR */
    LINUART_LIDOK_SET_gc   = (0x04), /* Identifier Interrupt - SET */
} LINUART_LIDOK_t;

/* Transmit Performed Interrupt */
typedef enum LINUART_LTXOK_enum
{
    LINUART_LTXOK_CLEAR_gc = (0x00), /* Transmit Performed Interrupt - CLEAR */
    LINUART_LTXOK_SET_gc   = (0x02), /* Transmit Performed Interrupt - SET */
} LINUART_LTXOK_t;

/* Receive Performed Interrupt */
typedef enum LINUART_LRXOK_enum
{
    LINUART_LRXOK_CLEAR_gc = (0x00), /* Receive Performed Interrupt - CLEAR */
    LINUART_LRXOK_SET_gc   = (0x01), /* Receive Performed Interrupt - SET */
} LINUART_LRXOK_t;

/* Enable Error Interrupt */
typedef enum LINUART_LENERR_enum
{
    LINUART_LENERR_CLEAR_gc = (0x00), /* Enable Error Interrupt - CLEAR */
    LINUART_LENERR_SET_gc   = (0x08), /* Enable Error Interrupt - SET */
} LINUART_LENERR_t;

/* Enable Identifier Interrupt */
typedef enum LINUART_LENIDOK_enum
{
    LINUART_LENIDOK_CLEAR_gc = (0x00), /* Enable Identifier Interrupt - CLEAR */
    LINUART_LENIDOK_SET_gc   = (0x04), /* Enable Identifier Interrupt - SET */
} LINUART_LENIDOK_t;

/* Enable Transmit Performed Interrupt */
typedef enum LINUART_LENTXOK_enum
{
    LINUART_LENTXOK_CLEAR_gc = (0x00), /* Enable Transmit Performed Interrupt - CLEAR */
    LINUART_LENTXOK_SET_gc   = (0x02), /* Enable Transmit Performed Interrupt - SET */
} LINUART_LENTXOK_t;

/* Enable Receive Performed Interrupt */
typedef enum LINUART_LENRXOK_enum
{
    LINUART_LENRXOK_CLEAR_gc = (0x00), /* Enable Receive Performed Interrupt - CLEAR */
    LINUART_LENRXOK_SET_gc   = (0x01), /* Enable Receive Performed Interrupt - SET */
} LINUART_LENRXOK_t;

/* Abort Flag */
typedef enum LINUART_LABORT_enum
{
    LINUART_LABORT_CLEAR_gc = (0x00), /* Abort Flag - CLEAR */
    LINUART_LABORT_SET_gc   = (0x80), /* Abort Flag - SET */
} LINUART_LABORT_t;

/* Frame Time Out Error Flag */
typedef enum LINUART_LTOERR_enum
{
    LINUART_LTOERR_CLEAR_gc = (0x00), /* Frame Time Out Error Flag - CLEAR */
    LINUART_LTOERR_SET_gc   = (0x40), /* Frame Time Out Error Flag - SET */
} LINUART_LTOERR_t;

/* Overrun Error Flag */
typedef enum LINUART_LOVERR_enum
{
    LINUART_LOVERR_CLEAR_gc = (0x00), /* Overrun Error Flag - CLEAR */
    LINUART_LOVERR_SET_gc   = (0x20), /* Overrun Error Flag - SET */
} LINUART_LOVERR_t;

/* Framing Error Flag */
typedef enum LINUART_LFERR_enum
{
    LINUART_LFERR_CLEAR_gc = (0x00), /* Framing Error Flag - CLEAR */
    LINUART_LFERR_SET_gc   = (0x10), /* Framing Error Flag - SET */
} LINUART_LFERR_t;

/* Synchronization Error Flag */
typedef enum LINUART_LSERR_enum
{
    LINUART_LSERR_CLEAR_gc = (0x00), /* Synchronization Error Flag - CLEAR */
    LINUART_LSERR_SET_gc   = (0x08), /* Synchronization Error Flag - SET */
} LINUART_LSERR_t;

/* Parity Error Flag */
typedef enum LINUART_LPERR_enum
{
    LINUART_LPERR_CLEAR_gc = (0x00), /* Parity Error Flag - CLEAR */
    LINUART_LPERR_SET_gc   = (0x04), /* Parity Error Flag - SET */
} LINUART_LPERR_t;

/* Checksum Error Flag */
typedef enum LINUART_LCERR_enum
{
    LINUART_LCERR_CLEAR_gc = (0x00), /* Checksum Error Flag - CLEAR */
    LINUART_LCERR_SET_gc   = (0x02), /* Checksum Error Flag - SET */
} LINUART_LCERR_t;

/* Bit Error Flag */
typedef enum LINUART_LBERR_enum
{
    LINUART_LBERR_CLEAR_gc = (0x00), /* Bit Error Flag - CLEAR */
    LINUART_LBERR_SET_gc   = (0x01), /* Bit Error Flag - SET */
} LINUART_LBERR_t;

/* Disable Bit Timing Resynchronization */
typedef enum LINUART_LDISR_enum
{
    LINUART_LDISR_CLEAR_gc = (0x00), /* Disable Bit Timing Resynchronization - CLEAR */
    LINUART_LDISR_SET_gc   = (0x80), /* Disable Bit Timing Resynchronization - SET */
} LINUART_LDISR_t;

/* LIN Bit Timing bits */
#define LINUART_LINBTR_LBT_gc(x) (x & 0x3F)

/* LIN Transmit Data Length bits */
#define LINUART_LINDLR_LTXDL_gc(x) ((x<<4) & 0xF0)

/* LIN Receive Data Length bits */
#define LINUART_LINDLR_LRXDL_gc(x) (x & 0x0F)

/* Parity bits */
#define LINUART_LINIDR_LP_gc(x) ((x<<6) & 0xC0)

/* Identifier bit 5 or Data Length bits */
#define LINUART_LINIDR_LID_gc(x) (x & 0x3F)

/* Auto Increment of Data Buffer Index (Active Low) */
typedef enum LINUART_LAINC_enum
{
    LINUART_LAINC_CLEAR_gc = (0x00), /* Auto Increment of Data Buffer Index (Active Low) - CLEAR */
    LINUART_LAINC_SET_gc   = (0x08), /* Auto Increment of Data Buffer Index (Active Low) - SET */
} LINUART_LAINC_t;

/* FIFO LIN Data Buffer Index bits */
#define LINUART_LINSEL_LINDX_gc(x) (x & 0x07)

/*
--------------------------------------------------------------------------------
USI - Universal Serial Interface
--------------------------------------------------------------------------------
*/

typedef struct USI_struct
{
    register8_t rsv_0x00[184]; /* RESERVED REGISTER BLOCK */
    register8_t USICR;         /* USI Control Register */
    register8_t USISR;         /* USI Status Register */
    register8_t USIDR;         /* USI Data Register */
    register8_t USIBR;         /* USI Buffer Register */
    register8_t USIPP;         /* USI Pin Position */
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
TC8_ASYNC - Timer/Counter, 8-bit Async
--------------------------------------------------------------------------------
*/

typedef struct TC0_struct
{
    register8_t rsv_0x00[53]; /* RESERVED REGISTER BLOCK */
    register8_t TIFR0;        /* Timer/Counter0 Interrupt Flag Register */
    register8_t rsv_0x36[13]; /* RESERVED REGISTER BLOCK */
    register8_t GTCCR;        /* General Timer Counter Control register */
    register8_t rsv_0x44;     /* RESERVED REGISTER */
    register8_t TCCR0A;       /* Timer/Counter0 Control Register A */
    register8_t TCCR0B;       /* Timer/Counter0 Control Register B */
    register8_t TCNT0;        /* Timer/Counter0 */
    register8_t OCR0A;        /* Timer/Counter0 Output Compare Register A */
    register8_t rsv_0x49[37]; /* RESERVED REGISTER BLOCK */
    register8_t TIMSK0;       /* Timer/Counter0 Interrupt Mask register */
    register8_t rsv_0x6F[71]; /* RESERVED REGISTER BLOCK */
    register8_t ASSR;         /* Asynchronous Status Register */
} TC0_t;


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

/* Output Compare Flag 0A */
typedef enum TC0_OCF0A_enum
{
    TC0_OCF0A_CLEAR_gc = (0x00), /* Output Compare Flag 0A - CLEAR */
    TC0_OCF0A_SET_gc   = (0x02), /* Output Compare Flag 0A - SET */
} TC0_OCF0A_t;

/* Timer/Counter0 Overflow Flag */
typedef enum TC0_TOV0_enum
{
    TC0_TOV0_CLEAR_gc = (0x00), /* Timer/Counter0 Overflow Flag - CLEAR */
    TC0_TOV0_SET_gc   = (0x01), /* Timer/Counter0 Overflow Flag - SET */
} TC0_TOV0_t;

/* Compare Output Mode bits */
#define TC0_TCCR0A_COM0A_gc(x) ((x<<6) & 0xC0)

/* Waveform Genration Mode bits */
#define TC0_TCCR0A_WGM0_gc(x) (x & 0x03)

/* Force Output Compare A */
typedef enum TC0_FOC0A_enum
{
    TC0_FOC0A_CLEAR_gc = (0x00), /* Force Output Compare A - CLEAR */
    TC0_FOC0A_SET_gc   = (0x80), /* Force Output Compare A - SET */
} TC0_FOC0A_t;

/* Clock Select bits */
typedef enum TC0_CS0_enum
{
    TC0_CS0_VAL_0x00_gc = (0x00), /* No Clock Source (Stopped) */
    TC0_CS0_VAL_0x01_gc = (0x01), /* Running, No Prescaling */
    TC0_CS0_VAL_0x02_gc = (0x02), /* Running, CLK/8 */
    TC0_CS0_VAL_0x03_gc = (0x03), /* Running, CLK/32 */
    TC0_CS0_VAL_0x04_gc = (0x04), /* Running, CLK/64 */
    TC0_CS0_VAL_0x05_gc = (0x05), /* Running, CLK/128 */
    TC0_CS0_VAL_0x06_gc = (0x06), /* Running, CLK/256 */
    TC0_CS0_VAL_0x07_gc = (0x07), /* Running, CLK/1024 */
} TC0_CS0_t;

/* Enable External Clock Input */
typedef enum TC0_EXCLK_enum
{
    TC0_EXCLK_CLEAR_gc = (0x00), /* Enable External Clock Input - CLEAR */
    TC0_EXCLK_SET_gc   = (0x40), /* Enable External Clock Input - SET */
} TC0_EXCLK_t;

/* Asynchronous Timer/Counter0 */
typedef enum TC0_AS0_enum
{
    TC0_AS0_CLEAR_gc = (0x00), /* Asynchronous Timer/Counter0 - CLEAR */
    TC0_AS0_SET_gc   = (0x20), /* Asynchronous Timer/Counter0 - SET */
} TC0_AS0_t;

/* Timer/Counter0 Update Busy */
typedef enum TC0_TCN0UB_enum
{
    TC0_TCN0UB_CLEAR_gc = (0x00), /* Timer/Counter0 Update Busy - CLEAR */
    TC0_TCN0UB_SET_gc   = (0x10), /* Timer/Counter0 Update Busy - SET */
} TC0_TCN0UB_t;

/* Output Compare Register 0A  Update Busy */
typedef enum TC0_OCR0AUB_enum
{
    TC0_OCR0AUB_CLEAR_gc = (0x00), /* Output Compare Register 0A  Update Busy - CLEAR */
    TC0_OCR0AUB_SET_gc   = (0x08), /* Output Compare Register 0A  Update Busy - SET */
} TC0_OCR0AUB_t;

/* Timer/Counter0 Control Register A Update Busy */
typedef enum TC0_TCR0AUB_enum
{
    TC0_TCR0AUB_CLEAR_gc = (0x00), /* Timer/Counter0 Control Register A Update Busy - CLEAR */
    TC0_TCR0AUB_SET_gc   = (0x02), /* Timer/Counter0 Control Register A Update Busy - SET */
} TC0_TCR0AUB_t;

/* Timer/Counter0 Control Register B Update Busy */
typedef enum TC0_TCR0BUB_enum
{
    TC0_TCR0BUB_CLEAR_gc = (0x00), /* Timer/Counter0 Control Register B Update Busy - CLEAR */
    TC0_TCR0BUB_SET_gc   = (0x01), /* Timer/Counter0 Control Register B Update Busy - SET */
} TC0_TCR0BUB_t;

/* Timer/Counter Synchronization Mode */
typedef enum TC0_TSM_enum
{
    TC0_TSM_CLEAR_gc = (0x00), /* Timer/Counter Synchronization Mode - CLEAR */
    TC0_TSM_SET_gc   = (0x80), /* Timer/Counter Synchronization Mode - SET */
} TC0_TSM_t;

/* Prescaler Reset Asynchronous 8-bit Timer/Counter0 */
typedef enum TC0_PSR0_enum
{
    TC0_PSR0_CLEAR_gc = (0x00), /* Prescaler Reset Asynchronous 8-bit Timer/Counter0 - CLEAR */
    TC0_PSR0_SET_gc   = (0x02), /* Prescaler Reset Asynchronous 8-bit Timer/Counter0 - SET */
} TC0_PSR0_t;

/* Prescaler Reset Synchronous 16-bit Timer/Counter1 */
typedef enum TC0_PSR1_enum
{
    TC0_PSR1_CLEAR_gc = (0x00), /* Prescaler Reset Synchronous 16-bit Timer/Counter1 - CLEAR */
    TC0_PSR1_SET_gc   = (0x01), /* Prescaler Reset Synchronous 16-bit Timer/Counter1 - SET */
} TC0_PSR1_t;

/*
--------------------------------------------------------------------------------
TC16 - Timer/Counter, 16-bit
--------------------------------------------------------------------------------
*/

typedef struct TC1_struct
{
    register8_t rsv_0x00[54]; /* RESERVED REGISTER BLOCK */
    register8_t TIFR1;        /* Timer/Counter1 Interrupt Flag register */
    register8_t rsv_0x37[56]; /* RESERVED REGISTER BLOCK */
    register8_t TIMSK1;       /* Timer/Counter1 Interrupt Mask Register */
    register8_t rsv_0x70[16]; /* RESERVED REGISTER BLOCK */
    register8_t TCCR1A;       /* Timer/Counter1 Control Register A */
    register8_t TCCR1B;       /* Timer/Counter1 Control Register B */
    register8_t TCCR1C;       /* Timer/Counter1 Control Register C */
    register8_t TCCR1D;       /* Timer/Counter1 Control Register D */
    _REGISTER16 (TCNT1);      /* Timer/Counter1  Bytes */
    register8_t rsv_0x85;     /* RESERVED REGISTER */
    _REGISTER16 (ICR1);       /* Timer/Counter1 Input Capture Register  Bytes */
    register8_t rsv_0x87;     /* RESERVED REGISTER */
    _REGISTER16 (OCR1A);      /* Timer/Counter1 Output Compare Register A  Bytes */
    register8_t rsv_0x89;     /* RESERVED REGISTER */
    _REGISTER16 (OCR1B);      /* Timer/Counter1 Output Compare Register B  Bytes */
} TC1_t;


/* Timer/Counter1 Input Capture Interrupt Enable */
typedef enum TC1_ICIE1_enum
{
    TC1_ICIE1_CLEAR_gc = (0x00), /* Timer/Counter1 Input Capture Interrupt Enable - CLEAR */
    TC1_ICIE1_SET_gc   = (0x20), /* Timer/Counter1 Input Capture Interrupt Enable - SET */
} TC1_ICIE1_t;

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

/* Timer/Counter1 Clock Select bits */
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

/* Timer/Counter1 Force Output Compare for Channel A */
typedef enum TC1_FOC1A_enum
{
    TC1_FOC1A_CLEAR_gc = (0x00), /* Timer/Counter1 Force Output Compare for Channel A - CLEAR */
    TC1_FOC1A_SET_gc   = (0x80), /* Timer/Counter1 Force Output Compare for Channel A - SET */
} TC1_FOC1A_t;

/* Timer/Counter1 Force Output Compare for Channel B */
typedef enum TC1_FOC1B_enum
{
    TC1_FOC1B_CLEAR_gc = (0x00), /* Timer/Counter1 Force Output Compare for Channel B - CLEAR */
    TC1_FOC1B_SET_gc   = (0x40), /* Timer/Counter1 Force Output Compare for Channel B - SET */
} TC1_FOC1B_t;

/* Timer/Counter1 Output Compare X-pin Enable for Channel B */
typedef enum TC1_OC1BX_enum
{
    TC1_OC1BX_CLEAR_gc = (0x00), /* Timer/Counter1 Output Compare X-pin Enable for Channel B - CLEAR */
    TC1_OC1BX_SET_gc   = (0x80), /* Timer/Counter1 Output Compare X-pin Enable for Channel B - SET */
} TC1_OC1BX_t;

/* Timer/Counter1 Output Compare W-pin Enable for Channel B */
typedef enum TC1_OC1BW_enum
{
    TC1_OC1BW_CLEAR_gc = (0x00), /* Timer/Counter1 Output Compare W-pin Enable for Channel B - CLEAR */
    TC1_OC1BW_SET_gc   = (0x40), /* Timer/Counter1 Output Compare W-pin Enable for Channel B - SET */
} TC1_OC1BW_t;

/* Timer/Counter1 Output Compare V-pin Enable for Channel B */
typedef enum TC1_OC1BV_enum
{
    TC1_OC1BV_CLEAR_gc = (0x00), /* Timer/Counter1 Output Compare V-pin Enable for Channel B - CLEAR */
    TC1_OC1BV_SET_gc   = (0x20), /* Timer/Counter1 Output Compare V-pin Enable for Channel B - SET */
} TC1_OC1BV_t;

/* Timer/Counter1 Output Compare U-pin Enable for Channel B */
typedef enum TC1_OC1BU_enum
{
    TC1_OC1BU_CLEAR_gc = (0x00), /* Timer/Counter1 Output Compare U-pin Enable for Channel B - CLEAR */
    TC1_OC1BU_SET_gc   = (0x10), /* Timer/Counter1 Output Compare U-pin Enable for Channel B - SET */
} TC1_OC1BU_t;

/* Timer/Counter1 Output Compare X-pin Enable for Channel A */
typedef enum TC1_OC1AX_enum
{
    TC1_OC1AX_CLEAR_gc = (0x00), /* Timer/Counter1 Output Compare X-pin Enable for Channel A - CLEAR */
    TC1_OC1AX_SET_gc   = (0x08), /* Timer/Counter1 Output Compare X-pin Enable for Channel A - SET */
} TC1_OC1AX_t;

/* Timer/Counter1 Output Compare W-pin Enable for Channel A */
typedef enum TC1_OC1AW_enum
{
    TC1_OC1AW_CLEAR_gc = (0x00), /* Timer/Counter1 Output Compare W-pin Enable for Channel A - CLEAR */
    TC1_OC1AW_SET_gc   = (0x04), /* Timer/Counter1 Output Compare W-pin Enable for Channel A - SET */
} TC1_OC1AW_t;

/* Timer/Counter1 Output Compare V-pin Enable for Channel A */
typedef enum TC1_OC1AV_enum
{
    TC1_OC1AV_CLEAR_gc = (0x00), /* Timer/Counter1 Output Compare V-pin Enable for Channel A - CLEAR */
    TC1_OC1AV_SET_gc   = (0x02), /* Timer/Counter1 Output Compare V-pin Enable for Channel A - SET */
} TC1_OC1AV_t;

/* Timer/Counter1 Output Compare U-pin Enable for Channel A */
typedef enum TC1_OC1AU_enum
{
    TC1_OC1AU_CLEAR_gc = (0x00), /* Timer/Counter1 Output Compare U-pin Enable for Channel A - CLEAR */
    TC1_OC1AU_SET_gc   = (0x01), /* Timer/Counter1 Output Compare U-pin Enable for Channel A - SET */
} TC1_OC1AU_t;

/*
--------------------------------------------------------------------------------
WDT - Watchdog Timer
--------------------------------------------------------------------------------
*/

typedef struct WDT_struct
{
    register8_t rsv_0x00[96]; /* RESERVED REGISTER BLOCK */
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


/* EEPROM Programming Mode Bits */
typedef enum EEPROM_EEPM_enum
{
    EEPROM_EEPM_VAL_0x00_gc = (0x00<<4), /* Erase and Write in one operation */
    EEPROM_EEPM_VAL_0x01_gc = (0x01<<4), /* Erase Only */
    EEPROM_EEPM_VAL_0x02_gc = (0x02<<4), /* Write Only */
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

/* Double SPI Speed Bit */
typedef enum SPI_SPI2X_enum
{
    SPI_SPI2X_CLEAR_gc = (0x00), /* Double SPI Speed Bit - CLEAR */
    SPI_SPI2X_SET_gc   = (0x01), /* Double SPI Speed Bit - SET */
} SPI_SPI2X_t;

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
    SPI_CPOL_CLEAR_gc = (0x00), /* Clock polarity - CLEAR */
    SPI_CPOL_SET_gc   = (0x08), /* Clock polarity - SET */
} SPI_CPOL_t;

/* Clock Phase */
typedef enum SPI_CPHA_enum
{
    SPI_CPHA_CLEAR_gc = (0x00), /* Clock Phase - CLEAR */
    SPI_CPHA_SET_gc   = (0x04), /* Clock Phase - SET */
} SPI_CPHA_t;

/* SPI Clock Rate Selects */
typedef enum SPI_SPR_enum
{
    SPI_SPR_VAL_0x00_gc = (0x00), /* fosc/4 */
    SPI_SPR_VAL_0x01_gc = (0x01), /* fosc/16 */
    SPI_SPR_VAL_0x02_gc = (0x02), /* fosc/64 */
    SPI_SPR_VAL_0x03_gc = (0x03), /* fosc/128 */
    SPI_SPR_VAL_0x04_gc = (0x04), /* fosc/2 */
    SPI_SPR_VAL_0x05_gc = (0x05), /* fosc/8 */
    SPI_SPR_VAL_0x06_gc = (0x06), /* fosc/32 */
    SPI_SPR_VAL_0x07_gc = (0x07), /* fosc/64 */
} SPI_SPR_t;

/*
--------------------------------------------------------------------------------
ADC - Analog-to-Digital Converter
--------------------------------------------------------------------------------
*/

typedef struct ADC_struct
{
    register8_t rsv_0x00[119]; /* RESERVED REGISTER BLOCK */
    register8_t AMISCR;        /* Analog Miscellaneous Control Register (Shared with CURRENT_SOURCE IO_MODULE) */
    _REGISTER16 (ADC);         /* ADC Data Register  Bytes */
    register8_t rsv_0x79;      /* RESERVED REGISTER */
    register8_t ADCSRA;        /* The ADC Control and Status register A */
    register8_t ADCSRB;        /* The ADC Control and Status register B (Shared with ANALOG_COMPARATOR IO_MODULE) */
    register8_t ADMUX;         /* The ADC multiplexer Selection Register */
    register8_t rsv_0x7D;      /* RESERVED REGISTER */
    register8_t DIDR0;         /* Digital Input Disable Register 0 */
    register8_t DIDR1;         /* Digital Input Disable Register 1 */
} ADC_t;


/* Reference Selection Bits */
typedef enum ADC_REFS_enum
{
    ADC_REFS_VAL_0x00_gc = (0x00<<6), /* If AREFEN==0 then Internal AVCC as Voltage Reference. If AREFEN==1 then AREF pin as Voltage Reference.   */
    ADC_REFS_VAL_0x01_gc = (0x01<<6), /* If AREFEN==0 then Internal 1.1V as Voltage Reference without external capacitor. If AREFEN==1 then Internal 1.1V as Voltage Reference with external capacitor at AREF pin. */
    ADC_REFS_VAL_0x02_gc = (0x02<<6), /* If AREFEN==0 then Internal AVCC as Voltage Reference. If AREFEN==1 then AREF pin as Voltage Reference.   */
    ADC_REFS_VAL_0x03_gc = (0x03<<6), /* If AREFEN==0 then Internal 2.56V as Voltage Reference without external capacitor. If AREFEN==1 then Internal 2.56V as Voltage Reference with external capacitor at AREF pin. */
} ADC_REFS_t;

/* Left Adjust Result */
typedef enum ADC_ADLAR_enum
{
    ADC_ADLAR_CLEAR_gc = (0x00), /* Left Adjust Result - CLEAR */
    ADC_ADLAR_SET_gc   = (0x20), /* Left Adjust Result - SET */
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

/* ADC  Auto Trigger Enable */
typedef enum ADC_ADATE_enum
{
    ADC_ADATE_CLEAR_gc = (0x00), /* ADC  Auto Trigger Enable - CLEAR */
    ADC_ADATE_SET_gc   = (0x20), /* ADC  Auto Trigger Enable - SET */
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

/* Bipolar Input Mode */
typedef enum ADC_BIN_enum
{
    ADC_BIN_CLEAR_gc = (0x00), /* Bipolar Input Mode - CLEAR */
    ADC_BIN_SET_gc   = (0x80), /* Bipolar Input Mode - SET */
} ADC_BIN_t;

/* ADC Auto Trigger Source bits */
typedef enum ADC_ADTS_enum
{
    ADC_ADTS_VAL_0x00_gc = (0x00), /* Free Running mode */
    ADC_ADTS_VAL_0x01_gc = (0x01), /* Analog Comparator */
    ADC_ADTS_VAL_0x02_gc = (0x02), /* External Interrupt Request 0 */
    ADC_ADTS_VAL_0x03_gc = (0x03), /* Timer/Counter1 Compare Match A */
    ADC_ADTS_VAL_0x04_gc = (0x04), /* Timer/Counter1 Overflow */
    ADC_ADTS_VAL_0x05_gc = (0x05), /* Timer/Counter1 Compare Match B */
    ADC_ADTS_VAL_0x06_gc = (0x06), /* Timer/Counter1 Capture Event */
    ADC_ADTS_VAL_0x07_gc = (0x07), /* Watchdog Interrupt Request */
} ADC_ADTS_t;

/* External Voltage Reference Input Enable */
typedef enum ADC_AREFEN_enum
{
    ADC_AREFEN_CLEAR_gc = (0x00), /* External Voltage Reference Input Enable - CLEAR */
    ADC_AREFEN_SET_gc   = (0x04), /* External Voltage Reference Input Enable - SET */
} ADC_AREFEN_t;

/* Internal Voltage Reference Output Enable */
typedef enum ADC_XREFEN_enum
{
    ADC_XREFEN_CLEAR_gc = (0x00), /* Internal Voltage Reference Output Enable - CLEAR */
    ADC_XREFEN_SET_gc   = (0x02), /* Internal Voltage Reference Output Enable - SET */
} ADC_XREFEN_t;

/* Digital Input Disable Register 1-ADC10D */
typedef enum ADC_ADC10D_enum
{
    ADC_ADC10D_CLEAR_gc = (0x00), /* Digital Input Disable Register 1-ADC10D - CLEAR */
    ADC_ADC10D_SET_gc   = (0x40), /* Digital Input Disable Register 1-ADC10D - SET */
} ADC_ADC10D_t;

/* Digital Input Disable Register 1-ADC9D */
typedef enum ADC_ADC9D_enum
{
    ADC_ADC9D_CLEAR_gc = (0x00), /* Digital Input Disable Register 1-ADC9D - CLEAR */
    ADC_ADC9D_SET_gc   = (0x20), /* Digital Input Disable Register 1-ADC9D - SET */
} ADC_ADC9D_t;

/* Digital Input Disable Register 1-ADC8D */
typedef enum ADC_ADC8D_enum
{
    ADC_ADC8D_CLEAR_gc = (0x00), /* Digital Input Disable Register 1-ADC8D - CLEAR */
    ADC_ADC8D_SET_gc   = (0x10), /* Digital Input Disable Register 1-ADC8D - SET */
} ADC_ADC8D_t;

/* Digital Input Disable Register 0-ADC7D */
typedef enum ADC_ADC7D_enum
{
    ADC_ADC7D_CLEAR_gc = (0x00), /* Digital Input Disable Register 0-ADC7D - CLEAR */
    ADC_ADC7D_SET_gc   = (0x80), /* Digital Input Disable Register 0-ADC7D - SET */
} ADC_ADC7D_t;

/* Digital Input Disable Register 0-ADC6D */
typedef enum ADC_ADC6D_enum
{
    ADC_ADC6D_CLEAR_gc = (0x00), /* Digital Input Disable Register 0-ADC6D - CLEAR */
    ADC_ADC6D_SET_gc   = (0x40), /* Digital Input Disable Register 0-ADC6D - SET */
} ADC_ADC6D_t;

/* Digital Input Disable Register 0-ADC5D */
typedef enum ADC_ADC5D_enum
{
    ADC_ADC5D_CLEAR_gc = (0x00), /* Digital Input Disable Register 0-ADC5D - CLEAR */
    ADC_ADC5D_SET_gc   = (0x20), /* Digital Input Disable Register 0-ADC5D - SET */
} ADC_ADC5D_t;

/* Digital Input Disable Register 0-ADC4D */
typedef enum ADC_ADC4D_enum
{
    ADC_ADC4D_CLEAR_gc = (0x00), /* Digital Input Disable Register 0-ADC4D - CLEAR */
    ADC_ADC4D_SET_gc   = (0x10), /* Digital Input Disable Register 0-ADC4D - SET */
} ADC_ADC4D_t;

/* Digital Input Disable Register 0-ADC3D */
typedef enum ADC_ADC3D_enum
{
    ADC_ADC3D_CLEAR_gc = (0x00), /* Digital Input Disable Register 0-ADC3D - CLEAR */
    ADC_ADC3D_SET_gc   = (0x08), /* Digital Input Disable Register 0-ADC3D - SET */
} ADC_ADC3D_t;

/* Digital Input Disable Register 0-ADC2D */
typedef enum ADC_ADC2D_enum
{
    ADC_ADC2D_CLEAR_gc = (0x00), /* Digital Input Disable Register 0-ADC2D - CLEAR */
    ADC_ADC2D_SET_gc   = (0x04), /* Digital Input Disable Register 0-ADC2D - SET */
} ADC_ADC2D_t;

/* Digital Input Disable Register 0-ADC1D */
typedef enum ADC_ADC1D_enum
{
    ADC_ADC1D_CLEAR_gc = (0x00), /* Digital Input Disable Register 0-ADC1D - CLEAR */
    ADC_ADC1D_SET_gc   = (0x02), /* Digital Input Disable Register 0-ADC1D - SET */
} ADC_ADC1D_t;

/* Digital Input Disable Register 0-ADC0D */
typedef enum ADC_ADC0D_enum
{
    ADC_ADC0D_CLEAR_gc = (0x00), /* Digital Input Disable Register 0-ADC0D - CLEAR */
    ADC_ADC0D_SET_gc   = (0x01), /* Digital Input Disable Register 0-ADC0D - SET */
} ADC_ADC0D_t;

/*
--------------------------------------------------------------------------------
CURRENT_SOURCE - Current Source
--------------------------------------------------------------------------------
*/

typedef struct CURRENT_SOURCE_struct
{
    register8_t rsv_0x00[119]; /* RESERVED REGISTER BLOCK */
    register8_t AMISCR;        /* Analog Miscellaneous Control Register (Shared with AD_CONVERTER IO_MODULE) */
} CURRENT_SOURCE_t;


/* Current Source Enable */
typedef enum CURRENT_SOURCE_ISRCEN_enum
{
    CURRENT_SOURCE_ISRCEN_CLEAR_gc = (0x00), /* Current Source Enable - CLEAR */
    CURRENT_SOURCE_ISRCEN_SET_gc   = (0x01), /* Current Source Enable - SET */
} CURRENT_SOURCE_ISRCEN_t;

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
    register8_t ADCSRB;       /* Analog Comparator & ADC Control and Status Register B (Shared with AD_CONVERTER IO_MODULE) */
} AC_t;


/* Analog Comparator Multiplexer Enable */
typedef enum AC_ACME_enum
{
    AC_ACME_CLEAR_gc = (0x00), /* Analog Comparator Multiplexer Enable - CLEAR */
    AC_ACME_SET_gc   = (0x40), /* Analog Comparator Multiplexer Enable - SET */
} AC_ACME_t;

/* Analog Comparator Internal Voltage Reference Select Bits */
#define AC_ADCSRB_ACIR_gc(x) ((x<<4) & 0x30)

/* Analog Comparator Disable */
typedef enum AC_ACD_enum
{
    AC_ACD_CLEAR_gc = (0x00), /* Analog Comparator Disable - CLEAR */
    AC_ACD_SET_gc   = (0x80), /* Analog Comparator Disable - SET */
} AC_ACD_t;

/* Analog Comparator Internal Reference Select */
typedef enum AC_ACIRS_enum
{
    AC_ACIRS_CLEAR_gc = (0x00), /* Analog Comparator Internal Reference Select - CLEAR */
    AC_ACIRS_SET_gc   = (0x40), /* Analog Comparator Internal Reference Select - SET */
} AC_ACIRS_t;

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
    register8_t EICRA;        /* External Interrupt Control Register */
    register8_t rsv_0x6A;     /* RESERVED REGISTER */
    register8_t PCMSK0;       /* Pin Change Mask Register 0 */
    register8_t PCMSK1;       /* Pin Change Mask Register 1 */
} EXINT_t;


/* External Interrupt Sense Control 1 Bits */
typedef enum EXINT_ISC1_enum
{
    EXINT_ISC1_VAL_0x00_gc = (0x00<<2), /* Low Level of INTX */
    EXINT_ISC1_VAL_0x01_gc = (0x01<<2), /* Any Logical Change in INTX */
    EXINT_ISC1_VAL_0x02_gc = (0x02<<2), /* Falling Edge of INTX */
    EXINT_ISC1_VAL_0x03_gc = (0x03<<2), /* Rising Edge of INTX */
} EXINT_ISC1_t;

/* External Interrupt Sense Control 0 Bits */
typedef enum EXINT_ISC0_enum
{
    EXINT_ISC0_VAL_0x00_gc = (0x00), /* Low Level of INTX */
    EXINT_ISC0_VAL_0x01_gc = (0x01), /* Any Logical Change in INTX */
    EXINT_ISC0_VAL_0x02_gc = (0x02), /* Falling Edge of INTX */
    EXINT_ISC0_VAL_0x03_gc = (0x03), /* Rising Edge of INTX */
} EXINT_ISC0_t;

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

/* Clear Temporary Page Buffer */
typedef enum BOOT_LOAD_CTPB_enum
{
    BOOT_LOAD_CTPB_CLEAR_gc = (0x00), /* Clear Temporary Page Buffer - CLEAR */
    BOOT_LOAD_CTPB_SET_gc   = (0x10), /* Clear Temporary Page Buffer - SET */
} BOOT_LOAD_CTPB_t;

/* Read Fuse and Lock Bits */
typedef enum BOOT_LOAD_RFLB_enum
{
    BOOT_LOAD_RFLB_CLEAR_gc = (0x00), /* Read Fuse and Lock Bits - CLEAR */
    BOOT_LOAD_RFLB_SET_gc   = (0x08), /* Read Fuse and Lock Bits - SET */
} BOOT_LOAD_RFLB_t;

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
    register8_t rsv_0x00[50]; /* RESERVED REGISTER BLOCK */
    register8_t PORTCR;       /* Port Control Register */
    register8_t rsv_0x33[11]; /* RESERVED REGISTER BLOCK */
    register8_t GPIOR0;       /* General purpose register 0 */
    register8_t rsv_0x3F[11]; /* RESERVED REGISTER BLOCK */
    register8_t GPIOR1;       /* General Purpose register 1 */
    register8_t GPIOR2;       /* General Purpose IO register 2 */
    register8_t rsv_0x4C[5];  /* RESERVED REGISTER BLOCK */
    register8_t DWDR;         /* DebugWire data register */
    register8_t rsv_0x52;     /* RESERVED REGISTER */
    register8_t SMCR;         /* Sleep Mode Control Register */
    register8_t MCUSR;        /* MCU Status register */
    register8_t MCUCR;        /* MCU Control Register */
    register8_t rsv_0x56[7];  /* RESERVED REGISTER BLOCK */
    _REGISTER16 (SP);         /* Stack Pointer  Bytes */
    register8_t rsv_0x5E;     /* RESERVED REGISTER */
    register8_t SREG;         /* Status Register */
    register8_t rsv_0x60;     /* RESERVED REGISTER */
    register8_t CLKPR;        /* Clock Prescale Register */
    register8_t CLKCSR;       /* Clock Control & Status Register */
    register8_t CLKSELR;      /* Clock Selection Register */
    register8_t PRR;          /* Power Reduction Register */
    register8_t rsv_0x65;     /* RESERVED REGISTER */
    register8_t OSCCAL;       /* Oscillator Calibration Register */
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

/* Power Reduction LINUART */
typedef enum CPU_PRLIN_enum
{
    CPU_PRLIN_CLEAR_gc = (0x00), /* Power Reduction LINUART - CLEAR */
    CPU_PRLIN_SET_gc   = (0x20), /* Power Reduction LINUART - SET */
} CPU_PRLIN_t;

/* Power Reduction SPI */
typedef enum CPU_PRSPI_enum
{
    CPU_PRSPI_CLEAR_gc = (0x00), /* Power Reduction SPI - CLEAR */
    CPU_PRSPI_SET_gc   = (0x10), /* Power Reduction SPI - SET */
} CPU_PRSPI_t;

/* Power Reduction Timer/Counter1 */
typedef enum CPU_PRTIM1_enum
{
    CPU_PRTIM1_CLEAR_gc = (0x00), /* Power Reduction Timer/Counter1 - CLEAR */
    CPU_PRTIM1_SET_gc   = (0x08), /* Power Reduction Timer/Counter1 - SET */
} CPU_PRTIM1_t;

/* Power Reduction Timer/Counter0 */
typedef enum CPU_PRTIM0_enum
{
    CPU_PRTIM0_CLEAR_gc = (0x00), /* Power Reduction Timer/Counter0 - CLEAR */
    CPU_PRTIM0_SET_gc   = (0x04), /* Power Reduction Timer/Counter0 - SET */
} CPU_PRTIM0_t;

/* Power Reduction USI */
typedef enum CPU_PRUSI_enum
{
    CPU_PRUSI_CLEAR_gc = (0x00), /* Power Reduction USI - CLEAR */
    CPU_PRUSI_SET_gc   = (0x02), /* Power Reduction USI - SET */
} CPU_PRUSI_t;

/* Power Reduction ADC */
typedef enum CPU_PRADC_enum
{
    CPU_PRADC_CLEAR_gc = (0x00), /* Power Reduction ADC - CLEAR */
    CPU_PRADC_SET_gc   = (0x01), /* Power Reduction ADC - SET */
} CPU_PRADC_t;

/* BOD Sleep */
typedef enum CPU_BODS_enum
{
    CPU_BODS_CLEAR_gc = (0x00), /* BOD Sleep - CLEAR */
    CPU_BODS_SET_gc   = (0x40), /* BOD Sleep - SET */
} CPU_BODS_t;

/* BOD Sleep Enable */
typedef enum CPU_BODSE_enum
{
    CPU_BODSE_CLEAR_gc = (0x00), /* BOD Sleep Enable - CLEAR */
    CPU_BODSE_SET_gc   = (0x20), /* BOD Sleep Enable - SET */
} CPU_BODSE_t;

/* Pull-up Disable */
typedef enum CPU_PUD_enum
{
    CPU_PUD_CLEAR_gc = (0x00), /* Pull-up Disable - CLEAR */
    CPU_PUD_SET_gc   = (0x10), /* Pull-up Disable - SET */
} CPU_PUD_t;

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

/* Sleep Mode Select Bits */
typedef enum CPU_SM_enum
{
    CPU_SM_IDLE_gc     = (0x00<<1), /* Idle */
    CPU_SM_ADC_gc      = (0x01<<1), /* ADC Noise Reduction (If Available) */
    CPU_SM_PDOWN_gc    = (0x02<<1), /* Power Down */
    CPU_SM_VAL_0x03_gc = (0x03<<1), /* Reserved */
} CPU_SM_t;

/* Sleep Enable */
typedef enum CPU_SE_enum
{
    CPU_SE_CLEAR_gc = (0x00), /* Sleep Enable - CLEAR */
    CPU_SE_SET_gc   = (0x01), /* Sleep Enable - SET */
} CPU_SE_t;

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

/* Clock Out - CKOUT fuse substitution */
typedef enum CPU_COUT_enum
{
    CPU_COUT_CLEAR_gc = (0x00), /* Clock Out - CKOUT fuse substitution - CLEAR */
    CPU_COUT_SET_gc   = (0x40), /* Clock Out - CKOUT fuse substitution - SET */
} CPU_COUT_t;

/* Clock Start-up Time bit 1 - SUT1 fuse substitution */
#define CPU_CLKSELR_CSUT_gc(x) ((x<<4) & 0x30)

/* Clock Source Select bit 3 - CKSEL3 fuse substitution */
#define CPU_CLKSELR_CSEL_gc(x) (x & 0x0F)

/* Clock Control Change Enable */
typedef enum CPU_CLKCCE_enum
{
    CPU_CLKCCE_CLEAR_gc = (0x00), /* Clock Control Change Enable - CLEAR */
    CPU_CLKCCE_SET_gc   = (0x80), /* Clock Control Change Enable - SET */
} CPU_CLKCCE_t;

/* Clock Ready Flag */
typedef enum CPU_CLKRDY_enum
{
    CPU_CLKRDY_CLEAR_gc = (0x00), /* Clock Ready Flag - CLEAR */
    CPU_CLKRDY_SET_gc   = (0x10), /* Clock Ready Flag - SET */
} CPU_CLKRDY_t;

/* Clock Control bits */
typedef enum CPU_CLKC_enum
{
    CPU_CLKC_VAL_0x00_gc = (0x00), /* No Command */
    CPU_CLKC_VAL_0x01_gc = (0x01), /* Disable Clock Source */
    CPU_CLKC_VAL_0x02_gc = (0x02), /* Enable Clock Source */
    CPU_CLKC_VAL_0x03_gc = (0x03), /* Request for Clock Availability */
    CPU_CLKC_VAL_0x04_gc = (0x04), /* Clock Source Switch */
    CPU_CLKC_VAL_0x05_gc = (0x05), /* Recovery System Clock Source Code */
    CPU_CLKC_VAL_0x06_gc = (0x06), /* Enable Watchdog in Automatic Reload Mode */
    CPU_CLKC_VAL_0x07_gc = (0x07), /* CKOUT Command */
    CPU_CLKC_VAL_0x08_gc = (0x08), /* From 0x08 up to 0x0F: No command */
} CPU_CLKC_t;

/* Port Control Register-BBMB */
typedef enum CPU_BBMB_enum
{
    CPU_BBMB_CLEAR_gc = (0x00), /* Port Control Register-BBMB - CLEAR */
    CPU_BBMB_SET_gc   = (0x20), /* Port Control Register-BBMB - SET */
} CPU_BBMB_t;

/* Port Control Register-BBMA */
typedef enum CPU_BBMA_enum
{
    CPU_BBMA_CLEAR_gc = (0x00), /* Port Control Register-BBMA - CLEAR */
    CPU_BBMA_SET_gc   = (0x10), /* Port Control Register-BBMA - SET */
} CPU_BBMA_t;

/* Port Control Register-PUDB */
typedef enum CPU_PUDB_enum
{
    CPU_PUDB_CLEAR_gc = (0x00), /* Port Control Register-PUDB - CLEAR */
    CPU_PUDB_SET_gc   = (0x02), /* Port Control Register-PUDB - SET */
} CPU_PUDB_t;

/* Port Control Register-PUDA */
typedef enum CPU_PUDA_enum
{
    CPU_PUDA_CLEAR_gc = (0x00), /* Port Control Register-PUDA - CLEAR */
    CPU_PUDA_SET_gc   = (0x01), /* Port Control Register-PUDA - SET */
} CPU_PUDA_t;
/*
================================================================================
IO Module Instances. Mapped to memory.
================================================================================
*/

#define PORTA          (*(PORTA_t *) 0x0000)          /* I/O Port */
#define PORTB          (*(PORTB_t *) 0x0000)          /* I/O Port */
#define LINUART        (*(LINUART_t *) 0x0000)        /* Local Interconnect Network */
#define USI            (*(USI_t *) 0x0000)            /* Universal Serial Interface */
#define TC0            (*(TC0_t *) 0x0000)            /* Timer/Counter, 8-bit Async */
#define TC1            (*(TC1_t *) 0x0000)            /* Timer/Counter, 16-bit */
#define WDT            (*(WDT_t *) 0x0000)            /* Watchdog Timer */
#define EEPROM         (*(EEPROM_t *) 0x0000)         /* EEPROM */
#define SPI            (*(SPI_t *) 0x0000)            /* Serial Peripheral Interface */
#define ADC            (*(ADC_t *) 0x0000)            /* Analog-to-Digital Converter */
#define CURRENT_SOURCE (*(CURRENT_SOURCE_t *) 0x0000) /* Current Source */
#define AC             (*(AC_t *) 0x0000)             /* Analog Comparator */
#define EXINT          (*(EXINT_t *) 0x0000)          /* External Interrupts */
#define BOOT_LOAD      (*(BOOT_LOAD_t *) 0x0000)      /* Bootloader */
#define CPU            (*(CPU_t *) 0x0000)            /* CPU Registers */
#define FUSE           (*(FUSE_t *) 0x0000)           /* Fuses */
#define LOCKBIT        (*(LOCKBIT_t *) 0x0000)        /* Lockbits */
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


/* Reset Disabled (Enable PB7 as i/o pin) */
#define FUSE_RSTDISBL_CLEAR_gc (0x00) /* Reset Disabled (Enable PB7 as i/o pin) - CLEAR */
#define FUSE_RSTDISBL_SET_gc   (0x80) /* Reset Disabled (Enable PB7 as i/o pin) - SET */


/* Debug Wire enable */
#define FUSE_DWEN_CLEAR_gc (0x00) /* Debug Wire enable - CLEAR */
#define FUSE_DWEN_SET_gc   (0x40) /* Debug Wire enable - SET */


/* Serial program downloading (SPI) enabled */
#define FUSE_SPIEN_CLEAR_gc (0x00) /* Serial program downloading (SPI) enabled - CLEAR */
#define FUSE_SPIEN_SET_gc   (0x20) /* Serial program downloading (SPI) enabled - SET */


/* Watch-dog Timer always ON */
#define FUSE_WDTON_CLEAR_gc (0x00) /* Watch-dog Timer always ON - CLEAR */
#define FUSE_WDTON_SET_gc   (0x10) /* Watch-dog Timer always ON - SET */


/* Preserve EEPROM through the Chip Erase cycle */
#define FUSE_EESAVE_CLEAR_gc (0x00) /* Preserve EEPROM through the Chip Erase cycle - CLEAR */
#define FUSE_EESAVE_SET_gc   (0x08) /* Preserve EEPROM through the Chip Erase cycle - SET */


/* Brown-out Detector trigger level */
#define FUSE_BODLEVEL_4V3_gc      (0x04) /* Brown-out detection at VCC=4.3 V */
#define FUSE_BODLEVEL_2V7_gc      (0x05) /* Brown-out detection at VCC=2.7 V */
#define FUSE_BODLEVEL_1V8_gc      (0x06) /* Brown-out detection at VCC=1.8 V */
#define FUSE_BODLEVEL_2V3_gc      (0x03) /* Brown-out detection at VCC=2.3 V */
#define FUSE_BODLEVEL_2V2_gc      (0x02) /* Brown-out detection at VCC=2.2 V */
#define FUSE_BODLEVEL_1V9_gc      (0x01) /* Brown-out detection at VCC=1.9 V */
#define FUSE_BODLEVEL_2V0_gc      (0x00) /* Brown-out detection at VCC=2.0 V */
#define FUSE_BODLEVEL_DISABLED_gc (0x07) /* Brown-out detection disabled */


/* Divide clock by 8 internally */
#define FUSE_CKDIV8_CLEAR_gc (0x00) /* Divide clock by 8 internally - CLEAR */
#define FUSE_CKDIV8_SET_gc   (0x80) /* Divide clock by 8 internally - SET */


/* Clock output on PORTB5 */
#define FUSE_CKOUT_CLEAR_gc (0x00) /* Clock output on PORTB5 - CLEAR */
#define FUSE_CKOUT_SET_gc   (0x40) /* Clock output on PORTB5 - SET */


/* Select Clock source */
#define FUSE_SUT_CKSEL_EXTCLK_6CK_14CK_0MS_gc                 (0x00) /* Ext. Clock; Start-up time PWRDWN/RESET: 6 CK/14 CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTCLK_6CK_14CK_4MS_gc                 (0x10) /* Ext. Clock; Start-up time PWRDWN/RESET: 6 CK/14 CK + 4 ms */
#define FUSE_SUT_CKSEL_EXTCLK_6CK_14CK_64MS_gc                (0x20) /* Ext. Clock; Start-up time PWRDWN/RESET: 6 CK/14 CK + 64 ms */
#define FUSE_SUT_CKSEL_INTRCOSC_8MHZ_6CK_14CK_0MS_gc          (0x02) /* Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 0 ms */
#define FUSE_SUT_CKSEL_INTRCOSC_8MHZ_6CK_14CK_4MS_gc          (0x12) /* Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 4 ms */
#define FUSE_SUT_CKSEL_INTRCOSC_8MHZ_6CK_14CK_64MS_gc         (0x22) /* Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 64 ms */
#define FUSE_SUT_CKSEL_WDOSC_128KHZ_6CK_14CK_0MS_gc           (0x03) /* WD. Osc. 128 kHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 0 ms */
#define FUSE_SUT_CKSEL_WDOSC_128KHZ_6CK_14CK_4MS_gc           (0x13) /* WD. Osc. 128 kHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 4 ms */
#define FUSE_SUT_CKSEL_WDOSC_128KHZ_6CK_14CK_64MS_gc          (0x23) /* WD. Osc. 128 kHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 64 ms */
#define FUSE_SUT_CKSEL_EXTLOFXTAL_1KCK_4MS_gc                 (0x04) /* Ext. Low-Freq. Crystal; Start-up time PWRDWN/RESET: 1024 CK 4 ms */
#define FUSE_SUT_CKSEL_EXTLOFXTAL_1KCK_64MS_gc                (0x14) /* Ext. Low-Freq. Crystal; Start-up time PWRDWN/RESET: 1024 CK + 64 ms */
#define FUSE_SUT_CKSEL_EXTLOFXTAL_32KCK_64MS_gc               (0x24) /* Ext. Low-Freq. Crystal; Start-up time PWRDWN/RESET: 32768 CK + 64 ms */
#define FUSE_SUT_CKSEL_EXTCRES_0MHZ4_0MHZ9_258CK_14CK_4MS1_gc (0x08) /* Ext. Ceramic Res. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTCRES_0MHZ4_0MHZ9_258CK_14CK_65MS_gc (0x18) /* Ext. Ceramic Res. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTCRES_0MHZ4_0MHZ9_1KCK_14CK_0MS_gc   (0x28) /* Ext. Ceramic Res. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 1024 CK /14 CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTCRES_0MHZ4_0MHZ9_1KCK_14CK_4MS1_gc  (0x38) /* Ext. Ceramic Res. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 1024 CK /14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTCRES_0MHZ4_0MHZ9_1KCK_14CK_65MS_gc  (0x09) /* Ext. Ceramic Res. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 1024 CK /14 CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_16KCK_14CK_0MS_gc  (0x19) /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 16384 CK/14 CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_16KCK_14CK_4MS1_gc (0x29) /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 16384 CK/14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_16KCK_14CK_65MS_gc (0x39) /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 16384 CK/14 CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTCRES_0MHZ9_3MHZ_258CK_14CK_4MS1_gc  (0x0A) /* Ext. Ceramic Res. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTCRES_0MHZ9_3MHZ_258CK_14CK_65MS_gc  (0x1A) /* Ext. Ceramic Res. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTCRES_0MHZ9_3MHZ_1KCK_14CK_0MS_gc    (0x2A) /* Ext. Ceramic Res. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 1024 CK /14 CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTCRES_0MHZ9_3MHZ_1KCK_14CK_4MS1_gc   (0x3A) /* Ext. Ceramic Res. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 1024 CK /14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTCRES_0MHZ9_3MHZ_1KCK_14CK_65MS_gc   (0x0B) /* Ext. Ceramic Res. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 1024 CK /14 CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_16KCK_14CK_0MS_gc   (0x1B) /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 16384 CK/14 CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_16KCK_14CK_4MS1_gc  (0x2B) /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 16384 CK/14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_16KCK_14CK_65MS_gc  (0x3B) /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 16384 CK/14 CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTCRES_3MHZ_8MHZ_258CK_14CK_4MS1_gc   (0x0C) /* Ext. Ceramic Res. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTCRES_3MHZ_8MHZ_258CK_14CK_65MS_gc   (0x1C) /* Ext. Ceramic Res. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTCRES_3MHZ_8MHZ_1KCK_14CK_0MS_gc     (0x2C) /* Ext. Ceramic Res. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 1024 CK /14 CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTCRES_3MHZ_8MHZ_1KCK_14CK_4MS1_gc    (0x3C) /* Ext. Ceramic Res. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 1024 CK /14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTCRES_3MHZ_8MHZ_1KCK_14CK_65MS_gc    (0x0D) /* Ext. Ceramic Res. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 1024 CK /14 CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_16KCK_14CK_0MS_gc    (0x1D) /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 16384 CK/14 CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_16KCK_14CK_4MS1_gc   (0x2D) /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 16384 CK/14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_16KCK_14CK_65MS_gc   (0x3D) /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 16384 CK/14 CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTCRES_8MHZ_16MHZ_258CK_14CK_4MS1_gc  (0x0E) /* Ext. Ceramic Res. 8.0-16.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTCRES_8MHZ_16MHZ_258CK_14CK_65MS_gc  (0x1E) /* Ext. Ceramic Res. 8.0-16.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTCRES_8MHZ_16MHZ_1KCK_14CK_0MS_gc    (0x2E) /* Ext. Ceramic Res. 8.0-16.0 MHz; Start-up time PWRDWN/RESET: 1024 CK /14 CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTCRES_8MHZ_16MHZ_1KCK_14CK_4MS1_gc   (0x3E) /* Ext. Ceramic Res. 8.0-16.0 MHz; Start-up time PWRDWN/RESET: 1024 CK /14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTCRES_8MHZ_16MHZ_1KCK_14CK_65MS_gc   (0x0F) /* Ext. Ceramic Res. 8.0-16.0 MHz; Start-up time PWRDWN/RESET: 1024 CK /14 CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_8MHZ_16MHZ_16KCK_14CK_0MS_gc   (0x1F) /* Ext. Crystal Osc. 8.0-16.0 MHz; Start-up time PWRDWN/RESET: 16384 CK/14 CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_8MHZ_16MHZ_16KCK_14CK_4MS1_gc  (0x2F) /* Ext. Crystal Osc. 8.0-16.0 MHz; Start-up time PWRDWN/RESET: 16384 CK/14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_8MHZ_16MHZ_16KCK_14CK_65MS_gc  (0x3F) /* Ext. Crystal Osc. 8.0-16.0 MHz; Start-up time PWRDWN/RESET: 16384 CK/14 CK + 65 ms */


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
LINUART - Local Interconnect Network
--------------------------------------------------------------------------------
*/


/* Software Reset */
#define LINUART_LSWRES_CLEAR_gc (0x00) /* Software Reset - CLEAR */
#define LINUART_LSWRES_SET_gc   (0x80) /* Software Reset - SET */


/* LIN Standard */
#define LINUART_LIN13_CLEAR_gc (0x00) /* LIN Standard - CLEAR */
#define LINUART_LIN13_SET_gc   (0x40) /* LIN Standard - SET */


/* LIN Configuration bits */
#define LINUART_LINCR_LCONF_gc(x) ((x<<4) & 0x30)

/* LIN or UART Enable */
#define LINUART_LENA_CLEAR_gc (0x00) /* LIN or UART Enable - CLEAR */
#define LINUART_LENA_SET_gc   (0x08) /* LIN or UART Enable - SET */


/* LIN Command and Mode bits */
#define LINUART_LINCR_LCMD_gc(x) (x & 0x07)

/* Identifier Status bits */
#define LINUART_LINSIR_LIDST_gc(x) ((x<<5) & 0xE0)

/* Busy Signal */
#define LINUART_LBUSY_CLEAR_gc (0x00) /* Busy Signal - CLEAR */
#define LINUART_LBUSY_SET_gc   (0x10) /* Busy Signal - SET */


/* Error Interrupt */
#define LINUART_LERR_CLEAR_gc (0x00) /* Error Interrupt - CLEAR */
#define LINUART_LERR_SET_gc   (0x08) /* Error Interrupt - SET */


/* Identifier Interrupt */
#define LINUART_LIDOK_CLEAR_gc (0x00) /* Identifier Interrupt - CLEAR */
#define LINUART_LIDOK_SET_gc   (0x04) /* Identifier Interrupt - SET */


/* Transmit Performed Interrupt */
#define LINUART_LTXOK_CLEAR_gc (0x00) /* Transmit Performed Interrupt - CLEAR */
#define LINUART_LTXOK_SET_gc   (0x02) /* Transmit Performed Interrupt - SET */


/* Receive Performed Interrupt */
#define LINUART_LRXOK_CLEAR_gc (0x00) /* Receive Performed Interrupt - CLEAR */
#define LINUART_LRXOK_SET_gc   (0x01) /* Receive Performed Interrupt - SET */


/* Enable Error Interrupt */
#define LINUART_LENERR_CLEAR_gc (0x00) /* Enable Error Interrupt - CLEAR */
#define LINUART_LENERR_SET_gc   (0x08) /* Enable Error Interrupt - SET */


/* Enable Identifier Interrupt */
#define LINUART_LENIDOK_CLEAR_gc (0x00) /* Enable Identifier Interrupt - CLEAR */
#define LINUART_LENIDOK_SET_gc   (0x04) /* Enable Identifier Interrupt - SET */


/* Enable Transmit Performed Interrupt */
#define LINUART_LENTXOK_CLEAR_gc (0x00) /* Enable Transmit Performed Interrupt - CLEAR */
#define LINUART_LENTXOK_SET_gc   (0x02) /* Enable Transmit Performed Interrupt - SET */


/* Enable Receive Performed Interrupt */
#define LINUART_LENRXOK_CLEAR_gc (0x00) /* Enable Receive Performed Interrupt - CLEAR */
#define LINUART_LENRXOK_SET_gc   (0x01) /* Enable Receive Performed Interrupt - SET */


/* Abort Flag */
#define LINUART_LABORT_CLEAR_gc (0x00) /* Abort Flag - CLEAR */
#define LINUART_LABORT_SET_gc   (0x80) /* Abort Flag - SET */


/* Frame Time Out Error Flag */
#define LINUART_LTOERR_CLEAR_gc (0x00) /* Frame Time Out Error Flag - CLEAR */
#define LINUART_LTOERR_SET_gc   (0x40) /* Frame Time Out Error Flag - SET */


/* Overrun Error Flag */
#define LINUART_LOVERR_CLEAR_gc (0x00) /* Overrun Error Flag - CLEAR */
#define LINUART_LOVERR_SET_gc   (0x20) /* Overrun Error Flag - SET */


/* Framing Error Flag */
#define LINUART_LFERR_CLEAR_gc (0x00) /* Framing Error Flag - CLEAR */
#define LINUART_LFERR_SET_gc   (0x10) /* Framing Error Flag - SET */


/* Synchronization Error Flag */
#define LINUART_LSERR_CLEAR_gc (0x00) /* Synchronization Error Flag - CLEAR */
#define LINUART_LSERR_SET_gc   (0x08) /* Synchronization Error Flag - SET */


/* Parity Error Flag */
#define LINUART_LPERR_CLEAR_gc (0x00) /* Parity Error Flag - CLEAR */
#define LINUART_LPERR_SET_gc   (0x04) /* Parity Error Flag - SET */


/* Checksum Error Flag */
#define LINUART_LCERR_CLEAR_gc (0x00) /* Checksum Error Flag - CLEAR */
#define LINUART_LCERR_SET_gc   (0x02) /* Checksum Error Flag - SET */


/* Bit Error Flag */
#define LINUART_LBERR_CLEAR_gc (0x00) /* Bit Error Flag - CLEAR */
#define LINUART_LBERR_SET_gc   (0x01) /* Bit Error Flag - SET */


/* Disable Bit Timing Resynchronization */
#define LINUART_LDISR_CLEAR_gc (0x00) /* Disable Bit Timing Resynchronization - CLEAR */
#define LINUART_LDISR_SET_gc   (0x80) /* Disable Bit Timing Resynchronization - SET */


/* LIN Bit Timing bits */
#define LINUART_LINBTR_LBT_gc(x) (x & 0x3F)

/* LIN Transmit Data Length bits */
#define LINUART_LINDLR_LTXDL_gc(x) ((x<<4) & 0xF0)

/* LIN Receive Data Length bits */
#define LINUART_LINDLR_LRXDL_gc(x) (x & 0x0F)

/* Parity bits */
#define LINUART_LINIDR_LP_gc(x) ((x<<6) & 0xC0)

/* Identifier bit 5 or Data Length bits */
#define LINUART_LINIDR_LID_gc(x) (x & 0x3F)

/* Auto Increment of Data Buffer Index (Active Low) */
#define LINUART_LAINC_CLEAR_gc (0x00) /* Auto Increment of Data Buffer Index (Active Low) - CLEAR */
#define LINUART_LAINC_SET_gc   (0x08) /* Auto Increment of Data Buffer Index (Active Low) - SET */


/* FIFO LIN Data Buffer Index bits */
#define LINUART_LINSEL_LINDX_gc(x) (x & 0x07)

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
TC8_ASYNC - Timer/Counter, 8-bit Async
--------------------------------------------------------------------------------
*/


/* Timer/Counter0 Output Compare Match A Interrupt Enable */
#define TC0_OCIE0A_CLEAR_gc (0x00) /* Timer/Counter0 Output Compare Match A Interrupt Enable - CLEAR */
#define TC0_OCIE0A_SET_gc   (0x02) /* Timer/Counter0 Output Compare Match A Interrupt Enable - SET */


/* Timer/Counter0 Overflow Interrupt Enable */
#define TC0_TOIE0_CLEAR_gc (0x00) /* Timer/Counter0 Overflow Interrupt Enable - CLEAR */
#define TC0_TOIE0_SET_gc   (0x01) /* Timer/Counter0 Overflow Interrupt Enable - SET */


/* Output Compare Flag 0A */
#define TC0_OCF0A_CLEAR_gc (0x00) /* Output Compare Flag 0A - CLEAR */
#define TC0_OCF0A_SET_gc   (0x02) /* Output Compare Flag 0A - SET */


/* Timer/Counter0 Overflow Flag */
#define TC0_TOV0_CLEAR_gc (0x00) /* Timer/Counter0 Overflow Flag - CLEAR */
#define TC0_TOV0_SET_gc   (0x01) /* Timer/Counter0 Overflow Flag - SET */


/* Compare Output Mode bits */
#define TC0_TCCR0A_COM0A_gc(x) ((x<<6) & 0xC0)

/* Waveform Genration Mode bits */
#define TC0_TCCR0A_WGM0_gc(x) (x & 0x03)

/* Force Output Compare A */
#define TC0_FOC0A_CLEAR_gc (0x00) /* Force Output Compare A - CLEAR */
#define TC0_FOC0A_SET_gc   (0x80) /* Force Output Compare A - SET */


/* Clock Select bits */
#define TC0_CS0_VAL_0x00_gc (0x00) /* No Clock Source (Stopped) */
#define TC0_CS0_VAL_0x01_gc (0x01) /* Running, No Prescaling */
#define TC0_CS0_VAL_0x02_gc (0x02) /* Running, CLK/8 */
#define TC0_CS0_VAL_0x03_gc (0x03) /* Running, CLK/32 */
#define TC0_CS0_VAL_0x04_gc (0x04) /* Running, CLK/64 */
#define TC0_CS0_VAL_0x05_gc (0x05) /* Running, CLK/128 */
#define TC0_CS0_VAL_0x06_gc (0x06) /* Running, CLK/256 */
#define TC0_CS0_VAL_0x07_gc (0x07) /* Running, CLK/1024 */


/* Enable External Clock Input */
#define TC0_EXCLK_CLEAR_gc (0x00) /* Enable External Clock Input - CLEAR */
#define TC0_EXCLK_SET_gc   (0x40) /* Enable External Clock Input - SET */


/* Asynchronous Timer/Counter0 */
#define TC0_AS0_CLEAR_gc (0x00) /* Asynchronous Timer/Counter0 - CLEAR */
#define TC0_AS0_SET_gc   (0x20) /* Asynchronous Timer/Counter0 - SET */


/* Timer/Counter0 Update Busy */
#define TC0_TCN0UB_CLEAR_gc (0x00) /* Timer/Counter0 Update Busy - CLEAR */
#define TC0_TCN0UB_SET_gc   (0x10) /* Timer/Counter0 Update Busy - SET */


/* Output Compare Register 0A  Update Busy */
#define TC0_OCR0AUB_CLEAR_gc (0x00) /* Output Compare Register 0A  Update Busy - CLEAR */
#define TC0_OCR0AUB_SET_gc   (0x08) /* Output Compare Register 0A  Update Busy - SET */


/* Timer/Counter0 Control Register A Update Busy */
#define TC0_TCR0AUB_CLEAR_gc (0x00) /* Timer/Counter0 Control Register A Update Busy - CLEAR */
#define TC0_TCR0AUB_SET_gc   (0x02) /* Timer/Counter0 Control Register A Update Busy - SET */


/* Timer/Counter0 Control Register B Update Busy */
#define TC0_TCR0BUB_CLEAR_gc (0x00) /* Timer/Counter0 Control Register B Update Busy - CLEAR */
#define TC0_TCR0BUB_SET_gc   (0x01) /* Timer/Counter0 Control Register B Update Busy - SET */


/* Timer/Counter Synchronization Mode */
#define TC0_TSM_CLEAR_gc (0x00) /* Timer/Counter Synchronization Mode - CLEAR */
#define TC0_TSM_SET_gc   (0x80) /* Timer/Counter Synchronization Mode - SET */


/* Prescaler Reset Asynchronous 8-bit Timer/Counter0 */
#define TC0_PSR0_CLEAR_gc (0x00) /* Prescaler Reset Asynchronous 8-bit Timer/Counter0 - CLEAR */
#define TC0_PSR0_SET_gc   (0x02) /* Prescaler Reset Asynchronous 8-bit Timer/Counter0 - SET */


/* Prescaler Reset Synchronous 16-bit Timer/Counter1 */
#define TC0_PSR1_CLEAR_gc (0x00) /* Prescaler Reset Synchronous 16-bit Timer/Counter1 - CLEAR */
#define TC0_PSR1_SET_gc   (0x01) /* Prescaler Reset Synchronous 16-bit Timer/Counter1 - SET */


/*
--------------------------------------------------------------------------------
TC16 - Timer/Counter, 16-bit
--------------------------------------------------------------------------------
*/


/* Timer/Counter1 Input Capture Interrupt Enable */
#define TC1_ICIE1_CLEAR_gc (0x00) /* Timer/Counter1 Input Capture Interrupt Enable - CLEAR */
#define TC1_ICIE1_SET_gc   (0x20) /* Timer/Counter1 Input Capture Interrupt Enable - SET */


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


/* Timer/Counter1 Output Compare B Match Flag */
#define TC1_OCF1B_CLEAR_gc (0x00) /* Timer/Counter1 Output Compare B Match Flag - CLEAR */
#define TC1_OCF1B_SET_gc   (0x04) /* Timer/Counter1 Output Compare B Match Flag - SET */


/* Timer/Counter1 Output Compare A Match Flag */
#define TC1_OCF1A_CLEAR_gc (0x00) /* Timer/Counter1 Output Compare A Match Flag - CLEAR */
#define TC1_OCF1A_SET_gc   (0x02) /* Timer/Counter1 Output Compare A Match Flag - SET */


/* Timer/Counter1 Overflow Flag */
#define TC1_TOV1_CLEAR_gc (0x00) /* Timer/Counter1 Overflow Flag - CLEAR */
#define TC1_TOV1_SET_gc   (0x01) /* Timer/Counter1 Overflow Flag - SET */


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

/* Timer/Counter1 Clock Select bits */
#define TC1_CS1_VAL_0x00_gc (0x00) /* No Clock Source (Stopped) */
#define TC1_CS1_VAL_0x01_gc (0x01) /* Running, No Prescaling */
#define TC1_CS1_VAL_0x02_gc (0x02) /* Running, CLK/8 */
#define TC1_CS1_VAL_0x03_gc (0x03) /* Running, CLK/64 */
#define TC1_CS1_VAL_0x04_gc (0x04) /* Running, CLK/256 */
#define TC1_CS1_VAL_0x05_gc (0x05) /* Running, CLK/1024 */
#define TC1_CS1_VAL_0x06_gc (0x06) /* Running, ExtClk Tx Falling Edge */
#define TC1_CS1_VAL_0x07_gc (0x07) /* Running, ExtClk Tx Rising Edge */


/* Timer/Counter1 Force Output Compare for Channel A */
#define TC1_FOC1A_CLEAR_gc (0x00) /* Timer/Counter1 Force Output Compare for Channel A - CLEAR */
#define TC1_FOC1A_SET_gc   (0x80) /* Timer/Counter1 Force Output Compare for Channel A - SET */


/* Timer/Counter1 Force Output Compare for Channel B */
#define TC1_FOC1B_CLEAR_gc (0x00) /* Timer/Counter1 Force Output Compare for Channel B - CLEAR */
#define TC1_FOC1B_SET_gc   (0x40) /* Timer/Counter1 Force Output Compare for Channel B - SET */


/* Timer/Counter1 Output Compare X-pin Enable for Channel B */
#define TC1_OC1BX_CLEAR_gc (0x00) /* Timer/Counter1 Output Compare X-pin Enable for Channel B - CLEAR */
#define TC1_OC1BX_SET_gc   (0x80) /* Timer/Counter1 Output Compare X-pin Enable for Channel B - SET */


/* Timer/Counter1 Output Compare W-pin Enable for Channel B */
#define TC1_OC1BW_CLEAR_gc (0x00) /* Timer/Counter1 Output Compare W-pin Enable for Channel B - CLEAR */
#define TC1_OC1BW_SET_gc   (0x40) /* Timer/Counter1 Output Compare W-pin Enable for Channel B - SET */


/* Timer/Counter1 Output Compare V-pin Enable for Channel B */
#define TC1_OC1BV_CLEAR_gc (0x00) /* Timer/Counter1 Output Compare V-pin Enable for Channel B - CLEAR */
#define TC1_OC1BV_SET_gc   (0x20) /* Timer/Counter1 Output Compare V-pin Enable for Channel B - SET */


/* Timer/Counter1 Output Compare U-pin Enable for Channel B */
#define TC1_OC1BU_CLEAR_gc (0x00) /* Timer/Counter1 Output Compare U-pin Enable for Channel B - CLEAR */
#define TC1_OC1BU_SET_gc   (0x10) /* Timer/Counter1 Output Compare U-pin Enable for Channel B - SET */


/* Timer/Counter1 Output Compare X-pin Enable for Channel A */
#define TC1_OC1AX_CLEAR_gc (0x00) /* Timer/Counter1 Output Compare X-pin Enable for Channel A - CLEAR */
#define TC1_OC1AX_SET_gc   (0x08) /* Timer/Counter1 Output Compare X-pin Enable for Channel A - SET */


/* Timer/Counter1 Output Compare W-pin Enable for Channel A */
#define TC1_OC1AW_CLEAR_gc (0x00) /* Timer/Counter1 Output Compare W-pin Enable for Channel A - CLEAR */
#define TC1_OC1AW_SET_gc   (0x04) /* Timer/Counter1 Output Compare W-pin Enable for Channel A - SET */


/* Timer/Counter1 Output Compare V-pin Enable for Channel A */
#define TC1_OC1AV_CLEAR_gc (0x00) /* Timer/Counter1 Output Compare V-pin Enable for Channel A - CLEAR */
#define TC1_OC1AV_SET_gc   (0x02) /* Timer/Counter1 Output Compare V-pin Enable for Channel A - SET */


/* Timer/Counter1 Output Compare U-pin Enable for Channel A */
#define TC1_OC1AU_CLEAR_gc (0x00) /* Timer/Counter1 Output Compare U-pin Enable for Channel A - CLEAR */
#define TC1_OC1AU_SET_gc   (0x01) /* Timer/Counter1 Output Compare U-pin Enable for Channel A - SET */


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
EEPROM - EEPROM
--------------------------------------------------------------------------------
*/


/* EEPROM Programming Mode Bits */
#define EEPROM_EEPM_VAL_0x00_gc (0x00<<4) /* Erase and Write in one operation */
#define EEPROM_EEPM_VAL_0x01_gc (0x01<<4) /* Erase Only */
#define EEPROM_EEPM_VAL_0x02_gc (0x02<<4) /* Write Only */


/* EEPROM Ready Interrupt Enable */
#define EEPROM_EERIE_CLEAR_gc (0x00) /* EEPROM Ready Interrupt Enable - CLEAR */
#define EEPROM_EERIE_SET_gc   (0x08) /* EEPROM Ready Interrupt Enable - SET */


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
SPI - Serial Peripheral Interface
--------------------------------------------------------------------------------
*/


/* SPI Interrupt Flag */
#define SPI_SPIF_CLEAR_gc (0x00) /* SPI Interrupt Flag - CLEAR */
#define SPI_SPIF_SET_gc   (0x80) /* SPI Interrupt Flag - SET */


/* Write Collision Flag */
#define SPI_WCOL_CLEAR_gc (0x00) /* Write Collision Flag - CLEAR */
#define SPI_WCOL_SET_gc   (0x40) /* Write Collision Flag - SET */


/* Double SPI Speed Bit */
#define SPI_SPI2X_CLEAR_gc (0x00) /* Double SPI Speed Bit - CLEAR */
#define SPI_SPI2X_SET_gc   (0x01) /* Double SPI Speed Bit - SET */


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
#define SPI_CPOL_CLEAR_gc (0x00) /* Clock polarity - CLEAR */
#define SPI_CPOL_SET_gc   (0x08) /* Clock polarity - SET */


/* Clock Phase */
#define SPI_CPHA_CLEAR_gc (0x00) /* Clock Phase - CLEAR */
#define SPI_CPHA_SET_gc   (0x04) /* Clock Phase - SET */


/* SPI Clock Rate Selects */
#define SPI_SPR_VAL_0x00_gc (0x00) /* fosc/4 */
#define SPI_SPR_VAL_0x01_gc (0x01) /* fosc/16 */
#define SPI_SPR_VAL_0x02_gc (0x02) /* fosc/64 */
#define SPI_SPR_VAL_0x03_gc (0x03) /* fosc/128 */
#define SPI_SPR_VAL_0x04_gc (0x04) /* fosc/2 */
#define SPI_SPR_VAL_0x05_gc (0x05) /* fosc/8 */
#define SPI_SPR_VAL_0x06_gc (0x06) /* fosc/32 */
#define SPI_SPR_VAL_0x07_gc (0x07) /* fosc/64 */


/*
--------------------------------------------------------------------------------
ADC - Analog-to-Digital Converter
--------------------------------------------------------------------------------
*/


/* Reference Selection Bits */
#define ADC_REFS_VAL_0x00_gc (0x00<<6) /* If AREFEN==0 then Internal AVCC as Voltage Reference. If AREFEN==1 then AREF pin as Voltage Reference.   */
#define ADC_REFS_VAL_0x01_gc (0x01<<6) /* If AREFEN==0 then Internal 1.1V as Voltage Reference without external capacitor. If AREFEN==1 then Internal 1.1V as Voltage Reference with external capacitor at AREF pin. */
#define ADC_REFS_VAL_0x02_gc (0x02<<6) /* If AREFEN==0 then Internal AVCC as Voltage Reference. If AREFEN==1 then AREF pin as Voltage Reference.   */
#define ADC_REFS_VAL_0x03_gc (0x03<<6) /* If AREFEN==0 then Internal 2.56V as Voltage Reference without external capacitor. If AREFEN==1 then Internal 2.56V as Voltage Reference with external capacitor at AREF pin. */


/* Left Adjust Result */
#define ADC_ADLAR_CLEAR_gc (0x00) /* Left Adjust Result - CLEAR */
#define ADC_ADLAR_SET_gc   (0x20) /* Left Adjust Result - SET */


/* Analog Channel and Gain Selection Bits */
#define ADC_ADMUX_MUX_gc(x) (x & 0x1F)

/* ADC Enable */
#define ADC_ADEN_CLEAR_gc (0x00) /* ADC Enable - CLEAR */
#define ADC_ADEN_SET_gc   (0x80) /* ADC Enable - SET */


/* ADC Start Conversion */
#define ADC_ADSC_CLEAR_gc (0x00) /* ADC Start Conversion - CLEAR */
#define ADC_ADSC_SET_gc   (0x40) /* ADC Start Conversion - SET */


/* ADC  Auto Trigger Enable */
#define ADC_ADATE_CLEAR_gc (0x00) /* ADC  Auto Trigger Enable - CLEAR */
#define ADC_ADATE_SET_gc   (0x20) /* ADC  Auto Trigger Enable - SET */


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


/* Bipolar Input Mode */
#define ADC_BIN_CLEAR_gc (0x00) /* Bipolar Input Mode - CLEAR */
#define ADC_BIN_SET_gc   (0x80) /* Bipolar Input Mode - SET */


/* ADC Auto Trigger Source bits */
#define ADC_ADTS_VAL_0x00_gc (0x00) /* Free Running mode */
#define ADC_ADTS_VAL_0x01_gc (0x01) /* Analog Comparator */
#define ADC_ADTS_VAL_0x02_gc (0x02) /* External Interrupt Request 0 */
#define ADC_ADTS_VAL_0x03_gc (0x03) /* Timer/Counter1 Compare Match A */
#define ADC_ADTS_VAL_0x04_gc (0x04) /* Timer/Counter1 Overflow */
#define ADC_ADTS_VAL_0x05_gc (0x05) /* Timer/Counter1 Compare Match B */
#define ADC_ADTS_VAL_0x06_gc (0x06) /* Timer/Counter1 Capture Event */
#define ADC_ADTS_VAL_0x07_gc (0x07) /* Watchdog Interrupt Request */


/* External Voltage Reference Input Enable */
#define ADC_AREFEN_CLEAR_gc (0x00) /* External Voltage Reference Input Enable - CLEAR */
#define ADC_AREFEN_SET_gc   (0x04) /* External Voltage Reference Input Enable - SET */


/* Internal Voltage Reference Output Enable */
#define ADC_XREFEN_CLEAR_gc (0x00) /* Internal Voltage Reference Output Enable - CLEAR */
#define ADC_XREFEN_SET_gc   (0x02) /* Internal Voltage Reference Output Enable - SET */


/* Digital Input Disable Register 1-ADC10D */
#define ADC_ADC10D_CLEAR_gc (0x00) /* Digital Input Disable Register 1-ADC10D - CLEAR */
#define ADC_ADC10D_SET_gc   (0x40) /* Digital Input Disable Register 1-ADC10D - SET */


/* Digital Input Disable Register 1-ADC9D */
#define ADC_ADC9D_CLEAR_gc (0x00) /* Digital Input Disable Register 1-ADC9D - CLEAR */
#define ADC_ADC9D_SET_gc   (0x20) /* Digital Input Disable Register 1-ADC9D - SET */


/* Digital Input Disable Register 1-ADC8D */
#define ADC_ADC8D_CLEAR_gc (0x00) /* Digital Input Disable Register 1-ADC8D - CLEAR */
#define ADC_ADC8D_SET_gc   (0x10) /* Digital Input Disable Register 1-ADC8D - SET */


/* Digital Input Disable Register 0-ADC7D */
#define ADC_ADC7D_CLEAR_gc (0x00) /* Digital Input Disable Register 0-ADC7D - CLEAR */
#define ADC_ADC7D_SET_gc   (0x80) /* Digital Input Disable Register 0-ADC7D - SET */


/* Digital Input Disable Register 0-ADC6D */
#define ADC_ADC6D_CLEAR_gc (0x00) /* Digital Input Disable Register 0-ADC6D - CLEAR */
#define ADC_ADC6D_SET_gc   (0x40) /* Digital Input Disable Register 0-ADC6D - SET */


/* Digital Input Disable Register 0-ADC5D */
#define ADC_ADC5D_CLEAR_gc (0x00) /* Digital Input Disable Register 0-ADC5D - CLEAR */
#define ADC_ADC5D_SET_gc   (0x20) /* Digital Input Disable Register 0-ADC5D - SET */


/* Digital Input Disable Register 0-ADC4D */
#define ADC_ADC4D_CLEAR_gc (0x00) /* Digital Input Disable Register 0-ADC4D - CLEAR */
#define ADC_ADC4D_SET_gc   (0x10) /* Digital Input Disable Register 0-ADC4D - SET */


/* Digital Input Disable Register 0-ADC3D */
#define ADC_ADC3D_CLEAR_gc (0x00) /* Digital Input Disable Register 0-ADC3D - CLEAR */
#define ADC_ADC3D_SET_gc   (0x08) /* Digital Input Disable Register 0-ADC3D - SET */


/* Digital Input Disable Register 0-ADC2D */
#define ADC_ADC2D_CLEAR_gc (0x00) /* Digital Input Disable Register 0-ADC2D - CLEAR */
#define ADC_ADC2D_SET_gc   (0x04) /* Digital Input Disable Register 0-ADC2D - SET */


/* Digital Input Disable Register 0-ADC1D */
#define ADC_ADC1D_CLEAR_gc (0x00) /* Digital Input Disable Register 0-ADC1D - CLEAR */
#define ADC_ADC1D_SET_gc   (0x02) /* Digital Input Disable Register 0-ADC1D - SET */


/* Digital Input Disable Register 0-ADC0D */
#define ADC_ADC0D_CLEAR_gc (0x00) /* Digital Input Disable Register 0-ADC0D - CLEAR */
#define ADC_ADC0D_SET_gc   (0x01) /* Digital Input Disable Register 0-ADC0D - SET */


/*
--------------------------------------------------------------------------------
CURRENT_SOURCE - Current Source
--------------------------------------------------------------------------------
*/


/* Current Source Enable */
#define CURRENT_SOURCE_ISRCEN_CLEAR_gc (0x00) /* Current Source Enable - CLEAR */
#define CURRENT_SOURCE_ISRCEN_SET_gc   (0x01) /* Current Source Enable - SET */


/*
--------------------------------------------------------------------------------
AC - Analog Comparator
--------------------------------------------------------------------------------
*/


/* Analog Comparator Multiplexer Enable */
#define AC_ACME_CLEAR_gc (0x00) /* Analog Comparator Multiplexer Enable - CLEAR */
#define AC_ACME_SET_gc   (0x40) /* Analog Comparator Multiplexer Enable - SET */


/* Analog Comparator Internal Voltage Reference Select Bits */
#define AC_ADCSRB_ACIR_gc(x) ((x<<4) & 0x30)

/* Analog Comparator Disable */
#define AC_ACD_CLEAR_gc (0x00) /* Analog Comparator Disable - CLEAR */
#define AC_ACD_SET_gc   (0x80) /* Analog Comparator Disable - SET */


/* Analog Comparator Internal Reference Select */
#define AC_ACIRS_CLEAR_gc (0x00) /* Analog Comparator Internal Reference Select - CLEAR */
#define AC_ACIRS_SET_gc   (0x40) /* Analog Comparator Internal Reference Select - SET */


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


/* Analog Comparator Interrupt Mode Select bits */
#define AC_ACIS_VAL_0x00_gc (0x00) /* Interrupt on Toggle */
#define AC_ACIS_VAL_0x01_gc (0x01) /* Reserved */
#define AC_ACIS_VAL_0x02_gc (0x02) /* Interrupt on Falling Edge */
#define AC_ACIS_VAL_0x03_gc (0x03) /* Interrupt on Rising Edge */


/*
--------------------------------------------------------------------------------
EXINT - External Interrupts
--------------------------------------------------------------------------------
*/


/* External Interrupt Sense Control 1 Bits */
#define EXINT_ISC1_VAL_0x00_gc (0x00<<2) /* Low Level of INTX */
#define EXINT_ISC1_VAL_0x01_gc (0x01<<2) /* Any Logical Change in INTX */
#define EXINT_ISC1_VAL_0x02_gc (0x02<<2) /* Falling Edge of INTX */
#define EXINT_ISC1_VAL_0x03_gc (0x03<<2) /* Rising Edge of INTX */


/* External Interrupt Sense Control 0 Bits */
#define EXINT_ISC0_VAL_0x00_gc (0x00) /* Low Level of INTX */
#define EXINT_ISC0_VAL_0x01_gc (0x01) /* Any Logical Change in INTX */
#define EXINT_ISC0_VAL_0x02_gc (0x02) /* Falling Edge of INTX */
#define EXINT_ISC0_VAL_0x03_gc (0x03) /* Rising Edge of INTX */


/*
--------------------------------------------------------------------------------
BOOT_LOAD - Bootloader
--------------------------------------------------------------------------------
*/


/* Read While Write Section Busy */
#define BOOT_LOAD_RWWSB_CLEAR_gc (0x00) /* Read While Write Section Busy - CLEAR */
#define BOOT_LOAD_RWWSB_SET_gc   (0x40) /* Read While Write Section Busy - SET */


/* Signature Row Read */
#define BOOT_LOAD_SIGRD_CLEAR_gc (0x00) /* Signature Row Read - CLEAR */
#define BOOT_LOAD_SIGRD_SET_gc   (0x20) /* Signature Row Read - SET */


/* Clear Temporary Page Buffer */
#define BOOT_LOAD_CTPB_CLEAR_gc (0x00) /* Clear Temporary Page Buffer - CLEAR */
#define BOOT_LOAD_CTPB_SET_gc   (0x10) /* Clear Temporary Page Buffer - SET */


/* Read Fuse and Lock Bits */
#define BOOT_LOAD_RFLB_CLEAR_gc (0x00) /* Read Fuse and Lock Bits - CLEAR */
#define BOOT_LOAD_RFLB_SET_gc   (0x08) /* Read Fuse and Lock Bits - SET */


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


/* Power Reduction LINUART */
#define CPU_PRLIN_CLEAR_gc (0x00) /* Power Reduction LINUART - CLEAR */
#define CPU_PRLIN_SET_gc   (0x20) /* Power Reduction LINUART - SET */


/* Power Reduction SPI */
#define CPU_PRSPI_CLEAR_gc (0x00) /* Power Reduction SPI - CLEAR */
#define CPU_PRSPI_SET_gc   (0x10) /* Power Reduction SPI - SET */


/* Power Reduction Timer/Counter1 */
#define CPU_PRTIM1_CLEAR_gc (0x00) /* Power Reduction Timer/Counter1 - CLEAR */
#define CPU_PRTIM1_SET_gc   (0x08) /* Power Reduction Timer/Counter1 - SET */


/* Power Reduction Timer/Counter0 */
#define CPU_PRTIM0_CLEAR_gc (0x00) /* Power Reduction Timer/Counter0 - CLEAR */
#define CPU_PRTIM0_SET_gc   (0x04) /* Power Reduction Timer/Counter0 - SET */


/* Power Reduction USI */
#define CPU_PRUSI_CLEAR_gc (0x00) /* Power Reduction USI - CLEAR */
#define CPU_PRUSI_SET_gc   (0x02) /* Power Reduction USI - SET */


/* Power Reduction ADC */
#define CPU_PRADC_CLEAR_gc (0x00) /* Power Reduction ADC - CLEAR */
#define CPU_PRADC_SET_gc   (0x01) /* Power Reduction ADC - SET */


/* BOD Sleep */
#define CPU_BODS_CLEAR_gc (0x00) /* BOD Sleep - CLEAR */
#define CPU_BODS_SET_gc   (0x40) /* BOD Sleep - SET */


/* BOD Sleep Enable */
#define CPU_BODSE_CLEAR_gc (0x00) /* BOD Sleep Enable - CLEAR */
#define CPU_BODSE_SET_gc   (0x20) /* BOD Sleep Enable - SET */


/* Pull-up Disable */
#define CPU_PUD_CLEAR_gc (0x00) /* Pull-up Disable - CLEAR */
#define CPU_PUD_SET_gc   (0x10) /* Pull-up Disable - SET */


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


/* Sleep Mode Select Bits */
#define CPU_SM_IDLE_gc     (0x00<<1) /* Idle */
#define CPU_SM_ADC_gc      (0x01<<1) /* ADC Noise Reduction (If Available) */
#define CPU_SM_PDOWN_gc    (0x02<<1) /* Power Down */
#define CPU_SM_VAL_0x03_gc (0x03<<1) /* Reserved */


/* Sleep Enable */
#define CPU_SE_CLEAR_gc (0x00) /* Sleep Enable - CLEAR */
#define CPU_SE_SET_gc   (0x01) /* Sleep Enable - SET */


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


/* Clock Out - CKOUT fuse substitution */
#define CPU_COUT_CLEAR_gc (0x00) /* Clock Out - CKOUT fuse substitution - CLEAR */
#define CPU_COUT_SET_gc   (0x40) /* Clock Out - CKOUT fuse substitution - SET */


/* Clock Start-up Time bit 1 - SUT1 fuse substitution */
#define CPU_CLKSELR_CSUT_gc(x) ((x<<4) & 0x30)

/* Clock Source Select bit 3 - CKSEL3 fuse substitution */
#define CPU_CLKSELR_CSEL_gc(x) (x & 0x0F)

/* Clock Control Change Enable */
#define CPU_CLKCCE_CLEAR_gc (0x00) /* Clock Control Change Enable - CLEAR */
#define CPU_CLKCCE_SET_gc   (0x80) /* Clock Control Change Enable - SET */


/* Clock Ready Flag */
#define CPU_CLKRDY_CLEAR_gc (0x00) /* Clock Ready Flag - CLEAR */
#define CPU_CLKRDY_SET_gc   (0x10) /* Clock Ready Flag - SET */


/* Clock Control bits */
#define CPU_CLKC_VAL_0x00_gc (0x00) /* No Command */
#define CPU_CLKC_VAL_0x01_gc (0x01) /* Disable Clock Source */
#define CPU_CLKC_VAL_0x02_gc (0x02) /* Enable Clock Source */
#define CPU_CLKC_VAL_0x03_gc (0x03) /* Request for Clock Availability */
#define CPU_CLKC_VAL_0x04_gc (0x04) /* Clock Source Switch */
#define CPU_CLKC_VAL_0x05_gc (0x05) /* Recovery System Clock Source Code */
#define CPU_CLKC_VAL_0x06_gc (0x06) /* Enable Watchdog in Automatic Reload Mode */
#define CPU_CLKC_VAL_0x07_gc (0x07) /* CKOUT Command */
#define CPU_CLKC_VAL_0x08_gc (0x08) /* From 0x08 up to 0x0F: No command */


/* Port Control Register-BBMB */
#define CPU_BBMB_CLEAR_gc (0x00) /* Port Control Register-BBMB - CLEAR */
#define CPU_BBMB_SET_gc   (0x20) /* Port Control Register-BBMB - SET */


/* Port Control Register-BBMA */
#define CPU_BBMA_CLEAR_gc (0x00) /* Port Control Register-BBMA - CLEAR */
#define CPU_BBMA_SET_gc   (0x10) /* Port Control Register-BBMA - SET */


/* Port Control Register-PUDB */
#define CPU_PUDB_CLEAR_gc (0x00) /* Port Control Register-PUDB - CLEAR */
#define CPU_PUDB_SET_gc   (0x02) /* Port Control Register-PUDB - SET */


/* Port Control Register-PUDA */
#define CPU_PUDA_CLEAR_gc (0x00) /* Port Control Register-PUDA - CLEAR */
#define CPU_PUDA_SET_gc   (0x01) /* Port Control Register-PUDA - SET */

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


/* PORTA - I/O Port (0x0000) */
#define PORTAA_BASE           _SFR_MEM8 (0x0000) /* PORTAA Base Address */
#define PORTAA_PINA           _SFR_MEM8 (0x0020) /* Port A Input Pins */
#define PORTAA_DDRA           _SFR_MEM8 (0x0021) /* Port A Data Direction Register */
#define PORTAA_PORTA          _SFR_MEM8 (0x0022) /* Port A Data Register */

/* PORTB - I/O Port (0x0000) */
#define PORTBB_BASE           _SFR_MEM8 (0x0000) /* PORTBB Base Address */
#define PORTBB_PINB           _SFR_MEM8 (0x0023) /* Port B Input Pins */
#define PORTBB_DDRB           _SFR_MEM8 (0x0024) /* Port B Data Direction Register */
#define PORTBB_PORTB          _SFR_MEM8 (0x0025) /* Port B Data Register */

/* LINUART - Local Interconnect Network (0x0000) */
#define LINUART_BASE          _SFR_MEM8 (0x0000) /* LINUART Base Address */
#define LINUART_LINCR         _SFR_MEM8 (0x00C8) /* LIN Control Register */
#define LINUART_LINSIR        _SFR_MEM8 (0x00C9) /* LIN Status and Interrupt Register */
#define LINUART_LINENIR       _SFR_MEM8 (0x00CA) /* LIN Enable Interrupt Register */
#define LINUART_LINERR        _SFR_MEM8 (0x00CB) /* LIN Error Register */
#define LINUART_LINBTR        _SFR_MEM8 (0x00CC) /* LIN Bit Timing Register */
#define LINUART_LINBRRL       _SFR_MEM8 (0x00CD) /* LIN Baud Rate Low Register */
#define LINUART_LINBRRH       _SFR_MEM8 (0x00CE) /* LIN Baud Rate High Register */
#define LINUART_LINDLR        _SFR_MEM8 (0x00CF) /* LIN Data Length Register */
#define LINUART_LINIDR        _SFR_MEM8 (0x00D0) /* LIN Identifier Register */
#define LINUART_LINSEL        _SFR_MEM8 (0x00D1) /* LIN Data Buffer Selection Register */
#define LINUART_LINDAT        _SFR_MEM8 (0x00D2) /* LIN Data Register */

/* USI - Universal Serial Interface (0x0000) */
#define USI_BASE              _SFR_MEM8 (0x0000) /* USI Base Address */
#define USI_USICR             _SFR_MEM8 (0x00B8) /* USI Control Register */
#define USI_USISR             _SFR_MEM8 (0x00B9) /* USI Status Register */
#define USI_USIDR             _SFR_MEM8 (0x00BA) /* USI Data Register */
#define USI_USIBR             _SFR_MEM8 (0x00BB) /* USI Buffer Register */
#define USI_USIPP             _SFR_MEM8 (0x00BC) /* USI Pin Position */

/* TC0 - Timer/Counter, 8-bit Async (0x0000) */
#define TC8_ASYNC_BASE        _SFR_MEM8 (0x0000) /* TC8_ASYNC Base Address */
#define TC8_ASYNC_TIFR0       _SFR_MEM8 (0x0035) /* Timer/Counter0 Interrupt Flag Register */
#define TC8_ASYNC_GTCCR       _SFR_MEM8 (0x0043) /* General Timer Counter Control register */
#define TC8_ASYNC_TCCR0A      _SFR_MEM8 (0x0045) /* Timer/Counter0 Control Register A */
#define TC8_ASYNC_TCCR0B      _SFR_MEM8 (0x0046) /* Timer/Counter0 Control Register B */
#define TC8_ASYNC_TCNT0       _SFR_MEM8 (0x0047) /* Timer/Counter0 */
#define TC8_ASYNC_OCR0A       _SFR_MEM8 (0x0048) /* Timer/Counter0 Output Compare Register A */
#define TC8_ASYNC_TIMSK0      _SFR_MEM8 (0x006E) /* Timer/Counter0 Interrupt Mask register */
#define TC8_ASYNC_ASSR        _SFR_MEM8 (0x00B6) /* Asynchronous Status Register */

/* TC1 - Timer/Counter, 16-bit (0x0000) */
#define TC16_BASE             _SFR_MEM8 (0x0000) /* TC16 Base Address */
#define TC16_TIFR1            _SFR_MEM8 (0x0036) /* Timer/Counter1 Interrupt Flag register */
#define TC16_TIMSK1           _SFR_MEM8 (0x006F) /* Timer/Counter1 Interrupt Mask Register */
#define TC16_TCCR1A           _SFR_MEM8 (0x0080) /* Timer/Counter1 Control Register A */
#define TC16_TCCR1B           _SFR_MEM8 (0x0081) /* Timer/Counter1 Control Register B */
#define TC16_TCCR1C           _SFR_MEM8 (0x0082) /* Timer/Counter1 Control Register C */
#define TC16_TCCR1D           _SFR_MEM8 (0x0083) /* Timer/Counter1 Control Register D */
#define TC16_TCNT1            _SFR_MEM16(0x0084) /* Timer/Counter1  Bytes */
#define TC16_TCNT1L           _SFR_MEM8 (0x0084) /* Timer/Counter1  Bytes LOW BYTE */
#define TC16_TCNT1H           _SFR_MEM8 (0x0085) /* Timer/Counter1  Bytes HIGH BYTE */
#define TC16_ICR1             _SFR_MEM16(0x0086) /* Timer/Counter1 Input Capture Register  Bytes */
#define TC16_ICR1L            _SFR_MEM8 (0x0086) /* Timer/Counter1 Input Capture Register  Bytes LOW BYTE */
#define TC16_ICR1H            _SFR_MEM8 (0x0087) /* Timer/Counter1 Input Capture Register  Bytes HIGH BYTE */
#define TC16_OCR1A            _SFR_MEM16(0x0088) /* Timer/Counter1 Output Compare Register A  Bytes */
#define TC16_OCR1AL           _SFR_MEM8 (0x0088) /* Timer/Counter1 Output Compare Register A  Bytes LOW BYTE */
#define TC16_OCR1AH           _SFR_MEM8 (0x0089) /* Timer/Counter1 Output Compare Register A  Bytes HIGH BYTE */
#define TC16_OCR1B            _SFR_MEM16(0x008A) /* Timer/Counter1 Output Compare Register B  Bytes */
#define TC16_OCR1BL           _SFR_MEM8 (0x008A) /* Timer/Counter1 Output Compare Register B  Bytes LOW BYTE */
#define TC16_OCR1BH           _SFR_MEM8 (0x008B) /* Timer/Counter1 Output Compare Register B  Bytes HIGH BYTE */

/* WDT - Watchdog Timer (0x0000) */
#define WDT_BASE              _SFR_MEM8 (0x0000) /* WDT Base Address */
#define WDT_WDTCR             _SFR_MEM8 (0x0060) /* Watchdog Timer Control Register */

/* EEPROM - EEPROM (0x0000) */
#define EEPROM_BASE           _SFR_MEM8 (0x0000) /* EEPROM Base Address */
#define EEPROM_EECR           _SFR_MEM8 (0x003F) /* EEPROM Control Register */
#define EEPROM_EEDR           _SFR_MEM8 (0x0040) /* EEPROM Data Register */
#define EEPROM_EEAR           _SFR_MEM16(0x0041) /* EEPROM Address Register  Bytes */
#define EEPROM_EEARL          _SFR_MEM8 (0x0041) /* EEPROM Address Register  Bytes LOW BYTE */
#define EEPROM_EEARH          _SFR_MEM8 (0x0042) /* EEPROM Address Register  Bytes HIGH BYTE */

/* SPI - Serial Peripheral Interface (0x0000) */
#define SPI_BASE              _SFR_MEM8 (0x0000) /* SPI Base Address */
#define SPI_SPCR              _SFR_MEM8 (0x004C) /* SPI Control Register */
#define SPI_SPSR              _SFR_MEM8 (0x004D) /* SPI Status Register */
#define SPI_SPDR              _SFR_MEM8 (0x004E) /* SPI Data Register */

/* ADC - Analog-to-Digital Converter (0x0000) */
#define ADC_BASE              _SFR_MEM8 (0x0000) /* ADC Base Address */
#define ADC_AMISCR            _SFR_MEM8 (0x0077) /* Analog Miscellaneous Control Register (Shared with CURRENT_SOURCE IO_MODULE) */
#define ADC_ADC               _SFR_MEM16(0x0078) /* ADC Data Register  Bytes */
#define ADC_ADCL              _SFR_MEM8 (0x0078) /* ADC Data Register  Bytes LOW BYTE */
#define ADC_ADCH              _SFR_MEM8 (0x0079) /* ADC Data Register  Bytes HIGH BYTE */
#define ADC_ADCSRA            _SFR_MEM8 (0x007A) /* The ADC Control and Status register A */
#define ADC_ADCSRB            _SFR_MEM8 (0x007B) /* The ADC Control and Status register B (Shared with ANALOG_COMPARATOR IO_MODULE) */
#define ADC_ADMUX             _SFR_MEM8 (0x007C) /* The ADC multiplexer Selection Register */
#define ADC_DIDR0             _SFR_MEM8 (0x007E) /* Digital Input Disable Register 0 */
#define ADC_DIDR1             _SFR_MEM8 (0x007F) /* Digital Input Disable Register 1 */

/* CURRENT_SOURCE - Current Source (0x0000) */
#define CURRENT_SOURCE_BASE   _SFR_MEM8 (0x0000) /* CURRENT_SOURCE Base Address */
#define CURRENT_SOURCE_AMISCR _SFR_MEM8 (0x0077) /* Analog Miscellaneous Control Register (Shared with AD_CONVERTER IO_MODULE) */

/* AC - Analog Comparator (0x0000) */
#define AC_BASE               _SFR_MEM8 (0x0000) /* AC Base Address */
#define AC_ACSR               _SFR_MEM8 (0x0050) /* Analog Comparator Control And Status Register */
#define AC_ADCSRB             _SFR_MEM8 (0x007B) /* Analog Comparator & ADC Control and Status Register B (Shared with AD_CONVERTER IO_MODULE) */

/* EXINT - External Interrupts (0x0000) */
#define EXINT_BASE            _SFR_MEM8 (0x0000) /* EXINT Base Address */
#define EXINT_PCIFR           _SFR_MEM8 (0x003B) /* Pin Change Interrupt Flag Register */
#define EXINT_EIFR            _SFR_MEM8 (0x003C) /* External Interrupt Flag Register */
#define EXINT_EIMSK           _SFR_MEM8 (0x003D) /* External Interrupt Mask Register */
#define EXINT_PCICR           _SFR_MEM8 (0x0068) /* Pin Change Interrupt Control Register */
#define EXINT_EICRA           _SFR_MEM8 (0x0069) /* External Interrupt Control Register */
#define EXINT_PCMSK0          _SFR_MEM8 (0x006B) /* Pin Change Mask Register 0 */
#define EXINT_PCMSK1          _SFR_MEM8 (0x006C) /* Pin Change Mask Register 1 */

/* BOOT_LOAD - Bootloader (0x0000) */
#define BOOT_LOAD_BASE        _SFR_MEM8 (0x0000) /* BOOT_LOAD Base Address */
#define BOOT_LOAD_SPMCSR      _SFR_MEM8 (0x0057) /* Store Program Memory Control Register */

/* CPU - CPU Registers (0x0000) */
#define CPU_BASE              _SFR_MEM8 (0x0000) /* CPU Base Address */
#define CPU_PORTCR            _SFR_MEM8 (0x0032) /* Port Control Register */
#define CPU_GPIOR0            _SFR_MEM8 (0x003E) /* General purpose register 0 */
#define CPU_GPIOR1            _SFR_MEM8 (0x004A) /* General Purpose register 1 */
#define CPU_GPIOR2            _SFR_MEM8 (0x004B) /* General Purpose IO register 2 */
#define CPU_DWDR              _SFR_MEM8 (0x0051) /* DebugWire data register */
#define CPU_SMCR              _SFR_MEM8 (0x0053) /* Sleep Mode Control Register */
#define CPU_MCUSR             _SFR_MEM8 (0x0054) /* MCU Status register */
#define CPU_MCUCR             _SFR_MEM8 (0x0055) /* MCU Control Register */
#define CPU_SP                _SFR_MEM16(0x005D) /* Stack Pointer  Bytes */
#define CPU_SPL               _SFR_MEM8 (0x005D) /* Stack Pointer  Bytes LOW BYTE */
#define CPU_SPH               _SFR_MEM8 (0x005E) /* Stack Pointer  Bytes HIGH BYTE */
#define CPU_SREG              _SFR_MEM8 (0x005F) /* Status Register */
#define CPU_CLKPR             _SFR_MEM8 (0x0061) /* Clock Prescale Register */
#define CPU_CLKCSR            _SFR_MEM8 (0x0062) /* Clock Control & Status Register */
#define CPU_CLKSELR           _SFR_MEM8 (0x0063) /* Clock Selection Register */
#define CPU_PRR               _SFR_MEM8 (0x0064) /* Power Reduction Register */
#define CPU_OSCCAL            _SFR_MEM8 (0x0066) /* Oscillator Calibration Register */

/* FUSE - Fuses (0x0000) */
#define FUSE_BASE             _SFR_MEM8 (0x0000) /* FUSE Base Address */
#define FUSE_LOW              _SFR_MEM8 (0x0000) 
#define FUSE_HIGH             _SFR_MEM8 (0x0001) 
#define FUSE_EXTENDED         _SFR_MEM8 (0x0002) 

/* LOCKBIT - Lockbits (0x0000) */
#define LOCKBIT_BASE          _SFR_MEM8 (0x0000) /* LOCKBIT Base Address */
#define LOCKBIT_LOCKBIT       _SFR_MEM8 (0x0000) 
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
#define None_PCINT0_vect_num       (3)                 
#define None_PCINT0_vect           _VECTOR(3)          /* Pin Change Interrupt Request 0 */
#define None_PCINT1_vect_num       (4)                 
#define None_PCINT1_vect           _VECTOR(4)          /* Pin Change Interrupt Request 1 */
#define None_WDT_vect_num          (5)                 
#define None_WDT_vect              _VECTOR(5)          /* Watchdog Time-Out Interrupt */
#define None_TIMER1_CAPT_vect_num  (6)                 
#define None_TIMER1_CAPT_vect      _VECTOR(6)          /* Timer/Counter1 Capture Event */
#define None_TIMER1_COMPA_vect_num (7)                 
#define None_TIMER1_COMPA_vect     _VECTOR(7)          /* Timer/Counter1 Compare Match 1A */
#define None_TIMER1_COMPB_vect_num (8)                 
#define None_TIMER1_COMPB_vect     _VECTOR(8)          /* Timer/Counter1 Compare Match 1B */
#define None_TIMER1_OVF_vect_num   (9)                 
#define None_TIMER1_OVF_vect       _VECTOR(9)          /* Timer/Counter1 Overflow */
#define None_TIMER0_COMPA_vect_num (10)                
#define None_TIMER0_COMPA_vect     _VECTOR(10)         /* Timer/Counter0 Compare Match 0A */
#define None_TIMER0_OVF_vect_num   (11)                
#define None_TIMER0_OVF_vect       _VECTOR(11)         /* Timer/Counter0 Overflow */
#define None_LIN_TC_vect_num       (12)                
#define None_LIN_TC_vect           _VECTOR(12)         /* LIN Transfer Complete */
#define None_LIN_ERR_vect_num      (13)                
#define None_LIN_ERR_vect          _VECTOR(13)         /* LIN Error */
#define None_SPI_STC_vect_num      (14)                
#define None_SPI_STC_vect          _VECTOR(14)         /* SPI Serial Transfer Complete */
#define None_ADC_vect_num          (15)                
#define None_ADC_vect              _VECTOR(15)         /* ADC Conversion Complete */
#define None_EE_RDY_vect_num       (16)                
#define None_EE_RDY_vect           _VECTOR(16)         /* EEPROM Ready */
#define None_ANA_COMP_vect_num     (17)                
#define None_ANA_COMP_vect         _VECTOR(17)         /* Analog Comparator */
#define None_USI_START_vect_num    (18)                
#define None_USI_START_vect        _VECTOR(18)         /* USI Start Condition Detection */
#define None_USI_OVF_vect_num      (19)                
#define None_USI_OVF_vect          _VECTOR(19)         /* USI Counter Overflow */

/* Vector Table Size */
#define _VECTOR_SIZE               (2)                 /* Size of individual vector. */
#define _VECTORS_SIZE              (20 * _VECTOR_SIZE) /* Size of all vectors */
/*
================================================================================
Constants
================================================================================
*/

#define PROGMEM_START   (0x0000)                           
#define PROGMEM_SIZE    (0x2000)                           
#define PROGMEM_END     (PROGMEM_START + PROGMEM_SIZE - 1) 

#define FLASH_START     (0x0000)                           
#define FLASH_SIZE      (0x2000)                           
#define FLASH_PAGE_SIZE (0x0080)                           
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
#define DATAMEM_SIZE        (0x0300)                               
#define DATAMEM_END         (DATAMEM_START + DATAMEM_SIZE - 1)     

#define REGISTERS_START     (0x0000)                               
#define REGISTERS_SIZE      (0x0020)                               
#define REGISTERS_PAGE_SIZE (0x0001)                               
#define REGISTERS_END       (REGISTERS_START + REGISTERS_SIZE - 1) 

#define MAPPED_IO_START     (0x0020)                               
#define MAPPED_IO_SIZE      (0x00E0)                               
#define MAPPED_IO_PAGE_SIZE (0x0001)                               
#define MAPPED_IO_END       (MAPPED_IO_START + MAPPED_IO_SIZE - 1) 

#define IRAM_START          (0x0100)                               
#define IRAM_SIZE           (0x0200)                               
#define IRAM_PAGE_SIZE      (0x0001)                               
#define IRAM_END            (IRAM_START + IRAM_SIZE - 1)           

#define EEPROMMEM_START         (0x0000)                               
#define EEPROMMEM_SIZE          (0x0200)                               
#define EEPROMMEM_END           (EEPROMMEM_START + EEPROMMEM_SIZE - 1) 

#define EEPROM_START            (0x0000)                               
#define EEPROM_SIZE             (0x0200)                               
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

/*
================================================================================
Fuses/LockBits/Signatures
================================================================================
*/

/* ============ Fuses ============ */

#define FUSE_MEMORY_SIZE 2 

/* Fuse offset 0x00 */
#define SUT_CKSEL0 (unsigned char)~_BV(0) /* Select Clock source bit 0 */
#define SUT_CKSEL1 (unsigned char)~_BV(1) /* Select Clock source bit 1 */
#define SUT_CKSEL2 (unsigned char)~_BV(2) /* Select Clock source bit 2 */
#define SUT_CKSEL3 (unsigned char)~_BV(3) /* Select Clock source bit 3 */
#define SUT_CKSEL4 (unsigned char)~_BV(4) /* Select Clock source bit 4 */
#define SUT_CKSEL5 (unsigned char)~_BV(5) /* Select Clock source bit 5 */
#define CKOUT      (unsigned char)~_BV(6) /* Clock output on PORTB5 */
#define CKDIV8     (unsigned char)~_BV(7) /* Divide clock by 8 internally */

/* Fuse offset 0x01 */
#define BODLEVEL0 (unsigned char)~_BV(0) /* Brown-out Detector trigger level bit 0 */
#define BODLEVEL1 (unsigned char)~_BV(1) /* Brown-out Detector trigger level bit 1 */
#define BODLEVEL2 (unsigned char)~_BV(2) /* Brown-out Detector trigger level bit 2 */
#define EESAVE    (unsigned char)~_BV(3) /* Preserve EEPROM through the Chip Erase cycle */
#define WDTON     (unsigned char)~_BV(4) /* Watch-dog Timer always ON */
#define SPIEN     (unsigned char)~_BV(5) /* Serial program downloading (SPI) enabled */
#define DWEN      (unsigned char)~_BV(6) /* Debug Wire enable */
#define RSTDISBL  (unsigned char)~_BV(7) /* Reset Disabled (Enable PB7 as i/o pin) */

/* Fuse offset 0x02 */
#define SELFPRGEN (unsigned char)~_BV(0) /* Self Programming enable */


/* ========== Lock Bits ========== */
#define __LOCK_BITS_EXIST  


/* ========== Signature ========== */
#define SIGNATURE_0 (0x1E) 
#define SIGNATURE_1 (0x93) 
#define SIGNATURE_2 (0x87) 

#endif /* #ifdef _AVR_ATtiny87_H_INCLUDED */
