/******************************************************************************
 *   This file is part of avr-libc3.                                          * 
 *                                                                            * 
 *   Automatically created by devtools/gen-ioheader-atdf.py (V0.91)           * 
 *                                                                            * 
 *   .atpack File: ATmega406.atdf                                             * 
 *   .ATDF File:   atdf/ATmega406.atdf                                        * 
 *   Version:      2.0.12                                                     * 
 *   Date:         2019-04-26                                                 * 
 *   Device:       ATmega406                                                  * 
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
#  define _AVR_IOXXX_H_ "ioATmega406.h"
#else
#  error "Attempt to include more than one <avr/ioXXX.h> file."
#endif

#ifndef _AVR_ATmega406_H_INCLUDED
#  define _AVR_ATmega406_H_INCLUDED

/*
================================================================================
Ungrouped common register
================================================================================
*/

#define GPIOR0  _SFR_MEM8 (0x3E) /* General Purpose IO Register 0 */

#define GPIOR1  _SFR_MEM8 (0x4A) /* General Purpose IO Register 1 */
#define GPIOR2  _SFR_MEM8 (0x4B) /* General Purpose IO Register 2 */

#define SMCR    _SFR_MEM8 (0x53) /* Sleep Mode Control Register */
#define MCUSR   _SFR_MEM8 (0x54) /* MCU Status Register */
#define MCUCR   _SFR_MEM8 (0x55) /* MCU Control Register */

#define SP      _SFR_MEM16(0x5D) /* Stack Pointer  */
#define SREG    _SFR_MEM8 (0x5F) /* Status Register */

#define PRR0    _SFR_MEM8 (0x64) /* Power Reduction Register 0 */

#define FOSCCAL _SFR_MEM8 (0x66) /* Fast Oscillator Calibration Value */

#define DIDR0   _SFR_MEM8 (0x7E) /* Digital Input Disable Register */

#define CCSR    _SFR_MEM8 (0xC0) /* Clock Control and Status Register */


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


/* On-Chip Debug Enabled */
typedef enum FUSE_OCDEN_enum
{
    FUSE_OCDEN_CLEAR_gc = (0x00), /* On-Chip Debug Enabled - CLEAR */
    FUSE_OCDEN_SET_gc   = (0x02), /* On-Chip Debug Enabled - SET */
} FUSE_OCDEN_t;

/* JTAG Interface Enabled */
typedef enum FUSE_JTAGEN_enum
{
    FUSE_JTAGEN_CLEAR_gc = (0x00), /* JTAG Interface Enabled - CLEAR */
    FUSE_JTAGEN_SET_gc   = (0x01), /* JTAG Interface Enabled - SET */
} FUSE_JTAGEN_t;

/* Watchdog timer always on */
typedef enum FUSE_WDTON_enum
{
    FUSE_WDTON_CLEAR_gc = (0x00), /* Watchdog timer always on - CLEAR */
    FUSE_WDTON_SET_gc   = (0x80), /* Watchdog timer always on - SET */
} FUSE_WDTON_t;

/* Preserve EEPROM through the Chip Erase cycle */
typedef enum FUSE_EESAVE_enum
{
    FUSE_EESAVE_CLEAR_gc = (0x00), /* Preserve EEPROM through the Chip Erase cycle - CLEAR */
    FUSE_EESAVE_SET_gc   = (0x40), /* Preserve EEPROM through the Chip Erase cycle - SET */
} FUSE_EESAVE_t;

/* Select boot size */
typedef enum FUSE_BOOTSZ_enum
{
    FUSE_BOOTSZ_256W_4F00_gc  = (0x03<<4), /* Boot Flash size=256 words Boot address=$4F00 */
    FUSE_BOOTSZ_512W_4E00_gc  = (0x02<<4), /* Boot Flash size=512 words Boot address=$4E00 */
    FUSE_BOOTSZ_1024W_4C00_gc = (0x01<<4), /* Boot Flash size=1024 words Boot address=$4C00 */
    FUSE_BOOTSZ_2048W_4800_gc = (0x00<<4), /* Boot Flash size=2048 words Boot address=$4800 */
} FUSE_BOOTSZ_t;

/* Boot Reset vector Enabled */
typedef enum FUSE_BOOTRST_enum
{
    FUSE_BOOTRST_CLEAR_gc = (0x00), /* Boot Reset vector Enabled - CLEAR */
    FUSE_BOOTRST_SET_gc   = (0x08), /* Boot Reset vector Enabled - SET */
} FUSE_BOOTRST_t;

/* Clock Selection */
typedef enum FUSE_SUT_CKSEL_enum
{
    FUSE_SUT_CKSEL_14CK_0MS_gc   = (0x00), /* Start-up time: 14 CK + 0 ms */
    FUSE_SUT_CKSEL_14CK_3MS9_gc  = (0x02), /* Start-up time: 14 CK + 3.9 ms */
    FUSE_SUT_CKSEL_14CK_62MS5_gc = (0x04), /* Start-up time: 14 CK + 62.5 ms */
    FUSE_SUT_CKSEL_14CK_0MS_gc   = (0x01), /* Start-up time: 14 CK + 0 ms */
    FUSE_SUT_CKSEL_14CK_3MS9_gc  = (0x03), /* Start-up time: 14 CK + 3.9 ms */
    FUSE_SUT_CKSEL_14CK_62MS5_gc = (0x05), /* Start-up time: 14 CK + 62.5 ms */
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
ADC - Analog-to-Digital Converter
--------------------------------------------------------------------------------
*/

typedef struct ADC_struct
{
    register8_t rsv_0x00[120]; /* RESERVED REGISTER BLOCK */
    _REGISTER16 (VADC);        /* VADC Data Register  Bytes */
    register8_t rsv_0x79;      /* RESERVED REGISTER */
    register8_t VADCSR;        /* The VADC Control and Status register */
    register8_t rsv_0x7B;      /* RESERVED REGISTER */
    register8_t VADMUX;        /* The VADC multiplexer Selection Register */
} ADC_t;


/* VADC Enable */
typedef enum ADC_VADEN_enum
{
    ADC_VADEN_CLEAR_gc = (0x00), /* VADC Enable - CLEAR */
    ADC_VADEN_SET_gc   = (0x08), /* VADC Enable - SET */
} ADC_VADEN_t;

/* VADC Satrt Conversion */
typedef enum ADC_VADSC_enum
{
    ADC_VADSC_CLEAR_gc = (0x00), /* VADC Satrt Conversion - CLEAR */
    ADC_VADSC_SET_gc   = (0x04), /* VADC Satrt Conversion - SET */
} ADC_VADSC_t;

/* VADC Conversion Complete Interrupt Flag */
typedef enum ADC_VADCCIF_enum
{
    ADC_VADCCIF_CLEAR_gc = (0x00), /* VADC Conversion Complete Interrupt Flag - CLEAR */
    ADC_VADCCIF_SET_gc   = (0x02), /* VADC Conversion Complete Interrupt Flag - SET */
} ADC_VADCCIF_t;

/* VADC Conversion Complete Interrupt Enable */
typedef enum ADC_VADCCIE_enum
{
    ADC_VADCCIE_CLEAR_gc = (0x00), /* VADC Conversion Complete Interrupt Enable - CLEAR */
    ADC_VADCCIE_SET_gc   = (0x01), /* VADC Conversion Complete Interrupt Enable - SET */
} ADC_VADCCIE_t;

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


/* External Interrupt Sense Control 3 Bits */
typedef enum EXINT_ISC3_enum
{
    EXINT_ISC3_VAL_0x00_gc = (0x00<<6), /* Low Level of INTX */
    EXINT_ISC3_VAL_0x01_gc = (0x01<<6), /* Any Logical Change of INTX */
    EXINT_ISC3_VAL_0x02_gc = (0x02<<6), /* Falling Edge of INTX */
    EXINT_ISC3_VAL_0x03_gc = (0x03<<6), /* Rising Edge of INTX */
} EXINT_ISC3_t;

/* External Interrupt Sense Control 2 Bits */
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
    register8_t rsv_0x70[17]; /* RESERVED REGISTER BLOCK */
    register8_t TCCR1B;       /* Timer/Counter1 Control Register B */
    register8_t rsv_0x82[2];  /* RESERVED REGISTER BLOCK */
    _REGISTER16 (TCNT1);      /* Timer Counter 1  Bytes */
    register8_t rsv_0x85[3];  /* RESERVED REGISTER BLOCK */
    register8_t OCR1AL;       /* Output Compare Register 1A Low byte */
    register8_t OCR1AH;       /* Output Compare Register 1A High byte */
} TC1_t;


/* Clear Timer/Counter on Compare Match */
typedef enum TC1_CTC1_enum
{
    TC1_CTC1_CLEAR_gc = (0x00), /* Clear Timer/Counter on Compare Match - CLEAR */
    TC1_CTC1_SET_gc   = (0x08), /* Clear Timer/Counter on Compare Match - SET */
} TC1_CTC1_t;

/* Clock Select1 bits */
typedef enum TC1_CS1_enum
{
    TC1_CS1_VAL_0x00_gc = (0x00), /* No Clock Source (Stopped) */
    TC1_CS1_VAL_0x01_gc = (0x01), /* Running, No Prescaling */
    TC1_CS1_VAL_0x02_gc = (0x02), /* Running, CLK/8 */
    TC1_CS1_VAL_0x03_gc = (0x03), /* Running, CLK/32 */
    TC1_CS1_VAL_0x04_gc = (0x04), /* Running, CLK/64 */
    TC1_CS1_VAL_0x05_gc = (0x05), /* Running, CLK/128 */
    TC1_CS1_VAL_0x06_gc = (0x06), /* Running, CLK/256 */
    TC1_CS1_VAL_0x07_gc = (0x07), /* Running, CLK/1024 */
} TC1_CS1_t;

/* Timer/Counter1 Output Compare Interrupt Enable */
typedef enum TC1_OCIE1A_enum
{
    TC1_OCIE1A_CLEAR_gc = (0x00), /* Timer/Counter1 Output Compare Interrupt Enable - CLEAR */
    TC1_OCIE1A_SET_gc   = (0x02), /* Timer/Counter1 Output Compare Interrupt Enable - SET */
} TC1_OCIE1A_t;

/* Timer/Counter1 Overflow Interrupt Enable */
typedef enum TC1_TOIE1_enum
{
    TC1_TOIE1_CLEAR_gc = (0x00), /* Timer/Counter1 Overflow Interrupt Enable - CLEAR */
    TC1_TOIE1_SET_gc   = (0x01), /* Timer/Counter1 Overflow Interrupt Enable - SET */
} TC1_TOIE1_t;

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

/*
--------------------------------------------------------------------------------
WAKEUP_TIMER - Wakeup Timer
--------------------------------------------------------------------------------
*/

