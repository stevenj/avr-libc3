/******************************************************************************
 *   This file is part of avr-libc3.                                          * 
 *                                                                            * 
 *   Automatically created by devtools/gen-ioheader-atdf.py (V0.91)           * 
 *                                                                            * 
 *   .atpack File: AT90PWM216.atdf                                            * 
 *   .ATDF File:   atdf/AT90PWM216.atdf                                       * 
 *   Version:      2.0.12                                                     * 
 *   Date:         2019-04-26                                                 * 
 *   Device:       AT90PWM216                                                 * 
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
#  define _AVR_IOXXX_H_ "ioAT90PWM216.h"
#else
#  error "Attempt to include more than one <avr/ioXXX.h> file."
#endif

#ifndef _AVR_AT90PWM216_H_INCLUDED
#  define _AVR_AT90PWM216_H_INCLUDED

/*
================================================================================
Ungrouped common register
================================================================================
*/

#define GPIOR1 _SFR_MEM8 (0x39) /* General Purpose IO Register 1 */
#define GPIOR2 _SFR_MEM8 (0x3A) /* General Purpose IO Register 2 */
#define GPIOR3 _SFR_MEM8 (0x3B) /* General Purpose IO Register 3 */

#define GPIOR0 _SFR_MEM8 (0x3E) /* General Purpose IO Register 0 */

#define PLLCSR _SFR_MEM8 (0x49) /* PLL Control And Status Register */

#define SMCR   _SFR_MEM8 (0x53) /* Sleep Mode Control Register */
#define MCUSR  _SFR_MEM8 (0x54) /* MCU Status Register */
#define MCUCR  _SFR_MEM8 (0x55) /* MCU Control Register */

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


/* PSC2 Reset Behavior */
typedef enum FUSE_PSC2RB_enum
{
    FUSE_PSC2RB_CLEAR_gc = (0x00), /* PSC2 Reset Behavior - CLEAR */
    FUSE_PSC2RB_SET_gc   = (0x80), /* PSC2 Reset Behavior - SET */
} FUSE_PSC2RB_t;

/* PSC1 Reset Behavior */
typedef enum FUSE_PSC1RB_enum
{
    FUSE_PSC1RB_CLEAR_gc = (0x00), /* PSC1 Reset Behavior - CLEAR */
    FUSE_PSC1RB_SET_gc   = (0x40), /* PSC1 Reset Behavior - SET */
} FUSE_PSC1RB_t;

/* PSC0 Reset Behavior */
typedef enum FUSE_PSC0RB_enum
{
    FUSE_PSC0RB_CLEAR_gc = (0x00), /* PSC0 Reset Behavior - CLEAR */
    FUSE_PSC0RB_SET_gc   = (0x20), /* PSC0 Reset Behavior - SET */
} FUSE_PSC0RB_t;

/* PSCOUT Reset Value */
typedef enum FUSE_PSCRV_enum
{
    FUSE_PSCRV_CLEAR_gc = (0x00), /* PSCOUT Reset Value - CLEAR */
    FUSE_PSCRV_SET_gc   = (0x10), /* PSCOUT Reset Value - SET */
} FUSE_PSCRV_t;

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

/* Divide clock by 8 internally */
typedef enum FUSE_CKDIV8_enum
{
    FUSE_CKDIV8_CLEAR_gc = (0x00), /* Divide clock by 8 internally - CLEAR */
    FUSE_CKDIV8_SET_gc   = (0x80), /* Divide clock by 8 internally - SET */
} FUSE_CKDIV8_t;

/* Clock output on PORTB0 */
typedef enum FUSE_CKOUT_enum
{
    FUSE_CKOUT_CLEAR_gc = (0x00), /* Clock output on PORTB0 - CLEAR */
    FUSE_CKOUT_SET_gc   = (0x40), /* Clock output on PORTB0 - SET */
} FUSE_CKOUT_t;

