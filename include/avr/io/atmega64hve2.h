/******************************************************************************
 *   This file is part of avr-libc3.                                          * 
 *                                                                            * 
 *   Automatically created by devtools/gen-ioheader-atdf.py (V0.91)           * 
 *                                                                            * 
 *   .atpack File: ATmega64HVE2.atdf                                          * 
 *   .ATDF File:   atdf/ATmega64HVE2.atdf                                     * 
 *   Version:      2.0.12                                                     * 
 *   Date:         2019-04-26                                                 * 
 *   Device:       ATmega64HVE2                                               * 
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
#  define _AVR_IOXXX_H_ "ioATmega64HVE2.h"
#else
#  error "Attempt to include more than one <avr/ioXXX.h> file."
#endif

#ifndef _AVR_ATmega64HVE2_H_INCLUDED
#  define _AVR_ATmega64HVE2_H_INCLUDED

/*
================================================================================
Ungrouped common register
================================================================================
*/

#define GPIOR0   _SFR_MEM8 (0x3E) /* General Purpose IO Register 0 */

#define GPIOR1   _SFR_MEM8 (0x4A) /* General Purpose IO Register 1 */
#define GPIOR2   _SFR_MEM8 (0x4B) /* General Purpose IO Register 2 */

#define SMCR     _SFR_MEM8 (0x53) /* Sleep Mode Control Register */
#define MCUSR    _SFR_MEM8 (0x54) /* MCU Status Register */
#define MCUCR    _SFR_MEM8 (0x55) /* MCU Control Register */

#define SP       _SFR_MEM16(0x5D) /* Stack Pointer  */
#define SREG     _SFR_MEM8 (0x5F) /* Status Register */

#define CLKPR    _SFR_MEM8 (0x61) /* Clock Prescale Register */

#define PRR0     _SFR_MEM8 (0x64) /* Power Reduction Register 0 */

#define SOSCCALA _SFR_MEM8 (0x66) /* Slow Oscillator Calibration Register A */
#define SOSCCALB _SFR_MEM8 (0x67) /* Oscillator Calibration Register B */

#define DIDR0    _SFR_MEM8 (0x7E) /* Digital Input Disable Register */

#define PLLCSR   _SFR_MEM8 (0xD8) /* PLL Control and Status Register */


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
} FUSE_t;


/* Watch-dog Timer always on */
typedef enum FUSE_WDTON_enum
{
    FUSE_WDTON_CLEAR_gc = (0x00), /* Watch-dog Timer always on - CLEAR */
    FUSE_WDTON_SET_gc   = (0x80), /* Watch-dog Timer always on - SET */
} FUSE_WDTON_t;

/* Preserve EEPROM through the Chip Erase cycle */
typedef enum FUSE_EESAVE_enum
{
    FUSE_EESAVE_CLEAR_gc = (0x00), /* Preserve EEPROM through the Chip Erase cycle - CLEAR */
    FUSE_EESAVE_SET_gc   = (0x40), /* Preserve EEPROM through the Chip Erase cycle - SET */
} FUSE_EESAVE_t;

/* Serial program downloading (SPI) enabled */
typedef enum FUSE_SPIEN_enum
{
    FUSE_SPIEN_CLEAR_gc = (0x00), /* Serial program downloading (SPI) enabled - CLEAR */
    FUSE_SPIEN_SET_gc   = (0x20), /* Serial program downloading (SPI) enabled - SET */
} FUSE_SPIEN_t;

/* Brown-out detection enabled */
typedef enum FUSE_BODEN_enum
{
    FUSE_BODEN_CLEAR_gc = (0x00), /* Brown-out detection enabled - CLEAR */
    FUSE_BODEN_SET_gc   = (0x10), /* Brown-out detection enabled - SET */
} FUSE_BODEN_t;

/* Divide clock by 8 */
typedef enum FUSE_CKDIV8_enum
{
    FUSE_CKDIV8_CLEAR_gc = (0x00), /* Divide clock by 8 - CLEAR */
    FUSE_CKDIV8_SET_gc   = (0x08), /* Divide clock by 8 - SET */
} FUSE_CKDIV8_t;

/* Select start-up time */
typedef enum FUSE_SUT_enum
{
    FUSE_SUT_14CK_0MS_gc  = (0x00<<1), /* Start-up time 14 CK + 0 ms */
    FUSE_SUT_14CK_16MS_gc = (0x01<<1), /* Start-up time 14 CK + 16 ms */
    FUSE_SUT_14CK_32MS_gc = (0x02<<1), /* Start-up time 14 CK + 32 ms */
    FUSE_SUT_14CK_64MS_gc = (0x03<<1), /* Start-up time 14 CK + 64 ms */
} FUSE_SUT_t;

/* Oscillator select */
typedef enum FUSE_OSCSEL0_enum
{
    FUSE_OSCSEL0_CLEAR_gc = (0x00), /* Oscillator select - CLEAR */
    FUSE_OSCSEL0_SET_gc   = (0x01), /* Oscillator select - SET */
} FUSE_OSCSEL0_t;

/* Debug Wire enable */
typedef enum FUSE_DWEN_enum
{
    FUSE_DWEN_CLEAR_gc = (0x00), /* Debug Wire enable - CLEAR */
    FUSE_DWEN_SET_gc   = (0x08), /* Debug Wire enable - SET */
} FUSE_DWEN_t;

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
    register8_t TCCR1A;       /* Timer/Counter 1 Control Register A */
    register8_t TCCR1B;       /* Timer/Counter1 Control Register B */
    register8_t rsv_0x82[2];  /* RESERVED REGISTER BLOCK */
    _REGISTER16 (TCNT1);      /* Timer Counter 1  Bytes */
    register8_t rsv_0x85[3];  /* RESERVED REGISTER BLOCK */
    register8_t OCR1A;        /* Output Compare Register 1A */
    register8_t OCR1B;        /* Output Compare Register B */
} TC1_t;


/*
--------------------------------------------------------------------------------
TC16 - Timer/Counter, 16-bit
--------------------------------------------------------------------------------
*/

typedef struct TC0_struct
{
    register8_t rsv_0x00[53]; /* RESERVED REGISTER BLOCK */
    register8_t TIFR0;        /* Timer/Counter Interrupt Flag register */
    register8_t rsv_0x36[13]; /* RESERVED REGISTER BLOCK */
    register8_t GTCCR;        /* General Timer/Counter Control Register */
    register8_t TCCR0A;       /* Timer/Counter 0 Control Register A */
    register8_t TCCR0B;       /* Timer/Counter0 Control Register B */
    _REGISTER16 (TCNT0);      /* Timer Counter 0  Bytes */
    register8_t rsv_0x47;     /* RESERVED REGISTER */
    register8_t OCR0A;        /* Output Compare Register 0A */
    register8_t OCR0B;        /* Output Compare Register B */
    register8_t rsv_0x4A[36]; /* RESERVED REGISTER BLOCK */
    register8_t TIMSK0;       /* Timer/Counter Interrupt Mask Register */
} TC0_t;


/* Clock Select1 bis */
typedef enum TC1_CS_enum
{
    TC1_CS_VAL_0x00_gc = (0x00), /* No Clock Source (Stopped) */
    TC1_CS_VAL_0x01_gc = (0x01), /* Running, No Prescaling */
    TC1_CS_VAL_0x02_gc = (0x02), /* Running, CLK/8 */
    TC1_CS_VAL_0x03_gc = (0x03), /* Running, CLK/64 */
    TC1_CS_VAL_0x04_gc = (0x04), /* Running, CLK/256 */
    TC1_CS_VAL_0x05_gc = (0x05), /* Running, CLK/1024 */
    TC1_CS_VAL_0x06_gc = (0x06), /* Running, ExtClk Tx Falling Edge */
    TC1_CS_VAL_0x07_gc = (0x07), /* Running, ExtClk Tx Rising Edge */
} TC1_CS_t;

/* Timer/Counter Width */
typedef enum TC1_TCW1_enum
{
    TC1_TCW1_CLEAR_gc = (0x00), /* Timer/Counter Width - CLEAR */
    TC1_TCW1_SET_gc   = (0x80), /* Timer/Counter Width - SET */
} TC1_TCW1_t;

/* Input Capture Mode Enable */
typedef enum TC1_ICEN1_enum
{
    TC1_ICEN1_CLEAR_gc = (0x00), /* Input Capture Mode Enable - CLEAR */
    TC1_ICEN1_SET_gc   = (0x40), /* Input Capture Mode Enable - SET */
} TC1_ICEN1_t;

/* Input Capture Noise Canceler */
typedef enum TC1_ICNC1_enum
{
    TC1_ICNC1_CLEAR_gc = (0x00), /* Input Capture Noise Canceler - CLEAR */
    TC1_ICNC1_SET_gc   = (0x20), /* Input Capture Noise Canceler - SET */
} TC1_ICNC1_t;

/* Input Capture Edge Select */
typedef enum TC1_ICES1_enum
{
    TC1_ICES1_CLEAR_gc = (0x00), /* Input Capture Edge Select - CLEAR */
    TC1_ICES1_SET_gc   = (0x10), /* Input Capture Edge Select - SET */
} TC1_ICES1_t;

/* Input Capture Select */
typedef enum TC1_ICS1_enum
{
    TC1_ICS1_CLEAR_gc = (0x00), /* Input Capture Select - CLEAR */
    TC1_ICS1_SET_gc   = (0x08), /* Input Capture Select - SET */
} TC1_ICS1_t;

/* Waveform Generation Mode */
typedef enum TC1_WGM10_enum
{
    TC1_WGM10_CLEAR_gc = (0x00), /* Waveform Generation Mode - CLEAR */
    TC1_WGM10_SET_gc   = (0x01), /* Waveform Generation Mode - SET */
} TC1_WGM10_t;

/* Timer/Counter n Input Capture Interrupt Enable */
typedef enum TC1_ICIE1_enum
{
    TC1_ICIE1_CLEAR_gc = (0x00), /* Timer/Counter n Input Capture Interrupt Enable - CLEAR */
    TC1_ICIE1_SET_gc   = (0x08), /* Timer/Counter n Input Capture Interrupt Enable - SET */
} TC1_ICIE1_t;

/* Timer/Counter1 Output Compare B Interrupt Enable */
typedef enum TC1_OCIE1B_enum
{
    TC1_OCIE1B_CLEAR_gc = (0x00), /* Timer/Counter1 Output Compare B Interrupt Enable - CLEAR */
    TC1_OCIE1B_SET_gc   = (0x04), /* Timer/Counter1 Output Compare B Interrupt Enable - SET */
} TC1_OCIE1B_t;

/* Timer/Counter1 Output Compare A Interrupt Enable */
typedef enum TC1_OCIE1A_enum
{
    TC1_OCIE1A_CLEAR_gc = (0x00), /* Timer/Counter1 Output Compare A Interrupt Enable - CLEAR */
    TC1_OCIE1A_SET_gc   = (0x02), /* Timer/Counter1 Output Compare A Interrupt Enable - SET */
} TC1_OCIE1A_t;

/* Timer/Counter1 Overflow Interrupt Enable */
typedef enum TC1_TOIE1_enum
{
    TC1_TOIE1_CLEAR_gc = (0x00), /* Timer/Counter1 Overflow Interrupt Enable - CLEAR */
    TC1_TOIE1_SET_gc   = (0x01), /* Timer/Counter1 Overflow Interrupt Enable - SET */
} TC1_TOIE1_t;

/* Timer/Counter 1 Input Capture Flag */
typedef enum TC1_ICF1_enum
{
    TC1_ICF1_CLEAR_gc = (0x00), /* Timer/Counter 1 Input Capture Flag - CLEAR */
    TC1_ICF1_SET_gc   = (0x08), /* Timer/Counter 1 Input Capture Flag - SET */
} TC1_ICF1_t;

/* Timer/Counter1 Output Compare Flag B */
typedef enum TC1_OCF1B_enum
{
    TC1_OCF1B_CLEAR_gc = (0x00), /* Timer/Counter1 Output Compare Flag B - CLEAR */
    TC1_OCF1B_SET_gc   = (0x04), /* Timer/Counter1 Output Compare Flag B - SET */
} TC1_OCF1B_t;

/* Timer/Counter1 Output Compare Flag A */
typedef enum TC1_OCF1A_enum
{
    TC1_OCF1A_CLEAR_gc = (0x00), /* Timer/Counter1 Output Compare Flag A - CLEAR */
    TC1_OCF1A_SET_gc   = (0x02), /* Timer/Counter1 Output Compare Flag A - SET */
} TC1_OCF1A_t;

/* Timer/Counter1 Overflow Flag */
typedef enum TC1_TOV1_enum
{
    TC1_TOV1_CLEAR_gc = (0x00), /* Timer/Counter1 Overflow Flag - CLEAR */
    TC1_TOV1_SET_gc   = (0x01), /* Timer/Counter1 Overflow Flag - SET */
} TC1_TOV1_t;

/* Timer/Counter Synchronization Mode */
typedef enum TC1_TSM_enum
{
    TC1_TSM_CLEAR_gc = (0x00), /* Timer/Counter Synchronization Mode - CLEAR */
    TC1_TSM_SET_gc   = (0x80), /* Timer/Counter Synchronization Mode - SET */
} TC1_TSM_t;

/* Prescaler Reset */
typedef enum TC1_PSRSYNC_enum
{
    TC1_PSRSYNC_CLEAR_gc = (0x00), /* Prescaler Reset - CLEAR */
    TC1_PSRSYNC_SET_gc   = (0x01), /* Prescaler Reset - SET */
} TC1_PSRSYNC_t;

/* Clock Select0 bit 2 */
typedef enum TC0_CS02_enum
{
    TC0_CS02_CLEAR_gc = (0x00), /* Clock Select0 bit 2 - CLEAR */
    TC0_CS02_SET_gc   = (0x04), /* Clock Select0 bit 2 - SET */
} TC0_CS02_t;

/* Clock Select0 bit 1 */
typedef enum TC0_CS01_enum
{
    TC0_CS01_CLEAR_gc = (0x00), /* Clock Select0 bit 1 - CLEAR */
    TC0_CS01_SET_gc   = (0x02), /* Clock Select0 bit 1 - SET */
} TC0_CS01_t;

/* Clock Select0 bit 0 */
typedef enum TC0_CS00_enum
{
    TC0_CS00_VAL_0x00_gc = (0x00), /* No Clock Source (Stopped) */
    TC0_CS00_VAL_0x01_gc = (0x01), /* Running, No Prescaling */
    TC0_CS00_VAL_0x02_gc = (0x02), /* Running, CLK/8 */
    TC0_CS00_VAL_0x03_gc = (0x03), /* Running, CLK/64 */
    TC0_CS00_VAL_0x04_gc = (0x04), /* Running, CLK/256 */
    TC0_CS00_VAL_0x05_gc = (0x05), /* Running, CLK/1024 */
    TC0_CS00_VAL_0x06_gc = (0x06), /* Running, ExtClk Tx Falling Edge */
    TC0_CS00_VAL_0x07_gc = (0x07), /* Running, ExtClk Tx Rising Edge */
} TC0_CS00_t;

