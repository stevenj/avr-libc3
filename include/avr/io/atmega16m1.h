/******************************************************************************
 *   This file is part of avr-libc3.                                          * 
 *                                                                            * 
 *   Automatically created by devtools/gen-ioheader-atdf.py (V0.91)           * 
 *                                                                            * 
 *   .atpack File: ATmega16M1.atdf                                            * 
 *   .ATDF File:   atdf/ATmega16M1.atdf                                       * 
 *   Version:      2.0.12                                                     * 
 *   Date:         2019-04-26                                                 * 
 *   Device:       ATmega16M1                                                 * 
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
#  define _AVR_IOXXX_H_ "ioATmega16M1.h"
#else
#  error "Attempt to include more than one <avr/ioXXX.h> file."
#endif

#ifndef _AVR_ATmega16M1_H_INCLUDED
#  define _AVR_ATmega16M1_H_INCLUDED

/*
================================================================================
Ungrouped common register
================================================================================
*/

#define GPIOR1 _SFR_MEM8 (0x39) /* General Purpose IO Register 1 */
#define GPIOR2 _SFR_MEM8 (0x3A) /* General Purpose IO Register 2 */

#define GPIOR0 _SFR_MEM8 (0x3E) /* General Purpose IO Register 0 */

#define PLLCSR _SFR_MEM8 (0x49) /* PLL Control And Status Register */

#define SMCR   _SFR_MEM8 (0x53) /* Sleep Mode Control Register */
#define MCUSR  _SFR_MEM8 (0x54) /* MCU Status Register */
#define MCUCR  _SFR_MEM8 (0x55) /* MCU Control Register */

#define SPMCSR _SFR_MEM8 (0x57) /* Store Program Memory Control Register */

#define SP     _SFR_MEM16(0x5D) /* Stack Pointer  */
#define SREG   _SFR_MEM8 (0x5F) /* Status Register */

#define CLKPR  _SFR_MEM8 (0x61) 

#define PRR    _SFR_MEM8 (0x64) /* Power Reduction Register */

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


/* PSC Reset Behavior */
typedef enum FUSE_PSCRB_enum
{
    FUSE_PSCRB_CLEAR_gc = (0x00), /* PSC Reset Behavior - CLEAR */
    FUSE_PSCRB_SET_gc   = (0x20), /* PSC Reset Behavior - SET */
} FUSE_PSCRB_t;

/* PSCOUTnA Reset Value */
typedef enum FUSE_PSCRVA_enum
{
    FUSE_PSCRVA_CLEAR_gc = (0x00), /* PSCOUTnA Reset Value - CLEAR */
    FUSE_PSCRVA_SET_gc   = (0x10), /* PSCOUTnA Reset Value - SET */
} FUSE_PSCRVA_t;

/* PSC0UTnB Reset Value */
typedef enum FUSE_PSCRVB_enum
{
    FUSE_PSCRVB_CLEAR_gc = (0x00), /* PSC0UTnB Reset Value - CLEAR */
    FUSE_PSCRVB_SET_gc   = (0x08), /* PSC0UTnB Reset Value - SET */
} FUSE_PSCRVB_t;

/* Brown-out Detector Trigger Level */
typedef enum FUSE_BODLEVEL_enum
{
    FUSE_BODLEVEL_DISABLED_gc = (0x07), /* Brown-out detection disabled */
    FUSE_BODLEVEL_4V5_gc      = (0x06), /* Brown-out detection at VCC=4.5 V */
    FUSE_BODLEVEL_2V7_gc      = (0x05), /* Brown-out detection at VCC=2.7 V */
    FUSE_BODLEVEL_4V3_gc      = (0x04), /* Brown-out detection at VCC=4.3 V */
    FUSE_BODLEVEL_4V4_gc      = (0x03), /* Brown-out detection at VCC=4.4 V */
    FUSE_BODLEVEL_4V2_gc      = (0x02), /* Brown-out detection at VCC=4.2 V */
    FUSE_BODLEVEL_2V8_gc      = (0x01), /* Brown-out detection at VCC=2.8 V */
    FUSE_BODLEVEL_2V6_gc      = (0x00), /* Brown-out detection at VCC=2.6 V */
} FUSE_BODLEVEL_t;