typedef struct WAKEUP_TIMER_struct
{
    register8_t rsv_0x00[98]; /* RESERVED REGISTER BLOCK */
    register8_t WUTCSR;       /* Wake-up Timer Control Register */
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

/* Wake-up timer Calibration Flag */
typedef enum WAKEUP_TIMER_WUTCF_enum
{
    WAKEUP_TIMER_WUTCF_CLEAR_gc = (0x00), /* Wake-up timer Calibration Flag - CLEAR */
    WAKEUP_TIMER_WUTCF_SET_gc   = (0x20), /* Wake-up timer Calibration Flag - SET */
} WAKEUP_TIMER_WUTCF_t;

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
typedef enum WAKEUP_TIMER_WUTP_enum
{
    WAKEUP_TIMER_WUTP_VAL_0x00_gc = (0x00), /* 4K(Slow RC) / 1K (32kHz) */
    WAKEUP_TIMER_WUTP_VAL_0x01_gc = (0x01), /* 8K(Slow RC) / 2K (32kHz) */
    WAKEUP_TIMER_WUTP_VAL_0x02_gc = (0x02), /* 16K(Slow RC) / 4K (32kHz) */
    WAKEUP_TIMER_WUTP_VAL_0x03_gc = (0x03), /* 32K(Slow RC) / 8K (32kHz) */
    WAKEUP_TIMER_WUTP_VAL_0x04_gc = (0x04), /* 64K(Slow RC) / 16K (32kHz) */
    WAKEUP_TIMER_WUTP_VAL_0x05_gc = (0x05), /* 128K(Slow RC) / 32K (32kHz) */
    WAKEUP_TIMER_WUTP_VAL_0x06_gc = (0x06), /* 256K(Slow RC) / 64K (32kHz) */
    WAKEUP_TIMER_WUTP_VAL_0x07_gc = (0x07), /* 512K(Slow RC) / 128K (32kHz) */
} WAKEUP_TIMER_WUTP_t;

/*
--------------------------------------------------------------------------------
BATTERY_PROTECTION - Battery Protection
--------------------------------------------------------------------------------
*/

typedef struct BATTERY_PROTECTION_struct
{
    register8_t rsv_0x00[242]; /* RESERVED REGISTER BLOCK */
    register8_t BPIR;          /* Battery Protection Interrupt Register */
    register8_t BPDUV;         /* Battery Protection Deep Under Voltage Register */
    register8_t BPSCD;         /* Battery Protection Short-Circuit Detection Level Register */
    register8_t BPOCD;         /* Battery Protection OverCurrent Detection Level Register */
    register8_t CBPTR;         /* Current Battery Protection Timing Register */
    register8_t BPCR;          /* Battery Protection Control Register */
    register8_t BPPLR;         /* Battery Protection Parameter Lock Register */
} BATTERY_PROTECTION_t;


/* Battery Protection Parameter Lock Enable */
typedef enum BATTERY_PROTECTION_BPPLE_enum
{
    BATTERY_PROTECTION_BPPLE_CLEAR_gc = (0x00), /* Battery Protection Parameter Lock Enable - CLEAR */
    BATTERY_PROTECTION_BPPLE_SET_gc   = (0x02), /* Battery Protection Parameter Lock Enable - SET */
} BATTERY_PROTECTION_BPPLE_t;

/* Battery Protection Parameter Lock */
typedef enum BATTERY_PROTECTION_BPPL_enum
{
    BATTERY_PROTECTION_BPPL_CLEAR_gc = (0x00), /* Battery Protection Parameter Lock - CLEAR */
    BATTERY_PROTECTION_BPPL_SET_gc   = (0x01), /* Battery Protection Parameter Lock - SET */
} BATTERY_PROTECTION_BPPL_t;

/* Battery Protection Control Register-DUVD */
typedef enum BATTERY_PROTECTION_DUVD_enum
{
    BATTERY_PROTECTION_DUVD_CLEAR_gc = (0x00), /* Battery Protection Control Register-DUVD - CLEAR */
    BATTERY_PROTECTION_DUVD_SET_gc   = (0x08), /* Battery Protection Control Register-DUVD - SET */
} BATTERY_PROTECTION_DUVD_t;

/* Battery Protection Control Register-SCD */
typedef enum BATTERY_PROTECTION_SCD_enum
{
    BATTERY_PROTECTION_SCD_CLEAR_gc = (0x00), /* Battery Protection Control Register-SCD - CLEAR */
    BATTERY_PROTECTION_SCD_SET_gc   = (0x04), /* Battery Protection Control Register-SCD - SET */
} BATTERY_PROTECTION_SCD_t;

/* Battery Protection Control Register-DCD */
typedef enum BATTERY_PROTECTION_DCD_enum
{
    BATTERY_PROTECTION_DCD_CLEAR_gc = (0x00), /* Battery Protection Control Register-DCD - CLEAR */
    BATTERY_PROTECTION_DCD_SET_gc   = (0x02), /* Battery Protection Control Register-DCD - SET */
} BATTERY_PROTECTION_DCD_t;

/* Battery Protection Control Register-CCD */
typedef enum BATTERY_PROTECTION_CCD_enum
{
    BATTERY_PROTECTION_CCD_CLEAR_gc = (0x00), /* Battery Protection Control Register-CCD - CLEAR */
    BATTERY_PROTECTION_CCD_SET_gc   = (0x01), /* Battery Protection Control Register-CCD - SET */
} BATTERY_PROTECTION_CCD_t;

/* Current Battery Protection Timing Register-SCPT */
typedef enum BATTERY_PROTECTION_SCPT_enum
{
    BATTERY_PROTECTION_SCPT_VAL_0x00_gc = (0x00<<4), /* 61 us */
    BATTERY_PROTECTION_SCPT_VAL_0x01_gc = (0x01<<4), /* 122 us */
    BATTERY_PROTECTION_SCPT_VAL_0x02_gc = (0x02<<4), /* 183 us */
    BATTERY_PROTECTION_SCPT_VAL_0x03_gc = (0x03<<4), /* 244 us */
    BATTERY_PROTECTION_SCPT_VAL_0x04_gc = (0x04<<4), /* 305 us */
    BATTERY_PROTECTION_SCPT_VAL_0x05_gc = (0x05<<4), /* 366 us */
    BATTERY_PROTECTION_SCPT_VAL_0x06_gc = (0x06<<4), /* 427 us */
    BATTERY_PROTECTION_SCPT_VAL_0x07_gc = (0x07<<4), /* 488 us */
    BATTERY_PROTECTION_SCPT_VAL_0x08_gc = (0x08<<4), /* 610 us */
    BATTERY_PROTECTION_SCPT_VAL_0x09_gc = (0x09<<4), /* 732 us */
    BATTERY_PROTECTION_SCPT_VAL_0x0A_gc = (0x0A<<4), /* 854 us */
    BATTERY_PROTECTION_SCPT_VAL_0x0B_gc = (0x0B<<4), /* 976 us */
    BATTERY_PROTECTION_SCPT_VAL_0x0C_gc = (0x0C<<4), /* 1098 us */
    BATTERY_PROTECTION_SCPT_VAL_0x0D_gc = (0x0D<<4), /* 1220 us */
    BATTERY_PROTECTION_SCPT_VAL_0x0E_gc = (0x0E<<4), /* 1342 us */
    BATTERY_PROTECTION_SCPT_VAL_0x0F_gc = (0x0F<<4), /* 1464 us */
} BATTERY_PROTECTION_SCPT_t;

/* Current Battery Protection Timing Register-OCPT */
typedef enum BATTERY_PROTECTION_OCPT_enum
{
    BATTERY_PROTECTION_OCPT_VAL_0x00_gc = (0x00), /* 1 ms */
    BATTERY_PROTECTION_OCPT_VAL_0x01_gc = (0x01), /* 2 ms */
    BATTERY_PROTECTION_OCPT_VAL_0x02_gc = (0x02), /* 4 ms */
    BATTERY_PROTECTION_OCPT_VAL_0x03_gc = (0x03), /* 6 ms */
    BATTERY_PROTECTION_OCPT_VAL_0x04_gc = (0x04), /* 8 ms */
    BATTERY_PROTECTION_OCPT_VAL_0x05_gc = (0x05), /* 10 ms */
    BATTERY_PROTECTION_OCPT_VAL_0x06_gc = (0x06), /* 12 ms */
    BATTERY_PROTECTION_OCPT_VAL_0x07_gc = (0x07), /* 14 ms */
    BATTERY_PROTECTION_OCPT_VAL_0x08_gc = (0x08), /* 16 ms */
    BATTERY_PROTECTION_OCPT_VAL_0x09_gc = (0x09), /* 18 ms */
    BATTERY_PROTECTION_OCPT_VAL_0x0A_gc = (0x0A), /* 20 ms */
    BATTERY_PROTECTION_OCPT_VAL_0x0B_gc = (0x0B), /* 22 ms */
    BATTERY_PROTECTION_OCPT_VAL_0x0C_gc = (0x0C), /* 24 ms */
    BATTERY_PROTECTION_OCPT_VAL_0x0D_gc = (0x0D), /* 26 ms */
    BATTERY_PROTECTION_OCPT_VAL_0x0E_gc = (0x0E), /* 28 ms */
    BATTERY_PROTECTION_OCPT_VAL_0x0F_gc = (0x0F), /* 30 ms */
} BATTERY_PROTECTION_OCPT_t;

/* Battery Protection OverCurrent Detection Level Register-DCDL */
typedef enum BATTERY_PROTECTION_DCDL_enum
{
    BATTERY_PROTECTION_DCDL_VAL_0x00_gc = (0x00<<4), /* 0.050V */
    BATTERY_PROTECTION_DCDL_VAL_0x01_gc = (0x01<<4), /* 0.055V */
    BATTERY_PROTECTION_DCDL_VAL_0x02_gc = (0x02<<4), /* 0.060V */
    BATTERY_PROTECTION_DCDL_VAL_0x03_gc = (0x03<<4), /* 0.065V */
    BATTERY_PROTECTION_DCDL_VAL_0x04_gc = (0x04<<4), /* 0.070V */
    BATTERY_PROTECTION_DCDL_VAL_0x05_gc = (0x05<<4), /* 0.080V */
    BATTERY_PROTECTION_DCDL_VAL_0x06_gc = (0x06<<4), /* 0.090V */
    BATTERY_PROTECTION_DCDL_VAL_0x07_gc = (0x07<<4), /* 0.100V */
    BATTERY_PROTECTION_DCDL_VAL_0x08_gc = (0x08<<4), /* 0.110V */
    BATTERY_PROTECTION_DCDL_VAL_0x09_gc = (0x09<<4), /* 0.120V */
    BATTERY_PROTECTION_DCDL_VAL_0x0A_gc = (0x0A<<4), /* 0.130V */
    BATTERY_PROTECTION_DCDL_VAL_0x0B_gc = (0x0B<<4), /* 0.140V */
    BATTERY_PROTECTION_DCDL_VAL_0x0C_gc = (0x0C<<4), /* 0.160V */
    BATTERY_PROTECTION_DCDL_VAL_0x0D_gc = (0x0D<<4), /* 0.180V */
    BATTERY_PROTECTION_DCDL_VAL_0x0E_gc = (0x0E<<4), /* 0.200V */
    BATTERY_PROTECTION_DCDL_VAL_0x0F_gc = (0x0F<<4), /* 0.220V */
} BATTERY_PROTECTION_DCDL_t;

/* Battery Protection OverCurrent Detection Level Register-CCDL */
typedef enum BATTERY_PROTECTION_CCDL_enum
{
    BATTERY_PROTECTION_CCDL_VAL_0x00_gc = (0x00), /* 0.050V */
    BATTERY_PROTECTION_CCDL_VAL_0x01_gc = (0x01), /* 0.055V */
    BATTERY_PROTECTION_CCDL_VAL_0x02_gc = (0x02), /* 0.060V */
    BATTERY_PROTECTION_CCDL_VAL_0x03_gc = (0x03), /* 0.065V */
    BATTERY_PROTECTION_CCDL_VAL_0x04_gc = (0x04), /* 0.070V */
    BATTERY_PROTECTION_CCDL_VAL_0x05_gc = (0x05), /* 0.080V */
    BATTERY_PROTECTION_CCDL_VAL_0x06_gc = (0x06), /* 0.090V */
    BATTERY_PROTECTION_CCDL_VAL_0x07_gc = (0x07), /* 0.100V */
    BATTERY_PROTECTION_CCDL_VAL_0x08_gc = (0x08), /* 0.110V */
    BATTERY_PROTECTION_CCDL_VAL_0x09_gc = (0x09), /* 0.120V */
    BATTERY_PROTECTION_CCDL_VAL_0x0A_gc = (0x0A), /* 0.130V */
    BATTERY_PROTECTION_CCDL_VAL_0x0B_gc = (0x0B), /* 0.140V */
    BATTERY_PROTECTION_CCDL_VAL_0x0C_gc = (0x0C), /* 0.160V */
    BATTERY_PROTECTION_CCDL_VAL_0x0D_gc = (0x0D), /* 0.180V */
    BATTERY_PROTECTION_CCDL_VAL_0x0E_gc = (0x0E), /* 0.200V */
    BATTERY_PROTECTION_CCDL_VAL_0x0F_gc = (0x0F), /* 0.220V */
} BATTERY_PROTECTION_CCDL_t;

/* Battery Protection Short-Circuit Detection Level Register-SCDL */
typedef enum BATTERY_PROTECTION_SCDL_enum
{
    BATTERY_PROTECTION_SCDL_VAL_0x00_gc = (0x00), /* 0.100V */
    BATTERY_PROTECTION_SCDL_VAL_0x01_gc = (0x01), /* 0.110V */
    BATTERY_PROTECTION_SCDL_VAL_0x02_gc = (0x02), /* 0.120V */
    BATTERY_PROTECTION_SCDL_VAL_0x03_gc = (0x03), /* 0.130V */
    BATTERY_PROTECTION_SCDL_VAL_0x04_gc = (0x04), /* 0.140V */
    BATTERY_PROTECTION_SCDL_VAL_0x05_gc = (0x05), /* 0.160V */
    BATTERY_PROTECTION_SCDL_VAL_0x06_gc = (0x06), /* 0.180V */
    BATTERY_PROTECTION_SCDL_VAL_0x07_gc = (0x07), /* 0.200V */
    BATTERY_PROTECTION_SCDL_VAL_0x08_gc = (0x08), /* 0.220V */
    BATTERY_PROTECTION_SCDL_VAL_0x09_gc = (0x09), /* 0.240V */
    BATTERY_PROTECTION_SCDL_VAL_0x0A_gc = (0x0A), /* 0.260V */
    BATTERY_PROTECTION_SCDL_VAL_0x0B_gc = (0x0B), /* 0.280V */
    BATTERY_PROTECTION_SCDL_VAL_0x0C_gc = (0x0C), /* 0.320V */
    BATTERY_PROTECTION_SCDL_VAL_0x0D_gc = (0x0D), /* 0.360V */
    BATTERY_PROTECTION_SCDL_VAL_0x0E_gc = (0x0E), /* 0.400V */
    BATTERY_PROTECTION_SCDL_VAL_0x0F_gc = (0x0F), /* 0.440V */
} BATTERY_PROTECTION_SCDL_t;

/* Battery Protection Deep Under Voltage Register-DUVT */
typedef enum BATTERY_PROTECTION_DUVT_enum
{
    BATTERY_PROTECTION_DUVT_VAL_0x00_gc = (0x00<<4), /* 750ms */
    BATTERY_PROTECTION_DUVT_VAL_0x01_gc = (0x01<<4), /* 1000ms */
    BATTERY_PROTECTION_DUVT_VAL_0x02_gc = (0x02<<4), /* 1250ms */
    BATTERY_PROTECTION_DUVT_VAL_0x03_gc = (0x03<<4), /* 1500ms */
} BATTERY_PROTECTION_DUVT_t;

/* Battery Protection Deep Under Voltage Register-DUDL */
typedef enum BATTERY_PROTECTION_DUDL_enum
{
    BATTERY_PROTECTION_DUDL_VAL_0x00_gc = (0x00), /* 4.71V */
    BATTERY_PROTECTION_DUDL_VAL_0x01_gc = (0x01), /* 5.03V */
    BATTERY_PROTECTION_DUDL_VAL_0x02_gc = (0x02), /* 5.34V */
    BATTERY_PROTECTION_DUDL_VAL_0x03_gc = (0x03), /* 5.66V */
    BATTERY_PROTECTION_DUDL_VAL_0x04_gc = (0x04), /* 5.97V */
    BATTERY_PROTECTION_DUDL_VAL_0x05_gc = (0x05), /* 6.29V */
    BATTERY_PROTECTION_DUDL_VAL_0x06_gc = (0x06), /* 6.60V */
    BATTERY_PROTECTION_DUDL_VAL_0x07_gc = (0x07), /* 6.91V */
    BATTERY_PROTECTION_DUDL_VAL_0x08_gc = (0x08), /* 7.23V */
    BATTERY_PROTECTION_DUDL_VAL_0x09_gc = (0x09), /* 7.54V */
    BATTERY_PROTECTION_DUDL_VAL_0x0A_gc = (0x0A), /* 7.86V */
    BATTERY_PROTECTION_DUDL_VAL_0x0B_gc = (0x0B), /* 8.17V */
    BATTERY_PROTECTION_DUDL_VAL_0x0C_gc = (0x0C), /* 8.49V */
    BATTERY_PROTECTION_DUDL_VAL_0x0D_gc = (0x0D), /* 8.80V */
    BATTERY_PROTECTION_DUDL_VAL_0x0E_gc = (0x0E), /* 9.11V */
    BATTERY_PROTECTION_DUDL_VAL_0x0F_gc = (0x0F), /* 9.43V */
} BATTERY_PROTECTION_DUDL_t;

/* Deep Under-voltage Early Warning Interrupt Flag */
typedef enum BATTERY_PROTECTION_DUVIF_enum
{
    BATTERY_PROTECTION_DUVIF_CLEAR_gc = (0x00), /* Deep Under-voltage Early Warning Interrupt Flag - CLEAR */
    BATTERY_PROTECTION_DUVIF_SET_gc   = (0x80), /* Deep Under-voltage Early Warning Interrupt Flag - SET */
} BATTERY_PROTECTION_DUVIF_t;

/* Charge Over-current Protection Activated Interrupt Flag */
typedef enum BATTERY_PROTECTION_COCIF_enum
{
    BATTERY_PROTECTION_COCIF_CLEAR_gc = (0x00), /* Charge Over-current Protection Activated Interrupt Flag - CLEAR */
    BATTERY_PROTECTION_COCIF_SET_gc   = (0x40), /* Charge Over-current Protection Activated Interrupt Flag - SET */
} BATTERY_PROTECTION_COCIF_t;

/* Battery Protection Interrupt Register-DOCIF */
typedef enum BATTERY_PROTECTION_DOCIF_enum
{
    BATTERY_PROTECTION_DOCIF_CLEAR_gc = (0x00), /* Battery Protection Interrupt Register-DOCIF - CLEAR */
    BATTERY_PROTECTION_DOCIF_SET_gc   = (0x20), /* Battery Protection Interrupt Register-DOCIF - SET */
} BATTERY_PROTECTION_DOCIF_t;

/* Battery Protection Interrupt Register-SCIF */
typedef enum BATTERY_PROTECTION_SCIF_enum
{
    BATTERY_PROTECTION_SCIF_CLEAR_gc = (0x00), /* Battery Protection Interrupt Register-SCIF - CLEAR */
    BATTERY_PROTECTION_SCIF_SET_gc   = (0x10), /* Battery Protection Interrupt Register-SCIF - SET */
} BATTERY_PROTECTION_SCIF_t;

/* Deep Under-voltage Early Warning Interrupt Enable */
typedef enum BATTERY_PROTECTION_DUVIE_enum
{
    BATTERY_PROTECTION_DUVIE_CLEAR_gc = (0x00), /* Deep Under-voltage Early Warning Interrupt Enable - CLEAR */
    BATTERY_PROTECTION_DUVIE_SET_gc   = (0x08), /* Deep Under-voltage Early Warning Interrupt Enable - SET */
} BATTERY_PROTECTION_DUVIE_t;

/* Battery Protection Interrupt Register-COCIE */
typedef enum BATTERY_PROTECTION_COCIE_enum
{
    BATTERY_PROTECTION_COCIE_CLEAR_gc = (0x00), /* Battery Protection Interrupt Register-COCIE - CLEAR */
    BATTERY_PROTECTION_COCIE_SET_gc   = (0x04), /* Battery Protection Interrupt Register-COCIE - SET */
} BATTERY_PROTECTION_COCIE_t;

/* Battery Protection Interrupt Register-DOCIE */
typedef enum BATTERY_PROTECTION_DOCIE_enum
{
    BATTERY_PROTECTION_DOCIE_CLEAR_gc = (0x00), /* Battery Protection Interrupt Register-DOCIE - CLEAR */
    BATTERY_PROTECTION_DOCIE_SET_gc   = (0x02), /* Battery Protection Interrupt Register-DOCIE - SET */
} BATTERY_PROTECTION_DOCIE_t;

/* Battery Protection Interrupt Register-SCIE */
typedef enum BATTERY_PROTECTION_SCIE_enum
{
    BATTERY_PROTECTION_SCIE_CLEAR_gc = (0x00), /* Battery Protection Interrupt Register-SCIE - CLEAR */
    BATTERY_PROTECTION_SCIE_SET_gc   = (0x01), /* Battery Protection Interrupt Register-SCIE - SET */
} BATTERY_PROTECTION_SCIE_t;

/*
--------------------------------------------------------------------------------
FET - FET Control
--------------------------------------------------------------------------------
*/

typedef struct FET_struct
{
    register8_t rsv_0x00[240]; /* RESERVED REGISTER BLOCK */
    register8_t FCSR;         
} FET_t;


/* Pulse Width Modulation of OC output */
typedef enum FET_PWMOC_enum
{
    FET_PWMOC_CLEAR_gc = (0x00), /* Pulse Width Modulation of OC output - CLEAR */
    FET_PWMOC_SET_gc   = (0x20), /* Pulse Width Modulation of OC output - SET */
} FET_PWMOC_t;

/* Pulse Width Modulation Modulation of OPC output */
typedef enum FET_PWMOPC_enum
{
    FET_PWMOPC_CLEAR_gc = (0x00), /* Pulse Width Modulation Modulation of OPC output - CLEAR */
    FET_PWMOPC_SET_gc   = (0x10), /* Pulse Width Modulation Modulation of OPC output - SET */
} FET_PWMOPC_t;

/* Current Protection Status */
typedef enum FET_CPS_enum
{
    FET_CPS_CLEAR_gc = (0x00), /* Current Protection Status - CLEAR */
    FET_CPS_SET_gc   = (0x08), /* Current Protection Status - SET */
} FET_CPS_t;

/* Discharge FET Enable */
typedef enum FET_DFE_enum
{
    FET_DFE_CLEAR_gc = (0x00), /* Discharge FET Enable - CLEAR */
    FET_DFE_SET_gc   = (0x04), /* Discharge FET Enable - SET */
} FET_DFE_t;

/* Charge FET Enable */
typedef enum FET_CFE_enum
{
    FET_CFE_CLEAR_gc = (0x00), /* Charge FET Enable - CLEAR */
    FET_CFE_SET_gc   = (0x02), /* Charge FET Enable - SET */
} FET_CFE_t;

/* Precharge FET disable */
typedef enum FET_PFD_enum
{
    FET_PFD_CLEAR_gc = (0x00), /* Precharge FET disable - CLEAR */
    FET_PFD_SET_gc   = (0x01), /* Precharge FET disable - SET */
} FET_PFD_t;

/*
--------------------------------------------------------------------------------
COULOMB_COUNTER - Coulomb Counter
--------------------------------------------------------------------------------
*/

typedef struct COULOMB_COUNTER_struct
{
    register8_t rsv_0x00[224]; /* RESERVED REGISTER BLOCK */
    register8_t CADAC0;        /* ADC Accumulate Current */
    register8_t CADAC1;        /* ADC Accumulate Current */
    register8_t CADAC2;        /* ADC Accumulate Current */
    register8_t CADAC3;        /* ADC Accumulate Current */
    register8_t CADCSRA;       /* CC-ADC Control and Status Register A */
    register8_t CADCSRB;       /* CC-ADC Control and Status Register B */
    register8_t CADRCC;        /* CC-ADC Regular Charge Current */
    register8_t CADRDC;        /* CC-ADC Regular Discharge Current */
    _REGISTER16 (CADIC);       /* CC-ADC Instantaneous Current */
} COULOMB_COUNTER_t;


/* When the CADEN bit is cleared (zero), the CC-ADC is disabled. When the CADEN bit is set (one), the CC-ADC will continuously measure the voltage drop over the external sense resistor RSENSE. In Power-down, only the Regular Current detection is active. In Power-off, the CC-ADC is always disabled. */
typedef enum COULOMB_COUNTER_CADEN_enum
{
    COULOMB_COUNTER_CADEN_CLEAR_gc = (0x00), /* When the CADEN bit is cleared (zero), the CC-ADC is disabled. When the CADEN bit is set (one), the CC-ADC will continuously measure the voltage drop over the external sense resistor RSENSE. In Power-down, only the Regular Current detection is active. In Power-off, the CC-ADC is always disabled. - CLEAR */
    COULOMB_COUNTER_CADEN_SET_gc   = (0x80), /* When the CADEN bit is cleared (zero), the CC-ADC is disabled. When the CADEN bit is set (one), the CC-ADC will continuously measure the voltage drop over the external sense resistor RSENSE. In Power-down, only the Regular Current detection is active. In Power-off, the CC-ADC is always disabled. - SET */
} COULOMB_COUNTER_CADEN_t;

/* CC_ADC Update Busy */
typedef enum COULOMB_COUNTER_CADUB_enum
{
    COULOMB_COUNTER_CADUB_CLEAR_gc = (0x00), /* CC_ADC Update Busy - CLEAR */
    COULOMB_COUNTER_CADUB_SET_gc   = (0x20), /* CC_ADC Update Busy - SET */
} COULOMB_COUNTER_CADUB_t;

/* CC_ADC Accumulate Current Select Bits */
typedef enum COULOMB_COUNTER_CADAS_enum
{
    COULOMB_COUNTER_CADAS_VAL_0x00_gc = (0x00<<3), /* 125ms */
    COULOMB_COUNTER_CADAS_VAL_0x01_gc = (0x01<<3), /* 250ms */
    COULOMB_COUNTER_CADAS_VAL_0x02_gc = (0x02<<3), /* 500ms */
    COULOMB_COUNTER_CADAS_VAL_0x03_gc = (0x03<<3), /* 1000ms */
} COULOMB_COUNTER_CADAS_t;

/* The CADSI bits determine the current sampling interval for the Regular Current detection in Power-down mode. The actual settings remain to be determined. */
typedef enum COULOMB_COUNTER_CADSI_enum
{
    COULOMB_COUNTER_CADSI_VAL_0x00_gc = (0x00<<1), /* 125ms */
    COULOMB_COUNTER_CADSI_VAL_0x01_gc = (0x01<<1), /* 250ms */
    COULOMB_COUNTER_CADSI_VAL_0x02_gc = (0x02<<1), /* 500ms */
    COULOMB_COUNTER_CADSI_VAL_0x03_gc = (0x03<<1), /* 1000ms */
} COULOMB_COUNTER_CADSI_t;

/* When the CADSE bit is written to one, the ongoing CC-ADC conversion is aborted, and the CC-ADC enters Regular Current detection mode. */
typedef enum COULOMB_COUNTER_CADSE_enum
{
    COULOMB_COUNTER_CADSE_CLEAR_gc = (0x00), /* When the CADSE bit is written to one, the ongoing CC-ADC conversion is aborted, and the CC-ADC enters Regular Current detection mode. - CLEAR */
    COULOMB_COUNTER_CADSE_SET_gc   = (0x01), /* When the CADSE bit is written to one, the ongoing CC-ADC conversion is aborted, and the CC-ADC enters Regular Current detection mode. - SET */
} COULOMB_COUNTER_CADSE_t;

/* CC-ADC Control and Status Register B-CADACIE */
typedef enum COULOMB_COUNTER_CADACIE_enum
{
    COULOMB_COUNTER_CADACIE_CLEAR_gc = (0x00), /* CC-ADC Control and Status Register B-CADACIE - CLEAR */
    COULOMB_COUNTER_CADACIE_SET_gc   = (0x40), /* CC-ADC Control and Status Register B-CADACIE - SET */
} COULOMB_COUNTER_CADACIE_t;

/* Regular Current Interrupt Enable */
typedef enum COULOMB_COUNTER_CADRCIE_enum
{
    COULOMB_COUNTER_CADRCIE_CLEAR_gc = (0x00), /* Regular Current Interrupt Enable - CLEAR */
    COULOMB_COUNTER_CADRCIE_SET_gc   = (0x20), /* Regular Current Interrupt Enable - SET */
} COULOMB_COUNTER_CADRCIE_t;

/* CAD Instantenous Current Interrupt Enable */
typedef enum COULOMB_COUNTER_CADICIE_enum
{
    COULOMB_COUNTER_CADICIE_CLEAR_gc = (0x00), /* CAD Instantenous Current Interrupt Enable - CLEAR */
    COULOMB_COUNTER_CADICIE_SET_gc   = (0x10), /* CAD Instantenous Current Interrupt Enable - SET */
} COULOMB_COUNTER_CADICIE_t;

/* CC-ADC Accumulate Current Interrupt Flag */
typedef enum COULOMB_COUNTER_CADACIF_enum
{
    COULOMB_COUNTER_CADACIF_CLEAR_gc = (0x00), /* CC-ADC Accumulate Current Interrupt Flag - CLEAR */
    COULOMB_COUNTER_CADACIF_SET_gc   = (0x04), /* CC-ADC Accumulate Current Interrupt Flag - SET */
} COULOMB_COUNTER_CADACIF_t;

/* CC-ADC Accumulate Current Interrupt Flag */
typedef enum COULOMB_COUNTER_CADRCIF_enum
{
    COULOMB_COUNTER_CADRCIF_CLEAR_gc = (0x00), /* CC-ADC Accumulate Current Interrupt Flag - CLEAR */
    COULOMB_COUNTER_CADRCIF_SET_gc   = (0x02), /* CC-ADC Accumulate Current Interrupt Flag - SET */
} COULOMB_COUNTER_CADRCIF_t;

/* CC-ADC Instantaneous Current Interrupt Flag */
typedef enum COULOMB_COUNTER_CADICIF_enum
{
    COULOMB_COUNTER_CADICIF_CLEAR_gc = (0x00), /* CC-ADC Instantaneous Current Interrupt Flag - CLEAR */
    COULOMB_COUNTER_CADICIF_SET_gc   = (0x01), /* CC-ADC Instantaneous Current Interrupt Flag - SET */
} COULOMB_COUNTER_CADICIF_t;

/*
--------------------------------------------------------------------------------
CELL_BALANCING - Cell Balancing
--------------------------------------------------------------------------------
*/

typedef struct CELL_BALANCING_struct
{
    register8_t rsv_0x00[241]; /* RESERVED REGISTER BLOCK */
    register8_t CBCR;          /* Cell Balancing Control Register */
} CELL_BALANCING_t;


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
    register8_t rsv_0x60[4];  /* RESERVED REGISTER BLOCK */
    register8_t PRR0;         /* Power Reduction Register 0 */
    register8_t rsv_0x65;     /* RESERVED REGISTER */
    register8_t FOSCCAL;      /* Fast Oscillator Calibration Value */
    register8_t rsv_0x67[23]; /* RESERVED REGISTER BLOCK */
    register8_t DIDR0;        /* Digital Input Disable Register */
    register8_t rsv_0x7F[65]; /* RESERVED REGISTER BLOCK */
    register8_t CCSR;         /* Clock Control and Status Register */
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

/* JTAG Disable */
typedef enum CPU_JTD_enum
{
    CPU_JTD_CLEAR_gc = (0x00), /* JTAG Disable - CLEAR */
    CPU_JTD_SET_gc   = (0x80), /* JTAG Disable - SET */
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

/* Sleep Mode Select bits */
typedef enum CPU_SM_enum
{
    CPU_SM_IDLE_gc     = (0x00<<1), /* Idle */
    CPU_SM_ADC_gc      = (0x01<<1), /* ADC Noise Reduction (If Available) */
    CPU_SM_PDOWN_gc    = (0x02<<1), /* Power Down */
    CPU_SM_PSAVE_gc    = (0x03<<1), /* Power Save */
    CPU_SM_POFF_gc     = (0x04<<1), /* Power Off */
    CPU_SM_VAL_0x05_gc = (0x05<<1), /* Reserved */
    CPU_SM_VAL_0x06_gc = (0x06<<1), /* Reserved */
    CPU_SM_VAL_0x07_gc = (0x07<<1), /* Reserved */
} CPU_SM_t;

/* Sleep Enable */
typedef enum CPU_SE_enum
{
    CPU_SE_CLEAR_gc = (0x00), /* Sleep Enable - CLEAR */
    CPU_SE_SET_gc   = (0x01), /* Sleep Enable - SET */
} CPU_SE_t;

/* 32 kHz Crystal Oscillator Enable */
typedef enum CPU_XOE_enum
{
    CPU_XOE_CLEAR_gc = (0x00), /* 32 kHz Crystal Oscillator Enable - CLEAR */
    CPU_XOE_SET_gc   = (0x02), /* 32 kHz Crystal Oscillator Enable - SET */
} CPU_XOE_t;

/* Asynchronous Clock Select */
typedef enum CPU_ACS_enum
{
    CPU_ACS_CLEAR_gc = (0x00), /* Asynchronous Clock Select - CLEAR */
    CPU_ACS_SET_gc   = (0x01), /* Asynchronous Clock Select - SET */
} CPU_ACS_t;

/* Power Reduction TWI */
typedef enum CPU_PRTWI_enum
{
    CPU_PRTWI_CLEAR_gc = (0x00), /* Power Reduction TWI - CLEAR */
    CPU_PRTWI_SET_gc   = (0x08), /* Power Reduction TWI - SET */
} CPU_PRTWI_t;

/* Power Reduction Timer/Counter1 */
typedef enum CPU_PRTIM1_enum
{
    CPU_PRTIM1_CLEAR_gc = (0x00), /* Power Reduction Timer/Counter1 - CLEAR */
    CPU_PRTIM1_SET_gc   = (0x04), /* Power Reduction Timer/Counter1 - SET */
} CPU_PRTIM1_t;

/* Power Reduction Timer/Counter0 */
typedef enum CPU_PRTIM0_enum
{
    CPU_PRTIM0_CLEAR_gc = (0x00), /* Power Reduction Timer/Counter0 - CLEAR */
    CPU_PRTIM0_SET_gc   = (0x02), /* Power Reduction Timer/Counter0 - SET */
} CPU_PRTIM0_t;

/* Power Reduction V-ADC */
typedef enum CPU_PRVADC_enum
{
    CPU_PRVADC_CLEAR_gc = (0x00), /* Power Reduction V-ADC - CLEAR */
    CPU_PRVADC_SET_gc   = (0x01), /* Power Reduction V-ADC - SET */
} CPU_PRVADC_t;

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
TC8 - Timer/Counter, 8-bit
--------------------------------------------------------------------------------
*/

typedef struct TC0_struct
{
    register8_t rsv_0x00[53]; /* RESERVED REGISTER BLOCK */
    register8_t TIFR0;        /* Timer/Counter Interrupt Flag register */
    register8_t rsv_0x36[14]; /* RESERVED REGISTER BLOCK */
    register8_t TCCR0A;       /* Timer/Counter0 Control Register */
    register8_t TCCR0B;       /* Timer/Counter0 Control Register */
    register8_t TCNT0;        /* Timer Counter 0 */
    register8_t OCR0A;        /* Output compare Register A */
    register8_t OCR0B;        /* Output compare Register B */
    register8_t rsv_0x49[37]; /* RESERVED REGISTER BLOCK */
    register8_t TIMSK0;       /* Timer/Counter Interrupt Mask Register */
} TC0_t;


/* Force Output Compare */
#define TC0_TCCR0A_COM0A_gc(x) ((x<<6) & 0xC0)

/* Timer/Counter0 Control Register-COM0B */
#define TC0_TCCR0A_COM0B_gc(x) ((x<<4) & 0x30)

/* Clock Select0 bits */
#define TC0_TCCR0A_WGM0_gc(x) (x & 0x03)

/* Force Output Compare */
typedef enum TC0_FOC0A_enum
{
    TC0_FOC0A_CLEAR_gc = (0x00), /* Force Output Compare - CLEAR */
    TC0_FOC0A_SET_gc   = (0x80), /* Force Output Compare - SET */
} TC0_FOC0A_t;

/* Waveform Generation Mode */
typedef enum TC0_FOC0B_enum
{
    TC0_FOC0B_CLEAR_gc = (0x00), /* Waveform Generation Mode - CLEAR */
    TC0_FOC0B_SET_gc   = (0x40), /* Waveform Generation Mode - SET */
} TC0_FOC0B_t;

/* Timer/Counter0 Control Register-WGM02 */
typedef enum TC0_WGM02_enum
{
    TC0_WGM02_CLEAR_gc = (0x00), /* Timer/Counter0 Control Register-WGM02 - CLEAR */
    TC0_WGM02_SET_gc   = (0x08), /* Timer/Counter0 Control Register-WGM02 - SET */
} TC0_WGM02_t;

/* Clock Select0 bits */
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

/* Output Compare Interrupt Enable */
typedef enum TC0_OCIE0B_enum
{
    TC0_OCIE0B_CLEAR_gc = (0x00), /* Output Compare Interrupt Enable - CLEAR */
    TC0_OCIE0B_SET_gc   = (0x04), /* Output Compare Interrupt Enable - SET */
} TC0_OCIE0B_t;

/* Output Compare Interrupt Enable */
typedef enum TC0_OCIE0A_enum
{
    TC0_OCIE0A_CLEAR_gc = (0x00), /* Output Compare Interrupt Enable - CLEAR */
    TC0_OCIE0A_SET_gc   = (0x02), /* Output Compare Interrupt Enable - SET */
} TC0_OCIE0A_t;

/* Overflow Interrupt Enable */
typedef enum TC0_TOIE0_enum
{
    TC0_TOIE0_CLEAR_gc = (0x00), /* Overflow Interrupt Enable - CLEAR */
    TC0_TOIE0_SET_gc   = (0x01), /* Overflow Interrupt Enable - SET */
} TC0_TOIE0_t;

/* Output Compare Flag */
typedef enum TC0_OCF0B_enum
{
    TC0_OCF0B_CLEAR_gc = (0x00), /* Output Compare Flag - CLEAR */
    TC0_OCF0B_SET_gc   = (0x04), /* Output Compare Flag - SET */
} TC0_OCF0B_t;

/* Output Compare Flag */
typedef enum TC0_OCF0A_enum
{
    TC0_OCF0A_CLEAR_gc = (0x00), /* Output Compare Flag - CLEAR */
    TC0_OCF0A_SET_gc   = (0x02), /* Output Compare Flag - SET */
} TC0_OCF0A_t;

/* Overflow Flag */
typedef enum TC0_TOV0_enum
{
    TC0_TOV0_CLEAR_gc = (0x00), /* Overflow Flag - CLEAR */
    TC0_TOV0_SET_gc   = (0x01), /* Overflow Flag - SET */
} TC0_TOV0_t;

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
    register8_t rsv_0x00[40]; /* RESERVED REGISTER BLOCK */
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
    register8_t PIND;         /* Input Pins, Port D */
    register8_t DDRD;         /* Data Direction Register, Port D */
    register8_t PORTD;        /* Data Register, Port D */
} PORTD_t;


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
    register8_t TWBCSR;        /* TWI Bus Control and Status Register */
} TWI_t;


