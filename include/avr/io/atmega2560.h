/******************************************************************************
 *   This file is part of avr-libc3.                                          * 
 *                                                                            * 
 *   Automatically created by devtools/gen-ioheader-atdf.py (V0.91)           * 
 *                                                                            * 
 *   .atpack File: ATmega2560.atdf                                            * 
 *   .ATDF File:   atdf/ATmega2560.atdf                                       * 
 *   Version:      2.0.12                                                     * 
 *   Date:         2019-04-26                                                 * 
 *   Device:       ATmega2560                                                 * 
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
#  define _AVR_IOXXX_H_ "ioATmega2560.h"
#else
#  error "Attempt to include more than one <avr/ioXXX.h> file."
#endif

#ifndef _AVR_ATmega2560_H_INCLUDED
#  define _AVR_ATmega2560_H_INCLUDED

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
    FUSE_BODLEVEL_DISABLED_gc = (0x07), /* Brown-out detection disabled */
    FUSE_BODLEVEL_1V8_gc      = (0x06), /* Brown-out detection at VCC=1.8 V */
    FUSE_BODLEVEL_2V7_gc      = (0x05), /* Brown-out detection at VCC=2.7 V */
    FUSE_BODLEVEL_4V3_gc      = (0x04), /* Brown-out detection at VCC=4.3 V */
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
    FUSE_BOOTSZ_512W_1FE00_gc  = (0x03<<1), /* Boot Flash size=512 words start address=$1FE00 */
    FUSE_BOOTSZ_1024W_1FC00_gc = (0x02<<1), /* Boot Flash size=1024 words start address=$1FC00 */
    FUSE_BOOTSZ_2048W_1F800_gc = (0x01<<1), /* Boot Flash size=2048 words start address=$1F800 */
    FUSE_BOOTSZ_4096W_1F000_gc = (0x00<<1), /* Boot Flash size=4096 words start address=$1F000 */
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