/* Reset Disabled (Enable PC6 as i/o pin) */
typedef enum FUSE_RSTDISBL_enum
{
    FUSE_RSTDISBL_CLEAR_gc = (0x00), /* Reset Disabled (Enable PC6 as i/o pin) - CLEAR */
    FUSE_RSTDISBL_SET_gc   = (0x80), /* Reset Disabled (Enable PC6 as i/o pin) - SET */
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

/* Watch-dog Timer always on */
typedef enum FUSE_WDTON_enum
{
    FUSE_WDTON_CLEAR_gc = (0x00), /* Watch-dog Timer always on - CLEAR */
    FUSE_WDTON_SET_gc   = (0x10), /* Watch-dog Timer always on - SET */
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
    FUSE_BOOTSZ_256W_1F00_gc  = (0x03<<1), /* Boot Flash size=256 words Boot address=$1F00 */
    FUSE_BOOTSZ_512W_1E00_gc  = (0x02<<1), /* Boot Flash size=512 words Boot address=$1E00 */
    FUSE_BOOTSZ_1024W_1C00_gc = (0x01<<1), /* Boot Flash size=1024 words Boot address=$1C00 */
    FUSE_BOOTSZ_2048W_1800_gc = (0x00<<1), /* Boot Flash size=2048 words Boot address=$1800 */
} FUSE_BOOTSZ_t;

/* Select Reset Vector */
typedef enum FUSE_BOOTRST_enum
{
    FUSE_BOOTRST_CLEAR_gc = (0x00), /* Select Reset Vector - CLEAR */
    FUSE_BOOTRST_SET_gc   = (0x01), /* Select Reset Vector - SET */
} FUSE_BOOTRST_t;

/* Divide clock by 8 internally */
typedef enum FUSE_CKDIV8_enum
{
    FUSE_CKDIV8_CLEAR_gc = (0x00), /* Divide clock by 8 internally - CLEAR */
    FUSE_CKDIV8_SET_gc   = (0x80), /* Divide clock by 8 internally - SET */
} FUSE_CKDIV8_t;

/* Clock output on PORTD1 */
typedef enum FUSE_CKOUT_enum
{
    FUSE_CKOUT_CLEAR_gc = (0x00), /* Clock output on PORTD1 - CLEAR */
    FUSE_CKOUT_SET_gc   = (0x40), /* Clock output on PORTD1 - SET */
} FUSE_CKOUT_t;

/* Select Clock Source */
typedef enum FUSE_SUT_CKSEL_enum
{
    FUSE_SUT_CKSEL_EXTCLK_6CK_14CK_0MS_gc                   = (0x00), /* Ext. Clock; Start-up time PWRDWN/RESET: 6 CK/14 CK + 0 ms */
    FUSE_SUT_CKSEL_EXTCLK_6CK_14CK_4MS1_gc                  = (0x10), /* Ext. Clock; Start-up time PWRDWN/RESET: 6 CK/14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTCLK_6CK_14CK_65MS_gc                  = (0x20), /* Ext. Clock; Start-up time PWRDWN/RESET: 6 CK/14 CK + 65 ms */
    FUSE_SUT_CKSEL_INTRCOSC_8MHZ_6CK_14CK_0MS_gc            = (0x02), /* Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 0 ms */
    FUSE_SUT_CKSEL_INTRCOSC_8MHZ_6CK_14CK_4MS1_gc           = (0x12), /* Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_INTRCOSC_8MHZ_6CK_14CK_65MS_gc           = (0x22), /* Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_258CK_14CK_4MS1_gc   = (0x08), /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_258CK_14CK_65MS_gc   = (0x18), /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_1KCK_14CK_0MS_gc     = (0x28), /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 0 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_1KCK_14CK_4MS1_gc    = (0x38), /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_1KCK_14CK_65MS_gc    = (0x09), /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_16KCK_14CK_0MS_gc    = (0x19), /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 0 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_16KCK_14CK_4MS1_gc   = (0x29), /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_16KCK_14CK_65MS_gc   = (0x39), /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_258CK_14CK_4MS1_gc    = (0x0A), /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_258CK_14CK_65MS_gc    = (0x1A), /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_1KCK_14CK_0MS_gc      = (0x2A), /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 0 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_1KCK_14CK_4MS1_gc     = (0x3A), /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_1KCK_14CK_65MS_gc     = (0x0B), /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_16KCK_14CK_0MS_gc     = (0x1B), /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 0 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_16KCK_14CK_4MS1_gc    = (0x2B), /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_16KCK_14CK_65MS_gc    = (0x3B), /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_258CK_14CK_4MS1_gc     = (0x0C), /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_258CK_14CK_65MS_gc     = (0x1C), /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_1KCK_14CK_0MS_gc       = (0x2C), /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 0 ms */
    FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_1KCK_14CK_4MS1_gc      = (0x3C), /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_1KCK_14CK_65MS_gc      = (0x0D), /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_16KCK_14CK_0MS_gc      = (0x1D), /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 0 ms */
    FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_16KCK_14CK_4MS1_gc     = (0x2D), /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_16KCK_14CK_65MS_gc     = (0x3D), /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_258CK_14CK_4MS1_gc       = (0x0E), /* Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_258CK_14CK_65MS_gc       = (0x1E), /* Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_1KCK_14CK_0MS_gc         = (0x2E), /* Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 0 ms */
    FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_1KCK_14CK_4MS1_gc        = (0x3E), /* Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_1KCK_14CK_65MS_gc        = (0x0F), /* Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_16KCK_14CK_0MS_gc        = (0x1F), /* Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 0 ms */
    FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_16KCK_14CK_4MS1_gc       = (0x2F), /* Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_16KCK_14CK_65MS_gc       = (0x3F), /* Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 65 ms */
    FUSE_SUT_CKSEL_PLLCLK_16MHZ_1KCK_14CK_0MS_gc            = (0x03), /* PLL clock 16 MHz; Start-up time PWRDWN/RESET: 1K CK/14 CK + 0 ms */
    FUSE_SUT_CKSEL_PLLCLK_16MHZ_1KCK_14CK_4MS1_gc           = (0x13), /* PLL clock 16 MHz; Start-up time PWRDWN/RESET: 1K CK/14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_PLLCLK_16MHZ_1KCK_14CK_65MS_gc           = (0x23), /* PLL clock 16 MHz; Start-up time PWRDWN/RESET: 1K CK/14 CK + 65 ms */
    FUSE_SUT_CKSEL_PLLCLK_16MHZ_16KCK_14CK_0MS_gc           = (0x33), /* PLL clock 16 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 0 ms */
    FUSE_SUT_CKSEL_PLLCLK_PLLIN_EXTCLK_6KCK_14CK_0MS_gc     = (0x01), /* PLL clock /4; PLL input: Ext. Clock; Start-up time PWRDWN/RESET: 6K CK/14 CK + 0 ms */
    FUSE_SUT_CKSEL_PLLCLK_PLLIN_EXTCLK_6KCK_14CK_4MS_gc     = (0x11), /* PLL clock /4; PLL input: Ext. Clock; Start-up time PWRDWN/RESET: 6K CK/14 CK + 4 ms */
    FUSE_SUT_CKSEL_PLLCLK_PLLIN_EXTCLK_6KCK_14CK_64MS_gc    = (0x21), /* PLL clock /4; PLL input: Ext. Clock; Start-up time PWRDWN/RESET: 6K CK/14 CK + 64 ms */
    FUSE_SUT_CKSEL_PLLCLK_PLLIN_EXTXOSC_1KCK_14CK_0MS_gc    = (0x05), /* PLL clock /4; PLL input: Ext. Crystal Osc.; Start-up time PWRDWN/RESET: 1K CK/14 CK + 0 ms */
    FUSE_SUT_CKSEL_PLLCLK_PLLIN_EXTXOSC_1KCK_14CK_4MS_gc    = (0x15), /* PLL clock /4; PLL input: Ext. Crystal Osc.; Start-up time PWRDWN/RESET: 1K CK/14 CK + 4 ms */
    FUSE_SUT_CKSEL_PLLCLK_PLLIN_EXTXOSC_16KCK_14CK_4MS_gc   = (0x25), /* PLL clock /4; PLL input: Ext. Crystal Osc.; Start-up time PWRDWN/RESET: 16K CK/14 CK + 4 ms */
    FUSE_SUT_CKSEL_PLLCLK_PLLIN_EXTXOSC_16KCK_14CK_64MS_gc  = (0x35), /* PLL clock /4; PLL input: Ext. Crystal Osc.; Start-up time PWRDWN/RESET: 16K CK/14 CK + 64 ms */
    FUSE_SUT_CKSEL_EXTXOSC_PLLIN_EXTXOSC_1KCK_14CK_0MS_gc   = (0x04), /* Ext. Crystal Osc.; PLL input: Ext. Crystal Osc.; Start-up time PWRDWN/RESET: 1K CK/14 CK + 0 ms */
    FUSE_SUT_CKSEL_EXTXOSC_PLLIN_EXTXOSC_1KCK_14CK_4MS_gc   = (0x14), /* Ext. Crystal Osc.; PLL input: Ext. Crystal Osc.; Start-up time PWRDWN/RESET: 1K CK/14 CK + 4 ms */
    FUSE_SUT_CKSEL_EXTXOSC_PLLIN_EXTXOSC_16KCK_14CK_4MS_gc  = (0x24), /* Ext. Crystal Osc.; PLL input: Ext. Crystal Osc.; Start-up time PWRDWN/RESET: 16K CK/14 CK + 4 ms */
    FUSE_SUT_CKSEL_EXTXOSC_PLLIN_EXTXOSC_16KCK_14CK_64MS_gc = (0x34), /* Ext. Crystal Osc.; PLL input: Ext. Crystal Osc.; Start-up time PWRDWN/RESET: 16K CK/14 CK + 64 ms */
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
    register8_t PINE;         /* Port E Input Pins */
    register8_t DDRE;         /* Port E Data Direction Register */
    register8_t PORTE;        /* Port E Data Register */
} PORTE_t;


/*
--------------------------------------------------------------------------------
CAN - Controller Area Network
--------------------------------------------------------------------------------
*/

typedef struct CAN_struct
{
    register8_t rsv_0x00[216]; /* RESERVED REGISTER BLOCK */
    register8_t CANGCON;       /* CAN General Control Register */
    register8_t CANGSTA;       /* CAN General Status Register */
    register8_t CANGIT;        /* CAN General Interrupt Register Flags */
    register8_t CANGIE;        /* CAN General Interrupt Enable Register */
    register8_t CANEN2;        /* Enable MOb Register 2 */
    register8_t CANEN1;        /* Enable MOb Register 1(empty) */
    register8_t CANIE2;        /* Enable Interrupt MOb Register 2 */
    register8_t CANIE1;        /* Enable Interrupt MOb Register 1 (empty) */
    register8_t CANSIT2;       /* CAN Status Interrupt MOb Register 2 */
    register8_t CANSIT1;       /* CAN Status Interrupt MOb Register 1 (empty) */
    register8_t CANBT1;        /* CAN Bit Timing Register 1 */
    register8_t CANBT2;        /* CAN Bit Timing Register 2 */
    register8_t CANBT3;        /* CAN Bit Timing Register 3 */
    register8_t CANTCON;       /* Timer Control Register */
    _REGISTER16 (CANTIM);      /* Timer Register */
    register8_t rsv_0xE7;      /* RESERVED REGISTER */
    _REGISTER16 (CANTTC);      /* TTC Timer Register */
    register8_t rsv_0xE9;      /* RESERVED REGISTER */
    register8_t CANTEC;        /* Transmit Error Counter Register */
    register8_t CANREC;        /* Receive Error Counter Register */
    register8_t CANHPMOB;      /* Highest Priority MOb Register */
    register8_t CANPAGE;       /* Page MOb Register */
    register8_t CANSTMOB;      /* MOb Status Register */
    register8_t CANCDMOB;      /* MOb Control and DLC Register */
    register8_t CANIDT4;       /* Identifier Tag Register 4 */
    register8_t CANIDT3;       /* Identifier Tag Register 3 */
    register8_t CANIDT2;       /* Identifier Tag Register 2 */
    register8_t CANIDT1;       /* Identifier Tag Register 1 */
    register8_t CANIDM4;       /* Identifier Mask Register 4 */
    register8_t CANIDM3;       /* Identifier Mask Register 3 */
    register8_t CANIDM2;       /* Identifier Mask Register 2 */
    register8_t CANIDM1;       /* Identifier Mask Register 1 */
    _REGISTER16 (CANSTM);      /* Time Stamp Register */
    register8_t rsv_0xF9;      /* RESERVED REGISTER */
    register8_t CANMSG;        /* Message Data Register */
} CAN_t;


/* Abort Request */
typedef enum CAN_ABRQ_enum
{
    CAN_ABRQ_CLEAR_gc = (0x00), /* Abort Request - CLEAR */
    CAN_ABRQ_SET_gc   = (0x80), /* Abort Request - SET */
} CAN_ABRQ_t;

/* Overload Frame Request */
typedef enum CAN_OVRQ_enum
{
    CAN_OVRQ_CLEAR_gc = (0x00), /* Overload Frame Request - CLEAR */
    CAN_OVRQ_SET_gc   = (0x40), /* Overload Frame Request - SET */
} CAN_OVRQ_t;

/* Time Trigger Communication */
typedef enum CAN_TTC_enum
{
    CAN_TTC_CLEAR_gc = (0x00), /* Time Trigger Communication - CLEAR */
    CAN_TTC_SET_gc   = (0x20), /* Time Trigger Communication - SET */
} CAN_TTC_t;

/* Synchronization of TTC */
typedef enum CAN_SYNTTC_enum
{
    CAN_SYNTTC_CLEAR_gc = (0x00), /* Synchronization of TTC - CLEAR */
    CAN_SYNTTC_SET_gc   = (0x10), /* Synchronization of TTC - SET */
} CAN_SYNTTC_t;

/* Listening Mode */
typedef enum CAN_LISTEN_enum
{
    CAN_LISTEN_CLEAR_gc = (0x00), /* Listening Mode - CLEAR */
    CAN_LISTEN_SET_gc   = (0x08), /* Listening Mode - SET */
} CAN_LISTEN_t;

/* Test Mode */
typedef enum CAN_TEST_enum
{
    CAN_TEST_CLEAR_gc = (0x00), /* Test Mode - CLEAR */
    CAN_TEST_SET_gc   = (0x04), /* Test Mode - SET */
} CAN_TEST_t;

/* Enable / Standby */
typedef enum CAN_ENASTB_enum
{
    CAN_ENASTB_CLEAR_gc = (0x00), /* Enable / Standby - CLEAR */
    CAN_ENASTB_SET_gc   = (0x02), /* Enable / Standby - SET */
} CAN_ENASTB_t;

/* Software Reset Request */
typedef enum CAN_SWRES_enum
{
    CAN_SWRES_CLEAR_gc = (0x00), /* Software Reset Request - CLEAR */
    CAN_SWRES_SET_gc   = (0x01), /* Software Reset Request - SET */
} CAN_SWRES_t;

/* Overload Frame Flag */
typedef enum CAN_OVFG_enum
{
    CAN_OVFG_CLEAR_gc = (0x00), /* Overload Frame Flag - CLEAR */
    CAN_OVFG_SET_gc   = (0x40), /* Overload Frame Flag - SET */
} CAN_OVFG_t;

/* Transmitter Busy */
typedef enum CAN_TXBSY_enum
{
    CAN_TXBSY_CLEAR_gc = (0x00), /* Transmitter Busy - CLEAR */
    CAN_TXBSY_SET_gc   = (0x10), /* Transmitter Busy - SET */
} CAN_TXBSY_t;

/* Receiver Busy */
typedef enum CAN_RXBSY_enum
{
    CAN_RXBSY_CLEAR_gc = (0x00), /* Receiver Busy - CLEAR */
    CAN_RXBSY_SET_gc   = (0x08), /* Receiver Busy - SET */
} CAN_RXBSY_t;

/* Enable Flag */
typedef enum CAN_ENFG_enum
{
    CAN_ENFG_CLEAR_gc = (0x00), /* Enable Flag - CLEAR */
    CAN_ENFG_SET_gc   = (0x04), /* Enable Flag - SET */
} CAN_ENFG_t;

/* Bus Off Mode */
typedef enum CAN_BOFF_enum
{
    CAN_BOFF_CLEAR_gc = (0x00), /* Bus Off Mode - CLEAR */
    CAN_BOFF_SET_gc   = (0x02), /* Bus Off Mode - SET */
} CAN_BOFF_t;

/* Error Passive Mode */
typedef enum CAN_ERRP_enum
{
    CAN_ERRP_CLEAR_gc = (0x00), /* Error Passive Mode - CLEAR */
    CAN_ERRP_SET_gc   = (0x01), /* Error Passive Mode - SET */
} CAN_ERRP_t;

/* General Interrupt Flag */
typedef enum CAN_CANIT_enum
{
    CAN_CANIT_CLEAR_gc = (0x00), /* General Interrupt Flag - CLEAR */
    CAN_CANIT_SET_gc   = (0x80), /* General Interrupt Flag - SET */
} CAN_CANIT_t;

/* Bus Off Interrupt Flag */
typedef enum CAN_BOFFIT_enum
{
    CAN_BOFFIT_CLEAR_gc = (0x00), /* Bus Off Interrupt Flag - CLEAR */
    CAN_BOFFIT_SET_gc   = (0x40), /* Bus Off Interrupt Flag - SET */
} CAN_BOFFIT_t;

/* Overrun CAN Timer Flag */
typedef enum CAN_OVRTIM_enum
{
    CAN_OVRTIM_CLEAR_gc = (0x00), /* Overrun CAN Timer Flag - CLEAR */
    CAN_OVRTIM_SET_gc   = (0x20), /* Overrun CAN Timer Flag - SET */
} CAN_OVRTIM_t;

/* Burst Receive Interrupt Flag */
typedef enum CAN_BXOK_enum
{
    CAN_BXOK_CLEAR_gc = (0x00), /* Burst Receive Interrupt Flag - CLEAR */
    CAN_BXOK_SET_gc   = (0x10), /* Burst Receive Interrupt Flag - SET */
} CAN_BXOK_t;

/* Stuff Error General Flag */
typedef enum CAN_SERG_enum
{
    CAN_SERG_CLEAR_gc = (0x00), /* Stuff Error General Flag - CLEAR */
    CAN_SERG_SET_gc   = (0x08), /* Stuff Error General Flag - SET */
} CAN_SERG_t;

/* CRC Error General Flag */
typedef enum CAN_CERG_enum
{
    CAN_CERG_CLEAR_gc = (0x00), /* CRC Error General Flag - CLEAR */
    CAN_CERG_SET_gc   = (0x04), /* CRC Error General Flag - SET */
} CAN_CERG_t;

/* Form Error General Flag */
typedef enum CAN_FERG_enum
{
    CAN_FERG_CLEAR_gc = (0x00), /* Form Error General Flag - CLEAR */
    CAN_FERG_SET_gc   = (0x02), /* Form Error General Flag - SET */
} CAN_FERG_t;

/* Ackknowledgement Error General Flag */
typedef enum CAN_AERG_enum
{
    CAN_AERG_CLEAR_gc = (0x00), /* Ackknowledgement Error General Flag - CLEAR */
    CAN_AERG_SET_gc   = (0x01), /* Ackknowledgement Error General Flag - SET */
} CAN_AERG_t;

/* Enable all Interrupts */
typedef enum CAN_ENIT_enum
{
    CAN_ENIT_CLEAR_gc = (0x00), /* Enable all Interrupts - CLEAR */
    CAN_ENIT_SET_gc   = (0x80), /* Enable all Interrupts - SET */
} CAN_ENIT_t;

/* Enable Bus Off Interrupt */
typedef enum CAN_ENBOFF_enum
{
    CAN_ENBOFF_CLEAR_gc = (0x00), /* Enable Bus Off Interrupt - CLEAR */
    CAN_ENBOFF_SET_gc   = (0x40), /* Enable Bus Off Interrupt - SET */
} CAN_ENBOFF_t;

/* Enable Receive Interrupt */
typedef enum CAN_ENRX_enum
{
    CAN_ENRX_CLEAR_gc = (0x00), /* Enable Receive Interrupt - CLEAR */
    CAN_ENRX_SET_gc   = (0x20), /* Enable Receive Interrupt - SET */
} CAN_ENRX_t;

/* Enable Transmitt Interrupt */
typedef enum CAN_ENTX_enum
{
    CAN_ENTX_CLEAR_gc = (0x00), /* Enable Transmitt Interrupt - CLEAR */
    CAN_ENTX_SET_gc   = (0x10), /* Enable Transmitt Interrupt - SET */
} CAN_ENTX_t;

/* Enable MOb Error Interrupt */
typedef enum CAN_ENERR_enum
{
    CAN_ENERR_CLEAR_gc = (0x00), /* Enable MOb Error Interrupt - CLEAR */
    CAN_ENERR_SET_gc   = (0x08), /* Enable MOb Error Interrupt - SET */
} CAN_ENERR_t;

/* Enable Burst Receive Interrupt */
typedef enum CAN_ENBX_enum
{
    CAN_ENBX_CLEAR_gc = (0x00), /* Enable Burst Receive Interrupt - CLEAR */
    CAN_ENBX_SET_gc   = (0x04), /* Enable Burst Receive Interrupt - SET */
} CAN_ENBX_t;

/* Enable General Error Interrupt */
typedef enum CAN_ENERG_enum
{
    CAN_ENERG_CLEAR_gc = (0x00), /* Enable General Error Interrupt - CLEAR */
    CAN_ENERG_SET_gc   = (0x02), /* Enable General Error Interrupt - SET */
} CAN_ENERG_t;

/* Enable CAN Timer Overrun Interrupt */
typedef enum CAN_ENOVRT_enum
{
    CAN_ENOVRT_CLEAR_gc = (0x00), /* Enable CAN Timer Overrun Interrupt - CLEAR */
    CAN_ENOVRT_SET_gc   = (0x01), /* Enable CAN Timer Overrun Interrupt - SET */
} CAN_ENOVRT_t;

/* Re-Sync Jump Width bits */
#define CAN_CANBT2_SJW_gc(x) ((x<<5) & 0x60)

/* Propagation Time Segment bits */
#define CAN_CANBT2_PRS_gc(x) ((x<<1) & 0x0E)

/* Phase Segment 2 bits */
#define CAN_CANBT3_PHS2_gc(x) ((x<<4) & 0x70)

/* Phase Segment 1 bits */
#define CAN_CANBT3_PHS1_gc(x) ((x<<1) & 0x0E)

/* Sample Type */
typedef enum CAN_SMP_enum
{
    CAN_SMP_CLEAR_gc = (0x00), /* Sample Type - CLEAR */
    CAN_SMP_SET_gc   = (0x01), /* Sample Type - SET */
} CAN_SMP_t;

/* Highest Priority MOb Number bits */
#define CAN_CANHPMOB_HPMOB_gc(x) ((x<<4) & 0xF0)

/* CAN General Purpose bits */
#define CAN_CANHPMOB_CGP_gc(x) (x & 0x0F)

/* MOb Number bits */
#define CAN_CANPAGE_MOBNB_gc(x) ((x<<4) & 0xF0)

/* MOb Data Buffer Auto Increment (Active Low) */
typedef enum CAN_AINC_enum
{
    CAN_AINC_CLEAR_gc = (0x00), /* MOb Data Buffer Auto Increment (Active Low) - CLEAR */
    CAN_AINC_SET_gc   = (0x08), /* MOb Data Buffer Auto Increment (Active Low) - SET */
} CAN_AINC_t;

/* Data Buffer Index bits */
#define CAN_CANPAGE_INDX_gc(x) (x & 0x07)

/* Data Length Code Warning on MOb */
typedef enum CAN_DLCW_enum
{
    CAN_DLCW_CLEAR_gc = (0x00), /* Data Length Code Warning on MOb - CLEAR */
    CAN_DLCW_SET_gc   = (0x80), /* Data Length Code Warning on MOb - SET */
} CAN_DLCW_t;

/* Transmit OK on MOb */
typedef enum CAN_TXOK_enum
{
    CAN_TXOK_CLEAR_gc = (0x00), /* Transmit OK on MOb - CLEAR */
    CAN_TXOK_SET_gc   = (0x40), /* Transmit OK on MOb - SET */
} CAN_TXOK_t;

/* Receive OK on MOb */
typedef enum CAN_RXOK_enum
{
    CAN_RXOK_CLEAR_gc = (0x00), /* Receive OK on MOb - CLEAR */
    CAN_RXOK_SET_gc   = (0x20), /* Receive OK on MOb - SET */
} CAN_RXOK_t;

/* Bit Error on MOb */
typedef enum CAN_BERR_enum
{
    CAN_BERR_CLEAR_gc = (0x00), /* Bit Error on MOb - CLEAR */
    CAN_BERR_SET_gc   = (0x10), /* Bit Error on MOb - SET */
} CAN_BERR_t;

/* Stuff Error on MOb */
typedef enum CAN_SERR_enum
{
    CAN_SERR_CLEAR_gc = (0x00), /* Stuff Error on MOb - CLEAR */
    CAN_SERR_SET_gc   = (0x08), /* Stuff Error on MOb - SET */
} CAN_SERR_t;

/* CRC Error on MOb */
typedef enum CAN_CERR_enum
{
    CAN_CERR_CLEAR_gc = (0x00), /* CRC Error on MOb - CLEAR */
    CAN_CERR_SET_gc   = (0x04), /* CRC Error on MOb - SET */
} CAN_CERR_t;

/* Form Error on MOb */
typedef enum CAN_FERR_enum
{
    CAN_FERR_CLEAR_gc = (0x00), /* Form Error on MOb - CLEAR */
    CAN_FERR_SET_gc   = (0x02), /* Form Error on MOb - SET */
} CAN_FERR_t;

/* Ackknowledgement Error on MOb */
typedef enum CAN_AERR_enum
{
    CAN_AERR_CLEAR_gc = (0x00), /* Ackknowledgement Error on MOb - CLEAR */
    CAN_AERR_SET_gc   = (0x01), /* Ackknowledgement Error on MOb - SET */
} CAN_AERR_t;

/* MOb Config bits */
#define CAN_CANCDMOB_CONMOB_gc(x) ((x<<6) & 0xC0)

/* Reply Valid */
typedef enum CAN_RPLV_enum
{
    CAN_RPLV_CLEAR_gc = (0x00), /* Reply Valid - CLEAR */
    CAN_RPLV_SET_gc   = (0x20), /* Reply Valid - SET */
} CAN_RPLV_t;

/* Identifier Extension */
typedef enum CAN_IDE_enum
{
    CAN_IDE_CLEAR_gc = (0x00), /* Identifier Extension - CLEAR */
    CAN_IDE_SET_gc   = (0x10), /* Identifier Extension - SET */
} CAN_IDE_t;

/* Data Length Code bits */
#define CAN_CANCDMOB_DLC_gc(x) (x & 0x0F)

/* Identifier Tag */
#define CAN_CANIDT4_IDT_gc(x) ((x<<3) & 0xF8)

/* Remote Transmission Request Tag */
typedef enum CAN_RTRTAG_enum
{
    CAN_RTRTAG_CLEAR_gc = (0x00), /* Remote Transmission Request Tag - CLEAR */
    CAN_RTRTAG_SET_gc   = (0x04), /* Remote Transmission Request Tag - SET */
} CAN_RTRTAG_t;

/* Reserved Bit 1 Tag */
typedef enum CAN_RB1TAG_enum
{
    CAN_RB1TAG_CLEAR_gc = (0x00), /* Reserved Bit 1 Tag - CLEAR */
    CAN_RB1TAG_SET_gc   = (0x02), /* Reserved Bit 1 Tag - SET */
} CAN_RB1TAG_t;

/* Reserved Bit 0 Tag */
typedef enum CAN_RB0TAG_enum
{
    CAN_RB0TAG_CLEAR_gc = (0x00), /* Reserved Bit 0 Tag - CLEAR */
    CAN_RB0TAG_SET_gc   = (0x01), /* Reserved Bit 0 Tag - SET */
} CAN_RB0TAG_t;

/* Identifier Extension Mask */
typedef enum CAN_IDEMSK_enum
{
    CAN_IDEMSK_CLEAR_gc = (0x00), /* Identifier Extension Mask - CLEAR */
    CAN_IDEMSK_SET_gc   = (0x01), /* Identifier Extension Mask - SET */
} CAN_IDEMSK_t;

/* Remote Transmission Request Mask */
typedef enum CAN_RTRMSK_enum
{
    CAN_RTRMSK_CLEAR_gc = (0x00), /* Remote Transmission Request Mask - CLEAR */
    CAN_RTRMSK_SET_gc   = (0x04), /* Remote Transmission Request Mask - SET */
} CAN_RTRMSK_t;

/* Identifier Mask */
#define CAN_CANIDM4_IDMSK_gc(x) ((x<<3) & 0xF8)

/*
--------------------------------------------------------------------------------
AC - Analog Comparator
--------------------------------------------------------------------------------
*/

typedef struct AC_struct
{
    register8_t rsv_0x00[80]; /* RESERVED REGISTER BLOCK */
    register8_t ACSR;         /* Analog Comparator Status Register */
    register8_t rsv_0x51[67]; /* RESERVED REGISTER BLOCK */
    register8_t AC0CON;       /* Analog Comparator 0 Control Register */
    register8_t AC1CON;       /* Analog Comparator 1 Control Register */
    register8_t AC2CON;       /* Analog Comparator 2 Control Register */
    register8_t AC3CON;       /* Analog Comparator 3 Control Register */
} AC_t;


/* Analog Comparator 0 Enable Bit */
typedef enum AC_AC0EN_enum
{
    AC_AC0EN_CLEAR_gc = (0x00), /* Analog Comparator 0 Enable Bit - CLEAR */
    AC_AC0EN_SET_gc   = (0x80), /* Analog Comparator 0 Enable Bit - SET */
} AC_AC0EN_t;

/* Analog Comparator 0 Interrupt Enable Bit */
typedef enum AC_AC0IE_enum
{
    AC_AC0IE_CLEAR_gc = (0x00), /* Analog Comparator 0 Interrupt Enable Bit - CLEAR */
    AC_AC0IE_SET_gc   = (0x40), /* Analog Comparator 0 Interrupt Enable Bit - SET */
} AC_AC0IE_t;

/* Analog Comparator 0  Interrupt Select Bits */
#define AC_AC0CON_AC0IS_gc(x) ((x<<4) & 0x30)

/* Analog Comparator Clock Select */
typedef enum AC_ACCKSEL_enum
{
    AC_ACCKSEL_CLEAR_gc = (0x00), /* Analog Comparator Clock Select - CLEAR */
    AC_ACCKSEL_SET_gc   = (0x08), /* Analog Comparator Clock Select - SET */
} AC_ACCKSEL_t;

/* Analog Comparator 0 Multiplexer Register */
#define AC_AC0CON_AC0M_gc(x) (x & 0x07)

/* Analog Comparator 1 Enable Bit */
typedef enum AC_AC1EN_enum
{
    AC_AC1EN_CLEAR_gc = (0x00), /* Analog Comparator 1 Enable Bit - CLEAR */
    AC_AC1EN_SET_gc   = (0x80), /* Analog Comparator 1 Enable Bit - SET */
} AC_AC1EN_t;

/* Analog Comparator 1 Interrupt Enable Bit */
typedef enum AC_AC1IE_enum
{
    AC_AC1IE_CLEAR_gc = (0x00), /* Analog Comparator 1 Interrupt Enable Bit - CLEAR */
    AC_AC1IE_SET_gc   = (0x40), /* Analog Comparator 1 Interrupt Enable Bit - SET */
} AC_AC1IE_t;

/* Analog Comparator 1  Interrupt Select Bit */
typedef enum AC_AC1IS_enum
{
    AC_AC1IS_VAL_0x00_gc = (0x00<<4), /* Interrupt on Toggle */
    AC_AC1IS_VAL_0x01_gc = (0x01<<4), /* Reserved */
    AC_AC1IS_VAL_0x02_gc = (0x02<<4), /* Interrupt on Falling Edge */
    AC_AC1IS_VAL_0x03_gc = (0x03<<4), /* Interrupt on Rising Edge */
} AC_AC1IS_t;

/* Analog Comparator 1 Interrupt Capture Enable Bit */
typedef enum AC_AC1ICE_enum
{
    AC_AC1ICE_CLEAR_gc = (0x00), /* Analog Comparator 1 Interrupt Capture Enable Bit - CLEAR */
    AC_AC1ICE_SET_gc   = (0x08), /* Analog Comparator 1 Interrupt Capture Enable Bit - SET */
} AC_AC1ICE_t;

/* Analog Comparator 1 Multiplexer Register */
#define AC_AC1CON_AC1M_gc(x) (x & 0x07)

/* Analog Comparator 2 Enable Bit */
typedef enum AC_AC2EN_enum
{
    AC_AC2EN_CLEAR_gc = (0x00), /* Analog Comparator 2 Enable Bit - CLEAR */
    AC_AC2EN_SET_gc   = (0x80), /* Analog Comparator 2 Enable Bit - SET */
} AC_AC2EN_t;

/* Analog Comparator 2 Interrupt Enable Bit */
typedef enum AC_AC2IE_enum
{
    AC_AC2IE_CLEAR_gc = (0x00), /* Analog Comparator 2 Interrupt Enable Bit - CLEAR */
    AC_AC2IE_SET_gc   = (0x40), /* Analog Comparator 2 Interrupt Enable Bit - SET */
} AC_AC2IE_t;

/* Analog Comparator 2  Interrupt Select Bit */
typedef enum AC_AC2IS_enum
{
    AC_AC2IS_VAL_0x00_gc = (0x00<<4), /* Interrupt on Toggle */
    AC_AC2IS_VAL_0x01_gc = (0x01<<4), /* Reserved */
    AC_AC2IS_VAL_0x02_gc = (0x02<<4), /* Interrupt on Falling Edge */
    AC_AC2IS_VAL_0x03_gc = (0x03<<4), /* Interrupt on Rising Edge */
} AC_AC2IS_t;

/* Analog Comparator 2 Multiplexer Register */
#define AC_AC2CON_AC2M_gc(x) (x & 0x07)

/* Analog Comparator 3 Enable Bit */
typedef enum AC_AC3EN_enum
{
    AC_AC3EN_CLEAR_gc = (0x00), /* Analog Comparator 3 Enable Bit - CLEAR */
    AC_AC3EN_SET_gc   = (0x80), /* Analog Comparator 3 Enable Bit - SET */
} AC_AC3EN_t;

/* Analog Comparator 3 Interrupt Enable Bit */
typedef enum AC_AC3IE_enum
{
    AC_AC3IE_CLEAR_gc = (0x00), /* Analog Comparator 3 Interrupt Enable Bit - CLEAR */
    AC_AC3IE_SET_gc   = (0x40), /* Analog Comparator 3 Interrupt Enable Bit - SET */
} AC_AC3IE_t;

/* Analog Comparator 3  Interrupt Select Bit */
typedef enum AC_AC3IS_enum
{
    AC_AC3IS_VAL_0x00_gc = (0x00<<4), /* Interrupt on Toggle */
    AC_AC3IS_VAL_0x01_gc = (0x01<<4), /* Reserved */
    AC_AC3IS_VAL_0x02_gc = (0x02<<4), /* Interrupt on Falling Edge */
    AC_AC3IS_VAL_0x03_gc = (0x03<<4), /* Interrupt on Rising Edge */
} AC_AC3IS_t;

/* Analog Comparator 3 Multiplexer Register */
#define AC_AC3CON_AC3M_gc(x) (x & 0x07)

/* Analog Comparator 3 Interrupt Flag Bit */
typedef enum AC_AC3IF_enum
{
    AC_AC3IF_CLEAR_gc = (0x00), /* Analog Comparator 3 Interrupt Flag Bit - CLEAR */
    AC_AC3IF_SET_gc   = (0x80), /* Analog Comparator 3 Interrupt Flag Bit - SET */
} AC_AC3IF_t;

/* Analog Comparator 2 Interrupt Flag Bit */
typedef enum AC_AC2IF_enum
{
    AC_AC2IF_CLEAR_gc = (0x00), /* Analog Comparator 2 Interrupt Flag Bit - CLEAR */
    AC_AC2IF_SET_gc   = (0x40), /* Analog Comparator 2 Interrupt Flag Bit - SET */
} AC_AC2IF_t;

/* Analog Comparator 1  Interrupt Flag Bit */
typedef enum AC_AC1IF_enum
{
    AC_AC1IF_CLEAR_gc = (0x00), /* Analog Comparator 1  Interrupt Flag Bit - CLEAR */
    AC_AC1IF_SET_gc   = (0x20), /* Analog Comparator 1  Interrupt Flag Bit - SET */
} AC_AC1IF_t;

/* Analog Comparator 0 Interrupt Flag Bit */
typedef enum AC_AC0IF_enum
{
    AC_AC0IF_CLEAR_gc = (0x00), /* Analog Comparator 0 Interrupt Flag Bit - CLEAR */
    AC_AC0IF_SET_gc   = (0x10), /* Analog Comparator 0 Interrupt Flag Bit - SET */
} AC_AC0IF_t;

/* Analog Comparator 3 Output Bit */
typedef enum AC_AC3O_enum
{
    AC_AC3O_CLEAR_gc = (0x00), /* Analog Comparator 3 Output Bit - CLEAR */
    AC_AC3O_SET_gc   = (0x08), /* Analog Comparator 3 Output Bit - SET */
} AC_AC3O_t;

/* Analog Comparator 2 Output Bit */
typedef enum AC_AC2O_enum
{
    AC_AC2O_CLEAR_gc = (0x00), /* Analog Comparator 2 Output Bit - CLEAR */
    AC_AC2O_SET_gc   = (0x04), /* Analog Comparator 2 Output Bit - SET */
} AC_AC2O_t;

/* Analog Comparator 1 Output Bit */
typedef enum AC_AC1O_enum
{
    AC_AC1O_CLEAR_gc = (0x00), /* Analog Comparator 1 Output Bit - CLEAR */
    AC_AC1O_SET_gc   = (0x02), /* Analog Comparator 1 Output Bit - SET */
} AC_AC1O_t;

/* Analog Comparator 0 Output Bit */
typedef enum AC_AC0O_enum
{
    AC_AC0O_CLEAR_gc = (0x00), /* Analog Comparator 0 Output Bit - CLEAR */
    AC_AC0O_SET_gc   = (0x01), /* Analog Comparator 0 Output Bit - SET */
} AC_AC0O_t;

/*
--------------------------------------------------------------------------------
DAC - Digital-to-Analog Converter
--------------------------------------------------------------------------------
*/

typedef struct DAC_struct
{
    register8_t rsv_0x00[144]; /* RESERVED REGISTER BLOCK */
    register8_t DACON;         /* DAC Control Register */
    _REGISTER16 (DAC);         /* DAC Data Register */
} DAC_t;


/* DAC Auto Trigger Enable Bit */
typedef enum DAC_DAATE_enum
{
    DAC_DAATE_CLEAR_gc = (0x00), /* DAC Auto Trigger Enable Bit - CLEAR */
    DAC_DAATE_SET_gc   = (0x80), /* DAC Auto Trigger Enable Bit - SET */
} DAC_DAATE_t;

/* DAC Trigger Selection Bits */
typedef enum DAC_DATS_enum
{
    DAC_DATS_VAL_0x00_gc = (0x00<<4), /* Analog Comparator 0 */
    DAC_DATS_VAL_0x01_gc = (0x01<<4), /* Analog Comparator 1 */
    DAC_DATS_VAL_0x02_gc = (0x02<<4), /* External Interrupt Request 0 */
    DAC_DATS_VAL_0x03_gc = (0x03<<4), /* Timer/Counter0 Compare Match A */
    DAC_DATS_VAL_0x04_gc = (0x04<<4), /* Timer/Counter0 Overflow */
    DAC_DATS_VAL_0x05_gc = (0x05<<4), /* Timer/Counter1 Compare Match B */
    DAC_DATS_VAL_0x06_gc = (0x06<<4), /* Timer/Counter1 Overflow */
    DAC_DATS_VAL_0x07_gc = (0x07<<4), /* Timer/Counter1 Capture Event */
} DAC_DATS_t;

/* DAC Left Adjust */
typedef enum DAC_DALA_enum
{
    DAC_DALA_CLEAR_gc = (0x00), /* DAC Left Adjust - CLEAR */
    DAC_DALA_SET_gc   = (0x04), /* DAC Left Adjust - SET */
} DAC_DALA_t;

/* DAC Output Enable */
typedef enum DAC_DAOE_enum
{
    DAC_DAOE_CLEAR_gc = (0x00), /* DAC Output Enable - CLEAR */
    DAC_DAOE_SET_gc   = (0x02), /* DAC Output Enable - SET */
} DAC_DAOE_t;

/* DAC Enable Bit */
typedef enum DAC_DAEN_enum
{
    DAC_DAEN_CLEAR_gc = (0x00), /* DAC Enable Bit - CLEAR */
    DAC_DAEN_SET_gc   = (0x01), /* DAC Enable Bit - SET */
} DAC_DAEN_t;

/*
--------------------------------------------------------------------------------
CPU - CPU Registers
--------------------------------------------------------------------------------
*/

typedef struct CPU_struct
{
    register8_t rsv_0x00[57]; /* RESERVED REGISTER BLOCK */
    register8_t GPIOR1;       /* General Purpose IO Register 1 */
    register8_t GPIOR2;       /* General Purpose IO Register 2 */
    register8_t rsv_0x3B[3];  /* RESERVED REGISTER BLOCK */
    register8_t GPIOR0;       /* General Purpose IO Register 0 */
    register8_t rsv_0x3F[10]; /* RESERVED REGISTER BLOCK */
    register8_t PLLCSR;       /* PLL Control And Status Register */
    register8_t rsv_0x4A[9];  /* RESERVED REGISTER BLOCK */
    register8_t SMCR;         /* Sleep Mode Control Register */
    register8_t MCUSR;        /* MCU Status Register */
    register8_t MCUCR;        /* MCU Control Register */
    register8_t rsv_0x56;     /* RESERVED REGISTER */
    register8_t SPMCSR;       /* Store Program Memory Control Register */
    register8_t rsv_0x58[5];  /* RESERVED REGISTER BLOCK */
    _REGISTER16 (SP);         /* Stack Pointer  */
    register8_t rsv_0x5E;     /* RESERVED REGISTER */
    register8_t SREG;         /* Status Register */
    register8_t rsv_0x60;     /* RESERVED REGISTER */
    register8_t CLKPR;       
    register8_t rsv_0x62[2];  /* RESERVED REGISTER BLOCK */
    register8_t PRR;          /* Power Reduction Register */
    register8_t rsv_0x65;     /* RESERVED REGISTER */
    register8_t OSCCAL;       /* Oscillator Calibration Value */
} CPU_t;


/* SPM Interrupt Enable */
typedef enum CPU_SPMIE_enum
{
    CPU_SPMIE_CLEAR_gc = (0x00), /* SPM Interrupt Enable - CLEAR */
    CPU_SPMIE_SET_gc   = (0x80), /* SPM Interrupt Enable - SET */
} CPU_SPMIE_t;

/* Read While Write Section Busy */
typedef enum CPU_RWWSB_enum
{
    CPU_RWWSB_CLEAR_gc = (0x00), /* Read While Write Section Busy - CLEAR */
    CPU_RWWSB_SET_gc   = (0x40), /* Read While Write Section Busy - SET */
} CPU_RWWSB_t;

/* Signature Row Read */
typedef enum CPU_SIGRD_enum
{
    CPU_SIGRD_CLEAR_gc = (0x00), /* Signature Row Read - CLEAR */
    CPU_SIGRD_SET_gc   = (0x20), /* Signature Row Read - SET */
} CPU_SIGRD_t;

/* Read While Write section read enable */
typedef enum CPU_RWWSRE_enum
{
    CPU_RWWSRE_CLEAR_gc = (0x00), /* Read While Write section read enable - CLEAR */
    CPU_RWWSRE_SET_gc   = (0x10), /* Read While Write section read enable - SET */
} CPU_RWWSRE_t;

/* Boot Lock Bit Set */
typedef enum CPU_BLBSET_enum
{
    CPU_BLBSET_CLEAR_gc = (0x00), /* Boot Lock Bit Set - CLEAR */
    CPU_BLBSET_SET_gc   = (0x08), /* Boot Lock Bit Set - SET */
} CPU_BLBSET_t;

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

/* SPI Pin Select */
typedef enum CPU_SPIPS_enum
{
    CPU_SPIPS_CLEAR_gc = (0x00), /* SPI Pin Select - CLEAR */
    CPU_SPIPS_SET_gc   = (0x80), /* SPI Pin Select - SET */
} CPU_SPIPS_t;

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

/* Clock Prescaler Change Enable */
typedef enum CPU_CLKPCE_enum
{
    CPU_CLKPCE_CLEAR_gc = (0x00), /* Clock Prescaler Change Enable - CLEAR */
    CPU_CLKPCE_SET_gc   = (0x80), /* Clock Prescaler Change Enable - SET */
} CPU_CLKPCE_t;

/* Clock Prescaler Select */
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
    CPU_SM_VAL_0x03_gc = (0x03<<1), /* Reserved */
    CPU_SM_VAL_0x04_gc = (0x04<<1), /* Reserved */
    CPU_SM_VAL_0x05_gc = (0x05<<1), /* Reserved */
    CPU_SM_STDBY_gc    = (0x06<<1), /* Standby */
    CPU_SM_VAL_0x07_gc = (0x07<<1), /* Reserved */
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

/* PLL Factor */
typedef enum CPU_PLLF_enum
{
    CPU_PLLF_CLEAR_gc = (0x00), /* PLL Factor - CLEAR */
    CPU_PLLF_SET_gc   = (0x04), /* PLL Factor - SET */
} CPU_PLLF_t;

/* PLL Enable */
typedef enum CPU_PLLE_enum
{
    CPU_PLLE_CLEAR_gc = (0x00), /* PLL Enable - CLEAR */
    CPU_PLLE_SET_gc   = (0x02), /* PLL Enable - SET */
} CPU_PLLE_t;

/* PLL Lock Detector */
typedef enum CPU_PLOCK_enum
{
    CPU_PLOCK_CLEAR_gc = (0x00), /* PLL Lock Detector - CLEAR */
    CPU_PLOCK_SET_gc   = (0x01), /* PLL Lock Detector - SET */
} CPU_PLOCK_t;

/* Power Reduction CAN */
typedef enum CPU_PRCAN_enum
{
    CPU_PRCAN_CLEAR_gc = (0x00), /* Power Reduction CAN - CLEAR */
    CPU_PRCAN_SET_gc   = (0x40), /* Power Reduction CAN - SET */
} CPU_PRCAN_t;

/* Power Reduction PSC */
typedef enum CPU_PRPSC_enum
{
    CPU_PRPSC_CLEAR_gc = (0x00), /* Power Reduction PSC - CLEAR */
    CPU_PRPSC_SET_gc   = (0x20), /* Power Reduction PSC - SET */
} CPU_PRPSC_t;

/* Power Reduction Timer/Counter1 */
typedef enum CPU_PRTIM1_enum
{
    CPU_PRTIM1_CLEAR_gc = (0x00), /* Power Reduction Timer/Counter1 - CLEAR */
    CPU_PRTIM1_SET_gc   = (0x10), /* Power Reduction Timer/Counter1 - SET */
} CPU_PRTIM1_t;

/* Power Reduction Timer/Counter0 */
typedef enum CPU_PRTIM0_enum
{
    CPU_PRTIM0_CLEAR_gc = (0x00), /* Power Reduction Timer/Counter0 - CLEAR */
    CPU_PRTIM0_SET_gc   = (0x08), /* Power Reduction Timer/Counter0 - SET */
} CPU_PRTIM0_t;

/* Power Reduction Serial Peripheral Interface */
typedef enum CPU_PRSPI_enum
{
    CPU_PRSPI_CLEAR_gc = (0x00), /* Power Reduction Serial Peripheral Interface - CLEAR */
    CPU_PRSPI_SET_gc   = (0x04), /* Power Reduction Serial Peripheral Interface - SET */
} CPU_PRSPI_t;

/* Power Reduction LIN UART */
typedef enum CPU_PRLIN_enum
{
    CPU_PRLIN_CLEAR_gc = (0x00), /* Power Reduction LIN UART - CLEAR */
    CPU_PRLIN_SET_gc   = (0x02), /* Power Reduction LIN UART - SET */
} CPU_PRLIN_t;

/* Power Reduction ADC */
typedef enum CPU_PRADC_enum
{
    CPU_PRADC_CLEAR_gc = (0x00), /* Power Reduction ADC - CLEAR */
    CPU_PRADC_SET_gc   = (0x01), /* Power Reduction ADC - SET */
} CPU_PRADC_t;

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
    register8_t OCR0A;        /* Timer/Counter0 Output Compare Register A */
    register8_t OCR0B;        /* Timer/Counter0 Output Compare Register B */
    register8_t rsv_0x49[37]; /* RESERVED REGISTER BLOCK */
    register8_t TIMSK0;       /* Timer/Counter0 Interrupt Mask Register */
} TC0_t;


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