/* TWI Bus Connect/Disconnect Interrupt Flag */
typedef enum TWI_TWBCIF_enum
{
    TWI_TWBCIF_CLEAR_gc = (0x00), /* TWI Bus Connect/Disconnect Interrupt Flag - CLEAR */
    TWI_TWBCIF_SET_gc   = (0x80), /* TWI Bus Connect/Disconnect Interrupt Flag - SET */
} TWI_TWBCIF_t;

/* TWI Bus Connect/Disconnect Interrupt Enable */
typedef enum TWI_TWBCIE_enum
{
    TWI_TWBCIE_CLEAR_gc = (0x00), /* TWI Bus Connect/Disconnect Interrupt Enable - CLEAR */
    TWI_TWBCIE_SET_gc   = (0x40), /* TWI Bus Connect/Disconnect Interrupt Enable - SET */
} TWI_TWBCIE_t;

/* TWI Bus Disconnect Time-out Period */
typedef enum TWI_TWBDT_enum
{
    TWI_TWBDT_VAL_0x00_gc = (0x00<<1), /* 250ms */
    TWI_TWBDT_VAL_0x01_gc = (0x01<<1), /* 500ms */
    TWI_TWBDT_VAL_0x02_gc = (0x02<<1), /* 1000ms */
    TWI_TWBDT_VAL_0x03_gc = (0x03<<1), /* 2000ms */
} TWI_TWBDT_t;

