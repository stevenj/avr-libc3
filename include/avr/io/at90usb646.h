/******************************************************************************
 *   This file is part of avr-libc3.                                          * 
 *                                                                            * 
 *   Automatically created by devtools/gen-ioheader-atdf.py (V0.91)           * 
 *                                                                            * 
 *   .atpack File: AT90USB646.atdf                                            * 
 *   .ATDF File:   atdf/AT90USB646.atdf                                       * 
 *   Version:      2.0.12                                                     * 
 *   Date:         2019-04-26                                                 * 
 *   Device:       AT90USB646                                                 * 
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
#  define _AVR_IOXXX_H_ "ioAT90USB646.h"
#else
#  error "Attempt to include more than one <avr/ioXXX.h> file."
#endif

#ifndef _AVR_AT90USB646_H_INCLUDED
#  define _AVR_AT90USB646_H_INCLUDED

/*
================================================================================
Ungrouped common register
================================================================================
*/

#define GPIOR0 _SFR_MEM8 (0x3E) /* General Purpose IO Register 0 */

#define GPIOR1 _SFR_MEM8 (0x4A) /* General Purpose IO Register 1 */
#define GPIOR2 _SFR_MEM8 (0x4B) /* General Purpose IO Register 2 */

#define SMCR   _SFR_MEM8 (0x53) /* Sleep Mode Control Register */
#define MCUSR  _SFR_MEM8 (0x54) /* MCU Status Register */
#define MCUCR  _SFR_MEM8 (0x55) /* MCU Control Register */

#define RAMPZ  _SFR_MEM8 (0x5B) /* RAM Page Z Select Register */
#define EIND   _SFR_MEM8 (0x5C) /* Extended Indirect Register */
#define SP     _SFR_MEM16(0x5D) /* Stack Pointer  */
#define SREG   _SFR_MEM8 (0x5F) /* Status Register */

#define CLKPR  _SFR_MEM8 (0x61) 

#define PRR0   _SFR_MEM8 (0x64) /* Power Reduction Register0 */
#define PRR1   _SFR_MEM8 (0x65) /* Power Reduction Register1 */
#define OSCCAL _SFR_MEM8 (0x66) /* Oscillator Calibration Value */

#define XMCRA  _SFR_MEM8 (0x74) /* External Memory Control Register A */
#define XMCRB  _SFR_MEM8 (0x75) /* External Memory Control Register B */


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
    FUSE_BODLEVEL_DISABLED_gc = (0x07), /* Brown-out detection disabled; [BODLEVEL=111] */
    FUSE_BODLEVEL_2V0_gc      = (0x06), /* Brown-out detection at VCC=2.0 V */
    FUSE_BODLEVEL_2V2_gc      = (0x05), /* Brown-out detection at VCC=2.2 V */
    FUSE_BODLEVEL_2V4_gc      = (0x04), /* Brown-out detection at VCC=2.4 V */
    FUSE_BODLEVEL_2V6_gc      = (0x03), /* Brown-out detection at VCC=2.6 V */
    FUSE_BODLEVEL_3V4_gc      = (0x02), /* Brown-out detection at VCC=3.4 V */
    FUSE_BODLEVEL_3V5_gc      = (0x01), /* Brown-out detection at VCC=3.5 V */
    FUSE_BODLEVEL_4V3_gc      = (0x00), /* Brown-out detection at VCC=4.3 V */
} FUSE_BODLEVEL_t;

/* Hardware Boot Enable */
typedef enum FUSE_HWBE_enum
{
    FUSE_HWBE_CLEAR_gc = (0x00), /* Hardware Boot Enable - CLEAR */
    FUSE_HWBE_SET_gc   = (0x08), /* Hardware Boot Enable - SET */
} FUSE_HWBE_t;

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
    FUSE_BOOTSZ_512W_7F00_gc  = (0x03<<1), /* Boot Flash size=512 words start address=$7F00 */
    FUSE_BOOTSZ_1024W_7E00_gc = (0x02<<1), /* Boot Flash size=1024 words start address=$7E00 */
    FUSE_BOOTSZ_2408W_7C00_gc = (0x01<<1), /* Boot Flash size=2408 words start address=$7C00 */
    FUSE_BOOTSZ_4096W_7800_gc = (0x00<<1), /* Boot Flash size=4096 words start address=$7800 */
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

/* Clock output on PORTC7 */
typedef enum FUSE_CKOUT_enum
{
    FUSE_CKOUT_CLEAR_gc = (0x00), /* Clock output on PORTC7 - CLEAR */
    FUSE_CKOUT_SET_gc   = (0x40), /* Clock output on PORTC7 - SET */
} FUSE_CKOUT_t;