/* Compare Output Mode for Channel A */
#define TC0_TCCR0A_COM0A_gc(x) ((x<<6) & 0xC0)

/* Compare Output Mode for Channel B */
#define TC0_TCCR0A_COM0B_gc(x) ((x<<4) & 0x30)

/* Waveform Generation Mode */
#define TC0_TCCR0A_WGM0_gc(x) (x & 0x03)

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

/* Timer/Counter Synchronization Mode */
typedef enum TC0_TSM_enum
{
    TC0_TSM_CLEAR_gc = (0x00), /* Timer/Counter Synchronization Mode - CLEAR */
    TC0_TSM_SET_gc   = (0x80), /* Timer/Counter Synchronization Mode - SET */
} TC0_TSM_t;

/* Timer/Counter1 Input Capture Selection */
typedef enum TC0_ICPSEL1_enum
{
    TC0_ICPSEL1_CLEAR_gc = (0x00), /* Timer/Counter1 Input Capture Selection - CLEAR */
    TC0_ICPSEL1_SET_gc   = (0x40), /* Timer/Counter1 Input Capture Selection - SET */
} TC0_ICPSEL1_t;

/* Timer/Counter Prescaler Reset */
typedef enum TC0_PSRSYNC_enum
{
    TC0_PSRSYNC_CLEAR_gc = (0x00), /* Timer/Counter Prescaler Reset - CLEAR */
    TC0_PSRSYNC_SET_gc   = (0x01), /* Timer/Counter Prescaler Reset - SET */
} TC0_PSRSYNC_t;

/*
--------------------------------------------------------------------------------
TC16 - Timer/Counter, 16-bit
--------------------------------------------------------------------------------
*/

typedef struct TC1_struct
{
    register8_t rsv_0x00[54]; /* RESERVED REGISTER BLOCK */
    register8_t TIFR1;        /* Timer/Counter Interrupt Flag register */
    register8_t rsv_0x37[12]; /* RESERVED REGISTER BLOCK */
    register8_t GTCCR;        /* General Timer/Counter Control Register */
    register8_t rsv_0x44[43]; /* RESERVED REGISTER BLOCK */
    register8_t TIMSK1;       /* Timer/Counter Interrupt Mask Register */
    register8_t rsv_0x70[16]; /* RESERVED REGISTER BLOCK */
    register8_t TCCR1A;       /* Timer/Counter1 Control Register A */
    register8_t TCCR1B;       /* Timer/Counter1 Control Register B */
    register8_t TCCR1C;       /* Timer/Counter1 Control Register C */
    register8_t rsv_0x83;     /* RESERVED REGISTER */
    _REGISTER16 (TCNT1);      /* Timer/Counter1 Bytes */
    register8_t rsv_0x85;     /* RESERVED REGISTER */
    _REGISTER16 (ICR1);       /* Timer/Counter1 Input Capture Register */
    register8_t rsv_0x87;     /* RESERVED REGISTER */
    _REGISTER16 (OCR1A);      /* Timer/Counter1 Output Compare Register A */
    register8_t rsv_0x89;     /* RESERVED REGISTER */
    _REGISTER16 (OCR1B);      /* Timer/Counter1 Output Compare Register B */
} TC1_t;


/* Timer/Counter1 Input Capture Interrupt Enable */
typedef enum TC1_ICIE1_enum
{
    TC1_ICIE1_CLEAR_gc = (0x00), /* Timer/Counter1 Input Capture Interrupt Enable - CLEAR */
    TC1_ICIE1_SET_gc   = (0x20), /* Timer/Counter1 Input Capture Interrupt Enable - SET */
} TC1_ICIE1_t;

/* Timer/Counter1 Output CompareB Match Interrupt Enable */
typedef enum TC1_OCIE1B_enum
{
    TC1_OCIE1B_CLEAR_gc = (0x00), /* Timer/Counter1 Output CompareB Match Interrupt Enable - CLEAR */
    TC1_OCIE1B_SET_gc   = (0x04), /* Timer/Counter1 Output CompareB Match Interrupt Enable - SET */
} TC1_OCIE1B_t;

/* Timer/Counter1 Output CompareA Match Interrupt Enable */
typedef enum TC1_OCIE1A_enum
{
    TC1_OCIE1A_CLEAR_gc = (0x00), /* Timer/Counter1 Output CompareA Match Interrupt Enable - CLEAR */
    TC1_OCIE1A_SET_gc   = (0x02), /* Timer/Counter1 Output CompareA Match Interrupt Enable - SET */
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

/* Compare Output Mode for Channel A */
#define TC1_TCCR1A_COM1A_gc(x) ((x<<6) & 0xC0)

/* Compare Output Mode for Channel B */
#define TC1_TCCR1A_COM1B_gc(x) ((x<<4) & 0x30)

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

/* Timer/Counter Synchronization Mode */
typedef enum TC1_TSM_enum
{
    TC1_TSM_CLEAR_gc = (0x00), /* Timer/Counter Synchronization Mode - CLEAR */
    TC1_TSM_SET_gc   = (0x80), /* Timer/Counter Synchronization Mode - SET */
} TC1_TSM_t;

/* Timer/Counter1 Input Capture Selection */
typedef enum TC1_ICPSEL1_enum
{
    TC1_ICPSEL1_CLEAR_gc = (0x00), /* Timer/Counter1 Input Capture Selection - CLEAR */
    TC1_ICPSEL1_SET_gc   = (0x40), /* Timer/Counter1 Input Capture Selection - SET */
} TC1_ICPSEL1_t;

/* Timer/Counter Prescaler Reset */
typedef enum TC1_PSRSYNC_enum
{
    TC1_PSRSYNC_CLEAR_gc = (0x00), /* Timer/Counter Prescaler Reset - CLEAR */
    TC1_PSRSYNC_SET_gc   = (0x01), /* Timer/Counter Prescaler Reset - SET */
} TC1_PSRSYNC_t;

/*
--------------------------------------------------------------------------------
ADC - Analog-to-Digital Converter
--------------------------------------------------------------------------------
*/

typedef struct ADC_struct
{
    register8_t rsv_0x00[117]; /* RESERVED REGISTER BLOCK */
    register8_t AMP0CSR;       /* Amplifier 0 Control and Status Register */
    register8_t AMP1CSR;       /* Amplifier 1 Control and Status Register */
    register8_t AMP2CSR;       /* Amplifier 2 Control and Status Register */
    _REGISTER16 (ADC);         /* ADC Data Register Bytes */
    register8_t rsv_0x79;      /* RESERVED REGISTER */
    register8_t ADCSRA;        /* The ADC Control and Status register */
    register8_t ADCSRB;        /* ADC Control and Status Register B */
    register8_t ADMUX;         /* The ADC multiplexer Selection Register */
    register8_t rsv_0x7D;      /* RESERVED REGISTER */
    register8_t DIDR0;         /* Digital Input Disable Register 0 */
    register8_t DIDR1;         /* Digital Input Disable Register 0 */
} ADC_t;


/* Reference Selection Bits */
typedef enum ADC_REFS_enum
{
    ADC_REFS_VAL_0x00_gc = (0x00<<6), /* AREF, Internal Vref turned off */
    ADC_REFS_VAL_0x01_gc = (0x01<<6), /* AVCC reference */
    ADC_REFS_VAL_0x02_gc = (0x02<<6), /* Reserved */
    ADC_REFS_VAL_0x03_gc = (0x03<<6), /* Internal 2.56V Voltage Reference */
} ADC_REFS_t;

/* Left Adjust Result */
typedef enum ADC_ADLAR_enum
{
    ADC_ADLAR_CLEAR_gc = (0x00), /* Left Adjust Result - CLEAR */
    ADC_ADLAR_SET_gc   = (0x20), /* Left Adjust Result - SET */
} ADC_ADLAR_t;

/* ADC channel selection bits */
typedef enum ADC_MUX_enum
{
    ADC_MUX_ADC0_gc      = (0x00), /* ADC input pin 0 */
    ADC_MUX_ADC1_gc      = (0x01), /* ADC input pin 1 */
    ADC_MUX_ADC2_gc      = (0x02), /* ADC input pin 2 */
    ADC_MUX_ADC3_gc      = (0x03), /* ADC input pin 3 */
    ADC_MUX_ADC4_gc      = (0x04), /* ADC input pin 4 */
    ADC_MUX_ADC5_gc      = (0x05), /* ADC input pin 5 */
    ADC_MUX_ADC6_gc      = (0x06), /* ADC input pin 6 */
    ADC_MUX_ADC7_gc      = (0x07), /* ADC input pin 7 */
    ADC_MUX_ADC8_gc      = (0x08), /* ADC input pin 8 */
    ADC_MUX_ADC9_gc      = (0x09), /* ADC input pin 9 */
    ADC_MUX_ADC10_gc     = (0x0A), /* ADC input pin 10 */
    ADC_MUX_TEMPSENSE_gc = (0x0B), /* Temperature sensor */
    ADC_MUX_VCC4_gc      = (0x0C), /* Internal VCC / 4 */
    ADC_MUX_ISRC_gc      = (0x0D), /* Current source */
    ADC_MUX_AMP0_gc      = (0x0E), /* Analog Differential Amplifier 0 */
    ADC_MUX_AMP1_gc      = (0x0F), /* Analog Differential Amplifier 1 */
    ADC_MUX_AMP2_gc      = (0x10), /* Analog Differential Amplifier 2 */
    ADC_MUX_BNDGAP_gc    = (0x11), /* Bandgap */
    ADC_MUX_GND_gc       = (0x12), /* 0V (GND) */
} ADC_MUX_t;

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
#define ADC_ADCSRA_ADPS_gc(x) (x & 0x07)

/* ADC High Speed Mode */
typedef enum ADC_ADHSM_enum
{
    ADC_ADHSM_CLEAR_gc = (0x00), /* ADC High Speed Mode - CLEAR */
    ADC_ADHSM_SET_gc   = (0x80), /* ADC High Speed Mode - SET */
} ADC_ADHSM_t;

/* Current Source Enable */
typedef enum ADC_ISRCEN_enum
{
    ADC_ISRCEN_CLEAR_gc = (0x00), /* Current Source Enable - CLEAR */
    ADC_ISRCEN_SET_gc   = (0x40), /* Current Source Enable - SET */
} ADC_ISRCEN_t;

/* Analog Reference pin Enable */
typedef enum ADC_AREFEN_enum
{
    ADC_AREFEN_CLEAR_gc = (0x00), /* Analog Reference pin Enable - CLEAR */
    ADC_AREFEN_SET_gc   = (0x20), /* Analog Reference pin Enable - SET */
} ADC_AREFEN_t;

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
    ADC_ADTS_VAL_0x08_gc = (0x08), /* PSC0ASY Event */
    ADC_ADTS_VAL_0x09_gc = (0x09), /* PSC1ASY Event */
    ADC_ADTS_VAL_0x0A_gc = (0x0A), /* PSC2ASY Event */
    ADC_ADTS_VAL_0x0B_gc = (0x0B), /* Analog comparator 1 */
    ADC_ADTS_VAL_0x0C_gc = (0x0C), /* Analog comparator 2 */
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

/* AMP2P Pin Digital input Disable */
typedef enum ADC_AMP2PD_enum
{
    ADC_AMP2PD_CLEAR_gc = (0x00), /* AMP2P Pin Digital input Disable - CLEAR */
    ADC_AMP2PD_SET_gc   = (0x40), /* AMP2P Pin Digital input Disable - SET */
} ADC_AMP2PD_t;

/* ACMP0 Pin Digital input Disable */
typedef enum ADC_ACMP0D_enum
{
    ADC_ACMP0D_CLEAR_gc = (0x00), /* ACMP0 Pin Digital input Disable - CLEAR */
    ADC_ACMP0D_SET_gc   = (0x20), /* ACMP0 Pin Digital input Disable - SET */
} ADC_ACMP0D_t;

/* AMP0P Pin Digital input Disable */
typedef enum ADC_AMP0PD_enum
{
    ADC_AMP0PD_CLEAR_gc = (0x00), /* AMP0P Pin Digital input Disable - CLEAR */
    ADC_AMP0PD_SET_gc   = (0x10), /* AMP0P Pin Digital input Disable - SET */
} ADC_AMP0PD_t;

/* AMP0N Pin Digital input Disable */
typedef enum ADC_AMP0ND_enum
{
    ADC_AMP0ND_CLEAR_gc = (0x00), /* AMP0N Pin Digital input Disable - CLEAR */
    ADC_AMP0ND_SET_gc   = (0x08), /* AMP0N Pin Digital input Disable - SET */
} ADC_AMP0ND_t;

/* ADC10 Pin Digital input Disable */
typedef enum ADC_ADC10D_enum
{
    ADC_ADC10D_CLEAR_gc = (0x00), /* ADC10 Pin Digital input Disable - CLEAR */
    ADC_ADC10D_SET_gc   = (0x04), /* ADC10 Pin Digital input Disable - SET */
} ADC_ADC10D_t;

/* ADC9 Pin Digital input Disable */
typedef enum ADC_ADC9D_enum
{
    ADC_ADC9D_CLEAR_gc = (0x00), /* ADC9 Pin Digital input Disable - CLEAR */
    ADC_ADC9D_SET_gc   = (0x02), /* ADC9 Pin Digital input Disable - SET */
} ADC_ADC9D_t;

/* ADC8 Pin Digital input Disable */
typedef enum ADC_ADC8D_enum
{
    ADC_ADC8D_CLEAR_gc = (0x00), /* ADC8 Pin Digital input Disable - CLEAR */
    ADC_ADC8D_SET_gc   = (0x01), /* ADC8 Pin Digital input Disable - SET */
} ADC_ADC8D_t;

/* Amplifier 0 Enable */
typedef enum ADC_AMP0EN_enum
{
    ADC_AMP0EN_CLEAR_gc = (0x00), /* Amplifier 0 Enable - CLEAR */
    ADC_AMP0EN_SET_gc   = (0x80), /* Amplifier 0 Enable - SET */
} ADC_AMP0EN_t;

/* Amplifier 0 Input Shunt */
typedef enum ADC_AMP0IS_enum
{
    ADC_AMP0IS_CLEAR_gc = (0x00), /* Amplifier 0 Input Shunt - CLEAR */
    ADC_AMP0IS_SET_gc   = (0x40), /* Amplifier 0 Input Shunt - SET */
} ADC_AMP0IS_t;

/* Amplifier 0 Gain Selection */
#define ADC_AMP0CSR_AMP0G_gc(x) ((x<<4) & 0x30)

/* Amplifier 0 - Comparator 0 connection */
typedef enum ADC_AMPCMP0_enum
{
    ADC_AMPCMP0_CLEAR_gc = (0x00), /* Amplifier 0 - Comparator 0 connection - CLEAR */
    ADC_AMPCMP0_SET_gc   = (0x08), /* Amplifier 0 - Comparator 0 connection - SET */
} ADC_AMPCMP0_t;

/* Amplifier 0 Clock Source Selection */
#define ADC_AMP0CSR_AMP0TS_gc(x) (x & 0x07)

/* Amplifier 1 Enable */
typedef enum ADC_AMP1EN_enum
{
    ADC_AMP1EN_CLEAR_gc = (0x00), /* Amplifier 1 Enable - CLEAR */
    ADC_AMP1EN_SET_gc   = (0x80), /* Amplifier 1 Enable - SET */
} ADC_AMP1EN_t;

/* Amplifier 1 Input Shunt */
typedef enum ADC_AMP1IS_enum
{
    ADC_AMP1IS_CLEAR_gc = (0x00), /* Amplifier 1 Input Shunt - CLEAR */
    ADC_AMP1IS_SET_gc   = (0x40), /* Amplifier 1 Input Shunt - SET */
} ADC_AMP1IS_t;

/* Amplifier 1 Gain Selection */
#define ADC_AMP1CSR_AMP1G_gc(x) ((x<<4) & 0x30)

/* Amplifier 1 - Comparator 1 Connection */
typedef enum ADC_AMPCMP1_enum
{
    ADC_AMPCMP1_CLEAR_gc = (0x00), /* Amplifier 1 - Comparator 1 Connection - CLEAR */
    ADC_AMPCMP1_SET_gc   = (0x08), /* Amplifier 1 - Comparator 1 Connection - SET */
} ADC_AMPCMP1_t;

/* Amplifier 1 Clock Source Selection */
#define ADC_AMP1CSR_AMP1TS_gc(x) (x & 0x07)

/* Amplifier 2 Enable */
typedef enum ADC_AMP2EN_enum
{
    ADC_AMP2EN_CLEAR_gc = (0x00), /* Amplifier 2 Enable - CLEAR */
    ADC_AMP2EN_SET_gc   = (0x80), /* Amplifier 2 Enable - SET */
} ADC_AMP2EN_t;

/* Amplifier 2 Input Shunt */
typedef enum ADC_AMP2IS_enum
{
    ADC_AMP2IS_CLEAR_gc = (0x00), /* Amplifier 2 Input Shunt - CLEAR */
    ADC_AMP2IS_SET_gc   = (0x40), /* Amplifier 2 Input Shunt - SET */
} ADC_AMP2IS_t;

/* Amplifier 2 Gain Selection */
#define ADC_AMP2CSR_AMP2G_gc(x) ((x<<4) & 0x30)

/* Amplifier 2 - Comparator 2 Connection */
typedef enum ADC_AMPCMP2_enum
{
    ADC_AMPCMP2_CLEAR_gc = (0x00), /* Amplifier 2 - Comparator 2 Connection - CLEAR */
    ADC_AMPCMP2_SET_gc   = (0x08), /* Amplifier 2 - Comparator 2 Connection - SET */
} ADC_AMPCMP2_t;

/* Amplifier 2 Clock Source Selection */
#define ADC_AMP2CSR_AMP2TS_gc(x) (x & 0x07)

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
    _REGISTER16 (LINBRR);      /* LIN Baud Rate Register */
    register8_t rsv_0xCE;      /* RESERVED REGISTER */
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
    register8_t PCMSK0;       /* Pin Change Mask Register 0 */
    register8_t PCMSK1;       /* Pin Change Mask Register 1 */
    register8_t PCMSK2;       /* Pin Change Mask Register 2 */
    register8_t PCMSK3;       /* Pin Change Mask Register 3 */
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

/* External Interrupt Sense Control 1 Bits */
typedef enum EXINT_ISC1_enum
{
    EXINT_ISC1_VAL_0x00_gc = (0x00<<2), /* Low Level of INTX */
    EXINT_ISC1_VAL_0x01_gc = (0x01<<2), /* Any Logical Change of INTX */
    EXINT_ISC1_VAL_0x02_gc = (0x02<<2), /* Falling Edge of INTX */
    EXINT_ISC1_VAL_0x03_gc = (0x03<<2), /* Rising Edge of INTX */
} EXINT_ISC1_t;

/* External Interrupt Sense Control 0 Bits */
typedef enum EXINT_ISC0_enum
{
    EXINT_ISC0_VAL_0x00_gc = (0x00), /* Low Level of INTX */
    EXINT_ISC0_VAL_0x01_gc = (0x01), /* Any Logical Change of INTX */
    EXINT_ISC0_VAL_0x02_gc = (0x02), /* Falling Edge of INTX */
    EXINT_ISC0_VAL_0x03_gc = (0x03), /* Rising Edge of INTX */
} EXINT_ISC0_t;

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
    _REGISTER16 (EEAR);       /* EEPROM Read/Write Access */
} EEPROM_t;


