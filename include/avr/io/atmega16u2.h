/******************************************************************************
 *   This file is part of avr-libc3.                                          * 
 *                                                                            * 
 *   Automatically created by devtools/gen-ioheader-atdf.py (V0.91)           * 
 *                                                                            * 
 *   .atpack File: ATmega16U2.atdf                                            * 
 *   .ATDF File:   atdf/ATmega16U2.atdf                                       * 
 *   Version:      2.0.12                                                     * 
 *   Date:         2019-04-26                                                 * 
 *   Device:       ATmega16U2                                                 * 
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
#  define _AVR_IOXXX_H_ "ioATmega16U2.h"
#else
#  error "Attempt to include more than one <avr/ioXXX.h> file."
#endif

#ifndef _AVR_ATmega16U2_H_INCLUDED
#  define _AVR_ATmega16U2_H_INCLUDED

/*
================================================================================
Ungrouped common register
================================================================================
*/

#define GPIOR0  _SFR_MEM8 (0x3E) /* General Purpose IO Register 0 */

#define GPIOR1  _SFR_MEM8 (0x4A) /* General Purpose IO Register 1 */
#define GPIOR2  _SFR_MEM8 (0x4B) /* General Purpose IO Register 2 */

#define DWDR    _SFR_MEM8 (0x51) /* debugWire communication register */

#define SMCR    _SFR_MEM8 (0x53) /* Sleep Mode Control Register */
#define MCUSR   _SFR_MEM8 (0x54) /* MCU Status Register */
#define MCUCR   _SFR_MEM8 (0x55) /* MCU Control Register */

#define EIND    _SFR_MEM8 (0x5C) /* Extended Indirect Register */
#define SP      _SFR_MEM16(0x5D) /* Stack Pointer  */
#define SREG    _SFR_MEM8 (0x5F) /* Status Register */

#define CLKPR   _SFR_MEM8 (0x61) 

#define PRR0    _SFR_MEM8 (0x64) /* Power Reduction Register0 */
#define PRR1    _SFR_MEM8 (0x65) /* Power Reduction Register1 */
#define OSCCAL  _SFR_MEM8 (0x66) /* Oscillator Calibration Value */

#define CLKSEL0 _SFR_MEM8 (0xD0) 
#define CLKSEL1 _SFR_MEM8 (0xD1) 
#define CLKSTA  _SFR_MEM8 (0xD2) 


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
    FUSE_BODLEVEL_2V7_gc      = (0x06), /* Brown-out detection level at VCC=2.7 V */
    FUSE_BODLEVEL_2V9_gc      = (0x05), /* Brown-out detection level at VCC=2.9 V */
    FUSE_BODLEVEL_3V0_gc      = (0x04), /* Brown-out detection level at VCC=3.0 V */
    FUSE_BODLEVEL_3V5_gc      = (0x03), /* Brown-out detection level at VCC=3.5 V */
    FUSE_BODLEVEL_3V6_gc      = (0x02), /* Brown-out detection level at VCC=3.6 V */
    FUSE_BODLEVEL_4V0_gc      = (0x01), /* Brown-out detection level at VCC=4.0 V */
    FUSE_BODLEVEL_4V3_gc      = (0x00), /* Brown-out detection level at VCC=4.3 V */
} FUSE_BODLEVEL_t;

/* Hardware Boot Enable */
typedef enum FUSE_HWBE_enum
{
    FUSE_HWBE_CLEAR_gc = (0x00), /* Hardware Boot Enable - CLEAR */
    FUSE_HWBE_SET_gc   = (0x08), /* Hardware Boot Enable - SET */
} FUSE_HWBE_t;

/* Debug Wire enable */
typedef enum FUSE_DWEN_enum
{
    FUSE_DWEN_CLEAR_gc = (0x00), /* Debug Wire enable - CLEAR */
    FUSE_DWEN_SET_gc   = (0x80), /* Debug Wire enable - SET */
} FUSE_DWEN_t;

/* Reset Disabled (Enable PC6 as i/o pin) */
typedef enum FUSE_RSTDISBL_enum
{
    FUSE_RSTDISBL_CLEAR_gc = (0x00), /* Reset Disabled (Enable PC6 as i/o pin) - CLEAR */
    FUSE_RSTDISBL_SET_gc   = (0x40), /* Reset Disabled (Enable PC6 as i/o pin) - SET */
} FUSE_RSTDISBL_t;

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
    FUSE_BOOTSZ_256W_1F00_gc  = (0x03<<1), /* Boot Flash size=256 words start address=$1F00 */
    FUSE_BOOTSZ_512W_1E00_gc  = (0x02<<1), /* Boot Flash size=512 words start address=$1E00 */
    FUSE_BOOTSZ_1024W_1C00_gc = (0x01<<1), /* Boot Flash size=1024 words start address=$1C00 */
    FUSE_BOOTSZ_2048W_1800_gc = (0x00<<1), /* Boot Flash size=2048 words start address=$1800 */
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

typedef struct PORTC_struct
{
    register8_t rsv_0x00[38]; /* RESERVED REGISTER BLOCK */
    register8_t PINC;         /* Port C Input Pins */
    register8_t DDRC;         /* Port C Data Direction Register */
    register8_t PORTC;        /* Port C Data Register */
} PORTC_t;


/* Port C Data Register bits */
#define PORTC_PORTC_PORTC_gc(x) ((x<<4) & 0xF0)

/* Port C Data Register bits */
#define PORTC_PORTC_PORTC_gc(x) (x & 0x07)

/* Port C Data Direction Register bits */
#define PORTC_DDRC_DDC_gc(x) ((x<<4) & 0xF0)

/* Port C Data Direction Register bits */
#define PORTC_DDRC_DDC_gc(x) (x & 0x07)

/* Port C Input Pins bits */
#define PORTC_PINC_PINC_gc(x) ((x<<4) & 0xF0)

/* Port C Input Pins bits */
#define PORTC_PINC_PINC_gc(x) (x & 0x07)

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
    _REGISTER16 (TCNT1);      /* Timer/Counter1 Bytes */
    register8_t rsv_0x85;     /* RESERVED REGISTER */
    _REGISTER16 (ICR1);       /* Timer/Counter1 Input Capture Register Bytes */
    register8_t rsv_0x87;     /* RESERVED REGISTER */
    _REGISTER16 (OCR1A);      /* Timer/Counter1 Output Compare Register A Bytes */
    register8_t rsv_0x89;     /* RESERVED REGISTER */
    _REGISTER16 (OCR1B);      /* Timer/Counter1 Output Compare Register B Bytes */
    register8_t rsv_0x8B;     /* RESERVED REGISTER */
    _REGISTER16 (OCR1C);      /* Timer/Counter1 Output Compare Register C Bytes */
} TC1_t;


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
--------------------------------------------------------------------------------
USB_DEVICE - USB Device Registers
--------------------------------------------------------------------------------
*/

typedef struct USB_DEVICE_struct
{
    register8_t rsv_0x00[99];  /* RESERVED REGISTER BLOCK */
    register8_t REGCR;         /* Regulator Control Register */
    register8_t rsv_0x64[116]; /* RESERVED REGISTER BLOCK */
    register8_t USBCON;        /* USB General Control Register */
    register8_t rsv_0xD9[7];   /* RESERVED REGISTER BLOCK */
    register8_t UDCON;         /* USB Device Control Registers */
    register8_t UDINT;         /* USB Device Interrupt Register */
    register8_t UDIEN;         /* USB Device Interrupt Enable Register */
    register8_t UDADDR;        /* USB Device Address Register */
    _REGISTER16 (UDFNUM);      /* USB Device Frame Number High Register */
    register8_t rsv_0xE5;      /* RESERVED REGISTER */
    register8_t UDMFN;         /* USB Device Micro Frame Number */
    register8_t rsv_0xE7;      /* RESERVED REGISTER */
    register8_t UEINTX;        /* USB Endpoint Interrupt Register */
    register8_t UENUM;         /* USB Endpoint Number */
    register8_t UERST;         /* USB Endpoint Reset Register */
    register8_t UECONX;        /* USB Endpoint Control Register */
    register8_t UECFG0X;       /* USB Endpoint Configuration 0 Register */
    register8_t UECFG1X;       /* USB Endpoint Configuration 1 Register */
    register8_t UESTA0X;       /* USB Endpoint Status 0 Register */
    register8_t UESTA1X;       /* USB Endpoint Status 1 Register */
    register8_t UEIENX;        /* USB Endpoint Interrupt Enable Register */
    register8_t UEDATX;        /* USB Data Endpoint */
    register8_t UEBCLX;        /* USB Endpoint Byte Count Register */
    register8_t rsv_0xF3;      /* RESERVED REGISTER */
    register8_t UEINT;         /* USB Endpoint Number Interrupt Register */
    register8_t rsv_0xF5[6];   /* RESERVED REGISTER BLOCK */
    register8_t UPOE;          /* USB Software Output Enable register */
} USB_DEVICE_t;


/* USB Buffers Direct Drive enable configuration */
#define USB_DEVICE_UPOE_UPWE_gc(x) ((x<<6) & 0xC0)

/* USB direct drive values */
#define USB_DEVICE_UPOE_UPDRV_gc(x) ((x<<4) & 0x30)

/* D+ Input value */
typedef enum USB_DEVICE_DPI_enum
{
    USB_DEVICE_DPI_CLEAR_gc = (0x00), /* D+ Input value - CLEAR */
    USB_DEVICE_DPI_SET_gc   = (0x02), /* D+ Input value - SET */
} USB_DEVICE_DPI_t;

/* D- Input value */
typedef enum USB_DEVICE_DMI_enum
{
    USB_DEVICE_DMI_CLEAR_gc = (0x00), /* D- Input value - CLEAR */
    USB_DEVICE_DMI_SET_gc   = (0x01), /* D- Input value - SET */
} USB_DEVICE_DMI_t;

/* Flow Error Interrupt Enable Flag */
typedef enum USB_DEVICE_FLERRE_enum
{
    USB_DEVICE_FLERRE_CLEAR_gc = (0x00), /* Flow Error Interrupt Enable Flag - CLEAR */
    USB_DEVICE_FLERRE_SET_gc   = (0x80), /* Flow Error Interrupt Enable Flag - SET */
} USB_DEVICE_FLERRE_t;

/* NAK IN Interrupt Enable Bit */
typedef enum USB_DEVICE_NAKINE_enum
{
    USB_DEVICE_NAKINE_CLEAR_gc = (0x00), /* NAK IN Interrupt Enable Bit - CLEAR */
    USB_DEVICE_NAKINE_SET_gc   = (0x40), /* NAK IN Interrupt Enable Bit - SET */
} USB_DEVICE_NAKINE_t;

/* NAK OUT Interrupt Enable Bit */
typedef enum USB_DEVICE_NAKOUTE_enum
{
    USB_DEVICE_NAKOUTE_CLEAR_gc = (0x00), /* NAK OUT Interrupt Enable Bit - CLEAR */
    USB_DEVICE_NAKOUTE_SET_gc   = (0x10), /* NAK OUT Interrupt Enable Bit - SET */
} USB_DEVICE_NAKOUTE_t;