/* Select Clock Source */
typedef enum FUSE_SUT_CKSEL_enum
{
    FUSE_SUT_CKSEL_EXTCLK_6CK_0MS_gc                 = (0x00), /* Ext. Clock; Start-up time: 6 CK + 0 ms */
    FUSE_SUT_CKSEL_EXTCLK_6CK_4MS1_gc                = (0x10), /* Ext. Clock; Start-up time: 6 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTCLK_6CK_65MS_gc                = (0x20), /* Ext. Clock; Start-up time: 6 CK + 65 ms */
    FUSE_SUT_CKSEL_INTRCOSC_6CK_0MS_gc               = (0x02), /* Int. RC Osc.; Start-up time: 6 CK + 0 ms */
    FUSE_SUT_CKSEL_INTRCOSC_6CK_4MS1_gc              = (0x12), /* Int. RC Osc.; Start-up time: 6 CK + 4.1 ms */
    FUSE_SUT_CKSEL_INTRCOSC_6CK_65MS_gc              = (0x22), /* Int. RC Osc.; Start-up time: 6 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTLOFXTAL_32KCK_0MS_INTCAP_gc    = (0x07), /* Ext. Low-Freq. Crystal; Start-up time: 32K CK + 0 ms; Int. Cap. */
    FUSE_SUT_CKSEL_EXTLOFXTAL_32KCK_4MS1_INTCAP_gc   = (0x17), /* Ext. Low-Freq. Crystal; Start-up time: 32K CK + 4.1 ms; Int. Cap. */
    FUSE_SUT_CKSEL_EXTLOFXTAL_32KCK_65MS_INTCAP_gc   = (0x27), /* Ext. Low-Freq. Crystal; Start-up time: 32K CK + 65 ms; Int. Cap. */
    FUSE_SUT_CKSEL_EXTLOFXTAL_1KCK_0MS_INTCAP_gc     = (0x06), /* Ext. Low-Freq. Crystal; Start-up time: 1K CK + 0 ms; Int. Cap. */
    FUSE_SUT_CKSEL_EXTLOFXTAL_1KCK_4MS1_INTCAP_gc    = (0x16), /* Ext. Low-Freq. Crystal; Start-up time: 1K CK + 4.1 ms; Int. Cap. */
    FUSE_SUT_CKSEL_EXTLOFXTAL_1KCK_65MS_INTCAP_gc    = (0x26), /* Ext. Low-Freq. Crystal; Start-up time: 1K CK + 65 ms; Int. Cap. */
    FUSE_SUT_CKSEL_EXTLOFXTAL_32KCK_0MS_gc           = (0x05), /* Ext. Low-Freq. Crystal; Start-up time: 32K CK + 0 ms */
    FUSE_SUT_CKSEL_EXTLOFXTAL_32KCK_4MS1_gc          = (0x15), /* Ext. Low-Freq. Crystal; Start-up time: 32K CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTLOFXTAL_32KCK_65MS_gc          = (0x25), /* Ext. Low-Freq. Crystal; Start-up time: 32K CK + 65 ms */
    FUSE_SUT_CKSEL_EXTLOFXTAL_1KCK_0MS_gc            = (0x04), /* Ext. Low-Freq. Crystal; Start-up time: 1K CK + 0 ms */
    FUSE_SUT_CKSEL_EXTLOFXTAL_1KCK_4MS1_gc           = (0x14), /* Ext. Low-Freq. Crystal; Start-up time: 1K CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTLOFXTAL_1KCK_65MS_gc           = (0x24), /* Ext. Low-Freq. Crystal; Start-up time: 1K CK + 65 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_258CK_4MS1_gc = (0x08), /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time: 258 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_258CK_65MS_gc = (0x18), /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time: 258 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_1KCK_0MS_gc   = (0x28), /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time: 1K CK + 0 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_1KCK_4MS1_gc  = (0x38), /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time: 1K CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_1KCK_65MS_gc  = (0x09), /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time: 1K CK + 65 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_16KCK_0MS_gc  = (0x19), /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time: 16K CK + 0 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_16KCK_4MS1_gc = (0x29), /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time: 16K CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_16KCK_65MS_gc = (0x39), /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time: 16K CK + 65 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_258CK_4MS1_gc  = (0x0A), /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time: 258 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_258CK_65MS_gc  = (0x1A), /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time: 258 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_1KCK_0MS_gc    = (0x2A), /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time: 1K CK + 0 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_1KCK_4MS1_gc   = (0x3A), /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time: 1K CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_1KCK_65MS_gc   = (0x0B), /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time: 1K CK + 65 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_16KCK_0MS_gc   = (0x1B), /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time: 16K CK + 0 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_16KCK_4MS1_gc  = (0x2B), /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time: 16K CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_16KCK_65MS_gc  = (0x3B), /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time: 16K CK + 65 ms */
    FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_258CK_4MS1_gc   = (0x0C), /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time: 258 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_258CK_65MS_gc   = (0x1C), /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time: 258 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_1KCK_0MS_gc     = (0x2C), /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time: 1K CK + 0 ms */
    FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_1KCK_4MS1_gc    = (0x3C), /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time: 1K CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_1KCK_65MS_gc    = (0x0D), /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time: 1K CK + 65 ms */
    FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_16KCK_0MS_gc    = (0x1D), /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time: 16K CK + 0 ms */
    FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_16KCK_4MS1_gc   = (0x2D), /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time: 16K CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_16KCK_65MS_gc   = (0x3D), /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time: 16K CK + 65 ms */
    FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_258CK_4MS1_gc     = (0x0E), /* Ext. Crystal Osc. 8.0-    MHz; Start-up time: 258 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_258CK_65MS_gc     = (0x1E), /* Ext. Crystal Osc. 8.0-    MHz; Start-up time: 258 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_1KCK_0MS_gc       = (0x2E), /* Ext. Crystal Osc. 8.0-    MHz; Start-up time: 1K CK + 0 ms */
    FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_1KCK_4MS1_gc      = (0x3E), /* Ext. Crystal Osc. 8.0-    MHz; Start-up time: 1K CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_1KCK_65MS_gc      = (0x0F), /* Ext. Crystal Osc. 8.0-    MHz; Start-up time: 1K CK + 65 ms */
    FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_16KCK_0MS_gc      = (0x1F), /* Ext. Crystal Osc. 8.0-    MHz; Start-up time: 16K CK + 0 ms */
    FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_16KCK_4MS1_gc     = (0x2F), /* Ext. Crystal Osc. 8.0-    MHz; Start-up time: 16K CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_16KCK_65MS_gc     = (0x3F), /* Ext. Crystal Osc. 8.0-    MHz; Start-up time: 16K CK + 65 ms */
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
PORT - I/O Port
--------------------------------------------------------------------------------
*/

typedef struct PORTC_struct
{
    register8_t rsv_0x00[38]; /* RESERVED REGISTER BLOCK */
    register8_t PINC;         /* Port C Input Pins */
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
    register8_t PIND;         /* Port D Input Pins */
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
    register8_t PINE;         /* Input Pins, Port E */
    register8_t DDRE;         /* Data Direction Register, Port E */
    register8_t PORTE;        /* Data Register, Port E */
} PORTE_t;


/*
--------------------------------------------------------------------------------
PORT - I/O Port
--------------------------------------------------------------------------------
*/

typedef struct PORTF_struct
{
    register8_t rsv_0x00[47]; /* RESERVED REGISTER BLOCK */
    register8_t PINF;         /* Input Pins, Port F */
    register8_t DDRF;         /* Data Direction Register, Port F */
    register8_t PORTF;        /* Data Register, Port F */
} PORTF_t;


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
    register8_t GPIOR2;       /* General Purpose IO Register 2 */
    register8_t rsv_0x4C[7];  /* RESERVED REGISTER BLOCK */
    register8_t SMCR;         /* Sleep Mode Control Register */
    register8_t MCUSR;        /* MCU Status Register */
    register8_t MCUCR;        /* MCU Control Register */
    register8_t rsv_0x56[5];  /* RESERVED REGISTER BLOCK */
    register8_t RAMPZ;        /* RAM Page Z Select Register */
    register8_t EIND;         /* Extended Indirect Register */
    _REGISTER16 (SP);         /* Stack Pointer  */
    register8_t rsv_0x5E;     /* RESERVED REGISTER */
    register8_t SREG;         /* Status Register */
    register8_t rsv_0x60;     /* RESERVED REGISTER */
    register8_t CLKPR;       
    register8_t rsv_0x62[2];  /* RESERVED REGISTER BLOCK */
    register8_t PRR0;         /* Power Reduction Register0 */
    register8_t PRR1;         /* Power Reduction Register1 */
    register8_t OSCCAL;       /* Oscillator Calibration Value */
    register8_t rsv_0x67[13]; /* RESERVED REGISTER BLOCK */
    register8_t XMCRA;        /* External Memory Control Register A */
    register8_t XMCRB;        /* External Memory Control Register B */
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

/* Pull-up disable */
typedef enum CPU_PUD_enum
{
    CPU_PUD_CLEAR_gc = (0x00), /* Pull-up disable - CLEAR */
    CPU_PUD_SET_gc   = (0x10), /* Pull-up disable - SET */
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

/* Power-on reset flag */
typedef enum CPU_PORF_enum
{
    CPU_PORF_CLEAR_gc = (0x00), /* Power-on reset flag - CLEAR */
    CPU_PORF_SET_gc   = (0x01), /* Power-on reset flag - SET */
} CPU_PORF_t;

/* External SRAM Enable */
typedef enum CPU_SRE_enum
{
    CPU_SRE_CLEAR_gc = (0x00), /* External SRAM Enable - CLEAR */
    CPU_SRE_SET_gc   = (0x80), /* External SRAM Enable - SET */
} CPU_SRE_t;

/* Wait state page limit */
typedef enum CPU_SRL_enum
{
    CPU_SRL_VAL_0x00_gc = (0x00<<4), /* LS = N/A, US = 0x1100 - 0xFFFF */
    CPU_SRL_VAL_0x01_gc = (0x01<<4), /* LS = 0x2100 - 0x1FFF, US = 0x2000 - 0xFFFF */
    CPU_SRL_VAL_0x02_gc = (0x02<<4), /* LS = 0x2100 - 0x3FFF, US = 0x4000 - 0xFFFF */
    CPU_SRL_VAL_0x03_gc = (0x03<<4), /* LS = 0x2100 - 0x5FFF, US = 0x6000 - 0xFFFF */
    CPU_SRL_VAL_0x04_gc = (0x04<<4), /* LS = 0x2100 - 0x7FFF, US = 0x8000 - 0xFFFF */
    CPU_SRL_VAL_0x05_gc = (0x05<<4), /* LS = 0x2100 - 0x9FFF, US = 0xA000 - 0xFFFF */
    CPU_SRL_VAL_0x06_gc = (0x06<<4), /* LS = 0x2100 - 0xBFFF, US = 0xC000 - 0xFFFF */
    CPU_SRL_VAL_0x07_gc = (0x07<<4), /* LS = 0x2100 - 0xDFFF, US = 0xE000 - 0xFFFF */
} CPU_SRL_t;

/* Wait state select bit upper page */
typedef enum CPU_SRW1_enum
{
    CPU_SRW1_VAL_0x00_gc = (0x00<<2), /* No wait-states */
    CPU_SRW1_VAL_0x01_gc = (0x01<<2), /* Wait one cycle during read/write strobe */
    CPU_SRW1_VAL_0x02_gc = (0x02<<2), /* Wait two cycles during read/write strobe */
    CPU_SRW1_VAL_0x03_gc = (0x03<<2), /* Wait two cycles during read/write and wait one cycle before driving out new address */
} CPU_SRW1_t;

/* Wait state select bit lower page */
typedef enum CPU_SRW0_enum
{
    CPU_SRW0_VAL_0x00_gc = (0x00), /* No wait-states */
    CPU_SRW0_VAL_0x01_gc = (0x01), /* Wait one cycle during read/write strobe */
    CPU_SRW0_VAL_0x02_gc = (0x02), /* Wait two cycles during read/write strobe */
    CPU_SRW0_VAL_0x03_gc = (0x03), /* Wait two cycles during read/write and wait one cycle before driving out new address */
} CPU_SRW0_t;

/* External Memory Bus Keeper Enable */
typedef enum CPU_XMBK_enum
{
    CPU_XMBK_CLEAR_gc = (0x00), /* External Memory Bus Keeper Enable - CLEAR */
    CPU_XMBK_SET_gc   = (0x80), /* External Memory Bus Keeper Enable - SET */
} CPU_XMBK_t;

/* External Memory High Mask */
typedef enum CPU_XMM_enum
{
    CPU_XMM_VAL_0x00_gc = (0x00), /* None */
    CPU_XMM_VAL_0x01_gc = (0x01), /* Px7 */
    CPU_XMM_VAL_0x02_gc = (0x02), /* Px7-Px6 */
    CPU_XMM_VAL_0x03_gc = (0x03), /* Px7-Px5 */
    CPU_XMM_VAL_0x04_gc = (0x04), /* Px7-Px4 */
    CPU_XMM_VAL_0x05_gc = (0x05), /* Px7-Px3 */
    CPU_XMM_VAL_0x06_gc = (0x06), /* Px7-Px2 */
    CPU_XMM_VAL_0x07_gc = (0x07), /* Full Port X */
} CPU_XMM_t;

/* -CLKPCE */
typedef enum CPU_CLKPCE_enum
{
    CPU_CLKPCE_CLEAR_gc = (0x00), /* -CLKPCE - CLEAR */
    CPU_CLKPCE_SET_gc   = (0x80), /* -CLKPCE - SET */
} CPU_CLKPCE_t;

/* -CLKPS */
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

/* General Purpose IO Register 0 bit 7 */
typedef enum CPU_GPIOR07_enum
{
    CPU_GPIOR07_CLEAR_gc = (0x00), /* General Purpose IO Register 0 bit 7 - CLEAR */
    CPU_GPIOR07_SET_gc   = (0x80), /* General Purpose IO Register 0 bit 7 - SET */
} CPU_GPIOR07_t;

/* General Purpose IO Register 0 bit 6 */
typedef enum CPU_GPIOR06_enum
{
    CPU_GPIOR06_CLEAR_gc = (0x00), /* General Purpose IO Register 0 bit 6 - CLEAR */
    CPU_GPIOR06_SET_gc   = (0x40), /* General Purpose IO Register 0 bit 6 - SET */
} CPU_GPIOR06_t;

/* General Purpose IO Register 0 bit 5 */
typedef enum CPU_GPIOR05_enum
{
    CPU_GPIOR05_CLEAR_gc = (0x00), /* General Purpose IO Register 0 bit 5 - CLEAR */
    CPU_GPIOR05_SET_gc   = (0x20), /* General Purpose IO Register 0 bit 5 - SET */
} CPU_GPIOR05_t;

/* General Purpose IO Register 0 bit 4 */
typedef enum CPU_GPIOR04_enum
{
    CPU_GPIOR04_CLEAR_gc = (0x00), /* General Purpose IO Register 0 bit 4 - CLEAR */
    CPU_GPIOR04_SET_gc   = (0x10), /* General Purpose IO Register 0 bit 4 - SET */
} CPU_GPIOR04_t;

/* General Purpose IO Register 0 bit 3 */
typedef enum CPU_GPIOR03_enum
{
    CPU_GPIOR03_CLEAR_gc = (0x00), /* General Purpose IO Register 0 bit 3 - CLEAR */
    CPU_GPIOR03_SET_gc   = (0x08), /* General Purpose IO Register 0 bit 3 - SET */
} CPU_GPIOR03_t;

/* General Purpose IO Register 0 bit 2 */
typedef enum CPU_GPIOR02_enum
{
    CPU_GPIOR02_CLEAR_gc = (0x00), /* General Purpose IO Register 0 bit 2 - CLEAR */
    CPU_GPIOR02_SET_gc   = (0x04), /* General Purpose IO Register 0 bit 2 - SET */
} CPU_GPIOR02_t;

/* General Purpose IO Register 0 bit 1 */
typedef enum CPU_GPIOR01_enum
{
    CPU_GPIOR01_CLEAR_gc = (0x00), /* General Purpose IO Register 0 bit 1 - CLEAR */
    CPU_GPIOR01_SET_gc   = (0x02), /* General Purpose IO Register 0 bit 1 - SET */
} CPU_GPIOR01_t;

/* General Purpose IO Register 0 bit 0 */
typedef enum CPU_GPIOR00_enum
{
    CPU_GPIOR00_CLEAR_gc = (0x00), /* General Purpose IO Register 0 bit 0 - CLEAR */
    CPU_GPIOR00_SET_gc   = (0x01), /* General Purpose IO Register 0 bit 0 - SET */
} CPU_GPIOR00_t;

/* Power Reduction USB */
typedef enum CPU_PRUSB_enum
{
    CPU_PRUSB_CLEAR_gc = (0x00), /* Power Reduction USB - CLEAR */
    CPU_PRUSB_SET_gc   = (0x80), /* Power Reduction USB - SET */
} CPU_PRUSB_t;

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

/* Power Reduction ADC */
typedef enum CPU_PRADC_enum
{
    CPU_PRADC_CLEAR_gc = (0x00), /* Power Reduction ADC - CLEAR */
    CPU_PRADC_SET_gc   = (0x01), /* Power Reduction ADC - SET */
} CPU_PRADC_t;

/*
--------------------------------------------------------------------------------
TWI - Two Wire Serial Interface
--------------------------------------------------------------------------------
*/

typedef struct TWI_struct
{
    register8_t rsv_0x00[184]; /* RESERVED REGISTER BLOCK */
    register8_t TWBR;          /* TWI Bit Rate register */
    register8_t TWSR;          /* TWI Status Register */
    register8_t TWAR;          /* TWI (Slave) Address register */
    register8_t TWDR;          /* TWI Data register */
    register8_t TWCR;          /* TWI Control Register */
    register8_t TWAMR;         /* TWI (Slave) Address Mask Register */
} TWI_t;


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

/* TWI Start Condition Bit */
typedef enum TWI_TWSTA_enum
{
    TWI_TWSTA_CLEAR_gc = (0x00), /* TWI Start Condition Bit - CLEAR */
    TWI_TWSTA_SET_gc   = (0x20), /* TWI Start Condition Bit - SET */
} TWI_TWSTA_t;

/* TWI Stop Condition Bit */
typedef enum TWI_TWSTO_enum
{
    TWI_TWSTO_CLEAR_gc = (0x00), /* TWI Stop Condition Bit - CLEAR */
    TWI_TWSTO_SET_gc   = (0x10), /* TWI Stop Condition Bit - SET */
} TWI_TWSTO_t;

/* TWI Write Collition Flag */
typedef enum TWI_TWWC_enum
{
    TWI_TWWC_CLEAR_gc = (0x00), /* TWI Write Collition Flag - CLEAR */
    TWI_TWWC_SET_gc   = (0x08), /* TWI Write Collition Flag - SET */
} TWI_TWWC_t;

/* TWI Enable Bit */
typedef enum TWI_TWEN_enum
{
    TWI_TWEN_CLEAR_gc = (0x00), /* TWI Enable Bit - CLEAR */
    TWI_TWEN_SET_gc   = (0x04), /* TWI Enable Bit - SET */
} TWI_TWEN_t;

/* TWI Interrupt Enable */
typedef enum TWI_TWIE_enum
{
    TWI_TWIE_CLEAR_gc = (0x00), /* TWI Interrupt Enable - CLEAR */
    TWI_TWIE_SET_gc   = (0x01), /* TWI Interrupt Enable - SET */
} TWI_TWIE_t;

/* TWI Status */
#define TWI_TWSR_TWS_gc(x) ((x<<3) & 0xF8)

/* TWI Prescaler */
typedef enum TWI_TWPS_enum
{
    TWI_TWPS_VAL_0x00_gc = (0x00), /* 1 */
    TWI_TWPS_VAL_0x01_gc = (0x01), /* 4 */
    TWI_TWPS_VAL_0x02_gc = (0x02), /* 16 */
    TWI_TWPS_VAL_0x03_gc = (0x03), /* 64 */
} TWI_TWPS_t;

/* TWI (Slave) Address register Bits */
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

/*
--------------------------------------------------------------------------------
USART - USART
--------------------------------------------------------------------------------
*/

typedef struct USART1_struct
{
    register8_t rsv_0x00[200]; /* RESERVED REGISTER BLOCK */
    register8_t UCSR1A;        /* USART Control and Status Register A */
    register8_t UCSR1B;        /* USART Control and Status Register B */
    register8_t UCSR1C;        /* USART Control and Status Register C */
    register8_t rsv_0xCB;      /* RESERVED REGISTER */
    _REGISTER16 (UBRR1);       /* USART Baud Rate Register  Bytes */
    register8_t rsv_0xCD;      /* RESERVED REGISTER */
    register8_t UDR1;          /* USART I/O Data Register */
} USART1_t;


/* USART Receive Complete */
typedef enum USART1_RXC1_enum
{
    USART1_RXC1_CLEAR_gc = (0x00), /* USART Receive Complete - CLEAR */
    USART1_RXC1_SET_gc   = (0x80), /* USART Receive Complete - SET */
} USART1_RXC1_t;

/* USART Transmitt Complete */
typedef enum USART1_TXC1_enum
{
    USART1_TXC1_CLEAR_gc = (0x00), /* USART Transmitt Complete - CLEAR */
    USART1_TXC1_SET_gc   = (0x40), /* USART Transmitt Complete - SET */
} USART1_TXC1_t;

/* USART Data Register Empty */
typedef enum USART1_UDRE1_enum
{
    USART1_UDRE1_CLEAR_gc = (0x00), /* USART Data Register Empty - CLEAR */
    USART1_UDRE1_SET_gc   = (0x20), /* USART Data Register Empty - SET */
} USART1_UDRE1_t;

/* Framing Error */
typedef enum USART1_FE1_enum
{
    USART1_FE1_CLEAR_gc = (0x00), /* Framing Error - CLEAR */
    USART1_FE1_SET_gc   = (0x10), /* Framing Error - SET */
} USART1_FE1_t;

/* Data overRun */
typedef enum USART1_DOR1_enum
{
    USART1_DOR1_CLEAR_gc = (0x00), /* Data overRun - CLEAR */
    USART1_DOR1_SET_gc   = (0x08), /* Data overRun - SET */
} USART1_DOR1_t;

/* Parity Error */
typedef enum USART1_UPE1_enum
{
    USART1_UPE1_CLEAR_gc = (0x00), /* Parity Error - CLEAR */
    USART1_UPE1_SET_gc   = (0x04), /* Parity Error - SET */
} USART1_UPE1_t;

/* Double the USART transmission speed */
typedef enum USART1_U2X1_enum
{
    USART1_U2X1_CLEAR_gc = (0x00), /* Double the USART transmission speed - CLEAR */
    USART1_U2X1_SET_gc   = (0x02), /* Double the USART transmission speed - SET */
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

/* USART Data register Empty Interrupt Enable */
typedef enum USART1_UDRIE1_enum
{
    USART1_UDRIE1_CLEAR_gc = (0x00), /* USART Data register Empty Interrupt Enable - CLEAR */
    USART1_UDRIE1_SET_gc   = (0x20), /* USART Data register Empty Interrupt Enable - SET */
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
    USART1_UMSEL1_VAL_0x03_gc = (0x03<<6), /* Master SPI */
} USART1_UMSEL1_t;

/* Parity Mode Bits */
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
#define USART1_UCSR1C_UCSZ1_gc(x) ((x<<1) & 0x06)

/* Clock Polarity */
typedef enum USART1_UCPOL1_enum
{
    USART1_UCPOL1_CLEAR_gc = (0x00), /* Clock Polarity - CLEAR */
    USART1_UCPOL1_SET_gc   = (0x01), /* Clock Polarity - SET */
} USART1_UCPOL1_t;

/*
--------------------------------------------------------------------------------
USB_DEVICE - USB Device Registers
--------------------------------------------------------------------------------
*/

typedef struct USB_DEVICE_struct
{
    register8_t rsv_0x00[224]; /* RESERVED REGISTER BLOCK */
    register8_t UDCON;        
    register8_t UDINT;        
    register8_t UDIEN;        
    register8_t UDADDR;       
    _REGISTER16 (UDFNUM);     
    register8_t rsv_0xE5;      /* RESERVED REGISTER */
    register8_t UDMFN;        
    register8_t rsv_0xE7;      /* RESERVED REGISTER */
    register8_t UEINTX;       
    register8_t UENUM;        
    register8_t UERST;        
    register8_t UECONX;       
    register8_t UECFG0X;      
    register8_t UECFG1X;      
    register8_t UESTA0X;      
    register8_t UESTA1X;      
    register8_t UEIENX;       
    register8_t UEDATX;       
    register8_t UEBCLX;       
    register8_t UEBCHX;       
    register8_t UEINT;        
} USB_DEVICE_t;


/* -FLERRE */
typedef enum USB_DEVICE_FLERRE_enum
{
    USB_DEVICE_FLERRE_CLEAR_gc = (0x00), /* -FLERRE - CLEAR */
    USB_DEVICE_FLERRE_SET_gc   = (0x80), /* -FLERRE - SET */
} USB_DEVICE_FLERRE_t;

/* -NAKINE */
typedef enum USB_DEVICE_NAKINE_enum
{
    USB_DEVICE_NAKINE_CLEAR_gc = (0x00), /* -NAKINE - CLEAR */
    USB_DEVICE_NAKINE_SET_gc   = (0x40), /* -NAKINE - SET */
} USB_DEVICE_NAKINE_t;

/* -NAKOUTE */
typedef enum USB_DEVICE_NAKOUTE_enum
{
    USB_DEVICE_NAKOUTE_CLEAR_gc = (0x00), /* -NAKOUTE - CLEAR */
    USB_DEVICE_NAKOUTE_SET_gc   = (0x10), /* -NAKOUTE - SET */
} USB_DEVICE_NAKOUTE_t;

/* -RXSTPE */
typedef enum USB_DEVICE_RXSTPE_enum
{
    USB_DEVICE_RXSTPE_CLEAR_gc = (0x00), /* -RXSTPE - CLEAR */
    USB_DEVICE_RXSTPE_SET_gc   = (0x08), /* -RXSTPE - SET */
} USB_DEVICE_RXSTPE_t;

/* -RXOUTE */
typedef enum USB_DEVICE_RXOUTE_enum
{
    USB_DEVICE_RXOUTE_CLEAR_gc = (0x00), /* -RXOUTE - CLEAR */
    USB_DEVICE_RXOUTE_SET_gc   = (0x04), /* -RXOUTE - SET */
} USB_DEVICE_RXOUTE_t;

/* -STALLEDE */
typedef enum USB_DEVICE_STALLEDE_enum
{
    USB_DEVICE_STALLEDE_CLEAR_gc = (0x00), /* -STALLEDE - CLEAR */
    USB_DEVICE_STALLEDE_SET_gc   = (0x02), /* -STALLEDE - SET */
} USB_DEVICE_STALLEDE_t;

/* -TXINE */
typedef enum USB_DEVICE_TXINE_enum
{
    USB_DEVICE_TXINE_CLEAR_gc = (0x00), /* -TXINE - CLEAR */
    USB_DEVICE_TXINE_SET_gc   = (0x01), /* -TXINE - SET */
} USB_DEVICE_TXINE_t;

/* -CTRLDIR */
typedef enum USB_DEVICE_CTRLDIR_enum
{
    USB_DEVICE_CTRLDIR_CLEAR_gc = (0x00), /* -CTRLDIR - CLEAR */
    USB_DEVICE_CTRLDIR_SET_gc   = (0x04), /* -CTRLDIR - SET */
} USB_DEVICE_CTRLDIR_t;

/* -CURRBK */
#define USB_DEVICE_UESTA1X_CURRBK_gc(x) (x & 0x03)

/* -CFGOK */
typedef enum USB_DEVICE_CFGOK_enum
{
    USB_DEVICE_CFGOK_CLEAR_gc = (0x00), /* -CFGOK - CLEAR */
    USB_DEVICE_CFGOK_SET_gc   = (0x80), /* -CFGOK - SET */
} USB_DEVICE_CFGOK_t;

/* -OVERFI */
typedef enum USB_DEVICE_OVERFI_enum
{
    USB_DEVICE_OVERFI_CLEAR_gc = (0x00), /* -OVERFI - CLEAR */
    USB_DEVICE_OVERFI_SET_gc   = (0x40), /* -OVERFI - SET */
} USB_DEVICE_OVERFI_t;

/* -UNDERFI */
typedef enum USB_DEVICE_UNDERFI_enum
{
    USB_DEVICE_UNDERFI_CLEAR_gc = (0x00), /* -UNDERFI - CLEAR */
    USB_DEVICE_UNDERFI_SET_gc   = (0x20), /* -UNDERFI - SET */
} USB_DEVICE_UNDERFI_t;

/* -DTSEQ */
#define USB_DEVICE_UESTA0X_DTSEQ_gc(x) ((x<<2) & 0x0C)

/* -NBUSYBK */
#define USB_DEVICE_UESTA0X_NBUSYBK_gc(x) (x & 0x03)

/* -EPSIZE */
#define USB_DEVICE_UECFG1X_EPSIZE_gc(x) ((x<<4) & 0x70)

/* -EPBK */
#define USB_DEVICE_UECFG1X_EPBK_gc(x) ((x<<2) & 0x0C)

/* -ALLOC */
typedef enum USB_DEVICE_ALLOC_enum
{
    USB_DEVICE_ALLOC_CLEAR_gc = (0x00), /* -ALLOC - CLEAR */
    USB_DEVICE_ALLOC_SET_gc   = (0x02), /* -ALLOC - SET */
} USB_DEVICE_ALLOC_t;

/* -EPTYPE */
#define USB_DEVICE_UECFG0X_EPTYPE_gc(x) ((x<<6) & 0xC0)

/* -EPDIR */
typedef enum USB_DEVICE_EPDIR_enum
{
    USB_DEVICE_EPDIR_CLEAR_gc = (0x00), /* -EPDIR - CLEAR */
    USB_DEVICE_EPDIR_SET_gc   = (0x01), /* -EPDIR - SET */
} USB_DEVICE_EPDIR_t;

/* -STALLRQ */
typedef enum USB_DEVICE_STALLRQ_enum
{
    USB_DEVICE_STALLRQ_CLEAR_gc = (0x00), /* -STALLRQ - CLEAR */
    USB_DEVICE_STALLRQ_SET_gc   = (0x20), /* -STALLRQ - SET */
} USB_DEVICE_STALLRQ_t;

/* -STALLRQC */
typedef enum USB_DEVICE_STALLRQC_enum
{
    USB_DEVICE_STALLRQC_CLEAR_gc = (0x00), /* -STALLRQC - CLEAR */
    USB_DEVICE_STALLRQC_SET_gc   = (0x10), /* -STALLRQC - SET */
} USB_DEVICE_STALLRQC_t;

/* -RSTDT */
typedef enum USB_DEVICE_RSTDT_enum
{
    USB_DEVICE_RSTDT_CLEAR_gc = (0x00), /* -RSTDT - CLEAR */
    USB_DEVICE_RSTDT_SET_gc   = (0x08), /* -RSTDT - SET */
} USB_DEVICE_RSTDT_t;

/* -EPEN */
typedef enum USB_DEVICE_EPEN_enum
{
    USB_DEVICE_EPEN_CLEAR_gc = (0x00), /* -EPEN - CLEAR */
    USB_DEVICE_EPEN_SET_gc   = (0x01), /* -EPEN - SET */
} USB_DEVICE_EPEN_t;

/* -FIFOCON */
typedef enum USB_DEVICE_FIFOCON_enum
{
    USB_DEVICE_FIFOCON_CLEAR_gc = (0x00), /* -FIFOCON - CLEAR */
    USB_DEVICE_FIFOCON_SET_gc   = (0x80), /* -FIFOCON - SET */
} USB_DEVICE_FIFOCON_t;

/* -NAKINI */
typedef enum USB_DEVICE_NAKINI_enum
{
    USB_DEVICE_NAKINI_CLEAR_gc = (0x00), /* -NAKINI - CLEAR */
    USB_DEVICE_NAKINI_SET_gc   = (0x40), /* -NAKINI - SET */
} USB_DEVICE_NAKINI_t;

/* -RWAL */
typedef enum USB_DEVICE_RWAL_enum
{
    USB_DEVICE_RWAL_CLEAR_gc = (0x00), /* -RWAL - CLEAR */
    USB_DEVICE_RWAL_SET_gc   = (0x20), /* -RWAL - SET */
} USB_DEVICE_RWAL_t;

/* -NAKOUTI */
typedef enum USB_DEVICE_NAKOUTI_enum
{
    USB_DEVICE_NAKOUTI_CLEAR_gc = (0x00), /* -NAKOUTI - CLEAR */
    USB_DEVICE_NAKOUTI_SET_gc   = (0x10), /* -NAKOUTI - SET */
} USB_DEVICE_NAKOUTI_t;

/* -RXSTPI */
typedef enum USB_DEVICE_RXSTPI_enum
{
    USB_DEVICE_RXSTPI_CLEAR_gc = (0x00), /* -RXSTPI - CLEAR */
    USB_DEVICE_RXSTPI_SET_gc   = (0x08), /* -RXSTPI - SET */
} USB_DEVICE_RXSTPI_t;

/* -RXOUTI */
typedef enum USB_DEVICE_RXOUTI_enum
{
    USB_DEVICE_RXOUTI_CLEAR_gc = (0x00), /* -RXOUTI - CLEAR */
    USB_DEVICE_RXOUTI_SET_gc   = (0x04), /* -RXOUTI - SET */
} USB_DEVICE_RXOUTI_t;

/* -STALLEDI */
typedef enum USB_DEVICE_STALLEDI_enum
{
    USB_DEVICE_STALLEDI_CLEAR_gc = (0x00), /* -STALLEDI - CLEAR */
    USB_DEVICE_STALLEDI_SET_gc   = (0x02), /* -STALLEDI - SET */
} USB_DEVICE_STALLEDI_t;

/* -TXINI */
typedef enum USB_DEVICE_TXINI_enum
{
    USB_DEVICE_TXINI_CLEAR_gc = (0x00), /* -TXINI - CLEAR */
    USB_DEVICE_TXINI_SET_gc   = (0x01), /* -TXINI - SET */
} USB_DEVICE_TXINI_t;

/* -FNCERR */
typedef enum USB_DEVICE_FNCERR_enum
{
    USB_DEVICE_FNCERR_CLEAR_gc = (0x00), /* -FNCERR - CLEAR */
    USB_DEVICE_FNCERR_SET_gc   = (0x10), /* -FNCERR - SET */
} USB_DEVICE_FNCERR_t;

/* -ADDEN */
typedef enum USB_DEVICE_ADDEN_enum
{
    USB_DEVICE_ADDEN_CLEAR_gc = (0x00), /* -ADDEN - CLEAR */
    USB_DEVICE_ADDEN_SET_gc   = (0x80), /* -ADDEN - SET */
} USB_DEVICE_ADDEN_t;

/* -UADD */
#define USB_DEVICE_UDADDR_UADD_gc(x) (x & 0x7F)

/* -UPRSME */
typedef enum USB_DEVICE_UPRSME_enum
{
    USB_DEVICE_UPRSME_CLEAR_gc = (0x00), /* -UPRSME - CLEAR */
    USB_DEVICE_UPRSME_SET_gc   = (0x40), /* -UPRSME - SET */
} USB_DEVICE_UPRSME_t;

/* -EORSME */
typedef enum USB_DEVICE_EORSME_enum
{
    USB_DEVICE_EORSME_CLEAR_gc = (0x00), /* -EORSME - CLEAR */
    USB_DEVICE_EORSME_SET_gc   = (0x20), /* -EORSME - SET */
} USB_DEVICE_EORSME_t;

/* -WAKEUPE */
typedef enum USB_DEVICE_WAKEUPE_enum
{
    USB_DEVICE_WAKEUPE_CLEAR_gc = (0x00), /* -WAKEUPE - CLEAR */
    USB_DEVICE_WAKEUPE_SET_gc   = (0x10), /* -WAKEUPE - SET */
} USB_DEVICE_WAKEUPE_t;

/* -EORSTE */
typedef enum USB_DEVICE_EORSTE_enum
{
    USB_DEVICE_EORSTE_CLEAR_gc = (0x00), /* -EORSTE - CLEAR */
    USB_DEVICE_EORSTE_SET_gc   = (0x08), /* -EORSTE - SET */
} USB_DEVICE_EORSTE_t;

/* -SOFE */
typedef enum USB_DEVICE_SOFE_enum
{
    USB_DEVICE_SOFE_CLEAR_gc = (0x00), /* -SOFE - CLEAR */
    USB_DEVICE_SOFE_SET_gc   = (0x04), /* -SOFE - SET */
} USB_DEVICE_SOFE_t;

/* -SUSPE */
typedef enum USB_DEVICE_SUSPE_enum
{
    USB_DEVICE_SUSPE_CLEAR_gc = (0x00), /* -SUSPE - CLEAR */
    USB_DEVICE_SUSPE_SET_gc   = (0x01), /* -SUSPE - SET */
} USB_DEVICE_SUSPE_t;

/* -UPRSMI */
typedef enum USB_DEVICE_UPRSMI_enum
{
    USB_DEVICE_UPRSMI_CLEAR_gc = (0x00), /* -UPRSMI - CLEAR */
    USB_DEVICE_UPRSMI_SET_gc   = (0x40), /* -UPRSMI - SET */
} USB_DEVICE_UPRSMI_t;

/* -EORSMI */
typedef enum USB_DEVICE_EORSMI_enum
{
    USB_DEVICE_EORSMI_CLEAR_gc = (0x00), /* -EORSMI - CLEAR */
    USB_DEVICE_EORSMI_SET_gc   = (0x20), /* -EORSMI - SET */
} USB_DEVICE_EORSMI_t;

/* -WAKEUPI */
typedef enum USB_DEVICE_WAKEUPI_enum
{
    USB_DEVICE_WAKEUPI_CLEAR_gc = (0x00), /* -WAKEUPI - CLEAR */
    USB_DEVICE_WAKEUPI_SET_gc   = (0x10), /* -WAKEUPI - SET */
} USB_DEVICE_WAKEUPI_t;

/* -EORSTI */
typedef enum USB_DEVICE_EORSTI_enum
{
    USB_DEVICE_EORSTI_CLEAR_gc = (0x00), /* -EORSTI - CLEAR */
    USB_DEVICE_EORSTI_SET_gc   = (0x08), /* -EORSTI - SET */
} USB_DEVICE_EORSTI_t;

/* -SOFI */
typedef enum USB_DEVICE_SOFI_enum
{
    USB_DEVICE_SOFI_CLEAR_gc = (0x00), /* -SOFI - CLEAR */
    USB_DEVICE_SOFI_SET_gc   = (0x04), /* -SOFI - SET */
} USB_DEVICE_SOFI_t;

/* -SUSPI */
typedef enum USB_DEVICE_SUSPI_enum
{
    USB_DEVICE_SUSPI_CLEAR_gc = (0x00), /* -SUSPI - CLEAR */
    USB_DEVICE_SUSPI_SET_gc   = (0x01), /* -SUSPI - SET */
} USB_DEVICE_SUSPI_t;

/* -LSM */
typedef enum USB_DEVICE_LSM_enum
{
    USB_DEVICE_LSM_CLEAR_gc = (0x00), /* -LSM - CLEAR */
    USB_DEVICE_LSM_SET_gc   = (0x04), /* -LSM - SET */
} USB_DEVICE_LSM_t;

/* -RMWKUP */
typedef enum USB_DEVICE_RMWKUP_enum
{
    USB_DEVICE_RMWKUP_CLEAR_gc = (0x00), /* -RMWKUP - CLEAR */
    USB_DEVICE_RMWKUP_SET_gc   = (0x02), /* -RMWKUP - SET */
} USB_DEVICE_RMWKUP_t;

/* -DETACH */
typedef enum USB_DEVICE_DETACH_enum
{
    USB_DEVICE_DETACH_CLEAR_gc = (0x00), /* -DETACH - CLEAR */
    USB_DEVICE_DETACH_SET_gc   = (0x01), /* -DETACH - SET */
} USB_DEVICE_DETACH_t;

/*
--------------------------------------------------------------------------------
USB_GLOBAL - USB Controller
--------------------------------------------------------------------------------
*/

typedef struct USB_GLOBAL_struct
{
    register8_t rsv_0x00[215]; /* RESERVED REGISTER BLOCK */
    register8_t UHWCON;        /* USB Hardware Configuration Register */
    register8_t USBCON;        /* USB General Control Register */
    register8_t USBSTA;       
    register8_t USBINT;       
    register8_t rsv_0xDB[2];   /* RESERVED REGISTER BLOCK */
    register8_t OTGCON;       
    register8_t OTGIEN;       
    register8_t OTGINT;       
    register8_t rsv_0xE0[25];  /* RESERVED REGISTER BLOCK */
    register8_t OTGTCON;      
} USB_GLOBAL_t;


/* -STOI */
typedef enum USB_GLOBAL_STOI_enum
{
    USB_GLOBAL_STOI_CLEAR_gc = (0x00), /* -STOI - CLEAR */
    USB_GLOBAL_STOI_SET_gc   = (0x20), /* -STOI - SET */
} USB_GLOBAL_STOI_t;

/* -HNPERRI */
typedef enum USB_GLOBAL_HNPERRI_enum
{
    USB_GLOBAL_HNPERRI_CLEAR_gc = (0x00), /* -HNPERRI - CLEAR */
    USB_GLOBAL_HNPERRI_SET_gc   = (0x10), /* -HNPERRI - SET */
} USB_GLOBAL_HNPERRI_t;

/* -ROLEEXI */
typedef enum USB_GLOBAL_ROLEEXI_enum
{
    USB_GLOBAL_ROLEEXI_CLEAR_gc = (0x00), /* -ROLEEXI - CLEAR */
    USB_GLOBAL_ROLEEXI_SET_gc   = (0x08), /* -ROLEEXI - SET */
} USB_GLOBAL_ROLEEXI_t;

/* -BCERRI */
typedef enum USB_GLOBAL_BCERRI_enum
{
    USB_GLOBAL_BCERRI_CLEAR_gc = (0x00), /* -BCERRI - CLEAR */
    USB_GLOBAL_BCERRI_SET_gc   = (0x04), /* -BCERRI - SET */
} USB_GLOBAL_BCERRI_t;

/* -VBERRI */
typedef enum USB_GLOBAL_VBERRI_enum
{
    USB_GLOBAL_VBERRI_CLEAR_gc = (0x00), /* -VBERRI - CLEAR */
    USB_GLOBAL_VBERRI_SET_gc   = (0x02), /* -VBERRI - SET */
} USB_GLOBAL_VBERRI_t;

/* -SRPI */
typedef enum USB_GLOBAL_SRPI_enum
{
    USB_GLOBAL_SRPI_CLEAR_gc = (0x00), /* -SRPI - CLEAR */
    USB_GLOBAL_SRPI_SET_gc   = (0x01), /* -SRPI - SET */
} USB_GLOBAL_SRPI_t;

/* -STOE */
typedef enum USB_GLOBAL_STOE_enum
{
    USB_GLOBAL_STOE_CLEAR_gc = (0x00), /* -STOE - CLEAR */
    USB_GLOBAL_STOE_SET_gc   = (0x20), /* -STOE - SET */
} USB_GLOBAL_STOE_t;

/* -HNPERRE */
typedef enum USB_GLOBAL_HNPERRE_enum
{
    USB_GLOBAL_HNPERRE_CLEAR_gc = (0x00), /* -HNPERRE - CLEAR */
    USB_GLOBAL_HNPERRE_SET_gc   = (0x10), /* -HNPERRE - SET */
} USB_GLOBAL_HNPERRE_t;

/* -ROLEEXE */
typedef enum USB_GLOBAL_ROLEEXE_enum
{
    USB_GLOBAL_ROLEEXE_CLEAR_gc = (0x00), /* -ROLEEXE - CLEAR */
    USB_GLOBAL_ROLEEXE_SET_gc   = (0x08), /* -ROLEEXE - SET */
} USB_GLOBAL_ROLEEXE_t;

/* -BCERRE */
typedef enum USB_GLOBAL_BCERRE_enum
{
    USB_GLOBAL_BCERRE_CLEAR_gc = (0x00), /* -BCERRE - CLEAR */
    USB_GLOBAL_BCERRE_SET_gc   = (0x04), /* -BCERRE - SET */
} USB_GLOBAL_BCERRE_t;

/* -VBERRE */
typedef enum USB_GLOBAL_VBERRE_enum
{
    USB_GLOBAL_VBERRE_CLEAR_gc = (0x00), /* -VBERRE - CLEAR */
    USB_GLOBAL_VBERRE_SET_gc   = (0x02), /* -VBERRE - SET */
} USB_GLOBAL_VBERRE_t;

/* -SRPE */
typedef enum USB_GLOBAL_SRPE_enum
{
    USB_GLOBAL_SRPE_CLEAR_gc = (0x00), /* -SRPE - CLEAR */
    USB_GLOBAL_SRPE_SET_gc   = (0x01), /* -SRPE - SET */
} USB_GLOBAL_SRPE_t;

/* -HNPREQ */
typedef enum USB_GLOBAL_HNPREQ_enum
{
    USB_GLOBAL_HNPREQ_CLEAR_gc = (0x00), /* -HNPREQ - CLEAR */
    USB_GLOBAL_HNPREQ_SET_gc   = (0x20), /* -HNPREQ - SET */
} USB_GLOBAL_HNPREQ_t;

/* -SRPREQ */
typedef enum USB_GLOBAL_SRPREQ_enum
{
    USB_GLOBAL_SRPREQ_CLEAR_gc = (0x00), /* -SRPREQ - CLEAR */
    USB_GLOBAL_SRPREQ_SET_gc   = (0x10), /* -SRPREQ - SET */
} USB_GLOBAL_SRPREQ_t;

/* -SRPSEL */
typedef enum USB_GLOBAL_SRPSEL_enum
{
    USB_GLOBAL_SRPSEL_CLEAR_gc = (0x00), /* -SRPSEL - CLEAR */
    USB_GLOBAL_SRPSEL_SET_gc   = (0x08), /* -SRPSEL - SET */
} USB_GLOBAL_SRPSEL_t;

/* -VBUSHWC */
typedef enum USB_GLOBAL_VBUSHWC_enum
{
    USB_GLOBAL_VBUSHWC_CLEAR_gc = (0x00), /* -VBUSHWC - CLEAR */
    USB_GLOBAL_VBUSHWC_SET_gc   = (0x04), /* -VBUSHWC - SET */
} USB_GLOBAL_VBUSHWC_t;

/* -VBUSREQ */
typedef enum USB_GLOBAL_VBUSREQ_enum
{
    USB_GLOBAL_VBUSREQ_CLEAR_gc = (0x00), /* -VBUSREQ - CLEAR */
    USB_GLOBAL_VBUSREQ_SET_gc   = (0x02), /* -VBUSREQ - SET */
} USB_GLOBAL_VBUSREQ_t;

/* -VBUSRQC */
typedef enum USB_GLOBAL_VBUSRQC_enum
{
    USB_GLOBAL_VBUSRQC_CLEAR_gc = (0x00), /* -VBUSRQC - CLEAR */
    USB_GLOBAL_VBUSRQC_SET_gc   = (0x01), /* -VBUSRQC - SET */
} USB_GLOBAL_VBUSRQC_t;

/* -OTGTCON_7 */
typedef enum USB_GLOBAL_OTGTCON_7_enum
{
    USB_GLOBAL_OTGTCON_7_CLEAR_gc = (0x00), /* -OTGTCON_7 - CLEAR */
    USB_GLOBAL_OTGTCON_7_SET_gc   = (0x80), /* -OTGTCON_7 - SET */
} USB_GLOBAL_OTGTCON_7_t;

/* -PAGE */
#define USB_GLOBAL_OTGTCON_PAGE_gc(x) ((x<<5) & 0x60)

/* -VALUE_2 */
#define USB_GLOBAL_OTGTCON_VALUE_2_gc(x) (x & 0x07)

/* -IDTI */
typedef enum USB_GLOBAL_IDTI_enum
{
    USB_GLOBAL_IDTI_CLEAR_gc = (0x00), /* -IDTI - CLEAR */
    USB_GLOBAL_IDTI_SET_gc   = (0x02), /* -IDTI - SET */
} USB_GLOBAL_IDTI_t;

/* -VBUSTI */
typedef enum USB_GLOBAL_VBUSTI_enum
{
    USB_GLOBAL_VBUSTI_CLEAR_gc = (0x00), /* -VBUSTI - CLEAR */
    USB_GLOBAL_VBUSTI_SET_gc   = (0x01), /* -VBUSTI - SET */
} USB_GLOBAL_VBUSTI_t;

/* -SPEED */
typedef enum USB_GLOBAL_SPEED_enum
{
    USB_GLOBAL_SPEED_CLEAR_gc = (0x00), /* -SPEED - CLEAR */
    USB_GLOBAL_SPEED_SET_gc   = (0x08), /* -SPEED - SET */
} USB_GLOBAL_SPEED_t;

/* -ID */
typedef enum USB_GLOBAL_ID_enum
{
    USB_GLOBAL_ID_CLEAR_gc = (0x00), /* -ID - CLEAR */
    USB_GLOBAL_ID_SET_gc   = (0x02), /* -ID - SET */
} USB_GLOBAL_ID_t;

/* -VBUS */
typedef enum USB_GLOBAL_VBUS_enum
{
    USB_GLOBAL_VBUS_CLEAR_gc = (0x00), /* -VBUS - CLEAR */
    USB_GLOBAL_VBUS_SET_gc   = (0x01), /* -VBUS - SET */
} USB_GLOBAL_VBUS_t;

/* USB General Control Register-USBE */
typedef enum USB_GLOBAL_USBE_enum
{
    USB_GLOBAL_USBE_CLEAR_gc = (0x00), /* USB General Control Register-USBE - CLEAR */
    USB_GLOBAL_USBE_SET_gc   = (0x80), /* USB General Control Register-USBE - SET */
} USB_GLOBAL_USBE_t;

/* USB General Control Register-HOST */
typedef enum USB_GLOBAL_HOST_enum
{
    USB_GLOBAL_HOST_CLEAR_gc = (0x00), /* USB General Control Register-HOST - CLEAR */
    USB_GLOBAL_HOST_SET_gc   = (0x40), /* USB General Control Register-HOST - SET */
} USB_GLOBAL_HOST_t;

/* USB General Control Register-FRZCLK */
typedef enum USB_GLOBAL_FRZCLK_enum
{
    USB_GLOBAL_FRZCLK_CLEAR_gc = (0x00), /* USB General Control Register-FRZCLK - CLEAR */
    USB_GLOBAL_FRZCLK_SET_gc   = (0x20), /* USB General Control Register-FRZCLK - SET */
} USB_GLOBAL_FRZCLK_t;

/* USB General Control Register-OTGPADE */
typedef enum USB_GLOBAL_OTGPADE_enum
{
    USB_GLOBAL_OTGPADE_CLEAR_gc = (0x00), /* USB General Control Register-OTGPADE - CLEAR */
    USB_GLOBAL_OTGPADE_SET_gc   = (0x10), /* USB General Control Register-OTGPADE - SET */
} USB_GLOBAL_OTGPADE_t;

/* USB General Control Register-IDTE */
typedef enum USB_GLOBAL_IDTE_enum
{
    USB_GLOBAL_IDTE_CLEAR_gc = (0x00), /* USB General Control Register-IDTE - CLEAR */
    USB_GLOBAL_IDTE_SET_gc   = (0x02), /* USB General Control Register-IDTE - SET */
} USB_GLOBAL_IDTE_t;

/* USB General Control Register-VBUSTE */
typedef enum USB_GLOBAL_VBUSTE_enum
{
    USB_GLOBAL_VBUSTE_CLEAR_gc = (0x00), /* USB General Control Register-VBUSTE - CLEAR */
    USB_GLOBAL_VBUSTE_SET_gc   = (0x01), /* USB General Control Register-VBUSTE - SET */
} USB_GLOBAL_VBUSTE_t;

/* USB Hardware Configuration Register-UIMOD */
typedef enum USB_GLOBAL_UIMOD_enum
{
    USB_GLOBAL_UIMOD_CLEAR_gc = (0x00), /* USB Hardware Configuration Register-UIMOD - CLEAR */
    USB_GLOBAL_UIMOD_SET_gc   = (0x80), /* USB Hardware Configuration Register-UIMOD - SET */
} USB_GLOBAL_UIMOD_t;

/* USB Hardware Configuration Register-UIDE */
typedef enum USB_GLOBAL_UIDE_enum
{
    USB_GLOBAL_UIDE_CLEAR_gc = (0x00), /* USB Hardware Configuration Register-UIDE - CLEAR */
    USB_GLOBAL_UIDE_SET_gc   = (0x40), /* USB Hardware Configuration Register-UIDE - SET */
} USB_GLOBAL_UIDE_t;

/* USB Hardware Configuration Register-UVCONE */
typedef enum USB_GLOBAL_UVCONE_enum
{
    USB_GLOBAL_UVCONE_CLEAR_gc = (0x00), /* USB Hardware Configuration Register-UVCONE - CLEAR */
    USB_GLOBAL_UVCONE_SET_gc   = (0x10), /* USB Hardware Configuration Register-UVCONE - SET */
} USB_GLOBAL_UVCONE_t;

/* USB Hardware Configuration Register-UVREGE */
typedef enum USB_GLOBAL_UVREGE_enum
{
    USB_GLOBAL_UVREGE_CLEAR_gc = (0x00), /* USB Hardware Configuration Register-UVREGE - CLEAR */
    USB_GLOBAL_UVREGE_SET_gc   = (0x01), /* USB Hardware Configuration Register-UVREGE - SET */
} USB_GLOBAL_UVREGE_t;

/*
--------------------------------------------------------------------------------
USB_HOST - USB Host Registers
--------------------------------------------------------------------------------
*/

typedef struct USB_HOST_struct
{
    register8_t rsv_0x00[158]; /* RESERVED REGISTER BLOCK */
    register8_t UHCON;        
    register8_t UHINT;        
    register8_t UHIEN;        
    register8_t UHADDR;       
    _REGISTER16 (UHFNUM);     
    register8_t rsv_0xA3;      /* RESERVED REGISTER */
    register8_t UHFLEN;       
    register8_t UPINRQX;      
    register8_t UPINTX;       
    register8_t UPNUM;        
    register8_t UPRST;        
    register8_t UPCONX;       
    register8_t UPCFG0X;      
    register8_t UPCFG1X;      
    register8_t UPSTAX;       
    register8_t UPCFG2X;      
    register8_t UPIENX;       
    register8_t UPDATX;       
    register8_t rsv_0xB0[69];  /* RESERVED REGISTER BLOCK */
    register8_t UPERRX;       
    register8_t UPBCLX;       
    register8_t UPBCHX;       
    register8_t UPINT;        
} USB_HOST_t;


/* -COUNTER */
#define USB_HOST_UPERRX_COUNTER_gc(x) ((x<<5) & 0x60)

/* -CRC16 */
typedef enum USB_HOST_CRC16_enum
{
    USB_HOST_CRC16_CLEAR_gc = (0x00), /* -CRC16 - CLEAR */
    USB_HOST_CRC16_SET_gc   = (0x10), /* -CRC16 - SET */
} USB_HOST_CRC16_t;

/* -TIMEOUT */
typedef enum USB_HOST_TIMEOUT_enum
{
    USB_HOST_TIMEOUT_CLEAR_gc = (0x00), /* -TIMEOUT - CLEAR */
    USB_HOST_TIMEOUT_SET_gc   = (0x08), /* -TIMEOUT - SET */
} USB_HOST_TIMEOUT_t;

/* -PID */
typedef enum USB_HOST_PID_enum
{
    USB_HOST_PID_CLEAR_gc = (0x00), /* -PID - CLEAR */
    USB_HOST_PID_SET_gc   = (0x04), /* -PID - SET */
} USB_HOST_PID_t;

/* -DATAPID */
typedef enum USB_HOST_DATAPID_enum
{
    USB_HOST_DATAPID_CLEAR_gc = (0x00), /* -DATAPID - CLEAR */
    USB_HOST_DATAPID_SET_gc   = (0x02), /* -DATAPID - SET */
} USB_HOST_DATAPID_t;

/* -DATATGL */
typedef enum USB_HOST_DATATGL_enum
{
    USB_HOST_DATATGL_CLEAR_gc = (0x00), /* -DATATGL - CLEAR */
    USB_HOST_DATATGL_SET_gc   = (0x01), /* -DATATGL - SET */
} USB_HOST_DATATGL_t;

/* -FLERRE */
typedef enum USB_HOST_FLERRE_enum
{
    USB_HOST_FLERRE_CLEAR_gc = (0x00), /* -FLERRE - CLEAR */
    USB_HOST_FLERRE_SET_gc   = (0x80), /* -FLERRE - SET */
} USB_HOST_FLERRE_t;

/* -NAKEDE */
typedef enum USB_HOST_NAKEDE_enum
{
    USB_HOST_NAKEDE_CLEAR_gc = (0x00), /* -NAKEDE - CLEAR */
    USB_HOST_NAKEDE_SET_gc   = (0x40), /* -NAKEDE - SET */
} USB_HOST_NAKEDE_t;

/* -PERRE */
typedef enum USB_HOST_PERRE_enum
{
    USB_HOST_PERRE_CLEAR_gc = (0x00), /* -PERRE - CLEAR */
    USB_HOST_PERRE_SET_gc   = (0x10), /* -PERRE - SET */
} USB_HOST_PERRE_t;

/* -TXSTPE */
typedef enum USB_HOST_TXSTPE_enum
{
    USB_HOST_TXSTPE_CLEAR_gc = (0x00), /* -TXSTPE - CLEAR */
    USB_HOST_TXSTPE_SET_gc   = (0x08), /* -TXSTPE - SET */
} USB_HOST_TXSTPE_t;

/* -TXOUTE */
typedef enum USB_HOST_TXOUTE_enum
{
    USB_HOST_TXOUTE_CLEAR_gc = (0x00), /* -TXOUTE - CLEAR */
    USB_HOST_TXOUTE_SET_gc   = (0x04), /* -TXOUTE - SET */
} USB_HOST_TXOUTE_t;

/* -RXSTALLE */
typedef enum USB_HOST_RXSTALLE_enum
{
    USB_HOST_RXSTALLE_CLEAR_gc = (0x00), /* -RXSTALLE - CLEAR */
    USB_HOST_RXSTALLE_SET_gc   = (0x02), /* -RXSTALLE - SET */
} USB_HOST_RXSTALLE_t;

/* -RXINE */
typedef enum USB_HOST_RXINE_enum
{
    USB_HOST_RXINE_CLEAR_gc = (0x00), /* -RXINE - CLEAR */
    USB_HOST_RXINE_SET_gc   = (0x01), /* -RXINE - SET */
} USB_HOST_RXINE_t;

/* -CFGOK */
typedef enum USB_HOST_CFGOK_enum
{
    USB_HOST_CFGOK_CLEAR_gc = (0x00), /* -CFGOK - CLEAR */
    USB_HOST_CFGOK_SET_gc   = (0x80), /* -CFGOK - SET */
} USB_HOST_CFGOK_t;

/* -OVERFI */
typedef enum USB_HOST_OVERFI_enum
{
    USB_HOST_OVERFI_CLEAR_gc = (0x00), /* -OVERFI - CLEAR */
    USB_HOST_OVERFI_SET_gc   = (0x40), /* -OVERFI - SET */
} USB_HOST_OVERFI_t;

/* -UNDERFI */
typedef enum USB_HOST_UNDERFI_enum
{
    USB_HOST_UNDERFI_CLEAR_gc = (0x00), /* -UNDERFI - CLEAR */
    USB_HOST_UNDERFI_SET_gc   = (0x20), /* -UNDERFI - SET */
} USB_HOST_UNDERFI_t;

/* -DTSEQ */
#define USB_HOST_UPSTAX_DTSEQ_gc(x) ((x<<2) & 0x0C)

/* -NBUSYK */
#define USB_HOST_UPSTAX_NBUSYK_gc(x) (x & 0x03)

/* -PSIZE */
#define USB_HOST_UPCFG1X_PSIZE_gc(x) ((x<<4) & 0x70)

/* -PBK */
#define USB_HOST_UPCFG1X_PBK_gc(x) ((x<<2) & 0x0C)

/* -ALLOC */
typedef enum USB_HOST_ALLOC_enum
{
    USB_HOST_ALLOC_CLEAR_gc = (0x00), /* -ALLOC - CLEAR */
    USB_HOST_ALLOC_SET_gc   = (0x02), /* -ALLOC - SET */
} USB_HOST_ALLOC_t;

/* -PTYPE */
#define USB_HOST_UPCFG0X_PTYPE_gc(x) ((x<<6) & 0xC0)

/* -PTOKEN */
#define USB_HOST_UPCFG0X_PTOKEN_gc(x) ((x<<4) & 0x30)

/* -PEPNUM */
#define USB_HOST_UPCFG0X_PEPNUM_gc(x) (x & 0x0F)

/* -PFREEZE */
typedef enum USB_HOST_PFREEZE_enum
{
    USB_HOST_PFREEZE_CLEAR_gc = (0x00), /* -PFREEZE - CLEAR */
    USB_HOST_PFREEZE_SET_gc   = (0x40), /* -PFREEZE - SET */
} USB_HOST_PFREEZE_t;

/* -INMODE */
typedef enum USB_HOST_INMODE_enum
{
    USB_HOST_INMODE_CLEAR_gc = (0x00), /* -INMODE - CLEAR */
    USB_HOST_INMODE_SET_gc   = (0x20), /* -INMODE - SET */
} USB_HOST_INMODE_t;

/* -RSTDT */
typedef enum USB_HOST_RSTDT_enum
{
    USB_HOST_RSTDT_CLEAR_gc = (0x00), /* -RSTDT - CLEAR */
    USB_HOST_RSTDT_SET_gc   = (0x08), /* -RSTDT - SET */
} USB_HOST_RSTDT_t;

/* -PEN */
typedef enum USB_HOST_PEN_enum
{
    USB_HOST_PEN_CLEAR_gc = (0x00), /* -PEN - CLEAR */
    USB_HOST_PEN_SET_gc   = (0x01), /* -PEN - SET */
} USB_HOST_PEN_t;

/* -FIFOCON */
typedef enum USB_HOST_FIFOCON_enum
{
    USB_HOST_FIFOCON_CLEAR_gc = (0x00), /* -FIFOCON - CLEAR */
    USB_HOST_FIFOCON_SET_gc   = (0x80), /* -FIFOCON - SET */
} USB_HOST_FIFOCON_t;

/* -NAKEDI */
typedef enum USB_HOST_NAKEDI_enum
{
    USB_HOST_NAKEDI_CLEAR_gc = (0x00), /* -NAKEDI - CLEAR */
    USB_HOST_NAKEDI_SET_gc   = (0x40), /* -NAKEDI - SET */
} USB_HOST_NAKEDI_t;

/* -RWAL */
typedef enum USB_HOST_RWAL_enum
{
    USB_HOST_RWAL_CLEAR_gc = (0x00), /* -RWAL - CLEAR */
    USB_HOST_RWAL_SET_gc   = (0x20), /* -RWAL - SET */
} USB_HOST_RWAL_t;

/* -PERRI */
typedef enum USB_HOST_PERRI_enum
{
    USB_HOST_PERRI_CLEAR_gc = (0x00), /* -PERRI - CLEAR */
    USB_HOST_PERRI_SET_gc   = (0x10), /* -PERRI - SET */
} USB_HOST_PERRI_t;

/* -TXSTPI */
typedef enum USB_HOST_TXSTPI_enum
{
    USB_HOST_TXSTPI_CLEAR_gc = (0x00), /* -TXSTPI - CLEAR */
    USB_HOST_TXSTPI_SET_gc   = (0x08), /* -TXSTPI - SET */
} USB_HOST_TXSTPI_t;

/* -TXOUTI */
typedef enum USB_HOST_TXOUTI_enum
{
    USB_HOST_TXOUTI_CLEAR_gc = (0x00), /* -TXOUTI - CLEAR */
    USB_HOST_TXOUTI_SET_gc   = (0x04), /* -TXOUTI - SET */
} USB_HOST_TXOUTI_t;

/* -RXSTALLI */
typedef enum USB_HOST_RXSTALLI_enum
{
    USB_HOST_RXSTALLI_CLEAR_gc = (0x00), /* -RXSTALLI - CLEAR */
    USB_HOST_RXSTALLI_SET_gc   = (0x02), /* -RXSTALLI - SET */
} USB_HOST_RXSTALLI_t;

/* -RXINI */
typedef enum USB_HOST_RXINI_enum
{
    USB_HOST_RXINI_CLEAR_gc = (0x00), /* -RXINI - CLEAR */
    USB_HOST_RXINI_SET_gc   = (0x01), /* -RXINI - SET */
} USB_HOST_RXINI_t;

/* -HWUPE */
typedef enum USB_HOST_HWUPE_enum
{
    USB_HOST_HWUPE_CLEAR_gc = (0x00), /* -HWUPE - CLEAR */
    USB_HOST_HWUPE_SET_gc   = (0x40), /* -HWUPE - SET */
} USB_HOST_HWUPE_t;

/* -HSOFE */
typedef enum USB_HOST_HSOFE_enum
{
    USB_HOST_HSOFE_CLEAR_gc = (0x00), /* -HSOFE - CLEAR */
    USB_HOST_HSOFE_SET_gc   = (0x20), /* -HSOFE - SET */
} USB_HOST_HSOFE_t;

/* -RXRSME */
typedef enum USB_HOST_RXRSME_enum
{
    USB_HOST_RXRSME_CLEAR_gc = (0x00), /* -RXRSME - CLEAR */
    USB_HOST_RXRSME_SET_gc   = (0x10), /* -RXRSME - SET */
} USB_HOST_RXRSME_t;

/* -RSMEDE */
typedef enum USB_HOST_RSMEDE_enum
{
    USB_HOST_RSMEDE_CLEAR_gc = (0x00), /* -RSMEDE - CLEAR */
    USB_HOST_RSMEDE_SET_gc   = (0x08), /* -RSMEDE - SET */
} USB_HOST_RSMEDE_t;

/* -RSTE */
typedef enum USB_HOST_RSTE_enum
{
    USB_HOST_RSTE_CLEAR_gc = (0x00), /* -RSTE - CLEAR */
    USB_HOST_RSTE_SET_gc   = (0x04), /* -RSTE - SET */
} USB_HOST_RSTE_t;

/* -DDISCE */
typedef enum USB_HOST_DDISCE_enum
{
    USB_HOST_DDISCE_CLEAR_gc = (0x00), /* -DDISCE - CLEAR */
    USB_HOST_DDISCE_SET_gc   = (0x02), /* -DDISCE - SET */
} USB_HOST_DDISCE_t;

/* -DCONNE */
typedef enum USB_HOST_DCONNE_enum
{
    USB_HOST_DCONNE_CLEAR_gc = (0x00), /* -DCONNE - CLEAR */
    USB_HOST_DCONNE_SET_gc   = (0x01), /* -DCONNE - SET */
} USB_HOST_DCONNE_t;

/* -UHUPI */
typedef enum USB_HOST_UHUPI_enum
{
    USB_HOST_UHUPI_CLEAR_gc = (0x00), /* -UHUPI - CLEAR */
    USB_HOST_UHUPI_SET_gc   = (0x40), /* -UHUPI - SET */
} USB_HOST_UHUPI_t;

/* -HSOFI */
typedef enum USB_HOST_HSOFI_enum
{
    USB_HOST_HSOFI_CLEAR_gc = (0x00), /* -HSOFI - CLEAR */
    USB_HOST_HSOFI_SET_gc   = (0x20), /* -HSOFI - SET */
} USB_HOST_HSOFI_t;

/* -RXRSMI */
typedef enum USB_HOST_RXRSMI_enum
{
    USB_HOST_RXRSMI_CLEAR_gc = (0x00), /* -RXRSMI - CLEAR */
    USB_HOST_RXRSMI_SET_gc   = (0x10), /* -RXRSMI - SET */
} USB_HOST_RXRSMI_t;

/* -RSMEDI */
typedef enum USB_HOST_RSMEDI_enum
{
    USB_HOST_RSMEDI_CLEAR_gc = (0x00), /* -RSMEDI - CLEAR */
    USB_HOST_RSMEDI_SET_gc   = (0x08), /* -RSMEDI - SET */
} USB_HOST_RSMEDI_t;

/* -RSTI */
typedef enum USB_HOST_RSTI_enum
{
    USB_HOST_RSTI_CLEAR_gc = (0x00), /* -RSTI - CLEAR */
    USB_HOST_RSTI_SET_gc   = (0x04), /* -RSTI - SET */
} USB_HOST_RSTI_t;

/* -DDISCI */
typedef enum USB_HOST_DDISCI_enum
{
    USB_HOST_DDISCI_CLEAR_gc = (0x00), /* -DDISCI - CLEAR */
    USB_HOST_DDISCI_SET_gc   = (0x02), /* -DDISCI - SET */
} USB_HOST_DDISCI_t;

/* -DCONNI */
typedef enum USB_HOST_DCONNI_enum
{
    USB_HOST_DCONNI_CLEAR_gc = (0x00), /* -DCONNI - CLEAR */
    USB_HOST_DCONNI_SET_gc   = (0x01), /* -DCONNI - SET */
} USB_HOST_DCONNI_t;

/* -RESUME */
typedef enum USB_HOST_RESUME_enum
{
    USB_HOST_RESUME_CLEAR_gc = (0x00), /* -RESUME - CLEAR */
    USB_HOST_RESUME_SET_gc   = (0x04), /* -RESUME - SET */
} USB_HOST_RESUME_t;

/* -RESET */
typedef enum USB_HOST_RESET_enum
{
    USB_HOST_RESET_CLEAR_gc = (0x00), /* -RESET - CLEAR */
    USB_HOST_RESET_SET_gc   = (0x02), /* -RESET - SET */
} USB_HOST_RESET_t;

/* -SOFEN */
typedef enum USB_HOST_SOFEN_enum
{
    USB_HOST_SOFEN_CLEAR_gc = (0x00), /* -SOFEN - CLEAR */
    USB_HOST_SOFEN_SET_gc   = (0x01), /* -SOFEN - SET */
} USB_HOST_SOFEN_t;

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

/* Read While Write section read enable */
typedef enum BOOT_LOAD_RWWSRE_enum
{
    BOOT_LOAD_RWWSRE_CLEAR_gc = (0x00), /* Read While Write section read enable - CLEAR */
    BOOT_LOAD_RWWSRE_SET_gc   = (0x10), /* Read While Write section read enable - SET */
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
EEPROM - EEPROM
--------------------------------------------------------------------------------
*/

typedef struct EEPROM_struct
{
    register8_t rsv_0x00[63]; /* RESERVED REGISTER BLOCK */
    register8_t EECR;         /* EEPROM Control Register */
    register8_t EEDR;         /* EEPROM Data Register */
    _REGISTER16 (EEAR);       /* EEPROM Address Register Low Bytes */
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
TC8 - Timer/Counter, 8-bit
--------------------------------------------------------------------------------
*/

typedef struct TC0_struct
{
    register8_t rsv_0x00[53]; /* RESERVED REGISTER BLOCK */
    register8_t TIFR0;        /* Timer/Counter0 Interrupt Flag register */
    register8_t rsv_0x36[13]; /* RESERVED REGISTER BLOCK */
    register8_t GTCCR;        /* General Timer/Counter Control Register */
    register8_t TCCR0A;       /* Timer/Counter  Control Register A */
    register8_t TCCR0B;       /* Timer/Counter Control Register B */
    register8_t TCNT0;        /* Timer/Counter0 */
    register8_t OCR0A;        /* Timer/Counter0 Output Compare Register */
    register8_t OCR0B;        /* Timer/Counter0 Output Compare Register */
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

/* Compare Output Mode, Phase Correct PWM Mode */
#define TC0_TCCR0A_COM0A_gc(x) ((x<<6) & 0xC0)

/* Compare Output Mode, Fast PWm */
#define TC0_TCCR0A_COM0B_gc(x) ((x<<4) & 0x30)

/* Waveform Generation Mode */
#define TC0_TCCR0A_WGM0_gc(x) (x & 0x03)

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

/* Timer/Counter0 Output Compare Flag 0B */
typedef enum TC0_OCF0B_enum
{
    TC0_OCF0B_CLEAR_gc = (0x00), /* Timer/Counter0 Output Compare Flag 0B - CLEAR */
    TC0_OCF0B_SET_gc   = (0x04), /* Timer/Counter0 Output Compare Flag 0B - SET */
} TC0_OCF0B_t;

/* Timer/Counter0 Output Compare Flag 0A */
typedef enum TC0_OCF0A_enum
{
    TC0_OCF0A_CLEAR_gc = (0x00), /* Timer/Counter0 Output Compare Flag 0A - CLEAR */
    TC0_OCF0A_SET_gc   = (0x02), /* Timer/Counter0 Output Compare Flag 0A - SET */
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

/* Prescaler Reset Timer/Counter1 and Timer/Counter0 */
typedef enum TC0_PSRSYNC_enum
{
    TC0_PSRSYNC_CLEAR_gc = (0x00), /* Prescaler Reset Timer/Counter1 and Timer/Counter0 - CLEAR */
    TC0_PSRSYNC_SET_gc   = (0x01), /* Prescaler Reset Timer/Counter1 and Timer/Counter0 - SET */
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

/* Output Compare Flag 2B */
typedef enum TC2_OCF2B_enum
{
    TC2_OCF2B_CLEAR_gc = (0x00), /* Output Compare Flag 2B - CLEAR */
    TC2_OCF2B_SET_gc   = (0x04), /* Output Compare Flag 2B - SET */
} TC2_OCF2B_t;

/* Output Compare Flag 2A */
typedef enum TC2_OCF2A_enum
{
    TC2_OCF2A_CLEAR_gc = (0x00), /* Output Compare Flag 2A - CLEAR */
    TC2_OCF2A_SET_gc   = (0x02), /* Output Compare Flag 2A - SET */
} TC2_OCF2A_t;

/* Timer/Counter2 Overflow Flag */
typedef enum TC2_TOV2_enum
{
    TC2_TOV2_CLEAR_gc = (0x00), /* Timer/Counter2 Overflow Flag - CLEAR */
    TC2_TOV2_SET_gc   = (0x01), /* Timer/Counter2 Overflow Flag - SET */
} TC2_TOV2_t;

/* Compare Output Mode bits */
#define TC2_TCCR2A_COM2A_gc(x) ((x<<6) & 0xC0)

/* Compare Output Mode bits */
#define TC2_TCCR2A_COM2B_gc(x) ((x<<4) & 0x30)

/* Waveform Genration Mode */
#define TC2_TCCR2A_WGM2_gc(x) (x & 0x03)

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

/* Waveform Generation Mode */
typedef enum TC2_WGM22_enum
{
    TC2_WGM22_CLEAR_gc = (0x00), /* Waveform Generation Mode - CLEAR */
    TC2_WGM22_SET_gc   = (0x08), /* Waveform Generation Mode - SET */
} TC2_WGM22_t;

/* Clock Select bits */
typedef enum TC2_CS2_enum
{
    TC2_CS2_VAL_0x00_gc = (0x00), /* No Clock Source (Stopped) */
    TC2_CS2_VAL_0x01_gc = (0x01), /* Running, No Prescaling */
    TC2_CS2_VAL_0x02_gc = (0x02), /* Running, CLK/8 */
    TC2_CS2_VAL_0x03_gc = (0x03), /* Running, CLK/32 */
    TC2_CS2_VAL_0x04_gc = (0x04), /* Running, CLK/64 */
    TC2_CS2_VAL_0x05_gc = (0x05), /* Running, CLK/128 */
    TC2_CS2_VAL_0x06_gc = (0x06), /* Running, CLK/256 */
    TC2_CS2_VAL_0x07_gc = (0x07), /* Running, CLK/1024 */
} TC2_CS2_t;

/* Enable External Clock Input */
typedef enum TC2_EXCLK_enum
{
    TC2_EXCLK_CLEAR_gc = (0x00), /* Enable External Clock Input - CLEAR */
    TC2_EXCLK_SET_gc   = (0x40), /* Enable External Clock Input - SET */
} TC2_EXCLK_t;

/* Asynchronous Timer/Counter2 */
typedef enum TC2_AS2_enum
{
    TC2_AS2_CLEAR_gc = (0x00), /* Asynchronous Timer/Counter2 - CLEAR */
    TC2_AS2_SET_gc   = (0x20), /* Asynchronous Timer/Counter2 - SET */
} TC2_AS2_t;

/* Timer/Counter2 Update Busy */
typedef enum TC2_TCN2UB_enum
{
    TC2_TCN2UB_CLEAR_gc = (0x00), /* Timer/Counter2 Update Busy - CLEAR */
    TC2_TCN2UB_SET_gc   = (0x10), /* Timer/Counter2 Update Busy - SET */
} TC2_TCN2UB_t;

/* Output Compare Register2 Update Busy */
typedef enum TC2_OCR2AUB_enum
{
    TC2_OCR2AUB_CLEAR_gc = (0x00), /* Output Compare Register2 Update Busy - CLEAR */
    TC2_OCR2AUB_SET_gc   = (0x08), /* Output Compare Register2 Update Busy - SET */
} TC2_OCR2AUB_t;

/* Output Compare Register 2 Update Busy */
typedef enum TC2_OCR2BUB_enum
{
    TC2_OCR2BUB_CLEAR_gc = (0x00), /* Output Compare Register 2 Update Busy - CLEAR */
    TC2_OCR2BUB_SET_gc   = (0x04), /* Output Compare Register 2 Update Busy - SET */
} TC2_OCR2BUB_t;

/* Timer/Counter Control Register2 Update Busy */
typedef enum TC2_TCR2AUB_enum
{
    TC2_TCR2AUB_CLEAR_gc = (0x00), /* Timer/Counter Control Register2 Update Busy - CLEAR */
    TC2_TCR2AUB_SET_gc   = (0x02), /* Timer/Counter Control Register2 Update Busy - SET */
} TC2_TCR2AUB_t;

/* Timer/Counter Control Register2 Update Busy */
typedef enum TC2_TCR2BUB_enum
{
    TC2_TCR2BUB_CLEAR_gc = (0x00), /* Timer/Counter Control Register2 Update Busy - CLEAR */
    TC2_TCR2BUB_SET_gc   = (0x01), /* Timer/Counter Control Register2 Update Busy - SET */
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
TC16 - Timer/Counter, 16-bit
--------------------------------------------------------------------------------
*/

typedef struct TC3_struct
{
    register8_t rsv_0x00[56]; /* RESERVED REGISTER BLOCK */
    register8_t TIFR3;        /* Timer/Counter3 Interrupt Flag register */
    register8_t rsv_0x39[56]; /* RESERVED REGISTER BLOCK */
    register8_t TIMSK3;       /* Timer/Counter3 Interrupt Mask Register */
    register8_t rsv_0x72[30]; /* RESERVED REGISTER BLOCK */
    register8_t TCCR3A;       /* Timer/Counter3 Control Register A */
    register8_t TCCR3B;       /* Timer/Counter3 Control Register B */
    register8_t TCCR3C;       /* Timer/Counter 3 Control Register C */
    register8_t rsv_0x93;     /* RESERVED REGISTER */
    _REGISTER16 (TCNT3);      /* Timer/Counter3  Bytes */
    register8_t rsv_0x95;     /* RESERVED REGISTER */
    _REGISTER16 (ICR3);       /* Timer/Counter3 Input Capture Register  Bytes */
    register8_t rsv_0x97;     /* RESERVED REGISTER */
    _REGISTER16 (OCR3A);      /* Timer/Counter3 Output Compare Register A  Bytes */
    register8_t rsv_0x99;     /* RESERVED REGISTER */
    _REGISTER16 (OCR3B);      /* Timer/Counter3 Output Compare Register B  Bytes */
    register8_t rsv_0x9B;     /* RESERVED REGISTER */
    _REGISTER16 (OCR3C);      /* Timer/Counter3 Output Compare Register B  Bytes */
} TC3_t;


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
    register8_t TCCR1C;       /* Timer/Counter 1 Control Register C */
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


/* Compare Output Mode 1A, bits */
#define TC3_TCCR3A_COM3A_gc(x) ((x<<6) & 0xC0)

/* Compare Output Mode 3B, bits */
#define TC3_TCCR3A_COM3B_gc(x) ((x<<4) & 0x30)

/* Compare Output Mode 3C, bits */
#define TC3_TCCR3A_COM3C_gc(x) ((x<<2) & 0x0C)

/* Waveform Generation Mode */
#define TC3_TCCR3A_WGM3_gc(x) (x & 0x03)

/* Input Capture 3 Noise Canceler */
typedef enum TC3_ICNC3_enum
{
    TC3_ICNC3_CLEAR_gc = (0x00), /* Input Capture 3 Noise Canceler - CLEAR */
    TC3_ICNC3_SET_gc   = (0x80), /* Input Capture 3 Noise Canceler - SET */
} TC3_ICNC3_t;

/* Input Capture 3 Edge Select */
typedef enum TC3_ICES3_enum
{
    TC3_ICES3_CLEAR_gc = (0x00), /* Input Capture 3 Edge Select - CLEAR */
    TC3_ICES3_SET_gc   = (0x40), /* Input Capture 3 Edge Select - SET */
} TC3_ICES3_t;

/* Waveform Generation Mode */
#define TC3_TCCR3B_WGM3_gc(x) ((x<<3) & 0x18)

/* Prescaler source of Timer/Counter 3 */
typedef enum TC3_CS3_enum
{
    TC3_CS3_VAL_0x00_gc = (0x00), /* No Clock Source (Stopped) */
    TC3_CS3_VAL_0x01_gc = (0x01), /* Running, No Prescaling */
    TC3_CS3_VAL_0x02_gc = (0x02), /* Running, CLK/8 */
    TC3_CS3_VAL_0x03_gc = (0x03), /* Running, CLK/64 */
    TC3_CS3_VAL_0x04_gc = (0x04), /* Running, CLK/256 */
    TC3_CS3_VAL_0x05_gc = (0x05), /* Running, CLK/1024 */
    TC3_CS3_VAL_0x06_gc = (0x06), /* Running, ExtClk Tx Falling Edge */
    TC3_CS3_VAL_0x07_gc = (0x07), /* Running, ExtClk Tx Rising Edge */
} TC3_CS3_t;

/* Force Output Compare 3A */
typedef enum TC3_FOC3A_enum
{
    TC3_FOC3A_CLEAR_gc = (0x00), /* Force Output Compare 3A - CLEAR */
    TC3_FOC3A_SET_gc   = (0x80), /* Force Output Compare 3A - SET */
} TC3_FOC3A_t;

/* Force Output Compare 3B */
typedef enum TC3_FOC3B_enum
{
    TC3_FOC3B_CLEAR_gc = (0x00), /* Force Output Compare 3B - CLEAR */
    TC3_FOC3B_SET_gc   = (0x40), /* Force Output Compare 3B - SET */
} TC3_FOC3B_t;

/* Force Output Compare 3C */
typedef enum TC3_FOC3C_enum
{
    TC3_FOC3C_CLEAR_gc = (0x00), /* Force Output Compare 3C - CLEAR */
    TC3_FOC3C_SET_gc   = (0x20), /* Force Output Compare 3C - SET */
} TC3_FOC3C_t;

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

/* Input Capture Flag 3 */
typedef enum TC3_ICF3_enum
{
    TC3_ICF3_CLEAR_gc = (0x00), /* Input Capture Flag 3 - CLEAR */
    TC3_ICF3_SET_gc   = (0x20), /* Input Capture Flag 3 - SET */
} TC3_ICF3_t;

/* Output Compare Flag 3C */
typedef enum TC3_OCF3C_enum
{
    TC3_OCF3C_CLEAR_gc = (0x00), /* Output Compare Flag 3C - CLEAR */
    TC3_OCF3C_SET_gc   = (0x08), /* Output Compare Flag 3C - SET */
} TC3_OCF3C_t;

/* Output Compare Flag 3B */
typedef enum TC3_OCF3B_enum
{
    TC3_OCF3B_CLEAR_gc = (0x00), /* Output Compare Flag 3B - CLEAR */
    TC3_OCF3B_SET_gc   = (0x04), /* Output Compare Flag 3B - SET */
} TC3_OCF3B_t;

/* Output Compare Flag 3A */
typedef enum TC3_OCF3A_enum
{
    TC3_OCF3A_CLEAR_gc = (0x00), /* Output Compare Flag 3A - CLEAR */
    TC3_OCF3A_SET_gc   = (0x02), /* Output Compare Flag 3A - SET */
} TC3_OCF3A_t;

/* Timer/Counter3 Overflow Flag */
typedef enum TC3_TOV3_enum
{
    TC3_TOV3_CLEAR_gc = (0x00), /* Timer/Counter3 Overflow Flag - CLEAR */
    TC3_TOV3_SET_gc   = (0x01), /* Timer/Counter3 Overflow Flag - SET */
} TC3_TOV3_t;

/* Compare Output Mode 1A, bits */
#define TC1_TCCR1A_COM1A_gc(x) ((x<<6) & 0xC0)

/* Compare Output Mode 1B, bits */
#define TC1_TCCR1A_COM1B_gc(x) ((x<<4) & 0x30)

/* Compare Output Mode 1C, bits */
#define TC1_TCCR1A_COM1C_gc(x) ((x<<2) & 0x0C)

/* Waveform Generation Mode */
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

/* Waveform Generation Mode */
#define TC1_TCCR1B_WGM1_gc(x) ((x<<3) & 0x18)

/* Prescaler source of Timer/Counter 1 */
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

/* Force Output Compare 1A */
typedef enum TC1_FOC1A_enum
{
    TC1_FOC1A_CLEAR_gc = (0x00), /* Force Output Compare 1A - CLEAR */
    TC1_FOC1A_SET_gc   = (0x80), /* Force Output Compare 1A - SET */
} TC1_FOC1A_t;

/* Force Output Compare 1B */
typedef enum TC1_FOC1B_enum
{
    TC1_FOC1B_CLEAR_gc = (0x00), /* Force Output Compare 1B - CLEAR */
    TC1_FOC1B_SET_gc   = (0x40), /* Force Output Compare 1B - SET */
} TC1_FOC1B_t;

/* Force Output Compare 1C */
typedef enum TC1_FOC1C_enum
{
    TC1_FOC1C_CLEAR_gc = (0x00), /* Force Output Compare 1C - CLEAR */
    TC1_FOC1C_SET_gc   = (0x20), /* Force Output Compare 1C - SET */
} TC1_FOC1C_t;

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

/* Input Capture Flag 1 */
typedef enum TC1_ICF1_enum
{
    TC1_ICF1_CLEAR_gc = (0x00), /* Input Capture Flag 1 - CLEAR */
    TC1_ICF1_SET_gc   = (0x20), /* Input Capture Flag 1 - SET */
} TC1_ICF1_t;

/* Output Compare Flag 1C */
typedef enum TC1_OCF1C_enum
{
    TC1_OCF1C_CLEAR_gc = (0x00), /* Output Compare Flag 1C - CLEAR */
    TC1_OCF1C_SET_gc   = (0x08), /* Output Compare Flag 1C - SET */
} TC1_OCF1C_t;

/* Output Compare Flag 1B */
typedef enum TC1_OCF1B_enum
{
    TC1_OCF1B_CLEAR_gc = (0x00), /* Output Compare Flag 1B - CLEAR */
    TC1_OCF1B_SET_gc   = (0x04), /* Output Compare Flag 1B - SET */
} TC1_OCF1B_t;

/* Output Compare Flag 1A */
typedef enum TC1_OCF1A_enum
{
    TC1_OCF1A_CLEAR_gc = (0x00), /* Output Compare Flag 1A - CLEAR */
    TC1_OCF1A_SET_gc   = (0x02), /* Output Compare Flag 1A - SET */
} TC1_OCF1A_t;

/* Timer/Counter1 Overflow Flag */
typedef enum TC1_TOV1_enum
{
    TC1_TOV1_CLEAR_gc = (0x00), /* Timer/Counter1 Overflow Flag - CLEAR */
    TC1_TOV1_SET_gc   = (0x01), /* Timer/Counter1 Overflow Flag - SET */
} TC1_TOV1_t;

/*
--------------------------------------------------------------------------------
JTAG - JTAG Interface
--------------------------------------------------------------------------------
*/

typedef struct JTAG_struct
{
    register8_t rsv_0x00[81]; /* RESERVED REGISTER BLOCK */
    register8_t OCDR;         /* On-Chip Debug Related Register in I/O Memory */
    register8_t rsv_0x52[2];  /* RESERVED REGISTER BLOCK */
    register8_t MCUSR;        /* MCU Status Register */
    register8_t MCUCR;        /* MCU Control Register */
} JTAG_t;


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
} EXINT_t;


/* External Interrupt Sense Control Bit */
typedef enum EXINT_ISC3_enum
{
    EXINT_ISC3_VAL_0x00_gc = (0x00<<6), /* Low Level of INTX */
    EXINT_ISC3_VAL_0x01_gc = (0x01<<6), /* Any Logical Change of INTX */
    EXINT_ISC3_VAL_0x02_gc = (0x02<<6), /* Falling Edge of INTX */
    EXINT_ISC3_VAL_0x03_gc = (0x03<<6), /* Rising Edge of INTX */
} EXINT_ISC3_t;

/* External Interrupt Sense Control Bit */
typedef enum EXINT_ISC2_enum
{
    EXINT_ISC2_VAL_0x00_gc = (0x00<<4), /* Low Level of INTX */
    EXINT_ISC2_VAL_0x01_gc = (0x01<<4), /* Any Logical Change of INTX */
    EXINT_ISC2_VAL_0x02_gc = (0x02<<4), /* Falling Edge of INTX */
    EXINT_ISC2_VAL_0x03_gc = (0x03<<4), /* Rising Edge of INTX */
} EXINT_ISC2_t;

/* External Interrupt Sense Control Bit */
typedef enum EXINT_ISC1_enum
{
    EXINT_ISC1_VAL_0x00_gc = (0x00<<2), /* Low Level of INTX */
    EXINT_ISC1_VAL_0x01_gc = (0x01<<2), /* Any Logical Change of INTX */
    EXINT_ISC1_VAL_0x02_gc = (0x02<<2), /* Falling Edge of INTX */
    EXINT_ISC1_VAL_0x03_gc = (0x03<<2), /* Rising Edge of INTX */
} EXINT_ISC1_t;

/* External Interrupt Sense Control Bit */
typedef enum EXINT_ISC0_enum
{
    EXINT_ISC0_VAL_0x00_gc = (0x00), /* Low Level of INTX */
    EXINT_ISC0_VAL_0x01_gc = (0x01), /* Any Logical Change of INTX */
    EXINT_ISC0_VAL_0x02_gc = (0x02), /* Falling Edge of INTX */
    EXINT_ISC0_VAL_0x03_gc = (0x03), /* Rising Edge of INTX */
} EXINT_ISC0_t;

/* External Interrupt 7-4 Sense Control Bit */
typedef enum EXINT_ISC7_enum
{
    EXINT_ISC7_VAL_0x00_gc = (0x00<<6), /* Low Level of INTX */
    EXINT_ISC7_VAL_0x01_gc = (0x01<<6), /* Any Logical Change of INTX */
    EXINT_ISC7_VAL_0x02_gc = (0x02<<6), /* Falling Edge of INTX */
    EXINT_ISC7_VAL_0x03_gc = (0x03<<6), /* Rising Edge of INTX */
} EXINT_ISC7_t;

/* External Interrupt 7-4 Sense Control Bit */
typedef enum EXINT_ISC6_enum
{
    EXINT_ISC6_VAL_0x00_gc = (0x00<<4), /* Low Level of INTX */
    EXINT_ISC6_VAL_0x01_gc = (0x01<<4), /* Any Logical Change of INTX */
    EXINT_ISC6_VAL_0x02_gc = (0x02<<4), /* Falling Edge of INTX */
    EXINT_ISC6_VAL_0x03_gc = (0x03<<4), /* Rising Edge of INTX */
} EXINT_ISC6_t;

/* External Interrupt 7-4 Sense Control Bit */
typedef enum EXINT_ISC5_enum
{
    EXINT_ISC5_VAL_0x00_gc = (0x00<<2), /* Low Level of INTX */
    EXINT_ISC5_VAL_0x01_gc = (0x01<<2), /* Any Logical Change of INTX */
    EXINT_ISC5_VAL_0x02_gc = (0x02<<2), /* Falling Edge of INTX */
    EXINT_ISC5_VAL_0x03_gc = (0x03<<2), /* Rising Edge of INTX */
} EXINT_ISC5_t;

/* External Interrupt 7-4 Sense Control Bit */
typedef enum EXINT_ISC4_enum
{
    EXINT_ISC4_VAL_0x00_gc = (0x00), /* Low Level of INTX */
    EXINT_ISC4_VAL_0x01_gc = (0x01), /* Any Logical Change of INTX */
    EXINT_ISC4_VAL_0x02_gc = (0x02), /* Falling Edge of INTX */
    EXINT_ISC4_VAL_0x03_gc = (0x03), /* Rising Edge of INTX */
} EXINT_ISC4_t;

/* Pin Change Interrupt Flag 0 */
typedef enum EXINT_PCIF0_enum
{
    EXINT_PCIF0_CLEAR_gc = (0x00), /* Pin Change Interrupt Flag 0 - CLEAR */
    EXINT_PCIF0_SET_gc   = (0x01), /* Pin Change Interrupt Flag 0 - SET */
} EXINT_PCIF0_t;

/* Pin Change Interrupt Enable 0 */
typedef enum EXINT_PCIE0_enum
{
    EXINT_PCIE0_CLEAR_gc = (0x00), /* Pin Change Interrupt Enable 0 - CLEAR */
    EXINT_PCIE0_SET_gc   = (0x01), /* Pin Change Interrupt Enable 0 - SET */
} EXINT_PCIE0_t;

/*
--------------------------------------------------------------------------------
ADC - Analog-to-Digital Converter
--------------------------------------------------------------------------------
*/

typedef struct ADC_struct
{
    register8_t rsv_0x00[120]; /* RESERVED REGISTER BLOCK */
    _REGISTER16 (ADC);         /* ADC Data Register  Bytes */
    register8_t rsv_0x79;      /* RESERVED REGISTER */
    register8_t ADCSRA;        /* The ADC Control and Status register */
    register8_t ADCSRB;        /* ADC Control and Status Register B */
    register8_t ADMUX;         /* The ADC multiplexer Selection Register */
    register8_t rsv_0x7D;      /* RESERVED REGISTER */
    register8_t DIDR0;         /* Digital Input Disable Register 1 */
} ADC_t;


/* Reference Selection Bits */
typedef enum ADC_REFS_enum
{
    ADC_REFS_VAL_0x00_gc = (0x00<<6), /* AREF, Internal Vref turned off */
    ADC_REFS_VAL_0x01_gc = (0x01<<6), /* AVCC with external capacitor at AREF pin */
    ADC_REFS_VAL_0x02_gc = (0x02<<6), /* Reserved */
    ADC_REFS_VAL_0x03_gc = (0x03<<6), /* Internal 2.56V Voltage Reference with external capacitor at AREF pin */
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

/* ADC High Speed Mode */
typedef enum ADC_ADHSM_enum
{
    ADC_ADHSM_CLEAR_gc = (0x00), /* ADC High Speed Mode - CLEAR */
    ADC_ADHSM_SET_gc   = (0x80), /* ADC High Speed Mode - SET */
} ADC_ADHSM_t;

/* ADC Auto Trigger Sources */
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

/* ADC7 Digital input Disable */
typedef enum ADC_ADC7D_enum
{
    ADC_ADC7D_CLEAR_gc = (0x00), /* ADC7 Digital input Disable - CLEAR */
    ADC_ADC7D_SET_gc   = (0x80), /* ADC7 Digital input Disable - SET */
} ADC_ADC7D_t;

/* ADC6 Digital input Disable */
typedef enum ADC_ADC6D_enum
{
    ADC_ADC6D_CLEAR_gc = (0x00), /* ADC6 Digital input Disable - CLEAR */
    ADC_ADC6D_SET_gc   = (0x40), /* ADC6 Digital input Disable - SET */
} ADC_ADC6D_t;

/* ADC5 Digital input Disable */
typedef enum ADC_ADC5D_enum
{
    ADC_ADC5D_CLEAR_gc = (0x00), /* ADC5 Digital input Disable - CLEAR */
    ADC_ADC5D_SET_gc   = (0x20), /* ADC5 Digital input Disable - SET */
} ADC_ADC5D_t;

/* ADC4 Digital input Disable */
typedef enum ADC_ADC4D_enum
{
    ADC_ADC4D_CLEAR_gc = (0x00), /* ADC4 Digital input Disable - CLEAR */
    ADC_ADC4D_SET_gc   = (0x10), /* ADC4 Digital input Disable - SET */
} ADC_ADC4D_t;

/* ADC3 Digital input Disable */
typedef enum ADC_ADC3D_enum
{
    ADC_ADC3D_CLEAR_gc = (0x00), /* ADC3 Digital input Disable - CLEAR */
    ADC_ADC3D_SET_gc   = (0x08), /* ADC3 Digital input Disable - SET */
} ADC_ADC3D_t;

/* ADC2 Digital input Disable */
typedef enum ADC_ADC2D_enum
{
    ADC_ADC2D_CLEAR_gc = (0x00), /* ADC2 Digital input Disable - CLEAR */
    ADC_ADC2D_SET_gc   = (0x04), /* ADC2 Digital input Disable - SET */
} ADC_ADC2D_t;

/* ADC1 Digital input Disable */
typedef enum ADC_ADC1D_enum
{
    ADC_ADC1D_CLEAR_gc = (0x00), /* ADC1 Digital input Disable - CLEAR */
    ADC_ADC1D_SET_gc   = (0x02), /* ADC1 Digital input Disable - SET */
} ADC_ADC1D_t;

/* ADC0 Digital input Disable */
typedef enum ADC_ADC0D_enum
{
    ADC_ADC0D_CLEAR_gc = (0x00), /* ADC0 Digital input Disable - CLEAR */
    ADC_ADC0D_SET_gc   = (0x01), /* ADC0 Digital input Disable - SET */
} ADC_ADC0D_t;

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
    register8_t DIDR1;       
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

/* Analog Comparator Interrupt Mode Select bits */
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
PLL - Phase Locked Loop
--------------------------------------------------------------------------------
*/

typedef struct PLL_struct
{
    register8_t rsv_0x00[73]; /* RESERVED REGISTER BLOCK */
    register8_t PLLCSR;       /* PLL Status and Control register */
} PLL_t;


/* PLL prescaler Bits */
typedef enum PLL_PLLP_enum
{
    PLL_PLLP_VAL_0x03_gc = (0x03<<2), /* Clock/4 */
    PLL_PLLP_VAL_0x05_gc = (0x05<<2), /* Clock/8 */
} PLL_PLLP_t;

/* PLL Enable Bit */
typedef enum PLL_PLLE_enum
{
    PLL_PLLE_CLEAR_gc = (0x00), /* PLL Enable Bit - CLEAR */
    PLL_PLLE_SET_gc   = (0x02), /* PLL Enable Bit - SET */
} PLL_PLLE_t;

/* PLL Lock Status Bit */
typedef enum PLL_PLOCK_enum
{
    PLL_PLOCK_CLEAR_gc = (0x00), /* PLL Lock Status Bit - CLEAR */
    PLL_PLOCK_SET_gc   = (0x01), /* PLL Lock Status Bit - SET */
} PLL_PLOCK_t;
/*
================================================================================
IO Module Instances. Mapped to memory.
================================================================================
*/

#define WDT        (*(WDT_t *) 0x0000)        /* Watchdog Timer */
#define PORTA      (*(PORTA_t *) 0x0000)      /* I/O Port */
#define PORTB      (*(PORTB_t *) 0x0000)      /* I/O Port */
#define PORTC      (*(PORTC_t *) 0x0000)      /* I/O Port */
#define PORTD      (*(PORTD_t *) 0x0000)      /* I/O Port */
#define PORTE      (*(PORTE_t *) 0x0000)      /* I/O Port */
#define PORTF      (*(PORTF_t *) 0x0000)      /* I/O Port */
#define CPU        (*(CPU_t *) 0x0000)        /* CPU Registers */
#define TWI        (*(TWI_t *) 0x0000)        /* Two Wire Serial Interface */
#define SPI        (*(SPI_t *) 0x0000)        /* Serial Peripheral Interface */
#define USART1     (*(USART1_t *) 0x0000)     /* USART */
#define USB_DEVICE (*(USB_DEVICE_t *) 0x0000) /* USB Device Registers */
#define USB_GLOBAL (*(USB_GLOBAL_t *) 0x0000) /* USB Controller */
#define USB_HOST   (*(USB_HOST_t *) 0x0000)   /* USB Host Registers */
#define BOOT_LOAD  (*(BOOT_LOAD_t *) 0x0000)  /* Bootloader */
#define EEPROM     (*(EEPROM_t *) 0x0000)     /* EEPROM */
#define TC0        (*(TC0_t *) 0x0000)        /* Timer/Counter, 8-bit */
#define TC2        (*(TC2_t *) 0x0000)        /* Timer/Counter, 8-bit Async */
#define TC3        (*(TC3_t *) 0x0000)        /* Timer/Counter, 16-bit */
#define TC1        (*(TC1_t *) 0x0000)        /* Timer/Counter, 16-bit */
#define JTAG       (*(JTAG_t *) 0x0000)       /* JTAG Interface */
#define EXINT      (*(EXINT_t *) 0x0000)      /* External Interrupts */
#define ADC        (*(ADC_t *) 0x0000)        /* Analog-to-Digital Converter */
#define AC         (*(AC_t *) 0x0000)         /* Analog Comparator */
#define PLL        (*(PLL_t *) 0x0000)        /* Phase Locked Loop */
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
#define FUSE_BODLEVEL_DISABLED_gc (0x07) /* Brown-out detection disabled; [BODLEVEL=111] */
#define FUSE_BODLEVEL_2V0_gc      (0x06) /* Brown-out detection at VCC=2.0 V */
#define FUSE_BODLEVEL_2V2_gc      (0x05) /* Brown-out detection at VCC=2.2 V */
#define FUSE_BODLEVEL_2V4_gc      (0x04) /* Brown-out detection at VCC=2.4 V */
#define FUSE_BODLEVEL_2V6_gc      (0x03) /* Brown-out detection at VCC=2.6 V */
#define FUSE_BODLEVEL_3V4_gc      (0x02) /* Brown-out detection at VCC=3.4 V */
#define FUSE_BODLEVEL_3V5_gc      (0x01) /* Brown-out detection at VCC=3.5 V */
#define FUSE_BODLEVEL_4V3_gc      (0x00) /* Brown-out detection at VCC=4.3 V */


/* Hardware Boot Enable */
#define FUSE_HWBE_CLEAR_gc (0x00) /* Hardware Boot Enable - CLEAR */
#define FUSE_HWBE_SET_gc   (0x08) /* Hardware Boot Enable - SET */


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
#define FUSE_BOOTSZ_512W_7F00_gc  (0x03<<1) /* Boot Flash size=512 words start address=$7F00 */
#define FUSE_BOOTSZ_1024W_7E00_gc (0x02<<1) /* Boot Flash size=1024 words start address=$7E00 */
#define FUSE_BOOTSZ_2408W_7C00_gc (0x01<<1) /* Boot Flash size=2408 words start address=$7C00 */
#define FUSE_BOOTSZ_4096W_7800_gc (0x00<<1) /* Boot Flash size=4096 words start address=$7800 */


/* Boot Reset vector Enabled */
#define FUSE_BOOTRST_CLEAR_gc (0x00) /* Boot Reset vector Enabled - CLEAR */
#define FUSE_BOOTRST_SET_gc   (0x01) /* Boot Reset vector Enabled - SET */


/* Divide clock by 8 internally */
#define FUSE_CKDIV8_CLEAR_gc (0x00) /* Divide clock by 8 internally - CLEAR */
#define FUSE_CKDIV8_SET_gc   (0x80) /* Divide clock by 8 internally - SET */


/* Clock output on PORTC7 */
#define FUSE_CKOUT_CLEAR_gc (0x00) /* Clock output on PORTC7 - CLEAR */
#define FUSE_CKOUT_SET_gc   (0x40) /* Clock output on PORTC7 - SET */


/* Select Clock Source */
#define FUSE_SUT_CKSEL_EXTCLK_6CK_0MS_gc                 (0x00) /* Ext. Clock; Start-up time: 6 CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTCLK_6CK_4MS1_gc                (0x10) /* Ext. Clock; Start-up time: 6 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTCLK_6CK_65MS_gc                (0x20) /* Ext. Clock; Start-up time: 6 CK + 65 ms */
#define FUSE_SUT_CKSEL_INTRCOSC_6CK_0MS_gc               (0x02) /* Int. RC Osc.; Start-up time: 6 CK + 0 ms */
#define FUSE_SUT_CKSEL_INTRCOSC_6CK_4MS1_gc              (0x12) /* Int. RC Osc.; Start-up time: 6 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_INTRCOSC_6CK_65MS_gc              (0x22) /* Int. RC Osc.; Start-up time: 6 CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTLOFXTAL_32KCK_0MS_INTCAP_gc    (0x07) /* Ext. Low-Freq. Crystal; Start-up time: 32K CK + 0 ms; Int. Cap. */
#define FUSE_SUT_CKSEL_EXTLOFXTAL_32KCK_4MS1_INTCAP_gc   (0x17) /* Ext. Low-Freq. Crystal; Start-up time: 32K CK + 4.1 ms; Int. Cap. */
#define FUSE_SUT_CKSEL_EXTLOFXTAL_32KCK_65MS_INTCAP_gc   (0x27) /* Ext. Low-Freq. Crystal; Start-up time: 32K CK + 65 ms; Int. Cap. */
#define FUSE_SUT_CKSEL_EXTLOFXTAL_1KCK_0MS_INTCAP_gc     (0x06) /* Ext. Low-Freq. Crystal; Start-up time: 1K CK + 0 ms; Int. Cap. */
#define FUSE_SUT_CKSEL_EXTLOFXTAL_1KCK_4MS1_INTCAP_gc    (0x16) /* Ext. Low-Freq. Crystal; Start-up time: 1K CK + 4.1 ms; Int. Cap. */
#define FUSE_SUT_CKSEL_EXTLOFXTAL_1KCK_65MS_INTCAP_gc    (0x26) /* Ext. Low-Freq. Crystal; Start-up time: 1K CK + 65 ms; Int. Cap. */
#define FUSE_SUT_CKSEL_EXTLOFXTAL_32KCK_0MS_gc           (0x05) /* Ext. Low-Freq. Crystal; Start-up time: 32K CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTLOFXTAL_32KCK_4MS1_gc          (0x15) /* Ext. Low-Freq. Crystal; Start-up time: 32K CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTLOFXTAL_32KCK_65MS_gc          (0x25) /* Ext. Low-Freq. Crystal; Start-up time: 32K CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTLOFXTAL_1KCK_0MS_gc            (0x04) /* Ext. Low-Freq. Crystal; Start-up time: 1K CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTLOFXTAL_1KCK_4MS1_gc           (0x14) /* Ext. Low-Freq. Crystal; Start-up time: 1K CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTLOFXTAL_1KCK_65MS_gc           (0x24) /* Ext. Low-Freq. Crystal; Start-up time: 1K CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_258CK_4MS1_gc (0x08) /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time: 258 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_258CK_65MS_gc (0x18) /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time: 258 CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_1KCK_0MS_gc   (0x28) /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time: 1K CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_1KCK_4MS1_gc  (0x38) /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time: 1K CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_1KCK_65MS_gc  (0x09) /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time: 1K CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_16KCK_0MS_gc  (0x19) /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time: 16K CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_16KCK_4MS1_gc (0x29) /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time: 16K CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_16KCK_65MS_gc (0x39) /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time: 16K CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_258CK_4MS1_gc  (0x0A) /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time: 258 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_258CK_65MS_gc  (0x1A) /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time: 258 CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_1KCK_0MS_gc    (0x2A) /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time: 1K CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_1KCK_4MS1_gc   (0x3A) /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time: 1K CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_1KCK_65MS_gc   (0x0B) /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time: 1K CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_16KCK_0MS_gc   (0x1B) /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time: 16K CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_16KCK_4MS1_gc  (0x2B) /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time: 16K CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_16KCK_65MS_gc  (0x3B) /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time: 16K CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_258CK_4MS1_gc   (0x0C) /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time: 258 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_258CK_65MS_gc   (0x1C) /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time: 258 CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_1KCK_0MS_gc     (0x2C) /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time: 1K CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_1KCK_4MS1_gc    (0x3C) /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time: 1K CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_1KCK_65MS_gc    (0x0D) /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time: 1K CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_16KCK_0MS_gc    (0x1D) /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time: 16K CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_16KCK_4MS1_gc   (0x2D) /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time: 16K CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_16KCK_65MS_gc   (0x3D) /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time: 16K CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_258CK_4MS1_gc     (0x0E) /* Ext. Crystal Osc. 8.0-    MHz; Start-up time: 258 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_258CK_65MS_gc     (0x1E) /* Ext. Crystal Osc. 8.0-    MHz; Start-up time: 258 CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_1KCK_0MS_gc       (0x2E) /* Ext. Crystal Osc. 8.0-    MHz; Start-up time: 1K CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_1KCK_4MS1_gc      (0x3E) /* Ext. Crystal Osc. 8.0-    MHz; Start-up time: 1K CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_1KCK_65MS_gc      (0x0F) /* Ext. Crystal Osc. 8.0-    MHz; Start-up time: 1K CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_16KCK_0MS_gc      (0x1F) /* Ext. Crystal Osc. 8.0-    MHz; Start-up time: 16K CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_16KCK_4MS1_gc     (0x2F) /* Ext. Crystal Osc. 8.0-    MHz; Start-up time: 16K CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_16KCK_65MS_gc     (0x3F) /* Ext. Crystal Osc. 8.0-    MHz; Start-up time: 16K CK + 65 ms */


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


/* Pull-up disable */
#define CPU_PUD_CLEAR_gc (0x00) /* Pull-up disable - CLEAR */
#define CPU_PUD_SET_gc   (0x10) /* Pull-up disable - SET */


/* Interrupt Vector Select */
#define CPU_IVSEL_CLEAR_gc (0x00) /* Interrupt Vector Select - CLEAR */
#define CPU_IVSEL_SET_gc   (0x02) /* Interrupt Vector Select - SET */


/* Interrupt Vector Change Enable */
#define CPU_IVCE_CLEAR_gc (0x00) /* Interrupt Vector Change Enable - CLEAR */
#define CPU_IVCE_SET_gc   (0x01) /* Interrupt Vector Change Enable - SET */


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


/* Power-on reset flag */
#define CPU_PORF_CLEAR_gc (0x00) /* Power-on reset flag - CLEAR */
#define CPU_PORF_SET_gc   (0x01) /* Power-on reset flag - SET */


/* External SRAM Enable */
#define CPU_SRE_CLEAR_gc (0x00) /* External SRAM Enable - CLEAR */
#define CPU_SRE_SET_gc   (0x80) /* External SRAM Enable - SET */


/* Wait state page limit */
#define CPU_SRL_VAL_0x00_gc (0x00<<4) /* LS = N/A, US = 0x1100 - 0xFFFF */
#define CPU_SRL_VAL_0x01_gc (0x01<<4) /* LS = 0x2100 - 0x1FFF, US = 0x2000 - 0xFFFF */
#define CPU_SRL_VAL_0x02_gc (0x02<<4) /* LS = 0x2100 - 0x3FFF, US = 0x4000 - 0xFFFF */
#define CPU_SRL_VAL_0x03_gc (0x03<<4) /* LS = 0x2100 - 0x5FFF, US = 0x6000 - 0xFFFF */
#define CPU_SRL_VAL_0x04_gc (0x04<<4) /* LS = 0x2100 - 0x7FFF, US = 0x8000 - 0xFFFF */
#define CPU_SRL_VAL_0x05_gc (0x05<<4) /* LS = 0x2100 - 0x9FFF, US = 0xA000 - 0xFFFF */
#define CPU_SRL_VAL_0x06_gc (0x06<<4) /* LS = 0x2100 - 0xBFFF, US = 0xC000 - 0xFFFF */
#define CPU_SRL_VAL_0x07_gc (0x07<<4) /* LS = 0x2100 - 0xDFFF, US = 0xE000 - 0xFFFF */


/* Wait state select bit upper page */
#define CPU_SRW1_VAL_0x00_gc (0x00<<2) /* No wait-states */
#define CPU_SRW1_VAL_0x01_gc (0x01<<2) /* Wait one cycle during read/write strobe */
#define CPU_SRW1_VAL_0x02_gc (0x02<<2) /* Wait two cycles during read/write strobe */
#define CPU_SRW1_VAL_0x03_gc (0x03<<2) /* Wait two cycles during read/write and wait one cycle before driving out new address */


/* Wait state select bit lower page */
#define CPU_SRW0_VAL_0x00_gc (0x00) /* No wait-states */
#define CPU_SRW0_VAL_0x01_gc (0x01) /* Wait one cycle during read/write strobe */
#define CPU_SRW0_VAL_0x02_gc (0x02) /* Wait two cycles during read/write strobe */
#define CPU_SRW0_VAL_0x03_gc (0x03) /* Wait two cycles during read/write and wait one cycle before driving out new address */


/* External Memory Bus Keeper Enable */
#define CPU_XMBK_CLEAR_gc (0x00) /* External Memory Bus Keeper Enable - CLEAR */
#define CPU_XMBK_SET_gc   (0x80) /* External Memory Bus Keeper Enable - SET */


/* External Memory High Mask */
#define CPU_XMM_VAL_0x00_gc (0x00) /* None */
#define CPU_XMM_VAL_0x01_gc (0x01) /* Px7 */
#define CPU_XMM_VAL_0x02_gc (0x02) /* Px7-Px6 */
#define CPU_XMM_VAL_0x03_gc (0x03) /* Px7-Px5 */
#define CPU_XMM_VAL_0x04_gc (0x04) /* Px7-Px4 */
#define CPU_XMM_VAL_0x05_gc (0x05) /* Px7-Px3 */
#define CPU_XMM_VAL_0x06_gc (0x06) /* Px7-Px2 */
#define CPU_XMM_VAL_0x07_gc (0x07) /* Full Port X */


/* -CLKPCE */
#define CPU_CLKPCE_CLEAR_gc (0x00) /* -CLKPCE - CLEAR */
#define CPU_CLKPCE_SET_gc   (0x80) /* -CLKPCE - SET */


/* -CLKPS */
#define CPU_CLKPS_VAL_0x00_gc (0x00) /* 1 */
#define CPU_CLKPS_VAL_0x01_gc (0x01) /* 2 */
#define CPU_CLKPS_VAL_0x02_gc (0x02) /* 4 */
#define CPU_CLKPS_VAL_0x03_gc (0x03) /* 8 */
#define CPU_CLKPS_VAL_0x04_gc (0x04) /* 16 */
#define CPU_CLKPS_VAL_0x05_gc (0x05) /* 32 */
#define CPU_CLKPS_VAL_0x06_gc (0x06) /* 64 */
#define CPU_CLKPS_VAL_0x07_gc (0x07) /* 128 */
#define CPU_CLKPS_VAL_0x08_gc (0x08) /* 256 */


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


/* General Purpose IO Register 0 bit 7 */
#define CPU_GPIOR07_CLEAR_gc (0x00) /* General Purpose IO Register 0 bit 7 - CLEAR */
#define CPU_GPIOR07_SET_gc   (0x80) /* General Purpose IO Register 0 bit 7 - SET */


/* General Purpose IO Register 0 bit 6 */
#define CPU_GPIOR06_CLEAR_gc (0x00) /* General Purpose IO Register 0 bit 6 - CLEAR */
#define CPU_GPIOR06_SET_gc   (0x40) /* General Purpose IO Register 0 bit 6 - SET */


/* General Purpose IO Register 0 bit 5 */
#define CPU_GPIOR05_CLEAR_gc (0x00) /* General Purpose IO Register 0 bit 5 - CLEAR */
#define CPU_GPIOR05_SET_gc   (0x20) /* General Purpose IO Register 0 bit 5 - SET */


/* General Purpose IO Register 0 bit 4 */
#define CPU_GPIOR04_CLEAR_gc (0x00) /* General Purpose IO Register 0 bit 4 - CLEAR */
#define CPU_GPIOR04_SET_gc   (0x10) /* General Purpose IO Register 0 bit 4 - SET */


/* General Purpose IO Register 0 bit 3 */
#define CPU_GPIOR03_CLEAR_gc (0x00) /* General Purpose IO Register 0 bit 3 - CLEAR */
#define CPU_GPIOR03_SET_gc   (0x08) /* General Purpose IO Register 0 bit 3 - SET */


/* General Purpose IO Register 0 bit 2 */
#define CPU_GPIOR02_CLEAR_gc (0x00) /* General Purpose IO Register 0 bit 2 - CLEAR */
#define CPU_GPIOR02_SET_gc   (0x04) /* General Purpose IO Register 0 bit 2 - SET */


/* General Purpose IO Register 0 bit 1 */
#define CPU_GPIOR01_CLEAR_gc (0x00) /* General Purpose IO Register 0 bit 1 - CLEAR */
#define CPU_GPIOR01_SET_gc   (0x02) /* General Purpose IO Register 0 bit 1 - SET */


/* General Purpose IO Register 0 bit 0 */
#define CPU_GPIOR00_CLEAR_gc (0x00) /* General Purpose IO Register 0 bit 0 - CLEAR */
#define CPU_GPIOR00_SET_gc   (0x01) /* General Purpose IO Register 0 bit 0 - SET */


/* Power Reduction USB */
#define CPU_PRUSB_CLEAR_gc (0x00) /* Power Reduction USB - CLEAR */
#define CPU_PRUSB_SET_gc   (0x80) /* Power Reduction USB - SET */


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


/* Power Reduction Timer/Counter1 */
#define CPU_PRTIM1_CLEAR_gc (0x00) /* Power Reduction Timer/Counter1 - CLEAR */
#define CPU_PRTIM1_SET_gc   (0x08) /* Power Reduction Timer/Counter1 - SET */


/* Power Reduction Serial Peripheral Interface */
#define CPU_PRSPI_CLEAR_gc (0x00) /* Power Reduction Serial Peripheral Interface - CLEAR */
#define CPU_PRSPI_SET_gc   (0x04) /* Power Reduction Serial Peripheral Interface - SET */


/* Power Reduction ADC */
#define CPU_PRADC_CLEAR_gc (0x00) /* Power Reduction ADC - CLEAR */
#define CPU_PRADC_SET_gc   (0x01) /* Power Reduction ADC - SET */


/*
--------------------------------------------------------------------------------
TWI - Two Wire Serial Interface
--------------------------------------------------------------------------------
*/


/* TWI Interrupt Flag */
#define TWI_TWINT_CLEAR_gc (0x00) /* TWI Interrupt Flag - CLEAR */
#define TWI_TWINT_SET_gc   (0x80) /* TWI Interrupt Flag - SET */


/* TWI Enable Acknowledge Bit */
#define TWI_TWEA_CLEAR_gc (0x00) /* TWI Enable Acknowledge Bit - CLEAR */
#define TWI_TWEA_SET_gc   (0x40) /* TWI Enable Acknowledge Bit - SET */


/* TWI Start Condition Bit */
#define TWI_TWSTA_CLEAR_gc (0x00) /* TWI Start Condition Bit - CLEAR */
#define TWI_TWSTA_SET_gc   (0x20) /* TWI Start Condition Bit - SET */


/* TWI Stop Condition Bit */
#define TWI_TWSTO_CLEAR_gc (0x00) /* TWI Stop Condition Bit - CLEAR */
#define TWI_TWSTO_SET_gc   (0x10) /* TWI Stop Condition Bit - SET */


/* TWI Write Collition Flag */
#define TWI_TWWC_CLEAR_gc (0x00) /* TWI Write Collition Flag - CLEAR */
#define TWI_TWWC_SET_gc   (0x08) /* TWI Write Collition Flag - SET */


/* TWI Enable Bit */
#define TWI_TWEN_CLEAR_gc (0x00) /* TWI Enable Bit - CLEAR */
#define TWI_TWEN_SET_gc   (0x04) /* TWI Enable Bit - SET */


/* TWI Interrupt Enable */
#define TWI_TWIE_CLEAR_gc (0x00) /* TWI Interrupt Enable - CLEAR */
#define TWI_TWIE_SET_gc   (0x01) /* TWI Interrupt Enable - SET */


/* TWI Status */
#define TWI_TWSR_TWS_gc(x) ((x<<3) & 0xF8)

/* TWI Prescaler */
#define TWI_TWPS_VAL_0x00_gc (0x00) /* 1 */
#define TWI_TWPS_VAL_0x01_gc (0x01) /* 4 */
#define TWI_TWPS_VAL_0x02_gc (0x02) /* 16 */
#define TWI_TWPS_VAL_0x03_gc (0x03) /* 64 */


/* TWI (Slave) Address register Bits */
#define TWI_TWAR_TWA_gc(x) ((x<<1) & 0xFE)

/* TWI General Call Recognition Enable Bit */
#define TWI_TWGCE_CLEAR_gc (0x00) /* TWI General Call Recognition Enable Bit - CLEAR */
#define TWI_TWGCE_SET_gc   (0x01) /* TWI General Call Recognition Enable Bit - SET */


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


/* SPI Interrupt Flag */
#define SPI_SPIF_CLEAR_gc (0x00) /* SPI Interrupt Flag - CLEAR */
#define SPI_SPIF_SET_gc   (0x80) /* SPI Interrupt Flag - SET */


/* Write Collision Flag */
#define SPI_WCOL_CLEAR_gc (0x00) /* Write Collision Flag - CLEAR */
#define SPI_WCOL_SET_gc   (0x40) /* Write Collision Flag - SET */


/* Double SPI Speed Bit */
#define SPI_SPI2X_CLEAR_gc (0x00) /* Double SPI Speed Bit - CLEAR */
#define SPI_SPI2X_SET_gc   (0x01) /* Double SPI Speed Bit - SET */


/*
--------------------------------------------------------------------------------
USART - USART
--------------------------------------------------------------------------------
*/


/* USART Receive Complete */
#define USART1_RXC1_CLEAR_gc (0x00) /* USART Receive Complete - CLEAR */
#define USART1_RXC1_SET_gc   (0x80) /* USART Receive Complete - SET */


/* USART Transmitt Complete */
#define USART1_TXC1_CLEAR_gc (0x00) /* USART Transmitt Complete - CLEAR */
#define USART1_TXC1_SET_gc   (0x40) /* USART Transmitt Complete - SET */


/* USART Data Register Empty */
#define USART1_UDRE1_CLEAR_gc (0x00) /* USART Data Register Empty - CLEAR */
#define USART1_UDRE1_SET_gc   (0x20) /* USART Data Register Empty - SET */


/* Framing Error */
#define USART1_FE1_CLEAR_gc (0x00) /* Framing Error - CLEAR */
#define USART1_FE1_SET_gc   (0x10) /* Framing Error - SET */


/* Data overRun */
#define USART1_DOR1_CLEAR_gc (0x00) /* Data overRun - CLEAR */
#define USART1_DOR1_SET_gc   (0x08) /* Data overRun - SET */


/* Parity Error */
#define USART1_UPE1_CLEAR_gc (0x00) /* Parity Error - CLEAR */
#define USART1_UPE1_SET_gc   (0x04) /* Parity Error - SET */


/* Double the USART transmission speed */
#define USART1_U2X1_CLEAR_gc (0x00) /* Double the USART transmission speed - CLEAR */
#define USART1_U2X1_SET_gc   (0x02) /* Double the USART transmission speed - SET */


/* Multi-processor Communication Mode */
#define USART1_MPCM1_CLEAR_gc (0x00) /* Multi-processor Communication Mode - CLEAR */
#define USART1_MPCM1_SET_gc   (0x01) /* Multi-processor Communication Mode - SET */


/* RX Complete Interrupt Enable */
#define USART1_RXCIE1_CLEAR_gc (0x00) /* RX Complete Interrupt Enable - CLEAR */
#define USART1_RXCIE1_SET_gc   (0x80) /* RX Complete Interrupt Enable - SET */


/* TX Complete Interrupt Enable */
#define USART1_TXCIE1_CLEAR_gc (0x00) /* TX Complete Interrupt Enable - CLEAR */
#define USART1_TXCIE1_SET_gc   (0x40) /* TX Complete Interrupt Enable - SET */


/* USART Data register Empty Interrupt Enable */
#define USART1_UDRIE1_CLEAR_gc (0x00) /* USART Data register Empty Interrupt Enable - CLEAR */
#define USART1_UDRIE1_SET_gc   (0x20) /* USART Data register Empty Interrupt Enable - SET */


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
#define USART1_UMSEL1_VAL_0x03_gc (0x03<<6) /* Master SPI */


/* Parity Mode Bits */
#define USART1_UPM1_VAL_0x00_gc (0x00<<4) /* Disabled */
#define USART1_UPM1_VAL_0x01_gc (0x01<<4) /* Reserved */
#define USART1_UPM1_VAL_0x02_gc (0x02<<4) /* Enabled, Even Parity */
#define USART1_UPM1_VAL_0x03_gc (0x03<<4) /* Enabled, Odd Parity */


/* Stop Bit Select */
#define USART1_USBS1_VAL_0x00_gc (0x00<<3) /* 1-bit */
#define USART1_USBS1_VAL_0x01_gc (0x01<<3) /* 2-bit */


/* Character Size */
#define USART1_UCSR1C_UCSZ1_gc(x) ((x<<1) & 0x06)

/* Clock Polarity */
#define USART1_UCPOL1_CLEAR_gc (0x00) /* Clock Polarity - CLEAR */
#define USART1_UCPOL1_SET_gc   (0x01) /* Clock Polarity - SET */


/*
--------------------------------------------------------------------------------
USB_DEVICE - USB Device Registers
--------------------------------------------------------------------------------
*/


/* -FLERRE */
#define USB_DEVICE_FLERRE_CLEAR_gc (0x00) /* -FLERRE - CLEAR */
#define USB_DEVICE_FLERRE_SET_gc   (0x80) /* -FLERRE - SET */


/* -NAKINE */
#define USB_DEVICE_NAKINE_CLEAR_gc (0x00) /* -NAKINE - CLEAR */
#define USB_DEVICE_NAKINE_SET_gc   (0x40) /* -NAKINE - SET */


/* -NAKOUTE */
#define USB_DEVICE_NAKOUTE_CLEAR_gc (0x00) /* -NAKOUTE - CLEAR */
#define USB_DEVICE_NAKOUTE_SET_gc   (0x10) /* -NAKOUTE - SET */


/* -RXSTPE */
#define USB_DEVICE_RXSTPE_CLEAR_gc (0x00) /* -RXSTPE - CLEAR */
#define USB_DEVICE_RXSTPE_SET_gc   (0x08) /* -RXSTPE - SET */


/* -RXOUTE */
#define USB_DEVICE_RXOUTE_CLEAR_gc (0x00) /* -RXOUTE - CLEAR */
#define USB_DEVICE_RXOUTE_SET_gc   (0x04) /* -RXOUTE - SET */


/* -STALLEDE */
#define USB_DEVICE_STALLEDE_CLEAR_gc (0x00) /* -STALLEDE - CLEAR */
#define USB_DEVICE_STALLEDE_SET_gc   (0x02) /* -STALLEDE - SET */


/* -TXINE */
#define USB_DEVICE_TXINE_CLEAR_gc (0x00) /* -TXINE - CLEAR */
#define USB_DEVICE_TXINE_SET_gc   (0x01) /* -TXINE - SET */


/* -CTRLDIR */
#define USB_DEVICE_CTRLDIR_CLEAR_gc (0x00) /* -CTRLDIR - CLEAR */
#define USB_DEVICE_CTRLDIR_SET_gc   (0x04) /* -CTRLDIR - SET */


/* -CURRBK */
#define USB_DEVICE_UESTA1X_CURRBK_gc(x) (x & 0x03)

/* -CFGOK */
#define USB_DEVICE_CFGOK_CLEAR_gc (0x00) /* -CFGOK - CLEAR */
#define USB_DEVICE_CFGOK_SET_gc   (0x80) /* -CFGOK - SET */


/* -OVERFI */
#define USB_DEVICE_OVERFI_CLEAR_gc (0x00) /* -OVERFI - CLEAR */
#define USB_DEVICE_OVERFI_SET_gc   (0x40) /* -OVERFI - SET */


/* -UNDERFI */
#define USB_DEVICE_UNDERFI_CLEAR_gc (0x00) /* -UNDERFI - CLEAR */
#define USB_DEVICE_UNDERFI_SET_gc   (0x20) /* -UNDERFI - SET */


/* -DTSEQ */
#define USB_DEVICE_UESTA0X_DTSEQ_gc(x) ((x<<2) & 0x0C)

/* -NBUSYBK */
#define USB_DEVICE_UESTA0X_NBUSYBK_gc(x) (x & 0x03)

/* -EPSIZE */
#define USB_DEVICE_UECFG1X_EPSIZE_gc(x) ((x<<4) & 0x70)

/* -EPBK */
#define USB_DEVICE_UECFG1X_EPBK_gc(x) ((x<<2) & 0x0C)

/* -ALLOC */
#define USB_DEVICE_ALLOC_CLEAR_gc (0x00) /* -ALLOC - CLEAR */
#define USB_DEVICE_ALLOC_SET_gc   (0x02) /* -ALLOC - SET */


/* -EPTYPE */
#define USB_DEVICE_UECFG0X_EPTYPE_gc(x) ((x<<6) & 0xC0)

/* -EPDIR */
#define USB_DEVICE_EPDIR_CLEAR_gc (0x00) /* -EPDIR - CLEAR */
#define USB_DEVICE_EPDIR_SET_gc   (0x01) /* -EPDIR - SET */


/* -STALLRQ */
#define USB_DEVICE_STALLRQ_CLEAR_gc (0x00) /* -STALLRQ - CLEAR */
#define USB_DEVICE_STALLRQ_SET_gc   (0x20) /* -STALLRQ - SET */


/* -STALLRQC */
#define USB_DEVICE_STALLRQC_CLEAR_gc (0x00) /* -STALLRQC - CLEAR */
#define USB_DEVICE_STALLRQC_SET_gc   (0x10) /* -STALLRQC - SET */


/* -RSTDT */
#define USB_DEVICE_RSTDT_CLEAR_gc (0x00) /* -RSTDT - CLEAR */
#define USB_DEVICE_RSTDT_SET_gc   (0x08) /* -RSTDT - SET */


/* -EPEN */
#define USB_DEVICE_EPEN_CLEAR_gc (0x00) /* -EPEN - CLEAR */
#define USB_DEVICE_EPEN_SET_gc   (0x01) /* -EPEN - SET */


/* -FIFOCON */
#define USB_DEVICE_FIFOCON_CLEAR_gc (0x00) /* -FIFOCON - CLEAR */
#define USB_DEVICE_FIFOCON_SET_gc   (0x80) /* -FIFOCON - SET */


/* -NAKINI */
#define USB_DEVICE_NAKINI_CLEAR_gc (0x00) /* -NAKINI - CLEAR */
#define USB_DEVICE_NAKINI_SET_gc   (0x40) /* -NAKINI - SET */


/* -RWAL */
#define USB_DEVICE_RWAL_CLEAR_gc (0x00) /* -RWAL - CLEAR */
#define USB_DEVICE_RWAL_SET_gc   (0x20) /* -RWAL - SET */


/* -NAKOUTI */
#define USB_DEVICE_NAKOUTI_CLEAR_gc (0x00) /* -NAKOUTI - CLEAR */
#define USB_DEVICE_NAKOUTI_SET_gc   (0x10) /* -NAKOUTI - SET */


/* -RXSTPI */
#define USB_DEVICE_RXSTPI_CLEAR_gc (0x00) /* -RXSTPI - CLEAR */
#define USB_DEVICE_RXSTPI_SET_gc   (0x08) /* -RXSTPI - SET */


/* -RXOUTI */
#define USB_DEVICE_RXOUTI_CLEAR_gc (0x00) /* -RXOUTI - CLEAR */
#define USB_DEVICE_RXOUTI_SET_gc   (0x04) /* -RXOUTI - SET */


/* -STALLEDI */
#define USB_DEVICE_STALLEDI_CLEAR_gc (0x00) /* -STALLEDI - CLEAR */
#define USB_DEVICE_STALLEDI_SET_gc   (0x02) /* -STALLEDI - SET */


/* -TXINI */
#define USB_DEVICE_TXINI_CLEAR_gc (0x00) /* -TXINI - CLEAR */
#define USB_DEVICE_TXINI_SET_gc   (0x01) /* -TXINI - SET */


/* -FNCERR */
#define USB_DEVICE_FNCERR_CLEAR_gc (0x00) /* -FNCERR - CLEAR */
#define USB_DEVICE_FNCERR_SET_gc   (0x10) /* -FNCERR - SET */


/* -ADDEN */
#define USB_DEVICE_ADDEN_CLEAR_gc (0x00) /* -ADDEN - CLEAR */
#define USB_DEVICE_ADDEN_SET_gc   (0x80) /* -ADDEN - SET */


/* -UADD */
#define USB_DEVICE_UDADDR_UADD_gc(x) (x & 0x7F)

/* -UPRSME */
#define USB_DEVICE_UPRSME_CLEAR_gc (0x00) /* -UPRSME - CLEAR */
#define USB_DEVICE_UPRSME_SET_gc   (0x40) /* -UPRSME - SET */


/* -EORSME */
#define USB_DEVICE_EORSME_CLEAR_gc (0x00) /* -EORSME - CLEAR */
#define USB_DEVICE_EORSME_SET_gc   (0x20) /* -EORSME - SET */


/* -WAKEUPE */
#define USB_DEVICE_WAKEUPE_CLEAR_gc (0x00) /* -WAKEUPE - CLEAR */
#define USB_DEVICE_WAKEUPE_SET_gc   (0x10) /* -WAKEUPE - SET */


/* -EORSTE */
#define USB_DEVICE_EORSTE_CLEAR_gc (0x00) /* -EORSTE - CLEAR */
#define USB_DEVICE_EORSTE_SET_gc   (0x08) /* -EORSTE - SET */


/* -SOFE */
#define USB_DEVICE_SOFE_CLEAR_gc (0x00) /* -SOFE - CLEAR */
#define USB_DEVICE_SOFE_SET_gc   (0x04) /* -SOFE - SET */


/* -SUSPE */
#define USB_DEVICE_SUSPE_CLEAR_gc (0x00) /* -SUSPE - CLEAR */
#define USB_DEVICE_SUSPE_SET_gc   (0x01) /* -SUSPE - SET */


/* -UPRSMI */
#define USB_DEVICE_UPRSMI_CLEAR_gc (0x00) /* -UPRSMI - CLEAR */
#define USB_DEVICE_UPRSMI_SET_gc   (0x40) /* -UPRSMI - SET */


/* -EORSMI */
#define USB_DEVICE_EORSMI_CLEAR_gc (0x00) /* -EORSMI - CLEAR */
#define USB_DEVICE_EORSMI_SET_gc   (0x20) /* -EORSMI - SET */


/* -WAKEUPI */
#define USB_DEVICE_WAKEUPI_CLEAR_gc (0x00) /* -WAKEUPI - CLEAR */
#define USB_DEVICE_WAKEUPI_SET_gc   (0x10) /* -WAKEUPI - SET */


/* -EORSTI */
#define USB_DEVICE_EORSTI_CLEAR_gc (0x00) /* -EORSTI - CLEAR */
#define USB_DEVICE_EORSTI_SET_gc   (0x08) /* -EORSTI - SET */


/* -SOFI */
#define USB_DEVICE_SOFI_CLEAR_gc (0x00) /* -SOFI - CLEAR */
#define USB_DEVICE_SOFI_SET_gc   (0x04) /* -SOFI - SET */


/* -SUSPI */
#define USB_DEVICE_SUSPI_CLEAR_gc (0x00) /* -SUSPI - CLEAR */
#define USB_DEVICE_SUSPI_SET_gc   (0x01) /* -SUSPI - SET */


/* -LSM */
#define USB_DEVICE_LSM_CLEAR_gc (0x00) /* -LSM - CLEAR */
#define USB_DEVICE_LSM_SET_gc   (0x04) /* -LSM - SET */


/* -RMWKUP */
#define USB_DEVICE_RMWKUP_CLEAR_gc (0x00) /* -RMWKUP - CLEAR */
#define USB_DEVICE_RMWKUP_SET_gc   (0x02) /* -RMWKUP - SET */


/* -DETACH */
#define USB_DEVICE_DETACH_CLEAR_gc (0x00) /* -DETACH - CLEAR */
#define USB_DEVICE_DETACH_SET_gc   (0x01) /* -DETACH - SET */


/*
--------------------------------------------------------------------------------
USB_GLOBAL - USB Controller
--------------------------------------------------------------------------------
*/


/* -STOI */
#define USB_GLOBAL_STOI_CLEAR_gc (0x00) /* -STOI - CLEAR */
#define USB_GLOBAL_STOI_SET_gc   (0x20) /* -STOI - SET */


/* -HNPERRI */
#define USB_GLOBAL_HNPERRI_CLEAR_gc (0x00) /* -HNPERRI - CLEAR */
#define USB_GLOBAL_HNPERRI_SET_gc   (0x10) /* -HNPERRI - SET */


/* -ROLEEXI */
#define USB_GLOBAL_ROLEEXI_CLEAR_gc (0x00) /* -ROLEEXI - CLEAR */
#define USB_GLOBAL_ROLEEXI_SET_gc   (0x08) /* -ROLEEXI - SET */


/* -BCERRI */
#define USB_GLOBAL_BCERRI_CLEAR_gc (0x00) /* -BCERRI - CLEAR */
#define USB_GLOBAL_BCERRI_SET_gc   (0x04) /* -BCERRI - SET */


/* -VBERRI */
#define USB_GLOBAL_VBERRI_CLEAR_gc (0x00) /* -VBERRI - CLEAR */
#define USB_GLOBAL_VBERRI_SET_gc   (0x02) /* -VBERRI - SET */


/* -SRPI */
#define USB_GLOBAL_SRPI_CLEAR_gc (0x00) /* -SRPI - CLEAR */
#define USB_GLOBAL_SRPI_SET_gc   (0x01) /* -SRPI - SET */


/* -STOE */
#define USB_GLOBAL_STOE_CLEAR_gc (0x00) /* -STOE - CLEAR */
#define USB_GLOBAL_STOE_SET_gc   (0x20) /* -STOE - SET */


/* -HNPERRE */
#define USB_GLOBAL_HNPERRE_CLEAR_gc (0x00) /* -HNPERRE - CLEAR */
#define USB_GLOBAL_HNPERRE_SET_gc   (0x10) /* -HNPERRE - SET */


/* -ROLEEXE */
#define USB_GLOBAL_ROLEEXE_CLEAR_gc (0x00) /* -ROLEEXE - CLEAR */
#define USB_GLOBAL_ROLEEXE_SET_gc   (0x08) /* -ROLEEXE - SET */


/* -BCERRE */
#define USB_GLOBAL_BCERRE_CLEAR_gc (0x00) /* -BCERRE - CLEAR */
#define USB_GLOBAL_BCERRE_SET_gc   (0x04) /* -BCERRE - SET */


/* -VBERRE */
#define USB_GLOBAL_VBERRE_CLEAR_gc (0x00) /* -VBERRE - CLEAR */
#define USB_GLOBAL_VBERRE_SET_gc   (0x02) /* -VBERRE - SET */


/* -SRPE */
#define USB_GLOBAL_SRPE_CLEAR_gc (0x00) /* -SRPE - CLEAR */
#define USB_GLOBAL_SRPE_SET_gc   (0x01) /* -SRPE - SET */


/* -HNPREQ */
#define USB_GLOBAL_HNPREQ_CLEAR_gc (0x00) /* -HNPREQ - CLEAR */
#define USB_GLOBAL_HNPREQ_SET_gc   (0x20) /* -HNPREQ - SET */


/* -SRPREQ */
#define USB_GLOBAL_SRPREQ_CLEAR_gc (0x00) /* -SRPREQ - CLEAR */
#define USB_GLOBAL_SRPREQ_SET_gc   (0x10) /* -SRPREQ - SET */


/* -SRPSEL */
#define USB_GLOBAL_SRPSEL_CLEAR_gc (0x00) /* -SRPSEL - CLEAR */
#define USB_GLOBAL_SRPSEL_SET_gc   (0x08) /* -SRPSEL - SET */


/* -VBUSHWC */
#define USB_GLOBAL_VBUSHWC_CLEAR_gc (0x00) /* -VBUSHWC - CLEAR */
#define USB_GLOBAL_VBUSHWC_SET_gc   (0x04) /* -VBUSHWC - SET */


/* -VBUSREQ */
#define USB_GLOBAL_VBUSREQ_CLEAR_gc (0x00) /* -VBUSREQ - CLEAR */
#define USB_GLOBAL_VBUSREQ_SET_gc   (0x02) /* -VBUSREQ - SET */


/* -VBUSRQC */
#define USB_GLOBAL_VBUSRQC_CLEAR_gc (0x00) /* -VBUSRQC - CLEAR */
#define USB_GLOBAL_VBUSRQC_SET_gc   (0x01) /* -VBUSRQC - SET */


/* -OTGTCON_7 */
#define USB_GLOBAL_OTGTCON_7_CLEAR_gc (0x00) /* -OTGTCON_7 - CLEAR */
#define USB_GLOBAL_OTGTCON_7_SET_gc   (0x80) /* -OTGTCON_7 - SET */


/* -PAGE */
#define USB_GLOBAL_OTGTCON_PAGE_gc(x) ((x<<5) & 0x60)

/* -VALUE_2 */
#define USB_GLOBAL_OTGTCON_VALUE_2_gc(x) (x & 0x07)

/* -IDTI */
#define USB_GLOBAL_IDTI_CLEAR_gc (0x00) /* -IDTI - CLEAR */
#define USB_GLOBAL_IDTI_SET_gc   (0x02) /* -IDTI - SET */


/* -VBUSTI */
#define USB_GLOBAL_VBUSTI_CLEAR_gc (0x00) /* -VBUSTI - CLEAR */
#define USB_GLOBAL_VBUSTI_SET_gc   (0x01) /* -VBUSTI - SET */


/* -SPEED */
#define USB_GLOBAL_SPEED_CLEAR_gc (0x00) /* -SPEED - CLEAR */
#define USB_GLOBAL_SPEED_SET_gc   (0x08) /* -SPEED - SET */


/* -ID */
#define USB_GLOBAL_ID_CLEAR_gc (0x00) /* -ID - CLEAR */
#define USB_GLOBAL_ID_SET_gc   (0x02) /* -ID - SET */


/* -VBUS */
#define USB_GLOBAL_VBUS_CLEAR_gc (0x00) /* -VBUS - CLEAR */
#define USB_GLOBAL_VBUS_SET_gc   (0x01) /* -VBUS - SET */


/* USB General Control Register-USBE */
#define USB_GLOBAL_USBE_CLEAR_gc (0x00) /* USB General Control Register-USBE - CLEAR */
#define USB_GLOBAL_USBE_SET_gc   (0x80) /* USB General Control Register-USBE - SET */


/* USB General Control Register-HOST */
#define USB_GLOBAL_HOST_CLEAR_gc (0x00) /* USB General Control Register-HOST - CLEAR */
#define USB_GLOBAL_HOST_SET_gc   (0x40) /* USB General Control Register-HOST - SET */


/* USB General Control Register-FRZCLK */
#define USB_GLOBAL_FRZCLK_CLEAR_gc (0x00) /* USB General Control Register-FRZCLK - CLEAR */
#define USB_GLOBAL_FRZCLK_SET_gc   (0x20) /* USB General Control Register-FRZCLK - SET */


/* USB General Control Register-OTGPADE */
#define USB_GLOBAL_OTGPADE_CLEAR_gc (0x00) /* USB General Control Register-OTGPADE - CLEAR */
#define USB_GLOBAL_OTGPADE_SET_gc   (0x10) /* USB General Control Register-OTGPADE - SET */


/* USB General Control Register-IDTE */
#define USB_GLOBAL_IDTE_CLEAR_gc (0x00) /* USB General Control Register-IDTE - CLEAR */
#define USB_GLOBAL_IDTE_SET_gc   (0x02) /* USB General Control Register-IDTE - SET */


/* USB General Control Register-VBUSTE */
#define USB_GLOBAL_VBUSTE_CLEAR_gc (0x00) /* USB General Control Register-VBUSTE - CLEAR */
#define USB_GLOBAL_VBUSTE_SET_gc   (0x01) /* USB General Control Register-VBUSTE - SET */


/* USB Hardware Configuration Register-UIMOD */
#define USB_GLOBAL_UIMOD_CLEAR_gc (0x00) /* USB Hardware Configuration Register-UIMOD - CLEAR */
#define USB_GLOBAL_UIMOD_SET_gc   (0x80) /* USB Hardware Configuration Register-UIMOD - SET */


/* USB Hardware Configuration Register-UIDE */
#define USB_GLOBAL_UIDE_CLEAR_gc (0x00) /* USB Hardware Configuration Register-UIDE - CLEAR */
#define USB_GLOBAL_UIDE_SET_gc   (0x40) /* USB Hardware Configuration Register-UIDE - SET */


/* USB Hardware Configuration Register-UVCONE */
#define USB_GLOBAL_UVCONE_CLEAR_gc (0x00) /* USB Hardware Configuration Register-UVCONE - CLEAR */
#define USB_GLOBAL_UVCONE_SET_gc   (0x10) /* USB Hardware Configuration Register-UVCONE - SET */


/* USB Hardware Configuration Register-UVREGE */
#define USB_GLOBAL_UVREGE_CLEAR_gc (0x00) /* USB Hardware Configuration Register-UVREGE - CLEAR */
#define USB_GLOBAL_UVREGE_SET_gc   (0x01) /* USB Hardware Configuration Register-UVREGE - SET */


/*
--------------------------------------------------------------------------------
USB_HOST - USB Host Registers
--------------------------------------------------------------------------------
*/


/* -COUNTER */
#define USB_HOST_UPERRX_COUNTER_gc(x) ((x<<5) & 0x60)

/* -CRC16 */
#define USB_HOST_CRC16_CLEAR_gc (0x00) /* -CRC16 - CLEAR */
#define USB_HOST_CRC16_SET_gc   (0x10) /* -CRC16 - SET */


/* -TIMEOUT */
#define USB_HOST_TIMEOUT_CLEAR_gc (0x00) /* -TIMEOUT - CLEAR */
#define USB_HOST_TIMEOUT_SET_gc   (0x08) /* -TIMEOUT - SET */


/* -PID */
#define USB_HOST_PID_CLEAR_gc (0x00) /* -PID - CLEAR */
#define USB_HOST_PID_SET_gc   (0x04) /* -PID - SET */


/* -DATAPID */
#define USB_HOST_DATAPID_CLEAR_gc (0x00) /* -DATAPID - CLEAR */
#define USB_HOST_DATAPID_SET_gc   (0x02) /* -DATAPID - SET */


/* -DATATGL */
#define USB_HOST_DATATGL_CLEAR_gc (0x00) /* -DATATGL - CLEAR */
#define USB_HOST_DATATGL_SET_gc   (0x01) /* -DATATGL - SET */


/* -FLERRE */
#define USB_HOST_FLERRE_CLEAR_gc (0x00) /* -FLERRE - CLEAR */
#define USB_HOST_FLERRE_SET_gc   (0x80) /* -FLERRE - SET */


/* -NAKEDE */
#define USB_HOST_NAKEDE_CLEAR_gc (0x00) /* -NAKEDE - CLEAR */
#define USB_HOST_NAKEDE_SET_gc   (0x40) /* -NAKEDE - SET */


/* -PERRE */
#define USB_HOST_PERRE_CLEAR_gc (0x00) /* -PERRE - CLEAR */
#define USB_HOST_PERRE_SET_gc   (0x10) /* -PERRE - SET */


/* -TXSTPE */
#define USB_HOST_TXSTPE_CLEAR_gc (0x00) /* -TXSTPE - CLEAR */
#define USB_HOST_TXSTPE_SET_gc   (0x08) /* -TXSTPE - SET */


/* -TXOUTE */
#define USB_HOST_TXOUTE_CLEAR_gc (0x00) /* -TXOUTE - CLEAR */
#define USB_HOST_TXOUTE_SET_gc   (0x04) /* -TXOUTE - SET */


/* -RXSTALLE */
#define USB_HOST_RXSTALLE_CLEAR_gc (0x00) /* -RXSTALLE - CLEAR */
#define USB_HOST_RXSTALLE_SET_gc   (0x02) /* -RXSTALLE - SET */


/* -RXINE */
#define USB_HOST_RXINE_CLEAR_gc (0x00) /* -RXINE - CLEAR */
#define USB_HOST_RXINE_SET_gc   (0x01) /* -RXINE - SET */


/* -CFGOK */
#define USB_HOST_CFGOK_CLEAR_gc (0x00) /* -CFGOK - CLEAR */
#define USB_HOST_CFGOK_SET_gc   (0x80) /* -CFGOK - SET */


/* -OVERFI */
#define USB_HOST_OVERFI_CLEAR_gc (0x00) /* -OVERFI - CLEAR */
#define USB_HOST_OVERFI_SET_gc   (0x40) /* -OVERFI - SET */


/* -UNDERFI */
#define USB_HOST_UNDERFI_CLEAR_gc (0x00) /* -UNDERFI - CLEAR */
#define USB_HOST_UNDERFI_SET_gc   (0x20) /* -UNDERFI - SET */


/* -DTSEQ */
#define USB_HOST_UPSTAX_DTSEQ_gc(x) ((x<<2) & 0x0C)

/* -NBUSYK */
#define USB_HOST_UPSTAX_NBUSYK_gc(x) (x & 0x03)

/* -PSIZE */
#define USB_HOST_UPCFG1X_PSIZE_gc(x) ((x<<4) & 0x70)

/* -PBK */
#define USB_HOST_UPCFG1X_PBK_gc(x) ((x<<2) & 0x0C)

/* -ALLOC */
#define USB_HOST_ALLOC_CLEAR_gc (0x00) /* -ALLOC - CLEAR */
#define USB_HOST_ALLOC_SET_gc   (0x02) /* -ALLOC - SET */


/* -PTYPE */
#define USB_HOST_UPCFG0X_PTYPE_gc(x) ((x<<6) & 0xC0)

/* -PTOKEN */
#define USB_HOST_UPCFG0X_PTOKEN_gc(x) ((x<<4) & 0x30)

/* -PEPNUM */
#define USB_HOST_UPCFG0X_PEPNUM_gc(x) (x & 0x0F)

/* -PFREEZE */
#define USB_HOST_PFREEZE_CLEAR_gc (0x00) /* -PFREEZE - CLEAR */
#define USB_HOST_PFREEZE_SET_gc   (0x40) /* -PFREEZE - SET */


/* -INMODE */
#define USB_HOST_INMODE_CLEAR_gc (0x00) /* -INMODE - CLEAR */
#define USB_HOST_INMODE_SET_gc   (0x20) /* -INMODE - SET */


/* -RSTDT */
#define USB_HOST_RSTDT_CLEAR_gc (0x00) /* -RSTDT - CLEAR */
#define USB_HOST_RSTDT_SET_gc   (0x08) /* -RSTDT - SET */


/* -PEN */
#define USB_HOST_PEN_CLEAR_gc (0x00) /* -PEN - CLEAR */
#define USB_HOST_PEN_SET_gc   (0x01) /* -PEN - SET */


/* -FIFOCON */
#define USB_HOST_FIFOCON_CLEAR_gc (0x00) /* -FIFOCON - CLEAR */
#define USB_HOST_FIFOCON_SET_gc   (0x80) /* -FIFOCON - SET */


/* -NAKEDI */
#define USB_HOST_NAKEDI_CLEAR_gc (0x00) /* -NAKEDI - CLEAR */
#define USB_HOST_NAKEDI_SET_gc   (0x40) /* -NAKEDI - SET */


/* -RWAL */
#define USB_HOST_RWAL_CLEAR_gc (0x00) /* -RWAL - CLEAR */
#define USB_HOST_RWAL_SET_gc   (0x20) /* -RWAL - SET */


/* -PERRI */
#define USB_HOST_PERRI_CLEAR_gc (0x00) /* -PERRI - CLEAR */
#define USB_HOST_PERRI_SET_gc   (0x10) /* -PERRI - SET */


/* -TXSTPI */
#define USB_HOST_TXSTPI_CLEAR_gc (0x00) /* -TXSTPI - CLEAR */
#define USB_HOST_TXSTPI_SET_gc   (0x08) /* -TXSTPI - SET */


/* -TXOUTI */
#define USB_HOST_TXOUTI_CLEAR_gc (0x00) /* -TXOUTI - CLEAR */
#define USB_HOST_TXOUTI_SET_gc   (0x04) /* -TXOUTI - SET */


/* -RXSTALLI */
#define USB_HOST_RXSTALLI_CLEAR_gc (0x00) /* -RXSTALLI - CLEAR */
#define USB_HOST_RXSTALLI_SET_gc   (0x02) /* -RXSTALLI - SET */


/* -RXINI */
#define USB_HOST_RXINI_CLEAR_gc (0x00) /* -RXINI - CLEAR */
#define USB_HOST_RXINI_SET_gc   (0x01) /* -RXINI - SET */


/* -HWUPE */
#define USB_HOST_HWUPE_CLEAR_gc (0x00) /* -HWUPE - CLEAR */
#define USB_HOST_HWUPE_SET_gc   (0x40) /* -HWUPE - SET */


/* -HSOFE */
#define USB_HOST_HSOFE_CLEAR_gc (0x00) /* -HSOFE - CLEAR */
#define USB_HOST_HSOFE_SET_gc   (0x20) /* -HSOFE - SET */


/* -RXRSME */
#define USB_HOST_RXRSME_CLEAR_gc (0x00) /* -RXRSME - CLEAR */
#define USB_HOST_RXRSME_SET_gc   (0x10) /* -RXRSME - SET */


/* -RSMEDE */
#define USB_HOST_RSMEDE_CLEAR_gc (0x00) /* -RSMEDE - CLEAR */
#define USB_HOST_RSMEDE_SET_gc   (0x08) /* -RSMEDE - SET */


/* -RSTE */
#define USB_HOST_RSTE_CLEAR_gc (0x00) /* -RSTE - CLEAR */
#define USB_HOST_RSTE_SET_gc   (0x04) /* -RSTE - SET */


/* -DDISCE */
#define USB_HOST_DDISCE_CLEAR_gc (0x00) /* -DDISCE - CLEAR */
#define USB_HOST_DDISCE_SET_gc   (0x02) /* -DDISCE - SET */


/* -DCONNE */
#define USB_HOST_DCONNE_CLEAR_gc (0x00) /* -DCONNE - CLEAR */
#define USB_HOST_DCONNE_SET_gc   (0x01) /* -DCONNE - SET */


/* -UHUPI */
#define USB_HOST_UHUPI_CLEAR_gc (0x00) /* -UHUPI - CLEAR */
#define USB_HOST_UHUPI_SET_gc   (0x40) /* -UHUPI - SET */


/* -HSOFI */
#define USB_HOST_HSOFI_CLEAR_gc (0x00) /* -HSOFI - CLEAR */
#define USB_HOST_HSOFI_SET_gc   (0x20) /* -HSOFI - SET */


/* -RXRSMI */
#define USB_HOST_RXRSMI_CLEAR_gc (0x00) /* -RXRSMI - CLEAR */
#define USB_HOST_RXRSMI_SET_gc   (0x10) /* -RXRSMI - SET */


/* -RSMEDI */
#define USB_HOST_RSMEDI_CLEAR_gc (0x00) /* -RSMEDI - CLEAR */
#define USB_HOST_RSMEDI_SET_gc   (0x08) /* -RSMEDI - SET */


/* -RSTI */
#define USB_HOST_RSTI_CLEAR_gc (0x00) /* -RSTI - CLEAR */
#define USB_HOST_RSTI_SET_gc   (0x04) /* -RSTI - SET */


/* -DDISCI */
#define USB_HOST_DDISCI_CLEAR_gc (0x00) /* -DDISCI - CLEAR */
#define USB_HOST_DDISCI_SET_gc   (0x02) /* -DDISCI - SET */


/* -DCONNI */
#define USB_HOST_DCONNI_CLEAR_gc (0x00) /* -DCONNI - CLEAR */
#define USB_HOST_DCONNI_SET_gc   (0x01) /* -DCONNI - SET */


/* -RESUME */
#define USB_HOST_RESUME_CLEAR_gc (0x00) /* -RESUME - CLEAR */
#define USB_HOST_RESUME_SET_gc   (0x04) /* -RESUME - SET */


/* -RESET */
#define USB_HOST_RESET_CLEAR_gc (0x00) /* -RESET - CLEAR */
#define USB_HOST_RESET_SET_gc   (0x02) /* -RESET - SET */


/* -SOFEN */
#define USB_HOST_SOFEN_CLEAR_gc (0x00) /* -SOFEN - CLEAR */
#define USB_HOST_SOFEN_SET_gc   (0x01) /* -SOFEN - SET */


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


/* Read While Write section read enable */
#define BOOT_LOAD_RWWSRE_CLEAR_gc (0x00) /* Read While Write section read enable - CLEAR */
#define BOOT_LOAD_RWWSRE_SET_gc   (0x10) /* Read While Write section read enable - SET */


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
TC8 - Timer/Counter, 8-bit
--------------------------------------------------------------------------------
*/


/* Force Output Compare A */
#define TC0_FOC0A_CLEAR_gc (0x00) /* Force Output Compare A - CLEAR */
#define TC0_FOC0A_SET_gc   (0x80) /* Force Output Compare A - SET */


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


/* Compare Output Mode, Phase Correct PWM Mode */
#define TC0_TCCR0A_COM0A_gc(x) ((x<<6) & 0xC0)

/* Compare Output Mode, Fast PWm */
#define TC0_TCCR0A_COM0B_gc(x) ((x<<4) & 0x30)

/* Waveform Generation Mode */
#define TC0_TCCR0A_WGM0_gc(x) (x & 0x03)

/* Timer/Counter0 Output Compare Match B Interrupt Enable */
#define TC0_OCIE0B_CLEAR_gc (0x00) /* Timer/Counter0 Output Compare Match B Interrupt Enable - CLEAR */
#define TC0_OCIE0B_SET_gc   (0x04) /* Timer/Counter0 Output Compare Match B Interrupt Enable - SET */


/* Timer/Counter0 Output Compare Match A Interrupt Enable */
#define TC0_OCIE0A_CLEAR_gc (0x00) /* Timer/Counter0 Output Compare Match A Interrupt Enable - CLEAR */
#define TC0_OCIE0A_SET_gc   (0x02) /* Timer/Counter0 Output Compare Match A Interrupt Enable - SET */


/* Timer/Counter0 Overflow Interrupt Enable */
#define TC0_TOIE0_CLEAR_gc (0x00) /* Timer/Counter0 Overflow Interrupt Enable - CLEAR */
#define TC0_TOIE0_SET_gc   (0x01) /* Timer/Counter0 Overflow Interrupt Enable - SET */


/* Timer/Counter0 Output Compare Flag 0B */
#define TC0_OCF0B_CLEAR_gc (0x00) /* Timer/Counter0 Output Compare Flag 0B - CLEAR */
#define TC0_OCF0B_SET_gc   (0x04) /* Timer/Counter0 Output Compare Flag 0B - SET */


/* Timer/Counter0 Output Compare Flag 0A */
#define TC0_OCF0A_CLEAR_gc (0x00) /* Timer/Counter0 Output Compare Flag 0A - CLEAR */
#define TC0_OCF0A_SET_gc   (0x02) /* Timer/Counter0 Output Compare Flag 0A - SET */


/* Timer/Counter0 Overflow Flag */
#define TC0_TOV0_CLEAR_gc (0x00) /* Timer/Counter0 Overflow Flag - CLEAR */
#define TC0_TOV0_SET_gc   (0x01) /* Timer/Counter0 Overflow Flag - SET */


/* Timer/Counter Synchronization Mode */
#define TC0_TSM_CLEAR_gc (0x00) /* Timer/Counter Synchronization Mode - CLEAR */
#define TC0_TSM_SET_gc   (0x80) /* Timer/Counter Synchronization Mode - SET */


/* Prescaler Reset Timer/Counter1 and Timer/Counter0 */
#define TC0_PSRSYNC_CLEAR_gc (0x00) /* Prescaler Reset Timer/Counter1 and Timer/Counter0 - CLEAR */
#define TC0_PSRSYNC_SET_gc   (0x01) /* Prescaler Reset Timer/Counter1 and Timer/Counter0 - SET */


/*
--------------------------------------------------------------------------------
TC8_ASYNC - Timer/Counter, 8-bit Async
--------------------------------------------------------------------------------
*/


/* Timer/Counter2 Output Compare Match B Interrupt Enable */
#define TC2_OCIE2B_CLEAR_gc (0x00) /* Timer/Counter2 Output Compare Match B Interrupt Enable - CLEAR */
#define TC2_OCIE2B_SET_gc   (0x04) /* Timer/Counter2 Output Compare Match B Interrupt Enable - SET */


/* Timer/Counter2 Output Compare Match A Interrupt Enable */
#define TC2_OCIE2A_CLEAR_gc (0x00) /* Timer/Counter2 Output Compare Match A Interrupt Enable - CLEAR */
#define TC2_OCIE2A_SET_gc   (0x02) /* Timer/Counter2 Output Compare Match A Interrupt Enable - SET */


/* Timer/Counter2 Overflow Interrupt Enable */
#define TC2_TOIE2_CLEAR_gc (0x00) /* Timer/Counter2 Overflow Interrupt Enable - CLEAR */
#define TC2_TOIE2_SET_gc   (0x01) /* Timer/Counter2 Overflow Interrupt Enable - SET */


/* Output Compare Flag 2B */
#define TC2_OCF2B_CLEAR_gc (0x00) /* Output Compare Flag 2B - CLEAR */
#define TC2_OCF2B_SET_gc   (0x04) /* Output Compare Flag 2B - SET */


/* Output Compare Flag 2A */
#define TC2_OCF2A_CLEAR_gc (0x00) /* Output Compare Flag 2A - CLEAR */
#define TC2_OCF2A_SET_gc   (0x02) /* Output Compare Flag 2A - SET */


/* Timer/Counter2 Overflow Flag */
#define TC2_TOV2_CLEAR_gc (0x00) /* Timer/Counter2 Overflow Flag - CLEAR */
#define TC2_TOV2_SET_gc   (0x01) /* Timer/Counter2 Overflow Flag - SET */


/* Compare Output Mode bits */
#define TC2_TCCR2A_COM2A_gc(x) ((x<<6) & 0xC0)

/* Compare Output Mode bits */
#define TC2_TCCR2A_COM2B_gc(x) ((x<<4) & 0x30)

/* Waveform Genration Mode */
#define TC2_TCCR2A_WGM2_gc(x) (x & 0x03)

/* Force Output Compare A */
#define TC2_FOC2A_CLEAR_gc (0x00) /* Force Output Compare A - CLEAR */
#define TC2_FOC2A_SET_gc   (0x80) /* Force Output Compare A - SET */


/* Force Output Compare B */
#define TC2_FOC2B_CLEAR_gc (0x00) /* Force Output Compare B - CLEAR */
#define TC2_FOC2B_SET_gc   (0x40) /* Force Output Compare B - SET */


/* Waveform Generation Mode */
#define TC2_WGM22_CLEAR_gc (0x00) /* Waveform Generation Mode - CLEAR */
#define TC2_WGM22_SET_gc   (0x08) /* Waveform Generation Mode - SET */


/* Clock Select bits */
#define TC2_CS2_VAL_0x00_gc (0x00) /* No Clock Source (Stopped) */
#define TC2_CS2_VAL_0x01_gc (0x01) /* Running, No Prescaling */
#define TC2_CS2_VAL_0x02_gc (0x02) /* Running, CLK/8 */
#define TC2_CS2_VAL_0x03_gc (0x03) /* Running, CLK/32 */
#define TC2_CS2_VAL_0x04_gc (0x04) /* Running, CLK/64 */
#define TC2_CS2_VAL_0x05_gc (0x05) /* Running, CLK/128 */
#define TC2_CS2_VAL_0x06_gc (0x06) /* Running, CLK/256 */
#define TC2_CS2_VAL_0x07_gc (0x07) /* Running, CLK/1024 */


/* Enable External Clock Input */
#define TC2_EXCLK_CLEAR_gc (0x00) /* Enable External Clock Input - CLEAR */
#define TC2_EXCLK_SET_gc   (0x40) /* Enable External Clock Input - SET */


/* Asynchronous Timer/Counter2 */
#define TC2_AS2_CLEAR_gc (0x00) /* Asynchronous Timer/Counter2 - CLEAR */
#define TC2_AS2_SET_gc   (0x20) /* Asynchronous Timer/Counter2 - SET */


/* Timer/Counter2 Update Busy */
#define TC2_TCN2UB_CLEAR_gc (0x00) /* Timer/Counter2 Update Busy - CLEAR */
#define TC2_TCN2UB_SET_gc   (0x10) /* Timer/Counter2 Update Busy - SET */


/* Output Compare Register2 Update Busy */
#define TC2_OCR2AUB_CLEAR_gc (0x00) /* Output Compare Register2 Update Busy - CLEAR */
#define TC2_OCR2AUB_SET_gc   (0x08) /* Output Compare Register2 Update Busy - SET */


/* Output Compare Register 2 Update Busy */
#define TC2_OCR2BUB_CLEAR_gc (0x00) /* Output Compare Register 2 Update Busy - CLEAR */
#define TC2_OCR2BUB_SET_gc   (0x04) /* Output Compare Register 2 Update Busy - SET */


/* Timer/Counter Control Register2 Update Busy */
#define TC2_TCR2AUB_CLEAR_gc (0x00) /* Timer/Counter Control Register2 Update Busy - CLEAR */
#define TC2_TCR2AUB_SET_gc   (0x02) /* Timer/Counter Control Register2 Update Busy - SET */


/* Timer/Counter Control Register2 Update Busy */
#define TC2_TCR2BUB_CLEAR_gc (0x00) /* Timer/Counter Control Register2 Update Busy - CLEAR */
#define TC2_TCR2BUB_SET_gc   (0x01) /* Timer/Counter Control Register2 Update Busy - SET */


/* Timer/Counter Synchronization Mode */
#define TC2_TSM_CLEAR_gc (0x00) /* Timer/Counter Synchronization Mode - CLEAR */
#define TC2_TSM_SET_gc   (0x80) /* Timer/Counter Synchronization Mode - SET */


/* Prescaler Reset Timer/Counter2 */
#define TC2_PSRASY_CLEAR_gc (0x00) /* Prescaler Reset Timer/Counter2 - CLEAR */
#define TC2_PSRASY_SET_gc   (0x02) /* Prescaler Reset Timer/Counter2 - SET */


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


/* Compare Output Mode 1A, bits */
#define TC3_TCCR3A_COM3A_gc(x) ((x<<6) & 0xC0)

/* Compare Output Mode 3B, bits */
#define TC3_TCCR3A_COM3B_gc(x) ((x<<4) & 0x30)

/* Compare Output Mode 3C, bits */
#define TC3_TCCR3A_COM3C_gc(x) ((x<<2) & 0x0C)

/* Waveform Generation Mode */
#define TC3_TCCR3A_WGM3_gc(x) (x & 0x03)

/* Input Capture 3 Noise Canceler */
#define TC3_ICNC3_CLEAR_gc (0x00) /* Input Capture 3 Noise Canceler - CLEAR */
#define TC3_ICNC3_SET_gc   (0x80) /* Input Capture 3 Noise Canceler - SET */


/* Input Capture 3 Edge Select */
#define TC3_ICES3_CLEAR_gc (0x00) /* Input Capture 3 Edge Select - CLEAR */
#define TC3_ICES3_SET_gc   (0x40) /* Input Capture 3 Edge Select - SET */


/* Waveform Generation Mode */
#define TC3_TCCR3B_WGM3_gc(x) ((x<<3) & 0x18)

/* Prescaler source of Timer/Counter 3 */
#define TC3_CS3_VAL_0x00_gc (0x00) /* No Clock Source (Stopped) */
#define TC3_CS3_VAL_0x01_gc (0x01) /* Running, No Prescaling */
#define TC3_CS3_VAL_0x02_gc (0x02) /* Running, CLK/8 */
#define TC3_CS3_VAL_0x03_gc (0x03) /* Running, CLK/64 */
#define TC3_CS3_VAL_0x04_gc (0x04) /* Running, CLK/256 */
#define TC3_CS3_VAL_0x05_gc (0x05) /* Running, CLK/1024 */
#define TC3_CS3_VAL_0x06_gc (0x06) /* Running, ExtClk Tx Falling Edge */
#define TC3_CS3_VAL_0x07_gc (0x07) /* Running, ExtClk Tx Rising Edge */


/* Force Output Compare 3A */
#define TC3_FOC3A_CLEAR_gc (0x00) /* Force Output Compare 3A - CLEAR */
#define TC3_FOC3A_SET_gc   (0x80) /* Force Output Compare 3A - SET */


/* Force Output Compare 3B */
#define TC3_FOC3B_CLEAR_gc (0x00) /* Force Output Compare 3B - CLEAR */
#define TC3_FOC3B_SET_gc   (0x40) /* Force Output Compare 3B - SET */


/* Force Output Compare 3C */
#define TC3_FOC3C_CLEAR_gc (0x00) /* Force Output Compare 3C - CLEAR */
#define TC3_FOC3C_SET_gc   (0x20) /* Force Output Compare 3C - SET */


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


/* Input Capture Flag 3 */
#define TC3_ICF3_CLEAR_gc (0x00) /* Input Capture Flag 3 - CLEAR */
#define TC3_ICF3_SET_gc   (0x20) /* Input Capture Flag 3 - SET */


/* Output Compare Flag 3C */
#define TC3_OCF3C_CLEAR_gc (0x00) /* Output Compare Flag 3C - CLEAR */
#define TC3_OCF3C_SET_gc   (0x08) /* Output Compare Flag 3C - SET */


/* Output Compare Flag 3B */
#define TC3_OCF3B_CLEAR_gc (0x00) /* Output Compare Flag 3B - CLEAR */
#define TC3_OCF3B_SET_gc   (0x04) /* Output Compare Flag 3B - SET */


/* Output Compare Flag 3A */
#define TC3_OCF3A_CLEAR_gc (0x00) /* Output Compare Flag 3A - CLEAR */
#define TC3_OCF3A_SET_gc   (0x02) /* Output Compare Flag 3A - SET */


/* Timer/Counter3 Overflow Flag */
#define TC3_TOV3_CLEAR_gc (0x00) /* Timer/Counter3 Overflow Flag - CLEAR */
#define TC3_TOV3_SET_gc   (0x01) /* Timer/Counter3 Overflow Flag - SET */


/* Compare Output Mode 1A, bits */
#define TC1_TCCR1A_COM1A_gc(x) ((x<<6) & 0xC0)

/* Compare Output Mode 1B, bits */
#define TC1_TCCR1A_COM1B_gc(x) ((x<<4) & 0x30)

/* Compare Output Mode 1C, bits */
#define TC1_TCCR1A_COM1C_gc(x) ((x<<2) & 0x0C)

/* Waveform Generation Mode */
#define TC1_TCCR1A_WGM1_gc(x) (x & 0x03)

/* Input Capture 1 Noise Canceler */
#define TC1_ICNC1_CLEAR_gc (0x00) /* Input Capture 1 Noise Canceler - CLEAR */
#define TC1_ICNC1_SET_gc   (0x80) /* Input Capture 1 Noise Canceler - SET */


/* Input Capture 1 Edge Select */
#define TC1_ICES1_CLEAR_gc (0x00) /* Input Capture 1 Edge Select - CLEAR */
#define TC1_ICES1_SET_gc   (0x40) /* Input Capture 1 Edge Select - SET */


/* Waveform Generation Mode */
#define TC1_TCCR1B_WGM1_gc(x) ((x<<3) & 0x18)

/* Prescaler source of Timer/Counter 1 */
#define TC1_CS1_VAL_0x00_gc (0x00) /* No Clock Source (Stopped) */
#define TC1_CS1_VAL_0x01_gc (0x01) /* Running, No Prescaling */
#define TC1_CS1_VAL_0x02_gc (0x02) /* Running, CLK/8 */
#define TC1_CS1_VAL_0x03_gc (0x03) /* Running, CLK/64 */
#define TC1_CS1_VAL_0x04_gc (0x04) /* Running, CLK/256 */
#define TC1_CS1_VAL_0x05_gc (0x05) /* Running, CLK/1024 */
#define TC1_CS1_VAL_0x06_gc (0x06) /* Running, ExtClk Tx Falling Edge */
#define TC1_CS1_VAL_0x07_gc (0x07) /* Running, ExtClk Tx Rising Edge */


/* Force Output Compare 1A */
#define TC1_FOC1A_CLEAR_gc (0x00) /* Force Output Compare 1A - CLEAR */
#define TC1_FOC1A_SET_gc   (0x80) /* Force Output Compare 1A - SET */


/* Force Output Compare 1B */
#define TC1_FOC1B_CLEAR_gc (0x00) /* Force Output Compare 1B - CLEAR */
#define TC1_FOC1B_SET_gc   (0x40) /* Force Output Compare 1B - SET */


/* Force Output Compare 1C */
#define TC1_FOC1C_CLEAR_gc (0x00) /* Force Output Compare 1C - CLEAR */
#define TC1_FOC1C_SET_gc   (0x20) /* Force Output Compare 1C - SET */


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


/* Input Capture Flag 1 */
#define TC1_ICF1_CLEAR_gc (0x00) /* Input Capture Flag 1 - CLEAR */
#define TC1_ICF1_SET_gc   (0x20) /* Input Capture Flag 1 - SET */


/* Output Compare Flag 1C */
#define TC1_OCF1C_CLEAR_gc (0x00) /* Output Compare Flag 1C - CLEAR */
#define TC1_OCF1C_SET_gc   (0x08) /* Output Compare Flag 1C - SET */


/* Output Compare Flag 1B */
#define TC1_OCF1B_CLEAR_gc (0x00) /* Output Compare Flag 1B - CLEAR */
#define TC1_OCF1B_SET_gc   (0x04) /* Output Compare Flag 1B - SET */


/* Output Compare Flag 1A */
#define TC1_OCF1A_CLEAR_gc (0x00) /* Output Compare Flag 1A - CLEAR */
#define TC1_OCF1A_SET_gc   (0x02) /* Output Compare Flag 1A - SET */


/* Timer/Counter1 Overflow Flag */
#define TC1_TOV1_CLEAR_gc (0x00) /* Timer/Counter1 Overflow Flag - CLEAR */
#define TC1_TOV1_SET_gc   (0x01) /* Timer/Counter1 Overflow Flag - SET */


/*
--------------------------------------------------------------------------------
JTAG - JTAG Interface
--------------------------------------------------------------------------------
*/


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


/* External Interrupt Sense Control Bit */
#define EXINT_ISC3_VAL_0x00_gc (0x00<<6) /* Low Level of INTX */
#define EXINT_ISC3_VAL_0x01_gc (0x01<<6) /* Any Logical Change of INTX */
#define EXINT_ISC3_VAL_0x02_gc (0x02<<6) /* Falling Edge of INTX */
#define EXINT_ISC3_VAL_0x03_gc (0x03<<6) /* Rising Edge of INTX */


/* External Interrupt Sense Control Bit */
#define EXINT_ISC2_VAL_0x00_gc (0x00<<4) /* Low Level of INTX */
#define EXINT_ISC2_VAL_0x01_gc (0x01<<4) /* Any Logical Change of INTX */
#define EXINT_ISC2_VAL_0x02_gc (0x02<<4) /* Falling Edge of INTX */
#define EXINT_ISC2_VAL_0x03_gc (0x03<<4) /* Rising Edge of INTX */


/* External Interrupt Sense Control Bit */
#define EXINT_ISC1_VAL_0x00_gc (0x00<<2) /* Low Level of INTX */
#define EXINT_ISC1_VAL_0x01_gc (0x01<<2) /* Any Logical Change of INTX */
#define EXINT_ISC1_VAL_0x02_gc (0x02<<2) /* Falling Edge of INTX */
#define EXINT_ISC1_VAL_0x03_gc (0x03<<2) /* Rising Edge of INTX */


/* External Interrupt Sense Control Bit */
#define EXINT_ISC0_VAL_0x00_gc (0x00) /* Low Level of INTX */
#define EXINT_ISC0_VAL_0x01_gc (0x01) /* Any Logical Change of INTX */
#define EXINT_ISC0_VAL_0x02_gc (0x02) /* Falling Edge of INTX */
#define EXINT_ISC0_VAL_0x03_gc (0x03) /* Rising Edge of INTX */


/* External Interrupt 7-4 Sense Control Bit */
#define EXINT_ISC7_VAL_0x00_gc (0x00<<6) /* Low Level of INTX */
#define EXINT_ISC7_VAL_0x01_gc (0x01<<6) /* Any Logical Change of INTX */
#define EXINT_ISC7_VAL_0x02_gc (0x02<<6) /* Falling Edge of INTX */
#define EXINT_ISC7_VAL_0x03_gc (0x03<<6) /* Rising Edge of INTX */


/* External Interrupt 7-4 Sense Control Bit */
#define EXINT_ISC6_VAL_0x00_gc (0x00<<4) /* Low Level of INTX */
#define EXINT_ISC6_VAL_0x01_gc (0x01<<4) /* Any Logical Change of INTX */
#define EXINT_ISC6_VAL_0x02_gc (0x02<<4) /* Falling Edge of INTX */
#define EXINT_ISC6_VAL_0x03_gc (0x03<<4) /* Rising Edge of INTX */


/* External Interrupt 7-4 Sense Control Bit */
#define EXINT_ISC5_VAL_0x00_gc (0x00<<2) /* Low Level of INTX */
#define EXINT_ISC5_VAL_0x01_gc (0x01<<2) /* Any Logical Change of INTX */
#define EXINT_ISC5_VAL_0x02_gc (0x02<<2) /* Falling Edge of INTX */
#define EXINT_ISC5_VAL_0x03_gc (0x03<<2) /* Rising Edge of INTX */


/* External Interrupt 7-4 Sense Control Bit */
#define EXINT_ISC4_VAL_0x00_gc (0x00) /* Low Level of INTX */
#define EXINT_ISC4_VAL_0x01_gc (0x01) /* Any Logical Change of INTX */
#define EXINT_ISC4_VAL_0x02_gc (0x02) /* Falling Edge of INTX */
#define EXINT_ISC4_VAL_0x03_gc (0x03) /* Rising Edge of INTX */


/* Pin Change Interrupt Flag 0 */
#define EXINT_PCIF0_CLEAR_gc (0x00) /* Pin Change Interrupt Flag 0 - CLEAR */
#define EXINT_PCIF0_SET_gc   (0x01) /* Pin Change Interrupt Flag 0 - SET */


/* Pin Change Interrupt Enable 0 */
#define EXINT_PCIE0_CLEAR_gc (0x00) /* Pin Change Interrupt Enable 0 - CLEAR */
#define EXINT_PCIE0_SET_gc   (0x01) /* Pin Change Interrupt Enable 0 - SET */


/*
--------------------------------------------------------------------------------
ADC - Analog-to-Digital Converter
--------------------------------------------------------------------------------
*/


/* Reference Selection Bits */
#define ADC_REFS_VAL_0x00_gc (0x00<<6) /* AREF, Internal Vref turned off */
#define ADC_REFS_VAL_0x01_gc (0x01<<6) /* AVCC with external capacitor at AREF pin */
#define ADC_REFS_VAL_0x02_gc (0x02<<6) /* Reserved */
#define ADC_REFS_VAL_0x03_gc (0x03<<6) /* Internal 2.56V Voltage Reference with external capacitor at AREF pin */


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


/* ADC High Speed Mode */
#define ADC_ADHSM_CLEAR_gc (0x00) /* ADC High Speed Mode - CLEAR */
#define ADC_ADHSM_SET_gc   (0x80) /* ADC High Speed Mode - SET */


/* ADC Auto Trigger Sources */
#define ADC_ADTS_VAL_0x00_gc (0x00) /* Free Running mode */
#define ADC_ADTS_VAL_0x01_gc (0x01) /* Analog Comparator */
#define ADC_ADTS_VAL_0x02_gc (0x02) /* External Interrupt Request 0 */
#define ADC_ADTS_VAL_0x03_gc (0x03) /* Timer/Counter0 Compare Match A */
#define ADC_ADTS_VAL_0x04_gc (0x04) /* Timer/Counter0 Overflow */
#define ADC_ADTS_VAL_0x05_gc (0x05) /* Timer/Counter1 Compare Match B */
#define ADC_ADTS_VAL_0x06_gc (0x06) /* Timer/Counter1 Overflow */
#define ADC_ADTS_VAL_0x07_gc (0x07) /* Timer/Counter1 Capture Event */


/* ADC7 Digital input Disable */
#define ADC_ADC7D_CLEAR_gc (0x00) /* ADC7 Digital input Disable - CLEAR */
#define ADC_ADC7D_SET_gc   (0x80) /* ADC7 Digital input Disable - SET */


/* ADC6 Digital input Disable */
#define ADC_ADC6D_CLEAR_gc (0x00) /* ADC6 Digital input Disable - CLEAR */
#define ADC_ADC6D_SET_gc   (0x40) /* ADC6 Digital input Disable - SET */


/* ADC5 Digital input Disable */
#define ADC_ADC5D_CLEAR_gc (0x00) /* ADC5 Digital input Disable - CLEAR */
#define ADC_ADC5D_SET_gc   (0x20) /* ADC5 Digital input Disable - SET */


/* ADC4 Digital input Disable */
#define ADC_ADC4D_CLEAR_gc (0x00) /* ADC4 Digital input Disable - CLEAR */
#define ADC_ADC4D_SET_gc   (0x10) /* ADC4 Digital input Disable - SET */


/* ADC3 Digital input Disable */
#define ADC_ADC3D_CLEAR_gc (0x00) /* ADC3 Digital input Disable - CLEAR */
#define ADC_ADC3D_SET_gc   (0x08) /* ADC3 Digital input Disable - SET */


/* ADC2 Digital input Disable */
#define ADC_ADC2D_CLEAR_gc (0x00) /* ADC2 Digital input Disable - CLEAR */
#define ADC_ADC2D_SET_gc   (0x04) /* ADC2 Digital input Disable - SET */


/* ADC1 Digital input Disable */
#define ADC_ADC1D_CLEAR_gc (0x00) /* ADC1 Digital input Disable - CLEAR */
#define ADC_ADC1D_SET_gc   (0x02) /* ADC1 Digital input Disable - SET */


/* ADC0 Digital input Disable */
#define ADC_ADC0D_CLEAR_gc (0x00) /* ADC0 Digital input Disable - CLEAR */
#define ADC_ADC0D_SET_gc   (0x01) /* ADC0 Digital input Disable - SET */


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


/* Analog Comparator Interrupt Mode Select bits */
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
PLL - Phase Locked Loop
--------------------------------------------------------------------------------
*/


/* PLL prescaler Bits */
#define PLL_PLLP_VAL_0x03_gc (0x03<<2) /* Clock/4 */
#define PLL_PLLP_VAL_0x05_gc (0x05<<2) /* Clock/8 */


/* PLL Enable Bit */
#define PLL_PLLE_CLEAR_gc (0x00) /* PLL Enable Bit - CLEAR */
#define PLL_PLLE_SET_gc   (0x02) /* PLL Enable Bit - SET */


/* PLL Lock Status Bit */
#define PLL_PLOCK_CLEAR_gc (0x00) /* PLL Lock Status Bit - CLEAR */
#define PLL_PLOCK_SET_gc   (0x01) /* PLL Lock Status Bit - SET */

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


/* WDT - Watchdog Timer (0x0000) */
#define WDT_BASE           _SFR_MEM8 (0x0000) /* WDT Base Address */
#define WDT_WDTCSR         _SFR_MEM8 (0x0060) /* Watchdog Timer Control Register */

/* PORTA - I/O Port (0x0000) */
#define PORTAA_BASE        _SFR_MEM8 (0x0000) /* PORTAA Base Address */
#define PORTAA_PINA        _SFR_MEM8 (0x0020) /* Port A Input Pins */
#define PORTAA_DDRA        _SFR_MEM8 (0x0021) /* Port A Data Direction Register */
#define PORTAA_PORTA       _SFR_MEM8 (0x0022) /* Port A Data Register */

/* PORTB - I/O Port (0x0000) */
#define PORTBB_BASE        _SFR_MEM8 (0x0000) /* PORTBB Base Address */
#define PORTBB_PINB        _SFR_MEM8 (0x0023) /* Port B Input Pins */
#define PORTBB_DDRB        _SFR_MEM8 (0x0024) /* Port B Data Direction Register */
#define PORTBB_PORTB       _SFR_MEM8 (0x0025) /* Port B Data Register */

/* PORTC - I/O Port (0x0000) */
#define PORTCC_BASE        _SFR_MEM8 (0x0000) /* PORTCC Base Address */
#define PORTCC_PINC        _SFR_MEM8 (0x0026) /* Port C Input Pins */
#define PORTCC_DDRC        _SFR_MEM8 (0x0027) /* Port C Data Direction Register */
#define PORTCC_PORTC       _SFR_MEM8 (0x0028) /* Port C Data Register */

/* PORTD - I/O Port (0x0000) */
#define PORTDD_BASE        _SFR_MEM8 (0x0000) /* PORTDD Base Address */
#define PORTDD_PIND        _SFR_MEM8 (0x0029) /* Port D Input Pins */
#define PORTDD_DDRD        _SFR_MEM8 (0x002A) /* Port D Data Direction Register */
#define PORTDD_PORTD       _SFR_MEM8 (0x002B) /* Port D Data Register */

/* PORTE - I/O Port (0x0000) */
#define PORTEE_BASE        _SFR_MEM8 (0x0000) /* PORTEE Base Address */
#define PORTEE_PINE        _SFR_MEM8 (0x002C) /* Input Pins, Port E */
#define PORTEE_DDRE        _SFR_MEM8 (0x002D) /* Data Direction Register, Port E */
#define PORTEE_PORTE       _SFR_MEM8 (0x002E) /* Data Register, Port E */

/* PORTF - I/O Port (0x0000) */
#define PORTFF_BASE        _SFR_MEM8 (0x0000) /* PORTFF Base Address */
#define PORTFF_PINF        _SFR_MEM8 (0x002F) /* Input Pins, Port F */
#define PORTFF_DDRF        _SFR_MEM8 (0x0030) /* Data Direction Register, Port F */
#define PORTFF_PORTF       _SFR_MEM8 (0x0031) /* Data Register, Port F */

/* CPU - CPU Registers (0x0000) */
#define CPU_BASE           _SFR_MEM8 (0x0000) /* CPU Base Address */
#define CPU_GPIOR0         _SFR_MEM8 (0x003E) /* General Purpose IO Register 0 */
#define CPU_GPIOR1         _SFR_MEM8 (0x004A) /* General Purpose IO Register 1 */
#define CPU_GPIOR2         _SFR_MEM8 (0x004B) /* General Purpose IO Register 2 */
#define CPU_SMCR           _SFR_MEM8 (0x0053) /* Sleep Mode Control Register */
#define CPU_MCUSR          _SFR_MEM8 (0x0054) /* MCU Status Register */
#define CPU_MCUCR          _SFR_MEM8 (0x0055) /* MCU Control Register */
#define CPU_RAMPZ          _SFR_MEM8 (0x005B) /* RAM Page Z Select Register */
#define CPU_EIND           _SFR_MEM8 (0x005C) /* Extended Indirect Register */
#define CPU_SP             _SFR_MEM16(0x005D) /* Stack Pointer  */
#define CPU_SPL            _SFR_MEM8 (0x005D) /* Stack Pointer  LOW BYTE */
#define CPU_SPH            _SFR_MEM8 (0x005E) /* Stack Pointer  HIGH BYTE */
#define CPU_SREG           _SFR_MEM8 (0x005F) /* Status Register */
#define CPU_CLKPR          _SFR_MEM8 (0x0061) 
#define CPU_PRR0           _SFR_MEM8 (0x0064) /* Power Reduction Register0 */
#define CPU_PRR1           _SFR_MEM8 (0x0065) /* Power Reduction Register1 */
#define CPU_OSCCAL         _SFR_MEM8 (0x0066) /* Oscillator Calibration Value */
#define CPU_XMCRA          _SFR_MEM8 (0x0074) /* External Memory Control Register A */
#define CPU_XMCRB          _SFR_MEM8 (0x0075) /* External Memory Control Register B */

/* TWI - Two Wire Serial Interface (0x0000) */
#define TWI_BASE           _SFR_MEM8 (0x0000) /* TWI Base Address */
#define TWI_TWBR           _SFR_MEM8 (0x00B8) /* TWI Bit Rate register */
#define TWI_TWSR           _SFR_MEM8 (0x00B9) /* TWI Status Register */
#define TWI_TWAR           _SFR_MEM8 (0x00BA) /* TWI (Slave) Address register */
#define TWI_TWDR           _SFR_MEM8 (0x00BB) /* TWI Data register */
#define TWI_TWCR           _SFR_MEM8 (0x00BC) /* TWI Control Register */
#define TWI_TWAMR          _SFR_MEM8 (0x00BD) /* TWI (Slave) Address Mask Register */

/* SPI - Serial Peripheral Interface (0x0000) */
#define SPI_BASE           _SFR_MEM8 (0x0000) /* SPI Base Address */
#define SPI_SPCR           _SFR_MEM8 (0x004C) /* SPI Control Register */
#define SPI_SPSR           _SFR_MEM8 (0x004D) /* SPI Status Register */
#define SPI_SPDR           _SFR_MEM8 (0x004E) /* SPI Data Register */

/* USART1 - USART (0x0000) */
#define USART11_BASE       _SFR_MEM8 (0x0000) /* USART11 Base Address */
#define USART11_UCSR1A     _SFR_MEM8 (0x00C8) /* USART Control and Status Register A */
#define USART11_UCSR1B     _SFR_MEM8 (0x00C9) /* USART Control and Status Register B */
#define USART11_UCSR1C     _SFR_MEM8 (0x00CA) /* USART Control and Status Register C */
#define USART11_UBRR1      _SFR_MEM16(0x00CC) /* USART Baud Rate Register  Bytes */
#define USART11_UBRR1L     _SFR_MEM8 (0x00CC) /* USART Baud Rate Register  Bytes LOW BYTE */
#define USART11_UBRR1H     _SFR_MEM8 (0x00CD) /* USART Baud Rate Register  Bytes HIGH BYTE */
#define USART11_UDR1       _SFR_MEM8 (0x00CE) /* USART I/O Data Register */

/* USB_DEVICE - USB Device Registers (0x0000) */
#define USB_DEVICE_BASE    _SFR_MEM8 (0x0000) /* USB_DEVICE Base Address */
#define USB_DEVICE_UDCON   _SFR_MEM8 (0x00E0) 
#define USB_DEVICE_UDINT   _SFR_MEM8 (0x00E1) 
#define USB_DEVICE_UDIEN   _SFR_MEM8 (0x00E2) 
#define USB_DEVICE_UDADDR  _SFR_MEM8 (0x00E3) 
#define USB_DEVICE_UDFNUM  _SFR_MEM16(0x00E4) 
#define USB_DEVICE_UDFNUML _SFR_MEM8 (0x00E4) /*  LOW BYTE */
#define USB_DEVICE_UDFNUMH _SFR_MEM8 (0x00E5) /*  HIGH BYTE */
#define USB_DEVICE_UDMFN   _SFR_MEM8 (0x00E6) 
#define USB_DEVICE_UEINTX  _SFR_MEM8 (0x00E8) 
#define USB_DEVICE_UENUM   _SFR_MEM8 (0x00E9) 
#define USB_DEVICE_UERST   _SFR_MEM8 (0x00EA) 
#define USB_DEVICE_UECONX  _SFR_MEM8 (0x00EB) 
#define USB_DEVICE_UECFG0X _SFR_MEM8 (0x00EC) 
#define USB_DEVICE_UECFG1X _SFR_MEM8 (0x00ED) 
#define USB_DEVICE_UESTA0X _SFR_MEM8 (0x00EE) 
#define USB_DEVICE_UESTA1X _SFR_MEM8 (0x00EF) 
#define USB_DEVICE_UEIENX  _SFR_MEM8 (0x00F0) 
#define USB_DEVICE_UEDATX  _SFR_MEM8 (0x00F1) 
#define USB_DEVICE_UEBCLX  _SFR_MEM8 (0x00F2) 
#define USB_DEVICE_UEBCHX  _SFR_MEM8 (0x00F3) 
#define USB_DEVICE_UEINT   _SFR_MEM8 (0x00F4) 

/* USB_GLOBAL - USB Controller (0x0000) */
#define USB_GLOBAL_BASE    _SFR_MEM8 (0x0000) /* USB_GLOBAL Base Address */
#define USB_GLOBAL_UHWCON  _SFR_MEM8 (0x00D7) /* USB Hardware Configuration Register */
#define USB_GLOBAL_USBCON  _SFR_MEM8 (0x00D8) /* USB General Control Register */
#define USB_GLOBAL_USBSTA  _SFR_MEM8 (0x00D9) 
#define USB_GLOBAL_USBINT  _SFR_MEM8 (0x00DA) 
#define USB_GLOBAL_OTGCON  _SFR_MEM8 (0x00DD) 
#define USB_GLOBAL_OTGIEN  _SFR_MEM8 (0x00DE) 
#define USB_GLOBAL_OTGINT  _SFR_MEM8 (0x00DF) 
#define USB_GLOBAL_OTGTCON _SFR_MEM8 (0x00F9) 

/* USB_HOST - USB Host Registers (0x0000) */
#define USB_HOST_BASE      _SFR_MEM8 (0x0000) /* USB_HOST Base Address */
#define USB_HOST_UHCON     _SFR_MEM8 (0x009E) 
#define USB_HOST_UHINT     _SFR_MEM8 (0x009F) 
#define USB_HOST_UHIEN     _SFR_MEM8 (0x00A0) 
#define USB_HOST_UHADDR    _SFR_MEM8 (0x00A1) 
#define USB_HOST_UHFNUM    _SFR_MEM16(0x00A2) 
#define USB_HOST_UHFNUML   _SFR_MEM8 (0x00A2) /*  LOW BYTE */
#define USB_HOST_UHFNUMH   _SFR_MEM8 (0x00A3) /*  HIGH BYTE */
#define USB_HOST_UHFLEN    _SFR_MEM8 (0x00A4) 
#define USB_HOST_UPINRQX   _SFR_MEM8 (0x00A5) 
#define USB_HOST_UPINTX    _SFR_MEM8 (0x00A6) 
#define USB_HOST_UPNUM     _SFR_MEM8 (0x00A7) 
#define USB_HOST_UPRST     _SFR_MEM8 (0x00A8) 
#define USB_HOST_UPCONX    _SFR_MEM8 (0x00A9) 
#define USB_HOST_UPCFG0X   _SFR_MEM8 (0x00AA) 
#define USB_HOST_UPCFG1X   _SFR_MEM8 (0x00AB) 
#define USB_HOST_UPSTAX    _SFR_MEM8 (0x00AC) 
#define USB_HOST_UPCFG2X   _SFR_MEM8 (0x00AD) 
#define USB_HOST_UPIENX    _SFR_MEM8 (0x00AE) 
#define USB_HOST_UPDATX    _SFR_MEM8 (0x00AF) 
#define USB_HOST_UPERRX    _SFR_MEM8 (0x00F5) 
#define USB_HOST_UPBCLX    _SFR_MEM8 (0x00F6) 
#define USB_HOST_UPBCHX    _SFR_MEM8 (0x00F7) 
#define USB_HOST_UPINT     _SFR_MEM8 (0x00F8) 

/* BOOT_LOAD - Bootloader (0x0000) */
#define BOOT_LOAD_BASE     _SFR_MEM8 (0x0000) /* BOOT_LOAD Base Address */
#define BOOT_LOAD_SPMCSR   _SFR_MEM8 (0x0057) /* Store Program Memory Control Register */

/* EEPROM - EEPROM (0x0000) */
#define EEPROM_BASE        _SFR_MEM8 (0x0000) /* EEPROM Base Address */
#define EEPROM_EECR        _SFR_MEM8 (0x003F) /* EEPROM Control Register */
#define EEPROM_EEDR        _SFR_MEM8 (0x0040) /* EEPROM Data Register */
#define EEPROM_EEAR        _SFR_MEM16(0x0041) /* EEPROM Address Register Low Bytes */
#define EEPROM_EEARL       _SFR_MEM8 (0x0041) /* EEPROM Address Register Low Bytes LOW BYTE */
#define EEPROM_EEARH       _SFR_MEM8 (0x0042) /* EEPROM Address Register Low Bytes HIGH BYTE */

/* TC0 - Timer/Counter, 8-bit (0x0000) */
#define TC8_BASE           _SFR_MEM8 (0x0000) /* TC8 Base Address */
#define TC8_TIFR0          _SFR_MEM8 (0x0035) /* Timer/Counter0 Interrupt Flag register */
#define TC8_GTCCR          _SFR_MEM8 (0x0043) /* General Timer/Counter Control Register */
#define TC8_TCCR0A         _SFR_MEM8 (0x0044) /* Timer/Counter  Control Register A */
#define TC8_TCCR0B         _SFR_MEM8 (0x0045) /* Timer/Counter Control Register B */
#define TC8_TCNT0          _SFR_MEM8 (0x0046) /* Timer/Counter0 */
#define TC8_OCR0A          _SFR_MEM8 (0x0047) /* Timer/Counter0 Output Compare Register */
#define TC8_OCR0B          _SFR_MEM8 (0x0048) /* Timer/Counter0 Output Compare Register */
#define TC8_TIMSK0         _SFR_MEM8 (0x006E) /* Timer/Counter0 Interrupt Mask Register */

/* TC2 - Timer/Counter, 8-bit Async (0x0000) */
#define TC8_ASYNC_BASE     _SFR_MEM8 (0x0000) /* TC8_ASYNC Base Address */
#define TC8_ASYNC_TIFR2    _SFR_MEM8 (0x0037) /* Timer/Counter Interrupt Flag Register */
#define TC8_ASYNC_GTCCR    _SFR_MEM8 (0x0043) /* General Timer Counter Control register */
#define TC8_ASYNC_TIMSK2   _SFR_MEM8 (0x0070) /* Timer/Counter Interrupt Mask register */
#define TC8_ASYNC_TCCR2A   _SFR_MEM8 (0x00B0) /* Timer/Counter2 Control Register A */
#define TC8_ASYNC_TCCR2B   _SFR_MEM8 (0x00B1) /* Timer/Counter2 Control Register B */
#define TC8_ASYNC_TCNT2    _SFR_MEM8 (0x00B2) /* Timer/Counter2 */
#define TC8_ASYNC_OCR2A    _SFR_MEM8 (0x00B3) /* Timer/Counter2 Output Compare Register A */
#define TC8_ASYNC_OCR2B    _SFR_MEM8 (0x00B4) /* Timer/Counter2 Output Compare Register B */
#define TC8_ASYNC_ASSR     _SFR_MEM8 (0x00B6) /* Asynchronous Status Register */

/* TC3 - Timer/Counter, 16-bit (0x0000) */
#define TC16_BASE          _SFR_MEM8 (0x0000) /* TC16 Base Address */
#define TC16_TIFR3         _SFR_MEM8 (0x0038) /* Timer/Counter3 Interrupt Flag register */
#define TC16_TIMSK3        _SFR_MEM8 (0x0071) /* Timer/Counter3 Interrupt Mask Register */
#define TC16_TCCR3A        _SFR_MEM8 (0x0090) /* Timer/Counter3 Control Register A */
#define TC16_TCCR3B        _SFR_MEM8 (0x0091) /* Timer/Counter3 Control Register B */
#define TC16_TCCR3C        _SFR_MEM8 (0x0092) /* Timer/Counter 3 Control Register C */
#define TC16_TCNT3         _SFR_MEM16(0x0094) /* Timer/Counter3  Bytes */
#define TC16_TCNT3L        _SFR_MEM8 (0x0094) /* Timer/Counter3  Bytes LOW BYTE */
#define TC16_TCNT3H        _SFR_MEM8 (0x0095) /* Timer/Counter3  Bytes HIGH BYTE */
#define TC16_ICR3          _SFR_MEM16(0x0096) /* Timer/Counter3 Input Capture Register  Bytes */
#define TC16_ICR3L         _SFR_MEM8 (0x0096) /* Timer/Counter3 Input Capture Register  Bytes LOW BYTE */
#define TC16_ICR3H         _SFR_MEM8 (0x0097) /* Timer/Counter3 Input Capture Register  Bytes HIGH BYTE */
#define TC16_OCR3A         _SFR_MEM16(0x0098) /* Timer/Counter3 Output Compare Register A  Bytes */
#define TC16_OCR3AL        _SFR_MEM8 (0x0098) /* Timer/Counter3 Output Compare Register A  Bytes LOW BYTE */
#define TC16_OCR3AH        _SFR_MEM8 (0x0099) /* Timer/Counter3 Output Compare Register A  Bytes HIGH BYTE */
#define TC16_OCR3B         _SFR_MEM16(0x009A) /* Timer/Counter3 Output Compare Register B  Bytes */
#define TC16_OCR3BL        _SFR_MEM8 (0x009A) /* Timer/Counter3 Output Compare Register B  Bytes LOW BYTE */
#define TC16_OCR3BH        _SFR_MEM8 (0x009B) /* Timer/Counter3 Output Compare Register B  Bytes HIGH BYTE */
#define TC16_OCR3C         _SFR_MEM16(0x009C) /* Timer/Counter3 Output Compare Register B  Bytes */
#define TC16_OCR3CL        _SFR_MEM8 (0x009C) /* Timer/Counter3 Output Compare Register B  Bytes LOW BYTE */
#define TC16_OCR3CH        _SFR_MEM8 (0x009D) /* Timer/Counter3 Output Compare Register B  Bytes HIGH BYTE */

/* TC1 - Timer/Counter, 16-bit (0x0000) */
/* TC16_BASE ALREADY DEFINED */
#define TC16_TIFR1         _SFR_MEM8 (0x0036) /* Timer/Counter1 Interrupt Flag register */
#define TC16_TIMSK1        _SFR_MEM8 (0x006F) /* Timer/Counter1 Interrupt Mask Register */
#define TC16_TCCR1A        _SFR_MEM8 (0x0080) /* Timer/Counter1 Control Register A */
#define TC16_TCCR1B        _SFR_MEM8 (0x0081) /* Timer/Counter1 Control Register B */
#define TC16_TCCR1C        _SFR_MEM8 (0x0082) /* Timer/Counter 1 Control Register C */
#define TC16_TCNT1         _SFR_MEM16(0x0084) /* Timer/Counter1  Bytes */
#define TC16_TCNT1L        _SFR_MEM8 (0x0084) /* Timer/Counter1  Bytes LOW BYTE */
#define TC16_TCNT1H        _SFR_MEM8 (0x0085) /* Timer/Counter1  Bytes HIGH BYTE */
#define TC16_ICR1          _SFR_MEM16(0x0086) /* Timer/Counter1 Input Capture Register  Bytes */
#define TC16_ICR1L         _SFR_MEM8 (0x0086) /* Timer/Counter1 Input Capture Register  Bytes LOW BYTE */
#define TC16_ICR1H         _SFR_MEM8 (0x0087) /* Timer/Counter1 Input Capture Register  Bytes HIGH BYTE */
#define TC16_OCR1A         _SFR_MEM16(0x0088) /* Timer/Counter1 Output Compare Register A  Bytes */
#define TC16_OCR1AL        _SFR_MEM8 (0x0088) /* Timer/Counter1 Output Compare Register A  Bytes LOW BYTE */
#define TC16_OCR1AH        _SFR_MEM8 (0x0089) /* Timer/Counter1 Output Compare Register A  Bytes HIGH BYTE */
#define TC16_OCR1B         _SFR_MEM16(0x008A) /* Timer/Counter1 Output Compare Register B  Bytes */
#define TC16_OCR1BL        _SFR_MEM8 (0x008A) /* Timer/Counter1 Output Compare Register B  Bytes LOW BYTE */
#define TC16_OCR1BH        _SFR_MEM8 (0x008B) /* Timer/Counter1 Output Compare Register B  Bytes HIGH BYTE */
#define TC16_OCR1C         _SFR_MEM16(0x008C) /* Timer/Counter1 Output Compare Register C  Bytes */
#define TC16_OCR1CL        _SFR_MEM8 (0x008C) /* Timer/Counter1 Output Compare Register C  Bytes LOW BYTE */
#define TC16_OCR1CH        _SFR_MEM8 (0x008D) /* Timer/Counter1 Output Compare Register C  Bytes HIGH BYTE */

/* JTAG - JTAG Interface (0x0000) */
#define JTAG_BASE          _SFR_MEM8 (0x0000) /* JTAG Base Address */
#define JTAG_OCDR          _SFR_MEM8 (0x0051) /* On-Chip Debug Related Register in I/O Memory */
#define JTAG_MCUSR         _SFR_MEM8 (0x0054) /* MCU Status Register */
#define JTAG_MCUCR         _SFR_MEM8 (0x0055) /* MCU Control Register */

/* EXINT - External Interrupts (0x0000) */
#define EXINT_BASE         _SFR_MEM8 (0x0000) /* EXINT Base Address */
#define EXINT_PCIFR        _SFR_MEM8 (0x003B) /* Pin Change Interrupt Flag Register */
#define EXINT_EIFR         _SFR_MEM8 (0x003C) /* External Interrupt Flag Register */
#define EXINT_EIMSK        _SFR_MEM8 (0x003D) /* External Interrupt Mask Register */
#define EXINT_PCICR        _SFR_MEM8 (0x0068) /* Pin Change Interrupt Control Register */
#define EXINT_EICRA        _SFR_MEM8 (0x0069) /* External Interrupt Control Register A */
#define EXINT_EICRB        _SFR_MEM8 (0x006A) /* External Interrupt Control Register B */
#define EXINT_PCMSK0       _SFR_MEM8 (0x006B) /* Pin Change Mask Register 0 */

/* ADC - Analog-to-Digital Converter (0x0000) */
#define ADC_BASE           _SFR_MEM16(0x0000) /* ADC Base Address */
#define ADC_ADC            _SFR_MEM16(0x0078) /* ADC Data Register  Bytes */
#define ADC_ADCL           _SFR_MEM8 (0x0078) /* ADC Data Register  Bytes LOW BYTE */
#define ADC_ADCH           _SFR_MEM8 (0x0079) /* ADC Data Register  Bytes HIGH BYTE */
#define ADC_ADCSRA         _SFR_MEM8 (0x007A) /* The ADC Control and Status register */
#define ADC_ADCSRB         _SFR_MEM8 (0x007B) /* ADC Control and Status Register B */
#define ADC_ADMUX          _SFR_MEM8 (0x007C) /* The ADC multiplexer Selection Register */
#define ADC_DIDR0          _SFR_MEM8 (0x007E) /* Digital Input Disable Register 1 */

/* AC - Analog Comparator (0x0000) */
#define AC_BASE            _SFR_MEM8 (0x0000) /* AC Base Address */
#define AC_ACSR            _SFR_MEM8 (0x0050) /* Analog Comparator Control And Status Register */
#define AC_ADCSRB          _SFR_MEM8 (0x007B) /* ADC Control and Status Register B */
#define AC_DIDR1           _SFR_MEM8 (0x007F) 

/* PLL - Phase Locked Loop (0x0000) */
#define PLL_BASE           _SFR_MEM8 (0x0000) /* PLL Base Address */
#define PLL_PLLCSR         _SFR_MEM8 (0x0049) /* PLL Status and Control register */

/* FUSE - Fuses (0x0000) */
#define FUSE_BASE          _SFR_MEM8 (0x0000) /* FUSE Base Address */
#define FUSE_LOW           _SFR_MEM8 (0x0000) 
#define FUSE_HIGH          _SFR_MEM8 (0x0001) 
#define FUSE_EXTENDED      _SFR_MEM8 (0x0002) 

/* LOCKBIT - Lockbits (0x0000) */
#define LOCKBIT_BASE       _SFR_MEM8 (0x0000) /* LOCKBIT Base Address */
#define LOCKBIT_LOCKBIT    _SFR_MEM8 (0x0000) 
/* avr-libc typedef for avr/fuse.h */
typedef FUSE_t NVM_FUSES_t;

/*
================================================================================
Interrupt Vector Definitions
================================================================================
*/

/* Vector 0 is the reset vector */
#define None_RESET_vect_num        (0)                 
#define None_RESET_vect            _VECTOR(0)          /* External Pin,Power-on Reset,Brown-out Reset,Watchdog Reset,and JTAG AVR Reset. See Datasheet.      */
#define None_INT0_vect_num         (1)                 
#define None_INT0_vect             _VECTOR(1)          /* External Interrupt Request 0 */
#define None_INT1_vect_num         (2)                 
#define None_INT1_vect             _VECTOR(2)          /* External Interrupt Request 1 */
#define None_INT2_vect_num         (3)                 
#define None_INT2_vect             _VECTOR(3)          /* External Interrupt Request 2 */
#define None_INT3_vect_num         (4)                 
#define None_INT3_vect             _VECTOR(4)          /* External Interrupt Request 3 */
#define None_INT4_vect_num         (5)                 
#define None_INT4_vect             _VECTOR(5)          /* External Interrupt Request 4 */
#define None_INT5_vect_num         (6)                 
#define None_INT5_vect             _VECTOR(6)          /* External Interrupt Request 5 */
#define None_INT6_vect_num         (7)                 
#define None_INT6_vect             _VECTOR(7)          /* External Interrupt Request 6 */
#define None_INT7_vect_num         (8)                 
#define None_INT7_vect             _VECTOR(8)          /* External Interrupt Request 7 */
#define None_PCINT0_vect_num       (9)                 
#define None_PCINT0_vect           _VECTOR(9)          /* Pin Change Interrupt Request 0 */
#define None_USB_GEN_vect_num      (10)                
#define None_USB_GEN_vect          _VECTOR(10)         /* USB General Interrupt Request */
#define None_USB_COM_vect_num      (11)                
#define None_USB_COM_vect          _VECTOR(11)         /* USB Endpoint/Pipe Interrupt Communication Request */
#define None_WDT_vect_num          (12)                
#define None_WDT_vect              _VECTOR(12)         /* Watchdog Time-out Interrupt */
#define None_TIMER2_COMPA_vect_num (13)                
#define None_TIMER2_COMPA_vect     _VECTOR(13)         /* Timer/Counter2 Compare Match A */
#define None_TIMER2_COMPB_vect_num (14)                
#define None_TIMER2_COMPB_vect     _VECTOR(14)         /* Timer/Counter2 Compare Match B */
#define None_TIMER2_OVF_vect_num   (15)                
#define None_TIMER2_OVF_vect       _VECTOR(15)         /* Timer/Counter2 Overflow */
#define None_TIMER1_CAPT_vect_num  (16)                
#define None_TIMER1_CAPT_vect      _VECTOR(16)         /* Timer/Counter1 Capture Event */
#define None_TIMER1_COMPA_vect_num (17)                
#define None_TIMER1_COMPA_vect     _VECTOR(17)         /* Timer/Counter1 Compare Match A */
#define None_TIMER1_COMPB_vect_num (18)                
#define None_TIMER1_COMPB_vect     _VECTOR(18)         /* Timer/Counter1 Compare Match B */
#define None_TIMER1_COMPC_vect_num (19)                
#define None_TIMER1_COMPC_vect     _VECTOR(19)         /* Timer/Counter1 Compare Match C */
#define None_TIMER1_OVF_vect_num   (20)                
#define None_TIMER1_OVF_vect       _VECTOR(20)         /* Timer/Counter1 Overflow */
#define None_TIMER0_COMPA_vect_num (21)                
#define None_TIMER0_COMPA_vect     _VECTOR(21)         /* Timer/Counter0 Compare Match A */
#define None_TIMER0_COMPB_vect_num (22)                
#define None_TIMER0_COMPB_vect     _VECTOR(22)         /* Timer/Counter0 Compare Match B */
#define None_TIMER0_OVF_vect_num   (23)                
#define None_TIMER0_OVF_vect       _VECTOR(23)         /* Timer/Counter0 Overflow */
#define None_SPI_STC_vect_num      (24)                
#define None_SPI_STC_vect          _VECTOR(24)         /* SPI Serial Transfer Complete */
#define None_USART1_RX_vect_num    (25)                
#define None_USART1_RX_vect        _VECTOR(25)         /* USART1, Rx Complete */
#define None_USART1_UDRE_vect_num  (26)                
#define None_USART1_UDRE_vect      _VECTOR(26)         /* USART1 Data register Empty */
#define None_USART1_TX_vect_num    (27)                
#define None_USART1_TX_vect        _VECTOR(27)         /* USART1, Tx Complete */
#define None_ANALOG_COMP_vect_num  (28)                
#define None_ANALOG_COMP_vect      _VECTOR(28)         /* Analog Comparator */
#define None_ADC_vect_num          (29)                
#define None_ADC_vect              _VECTOR(29)         /* ADC Conversion Complete */
#define None_EE_READY_vect_num     (30)                
#define None_EE_READY_vect         _VECTOR(30)         /* EEPROM Ready */
#define None_TIMER3_CAPT_vect_num  (31)                
#define None_TIMER3_CAPT_vect      _VECTOR(31)         /* Timer/Counter3 Capture Event */
#define None_TIMER3_COMPA_vect_num (32)                
#define None_TIMER3_COMPA_vect     _VECTOR(32)         /* Timer/Counter3 Compare Match A */
#define None_TIMER3_COMPB_vect_num (33)                
#define None_TIMER3_COMPB_vect     _VECTOR(33)         /* Timer/Counter3 Compare Match B */
#define None_TIMER3_COMPC_vect_num (34)                
#define None_TIMER3_COMPC_vect     _VECTOR(34)         /* Timer/Counter3 Compare Match C */
#define None_TIMER3_OVF_vect_num   (35)                
#define None_TIMER3_OVF_vect       _VECTOR(35)         /* Timer/Counter3 Overflow */
#define None_TWI_vect_num          (36)                
#define None_TWI_vect              _VECTOR(36)         /* 2-wire Serial Interface         */
#define None_SPM_READY_vect_num    (37)                
#define None_SPM_READY_vect        _VECTOR(37)         /* Store Program Memory Read */

/* Vector Table Size */
#define _VECTOR_SIZE               (4)                 /* Size of individual vector. */
#define _VECTORS_SIZE              (38 * _VECTOR_SIZE) /* Size of all vectors */
/*
================================================================================
Constants
================================================================================
*/

#define PROGMEM_START            (0x0000)                                         
#define PROGMEM_SIZE             (0x10000)                                        
#define PROGMEM_END              (PROGMEM_START + PROGMEM_SIZE - 1)               

#define FLASH_START              (0x0000)                                         
#define FLASH_SIZE               (0x10000)                                        
#define FLASH_PAGE_SIZE          (0x0100)                                         
#define FLASH_END                (FLASH_START + FLASH_SIZE - 1)                   

#define BOOT_SECTION_1_START     (0xFC00)                                         
#define BOOT_SECTION_1_SIZE      (0x0400)                                         
#define BOOT_SECTION_1_PAGE_SIZE (0x0100)                                         
#define BOOT_SECTION_1_END       (BOOT_SECTION_1_START + BOOT_SECTION_1_SIZE - 1) 

#define BOOT_SECTION_2_START     (0xF800)                                         
#define BOOT_SECTION_2_SIZE      (0x0800)                                         
#define BOOT_SECTION_2_PAGE_SIZE (0x0100)                                         
#define BOOT_SECTION_2_END       (BOOT_SECTION_2_START + BOOT_SECTION_2_SIZE - 1) 

#define BOOT_SECTION_3_START     (0xF000)                                         
#define BOOT_SECTION_3_SIZE      (0x1000)                                         
#define BOOT_SECTION_3_PAGE_SIZE (0x0100)                                         
#define BOOT_SECTION_3_END       (BOOT_SECTION_3_START + BOOT_SECTION_3_SIZE - 1) 

#define BOOT_SECTION_4_START     (0xE000)                                         
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

#define DATAMEM_START       (0x0000)                               
#define DATAMEM_SIZE        (0x10000)                              
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
#define IRAM_SIZE           (0x1000)                               
#define IRAM_PAGE_SIZE      (0x0001)                               
#define IRAM_END            (IRAM_START + IRAM_SIZE - 1)           

#define XRAM_START          (0x2200)                               
#define XRAM_SIZE           (0xDE00)                               
#define XRAM_PAGE_SIZE      (0x0001)                               
#define XRAM_END            (XRAM_START + XRAM_SIZE - 1)           

#define EEPROMMEM_START         (0x0000)                               
#define EEPROMMEM_SIZE          (0x0800)                               
#define EEPROMMEM_END           (EEPROMMEM_START + EEPROMMEM_SIZE - 1) 

#define EEPROM_START            (0x0000)                               
#define EEPROM_SIZE             (0x0800)                               
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
#define CKOUT      (unsigned char)~_BV(6) /* Clock output on PORTC7 */
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
#define HWBE      (unsigned char)~_BV(3) /* Hardware Boot Enable */


/* ========== Lock Bits ========== */
#define __LOCK_BITS_EXIST  


/* ========== Signature ========== */
#define SIGNATURE_0 (0x1E) 
#define SIGNATURE_1 (0x96) 
#define SIGNATURE_2 (0x82) 

#endif /* #ifdef _AVR_AT90USB646_H_INCLUDED */