/* EEPROM Programming mode */
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
typedef enum EEPROM_EEMWE_enum
{
    EEPROM_EEMWE_CLEAR_gc = (0x00), /* EEPROM Master Write Enable - CLEAR */
    EEPROM_EEMWE_SET_gc   = (0x04), /* EEPROM Master Write Enable - SET */
} EEPROM_EEMWE_t;

/* EEPROM Write Enable */
typedef enum EEPROM_EEWE_enum
{
    EEPROM_EEWE_CLEAR_gc = (0x00), /* EEPROM Write Enable - CLEAR */
    EEPROM_EEWE_SET_gc   = (0x02), /* EEPROM Write Enable - SET */
} EEPROM_EEWE_t;

/* EEPROM Read Enable */
typedef enum EEPROM_EERE_enum
{
    EEPROM_EERE_CLEAR_gc = (0x00), /* EEPROM Read Enable - CLEAR */
    EEPROM_EERE_SET_gc   = (0x01), /* EEPROM Read Enable - SET */
} EEPROM_EERE_t;

/*
--------------------------------------------------------------------------------
PSC - Power Stage Controller
--------------------------------------------------------------------------------
*/

typedef struct PSC_struct
{
    register8_t rsv_0x00[160]; /* RESERVED REGISTER BLOCK */
    _REGISTER16 (POCR0SA);     /* PSC Module 0 Output Compare SA Register */
    register8_t rsv_0xA1;      /* RESERVED REGISTER */
    _REGISTER16 (POCR0RA);     /* PSC Module 0 Output Compare RA Register */
    register8_t rsv_0xA3;      /* RESERVED REGISTER */
    _REGISTER16 (POCR0SB);     /* PSC Module 0 Output Compare SB Register */
    register8_t rsv_0xA5;      /* RESERVED REGISTER */
    _REGISTER16 (POCR1SA);     /* PSC Module 1 Output Compare SA Register */
    register8_t rsv_0xA7;      /* RESERVED REGISTER */
    _REGISTER16 (POCR1RA);     /* PSC Module 1 Output Compare RA Register */
    register8_t rsv_0xA9;      /* RESERVED REGISTER */
    _REGISTER16 (POCR1SB);     /* PSC Module 1 Output Compare SB Register */
    register8_t rsv_0xAB;      /* RESERVED REGISTER */
    _REGISTER16 (POCR2SA);     /* PSC Module 2 Output Compare SA Register */
    register8_t rsv_0xAD;      /* RESERVED REGISTER */
    _REGISTER16 (POCR2RA);     /* PSC Module 2 Output Compare RA Register */
    register8_t rsv_0xAF;      /* RESERVED REGISTER */
    _REGISTER16 (POCR2SB);     /* PSC Module 2 Output Compare SB Register */
    register8_t rsv_0xB1;      /* RESERVED REGISTER */
    _REGISTER16 (POCR_RB);     /* PSC Output Compare RB Register */
    register8_t rsv_0xB3;      /* RESERVED REGISTER */
    register8_t PSYNC;         /* PSC Synchro Configuration */
    register8_t PCNF;          /* PSC Configuration Register */
    register8_t POC;           /* PSC Output Configuration */
    register8_t PCTL;          /* PSC Control Register */
    register8_t PMIC0;         /* PSC Module 0 Input Control Register */
    register8_t PMIC1;         /* PSC Module 1 Input Control Register */
    register8_t PMIC2;         /* PSC Module 2 Input Control Register */
    register8_t PIM;           /* PSC Interrupt Mask Register */
    register8_t PIFR;          /* PSC Interrupt Flag Register */
} PSC_t;


/* PSC External Event 2 Interrupt */
#define PSC_PIFR_PEV_gc(x) ((x<<1) & 0x0E)

/* PSC End of Cycle Interrupt */
typedef enum PSC_PEOP_enum
{
    PSC_PEOP_CLEAR_gc = (0x00), /* PSC End of Cycle Interrupt - CLEAR */
    PSC_PEOP_SET_gc   = (0x01), /* PSC End of Cycle Interrupt - SET */
} PSC_PEOP_t;

/* External Event 2 Interrupt Enable */
#define PSC_PIM_PEVE_gc(x) ((x<<1) & 0x0E)

/* PSC End of Cycle Interrupt Enable */
typedef enum PSC_PEOPE_enum
{
    PSC_PEOPE_CLEAR_gc = (0x00), /* PSC End of Cycle Interrupt Enable - CLEAR */
    PSC_PEOPE_SET_gc   = (0x01), /* PSC End of Cycle Interrupt Enable - SET */
} PSC_PEOPE_t;

/* PSC Module 2 Overlap Enable */
typedef enum PSC_POVEN2_enum
{
    PSC_POVEN2_CLEAR_gc = (0x00), /* PSC Module 2 Overlap Enable - CLEAR */
    PSC_POVEN2_SET_gc   = (0x80), /* PSC Module 2 Overlap Enable - SET */
} PSC_POVEN2_t;

/* PSC Module 2 Input Select */
typedef enum PSC_PISEL2_enum
{
    PSC_PISEL2_CLEAR_gc = (0x00), /* PSC Module 2 Input Select - CLEAR */
    PSC_PISEL2_SET_gc   = (0x40), /* PSC Module 2 Input Select - SET */
} PSC_PISEL2_t;

/* PSC Module 2 Input Level Selector */
typedef enum PSC_PELEV2_enum
{
    PSC_PELEV2_CLEAR_gc = (0x00), /* PSC Module 2 Input Level Selector - CLEAR */
    PSC_PELEV2_SET_gc   = (0x20), /* PSC Module 2 Input Level Selector - SET */
} PSC_PELEV2_t;

/* PSC Module 2 Input Filter Enable */
typedef enum PSC_PFLTE2_enum
{
    PSC_PFLTE2_CLEAR_gc = (0x00), /* PSC Module 2 Input Filter Enable - CLEAR */
    PSC_PFLTE2_SET_gc   = (0x10), /* PSC Module 2 Input Filter Enable - SET */
} PSC_PFLTE2_t;

/* PSC Module 2 Asynchronous Output Control */
typedef enum PSC_PAOC2_enum
{
    PSC_PAOC2_CLEAR_gc = (0x00), /* PSC Module 2 Asynchronous Output Control - CLEAR */
    PSC_PAOC2_SET_gc   = (0x08), /* PSC Module 2 Asynchronous Output Control - SET */
} PSC_PAOC2_t;

/* PSC Module 2 Input Mode bits */
#define PSC_PMIC2_PRFM2_gc(x) (x & 0x07)

/* PSC Module 1 Overlap Enable */
typedef enum PSC_POVEN1_enum
{
    PSC_POVEN1_CLEAR_gc = (0x00), /* PSC Module 1 Overlap Enable - CLEAR */
    PSC_POVEN1_SET_gc   = (0x80), /* PSC Module 1 Overlap Enable - SET */
} PSC_POVEN1_t;

/* PSC Module 1 Input Select */
typedef enum PSC_PISEL1_enum
{
    PSC_PISEL1_CLEAR_gc = (0x00), /* PSC Module 1 Input Select - CLEAR */
    PSC_PISEL1_SET_gc   = (0x40), /* PSC Module 1 Input Select - SET */
} PSC_PISEL1_t;

/* PSC Module 1 Input Level Selector */
typedef enum PSC_PELEV1_enum
{
    PSC_PELEV1_CLEAR_gc = (0x00), /* PSC Module 1 Input Level Selector - CLEAR */
    PSC_PELEV1_SET_gc   = (0x20), /* PSC Module 1 Input Level Selector - SET */
} PSC_PELEV1_t;

/* PSC Module 1 Input Filter Enable */
typedef enum PSC_PFLTE1_enum
{
    PSC_PFLTE1_CLEAR_gc = (0x00), /* PSC Module 1 Input Filter Enable - CLEAR */
    PSC_PFLTE1_SET_gc   = (0x10), /* PSC Module 1 Input Filter Enable - SET */
} PSC_PFLTE1_t;

/* PSC Module 1 Asynchronous Output Control */
typedef enum PSC_PAOC1_enum
{
    PSC_PAOC1_CLEAR_gc = (0x00), /* PSC Module 1 Asynchronous Output Control - CLEAR */
    PSC_PAOC1_SET_gc   = (0x08), /* PSC Module 1 Asynchronous Output Control - SET */
} PSC_PAOC1_t;

/* PSC Module 1 Input Mode bits */
#define PSC_PMIC1_PRFM1_gc(x) (x & 0x07)

/* PSC Module 0 Overlap Enable */
typedef enum PSC_POVEN0_enum
{
    PSC_POVEN0_CLEAR_gc = (0x00), /* PSC Module 0 Overlap Enable - CLEAR */
    PSC_POVEN0_SET_gc   = (0x80), /* PSC Module 0 Overlap Enable - SET */
} PSC_POVEN0_t;

/* PSC Module 0 Input Select */
typedef enum PSC_PISEL0_enum
{
    PSC_PISEL0_CLEAR_gc = (0x00), /* PSC Module 0 Input Select - CLEAR */
    PSC_PISEL0_SET_gc   = (0x40), /* PSC Module 0 Input Select - SET */
} PSC_PISEL0_t;

/* PSC Module 0 Input Level Selector */
typedef enum PSC_PELEV0_enum
{
    PSC_PELEV0_CLEAR_gc = (0x00), /* PSC Module 0 Input Level Selector - CLEAR */
    PSC_PELEV0_SET_gc   = (0x20), /* PSC Module 0 Input Level Selector - SET */
} PSC_PELEV0_t;

/* PSC Module 0 Input Filter Enable */
typedef enum PSC_PFLTE0_enum
{
    PSC_PFLTE0_CLEAR_gc = (0x00), /* PSC Module 0 Input Filter Enable - CLEAR */
    PSC_PFLTE0_SET_gc   = (0x10), /* PSC Module 0 Input Filter Enable - SET */
} PSC_PFLTE0_t;

/* PSC Module 0 Asynchronous Output Control */
typedef enum PSC_PAOC0_enum
{
    PSC_PAOC0_CLEAR_gc = (0x00), /* PSC Module 0 Asynchronous Output Control - CLEAR */
    PSC_PAOC0_SET_gc   = (0x08), /* PSC Module 0 Asynchronous Output Control - SET */
} PSC_PAOC0_t;

/* PSC Module 0 Input Mode bits */
#define PSC_PMIC0_PRFM0_gc(x) (x & 0x07)

/* PSC Prescaler Select bits */
#define PSC_PCTL_PPRE_gc(x) ((x<<6) & 0xC0)

/* PSC Input Clock Select */
typedef enum PSC_PCLKSEL_enum
{
    PSC_PCLKSEL_CLEAR_gc = (0x00), /* PSC Input Clock Select - CLEAR */
    PSC_PCLKSEL_SET_gc   = (0x20), /* PSC Input Clock Select - SET */
} PSC_PCLKSEL_t;

/* PSC Complete Cycle */
typedef enum PSC_PCCYC_enum
{
    PSC_PCCYC_CLEAR_gc = (0x00), /* PSC Complete Cycle - CLEAR */
    PSC_PCCYC_SET_gc   = (0x02), /* PSC Complete Cycle - SET */
} PSC_PCCYC_t;

/* PSC Run */
typedef enum PSC_PRUN_enum
{
    PSC_PRUN_CLEAR_gc = (0x00), /* PSC Run - CLEAR */
    PSC_PRUN_SET_gc   = (0x01), /* PSC Run - SET */
} PSC_PRUN_t;

/* PSC Output 2B Enable */
typedef enum PSC_POEN2B_enum
{
    PSC_POEN2B_CLEAR_gc = (0x00), /* PSC Output 2B Enable - CLEAR */
    PSC_POEN2B_SET_gc   = (0x20), /* PSC Output 2B Enable - SET */
} PSC_POEN2B_t;

/* PSC Output 2A Enable */
typedef enum PSC_POEN2A_enum
{
    PSC_POEN2A_CLEAR_gc = (0x00), /* PSC Output 2A Enable - CLEAR */
    PSC_POEN2A_SET_gc   = (0x10), /* PSC Output 2A Enable - SET */
} PSC_POEN2A_t;

/* PSC Output 1B Enable */
typedef enum PSC_POEN1B_enum
{
    PSC_POEN1B_CLEAR_gc = (0x00), /* PSC Output 1B Enable - CLEAR */
    PSC_POEN1B_SET_gc   = (0x08), /* PSC Output 1B Enable - SET */
} PSC_POEN1B_t;

/* PSC Output 1A Enable */
typedef enum PSC_POEN1A_enum
{
    PSC_POEN1A_CLEAR_gc = (0x00), /* PSC Output 1A Enable - CLEAR */
    PSC_POEN1A_SET_gc   = (0x04), /* PSC Output 1A Enable - SET */
} PSC_POEN1A_t;

/* PSC Output 0B Enable */
typedef enum PSC_POEN0B_enum
{
    PSC_POEN0B_CLEAR_gc = (0x00), /* PSC Output 0B Enable - CLEAR */
    PSC_POEN0B_SET_gc   = (0x02), /* PSC Output 0B Enable - SET */
} PSC_POEN0B_t;

/* PSC Output 0A Enable */
typedef enum PSC_POEN0A_enum
{
    PSC_POEN0A_CLEAR_gc = (0x00), /* PSC Output 0A Enable - CLEAR */
    PSC_POEN0A_SET_gc   = (0x01), /* PSC Output 0A Enable - SET */
} PSC_POEN0A_t;

/* PSC Update Lock */
typedef enum PSC_PULOCK_enum
{
    PSC_PULOCK_CLEAR_gc = (0x00), /* PSC Update Lock - CLEAR */
    PSC_PULOCK_SET_gc   = (0x20), /* PSC Update Lock - SET */
} PSC_PULOCK_t;

/* PSC Mode */
typedef enum PSC_PMODE_enum
{
    PSC_PMODE_CLEAR_gc = (0x00), /* PSC Mode - CLEAR */
    PSC_PMODE_SET_gc   = (0x10), /* PSC Mode - SET */
} PSC_PMODE_t;

/* PSC Output B Polarity */
typedef enum PSC_POPB_enum
{
    PSC_POPB_CLEAR_gc = (0x00), /* PSC Output B Polarity - CLEAR */
    PSC_POPB_SET_gc   = (0x08), /* PSC Output B Polarity - SET */
} PSC_POPB_t;

/* PSC Output A Polarity */
typedef enum PSC_POPA_enum
{
    PSC_POPA_CLEAR_gc = (0x00), /* PSC Output A Polarity - CLEAR */
    PSC_POPA_SET_gc   = (0x04), /* PSC Output A Polarity - SET */
} PSC_POPA_t;

/* Selection of Synchronization Out for ADC */
#define PSC_PSYNC_PSYNC2_gc(x) ((x<<4) & 0x30)

/* Selection of Synchronization Out for ADC */
#define PSC_PSYNC_PSYNC1_gc(x) ((x<<2) & 0x0C)

/* Selection of Synchronization Out for ADC */
#define PSC_PSYNC_PSYNC0_gc(x) (x & 0x03)
/*
================================================================================
IO Module Instances. Mapped to memory.
================================================================================
*/

#define PORTB   (*(PORTB_t *) 0x0000)   /* I/O Port */
#define PORTC   (*(PORTC_t *) 0x0000)   /* I/O Port */
#define PORTD   (*(PORTD_t *) 0x0000)   /* I/O Port */
#define PORTE   (*(PORTE_t *) 0x0000)   /* I/O Port */
#define CAN     (*(CAN_t *) 0x0000)     /* Controller Area Network */
#define AC      (*(AC_t *) 0x0000)      /* Analog Comparator */
#define DAC     (*(DAC_t *) 0x0000)     /* Digital-to-Analog Converter */
#define CPU     (*(CPU_t *) 0x0000)     /* CPU Registers */
#define TC0     (*(TC0_t *) 0x0000)     /* Timer/Counter, 8-bit */
#define TC1     (*(TC1_t *) 0x0000)     /* Timer/Counter, 16-bit */
#define ADC     (*(ADC_t *) 0x0000)     /* Analog-to-Digital Converter */
#define LINUART (*(LINUART_t *) 0x0000) /* Local Interconnect Network */
#define SPI     (*(SPI_t *) 0x0000)     /* Serial Peripheral Interface */
#define WDT     (*(WDT_t *) 0x0000)     /* Watchdog Timer */
#define EXINT   (*(EXINT_t *) 0x0000)   /* External Interrupts */
#define EEPROM  (*(EEPROM_t *) 0x0000)  /* EEPROM */
#define PSC     (*(PSC_t *) 0x0000)     /* Power Stage Controller */
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


/* PSC Reset Behavior */
#define FUSE_PSCRB_CLEAR_gc (0x00) /* PSC Reset Behavior - CLEAR */
#define FUSE_PSCRB_SET_gc   (0x20) /* PSC Reset Behavior - SET */


/* PSCOUTnA Reset Value */
#define FUSE_PSCRVA_CLEAR_gc (0x00) /* PSCOUTnA Reset Value - CLEAR */
#define FUSE_PSCRVA_SET_gc   (0x10) /* PSCOUTnA Reset Value - SET */


/* PSC0UTnB Reset Value */
#define FUSE_PSCRVB_CLEAR_gc (0x00) /* PSC0UTnB Reset Value - CLEAR */
#define FUSE_PSCRVB_SET_gc   (0x08) /* PSC0UTnB Reset Value - SET */


/* Brown-out Detector Trigger Level */
#define FUSE_BODLEVEL_DISABLED_gc (0x07) /* Brown-out detection disabled */
#define FUSE_BODLEVEL_4V5_gc      (0x06) /* Brown-out detection at VCC=4.5 V */
#define FUSE_BODLEVEL_2V7_gc      (0x05) /* Brown-out detection at VCC=2.7 V */
#define FUSE_BODLEVEL_4V3_gc      (0x04) /* Brown-out detection at VCC=4.3 V */
#define FUSE_BODLEVEL_4V4_gc      (0x03) /* Brown-out detection at VCC=4.4 V */
#define FUSE_BODLEVEL_4V2_gc      (0x02) /* Brown-out detection at VCC=4.2 V */
#define FUSE_BODLEVEL_2V8_gc      (0x01) /* Brown-out detection at VCC=2.8 V */
#define FUSE_BODLEVEL_2V6_gc      (0x00) /* Brown-out detection at VCC=2.6 V */


/* Reset Disabled (Enable PC6 as i/o pin) */
#define FUSE_RSTDISBL_CLEAR_gc (0x00) /* Reset Disabled (Enable PC6 as i/o pin) - CLEAR */
#define FUSE_RSTDISBL_SET_gc   (0x80) /* Reset Disabled (Enable PC6 as i/o pin) - SET */


/* Debug Wire enable */
#define FUSE_DWEN_CLEAR_gc (0x00) /* Debug Wire enable - CLEAR */
#define FUSE_DWEN_SET_gc   (0x40) /* Debug Wire enable - SET */


/* Serial program downloading (SPI) enabled */
#define FUSE_SPIEN_CLEAR_gc (0x00) /* Serial program downloading (SPI) enabled - CLEAR */
#define FUSE_SPIEN_SET_gc   (0x20) /* Serial program downloading (SPI) enabled - SET */


/* Watch-dog Timer always on */
#define FUSE_WDTON_CLEAR_gc (0x00) /* Watch-dog Timer always on - CLEAR */
#define FUSE_WDTON_SET_gc   (0x10) /* Watch-dog Timer always on - SET */


/* Preserve EEPROM through the Chip Erase cycle */
#define FUSE_EESAVE_CLEAR_gc (0x00) /* Preserve EEPROM through the Chip Erase cycle - CLEAR */
#define FUSE_EESAVE_SET_gc   (0x08) /* Preserve EEPROM through the Chip Erase cycle - SET */


/* Select Boot Size */
#define FUSE_BOOTSZ_256W_1F00_gc  (0x03<<1) /* Boot Flash size=256 words Boot address=$1F00 */
#define FUSE_BOOTSZ_512W_1E00_gc  (0x02<<1) /* Boot Flash size=512 words Boot address=$1E00 */
#define FUSE_BOOTSZ_1024W_1C00_gc (0x01<<1) /* Boot Flash size=1024 words Boot address=$1C00 */
#define FUSE_BOOTSZ_2048W_1800_gc (0x00<<1) /* Boot Flash size=2048 words Boot address=$1800 */


/* Select Reset Vector */
#define FUSE_BOOTRST_CLEAR_gc (0x00) /* Select Reset Vector - CLEAR */
#define FUSE_BOOTRST_SET_gc   (0x01) /* Select Reset Vector - SET */


/* Divide clock by 8 internally */
#define FUSE_CKDIV8_CLEAR_gc (0x00) /* Divide clock by 8 internally - CLEAR */
#define FUSE_CKDIV8_SET_gc   (0x80) /* Divide clock by 8 internally - SET */


/* Clock output on PORTD1 */
#define FUSE_CKOUT_CLEAR_gc (0x00) /* Clock output on PORTD1 - CLEAR */
#define FUSE_CKOUT_SET_gc   (0x40) /* Clock output on PORTD1 - SET */