/* Timer/Counter Width */
typedef enum TC0_TCW0_enum
{
    TC0_TCW0_CLEAR_gc = (0x00), /* Timer/Counter Width - CLEAR */
    TC0_TCW0_SET_gc   = (0x80), /* Timer/Counter Width - SET */
} TC0_TCW0_t;

/* Input Capture Mode Enable */
typedef enum TC0_ICEN0_enum
{
    TC0_ICEN0_CLEAR_gc = (0x00), /* Input Capture Mode Enable - CLEAR */
    TC0_ICEN0_SET_gc   = (0x40), /* Input Capture Mode Enable - SET */
} TC0_ICEN0_t;

/* Input Capture Noise Canceler */
typedef enum TC0_ICNC0_enum
{
    TC0_ICNC0_CLEAR_gc = (0x00), /* Input Capture Noise Canceler - CLEAR */
    TC0_ICNC0_SET_gc   = (0x20), /* Input Capture Noise Canceler - SET */
} TC0_ICNC0_t;

/* Input Capture Edge Select */
typedef enum TC0_ICES0_enum
{
    TC0_ICES0_CLEAR_gc = (0x00), /* Input Capture Edge Select - CLEAR */
    TC0_ICES0_SET_gc   = (0x10), /* Input Capture Edge Select - SET */
} TC0_ICES0_t;

/* Input Capture Select */
typedef enum TC0_ICS0_enum
{
    TC0_ICS0_CLEAR_gc = (0x00), /* Input Capture Select - CLEAR */
    TC0_ICS0_SET_gc   = (0x08), /* Input Capture Select - SET */
} TC0_ICS0_t;

/* Waveform Generation Mode */
typedef enum TC0_WGM00_enum
{
    TC0_WGM00_CLEAR_gc = (0x00), /* Waveform Generation Mode - CLEAR */
    TC0_WGM00_SET_gc   = (0x01), /* Waveform Generation Mode - SET */
} TC0_WGM00_t;

/* Timer/Counter n Input Capture Interrupt Enable */
typedef enum TC0_ICIE0_enum
{
    TC0_ICIE0_CLEAR_gc = (0x00), /* Timer/Counter n Input Capture Interrupt Enable - CLEAR */
    TC0_ICIE0_SET_gc   = (0x08), /* Timer/Counter n Input Capture Interrupt Enable - SET */
} TC0_ICIE0_t;

/* Timer/Counter0 Output Compare B Interrupt Enable */
typedef enum TC0_OCIE0B_enum
{
    TC0_OCIE0B_CLEAR_gc = (0x00), /* Timer/Counter0 Output Compare B Interrupt Enable - CLEAR */
    TC0_OCIE0B_SET_gc   = (0x04), /* Timer/Counter0 Output Compare B Interrupt Enable - SET */
} TC0_OCIE0B_t;

/* Timer/Counter0 Output Compare A Interrupt Enable */
typedef enum TC0_OCIE0A_enum
{
    TC0_OCIE0A_CLEAR_gc = (0x00), /* Timer/Counter0 Output Compare A Interrupt Enable - CLEAR */
    TC0_OCIE0A_SET_gc   = (0x02), /* Timer/Counter0 Output Compare A Interrupt Enable - SET */
} TC0_OCIE0A_t;

/* Timer/Counter0 Overflow Interrupt Enable */
typedef enum TC0_TOIE0_enum
{
    TC0_TOIE0_CLEAR_gc = (0x00), /* Timer/Counter0 Overflow Interrupt Enable - CLEAR */
    TC0_TOIE0_SET_gc   = (0x01), /* Timer/Counter0 Overflow Interrupt Enable - SET */
} TC0_TOIE0_t;

/* Timer/Counter 0 Input Capture Flag */
typedef enum TC0_ICF0_enum
{
    TC0_ICF0_CLEAR_gc = (0x00), /* Timer/Counter 0 Input Capture Flag - CLEAR */
    TC0_ICF0_SET_gc   = (0x08), /* Timer/Counter 0 Input Capture Flag - SET */
} TC0_ICF0_t;

/* Timer/Counter0 Output Compare Flag B */
typedef enum TC0_OCF0B_enum
{
    TC0_OCF0B_CLEAR_gc = (0x00), /* Timer/Counter0 Output Compare Flag B - CLEAR */
    TC0_OCF0B_SET_gc   = (0x04), /* Timer/Counter0 Output Compare Flag B - SET */
} TC0_OCF0B_t;