/* Select Clock Source */
typedef enum FUSE_SUT_CKSEL_enum
{
    FUSE_SUT_CKSEL_EXTCLK_6CK_14CK_0MS_gc                 = (0x00), /* Ext. Clock; Start-up time PWRDWN/RESET: 6 CK/14 CK + 0 ms */
    FUSE_SUT_CKSEL_EXTCLK_6CK_14CK_4MS1_gc                = (0x10), /* Ext. Clock; Start-up time PWRDWN/RESET: 6 CK/14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTCLK_6CK_14CK_65MS_gc                = (0x20), /* Ext. Clock; Start-up time PWRDWN/RESET: 6 CK/14 CK + 65 ms */
    FUSE_SUT_CKSEL_INTRCOSC_8MHZ_6CK_14CK_0MS_gc          = (0x02), /* Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 0 ms */
    FUSE_SUT_CKSEL_INTRCOSC_8MHZ_6CK_14CK_4MS1_gc         = (0x12), /* Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_INTRCOSC_8MHZ_6CK_14CK_65MS_gc         = (0x22), /* Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_258CK_14CK_4MS1_gc = (0x08), /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_258CK_14CK_65MS_gc = (0x18), /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_1KCK_14CK_0MS_gc   = (0x28), /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 0 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_1KCK_14CK_4MS1_gc  = (0x38), /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_1KCK_14CK_65MS_gc  = (0x09), /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_16KCK_14CK_0MS_gc  = (0x19), /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 0 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_16KCK_14CK_4MS1_gc = (0x29), /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_16KCK_14CK_65MS_gc = (0x39), /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_258CK_14CK_4MS1_gc  = (0x0A), /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_258CK_14CK_65MS_gc  = (0x1A), /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_1KCK_14CK_0MS_gc    = (0x2A), /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 0 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_1KCK_14CK_4MS1_gc   = (0x3A), /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_1KCK_14CK_65MS_gc   = (0x0B), /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_16KCK_14CK_0MS_gc   = (0x1B), /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 0 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_16KCK_14CK_4MS1_gc  = (0x2B), /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_16KCK_14CK_65MS_gc  = (0x3B), /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_258CK_14CK_4MS1_gc   = (0x0C), /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_258CK_14CK_65MS_gc   = (0x1C), /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_1KCK_14CK_0MS_gc     = (0x2C), /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 0 ms */
    FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_1KCK_14CK_4MS1_gc    = (0x3C), /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_1KCK_14CK_65MS_gc    = (0x0D), /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_16KCK_14CK_0MS_gc    = (0x1D), /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 0 ms */
    FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_16KCK_14CK_4MS1_gc   = (0x2D), /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_16KCK_14CK_65MS_gc   = (0x3D), /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_258CK_14CK_4MS1_gc     = (0x0E), /* Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_258CK_14CK_65MS_gc     = (0x1E), /* Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_1KCK_14CK_0MS_gc       = (0x2E), /* Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 0 ms */
    FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_1KCK_14CK_4MS1_gc      = (0x3E), /* Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_1KCK_14CK_65MS_gc      = (0x0F), /* Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_16KCK_14CK_0MS_gc      = (0x1F), /* Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 0 ms */
    FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_16KCK_14CK_4MS1_gc     = (0x2F), /* Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_16KCK_14CK_65MS_gc     = (0x3F), /* Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 65 ms */
    FUSE_SUT_CKSEL_PLLCLK_16MHZ_1KCK_14CK_0MS_gc          = (0x03), /* PLL clock 16 MHz; Start-up time PWRDWN/RESET: 1K CK/14 CK + 0 ms */
    FUSE_SUT_CKSEL_PLLCLK_16MHZ_1KCK_14CK_4MS1_gc         = (0x13), /* PLL clock 16 MHz; Start-up time PWRDWN/RESET: 1K CK/14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_PLLCLK_16MHZ_1KCK_14CK_65MS_gc         = (0x23), /* PLL clock 16 MHz; Start-up time PWRDWN/RESET: 1K CK/14 CK + 65 ms */
    FUSE_SUT_CKSEL_PLLCLK_16MHZ_16KCK_14CK_0MS_gc         = (0x33), /* PLL clock 16 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 0 ms */
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
EUSART - Extended USART
--------------------------------------------------------------------------------
*/

typedef struct EUSART_struct
{
    register8_t rsv_0x00[200]; /* RESERVED REGISTER BLOCK */
    register8_t EUCSRA;        /* EUSART Control and Status Register A */
    register8_t EUCSRB;        /* EUSART Control Register B */
    register8_t EUCSRC;        /* EUSART Status Register C */
    register8_t rsv_0xCB;      /* RESERVED REGISTER */
    register8_t MUBRRL;        /* Manchester Receiver Baud Rate Register Low Byte */
    register8_t MUBRRH;        /* Manchester Receiver Baud Rate Register High Byte */
    register8_t EUDR;          /* EUSART I/O Data Register */
} EUSART_t;


/* EUSART Control and Status Register A Bits */
typedef enum EUSART_UTxS_enum
{
    EUSART_UTxS_VAL_0x00_gc = (0x00<<4), /* 5-bit */
    EUSART_UTxS_VAL_0x01_gc = (0x01<<4), /* 6-bit */
    EUSART_UTxS_VAL_0x02_gc = (0x02<<4), /* 7-bit */
    EUSART_UTxS_VAL_0x03_gc = (0x03<<4), /* 8-bit */
    EUSART_UTxS_VAL_0x04_gc = (0x04<<4), /* Reserved */
    EUSART_UTxS_VAL_0x05_gc = (0x05<<4), /* Reserved */
    EUSART_UTxS_VAL_0x06_gc = (0x06<<4), /* Reserved */
    EUSART_UTxS_VAL_0x07_gc = (0x07<<4), /* 9-bit */
    EUSART_UTxS_VAL_0x08_gc = (0x08<<4), /* 13-bit */
    EUSART_UTxS_VAL_0x09_gc = (0x09<<4), /* 14-bit */
    EUSART_UTxS_VAL_0x0A_gc = (0x0A<<4), /* 15-bit */
    EUSART_UTxS_VAL_0x0B_gc = (0x0B<<4), /* 16-bit */
    EUSART_UTxS_VAL_0x0C_gc = (0x0C<<4), /* Reserved */
    EUSART_UTxS_VAL_0x0D_gc = (0x0D<<4), /* Reserved */
    EUSART_UTxS_VAL_0x0E_gc = (0x0E<<4), /* Reserved */
    EUSART_UTxS_VAL_0x0F_gc = (0x0F<<4), /* 17-bit */
} EUSART_UTxS_t;

/* EUSART Control and Status Register A Bits */
typedef enum EUSART_URxS_enum
{
    EUSART_URxS_VAL_0x00_gc = (0x00), /* 5-bit */
    EUSART_URxS_VAL_0x01_gc = (0x01), /* 6-bit */
    EUSART_URxS_VAL_0x02_gc = (0x02), /* 7-bit */
    EUSART_URxS_VAL_0x03_gc = (0x03), /* 8-bit */
    EUSART_URxS_VAL_0x04_gc = (0x04), /* Reserved */
    EUSART_URxS_VAL_0x05_gc = (0x05), /* Reserved */
    EUSART_URxS_VAL_0x06_gc = (0x06), /* Reserved */
    EUSART_URxS_VAL_0x07_gc = (0x07), /* 9-bit */
    EUSART_URxS_VAL_0x08_gc = (0x08), /* 13-bit */
    EUSART_URxS_VAL_0x09_gc = (0x09), /* 14-bit */
    EUSART_URxS_VAL_0x0A_gc = (0x0A), /* 15-bit */
    EUSART_URxS_VAL_0x0B_gc = (0x0B), /* 16-bit */
    EUSART_URxS_VAL_0x0C_gc = (0x0C), /* Reserved */
    EUSART_URxS_VAL_0x0D_gc = (0x0D), /* Reserved */
    EUSART_URxS_VAL_0x0E_gc = (0x0E), /* 16 or 17 */
    EUSART_URxS_VAL_0x0F_gc = (0x0F), /* 17-bit */
} EUSART_URxS_t;

/* EUSART Enable Bit */
typedef enum EUSART_EUSART_enum
{
    EUSART_EUSART_CLEAR_gc = (0x00), /* EUSART Enable Bit - CLEAR */
    EUSART_EUSART_SET_gc   = (0x10), /* EUSART Enable Bit - SET */
} EUSART_EUSART_t;

/* EUSBS Enable Bit */
typedef enum EUSART_EUSBS_enum
{
    EUSART_EUSBS_CLEAR_gc = (0x00), /* EUSBS Enable Bit - CLEAR */
    EUSART_EUSBS_SET_gc   = (0x08), /* EUSBS Enable Bit - SET */
} EUSART_EUSBS_t;

/* Manchester Mode Bit */
typedef enum EUSART_EMCH_enum
{
    EUSART_EMCH_CLEAR_gc = (0x00), /* Manchester Mode Bit - CLEAR */
    EUSART_EMCH_SET_gc   = (0x02), /* Manchester Mode Bit - SET */
} EUSART_EMCH_t;

/* Order Bit */
typedef enum EUSART_BODR_enum
{
    EUSART_BODR_CLEAR_gc = (0x00), /* Order Bit - CLEAR */
    EUSART_BODR_SET_gc   = (0x01), /* Order Bit - SET */
} EUSART_BODR_t;

/* Frame Error Manchester Bit */
typedef enum EUSART_FEM_enum
{
    EUSART_FEM_CLEAR_gc = (0x00), /* Frame Error Manchester Bit - CLEAR */
    EUSART_FEM_SET_gc   = (0x08), /* Frame Error Manchester Bit - SET */
} EUSART_FEM_t;

/* F1617 Bit */
typedef enum EUSART_F1617_enum
{
    EUSART_F1617_CLEAR_gc = (0x00), /* F1617 Bit - CLEAR */
    EUSART_F1617_SET_gc   = (0x04), /* F1617 Bit - SET */
} EUSART_F1617_t;

/* Stop Bits */
#define EUSART_EUCSRC_STP_gc(x) (x & 0x03)

/*
--------------------------------------------------------------------------------
AC - Analog Comparator
--------------------------------------------------------------------------------
*/

typedef struct AC_struct
{
    register8_t rsv_0x00[80]; /* RESERVED REGISTER BLOCK */
    register8_t ACSR;         /* Analog Comparator Status Register */
    register8_t rsv_0x51[92]; /* RESERVED REGISTER BLOCK */
    register8_t AC0CON;       /* Analog Comparator 0 Control Register */
    register8_t AC1CON;       /* Analog Comparator 1 Control Register */
    register8_t AC2CON;       /* Analog Comparator 2 Control Register */
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

/* Analog Comparator 0  Interrupt Select Bit */
#define AC_AC0CON_AC0IS_gc(x) ((x<<4) & 0x30)

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

/* Analog Comparator Clock Divider */
typedef enum AC_ACCKDIV_enum
{
    AC_ACCKDIV_CLEAR_gc = (0x00), /* Analog Comparator Clock Divider - CLEAR */
    AC_ACCKDIV_SET_gc   = (0x80), /* Analog Comparator Clock Divider - SET */
} AC_ACCKDIV_t;

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
    register8_t rsv_0x00[170]; /* RESERVED REGISTER BLOCK */
    register8_t DACON;         /* DAC Control Register */
    _REGISTER16 (DAC);         /* DAC Data Register Bytes */
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
    register8_t GPIOR3;       /* General Purpose IO Register 3 */
    register8_t rsv_0x3C[2];  /* RESERVED REGISTER BLOCK */
    register8_t GPIOR0;       /* General Purpose IO Register 0 */
    register8_t rsv_0x3F[10]; /* RESERVED REGISTER BLOCK */
    register8_t PLLCSR;       /* PLL Control And Status Register */
    register8_t rsv_0x4A[9];  /* RESERVED REGISTER BLOCK */
    register8_t SMCR;         /* Sleep Mode Control Register */
    register8_t MCUSR;        /* MCU Status Register */
    register8_t MCUCR;        /* MCU Control Register */
    register8_t rsv_0x56[7];  /* RESERVED REGISTER BLOCK */
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

/* Power Reduction PSC2 */
typedef enum CPU_PRPSC2_enum
{
    CPU_PRPSC2_CLEAR_gc = (0x00), /* Power Reduction PSC2 - CLEAR */
    CPU_PRPSC2_SET_gc   = (0x80), /* Power Reduction PSC2 - SET */
} CPU_PRPSC2_t;

/* Power Reduction PSC1 */
typedef enum CPU_PRPSC1_enum
{
    CPU_PRPSC1_CLEAR_gc = (0x00), /* Power Reduction PSC1 - CLEAR */
    CPU_PRPSC1_SET_gc   = (0x40), /* Power Reduction PSC1 - SET */
} CPU_PRPSC1_t;

/* Power Reduction PSC0 */
typedef enum CPU_PRPSC0_enum
{
    CPU_PRPSC0_CLEAR_gc = (0x00), /* Power Reduction PSC0 - CLEAR */
    CPU_PRPSC0_SET_gc   = (0x20), /* Power Reduction PSC0 - SET */
} CPU_PRPSC0_t;

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
TC8 - Timer/Counter, 8-bit
--------------------------------------------------------------------------------
*/

typedef struct TC0_struct
{
    register8_t rsv_0x00[53]; /* RESERVED REGISTER BLOCK */
    register8_t TIFR0;        /* Timer/Counter0 Interrupt Flag register */
    register8_t rsv_0x36[13]; /* RESERVED REGISTER BLOCK */
    register8_t GTCCR;        /* General Timer/Counter Control Register */
    register8_t TCCR0A;       /* Timer/Counter Control Register A */
    register8_t TCCR0B;       /* Timer/Counter Control Register B */
    register8_t TCNT0;        /* Timer/Counter0 */
    register8_t OCR0A;        /* Timer/Counter0 Output Compare Register */
    register8_t OCR0B;        /* Timer/Counter0 Output Compare Register */
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

/* Compare Output Mode, Phase Correct PWM Mode */
#define TC0_TCCR0A_COM0A_gc(x) ((x<<6) & 0xC0)

/* Compare Output Mode, Fast PWm */
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

/* Timer1 Input Capture Selection Bit */
typedef enum TC0_ICPSEL1_enum
{
    TC0_ICPSEL1_CLEAR_gc = (0x00), /* Timer1 Input Capture Selection Bit - CLEAR */
    TC0_ICPSEL1_SET_gc   = (0x40), /* Timer1 Input Capture Selection Bit - SET */
} TC0_ICPSEL1_t;

/* Prescaler Reset Timer/Counter1 and Timer/Counter0 */
typedef enum TC0_PSRSYNC_enum
{
    TC0_PSRSYNC_CLEAR_gc = (0x00), /* Prescaler Reset Timer/Counter1 and Timer/Counter0 - CLEAR */
    TC0_PSRSYNC_SET_gc   = (0x01), /* Prescaler Reset Timer/Counter1 and Timer/Counter0 - SET */
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
    _REGISTER16 (ICR1);       /* Timer/Counter1 Input Capture Register Bytes */
    register8_t rsv_0x87;     /* RESERVED REGISTER */
    _REGISTER16 (OCR1A);      /* Timer/Counter1 Output Compare Register Bytes */
    register8_t rsv_0x89;     /* RESERVED REGISTER */
    _REGISTER16 (OCR1B);      /* Timer/Counter1 Output Compare Register Bytes */
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

/* Compare Output Mode 1A, bits */
#define TC1_TCCR1A_COM1A_gc(x) ((x<<6) & 0xC0)

/* Compare Output Mode 1B, bits */
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

/* Timer/Counter1 Control Register C-FOC1A */
typedef enum TC1_FOC1A_enum
{
    TC1_FOC1A_CLEAR_gc = (0x00), /* Timer/Counter1 Control Register C-FOC1A - CLEAR */
    TC1_FOC1A_SET_gc   = (0x80), /* Timer/Counter1 Control Register C-FOC1A - SET */
} TC1_FOC1A_t;

/* Timer/Counter1 Control Register C-FOC1B */
typedef enum TC1_FOC1B_enum
{
    TC1_FOC1B_CLEAR_gc = (0x00), /* Timer/Counter1 Control Register C-FOC1B - CLEAR */
    TC1_FOC1B_SET_gc   = (0x40), /* Timer/Counter1 Control Register C-FOC1B - SET */
} TC1_FOC1B_t;

/* Timer/Counter Synchronization Mode */
typedef enum TC1_TSM_enum
{
    TC1_TSM_CLEAR_gc = (0x00), /* Timer/Counter Synchronization Mode - CLEAR */
    TC1_TSM_SET_gc   = (0x80), /* Timer/Counter Synchronization Mode - SET */
} TC1_TSM_t;

/* Prescaler Reset Timer/Counter1 and Timer/Counter0 */
typedef enum TC1_PSRSYNC_enum
{
    TC1_PSRSYNC_CLEAR_gc = (0x00), /* Prescaler Reset Timer/Counter1 and Timer/Counter0 - CLEAR */
    TC1_PSRSYNC_SET_gc   = (0x01), /* Prescaler Reset Timer/Counter1 and Timer/Counter0 - SET */
} TC1_PSRSYNC_t;

/*
--------------------------------------------------------------------------------
ADC - Analog-to-Digital Converter
--------------------------------------------------------------------------------
*/

typedef struct ADC_struct
{
    register8_t rsv_0x00[118]; /* RESERVED REGISTER BLOCK */
    register8_t AMP0CSR;      
    register8_t AMP1CSR;      
    _REGISTER16 (ADC);         /* ADC Data Register Bytes */
    register8_t rsv_0x79;      /* RESERVED REGISTER */
    register8_t ADCSRA;        /* The ADC Control and Status register */
    register8_t ADCSRB;        /* ADC Control and Status Register B */
    register8_t ADMUX;         /* The ADC multiplexer Selection Register */
    register8_t rsv_0x7D;      /* RESERVED REGISTER */
    register8_t DIDR0;         /* Digital Input Disable Register 0 */
    register8_t DIDR1;         /* Digital Input Disable Register 1 */
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
#define ADC_ADMUX_MUX_gc(x) (x & 0x0F)

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

/* ADC Prescaler Select Bits */
#define ADC_ADCSRA_ADPS_gc(x) (x & 0x07)

/* ADC High Speed Mode */
typedef enum ADC_ADHSM_enum
{
    ADC_ADHSM_CLEAR_gc = (0x00), /* ADC High Speed Mode - CLEAR */
    ADC_ADHSM_SET_gc   = (0x80), /* ADC High Speed Mode - SET */
} ADC_ADHSM_t;

/* ADC Auto Trigger Source Selection 3 */
typedef enum ADC_ADTS3_enum
{
    ADC_ADTS3_CLEAR_gc = (0x00), /* ADC Auto Trigger Source Selection 3 - CLEAR */
    ADC_ADTS3_SET_gc   = (0x08), /* ADC Auto Trigger Source Selection 3 - SET */
} ADC_ADTS3_t;

/* ADC Auto Trigger Source Selection 2 */
typedef enum ADC_ADTS2_enum
{
    ADC_ADTS2_CLEAR_gc = (0x00), /* ADC Auto Trigger Source Selection 2 - CLEAR */
    ADC_ADTS2_SET_gc   = (0x04), /* ADC Auto Trigger Source Selection 2 - SET */
} ADC_ADTS2_t;

/* ADC Auto Trigger Source Selection 1 */
typedef enum ADC_ADTS1_enum
{
    ADC_ADTS1_CLEAR_gc = (0x00), /* ADC Auto Trigger Source Selection 1 - CLEAR */
    ADC_ADTS1_SET_gc   = (0x02), /* ADC Auto Trigger Source Selection 1 - SET */
} ADC_ADTS1_t;

/* ADC Auto Trigger Source Selection 0 */
typedef enum ADC_ADTS0_enum
{
    ADC_ADTS0_CLEAR_gc = (0x00), /* ADC Auto Trigger Source Selection 0 - CLEAR */
    ADC_ADTS0_SET_gc   = (0x01), /* ADC Auto Trigger Source Selection 0 - SET */
} ADC_ADTS0_t;

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

/* Digital Input Disable Register 1-ACMP0D */
typedef enum ADC_ACMP0D_enum
{
    ADC_ACMP0D_CLEAR_gc = (0x00), /* Digital Input Disable Register 1-ACMP0D - CLEAR */
    ADC_ACMP0D_SET_gc   = (0x20), /* Digital Input Disable Register 1-ACMP0D - SET */
} ADC_ACMP0D_t;

/* Digital Input Disable Register 1-AMP0PD */
typedef enum ADC_AMP0PD_enum
{
    ADC_AMP0PD_CLEAR_gc = (0x00), /* Digital Input Disable Register 1-AMP0PD - CLEAR */
    ADC_AMP0PD_SET_gc   = (0x10), /* Digital Input Disable Register 1-AMP0PD - SET */
} ADC_AMP0PD_t;

/* Digital Input Disable Register 1-AMP0ND */
typedef enum ADC_AMP0ND_enum
{
    ADC_AMP0ND_CLEAR_gc = (0x00), /* Digital Input Disable Register 1-AMP0ND - CLEAR */
    ADC_AMP0ND_SET_gc   = (0x08), /* Digital Input Disable Register 1-AMP0ND - SET */
} ADC_AMP0ND_t;

/* Digital Input Disable Register 1-ADC10D */
typedef enum ADC_ADC10D_enum
{
    ADC_ADC10D_CLEAR_gc = (0x00), /* Digital Input Disable Register 1-ADC10D - CLEAR */
    ADC_ADC10D_SET_gc   = (0x04), /* Digital Input Disable Register 1-ADC10D - SET */
} ADC_ADC10D_t;

/* Digital Input Disable Register 1-ADC9D */
typedef enum ADC_ADC9D_enum
{
    ADC_ADC9D_CLEAR_gc = (0x00), /* Digital Input Disable Register 1-ADC9D - CLEAR */
    ADC_ADC9D_SET_gc   = (0x02), /* Digital Input Disable Register 1-ADC9D - SET */
} ADC_ADC9D_t;

/* Digital Input Disable Register 1-ADC8D */
typedef enum ADC_ADC8D_enum
{
    ADC_ADC8D_CLEAR_gc = (0x00), /* Digital Input Disable Register 1-ADC8D - CLEAR */
    ADC_ADC8D_SET_gc   = (0x01), /* Digital Input Disable Register 1-ADC8D - SET */
} ADC_ADC8D_t;

/* -AMP0EN */
typedef enum ADC_AMP0EN_enum
{
    ADC_AMP0EN_CLEAR_gc = (0x00), /* -AMP0EN - CLEAR */
    ADC_AMP0EN_SET_gc   = (0x80), /* -AMP0EN - SET */
} ADC_AMP0EN_t;

/* -AMP0IS */
typedef enum ADC_AMP0IS_enum
{
    ADC_AMP0IS_CLEAR_gc = (0x00), /* -AMP0IS - CLEAR */
    ADC_AMP0IS_SET_gc   = (0x40), /* -AMP0IS - SET */
} ADC_AMP0IS_t;

/* -AMP0G */
#define ADC_AMP0CSR_AMP0G_gc(x) ((x<<4) & 0x30)

/* -AMP0TS */
#define ADC_AMP0CSR_AMP0TS_gc(x) (x & 0x03)

/* -AMP1EN */
typedef enum ADC_AMP1EN_enum
{
    ADC_AMP1EN_CLEAR_gc = (0x00), /* -AMP1EN - CLEAR */
    ADC_AMP1EN_SET_gc   = (0x80), /* -AMP1EN - SET */
} ADC_AMP1EN_t;

/* -AMP1IS */
typedef enum ADC_AMP1IS_enum
{
    ADC_AMP1IS_CLEAR_gc = (0x00), /* -AMP1IS - CLEAR */
    ADC_AMP1IS_SET_gc   = (0x40), /* -AMP1IS - SET */
} ADC_AMP1IS_t;

/* -AMP1G */
#define ADC_AMP1CSR_AMP1G_gc(x) ((x<<4) & 0x30)

/* -AMP1TS */
#define ADC_AMP1CSR_AMP1TS_gc(x) (x & 0x03)

/*
--------------------------------------------------------------------------------
USART - USART
--------------------------------------------------------------------------------
*/

typedef struct USART_struct
{
    register8_t rsv_0x00[192]; /* RESERVED REGISTER BLOCK */
    register8_t UCSRA;         /* USART Control and Status register A */
    register8_t UCSRB;         /* USART Control an Status register B */
    register8_t UCSRC;         /* USART Control an Status register C */
    register8_t rsv_0xC3;      /* RESERVED REGISTER */
    register8_t UBRRL;         /* USART Baud Rate Register Low Byte */
    register8_t UBRRH;         /* USART Baud Rate Register High Byte */
    register8_t UDR;           /* USART I/O Data Register */
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

/* Data Overrun */
typedef enum USART_DOR_enum
{
    USART_DOR_CLEAR_gc = (0x00), /* Data Overrun - CLEAR */
    USART_DOR_SET_gc   = (0x08), /* Data Overrun - SET */
} USART_DOR_t;

/* USART Parity Error */
typedef enum USART_UPE_enum
{
    USART_UPE_CLEAR_gc = (0x00), /* USART Parity Error - CLEAR */
    USART_UPE_SET_gc   = (0x04), /* USART Parity Error - SET */
} USART_UPE_t;

/* Double USART Transmission Bit */
typedef enum USART_U2X_enum
{
    USART_U2X_CLEAR_gc = (0x00), /* Double USART Transmission Bit - CLEAR */
    USART_U2X_SET_gc   = (0x02), /* Double USART Transmission Bit - SET */
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

/* USART Data Register Empty Interrupt Enable */
typedef enum USART_UDRIE_enum
{
    USART_UDRIE_CLEAR_gc = (0x00), /* USART Data Register Empty Interrupt Enable - CLEAR */
    USART_UDRIE_SET_gc   = (0x20), /* USART Data Register Empty Interrupt Enable - SET */
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
typedef enum USART_UMSEL0_enum
{
    USART_UMSEL0_CLEAR_gc = (0x00), /* USART Mode Select - CLEAR */
    USART_UMSEL0_SET_gc   = (0x40), /* USART Mode Select - SET */
} USART_UMSEL0_t;

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
    register8_t rsv_0x00[60]; /* RESERVED REGISTER BLOCK */
    register8_t EIFR;         /* External Interrupt Flag Register */
    register8_t EIMSK;        /* External Interrupt Mask Register */
    register8_t rsv_0x3E[43]; /* RESERVED REGISTER BLOCK */
    register8_t EICRA;        /* External Interrupt Control Register A */
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
    _REGISTER16 (EEAR);       /* EEPROM Read/Write Access Bytes */
} EEPROM_t;


/* EEPROM Programming Mode */
#define EEPROM_EECR_EEPM_gc(x) ((x<<4) & 0x30)

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

typedef struct PSC0_struct
{
    register8_t rsv_0x00[160]; /* RESERVED REGISTER BLOCK */
    register8_t PIFR0;         /* PSC0 Interrupt Flag Register */
    register8_t PIM0;          /* PSC0 Interrupt Mask Register */
    register8_t rsv_0xA2[46];  /* RESERVED REGISTER BLOCK */
    register8_t PSOC0;         /* PSC0 Synchro and Output Configuration */
    register8_t rsv_0xD1;      /* RESERVED REGISTER */
    _REGISTER16 (OCR0SA);      /* Output Compare SA Register  */
    register8_t rsv_0xD3;      /* RESERVED REGISTER */
    _REGISTER16 (OCR0RA);      /* Output Compare RA Register  */
    register8_t rsv_0xD5;      /* RESERVED REGISTER */
    _REGISTER16 (OCR0SB);      /* Output Compare SB Register  */
    register8_t rsv_0xD7;      /* RESERVED REGISTER */
    _REGISTER16 (OCR0RB);      /* Output Compare RB Register  */
    register8_t rsv_0xD9;      /* RESERVED REGISTER */
    register8_t PCNF0;         /* PSC 0 Configuration Register */
    register8_t PCTL0;         /* PSC 0 Control Register */
    register8_t PFRC0A;        /* PSC 0 Input A Control */
    register8_t PFRC0B;        /* PSC 0 Input B Control */
    _REGISTER16 (PICR0);       /* PSC 0 Input Capture Register  */
} PSC0_t;


/*
--------------------------------------------------------------------------------
PSC - Power Stage Controller
--------------------------------------------------------------------------------
*/

typedef struct PSC2_struct
{
    register8_t rsv_0x00[164]; /* RESERVED REGISTER BLOCK */
    register8_t PIFR2;         /* PSC2 Interrupt Flag Register */
    register8_t PIM2;          /* PSC2 Interrupt Mask Register */
    register8_t rsv_0xA6[74];  /* RESERVED REGISTER BLOCK */
    register8_t PSOC2;         /* PSC2 Synchro and Output Configuration */
    register8_t POM2;          /* PSC 2 Output Matrix */
    _REGISTER16 (OCR2SA);      /* Output Compare SA Register  */
    register8_t rsv_0xF3;      /* RESERVED REGISTER */
    _REGISTER16 (OCR2RA);      /* Output Compare RA Register  */
    register8_t rsv_0xF5;      /* RESERVED REGISTER */
    _REGISTER16 (OCR2SB);      /* Output Compare SB Register  */
    register8_t rsv_0xF7;      /* RESERVED REGISTER */
    _REGISTER16 (OCR2RB);      /* Output Compare RB Register  */
    register8_t rsv_0xF9;      /* RESERVED REGISTER */
    register8_t PCNF2;         /* PSC 2 Configuration Register */
    register8_t PCTL2;         /* PSC 2 Control Register */
    register8_t PFRC2A;        /* PSC 2 Input B Control */
    register8_t PFRC2B;        /* PSC 2 Input B Control */
    _REGISTER16 (PICR2);       /* PSC 2 Input Capture Register  */
} PSC2_t;


/* PSC 0 Input Capture Software Trig */
typedef enum PSC0_PCST0_enum
{
    PSC0_PCST0_CLEAR_gc = (0x00)  , /* PSC 0 Input Capture Software Trig - CLEAR */
    PSC0_PCST0_SET_gc   = (0x8000), /* PSC 0 Input Capture Software Trig - SET */
} PSC0_PCST0_t;

/* PSC 0 Input Capture Bytes */
#define PSC0_PICR0_PICR0_gc(x) (x & 0xFFF)

/* PSC 0 Capture Enable Input Part B */
typedef enum PSC0_PCAE0B_enum
{
    PSC0_PCAE0B_CLEAR_gc = (0x00), /* PSC 0 Capture Enable Input Part B - CLEAR */
    PSC0_PCAE0B_SET_gc   = (0x80), /* PSC 0 Capture Enable Input Part B - SET */
} PSC0_PCAE0B_t;

/* PSC 0 Input Select for Part B */
typedef enum PSC0_PISEL0B_enum
{
    PSC0_PISEL0B_CLEAR_gc = (0x00), /* PSC 0 Input Select for Part B - CLEAR */
    PSC0_PISEL0B_SET_gc   = (0x40), /* PSC 0 Input Select for Part B - SET */
} PSC0_PISEL0B_t;

/* PSC 0 Edge Level Selector on Input Part B */
typedef enum PSC0_PELEV0B_enum
{
    PSC0_PELEV0B_CLEAR_gc = (0x00), /* PSC 0 Edge Level Selector on Input Part B - CLEAR */
    PSC0_PELEV0B_SET_gc   = (0x20), /* PSC 0 Edge Level Selector on Input Part B - SET */
} PSC0_PELEV0B_t;

/* PSC 0 Filter Enable on Input Part B */
typedef enum PSC0_PFLTE0B_enum
{
    PSC0_PFLTE0B_CLEAR_gc = (0x00), /* PSC 0 Filter Enable on Input Part B - CLEAR */
    PSC0_PFLTE0B_SET_gc   = (0x10), /* PSC 0 Filter Enable on Input Part B - SET */
} PSC0_PFLTE0B_t;

/* PSC 0 Retrigger and Fault Mode for Part B */
#define PSC0_PFRC0B_PRFM0B_gc(x) (x & 0x0F)

/* PSC 0 Capture Enable Input Part A */
typedef enum PSC0_PCAE0A_enum
{
    PSC0_PCAE0A_CLEAR_gc = (0x00), /* PSC 0 Capture Enable Input Part A - CLEAR */
    PSC0_PCAE0A_SET_gc   = (0x80), /* PSC 0 Capture Enable Input Part A - SET */
} PSC0_PCAE0A_t;

/* PSC 0 Input Select for Part A */
typedef enum PSC0_PISEL0A_enum
{
    PSC0_PISEL0A_CLEAR_gc = (0x00), /* PSC 0 Input Select for Part A - CLEAR */
    PSC0_PISEL0A_SET_gc   = (0x40), /* PSC 0 Input Select for Part A - SET */
} PSC0_PISEL0A_t;

/* PSC 0 Edge Level Selector on Input Part A */
typedef enum PSC0_PELEV0A_enum
{
    PSC0_PELEV0A_CLEAR_gc = (0x00), /* PSC 0 Edge Level Selector on Input Part A - CLEAR */
    PSC0_PELEV0A_SET_gc   = (0x20), /* PSC 0 Edge Level Selector on Input Part A - SET */
} PSC0_PELEV0A_t;

/* PSC 0 Filter Enable on Input Part A */
typedef enum PSC0_PFLTE0A_enum
{
    PSC0_PFLTE0A_CLEAR_gc = (0x00), /* PSC 0 Filter Enable on Input Part A - CLEAR */
    PSC0_PFLTE0A_SET_gc   = (0x10), /* PSC 0 Filter Enable on Input Part A - SET */
} PSC0_PFLTE0A_t;

/* PSC 0 Retrigger and Fault Mode for Part A */
#define PSC0_PFRC0A_PRFM0A_gc(x) (x & 0x0F)

/* PSC 0 Prescaler Selects */
#define PSC0_PCTL0_PPRE0_gc(x) ((x<<6) & 0xC0)

/* PSC 0 Balance Flank Width Modulation */
typedef enum PSC0_PBFM0_enum
{
    PSC0_PBFM0_CLEAR_gc = (0x00), /* PSC 0 Balance Flank Width Modulation - CLEAR */
    PSC0_PBFM0_SET_gc   = (0x20), /* PSC 0 Balance Flank Width Modulation - SET */
} PSC0_PBFM0_t;

/* PSC 0 Asynchronous Output Control B */
typedef enum PSC0_PAOC0B_enum
{
    PSC0_PAOC0B_CLEAR_gc = (0x00), /* PSC 0 Asynchronous Output Control B - CLEAR */
    PSC0_PAOC0B_SET_gc   = (0x10), /* PSC 0 Asynchronous Output Control B - SET */
} PSC0_PAOC0B_t;

/* PSC 0 Asynchronous Output Control A */
typedef enum PSC0_PAOC0A_enum
{
    PSC0_PAOC0A_CLEAR_gc = (0x00), /* PSC 0 Asynchronous Output Control A - CLEAR */
    PSC0_PAOC0A_SET_gc   = (0x08), /* PSC 0 Asynchronous Output Control A - SET */
} PSC0_PAOC0A_t;

/* PSC0 Auto Run */
typedef enum PSC0_PARUN0_enum
{
    PSC0_PARUN0_CLEAR_gc = (0x00), /* PSC0 Auto Run - CLEAR */
    PSC0_PARUN0_SET_gc   = (0x04), /* PSC0 Auto Run - SET */
} PSC0_PARUN0_t;

/* PSC0 Complete Cycle */
typedef enum PSC0_PCCYC0_enum
{
    PSC0_PCCYC0_CLEAR_gc = (0x00), /* PSC0 Complete Cycle - CLEAR */
    PSC0_PCCYC0_SET_gc   = (0x02), /* PSC0 Complete Cycle - SET */
} PSC0_PCCYC0_t;

/* PSC 0 Run */
typedef enum PSC0_PRUN0_enum
{
    PSC0_PRUN0_CLEAR_gc = (0x00), /* PSC 0 Run - CLEAR */
    PSC0_PRUN0_SET_gc   = (0x01), /* PSC 0 Run - SET */
} PSC0_PRUN0_t;

/* PSC 0 Fifty */
typedef enum PSC0_PFIFTY0_enum
{
    PSC0_PFIFTY0_CLEAR_gc = (0x00), /* PSC 0 Fifty - CLEAR */
    PSC0_PFIFTY0_SET_gc   = (0x80), /* PSC 0 Fifty - SET */
} PSC0_PFIFTY0_t;

/* PSC 0 Autolock */
typedef enum PSC0_PALOCK0_enum
{
    PSC0_PALOCK0_CLEAR_gc = (0x00), /* PSC 0 Autolock - CLEAR */
    PSC0_PALOCK0_SET_gc   = (0x40), /* PSC 0 Autolock - SET */
} PSC0_PALOCK0_t;

/* PSC 0 Lock */
typedef enum PSC0_PLOCK0_enum
{
    PSC0_PLOCK0_CLEAR_gc = (0x00), /* PSC 0 Lock - CLEAR */
    PSC0_PLOCK0_SET_gc   = (0x20), /* PSC 0 Lock - SET */
} PSC0_PLOCK0_t;

/* PSC 0 Mode */
#define PSC0_PCNF0_PMODE0_gc(x) ((x<<3) & 0x18)

/* PSC 0 Output Polarity */
typedef enum PSC0_POP0_enum
{
    PSC0_POP0_CLEAR_gc = (0x00), /* PSC 0 Output Polarity - CLEAR */
    PSC0_POP0_SET_gc   = (0x04), /* PSC 0 Output Polarity - SET */
} PSC0_POP0_t;

/* PSC 0 Input Clock Select */
typedef enum PSC0_PCLKSEL0_enum
{
    PSC0_PCLKSEL0_CLEAR_gc = (0x00), /* PSC 0 Input Clock Select - CLEAR */
    PSC0_PCLKSEL0_SET_gc   = (0x02), /* PSC 0 Input Clock Select - SET */
} PSC0_PCLKSEL0_t;

/* Synchronization Out for ADC Selection */
#define PSC0_PSOC0_PSYNC0_gc(x) ((x<<4) & 0x30)

/* PSCOUT01 Output Enable */
typedef enum PSC0_POEN0B_enum
{
    PSC0_POEN0B_CLEAR_gc = (0x00), /* PSCOUT01 Output Enable - CLEAR */
    PSC0_POEN0B_SET_gc   = (0x04), /* PSCOUT01 Output Enable - SET */
} PSC0_POEN0B_t;

/* PSCOUT00 Output Enable */
typedef enum PSC0_POEN0A_enum
{
    PSC0_POEN0A_CLEAR_gc = (0x00), /* PSCOUT00 Output Enable - CLEAR */
    PSC0_POEN0A_SET_gc   = (0x01), /* PSCOUT00 Output Enable - SET */
} PSC0_POEN0A_t;

/* PSC 0 Synchro Error Interrupt Enable */
typedef enum PSC0_PSEIE0_enum
{
    PSC0_PSEIE0_CLEAR_gc = (0x00), /* PSC 0 Synchro Error Interrupt Enable - CLEAR */
    PSC0_PSEIE0_SET_gc   = (0x20), /* PSC 0 Synchro Error Interrupt Enable - SET */
} PSC0_PSEIE0_t;

/* External Event B Interrupt Enable */
typedef enum PSC0_PEVE0B_enum
{
    PSC0_PEVE0B_CLEAR_gc = (0x00), /* External Event B Interrupt Enable - CLEAR */
    PSC0_PEVE0B_SET_gc   = (0x10), /* External Event B Interrupt Enable - SET */
} PSC0_PEVE0B_t;

/* External Event A Interrupt Enable */
typedef enum PSC0_PEVE0A_enum
{
    PSC0_PEVE0A_CLEAR_gc = (0x00), /* External Event A Interrupt Enable - CLEAR */
    PSC0_PEVE0A_SET_gc   = (0x08), /* External Event A Interrupt Enable - SET */
} PSC0_PEVE0A_t;

/* End of Cycle Interrupt Enable */
typedef enum PSC0_PEOPE0_enum
{
    PSC0_PEOPE0_CLEAR_gc = (0x00), /* End of Cycle Interrupt Enable - CLEAR */
    PSC0_PEOPE0_SET_gc   = (0x01), /* End of Cycle Interrupt Enable - SET */
} PSC0_PEOPE0_t;

/* PSC 0 Output A Activity */
typedef enum PSC0_POAC0B_enum
{
    PSC0_POAC0B_CLEAR_gc = (0x00), /* PSC 0 Output A Activity - CLEAR */
    PSC0_POAC0B_SET_gc   = (0x80), /* PSC 0 Output A Activity - SET */
} PSC0_POAC0B_t;

/* PSC 0 Output A Activity */
typedef enum PSC0_POAC0A_enum
{
    PSC0_POAC0A_CLEAR_gc = (0x00), /* PSC 0 Output A Activity - CLEAR */
    PSC0_POAC0A_SET_gc   = (0x40), /* PSC 0 Output A Activity - SET */
} PSC0_POAC0A_t;

/* PSC 0 Synchro Error Interrupt */
typedef enum PSC0_PSEI0_enum
{
    PSC0_PSEI0_CLEAR_gc = (0x00), /* PSC 0 Synchro Error Interrupt - CLEAR */
    PSC0_PSEI0_SET_gc   = (0x20), /* PSC 0 Synchro Error Interrupt - SET */
} PSC0_PSEI0_t;

/* External Event B Interrupt */
typedef enum PSC0_PEV0B_enum
{
    PSC0_PEV0B_CLEAR_gc = (0x00), /* External Event B Interrupt - CLEAR */
    PSC0_PEV0B_SET_gc   = (0x10), /* External Event B Interrupt - SET */
} PSC0_PEV0B_t;

/* External Event A Interrupt */
typedef enum PSC0_PEV0A_enum
{
    PSC0_PEV0A_CLEAR_gc = (0x00), /* External Event A Interrupt - CLEAR */
    PSC0_PEV0A_SET_gc   = (0x08), /* External Event A Interrupt - SET */
} PSC0_PEV0A_t;

/* Ramp Number */
#define PSC0_PIFR0_PRN0_gc(x) ((x<<1) & 0x06)

/* End of PSC0 Interrupt */
typedef enum PSC0_PEOP0_enum
{
    PSC0_PEOP0_CLEAR_gc = (0x00), /* End of PSC0 Interrupt - CLEAR */
    PSC0_PEOP0_SET_gc   = (0x01), /* End of PSC0 Interrupt - SET */
} PSC0_PEOP0_t;

/* PSC 2 Input Capture Software Trig */
typedef enum PSC2_PCST2_enum
{
    PSC2_PCST2_CLEAR_gc = (0x00)  , /* PSC 2 Input Capture Software Trig - CLEAR */
    PSC2_PCST2_SET_gc   = (0x8000), /* PSC 2 Input Capture Software Trig - SET */
} PSC2_PCST2_t;

/* PSC 2 Input Capture Bytes */
#define PSC2_PICR2_PICR2_gc(x) (x & 0xFFF)

/* PSC 2 Capture Enable Input Part B */
typedef enum PSC2_PCAE2B_enum
{
    PSC2_PCAE2B_CLEAR_gc = (0x00), /* PSC 2 Capture Enable Input Part B - CLEAR */
    PSC2_PCAE2B_SET_gc   = (0x80), /* PSC 2 Capture Enable Input Part B - SET */
} PSC2_PCAE2B_t;

/* PSC 2 Input Select for Part B */
typedef enum PSC2_PISEL2B_enum
{
    PSC2_PISEL2B_CLEAR_gc = (0x00), /* PSC 2 Input Select for Part B - CLEAR */
    PSC2_PISEL2B_SET_gc   = (0x40), /* PSC 2 Input Select for Part B - SET */
} PSC2_PISEL2B_t;

/* PSC 2 Edge Level Selector on Input Part B */
typedef enum PSC2_PELEV2B_enum
{
    PSC2_PELEV2B_CLEAR_gc = (0x00), /* PSC 2 Edge Level Selector on Input Part B - CLEAR */
    PSC2_PELEV2B_SET_gc   = (0x20), /* PSC 2 Edge Level Selector on Input Part B - SET */
} PSC2_PELEV2B_t;

/* PSC 2 Filter Enable on Input Part B */
typedef enum PSC2_PFLTE2B_enum
{
    PSC2_PFLTE2B_CLEAR_gc = (0x00), /* PSC 2 Filter Enable on Input Part B - CLEAR */
    PSC2_PFLTE2B_SET_gc   = (0x10), /* PSC 2 Filter Enable on Input Part B - SET */
} PSC2_PFLTE2B_t;

/* PSC 2 Retrigger and Fault Mode for Part B */
#define PSC2_PFRC2B_PRFM2B_gc(x) (x & 0x0F)

/* PSC 2 Capture Enable Input Part A */
typedef enum PSC2_PCAE2A_enum
{
    PSC2_PCAE2A_CLEAR_gc = (0x00), /* PSC 2 Capture Enable Input Part A - CLEAR */
    PSC2_PCAE2A_SET_gc   = (0x80), /* PSC 2 Capture Enable Input Part A - SET */
} PSC2_PCAE2A_t;

/* PSC 2 Input Select for Part A */
typedef enum PSC2_PISEL2A_enum
{
    PSC2_PISEL2A_CLEAR_gc = (0x00), /* PSC 2 Input Select for Part A - CLEAR */
    PSC2_PISEL2A_SET_gc   = (0x40), /* PSC 2 Input Select for Part A - SET */
} PSC2_PISEL2A_t;

/* PSC 2 Edge Level Selector on Input Part A */
typedef enum PSC2_PELEV2A_enum
{
    PSC2_PELEV2A_CLEAR_gc = (0x00), /* PSC 2 Edge Level Selector on Input Part A - CLEAR */
    PSC2_PELEV2A_SET_gc   = (0x20), /* PSC 2 Edge Level Selector on Input Part A - SET */
} PSC2_PELEV2A_t;

/* PSC 2 Filter Enable on Input Part A */
typedef enum PSC2_PFLTE2A_enum
{
    PSC2_PFLTE2A_CLEAR_gc = (0x00), /* PSC 2 Filter Enable on Input Part A - CLEAR */
    PSC2_PFLTE2A_SET_gc   = (0x10), /* PSC 2 Filter Enable on Input Part A - SET */
} PSC2_PFLTE2A_t;

/* PSC 2 Retrigger and Fault Mode for Part A */
#define PSC2_PFRC2A_PRFM2A_gc(x) (x & 0x0F)

/* PSC 2 Prescaler Selects */
#define PSC2_PCTL2_PPRE2_gc(x) ((x<<6) & 0xC0)

/* Balance Flank Width Modulation */
typedef enum PSC2_PBFM2_enum
{
    PSC2_PBFM2_CLEAR_gc = (0x00), /* Balance Flank Width Modulation - CLEAR */
    PSC2_PBFM2_SET_gc   = (0x20), /* Balance Flank Width Modulation - SET */
} PSC2_PBFM2_t;

/* PSC 2 Asynchronous Output Control B */
typedef enum PSC2_PAOC2B_enum
{
    PSC2_PAOC2B_CLEAR_gc = (0x00), /* PSC 2 Asynchronous Output Control B - CLEAR */
    PSC2_PAOC2B_SET_gc   = (0x10), /* PSC 2 Asynchronous Output Control B - SET */
} PSC2_PAOC2B_t;

/* PSC 2 Asynchronous Output Control A */
typedef enum PSC2_PAOC2A_enum
{
    PSC2_PAOC2A_CLEAR_gc = (0x00), /* PSC 2 Asynchronous Output Control A - CLEAR */
    PSC2_PAOC2A_SET_gc   = (0x08), /* PSC 2 Asynchronous Output Control A - SET */
} PSC2_PAOC2A_t;

/* PSC2 Auto Run */
typedef enum PSC2_PARUN2_enum
{
    PSC2_PARUN2_CLEAR_gc = (0x00), /* PSC2 Auto Run - CLEAR */
    PSC2_PARUN2_SET_gc   = (0x04), /* PSC2 Auto Run - SET */
} PSC2_PARUN2_t;

/* PSC2 Complete Cycle */
typedef enum PSC2_PCCYC2_enum
{
    PSC2_PCCYC2_CLEAR_gc = (0x00), /* PSC2 Complete Cycle - CLEAR */
    PSC2_PCCYC2_SET_gc   = (0x02), /* PSC2 Complete Cycle - SET */
} PSC2_PCCYC2_t;

/* PSC 2 Run */
typedef enum PSC2_PRUN2_enum
{
    PSC2_PRUN2_CLEAR_gc = (0x00), /* PSC 2 Run - CLEAR */
    PSC2_PRUN2_SET_gc   = (0x01), /* PSC 2 Run - SET */
} PSC2_PRUN2_t;

/* PSC 2 Fifty */
typedef enum PSC2_PFIFTY2_enum
{
    PSC2_PFIFTY2_CLEAR_gc = (0x00), /* PSC 2 Fifty - CLEAR */
    PSC2_PFIFTY2_SET_gc   = (0x80), /* PSC 2 Fifty - SET */
} PSC2_PFIFTY2_t;

/* PSC 2 Autolock */
typedef enum PSC2_PALOCK2_enum
{
    PSC2_PALOCK2_CLEAR_gc = (0x00), /* PSC 2 Autolock - CLEAR */
    PSC2_PALOCK2_SET_gc   = (0x40), /* PSC 2 Autolock - SET */
} PSC2_PALOCK2_t;

/* PSC 2 Lock */
typedef enum PSC2_PLOCK2_enum
{
    PSC2_PLOCK2_CLEAR_gc = (0x00), /* PSC 2 Lock - CLEAR */
    PSC2_PLOCK2_SET_gc   = (0x20), /* PSC 2 Lock - SET */
} PSC2_PLOCK2_t;

/* PSC 2 Mode */
#define PSC2_PCNF2_PMODE2_gc(x) ((x<<3) & 0x18)

/* PSC 2 Output Polarity */
typedef enum PSC2_POP2_enum
{
    PSC2_POP2_CLEAR_gc = (0x00), /* PSC 2 Output Polarity - CLEAR */
    PSC2_POP2_SET_gc   = (0x04), /* PSC 2 Output Polarity - SET */
} PSC2_POP2_t;

/* PSC 2 Input Clock Select */
typedef enum PSC2_PCLKSEL2_enum
{
    PSC2_PCLKSEL2_CLEAR_gc = (0x00), /* PSC 2 Input Clock Select - CLEAR */
    PSC2_PCLKSEL2_SET_gc   = (0x02), /* PSC 2 Input Clock Select - SET */
} PSC2_PCLKSEL2_t;

/* PSC 2 Output Matrix Enable */
typedef enum PSC2_POME2_enum
{
    PSC2_POME2_CLEAR_gc = (0x00), /* PSC 2 Output Matrix Enable - CLEAR */
    PSC2_POME2_SET_gc   = (0x01), /* PSC 2 Output Matrix Enable - SET */
} PSC2_POME2_t;

/* Output Matrix Output B Ramps */
#define PSC2_POM2_POMV2B_gc(x) ((x<<4) & 0xF0)

/* Output Matrix Output A Ramps */
#define PSC2_POM2_POMV2A_gc(x) (x & 0x0F)

/* PSC 2 Output 23 Select */
#define PSC2_PSOC2_POS2_gc(x) ((x<<6) & 0xC0)

/* Synchronization Out for ADC Selection */
#define PSC2_PSOC2_PSYNC2_gc(x) ((x<<4) & 0x30)

/* PSCOUT23 Output Enable */
typedef enum PSC2_POEN2D_enum
{
    PSC2_POEN2D_CLEAR_gc = (0x00), /* PSCOUT23 Output Enable - CLEAR */
    PSC2_POEN2D_SET_gc   = (0x08), /* PSCOUT23 Output Enable - SET */
} PSC2_POEN2D_t;

/* PSCOUT21 Output Enable */
typedef enum PSC2_POEN2B_enum
{
    PSC2_POEN2B_CLEAR_gc = (0x00), /* PSCOUT21 Output Enable - CLEAR */
    PSC2_POEN2B_SET_gc   = (0x04), /* PSCOUT21 Output Enable - SET */
} PSC2_POEN2B_t;

/* PSCOUT22 Output Enable */
typedef enum PSC2_POEN2C_enum
{
    PSC2_POEN2C_CLEAR_gc = (0x00), /* PSCOUT22 Output Enable - CLEAR */
    PSC2_POEN2C_SET_gc   = (0x02), /* PSCOUT22 Output Enable - SET */
} PSC2_POEN2C_t;

/* PSCOUT20 Output Enable */
typedef enum PSC2_POEN2A_enum
{
    PSC2_POEN2A_CLEAR_gc = (0x00), /* PSCOUT20 Output Enable - CLEAR */
    PSC2_POEN2A_SET_gc   = (0x01), /* PSCOUT20 Output Enable - SET */
} PSC2_POEN2A_t;

/* PSC 2 Synchro Error Interrupt Enable */
typedef enum PSC2_PSEIE2_enum
{
    PSC2_PSEIE2_CLEAR_gc = (0x00), /* PSC 2 Synchro Error Interrupt Enable - CLEAR */
    PSC2_PSEIE2_SET_gc   = (0x20), /* PSC 2 Synchro Error Interrupt Enable - SET */
} PSC2_PSEIE2_t;

/* External Event B Interrupt Enable */
typedef enum PSC2_PEVE2B_enum
{
    PSC2_PEVE2B_CLEAR_gc = (0x00), /* External Event B Interrupt Enable - CLEAR */
    PSC2_PEVE2B_SET_gc   = (0x10), /* External Event B Interrupt Enable - SET */
} PSC2_PEVE2B_t;

/* External Event A Interrupt Enable */
typedef enum PSC2_PEVE2A_enum
{
    PSC2_PEVE2A_CLEAR_gc = (0x00), /* External Event A Interrupt Enable - CLEAR */
    PSC2_PEVE2A_SET_gc   = (0x08), /* External Event A Interrupt Enable - SET */
} PSC2_PEVE2A_t;

/* End of Cycle Interrupt Enable */
typedef enum PSC2_PEOPE2_enum
{
    PSC2_PEOPE2_CLEAR_gc = (0x00), /* End of Cycle Interrupt Enable - CLEAR */
    PSC2_PEOPE2_SET_gc   = (0x01), /* End of Cycle Interrupt Enable - SET */
} PSC2_PEOPE2_t;

/* PSC 2 Output A Activity */
typedef enum PSC2_POAC2B_enum
{
    PSC2_POAC2B_CLEAR_gc = (0x00), /* PSC 2 Output A Activity - CLEAR */
    PSC2_POAC2B_SET_gc   = (0x80), /* PSC 2 Output A Activity - SET */
} PSC2_POAC2B_t;

/* PSC 2 Output A Activity */
typedef enum PSC2_POAC2A_enum
{
    PSC2_POAC2A_CLEAR_gc = (0x00), /* PSC 2 Output A Activity - CLEAR */
    PSC2_POAC2A_SET_gc   = (0x40), /* PSC 2 Output A Activity - SET */
} PSC2_POAC2A_t;

/* PSC 2 Synchro Error Interrupt */
typedef enum PSC2_PSEI2_enum
{
    PSC2_PSEI2_CLEAR_gc = (0x00), /* PSC 2 Synchro Error Interrupt - CLEAR */
    PSC2_PSEI2_SET_gc   = (0x20), /* PSC 2 Synchro Error Interrupt - SET */
} PSC2_PSEI2_t;

/* External Event B Interrupt */
typedef enum PSC2_PEV2B_enum
{
    PSC2_PEV2B_CLEAR_gc = (0x00), /* External Event B Interrupt - CLEAR */
    PSC2_PEV2B_SET_gc   = (0x10), /* External Event B Interrupt - SET */
} PSC2_PEV2B_t;

/* External Event A Interrupt */
typedef enum PSC2_PEV2A_enum
{
    PSC2_PEV2A_CLEAR_gc = (0x00), /* External Event A Interrupt - CLEAR */
    PSC2_PEV2A_SET_gc   = (0x08), /* External Event A Interrupt - SET */
} PSC2_PEV2A_t;

/* Ramp Number */
#define PSC2_PIFR2_PRN2_gc(x) ((x<<1) & 0x06)

/* End of PSC2 Interrupt */
typedef enum PSC2_PEOP2_enum
{
    PSC2_PEOP2_CLEAR_gc = (0x00), /* End of PSC2 Interrupt - CLEAR */
    PSC2_PEOP2_SET_gc   = (0x01), /* End of PSC2 Interrupt - SET */
} PSC2_PEOP2_t;
/*
================================================================================
IO Module Instances. Mapped to memory.
================================================================================
*/

#define PORTB     (*(PORTB_t *) 0x0000)     /* I/O Port */
#define PORTD     (*(PORTD_t *) 0x0000)     /* I/O Port */
#define PORTE     (*(PORTE_t *) 0x0000)     /* I/O Port */
#define BOOT_LOAD (*(BOOT_LOAD_t *) 0x0000) /* Bootloader */
#define EUSART    (*(EUSART_t *) 0x0000)    /* Extended USART */
#define AC        (*(AC_t *) 0x0000)        /* Analog Comparator */
#define DAC       (*(DAC_t *) 0x0000)       /* Digital-to-Analog Converter */
#define CPU       (*(CPU_t *) 0x0000)       /* CPU Registers */
#define TC0       (*(TC0_t *) 0x0000)       /* Timer/Counter, 8-bit */
#define TC1       (*(TC1_t *) 0x0000)       /* Timer/Counter, 16-bit */
#define ADC       (*(ADC_t *) 0x0000)       /* Analog-to-Digital Converter */
#define USART     (*(USART_t *) 0x0000)     /* USART */
#define SPI       (*(SPI_t *) 0x0000)       /* Serial Peripheral Interface */
#define WDT       (*(WDT_t *) 0x0000)       /* Watchdog Timer */
#define EXINT     (*(EXINT_t *) 0x0000)     /* External Interrupts */
#define EEPROM    (*(EEPROM_t *) 0x0000)    /* EEPROM */
#define PSC0      (*(PSC0_t *) 0x0000)      /* Power Stage Controller */
#define PSC2      (*(PSC2_t *) 0x0000)      /* Power Stage Controller */
#define FUSE      (*(FUSE_t *) 0x0000)      /* Fuses */
#define LOCKBIT   (*(LOCKBIT_t *) 0x0000)   /* Lockbits */
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


/* PSC2 Reset Behavior */
#define FUSE_PSC2RB_CLEAR_gc (0x00) /* PSC2 Reset Behavior - CLEAR */
#define FUSE_PSC2RB_SET_gc   (0x80) /* PSC2 Reset Behavior - SET */


/* PSC1 Reset Behavior */
#define FUSE_PSC1RB_CLEAR_gc (0x00) /* PSC1 Reset Behavior - CLEAR */
#define FUSE_PSC1RB_SET_gc   (0x40) /* PSC1 Reset Behavior - SET */


/* PSC0 Reset Behavior */
#define FUSE_PSC0RB_CLEAR_gc (0x00) /* PSC0 Reset Behavior - CLEAR */
#define FUSE_PSC0RB_SET_gc   (0x20) /* PSC0 Reset Behavior - SET */


/* PSCOUT Reset Value */
#define FUSE_PSCRV_CLEAR_gc (0x00) /* PSCOUT Reset Value - CLEAR */
#define FUSE_PSCRV_SET_gc   (0x10) /* PSCOUT Reset Value - SET */


/* Select Boot Size */
#define FUSE_BOOTSZ_256W_1F00_gc  (0x03<<1) /* Boot Flash size=256 words Boot address=$1F00 */
#define FUSE_BOOTSZ_512W_1E00_gc  (0x02<<1) /* Boot Flash size=512 words Boot address=$1E00 */
#define FUSE_BOOTSZ_1024W_1C00_gc (0x01<<1) /* Boot Flash size=1024 words Boot address=$1C00 */
#define FUSE_BOOTSZ_2048W_1800_gc (0x00<<1) /* Boot Flash size=2048 words Boot address=$1800 */


/* Select Reset Vector */
#define FUSE_BOOTRST_CLEAR_gc (0x00) /* Select Reset Vector - CLEAR */
#define FUSE_BOOTRST_SET_gc   (0x01) /* Select Reset Vector - SET */


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


/* Brown-out Detector Trigger Level */
#define FUSE_BODLEVEL_DISABLED_gc (0x07) /* Brown-out detection disabled */
#define FUSE_BODLEVEL_4V5_gc      (0x06) /* Brown-out detection at VCC=4.5 V */
#define FUSE_BODLEVEL_2V7_gc      (0x05) /* Brown-out detection at VCC=2.7 V */
#define FUSE_BODLEVEL_4V3_gc      (0x04) /* Brown-out detection at VCC=4.3 V */
#define FUSE_BODLEVEL_4V4_gc      (0x03) /* Brown-out detection at VCC=4.4 V */
#define FUSE_BODLEVEL_4V2_gc      (0x02) /* Brown-out detection at VCC=4.2 V */
#define FUSE_BODLEVEL_2V8_gc      (0x01) /* Brown-out detection at VCC=2.8 V */
#define FUSE_BODLEVEL_2V6_gc      (0x00) /* Brown-out detection at VCC=2.6 V */


/* Divide clock by 8 internally */
#define FUSE_CKDIV8_CLEAR_gc (0x00) /* Divide clock by 8 internally - CLEAR */
#define FUSE_CKDIV8_SET_gc   (0x80) /* Divide clock by 8 internally - SET */


/* Clock output on PORTB0 */
#define FUSE_CKOUT_CLEAR_gc (0x00) /* Clock output on PORTB0 - CLEAR */
#define FUSE_CKOUT_SET_gc   (0x40) /* Clock output on PORTB0 - SET */


/* Select Clock Source */
#define FUSE_SUT_CKSEL_EXTCLK_6CK_14CK_0MS_gc                 (0x00) /* Ext. Clock; Start-up time PWRDWN/RESET: 6 CK/14 CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTCLK_6CK_14CK_4MS1_gc                (0x10) /* Ext. Clock; Start-up time PWRDWN/RESET: 6 CK/14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTCLK_6CK_14CK_65MS_gc                (0x20) /* Ext. Clock; Start-up time PWRDWN/RESET: 6 CK/14 CK + 65 ms */
#define FUSE_SUT_CKSEL_INTRCOSC_8MHZ_6CK_14CK_0MS_gc          (0x02) /* Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 0 ms */
#define FUSE_SUT_CKSEL_INTRCOSC_8MHZ_6CK_14CK_4MS1_gc         (0x12) /* Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_INTRCOSC_8MHZ_6CK_14CK_65MS_gc         (0x22) /* Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_258CK_14CK_4MS1_gc (0x08) /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_258CK_14CK_65MS_gc (0x18) /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_1KCK_14CK_0MS_gc   (0x28) /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_1KCK_14CK_4MS1_gc  (0x38) /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_1KCK_14CK_65MS_gc  (0x09) /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_16KCK_14CK_0MS_gc  (0x19) /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_16KCK_14CK_4MS1_gc (0x29) /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_16KCK_14CK_65MS_gc (0x39) /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_258CK_14CK_4MS1_gc  (0x0A) /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_258CK_14CK_65MS_gc  (0x1A) /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_1KCK_14CK_0MS_gc    (0x2A) /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_1KCK_14CK_4MS1_gc   (0x3A) /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_1KCK_14CK_65MS_gc   (0x0B) /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_16KCK_14CK_0MS_gc   (0x1B) /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_16KCK_14CK_4MS1_gc  (0x2B) /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_16KCK_14CK_65MS_gc  (0x3B) /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_258CK_14CK_4MS1_gc   (0x0C) /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_258CK_14CK_65MS_gc   (0x1C) /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_1KCK_14CK_0MS_gc     (0x2C) /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_1KCK_14CK_4MS1_gc    (0x3C) /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_1KCK_14CK_65MS_gc    (0x0D) /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_16KCK_14CK_0MS_gc    (0x1D) /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_16KCK_14CK_4MS1_gc   (0x2D) /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_16KCK_14CK_65MS_gc   (0x3D) /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_258CK_14CK_4MS1_gc     (0x0E) /* Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_258CK_14CK_65MS_gc     (0x1E) /* Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_1KCK_14CK_0MS_gc       (0x2E) /* Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_1KCK_14CK_4MS1_gc      (0x3E) /* Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_1KCK_14CK_65MS_gc      (0x0F) /* Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_16KCK_14CK_0MS_gc      (0x1F) /* Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_16KCK_14CK_4MS1_gc     (0x2F) /* Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_16KCK_14CK_65MS_gc     (0x3F) /* Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 65 ms */
#define FUSE_SUT_CKSEL_PLLCLK_16MHZ_1KCK_14CK_0MS_gc          (0x03) /* PLL clock 16 MHz; Start-up time PWRDWN/RESET: 1K CK/14 CK + 0 ms */
#define FUSE_SUT_CKSEL_PLLCLK_16MHZ_1KCK_14CK_4MS1_gc         (0x13) /* PLL clock 16 MHz; Start-up time PWRDWN/RESET: 1K CK/14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_PLLCLK_16MHZ_1KCK_14CK_65MS_gc         (0x23) /* PLL clock 16 MHz; Start-up time PWRDWN/RESET: 1K CK/14 CK + 65 ms */
#define FUSE_SUT_CKSEL_PLLCLK_16MHZ_16KCK_14CK_0MS_gc         (0x33) /* PLL clock 16 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 0 ms */


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
BOOT_LOAD - Bootloader
--------------------------------------------------------------------------------
*/


/* SPM Interrupt Enable */
#define BOOT_LOAD_SPMIE_CLEAR_gc (0x00) /* SPM Interrupt Enable - CLEAR */
#define BOOT_LOAD_SPMIE_SET_gc   (0x80) /* SPM Interrupt Enable - SET */


/* Read While Write Section Busy */
#define BOOT_LOAD_RWWSB_CLEAR_gc (0x00) /* Read While Write Section Busy - CLEAR */
#define BOOT_LOAD_RWWSB_SET_gc   (0x40) /* Read While Write Section Busy - SET */


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
EUSART - Extended USART
--------------------------------------------------------------------------------
*/


/* EUSART Control and Status Register A Bits */
#define EUSART_UTxS_VAL_0x00_gc (0x00<<4) /* 5-bit */
#define EUSART_UTxS_VAL_0x01_gc (0x01<<4) /* 6-bit */
#define EUSART_UTxS_VAL_0x02_gc (0x02<<4) /* 7-bit */
#define EUSART_UTxS_VAL_0x03_gc (0x03<<4) /* 8-bit */
#define EUSART_UTxS_VAL_0x04_gc (0x04<<4) /* Reserved */
#define EUSART_UTxS_VAL_0x05_gc (0x05<<4) /* Reserved */
#define EUSART_UTxS_VAL_0x06_gc (0x06<<4) /* Reserved */
#define EUSART_UTxS_VAL_0x07_gc (0x07<<4) /* 9-bit */
#define EUSART_UTxS_VAL_0x08_gc (0x08<<4) /* 13-bit */
#define EUSART_UTxS_VAL_0x09_gc (0x09<<4) /* 14-bit */
#define EUSART_UTxS_VAL_0x0A_gc (0x0A<<4) /* 15-bit */
#define EUSART_UTxS_VAL_0x0B_gc (0x0B<<4) /* 16-bit */
#define EUSART_UTxS_VAL_0x0C_gc (0x0C<<4) /* Reserved */
#define EUSART_UTxS_VAL_0x0D_gc (0x0D<<4) /* Reserved */
#define EUSART_UTxS_VAL_0x0E_gc (0x0E<<4) /* Reserved */
#define EUSART_UTxS_VAL_0x0F_gc (0x0F<<4) /* 17-bit */


/* EUSART Control and Status Register A Bits */
#define EUSART_URxS_VAL_0x00_gc (0x00) /* 5-bit */
#define EUSART_URxS_VAL_0x01_gc (0x01) /* 6-bit */
#define EUSART_URxS_VAL_0x02_gc (0x02) /* 7-bit */
#define EUSART_URxS_VAL_0x03_gc (0x03) /* 8-bit */
#define EUSART_URxS_VAL_0x04_gc (0x04) /* Reserved */
#define EUSART_URxS_VAL_0x05_gc (0x05) /* Reserved */
#define EUSART_URxS_VAL_0x06_gc (0x06) /* Reserved */
#define EUSART_URxS_VAL_0x07_gc (0x07) /* 9-bit */
#define EUSART_URxS_VAL_0x08_gc (0x08) /* 13-bit */
#define EUSART_URxS_VAL_0x09_gc (0x09) /* 14-bit */
#define EUSART_URxS_VAL_0x0A_gc (0x0A) /* 15-bit */
#define EUSART_URxS_VAL_0x0B_gc (0x0B) /* 16-bit */
#define EUSART_URxS_VAL_0x0C_gc (0x0C) /* Reserved */
#define EUSART_URxS_VAL_0x0D_gc (0x0D) /* Reserved */
#define EUSART_URxS_VAL_0x0E_gc (0x0E) /* 16 or 17 */
#define EUSART_URxS_VAL_0x0F_gc (0x0F) /* 17-bit */


/* EUSART Enable Bit */
#define EUSART_EUSART_CLEAR_gc (0x00) /* EUSART Enable Bit - CLEAR */
#define EUSART_EUSART_SET_gc   (0x10) /* EUSART Enable Bit - SET */


/* EUSBS Enable Bit */
#define EUSART_EUSBS_CLEAR_gc (0x00) /* EUSBS Enable Bit - CLEAR */
#define EUSART_EUSBS_SET_gc   (0x08) /* EUSBS Enable Bit - SET */


/* Manchester Mode Bit */
#define EUSART_EMCH_CLEAR_gc (0x00) /* Manchester Mode Bit - CLEAR */
#define EUSART_EMCH_SET_gc   (0x02) /* Manchester Mode Bit - SET */


/* Order Bit */
#define EUSART_BODR_CLEAR_gc (0x00) /* Order Bit - CLEAR */
#define EUSART_BODR_SET_gc   (0x01) /* Order Bit - SET */


/* Frame Error Manchester Bit */
#define EUSART_FEM_CLEAR_gc (0x00) /* Frame Error Manchester Bit - CLEAR */
#define EUSART_FEM_SET_gc   (0x08) /* Frame Error Manchester Bit - SET */


/* F1617 Bit */
#define EUSART_F1617_CLEAR_gc (0x00) /* F1617 Bit - CLEAR */
#define EUSART_F1617_SET_gc   (0x04) /* F1617 Bit - SET */


/* Stop Bits */
#define EUSART_EUCSRC_STP_gc(x) (x & 0x03)

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


/* Analog Comparator 0  Interrupt Select Bit */
#define AC_AC0CON_AC0IS_gc(x) ((x<<4) & 0x30)

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

/* Analog Comparator Clock Divider */
#define AC_ACCKDIV_CLEAR_gc (0x00) /* Analog Comparator Clock Divider - CLEAR */
#define AC_ACCKDIV_SET_gc   (0x80) /* Analog Comparator Clock Divider - SET */


/* Analog Comparator 2 Interrupt Flag Bit */
#define AC_AC2IF_CLEAR_gc (0x00) /* Analog Comparator 2 Interrupt Flag Bit - CLEAR */
#define AC_AC2IF_SET_gc   (0x40) /* Analog Comparator 2 Interrupt Flag Bit - SET */


/* Analog Comparator 1  Interrupt Flag Bit */
#define AC_AC1IF_CLEAR_gc (0x00) /* Analog Comparator 1  Interrupt Flag Bit - CLEAR */
#define AC_AC1IF_SET_gc   (0x20) /* Analog Comparator 1  Interrupt Flag Bit - SET */


/* Analog Comparator 0 Interrupt Flag Bit */
#define AC_AC0IF_CLEAR_gc (0x00) /* Analog Comparator 0 Interrupt Flag Bit - CLEAR */
#define AC_AC0IF_SET_gc   (0x10) /* Analog Comparator 0 Interrupt Flag Bit - SET */


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


/* Power Reduction PSC2 */
#define CPU_PRPSC2_CLEAR_gc (0x00) /* Power Reduction PSC2 - CLEAR */
#define CPU_PRPSC2_SET_gc   (0x80) /* Power Reduction PSC2 - SET */


/* Power Reduction PSC1 */
#define CPU_PRPSC1_CLEAR_gc (0x00) /* Power Reduction PSC1 - CLEAR */
#define CPU_PRPSC1_SET_gc   (0x40) /* Power Reduction PSC1 - SET */


/* Power Reduction PSC0 */
#define CPU_PRPSC0_CLEAR_gc (0x00) /* Power Reduction PSC0 - CLEAR */
#define CPU_PRPSC0_SET_gc   (0x20) /* Power Reduction PSC0 - SET */


/* Power Reduction Timer/Counter1 */
#define CPU_PRTIM1_CLEAR_gc (0x00) /* Power Reduction Timer/Counter1 - CLEAR */
#define CPU_PRTIM1_SET_gc   (0x10) /* Power Reduction Timer/Counter1 - SET */


/* Power Reduction Timer/Counter0 */
#define CPU_PRTIM0_CLEAR_gc (0x00) /* Power Reduction Timer/Counter0 - CLEAR */
#define CPU_PRTIM0_SET_gc   (0x08) /* Power Reduction Timer/Counter0 - SET */


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


/* Compare Output Mode, Phase Correct PWM Mode */
#define TC0_TCCR0A_COM0A_gc(x) ((x<<6) & 0xC0)

/* Compare Output Mode, Fast PWm */
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


/* Timer1 Input Capture Selection Bit */
#define TC0_ICPSEL1_CLEAR_gc (0x00) /* Timer1 Input Capture Selection Bit - CLEAR */
#define TC0_ICPSEL1_SET_gc   (0x40) /* Timer1 Input Capture Selection Bit - SET */


/* Prescaler Reset Timer/Counter1 and Timer/Counter0 */
#define TC0_PSRSYNC_CLEAR_gc (0x00) /* Prescaler Reset Timer/Counter1 and Timer/Counter0 - CLEAR */
#define TC0_PSRSYNC_SET_gc   (0x01) /* Prescaler Reset Timer/Counter1 and Timer/Counter0 - SET */


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


/* Compare Output Mode 1A, bits */
#define TC1_TCCR1A_COM1A_gc(x) ((x<<6) & 0xC0)

/* Compare Output Mode 1B, bits */
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


/* Timer/Counter1 Control Register C-FOC1A */
#define TC1_FOC1A_CLEAR_gc (0x00) /* Timer/Counter1 Control Register C-FOC1A - CLEAR */
#define TC1_FOC1A_SET_gc   (0x80) /* Timer/Counter1 Control Register C-FOC1A - SET */


/* Timer/Counter1 Control Register C-FOC1B */
#define TC1_FOC1B_CLEAR_gc (0x00) /* Timer/Counter1 Control Register C-FOC1B - CLEAR */
#define TC1_FOC1B_SET_gc   (0x40) /* Timer/Counter1 Control Register C-FOC1B - SET */


/* Timer/Counter Synchronization Mode */
#define TC1_TSM_CLEAR_gc (0x00) /* Timer/Counter Synchronization Mode - CLEAR */
#define TC1_TSM_SET_gc   (0x80) /* Timer/Counter Synchronization Mode - SET */


/* Prescaler Reset Timer/Counter1 and Timer/Counter0 */
#define TC1_PSRSYNC_CLEAR_gc (0x00) /* Prescaler Reset Timer/Counter1 and Timer/Counter0 - CLEAR */
#define TC1_PSRSYNC_SET_gc   (0x01) /* Prescaler Reset Timer/Counter1 and Timer/Counter0 - SET */


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
#define ADC_ADMUX_MUX_gc(x) (x & 0x0F)

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


/* ADC Prescaler Select Bits */
#define ADC_ADCSRA_ADPS_gc(x) (x & 0x07)

/* ADC High Speed Mode */
#define ADC_ADHSM_CLEAR_gc (0x00) /* ADC High Speed Mode - CLEAR */
#define ADC_ADHSM_SET_gc   (0x80) /* ADC High Speed Mode - SET */


/* ADC Auto Trigger Source Selection 3 */
#define ADC_ADTS3_CLEAR_gc (0x00) /* ADC Auto Trigger Source Selection 3 - CLEAR */
#define ADC_ADTS3_SET_gc   (0x08) /* ADC Auto Trigger Source Selection 3 - SET */


/* ADC Auto Trigger Source Selection 2 */
#define ADC_ADTS2_CLEAR_gc (0x00) /* ADC Auto Trigger Source Selection 2 - CLEAR */
#define ADC_ADTS2_SET_gc   (0x04) /* ADC Auto Trigger Source Selection 2 - SET */


/* ADC Auto Trigger Source Selection 1 */
#define ADC_ADTS1_CLEAR_gc (0x00) /* ADC Auto Trigger Source Selection 1 - CLEAR */
#define ADC_ADTS1_SET_gc   (0x02) /* ADC Auto Trigger Source Selection 1 - SET */


/* ADC Auto Trigger Source Selection 0 */
#define ADC_ADTS0_CLEAR_gc (0x00) /* ADC Auto Trigger Source Selection 0 - CLEAR */
#define ADC_ADTS0_SET_gc   (0x01) /* ADC Auto Trigger Source Selection 0 - SET */


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


/* Digital Input Disable Register 1-ACMP0D */
#define ADC_ACMP0D_CLEAR_gc (0x00) /* Digital Input Disable Register 1-ACMP0D - CLEAR */
#define ADC_ACMP0D_SET_gc   (0x20) /* Digital Input Disable Register 1-ACMP0D - SET */


/* Digital Input Disable Register 1-AMP0PD */
#define ADC_AMP0PD_CLEAR_gc (0x00) /* Digital Input Disable Register 1-AMP0PD - CLEAR */
#define ADC_AMP0PD_SET_gc   (0x10) /* Digital Input Disable Register 1-AMP0PD - SET */


/* Digital Input Disable Register 1-AMP0ND */
#define ADC_AMP0ND_CLEAR_gc (0x00) /* Digital Input Disable Register 1-AMP0ND - CLEAR */
#define ADC_AMP0ND_SET_gc   (0x08) /* Digital Input Disable Register 1-AMP0ND - SET */


/* Digital Input Disable Register 1-ADC10D */
#define ADC_ADC10D_CLEAR_gc (0x00) /* Digital Input Disable Register 1-ADC10D - CLEAR */
#define ADC_ADC10D_SET_gc   (0x04) /* Digital Input Disable Register 1-ADC10D - SET */


/* Digital Input Disable Register 1-ADC9D */
#define ADC_ADC9D_CLEAR_gc (0x00) /* Digital Input Disable Register 1-ADC9D - CLEAR */
#define ADC_ADC9D_SET_gc   (0x02) /* Digital Input Disable Register 1-ADC9D - SET */


/* Digital Input Disable Register 1-ADC8D */
#define ADC_ADC8D_CLEAR_gc (0x00) /* Digital Input Disable Register 1-ADC8D - CLEAR */
#define ADC_ADC8D_SET_gc   (0x01) /* Digital Input Disable Register 1-ADC8D - SET */


/* -AMP0EN */
#define ADC_AMP0EN_CLEAR_gc (0x00) /* -AMP0EN - CLEAR */
#define ADC_AMP0EN_SET_gc   (0x80) /* -AMP0EN - SET */


/* -AMP0IS */
#define ADC_AMP0IS_CLEAR_gc (0x00) /* -AMP0IS - CLEAR */
#define ADC_AMP0IS_SET_gc   (0x40) /* -AMP0IS - SET */


/* -AMP0G */
#define ADC_AMP0CSR_AMP0G_gc(x) ((x<<4) & 0x30)

/* -AMP0TS */
#define ADC_AMP0CSR_AMP0TS_gc(x) (x & 0x03)

/* -AMP1EN */
#define ADC_AMP1EN_CLEAR_gc (0x00) /* -AMP1EN - CLEAR */
#define ADC_AMP1EN_SET_gc   (0x80) /* -AMP1EN - SET */


/* -AMP1IS */
#define ADC_AMP1IS_CLEAR_gc (0x00) /* -AMP1IS - CLEAR */
#define ADC_AMP1IS_SET_gc   (0x40) /* -AMP1IS - SET */


/* -AMP1G */
#define ADC_AMP1CSR_AMP1G_gc(x) ((x<<4) & 0x30)

/* -AMP1TS */
#define ADC_AMP1CSR_AMP1TS_gc(x) (x & 0x03)

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


/* Data Overrun */
#define USART_DOR_CLEAR_gc (0x00) /* Data Overrun - CLEAR */
#define USART_DOR_SET_gc   (0x08) /* Data Overrun - SET */


/* USART Parity Error */
#define USART_UPE_CLEAR_gc (0x00) /* USART Parity Error - CLEAR */
#define USART_UPE_SET_gc   (0x04) /* USART Parity Error - SET */


/* Double USART Transmission Bit */
#define USART_U2X_CLEAR_gc (0x00) /* Double USART Transmission Bit - CLEAR */
#define USART_U2X_SET_gc   (0x02) /* Double USART Transmission Bit - SET */


/* Multi-processor Communication Mode */
#define USART_MPCM_CLEAR_gc (0x00) /* Multi-processor Communication Mode - CLEAR */
#define USART_MPCM_SET_gc   (0x01) /* Multi-processor Communication Mode - SET */


/* RX Complete Interrupt Enable */
#define USART_RXCIE_CLEAR_gc (0x00) /* RX Complete Interrupt Enable - CLEAR */
#define USART_RXCIE_SET_gc   (0x80) /* RX Complete Interrupt Enable - SET */


/* TX Complete Interrupt Enable */
#define USART_TXCIE_CLEAR_gc (0x00) /* TX Complete Interrupt Enable - CLEAR */
#define USART_TXCIE_SET_gc   (0x40) /* TX Complete Interrupt Enable - SET */


/* USART Data Register Empty Interrupt Enable */
#define USART_UDRIE_CLEAR_gc (0x00) /* USART Data Register Empty Interrupt Enable - CLEAR */
#define USART_UDRIE_SET_gc   (0x20) /* USART Data Register Empty Interrupt Enable - SET */


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
#define USART_UMSEL0_CLEAR_gc (0x00) /* USART Mode Select - CLEAR */
#define USART_UMSEL0_SET_gc   (0x40) /* USART Mode Select - SET */


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


/*
--------------------------------------------------------------------------------
EEPROM - EEPROM
--------------------------------------------------------------------------------
*/


/* EEPROM Programming Mode */
#define EEPROM_EECR_EEPM_gc(x) ((x<<4) & 0x30)

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


/*
--------------------------------------------------------------------------------
PSC - Power Stage Controller
--------------------------------------------------------------------------------
*/


/* PSC 0 Input Capture Software Trig */
#define PSC0_PCST0_CLEAR_gc (0x00)   /* PSC 0 Input Capture Software Trig - CLEAR */
#define PSC0_PCST0_SET_gc   (0x8000) /* PSC 0 Input Capture Software Trig - SET */


/* PSC 0 Input Capture Bytes */
#define PSC0_PICR0_PICR0_gc(x) (x & 0xFFF)

/* PSC 0 Capture Enable Input Part B */
#define PSC0_PCAE0B_CLEAR_gc (0x00) /* PSC 0 Capture Enable Input Part B - CLEAR */
#define PSC0_PCAE0B_SET_gc   (0x80) /* PSC 0 Capture Enable Input Part B - SET */


/* PSC 0 Input Select for Part B */
#define PSC0_PISEL0B_CLEAR_gc (0x00) /* PSC 0 Input Select for Part B - CLEAR */
#define PSC0_PISEL0B_SET_gc   (0x40) /* PSC 0 Input Select for Part B - SET */


/* PSC 0 Edge Level Selector on Input Part B */
#define PSC0_PELEV0B_CLEAR_gc (0x00) /* PSC 0 Edge Level Selector on Input Part B - CLEAR */
#define PSC0_PELEV0B_SET_gc   (0x20) /* PSC 0 Edge Level Selector on Input Part B - SET */


/* PSC 0 Filter Enable on Input Part B */
#define PSC0_PFLTE0B_CLEAR_gc (0x00) /* PSC 0 Filter Enable on Input Part B - CLEAR */
#define PSC0_PFLTE0B_SET_gc   (0x10) /* PSC 0 Filter Enable on Input Part B - SET */


/* PSC 0 Retrigger and Fault Mode for Part B */
#define PSC0_PFRC0B_PRFM0B_gc(x) (x & 0x0F)

/* PSC 0 Capture Enable Input Part A */
#define PSC0_PCAE0A_CLEAR_gc (0x00) /* PSC 0 Capture Enable Input Part A - CLEAR */
#define PSC0_PCAE0A_SET_gc   (0x80) /* PSC 0 Capture Enable Input Part A - SET */


/* PSC 0 Input Select for Part A */
#define PSC0_PISEL0A_CLEAR_gc (0x00) /* PSC 0 Input Select for Part A - CLEAR */
#define PSC0_PISEL0A_SET_gc   (0x40) /* PSC 0 Input Select for Part A - SET */


/* PSC 0 Edge Level Selector on Input Part A */
#define PSC0_PELEV0A_CLEAR_gc (0x00) /* PSC 0 Edge Level Selector on Input Part A - CLEAR */
#define PSC0_PELEV0A_SET_gc   (0x20) /* PSC 0 Edge Level Selector on Input Part A - SET */


/* PSC 0 Filter Enable on Input Part A */
#define PSC0_PFLTE0A_CLEAR_gc (0x00) /* PSC 0 Filter Enable on Input Part A - CLEAR */
#define PSC0_PFLTE0A_SET_gc   (0x10) /* PSC 0 Filter Enable on Input Part A - SET */


/* PSC 0 Retrigger and Fault Mode for Part A */
#define PSC0_PFRC0A_PRFM0A_gc(x) (x & 0x0F)

/* PSC 0 Prescaler Selects */
#define PSC0_PCTL0_PPRE0_gc(x) ((x<<6) & 0xC0)

/* PSC 0 Balance Flank Width Modulation */
#define PSC0_PBFM0_CLEAR_gc (0x00) /* PSC 0 Balance Flank Width Modulation - CLEAR */
#define PSC0_PBFM0_SET_gc   (0x20) /* PSC 0 Balance Flank Width Modulation - SET */


/* PSC 0 Asynchronous Output Control B */
#define PSC0_PAOC0B_CLEAR_gc (0x00) /* PSC 0 Asynchronous Output Control B - CLEAR */
#define PSC0_PAOC0B_SET_gc   (0x10) /* PSC 0 Asynchronous Output Control B - SET */


/* PSC 0 Asynchronous Output Control A */
#define PSC0_PAOC0A_CLEAR_gc (0x00) /* PSC 0 Asynchronous Output Control A - CLEAR */
#define PSC0_PAOC0A_SET_gc   (0x08) /* PSC 0 Asynchronous Output Control A - SET */


/* PSC0 Auto Run */
#define PSC0_PARUN0_CLEAR_gc (0x00) /* PSC0 Auto Run - CLEAR */
#define PSC0_PARUN0_SET_gc   (0x04) /* PSC0 Auto Run - SET */


/* PSC0 Complete Cycle */
#define PSC0_PCCYC0_CLEAR_gc (0x00) /* PSC0 Complete Cycle - CLEAR */
#define PSC0_PCCYC0_SET_gc   (0x02) /* PSC0 Complete Cycle - SET */


/* PSC 0 Run */
#define PSC0_PRUN0_CLEAR_gc (0x00) /* PSC 0 Run - CLEAR */
#define PSC0_PRUN0_SET_gc   (0x01) /* PSC 0 Run - SET */


/* PSC 0 Fifty */
#define PSC0_PFIFTY0_CLEAR_gc (0x00) /* PSC 0 Fifty - CLEAR */
#define PSC0_PFIFTY0_SET_gc   (0x80) /* PSC 0 Fifty - SET */


/* PSC 0 Autolock */
#define PSC0_PALOCK0_CLEAR_gc (0x00) /* PSC 0 Autolock - CLEAR */
#define PSC0_PALOCK0_SET_gc   (0x40) /* PSC 0 Autolock - SET */


/* PSC 0 Lock */
#define PSC0_PLOCK0_CLEAR_gc (0x00) /* PSC 0 Lock - CLEAR */
#define PSC0_PLOCK0_SET_gc   (0x20) /* PSC 0 Lock - SET */


/* PSC 0 Mode */
#define PSC0_PCNF0_PMODE0_gc(x) ((x<<3) & 0x18)

/* PSC 0 Output Polarity */
#define PSC0_POP0_CLEAR_gc (0x00) /* PSC 0 Output Polarity - CLEAR */
#define PSC0_POP0_SET_gc   (0x04) /* PSC 0 Output Polarity - SET */


/* PSC 0 Input Clock Select */
#define PSC0_PCLKSEL0_CLEAR_gc (0x00) /* PSC 0 Input Clock Select - CLEAR */
#define PSC0_PCLKSEL0_SET_gc   (0x02) /* PSC 0 Input Clock Select - SET */


/* Synchronization Out for ADC Selection */
#define PSC0_PSOC0_PSYNC0_gc(x) ((x<<4) & 0x30)

/* PSCOUT01 Output Enable */
#define PSC0_POEN0B_CLEAR_gc (0x00) /* PSCOUT01 Output Enable - CLEAR */
#define PSC0_POEN0B_SET_gc   (0x04) /* PSCOUT01 Output Enable - SET */


/* PSCOUT00 Output Enable */
#define PSC0_POEN0A_CLEAR_gc (0x00) /* PSCOUT00 Output Enable - CLEAR */
#define PSC0_POEN0A_SET_gc   (0x01) /* PSCOUT00 Output Enable - SET */


/* PSC 0 Synchro Error Interrupt Enable */
#define PSC0_PSEIE0_CLEAR_gc (0x00) /* PSC 0 Synchro Error Interrupt Enable - CLEAR */
#define PSC0_PSEIE0_SET_gc   (0x20) /* PSC 0 Synchro Error Interrupt Enable - SET */


/* External Event B Interrupt Enable */
#define PSC0_PEVE0B_CLEAR_gc (0x00) /* External Event B Interrupt Enable - CLEAR */
#define PSC0_PEVE0B_SET_gc   (0x10) /* External Event B Interrupt Enable - SET */


/* External Event A Interrupt Enable */
#define PSC0_PEVE0A_CLEAR_gc (0x00) /* External Event A Interrupt Enable - CLEAR */
#define PSC0_PEVE0A_SET_gc   (0x08) /* External Event A Interrupt Enable - SET */


/* End of Cycle Interrupt Enable */
#define PSC0_PEOPE0_CLEAR_gc (0x00) /* End of Cycle Interrupt Enable - CLEAR */
#define PSC0_PEOPE0_SET_gc   (0x01) /* End of Cycle Interrupt Enable - SET */


/* PSC 0 Output A Activity */
#define PSC0_POAC0B_CLEAR_gc (0x00) /* PSC 0 Output A Activity - CLEAR */
#define PSC0_POAC0B_SET_gc   (0x80) /* PSC 0 Output A Activity - SET */


/* PSC 0 Output A Activity */
#define PSC0_POAC0A_CLEAR_gc (0x00) /* PSC 0 Output A Activity - CLEAR */
#define PSC0_POAC0A_SET_gc   (0x40) /* PSC 0 Output A Activity - SET */


/* PSC 0 Synchro Error Interrupt */
#define PSC0_PSEI0_CLEAR_gc (0x00) /* PSC 0 Synchro Error Interrupt - CLEAR */
#define PSC0_PSEI0_SET_gc   (0x20) /* PSC 0 Synchro Error Interrupt - SET */


/* External Event B Interrupt */
#define PSC0_PEV0B_CLEAR_gc (0x00) /* External Event B Interrupt - CLEAR */
#define PSC0_PEV0B_SET_gc   (0x10) /* External Event B Interrupt - SET */


/* External Event A Interrupt */
#define PSC0_PEV0A_CLEAR_gc (0x00) /* External Event A Interrupt - CLEAR */
#define PSC0_PEV0A_SET_gc   (0x08) /* External Event A Interrupt - SET */


/* Ramp Number */
#define PSC0_PIFR0_PRN0_gc(x) ((x<<1) & 0x06)

/* End of PSC0 Interrupt */
#define PSC0_PEOP0_CLEAR_gc (0x00) /* End of PSC0 Interrupt - CLEAR */
#define PSC0_PEOP0_SET_gc   (0x01) /* End of PSC0 Interrupt - SET */


/* PSC 2 Input Capture Software Trig */
#define PSC2_PCST2_CLEAR_gc (0x00)   /* PSC 2 Input Capture Software Trig - CLEAR */
#define PSC2_PCST2_SET_gc   (0x8000) /* PSC 2 Input Capture Software Trig - SET */


/* PSC 2 Input Capture Bytes */
#define PSC2_PICR2_PICR2_gc(x) (x & 0xFFF)

/* PSC 2 Capture Enable Input Part B */
#define PSC2_PCAE2B_CLEAR_gc (0x00) /* PSC 2 Capture Enable Input Part B - CLEAR */
#define PSC2_PCAE2B_SET_gc   (0x80) /* PSC 2 Capture Enable Input Part B - SET */


/* PSC 2 Input Select for Part B */
#define PSC2_PISEL2B_CLEAR_gc (0x00) /* PSC 2 Input Select for Part B - CLEAR */
#define PSC2_PISEL2B_SET_gc   (0x40) /* PSC 2 Input Select for Part B - SET */


/* PSC 2 Edge Level Selector on Input Part B */
#define PSC2_PELEV2B_CLEAR_gc (0x00) /* PSC 2 Edge Level Selector on Input Part B - CLEAR */
#define PSC2_PELEV2B_SET_gc   (0x20) /* PSC 2 Edge Level Selector on Input Part B - SET */


/* PSC 2 Filter Enable on Input Part B */
#define PSC2_PFLTE2B_CLEAR_gc (0x00) /* PSC 2 Filter Enable on Input Part B - CLEAR */
#define PSC2_PFLTE2B_SET_gc   (0x10) /* PSC 2 Filter Enable on Input Part B - SET */


/* PSC 2 Retrigger and Fault Mode for Part B */
#define PSC2_PFRC2B_PRFM2B_gc(x) (x & 0x0F)

/* PSC 2 Capture Enable Input Part A */
#define PSC2_PCAE2A_CLEAR_gc (0x00) /* PSC 2 Capture Enable Input Part A - CLEAR */
#define PSC2_PCAE2A_SET_gc   (0x80) /* PSC 2 Capture Enable Input Part A - SET */


/* PSC 2 Input Select for Part A */
#define PSC2_PISEL2A_CLEAR_gc (0x00) /* PSC 2 Input Select for Part A - CLEAR */
#define PSC2_PISEL2A_SET_gc   (0x40) /* PSC 2 Input Select for Part A - SET */


/* PSC 2 Edge Level Selector on Input Part A */
#define PSC2_PELEV2A_CLEAR_gc (0x00) /* PSC 2 Edge Level Selector on Input Part A - CLEAR */
#define PSC2_PELEV2A_SET_gc   (0x20) /* PSC 2 Edge Level Selector on Input Part A - SET */


/* PSC 2 Filter Enable on Input Part A */
#define PSC2_PFLTE2A_CLEAR_gc (0x00) /* PSC 2 Filter Enable on Input Part A - CLEAR */
#define PSC2_PFLTE2A_SET_gc   (0x10) /* PSC 2 Filter Enable on Input Part A - SET */


/* PSC 2 Retrigger and Fault Mode for Part A */
#define PSC2_PFRC2A_PRFM2A_gc(x) (x & 0x0F)

/* PSC 2 Prescaler Selects */
#define PSC2_PCTL2_PPRE2_gc(x) ((x<<6) & 0xC0)

/* Balance Flank Width Modulation */
#define PSC2_PBFM2_CLEAR_gc (0x00) /* Balance Flank Width Modulation - CLEAR */
#define PSC2_PBFM2_SET_gc   (0x20) /* Balance Flank Width Modulation - SET */


/* PSC 2 Asynchronous Output Control B */
#define PSC2_PAOC2B_CLEAR_gc (0x00) /* PSC 2 Asynchronous Output Control B - CLEAR */
#define PSC2_PAOC2B_SET_gc   (0x10) /* PSC 2 Asynchronous Output Control B - SET */


/* PSC 2 Asynchronous Output Control A */
#define PSC2_PAOC2A_CLEAR_gc (0x00) /* PSC 2 Asynchronous Output Control A - CLEAR */
#define PSC2_PAOC2A_SET_gc   (0x08) /* PSC 2 Asynchronous Output Control A - SET */


/* PSC2 Auto Run */
#define PSC2_PARUN2_CLEAR_gc (0x00) /* PSC2 Auto Run - CLEAR */
#define PSC2_PARUN2_SET_gc   (0x04) /* PSC2 Auto Run - SET */


/* PSC2 Complete Cycle */
#define PSC2_PCCYC2_CLEAR_gc (0x00) /* PSC2 Complete Cycle - CLEAR */
#define PSC2_PCCYC2_SET_gc   (0x02) /* PSC2 Complete Cycle - SET */


/* PSC 2 Run */
#define PSC2_PRUN2_CLEAR_gc (0x00) /* PSC 2 Run - CLEAR */
#define PSC2_PRUN2_SET_gc   (0x01) /* PSC 2 Run - SET */


/* PSC 2 Fifty */
#define PSC2_PFIFTY2_CLEAR_gc (0x00) /* PSC 2 Fifty - CLEAR */
#define PSC2_PFIFTY2_SET_gc   (0x80) /* PSC 2 Fifty - SET */


/* PSC 2 Autolock */
#define PSC2_PALOCK2_CLEAR_gc (0x00) /* PSC 2 Autolock - CLEAR */
#define PSC2_PALOCK2_SET_gc   (0x40) /* PSC 2 Autolock - SET */


/* PSC 2 Lock */
#define PSC2_PLOCK2_CLEAR_gc (0x00) /* PSC 2 Lock - CLEAR */
#define PSC2_PLOCK2_SET_gc   (0x20) /* PSC 2 Lock - SET */


/* PSC 2 Mode */
#define PSC2_PCNF2_PMODE2_gc(x) ((x<<3) & 0x18)

/* PSC 2 Output Polarity */
#define PSC2_POP2_CLEAR_gc (0x00) /* PSC 2 Output Polarity - CLEAR */
#define PSC2_POP2_SET_gc   (0x04) /* PSC 2 Output Polarity - SET */


/* PSC 2 Input Clock Select */
#define PSC2_PCLKSEL2_CLEAR_gc (0x00) /* PSC 2 Input Clock Select - CLEAR */
#define PSC2_PCLKSEL2_SET_gc   (0x02) /* PSC 2 Input Clock Select - SET */


/* PSC 2 Output Matrix Enable */
#define PSC2_POME2_CLEAR_gc (0x00) /* PSC 2 Output Matrix Enable - CLEAR */
#define PSC2_POME2_SET_gc   (0x01) /* PSC 2 Output Matrix Enable - SET */


/* Output Matrix Output B Ramps */
#define PSC2_POM2_POMV2B_gc(x) ((x<<4) & 0xF0)

/* Output Matrix Output A Ramps */
#define PSC2_POM2_POMV2A_gc(x) (x & 0x0F)

/* PSC 2 Output 23 Select */
#define PSC2_PSOC2_POS2_gc(x) ((x<<6) & 0xC0)

/* Synchronization Out for ADC Selection */
#define PSC2_PSOC2_PSYNC2_gc(x) ((x<<4) & 0x30)

/* PSCOUT23 Output Enable */
#define PSC2_POEN2D_CLEAR_gc (0x00) /* PSCOUT23 Output Enable - CLEAR */
#define PSC2_POEN2D_SET_gc   (0x08) /* PSCOUT23 Output Enable - SET */


/* PSCOUT21 Output Enable */
#define PSC2_POEN2B_CLEAR_gc (0x00) /* PSCOUT21 Output Enable - CLEAR */
#define PSC2_POEN2B_SET_gc   (0x04) /* PSCOUT21 Output Enable - SET */


/* PSCOUT22 Output Enable */
#define PSC2_POEN2C_CLEAR_gc (0x00) /* PSCOUT22 Output Enable - CLEAR */
#define PSC2_POEN2C_SET_gc   (0x02) /* PSCOUT22 Output Enable - SET */


/* PSCOUT20 Output Enable */
#define PSC2_POEN2A_CLEAR_gc (0x00) /* PSCOUT20 Output Enable - CLEAR */
#define PSC2_POEN2A_SET_gc   (0x01) /* PSCOUT20 Output Enable - SET */


/* PSC 2 Synchro Error Interrupt Enable */
#define PSC2_PSEIE2_CLEAR_gc (0x00) /* PSC 2 Synchro Error Interrupt Enable - CLEAR */
#define PSC2_PSEIE2_SET_gc   (0x20) /* PSC 2 Synchro Error Interrupt Enable - SET */


/* External Event B Interrupt Enable */
#define PSC2_PEVE2B_CLEAR_gc (0x00) /* External Event B Interrupt Enable - CLEAR */
#define PSC2_PEVE2B_SET_gc   (0x10) /* External Event B Interrupt Enable - SET */


/* External Event A Interrupt Enable */
#define PSC2_PEVE2A_CLEAR_gc (0x00) /* External Event A Interrupt Enable - CLEAR */
#define PSC2_PEVE2A_SET_gc   (0x08) /* External Event A Interrupt Enable - SET */


/* End of Cycle Interrupt Enable */
#define PSC2_PEOPE2_CLEAR_gc (0x00) /* End of Cycle Interrupt Enable - CLEAR */
#define PSC2_PEOPE2_SET_gc   (0x01) /* End of Cycle Interrupt Enable - SET */


/* PSC 2 Output A Activity */
#define PSC2_POAC2B_CLEAR_gc (0x00) /* PSC 2 Output A Activity - CLEAR */
#define PSC2_POAC2B_SET_gc   (0x80) /* PSC 2 Output A Activity - SET */


/* PSC 2 Output A Activity */
#define PSC2_POAC2A_CLEAR_gc (0x00) /* PSC 2 Output A Activity - CLEAR */
#define PSC2_POAC2A_SET_gc   (0x40) /* PSC 2 Output A Activity - SET */


/* PSC 2 Synchro Error Interrupt */
#define PSC2_PSEI2_CLEAR_gc (0x00) /* PSC 2 Synchro Error Interrupt - CLEAR */
#define PSC2_PSEI2_SET_gc   (0x20) /* PSC 2 Synchro Error Interrupt - SET */


/* External Event B Interrupt */
#define PSC2_PEV2B_CLEAR_gc (0x00) /* External Event B Interrupt - CLEAR */
#define PSC2_PEV2B_SET_gc   (0x10) /* External Event B Interrupt - SET */


/* External Event A Interrupt */
#define PSC2_PEV2A_CLEAR_gc (0x00) /* External Event A Interrupt - CLEAR */
#define PSC2_PEV2A_SET_gc   (0x08) /* External Event A Interrupt - SET */


/* Ramp Number */
#define PSC2_PIFR2_PRN2_gc(x) ((x<<1) & 0x06)

/* End of PSC2 Interrupt */
#define PSC2_PEOP2_CLEAR_gc (0x00) /* End of PSC2 Interrupt - CLEAR */
#define PSC2_PEOP2_SET_gc   (0x01) /* End of PSC2 Interrupt - SET */

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
#define PORTBB_BASE      _SFR_MEM8 (0x0000) /* PORTBB Base Address */
#define PORTBB_PINB      _SFR_MEM8 (0x0023) /* Port B Input Pins */
#define PORTBB_DDRB      _SFR_MEM8 (0x0024) /* Port B Data Direction Register */
#define PORTBB_PORTB     _SFR_MEM8 (0x0025) /* Port B Data Register */

/* PORTD - I/O Port (0x0000) */
#define PORTDD_BASE      _SFR_MEM8 (0x0000) /* PORTDD Base Address */
#define PORTDD_PIND      _SFR_MEM8 (0x0029) /* Port D Input Pins */
#define PORTDD_DDRD      _SFR_MEM8 (0x002A) /* Port D Data Direction Register */
#define PORTDD_PORTD     _SFR_MEM8 (0x002B) /* Port D Data Register */

/* PORTE - I/O Port (0x0000) */
#define PORTEE_BASE      _SFR_MEM8 (0x0000) /* PORTEE Base Address */
#define PORTEE_PINE      _SFR_MEM8 (0x002C) /* Port E Input Pins */
#define PORTEE_DDRE      _SFR_MEM8 (0x002D) /* Port E Data Direction Register */
#define PORTEE_PORTE     _SFR_MEM8 (0x002E) /* Port E Data Register */

/* BOOT_LOAD - Bootloader (0x0000) */
#define BOOT_LOAD_BASE   _SFR_MEM8 (0x0000) /* BOOT_LOAD Base Address */
#define BOOT_LOAD_SPMCSR _SFR_MEM8 (0x0057) /* Store Program Memory Control Register */

/* EUSART - Extended USART (0x0000) */
#define EUSART_BASE      _SFR_MEM8 (0x0000) /* EUSART Base Address */
#define EUSART_EUCSRA    _SFR_MEM8 (0x00C8) /* EUSART Control and Status Register A */
#define EUSART_EUCSRB    _SFR_MEM8 (0x00C9) /* EUSART Control Register B */
#define EUSART_EUCSRC    _SFR_MEM8 (0x00CA) /* EUSART Status Register C */
#define EUSART_MUBRRL    _SFR_MEM8 (0x00CC) /* Manchester Receiver Baud Rate Register Low Byte */
#define EUSART_MUBRRH    _SFR_MEM8 (0x00CD) /* Manchester Receiver Baud Rate Register High Byte */
#define EUSART_EUDR      _SFR_MEM8 (0x00CE) /* EUSART I/O Data Register */

/* AC - Analog Comparator (0x0000) */
#define AC_BASE          _SFR_MEM8 (0x0000) /* AC Base Address */
#define AC_ACSR          _SFR_MEM8 (0x0050) /* Analog Comparator Status Register */
#define AC_AC0CON        _SFR_MEM8 (0x00AD) /* Analog Comparator 0 Control Register */
#define AC_AC1CON        _SFR_MEM8 (0x00AE) /* Analog Comparator 1 Control Register */
#define AC_AC2CON        _SFR_MEM8 (0x00AF) /* Analog Comparator 2 Control Register */

/* DAC - Digital-to-Analog Converter (0x0000) */
#define DAC_BASE         _SFR_MEM8 (0x0000) /* DAC Base Address */
#define DAC_DACON        _SFR_MEM8 (0x00AA) /* DAC Control Register */
#define DAC_DAC          _SFR_MEM16(0x00AB) /* DAC Data Register Bytes */
#define DAC_DACL         _SFR_MEM8 (0x00AB) /* DAC Data Register Bytes LOW BYTE */
#define DAC_DACH         _SFR_MEM8 (0x00AC) /* DAC Data Register Bytes HIGH BYTE */

/* CPU - CPU Registers (0x0000) */
#define CPU_BASE         _SFR_MEM8 (0x0000) /* CPU Base Address */
#define CPU_GPIOR1       _SFR_MEM8 (0x0039) /* General Purpose IO Register 1 */
#define CPU_GPIOR2       _SFR_MEM8 (0x003A) /* General Purpose IO Register 2 */
#define CPU_GPIOR3       _SFR_MEM8 (0x003B) /* General Purpose IO Register 3 */
#define CPU_GPIOR0       _SFR_MEM8 (0x003E) /* General Purpose IO Register 0 */
#define CPU_PLLCSR       _SFR_MEM8 (0x0049) /* PLL Control And Status Register */
#define CPU_SMCR         _SFR_MEM8 (0x0053) /* Sleep Mode Control Register */
#define CPU_MCUSR        _SFR_MEM8 (0x0054) /* MCU Status Register */
#define CPU_MCUCR        _SFR_MEM8 (0x0055) /* MCU Control Register */
#define CPU_SP           _SFR_MEM16(0x005D) /* Stack Pointer  */
#define CPU_SPL          _SFR_MEM8 (0x005D) /* Stack Pointer  LOW BYTE */
#define CPU_SPH          _SFR_MEM8 (0x005E) /* Stack Pointer  HIGH BYTE */
#define CPU_SREG         _SFR_MEM8 (0x005F) /* Status Register */
#define CPU_CLKPR        _SFR_MEM8 (0x0061) 
#define CPU_PRR          _SFR_MEM8 (0x0064) /* Power Reduction Register */
#define CPU_OSCCAL       _SFR_MEM8 (0x0066) /* Oscillator Calibration Value */

/* TC0 - Timer/Counter, 8-bit (0x0000) */
#define TC8_BASE         _SFR_MEM8 (0x0000) /* TC8 Base Address */
#define TC8_TIFR0        _SFR_MEM8 (0x0035) /* Timer/Counter0 Interrupt Flag register */
#define TC8_GTCCR        _SFR_MEM8 (0x0043) /* General Timer/Counter Control Register */
#define TC8_TCCR0A       _SFR_MEM8 (0x0044) /* Timer/Counter Control Register A */
#define TC8_TCCR0B       _SFR_MEM8 (0x0045) /* Timer/Counter Control Register B */
#define TC8_TCNT0        _SFR_MEM8 (0x0046) /* Timer/Counter0 */
#define TC8_OCR0A        _SFR_MEM8 (0x0047) /* Timer/Counter0 Output Compare Register */
#define TC8_OCR0B        _SFR_MEM8 (0x0048) /* Timer/Counter0 Output Compare Register */
#define TC8_TIMSK0       _SFR_MEM8 (0x006E) /* Timer/Counter0 Interrupt Mask Register */

/* TC1 - Timer/Counter, 16-bit (0x0000) */
#define TC16_BASE        _SFR_MEM8 (0x0000) /* TC16 Base Address */
#define TC16_TIFR1       _SFR_MEM8 (0x0036) /* Timer/Counter Interrupt Flag register */
#define TC16_GTCCR       _SFR_MEM8 (0x0043) /* General Timer/Counter Control Register */
#define TC16_TIMSK1      _SFR_MEM8 (0x006F) /* Timer/Counter Interrupt Mask Register */
#define TC16_TCCR1A      _SFR_MEM8 (0x0080) /* Timer/Counter1 Control Register A */
#define TC16_TCCR1B      _SFR_MEM8 (0x0081) /* Timer/Counter1 Control Register B */
#define TC16_TCCR1C      _SFR_MEM8 (0x0082) /* Timer/Counter1 Control Register C */
#define TC16_TCNT1       _SFR_MEM16(0x0084) /* Timer/Counter1 Bytes */
#define TC16_TCNT1L      _SFR_MEM8 (0x0084) /* Timer/Counter1 Bytes LOW BYTE */
#define TC16_TCNT1H      _SFR_MEM8 (0x0085) /* Timer/Counter1 Bytes HIGH BYTE */
#define TC16_ICR1        _SFR_MEM16(0x0086) /* Timer/Counter1 Input Capture Register Bytes */
#define TC16_ICR1L       _SFR_MEM8 (0x0086) /* Timer/Counter1 Input Capture Register Bytes LOW BYTE */
#define TC16_ICR1H       _SFR_MEM8 (0x0087) /* Timer/Counter1 Input Capture Register Bytes HIGH BYTE */
#define TC16_OCR1A       _SFR_MEM16(0x0088) /* Timer/Counter1 Output Compare Register Bytes */
#define TC16_OCR1AL      _SFR_MEM8 (0x0088) /* Timer/Counter1 Output Compare Register Bytes LOW BYTE */
#define TC16_OCR1AH      _SFR_MEM8 (0x0089) /* Timer/Counter1 Output Compare Register Bytes HIGH BYTE */
#define TC16_OCR1B       _SFR_MEM16(0x008A) /* Timer/Counter1 Output Compare Register Bytes */
#define TC16_OCR1BL      _SFR_MEM8 (0x008A) /* Timer/Counter1 Output Compare Register Bytes LOW BYTE */
#define TC16_OCR1BH      _SFR_MEM8 (0x008B) /* Timer/Counter1 Output Compare Register Bytes HIGH BYTE */

/* ADC - Analog-to-Digital Converter (0x0000) */
#define ADC_BASE         _SFR_MEM8 (0x0000) /* ADC Base Address */
#define ADC_AMP0CSR      _SFR_MEM8 (0x0076) 
#define ADC_AMP1CSR      _SFR_MEM8 (0x0077) 
#define ADC_ADC          _SFR_MEM16(0x0078) /* ADC Data Register Bytes */
#define ADC_ADCL         _SFR_MEM8 (0x0078) /* ADC Data Register Bytes LOW BYTE */
#define ADC_ADCH         _SFR_MEM8 (0x0079) /* ADC Data Register Bytes HIGH BYTE */
#define ADC_ADCSRA       _SFR_MEM8 (0x007A) /* The ADC Control and Status register */
#define ADC_ADCSRB       _SFR_MEM8 (0x007B) /* ADC Control and Status Register B */
#define ADC_ADMUX        _SFR_MEM8 (0x007C) /* The ADC multiplexer Selection Register */
#define ADC_DIDR0        _SFR_MEM8 (0x007E) /* Digital Input Disable Register 0 */
#define ADC_DIDR1        _SFR_MEM8 (0x007F) /* Digital Input Disable Register 1 */

/* USART - USART (0x0000) */
#define USART_BASE       _SFR_MEM8 (0x0000) /* USART Base Address */
#define USART_UCSRA      _SFR_MEM8 (0x00C0) /* USART Control and Status register A */
#define USART_UCSRB      _SFR_MEM8 (0x00C1) /* USART Control an Status register B */
#define USART_UCSRC      _SFR_MEM8 (0x00C2) /* USART Control an Status register C */
#define USART_UBRRL      _SFR_MEM8 (0x00C4) /* USART Baud Rate Register Low Byte */
#define USART_UBRRH      _SFR_MEM8 (0x00C5) /* USART Baud Rate Register High Byte */
#define USART_UDR        _SFR_MEM8 (0x00C6) /* USART I/O Data Register */

/* SPI - Serial Peripheral Interface (0x0000) */
#define SPI_BASE         _SFR_MEM8 (0x0000) /* SPI Base Address */
#define SPI_SPCR         _SFR_MEM8 (0x004C) /* SPI Control Register */
#define SPI_SPSR         _SFR_MEM8 (0x004D) /* SPI Status Register */
#define SPI_SPDR         _SFR_MEM8 (0x004E) /* SPI Data Register */

/* WDT - Watchdog Timer (0x0000) */
#define WDT_BASE         _SFR_MEM8 (0x0000) /* WDT Base Address */
#define WDT_WDTCSR       _SFR_MEM8 (0x0060) /* Watchdog Timer Control Register */

/* EXINT - External Interrupts (0x0000) */
#define EXINT_BASE       _SFR_MEM8 (0x0000) /* EXINT Base Address */
#define EXINT_EIFR       _SFR_MEM8 (0x003C) /* External Interrupt Flag Register */
#define EXINT_EIMSK      _SFR_MEM8 (0x003D) /* External Interrupt Mask Register */
#define EXINT_EICRA      _SFR_MEM8 (0x0069) /* External Interrupt Control Register A */

/* EEPROM - EEPROM (0x0000) */
#define EEPROM_BASE      _SFR_MEM8 (0x0000) /* EEPROM Base Address */
#define EEPROM_EECR      _SFR_MEM8 (0x003F) /* EEPROM Control Register */
#define EEPROM_EEDR      _SFR_MEM8 (0x0040) /* EEPROM Data Register */
#define EEPROM_EEAR      _SFR_MEM16(0x0041) /* EEPROM Read/Write Access Bytes */
#define EEPROM_EEARL     _SFR_MEM8 (0x0041) /* EEPROM Read/Write Access Bytes LOW BYTE */
#define EEPROM_EEARH     _SFR_MEM8 (0x0042) /* EEPROM Read/Write Access Bytes HIGH BYTE */

/* PSC0 - Power Stage Controller (0x0000) */
#define PSC00_BASE       _SFR_MEM8 (0x0000) /* PSC00 Base Address */
#define PSC00_PIFR0      _SFR_MEM8 (0x00A0) /* PSC0 Interrupt Flag Register */
#define PSC00_PIM0       _SFR_MEM8 (0x00A1) /* PSC0 Interrupt Mask Register */
#define PSC00_PSOC0      _SFR_MEM8 (0x00D0) /* PSC0 Synchro and Output Configuration */
#define PSC00_OCR0SA     _SFR_MEM16(0x00D2) /* Output Compare SA Register  */
#define PSC00_OCR0SAL    _SFR_MEM8 (0x00D2) /* Output Compare SA Register  LOW BYTE */
#define PSC00_OCR0SAH    _SFR_MEM8 (0x00D3) /* Output Compare SA Register  HIGH BYTE */
#define PSC00_OCR0RA     _SFR_MEM16(0x00D4) /* Output Compare RA Register  */
#define PSC00_OCR0RAL    _SFR_MEM8 (0x00D4) /* Output Compare RA Register  LOW BYTE */
#define PSC00_OCR0RAH    _SFR_MEM8 (0x00D5) /* Output Compare RA Register  HIGH BYTE */
#define PSC00_OCR0SB     _SFR_MEM16(0x00D6) /* Output Compare SB Register  */
#define PSC00_OCR0SBL    _SFR_MEM8 (0x00D6) /* Output Compare SB Register  LOW BYTE */
#define PSC00_OCR0SBH    _SFR_MEM8 (0x00D7) /* Output Compare SB Register  HIGH BYTE */
#define PSC00_OCR0RB     _SFR_MEM16(0x00D8) /* Output Compare RB Register  */
#define PSC00_OCR0RBL    _SFR_MEM8 (0x00D8) /* Output Compare RB Register  LOW BYTE */
#define PSC00_OCR0RBH    _SFR_MEM8 (0x00D9) /* Output Compare RB Register  HIGH BYTE */
#define PSC00_PCNF0      _SFR_MEM8 (0x00DA) /* PSC 0 Configuration Register */
#define PSC00_PCTL0      _SFR_MEM8 (0x00DB) /* PSC 0 Control Register */
#define PSC00_PFRC0A     _SFR_MEM8 (0x00DC) /* PSC 0 Input A Control */
#define PSC00_PFRC0B     _SFR_MEM8 (0x00DD) /* PSC 0 Input B Control */
#define PSC00_PICR0      _SFR_MEM16(0x00DE) /* PSC 0 Input Capture Register  */
#define PSC00_PICR0L     _SFR_MEM8 (0x00DE) /* PSC 0 Input Capture Register  LOW BYTE */
#define PSC00_PICR0H     _SFR_MEM8 (0x00DF) /* PSC 0 Input Capture Register  HIGH BYTE */

/* PSC2 - Power Stage Controller (0x0000) */
#define PSC22_BASE       _SFR_MEM8 (0x0000) /* PSC22 Base Address */
#define PSC22_PIFR2      _SFR_MEM8 (0x00A4) /* PSC2 Interrupt Flag Register */
#define PSC22_PIM2       _SFR_MEM8 (0x00A5) /* PSC2 Interrupt Mask Register */
#define PSC22_PSOC2      _SFR_MEM8 (0x00F0) /* PSC2 Synchro and Output Configuration */
#define PSC22_POM2       _SFR_MEM8 (0x00F1) /* PSC 2 Output Matrix */
#define PSC22_OCR2SA     _SFR_MEM16(0x00F2) /* Output Compare SA Register  */
#define PSC22_OCR2SAL    _SFR_MEM8 (0x00F2) /* Output Compare SA Register  LOW BYTE */
#define PSC22_OCR2SAH    _SFR_MEM8 (0x00F3) /* Output Compare SA Register  HIGH BYTE */
#define PSC22_OCR2RA     _SFR_MEM16(0x00F4) /* Output Compare RA Register  */
#define PSC22_OCR2RAL    _SFR_MEM8 (0x00F4) /* Output Compare RA Register  LOW BYTE */
#define PSC22_OCR2RAH    _SFR_MEM8 (0x00F5) /* Output Compare RA Register  HIGH BYTE */
#define PSC22_OCR2SB     _SFR_MEM16(0x00F6) /* Output Compare SB Register  */
#define PSC22_OCR2SBL    _SFR_MEM8 (0x00F6) /* Output Compare SB Register  LOW BYTE */
#define PSC22_OCR2SBH    _SFR_MEM8 (0x00F7) /* Output Compare SB Register  HIGH BYTE */
#define PSC22_OCR2RB     _SFR_MEM16(0x00F8) /* Output Compare RB Register  */
#define PSC22_OCR2RBL    _SFR_MEM8 (0x00F8) /* Output Compare RB Register  LOW BYTE */
#define PSC22_OCR2RBH    _SFR_MEM8 (0x00F9) /* Output Compare RB Register  HIGH BYTE */
#define PSC22_PCNF2      _SFR_MEM8 (0x00FA) /* PSC 2 Configuration Register */
#define PSC22_PCTL2      _SFR_MEM8 (0x00FB) /* PSC 2 Control Register */
#define PSC22_PFRC2A     _SFR_MEM8 (0x00FC) /* PSC 2 Input B Control */
#define PSC22_PFRC2B     _SFR_MEM8 (0x00FD) /* PSC 2 Input B Control */
#define PSC22_PICR2      _SFR_MEM16(0x00FE) /* PSC 2 Input Capture Register  */
#define PSC22_PICR2L     _SFR_MEM8 (0x00FE) /* PSC 2 Input Capture Register  LOW BYTE */
#define PSC22_PICR2H     _SFR_MEM8 (0x00FF) /* PSC 2 Input Capture Register  HIGH BYTE */

/* FUSE - Fuses (0x0000) */
#define FUSE_BASE        _SFR_MEM8 (0x0000) /* FUSE Base Address */
#define FUSE_LOW         _SFR_MEM8 (0x0000) 
#define FUSE_HIGH        _SFR_MEM8 (0x0001) 
#define FUSE_EXTENDED    _SFR_MEM8 (0x0002) 

/* LOCKBIT - Lockbits (0x0000) */
#define LOCKBIT_BASE     _SFR_MEM8 (0x0000) /* LOCKBIT Base Address */
#define LOCKBIT_LOCKBIT  _SFR_MEM8 (0x0000) 
/* avr-libc typedef for avr/fuse.h */
typedef FUSE_t NVM_FUSES_t;

/*
================================================================================
Interrupt Vector Definitions
================================================================================
*/

/* Vector 0 is the reset vector */
#define None_RESET_vect_num         (0)                 
#define None_RESET_vect             _VECTOR(0)          /* External Pin, Power-on Reset, Brown-out Reset, Watchdog Reset and JTAG AVR Reset */
#define None_PSC2_CAPT_vect_num     (1)                 
#define None_PSC2_CAPT_vect         _VECTOR(1)          /* PSC2 Capture Event */
#define None_PSC2_EC_vect_num       (2)                 
#define None_PSC2_EC_vect           _VECTOR(2)          /* PSC2 End Cycle */
#define None_PSC1_CAPT_vect_num     (3)                 
#define None_PSC1_CAPT_vect         _VECTOR(3)          /* PSC1 Capture Event */
#define None_PSC1_EC_vect_num       (4)                 
#define None_PSC1_EC_vect           _VECTOR(4)          /* PSC1 End Cycle */
#define None_PSC0_CAPT_vect_num     (5)                 
#define None_PSC0_CAPT_vect         _VECTOR(5)          /* PSC0 Capture Event */
#define None_PSC0_EC_vect_num       (6)                 
#define None_PSC0_EC_vect           _VECTOR(6)          /* PSC0 End Cycle */
#define None_ANALOG_COMP_0_vect_num (7)                 
#define None_ANALOG_COMP_0_vect     _VECTOR(7)          /* Analog Comparator 0 */
#define None_ANALOG_COMP_1_vect_num (8)                 
#define None_ANALOG_COMP_1_vect     _VECTOR(8)          /* Analog Comparator 1 */
#define None_ANALOG_COMP_2_vect_num (9)                 
#define None_ANALOG_COMP_2_vect     _VECTOR(9)          /* Analog Comparator 2 */
#define None_INT0_vect_num          (10)                
#define None_INT0_vect              _VECTOR(10)         /* External Interrupt Request 0 */
#define None_TIMER1_CAPT_vect_num   (11)                
#define None_TIMER1_CAPT_vect       _VECTOR(11)         /* Timer/Counter1 Capture Event */
#define None_TIMER1_COMPA_vect_num  (12)                
#define None_TIMER1_COMPA_vect      _VECTOR(12)         /* Timer/Counter1 Compare Match A */
#define None_TIMER1_COMPB_vect_num  (13)                
#define None_TIMER1_COMPB_vect      _VECTOR(13)         /* Timer/Counter Compare Match B */
#define None_RESERVED15_vect_num    (14)                
#define None_RESERVED15_vect        _VECTOR(14)         
#define None_TIMER1_OVF_vect_num    (15)                
#define None_TIMER1_OVF_vect        _VECTOR(15)         /* Timer/Counter1 Overflow */
#define None_TIMER0_COMP_A_vect_num (16)                
#define None_TIMER0_COMP_A_vect     _VECTOR(16)         /* Timer/Counter0 Compare Match A */
#define None_TIMER0_OVF_vect_num    (17)                
#define None_TIMER0_OVF_vect        _VECTOR(17)         /* Timer/Counter0 Overflow */
#define None_ADC_vect_num           (18)                
#define None_ADC_vect               _VECTOR(18)         /* ADC Conversion Complete */
#define None_INT1_vect_num          (19)                
#define None_INT1_vect              _VECTOR(19)         /* External Interrupt Request 1 */
#define None_SPI_STC_vect_num       (20)                
#define None_SPI_STC_vect           _VECTOR(20)         /* SPI Serial Transfer Complete */
#define None_USART_RX_vect_num      (21)                
#define None_USART_RX_vect          _VECTOR(21)         /* USART, Rx Complete */
#define None_USART_UDRE_vect_num    (22)                
#define None_USART_UDRE_vect        _VECTOR(22)         /* USART Data Register Empty */
#define None_USART_TX_vect_num      (23)                
#define None_USART_TX_vect          _VECTOR(23)         /* USART, Tx Complete */
#define None_INT2_vect_num          (24)                
#define None_INT2_vect              _VECTOR(24)         /* External Interrupt Request 2 */
#define None_WDT_vect_num           (25)                
#define None_WDT_vect               _VECTOR(25)         /* Watchdog Timeout Interrupt */
#define None_EE_READY_vect_num      (26)                
#define None_EE_READY_vect          _VECTOR(26)         /* EEPROM Ready */
#define None_TIMER0_COMPB_vect_num  (27)                
#define None_TIMER0_COMPB_vect      _VECTOR(27)         /* Timer Counter 0 Compare Match B */
#define None_INT3_vect_num          (28)                
#define None_INT3_vect              _VECTOR(28)         /* External Interrupt Request 3 */
#define None_RESERVED30_vect_num    (29)                
#define None_RESERVED30_vect        _VECTOR(29)         
#define None_RESERVED31_vect_num    (30)                
#define None_RESERVED31_vect        _VECTOR(30)         
#define None_SPM_READY_vect_num     (31)                
#define None_SPM_READY_vect         _VECTOR(31)         /* Store Program Memory Read */

/* Vector Table Size */
#define _VECTOR_SIZE                (4)                 /* Size of individual vector. */
#define _VECTORS_SIZE               (32 * _VECTOR_SIZE) /* Size of all vectors */
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
#define PORTD7 (7) 
#define PORTE0 (0) 
#define PORTE1 (1) 
#define PORTE2 (2) 

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
#define CKOUT      (unsigned char)~_BV(6) /* Clock output on PORTB0 */
#define CKDIV8     (unsigned char)~_BV(7) /* Divide clock by 8 internally */

/* Fuse offset 0x01 */
#define BODLEVEL0 (unsigned char)~_BV(0) /* Brown-out Detector Trigger Level bit 0 */
#define BODLEVEL1 (unsigned char)~_BV(1) /* Brown-out Detector Trigger Level bit 1 */
#define BODLEVEL2 (unsigned char)~_BV(2) /* Brown-out Detector Trigger Level bit 2 */
#define EESAVE    (unsigned char)~_BV(3) /* Preserve EEPROM through the Chip Erase cycle */
#define WDTON     (unsigned char)~_BV(4) /* Watch-dog Timer always on */
#define SPIEN     (unsigned char)~_BV(5) /* Serial program downloading (SPI) enabled */
#define DWEN      (unsigned char)~_BV(6) /* Debug Wire enable */
#define RSTDISBL  (unsigned char)~_BV(7) /* Reset Disabled (Enable PC6 as i/o pin) */

/* Fuse offset 0x02 */
#define BOOTRST (unsigned char)~_BV(0) /* Select Reset Vector */
#define BOOTSZ0 (unsigned char)~_BV(1) /* Select Boot Size bit 0 */
#define BOOTSZ1 (unsigned char)~_BV(2) /* Select Boot Size bit 1 */
#define PSCRV   (unsigned char)~_BV(4) /* PSCOUT Reset Value */
#define PSC0RB  (unsigned char)~_BV(5) /* PSC0 Reset Behavior */
#define PSC1RB  (unsigned char)~_BV(6) /* PSC1 Reset Behavior */
#define PSC2RB  (unsigned char)~_BV(7) /* PSC2 Reset Behavior */


/* ========== Lock Bits ========== */
#define __LOCK_BITS_EXIST  


/* ========== Signature ========== */
#define SIGNATURE_0 (0x1E) 
#define SIGNATURE_1 (0x94) 
#define SIGNATURE_2 (0x83) 

#endif /* #ifdef _AVR_AT90PWM216_H_INCLUDED */