/* Select Clock Source */
#define FUSE_SUT_CKSEL_EXTCLK_6CK_14CK_0MS_gc                   (0x00) /* Ext. Clock; Start-up time PWRDWN/RESET: 6 CK/14 CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTCLK_6CK_14CK_4MS1_gc                  (0x10) /* Ext. Clock; Start-up time PWRDWN/RESET: 6 CK/14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTCLK_6CK_14CK_65MS_gc                  (0x20) /* Ext. Clock; Start-up time PWRDWN/RESET: 6 CK/14 CK + 65 ms */
#define FUSE_SUT_CKSEL_INTRCOSC_8MHZ_6CK_14CK_0MS_gc            (0x02) /* Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 0 ms */
#define FUSE_SUT_CKSEL_INTRCOSC_8MHZ_6CK_14CK_4MS1_gc           (0x12) /* Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_INTRCOSC_8MHZ_6CK_14CK_65MS_gc           (0x22) /* Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_258CK_14CK_4MS1_gc   (0x08) /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_258CK_14CK_65MS_gc   (0x18) /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_1KCK_14CK_0MS_gc     (0x28) /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_1KCK_14CK_4MS1_gc    (0x38) /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_1KCK_14CK_65MS_gc    (0x09) /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_16KCK_14CK_0MS_gc    (0x19) /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_16KCK_14CK_4MS1_gc   (0x29) /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_16KCK_14CK_65MS_gc   (0x39) /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_258CK_14CK_4MS1_gc    (0x0A) /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_258CK_14CK_65MS_gc    (0x1A) /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_1KCK_14CK_0MS_gc      (0x2A) /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_1KCK_14CK_4MS1_gc     (0x3A) /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_1KCK_14CK_65MS_gc     (0x0B) /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_16KCK_14CK_0MS_gc     (0x1B) /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_16KCK_14CK_4MS1_gc    (0x2B) /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_16KCK_14CK_65MS_gc    (0x3B) /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_258CK_14CK_4MS1_gc     (0x0C) /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_258CK_14CK_65MS_gc     (0x1C) /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_1KCK_14CK_0MS_gc       (0x2C) /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_1KCK_14CK_4MS1_gc      (0x3C) /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_1KCK_14CK_65MS_gc      (0x0D) /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_16KCK_14CK_0MS_gc      (0x1D) /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_16KCK_14CK_4MS1_gc     (0x2D) /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_16KCK_14CK_65MS_gc     (0x3D) /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_258CK_14CK_4MS1_gc       (0x0E) /* Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_258CK_14CK_65MS_gc       (0x1E) /* Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_1KCK_14CK_0MS_gc         (0x2E) /* Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_1KCK_14CK_4MS1_gc        (0x3E) /* Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_1KCK_14CK_65MS_gc        (0x0F) /* Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_16KCK_14CK_0MS_gc        (0x1F) /* Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_16KCK_14CK_4MS1_gc       (0x2F) /* Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_16KCK_14CK_65MS_gc       (0x3F) /* Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 65 ms */
#define FUSE_SUT_CKSEL_PLLCLK_16MHZ_1KCK_14CK_0MS_gc            (0x03) /* PLL clock 16 MHz; Start-up time PWRDWN/RESET: 1K CK/14 CK + 0 ms */
#define FUSE_SUT_CKSEL_PLLCLK_16MHZ_1KCK_14CK_4MS1_gc           (0x13) /* PLL clock 16 MHz; Start-up time PWRDWN/RESET: 1K CK/14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_PLLCLK_16MHZ_1KCK_14CK_65MS_gc           (0x23) /* PLL clock 16 MHz; Start-up time PWRDWN/RESET: 1K CK/14 CK + 65 ms */
#define FUSE_SUT_CKSEL_PLLCLK_16MHZ_16KCK_14CK_0MS_gc           (0x33) /* PLL clock 16 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 0 ms */
#define FUSE_SUT_CKSEL_PLLCLK_PLLIN_EXTCLK_6KCK_14CK_0MS_gc     (0x01) /* PLL clock /4; PLL input: Ext. Clock; Start-up time PWRDWN/RESET: 6K CK/14 CK + 0 ms */
#define FUSE_SUT_CKSEL_PLLCLK_PLLIN_EXTCLK_6KCK_14CK_4MS_gc     (0x11) /* PLL clock /4; PLL input: Ext. Clock; Start-up time PWRDWN/RESET: 6K CK/14 CK + 4 ms */
#define FUSE_SUT_CKSEL_PLLCLK_PLLIN_EXTCLK_6KCK_14CK_64MS_gc    (0x21) /* PLL clock /4; PLL input: Ext. Clock; Start-up time PWRDWN/RESET: 6K CK/14 CK + 64 ms */
#define FUSE_SUT_CKSEL_PLLCLK_PLLIN_EXTXOSC_1KCK_14CK_0MS_gc    (0x05) /* PLL clock /4; PLL input: Ext. Crystal Osc.; Start-up time PWRDWN/RESET: 1K CK/14 CK + 0 ms */
#define FUSE_SUT_CKSEL_PLLCLK_PLLIN_EXTXOSC_1KCK_14CK_4MS_gc    (0x15) /* PLL clock /4; PLL input: Ext. Crystal Osc.; Start-up time PWRDWN/RESET: 1K CK/14 CK + 4 ms */
#define FUSE_SUT_CKSEL_PLLCLK_PLLIN_EXTXOSC_16KCK_14CK_4MS_gc   (0x25) /* PLL clock /4; PLL input: Ext. Crystal Osc.; Start-up time PWRDWN/RESET: 16K CK/14 CK + 4 ms */
#define FUSE_SUT_CKSEL_PLLCLK_PLLIN_EXTXOSC_16KCK_14CK_64MS_gc  (0x35) /* PLL clock /4; PLL input: Ext. Crystal Osc.; Start-up time PWRDWN/RESET: 16K CK/14 CK + 64 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_PLLIN_EXTXOSC_1KCK_14CK_0MS_gc   (0x04) /* Ext. Crystal Osc.; PLL input: Ext. Crystal Osc.; Start-up time PWRDWN/RESET: 1K CK/14 CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_PLLIN_EXTXOSC_1KCK_14CK_4MS_gc   (0x14) /* Ext. Crystal Osc.; PLL input: Ext. Crystal Osc.; Start-up time PWRDWN/RESET: 1K CK/14 CK + 4 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_PLLIN_EXTXOSC_16KCK_14CK_4MS_gc  (0x24) /* Ext. Crystal Osc.; PLL input: Ext. Crystal Osc.; Start-up time PWRDWN/RESET: 16K CK/14 CK + 4 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_PLLIN_EXTXOSC_16KCK_14CK_64MS_gc (0x34) /* Ext. Crystal Osc.; PLL input: Ext. Crystal Osc.; Start-up time PWRDWN/RESET: 16K CK/14 CK + 64 ms */


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
CAN - Controller Area Network
--------------------------------------------------------------------------------
*/


/* Abort Request */
#define CAN_ABRQ_CLEAR_gc (0x00) /* Abort Request - CLEAR */
#define CAN_ABRQ_SET_gc   (0x80) /* Abort Request - SET */


/* Overload Frame Request */
#define CAN_OVRQ_CLEAR_gc (0x00) /* Overload Frame Request - CLEAR */
#define CAN_OVRQ_SET_gc   (0x40) /* Overload Frame Request - SET */


/* Time Trigger Communication */
#define CAN_TTC_CLEAR_gc (0x00) /* Time Trigger Communication - CLEAR */
#define CAN_TTC_SET_gc   (0x20) /* Time Trigger Communication - SET */


/* Synchronization of TTC */
#define CAN_SYNTTC_CLEAR_gc (0x00) /* Synchronization of TTC - CLEAR */
#define CAN_SYNTTC_SET_gc   (0x10) /* Synchronization of TTC - SET */


/* Listening Mode */
#define CAN_LISTEN_CLEAR_gc (0x00) /* Listening Mode - CLEAR */
#define CAN_LISTEN_SET_gc   (0x08) /* Listening Mode - SET */


/* Test Mode */
#define CAN_TEST_CLEAR_gc (0x00) /* Test Mode - CLEAR */
#define CAN_TEST_SET_gc   (0x04) /* Test Mode - SET */


/* Enable / Standby */
#define CAN_ENASTB_CLEAR_gc (0x00) /* Enable / Standby - CLEAR */
#define CAN_ENASTB_SET_gc   (0x02) /* Enable / Standby - SET */


/* Software Reset Request */
#define CAN_SWRES_CLEAR_gc (0x00) /* Software Reset Request - CLEAR */
#define CAN_SWRES_SET_gc   (0x01) /* Software Reset Request - SET */


/* Overload Frame Flag */
#define CAN_OVFG_CLEAR_gc (0x00) /* Overload Frame Flag - CLEAR */
#define CAN_OVFG_SET_gc   (0x40) /* Overload Frame Flag - SET */


/* Transmitter Busy */
#define CAN_TXBSY_CLEAR_gc (0x00) /* Transmitter Busy - CLEAR */
#define CAN_TXBSY_SET_gc   (0x10) /* Transmitter Busy - SET */


/* Receiver Busy */
#define CAN_RXBSY_CLEAR_gc (0x00) /* Receiver Busy - CLEAR */
#define CAN_RXBSY_SET_gc   (0x08) /* Receiver Busy - SET */


/* Enable Flag */
#define CAN_ENFG_CLEAR_gc (0x00) /* Enable Flag - CLEAR */
#define CAN_ENFG_SET_gc   (0x04) /* Enable Flag - SET */


/* Bus Off Mode */
#define CAN_BOFF_CLEAR_gc (0x00) /* Bus Off Mode - CLEAR */
#define CAN_BOFF_SET_gc   (0x02) /* Bus Off Mode - SET */


/* Error Passive Mode */
#define CAN_ERRP_CLEAR_gc (0x00) /* Error Passive Mode - CLEAR */
#define CAN_ERRP_SET_gc   (0x01) /* Error Passive Mode - SET */


/* General Interrupt Flag */
#define CAN_CANIT_CLEAR_gc (0x00) /* General Interrupt Flag - CLEAR */
#define CAN_CANIT_SET_gc   (0x80) /* General Interrupt Flag - SET */


/* Bus Off Interrupt Flag */
#define CAN_BOFFIT_CLEAR_gc (0x00) /* Bus Off Interrupt Flag - CLEAR */
#define CAN_BOFFIT_SET_gc   (0x40) /* Bus Off Interrupt Flag - SET */


/* Overrun CAN Timer Flag */
#define CAN_OVRTIM_CLEAR_gc (0x00) /* Overrun CAN Timer Flag - CLEAR */
#define CAN_OVRTIM_SET_gc   (0x20) /* Overrun CAN Timer Flag - SET */


/* Burst Receive Interrupt Flag */
#define CAN_BXOK_CLEAR_gc (0x00) /* Burst Receive Interrupt Flag - CLEAR */
#define CAN_BXOK_SET_gc   (0x10) /* Burst Receive Interrupt Flag - SET */


/* Stuff Error General Flag */
#define CAN_SERG_CLEAR_gc (0x00) /* Stuff Error General Flag - CLEAR */
#define CAN_SERG_SET_gc   (0x08) /* Stuff Error General Flag - SET */


/* CRC Error General Flag */
#define CAN_CERG_CLEAR_gc (0x00) /* CRC Error General Flag - CLEAR */
#define CAN_CERG_SET_gc   (0x04) /* CRC Error General Flag - SET */


/* Form Error General Flag */
#define CAN_FERG_CLEAR_gc (0x00) /* Form Error General Flag - CLEAR */
#define CAN_FERG_SET_gc   (0x02) /* Form Error General Flag - SET */


/* Ackknowledgement Error General Flag */
#define CAN_AERG_CLEAR_gc (0x00) /* Ackknowledgement Error General Flag - CLEAR */
#define CAN_AERG_SET_gc   (0x01) /* Ackknowledgement Error General Flag - SET */


/* Enable all Interrupts */
#define CAN_ENIT_CLEAR_gc (0x00) /* Enable all Interrupts - CLEAR */
#define CAN_ENIT_SET_gc   (0x80) /* Enable all Interrupts - SET */


/* Enable Bus Off Interrupt */
#define CAN_ENBOFF_CLEAR_gc (0x00) /* Enable Bus Off Interrupt - CLEAR */
#define CAN_ENBOFF_SET_gc   (0x40) /* Enable Bus Off Interrupt - SET */


/* Enable Receive Interrupt */
#define CAN_ENRX_CLEAR_gc (0x00) /* Enable Receive Interrupt - CLEAR */
#define CAN_ENRX_SET_gc   (0x20) /* Enable Receive Interrupt - SET */


/* Enable Transmitt Interrupt */
#define CAN_ENTX_CLEAR_gc (0x00) /* Enable Transmitt Interrupt - CLEAR */
#define CAN_ENTX_SET_gc   (0x10) /* Enable Transmitt Interrupt - SET */


/* Enable MOb Error Interrupt */
#define CAN_ENERR_CLEAR_gc (0x00) /* Enable MOb Error Interrupt - CLEAR */
#define CAN_ENERR_SET_gc   (0x08) /* Enable MOb Error Interrupt - SET */


/* Enable Burst Receive Interrupt */
#define CAN_ENBX_CLEAR_gc (0x00) /* Enable Burst Receive Interrupt - CLEAR */
#define CAN_ENBX_SET_gc   (0x04) /* Enable Burst Receive Interrupt - SET */


/* Enable General Error Interrupt */
#define CAN_ENERG_CLEAR_gc (0x00) /* Enable General Error Interrupt - CLEAR */
#define CAN_ENERG_SET_gc   (0x02) /* Enable General Error Interrupt - SET */


/* Enable CAN Timer Overrun Interrupt */
#define CAN_ENOVRT_CLEAR_gc (0x00) /* Enable CAN Timer Overrun Interrupt - CLEAR */
#define CAN_ENOVRT_SET_gc   (0x01) /* Enable CAN Timer Overrun Interrupt - SET */


/* Re-Sync Jump Width bits */
#define CAN_CANBT2_SJW_gc(x) ((x<<5) & 0x60)

/* Propagation Time Segment bits */
#define CAN_CANBT2_PRS_gc(x) ((x<<1) & 0x0E)

/* Phase Segment 2 bits */
#define CAN_CANBT3_PHS2_gc(x) ((x<<4) & 0x70)

/* Phase Segment 1 bits */
#define CAN_CANBT3_PHS1_gc(x) ((x<<1) & 0x0E)

/* Sample Type */
#define CAN_SMP_CLEAR_gc (0x00) /* Sample Type - CLEAR */
#define CAN_SMP_SET_gc   (0x01) /* Sample Type - SET */


/* Highest Priority MOb Number bits */
#define CAN_CANHPMOB_HPMOB_gc(x) ((x<<4) & 0xF0)

/* CAN General Purpose bits */
#define CAN_CANHPMOB_CGP_gc(x) (x & 0x0F)

/* MOb Number bits */
#define CAN_CANPAGE_MOBNB_gc(x) ((x<<4) & 0xF0)

/* MOb Data Buffer Auto Increment (Active Low) */
#define CAN_AINC_CLEAR_gc (0x00) /* MOb Data Buffer Auto Increment (Active Low) - CLEAR */
#define CAN_AINC_SET_gc   (0x08) /* MOb Data Buffer Auto Increment (Active Low) - SET */


/* Data Buffer Index bits */
#define CAN_CANPAGE_INDX_gc(x) (x & 0x07)

/* Data Length Code Warning on MOb */
#define CAN_DLCW_CLEAR_gc (0x00) /* Data Length Code Warning on MOb - CLEAR */
#define CAN_DLCW_SET_gc   (0x80) /* Data Length Code Warning on MOb - SET */


/* Transmit OK on MOb */
#define CAN_TXOK_CLEAR_gc (0x00) /* Transmit OK on MOb - CLEAR */
#define CAN_TXOK_SET_gc   (0x40) /* Transmit OK on MOb - SET */


/* Receive OK on MOb */
#define CAN_RXOK_CLEAR_gc (0x00) /* Receive OK on MOb - CLEAR */
#define CAN_RXOK_SET_gc   (0x20) /* Receive OK on MOb - SET */


/* Bit Error on MOb */
#define CAN_BERR_CLEAR_gc (0x00) /* Bit Error on MOb - CLEAR */
#define CAN_BERR_SET_gc   (0x10) /* Bit Error on MOb - SET */


/* Stuff Error on MOb */
#define CAN_SERR_CLEAR_gc (0x00) /* Stuff Error on MOb - CLEAR */
#define CAN_SERR_SET_gc   (0x08) /* Stuff Error on MOb - SET */


/* CRC Error on MOb */
#define CAN_CERR_CLEAR_gc (0x00) /* CRC Error on MOb - CLEAR */
#define CAN_CERR_SET_gc   (0x04) /* CRC Error on MOb - SET */


/* Form Error on MOb */
#define CAN_FERR_CLEAR_gc (0x00) /* Form Error on MOb - CLEAR */
#define CAN_FERR_SET_gc   (0x02) /* Form Error on MOb - SET */


/* Ackknowledgement Error on MOb */
#define CAN_AERR_CLEAR_gc (0x00) /* Ackknowledgement Error on MOb - CLEAR */
#define CAN_AERR_SET_gc   (0x01) /* Ackknowledgement Error on MOb - SET */


/* MOb Config bits */
#define CAN_CANCDMOB_CONMOB_gc(x) ((x<<6) & 0xC0)

/* Reply Valid */
#define CAN_RPLV_CLEAR_gc (0x00) /* Reply Valid - CLEAR */
#define CAN_RPLV_SET_gc   (0x20) /* Reply Valid - SET */


/* Identifier Extension */
#define CAN_IDE_CLEAR_gc (0x00) /* Identifier Extension - CLEAR */
#define CAN_IDE_SET_gc   (0x10) /* Identifier Extension - SET */


/* Data Length Code bits */
#define CAN_CANCDMOB_DLC_gc(x) (x & 0x0F)

/* Identifier Tag */
#define CAN_CANIDT4_IDT_gc(x) ((x<<3) & 0xF8)

/* Remote Transmission Request Tag */
#define CAN_RTRTAG_CLEAR_gc (0x00) /* Remote Transmission Request Tag - CLEAR */
#define CAN_RTRTAG_SET_gc   (0x04) /* Remote Transmission Request Tag - SET */


/* Reserved Bit 1 Tag */
#define CAN_RB1TAG_CLEAR_gc (0x00) /* Reserved Bit 1 Tag - CLEAR */
#define CAN_RB1TAG_SET_gc   (0x02) /* Reserved Bit 1 Tag - SET */


/* Reserved Bit 0 Tag */
#define CAN_RB0TAG_CLEAR_gc (0x00) /* Reserved Bit 0 Tag - CLEAR */
#define CAN_RB0TAG_SET_gc   (0x01) /* Reserved Bit 0 Tag - SET */


/* Identifier Extension Mask */
#define CAN_IDEMSK_CLEAR_gc (0x00) /* Identifier Extension Mask - CLEAR */
#define CAN_IDEMSK_SET_gc   (0x01) /* Identifier Extension Mask - SET */


/* Remote Transmission Request Mask */
#define CAN_RTRMSK_CLEAR_gc (0x00) /* Remote Transmission Request Mask - CLEAR */
#define CAN_RTRMSK_SET_gc   (0x04) /* Remote Transmission Request Mask - SET */


/* Identifier Mask */
#define CAN_CANIDM4_IDMSK_gc(x) ((x<<3) & 0xF8)

/*
--------------------------------------------------------------------------------
AC - Analog Comparator
--------------------------------------------------------------------------------
*/


/* Analog Comparator 0 Enable Bit */
#define AC_AC0EN_CLEAR_gc (0x00) /* Analog Comparator 0 Enable Bit - CLEAR */
#define AC_AC0EN_SET_gc   (0x80) /* Analog Comparator 0 Enable Bit - SET */


/* Analog Comparator 0 Interrupt Enable Bit */
#define AC_AC0IE_CLEAR_gc (0x00) /* Analog Comparator 0 Interrupt Enable Bit - CLEAR */
#define AC_AC0IE_SET_gc   (0x40) /* Analog Comparator 0 Interrupt Enable Bit - SET */


/* Analog Comparator 0  Interrupt Select Bits */
#define AC_AC0CON_AC0IS_gc(x) ((x<<4) & 0x30)

/* Analog Comparator Clock Select */
#define AC_ACCKSEL_CLEAR_gc (0x00) /* Analog Comparator Clock Select - CLEAR */
#define AC_ACCKSEL_SET_gc   (0x08) /* Analog Comparator Clock Select - SET */


/* Analog Comparator 0 Multiplexer Register */
#define AC_AC0CON_AC0M_gc(x) (x & 0x07)

/* Analog Comparator 1 Enable Bit */
#define AC_AC1EN_CLEAR_gc (0x00) /* Analog Comparator 1 Enable Bit - CLEAR */
#define AC_AC1EN_SET_gc   (0x80) /* Analog Comparator 1 Enable Bit - SET */


/* Analog Comparator 1 Interrupt Enable Bit */
#define AC_AC1IE_CLEAR_gc (0x00) /* Analog Comparator 1 Interrupt Enable Bit - CLEAR */
#define AC_AC1IE_SET_gc   (0x40) /* Analog Comparator 1 Interrupt Enable Bit - SET */


/* Analog Comparator 1  Interrupt Select Bit */
#define AC_AC1IS_VAL_0x00_gc (0x00<<4) /* Interrupt on Toggle */
#define AC_AC1IS_VAL_0x01_gc (0x01<<4) /* Reserved */
#define AC_AC1IS_VAL_0x02_gc (0x02<<4) /* Interrupt on Falling Edge */
#define AC_AC1IS_VAL_0x03_gc (0x03<<4) /* Interrupt on Rising Edge */


/* Analog Comparator 1 Interrupt Capture Enable Bit */
#define AC_AC1ICE_CLEAR_gc (0x00) /* Analog Comparator 1 Interrupt Capture Enable Bit - CLEAR */
#define AC_AC1ICE_SET_gc   (0x08) /* Analog Comparator 1 Interrupt Capture Enable Bit - SET */


/* Analog Comparator 1 Multiplexer Register */
#define AC_AC1CON_AC1M_gc(x) (x & 0x07)

/* Analog Comparator 2 Enable Bit */
#define AC_AC2EN_CLEAR_gc (0x00) /* Analog Comparator 2 Enable Bit - CLEAR */
#define AC_AC2EN_SET_gc   (0x80) /* Analog Comparator 2 Enable Bit - SET */


/* Analog Comparator 2 Interrupt Enable Bit */
#define AC_AC2IE_CLEAR_gc (0x00) /* Analog Comparator 2 Interrupt Enable Bit - CLEAR */
#define AC_AC2IE_SET_gc   (0x40) /* Analog Comparator 2 Interrupt Enable Bit - SET */


/* Analog Comparator 2  Interrupt Select Bit */
#define AC_AC2IS_VAL_0x00_gc (0x00<<4) /* Interrupt on Toggle */
#define AC_AC2IS_VAL_0x01_gc (0x01<<4) /* Reserved */
#define AC_AC2IS_VAL_0x02_gc (0x02<<4) /* Interrupt on Falling Edge */
#define AC_AC2IS_VAL_0x03_gc (0x03<<4) /* Interrupt on Rising Edge */


/* Analog Comparator 2 Multiplexer Register */
#define AC_AC2CON_AC2M_gc(x) (x & 0x07)

/* Analog Comparator 3 Enable Bit */
#define AC_AC3EN_CLEAR_gc (0x00) /* Analog Comparator 3 Enable Bit - CLEAR */
#define AC_AC3EN_SET_gc   (0x80) /* Analog Comparator 3 Enable Bit - SET */