/* Received SETUP Interrupt Enable Flag */
typedef enum USB_DEVICE_RXSTPE_enum
{
    USB_DEVICE_RXSTPE_CLEAR_gc = (0x00), /* Received SETUP Interrupt Enable Flag - CLEAR */
    USB_DEVICE_RXSTPE_SET_gc   = (0x08), /* Received SETUP Interrupt Enable Flag - SET */
} USB_DEVICE_RXSTPE_t;

/* Received OUT Data Interrupt Enable Flag */
typedef enum USB_DEVICE_RXOUTE_enum
{
    USB_DEVICE_RXOUTE_CLEAR_gc = (0x00), /* Received OUT Data Interrupt Enable Flag - CLEAR */
    USB_DEVICE_RXOUTE_SET_gc   = (0x04), /* Received OUT Data Interrupt Enable Flag - SET */
} USB_DEVICE_RXOUTE_t;

/* Stalled Interrupt Enable Flag */
typedef enum USB_DEVICE_STALLEDE_enum
{
    USB_DEVICE_STALLEDE_CLEAR_gc = (0x00), /* Stalled Interrupt Enable Flag - CLEAR */
    USB_DEVICE_STALLEDE_SET_gc   = (0x02), /* Stalled Interrupt Enable Flag - SET */
} USB_DEVICE_STALLEDE_t;

/* Transmitter Ready Interrupt Enable Flag */
typedef enum USB_DEVICE_TXINE_enum
{
    USB_DEVICE_TXINE_CLEAR_gc = (0x00), /* Transmitter Ready Interrupt Enable Flag - CLEAR */
    USB_DEVICE_TXINE_SET_gc   = (0x01), /* Transmitter Ready Interrupt Enable Flag - SET */
} USB_DEVICE_TXINE_t;

/* Control Direction */
typedef enum USB_DEVICE_CTRLDIR_enum
{
    USB_DEVICE_CTRLDIR_CLEAR_gc = (0x00), /* Control Direction - CLEAR */
    USB_DEVICE_CTRLDIR_SET_gc   = (0x04), /* Control Direction - SET */
} USB_DEVICE_CTRLDIR_t;

/* Current Bank */
#define USB_DEVICE_UESTA1X_CURRBK_gc(x) (x & 0x03)

/* Configuration Status Flag */
typedef enum USB_DEVICE_CFGOK_enum
{
    USB_DEVICE_CFGOK_CLEAR_gc = (0x00), /* Configuration Status Flag - CLEAR */
    USB_DEVICE_CFGOK_SET_gc   = (0x80), /* Configuration Status Flag - SET */
} USB_DEVICE_CFGOK_t;

/* Overflow Error Interrupt Flag */
typedef enum USB_DEVICE_OVERFI_enum
{
    USB_DEVICE_OVERFI_CLEAR_gc = (0x00), /* Overflow Error Interrupt Flag - CLEAR */
    USB_DEVICE_OVERFI_SET_gc   = (0x40), /* Overflow Error Interrupt Flag - SET */
} USB_DEVICE_OVERFI_t;

/* Underflow Error Interrupt Flag */
typedef enum USB_DEVICE_UNDERFI_enum
{
    USB_DEVICE_UNDERFI_CLEAR_gc = (0x00), /* Underflow Error Interrupt Flag - CLEAR */
    USB_DEVICE_UNDERFI_SET_gc   = (0x20), /* Underflow Error Interrupt Flag - SET */
} USB_DEVICE_UNDERFI_t;

/* Data Toggle Sequencing Flag */
#define USB_DEVICE_UESTA0X_DTSEQ_gc(x) ((x<<2) & 0x0C)

/* Busy Bank Flag */
#define USB_DEVICE_UESTA0X_NBUSYBK_gc(x) (x & 0x03)

/* Endpoint Size Bits */
#define USB_DEVICE_UECFG1X_EPSIZE_gc(x) ((x<<4) & 0x70)

/* Endpoint Bank Bits */
#define USB_DEVICE_UECFG1X_EPBK_gc(x) ((x<<2) & 0x0C)

/* Endpoint Allocation Bit */
typedef enum USB_DEVICE_ALLOC_enum
{
    USB_DEVICE_ALLOC_CLEAR_gc = (0x00), /* Endpoint Allocation Bit - CLEAR */
    USB_DEVICE_ALLOC_SET_gc   = (0x02), /* Endpoint Allocation Bit - SET */
} USB_DEVICE_ALLOC_t;

/* Endpoint Type Bits */
#define USB_DEVICE_UECFG0X_EPTYPE_gc(x) ((x<<6) & 0xC0)

/* Endpoint Direction Bit */
typedef enum USB_DEVICE_EPDIR_enum
{
    USB_DEVICE_EPDIR_CLEAR_gc = (0x00), /* Endpoint Direction Bit - CLEAR */
    USB_DEVICE_EPDIR_SET_gc   = (0x01), /* Endpoint Direction Bit - SET */
} USB_DEVICE_EPDIR_t;

/* STALL Request Handshake Bit */
typedef enum USB_DEVICE_STALLRQ_enum
{
    USB_DEVICE_STALLRQ_CLEAR_gc = (0x00), /* STALL Request Handshake Bit - CLEAR */
    USB_DEVICE_STALLRQ_SET_gc   = (0x20), /* STALL Request Handshake Bit - SET */
} USB_DEVICE_STALLRQ_t;

/* STALL Request Clear Handshake Bit */
typedef enum USB_DEVICE_STALLRQC_enum
{
    USB_DEVICE_STALLRQC_CLEAR_gc = (0x00), /* STALL Request Clear Handshake Bit - CLEAR */
    USB_DEVICE_STALLRQC_SET_gc   = (0x10), /* STALL Request Clear Handshake Bit - SET */
} USB_DEVICE_STALLRQC_t;

/* Reset Data Toggle Bit */
typedef enum USB_DEVICE_RSTDT_enum
{
    USB_DEVICE_RSTDT_CLEAR_gc = (0x00), /* Reset Data Toggle Bit - CLEAR */
    USB_DEVICE_RSTDT_SET_gc   = (0x08), /* Reset Data Toggle Bit - SET */
} USB_DEVICE_RSTDT_t;

/* Endpoint Enable Bit */
typedef enum USB_DEVICE_EPEN_enum
{
    USB_DEVICE_EPEN_CLEAR_gc = (0x00), /* Endpoint Enable Bit - CLEAR */
    USB_DEVICE_EPEN_SET_gc   = (0x01), /* Endpoint Enable Bit - SET */
} USB_DEVICE_EPEN_t;

/* FIFO Control Bit */
typedef enum USB_DEVICE_FIFOCON_enum
{
    USB_DEVICE_FIFOCON_CLEAR_gc = (0x00), /* FIFO Control Bit - CLEAR */
    USB_DEVICE_FIFOCON_SET_gc   = (0x80), /* FIFO Control Bit - SET */
} USB_DEVICE_FIFOCON_t;

/* NAK IN Received Interrupt Flag */
typedef enum USB_DEVICE_NAKINI_enum
{
    USB_DEVICE_NAKINI_CLEAR_gc = (0x00), /* NAK IN Received Interrupt Flag - CLEAR */
    USB_DEVICE_NAKINI_SET_gc   = (0x40), /* NAK IN Received Interrupt Flag - SET */
} USB_DEVICE_NAKINI_t;

/* Read/Write Allowed Flag */
typedef enum USB_DEVICE_RWAL_enum
{
    USB_DEVICE_RWAL_CLEAR_gc = (0x00), /* Read/Write Allowed Flag - CLEAR */
    USB_DEVICE_RWAL_SET_gc   = (0x20), /* Read/Write Allowed Flag - SET */
} USB_DEVICE_RWAL_t;

/* NAK OUT Received Interrupt Flag */
typedef enum USB_DEVICE_NAKOUTI_enum
{
    USB_DEVICE_NAKOUTI_CLEAR_gc = (0x00), /* NAK OUT Received Interrupt Flag - CLEAR */
    USB_DEVICE_NAKOUTI_SET_gc   = (0x10), /* NAK OUT Received Interrupt Flag - SET */
} USB_DEVICE_NAKOUTI_t;

/* Received SETUP Interrupt Flag */
typedef enum USB_DEVICE_RXSTPI_enum
{
    USB_DEVICE_RXSTPI_CLEAR_gc = (0x00), /* Received SETUP Interrupt Flag - CLEAR */
    USB_DEVICE_RXSTPI_SET_gc   = (0x08), /* Received SETUP Interrupt Flag - SET */
} USB_DEVICE_RXSTPI_t;

/* Received OUT Data Interrupt Flag */
typedef enum USB_DEVICE_RXOUTI_enum
{
    USB_DEVICE_RXOUTI_CLEAR_gc = (0x00), /* Received OUT Data Interrupt Flag - CLEAR */
    USB_DEVICE_RXOUTI_SET_gc   = (0x04), /* Received OUT Data Interrupt Flag - SET */
} USB_DEVICE_RXOUTI_t;

/* STALLEDI Interrupt Flag */
typedef enum USB_DEVICE_STALLEDI_enum
{
    USB_DEVICE_STALLEDI_CLEAR_gc = (0x00), /* STALLEDI Interrupt Flag - CLEAR */
    USB_DEVICE_STALLEDI_SET_gc   = (0x02), /* STALLEDI Interrupt Flag - SET */
} USB_DEVICE_STALLEDI_t;

/* Transmitter Ready Interrupt Flag */
typedef enum USB_DEVICE_TXINI_enum
{
    USB_DEVICE_TXINI_CLEAR_gc = (0x00), /* Transmitter Ready Interrupt Flag - CLEAR */
    USB_DEVICE_TXINI_SET_gc   = (0x01), /* Transmitter Ready Interrupt Flag - SET */
} USB_DEVICE_TXINI_t;

/* Frame Number CRC Error Flag */
typedef enum USB_DEVICE_FNCERR_enum
{
    USB_DEVICE_FNCERR_CLEAR_gc = (0x00), /* Frame Number CRC Error Flag - CLEAR */
    USB_DEVICE_FNCERR_SET_gc   = (0x10), /* Frame Number CRC Error Flag - SET */
} USB_DEVICE_FNCERR_t;

/* Address Enable Bit */
typedef enum USB_DEVICE_ADDEN_enum
{
    USB_DEVICE_ADDEN_CLEAR_gc = (0x00), /* Address Enable Bit - CLEAR */
    USB_DEVICE_ADDEN_SET_gc   = (0x80), /* Address Enable Bit - SET */
} USB_DEVICE_ADDEN_t;

/* USB Address Bits */
#define USB_DEVICE_UDADDR_UADD_gc(x) (x & 0x7F)

/* Upstream Resume Interrupt Enable Bit */
typedef enum USB_DEVICE_UPRSME_enum
{
    USB_DEVICE_UPRSME_CLEAR_gc = (0x00), /* Upstream Resume Interrupt Enable Bit - CLEAR */
    USB_DEVICE_UPRSME_SET_gc   = (0x40), /* Upstream Resume Interrupt Enable Bit - SET */
} USB_DEVICE_UPRSME_t;

/* End Of Resume Interrupt Enable Bit */
typedef enum USB_DEVICE_EORSME_enum
{
    USB_DEVICE_EORSME_CLEAR_gc = (0x00), /* End Of Resume Interrupt Enable Bit - CLEAR */
    USB_DEVICE_EORSME_SET_gc   = (0x20), /* End Of Resume Interrupt Enable Bit - SET */
} USB_DEVICE_EORSME_t;