/* TWI Bus Connect/Disconnect Interrupt Polarity */
typedef enum TWI_TWBCIP_enum
{
    TWI_TWBCIP_CLEAR_gc = (0x00), /* TWI Bus Connect/Disconnect Interrupt Polarity - CLEAR */
    TWI_TWBCIP_SET_gc   = (0x01), /* TWI Bus Connect/Disconnect Interrupt Polarity - SET */
} TWI_TWBCIP_t;

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
BANDGAP - Bandgap
--------------------------------------------------------------------------------
*/

typedef struct BANDGAP_struct
{
    register8_t rsv_0x00[208]; /* RESERVED REGISTER BLOCK */
    register8_t BGCCR;         /* Bandgap Calibration Register */
    register8_t BGCRR;         /* Bandgap Calibration of Resistor Ladder */
} BANDGAP_t;


/* Setting the BGD bit to one will disable the bandgap voltage reference. This bit must be cleared before enabling CC-ADC or V-ADC, and must remain unset while either ADC is enabled. */
typedef enum BANDGAP_BGD_enum
{
    BANDGAP_BGD_CLEAR_gc = (0x00), /* Setting the BGD bit to one will disable the bandgap voltage reference. This bit must be cleared before enabling CC-ADC or V-ADC, and must remain unset while either ADC is enabled. - CLEAR */
    BANDGAP_BGD_SET_gc   = (0x80), /* Setting the BGD bit to one will disable the bandgap voltage reference. This bit must be cleared before enabling CC-ADC or V-ADC, and must remain unset while either ADC is enabled. - SET */
} BANDGAP_BGD_t;

/* BG Calibration of PTAT Current Bits */
#define BANDGAP_BGCCR_BGCC_gc(x) (x & 0x3F)

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