/* Analog Comparator 3 Interrupt Enable Bit */
#define AC_AC3IE_CLEAR_gc (0x00) /* Analog Comparator 3 Interrupt Enable Bit - CLEAR */
#define AC_AC3IE_SET_gc   (0x40) /* Analog Comparator 3 Interrupt Enable Bit - SET */


/* Analog Comparator 3  Interrupt Select Bit */
#define AC_AC3IS_VAL_0x00_gc (0x00<<4) /* Interrupt on Toggle */
#define AC_AC3IS_VAL_0x01_gc (0x01<<4) /* Reserved */
#define AC_AC3IS_VAL_0x02_gc (0x02<<4) /* Interrupt on Falling Edge */
#define AC_AC3IS_VAL_0x03_gc (0x03<<4) /* Interrupt on Rising Edge */


/* Analog Comparator 3 Multiplexer Register */
#define AC_AC3CON_AC3M_gc(x) (x & 0x07)

/* Analog Comparator 3 Interrupt Flag Bit */
#define AC_AC3IF_CLEAR_gc (0x00) /* Analog Comparator 3 Interrupt Flag Bit - CLEAR */
#define AC_AC3IF_SET_gc   (0x80) /* Analog Comparator 3 Interrupt Flag Bit - SET */


/* Analog Comparator 2 Interrupt Flag Bit */
#define AC_AC2IF_CLEAR_gc (0x00) /* Analog Comparator 2 Interrupt Flag Bit - CLEAR */
#define AC_AC2IF_SET_gc   (0x40) /* Analog Comparator 2 Interrupt Flag Bit - SET */


/* Analog Comparator 1  Interrupt Flag Bit */
#define AC_AC1IF_CLEAR_gc (0x00) /* Analog Comparator 1  Interrupt Flag Bit - CLEAR */
#define AC_AC1IF_SET_gc   (0x20) /* Analog Comparator 1  Interrupt Flag Bit - SET */


/* Analog Comparator 0 Interrupt Flag Bit */
#define AC_AC0IF_CLEAR_gc (0x00) /* Analog Comparator 0 Interrupt Flag Bit - CLEAR */
#define AC_AC0IF_SET_gc   (0x10) /* Analog Comparator 0 Interrupt Flag Bit - SET */


/* Analog Comparator 3 Output Bit */
#define AC_AC3O_CLEAR_gc (0x00) /* Analog Comparator 3 Output Bit - CLEAR */
#define AC_AC3O_SET_gc   (0x08) /* Analog Comparator 3 Output Bit - SET */


/* Analog Comparator 2 Output Bit */
#define AC_AC2O_CLEAR_gc (0x00) /* Analog Comparator 2 Output Bit - CLEAR */
#define AC_AC2O_SET_gc   (0x04) /* Analog Comparator 2 Output Bit - SET */


/* Analog Comparator 1 Output Bit */
#define AC_AC1O_CLEAR_gc (0x00) /* Analog Comparator 1 Output Bit - CLEAR */
#define AC_AC1O_SET_gc   (0x02) /* Analog Comparator 1 Output Bit - SET */


/* Analog Comparator 0 Output Bit */
#define AC_AC0O_CLEAR_gc (0x00) /* Analog Comparator 0 Output Bit - CLEAR */
#define AC_AC0O_SET_gc   (0x01) /* Analog Comparator 0 Output Bit - SET */


/*
--------------------------------------------------------------------------------
DAC - Digital-to-Analog Converter
--------------------------------------------------------------------------------
*/


/* DAC Auto Trigger Enable Bit */
#define DAC_DAATE_CLEAR_gc (0x00) /* DAC Auto Trigger Enable Bit - CLEAR */
#define DAC_DAATE_SET_gc   (0x80) /* DAC Auto Trigger Enable Bit - SET */


/* DAC Trigger Selection Bits */
#define DAC_DATS_VAL_0x00_gc (0x00<<4) /* Analog Comparator 0 */
#define DAC_DATS_VAL_0x01_gc (0x01<<4) /* Analog Comparator 1 */
#define DAC_DATS_VAL_0x02_gc (0x02<<4) /* External Interrupt Request 0 */
#define DAC_DATS_VAL_0x03_gc (0x03<<4) /* Timer/Counter0 Compare Match A */
#define DAC_DATS_VAL_0x04_gc (0x04<<4) /* Timer/Counter0 Overflow */
#define DAC_DATS_VAL_0x05_gc (0x05<<4) /* Timer/Counter1 Compare Match B */
#define DAC_DATS_VAL_0x06_gc (0x06<<4) /* Timer/Counter1 Overflow */
#define DAC_DATS_VAL_0x07_gc (0x07<<4) /* Timer/Counter1 Capture Event */


/* DAC Left Adjust */
#define DAC_DALA_CLEAR_gc (0x00) /* DAC Left Adjust - CLEAR */
#define DAC_DALA_SET_gc   (0x04) /* DAC Left Adjust - SET */


/* DAC Output Enable */
#define DAC_DAOE_CLEAR_gc (0x00) /* DAC Output Enable - CLEAR */
#define DAC_DAOE_SET_gc   (0x02) /* DAC Output Enable - SET */


/* DAC Enable Bit */
#define DAC_DAEN_CLEAR_gc (0x00) /* DAC Enable Bit - CLEAR */
#define DAC_DAEN_SET_gc   (0x01) /* DAC Enable Bit - SET */


/*
--------------------------------------------------------------------------------
CPU - CPU Registers
--------------------------------------------------------------------------------
*/


/* SPM Interrupt Enable */
#define CPU_SPMIE_CLEAR_gc (0x00) /* SPM Interrupt Enable - CLEAR */
#define CPU_SPMIE_SET_gc   (0x80) /* SPM Interrupt Enable - SET */


/* Read While Write Section Busy */
#define CPU_RWWSB_CLEAR_gc (0x00) /* Read While Write Section Busy - CLEAR */
#define CPU_RWWSB_SET_gc   (0x40) /* Read While Write Section Busy - SET */


/* Signature Row Read */
#define CPU_SIGRD_CLEAR_gc (0x00) /* Signature Row Read - CLEAR */
#define CPU_SIGRD_SET_gc   (0x20) /* Signature Row Read - SET */


/* Read While Write section read enable */
#define CPU_RWWSRE_CLEAR_gc (0x00) /* Read While Write section read enable - CLEAR */
#define CPU_RWWSRE_SET_gc   (0x10) /* Read While Write section read enable - SET */


/* Boot Lock Bit Set */
#define CPU_BLBSET_CLEAR_gc (0x00) /* Boot Lock Bit Set - CLEAR */
#define CPU_BLBSET_SET_gc   (0x08) /* Boot Lock Bit Set - SET */


/* Page Write */
#define CPU_PGWRT_CLEAR_gc (0x00) /* Page Write - CLEAR */
#define CPU_PGWRT_SET_gc   (0x04) /* Page Write - SET */


/* Page Erase */
#define CPU_PGERS_CLEAR_gc (0x00) /* Page Erase - CLEAR */
#define CPU_PGERS_SET_gc   (0x02) /* Page Erase - SET */


/* Store Program Memory Enable */
#define CPU_SPMEN_CLEAR_gc (0x00) /* Store Program Memory Enable - CLEAR */
#define CPU_SPMEN_SET_gc   (0x01) /* Store Program Memory Enable - SET */


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


/* SPI Pin Select */
#define CPU_SPIPS_CLEAR_gc (0x00) /* SPI Pin Select - CLEAR */
#define CPU_SPIPS_SET_gc   (0x80) /* SPI Pin Select - SET */


/* Pull-up disable */
#define CPU_PUD_CLEAR_gc (0x00) /* Pull-up disable - CLEAR */
#define CPU_PUD_SET_gc   (0x10) /* Pull-up disable - SET */


/* Interrupt Vector Select */
#define CPU_IVSEL_CLEAR_gc (0x00) /* Interrupt Vector Select - CLEAR */
#define CPU_IVSEL_SET_gc   (0x02) /* Interrupt Vector Select - SET */


/* Interrupt Vector Change Enable */
#define CPU_IVCE_CLEAR_gc (0x00) /* Interrupt Vector Change Enable - CLEAR */
#define CPU_IVCE_SET_gc   (0x01) /* Interrupt Vector Change Enable - SET */


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


/* Clock Prescaler Change Enable */
#define CPU_CLKPCE_CLEAR_gc (0x00) /* Clock Prescaler Change Enable - CLEAR */
#define CPU_CLKPCE_SET_gc   (0x80) /* Clock Prescaler Change Enable - SET */


/* Clock Prescaler Select */
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
#define CPU_SM_VAL_0x03_gc (0x03<<1) /* Reserved */
#define CPU_SM_VAL_0x04_gc (0x04<<1) /* Reserved */
#define CPU_SM_VAL_0x05_gc (0x05<<1) /* Reserved */
#define CPU_SM_STDBY_gc    (0x06<<1) /* Standby */
#define CPU_SM_VAL_0x07_gc (0x07<<1) /* Reserved */


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


/* PLL Factor */
#define CPU_PLLF_CLEAR_gc (0x00) /* PLL Factor - CLEAR */
#define CPU_PLLF_SET_gc   (0x04) /* PLL Factor - SET */


/* PLL Enable */
#define CPU_PLLE_CLEAR_gc (0x00) /* PLL Enable - CLEAR */
#define CPU_PLLE_SET_gc   (0x02) /* PLL Enable - SET */


/* PLL Lock Detector */
#define CPU_PLOCK_CLEAR_gc (0x00) /* PLL Lock Detector - CLEAR */
#define CPU_PLOCK_SET_gc   (0x01) /* PLL Lock Detector - SET */


/* Power Reduction CAN */
#define CPU_PRCAN_CLEAR_gc (0x00) /* Power Reduction CAN - CLEAR */
#define CPU_PRCAN_SET_gc   (0x40) /* Power Reduction CAN - SET */


/* Power Reduction PSC */
#define CPU_PRPSC_CLEAR_gc (0x00) /* Power Reduction PSC - CLEAR */
#define CPU_PRPSC_SET_gc   (0x20) /* Power Reduction PSC - SET */


/* Power Reduction Timer/Counter1 */
#define CPU_PRTIM1_CLEAR_gc (0x00) /* Power Reduction Timer/Counter1 - CLEAR */
#define CPU_PRTIM1_SET_gc   (0x10) /* Power Reduction Timer/Counter1 - SET */


/* Power Reduction Timer/Counter0 */
#define CPU_PRTIM0_CLEAR_gc (0x00) /* Power Reduction Timer/Counter0 - CLEAR */
#define CPU_PRTIM0_SET_gc   (0x08) /* Power Reduction Timer/Counter0 - SET */


/* Power Reduction Serial Peripheral Interface */
#define CPU_PRSPI_CLEAR_gc (0x00) /* Power Reduction Serial Peripheral Interface - CLEAR */
#define CPU_PRSPI_SET_gc   (0x04) /* Power Reduction Serial Peripheral Interface - SET */


/* Power Reduction LIN UART */
#define CPU_PRLIN_CLEAR_gc (0x00) /* Power Reduction LIN UART - CLEAR */
#define CPU_PRLIN_SET_gc   (0x02) /* Power Reduction LIN UART - SET */


/* Power Reduction ADC */
#define CPU_PRADC_CLEAR_gc (0x00) /* Power Reduction ADC - CLEAR */
#define CPU_PRADC_SET_gc   (0x01) /* Power Reduction ADC - SET */


/*
--------------------------------------------------------------------------------
TC8 - Timer/Counter, 8-bit
--------------------------------------------------------------------------------
*/


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


/* Compare Output Mode for Channel A */
#define TC0_TCCR0A_COM0A_gc(x) ((x<<6) & 0xC0)

/* Compare Output Mode for Channel B */
#define TC0_TCCR0A_COM0B_gc(x) ((x<<4) & 0x30)

/* Waveform Generation Mode */
#define TC0_TCCR0A_WGM0_gc(x) (x & 0x03)

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


/* Timer/Counter Synchronization Mode */
#define TC0_TSM_CLEAR_gc (0x00) /* Timer/Counter Synchronization Mode - CLEAR */
#define TC0_TSM_SET_gc   (0x80) /* Timer/Counter Synchronization Mode - SET */


/* Timer/Counter1 Input Capture Selection */
#define TC0_ICPSEL1_CLEAR_gc (0x00) /* Timer/Counter1 Input Capture Selection - CLEAR */
#define TC0_ICPSEL1_SET_gc   (0x40) /* Timer/Counter1 Input Capture Selection - SET */


/* Timer/Counter Prescaler Reset */
#define TC0_PSRSYNC_CLEAR_gc (0x00) /* Timer/Counter Prescaler Reset - CLEAR */
#define TC0_PSRSYNC_SET_gc   (0x01) /* Timer/Counter Prescaler Reset - SET */


/*
--------------------------------------------------------------------------------
TC16 - Timer/Counter, 16-bit
--------------------------------------------------------------------------------
*/


/* Timer/Counter1 Input Capture Interrupt Enable */
#define TC1_ICIE1_CLEAR_gc (0x00) /* Timer/Counter1 Input Capture Interrupt Enable - CLEAR */
#define TC1_ICIE1_SET_gc   (0x20) /* Timer/Counter1 Input Capture Interrupt Enable - SET */


/* Timer/Counter1 Output CompareB Match Interrupt Enable */
#define TC1_OCIE1B_CLEAR_gc (0x00) /* Timer/Counter1 Output CompareB Match Interrupt Enable - CLEAR */
#define TC1_OCIE1B_SET_gc   (0x04) /* Timer/Counter1 Output CompareB Match Interrupt Enable - SET */


/* Timer/Counter1 Output CompareA Match Interrupt Enable */
#define TC1_OCIE1A_CLEAR_gc (0x00) /* Timer/Counter1 Output CompareA Match Interrupt Enable - CLEAR */
#define TC1_OCIE1A_SET_gc   (0x02) /* Timer/Counter1 Output CompareA Match Interrupt Enable - SET */


/* Timer/Counter1 Overflow Interrupt Enable */
#define TC1_TOIE1_CLEAR_gc (0x00) /* Timer/Counter1 Overflow Interrupt Enable - CLEAR */
#define TC1_TOIE1_SET_gc   (0x01) /* Timer/Counter1 Overflow Interrupt Enable - SET */


/* Input Capture Flag 1 */
#define TC1_ICF1_CLEAR_gc (0x00) /* Input Capture Flag 1 - CLEAR */
#define TC1_ICF1_SET_gc   (0x20) /* Input Capture Flag 1 - SET */


/* Output Compare Flag 1B */
#define TC1_OCF1B_CLEAR_gc (0x00) /* Output Compare Flag 1B - CLEAR */
#define TC1_OCF1B_SET_gc   (0x04) /* Output Compare Flag 1B - SET */


/* Output Compare Flag 1A */
#define TC1_OCF1A_CLEAR_gc (0x00) /* Output Compare Flag 1A - CLEAR */
#define TC1_OCF1A_SET_gc   (0x02) /* Output Compare Flag 1A - SET */


/* Timer/Counter1 Overflow Flag */
#define TC1_TOV1_CLEAR_gc (0x00) /* Timer/Counter1 Overflow Flag - CLEAR */
#define TC1_TOV1_SET_gc   (0x01) /* Timer/Counter1 Overflow Flag - SET */


/* Compare Output Mode for Channel A */
#define TC1_TCCR1A_COM1A_gc(x) ((x<<6) & 0xC0)

/* Compare Output Mode for Channel B */
#define TC1_TCCR1A_COM1B_gc(x) ((x<<4) & 0x30)

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


/* Force Output Compare for Channel A */
#define TC1_FOC1A_CLEAR_gc (0x00) /* Force Output Compare for Channel A - CLEAR */
#define TC1_FOC1A_SET_gc   (0x80) /* Force Output Compare for Channel A - SET */


/* Force Output Compare for Channel B */
#define TC1_FOC1B_CLEAR_gc (0x00) /* Force Output Compare for Channel B - CLEAR */
#define TC1_FOC1B_SET_gc   (0x40) /* Force Output Compare for Channel B - SET */


/* Timer/Counter Synchronization Mode */
#define TC1_TSM_CLEAR_gc (0x00) /* Timer/Counter Synchronization Mode - CLEAR */
#define TC1_TSM_SET_gc   (0x80) /* Timer/Counter Synchronization Mode - SET */


/* Timer/Counter1 Input Capture Selection */
#define TC1_ICPSEL1_CLEAR_gc (0x00) /* Timer/Counter1 Input Capture Selection - CLEAR */
#define TC1_ICPSEL1_SET_gc   (0x40) /* Timer/Counter1 Input Capture Selection - SET */


/* Timer/Counter Prescaler Reset */
#define TC1_PSRSYNC_CLEAR_gc (0x00) /* Timer/Counter Prescaler Reset - CLEAR */
#define TC1_PSRSYNC_SET_gc   (0x01) /* Timer/Counter Prescaler Reset - SET */


/*
--------------------------------------------------------------------------------
ADC - Analog-to-Digital Converter
--------------------------------------------------------------------------------
*/


/* Reference Selection Bits */
#define ADC_REFS_VAL_0x00_gc (0x00<<6) /* AREF, Internal Vref turned off */
#define ADC_REFS_VAL_0x01_gc (0x01<<6) /* AVCC reference */
#define ADC_REFS_VAL_0x02_gc (0x02<<6) /* Reserved */
#define ADC_REFS_VAL_0x03_gc (0x03<<6) /* Internal 2.56V Voltage Reference */


/* Left Adjust Result */
#define ADC_ADLAR_CLEAR_gc (0x00) /* Left Adjust Result - CLEAR */
#define ADC_ADLAR_SET_gc   (0x20) /* Left Adjust Result - SET */


/* ADC channel selection bits */
#define ADC_MUX_ADC0_gc      (0x00) /* ADC input pin 0 */
#define ADC_MUX_ADC1_gc      (0x01) /* ADC input pin 1 */
#define ADC_MUX_ADC2_gc      (0x02) /* ADC input pin 2 */
#define ADC_MUX_ADC3_gc      (0x03) /* ADC input pin 3 */
#define ADC_MUX_ADC4_gc      (0x04) /* ADC input pin 4 */
#define ADC_MUX_ADC5_gc      (0x05) /* ADC input pin 5 */
#define ADC_MUX_ADC6_gc      (0x06) /* ADC input pin 6 */
#define ADC_MUX_ADC7_gc      (0x07) /* ADC input pin 7 */
#define ADC_MUX_ADC8_gc      (0x08) /* ADC input pin 8 */
#define ADC_MUX_ADC9_gc      (0x09) /* ADC input pin 9 */
#define ADC_MUX_ADC10_gc     (0x0A) /* ADC input pin 10 */
#define ADC_MUX_TEMPSENSE_gc (0x0B) /* Temperature sensor */
#define ADC_MUX_VCC4_gc      (0x0C) /* Internal VCC / 4 */
#define ADC_MUX_ISRC_gc      (0x0D) /* Current source */
#define ADC_MUX_AMP0_gc      (0x0E) /* Analog Differential Amplifier 0 */
#define ADC_MUX_AMP1_gc      (0x0F) /* Analog Differential Amplifier 1 */
#define ADC_MUX_AMP2_gc      (0x10) /* Analog Differential Amplifier 2 */
#define ADC_MUX_BNDGAP_gc    (0x11) /* Bandgap */
#define ADC_MUX_GND_gc       (0x12) /* 0V (GND) */


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
#define ADC_ADCSRA_ADPS_gc(x) (x & 0x07)

/* ADC High Speed Mode */
#define ADC_ADHSM_CLEAR_gc (0x00) /* ADC High Speed Mode - CLEAR */
#define ADC_ADHSM_SET_gc   (0x80) /* ADC High Speed Mode - SET */


/* Current Source Enable */
#define ADC_ISRCEN_CLEAR_gc (0x00) /* Current Source Enable - CLEAR */
#define ADC_ISRCEN_SET_gc   (0x40) /* Current Source Enable - SET */


/* Analog Reference pin Enable */
#define ADC_AREFEN_CLEAR_gc (0x00) /* Analog Reference pin Enable - CLEAR */
#define ADC_AREFEN_SET_gc   (0x20) /* Analog Reference pin Enable - SET */


/* ADC Auto Trigger Sources */
#define ADC_ADTS_VAL_0x00_gc (0x00) /* Free Running mode */
#define ADC_ADTS_VAL_0x01_gc (0x01) /* Analog Comparator */
#define ADC_ADTS_VAL_0x02_gc (0x02) /* External Interrupt Request 0 */
#define ADC_ADTS_VAL_0x03_gc (0x03) /* Timer/Counter0 Compare Match A */
#define ADC_ADTS_VAL_0x04_gc (0x04) /* Timer/Counter0 Overflow */
#define ADC_ADTS_VAL_0x05_gc (0x05) /* Timer/Counter1 Compare Match B */
#define ADC_ADTS_VAL_0x06_gc (0x06) /* Timer/Counter1 Overflow */
#define ADC_ADTS_VAL_0x07_gc (0x07) /* Timer/Counter1 Capture Event */
#define ADC_ADTS_VAL_0x08_gc (0x08) /* PSC0ASY Event */
#define ADC_ADTS_VAL_0x09_gc (0x09) /* PSC1ASY Event */
#define ADC_ADTS_VAL_0x0A_gc (0x0A) /* PSC2ASY Event */
#define ADC_ADTS_VAL_0x0B_gc (0x0B) /* Analog comparator 1 */
#define ADC_ADTS_VAL_0x0C_gc (0x0C) /* Analog comparator 2 */


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


/* AMP2P Pin Digital input Disable */
#define ADC_AMP2PD_CLEAR_gc (0x00) /* AMP2P Pin Digital input Disable - CLEAR */
#define ADC_AMP2PD_SET_gc   (0x40) /* AMP2P Pin Digital input Disable - SET */


/* ACMP0 Pin Digital input Disable */
#define ADC_ACMP0D_CLEAR_gc (0x00) /* ACMP0 Pin Digital input Disable - CLEAR */
#define ADC_ACMP0D_SET_gc   (0x20) /* ACMP0 Pin Digital input Disable - SET */


/* AMP0P Pin Digital input Disable */
#define ADC_AMP0PD_CLEAR_gc (0x00) /* AMP0P Pin Digital input Disable - CLEAR */
#define ADC_AMP0PD_SET_gc   (0x10) /* AMP0P Pin Digital input Disable - SET */


/* AMP0N Pin Digital input Disable */
#define ADC_AMP0ND_CLEAR_gc (0x00) /* AMP0N Pin Digital input Disable - CLEAR */
#define ADC_AMP0ND_SET_gc   (0x08) /* AMP0N Pin Digital input Disable - SET */


/* ADC10 Pin Digital input Disable */
#define ADC_ADC10D_CLEAR_gc (0x00) /* ADC10 Pin Digital input Disable - CLEAR */
#define ADC_ADC10D_SET_gc   (0x04) /* ADC10 Pin Digital input Disable - SET */


/* ADC9 Pin Digital input Disable */
#define ADC_ADC9D_CLEAR_gc (0x00) /* ADC9 Pin Digital input Disable - CLEAR */
#define ADC_ADC9D_SET_gc   (0x02) /* ADC9 Pin Digital input Disable - SET */


/* ADC8 Pin Digital input Disable */
#define ADC_ADC8D_CLEAR_gc (0x00) /* ADC8 Pin Digital input Disable - CLEAR */
#define ADC_ADC8D_SET_gc   (0x01) /* ADC8 Pin Digital input Disable - SET */


/* Amplifier 0 Enable */
#define ADC_AMP0EN_CLEAR_gc (0x00) /* Amplifier 0 Enable - CLEAR */
#define ADC_AMP0EN_SET_gc   (0x80) /* Amplifier 0 Enable - SET */