/* Wake-up CPU Interrupt Enable Bit */
typedef enum USB_DEVICE_WAKEUPE_enum
{
    USB_DEVICE_WAKEUPE_CLEAR_gc = (0x00), /* Wake-up CPU Interrupt Enable Bit - CLEAR */
    USB_DEVICE_WAKEUPE_SET_gc   = (0x10), /* Wake-up CPU Interrupt Enable Bit - SET */
} USB_DEVICE_WAKEUPE_t;

/* End Of Reset Interrupt Enable Bit */
typedef enum USB_DEVICE_EORSTE_enum
{
    USB_DEVICE_EORSTE_CLEAR_gc = (0x00), /* End Of Reset Interrupt Enable Bit - CLEAR */
    USB_DEVICE_EORSTE_SET_gc   = (0x08), /* End Of Reset Interrupt Enable Bit - SET */
} USB_DEVICE_EORSTE_t;

/* Start Of Frame Interrupt Enable Bit */
typedef enum USB_DEVICE_SOFE_enum
{
    USB_DEVICE_SOFE_CLEAR_gc = (0x00), /* Start Of Frame Interrupt Enable Bit - CLEAR */
    USB_DEVICE_SOFE_SET_gc   = (0x04), /* Start Of Frame Interrupt Enable Bit - SET */
} USB_DEVICE_SOFE_t;

/* Suspend Interrupt Enable Bit */
typedef enum USB_DEVICE_SUSPE_enum
{
    USB_DEVICE_SUSPE_CLEAR_gc = (0x00), /* Suspend Interrupt Enable Bit - CLEAR */
    USB_DEVICE_SUSPE_SET_gc   = (0x01), /* Suspend Interrupt Enable Bit - SET */
} USB_DEVICE_SUSPE_t;

/* Upstream Resume Interrupt Flag */
typedef enum USB_DEVICE_UPRSMI_enum
{
    USB_DEVICE_UPRSMI_CLEAR_gc = (0x00), /* Upstream Resume Interrupt Flag - CLEAR */
    USB_DEVICE_UPRSMI_SET_gc   = (0x40), /* Upstream Resume Interrupt Flag - SET */
} USB_DEVICE_UPRSMI_t;

/* End Of Resume Interrupt Flag */
typedef enum USB_DEVICE_EORSMI_enum
{
    USB_DEVICE_EORSMI_CLEAR_gc = (0x00), /* End Of Resume Interrupt Flag - CLEAR */
    USB_DEVICE_EORSMI_SET_gc   = (0x20), /* End Of Resume Interrupt Flag - SET */
} USB_DEVICE_EORSMI_t;

/* Wake-up CPU Interrupt Flag */
typedef enum USB_DEVICE_WAKEUPI_enum
{
    USB_DEVICE_WAKEUPI_CLEAR_gc = (0x00), /* Wake-up CPU Interrupt Flag - CLEAR */
    USB_DEVICE_WAKEUPI_SET_gc   = (0x10), /* Wake-up CPU Interrupt Flag - SET */
} USB_DEVICE_WAKEUPI_t;

/* End Of Reset Interrupt Flag */
typedef enum USB_DEVICE_EORSTI_enum
{
    USB_DEVICE_EORSTI_CLEAR_gc = (0x00), /* End Of Reset Interrupt Flag - CLEAR */
    USB_DEVICE_EORSTI_SET_gc   = (0x08), /* End Of Reset Interrupt Flag - SET */
} USB_DEVICE_EORSTI_t;

/* Start Of Frame Interrupt Flag */
typedef enum USB_DEVICE_SOFI_enum
{
    USB_DEVICE_SOFI_CLEAR_gc = (0x00), /* Start Of Frame Interrupt Flag - CLEAR */
    USB_DEVICE_SOFI_SET_gc   = (0x04), /* Start Of Frame Interrupt Flag - SET */
} USB_DEVICE_SOFI_t;

/* Suspend Interrupt Flag */
typedef enum USB_DEVICE_SUSPI_enum
{
    USB_DEVICE_SUSPI_CLEAR_gc = (0x00), /* Suspend Interrupt Flag - CLEAR */
    USB_DEVICE_SUSPI_SET_gc   = (0x01), /* Suspend Interrupt Flag - SET */
} USB_DEVICE_SUSPI_t;

/* USB Reset CPU Bit */
typedef enum USB_DEVICE_RSTCPU_enum
{
    USB_DEVICE_RSTCPU_CLEAR_gc = (0x00), /* USB Reset CPU Bit - CLEAR */
    USB_DEVICE_RSTCPU_SET_gc   = (0x04), /* USB Reset CPU Bit - SET */
} USB_DEVICE_RSTCPU_t;

/* Remote Wake-up Bit */
typedef enum USB_DEVICE_RMWKUP_enum
{
    USB_DEVICE_RMWKUP_CLEAR_gc = (0x00), /* Remote Wake-up Bit - CLEAR */
    USB_DEVICE_RMWKUP_SET_gc   = (0x02), /* Remote Wake-up Bit - SET */
} USB_DEVICE_RMWKUP_t;

/* Detach Bit */
typedef enum USB_DEVICE_DETACH_enum
{
    USB_DEVICE_DETACH_CLEAR_gc = (0x00), /* Detach Bit - CLEAR */
    USB_DEVICE_DETACH_SET_gc   = (0x01), /* Detach Bit - SET */
} USB_DEVICE_DETACH_t;

/* USB macro Enable Bit */
typedef enum USB_DEVICE_USBE_enum
{
    USB_DEVICE_USBE_CLEAR_gc = (0x00), /* USB macro Enable Bit - CLEAR */
    USB_DEVICE_USBE_SET_gc   = (0x80), /* USB macro Enable Bit - SET */
} USB_DEVICE_USBE_t;

/* Freeze USB Clock Bit */
typedef enum USB_DEVICE_FRZCLK_enum
{
    USB_DEVICE_FRZCLK_CLEAR_gc = (0x00), /* Freeze USB Clock Bit - CLEAR */
    USB_DEVICE_FRZCLK_SET_gc   = (0x20), /* Freeze USB Clock Bit - SET */
} USB_DEVICE_FRZCLK_t;

/* Regulator Disable */
typedef enum USB_DEVICE_REGDIS_enum
{
    USB_DEVICE_REGDIS_CLEAR_gc = (0x00), /* Regulator Disable - CLEAR */
    USB_DEVICE_REGDIS_SET_gc   = (0x01), /* Regulator Disable - SET */
} USB_DEVICE_REGDIS_t;

/*
--------------------------------------------------------------------------------
CPU - CPU Registers
--------------------------------------------------------------------------------
*/