/* Select Clock Source */
typedef enum FUSE_SUT_CKSEL_enum
{
    FUSE_SUT_CKSEL_EXTCLK_6CK_0MS_gc                 = (0x00), /* Ext. Clock; Start-up time: 6 CK + 0 ms */
    FUSE_SUT_CKSEL_EXTCLK_6CK_4MS1_gc                = (0x10), /* Ext. Clock; Start-up time: 6 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTCLK_6CK_65MS_gc                = (0x20), /* Ext. Clock; Start-up time: 6 CK + 65 ms */
    FUSE_SUT_CKSEL_INTRCOSC_6CK_0MS_gc               = (0x02), /* Int. RC Osc.; Start-up time: 6 CK + 0 ms */
    FUSE_SUT_CKSEL_INTRCOSC_6CK_4MS1_gc              = (0x12), /* Int. RC Osc.; Start-up time: 6 CK + 4.1 ms */
    FUSE_SUT_CKSEL_INTRCOSC_6CK_65MS_gc              = (0x22), /* Int. RC Osc.; Start-up time: 6 CK + 65 ms */
    FUSE_SUT_CKSEL_INTRCOSC_128KHZ_6CK_0MS_gc        = (0x03), /* Int. 128kHz RC Osc.; Start-up time: 6 CK + 0 ms */
    FUSE_SUT_CKSEL_INTRCOSC_128KHZ_6CK_4MS_gc        = (0x13), /* Int. 128kHz RC Osc.; Start-up time: 6 CK + 4 ms */
    FUSE_SUT_CKSEL_INTRCOSC_128KHZ_6CK_64MS_gc       = (0x23), /* Int. 128kHz RC Osc.; Start-up time: 6 CK + 64 ms */
    FUSE_SUT_CKSEL_EXTLOFXTAL_1KCK_0MS_gc            = (0x04), /* Ext. Low-Freq. Crystal; Start-up time: 1K CK + 0 ms */
    FUSE_SUT_CKSEL_EXTLOFXTAL_1KCK_4MS1_gc           = (0x14), /* Ext. Low-Freq. Crystal; Start-up time: 1K CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTLOFXTAL_1KCK_65MS_gc           = (0x24), /* Ext. Low-Freq. Crystal; Start-up time: 1K CK + 65 ms */
    FUSE_SUT_CKSEL_EXTLOFXTAL_32KCK_0MS_gc           = (0x05), /* Ext. Low-Freq. Crystal; Start-up time: 32K CK + 0 ms */
    FUSE_SUT_CKSEL_EXTLOFXTAL_32KCK_4MS1_gc          = (0x15), /* Ext. Low-Freq. Crystal; Start-up time: 32K CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTLOFXTAL_32KCK_65MS_gc          = (0x25), /* Ext. Low-Freq. Crystal; Start-up time: 32K CK + 65 ms */
    FUSE_SUT_CKSEL_FSOSC_258CK_4MS1_CRES_FASTPWR_gc  = (0x06), /* Full Swing Oscillator; Start-up time: 258 CK + 4.1 ms; Ceramic res.; fast rising power */
    FUSE_SUT_CKSEL_FSOSC_258CK_65MS_CRES_SLOWPWR_gc  = (0x16), /* Full Swing Oscillator; Start-up time: 258 CK + 65 ms; Ceramic res.; slowly rising power */
    FUSE_SUT_CKSEL_FSOSC_1KCK_0MS_CRES_BODEN_gc      = (0x26), /* Full Swing Oscillator; Start-up time: 1K CK + 0 ms; Ceramic res.; BOD enable */
    FUSE_SUT_CKSEL_FSOSC_1KCK_4MS1_CRES_FASTPWR_gc   = (0x36), /* Full Swing Oscillator; Start-up time: 1K CK + 4.1 ms; Ceramic res.; fast rising power */
    FUSE_SUT_CKSEL_FSOSC_1KCK_65MS_CRES_SLOWPWR_gc   = (0x07), /* Full Swing Oscillator; Start-up time: 1K CK + 65 ms; Ceramic res.; slowly rising power */
    FUSE_SUT_CKSEL_FSOSC_16KCK_0MS_XOSC_BODEN_gc     = (0x17), /* Full Swing Oscillator; Start-up time: 16K CK + 0 ms; Crystal Osc.; BOD enabled */
    FUSE_SUT_CKSEL_FSOSC_16KCK_4MS1_XOSC_FASTPWR_gc  = (0x27), /* Full Swing Oscillator; Start-up time: 16K CK + 4.1 ms; Crystal Osc.; fast rising power */
    FUSE_SUT_CKSEL_FSOSC_16KCK_65MS_XOSC_SLOWPWR_gc  = (0x37), /* Full Swing Oscillator; Start-up time: 16K CK + 65 ms; Crystal Osc.; slowly rising power */
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
USART - USART
--------------------------------------------------------------------------------
*/

typedef struct USART0_struct
{
    register8_t rsv_0x00[192]; /* RESERVED REGISTER BLOCK */
    register8_t UCSR0A;        /* USART Control and Status Register A */
    register8_t UCSR0B;        /* USART Control and Status Register B */
    register8_t UCSR0C;        /* USART Control and Status Register C */
    register8_t rsv_0xC3;      /* RESERVED REGISTER */
    _REGISTER16 (UBRR0);       /* USART Baud Rate Register  Bytes */
    register8_t rsv_0xC5;      /* RESERVED REGISTER */
    register8_t UDR0;          /* USART I/O Data Register */
} USART0_t;


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


/*
--------------------------------------------------------------------------------
USART - USART
--------------------------------------------------------------------------------
*/

typedef struct USART2_struct
{
    register8_t rsv_0x00[208]; /* RESERVED REGISTER BLOCK */
    register8_t UCSR2A;        /* USART Control and Status Register A */
    register8_t UCSR2B;        /* USART Control and Status Register B */
    register8_t UCSR2C;        /* USART Control and Status Register C */
    register8_t rsv_0xD3;      /* RESERVED REGISTER */
    _REGISTER16 (UBRR2);       /* USART Baud Rate Register  Bytes */
    register8_t rsv_0xD5;      /* RESERVED REGISTER */
    register8_t UDR2;          /* USART I/O Data Register */
} USART2_t;


/*
--------------------------------------------------------------------------------
USART - USART
--------------------------------------------------------------------------------
*/

typedef struct USART3_struct
{
    register8_t rsv_0x00[304]; /* RESERVED REGISTER BLOCK */
    register8_t UCSR3A;        /* USART Control and Status Register A */
    register8_t UCSR3B;        /* USART Control and Status Register B */
    register8_t UCSR3C;        /* USART Control and Status Register C */
    register8_t rsv_0x133;     /* RESERVED REGISTER */
    _REGISTER16 (UBRR3);       /* USART Baud Rate Register Bytes */
    register8_t rsv_0x135;     /* RESERVED REGISTER */
    register8_t UDR3;          /* USART I/O Data Register */
} USART3_t;


/* USART Receive Complete */
typedef enum USART0_RXC0_enum
{
    USART0_RXC0_CLEAR_gc = (0x00), /* USART Receive Complete - CLEAR */
    USART0_RXC0_SET_gc   = (0x80), /* USART Receive Complete - SET */
} USART0_RXC0_t;

/* USART Transmitt Complete */
typedef enum USART0_TXC0_enum
{
    USART0_TXC0_CLEAR_gc = (0x00), /* USART Transmitt Complete - CLEAR */
    USART0_TXC0_SET_gc   = (0x40), /* USART Transmitt Complete - SET */
} USART0_TXC0_t;

/* USART Data Register Empty */
typedef enum USART0_UDRE0_enum
{
    USART0_UDRE0_CLEAR_gc = (0x00), /* USART Data Register Empty - CLEAR */
    USART0_UDRE0_SET_gc   = (0x20), /* USART Data Register Empty - SET */
} USART0_UDRE0_t;

/* Framing Error */
typedef enum USART0_FE0_enum
{
    USART0_FE0_CLEAR_gc = (0x00), /* Framing Error - CLEAR */
    USART0_FE0_SET_gc   = (0x10), /* Framing Error - SET */
} USART0_FE0_t;

/* Data overRun */
typedef enum USART0_DOR0_enum
{
    USART0_DOR0_CLEAR_gc = (0x00), /* Data overRun - CLEAR */
    USART0_DOR0_SET_gc   = (0x08), /* Data overRun - SET */
} USART0_DOR0_t;

/* Parity Error */
typedef enum USART0_UPE0_enum
{
    USART0_UPE0_CLEAR_gc = (0x00), /* Parity Error - CLEAR */
    USART0_UPE0_SET_gc   = (0x04), /* Parity Error - SET */
} USART0_UPE0_t;

/* Double the USART transmission speed */
typedef enum USART0_U2X0_enum
{
    USART0_U2X0_CLEAR_gc = (0x00), /* Double the USART transmission speed - CLEAR */
    USART0_U2X0_SET_gc   = (0x02), /* Double the USART transmission speed - SET */
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

/* USART Data register Empty Interrupt Enable */
typedef enum USART0_UDRIE0_enum
{
    USART0_UDRIE0_CLEAR_gc = (0x00), /* USART Data register Empty Interrupt Enable - CLEAR */
    USART0_UDRIE0_SET_gc   = (0x20), /* USART Data register Empty Interrupt Enable - SET */
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
    USART0_UMSEL0_VAL_0x03_gc = (0x03<<6), /* Master SPI */
} USART0_UMSEL0_t;

/* Parity Mode Bits */
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
#define USART0_UCSR0C_UCSZ0_gc(x) ((x<<1) & 0x06)

/* Clock Polarity */
typedef enum USART0_UCPOL0_enum
{
    USART0_UCPOL0_CLEAR_gc = (0x00), /* Clock Polarity - CLEAR */
    USART0_UCPOL0_SET_gc   = (0x01), /* Clock Polarity - SET */
} USART0_UCPOL0_t;

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

/* USART Receive Complete */
typedef enum USART2_RXC2_enum
{
    USART2_RXC2_CLEAR_gc = (0x00), /* USART Receive Complete - CLEAR */
    USART2_RXC2_SET_gc   = (0x80), /* USART Receive Complete - SET */
} USART2_RXC2_t;

/* USART Transmitt Complete */
typedef enum USART2_TXC2_enum
{
    USART2_TXC2_CLEAR_gc = (0x00), /* USART Transmitt Complete - CLEAR */
    USART2_TXC2_SET_gc   = (0x40), /* USART Transmitt Complete - SET */
} USART2_TXC2_t;

/* USART Data Register Empty */
typedef enum USART2_UDRE2_enum
{
    USART2_UDRE2_CLEAR_gc = (0x00), /* USART Data Register Empty - CLEAR */
    USART2_UDRE2_SET_gc   = (0x20), /* USART Data Register Empty - SET */
} USART2_UDRE2_t;

/* Framing Error */
typedef enum USART2_FE2_enum
{
    USART2_FE2_CLEAR_gc = (0x00), /* Framing Error - CLEAR */
    USART2_FE2_SET_gc   = (0x10), /* Framing Error - SET */
} USART2_FE2_t;

/* Data overRun */
typedef enum USART2_DOR2_enum
{
    USART2_DOR2_CLEAR_gc = (0x00), /* Data overRun - CLEAR */
    USART2_DOR2_SET_gc   = (0x08), /* Data overRun - SET */
} USART2_DOR2_t;

/* Parity Error */
typedef enum USART2_UPE2_enum
{
    USART2_UPE2_CLEAR_gc = (0x00), /* Parity Error - CLEAR */
    USART2_UPE2_SET_gc   = (0x04), /* Parity Error - SET */
} USART2_UPE2_t;

/* Double the USART transmission speed */
typedef enum USART2_U2X2_enum
{
    USART2_U2X2_CLEAR_gc = (0x00), /* Double the USART transmission speed - CLEAR */
    USART2_U2X2_SET_gc   = (0x02), /* Double the USART transmission speed - SET */
} USART2_U2X2_t;

/* Multi-processor Communication Mode */
typedef enum USART2_MPCM2_enum
{
    USART2_MPCM2_CLEAR_gc = (0x00), /* Multi-processor Communication Mode - CLEAR */
    USART2_MPCM2_SET_gc   = (0x01), /* Multi-processor Communication Mode - SET */
} USART2_MPCM2_t;

/* RX Complete Interrupt Enable */
typedef enum USART2_RXCIE2_enum
{
    USART2_RXCIE2_CLEAR_gc = (0x00), /* RX Complete Interrupt Enable - CLEAR */
    USART2_RXCIE2_SET_gc   = (0x80), /* RX Complete Interrupt Enable - SET */
} USART2_RXCIE2_t;

/* TX Complete Interrupt Enable */
typedef enum USART2_TXCIE2_enum
{
    USART2_TXCIE2_CLEAR_gc = (0x00), /* TX Complete Interrupt Enable - CLEAR */
    USART2_TXCIE2_SET_gc   = (0x40), /* TX Complete Interrupt Enable - SET */
} USART2_TXCIE2_t;

/* USART Data register Empty Interrupt Enable */
typedef enum USART2_UDRIE2_enum
{
    USART2_UDRIE2_CLEAR_gc = (0x00), /* USART Data register Empty Interrupt Enable - CLEAR */
    USART2_UDRIE2_SET_gc   = (0x20), /* USART Data register Empty Interrupt Enable - SET */
} USART2_UDRIE2_t;

/* Receiver Enable */
typedef enum USART2_RXEN2_enum
{
    USART2_RXEN2_CLEAR_gc = (0x00), /* Receiver Enable - CLEAR */
    USART2_RXEN2_SET_gc   = (0x10), /* Receiver Enable - SET */
} USART2_RXEN2_t;

/* Transmitter Enable */
typedef enum USART2_TXEN2_enum
{
    USART2_TXEN2_CLEAR_gc = (0x00), /* Transmitter Enable - CLEAR */
    USART2_TXEN2_SET_gc   = (0x08), /* Transmitter Enable - SET */
} USART2_TXEN2_t;

/* Character Size */
typedef enum USART2_UCSZ22_enum
{
    USART2_UCSZ22_CLEAR_gc = (0x00), /* Character Size - CLEAR */
    USART2_UCSZ22_SET_gc   = (0x04), /* Character Size - SET */
} USART2_UCSZ22_t;

/* Receive Data Bit 8 */
typedef enum USART2_RXB82_enum
{
    USART2_RXB82_CLEAR_gc = (0x00), /* Receive Data Bit 8 - CLEAR */
    USART2_RXB82_SET_gc   = (0x02), /* Receive Data Bit 8 - SET */
} USART2_RXB82_t;

/* Transmit Data Bit 8 */
typedef enum USART2_TXB82_enum
{
    USART2_TXB82_CLEAR_gc = (0x00), /* Transmit Data Bit 8 - CLEAR */
    USART2_TXB82_SET_gc   = (0x01), /* Transmit Data Bit 8 - SET */
} USART2_TXB82_t;

/* USART Mode Select */
typedef enum USART2_UMSEL2_enum
{
    USART2_UMSEL2_VAL_0x00_gc = (0x00<<6), /* Asynchronous USART */
    USART2_UMSEL2_VAL_0x01_gc = (0x01<<6), /* Synchronous USART */
    USART2_UMSEL2_VAL_0x03_gc = (0x03<<6), /* Master SPI */
} USART2_UMSEL2_t;

/* Parity Mode Bits */
typedef enum USART2_UPM2_enum
{
    USART2_UPM2_VAL_0x00_gc = (0x00<<4), /* Disabled */
    USART2_UPM2_VAL_0x01_gc = (0x01<<4), /* Reserved */
    USART2_UPM2_VAL_0x02_gc = (0x02<<4), /* Enabled, Even Parity */
    USART2_UPM2_VAL_0x03_gc = (0x03<<4), /* Enabled, Odd Parity */
} USART2_UPM2_t;

/* Stop Bit Select */
typedef enum USART2_USBS2_enum
{
    USART2_USBS2_VAL_0x00_gc = (0x00<<3), /* 1-bit */
    USART2_USBS2_VAL_0x01_gc = (0x01<<3), /* 2-bit */
} USART2_USBS2_t;

/* Character Size */
#define USART2_UCSR2C_UCSZ2_gc(x) ((x<<1) & 0x06)

/* Clock Polarity */
typedef enum USART2_UCPOL2_enum
{
    USART2_UCPOL2_CLEAR_gc = (0x00), /* Clock Polarity - CLEAR */
    USART2_UCPOL2_SET_gc   = (0x01), /* Clock Polarity - SET */
} USART2_UCPOL2_t;

/* USART Receive Complete */
typedef enum USART3_RXC3_enum
{
    USART3_RXC3_CLEAR_gc = (0x00), /* USART Receive Complete - CLEAR */
    USART3_RXC3_SET_gc   = (0x80), /* USART Receive Complete - SET */
} USART3_RXC3_t;

/* USART Transmitt Complete */
typedef enum USART3_TXC3_enum
{
    USART3_TXC3_CLEAR_gc = (0x00), /* USART Transmitt Complete - CLEAR */
    USART3_TXC3_SET_gc   = (0x40), /* USART Transmitt Complete - SET */
} USART3_TXC3_t;

/* USART Data Register Empty */
typedef enum USART3_UDRE3_enum
{
    USART3_UDRE3_CLEAR_gc = (0x00), /* USART Data Register Empty - CLEAR */
    USART3_UDRE3_SET_gc   = (0x20), /* USART Data Register Empty - SET */
} USART3_UDRE3_t;

/* Framing Error */
typedef enum USART3_FE3_enum
{
    USART3_FE3_CLEAR_gc = (0x00), /* Framing Error - CLEAR */
    USART3_FE3_SET_gc   = (0x10), /* Framing Error - SET */
} USART3_FE3_t;

/* Data overRun */
typedef enum USART3_DOR3_enum
{
    USART3_DOR3_CLEAR_gc = (0x00), /* Data overRun - CLEAR */
    USART3_DOR3_SET_gc   = (0x08), /* Data overRun - SET */
} USART3_DOR3_t;

/* Parity Error */
typedef enum USART3_UPE3_enum
{
    USART3_UPE3_CLEAR_gc = (0x00), /* Parity Error - CLEAR */
    USART3_UPE3_SET_gc   = (0x04), /* Parity Error - SET */
} USART3_UPE3_t;

/* Double the USART transmission speed */
typedef enum USART3_U2X3_enum
{
    USART3_U2X3_CLEAR_gc = (0x00), /* Double the USART transmission speed - CLEAR */
    USART3_U2X3_SET_gc   = (0x02), /* Double the USART transmission speed - SET */
} USART3_U2X3_t;

/* Multi-processor Communication Mode */
typedef enum USART3_MPCM3_enum
{
    USART3_MPCM3_CLEAR_gc = (0x00), /* Multi-processor Communication Mode - CLEAR */
    USART3_MPCM3_SET_gc   = (0x01), /* Multi-processor Communication Mode - SET */
} USART3_MPCM3_t;

/* RX Complete Interrupt Enable */
typedef enum USART3_RXCIE3_enum
{
    USART3_RXCIE3_CLEAR_gc = (0x00), /* RX Complete Interrupt Enable - CLEAR */
    USART3_RXCIE3_SET_gc   = (0x80), /* RX Complete Interrupt Enable - SET */
} USART3_RXCIE3_t;

/* TX Complete Interrupt Enable */
typedef enum USART3_TXCIE3_enum
{
    USART3_TXCIE3_CLEAR_gc = (0x00), /* TX Complete Interrupt Enable - CLEAR */
    USART3_TXCIE3_SET_gc   = (0x40), /* TX Complete Interrupt Enable - SET */
} USART3_TXCIE3_t;

/* USART Data register Empty Interrupt Enable */
typedef enum USART3_UDRIE3_enum
{
    USART3_UDRIE3_CLEAR_gc = (0x00), /* USART Data register Empty Interrupt Enable - CLEAR */
    USART3_UDRIE3_SET_gc   = (0x20), /* USART Data register Empty Interrupt Enable - SET */
} USART3_UDRIE3_t;

/* Receiver Enable */
typedef enum USART3_RXEN3_enum
{
    USART3_RXEN3_CLEAR_gc = (0x00), /* Receiver Enable - CLEAR */
    USART3_RXEN3_SET_gc   = (0x10), /* Receiver Enable - SET */
} USART3_RXEN3_t;

/* Transmitter Enable */
typedef enum USART3_TXEN3_enum
{
    USART3_TXEN3_CLEAR_gc = (0x00), /* Transmitter Enable - CLEAR */
    USART3_TXEN3_SET_gc   = (0x08), /* Transmitter Enable - SET */
} USART3_TXEN3_t;

/* Character Size */
typedef enum USART3_UCSZ32_enum
{
    USART3_UCSZ32_CLEAR_gc = (0x00), /* Character Size - CLEAR */
    USART3_UCSZ32_SET_gc   = (0x04), /* Character Size - SET */
} USART3_UCSZ32_t;

/* Receive Data Bit 8 */
typedef enum USART3_RXB83_enum
{
    USART3_RXB83_CLEAR_gc = (0x00), /* Receive Data Bit 8 - CLEAR */
    USART3_RXB83_SET_gc   = (0x02), /* Receive Data Bit 8 - SET */
} USART3_RXB83_t;

/* Transmit Data Bit 8 */
typedef enum USART3_TXB83_enum
{
    USART3_TXB83_CLEAR_gc = (0x00), /* Transmit Data Bit 8 - CLEAR */
    USART3_TXB83_SET_gc   = (0x01), /* Transmit Data Bit 8 - SET */
} USART3_TXB83_t;

/* USART Mode Select */
typedef enum USART3_UMSEL3_enum
{
    USART3_UMSEL3_VAL_0x00_gc = (0x00<<6), /* Asynchronous USART */
    USART3_UMSEL3_VAL_0x01_gc = (0x01<<6), /* Synchronous USART */
    USART3_UMSEL3_VAL_0x03_gc = (0x03<<6), /* Master SPI */
} USART3_UMSEL3_t;

/* Parity Mode Bits */
typedef enum USART3_UPM3_enum
{
    USART3_UPM3_VAL_0x00_gc = (0x00<<4), /* Disabled */
    USART3_UPM3_VAL_0x01_gc = (0x01<<4), /* Reserved */
    USART3_UPM3_VAL_0x02_gc = (0x02<<4), /* Enabled, Even Parity */
    USART3_UPM3_VAL_0x03_gc = (0x03<<4), /* Enabled, Odd Parity */
} USART3_UPM3_t;

/* Stop Bit Select */
typedef enum USART3_USBS3_enum
{
    USART3_USBS3_VAL_0x00_gc = (0x00<<3), /* 1-bit */
    USART3_USBS3_VAL_0x01_gc = (0x01<<3), /* 2-bit */
} USART3_USBS3_t;

/* Character Size */
#define USART3_UCSR3C_UCSZ3_gc(x) ((x<<1) & 0x06)

/* Clock Polarity */
typedef enum USART3_UCPOL3_enum
{
    USART3_UCPOL3_CLEAR_gc = (0x00), /* Clock Polarity - CLEAR */
    USART3_UCPOL3_SET_gc   = (0x01), /* Clock Polarity - SET */
} USART3_UCPOL3_t;

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
PORT - I/O Port
--------------------------------------------------------------------------------
*/

typedef struct PORTG_struct
{
    register8_t rsv_0x00[50]; /* RESERVED REGISTER BLOCK */
    register8_t PING;         /* Input Pins, Port G */
    register8_t DDRG;         /* Data Direction Register, Port G */
    register8_t PORTG;        /* Data Register, Port G */
} PORTG_t;


/*
--------------------------------------------------------------------------------
PORT - I/O Port
--------------------------------------------------------------------------------
*/

typedef struct PORTH_struct
{
    register8_t rsv_0x00[256]; /* RESERVED REGISTER BLOCK */
    register8_t PINH;          /* PORT H Input Pins */
    register8_t DDRH;          /* PORT H Data Direction Register */
    register8_t PORTH;         /* PORT H Data Register */
} PORTH_t;


/*
--------------------------------------------------------------------------------
PORT - I/O Port
--------------------------------------------------------------------------------
*/

typedef struct PORTJ_struct
{
    register8_t rsv_0x00[259]; /* RESERVED REGISTER BLOCK */
    register8_t PINJ;          /* PORT J Input Pins */
    register8_t DDRJ;          /* PORT J Data Direction Register */
    register8_t PORTJ;         /* PORT J Data Register */
} PORTJ_t;


/*
--------------------------------------------------------------------------------
PORT - I/O Port
--------------------------------------------------------------------------------
*/

typedef struct PORTK_struct
{
    register8_t rsv_0x00[262]; /* RESERVED REGISTER BLOCK */
    register8_t PINK;          /* PORT K Input Pins */
    register8_t DDRK;          /* PORT K Data Direction Register */
    register8_t PORTK;         /* PORT K Data Register */
} PORTK_t;


/*
--------------------------------------------------------------------------------
PORT - I/O Port
--------------------------------------------------------------------------------
*/

typedef struct PORTL_struct
{
    register8_t rsv_0x00[265]; /* RESERVED REGISTER BLOCK */
    register8_t PINL;          /* PORT L Input Pins */
    register8_t DDRL;          /* PORT L Data Direction Register */
    register8_t PORTL;         /* PORT L Data Register */
} PORTL_t;


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
TC16 - Timer/Counter, 16-bit
--------------------------------------------------------------------------------
*/

typedef struct TC5_struct
{
    register8_t rsv_0x00[58];  /* RESERVED REGISTER BLOCK */
    register8_t TIFR5;         /* Timer/Counter5 Interrupt Flag register */
    register8_t rsv_0x3B[56];  /* RESERVED REGISTER BLOCK */
    register8_t TIMSK5;        /* Timer/Counter5 Interrupt Mask Register */
    register8_t rsv_0x74[172]; /* RESERVED REGISTER BLOCK */
    register8_t TCCR5A;        /* Timer/Counter5 Control Register A */
    register8_t TCCR5B;        /* Timer/Counter5 Control Register B */
    register8_t TCCR5C;        /* Timer/Counter 5 Control Register C */
    register8_t rsv_0x123;     /* RESERVED REGISTER */
    _REGISTER16 (TCNT5);       /* Timer/Counter5  Bytes */
    register8_t rsv_0x125;     /* RESERVED REGISTER */
    _REGISTER16 (ICR5);        /* Timer/Counter5 Input Capture Register  Bytes */
    register8_t rsv_0x127;     /* RESERVED REGISTER */
    _REGISTER16 (OCR5A);       /* Timer/Counter5 Output Compare Register A  Bytes */
    register8_t rsv_0x129;     /* RESERVED REGISTER */
    _REGISTER16 (OCR5B);       /* Timer/Counter5 Output Compare Register B  Bytes */
    register8_t rsv_0x12B;     /* RESERVED REGISTER */
    _REGISTER16 (OCR5C);       /* Timer/Counter5 Output Compare Register B  Bytes */
} TC5_t;


/*
--------------------------------------------------------------------------------
TC16 - Timer/Counter, 16-bit
--------------------------------------------------------------------------------
*/

typedef struct TC4_struct
{
    register8_t rsv_0x00[57]; /* RESERVED REGISTER BLOCK */
    register8_t TIFR4;        /* Timer/Counter4 Interrupt Flag register */
    register8_t rsv_0x3A[56]; /* RESERVED REGISTER BLOCK */
    register8_t TIMSK4;       /* Timer/Counter4 Interrupt Mask Register */
    register8_t rsv_0x73[45]; /* RESERVED REGISTER BLOCK */
    register8_t TCCR4A;       /* Timer/Counter4 Control Register A */
    register8_t TCCR4B;       /* Timer/Counter4 Control Register B */
    register8_t TCCR4C;       /* Timer/Counter 4 Control Register C */
    register8_t rsv_0xA3;     /* RESERVED REGISTER */
    _REGISTER16 (TCNT4);      /* Timer/Counter4  Bytes */
    register8_t rsv_0xA5;     /* RESERVED REGISTER */
    _REGISTER16 (ICR4);       /* Timer/Counter4 Input Capture Register  Bytes */
    register8_t rsv_0xA7;     /* RESERVED REGISTER */
    _REGISTER16 (OCR4A);      /* Timer/Counter4 Output Compare Register A  Bytes */
    register8_t rsv_0xA9;     /* RESERVED REGISTER */
    _REGISTER16 (OCR4B);      /* Timer/Counter4 Output Compare Register B  Bytes */
    register8_t rsv_0xAB;     /* RESERVED REGISTER */
    _REGISTER16 (OCR4C);      /* Timer/Counter4 Output Compare Register B  Bytes */
} TC4_t;


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
#define TC5_TCCR5A_COM5A_gc(x) ((x<<6) & 0xC0)

/* Compare Output Mode 5B, bits */
#define TC5_TCCR5A_COM5B_gc(x) ((x<<4) & 0x30)

/* Compare Output Mode 5C, bits */
#define TC5_TCCR5A_COM5C_gc(x) ((x<<2) & 0x0C)

/* Waveform Generation Mode */
#define TC5_TCCR5A_WGM5_gc(x) (x & 0x03)

/* Input Capture 5 Noise Canceler */
typedef enum TC5_ICNC5_enum
{
    TC5_ICNC5_CLEAR_gc = (0x00), /* Input Capture 5 Noise Canceler - CLEAR */
    TC5_ICNC5_SET_gc   = (0x80), /* Input Capture 5 Noise Canceler - SET */
} TC5_ICNC5_t;

/* Input Capture 5 Edge Select */
typedef enum TC5_ICES5_enum
{
    TC5_ICES5_CLEAR_gc = (0x00), /* Input Capture 5 Edge Select - CLEAR */
    TC5_ICES5_SET_gc   = (0x40), /* Input Capture 5 Edge Select - SET */
} TC5_ICES5_t;

/* Waveform Generation Mode */
#define TC5_TCCR5B_WGM5_gc(x) ((x<<3) & 0x18)

/* Prescaler source of Timer/Counter 5 */
typedef enum TC5_CS5_enum
{
    TC5_CS5_VAL_0x00_gc = (0x00), /* No Clock Source (Stopped) */
    TC5_CS5_VAL_0x01_gc = (0x01), /* Running, No Prescaling */
    TC5_CS5_VAL_0x02_gc = (0x02), /* Running, CLK/8 */
    TC5_CS5_VAL_0x03_gc = (0x03), /* Running, CLK/64 */
    TC5_CS5_VAL_0x04_gc = (0x04), /* Running, CLK/256 */
    TC5_CS5_VAL_0x05_gc = (0x05), /* Running, CLK/1024 */
    TC5_CS5_VAL_0x06_gc = (0x06), /* Running, ExtClk Tx Falling Edge */
    TC5_CS5_VAL_0x07_gc = (0x07), /* Running, ExtClk Tx Rising Edge */
} TC5_CS5_t;

/* Force Output Compare 5A */
typedef enum TC5_FOC5A_enum
{
    TC5_FOC5A_CLEAR_gc = (0x00), /* Force Output Compare 5A - CLEAR */
    TC5_FOC5A_SET_gc   = (0x80), /* Force Output Compare 5A - SET */
} TC5_FOC5A_t;

/* Force Output Compare 5B */
typedef enum TC5_FOC5B_enum
{
    TC5_FOC5B_CLEAR_gc = (0x00), /* Force Output Compare 5B - CLEAR */
    TC5_FOC5B_SET_gc   = (0x40), /* Force Output Compare 5B - SET */
} TC5_FOC5B_t;

/* Force Output Compare 5C */
typedef enum TC5_FOC5C_enum
{
    TC5_FOC5C_CLEAR_gc = (0x00), /* Force Output Compare 5C - CLEAR */
    TC5_FOC5C_SET_gc   = (0x20), /* Force Output Compare 5C - SET */
} TC5_FOC5C_t;

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

/* Input Capture Flag 5 */
typedef enum TC5_ICF5_enum
{
    TC5_ICF5_CLEAR_gc = (0x00), /* Input Capture Flag 5 - CLEAR */
    TC5_ICF5_SET_gc   = (0x20), /* Input Capture Flag 5 - SET */
} TC5_ICF5_t;

/* Output Compare Flag 5C */
typedef enum TC5_OCF5C_enum
{
    TC5_OCF5C_CLEAR_gc = (0x00), /* Output Compare Flag 5C - CLEAR */
    TC5_OCF5C_SET_gc   = (0x08), /* Output Compare Flag 5C - SET */
} TC5_OCF5C_t;

/* Output Compare Flag 5B */
typedef enum TC5_OCF5B_enum
{
    TC5_OCF5B_CLEAR_gc = (0x00), /* Output Compare Flag 5B - CLEAR */
    TC5_OCF5B_SET_gc   = (0x04), /* Output Compare Flag 5B - SET */
} TC5_OCF5B_t;

/* Output Compare Flag 5A */
typedef enum TC5_OCF5A_enum
{
    TC5_OCF5A_CLEAR_gc = (0x00), /* Output Compare Flag 5A - CLEAR */
    TC5_OCF5A_SET_gc   = (0x02), /* Output Compare Flag 5A - SET */
} TC5_OCF5A_t;

/* Timer/Counter5 Overflow Flag */
typedef enum TC5_TOV5_enum
{
    TC5_TOV5_CLEAR_gc = (0x00), /* Timer/Counter5 Overflow Flag - CLEAR */
    TC5_TOV5_SET_gc   = (0x01), /* Timer/Counter5 Overflow Flag - SET */
} TC5_TOV5_t;

/* Compare Output Mode 1A, bits */
#define TC4_TCCR4A_COM4A_gc(x) ((x<<6) & 0xC0)

/* Compare Output Mode 4B, bits */
#define TC4_TCCR4A_COM4B_gc(x) ((x<<4) & 0x30)

/* Compare Output Mode 4C, bits */
#define TC4_TCCR4A_COM4C_gc(x) ((x<<2) & 0x0C)

/* Waveform Generation Mode */
#define TC4_TCCR4A_WGM4_gc(x) (x & 0x03)

/* Input Capture 4 Noise Canceler */
typedef enum TC4_ICNC4_enum
{
    TC4_ICNC4_CLEAR_gc = (0x00), /* Input Capture 4 Noise Canceler - CLEAR */
    TC4_ICNC4_SET_gc   = (0x80), /* Input Capture 4 Noise Canceler - SET */
} TC4_ICNC4_t;

/* Input Capture 4 Edge Select */
typedef enum TC4_ICES4_enum
{
    TC4_ICES4_CLEAR_gc = (0x00), /* Input Capture 4 Edge Select - CLEAR */
    TC4_ICES4_SET_gc   = (0x40), /* Input Capture 4 Edge Select - SET */
} TC4_ICES4_t;

/* Waveform Generation Mode */
#define TC4_TCCR4B_WGM4_gc(x) ((x<<3) & 0x18)

/* Prescaler source of Timer/Counter 4 */
typedef enum TC4_CS4_enum
{
    TC4_CS4_VAL_0x00_gc = (0x00), /* No Clock Source (Stopped) */
    TC4_CS4_VAL_0x01_gc = (0x01), /* Running, No Prescaling */
    TC4_CS4_VAL_0x02_gc = (0x02), /* Running, CLK/8 */
    TC4_CS4_VAL_0x03_gc = (0x03), /* Running, CLK/64 */
    TC4_CS4_VAL_0x04_gc = (0x04), /* Running, CLK/256 */
    TC4_CS4_VAL_0x05_gc = (0x05), /* Running, CLK/1024 */
    TC4_CS4_VAL_0x06_gc = (0x06), /* Running, ExtClk Tx Falling Edge */
    TC4_CS4_VAL_0x07_gc = (0x07), /* Running, ExtClk Tx Rising Edge */
} TC4_CS4_t;

/* Force Output Compare 4A */
typedef enum TC4_FOC4A_enum
{
    TC4_FOC4A_CLEAR_gc = (0x00), /* Force Output Compare 4A - CLEAR */
    TC4_FOC4A_SET_gc   = (0x80), /* Force Output Compare 4A - SET */
} TC4_FOC4A_t;

/* Force Output Compare 4B */
typedef enum TC4_FOC4B_enum
{
    TC4_FOC4B_CLEAR_gc = (0x00), /* Force Output Compare 4B - CLEAR */
    TC4_FOC4B_SET_gc   = (0x40), /* Force Output Compare 4B - SET */
} TC4_FOC4B_t;

/* Force Output Compare 4C */
typedef enum TC4_FOC4C_enum
{
    TC4_FOC4C_CLEAR_gc = (0x00), /* Force Output Compare 4C - CLEAR */
    TC4_FOC4C_SET_gc   = (0x20), /* Force Output Compare 4C - SET */
} TC4_FOC4C_t;

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

/* Input Capture Flag 4 */
typedef enum TC4_ICF4_enum
{
    TC4_ICF4_CLEAR_gc = (0x00), /* Input Capture Flag 4 - CLEAR */
    TC4_ICF4_SET_gc   = (0x20), /* Input Capture Flag 4 - SET */
} TC4_ICF4_t;

/* Output Compare Flag 4C */
typedef enum TC4_OCF4C_enum
{
    TC4_OCF4C_CLEAR_gc = (0x00), /* Output Compare Flag 4C - CLEAR */
    TC4_OCF4C_SET_gc   = (0x08), /* Output Compare Flag 4C - SET */
} TC4_OCF4C_t;

/* Output Compare Flag 4B */
typedef enum TC4_OCF4B_enum
{
    TC4_OCF4B_CLEAR_gc = (0x00), /* Output Compare Flag 4B - CLEAR */
    TC4_OCF4B_SET_gc   = (0x04), /* Output Compare Flag 4B - SET */
} TC4_OCF4B_t;

/* Output Compare Flag 4A */
typedef enum TC4_OCF4A_enum
{
    TC4_OCF4A_CLEAR_gc = (0x00), /* Output Compare Flag 4A - CLEAR */
    TC4_OCF4A_SET_gc   = (0x02), /* Output Compare Flag 4A - SET */
} TC4_OCF4A_t;

/* Timer/Counter4 Overflow Flag */
typedef enum TC4_TOV4_enum
{
    TC4_TOV4_CLEAR_gc = (0x00), /* Timer/Counter4 Overflow Flag - CLEAR */
    TC4_TOV4_SET_gc   = (0x01), /* Timer/Counter4 Overflow Flag - SET */
} TC4_TOV4_t;

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
    register8_t PCMSK1;       /* Pin Change Mask Register 1 */
    register8_t PCMSK2;       /* Pin Change Mask Register 2 */
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
    CPU_SRL_VAL_0x01_gc = (0x01<<4), /* LS = 0x2200 - 0x1FFF, US = 0x2000 - 0xFFFF */
    CPU_SRL_VAL_0x02_gc = (0x02<<4), /* LS = 0x2200 - 0x3FFF, US = 0x4000 - 0xFFFF */
    CPU_SRL_VAL_0x03_gc = (0x03<<4), /* LS = 0x2200 - 0x5FFF, US = 0x6000 - 0xFFFF */
    CPU_SRL_VAL_0x04_gc = (0x04<<4), /* LS = 0x2200 - 0x7FFF, US = 0x8000 - 0xFFFF */
    CPU_SRL_VAL_0x05_gc = (0x05<<4), /* LS = 0x2200 - 0x9FFF, US = 0xA000 - 0xFFFF */
    CPU_SRL_VAL_0x06_gc = (0x06<<4), /* LS = 0x2200 - 0xBFFF, US = 0xC000 - 0xFFFF */
    CPU_SRL_VAL_0x07_gc = (0x07<<4), /* LS = 0x2200 - 0xDFFF, US = 0xE000 - 0xFFFF */
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
#define CPU_XMCRB_XMM_gc(x) (x & 0x07)

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

/* Power Reduction USART3 */
typedef enum CPU_PRUSART3_enum
{
    CPU_PRUSART3_CLEAR_gc = (0x00), /* Power Reduction USART3 - CLEAR */
    CPU_PRUSART3_SET_gc   = (0x04), /* Power Reduction USART3 - SET */
} CPU_PRUSART3_t;

/* Power Reduction USART2 */
typedef enum CPU_PRUSART2_enum
{
    CPU_PRUSART2_CLEAR_gc = (0x00), /* Power Reduction USART2 - CLEAR */
    CPU_PRUSART2_SET_gc   = (0x02), /* Power Reduction USART2 - SET */
} CPU_PRUSART2_t;

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

/* Power Reduction USART0 */
typedef enum CPU_PRUSART0_enum
{
    CPU_PRUSART0_CLEAR_gc = (0x00), /* Power Reduction USART0 - CLEAR */
    CPU_PRUSART0_SET_gc   = (0x02), /* Power Reduction USART0 - SET */
} CPU_PRUSART0_t;

/* Power Reduction ADC */
typedef enum CPU_PRADC_enum
{
    CPU_PRADC_CLEAR_gc = (0x00), /* Power Reduction ADC - CLEAR */
    CPU_PRADC_SET_gc   = (0x01), /* Power Reduction ADC - SET */
} CPU_PRADC_t;

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
    register8_t ADCSRA;        /* The ADC Control and Status register A */
    register8_t ADCSRB;        /* The ADC Control and Status register B */
    register8_t ADMUX;         /* The ADC multiplexer Selection Register */
    register8_t DIDR2;         /* Digital Input Disable Register */
    register8_t DIDR0;         /* Digital Input Disable Register */
} ADC_t;


/* Reference Selection Bits */
typedef enum ADC_REFS_enum
{
    ADC_REFS_VAL_0x00_gc = (0x00<<6), /* AREF, Internal Vref turned off */
    ADC_REFS_VAL_0x01_gc = (0x01<<6), /* AVCC with external capacitor at AREF pin */
    ADC_REFS_VAL_0x02_gc = (0x02<<6), /* Internal 1.1V Voltage Reference with external capacitor at AREF pin */
    ADC_REFS_VAL_0x03_gc = (0x03<<6), /* Internal 2.56V Voltage Reference with external capacitor at AREF pin */
} ADC_REFS_t;

/* Left Adjust Result */
typedef enum ADC_ADLAR_enum
{
    ADC_ADLAR_CLEAR_gc = (0x00), /* Left Adjust Result - CLEAR */
    ADC_ADLAR_SET_gc   = (0x20), /* Left Adjust Result - SET */
} ADC_ADLAR_t;

/* Analog Channel and Gain Selection Bits */
typedef enum ADC_MUX_enum
{
    ADC_MUX_ADC0_gc             = (0x00), /* ADC Single Ended Input pin 0 */
    ADC_MUX_ADC1_gc             = (0x01), /* ADC Single Ended Input pin 1 */
    ADC_MUX_ADC2_gc             = (0x02), /* ADC Single Ended Input pin 2 */
    ADC_MUX_ADC3_gc             = (0x03), /* ADC Single Ended Input pin 3 */
    ADC_MUX_ADC4_gc             = (0x04), /* ADC Single Ended Input pin 4 */
    ADC_MUX_ADC5_gc             = (0x05), /* ADC Single Ended Input pin 5 */
    ADC_MUX_ADC6_gc             = (0x06), /* ADC Single Ended Input pin 6 */
    ADC_MUX_ADC7_gc             = (0x07), /* ADC Single Ended Input pin 7 */
    ADC_MUX_ADC0_ADC0_10X_gc    = (0x08), /* ADC Differential Inputs Postive pin 0 Negative pin 0 10x Gain */
    ADC_MUX_ADC1_ADC0_10X_gc    = (0x09), /* ADC Differential Inputs Postive pin 1 Negative pin 0 10x Gain */
    ADC_MUX_ADC0_ADC0_200x_gc   = (0x0A), /* ADC Differential Inputs Postive pin 0 Negative pin 0 200x Gain */
    ADC_MUX_ADC1_ADC0_200X_gc   = (0x0B), /* ADC Differential Inputs Postive pin 1 Negative pin 0 200x Gain */
    ADC_MUX_ADC2_ADC2_10X_gc    = (0x0C), /* ADC Differential Inputs Postive pin 2 Negative pin 2 10x Gain */
    ADC_MUX_ADC3_ADC2_10X_gc    = (0x0D), /* ADC Differential Inputs Postive pin 3 Negative pin 2 10x Gain */
    ADC_MUX_ADC2_ADC2_200X_gc   = (0x0E), /* ADC Differential Inputs Postive pin 2 Negative pin 2 200x Gain */
    ADC_MUX_ADC3_ADC2_200X_gc   = (0x0F), /* ADC Differential Inputs Postive pin 3 Negative pin 2 200x Gain */
    ADC_MUX_ADC0_ADC1_1X_gc     = (0x10), /* ADC Differential Inputs Postive pin 0 Negative pin 1 1x Gain */
    ADC_MUX_ADC1_ADC1_1X_gc     = (0x11), /* ADC Differential Inputs Postive pin 1 Negative pin 1 1x Gain */
    ADC_MUX_ADC2_ADC1_1X_gc     = (0x12), /* ADC Differential Inputs Postive pin 2 Negative pin 1 1x Gain */
    ADC_MUX_ADC3_ADC1_1X_gc     = (0x13), /* ADC Differential Inputs Postive pin 3 Negative pin 1 1x Gain */
    ADC_MUX_ADC4_ADC1_1X_gc     = (0x14), /* ADC Differential Inputs Postive pin 4 Negative pin 1 1x Gain */
    ADC_MUX_ADC5_ADC1_1X_gc     = (0x15), /* ADC Differential Inputs Postive pin 5 Negative pin 1 1x Gain */
    ADC_MUX_ADC6_ADC1_1X_gc     = (0x16), /* ADC Differential Inputs Postive pin 6 Negative pin 1 1x Gain */
    ADC_MUX_ADC7_ADC1_1X_gc     = (0x17), /* ADC Differential Inputs Postive pin 7 Negative pin 1 1x Gain */
    ADC_MUX_ADC0_ADC2_1X_gc     = (0x18), /* ADC Differential Inputs Postive pin 0 Negative pin 2 1x Gain */
    ADC_MUX_ADC1_ADC2_1X_gc     = (0x19), /* ADC Differential Inputs Postive pin 1 Negative pin 2 1x Gain */
    ADC_MUX_ADC2_ADC2_1X_gc     = (0x1A), /* ADC Differential Inputs Postive pin 2 Negative pin 2 1x Gain */
    ADC_MUX_ADC3_ADC2_1X_gc     = (0x1B), /* ADC Differential Inputs Postive pin 3 Negative pin 2 1x Gain */
    ADC_MUX_ADC4_ADC2_1X_gc     = (0x1C), /* ADC Differential Inputs Postive pin 4 Negative pin 2 1x Gain */
    ADC_MUX_ADC5_ADC2_1X_gc     = (0x1D), /* ADC Differential Inputs Postive pin 5 Negative pin 2 1x Gain */
    ADC_MUX_ADC_VBG_gc          = (0x1E), /* Internal Reference (VBG) */
    ADC_MUX_ADC_GND_gc          = (0x1F), /* 0V (GND) */
    ADC_MUX_ADC8_gc             = (0x20), /* ADC Single Ended Input pin 8 */
    ADC_MUX_ADC9_gc             = (0x21), /* ADC Single Ended Input pin 9 */
    ADC_MUX_ADC10_gc            = (0x22), /* ADC Single Ended Input pin 10 */
    ADC_MUX_ADC11_gc            = (0x23), /* ADC Single Ended Input pin 11 */
    ADC_MUX_ADC12_gc            = (0x24), /* ADC Single Ended Input pin 12 */
    ADC_MUX_ADC13_gc            = (0x25), /* ADC Single Ended Input pin 13 */
    ADC_MUX_ADC14_gc            = (0x26), /* ADC Single Ended Input pin 14 */
    ADC_MUX_ADC15_gc            = (0x27), /* ADC Single Ended Input pin 15 */
    ADC_MUX_ADC8_ADC8_10X_gc    = (0x28), /* ADC Differential Inputs Postive pin 8 Negative pin 8 10x Gain */
    ADC_MUX_ADC9_ADC8_10X_gc    = (0x29), /* ADC Differential Inputs Postive pin 9 Negative pin 8 10x Gain */
    ADC_MUX_ADC8_ADC8_200x_gc   = (0x2A), /* ADC Differential Inputs Postive pin 8 Negative pin 8 200x Gain */
    ADC_MUX_ADC9_ADC8_200X_gc   = (0x2B), /* ADC Differential Inputs Postive pin 9 Negative pin 8 200x Gain */
    ADC_MUX_ADC10_ADC10_10X_gc  = (0x2C), /* ADC Differential Inputs Postive pin 10 Negative pin 10 10x Gain */
    ADC_MUX_ADC11_ADC10_10X_gc  = (0x2D), /* ADC Differential Inputs Postive pin 11 Negative pin 10 10x Gain */
    ADC_MUX_ADC10_ADC10_200X_gc = (0x2E), /* ADC Differential Inputs Postive pin 10 Negative pin 10 200x Gain */
    ADC_MUX_ADC11_ADC10_200X_gc = (0x2F), /* ADC Differential Inputs Postive pin 11 Negative pin 10 200x Gain */
    ADC_MUX_ADC8_ADC9_1X_gc     = (0x30), /* ADC Differential Inputs Postive pin 8 Negative pin 9 1x Gain */
    ADC_MUX_ADC9_ADC9_1X_gc     = (0x31), /* ADC Differential Inputs Postive pin 9 Negative pin 9 1x Gain */
    ADC_MUX_ADC10_ADC9_1X_gc    = (0x32), /* ADC Differential Inputs Postive pin 10 Negative pin 9 1x Gain */
    ADC_MUX_ADC11_ADC9_1X_gc    = (0x33), /* ADC Differential Inputs Postive pin 11 Negative pin 9 1x Gain */
    ADC_MUX_ADC12_ADC9_1X_gc    = (0x34), /* ADC Differential Inputs Postive pin 12 Negative pin 9 1x Gain */
    ADC_MUX_ADC13_ADC9_1X_gc    = (0x35), /* ADC Differential Inputs Postive pin 13 Negative pin 9 1x Gain */
    ADC_MUX_ADC14_ADC9_1X_gc    = (0x36), /* ADC Differential Inputs Postive pin 14 Negative pin 9 1x Gain */
    ADC_MUX_ADC15_ADC9_1X_gc    = (0x37), /* ADC Differential Inputs Postive pin 15 Negative pin 9 1x Gain */
    ADC_MUX_ADC8_ADC10_1X_gc    = (0x38), /* ADC Differential Inputs Postive pin 8 Negative pin 10 1x Gain */
    ADC_MUX_ADC9_ADC10_1X_gc    = (0x39), /* ADC Differential Inputs Postive pin 9 Negative pin 10 1x Gain */
    ADC_MUX_ADC10_ADC10_1X_gc   = (0x3A), /* ADC Differential Inputs Postive pin 10 Negative pin 10 1x Gain */
    ADC_MUX_ADC11_ADC10_1X_gc   = (0x3B), /* ADC Differential Inputs Postive pin 11 Negative pin 10 1x Gain */
    ADC_MUX_ADC12_ADC10_1X_gc   = (0x3C), /* ADC Differential Inputs Postive pin 12 Negative pin 10 1x Gain */
    ADC_MUX_ADC13_ADC10_1X_gc   = (0x3D), /* ADC Differential Inputs Postive pin 13 Negative pin 10 1x Gain */
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

/* The ADC Control and Status register B-ACME */
typedef enum ADC_ACME_enum
{
    ADC_ACME_CLEAR_gc = (0x00), /* The ADC Control and Status register B-ACME - CLEAR */
    ADC_ACME_SET_gc   = (0x40), /* The ADC Control and Status register B-ACME - SET */
} ADC_ACME_t;

/* Analog Channel and Gain Selection Bits */
typedef enum ADC_MUX5_enum
{
    ADC_MUX5_CLEAR_gc = (0x00), /* Analog Channel and Gain Selection Bits - CLEAR */
    ADC_MUX5_SET_gc   = (0x08), /* Analog Channel and Gain Selection Bits - SET */
} ADC_MUX5_t;

/* ADC Auto Trigger Source bits */
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

/* Digital Input Disable Register-ADC15D */
typedef enum ADC_ADC15D_enum
{
    ADC_ADC15D_CLEAR_gc = (0x00), /* Digital Input Disable Register-ADC15D - CLEAR */
    ADC_ADC15D_SET_gc   = (0x80), /* Digital Input Disable Register-ADC15D - SET */
} ADC_ADC15D_t;

/* Digital Input Disable Register-ADC14D */
typedef enum ADC_ADC14D_enum
{
    ADC_ADC14D_CLEAR_gc = (0x00), /* Digital Input Disable Register-ADC14D - CLEAR */
    ADC_ADC14D_SET_gc   = (0x40), /* Digital Input Disable Register-ADC14D - SET */
} ADC_ADC14D_t;

/* Digital Input Disable Register-ADC13D */
typedef enum ADC_ADC13D_enum
{
    ADC_ADC13D_CLEAR_gc = (0x00), /* Digital Input Disable Register-ADC13D - CLEAR */
    ADC_ADC13D_SET_gc   = (0x20), /* Digital Input Disable Register-ADC13D - SET */
} ADC_ADC13D_t;

/* Digital Input Disable Register-ADC12D */
typedef enum ADC_ADC12D_enum
{
    ADC_ADC12D_CLEAR_gc = (0x00), /* Digital Input Disable Register-ADC12D - CLEAR */
    ADC_ADC12D_SET_gc   = (0x10), /* Digital Input Disable Register-ADC12D - SET */
} ADC_ADC12D_t;

/* Digital Input Disable Register-ADC11D */
typedef enum ADC_ADC11D_enum
{
    ADC_ADC11D_CLEAR_gc = (0x00), /* Digital Input Disable Register-ADC11D - CLEAR */
    ADC_ADC11D_SET_gc   = (0x08), /* Digital Input Disable Register-ADC11D - SET */
} ADC_ADC11D_t;

/* Digital Input Disable Register-ADC10D */
typedef enum ADC_ADC10D_enum
{
    ADC_ADC10D_CLEAR_gc = (0x00), /* Digital Input Disable Register-ADC10D - CLEAR */
    ADC_ADC10D_SET_gc   = (0x04), /* Digital Input Disable Register-ADC10D - SET */
} ADC_ADC10D_t;

/* Digital Input Disable Register-ADC9D */
typedef enum ADC_ADC9D_enum
{
    ADC_ADC9D_CLEAR_gc = (0x00), /* Digital Input Disable Register-ADC9D - CLEAR */
    ADC_ADC9D_SET_gc   = (0x02), /* Digital Input Disable Register-ADC9D - SET */
} ADC_ADC9D_t;

/* Digital Input Disable Register-ADC8D */
typedef enum ADC_ADC8D_enum
{
    ADC_ADC8D_CLEAR_gc = (0x00), /* Digital Input Disable Register-ADC8D - CLEAR */
    ADC_ADC8D_SET_gc   = (0x01), /* Digital Input Disable Register-ADC8D - SET */
} ADC_ADC8D_t;

/* Digital Input Disable Register-ADC7D */
typedef enum ADC_ADC7D_enum
{
    ADC_ADC7D_CLEAR_gc = (0x00), /* Digital Input Disable Register-ADC7D - CLEAR */
    ADC_ADC7D_SET_gc   = (0x80), /* Digital Input Disable Register-ADC7D - SET */
} ADC_ADC7D_t;

/* Digital Input Disable Register-ADC6D */
typedef enum ADC_ADC6D_enum
{
    ADC_ADC6D_CLEAR_gc = (0x00), /* Digital Input Disable Register-ADC6D - CLEAR */
    ADC_ADC6D_SET_gc   = (0x40), /* Digital Input Disable Register-ADC6D - SET */
} ADC_ADC6D_t;

/* Digital Input Disable Register-ADC5D */
typedef enum ADC_ADC5D_enum
{
    ADC_ADC5D_CLEAR_gc = (0x00), /* Digital Input Disable Register-ADC5D - CLEAR */
    ADC_ADC5D_SET_gc   = (0x20), /* Digital Input Disable Register-ADC5D - SET */
} ADC_ADC5D_t;

/* Digital Input Disable Register-ADC4D */
typedef enum ADC_ADC4D_enum
{
    ADC_ADC4D_CLEAR_gc = (0x00), /* Digital Input Disable Register-ADC4D - CLEAR */
    ADC_ADC4D_SET_gc   = (0x10), /* Digital Input Disable Register-ADC4D - SET */
} ADC_ADC4D_t;

/* Digital Input Disable Register-ADC3D */
typedef enum ADC_ADC3D_enum
{
    ADC_ADC3D_CLEAR_gc = (0x00), /* Digital Input Disable Register-ADC3D - CLEAR */
    ADC_ADC3D_SET_gc   = (0x08), /* Digital Input Disable Register-ADC3D - SET */
} ADC_ADC3D_t;

/* Digital Input Disable Register-ADC2D */
typedef enum ADC_ADC2D_enum
{
    ADC_ADC2D_CLEAR_gc = (0x00), /* Digital Input Disable Register-ADC2D - CLEAR */
    ADC_ADC2D_SET_gc   = (0x04), /* Digital Input Disable Register-ADC2D - SET */
} ADC_ADC2D_t;

/* Digital Input Disable Register-ADC1D */
typedef enum ADC_ADC1D_enum
{
    ADC_ADC1D_CLEAR_gc = (0x00), /* Digital Input Disable Register-ADC1D - CLEAR */
    ADC_ADC1D_SET_gc   = (0x02), /* Digital Input Disable Register-ADC1D - SET */
} ADC_ADC1D_t;

/* Digital Input Disable Register-ADC0D */
typedef enum ADC_ADC0D_enum
{
    ADC_ADC0D_CLEAR_gc = (0x00), /* Digital Input Disable Register-ADC0D - CLEAR */
    ADC_ADC0D_SET_gc   = (0x01), /* Digital Input Disable Register-ADC0D - SET */
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
================================================================================
IO Module Instances. Mapped to memory.
================================================================================
*/

#define AC        (*(AC_t *) 0x0000)        /* Analog Comparator */
#define USART0    (*(USART0_t *) 0x0000)    /* USART */
#define USART1    (*(USART1_t *) 0x0000)    /* USART */
#define USART2    (*(USART2_t *) 0x0000)    /* USART */
#define USART3    (*(USART3_t *) 0x0000)    /* USART */
#define TWI       (*(TWI_t *) 0x0000)       /* Two Wire Serial Interface */
#define SPI       (*(SPI_t *) 0x0000)       /* Serial Peripheral Interface */
#define PORTA     (*(PORTA_t *) 0x0000)     /* I/O Port */
#define PORTB     (*(PORTB_t *) 0x0000)     /* I/O Port */
#define PORTC     (*(PORTC_t *) 0x0000)     /* I/O Port */
#define PORTD     (*(PORTD_t *) 0x0000)     /* I/O Port */
#define PORTE     (*(PORTE_t *) 0x0000)     /* I/O Port */
#define PORTF     (*(PORTF_t *) 0x0000)     /* I/O Port */
#define PORTG     (*(PORTG_t *) 0x0000)     /* I/O Port */
#define PORTH     (*(PORTH_t *) 0x0000)     /* I/O Port */
#define PORTJ     (*(PORTJ_t *) 0x0000)     /* I/O Port */
#define PORTK     (*(PORTK_t *) 0x0000)     /* I/O Port */
#define PORTL     (*(PORTL_t *) 0x0000)     /* I/O Port */
#define TC0       (*(TC0_t *) 0x0000)       /* Timer/Counter, 8-bit */
#define TC2       (*(TC2_t *) 0x0000)       /* Timer/Counter, 8-bit Async */
#define WDT       (*(WDT_t *) 0x0000)       /* Watchdog Timer */
#define EEPROM    (*(EEPROM_t *) 0x0000)    /* EEPROM */
#define TC5       (*(TC5_t *) 0x0000)       /* Timer/Counter, 16-bit */
#define TC4       (*(TC4_t *) 0x0000)       /* Timer/Counter, 16-bit */
#define TC3       (*(TC3_t *) 0x0000)       /* Timer/Counter, 16-bit */
#define TC1       (*(TC1_t *) 0x0000)       /* Timer/Counter, 16-bit */
#define JTAG      (*(JTAG_t *) 0x0000)      /* JTAG Interface */
#define EXINT     (*(EXINT_t *) 0x0000)     /* External Interrupts */
#define CPU       (*(CPU_t *) 0x0000)       /* CPU Registers */
#define ADC       (*(ADC_t *) 0x0000)       /* Analog-to-Digital Converter */
#define BOOT_LOAD (*(BOOT_LOAD_t *) 0x0000) /* Bootloader */
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


/* Brown-out Detector trigger level */
#define FUSE_BODLEVEL_DISABLED_gc (0x07) /* Brown-out detection disabled */
#define FUSE_BODLEVEL_1V8_gc      (0x06) /* Brown-out detection at VCC=1.8 V */
#define FUSE_BODLEVEL_2V7_gc      (0x05) /* Brown-out detection at VCC=2.7 V */
#define FUSE_BODLEVEL_4V3_gc      (0x04) /* Brown-out detection at VCC=4.3 V */


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
#define FUSE_BOOTSZ_512W_1FE00_gc  (0x03<<1) /* Boot Flash size=512 words start address=$1FE00 */
#define FUSE_BOOTSZ_1024W_1FC00_gc (0x02<<1) /* Boot Flash size=1024 words start address=$1FC00 */
#define FUSE_BOOTSZ_2048W_1F800_gc (0x01<<1) /* Boot Flash size=2048 words start address=$1F800 */
#define FUSE_BOOTSZ_4096W_1F000_gc (0x00<<1) /* Boot Flash size=4096 words start address=$1F000 */


/* Boot Reset vector Enabled */
#define FUSE_BOOTRST_CLEAR_gc (0x00) /* Boot Reset vector Enabled - CLEAR */
#define FUSE_BOOTRST_SET_gc   (0x01) /* Boot Reset vector Enabled - SET */


/* Divide clock by 8 internally */
#define FUSE_CKDIV8_CLEAR_gc (0x00) /* Divide clock by 8 internally - CLEAR */
#define FUSE_CKDIV8_SET_gc   (0x80) /* Divide clock by 8 internally - SET */


/* Clock output on PORTE7 */
#define FUSE_CKOUT_CLEAR_gc (0x00) /* Clock output on PORTE7 - CLEAR */
#define FUSE_CKOUT_SET_gc   (0x40) /* Clock output on PORTE7 - SET */


/* Select Clock Source */
#define FUSE_SUT_CKSEL_EXTCLK_6CK_0MS_gc                 (0x00) /* Ext. Clock; Start-up time: 6 CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTCLK_6CK_4MS1_gc                (0x10) /* Ext. Clock; Start-up time: 6 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTCLK_6CK_65MS_gc                (0x20) /* Ext. Clock; Start-up time: 6 CK + 65 ms */
#define FUSE_SUT_CKSEL_INTRCOSC_6CK_0MS_gc               (0x02) /* Int. RC Osc.; Start-up time: 6 CK + 0 ms */
#define FUSE_SUT_CKSEL_INTRCOSC_6CK_4MS1_gc              (0x12) /* Int. RC Osc.; Start-up time: 6 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_INTRCOSC_6CK_65MS_gc              (0x22) /* Int. RC Osc.; Start-up time: 6 CK + 65 ms */
#define FUSE_SUT_CKSEL_INTRCOSC_128KHZ_6CK_0MS_gc        (0x03) /* Int. 128kHz RC Osc.; Start-up time: 6 CK + 0 ms */
#define FUSE_SUT_CKSEL_INTRCOSC_128KHZ_6CK_4MS_gc        (0x13) /* Int. 128kHz RC Osc.; Start-up time: 6 CK + 4 ms */
#define FUSE_SUT_CKSEL_INTRCOSC_128KHZ_6CK_64MS_gc       (0x23) /* Int. 128kHz RC Osc.; Start-up time: 6 CK + 64 ms */
#define FUSE_SUT_CKSEL_EXTLOFXTAL_1KCK_0MS_gc            (0x04) /* Ext. Low-Freq. Crystal; Start-up time: 1K CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTLOFXTAL_1KCK_4MS1_gc           (0x14) /* Ext. Low-Freq. Crystal; Start-up time: 1K CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTLOFXTAL_1KCK_65MS_gc           (0x24) /* Ext. Low-Freq. Crystal; Start-up time: 1K CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTLOFXTAL_32KCK_0MS_gc           (0x05) /* Ext. Low-Freq. Crystal; Start-up time: 32K CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTLOFXTAL_32KCK_4MS1_gc          (0x15) /* Ext. Low-Freq. Crystal; Start-up time: 32K CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTLOFXTAL_32KCK_65MS_gc          (0x25) /* Ext. Low-Freq. Crystal; Start-up time: 32K CK + 65 ms */
#define FUSE_SUT_CKSEL_FSOSC_258CK_4MS1_CRES_FASTPWR_gc  (0x06) /* Full Swing Oscillator; Start-up time: 258 CK + 4.1 ms; Ceramic res.; fast rising power */
#define FUSE_SUT_CKSEL_FSOSC_258CK_65MS_CRES_SLOWPWR_gc  (0x16) /* Full Swing Oscillator; Start-up time: 258 CK + 65 ms; Ceramic res.; slowly rising power */
#define FUSE_SUT_CKSEL_FSOSC_1KCK_0MS_CRES_BODEN_gc      (0x26) /* Full Swing Oscillator; Start-up time: 1K CK + 0 ms; Ceramic res.; BOD enable */
#define FUSE_SUT_CKSEL_FSOSC_1KCK_4MS1_CRES_FASTPWR_gc   (0x36) /* Full Swing Oscillator; Start-up time: 1K CK + 4.1 ms; Ceramic res.; fast rising power */
#define FUSE_SUT_CKSEL_FSOSC_1KCK_65MS_CRES_SLOWPWR_gc   (0x07) /* Full Swing Oscillator; Start-up time: 1K CK + 65 ms; Ceramic res.; slowly rising power */
#define FUSE_SUT_CKSEL_FSOSC_16KCK_0MS_XOSC_BODEN_gc     (0x17) /* Full Swing Oscillator; Start-up time: 16K CK + 0 ms; Crystal Osc.; BOD enabled */
#define FUSE_SUT_CKSEL_FSOSC_16KCK_4MS1_XOSC_FASTPWR_gc  (0x27) /* Full Swing Oscillator; Start-up time: 16K CK + 4.1 ms; Crystal Osc.; fast rising power */
#define FUSE_SUT_CKSEL_FSOSC_16KCK_65MS_XOSC_SLOWPWR_gc  (0x37) /* Full Swing Oscillator; Start-up time: 16K CK + 65 ms; Crystal Osc.; slowly rising power */
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
USART - USART
--------------------------------------------------------------------------------
*/


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


/*
--------------------------------------------------------------------------------
USART - USART
--------------------------------------------------------------------------------
*/


/* USART Receive Complete */
#define USART0_RXC0_CLEAR_gc (0x00) /* USART Receive Complete - CLEAR */
#define USART0_RXC0_SET_gc   (0x80) /* USART Receive Complete - SET */


/* USART Transmitt Complete */
#define USART0_TXC0_CLEAR_gc (0x00) /* USART Transmitt Complete - CLEAR */
#define USART0_TXC0_SET_gc   (0x40) /* USART Transmitt Complete - SET */


/* USART Data Register Empty */
#define USART0_UDRE0_CLEAR_gc (0x00) /* USART Data Register Empty - CLEAR */
#define USART0_UDRE0_SET_gc   (0x20) /* USART Data Register Empty - SET */


/* Framing Error */
#define USART0_FE0_CLEAR_gc (0x00) /* Framing Error - CLEAR */
#define USART0_FE0_SET_gc   (0x10) /* Framing Error - SET */


/* Data overRun */
#define USART0_DOR0_CLEAR_gc (0x00) /* Data overRun - CLEAR */
#define USART0_DOR0_SET_gc   (0x08) /* Data overRun - SET */


/* Parity Error */
#define USART0_UPE0_CLEAR_gc (0x00) /* Parity Error - CLEAR */
#define USART0_UPE0_SET_gc   (0x04) /* Parity Error - SET */


/* Double the USART transmission speed */
#define USART0_U2X0_CLEAR_gc (0x00) /* Double the USART transmission speed - CLEAR */
#define USART0_U2X0_SET_gc   (0x02) /* Double the USART transmission speed - SET */


/* Multi-processor Communication Mode */
#define USART0_MPCM0_CLEAR_gc (0x00) /* Multi-processor Communication Mode - CLEAR */
#define USART0_MPCM0_SET_gc   (0x01) /* Multi-processor Communication Mode - SET */


/* RX Complete Interrupt Enable */
#define USART0_RXCIE0_CLEAR_gc (0x00) /* RX Complete Interrupt Enable - CLEAR */
#define USART0_RXCIE0_SET_gc   (0x80) /* RX Complete Interrupt Enable - SET */


/* TX Complete Interrupt Enable */
#define USART0_TXCIE0_CLEAR_gc (0x00) /* TX Complete Interrupt Enable - CLEAR */
#define USART0_TXCIE0_SET_gc   (0x40) /* TX Complete Interrupt Enable - SET */


/* USART Data register Empty Interrupt Enable */
#define USART0_UDRIE0_CLEAR_gc (0x00) /* USART Data register Empty Interrupt Enable - CLEAR */
#define USART0_UDRIE0_SET_gc   (0x20) /* USART Data register Empty Interrupt Enable - SET */


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
#define USART0_UMSEL0_VAL_0x03_gc (0x03<<6) /* Master SPI */


/* Parity Mode Bits */
#define USART0_UPM0_VAL_0x00_gc (0x00<<4) /* Disabled */
#define USART0_UPM0_VAL_0x01_gc (0x01<<4) /* Reserved */
#define USART0_UPM0_VAL_0x02_gc (0x02<<4) /* Enabled, Even Parity */
#define USART0_UPM0_VAL_0x03_gc (0x03<<4) /* Enabled, Odd Parity */


/* Stop Bit Select */
#define USART0_USBS0_VAL_0x00_gc (0x00<<3) /* 1-bit */
#define USART0_USBS0_VAL_0x01_gc (0x01<<3) /* 2-bit */


/* Character Size */
#define USART0_UCSR0C_UCSZ0_gc(x) ((x<<1) & 0x06)

/* Clock Polarity */
#define USART0_UCPOL0_CLEAR_gc (0x00) /* Clock Polarity - CLEAR */
#define USART0_UCPOL0_SET_gc   (0x01) /* Clock Polarity - SET */


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


/* USART Receive Complete */
#define USART2_RXC2_CLEAR_gc (0x00) /* USART Receive Complete - CLEAR */
#define USART2_RXC2_SET_gc   (0x80) /* USART Receive Complete - SET */


/* USART Transmitt Complete */
#define USART2_TXC2_CLEAR_gc (0x00) /* USART Transmitt Complete - CLEAR */
#define USART2_TXC2_SET_gc   (0x40) /* USART Transmitt Complete - SET */


/* USART Data Register Empty */
#define USART2_UDRE2_CLEAR_gc (0x00) /* USART Data Register Empty - CLEAR */
#define USART2_UDRE2_SET_gc   (0x20) /* USART Data Register Empty - SET */


/* Framing Error */
#define USART2_FE2_CLEAR_gc (0x00) /* Framing Error - CLEAR */
#define USART2_FE2_SET_gc   (0x10) /* Framing Error - SET */


/* Data overRun */
#define USART2_DOR2_CLEAR_gc (0x00) /* Data overRun - CLEAR */
#define USART2_DOR2_SET_gc   (0x08) /* Data overRun - SET */


/* Parity Error */
#define USART2_UPE2_CLEAR_gc (0x00) /* Parity Error - CLEAR */
#define USART2_UPE2_SET_gc   (0x04) /* Parity Error - SET */


/* Double the USART transmission speed */
#define USART2_U2X2_CLEAR_gc (0x00) /* Double the USART transmission speed - CLEAR */
#define USART2_U2X2_SET_gc   (0x02) /* Double the USART transmission speed - SET */


/* Multi-processor Communication Mode */
#define USART2_MPCM2_CLEAR_gc (0x00) /* Multi-processor Communication Mode - CLEAR */
#define USART2_MPCM2_SET_gc   (0x01) /* Multi-processor Communication Mode - SET */


/* RX Complete Interrupt Enable */
#define USART2_RXCIE2_CLEAR_gc (0x00) /* RX Complete Interrupt Enable - CLEAR */
#define USART2_RXCIE2_SET_gc   (0x80) /* RX Complete Interrupt Enable - SET */


/* TX Complete Interrupt Enable */
#define USART2_TXCIE2_CLEAR_gc (0x00) /* TX Complete Interrupt Enable - CLEAR */
#define USART2_TXCIE2_SET_gc   (0x40) /* TX Complete Interrupt Enable - SET */


/* USART Data register Empty Interrupt Enable */
#define USART2_UDRIE2_CLEAR_gc (0x00) /* USART Data register Empty Interrupt Enable - CLEAR */
#define USART2_UDRIE2_SET_gc   (0x20) /* USART Data register Empty Interrupt Enable - SET */


/* Receiver Enable */
#define USART2_RXEN2_CLEAR_gc (0x00) /* Receiver Enable - CLEAR */
#define USART2_RXEN2_SET_gc   (0x10) /* Receiver Enable - SET */


/* Transmitter Enable */
#define USART2_TXEN2_CLEAR_gc (0x00) /* Transmitter Enable - CLEAR */
#define USART2_TXEN2_SET_gc   (0x08) /* Transmitter Enable - SET */


/* Character Size */
#define USART2_UCSZ22_CLEAR_gc (0x00) /* Character Size - CLEAR */
#define USART2_UCSZ22_SET_gc   (0x04) /* Character Size - SET */


/* Receive Data Bit 8 */
#define USART2_RXB82_CLEAR_gc (0x00) /* Receive Data Bit 8 - CLEAR */
#define USART2_RXB82_SET_gc   (0x02) /* Receive Data Bit 8 - SET */


/* Transmit Data Bit 8 */
#define USART2_TXB82_CLEAR_gc (0x00) /* Transmit Data Bit 8 - CLEAR */
#define USART2_TXB82_SET_gc   (0x01) /* Transmit Data Bit 8 - SET */


/* USART Mode Select */
#define USART2_UMSEL2_VAL_0x00_gc (0x00<<6) /* Asynchronous USART */
#define USART2_UMSEL2_VAL_0x01_gc (0x01<<6) /* Synchronous USART */
#define USART2_UMSEL2_VAL_0x03_gc (0x03<<6) /* Master SPI */


/* Parity Mode Bits */
#define USART2_UPM2_VAL_0x00_gc (0x00<<4) /* Disabled */
#define USART2_UPM2_VAL_0x01_gc (0x01<<4) /* Reserved */
#define USART2_UPM2_VAL_0x02_gc (0x02<<4) /* Enabled, Even Parity */
#define USART2_UPM2_VAL_0x03_gc (0x03<<4) /* Enabled, Odd Parity */


/* Stop Bit Select */
#define USART2_USBS2_VAL_0x00_gc (0x00<<3) /* 1-bit */
#define USART2_USBS2_VAL_0x01_gc (0x01<<3) /* 2-bit */


/* Character Size */
#define USART2_UCSR2C_UCSZ2_gc(x) ((x<<1) & 0x06)

/* Clock Polarity */
#define USART2_UCPOL2_CLEAR_gc (0x00) /* Clock Polarity - CLEAR */
#define USART2_UCPOL2_SET_gc   (0x01) /* Clock Polarity - SET */


/* USART Receive Complete */
#define USART3_RXC3_CLEAR_gc (0x00) /* USART Receive Complete - CLEAR */
#define USART3_RXC3_SET_gc   (0x80) /* USART Receive Complete - SET */


/* USART Transmitt Complete */
#define USART3_TXC3_CLEAR_gc (0x00) /* USART Transmitt Complete - CLEAR */
#define USART3_TXC3_SET_gc   (0x40) /* USART Transmitt Complete - SET */


/* USART Data Register Empty */
#define USART3_UDRE3_CLEAR_gc (0x00) /* USART Data Register Empty - CLEAR */
#define USART3_UDRE3_SET_gc   (0x20) /* USART Data Register Empty - SET */


/* Framing Error */
#define USART3_FE3_CLEAR_gc (0x00) /* Framing Error - CLEAR */
#define USART3_FE3_SET_gc   (0x10) /* Framing Error - SET */


/* Data overRun */
#define USART3_DOR3_CLEAR_gc (0x00) /* Data overRun - CLEAR */
#define USART3_DOR3_SET_gc   (0x08) /* Data overRun - SET */


/* Parity Error */
#define USART3_UPE3_CLEAR_gc (0x00) /* Parity Error - CLEAR */
#define USART3_UPE3_SET_gc   (0x04) /* Parity Error - SET */


/* Double the USART transmission speed */
#define USART3_U2X3_CLEAR_gc (0x00) /* Double the USART transmission speed - CLEAR */
#define USART3_U2X3_SET_gc   (0x02) /* Double the USART transmission speed - SET */


/* Multi-processor Communication Mode */
#define USART3_MPCM3_CLEAR_gc (0x00) /* Multi-processor Communication Mode - CLEAR */
#define USART3_MPCM3_SET_gc   (0x01) /* Multi-processor Communication Mode - SET */


/* RX Complete Interrupt Enable */
#define USART3_RXCIE3_CLEAR_gc (0x00) /* RX Complete Interrupt Enable - CLEAR */
#define USART3_RXCIE3_SET_gc   (0x80) /* RX Complete Interrupt Enable - SET */


/* TX Complete Interrupt Enable */
#define USART3_TXCIE3_CLEAR_gc (0x00) /* TX Complete Interrupt Enable - CLEAR */
#define USART3_TXCIE3_SET_gc   (0x40) /* TX Complete Interrupt Enable - SET */


/* USART Data register Empty Interrupt Enable */
#define USART3_UDRIE3_CLEAR_gc (0x00) /* USART Data register Empty Interrupt Enable - CLEAR */
#define USART3_UDRIE3_SET_gc   (0x20) /* USART Data register Empty Interrupt Enable - SET */


/* Receiver Enable */
#define USART3_RXEN3_CLEAR_gc (0x00) /* Receiver Enable - CLEAR */
#define USART3_RXEN3_SET_gc   (0x10) /* Receiver Enable - SET */


/* Transmitter Enable */
#define USART3_TXEN3_CLEAR_gc (0x00) /* Transmitter Enable - CLEAR */
#define USART3_TXEN3_SET_gc   (0x08) /* Transmitter Enable - SET */


/* Character Size */
#define USART3_UCSZ32_CLEAR_gc (0x00) /* Character Size - CLEAR */
#define USART3_UCSZ32_SET_gc   (0x04) /* Character Size - SET */


/* Receive Data Bit 8 */
#define USART3_RXB83_CLEAR_gc (0x00) /* Receive Data Bit 8 - CLEAR */
#define USART3_RXB83_SET_gc   (0x02) /* Receive Data Bit 8 - SET */


/* Transmit Data Bit 8 */
#define USART3_TXB83_CLEAR_gc (0x00) /* Transmit Data Bit 8 - CLEAR */
#define USART3_TXB83_SET_gc   (0x01) /* Transmit Data Bit 8 - SET */


/* USART Mode Select */
#define USART3_UMSEL3_VAL_0x00_gc (0x00<<6) /* Asynchronous USART */
#define USART3_UMSEL3_VAL_0x01_gc (0x01<<6) /* Synchronous USART */
#define USART3_UMSEL3_VAL_0x03_gc (0x03<<6) /* Master SPI */


/* Parity Mode Bits */
#define USART3_UPM3_VAL_0x00_gc (0x00<<4) /* Disabled */
#define USART3_UPM3_VAL_0x01_gc (0x01<<4) /* Reserved */
#define USART3_UPM3_VAL_0x02_gc (0x02<<4) /* Enabled, Even Parity */
#define USART3_UPM3_VAL_0x03_gc (0x03<<4) /* Enabled, Odd Parity */


/* Stop Bit Select */
#define USART3_USBS3_VAL_0x00_gc (0x00<<3) /* 1-bit */
#define USART3_USBS3_VAL_0x01_gc (0x01<<3) /* 2-bit */


/* Character Size */
#define USART3_UCSR3C_UCSZ3_gc(x) ((x<<1) & 0x06)

/* Clock Polarity */
#define USART3_UCPOL3_CLEAR_gc (0x00) /* Clock Polarity - CLEAR */
#define USART3_UCPOL3_SET_gc   (0x01) /* Clock Polarity - SET */


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


/* Compare Output Mode 1A, bits */
#define TC5_TCCR5A_COM5A_gc(x) ((x<<6) & 0xC0)

/* Compare Output Mode 5B, bits */
#define TC5_TCCR5A_COM5B_gc(x) ((x<<4) & 0x30)

/* Compare Output Mode 5C, bits */
#define TC5_TCCR5A_COM5C_gc(x) ((x<<2) & 0x0C)

/* Waveform Generation Mode */
#define TC5_TCCR5A_WGM5_gc(x) (x & 0x03)

/* Input Capture 5 Noise Canceler */
#define TC5_ICNC5_CLEAR_gc (0x00) /* Input Capture 5 Noise Canceler - CLEAR */
#define TC5_ICNC5_SET_gc   (0x80) /* Input Capture 5 Noise Canceler - SET */


/* Input Capture 5 Edge Select */
#define TC5_ICES5_CLEAR_gc (0x00) /* Input Capture 5 Edge Select - CLEAR */
#define TC5_ICES5_SET_gc   (0x40) /* Input Capture 5 Edge Select - SET */


/* Waveform Generation Mode */
#define TC5_TCCR5B_WGM5_gc(x) ((x<<3) & 0x18)

/* Prescaler source of Timer/Counter 5 */
#define TC5_CS5_VAL_0x00_gc (0x00) /* No Clock Source (Stopped) */
#define TC5_CS5_VAL_0x01_gc (0x01) /* Running, No Prescaling */
#define TC5_CS5_VAL_0x02_gc (0x02) /* Running, CLK/8 */
#define TC5_CS5_VAL_0x03_gc (0x03) /* Running, CLK/64 */
#define TC5_CS5_VAL_0x04_gc (0x04) /* Running, CLK/256 */
#define TC5_CS5_VAL_0x05_gc (0x05) /* Running, CLK/1024 */
#define TC5_CS5_VAL_0x06_gc (0x06) /* Running, ExtClk Tx Falling Edge */
#define TC5_CS5_VAL_0x07_gc (0x07) /* Running, ExtClk Tx Rising Edge */


/* Force Output Compare 5A */
#define TC5_FOC5A_CLEAR_gc (0x00) /* Force Output Compare 5A - CLEAR */
#define TC5_FOC5A_SET_gc   (0x80) /* Force Output Compare 5A - SET */


/* Force Output Compare 5B */
#define TC5_FOC5B_CLEAR_gc (0x00) /* Force Output Compare 5B - CLEAR */
#define TC5_FOC5B_SET_gc   (0x40) /* Force Output Compare 5B - SET */


/* Force Output Compare 5C */
#define TC5_FOC5C_CLEAR_gc (0x00) /* Force Output Compare 5C - CLEAR */
#define TC5_FOC5C_SET_gc   (0x20) /* Force Output Compare 5C - SET */


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


/* Input Capture Flag 5 */
#define TC5_ICF5_CLEAR_gc (0x00) /* Input Capture Flag 5 - CLEAR */
#define TC5_ICF5_SET_gc   (0x20) /* Input Capture Flag 5 - SET */


/* Output Compare Flag 5C */
#define TC5_OCF5C_CLEAR_gc (0x00) /* Output Compare Flag 5C - CLEAR */
#define TC5_OCF5C_SET_gc   (0x08) /* Output Compare Flag 5C - SET */


/* Output Compare Flag 5B */
#define TC5_OCF5B_CLEAR_gc (0x00) /* Output Compare Flag 5B - CLEAR */
#define TC5_OCF5B_SET_gc   (0x04) /* Output Compare Flag 5B - SET */


/* Output Compare Flag 5A */
#define TC5_OCF5A_CLEAR_gc (0x00) /* Output Compare Flag 5A - CLEAR */
#define TC5_OCF5A_SET_gc   (0x02) /* Output Compare Flag 5A - SET */


/* Timer/Counter5 Overflow Flag */
#define TC5_TOV5_CLEAR_gc (0x00) /* Timer/Counter5 Overflow Flag - CLEAR */
#define TC5_TOV5_SET_gc   (0x01) /* Timer/Counter5 Overflow Flag - SET */


/* Compare Output Mode 1A, bits */
#define TC4_TCCR4A_COM4A_gc(x) ((x<<6) & 0xC0)

/* Compare Output Mode 4B, bits */
#define TC4_TCCR4A_COM4B_gc(x) ((x<<4) & 0x30)

/* Compare Output Mode 4C, bits */
#define TC4_TCCR4A_COM4C_gc(x) ((x<<2) & 0x0C)

/* Waveform Generation Mode */
#define TC4_TCCR4A_WGM4_gc(x) (x & 0x03)

/* Input Capture 4 Noise Canceler */
#define TC4_ICNC4_CLEAR_gc (0x00) /* Input Capture 4 Noise Canceler - CLEAR */
#define TC4_ICNC4_SET_gc   (0x80) /* Input Capture 4 Noise Canceler - SET */


/* Input Capture 4 Edge Select */
#define TC4_ICES4_CLEAR_gc (0x00) /* Input Capture 4 Edge Select - CLEAR */
#define TC4_ICES4_SET_gc   (0x40) /* Input Capture 4 Edge Select - SET */


/* Waveform Generation Mode */
#define TC4_TCCR4B_WGM4_gc(x) ((x<<3) & 0x18)

/* Prescaler source of Timer/Counter 4 */
#define TC4_CS4_VAL_0x00_gc (0x00) /* No Clock Source (Stopped) */
#define TC4_CS4_VAL_0x01_gc (0x01) /* Running, No Prescaling */
#define TC4_CS4_VAL_0x02_gc (0x02) /* Running, CLK/8 */
#define TC4_CS4_VAL_0x03_gc (0x03) /* Running, CLK/64 */
#define TC4_CS4_VAL_0x04_gc (0x04) /* Running, CLK/256 */
#define TC4_CS4_VAL_0x05_gc (0x05) /* Running, CLK/1024 */
#define TC4_CS4_VAL_0x06_gc (0x06) /* Running, ExtClk Tx Falling Edge */
#define TC4_CS4_VAL_0x07_gc (0x07) /* Running, ExtClk Tx Rising Edge */


/* Force Output Compare 4A */
#define TC4_FOC4A_CLEAR_gc (0x00) /* Force Output Compare 4A - CLEAR */
#define TC4_FOC4A_SET_gc   (0x80) /* Force Output Compare 4A - SET */


/* Force Output Compare 4B */
#define TC4_FOC4B_CLEAR_gc (0x00) /* Force Output Compare 4B - CLEAR */
#define TC4_FOC4B_SET_gc   (0x40) /* Force Output Compare 4B - SET */


/* Force Output Compare 4C */
#define TC4_FOC4C_CLEAR_gc (0x00) /* Force Output Compare 4C - CLEAR */
#define TC4_FOC4C_SET_gc   (0x20) /* Force Output Compare 4C - SET */


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


/* Input Capture Flag 4 */
#define TC4_ICF4_CLEAR_gc (0x00) /* Input Capture Flag 4 - CLEAR */
#define TC4_ICF4_SET_gc   (0x20) /* Input Capture Flag 4 - SET */


/* Output Compare Flag 4C */
#define TC4_OCF4C_CLEAR_gc (0x00) /* Output Compare Flag 4C - CLEAR */
#define TC4_OCF4C_SET_gc   (0x08) /* Output Compare Flag 4C - SET */


/* Output Compare Flag 4B */
#define TC4_OCF4B_CLEAR_gc (0x00) /* Output Compare Flag 4B - CLEAR */
#define TC4_OCF4B_SET_gc   (0x04) /* Output Compare Flag 4B - SET */


/* Output Compare Flag 4A */
#define TC4_OCF4A_CLEAR_gc (0x00) /* Output Compare Flag 4A - CLEAR */
#define TC4_OCF4A_SET_gc   (0x02) /* Output Compare Flag 4A - SET */


/* Timer/Counter4 Overflow Flag */
#define TC4_TOV4_CLEAR_gc (0x00) /* Timer/Counter4 Overflow Flag - CLEAR */
#define TC4_TOV4_SET_gc   (0x01) /* Timer/Counter4 Overflow Flag - SET */


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
#define CPU_SRL_VAL_0x01_gc (0x01<<4) /* LS = 0x2200 - 0x1FFF, US = 0x2000 - 0xFFFF */
#define CPU_SRL_VAL_0x02_gc (0x02<<4) /* LS = 0x2200 - 0x3FFF, US = 0x4000 - 0xFFFF */
#define CPU_SRL_VAL_0x03_gc (0x03<<4) /* LS = 0x2200 - 0x5FFF, US = 0x6000 - 0xFFFF */
#define CPU_SRL_VAL_0x04_gc (0x04<<4) /* LS = 0x2200 - 0x7FFF, US = 0x8000 - 0xFFFF */
#define CPU_SRL_VAL_0x05_gc (0x05<<4) /* LS = 0x2200 - 0x9FFF, US = 0xA000 - 0xFFFF */
#define CPU_SRL_VAL_0x06_gc (0x06<<4) /* LS = 0x2200 - 0xBFFF, US = 0xC000 - 0xFFFF */
#define CPU_SRL_VAL_0x07_gc (0x07<<4) /* LS = 0x2200 - 0xDFFF, US = 0xE000 - 0xFFFF */


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
#define CPU_XMCRB_XMM_gc(x) (x & 0x07)

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


/* Power Reduction Timer/Counter5 */
#define CPU_PRTIM5_CLEAR_gc (0x00) /* Power Reduction Timer/Counter5 - CLEAR */
#define CPU_PRTIM5_SET_gc   (0x20) /* Power Reduction Timer/Counter5 - SET */


/* Power Reduction Timer/Counter4 */
#define CPU_PRTIM4_CLEAR_gc (0x00) /* Power Reduction Timer/Counter4 - CLEAR */
#define CPU_PRTIM4_SET_gc   (0x10) /* Power Reduction Timer/Counter4 - SET */


/* Power Reduction Timer/Counter3 */
#define CPU_PRTIM3_CLEAR_gc (0x00) /* Power Reduction Timer/Counter3 - CLEAR */
#define CPU_PRTIM3_SET_gc   (0x08) /* Power Reduction Timer/Counter3 - SET */


/* Power Reduction USART3 */
#define CPU_PRUSART3_CLEAR_gc (0x00) /* Power Reduction USART3 - CLEAR */
#define CPU_PRUSART3_SET_gc   (0x04) /* Power Reduction USART3 - SET */


/* Power Reduction USART2 */
#define CPU_PRUSART2_CLEAR_gc (0x00) /* Power Reduction USART2 - CLEAR */
#define CPU_PRUSART2_SET_gc   (0x02) /* Power Reduction USART2 - SET */


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


/* Power Reduction USART0 */
#define CPU_PRUSART0_CLEAR_gc (0x00) /* Power Reduction USART0 - CLEAR */
#define CPU_PRUSART0_SET_gc   (0x02) /* Power Reduction USART0 - SET */


/* Power Reduction ADC */
#define CPU_PRADC_CLEAR_gc (0x00) /* Power Reduction ADC - CLEAR */
#define CPU_PRADC_SET_gc   (0x01) /* Power Reduction ADC - SET */


/*
--------------------------------------------------------------------------------
ADC - Analog-to-Digital Converter
--------------------------------------------------------------------------------
*/


/* Reference Selection Bits */
#define ADC_REFS_VAL_0x00_gc (0x00<<6) /* AREF, Internal Vref turned off */
#define ADC_REFS_VAL_0x01_gc (0x01<<6) /* AVCC with external capacitor at AREF pin */
#define ADC_REFS_VAL_0x02_gc (0x02<<6) /* Internal 1.1V Voltage Reference with external capacitor at AREF pin */
#define ADC_REFS_VAL_0x03_gc (0x03<<6) /* Internal 2.56V Voltage Reference with external capacitor at AREF pin */


/* Left Adjust Result */
#define ADC_ADLAR_CLEAR_gc (0x00) /* Left Adjust Result - CLEAR */
#define ADC_ADLAR_SET_gc   (0x20) /* Left Adjust Result - SET */


/* Analog Channel and Gain Selection Bits */
#define ADC_MUX_ADC0_gc             (0x00) /* ADC Single Ended Input pin 0 */
#define ADC_MUX_ADC1_gc             (0x01) /* ADC Single Ended Input pin 1 */
#define ADC_MUX_ADC2_gc             (0x02) /* ADC Single Ended Input pin 2 */
#define ADC_MUX_ADC3_gc             (0x03) /* ADC Single Ended Input pin 3 */
#define ADC_MUX_ADC4_gc             (0x04) /* ADC Single Ended Input pin 4 */
#define ADC_MUX_ADC5_gc             (0x05) /* ADC Single Ended Input pin 5 */
#define ADC_MUX_ADC6_gc             (0x06) /* ADC Single Ended Input pin 6 */
#define ADC_MUX_ADC7_gc             (0x07) /* ADC Single Ended Input pin 7 */
#define ADC_MUX_ADC0_ADC0_10X_gc    (0x08) /* ADC Differential Inputs Postive pin 0 Negative pin 0 10x Gain */
#define ADC_MUX_ADC1_ADC0_10X_gc    (0x09) /* ADC Differential Inputs Postive pin 1 Negative pin 0 10x Gain */
#define ADC_MUX_ADC0_ADC0_200x_gc   (0x0A) /* ADC Differential Inputs Postive pin 0 Negative pin 0 200x Gain */
#define ADC_MUX_ADC1_ADC0_200X_gc   (0x0B) /* ADC Differential Inputs Postive pin 1 Negative pin 0 200x Gain */
#define ADC_MUX_ADC2_ADC2_10X_gc    (0x0C) /* ADC Differential Inputs Postive pin 2 Negative pin 2 10x Gain */
#define ADC_MUX_ADC3_ADC2_10X_gc    (0x0D) /* ADC Differential Inputs Postive pin 3 Negative pin 2 10x Gain */
#define ADC_MUX_ADC2_ADC2_200X_gc   (0x0E) /* ADC Differential Inputs Postive pin 2 Negative pin 2 200x Gain */
#define ADC_MUX_ADC3_ADC2_200X_gc   (0x0F) /* ADC Differential Inputs Postive pin 3 Negative pin 2 200x Gain */
#define ADC_MUX_ADC0_ADC1_1X_gc     (0x10) /* ADC Differential Inputs Postive pin 0 Negative pin 1 1x Gain */
#define ADC_MUX_ADC1_ADC1_1X_gc     (0x11) /* ADC Differential Inputs Postive pin 1 Negative pin 1 1x Gain */
#define ADC_MUX_ADC2_ADC1_1X_gc     (0x12) /* ADC Differential Inputs Postive pin 2 Negative pin 1 1x Gain */
#define ADC_MUX_ADC3_ADC1_1X_gc     (0x13) /* ADC Differential Inputs Postive pin 3 Negative pin 1 1x Gain */
#define ADC_MUX_ADC4_ADC1_1X_gc     (0x14) /* ADC Differential Inputs Postive pin 4 Negative pin 1 1x Gain */
#define ADC_MUX_ADC5_ADC1_1X_gc     (0x15) /* ADC Differential Inputs Postive pin 5 Negative pin 1 1x Gain */
#define ADC_MUX_ADC6_ADC1_1X_gc     (0x16) /* ADC Differential Inputs Postive pin 6 Negative pin 1 1x Gain */
#define ADC_MUX_ADC7_ADC1_1X_gc     (0x17) /* ADC Differential Inputs Postive pin 7 Negative pin 1 1x Gain */
#define ADC_MUX_ADC0_ADC2_1X_gc     (0x18) /* ADC Differential Inputs Postive pin 0 Negative pin 2 1x Gain */
#define ADC_MUX_ADC1_ADC2_1X_gc     (0x19) /* ADC Differential Inputs Postive pin 1 Negative pin 2 1x Gain */
#define ADC_MUX_ADC2_ADC2_1X_gc     (0x1A) /* ADC Differential Inputs Postive pin 2 Negative pin 2 1x Gain */
#define ADC_MUX_ADC3_ADC2_1X_gc     (0x1B) /* ADC Differential Inputs Postive pin 3 Negative pin 2 1x Gain */
#define ADC_MUX_ADC4_ADC2_1X_gc     (0x1C) /* ADC Differential Inputs Postive pin 4 Negative pin 2 1x Gain */
#define ADC_MUX_ADC5_ADC2_1X_gc     (0x1D) /* ADC Differential Inputs Postive pin 5 Negative pin 2 1x Gain */
#define ADC_MUX_ADC_VBG_gc          (0x1E) /* Internal Reference (VBG) */
#define ADC_MUX_ADC_GND_gc          (0x1F) /* 0V (GND) */
#define ADC_MUX_ADC8_gc             (0x20) /* ADC Single Ended Input pin 8 */
#define ADC_MUX_ADC9_gc             (0x21) /* ADC Single Ended Input pin 9 */
#define ADC_MUX_ADC10_gc            (0x22) /* ADC Single Ended Input pin 10 */
#define ADC_MUX_ADC11_gc            (0x23) /* ADC Single Ended Input pin 11 */
#define ADC_MUX_ADC12_gc            (0x24) /* ADC Single Ended Input pin 12 */
#define ADC_MUX_ADC13_gc            (0x25) /* ADC Single Ended Input pin 13 */
#define ADC_MUX_ADC14_gc            (0x26) /* ADC Single Ended Input pin 14 */
#define ADC_MUX_ADC15_gc            (0x27) /* ADC Single Ended Input pin 15 */
#define ADC_MUX_ADC8_ADC8_10X_gc    (0x28) /* ADC Differential Inputs Postive pin 8 Negative pin 8 10x Gain */
#define ADC_MUX_ADC9_ADC8_10X_gc    (0x29) /* ADC Differential Inputs Postive pin 9 Negative pin 8 10x Gain */
#define ADC_MUX_ADC8_ADC8_200x_gc   (0x2A) /* ADC Differential Inputs Postive pin 8 Negative pin 8 200x Gain */
#define ADC_MUX_ADC9_ADC8_200X_gc   (0x2B) /* ADC Differential Inputs Postive pin 9 Negative pin 8 200x Gain */
#define ADC_MUX_ADC10_ADC10_10X_gc  (0x2C) /* ADC Differential Inputs Postive pin 10 Negative pin 10 10x Gain */
#define ADC_MUX_ADC11_ADC10_10X_gc  (0x2D) /* ADC Differential Inputs Postive pin 11 Negative pin 10 10x Gain */
#define ADC_MUX_ADC10_ADC10_200X_gc (0x2E) /* ADC Differential Inputs Postive pin 10 Negative pin 10 200x Gain */
#define ADC_MUX_ADC11_ADC10_200X_gc (0x2F) /* ADC Differential Inputs Postive pin 11 Negative pin 10 200x Gain */
#define ADC_MUX_ADC8_ADC9_1X_gc     (0x30) /* ADC Differential Inputs Postive pin 8 Negative pin 9 1x Gain */
#define ADC_MUX_ADC9_ADC9_1X_gc     (0x31) /* ADC Differential Inputs Postive pin 9 Negative pin 9 1x Gain */
#define ADC_MUX_ADC10_ADC9_1X_gc    (0x32) /* ADC Differential Inputs Postive pin 10 Negative pin 9 1x Gain */
#define ADC_MUX_ADC11_ADC9_1X_gc    (0x33) /* ADC Differential Inputs Postive pin 11 Negative pin 9 1x Gain */
#define ADC_MUX_ADC12_ADC9_1X_gc    (0x34) /* ADC Differential Inputs Postive pin 12 Negative pin 9 1x Gain */
#define ADC_MUX_ADC13_ADC9_1X_gc    (0x35) /* ADC Differential Inputs Postive pin 13 Negative pin 9 1x Gain */
#define ADC_MUX_ADC14_ADC9_1X_gc    (0x36) /* ADC Differential Inputs Postive pin 14 Negative pin 9 1x Gain */
#define ADC_MUX_ADC15_ADC9_1X_gc    (0x37) /* ADC Differential Inputs Postive pin 15 Negative pin 9 1x Gain */
#define ADC_MUX_ADC8_ADC10_1X_gc    (0x38) /* ADC Differential Inputs Postive pin 8 Negative pin 10 1x Gain */
#define ADC_MUX_ADC9_ADC10_1X_gc    (0x39) /* ADC Differential Inputs Postive pin 9 Negative pin 10 1x Gain */
#define ADC_MUX_ADC10_ADC10_1X_gc   (0x3A) /* ADC Differential Inputs Postive pin 10 Negative pin 10 1x Gain */
#define ADC_MUX_ADC11_ADC10_1X_gc   (0x3B) /* ADC Differential Inputs Postive pin 11 Negative pin 10 1x Gain */
#define ADC_MUX_ADC12_ADC10_1X_gc   (0x3C) /* ADC Differential Inputs Postive pin 12 Negative pin 10 1x Gain */
#define ADC_MUX_ADC13_ADC10_1X_gc   (0x3D) /* ADC Differential Inputs Postive pin 13 Negative pin 10 1x Gain */


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


/* The ADC Control and Status register B-ACME */
#define ADC_ACME_CLEAR_gc (0x00) /* The ADC Control and Status register B-ACME - CLEAR */
#define ADC_ACME_SET_gc   (0x40) /* The ADC Control and Status register B-ACME - SET */


/* Analog Channel and Gain Selection Bits */
#define ADC_MUX5_CLEAR_gc (0x00) /* Analog Channel and Gain Selection Bits - CLEAR */
#define ADC_MUX5_SET_gc   (0x08) /* Analog Channel and Gain Selection Bits - SET */


/* ADC Auto Trigger Source bits */
#define ADC_ADTS_VAL_0x00_gc (0x00) /* Free Running mode */
#define ADC_ADTS_VAL_0x01_gc (0x01) /* Analog Comparator */
#define ADC_ADTS_VAL_0x02_gc (0x02) /* External Interrupt Request 0 */
#define ADC_ADTS_VAL_0x03_gc (0x03) /* Timer/Counter0 Compare Match A */
#define ADC_ADTS_VAL_0x04_gc (0x04) /* Timer/Counter0 Overflow */
#define ADC_ADTS_VAL_0x05_gc (0x05) /* Timer/Counter1 Compare Match B */
#define ADC_ADTS_VAL_0x06_gc (0x06) /* Timer/Counter1 Overflow */
#define ADC_ADTS_VAL_0x07_gc (0x07) /* Timer/Counter1 Capture Event */


/* Digital Input Disable Register-ADC15D */
#define ADC_ADC15D_CLEAR_gc (0x00) /* Digital Input Disable Register-ADC15D - CLEAR */
#define ADC_ADC15D_SET_gc   (0x80) /* Digital Input Disable Register-ADC15D - SET */


/* Digital Input Disable Register-ADC14D */
#define ADC_ADC14D_CLEAR_gc (0x00) /* Digital Input Disable Register-ADC14D - CLEAR */
#define ADC_ADC14D_SET_gc   (0x40) /* Digital Input Disable Register-ADC14D - SET */


/* Digital Input Disable Register-ADC13D */
#define ADC_ADC13D_CLEAR_gc (0x00) /* Digital Input Disable Register-ADC13D - CLEAR */
#define ADC_ADC13D_SET_gc   (0x20) /* Digital Input Disable Register-ADC13D - SET */


/* Digital Input Disable Register-ADC12D */
#define ADC_ADC12D_CLEAR_gc (0x00) /* Digital Input Disable Register-ADC12D - CLEAR */
#define ADC_ADC12D_SET_gc   (0x10) /* Digital Input Disable Register-ADC12D - SET */


/* Digital Input Disable Register-ADC11D */
#define ADC_ADC11D_CLEAR_gc (0x00) /* Digital Input Disable Register-ADC11D - CLEAR */
#define ADC_ADC11D_SET_gc   (0x08) /* Digital Input Disable Register-ADC11D - SET */


/* Digital Input Disable Register-ADC10D */
#define ADC_ADC10D_CLEAR_gc (0x00) /* Digital Input Disable Register-ADC10D - CLEAR */
#define ADC_ADC10D_SET_gc   (0x04) /* Digital Input Disable Register-ADC10D - SET */


/* Digital Input Disable Register-ADC9D */
#define ADC_ADC9D_CLEAR_gc (0x00) /* Digital Input Disable Register-ADC9D - CLEAR */
#define ADC_ADC9D_SET_gc   (0x02) /* Digital Input Disable Register-ADC9D - SET */


/* Digital Input Disable Register-ADC8D */
#define ADC_ADC8D_CLEAR_gc (0x00) /* Digital Input Disable Register-ADC8D - CLEAR */
#define ADC_ADC8D_SET_gc   (0x01) /* Digital Input Disable Register-ADC8D - SET */


/* Digital Input Disable Register-ADC7D */
#define ADC_ADC7D_CLEAR_gc (0x00) /* Digital Input Disable Register-ADC7D - CLEAR */
#define ADC_ADC7D_SET_gc   (0x80) /* Digital Input Disable Register-ADC7D - SET */


/* Digital Input Disable Register-ADC6D */
#define ADC_ADC6D_CLEAR_gc (0x00) /* Digital Input Disable Register-ADC6D - CLEAR */
#define ADC_ADC6D_SET_gc   (0x40) /* Digital Input Disable Register-ADC6D - SET */


/* Digital Input Disable Register-ADC5D */
#define ADC_ADC5D_CLEAR_gc (0x00) /* Digital Input Disable Register-ADC5D - CLEAR */
#define ADC_ADC5D_SET_gc   (0x20) /* Digital Input Disable Register-ADC5D - SET */


/* Digital Input Disable Register-ADC4D */
#define ADC_ADC4D_CLEAR_gc (0x00) /* Digital Input Disable Register-ADC4D - CLEAR */
#define ADC_ADC4D_SET_gc   (0x10) /* Digital Input Disable Register-ADC4D - SET */


/* Digital Input Disable Register-ADC3D */
#define ADC_ADC3D_CLEAR_gc (0x00) /* Digital Input Disable Register-ADC3D - CLEAR */
#define ADC_ADC3D_SET_gc   (0x08) /* Digital Input Disable Register-ADC3D - SET */


/* Digital Input Disable Register-ADC2D */
#define ADC_ADC2D_CLEAR_gc (0x00) /* Digital Input Disable Register-ADC2D - CLEAR */
#define ADC_ADC2D_SET_gc   (0x04) /* Digital Input Disable Register-ADC2D - SET */


/* Digital Input Disable Register-ADC1D */
#define ADC_ADC1D_CLEAR_gc (0x00) /* Digital Input Disable Register-ADC1D - CLEAR */
#define ADC_ADC1D_SET_gc   (0x02) /* Digital Input Disable Register-ADC1D - SET */


/* Digital Input Disable Register-ADC0D */
#define ADC_ADC0D_CLEAR_gc (0x00) /* Digital Input Disable Register-ADC0D - CLEAR */
#define ADC_ADC0D_SET_gc   (0x01) /* Digital Input Disable Register-ADC0D - SET */


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
#define AC_BASE          _SFR_MEM8 (0x00)  /* AC Base Address */
#define AC_ACSR          _SFR_MEM8 (0x50)  /* Analog Comparator Control And Status Register */
#define AC_ADCSRB        _SFR_MEM8 (0x7B)  /* ADC Control and Status Register B */
#define AC_DIDR1         _SFR_MEM8 (0x7F)  /* Digital Input Disable Register 1 */

/* USART0 - USART (0x00) */
#define USART00_BASE     _SFR_MEM8 (0x00)  /* USART00 Base Address */
#define USART00_UCSR0A   _SFR_MEM8 (0xC0)  /* USART Control and Status Register A */
#define USART00_UCSR0B   _SFR_MEM8 (0xC1)  /* USART Control and Status Register B */
#define USART00_UCSR0C   _SFR_MEM8 (0xC2)  /* USART Control and Status Register C */
#define USART00_UBRR0    _SFR_MEM16(0xC4)  /* USART Baud Rate Register  Bytes */
#define USART00_UBRR0L   _SFR_MEM8 (0xC4)  /* USART Baud Rate Register  Bytes LOW BYTE */
#define USART00_UBRR0H   _SFR_MEM8 (0xC5)  /* USART Baud Rate Register  Bytes HIGH BYTE */
#define USART00_UDR0     _SFR_MEM8 (0xC6)  /* USART I/O Data Register */

/* USART1 - USART (0x00) */
#define USART11_BASE     _SFR_MEM8 (0x00)  /* USART11 Base Address */
#define USART11_UCSR1A   _SFR_MEM8 (0xC8)  /* USART Control and Status Register A */
#define USART11_UCSR1B   _SFR_MEM8 (0xC9)  /* USART Control and Status Register B */
#define USART11_UCSR1C   _SFR_MEM8 (0xCA)  /* USART Control and Status Register C */
#define USART11_UBRR1    _SFR_MEM16(0xCC)  /* USART Baud Rate Register  Bytes */
#define USART11_UBRR1L   _SFR_MEM8 (0xCC)  /* USART Baud Rate Register  Bytes LOW BYTE */
#define USART11_UBRR1H   _SFR_MEM8 (0xCD)  /* USART Baud Rate Register  Bytes HIGH BYTE */
#define USART11_UDR1     _SFR_MEM8 (0xCE)  /* USART I/O Data Register */

/* USART2 - USART (0x00) */
#define USART22_BASE     _SFR_MEM8 (0x00)  /* USART22 Base Address */
#define USART22_UCSR2A   _SFR_MEM8 (0xD0)  /* USART Control and Status Register A */
#define USART22_UCSR2B   _SFR_MEM8 (0xD1)  /* USART Control and Status Register B */
#define USART22_UCSR2C   _SFR_MEM8 (0xD2)  /* USART Control and Status Register C */
#define USART22_UBRR2    _SFR_MEM16(0xD4)  /* USART Baud Rate Register  Bytes */
#define USART22_UBRR2L   _SFR_MEM8 (0xD4)  /* USART Baud Rate Register  Bytes LOW BYTE */
#define USART22_UBRR2H   _SFR_MEM8 (0xD5)  /* USART Baud Rate Register  Bytes HIGH BYTE */
#define USART22_UDR2     _SFR_MEM8 (0xD6)  /* USART I/O Data Register */

/* USART3 - USART (0x00) */
#define USART33_BASE     _SFR_MEM8 (0x00)  /* USART33 Base Address */
#define USART33_UCSR3A   _SFR_MEM8 (0x130) /* USART Control and Status Register A */
#define USART33_UCSR3B   _SFR_MEM8 (0x131) /* USART Control and Status Register B */
#define USART33_UCSR3C   _SFR_MEM8 (0x132) /* USART Control and Status Register C */
#define USART33_UBRR3    _SFR_MEM16(0x134) /* USART Baud Rate Register Bytes */
#define USART33_UBRR3L   _SFR_MEM8 (0x134) /* USART Baud Rate Register Bytes LOW BYTE */
#define USART33_UBRR3H   _SFR_MEM8 (0x135) /* USART Baud Rate Register Bytes HIGH BYTE */
#define USART33_UDR3     _SFR_MEM8 (0x136) /* USART I/O Data Register */

/* TWI - Two Wire Serial Interface (0x00) */
#define TWI_BASE         _SFR_MEM8 (0x00)  /* TWI Base Address */
#define TWI_TWBR         _SFR_MEM8 (0xB8)  /* TWI Bit Rate register */
#define TWI_TWSR         _SFR_MEM8 (0xB9)  /* TWI Status Register */
#define TWI_TWAR         _SFR_MEM8 (0xBA)  /* TWI (Slave) Address register */
#define TWI_TWDR         _SFR_MEM8 (0xBB)  /* TWI Data register */
#define TWI_TWCR         _SFR_MEM8 (0xBC)  /* TWI Control Register */
#define TWI_TWAMR        _SFR_MEM8 (0xBD)  /* TWI (Slave) Address Mask Register */

/* SPI - Serial Peripheral Interface (0x00) */
#define SPI_BASE         _SFR_MEM8 (0x00)  /* SPI Base Address */
#define SPI_SPCR         _SFR_MEM8 (0x4C)  /* SPI Control Register */
#define SPI_SPSR         _SFR_MEM8 (0x4D)  /* SPI Status Register */
#define SPI_SPDR         _SFR_MEM8 (0x4E)  /* SPI Data Register */

/* PORTA - I/O Port (0x00) */
#define PORTAA_BASE      _SFR_MEM8 (0x00)  /* PORTAA Base Address */
#define PORTAA_PINA      _SFR_MEM8 (0x20)  /* Port A Input Pins */
#define PORTAA_DDRA      _SFR_MEM8 (0x21)  /* Port A Data Direction Register */
#define PORTAA_PORTA     _SFR_MEM8 (0x22)  /* Port A Data Register */

/* PORTB - I/O Port (0x00) */
#define PORTBB_BASE      _SFR_MEM8 (0x00)  /* PORTBB Base Address */
#define PORTBB_PINB      _SFR_MEM8 (0x23)  /* Port B Input Pins */
#define PORTBB_DDRB      _SFR_MEM8 (0x24)  /* Port B Data Direction Register */
#define PORTBB_PORTB     _SFR_MEM8 (0x25)  /* Port B Data Register */

/* PORTC - I/O Port (0x00) */
#define PORTCC_BASE      _SFR_MEM8 (0x00)  /* PORTCC Base Address */
#define PORTCC_PINC      _SFR_MEM8 (0x26)  /* Port C Input Pins */
#define PORTCC_DDRC      _SFR_MEM8 (0x27)  /* Port C Data Direction Register */
#define PORTCC_PORTC     _SFR_MEM8 (0x28)  /* Port C Data Register */

/* PORTD - I/O Port (0x00) */
#define PORTDD_BASE      _SFR_MEM8 (0x00)  /* PORTDD Base Address */
#define PORTDD_PIND      _SFR_MEM8 (0x29)  /* Port D Input Pins */
#define PORTDD_DDRD      _SFR_MEM8 (0x2A)  /* Port D Data Direction Register */
#define PORTDD_PORTD     _SFR_MEM8 (0x2B)  /* Port D Data Register */

/* PORTE - I/O Port (0x00) */
#define PORTEE_BASE      _SFR_MEM8 (0x00)  /* PORTEE Base Address */
#define PORTEE_PINE      _SFR_MEM8 (0x2C)  /* Input Pins, Port E */
#define PORTEE_DDRE      _SFR_MEM8 (0x2D)  /* Data Direction Register, Port E */
#define PORTEE_PORTE     _SFR_MEM8 (0x2E)  /* Data Register, Port E */

/* PORTF - I/O Port (0x00) */
#define PORTFF_BASE      _SFR_MEM8 (0x00)  /* PORTFF Base Address */
#define PORTFF_PINF      _SFR_MEM8 (0x2F)  /* Input Pins, Port F */
#define PORTFF_DDRF      _SFR_MEM8 (0x30)  /* Data Direction Register, Port F */
#define PORTFF_PORTF     _SFR_MEM8 (0x31)  /* Data Register, Port F */

/* PORTG - I/O Port (0x00) */
#define PORTGG_BASE      _SFR_MEM8 (0x00)  /* PORTGG Base Address */
#define PORTGG_PING      _SFR_MEM8 (0x32)  /* Input Pins, Port G */
#define PORTGG_DDRG      _SFR_MEM8 (0x33)  /* Data Direction Register, Port G */
#define PORTGG_PORTG     _SFR_MEM8 (0x34)  /* Data Register, Port G */

/* PORTH - I/O Port (0x00) */
#define PORTHH_BASE      _SFR_MEM8 (0x00)  /* PORTHH Base Address */
#define PORTHH_PINH      _SFR_MEM8 (0x100) /* PORT H Input Pins */
#define PORTHH_DDRH      _SFR_MEM8 (0x101) /* PORT H Data Direction Register */
#define PORTHH_PORTH     _SFR_MEM8 (0x102) /* PORT H Data Register */

/* PORTJ - I/O Port (0x00) */
#define PORTJJ_BASE      _SFR_MEM8 (0x00)  /* PORTJJ Base Address */
#define PORTJJ_PINJ      _SFR_MEM8 (0x103) /* PORT J Input Pins */
#define PORTJJ_DDRJ      _SFR_MEM8 (0x104) /* PORT J Data Direction Register */
#define PORTJJ_PORTJ     _SFR_MEM8 (0x105) /* PORT J Data Register */

/* PORTK - I/O Port (0x00) */
#define PORTKK_BASE      _SFR_MEM8 (0x00)  /* PORTKK Base Address */
#define PORTKK_PINK      _SFR_MEM8 (0x106) /* PORT K Input Pins */
#define PORTKK_DDRK      _SFR_MEM8 (0x107) /* PORT K Data Direction Register */
#define PORTKK_PORTK     _SFR_MEM8 (0x108) /* PORT K Data Register */

/* PORTL - I/O Port (0x00) */
#define PORTLL_BASE      _SFR_MEM8 (0x00)  /* PORTLL Base Address */
#define PORTLL_PINL      _SFR_MEM8 (0x109) /* PORT L Input Pins */
#define PORTLL_DDRL      _SFR_MEM8 (0x10A) /* PORT L Data Direction Register */
#define PORTLL_PORTL     _SFR_MEM8 (0x10B) /* PORT L Data Register */

/* TC0 - Timer/Counter, 8-bit (0x00) */
#define TC8_BASE         _SFR_MEM8 (0x00)  /* TC8 Base Address */
#define TC8_TIFR0        _SFR_MEM8 (0x35)  /* Timer/Counter0 Interrupt Flag register */
#define TC8_GTCCR        _SFR_MEM8 (0x43)  /* General Timer/Counter Control Register */
#define TC8_TCCR0A       _SFR_MEM8 (0x44)  /* Timer/Counter  Control Register A */
#define TC8_TCCR0B       _SFR_MEM8 (0x45)  /* Timer/Counter Control Register B */
#define TC8_TCNT0        _SFR_MEM8 (0x46)  /* Timer/Counter0 */
#define TC8_OCR0A        _SFR_MEM8 (0x47)  /* Timer/Counter0 Output Compare Register */
#define TC8_OCR0B        _SFR_MEM8 (0x48)  /* Timer/Counter0 Output Compare Register */
#define TC8_TIMSK0       _SFR_MEM8 (0x6E)  /* Timer/Counter0 Interrupt Mask Register */

/* TC2 - Timer/Counter, 8-bit Async (0x00) */
#define TC8_ASYNC_BASE   _SFR_MEM8 (0x00)  /* TC8_ASYNC Base Address */
#define TC8_ASYNC_TIFR2  _SFR_MEM8 (0x37)  /* Timer/Counter Interrupt Flag Register */
#define TC8_ASYNC_GTCCR  _SFR_MEM8 (0x43)  /* General Timer Counter Control register */
#define TC8_ASYNC_TIMSK2 _SFR_MEM8 (0x70)  /* Timer/Counter Interrupt Mask register */
#define TC8_ASYNC_TCCR2A _SFR_MEM8 (0xB0)  /* Timer/Counter2 Control Register A */
#define TC8_ASYNC_TCCR2B _SFR_MEM8 (0xB1)  /* Timer/Counter2 Control Register B */
#define TC8_ASYNC_TCNT2  _SFR_MEM8 (0xB2)  /* Timer/Counter2 */
#define TC8_ASYNC_OCR2A  _SFR_MEM8 (0xB3)  /* Timer/Counter2 Output Compare Register A */
#define TC8_ASYNC_OCR2B  _SFR_MEM8 (0xB4)  /* Timer/Counter2 Output Compare Register B */
#define TC8_ASYNC_ASSR   _SFR_MEM8 (0xB6)  /* Asynchronous Status Register */

/* WDT - Watchdog Timer (0x00) */
#define WDT_BASE         _SFR_MEM8 (0x00)  /* WDT Base Address */
#define WDT_WDTCSR       _SFR_MEM8 (0x60)  /* Watchdog Timer Control Register */

/* EEPROM - EEPROM (0x00) */
#define EEPROM_BASE      _SFR_MEM8 (0x00)  /* EEPROM Base Address */
#define EEPROM_EECR      _SFR_MEM8 (0x3F)  /* EEPROM Control Register */
#define EEPROM_EEDR      _SFR_MEM8 (0x40)  /* EEPROM Data Register */
#define EEPROM_EEAR      _SFR_MEM16(0x41)  /* EEPROM Address Register Low Bytes */
#define EEPROM_EEARL     _SFR_MEM8 (0x41)  /* EEPROM Address Register Low Bytes LOW BYTE */
#define EEPROM_EEARH     _SFR_MEM8 (0x42)  /* EEPROM Address Register Low Bytes HIGH BYTE */

/* TC5 - Timer/Counter, 16-bit (0x00) */
#define TC16_BASE        _SFR_MEM8 (0x00)  /* TC16 Base Address */
#define TC16_TIFR5       _SFR_MEM8 (0x3A)  /* Timer/Counter5 Interrupt Flag register */
#define TC16_TIMSK5      _SFR_MEM8 (0x73)  /* Timer/Counter5 Interrupt Mask Register */
#define TC16_TCCR5A      _SFR_MEM8 (0x120) /* Timer/Counter5 Control Register A */
#define TC16_TCCR5B      _SFR_MEM8 (0x121) /* Timer/Counter5 Control Register B */
#define TC16_TCCR5C      _SFR_MEM8 (0x122) /* Timer/Counter 5 Control Register C */
#define TC16_TCNT5       _SFR_MEM16(0x124) /* Timer/Counter5  Bytes */
#define TC16_TCNT5L      _SFR_MEM8 (0x124) /* Timer/Counter5  Bytes LOW BYTE */
#define TC16_TCNT5H      _SFR_MEM8 (0x125) /* Timer/Counter5  Bytes HIGH BYTE */
#define TC16_ICR5        _SFR_MEM16(0x126) /* Timer/Counter5 Input Capture Register  Bytes */
#define TC16_ICR5L       _SFR_MEM8 (0x126) /* Timer/Counter5 Input Capture Register  Bytes LOW BYTE */
#define TC16_ICR5H       _SFR_MEM8 (0x127) /* Timer/Counter5 Input Capture Register  Bytes HIGH BYTE */
#define TC16_OCR5A       _SFR_MEM16(0x128) /* Timer/Counter5 Output Compare Register A  Bytes */
#define TC16_OCR5AL      _SFR_MEM8 (0x128) /* Timer/Counter5 Output Compare Register A  Bytes LOW BYTE */
#define TC16_OCR5AH      _SFR_MEM8 (0x129) /* Timer/Counter5 Output Compare Register A  Bytes HIGH BYTE */
#define TC16_OCR5B       _SFR_MEM16(0x12A) /* Timer/Counter5 Output Compare Register B  Bytes */
#define TC16_OCR5BL      _SFR_MEM8 (0x12A) /* Timer/Counter5 Output Compare Register B  Bytes LOW BYTE */
#define TC16_OCR5BH      _SFR_MEM8 (0x12B) /* Timer/Counter5 Output Compare Register B  Bytes HIGH BYTE */
#define TC16_OCR5C       _SFR_MEM16(0x12C) /* Timer/Counter5 Output Compare Register B  Bytes */
#define TC16_OCR5CL      _SFR_MEM8 (0x12C) /* Timer/Counter5 Output Compare Register B  Bytes LOW BYTE */
#define TC16_OCR5CH      _SFR_MEM8 (0x12D) /* Timer/Counter5 Output Compare Register B  Bytes HIGH BYTE */

/* TC4 - Timer/Counter, 16-bit (0x00) */
/* TC16_BASE ALREADY DEFINED */
#define TC16_TIFR4       _SFR_MEM8 (0x39)  /* Timer/Counter4 Interrupt Flag register */
#define TC16_TIMSK4      _SFR_MEM8 (0x72)  /* Timer/Counter4 Interrupt Mask Register */
#define TC16_TCCR4A      _SFR_MEM8 (0xA0)  /* Timer/Counter4 Control Register A */
#define TC16_TCCR4B      _SFR_MEM8 (0xA1)  /* Timer/Counter4 Control Register B */
#define TC16_TCCR4C      _SFR_MEM8 (0xA2)  /* Timer/Counter 4 Control Register C */
#define TC16_TCNT4       _SFR_MEM16(0xA4)  /* Timer/Counter4  Bytes */
#define TC16_TCNT4L      _SFR_MEM8 (0xA4)  /* Timer/Counter4  Bytes LOW BYTE */
#define TC16_TCNT4H      _SFR_MEM8 (0xA5)  /* Timer/Counter4  Bytes HIGH BYTE */
#define TC16_ICR4        _SFR_MEM16(0xA6)  /* Timer/Counter4 Input Capture Register  Bytes */
#define TC16_ICR4L       _SFR_MEM8 (0xA6)  /* Timer/Counter4 Input Capture Register  Bytes LOW BYTE */
#define TC16_ICR4H       _SFR_MEM8 (0xA7)  /* Timer/Counter4 Input Capture Register  Bytes HIGH BYTE */
#define TC16_OCR4A       _SFR_MEM16(0xA8)  /* Timer/Counter4 Output Compare Register A  Bytes */
#define TC16_OCR4AL      _SFR_MEM8 (0xA8)  /* Timer/Counter4 Output Compare Register A  Bytes LOW BYTE */
#define TC16_OCR4AH      _SFR_MEM8 (0xA9)  /* Timer/Counter4 Output Compare Register A  Bytes HIGH BYTE */
#define TC16_OCR4B       _SFR_MEM16(0xAA)  /* Timer/Counter4 Output Compare Register B  Bytes */
#define TC16_OCR4BL      _SFR_MEM8 (0xAA)  /* Timer/Counter4 Output Compare Register B  Bytes LOW BYTE */
#define TC16_OCR4BH      _SFR_MEM8 (0xAB)  /* Timer/Counter4 Output Compare Register B  Bytes HIGH BYTE */
#define TC16_OCR4C       _SFR_MEM16(0xAC)  /* Timer/Counter4 Output Compare Register B  Bytes */
#define TC16_OCR4CL      _SFR_MEM8 (0xAC)  /* Timer/Counter4 Output Compare Register B  Bytes LOW BYTE */
#define TC16_OCR4CH      _SFR_MEM8 (0xAD)  /* Timer/Counter4 Output Compare Register B  Bytes HIGH BYTE */

/* TC3 - Timer/Counter, 16-bit (0x00) */
/* TC16_BASE ALREADY DEFINED */
#define TC16_TIFR3       _SFR_MEM8 (0x38)  /* Timer/Counter3 Interrupt Flag register */
#define TC16_TIMSK3      _SFR_MEM8 (0x71)  /* Timer/Counter3 Interrupt Mask Register */
#define TC16_TCCR3A      _SFR_MEM8 (0x90)  /* Timer/Counter3 Control Register A */
#define TC16_TCCR3B      _SFR_MEM8 (0x91)  /* Timer/Counter3 Control Register B */
#define TC16_TCCR3C      _SFR_MEM8 (0x92)  /* Timer/Counter 3 Control Register C */
#define TC16_TCNT3       _SFR_MEM16(0x94)  /* Timer/Counter3  Bytes */
#define TC16_TCNT3L      _SFR_MEM8 (0x94)  /* Timer/Counter3  Bytes LOW BYTE */
#define TC16_TCNT3H      _SFR_MEM8 (0x95)  /* Timer/Counter3  Bytes HIGH BYTE */
#define TC16_ICR3        _SFR_MEM16(0x96)  /* Timer/Counter3 Input Capture Register  Bytes */
#define TC16_ICR3L       _SFR_MEM8 (0x96)  /* Timer/Counter3 Input Capture Register  Bytes LOW BYTE */
#define TC16_ICR3H       _SFR_MEM8 (0x97)  /* Timer/Counter3 Input Capture Register  Bytes HIGH BYTE */
#define TC16_OCR3A       _SFR_MEM16(0x98)  /* Timer/Counter3 Output Compare Register A  Bytes */
#define TC16_OCR3AL      _SFR_MEM8 (0x98)  /* Timer/Counter3 Output Compare Register A  Bytes LOW BYTE */
#define TC16_OCR3AH      _SFR_MEM8 (0x99)  /* Timer/Counter3 Output Compare Register A  Bytes HIGH BYTE */
#define TC16_OCR3B       _SFR_MEM16(0x9A)  /* Timer/Counter3 Output Compare Register B  Bytes */
#define TC16_OCR3BL      _SFR_MEM8 (0x9A)  /* Timer/Counter3 Output Compare Register B  Bytes LOW BYTE */
#define TC16_OCR3BH      _SFR_MEM8 (0x9B)  /* Timer/Counter3 Output Compare Register B  Bytes HIGH BYTE */
#define TC16_OCR3C       _SFR_MEM16(0x9C)  /* Timer/Counter3 Output Compare Register B  Bytes */
#define TC16_OCR3CL      _SFR_MEM8 (0x9C)  /* Timer/Counter3 Output Compare Register B  Bytes LOW BYTE */
#define TC16_OCR3CH      _SFR_MEM8 (0x9D)  /* Timer/Counter3 Output Compare Register B  Bytes HIGH BYTE */

/* TC1 - Timer/Counter, 16-bit (0x00) */
/* TC16_BASE ALREADY DEFINED */
#define TC16_TIFR1       _SFR_MEM8 (0x36)  /* Timer/Counter1 Interrupt Flag register */
#define TC16_TIMSK1      _SFR_MEM8 (0x6F)  /* Timer/Counter1 Interrupt Mask Register */
#define TC16_TCCR1A      _SFR_MEM8 (0x80)  /* Timer/Counter1 Control Register A */
#define TC16_TCCR1B      _SFR_MEM8 (0x81)  /* Timer/Counter1 Control Register B */
#define TC16_TCCR1C      _SFR_MEM8 (0x82)  /* Timer/Counter 1 Control Register C */
#define TC16_TCNT1       _SFR_MEM16(0x84)  /* Timer/Counter1  Bytes */
#define TC16_TCNT1L      _SFR_MEM8 (0x84)  /* Timer/Counter1  Bytes LOW BYTE */
#define TC16_TCNT1H      _SFR_MEM8 (0x85)  /* Timer/Counter1  Bytes HIGH BYTE */
#define TC16_ICR1        _SFR_MEM16(0x86)  /* Timer/Counter1 Input Capture Register  Bytes */
#define TC16_ICR1L       _SFR_MEM8 (0x86)  /* Timer/Counter1 Input Capture Register  Bytes LOW BYTE */
#define TC16_ICR1H       _SFR_MEM8 (0x87)  /* Timer/Counter1 Input Capture Register  Bytes HIGH BYTE */
#define TC16_OCR1A       _SFR_MEM16(0x88)  /* Timer/Counter1 Output Compare Register A  Bytes */
#define TC16_OCR1AL      _SFR_MEM8 (0x88)  /* Timer/Counter1 Output Compare Register A  Bytes LOW BYTE */
#define TC16_OCR1AH      _SFR_MEM8 (0x89)  /* Timer/Counter1 Output Compare Register A  Bytes HIGH BYTE */
#define TC16_OCR1B       _SFR_MEM16(0x8A)  /* Timer/Counter1 Output Compare Register B  Bytes */
#define TC16_OCR1BL      _SFR_MEM8 (0x8A)  /* Timer/Counter1 Output Compare Register B  Bytes LOW BYTE */
#define TC16_OCR1BH      _SFR_MEM8 (0x8B)  /* Timer/Counter1 Output Compare Register B  Bytes HIGH BYTE */
#define TC16_OCR1C       _SFR_MEM16(0x8C)  /* Timer/Counter1 Output Compare Register C  Bytes */
#define TC16_OCR1CL      _SFR_MEM8 (0x8C)  /* Timer/Counter1 Output Compare Register C  Bytes LOW BYTE */
#define TC16_OCR1CH      _SFR_MEM8 (0x8D)  /* Timer/Counter1 Output Compare Register C  Bytes HIGH BYTE */

/* JTAG - JTAG Interface (0x00) */
#define JTAG_BASE        _SFR_MEM8 (0x00)  /* JTAG Base Address */
#define JTAG_OCDR        _SFR_MEM8 (0x51)  /* On-Chip Debug Related Register in I/O Memory */
#define JTAG_MCUSR       _SFR_MEM8 (0x54)  /* MCU Status Register */
#define JTAG_MCUCR       _SFR_MEM8 (0x55)  /* MCU Control Register */

/* EXINT - External Interrupts (0x00) */
#define EXINT_BASE       _SFR_MEM8 (0x00)  /* EXINT Base Address */
#define EXINT_PCIFR      _SFR_MEM8 (0x3B)  /* Pin Change Interrupt Flag Register */
#define EXINT_EIFR       _SFR_MEM8 (0x3C)  /* External Interrupt Flag Register */
#define EXINT_EIMSK      _SFR_MEM8 (0x3D)  /* External Interrupt Mask Register */
#define EXINT_PCICR      _SFR_MEM8 (0x68)  /* Pin Change Interrupt Control Register */
#define EXINT_EICRA      _SFR_MEM8 (0x69)  /* External Interrupt Control Register A */
#define EXINT_EICRB      _SFR_MEM8 (0x6A)  /* External Interrupt Control Register B */
#define EXINT_PCMSK0     _SFR_MEM8 (0x6B)  /* Pin Change Mask Register 0 */
#define EXINT_PCMSK1     _SFR_MEM8 (0x6C)  /* Pin Change Mask Register 1 */
#define EXINT_PCMSK2     _SFR_MEM8 (0x6D)  /* Pin Change Mask Register 2 */

/* CPU - CPU Registers (0x00) */
#define CPU_BASE         _SFR_MEM8 (0x00)  /* CPU Base Address */
#define CPU_GPIOR0       _SFR_MEM8 (0x3E)  /* General Purpose IO Register 0 */
#define CPU_GPIOR1       _SFR_MEM8 (0x4A)  /* General Purpose IO Register 1 */
#define CPU_GPIOR2       _SFR_MEM8 (0x4B)  /* General Purpose IO Register 2 */
#define CPU_SMCR         _SFR_MEM8 (0x53)  /* Sleep Mode Control Register */
#define CPU_MCUSR        _SFR_MEM8 (0x54)  /* MCU Status Register */
#define CPU_MCUCR        _SFR_MEM8 (0x55)  /* MCU Control Register */
#define CPU_RAMPZ        _SFR_MEM8 (0x5B)  /* RAM Page Z Select Register */
#define CPU_EIND         _SFR_MEM8 (0x5C)  /* Extended Indirect Register */
#define CPU_SP           _SFR_MEM16(0x5D)  /* Stack Pointer  */
#define CPU_SPL          _SFR_MEM8 (0x5D)  /* Stack Pointer  LOW BYTE */
#define CPU_SPH          _SFR_MEM8 (0x5E)  /* Stack Pointer  HIGH BYTE */
#define CPU_SREG         _SFR_MEM8 (0x5F)  /* Status Register */
#define CPU_CLKPR        _SFR_MEM8 (0x61)  
#define CPU_PRR0         _SFR_MEM8 (0x64)  /* Power Reduction Register0 */
#define CPU_PRR1         _SFR_MEM8 (0x65)  /* Power Reduction Register1 */
#define CPU_OSCCAL       _SFR_MEM8 (0x66)  /* Oscillator Calibration Value */
#define CPU_XMCRA        _SFR_MEM8 (0x74)  /* External Memory Control Register A */
#define CPU_XMCRB        _SFR_MEM8 (0x75)  /* External Memory Control Register B */

/* ADC - Analog-to-Digital Converter (0x00) */
#define ADC_BASE         _SFR_MEM16(0x00)  /* ADC Base Address */
#define ADC_ADC          _SFR_MEM16(0x78)  /* ADC Data Register  Bytes */
#define ADC_ADCL         _SFR_MEM8 (0x78)  /* ADC Data Register  Bytes LOW BYTE */
#define ADC_ADCH         _SFR_MEM8 (0x79)  /* ADC Data Register  Bytes HIGH BYTE */
#define ADC_ADCSRA       _SFR_MEM8 (0x7A)  /* The ADC Control and Status register A */
#define ADC_ADCSRB       _SFR_MEM8 (0x7B)  /* The ADC Control and Status register B */
#define ADC_ADMUX        _SFR_MEM8 (0x7C)  /* The ADC multiplexer Selection Register */
#define ADC_DIDR2        _SFR_MEM8 (0x7D)  /* Digital Input Disable Register */
#define ADC_DIDR0        _SFR_MEM8 (0x7E)  /* Digital Input Disable Register */

/* BOOT_LOAD - Bootloader (0x00) */
#define BOOT_LOAD_BASE   _SFR_MEM8 (0x00)  /* BOOT_LOAD Base Address */
#define BOOT_LOAD_SPMCSR _SFR_MEM8 (0x57)  /* Store Program Memory Control Register */

/* FUSE - Fuses (0x00) */
#define FUSE_BASE        _SFR_MEM8 (0x00)  /* FUSE Base Address */
#define FUSE_LOW         _SFR_MEM8 (0x00)  
#define FUSE_HIGH        _SFR_MEM8 (0x01)  
#define FUSE_EXTENDED    _SFR_MEM8 (0x02)  

/* LOCKBIT - Lockbits (0x00) */
#define LOCKBIT_BASE     _SFR_MEM8 (0x00)  /* LOCKBIT Base Address */
#define LOCKBIT_LOCKBIT  _SFR_MEM8 (0x00)  
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
#define None_PCINT1_vect_num       (10)                
#define None_PCINT1_vect           _VECTOR(10)         /* Pin Change Interrupt Request 1 */
#define None_PCINT2_vect_num       (11)                
#define None_PCINT2_vect           _VECTOR(11)         /* Pin Change Interrupt Request 2 */
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
#define None_USART0_RX_vect_num    (25)                
#define None_USART0_RX_vect        _VECTOR(25)         /* USART0, Rx Complete */
#define None_USART0_UDRE_vect_num  (26)                
#define None_USART0_UDRE_vect      _VECTOR(26)         /* USART0 Data register Empty */
#define None_USART0_TX_vect_num    (27)                
#define None_USART0_TX_vect        _VECTOR(27)         /* USART0, Tx Complete */
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
#define None_USART1_RX_vect_num    (36)                
#define None_USART1_RX_vect        _VECTOR(36)         /* USART1, Rx Complete */
#define None_USART1_UDRE_vect_num  (37)                
#define None_USART1_UDRE_vect      _VECTOR(37)         /* USART1 Data register Empty */
#define None_USART1_TX_vect_num    (38)                
#define None_USART1_TX_vect        _VECTOR(38)         /* USART1, Tx Complete */
#define None_TWI_vect_num          (39)                
#define None_TWI_vect              _VECTOR(39)         /* 2-wire Serial Interface */
#define None_SPM_READY_vect_num    (40)                
#define None_SPM_READY_vect        _VECTOR(40)         /* Store Program Memory Read */
#define None_TIMER4_CAPT_vect_num  (41)                
#define None_TIMER4_CAPT_vect      _VECTOR(41)         /* Timer/Counter4 Capture Event */
#define None_TIMER4_COMPA_vect_num (42)                
#define None_TIMER4_COMPA_vect     _VECTOR(42)         /* Timer/Counter4 Compare Match A */
#define None_TIMER4_COMPB_vect_num (43)                
#define None_TIMER4_COMPB_vect     _VECTOR(43)         /* Timer/Counter4 Compare Match B */
#define None_TIMER4_COMPC_vect_num (44)                
#define None_TIMER4_COMPC_vect     _VECTOR(44)         /* Timer/Counter4 Compare Match C */
#define None_TIMER4_OVF_vect_num   (45)                
#define None_TIMER4_OVF_vect       _VECTOR(45)         /* Timer/Counter4 Overflow */
#define None_TIMER5_CAPT_vect_num  (46)                
#define None_TIMER5_CAPT_vect      _VECTOR(46)         /* Timer/Counter5 Capture Event */
#define None_TIMER5_COMPA_vect_num (47)                
#define None_TIMER5_COMPA_vect     _VECTOR(47)         /* Timer/Counter5 Compare Match A */
#define None_TIMER5_COMPB_vect_num (48)                
#define None_TIMER5_COMPB_vect     _VECTOR(48)         /* Timer/Counter5 Compare Match B */
#define None_TIMER5_COMPC_vect_num (49)                
#define None_TIMER5_COMPC_vect     _VECTOR(49)         /* Timer/Counter5 Compare Match C */
#define None_TIMER5_OVF_vect_num   (50)                
#define None_TIMER5_OVF_vect       _VECTOR(50)         /* Timer/Counter5 Overflow */
#define None_USART2_RX_vect_num    (51)                
#define None_USART2_RX_vect        _VECTOR(51)         /* USART2, Rx Complete */
#define None_USART2_UDRE_vect_num  (52)                
#define None_USART2_UDRE_vect      _VECTOR(52)         /* USART2 Data register Empty */
#define None_USART2_TX_vect_num    (53)                
#define None_USART2_TX_vect        _VECTOR(53)         /* USART2, Tx Complete */
#define None_USART3_RX_vect_num    (54)                
#define None_USART3_RX_vect        _VECTOR(54)         /* USART3, Rx Complete */
#define None_USART3_UDRE_vect_num  (55)                
#define None_USART3_UDRE_vect      _VECTOR(55)         /* USART3 Data register Empty */
#define None_USART3_TX_vect_num    (56)                
#define None_USART3_TX_vect        _VECTOR(56)         /* USART3, Tx Complete */

/* Vector Table Size */
#define _VECTOR_SIZE               (4)                 /* Size of individual vector. */
#define _VECTORS_SIZE              (57 * _VECTOR_SIZE) /* Size of all vectors */
/*
================================================================================
Constants
================================================================================
*/

#define PROGMEM_START            (0x0000)                                         
#define PROGMEM_SIZE             (0x40000)                                        
#define PROGMEM_END              (PROGMEM_START + PROGMEM_SIZE - 1)               

#define FLASH_START              (0x0000)                                         
#define FLASH_SIZE               (0x40000)                                        
#define FLASH_PAGE_SIZE          (0x0100)                                         
#define FLASH_END                (FLASH_START + FLASH_SIZE - 1)                   

#define BOOT_SECTION_1_START     (0x3FC00)                                        
#define BOOT_SECTION_1_SIZE      (0x0400)                                         
#define BOOT_SECTION_1_PAGE_SIZE (0x0100)                                         
#define BOOT_SECTION_1_END       (BOOT_SECTION_1_START + BOOT_SECTION_1_SIZE - 1) 

#define BOOT_SECTION_2_START     (0x3F800)                                        
#define BOOT_SECTION_2_SIZE      (0x0800)                                         
#define BOOT_SECTION_2_PAGE_SIZE (0x0100)                                         
#define BOOT_SECTION_2_END       (BOOT_SECTION_2_START + BOOT_SECTION_2_SIZE - 1) 

#define BOOT_SECTION_3_START     (0x3F000)                                        
#define BOOT_SECTION_3_SIZE      (0x1000)                                         
#define BOOT_SECTION_3_PAGE_SIZE (0x0100)                                         
#define BOOT_SECTION_3_END       (BOOT_SECTION_3_START + BOOT_SECTION_3_SIZE - 1) 

#define BOOT_SECTION_4_START     (0x3E000)                                        
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
#define MAPPED_IO_SIZE      (0x01E0)                               
#define MAPPED_IO_PAGE_SIZE (0x0001)                               
#define MAPPED_IO_END       (MAPPED_IO_START + MAPPED_IO_SIZE - 1) 

#define IRAM_START          (0x0200)                               
#define IRAM_SIZE           (0x2000)                               
#define IRAM_PAGE_SIZE      (0x0001)                               
#define IRAM_END            (IRAM_START + IRAM_SIZE - 1)           

#define XRAM_START          (0x2200)                               
#define XRAM_SIZE           (0xDE00)                               
#define XRAM_PAGE_SIZE      (0x0001)                               
#define XRAM_END            (XRAM_START + XRAM_SIZE - 1)           

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


#define PA0 (0) 
#define PA1 (1) 
#define PA2 (2) 
#define PA3 (3) 
#define PA4 (4) 
#define PA5 (5) 
#define PA6 (6) 
#define PA7 (7) 

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
#define PE3 (3) 
#define PE4 (4) 
#define PE5 (5) 
#define PE6 (6) 
#define PE7 (7) 

#define PF0 (0) 
#define PF1 (1) 
#define PF2 (2) 
#define PF3 (3) 
#define PF4 (4) 
#define PF5 (5) 
#define PF6 (6) 
#define PF7 (7) 

#define PG0 (0) 
#define PG1 (1) 
#define PG2 (2) 
#define PG3 (3) 
#define PG4 (4) 
#define PG5 (5) 
#define PG6 (6) 
#define PG7 (7) 

#define PH0 (0) 
#define PH1 (1) 
#define PH2 (2) 
#define PH3 (3) 
#define PH4 (4) 
#define PH5 (5) 
#define PH6 (6) 
#define PH7 (7) 

#define PJ0 (0) 
#define PJ1 (1) 
#define PJ2 (2) 
#define PJ3 (3) 
#define PJ4 (4) 
#define PJ5 (5) 
#define PJ6 (6) 
#define PJ7 (7) 

#define PK0 (0) 
#define PK1 (1) 
#define PK2 (2) 
#define PK3 (3) 
#define PK4 (4) 
#define PK5 (5) 
#define PK6 (6) 
#define PK7 (7) 

#define PL0 (0) 
#define PL1 (1) 
#define PL2 (2) 
#define PL3 (3) 
#define PL4 (4) 
#define PL5 (5) 
#define PL6 (6) 
#define PL7 (7) 

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
#define SIGNATURE_1 (0x98) 
#define SIGNATURE_2 (0x01) 

#endif /* #ifdef _AVR_ATmega2560_H_INCLUDED */