/* EEPROM Master Programming Enable */
typedef enum EEPROM_EEMPE_enum
{
    EEPROM_EEMPE_CLEAR_gc = (0x00), /* EEPROM Master Programming Enable - CLEAR */
    EEPROM_EEMPE_SET_gc   = (0x04), /* EEPROM Master Programming Enable - SET */
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
================================================================================
IO Module Instances. Mapped to memory.
================================================================================
*/

#define ADC                (*(ADC_t *) 0x0000)                /* Analog-to-Digital Converter */
#define EXINT              (*(EXINT_t *) 0x0000)              /* External Interrupts */
#define TC1                (*(TC1_t *) 0x0000)                /* Timer/Counter, 16-bit */
#define WAKEUP_TIMER       (*(WAKEUP_TIMER_t *) 0x0000)       /* Wakeup Timer */
#define BATTERY_PROTECTION (*(BATTERY_PROTECTION_t *) 0x0000) /* Battery Protection */
#define FET                (*(FET_t *) 0x0000)                /* FET Control */
#define COULOMB_COUNTER    (*(COULOMB_COUNTER_t *) 0x0000)    /* Coulomb Counter */
#define CELL_BALANCING     (*(CELL_BALANCING_t *) 0x0000)     /* Cell Balancing */
#define CPU                (*(CPU_t *) 0x0000)                /* CPU Registers */
#define WDT                (*(WDT_t *) 0x0000)                /* Watchdog Timer */
#define TC0                (*(TC0_t *) 0x0000)                /* Timer/Counter, 8-bit */
#define PORTA              (*(PORTA_t *) 0x0000)              /* I/O Port */
#define PORTB              (*(PORTB_t *) 0x0000)              /* I/O Port */
#define PORTC              (*(PORTC_t *) 0x0000)              /* I/O Port */
#define PORTD              (*(PORTD_t *) 0x0000)              /* I/O Port */
#define BOOT_LOAD          (*(BOOT_LOAD_t *) 0x0000)          /* Bootloader */
#define TWI                (*(TWI_t *) 0x0000)                /* Two Wire Serial Interface */
#define BANDGAP            (*(BANDGAP_t *) 0x0000)            /* Bandgap */
#define EEPROM             (*(EEPROM_t *) 0x0000)             /* EEPROM */
#define FUSE               (*(FUSE_t *) 0x0000)               /* Fuses */
#define LOCKBIT            (*(LOCKBIT_t *) 0x0000)            /* Lockbits */
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


/* On-Chip Debug Enabled */
#define FUSE_OCDEN_CLEAR_gc (0x00) /* On-Chip Debug Enabled - CLEAR */
#define FUSE_OCDEN_SET_gc   (0x02) /* On-Chip Debug Enabled - SET */


/* JTAG Interface Enabled */
#define FUSE_JTAGEN_CLEAR_gc (0x00) /* JTAG Interface Enabled - CLEAR */
#define FUSE_JTAGEN_SET_gc   (0x01) /* JTAG Interface Enabled - SET */


/* Watchdog timer always on */
#define FUSE_WDTON_CLEAR_gc (0x00) /* Watchdog timer always on - CLEAR */
#define FUSE_WDTON_SET_gc   (0x80) /* Watchdog timer always on - SET */


/* Preserve EEPROM through the Chip Erase cycle */
#define FUSE_EESAVE_CLEAR_gc (0x00) /* Preserve EEPROM through the Chip Erase cycle - CLEAR */
#define FUSE_EESAVE_SET_gc   (0x40) /* Preserve EEPROM through the Chip Erase cycle - SET */


/* Select boot size */
#define FUSE_BOOTSZ_256W_4F00_gc  (0x03<<4) /* Boot Flash size=256 words Boot address=$4F00 */
#define FUSE_BOOTSZ_512W_4E00_gc  (0x02<<4) /* Boot Flash size=512 words Boot address=$4E00 */
#define FUSE_BOOTSZ_1024W_4C00_gc (0x01<<4) /* Boot Flash size=1024 words Boot address=$4C00 */
#define FUSE_BOOTSZ_2048W_4800_gc (0x00<<4) /* Boot Flash size=2048 words Boot address=$4800 */


/* Boot Reset vector Enabled */
#define FUSE_BOOTRST_CLEAR_gc (0x00) /* Boot Reset vector Enabled - CLEAR */
#define FUSE_BOOTRST_SET_gc   (0x08) /* Boot Reset vector Enabled - SET */


/* Clock Selection */
#define FUSE_SUT_CKSEL_14CK_0MS_gc   (0x00) /* Start-up time: 14 CK + 0 ms */
#define FUSE_SUT_CKSEL_14CK_3MS9_gc  (0x02) /* Start-up time: 14 CK + 3.9 ms */
#define FUSE_SUT_CKSEL_14CK_62MS5_gc (0x04) /* Start-up time: 14 CK + 62.5 ms */
/* WARNING: FUSE_SUT_CKSEL_14CK_0MS_gc ALREADY DEFINED as '(0x00)' NOT '(0x01)' */
/* WARNING: FUSE_SUT_CKSEL_14CK_3MS9_gc ALREADY DEFINED as '(0x02)' NOT '(0x03)' */
/* WARNING: FUSE_SUT_CKSEL_14CK_62MS5_gc ALREADY DEFINED as '(0x04)' NOT '(0x05)' */


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
ADC - Analog-to-Digital Converter
--------------------------------------------------------------------------------
*/


/* VADC Enable */
#define ADC_VADEN_CLEAR_gc (0x00) /* VADC Enable - CLEAR */
#define ADC_VADEN_SET_gc   (0x08) /* VADC Enable - SET */


/* VADC Satrt Conversion */
#define ADC_VADSC_CLEAR_gc (0x00) /* VADC Satrt Conversion - CLEAR */
#define ADC_VADSC_SET_gc   (0x04) /* VADC Satrt Conversion - SET */


/* VADC Conversion Complete Interrupt Flag */
#define ADC_VADCCIF_CLEAR_gc (0x00) /* VADC Conversion Complete Interrupt Flag - CLEAR */
#define ADC_VADCCIF_SET_gc   (0x02) /* VADC Conversion Complete Interrupt Flag - SET */


/* VADC Conversion Complete Interrupt Enable */
#define ADC_VADCCIE_CLEAR_gc (0x00) /* VADC Conversion Complete Interrupt Enable - CLEAR */
#define ADC_VADCCIE_SET_gc   (0x01) /* VADC Conversion Complete Interrupt Enable - SET */


/*
--------------------------------------------------------------------------------
EXINT - External Interrupts
--------------------------------------------------------------------------------
*/


/* External Interrupt Sense Control 3 Bits */
#define EXINT_ISC3_VAL_0x00_gc (0x00<<6) /* Low Level of INTX */
#define EXINT_ISC3_VAL_0x01_gc (0x01<<6) /* Any Logical Change of INTX */
#define EXINT_ISC3_VAL_0x02_gc (0x02<<6) /* Falling Edge of INTX */
#define EXINT_ISC3_VAL_0x03_gc (0x03<<6) /* Rising Edge of INTX */


/* External Interrupt Sense Control 2 Bits */
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
TC16 - Timer/Counter, 16-bit
--------------------------------------------------------------------------------
*/


/* Clear Timer/Counter on Compare Match */
#define TC1_CTC1_CLEAR_gc (0x00) /* Clear Timer/Counter on Compare Match - CLEAR */
#define TC1_CTC1_SET_gc   (0x08) /* Clear Timer/Counter on Compare Match - SET */


/* Clock Select1 bits */
#define TC1_CS1_VAL_0x00_gc (0x00) /* No Clock Source (Stopped) */
#define TC1_CS1_VAL_0x01_gc (0x01) /* Running, No Prescaling */
#define TC1_CS1_VAL_0x02_gc (0x02) /* Running, CLK/8 */
#define TC1_CS1_VAL_0x03_gc (0x03) /* Running, CLK/32 */
#define TC1_CS1_VAL_0x04_gc (0x04) /* Running, CLK/64 */
#define TC1_CS1_VAL_0x05_gc (0x05) /* Running, CLK/128 */
#define TC1_CS1_VAL_0x06_gc (0x06) /* Running, CLK/256 */
#define TC1_CS1_VAL_0x07_gc (0x07) /* Running, CLK/1024 */


/* Timer/Counter1 Output Compare Interrupt Enable */
#define TC1_OCIE1A_CLEAR_gc (0x00) /* Timer/Counter1 Output Compare Interrupt Enable - CLEAR */
#define TC1_OCIE1A_SET_gc   (0x02) /* Timer/Counter1 Output Compare Interrupt Enable - SET */


/* Timer/Counter1 Overflow Interrupt Enable */
#define TC1_TOIE1_CLEAR_gc (0x00) /* Timer/Counter1 Overflow Interrupt Enable - CLEAR */
#define TC1_TOIE1_SET_gc   (0x01) /* Timer/Counter1 Overflow Interrupt Enable - SET */


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


/* Wake-up timer Calibration Flag */
#define WAKEUP_TIMER_WUTCF_CLEAR_gc (0x00) /* Wake-up timer Calibration Flag - CLEAR */
#define WAKEUP_TIMER_WUTCF_SET_gc   (0x20) /* Wake-up timer Calibration Flag - SET */


/* Wake-up Timer Reset */
#define WAKEUP_TIMER_WUTR_CLEAR_gc (0x00) /* Wake-up Timer Reset - CLEAR */
#define WAKEUP_TIMER_WUTR_SET_gc   (0x10) /* Wake-up Timer Reset - SET */


/* Wake-up Timer Enable */
#define WAKEUP_TIMER_WUTE_CLEAR_gc (0x00) /* Wake-up Timer Enable - CLEAR */
#define WAKEUP_TIMER_WUTE_SET_gc   (0x08) /* Wake-up Timer Enable - SET */


/* Wake-up Timer Prescaler Bits */
#define WAKEUP_TIMER_WUTP_VAL_0x00_gc (0x00) /* 4K(Slow RC) / 1K (32kHz) */
#define WAKEUP_TIMER_WUTP_VAL_0x01_gc (0x01) /* 8K(Slow RC) / 2K (32kHz) */
#define WAKEUP_TIMER_WUTP_VAL_0x02_gc (0x02) /* 16K(Slow RC) / 4K (32kHz) */
#define WAKEUP_TIMER_WUTP_VAL_0x03_gc (0x03) /* 32K(Slow RC) / 8K (32kHz) */
#define WAKEUP_TIMER_WUTP_VAL_0x04_gc (0x04) /* 64K(Slow RC) / 16K (32kHz) */
#define WAKEUP_TIMER_WUTP_VAL_0x05_gc (0x05) /* 128K(Slow RC) / 32K (32kHz) */
#define WAKEUP_TIMER_WUTP_VAL_0x06_gc (0x06) /* 256K(Slow RC) / 64K (32kHz) */
#define WAKEUP_TIMER_WUTP_VAL_0x07_gc (0x07) /* 512K(Slow RC) / 128K (32kHz) */


/*
--------------------------------------------------------------------------------
BATTERY_PROTECTION - Battery Protection
--------------------------------------------------------------------------------
*/


/* Battery Protection Parameter Lock Enable */
#define BATTERY_PROTECTION_BPPLE_CLEAR_gc (0x00) /* Battery Protection Parameter Lock Enable - CLEAR */
#define BATTERY_PROTECTION_BPPLE_SET_gc   (0x02) /* Battery Protection Parameter Lock Enable - SET */


/* Battery Protection Parameter Lock */
#define BATTERY_PROTECTION_BPPL_CLEAR_gc (0x00) /* Battery Protection Parameter Lock - CLEAR */
#define BATTERY_PROTECTION_BPPL_SET_gc   (0x01) /* Battery Protection Parameter Lock - SET */


/* Battery Protection Control Register-DUVD */
#define BATTERY_PROTECTION_DUVD_CLEAR_gc (0x00) /* Battery Protection Control Register-DUVD - CLEAR */
#define BATTERY_PROTECTION_DUVD_SET_gc   (0x08) /* Battery Protection Control Register-DUVD - SET */


/* Battery Protection Control Register-SCD */
#define BATTERY_PROTECTION_SCD_CLEAR_gc (0x00) /* Battery Protection Control Register-SCD - CLEAR */
#define BATTERY_PROTECTION_SCD_SET_gc   (0x04) /* Battery Protection Control Register-SCD - SET */


/* Battery Protection Control Register-DCD */
#define BATTERY_PROTECTION_DCD_CLEAR_gc (0x00) /* Battery Protection Control Register-DCD - CLEAR */
#define BATTERY_PROTECTION_DCD_SET_gc   (0x02) /* Battery Protection Control Register-DCD - SET */


/* Battery Protection Control Register-CCD */
#define BATTERY_PROTECTION_CCD_CLEAR_gc (0x00) /* Battery Protection Control Register-CCD - CLEAR */
#define BATTERY_PROTECTION_CCD_SET_gc   (0x01) /* Battery Protection Control Register-CCD - SET */


/* Current Battery Protection Timing Register-SCPT */
#define BATTERY_PROTECTION_SCPT_VAL_0x00_gc (0x00<<4) /* 61 us */
#define BATTERY_PROTECTION_SCPT_VAL_0x01_gc (0x01<<4) /* 122 us */
#define BATTERY_PROTECTION_SCPT_VAL_0x02_gc (0x02<<4) /* 183 us */
#define BATTERY_PROTECTION_SCPT_VAL_0x03_gc (0x03<<4) /* 244 us */
#define BATTERY_PROTECTION_SCPT_VAL_0x04_gc (0x04<<4) /* 305 us */
#define BATTERY_PROTECTION_SCPT_VAL_0x05_gc (0x05<<4) /* 366 us */
#define BATTERY_PROTECTION_SCPT_VAL_0x06_gc (0x06<<4) /* 427 us */
#define BATTERY_PROTECTION_SCPT_VAL_0x07_gc (0x07<<4) /* 488 us */
#define BATTERY_PROTECTION_SCPT_VAL_0x08_gc (0x08<<4) /* 610 us */
#define BATTERY_PROTECTION_SCPT_VAL_0x09_gc (0x09<<4) /* 732 us */
#define BATTERY_PROTECTION_SCPT_VAL_0x0A_gc (0x0A<<4) /* 854 us */
#define BATTERY_PROTECTION_SCPT_VAL_0x0B_gc (0x0B<<4) /* 976 us */
#define BATTERY_PROTECTION_SCPT_VAL_0x0C_gc (0x0C<<4) /* 1098 us */
#define BATTERY_PROTECTION_SCPT_VAL_0x0D_gc (0x0D<<4) /* 1220 us */
#define BATTERY_PROTECTION_SCPT_VAL_0x0E_gc (0x0E<<4) /* 1342 us */
#define BATTERY_PROTECTION_SCPT_VAL_0x0F_gc (0x0F<<4) /* 1464 us */


/* Current Battery Protection Timing Register-OCPT */
#define BATTERY_PROTECTION_OCPT_VAL_0x00_gc (0x00) /* 1 ms */
#define BATTERY_PROTECTION_OCPT_VAL_0x01_gc (0x01) /* 2 ms */
#define BATTERY_PROTECTION_OCPT_VAL_0x02_gc (0x02) /* 4 ms */
#define BATTERY_PROTECTION_OCPT_VAL_0x03_gc (0x03) /* 6 ms */
#define BATTERY_PROTECTION_OCPT_VAL_0x04_gc (0x04) /* 8 ms */
#define BATTERY_PROTECTION_OCPT_VAL_0x05_gc (0x05) /* 10 ms */
#define BATTERY_PROTECTION_OCPT_VAL_0x06_gc (0x06) /* 12 ms */
#define BATTERY_PROTECTION_OCPT_VAL_0x07_gc (0x07) /* 14 ms */
#define BATTERY_PROTECTION_OCPT_VAL_0x08_gc (0x08) /* 16 ms */
#define BATTERY_PROTECTION_OCPT_VAL_0x09_gc (0x09) /* 18 ms */
#define BATTERY_PROTECTION_OCPT_VAL_0x0A_gc (0x0A) /* 20 ms */
#define BATTERY_PROTECTION_OCPT_VAL_0x0B_gc (0x0B) /* 22 ms */
#define BATTERY_PROTECTION_OCPT_VAL_0x0C_gc (0x0C) /* 24 ms */
#define BATTERY_PROTECTION_OCPT_VAL_0x0D_gc (0x0D) /* 26 ms */
#define BATTERY_PROTECTION_OCPT_VAL_0x0E_gc (0x0E) /* 28 ms */
#define BATTERY_PROTECTION_OCPT_VAL_0x0F_gc (0x0F) /* 30 ms */


/* Battery Protection OverCurrent Detection Level Register-DCDL */
#define BATTERY_PROTECTION_DCDL_VAL_0x00_gc (0x00<<4) /* 0.050V */
#define BATTERY_PROTECTION_DCDL_VAL_0x01_gc (0x01<<4) /* 0.055V */
#define BATTERY_PROTECTION_DCDL_VAL_0x02_gc (0x02<<4) /* 0.060V */
#define BATTERY_PROTECTION_DCDL_VAL_0x03_gc (0x03<<4) /* 0.065V */
#define BATTERY_PROTECTION_DCDL_VAL_0x04_gc (0x04<<4) /* 0.070V */
#define BATTERY_PROTECTION_DCDL_VAL_0x05_gc (0x05<<4) /* 0.080V */
#define BATTERY_PROTECTION_DCDL_VAL_0x06_gc (0x06<<4) /* 0.090V */
#define BATTERY_PROTECTION_DCDL_VAL_0x07_gc (0x07<<4) /* 0.100V */
#define BATTERY_PROTECTION_DCDL_VAL_0x08_gc (0x08<<4) /* 0.110V */
#define BATTERY_PROTECTION_DCDL_VAL_0x09_gc (0x09<<4) /* 0.120V */
#define BATTERY_PROTECTION_DCDL_VAL_0x0A_gc (0x0A<<4) /* 0.130V */
#define BATTERY_PROTECTION_DCDL_VAL_0x0B_gc (0x0B<<4) /* 0.140V */
#define BATTERY_PROTECTION_DCDL_VAL_0x0C_gc (0x0C<<4) /* 0.160V */
#define BATTERY_PROTECTION_DCDL_VAL_0x0D_gc (0x0D<<4) /* 0.180V */
#define BATTERY_PROTECTION_DCDL_VAL_0x0E_gc (0x0E<<4) /* 0.200V */
#define BATTERY_PROTECTION_DCDL_VAL_0x0F_gc (0x0F<<4) /* 0.220V */


/* Battery Protection OverCurrent Detection Level Register-CCDL */
#define BATTERY_PROTECTION_CCDL_VAL_0x00_gc (0x00) /* 0.050V */
#define BATTERY_PROTECTION_CCDL_VAL_0x01_gc (0x01) /* 0.055V */
#define BATTERY_PROTECTION_CCDL_VAL_0x02_gc (0x02) /* 0.060V */
#define BATTERY_PROTECTION_CCDL_VAL_0x03_gc (0x03) /* 0.065V */
#define BATTERY_PROTECTION_CCDL_VAL_0x04_gc (0x04) /* 0.070V */
#define BATTERY_PROTECTION_CCDL_VAL_0x05_gc (0x05) /* 0.080V */
#define BATTERY_PROTECTION_CCDL_VAL_0x06_gc (0x06) /* 0.090V */
#define BATTERY_PROTECTION_CCDL_VAL_0x07_gc (0x07) /* 0.100V */
#define BATTERY_PROTECTION_CCDL_VAL_0x08_gc (0x08) /* 0.110V */
#define BATTERY_PROTECTION_CCDL_VAL_0x09_gc (0x09) /* 0.120V */
#define BATTERY_PROTECTION_CCDL_VAL_0x0A_gc (0x0A) /* 0.130V */
#define BATTERY_PROTECTION_CCDL_VAL_0x0B_gc (0x0B) /* 0.140V */
#define BATTERY_PROTECTION_CCDL_VAL_0x0C_gc (0x0C) /* 0.160V */
#define BATTERY_PROTECTION_CCDL_VAL_0x0D_gc (0x0D) /* 0.180V */
#define BATTERY_PROTECTION_CCDL_VAL_0x0E_gc (0x0E) /* 0.200V */
#define BATTERY_PROTECTION_CCDL_VAL_0x0F_gc (0x0F) /* 0.220V */


/* Battery Protection Short-Circuit Detection Level Register-SCDL */
#define BATTERY_PROTECTION_SCDL_VAL_0x00_gc (0x00) /* 0.100V */
#define BATTERY_PROTECTION_SCDL_VAL_0x01_gc (0x01) /* 0.110V */
#define BATTERY_PROTECTION_SCDL_VAL_0x02_gc (0x02) /* 0.120V */
#define BATTERY_PROTECTION_SCDL_VAL_0x03_gc (0x03) /* 0.130V */
#define BATTERY_PROTECTION_SCDL_VAL_0x04_gc (0x04) /* 0.140V */
#define BATTERY_PROTECTION_SCDL_VAL_0x05_gc (0x05) /* 0.160V */
#define BATTERY_PROTECTION_SCDL_VAL_0x06_gc (0x06) /* 0.180V */
#define BATTERY_PROTECTION_SCDL_VAL_0x07_gc (0x07) /* 0.200V */
#define BATTERY_PROTECTION_SCDL_VAL_0x08_gc (0x08) /* 0.220V */
#define BATTERY_PROTECTION_SCDL_VAL_0x09_gc (0x09) /* 0.240V */
#define BATTERY_PROTECTION_SCDL_VAL_0x0A_gc (0x0A) /* 0.260V */
#define BATTERY_PROTECTION_SCDL_VAL_0x0B_gc (0x0B) /* 0.280V */
#define BATTERY_PROTECTION_SCDL_VAL_0x0C_gc (0x0C) /* 0.320V */
#define BATTERY_PROTECTION_SCDL_VAL_0x0D_gc (0x0D) /* 0.360V */
#define BATTERY_PROTECTION_SCDL_VAL_0x0E_gc (0x0E) /* 0.400V */
#define BATTERY_PROTECTION_SCDL_VAL_0x0F_gc (0x0F) /* 0.440V */


/* Battery Protection Deep Under Voltage Register-DUVT */
#define BATTERY_PROTECTION_DUVT_VAL_0x00_gc (0x00<<4) /* 750ms */
#define BATTERY_PROTECTION_DUVT_VAL_0x01_gc (0x01<<4) /* 1000ms */
#define BATTERY_PROTECTION_DUVT_VAL_0x02_gc (0x02<<4) /* 1250ms */
#define BATTERY_PROTECTION_DUVT_VAL_0x03_gc (0x03<<4) /* 1500ms */


/* Battery Protection Deep Under Voltage Register-DUDL */
#define BATTERY_PROTECTION_DUDL_VAL_0x00_gc (0x00) /* 4.71V */
#define BATTERY_PROTECTION_DUDL_VAL_0x01_gc (0x01) /* 5.03V */
#define BATTERY_PROTECTION_DUDL_VAL_0x02_gc (0x02) /* 5.34V */
#define BATTERY_PROTECTION_DUDL_VAL_0x03_gc (0x03) /* 5.66V */
#define BATTERY_PROTECTION_DUDL_VAL_0x04_gc (0x04) /* 5.97V */
#define BATTERY_PROTECTION_DUDL_VAL_0x05_gc (0x05) /* 6.29V */
#define BATTERY_PROTECTION_DUDL_VAL_0x06_gc (0x06) /* 6.60V */
#define BATTERY_PROTECTION_DUDL_VAL_0x07_gc (0x07) /* 6.91V */
#define BATTERY_PROTECTION_DUDL_VAL_0x08_gc (0x08) /* 7.23V */
#define BATTERY_PROTECTION_DUDL_VAL_0x09_gc (0x09) /* 7.54V */
#define BATTERY_PROTECTION_DUDL_VAL_0x0A_gc (0x0A) /* 7.86V */
#define BATTERY_PROTECTION_DUDL_VAL_0x0B_gc (0x0B) /* 8.17V */
#define BATTERY_PROTECTION_DUDL_VAL_0x0C_gc (0x0C) /* 8.49V */
#define BATTERY_PROTECTION_DUDL_VAL_0x0D_gc (0x0D) /* 8.80V */
#define BATTERY_PROTECTION_DUDL_VAL_0x0E_gc (0x0E) /* 9.11V */
#define BATTERY_PROTECTION_DUDL_VAL_0x0F_gc (0x0F) /* 9.43V */


/* Deep Under-voltage Early Warning Interrupt Flag */
#define BATTERY_PROTECTION_DUVIF_CLEAR_gc (0x00) /* Deep Under-voltage Early Warning Interrupt Flag - CLEAR */
#define BATTERY_PROTECTION_DUVIF_SET_gc   (0x80) /* Deep Under-voltage Early Warning Interrupt Flag - SET */


/* Charge Over-current Protection Activated Interrupt Flag */
#define BATTERY_PROTECTION_COCIF_CLEAR_gc (0x00) /* Charge Over-current Protection Activated Interrupt Flag - CLEAR */
#define BATTERY_PROTECTION_COCIF_SET_gc   (0x40) /* Charge Over-current Protection Activated Interrupt Flag - SET */


/* Battery Protection Interrupt Register-DOCIF */
#define BATTERY_PROTECTION_DOCIF_CLEAR_gc (0x00) /* Battery Protection Interrupt Register-DOCIF - CLEAR */
#define BATTERY_PROTECTION_DOCIF_SET_gc   (0x20) /* Battery Protection Interrupt Register-DOCIF - SET */


/* Battery Protection Interrupt Register-SCIF */
#define BATTERY_PROTECTION_SCIF_CLEAR_gc (0x00) /* Battery Protection Interrupt Register-SCIF - CLEAR */
#define BATTERY_PROTECTION_SCIF_SET_gc   (0x10) /* Battery Protection Interrupt Register-SCIF - SET */


/* Deep Under-voltage Early Warning Interrupt Enable */
#define BATTERY_PROTECTION_DUVIE_CLEAR_gc (0x00) /* Deep Under-voltage Early Warning Interrupt Enable - CLEAR */
#define BATTERY_PROTECTION_DUVIE_SET_gc   (0x08) /* Deep Under-voltage Early Warning Interrupt Enable - SET */


/* Battery Protection Interrupt Register-COCIE */
#define BATTERY_PROTECTION_COCIE_CLEAR_gc (0x00) /* Battery Protection Interrupt Register-COCIE - CLEAR */
#define BATTERY_PROTECTION_COCIE_SET_gc   (0x04) /* Battery Protection Interrupt Register-COCIE - SET */


/* Battery Protection Interrupt Register-DOCIE */
#define BATTERY_PROTECTION_DOCIE_CLEAR_gc (0x00) /* Battery Protection Interrupt Register-DOCIE - CLEAR */
#define BATTERY_PROTECTION_DOCIE_SET_gc   (0x02) /* Battery Protection Interrupt Register-DOCIE - SET */


/* Battery Protection Interrupt Register-SCIE */
#define BATTERY_PROTECTION_SCIE_CLEAR_gc (0x00) /* Battery Protection Interrupt Register-SCIE - CLEAR */
#define BATTERY_PROTECTION_SCIE_SET_gc   (0x01) /* Battery Protection Interrupt Register-SCIE - SET */


/*
--------------------------------------------------------------------------------
FET - FET Control
--------------------------------------------------------------------------------
*/


/* Pulse Width Modulation of OC output */
#define FET_PWMOC_CLEAR_gc (0x00) /* Pulse Width Modulation of OC output - CLEAR */
#define FET_PWMOC_SET_gc   (0x20) /* Pulse Width Modulation of OC output - SET */


/* Pulse Width Modulation Modulation of OPC output */
#define FET_PWMOPC_CLEAR_gc (0x00) /* Pulse Width Modulation Modulation of OPC output - CLEAR */
#define FET_PWMOPC_SET_gc   (0x10) /* Pulse Width Modulation Modulation of OPC output - SET */


/* Current Protection Status */
#define FET_CPS_CLEAR_gc (0x00) /* Current Protection Status - CLEAR */
#define FET_CPS_SET_gc   (0x08) /* Current Protection Status - SET */


/* Discharge FET Enable */
#define FET_DFE_CLEAR_gc (0x00) /* Discharge FET Enable - CLEAR */
#define FET_DFE_SET_gc   (0x04) /* Discharge FET Enable - SET */


/* Charge FET Enable */
#define FET_CFE_CLEAR_gc (0x00) /* Charge FET Enable - CLEAR */
#define FET_CFE_SET_gc   (0x02) /* Charge FET Enable - SET */


/* Precharge FET disable */
#define FET_PFD_CLEAR_gc (0x00) /* Precharge FET disable - CLEAR */
#define FET_PFD_SET_gc   (0x01) /* Precharge FET disable - SET */


/*
--------------------------------------------------------------------------------
COULOMB_COUNTER - Coulomb Counter
--------------------------------------------------------------------------------
*/


/* When the CADEN bit is cleared (zero), the CC-ADC is disabled. When the CADEN bit is set (one), the CC-ADC will continuously measure the voltage drop over the external sense resistor RSENSE. In Power-down, only the Regular Current detection is active. In Power-off, the CC-ADC is always disabled. */
#define COULOMB_COUNTER_CADEN_CLEAR_gc (0x00) /* When the CADEN bit is cleared (zero), the CC-ADC is disabled. When the CADEN bit is set (one), the CC-ADC will continuously measure the voltage drop over the external sense resistor RSENSE. In Power-down, only the Regular Current detection is active. In Power-off, the CC-ADC is always disabled. - CLEAR */
#define COULOMB_COUNTER_CADEN_SET_gc   (0x80) /* When the CADEN bit is cleared (zero), the CC-ADC is disabled. When the CADEN bit is set (one), the CC-ADC will continuously measure the voltage drop over the external sense resistor RSENSE. In Power-down, only the Regular Current detection is active. In Power-off, the CC-ADC is always disabled. - SET */


/* CC_ADC Update Busy */
#define COULOMB_COUNTER_CADUB_CLEAR_gc (0x00) /* CC_ADC Update Busy - CLEAR */
#define COULOMB_COUNTER_CADUB_SET_gc   (0x20) /* CC_ADC Update Busy - SET */


/* CC_ADC Accumulate Current Select Bits */
#define COULOMB_COUNTER_CADAS_VAL_0x00_gc (0x00<<3) /* 125ms */
#define COULOMB_COUNTER_CADAS_VAL_0x01_gc (0x01<<3) /* 250ms */
#define COULOMB_COUNTER_CADAS_VAL_0x02_gc (0x02<<3) /* 500ms */
#define COULOMB_COUNTER_CADAS_VAL_0x03_gc (0x03<<3) /* 1000ms */


/* The CADSI bits determine the current sampling interval for the Regular Current detection in Power-down mode. The actual settings remain to be determined. */
#define COULOMB_COUNTER_CADSI_VAL_0x00_gc (0x00<<1) /* 125ms */
#define COULOMB_COUNTER_CADSI_VAL_0x01_gc (0x01<<1) /* 250ms */
#define COULOMB_COUNTER_CADSI_VAL_0x02_gc (0x02<<1) /* 500ms */
#define COULOMB_COUNTER_CADSI_VAL_0x03_gc (0x03<<1) /* 1000ms */


/* When the CADSE bit is written to one, the ongoing CC-ADC conversion is aborted, and the CC-ADC enters Regular Current detection mode. */
#define COULOMB_COUNTER_CADSE_CLEAR_gc (0x00) /* When the CADSE bit is written to one, the ongoing CC-ADC conversion is aborted, and the CC-ADC enters Regular Current detection mode. - CLEAR */
#define COULOMB_COUNTER_CADSE_SET_gc   (0x01) /* When the CADSE bit is written to one, the ongoing CC-ADC conversion is aborted, and the CC-ADC enters Regular Current detection mode. - SET */


/* CC-ADC Control and Status Register B-CADACIE */
#define COULOMB_COUNTER_CADACIE_CLEAR_gc (0x00) /* CC-ADC Control and Status Register B-CADACIE - CLEAR */
#define COULOMB_COUNTER_CADACIE_SET_gc   (0x40) /* CC-ADC Control and Status Register B-CADACIE - SET */


/* Regular Current Interrupt Enable */
#define COULOMB_COUNTER_CADRCIE_CLEAR_gc (0x00) /* Regular Current Interrupt Enable - CLEAR */
#define COULOMB_COUNTER_CADRCIE_SET_gc   (0x20) /* Regular Current Interrupt Enable - SET */


/* CAD Instantenous Current Interrupt Enable */
#define COULOMB_COUNTER_CADICIE_CLEAR_gc (0x00) /* CAD Instantenous Current Interrupt Enable - CLEAR */
#define COULOMB_COUNTER_CADICIE_SET_gc   (0x10) /* CAD Instantenous Current Interrupt Enable - SET */


/* CC-ADC Accumulate Current Interrupt Flag */
#define COULOMB_COUNTER_CADACIF_CLEAR_gc (0x00) /* CC-ADC Accumulate Current Interrupt Flag - CLEAR */
#define COULOMB_COUNTER_CADACIF_SET_gc   (0x04) /* CC-ADC Accumulate Current Interrupt Flag - SET */


/* CC-ADC Accumulate Current Interrupt Flag */
#define COULOMB_COUNTER_CADRCIF_CLEAR_gc (0x00) /* CC-ADC Accumulate Current Interrupt Flag - CLEAR */
#define COULOMB_COUNTER_CADRCIF_SET_gc   (0x02) /* CC-ADC Accumulate Current Interrupt Flag - SET */


/* CC-ADC Instantaneous Current Interrupt Flag */
#define COULOMB_COUNTER_CADICIF_CLEAR_gc (0x00) /* CC-ADC Instantaneous Current Interrupt Flag - CLEAR */
#define COULOMB_COUNTER_CADICIF_SET_gc   (0x01) /* CC-ADC Instantaneous Current Interrupt Flag - SET */


/*
--------------------------------------------------------------------------------
CELL_BALANCING - Cell Balancing
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


/* JTAG Disable */
#define CPU_JTD_CLEAR_gc (0x00) /* JTAG Disable - CLEAR */
#define CPU_JTD_SET_gc   (0x80) /* JTAG Disable - SET */


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
#define CPU_BODRF_CLEAR_gc (0x00) /* Brown-out Reset Flag - CLEAR */
#define CPU_BODRF_SET_gc   (0x04) /* Brown-out Reset Flag - SET */


/* External Reset Flag */
#define CPU_EXTRF_CLEAR_gc (0x00) /* External Reset Flag - CLEAR */
#define CPU_EXTRF_SET_gc   (0x02) /* External Reset Flag - SET */


/* Power-on reset flag */
#define CPU_PORF_CLEAR_gc (0x00) /* Power-on reset flag - CLEAR */
#define CPU_PORF_SET_gc   (0x01) /* Power-on reset flag - SET */


/* Sleep Mode Select bits */
#define CPU_SM_IDLE_gc     (0x00<<1) /* Idle */
#define CPU_SM_ADC_gc      (0x01<<1) /* ADC Noise Reduction (If Available) */
#define CPU_SM_PDOWN_gc    (0x02<<1) /* Power Down */
#define CPU_SM_PSAVE_gc    (0x03<<1) /* Power Save */
#define CPU_SM_POFF_gc     (0x04<<1) /* Power Off */
#define CPU_SM_VAL_0x05_gc (0x05<<1) /* Reserved */
#define CPU_SM_VAL_0x06_gc (0x06<<1) /* Reserved */
#define CPU_SM_VAL_0x07_gc (0x07<<1) /* Reserved */


/* Sleep Enable */
#define CPU_SE_CLEAR_gc (0x00) /* Sleep Enable - CLEAR */
#define CPU_SE_SET_gc   (0x01) /* Sleep Enable - SET */


/* 32 kHz Crystal Oscillator Enable */
#define CPU_XOE_CLEAR_gc (0x00) /* 32 kHz Crystal Oscillator Enable - CLEAR */
#define CPU_XOE_SET_gc   (0x02) /* 32 kHz Crystal Oscillator Enable - SET */


/* Asynchronous Clock Select */
#define CPU_ACS_CLEAR_gc (0x00) /* Asynchronous Clock Select - CLEAR */
#define CPU_ACS_SET_gc   (0x01) /* Asynchronous Clock Select - SET */


/* Power Reduction TWI */
#define CPU_PRTWI_CLEAR_gc (0x00) /* Power Reduction TWI - CLEAR */
#define CPU_PRTWI_SET_gc   (0x08) /* Power Reduction TWI - SET */


/* Power Reduction Timer/Counter1 */
#define CPU_PRTIM1_CLEAR_gc (0x00) /* Power Reduction Timer/Counter1 - CLEAR */
#define CPU_PRTIM1_SET_gc   (0x04) /* Power Reduction Timer/Counter1 - SET */


/* Power Reduction Timer/Counter0 */
#define CPU_PRTIM0_CLEAR_gc (0x00) /* Power Reduction Timer/Counter0 - CLEAR */
#define CPU_PRTIM0_SET_gc   (0x02) /* Power Reduction Timer/Counter0 - SET */


/* Power Reduction V-ADC */
#define CPU_PRVADC_CLEAR_gc (0x00) /* Power Reduction V-ADC - CLEAR */
#define CPU_PRVADC_SET_gc   (0x01) /* Power Reduction V-ADC - SET */


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
TC8 - Timer/Counter, 8-bit
--------------------------------------------------------------------------------
*/


/* Force Output Compare */
#define TC0_TCCR0A_COM0A_gc(x) ((x<<6) & 0xC0)

/* Timer/Counter0 Control Register-COM0B */
#define TC0_TCCR0A_COM0B_gc(x) ((x<<4) & 0x30)

/* Clock Select0 bits */
#define TC0_TCCR0A_WGM0_gc(x) (x & 0x03)

/* Force Output Compare */
#define TC0_FOC0A_CLEAR_gc (0x00) /* Force Output Compare - CLEAR */
#define TC0_FOC0A_SET_gc   (0x80) /* Force Output Compare - SET */


/* Waveform Generation Mode */
#define TC0_FOC0B_CLEAR_gc (0x00) /* Waveform Generation Mode - CLEAR */
#define TC0_FOC0B_SET_gc   (0x40) /* Waveform Generation Mode - SET */


/* Timer/Counter0 Control Register-WGM02 */
#define TC0_WGM02_CLEAR_gc (0x00) /* Timer/Counter0 Control Register-WGM02 - CLEAR */
#define TC0_WGM02_SET_gc   (0x08) /* Timer/Counter0 Control Register-WGM02 - SET */


/* Clock Select0 bits */
#define TC0_CS0_VAL_0x00_gc (0x00) /* No Clock Source (Stopped) */
#define TC0_CS0_VAL_0x01_gc (0x01) /* Running, No Prescaling */
#define TC0_CS0_VAL_0x02_gc (0x02) /* Running, CLK/8 */
#define TC0_CS0_VAL_0x03_gc (0x03) /* Running, CLK/64 */
#define TC0_CS0_VAL_0x04_gc (0x04) /* Running, CLK/256 */
#define TC0_CS0_VAL_0x05_gc (0x05) /* Running, CLK/1024 */
#define TC0_CS0_VAL_0x06_gc (0x06) /* Running, ExtClk Tx Falling Edge */
#define TC0_CS0_VAL_0x07_gc (0x07) /* Running, ExtClk Tx Rising Edge */


/* Output Compare Interrupt Enable */
#define TC0_OCIE0B_CLEAR_gc (0x00) /* Output Compare Interrupt Enable - CLEAR */
#define TC0_OCIE0B_SET_gc   (0x04) /* Output Compare Interrupt Enable - SET */


/* Output Compare Interrupt Enable */
#define TC0_OCIE0A_CLEAR_gc (0x00) /* Output Compare Interrupt Enable - CLEAR */
#define TC0_OCIE0A_SET_gc   (0x02) /* Output Compare Interrupt Enable - SET */


/* Overflow Interrupt Enable */
#define TC0_TOIE0_CLEAR_gc (0x00) /* Overflow Interrupt Enable - CLEAR */
#define TC0_TOIE0_SET_gc   (0x01) /* Overflow Interrupt Enable - SET */


/* Output Compare Flag */
#define TC0_OCF0B_CLEAR_gc (0x00) /* Output Compare Flag - CLEAR */
#define TC0_OCF0B_SET_gc   (0x04) /* Output Compare Flag - SET */


/* Output Compare Flag */
#define TC0_OCF0A_CLEAR_gc (0x00) /* Output Compare Flag - CLEAR */
#define TC0_OCF0A_SET_gc   (0x02) /* Output Compare Flag - SET */


/* Overflow Flag */
#define TC0_TOV0_CLEAR_gc (0x00) /* Overflow Flag - CLEAR */
#define TC0_TOV0_SET_gc   (0x01) /* Overflow Flag - SET */


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
TWI - Two Wire Serial Interface
--------------------------------------------------------------------------------
*/


/* TWI Bus Connect/Disconnect Interrupt Flag */
#define TWI_TWBCIF_CLEAR_gc (0x00) /* TWI Bus Connect/Disconnect Interrupt Flag - CLEAR */
#define TWI_TWBCIF_SET_gc   (0x80) /* TWI Bus Connect/Disconnect Interrupt Flag - SET */


/* TWI Bus Connect/Disconnect Interrupt Enable */
#define TWI_TWBCIE_CLEAR_gc (0x00) /* TWI Bus Connect/Disconnect Interrupt Enable - CLEAR */
#define TWI_TWBCIE_SET_gc   (0x40) /* TWI Bus Connect/Disconnect Interrupt Enable - SET */


/* TWI Bus Disconnect Time-out Period */
#define TWI_TWBDT_VAL_0x00_gc (0x00<<1) /* 250ms */
#define TWI_TWBDT_VAL_0x01_gc (0x01<<1) /* 500ms */
#define TWI_TWBDT_VAL_0x02_gc (0x02<<1) /* 1000ms */
#define TWI_TWBDT_VAL_0x03_gc (0x03<<1) /* 2000ms */


/* TWI Bus Connect/Disconnect Interrupt Polarity */
#define TWI_TWBCIP_CLEAR_gc (0x00) /* TWI Bus Connect/Disconnect Interrupt Polarity - CLEAR */
#define TWI_TWBCIP_SET_gc   (0x01) /* TWI Bus Connect/Disconnect Interrupt Polarity - SET */


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
BANDGAP - Bandgap
--------------------------------------------------------------------------------
*/


/* Setting the BGD bit to one will disable the bandgap voltage reference. This bit must be cleared before enabling CC-ADC or V-ADC, and must remain unset while either ADC is enabled. */
#define BANDGAP_BGD_CLEAR_gc (0x00) /* Setting the BGD bit to one will disable the bandgap voltage reference. This bit must be cleared before enabling CC-ADC or V-ADC, and must remain unset while either ADC is enabled. - CLEAR */
#define BANDGAP_BGD_SET_gc   (0x80) /* Setting the BGD bit to one will disable the bandgap voltage reference. This bit must be cleared before enabling CC-ADC or V-ADC, and must remain unset while either ADC is enabled. - SET */


/* BG Calibration of PTAT Current Bits */
#define BANDGAP_BGCCR_BGCC_gc(x) (x & 0x3F)

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


/* EEPROM Master Programming Enable */
#define EEPROM_EEMPE_CLEAR_gc (0x00) /* EEPROM Master Programming Enable - CLEAR */
#define EEPROM_EEMPE_SET_gc   (0x04) /* EEPROM Master Programming Enable - SET */


/* EEPROM Programming Enable */
#define EEPROM_EEPE_CLEAR_gc (0x00) /* EEPROM Programming Enable - CLEAR */
#define EEPROM_EEPE_SET_gc   (0x02) /* EEPROM Programming Enable - SET */


/* EEPROM Read Enable */
#define EEPROM_EERE_CLEAR_gc (0x00) /* EEPROM Read Enable - CLEAR */
#define EEPROM_EERE_SET_gc   (0x01) /* EEPROM Read Enable - SET */

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


/* ADC - Analog-to-Digital Converter (0x0000) */
#define ADC_BASE                 _SFR_MEM16(0x0000) /* ADC Base Address */
#define ADC_VADC                 _SFR_MEM16(0x0078) /* VADC Data Register  Bytes */
#define ADC_VADCL                _SFR_MEM8 (0x0078) /* VADC Data Register  Bytes LOW BYTE */
#define ADC_VADCH                _SFR_MEM8 (0x0079) /* VADC Data Register  Bytes HIGH BYTE */
#define ADC_VADCSR               _SFR_MEM8 (0x007A) /* The VADC Control and Status register */
#define ADC_VADMUX               _SFR_MEM8 (0x007C) /* The VADC multiplexer Selection Register */

/* EXINT - External Interrupts (0x0000) */
#define EXINT_BASE               _SFR_MEM8 (0x0000) /* EXINT Base Address */
#define EXINT_PCIFR              _SFR_MEM8 (0x003B) /* Pin Change Interrupt Flag Register */
#define EXINT_EIFR               _SFR_MEM8 (0x003C) /* External Interrupt Flag Register */
#define EXINT_EIMSK              _SFR_MEM8 (0x003D) /* External Interrupt Mask Register */
#define EXINT_PCICR              _SFR_MEM8 (0x0068) /* Pin Change Interrupt Control Register */
#define EXINT_EICRA              _SFR_MEM8 (0x0069) /* External Interrupt Control Register */
#define EXINT_PCMSK0             _SFR_MEM8 (0x006B) /* Pin Change Enable Mask Register 0 */
#define EXINT_PCMSK1             _SFR_MEM8 (0x006C) /* Pin Change Enable Mask Register 1 */

/* TC1 - Timer/Counter, 16-bit (0x0000) */
#define TC16_BASE                _SFR_MEM8 (0x0000) /* TC16 Base Address */
#define TC16_TIFR1               _SFR_MEM8 (0x0036) /* Timer/Counter Interrupt Flag register */
#define TC16_GTCCR               _SFR_MEM8 (0x0043) /* General Timer/Counter Control Register */
#define TC16_TIMSK1              _SFR_MEM8 (0x006F) /* Timer/Counter Interrupt Mask Register */
#define TC16_TCCR1B              _SFR_MEM8 (0x0081) /* Timer/Counter1 Control Register B */
#define TC16_TCNT1               _SFR_MEM16(0x0084) /* Timer Counter 1  Bytes */
#define TC16_TCNT1L              _SFR_MEM8 (0x0084) /* Timer Counter 1  Bytes LOW BYTE */
#define TC16_TCNT1H              _SFR_MEM8 (0x0085) /* Timer Counter 1  Bytes HIGH BYTE */
#define TC16_OCR1AL              _SFR_MEM8 (0x0088) /* Output Compare Register 1A Low byte */
#define TC16_OCR1AH              _SFR_MEM8 (0x0089) /* Output Compare Register 1A High byte */

/* WAKEUP_TIMER - Wakeup Timer (0x0000) */
#define WAKEUP_TIMER_BASE        _SFR_MEM8 (0x0000) /* WAKEUP_TIMER Base Address */
#define WAKEUP_TIMER_WUTCSR      _SFR_MEM8 (0x0062) /* Wake-up Timer Control Register */

/* BATTERY_PROTECTION - Battery Protection (0x0000) */
#define BATTERY_PROTECTION_BASE  _SFR_MEM8 (0x0000) /* BATTERY_PROTECTION Base Address */
#define BATTERY_PROTECTION_BPIR  _SFR_MEM8 (0x00F2) /* Battery Protection Interrupt Register */
#define BATTERY_PROTECTION_BPDUV _SFR_MEM8 (0x00F3) /* Battery Protection Deep Under Voltage Register */
#define BATTERY_PROTECTION_BPSCD _SFR_MEM8 (0x00F4) /* Battery Protection Short-Circuit Detection Level Register */
#define BATTERY_PROTECTION_BPOCD _SFR_MEM8 (0x00F5) /* Battery Protection OverCurrent Detection Level Register */
#define BATTERY_PROTECTION_CBPTR _SFR_MEM8 (0x00F6) /* Current Battery Protection Timing Register */
#define BATTERY_PROTECTION_BPCR  _SFR_MEM8 (0x00F7) /* Battery Protection Control Register */
#define BATTERY_PROTECTION_BPPLR _SFR_MEM8 (0x00F8) /* Battery Protection Parameter Lock Register */

/* FET - FET Control (0x0000) */
#define FET_BASE                 _SFR_MEM8 (0x0000) /* FET Base Address */
#define FET_FCSR                 _SFR_MEM8 (0x00F0) 

/* COULOMB_COUNTER - Coulomb Counter (0x0000) */
#define COULOMB_COUNTER_BASE     _SFR_MEM8 (0x0000) /* COULOMB_COUNTER Base Address */
#define COULOMB_COUNTER_CADAC0   _SFR_MEM8 (0x00E0) /* ADC Accumulate Current */
#define COULOMB_COUNTER_CADAC1   _SFR_MEM8 (0x00E1) /* ADC Accumulate Current */
#define COULOMB_COUNTER_CADAC2   _SFR_MEM8 (0x00E2) /* ADC Accumulate Current */
#define COULOMB_COUNTER_CADAC3   _SFR_MEM8 (0x00E3) /* ADC Accumulate Current */
#define COULOMB_COUNTER_CADCSRA  _SFR_MEM8 (0x00E4) /* CC-ADC Control and Status Register A */
#define COULOMB_COUNTER_CADCSRB  _SFR_MEM8 (0x00E5) /* CC-ADC Control and Status Register B */
#define COULOMB_COUNTER_CADRCC   _SFR_MEM8 (0x00E6) /* CC-ADC Regular Charge Current */
#define COULOMB_COUNTER_CADRDC   _SFR_MEM8 (0x00E7) /* CC-ADC Regular Discharge Current */
#define COULOMB_COUNTER_CADIC    _SFR_MEM16(0x00E8) /* CC-ADC Instantaneous Current */
#define COULOMB_COUNTER_CADICL   _SFR_MEM8 (0x00E8) /* CC-ADC Instantaneous Current LOW BYTE */
#define COULOMB_COUNTER_CADICH   _SFR_MEM8 (0x00E9) /* CC-ADC Instantaneous Current HIGH BYTE */

/* CELL_BALANCING - Cell Balancing (0x0000) */
#define CELL_BALANCING_BASE      _SFR_MEM8 (0x0000) /* CELL_BALANCING Base Address */
#define CELL_BALANCING_CBCR      _SFR_MEM8 (0x00F1) /* Cell Balancing Control Register */

/* CPU - CPU Registers (0x0000) */
#define CPU_BASE                 _SFR_MEM8 (0x0000) /* CPU Base Address */
#define CPU_GPIOR0               _SFR_MEM8 (0x003E) /* General Purpose IO Register 0 */
#define CPU_GPIOR1               _SFR_MEM8 (0x004A) /* General Purpose IO Register 1 */
#define CPU_GPIOR2               _SFR_MEM8 (0x004B) /* General Purpose IO Register 2 */
#define CPU_SMCR                 _SFR_MEM8 (0x0053) /* Sleep Mode Control Register */
#define CPU_MCUSR                _SFR_MEM8 (0x0054) /* MCU Status Register */
#define CPU_MCUCR                _SFR_MEM8 (0x0055) /* MCU Control Register */
#define CPU_SP                   _SFR_MEM16(0x005D) /* Stack Pointer  */
#define CPU_SPL                  _SFR_MEM8 (0x005D) /* Stack Pointer  LOW BYTE */
#define CPU_SPH                  _SFR_MEM8 (0x005E) /* Stack Pointer  HIGH BYTE */
#define CPU_SREG                 _SFR_MEM8 (0x005F) /* Status Register */
#define CPU_PRR0                 _SFR_MEM8 (0x0064) /* Power Reduction Register 0 */
#define CPU_FOSCCAL              _SFR_MEM8 (0x0066) /* Fast Oscillator Calibration Value */
#define CPU_DIDR0                _SFR_MEM8 (0x007E) /* Digital Input Disable Register */
#define CPU_CCSR                 _SFR_MEM8 (0x00C0) /* Clock Control and Status Register */

/* WDT - Watchdog Timer (0x0000) */
#define WDT_BASE                 _SFR_MEM8 (0x0000) /* WDT Base Address */
#define WDT_WDTCSR               _SFR_MEM8 (0x0060) /* Watchdog Timer Control Register */

/* TC0 - Timer/Counter, 8-bit (0x0000) */
#define TC8_BASE                 _SFR_MEM8 (0x0000) /* TC8 Base Address */
#define TC8_TIFR0                _SFR_MEM8 (0x0035) /* Timer/Counter Interrupt Flag register */
#define TC8_TCCR0A               _SFR_MEM8 (0x0044) /* Timer/Counter0 Control Register */
#define TC8_TCCR0B               _SFR_MEM8 (0x0045) /* Timer/Counter0 Control Register */
#define TC8_TCNT0                _SFR_MEM8 (0x0046) /* Timer Counter 0 */
#define TC8_OCR0A                _SFR_MEM8 (0x0047) /* Output compare Register A */
#define TC8_OCR0B                _SFR_MEM8 (0x0048) /* Output compare Register B */
#define TC8_TIMSK0               _SFR_MEM8 (0x006E) /* Timer/Counter Interrupt Mask Register */

/* PORTA - I/O Port (0x0000) */
#define PORTAA_BASE              _SFR_MEM8 (0x0000) /* PORTAA Base Address */
#define PORTAA_PINA              _SFR_MEM8 (0x0020) /* Port A Input Pins */
#define PORTAA_DDRA              _SFR_MEM8 (0x0021) /* Port A Data Direction Register */
#define PORTAA_PORTA             _SFR_MEM8 (0x0022) /* Port A Data Register */

/* PORTB - I/O Port (0x0000) */
#define PORTBB_BASE              _SFR_MEM8 (0x0000) /* PORTBB Base Address */
#define PORTBB_PINB              _SFR_MEM8 (0x0023) /* Port B Input Pins */
#define PORTBB_DDRB              _SFR_MEM8 (0x0024) /* Port B Data Direction Register */
#define PORTBB_PORTB             _SFR_MEM8 (0x0025) /* Port B Data Register */

/* PORTC - I/O Port (0x0000) */
#define PORTCC_BASE              _SFR_MEM8 (0x0000) /* PORTCC Base Address */
#define PORTCC_PORTC             _SFR_MEM8 (0x0028) /* Port C Data Register */

/* PORTD - I/O Port (0x0000) */
#define PORTDD_BASE              _SFR_MEM8 (0x0000) /* PORTDD Base Address */
#define PORTDD_PIND              _SFR_MEM8 (0x0029) /* Input Pins, Port D */
#define PORTDD_DDRD              _SFR_MEM8 (0x002A) /* Data Direction Register, Port D */
#define PORTDD_PORTD             _SFR_MEM8 (0x002B) /* Data Register, Port D */

/* BOOT_LOAD - Bootloader (0x0000) */
#define BOOT_LOAD_BASE           _SFR_MEM8 (0x0000) /* BOOT_LOAD Base Address */
#define BOOT_LOAD_SPMCSR         _SFR_MEM8 (0x0057) /* Store Program Memory Control Register */

/* TWI - Two Wire Serial Interface (0x0000) */
#define TWI_BASE                 _SFR_MEM8 (0x0000) /* TWI Base Address */
#define TWI_TWBR                 _SFR_MEM8 (0x00B8) /* TWI Bit Rate register */
#define TWI_TWSR                 _SFR_MEM8 (0x00B9) /* TWI Status Register */
#define TWI_TWAR                 _SFR_MEM8 (0x00BA) /* TWI (Slave) Address register */
#define TWI_TWDR                 _SFR_MEM8 (0x00BB) /* TWI Data register */
#define TWI_TWCR                 _SFR_MEM8 (0x00BC) /* TWI Control Register */
#define TWI_TWAMR                _SFR_MEM8 (0x00BD) /* TWI (Slave) Address Mask Register */
#define TWI_TWBCSR               _SFR_MEM8 (0x00BE) /* TWI Bus Control and Status Register */

/* BANDGAP - Bandgap (0x0000) */
#define BANDGAP_BASE             _SFR_MEM8 (0x0000) /* BANDGAP Base Address */
#define BANDGAP_BGCCR            _SFR_MEM8 (0x00D0) /* Bandgap Calibration Register */
#define BANDGAP_BGCRR            _SFR_MEM8 (0x00D1) /* Bandgap Calibration of Resistor Ladder */

/* EEPROM - EEPROM (0x0000) */
#define EEPROM_BASE              _SFR_MEM8 (0x0000) /* EEPROM Base Address */
#define EEPROM_EECR              _SFR_MEM8 (0x003F) /* EEPROM Control Register */
#define EEPROM_EEDR              _SFR_MEM8 (0x0040) /* EEPROM Data Register */
#define EEPROM_EEAR              _SFR_MEM16(0x0041) /* EEPROM Address Register  Bytes */
#define EEPROM_EEARL             _SFR_MEM8 (0x0041) /* EEPROM Address Register  Bytes LOW BYTE */
#define EEPROM_EEARH             _SFR_MEM8 (0x0042) /* EEPROM Address Register  Bytes HIGH BYTE */

/* FUSE - Fuses (0x0000) */
#define FUSE_BASE                _SFR_MEM8 (0x0000) /* FUSE Base Address */
#define FUSE_LOW                 _SFR_MEM8 (0x0000) 
#define FUSE_HIGH                _SFR_MEM8 (0x0001) 

/* LOCKBIT - Lockbits (0x0000) */
#define LOCKBIT_BASE             _SFR_MEM8 (0x0000) /* LOCKBIT Base Address */
#define LOCKBIT_LOCKBIT          _SFR_MEM8 (0x0000) 
/* avr-libc typedef for avr/fuse.h */
typedef FUSE_t NVM_FUSES_t;

/*
================================================================================
Interrupt Vector Definitions
================================================================================
*/

/* Vector 0 is the reset vector */
#define None_RESET_vect_num         (0)                 
#define None_RESET_vect             _VECTOR(0)          /* External Pin, Power-on Reset, Brown-out Reset and Watchdog Reset */
#define None_BPINT_vect_num         (1)                 
#define None_BPINT_vect             _VECTOR(1)          /* Battery Protection Interrupt */
#define None_INT0_vect_num          (2)                 
#define None_INT0_vect              _VECTOR(2)          /* External Interrupt Request 0 */
#define None_INT1_vect_num          (3)                 
#define None_INT1_vect              _VECTOR(3)          /* External Interrupt Request 1 */
#define None_INT2_vect_num          (4)                 
#define None_INT2_vect              _VECTOR(4)          /* External Interrupt Request 2 */
#define None_INT3_vect_num          (5)                 
#define None_INT3_vect              _VECTOR(5)          /* External Interrupt Request 3 */
#define None_PCINT0_vect_num        (6)                 
#define None_PCINT0_vect            _VECTOR(6)          /* Pin Change Interrupt 0 */
#define None_PCINT1_vect_num        (7)                 
#define None_PCINT1_vect            _VECTOR(7)          /* Pin Change Interrupt 1 */
#define None_WDT_vect_num           (8)                 
#define None_WDT_vect               _VECTOR(8)          /* Watchdog Timeout Interrupt */
#define None_WAKE_UP_vect_num       (9)                 
#define None_WAKE_UP_vect           _VECTOR(9)          /* Wakeup timer overflow */
#define None_TIM1_COMP_vect_num     (10)                
#define None_TIM1_COMP_vect         _VECTOR(10)         /* Timer/Counter 1 Compare Match */
#define None_TIM1_OVF_vect_num      (11)                
#define None_TIM1_OVF_vect          _VECTOR(11)         /* Timer/Counter 1 Overflow */
#define None_TIM0_COMPA_vect_num    (12)                
#define None_TIM0_COMPA_vect        _VECTOR(12)         /* Timer/Counter0 Compare A Match */
#define None_TIM0_COMPB_vect_num    (13)                
#define None_TIM0_COMPB_vect        _VECTOR(13)         /* Timer/Counter0 Compare B Match */
#define None_TIM0_OVF_vect_num      (14)                
#define None_TIM0_OVF_vect          _VECTOR(14)         /* Timer/Counter0 Overflow */
#define None_TWI_BUS_CD_vect_num    (15)                
#define None_TWI_BUS_CD_vect        _VECTOR(15)         /* Two-Wire Bus Connect/Disconnect */
#define None_TWI_vect_num           (16)                
#define None_TWI_vect               _VECTOR(16)         /* Two-Wire Serial Interface */
#define None_VADC_vect_num          (17)                
#define None_VADC_vect              _VECTOR(17)         /* Voltage ADC Conversion Complete */
#define None_CCADC_CONV_vect_num    (18)                
#define None_CCADC_CONV_vect        _VECTOR(18)         /* Coulomb Counter ADC Conversion Complete */
#define None_CCADC_REG_CUR_vect_num (19)                
#define None_CCADC_REG_CUR_vect     _VECTOR(19)         /* Coloumb Counter ADC Regular Current */
#define None_CCADC_ACC_vect_num     (20)                
#define None_CCADC_ACC_vect         _VECTOR(20)         /* Coloumb Counter ADC Accumulator */
#define None_EE_READY_vect_num      (21)                
#define None_EE_READY_vect          _VECTOR(21)         /* EEPROM Ready */
#define None_SPM_READY_vect_num     (22)                
#define None_SPM_READY_vect         _VECTOR(22)         /* Store Program Memory Ready */

/* Vector Table Size */
#define _VECTOR_SIZE                (4)                 /* Size of individual vector. */
#define _VECTORS_SIZE               (23 * _VECTOR_SIZE) /* Size of all vectors */
/*
================================================================================
Constants
================================================================================
*/

#define PROGMEM_START            (0x0000)                                         
#define PROGMEM_SIZE             (0xA000)                                         
#define PROGMEM_END              (PROGMEM_START + PROGMEM_SIZE - 1)               

#define FLASH_START              (0x0000)                                         
#define FLASH_SIZE               (0xA000)                                         
#define FLASH_PAGE_SIZE          (0x0080)                                         
#define FLASH_END                (FLASH_START + FLASH_SIZE - 1)                   

#define BOOT_SECTION_1_START     (0x9E00)                                         
#define BOOT_SECTION_1_SIZE      (0x0200)                                         
#define BOOT_SECTION_1_PAGE_SIZE (0x0080)                                         
#define BOOT_SECTION_1_END       (BOOT_SECTION_1_START + BOOT_SECTION_1_SIZE - 1) 

#define BOOT_SECTION_2_START     (0x9C00)                                         
#define BOOT_SECTION_2_SIZE      (0x0400)                                         
#define BOOT_SECTION_2_PAGE_SIZE (0x0080)                                         
#define BOOT_SECTION_2_END       (BOOT_SECTION_2_START + BOOT_SECTION_2_SIZE - 1) 

#define BOOT_SECTION_3_START     (0x9800)                                         
#define BOOT_SECTION_3_SIZE      (0x0800)                                         
#define BOOT_SECTION_3_PAGE_SIZE (0x0080)                                         
#define BOOT_SECTION_3_END       (BOOT_SECTION_3_START + BOOT_SECTION_3_SIZE - 1) 

#define BOOT_SECTION_4_START     (0x9000)                                         
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
#define DATAMEM_SIZE        (0x0900)                               
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
#define IRAM_SIZE           (0x0800)                               
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
#define PORTD0 (0) 
#define PORTD1 (1) 

/*
================================================================================
Fuses/LockBits/Signatures
================================================================================
*/

/* ============ Fuses ============ */

#define FUSE_MEMORY_SIZE 1 

/* Fuse offset 0x00 */
#define SUT_CKSEL0 (unsigned char)~_BV(0) /* Clock Selection bit 0 */
#define SUT_CKSEL1 (unsigned char)~_BV(1) /* Clock Selection bit 1 */
#define SUT_CKSEL2 (unsigned char)~_BV(2) /* Clock Selection bit 2 */
#define BOOTRST    (unsigned char)~_BV(3) /* Boot Reset vector Enabled */
#define BOOTSZ0    (unsigned char)~_BV(4) /* Select boot size bit 0 */
#define BOOTSZ1    (unsigned char)~_BV(5) /* Select boot size bit 1 */
#define EESAVE     (unsigned char)~_BV(6) /* Preserve EEPROM through the Chip Erase cycle */
#define WDTON      (unsigned char)~_BV(7) /* Watchdog timer always on */

/* Fuse offset 0x01 */
#define JTAGEN (unsigned char)~_BV(0) /* JTAG Interface Enabled */
#define OCDEN  (unsigned char)~_BV(1) /* On-Chip Debug Enabled */


/* ========== Lock Bits ========== */
#define __LOCK_BITS_EXIST  


/* ========== Signature ========== */
#define SIGNATURE_0 (0x1E) 
#define SIGNATURE_1 (0x95) 
#define SIGNATURE_2 (0x07) 

#endif /* #ifdef _AVR_ATmega406_H_INCLUDED */