typedef struct CPU_struct
{
    register8_t rsv_0x00[62];  /* RESERVED REGISTER BLOCK */
    register8_t GPIOR0;        /* General Purpose IO Register 0 */
    register8_t rsv_0x3F[11];  /* RESERVED REGISTER BLOCK */
    register8_t GPIOR1;        /* General Purpose IO Register 1 */
    register8_t GPIOR2;        /* General Purpose IO Register 2 */
    register8_t rsv_0x4C[5];   /* RESERVED REGISTER BLOCK */
    register8_t DWDR;          /* debugWire communication register */
    register8_t rsv_0x52;      /* RESERVED REGISTER */
    register8_t SMCR;          /* Sleep Mode Control Register */
    register8_t MCUSR;         /* MCU Status Register */
    register8_t MCUCR;         /* MCU Control Register */
    register8_t rsv_0x56[6];   /* RESERVED REGISTER BLOCK */
    register8_t EIND;          /* Extended Indirect Register */
    _REGISTER16 (SP);          /* Stack Pointer  */
    register8_t rsv_0x5E;      /* RESERVED REGISTER */
    register8_t SREG;          /* Status Register */
    register8_t rsv_0x60;      /* RESERVED REGISTER */
    register8_t CLKPR;        
    register8_t rsv_0x62[2];   /* RESERVED REGISTER BLOCK */
    register8_t PRR0;          /* Power Reduction Register0 */
    register8_t PRR1;          /* Power Reduction Register1 */
    register8_t OSCCAL;        /* Oscillator Calibration Value */
    register8_t rsv_0x67[105]; /* RESERVED REGISTER BLOCK */
    register8_t CLKSEL0;      
    register8_t CLKSEL1;      
    register8_t CLKSTA;       
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

/* USB reset flag */
typedef enum CPU_USBRF_enum
{
    CPU_USBRF_CLEAR_gc = (0x00), /* USB reset flag - CLEAR */
    CPU_USBRF_SET_gc   = (0x20), /* USB reset flag - SET */
} CPU_USBRF_t;

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
#define CPU_CLKPR_CLKPS_gc(x) (x & 0x0F)

/* Sleep Mode Select bits */
typedef enum CPU_SM_enum
{
    CPU_SM_IDLE_gc     = (0x00<<1), /* Idle */
    CPU_SM_VAL_0x01_gc = (0x01<<1), /* Reserved */
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

/* Power Reduction USART1 */
typedef enum CPU_PRUSART1_enum
{
    CPU_PRUSART1_CLEAR_gc = (0x00), /* Power Reduction USART1 - CLEAR */
    CPU_PRUSART1_SET_gc   = (0x01), /* Power Reduction USART1 - SET */
} CPU_PRUSART1_t;

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

/* -RCON */
typedef enum CPU_RCON_enum
{
    CPU_RCON_CLEAR_gc = (0x00), /* -RCON - CLEAR */
    CPU_RCON_SET_gc   = (0x02), /* -RCON - SET */
} CPU_RCON_t;

/* -EXTON */
typedef enum CPU_EXTON_enum
{
    CPU_EXTON_CLEAR_gc = (0x00), /* -EXTON - CLEAR */
    CPU_EXTON_SET_gc   = (0x01), /* -EXTON - SET */
} CPU_EXTON_t;

/* -RCCKSEL */
#define CPU_CLKSEL1_RCCKSEL_gc(x) ((x<<4) & 0xF0)

/* -EXCKSEL */
#define CPU_CLKSEL1_EXCKSEL_gc(x) (x & 0x0F)

/* -RCSUT */
#define CPU_CLKSEL0_RCSUT_gc(x) ((x<<6) & 0xC0)

/* -EXSUT */
#define CPU_CLKSEL0_EXSUT_gc(x) ((x<<4) & 0x30)

/* -RCE */
typedef enum CPU_RCE_enum
{
    CPU_RCE_CLEAR_gc = (0x00), /* -RCE - CLEAR */
    CPU_RCE_SET_gc   = (0x08), /* -RCE - SET */
} CPU_RCE_t;

/* -EXTE */
typedef enum CPU_EXTE_enum
{
    CPU_EXTE_CLEAR_gc = (0x00), /* -EXTE - CLEAR */
    CPU_EXTE_SET_gc   = (0x04), /* -EXTE - SET */
} CPU_EXTE_t;

/* -CLKS */
typedef enum CPU_CLKS_enum
{
    CPU_CLKS_CLEAR_gc = (0x00), /* -CLKS - CLEAR */
    CPU_CLKS_SET_gc   = (0x01), /* -CLKS - SET */
} CPU_CLKS_t;

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
} EXINT_t;


/* External Interrupt Sense Control Bit */
#define EXINT_EICRA_ISC3_gc(x) ((x<<6) & 0xC0)

/* External Interrupt Sense Control Bit */
#define EXINT_EICRA_ISC2_gc(x) ((x<<4) & 0x30)

/* External Interrupt Sense Control Bit */
#define EXINT_EICRA_ISC1_gc(x) ((x<<2) & 0x0C)

/* External Interrupt Sense Control Bit */
#define EXINT_EICRA_ISC0_gc(x) (x & 0x03)

/* External Interrupt 7-4 Sense Control Bit */
#define EXINT_EICRB_ISC7_gc(x) ((x<<6) & 0xC0)

/* External Interrupt 7-4 Sense Control Bit */
#define EXINT_EICRB_ISC6_gc(x) ((x<<4) & 0x30)

/* External Interrupt 7-4 Sense Control Bit */
#define EXINT_EICRB_ISC5_gc(x) ((x<<2) & 0x0C)

/* External Interrupt 7-4 Sense Control Bit */
#define EXINT_EICRB_ISC4_gc(x) (x & 0x03)

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
    register8_t UCSR1D;        /* USART Control and Status Register D */
    _REGISTER16 (UBRR1);       /* USART Baud Rate Register Bytes */
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
#define USART1_UCSR1C_UMSEL1_gc(x) ((x<<6) & 0xC0)

/* Parity Mode Bits */
#define USART1_UCSR1C_UPM1_gc(x) ((x<<4) & 0x30)

/* Stop Bit Select */
typedef enum USART1_USBS1_enum
{
    USART1_USBS1_CLEAR_gc = (0x00), /* Stop Bit Select - CLEAR */
    USART1_USBS1_SET_gc   = (0x08), /* Stop Bit Select - SET */
} USART1_USBS1_t;

/* Character Size */
#define USART1_UCSR1C_UCSZ1_gc(x) ((x<<1) & 0x06)

/* Clock Polarity */
typedef enum USART1_UCPOL1_enum
{
    USART1_UCPOL1_CLEAR_gc = (0x00), /* Clock Polarity - CLEAR */
    USART1_UCPOL1_SET_gc   = (0x01), /* Clock Polarity - SET */
} USART1_UCPOL1_t;

/* CTS Enable */
typedef enum USART1_CTSEN_enum
{
    USART1_CTSEN_CLEAR_gc = (0x00), /* CTS Enable - CLEAR */
    USART1_CTSEN_SET_gc   = (0x02), /* CTS Enable - SET */
} USART1_CTSEN_t;

/* RTS Enable */
typedef enum USART1_RTSEN_enum
{
    USART1_RTSEN_CLEAR_gc = (0x00), /* RTS Enable - CLEAR */
    USART1_RTSEN_SET_gc   = (0x01), /* RTS Enable - SET */
} USART1_RTSEN_t;

/*
--------------------------------------------------------------------------------
WDT - Watchdog Timer
--------------------------------------------------------------------------------
*/

typedef struct WDT_struct
{
    register8_t rsv_0x00[96]; /* RESERVED REGISTER BLOCK */
    register8_t WDTCSR;       /* Watchdog Timer Control Register */
    register8_t rsv_0x61;     /* RESERVED REGISTER */
    register8_t WDTCKD;       /* Watchdog Timer Clock Divider */
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
#define WDT_WDTCSR_WDP_gc(x) (x & 0x27)

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

/* Watchdog Early Warning Interrupt Flag */
typedef enum WDT_WDEWIF_enum
{
    WDT_WDEWIF_CLEAR_gc = (0x00), /* Watchdog Early Warning Interrupt Flag - CLEAR */
    WDT_WDEWIF_SET_gc   = (0x08), /* Watchdog Early Warning Interrupt Flag - SET */
} WDT_WDEWIF_t;

/* Watchdog Early Warning Interrupt Enable */
typedef enum WDT_WDEWIE_enum
{
    WDT_WDEWIE_CLEAR_gc = (0x00), /* Watchdog Early Warning Interrupt Enable - CLEAR */
    WDT_WDEWIE_SET_gc   = (0x04), /* Watchdog Early Warning Interrupt Enable - SET */
} WDT_WDEWIE_t;

/* Watchdog Timer Clock Dividers */
#define WDT_WDTCKD_WCLKD_gc(x) (x & 0x03)

/*
--------------------------------------------------------------------------------
AC - Analog Comparator
--------------------------------------------------------------------------------
*/

typedef struct AC_struct
{
    register8_t rsv_0x00[80]; /* RESERVED REGISTER BLOCK */
    register8_t ACSR;         /* Analog Comparator Control And Status Register */
    register8_t rsv_0x51[44]; /* RESERVED REGISTER BLOCK */
    register8_t ACMUX;        /* Analog Comparator Input Multiplexer */
    register8_t rsv_0x7E;     /* RESERVED REGISTER */
    register8_t DIDR1;       
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

/* Analog Comparator Selection Bits */
typedef enum AC_CMUX_enum
{
    AC_CMUX_AIN1_gc = (0x00), /* AIN1 */
    AC_CMUX_AIN2_gc = (0x01), /* AIN2 */
    AC_CMUX_AIN3_gc = (0x02), /* AIN3 */
    AC_CMUX_AIN4_gc = (0x03), /* AIN4 */
    AC_CMUX_AIN5_gc = (0x04), /* AIN5 */
    AC_CMUX_AIN6_gc = (0x05), /* AIN6 */
} AC_CMUX_t;

/* AIN7 Digital Input Disable */
typedef enum AC_AIN7D_enum
{
    AC_AIN7D_CLEAR_gc = (0x00), /* AIN7 Digital Input Disable - CLEAR */
    AC_AIN7D_SET_gc   = (0x80), /* AIN7 Digital Input Disable - SET */
} AC_AIN7D_t;

/* AIN6 Digital Input Disable */
typedef enum AC_AIN6D_enum
{
    AC_AIN6D_CLEAR_gc = (0x00), /* AIN6 Digital Input Disable - CLEAR */
    AC_AIN6D_SET_gc   = (0x40), /* AIN6 Digital Input Disable - SET */
} AC_AIN6D_t;

/* AIN5 Digital Input Disable */
typedef enum AC_AIN5D_enum
{
    AC_AIN5D_CLEAR_gc = (0x00), /* AIN5 Digital Input Disable - CLEAR */
    AC_AIN5D_SET_gc   = (0x20), /* AIN5 Digital Input Disable - SET */
} AC_AIN5D_t;

/* AIN4 Digital Input Disable */
typedef enum AC_AIN4D_enum
{
    AC_AIN4D_CLEAR_gc = (0x00), /* AIN4 Digital Input Disable - CLEAR */
    AC_AIN4D_SET_gc   = (0x10), /* AIN4 Digital Input Disable - SET */
} AC_AIN4D_t;

/* AIN3 Digital Input Disable */
typedef enum AC_AIN3D_enum
{
    AC_AIN3D_CLEAR_gc = (0x00), /* AIN3 Digital Input Disable - CLEAR */
    AC_AIN3D_SET_gc   = (0x08), /* AIN3 Digital Input Disable - SET */
} AC_AIN3D_t;

/* AIN2 Digital Input Disable */
typedef enum AC_AIN2D_enum
{
    AC_AIN2D_CLEAR_gc = (0x00), /* AIN2 Digital Input Disable - CLEAR */
    AC_AIN2D_SET_gc   = (0x04), /* AIN2 Digital Input Disable - SET */
} AC_AIN2D_t;

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
================================================================================
IO Module Instances. Mapped to memory.
================================================================================
*/

#define PORTB      (*(PORTB_t *) 0x0000)      /* I/O Port */
#define PORTD      (*(PORTD_t *) 0x0000)      /* I/O Port */
#define PORTC      (*(PORTC_t *) 0x0000)      /* I/O Port */
#define SPI        (*(SPI_t *) 0x0000)        /* Serial Peripheral Interface */
#define BOOT_LOAD  (*(BOOT_LOAD_t *) 0x0000)  /* Bootloader */
#define EEPROM     (*(EEPROM_t *) 0x0000)     /* EEPROM */
#define TC0        (*(TC0_t *) 0x0000)        /* Timer/Counter, 8-bit */
#define TC1        (*(TC1_t *) 0x0000)        /* Timer/Counter, 16-bit */
#define PLL        (*(PLL_t *) 0x0000)        /* Phase Locked Loop */
#define USB_DEVICE (*(USB_DEVICE_t *) 0x0000) /* USB Device Registers */
#define CPU        (*(CPU_t *) 0x0000)        /* CPU Registers */
#define EXINT      (*(EXINT_t *) 0x0000)      /* External Interrupts */
#define USART1     (*(USART1_t *) 0x0000)     /* USART */
#define WDT        (*(WDT_t *) 0x0000)        /* Watchdog Timer */
#define AC         (*(AC_t *) 0x0000)         /* Analog Comparator */
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
#define FUSE_BODLEVEL_2V7_gc      (0x06) /* Brown-out detection level at VCC=2.7 V */
#define FUSE_BODLEVEL_2V9_gc      (0x05) /* Brown-out detection level at VCC=2.9 V */
#define FUSE_BODLEVEL_3V0_gc      (0x04) /* Brown-out detection level at VCC=3.0 V */
#define FUSE_BODLEVEL_3V5_gc      (0x03) /* Brown-out detection level at VCC=3.5 V */
#define FUSE_BODLEVEL_3V6_gc      (0x02) /* Brown-out detection level at VCC=3.6 V */
#define FUSE_BODLEVEL_4V0_gc      (0x01) /* Brown-out detection level at VCC=4.0 V */
#define FUSE_BODLEVEL_4V3_gc      (0x00) /* Brown-out detection level at VCC=4.3 V */


/* Hardware Boot Enable */
#define FUSE_HWBE_CLEAR_gc (0x00) /* Hardware Boot Enable - CLEAR */
#define FUSE_HWBE_SET_gc   (0x08) /* Hardware Boot Enable - SET */


/* Debug Wire enable */
#define FUSE_DWEN_CLEAR_gc (0x00) /* Debug Wire enable - CLEAR */
#define FUSE_DWEN_SET_gc   (0x80) /* Debug Wire enable - SET */


/* Reset Disabled (Enable PC6 as i/o pin) */
#define FUSE_RSTDISBL_CLEAR_gc (0x00) /* Reset Disabled (Enable PC6 as i/o pin) - CLEAR */
#define FUSE_RSTDISBL_SET_gc   (0x40) /* Reset Disabled (Enable PC6 as i/o pin) - SET */


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
#define FUSE_BOOTSZ_256W_1F00_gc  (0x03<<1) /* Boot Flash size=256 words start address=$1F00 */
#define FUSE_BOOTSZ_512W_1E00_gc  (0x02<<1) /* Boot Flash size=512 words start address=$1E00 */
#define FUSE_BOOTSZ_1024W_1C00_gc (0x01<<1) /* Boot Flash size=1024 words start address=$1C00 */
#define FUSE_BOOTSZ_2048W_1800_gc (0x00<<1) /* Boot Flash size=2048 words start address=$1800 */


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


/* Port C Data Register bits */
#define PORTC_PORTC_PORTC_gc(x) ((x<<4) & 0xF0)

/* Port C Data Register bits */
#define PORTC_PORTC_PORTC_gc(x) (x & 0x07)

/* Port C Data Direction Register bits */
#define PORTC_DDRC_DDC_gc(x) ((x<<4) & 0xF0)

/* Port C Data Direction Register bits */
#define PORTC_DDRC_DDC_gc(x) (x & 0x07)

/* Port C Input Pins bits */
#define PORTC_PINC_PINC_gc(x) ((x<<4) & 0xF0)

/* Port C Input Pins bits */
#define PORTC_PINC_PINC_gc(x) (x & 0x07)

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
TC16 - Timer/Counter, 16-bit
--------------------------------------------------------------------------------
*/


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


/*
--------------------------------------------------------------------------------
USB_DEVICE - USB Device Registers
--------------------------------------------------------------------------------
*/


/* USB Buffers Direct Drive enable configuration */
#define USB_DEVICE_UPOE_UPWE_gc(x) ((x<<6) & 0xC0)

/* USB direct drive values */
#define USB_DEVICE_UPOE_UPDRV_gc(x) ((x<<4) & 0x30)

/* D+ Input value */
#define USB_DEVICE_DPI_CLEAR_gc (0x00) /* D+ Input value - CLEAR */
#define USB_DEVICE_DPI_SET_gc   (0x02) /* D+ Input value - SET */


/* D- Input value */
#define USB_DEVICE_DMI_CLEAR_gc (0x00) /* D- Input value - CLEAR */
#define USB_DEVICE_DMI_SET_gc   (0x01) /* D- Input value - SET */


/* Flow Error Interrupt Enable Flag */
#define USB_DEVICE_FLERRE_CLEAR_gc (0x00) /* Flow Error Interrupt Enable Flag - CLEAR */
#define USB_DEVICE_FLERRE_SET_gc   (0x80) /* Flow Error Interrupt Enable Flag - SET */


/* NAK IN Interrupt Enable Bit */
#define USB_DEVICE_NAKINE_CLEAR_gc (0x00) /* NAK IN Interrupt Enable Bit - CLEAR */
#define USB_DEVICE_NAKINE_SET_gc   (0x40) /* NAK IN Interrupt Enable Bit - SET */


/* NAK OUT Interrupt Enable Bit */
#define USB_DEVICE_NAKOUTE_CLEAR_gc (0x00) /* NAK OUT Interrupt Enable Bit - CLEAR */
#define USB_DEVICE_NAKOUTE_SET_gc   (0x10) /* NAK OUT Interrupt Enable Bit - SET */


/* Received SETUP Interrupt Enable Flag */
#define USB_DEVICE_RXSTPE_CLEAR_gc (0x00) /* Received SETUP Interrupt Enable Flag - CLEAR */
#define USB_DEVICE_RXSTPE_SET_gc   (0x08) /* Received SETUP Interrupt Enable Flag - SET */


/* Received OUT Data Interrupt Enable Flag */
#define USB_DEVICE_RXOUTE_CLEAR_gc (0x00) /* Received OUT Data Interrupt Enable Flag - CLEAR */
#define USB_DEVICE_RXOUTE_SET_gc   (0x04) /* Received OUT Data Interrupt Enable Flag - SET */


/* Stalled Interrupt Enable Flag */
#define USB_DEVICE_STALLEDE_CLEAR_gc (0x00) /* Stalled Interrupt Enable Flag - CLEAR */
#define USB_DEVICE_STALLEDE_SET_gc   (0x02) /* Stalled Interrupt Enable Flag - SET */


/* Transmitter Ready Interrupt Enable Flag */
#define USB_DEVICE_TXINE_CLEAR_gc (0x00) /* Transmitter Ready Interrupt Enable Flag - CLEAR */
#define USB_DEVICE_TXINE_SET_gc   (0x01) /* Transmitter Ready Interrupt Enable Flag - SET */


/* Control Direction */
#define USB_DEVICE_CTRLDIR_CLEAR_gc (0x00) /* Control Direction - CLEAR */
#define USB_DEVICE_CTRLDIR_SET_gc   (0x04) /* Control Direction - SET */


/* Current Bank */
#define USB_DEVICE_UESTA1X_CURRBK_gc(x) (x & 0x03)

/* Configuration Status Flag */
#define USB_DEVICE_CFGOK_CLEAR_gc (0x00) /* Configuration Status Flag - CLEAR */
#define USB_DEVICE_CFGOK_SET_gc   (0x80) /* Configuration Status Flag - SET */


/* Overflow Error Interrupt Flag */
#define USB_DEVICE_OVERFI_CLEAR_gc (0x00) /* Overflow Error Interrupt Flag - CLEAR */
#define USB_DEVICE_OVERFI_SET_gc   (0x40) /* Overflow Error Interrupt Flag - SET */


/* Underflow Error Interrupt Flag */
#define USB_DEVICE_UNDERFI_CLEAR_gc (0x00) /* Underflow Error Interrupt Flag - CLEAR */
#define USB_DEVICE_UNDERFI_SET_gc   (0x20) /* Underflow Error Interrupt Flag - SET */


/* Data Toggle Sequencing Flag */
#define USB_DEVICE_UESTA0X_DTSEQ_gc(x) ((x<<2) & 0x0C)

/* Busy Bank Flag */
#define USB_DEVICE_UESTA0X_NBUSYBK_gc(x) (x & 0x03)

/* Endpoint Size Bits */
#define USB_DEVICE_UECFG1X_EPSIZE_gc(x) ((x<<4) & 0x70)

/* Endpoint Bank Bits */
#define USB_DEVICE_UECFG1X_EPBK_gc(x) ((x<<2) & 0x0C)

/* Endpoint Allocation Bit */
#define USB_DEVICE_ALLOC_CLEAR_gc (0x00) /* Endpoint Allocation Bit - CLEAR */
#define USB_DEVICE_ALLOC_SET_gc   (0x02) /* Endpoint Allocation Bit - SET */


/* Endpoint Type Bits */
#define USB_DEVICE_UECFG0X_EPTYPE_gc(x) ((x<<6) & 0xC0)

/* Endpoint Direction Bit */
#define USB_DEVICE_EPDIR_CLEAR_gc (0x00) /* Endpoint Direction Bit - CLEAR */
#define USB_DEVICE_EPDIR_SET_gc   (0x01) /* Endpoint Direction Bit - SET */


/* STALL Request Handshake Bit */
#define USB_DEVICE_STALLRQ_CLEAR_gc (0x00) /* STALL Request Handshake Bit - CLEAR */
#define USB_DEVICE_STALLRQ_SET_gc   (0x20) /* STALL Request Handshake Bit - SET */


/* STALL Request Clear Handshake Bit */
#define USB_DEVICE_STALLRQC_CLEAR_gc (0x00) /* STALL Request Clear Handshake Bit - CLEAR */
#define USB_DEVICE_STALLRQC_SET_gc   (0x10) /* STALL Request Clear Handshake Bit - SET */


/* Reset Data Toggle Bit */
#define USB_DEVICE_RSTDT_CLEAR_gc (0x00) /* Reset Data Toggle Bit - CLEAR */
#define USB_DEVICE_RSTDT_SET_gc   (0x08) /* Reset Data Toggle Bit - SET */


/* Endpoint Enable Bit */
#define USB_DEVICE_EPEN_CLEAR_gc (0x00) /* Endpoint Enable Bit - CLEAR */
#define USB_DEVICE_EPEN_SET_gc   (0x01) /* Endpoint Enable Bit - SET */


/* FIFO Control Bit */
#define USB_DEVICE_FIFOCON_CLEAR_gc (0x00) /* FIFO Control Bit - CLEAR */
#define USB_DEVICE_FIFOCON_SET_gc   (0x80) /* FIFO Control Bit - SET */


/* NAK IN Received Interrupt Flag */
#define USB_DEVICE_NAKINI_CLEAR_gc (0x00) /* NAK IN Received Interrupt Flag - CLEAR */
#define USB_DEVICE_NAKINI_SET_gc   (0x40) /* NAK IN Received Interrupt Flag - SET */


/* Read/Write Allowed Flag */
#define USB_DEVICE_RWAL_CLEAR_gc (0x00) /* Read/Write Allowed Flag - CLEAR */
#define USB_DEVICE_RWAL_SET_gc   (0x20) /* Read/Write Allowed Flag - SET */


/* NAK OUT Received Interrupt Flag */
#define USB_DEVICE_NAKOUTI_CLEAR_gc (0x00) /* NAK OUT Received Interrupt Flag - CLEAR */
#define USB_DEVICE_NAKOUTI_SET_gc   (0x10) /* NAK OUT Received Interrupt Flag - SET */


/* Received SETUP Interrupt Flag */
#define USB_DEVICE_RXSTPI_CLEAR_gc (0x00) /* Received SETUP Interrupt Flag - CLEAR */
#define USB_DEVICE_RXSTPI_SET_gc   (0x08) /* Received SETUP Interrupt Flag - SET */


/* Received OUT Data Interrupt Flag */
#define USB_DEVICE_RXOUTI_CLEAR_gc (0x00) /* Received OUT Data Interrupt Flag - CLEAR */
#define USB_DEVICE_RXOUTI_SET_gc   (0x04) /* Received OUT Data Interrupt Flag - SET */


/* STALLEDI Interrupt Flag */
#define USB_DEVICE_STALLEDI_CLEAR_gc (0x00) /* STALLEDI Interrupt Flag - CLEAR */
#define USB_DEVICE_STALLEDI_SET_gc   (0x02) /* STALLEDI Interrupt Flag - SET */


/* Transmitter Ready Interrupt Flag */
#define USB_DEVICE_TXINI_CLEAR_gc (0x00) /* Transmitter Ready Interrupt Flag - CLEAR */
#define USB_DEVICE_TXINI_SET_gc   (0x01) /* Transmitter Ready Interrupt Flag - SET */


/* Frame Number CRC Error Flag */
#define USB_DEVICE_FNCERR_CLEAR_gc (0x00) /* Frame Number CRC Error Flag - CLEAR */
#define USB_DEVICE_FNCERR_SET_gc   (0x10) /* Frame Number CRC Error Flag - SET */


/* Address Enable Bit */
#define USB_DEVICE_ADDEN_CLEAR_gc (0x00) /* Address Enable Bit - CLEAR */
#define USB_DEVICE_ADDEN_SET_gc   (0x80) /* Address Enable Bit - SET */


/* USB Address Bits */
#define USB_DEVICE_UDADDR_UADD_gc(x) (x & 0x7F)

/* Upstream Resume Interrupt Enable Bit */
#define USB_DEVICE_UPRSME_CLEAR_gc (0x00) /* Upstream Resume Interrupt Enable Bit - CLEAR */
#define USB_DEVICE_UPRSME_SET_gc   (0x40) /* Upstream Resume Interrupt Enable Bit - SET */


/* End Of Resume Interrupt Enable Bit */
#define USB_DEVICE_EORSME_CLEAR_gc (0x00) /* End Of Resume Interrupt Enable Bit - CLEAR */
#define USB_DEVICE_EORSME_SET_gc   (0x20) /* End Of Resume Interrupt Enable Bit - SET */


/* Wake-up CPU Interrupt Enable Bit */
#define USB_DEVICE_WAKEUPE_CLEAR_gc (0x00) /* Wake-up CPU Interrupt Enable Bit - CLEAR */
#define USB_DEVICE_WAKEUPE_SET_gc   (0x10) /* Wake-up CPU Interrupt Enable Bit - SET */


/* End Of Reset Interrupt Enable Bit */
#define USB_DEVICE_EORSTE_CLEAR_gc (0x00) /* End Of Reset Interrupt Enable Bit - CLEAR */
#define USB_DEVICE_EORSTE_SET_gc   (0x08) /* End Of Reset Interrupt Enable Bit - SET */


/* Start Of Frame Interrupt Enable Bit */
#define USB_DEVICE_SOFE_CLEAR_gc (0x00) /* Start Of Frame Interrupt Enable Bit - CLEAR */
#define USB_DEVICE_SOFE_SET_gc   (0x04) /* Start Of Frame Interrupt Enable Bit - SET */


/* Suspend Interrupt Enable Bit */
#define USB_DEVICE_SUSPE_CLEAR_gc (0x00) /* Suspend Interrupt Enable Bit - CLEAR */
#define USB_DEVICE_SUSPE_SET_gc   (0x01) /* Suspend Interrupt Enable Bit - SET */


/* Upstream Resume Interrupt Flag */
#define USB_DEVICE_UPRSMI_CLEAR_gc (0x00) /* Upstream Resume Interrupt Flag - CLEAR */
#define USB_DEVICE_UPRSMI_SET_gc   (0x40) /* Upstream Resume Interrupt Flag - SET */


/* End Of Resume Interrupt Flag */
#define USB_DEVICE_EORSMI_CLEAR_gc (0x00) /* End Of Resume Interrupt Flag - CLEAR */
#define USB_DEVICE_EORSMI_SET_gc   (0x20) /* End Of Resume Interrupt Flag - SET */


/* Wake-up CPU Interrupt Flag */
#define USB_DEVICE_WAKEUPI_CLEAR_gc (0x00) /* Wake-up CPU Interrupt Flag - CLEAR */
#define USB_DEVICE_WAKEUPI_SET_gc   (0x10) /* Wake-up CPU Interrupt Flag - SET */


/* End Of Reset Interrupt Flag */
#define USB_DEVICE_EORSTI_CLEAR_gc (0x00) /* End Of Reset Interrupt Flag - CLEAR */
#define USB_DEVICE_EORSTI_SET_gc   (0x08) /* End Of Reset Interrupt Flag - SET */


/* Start Of Frame Interrupt Flag */
#define USB_DEVICE_SOFI_CLEAR_gc (0x00) /* Start Of Frame Interrupt Flag - CLEAR */
#define USB_DEVICE_SOFI_SET_gc   (0x04) /* Start Of Frame Interrupt Flag - SET */


/* Suspend Interrupt Flag */
#define USB_DEVICE_SUSPI_CLEAR_gc (0x00) /* Suspend Interrupt Flag - CLEAR */
#define USB_DEVICE_SUSPI_SET_gc   (0x01) /* Suspend Interrupt Flag - SET */


/* USB Reset CPU Bit */
#define USB_DEVICE_RSTCPU_CLEAR_gc (0x00) /* USB Reset CPU Bit - CLEAR */
#define USB_DEVICE_RSTCPU_SET_gc   (0x04) /* USB Reset CPU Bit - SET */


/* Remote Wake-up Bit */
#define USB_DEVICE_RMWKUP_CLEAR_gc (0x00) /* Remote Wake-up Bit - CLEAR */
#define USB_DEVICE_RMWKUP_SET_gc   (0x02) /* Remote Wake-up Bit - SET */


/* Detach Bit */
#define USB_DEVICE_DETACH_CLEAR_gc (0x00) /* Detach Bit - CLEAR */
#define USB_DEVICE_DETACH_SET_gc   (0x01) /* Detach Bit - SET */


/* USB macro Enable Bit */
#define USB_DEVICE_USBE_CLEAR_gc (0x00) /* USB macro Enable Bit - CLEAR */
#define USB_DEVICE_USBE_SET_gc   (0x80) /* USB macro Enable Bit - SET */


/* Freeze USB Clock Bit */
#define USB_DEVICE_FRZCLK_CLEAR_gc (0x00) /* Freeze USB Clock Bit - CLEAR */
#define USB_DEVICE_FRZCLK_SET_gc   (0x20) /* Freeze USB Clock Bit - SET */


/* Regulator Disable */
#define USB_DEVICE_REGDIS_CLEAR_gc (0x00) /* Regulator Disable - CLEAR */
#define USB_DEVICE_REGDIS_SET_gc   (0x01) /* Regulator Disable - SET */


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


/* Pull-up disable */
#define CPU_PUD_CLEAR_gc (0x00) /* Pull-up disable - CLEAR */
#define CPU_PUD_SET_gc   (0x10) /* Pull-up disable - SET */


/* Interrupt Vector Select */
#define CPU_IVSEL_CLEAR_gc (0x00) /* Interrupt Vector Select - CLEAR */
#define CPU_IVSEL_SET_gc   (0x02) /* Interrupt Vector Select - SET */


/* Interrupt Vector Change Enable */
#define CPU_IVCE_CLEAR_gc (0x00) /* Interrupt Vector Change Enable - CLEAR */
#define CPU_IVCE_SET_gc   (0x01) /* Interrupt Vector Change Enable - SET */


/* USB reset flag */
#define CPU_USBRF_CLEAR_gc (0x00) /* USB reset flag - CLEAR */
#define CPU_USBRF_SET_gc   (0x20) /* USB reset flag - SET */


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
#define CPU_CLKPR_CLKPS_gc(x) (x & 0x0F)

/* Sleep Mode Select bits */
#define CPU_SM_IDLE_gc     (0x00<<1) /* Idle */
#define CPU_SM_VAL_0x01_gc (0x01<<1) /* Reserved */
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


/* Power Reduction USART1 */
#define CPU_PRUSART1_CLEAR_gc (0x00) /* Power Reduction USART1 - CLEAR */
#define CPU_PRUSART1_SET_gc   (0x01) /* Power Reduction USART1 - SET */


/* Power Reduction Timer/Counter0 */
#define CPU_PRTIM0_CLEAR_gc (0x00) /* Power Reduction Timer/Counter0 - CLEAR */
#define CPU_PRTIM0_SET_gc   (0x20) /* Power Reduction Timer/Counter0 - SET */


/* Power Reduction Timer/Counter1 */
#define CPU_PRTIM1_CLEAR_gc (0x00) /* Power Reduction Timer/Counter1 - CLEAR */
#define CPU_PRTIM1_SET_gc   (0x08) /* Power Reduction Timer/Counter1 - SET */


/* Power Reduction Serial Peripheral Interface */
#define CPU_PRSPI_CLEAR_gc (0x00) /* Power Reduction Serial Peripheral Interface - CLEAR */
#define CPU_PRSPI_SET_gc   (0x04) /* Power Reduction Serial Peripheral Interface - SET */


/* -RCON */
#define CPU_RCON_CLEAR_gc (0x00) /* -RCON - CLEAR */
#define CPU_RCON_SET_gc   (0x02) /* -RCON - SET */


/* -EXTON */
#define CPU_EXTON_CLEAR_gc (0x00) /* -EXTON - CLEAR */
#define CPU_EXTON_SET_gc   (0x01) /* -EXTON - SET */


/* -RCCKSEL */
#define CPU_CLKSEL1_RCCKSEL_gc(x) ((x<<4) & 0xF0)

/* -EXCKSEL */
#define CPU_CLKSEL1_EXCKSEL_gc(x) (x & 0x0F)

/* -RCSUT */
#define CPU_CLKSEL0_RCSUT_gc(x) ((x<<6) & 0xC0)

/* -EXSUT */
#define CPU_CLKSEL0_EXSUT_gc(x) ((x<<4) & 0x30)

/* -RCE */
#define CPU_RCE_CLEAR_gc (0x00) /* -RCE - CLEAR */
#define CPU_RCE_SET_gc   (0x08) /* -RCE - SET */


/* -EXTE */
#define CPU_EXTE_CLEAR_gc (0x00) /* -EXTE - CLEAR */
#define CPU_EXTE_SET_gc   (0x04) /* -EXTE - SET */


/* -CLKS */
#define CPU_CLKS_CLEAR_gc (0x00) /* -CLKS - CLEAR */
#define CPU_CLKS_SET_gc   (0x01) /* -CLKS - SET */


/*
--------------------------------------------------------------------------------
EXINT - External Interrupts
--------------------------------------------------------------------------------
*/


/* External Interrupt Sense Control Bit */
#define EXINT_EICRA_ISC3_gc(x) ((x<<6) & 0xC0)

/* External Interrupt Sense Control Bit */
#define EXINT_EICRA_ISC2_gc(x) ((x<<4) & 0x30)

/* External Interrupt Sense Control Bit */
#define EXINT_EICRA_ISC1_gc(x) ((x<<2) & 0x0C)

/* External Interrupt Sense Control Bit */
#define EXINT_EICRA_ISC0_gc(x) (x & 0x03)

/* External Interrupt 7-4 Sense Control Bit */
#define EXINT_EICRB_ISC7_gc(x) ((x<<6) & 0xC0)

/* External Interrupt 7-4 Sense Control Bit */
#define EXINT_EICRB_ISC6_gc(x) ((x<<4) & 0x30)

/* External Interrupt 7-4 Sense Control Bit */
#define EXINT_EICRB_ISC5_gc(x) ((x<<2) & 0x0C)

/* External Interrupt 7-4 Sense Control Bit */
#define EXINT_EICRB_ISC4_gc(x) (x & 0x03)

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
#define USART1_UCSR1C_UMSEL1_gc(x) ((x<<6) & 0xC0)

/* Parity Mode Bits */
#define USART1_UCSR1C_UPM1_gc(x) ((x<<4) & 0x30)

/* Stop Bit Select */
#define USART1_USBS1_CLEAR_gc (0x00) /* Stop Bit Select - CLEAR */
#define USART1_USBS1_SET_gc   (0x08) /* Stop Bit Select - SET */


/* Character Size */
#define USART1_UCSR1C_UCSZ1_gc(x) ((x<<1) & 0x06)

/* Clock Polarity */
#define USART1_UCPOL1_CLEAR_gc (0x00) /* Clock Polarity - CLEAR */
#define USART1_UCPOL1_SET_gc   (0x01) /* Clock Polarity - SET */


/* CTS Enable */
#define USART1_CTSEN_CLEAR_gc (0x00) /* CTS Enable - CLEAR */
#define USART1_CTSEN_SET_gc   (0x02) /* CTS Enable - SET */


/* RTS Enable */
#define USART1_RTSEN_CLEAR_gc (0x00) /* RTS Enable - CLEAR */
#define USART1_RTSEN_SET_gc   (0x01) /* RTS Enable - SET */


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
#define WDT_WDTCSR_WDP_gc(x) (x & 0x27)

/* Watchdog Change Enable */
#define WDT_WDCE_CLEAR_gc (0x00) /* Watchdog Change Enable - CLEAR */
#define WDT_WDCE_SET_gc   (0x10) /* Watchdog Change Enable - SET */


/* Watch Dog Enable */
#define WDT_WDE_CLEAR_gc (0x00) /* Watch Dog Enable - CLEAR */
#define WDT_WDE_SET_gc   (0x08) /* Watch Dog Enable - SET */


/* Watchdog Early Warning Interrupt Flag */
#define WDT_WDEWIF_CLEAR_gc (0x00) /* Watchdog Early Warning Interrupt Flag - CLEAR */
#define WDT_WDEWIF_SET_gc   (0x08) /* Watchdog Early Warning Interrupt Flag - SET */


/* Watchdog Early Warning Interrupt Enable */
#define WDT_WDEWIE_CLEAR_gc (0x00) /* Watchdog Early Warning Interrupt Enable - CLEAR */
#define WDT_WDEWIE_SET_gc   (0x04) /* Watchdog Early Warning Interrupt Enable - SET */


/* Watchdog Timer Clock Dividers */
#define WDT_WDTCKD_WCLKD_gc(x) (x & 0x03)

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


/* Analog Comparator Input Capture Enable */
#define AC_ACIC_CLEAR_gc (0x00) /* Analog Comparator Input Capture Enable - CLEAR */
#define AC_ACIC_SET_gc   (0x04) /* Analog Comparator Input Capture Enable - SET */


/* Analog Comparator Interrupt Mode Select bits */
#define AC_ACIS_VAL_0x00_gc (0x00) /* Interrupt on Toggle */
#define AC_ACIS_VAL_0x01_gc (0x01) /* Reserved */
#define AC_ACIS_VAL_0x02_gc (0x02) /* Interrupt on Falling Edge */
#define AC_ACIS_VAL_0x03_gc (0x03) /* Interrupt on Rising Edge */


/* Analog Comparator Selection Bits */
#define AC_CMUX_AIN1_gc (0x00) /* AIN1 */
#define AC_CMUX_AIN2_gc (0x01) /* AIN2 */
#define AC_CMUX_AIN3_gc (0x02) /* AIN3 */
#define AC_CMUX_AIN4_gc (0x03) /* AIN4 */
#define AC_CMUX_AIN5_gc (0x04) /* AIN5 */
#define AC_CMUX_AIN6_gc (0x05) /* AIN6 */


/* AIN7 Digital Input Disable */
#define AC_AIN7D_CLEAR_gc (0x00) /* AIN7 Digital Input Disable - CLEAR */
#define AC_AIN7D_SET_gc   (0x80) /* AIN7 Digital Input Disable - SET */


/* AIN6 Digital Input Disable */
#define AC_AIN6D_CLEAR_gc (0x00) /* AIN6 Digital Input Disable - CLEAR */
#define AC_AIN6D_SET_gc   (0x40) /* AIN6 Digital Input Disable - SET */


/* AIN5 Digital Input Disable */
#define AC_AIN5D_CLEAR_gc (0x00) /* AIN5 Digital Input Disable - CLEAR */
#define AC_AIN5D_SET_gc   (0x20) /* AIN5 Digital Input Disable - SET */


/* AIN4 Digital Input Disable */
#define AC_AIN4D_CLEAR_gc (0x00) /* AIN4 Digital Input Disable - CLEAR */
#define AC_AIN4D_SET_gc   (0x10) /* AIN4 Digital Input Disable - SET */


/* AIN3 Digital Input Disable */
#define AC_AIN3D_CLEAR_gc (0x00) /* AIN3 Digital Input Disable - CLEAR */
#define AC_AIN3D_SET_gc   (0x08) /* AIN3 Digital Input Disable - SET */


/* AIN2 Digital Input Disable */
#define AC_AIN2D_CLEAR_gc (0x00) /* AIN2 Digital Input Disable - CLEAR */
#define AC_AIN2D_SET_gc   (0x04) /* AIN2 Digital Input Disable - SET */


/* AIN1 Digital Input Disable */
#define AC_AIN1D_CLEAR_gc (0x00) /* AIN1 Digital Input Disable - CLEAR */
#define AC_AIN1D_SET_gc   (0x02) /* AIN1 Digital Input Disable - SET */


/* AIN0 Digital Input Disable */
#define AC_AIN0D_CLEAR_gc (0x00) /* AIN0 Digital Input Disable - CLEAR */
#define AC_AIN0D_SET_gc   (0x01) /* AIN0 Digital Input Disable - SET */

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
#define PORTBB_BASE        _SFR_MEM8 (0x0000) /* PORTBB Base Address */
#define PORTBB_PINB        _SFR_MEM8 (0x0023) /* Port B Input Pins */
#define PORTBB_DDRB        _SFR_MEM8 (0x0024) /* Port B Data Direction Register */
#define PORTBB_PORTB       _SFR_MEM8 (0x0025) /* Port B Data Register */

/* PORTD - I/O Port (0x0000) */
#define PORTDD_BASE        _SFR_MEM8 (0x0000) /* PORTDD Base Address */
#define PORTDD_PIND        _SFR_MEM8 (0x0029) /* Port D Input Pins */
#define PORTDD_DDRD        _SFR_MEM8 (0x002A) /* Port D Data Direction Register */
#define PORTDD_PORTD       _SFR_MEM8 (0x002B) /* Port D Data Register */

/* PORTC - I/O Port (0x0000) */
#define PORTCC_BASE        _SFR_MEM8 (0x0000) /* PORTCC Base Address */
#define PORTCC_PINC        _SFR_MEM8 (0x0026) /* Port C Input Pins */
#define PORTCC_DDRC        _SFR_MEM8 (0x0027) /* Port C Data Direction Register */
#define PORTCC_PORTC       _SFR_MEM8 (0x0028) /* Port C Data Register */

/* SPI - Serial Peripheral Interface (0x0000) */
#define SPI_BASE           _SFR_MEM8 (0x0000) /* SPI Base Address */
#define SPI_SPCR           _SFR_MEM8 (0x004C) /* SPI Control Register */
#define SPI_SPSR           _SFR_MEM8 (0x004D) /* SPI Status Register */
#define SPI_SPDR           _SFR_MEM8 (0x004E) /* SPI Data Register */

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

/* TC1 - Timer/Counter, 16-bit (0x0000) */
#define TC16_BASE          _SFR_MEM8 (0x0000) /* TC16 Base Address */
#define TC16_TIFR1         _SFR_MEM8 (0x0036) /* Timer/Counter1 Interrupt Flag register */
#define TC16_TIMSK1        _SFR_MEM8 (0x006F) /* Timer/Counter1 Interrupt Mask Register */
#define TC16_TCCR1A        _SFR_MEM8 (0x0080) /* Timer/Counter1 Control Register A */
#define TC16_TCCR1B        _SFR_MEM8 (0x0081) /* Timer/Counter1 Control Register B */
#define TC16_TCCR1C        _SFR_MEM8 (0x0082) /* Timer/Counter 1 Control Register C */
#define TC16_TCNT1         _SFR_MEM16(0x0084) /* Timer/Counter1 Bytes */
#define TC16_TCNT1L        _SFR_MEM8 (0x0084) /* Timer/Counter1 Bytes LOW BYTE */
#define TC16_TCNT1H        _SFR_MEM8 (0x0085) /* Timer/Counter1 Bytes HIGH BYTE */
#define TC16_ICR1          _SFR_MEM16(0x0086) /* Timer/Counter1 Input Capture Register Bytes */
#define TC16_ICR1L         _SFR_MEM8 (0x0086) /* Timer/Counter1 Input Capture Register Bytes LOW BYTE */
#define TC16_ICR1H         _SFR_MEM8 (0x0087) /* Timer/Counter1 Input Capture Register Bytes HIGH BYTE */
#define TC16_OCR1A         _SFR_MEM16(0x0088) /* Timer/Counter1 Output Compare Register A Bytes */
#define TC16_OCR1AL        _SFR_MEM8 (0x0088) /* Timer/Counter1 Output Compare Register A Bytes LOW BYTE */
#define TC16_OCR1AH        _SFR_MEM8 (0x0089) /* Timer/Counter1 Output Compare Register A Bytes HIGH BYTE */
#define TC16_OCR1B         _SFR_MEM16(0x008A) /* Timer/Counter1 Output Compare Register B Bytes */
#define TC16_OCR1BL        _SFR_MEM8 (0x008A) /* Timer/Counter1 Output Compare Register B Bytes LOW BYTE */
#define TC16_OCR1BH        _SFR_MEM8 (0x008B) /* Timer/Counter1 Output Compare Register B Bytes HIGH BYTE */
#define TC16_OCR1C         _SFR_MEM16(0x008C) /* Timer/Counter1 Output Compare Register C Bytes */
#define TC16_OCR1CL        _SFR_MEM8 (0x008C) /* Timer/Counter1 Output Compare Register C Bytes LOW BYTE */
#define TC16_OCR1CH        _SFR_MEM8 (0x008D) /* Timer/Counter1 Output Compare Register C Bytes HIGH BYTE */

/* PLL - Phase Locked Loop (0x0000) */
#define PLL_BASE           _SFR_MEM8 (0x0000) /* PLL Base Address */
#define PLL_PLLCSR         _SFR_MEM8 (0x0049) /* PLL Status and Control register */

/* USB_DEVICE - USB Device Registers (0x0000) */
#define USB_DEVICE_BASE    _SFR_MEM8 (0x0000) /* USB_DEVICE Base Address */
#define USB_DEVICE_REGCR   _SFR_MEM8 (0x0063) /* Regulator Control Register */
#define USB_DEVICE_USBCON  _SFR_MEM8 (0x00D8) /* USB General Control Register */
#define USB_DEVICE_UDCON   _SFR_MEM8 (0x00E0) /* USB Device Control Registers */
#define USB_DEVICE_UDINT   _SFR_MEM8 (0x00E1) /* USB Device Interrupt Register */
#define USB_DEVICE_UDIEN   _SFR_MEM8 (0x00E2) /* USB Device Interrupt Enable Register */
#define USB_DEVICE_UDADDR  _SFR_MEM8 (0x00E3) /* USB Device Address Register */
#define USB_DEVICE_UDFNUM  _SFR_MEM16(0x00E4) /* USB Device Frame Number High Register */
#define USB_DEVICE_UDFNUML _SFR_MEM8 (0x00E4) /* USB Device Frame Number High Register LOW BYTE */
#define USB_DEVICE_UDFNUMH _SFR_MEM8 (0x00E5) /* USB Device Frame Number High Register HIGH BYTE */
#define USB_DEVICE_UDMFN   _SFR_MEM8 (0x00E6) /* USB Device Micro Frame Number */
#define USB_DEVICE_UEINTX  _SFR_MEM8 (0x00E8) /* USB Endpoint Interrupt Register */
#define USB_DEVICE_UENUM   _SFR_MEM8 (0x00E9) /* USB Endpoint Number */
#define USB_DEVICE_UERST   _SFR_MEM8 (0x00EA) /* USB Endpoint Reset Register */
#define USB_DEVICE_UECONX  _SFR_MEM8 (0x00EB) /* USB Endpoint Control Register */
#define USB_DEVICE_UECFG0X _SFR_MEM8 (0x00EC) /* USB Endpoint Configuration 0 Register */
#define USB_DEVICE_UECFG1X _SFR_MEM8 (0x00ED) /* USB Endpoint Configuration 1 Register */
#define USB_DEVICE_UESTA0X _SFR_MEM8 (0x00EE) /* USB Endpoint Status 0 Register */
#define USB_DEVICE_UESTA1X _SFR_MEM8 (0x00EF) /* USB Endpoint Status 1 Register */
#define USB_DEVICE_UEIENX  _SFR_MEM8 (0x00F0) /* USB Endpoint Interrupt Enable Register */
#define USB_DEVICE_UEDATX  _SFR_MEM8 (0x00F1) /* USB Data Endpoint */
#define USB_DEVICE_UEBCLX  _SFR_MEM8 (0x00F2) /* USB Endpoint Byte Count Register */
#define USB_DEVICE_UEINT   _SFR_MEM8 (0x00F4) /* USB Endpoint Number Interrupt Register */
#define USB_DEVICE_UPOE    _SFR_MEM8 (0x00FB) /* USB Software Output Enable register */

/* CPU - CPU Registers (0x0000) */
#define CPU_BASE           _SFR_MEM8 (0x0000) /* CPU Base Address */
#define CPU_GPIOR0         _SFR_MEM8 (0x003E) /* General Purpose IO Register 0 */
#define CPU_GPIOR1         _SFR_MEM8 (0x004A) /* General Purpose IO Register 1 */
#define CPU_GPIOR2         _SFR_MEM8 (0x004B) /* General Purpose IO Register 2 */
#define CPU_DWDR           _SFR_MEM8 (0x0051) /* debugWire communication register */
#define CPU_SMCR           _SFR_MEM8 (0x0053) /* Sleep Mode Control Register */
#define CPU_MCUSR          _SFR_MEM8 (0x0054) /* MCU Status Register */
#define CPU_MCUCR          _SFR_MEM8 (0x0055) /* MCU Control Register */
#define CPU_EIND           _SFR_MEM8 (0x005C) /* Extended Indirect Register */
#define CPU_SP             _SFR_MEM16(0x005D) /* Stack Pointer  */
#define CPU_SPL            _SFR_MEM8 (0x005D) /* Stack Pointer  LOW BYTE */
#define CPU_SPH            _SFR_MEM8 (0x005E) /* Stack Pointer  HIGH BYTE */
#define CPU_SREG           _SFR_MEM8 (0x005F) /* Status Register */
#define CPU_CLKPR          _SFR_MEM8 (0x0061) 
#define CPU_PRR0           _SFR_MEM8 (0x0064) /* Power Reduction Register0 */
#define CPU_PRR1           _SFR_MEM8 (0x0065) /* Power Reduction Register1 */
#define CPU_OSCCAL         _SFR_MEM8 (0x0066) /* Oscillator Calibration Value */
#define CPU_CLKSEL0        _SFR_MEM8 (0x00D0) 
#define CPU_CLKSEL1        _SFR_MEM8 (0x00D1) 
#define CPU_CLKSTA         _SFR_MEM8 (0x00D2) 

/* EXINT - External Interrupts (0x0000) */
#define EXINT_BASE         _SFR_MEM8 (0x0000) /* EXINT Base Address */
#define EXINT_PCIFR        _SFR_MEM8 (0x003B) /* Pin Change Interrupt Flag Register */
#define EXINT_EIFR         _SFR_MEM8 (0x003C) /* External Interrupt Flag Register */
#define EXINT_EIMSK        _SFR_MEM8 (0x003D) /* External Interrupt Mask Register */
#define EXINT_PCICR        _SFR_MEM8 (0x0068) /* Pin Change Interrupt Control Register */
#define EXINT_EICRA        _SFR_MEM8 (0x0069) /* External Interrupt Control Register A */
#define EXINT_EICRB        _SFR_MEM8 (0x006A) /* External Interrupt Control Register B */
#define EXINT_PCMSK0       _SFR_MEM8 (0x006B) /* Pin Change Mask Register 0 */
#define EXINT_PCMSK1       _SFR_MEM8 (0x006C) /* Pin Change Mask Register 1 */

/* USART1 - USART (0x0000) */
#define USART11_BASE       _SFR_MEM8 (0x0000) /* USART11 Base Address */
#define USART11_UCSR1A     _SFR_MEM8 (0x00C8) /* USART Control and Status Register A */
#define USART11_UCSR1B     _SFR_MEM8 (0x00C9) /* USART Control and Status Register B */
#define USART11_UCSR1C     _SFR_MEM8 (0x00CA) /* USART Control and Status Register C */
#define USART11_UCSR1D     _SFR_MEM8 (0x00CB) /* USART Control and Status Register D */
#define USART11_UBRR1      _SFR_MEM16(0x00CC) /* USART Baud Rate Register Bytes */
#define USART11_UBRR1L     _SFR_MEM8 (0x00CC) /* USART Baud Rate Register Bytes LOW BYTE */
#define USART11_UBRR1H     _SFR_MEM8 (0x00CD) /* USART Baud Rate Register Bytes HIGH BYTE */
#define USART11_UDR1       _SFR_MEM8 (0x00CE) /* USART I/O Data Register */

/* WDT - Watchdog Timer (0x0000) */
#define WDT_BASE           _SFR_MEM8 (0x0000) /* WDT Base Address */
#define WDT_WDTCSR         _SFR_MEM8 (0x0060) /* Watchdog Timer Control Register */
#define WDT_WDTCKD         _SFR_MEM8 (0x0062) /* Watchdog Timer Clock Divider */

/* AC - Analog Comparator (0x0000) */
#define AC_BASE            _SFR_MEM8 (0x0000) /* AC Base Address */
#define AC_ACSR            _SFR_MEM8 (0x0050) /* Analog Comparator Control And Status Register */
#define AC_ACMUX           _SFR_MEM8 (0x007D) /* Analog Comparator Input Multiplexer */
#define AC_DIDR1           _SFR_MEM8 (0x007F) 

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
#define None_PCINT1_vect_num       (10)                
#define None_PCINT1_vect           _VECTOR(10)         /* Pin Change Interrupt Request 1 */
#define None_USB_GEN_vect_num      (11)                
#define None_USB_GEN_vect          _VECTOR(11)         /* USB General Interrupt Request */
#define None_USB_COM_vect_num      (12)                
#define None_USB_COM_vect          _VECTOR(12)         /* USB Endpoint/Pipe Interrupt Communication Request */
#define None_WDT_vect_num          (13)                
#define None_WDT_vect              _VECTOR(13)         /* Watchdog Time-out Interrupt */
#define None_TIMER1_CAPT_vect_num  (14)                
#define None_TIMER1_CAPT_vect      _VECTOR(14)         /* Timer/Counter2 Capture Event */
#define None_TIMER1_COMPA_vect_num (15)                
#define None_TIMER1_COMPA_vect     _VECTOR(15)         /* Timer/Counter2 Compare Match B */
#define None_TIMER1_COMPB_vect_num (16)                
#define None_TIMER1_COMPB_vect     _VECTOR(16)         /* Timer/Counter2 Compare Match B */
#define None_TIMER1_COMPC_vect_num (17)                
#define None_TIMER1_COMPC_vect     _VECTOR(17)         /* Timer/Counter2 Compare Match C */
#define None_TIMER1_OVF_vect_num   (18)                
#define None_TIMER1_OVF_vect       _VECTOR(18)         /* Timer/Counter1 Overflow */
#define None_TIMER0_COMPA_vect_num (19)                
#define None_TIMER0_COMPA_vect     _VECTOR(19)         /* Timer/Counter0 Compare Match A */
#define None_TIMER0_COMPB_vect_num (20)                
#define None_TIMER0_COMPB_vect     _VECTOR(20)         /* Timer/Counter0 Compare Match B */
#define None_TIMER0_OVF_vect_num   (21)                
#define None_TIMER0_OVF_vect       _VECTOR(21)         /* Timer/Counter0 Overflow */
#define None_SPI_STC_vect_num      (22)                
#define None_SPI_STC_vect          _VECTOR(22)         /* SPI Serial Transfer Complete */
#define None_USART1_RX_vect_num    (23)                
#define None_USART1_RX_vect        _VECTOR(23)         /* USART1, Rx Complete */
#define None_USART1_UDRE_vect_num  (24)                
#define None_USART1_UDRE_vect      _VECTOR(24)         /* USART1 Data register Empty */
#define None_USART1_TX_vect_num    (25)                
#define None_USART1_TX_vect        _VECTOR(25)         /* USART1, Tx Complete */
#define None_ANALOG_COMP_vect_num  (26)                
#define None_ANALOG_COMP_vect      _VECTOR(26)         /* Analog Comparator */
#define None_EE_READY_vect_num     (27)                
#define None_EE_READY_vect         _VECTOR(27)         /* EEPROM Ready */
#define None_SPM_READY_vect_num    (28)                
#define None_SPM_READY_vect        _VECTOR(28)         /* Store Program Memory Read */

/* Vector Table Size */
#define _VECTOR_SIZE               (4)                 /* Size of individual vector. */
#define _VECTORS_SIZE              (29 * _VECTOR_SIZE) /* Size of all vectors */
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


#define PB0 (0) 
#define PB1 (1) 
#define PB2 (2) 
#define PB3 (3) 
#define PB4 (4) 
#define PB5 (5) 
#define PB6 (6) 
#define PB7 (7) 

#define PD0 (0) 
#define PD1 (1) 
#define PD2 (2) 
#define PD3 (3) 
#define PD4 (4) 
#define PD5 (5) 
#define PD6 (6) 
#define PD7 (7) 

#define PC0 (0) 
#define PC1 (1) 
#define PC2 (2) 
#define PC3 (3) 
#define PC4 (4) 
#define PC5 (5) 
#define PC6 (6) 
#define PC7 (7) 

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
#define BOOTRST  (unsigned char)~_BV(0) /* Boot Reset vector Enabled */
#define BOOTSZ0  (unsigned char)~_BV(1) /* Select Boot Size bit 0 */
#define BOOTSZ1  (unsigned char)~_BV(2) /* Select Boot Size bit 1 */
#define EESAVE   (unsigned char)~_BV(3) /* Preserve EEPROM through the Chip Erase cycle */
#define WDTON    (unsigned char)~_BV(4) /* Watchdog timer always on */
#define SPIEN    (unsigned char)~_BV(5) /* Serial program downloading (SPI) enabled */
#define RSTDISBL (unsigned char)~_BV(6) /* Reset Disabled (Enable PC6 as i/o pin) */
#define DWEN     (unsigned char)~_BV(7) /* Debug Wire enable */

/* Fuse offset 0x02 */
#define BODLEVEL0 (unsigned char)~_BV(0) /* Brown-out Detector trigger level bit 0 */
#define BODLEVEL1 (unsigned char)~_BV(1) /* Brown-out Detector trigger level bit 1 */
#define BODLEVEL2 (unsigned char)~_BV(2) /* Brown-out Detector trigger level bit 2 */
#define HWBE      (unsigned char)~_BV(3) /* Hardware Boot Enable */


/* ========== Lock Bits ========== */
#define __LOCK_BITS_EXIST  


/* ========== Signature ========== */
#define SIGNATURE_0 (0x1E) 
#define SIGNATURE_1 (0x94) 
#define SIGNATURE_2 (0x89) 

#endif /* #ifdef _AVR_ATmega16U2_H_INCLUDED */