/* Amplifier 0 Input Shunt */
#define ADC_AMP0IS_CLEAR_gc (0x00) /* Amplifier 0 Input Shunt - CLEAR */
#define ADC_AMP0IS_SET_gc   (0x40) /* Amplifier 0 Input Shunt - SET */


/* Amplifier 0 Gain Selection */
#define ADC_AMP0CSR_AMP0G_gc(x) ((x<<4) & 0x30)

/* Amplifier 0 - Comparator 0 connection */
#define ADC_AMPCMP0_CLEAR_gc (0x00) /* Amplifier 0 - Comparator 0 connection - CLEAR */
#define ADC_AMPCMP0_SET_gc   (0x08) /* Amplifier 0 - Comparator 0 connection - SET */


/* Amplifier 0 Clock Source Selection */
#define ADC_AMP0CSR_AMP0TS_gc(x) (x & 0x07)

/* Amplifier 1 Enable */
#define ADC_AMP1EN_CLEAR_gc (0x00) /* Amplifier 1 Enable - CLEAR */
#define ADC_AMP1EN_SET_gc   (0x80) /* Amplifier 1 Enable - SET */


/* Amplifier 1 Input Shunt */
#define ADC_AMP1IS_CLEAR_gc (0x00) /* Amplifier 1 Input Shunt - CLEAR */
#define ADC_AMP1IS_SET_gc   (0x40) /* Amplifier 1 Input Shunt - SET */


/* Amplifier 1 Gain Selection */
#define ADC_AMP1CSR_AMP1G_gc(x) ((x<<4) & 0x30)

/* Amplifier 1 - Comparator 1 Connection */
#define ADC_AMPCMP1_CLEAR_gc (0x00) /* Amplifier 1 - Comparator 1 Connection - CLEAR */
#define ADC_AMPCMP1_SET_gc   (0x08) /* Amplifier 1 - Comparator 1 Connection - SET */


/* Amplifier 1 Clock Source Selection */
#define ADC_AMP1CSR_AMP1TS_gc(x) (x & 0x07)

/* Amplifier 2 Enable */
#define ADC_AMP2EN_CLEAR_gc (0x00) /* Amplifier 2 Enable - CLEAR */
#define ADC_AMP2EN_SET_gc   (0x80) /* Amplifier 2 Enable - SET */


/* Amplifier 2 Input Shunt */
#define ADC_AMP2IS_CLEAR_gc (0x00) /* Amplifier 2 Input Shunt - CLEAR */
#define ADC_AMP2IS_SET_gc   (0x40) /* Amplifier 2 Input Shunt - SET */


/* Amplifier 2 Gain Selection */
#define ADC_AMP2CSR_AMP2G_gc(x) ((x<<4) & 0x30)

/* Amplifier 2 - Comparator 2 Connection */
#define ADC_AMPCMP2_CLEAR_gc (0x00) /* Amplifier 2 - Comparator 2 Connection - CLEAR */
#define ADC_AMPCMP2_SET_gc   (0x08) /* Amplifier 2 - Comparator 2 Connection - SET */


/* Amplifier 2 Clock Source Selection */
#define ADC_AMP2CSR_AMP2TS_gc(x) (x & 0x07)

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


/* External Interrupt Sense Control 1 Bits */
#define EXINT_ISC1_VAL_0x00_gc (0x00<<2) /* Low Level of INTX */
#define EXINT_ISC1_VAL_0x01_gc (0x01<<2) /* Any Logical Change of INTX */
#define EXINT_ISC1_VAL_0x02_gc (0x02<<2) /* Falling Edge of INTX */
#define EXINT_ISC1_VAL_0x03_gc (0x03<<2) /* Rising Edge of INTX */


/* External Interrupt Sense Control 0 Bits */
#define EXINT_ISC0_VAL_0x00_gc (0x00) /* Low Level of INTX */
#define EXINT_ISC0_VAL_0x01_gc (0x01) /* Any Logical Change of INTX */
#define EXINT_ISC0_VAL_0x02_gc (0x02) /* Falling Edge of INTX */
#define EXINT_ISC0_VAL_0x03_gc (0x03) /* Rising Edge of INTX */


/*
--------------------------------------------------------------------------------
EEPROM - EEPROM
--------------------------------------------------------------------------------
*/


/* EEPROM Programming mode */
#define EEPROM_EEPM_VAL_0x00_gc (0x00<<4) /* Erase and Write in one operation */
#define EEPROM_EEPM_VAL_0x01_gc (0x01<<4) /* Erase Only */
#define EEPROM_EEPM_VAL_0x02_gc (0x02<<4) /* Write Only */


/* EEPROM Ready Interrupt Enable */
#define EEPROM_EERIE_CLEAR_gc (0x00) /* EEPROM Ready Interrupt Enable - CLEAR */
#define EEPROM_EERIE_SET_gc   (0x08) /* EEPROM Ready Interrupt Enable - SET */


/* EEPROM Master Write Enable */
#define EEPROM_EEMWE_CLEAR_gc (0x00) /* EEPROM Master Write Enable - CLEAR */
#define EEPROM_EEMWE_SET_gc   (0x04) /* EEPROM Master Write Enable - SET */


/* EEPROM Write Enable */
#define EEPROM_EEWE_CLEAR_gc (0x00) /* EEPROM Write Enable - CLEAR */
#define EEPROM_EEWE_SET_gc   (0x02) /* EEPROM Write Enable - SET */


/* EEPROM Read Enable */
#define EEPROM_EERE_CLEAR_gc (0x00) /* EEPROM Read Enable - CLEAR */
#define EEPROM_EERE_SET_gc   (0x01) /* EEPROM Read Enable - SET */


/*
--------------------------------------------------------------------------------
PSC - Power Stage Controller
--------------------------------------------------------------------------------
*/


/* PSC External Event 2 Interrupt */
#define PSC_PIFR_PEV_gc(x) ((x<<1) & 0x0E)

/* PSC End of Cycle Interrupt */
#define PSC_PEOP_CLEAR_gc (0x00) /* PSC End of Cycle Interrupt - CLEAR */
#define PSC_PEOP_SET_gc   (0x01) /* PSC End of Cycle Interrupt - SET */


/* External Event 2 Interrupt Enable */
#define PSC_PIM_PEVE_gc(x) ((x<<1) & 0x0E)

/* PSC End of Cycle Interrupt Enable */
#define PSC_PEOPE_CLEAR_gc (0x00) /* PSC End of Cycle Interrupt Enable - CLEAR */
#define PSC_PEOPE_SET_gc   (0x01) /* PSC End of Cycle Interrupt Enable - SET */


/* PSC Module 2 Overlap Enable */
#define PSC_POVEN2_CLEAR_gc (0x00) /* PSC Module 2 Overlap Enable - CLEAR */
#define PSC_POVEN2_SET_gc   (0x80) /* PSC Module 2 Overlap Enable - SET */


/* PSC Module 2 Input Select */
#define PSC_PISEL2_CLEAR_gc (0x00) /* PSC Module 2 Input Select - CLEAR */
#define PSC_PISEL2_SET_gc   (0x40) /* PSC Module 2 Input Select - SET */


/* PSC Module 2 Input Level Selector */
#define PSC_PELEV2_CLEAR_gc (0x00) /* PSC Module 2 Input Level Selector - CLEAR */
#define PSC_PELEV2_SET_gc   (0x20) /* PSC Module 2 Input Level Selector - SET */


/* PSC Module 2 Input Filter Enable */
#define PSC_PFLTE2_CLEAR_gc (0x00) /* PSC Module 2 Input Filter Enable - CLEAR */
#define PSC_PFLTE2_SET_gc   (0x10) /* PSC Module 2 Input Filter Enable - SET */


/* PSC Module 2 Asynchronous Output Control */
#define PSC_PAOC2_CLEAR_gc (0x00) /* PSC Module 2 Asynchronous Output Control - CLEAR */
#define PSC_PAOC2_SET_gc   (0x08) /* PSC Module 2 Asynchronous Output Control - SET */


/* PSC Module 2 Input Mode bits */
#define PSC_PMIC2_PRFM2_gc(x) (x & 0x07)

/* PSC Module 1 Overlap Enable */
#define PSC_POVEN1_CLEAR_gc (0x00) /* PSC Module 1 Overlap Enable - CLEAR */
#define PSC_POVEN1_SET_gc   (0x80) /* PSC Module 1 Overlap Enable - SET */


/* PSC Module 1 Input Select */
#define PSC_PISEL1_CLEAR_gc (0x00) /* PSC Module 1 Input Select - CLEAR */
#define PSC_PISEL1_SET_gc   (0x40) /* PSC Module 1 Input Select - SET */


/* PSC Module 1 Input Level Selector */
#define PSC_PELEV1_CLEAR_gc (0x00) /* PSC Module 1 Input Level Selector - CLEAR */
#define PSC_PELEV1_SET_gc   (0x20) /* PSC Module 1 Input Level Selector - SET */


/* PSC Module 1 Input Filter Enable */
#define PSC_PFLTE1_CLEAR_gc (0x00) /* PSC Module 1 Input Filter Enable - CLEAR */
#define PSC_PFLTE1_SET_gc   (0x10) /* PSC Module 1 Input Filter Enable - SET */


/* PSC Module 1 Asynchronous Output Control */
#define PSC_PAOC1_CLEAR_gc (0x00) /* PSC Module 1 Asynchronous Output Control - CLEAR */
#define PSC_PAOC1_SET_gc   (0x08) /* PSC Module 1 Asynchronous Output Control - SET */


/* PSC Module 1 Input Mode bits */
#define PSC_PMIC1_PRFM1_gc(x) (x & 0x07)

/* PSC Module 0 Overlap Enable */
#define PSC_POVEN0_CLEAR_gc (0x00) /* PSC Module 0 Overlap Enable - CLEAR */
#define PSC_POVEN0_SET_gc   (0x80) /* PSC Module 0 Overlap Enable - SET */


/* PSC Module 0 Input Select */
#define PSC_PISEL0_CLEAR_gc (0x00) /* PSC Module 0 Input Select - CLEAR */
#define PSC_PISEL0_SET_gc   (0x40) /* PSC Module 0 Input Select - SET */


/* PSC Module 0 Input Level Selector */
#define PSC_PELEV0_CLEAR_gc (0x00) /* PSC Module 0 Input Level Selector - CLEAR */
#define PSC_PELEV0_SET_gc   (0x20) /* PSC Module 0 Input Level Selector - SET */


/* PSC Module 0 Input Filter Enable */
#define PSC_PFLTE0_CLEAR_gc (0x00) /* PSC Module 0 Input Filter Enable - CLEAR */
#define PSC_PFLTE0_SET_gc   (0x10) /* PSC Module 0 Input Filter Enable - SET */


/* PSC Module 0 Asynchronous Output Control */
#define PSC_PAOC0_CLEAR_gc (0x00) /* PSC Module 0 Asynchronous Output Control - CLEAR */
#define PSC_PAOC0_SET_gc   (0x08) /* PSC Module 0 Asynchronous Output Control - SET */


/* PSC Module 0 Input Mode bits */
#define PSC_PMIC0_PRFM0_gc(x) (x & 0x07)

/* PSC Prescaler Select bits */
#define PSC_PCTL_PPRE_gc(x) ((x<<6) & 0xC0)

/* PSC Input Clock Select */
#define PSC_PCLKSEL_CLEAR_gc (0x00) /* PSC Input Clock Select - CLEAR */
#define PSC_PCLKSEL_SET_gc   (0x20) /* PSC Input Clock Select - SET */


/* PSC Complete Cycle */
#define PSC_PCCYC_CLEAR_gc (0x00) /* PSC Complete Cycle - CLEAR */
#define PSC_PCCYC_SET_gc   (0x02) /* PSC Complete Cycle - SET */


/* PSC Run */
#define PSC_PRUN_CLEAR_gc (0x00) /* PSC Run - CLEAR */
#define PSC_PRUN_SET_gc   (0x01) /* PSC Run - SET */


/* PSC Output 2B Enable */
#define PSC_POEN2B_CLEAR_gc (0x00) /* PSC Output 2B Enable - CLEAR */
#define PSC_POEN2B_SET_gc   (0x20) /* PSC Output 2B Enable - SET */


/* PSC Output 2A Enable */
#define PSC_POEN2A_CLEAR_gc (0x00) /* PSC Output 2A Enable - CLEAR */
#define PSC_POEN2A_SET_gc   (0x10) /* PSC Output 2A Enable - SET */


/* PSC Output 1B Enable */
#define PSC_POEN1B_CLEAR_gc (0x00) /* PSC Output 1B Enable - CLEAR */
#define PSC_POEN1B_SET_gc   (0x08) /* PSC Output 1B Enable - SET */


/* PSC Output 1A Enable */
#define PSC_POEN1A_CLEAR_gc (0x00) /* PSC Output 1A Enable - CLEAR */
#define PSC_POEN1A_SET_gc   (0x04) /* PSC Output 1A Enable - SET */


/* PSC Output 0B Enable */
#define PSC_POEN0B_CLEAR_gc (0x00) /* PSC Output 0B Enable - CLEAR */
#define PSC_POEN0B_SET_gc   (0x02) /* PSC Output 0B Enable - SET */


/* PSC Output 0A Enable */
#define PSC_POEN0A_CLEAR_gc (0x00) /* PSC Output 0A Enable - CLEAR */
#define PSC_POEN0A_SET_gc   (0x01) /* PSC Output 0A Enable - SET */


/* PSC Update Lock */
#define PSC_PULOCK_CLEAR_gc (0x00) /* PSC Update Lock - CLEAR */
#define PSC_PULOCK_SET_gc   (0x20) /* PSC Update Lock - SET */


/* PSC Mode */
#define PSC_PMODE_CLEAR_gc (0x00) /* PSC Mode - CLEAR */
#define PSC_PMODE_SET_gc   (0x10) /* PSC Mode - SET */


/* PSC Output B Polarity */
#define PSC_POPB_CLEAR_gc (0x00) /* PSC Output B Polarity - CLEAR */
#define PSC_POPB_SET_gc   (0x08) /* PSC Output B Polarity - SET */


/* PSC Output A Polarity */
#define PSC_POPA_CLEAR_gc (0x00) /* PSC Output A Polarity - CLEAR */
#define PSC_POPA_SET_gc   (0x04) /* PSC Output A Polarity - SET */


/* Selection of Synchronization Out for ADC */
#define PSC_PSYNC_PSYNC2_gc(x) ((x<<4) & 0x30)

/* Selection of Synchronization Out for ADC */
#define PSC_PSYNC_PSYNC1_gc(x) ((x<<2) & 0x0C)

/* Selection of Synchronization Out for ADC */
#define PSC_PSYNC_PSYNC0_gc(x) (x & 0x03)
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
#define PORTBB_PINB     _SFR_MEM8 (0x0023) /* Port B Input Pins */
#define PORTBB_DDRB     _SFR_MEM8 (0x0024) /* Port B Data Direction Register */
#define PORTBB_PORTB    _SFR_MEM8 (0x0025) /* Port B Data Register */

/* PORTC - I/O Port (0x0000) */
#define PORTCC_BASE     _SFR_MEM8 (0x0000) /* PORTCC Base Address */
#define PORTCC_PINC     _SFR_MEM8 (0x0026) /* Port C Input Pins */
#define PORTCC_DDRC     _SFR_MEM8 (0x0027) /* Port C Data Direction Register */
#define PORTCC_PORTC    _SFR_MEM8 (0x0028) /* Port C Data Register */

/* PORTD - I/O Port (0x0000) */
#define PORTDD_BASE     _SFR_MEM8 (0x0000) /* PORTDD Base Address */
#define PORTDD_PIND     _SFR_MEM8 (0x0029) /* Port D Input Pins */
#define PORTDD_DDRD     _SFR_MEM8 (0x002A) /* Port D Data Direction Register */
#define PORTDD_PORTD    _SFR_MEM8 (0x002B) /* Port D Data Register */

/* PORTE - I/O Port (0x0000) */
#define PORTEE_BASE     _SFR_MEM8 (0x0000) /* PORTEE Base Address */
#define PORTEE_PINE     _SFR_MEM8 (0x002C) /* Port E Input Pins */
#define PORTEE_DDRE     _SFR_MEM8 (0x002D) /* Port E Data Direction Register */
#define PORTEE_PORTE    _SFR_MEM8 (0x002E) /* Port E Data Register */

/* CAN - Controller Area Network (0x0000) */
#define CAN_BASE        _SFR_MEM8 (0x0000) /* CAN Base Address */
#define CAN_CANGCON     _SFR_MEM8 (0x00D8) /* CAN General Control Register */
#define CAN_CANGSTA     _SFR_MEM8 (0x00D9) /* CAN General Status Register */
#define CAN_CANGIT      _SFR_MEM8 (0x00DA) /* CAN General Interrupt Register Flags */
#define CAN_CANGIE      _SFR_MEM8 (0x00DB) /* CAN General Interrupt Enable Register */
#define CAN_CANEN2      _SFR_MEM8 (0x00DC) /* Enable MOb Register 2 */
#define CAN_CANEN1      _SFR_MEM8 (0x00DD) /* Enable MOb Register 1(empty) */
#define CAN_CANIE2      _SFR_MEM8 (0x00DE) /* Enable Interrupt MOb Register 2 */
#define CAN_CANIE1      _SFR_MEM8 (0x00DF) /* Enable Interrupt MOb Register 1 (empty) */
#define CAN_CANSIT2     _SFR_MEM8 (0x00E0) /* CAN Status Interrupt MOb Register 2 */
#define CAN_CANSIT1     _SFR_MEM8 (0x00E1) /* CAN Status Interrupt MOb Register 1 (empty) */
#define CAN_CANBT1      _SFR_MEM8 (0x00E2) /* CAN Bit Timing Register 1 */
#define CAN_CANBT2      _SFR_MEM8 (0x00E3) /* CAN Bit Timing Register 2 */
#define CAN_CANBT3      _SFR_MEM8 (0x00E4) /* CAN Bit Timing Register 3 */
#define CAN_CANTCON     _SFR_MEM8 (0x00E5) /* Timer Control Register */
#define CAN_CANTIM      _SFR_MEM16(0x00E6) /* Timer Register */
#define CAN_CANTIML     _SFR_MEM8 (0x00E6) /* Timer Register LOW BYTE */
#define CAN_CANTIMH     _SFR_MEM8 (0x00E7) /* Timer Register HIGH BYTE */
#define CAN_CANTTC      _SFR_MEM16(0x00E8) /* TTC Timer Register */
#define CAN_CANTTCL     _SFR_MEM8 (0x00E8) /* TTC Timer Register LOW BYTE */
#define CAN_CANTTCH     _SFR_MEM8 (0x00E9) /* TTC Timer Register HIGH BYTE */
#define CAN_CANTEC      _SFR_MEM8 (0x00EA) /* Transmit Error Counter Register */
#define CAN_CANREC      _SFR_MEM8 (0x00EB) /* Receive Error Counter Register */
#define CAN_CANHPMOB    _SFR_MEM8 (0x00EC) /* Highest Priority MOb Register */
#define CAN_CANPAGE     _SFR_MEM8 (0x00ED) /* Page MOb Register */
#define CAN_CANSTMOB    _SFR_MEM8 (0x00EE) /* MOb Status Register */
#define CAN_CANCDMOB    _SFR_MEM8 (0x00EF) /* MOb Control and DLC Register */
#define CAN_CANIDT4     _SFR_MEM8 (0x00F0) /* Identifier Tag Register 4 */
#define CAN_CANIDT3     _SFR_MEM8 (0x00F1) /* Identifier Tag Register 3 */
#define CAN_CANIDT2     _SFR_MEM8 (0x00F2) /* Identifier Tag Register 2 */
#define CAN_CANIDT1     _SFR_MEM8 (0x00F3) /* Identifier Tag Register 1 */
#define CAN_CANIDM4     _SFR_MEM8 (0x00F4) /* Identifier Mask Register 4 */
#define CAN_CANIDM3     _SFR_MEM8 (0x00F5) /* Identifier Mask Register 3 */
#define CAN_CANIDM2     _SFR_MEM8 (0x00F6) /* Identifier Mask Register 2 */
#define CAN_CANIDM1     _SFR_MEM8 (0x00F7) /* Identifier Mask Register 1 */
#define CAN_CANSTM      _SFR_MEM16(0x00F8) /* Time Stamp Register */
#define CAN_CANSTML     _SFR_MEM8 (0x00F8) /* Time Stamp Register LOW BYTE */
#define CAN_CANSTMH     _SFR_MEM8 (0x00F9) /* Time Stamp Register HIGH BYTE */
#define CAN_CANMSG      _SFR_MEM8 (0x00FA) /* Message Data Register */

/* AC - Analog Comparator (0x0000) */
#define AC_BASE         _SFR_MEM8 (0x0000) /* AC Base Address */
#define AC_ACSR         _SFR_MEM8 (0x0050) /* Analog Comparator Status Register */
#define AC_AC0CON       _SFR_MEM8 (0x0094) /* Analog Comparator 0 Control Register */
#define AC_AC1CON       _SFR_MEM8 (0x0095) /* Analog Comparator 1 Control Register */
#define AC_AC2CON       _SFR_MEM8 (0x0096) /* Analog Comparator 2 Control Register */
#define AC_AC3CON       _SFR_MEM8 (0x0097) /* Analog Comparator 3 Control Register */

/* DAC - Digital-to-Analog Converter (0x0000) */
#define DAC_BASE        _SFR_MEM8 (0x0000) /* DAC Base Address */
#define DAC_DACON       _SFR_MEM8 (0x0090) /* DAC Control Register */
#define DAC_DAC         _SFR_MEM16(0x0091) /* DAC Data Register */
#define DAC_DACL        _SFR_MEM8 (0x0091) /* DAC Data Register LOW BYTE */
#define DAC_DACH        _SFR_MEM8 (0x0092) /* DAC Data Register HIGH BYTE */

/* CPU - CPU Registers (0x0000) */
#define CPU_BASE        _SFR_MEM8 (0x0000) /* CPU Base Address */
#define CPU_GPIOR1      _SFR_MEM8 (0x0039) /* General Purpose IO Register 1 */
#define CPU_GPIOR2      _SFR_MEM8 (0x003A) /* General Purpose IO Register 2 */
#define CPU_GPIOR0      _SFR_MEM8 (0x003E) /* General Purpose IO Register 0 */
#define CPU_PLLCSR      _SFR_MEM8 (0x0049) /* PLL Control And Status Register */
#define CPU_SMCR        _SFR_MEM8 (0x0053) /* Sleep Mode Control Register */
#define CPU_MCUSR       _SFR_MEM8 (0x0054) /* MCU Status Register */
#define CPU_MCUCR       _SFR_MEM8 (0x0055) /* MCU Control Register */
#define CPU_SPMCSR      _SFR_MEM8 (0x0057) /* Store Program Memory Control Register */
#define CPU_SP          _SFR_MEM16(0x005D) /* Stack Pointer  */
#define CPU_SPL         _SFR_MEM8 (0x005D) /* Stack Pointer  LOW BYTE */
#define CPU_SPH         _SFR_MEM8 (0x005E) /* Stack Pointer  HIGH BYTE */
#define CPU_SREG        _SFR_MEM8 (0x005F) /* Status Register */
#define CPU_CLKPR       _SFR_MEM8 (0x0061) 
#define CPU_PRR         _SFR_MEM8 (0x0064) /* Power Reduction Register */
#define CPU_OSCCAL      _SFR_MEM8 (0x0066) /* Oscillator Calibration Value */

