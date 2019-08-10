/******************************************************************************
 *   This file is part of avr-libc3.                                          * 
 *                                                                            * 
 *   Automatically created by devtools/gen-ioheader-atdf.py (V0.91)           * 
 *                                                                            * 
 *   .atpack File: ATmega64.atdf                                              * 
 *   .ATDF File:   atdf/ATmega64.atdf                                         * 
 *   Version:      2.0.12                                                     * 
 *   Date:         2019-04-26                                                 * 
 *   Device:       ATmega64                                                   * 
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
#  define _AVR_IOXXX_H_ "ioATmega64.h"
#else
#  error "Attempt to include more than one <avr/ioXXX.h> file."
#endif

#ifndef _AVR_ATmega64_H_INCLUDED
#  define _AVR_ATmega64_H_INCLUDED

/*
================================================================================
Ungrouped common register
================================================================================
*/

#define MCUCSR _SFR_MEM8 (0x54) /* MCU Control And Status Register */
#define MCUCR  _SFR_MEM8 (0x55) /* MCU Control Register */

#define XDIV   _SFR_MEM8 (0x5C) /* XTAL Divide Control Register */
#define SP     _SFR_MEM16(0x5D) /* Stack Pointer  */
#define SREG   _SFR_MEM8 (0x5F) /* Status Register */

#define XMCRB  _SFR_MEM8 (0x6C) /* External Memory Control Register B */
#define XMCRA  _SFR_MEM8 (0x6D) /* External Memory Control Register A */

#define OSCCAL _SFR_MEM8 (0x6F) /* Oscillator Calibration Value */


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


/* ATmega103 Compatibility Mode */
typedef enum FUSE_M103C_enum
{
    FUSE_M103C_CLEAR_gc = (0x00), /* ATmega103 Compatibility Mode - CLEAR */
    FUSE_M103C_SET_gc   = (0x02), /* ATmega103 Compatibility Mode - SET */
} FUSE_M103C_t;

/* Watchdog Timer always on */
typedef enum FUSE_WDTON_enum
{
    FUSE_WDTON_CLEAR_gc = (0x00), /* Watchdog Timer always on - CLEAR */
    FUSE_WDTON_SET_gc   = (0x01), /* Watchdog Timer always on - SET */
} FUSE_WDTON_t;

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

/* Preserve EEPROM through the Chip Erase cycle */
typedef enum FUSE_EESAVE_enum
{
    FUSE_EESAVE_CLEAR_gc = (0x00), /* Preserve EEPROM through the Chip Erase cycle - CLEAR */
    FUSE_EESAVE_SET_gc   = (0x08), /* Preserve EEPROM through the Chip Erase cycle - SET */
} FUSE_EESAVE_t;

/* Select Boot Size */
typedef enum FUSE_BOOTSZ_enum
{
    FUSE_BOOTSZ_512W_7E00_gc  = (0x03<<1), /* Boot Flash size=512 words Boot address=$7E00 */
    FUSE_BOOTSZ_1024W_7C00_gc = (0x02<<1), /* Boot Flash size=1024 words Boot address=$7C00 */
    FUSE_BOOTSZ_2048W_7800_gc = (0x01<<1), /* Boot Flash size=2048 words Boot address=$7800 */
    FUSE_BOOTSZ_4096W_7000_gc = (0x00<<1), /* Boot Flash size=4096 words Boot address=$7000 */
} FUSE_BOOTSZ_t;

/* Boot Reset vector Enabled */
typedef enum FUSE_BOOTRST_enum
{
    FUSE_BOOTRST_CLEAR_gc = (0x00), /* Boot Reset vector Enabled - CLEAR */
    FUSE_BOOTRST_SET_gc   = (0x01), /* Boot Reset vector Enabled - SET */
} FUSE_BOOTRST_t;

/* CKOPT fuse (operation dependent of CKSEL fuses) */
typedef enum FUSE_CKOPT_enum
{
    FUSE_CKOPT_CLEAR_gc = (0x00), /* CKOPT fuse (operation dependent of CKSEL fuses) - CLEAR */
    FUSE_CKOPT_SET_gc   = (0x10), /* CKOPT fuse (operation dependent of CKSEL fuses) - SET */
} FUSE_CKOPT_t;

/* Brownout detector trigger level */
typedef enum FUSE_BODLEVEL_enum
{
    FUSE_BODLEVEL_4V0_gc = (0x00<<7), /* Brown-out detection at VCC=4.0 V */
    FUSE_BODLEVEL_2V7_gc = (0x01<<7), /* Brown-out detection at VCC=2.7 V */
} FUSE_BODLEVEL_t;

/* Brown-out detection enabled */
typedef enum FUSE_BODEN_enum
{
    FUSE_BODEN_CLEAR_gc = (0x00), /* Brown-out detection enabled - CLEAR */
    FUSE_BODEN_SET_gc   = (0x40), /* Brown-out detection enabled - SET */
} FUSE_BODEN_t;

/* Select Clock Source */
typedef enum FUSE_SUT_CKSEL_enum
{
    FUSE_SUT_CKSEL_EXTCLK_6CK_0MS_gc                = (0x00), /* Ext. Clock; Start-up time: 6 CK + 0 ms */
    FUSE_SUT_CKSEL_EXTCLK_6CK_4MS_gc                = (0x10), /* Ext. Clock; Start-up time: 6 CK + 4 ms */
    FUSE_SUT_CKSEL_EXTCLK_6CK_64MS_gc               = (0x20), /* Ext. Clock; Start-up time: 6 CK + 64 ms */
    FUSE_SUT_CKSEL_INTRCOSC_1MHZ_6CK_0MS_gc         = (0x01), /* Int. RC Osc. 1 MHz; Start-up time: 6 CK + 0 ms */
    FUSE_SUT_CKSEL_INTRCOSC_1MHZ_6CK_4MS_gc         = (0x11), /* Int. RC Osc. 1 MHz; Start-up time: 6 CK + 4 ms */
    FUSE_SUT_CKSEL_INTRCOSC_1MHZ_6CK_64MS_gc        = (0x21), /* Int. RC Osc. 1 MHz; Start-up time: 6 CK + 64 ms */
    FUSE_SUT_CKSEL_INTRCOSC_2MHZ_6CK_0MS_gc         = (0x02), /* Int. RC Osc. 2 MHz; Start-up time: 6 CK + 0 ms */
    FUSE_SUT_CKSEL_INTRCOSC_2MHZ_6CK_4MS_gc         = (0x12), /* Int. RC Osc. 2 MHz; Start-up time: 6 CK + 4 ms */
    FUSE_SUT_CKSEL_INTRCOSC_2MHZ_6CK_64MS_gc        = (0x22), /* Int. RC Osc. 2 MHz; Start-up time: 6 CK + 64 ms */
    FUSE_SUT_CKSEL_INTRCOSC_4MHZ_6CK_0MS_gc         = (0x03), /* Int. RC Osc. 4 MHz; Start-up time: 6 CK + 0 ms */
    FUSE_SUT_CKSEL_INTRCOSC_4MHZ_6CK_4MS_gc         = (0x13), /* Int. RC Osc. 4 MHz; Start-up time: 6 CK + 4 ms */
    FUSE_SUT_CKSEL_INTRCOSC_4MHZ_6CK_64MS_gc        = (0x23), /* Int. RC Osc. 4 MHz; Start-up time: 6 CK + 64 ms */
    FUSE_SUT_CKSEL_INTRCOSC_8MHZ_6CK_0MS_gc         = (0x04), /* Int. RC Osc. 8 MHz; Start-up time: 6 CK + 0 ms */
    FUSE_SUT_CKSEL_INTRCOSC_8MHZ_6CK_4MS_gc         = (0x14), /* Int. RC Osc. 8 MHz; Start-up time: 6 CK + 4 ms */
    FUSE_SUT_CKSEL_INTRCOSC_8MHZ_6CK_64MS_gc        = (0x24), /* Int. RC Osc. 8 MHz; Start-up time: 6 CK + 64 ms */
    FUSE_SUT_CKSEL_EXTRCOSC_XX_0MHZ9_18CK_0MS_gc    = (0x05), /* Ext. RC Osc.         -  0.9 MHz; Start-up time: 18 CK + 0 ms */
    FUSE_SUT_CKSEL_EXTRCOSC_XX_0MHZ9_18CK_4MS_gc    = (0x15), /* Ext. RC Osc.         -  0.9 MHz; Start-up time: 18 CK + 4 ms */
    FUSE_SUT_CKSEL_EXTRCOSC_XX_0MHZ9_18CK_64MS_gc   = (0x25), /* Ext. RC Osc.         -  0.9 MHz; Start-up time: 18 CK + 64 ms */
    FUSE_SUT_CKSEL_EXTRCOSC_XX_0MHZ9_6CK_4MS_gc     = (0x35), /* Ext. RC Osc.         -  0.9 MHz; Start-up time: 6 CK + 4 ms */
    FUSE_SUT_CKSEL_EXTRCOSC_0MHZ9_3MHZ_18CK_0MS_gc  = (0x06), /* Ext. RC Osc. 0.9 MHz -  3.0 MHz; Start-up time: 18 CK + 0 ms */
    FUSE_SUT_CKSEL_EXTRCOSC_0MHZ9_3MHZ_18CK_4MS_gc  = (0x16), /* Ext. RC Osc. 0.9 MHz -  3.0 MHz; Start-up time: 18 CK + 4 ms */
    FUSE_SUT_CKSEL_EXTRCOSC_0MHZ9_3MHZ_18CK_64MS_gc = (0x26), /* Ext. RC Osc. 0.9 MHz -  3.0 MHz; Start-up time: 18 CK + 64 ms */
    FUSE_SUT_CKSEL_EXTRCOSC_0MHZ9_3MHZ_6CK_4MS_gc   = (0x36), /* Ext. RC Osc. 0.9 MHz -  3.0 MHz; Start-up time: 6 CK + 4 ms */
    FUSE_SUT_CKSEL_EXTRCOSC_3MHZ_8MHZ_18CK_0MS_gc   = (0x07), /* Ext. RC Osc. 3.0 MHz -  8.0 MHz; Start-up time: 18 CK + 0 ms */
    FUSE_SUT_CKSEL_EXTRCOSC_3MHZ_8MHZ_18CK_4MS_gc   = (0x17), /* Ext. RC Osc. 3.0 MHz -  8.0 MHz; Start-up time: 18 CK + 4 ms */
    FUSE_SUT_CKSEL_EXTRCOSC_3MHZ_8MHZ_18CK_64MS_gc  = (0x27), /* Ext. RC Osc. 3.0 MHz -  8.0 MHz; Start-up time: 18 CK + 64 ms */
    FUSE_SUT_CKSEL_EXTRCOSC_3MHZ_8MHZ_6CK_4MS_gc    = (0x37), /* Ext. RC Osc. 3.0 MHz -  8.0 MHz; Start-up time: 6 CK + 4 ms */
    FUSE_SUT_CKSEL_EXTRCOSC_8MHZ_12MHZ_18CK_0MS_gc  = (0x08), /* Ext. RC Osc. 8.0 MHz - 12.0 MHz; Start-up time: 18 CK + 0 ms */
    FUSE_SUT_CKSEL_EXTRCOSC_8MHZ_12MHZ_18CK_4MS_gc  = (0x18), /* Ext. RC Osc. 8.0 MHz - 12.0 MHz; Start-up time: 18 CK + 4 ms */
    FUSE_SUT_CKSEL_EXTRCOSC_8MHZ_12MHZ_18CK_64MS_gc = (0x28), /* Ext. RC Osc. 8.0 MHz - 12.0 MHz; Start-up time: 18 CK + 64 ms */
    FUSE_SUT_CKSEL_EXTRCOSC_8MHZ_12MHZ_6CK_4MS_gc   = (0x38), /* Ext. RC Osc. 8.0 MHz - 12.0 MHz; Start-up time: 6 CK + 4 ms */
    FUSE_SUT_CKSEL_EXTLOFXTAL_1KCK_4MS_gc           = (0x09), /* Ext. Low-Freq. Crystal; Start-up time: 1K CK + 4 ms */
    FUSE_SUT_CKSEL_EXTLOFXTAL_1KCK_64MS_gc          = (0x19), /* Ext. Low-Freq. Crystal; Start-up time: 1K CK + 64 ms */
    FUSE_SUT_CKSEL_EXTLOFXTAL_32KCK_64MS_gc         = (0x29), /* Ext. Low-Freq. Crystal; Start-up time: 32K CK + 64 ms */
    FUSE_SUT_CKSEL_EXTLOFXTALRES_258CK_4MS_gc       = (0x0A), /* Ext. Crystal/Resonator Low Freq.; Start-up time: 258 CK + 4 ms */
    FUSE_SUT_CKSEL_EXTLOFXTALRES_258CK_64MS_gc      = (0x1A), /* Ext. Crystal/Resonator Low Freq.; Start-up time: 258 CK + 64 ms */
    FUSE_SUT_CKSEL_EXTLOFXTALRES_1KCK_0MS_gc        = (0x2A), /* Ext. Crystal/Resonator Low Freq.; Start-up time: 1K CK + 0 ms */
    FUSE_SUT_CKSEL_EXTLOFXTALRES_1KCK_4MS_gc        = (0x3A), /* Ext. Crystal/Resonator Low Freq.; Start-up time: 1K CK + 4 ms */
    FUSE_SUT_CKSEL_EXTLOFXTALRES_1KCK_64MS_gc       = (0x0B), /* Ext. Crystal/Resonator Low Freq.; Start-up time: 1K CK + 64 ms */
    FUSE_SUT_CKSEL_EXTLOFXTALRES_16KCK_0MS_gc       = (0x1B), /* Ext. Crystal/Resonator Low Freq.; Start-up time: 16K CK + 0 ms */
    FUSE_SUT_CKSEL_EXTLOFXTALRES_16KCK_4MS_gc       = (0x2B), /* Ext. Crystal/Resonator Low Freq.; Start-up time: 16K CK + 4 ms */
    FUSE_SUT_CKSEL_EXTLOFXTALRES_16KCK_64MS_gc      = (0x3B), /* Ext. Crystal/Resonator Low Freq.; Start-up time: 16K CK + 64 ms */
    FUSE_SUT_CKSEL_EXTMEDFXTALRES_258CK_4MS_gc      = (0x0C), /* Ext. Crystal/Resonator Medium Freq.; Start-up time: 258 CK + 4 ms */
    FUSE_SUT_CKSEL_EXTMEDFXTALRES_258CK_64MS_gc     = (0x1C), /* Ext. Crystal/Resonator Medium Freq.; Start-up time: 258 CK + 64 ms */
    FUSE_SUT_CKSEL_EXTMEDFXTALRES_1KCK_0MS_gc       = (0x2C), /* Ext. Crystal/Resonator Medium Freq.; Start-up time: 1K CK + 0 ms */
    FUSE_SUT_CKSEL_EXTMEDFXTALRES_1KCK_4MS_gc       = (0x3C), /* Ext. Crystal/Resonator Medium Freq.; Start-up time: 1K CK + 4 ms */
    FUSE_SUT_CKSEL_EXTMEDFXTALRES_1KCK_64MS_gc      = (0x0D), /* Ext. Crystal/Resonator Medium Freq.; Start-up time: 1K CK + 64 ms */
    FUSE_SUT_CKSEL_EXTMEDFXTALRES_16KCK_0MS_gc      = (0x1D), /* Ext. Crystal/Resonator Medium Freq.; Start-up time: 16K CK + 0 ms */
    FUSE_SUT_CKSEL_EXTMEDFXTALRES_16KCK_4MS_gc      = (0x2D), /* Ext. Crystal/Resonator Medium Freq.; Start-up time: 16K CK + 4 ms */
    FUSE_SUT_CKSEL_EXTMEDFXTALRES_16KCK_64MS_gc     = (0x3D), /* Ext. Crystal/Resonator Medium Freq.; Start-up time: 16K CK + 64 ms */
    FUSE_SUT_CKSEL_EXTHIFXTALRES_258CK_4MS_gc       = (0x0E), /* Ext. Crystal/Resonator High Freq.; Start-up time: 258 CK + 4 ms */
    FUSE_SUT_CKSEL_EXTHIFXTALRES_258CK_64MS_gc      = (0x1E), /* Ext. Crystal/Resonator High Freq.; Start-up time: 258 CK + 64 ms */
    FUSE_SUT_CKSEL_EXTHIFXTALRES_1KCK_0MS_gc        = (0x2E), /* Ext. Crystal/Resonator High Freq.; Start-up time: 1K CK + 0 ms */
    FUSE_SUT_CKSEL_EXTHIFXTALRES_1KCK_4MS_gc        = (0x3E), /* Ext. Crystal/Resonator High Freq.; Start-up time: 1K CK + 4 ms */
    FUSE_SUT_CKSEL_EXTHIFXTALRES_1KCK_64MS_gc       = (0x0F), /* Ext. Crystal/Resonator High Freq.; Start-up time: 1K CK + 64 ms */
    FUSE_SUT_CKSEL_EXTHIFXTALRES_16KCK_0MS_gc       = (0x1F), /* Ext. Crystal/Resonator High Freq.; Start-up time: 16K CK + 0 ms */
    FUSE_SUT_CKSEL_EXTHIFXTALRES_16KCK_4MS_gc       = (0x2F), /* Ext. Crystal/Resonator High Freq.; Start-up time: 16K CK + 4 ms */
    FUSE_SUT_CKSEL_EXTHIFXTALRES_16KCK_64MS_gc      = (0x3F), /* Ext. Crystal/Resonator High Freq.; Start-up time: 16K CK + 64 ms */
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
    register8_t rsv_0x00[40]; /* RESERVED REGISTER BLOCK */
    register8_t ACSR;         /* Analog Comparator Control And Status Register */
    register8_t rsv_0x29[23]; /* RESERVED REGISTER BLOCK */
    register8_t SFIOR;        /* Special Function IO Register */
} AC_t;