/* Timer/Counter0 Output Compare Flag A */
typedef enum TC0_OCF0A_enum
{
    TC0_OCF0A_CLEAR_gc = (0x00), /* Timer/Counter0 Output Compare Flag A - CLEAR */
    TC0_OCF0A_SET_gc   = (0x02), /* Timer/Counter0 Output Compare Flag A - SET */
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

/* Prescaler Reset */
typedef enum TC0_PSRSYNC_enum
{
    TC0_PSRSYNC_CLEAR_gc = (0x00), /* Prescaler Reset - CLEAR */
    TC0_PSRSYNC_SET_gc   = (0x01), /* Prescaler Reset - SET */
} TC0_PSRSYNC_t;

/*
--------------------------------------------------------------------------------
PORT - I/O Port
--------------------------------------------------------------------------------
*/

typedef struct PORTB_struct
{
    register8_t rsv_0x00[35];  /* RESERVED REGISTER BLOCK */
    register8_t PINB;          /* Port B Input Pins */
    register8_t DDRB;          /* Port B Data Direction Register */
    register8_t PORTB;         /* Port B Data Register */
    register8_t rsv_0x26[182]; /* RESERVED REGISTER BLOCK */
    register8_t PBOV;          /* Port B Override */
} PORTB_t;


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


/* Port B Override Change Enable */
typedef enum PORTB_PBOVCE_enum
{
    PORTB_PBOVCE_CLEAR_gc = (0x00), /* Port B Override Change Enable - CLEAR */
    PORTB_PBOVCE_SET_gc   = (0x80), /* Port B Override Change Enable - SET */
} PORTB_PBOVCE_t;

/* Port B Override Enable 3 */
typedef enum PORTB_PBOE3_enum
{
    PORTB_PBOE3_CLEAR_gc = (0x00), /* Port B Override Enable 3 - CLEAR */
    PORTB_PBOE3_SET_gc   = (0x08), /* Port B Override Enable 3 - SET */
} PORTB_PBOE3_t;

/* Port B Override Enable 0 */
typedef enum PORTB_PBOE0_enum
{
    PORTB_PBOE0_CLEAR_gc = (0x00), /* Port B Override Enable 0 - CLEAR */
    PORTB_PBOE0_SET_gc   = (0x01), /* Port B Override Enable 0 - SET */
} PORTB_PBOE0_t;

/*
--------------------------------------------------------------------------------
BOOT_LOAD - Bootloader
--------------------------------------------------------------------------------
*/

typedef struct BOOT_LOAD_struct
{
    register8_t rsv_0x00[87]; /* RESERVED REGISTER BLOCK */
    register8_t SPMCSR;       /* Store Program Memory Control and Status Register */
} BOOT_LOAD_t;


/* SPM Interrupt Enable */
typedef enum BOOT_LOAD_SPMIE_enum
{
    BOOT_LOAD_SPMIE_CLEAR_gc = (0x00), /* SPM Interrupt Enable - CLEAR */
    BOOT_LOAD_SPMIE_SET_gc   = (0x80), /* SPM Interrupt Enable - SET */
} BOOT_LOAD_SPMIE_t;

/* Read-While-Write Section Busy */
typedef enum BOOT_LOAD_RWWSB_enum
{
    BOOT_LOAD_RWWSB_CLEAR_gc = (0x00), /* Read-While-Write Section Busy - CLEAR */
    BOOT_LOAD_RWWSB_SET_gc   = (0x40), /* Read-While-Write Section Busy - SET */
} BOOT_LOAD_RWWSB_t;

/* Signature Row Read */
typedef enum BOOT_LOAD_SIGRD_enum
{
    BOOT_LOAD_SIGRD_CLEAR_gc = (0x00), /* Signature Row Read - CLEAR */
    BOOT_LOAD_SIGRD_SET_gc   = (0x20), /* Signature Row Read - SET */
} BOOT_LOAD_SIGRD_t;

/* Read-While-Write Section Read Enable */
typedef enum BOOT_LOAD_RWWSRE_enum
{
    BOOT_LOAD_RWWSRE_CLEAR_gc = (0x00), /* Read-While-Write Section Read Enable - CLEAR */
    BOOT_LOAD_RWWSRE_SET_gc   = (0x10), /* Read-While-Write Section Read Enable - SET */
} BOOT_LOAD_RWWSRE_t;

/* Lock Bit Set */
typedef enum BOOT_LOAD_LBSET_enum
{
    BOOT_LOAD_LBSET_CLEAR_gc = (0x00), /* Lock Bit Set - CLEAR */
    BOOT_LOAD_LBSET_SET_gc   = (0x08), /* Lock Bit Set - SET */
} BOOT_LOAD_LBSET_t;

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
ADC - Analog-to-Digital Converter
--------------------------------------------------------------------------------
*/

typedef struct ADC_struct
{
    register8_t rsv_0x00[224]; /* RESERVED REGISTER BLOCK */
    register8_t ADSCSRA;       /* ADC Synchronization Control and Status Register */
    register8_t ADSCSRB;       /* ADC Synchronization Control and Status Register */
    register8_t ADCRA;         /* ADC Control Register A */
    register8_t ADCRB;         /* ADC Control Register B */
    register8_t ADCRC;         /* ADC Control Register B */
    register8_t ADCRD;         /* ADC Control Register D */
    register8_t ADCRE;         /* ADC Control Register E */
    register8_t ADIFR;         /* ADC Interrupt Flag Register */
    register8_t ADIMR;         /* ADC Interrupt Mask Register */
    _REGISTER16 (CADRCL);      /* CC-ADC Regulator Current Comparator Threshold Level */
    register8_t rsv_0xEA;      /* RESERVED REGISTER */
    _REGISTER16 (CADIC);       /* C-ADC Instantaneous Conversion Result */
    register8_t rsv_0xEC;      /* RESERVED REGISTER */
    register8_t CADAC0;        /* C-ADC Accumulated Conversion Result */
    register8_t CADAC1;        /* C-ADC Accumulated Conversion Result */
    register8_t CADAC2;        /* C-ADC Accumulated Conversion Result */
    register8_t CADAC3;        /* C-ADC Accumulated Conversion Result */
    _REGISTER16 (VADIC);       /* V-ADC Instantaneous Conversion Result */
    register8_t rsv_0xF2;      /* RESERVED REGISTER */
    register8_t VADAC0;        /* V-ADC Accumulated Conversion Result */
    register8_t VADAC1;        /* V-ADC Accumulated Conversion Result */
    register8_t VADAC2;        /* V-ADC Accumulated Conversion Result */
    register8_t VADAC3;        /* V-ADC Accumulated Conversion Result */
} ADC_t;


/* Synchronization Busy */
typedef enum ADC_SBSY_enum
{
    ADC_SBSY_CLEAR_gc = (0x00), /* Synchronization Busy - CLEAR */
    ADC_SBSY_SET_gc   = (0x04), /* Synchronization Busy - SET */
} ADC_SBSY_t;

/* Synchronization Command */
typedef enum ADC_SCMD_enum
{
    ADC_SCMD_VAL_0x00_gc = (0x00), /* Reserved */
    ADC_SCMD_VAL_0x01_gc = (0x01), /* Reset and Synchronize */
    ADC_SCMD_VAL_0x02_gc = (0x02), /* Synchronize on next Instantaneous Conversion */
    ADC_SCMD_VAL_0x03_gc = (0x03), /* Synchronize on next Accumulated Conversion */
} ADC_SCMD_t;

/* V-ADC Instantaneous Conversion Polarity Status */
typedef enum ADC_VADICPS_enum
{
    ADC_VADICPS_CLEAR_gc = (0x00), /* V-ADC Instantaneous Conversion Polarity Status - CLEAR */
    ADC_VADICPS_SET_gc   = (0x40), /* V-ADC Instantaneous Conversion Polarity Status - SET */
} ADC_VADICPS_t;

/* VADAC Data Read Out Busy */
typedef enum ADC_VADACRB_enum
{
    ADC_VADACRB_CLEAR_gc = (0x00), /* VADAC Data Read Out Busy - CLEAR */
    ADC_VADACRB_SET_gc   = (0x20), /* VADAC Data Read Out Busy - SET */
} ADC_VADACRB_t;

/* VADIC Data Read Out Busy */
typedef enum ADC_VADICRB_enum
{
    ADC_VADICRB_CLEAR_gc = (0x00), /* VADIC Data Read Out Busy - CLEAR */
    ADC_VADICRB_SET_gc   = (0x10), /* VADIC Data Read Out Busy - SET */
} ADC_VADICRB_t;

/* C-ADC Instantaneous Conversion Polarity Status */
typedef enum ADC_CADICPS_enum
{
    ADC_CADICPS_CLEAR_gc = (0x00), /* C-ADC Instantaneous Conversion Polarity Status - CLEAR */
    ADC_CADICPS_SET_gc   = (0x04), /* C-ADC Instantaneous Conversion Polarity Status - SET */
} ADC_CADICPS_t;

/* CADAC Data Read Out Busy */
typedef enum ADC_CADACRB_enum
{
    ADC_CADACRB_CLEAR_gc = (0x00), /* CADAC Data Read Out Busy - CLEAR */
    ADC_CADACRB_SET_gc   = (0x02), /* CADAC Data Read Out Busy - SET */
} ADC_CADACRB_t;

/* CADIC Data Read Out Busy */
typedef enum ADC_CADICRB_enum
{
    ADC_CADICRB_CLEAR_gc = (0x00), /* CADIC Data Read Out Busy - CLEAR */
    ADC_CADICRB_SET_gc   = (0x01), /* CADIC Data Read Out Busy - SET */
} ADC_CADICRB_t;

/* ADC Polarity Select */
typedef enum ADC_ADPSEL_enum
{
    ADC_ADPSEL_CLEAR_gc = (0x00), /* ADC Polarity Select - CLEAR */
    ADC_ADPSEL_SET_gc   = (0x08), /* ADC Polarity Select - SET */
} ADC_ADPSEL_t;

/* C-ADC Chopper Mode Select */
typedef enum ADC_ADCMS_enum
{
    ADC_ADCMS_VAL_0x00_gc = (0x00<<1), /* Chopping Disabled */
    ADC_ADCMS_VAL_0x01_gc = (0x01<<1), /* Automatic Fast Chopping */
    ADC_ADCMS_VAL_0x02_gc = (0x02<<1), /* Automatic Slow Chopping */
    ADC_ADCMS_VAL_0x03_gc = (0x03<<1), /* Software Polarity Control */
} ADC_ADCMS_t;

/* Sampling Clock Select */
typedef enum ADC_CKSEL_enum
{
    ADC_CKSEL_VAL_0x00_gc = (0x00), /* PLL (512kHz output) as sampling clock */
    ADC_CKSEL_VAL_0x01_gc = (0x01), /* Slow RC Oscillator as sampling clock */
} ADC_CKSEL_t;

/* Instantaneous Decimation Ratio Select */
typedef enum ADC_ADIDES_enum
{
    ADC_ADIDES_VAL_0x00_gc = (0x00<<3), /* 512 */
    ADC_ADIDES_VAL_0x01_gc = (0x01<<3), /* 256 */
    ADC_ADIDES_VAL_0x02_gc = (0x02<<3), /* 128 */
    ADC_ADIDES_VAL_0x03_gc = (0x03<<3), /* 64 */
} ADC_ADIDES_t;

/* Accumulated Decimation Ratio Select */
typedef enum ADC_ADADES_enum
{
    ADC_ADADES_VAL_0x00_gc = (0x00), /* 512 */
    ADC_ADADES_VAL_0x01_gc = (0x01), /* 256 */
    ADC_ADADES_VAL_0x02_gc = (0x02), /* 128 */
    ADC_ADADES_VAL_0x03_gc = (0x03), /* 64 */
    ADC_ADADES_VAL_0x04_gc = (0x04), /* 32 */
    ADC_ADADES_VAL_0x05_gc = (0x05), /* 16 */
    ADC_ADADES_VAL_0x06_gc = (0x06), /* 8 */
    ADC_ADADES_VAL_0x07_gc = (0x07), /* 4 */
} ADC_ADADES_t;

/* C-ADC Enable */
typedef enum ADC_CADEN_enum
{
    ADC_CADEN_CLEAR_gc = (0x00), /* C-ADC Enable - CLEAR */
    ADC_CADEN_SET_gc   = (0x80), /* C-ADC Enable - SET */
} ADC_CADEN_t;

/* C-ADC Regular Current Comparator Mode */
typedef enum ADC_CADRCM_enum
{
    ADC_CADRCM_VAL_0x00_gc = (0x00<<4), /* Comparator Disabled */
    ADC_CADRCM_VAL_0x01_gc = (0x01<<4), /* Comparator Enabled. Regular Current Counter counts up if Accumulated Current is above threshold and is reset if Accumulated Current is below threshold. */
    ADC_CADRCM_VAL_0x02_gc = (0x02<<4), /* Comparator Enabled. Regular Current Counter counts up if Accumulated Current is above threshold and down if Accumulated Current is below threshold. */
    ADC_CADRCM_VAL_0x03_gc = (0x03<<4), /* Reserved */
} ADC_CADRCM_t;

/* C-ADC Regular Current Count Threshold */
typedef enum ADC_CADRCT_enum
{
    ADC_CADRCT_VAL_0x00_gc = (0x00), /* 1 */
    ADC_CADRCT_VAL_0x01_gc = (0x01), /* 2 */
    ADC_CADRCT_VAL_0x02_gc = (0x02), /* 3 */
    ADC_CADRCT_VAL_0x03_gc = (0x03), /* 4 */
    ADC_CADRCT_VAL_0x04_gc = (0x04), /* 5 */
    ADC_CADRCT_VAL_0x05_gc = (0x05), /* 6 */
    ADC_CADRCT_VAL_0x06_gc = (0x06), /* 7 */
    ADC_CADRCT_VAL_0x07_gc = (0x07), /* 8 */
    ADC_CADRCT_VAL_0x08_gc = (0x08), /* 9 */
    ADC_CADRCT_VAL_0x09_gc = (0x09), /* 10 */
    ADC_CADRCT_VAL_0x0a_gc = (0x0A), /* 11 */
    ADC_CADRCT_VAL_0x0b_gc = (0x0B), /* 12 */
    ADC_CADRCT_VAL_0x0c_gc = (0x0C), /* 13 */
    ADC_CADRCT_VAL_0x0d_gc = (0x0D), /* 14 */
    ADC_CADRCT_VAL_0x0e_gc = (0x0E), /* 15 */
    ADC_CADRCT_VAL_0x0f_gc = (0x0F), /* 16 */
} ADC_CADRCT_t;

/* C-ADC Gain */
typedef enum ADC_CADG_enum
{
    ADC_CADG_VAL_0x00_gc = (0x00<<3), /* 4x */
    ADC_CADG_VAL_0x01_gc = (0x01<<3), /* 8x */
    ADC_CADG_VAL_0x02_gc = (0x02<<3), /* 16x */
    ADC_CADG_VAL_0x03_gc = (0x03<<3), /* 32x */
    ADC_CADG_VAL_0x04_gc = (0x04<<3), /* 64x */
    ADC_CADG_VAL_0x05_gc = (0x05<<3), /* 128x */
    ADC_CADG_VAL_0x06_gc = (0x06<<3), /* 256x */
    ADC_CADG_VAL_0x07_gc = (0x07<<3), /* Reserved */
} ADC_CADG_t;

/* C-ADC Pin Diagnostics Mode */
typedef enum ADC_CADPDM_enum
{
    ADC_CADPDM_VAL_0x00_gc = (0x00<<1), /* No current source is enabled */
    ADC_CADPDM_VAL_0x01_gc = (0x01<<1), /* Current source on PI pin enabled */
    ADC_CADPDM_VAL_0x02_gc = (0x02<<1), /* Current source on NI pin enabled */
    ADC_CADPDM_VAL_0x03_gc = (0x03<<1), /* Current source on both PI/NI pins enabled */
} ADC_CADPDM_t;

/* C-ADC Diagnostics Channel Select */
typedef enum ADC_CADDSEL_enum
{
    ADC_CADDSEL_CLEAR_gc = (0x00), /* C-ADC Diagnostics Channel Select - CLEAR */
    ADC_CADDSEL_SET_gc   = (0x01), /* C-ADC Diagnostics Channel Select - SET */
} ADC_CADDSEL_t;

/* V-ADC Enable */
typedef enum ADC_VADEN_enum
{
    ADC_VADEN_CLEAR_gc = (0x00), /* V-ADC Enable - CLEAR */
    ADC_VADEN_SET_gc   = (0x80), /* V-ADC Enable - SET */
} ADC_VADEN_t;

/* V-ADC Reference Select */
typedef enum ADC_VADREFS_enum
{
    ADC_VADREFS_VAL_0x00_gc = (0x00<<5), /* VREF as reference */
    ADC_VADREFS_VAL_0x01_gc = (0x01<<5), /* AVDD/3 as reference (for diagnosis purpose) */
} ADC_VADREFS_t;

/* V-ADC Pin Diagnostics Mode */
typedef enum ADC_VADPDM_enum
{
    ADC_VADPDM_VAL_0x00_gc = (0x00<<3), /* No current source is enabled */
    ADC_VADPDM_VAL_0x01_gc = (0x01<<3), /* Current source on PV pin enabled */
    ADC_VADPDM_VAL_0x02_gc = (0x02<<3), /* Current source on NV pin enabled */
    ADC_VADPDM_VAL_0x03_gc = (0x03<<3), /* Current source on both PV/NV pins enabled */
} ADC_VADPDM_t;

/* V-ADC Channel Select */
typedef enum ADC_VADMUX_enum
{
    ADC_VADMUX_VAL_0x00_gc = (0x00), /* PV - NV */
    ADC_VADMUX_VAL_0x01_gc = (0x01), /* ADC0 - SGND */
    ADC_VADMUX_VAL_0x02_gc = (0x02), /* ADC1 - SGND */
    ADC_VADMUX_VAL_0x03_gc = (0x03), /* VTEMP - GND */
    ADC_VADMUX_VAL_0x04_gc = (0x04), /* DIAGNOSIS - GND (VREF/TBD) */
    ADC_VADMUX_VAL_0x05_gc = (0x05), /* Reserved */
    ADC_VADMUX_VAL_0x06_gc = (0x06), /* Reserved */
    ADC_VADMUX_VAL_0x07_gc = (0x07), /* Reserved */
} ADC_VADMUX_t;

/* V-ADC Accumulated Voltage Interrupt Flag */
typedef enum ADC_VADACIF_enum
{
    ADC_VADACIF_CLEAR_gc = (0x00), /* V-ADC Accumulated Voltage Interrupt Flag - CLEAR */
    ADC_VADACIF_SET_gc   = (0x20), /* V-ADC Accumulated Voltage Interrupt Flag - SET */
} ADC_VADACIF_t;

/* V-DAC Instantaneous Voltage Interrupt Flag */
typedef enum ADC_VADICIF_enum
{
    ADC_VADICIF_CLEAR_gc = (0x00), /* V-DAC Instantaneous Voltage Interrupt Flag - CLEAR */
    ADC_VADICIF_SET_gc   = (0x10), /* V-DAC Instantaneous Voltage Interrupt Flag - SET */
} ADC_VADICIF_t;

/* C-ADC Regulator Current Interrupt Flag */
typedef enum ADC_CADRCIF_enum
{
    ADC_CADRCIF_CLEAR_gc = (0x00), /* C-ADC Regulator Current Interrupt Flag - CLEAR */
    ADC_CADRCIF_SET_gc   = (0x04), /* C-ADC Regulator Current Interrupt Flag - SET */
} ADC_CADRCIF_t;

/* C-ADC Accumulated Current Interrupt Flag */
typedef enum ADC_CADACIF_enum
{
    ADC_CADACIF_CLEAR_gc = (0x00), /* C-ADC Accumulated Current Interrupt Flag - CLEAR */
    ADC_CADACIF_SET_gc   = (0x02), /* C-ADC Accumulated Current Interrupt Flag - SET */
} ADC_CADACIF_t;

/* C-ADC Instantaneous Current Interrupt Flag */
typedef enum ADC_CADICIF_enum
{
    ADC_CADICIF_CLEAR_gc = (0x00), /* C-ADC Instantaneous Current Interrupt Flag - CLEAR */
    ADC_CADICIF_SET_gc   = (0x01), /* C-ADC Instantaneous Current Interrupt Flag - SET */
} ADC_CADICIF_t;

/* V-ADC Accumulated Voltage Interrupt Enable */
typedef enum ADC_VADACIE_enum
{
    ADC_VADACIE_CLEAR_gc = (0x00), /* V-ADC Accumulated Voltage Interrupt Enable - CLEAR */
    ADC_VADACIE_SET_gc   = (0x20), /* V-ADC Accumulated Voltage Interrupt Enable - SET */
} ADC_VADACIE_t;

/* V-DAC Instantaneous Voltage Interrupt Enable */
typedef enum ADC_VADICIE_enum
{
    ADC_VADICIE_CLEAR_gc = (0x00), /* V-DAC Instantaneous Voltage Interrupt Enable - CLEAR */
    ADC_VADICIE_SET_gc   = (0x10), /* V-DAC Instantaneous Voltage Interrupt Enable - SET */
} ADC_VADICIE_t;

/* C-ADC Regulator Current Interrupt Enable */
typedef enum ADC_CADRCIE_enum
{
    ADC_CADRCIE_CLEAR_gc = (0x00), /* C-ADC Regulator Current Interrupt Enable - CLEAR */
    ADC_CADRCIE_SET_gc   = (0x04), /* C-ADC Regulator Current Interrupt Enable - SET */
} ADC_CADRCIE_t;

/* C-ADC Accumulated Current Interrupt Enable */
typedef enum ADC_CADACIE_enum
{
    ADC_CADACIE_CLEAR_gc = (0x00), /* C-ADC Accumulated Current Interrupt Enable - CLEAR */
    ADC_CADACIE_SET_gc   = (0x02), /* C-ADC Accumulated Current Interrupt Enable - SET */
} ADC_CADACIE_t;

/* C-ADC Instantaneous Current Interrupt Enable */
typedef enum ADC_CADICIE_enum
{
    ADC_CADICIE_CLEAR_gc = (0x00), /* C-ADC Instantaneous Current Interrupt Enable - CLEAR */
    ADC_CADICIE_SET_gc   = (0x01), /* C-ADC Instantaneous Current Interrupt Enable - SET */
} ADC_CADICIE_t;

/*
--------------------------------------------------------------------------------
BANDGAP - Bandgap
--------------------------------------------------------------------------------
*/

typedef struct BANDGAP_struct
{
    register8_t rsv_0x00[209]; /* RESERVED REGISTER BLOCK */
    register8_t BGCSRA;        /* Bandgap Control and Status Register A */
    register8_t BGCRB;         /* Band Gap Calibration Register B */
    register8_t BGCRA;         /* Band Gap Calibration Register A */
    register8_t BGLR;          /* Band Gap Lock Register */
} BANDGAP_t;


/* Band Gap Lock Enable */
typedef enum BANDGAP_BGPLE_enum
{
    BANDGAP_BGPLE_CLEAR_gc = (0x00), /* Band Gap Lock Enable - CLEAR */
    BANDGAP_BGPLE_SET_gc   = (0x02), /* Band Gap Lock Enable - SET */
} BANDGAP_BGPLE_t;

/* Band Gap Lock */
typedef enum BANDGAP_BGPL_enum
{
    BANDGAP_BGPL_CLEAR_gc = (0x00), /* Band Gap Lock - CLEAR */
    BANDGAP_BGPL_SET_gc   = (0x01), /* Band Gap Lock - SET */
} BANDGAP_BGPL_t;

/*
--------------------------------------------------------------------------------
LINUART - Local Interconnect Network
--------------------------------------------------------------------------------
*/

typedef struct LINUART_struct
{
    register8_t rsv_0x00[192]; /* RESERVED REGISTER BLOCK */
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
    register8_t rsv_0x56[7];  /* RESERVED REGISTER BLOCK */
    _REGISTER16 (SP);         /* Stack Pointer  */
    register8_t rsv_0x5E;     /* RESERVED REGISTER */
    register8_t SREG;         /* Status Register */
    register8_t rsv_0x60;     /* RESERVED REGISTER */
    register8_t CLKPR;        /* Clock Prescale Register */
    register8_t rsv_0x62[2];  /* RESERVED REGISTER BLOCK */
    register8_t PRR0;         /* Power Reduction Register 0 */
    register8_t rsv_0x65;     /* RESERVED REGISTER */
    register8_t SOSCCALA;     /* Slow Oscillator Calibration Register A */
    register8_t SOSCCALB;     /* Oscillator Calibration Register B */
    register8_t rsv_0x68[22]; /* RESERVED REGISTER BLOCK */
    register8_t DIDR0;        /* Digital Input Disable Register */
    register8_t rsv_0x7F[89]; /* RESERVED REGISTER BLOCK */
    register8_t PLLCSR;       /* PLL Control and Status Register */
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

/* Clock Output Enable */
typedef enum CPU_CKOE_enum
{
    CPU_CKOE_CLEAR_gc = (0x00), /* Clock Output Enable - CLEAR */
    CPU_CKOE_SET_gc   = (0x20), /* Clock Output Enable - SET */
} CPU_CKOE_t;

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

/* OCD Reset Flag */
typedef enum CPU_OCDRF_enum
{
    CPU_OCDRF_CLEAR_gc = (0x00), /* OCD Reset Flag - CLEAR */
    CPU_OCDRF_SET_gc   = (0x10), /* OCD Reset Flag - SET */
} CPU_OCDRF_t;

/* Watchdog Reset Flag */
typedef enum CPU_WDRF_enum
{
    CPU_WDRF_CLEAR_gc = (0x00), /* Watchdog Reset Flag - CLEAR */
    CPU_WDRF_SET_gc   = (0x08), /* Watchdog Reset Flag - SET */
} CPU_WDRF_t;

/* Brown-out Reset Flag */
typedef enum CPU_BODRF_enum
{
    CPU_BODRF_CLEAR_gc = (0x00), /* Brown-out Reset Flag - CLEAR */
    CPU_BODRF_SET_gc   = (0x04), /* Brown-out Reset Flag - SET */
} CPU_BODRF_t;

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

/* PLL Software Enable */
typedef enum CPU_SWEN_enum
{
    CPU_SWEN_CLEAR_gc = (0x00), /* PLL Software Enable - CLEAR */
    CPU_SWEN_SET_gc   = (0x20), /* PLL Software Enable - SET */
} CPU_SWEN_t;

/* PLL Lock */
typedef enum CPU_LOCK_enum
{
    CPU_LOCK_CLEAR_gc = (0x00), /* PLL Lock - CLEAR */
    CPU_LOCK_SET_gc   = (0x10), /* PLL Lock - SET */
} CPU_LOCK_t;

/* PLL Lock Change Interrupt Flag */
typedef enum CPU_PLLCIF_enum
{
    CPU_PLLCIF_CLEAR_gc = (0x00), /* PLL Lock Change Interrupt Flag - CLEAR */
    CPU_PLLCIF_SET_gc   = (0x02), /* PLL Lock Change Interrupt Flag - SET */
} CPU_PLLCIF_t;

/* PLL Lock Change Interrupt Enable */
typedef enum CPU_PLLCIE_enum
{
    CPU_PLLCIE_CLEAR_gc = (0x00), /* PLL Lock Change Interrupt Enable - CLEAR */
    CPU_PLLCIE_SET_gc   = (0x01), /* PLL Lock Change Interrupt Enable - SET */
} CPU_PLLCIE_t;

/* Sleep Mode Select bits */
typedef enum CPU_SM_enum
{
    CPU_SM_IDLE_gc     = (0x00<<1), /* Idle */
    CPU_SM_ADC_gc      = (0x01<<1), /* ADC */
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

/* When this bit is written logic one, the digital input buffer of the corresponding V_ADC pin is disabled. */
typedef enum CPU_PA1DID_enum
{
    CPU_PA1DID_CLEAR_gc = (0x00), /* When this bit is written logic one, the digital input buffer of the corresponding V_ADC pin is disabled. - CLEAR */
    CPU_PA1DID_SET_gc   = (0x02), /* When this bit is written logic one, the digital input buffer of the corresponding V_ADC pin is disabled. - SET */
} CPU_PA1DID_t;

/* When this bit is written logic one, the digital input buffer of the corresponding V_ADC pin is disabled. */
typedef enum CPU_PA0DID_enum
{
    CPU_PA0DID_CLEAR_gc = (0x00), /* When this bit is written logic one, the digital input buffer of the corresponding V_ADC pin is disabled. - CLEAR */
    CPU_PA0DID_SET_gc   = (0x01), /* When this bit is written logic one, the digital input buffer of the corresponding V_ADC pin is disabled. - SET */
} CPU_PA0DID_t;

/* Power Reduction LIN UART Interface */
typedef enum CPU_PRLIN_enum
{
    CPU_PRLIN_CLEAR_gc = (0x00), /* Power Reduction LIN UART Interface - CLEAR */
    CPU_PRLIN_SET_gc   = (0x08), /* Power Reduction LIN UART Interface - SET */
} CPU_PRLIN_t;

/* Power reduction SPI */
typedef enum CPU_PRSPI_enum
{
    CPU_PRSPI_CLEAR_gc = (0x00), /* Power reduction SPI - CLEAR */
    CPU_PRSPI_SET_gc   = (0x04), /* Power reduction SPI - SET */
} CPU_PRSPI_t;

/* Power Reduction Timer/Counter1 */
typedef enum CPU_PRTIM1_enum
{
    CPU_PRTIM1_CLEAR_gc = (0x00), /* Power Reduction Timer/Counter1 - CLEAR */
    CPU_PRTIM1_SET_gc   = (0x02), /* Power Reduction Timer/Counter1 - SET */
} CPU_PRTIM1_t;

/* Power Reduction Timer/Counter0 */
typedef enum CPU_PRTIM0_enum
{
    CPU_PRTIM0_CLEAR_gc = (0x00), /* Power Reduction Timer/Counter0 - CLEAR */
    CPU_PRTIM0_SET_gc   = (0x01), /* Power Reduction Timer/Counter0 - SET */
} CPU_PRTIM0_t;

/* Clock Prescaler Change Enable */
typedef enum CPU_CLKPCE_enum
{
    CPU_CLKPCE_CLEAR_gc = (0x00), /* Clock Prescaler Change Enable - CLEAR */
    CPU_CLKPCE_SET_gc   = (0x80), /* Clock Prescaler Change Enable - SET */
} CPU_CLKPCE_t;

/* Clock Prescaler Select Bits */
#define CPU_CLKPR_CLKPS_gc(x) (x & 0x03)

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
    register8_t PCMSK0;       /* Pin Change Enable Mask Register 0 */
    register8_t PCMSK1;       /* Pin Change Enable Mask Register 1 */
} EXINT_t;


/* External Interrupt Sense Control 0 Bit 1 */
typedef enum EXINT_ISC01_enum
{
    EXINT_ISC01_CLEAR_gc = (0x00), /* External Interrupt Sense Control 0 Bit 1 - CLEAR */
    EXINT_ISC01_SET_gc   = (0x02), /* External Interrupt Sense Control 0 Bit 1 - SET */
} EXINT_ISC01_t;

/* External Interrupt Sense Control 0 Bit 0 */
typedef enum EXINT_ISC00_enum
{
    EXINT_ISC00_VAL_0x00_gc = (0x00), /* Low Level of INTX */
    EXINT_ISC00_VAL_0x01_gc = (0x01), /* Any Logical Change of INTX */
    EXINT_ISC00_VAL_0x02_gc = (0x02), /* Falling Edge of INTX */
    EXINT_ISC00_VAL_0x03_gc = (0x03), /* Rising Edge of INTX */
} EXINT_ISC00_t;

/* External Interrupt Request 0 Enable */
typedef enum EXINT_INT0_enum
{
    EXINT_INT0_CLEAR_gc = (0x00), /* External Interrupt Request 0 Enable - CLEAR */
    EXINT_INT0_SET_gc   = (0x01), /* External Interrupt Request 0 Enable - SET */
} EXINT_INT0_t;

/* External Interrupt Flag 0 */
typedef enum EXINT_INTF0_enum
{
    EXINT_INTF0_CLEAR_gc = (0x00), /* External Interrupt Flag 0 - CLEAR */
    EXINT_INTF0_SET_gc   = (0x01), /* External Interrupt Flag 0 - SET */
} EXINT_INTF0_t;

/*
--------------------------------------------------------------------------------
WDT - Watchdog Timer
--------------------------------------------------------------------------------
*/

typedef struct WDT_struct
{
    register8_t rsv_0x00[96]; /* RESERVED REGISTER BLOCK */
    register8_t WDTCSR;       /* Watchdog Timer Control Register */
    register8_t rsv_0x61[2];  /* RESERVED REGISTER BLOCK */
    register8_t WDTCLR;       /* Watchdog Timer Configuration Lock Register */
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

/* Watchdog Timer Comfiguration Lock bits */
#define WDT_WDTCLR_WDCL_gc(x) ((x<<1) & 0x06)

/* Watchdog Timer Comfiguration Lock Enable */
typedef enum WDT_WDCLE_enum
{
    WDT_WDCLE_CLEAR_gc = (0x00), /* Watchdog Timer Comfiguration Lock Enable - CLEAR */
    WDT_WDCLE_SET_gc   = (0x01), /* Watchdog Timer Comfiguration Lock Enable - SET */
} WDT_WDCLE_t;

/*
--------------------------------------------------------------------------------
WAKEUP_TIMER - Wakeup Timer
--------------------------------------------------------------------------------
*/

typedef struct WAKEUP_TIMER_struct
{
    register8_t rsv_0x00[98]; /* RESERVED REGISTER BLOCK */
    register8_t WUTCSR;       /* Wake-up Timer Control and Status Register */
} WAKEUP_TIMER_t;


/* Wake-up Timer Interrupt Flag */
typedef enum WAKEUP_TIMER_WUTIF_enum
{
    WAKEUP_TIMER_WUTIF_CLEAR_gc = (0x00), /* Wake-up Timer Interrupt Flag - CLEAR */
    WAKEUP_TIMER_WUTIF_SET_gc   = (0x80), /* Wake-up Timer Interrupt Flag - SET */
} WAKEUP_TIMER_WUTIF_t;

/* Wake-up Timer Interrupt Enable */
typedef enum WAKEUP_TIMER_WUTIE_enum
{
    WAKEUP_TIMER_WUTIE_CLEAR_gc = (0x00), /* Wake-up Timer Interrupt Enable - CLEAR */
    WAKEUP_TIMER_WUTIE_SET_gc   = (0x40), /* Wake-up Timer Interrupt Enable - SET */
} WAKEUP_TIMER_WUTIE_t;

/* Wake-up Timer Reset */
typedef enum WAKEUP_TIMER_WUTR_enum
{
    WAKEUP_TIMER_WUTR_CLEAR_gc = (0x00), /* Wake-up Timer Reset - CLEAR */
    WAKEUP_TIMER_WUTR_SET_gc   = (0x10), /* Wake-up Timer Reset - SET */
} WAKEUP_TIMER_WUTR_t;

/* Wake-up Timer Enable */
typedef enum WAKEUP_TIMER_WUTE_enum
{
    WAKEUP_TIMER_WUTE_CLEAR_gc = (0x00), /* Wake-up Timer Enable - CLEAR */
    WAKEUP_TIMER_WUTE_SET_gc   = (0x08), /* Wake-up Timer Enable - SET */
} WAKEUP_TIMER_WUTE_t;

/* Wake-up Timer Prescaler Bits */
#define WAKEUP_TIMER_WUTCSR_WUTP_gc(x) (x & 0x07)
/*
================================================================================
IO Module Instances. Mapped to memory.
================================================================================
*/

#define SPI          (*(SPI_t *) 0x0000)          /* Serial Peripheral Interface */
#define EEPROM       (*(EEPROM_t *) 0x0000)       /* EEPROM */
#define TC1          (*(TC1_t *) 0x0000)          /* Timer/Counter, 16-bit */
#define TC0          (*(TC0_t *) 0x0000)          /* Timer/Counter, 16-bit */
#define PORTB        (*(PORTB_t *) 0x0000)        /* I/O Port */
#define PORTA        (*(PORTA_t *) 0x0000)        /* I/O Port */
#define BOOT_LOAD    (*(BOOT_LOAD_t *) 0x0000)    /* Bootloader */
#define ADC          (*(ADC_t *) 0x0000)          /* Analog-to-Digital Converter */
#define BANDGAP      (*(BANDGAP_t *) 0x0000)      /* Bandgap */
#define LINUART      (*(LINUART_t *) 0x0000)      /* Local Interconnect Network */
#define CPU          (*(CPU_t *) 0x0000)          /* CPU Registers */
#define EXINT        (*(EXINT_t *) 0x0000)        /* External Interrupts */
#define WDT          (*(WDT_t *) 0x0000)          /* Watchdog Timer */
#define WAKEUP_TIMER (*(WAKEUP_TIMER_t *) 0x0000) /* Wakeup Timer */
#define FUSE         (*(FUSE_t *) 0x0000)         /* Fuses */
#define LOCKBIT      (*(LOCKBIT_t *) 0x0000)      /* Lockbits */
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


/* Watch-dog Timer always on */
#define FUSE_WDTON_CLEAR_gc (0x00) /* Watch-dog Timer always on - CLEAR */
#define FUSE_WDTON_SET_gc   (0x80) /* Watch-dog Timer always on - SET */


/* Preserve EEPROM through the Chip Erase cycle */
#define FUSE_EESAVE_CLEAR_gc (0x00) /* Preserve EEPROM through the Chip Erase cycle - CLEAR */
#define FUSE_EESAVE_SET_gc   (0x40) /* Preserve EEPROM through the Chip Erase cycle - SET */


/* Serial program downloading (SPI) enabled */
#define FUSE_SPIEN_CLEAR_gc (0x00) /* Serial program downloading (SPI) enabled - CLEAR */
#define FUSE_SPIEN_SET_gc   (0x20) /* Serial program downloading (SPI) enabled - SET */


/* Brown-out detection enabled */
#define FUSE_BODEN_CLEAR_gc (0x00) /* Brown-out detection enabled - CLEAR */
#define FUSE_BODEN_SET_gc   (0x10) /* Brown-out detection enabled - SET */


/* Divide clock by 8 */
#define FUSE_CKDIV8_CLEAR_gc (0x00) /* Divide clock by 8 - CLEAR */
#define FUSE_CKDIV8_SET_gc   (0x08) /* Divide clock by 8 - SET */


/* Select start-up time */
#define FUSE_SUT_14CK_0MS_gc  (0x00<<1) /* Start-up time 14 CK + 0 ms */
#define FUSE_SUT_14CK_16MS_gc (0x01<<1) /* Start-up time 14 CK + 16 ms */
#define FUSE_SUT_14CK_32MS_gc (0x02<<1) /* Start-up time 14 CK + 32 ms */
#define FUSE_SUT_14CK_64MS_gc (0x03<<1) /* Start-up time 14 CK + 64 ms */


/* Oscillator select */
#define FUSE_OSCSEL0_CLEAR_gc (0x00) /* Oscillator select - CLEAR */
#define FUSE_OSCSEL0_SET_gc   (0x01) /* Oscillator select - SET */


/* Debug Wire enable */
#define FUSE_DWEN_CLEAR_gc (0x00) /* Debug Wire enable - CLEAR */
#define FUSE_DWEN_SET_gc   (0x08) /* Debug Wire enable - SET */


/* Select Boot Size */
#define FUSE_BOOTSZ_512W_7E00_gc  (0x03<<1) /* Boot Flash size=512 words Boot address=$7E00 */
#define FUSE_BOOTSZ_1024W_7C00_gc (0x02<<1) /* Boot Flash size=1024 words Boot address=$7C00 */
#define FUSE_BOOTSZ_2048W_7800_gc (0x01<<1) /* Boot Flash size=2048 words Boot address=$7800 */
#define FUSE_BOOTSZ_4096W_7000_gc (0x00<<1) /* Boot Flash size=4096 words Boot address=$7000 */


/* Boot Reset vector Enabled */
#define FUSE_BOOTRST_CLEAR_gc (0x00) /* Boot Reset vector Enabled - CLEAR */
#define FUSE_BOOTRST_SET_gc   (0x01) /* Boot Reset vector Enabled - SET */


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
TC16 - Timer/Counter, 16-bit
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
TC16 - Timer/Counter, 16-bit
--------------------------------------------------------------------------------
*/


/* Clock Select1 bis */
#define TC1_CS_VAL_0x00_gc (0x00) /* No Clock Source (Stopped) */
#define TC1_CS_VAL_0x01_gc (0x01) /* Running, No Prescaling */
#define TC1_CS_VAL_0x02_gc (0x02) /* Running, CLK/8 */
#define TC1_CS_VAL_0x03_gc (0x03) /* Running, CLK/64 */
#define TC1_CS_VAL_0x04_gc (0x04) /* Running, CLK/256 */
#define TC1_CS_VAL_0x05_gc (0x05) /* Running, CLK/1024 */
#define TC1_CS_VAL_0x06_gc (0x06) /* Running, ExtClk Tx Falling Edge */
#define TC1_CS_VAL_0x07_gc (0x07) /* Running, ExtClk Tx Rising Edge */


/* Timer/Counter Width */
#define TC1_TCW1_CLEAR_gc (0x00) /* Timer/Counter Width - CLEAR */
#define TC1_TCW1_SET_gc   (0x80) /* Timer/Counter Width - SET */


/* Input Capture Mode Enable */
#define TC1_ICEN1_CLEAR_gc (0x00) /* Input Capture Mode Enable - CLEAR */
#define TC1_ICEN1_SET_gc   (0x40) /* Input Capture Mode Enable - SET */


/* Input Capture Noise Canceler */
#define TC1_ICNC1_CLEAR_gc (0x00) /* Input Capture Noise Canceler - CLEAR */
#define TC1_ICNC1_SET_gc   (0x20) /* Input Capture Noise Canceler - SET */


/* Input Capture Edge Select */
#define TC1_ICES1_CLEAR_gc (0x00) /* Input Capture Edge Select - CLEAR */
#define TC1_ICES1_SET_gc   (0x10) /* Input Capture Edge Select - SET */


/* Input Capture Select */
#define TC1_ICS1_CLEAR_gc (0x00) /* Input Capture Select - CLEAR */
#define TC1_ICS1_SET_gc   (0x08) /* Input Capture Select - SET */


/* Waveform Generation Mode */
#define TC1_WGM10_CLEAR_gc (0x00) /* Waveform Generation Mode - CLEAR */
#define TC1_WGM10_SET_gc   (0x01) /* Waveform Generation Mode - SET */


/* Timer/Counter n Input Capture Interrupt Enable */
#define TC1_ICIE1_CLEAR_gc (0x00) /* Timer/Counter n Input Capture Interrupt Enable - CLEAR */
#define TC1_ICIE1_SET_gc   (0x08) /* Timer/Counter n Input Capture Interrupt Enable - SET */


/* Timer/Counter1 Output Compare B Interrupt Enable */
#define TC1_OCIE1B_CLEAR_gc (0x00) /* Timer/Counter1 Output Compare B Interrupt Enable - CLEAR */
#define TC1_OCIE1B_SET_gc   (0x04) /* Timer/Counter1 Output Compare B Interrupt Enable - SET */


/* Timer/Counter1 Output Compare A Interrupt Enable */
#define TC1_OCIE1A_CLEAR_gc (0x00) /* Timer/Counter1 Output Compare A Interrupt Enable - CLEAR */
#define TC1_OCIE1A_SET_gc   (0x02) /* Timer/Counter1 Output Compare A Interrupt Enable - SET */


/* Timer/Counter1 Overflow Interrupt Enable */
#define TC1_TOIE1_CLEAR_gc (0x00) /* Timer/Counter1 Overflow Interrupt Enable - CLEAR */
#define TC1_TOIE1_SET_gc   (0x01) /* Timer/Counter1 Overflow Interrupt Enable - SET */


/* Timer/Counter 1 Input Capture Flag */
#define TC1_ICF1_CLEAR_gc (0x00) /* Timer/Counter 1 Input Capture Flag - CLEAR */
#define TC1_ICF1_SET_gc   (0x08) /* Timer/Counter 1 Input Capture Flag - SET */


/* Timer/Counter1 Output Compare Flag B */
#define TC1_OCF1B_CLEAR_gc (0x00) /* Timer/Counter1 Output Compare Flag B - CLEAR */
#define TC1_OCF1B_SET_gc   (0x04) /* Timer/Counter1 Output Compare Flag B - SET */


/* Timer/Counter1 Output Compare Flag A */
#define TC1_OCF1A_CLEAR_gc (0x00) /* Timer/Counter1 Output Compare Flag A - CLEAR */
#define TC1_OCF1A_SET_gc   (0x02) /* Timer/Counter1 Output Compare Flag A - SET */


/* Timer/Counter1 Overflow Flag */
#define TC1_TOV1_CLEAR_gc (0x00) /* Timer/Counter1 Overflow Flag - CLEAR */
#define TC1_TOV1_SET_gc   (0x01) /* Timer/Counter1 Overflow Flag - SET */


/* Timer/Counter Synchronization Mode */
#define TC1_TSM_CLEAR_gc (0x00) /* Timer/Counter Synchronization Mode - CLEAR */
#define TC1_TSM_SET_gc   (0x80) /* Timer/Counter Synchronization Mode - SET */


/* Prescaler Reset */
#define TC1_PSRSYNC_CLEAR_gc (0x00) /* Prescaler Reset - CLEAR */
#define TC1_PSRSYNC_SET_gc   (0x01) /* Prescaler Reset - SET */


/* Clock Select0 bit 2 */
#define TC0_CS02_CLEAR_gc (0x00) /* Clock Select0 bit 2 - CLEAR */
#define TC0_CS02_SET_gc   (0x04) /* Clock Select0 bit 2 - SET */


/* Clock Select0 bit 1 */
#define TC0_CS01_CLEAR_gc (0x00) /* Clock Select0 bit 1 - CLEAR */
#define TC0_CS01_SET_gc   (0x02) /* Clock Select0 bit 1 - SET */


/* Clock Select0 bit 0 */
#define TC0_CS00_VAL_0x00_gc (0x00) /* No Clock Source (Stopped) */
#define TC0_CS00_VAL_0x01_gc (0x01) /* Running, No Prescaling */
#define TC0_CS00_VAL_0x02_gc (0x02) /* Running, CLK/8 */
#define TC0_CS00_VAL_0x03_gc (0x03) /* Running, CLK/64 */
#define TC0_CS00_VAL_0x04_gc (0x04) /* Running, CLK/256 */
#define TC0_CS00_VAL_0x05_gc (0x05) /* Running, CLK/1024 */
#define TC0_CS00_VAL_0x06_gc (0x06) /* Running, ExtClk Tx Falling Edge */
#define TC0_CS00_VAL_0x07_gc (0x07) /* Running, ExtClk Tx Rising Edge */


/* Timer/Counter Width */
#define TC0_TCW0_CLEAR_gc (0x00) /* Timer/Counter Width - CLEAR */
#define TC0_TCW0_SET_gc   (0x80) /* Timer/Counter Width - SET */


/* Input Capture Mode Enable */
#define TC0_ICEN0_CLEAR_gc (0x00) /* Input Capture Mode Enable - CLEAR */
#define TC0_ICEN0_SET_gc   (0x40) /* Input Capture Mode Enable - SET */


/* Input Capture Noise Canceler */
#define TC0_ICNC0_CLEAR_gc (0x00) /* Input Capture Noise Canceler - CLEAR */
#define TC0_ICNC0_SET_gc   (0x20) /* Input Capture Noise Canceler - SET */


/* Input Capture Edge Select */
#define TC0_ICES0_CLEAR_gc (0x00) /* Input Capture Edge Select - CLEAR */
#define TC0_ICES0_SET_gc   (0x10) /* Input Capture Edge Select - SET */


/* Input Capture Select */
#define TC0_ICS0_CLEAR_gc (0x00) /* Input Capture Select - CLEAR */
#define TC0_ICS0_SET_gc   (0x08) /* Input Capture Select - SET */


/* Waveform Generation Mode */
#define TC0_WGM00_CLEAR_gc (0x00) /* Waveform Generation Mode - CLEAR */
#define TC0_WGM00_SET_gc   (0x01) /* Waveform Generation Mode - SET */


/* Timer/Counter n Input Capture Interrupt Enable */
#define TC0_ICIE0_CLEAR_gc (0x00) /* Timer/Counter n Input Capture Interrupt Enable - CLEAR */
#define TC0_ICIE0_SET_gc   (0x08) /* Timer/Counter n Input Capture Interrupt Enable - SET */


/* Timer/Counter0 Output Compare B Interrupt Enable */
#define TC0_OCIE0B_CLEAR_gc (0x00) /* Timer/Counter0 Output Compare B Interrupt Enable - CLEAR */
#define TC0_OCIE0B_SET_gc   (0x04) /* Timer/Counter0 Output Compare B Interrupt Enable - SET */


/* Timer/Counter0 Output Compare A Interrupt Enable */
#define TC0_OCIE0A_CLEAR_gc (0x00) /* Timer/Counter0 Output Compare A Interrupt Enable - CLEAR */
#define TC0_OCIE0A_SET_gc   (0x02) /* Timer/Counter0 Output Compare A Interrupt Enable - SET */


/* Timer/Counter0 Overflow Interrupt Enable */
#define TC0_TOIE0_CLEAR_gc (0x00) /* Timer/Counter0 Overflow Interrupt Enable - CLEAR */
#define TC0_TOIE0_SET_gc   (0x01) /* Timer/Counter0 Overflow Interrupt Enable - SET */


/* Timer/Counter 0 Input Capture Flag */
#define TC0_ICF0_CLEAR_gc (0x00) /* Timer/Counter 0 Input Capture Flag - CLEAR */
#define TC0_ICF0_SET_gc   (0x08) /* Timer/Counter 0 Input Capture Flag - SET */


/* Timer/Counter0 Output Compare Flag B */
#define TC0_OCF0B_CLEAR_gc (0x00) /* Timer/Counter0 Output Compare Flag B - CLEAR */
#define TC0_OCF0B_SET_gc   (0x04) /* Timer/Counter0 Output Compare Flag B - SET */


/* Timer/Counter0 Output Compare Flag A */
#define TC0_OCF0A_CLEAR_gc (0x00) /* Timer/Counter0 Output Compare Flag A - CLEAR */
#define TC0_OCF0A_SET_gc   (0x02) /* Timer/Counter0 Output Compare Flag A - SET */


/* Timer/Counter0 Overflow Flag */
#define TC0_TOV0_CLEAR_gc (0x00) /* Timer/Counter0 Overflow Flag - CLEAR */
#define TC0_TOV0_SET_gc   (0x01) /* Timer/Counter0 Overflow Flag - SET */


/* Timer/Counter Synchronization Mode */
#define TC0_TSM_CLEAR_gc (0x00) /* Timer/Counter Synchronization Mode - CLEAR */
#define TC0_TSM_SET_gc   (0x80) /* Timer/Counter Synchronization Mode - SET */


/* Prescaler Reset */
#define TC0_PSRSYNC_CLEAR_gc (0x00) /* Prescaler Reset - CLEAR */
#define TC0_PSRSYNC_SET_gc   (0x01) /* Prescaler Reset - SET */


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


/* Port B Override Change Enable */
#define PORTB_PBOVCE_CLEAR_gc (0x00) /* Port B Override Change Enable - CLEAR */
#define PORTB_PBOVCE_SET_gc   (0x80) /* Port B Override Change Enable - SET */


/* Port B Override Enable 3 */
#define PORTB_PBOE3_CLEAR_gc (0x00) /* Port B Override Enable 3 - CLEAR */
#define PORTB_PBOE3_SET_gc   (0x08) /* Port B Override Enable 3 - SET */


/* Port B Override Enable 0 */
#define PORTB_PBOE0_CLEAR_gc (0x00) /* Port B Override Enable 0 - CLEAR */
#define PORTB_PBOE0_SET_gc   (0x01) /* Port B Override Enable 0 - SET */


/*
--------------------------------------------------------------------------------
BOOT_LOAD - Bootloader
--------------------------------------------------------------------------------
*/


/* SPM Interrupt Enable */
#define BOOT_LOAD_SPMIE_CLEAR_gc (0x00) /* SPM Interrupt Enable - CLEAR */
#define BOOT_LOAD_SPMIE_SET_gc   (0x80) /* SPM Interrupt Enable - SET */


/* Read-While-Write Section Busy */
#define BOOT_LOAD_RWWSB_CLEAR_gc (0x00) /* Read-While-Write Section Busy - CLEAR */
#define BOOT_LOAD_RWWSB_SET_gc   (0x40) /* Read-While-Write Section Busy - SET */


/* Signature Row Read */
#define BOOT_LOAD_SIGRD_CLEAR_gc (0x00) /* Signature Row Read - CLEAR */
#define BOOT_LOAD_SIGRD_SET_gc   (0x20) /* Signature Row Read - SET */


/* Read-While-Write Section Read Enable */
#define BOOT_LOAD_RWWSRE_CLEAR_gc (0x00) /* Read-While-Write Section Read Enable - CLEAR */
#define BOOT_LOAD_RWWSRE_SET_gc   (0x10) /* Read-While-Write Section Read Enable - SET */


/* Lock Bit Set */
#define BOOT_LOAD_LBSET_CLEAR_gc (0x00) /* Lock Bit Set - CLEAR */
#define BOOT_LOAD_LBSET_SET_gc   (0x08) /* Lock Bit Set - SET */


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
ADC - Analog-to-Digital Converter
--------------------------------------------------------------------------------
*/


/* Synchronization Busy */
#define ADC_SBSY_CLEAR_gc (0x00) /* Synchronization Busy - CLEAR */
#define ADC_SBSY_SET_gc   (0x04) /* Synchronization Busy - SET */


/* Synchronization Command */
#define ADC_SCMD_VAL_0x00_gc (0x00) /* Reserved */
#define ADC_SCMD_VAL_0x01_gc (0x01) /* Reset and Synchronize */
#define ADC_SCMD_VAL_0x02_gc (0x02) /* Synchronize on next Instantaneous Conversion */
#define ADC_SCMD_VAL_0x03_gc (0x03) /* Synchronize on next Accumulated Conversion */


/* V-ADC Instantaneous Conversion Polarity Status */
#define ADC_VADICPS_CLEAR_gc (0x00) /* V-ADC Instantaneous Conversion Polarity Status - CLEAR */
#define ADC_VADICPS_SET_gc   (0x40) /* V-ADC Instantaneous Conversion Polarity Status - SET */


/* VADAC Data Read Out Busy */
#define ADC_VADACRB_CLEAR_gc (0x00) /* VADAC Data Read Out Busy - CLEAR */
#define ADC_VADACRB_SET_gc   (0x20) /* VADAC Data Read Out Busy - SET */


/* VADIC Data Read Out Busy */
#define ADC_VADICRB_CLEAR_gc (0x00) /* VADIC Data Read Out Busy - CLEAR */
#define ADC_VADICRB_SET_gc   (0x10) /* VADIC Data Read Out Busy - SET */


/* C-ADC Instantaneous Conversion Polarity Status */
#define ADC_CADICPS_CLEAR_gc (0x00) /* C-ADC Instantaneous Conversion Polarity Status - CLEAR */
#define ADC_CADICPS_SET_gc   (0x04) /* C-ADC Instantaneous Conversion Polarity Status - SET */


/* CADAC Data Read Out Busy */
#define ADC_CADACRB_CLEAR_gc (0x00) /* CADAC Data Read Out Busy - CLEAR */
#define ADC_CADACRB_SET_gc   (0x02) /* CADAC Data Read Out Busy - SET */


/* CADIC Data Read Out Busy */
#define ADC_CADICRB_CLEAR_gc (0x00) /* CADIC Data Read Out Busy - CLEAR */
#define ADC_CADICRB_SET_gc   (0x01) /* CADIC Data Read Out Busy - SET */


/* ADC Polarity Select */
#define ADC_ADPSEL_CLEAR_gc (0x00) /* ADC Polarity Select - CLEAR */
#define ADC_ADPSEL_SET_gc   (0x08) /* ADC Polarity Select - SET */


/* C-ADC Chopper Mode Select */
#define ADC_ADCMS_VAL_0x00_gc (0x00<<1) /* Chopping Disabled */
#define ADC_ADCMS_VAL_0x01_gc (0x01<<1) /* Automatic Fast Chopping */
#define ADC_ADCMS_VAL_0x02_gc (0x02<<1) /* Automatic Slow Chopping */
#define ADC_ADCMS_VAL_0x03_gc (0x03<<1) /* Software Polarity Control */


/* Sampling Clock Select */
#define ADC_CKSEL_VAL_0x00_gc (0x00) /* PLL (512kHz output) as sampling clock */
#define ADC_CKSEL_VAL_0x01_gc (0x01) /* Slow RC Oscillator as sampling clock */


/* Instantaneous Decimation Ratio Select */
#define ADC_ADIDES_VAL_0x00_gc (0x00<<3) /* 512 */
#define ADC_ADIDES_VAL_0x01_gc (0x01<<3) /* 256 */
#define ADC_ADIDES_VAL_0x02_gc (0x02<<3) /* 128 */
#define ADC_ADIDES_VAL_0x03_gc (0x03<<3) /* 64 */


/* Accumulated Decimation Ratio Select */
#define ADC_ADADES_VAL_0x00_gc (0x00) /* 512 */
#define ADC_ADADES_VAL_0x01_gc (0x01) /* 256 */
#define ADC_ADADES_VAL_0x02_gc (0x02) /* 128 */
#define ADC_ADADES_VAL_0x03_gc (0x03) /* 64 */
#define ADC_ADADES_VAL_0x04_gc (0x04) /* 32 */
#define ADC_ADADES_VAL_0x05_gc (0x05) /* 16 */
#define ADC_ADADES_VAL_0x06_gc (0x06) /* 8 */
#define ADC_ADADES_VAL_0x07_gc (0x07) /* 4 */


/* C-ADC Enable */
#define ADC_CADEN_CLEAR_gc (0x00) /* C-ADC Enable - CLEAR */
#define ADC_CADEN_SET_gc   (0x80) /* C-ADC Enable - SET */


/* C-ADC Regular Current Comparator Mode */
#define ADC_CADRCM_VAL_0x00_gc (0x00<<4) /* Comparator Disabled */
#define ADC_CADRCM_VAL_0x01_gc (0x01<<4) /* Comparator Enabled. Regular Current Counter counts up if Accumulated Current is above threshold and is reset if Accumulated Current is below threshold. */
#define ADC_CADRCM_VAL_0x02_gc (0x02<<4) /* Comparator Enabled. Regular Current Counter counts up if Accumulated Current is above threshold and down if Accumulated Current is below threshold. */
#define ADC_CADRCM_VAL_0x03_gc (0x03<<4) /* Reserved */


/* C-ADC Regular Current Count Threshold */
#define ADC_CADRCT_VAL_0x00_gc (0x00) /* 1 */
#define ADC_CADRCT_VAL_0x01_gc (0x01) /* 2 */
#define ADC_CADRCT_VAL_0x02_gc (0x02) /* 3 */
#define ADC_CADRCT_VAL_0x03_gc (0x03) /* 4 */
#define ADC_CADRCT_VAL_0x04_gc (0x04) /* 5 */
#define ADC_CADRCT_VAL_0x05_gc (0x05) /* 6 */
#define ADC_CADRCT_VAL_0x06_gc (0x06) /* 7 */
#define ADC_CADRCT_VAL_0x07_gc (0x07) /* 8 */
#define ADC_CADRCT_VAL_0x08_gc (0x08) /* 9 */
#define ADC_CADRCT_VAL_0x09_gc (0x09) /* 10 */
#define ADC_CADRCT_VAL_0x0a_gc (0x0A) /* 11 */
#define ADC_CADRCT_VAL_0x0b_gc (0x0B) /* 12 */
#define ADC_CADRCT_VAL_0x0c_gc (0x0C) /* 13 */
#define ADC_CADRCT_VAL_0x0d_gc (0x0D) /* 14 */
#define ADC_CADRCT_VAL_0x0e_gc (0x0E) /* 15 */
#define ADC_CADRCT_VAL_0x0f_gc (0x0F) /* 16 */


/* C-ADC Gain */
#define ADC_CADG_VAL_0x00_gc (0x00<<3) /* 4x */
#define ADC_CADG_VAL_0x01_gc (0x01<<3) /* 8x */
#define ADC_CADG_VAL_0x02_gc (0x02<<3) /* 16x */
#define ADC_CADG_VAL_0x03_gc (0x03<<3) /* 32x */
#define ADC_CADG_VAL_0x04_gc (0x04<<3) /* 64x */
#define ADC_CADG_VAL_0x05_gc (0x05<<3) /* 128x */
#define ADC_CADG_VAL_0x06_gc (0x06<<3) /* 256x */
#define ADC_CADG_VAL_0x07_gc (0x07<<3) /* Reserved */


/* C-ADC Pin Diagnostics Mode */
#define ADC_CADPDM_VAL_0x00_gc (0x00<<1) /* No current source is enabled */
#define ADC_CADPDM_VAL_0x01_gc (0x01<<1) /* Current source on PI pin enabled */
#define ADC_CADPDM_VAL_0x02_gc (0x02<<1) /* Current source on NI pin enabled */
#define ADC_CADPDM_VAL_0x03_gc (0x03<<1) /* Current source on both PI/NI pins enabled */


/* C-ADC Diagnostics Channel Select */
#define ADC_CADDSEL_CLEAR_gc (0x00) /* C-ADC Diagnostics Channel Select - CLEAR */
#define ADC_CADDSEL_SET_gc   (0x01) /* C-ADC Diagnostics Channel Select - SET */


/* V-ADC Enable */
#define ADC_VADEN_CLEAR_gc (0x00) /* V-ADC Enable - CLEAR */
#define ADC_VADEN_SET_gc   (0x80) /* V-ADC Enable - SET */


/* V-ADC Reference Select */
#define ADC_VADREFS_VAL_0x00_gc (0x00<<5) /* VREF as reference */
#define ADC_VADREFS_VAL_0x01_gc (0x01<<5) /* AVDD/3 as reference (for diagnosis purpose) */


/* V-ADC Pin Diagnostics Mode */
#define ADC_VADPDM_VAL_0x00_gc (0x00<<3) /* No current source is enabled */
#define ADC_VADPDM_VAL_0x01_gc (0x01<<3) /* Current source on PV pin enabled */
#define ADC_VADPDM_VAL_0x02_gc (0x02<<3) /* Current source on NV pin enabled */
#define ADC_VADPDM_VAL_0x03_gc (0x03<<3) /* Current source on both PV/NV pins enabled */


/* V-ADC Channel Select */
#define ADC_VADMUX_VAL_0x00_gc (0x00) /* PV - NV */
#define ADC_VADMUX_VAL_0x01_gc (0x01) /* ADC0 - SGND */
#define ADC_VADMUX_VAL_0x02_gc (0x02) /* ADC1 - SGND */
#define ADC_VADMUX_VAL_0x03_gc (0x03) /* VTEMP - GND */
#define ADC_VADMUX_VAL_0x04_gc (0x04) /* DIAGNOSIS - GND (VREF/TBD) */
#define ADC_VADMUX_VAL_0x05_gc (0x05) /* Reserved */
#define ADC_VADMUX_VAL_0x06_gc (0x06) /* Reserved */
#define ADC_VADMUX_VAL_0x07_gc (0x07) /* Reserved */


/* V-ADC Accumulated Voltage Interrupt Flag */
#define ADC_VADACIF_CLEAR_gc (0x00) /* V-ADC Accumulated Voltage Interrupt Flag - CLEAR */
#define ADC_VADACIF_SET_gc   (0x20) /* V-ADC Accumulated Voltage Interrupt Flag - SET */


/* V-DAC Instantaneous Voltage Interrupt Flag */
#define ADC_VADICIF_CLEAR_gc (0x00) /* V-DAC Instantaneous Voltage Interrupt Flag - CLEAR */
#define ADC_VADICIF_SET_gc   (0x10) /* V-DAC Instantaneous Voltage Interrupt Flag - SET */


/* C-ADC Regulator Current Interrupt Flag */
#define ADC_CADRCIF_CLEAR_gc (0x00) /* C-ADC Regulator Current Interrupt Flag - CLEAR */
#define ADC_CADRCIF_SET_gc   (0x04) /* C-ADC Regulator Current Interrupt Flag - SET */


/* C-ADC Accumulated Current Interrupt Flag */
#define ADC_CADACIF_CLEAR_gc (0x00) /* C-ADC Accumulated Current Interrupt Flag - CLEAR */
#define ADC_CADACIF_SET_gc   (0x02) /* C-ADC Accumulated Current Interrupt Flag - SET */


/* C-ADC Instantaneous Current Interrupt Flag */
#define ADC_CADICIF_CLEAR_gc (0x00) /* C-ADC Instantaneous Current Interrupt Flag - CLEAR */
#define ADC_CADICIF_SET_gc   (0x01) /* C-ADC Instantaneous Current Interrupt Flag - SET */


/* V-ADC Accumulated Voltage Interrupt Enable */
#define ADC_VADACIE_CLEAR_gc (0x00) /* V-ADC Accumulated Voltage Interrupt Enable - CLEAR */
#define ADC_VADACIE_SET_gc   (0x20) /* V-ADC Accumulated Voltage Interrupt Enable - SET */


/* V-DAC Instantaneous Voltage Interrupt Enable */
#define ADC_VADICIE_CLEAR_gc (0x00) /* V-DAC Instantaneous Voltage Interrupt Enable - CLEAR */
#define ADC_VADICIE_SET_gc   (0x10) /* V-DAC Instantaneous Voltage Interrupt Enable - SET */


/* C-ADC Regulator Current Interrupt Enable */
#define ADC_CADRCIE_CLEAR_gc (0x00) /* C-ADC Regulator Current Interrupt Enable - CLEAR */
#define ADC_CADRCIE_SET_gc   (0x04) /* C-ADC Regulator Current Interrupt Enable - SET */


/* C-ADC Accumulated Current Interrupt Enable */
#define ADC_CADACIE_CLEAR_gc (0x00) /* C-ADC Accumulated Current Interrupt Enable - CLEAR */
#define ADC_CADACIE_SET_gc   (0x02) /* C-ADC Accumulated Current Interrupt Enable - SET */


/* C-ADC Instantaneous Current Interrupt Enable */
#define ADC_CADICIE_CLEAR_gc (0x00) /* C-ADC Instantaneous Current Interrupt Enable - CLEAR */
#define ADC_CADICIE_SET_gc   (0x01) /* C-ADC Instantaneous Current Interrupt Enable - SET */


/*
--------------------------------------------------------------------------------
BANDGAP - Bandgap
--------------------------------------------------------------------------------
*/


/* Band Gap Lock Enable */
#define BANDGAP_BGPLE_CLEAR_gc (0x00) /* Band Gap Lock Enable - CLEAR */
#define BANDGAP_BGPLE_SET_gc   (0x02) /* Band Gap Lock Enable - SET */


/* Band Gap Lock */
#define BANDGAP_BGPL_CLEAR_gc (0x00) /* Band Gap Lock - CLEAR */
#define BANDGAP_BGPL_SET_gc   (0x01) /* Band Gap Lock - SET */


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


/* Clock Output Enable */
#define CPU_CKOE_CLEAR_gc (0x00) /* Clock Output Enable - CLEAR */
#define CPU_CKOE_SET_gc   (0x20) /* Clock Output Enable - SET */


/* Pull-up disable */
#define CPU_PUD_CLEAR_gc (0x00) /* Pull-up disable - CLEAR */
#define CPU_PUD_SET_gc   (0x10) /* Pull-up disable - SET */


/* Interrupt Vector Select */
#define CPU_IVSEL_CLEAR_gc (0x00) /* Interrupt Vector Select - CLEAR */
#define CPU_IVSEL_SET_gc   (0x02) /* Interrupt Vector Select - SET */


/* Interrupt Vector Change Enable */
#define CPU_IVCE_CLEAR_gc (0x00) /* Interrupt Vector Change Enable - CLEAR */
#define CPU_IVCE_SET_gc   (0x01) /* Interrupt Vector Change Enable - SET */


/* OCD Reset Flag */
#define CPU_OCDRF_CLEAR_gc (0x00) /* OCD Reset Flag - CLEAR */
#define CPU_OCDRF_SET_gc   (0x10) /* OCD Reset Flag - SET */


/* Watchdog Reset Flag */
#define CPU_WDRF_CLEAR_gc (0x00) /* Watchdog Reset Flag - CLEAR */
#define CPU_WDRF_SET_gc   (0x08) /* Watchdog Reset Flag - SET */


/* Brown-out Reset Flag */
#define CPU_BODRF_CLEAR_gc (0x00) /* Brown-out Reset Flag - CLEAR */
#define CPU_BODRF_SET_gc   (0x04) /* Brown-out Reset Flag - SET */


/* External Reset Flag */
#define CPU_EXTRF_CLEAR_gc (0x00) /* External Reset Flag - CLEAR */
#define CPU_EXTRF_SET_gc   (0x02) /* External Reset Flag - SET */


/* Power-on reset flag */
#define CPU_PORF_CLEAR_gc (0x00) /* Power-on reset flag - CLEAR */
#define CPU_PORF_SET_gc   (0x01) /* Power-on reset flag - SET */


/* PLL Software Enable */
#define CPU_SWEN_CLEAR_gc (0x00) /* PLL Software Enable - CLEAR */
#define CPU_SWEN_SET_gc   (0x20) /* PLL Software Enable - SET */


/* PLL Lock */
#define CPU_LOCK_CLEAR_gc (0x00) /* PLL Lock - CLEAR */
#define CPU_LOCK_SET_gc   (0x10) /* PLL Lock - SET */


/* PLL Lock Change Interrupt Flag */
#define CPU_PLLCIF_CLEAR_gc (0x00) /* PLL Lock Change Interrupt Flag - CLEAR */
#define CPU_PLLCIF_SET_gc   (0x02) /* PLL Lock Change Interrupt Flag - SET */


/* PLL Lock Change Interrupt Enable */
#define CPU_PLLCIE_CLEAR_gc (0x00) /* PLL Lock Change Interrupt Enable - CLEAR */
#define CPU_PLLCIE_SET_gc   (0x01) /* PLL Lock Change Interrupt Enable - SET */


/* Sleep Mode Select bits */
#define CPU_SM_IDLE_gc     (0x00<<1) /* Idle */
#define CPU_SM_ADC_gc      (0x01<<1) /* ADC */
#define CPU_SM_PDOWN_gc    (0x02<<1) /* Power Down */
#define CPU_SM_PSAVE_gc    (0x03<<1) /* Power Save */
#define CPU_SM_VAL_0x04_gc (0x04<<1) /* Reserved */
#define CPU_SM_VAL_0x05_gc (0x05<<1) /* Reserved */
#define CPU_SM_STDBY_gc    (0x06<<1) /* Standby */
#define CPU_SM_ESTDBY_gc   (0x07<<1) /* Extended Standby */


/* Sleep Enable */
#define CPU_SE_CLEAR_gc (0x00) /* Sleep Enable - CLEAR */
#define CPU_SE_SET_gc   (0x01) /* Sleep Enable - SET */


/* When this bit is written logic one, the digital input buffer of the corresponding V_ADC pin is disabled. */
#define CPU_PA1DID_CLEAR_gc (0x00) /* When this bit is written logic one, the digital input buffer of the corresponding V_ADC pin is disabled. - CLEAR */
#define CPU_PA1DID_SET_gc   (0x02) /* When this bit is written logic one, the digital input buffer of the corresponding V_ADC pin is disabled. - SET */


/* When this bit is written logic one, the digital input buffer of the corresponding V_ADC pin is disabled. */
#define CPU_PA0DID_CLEAR_gc (0x00) /* When this bit is written logic one, the digital input buffer of the corresponding V_ADC pin is disabled. - CLEAR */
#define CPU_PA0DID_SET_gc   (0x01) /* When this bit is written logic one, the digital input buffer of the corresponding V_ADC pin is disabled. - SET */


/* Power Reduction LIN UART Interface */
#define CPU_PRLIN_CLEAR_gc (0x00) /* Power Reduction LIN UART Interface - CLEAR */
#define CPU_PRLIN_SET_gc   (0x08) /* Power Reduction LIN UART Interface - SET */


/* Power reduction SPI */
#define CPU_PRSPI_CLEAR_gc (0x00) /* Power reduction SPI - CLEAR */
#define CPU_PRSPI_SET_gc   (0x04) /* Power reduction SPI - SET */


/* Power Reduction Timer/Counter1 */
#define CPU_PRTIM1_CLEAR_gc (0x00) /* Power Reduction Timer/Counter1 - CLEAR */
#define CPU_PRTIM1_SET_gc   (0x02) /* Power Reduction Timer/Counter1 - SET */


/* Power Reduction Timer/Counter0 */
#define CPU_PRTIM0_CLEAR_gc (0x00) /* Power Reduction Timer/Counter0 - CLEAR */
#define CPU_PRTIM0_SET_gc   (0x01) /* Power Reduction Timer/Counter0 - SET */


/* Clock Prescaler Change Enable */
#define CPU_CLKPCE_CLEAR_gc (0x00) /* Clock Prescaler Change Enable - CLEAR */
#define CPU_CLKPCE_SET_gc   (0x80) /* Clock Prescaler Change Enable - SET */


/* Clock Prescaler Select Bits */
#define CPU_CLKPR_CLKPS_gc(x) (x & 0x03)

/*
--------------------------------------------------------------------------------
EXINT - External Interrupts
--------------------------------------------------------------------------------
*/


/* External Interrupt Sense Control 0 Bit 1 */
#define EXINT_ISC01_CLEAR_gc (0x00) /* External Interrupt Sense Control 0 Bit 1 - CLEAR */
#define EXINT_ISC01_SET_gc   (0x02) /* External Interrupt Sense Control 0 Bit 1 - SET */


/* External Interrupt Sense Control 0 Bit 0 */
#define EXINT_ISC00_VAL_0x00_gc (0x00) /* Low Level of INTX */
#define EXINT_ISC00_VAL_0x01_gc (0x01) /* Any Logical Change of INTX */
#define EXINT_ISC00_VAL_0x02_gc (0x02) /* Falling Edge of INTX */
#define EXINT_ISC00_VAL_0x03_gc (0x03) /* Rising Edge of INTX */


/* External Interrupt Request 0 Enable */
#define EXINT_INT0_CLEAR_gc (0x00) /* External Interrupt Request 0 Enable - CLEAR */
#define EXINT_INT0_SET_gc   (0x01) /* External Interrupt Request 0 Enable - SET */


/* External Interrupt Flag 0 */
#define EXINT_INTF0_CLEAR_gc (0x00) /* External Interrupt Flag 0 - CLEAR */
#define EXINT_INTF0_SET_gc   (0x01) /* External Interrupt Flag 0 - SET */


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


/* Watchdog Timer Comfiguration Lock bits */
#define WDT_WDTCLR_WDCL_gc(x) ((x<<1) & 0x06)

/* Watchdog Timer Comfiguration Lock Enable */
#define WDT_WDCLE_CLEAR_gc (0x00) /* Watchdog Timer Comfiguration Lock Enable - CLEAR */
#define WDT_WDCLE_SET_gc   (0x01) /* Watchdog Timer Comfiguration Lock Enable - SET */


/*
--------------------------------------------------------------------------------
WAKEUP_TIMER - Wakeup Timer
--------------------------------------------------------------------------------
*/


/* Wake-up Timer Interrupt Flag */
#define WAKEUP_TIMER_WUTIF_CLEAR_gc (0x00) /* Wake-up Timer Interrupt Flag - CLEAR */
#define WAKEUP_TIMER_WUTIF_SET_gc   (0x80) /* Wake-up Timer Interrupt Flag - SET */


/* Wake-up Timer Interrupt Enable */
#define WAKEUP_TIMER_WUTIE_CLEAR_gc (0x00) /* Wake-up Timer Interrupt Enable - CLEAR */
#define WAKEUP_TIMER_WUTIE_SET_gc   (0x40) /* Wake-up Timer Interrupt Enable - SET */


/* Wake-up Timer Reset */
#define WAKEUP_TIMER_WUTR_CLEAR_gc (0x00) /* Wake-up Timer Reset - CLEAR */
#define WAKEUP_TIMER_WUTR_SET_gc   (0x10) /* Wake-up Timer Reset - SET */


/* Wake-up Timer Enable */
#define WAKEUP_TIMER_WUTE_CLEAR_gc (0x00) /* Wake-up Timer Enable - CLEAR */
#define WAKEUP_TIMER_WUTE_SET_gc   (0x08) /* Wake-up Timer Enable - SET */


/* Wake-up Timer Prescaler Bits */
#define WAKEUP_TIMER_WUTCSR_WUTP_gc(x) (x & 0x07)
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


/* SPI - Serial Peripheral Interface (0x0000) */
#define SPI_BASE            _SFR_MEM8 (0x0000) /* SPI Base Address */
#define SPI_SPCR            _SFR_MEM8 (0x004C) /* SPI Control Register */
#define SPI_SPSR            _SFR_MEM8 (0x004D) /* SPI Status Register */
#define SPI_SPDR            _SFR_MEM8 (0x004E) /* SPI Data Register */

/* EEPROM - EEPROM (0x0000) */
#define EEPROM_BASE         _SFR_MEM8 (0x0000) /* EEPROM Base Address */
#define EEPROM_EECR         _SFR_MEM8 (0x003F) /* EEPROM Control Register */
#define EEPROM_EEDR         _SFR_MEM8 (0x0040) /* EEPROM Data Register */
#define EEPROM_EEAR         _SFR_MEM16(0x0041) /* EEPROM Read/Write Access */
#define EEPROM_EEARL        _SFR_MEM8 (0x0041) /* EEPROM Read/Write Access LOW BYTE */
#define EEPROM_EEARH        _SFR_MEM8 (0x0042) /* EEPROM Read/Write Access HIGH BYTE */

/* TC1 - Timer/Counter, 16-bit (0x0000) */
#define TC16_BASE           _SFR_MEM8 (0x0000) /* TC16 Base Address */
#define TC16_TIFR1          _SFR_MEM8 (0x0036) /* Timer/Counter Interrupt Flag register */
#define TC16_GTCCR          _SFR_MEM8 (0x0043) /* General Timer/Counter Control Register */
#define TC16_TIMSK1         _SFR_MEM8 (0x006F) /* Timer/Counter Interrupt Mask Register */
#define TC16_TCCR1A         _SFR_MEM8 (0x0080) /* Timer/Counter 1 Control Register A */
#define TC16_TCCR1B         _SFR_MEM8 (0x0081) /* Timer/Counter1 Control Register B */
#define TC16_TCNT1          _SFR_MEM16(0x0084) /* Timer Counter 1  Bytes */
#define TC16_TCNT1L         _SFR_MEM8 (0x0084) /* Timer Counter 1  Bytes LOW BYTE */
#define TC16_TCNT1H         _SFR_MEM8 (0x0085) /* Timer Counter 1  Bytes HIGH BYTE */
#define TC16_OCR1A          _SFR_MEM8 (0x0088) /* Output Compare Register 1A */
#define TC16_OCR1B          _SFR_MEM8 (0x0089) /* Output Compare Register B */

/* TC0 - Timer/Counter, 16-bit (0x0000) */
/* TC16_BASE ALREADY DEFINED */
#define TC16_TIFR0          _SFR_MEM8 (0x0035) /* Timer/Counter Interrupt Flag register */
/* TC16_GTCCR ALREADY DEFINED */
#define TC16_TCCR0A         _SFR_MEM8 (0x0044) /* Timer/Counter 0 Control Register A */
#define TC16_TCCR0B         _SFR_MEM8 (0x0045) /* Timer/Counter0 Control Register B */
#define TC16_TCNT0          _SFR_MEM16(0x0046) /* Timer Counter 0  Bytes */
#define TC16_TCNT0L         _SFR_MEM8 (0x0046) /* Timer Counter 0  Bytes LOW BYTE */
#define TC16_TCNT0H         _SFR_MEM8 (0x0047) /* Timer Counter 0  Bytes HIGH BYTE */
#define TC16_OCR0A          _SFR_MEM8 (0x0048) /* Output Compare Register 0A */
#define TC16_OCR0B          _SFR_MEM8 (0x0049) /* Output Compare Register B */
#define TC16_TIMSK0         _SFR_MEM8 (0x006E) /* Timer/Counter Interrupt Mask Register */

/* PORTB - I/O Port (0x0000) */
#define PORTBB_BASE         _SFR_MEM8 (0x0000) /* PORTBB Base Address */
#define PORTBB_PINB         _SFR_MEM8 (0x0023) /* Port B Input Pins */
#define PORTBB_DDRB         _SFR_MEM8 (0x0024) /* Port B Data Direction Register */
#define PORTBB_PORTB        _SFR_MEM8 (0x0025) /* Port B Data Register */
#define PORTBB_PBOV         _SFR_MEM8 (0x00DC) /* Port B Override */

/* PORTA - I/O Port (0x0000) */
#define PORTAA_BASE         _SFR_MEM8 (0x0000) /* PORTAA Base Address */
#define PORTAA_PINA         _SFR_MEM8 (0x0020) /* Port A Input Pins */
#define PORTAA_DDRA         _SFR_MEM8 (0x0021) /* Port A Data Direction Register */
#define PORTAA_PORTA        _SFR_MEM8 (0x0022) /* Port A Data Register */

/* BOOT_LOAD - Bootloader (0x0000) */
#define BOOT_LOAD_BASE      _SFR_MEM8 (0x0000) /* BOOT_LOAD Base Address */
#define BOOT_LOAD_SPMCSR    _SFR_MEM8 (0x0057) /* Store Program Memory Control and Status Register */

/* ADC - Analog-to-Digital Converter (0x0000) */
#define ADC_BASE            _SFR_MEM8 (0x0000) /* ADC Base Address */
#define ADC_ADSCSRA         _SFR_MEM8 (0x00E0) /* ADC Synchronization Control and Status Register */
#define ADC_ADSCSRB         _SFR_MEM8 (0x00E1) /* ADC Synchronization Control and Status Register */
#define ADC_ADCRA           _SFR_MEM8 (0x00E2) /* ADC Control Register A */
#define ADC_ADCRB           _SFR_MEM8 (0x00E3) /* ADC Control Register B */
#define ADC_ADCRC           _SFR_MEM8 (0x00E4) /* ADC Control Register B */
#define ADC_ADCRD           _SFR_MEM8 (0x00E5) /* ADC Control Register D */
#define ADC_ADCRE           _SFR_MEM8 (0x00E6) /* ADC Control Register E */
#define ADC_ADIFR           _SFR_MEM8 (0x00E7) /* ADC Interrupt Flag Register */
#define ADC_ADIMR           _SFR_MEM8 (0x00E8) /* ADC Interrupt Mask Register */
#define ADC_CADRCL          _SFR_MEM16(0x00E9) /* CC-ADC Regulator Current Comparator Threshold Level */
#define ADC_CADRCLL         _SFR_MEM8 (0x00E9) /* CC-ADC Regulator Current Comparator Threshold Level LOW BYTE */
#define ADC_CADRCLH         _SFR_MEM8 (0x00EA) /* CC-ADC Regulator Current Comparator Threshold Level HIGH BYTE */
#define ADC_CADIC           _SFR_MEM16(0x00EB) /* C-ADC Instantaneous Conversion Result */
#define ADC_CADICL          _SFR_MEM8 (0x00EB) /* C-ADC Instantaneous Conversion Result LOW BYTE */
#define ADC_CADICH          _SFR_MEM8 (0x00EC) /* C-ADC Instantaneous Conversion Result HIGH BYTE */
#define ADC_CADAC0          _SFR_MEM8 (0x00ED) /* C-ADC Accumulated Conversion Result */
#define ADC_CADAC1          _SFR_MEM8 (0x00EE) /* C-ADC Accumulated Conversion Result */
#define ADC_CADAC2          _SFR_MEM8 (0x00EF) /* C-ADC Accumulated Conversion Result */
#define ADC_CADAC3          _SFR_MEM8 (0x00F0) /* C-ADC Accumulated Conversion Result */
#define ADC_VADIC           _SFR_MEM16(0x00F1) /* V-ADC Instantaneous Conversion Result */
#define ADC_VADICL          _SFR_MEM8 (0x00F1) /* V-ADC Instantaneous Conversion Result LOW BYTE */
#define ADC_VADICH          _SFR_MEM8 (0x00F2) /* V-ADC Instantaneous Conversion Result HIGH BYTE */
#define ADC_VADAC0          _SFR_MEM8 (0x00F3) /* V-ADC Accumulated Conversion Result */
#define ADC_VADAC1          _SFR_MEM8 (0x00F4) /* V-ADC Accumulated Conversion Result */
#define ADC_VADAC2          _SFR_MEM8 (0x00F5) /* V-ADC Accumulated Conversion Result */
#define ADC_VADAC3          _SFR_MEM8 (0x00F6) /* V-ADC Accumulated Conversion Result */

/* BANDGAP - Bandgap (0x0000) */
#define BANDGAP_BASE        _SFR_MEM8 (0x0000) /* BANDGAP Base Address */
#define BANDGAP_BGCSRA      _SFR_MEM8 (0x00D1) /* Bandgap Control and Status Register A */
#define BANDGAP_BGCRB       _SFR_MEM8 (0x00D2) /* Band Gap Calibration Register B */
#define BANDGAP_BGCRA       _SFR_MEM8 (0x00D3) /* Band Gap Calibration Register A */
#define BANDGAP_BGLR        _SFR_MEM8 (0x00D4) /* Band Gap Lock Register */

/* LINUART - Local Interconnect Network (0x0000) */
#define LINUART_BASE        _SFR_MEM8 (0x0000) /* LINUART Base Address */
#define LINUART_LINCR       _SFR_MEM8 (0x00C0) /* LIN Control Register */
#define LINUART_LINSIR      _SFR_MEM8 (0x00C1) /* LIN Status and Interrupt Register */
#define LINUART_LINENIR     _SFR_MEM8 (0x00C2) /* LIN Enable Interrupt Register */
#define LINUART_LINERR      _SFR_MEM8 (0x00C3) /* LIN Error Register */
#define LINUART_LINBTR      _SFR_MEM8 (0x00C4) /* LIN Bit Timing Register */
#define LINUART_LINBRRL     _SFR_MEM8 (0x00C5) /* LIN Baud Rate Low Register */
#define LINUART_LINBRRH     _SFR_MEM8 (0x00C6) /* LIN Baud Rate High Register */
#define LINUART_LINDLR      _SFR_MEM8 (0x00C7) /* LIN Data Length Register */
#define LINUART_LINIDR      _SFR_MEM8 (0x00C8) /* LIN Identifier Register */
#define LINUART_LINSEL      _SFR_MEM8 (0x00C9) /* LIN Data Buffer Selection Register */
#define LINUART_LINDAT      _SFR_MEM8 (0x00CA) /* LIN Data Register */

/* CPU - CPU Registers (0x0000) */
#define CPU_BASE            _SFR_MEM8 (0x0000) /* CPU Base Address */
#define CPU_GPIOR0          _SFR_MEM8 (0x003E) /* General Purpose IO Register 0 */
#define CPU_GPIOR1          _SFR_MEM8 (0x004A) /* General Purpose IO Register 1 */
#define CPU_GPIOR2          _SFR_MEM8 (0x004B) /* General Purpose IO Register 2 */
#define CPU_SMCR            _SFR_MEM8 (0x0053) /* Sleep Mode Control Register */
#define CPU_MCUSR           _SFR_MEM8 (0x0054) /* MCU Status Register */
#define CPU_MCUCR           _SFR_MEM8 (0x0055) /* MCU Control Register */
#define CPU_SP              _SFR_MEM16(0x005D) /* Stack Pointer  */
#define CPU_SPL             _SFR_MEM8 (0x005D) /* Stack Pointer  LOW BYTE */
#define CPU_SPH             _SFR_MEM8 (0x005E) /* Stack Pointer  HIGH BYTE */
#define CPU_SREG            _SFR_MEM8 (0x005F) /* Status Register */
#define CPU_CLKPR           _SFR_MEM8 (0x0061) /* Clock Prescale Register */
#define CPU_PRR0            _SFR_MEM8 (0x0064) /* Power Reduction Register 0 */
#define CPU_SOSCCALA        _SFR_MEM8 (0x0066) /* Slow Oscillator Calibration Register A */
#define CPU_SOSCCALB        _SFR_MEM8 (0x0067) /* Oscillator Calibration Register B */
#define CPU_DIDR0           _SFR_MEM8 (0x007E) /* Digital Input Disable Register */
#define CPU_PLLCSR          _SFR_MEM8 (0x00D8) /* PLL Control and Status Register */

/* EXINT - External Interrupts (0x0000) */
#define EXINT_BASE          _SFR_MEM8 (0x0000) /* EXINT Base Address */
#define EXINT_PCIFR         _SFR_MEM8 (0x003B) /* Pin Change Interrupt Flag Register */
#define EXINT_EIFR          _SFR_MEM8 (0x003C) /* External Interrupt Flag Register */
#define EXINT_EIMSK         _SFR_MEM8 (0x003D) /* External Interrupt Mask Register */
#define EXINT_PCICR         _SFR_MEM8 (0x0068) /* Pin Change Interrupt Control Register */
#define EXINT_EICRA         _SFR_MEM8 (0x0069) /* External Interrupt Control Register */
#define EXINT_PCMSK0        _SFR_MEM8 (0x006B) /* Pin Change Enable Mask Register 0 */
#define EXINT_PCMSK1        _SFR_MEM8 (0x006C) /* Pin Change Enable Mask Register 1 */

/* WDT - Watchdog Timer (0x0000) */
#define WDT_BASE            _SFR_MEM8 (0x0000) /* WDT Base Address */
#define WDT_WDTCSR          _SFR_MEM8 (0x0060) /* Watchdog Timer Control Register */
#define WDT_WDTCLR          _SFR_MEM8 (0x0063) /* Watchdog Timer Configuration Lock Register */

/* WAKEUP_TIMER - Wakeup Timer (0x0000) */
#define WAKEUP_TIMER_BASE   _SFR_MEM8 (0x0000) /* WAKEUP_TIMER Base Address */
#define WAKEUP_TIMER_WUTCSR _SFR_MEM8 (0x0062) /* Wake-up Timer Control and Status Register */

/* FUSE - Fuses (0x0000) */
#define FUSE_BASE           _SFR_MEM8 (0x0000) /* FUSE Base Address */
#define FUSE_LOW            _SFR_MEM8 (0x0000) 
#define FUSE_HIGH           _SFR_MEM8 (0x0001) 

/* LOCKBIT - Lockbits (0x0000) */
#define LOCKBIT_BASE        _SFR_MEM8 (0x0000) /* LOCKBIT Base Address */
#define LOCKBIT_LOCKBIT     _SFR_MEM8 (0x0000) 
/* avr-libc typedef for avr/fuse.h */
typedef FUSE_t NVM_FUSES_t;

/*
================================================================================
Interrupt Vector Definitions
================================================================================
*/

/* Vector 0 is the reset vector */
#define None_RESET_vect_num        (0)                 
#define None_RESET_vect            _VECTOR(0)          /* External Pin, Power-on Reset, Brown-out Reset and Watchdog Reset */
#define None_INT0_vect_num         (1)                 
#define None_INT0_vect             _VECTOR(1)          /* External Interrupt 0 */
#define None_PCINT0_vect_num       (2)                 
#define None_PCINT0_vect           _VECTOR(2)          /* Pin Change Interrupt 0 */
#define None_PCINT1_vect_num       (3)                 
#define None_PCINT1_vect           _VECTOR(3)          /* Pin Change Interrupt 1 */
#define None_WDT_vect_num          (4)                 
#define None_WDT_vect              _VECTOR(4)          /* Watchdog Timeout Interrupt */
#define None_WAKEUP_vect_num       (5)                 
#define None_WAKEUP_vect           _VECTOR(5)          /* Wakeup Timer Overflow */
#define None_TIMER1_IC_vect_num    (6)                 
#define None_TIMER1_IC_vect        _VECTOR(6)          /* Timer 1 Input capture */
#define None_TIMER1_COMPA_vect_num (7)                 
#define None_TIMER1_COMPA_vect     _VECTOR(7)          /* Timer 1 Compare Match A */
#define None_TIMER1_COMPB_vect_num (8)                 
#define None_TIMER1_COMPB_vect     _VECTOR(8)          /* Timer 1 Compare Match B */
#define None_TIMER1_OVF_vect_num   (9)                 
#define None_TIMER1_OVF_vect       _VECTOR(9)          /* Timer 1 overflow */
#define None_TIMER0_IC_vect_num    (10)                
#define None_TIMER0_IC_vect        _VECTOR(10)         /* Timer 0 Input Capture */
#define None_TIMER0_COMPA_vect_num (11)                
#define None_TIMER0_COMPA_vect     _VECTOR(11)         /* Timer 0 Comapre Match A */
#define None_TIMER0_COMPB_vect_num (12)                
#define None_TIMER0_COMPB_vect     _VECTOR(12)         /* Timer 0 Compare Match B */
#define None_TIMER0_OVF_vect_num   (13)                
#define None_TIMER0_OVF_vect       _VECTOR(13)         /* Timer 0 Overflow */
#define None_LIN_STATUS_vect_num   (14)                
#define None_LIN_STATUS_vect       _VECTOR(14)         /* LIN Status Interrupt */
#define None_LIN_ERROR_vect_num    (15)                
#define None_LIN_ERROR_vect        _VECTOR(15)         /* LIN Error Interrupt */
#define None_SPI_STC_vect_num      (16)                
#define None_SPI_STC_vect          _VECTOR(16)         /* SPI Serial transfer complete */
#define None_VADC_CONV_vect_num    (17)                
#define None_VADC_CONV_vect        _VECTOR(17)         /* Voltage ADC Instantaneous Conversion Complete */
#define None_VADC_ACC_vect_num     (18)                
#define None_VADC_ACC_vect         _VECTOR(18)         /* Voltage ADC Accumulated Conversion Complete */
#define None_CADC_CONV_vect_num    (19)                
#define None_CADC_CONV_vect        _VECTOR(19)         /* C-ADC Instantaneous Conversion Complete */
#define None_CADC_REG_CUR_vect_num (20)                
#define None_CADC_REG_CUR_vect     _VECTOR(20)         /* C-ADC Regular Current */
#define None_CADC_ACC_vect_num     (21)                
#define None_CADC_ACC_vect         _VECTOR(21)         /* C-ADC Accumulated Conversion Complete */
#define None_EE_READY_vect_num     (22)                
#define None_EE_READY_vect         _VECTOR(22)         /* EEPROM Ready */
#define None_SPM_vect_num          (23)                
#define None_SPM_vect              _VECTOR(23)         /* SPM Ready */
#define None_PLL_vect_num          (24)                
#define None_PLL_vect              _VECTOR(24)         /* PLL Lock Change Interrupt */

/* Vector Table Size */
#define _VECTOR_SIZE               (4)                 /* Size of individual vector. */
#define _VECTORS_SIZE              (25 * _VECTOR_SIZE) /* Size of all vectors */
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
#define FLASH_PAGE_SIZE          (0x0080)                                         
#define FLASH_END                (FLASH_START + FLASH_SIZE - 1)                   

#define BOOT_SECTION_1_START     (0xFC00)                                         
#define BOOT_SECTION_1_SIZE      (0x0400)                                         
#define BOOT_SECTION_1_PAGE_SIZE (0x0080)                                         
#define BOOT_SECTION_1_END       (BOOT_SECTION_1_START + BOOT_SECTION_1_SIZE - 1) 

#define BOOT_SECTION_2_START     (0xF800)                                         
#define BOOT_SECTION_2_SIZE      (0x0800)                                         
#define BOOT_SECTION_2_PAGE_SIZE (0x0080)                                         
#define BOOT_SECTION_2_END       (BOOT_SECTION_2_START + BOOT_SECTION_2_SIZE - 1) 

#define BOOT_SECTION_3_START     (0xF000)                                         
#define BOOT_SECTION_3_SIZE      (0x1000)                                         
#define BOOT_SECTION_3_PAGE_SIZE (0x0080)                                         
#define BOOT_SECTION_3_END       (BOOT_SECTION_3_START + BOOT_SECTION_3_SIZE - 1) 

#define BOOT_SECTION_4_START     (0xE000)                                         
#define BOOT_SECTION_4_SIZE      (0x2000)                                         
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
#define FUSESMEM_SIZE   (0x0002)                             
#define FUSESMEM_END    (FUSESMEM_START + FUSESMEM_SIZE - 1) 

#define FUSES_START     (0x0000)                             
#define FUSES_SIZE      (0x0002)                             
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
#define DATAMEM_SIZE        (0x1100)                               
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

#define EEPROMMEM_START         (0x0000)                               
#define EEPROMMEM_SIZE          (0x0400)                               
#define EEPROMMEM_END           (EEPROMMEM_START + EEPROMMEM_SIZE - 1) 

#define EEPROM_START            (0x0000)                               
#define EEPROM_SIZE             (0x0400)                               
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

/* ============ Port Bits ============ */

#define PORTB0 (0) 
#define PORTB1 (1) 
#define PORTB2 (2) 
#define PORTB3 (3) 
#define PORTB4 (4) 
#define PORTB5 (5) 
#define PORTB6 (6) 
#define PORTB7 (7) 
#define PORTA0 (0) 
#define PORTA1 (1) 

/*
================================================================================
Fuses/LockBits/Signatures
================================================================================
*/

/* ============ Fuses ============ */

#define FUSE_MEMORY_SIZE 1 

/* Fuse offset 0x00 */
#define OSCSEL0 (unsigned char)~_BV(0) /* Oscillator select */
#define SUT0    (unsigned char)~_BV(1) /* Select start-up time bit 0 */
#define SUT1    (unsigned char)~_BV(2) /* Select start-up time bit 1 */
#define CKDIV8  (unsigned char)~_BV(3) /* Divide clock by 8 */
#define BODEN   (unsigned char)~_BV(4) /* Brown-out detection enabled */
#define SPIEN   (unsigned char)~_BV(5) /* Serial program downloading (SPI) enabled */
#define EESAVE  (unsigned char)~_BV(6) /* Preserve EEPROM through the Chip Erase cycle */
#define WDTON   (unsigned char)~_BV(7) /* Watch-dog Timer always on */

/* Fuse offset 0x01 */
#define BOOTRST (unsigned char)~_BV(0) /* Boot Reset vector Enabled */
#define BOOTSZ0 (unsigned char)~_BV(1) /* Select Boot Size bit 0 */
#define BOOTSZ1 (unsigned char)~_BV(2) /* Select Boot Size bit 1 */
#define DWEN    (unsigned char)~_BV(3) /* Debug Wire enable */


/* ========== Lock Bits ========== */
#define __LOCK_BITS_EXIST  


/* ========== Signature ========== */
#define SIGNATURE_0 (0x1E) 
#define SIGNATURE_1 (0x96) 
#define SIGNATURE_2 (0x10) 

#endif /* #ifdef _AVR_ATmega64HVE2_H_INCLUDED */