/* TC0 - Timer/Counter, 8-bit (0x0000) */
#define TC8_BASE        _SFR_MEM8 (0x0000) /* TC8 Base Address */
#define TC8_TIFR0       _SFR_MEM8 (0x0035) /* Timer/Counter0 Interrupt Flag register */
#define TC8_GTCCR       _SFR_MEM8 (0x0043) /* General Timer/Counter Control Register */
#define TC8_TCCR0A      _SFR_MEM8 (0x0044) /* Timer/Counter  Control Register A */
#define TC8_TCCR0B      _SFR_MEM8 (0x0045) /* Timer/Counter Control Register B */
#define TC8_TCNT0       _SFR_MEM8 (0x0046) /* Timer/Counter0 */
#define TC8_OCR0A       _SFR_MEM8 (0x0047) /* Timer/Counter0 Output Compare Register A */
#define TC8_OCR0B       _SFR_MEM8 (0x0048) /* Timer/Counter0 Output Compare Register B */
#define TC8_TIMSK0      _SFR_MEM8 (0x006E) /* Timer/Counter0 Interrupt Mask Register */

/* TC1 - Timer/Counter, 16-bit (0x0000) */
#define TC16_BASE       _SFR_MEM8 (0x0000) /* TC16 Base Address */
#define TC16_TIFR1      _SFR_MEM8 (0x0036) /* Timer/Counter Interrupt Flag register */
#define TC16_GTCCR      _SFR_MEM8 (0x0043) /* General Timer/Counter Control Register */
#define TC16_TIMSK1     _SFR_MEM8 (0x006F) /* Timer/Counter Interrupt Mask Register */
#define TC16_TCCR1A     _SFR_MEM8 (0x0080) /* Timer/Counter1 Control Register A */
#define TC16_TCCR1B     _SFR_MEM8 (0x0081) /* Timer/Counter1 Control Register B */
#define TC16_TCCR1C     _SFR_MEM8 (0x0082) /* Timer/Counter1 Control Register C */
#define TC16_TCNT1      _SFR_MEM16(0x0084) /* Timer/Counter1 Bytes */
#define TC16_TCNT1L     _SFR_MEM8 (0x0084) /* Timer/Counter1 Bytes LOW BYTE */
#define TC16_TCNT1H     _SFR_MEM8 (0x0085) /* Timer/Counter1 Bytes HIGH BYTE */
#define TC16_ICR1       _SFR_MEM16(0x0086) /* Timer/Counter1 Input Capture Register */
#define TC16_ICR1L      _SFR_MEM8 (0x0086) /* Timer/Counter1 Input Capture Register LOW BYTE */
#define TC16_ICR1H      _SFR_MEM8 (0x0087) /* Timer/Counter1 Input Capture Register HIGH BYTE */
#define TC16_OCR1A      _SFR_MEM16(0x0088) /* Timer/Counter1 Output Compare Register A */
#define TC16_OCR1AL     _SFR_MEM8 (0x0088) /* Timer/Counter1 Output Compare Register A LOW BYTE */
#define TC16_OCR1AH     _SFR_MEM8 (0x0089) /* Timer/Counter1 Output Compare Register A HIGH BYTE */
#define TC16_OCR1B      _SFR_MEM16(0x008A) /* Timer/Counter1 Output Compare Register B */
#define TC16_OCR1BL     _SFR_MEM8 (0x008A) /* Timer/Counter1 Output Compare Register B LOW BYTE */
#define TC16_OCR1BH     _SFR_MEM8 (0x008B) /* Timer/Counter1 Output Compare Register B HIGH BYTE */

/* ADC - Analog-to-Digital Converter (0x0000) */
#define ADC_BASE        _SFR_MEM8 (0x0000) /* ADC Base Address */
#define ADC_AMP0CSR     _SFR_MEM8 (0x0075) /* Amplifier 0 Control and Status Register */
#define ADC_AMP1CSR     _SFR_MEM8 (0x0076) /* Amplifier 1 Control and Status Register */
#define ADC_AMP2CSR     _SFR_MEM8 (0x0077) /* Amplifier 2 Control and Status Register */
#define ADC_ADC         _SFR_MEM16(0x0078) /* ADC Data Register Bytes */
#define ADC_ADCL        _SFR_MEM8 (0x0078) /* ADC Data Register Bytes LOW BYTE */
#define ADC_ADCH        _SFR_MEM8 (0x0079) /* ADC Data Register Bytes HIGH BYTE */
#define ADC_ADCSRA      _SFR_MEM8 (0x007A) /* The ADC Control and Status register */
#define ADC_ADCSRB      _SFR_MEM8 (0x007B) /* ADC Control and Status Register B */
#define ADC_ADMUX       _SFR_MEM8 (0x007C) /* The ADC multiplexer Selection Register */
#define ADC_DIDR0       _SFR_MEM8 (0x007E) /* Digital Input Disable Register 0 */
#define ADC_DIDR1       _SFR_MEM8 (0x007F) /* Digital Input Disable Register 0 */

/* LINUART - Local Interconnect Network (0x0000) */
#define LINUART_BASE    _SFR_MEM8 (0x0000) /* LINUART Base Address */
#define LINUART_LINCR   _SFR_MEM8 (0x00C8) /* LIN Control Register */
#define LINUART_LINSIR  _SFR_MEM8 (0x00C9) /* LIN Status and Interrupt Register */
#define LINUART_LINENIR _SFR_MEM8 (0x00CA) /* LIN Enable Interrupt Register */
#define LINUART_LINERR  _SFR_MEM8 (0x00CB) /* LIN Error Register */
#define LINUART_LINBTR  _SFR_MEM8 (0x00CC) /* LIN Bit Timing Register */
#define LINUART_LINBRR  _SFR_MEM16(0x00CD) /* LIN Baud Rate Register */
#define LINUART_LINBRRL _SFR_MEM8 (0x00CD) /* LIN Baud Rate Register LOW BYTE */
#define LINUART_LINBRRH _SFR_MEM8 (0x00CE) /* LIN Baud Rate Register HIGH BYTE */
#define LINUART_LINDLR  _SFR_MEM8 (0x00CF) /* LIN Data Length Register */
#define LINUART_LINIDR  _SFR_MEM8 (0x00D0) /* LIN Identifier Register */
#define LINUART_LINSEL  _SFR_MEM8 (0x00D1) /* LIN Data Buffer Selection Register */
#define LINUART_LINDAT  _SFR_MEM8 (0x00D2) /* LIN Data Register */

/* SPI - Serial Peripheral Interface (0x0000) */
#define SPI_BASE        _SFR_MEM8 (0x0000) /* SPI Base Address */
#define SPI_SPCR        _SFR_MEM8 (0x004C) /* SPI Control Register */
#define SPI_SPSR        _SFR_MEM8 (0x004D) /* SPI Status Register */
#define SPI_SPDR        _SFR_MEM8 (0x004E) /* SPI Data Register */

/* WDT - Watchdog Timer (0x0000) */
#define WDT_BASE        _SFR_MEM8 (0x0000) /* WDT Base Address */
#define WDT_WDTCSR      _SFR_MEM8 (0x0060) /* Watchdog Timer Control Register */

/* EXINT - External Interrupts (0x0000) */
#define EXINT_BASE      _SFR_MEM8 (0x0000) /* EXINT Base Address */
#define EXINT_PCIFR     _SFR_MEM8 (0x003B) /* Pin Change Interrupt Flag Register */
#define EXINT_EIFR      _SFR_MEM8 (0x003C) /* External Interrupt Flag Register */
#define EXINT_EIMSK     _SFR_MEM8 (0x003D) /* External Interrupt Mask Register */
#define EXINT_PCICR     _SFR_MEM8 (0x0068) /* Pin Change Interrupt Control Register */
#define EXINT_EICRA     _SFR_MEM8 (0x0069) /* External Interrupt Control Register */
#define EXINT_PCMSK0    _SFR_MEM8 (0x006A) /* Pin Change Mask Register 0 */
#define EXINT_PCMSK1    _SFR_MEM8 (0x006B) /* Pin Change Mask Register 1 */
#define EXINT_PCMSK2    _SFR_MEM8 (0x006C) /* Pin Change Mask Register 2 */
#define EXINT_PCMSK3    _SFR_MEM8 (0x006D) /* Pin Change Mask Register 3 */

/* EEPROM - EEPROM (0x0000) */
#define EEPROM_BASE     _SFR_MEM8 (0x0000) /* EEPROM Base Address */
#define EEPROM_EECR     _SFR_MEM8 (0x003F) /* EEPROM Control Register */
#define EEPROM_EEDR     _SFR_MEM8 (0x0040) /* EEPROM Data Register */
#define EEPROM_EEAR     _SFR_MEM16(0x0041) /* EEPROM Read/Write Access */
#define EEPROM_EEARL    _SFR_MEM8 (0x0041) /* EEPROM Read/Write Access LOW BYTE */
#define EEPROM_EEARH    _SFR_MEM8 (0x0042) /* EEPROM Read/Write Access HIGH BYTE */

/* PSC - Power Stage Controller (0x0000) */
#define PSC_BASE        _SFR_MEM16(0x0000) /* PSC Base Address */
#define PSC_POCR0SA     _SFR_MEM16(0x00A0) /* PSC Module 0 Output Compare SA Register */
#define PSC_POCR0SAL    _SFR_MEM8 (0x00A0) /* PSC Module 0 Output Compare SA Register LOW BYTE */
#define PSC_POCR0SAH    _SFR_MEM8 (0x00A1) /* PSC Module 0 Output Compare SA Register HIGH BYTE */
#define PSC_POCR0RA     _SFR_MEM16(0x00A2) /* PSC Module 0 Output Compare RA Register */
#define PSC_POCR0RAL    _SFR_MEM8 (0x00A2) /* PSC Module 0 Output Compare RA Register LOW BYTE */
#define PSC_POCR0RAH    _SFR_MEM8 (0x00A3) /* PSC Module 0 Output Compare RA Register HIGH BYTE */
#define PSC_POCR0SB     _SFR_MEM16(0x00A4) /* PSC Module 0 Output Compare SB Register */
#define PSC_POCR0SBL    _SFR_MEM8 (0x00A4) /* PSC Module 0 Output Compare SB Register LOW BYTE */
#define PSC_POCR0SBH    _SFR_MEM8 (0x00A5) /* PSC Module 0 Output Compare SB Register HIGH BYTE */
#define PSC_POCR1SA     _SFR_MEM16(0x00A6) /* PSC Module 1 Output Compare SA Register */
#define PSC_POCR1SAL    _SFR_MEM8 (0x00A6) /* PSC Module 1 Output Compare SA Register LOW BYTE */
#define PSC_POCR1SAH    _SFR_MEM8 (0x00A7) /* PSC Module 1 Output Compare SA Register HIGH BYTE */
#define PSC_POCR1RA     _SFR_MEM16(0x00A8) /* PSC Module 1 Output Compare RA Register */
#define PSC_POCR1RAL    _SFR_MEM8 (0x00A8) /* PSC Module 1 Output Compare RA Register LOW BYTE */
#define PSC_POCR1RAH    _SFR_MEM8 (0x00A9) /* PSC Module 1 Output Compare RA Register HIGH BYTE */
#define PSC_POCR1SB     _SFR_MEM16(0x00AA) /* PSC Module 1 Output Compare SB Register */
#define PSC_POCR1SBL    _SFR_MEM8 (0x00AA) /* PSC Module 1 Output Compare SB Register LOW BYTE */
#define PSC_POCR1SBH    _SFR_MEM8 (0x00AB) /* PSC Module 1 Output Compare SB Register HIGH BYTE */
#define PSC_POCR2SA     _SFR_MEM16(0x00AC) /* PSC Module 2 Output Compare SA Register */
#define PSC_POCR2SAL    _SFR_MEM8 (0x00AC) /* PSC Module 2 Output Compare SA Register LOW BYTE */
#define PSC_POCR2SAH    _SFR_MEM8 (0x00AD) /* PSC Module 2 Output Compare SA Register HIGH BYTE */
#define PSC_POCR2RA     _SFR_MEM16(0x00AE) /* PSC Module 2 Output Compare RA Register */
#define PSC_POCR2RAL    _SFR_MEM8 (0x00AE) /* PSC Module 2 Output Compare RA Register LOW BYTE */
#define PSC_POCR2RAH    _SFR_MEM8 (0x00AF) /* PSC Module 2 Output Compare RA Register HIGH BYTE */
#define PSC_POCR2SB     _SFR_MEM16(0x00B0) /* PSC Module 2 Output Compare SB Register */
#define PSC_POCR2SBL    _SFR_MEM8 (0x00B0) /* PSC Module 2 Output Compare SB Register LOW BYTE */
#define PSC_POCR2SBH    _SFR_MEM8 (0x00B1) /* PSC Module 2 Output Compare SB Register HIGH BYTE */
#define PSC_POCR_RB     _SFR_MEM16(0x00B2) /* PSC Output Compare RB Register */
#define PSC_POCR_RBL    _SFR_MEM8 (0x00B2) /* PSC Output Compare RB Register LOW BYTE */
#define PSC_POCR_RBH    _SFR_MEM8 (0x00B3) /* PSC Output Compare RB Register HIGH BYTE */
#define PSC_PSYNC       _SFR_MEM8 (0x00B4) /* PSC Synchro Configuration */
#define PSC_PCNF        _SFR_MEM8 (0x00B5) /* PSC Configuration Register */
#define PSC_POC         _SFR_MEM8 (0x00B6) /* PSC Output Configuration */
#define PSC_PCTL        _SFR_MEM8 (0x00B7) /* PSC Control Register */
#define PSC_PMIC0       _SFR_MEM8 (0x00B8) /* PSC Module 0 Input Control Register */
#define PSC_PMIC1       _SFR_MEM8 (0x00B9) /* PSC Module 1 Input Control Register */
#define PSC_PMIC2       _SFR_MEM8 (0x00BA) /* PSC Module 2 Input Control Register */
#define PSC_PIM         _SFR_MEM8 (0x00BB) /* PSC Interrupt Mask Register */
#define PSC_PIFR        _SFR_MEM8 (0x00BC) /* PSC Interrupt Flag Register */

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
#define None_RESET_vect            _VECTOR(0)          /* External Pin, Power-on Reset, Brown-out Reset, Watchdog Reset and JTAG AVR Reset */
#define None_ANACOMP0_vect_num     (1)                 
#define None_ANACOMP0_vect         _VECTOR(1)          /* Analog Comparator 0 */
#define None_ANACOMP1_vect_num     (2)                 
#define None_ANACOMP1_vect         _VECTOR(2)          /* Analog Comparator 1 */
#define None_ANACOMP2_vect_num     (3)                 
#define None_ANACOMP2_vect         _VECTOR(3)          /* Analog Comparator 2 */
#define None_ANACOMP3_vect_num     (4)                 
#define None_ANACOMP3_vect         _VECTOR(4)          /* Analog Comparator 3 */
#define None_PSC_FAULT_vect_num    (5)                 
#define None_PSC_FAULT_vect        _VECTOR(5)          /* PSC Fault */
#define None_PSC_EC_vect_num       (6)                 
#define None_PSC_EC_vect           _VECTOR(6)          /* PSC End of Cycle */
#define None_INT0_vect_num         (7)                 
#define None_INT0_vect             _VECTOR(7)          /* External Interrupt Request 0 */
#define None_INT1_vect_num         (8)                 
#define None_INT1_vect             _VECTOR(8)          /* External Interrupt Request 1 */
#define None_INT2_vect_num         (9)                 
#define None_INT2_vect             _VECTOR(9)          /* External Interrupt Request 2 */
#define None_INT3_vect_num         (10)                
#define None_INT3_vect             _VECTOR(10)         /* External Interrupt Request 3 */
#define None_TIMER1_CAPT_vect_num  (11)                
#define None_TIMER1_CAPT_vect      _VECTOR(11)         /* Timer/Counter1 Capture Event */
#define None_TIMER1_COMPA_vect_num (12)                
#define None_TIMER1_COMPA_vect     _VECTOR(12)         /* Timer/Counter1 Compare Match A */
#define None_TIMER1_COMPB_vect_num (13)                
#define None_TIMER1_COMPB_vect     _VECTOR(13)         /* Timer/Counter1 Compare Match B */
#define None_TIMER1_OVF_vect_num   (14)                
#define None_TIMER1_OVF_vect       _VECTOR(14)         /* Timer1/Counter1 Overflow */
#define None_TIMER0_COMPA_vect_num (15)                
#define None_TIMER0_COMPA_vect     _VECTOR(15)         /* Timer/Counter0 Compare Match A */
#define None_TIMER0_COMPB_vect_num (16)                
#define None_TIMER0_COMPB_vect     _VECTOR(16)         /* Timer/Counter0 Compare Match B */
#define None_TIMER0_OVF_vect_num   (17)                
#define None_TIMER0_OVF_vect       _VECTOR(17)         /* Timer/Counter0 Overflow */
#define None_CAN_INT_vect_num      (18)                
#define None_CAN_INT_vect          _VECTOR(18)         /* CAN MOB, Burst, General Errors */
#define None_CAN_TOVF_vect_num     (19)                
#define None_CAN_TOVF_vect         _VECTOR(19)         /* CAN Timer Overflow */
#define None_LIN_TC_vect_num       (20)                
#define None_LIN_TC_vect           _VECTOR(20)         /* LIN Transfer Complete */
#define None_LIN_ERR_vect_num      (21)                
#define None_LIN_ERR_vect          _VECTOR(21)         /* LIN Error */
#define None_PCINT0_vect_num       (22)                
#define None_PCINT0_vect           _VECTOR(22)         /* Pin Change Interrupt Request 0 */
#define None_PCINT1_vect_num       (23)                
#define None_PCINT1_vect           _VECTOR(23)         /* Pin Change Interrupt Request 1 */
#define None_PCINT2_vect_num       (24)                
#define None_PCINT2_vect           _VECTOR(24)         /* Pin Change Interrupt Request 2 */
#define None_PCINT3_vect_num       (25)                
#define None_PCINT3_vect           _VECTOR(25)         /* Pin Change Interrupt Request 3 */
#define None_SPI_STC_vect_num      (26)                
#define None_SPI_STC_vect          _VECTOR(26)         /* SPI Serial Transfer Complete */
#define None_ADC_vect_num          (27)                
#define None_ADC_vect              _VECTOR(27)         /* ADC Conversion Complete */
#define None_WDT_vect_num          (28)                
#define None_WDT_vect              _VECTOR(28)         /* Watchdog Time-Out Interrupt */
#define None_EE_READY_vect_num     (29)                
#define None_EE_READY_vect         _VECTOR(29)         /* EEPROM Ready */
#define None_SPM_READY_vect_num    (30)                
#define None_SPM_READY_vect        _VECTOR(30)         /* Store Program Memory Read */

/* Vector Table Size */
#define _VECTOR_SIZE               (4)                 /* Size of individual vector. */
#define _VECTORS_SIZE              (31 * _VECTOR_SIZE) /* Size of all vectors */
/*
================================================================================
Constants
================================================================================
*/

#define PROGMEM_START            (0x0000)                                         
#define PROGMEM_SIZE             (0x4000)                                         
#define PROGMEM_END              (PROGMEM_START + PROGMEM_SIZE - 1)               

#define FLASH_START              (0x0000)                                         
#define FLASH_SIZE               (0x4000)                                         
#define FLASH_PAGE_SIZE          (0x0080)                                         
#define FLASH_END                (FLASH_START + FLASH_SIZE - 1)                   

#define BOOT_SECTION_1_START     (0x3E00)                                         
#define BOOT_SECTION_1_SIZE      (0x0200)                                         
#define BOOT_SECTION_1_PAGE_SIZE (0x0080)                                         
#define BOOT_SECTION_1_END       (BOOT_SECTION_1_START + BOOT_SECTION_1_SIZE - 1) 

#define BOOT_SECTION_2_START     (0x3C00)                                         
#define BOOT_SECTION_2_SIZE      (0x0400)                                         
#define BOOT_SECTION_2_PAGE_SIZE (0x0080)                                         
#define BOOT_SECTION_2_END       (BOOT_SECTION_2_START + BOOT_SECTION_2_SIZE - 1) 

#define BOOT_SECTION_3_START     (0x3800)                                         
#define BOOT_SECTION_3_SIZE      (0x0800)                                         
#define BOOT_SECTION_3_PAGE_SIZE (0x0080)                                         
#define BOOT_SECTION_3_END       (BOOT_SECTION_3_START + BOOT_SECTION_3_SIZE - 1) 

#define BOOT_SECTION_4_START     (0x3000)                                         
#define BOOT_SECTION_4_SIZE      (0x1000)                                         
#define BOOT_SECTION_4_PAGE_SIZE (0x0080)                                         
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
#define DATAMEM_SIZE        (0x0500)                               
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
#define IRAM_SIZE           (0x0400)                               
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


#define PB0 (0) 
#define PB1 (1) 
#define PB2 (2) 
#define PB3 (3) 
#define PB4 (4) 
#define PB5 (5) 
#define PB6 (6) 
#define PB7 (7) 

#define PC0 (0) 
#define PC1 (1) 
#define PC2 (2) 
#define PC3 (3) 
#define PC4 (4) 
#define PC5 (5) 
#define PC6 (6) 
#define PC7 (7) 

#define PD0 (0) 
#define PD1 (1) 
#define PD2 (2) 
#define PD3 (3) 
#define PD4 (4) 
#define PD5 (5) 
#define PD6 (6) 
#define PD7 (7) 

#define PE0 (0) 
#define PE1 (1) 
#define PE2 (2) 

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
#define CKOUT      (unsigned char)~_BV(6) /* Clock output on PORTD1 */
#define CKDIV8     (unsigned char)~_BV(7) /* Divide clock by 8 internally */

/* Fuse offset 0x01 */
#define BOOTRST  (unsigned char)~_BV(0) /* Select Reset Vector */
#define BOOTSZ0  (unsigned char)~_BV(1) /* Select Boot Size bit 0 */
#define BOOTSZ1  (unsigned char)~_BV(2) /* Select Boot Size bit 1 */
#define EESAVE   (unsigned char)~_BV(3) /* Preserve EEPROM through the Chip Erase cycle */
#define WDTON    (unsigned char)~_BV(4) /* Watch-dog Timer always on */
#define SPIEN    (unsigned char)~_BV(5) /* Serial program downloading (SPI) enabled */
#define DWEN     (unsigned char)~_BV(6) /* Debug Wire enable */
#define RSTDISBL (unsigned char)~_BV(7) /* Reset Disabled (Enable PC6 as i/o pin) */

/* Fuse offset 0x02 */
#define BODLEVEL0 (unsigned char)~_BV(0) /* Brown-out Detector Trigger Level bit 0 */
#define BODLEVEL1 (unsigned char)~_BV(1) /* Brown-out Detector Trigger Level bit 1 */
#define BODLEVEL2 (unsigned char)~_BV(2) /* Brown-out Detector Trigger Level bit 2 */
#define PSCRVB    (unsigned char)~_BV(3) /* PSC0UTnB Reset Value */
#define PSCRVA    (unsigned char)~_BV(4) /* PSCOUTnA Reset Value */
#define PSCRB     (unsigned char)~_BV(5) /* PSC Reset Behavior */


/* ========== Lock Bits ========== */
#define __LOCK_BITS_EXIST  


/* ========== Signature ========== */
#define SIGNATURE_0 (0x1E) 
#define SIGNATURE_1 (0x94) 
#define SIGNATURE_2 (0x84) 

#endif /* #ifdef _AVR_ATmega16M1_H_INCLUDED */