/* Analog Comparator Multiplexer Enable */
typedef enum AC_ACME_enum
{
    AC_ACME_CLEAR_gc = (0x00), /* Analog Comparator Multiplexer Enable - CLEAR */
    AC_ACME_SET_gc   = (0x08), /* Analog Comparator Multiplexer Enable - SET */
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

/*
--------------------------------------------------------------------------------
ADC - Analog-to-Digital Converter
--------------------------------------------------------------------------------
*/

typedef struct ADC_struct
{
    register8_t rsv_0x00[36];  /* RESERVED REGISTER BLOCK */
    _REGISTER16 (ADC);         /* ADC Data Register  Bytes */
    register8_t rsv_0x25;      /* RESERVED REGISTER */
    register8_t ADCSRA;        /* The ADC Control and Status register A */
    register8_t ADMUX;         /* The ADC multiplexer Selection Register */
    register8_t rsv_0x28[102]; /* RESERVED REGISTER BLOCK */
    register8_t ADCSRB;        /* The ADC Control and Status register B */
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

/*
--------------------------------------------------------------------------------
SPI - Serial Peripheral Interface
--------------------------------------------------------------------------------
*/

typedef struct SPI_struct
{
    register8_t rsv_0x00[45]; /* RESERVED REGISTER BLOCK */
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
TWI - Two Wire Serial Interface
--------------------------------------------------------------------------------
*/

typedef struct TWI_struct
{
    register8_t rsv_0x00[112]; /* RESERVED REGISTER BLOCK */
    register8_t TWBR;          /* TWI Bit Rate register */
    register8_t TWSR;          /* TWI Status Register */
    register8_t TWAR;          /* TWI (Slave) Address register */
    register8_t TWDR;          /* TWI Data register */
    register8_t TWCR;          /* TWI Control Register */
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
USART - USART
--------------------------------------------------------------------------------
*/

typedef struct USART0_struct
{
    register8_t rsv_0x00[41]; /* RESERVED REGISTER BLOCK */
    register8_t UBRR0L;       /* USART Baud Rate Register Low Byte */
    register8_t UCSR0B;       /* USART Control and Status Register B */
    register8_t UCSR0A;       /* USART Control and Status Register A */
    register8_t UDR0;         /* USART I/O Data Register */
    register8_t rsv_0x2D[99]; /* RESERVED REGISTER BLOCK */
    register8_t UBRR0H;       /* USART Baud Rate Register Hight Byte */
    register8_t rsv_0x91[4];  /* RESERVED REGISTER BLOCK */
    register8_t UCSR0C;       /* USART Control and Status Register C */
} USART0_t;


/*
--------------------------------------------------------------------------------
USART - USART
--------------------------------------------------------------------------------
*/

typedef struct USART1_struct
{
    register8_t rsv_0x00[152]; /* RESERVED REGISTER BLOCK */
    register8_t UBRR1H;        /* USART Baud Rate Register Hight Byte */
    register8_t UBRR1L;        /* USART Baud Rate Register Low Byte */
    register8_t UCSR1B;        /* USART Control and Status Register B */
    register8_t UCSR1A;        /* USART Control and Status Register A */
    register8_t UDR1;          /* USART I/O Data Register */
    register8_t UCSR1C;        /* USART Control and Status Register C */
} USART1_t;


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
    USART0_UMSEL0_VAL_0x00_gc = (0x00<<6), /* Asynchronous Operation */
    USART0_UMSEL0_VAL_0x01_gc = (0x01<<6), /* Synchronous Operation */
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
    USART1_UMSEL1_VAL_0x00_gc = (0x00<<6), /* Asynchronous Operation */
    USART1_UMSEL1_VAL_0x01_gc = (0x01<<6), /* Synchronous Operation */
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
CPU - CPU Registers
--------------------------------------------------------------------------------
*/

typedef struct CPU_struct
{
    register8_t rsv_0x00[84]; /* RESERVED REGISTER BLOCK */
    register8_t MCUCSR;       /* MCU Control And Status Register */
    register8_t MCUCR;        /* MCU Control Register */
    register8_t rsv_0x56[6];  /* RESERVED REGISTER BLOCK */
    register8_t XDIV;         /* XTAL Divide Control Register */
    _REGISTER16 (SP);         /* Stack Pointer  */
    register8_t rsv_0x5E;     /* RESERVED REGISTER */
    register8_t SREG;         /* Status Register */
    register8_t rsv_0x60[12]; /* RESERVED REGISTER BLOCK */
    register8_t XMCRB;        /* External Memory Control Register B */
    register8_t XMCRA;        /* External Memory Control Register A */
    register8_t rsv_0x6E;     /* RESERVED REGISTER */
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

/* External SRAM Enable */
typedef enum CPU_SRE_enum
{
    CPU_SRE_CLEAR_gc = (0x00), /* External SRAM Enable - CLEAR */
    CPU_SRE_SET_gc   = (0x80), /* External SRAM Enable - SET */
} CPU_SRE_t;

/* External SRAM Wait State Select */
typedef enum CPU_SRW10_enum
{
    CPU_SRW10_CLEAR_gc = (0x00), /* External SRAM Wait State Select - CLEAR */
    CPU_SRW10_SET_gc   = (0x40), /* External SRAM Wait State Select - SET */
} CPU_SRW10_t;

/* Sleep Enable */
typedef enum CPU_SE_enum
{
    CPU_SE_CLEAR_gc = (0x00), /* Sleep Enable - CLEAR */
    CPU_SE_SET_gc   = (0x20), /* Sleep Enable - SET */
} CPU_SE_t;

/* Sleep Mode Select */
#define CPU_MCUCR_SM_gc(x) ((x<<3) & 0x18)

/* Sleep Mode Select */
typedef enum CPU_SM2_enum
{
    CPU_SM2_IDLE_gc   = (0x00<<2), /* Idle */
    CPU_SM2_ADC_gc    = (0x02<<2), /* ADC Noise Reduction (If Available) */
    CPU_SM2_PDOWN_gc  = (0x04<<2), /* Power Down */
    CPU_SM2_PSAVE_gc  = (0x06<<2), /* Power Save */
    CPU_SM2_STDBY_gc  = (0x05<<2), /* Standby */
    CPU_SM2_ESTDBY_gc = (0x07<<2), /* Extended Standby */
} CPU_SM2_t;

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

/* JTAG Interface Disable */
typedef enum CPU_JTD_enum
{
    CPU_JTD_CLEAR_gc = (0x00), /* JTAG Interface Disable - CLEAR */
    CPU_JTD_SET_gc   = (0x80), /* JTAG Interface Disable - SET */
} CPU_JTD_t;

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

/* Wait state page limit */
typedef enum CPU_SRL_enum
{
    CPU_SRL_VAL_0x00_gc = (0x00<<4), /* LS = N/A, US = 0x1100 - 0xFFFF */
    CPU_SRL_VAL_0x01_gc = (0x01<<4), /* LS = 0x1100 - 0x1FFF, US = 0x2000 - 0xFFFF */
    CPU_SRL_VAL_0x02_gc = (0x02<<4), /* LS = 0x1100 - 0x3FFF, US = 0x4000 - 0xFFFF */
    CPU_SRL_VAL_0x03_gc = (0x03<<4), /* LS = 0x1100 - 0x5FFF, US = 0x6000 - 0xFFFF */
    CPU_SRL_VAL_0x04_gc = (0x04<<4), /* LS = 0x1100 - 0x7FFF, US = 0x8000 - 0xFFFF */
    CPU_SRL_VAL_0x05_gc = (0x05<<4), /* LS = 0x1100 - 0x9FFF, US = 0xA000 - 0xFFFF */
    CPU_SRL_VAL_0x06_gc = (0x06<<4), /* LS = 0x1100 - 0xBFFF, US = 0xC000 - 0xFFFF */
    CPU_SRL_VAL_0x07_gc = (0x07<<4), /* LS = 0x1100 - 0xDFFF, US = 0xE000 - 0xFFFF */
} CPU_SRL_t;

/* Wait state select bit lower page */
typedef enum CPU_SRW0_enum
{
    CPU_SRW0_VAL_0x00_gc = (0x00<<2), /* No wait-states */
    CPU_SRW0_VAL_0x01_gc = (0x01<<2), /* Wait one cycle during read/write strobe */
    CPU_SRW0_VAL_0x02_gc = (0x02<<2), /* Wait two cycles during read/write strobe */
    CPU_SRW0_VAL_0x03_gc = (0x03<<2), /* Wait two cycles during read/write and wait one cycle before driving out new address */
} CPU_SRW0_t;

/* Wait state select bit upper page */
typedef enum CPU_SRW11_enum
{
    CPU_SRW11_CLEAR_gc = (0x00), /* Wait state select bit upper page - CLEAR */
    CPU_SRW11_SET_gc   = (0x02), /* Wait state select bit upper page - SET */
} CPU_SRW11_t;

/* External Memory Bus Keeper Enable */
typedef enum CPU_XMBK_enum
{
    CPU_XMBK_CLEAR_gc = (0x00), /* External Memory Bus Keeper Enable - CLEAR */
    CPU_XMBK_SET_gc   = (0x80), /* External Memory Bus Keeper Enable - SET */
} CPU_XMBK_t;

/* External Memory High Mask */
#define CPU_XMCRB_XMM_gc(x) (x & 0x07)

/* XTAL Divide Enable */
typedef enum CPU_XDIVEN_enum
{
    CPU_XDIVEN_CLEAR_gc = (0x00), /* XTAL Divide Enable - CLEAR */
    CPU_XDIVEN_SET_gc   = (0x80), /* XTAL Divide Enable - SET */
} CPU_XDIVEN_t;

/* XTAl Divide Select Bits */
#define CPU_XDIV_XDIV_gc(x) (x & 0x7F)

/*
--------------------------------------------------------------------------------
BOOT_LOAD - Bootloader
--------------------------------------------------------------------------------
*/

typedef struct BOOT_LOAD_struct
{
    register8_t rsv_0x00[104]; /* RESERVED REGISTER BLOCK */
    register8_t SPMCSR;        /* Store Program Memory Control Register */
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
JTAG - JTAG Interface
--------------------------------------------------------------------------------
*/

typedef struct JTAG_struct
{
    register8_t rsv_0x00[66]; /* RESERVED REGISTER BLOCK */
    register8_t OCDR;         /* On-Chip Debug Related Register in I/O Memory */
    register8_t rsv_0x43[17]; /* RESERVED REGISTER BLOCK */
    register8_t MCUCSR;       /* MCU Control And Status Register */
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
MISC - Other Registers
--------------------------------------------------------------------------------
*/

typedef struct MISC_struct
{
    register8_t rsv_0x00[64]; /* RESERVED REGISTER BLOCK */
    register8_t SFIOR;        /* Special Function IO Register */
} MISC_t;


/* Timer/Counter Synchronization Mode */
typedef enum MISC_TSM_enum
{
    MISC_TSM_CLEAR_gc = (0x00), /* Timer/Counter Synchronization Mode - CLEAR */
    MISC_TSM_SET_gc   = (0x80), /* Timer/Counter Synchronization Mode - SET */
} MISC_TSM_t;

/* Analog Comparator Multiplexer Enable */
typedef enum MISC_ACME_enum
{
    MISC_ACME_CLEAR_gc = (0x00), /* Analog Comparator Multiplexer Enable - CLEAR */
    MISC_ACME_SET_gc   = (0x08), /* Analog Comparator Multiplexer Enable - SET */
} MISC_ACME_t;

/* Pull Up Disable */
typedef enum MISC_PUD_enum
{
    MISC_PUD_CLEAR_gc = (0x00), /* Pull Up Disable - CLEAR */
    MISC_PUD_SET_gc   = (0x04), /* Pull Up Disable - SET */
} MISC_PUD_t;

/* Prescaler Reset Timer/Counter0 */
typedef enum MISC_PSR0_enum
{
    MISC_PSR0_CLEAR_gc = (0x00), /* Prescaler Reset Timer/Counter0 - CLEAR */
    MISC_PSR0_SET_gc   = (0x02), /* Prescaler Reset Timer/Counter0 - SET */
} MISC_PSR0_t;

/* Prescaler Reset Timer/Counter3, Timer/Counter2, and Timer/Counter1 */
typedef enum MISC_PSR321_enum
{
    MISC_PSR321_CLEAR_gc = (0x00), /* Prescaler Reset Timer/Counter3, Timer/Counter2, and Timer/Counter1 - CLEAR */
    MISC_PSR321_SET_gc   = (0x01), /* Prescaler Reset Timer/Counter3, Timer/Counter2, and Timer/Counter1 - SET */
} MISC_PSR321_t;

/*
--------------------------------------------------------------------------------
EXINT - External Interrupts
--------------------------------------------------------------------------------
*/

typedef struct EXINT_struct
{
    register8_t rsv_0x00[88]; /* RESERVED REGISTER BLOCK */
    register8_t EIFR;         /* External Interrupt Flag Register */
    register8_t EIMSK;        /* External Interrupt Mask Register */
    register8_t EICRB;        /* External Interrupt Control Register B */
    register8_t rsv_0x5B[15]; /* RESERVED REGISTER BLOCK */
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
EEPROM - EEPROM
--------------------------------------------------------------------------------
*/

typedef struct EEPROM_struct
{
    register8_t rsv_0x00[60]; /* RESERVED REGISTER BLOCK */
    register8_t EECR;         /* EEPROM Control Register */
    register8_t EEDR;         /* EEPROM Data Register */
    _REGISTER16 (EEAR);       /* EEPROM Read/Write Access  Bytes */
} EEPROM_t;


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

typedef struct PORTC_struct
{
    register8_t rsv_0x00[51]; /* RESERVED REGISTER BLOCK */
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
    register8_t rsv_0x00[48]; /* RESERVED REGISTER BLOCK */
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
    register8_t rsv_0x00[33]; /* RESERVED REGISTER BLOCK */
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
    register8_t rsv_0x00[32]; /* RESERVED REGISTER BLOCK */
    register8_t PINF;         /* Input Pins, Port F */
    register8_t rsv_0x21[64]; /* RESERVED REGISTER BLOCK */
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
    register8_t rsv_0x00[99]; /* RESERVED REGISTER BLOCK */
    register8_t PING;         /* Input Pins, Port G */
    register8_t DDRG;         /* Data Direction Register, Port G */
    register8_t PORTG;        /* Data Register, Port G */
} PORTG_t;


/*
--------------------------------------------------------------------------------
TC8_ASYNC - Timer/Counter, 8-bit Async
--------------------------------------------------------------------------------
*/

typedef struct TC0_struct
{
    register8_t rsv_0x00[64]; /* RESERVED REGISTER BLOCK */
    register8_t SFIOR;        /* Special Function IO Register */
    register8_t rsv_0x41[15]; /* RESERVED REGISTER BLOCK */
    register8_t ASSR;         /* Asynchronus Status Register */
    register8_t OCR0;         /* Output Compare Register */
    register8_t TCNT0;        /* Timer/Counter Register */
    register8_t TCCR0;        /* Timer/Counter Control Register */
    register8_t rsv_0x54[2];  /* RESERVED REGISTER BLOCK */
    register8_t TIFR;         /* Timer/Counter Interrupt Flag register */
    register8_t TIMSK;        /* Timer/Counter Interrupt Mask Register */
} TC0_t;


/* Force Output Compare */
typedef enum TC0_FOC0_enum
{
    TC0_FOC0_CLEAR_gc = (0x00), /* Force Output Compare - CLEAR */
    TC0_FOC0_SET_gc   = (0x80), /* Force Output Compare - SET */
} TC0_FOC0_t;

/* Waveform Generation Mode 0 */
typedef enum TC0_WGM00_enum
{
    TC0_WGM00_VAL_0x00_gc = (0x00<<6), /* Normal */
    TC0_WGM00_VAL_0x02_gc = (0x02<<6), /* PWM, Phase Correct */
    TC0_WGM00_VAL_0x01_gc = (0x01<<6), /* CTC */
    TC0_WGM00_VAL_0x03_gc = (0x03<<6), /* Fast PWM */
} TC0_WGM00_t;

/* Compare Match Output Modes */
#define TC0_TCCR0_COM0_gc(x) ((x<<4) & 0x30)

/* Waveform Generation Mode 1 */
typedef enum TC0_WGM01_enum
{
    TC0_WGM01_CLEAR_gc = (0x00), /* Waveform Generation Mode 1 - CLEAR */
    TC0_WGM01_SET_gc   = (0x08), /* Waveform Generation Mode 1 - SET */
} TC0_WGM01_t;

/* Clock Selects */
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

/* Asynchronus Timer/Counter 0 */
typedef enum TC0_AS0_enum
{
    TC0_AS0_CLEAR_gc = (0x00), /* Asynchronus Timer/Counter 0 - CLEAR */
    TC0_AS0_SET_gc   = (0x08), /* Asynchronus Timer/Counter 0 - SET */
} TC0_AS0_t;

/* Timer/Counter0 Update Busy */
typedef enum TC0_TCN0UB_enum
{
    TC0_TCN0UB_CLEAR_gc = (0x00), /* Timer/Counter0 Update Busy - CLEAR */
    TC0_TCN0UB_SET_gc   = (0x04), /* Timer/Counter0 Update Busy - SET */
} TC0_TCN0UB_t;

/* Output Compare register 0 Busy */
typedef enum TC0_OCR0UB_enum
{
    TC0_OCR0UB_CLEAR_gc = (0x00), /* Output Compare register 0 Busy - CLEAR */
    TC0_OCR0UB_SET_gc   = (0x02), /* Output Compare register 0 Busy - SET */
} TC0_OCR0UB_t;

/* Timer/Counter Control Register 0 Update Busy */
typedef enum TC0_TCR0UB_enum
{
    TC0_TCR0UB_CLEAR_gc = (0x00), /* Timer/Counter Control Register 0 Update Busy - CLEAR */
    TC0_TCR0UB_SET_gc   = (0x01), /* Timer/Counter Control Register 0 Update Busy - SET */
} TC0_TCR0UB_t;

/* Timer/Counter0 Output Compare Match Interrupt register */
typedef enum TC0_OCIE0_enum
{
    TC0_OCIE0_CLEAR_gc = (0x00), /* Timer/Counter0 Output Compare Match Interrupt register - CLEAR */
    TC0_OCIE0_SET_gc   = (0x02), /* Timer/Counter0 Output Compare Match Interrupt register - SET */
} TC0_OCIE0_t;

/* Timer/Counter0 Overflow Interrupt Enable */
typedef enum TC0_TOIE0_enum
{
    TC0_TOIE0_CLEAR_gc = (0x00), /* Timer/Counter0 Overflow Interrupt Enable - CLEAR */
    TC0_TOIE0_SET_gc   = (0x01), /* Timer/Counter0 Overflow Interrupt Enable - SET */
} TC0_TOIE0_t;

/* Output Compare Flag 0 */
typedef enum TC0_OCF0_enum
{
    TC0_OCF0_CLEAR_gc = (0x00), /* Output Compare Flag 0 - CLEAR */
    TC0_OCF0_SET_gc   = (0x02), /* Output Compare Flag 0 - SET */
} TC0_OCF0_t;

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

/* Prescaler Reset Timer/Counter0 */
typedef enum TC0_PSR0_enum
{
    TC0_PSR0_CLEAR_gc = (0x00), /* Prescaler Reset Timer/Counter0 - CLEAR */
    TC0_PSR0_SET_gc   = (0x02), /* Prescaler Reset Timer/Counter0 - SET */
} TC0_PSR0_t;

/*
--------------------------------------------------------------------------------
TC16 - Timer/Counter, 16-bit
--------------------------------------------------------------------------------
*/

typedef struct TC1_struct
{
    register8_t rsv_0x00[64]; /* RESERVED REGISTER BLOCK */
    register8_t SFIOR;        /* Special Function IO Register */
    register8_t rsv_0x41[5];  /* RESERVED REGISTER BLOCK */
    _REGISTER16 (ICR1);       /* Timer/Counter1 Input Capture Register  Bytes */
    register8_t rsv_0x47;     /* RESERVED REGISTER */
    _REGISTER16 (OCR1B);      /* Timer/Counter1 Output Compare Register  Bytes */
    register8_t rsv_0x49;     /* RESERVED REGISTER */
    _REGISTER16 (OCR1A);      /* Timer/Counter1 Output Compare Register  Bytes */
    register8_t rsv_0x4B;     /* RESERVED REGISTER */
    _REGISTER16 (TCNT1);      /* Timer/Counter1  Bytes */
    register8_t rsv_0x4D;     /* RESERVED REGISTER */
    register8_t TCCR1B;       /* Timer/Counter1 Control Register B */
    register8_t TCCR1A;       /* Timer/Counter1 Control Register A */
    register8_t rsv_0x50[6];  /* RESERVED REGISTER BLOCK */
    register8_t TIFR;         /* Timer/Counter Interrupt Flag register */
    register8_t TIMSK;        /* Timer/Counter Interrupt Mask Register */
    register8_t rsv_0x58[32]; /* RESERVED REGISTER BLOCK */
    _REGISTER16 (OCR1C);      /* Timer/Counter1 Output Compare Register  Bytes */
    register8_t rsv_0x79;     /* RESERVED REGISTER */
    register8_t TCCR1C;       /* Timer/Counter1 Control Register C */
    register8_t rsv_0x7B;     /* RESERVED REGISTER */
    register8_t ETIFR;        /* Extended Timer/Counter Interrupt Flag register */
    register8_t ETIMSK;       /* Extended Timer/Counter Interrupt Mask Register */
} TC1_t;


/*
--------------------------------------------------------------------------------
TC16 - Timer/Counter, 16-bit
--------------------------------------------------------------------------------
*/

typedef struct TC3_struct
{
    register8_t rsv_0x00[64]; /* RESERVED REGISTER BLOCK */
    register8_t SFIOR;        /* Special Function IO Register */
    register8_t rsv_0x41[59]; /* RESERVED REGISTER BLOCK */
    register8_t ETIFR;        /* Extended Timer/Counter Interrupt Flag register */
    register8_t ETIMSK;       /* Extended Timer/Counter Interrupt Mask Register */
    register8_t rsv_0x7E[2];  /* RESERVED REGISTER BLOCK */
    _REGISTER16 (ICR3);       /* Timer/Counter3 Input Capture Register  Bytes */
    register8_t rsv_0x81;     /* RESERVED REGISTER */
    _REGISTER16 (OCR3C);      /* Timer/Counter3 Output compare Register C  Bytes */
    register8_t rsv_0x83;     /* RESERVED REGISTER */
    _REGISTER16 (OCR3B);      /* Timer/Counter3 Output Compare Register B  Bytes */
    register8_t rsv_0x85;     /* RESERVED REGISTER */
    _REGISTER16 (OCR3A);      /* Timer/Counter3 Output Compare Register A  Bytes */
    register8_t rsv_0x87;     /* RESERVED REGISTER */
    _REGISTER16 (TCNT3);      /* Timer/Counter3  Bytes */
    register8_t rsv_0x89;     /* RESERVED REGISTER */
    register8_t TCCR3B;       /* Timer/Counter3 Control Register B */
    register8_t TCCR3A;       /* Timer/Counter3 Control Register A */
    register8_t TCCR3C;       /* Timer/Counter3 Control Register C */
} TC3_t;


/* Timer/Counter1 Input Capture Interrupt Enable */
typedef enum TC1_TICIE1_enum
{
    TC1_TICIE1_CLEAR_gc = (0x00), /* Timer/Counter1 Input Capture Interrupt Enable - CLEAR */
    TC1_TICIE1_SET_gc   = (0x20), /* Timer/Counter1 Input Capture Interrupt Enable - SET */
} TC1_TICIE1_t;

/* Timer/Counter1 Output CompareA Match Interrupt Enable */
typedef enum TC1_OCIE1A_enum
{
    TC1_OCIE1A_CLEAR_gc = (0x00), /* Timer/Counter1 Output CompareA Match Interrupt Enable - CLEAR */
    TC1_OCIE1A_SET_gc   = (0x10), /* Timer/Counter1 Output CompareA Match Interrupt Enable - SET */
} TC1_OCIE1A_t;

/* Timer/Counter1 Output CompareB Match Interrupt Enable */
typedef enum TC1_OCIE1B_enum
{
    TC1_OCIE1B_CLEAR_gc = (0x00), /* Timer/Counter1 Output CompareB Match Interrupt Enable - CLEAR */
    TC1_OCIE1B_SET_gc   = (0x08), /* Timer/Counter1 Output CompareB Match Interrupt Enable - SET */
} TC1_OCIE1B_t;

/* Timer/Counter1 Overflow Interrupt Enable */
typedef enum TC1_TOIE1_enum
{
    TC1_TOIE1_CLEAR_gc = (0x00), /* Timer/Counter1 Overflow Interrupt Enable - CLEAR */
    TC1_TOIE1_SET_gc   = (0x04), /* Timer/Counter1 Overflow Interrupt Enable - SET */
} TC1_TOIE1_t;

/* Timer/Counter 1, Output Compare Match C Interrupt Enable */
typedef enum TC1_OCIE1C_enum
{
    TC1_OCIE1C_CLEAR_gc = (0x00), /* Timer/Counter 1, Output Compare Match C Interrupt Enable - CLEAR */
    TC1_OCIE1C_SET_gc   = (0x01), /* Timer/Counter 1, Output Compare Match C Interrupt Enable - SET */
} TC1_OCIE1C_t;

/* Input Capture Flag 1 */
typedef enum TC1_ICF1_enum
{
    TC1_ICF1_CLEAR_gc = (0x00), /* Input Capture Flag 1 - CLEAR */
    TC1_ICF1_SET_gc   = (0x20), /* Input Capture Flag 1 - SET */
} TC1_ICF1_t;

/* Output Compare Flag 1A */
typedef enum TC1_OCF1A_enum
{
    TC1_OCF1A_CLEAR_gc = (0x00), /* Output Compare Flag 1A - CLEAR */
    TC1_OCF1A_SET_gc   = (0x10), /* Output Compare Flag 1A - SET */
} TC1_OCF1A_t;

/* Output Compare Flag 1B */
typedef enum TC1_OCF1B_enum
{
    TC1_OCF1B_CLEAR_gc = (0x00), /* Output Compare Flag 1B - CLEAR */
    TC1_OCF1B_SET_gc   = (0x08), /* Output Compare Flag 1B - SET */
} TC1_OCF1B_t;

/* Timer/Counter1 Overflow Flag */
typedef enum TC1_TOV1_enum
{
    TC1_TOV1_CLEAR_gc = (0x00), /* Timer/Counter1 Overflow Flag - CLEAR */
    TC1_TOV1_SET_gc   = (0x04), /* Timer/Counter1 Overflow Flag - SET */
} TC1_TOV1_t;

/* Timer/Counter 1, Output Compare C Match Flag */
typedef enum TC1_OCF1C_enum
{
    TC1_OCF1C_CLEAR_gc = (0x00), /* Timer/Counter 1, Output Compare C Match Flag - CLEAR */
    TC1_OCF1C_SET_gc   = (0x01), /* Timer/Counter 1, Output Compare C Match Flag - SET */
} TC1_OCF1C_t;

/* Timer/Counter Synchronization Mode */
typedef enum TC1_TSM_enum
{
    TC1_TSM_CLEAR_gc = (0x00), /* Timer/Counter Synchronization Mode - CLEAR */
    TC1_TSM_SET_gc   = (0x80), /* Timer/Counter Synchronization Mode - SET */
} TC1_TSM_t;

/* Prescaler Reset, T/C3, T/C2, T/C1 */
typedef enum TC1_PSR321_enum
{
    TC1_PSR321_CLEAR_gc = (0x00), /* Prescaler Reset, T/C3, T/C2, T/C1 - CLEAR */
    TC1_PSR321_SET_gc   = (0x01), /* Prescaler Reset, T/C3, T/C2, T/C1 - SET */
} TC1_PSR321_t;

/* Compare Output Mode 1A, bits */
#define TC1_TCCR1A_COM1A_gc(x) ((x<<6) & 0xC0)

/* Compare Output Mode 1B, bits */
#define TC1_TCCR1A_COM1B_gc(x) ((x<<4) & 0x30)

/* Compare Output Mode 1C, bits */
#define TC1_TCCR1A_COM1C_gc(x) ((x<<2) & 0x0C)

/* Waveform Generation Mode Bits */
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

/* Force Output Compare for channel A */
typedef enum TC1_FOC1A_enum
{
    TC1_FOC1A_CLEAR_gc = (0x00), /* Force Output Compare for channel A - CLEAR */
    TC1_FOC1A_SET_gc   = (0x80), /* Force Output Compare for channel A - SET */
} TC1_FOC1A_t;

/* Force Output Compare for channel B */
typedef enum TC1_FOC1B_enum
{
    TC1_FOC1B_CLEAR_gc = (0x00), /* Force Output Compare for channel B - CLEAR */
    TC1_FOC1B_SET_gc   = (0x40), /* Force Output Compare for channel B - SET */
} TC1_FOC1B_t;

/* Force Output Compare for channel C */
typedef enum TC1_FOC1C_enum
{
    TC1_FOC1C_CLEAR_gc = (0x00), /* Force Output Compare for channel C - CLEAR */
    TC1_FOC1C_SET_gc   = (0x20), /* Force Output Compare for channel C - SET */
} TC1_FOC1C_t;

/* Timer/Counter3 Input Capture Interrupt Enable */
typedef enum TC3_TICIE3_enum
{
    TC3_TICIE3_CLEAR_gc = (0x00), /* Timer/Counter3 Input Capture Interrupt Enable - CLEAR */
    TC3_TICIE3_SET_gc   = (0x20), /* Timer/Counter3 Input Capture Interrupt Enable - SET */
} TC3_TICIE3_t;

/* Timer/Counter3 Output CompareA Match Interrupt Enable */
typedef enum TC3_OCIE3A_enum
{
    TC3_OCIE3A_CLEAR_gc = (0x00), /* Timer/Counter3 Output CompareA Match Interrupt Enable - CLEAR */
    TC3_OCIE3A_SET_gc   = (0x10), /* Timer/Counter3 Output CompareA Match Interrupt Enable - SET */
} TC3_OCIE3A_t;

/* Timer/Counter3 Output CompareB Match Interrupt Enable */
typedef enum TC3_OCIE3B_enum
{
    TC3_OCIE3B_CLEAR_gc = (0x00), /* Timer/Counter3 Output CompareB Match Interrupt Enable - CLEAR */
    TC3_OCIE3B_SET_gc   = (0x08), /* Timer/Counter3 Output CompareB Match Interrupt Enable - SET */
} TC3_OCIE3B_t;

/* Timer/Counter3 Overflow Interrupt Enable */
typedef enum TC3_TOIE3_enum
{
    TC3_TOIE3_CLEAR_gc = (0x00), /* Timer/Counter3 Overflow Interrupt Enable - CLEAR */
    TC3_TOIE3_SET_gc   = (0x04), /* Timer/Counter3 Overflow Interrupt Enable - SET */
} TC3_TOIE3_t;

/* Timer/Counter3, Output Compare Match Interrupt Enable */
typedef enum TC3_OCIE3C_enum
{
    TC3_OCIE3C_CLEAR_gc = (0x00), /* Timer/Counter3, Output Compare Match Interrupt Enable - CLEAR */
    TC3_OCIE3C_SET_gc   = (0x02), /* Timer/Counter3, Output Compare Match Interrupt Enable - SET */
} TC3_OCIE3C_t;

/* Input Capture Flag 3 */
typedef enum TC3_ICF3_enum
{
    TC3_ICF3_CLEAR_gc = (0x00), /* Input Capture Flag 3 - CLEAR */
    TC3_ICF3_SET_gc   = (0x20), /* Input Capture Flag 3 - SET */
} TC3_ICF3_t;

/* Output Compare Flag 3A */
typedef enum TC3_OCF3A_enum
{
    TC3_OCF3A_CLEAR_gc = (0x00), /* Output Compare Flag 3A - CLEAR */
    TC3_OCF3A_SET_gc   = (0x10), /* Output Compare Flag 3A - SET */
} TC3_OCF3A_t;

/* Output Compare Flag 3B */
typedef enum TC3_OCF3B_enum
{
    TC3_OCF3B_CLEAR_gc = (0x00), /* Output Compare Flag 3B - CLEAR */
    TC3_OCF3B_SET_gc   = (0x08), /* Output Compare Flag 3B - SET */
} TC3_OCF3B_t;

/* Timer/Counter3 Overflow Flag */
typedef enum TC3_TOV3_enum
{
    TC3_TOV3_CLEAR_gc = (0x00), /* Timer/Counter3 Overflow Flag - CLEAR */
    TC3_TOV3_SET_gc   = (0x04), /* Timer/Counter3 Overflow Flag - SET */
} TC3_TOV3_t;

/* Timer/Counter3 Output Compare C Match Flag */
typedef enum TC3_OCF3C_enum
{
    TC3_OCF3C_CLEAR_gc = (0x00), /* Timer/Counter3 Output Compare C Match Flag - CLEAR */
    TC3_OCF3C_SET_gc   = (0x02), /* Timer/Counter3 Output Compare C Match Flag - SET */
} TC3_OCF3C_t;

/* Timer/Counter Synchronization Mode */
typedef enum TC3_TSM_enum
{
    TC3_TSM_CLEAR_gc = (0x00), /* Timer/Counter Synchronization Mode - CLEAR */
    TC3_TSM_SET_gc   = (0x80), /* Timer/Counter Synchronization Mode - SET */
} TC3_TSM_t;

/* Prescaler Reset, T/C3, T/C2, T/C1 */
typedef enum TC3_PSR321_enum
{
    TC3_PSR321_CLEAR_gc = (0x00), /* Prescaler Reset, T/C3, T/C2, T/C1 - CLEAR */
    TC3_PSR321_SET_gc   = (0x01), /* Prescaler Reset, T/C3, T/C2, T/C1 - SET */
} TC3_PSR321_t;

/* Compare Output Mode 3A, bits */
#define TC3_TCCR3A_COM3A_gc(x) ((x<<6) & 0xC0)

/* Compare Output Mode 3B, bits */
#define TC3_TCCR3A_COM3B_gc(x) ((x<<4) & 0x30)

/* Compare Output Mode 3C, bits */
#define TC3_TCCR3A_COM3C_gc(x) ((x<<2) & 0x0C)

/* Waveform Generation Mode Bits */
#define TC3_TCCR3A_WGM3_gc(x) (x & 0x03)

/* Input Capture 3  Noise Canceler */
typedef enum TC3_ICNC3_enum
{
    TC3_ICNC3_CLEAR_gc = (0x00), /* Input Capture 3  Noise Canceler - CLEAR */
    TC3_ICNC3_SET_gc   = (0x80), /* Input Capture 3  Noise Canceler - SET */
} TC3_ICNC3_t;

/* Input Capture 3 Edge Select */
typedef enum TC3_ICES3_enum
{
    TC3_ICES3_CLEAR_gc = (0x00), /* Input Capture 3 Edge Select - CLEAR */
    TC3_ICES3_SET_gc   = (0x40), /* Input Capture 3 Edge Select - SET */
} TC3_ICES3_t;

/* Waveform Generation Mode */
#define TC3_TCCR3B_WGM3_gc(x) ((x<<3) & 0x18)

/* Clock Select3 bits */
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

/* Force Output Compare for channel A */
typedef enum TC3_FOC3A_enum
{
    TC3_FOC3A_CLEAR_gc = (0x00), /* Force Output Compare for channel A - CLEAR */
    TC3_FOC3A_SET_gc   = (0x80), /* Force Output Compare for channel A - SET */
} TC3_FOC3A_t;

/* Force Output Compare for channel B */
typedef enum TC3_FOC3B_enum
{
    TC3_FOC3B_CLEAR_gc = (0x00), /* Force Output Compare for channel B - CLEAR */
    TC3_FOC3B_SET_gc   = (0x40), /* Force Output Compare for channel B - SET */
} TC3_FOC3B_t;

/* Force Output Compare for channel C */
typedef enum TC3_FOC3C_enum
{
    TC3_FOC3C_CLEAR_gc = (0x00), /* Force Output Compare for channel C - CLEAR */
    TC3_FOC3C_SET_gc   = (0x20), /* Force Output Compare for channel C - SET */
} TC3_FOC3C_t;

/*
--------------------------------------------------------------------------------
TC8 - Timer/Counter, 8-bit
--------------------------------------------------------------------------------
*/

typedef struct TC2_struct
{
    register8_t rsv_0x00[67]; /* RESERVED REGISTER BLOCK */
    register8_t OCR2;         /* Output Compare Register */
    register8_t TCNT2;        /* Timer/Counter Register */
    register8_t TCCR2;        /* Timer/Counter Control Register */
    register8_t rsv_0x46[16]; /* RESERVED REGISTER BLOCK */
    register8_t TIFR;         /* Timer/Counter Interrupt Flag Register */
    register8_t TIMSK;       
} TC2_t;


/* Force Output Compare */
typedef enum TC2_FOC2_enum
{
    TC2_FOC2_CLEAR_gc = (0x00), /* Force Output Compare - CLEAR */
    TC2_FOC2_SET_gc   = (0x80), /* Force Output Compare - SET */
} TC2_FOC2_t;

/* Wafeform Generation Mode */
typedef enum TC2_WGM20_enum
{
    TC2_WGM20_VAL_0x00_gc = (0x00<<6), /* Normal */
    TC2_WGM20_VAL_0x02_gc = (0x02<<6), /* PWM, Phase Correct */
    TC2_WGM20_VAL_0x01_gc = (0x01<<6), /* CTC */
    TC2_WGM20_VAL_0x03_gc = (0x03<<6), /* Fast PWM */
} TC2_WGM20_t;

/* Compare Match Output Mode */
#define TC2_TCCR2_COM2_gc(x) ((x<<4) & 0x30)

/* Waveform Generation Mode */
typedef enum TC2_WGM21_enum
{
    TC2_WGM21_CLEAR_gc = (0x00), /* Waveform Generation Mode - CLEAR */
    TC2_WGM21_SET_gc   = (0x08), /* Waveform Generation Mode - SET */
} TC2_WGM21_t;

/* Clock Select */
typedef enum TC2_CS2_enum
{
    TC2_CS2_VAL_0x00_gc = (0x00), /* No Clock Source (Stopped) */
    TC2_CS2_VAL_0x01_gc = (0x01), /* Running, No Prescaling */
    TC2_CS2_VAL_0x02_gc = (0x02), /* Running, CLK/8 */
    TC2_CS2_VAL_0x03_gc = (0x03), /* Running, CLK/64 */
    TC2_CS2_VAL_0x04_gc = (0x04), /* Running, CLK/256 */
    TC2_CS2_VAL_0x05_gc = (0x05), /* Running, CLK/1024 */
    TC2_CS2_VAL_0x06_gc = (0x06), /* Running, ExtClk Tx Falling Edge */
    TC2_CS2_VAL_0x07_gc = (0x07), /* Running, ExtClk Tx Rising Edge */
} TC2_CS2_t;

/* Output Compare Flag 2 */
typedef enum TC2_OCF2_enum
{
    TC2_OCF2_CLEAR_gc = (0x00), /* Output Compare Flag 2 - CLEAR */
    TC2_OCF2_SET_gc   = (0x80), /* Output Compare Flag 2 - SET */
} TC2_OCF2_t;

/* Timer/Counter2 Overflow Flag */
typedef enum TC2_TOV2_enum
{
    TC2_TOV2_CLEAR_gc = (0x00), /* Timer/Counter2 Overflow Flag - CLEAR */
    TC2_TOV2_SET_gc   = (0x40), /* Timer/Counter2 Overflow Flag - SET */
} TC2_TOV2_t;

/* -OCIE2 */
typedef enum TC2_OCIE2_enum
{
    TC2_OCIE2_CLEAR_gc = (0x00), /* -OCIE2 - CLEAR */
    TC2_OCIE2_SET_gc   = (0x80), /* -OCIE2 - SET */
} TC2_OCIE2_t;

/* -TOIE2 */
typedef enum TC2_TOIE2_enum
{
    TC2_TOIE2_CLEAR_gc = (0x00), /* -TOIE2 - CLEAR */
    TC2_TOIE2_SET_gc   = (0x40), /* -TOIE2 - SET */
} TC2_TOIE2_t;

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

/* Watch Dog Timer Prescaler bits */
typedef enum WDT_WDP_enum
{
    WDT_WDP_VAL_0x00_gc = (0x00), /* Oscillator Cycles 16K */
    WDT_WDP_VAL_0x01_gc = (0x01), /* Oscillator Cycles 32K */
    WDT_WDP_VAL_0x02_gc = (0x02), /* Oscillator Cycles 64K */
    WDT_WDP_VAL_0x03_gc = (0x03), /* Oscillator Cycles 128K */
    WDT_WDP_VAL_0x04_gc = (0x04), /* Oscillator Cycles 256K */
    WDT_WDP_VAL_0x05_gc = (0x05), /* Oscillator Cycles 512K */
    WDT_WDP_VAL_0x06_gc = (0x06), /* Oscillator Cycles 1024K */
    WDT_WDP_VAL_0x07_gc = (0x07), /* Oscillator Cycles 2048K */
} WDT_WDP_t;
/*
================================================================================
IO Module Instances. Mapped to memory.
================================================================================
*/

#define AC        (*(AC_t *) 0x0000)        /* Analog Comparator */
#define ADC       (*(ADC_t *) 0x0000)       /* Analog-to-Digital Converter */
#define SPI       (*(SPI_t *) 0x0000)       /* Serial Peripheral Interface */
#define TWI       (*(TWI_t *) 0x0000)       /* Two Wire Serial Interface */
#define USART0    (*(USART0_t *) 0x0000)    /* USART */
#define USART1    (*(USART1_t *) 0x0000)    /* USART */
#define CPU       (*(CPU_t *) 0x0000)       /* CPU Registers */
#define BOOT_LOAD (*(BOOT_LOAD_t *) 0x0000) /* Bootloader */
#define JTAG      (*(JTAG_t *) 0x0000)      /* JTAG Interface */
#define MISC      (*(MISC_t *) 0x0000)      /* Other Registers */
#define EXINT     (*(EXINT_t *) 0x0000)     /* External Interrupts */
#define EEPROM    (*(EEPROM_t *) 0x0000)    /* EEPROM */
#define PORTA     (*(PORTA_t *) 0x0000)     /* I/O Port */
#define PORTB     (*(PORTB_t *) 0x0000)     /* I/O Port */
#define PORTC     (*(PORTC_t *) 0x0000)     /* I/O Port */
#define PORTD     (*(PORTD_t *) 0x0000)     /* I/O Port */
#define PORTE     (*(PORTE_t *) 0x0000)     /* I/O Port */
#define PORTF     (*(PORTF_t *) 0x0000)     /* I/O Port */
#define PORTG     (*(PORTG_t *) 0x0000)     /* I/O Port */
#define TC0       (*(TC0_t *) 0x0000)       /* Timer/Counter, 8-bit Async */
#define TC1       (*(TC1_t *) 0x0000)       /* Timer/Counter, 16-bit */
#define TC3       (*(TC3_t *) 0x0000)       /* Timer/Counter, 16-bit */
#define TC2       (*(TC2_t *) 0x0000)       /* Timer/Counter, 8-bit */
#define WDT       (*(WDT_t *) 0x0000)       /* Watchdog Timer */
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


/* ATmega103 Compatibility Mode */
#define FUSE_M103C_CLEAR_gc (0x00) /* ATmega103 Compatibility Mode - CLEAR */
#define FUSE_M103C_SET_gc   (0x02) /* ATmega103 Compatibility Mode - SET */


/* Watchdog Timer always on */
#define FUSE_WDTON_CLEAR_gc (0x00) /* Watchdog Timer always on - CLEAR */
#define FUSE_WDTON_SET_gc   (0x01) /* Watchdog Timer always on - SET */


/* On-Chip Debug Enabled */
#define FUSE_OCDEN_CLEAR_gc (0x00) /* On-Chip Debug Enabled - CLEAR */
#define FUSE_OCDEN_SET_gc   (0x80) /* On-Chip Debug Enabled - SET */


/* JTAG Interface Enabled */
#define FUSE_JTAGEN_CLEAR_gc (0x00) /* JTAG Interface Enabled - CLEAR */
#define FUSE_JTAGEN_SET_gc   (0x40) /* JTAG Interface Enabled - SET */


/* Serial program downloading (SPI) enabled */
#define FUSE_SPIEN_CLEAR_gc (0x00) /* Serial program downloading (SPI) enabled - CLEAR */
#define FUSE_SPIEN_SET_gc   (0x20) /* Serial program downloading (SPI) enabled - SET */


/* Preserve EEPROM through the Chip Erase cycle */
#define FUSE_EESAVE_CLEAR_gc (0x00) /* Preserve EEPROM through the Chip Erase cycle - CLEAR */
#define FUSE_EESAVE_SET_gc   (0x08) /* Preserve EEPROM through the Chip Erase cycle - SET */


/* Select Boot Size */
#define FUSE_BOOTSZ_512W_7E00_gc  (0x03<<1) /* Boot Flash size=512 words Boot address=$7E00 */
#define FUSE_BOOTSZ_1024W_7C00_gc (0x02<<1) /* Boot Flash size=1024 words Boot address=$7C00 */
#define FUSE_BOOTSZ_2048W_7800_gc (0x01<<1) /* Boot Flash size=2048 words Boot address=$7800 */
#define FUSE_BOOTSZ_4096W_7000_gc (0x00<<1) /* Boot Flash size=4096 words Boot address=$7000 */


/* Boot Reset vector Enabled */
#define FUSE_BOOTRST_CLEAR_gc (0x00) /* Boot Reset vector Enabled - CLEAR */
#define FUSE_BOOTRST_SET_gc   (0x01) /* Boot Reset vector Enabled - SET */


/* CKOPT fuse (operation dependent of CKSEL fuses) */
#define FUSE_CKOPT_CLEAR_gc (0x00) /* CKOPT fuse (operation dependent of CKSEL fuses) - CLEAR */
#define FUSE_CKOPT_SET_gc   (0x10) /* CKOPT fuse (operation dependent of CKSEL fuses) - SET */


/* Brownout detector trigger level */
#define FUSE_BODLEVEL_4V0_gc (0x00<<7) /* Brown-out detection at VCC=4.0 V */
#define FUSE_BODLEVEL_2V7_gc (0x01<<7) /* Brown-out detection at VCC=2.7 V */


/* Brown-out detection enabled */
#define FUSE_BODEN_CLEAR_gc (0x00) /* Brown-out detection enabled - CLEAR */
#define FUSE_BODEN_SET_gc   (0x40) /* Brown-out detection enabled - SET */


/* Select Clock Source */
#define FUSE_SUT_CKSEL_EXTCLK_6CK_0MS_gc                (0x00) /* Ext. Clock; Start-up time: 6 CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTCLK_6CK_4MS_gc                (0x10) /* Ext. Clock; Start-up time: 6 CK + 4 ms */
#define FUSE_SUT_CKSEL_EXTCLK_6CK_64MS_gc               (0x20) /* Ext. Clock; Start-up time: 6 CK + 64 ms */
#define FUSE_SUT_CKSEL_INTRCOSC_1MHZ_6CK_0MS_gc         (0x01) /* Int. RC Osc. 1 MHz; Start-up time: 6 CK + 0 ms */
#define FUSE_SUT_CKSEL_INTRCOSC_1MHZ_6CK_4MS_gc         (0x11) /* Int. RC Osc. 1 MHz; Start-up time: 6 CK + 4 ms */
#define FUSE_SUT_CKSEL_INTRCOSC_1MHZ_6CK_64MS_gc        (0x21) /* Int. RC Osc. 1 MHz; Start-up time: 6 CK + 64 ms */
#define FUSE_SUT_CKSEL_INTRCOSC_2MHZ_6CK_0MS_gc         (0x02) /* Int. RC Osc. 2 MHz; Start-up time: 6 CK + 0 ms */
#define FUSE_SUT_CKSEL_INTRCOSC_2MHZ_6CK_4MS_gc         (0x12) /* Int. RC Osc. 2 MHz; Start-up time: 6 CK + 4 ms */
#define FUSE_SUT_CKSEL_INTRCOSC_2MHZ_6CK_64MS_gc        (0x22) /* Int. RC Osc. 2 MHz; Start-up time: 6 CK + 64 ms */
#define FUSE_SUT_CKSEL_INTRCOSC_4MHZ_6CK_0MS_gc         (0x03) /* Int. RC Osc. 4 MHz; Start-up time: 6 CK + 0 ms */
#define FUSE_SUT_CKSEL_INTRCOSC_4MHZ_6CK_4MS_gc         (0x13) /* Int. RC Osc. 4 MHz; Start-up time: 6 CK + 4 ms */
#define FUSE_SUT_CKSEL_INTRCOSC_4MHZ_6CK_64MS_gc        (0x23) /* Int. RC Osc. 4 MHz; Start-up time: 6 CK + 64 ms */
#define FUSE_SUT_CKSEL_INTRCOSC_8MHZ_6CK_0MS_gc         (0x04) /* Int. RC Osc. 8 MHz; Start-up time: 6 CK + 0 ms */
#define FUSE_SUT_CKSEL_INTRCOSC_8MHZ_6CK_4MS_gc         (0x14) /* Int. RC Osc. 8 MHz; Start-up time: 6 CK + 4 ms */
#define FUSE_SUT_CKSEL_INTRCOSC_8MHZ_6CK_64MS_gc        (0x24) /* Int. RC Osc. 8 MHz; Start-up time: 6 CK + 64 ms */
#define FUSE_SUT_CKSEL_EXTRCOSC_XX_0MHZ9_18CK_0MS_gc    (0x05) /* Ext. RC Osc.         -  0.9 MHz; Start-up time: 18 CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTRCOSC_XX_0MHZ9_18CK_4MS_gc    (0x15) /* Ext. RC Osc.         -  0.9 MHz; Start-up time: 18 CK + 4 ms */
#define FUSE_SUT_CKSEL_EXTRCOSC_XX_0MHZ9_18CK_64MS_gc   (0x25) /* Ext. RC Osc.         -  0.9 MHz; Start-up time: 18 CK + 64 ms */
#define FUSE_SUT_CKSEL_EXTRCOSC_XX_0MHZ9_6CK_4MS_gc     (0x35) /* Ext. RC Osc.         -  0.9 MHz; Start-up time: 6 CK + 4 ms */
#define FUSE_SUT_CKSEL_EXTRCOSC_0MHZ9_3MHZ_18CK_0MS_gc  (0x06) /* Ext. RC Osc. 0.9 MHz -  3.0 MHz; Start-up time: 18 CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTRCOSC_0MHZ9_3MHZ_18CK_4MS_gc  (0x16) /* Ext. RC Osc. 0.9 MHz -  3.0 MHz; Start-up time: 18 CK + 4 ms */
#define FUSE_SUT_CKSEL_EXTRCOSC_0MHZ9_3MHZ_18CK_64MS_gc (0x26) /* Ext. RC Osc. 0.9 MHz -  3.0 MHz; Start-up time: 18 CK + 64 ms */
#define FUSE_SUT_CKSEL_EXTRCOSC_0MHZ9_3MHZ_6CK_4MS_gc   (0x36) /* Ext. RC Osc. 0.9 MHz -  3.0 MHz; Start-up time: 6 CK + 4 ms */
#define FUSE_SUT_CKSEL_EXTRCOSC_3MHZ_8MHZ_18CK_0MS_gc   (0x07) /* Ext. RC Osc. 3.0 MHz -  8.0 MHz; Start-up time: 18 CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTRCOSC_3MHZ_8MHZ_18CK_4MS_gc   (0x17) /* Ext. RC Osc. 3.0 MHz -  8.0 MHz; Start-up time: 18 CK + 4 ms */
#define FUSE_SUT_CKSEL_EXTRCOSC_3MHZ_8MHZ_18CK_64MS_gc  (0x27) /* Ext. RC Osc. 3.0 MHz -  8.0 MHz; Start-up time: 18 CK + 64 ms */
#define FUSE_SUT_CKSEL_EXTRCOSC_3MHZ_8MHZ_6CK_4MS_gc    (0x37) /* Ext. RC Osc. 3.0 MHz -  8.0 MHz; Start-up time: 6 CK + 4 ms */
#define FUSE_SUT_CKSEL_EXTRCOSC_8MHZ_12MHZ_18CK_0MS_gc  (0x08) /* Ext. RC Osc. 8.0 MHz - 12.0 MHz; Start-up time: 18 CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTRCOSC_8MHZ_12MHZ_18CK_4MS_gc  (0x18) /* Ext. RC Osc. 8.0 MHz - 12.0 MHz; Start-up time: 18 CK + 4 ms */
#define FUSE_SUT_CKSEL_EXTRCOSC_8MHZ_12MHZ_18CK_64MS_gc (0x28) /* Ext. RC Osc. 8.0 MHz - 12.0 MHz; Start-up time: 18 CK + 64 ms */
#define FUSE_SUT_CKSEL_EXTRCOSC_8MHZ_12MHZ_6CK_4MS_gc   (0x38) /* Ext. RC Osc. 8.0 MHz - 12.0 MHz; Start-up time: 6 CK + 4 ms */
#define FUSE_SUT_CKSEL_EXTLOFXTAL_1KCK_4MS_gc           (0x09) /* Ext. Low-Freq. Crystal; Start-up time: 1K CK + 4 ms */
#define FUSE_SUT_CKSEL_EXTLOFXTAL_1KCK_64MS_gc          (0x19) /* Ext. Low-Freq. Crystal; Start-up time: 1K CK + 64 ms */
#define FUSE_SUT_CKSEL_EXTLOFXTAL_32KCK_64MS_gc         (0x29) /* Ext. Low-Freq. Crystal; Start-up time: 32K CK + 64 ms */
#define FUSE_SUT_CKSEL_EXTLOFXTALRES_258CK_4MS_gc       (0x0A) /* Ext. Crystal/Resonator Low Freq.; Start-up time: 258 CK + 4 ms */
#define FUSE_SUT_CKSEL_EXTLOFXTALRES_258CK_64MS_gc      (0x1A) /* Ext. Crystal/Resonator Low Freq.; Start-up time: 258 CK + 64 ms */
#define FUSE_SUT_CKSEL_EXTLOFXTALRES_1KCK_0MS_gc        (0x2A) /* Ext. Crystal/Resonator Low Freq.; Start-up time: 1K CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTLOFXTALRES_1KCK_4MS_gc        (0x3A) /* Ext. Crystal/Resonator Low Freq.; Start-up time: 1K CK + 4 ms */
#define FUSE_SUT_CKSEL_EXTLOFXTALRES_1KCK_64MS_gc       (0x0B) /* Ext. Crystal/Resonator Low Freq.; Start-up time: 1K CK + 64 ms */
#define FUSE_SUT_CKSEL_EXTLOFXTALRES_16KCK_0MS_gc       (0x1B) /* Ext. Crystal/Resonator Low Freq.; Start-up time: 16K CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTLOFXTALRES_16KCK_4MS_gc       (0x2B) /* Ext. Crystal/Resonator Low Freq.; Start-up time: 16K CK + 4 ms */
#define FUSE_SUT_CKSEL_EXTLOFXTALRES_16KCK_64MS_gc      (0x3B) /* Ext. Crystal/Resonator Low Freq.; Start-up time: 16K CK + 64 ms */
#define FUSE_SUT_CKSEL_EXTMEDFXTALRES_258CK_4MS_gc      (0x0C) /* Ext. Crystal/Resonator Medium Freq.; Start-up time: 258 CK + 4 ms */
#define FUSE_SUT_CKSEL_EXTMEDFXTALRES_258CK_64MS_gc     (0x1C) /* Ext. Crystal/Resonator Medium Freq.; Start-up time: 258 CK + 64 ms */
#define FUSE_SUT_CKSEL_EXTMEDFXTALRES_1KCK_0MS_gc       (0x2C) /* Ext. Crystal/Resonator Medium Freq.; Start-up time: 1K CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTMEDFXTALRES_1KCK_4MS_gc       (0x3C) /* Ext. Crystal/Resonator Medium Freq.; Start-up time: 1K CK + 4 ms */
#define FUSE_SUT_CKSEL_EXTMEDFXTALRES_1KCK_64MS_gc      (0x0D) /* Ext. Crystal/Resonator Medium Freq.; Start-up time: 1K CK + 64 ms */
#define FUSE_SUT_CKSEL_EXTMEDFXTALRES_16KCK_0MS_gc      (0x1D) /* Ext. Crystal/Resonator Medium Freq.; Start-up time: 16K CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTMEDFXTALRES_16KCK_4MS_gc      (0x2D) /* Ext. Crystal/Resonator Medium Freq.; Start-up time: 16K CK + 4 ms */
#define FUSE_SUT_CKSEL_EXTMEDFXTALRES_16KCK_64MS_gc     (0x3D) /* Ext. Crystal/Resonator Medium Freq.; Start-up time: 16K CK + 64 ms */
#define FUSE_SUT_CKSEL_EXTHIFXTALRES_258CK_4MS_gc       (0x0E) /* Ext. Crystal/Resonator High Freq.; Start-up time: 258 CK + 4 ms */
#define FUSE_SUT_CKSEL_EXTHIFXTALRES_258CK_64MS_gc      (0x1E) /* Ext. Crystal/Resonator High Freq.; Start-up time: 258 CK + 64 ms */
#define FUSE_SUT_CKSEL_EXTHIFXTALRES_1KCK_0MS_gc        (0x2E) /* Ext. Crystal/Resonator High Freq.; Start-up time: 1K CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTHIFXTALRES_1KCK_4MS_gc        (0x3E) /* Ext. Crystal/Resonator High Freq.; Start-up time: 1K CK + 4 ms */
#define FUSE_SUT_CKSEL_EXTHIFXTALRES_1KCK_64MS_gc       (0x0F) /* Ext. Crystal/Resonator High Freq.; Start-up time: 1K CK + 64 ms */
#define FUSE_SUT_CKSEL_EXTHIFXTALRES_16KCK_0MS_gc       (0x1F) /* Ext. Crystal/Resonator High Freq.; Start-up time: 16K CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTHIFXTALRES_16KCK_4MS_gc       (0x2F) /* Ext. Crystal/Resonator High Freq.; Start-up time: 16K CK + 4 ms */
#define FUSE_SUT_CKSEL_EXTHIFXTALRES_16KCK_64MS_gc      (0x3F) /* Ext. Crystal/Resonator High Freq.; Start-up time: 16K CK + 64 ms */


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
#define AC_ACME_SET_gc   (0x08) /* Analog Comparator Multiplexer Enable - SET */


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


/* ADC Auto Trigger Source bits */
#define ADC_ADTS_VAL_0x00_gc (0x00) /* Free Running mode */
#define ADC_ADTS_VAL_0x01_gc (0x01) /* Analog Comparator */
#define ADC_ADTS_VAL_0x02_gc (0x02) /* External Interrupt Request 0 */
#define ADC_ADTS_VAL_0x03_gc (0x03) /* Timer/Counter0 Compare Match A */
#define ADC_ADTS_VAL_0x04_gc (0x04) /* Timer/Counter0 Overflow */
#define ADC_ADTS_VAL_0x05_gc (0x05) /* Timer/Counter1 Compare Match B */
#define ADC_ADTS_VAL_0x06_gc (0x06) /* Timer/Counter1 Overflow */
#define ADC_ADTS_VAL_0x07_gc (0x07) /* Timer/Counter1 Capture Event */


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
#define USART0_UMSEL0_VAL_0x00_gc (0x00<<6) /* Asynchronous Operation */
#define USART0_UMSEL0_VAL_0x01_gc (0x01<<6) /* Synchronous Operation */


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
#define USART1_UMSEL1_VAL_0x00_gc (0x00<<6) /* Asynchronous Operation */
#define USART1_UMSEL1_VAL_0x01_gc (0x01<<6) /* Synchronous Operation */


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


/* External SRAM Enable */
#define CPU_SRE_CLEAR_gc (0x00) /* External SRAM Enable - CLEAR */
#define CPU_SRE_SET_gc   (0x80) /* External SRAM Enable - SET */


/* External SRAM Wait State Select */
#define CPU_SRW10_CLEAR_gc (0x00) /* External SRAM Wait State Select - CLEAR */
#define CPU_SRW10_SET_gc   (0x40) /* External SRAM Wait State Select - SET */


/* Sleep Enable */
#define CPU_SE_CLEAR_gc (0x00) /* Sleep Enable - CLEAR */
#define CPU_SE_SET_gc   (0x20) /* Sleep Enable - SET */


/* Sleep Mode Select */
#define CPU_MCUCR_SM_gc(x) ((x<<3) & 0x18)

/* Sleep Mode Select */
#define CPU_SM2_IDLE_gc   (0x00<<2) /* Idle */
#define CPU_SM2_ADC_gc    (0x02<<2) /* ADC Noise Reduction (If Available) */
#define CPU_SM2_PDOWN_gc  (0x04<<2) /* Power Down */
#define CPU_SM2_PSAVE_gc  (0x06<<2) /* Power Save */
#define CPU_SM2_STDBY_gc  (0x05<<2) /* Standby */
#define CPU_SM2_ESTDBY_gc (0x07<<2) /* Extended Standby */


/* Interrupt Vector Select */
#define CPU_IVSEL_CLEAR_gc (0x00) /* Interrupt Vector Select - CLEAR */
#define CPU_IVSEL_SET_gc   (0x02) /* Interrupt Vector Select - SET */


/* Interrupt Vector Change Enable */
#define CPU_IVCE_CLEAR_gc (0x00) /* Interrupt Vector Change Enable - CLEAR */
#define CPU_IVCE_SET_gc   (0x01) /* Interrupt Vector Change Enable - SET */


/* JTAG Interface Disable */
#define CPU_JTD_CLEAR_gc (0x00) /* JTAG Interface Disable - CLEAR */
#define CPU_JTD_SET_gc   (0x80) /* JTAG Interface Disable - SET */


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


/* Wait state page limit */
#define CPU_SRL_VAL_0x00_gc (0x00<<4) /* LS = N/A, US = 0x1100 - 0xFFFF */
#define CPU_SRL_VAL_0x01_gc (0x01<<4) /* LS = 0x1100 - 0x1FFF, US = 0x2000 - 0xFFFF */
#define CPU_SRL_VAL_0x02_gc (0x02<<4) /* LS = 0x1100 - 0x3FFF, US = 0x4000 - 0xFFFF */
#define CPU_SRL_VAL_0x03_gc (0x03<<4) /* LS = 0x1100 - 0x5FFF, US = 0x6000 - 0xFFFF */
#define CPU_SRL_VAL_0x04_gc (0x04<<4) /* LS = 0x1100 - 0x7FFF, US = 0x8000 - 0xFFFF */
#define CPU_SRL_VAL_0x05_gc (0x05<<4) /* LS = 0x1100 - 0x9FFF, US = 0xA000 - 0xFFFF */
#define CPU_SRL_VAL_0x06_gc (0x06<<4) /* LS = 0x1100 - 0xBFFF, US = 0xC000 - 0xFFFF */
#define CPU_SRL_VAL_0x07_gc (0x07<<4) /* LS = 0x1100 - 0xDFFF, US = 0xE000 - 0xFFFF */


/* Wait state select bit lower page */
#define CPU_SRW0_VAL_0x00_gc (0x00<<2) /* No wait-states */
#define CPU_SRW0_VAL_0x01_gc (0x01<<2) /* Wait one cycle during read/write strobe */
#define CPU_SRW0_VAL_0x02_gc (0x02<<2) /* Wait two cycles during read/write strobe */
#define CPU_SRW0_VAL_0x03_gc (0x03<<2) /* Wait two cycles during read/write and wait one cycle before driving out new address */


/* Wait state select bit upper page */
#define CPU_SRW11_CLEAR_gc (0x00) /* Wait state select bit upper page - CLEAR */
#define CPU_SRW11_SET_gc   (0x02) /* Wait state select bit upper page - SET */


/* External Memory Bus Keeper Enable */
#define CPU_XMBK_CLEAR_gc (0x00) /* External Memory Bus Keeper Enable - CLEAR */
#define CPU_XMBK_SET_gc   (0x80) /* External Memory Bus Keeper Enable - SET */


/* External Memory High Mask */
#define CPU_XMCRB_XMM_gc(x) (x & 0x07)

/* XTAL Divide Enable */
#define CPU_XDIVEN_CLEAR_gc (0x00) /* XTAL Divide Enable - CLEAR */
#define CPU_XDIVEN_SET_gc   (0x80) /* XTAL Divide Enable - SET */


/* XTAl Divide Select Bits */
#define CPU_XDIV_XDIV_gc(x) (x & 0x7F)

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
MISC - Other Registers
--------------------------------------------------------------------------------
*/


/* Timer/Counter Synchronization Mode */
#define MISC_TSM_CLEAR_gc (0x00) /* Timer/Counter Synchronization Mode - CLEAR */
#define MISC_TSM_SET_gc   (0x80) /* Timer/Counter Synchronization Mode - SET */


/* Analog Comparator Multiplexer Enable */
#define MISC_ACME_CLEAR_gc (0x00) /* Analog Comparator Multiplexer Enable - CLEAR */
#define MISC_ACME_SET_gc   (0x08) /* Analog Comparator Multiplexer Enable - SET */


/* Pull Up Disable */
#define MISC_PUD_CLEAR_gc (0x00) /* Pull Up Disable - CLEAR */
#define MISC_PUD_SET_gc   (0x04) /* Pull Up Disable - SET */


/* Prescaler Reset Timer/Counter0 */
#define MISC_PSR0_CLEAR_gc (0x00) /* Prescaler Reset Timer/Counter0 - CLEAR */
#define MISC_PSR0_SET_gc   (0x02) /* Prescaler Reset Timer/Counter0 - SET */


/* Prescaler Reset Timer/Counter3, Timer/Counter2, and Timer/Counter1 */
#define MISC_PSR321_CLEAR_gc (0x00) /* Prescaler Reset Timer/Counter3, Timer/Counter2, and Timer/Counter1 - CLEAR */
#define MISC_PSR321_SET_gc   (0x01) /* Prescaler Reset Timer/Counter3, Timer/Counter2, and Timer/Counter1 - SET */


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
EEPROM - EEPROM
--------------------------------------------------------------------------------
*/


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
TC8_ASYNC - Timer/Counter, 8-bit Async
--------------------------------------------------------------------------------
*/


/* Force Output Compare */
#define TC0_FOC0_CLEAR_gc (0x00) /* Force Output Compare - CLEAR */
#define TC0_FOC0_SET_gc   (0x80) /* Force Output Compare - SET */


/* Waveform Generation Mode 0 */
#define TC0_WGM00_VAL_0x00_gc (0x00<<6) /* Normal */
#define TC0_WGM00_VAL_0x02_gc (0x02<<6) /* PWM, Phase Correct */
#define TC0_WGM00_VAL_0x01_gc (0x01<<6) /* CTC */
#define TC0_WGM00_VAL_0x03_gc (0x03<<6) /* Fast PWM */


/* Compare Match Output Modes */
#define TC0_TCCR0_COM0_gc(x) ((x<<4) & 0x30)

/* Waveform Generation Mode 1 */
#define TC0_WGM01_CLEAR_gc (0x00) /* Waveform Generation Mode 1 - CLEAR */
#define TC0_WGM01_SET_gc   (0x08) /* Waveform Generation Mode 1 - SET */


/* Clock Selects */
#define TC0_CS0_VAL_0x00_gc (0x00) /* No Clock Source (Stopped) */
#define TC0_CS0_VAL_0x01_gc (0x01) /* Running, No Prescaling */
#define TC0_CS0_VAL_0x02_gc (0x02) /* Running, CLK/8 */
#define TC0_CS0_VAL_0x03_gc (0x03) /* Running, CLK/32 */
#define TC0_CS0_VAL_0x04_gc (0x04) /* Running, CLK/64 */
#define TC0_CS0_VAL_0x05_gc (0x05) /* Running, CLK/128 */
#define TC0_CS0_VAL_0x06_gc (0x06) /* Running, CLK/256 */
#define TC0_CS0_VAL_0x07_gc (0x07) /* Running, CLK/1024 */


/* Asynchronus Timer/Counter 0 */
#define TC0_AS0_CLEAR_gc (0x00) /* Asynchronus Timer/Counter 0 - CLEAR */
#define TC0_AS0_SET_gc   (0x08) /* Asynchronus Timer/Counter 0 - SET */


/* Timer/Counter0 Update Busy */
#define TC0_TCN0UB_CLEAR_gc (0x00) /* Timer/Counter0 Update Busy - CLEAR */
#define TC0_TCN0UB_SET_gc   (0x04) /* Timer/Counter0 Update Busy - SET */


/* Output Compare register 0 Busy */
#define TC0_OCR0UB_CLEAR_gc (0x00) /* Output Compare register 0 Busy - CLEAR */
#define TC0_OCR0UB_SET_gc   (0x02) /* Output Compare register 0 Busy - SET */


/* Timer/Counter Control Register 0 Update Busy */
#define TC0_TCR0UB_CLEAR_gc (0x00) /* Timer/Counter Control Register 0 Update Busy - CLEAR */
#define TC0_TCR0UB_SET_gc   (0x01) /* Timer/Counter Control Register 0 Update Busy - SET */


/* Timer/Counter0 Output Compare Match Interrupt register */
#define TC0_OCIE0_CLEAR_gc (0x00) /* Timer/Counter0 Output Compare Match Interrupt register - CLEAR */
#define TC0_OCIE0_SET_gc   (0x02) /* Timer/Counter0 Output Compare Match Interrupt register - SET */


/* Timer/Counter0 Overflow Interrupt Enable */
#define TC0_TOIE0_CLEAR_gc (0x00) /* Timer/Counter0 Overflow Interrupt Enable - CLEAR */
#define TC0_TOIE0_SET_gc   (0x01) /* Timer/Counter0 Overflow Interrupt Enable - SET */


/* Output Compare Flag 0 */
#define TC0_OCF0_CLEAR_gc (0x00) /* Output Compare Flag 0 - CLEAR */
#define TC0_OCF0_SET_gc   (0x02) /* Output Compare Flag 0 - SET */


/* Timer/Counter0 Overflow Flag */
#define TC0_TOV0_CLEAR_gc (0x00) /* Timer/Counter0 Overflow Flag - CLEAR */
#define TC0_TOV0_SET_gc   (0x01) /* Timer/Counter0 Overflow Flag - SET */


/* Timer/Counter Synchronization Mode */
#define TC0_TSM_CLEAR_gc (0x00) /* Timer/Counter Synchronization Mode - CLEAR */
#define TC0_TSM_SET_gc   (0x80) /* Timer/Counter Synchronization Mode - SET */


/* Prescaler Reset Timer/Counter0 */
#define TC0_PSR0_CLEAR_gc (0x00) /* Prescaler Reset Timer/Counter0 - CLEAR */
#define TC0_PSR0_SET_gc   (0x02) /* Prescaler Reset Timer/Counter0 - SET */


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


/* Timer/Counter1 Input Capture Interrupt Enable */
#define TC1_TICIE1_CLEAR_gc (0x00) /* Timer/Counter1 Input Capture Interrupt Enable - CLEAR */
#define TC1_TICIE1_SET_gc   (0x20) /* Timer/Counter1 Input Capture Interrupt Enable - SET */


/* Timer/Counter1 Output CompareA Match Interrupt Enable */
#define TC1_OCIE1A_CLEAR_gc (0x00) /* Timer/Counter1 Output CompareA Match Interrupt Enable - CLEAR */
#define TC1_OCIE1A_SET_gc   (0x10) /* Timer/Counter1 Output CompareA Match Interrupt Enable - SET */


/* Timer/Counter1 Output CompareB Match Interrupt Enable */
#define TC1_OCIE1B_CLEAR_gc (0x00) /* Timer/Counter1 Output CompareB Match Interrupt Enable - CLEAR */
#define TC1_OCIE1B_SET_gc   (0x08) /* Timer/Counter1 Output CompareB Match Interrupt Enable - SET */


/* Timer/Counter1 Overflow Interrupt Enable */
#define TC1_TOIE1_CLEAR_gc (0x00) /* Timer/Counter1 Overflow Interrupt Enable - CLEAR */
#define TC1_TOIE1_SET_gc   (0x04) /* Timer/Counter1 Overflow Interrupt Enable - SET */


/* Timer/Counter 1, Output Compare Match C Interrupt Enable */
#define TC1_OCIE1C_CLEAR_gc (0x00) /* Timer/Counter 1, Output Compare Match C Interrupt Enable - CLEAR */
#define TC1_OCIE1C_SET_gc   (0x01) /* Timer/Counter 1, Output Compare Match C Interrupt Enable - SET */


/* Input Capture Flag 1 */
#define TC1_ICF1_CLEAR_gc (0x00) /* Input Capture Flag 1 - CLEAR */
#define TC1_ICF1_SET_gc   (0x20) /* Input Capture Flag 1 - SET */


/* Output Compare Flag 1A */
#define TC1_OCF1A_CLEAR_gc (0x00) /* Output Compare Flag 1A - CLEAR */
#define TC1_OCF1A_SET_gc   (0x10) /* Output Compare Flag 1A - SET */


/* Output Compare Flag 1B */
#define TC1_OCF1B_CLEAR_gc (0x00) /* Output Compare Flag 1B - CLEAR */
#define TC1_OCF1B_SET_gc   (0x08) /* Output Compare Flag 1B - SET */


/* Timer/Counter1 Overflow Flag */
#define TC1_TOV1_CLEAR_gc (0x00) /* Timer/Counter1 Overflow Flag - CLEAR */
#define TC1_TOV1_SET_gc   (0x04) /* Timer/Counter1 Overflow Flag - SET */


/* Timer/Counter 1, Output Compare C Match Flag */
#define TC1_OCF1C_CLEAR_gc (0x00) /* Timer/Counter 1, Output Compare C Match Flag - CLEAR */
#define TC1_OCF1C_SET_gc   (0x01) /* Timer/Counter 1, Output Compare C Match Flag - SET */


/* Timer/Counter Synchronization Mode */
#define TC1_TSM_CLEAR_gc (0x00) /* Timer/Counter Synchronization Mode - CLEAR */
#define TC1_TSM_SET_gc   (0x80) /* Timer/Counter Synchronization Mode - SET */


/* Prescaler Reset, T/C3, T/C2, T/C1 */
#define TC1_PSR321_CLEAR_gc (0x00) /* Prescaler Reset, T/C3, T/C2, T/C1 - CLEAR */
#define TC1_PSR321_SET_gc   (0x01) /* Prescaler Reset, T/C3, T/C2, T/C1 - SET */


/* Compare Output Mode 1A, bits */
#define TC1_TCCR1A_COM1A_gc(x) ((x<<6) & 0xC0)

/* Compare Output Mode 1B, bits */
#define TC1_TCCR1A_COM1B_gc(x) ((x<<4) & 0x30)

/* Compare Output Mode 1C, bits */
#define TC1_TCCR1A_COM1C_gc(x) ((x<<2) & 0x0C)

/* Waveform Generation Mode Bits */
#define TC1_TCCR1A_WGM1_gc(x) (x & 0x03)

/* Input Capture 1 Noise Canceler */
#define TC1_ICNC1_CLEAR_gc (0x00) /* Input Capture 1 Noise Canceler - CLEAR */
#define TC1_ICNC1_SET_gc   (0x80) /* Input Capture 1 Noise Canceler - SET */


/* Input Capture 1 Edge Select */
#define TC1_ICES1_CLEAR_gc (0x00) /* Input Capture 1 Edge Select - CLEAR */
#define TC1_ICES1_SET_gc   (0x40) /* Input Capture 1 Edge Select - SET */


/* Waveform Generation Mode */
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


/* Force Output Compare for channel A */
#define TC1_FOC1A_CLEAR_gc (0x00) /* Force Output Compare for channel A - CLEAR */
#define TC1_FOC1A_SET_gc   (0x80) /* Force Output Compare for channel A - SET */


/* Force Output Compare for channel B */
#define TC1_FOC1B_CLEAR_gc (0x00) /* Force Output Compare for channel B - CLEAR */
#define TC1_FOC1B_SET_gc   (0x40) /* Force Output Compare for channel B - SET */


/* Force Output Compare for channel C */
#define TC1_FOC1C_CLEAR_gc (0x00) /* Force Output Compare for channel C - CLEAR */
#define TC1_FOC1C_SET_gc   (0x20) /* Force Output Compare for channel C - SET */


/* Timer/Counter3 Input Capture Interrupt Enable */
#define TC3_TICIE3_CLEAR_gc (0x00) /* Timer/Counter3 Input Capture Interrupt Enable - CLEAR */
#define TC3_TICIE3_SET_gc   (0x20) /* Timer/Counter3 Input Capture Interrupt Enable - SET */


/* Timer/Counter3 Output CompareA Match Interrupt Enable */
#define TC3_OCIE3A_CLEAR_gc (0x00) /* Timer/Counter3 Output CompareA Match Interrupt Enable - CLEAR */
#define TC3_OCIE3A_SET_gc   (0x10) /* Timer/Counter3 Output CompareA Match Interrupt Enable - SET */


/* Timer/Counter3 Output CompareB Match Interrupt Enable */
#define TC3_OCIE3B_CLEAR_gc (0x00) /* Timer/Counter3 Output CompareB Match Interrupt Enable - CLEAR */
#define TC3_OCIE3B_SET_gc   (0x08) /* Timer/Counter3 Output CompareB Match Interrupt Enable - SET */


/* Timer/Counter3 Overflow Interrupt Enable */
#define TC3_TOIE3_CLEAR_gc (0x00) /* Timer/Counter3 Overflow Interrupt Enable - CLEAR */
#define TC3_TOIE3_SET_gc   (0x04) /* Timer/Counter3 Overflow Interrupt Enable - SET */


/* Timer/Counter3, Output Compare Match Interrupt Enable */
#define TC3_OCIE3C_CLEAR_gc (0x00) /* Timer/Counter3, Output Compare Match Interrupt Enable - CLEAR */
#define TC3_OCIE3C_SET_gc   (0x02) /* Timer/Counter3, Output Compare Match Interrupt Enable - SET */


/* Input Capture Flag 3 */
#define TC3_ICF3_CLEAR_gc (0x00) /* Input Capture Flag 3 - CLEAR */
#define TC3_ICF3_SET_gc   (0x20) /* Input Capture Flag 3 - SET */


/* Output Compare Flag 3A */
#define TC3_OCF3A_CLEAR_gc (0x00) /* Output Compare Flag 3A - CLEAR */
#define TC3_OCF3A_SET_gc   (0x10) /* Output Compare Flag 3A - SET */


/* Output Compare Flag 3B */
#define TC3_OCF3B_CLEAR_gc (0x00) /* Output Compare Flag 3B - CLEAR */
#define TC3_OCF3B_SET_gc   (0x08) /* Output Compare Flag 3B - SET */


/* Timer/Counter3 Overflow Flag */
#define TC3_TOV3_CLEAR_gc (0x00) /* Timer/Counter3 Overflow Flag - CLEAR */
#define TC3_TOV3_SET_gc   (0x04) /* Timer/Counter3 Overflow Flag - SET */


/* Timer/Counter3 Output Compare C Match Flag */
#define TC3_OCF3C_CLEAR_gc (0x00) /* Timer/Counter3 Output Compare C Match Flag - CLEAR */
#define TC3_OCF3C_SET_gc   (0x02) /* Timer/Counter3 Output Compare C Match Flag - SET */


/* Timer/Counter Synchronization Mode */
#define TC3_TSM_CLEAR_gc (0x00) /* Timer/Counter Synchronization Mode - CLEAR */
#define TC3_TSM_SET_gc   (0x80) /* Timer/Counter Synchronization Mode - SET */


/* Prescaler Reset, T/C3, T/C2, T/C1 */
#define TC3_PSR321_CLEAR_gc (0x00) /* Prescaler Reset, T/C3, T/C2, T/C1 - CLEAR */
#define TC3_PSR321_SET_gc   (0x01) /* Prescaler Reset, T/C3, T/C2, T/C1 - SET */


/* Compare Output Mode 3A, bits */
#define TC3_TCCR3A_COM3A_gc(x) ((x<<6) & 0xC0)

/* Compare Output Mode 3B, bits */
#define TC3_TCCR3A_COM3B_gc(x) ((x<<4) & 0x30)

/* Compare Output Mode 3C, bits */
#define TC3_TCCR3A_COM3C_gc(x) ((x<<2) & 0x0C)

/* Waveform Generation Mode Bits */
#define TC3_TCCR3A_WGM3_gc(x) (x & 0x03)

/* Input Capture 3  Noise Canceler */
#define TC3_ICNC3_CLEAR_gc (0x00) /* Input Capture 3  Noise Canceler - CLEAR */
#define TC3_ICNC3_SET_gc   (0x80) /* Input Capture 3  Noise Canceler - SET */


/* Input Capture 3 Edge Select */
#define TC3_ICES3_CLEAR_gc (0x00) /* Input Capture 3 Edge Select - CLEAR */
#define TC3_ICES3_SET_gc   (0x40) /* Input Capture 3 Edge Select - SET */


/* Waveform Generation Mode */
#define TC3_TCCR3B_WGM3_gc(x) ((x<<3) & 0x18)

/* Clock Select3 bits */
#define TC3_CS3_VAL_0x00_gc (0x00) /* No Clock Source (Stopped) */
#define TC3_CS3_VAL_0x01_gc (0x01) /* Running, No Prescaling */
#define TC3_CS3_VAL_0x02_gc (0x02) /* Running, CLK/8 */
#define TC3_CS3_VAL_0x03_gc (0x03) /* Running, CLK/64 */
#define TC3_CS3_VAL_0x04_gc (0x04) /* Running, CLK/256 */
#define TC3_CS3_VAL_0x05_gc (0x05) /* Running, CLK/1024 */
#define TC3_CS3_VAL_0x06_gc (0x06) /* Running, ExtClk Tx Falling Edge */
#define TC3_CS3_VAL_0x07_gc (0x07) /* Running, ExtClk Tx Rising Edge */


/* Force Output Compare for channel A */
#define TC3_FOC3A_CLEAR_gc (0x00) /* Force Output Compare for channel A - CLEAR */
#define TC3_FOC3A_SET_gc   (0x80) /* Force Output Compare for channel A - SET */


/* Force Output Compare for channel B */
#define TC3_FOC3B_CLEAR_gc (0x00) /* Force Output Compare for channel B - CLEAR */
#define TC3_FOC3B_SET_gc   (0x40) /* Force Output Compare for channel B - SET */


/* Force Output Compare for channel C */
#define TC3_FOC3C_CLEAR_gc (0x00) /* Force Output Compare for channel C - CLEAR */
#define TC3_FOC3C_SET_gc   (0x20) /* Force Output Compare for channel C - SET */


/*
--------------------------------------------------------------------------------
TC8 - Timer/Counter, 8-bit
--------------------------------------------------------------------------------
*/


/* Force Output Compare */
#define TC2_FOC2_CLEAR_gc (0x00) /* Force Output Compare - CLEAR */
#define TC2_FOC2_SET_gc   (0x80) /* Force Output Compare - SET */


/* Wafeform Generation Mode */
#define TC2_WGM20_VAL_0x00_gc (0x00<<6) /* Normal */
#define TC2_WGM20_VAL_0x02_gc (0x02<<6) /* PWM, Phase Correct */
#define TC2_WGM20_VAL_0x01_gc (0x01<<6) /* CTC */
#define TC2_WGM20_VAL_0x03_gc (0x03<<6) /* Fast PWM */


/* Compare Match Output Mode */
#define TC2_TCCR2_COM2_gc(x) ((x<<4) & 0x30)

/* Waveform Generation Mode */
#define TC2_WGM21_CLEAR_gc (0x00) /* Waveform Generation Mode - CLEAR */
#define TC2_WGM21_SET_gc   (0x08) /* Waveform Generation Mode - SET */


/* Clock Select */
#define TC2_CS2_VAL_0x00_gc (0x00) /* No Clock Source (Stopped) */
#define TC2_CS2_VAL_0x01_gc (0x01) /* Running, No Prescaling */
#define TC2_CS2_VAL_0x02_gc (0x02) /* Running, CLK/8 */
#define TC2_CS2_VAL_0x03_gc (0x03) /* Running, CLK/64 */
#define TC2_CS2_VAL_0x04_gc (0x04) /* Running, CLK/256 */
#define TC2_CS2_VAL_0x05_gc (0x05) /* Running, CLK/1024 */
#define TC2_CS2_VAL_0x06_gc (0x06) /* Running, ExtClk Tx Falling Edge */
#define TC2_CS2_VAL_0x07_gc (0x07) /* Running, ExtClk Tx Rising Edge */


/* Output Compare Flag 2 */
#define TC2_OCF2_CLEAR_gc (0x00) /* Output Compare Flag 2 - CLEAR */
#define TC2_OCF2_SET_gc   (0x80) /* Output Compare Flag 2 - SET */


/* Timer/Counter2 Overflow Flag */
#define TC2_TOV2_CLEAR_gc (0x00) /* Timer/Counter2 Overflow Flag - CLEAR */
#define TC2_TOV2_SET_gc   (0x40) /* Timer/Counter2 Overflow Flag - SET */


/* -OCIE2 */
#define TC2_OCIE2_CLEAR_gc (0x00) /* -OCIE2 - CLEAR */
#define TC2_OCIE2_SET_gc   (0x80) /* -OCIE2 - SET */


/* -TOIE2 */
#define TC2_TOIE2_CLEAR_gc (0x00) /* -TOIE2 - CLEAR */
#define TC2_TOIE2_SET_gc   (0x40) /* -TOIE2 - SET */


/*
--------------------------------------------------------------------------------
WDT - Watchdog Timer
--------------------------------------------------------------------------------
*/


/* Watchdog Change Enable */
#define WDT_WDCE_CLEAR_gc (0x00) /* Watchdog Change Enable - CLEAR */
#define WDT_WDCE_SET_gc   (0x10) /* Watchdog Change Enable - SET */


/* Watch Dog Enable */
#define WDT_WDE_CLEAR_gc (0x00) /* Watch Dog Enable - CLEAR */
#define WDT_WDE_SET_gc   (0x08) /* Watch Dog Enable - SET */


/* Watch Dog Timer Prescaler bits */
#define WDT_WDP_VAL_0x00_gc (0x00) /* Oscillator Cycles 16K */
#define WDT_WDP_VAL_0x01_gc (0x01) /* Oscillator Cycles 32K */
#define WDT_WDP_VAL_0x02_gc (0x02) /* Oscillator Cycles 64K */
#define WDT_WDP_VAL_0x03_gc (0x03) /* Oscillator Cycles 128K */
#define WDT_WDP_VAL_0x04_gc (0x04) /* Oscillator Cycles 256K */
#define WDT_WDP_VAL_0x05_gc (0x05) /* Oscillator Cycles 512K */
#define WDT_WDP_VAL_0x06_gc (0x06) /* Oscillator Cycles 1024K */
#define WDT_WDP_VAL_0x07_gc (0x07) /* Oscillator Cycles 2048K */

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


/* AC - Analog Comparator (0x0000) */
#define AC_BASE          _SFR_MEM8 (0x0000) /* AC Base Address */
#define AC_ACSR          _SFR_MEM8 (0x0028) /* Analog Comparator Control And Status Register */
#define AC_SFIOR         _SFR_MEM8 (0x0040) /* Special Function IO Register */

/* ADC - Analog-to-Digital Converter (0x0000) */
#define ADC_BASE         _SFR_MEM16(0x0000) /* ADC Base Address */
#define ADC_ADC          _SFR_MEM16(0x0024) /* ADC Data Register  Bytes */
#define ADC_ADCL         _SFR_MEM8 (0x0024) /* ADC Data Register  Bytes LOW BYTE */
#define ADC_ADCH         _SFR_MEM8 (0x0025) /* ADC Data Register  Bytes HIGH BYTE */
#define ADC_ADCSRA       _SFR_MEM8 (0x0026) /* The ADC Control and Status register A */
#define ADC_ADMUX        _SFR_MEM8 (0x0027) /* The ADC multiplexer Selection Register */
#define ADC_ADCSRB       _SFR_MEM8 (0x008E) /* The ADC Control and Status register B */

/* SPI - Serial Peripheral Interface (0x0000) */
#define SPI_BASE         _SFR_MEM8 (0x0000) /* SPI Base Address */
#define SPI_SPCR         _SFR_MEM8 (0x002D) /* SPI Control Register */
#define SPI_SPSR         _SFR_MEM8 (0x002E) /* SPI Status Register */
#define SPI_SPDR         _SFR_MEM8 (0x002F) /* SPI Data Register */

/* TWI - Two Wire Serial Interface (0x0000) */
#define TWI_BASE         _SFR_MEM8 (0x0000) /* TWI Base Address */
#define TWI_TWBR         _SFR_MEM8 (0x0070) /* TWI Bit Rate register */
#define TWI_TWSR         _SFR_MEM8 (0x0071) /* TWI Status Register */
#define TWI_TWAR         _SFR_MEM8 (0x0072) /* TWI (Slave) Address register */
#define TWI_TWDR         _SFR_MEM8 (0x0073) /* TWI Data register */
#define TWI_TWCR         _SFR_MEM8 (0x0074) /* TWI Control Register */

/* USART0 - USART (0x0000) */
#define USART00_BASE     _SFR_MEM8 (0x0000) /* USART00 Base Address */
#define USART00_UBRR0L   _SFR_MEM8 (0x0029) /* USART Baud Rate Register Low Byte */
#define USART00_UCSR0B   _SFR_MEM8 (0x002A) /* USART Control and Status Register B */
#define USART00_UCSR0A   _SFR_MEM8 (0x002B) /* USART Control and Status Register A */
#define USART00_UDR0     _SFR_MEM8 (0x002C) /* USART I/O Data Register */
#define USART00_UBRR0H   _SFR_MEM8 (0x0090) /* USART Baud Rate Register Hight Byte */
#define USART00_UCSR0C   _SFR_MEM8 (0x0095) /* USART Control and Status Register C */

/* USART1 - USART (0x0000) */
#define USART11_BASE     _SFR_MEM8 (0x0000) /* USART11 Base Address */
#define USART11_UBRR1H   _SFR_MEM8 (0x0098) /* USART Baud Rate Register Hight Byte */
#define USART11_UBRR1L   _SFR_MEM8 (0x0099) /* USART Baud Rate Register Low Byte */
#define USART11_UCSR1B   _SFR_MEM8 (0x009A) /* USART Control and Status Register B */
#define USART11_UCSR1A   _SFR_MEM8 (0x009B) /* USART Control and Status Register A */
#define USART11_UDR1     _SFR_MEM8 (0x009C) /* USART I/O Data Register */
#define USART11_UCSR1C   _SFR_MEM8 (0x009D) /* USART Control and Status Register C */

/* CPU - CPU Registers (0x0000) */
#define CPU_BASE         _SFR_MEM8 (0x0000) /* CPU Base Address */
#define CPU_MCUCSR       _SFR_MEM8 (0x0054) /* MCU Control And Status Register */
#define CPU_MCUCR        _SFR_MEM8 (0x0055) /* MCU Control Register */
#define CPU_XDIV         _SFR_MEM8 (0x005C) /* XTAL Divide Control Register */
#define CPU_SP           _SFR_MEM16(0x005D) /* Stack Pointer  */
#define CPU_SPL          _SFR_MEM8 (0x005D) /* Stack Pointer  LOW BYTE */
#define CPU_SPH          _SFR_MEM8 (0x005E) /* Stack Pointer  HIGH BYTE */
#define CPU_SREG         _SFR_MEM8 (0x005F) /* Status Register */
#define CPU_XMCRB        _SFR_MEM8 (0x006C) /* External Memory Control Register B */
#define CPU_XMCRA        _SFR_MEM8 (0x006D) /* External Memory Control Register A */
#define CPU_OSCCAL       _SFR_MEM8 (0x006F) /* Oscillator Calibration Value */

/* BOOT_LOAD - Bootloader (0x0000) */
#define BOOT_LOAD_BASE   _SFR_MEM8 (0x0000) /* BOOT_LOAD Base Address */
#define BOOT_LOAD_SPMCSR _SFR_MEM8 (0x0068) /* Store Program Memory Control Register */

/* JTAG - JTAG Interface (0x0000) */
#define JTAG_BASE        _SFR_MEM8 (0x0000) /* JTAG Base Address */
#define JTAG_OCDR        _SFR_MEM8 (0x0042) /* On-Chip Debug Related Register in I/O Memory */
#define JTAG_MCUCSR      _SFR_MEM8 (0x0054) /* MCU Control And Status Register */

/* MISC - Other Registers (0x0000) */
#define MISC_BASE        _SFR_MEM8 (0x0000) /* MISC Base Address */
#define MISC_SFIOR       _SFR_MEM8 (0x0040) /* Special Function IO Register */

/* EXINT - External Interrupts (0x0000) */
#define EXINT_BASE       _SFR_MEM8 (0x0000) /* EXINT Base Address */
#define EXINT_EIFR       _SFR_MEM8 (0x0058) /* External Interrupt Flag Register */
#define EXINT_EIMSK      _SFR_MEM8 (0x0059) /* External Interrupt Mask Register */
#define EXINT_EICRB      _SFR_MEM8 (0x005A) /* External Interrupt Control Register B */
#define EXINT_EICRA      _SFR_MEM8 (0x006A) /* External Interrupt Control Register A */

/* EEPROM - EEPROM (0x0000) */
#define EEPROM_BASE      _SFR_MEM8 (0x0000) /* EEPROM Base Address */
#define EEPROM_EECR      _SFR_MEM8 (0x003C) /* EEPROM Control Register */
#define EEPROM_EEDR      _SFR_MEM8 (0x003D) /* EEPROM Data Register */
#define EEPROM_EEAR      _SFR_MEM16(0x003E) /* EEPROM Read/Write Access  Bytes */
#define EEPROM_EEARL     _SFR_MEM8 (0x003E) /* EEPROM Read/Write Access  Bytes LOW BYTE */
#define EEPROM_EEARH     _SFR_MEM8 (0x003F) /* EEPROM Read/Write Access  Bytes HIGH BYTE */

/* PORTA - I/O Port (0x0000) */
#define PORTAA_BASE      _SFR_MEM8 (0x0000) /* PORTAA Base Address */
#define PORTAA_PINA      _SFR_MEM8 (0x0039) /* Port A Input Pins */
#define PORTAA_DDRA      _SFR_MEM8 (0x003A) /* Port A Data Direction Register */
#define PORTAA_PORTA     _SFR_MEM8 (0x003B) /* Port A Data Register */

/* PORTB - I/O Port (0x0000) */
#define PORTBB_BASE      _SFR_MEM8 (0x0000) /* PORTBB Base Address */
#define PORTBB_PINB      _SFR_MEM8 (0x0036) /* Port B Input Pins */
#define PORTBB_DDRB      _SFR_MEM8 (0x0037) /* Port B Data Direction Register */
#define PORTBB_PORTB     _SFR_MEM8 (0x0038) /* Port B Data Register */

/* PORTC - I/O Port (0x0000) */
#define PORTCC_BASE      _SFR_MEM8 (0x0000) /* PORTCC Base Address */
#define PORTCC_PINC      _SFR_MEM8 (0x0033) /* Port C Input Pins */
#define PORTCC_DDRC      _SFR_MEM8 (0x0034) /* Port C Data Direction Register */
#define PORTCC_PORTC     _SFR_MEM8 (0x0035) /* Port C Data Register */

/* PORTD - I/O Port (0x0000) */
#define PORTDD_BASE      _SFR_MEM8 (0x0000) /* PORTDD Base Address */
#define PORTDD_PIND      _SFR_MEM8 (0x0030) /* Port D Input Pins */
#define PORTDD_DDRD      _SFR_MEM8 (0x0031) /* Port D Data Direction Register */
#define PORTDD_PORTD     _SFR_MEM8 (0x0032) /* Port D Data Register */

/* PORTE - I/O Port (0x0000) */
#define PORTEE_BASE      _SFR_MEM8 (0x0000) /* PORTEE Base Address */
#define PORTEE_PINE      _SFR_MEM8 (0x0021) /* Input Pins, Port E */
#define PORTEE_DDRE      _SFR_MEM8 (0x0022) /* Data Direction Register, Port E */
#define PORTEE_PORTE     _SFR_MEM8 (0x0023) /* Data Register, Port E */

/* PORTF - I/O Port (0x0000) */
#define PORTFF_BASE      _SFR_MEM8 (0x0000) /* PORTFF Base Address */
#define PORTFF_PINF      _SFR_MEM8 (0x0020) /* Input Pins, Port F */
#define PORTFF_DDRF      _SFR_MEM8 (0x0061) /* Data Direction Register, Port F */
#define PORTFF_PORTF     _SFR_MEM8 (0x0062) /* Data Register, Port F */

/* PORTG - I/O Port (0x0000) */
#define PORTGG_BASE      _SFR_MEM8 (0x0000) /* PORTGG Base Address */
#define PORTGG_PING      _SFR_MEM8 (0x0063) /* Input Pins, Port G */
#define PORTGG_DDRG      _SFR_MEM8 (0x0064) /* Data Direction Register, Port G */
#define PORTGG_PORTG     _SFR_MEM8 (0x0065) /* Data Register, Port G */

/* TC0 - Timer/Counter, 8-bit Async (0x0000) */
#define TC8_ASYNC_BASE   _SFR_MEM8 (0x0000) /* TC8_ASYNC Base Address */
#define TC8_ASYNC_SFIOR  _SFR_MEM8 (0x0040) /* Special Function IO Register */
#define TC8_ASYNC_ASSR   _SFR_MEM8 (0x0050) /* Asynchronus Status Register */
#define TC8_ASYNC_OCR0   _SFR_MEM8 (0x0051) /* Output Compare Register */
#define TC8_ASYNC_TCNT0  _SFR_MEM8 (0x0052) /* Timer/Counter Register */
#define TC8_ASYNC_TCCR0  _SFR_MEM8 (0x0053) /* Timer/Counter Control Register */
#define TC8_ASYNC_TIFR   _SFR_MEM8 (0x0056) /* Timer/Counter Interrupt Flag register */
#define TC8_ASYNC_TIMSK  _SFR_MEM8 (0x0057) /* Timer/Counter Interrupt Mask Register */

/* TC1 - Timer/Counter, 16-bit (0x0000) */
#define TC16_BASE        _SFR_MEM8 (0x0000) /* TC16 Base Address */
#define TC16_SFIOR       _SFR_MEM8 (0x0040) /* Special Function IO Register */
#define TC16_ICR1        _SFR_MEM16(0x0046) /* Timer/Counter1 Input Capture Register  Bytes */
#define TC16_ICR1L       _SFR_MEM8 (0x0046) /* Timer/Counter1 Input Capture Register  Bytes LOW BYTE */
#define TC16_ICR1H       _SFR_MEM8 (0x0047) /* Timer/Counter1 Input Capture Register  Bytes HIGH BYTE */
#define TC16_OCR1B       _SFR_MEM16(0x0048) /* Timer/Counter1 Output Compare Register  Bytes */
#define TC16_OCR1BL      _SFR_MEM8 (0x0048) /* Timer/Counter1 Output Compare Register  Bytes LOW BYTE */
#define TC16_OCR1BH      _SFR_MEM8 (0x0049) /* Timer/Counter1 Output Compare Register  Bytes HIGH BYTE */
#define TC16_OCR1A       _SFR_MEM16(0x004A) /* Timer/Counter1 Output Compare Register  Bytes */
#define TC16_OCR1AL      _SFR_MEM8 (0x004A) /* Timer/Counter1 Output Compare Register  Bytes LOW BYTE */
#define TC16_OCR1AH      _SFR_MEM8 (0x004B) /* Timer/Counter1 Output Compare Register  Bytes HIGH BYTE */
#define TC16_TCNT1       _SFR_MEM16(0x004C) /* Timer/Counter1  Bytes */
#define TC16_TCNT1L      _SFR_MEM8 (0x004C) /* Timer/Counter1  Bytes LOW BYTE */
#define TC16_TCNT1H      _SFR_MEM8 (0x004D) /* Timer/Counter1  Bytes HIGH BYTE */
#define TC16_TCCR1B      _SFR_MEM8 (0x004E) /* Timer/Counter1 Control Register B */
#define TC16_TCCR1A      _SFR_MEM8 (0x004F) /* Timer/Counter1 Control Register A */
#define TC16_TIFR        _SFR_MEM8 (0x0056) /* Timer/Counter Interrupt Flag register */
#define TC16_TIMSK       _SFR_MEM8 (0x0057) /* Timer/Counter Interrupt Mask Register */
#define TC16_OCR1C       _SFR_MEM16(0x0078) /* Timer/Counter1 Output Compare Register  Bytes */
#define TC16_OCR1CL      _SFR_MEM8 (0x0078) /* Timer/Counter1 Output Compare Register  Bytes LOW BYTE */
#define TC16_OCR1CH      _SFR_MEM8 (0x0079) /* Timer/Counter1 Output Compare Register  Bytes HIGH BYTE */
#define TC16_TCCR1C      _SFR_MEM8 (0x007A) /* Timer/Counter1 Control Register C */
#define TC16_ETIFR       _SFR_MEM8 (0x007C) /* Extended Timer/Counter Interrupt Flag register */
#define TC16_ETIMSK      _SFR_MEM8 (0x007D) /* Extended Timer/Counter Interrupt Mask Register */

/* TC3 - Timer/Counter, 16-bit (0x0000) */
/* TC16_BASE ALREADY DEFINED */
/* TC16_SFIOR ALREADY DEFINED */
/* TC16_ETIFR ALREADY DEFINED */
/* TC16_ETIMSK ALREADY DEFINED */
#define TC16_ICR3        _SFR_MEM16(0x0080) /* Timer/Counter3 Input Capture Register  Bytes */
#define TC16_ICR3L       _SFR_MEM8 (0x0080) /* Timer/Counter3 Input Capture Register  Bytes LOW BYTE */
#define TC16_ICR3H       _SFR_MEM8 (0x0081) /* Timer/Counter3 Input Capture Register  Bytes HIGH BYTE */
#define TC16_OCR3C       _SFR_MEM16(0x0082) /* Timer/Counter3 Output compare Register C  Bytes */
#define TC16_OCR3CL      _SFR_MEM8 (0x0082) /* Timer/Counter3 Output compare Register C  Bytes LOW BYTE */
#define TC16_OCR3CH      _SFR_MEM8 (0x0083) /* Timer/Counter3 Output compare Register C  Bytes HIGH BYTE */
#define TC16_OCR3B       _SFR_MEM16(0x0084) /* Timer/Counter3 Output Compare Register B  Bytes */
#define TC16_OCR3BL      _SFR_MEM8 (0x0084) /* Timer/Counter3 Output Compare Register B  Bytes LOW BYTE */
#define TC16_OCR3BH      _SFR_MEM8 (0x0085) /* Timer/Counter3 Output Compare Register B  Bytes HIGH BYTE */
#define TC16_OCR3A       _SFR_MEM16(0x0086) /* Timer/Counter3 Output Compare Register A  Bytes */
#define TC16_OCR3AL      _SFR_MEM8 (0x0086) /* Timer/Counter3 Output Compare Register A  Bytes LOW BYTE */
#define TC16_OCR3AH      _SFR_MEM8 (0x0087) /* Timer/Counter3 Output Compare Register A  Bytes HIGH BYTE */
#define TC16_TCNT3       _SFR_MEM16(0x0088) /* Timer/Counter3  Bytes */
#define TC16_TCNT3L      _SFR_MEM8 (0x0088) /* Timer/Counter3  Bytes LOW BYTE */
#define TC16_TCNT3H      _SFR_MEM8 (0x0089) /* Timer/Counter3  Bytes HIGH BYTE */
#define TC16_TCCR3B      _SFR_MEM8 (0x008A) /* Timer/Counter3 Control Register B */
#define TC16_TCCR3A      _SFR_MEM8 (0x008B) /* Timer/Counter3 Control Register A */
#define TC16_TCCR3C      _SFR_MEM8 (0x008C) /* Timer/Counter3 Control Register C */

/* TC2 - Timer/Counter, 8-bit (0x0000) */
#define TC8_BASE         _SFR_MEM8 (0x0000) /* TC8 Base Address */
#define TC8_OCR2         _SFR_MEM8 (0x0043) /* Output Compare Register */
#define TC8_TCNT2        _SFR_MEM8 (0x0044) /* Timer/Counter Register */
#define TC8_TCCR2        _SFR_MEM8 (0x0045) /* Timer/Counter Control Register */
#define TC8_TIFR         _SFR_MEM8 (0x0056) /* Timer/Counter Interrupt Flag Register */
#define TC8_TIMSK        _SFR_MEM8 (0x0057) 

/* WDT - Watchdog Timer (0x0000) */
#define WDT_BASE         _SFR_MEM8 (0x0000) /* WDT Base Address */
#define WDT_WDTCR        _SFR_MEM8 (0x0041) /* Watchdog Timer Control Register */

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
#define None_RESET_vect_num        (0)                 
#define None_RESET_vect            _VECTOR(0)          /* External Pin, Power-on Reset, Brown-out Reset, Watchdog Reset and JTAG AVR Reset */
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
#define None_TIMER2_COMP_vect_num  (9)                 
#define None_TIMER2_COMP_vect      _VECTOR(9)          /* Timer/Counter2 Compare Match */
#define None_TIMER2_OVF_vect_num   (10)                
#define None_TIMER2_OVF_vect       _VECTOR(10)         /* Timer/Counter2 Overflow */
#define None_TIMER1_CAPT_vect_num  (11)                
#define None_TIMER1_CAPT_vect      _VECTOR(11)         /* Timer/Counter1 Capture Event */
#define None_TIMER1_COMPA_vect_num (12)                
#define None_TIMER1_COMPA_vect     _VECTOR(12)         /* Timer/Counter1 Compare Match A */
#define None_TIMER1_COMPB_vect_num (13)                
#define None_TIMER1_COMPB_vect     _VECTOR(13)         /* Timer/Counter Compare Match B */
#define None_TIMER1_OVF_vect_num   (14)                
#define None_TIMER1_OVF_vect       _VECTOR(14)         /* Timer/Counter1 Overflow */
#define None_TIMER0_COMP_vect_num  (15)                
#define None_TIMER0_COMP_vect      _VECTOR(15)         /* Timer/Counter0 Compare Match */
#define None_TIMER0_OVF_vect_num   (16)                
#define None_TIMER0_OVF_vect       _VECTOR(16)         /* Timer/Counter0 Overflow */
#define None_SPI_STC_vect_num      (17)                
#define None_SPI_STC_vect          _VECTOR(17)         /* SPI Serial Transfer Complete */
#define None_USART0_RX_vect_num    (18)                
#define None_USART0_RX_vect        _VECTOR(18)         /* USART0, Rx Complete */
#define None_USART0_UDRE_vect_num  (19)                
#define None_USART0_UDRE_vect      _VECTOR(19)         /* USART0 Data Register Empty */
#define None_USART0_TX_vect_num    (20)                
#define None_USART0_TX_vect        _VECTOR(20)         /* USART0, Tx Complete */
#define None_ADC_vect_num          (21)                
#define None_ADC_vect              _VECTOR(21)         /* ADC Conversion Complete */
#define None_EE_READY_vect_num     (22)                
#define None_EE_READY_vect         _VECTOR(22)         /* EEPROM Ready */
#define None_ANALOG_COMP_vect_num  (23)                
#define None_ANALOG_COMP_vect      _VECTOR(23)         /* Analog Comparator */
#define None_TIMER1_COMPC_vect_num (24)                
#define None_TIMER1_COMPC_vect     _VECTOR(24)         /* Timer/Counter1 Compare Match C */
#define None_TIMER3_CAPT_vect_num  (25)                
#define None_TIMER3_CAPT_vect      _VECTOR(25)         /* Timer/Counter3 Capture Event */
#define None_TIMER3_COMPA_vect_num (26)                
#define None_TIMER3_COMPA_vect     _VECTOR(26)         /* Timer/Counter3 Compare Match A */
#define None_TIMER3_COMPB_vect_num (27)                
#define None_TIMER3_COMPB_vect     _VECTOR(27)         /* Timer/Counter3 Compare Match B */
#define None_TIMER3_COMPC_vect_num (28)                
#define None_TIMER3_COMPC_vect     _VECTOR(28)         /* Timer/Counter3 Compare Match C */
#define None_TIMER3_OVF_vect_num   (29)                
#define None_TIMER3_OVF_vect       _VECTOR(29)         /* Timer/Counter3 Overflow */
#define None_USART1_RX_vect_num    (30)                
#define None_USART1_RX_vect        _VECTOR(30)         /* USART1, Rx Complete */
#define None_USART1_UDRE_vect_num  (31)                
#define None_USART1_UDRE_vect      _VECTOR(31)         /* USART1, Data Register Empty */
#define None_USART1_TX_vect_num    (32)                
#define None_USART1_TX_vect        _VECTOR(32)         /* USART1, Tx Complete */
#define None_TWI_vect_num          (33)                
#define None_TWI_vect              _VECTOR(33)         /* 2-wire Serial Interface */
#define None_SPM_READY_vect_num    (34)                
#define None_SPM_READY_vect        _VECTOR(34)         /* Store Program Memory Read */

/* Vector Table Size */
#define _VECTOR_SIZE               (4)                 /* Size of individual vector. */
#define _VECTORS_SIZE              (35 * _VECTOR_SIZE) /* Size of all vectors */
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

#define XRAM_START          (0x1100)                               
#define XRAM_SIZE           (0xEF00)                               
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
#define OSCCALMEM_SIZE   (0x0004)                               
#define OSCCALMEM_END    (OSCCALMEM_START + OSCCALMEM_SIZE - 1) 

#define OSCCAL_START     (0x0000)                               
#define OSCCAL_SIZE      (0x0004)                               
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
#define BODEN      (unsigned char)~_BV(6) /* Brown-out detection enabled */
#define BODLEVEL   (unsigned char)~_BV(7) /* Brownout detector trigger level */

/* Fuse offset 0x01 */
#define BOOTRST (unsigned char)~_BV(0) /* Boot Reset vector Enabled */
#define BOOTSZ0 (unsigned char)~_BV(1) /* Select Boot Size bit 0 */
#define BOOTSZ1 (unsigned char)~_BV(2) /* Select Boot Size bit 1 */
#define EESAVE  (unsigned char)~_BV(3) /* Preserve EEPROM through the Chip Erase cycle */
#define CKOPT   (unsigned char)~_BV(4) /* CKOPT fuse (operation dependent of CKSEL fuses) */
#define SPIEN   (unsigned char)~_BV(5) /* Serial program downloading (SPI) enabled */
#define JTAGEN  (unsigned char)~_BV(6) /* JTAG Interface Enabled */
#define OCDEN   (unsigned char)~_BV(7) /* On-Chip Debug Enabled */

/* Fuse offset 0x02 */
#define WDTON (unsigned char)~_BV(0) /* Watchdog Timer always on */
#define M103C (unsigned char)~_BV(1) /* ATmega103 Compatibility Mode */


/* ========== Lock Bits ========== */
#define __LOCK_BITS_EXIST  


/* ========== Signature ========== */
#define SIGNATURE_0 (0x1E) 
#define SIGNATURE_1 (0x96) 
#define SIGNATURE_2 (0x02) 

#endif /* #ifdef _AVR_ATmega64_H_INCLUDED */
