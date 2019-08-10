/******************************************************************************
 *   This file is part of avr-libc3.                                          * 
 *                                                                            * 
 *   Automatically created by devtools/gen-ioheader-atdf.py (V0.91)           * 
 *                                                                            * 
 *   .atpack File: ATA5782.atdf                                               * 
 *   .ATDF File:   atdf/ATA5782.atdf                                          * 
 *   Version:      2.0.6                                                      * 
 *   Date:         2019-04-16                                                 * 
 *   Device:       ATA5782                                                    * 
 *   Architecture: AVR8                                                       * 
 *                                                                            * 
 *   Changelog:                                                               * 
 *                                                                            * 
 *    2.0.6 2019-04-16 :                                                      * 
 *        - Added isexecutable attribute to SRAM in ATtiny416auto.PIC.        * 
 *    2.0.2 2019-01-24 :                                                      * 
 *        - Succeeds Atmel.ATautomotive_DFP 1.2.118.                          * 
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
#  define _AVR_IOXXX_H_ "ioATA5782.h"
#else
#  error "Attempt to include more than one <avr/ioXXX.h> file."
#endif

#ifndef _AVR_ATA5782_H_INCLUDED
#  define _AVR_ATA5782_H_INCLUDED

/*
================================================================================
Ungrouped common register
================================================================================
*/

#define MCUCR  _SFR_MEM8 (0x2E) /* MCU Control Register */

#define MCUSR  _SFR_MEM8 (0x4B) /* MCU Status Register */

#define DWDR   _SFR_MEM8 (0x51) /* debugWire communication Register */

#define SMCR   _SFR_MEM8 (0x58) /* Sleep mode control Register */
#define CMCR   _SFR_MEM8 (0x59) /* Clock Management Control Register */
#define CMIMR  _SFR_MEM8 (0x5A) /* Clock Interrupt Mask Register */
#define CLPR   _SFR_MEM8 (0x5B) /* Clock Prescaler Register */
#define SPMCSR _SFR_MEM8 (0x5C) /* Store Program Memory Control and Status Register */
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
FUSE - 
--------------------------------------------------------------------------------
*/

typedef struct FUSE_struct
{
    register8_t LOW;
} FUSE_t;


/* Divide clock by 8 internally */
typedef enum FUSE_CKDIV8_enum
{
    FUSE_CKDIV8_CLEAR_gc = (0x00), /* Divide clock by 8 internally - CLEAR */
    FUSE_CKDIV8_SET_gc   = (0x80), /* Divide clock by 8 internally - SET */
} FUSE_CKDIV8_t;

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

/* Preserve EEPROM memory through the Chip Erase cycle */
typedef enum FUSE_EESAVE_enum
{
    FUSE_EESAVE_CLEAR_gc = (0x00), /* Preserve EEPROM memory through the Chip Erase cycle - CLEAR */
    FUSE_EESAVE_SET_gc   = (0x08), /* Preserve EEPROM memory through the Chip Erase cycle - SET */
} FUSE_EESAVE_t;

/* Select interrupt vector location */
typedef enum FUSE_BOOTRST_enum
{
    FUSE_BOOTRST_CLEAR_gc = (0x00), /* Select interrupt vector location - CLEAR */
    FUSE_BOOTRST_SET_gc   = (0x04), /* Select interrupt vector location - SET */
} FUSE_BOOTRST_t;

/* Disable external Reset */
typedef enum FUSE_RSTDISBL_enum
{
    FUSE_RSTDISBL_CLEAR_gc = (0x00), /* Disable external Reset - CLEAR */
    FUSE_RSTDISBL_SET_gc   = (0x02), /* Disable external Reset - SET */
} FUSE_RSTDISBL_t;

/* External Clock enable */
typedef enum FUSE_EXTCLKEN_enum
{
    FUSE_EXTCLKEN_CLEAR_gc = (0x00), /* External Clock enable - CLEAR */
    FUSE_EXTCLKEN_SET_gc   = (0x01), /* External Clock enable - SET */
} FUSE_EXTCLKEN_t;

/*
--------------------------------------------------------------------------------
LOCKBIT - 
--------------------------------------------------------------------------------
*/

typedef struct LOCKBIT_struct
{
    register8_t LOCKBIT;
} LOCKBIT_t;


/* Memory Lock */
typedef enum LOCKBIT_LB_enum
{
    LOCKBIT_LB_VAL_0x00_gc = (0x00), /* Further programming and verification disabled */
    LOCKBIT_LB_VAL_0x02_gc = (0x02), /* Further programming disabled */
    LOCKBIT_LB_VAL_0x03_gc = (0x03), /* No memory lock features enable */
} LOCKBIT_LB_t;

/* Application Protection */
typedef enum LOCKBIT_AP_enum
{
    LOCKBIT_AP_VAL_0x00_gc = (0x00<<2), /* LPM and SPM prohibited in Application Section */
    LOCKBIT_AP_VAL_0x04_gc = (0x04<<2), /* LPM prohibited in Application Section */
    LOCKBIT_AP_VAL_0x08_gc = (0x08<<2), /* SPM prohibited in Application Section */
    LOCKBIT_AP_VAL_0x0C_gc = (0x0C<<2), /* No lock on SPM and LPM in Application Section */
} LOCKBIT_AP_t;

/* Boot Loader Protection */
typedef enum LOCKBIT_BLP_enum
{
    LOCKBIT_BLP_VAL_0x00_gc = (0x00<<4), /* LPM and SPM prohibited in Boot Loader Section */
    LOCKBIT_BLP_VAL_0x10_gc = (0x10<<4), /* LPM prohibited in Boot Loader Section */
    LOCKBIT_BLP_VAL_0x20_gc = (0x20<<4), /* SPM prohibited in Boot Loader Section */
    LOCKBIT_BLP_VAL_0x30_gc = (0x30<<4), /* No lock on SPM and LPM in Boot Loader Section */
} LOCKBIT_BLP_t;

/*
--------------------------------------------------------------------------------
CHFLT - 
--------------------------------------------------------------------------------
*/

typedef struct CHFLT_struct
{
    register8_t rsv_0x00[169]; /* RESERVED REGISTER BLOCK */
    register8_t CHCR;          /* Channel Filter Configuration Register */
    register8_t CHDN;          /* Channel Filter Down Sampling Register */
} CHFLT_t;


/* ADC Down Sampling Configuration */
typedef enum CHFLT_ADCDN_enum
{
    CHFLT_ADCDN_CLEAR_gc = (0x00), /* ADC Down Sampling Configuration - CLEAR */
    CHFLT_ADCDN_SET_gc   = (0x20), /* ADC Down Sampling Configuration - SET */
} CHFLT_ADCDN_t;

/* Baseband Filter Down Sampling Ratio */
#define CHFLT_CHDN_BBDN_gc(x) (x & 0x1F)

/*
--------------------------------------------------------------------------------
CLK - 
--------------------------------------------------------------------------------
*/

typedef struct CLK_struct
{
    register8_t rsv_0x00[33];  /* RESERVED REGISTER BLOCK */
    register8_t PRR0;          /* Power Reduction Register 0 */
    register8_t PRR1;          /* Power Reduction Register 1 */
    register8_t PRR2;          /* Power Reduction Register 2 */
    register8_t RDPR;          /* Rx DSP power reduction register */
    register8_t rsv_0x25[158]; /* RESERVED REGISTER BLOCK */
    register8_t CLKOD;         /* Clock output divider settings Register */
    register8_t CLKOCR;        /* Clock output control Register */
    register8_t XFUSE;        
    register8_t SRCCAL;        /* Slow RC oscillator calibration Register */
    register8_t FRCCAL;        /* Fast RC oscillator calibration Register */
    register8_t CMSR;          /* Clock management status Register */
    register8_t CMOCR;         /* Clock management override control register */
} CLK_t;


/* Clock output driver enable */
typedef enum CLK_CLKOEN_enum
{
    CLK_CLKOEN_CLEAR_gc = (0x00), /* Clock output driver enable - CLEAR */
    CLK_CLKOEN_SET_gc   = (0x04), /* Clock output driver enable - SET */
} CLK_CLKOEN_t;

/* Clock output source */
#define CLK_CLKOCR_CLKOS_gc(x) (x & 0x03)

/* SRC Active */
typedef enum CLK_SRCACT_enum
{
    CLK_SRCACT_CLEAR_gc = (0x00), /* SRC Active - CLEAR */
    CLK_SRCACT_SET_gc   = (0x08), /* SRC Active - SET */
} CLK_SRCACT_t;

/* FRC Active */
typedef enum CLK_FRCACT_enum
{
    CLK_FRCACT_CLEAR_gc = (0x00), /* FRC Active - CLEAR */
    CLK_FRCACT_SET_gc   = (0x04), /* FRC Active - SET */
} CLK_FRCACT_t;

/* SRC Always On */
typedef enum CLK_SRCAO_enum
{
    CLK_SRCAO_CLEAR_gc = (0x00), /* SRC Always On - CLEAR */
    CLK_SRCAO_SET_gc   = (0x02), /* SRC Always On - SET */
} CLK_SRCAO_t;

/* FRC Always On */
typedef enum CLK_FRCAO_enum
{
    CLK_FRCAO_CLEAR_gc = (0x00), /* FRC Always On - CLEAR */
    CLK_FRCAO_SET_gc   = (0x01), /* FRC Always On - SET */
} CLK_FRCAO_t;

/* External clock fail */
typedef enum CLK_ECF_enum
{
    CLK_ECF_CLEAR_gc = (0x00), /* External clock fail - CLEAR */
    CLK_ECF_SET_gc   = (0x01), /* External clock fail - SET */
} CLK_ECF_t;

/* Fast RC oscillator temperature compensation */
typedef enum CLK_FRCTC_enum
{
    CLK_FRCTC_CLEAR_gc = (0x00), /* Fast RC oscillator temperature compensation - CLEAR */
    CLK_FRCTC_SET_gc   = (0x20), /* Fast RC oscillator temperature compensation - SET */
} CLK_FRCTC_t;

/* Fast RC oscillator calibration */
#define CLK_FRCCAL_FRCCAL_gc(x) (x & 0x1F)

/* Power Reduction Clock Output */
typedef enum CLK_PRCO_enum
{
    CLK_PRCO_CLEAR_gc = (0x00), /* Power Reduction Clock Output - CLEAR */
    CLK_PRCO_SET_gc   = (0x20), /* Power Reduction Clock Output - SET */
} CLK_PRCO_t;

/* Power Reduction Voltage Monitor */
typedef enum CLK_PRVM_enum
{
    CLK_PRVM_CLEAR_gc = (0x00), /* Power Reduction Voltage Monitor - CLEAR */
    CLK_PRVM_SET_gc   = (0x10), /* Power Reduction Voltage Monitor - SET */
} CLK_PRVM_t;

/* Power Reduction CRC */
typedef enum CLK_PRCRC_enum
{
    CLK_PRCRC_CLEAR_gc = (0x00), /* Power Reduction CRC - CLEAR */
    CLK_PRCRC_SET_gc   = (0x08), /* Power Reduction CRC - SET */
} CLK_PRCRC_t;

/* Power Reduction Transmit DSP Control */
typedef enum CLK_PRTXDC_enum
{
    CLK_PRTXDC_CLEAR_gc = (0x00), /* Power Reduction Transmit DSP Control - CLEAR */
    CLK_PRTXDC_SET_gc   = (0x04), /* Power Reduction Transmit DSP Control - SET */
} CLK_PRTXDC_t;

/* Power Reduction Receive DSP Control */
typedef enum CLK_PRRXDC_enum
{
    CLK_PRRXDC_CLEAR_gc = (0x00), /* Power Reduction Receive DSP Control - CLEAR */
    CLK_PRRXDC_SET_gc   = (0x02), /* Power Reduction Receive DSP Control - SET */
} CLK_PRRXDC_t;

/* Power Reduction Serial Peripheral Interface */
typedef enum CLK_PRSPI_enum
{
    CLK_PRSPI_CLEAR_gc = (0x00), /* Power Reduction Serial Peripheral Interface - CLEAR */
    CLK_PRSPI_SET_gc   = (0x01), /* Power Reduction Serial Peripheral Interface - SET */
} CLK_PRSPI_t;

/* Power Reduction Timer 5 */
typedef enum CLK_PRT5_enum
{
    CLK_PRT5_CLEAR_gc = (0x00), /* Power Reduction Timer 5 - CLEAR */
    CLK_PRT5_SET_gc   = (0x10), /* Power Reduction Timer 5 - SET */
} CLK_PRT5_t;

/* Power Reduction Timer 4 */
typedef enum CLK_PRT4_enum
{
    CLK_PRT4_CLEAR_gc = (0x00), /* Power Reduction Timer 4 - CLEAR */
    CLK_PRT4_SET_gc   = (0x08), /* Power Reduction Timer 4 - SET */
} CLK_PRT4_t;

/* Power Reduction Timer 3 */
typedef enum CLK_PRT3_enum
{
    CLK_PRT3_CLEAR_gc = (0x00), /* Power Reduction Timer 3 - CLEAR */
    CLK_PRT3_SET_gc   = (0x04), /* Power Reduction Timer 3 - SET */
} CLK_PRT3_t;

/* Power Reduction Timer 2 */
typedef enum CLK_PRT2_enum
{
    CLK_PRT2_CLEAR_gc = (0x00), /* Power Reduction Timer 2 - CLEAR */
    CLK_PRT2_SET_gc   = (0x02), /* Power Reduction Timer 2 - SET */
} CLK_PRT2_t;

/* Power Reduction Timer 1 */
typedef enum CLK_PRT1_enum
{
    CLK_PRT1_CLEAR_gc = (0x00), /* Power Reduction Timer 1 - CLEAR */
    CLK_PRT1_SET_gc   = (0x01), /* Power Reduction Timer 1 - SET */
} CLK_PRT1_t;

/* Power Reduction Sequencer State Machine */
typedef enum CLK_PRSSM_enum
{
    CLK_PRSSM_CLEAR_gc = (0x00), /* Power Reduction Sequencer State Machine - CLEAR */
    CLK_PRSSM_SET_gc   = (0x80), /* Power Reduction Sequencer State Machine - SET */
} CLK_PRSSM_t;

/* Power Reduction RSSI Buffer */
typedef enum CLK_PRRS_enum
{
    CLK_PRRS_CLEAR_gc = (0x00), /* Power Reduction RSSI Buffer - CLEAR */
    CLK_PRRS_SET_gc   = (0x20), /* Power Reduction RSSI Buffer - SET */
} CLK_PRRS_t;

/* Power Reduction ID Scan */
typedef enum CLK_PRIDS_enum
{
    CLK_PRIDS_CLEAR_gc = (0x00), /* Power Reduction ID Scan - CLEAR */
    CLK_PRIDS_SET_gc   = (0x10), /* Power Reduction ID Scan - SET */
} CLK_PRIDS_t;

/* Power Reduction Data FIFO */
typedef enum CLK_PRDF_enum
{
    CLK_PRDF_CLEAR_gc = (0x00), /* Power Reduction Data FIFO - CLEAR */
    CLK_PRDF_SET_gc   = (0x08), /* Power Reduction Data FIFO - SET */
} CLK_PRDF_t;

/* Power Reduction Preamble/RSSI FIFO */
typedef enum CLK_PRSF_enum
{
    CLK_PRSF_CLEAR_gc = (0x00), /* Power Reduction Preamble/RSSI FIFO - CLEAR */
    CLK_PRSF_SET_gc   = (0x04), /* Power Reduction Preamble/RSSI FIFO - SET */
} CLK_PRSF_t;

/* Power Reduction Rx Buffer A */
typedef enum CLK_PRXA_enum
{
    CLK_PRXA_CLEAR_gc = (0x00), /* Power Reduction Rx Buffer A - CLEAR */
    CLK_PRXA_SET_gc   = (0x02), /* Power Reduction Rx Buffer A - SET */
} CLK_PRXA_t;

/* Power Reduction Rx Buffer B */
typedef enum CLK_PRXB_enum
{
    CLK_PRXB_CLEAR_gc = (0x00), /* Power Reduction Rx Buffer B - CLEAR */
    CLK_PRXB_SET_gc   = (0x01), /* Power Reduction Rx Buffer B - SET */
} CLK_PRXB_t;

/* Rx DSP power reduction register(RDPR) busy flag */
typedef enum CLK_RDPRF_enum
{
    CLK_RDPRF_CLEAR_gc = (0x00), /* Rx DSP power reduction register(RDPR) busy flag - CLEAR */
    CLK_RDPRF_SET_gc   = (0x80), /* Rx DSP power reduction register(RDPR) busy flag - SET */
} CLK_RDPRF_t;

/* Automatic Rx DSP Power Reduction Flag */
typedef enum CLK_ARDPRF_enum
{
    CLK_ARDPRF_CLEAR_gc = (0x00), /* Automatic Rx DSP Power Reduction Flag - CLEAR */
    CLK_ARDPRF_SET_gc   = (0x40), /* Automatic Rx DSP Power Reduction Flag - SET */
} CLK_ARDPRF_t;

/* Automatic Power Reduction of Path A */
typedef enum CLK_APRPTA_enum
{
    CLK_APRPTA_CLEAR_gc = (0x00), /* Automatic Power Reduction of Path A - CLEAR */
    CLK_APRPTA_SET_gc   = (0x20), /* Automatic Power Reduction of Path A - SET */
} CLK_APRPTA_t;

/* Automatic Power Reduction of Path B */
typedef enum CLK_APRPTB_enum
{
    CLK_APRPTB_CLEAR_gc = (0x00), /* Automatic Power Reduction of Path B - CLEAR */
    CLK_APRPTB_SET_gc   = (0x10), /* Automatic Power Reduction of Path B - SET */
} CLK_APRPTB_t;

/* Power reduction register for temperature measurement */
typedef enum CLK_PRTMP_enum
{
    CLK_PRTMP_CLEAR_gc = (0x00), /* Power reduction register for temperature measurement - CLEAR */
    CLK_PRTMP_SET_gc   = (0x08), /* Power reduction register for temperature measurement - SET */
} CLK_PRTMP_t;

/* Power reduction register for the digital channel filter */
typedef enum CLK_PRFLT_enum
{
    CLK_PRFLT_CLEAR_gc = (0x00), /* Power reduction register for the digital channel filter - CLEAR */
    CLK_PRFLT_SET_gc   = (0x04), /* Power reduction register for the digital channel filter - SET */
} CLK_PRFLT_t;

/* Power reduction register for the demodulator and receiving path B */
typedef enum CLK_PRPTA_enum
{
    CLK_PRPTA_CLEAR_gc = (0x00), /* Power reduction register for the demodulator and receiving path B - CLEAR */
    CLK_PRPTA_SET_gc   = (0x02), /* Power reduction register for the demodulator and receiving path B - SET */
} CLK_PRPTA_t;

/* Power reduction register for the demodulator and receiving path A */
typedef enum CLK_PRPTB_enum
{
    CLK_PRPTB_CLEAR_gc = (0x00), /* Power reduction register for the demodulator and receiving path A - CLEAR */
    CLK_PRPTB_SET_gc   = (0x01), /* Power reduction register for the demodulator and receiving path A - SET */
} CLK_PRPTB_t;

/* Slow RC oscillator temperature compensation */
#define CLK_SRCCAL_SRCTC_gc(x) ((x<<6) & 0xC0)

/* Slow RC oscillator calibration */
#define CLK_SRCCAL_SRCCAL_gc(x) (x & 0x3F)

/*
--------------------------------------------------------------------------------
CPU - 
--------------------------------------------------------------------------------
*/

typedef struct CPU_struct
{
    register8_t rsv_0x00[46]; /* RESERVED REGISTER BLOCK */
    register8_t MCUCR;        /* MCU Control Register */
    register8_t rsv_0x2F[28]; /* RESERVED REGISTER BLOCK */
    register8_t MCUSR;        /* MCU Status Register */
    register8_t rsv_0x4C[5];  /* RESERVED REGISTER BLOCK */
    register8_t DWDR;         /* debugWire communication Register */
    register8_t rsv_0x52[6];  /* RESERVED REGISTER BLOCK */
    register8_t SMCR;         /* Sleep mode control Register */
    register8_t CMCR;         /* Clock Management Control Register */
    register8_t CMIMR;        /* Clock Interrupt Mask Register */
    register8_t CLPR;         /* Clock Prescaler Register */
    register8_t SPMCSR;       /* Store Program Memory Control and Status Register */
    _REGISTER16 (SP);         /* Stack Pointer  */
    register8_t rsv_0x5E;     /* RESERVED REGISTER */
    register8_t SREG;         /* Status Register */
} CPU_t;


/* Clock Prescaler Change Enable */
typedef enum CPU_CLPCE_enum
{
    CPU_CLPCE_CLEAR_gc = (0x00), /* Clock Prescaler Change Enable - CLEAR */
    CPU_CLPCE_SET_gc   = (0x80), /* Clock Prescaler Change Enable - SET */
} CPU_CLPCE_t;

/* Timer Clock Prescaler Select */
typedef enum CPU_CLTPS_enum
{
    CPU_CLTPS_VAL_0x00_gc = (0x00<<3), /* disabled */
    CPU_CLTPS_VAL_0x01_gc = (0x01<<3), /* 1 */
    CPU_CLTPS_VAL_0x02_gc = (0x02<<3), /* 2 */
    CPU_CLTPS_VAL_0x03_gc = (0x03<<3), /* 4 */
    CPU_CLTPS_VAL_0x04_gc = (0x04<<3), /* 8 */
    CPU_CLTPS_VAL_0x05_gc = (0x05<<3), /* 16 */
    CPU_CLTPS_VAL_0x06_gc = (0x06<<3), /* 32 */
    CPU_CLTPS_VAL_0x07_gc = (0x07<<3), /* 64 */
} CPU_CLTPS_t;

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
} CPU_CLKPS_t;

/* Clock management control change enable */
typedef enum CPU_CMCCE_enum
{
    CPU_CMCCE_CLEAR_gc = (0x00), /* Clock management control change enable - CLEAR */
    CPU_CMCCE_SET_gc   = (0x80), /* Clock management control change enable - SET */
} CPU_CMCCE_t;

/* Clock monitor enable */
typedef enum CPU_CMONEN_enum
{
    CPU_CMONEN_CLEAR_gc = (0x00), /* Clock monitor enable - CLEAR */
    CPU_CMONEN_SET_gc   = (0x40), /* Clock monitor enable - SET */
} CPU_CMONEN_t;

/* Slow RC oscillator disable */
typedef enum CPU_SRCD_enum
{
    CPU_SRCD_CLEAR_gc = (0x00), /* Slow RC oscillator disable - CLEAR */
    CPU_SRCD_SET_gc   = (0x10), /* Slow RC oscillator disable - SET */
} CPU_SRCD_t;

/* Core Clock Select */
typedef enum CPU_CCS_enum
{
    CPU_CCS_CLEAR_gc = (0x00), /* Core Clock Select - CLEAR */
    CPU_CCS_SET_gc   = (0x08), /* Core Clock Select - SET */
} CPU_CCS_t;

/* Clock Management Mode */
#define CPU_CMCR_CMM_gc(x) (x & 0x07)

/* External clock interrupt enable */
typedef enum CPU_ECIE_enum
{
    CPU_ECIE_CLEAR_gc = (0x00), /* External clock interrupt enable - CLEAR */
    CPU_ECIE_SET_gc   = (0x01), /* External clock interrupt enable - SET */
} CPU_ECIE_t;

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

/* SPM Interrupt Enable */
typedef enum CPU_SPMIE_enum
{
    CPU_SPMIE_CLEAR_gc = (0x00), /* SPM Interrupt Enable - CLEAR */
    CPU_SPMIE_SET_gc   = (0x80), /* SPM Interrupt Enable - SET */
} CPU_SPMIE_t;

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

/* Self Programming Enable */
typedef enum CPU_SELFPRGEN_enum
{
    CPU_SELFPRGEN_CLEAR_gc = (0x00), /* Self Programming Enable - CLEAR */
    CPU_SELFPRGEN_SET_gc   = (0x01), /* Self Programming Enable - SET */
} CPU_SELFPRGEN_t;

/* Port B7 High Side Driver enable */
typedef enum CPU_PB7HS_enum
{
    CPU_PB7HS_CLEAR_gc = (0x00), /* Port B7 High Side Driver enable - CLEAR */
    CPU_PB7HS_SET_gc   = (0x80), /* Port B7 High Side Driver enable - SET */
} CPU_PB7HS_t;

/* Port B7 Low Side Driver enable */
typedef enum CPU_PB7LS_enum
{
    CPU_PB7LS_CLEAR_gc = (0x00), /* Port B7 Low Side Driver enable - CLEAR */
    CPU_PB7LS_SET_gc   = (0x40), /* Port B7 Low Side Driver enable - SET */
} CPU_PB7LS_t;

/* Port B4 High Side Driver enable */
typedef enum CPU_PB4HS_enum
{
    CPU_PB4HS_CLEAR_gc = (0x00), /* Port B4 High Side Driver enable - CLEAR */
    CPU_PB4HS_SET_gc   = (0x20), /* Port B4 High Side Driver enable - SET */
} CPU_PB4HS_t;

/* Pull-up Resistors Disable */
typedef enum CPU_PUD_enum
{
    CPU_PUD_CLEAR_gc = (0x00), /* Pull-up Resistors Disable - CLEAR */
    CPU_PUD_SET_gc   = (0x10), /* Pull-up Resistors Disable - SET */
} CPU_PUD_t;

/* Enable Port Settings */
typedef enum CPU_ENPS_enum
{
    CPU_ENPS_CLEAR_gc = (0x00), /* Enable Port Settings - CLEAR */
    CPU_ENPS_SET_gc   = (0x08), /* Enable Port Settings - SET */
} CPU_ENPS_t;

/* SPI Interrupt Only */
typedef enum CPU_SPIIO_enum
{
    CPU_SPIIO_CLEAR_gc = (0x00), /* SPI Interrupt Only - CLEAR */
    CPU_SPIIO_SET_gc   = (0x04), /* SPI Interrupt Only - SET */
} CPU_SPIIO_t;

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

/* External Reset Flag */
typedef enum CPU_EXTRF_enum
{
    CPU_EXTRF_CLEAR_gc = (0x00), /* External Reset Flag - CLEAR */
    CPU_EXTRF_SET_gc   = (0x02), /* External Reset Flag - SET */
} CPU_EXTRF_t;

/* Power-on Reset flag */
typedef enum CPU_PORF_enum
{
    CPU_PORF_CLEAR_gc = (0x00), /* Power-on Reset flag - CLEAR */
    CPU_PORF_SET_gc   = (0x01), /* Power-on Reset flag - SET */
} CPU_PORF_t;

/* Sleep Mode Select */
typedef enum CPU_SM_enum
{
    CPU_SM_IDLE_gc     = (0x00<<1), /* Idle */
    CPU_SM_EPSAVE_gc   = (0x01<<1), /* Extended power-save */
    CPU_SM_PDOWN_gc    = (0x02<<1), /* Power Down */
    CPU_SM_PSAVE_gc    = (0x03<<1), /* Power Save */
    CPU_SM_VAL_0x04_gc = (0x04<<1), /* Reserved */
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

/*
--------------------------------------------------------------------------------
CRC - 
--------------------------------------------------------------------------------
*/

typedef struct CRC_struct
{
    register8_t rsv_0x00[73];  /* RESERVED REGISTER BLOCK */
    register8_t CRCDIR;        /* CRC Data Input Register */
    register8_t rsv_0x4A[251]; /* RESERVED REGISTER BLOCK */
    register8_t CRCCR;         /* CRC Control Register */
    register8_t CRCDOR;        /* CRC Data Output Register */
} CRC_t;


/* Reflect Data Output Byte */
typedef enum CRC_REFLO_enum
{
    CRC_REFLO_CLEAR_gc = (0x00), /* Reflect Data Output Byte - CLEAR */
    CRC_REFLO_SET_gc   = (0x04), /* Reflect Data Output Byte - SET */
} CRC_REFLO_t;

/* Reflect Data Input Byte */
typedef enum CRC_REFLI_enum
{
    CRC_REFLI_CLEAR_gc = (0x00), /* Reflect Data Input Byte - CLEAR */
    CRC_REFLI_SET_gc   = (0x02), /* Reflect Data Input Byte - SET */
} CRC_REFLI_t;

/* CRC Data Register Reset */
typedef enum CRC_CRCRS_enum
{
    CRC_CRCRS_CLEAR_gc = (0x00), /* CRC Data Register Reset - CLEAR */
    CRC_CRCRS_SET_gc   = (0x01), /* CRC Data Register Reset - SET */
} CRC_CRCRS_t;

/*
--------------------------------------------------------------------------------
DEBOUNCE - 
--------------------------------------------------------------------------------
*/

typedef struct DEBOUNCE_struct
{
    register8_t rsv_0x00[338]; /* RESERVED REGISTER BLOCK */
    register8_t DBCR;          /* DeBounce Control Register */
    register8_t DBTC;          /* Debounce Timer Compare Register */
    register8_t DBENB;         /* DeBounce Enable Port B */
    register8_t DBENC;         /* DeBounce Enable Port C */
} DEBOUNCE_t;


/* Debounce Handshake Active */
typedef enum DEBOUNCE_DBHA_enum
{
    DEBOUNCE_DBHA_CLEAR_gc = (0x00), /* Debounce Handshake Active - CLEAR */
    DEBOUNCE_DBHA_SET_gc   = (0x08), /* Debounce Handshake Active - SET */
} DEBOUNCE_DBHA_t;

/* Debounce Timer Mask Select */
typedef enum DEBOUNCE_DBTMS_enum
{
    DEBOUNCE_DBTMS_CLEAR_gc = (0x00), /* Debounce Timer Mask Select - CLEAR */
    DEBOUNCE_DBTMS_SET_gc   = (0x04), /* Debounce Timer Mask Select - SET */
} DEBOUNCE_DBTMS_t;

/* Debounce Clock Select */
typedef enum DEBOUNCE_DBCS_enum
{
    DEBOUNCE_DBCS_CLEAR_gc = (0x00), /* Debounce Clock Select - CLEAR */
    DEBOUNCE_DBCS_SET_gc   = (0x02), /* Debounce Clock Select - SET */
} DEBOUNCE_DBCS_t;

/* Debounce Mode */
typedef enum DEBOUNCE_DBMD_enum
{
    DEBOUNCE_DBMD_CLEAR_gc = (0x00), /* Debounce Mode - CLEAR */
    DEBOUNCE_DBMD_SET_gc   = (0x01), /* Debounce Mode - SET */
} DEBOUNCE_DBMD_t;

/*
--------------------------------------------------------------------------------
DEBUG - 
--------------------------------------------------------------------------------
*/

typedef struct DEBUG_struct
{
    register8_t rsv_0x00[342]; /* RESERVED REGISTER BLOCK */
    register8_t DBGSW;         /* Debugging Support Switch */
} DEBUG_t;


/* Debugging Support Switch Enable */
typedef enum DEBUG_DBGSE_enum
{
    DEBUG_DBGSE_CLEAR_gc = (0x00), /* Debugging Support Switch Enable - CLEAR */
    DEBUG_DBGSE_SET_gc   = (0x80), /* Debugging Support Switch Enable - SET */
} DEBUG_DBGSE_t;

/* CPU Busy Flag */
typedef enum DEBUG_CPBF_enum
{
    DEBUG_CPBF_CLEAR_gc = (0x00), /* CPU Busy Flag - CLEAR */
    DEBUG_CPBF_SET_gc   = (0x40), /* CPU Busy Flag - SET */
} DEBUG_CPBF_t;

/* CPU Busy Flag Output Select */
#define DEBUG_DBGSW_CPBFOS_gc(x) ((x<<4) & 0x30)

/* Debugging Support Group Select */
#define DEBUG_DBGSW_DBGGS_gc(x) (x & 0x0F)

/*
--------------------------------------------------------------------------------
DEMOD - 
--------------------------------------------------------------------------------
*/

typedef struct DEMOD_struct
{
    register8_t rsv_0x00[159]; /* RESERVED REGISTER BLOCK */
    register8_t RXFOB;         /* Received Frequency Offset vs Intermediate Frequency on path B */
    register8_t RXFOA;         /* Received Frequency Offset vs Intermediate Frequency on path A */
    register8_t DMMB;          /* Demodulator Mode for Path B */
    register8_t DMMA;          /* Demodulator Mode for path A */
    register8_t DMCDB;         /* Demodulator Carrier Detect for path B */
    register8_t DMCDA;         /* Demodulator Carrier Detect for path A */
    register8_t DMCRB;         /* Demodulator Control Register for path B */
    register8_t DMCRA;         /* Demodulator Control Register for path A */
    register8_t DMDRB;         /* Demodulator Data Rate on path B */
    register8_t DMDRA;         /* Demodulator Data Rate on path A */
} DEMOD_t;


/* Demodulator Carrier Detect Time for path A */
#define DEMOD_DMCDA_DMCTA_gc(x) ((x<<5) & 0xE0)

/* Demodulator Carrier Detect Limit for path A */
#define DEMOD_DMCDA_DMCLA_gc(x) (x & 0x1F)

/* Demodulator Carrier Detect Time for path B */
#define DEMOD_DMCDB_DMCTB_gc(x) ((x<<5) & 0xE0)

/* Demodulator Carrier Detect Limit for path B */
#define DEMOD_DMCDB_DMCLB_gc(x) (x & 0x1F)

/* Demodulator automatic restart on path A */
typedef enum DEMOD_DMARA_enum
{
    DEMOD_DMARA_CLEAR_gc = (0x00), /* Demodulator automatic restart on path A - CLEAR */
    DEMOD_DMARA_SET_gc   = (0x80), /* Demodulator automatic restart on path A - SET */
} DEMOD_DMARA_t;

/* Symbol check with only 1T on path A */
typedef enum DEMOD_SY1TA_enum
{
    DEMOD_SY1TA_CLEAR_gc = (0x00), /* Symbol check with only 1T on path A - CLEAR */
    DEMOD_SY1TA_SET_gc   = (0x40), /* Symbol check with only 1T on path A - SET */
} DEMOD_SY1TA_t;

/* Select ASK input for path A */
typedef enum DEMOD_SASKA_enum
{
    DEMOD_SASKA_CLEAR_gc = (0x00), /* Select ASK input for path A - CLEAR */
    DEMOD_SASKA_SET_gc   = (0x20), /* Select ASK input for path A - SET */
} DEMOD_SASKA_t;

/* Demodulator PLL loop gain for path A */
#define DEMOD_DMCRA_DMPGA_gc(x) (x & 0x1F)

/* Demodulator automatic restart on path B */
typedef enum DEMOD_DMARB_enum
{
    DEMOD_DMARB_CLEAR_gc = (0x00), /* Demodulator automatic restart on path B - CLEAR */
    DEMOD_DMARB_SET_gc   = (0x80), /* Demodulator automatic restart on path B - SET */
} DEMOD_DMARB_t;

/* Symbol check with only 1T on path B */
typedef enum DEMOD_SY1TB_enum
{
    DEMOD_SY1TB_CLEAR_gc = (0x00), /* Symbol check with only 1T on path B - CLEAR */
    DEMOD_SY1TB_SET_gc   = (0x40), /* Symbol check with only 1T on path B - SET */
} DEMOD_SY1TB_t;

/* Select ASK input for path B */
typedef enum DEMOD_SASKB_enum
{
    DEMOD_SASKB_CLEAR_gc = (0x00), /* Select ASK input for path B - CLEAR */
    DEMOD_SASKB_SET_gc   = (0x20), /* Select ASK input for path B - SET */
} DEMOD_SASKB_t;

/* Demodulator PLL loop gain for path B */
#define DEMOD_DMCRB_DMPGB_gc(x) (x & 0x1F)

/* Demodulator Downsampling on path A */
#define DEMOD_DMDRA_DMDNA_gc(x) ((x<<4) & 0xF0)

/* Demodulator Moving Average Data Rate factor on path A */
#define DEMOD_DMDRA_DMAA_gc(x) (x & 0x0F)

/* Demodulator Downsampling on path B */
#define DEMOD_DMDRB_DMDNB_gc(x) ((x<<4) & 0xF0)

/* Demodulator Moving Average Data Rate factor on path B */
#define DEMOD_DMDRB_DMAB_gc(x) (x & 0x0F)

/* Demodulator NRZ Enable for path A */
typedef enum DEMOD_DMNEA_enum
{
    DEMOD_DMNEA_CLEAR_gc = (0x00), /* Demodulator NRZ Enable for path A - CLEAR */
    DEMOD_DMNEA_SET_gc   = (0x80), /* Demodulator NRZ Enable for path A - SET */
} DEMOD_DMNEA_t;

/* Demodulator Hold Mode for path A */
typedef enum DEMOD_DMHA_enum
{
    DEMOD_DMHA_CLEAR_gc = (0x00), /* Demodulator Hold Mode for path A - CLEAR */
    DEMOD_DMHA_SET_gc   = (0x40), /* Demodulator Hold Mode for path A - SET */
} DEMOD_DMHA_t;

/* Demodulator Data Polarity Selection for path A */
typedef enum DEMOD_DMPA_enum
{
    DEMOD_DMPA_CLEAR_gc = (0x00), /* Demodulator Data Polarity Selection for path A - CLEAR */
    DEMOD_DMPA_SET_gc   = (0x20), /* Demodulator Data Polarity Selection for path A - SET */
} DEMOD_DMPA_t;

/* Demodulator Amplitude Threshold for path A */
#define DEMOD_DMMA_DMATA_gc(x) (x & 0x1F)

/* Demodulator NRZ Enable for path B */
typedef enum DEMOD_DMNEB_enum
{
    DEMOD_DMNEB_CLEAR_gc = (0x00), /* Demodulator NRZ Enable for path B - CLEAR */
    DEMOD_DMNEB_SET_gc   = (0x80), /* Demodulator NRZ Enable for path B - SET */
} DEMOD_DMNEB_t;

/* Demodulator Hold Mode for path B */
typedef enum DEMOD_DMHB_enum
{
    DEMOD_DMHB_CLEAR_gc = (0x00), /* Demodulator Hold Mode for path B - CLEAR */
    DEMOD_DMHB_SET_gc   = (0x40), /* Demodulator Hold Mode for path B - SET */
} DEMOD_DMHB_t;

/* Demodulator Data Polarity Selection for path B */
typedef enum DEMOD_DMPB_enum
{
    DEMOD_DMPB_CLEAR_gc = (0x00), /* Demodulator Data Polarity Selection for path B - CLEAR */
    DEMOD_DMPB_SET_gc   = (0x20), /* Demodulator Data Polarity Selection for path B - SET */
} DEMOD_DMPB_t;

/* Demodulator Amplitude Threshold for path B */
#define DEMOD_DMMB_DMATB_gc(x) (x & 0x1F)

/*
--------------------------------------------------------------------------------
DFIFO - 
--------------------------------------------------------------------------------
*/

typedef struct DFIFO_struct
{
    register8_t rsv_0x00[210]; /* RESERVED REGISTER BLOCK */
    register8_t DFS;           /* Data FIFO Status Register */
    _REGISTER16 (DFTL);        /* Data FIFO Telegram Length */
    register8_t rsv_0xD4;      /* RESERVED REGISTER */
    register8_t DFL;           /* Data FIFO Fill Level Register */
    register8_t DFWP;          /* Data FIFO Write Pointer */
    register8_t DFRP;          /* Data FIFO Read Pointer */
    register8_t DFD;           /* Data FIFO Data Register */
    register8_t DFI;           /* Data FIFO Interrupt Mask Register */
    register8_t DFC;           /* Data FIFO Configuration Register */
} DFIFO_t;


/* Data FIFO Direct Read Access Operational Mode */
typedef enum DFIFO_DFDRA_enum
{
    DFIFO_DFDRA_CLEAR_gc = (0x00), /* Data FIFO Direct Read Access Operational Mode - CLEAR */
    DFIFO_DFDRA_SET_gc   = (0x80), /* Data FIFO Direct Read Access Operational Mode - SET */
} DFIFO_DFDRA_t;

/* Data FIFO Fill-Level Configuration */
#define DFIFO_DFC_DFFLC_gc(x) (x & 0x3F)

/* Data FIFO Error Interrupt Mask */
typedef enum DFIFO_DFERIM_enum
{
    DFIFO_DFERIM_CLEAR_gc = (0x00), /* Data FIFO Error Interrupt Mask - CLEAR */
    DFIFO_DFERIM_SET_gc   = (0x02), /* Data FIFO Error Interrupt Mask - SET */
} DFIFO_DFERIM_t;

/* Data FIFO Fill-level Interrupt Mask */
typedef enum DFIFO_DFFLIM_enum
{
    DFIFO_DFFLIM_CLEAR_gc = (0x00), /* Data FIFO Fill-level Interrupt Mask - CLEAR */
    DFIFO_DFFLIM_SET_gc   = (0x01), /* Data FIFO Fill-level Interrupt Mask - SET */
} DFIFO_DFFLIM_t;

/* Data FIFO Clear */
typedef enum DFIFO_DFCLR_enum
{
    DFIFO_DFCLR_CLEAR_gc = (0x00), /* Data FIFO Clear - CLEAR */
    DFIFO_DFCLR_SET_gc   = (0x80), /* Data FIFO Clear - SET */
} DFIFO_DFCLR_t;

/* Data FIFO Fill Level Status */
#define DFIFO_DFL_DFFLS_gc(x) (x & 0x3F)

/* Data FIFO Overflow Flag */
typedef enum DFIFO_DFOFL_enum
{
    DFIFO_DFOFL_CLEAR_gc = (0x00), /* Data FIFO Overflow Flag - CLEAR */
    DFIFO_DFOFL_SET_gc   = (0x04), /* Data FIFO Overflow Flag - SET */
} DFIFO_DFOFL_t;

/* Data FIFO Underflow Flag */
typedef enum DFIFO_DFUFL_enum
{
    DFIFO_DFUFL_CLEAR_gc = (0x00), /* Data FIFO Underflow Flag - CLEAR */
    DFIFO_DFUFL_SET_gc   = (0x02), /* Data FIFO Underflow Flag - SET */
} DFIFO_DFUFL_t;

/* Data FIFO Fill-Level Reached Status Flag */
typedef enum DFIFO_DFFLRF_enum
{
    DFIFO_DFFLRF_CLEAR_gc = (0x00), /* Data FIFO Fill-Level Reached Status Flag - CLEAR */
    DFIFO_DFFLRF_SET_gc   = (0x01), /* Data FIFO Fill-Level Reached Status Flag - SET */
} DFIFO_DFFLRF_t;

/*
--------------------------------------------------------------------------------
EEPROM - 
--------------------------------------------------------------------------------
*/

typedef struct EEPROM_struct
{
    register8_t rsv_0x00[63];  /* RESERVED REGISTER BLOCK */
    register8_t EECR;          /* EEPROM Control Register */
    register8_t EEDR;          /* EEPROM Data Register */
    _REGISTER16 (EEAR);        /* EEPROM Address Register */
    register8_t rsv_0x42;      /* RESERVED REGISTER */
    register8_t EEPR;          /* EEPROM Protection Register */
    register8_t rsv_0x44[277]; /* RESERVED REGISTER BLOCK */
    register8_t EECR2;         /* EEPROM Control Register 2 */
} EEPROM_t;


/* Non-volatile memory busy */
typedef enum EEPROM_NVMBSY_enum
{
    EEPROM_NVMBSY_CLEAR_gc = (0x00), /* Non-volatile memory busy - CLEAR */
    EEPROM_NVMBSY_SET_gc   = (0x80), /* Non-volatile memory busy - SET */
} EEPROM_NVMBSY_t;

/* EEPROM page access (multiple bytes access mode) */
typedef enum EEPROM_EEPAGE_enum
{
    EEPROM_EEPAGE_CLEAR_gc = (0x00), /* EEPROM page access (multiple bytes access mode) - CLEAR */
    EEPROM_EEPAGE_SET_gc   = (0x40), /* EEPROM page access (multiple bytes access mode) - SET */
} EEPROM_EEPAGE_t;

/* EEPROM Programming Mode */
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

/* EEPROM Burst Read Enable */
typedef enum EEPROM_EEBRE_enum
{
    EEPROM_EEBRE_CLEAR_gc = (0x00), /* EEPROM Burst Read Enable - CLEAR */
    EEPROM_EEBRE_SET_gc   = (0x01), /* EEPROM Burst Read Enable - SET */
} EEPROM_EEBRE_t;

/*
--------------------------------------------------------------------------------
FE - 
--------------------------------------------------------------------------------
*/

typedef struct FE_struct
{
    register8_t rsv_0x00[256]; /* RESERVED REGISTER BLOCK */
    register8_t FESR;          /* Front-End Status Register */
    register8_t FEEN1;         /* Front-End Enable Register 1 */
    register8_t FEEN2;         /* Front-End Enable Register 2 */
    register8_t FELNA;         /* Front-End LNA Bias Register */
    register8_t rsv_0x104[2];  /* RESERVED REGISTER BLOCK */
    register8_t FEVCT;         /* Front-End VCO Tuning Register */
    register8_t FEBT;          /* Front-End RC Tuning Register */
    register8_t FEMS;          /* Front-End Main and Swallow Control Register */
    register8_t FETN4;         /* Front-End RC Tuning 4bit Register */
    register8_t FECR;          /* Front-End Control Register */
    register8_t FEVCO;         /* Front-End VCO and PLL control */
    register8_t FEALR;         /* Front-End Antenna Level Detector Range */
    register8_t FEANT;         /* Front-End ANTenna */
    register8_t FEBIA;         /* Front-End IF Amplifier BIAS */
} FE_t;


/* Range of the ANT_TUNE level detector */
typedef enum FE_RNGE_enum
{
    FE_RNGE_VAL_0x00_gc = (0x00), /* 0..3 dBm */
    FE_RNGE_VAL_0x01_gc = (0x01), /* 4..7 dBm */
    FE_RNGE_VAL_0x02_gc = (0x02), /* 8..14 dBm */
    FE_RNGE_VAL_0x03_gc = (0x03), /* Secure Measurement */
} FE_RNGE_t;

/* IF Amplifier Enable */
typedef enum FE_IFAEN_enum
{
    FE_IFAEN_CLEAR_gc = (0x00), /* IF Amplifier Enable - CLEAR */
    FE_IFAEN_SET_gc   = (0x80), /* IF Amplifier Enable - SET */
} FE_IFAEN_t;

/* Resistor Tuning */
#define FE_FEBT_RTN2_gc(x) ((x<<2) & 0x0C)

/* Capacitor Tuning */
#define FE_FEBT_CTN2_gc(x) (x & 0x03)

/* ASK Not DPSK Switch */
typedef enum FE_ANPS_enum
{
    FE_ANPS_CLEAR_gc = (0x00), /* ASK Not DPSK Switch - CLEAR */
    FE_ANPS_SET_gc   = (0x20), /* ASK Not DPSK Switch - SET */
} FE_ANPS_t;

/* PLL Lock Detect Gate */
typedef enum FE_PLCKG_enum
{
    FE_PLCKG_CLEAR_gc = (0x00), /* PLL Lock Detect Gate - CLEAR */
    FE_PLCKG_SET_gc   = (0x10), /* PLL Lock Detect Gate - SET */
} FE_PLCKG_t;

/* ADC High Sample Rate */
typedef enum FE_ADHS_enum
{
    FE_ADHS_CLEAR_gc = (0x00), /* ADC High Sample Rate - CLEAR */
    FE_ADHS_SET_gc   = (0x08), /* ADC High Sample Rate - SET */
} FE_ADHS_t;

/* Antenna Damping */
typedef enum FE_ANDP_enum
{
    FE_ANDP_CLEAR_gc = (0x00), /* Antenna Damping - CLEAR */
    FE_ANDP_SET_gc   = (0x04), /* Antenna Damping - SET */
} FE_ANDP_t;

/* Select 433 Not 315MHz Band */
typedef enum FE_S4N3_enum
{
    FE_S4N3_CLEAR_gc = (0x00), /* Select 433 Not 315MHz Band - CLEAR */
    FE_S4N3_SET_gc   = (0x02), /* Select 433 Not 315MHz Band - SET */
} FE_S4N3_t;

/* Select Low-Band Not High-Band */
typedef enum FE_LBNHB_enum
{
    FE_LBNHB_CLEAR_gc = (0x00), /* Select Low-Band Not High-Band - CLEAR */
    FE_LBNHB_SET_gc   = (0x01), /* Select Low-Band Not High-Band - SET */
} FE_LBNHB_t;

/* Antenna Tuning Enable */
typedef enum FE_ATEN_enum
{
    FE_ATEN_CLEAR_gc = (0x00), /* Antenna Tuning Enable - CLEAR */
    FE_ATEN_SET_gc   = (0x80), /* Antenna Tuning Enable - SET */
} FE_ATEN_t;

/* PLL Speedup 1 */
typedef enum FE_PLSP1_enum
{
    FE_PLSP1_CLEAR_gc = (0x00), /* PLL Speedup 1 - CLEAR */
    FE_PLSP1_SET_gc   = (0x40), /* PLL Speedup 1 - SET */
} FE_PLSP1_t;

/* ADC Clock enable */
typedef enum FE_ADCLK_enum
{
    FE_ADCLK_CLEAR_gc = (0x00), /* ADC Clock enable - CLEAR */
    FE_ADCLK_SET_gc   = (0x20), /* ADC Clock enable - SET */
} FE_ADCLK_t;

/* Analog Digital Converter enable */
typedef enum FE_ADEN_enum
{
    FE_ADEN_CLEAR_gc = (0x00), /* Analog Digital Converter enable - CLEAR */
    FE_ADEN_SET_gc   = (0x10), /* Analog Digital Converter enable - SET */
} FE_ADEN_t;

/* Low Noise Amplifier enable */
typedef enum FE_LNAEN_enum
{
    FE_LNAEN_CLEAR_gc = (0x00), /* Low Noise Amplifier enable - CLEAR */
    FE_LNAEN_SET_gc   = (0x08), /* Low Noise Amplifier enable - SET */
} FE_LNAEN_t;

/* Cristal Oscillator enable */
typedef enum FE_XTOEN_enum
{
    FE_XTOEN_CLEAR_gc = (0x00), /* Cristal Oscillator enable - CLEAR */
    FE_XTOEN_SET_gc   = (0x04), /* Cristal Oscillator enable - SET */
} FE_XTOEN_t;

/* PLL calibration mode */
typedef enum FE_PLCAL_enum
{
    FE_PLCAL_CLEAR_gc = (0x00), /* PLL calibration mode - CLEAR */
    FE_PLCAL_SET_gc   = (0x02), /* PLL calibration mode - SET */
} FE_PLCAL_t;

/* PLL enable */
typedef enum FE_PLEN_enum
{
    FE_PLEN_CLEAR_gc = (0x00), /* PLL enable - CLEAR */
    FE_PLEN_SET_gc   = (0x01), /* PLL enable - SET */
} FE_PLEN_t;

/* XTO VPump enable */
typedef enum FE_XTPEN_enum
{
    FE_XTPEN_CLEAR_gc = (0x00), /* XTO VPump enable - CLEAR */
    FE_XTPEN_SET_gc   = (0x20), /* XTO VPump enable - SET */
} FE_XTPEN_t;

/* PLL Post En IQ divider */
typedef enum FE_PLPEN_enum
{
    FE_PLPEN_CLEAR_gc = (0x00), /* PLL Post En IQ divider - CLEAR */
    FE_PLPEN_SET_gc   = (0x10), /* PLL Post En IQ divider - SET */
} FE_PLPEN_t;

/* Temperature measurement */
typedef enum FE_TMPM_enum
{
    FE_TMPM_CLEAR_gc = (0x00), /* Temperature measurement - CLEAR */
    FE_TMPM_SET_gc   = (0x08), /* Temperature measurement - SET */
} FE_TMPM_t;

/* Power Amplifier enable */
typedef enum FE_PAEN_enum
{
    FE_PAEN_CLEAR_gc = (0x00), /* Power Amplifier enable - CLEAR */
    FE_PAEN_SET_gc   = (0x04), /* Power Amplifier enable - SET */
} FE_PAEN_t;

/* Single Pole Double Throw (SPDT) Switch TX */
typedef enum FE_SDRX2_enum
{
    FE_SDRX2_CLEAR_gc = (0x00), /* Single Pole Double Throw (SPDT) Switch TX - CLEAR */
    FE_SDRX2_SET_gc   = (0x02), /* Single Pole Double Throw (SPDT) Switch TX - SET */
} FE_SDRX2_t;

/* Single Pole Double Throw (SPDT) Switch RX */
typedef enum FE_SDRX_enum
{
    FE_SDRX_CLEAR_gc = (0x00), /* Single Pole Double Throw (SPDT) Switch RX - CLEAR */
    FE_SDRX_SET_gc   = (0x01), /* Single Pole Double Throw (SPDT) Switch RX - SET */
} FE_SDRX_t;

/* LNA Bias Low band */
#define FE_FELNA_LBL_gc(x) ((x<<4) & 0xF0)

/* LNA Bias High band */
#define FE_FELNA_LBH_gc(x) (x & 0x0F)

/* PLL Mode */
#define FE_FEMS_PLLM_gc(x) ((x<<4) & 0xF0)

/* PLL Swallow */
#define FE_FEMS_PLLS_gc(x) (x & 0x0F)

/* PLL locked */
typedef enum FE_PLCK_enum
{
    FE_PLCK_CLEAR_gc = (0x00), /* PLL locked - CLEAR */
    FE_PLCK_SET_gc   = (0x08), /* PLL locked - SET */
} FE_PLCK_t;

/* XTO ready */
typedef enum FE_XRDY_enum
{
    FE_XRDY_CLEAR_gc = (0x00), /* XTO ready - CLEAR */
    FE_XRDY_SET_gc   = (0x04), /* XTO ready - SET */
} FE_XRDY_t;

/* LNA High band saturated */
typedef enum FE_HBSAT_enum
{
    FE_HBSAT_CLEAR_gc = (0x00), /* LNA High band saturated - CLEAR */
    FE_HBSAT_SET_gc   = (0x02), /* LNA High band saturated - SET */
} FE_HBSAT_t;

/* LNA Low band saturated */
typedef enum FE_LBSAT_enum
{
    FE_LBSAT_CLEAR_gc = (0x00), /* LNA Low band saturated - CLEAR */
    FE_LBSAT_SET_gc   = (0x01), /* LNA Low band saturated - SET */
} FE_LBSAT_t;

/* 4 bit Resistor Tuning */
#define FE_FETN4_RTN4_gc(x) ((x<<4) & 0xF0)

/* 4 bit Capacitor Tuning */
#define FE_FETN4_CTN4_gc(x) (x & 0x0F)

/* VCO Bias */
#define FE_FEVCO_VCOB_gc(x) ((x<<4) & 0xF0)

/* Charge pump current control */
#define FE_FEVCO_CPCC_gc(x) (x & 0x0F)

/*
--------------------------------------------------------------------------------
FREQS - 
--------------------------------------------------------------------------------
*/

typedef struct FREQS_struct
{
    register8_t rsv_0x00[96]; /* RESERVED REGISTER BLOCK */
    register8_t FSEN;         /* Frequency Synthesizer Enable register */
    register8_t rsv_0x61[3];  /* RESERVED REGISTER BLOCK */
    register8_t FFREQ1L;      /* Fractional Frequency 1 Setting, Low Byte */
    register8_t FFREQ1M;      /* Fractional Frequency 1 Setting, Middle Byte */
    register8_t FFREQ1H;      /* Fractional Frequency 1 Setting, High Byte */
    register8_t FFREQ2L;      /* Fractional Frequency 2 Setting, Low Byte */
    register8_t FFREQ2M;      /* Fractional Frequency 2 Setting, Middle Byte */
    register8_t FFREQ2H;      /* Fractional Frequency 2 Setting, High Byte */
} FREQS_t;


/* Sigma-delta Modulator Enable */
typedef enum FREQS_SDEN_enum
{
    FREQS_SDEN_CLEAR_gc = (0x00), /* Sigma-delta Modulator Enable - CLEAR */
    FREQS_SDEN_SET_gc   = (0x02), /* Sigma-delta Modulator Enable - SET */
} FREQS_SDEN_t;

/* Sigma-delta Modulator Power Up */
typedef enum FREQS_SDPU_enum
{
    FREQS_SDPU_CLEAR_gc = (0x00), /* Sigma-delta Modulator Power Up - CLEAR */
    FREQS_SDPU_SET_gc   = (0x01), /* Sigma-delta Modulator Power Up - SET */
} FREQS_SDPU_t;

/*
--------------------------------------------------------------------------------
FRSYNC - 
--------------------------------------------------------------------------------
*/

typedef struct FRSYNC_struct
{
    register8_t rsv_0x00[171]; /* RESERVED REGISTER BLOCK */
    register8_t SFIDCB;        /* Start-Frame ID Control for data path B */
    register8_t SFIDLB;        /* Start-Frame ID Length for data path B */
    register8_t WUPTB;         /* Wake-Up Pattern Threshold for data path B */
    register8_t WUPLB;         /* Wake-Up Pattern Length for data path B */
    register8_t SFID1B;        /* Start-Frame ID byte 1 for data path B */
    register8_t SFID2B;        /* Start-Frame ID byte 2 for data path B */
    register8_t SFID3B;        /* Start-Frame ID byte 3 for data path B */
    register8_t SFID4B;        /* Start-Frame ID byte 4 for data path B */
    register8_t WUP1B;         /* Wake-Up Pattern byte 1 for data path B */
    register8_t WUP2B;         /* Wake-Up Pattern byte 2 for data path B */
    register8_t WUP3B;         /* Wake-Up Pattern byte 3 for data path B */
    register8_t WUP4B;         /* Wake-Up Pattern byte 4 for data path B */
    register8_t SFIDCA;        /* Start-Frame ID Control for data path A */
    register8_t SFIDLA;        /* Start-Frame ID Length for data path A */
    register8_t WUPTA;         /* Wake-Up Pattern Threshold for data path A */
    register8_t WUPLA;         /* Wake-Up Pattern Length for data path A */
    register8_t SFID1A;        /* Start-Frame ID byte 1 for data path A */
    register8_t SFID2A;        /* Start-Frame ID byte 2 for data path A */
    register8_t SFID3A;        /* Start-Frame ID byte 3 for data path A */
    register8_t SFID4A;        /* Start-Frame ID byte 4 for data path A */
    register8_t WUP1A;         /* Wake-Up Pattern byte 1 for data path A */
    register8_t WUP2A;         /* Wake-Up Pattern byte 2 for data path A */
    register8_t WUP3A;         /* Wake-Up Pattern byte 3 for data path A */
    register8_t WUP4A;         /* Wake-Up Pattern byte 4 for data path A */
} FRSYNC_t;


/* Serial mode enable for data path A */
typedef enum FRSYNC_SEMEA_enum
{
    FRSYNC_SEMEA_CLEAR_gc = (0x00), /* Serial mode enable for data path A - CLEAR */
    FRSYNC_SEMEA_SET_gc   = (0x80), /* Serial mode enable for data path A - SET */
} FRSYNC_SEMEA_t;

/* Start-Frame ID threshold for data path A */
#define FRSYNC_SFIDCA_SFIDTA_gc(x) (x & 0x1F)

/* Serial mode enable for data path B */
typedef enum FRSYNC_SEMEB_enum
{
    FRSYNC_SEMEB_CLEAR_gc = (0x00), /* Serial mode enable for data path B - CLEAR */
    FRSYNC_SEMEB_SET_gc   = (0x80), /* Serial mode enable for data path B - SET */
} FRSYNC_SEMEB_t;

/* Start-Frame ID threshold for data path B */
#define FRSYNC_SFIDCB_SFIDTB_gc(x) (x & 0x1F)

/*
--------------------------------------------------------------------------------
GPIOREGS - 
--------------------------------------------------------------------------------
*/

typedef struct GPIOREGS_struct
{
    register8_t rsv_0x00[58]; /* RESERVED REGISTER BLOCK */
    register8_t GPIOR0;       /* General Purpose I/O Register 0 */
    register8_t GPIOR3;       /* General Purpose I/O Register 3 */
    register8_t GPIOR4;       /* General Purpose I/O Register 4 */
    register8_t GPIOR5;       /* General Purpose I/O Register 5 */
    register8_t GPIOR6;       /* General Purpose I/O Register 6 */
    register8_t rsv_0x3F[5];  /* RESERVED REGISTER BLOCK */
    register8_t GPIOR1;       /* General Purpose I/O Register 1 */
    register8_t GPIOR2;       /* General Purpose I/O Register 2 */
} GPIOREGS_t;


/*
--------------------------------------------------------------------------------
IDSCAN - 
--------------------------------------------------------------------------------
*/

typedef struct IDSCAN_struct
{
    register8_t rsv_0x00[327]; /* RESERVED REGISTER BLOCK */
    register8_t IDB0;          /* ID Byte 0 */
    register8_t IDB1;          /* ID Byte 1 */
    register8_t IDB2;          /* ID Byte 2 */
    register8_t IDB3;          /* ID Byte 3 */
    register8_t IDC;           /* ID Configuration */
    register8_t IDS;           /* ID Status */
} IDSCAN_t;


/* ID Check Execute */
typedef enum IDSCAN_IDCE_enum
{
    IDSCAN_IDCE_CLEAR_gc = (0x00), /* ID Check Execute - CLEAR */
    IDSCAN_IDCE_SET_gc   = (0x80), /* ID Check Execute - SET */
} IDSCAN_IDCE_t;

/* ID Clear */
typedef enum IDSCAN_IDCLR_enum
{
    IDSCAN_IDCLR_CLEAR_gc = (0x00), /* ID Clear - CLEAR */
    IDSCAN_IDCLR_SET_gc   = (0x40), /* ID Clear - SET */
} IDSCAN_IDCLR_t;

/* ID Full Interrupt Mask */
typedef enum IDSCAN_IDFIM_enum
{
    IDSCAN_IDFIM_CLEAR_gc = (0x00), /* ID Full Interrupt Mask - CLEAR */
    IDSCAN_IDFIM_SET_gc   = (0x20), /* ID Full Interrupt Mask - SET */
} IDSCAN_IDFIM_t;

/* ID Byte Offset */
#define IDSCAN_IDC_IDBO_gc(x) ((x<<2) & 0x0C)

/* ID Length */
#define IDSCAN_IDC_IDL_gc(x) (x & 0x03)

/* ID Full Flag */
typedef enum IDSCAN_IDFULL_enum
{
    IDSCAN_IDFULL_CLEAR_gc = (0x00), /* ID Full Flag - CLEAR */
    IDSCAN_IDFULL_SET_gc   = (0x02), /* ID Full Flag - SET */
} IDSCAN_IDFULL_t;

/* ID Scan Ok Flag */
typedef enum IDSCAN_IDOK_enum
{
    IDSCAN_IDOK_CLEAR_gc = (0x00), /* ID Scan Ok Flag - CLEAR */
    IDSCAN_IDOK_SET_gc   = (0x01), /* ID Scan Ok Flag - SET */
} IDSCAN_IDOK_t;

/*
--------------------------------------------------------------------------------
INT - 
--------------------------------------------------------------------------------
*/

typedef struct INT_struct
{
    register8_t rsv_0x00[47]; /* RESERVED REGISTER BLOCK */
    register8_t PCIFR;        /* Pin change Interrupt flag Register */
    register8_t rsv_0x30[22]; /* RESERVED REGISTER BLOCK */
    register8_t PCICR;        /* Pin change Interrupt control Register */
    register8_t EIMSK;        /* External Interrupt Mask Register */
    register8_t EIFR;         /* External Interrupt Flag Register */
    register8_t rsv_0x49[34]; /* RESERVED REGISTER BLOCK */
    register8_t EICRA;        /* External Interrupt control Register */
    register8_t PCMSK0;       /* Pin change Mask Register 0 */
    register8_t PCMSK1;       /* Pin change Mask Register 1 */
} INT_t;


/* Interrupt Sense Control 1 */
typedef enum INT_ISC1_enum
{
    INT_ISC1_VAL_0x00_gc = (0x00<<2), /* Low Level of INTX */
    INT_ISC1_VAL_0x01_gc = (0x01<<2), /* Logical Change of INTX */
    INT_ISC1_VAL_0x02_gc = (0x02<<2), /* Falling Edge of INTX */
    INT_ISC1_VAL_0x03_gc = (0x03<<2), /* Rising Edge of INTX */
} INT_ISC1_t;

/* Interrupt Sense Control 0 */
typedef enum INT_ISC0_enum
{
    INT_ISC0_VAL_0x00_gc = (0x00), /* Low Level of INTX */
    INT_ISC0_VAL_0x01_gc = (0x01), /* Logical Change of INTX */
    INT_ISC0_VAL_0x02_gc = (0x02), /* Falling Edge of INTX */
    INT_ISC0_VAL_0x03_gc = (0x03), /* Rising Edge of INTX */
} INT_ISC0_t;

/* External Interrupt Flag 1 */
typedef enum INT_INTF1_enum
{
    INT_INTF1_CLEAR_gc = (0x00), /* External Interrupt Flag 1 - CLEAR */
    INT_INTF1_SET_gc   = (0x02), /* External Interrupt Flag 1 - SET */
} INT_INTF1_t;

/* External Interrupt Flag 0 */
typedef enum INT_INTF0_enum
{
    INT_INTF0_CLEAR_gc = (0x00), /* External Interrupt Flag 0 - CLEAR */
    INT_INTF0_SET_gc   = (0x01), /* External Interrupt Flag 0 - SET */
} INT_INTF0_t;

/* External Interrupt Request 1 Enable */
typedef enum INT_INT1_enum
{
    INT_INT1_CLEAR_gc = (0x00), /* External Interrupt Request 1 Enable - CLEAR */
    INT_INT1_SET_gc   = (0x02), /* External Interrupt Request 1 Enable - SET */
} INT_INT1_t;

/* External Interrupt Request 0 Enable */
typedef enum INT_INT0_enum
{
    INT_INT0_CLEAR_gc = (0x00), /* External Interrupt Request 0 Enable - CLEAR */
    INT_INT0_SET_gc   = (0x01), /* External Interrupt Request 0 Enable - SET */
} INT_INT0_t;

/* Pin Change Interrupt Enable 1 */
typedef enum INT_PCIE1_enum
{
    INT_PCIE1_CLEAR_gc = (0x00), /* Pin Change Interrupt Enable 1 - CLEAR */
    INT_PCIE1_SET_gc   = (0x02), /* Pin Change Interrupt Enable 1 - SET */
} INT_PCIE1_t;

/* Pin Change Interrupt Enable 0 */
typedef enum INT_PCIE0_enum
{
    INT_PCIE0_CLEAR_gc = (0x00), /* Pin Change Interrupt Enable 0 - CLEAR */
    INT_PCIE0_SET_gc   = (0x01), /* Pin Change Interrupt Enable 0 - SET */
} INT_PCIE0_t;

/* Pin Change Interrupt Flag 1 */
typedef enum INT_PCIF1_enum
{
    INT_PCIF1_CLEAR_gc = (0x00), /* Pin Change Interrupt Flag 1 - CLEAR */
    INT_PCIF1_SET_gc   = (0x02), /* Pin Change Interrupt Flag 1 - SET */
} INT_PCIF1_t;

/* Pin Change Interrupt Flag 0 */
typedef enum INT_PCIF0_enum
{
    INT_PCIF0_CLEAR_gc = (0x00), /* Pin Change Interrupt Flag 0 - CLEAR */
    INT_PCIF0_SET_gc   = (0x01), /* Pin Change Interrupt Flag 0 - SET */
} INT_PCIF0_t;

/* Pin Change Enable Mask bit 0 */
typedef enum INT_PCINT0_enum
{
    INT_PCINT0_CLEAR_gc = (0x00), /* Pin Change Enable Mask bit 0 - CLEAR */
    INT_PCINT0_SET_gc   = (0x01), /* Pin Change Enable Mask bit 0 - SET */
} INT_PCINT0_t;

/* Pin Change Enable Mask bit 1 */
typedef enum INT_PCINT1_enum
{
    INT_PCINT1_CLEAR_gc = (0x00), /* Pin Change Enable Mask bit 1 - CLEAR */
    INT_PCINT1_SET_gc   = (0x02), /* Pin Change Enable Mask bit 1 - SET */
} INT_PCINT1_t;

/* Pin Change Enable Mask bit 2 */
typedef enum INT_PCINT2_enum
{
    INT_PCINT2_CLEAR_gc = (0x00), /* Pin Change Enable Mask bit 2 - CLEAR */
    INT_PCINT2_SET_gc   = (0x04), /* Pin Change Enable Mask bit 2 - SET */
} INT_PCINT2_t;

/* Pin Change Enable Mask bit 3 */
typedef enum INT_PCINT3_enum
{
    INT_PCINT3_CLEAR_gc = (0x00), /* Pin Change Enable Mask bit 3 - CLEAR */
    INT_PCINT3_SET_gc   = (0x08), /* Pin Change Enable Mask bit 3 - SET */
} INT_PCINT3_t;

/* Pin Change Enable Mask bit 4 */
typedef enum INT_PCINT4_enum
{
    INT_PCINT4_CLEAR_gc = (0x00), /* Pin Change Enable Mask bit 4 - CLEAR */
    INT_PCINT4_SET_gc   = (0x10), /* Pin Change Enable Mask bit 4 - SET */
} INT_PCINT4_t;

/* Pin Change Enable Mask bit 5 */
typedef enum INT_PCINT5_enum
{
    INT_PCINT5_CLEAR_gc = (0x00), /* Pin Change Enable Mask bit 5 - CLEAR */
    INT_PCINT5_SET_gc   = (0x20), /* Pin Change Enable Mask bit 5 - SET */
} INT_PCINT5_t;

/* Pin Change Enable Mask bit 6 */
typedef enum INT_PCINT6_enum
{
    INT_PCINT6_CLEAR_gc = (0x00), /* Pin Change Enable Mask bit 6 - CLEAR */
    INT_PCINT6_SET_gc   = (0x40), /* Pin Change Enable Mask bit 6 - SET */
} INT_PCINT6_t;

/* Pin Change Enable Mask bit 7 */
typedef enum INT_PCINT7_enum
{
    INT_PCINT7_CLEAR_gc = (0x00), /* Pin Change Enable Mask bit 7 - CLEAR */
    INT_PCINT7_SET_gc   = (0x80), /* Pin Change Enable Mask bit 7 - SET */
} INT_PCINT7_t;

/* Pin Change Enable Mask bit 8 */
typedef enum INT_PCINT8_enum
{
    INT_PCINT8_CLEAR_gc = (0x00), /* Pin Change Enable Mask bit 8 - CLEAR */
    INT_PCINT8_SET_gc   = (0x01), /* Pin Change Enable Mask bit 8 - SET */
} INT_PCINT8_t;

/* Pin Change Enable Mask bit 9 */
typedef enum INT_PCINT9_enum
{
    INT_PCINT9_CLEAR_gc = (0x00), /* Pin Change Enable Mask bit 9 - CLEAR */
    INT_PCINT9_SET_gc   = (0x02), /* Pin Change Enable Mask bit 9 - SET */
} INT_PCINT9_t;

/* Pin Change Enable Mask bit 10 */
typedef enum INT_PCINT10_enum
{
    INT_PCINT10_CLEAR_gc = (0x00), /* Pin Change Enable Mask bit 10 - CLEAR */
    INT_PCINT10_SET_gc   = (0x04), /* Pin Change Enable Mask bit 10 - SET */
} INT_PCINT10_t;

/* Pin Change Enable Mask bit 11 */
typedef enum INT_PCINT11_enum
{
    INT_PCINT11_CLEAR_gc = (0x00), /* Pin Change Enable Mask bit 11 - CLEAR */
    INT_PCINT11_SET_gc   = (0x08), /* Pin Change Enable Mask bit 11 - SET */
} INT_PCINT11_t;

/* Pin Change Enable Mask bit 12 */
typedef enum INT_PCINT12_enum
{
    INT_PCINT12_CLEAR_gc = (0x00), /* Pin Change Enable Mask bit 12 - CLEAR */
    INT_PCINT12_SET_gc   = (0x10), /* Pin Change Enable Mask bit 12 - SET */
} INT_PCINT12_t;

/* Pin Change Enable Mask bit 13 */
typedef enum INT_PCINT13_enum
{
    INT_PCINT13_CLEAR_gc = (0x00), /* Pin Change Enable Mask bit 13 - CLEAR */
    INT_PCINT13_SET_gc   = (0x20), /* Pin Change Enable Mask bit 13 - SET */
} INT_PCINT13_t;

/*
--------------------------------------------------------------------------------
MEM - 
--------------------------------------------------------------------------------
*/

typedef struct MEM_struct
{
    register8_t rsv_0x00[346]; /* RESERVED REGISTER BLOCK */
    register8_t PGMST;         /* Program Memory Status Register */
    register8_t EEST;          /* EEPROM Status Register */
} MEM_t;


/*
--------------------------------------------------------------------------------
PORTB - 
--------------------------------------------------------------------------------
*/

typedef struct PORTB_struct
{
    register8_t rsv_0x00[37]; /* RESERVED REGISTER BLOCK */
    register8_t PINB;         /* Port B Input Pins */
    register8_t DDRB;         /* Port B Data Direction Register */
    register8_t PORTB;        /* Port B Data Register */
} PORTB_t;


/*
--------------------------------------------------------------------------------
PORTC - 
--------------------------------------------------------------------------------
*/

typedef struct PORTC_struct
{
    register8_t rsv_0x00[40]; /* RESERVED REGISTER BLOCK */
    register8_t PINC;         /* Port C Input Pins */
    register8_t DDRC;         /* Port C Data Direction Register */
    register8_t PORTC;        /* Port C Data Register */
} PORTC_t;


/*
--------------------------------------------------------------------------------
RSSIB - 
--------------------------------------------------------------------------------
*/

typedef struct RSSIB_struct
{
    register8_t rsv_0x00[333]; /* RESERVED REGISTER BLOCK */
    register8_t RSSAV;         /* RSSI Average Value */
    register8_t RSSPK;         /* RSSI Peak Value */
    register8_t RSSL;          /* RSSI Low Threshold for Signal Check */
    register8_t RSSH;          /* RSSI High Threshold for Signal Check */
    register8_t RSSC;          /* RSSI Configuration Register */
    register8_t rsv_0x152[10]; /* RESERVED REGISTER BLOCK */
    register8_t RSIFG;         /* RSSI High IF Amplifier Gain */
    register8_t RSLDV;         /* RSSI Low Band Damping Value */
    register8_t RSHDV;         /* RSSI High Band Damping Value */
    register8_t RSCOM;         /* RSSI Compensation Register */
} RSSIB_t;


/* RSSI IF Amplifier Compensation */
typedef enum RSSIB_RSIFC_enum
{
    RSSIB_RSIFC_CLEAR_gc = (0x00), /* RSSI IF Amplifier Compensation - CLEAR */
    RSSIB_RSIFC_SET_gc   = (0x02), /* RSSI IF Amplifier Compensation - SET */
} RSSIB_RSIFC_t;

/* RSSI Damping Compensation */
typedef enum RSSIB_RSDC_enum
{
    RSSIB_RSDC_CLEAR_gc = (0x00), /* RSSI Damping Compensation - CLEAR */
    RSSIB_RSDC_SET_gc   = (0x01), /* RSSI Damping Compensation - SET */
} RSSIB_RSDC_t;

/* RSSI Peak Values to SFIFO */
typedef enum RSSIB_RSPKF_enum
{
    RSSIB_RSPKF_CLEAR_gc = (0x00), /* RSSI Peak Values to SFIFO - CLEAR */
    RSSIB_RSPKF_SET_gc   = (0x40), /* RSSI Peak Values to SFIFO - SET */
} RSSIB_RSPKF_t;

/* RSSI High Band Reception */
typedef enum RSSIB_RSHRX_enum
{
    RSSIB_RSHRX_CLEAR_gc = (0x00), /* RSSI High Band Reception - CLEAR */
    RSSIB_RSHRX_SET_gc   = (0x20), /* RSSI High Band Reception - SET */
} RSSIB_RSHRX_t;

/* RSSI within Low and High Limits */
typedef enum RSSIB_RSWLH_enum
{
    RSSIB_RSWLH_CLEAR_gc = (0x00), /* RSSI within Low and High Limits - CLEAR */
    RSSIB_RSWLH_SET_gc   = (0x10), /* RSSI within Low and High Limits - SET */
} RSSIB_RSWLH_t;

/* RSSI Update Period */
#define RSSIB_RSSC_RSUP_gc(x) (x & 0x0F)

/*
--------------------------------------------------------------------------------
RXBUF - 
--------------------------------------------------------------------------------
*/

typedef struct RXBUF_struct
{
    register8_t rsv_0x00[303]; /* RESERVED REGISTER BLOCK */
    register8_t RXBC1;         /* Rx Buffer configuration register 1 */
    register8_t RXBC2;         /* Rx Buffer configuration register 2 */
    register8_t RXTLLB;        /* Rx data telegram length register low byte for data path B */
    register8_t RXTLHB;        /* Rx data telegram length register high byte for data path B */
    register8_t RXCRLB;        /* Rx CRC result register low byte for data path B */
    register8_t RXCRHB;        /* Rx CRC result register high byte for data path B */
    register8_t RXCSBB;        /* Rx CRC skip bit number for data path B */
    register8_t RXCILB;        /* Rx CRC Init value (16-bit RXCI) low byte for data path B */
    register8_t RXCIHB;        /* Rx CRC Init value (16-bit RXCI) high byte for data path B */
    register8_t RXCPLB;        /* Rx CRC polynomial low byte for data path B */
    register8_t RXCPHB;        /* Rx CRC polynomial (15 bit RXCPB) high byte for data path B */
    register8_t RXDSB;         /* Rx data shift register for data path B */
    register8_t RXTLLA;        /* Rx data telegram length register low byte for data path A */
    register8_t RXTLHA;        /* Rx data telegram length register high byte for data path A */
    register8_t RXCRLA;        /* Rx CRC result register low byte for data path A */
    register8_t RXCRHA;        /* Rx CRC result register high byte for data path A */
    register8_t RXCSBA;        /* Rx CRC skip bit number for data path A */
    register8_t RXCILA;        /* Rx CRC Init value (16-bit RXCI) low byte for data path A */
    register8_t RXCIHA;        /* Rx CRC Init value (16-bit RXCI) high byte for data path A */
    register8_t RXCPLA;        /* Rx CRC polynomial low byte for data path A */
    register8_t RXCPHA;        /* Rx CRC polynomial (15 bit RXCPA) high byte for data path A */
    register8_t RXDSA;         /* Rx data shift register for data path A */
} RXBUF_t;


/* Receive Data MSB-first for data path B */
typedef enum RXBUF_RXMSBB_enum
{
    RXBUF_RXMSBB_CLEAR_gc = (0x00), /* Receive Data MSB-first for data path B - CLEAR */
    RXBUF_RXMSBB_SET_gc   = (0x80), /* Receive Data MSB-first for data path B - SET */
} RXBUF_RXMSBB_t;

/* Receive CRC Bit Lengths setting for data path B */
typedef enum RXBUF_RXCBLB_enum
{
    RXBUF_RXCBLB_VAL_0x00_gc = (0x00<<5), /* CRC 4-bit */
    RXBUF_RXCBLB_VAL_0x01_gc = (0x01<<5), /* CRC 8-bit */
    RXBUF_RXCBLB_VAL_0x02_gc = (0x02<<5), /* CRC 16-bit */
} RXBUF_RXCBLB_t;

/* RX CRC Enable data path B */
typedef enum RXBUF_RXCEB_enum
{
    RXBUF_RXCEB_CLEAR_gc = (0x00), /* RX CRC Enable data path B - CLEAR */
    RXBUF_RXCEB_SET_gc   = (0x10), /* RX CRC Enable data path B - SET */
} RXBUF_RXCEB_t;

/* Receive Data MSB-first for data path A */
typedef enum RXBUF_RXMSBA_enum
{
    RXBUF_RXMSBA_CLEAR_gc = (0x00), /* Receive Data MSB-first for data path A - CLEAR */
    RXBUF_RXMSBA_SET_gc   = (0x08), /* Receive Data MSB-first for data path A - SET */
} RXBUF_RXMSBA_t;

/* Receive CRC Bit Lengths setting for data path A */
typedef enum RXBUF_RXCBLA_enum
{
    RXBUF_RXCBLA_VAL_0x00_gc = (0x00<<1), /* CRC 4-bit */
    RXBUF_RXCBLA_VAL_0x01_gc = (0x01<<1), /* CRC 8-bit */
    RXBUF_RXCBLA_VAL_0x02_gc = (0x02<<1), /* CRC 16-bit */
} RXBUF_RXCBLA_t;

/* RX CRC Enable data path A */
typedef enum RXBUF_RXCEA_enum
{
    RXBUF_RXCEA_CLEAR_gc = (0x00), /* RX CRC Enable data path A - CLEAR */
    RXBUF_RXCEA_SET_gc   = (0x01), /* RX CRC Enable data path A - SET */
} RXBUF_RXCEA_t;

/* RX Buffer Clear */
typedef enum RXBUF_RXBCLR_enum
{
    RXBUF_RXBCLR_CLEAR_gc = (0x00), /* RX Buffer Clear - CLEAR */
    RXBUF_RXBCLR_SET_gc   = (0x04), /* RX Buffer Clear - SET */
} RXBUF_RXBCLR_t;

/* RX Buffer Finish */
typedef enum RXBUF_RXBF_enum
{
    RXBUF_RXBF_CLEAR_gc = (0x00), /* RX Buffer Finish - CLEAR */
    RXBUF_RXBF_SET_gc   = (0x02), /* RX Buffer Finish - SET */
} RXBUF_RXBF_t;

/* RX Buffer Path B select signal */
typedef enum RXBUF_RXBPB_enum
{
    RXBUF_RXBPB_CLEAR_gc = (0x00), /* RX Buffer Path B select signal - CLEAR */
    RXBUF_RXBPB_SET_gc   = (0x01), /* RX Buffer Path B select signal - SET */
} RXBUF_RXBPB_t;

/* RXTL (Receive Telegram Length) register High byte for data path A bit 3 */
typedef enum RXBUF_RXTLHA3_enum
{
    RXBUF_RXTLHA3_CLEAR_gc = (0x00), /* RXTL (Receive Telegram Length) register High byte for data path A bit 3 - CLEAR */
    RXBUF_RXTLHA3_SET_gc   = (0x08), /* RXTL (Receive Telegram Length) register High byte for data path A bit 3 - SET */
} RXBUF_RXTLHA3_t;

/* RXTL (Receive Telegram Length) register High byte for data path A bit 2 */
typedef enum RXBUF_RXTLHA2_enum
{
    RXBUF_RXTLHA2_CLEAR_gc = (0x00), /* RXTL (Receive Telegram Length) register High byte for data path A bit 2 - CLEAR */
    RXBUF_RXTLHA2_SET_gc   = (0x04), /* RXTL (Receive Telegram Length) register High byte for data path A bit 2 - SET */
} RXBUF_RXTLHA2_t;

/* RXTL (Receive Telegram Length) register High byte for data path A bit 1 */
typedef enum RXBUF_RXTLHA1_enum
{
    RXBUF_RXTLHA1_CLEAR_gc = (0x00), /* RXTL (Receive Telegram Length) register High byte for data path A bit 1 - CLEAR */
    RXBUF_RXTLHA1_SET_gc   = (0x02), /* RXTL (Receive Telegram Length) register High byte for data path A bit 1 - SET */
} RXBUF_RXTLHA1_t;

/* RXTL (Receive Telegram Length) register High byte for data path A bit 0 */
typedef enum RXBUF_RXTLHA0_enum
{
    RXBUF_RXTLHA0_CLEAR_gc = (0x00), /* RXTL (Receive Telegram Length) register High byte for data path A bit 0 - CLEAR */
    RXBUF_RXTLHA0_SET_gc   = (0x01), /* RXTL (Receive Telegram Length) register High byte for data path A bit 0 - SET */
} RXBUF_RXTLHA0_t;

/* RXTL (Receive Telegram Length) register High byte for data path B bit 3 */
typedef enum RXBUF_RXTLHB3_enum
{
    RXBUF_RXTLHB3_CLEAR_gc = (0x00), /* RXTL (Receive Telegram Length) register High byte for data path B bit 3 - CLEAR */
    RXBUF_RXTLHB3_SET_gc   = (0x08), /* RXTL (Receive Telegram Length) register High byte for data path B bit 3 - SET */
} RXBUF_RXTLHB3_t;

/* RXTL (Receive Telegram Length) register High byte for data path B bit 2 */
typedef enum RXBUF_RXTLHB2_enum
{
    RXBUF_RXTLHB2_CLEAR_gc = (0x00), /* RXTL (Receive Telegram Length) register High byte for data path B bit 2 - CLEAR */
    RXBUF_RXTLHB2_SET_gc   = (0x04), /* RXTL (Receive Telegram Length) register High byte for data path B bit 2 - SET */
} RXBUF_RXTLHB2_t;

/* RXTL (Receive Telegram Length) register High byte for data path B bit 1 */
typedef enum RXBUF_RXTLHB1_enum
{
    RXBUF_RXTLHB1_CLEAR_gc = (0x00), /* RXTL (Receive Telegram Length) register High byte for data path B bit 1 - CLEAR */
    RXBUF_RXTLHB1_SET_gc   = (0x02), /* RXTL (Receive Telegram Length) register High byte for data path B bit 1 - SET */
} RXBUF_RXTLHB1_t;

/* RXTL (Receive Telegram Length) register High byte for data path B bit 0 */
typedef enum RXBUF_RXTLHB0_enum
{
    RXBUF_RXTLHB0_CLEAR_gc = (0x00), /* RXTL (Receive Telegram Length) register High byte for data path B bit 0 - CLEAR */
    RXBUF_RXTLHB0_SET_gc   = (0x01), /* RXTL (Receive Telegram Length) register High byte for data path B bit 0 - SET */
} RXBUF_RXTLHB0_t;

/*
--------------------------------------------------------------------------------
RXDSP - 
--------------------------------------------------------------------------------
*/

typedef struct RXDSP_struct
{
    register8_t rsv_0x00[45]; /* RESERVED REGISTER BLOCK */
    register8_t RDSIFR;       /* Rx DSP status interrupt flag register */
    register8_t rsv_0x2E[37]; /* RESERVED REGISTER BLOCK */
    register8_t RDCR;         /* Rx DSP control register */
    register8_t EOTSA;        /* End Of Telegram Status on path A */
    register8_t EOTCA;        /* End Of Telegram Conditions for path A */
    register8_t EOTSB;        /* End Of Telegram Status on path B */
    register8_t EOTCB;        /* End Of Telegram Conditions for path B */
    register8_t rsv_0x58[57]; /* RESERVED REGISTER BLOCK */
    register8_t SOTSB;        /* Start Of Telegram Status for path B */
    register8_t SOTSA;        /* Start Of Telegram Status for path A */
    register8_t SOTCB;        /* Start Of Telegram Conditions for path B */
    register8_t SOTCA;        /* Start Of Telegram Conditions for path A */
    register8_t TESRB;        /* Telegram Status Register on Path B */
    register8_t TESRA;        /* Telegram Status Register on Path A */
    register8_t rsv_0x97;     /* RESERVED REGISTER */
    register8_t RDSIMR;       /* Rx DSP status interrupt mask register */
    register8_t RDOCR;        /* Rx DSP output control */
} RXDSP_t;


/* End Of Telegram on path B Fail Enable */
typedef enum RXDSP_EOTBFE_enum
{
    RXDSP_EOTBFE_CLEAR_gc = (0x00), /* End Of Telegram on path B Fail Enable - CLEAR */
    RXDSP_EOTBFE_SET_gc   = (0x80), /* End Of Telegram on path B Fail Enable - SET */
} RXDSP_EOTBFE_t;

/* RSSI Range Fail Enable on path A */
typedef enum RXDSP_RRFEA_enum
{
    RXDSP_RRFEA_CLEAR_gc = (0x00), /* RSSI Range Fail Enable on path A - CLEAR */
    RXDSP_RRFEA_SET_gc   = (0x40), /* RSSI Range Fail Enable on path A - SET */
} RXDSP_RRFEA_t;

/* Telegram Length Reached Enable on path A */
typedef enum RXDSP_TELREA_enum
{
    RXDSP_TELREA_CLEAR_gc = (0x00), /* Telegram Length Reached Enable on path A - CLEAR */
    RXDSP_TELREA_SET_gc   = (0x20), /* Telegram Length Reached Enable on path A - SET */
} RXDSP_TELREA_t;

/* Time-Out Fail Enable on path A */
typedef enum RXDSP_TMOFEA_enum
{
    RXDSP_TMOFEA_CLEAR_gc = (0x00), /* Time-Out Fail Enable on path A - CLEAR */
    RXDSP_TMOFEA_SET_gc   = (0x10), /* Time-Out Fail Enable on path A - SET */
} RXDSP_TMOFEA_t;

/* MANchester Coding Failed Enable for path A */
typedef enum RXDSP_MANFEA_enum
{
    RXDSP_MANFEA_CLEAR_gc = (0x00), /* MANchester Coding Failed Enable for path A - CLEAR */
    RXDSP_MANFEA_SET_gc   = (0x08), /* MANchester Coding Failed Enable for path A - SET */
} RXDSP_MANFEA_t;

/* SYmbol Timing check Failed Enable for path A */
typedef enum RXDSP_SYTFEA_enum
{
    RXDSP_SYTFEA_CLEAR_gc = (0x00), /* SYmbol Timing check Failed Enable for path A - CLEAR */
    RXDSP_SYTFEA_SET_gc   = (0x04), /* SYmbol Timing check Failed Enable for path A - SET */
} RXDSP_SYTFEA_t;

/* AMPlitude Failed Enable for path A */
typedef enum RXDSP_AMPFEA_enum
{
    RXDSP_AMPFEA_CLEAR_gc = (0x00), /* AMPlitude Failed Enable for path A - CLEAR */
    RXDSP_AMPFEA_SET_gc   = (0x02), /* AMPlitude Failed Enable for path A - SET */
} RXDSP_AMPFEA_t;

/* CARrier check Failed Enable for path A */
typedef enum RXDSP_CARFEA_enum
{
    RXDSP_CARFEA_CLEAR_gc = (0x00), /* CARrier check Failed Enable for path A - CLEAR */
    RXDSP_CARFEA_SET_gc   = (0x01), /* CARrier check Failed Enable for path A - SET */
} RXDSP_CARFEA_t;

/* End Of Telegram on path B Fail Enable */
typedef enum RXDSP_EOTAFE_enum
{
    RXDSP_EOTAFE_CLEAR_gc = (0x00), /* End Of Telegram on path B Fail Enable - CLEAR */
    RXDSP_EOTAFE_SET_gc   = (0x80), /* End Of Telegram on path B Fail Enable - SET */
} RXDSP_EOTAFE_t;

/* RSSI Range Fail Enable on path B */
typedef enum RXDSP_RRFEB_enum
{
    RXDSP_RRFEB_CLEAR_gc = (0x00), /* RSSI Range Fail Enable on path B - CLEAR */
    RXDSP_RRFEB_SET_gc   = (0x40), /* RSSI Range Fail Enable on path B - SET */
} RXDSP_RRFEB_t;

/* Telegram Length Reached Enable on path B */
typedef enum RXDSP_TELREB_enum
{
    RXDSP_TELREB_CLEAR_gc = (0x00), /* Telegram Length Reached Enable on path B - CLEAR */
    RXDSP_TELREB_SET_gc   = (0x20), /* Telegram Length Reached Enable on path B - SET */
} RXDSP_TELREB_t;

/* Time-Out Fail Enable on path B */
typedef enum RXDSP_TMOFEB_enum
{
    RXDSP_TMOFEB_CLEAR_gc = (0x00), /* Time-Out Fail Enable on path B - CLEAR */
    RXDSP_TMOFEB_SET_gc   = (0x10), /* Time-Out Fail Enable on path B - SET */
} RXDSP_TMOFEB_t;

/* MANchester Coding Failed Enable for path B */
typedef enum RXDSP_MANFEB_enum
{
    RXDSP_MANFEB_CLEAR_gc = (0x00), /* MANchester Coding Failed Enable for path B - CLEAR */
    RXDSP_MANFEB_SET_gc   = (0x08), /* MANchester Coding Failed Enable for path B - SET */
} RXDSP_MANFEB_t;

/* SYmbol Timing check Failed Enable for path B */
typedef enum RXDSP_SYTFEB_enum
{
    RXDSP_SYTFEB_CLEAR_gc = (0x00), /* SYmbol Timing check Failed Enable for path B - CLEAR */
    RXDSP_SYTFEB_SET_gc   = (0x04), /* SYmbol Timing check Failed Enable for path B - SET */
} RXDSP_SYTFEB_t;

/* AMPlitude Failed Enable for path B */
typedef enum RXDSP_AMPFEB_enum
{
    RXDSP_AMPFEB_CLEAR_gc = (0x00), /* AMPlitude Failed Enable for path B - CLEAR */
    RXDSP_AMPFEB_SET_gc   = (0x02), /* AMPlitude Failed Enable for path B - SET */
} RXDSP_AMPFEB_t;

/* CARrier check Failed Enable for path B */
typedef enum RXDSP_CARFEB_enum
{
    RXDSP_CARFEB_CLEAR_gc = (0x00), /* CARrier check Failed Enable for path B - CLEAR */
    RXDSP_CARFEB_SET_gc   = (0x01), /* CARrier check Failed Enable for path B - SET */
} RXDSP_CARFEB_t;

/* End Of Telegram on path B Flag */
typedef enum RXDSP_EOTBF_enum
{
    RXDSP_EOTBF_CLEAR_gc = (0x00), /* End Of Telegram on path B Flag - CLEAR */
    RXDSP_EOTBF_SET_gc   = (0x80), /* End Of Telegram on path B Flag - SET */
} RXDSP_EOTBF_t;

/* RSSI Range Fail on path A */
typedef enum RXDSP_RRFA_enum
{
    RXDSP_RRFA_CLEAR_gc = (0x00), /* RSSI Range Fail on path A - CLEAR */
    RXDSP_RRFA_SET_gc   = (0x40), /* RSSI Range Fail on path A - SET */
} RXDSP_RRFA_t;

/* Telegram Length Reached on path A */
typedef enum RXDSP_TELRA_enum
{
    RXDSP_TELRA_CLEAR_gc = (0x00), /* Telegram Length Reached on path A - CLEAR */
    RXDSP_TELRA_SET_gc   = (0x20), /* Telegram Length Reached on path A - SET */
} RXDSP_TELRA_t;

/* Time-Out Fail on path A */
typedef enum RXDSP_TMOFA_enum
{
    RXDSP_TMOFA_CLEAR_gc = (0x00), /* Time-Out Fail on path A - CLEAR */
    RXDSP_TMOFA_SET_gc   = (0x10), /* Time-Out Fail on path A - SET */
} RXDSP_TMOFA_t;

/* MANchester coding Failed on path A */
typedef enum RXDSP_MANFA_enum
{
    RXDSP_MANFA_CLEAR_gc = (0x00), /* MANchester coding Failed on path A - CLEAR */
    RXDSP_MANFA_SET_gc   = (0x08), /* MANchester coding Failed on path A - SET */
} RXDSP_MANFA_t;

/* SYmbol Timing check Failed on path A */
typedef enum RXDSP_SYTFA_enum
{
    RXDSP_SYTFA_CLEAR_gc = (0x00), /* SYmbol Timing check Failed on path A - CLEAR */
    RXDSP_SYTFA_SET_gc   = (0x04), /* SYmbol Timing check Failed on path A - SET */
} RXDSP_SYTFA_t;

/* AMPlitude Failed on path A */
typedef enum RXDSP_AMPFA_enum
{
    RXDSP_AMPFA_CLEAR_gc = (0x00), /* AMPlitude Failed on path A - CLEAR */
    RXDSP_AMPFA_SET_gc   = (0x02), /* AMPlitude Failed on path A - SET */
} RXDSP_AMPFA_t;

/* CARrier check Failed on path A */
typedef enum RXDSP_CARFA_enum
{
    RXDSP_CARFA_CLEAR_gc = (0x00), /* CARrier check Failed on path A - CLEAR */
    RXDSP_CARFA_SET_gc   = (0x01), /* CARrier check Failed on path A - SET */
} RXDSP_CARFA_t;

/* End Of Telegram on path A Flag */
typedef enum RXDSP_EOTAF_enum
{
    RXDSP_EOTAF_CLEAR_gc = (0x00), /* End Of Telegram on path A Flag - CLEAR */
    RXDSP_EOTAF_SET_gc   = (0x80), /* End Of Telegram on path A Flag - SET */
} RXDSP_EOTAF_t;

/* RSSI Range Fail on path B */
typedef enum RXDSP_RRFB_enum
{
    RXDSP_RRFB_CLEAR_gc = (0x00), /* RSSI Range Fail on path B - CLEAR */
    RXDSP_RRFB_SET_gc   = (0x40), /* RSSI Range Fail on path B - SET */
} RXDSP_RRFB_t;

/* Telegram Length Reached on path B */
typedef enum RXDSP_TELRB_enum
{
    RXDSP_TELRB_CLEAR_gc = (0x00), /* Telegram Length Reached on path B - CLEAR */
    RXDSP_TELRB_SET_gc   = (0x20), /* Telegram Length Reached on path B - SET */
} RXDSP_TELRB_t;

/* Time-Out Fail on path B */
typedef enum RXDSP_TMOFB_enum
{
    RXDSP_TMOFB_CLEAR_gc = (0x00), /* Time-Out Fail on path B - CLEAR */
    RXDSP_TMOFB_SET_gc   = (0x10), /* Time-Out Fail on path B - SET */
} RXDSP_TMOFB_t;

/* MANchester coding Failed on path B */
typedef enum RXDSP_MANFB_enum
{
    RXDSP_MANFB_CLEAR_gc = (0x00), /* MANchester coding Failed on path B - CLEAR */
    RXDSP_MANFB_SET_gc   = (0x08), /* MANchester coding Failed on path B - SET */
} RXDSP_MANFB_t;

/* SYmbol Timing check Failed on path B */
typedef enum RXDSP_SYTFB_enum
{
    RXDSP_SYTFB_CLEAR_gc = (0x00), /* SYmbol Timing check Failed on path B - CLEAR */
    RXDSP_SYTFB_SET_gc   = (0x04), /* SYmbol Timing check Failed on path B - SET */
} RXDSP_SYTFB_t;

/* AMPlitude Failed on path B */
typedef enum RXDSP_AMPFB_enum
{
    RXDSP_AMPFB_CLEAR_gc = (0x00), /* AMPlitude Failed on path B - CLEAR */
    RXDSP_AMPFB_SET_gc   = (0x02), /* AMPlitude Failed on path B - SET */
} RXDSP_AMPFB_t;

/* CARrier check Failed on path B */
typedef enum RXDSP_CARFB_enum
{
    RXDSP_CARFB_CLEAR_gc = (0x00), /* CARrier check Failed on path B - CLEAR */
    RXDSP_CARFB_SET_gc   = (0x01), /* CARrier check Failed on path B - SET */
} RXDSP_CARFB_t;

/* Rx DSP enable */
typedef enum RXDSP_RDEN_enum
{
    RXDSP_RDEN_CLEAR_gc = (0x00), /* Rx DSP enable - CLEAR */
    RXDSP_RDEN_SET_gc   = (0x04), /* Rx DSP enable - SET */
} RXDSP_RDEN_t;

/* Divided ADC clock enable */
typedef enum RXDSP_ADIVEN_enum
{
    RXDSP_ADIVEN_CLEAR_gc = (0x00), /* Divided ADC clock enable - CLEAR */
    RXDSP_ADIVEN_SET_gc   = (0x02), /* Divided ADC clock enable - SET */
} RXDSP_ADIVEN_t;

/* Rx DSP Power Up */
typedef enum RXDSP_RDPU_enum
{
    RXDSP_RDPU_CLEAR_gc = (0x00), /* Rx DSP Power Up - CLEAR */
    RXDSP_RDPU_SET_gc   = (0x01), /* Rx DSP Power Up - SET */
} RXDSP_RDPU_t;

/* Rx DSP Start bit Is Data for path B */
typedef enum RXDSP_RDSIDB_enum
{
    RXDSP_RDSIDB_CLEAR_gc = (0x00), /* Rx DSP Start bit Is Data for path B - CLEAR */
    RXDSP_RDSIDB_SET_gc   = (0x40), /* Rx DSP Start bit Is Data for path B - SET */
} RXDSP_RDSIDB_t;

/* Rx DSP Start bit Is Data for path A */
typedef enum RXDSP_RDSIDA_enum
{
    RXDSP_RDSIDA_CLEAR_gc = (0x00), /* Rx DSP Start bit Is Data for path A - CLEAR */
    RXDSP_RDSIDA_SET_gc   = (0x20), /* Rx DSP Start bit Is Data for path A - SET */
} RXDSP_RDSIDA_t;

/* Enable Transparent Path B */
typedef enum RXDSP_ETRPB_enum
{
    RXDSP_ETRPB_CLEAR_gc = (0x00), /* Enable Transparent Path B - CLEAR */
    RXDSP_ETRPB_SET_gc   = (0x10), /* Enable Transparent Path B - SET */
} RXDSP_ETRPB_t;

/* Enable Transparent Path A */
typedef enum RXDSP_ETRPA_enum
{
    RXDSP_ETRPA_CLEAR_gc = (0x00), /* Enable Transparent Path A - CLEAR */
    RXDSP_ETRPA_SET_gc   = (0x08), /* Enable Transparent Path A - SET */
} RXDSP_ETRPA_t;

/* Transparent Mode Data Select */
#define RXDSP_RDOCR_TMDS_gc(x) ((x<<1) & 0x06)

/* Wake Conditions Ok on path B */
typedef enum RXDSP_WCOB_enum
{
    RXDSP_WCOB_CLEAR_gc = (0x00), /* Wake Conditions Ok on path B - CLEAR */
    RXDSP_WCOB_SET_gc   = (0x80), /* Wake Conditions Ok on path B - SET */
} RXDSP_WCOB_t;

/* Wake Conditions Ok on path A */
typedef enum RXDSP_WCOA_enum
{
    RXDSP_WCOA_CLEAR_gc = (0x00), /* Wake Conditions Ok on path A - CLEAR */
    RXDSP_WCOA_SET_gc   = (0x40), /* Wake Conditions Ok on path A - SET */
} RXDSP_WCOA_t;

/* Start Of Telegram on path B */
typedef enum RXDSP_SOTB_enum
{
    RXDSP_SOTB_CLEAR_gc = (0x00), /* Start Of Telegram on path B - CLEAR */
    RXDSP_SOTB_SET_gc   = (0x20), /* Start Of Telegram on path B - SET */
} RXDSP_SOTB_t;

/* Start Of Telegram on path A */
typedef enum RXDSP_SOTA_enum
{
    RXDSP_SOTA_CLEAR_gc = (0x00), /* Start Of Telegram on path A - CLEAR */
    RXDSP_SOTA_SET_gc   = (0x10), /* Start Of Telegram on path A - SET */
} RXDSP_SOTA_t;

/* End Of Telegram on path B */
typedef enum RXDSP_EOTB_enum
{
    RXDSP_EOTB_CLEAR_gc = (0x00), /* End Of Telegram on path B - CLEAR */
    RXDSP_EOTB_SET_gc   = (0x08), /* End Of Telegram on path B - SET */
} RXDSP_EOTB_t;

/* End Of Telegram on path A */
typedef enum RXDSP_EOTA_enum
{
    RXDSP_EOTA_CLEAR_gc = (0x00), /* End Of Telegram on path A - CLEAR */
    RXDSP_EOTA_SET_gc   = (0x04), /* End Of Telegram on path A - SET */
} RXDSP_EOTA_t;

/* New Bit on Rx path B */
typedef enum RXDSP_NBITB_enum
{
    RXDSP_NBITB_CLEAR_gc = (0x00), /* New Bit on Rx path B - CLEAR */
    RXDSP_NBITB_SET_gc   = (0x02), /* New Bit on Rx path B - SET */
} RXDSP_NBITB_t;

/* New Bit on Rx path A */
typedef enum RXDSP_NBITA_enum
{
    RXDSP_NBITA_CLEAR_gc = (0x00), /* New Bit on Rx path A - CLEAR */
    RXDSP_NBITA_SET_gc   = (0x01), /* New Bit on Rx path A - SET */
} RXDSP_NBITA_t;

/* Wake Conditions Ok on path B interrupt mask register */
typedef enum RXDSP_WCOBM_enum
{
    RXDSP_WCOBM_CLEAR_gc = (0x00), /* Wake Conditions Ok on path B interrupt mask register - CLEAR */
    RXDSP_WCOBM_SET_gc   = (0x80), /* Wake Conditions Ok on path B interrupt mask register - SET */
} RXDSP_WCOBM_t;

/* Wake Conditions Ok on path A interrupt mask register */
typedef enum RXDSP_WCOAM_enum
{
    RXDSP_WCOAM_CLEAR_gc = (0x00), /* Wake Conditions Ok on path A interrupt mask register - CLEAR */
    RXDSP_WCOAM_SET_gc   = (0x40), /* Wake Conditions Ok on path A interrupt mask register - SET */
} RXDSP_WCOAM_t;

/* Start Of Telegram on Rx path B interrupt mask register */
typedef enum RXDSP_SOTBM_enum
{
    RXDSP_SOTBM_CLEAR_gc = (0x00), /* Start Of Telegram on Rx path B interrupt mask register - CLEAR */
    RXDSP_SOTBM_SET_gc   = (0x20), /* Start Of Telegram on Rx path B interrupt mask register - SET */
} RXDSP_SOTBM_t;

/* Start Of Telegram on Rx path A interrupt mask register */
typedef enum RXDSP_SOTAM_enum
{
    RXDSP_SOTAM_CLEAR_gc = (0x00), /* Start Of Telegram on Rx path A interrupt mask register - CLEAR */
    RXDSP_SOTAM_SET_gc   = (0x10), /* Start Of Telegram on Rx path A interrupt mask register - SET */
} RXDSP_SOTAM_t;

/* End Of Telegram on Rx path B interrupt mask register */
typedef enum RXDSP_EOTBM_enum
{
    RXDSP_EOTBM_CLEAR_gc = (0x00), /* End Of Telegram on Rx path B interrupt mask register - CLEAR */
    RXDSP_EOTBM_SET_gc   = (0x08), /* End Of Telegram on Rx path B interrupt mask register - SET */
} RXDSP_EOTBM_t;

/* End Of Telegram on Rx path A interrupt mask register */
typedef enum RXDSP_EOTAM_enum
{
    RXDSP_EOTAM_CLEAR_gc = (0x00), /* End Of Telegram on Rx path A interrupt mask register - CLEAR */
    RXDSP_EOTAM_SET_gc   = (0x04), /* End Of Telegram on Rx path A interrupt mask register - SET */
} RXDSP_EOTAM_t;

/* New bit on Rx path B interrupt mask register */
typedef enum RXDSP_NBITBM_enum
{
    RXDSP_NBITBM_CLEAR_gc = (0x00), /* New bit on Rx path B interrupt mask register - CLEAR */
    RXDSP_NBITBM_SET_gc   = (0x02), /* New bit on Rx path B interrupt mask register - SET */
} RXDSP_NBITBM_t;

/* New bit on Rx path A interrupt mask register */
typedef enum RXDSP_NBITAM_enum
{
    RXDSP_NBITAM_CLEAR_gc = (0x00), /* New bit on Rx path A interrupt mask register - CLEAR */
    RXDSP_NBITAM_SET_gc   = (0x01), /* New bit on Rx path A interrupt mask register - SET */
} RXDSP_NBITAM_t;

/* Wake Check OK from path B Ok Enable */
typedef enum RXDSP_WCOBOE_enum
{
    RXDSP_WCOBOE_CLEAR_gc = (0x00), /* Wake Check OK from path B Ok Enable - CLEAR */
    RXDSP_WCOBOE_SET_gc   = (0x80), /* Wake Check OK from path B Ok Enable - SET */
} RXDSP_WCOBOE_t;

/* RSSI Range OK Enable for path A */
typedef enum RXDSP_RROEA_enum
{
    RXDSP_RROEA_CLEAR_gc = (0x00), /* RSSI Range OK Enable for path A - CLEAR */
    RXDSP_RROEA_SET_gc   = (0x40), /* RSSI Range OK Enable for path A - SET */
} RXDSP_RROEA_t;

/* Start of Frame IDentifier match Enabled for path A */
typedef enum RXDSP_SFIDEA_enum
{
    RXDSP_SFIDEA_CLEAR_gc = (0x00), /* Start of Frame IDentifier match Enabled for path A - CLEAR */
    RXDSP_SFIDEA_SET_gc   = (0x20), /* Start of Frame IDentifier match Enabled for path A - SET */
} RXDSP_SFIDEA_t;

/* Wake Up Pattern match Enabled for path A */
typedef enum RXDSP_WUPEA_enum
{
    RXDSP_WUPEA_CLEAR_gc = (0x00), /* Wake Up Pattern match Enabled for path A - CLEAR */
    RXDSP_WUPEA_SET_gc   = (0x10), /* Wake Up Pattern match Enabled for path A - SET */
} RXDSP_WUPEA_t;

/* Manchester Coding Ok Enabled for path A */
typedef enum RXDSP_MANOEA_enum
{
    RXDSP_MANOEA_CLEAR_gc = (0x00), /* Manchester Coding Ok Enabled for path A - CLEAR */
    RXDSP_MANOEA_SET_gc   = (0x08), /* Manchester Coding Ok Enabled for path A - SET */
} RXDSP_MANOEA_t;

/* Symbol Timing Ok Enabled for path A */
typedef enum RXDSP_SYTOEA_enum
{
    RXDSP_SYTOEA_CLEAR_gc = (0x00), /* Symbol Timing Ok Enabled for path A - CLEAR */
    RXDSP_SYTOEA_SET_gc   = (0x04), /* Symbol Timing Ok Enabled for path A - SET */
} RXDSP_SYTOEA_t;

/* AMPlitude Ok Enabled for path A */
typedef enum RXDSP_AMPOEA_enum
{
    RXDSP_AMPOEA_CLEAR_gc = (0x00), /* AMPlitude Ok Enabled for path A - CLEAR */
    RXDSP_AMPOEA_SET_gc   = (0x02), /* AMPlitude Ok Enabled for path A - SET */
} RXDSP_AMPOEA_t;

/* CARrier check Ok Enabled for path A */
typedef enum RXDSP_CAROEA_enum
{
    RXDSP_CAROEA_CLEAR_gc = (0x00), /* CARrier check Ok Enabled for path A - CLEAR */
    RXDSP_CAROEA_SET_gc   = (0x01), /* CARrier check Ok Enabled for path A - SET */
} RXDSP_CAROEA_t;

/* Wake Check OK from path A Ok Enable */
typedef enum RXDSP_WCOAOE_enum
{
    RXDSP_WCOAOE_CLEAR_gc = (0x00), /* Wake Check OK from path A Ok Enable - CLEAR */
    RXDSP_WCOAOE_SET_gc   = (0x80), /* Wake Check OK from path A Ok Enable - SET */
} RXDSP_WCOAOE_t;

/* RSSI Range OK Enable for path B */
typedef enum RXDSP_RROEB_enum
{
    RXDSP_RROEB_CLEAR_gc = (0x00), /* RSSI Range OK Enable for path B - CLEAR */
    RXDSP_RROEB_SET_gc   = (0x40), /* RSSI Range OK Enable for path B - SET */
} RXDSP_RROEB_t;

/* Start of Frame IDentifier match Enabled for path B */
typedef enum RXDSP_SFIDEB_enum
{
    RXDSP_SFIDEB_CLEAR_gc = (0x00), /* Start of Frame IDentifier match Enabled for path B - CLEAR */
    RXDSP_SFIDEB_SET_gc   = (0x20), /* Start of Frame IDentifier match Enabled for path B - SET */
} RXDSP_SFIDEB_t;

/* Wake Up Pattern match Enabled for path B */
typedef enum RXDSP_WUPEB_enum
{
    RXDSP_WUPEB_CLEAR_gc = (0x00), /* Wake Up Pattern match Enabled for path B - CLEAR */
    RXDSP_WUPEB_SET_gc   = (0x10), /* Wake Up Pattern match Enabled for path B - SET */
} RXDSP_WUPEB_t;

/* Manchester Coding Ok Enabled for path B */
typedef enum RXDSP_MANOEB_enum
{
    RXDSP_MANOEB_CLEAR_gc = (0x00), /* Manchester Coding Ok Enabled for path B - CLEAR */
    RXDSP_MANOEB_SET_gc   = (0x08), /* Manchester Coding Ok Enabled for path B - SET */
} RXDSP_MANOEB_t;

/* Symbol Timing Ok Enabled for path B */
typedef enum RXDSP_SYTOEB_enum
{
    RXDSP_SYTOEB_CLEAR_gc = (0x00), /* Symbol Timing Ok Enabled for path B - CLEAR */
    RXDSP_SYTOEB_SET_gc   = (0x04), /* Symbol Timing Ok Enabled for path B - SET */
} RXDSP_SYTOEB_t;

/* AMPlitude Ok Enabled for path B */
typedef enum RXDSP_AMPOEB_enum
{
    RXDSP_AMPOEB_CLEAR_gc = (0x00), /* AMPlitude Ok Enabled for path B - CLEAR */
    RXDSP_AMPOEB_SET_gc   = (0x02), /* AMPlitude Ok Enabled for path B - SET */
} RXDSP_AMPOEB_t;

/* CARrier check Ok Enabled for path B */
typedef enum RXDSP_CAROEB_enum
{
    RXDSP_CAROEB_CLEAR_gc = (0x00), /* CARrier check Ok Enabled for path B - CLEAR */
    RXDSP_CAROEB_SET_gc   = (0x01), /* CARrier check Ok Enabled for path B - SET */
} RXDSP_CAROEB_t;

/* Wake Check Ok on path B Ok */
typedef enum RXDSP_WCOBO_enum
{
    RXDSP_WCOBO_CLEAR_gc = (0x00), /* Wake Check Ok on path B Ok - CLEAR */
    RXDSP_WCOBO_SET_gc   = (0x80), /* Wake Check Ok on path B Ok - SET */
} RXDSP_WCOBO_t;

/* RSSI Range Ok on Path A */
typedef enum RXDSP_RROA_enum
{
    RXDSP_RROA_CLEAR_gc = (0x00), /* RSSI Range Ok on Path A - CLEAR */
    RXDSP_RROA_SET_gc   = (0x40), /* RSSI Range Ok on Path A - SET */
} RXDSP_RROA_t;

/* Start of Frame IDentifier matched on path A */
typedef enum RXDSP_SFIDOA_enum
{
    RXDSP_SFIDOA_CLEAR_gc = (0x00), /* Start of Frame IDentifier matched on path A - CLEAR */
    RXDSP_SFIDOA_SET_gc   = (0x20), /* Start of Frame IDentifier matched on path A - SET */
} RXDSP_SFIDOA_t;

/* Wake Up Pattern matched on path A */
typedef enum RXDSP_WUPOA_enum
{
    RXDSP_WUPOA_CLEAR_gc = (0x00), /* Wake Up Pattern matched on path A - CLEAR */
    RXDSP_WUPOA_SET_gc   = (0x10), /* Wake Up Pattern matched on path A - SET */
} RXDSP_WUPOA_t;

/* Manchester Coding Ok on path A */
typedef enum RXDSP_MANOA_enum
{
    RXDSP_MANOA_CLEAR_gc = (0x00), /* Manchester Coding Ok on path A - CLEAR */
    RXDSP_MANOA_SET_gc   = (0x08), /* Manchester Coding Ok on path A - SET */
} RXDSP_MANOA_t;

/* Symbol Timing Ok on path A */
typedef enum RXDSP_SYTOA_enum
{
    RXDSP_SYTOA_CLEAR_gc = (0x00), /* Symbol Timing Ok on path A - CLEAR */
    RXDSP_SYTOA_SET_gc   = (0x04), /* Symbol Timing Ok on path A - SET */
} RXDSP_SYTOA_t;

/* AMPlitude Ok on path A */
typedef enum RXDSP_AMPOA_enum
{
    RXDSP_AMPOA_CLEAR_gc = (0x00), /* AMPlitude Ok on path A - CLEAR */
    RXDSP_AMPOA_SET_gc   = (0x02), /* AMPlitude Ok on path A - SET */
} RXDSP_AMPOA_t;

/* CARrier check Ok on path A */
typedef enum RXDSP_CAROA_enum
{
    RXDSP_CAROA_CLEAR_gc = (0x00), /* CARrier check Ok on path A - CLEAR */
    RXDSP_CAROA_SET_gc   = (0x01), /* CARrier check Ok on path A - SET */
} RXDSP_CAROA_t;

/* Wake Check Ok on path A Ok */
typedef enum RXDSP_WCOAO_enum
{
    RXDSP_WCOAO_CLEAR_gc = (0x00), /* Wake Check Ok on path A Ok - CLEAR */
    RXDSP_WCOAO_SET_gc   = (0x80), /* Wake Check Ok on path A Ok - SET */
} RXDSP_WCOAO_t;

/* RSSI Range Ok on Path B */
typedef enum RXDSP_RROB_enum
{
    RXDSP_RROB_CLEAR_gc = (0x00), /* RSSI Range Ok on Path B - CLEAR */
    RXDSP_RROB_SET_gc   = (0x40), /* RSSI Range Ok on Path B - SET */
} RXDSP_RROB_t;

/* Start of Frame IDentifier matched on path B */
typedef enum RXDSP_SFIDOB_enum
{
    RXDSP_SFIDOB_CLEAR_gc = (0x00), /* Start of Frame IDentifier matched on path B - CLEAR */
    RXDSP_SFIDOB_SET_gc   = (0x20), /* Start of Frame IDentifier matched on path B - SET */
} RXDSP_SFIDOB_t;

/* Wake Up Pattern matched on path B */
typedef enum RXDSP_WUPOB_enum
{
    RXDSP_WUPOB_CLEAR_gc = (0x00), /* Wake Up Pattern matched on path B - CLEAR */
    RXDSP_WUPOB_SET_gc   = (0x10), /* Wake Up Pattern matched on path B - SET */
} RXDSP_WUPOB_t;

/* Manchester Coding Ok on path B */
typedef enum RXDSP_MANOB_enum
{
    RXDSP_MANOB_CLEAR_gc = (0x00), /* Manchester Coding Ok on path B - CLEAR */
    RXDSP_MANOB_SET_gc   = (0x08), /* Manchester Coding Ok on path B - SET */
} RXDSP_MANOB_t;

/* Symbol Timing Ok on path B */
typedef enum RXDSP_SYTOB_enum
{
    RXDSP_SYTOB_CLEAR_gc = (0x00), /* Symbol Timing Ok on path B - CLEAR */
    RXDSP_SYTOB_SET_gc   = (0x04), /* Symbol Timing Ok on path B - SET */
} RXDSP_SYTOB_t;

/* AMPlitude Ok on path B */
typedef enum RXDSP_AMPOB_enum
{
    RXDSP_AMPOB_CLEAR_gc = (0x00), /* AMPlitude Ok on path B - CLEAR */
    RXDSP_AMPOB_SET_gc   = (0x02), /* AMPlitude Ok on path B - SET */
} RXDSP_AMPOB_t;

/* CARrier check Ok on path B */
typedef enum RXDSP_CAROB_enum
{
    RXDSP_CAROB_CLEAR_gc = (0x00), /* CARrier check Ok on path B - CLEAR */
    RXDSP_CAROB_SET_gc   = (0x01), /* CARrier check Ok on path B - SET */
} RXDSP_CAROB_t;

/* End of Telegram Location on path A */
typedef enum RXDSP_EOTLA_enum
{
    RXDSP_EOTLA_VAL_0x00_gc = (0x00<<1), /* No EOT */
    RXDSP_EOTLA_VAL_0x01_gc = (0x01<<1), /* Before WCO */
    RXDSP_EOTLA_VAL_0x02_gc = (0x02<<1), /* Between WCO and SOT */
    RXDSP_EOTLA_VAL_0x03_gc = (0x03<<1), /* After SOT */
} RXDSP_EOTLA_t;

/* Cyclic Redundancy Check Ok on path A */
typedef enum RXDSP_CRCOA_enum
{
    RXDSP_CRCOA_CLEAR_gc = (0x00), /* Cyclic Redundancy Check Ok on path A - CLEAR */
    RXDSP_CRCOA_SET_gc   = (0x01), /* Cyclic Redundancy Check Ok on path A - SET */
} RXDSP_CRCOA_t;

/* End of Telegram Location on path B */
typedef enum RXDSP_EOTLB_enum
{
    RXDSP_EOTLB_VAL_0x00_gc = (0x00<<1), /* No EOT */
    RXDSP_EOTLB_VAL_0x01_gc = (0x01<<1), /* Before WCO */
    RXDSP_EOTLB_VAL_0x02_gc = (0x02<<1), /* Between WCO and SOT */
    RXDSP_EOTLB_VAL_0x03_gc = (0x03<<1), /* After SOT */
} RXDSP_EOTLB_t;

/* Cyclic Redundancy Check Ok on path B */
typedef enum RXDSP_CRCOB_enum
{
    RXDSP_CRCOB_CLEAR_gc = (0x00), /* Cyclic Redundancy Check Ok on path B - CLEAR */
    RXDSP_CRCOB_SET_gc   = (0x01), /* Cyclic Redundancy Check Ok on path B - SET */
} RXDSP_CRCOB_t;

/*
--------------------------------------------------------------------------------
SFIFO - 
--------------------------------------------------------------------------------
*/

typedef struct SFIFO_struct
{
    register8_t rsv_0x00[219]; /* RESERVED REGISTER BLOCK */
    register8_t SFS;           /* Support FIFO Status Register */
    register8_t SFL;           /* Support FIFO Fill Level Register */
    register8_t SFWP;          /* Support FIFO Write Pointer */
    register8_t SFRP;          /* Support FIFO Read Pointer */
    register8_t SFD;           /* Support FIFO Data Register */
    register8_t SFI;           /* Support FIFO Interrupt Mask Register */
    register8_t SFC;           /* Support FIFO Configuration Register */
} SFIFO_t;


/* Support FIFO Direct Read Access Operational Mode */
typedef enum SFIFO_SFDRA_enum
{
    SFIFO_SFDRA_CLEAR_gc = (0x00), /* Support FIFO Direct Read Access Operational Mode - CLEAR */
    SFIFO_SFDRA_SET_gc   = (0x80), /* Support FIFO Direct Read Access Operational Mode - SET */
} SFIFO_SFDRA_t;

/* Support FIFO Fill-Level Configuration */
#define SFIFO_SFC_SFFLC_gc(x) (x & 0x1F)

/* Support FIFO Error Interrupt Mask */
typedef enum SFIFO_SFERIM_enum
{
    SFIFO_SFERIM_CLEAR_gc = (0x00), /* Support FIFO Error Interrupt Mask - CLEAR */
    SFIFO_SFERIM_SET_gc   = (0x02), /* Support FIFO Error Interrupt Mask - SET */
} SFIFO_SFERIM_t;

/* Support FIFO Fill-level Interrupt Mask */
typedef enum SFIFO_SFFLIM_enum
{
    SFIFO_SFFLIM_CLEAR_gc = (0x00), /* Support FIFO Fill-level Interrupt Mask - CLEAR */
    SFIFO_SFFLIM_SET_gc   = (0x01), /* Support FIFO Fill-level Interrupt Mask - SET */
} SFIFO_SFFLIM_t;

/* Support FIFO Clear */
typedef enum SFIFO_SFCLR_enum
{
    SFIFO_SFCLR_CLEAR_gc = (0x00), /* Support FIFO Clear - CLEAR */
    SFIFO_SFCLR_SET_gc   = (0x80), /* Support FIFO Clear - SET */
} SFIFO_SFCLR_t;

/* Support FIFO Fill Level Status */
#define SFIFO_SFL_SFFLS_gc(x) (x & 0x1F)

/* Support FIFO Overflow Flag */
typedef enum SFIFO_SFOFL_enum
{
    SFIFO_SFOFL_CLEAR_gc = (0x00), /* Support FIFO Overflow Flag - CLEAR */
    SFIFO_SFOFL_SET_gc   = (0x04), /* Support FIFO Overflow Flag - SET */
} SFIFO_SFOFL_t;

/* Support FIFO Underflow Flag */
typedef enum SFIFO_SFUFL_enum
{
    SFIFO_SFUFL_CLEAR_gc = (0x00), /* Support FIFO Underflow Flag - CLEAR */
    SFIFO_SFUFL_SET_gc   = (0x02), /* Support FIFO Underflow Flag - SET */
} SFIFO_SFUFL_t;

/* Support FIFO Fill-Level Reached Status Flag */
typedef enum SFIFO_SFFLRF_enum
{
    SFIFO_SFFLRF_CLEAR_gc = (0x00), /* Support FIFO Fill-Level Reached Status Flag - CLEAR */
    SFIFO_SFFLRF_SET_gc   = (0x01), /* Support FIFO Fill-Level Reached Status Flag - SET */
} SFIFO_SFFLRF_t;

/*
--------------------------------------------------------------------------------
SPI - 
--------------------------------------------------------------------------------
*/

typedef struct SPI_struct
{
    register8_t rsv_0x00[76];  /* RESERVED REGISTER BLOCK */
    register8_t SPCR;          /* SPI Control Register */
    register8_t SPSR;          /* SPI Status Register */
    register8_t SPDR;          /* SPI Data Register */
    register8_t rsv_0x4F[264]; /* RESERVED REGISTER BLOCK */
    register8_t SFFR;          /* SPI FIFO Fill Status Register */
    register8_t SFIR;          /* SPI FIFO Interrupt Register */
} SPI_t;


/* SPI Interrupt Flag */
typedef enum SPI_SPIF_enum
{
    SPI_SPIF_CLEAR_gc = (0x00), /* SPI Interrupt Flag - CLEAR */
    SPI_SPIF_SET_gc   = (0x80), /* SPI Interrupt Flag - SET */
} SPI_SPIF_t;

/* Tx Buffer Interrupt Flag */
typedef enum SPI_TXIF_enum
{
    SPI_TXIF_CLEAR_gc = (0x00), /* Tx Buffer Interrupt Flag - CLEAR */
    SPI_TXIF_SET_gc   = (0x20), /* Tx Buffer Interrupt Flag - SET */
} SPI_TXIF_t;

/* Rx Buffer Interrupt Flag */
typedef enum SPI_RXIF_enum
{
    SPI_RXIF_CLEAR_gc = (0x00), /* Rx Buffer Interrupt Flag - CLEAR */
    SPI_RXIF_SET_gc   = (0x10), /* Rx Buffer Interrupt Flag - SET */
} SPI_RXIF_t;

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
    SPI_SPR_VAL_0x00_gc = (0x00), /* clkio/4 */
    SPI_SPR_VAL_0x01_gc = (0x01), /* clkio/16 */
    SPI_SPR_VAL_0x02_gc = (0x02), /* clkio/64 */
    SPI_SPR_VAL_0x03_gc = (0x03), /* clkio/128 */
    SPI_SPR_VAL_0x04_gc = (0x04), /* clkio/2 */
    SPI_SPR_VAL_0x05_gc = (0x05), /* clkio/8 */
    SPI_SPR_VAL_0x06_gc = (0x06), /* clkio/32 */
    SPI_SPR_VAL_0x07_gc = (0x07), /* clkio/64 */
} SPI_SPR_t;

/* SPI Tx Buffer Clear */
typedef enum SPI_TFC_enum
{
    SPI_TFC_CLEAR_gc = (0x00), /* SPI Tx Buffer Clear - CLEAR */
    SPI_TFC_SET_gc   = (0x80), /* SPI Tx Buffer Clear - SET */
} SPI_TFC_t;

/* SPI Transmit Buffer Fill Level */
#define SPI_SFFR_TFL_gc(x) ((x<<4) & 0x70)

/* SPI Rx Buffer Clear */
typedef enum SPI_RFC_enum
{
    SPI_RFC_CLEAR_gc = (0x00), /* SPI Rx Buffer Clear - CLEAR */
    SPI_RFC_SET_gc   = (0x08), /* SPI Rx Buffer Clear - SET */
} SPI_RFC_t;

/* SPI Receive Buffer Fill Level */
#define SPI_SFFR_RFL_gc(x) (x & 0x07)

/* SPI Tx Buffer Interrupt Enable */
typedef enum SPI_STIE_enum
{
    SPI_STIE_CLEAR_gc = (0x00), /* SPI Tx Buffer Interrupt Enable - CLEAR */
    SPI_STIE_SET_gc   = (0x80), /* SPI Tx Buffer Interrupt Enable - SET */
} SPI_STIE_t;

/* SPI Transmit Buffer Interrupt Level */
#define SPI_SFIR_TIL_gc(x) ((x<<4) & 0x70)

/* SPI Rx Buffer Interrupt Enable */
typedef enum SPI_SRIE_enum
{
    SPI_SRIE_CLEAR_gc = (0x00), /* SPI Rx Buffer Interrupt Enable - CLEAR */
    SPI_SRIE_SET_gc   = (0x08), /* SPI Rx Buffer Interrupt Enable - SET */
} SPI_SRIE_t;

/* SPI Receive Buffer Interrupt Level */
#define SPI_SFIR_RIL_gc(x) (x & 0x07)

/*
--------------------------------------------------------------------------------
SSM - 
--------------------------------------------------------------------------------
*/

typedef struct SSM_struct
{
    register8_t rsv_0x00[226]; /* RESERVED REGISTER BLOCK */
    register8_t SSMCR;         /* SSM Control Register */
    register8_t SSMRCR;        /* SSM Rx Control Register */
    register8_t SSMFBR;        /* SSM Filter Bandwidth Register */
    register8_t SSMRR;         /* SSM Run Register */
    register8_t SSMSR;         /* SSM Status Register */
    register8_t SSMIFR;        /* SSM Interrupt Flag Register */
    register8_t SSMIMR;        /* SSM interrupt mask register */
    register8_t MSMSTR;        /* Master State Machine state register */
    register8_t SSMSTR;        /* SSM State Register */
    register8_t SSMXSR;        /* SSM extended State Register */
    register8_t MSMCR1;        /* Master State Machine Control Register 1 */
    register8_t MSMCR2;        /* Master State Machine Control Register 2 */
    register8_t MSMCR3;        /* Master State Machine Control Register 3 */
    register8_t MSMCR4;        /* Master State Machine Control Register 4 */
    register8_t GTCR;          /* Get Telegram Control Register */
    register8_t SOTC1A;        /* Start Of Telegram Conditions 1 for Path A */
    register8_t SOTC2A;        /* Start Of Telegram Conditions 2 for Path A */
    register8_t SOTC1B;        /* Start Of Telegram Conditions 1 for Path B */
    register8_t SOTC2B;        /* Start Of Telegram Conditions 2 for Path B */
    register8_t EOTC1A;        /* End Of Telegram Conditions 1 for Path A */
    register8_t EOTC2A;        /* End Of Telegram Conditions 2 for Path A */
    register8_t EOTC3A;        /* End Of Telegram Conditions 3 for Path A */
    register8_t EOTC1B;        /* End Of Telegram Conditions 1 for Path B */
    register8_t EOTC2B;        /* End Of Telegram Conditions 2 for Path B */
    register8_t EOTC3B;        /* End Of Telegram Conditions 3 for Path B */
    register8_t WCOTOA;        /* Wait check ok time out for path A */
    register8_t WCOTOB;        /* Wait check ok time out for path B */
    register8_t SOTTOA;        /* Start Of Telegram Time Out for path A */
    register8_t SOTTOB;        /* Start Of Telegram Time Out for path B */
    register8_t SSMFCR;        /* SSM Flow Control Register */
} SSM_t;


/* End Of Telegram on Path B Fail Enable */
typedef enum SSM_EOTBFE1_enum
{
    SSM_EOTBFE1_CLEAR_gc = (0x00), /* End Of Telegram on Path B Fail Enable - CLEAR */
    SSM_EOTBFE1_SET_gc   = (0x80), /* End Of Telegram on Path B Fail Enable - SET */
} SSM_EOTBFE1_t;

/* RSSI Range Fail Enable on Path A */
typedef enum SSM_RRFEA1_enum
{
    SSM_RRFEA1_CLEAR_gc = (0x00), /* RSSI Range Fail Enable on Path A - CLEAR */
    SSM_RRFEA1_SET_gc   = (0x40), /* RSSI Range Fail Enable on Path A - SET */
} SSM_RRFEA1_t;

/* Telegram Length Reached Enable on Path A */
typedef enum SSM_TELREA1_enum
{
    SSM_TELREA1_CLEAR_gc = (0x00), /* Telegram Length Reached Enable on Path A - CLEAR */
    SSM_TELREA1_SET_gc   = (0x20), /* Telegram Length Reached Enable on Path A - SET */
} SSM_TELREA1_t;

/* Time-Out Fail Enable on Path A */
typedef enum SSM_TMOFEA1_enum
{
    SSM_TMOFEA1_CLEAR_gc = (0x00), /* Time-Out Fail Enable on Path A - CLEAR */
    SSM_TMOFEA1_SET_gc   = (0x10), /* Time-Out Fail Enable on Path A - SET */
} SSM_TMOFEA1_t;

/* MANchester Coding Failed Enable for Path A */
typedef enum SSM_MANFEA1_enum
{
    SSM_MANFEA1_CLEAR_gc = (0x00), /* MANchester Coding Failed Enable for Path A - CLEAR */
    SSM_MANFEA1_SET_gc   = (0x08), /* MANchester Coding Failed Enable for Path A - SET */
} SSM_MANFEA1_t;

/* SYmbol Timing check Failed Enable for Path A */
typedef enum SSM_SYTFEA1_enum
{
    SSM_SYTFEA1_CLEAR_gc = (0x00), /* SYmbol Timing check Failed Enable for Path A - CLEAR */
    SSM_SYTFEA1_SET_gc   = (0x04), /* SYmbol Timing check Failed Enable for Path A - SET */
} SSM_SYTFEA1_t;

/* AMPlitude Failed Enable for path A */
typedef enum SSM_AMPFEA1_enum
{
    SSM_AMPFEA1_CLEAR_gc = (0x00), /* AMPlitude Failed Enable for path A - CLEAR */
    SSM_AMPFEA1_SET_gc   = (0x02), /* AMPlitude Failed Enable for path A - SET */
} SSM_AMPFEA1_t;

/* CARrier check Failed Enable for path A */
typedef enum SSM_CARFEA1_enum
{
    SSM_CARFEA1_CLEAR_gc = (0x00), /* CARrier check Failed Enable for path A - CLEAR */
    SSM_CARFEA1_SET_gc   = (0x01), /* CARrier check Failed Enable for path A - SET */
} SSM_CARFEA1_t;

/* End Of Telegram on Path B Fail Enable */
typedef enum SSM_EOTAFE1_enum
{
    SSM_EOTAFE1_CLEAR_gc = (0x00), /* End Of Telegram on Path B Fail Enable - CLEAR */
    SSM_EOTAFE1_SET_gc   = (0x80), /* End Of Telegram on Path B Fail Enable - SET */
} SSM_EOTAFE1_t;

/* RSSI Range Fail Enable on Path B */
typedef enum SSM_RRFEB1_enum
{
    SSM_RRFEB1_CLEAR_gc = (0x00), /* RSSI Range Fail Enable on Path B - CLEAR */
    SSM_RRFEB1_SET_gc   = (0x40), /* RSSI Range Fail Enable on Path B - SET */
} SSM_RRFEB1_t;

/* Telegram Length Reached Enable on Path B */
typedef enum SSM_TELREB1_enum
{
    SSM_TELREB1_CLEAR_gc = (0x00), /* Telegram Length Reached Enable on Path B - CLEAR */
    SSM_TELREB1_SET_gc   = (0x20), /* Telegram Length Reached Enable on Path B - SET */
} SSM_TELREB1_t;

/* Time-Out Fail Enable on Path B */
typedef enum SSM_TMOFEB1_enum
{
    SSM_TMOFEB1_CLEAR_gc = (0x00), /* Time-Out Fail Enable on Path B - CLEAR */
    SSM_TMOFEB1_SET_gc   = (0x10), /* Time-Out Fail Enable on Path B - SET */
} SSM_TMOFEB1_t;

/* MANchester Coding Failed Enable for Path B */
typedef enum SSM_MANFEB1_enum
{
    SSM_MANFEB1_CLEAR_gc = (0x00), /* MANchester Coding Failed Enable for Path B - CLEAR */
    SSM_MANFEB1_SET_gc   = (0x08), /* MANchester Coding Failed Enable for Path B - SET */
} SSM_MANFEB1_t;

/* SYmbol Timing check Failed Enable for Path B */
typedef enum SSM_SYTFEB1_enum
{
    SSM_SYTFEB1_CLEAR_gc = (0x00), /* SYmbol Timing check Failed Enable for Path B - CLEAR */
    SSM_SYTFEB1_SET_gc   = (0x04), /* SYmbol Timing check Failed Enable for Path B - SET */
} SSM_SYTFEB1_t;

/* AMPlitude Failed Enable for path B */
typedef enum SSM_AMPFEB1_enum
{
    SSM_AMPFEB1_CLEAR_gc = (0x00), /* AMPlitude Failed Enable for path B - CLEAR */
    SSM_AMPFEB1_SET_gc   = (0x02), /* AMPlitude Failed Enable for path B - SET */
} SSM_AMPFEB1_t;

/* CARrier check Failed Enable for path B */
typedef enum SSM_CARFEB1_enum
{
    SSM_CARFEB1_CLEAR_gc = (0x00), /* CARrier check Failed Enable for path B - CLEAR */
    SSM_CARFEB1_SET_gc   = (0x01), /* CARrier check Failed Enable for path B - SET */
} SSM_CARFEB1_t;

/* End Of Telegram on Path B Fail Enable */
typedef enum SSM_EOTBFE2_enum
{
    SSM_EOTBFE2_CLEAR_gc = (0x00), /* End Of Telegram on Path B Fail Enable - CLEAR */
    SSM_EOTBFE2_SET_gc   = (0x80), /* End Of Telegram on Path B Fail Enable - SET */
} SSM_EOTBFE2_t;

/* RSSI Range Fail Enable on Path A */
typedef enum SSM_RRFEA2_enum
{
    SSM_RRFEA2_CLEAR_gc = (0x00), /* RSSI Range Fail Enable on Path A - CLEAR */
    SSM_RRFEA2_SET_gc   = (0x40), /* RSSI Range Fail Enable on Path A - SET */
} SSM_RRFEA2_t;

/* Telegram Length Reached Enable on Path A */
typedef enum SSM_TELREA2_enum
{
    SSM_TELREA2_CLEAR_gc = (0x00), /* Telegram Length Reached Enable on Path A - CLEAR */
    SSM_TELREA2_SET_gc   = (0x20), /* Telegram Length Reached Enable on Path A - SET */
} SSM_TELREA2_t;

/* Time-Out Fail Enable on Path A */
typedef enum SSM_TMOFEA2_enum
{
    SSM_TMOFEA2_CLEAR_gc = (0x00), /* Time-Out Fail Enable on Path A - CLEAR */
    SSM_TMOFEA2_SET_gc   = (0x10), /* Time-Out Fail Enable on Path A - SET */
} SSM_TMOFEA2_t;

/* MANchester Coding Failed Enable for Path A */
typedef enum SSM_MANFEA2_enum
{
    SSM_MANFEA2_CLEAR_gc = (0x00), /* MANchester Coding Failed Enable for Path A - CLEAR */
    SSM_MANFEA2_SET_gc   = (0x08), /* MANchester Coding Failed Enable for Path A - SET */
} SSM_MANFEA2_t;

/* SYmbol Timing check Failed Enable for Path A */
typedef enum SSM_SYTFEA2_enum
{
    SSM_SYTFEA2_CLEAR_gc = (0x00), /* SYmbol Timing check Failed Enable for Path A - CLEAR */
    SSM_SYTFEA2_SET_gc   = (0x04), /* SYmbol Timing check Failed Enable for Path A - SET */
} SSM_SYTFEA2_t;

/* AMPlitude Failed Enable for path A */
typedef enum SSM_AMPFEA2_enum
{
    SSM_AMPFEA2_CLEAR_gc = (0x00), /* AMPlitude Failed Enable for path A - CLEAR */
    SSM_AMPFEA2_SET_gc   = (0x02), /* AMPlitude Failed Enable for path A - SET */
} SSM_AMPFEA2_t;

/* CARrier check Failed Enable for path A */
typedef enum SSM_CARFEA2_enum
{
    SSM_CARFEA2_CLEAR_gc = (0x00), /* CARrier check Failed Enable for path A - CLEAR */
    SSM_CARFEA2_SET_gc   = (0x01), /* CARrier check Failed Enable for path A - SET */
} SSM_CARFEA2_t;

/* End Of Telegram on Path B Fail Enable */
typedef enum SSM_EOTAFE2_enum
{
    SSM_EOTAFE2_CLEAR_gc = (0x00), /* End Of Telegram on Path B Fail Enable - CLEAR */
    SSM_EOTAFE2_SET_gc   = (0x80), /* End Of Telegram on Path B Fail Enable - SET */
} SSM_EOTAFE2_t;

/* RSSI Range Fail Enable on Path B */
typedef enum SSM_RRFEB2_enum
{
    SSM_RRFEB2_CLEAR_gc = (0x00), /* RSSI Range Fail Enable on Path B - CLEAR */
    SSM_RRFEB2_SET_gc   = (0x40), /* RSSI Range Fail Enable on Path B - SET */
} SSM_RRFEB2_t;

/* Telegram Length Reached Enable on Path B */
typedef enum SSM_TELREB2_enum
{
    SSM_TELREB2_CLEAR_gc = (0x00), /* Telegram Length Reached Enable on Path B - CLEAR */
    SSM_TELREB2_SET_gc   = (0x20), /* Telegram Length Reached Enable on Path B - SET */
} SSM_TELREB2_t;

/* Time-Out Fail Enable on Path B */
typedef enum SSM_TMOFEB2_enum
{
    SSM_TMOFEB2_CLEAR_gc = (0x00), /* Time-Out Fail Enable on Path B - CLEAR */
    SSM_TMOFEB2_SET_gc   = (0x10), /* Time-Out Fail Enable on Path B - SET */
} SSM_TMOFEB2_t;

/* MANchester Coding Failed Enable for Path B */
typedef enum SSM_MANFEB2_enum
{
    SSM_MANFEB2_CLEAR_gc = (0x00), /* MANchester Coding Failed Enable for Path B - CLEAR */
    SSM_MANFEB2_SET_gc   = (0x08), /* MANchester Coding Failed Enable for Path B - SET */
} SSM_MANFEB2_t;

/* SYmbol Timing check Failed Enable for Path B */
typedef enum SSM_SYTFEB2_enum
{
    SSM_SYTFEB2_CLEAR_gc = (0x00), /* SYmbol Timing check Failed Enable for Path B - CLEAR */
    SSM_SYTFEB2_SET_gc   = (0x04), /* SYmbol Timing check Failed Enable for Path B - SET */
} SSM_SYTFEB2_t;

/* AMPlitude Failed Enable for path B */
typedef enum SSM_AMPFEB2_enum
{
    SSM_AMPFEB2_CLEAR_gc = (0x00), /* AMPlitude Failed Enable for path B - CLEAR */
    SSM_AMPFEB2_SET_gc   = (0x02), /* AMPlitude Failed Enable for path B - SET */
} SSM_AMPFEB2_t;

/* CARrier check Failed Enable for path B */
typedef enum SSM_CARFEB2_enum
{
    SSM_CARFEB2_CLEAR_gc = (0x00), /* CARrier check Failed Enable for path B - CLEAR */
    SSM_CARFEB2_SET_gc   = (0x01), /* CARrier check Failed Enable for path B - SET */
} SSM_CARFEB2_t;

/* End Of Telegram on Path B Fail Enable */
typedef enum SSM_EOTBFE3_enum
{
    SSM_EOTBFE3_CLEAR_gc = (0x00), /* End Of Telegram on Path B Fail Enable - CLEAR */
    SSM_EOTBFE3_SET_gc   = (0x80), /* End Of Telegram on Path B Fail Enable - SET */
} SSM_EOTBFE3_t;

/* RSSI Range Fail Enable on Path A */
typedef enum SSM_RRFEA3_enum
{
    SSM_RRFEA3_CLEAR_gc = (0x00), /* RSSI Range Fail Enable on Path A - CLEAR */
    SSM_RRFEA3_SET_gc   = (0x40), /* RSSI Range Fail Enable on Path A - SET */
} SSM_RRFEA3_t;

/* Telegram Length Reached Enable on Path A */
typedef enum SSM_TELREA3_enum
{
    SSM_TELREA3_CLEAR_gc = (0x00), /* Telegram Length Reached Enable on Path A - CLEAR */
    SSM_TELREA3_SET_gc   = (0x20), /* Telegram Length Reached Enable on Path A - SET */
} SSM_TELREA3_t;

/* Time-Out Fail Enable on Path A */
typedef enum SSM_TMOFEA3_enum
{
    SSM_TMOFEA3_CLEAR_gc = (0x00), /* Time-Out Fail Enable on Path A - CLEAR */
    SSM_TMOFEA3_SET_gc   = (0x10), /* Time-Out Fail Enable on Path A - SET */
} SSM_TMOFEA3_t;

/* MANchester Coding Failed Enable for Path A */
typedef enum SSM_MANFEA3_enum
{
    SSM_MANFEA3_CLEAR_gc = (0x00), /* MANchester Coding Failed Enable for Path A - CLEAR */
    SSM_MANFEA3_SET_gc   = (0x08), /* MANchester Coding Failed Enable for Path A - SET */
} SSM_MANFEA3_t;

/* SYmbol Timing check Failed Enable for Path A */
typedef enum SSM_SYTFEA3_enum
{
    SSM_SYTFEA3_CLEAR_gc = (0x00), /* SYmbol Timing check Failed Enable for Path A - CLEAR */
    SSM_SYTFEA3_SET_gc   = (0x04), /* SYmbol Timing check Failed Enable for Path A - SET */
} SSM_SYTFEA3_t;

/* AMPlitude Failed Enable for path A */
typedef enum SSM_AMPFEA3_enum
{
    SSM_AMPFEA3_CLEAR_gc = (0x00), /* AMPlitude Failed Enable for path A - CLEAR */
    SSM_AMPFEA3_SET_gc   = (0x02), /* AMPlitude Failed Enable for path A - SET */
} SSM_AMPFEA3_t;

/* CARrier check Failed Enable for path A */
typedef enum SSM_CARFEA3_enum
{
    SSM_CARFEA3_CLEAR_gc = (0x00), /* CARrier check Failed Enable for path A - CLEAR */
    SSM_CARFEA3_SET_gc   = (0x01), /* CARrier check Failed Enable for path A - SET */
} SSM_CARFEA3_t;

/* End Of Telegram on Path B Fail Enable */
typedef enum SSM_EOTAFE3_enum
{
    SSM_EOTAFE3_CLEAR_gc = (0x00), /* End Of Telegram on Path B Fail Enable - CLEAR */
    SSM_EOTAFE3_SET_gc   = (0x80), /* End Of Telegram on Path B Fail Enable - SET */
} SSM_EOTAFE3_t;

/* RSSI Range Fail Enable on Path B */
typedef enum SSM_RRFEB3_enum
{
    SSM_RRFEB3_CLEAR_gc = (0x00), /* RSSI Range Fail Enable on Path B - CLEAR */
    SSM_RRFEB3_SET_gc   = (0x40), /* RSSI Range Fail Enable on Path B - SET */
} SSM_RRFEB3_t;

/* Telegram Length Reached Enable on Path B */
typedef enum SSM_TELREB3_enum
{
    SSM_TELREB3_CLEAR_gc = (0x00), /* Telegram Length Reached Enable on Path B - CLEAR */
    SSM_TELREB3_SET_gc   = (0x20), /* Telegram Length Reached Enable on Path B - SET */
} SSM_TELREB3_t;

/* Time-Out Fail Enable on Path B */
typedef enum SSM_TMOFEB3_enum
{
    SSM_TMOFEB3_CLEAR_gc = (0x00), /* Time-Out Fail Enable on Path B - CLEAR */
    SSM_TMOFEB3_SET_gc   = (0x10), /* Time-Out Fail Enable on Path B - SET */
} SSM_TMOFEB3_t;

/* MANchester Coding Failed Enable for Path B */
typedef enum SSM_MANFEB3_enum
{
    SSM_MANFEB3_CLEAR_gc = (0x00), /* MANchester Coding Failed Enable for Path B - CLEAR */
    SSM_MANFEB3_SET_gc   = (0x08), /* MANchester Coding Failed Enable for Path B - SET */
} SSM_MANFEB3_t;

/* SYmbol Timing check Failed Enable for Path B */
typedef enum SSM_SYTFEB3_enum
{
    SSM_SYTFEB3_CLEAR_gc = (0x00), /* SYmbol Timing check Failed Enable for Path B - CLEAR */
    SSM_SYTFEB3_SET_gc   = (0x04), /* SYmbol Timing check Failed Enable for Path B - SET */
} SSM_SYTFEB3_t;

/* AMPlitude Failed Enable for path B */
typedef enum SSM_AMPFEB3_enum
{
    SSM_AMPFEB3_CLEAR_gc = (0x00), /* AMPlitude Failed Enable for path B - CLEAR */
    SSM_AMPFEB3_SET_gc   = (0x02), /* AMPlitude Failed Enable for path B - SET */
} SSM_AMPFEB3_t;

/* CARrier check Failed Enable for path B */
typedef enum SSM_CARFEB3_enum
{
    SSM_CARFEB3_CLEAR_gc = (0x00), /* CARrier check Failed Enable for path B - CLEAR */
    SSM_CARFEB3_SET_gc   = (0x01), /* CARrier check Failed Enable for path B - SET */
} SSM_CARFEB3_t;

/* Intermittent WUP Mode Path B */
typedef enum SSM_IWUPB_enum
{
    SSM_IWUPB_CLEAR_gc = (0x00), /* Intermittent WUP Mode Path B - CLEAR */
    SSM_IWUPB_SET_gc   = (0x80), /* Intermittent WUP Mode Path B - SET */
} SSM_IWUPB_t;

/* Demodulator Automatic Restart on Path B */
typedef enum SSM_DARB_enum
{
    SSM_DARB_CLEAR_gc = (0x00), /* Demodulator Automatic Restart on Path B - CLEAR */
    SSM_DARB_SET_gc   = (0x40), /* Demodulator Automatic Restart on Path B - SET */
} SSM_DARB_t;

/* Gap Mode Path B */
typedef enum SSM_GAPMB_enum
{
    SSM_GAPMB_CLEAR_gc = (0x00), /* Gap Mode Path B - CLEAR */
    SSM_GAPMB_SET_gc   = (0x20), /* Gap Mode Path B - SET */
} SSM_GAPMB_t;

/* Rx Telegram End Handling Path B */
typedef enum SSM_RXTEHB_enum
{
    SSM_RXTEHB_CLEAR_gc = (0x00), /* Rx Telegram End Handling Path B - CLEAR */
    SSM_RXTEHB_SET_gc   = (0x10), /* Rx Telegram End Handling Path B - SET */
} SSM_RXTEHB_t;

/* Intermittent WUP Mode Path A */
typedef enum SSM_IWUPA_enum
{
    SSM_IWUPA_CLEAR_gc = (0x00), /* Intermittent WUP Mode Path A - CLEAR */
    SSM_IWUPA_SET_gc   = (0x08), /* Intermittent WUP Mode Path A - SET */
} SSM_IWUPA_t;

/* Demodulator Automatic Restart on Path A */
typedef enum SSM_DARA_enum
{
    SSM_DARA_CLEAR_gc = (0x00), /* Demodulator Automatic Restart on Path A - CLEAR */
    SSM_DARA_SET_gc   = (0x04), /* Demodulator Automatic Restart on Path A - SET */
} SSM_DARA_t;

/* Gap Mode Path A */
typedef enum SSM_GAPMA_enum
{
    SSM_GAPMA_CLEAR_gc = (0x00), /* Gap Mode Path A - CLEAR */
    SSM_GAPMA_SET_gc   = (0x02), /* Gap Mode Path A - SET */
} SSM_GAPMA_t;

/* Rx Telegram End Handling Path A */
typedef enum SSM_RXTEHA_enum
{
    SSM_RXTEHA_CLEAR_gc = (0x00), /* Rx Telegram End Handling Path A - CLEAR */
    SSM_RXTEHA_SET_gc   = (0x01), /* Rx Telegram End Handling Path A - SET */
} SSM_RXTEHA_t;

/* Master State Machine SubState Machine Select 0 */
typedef enum SSM_MSMSM0_enum
{
    SSM_MSMSM0_VAL_0x00_gc = (0x00), /* None/Stop */
    SSM_MSMSM0_VAL_0x01_gc = (0x01), /* PLL en */
    SSM_MSMSM0_VAL_0x02_gc = (0x02), /* PLL lock */
    SSM_MSMSM0_VAL_0x03_gc = (0x03), /* RX DSP enable */
    SSM_MSMSM0_VAL_0x04_gc = (0x04), /* RX DSP disable */
    SSM_MSMSM0_VAL_0x05_gc = (0x05), /* TX DSP enable */
    SSM_MSMSM0_VAL_0x06_gc = (0x06), /* TX DSP disable */
    SSM_MSMSM0_VAL_0x07_gc = (0x07), /* RX to TX */
    SSM_MSMSM0_VAL_0x08_gc = (0x08), /* TX to RX */
    SSM_MSMSM0_VAL_0x09_gc = (0x09), /* Get telegram */
    SSM_MSMSM0_VAL_0x0A_gc = (0x0A), /* Send telegram */
    SSM_MSMSM0_VAL_0x0B_gc = (0x0B), /* Shut down */
    SSM_MSMSM0_VAL_0x0C_gc = (0x0C), /* VCO Tuning */
    SSM_MSMSM0_VAL_0x0D_gc = (0x0D), /* Antenna Tuning */
} SSM_MSMSM0_t;

/* Master State Machine SubState Machine Select 1 */
typedef enum SSM_MSMSM1_enum
{
    SSM_MSMSM1_VAL_0x00_gc = (0x00<<4), /* None/Stop */
    SSM_MSMSM1_VAL_0x01_gc = (0x01<<4), /* PLL en */
    SSM_MSMSM1_VAL_0x02_gc = (0x02<<4), /* PLL lock */
    SSM_MSMSM1_VAL_0x03_gc = (0x03<<4), /* RX DSP enable */
    SSM_MSMSM1_VAL_0x04_gc = (0x04<<4), /* RX DSP disable */
    SSM_MSMSM1_VAL_0x05_gc = (0x05<<4), /* TX DSP enable */
    SSM_MSMSM1_VAL_0x06_gc = (0x06<<4), /* TX DSP disable */
    SSM_MSMSM1_VAL_0x07_gc = (0x07<<4), /* RX to TX */
    SSM_MSMSM1_VAL_0x08_gc = (0x08<<4), /* TX to RX */
    SSM_MSMSM1_VAL_0x09_gc = (0x09<<4), /* Get telegram */
    SSM_MSMSM1_VAL_0x0A_gc = (0x0A<<4), /* Send telegram */
    SSM_MSMSM1_VAL_0x0B_gc = (0x0B<<4), /* Shut down */
    SSM_MSMSM1_VAL_0x0C_gc = (0x0C<<4), /* VCO Tuning */
    SSM_MSMSM1_VAL_0x0D_gc = (0x0D<<4), /* Antenna Tuning */
} SSM_MSMSM1_t;

/* Master State Machine SubState Machine Select 2 */
typedef enum SSM_MSMSM2_enum
{
    SSM_MSMSM2_VAL_0x00_gc = (0x00), /* None/Stop */
    SSM_MSMSM2_VAL_0x01_gc = (0x01), /* PLL en */
    SSM_MSMSM2_VAL_0x02_gc = (0x02), /* PLL lock */
    SSM_MSMSM2_VAL_0x03_gc = (0x03), /* RX DSP enable */
    SSM_MSMSM2_VAL_0x04_gc = (0x04), /* RX DSP disable */
    SSM_MSMSM2_VAL_0x05_gc = (0x05), /* TX DSP enable */
    SSM_MSMSM2_VAL_0x06_gc = (0x06), /* TX DSP disable */
    SSM_MSMSM2_VAL_0x07_gc = (0x07), /* RX to TX */
    SSM_MSMSM2_VAL_0x08_gc = (0x08), /* TX to RX */
    SSM_MSMSM2_VAL_0x09_gc = (0x09), /* Get telegram */
    SSM_MSMSM2_VAL_0x0A_gc = (0x0A), /* Send telegram */
    SSM_MSMSM2_VAL_0x0B_gc = (0x0B), /* Shut down */
    SSM_MSMSM2_VAL_0x0C_gc = (0x0C), /* VCO Tuning */
    SSM_MSMSM2_VAL_0x0D_gc = (0x0D), /* Antenna Tuning */
} SSM_MSMSM2_t;

/* Master State Machine SubState Machine Select 3 */
typedef enum SSM_MSMSM3_enum
{
    SSM_MSMSM3_VAL_0x00_gc = (0x00<<4), /* None/Stop */
    SSM_MSMSM3_VAL_0x01_gc = (0x01<<4), /* PLL en */
    SSM_MSMSM3_VAL_0x02_gc = (0x02<<4), /* PLL lock */
    SSM_MSMSM3_VAL_0x03_gc = (0x03<<4), /* RX DSP enable */
    SSM_MSMSM3_VAL_0x04_gc = (0x04<<4), /* RX DSP disable */
    SSM_MSMSM3_VAL_0x05_gc = (0x05<<4), /* TX DSP enable */
    SSM_MSMSM3_VAL_0x06_gc = (0x06<<4), /* TX DSP disable */
    SSM_MSMSM3_VAL_0x07_gc = (0x07<<4), /* RX to TX */
    SSM_MSMSM3_VAL_0x08_gc = (0x08<<4), /* TX to RX */
    SSM_MSMSM3_VAL_0x09_gc = (0x09<<4), /* Get telegram */
    SSM_MSMSM3_VAL_0x0A_gc = (0x0A<<4), /* Send telegram */
    SSM_MSMSM3_VAL_0x0B_gc = (0x0B<<4), /* Shut down */
    SSM_MSMSM3_VAL_0x0C_gc = (0x0C<<4), /* VCO Tuning */
    SSM_MSMSM3_VAL_0x0D_gc = (0x0D<<4), /* Antenna Tuning */
} SSM_MSMSM3_t;

/* Master State Machine SubState Machine Select 4 */
typedef enum SSM_MSMSM4_enum
{
    SSM_MSMSM4_VAL_0x00_gc = (0x00), /* None/Stop */
    SSM_MSMSM4_VAL_0x01_gc = (0x01), /* PLL en */
    SSM_MSMSM4_VAL_0x02_gc = (0x02), /* PLL lock */
    SSM_MSMSM4_VAL_0x03_gc = (0x03), /* RX DSP enable */
    SSM_MSMSM4_VAL_0x04_gc = (0x04), /* RX DSP disable */
    SSM_MSMSM4_VAL_0x05_gc = (0x05), /* TX DSP enable */
    SSM_MSMSM4_VAL_0x06_gc = (0x06), /* TX DSP disable */
    SSM_MSMSM4_VAL_0x07_gc = (0x07), /* RX to TX */
    SSM_MSMSM4_VAL_0x08_gc = (0x08), /* TX to RX */
    SSM_MSMSM4_VAL_0x09_gc = (0x09), /* Get telegram */
    SSM_MSMSM4_VAL_0x0A_gc = (0x0A), /* Send telegram */
    SSM_MSMSM4_VAL_0x0B_gc = (0x0B), /* Shut down */
    SSM_MSMSM4_VAL_0x0C_gc = (0x0C), /* VCO Tuning */
    SSM_MSMSM4_VAL_0x0D_gc = (0x0D), /* Antenna Tuning */
} SSM_MSMSM4_t;

/* Master State Machine SubState Machine Select 5 */
typedef enum SSM_MSMSM5_enum
{
    SSM_MSMSM5_VAL_0x00_gc = (0x00<<4), /* None/Stop */
    SSM_MSMSM5_VAL_0x01_gc = (0x01<<4), /* PLL en */
    SSM_MSMSM5_VAL_0x02_gc = (0x02<<4), /* PLL lock */
    SSM_MSMSM5_VAL_0x03_gc = (0x03<<4), /* RX DSP enable */
    SSM_MSMSM5_VAL_0x04_gc = (0x04<<4), /* RX DSP disable */
    SSM_MSMSM5_VAL_0x05_gc = (0x05<<4), /* TX DSP enable */
    SSM_MSMSM5_VAL_0x06_gc = (0x06<<4), /* TX DSP disable */
    SSM_MSMSM5_VAL_0x07_gc = (0x07<<4), /* RX to TX */
    SSM_MSMSM5_VAL_0x08_gc = (0x08<<4), /* TX to RX */
    SSM_MSMSM5_VAL_0x09_gc = (0x09<<4), /* Get telegram */
    SSM_MSMSM5_VAL_0x0A_gc = (0x0A<<4), /* Send telegram */
    SSM_MSMSM5_VAL_0x0B_gc = (0x0B<<4), /* Shut down */
    SSM_MSMSM5_VAL_0x0C_gc = (0x0C<<4), /* VCO Tuning */
    SSM_MSMSM5_VAL_0x0D_gc = (0x0D<<4), /* Antenna Tuning */
} SSM_MSMSM5_t;

/* Master State Machine SubState Machine Select 6 */
typedef enum SSM_MSMSM6_enum
{
    SSM_MSMSM6_VAL_0x00_gc = (0x00), /* None/Stop */
    SSM_MSMSM6_VAL_0x01_gc = (0x01), /* PLL en */
    SSM_MSMSM6_VAL_0x02_gc = (0x02), /* PLL lock */
    SSM_MSMSM6_VAL_0x03_gc = (0x03), /* RX DSP enable */
    SSM_MSMSM6_VAL_0x04_gc = (0x04), /* RX DSP disable */
    SSM_MSMSM6_VAL_0x05_gc = (0x05), /* TX DSP enable */
    SSM_MSMSM6_VAL_0x06_gc = (0x06), /* TX DSP disable */
    SSM_MSMSM6_VAL_0x07_gc = (0x07), /* RX to TX */
    SSM_MSMSM6_VAL_0x08_gc = (0x08), /* TX to RX */
    SSM_MSMSM6_VAL_0x09_gc = (0x09), /* Get telegram */
    SSM_MSMSM6_VAL_0x0A_gc = (0x0A), /* Send telegram */
    SSM_MSMSM6_VAL_0x0B_gc = (0x0B), /* Shut down */
    SSM_MSMSM6_VAL_0x0C_gc = (0x0C), /* VCO Tuning */
    SSM_MSMSM6_VAL_0x0D_gc = (0x0D), /* Antenna Tuning */
} SSM_MSMSM6_t;

/* Master State Machine SubState Machine Select 7 */
typedef enum SSM_MSMSM7_enum
{
    SSM_MSMSM7_VAL_0x00_gc = (0x00<<4), /* None/Stop */
    SSM_MSMSM7_VAL_0x01_gc = (0x01<<4), /* PLL en */
    SSM_MSMSM7_VAL_0x02_gc = (0x02<<4), /* PLL lock */
    SSM_MSMSM7_VAL_0x03_gc = (0x03<<4), /* RX DSP enable */
    SSM_MSMSM7_VAL_0x04_gc = (0x04<<4), /* RX DSP disable */
    SSM_MSMSM7_VAL_0x05_gc = (0x05<<4), /* TX DSP enable */
    SSM_MSMSM7_VAL_0x06_gc = (0x06<<4), /* TX DSP disable */
    SSM_MSMSM7_VAL_0x07_gc = (0x07<<4), /* RX to TX */
    SSM_MSMSM7_VAL_0x08_gc = (0x08<<4), /* TX to RX */
    SSM_MSMSM7_VAL_0x09_gc = (0x09<<4), /* Get telegram */
    SSM_MSMSM7_VAL_0x0A_gc = (0x0A<<4), /* Send telegram */
    SSM_MSMSM7_VAL_0x0B_gc = (0x0B<<4), /* Shut down */
    SSM_MSMSM7_VAL_0x0C_gc = (0x0C<<4), /* VCO Tuning */
    SSM_MSMSM7_VAL_0x0D_gc = (0x0D<<4), /* Antenna Tuning */
} SSM_MSMSM7_t;

/* Wake Check OK from path B Ok Enable */
typedef enum SSM_WCOBOE1_enum
{
    SSM_WCOBOE1_CLEAR_gc = (0x00), /* Wake Check OK from path B Ok Enable - CLEAR */
    SSM_WCOBOE1_SET_gc   = (0x80), /* Wake Check OK from path B Ok Enable - SET */
} SSM_WCOBOE1_t;

/* RSSI Range OK Enable for path A */
typedef enum SSM_RROEA1_enum
{
    SSM_RROEA1_CLEAR_gc = (0x00), /* RSSI Range OK Enable for path A - CLEAR */
    SSM_RROEA1_SET_gc   = (0x40), /* RSSI Range OK Enable for path A - SET */
} SSM_RROEA1_t;

/* Start of Frame IDentifier match Enabled for path A */
typedef enum SSM_SFIDEA1_enum
{
    SSM_SFIDEA1_CLEAR_gc = (0x00), /* Start of Frame IDentifier match Enabled for path A - CLEAR */
    SSM_SFIDEA1_SET_gc   = (0x20), /* Start of Frame IDentifier match Enabled for path A - SET */
} SSM_SFIDEA1_t;

/* Wake Up Pattern match Enabled for path A */
typedef enum SSM_WUPEA1_enum
{
    SSM_WUPEA1_CLEAR_gc = (0x00), /* Wake Up Pattern match Enabled for path A - CLEAR */
    SSM_WUPEA1_SET_gc   = (0x10), /* Wake Up Pattern match Enabled for path A - SET */
} SSM_WUPEA1_t;

/* Manchester Coding Ok Enabled for path A */
typedef enum SSM_MANOEA1_enum
{
    SSM_MANOEA1_CLEAR_gc = (0x00), /* Manchester Coding Ok Enabled for path A - CLEAR */
    SSM_MANOEA1_SET_gc   = (0x08), /* Manchester Coding Ok Enabled for path A - SET */
} SSM_MANOEA1_t;

/* Symbol Timing Ok Enabled for path A */
typedef enum SSM_SYTOEA1_enum
{
    SSM_SYTOEA1_CLEAR_gc = (0x00), /* Symbol Timing Ok Enabled for path A - CLEAR */
    SSM_SYTOEA1_SET_gc   = (0x04), /* Symbol Timing Ok Enabled for path A - SET */
} SSM_SYTOEA1_t;

/* AMPlitude Ok Enabled for path A */
typedef enum SSM_AMPOEA1_enum
{
    SSM_AMPOEA1_CLEAR_gc = (0x00), /* AMPlitude Ok Enabled for path A - CLEAR */
    SSM_AMPOEA1_SET_gc   = (0x02), /* AMPlitude Ok Enabled for path A - SET */
} SSM_AMPOEA1_t;

/* CARrier check Ok Enabled for path A */
typedef enum SSM_CAROEA1_enum
{
    SSM_CAROEA1_CLEAR_gc = (0x00), /* CARrier check Ok Enabled for path A - CLEAR */
    SSM_CAROEA1_SET_gc   = (0x01), /* CARrier check Ok Enabled for path A - SET */
} SSM_CAROEA1_t;

/* Wake Check Ok on path B Ok */
typedef enum SSM_WCOAOE1_enum
{
    SSM_WCOAOE1_CLEAR_gc = (0x00), /* Wake Check Ok on path B Ok - CLEAR */
    SSM_WCOAOE1_SET_gc   = (0x80), /* Wake Check Ok on path B Ok - SET */
} SSM_WCOAOE1_t;

/* RSSI Range Ok on Path A */
typedef enum SSM_RROEB1_enum
{
    SSM_RROEB1_CLEAR_gc = (0x00), /* RSSI Range Ok on Path A - CLEAR */
    SSM_RROEB1_SET_gc   = (0x40), /* RSSI Range Ok on Path A - SET */
} SSM_RROEB1_t;

/* Start of Frame IDentifier match Enabled for path B */
typedef enum SSM_SFIDEB1_enum
{
    SSM_SFIDEB1_CLEAR_gc = (0x00), /* Start of Frame IDentifier match Enabled for path B - CLEAR */
    SSM_SFIDEB1_SET_gc   = (0x20), /* Start of Frame IDentifier match Enabled for path B - SET */
} SSM_SFIDEB1_t;

/* Wake Up Pattern match Enabled for path B */
typedef enum SSM_WUPEB1_enum
{
    SSM_WUPEB1_CLEAR_gc = (0x00), /* Wake Up Pattern match Enabled for path B - CLEAR */
    SSM_WUPEB1_SET_gc   = (0x10), /* Wake Up Pattern match Enabled for path B - SET */
} SSM_WUPEB1_t;

/* Manchester Coding Ok Enabled for path B */
typedef enum SSM_MANOEB1_enum
{
    SSM_MANOEB1_CLEAR_gc = (0x00), /* Manchester Coding Ok Enabled for path B - CLEAR */
    SSM_MANOEB1_SET_gc   = (0x08), /* Manchester Coding Ok Enabled for path B - SET */
} SSM_MANOEB1_t;

/* Symbol Timing Ok Enabled for path B */
typedef enum SSM_SYTOEB1_enum
{
    SSM_SYTOEB1_CLEAR_gc = (0x00), /* Symbol Timing Ok Enabled for path B - CLEAR */
    SSM_SYTOEB1_SET_gc   = (0x04), /* Symbol Timing Ok Enabled for path B - SET */
} SSM_SYTOEB1_t;

/* AMPlitude Ok Enabled for path B */
typedef enum SSM_AMPOEB1_enum
{
    SSM_AMPOEB1_CLEAR_gc = (0x00), /* AMPlitude Ok Enabled for path B - CLEAR */
    SSM_AMPOEB1_SET_gc   = (0x02), /* AMPlitude Ok Enabled for path B - SET */
} SSM_AMPOEB1_t;

/* CARrier check Ok Enabled for path B */
typedef enum SSM_CAROEB1_enum
{
    SSM_CAROEB1_CLEAR_gc = (0x00), /* CARrier check Ok Enabled for path B - CLEAR */
    SSM_CAROEB1_SET_gc   = (0x01), /* CARrier check Ok Enabled for path B - SET */
} SSM_CAROEB1_t;

/* Wake Check OK from path B Ok Enable */
typedef enum SSM_WCOBOE2_enum
{
    SSM_WCOBOE2_CLEAR_gc = (0x00), /* Wake Check OK from path B Ok Enable - CLEAR */
    SSM_WCOBOE2_SET_gc   = (0x80), /* Wake Check OK from path B Ok Enable - SET */
} SSM_WCOBOE2_t;

/* RSSI Range OK Enable for path A */
typedef enum SSM_RROEA2_enum
{
    SSM_RROEA2_CLEAR_gc = (0x00), /* RSSI Range OK Enable for path A - CLEAR */
    SSM_RROEA2_SET_gc   = (0x40), /* RSSI Range OK Enable for path A - SET */
} SSM_RROEA2_t;

/* Start of Frame IDentifier match Enabled for path A */
typedef enum SSM_SFIDEA2_enum
{
    SSM_SFIDEA2_CLEAR_gc = (0x00), /* Start of Frame IDentifier match Enabled for path A - CLEAR */
    SSM_SFIDEA2_SET_gc   = (0x20), /* Start of Frame IDentifier match Enabled for path A - SET */
} SSM_SFIDEA2_t;

/* Wake Up Pattern match Enabled for path A */
typedef enum SSM_WUPEA2_enum
{
    SSM_WUPEA2_CLEAR_gc = (0x00), /* Wake Up Pattern match Enabled for path A - CLEAR */
    SSM_WUPEA2_SET_gc   = (0x10), /* Wake Up Pattern match Enabled for path A - SET */
} SSM_WUPEA2_t;

/* Manchester Coding Ok Enabled for path A */
typedef enum SSM_MANOEA2_enum
{
    SSM_MANOEA2_CLEAR_gc = (0x00), /* Manchester Coding Ok Enabled for path A - CLEAR */
    SSM_MANOEA2_SET_gc   = (0x08), /* Manchester Coding Ok Enabled for path A - SET */
} SSM_MANOEA2_t;

/* Symbol Timing Ok Enabled for path A */
typedef enum SSM_SYTOEA2_enum
{
    SSM_SYTOEA2_CLEAR_gc = (0x00), /* Symbol Timing Ok Enabled for path A - CLEAR */
    SSM_SYTOEA2_SET_gc   = (0x04), /* Symbol Timing Ok Enabled for path A - SET */
} SSM_SYTOEA2_t;

/* AMPlitude Ok Enabled for path A */
typedef enum SSM_AMPOEA2_enum
{
    SSM_AMPOEA2_CLEAR_gc = (0x00), /* AMPlitude Ok Enabled for path A - CLEAR */
    SSM_AMPOEA2_SET_gc   = (0x02), /* AMPlitude Ok Enabled for path A - SET */
} SSM_AMPOEA2_t;

/* CARrier check Ok Enabled for path A */
typedef enum SSM_CAROEA2_enum
{
    SSM_CAROEA2_CLEAR_gc = (0x00), /* CARrier check Ok Enabled for path A - CLEAR */
    SSM_CAROEA2_SET_gc   = (0x01), /* CARrier check Ok Enabled for path A - SET */
} SSM_CAROEA2_t;

/* Wake Check Ok on path B Ok */
typedef enum SSM_WCOAOE2_enum
{
    SSM_WCOAOE2_CLEAR_gc = (0x00), /* Wake Check Ok on path B Ok - CLEAR */
    SSM_WCOAOE2_SET_gc   = (0x80), /* Wake Check Ok on path B Ok - SET */
} SSM_WCOAOE2_t;

/* RSSI Range Ok on Path A */
typedef enum SSM_RROEB2_enum
{
    SSM_RROEB2_CLEAR_gc = (0x00), /* RSSI Range Ok on Path A - CLEAR */
    SSM_RROEB2_SET_gc   = (0x40), /* RSSI Range Ok on Path A - SET */
} SSM_RROEB2_t;

/* Start of Frame IDentifier match Enabled for path B */
typedef enum SSM_SFIDEB2_enum
{
    SSM_SFIDEB2_CLEAR_gc = (0x00), /* Start of Frame IDentifier match Enabled for path B - CLEAR */
    SSM_SFIDEB2_SET_gc   = (0x20), /* Start of Frame IDentifier match Enabled for path B - SET */
} SSM_SFIDEB2_t;

/* Wake Up Pattern match Enabled for path B */
typedef enum SSM_WUPEB2_enum
{
    SSM_WUPEB2_CLEAR_gc = (0x00), /* Wake Up Pattern match Enabled for path B - CLEAR */
    SSM_WUPEB2_SET_gc   = (0x10), /* Wake Up Pattern match Enabled for path B - SET */
} SSM_WUPEB2_t;

/* Manchester Coding Ok Enabled for path B */
typedef enum SSM_MANOEB2_enum
{
    SSM_MANOEB2_CLEAR_gc = (0x00), /* Manchester Coding Ok Enabled for path B - CLEAR */
    SSM_MANOEB2_SET_gc   = (0x08), /* Manchester Coding Ok Enabled for path B - SET */
} SSM_MANOEB2_t;

/* Symbol Timing Ok Enabled for path B */
typedef enum SSM_SYTOEB2_enum
{
    SSM_SYTOEB2_CLEAR_gc = (0x00), /* Symbol Timing Ok Enabled for path B - CLEAR */
    SSM_SYTOEB2_SET_gc   = (0x04), /* Symbol Timing Ok Enabled for path B - SET */
} SSM_SYTOEB2_t;

/* AMPlitude Ok Enabled for path B */
typedef enum SSM_AMPOEB2_enum
{
    SSM_AMPOEB2_CLEAR_gc = (0x00), /* AMPlitude Ok Enabled for path B - CLEAR */
    SSM_AMPOEB2_SET_gc   = (0x02), /* AMPlitude Ok Enabled for path B - SET */
} SSM_AMPOEB2_t;

/* CARrier check Ok Enabled for path B */
typedef enum SSM_CAROEB2_enum
{
    SSM_CAROEB2_CLEAR_gc = (0x00), /* CARrier check Ok Enabled for path B - CLEAR */
    SSM_CAROEB2_SET_gc   = (0x01), /* CARrier check Ok Enabled for path B - SET */
} SSM_CAROEB2_t;

/* Sequencer State Machine Enable Transparent Path B */
typedef enum SSM_SETRPB_enum
{
    SSM_SETRPB_CLEAR_gc = (0x00), /* Sequencer State Machine Enable Transparent Path B - CLEAR */
    SSM_SETRPB_SET_gc   = (0x80), /* Sequencer State Machine Enable Transparent Path B - SET */
} SSM_SETRPB_t;

/* Sequencer State Machine Enable Transparent Path A */
typedef enum SSM_SETRPA_enum
{
    SSM_SETRPA_CLEAR_gc = (0x00), /* Sequencer State Machine Enable Transparent Path A - CLEAR */
    SSM_SETRPA_SET_gc   = (0x40), /* Sequencer State Machine Enable Transparent Path A - SET */
} SSM_SETRPA_t;

/* Sequencer State Machine Tx Ask-Shaping Enable */
typedef enum SSM_SSMTAE_enum
{
    SSM_SSMTAE_CLEAR_gc = (0x00), /* Sequencer State Machine Tx Ask-Shaping Enable - CLEAR */
    SSM_SSMTAE_SET_gc   = (0x20), /* Sequencer State Machine Tx Ask-Shaping Enable - SET */
} SSM_SSMTAE_t;

/* Sequencer State Machine PV Enable */
typedef enum SSM_SSMPVE_enum
{
    SSM_SSMPVE_CLEAR_gc = (0x00), /* Sequencer State Machine PV Enable - CLEAR */
    SSM_SSMPVE_SET_gc   = (0x10), /* Sequencer State Machine PV Enable - SET */
} SSM_SSMPVE_t;

/* Sequencer State Machine Tx Preemphasis Enable */
typedef enum SSM_SSMTPE_enum
{
    SSM_SSMTPE_CLEAR_gc = (0x00), /* Sequencer State Machine Tx Preemphasis Enable - CLEAR */
    SSM_SSMTPE_SET_gc   = (0x08), /* Sequencer State Machine Tx Preemphasis Enable - SET */
} SSM_SSMTPE_t;

/* Sequencer State Machine Tx Gauss Enable */
typedef enum SSM_SSMTGE_enum
{
    SSM_SSMTGE_CLEAR_gc = (0x00), /* Sequencer State Machine Tx Gauss Enable - CLEAR */
    SSM_SSMTGE_SET_gc   = (0x04), /* Sequencer State Machine Tx Gauss Enable - SET */
} SSM_SSMTGE_t;

/* Sequencer State Machine Temperature Measurement */
typedef enum SSM_SSMTM_enum
{
    SSM_SSMTM_CLEAR_gc = (0x00), /* Sequencer State Machine Temperature Measurement - CLEAR */
    SSM_SSMTM_SET_gc   = (0x02), /* Sequencer State Machine Temperature Measurement - SET */
} SSM_SSMTM_t;

/* Sequencer State Machine Tx */
typedef enum SSM_SSMTX_enum
{
    SSM_SSMTX_CLEAR_gc = (0x00), /* Sequencer State Machine Tx - CLEAR */
    SSM_SSMTX_SET_gc   = (0x01), /* Sequencer State Machine Tx - SET */
} SSM_SSMTX_t;

/* Sequencer State Machine PLL Lock Delay Time */
typedef enum SSM_SSMPLDT_enum
{
    SSM_SSMPLDT_CLEAR_gc = (0x00), /* Sequencer State Machine PLL Lock Delay Time - CLEAR */
    SSM_SSMPLDT_SET_gc   = (0x20), /* Sequencer State Machine PLL Lock Delay Time - SET */
} SSM_SSMPLDT_t;

/* Sequencer State Machine Half Antennadamping Delay Time */
typedef enum SSM_SSMHADT_enum
{
    SSM_SSMHADT_CLEAR_gc = (0x00), /* Sequencer State Machine Half Antennadamping Delay Time - CLEAR */
    SSM_SSMHADT_SET_gc   = (0x10), /* Sequencer State Machine Half Antennadamping Delay Time - SET */
} SSM_SSMHADT_t;

/* Sequencer State Machine Double Filter Delay Time */
typedef enum SSM_SSMDFDT_enum
{
    SSM_SSMDFDT_CLEAR_gc = (0x00), /* Sequencer State Machine Double Filter Delay Time - CLEAR */
    SSM_SSMDFDT_SET_gc   = (0x08), /* Sequencer State Machine Double Filter Delay Time - SET */
} SSM_SSMDFDT_t;

/* Sequencer State Machine Filter Delay */
#define SSM_SSMFBR_SSMFID_gc(x) (x & 0x07)

/* Sequencer State Machine ID Scan Fail */
typedef enum SSM_SSMIDSF_enum
{
    SSM_SSMIDSF_CLEAR_gc = (0x00), /* Sequencer State Machine ID Scan Fail - CLEAR */
    SSM_SSMIDSF_SET_gc   = (0x02), /* Sequencer State Machine ID Scan Fail - SET */
} SSM_SSMIDSF_t;

/* Sequencer State Machine ID Scan OK */
typedef enum SSM_SSMIDSO_enum
{
    SSM_SSMIDSO_CLEAR_gc = (0x00), /* Sequencer State Machine ID Scan OK - CLEAR */
    SSM_SSMIDSO_SET_gc   = (0x01), /* Sequencer State Machine ID Scan OK - SET */
} SSM_SSMIDSO_t;

/* Sequencer State Machine Interrupt Flag */
typedef enum SSM_SSMIF_enum
{
    SSM_SSMIF_CLEAR_gc = (0x00), /* Sequencer State Machine Interrupt Flag - CLEAR */
    SSM_SSMIF_SET_gc   = (0x01), /* Sequencer State Machine Interrupt Flag - SET */
} SSM_SSMIF_t;

/* Sequencer State Machine Interrupt Mask */
typedef enum SSM_SSMIM_enum
{
    SSM_SSMIM_CLEAR_gc = (0x00), /* Sequencer State Machine Interrupt Mask - CLEAR */
    SSM_SSMIM_SET_gc   = (0x01), /* Sequencer State Machine Interrupt Mask - SET */
} SSM_SSMIM_t;

/* Sequencer State Machine Transparent Mode Output Enable */
typedef enum SSM_SSMTMOE_enum
{
    SSM_SSMTMOE_CLEAR_gc = (0x00), /* Sequencer State Machine Transparent Mode Output Enable - CLEAR */
    SSM_SSMTMOE_SET_gc   = (0x80), /* Sequencer State Machine Transparent Mode Output Enable - SET */
} SSM_SSMTMOE_t;

/* Sequencer State Machine ID Scan Enable */
typedef enum SSM_SSMIDSE_enum
{
    SSM_SSMIDSE_CLEAR_gc = (0x00), /* Sequencer State Machine ID Scan Enable - CLEAR */
    SSM_SSMIDSE_SET_gc   = (0x40), /* Sequencer State Machine ID Scan Enable - SET */
} SSM_SSMIDSE_t;

/* Sequencer State Machine IF Amplifier Enable */
typedef enum SSM_SSMIFA_enum
{
    SSM_SSMIFA_CLEAR_gc = (0x00), /* Sequencer State Machine IF Amplifier Enable - CLEAR */
    SSM_SSMIFA_SET_gc   = (0x20), /* Sequencer State Machine IF Amplifier Enable - SET */
} SSM_SSMIFA_t;

/* Sequencer State Machine Path Valid After SOT */
typedef enum SSM_SSMPVS_enum
{
    SSM_SSMPVS_CLEAR_gc = (0x00), /* Sequencer State Machine Path Valid After SOT - CLEAR */
    SSM_SSMPVS_SET_gc   = (0x10), /* Sequencer State Machine Path Valid After SOT - SET */
} SSM_SSMPVS_t;

/* Sequencer State Machine Antenna Damping Disable Path B */
typedef enum SSM_SSMADB_enum
{
    SSM_SSMADB_CLEAR_gc = (0x00), /* Sequencer State Machine Antenna Damping Disable Path B - CLEAR */
    SSM_SSMADB_SET_gc   = (0x08), /* Sequencer State Machine Antenna Damping Disable Path B - SET */
} SSM_SSMADB_t;

/* Sequencer State Machine Antenna Damping Disable Path A */
typedef enum SSM_SSMADA_enum
{
    SSM_SSMADA_CLEAR_gc = (0x00), /* Sequencer State Machine Antenna Damping Disable Path A - CLEAR */
    SSM_SSMADA_SET_gc   = (0x04), /* Sequencer State Machine Antenna Damping Disable Path A - SET */
} SSM_SSMADA_t;

/* Sequencer State Machine Path B */
typedef enum SSM_SSMPB_enum
{
    SSM_SSMPB_CLEAR_gc = (0x00), /* Sequencer State Machine Path B - CLEAR */
    SSM_SSMPB_SET_gc   = (0x02), /* Sequencer State Machine Path B - SET */
} SSM_SSMPB_t;

/* Sequencer State Machine Path A */
typedef enum SSM_SSMPA_enum
{
    SSM_SSMPA_CLEAR_gc = (0x00), /* Sequencer State Machine Path A - CLEAR */
    SSM_SSMPA_SET_gc   = (0x01), /* Sequencer State Machine Path A - SET */
} SSM_SSMPA_t;

/* Sequencer State Machine Stop */
typedef enum SSM_SSMST_enum
{
    SSM_SSMST_CLEAR_gc = (0x00), /* Sequencer State Machine Stop - CLEAR */
    SSM_SSMST_SET_gc   = (0x02), /* Sequencer State Machine Stop - SET */
} SSM_SSMST_t;

/* Sequencer State Machine Run */
typedef enum SSM_SSMR_enum
{
    SSM_SSMR_CLEAR_gc = (0x00), /* Sequencer State Machine Run - CLEAR */
    SSM_SSMR_SET_gc   = (0x01), /* Sequencer State Machine Run - SET */
} SSM_SSMR_t;

/* Sequencer State Machine Error */
typedef enum SSM_SSMERR_enum
{
    SSM_SSMERR_CLEAR_gc = (0x00), /* Sequencer State Machine Error - CLEAR */
    SSM_SSMERR_SET_gc   = (0x80), /* Sequencer State Machine Error - SET */
} SSM_SSMERR_t;

/* Sequencer State Machine Error State Machine */
#define SSM_SSMSR_SSMESM_gc(x) (x & 0x0F)

/*
--------------------------------------------------------------------------------
SUP - 
--------------------------------------------------------------------------------
*/

typedef struct SUP_struct
{
    register8_t rsv_0x00[74];  /* RESERVED REGISTER BLOCK */
    register8_t VMCSR;         /* Voltage Monitor Control and Status Register */
    register8_t rsv_0x4B[127]; /* RESERVED REGISTER BLOCK */
    register8_t SUPFR;         /* Supply Interrupt Flag Register */
    register8_t SUPCR;         /* Supply Control Register */
    register8_t rsv_0xCC;      /* RESERVED REGISTER */
    register8_t SUPCA2;        /* Supply calibration register 2 */
    register8_t SUPCA3;        /* Supply calibration register 3 */
    register8_t SUPCA4;        /* Supply calibration register 4 */
    register8_t CALRDY;        /* Calibration ready signature */
    register8_t VMCAL;         /* Voltage Monitor Calibration register */
} SUP_t;


/* DVCC Reset Threshold Calibration bit 6 */
typedef enum SUP_DCAL6_enum
{
    SUP_DCAL6_CLEAR_gc = (0x00), /* DVCC Reset Threshold Calibration bit 6 - CLEAR */
    SUP_DCAL6_SET_gc   = (0x40), /* DVCC Reset Threshold Calibration bit 6 - SET */
} SUP_DCAL6_t;

/* DVCC Reset Threshold Calibration bit 5 */
typedef enum SUP_DCAL5_enum
{
    SUP_DCAL5_CLEAR_gc = (0x00), /* DVCC Reset Threshold Calibration bit 5 - CLEAR */
    SUP_DCAL5_SET_gc   = (0x20), /* DVCC Reset Threshold Calibration bit 5 - SET */
} SUP_DCAL5_t;

/* DVCC Reset Threshold Calibration bit 4 */
typedef enum SUP_DCAL4_enum
{
    SUP_DCAL4_CLEAR_gc = (0x00), /* DVCC Reset Threshold Calibration bit 4 - CLEAR */
    SUP_DCAL4_SET_gc   = (0x10), /* DVCC Reset Threshold Calibration bit 4 - SET */
} SUP_DCAL4_t;

/* AVCC Reset Threshold Calibration bit 7 */
typedef enum SUP_ACAL7_enum
{
    SUP_ACAL7_CLEAR_gc = (0x00), /* AVCC Reset Threshold Calibration bit 7 - CLEAR */
    SUP_ACAL7_SET_gc   = (0x08), /* AVCC Reset Threshold Calibration bit 7 - SET */
} SUP_ACAL7_t;

/* AVCC Reset Threshold Calibration bit 6 */
typedef enum SUP_ACAL6_enum
{
    SUP_ACAL6_CLEAR_gc = (0x00), /* AVCC Reset Threshold Calibration bit 6 - CLEAR */
    SUP_ACAL6_SET_gc   = (0x04), /* AVCC Reset Threshold Calibration bit 6 - SET */
} SUP_ACAL6_t;

/* AVCC Reset Threshold Calibration bit 5 */
typedef enum SUP_ACAL5_enum
{
    SUP_ACAL5_CLEAR_gc = (0x00), /* AVCC Reset Threshold Calibration bit 5 - CLEAR */
    SUP_ACAL5_SET_gc   = (0x02), /* AVCC Reset Threshold Calibration bit 5 - SET */
} SUP_ACAL5_t;

/* AVCC Reset Threshold Calibration bit 4 */
typedef enum SUP_ACAL4_enum
{
    SUP_ACAL4_CLEAR_gc = (0x00), /* AVCC Reset Threshold Calibration bit 4 - CLEAR */
    SUP_ACAL4_SET_gc   = (0x01), /* AVCC Reset Threshold Calibration bit 4 - SET */
} SUP_ACAL4_t;

/* DVCC Regulator Output Voltage Calibration bit 3 */
typedef enum SUP_DCAL3_enum
{
    SUP_DCAL3_CLEAR_gc = (0x00), /* DVCC Regulator Output Voltage Calibration bit 3 - CLEAR */
    SUP_DCAL3_SET_gc   = (0x80), /* DVCC Regulator Output Voltage Calibration bit 3 - SET */
} SUP_DCAL3_t;

/* DVCC Regulator Output Voltage Calibration bit 2 */
typedef enum SUP_DCAL2_enum
{
    SUP_DCAL2_CLEAR_gc = (0x00), /* DVCC Regulator Output Voltage Calibration bit 2 - CLEAR */
    SUP_DCAL2_SET_gc   = (0x40), /* DVCC Regulator Output Voltage Calibration bit 2 - SET */
} SUP_DCAL2_t;

/* DVCC Regulator Output Voltage Calibration bit 1 */
typedef enum SUP_DCAL1_enum
{
    SUP_DCAL1_CLEAR_gc = (0x00), /* DVCC Regulator Output Voltage Calibration bit 1 - CLEAR */
    SUP_DCAL1_SET_gc   = (0x20), /* DVCC Regulator Output Voltage Calibration bit 1 - SET */
} SUP_DCAL1_t;

/* DVCC Regulator Output Voltage Calibration bit 0 */
typedef enum SUP_DCAL0_enum
{
    SUP_DCAL0_CLEAR_gc = (0x00), /* DVCC Regulator Output Voltage Calibration bit 0 - CLEAR */
    SUP_DCAL0_SET_gc   = (0x10), /* DVCC Regulator Output Voltage Calibration bit 0 - SET */
} SUP_DCAL0_t;

/* AVCC Regulator Output Voltage Calibration bit 3 */
typedef enum SUP_ACAL3_enum
{
    SUP_ACAL3_CLEAR_gc = (0x00), /* AVCC Regulator Output Voltage Calibration bit 3 - CLEAR */
    SUP_ACAL3_SET_gc   = (0x08), /* AVCC Regulator Output Voltage Calibration bit 3 - SET */
} SUP_ACAL3_t;

/* AVCC Regulator Output Voltage Calibration bit 2 */
typedef enum SUP_ACAL2_enum
{
    SUP_ACAL2_CLEAR_gc = (0x00), /* AVCC Regulator Output Voltage Calibration bit 2 - CLEAR */
    SUP_ACAL2_SET_gc   = (0x04), /* AVCC Regulator Output Voltage Calibration bit 2 - SET */
} SUP_ACAL2_t;

/* AVCC Regulator Output Voltage Calibration bit 1 */
typedef enum SUP_ACAL1_enum
{
    SUP_ACAL1_CLEAR_gc = (0x00), /* AVCC Regulator Output Voltage Calibration bit 1 - CLEAR */
    SUP_ACAL1_SET_gc   = (0x02), /* AVCC Regulator Output Voltage Calibration bit 1 - SET */
} SUP_ACAL1_t;

/* AVCC Regulator Output Voltage Calibration bit 0 */
typedef enum SUP_ACAL0_enum
{
    SUP_ACAL0_CLEAR_gc = (0x00), /* AVCC Regulator Output Voltage Calibration bit 0 - CLEAR */
    SUP_ACAL0_SET_gc   = (0x01), /* AVCC Regulator Output Voltage Calibration bit 0 - SET */
} SUP_ACAL0_t;

/* AVCC Double Internal Current */
typedef enum SUP_AVDIC_enum
{
    SUP_AVDIC_CLEAR_gc = (0x00), /* AVCC Double Internal Current - CLEAR */
    SUP_AVDIC_SET_gc   = (0x40), /* AVCC Double Internal Current - SET */
} SUP_AVDIC_t;

/* AVCC Enable */
typedef enum SUP_AVEN_enum
{
    SUP_AVEN_CLEAR_gc = (0x00), /* AVCC Enable - CLEAR */
    SUP_AVEN_SET_gc   = (0x20), /* AVCC Enable - SET */
} SUP_AVEN_t;

/* DVCC Disable */
typedef enum SUP_DVDIS_enum
{
    SUP_DVDIS_CLEAR_gc = (0x00), /* DVCC Disable - CLEAR */
    SUP_DVDIS_SET_gc   = (0x10), /* DVCC Disable - SET */
} SUP_DVDIS_t;

/* Power amplifier Voltage supply Enable */
typedef enum SUP_PVEN_enum
{
    SUP_PVEN_CLEAR_gc = (0x00), /* Power amplifier Voltage supply Enable - CLEAR */
    SUP_PVEN_SET_gc   = (0x04), /* Power amplifier Voltage supply Enable - SET */
} SUP_PVEN_t;

/* AVCC Low Interrupt Mask Bit */
typedef enum SUP_AVCCLM_enum
{
    SUP_AVCCLM_CLEAR_gc = (0x00), /* AVCC Low Interrupt Mask Bit - CLEAR */
    SUP_AVCCLM_SET_gc   = (0x02), /* AVCC Low Interrupt Mask Bit - SET */
} SUP_AVCCLM_t;

/* AVCC Reset Interrupt Mask Bit */
typedef enum SUP_AVCCRM_enum
{
    SUP_AVCCRM_CLEAR_gc = (0x00), /* AVCC Reset Interrupt Mask Bit - CLEAR */
    SUP_AVCCRM_SET_gc   = (0x01), /* AVCC Reset Interrupt Mask Bit - SET */
} SUP_AVCCRM_t;

/* AVCC low interrupt flag */
typedef enum SUP_AVCCLF_enum
{
    SUP_AVCCLF_CLEAR_gc = (0x00), /* AVCC low interrupt flag - CLEAR */
    SUP_AVCCLF_SET_gc   = (0x02), /* AVCC low interrupt flag - SET */
} SUP_AVCCLF_t;

/* AVCC reset interrupt flag */
typedef enum SUP_AVCCRF_enum
{
    SUP_AVCCRF_CLEAR_gc = (0x00), /* AVCC reset interrupt flag - CLEAR */
    SUP_AVCCRF_SET_gc   = (0x01), /* AVCC reset interrupt flag - SET */
} SUP_AVCCRF_t;

/* Voltage Monitor Flag */
typedef enum SUP_VMF_enum
{
    SUP_VMF_CLEAR_gc = (0x00), /* Voltage Monitor Flag - CLEAR */
    SUP_VMF_SET_gc   = (0x20), /* Voltage Monitor Flag - SET */
} SUP_VMF_t;

/* Voltage Monitor Interrupt Mask */
typedef enum SUP_VMIM_enum
{
    SUP_VMIM_CLEAR_gc = (0x00), /* Voltage Monitor Interrupt Mask - CLEAR */
    SUP_VMIM_SET_gc   = (0x10), /* Voltage Monitor Interrupt Mask - SET */
} SUP_VMIM_t;

/* Voltage Monitor Level Select */
#define SUP_VMCSR_VMLS_gc(x) (x & 0x0F)

/*
--------------------------------------------------------------------------------
SYMCH - 
--------------------------------------------------------------------------------
*/

typedef struct SYMCH_struct
{
    register8_t rsv_0x00[157]; /* RESERVED REGISTER BLOCK */
    register8_t SYCB;          /* Symbol check configuration for data path B */
    register8_t SYCA;          /* Symbol check configuration for data path A */
} SYMCH_t;


/* Symbol timing limit for path A */
#define SYMCH_SYCA_SYTLA_gc(x) ((x<<4) & 0xF0)

/* Symbol Check check size for data path A */
#define SYMCH_SYCA_SYCSA_gc(x) (x & 0x0F)

/* Symbol timing limit for path B */
#define SYMCH_SYCB_SYTLB_gc(x) ((x<<4) & 0xF0)

/* Symbol Check check size for data path B */
#define SYMCH_SYCB_SYCSB_gc(x) (x & 0x0F)

/*
--------------------------------------------------------------------------------
TEMPER - 
--------------------------------------------------------------------------------
*/

typedef struct TEMPER_struct
{
    register8_t rsv_0x00[155]; /* RESERVED REGISTER BLOCK */
    register8_t TEMPL;         /* Temperature Low byte */
    register8_t TEMPH;         /* Temperature High byte */
} TEMPER_t;


/*
--------------------------------------------------------------------------------
TIMER0_WDT - 
--------------------------------------------------------------------------------
*/

typedef struct TIMER0_WDT_struct
{
    register8_t rsv_0x00[48]; /* RESERVED REGISTER BLOCK */
    register8_t T0CR;         /* Timer0 Control Register */
    register8_t rsv_0x31[30]; /* RESERVED REGISTER BLOCK */
    register8_t T0IFR;        /* Timer0 Interrupt Flag Register */
    register8_t rsv_0x50[30]; /* RESERVED REGISTER BLOCK */
    register8_t WDTCR;        /* Watchdog Timer0 control Register */
} TIMER0_WDT_t;


/* Timer 0 Prescaler Reset */
typedef enum TIMER0_WDT_T0PR_enum
{
    TIMER0_WDT_T0PR_CLEAR_gc = (0x00), /* Timer 0 Prescaler Reset - CLEAR */
    TIMER0_WDT_T0PR_SET_gc   = (0x10), /* Timer 0 Prescaler Reset - SET */
} TIMER0_WDT_T0PR_t;

/* Timer 0 Interrupt Enable */
typedef enum TIMER0_WDT_T0IE_enum
{
    TIMER0_WDT_T0IE_CLEAR_gc = (0x00), /* Timer 0 Interrupt Enable - CLEAR */
    TIMER0_WDT_T0IE_SET_gc   = (0x08), /* Timer 0 Interrupt Enable - SET */
} TIMER0_WDT_T0IE_t;

/* Timer 0 Prescaler Select */
#define TIMER0_WDT_T0CR_T0PS_gc(x) (x & 0x07)

/* Timer0 Flag */
typedef enum TIMER0_WDT_T0F_enum
{
    TIMER0_WDT_T0F_CLEAR_gc = (0x00), /* Timer0 Flag - CLEAR */
    TIMER0_WDT_T0F_SET_gc   = (0x01), /* Timer0 Flag - SET */
} TIMER0_WDT_T0F_t;

/* Watchdog Change Enable */
typedef enum TIMER0_WDT_WDCE_enum
{
    TIMER0_WDT_WDCE_CLEAR_gc = (0x00), /* Watchdog Change Enable - CLEAR */
    TIMER0_WDT_WDCE_SET_gc   = (0x10), /* Watchdog Change Enable - SET */
} TIMER0_WDT_WDCE_t;

/* Watchdog System Reset Enable */
typedef enum TIMER0_WDT_WDE_enum
{
    TIMER0_WDT_WDE_CLEAR_gc = (0x00), /* Watchdog System Reset Enable - CLEAR */
    TIMER0_WDT_WDE_SET_gc   = (0x08), /* Watchdog System Reset Enable - SET */
} TIMER0_WDT_WDE_t;

/* Watchdog Prescaler Select */
#define TIMER0_WDT_WDTCR_WDPS_gc(x) (x & 0x07)

/*
--------------------------------------------------------------------------------
TIMER1 - 
--------------------------------------------------------------------------------
*/

typedef struct TIMER1_struct
{
    register8_t rsv_0x00[49]; /* RESERVED REGISTER BLOCK */
    register8_t T1CR;         /* Timer1 control Register */
    register8_t rsv_0x32[3];  /* RESERVED REGISTER BLOCK */
    register8_t T1IFR;        /* Timer1 Interrupt Flag Register */
    register8_t rsv_0x36[57]; /* RESERVED REGISTER BLOCK */
    register8_t T1CNT;        /* Timer1 Counter Register */
    register8_t T1COR;        /* Timer1 Compare Register */
    register8_t T1MR;         /* Timer1 Mode Register */
    register8_t T1IMR;        /* Timer1 Interrupt Mask Register */
} TIMER1_t;


/* Timer1 Enable */
typedef enum TIMER1_T1ENA_enum
{
    TIMER1_T1ENA_CLEAR_gc = (0x00), /* Timer1 Enable - CLEAR */
    TIMER1_T1ENA_SET_gc   = (0x80), /* Timer1 Enable - SET */
} TIMER1_T1ENA_t;

/* Timer1 Toggle with Start */
typedef enum TIMER1_T1TOS_enum
{
    TIMER1_T1TOS_CLEAR_gc = (0x00), /* Timer1 Toggle with Start - CLEAR */
    TIMER1_T1TOS_SET_gc   = (0x40), /* Timer1 Toggle with Start - SET */
} TIMER1_T1TOS_t;

/* Timer1 Reset */
typedef enum TIMER1_T1RES_enum
{
    TIMER1_T1RES_CLEAR_gc = (0x00), /* Timer1 Reset - CLEAR */
    TIMER1_T1RES_SET_gc   = (0x20), /* Timer1 Reset - SET */
} TIMER1_T1RES_t;

/* Timer1 Toggle Output Preset */
typedef enum TIMER1_T1TOP_enum
{
    TIMER1_T1TOP_CLEAR_gc = (0x00), /* Timer1 Toggle Output Preset - CLEAR */
    TIMER1_T1TOP_SET_gc   = (0x10), /* Timer1 Toggle Output Preset - SET */
} TIMER1_T1TOP_t;

/* Timer1 Compare Reset Mask */
typedef enum TIMER1_T1CRM_enum
{
    TIMER1_T1CRM_CLEAR_gc = (0x00), /* Timer1 Compare Reset Mask - CLEAR */
    TIMER1_T1CRM_SET_gc   = (0x04), /* Timer1 Compare Reset Mask - SET */
} TIMER1_T1CRM_t;

/* Timer1 Compare Toggle Mask */
typedef enum TIMER1_T1CTM_enum
{
    TIMER1_T1CTM_CLEAR_gc = (0x00), /* Timer1 Compare Toggle Mask - CLEAR */
    TIMER1_T1CTM_SET_gc   = (0x02), /* Timer1 Compare Toggle Mask - SET */
} TIMER1_T1CTM_t;

/* Timer1 Overflow Toggle Mask */
typedef enum TIMER1_T1OTM_enum
{
    TIMER1_T1OTM_CLEAR_gc = (0x00), /* Timer1 Overflow Toggle Mask - CLEAR */
    TIMER1_T1OTM_SET_gc   = (0x01), /* Timer1 Overflow Toggle Mask - SET */
} TIMER1_T1OTM_t;

/* Timer1 Compare Flag */
typedef enum TIMER1_T1COF_enum
{
    TIMER1_T1COF_CLEAR_gc = (0x00), /* Timer1 Compare Flag - CLEAR */
    TIMER1_T1COF_SET_gc   = (0x02), /* Timer1 Compare Flag - SET */
} TIMER1_T1COF_t;

/* Timer1 Overflow Flag */
typedef enum TIMER1_T1OFF_enum
{
    TIMER1_T1OFF_CLEAR_gc = (0x00), /* Timer1 Overflow Flag - CLEAR */
    TIMER1_T1OFF_SET_gc   = (0x01), /* Timer1 Overflow Flag - SET */
} TIMER1_T1OFF_t;

/* Timer1 Compare Interrupt Mask */
typedef enum TIMER1_T1CIM_enum
{
    TIMER1_T1CIM_CLEAR_gc = (0x00), /* Timer1 Compare Interrupt Mask - CLEAR */
    TIMER1_T1CIM_SET_gc   = (0x02), /* Timer1 Compare Interrupt Mask - SET */
} TIMER1_T1CIM_t;

/* Timer1 Overflow Interrupt Mask */
typedef enum TIMER1_T1OIM_enum
{
    TIMER1_T1OIM_CLEAR_gc = (0x00), /* Timer1 Overflow Interrupt Mask - CLEAR */
    TIMER1_T1OIM_SET_gc   = (0x01), /* Timer1 Overflow Interrupt Mask - SET */
} TIMER1_T1OIM_t;

/* Timer1 Duty Cycle */
#define TIMER1_T1MR_T1DC_gc(x) ((x<<6) & 0xC0)

/* Timer1 Prescaler Select */
#define TIMER1_T1MR_T1PS_gc(x) ((x<<2) & 0x3C)

/* Timer1 Clock Select */
typedef enum TIMER1_T1CS_enum
{
    TIMER1_T1CS_VAL_0x00_gc = (0x00), /* clk_src */
    TIMER1_T1CS_VAL_0x01_gc = (0x01), /* clk_frc */
    TIMER1_T1CS_VAL_0x02_gc = (0x02), /* clk_T */
    TIMER1_T1CS_VAL_0x03_gc = (0x03), /* clk_xto4 */
} TIMER1_T1CS_t;

/*
--------------------------------------------------------------------------------
TIMER2 - 
--------------------------------------------------------------------------------
*/

typedef struct TIMER2_struct
{
    register8_t rsv_0x00[50]; /* RESERVED REGISTER BLOCK */
    register8_t T2CR;         /* Timer2 Control Register */
    register8_t rsv_0x33[3];  /* RESERVED REGISTER BLOCK */
    register8_t T2IFR;        /* Timer2 Interrupt Flag Register */
    register8_t rsv_0x37[60]; /* RESERVED REGISTER BLOCK */
    register8_t T2CNT;        /* Timer2 Counter Register */
    register8_t T2COR;        /* Timer2 Compare Register */
    register8_t T2MR;         /* Timer2 Mode Register */
    register8_t T2IMR;        /* Timer2 Interrupt Mask Register */
} TIMER2_t;


/* Timer2 Enable */
typedef enum TIMER2_T2ENA_enum
{
    TIMER2_T2ENA_CLEAR_gc = (0x00), /* Timer2 Enable - CLEAR */
    TIMER2_T2ENA_SET_gc   = (0x80), /* Timer2 Enable - SET */
} TIMER2_T2ENA_t;

/* Timer2 Toggle with Start */
typedef enum TIMER2_T2TOS_enum
{
    TIMER2_T2TOS_CLEAR_gc = (0x00), /* Timer2 Toggle with Start - CLEAR */
    TIMER2_T2TOS_SET_gc   = (0x40), /* Timer2 Toggle with Start - SET */
} TIMER2_T2TOS_t;

/* Timer2 Reset */
typedef enum TIMER2_T2RES_enum
{
    TIMER2_T2RES_CLEAR_gc = (0x00), /* Timer2 Reset - CLEAR */
    TIMER2_T2RES_SET_gc   = (0x20), /* Timer2 Reset - SET */
} TIMER2_T2RES_t;

/* Timer2 Toggle Output Preset */
typedef enum TIMER2_T2TOP_enum
{
    TIMER2_T2TOP_CLEAR_gc = (0x00), /* Timer2 Toggle Output Preset - CLEAR */
    TIMER2_T2TOP_SET_gc   = (0x10), /* Timer2 Toggle Output Preset - SET */
} TIMER2_T2TOP_t;

/* Timer2 Compare Reset Mask */
typedef enum TIMER2_T2CRM_enum
{
    TIMER2_T2CRM_CLEAR_gc = (0x00), /* Timer2 Compare Reset Mask - CLEAR */
    TIMER2_T2CRM_SET_gc   = (0x04), /* Timer2 Compare Reset Mask - SET */
} TIMER2_T2CRM_t;

/* Timer2 Compare Toggle Mask */
typedef enum TIMER2_T2CTM_enum
{
    TIMER2_T2CTM_CLEAR_gc = (0x00), /* Timer2 Compare Toggle Mask - CLEAR */
    TIMER2_T2CTM_SET_gc   = (0x02), /* Timer2 Compare Toggle Mask - SET */
} TIMER2_T2CTM_t;

/* Timer2 Overflow Toggle Mask */
typedef enum TIMER2_T2OTM_enum
{
    TIMER2_T2OTM_CLEAR_gc = (0x00), /* Timer2 Overflow Toggle Mask - CLEAR */
    TIMER2_T2OTM_SET_gc   = (0x01), /* Timer2 Overflow Toggle Mask - SET */
} TIMER2_T2OTM_t;

/* Timer2 Compare Flag */
typedef enum TIMER2_T2COF_enum
{
    TIMER2_T2COF_CLEAR_gc = (0x00), /* Timer2 Compare Flag - CLEAR */
    TIMER2_T2COF_SET_gc   = (0x02), /* Timer2 Compare Flag - SET */
} TIMER2_T2COF_t;

/* Timer2 Overflow Flag */
typedef enum TIMER2_T2OFF_enum
{
    TIMER2_T2OFF_CLEAR_gc = (0x00), /* Timer2 Overflow Flag - CLEAR */
    TIMER2_T2OFF_SET_gc   = (0x01), /* Timer2 Overflow Flag - SET */
} TIMER2_T2OFF_t;

/* Timer2 Compare Interrupt Mask */
typedef enum TIMER2_T2CIM_enum
{
    TIMER2_T2CIM_CLEAR_gc = (0x00), /* Timer2 Compare Interrupt Mask - CLEAR */
    TIMER2_T2CIM_SET_gc   = (0x02), /* Timer2 Compare Interrupt Mask - SET */
} TIMER2_T2CIM_t;

/* Timer2 Overflow Interrupt Mask */
typedef enum TIMER2_T2OIM_enum
{
    TIMER2_T2OIM_CLEAR_gc = (0x00), /* Timer2 Overflow Interrupt Mask - CLEAR */
    TIMER2_T2OIM_SET_gc   = (0x01), /* Timer2 Overflow Interrupt Mask - SET */
} TIMER2_T2OIM_t;

/* Timer2 Duty Cycle */
#define TIMER2_T2MR_T2DC_gc(x) ((x<<6) & 0xC0)

/* Timer2 Prescaler Select */
#define TIMER2_T2MR_T2PS_gc(x) ((x<<2) & 0x3C)

/* Timer2 Clock Select */
typedef enum TIMER2_T2CS_enum
{
    TIMER2_T2CS_VAL_0x00_gc = (0x00), /* clk_src */
    TIMER2_T2CS_VAL_0x01_gc = (0x01), /* clk_vdiv */
    TIMER2_T2CS_VAL_0x02_gc = (0x02), /* clk_T */
    TIMER2_T2CS_VAL_0x03_gc = (0x03), /* clk_xto4 */
} TIMER2_T2CS_t;

/*
--------------------------------------------------------------------------------
TIMER3 - 
--------------------------------------------------------------------------------
*/

typedef struct TIMER3_struct
{
    register8_t rsv_0x00[51]; /* RESERVED REGISTER BLOCK */
    register8_t T3CR;         /* Timer3 control Register */
    register8_t rsv_0x34[3];  /* RESERVED REGISTER BLOCK */
    register8_t T3IFR;        /* Timer3 interrupt flag Register */
    register8_t rsv_0x38[63]; /* RESERVED REGISTER BLOCK */
    _REGISTER16 (T3CNT);      /* Timer3 counter Register */
    register8_t rsv_0x78;     /* RESERVED REGISTER */
    _REGISTER16 (T3COR);      /* Timer3 compare Register */
    register8_t rsv_0x7A;     /* RESERVED REGISTER */
    _REGISTER16 (T3ICR);      /* Timer3 input capture Register */
    register8_t rsv_0x7C;     /* RESERVED REGISTER */
    register8_t T3MRA;        /* Timer3 mode Register */
    register8_t T3MRB;        /* Timer3 mode Register */
    register8_t T3IMR;        /* Timer3 interrupt mask Register */
} TIMER3_t;


/* Timer3 Enable */
typedef enum TIMER3_T3ENA_enum
{
    TIMER3_T3ENA_CLEAR_gc = (0x00), /* Timer3 Enable - CLEAR */
    TIMER3_T3ENA_SET_gc   = (0x80), /* Timer3 Enable - SET */
} TIMER3_T3ENA_t;

/* Timer3 Toggle with Start */
typedef enum TIMER3_T3TOS_enum
{
    TIMER3_T3TOS_CLEAR_gc = (0x00), /* Timer3 Toggle with Start - CLEAR */
    TIMER3_T3TOS_SET_gc   = (0x40), /* Timer3 Toggle with Start - SET */
} TIMER3_T3TOS_t;

/* Timer3 Reset */
typedef enum TIMER3_T3RES_enum
{
    TIMER3_T3RES_CLEAR_gc = (0x00), /* Timer3 Reset - CLEAR */
    TIMER3_T3RES_SET_gc   = (0x20), /* Timer3 Reset - SET */
} TIMER3_T3RES_t;

/* Timer3 Toggle Output Preset */
typedef enum TIMER3_T3TOP_enum
{
    TIMER3_T3TOP_CLEAR_gc = (0x00), /* Timer3 Toggle Output Preset - CLEAR */
    TIMER3_T3TOP_SET_gc   = (0x10), /* Timer3 Toggle Output Preset - SET */
} TIMER3_T3TOP_t;

/* Timer3 CaPture reset Mask */
typedef enum TIMER3_T3CPRM_enum
{
    TIMER3_T3CPRM_CLEAR_gc = (0x00), /* Timer3 CaPture reset Mask - CLEAR */
    TIMER3_T3CPRM_SET_gc   = (0x08), /* Timer3 CaPture reset Mask - SET */
} TIMER3_T3CPRM_t;

/* Timer3 Compare Reset Mask */
typedef enum TIMER3_T3CRM_enum
{
    TIMER3_T3CRM_CLEAR_gc = (0x00), /* Timer3 Compare Reset Mask - CLEAR */
    TIMER3_T3CRM_SET_gc   = (0x04), /* Timer3 Compare Reset Mask - SET */
} TIMER3_T3CRM_t;

/* Timer3 Compare Toggle Mask */
typedef enum TIMER3_T3CTM_enum
{
    TIMER3_T3CTM_CLEAR_gc = (0x00), /* Timer3 Compare Toggle Mask - CLEAR */
    TIMER3_T3CTM_SET_gc   = (0x02), /* Timer3 Compare Toggle Mask - SET */
} TIMER3_T3CTM_t;

/* Timer3 Overflow Toggle Mask */
typedef enum TIMER3_T3OTM_enum
{
    TIMER3_T3OTM_CLEAR_gc = (0x00), /* Timer3 Overflow Toggle Mask - CLEAR */
    TIMER3_T3OTM_SET_gc   = (0x01), /* Timer3 Overflow Toggle Mask - SET */
} TIMER3_T3OTM_t;

/* Timer3 Input Capture Flag */
typedef enum TIMER3_T3ICF_enum
{
    TIMER3_T3ICF_CLEAR_gc = (0x00), /* Timer3 Input Capture Flag - CLEAR */
    TIMER3_T3ICF_SET_gc   = (0x04), /* Timer3 Input Capture Flag - SET */
} TIMER3_T3ICF_t;

/* Timer3 Compare Flag */
typedef enum TIMER3_T3COF_enum
{
    TIMER3_T3COF_CLEAR_gc = (0x00), /* Timer3 Compare Flag - CLEAR */
    TIMER3_T3COF_SET_gc   = (0x02), /* Timer3 Compare Flag - SET */
} TIMER3_T3COF_t;

/* Timer3 OverFlow Flag */
typedef enum TIMER3_T3OFF_enum
{
    TIMER3_T3OFF_CLEAR_gc = (0x00), /* Timer3 OverFlow Flag - CLEAR */
    TIMER3_T3OFF_SET_gc   = (0x01), /* Timer3 OverFlow Flag - SET */
} TIMER3_T3OFF_t;

/* Timer3 Capture Interrupt Mask */
typedef enum TIMER3_T3CPIM_enum
{
    TIMER3_T3CPIM_CLEAR_gc = (0x00), /* Timer3 Capture Interrupt Mask - CLEAR */
    TIMER3_T3CPIM_SET_gc   = (0x04), /* Timer3 Capture Interrupt Mask - SET */
} TIMER3_T3CPIM_t;

/* Timer3 Compare Interrupt Mask */
typedef enum TIMER3_T3CIM_enum
{
    TIMER3_T3CIM_CLEAR_gc = (0x00), /* Timer3 Compare Interrupt Mask - CLEAR */
    TIMER3_T3CIM_SET_gc   = (0x02), /* Timer3 Compare Interrupt Mask - SET */
} TIMER3_T3CIM_t;

/* Timer3 Overflow Interrupt Mask */
typedef enum TIMER3_T3OIM_enum
{
    TIMER3_T3OIM_CLEAR_gc = (0x00), /* Timer3 Overflow Interrupt Mask - CLEAR */
    TIMER3_T3OIM_SET_gc   = (0x01), /* Timer3 Overflow Interrupt Mask - SET */
} TIMER3_T3OIM_t;

/* Timer3 Prescaler Select */
#define TIMER3_T3MRA_T3PS_gc(x) ((x<<2) & 0x1C)

/* Timer 3 Clock Select */
typedef enum TIMER3_T3CS_enum
{
    TIMER3_T3CS_VAL_0x00_gc = (0x00), /* clk_frc */
    TIMER3_T3CS_VAL_0x01_gc = (0x01), /* clk_T */
    TIMER3_T3CS_VAL_0x02_gc = (0x02), /* clk_xto4 */
    TIMER3_T3CS_VAL_0x03_gc = (0x03), /* clk_xto2 */
} TIMER3_T3CS_t;

/* Timer3 Input Capture Select */
#define TIMER3_T3MRB_T3ICS_gc(x) ((x<<5) & 0xE0)

/* Timer3 Capture Edge select */
typedef enum TIMER3_T3CE_enum
{
    TIMER3_T3CE_VAL_0x00_gc = (0x00<<3), /* disable */
    TIMER3_T3CE_VAL_0x01_gc = (0x01<<3), /* rising edge */
    TIMER3_T3CE_VAL_0x02_gc = (0x02<<3), /* falling edge */
    TIMER3_T3CE_VAL_0x03_gc = (0x03<<3), /* both edges */
} TIMER3_T3CE_t;

/* Timer3 input Capture Noise Canceller */
typedef enum TIMER3_T3CNC_enum
{
    TIMER3_T3CNC_CLEAR_gc = (0x00), /* Timer3 input Capture Noise Canceller - CLEAR */
    TIMER3_T3CNC_SET_gc   = (0x04), /* Timer3 input Capture Noise Canceller - SET */
} TIMER3_T3CNC_t;

/* Timer3 Software Capture Enable */
typedef enum TIMER3_T3SCE_enum
{
    TIMER3_T3SCE_CLEAR_gc = (0x00), /* Timer3 Software Capture Enable - CLEAR */
    TIMER3_T3SCE_SET_gc   = (0x02), /* Timer3 Software Capture Enable - SET */
} TIMER3_T3SCE_t;

/*
--------------------------------------------------------------------------------
TIMER4 - 
--------------------------------------------------------------------------------
*/

typedef struct TIMER4_struct
{
    register8_t rsv_0x00[52]; /* RESERVED REGISTER BLOCK */
    register8_t T4CR;         /* Timer4 control Register */
    register8_t rsv_0x35[3];  /* RESERVED REGISTER BLOCK */
    register8_t T4IFR;        /* Timer4 interrupt flag Register */
    register8_t rsv_0x39[71]; /* RESERVED REGISTER BLOCK */
    _REGISTER16 (T4CNT);      /* Timer4 counter Register */
    register8_t rsv_0x81;     /* RESERVED REGISTER */
    _REGISTER16 (T4COR);      /* Timer4 compare Register */
    register8_t rsv_0x83;     /* RESERVED REGISTER */
    _REGISTER16 (T4ICR);      /* Timer4 input capture Register */
    register8_t rsv_0x85;     /* RESERVED REGISTER */
    register8_t T4MRA;        /* Timer4 mode Register */
    register8_t T4MRB;        /* Timer4 mode Register */
    register8_t T4IMR;        /* Timer4 interrupt mask Register */
} TIMER4_t;


/* Timer4 Enable */
typedef enum TIMER4_T4ENA_enum
{
    TIMER4_T4ENA_CLEAR_gc = (0x00), /* Timer4 Enable - CLEAR */
    TIMER4_T4ENA_SET_gc   = (0x80), /* Timer4 Enable - SET */
} TIMER4_T4ENA_t;

/* Timer4 Toggle with Start */
typedef enum TIMER4_T4TOS_enum
{
    TIMER4_T4TOS_CLEAR_gc = (0x00), /* Timer4 Toggle with Start - CLEAR */
    TIMER4_T4TOS_SET_gc   = (0x40), /* Timer4 Toggle with Start - SET */
} TIMER4_T4TOS_t;

/* Timer4 Reset */
typedef enum TIMER4_T4RES_enum
{
    TIMER4_T4RES_CLEAR_gc = (0x00), /* Timer4 Reset - CLEAR */
    TIMER4_T4RES_SET_gc   = (0x20), /* Timer4 Reset - SET */
} TIMER4_T4RES_t;

/* Timer4 Toggle Output Preset */
typedef enum TIMER4_T4TOP_enum
{
    TIMER4_T4TOP_CLEAR_gc = (0x00), /* Timer4 Toggle Output Preset - CLEAR */
    TIMER4_T4TOP_SET_gc   = (0x10), /* Timer4 Toggle Output Preset - SET */
} TIMER4_T4TOP_t;

/* Timer4 CaPture reset Mask */
typedef enum TIMER4_T4CPRM_enum
{
    TIMER4_T4CPRM_CLEAR_gc = (0x00), /* Timer4 CaPture reset Mask - CLEAR */
    TIMER4_T4CPRM_SET_gc   = (0x08), /* Timer4 CaPture reset Mask - SET */
} TIMER4_T4CPRM_t;

/* Timer4 Compare Reset Mask */
typedef enum TIMER4_T4CRM_enum
{
    TIMER4_T4CRM_CLEAR_gc = (0x00), /* Timer4 Compare Reset Mask - CLEAR */
    TIMER4_T4CRM_SET_gc   = (0x04), /* Timer4 Compare Reset Mask - SET */
} TIMER4_T4CRM_t;

/* Timer4 Compare Toggle Mask */
typedef enum TIMER4_T4CTM_enum
{
    TIMER4_T4CTM_CLEAR_gc = (0x00), /* Timer4 Compare Toggle Mask - CLEAR */
    TIMER4_T4CTM_SET_gc   = (0x02), /* Timer4 Compare Toggle Mask - SET */
} TIMER4_T4CTM_t;

/* Timer4 Overflow Toggle Mask */
typedef enum TIMER4_T4OTM_enum
{
    TIMER4_T4OTM_CLEAR_gc = (0x00), /* Timer4 Overflow Toggle Mask - CLEAR */
    TIMER4_T4OTM_SET_gc   = (0x01), /* Timer4 Overflow Toggle Mask - SET */
} TIMER4_T4OTM_t;

/* Timer4 Input Capture Flag */
typedef enum TIMER4_T4ICF_enum
{
    TIMER4_T4ICF_CLEAR_gc = (0x00), /* Timer4 Input Capture Flag - CLEAR */
    TIMER4_T4ICF_SET_gc   = (0x04), /* Timer4 Input Capture Flag - SET */
} TIMER4_T4ICF_t;

/* Timer4 Compare Flag */
typedef enum TIMER4_T4COF_enum
{
    TIMER4_T4COF_CLEAR_gc = (0x00), /* Timer4 Compare Flag - CLEAR */
    TIMER4_T4COF_SET_gc   = (0x02), /* Timer4 Compare Flag - SET */
} TIMER4_T4COF_t;

/* Timer4 OverFlow Flag */
typedef enum TIMER4_T4OFF_enum
{
    TIMER4_T4OFF_CLEAR_gc = (0x00), /* Timer4 OverFlow Flag - CLEAR */
    TIMER4_T4OFF_SET_gc   = (0x01), /* Timer4 OverFlow Flag - SET */
} TIMER4_T4OFF_t;

/* Timer4 Capture Interrupt Mask */
typedef enum TIMER4_T4CPIM_enum
{
    TIMER4_T4CPIM_CLEAR_gc = (0x00), /* Timer4 Capture Interrupt Mask - CLEAR */
    TIMER4_T4CPIM_SET_gc   = (0x04), /* Timer4 Capture Interrupt Mask - SET */
} TIMER4_T4CPIM_t;

/* Timer4 Compare Interrupt Mask */
typedef enum TIMER4_T4CIM_enum
{
    TIMER4_T4CIM_CLEAR_gc = (0x00), /* Timer4 Compare Interrupt Mask - CLEAR */
    TIMER4_T4CIM_SET_gc   = (0x02), /* Timer4 Compare Interrupt Mask - SET */
} TIMER4_T4CIM_t;

/* Timer4 Overflow Interrupt Mask */
typedef enum TIMER4_T4OIM_enum
{
    TIMER4_T4OIM_CLEAR_gc = (0x00), /* Timer4 Overflow Interrupt Mask - CLEAR */
    TIMER4_T4OIM_SET_gc   = (0x01), /* Timer4 Overflow Interrupt Mask - SET */
} TIMER4_T4OIM_t;

/* Timer 4 Prescaler Select */
#define TIMER4_T4MRA_T4PS_gc(x) ((x<<2) & 0x1C)

/* Timer 4 Clock Select */
typedef enum TIMER4_T4CS_enum
{
    TIMER4_T4CS_VAL_0x00_gc = (0x00), /* clk_src */
    TIMER4_T4CS_VAL_0x01_gc = (0x01), /* clk_T */
    TIMER4_T4CS_VAL_0x02_gc = (0x02), /* clk_xto6 */
    TIMER4_T4CS_VAL_0x03_gc = (0x03), /* clk_frc */
} TIMER4_T4CS_t;

/* Timer4 Input Capture Select */
#define TIMER4_T4MRB_T4ICS_gc(x) ((x<<5) & 0xE0)

/* Timer4 Capture Edge select */
#define TIMER4_T4MRB_T4CE_gc(x) ((x<<3) & 0x18)

/* Timer4 input Capture Noise Canceller */
typedef enum TIMER4_T4CNC_enum
{
    TIMER4_T4CNC_CLEAR_gc = (0x00), /* Timer4 input Capture Noise Canceller - CLEAR */
    TIMER4_T4CNC_SET_gc   = (0x04), /* Timer4 input Capture Noise Canceller - SET */
} TIMER4_T4CNC_t;

/* Timer4 Software Capture Enable */
typedef enum TIMER4_T4SCE_enum
{
    TIMER4_T4SCE_CLEAR_gc = (0x00), /* Timer4 Software Capture Enable - CLEAR */
    TIMER4_T4SCE_SET_gc   = (0x02), /* Timer4 Software Capture Enable - SET */
} TIMER4_T4SCE_t;

/*
--------------------------------------------------------------------------------
TIMER5 - 
--------------------------------------------------------------------------------
*/

typedef struct TIMER5_struct
{
    register8_t rsv_0x00[57]; /* RESERVED REGISTER BLOCK */
    register8_t T5IFR;        /* Timer5 Interrupt Flag Register */
    register8_t rsv_0x3A[80]; /* RESERVED REGISTER BLOCK */
    _REGISTER16 (T5OCR);      /* Timer5 Output Compare Register */
    register8_t rsv_0x8B;     /* RESERVED REGISTER */
    register8_t T5CCR;        /* Timer5 Control Register */
    _REGISTER16 (T5CNT);      /* Timer5 Counter */
    register8_t rsv_0x8E;     /* RESERVED REGISTER */
    register8_t T5IMR;        /* Timer5 Interrupt Mask Register */
    register8_t GTCCR;        /* General Timer/Counter Control Register */
} TIMER5_t;


/* Timer/Counter Synchronization Mode */
typedef enum TIMER5_TSM_enum
{
    TIMER5_TSM_CLEAR_gc = (0x00), /* Timer/Counter Synchronization Mode - CLEAR */
    TIMER5_TSM_SET_gc   = (0x80), /* Timer/Counter Synchronization Mode - SET */
} TIMER5_TSM_t;

/* PreScaler Reset */
typedef enum TIMER5_PSR10_enum
{
    TIMER5_PSR10_CLEAR_gc = (0x00), /* PreScaler Reset - CLEAR */
    TIMER5_PSR10_SET_gc   = (0x01), /* PreScaler Reset - SET */
} TIMER5_PSR10_t;

/* Clear Timer5 on Compare Match */
typedef enum TIMER5_T5CTC_enum
{
    TIMER5_T5CTC_CLEAR_gc = (0x00), /* Clear Timer5 on Compare Match - CLEAR */
    TIMER5_T5CTC_SET_gc   = (0x08), /* Clear Timer5 on Compare Match - SET */
} TIMER5_T5CTC_t;

/* Timer5 Clock Select */
typedef enum TIMER5_T5CS_enum
{
    TIMER5_T5CS_VAL_0x00_gc = (0x00), /* No Clock Source (Stopped) */
    TIMER5_T5CS_VAL_0x01_gc = (0x01), /* Running, No Prescaling */
    TIMER5_T5CS_VAL_0x02_gc = (0x02), /* Running, CLK/8 */
    TIMER5_T5CS_VAL_0x03_gc = (0x03), /* Running, CLK/32 */
    TIMER5_T5CS_VAL_0x04_gc = (0x04), /* Running, CLK/64 */
    TIMER5_T5CS_VAL_0x05_gc = (0x05), /* Running, CLK/128 */
    TIMER5_T5CS_VAL_0x06_gc = (0x06), /* Running, CLK/256 */
    TIMER5_T5CS_VAL_0x07_gc = (0x07), /* Running, CLK/1024 */
} TIMER5_T5CS_t;

/* Timer5 Output Compare Output Match Flag */
typedef enum TIMER5_T5COF_enum
{
    TIMER5_T5COF_CLEAR_gc = (0x00), /* Timer5 Output Compare Output Match Flag - CLEAR */
    TIMER5_T5COF_SET_gc   = (0x02), /* Timer5 Output Compare Output Match Flag - SET */
} TIMER5_T5COF_t;

/* Timer5 Output Overflow Flag */
typedef enum TIMER5_T5OFF_enum
{
    TIMER5_T5OFF_CLEAR_gc = (0x00), /* Timer5 Output Overflow Flag - CLEAR */
    TIMER5_T5OFF_SET_gc   = (0x01), /* Timer5 Output Overflow Flag - SET */
} TIMER5_T5OFF_t;

/* Timer5 Output Compare Interrupt Mask */
typedef enum TIMER5_T5CIM_enum
{
    TIMER5_T5CIM_CLEAR_gc = (0x00), /* Timer5 Output Compare Interrupt Mask - CLEAR */
    TIMER5_T5CIM_SET_gc   = (0x02), /* Timer5 Output Compare Interrupt Mask - SET */
} TIMER5_T5CIM_t;

/* Timer5 Output Overflow Interrupt Mask */
typedef enum TIMER5_T5OIM_enum
{
    TIMER5_T5OIM_CLEAR_gc = (0x00), /* Timer5 Output Overflow Interrupt Mask - CLEAR */
    TIMER5_T5OIM_SET_gc   = (0x01), /* Timer5 Output Overflow Interrupt Mask - SET */
} TIMER5_T5OIM_t;
/*
================================================================================
IO Module Instances. Mapped to memory.
================================================================================
*/

#define CHFLT      (*(CHFLT_t *) 0x0000)      
#define CLK        (*(CLK_t *) 0x0000)        
#define CPU        (*(CPU_t *) 0x0000)        
#define CRC        (*(CRC_t *) 0x0000)        
#define DEBOUNCE   (*(DEBOUNCE_t *) 0x0000)   
#define DEBUG      (*(DEBUG_t *) 0x0000)      
#define DEMOD      (*(DEMOD_t *) 0x0000)      
#define DFIFO      (*(DFIFO_t *) 0x0000)      
#define EEPROM     (*(EEPROM_t *) 0x0000)     
#define FE         (*(FE_t *) 0x0000)         
#define FREQS      (*(FREQS_t *) 0x0000)      
#define FRSYNC     (*(FRSYNC_t *) 0x0000)     
#define GPIOREGS   (*(GPIOREGS_t *) 0x0000)   
#define IDSCAN     (*(IDSCAN_t *) 0x0000)     
#define INT        (*(INT_t *) 0x0000)        
#define MEM        (*(MEM_t *) 0x0000)        
#define PORTB      (*(PORTB_t *) 0x0000)      
#define PORTC      (*(PORTC_t *) 0x0000)      
#define RSSIB      (*(RSSIB_t *) 0x0000)      
#define RXBUF      (*(RXBUF_t *) 0x0000)      
#define RXDSP      (*(RXDSP_t *) 0x0000)      
#define SFIFO      (*(SFIFO_t *) 0x0000)      
#define SPI        (*(SPI_t *) 0x0000)        
#define SSM        (*(SSM_t *) 0x0000)        
#define SUP        (*(SUP_t *) 0x0000)        
#define SYMCH      (*(SYMCH_t *) 0x0000)      
#define TEMPER     (*(TEMPER_t *) 0x0000)     
#define TIMER0_WDT (*(TIMER0_WDT_t *) 0x0000) 
#define TIMER1     (*(TIMER1_t *) 0x0000)     
#define TIMER2     (*(TIMER2_t *) 0x0000)     
#define TIMER3     (*(TIMER3_t *) 0x0000)     
#define TIMER4     (*(TIMER4_t *) 0x0000)     
#define TIMER5     (*(TIMER5_t *) 0x0000)     
#define FUSE       (*(FUSE_t *) 0x0000)       
#define LOCKBIT    (*(LOCKBIT_t *) 0x0000)    
#else
/*
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
ASM LANGUAGE - ONLY
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/


/*
--------------------------------------------------------------------------------
FUSE - 
--------------------------------------------------------------------------------
*/


/* Divide clock by 8 internally */
#define FUSE_CKDIV8_CLEAR_gc (0x00) /* Divide clock by 8 internally - CLEAR */
#define FUSE_CKDIV8_SET_gc   (0x80) /* Divide clock by 8 internally - SET */


/* Debug Wire enable */
#define FUSE_DWEN_CLEAR_gc (0x00) /* Debug Wire enable - CLEAR */
#define FUSE_DWEN_SET_gc   (0x40) /* Debug Wire enable - SET */


/* Serial program downloading (SPI) enabled */
#define FUSE_SPIEN_CLEAR_gc (0x00) /* Serial program downloading (SPI) enabled - CLEAR */
#define FUSE_SPIEN_SET_gc   (0x20) /* Serial program downloading (SPI) enabled - SET */


/* Watch-dog Timer always on */
#define FUSE_WDTON_CLEAR_gc (0x00) /* Watch-dog Timer always on - CLEAR */
#define FUSE_WDTON_SET_gc   (0x10) /* Watch-dog Timer always on - SET */


/* Preserve EEPROM memory through the Chip Erase cycle */
#define FUSE_EESAVE_CLEAR_gc (0x00) /* Preserve EEPROM memory through the Chip Erase cycle - CLEAR */
#define FUSE_EESAVE_SET_gc   (0x08) /* Preserve EEPROM memory through the Chip Erase cycle - SET */


/* Select interrupt vector location */
#define FUSE_BOOTRST_CLEAR_gc (0x00) /* Select interrupt vector location - CLEAR */
#define FUSE_BOOTRST_SET_gc   (0x04) /* Select interrupt vector location - SET */


/* Disable external Reset */
#define FUSE_RSTDISBL_CLEAR_gc (0x00) /* Disable external Reset - CLEAR */
#define FUSE_RSTDISBL_SET_gc   (0x02) /* Disable external Reset - SET */


/* External Clock enable */
#define FUSE_EXTCLKEN_CLEAR_gc (0x00) /* External Clock enable - CLEAR */
#define FUSE_EXTCLKEN_SET_gc   (0x01) /* External Clock enable - SET */


/*
--------------------------------------------------------------------------------
LOCKBIT - 
--------------------------------------------------------------------------------
*/


/* Memory Lock */
#define LOCKBIT_LB_VAL_0x00_gc (0x00) /* Further programming and verification disabled */
#define LOCKBIT_LB_VAL_0x02_gc (0x02) /* Further programming disabled */
#define LOCKBIT_LB_VAL_0x03_gc (0x03) /* No memory lock features enable */


/* Application Protection */
#define LOCKBIT_AP_VAL_0x00_gc (0x00<<2) /* LPM and SPM prohibited in Application Section */
#define LOCKBIT_AP_VAL_0x04_gc (0x04<<2) /* LPM prohibited in Application Section */
#define LOCKBIT_AP_VAL_0x08_gc (0x08<<2) /* SPM prohibited in Application Section */
#define LOCKBIT_AP_VAL_0x0C_gc (0x0C<<2) /* No lock on SPM and LPM in Application Section */


/* Boot Loader Protection */
#define LOCKBIT_BLP_VAL_0x00_gc (0x00<<4) /* LPM and SPM prohibited in Boot Loader Section */
#define LOCKBIT_BLP_VAL_0x10_gc (0x10<<4) /* LPM prohibited in Boot Loader Section */
#define LOCKBIT_BLP_VAL_0x20_gc (0x20<<4) /* SPM prohibited in Boot Loader Section */
#define LOCKBIT_BLP_VAL_0x30_gc (0x30<<4) /* No lock on SPM and LPM in Boot Loader Section */


/*
--------------------------------------------------------------------------------
CHFLT - 
--------------------------------------------------------------------------------
*/


/* ADC Down Sampling Configuration */
#define CHFLT_ADCDN_CLEAR_gc (0x00) /* ADC Down Sampling Configuration - CLEAR */
#define CHFLT_ADCDN_SET_gc   (0x20) /* ADC Down Sampling Configuration - SET */


/* Baseband Filter Down Sampling Ratio */
#define CHFLT_CHDN_BBDN_gc(x) (x & 0x1F)

/*
--------------------------------------------------------------------------------
CLK - 
--------------------------------------------------------------------------------
*/


/* Clock output driver enable */
#define CLK_CLKOEN_CLEAR_gc (0x00) /* Clock output driver enable - CLEAR */
#define CLK_CLKOEN_SET_gc   (0x04) /* Clock output driver enable - SET */


/* Clock output source */
#define CLK_CLKOCR_CLKOS_gc(x) (x & 0x03)

/* SRC Active */
#define CLK_SRCACT_CLEAR_gc (0x00) /* SRC Active - CLEAR */
#define CLK_SRCACT_SET_gc   (0x08) /* SRC Active - SET */


/* FRC Active */
#define CLK_FRCACT_CLEAR_gc (0x00) /* FRC Active - CLEAR */
#define CLK_FRCACT_SET_gc   (0x04) /* FRC Active - SET */


/* SRC Always On */
#define CLK_SRCAO_CLEAR_gc (0x00) /* SRC Always On - CLEAR */
#define CLK_SRCAO_SET_gc   (0x02) /* SRC Always On - SET */


/* FRC Always On */
#define CLK_FRCAO_CLEAR_gc (0x00) /* FRC Always On - CLEAR */
#define CLK_FRCAO_SET_gc   (0x01) /* FRC Always On - SET */


/* External clock fail */
#define CLK_ECF_CLEAR_gc (0x00) /* External clock fail - CLEAR */
#define CLK_ECF_SET_gc   (0x01) /* External clock fail - SET */


/* Fast RC oscillator temperature compensation */
#define CLK_FRCTC_CLEAR_gc (0x00) /* Fast RC oscillator temperature compensation - CLEAR */
#define CLK_FRCTC_SET_gc   (0x20) /* Fast RC oscillator temperature compensation - SET */


/* Fast RC oscillator calibration */
#define CLK_FRCCAL_FRCCAL_gc(x) (x & 0x1F)

/* Power Reduction Clock Output */
#define CLK_PRCO_CLEAR_gc (0x00) /* Power Reduction Clock Output - CLEAR */
#define CLK_PRCO_SET_gc   (0x20) /* Power Reduction Clock Output - SET */


/* Power Reduction Voltage Monitor */
#define CLK_PRVM_CLEAR_gc (0x00) /* Power Reduction Voltage Monitor - CLEAR */
#define CLK_PRVM_SET_gc   (0x10) /* Power Reduction Voltage Monitor - SET */


/* Power Reduction CRC */
#define CLK_PRCRC_CLEAR_gc (0x00) /* Power Reduction CRC - CLEAR */
#define CLK_PRCRC_SET_gc   (0x08) /* Power Reduction CRC - SET */


/* Power Reduction Transmit DSP Control */
#define CLK_PRTXDC_CLEAR_gc (0x00) /* Power Reduction Transmit DSP Control - CLEAR */
#define CLK_PRTXDC_SET_gc   (0x04) /* Power Reduction Transmit DSP Control - SET */


/* Power Reduction Receive DSP Control */
#define CLK_PRRXDC_CLEAR_gc (0x00) /* Power Reduction Receive DSP Control - CLEAR */
#define CLK_PRRXDC_SET_gc   (0x02) /* Power Reduction Receive DSP Control - SET */


/* Power Reduction Serial Peripheral Interface */
#define CLK_PRSPI_CLEAR_gc (0x00) /* Power Reduction Serial Peripheral Interface - CLEAR */
#define CLK_PRSPI_SET_gc   (0x01) /* Power Reduction Serial Peripheral Interface - SET */


/* Power Reduction Timer 5 */
#define CLK_PRT5_CLEAR_gc (0x00) /* Power Reduction Timer 5 - CLEAR */
#define CLK_PRT5_SET_gc   (0x10) /* Power Reduction Timer 5 - SET */


/* Power Reduction Timer 4 */
#define CLK_PRT4_CLEAR_gc (0x00) /* Power Reduction Timer 4 - CLEAR */
#define CLK_PRT4_SET_gc   (0x08) /* Power Reduction Timer 4 - SET */


/* Power Reduction Timer 3 */
#define CLK_PRT3_CLEAR_gc (0x00) /* Power Reduction Timer 3 - CLEAR */
#define CLK_PRT3_SET_gc   (0x04) /* Power Reduction Timer 3 - SET */


/* Power Reduction Timer 2 */
#define CLK_PRT2_CLEAR_gc (0x00) /* Power Reduction Timer 2 - CLEAR */
#define CLK_PRT2_SET_gc   (0x02) /* Power Reduction Timer 2 - SET */


/* Power Reduction Timer 1 */
#define CLK_PRT1_CLEAR_gc (0x00) /* Power Reduction Timer 1 - CLEAR */
#define CLK_PRT1_SET_gc   (0x01) /* Power Reduction Timer 1 - SET */


/* Power Reduction Sequencer State Machine */
#define CLK_PRSSM_CLEAR_gc (0x00) /* Power Reduction Sequencer State Machine - CLEAR */
#define CLK_PRSSM_SET_gc   (0x80) /* Power Reduction Sequencer State Machine - SET */


/* Power Reduction RSSI Buffer */
#define CLK_PRRS_CLEAR_gc (0x00) /* Power Reduction RSSI Buffer - CLEAR */
#define CLK_PRRS_SET_gc   (0x20) /* Power Reduction RSSI Buffer - SET */


/* Power Reduction ID Scan */
#define CLK_PRIDS_CLEAR_gc (0x00) /* Power Reduction ID Scan - CLEAR */
#define CLK_PRIDS_SET_gc   (0x10) /* Power Reduction ID Scan - SET */


/* Power Reduction Data FIFO */
#define CLK_PRDF_CLEAR_gc (0x00) /* Power Reduction Data FIFO - CLEAR */
#define CLK_PRDF_SET_gc   (0x08) /* Power Reduction Data FIFO - SET */


/* Power Reduction Preamble/RSSI FIFO */
#define CLK_PRSF_CLEAR_gc (0x00) /* Power Reduction Preamble/RSSI FIFO - CLEAR */
#define CLK_PRSF_SET_gc   (0x04) /* Power Reduction Preamble/RSSI FIFO - SET */


/* Power Reduction Rx Buffer A */
#define CLK_PRXA_CLEAR_gc (0x00) /* Power Reduction Rx Buffer A - CLEAR */
#define CLK_PRXA_SET_gc   (0x02) /* Power Reduction Rx Buffer A - SET */


/* Power Reduction Rx Buffer B */
#define CLK_PRXB_CLEAR_gc (0x00) /* Power Reduction Rx Buffer B - CLEAR */
#define CLK_PRXB_SET_gc   (0x01) /* Power Reduction Rx Buffer B - SET */


/* Rx DSP power reduction register(RDPR) busy flag */
#define CLK_RDPRF_CLEAR_gc (0x00) /* Rx DSP power reduction register(RDPR) busy flag - CLEAR */
#define CLK_RDPRF_SET_gc   (0x80) /* Rx DSP power reduction register(RDPR) busy flag - SET */


/* Automatic Rx DSP Power Reduction Flag */
#define CLK_ARDPRF_CLEAR_gc (0x00) /* Automatic Rx DSP Power Reduction Flag - CLEAR */
#define CLK_ARDPRF_SET_gc   (0x40) /* Automatic Rx DSP Power Reduction Flag - SET */


/* Automatic Power Reduction of Path A */
#define CLK_APRPTA_CLEAR_gc (0x00) /* Automatic Power Reduction of Path A - CLEAR */
#define CLK_APRPTA_SET_gc   (0x20) /* Automatic Power Reduction of Path A - SET */


/* Automatic Power Reduction of Path B */
#define CLK_APRPTB_CLEAR_gc (0x00) /* Automatic Power Reduction of Path B - CLEAR */
#define CLK_APRPTB_SET_gc   (0x10) /* Automatic Power Reduction of Path B - SET */


/* Power reduction register for temperature measurement */
#define CLK_PRTMP_CLEAR_gc (0x00) /* Power reduction register for temperature measurement - CLEAR */
#define CLK_PRTMP_SET_gc   (0x08) /* Power reduction register for temperature measurement - SET */


/* Power reduction register for the digital channel filter */
#define CLK_PRFLT_CLEAR_gc (0x00) /* Power reduction register for the digital channel filter - CLEAR */
#define CLK_PRFLT_SET_gc   (0x04) /* Power reduction register for the digital channel filter - SET */


/* Power reduction register for the demodulator and receiving path B */
#define CLK_PRPTA_CLEAR_gc (0x00) /* Power reduction register for the demodulator and receiving path B - CLEAR */
#define CLK_PRPTA_SET_gc   (0x02) /* Power reduction register for the demodulator and receiving path B - SET */


/* Power reduction register for the demodulator and receiving path A */
#define CLK_PRPTB_CLEAR_gc (0x00) /* Power reduction register for the demodulator and receiving path A - CLEAR */
#define CLK_PRPTB_SET_gc   (0x01) /* Power reduction register for the demodulator and receiving path A - SET */


/* Slow RC oscillator temperature compensation */
#define CLK_SRCCAL_SRCTC_gc(x) ((x<<6) & 0xC0)

/* Slow RC oscillator calibration */
#define CLK_SRCCAL_SRCCAL_gc(x) (x & 0x3F)

/*
--------------------------------------------------------------------------------
CPU - 
--------------------------------------------------------------------------------
*/


/* Clock Prescaler Change Enable */
#define CPU_CLPCE_CLEAR_gc (0x00) /* Clock Prescaler Change Enable - CLEAR */
#define CPU_CLPCE_SET_gc   (0x80) /* Clock Prescaler Change Enable - SET */


/* Timer Clock Prescaler Select */
#define CPU_CLTPS_VAL_0x00_gc (0x00<<3) /* disabled */
#define CPU_CLTPS_VAL_0x01_gc (0x01<<3) /* 1 */
#define CPU_CLTPS_VAL_0x02_gc (0x02<<3) /* 2 */
#define CPU_CLTPS_VAL_0x03_gc (0x03<<3) /* 4 */
#define CPU_CLTPS_VAL_0x04_gc (0x04<<3) /* 8 */
#define CPU_CLTPS_VAL_0x05_gc (0x05<<3) /* 16 */
#define CPU_CLTPS_VAL_0x06_gc (0x06<<3) /* 32 */
#define CPU_CLTPS_VAL_0x07_gc (0x07<<3) /* 64 */


/* Clock Prescaler Select */
#define CPU_CLKPS_VAL_0x00_gc (0x00) /* 1 */
#define CPU_CLKPS_VAL_0x01_gc (0x01) /* 2 */
#define CPU_CLKPS_VAL_0x02_gc (0x02) /* 4 */
#define CPU_CLKPS_VAL_0x03_gc (0x03) /* 8 */
#define CPU_CLKPS_VAL_0x04_gc (0x04) /* 16 */
#define CPU_CLKPS_VAL_0x05_gc (0x05) /* 32 */
#define CPU_CLKPS_VAL_0x06_gc (0x06) /* 64 */
#define CPU_CLKPS_VAL_0x07_gc (0x07) /* 128 */


/* Clock management control change enable */
#define CPU_CMCCE_CLEAR_gc (0x00) /* Clock management control change enable - CLEAR */
#define CPU_CMCCE_SET_gc   (0x80) /* Clock management control change enable - SET */


/* Clock monitor enable */
#define CPU_CMONEN_CLEAR_gc (0x00) /* Clock monitor enable - CLEAR */
#define CPU_CMONEN_SET_gc   (0x40) /* Clock monitor enable - SET */


/* Slow RC oscillator disable */
#define CPU_SRCD_CLEAR_gc (0x00) /* Slow RC oscillator disable - CLEAR */
#define CPU_SRCD_SET_gc   (0x10) /* Slow RC oscillator disable - SET */


/* Core Clock Select */
#define CPU_CCS_CLEAR_gc (0x00) /* Core Clock Select - CLEAR */
#define CPU_CCS_SET_gc   (0x08) /* Core Clock Select - SET */


/* Clock Management Mode */
#define CPU_CMCR_CMM_gc(x) (x & 0x07)

/* External clock interrupt enable */
#define CPU_ECIE_CLEAR_gc (0x00) /* External clock interrupt enable - CLEAR */
#define CPU_ECIE_SET_gc   (0x01) /* External clock interrupt enable - SET */


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


/* SPM Interrupt Enable */
#define CPU_SPMIE_CLEAR_gc (0x00) /* SPM Interrupt Enable - CLEAR */
#define CPU_SPMIE_SET_gc   (0x80) /* SPM Interrupt Enable - SET */


/* Boot Lock Bit Set */
#define CPU_BLBSET_CLEAR_gc (0x00) /* Boot Lock Bit Set - CLEAR */
#define CPU_BLBSET_SET_gc   (0x08) /* Boot Lock Bit Set - SET */


/* Page Write */
#define CPU_PGWRT_CLEAR_gc (0x00) /* Page Write - CLEAR */
#define CPU_PGWRT_SET_gc   (0x04) /* Page Write - SET */


/* Page Erase */
#define CPU_PGERS_CLEAR_gc (0x00) /* Page Erase - CLEAR */
#define CPU_PGERS_SET_gc   (0x02) /* Page Erase - SET */


/* Self Programming Enable */
#define CPU_SELFPRGEN_CLEAR_gc (0x00) /* Self Programming Enable - CLEAR */
#define CPU_SELFPRGEN_SET_gc   (0x01) /* Self Programming Enable - SET */


/* Port B7 High Side Driver enable */
#define CPU_PB7HS_CLEAR_gc (0x00) /* Port B7 High Side Driver enable - CLEAR */
#define CPU_PB7HS_SET_gc   (0x80) /* Port B7 High Side Driver enable - SET */


/* Port B7 Low Side Driver enable */
#define CPU_PB7LS_CLEAR_gc (0x00) /* Port B7 Low Side Driver enable - CLEAR */
#define CPU_PB7LS_SET_gc   (0x40) /* Port B7 Low Side Driver enable - SET */


/* Port B4 High Side Driver enable */
#define CPU_PB4HS_CLEAR_gc (0x00) /* Port B4 High Side Driver enable - CLEAR */
#define CPU_PB4HS_SET_gc   (0x20) /* Port B4 High Side Driver enable - SET */


/* Pull-up Resistors Disable */
#define CPU_PUD_CLEAR_gc (0x00) /* Pull-up Resistors Disable - CLEAR */
#define CPU_PUD_SET_gc   (0x10) /* Pull-up Resistors Disable - SET */


/* Enable Port Settings */
#define CPU_ENPS_CLEAR_gc (0x00) /* Enable Port Settings - CLEAR */
#define CPU_ENPS_SET_gc   (0x08) /* Enable Port Settings - SET */


/* SPI Interrupt Only */
#define CPU_SPIIO_CLEAR_gc (0x00) /* SPI Interrupt Only - CLEAR */
#define CPU_SPIIO_SET_gc   (0x04) /* SPI Interrupt Only - SET */


/* Interrupt Vector Select */
#define CPU_IVSEL_CLEAR_gc (0x00) /* Interrupt Vector Select - CLEAR */
#define CPU_IVSEL_SET_gc   (0x02) /* Interrupt Vector Select - SET */


/* Interrupt Vector Change Enable */
#define CPU_IVCE_CLEAR_gc (0x00) /* Interrupt Vector Change Enable - CLEAR */
#define CPU_IVCE_SET_gc   (0x01) /* Interrupt Vector Change Enable - SET */


/* Watchdog Reset Flag */
#define CPU_WDRF_CLEAR_gc (0x00) /* Watchdog Reset Flag - CLEAR */
#define CPU_WDRF_SET_gc   (0x08) /* Watchdog Reset Flag - SET */


/* External Reset Flag */
#define CPU_EXTRF_CLEAR_gc (0x00) /* External Reset Flag - CLEAR */
#define CPU_EXTRF_SET_gc   (0x02) /* External Reset Flag - SET */


/* Power-on Reset flag */
#define CPU_PORF_CLEAR_gc (0x00) /* Power-on Reset flag - CLEAR */
#define CPU_PORF_SET_gc   (0x01) /* Power-on Reset flag - SET */


/* Sleep Mode Select */
#define CPU_SM_IDLE_gc     (0x00<<1) /* Idle */
#define CPU_SM_EPSAVE_gc   (0x01<<1) /* Extended power-save */
#define CPU_SM_PDOWN_gc    (0x02<<1) /* Power Down */
#define CPU_SM_PSAVE_gc    (0x03<<1) /* Power Save */
#define CPU_SM_VAL_0x04_gc (0x04<<1) /* Reserved */
#define CPU_SM_VAL_0x05_gc (0x05<<1) /* Reserved */
#define CPU_SM_VAL_0x06_gc (0x06<<1) /* Reserved */
#define CPU_SM_VAL_0x07_gc (0x07<<1) /* Reserved */


/* Sleep Enable */
#define CPU_SE_CLEAR_gc (0x00) /* Sleep Enable - CLEAR */
#define CPU_SE_SET_gc   (0x01) /* Sleep Enable - SET */


/*
--------------------------------------------------------------------------------
CRC - 
--------------------------------------------------------------------------------
*/


/* Reflect Data Output Byte */
#define CRC_REFLO_CLEAR_gc (0x00) /* Reflect Data Output Byte - CLEAR */
#define CRC_REFLO_SET_gc   (0x04) /* Reflect Data Output Byte - SET */


/* Reflect Data Input Byte */
#define CRC_REFLI_CLEAR_gc (0x00) /* Reflect Data Input Byte - CLEAR */
#define CRC_REFLI_SET_gc   (0x02) /* Reflect Data Input Byte - SET */


/* CRC Data Register Reset */
#define CRC_CRCRS_CLEAR_gc (0x00) /* CRC Data Register Reset - CLEAR */
#define CRC_CRCRS_SET_gc   (0x01) /* CRC Data Register Reset - SET */


/*
--------------------------------------------------------------------------------
DEBOUNCE - 
--------------------------------------------------------------------------------
*/


/* Debounce Handshake Active */
#define DEBOUNCE_DBHA_CLEAR_gc (0x00) /* Debounce Handshake Active - CLEAR */
#define DEBOUNCE_DBHA_SET_gc   (0x08) /* Debounce Handshake Active - SET */


/* Debounce Timer Mask Select */
#define DEBOUNCE_DBTMS_CLEAR_gc (0x00) /* Debounce Timer Mask Select - CLEAR */
#define DEBOUNCE_DBTMS_SET_gc   (0x04) /* Debounce Timer Mask Select - SET */


/* Debounce Clock Select */
#define DEBOUNCE_DBCS_CLEAR_gc (0x00) /* Debounce Clock Select - CLEAR */
#define DEBOUNCE_DBCS_SET_gc   (0x02) /* Debounce Clock Select - SET */


/* Debounce Mode */
#define DEBOUNCE_DBMD_CLEAR_gc (0x00) /* Debounce Mode - CLEAR */
#define DEBOUNCE_DBMD_SET_gc   (0x01) /* Debounce Mode - SET */


/*
--------------------------------------------------------------------------------
DEBUG - 
--------------------------------------------------------------------------------
*/


/* Debugging Support Switch Enable */
#define DEBUG_DBGSE_CLEAR_gc (0x00) /* Debugging Support Switch Enable - CLEAR */
#define DEBUG_DBGSE_SET_gc   (0x80) /* Debugging Support Switch Enable - SET */


/* CPU Busy Flag */
#define DEBUG_CPBF_CLEAR_gc (0x00) /* CPU Busy Flag - CLEAR */
#define DEBUG_CPBF_SET_gc   (0x40) /* CPU Busy Flag - SET */


/* CPU Busy Flag Output Select */
#define DEBUG_DBGSW_CPBFOS_gc(x) ((x<<4) & 0x30)

/* Debugging Support Group Select */
#define DEBUG_DBGSW_DBGGS_gc(x) (x & 0x0F)

/*
--------------------------------------------------------------------------------
DEMOD - 
--------------------------------------------------------------------------------
*/


/* Demodulator Carrier Detect Time for path A */
#define DEMOD_DMCDA_DMCTA_gc(x) ((x<<5) & 0xE0)

/* Demodulator Carrier Detect Limit for path A */
#define DEMOD_DMCDA_DMCLA_gc(x) (x & 0x1F)

/* Demodulator Carrier Detect Time for path B */
#define DEMOD_DMCDB_DMCTB_gc(x) ((x<<5) & 0xE0)

/* Demodulator Carrier Detect Limit for path B */
#define DEMOD_DMCDB_DMCLB_gc(x) (x & 0x1F)

/* Demodulator automatic restart on path A */
#define DEMOD_DMARA_CLEAR_gc (0x00) /* Demodulator automatic restart on path A - CLEAR */
#define DEMOD_DMARA_SET_gc   (0x80) /* Demodulator automatic restart on path A - SET */


/* Symbol check with only 1T on path A */
#define DEMOD_SY1TA_CLEAR_gc (0x00) /* Symbol check with only 1T on path A - CLEAR */
#define DEMOD_SY1TA_SET_gc   (0x40) /* Symbol check with only 1T on path A - SET */


/* Select ASK input for path A */
#define DEMOD_SASKA_CLEAR_gc (0x00) /* Select ASK input for path A - CLEAR */
#define DEMOD_SASKA_SET_gc   (0x20) /* Select ASK input for path A - SET */


/* Demodulator PLL loop gain for path A */
#define DEMOD_DMCRA_DMPGA_gc(x) (x & 0x1F)

/* Demodulator automatic restart on path B */
#define DEMOD_DMARB_CLEAR_gc (0x00) /* Demodulator automatic restart on path B - CLEAR */
#define DEMOD_DMARB_SET_gc   (0x80) /* Demodulator automatic restart on path B - SET */


/* Symbol check with only 1T on path B */
#define DEMOD_SY1TB_CLEAR_gc (0x00) /* Symbol check with only 1T on path B - CLEAR */
#define DEMOD_SY1TB_SET_gc   (0x40) /* Symbol check with only 1T on path B - SET */


/* Select ASK input for path B */
#define DEMOD_SASKB_CLEAR_gc (0x00) /* Select ASK input for path B - CLEAR */
#define DEMOD_SASKB_SET_gc   (0x20) /* Select ASK input for path B - SET */


/* Demodulator PLL loop gain for path B */
#define DEMOD_DMCRB_DMPGB_gc(x) (x & 0x1F)

/* Demodulator Downsampling on path A */
#define DEMOD_DMDRA_DMDNA_gc(x) ((x<<4) & 0xF0)

/* Demodulator Moving Average Data Rate factor on path A */
#define DEMOD_DMDRA_DMAA_gc(x) (x & 0x0F)

/* Demodulator Downsampling on path B */
#define DEMOD_DMDRB_DMDNB_gc(x) ((x<<4) & 0xF0)

/* Demodulator Moving Average Data Rate factor on path B */
#define DEMOD_DMDRB_DMAB_gc(x) (x & 0x0F)

/* Demodulator NRZ Enable for path A */
#define DEMOD_DMNEA_CLEAR_gc (0x00) /* Demodulator NRZ Enable for path A - CLEAR */
#define DEMOD_DMNEA_SET_gc   (0x80) /* Demodulator NRZ Enable for path A - SET */


/* Demodulator Hold Mode for path A */
#define DEMOD_DMHA_CLEAR_gc (0x00) /* Demodulator Hold Mode for path A - CLEAR */
#define DEMOD_DMHA_SET_gc   (0x40) /* Demodulator Hold Mode for path A - SET */


/* Demodulator Data Polarity Selection for path A */
#define DEMOD_DMPA_CLEAR_gc (0x00) /* Demodulator Data Polarity Selection for path A - CLEAR */
#define DEMOD_DMPA_SET_gc   (0x20) /* Demodulator Data Polarity Selection for path A - SET */


/* Demodulator Amplitude Threshold for path A */
#define DEMOD_DMMA_DMATA_gc(x) (x & 0x1F)

/* Demodulator NRZ Enable for path B */
#define DEMOD_DMNEB_CLEAR_gc (0x00) /* Demodulator NRZ Enable for path B - CLEAR */
#define DEMOD_DMNEB_SET_gc   (0x80) /* Demodulator NRZ Enable for path B - SET */


/* Demodulator Hold Mode for path B */
#define DEMOD_DMHB_CLEAR_gc (0x00) /* Demodulator Hold Mode for path B - CLEAR */
#define DEMOD_DMHB_SET_gc   (0x40) /* Demodulator Hold Mode for path B - SET */


/* Demodulator Data Polarity Selection for path B */
#define DEMOD_DMPB_CLEAR_gc (0x00) /* Demodulator Data Polarity Selection for path B - CLEAR */
#define DEMOD_DMPB_SET_gc   (0x20) /* Demodulator Data Polarity Selection for path B - SET */


/* Demodulator Amplitude Threshold for path B */
#define DEMOD_DMMB_DMATB_gc(x) (x & 0x1F)

/*
--------------------------------------------------------------------------------
DFIFO - 
--------------------------------------------------------------------------------
*/


/* Data FIFO Direct Read Access Operational Mode */
#define DFIFO_DFDRA_CLEAR_gc (0x00) /* Data FIFO Direct Read Access Operational Mode - CLEAR */
#define DFIFO_DFDRA_SET_gc   (0x80) /* Data FIFO Direct Read Access Operational Mode - SET */


/* Data FIFO Fill-Level Configuration */
#define DFIFO_DFC_DFFLC_gc(x) (x & 0x3F)

/* Data FIFO Error Interrupt Mask */
#define DFIFO_DFERIM_CLEAR_gc (0x00) /* Data FIFO Error Interrupt Mask - CLEAR */
#define DFIFO_DFERIM_SET_gc   (0x02) /* Data FIFO Error Interrupt Mask - SET */


/* Data FIFO Fill-level Interrupt Mask */
#define DFIFO_DFFLIM_CLEAR_gc (0x00) /* Data FIFO Fill-level Interrupt Mask - CLEAR */
#define DFIFO_DFFLIM_SET_gc   (0x01) /* Data FIFO Fill-level Interrupt Mask - SET */


/* Data FIFO Clear */
#define DFIFO_DFCLR_CLEAR_gc (0x00) /* Data FIFO Clear - CLEAR */
#define DFIFO_DFCLR_SET_gc   (0x80) /* Data FIFO Clear - SET */


/* Data FIFO Fill Level Status */
#define DFIFO_DFL_DFFLS_gc(x) (x & 0x3F)

/* Data FIFO Overflow Flag */
#define DFIFO_DFOFL_CLEAR_gc (0x00) /* Data FIFO Overflow Flag - CLEAR */
#define DFIFO_DFOFL_SET_gc   (0x04) /* Data FIFO Overflow Flag - SET */


/* Data FIFO Underflow Flag */
#define DFIFO_DFUFL_CLEAR_gc (0x00) /* Data FIFO Underflow Flag - CLEAR */
#define DFIFO_DFUFL_SET_gc   (0x02) /* Data FIFO Underflow Flag - SET */


/* Data FIFO Fill-Level Reached Status Flag */
#define DFIFO_DFFLRF_CLEAR_gc (0x00) /* Data FIFO Fill-Level Reached Status Flag - CLEAR */
#define DFIFO_DFFLRF_SET_gc   (0x01) /* Data FIFO Fill-Level Reached Status Flag - SET */


/*
--------------------------------------------------------------------------------
EEPROM - 
--------------------------------------------------------------------------------
*/


/* Non-volatile memory busy */
#define EEPROM_NVMBSY_CLEAR_gc (0x00) /* Non-volatile memory busy - CLEAR */
#define EEPROM_NVMBSY_SET_gc   (0x80) /* Non-volatile memory busy - SET */


/* EEPROM page access (multiple bytes access mode) */
#define EEPROM_EEPAGE_CLEAR_gc (0x00) /* EEPROM page access (multiple bytes access mode) - CLEAR */
#define EEPROM_EEPAGE_SET_gc   (0x40) /* EEPROM page access (multiple bytes access mode) - SET */


/* EEPROM Programming Mode */
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


/* EEPROM Burst Read Enable */
#define EEPROM_EEBRE_CLEAR_gc (0x00) /* EEPROM Burst Read Enable - CLEAR */
#define EEPROM_EEBRE_SET_gc   (0x01) /* EEPROM Burst Read Enable - SET */


/*
--------------------------------------------------------------------------------
FE - 
--------------------------------------------------------------------------------
*/


/* Range of the ANT_TUNE level detector */
#define FE_RNGE_VAL_0x00_gc (0x00) /* 0..3 dBm */
#define FE_RNGE_VAL_0x01_gc (0x01) /* 4..7 dBm */
#define FE_RNGE_VAL_0x02_gc (0x02) /* 8..14 dBm */
#define FE_RNGE_VAL_0x03_gc (0x03) /* Secure Measurement */


/* IF Amplifier Enable */
#define FE_IFAEN_CLEAR_gc (0x00) /* IF Amplifier Enable - CLEAR */
#define FE_IFAEN_SET_gc   (0x80) /* IF Amplifier Enable - SET */


/* Resistor Tuning */
#define FE_FEBT_RTN2_gc(x) ((x<<2) & 0x0C)

/* Capacitor Tuning */
#define FE_FEBT_CTN2_gc(x) (x & 0x03)

/* ASK Not DPSK Switch */
#define FE_ANPS_CLEAR_gc (0x00) /* ASK Not DPSK Switch - CLEAR */
#define FE_ANPS_SET_gc   (0x20) /* ASK Not DPSK Switch - SET */


/* PLL Lock Detect Gate */
#define FE_PLCKG_CLEAR_gc (0x00) /* PLL Lock Detect Gate - CLEAR */
#define FE_PLCKG_SET_gc   (0x10) /* PLL Lock Detect Gate - SET */


/* ADC High Sample Rate */
#define FE_ADHS_CLEAR_gc (0x00) /* ADC High Sample Rate - CLEAR */
#define FE_ADHS_SET_gc   (0x08) /* ADC High Sample Rate - SET */


/* Antenna Damping */
#define FE_ANDP_CLEAR_gc (0x00) /* Antenna Damping - CLEAR */
#define FE_ANDP_SET_gc   (0x04) /* Antenna Damping - SET */


/* Select 433 Not 315MHz Band */
#define FE_S4N3_CLEAR_gc (0x00) /* Select 433 Not 315MHz Band - CLEAR */
#define FE_S4N3_SET_gc   (0x02) /* Select 433 Not 315MHz Band - SET */


/* Select Low-Band Not High-Band */
#define FE_LBNHB_CLEAR_gc (0x00) /* Select Low-Band Not High-Band - CLEAR */
#define FE_LBNHB_SET_gc   (0x01) /* Select Low-Band Not High-Band - SET */


/* Antenna Tuning Enable */
#define FE_ATEN_CLEAR_gc (0x00) /* Antenna Tuning Enable - CLEAR */
#define FE_ATEN_SET_gc   (0x80) /* Antenna Tuning Enable - SET */


/* PLL Speedup 1 */
#define FE_PLSP1_CLEAR_gc (0x00) /* PLL Speedup 1 - CLEAR */
#define FE_PLSP1_SET_gc   (0x40) /* PLL Speedup 1 - SET */


/* ADC Clock enable */
#define FE_ADCLK_CLEAR_gc (0x00) /* ADC Clock enable - CLEAR */
#define FE_ADCLK_SET_gc   (0x20) /* ADC Clock enable - SET */


/* Analog Digital Converter enable */
#define FE_ADEN_CLEAR_gc (0x00) /* Analog Digital Converter enable - CLEAR */
#define FE_ADEN_SET_gc   (0x10) /* Analog Digital Converter enable - SET */


/* Low Noise Amplifier enable */
#define FE_LNAEN_CLEAR_gc (0x00) /* Low Noise Amplifier enable - CLEAR */
#define FE_LNAEN_SET_gc   (0x08) /* Low Noise Amplifier enable - SET */


/* Cristal Oscillator enable */
#define FE_XTOEN_CLEAR_gc (0x00) /* Cristal Oscillator enable - CLEAR */
#define FE_XTOEN_SET_gc   (0x04) /* Cristal Oscillator enable - SET */


/* PLL calibration mode */
#define FE_PLCAL_CLEAR_gc (0x00) /* PLL calibration mode - CLEAR */
#define FE_PLCAL_SET_gc   (0x02) /* PLL calibration mode - SET */


/* PLL enable */
#define FE_PLEN_CLEAR_gc (0x00) /* PLL enable - CLEAR */
#define FE_PLEN_SET_gc   (0x01) /* PLL enable - SET */


/* XTO VPump enable */
#define FE_XTPEN_CLEAR_gc (0x00) /* XTO VPump enable - CLEAR */
#define FE_XTPEN_SET_gc   (0x20) /* XTO VPump enable - SET */


/* PLL Post En IQ divider */
#define FE_PLPEN_CLEAR_gc (0x00) /* PLL Post En IQ divider - CLEAR */
#define FE_PLPEN_SET_gc   (0x10) /* PLL Post En IQ divider - SET */


/* Temperature measurement */
#define FE_TMPM_CLEAR_gc (0x00) /* Temperature measurement - CLEAR */
#define FE_TMPM_SET_gc   (0x08) /* Temperature measurement - SET */


/* Power Amplifier enable */
#define FE_PAEN_CLEAR_gc (0x00) /* Power Amplifier enable - CLEAR */
#define FE_PAEN_SET_gc   (0x04) /* Power Amplifier enable - SET */


/* Single Pole Double Throw (SPDT) Switch TX */
#define FE_SDRX2_CLEAR_gc (0x00) /* Single Pole Double Throw (SPDT) Switch TX - CLEAR */
#define FE_SDRX2_SET_gc   (0x02) /* Single Pole Double Throw (SPDT) Switch TX - SET */


/* Single Pole Double Throw (SPDT) Switch RX */
#define FE_SDRX_CLEAR_gc (0x00) /* Single Pole Double Throw (SPDT) Switch RX - CLEAR */
#define FE_SDRX_SET_gc   (0x01) /* Single Pole Double Throw (SPDT) Switch RX - SET */


/* LNA Bias Low band */
#define FE_FELNA_LBL_gc(x) ((x<<4) & 0xF0)

/* LNA Bias High band */
#define FE_FELNA_LBH_gc(x) (x & 0x0F)

/* PLL Mode */
#define FE_FEMS_PLLM_gc(x) ((x<<4) & 0xF0)

/* PLL Swallow */
#define FE_FEMS_PLLS_gc(x) (x & 0x0F)

/* PLL locked */
#define FE_PLCK_CLEAR_gc (0x00) /* PLL locked - CLEAR */
#define FE_PLCK_SET_gc   (0x08) /* PLL locked - SET */


/* XTO ready */
#define FE_XRDY_CLEAR_gc (0x00) /* XTO ready - CLEAR */
#define FE_XRDY_SET_gc   (0x04) /* XTO ready - SET */


/* LNA High band saturated */
#define FE_HBSAT_CLEAR_gc (0x00) /* LNA High band saturated - CLEAR */
#define FE_HBSAT_SET_gc   (0x02) /* LNA High band saturated - SET */


/* LNA Low band saturated */
#define FE_LBSAT_CLEAR_gc (0x00) /* LNA Low band saturated - CLEAR */
#define FE_LBSAT_SET_gc   (0x01) /* LNA Low band saturated - SET */


/* 4 bit Resistor Tuning */
#define FE_FETN4_RTN4_gc(x) ((x<<4) & 0xF0)

/* 4 bit Capacitor Tuning */
#define FE_FETN4_CTN4_gc(x) (x & 0x0F)

/* VCO Bias */
#define FE_FEVCO_VCOB_gc(x) ((x<<4) & 0xF0)

/* Charge pump current control */
#define FE_FEVCO_CPCC_gc(x) (x & 0x0F)

/*
--------------------------------------------------------------------------------
FREQS - 
--------------------------------------------------------------------------------
*/


/* Sigma-delta Modulator Enable */
#define FREQS_SDEN_CLEAR_gc (0x00) /* Sigma-delta Modulator Enable - CLEAR */
#define FREQS_SDEN_SET_gc   (0x02) /* Sigma-delta Modulator Enable - SET */


/* Sigma-delta Modulator Power Up */
#define FREQS_SDPU_CLEAR_gc (0x00) /* Sigma-delta Modulator Power Up - CLEAR */
#define FREQS_SDPU_SET_gc   (0x01) /* Sigma-delta Modulator Power Up - SET */


/*
--------------------------------------------------------------------------------
FRSYNC - 
--------------------------------------------------------------------------------
*/


/* Serial mode enable for data path A */
#define FRSYNC_SEMEA_CLEAR_gc (0x00) /* Serial mode enable for data path A - CLEAR */
#define FRSYNC_SEMEA_SET_gc   (0x80) /* Serial mode enable for data path A - SET */


/* Start-Frame ID threshold for data path A */
#define FRSYNC_SFIDCA_SFIDTA_gc(x) (x & 0x1F)

/* Serial mode enable for data path B */
#define FRSYNC_SEMEB_CLEAR_gc (0x00) /* Serial mode enable for data path B - CLEAR */
#define FRSYNC_SEMEB_SET_gc   (0x80) /* Serial mode enable for data path B - SET */


/* Start-Frame ID threshold for data path B */
#define FRSYNC_SFIDCB_SFIDTB_gc(x) (x & 0x1F)

/*
--------------------------------------------------------------------------------
GPIOREGS - 
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
IDSCAN - 
--------------------------------------------------------------------------------
*/


/* ID Check Execute */
#define IDSCAN_IDCE_CLEAR_gc (0x00) /* ID Check Execute - CLEAR */
#define IDSCAN_IDCE_SET_gc   (0x80) /* ID Check Execute - SET */


/* ID Clear */
#define IDSCAN_IDCLR_CLEAR_gc (0x00) /* ID Clear - CLEAR */
#define IDSCAN_IDCLR_SET_gc   (0x40) /* ID Clear - SET */


/* ID Full Interrupt Mask */
#define IDSCAN_IDFIM_CLEAR_gc (0x00) /* ID Full Interrupt Mask - CLEAR */
#define IDSCAN_IDFIM_SET_gc   (0x20) /* ID Full Interrupt Mask - SET */


/* ID Byte Offset */
#define IDSCAN_IDC_IDBO_gc(x) ((x<<2) & 0x0C)

/* ID Length */
#define IDSCAN_IDC_IDL_gc(x) (x & 0x03)

/* ID Full Flag */
#define IDSCAN_IDFULL_CLEAR_gc (0x00) /* ID Full Flag - CLEAR */
#define IDSCAN_IDFULL_SET_gc   (0x02) /* ID Full Flag - SET */


/* ID Scan Ok Flag */
#define IDSCAN_IDOK_CLEAR_gc (0x00) /* ID Scan Ok Flag - CLEAR */
#define IDSCAN_IDOK_SET_gc   (0x01) /* ID Scan Ok Flag - SET */


/*
--------------------------------------------------------------------------------
INT - 
--------------------------------------------------------------------------------
*/


/* Interrupt Sense Control 1 */
#define INT_ISC1_VAL_0x00_gc (0x00<<2) /* Low Level of INTX */
#define INT_ISC1_VAL_0x01_gc (0x01<<2) /* Logical Change of INTX */
#define INT_ISC1_VAL_0x02_gc (0x02<<2) /* Falling Edge of INTX */
#define INT_ISC1_VAL_0x03_gc (0x03<<2) /* Rising Edge of INTX */


/* Interrupt Sense Control 0 */
#define INT_ISC0_VAL_0x00_gc (0x00) /* Low Level of INTX */
#define INT_ISC0_VAL_0x01_gc (0x01) /* Logical Change of INTX */
#define INT_ISC0_VAL_0x02_gc (0x02) /* Falling Edge of INTX */
#define INT_ISC0_VAL_0x03_gc (0x03) /* Rising Edge of INTX */


/* External Interrupt Flag 1 */
#define INT_INTF1_CLEAR_gc (0x00) /* External Interrupt Flag 1 - CLEAR */
#define INT_INTF1_SET_gc   (0x02) /* External Interrupt Flag 1 - SET */


/* External Interrupt Flag 0 */
#define INT_INTF0_CLEAR_gc (0x00) /* External Interrupt Flag 0 - CLEAR */
#define INT_INTF0_SET_gc   (0x01) /* External Interrupt Flag 0 - SET */


/* External Interrupt Request 1 Enable */
#define INT_INT1_CLEAR_gc (0x00) /* External Interrupt Request 1 Enable - CLEAR */
#define INT_INT1_SET_gc   (0x02) /* External Interrupt Request 1 Enable - SET */


/* External Interrupt Request 0 Enable */
#define INT_INT0_CLEAR_gc (0x00) /* External Interrupt Request 0 Enable - CLEAR */
#define INT_INT0_SET_gc   (0x01) /* External Interrupt Request 0 Enable - SET */


/* Pin Change Interrupt Enable 1 */
#define INT_PCIE1_CLEAR_gc (0x00) /* Pin Change Interrupt Enable 1 - CLEAR */
#define INT_PCIE1_SET_gc   (0x02) /* Pin Change Interrupt Enable 1 - SET */


/* Pin Change Interrupt Enable 0 */
#define INT_PCIE0_CLEAR_gc (0x00) /* Pin Change Interrupt Enable 0 - CLEAR */
#define INT_PCIE0_SET_gc   (0x01) /* Pin Change Interrupt Enable 0 - SET */


/* Pin Change Interrupt Flag 1 */
#define INT_PCIF1_CLEAR_gc (0x00) /* Pin Change Interrupt Flag 1 - CLEAR */
#define INT_PCIF1_SET_gc   (0x02) /* Pin Change Interrupt Flag 1 - SET */


/* Pin Change Interrupt Flag 0 */
#define INT_PCIF0_CLEAR_gc (0x00) /* Pin Change Interrupt Flag 0 - CLEAR */
#define INT_PCIF0_SET_gc   (0x01) /* Pin Change Interrupt Flag 0 - SET */


/* Pin Change Enable Mask bit 0 */
#define INT_PCINT0_CLEAR_gc (0x00) /* Pin Change Enable Mask bit 0 - CLEAR */
#define INT_PCINT0_SET_gc   (0x01) /* Pin Change Enable Mask bit 0 - SET */


/* Pin Change Enable Mask bit 1 */
#define INT_PCINT1_CLEAR_gc (0x00) /* Pin Change Enable Mask bit 1 - CLEAR */
#define INT_PCINT1_SET_gc   (0x02) /* Pin Change Enable Mask bit 1 - SET */


/* Pin Change Enable Mask bit 2 */
#define INT_PCINT2_CLEAR_gc (0x00) /* Pin Change Enable Mask bit 2 - CLEAR */
#define INT_PCINT2_SET_gc   (0x04) /* Pin Change Enable Mask bit 2 - SET */


/* Pin Change Enable Mask bit 3 */
#define INT_PCINT3_CLEAR_gc (0x00) /* Pin Change Enable Mask bit 3 - CLEAR */
#define INT_PCINT3_SET_gc   (0x08) /* Pin Change Enable Mask bit 3 - SET */


/* Pin Change Enable Mask bit 4 */
#define INT_PCINT4_CLEAR_gc (0x00) /* Pin Change Enable Mask bit 4 - CLEAR */
#define INT_PCINT4_SET_gc   (0x10) /* Pin Change Enable Mask bit 4 - SET */


/* Pin Change Enable Mask bit 5 */
#define INT_PCINT5_CLEAR_gc (0x00) /* Pin Change Enable Mask bit 5 - CLEAR */
#define INT_PCINT5_SET_gc   (0x20) /* Pin Change Enable Mask bit 5 - SET */


/* Pin Change Enable Mask bit 6 */
#define INT_PCINT6_CLEAR_gc (0x00) /* Pin Change Enable Mask bit 6 - CLEAR */
#define INT_PCINT6_SET_gc   (0x40) /* Pin Change Enable Mask bit 6 - SET */


/* Pin Change Enable Mask bit 7 */
#define INT_PCINT7_CLEAR_gc (0x00) /* Pin Change Enable Mask bit 7 - CLEAR */
#define INT_PCINT7_SET_gc   (0x80) /* Pin Change Enable Mask bit 7 - SET */


/* Pin Change Enable Mask bit 8 */
#define INT_PCINT8_CLEAR_gc (0x00) /* Pin Change Enable Mask bit 8 - CLEAR */
#define INT_PCINT8_SET_gc   (0x01) /* Pin Change Enable Mask bit 8 - SET */


/* Pin Change Enable Mask bit 9 */
#define INT_PCINT9_CLEAR_gc (0x00) /* Pin Change Enable Mask bit 9 - CLEAR */
#define INT_PCINT9_SET_gc   (0x02) /* Pin Change Enable Mask bit 9 - SET */


/* Pin Change Enable Mask bit 10 */
#define INT_PCINT10_CLEAR_gc (0x00) /* Pin Change Enable Mask bit 10 - CLEAR */
#define INT_PCINT10_SET_gc   (0x04) /* Pin Change Enable Mask bit 10 - SET */


/* Pin Change Enable Mask bit 11 */
#define INT_PCINT11_CLEAR_gc (0x00) /* Pin Change Enable Mask bit 11 - CLEAR */
#define INT_PCINT11_SET_gc   (0x08) /* Pin Change Enable Mask bit 11 - SET */


/* Pin Change Enable Mask bit 12 */
#define INT_PCINT12_CLEAR_gc (0x00) /* Pin Change Enable Mask bit 12 - CLEAR */
#define INT_PCINT12_SET_gc   (0x10) /* Pin Change Enable Mask bit 12 - SET */


/* Pin Change Enable Mask bit 13 */
#define INT_PCINT13_CLEAR_gc (0x00) /* Pin Change Enable Mask bit 13 - CLEAR */
#define INT_PCINT13_SET_gc   (0x20) /* Pin Change Enable Mask bit 13 - SET */


/*
--------------------------------------------------------------------------------
MEM - 
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
PORTB - 
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
PORTC - 
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
RSSIB - 
--------------------------------------------------------------------------------
*/


/* RSSI IF Amplifier Compensation */
#define RSSIB_RSIFC_CLEAR_gc (0x00) /* RSSI IF Amplifier Compensation - CLEAR */
#define RSSIB_RSIFC_SET_gc   (0x02) /* RSSI IF Amplifier Compensation - SET */


/* RSSI Damping Compensation */
#define RSSIB_RSDC_CLEAR_gc (0x00) /* RSSI Damping Compensation - CLEAR */
#define RSSIB_RSDC_SET_gc   (0x01) /* RSSI Damping Compensation - SET */


/* RSSI Peak Values to SFIFO */
#define RSSIB_RSPKF_CLEAR_gc (0x00) /* RSSI Peak Values to SFIFO - CLEAR */
#define RSSIB_RSPKF_SET_gc   (0x40) /* RSSI Peak Values to SFIFO - SET */


/* RSSI High Band Reception */
#define RSSIB_RSHRX_CLEAR_gc (0x00) /* RSSI High Band Reception - CLEAR */
#define RSSIB_RSHRX_SET_gc   (0x20) /* RSSI High Band Reception - SET */


/* RSSI within Low and High Limits */
#define RSSIB_RSWLH_CLEAR_gc (0x00) /* RSSI within Low and High Limits - CLEAR */
#define RSSIB_RSWLH_SET_gc   (0x10) /* RSSI within Low and High Limits - SET */


/* RSSI Update Period */
#define RSSIB_RSSC_RSUP_gc(x) (x & 0x0F)

/*
--------------------------------------------------------------------------------
RXBUF - 
--------------------------------------------------------------------------------
*/


/* Receive Data MSB-first for data path B */
#define RXBUF_RXMSBB_CLEAR_gc (0x00) /* Receive Data MSB-first for data path B - CLEAR */
#define RXBUF_RXMSBB_SET_gc   (0x80) /* Receive Data MSB-first for data path B - SET */


/* Receive CRC Bit Lengths setting for data path B */
#define RXBUF_RXCBLB_VAL_0x00_gc (0x00<<5) /* CRC 4-bit */
#define RXBUF_RXCBLB_VAL_0x01_gc (0x01<<5) /* CRC 8-bit */
#define RXBUF_RXCBLB_VAL_0x02_gc (0x02<<5) /* CRC 16-bit */


/* RX CRC Enable data path B */
#define RXBUF_RXCEB_CLEAR_gc (0x00) /* RX CRC Enable data path B - CLEAR */
#define RXBUF_RXCEB_SET_gc   (0x10) /* RX CRC Enable data path B - SET */


/* Receive Data MSB-first for data path A */
#define RXBUF_RXMSBA_CLEAR_gc (0x00) /* Receive Data MSB-first for data path A - CLEAR */
#define RXBUF_RXMSBA_SET_gc   (0x08) /* Receive Data MSB-first for data path A - SET */


/* Receive CRC Bit Lengths setting for data path A */
#define RXBUF_RXCBLA_VAL_0x00_gc (0x00<<1) /* CRC 4-bit */
#define RXBUF_RXCBLA_VAL_0x01_gc (0x01<<1) /* CRC 8-bit */
#define RXBUF_RXCBLA_VAL_0x02_gc (0x02<<1) /* CRC 16-bit */


/* RX CRC Enable data path A */
#define RXBUF_RXCEA_CLEAR_gc (0x00) /* RX CRC Enable data path A - CLEAR */
#define RXBUF_RXCEA_SET_gc   (0x01) /* RX CRC Enable data path A - SET */


/* RX Buffer Clear */
#define RXBUF_RXBCLR_CLEAR_gc (0x00) /* RX Buffer Clear - CLEAR */
#define RXBUF_RXBCLR_SET_gc   (0x04) /* RX Buffer Clear - SET */


/* RX Buffer Finish */
#define RXBUF_RXBF_CLEAR_gc (0x00) /* RX Buffer Finish - CLEAR */
#define RXBUF_RXBF_SET_gc   (0x02) /* RX Buffer Finish - SET */


/* RX Buffer Path B select signal */
#define RXBUF_RXBPB_CLEAR_gc (0x00) /* RX Buffer Path B select signal - CLEAR */
#define RXBUF_RXBPB_SET_gc   (0x01) /* RX Buffer Path B select signal - SET */


/* RXTL (Receive Telegram Length) register High byte for data path A bit 3 */
#define RXBUF_RXTLHA3_CLEAR_gc (0x00) /* RXTL (Receive Telegram Length) register High byte for data path A bit 3 - CLEAR */
#define RXBUF_RXTLHA3_SET_gc   (0x08) /* RXTL (Receive Telegram Length) register High byte for data path A bit 3 - SET */


/* RXTL (Receive Telegram Length) register High byte for data path A bit 2 */
#define RXBUF_RXTLHA2_CLEAR_gc (0x00) /* RXTL (Receive Telegram Length) register High byte for data path A bit 2 - CLEAR */
#define RXBUF_RXTLHA2_SET_gc   (0x04) /* RXTL (Receive Telegram Length) register High byte for data path A bit 2 - SET */


/* RXTL (Receive Telegram Length) register High byte for data path A bit 1 */
#define RXBUF_RXTLHA1_CLEAR_gc (0x00) /* RXTL (Receive Telegram Length) register High byte for data path A bit 1 - CLEAR */
#define RXBUF_RXTLHA1_SET_gc   (0x02) /* RXTL (Receive Telegram Length) register High byte for data path A bit 1 - SET */


/* RXTL (Receive Telegram Length) register High byte for data path A bit 0 */
#define RXBUF_RXTLHA0_CLEAR_gc (0x00) /* RXTL (Receive Telegram Length) register High byte for data path A bit 0 - CLEAR */
#define RXBUF_RXTLHA0_SET_gc   (0x01) /* RXTL (Receive Telegram Length) register High byte for data path A bit 0 - SET */


/* RXTL (Receive Telegram Length) register High byte for data path B bit 3 */
#define RXBUF_RXTLHB3_CLEAR_gc (0x00) /* RXTL (Receive Telegram Length) register High byte for data path B bit 3 - CLEAR */
#define RXBUF_RXTLHB3_SET_gc   (0x08) /* RXTL (Receive Telegram Length) register High byte for data path B bit 3 - SET */


/* RXTL (Receive Telegram Length) register High byte for data path B bit 2 */
#define RXBUF_RXTLHB2_CLEAR_gc (0x00) /* RXTL (Receive Telegram Length) register High byte for data path B bit 2 - CLEAR */
#define RXBUF_RXTLHB2_SET_gc   (0x04) /* RXTL (Receive Telegram Length) register High byte for data path B bit 2 - SET */


/* RXTL (Receive Telegram Length) register High byte for data path B bit 1 */
#define RXBUF_RXTLHB1_CLEAR_gc (0x00) /* RXTL (Receive Telegram Length) register High byte for data path B bit 1 - CLEAR */
#define RXBUF_RXTLHB1_SET_gc   (0x02) /* RXTL (Receive Telegram Length) register High byte for data path B bit 1 - SET */


/* RXTL (Receive Telegram Length) register High byte for data path B bit 0 */
#define RXBUF_RXTLHB0_CLEAR_gc (0x00) /* RXTL (Receive Telegram Length) register High byte for data path B bit 0 - CLEAR */
#define RXBUF_RXTLHB0_SET_gc   (0x01) /* RXTL (Receive Telegram Length) register High byte for data path B bit 0 - SET */


/*
--------------------------------------------------------------------------------
RXDSP - 
--------------------------------------------------------------------------------
*/


/* End Of Telegram on path B Fail Enable */
#define RXDSP_EOTBFE_CLEAR_gc (0x00) /* End Of Telegram on path B Fail Enable - CLEAR */
#define RXDSP_EOTBFE_SET_gc   (0x80) /* End Of Telegram on path B Fail Enable - SET */


/* RSSI Range Fail Enable on path A */
#define RXDSP_RRFEA_CLEAR_gc (0x00) /* RSSI Range Fail Enable on path A - CLEAR */
#define RXDSP_RRFEA_SET_gc   (0x40) /* RSSI Range Fail Enable on path A - SET */


/* Telegram Length Reached Enable on path A */
#define RXDSP_TELREA_CLEAR_gc (0x00) /* Telegram Length Reached Enable on path A - CLEAR */
#define RXDSP_TELREA_SET_gc   (0x20) /* Telegram Length Reached Enable on path A - SET */


/* Time-Out Fail Enable on path A */
#define RXDSP_TMOFEA_CLEAR_gc (0x00) /* Time-Out Fail Enable on path A - CLEAR */
#define RXDSP_TMOFEA_SET_gc   (0x10) /* Time-Out Fail Enable on path A - SET */


/* MANchester Coding Failed Enable for path A */
#define RXDSP_MANFEA_CLEAR_gc (0x00) /* MANchester Coding Failed Enable for path A - CLEAR */
#define RXDSP_MANFEA_SET_gc   (0x08) /* MANchester Coding Failed Enable for path A - SET */


/* SYmbol Timing check Failed Enable for path A */
#define RXDSP_SYTFEA_CLEAR_gc (0x00) /* SYmbol Timing check Failed Enable for path A - CLEAR */
#define RXDSP_SYTFEA_SET_gc   (0x04) /* SYmbol Timing check Failed Enable for path A - SET */


/* AMPlitude Failed Enable for path A */
#define RXDSP_AMPFEA_CLEAR_gc (0x00) /* AMPlitude Failed Enable for path A - CLEAR */
#define RXDSP_AMPFEA_SET_gc   (0x02) /* AMPlitude Failed Enable for path A - SET */


/* CARrier check Failed Enable for path A */
#define RXDSP_CARFEA_CLEAR_gc (0x00) /* CARrier check Failed Enable for path A - CLEAR */
#define RXDSP_CARFEA_SET_gc   (0x01) /* CARrier check Failed Enable for path A - SET */


/* End Of Telegram on path B Fail Enable */
#define RXDSP_EOTAFE_CLEAR_gc (0x00) /* End Of Telegram on path B Fail Enable - CLEAR */
#define RXDSP_EOTAFE_SET_gc   (0x80) /* End Of Telegram on path B Fail Enable - SET */


/* RSSI Range Fail Enable on path B */
#define RXDSP_RRFEB_CLEAR_gc (0x00) /* RSSI Range Fail Enable on path B - CLEAR */
#define RXDSP_RRFEB_SET_gc   (0x40) /* RSSI Range Fail Enable on path B - SET */


/* Telegram Length Reached Enable on path B */
#define RXDSP_TELREB_CLEAR_gc (0x00) /* Telegram Length Reached Enable on path B - CLEAR */
#define RXDSP_TELREB_SET_gc   (0x20) /* Telegram Length Reached Enable on path B - SET */


/* Time-Out Fail Enable on path B */
#define RXDSP_TMOFEB_CLEAR_gc (0x00) /* Time-Out Fail Enable on path B - CLEAR */
#define RXDSP_TMOFEB_SET_gc   (0x10) /* Time-Out Fail Enable on path B - SET */


/* MANchester Coding Failed Enable for path B */
#define RXDSP_MANFEB_CLEAR_gc (0x00) /* MANchester Coding Failed Enable for path B - CLEAR */
#define RXDSP_MANFEB_SET_gc   (0x08) /* MANchester Coding Failed Enable for path B - SET */


/* SYmbol Timing check Failed Enable for path B */
#define RXDSP_SYTFEB_CLEAR_gc (0x00) /* SYmbol Timing check Failed Enable for path B - CLEAR */
#define RXDSP_SYTFEB_SET_gc   (0x04) /* SYmbol Timing check Failed Enable for path B - SET */


/* AMPlitude Failed Enable for path B */
#define RXDSP_AMPFEB_CLEAR_gc (0x00) /* AMPlitude Failed Enable for path B - CLEAR */
#define RXDSP_AMPFEB_SET_gc   (0x02) /* AMPlitude Failed Enable for path B - SET */


/* CARrier check Failed Enable for path B */
#define RXDSP_CARFEB_CLEAR_gc (0x00) /* CARrier check Failed Enable for path B - CLEAR */
#define RXDSP_CARFEB_SET_gc   (0x01) /* CARrier check Failed Enable for path B - SET */


/* End Of Telegram on path B Flag */
#define RXDSP_EOTBF_CLEAR_gc (0x00) /* End Of Telegram on path B Flag - CLEAR */
#define RXDSP_EOTBF_SET_gc   (0x80) /* End Of Telegram on path B Flag - SET */


/* RSSI Range Fail on path A */
#define RXDSP_RRFA_CLEAR_gc (0x00) /* RSSI Range Fail on path A - CLEAR */
#define RXDSP_RRFA_SET_gc   (0x40) /* RSSI Range Fail on path A - SET */


/* Telegram Length Reached on path A */
#define RXDSP_TELRA_CLEAR_gc (0x00) /* Telegram Length Reached on path A - CLEAR */
#define RXDSP_TELRA_SET_gc   (0x20) /* Telegram Length Reached on path A - SET */


/* Time-Out Fail on path A */
#define RXDSP_TMOFA_CLEAR_gc (0x00) /* Time-Out Fail on path A - CLEAR */
#define RXDSP_TMOFA_SET_gc   (0x10) /* Time-Out Fail on path A - SET */


/* MANchester coding Failed on path A */
#define RXDSP_MANFA_CLEAR_gc (0x00) /* MANchester coding Failed on path A - CLEAR */
#define RXDSP_MANFA_SET_gc   (0x08) /* MANchester coding Failed on path A - SET */


/* SYmbol Timing check Failed on path A */
#define RXDSP_SYTFA_CLEAR_gc (0x00) /* SYmbol Timing check Failed on path A - CLEAR */
#define RXDSP_SYTFA_SET_gc   (0x04) /* SYmbol Timing check Failed on path A - SET */


/* AMPlitude Failed on path A */
#define RXDSP_AMPFA_CLEAR_gc (0x00) /* AMPlitude Failed on path A - CLEAR */
#define RXDSP_AMPFA_SET_gc   (0x02) /* AMPlitude Failed on path A - SET */


/* CARrier check Failed on path A */
#define RXDSP_CARFA_CLEAR_gc (0x00) /* CARrier check Failed on path A - CLEAR */
#define RXDSP_CARFA_SET_gc   (0x01) /* CARrier check Failed on path A - SET */


/* End Of Telegram on path A Flag */
#define RXDSP_EOTAF_CLEAR_gc (0x00) /* End Of Telegram on path A Flag - CLEAR */
#define RXDSP_EOTAF_SET_gc   (0x80) /* End Of Telegram on path A Flag - SET */


/* RSSI Range Fail on path B */
#define RXDSP_RRFB_CLEAR_gc (0x00) /* RSSI Range Fail on path B - CLEAR */
#define RXDSP_RRFB_SET_gc   (0x40) /* RSSI Range Fail on path B - SET */


/* Telegram Length Reached on path B */
#define RXDSP_TELRB_CLEAR_gc (0x00) /* Telegram Length Reached on path B - CLEAR */
#define RXDSP_TELRB_SET_gc   (0x20) /* Telegram Length Reached on path B - SET */


/* Time-Out Fail on path B */
#define RXDSP_TMOFB_CLEAR_gc (0x00) /* Time-Out Fail on path B - CLEAR */
#define RXDSP_TMOFB_SET_gc   (0x10) /* Time-Out Fail on path B - SET */


/* MANchester coding Failed on path B */
#define RXDSP_MANFB_CLEAR_gc (0x00) /* MANchester coding Failed on path B - CLEAR */
#define RXDSP_MANFB_SET_gc   (0x08) /* MANchester coding Failed on path B - SET */


/* SYmbol Timing check Failed on path B */
#define RXDSP_SYTFB_CLEAR_gc (0x00) /* SYmbol Timing check Failed on path B - CLEAR */
#define RXDSP_SYTFB_SET_gc   (0x04) /* SYmbol Timing check Failed on path B - SET */


/* AMPlitude Failed on path B */
#define RXDSP_AMPFB_CLEAR_gc (0x00) /* AMPlitude Failed on path B - CLEAR */
#define RXDSP_AMPFB_SET_gc   (0x02) /* AMPlitude Failed on path B - SET */


/* CARrier check Failed on path B */
#define RXDSP_CARFB_CLEAR_gc (0x00) /* CARrier check Failed on path B - CLEAR */
#define RXDSP_CARFB_SET_gc   (0x01) /* CARrier check Failed on path B - SET */


/* Rx DSP enable */
#define RXDSP_RDEN_CLEAR_gc (0x00) /* Rx DSP enable - CLEAR */
#define RXDSP_RDEN_SET_gc   (0x04) /* Rx DSP enable - SET */


/* Divided ADC clock enable */
#define RXDSP_ADIVEN_CLEAR_gc (0x00) /* Divided ADC clock enable - CLEAR */
#define RXDSP_ADIVEN_SET_gc   (0x02) /* Divided ADC clock enable - SET */


/* Rx DSP Power Up */
#define RXDSP_RDPU_CLEAR_gc (0x00) /* Rx DSP Power Up - CLEAR */
#define RXDSP_RDPU_SET_gc   (0x01) /* Rx DSP Power Up - SET */


/* Rx DSP Start bit Is Data for path B */
#define RXDSP_RDSIDB_CLEAR_gc (0x00) /* Rx DSP Start bit Is Data for path B - CLEAR */
#define RXDSP_RDSIDB_SET_gc   (0x40) /* Rx DSP Start bit Is Data for path B - SET */


/* Rx DSP Start bit Is Data for path A */
#define RXDSP_RDSIDA_CLEAR_gc (0x00) /* Rx DSP Start bit Is Data for path A - CLEAR */
#define RXDSP_RDSIDA_SET_gc   (0x20) /* Rx DSP Start bit Is Data for path A - SET */


/* Enable Transparent Path B */
#define RXDSP_ETRPB_CLEAR_gc (0x00) /* Enable Transparent Path B - CLEAR */
#define RXDSP_ETRPB_SET_gc   (0x10) /* Enable Transparent Path B - SET */


/* Enable Transparent Path A */
#define RXDSP_ETRPA_CLEAR_gc (0x00) /* Enable Transparent Path A - CLEAR */
#define RXDSP_ETRPA_SET_gc   (0x08) /* Enable Transparent Path A - SET */


/* Transparent Mode Data Select */
#define RXDSP_RDOCR_TMDS_gc(x) ((x<<1) & 0x06)

/* Wake Conditions Ok on path B */
#define RXDSP_WCOB_CLEAR_gc (0x00) /* Wake Conditions Ok on path B - CLEAR */
#define RXDSP_WCOB_SET_gc   (0x80) /* Wake Conditions Ok on path B - SET */


/* Wake Conditions Ok on path A */
#define RXDSP_WCOA_CLEAR_gc (0x00) /* Wake Conditions Ok on path A - CLEAR */
#define RXDSP_WCOA_SET_gc   (0x40) /* Wake Conditions Ok on path A - SET */


/* Start Of Telegram on path B */
#define RXDSP_SOTB_CLEAR_gc (0x00) /* Start Of Telegram on path B - CLEAR */
#define RXDSP_SOTB_SET_gc   (0x20) /* Start Of Telegram on path B - SET */


/* Start Of Telegram on path A */
#define RXDSP_SOTA_CLEAR_gc (0x00) /* Start Of Telegram on path A - CLEAR */
#define RXDSP_SOTA_SET_gc   (0x10) /* Start Of Telegram on path A - SET */


/* End Of Telegram on path B */
#define RXDSP_EOTB_CLEAR_gc (0x00) /* End Of Telegram on path B - CLEAR */
#define RXDSP_EOTB_SET_gc   (0x08) /* End Of Telegram on path B - SET */


/* End Of Telegram on path A */
#define RXDSP_EOTA_CLEAR_gc (0x00) /* End Of Telegram on path A - CLEAR */
#define RXDSP_EOTA_SET_gc   (0x04) /* End Of Telegram on path A - SET */


/* New Bit on Rx path B */
#define RXDSP_NBITB_CLEAR_gc (0x00) /* New Bit on Rx path B - CLEAR */
#define RXDSP_NBITB_SET_gc   (0x02) /* New Bit on Rx path B - SET */


/* New Bit on Rx path A */
#define RXDSP_NBITA_CLEAR_gc (0x00) /* New Bit on Rx path A - CLEAR */
#define RXDSP_NBITA_SET_gc   (0x01) /* New Bit on Rx path A - SET */


/* Wake Conditions Ok on path B interrupt mask register */
#define RXDSP_WCOBM_CLEAR_gc (0x00) /* Wake Conditions Ok on path B interrupt mask register - CLEAR */
#define RXDSP_WCOBM_SET_gc   (0x80) /* Wake Conditions Ok on path B interrupt mask register - SET */


/* Wake Conditions Ok on path A interrupt mask register */
#define RXDSP_WCOAM_CLEAR_gc (0x00) /* Wake Conditions Ok on path A interrupt mask register - CLEAR */
#define RXDSP_WCOAM_SET_gc   (0x40) /* Wake Conditions Ok on path A interrupt mask register - SET */


/* Start Of Telegram on Rx path B interrupt mask register */
#define RXDSP_SOTBM_CLEAR_gc (0x00) /* Start Of Telegram on Rx path B interrupt mask register - CLEAR */
#define RXDSP_SOTBM_SET_gc   (0x20) /* Start Of Telegram on Rx path B interrupt mask register - SET */


/* Start Of Telegram on Rx path A interrupt mask register */
#define RXDSP_SOTAM_CLEAR_gc (0x00) /* Start Of Telegram on Rx path A interrupt mask register - CLEAR */
#define RXDSP_SOTAM_SET_gc   (0x10) /* Start Of Telegram on Rx path A interrupt mask register - SET */


/* End Of Telegram on Rx path B interrupt mask register */
#define RXDSP_EOTBM_CLEAR_gc (0x00) /* End Of Telegram on Rx path B interrupt mask register - CLEAR */
#define RXDSP_EOTBM_SET_gc   (0x08) /* End Of Telegram on Rx path B interrupt mask register - SET */


/* End Of Telegram on Rx path A interrupt mask register */
#define RXDSP_EOTAM_CLEAR_gc (0x00) /* End Of Telegram on Rx path A interrupt mask register - CLEAR */
#define RXDSP_EOTAM_SET_gc   (0x04) /* End Of Telegram on Rx path A interrupt mask register - SET */


/* New bit on Rx path B interrupt mask register */
#define RXDSP_NBITBM_CLEAR_gc (0x00) /* New bit on Rx path B interrupt mask register - CLEAR */
#define RXDSP_NBITBM_SET_gc   (0x02) /* New bit on Rx path B interrupt mask register - SET */


/* New bit on Rx path A interrupt mask register */
#define RXDSP_NBITAM_CLEAR_gc (0x00) /* New bit on Rx path A interrupt mask register - CLEAR */
#define RXDSP_NBITAM_SET_gc   (0x01) /* New bit on Rx path A interrupt mask register - SET */


/* Wake Check OK from path B Ok Enable */
#define RXDSP_WCOBOE_CLEAR_gc (0x00) /* Wake Check OK from path B Ok Enable - CLEAR */
#define RXDSP_WCOBOE_SET_gc   (0x80) /* Wake Check OK from path B Ok Enable - SET */


/* RSSI Range OK Enable for path A */
#define RXDSP_RROEA_CLEAR_gc (0x00) /* RSSI Range OK Enable for path A - CLEAR */
#define RXDSP_RROEA_SET_gc   (0x40) /* RSSI Range OK Enable for path A - SET */


/* Start of Frame IDentifier match Enabled for path A */
#define RXDSP_SFIDEA_CLEAR_gc (0x00) /* Start of Frame IDentifier match Enabled for path A - CLEAR */
#define RXDSP_SFIDEA_SET_gc   (0x20) /* Start of Frame IDentifier match Enabled for path A - SET */


/* Wake Up Pattern match Enabled for path A */
#define RXDSP_WUPEA_CLEAR_gc (0x00) /* Wake Up Pattern match Enabled for path A - CLEAR */
#define RXDSP_WUPEA_SET_gc   (0x10) /* Wake Up Pattern match Enabled for path A - SET */


/* Manchester Coding Ok Enabled for path A */
#define RXDSP_MANOEA_CLEAR_gc (0x00) /* Manchester Coding Ok Enabled for path A - CLEAR */
#define RXDSP_MANOEA_SET_gc   (0x08) /* Manchester Coding Ok Enabled for path A - SET */


/* Symbol Timing Ok Enabled for path A */
#define RXDSP_SYTOEA_CLEAR_gc (0x00) /* Symbol Timing Ok Enabled for path A - CLEAR */
#define RXDSP_SYTOEA_SET_gc   (0x04) /* Symbol Timing Ok Enabled for path A - SET */


/* AMPlitude Ok Enabled for path A */
#define RXDSP_AMPOEA_CLEAR_gc (0x00) /* AMPlitude Ok Enabled for path A - CLEAR */
#define RXDSP_AMPOEA_SET_gc   (0x02) /* AMPlitude Ok Enabled for path A - SET */


/* CARrier check Ok Enabled for path A */
#define RXDSP_CAROEA_CLEAR_gc (0x00) /* CARrier check Ok Enabled for path A - CLEAR */
#define RXDSP_CAROEA_SET_gc   (0x01) /* CARrier check Ok Enabled for path A - SET */


/* Wake Check OK from path A Ok Enable */
#define RXDSP_WCOAOE_CLEAR_gc (0x00) /* Wake Check OK from path A Ok Enable - CLEAR */
#define RXDSP_WCOAOE_SET_gc   (0x80) /* Wake Check OK from path A Ok Enable - SET */


/* RSSI Range OK Enable for path B */
#define RXDSP_RROEB_CLEAR_gc (0x00) /* RSSI Range OK Enable for path B - CLEAR */
#define RXDSP_RROEB_SET_gc   (0x40) /* RSSI Range OK Enable for path B - SET */


/* Start of Frame IDentifier match Enabled for path B */
#define RXDSP_SFIDEB_CLEAR_gc (0x00) /* Start of Frame IDentifier match Enabled for path B - CLEAR */
#define RXDSP_SFIDEB_SET_gc   (0x20) /* Start of Frame IDentifier match Enabled for path B - SET */


/* Wake Up Pattern match Enabled for path B */
#define RXDSP_WUPEB_CLEAR_gc (0x00) /* Wake Up Pattern match Enabled for path B - CLEAR */
#define RXDSP_WUPEB_SET_gc   (0x10) /* Wake Up Pattern match Enabled for path B - SET */


/* Manchester Coding Ok Enabled for path B */
#define RXDSP_MANOEB_CLEAR_gc (0x00) /* Manchester Coding Ok Enabled for path B - CLEAR */
#define RXDSP_MANOEB_SET_gc   (0x08) /* Manchester Coding Ok Enabled for path B - SET */


/* Symbol Timing Ok Enabled for path B */
#define RXDSP_SYTOEB_CLEAR_gc (0x00) /* Symbol Timing Ok Enabled for path B - CLEAR */
#define RXDSP_SYTOEB_SET_gc   (0x04) /* Symbol Timing Ok Enabled for path B - SET */


/* AMPlitude Ok Enabled for path B */
#define RXDSP_AMPOEB_CLEAR_gc (0x00) /* AMPlitude Ok Enabled for path B - CLEAR */
#define RXDSP_AMPOEB_SET_gc   (0x02) /* AMPlitude Ok Enabled for path B - SET */


/* CARrier check Ok Enabled for path B */
#define RXDSP_CAROEB_CLEAR_gc (0x00) /* CARrier check Ok Enabled for path B - CLEAR */
#define RXDSP_CAROEB_SET_gc   (0x01) /* CARrier check Ok Enabled for path B - SET */


/* Wake Check Ok on path B Ok */
#define RXDSP_WCOBO_CLEAR_gc (0x00) /* Wake Check Ok on path B Ok - CLEAR */
#define RXDSP_WCOBO_SET_gc   (0x80) /* Wake Check Ok on path B Ok - SET */


/* RSSI Range Ok on Path A */
#define RXDSP_RROA_CLEAR_gc (0x00) /* RSSI Range Ok on Path A - CLEAR */
#define RXDSP_RROA_SET_gc   (0x40) /* RSSI Range Ok on Path A - SET */


/* Start of Frame IDentifier matched on path A */
#define RXDSP_SFIDOA_CLEAR_gc (0x00) /* Start of Frame IDentifier matched on path A - CLEAR */
#define RXDSP_SFIDOA_SET_gc   (0x20) /* Start of Frame IDentifier matched on path A - SET */


/* Wake Up Pattern matched on path A */
#define RXDSP_WUPOA_CLEAR_gc (0x00) /* Wake Up Pattern matched on path A - CLEAR */
#define RXDSP_WUPOA_SET_gc   (0x10) /* Wake Up Pattern matched on path A - SET */


/* Manchester Coding Ok on path A */
#define RXDSP_MANOA_CLEAR_gc (0x00) /* Manchester Coding Ok on path A - CLEAR */
#define RXDSP_MANOA_SET_gc   (0x08) /* Manchester Coding Ok on path A - SET */


/* Symbol Timing Ok on path A */
#define RXDSP_SYTOA_CLEAR_gc (0x00) /* Symbol Timing Ok on path A - CLEAR */
#define RXDSP_SYTOA_SET_gc   (0x04) /* Symbol Timing Ok on path A - SET */


/* AMPlitude Ok on path A */
#define RXDSP_AMPOA_CLEAR_gc (0x00) /* AMPlitude Ok on path A - CLEAR */
#define RXDSP_AMPOA_SET_gc   (0x02) /* AMPlitude Ok on path A - SET */


/* CARrier check Ok on path A */
#define RXDSP_CAROA_CLEAR_gc (0x00) /* CARrier check Ok on path A - CLEAR */
#define RXDSP_CAROA_SET_gc   (0x01) /* CARrier check Ok on path A - SET */


/* Wake Check Ok on path A Ok */
#define RXDSP_WCOAO_CLEAR_gc (0x00) /* Wake Check Ok on path A Ok - CLEAR */
#define RXDSP_WCOAO_SET_gc   (0x80) /* Wake Check Ok on path A Ok - SET */


/* RSSI Range Ok on Path B */
#define RXDSP_RROB_CLEAR_gc (0x00) /* RSSI Range Ok on Path B - CLEAR */
#define RXDSP_RROB_SET_gc   (0x40) /* RSSI Range Ok on Path B - SET */


/* Start of Frame IDentifier matched on path B */
#define RXDSP_SFIDOB_CLEAR_gc (0x00) /* Start of Frame IDentifier matched on path B - CLEAR */
#define RXDSP_SFIDOB_SET_gc   (0x20) /* Start of Frame IDentifier matched on path B - SET */


/* Wake Up Pattern matched on path B */
#define RXDSP_WUPOB_CLEAR_gc (0x00) /* Wake Up Pattern matched on path B - CLEAR */
#define RXDSP_WUPOB_SET_gc   (0x10) /* Wake Up Pattern matched on path B - SET */


/* Manchester Coding Ok on path B */
#define RXDSP_MANOB_CLEAR_gc (0x00) /* Manchester Coding Ok on path B - CLEAR */
#define RXDSP_MANOB_SET_gc   (0x08) /* Manchester Coding Ok on path B - SET */


/* Symbol Timing Ok on path B */
#define RXDSP_SYTOB_CLEAR_gc (0x00) /* Symbol Timing Ok on path B - CLEAR */
#define RXDSP_SYTOB_SET_gc   (0x04) /* Symbol Timing Ok on path B - SET */


/* AMPlitude Ok on path B */
#define RXDSP_AMPOB_CLEAR_gc (0x00) /* AMPlitude Ok on path B - CLEAR */
#define RXDSP_AMPOB_SET_gc   (0x02) /* AMPlitude Ok on path B - SET */


/* CARrier check Ok on path B */
#define RXDSP_CAROB_CLEAR_gc (0x00) /* CARrier check Ok on path B - CLEAR */
#define RXDSP_CAROB_SET_gc   (0x01) /* CARrier check Ok on path B - SET */


/* End of Telegram Location on path A */
#define RXDSP_EOTLA_VAL_0x00_gc (0x00<<1) /* No EOT */
#define RXDSP_EOTLA_VAL_0x01_gc (0x01<<1) /* Before WCO */
#define RXDSP_EOTLA_VAL_0x02_gc (0x02<<1) /* Between WCO and SOT */
#define RXDSP_EOTLA_VAL_0x03_gc (0x03<<1) /* After SOT */


/* Cyclic Redundancy Check Ok on path A */
#define RXDSP_CRCOA_CLEAR_gc (0x00) /* Cyclic Redundancy Check Ok on path A - CLEAR */
#define RXDSP_CRCOA_SET_gc   (0x01) /* Cyclic Redundancy Check Ok on path A - SET */


/* End of Telegram Location on path B */
#define RXDSP_EOTLB_VAL_0x00_gc (0x00<<1) /* No EOT */
#define RXDSP_EOTLB_VAL_0x01_gc (0x01<<1) /* Before WCO */
#define RXDSP_EOTLB_VAL_0x02_gc (0x02<<1) /* Between WCO and SOT */
#define RXDSP_EOTLB_VAL_0x03_gc (0x03<<1) /* After SOT */


/* Cyclic Redundancy Check Ok on path B */
#define RXDSP_CRCOB_CLEAR_gc (0x00) /* Cyclic Redundancy Check Ok on path B - CLEAR */
#define RXDSP_CRCOB_SET_gc   (0x01) /* Cyclic Redundancy Check Ok on path B - SET */


/*
--------------------------------------------------------------------------------
SFIFO - 
--------------------------------------------------------------------------------
*/


/* Support FIFO Direct Read Access Operational Mode */
#define SFIFO_SFDRA_CLEAR_gc (0x00) /* Support FIFO Direct Read Access Operational Mode - CLEAR */
#define SFIFO_SFDRA_SET_gc   (0x80) /* Support FIFO Direct Read Access Operational Mode - SET */


/* Support FIFO Fill-Level Configuration */
#define SFIFO_SFC_SFFLC_gc(x) (x & 0x1F)

/* Support FIFO Error Interrupt Mask */
#define SFIFO_SFERIM_CLEAR_gc (0x00) /* Support FIFO Error Interrupt Mask - CLEAR */
#define SFIFO_SFERIM_SET_gc   (0x02) /* Support FIFO Error Interrupt Mask - SET */


/* Support FIFO Fill-level Interrupt Mask */
#define SFIFO_SFFLIM_CLEAR_gc (0x00) /* Support FIFO Fill-level Interrupt Mask - CLEAR */
#define SFIFO_SFFLIM_SET_gc   (0x01) /* Support FIFO Fill-level Interrupt Mask - SET */


/* Support FIFO Clear */
#define SFIFO_SFCLR_CLEAR_gc (0x00) /* Support FIFO Clear - CLEAR */
#define SFIFO_SFCLR_SET_gc   (0x80) /* Support FIFO Clear - SET */


/* Support FIFO Fill Level Status */
#define SFIFO_SFL_SFFLS_gc(x) (x & 0x1F)

/* Support FIFO Overflow Flag */
#define SFIFO_SFOFL_CLEAR_gc (0x00) /* Support FIFO Overflow Flag - CLEAR */
#define SFIFO_SFOFL_SET_gc   (0x04) /* Support FIFO Overflow Flag - SET */


/* Support FIFO Underflow Flag */
#define SFIFO_SFUFL_CLEAR_gc (0x00) /* Support FIFO Underflow Flag - CLEAR */
#define SFIFO_SFUFL_SET_gc   (0x02) /* Support FIFO Underflow Flag - SET */


/* Support FIFO Fill-Level Reached Status Flag */
#define SFIFO_SFFLRF_CLEAR_gc (0x00) /* Support FIFO Fill-Level Reached Status Flag - CLEAR */
#define SFIFO_SFFLRF_SET_gc   (0x01) /* Support FIFO Fill-Level Reached Status Flag - SET */


/*
--------------------------------------------------------------------------------
SPI - 
--------------------------------------------------------------------------------
*/


/* SPI Interrupt Flag */
#define SPI_SPIF_CLEAR_gc (0x00) /* SPI Interrupt Flag - CLEAR */
#define SPI_SPIF_SET_gc   (0x80) /* SPI Interrupt Flag - SET */


/* Tx Buffer Interrupt Flag */
#define SPI_TXIF_CLEAR_gc (0x00) /* Tx Buffer Interrupt Flag - CLEAR */
#define SPI_TXIF_SET_gc   (0x20) /* Tx Buffer Interrupt Flag - SET */


/* Rx Buffer Interrupt Flag */
#define SPI_RXIF_CLEAR_gc (0x00) /* Rx Buffer Interrupt Flag - CLEAR */
#define SPI_RXIF_SET_gc   (0x10) /* Rx Buffer Interrupt Flag - SET */


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
#define SPI_SPR_VAL_0x00_gc (0x00) /* clkio/4 */
#define SPI_SPR_VAL_0x01_gc (0x01) /* clkio/16 */
#define SPI_SPR_VAL_0x02_gc (0x02) /* clkio/64 */
#define SPI_SPR_VAL_0x03_gc (0x03) /* clkio/128 */
#define SPI_SPR_VAL_0x04_gc (0x04) /* clkio/2 */
#define SPI_SPR_VAL_0x05_gc (0x05) /* clkio/8 */
#define SPI_SPR_VAL_0x06_gc (0x06) /* clkio/32 */
#define SPI_SPR_VAL_0x07_gc (0x07) /* clkio/64 */


/* SPI Tx Buffer Clear */
#define SPI_TFC_CLEAR_gc (0x00) /* SPI Tx Buffer Clear - CLEAR */
#define SPI_TFC_SET_gc   (0x80) /* SPI Tx Buffer Clear - SET */


/* SPI Transmit Buffer Fill Level */
#define SPI_SFFR_TFL_gc(x) ((x<<4) & 0x70)

/* SPI Rx Buffer Clear */
#define SPI_RFC_CLEAR_gc (0x00) /* SPI Rx Buffer Clear - CLEAR */
#define SPI_RFC_SET_gc   (0x08) /* SPI Rx Buffer Clear - SET */


/* SPI Receive Buffer Fill Level */
#define SPI_SFFR_RFL_gc(x) (x & 0x07)

/* SPI Tx Buffer Interrupt Enable */
#define SPI_STIE_CLEAR_gc (0x00) /* SPI Tx Buffer Interrupt Enable - CLEAR */
#define SPI_STIE_SET_gc   (0x80) /* SPI Tx Buffer Interrupt Enable - SET */


/* SPI Transmit Buffer Interrupt Level */
#define SPI_SFIR_TIL_gc(x) ((x<<4) & 0x70)

/* SPI Rx Buffer Interrupt Enable */
#define SPI_SRIE_CLEAR_gc (0x00) /* SPI Rx Buffer Interrupt Enable - CLEAR */
#define SPI_SRIE_SET_gc   (0x08) /* SPI Rx Buffer Interrupt Enable - SET */


/* SPI Receive Buffer Interrupt Level */
#define SPI_SFIR_RIL_gc(x) (x & 0x07)

/*
--------------------------------------------------------------------------------
SSM - 
--------------------------------------------------------------------------------
*/


/* End Of Telegram on Path B Fail Enable */
#define SSM_EOTBFE1_CLEAR_gc (0x00) /* End Of Telegram on Path B Fail Enable - CLEAR */
#define SSM_EOTBFE1_SET_gc   (0x80) /* End Of Telegram on Path B Fail Enable - SET */


/* RSSI Range Fail Enable on Path A */
#define SSM_RRFEA1_CLEAR_gc (0x00) /* RSSI Range Fail Enable on Path A - CLEAR */
#define SSM_RRFEA1_SET_gc   (0x40) /* RSSI Range Fail Enable on Path A - SET */


/* Telegram Length Reached Enable on Path A */
#define SSM_TELREA1_CLEAR_gc (0x00) /* Telegram Length Reached Enable on Path A - CLEAR */
#define SSM_TELREA1_SET_gc   (0x20) /* Telegram Length Reached Enable on Path A - SET */


/* Time-Out Fail Enable on Path A */
#define SSM_TMOFEA1_CLEAR_gc (0x00) /* Time-Out Fail Enable on Path A - CLEAR */
#define SSM_TMOFEA1_SET_gc   (0x10) /* Time-Out Fail Enable on Path A - SET */


/* MANchester Coding Failed Enable for Path A */
#define SSM_MANFEA1_CLEAR_gc (0x00) /* MANchester Coding Failed Enable for Path A - CLEAR */
#define SSM_MANFEA1_SET_gc   (0x08) /* MANchester Coding Failed Enable for Path A - SET */


/* SYmbol Timing check Failed Enable for Path A */
#define SSM_SYTFEA1_CLEAR_gc (0x00) /* SYmbol Timing check Failed Enable for Path A - CLEAR */
#define SSM_SYTFEA1_SET_gc   (0x04) /* SYmbol Timing check Failed Enable for Path A - SET */


/* AMPlitude Failed Enable for path A */
#define SSM_AMPFEA1_CLEAR_gc (0x00) /* AMPlitude Failed Enable for path A - CLEAR */
#define SSM_AMPFEA1_SET_gc   (0x02) /* AMPlitude Failed Enable for path A - SET */


/* CARrier check Failed Enable for path A */
#define SSM_CARFEA1_CLEAR_gc (0x00) /* CARrier check Failed Enable for path A - CLEAR */
#define SSM_CARFEA1_SET_gc   (0x01) /* CARrier check Failed Enable for path A - SET */


/* End Of Telegram on Path B Fail Enable */
#define SSM_EOTAFE1_CLEAR_gc (0x00) /* End Of Telegram on Path B Fail Enable - CLEAR */
#define SSM_EOTAFE1_SET_gc   (0x80) /* End Of Telegram on Path B Fail Enable - SET */


/* RSSI Range Fail Enable on Path B */
#define SSM_RRFEB1_CLEAR_gc (0x00) /* RSSI Range Fail Enable on Path B - CLEAR */
#define SSM_RRFEB1_SET_gc   (0x40) /* RSSI Range Fail Enable on Path B - SET */


/* Telegram Length Reached Enable on Path B */
#define SSM_TELREB1_CLEAR_gc (0x00) /* Telegram Length Reached Enable on Path B - CLEAR */
#define SSM_TELREB1_SET_gc   (0x20) /* Telegram Length Reached Enable on Path B - SET */


/* Time-Out Fail Enable on Path B */
#define SSM_TMOFEB1_CLEAR_gc (0x00) /* Time-Out Fail Enable on Path B - CLEAR */
#define SSM_TMOFEB1_SET_gc   (0x10) /* Time-Out Fail Enable on Path B - SET */


/* MANchester Coding Failed Enable for Path B */
#define SSM_MANFEB1_CLEAR_gc (0x00) /* MANchester Coding Failed Enable for Path B - CLEAR */
#define SSM_MANFEB1_SET_gc   (0x08) /* MANchester Coding Failed Enable for Path B - SET */


/* SYmbol Timing check Failed Enable for Path B */
#define SSM_SYTFEB1_CLEAR_gc (0x00) /* SYmbol Timing check Failed Enable for Path B - CLEAR */
#define SSM_SYTFEB1_SET_gc   (0x04) /* SYmbol Timing check Failed Enable for Path B - SET */


/* AMPlitude Failed Enable for path B */
#define SSM_AMPFEB1_CLEAR_gc (0x00) /* AMPlitude Failed Enable for path B - CLEAR */
#define SSM_AMPFEB1_SET_gc   (0x02) /* AMPlitude Failed Enable for path B - SET */


/* CARrier check Failed Enable for path B */
#define SSM_CARFEB1_CLEAR_gc (0x00) /* CARrier check Failed Enable for path B - CLEAR */
#define SSM_CARFEB1_SET_gc   (0x01) /* CARrier check Failed Enable for path B - SET */


/* End Of Telegram on Path B Fail Enable */
#define SSM_EOTBFE2_CLEAR_gc (0x00) /* End Of Telegram on Path B Fail Enable - CLEAR */
#define SSM_EOTBFE2_SET_gc   (0x80) /* End Of Telegram on Path B Fail Enable - SET */


/* RSSI Range Fail Enable on Path A */
#define SSM_RRFEA2_CLEAR_gc (0x00) /* RSSI Range Fail Enable on Path A - CLEAR */
#define SSM_RRFEA2_SET_gc   (0x40) /* RSSI Range Fail Enable on Path A - SET */


/* Telegram Length Reached Enable on Path A */
#define SSM_TELREA2_CLEAR_gc (0x00) /* Telegram Length Reached Enable on Path A - CLEAR */
#define SSM_TELREA2_SET_gc   (0x20) /* Telegram Length Reached Enable on Path A - SET */


/* Time-Out Fail Enable on Path A */
#define SSM_TMOFEA2_CLEAR_gc (0x00) /* Time-Out Fail Enable on Path A - CLEAR */
#define SSM_TMOFEA2_SET_gc   (0x10) /* Time-Out Fail Enable on Path A - SET */


/* MANchester Coding Failed Enable for Path A */
#define SSM_MANFEA2_CLEAR_gc (0x00) /* MANchester Coding Failed Enable for Path A - CLEAR */
#define SSM_MANFEA2_SET_gc   (0x08) /* MANchester Coding Failed Enable for Path A - SET */


/* SYmbol Timing check Failed Enable for Path A */
#define SSM_SYTFEA2_CLEAR_gc (0x00) /* SYmbol Timing check Failed Enable for Path A - CLEAR */
#define SSM_SYTFEA2_SET_gc   (0x04) /* SYmbol Timing check Failed Enable for Path A - SET */


/* AMPlitude Failed Enable for path A */
#define SSM_AMPFEA2_CLEAR_gc (0x00) /* AMPlitude Failed Enable for path A - CLEAR */
#define SSM_AMPFEA2_SET_gc   (0x02) /* AMPlitude Failed Enable for path A - SET */


/* CARrier check Failed Enable for path A */
#define SSM_CARFEA2_CLEAR_gc (0x00) /* CARrier check Failed Enable for path A - CLEAR */
#define SSM_CARFEA2_SET_gc   (0x01) /* CARrier check Failed Enable for path A - SET */


/* End Of Telegram on Path B Fail Enable */
#define SSM_EOTAFE2_CLEAR_gc (0x00) /* End Of Telegram on Path B Fail Enable - CLEAR */
#define SSM_EOTAFE2_SET_gc   (0x80) /* End Of Telegram on Path B Fail Enable - SET */


/* RSSI Range Fail Enable on Path B */
#define SSM_RRFEB2_CLEAR_gc (0x00) /* RSSI Range Fail Enable on Path B - CLEAR */
#define SSM_RRFEB2_SET_gc   (0x40) /* RSSI Range Fail Enable on Path B - SET */


/* Telegram Length Reached Enable on Path B */
#define SSM_TELREB2_CLEAR_gc (0x00) /* Telegram Length Reached Enable on Path B - CLEAR */
#define SSM_TELREB2_SET_gc   (0x20) /* Telegram Length Reached Enable on Path B - SET */


/* Time-Out Fail Enable on Path B */
#define SSM_TMOFEB2_CLEAR_gc (0x00) /* Time-Out Fail Enable on Path B - CLEAR */
#define SSM_TMOFEB2_SET_gc   (0x10) /* Time-Out Fail Enable on Path B - SET */


/* MANchester Coding Failed Enable for Path B */
#define SSM_MANFEB2_CLEAR_gc (0x00) /* MANchester Coding Failed Enable for Path B - CLEAR */
#define SSM_MANFEB2_SET_gc   (0x08) /* MANchester Coding Failed Enable for Path B - SET */


/* SYmbol Timing check Failed Enable for Path B */
#define SSM_SYTFEB2_CLEAR_gc (0x00) /* SYmbol Timing check Failed Enable for Path B - CLEAR */
#define SSM_SYTFEB2_SET_gc   (0x04) /* SYmbol Timing check Failed Enable for Path B - SET */


/* AMPlitude Failed Enable for path B */
#define SSM_AMPFEB2_CLEAR_gc (0x00) /* AMPlitude Failed Enable for path B - CLEAR */
#define SSM_AMPFEB2_SET_gc   (0x02) /* AMPlitude Failed Enable for path B - SET */


/* CARrier check Failed Enable for path B */
#define SSM_CARFEB2_CLEAR_gc (0x00) /* CARrier check Failed Enable for path B - CLEAR */
#define SSM_CARFEB2_SET_gc   (0x01) /* CARrier check Failed Enable for path B - SET */


/* End Of Telegram on Path B Fail Enable */
#define SSM_EOTBFE3_CLEAR_gc (0x00) /* End Of Telegram on Path B Fail Enable - CLEAR */
#define SSM_EOTBFE3_SET_gc   (0x80) /* End Of Telegram on Path B Fail Enable - SET */


/* RSSI Range Fail Enable on Path A */
#define SSM_RRFEA3_CLEAR_gc (0x00) /* RSSI Range Fail Enable on Path A - CLEAR */
#define SSM_RRFEA3_SET_gc   (0x40) /* RSSI Range Fail Enable on Path A - SET */


/* Telegram Length Reached Enable on Path A */
#define SSM_TELREA3_CLEAR_gc (0x00) /* Telegram Length Reached Enable on Path A - CLEAR */
#define SSM_TELREA3_SET_gc   (0x20) /* Telegram Length Reached Enable on Path A - SET */


/* Time-Out Fail Enable on Path A */
#define SSM_TMOFEA3_CLEAR_gc (0x00) /* Time-Out Fail Enable on Path A - CLEAR */
#define SSM_TMOFEA3_SET_gc   (0x10) /* Time-Out Fail Enable on Path A - SET */


/* MANchester Coding Failed Enable for Path A */
#define SSM_MANFEA3_CLEAR_gc (0x00) /* MANchester Coding Failed Enable for Path A - CLEAR */
#define SSM_MANFEA3_SET_gc   (0x08) /* MANchester Coding Failed Enable for Path A - SET */


/* SYmbol Timing check Failed Enable for Path A */
#define SSM_SYTFEA3_CLEAR_gc (0x00) /* SYmbol Timing check Failed Enable for Path A - CLEAR */
#define SSM_SYTFEA3_SET_gc   (0x04) /* SYmbol Timing check Failed Enable for Path A - SET */


/* AMPlitude Failed Enable for path A */
#define SSM_AMPFEA3_CLEAR_gc (0x00) /* AMPlitude Failed Enable for path A - CLEAR */
#define SSM_AMPFEA3_SET_gc   (0x02) /* AMPlitude Failed Enable for path A - SET */


/* CARrier check Failed Enable for path A */
#define SSM_CARFEA3_CLEAR_gc (0x00) /* CARrier check Failed Enable for path A - CLEAR */
#define SSM_CARFEA3_SET_gc   (0x01) /* CARrier check Failed Enable for path A - SET */


/* End Of Telegram on Path B Fail Enable */
#define SSM_EOTAFE3_CLEAR_gc (0x00) /* End Of Telegram on Path B Fail Enable - CLEAR */
#define SSM_EOTAFE3_SET_gc   (0x80) /* End Of Telegram on Path B Fail Enable - SET */


/* RSSI Range Fail Enable on Path B */
#define SSM_RRFEB3_CLEAR_gc (0x00) /* RSSI Range Fail Enable on Path B - CLEAR */
#define SSM_RRFEB3_SET_gc   (0x40) /* RSSI Range Fail Enable on Path B - SET */


/* Telegram Length Reached Enable on Path B */
#define SSM_TELREB3_CLEAR_gc (0x00) /* Telegram Length Reached Enable on Path B - CLEAR */
#define SSM_TELREB3_SET_gc   (0x20) /* Telegram Length Reached Enable on Path B - SET */


/* Time-Out Fail Enable on Path B */
#define SSM_TMOFEB3_CLEAR_gc (0x00) /* Time-Out Fail Enable on Path B - CLEAR */
#define SSM_TMOFEB3_SET_gc   (0x10) /* Time-Out Fail Enable on Path B - SET */


/* MANchester Coding Failed Enable for Path B */
#define SSM_MANFEB3_CLEAR_gc (0x00) /* MANchester Coding Failed Enable for Path B - CLEAR */
#define SSM_MANFEB3_SET_gc   (0x08) /* MANchester Coding Failed Enable for Path B - SET */


/* SYmbol Timing check Failed Enable for Path B */
#define SSM_SYTFEB3_CLEAR_gc (0x00) /* SYmbol Timing check Failed Enable for Path B - CLEAR */
#define SSM_SYTFEB3_SET_gc   (0x04) /* SYmbol Timing check Failed Enable for Path B - SET */


/* AMPlitude Failed Enable for path B */
#define SSM_AMPFEB3_CLEAR_gc (0x00) /* AMPlitude Failed Enable for path B - CLEAR */
#define SSM_AMPFEB3_SET_gc   (0x02) /* AMPlitude Failed Enable for path B - SET */


/* CARrier check Failed Enable for path B */
#define SSM_CARFEB3_CLEAR_gc (0x00) /* CARrier check Failed Enable for path B - CLEAR */
#define SSM_CARFEB3_SET_gc   (0x01) /* CARrier check Failed Enable for path B - SET */


/* Intermittent WUP Mode Path B */
#define SSM_IWUPB_CLEAR_gc (0x00) /* Intermittent WUP Mode Path B - CLEAR */
#define SSM_IWUPB_SET_gc   (0x80) /* Intermittent WUP Mode Path B - SET */


/* Demodulator Automatic Restart on Path B */
#define SSM_DARB_CLEAR_gc (0x00) /* Demodulator Automatic Restart on Path B - CLEAR */
#define SSM_DARB_SET_gc   (0x40) /* Demodulator Automatic Restart on Path B - SET */


/* Gap Mode Path B */
#define SSM_GAPMB_CLEAR_gc (0x00) /* Gap Mode Path B - CLEAR */
#define SSM_GAPMB_SET_gc   (0x20) /* Gap Mode Path B - SET */


/* Rx Telegram End Handling Path B */
#define SSM_RXTEHB_CLEAR_gc (0x00) /* Rx Telegram End Handling Path B - CLEAR */
#define SSM_RXTEHB_SET_gc   (0x10) /* Rx Telegram End Handling Path B - SET */


/* Intermittent WUP Mode Path A */
#define SSM_IWUPA_CLEAR_gc (0x00) /* Intermittent WUP Mode Path A - CLEAR */
#define SSM_IWUPA_SET_gc   (0x08) /* Intermittent WUP Mode Path A - SET */


/* Demodulator Automatic Restart on Path A */
#define SSM_DARA_CLEAR_gc (0x00) /* Demodulator Automatic Restart on Path A - CLEAR */
#define SSM_DARA_SET_gc   (0x04) /* Demodulator Automatic Restart on Path A - SET */


/* Gap Mode Path A */
#define SSM_GAPMA_CLEAR_gc (0x00) /* Gap Mode Path A - CLEAR */
#define SSM_GAPMA_SET_gc   (0x02) /* Gap Mode Path A - SET */


/* Rx Telegram End Handling Path A */
#define SSM_RXTEHA_CLEAR_gc (0x00) /* Rx Telegram End Handling Path A - CLEAR */
#define SSM_RXTEHA_SET_gc   (0x01) /* Rx Telegram End Handling Path A - SET */


/* Master State Machine SubState Machine Select 0 */
#define SSM_MSMSM0_VAL_0x00_gc (0x00) /* None/Stop */
#define SSM_MSMSM0_VAL_0x01_gc (0x01) /* PLL en */
#define SSM_MSMSM0_VAL_0x02_gc (0x02) /* PLL lock */
#define SSM_MSMSM0_VAL_0x03_gc (0x03) /* RX DSP enable */
#define SSM_MSMSM0_VAL_0x04_gc (0x04) /* RX DSP disable */
#define SSM_MSMSM0_VAL_0x05_gc (0x05) /* TX DSP enable */
#define SSM_MSMSM0_VAL_0x06_gc (0x06) /* TX DSP disable */
#define SSM_MSMSM0_VAL_0x07_gc (0x07) /* RX to TX */
#define SSM_MSMSM0_VAL_0x08_gc (0x08) /* TX to RX */
#define SSM_MSMSM0_VAL_0x09_gc (0x09) /* Get telegram */
#define SSM_MSMSM0_VAL_0x0A_gc (0x0A) /* Send telegram */
#define SSM_MSMSM0_VAL_0x0B_gc (0x0B) /* Shut down */
#define SSM_MSMSM0_VAL_0x0C_gc (0x0C) /* VCO Tuning */
#define SSM_MSMSM0_VAL_0x0D_gc (0x0D) /* Antenna Tuning */


/* Master State Machine SubState Machine Select 1 */
#define SSM_MSMSM1_VAL_0x00_gc (0x00<<4) /* None/Stop */
#define SSM_MSMSM1_VAL_0x01_gc (0x01<<4) /* PLL en */
#define SSM_MSMSM1_VAL_0x02_gc (0x02<<4) /* PLL lock */
#define SSM_MSMSM1_VAL_0x03_gc (0x03<<4) /* RX DSP enable */
#define SSM_MSMSM1_VAL_0x04_gc (0x04<<4) /* RX DSP disable */
#define SSM_MSMSM1_VAL_0x05_gc (0x05<<4) /* TX DSP enable */
#define SSM_MSMSM1_VAL_0x06_gc (0x06<<4) /* TX DSP disable */
#define SSM_MSMSM1_VAL_0x07_gc (0x07<<4) /* RX to TX */
#define SSM_MSMSM1_VAL_0x08_gc (0x08<<4) /* TX to RX */
#define SSM_MSMSM1_VAL_0x09_gc (0x09<<4) /* Get telegram */
#define SSM_MSMSM1_VAL_0x0A_gc (0x0A<<4) /* Send telegram */
#define SSM_MSMSM1_VAL_0x0B_gc (0x0B<<4) /* Shut down */
#define SSM_MSMSM1_VAL_0x0C_gc (0x0C<<4) /* VCO Tuning */
#define SSM_MSMSM1_VAL_0x0D_gc (0x0D<<4) /* Antenna Tuning */


/* Master State Machine SubState Machine Select 2 */
#define SSM_MSMSM2_VAL_0x00_gc (0x00) /* None/Stop */
#define SSM_MSMSM2_VAL_0x01_gc (0x01) /* PLL en */
#define SSM_MSMSM2_VAL_0x02_gc (0x02) /* PLL lock */
#define SSM_MSMSM2_VAL_0x03_gc (0x03) /* RX DSP enable */
#define SSM_MSMSM2_VAL_0x04_gc (0x04) /* RX DSP disable */
#define SSM_MSMSM2_VAL_0x05_gc (0x05) /* TX DSP enable */
#define SSM_MSMSM2_VAL_0x06_gc (0x06) /* TX DSP disable */
#define SSM_MSMSM2_VAL_0x07_gc (0x07) /* RX to TX */
#define SSM_MSMSM2_VAL_0x08_gc (0x08) /* TX to RX */
#define SSM_MSMSM2_VAL_0x09_gc (0x09) /* Get telegram */
#define SSM_MSMSM2_VAL_0x0A_gc (0x0A) /* Send telegram */
#define SSM_MSMSM2_VAL_0x0B_gc (0x0B) /* Shut down */
#define SSM_MSMSM2_VAL_0x0C_gc (0x0C) /* VCO Tuning */
#define SSM_MSMSM2_VAL_0x0D_gc (0x0D) /* Antenna Tuning */


/* Master State Machine SubState Machine Select 3 */
#define SSM_MSMSM3_VAL_0x00_gc (0x00<<4) /* None/Stop */
#define SSM_MSMSM3_VAL_0x01_gc (0x01<<4) /* PLL en */
#define SSM_MSMSM3_VAL_0x02_gc (0x02<<4) /* PLL lock */
#define SSM_MSMSM3_VAL_0x03_gc (0x03<<4) /* RX DSP enable */
#define SSM_MSMSM3_VAL_0x04_gc (0x04<<4) /* RX DSP disable */
#define SSM_MSMSM3_VAL_0x05_gc (0x05<<4) /* TX DSP enable */
#define SSM_MSMSM3_VAL_0x06_gc (0x06<<4) /* TX DSP disable */
#define SSM_MSMSM3_VAL_0x07_gc (0x07<<4) /* RX to TX */
#define SSM_MSMSM3_VAL_0x08_gc (0x08<<4) /* TX to RX */
#define SSM_MSMSM3_VAL_0x09_gc (0x09<<4) /* Get telegram */
#define SSM_MSMSM3_VAL_0x0A_gc (0x0A<<4) /* Send telegram */
#define SSM_MSMSM3_VAL_0x0B_gc (0x0B<<4) /* Shut down */
#define SSM_MSMSM3_VAL_0x0C_gc (0x0C<<4) /* VCO Tuning */
#define SSM_MSMSM3_VAL_0x0D_gc (0x0D<<4) /* Antenna Tuning */


/* Master State Machine SubState Machine Select 4 */
#define SSM_MSMSM4_VAL_0x00_gc (0x00) /* None/Stop */
#define SSM_MSMSM4_VAL_0x01_gc (0x01) /* PLL en */
#define SSM_MSMSM4_VAL_0x02_gc (0x02) /* PLL lock */
#define SSM_MSMSM4_VAL_0x03_gc (0x03) /* RX DSP enable */
#define SSM_MSMSM4_VAL_0x04_gc (0x04) /* RX DSP disable */
#define SSM_MSMSM4_VAL_0x05_gc (0x05) /* TX DSP enable */
#define SSM_MSMSM4_VAL_0x06_gc (0x06) /* TX DSP disable */
#define SSM_MSMSM4_VAL_0x07_gc (0x07) /* RX to TX */
#define SSM_MSMSM4_VAL_0x08_gc (0x08) /* TX to RX */
#define SSM_MSMSM4_VAL_0x09_gc (0x09) /* Get telegram */
#define SSM_MSMSM4_VAL_0x0A_gc (0x0A) /* Send telegram */
#define SSM_MSMSM4_VAL_0x0B_gc (0x0B) /* Shut down */
#define SSM_MSMSM4_VAL_0x0C_gc (0x0C) /* VCO Tuning */
#define SSM_MSMSM4_VAL_0x0D_gc (0x0D) /* Antenna Tuning */


/* Master State Machine SubState Machine Select 5 */
#define SSM_MSMSM5_VAL_0x00_gc (0x00<<4) /* None/Stop */
#define SSM_MSMSM5_VAL_0x01_gc (0x01<<4) /* PLL en */
#define SSM_MSMSM5_VAL_0x02_gc (0x02<<4) /* PLL lock */
#define SSM_MSMSM5_VAL_0x03_gc (0x03<<4) /* RX DSP enable */
#define SSM_MSMSM5_VAL_0x04_gc (0x04<<4) /* RX DSP disable */
#define SSM_MSMSM5_VAL_0x05_gc (0x05<<4) /* TX DSP enable */
#define SSM_MSMSM5_VAL_0x06_gc (0x06<<4) /* TX DSP disable */
#define SSM_MSMSM5_VAL_0x07_gc (0x07<<4) /* RX to TX */
#define SSM_MSMSM5_VAL_0x08_gc (0x08<<4) /* TX to RX */
#define SSM_MSMSM5_VAL_0x09_gc (0x09<<4) /* Get telegram */
#define SSM_MSMSM5_VAL_0x0A_gc (0x0A<<4) /* Send telegram */
#define SSM_MSMSM5_VAL_0x0B_gc (0x0B<<4) /* Shut down */
#define SSM_MSMSM5_VAL_0x0C_gc (0x0C<<4) /* VCO Tuning */
#define SSM_MSMSM5_VAL_0x0D_gc (0x0D<<4) /* Antenna Tuning */


/* Master State Machine SubState Machine Select 6 */
#define SSM_MSMSM6_VAL_0x00_gc (0x00) /* None/Stop */
#define SSM_MSMSM6_VAL_0x01_gc (0x01) /* PLL en */
#define SSM_MSMSM6_VAL_0x02_gc (0x02) /* PLL lock */
#define SSM_MSMSM6_VAL_0x03_gc (0x03) /* RX DSP enable */
#define SSM_MSMSM6_VAL_0x04_gc (0x04) /* RX DSP disable */
#define SSM_MSMSM6_VAL_0x05_gc (0x05) /* TX DSP enable */
#define SSM_MSMSM6_VAL_0x06_gc (0x06) /* TX DSP disable */
#define SSM_MSMSM6_VAL_0x07_gc (0x07) /* RX to TX */
#define SSM_MSMSM6_VAL_0x08_gc (0x08) /* TX to RX */
#define SSM_MSMSM6_VAL_0x09_gc (0x09) /* Get telegram */
#define SSM_MSMSM6_VAL_0x0A_gc (0x0A) /* Send telegram */
#define SSM_MSMSM6_VAL_0x0B_gc (0x0B) /* Shut down */
#define SSM_MSMSM6_VAL_0x0C_gc (0x0C) /* VCO Tuning */
#define SSM_MSMSM6_VAL_0x0D_gc (0x0D) /* Antenna Tuning */


/* Master State Machine SubState Machine Select 7 */
#define SSM_MSMSM7_VAL_0x00_gc (0x00<<4) /* None/Stop */
#define SSM_MSMSM7_VAL_0x01_gc (0x01<<4) /* PLL en */
#define SSM_MSMSM7_VAL_0x02_gc (0x02<<4) /* PLL lock */
#define SSM_MSMSM7_VAL_0x03_gc (0x03<<4) /* RX DSP enable */
#define SSM_MSMSM7_VAL_0x04_gc (0x04<<4) /* RX DSP disable */
#define SSM_MSMSM7_VAL_0x05_gc (0x05<<4) /* TX DSP enable */
#define SSM_MSMSM7_VAL_0x06_gc (0x06<<4) /* TX DSP disable */
#define SSM_MSMSM7_VAL_0x07_gc (0x07<<4) /* RX to TX */
#define SSM_MSMSM7_VAL_0x08_gc (0x08<<4) /* TX to RX */
#define SSM_MSMSM7_VAL_0x09_gc (0x09<<4) /* Get telegram */
#define SSM_MSMSM7_VAL_0x0A_gc (0x0A<<4) /* Send telegram */
#define SSM_MSMSM7_VAL_0x0B_gc (0x0B<<4) /* Shut down */
#define SSM_MSMSM7_VAL_0x0C_gc (0x0C<<4) /* VCO Tuning */
#define SSM_MSMSM7_VAL_0x0D_gc (0x0D<<4) /* Antenna Tuning */


/* Wake Check OK from path B Ok Enable */
#define SSM_WCOBOE1_CLEAR_gc (0x00) /* Wake Check OK from path B Ok Enable - CLEAR */
#define SSM_WCOBOE1_SET_gc   (0x80) /* Wake Check OK from path B Ok Enable - SET */


/* RSSI Range OK Enable for path A */
#define SSM_RROEA1_CLEAR_gc (0x00) /* RSSI Range OK Enable for path A - CLEAR */
#define SSM_RROEA1_SET_gc   (0x40) /* RSSI Range OK Enable for path A - SET */


/* Start of Frame IDentifier match Enabled for path A */
#define SSM_SFIDEA1_CLEAR_gc (0x00) /* Start of Frame IDentifier match Enabled for path A - CLEAR */
#define SSM_SFIDEA1_SET_gc   (0x20) /* Start of Frame IDentifier match Enabled for path A - SET */


/* Wake Up Pattern match Enabled for path A */
#define SSM_WUPEA1_CLEAR_gc (0x00) /* Wake Up Pattern match Enabled for path A - CLEAR */
#define SSM_WUPEA1_SET_gc   (0x10) /* Wake Up Pattern match Enabled for path A - SET */


/* Manchester Coding Ok Enabled for path A */
#define SSM_MANOEA1_CLEAR_gc (0x00) /* Manchester Coding Ok Enabled for path A - CLEAR */
#define SSM_MANOEA1_SET_gc   (0x08) /* Manchester Coding Ok Enabled for path A - SET */


/* Symbol Timing Ok Enabled for path A */
#define SSM_SYTOEA1_CLEAR_gc (0x00) /* Symbol Timing Ok Enabled for path A - CLEAR */
#define SSM_SYTOEA1_SET_gc   (0x04) /* Symbol Timing Ok Enabled for path A - SET */


/* AMPlitude Ok Enabled for path A */
#define SSM_AMPOEA1_CLEAR_gc (0x00) /* AMPlitude Ok Enabled for path A - CLEAR */
#define SSM_AMPOEA1_SET_gc   (0x02) /* AMPlitude Ok Enabled for path A - SET */


/* CARrier check Ok Enabled for path A */
#define SSM_CAROEA1_CLEAR_gc (0x00) /* CARrier check Ok Enabled for path A - CLEAR */
#define SSM_CAROEA1_SET_gc   (0x01) /* CARrier check Ok Enabled for path A - SET */


/* Wake Check Ok on path B Ok */
#define SSM_WCOAOE1_CLEAR_gc (0x00) /* Wake Check Ok on path B Ok - CLEAR */
#define SSM_WCOAOE1_SET_gc   (0x80) /* Wake Check Ok on path B Ok - SET */


/* RSSI Range Ok on Path A */
#define SSM_RROEB1_CLEAR_gc (0x00) /* RSSI Range Ok on Path A - CLEAR */
#define SSM_RROEB1_SET_gc   (0x40) /* RSSI Range Ok on Path A - SET */


/* Start of Frame IDentifier match Enabled for path B */
#define SSM_SFIDEB1_CLEAR_gc (0x00) /* Start of Frame IDentifier match Enabled for path B - CLEAR */
#define SSM_SFIDEB1_SET_gc   (0x20) /* Start of Frame IDentifier match Enabled for path B - SET */


/* Wake Up Pattern match Enabled for path B */
#define SSM_WUPEB1_CLEAR_gc (0x00) /* Wake Up Pattern match Enabled for path B - CLEAR */
#define SSM_WUPEB1_SET_gc   (0x10) /* Wake Up Pattern match Enabled for path B - SET */


/* Manchester Coding Ok Enabled for path B */
#define SSM_MANOEB1_CLEAR_gc (0x00) /* Manchester Coding Ok Enabled for path B - CLEAR */
#define SSM_MANOEB1_SET_gc   (0x08) /* Manchester Coding Ok Enabled for path B - SET */


/* Symbol Timing Ok Enabled for path B */
#define SSM_SYTOEB1_CLEAR_gc (0x00) /* Symbol Timing Ok Enabled for path B - CLEAR */
#define SSM_SYTOEB1_SET_gc   (0x04) /* Symbol Timing Ok Enabled for path B - SET */


/* AMPlitude Ok Enabled for path B */
#define SSM_AMPOEB1_CLEAR_gc (0x00) /* AMPlitude Ok Enabled for path B - CLEAR */
#define SSM_AMPOEB1_SET_gc   (0x02) /* AMPlitude Ok Enabled for path B - SET */


/* CARrier check Ok Enabled for path B */
#define SSM_CAROEB1_CLEAR_gc (0x00) /* CARrier check Ok Enabled for path B - CLEAR */
#define SSM_CAROEB1_SET_gc   (0x01) /* CARrier check Ok Enabled for path B - SET */


/* Wake Check OK from path B Ok Enable */
#define SSM_WCOBOE2_CLEAR_gc (0x00) /* Wake Check OK from path B Ok Enable - CLEAR */
#define SSM_WCOBOE2_SET_gc   (0x80) /* Wake Check OK from path B Ok Enable - SET */


/* RSSI Range OK Enable for path A */
#define SSM_RROEA2_CLEAR_gc (0x00) /* RSSI Range OK Enable for path A - CLEAR */
#define SSM_RROEA2_SET_gc   (0x40) /* RSSI Range OK Enable for path A - SET */


/* Start of Frame IDentifier match Enabled for path A */
#define SSM_SFIDEA2_CLEAR_gc (0x00) /* Start of Frame IDentifier match Enabled for path A - CLEAR */
#define SSM_SFIDEA2_SET_gc   (0x20) /* Start of Frame IDentifier match Enabled for path A - SET */


/* Wake Up Pattern match Enabled for path A */
#define SSM_WUPEA2_CLEAR_gc (0x00) /* Wake Up Pattern match Enabled for path A - CLEAR */
#define SSM_WUPEA2_SET_gc   (0x10) /* Wake Up Pattern match Enabled for path A - SET */


/* Manchester Coding Ok Enabled for path A */
#define SSM_MANOEA2_CLEAR_gc (0x00) /* Manchester Coding Ok Enabled for path A - CLEAR */
#define SSM_MANOEA2_SET_gc   (0x08) /* Manchester Coding Ok Enabled for path A - SET */


/* Symbol Timing Ok Enabled for path A */
#define SSM_SYTOEA2_CLEAR_gc (0x00) /* Symbol Timing Ok Enabled for path A - CLEAR */
#define SSM_SYTOEA2_SET_gc   (0x04) /* Symbol Timing Ok Enabled for path A - SET */


/* AMPlitude Ok Enabled for path A */
#define SSM_AMPOEA2_CLEAR_gc (0x00) /* AMPlitude Ok Enabled for path A - CLEAR */
#define SSM_AMPOEA2_SET_gc   (0x02) /* AMPlitude Ok Enabled for path A - SET */


/* CARrier check Ok Enabled for path A */
#define SSM_CAROEA2_CLEAR_gc (0x00) /* CARrier check Ok Enabled for path A - CLEAR */
#define SSM_CAROEA2_SET_gc   (0x01) /* CARrier check Ok Enabled for path A - SET */


/* Wake Check Ok on path B Ok */
#define SSM_WCOAOE2_CLEAR_gc (0x00) /* Wake Check Ok on path B Ok - CLEAR */
#define SSM_WCOAOE2_SET_gc   (0x80) /* Wake Check Ok on path B Ok - SET */


/* RSSI Range Ok on Path A */
#define SSM_RROEB2_CLEAR_gc (0x00) /* RSSI Range Ok on Path A - CLEAR */
#define SSM_RROEB2_SET_gc   (0x40) /* RSSI Range Ok on Path A - SET */


/* Start of Frame IDentifier match Enabled for path B */
#define SSM_SFIDEB2_CLEAR_gc (0x00) /* Start of Frame IDentifier match Enabled for path B - CLEAR */
#define SSM_SFIDEB2_SET_gc   (0x20) /* Start of Frame IDentifier match Enabled for path B - SET */


/* Wake Up Pattern match Enabled for path B */
#define SSM_WUPEB2_CLEAR_gc (0x00) /* Wake Up Pattern match Enabled for path B - CLEAR */
#define SSM_WUPEB2_SET_gc   (0x10) /* Wake Up Pattern match Enabled for path B - SET */


/* Manchester Coding Ok Enabled for path B */
#define SSM_MANOEB2_CLEAR_gc (0x00) /* Manchester Coding Ok Enabled for path B - CLEAR */
#define SSM_MANOEB2_SET_gc   (0x08) /* Manchester Coding Ok Enabled for path B - SET */


/* Symbol Timing Ok Enabled for path B */
#define SSM_SYTOEB2_CLEAR_gc (0x00) /* Symbol Timing Ok Enabled for path B - CLEAR */
#define SSM_SYTOEB2_SET_gc   (0x04) /* Symbol Timing Ok Enabled for path B - SET */


/* AMPlitude Ok Enabled for path B */
#define SSM_AMPOEB2_CLEAR_gc (0x00) /* AMPlitude Ok Enabled for path B - CLEAR */
#define SSM_AMPOEB2_SET_gc   (0x02) /* AMPlitude Ok Enabled for path B - SET */


/* CARrier check Ok Enabled for path B */
#define SSM_CAROEB2_CLEAR_gc (0x00) /* CARrier check Ok Enabled for path B - CLEAR */
#define SSM_CAROEB2_SET_gc   (0x01) /* CARrier check Ok Enabled for path B - SET */


/* Sequencer State Machine Enable Transparent Path B */
#define SSM_SETRPB_CLEAR_gc (0x00) /* Sequencer State Machine Enable Transparent Path B - CLEAR */
#define SSM_SETRPB_SET_gc   (0x80) /* Sequencer State Machine Enable Transparent Path B - SET */


/* Sequencer State Machine Enable Transparent Path A */
#define SSM_SETRPA_CLEAR_gc (0x00) /* Sequencer State Machine Enable Transparent Path A - CLEAR */
#define SSM_SETRPA_SET_gc   (0x40) /* Sequencer State Machine Enable Transparent Path A - SET */


/* Sequencer State Machine Tx Ask-Shaping Enable */
#define SSM_SSMTAE_CLEAR_gc (0x00) /* Sequencer State Machine Tx Ask-Shaping Enable - CLEAR */
#define SSM_SSMTAE_SET_gc   (0x20) /* Sequencer State Machine Tx Ask-Shaping Enable - SET */


/* Sequencer State Machine PV Enable */
#define SSM_SSMPVE_CLEAR_gc (0x00) /* Sequencer State Machine PV Enable - CLEAR */
#define SSM_SSMPVE_SET_gc   (0x10) /* Sequencer State Machine PV Enable - SET */


/* Sequencer State Machine Tx Preemphasis Enable */
#define SSM_SSMTPE_CLEAR_gc (0x00) /* Sequencer State Machine Tx Preemphasis Enable - CLEAR */
#define SSM_SSMTPE_SET_gc   (0x08) /* Sequencer State Machine Tx Preemphasis Enable - SET */


/* Sequencer State Machine Tx Gauss Enable */
#define SSM_SSMTGE_CLEAR_gc (0x00) /* Sequencer State Machine Tx Gauss Enable - CLEAR */
#define SSM_SSMTGE_SET_gc   (0x04) /* Sequencer State Machine Tx Gauss Enable - SET */


/* Sequencer State Machine Temperature Measurement */
#define SSM_SSMTM_CLEAR_gc (0x00) /* Sequencer State Machine Temperature Measurement - CLEAR */
#define SSM_SSMTM_SET_gc   (0x02) /* Sequencer State Machine Temperature Measurement - SET */


/* Sequencer State Machine Tx */
#define SSM_SSMTX_CLEAR_gc (0x00) /* Sequencer State Machine Tx - CLEAR */
#define SSM_SSMTX_SET_gc   (0x01) /* Sequencer State Machine Tx - SET */


/* Sequencer State Machine PLL Lock Delay Time */
#define SSM_SSMPLDT_CLEAR_gc (0x00) /* Sequencer State Machine PLL Lock Delay Time - CLEAR */
#define SSM_SSMPLDT_SET_gc   (0x20) /* Sequencer State Machine PLL Lock Delay Time - SET */


/* Sequencer State Machine Half Antennadamping Delay Time */
#define SSM_SSMHADT_CLEAR_gc (0x00) /* Sequencer State Machine Half Antennadamping Delay Time - CLEAR */
#define SSM_SSMHADT_SET_gc   (0x10) /* Sequencer State Machine Half Antennadamping Delay Time - SET */


/* Sequencer State Machine Double Filter Delay Time */
#define SSM_SSMDFDT_CLEAR_gc (0x00) /* Sequencer State Machine Double Filter Delay Time - CLEAR */
#define SSM_SSMDFDT_SET_gc   (0x08) /* Sequencer State Machine Double Filter Delay Time - SET */


/* Sequencer State Machine Filter Delay */
#define SSM_SSMFBR_SSMFID_gc(x) (x & 0x07)

/* Sequencer State Machine ID Scan Fail */
#define SSM_SSMIDSF_CLEAR_gc (0x00) /* Sequencer State Machine ID Scan Fail - CLEAR */
#define SSM_SSMIDSF_SET_gc   (0x02) /* Sequencer State Machine ID Scan Fail - SET */


/* Sequencer State Machine ID Scan OK */
#define SSM_SSMIDSO_CLEAR_gc (0x00) /* Sequencer State Machine ID Scan OK - CLEAR */
#define SSM_SSMIDSO_SET_gc   (0x01) /* Sequencer State Machine ID Scan OK - SET */


/* Sequencer State Machine Interrupt Flag */
#define SSM_SSMIF_CLEAR_gc (0x00) /* Sequencer State Machine Interrupt Flag - CLEAR */
#define SSM_SSMIF_SET_gc   (0x01) /* Sequencer State Machine Interrupt Flag - SET */


/* Sequencer State Machine Interrupt Mask */
#define SSM_SSMIM_CLEAR_gc (0x00) /* Sequencer State Machine Interrupt Mask - CLEAR */
#define SSM_SSMIM_SET_gc   (0x01) /* Sequencer State Machine Interrupt Mask - SET */


/* Sequencer State Machine Transparent Mode Output Enable */
#define SSM_SSMTMOE_CLEAR_gc (0x00) /* Sequencer State Machine Transparent Mode Output Enable - CLEAR */
#define SSM_SSMTMOE_SET_gc   (0x80) /* Sequencer State Machine Transparent Mode Output Enable - SET */


/* Sequencer State Machine ID Scan Enable */
#define SSM_SSMIDSE_CLEAR_gc (0x00) /* Sequencer State Machine ID Scan Enable - CLEAR */
#define SSM_SSMIDSE_SET_gc   (0x40) /* Sequencer State Machine ID Scan Enable - SET */


/* Sequencer State Machine IF Amplifier Enable */
#define SSM_SSMIFA_CLEAR_gc (0x00) /* Sequencer State Machine IF Amplifier Enable - CLEAR */
#define SSM_SSMIFA_SET_gc   (0x20) /* Sequencer State Machine IF Amplifier Enable - SET */


/* Sequencer State Machine Path Valid After SOT */
#define SSM_SSMPVS_CLEAR_gc (0x00) /* Sequencer State Machine Path Valid After SOT - CLEAR */
#define SSM_SSMPVS_SET_gc   (0x10) /* Sequencer State Machine Path Valid After SOT - SET */


/* Sequencer State Machine Antenna Damping Disable Path B */
#define SSM_SSMADB_CLEAR_gc (0x00) /* Sequencer State Machine Antenna Damping Disable Path B - CLEAR */
#define SSM_SSMADB_SET_gc   (0x08) /* Sequencer State Machine Antenna Damping Disable Path B - SET */


/* Sequencer State Machine Antenna Damping Disable Path A */
#define SSM_SSMADA_CLEAR_gc (0x00) /* Sequencer State Machine Antenna Damping Disable Path A - CLEAR */
#define SSM_SSMADA_SET_gc   (0x04) /* Sequencer State Machine Antenna Damping Disable Path A - SET */


/* Sequencer State Machine Path B */
#define SSM_SSMPB_CLEAR_gc (0x00) /* Sequencer State Machine Path B - CLEAR */
#define SSM_SSMPB_SET_gc   (0x02) /* Sequencer State Machine Path B - SET */


/* Sequencer State Machine Path A */
#define SSM_SSMPA_CLEAR_gc (0x00) /* Sequencer State Machine Path A - CLEAR */
#define SSM_SSMPA_SET_gc   (0x01) /* Sequencer State Machine Path A - SET */


/* Sequencer State Machine Stop */
#define SSM_SSMST_CLEAR_gc (0x00) /* Sequencer State Machine Stop - CLEAR */
#define SSM_SSMST_SET_gc   (0x02) /* Sequencer State Machine Stop - SET */


/* Sequencer State Machine Run */
#define SSM_SSMR_CLEAR_gc (0x00) /* Sequencer State Machine Run - CLEAR */
#define SSM_SSMR_SET_gc   (0x01) /* Sequencer State Machine Run - SET */


/* Sequencer State Machine Error */
#define SSM_SSMERR_CLEAR_gc (0x00) /* Sequencer State Machine Error - CLEAR */
#define SSM_SSMERR_SET_gc   (0x80) /* Sequencer State Machine Error - SET */


/* Sequencer State Machine Error State Machine */
#define SSM_SSMSR_SSMESM_gc(x) (x & 0x0F)

/*
--------------------------------------------------------------------------------
SUP - 
--------------------------------------------------------------------------------
*/


/* DVCC Reset Threshold Calibration bit 6 */
#define SUP_DCAL6_CLEAR_gc (0x00) /* DVCC Reset Threshold Calibration bit 6 - CLEAR */
#define SUP_DCAL6_SET_gc   (0x40) /* DVCC Reset Threshold Calibration bit 6 - SET */


/* DVCC Reset Threshold Calibration bit 5 */
#define SUP_DCAL5_CLEAR_gc (0x00) /* DVCC Reset Threshold Calibration bit 5 - CLEAR */
#define SUP_DCAL5_SET_gc   (0x20) /* DVCC Reset Threshold Calibration bit 5 - SET */


/* DVCC Reset Threshold Calibration bit 4 */
#define SUP_DCAL4_CLEAR_gc (0x00) /* DVCC Reset Threshold Calibration bit 4 - CLEAR */
#define SUP_DCAL4_SET_gc   (0x10) /* DVCC Reset Threshold Calibration bit 4 - SET */


/* AVCC Reset Threshold Calibration bit 7 */
#define SUP_ACAL7_CLEAR_gc (0x00) /* AVCC Reset Threshold Calibration bit 7 - CLEAR */
#define SUP_ACAL7_SET_gc   (0x08) /* AVCC Reset Threshold Calibration bit 7 - SET */


/* AVCC Reset Threshold Calibration bit 6 */
#define SUP_ACAL6_CLEAR_gc (0x00) /* AVCC Reset Threshold Calibration bit 6 - CLEAR */
#define SUP_ACAL6_SET_gc   (0x04) /* AVCC Reset Threshold Calibration bit 6 - SET */


/* AVCC Reset Threshold Calibration bit 5 */
#define SUP_ACAL5_CLEAR_gc (0x00) /* AVCC Reset Threshold Calibration bit 5 - CLEAR */
#define SUP_ACAL5_SET_gc   (0x02) /* AVCC Reset Threshold Calibration bit 5 - SET */


/* AVCC Reset Threshold Calibration bit 4 */
#define SUP_ACAL4_CLEAR_gc (0x00) /* AVCC Reset Threshold Calibration bit 4 - CLEAR */
#define SUP_ACAL4_SET_gc   (0x01) /* AVCC Reset Threshold Calibration bit 4 - SET */


/* DVCC Regulator Output Voltage Calibration bit 3 */
#define SUP_DCAL3_CLEAR_gc (0x00) /* DVCC Regulator Output Voltage Calibration bit 3 - CLEAR */
#define SUP_DCAL3_SET_gc   (0x80) /* DVCC Regulator Output Voltage Calibration bit 3 - SET */


/* DVCC Regulator Output Voltage Calibration bit 2 */
#define SUP_DCAL2_CLEAR_gc (0x00) /* DVCC Regulator Output Voltage Calibration bit 2 - CLEAR */
#define SUP_DCAL2_SET_gc   (0x40) /* DVCC Regulator Output Voltage Calibration bit 2 - SET */


/* DVCC Regulator Output Voltage Calibration bit 1 */
#define SUP_DCAL1_CLEAR_gc (0x00) /* DVCC Regulator Output Voltage Calibration bit 1 - CLEAR */
#define SUP_DCAL1_SET_gc   (0x20) /* DVCC Regulator Output Voltage Calibration bit 1 - SET */


/* DVCC Regulator Output Voltage Calibration bit 0 */
#define SUP_DCAL0_CLEAR_gc (0x00) /* DVCC Regulator Output Voltage Calibration bit 0 - CLEAR */
#define SUP_DCAL0_SET_gc   (0x10) /* DVCC Regulator Output Voltage Calibration bit 0 - SET */


/* AVCC Regulator Output Voltage Calibration bit 3 */
#define SUP_ACAL3_CLEAR_gc (0x00) /* AVCC Regulator Output Voltage Calibration bit 3 - CLEAR */
#define SUP_ACAL3_SET_gc   (0x08) /* AVCC Regulator Output Voltage Calibration bit 3 - SET */


/* AVCC Regulator Output Voltage Calibration bit 2 */
#define SUP_ACAL2_CLEAR_gc (0x00) /* AVCC Regulator Output Voltage Calibration bit 2 - CLEAR */
#define SUP_ACAL2_SET_gc   (0x04) /* AVCC Regulator Output Voltage Calibration bit 2 - SET */


/* AVCC Regulator Output Voltage Calibration bit 1 */
#define SUP_ACAL1_CLEAR_gc (0x00) /* AVCC Regulator Output Voltage Calibration bit 1 - CLEAR */
#define SUP_ACAL1_SET_gc   (0x02) /* AVCC Regulator Output Voltage Calibration bit 1 - SET */


/* AVCC Regulator Output Voltage Calibration bit 0 */
#define SUP_ACAL0_CLEAR_gc (0x00) /* AVCC Regulator Output Voltage Calibration bit 0 - CLEAR */
#define SUP_ACAL0_SET_gc   (0x01) /* AVCC Regulator Output Voltage Calibration bit 0 - SET */


/* AVCC Double Internal Current */
#define SUP_AVDIC_CLEAR_gc (0x00) /* AVCC Double Internal Current - CLEAR */
#define SUP_AVDIC_SET_gc   (0x40) /* AVCC Double Internal Current - SET */


/* AVCC Enable */
#define SUP_AVEN_CLEAR_gc (0x00) /* AVCC Enable - CLEAR */
#define SUP_AVEN_SET_gc   (0x20) /* AVCC Enable - SET */


/* DVCC Disable */
#define SUP_DVDIS_CLEAR_gc (0x00) /* DVCC Disable - CLEAR */
#define SUP_DVDIS_SET_gc   (0x10) /* DVCC Disable - SET */


/* Power amplifier Voltage supply Enable */
#define SUP_PVEN_CLEAR_gc (0x00) /* Power amplifier Voltage supply Enable - CLEAR */
#define SUP_PVEN_SET_gc   (0x04) /* Power amplifier Voltage supply Enable - SET */


/* AVCC Low Interrupt Mask Bit */
#define SUP_AVCCLM_CLEAR_gc (0x00) /* AVCC Low Interrupt Mask Bit - CLEAR */
#define SUP_AVCCLM_SET_gc   (0x02) /* AVCC Low Interrupt Mask Bit - SET */


/* AVCC Reset Interrupt Mask Bit */
#define SUP_AVCCRM_CLEAR_gc (0x00) /* AVCC Reset Interrupt Mask Bit - CLEAR */
#define SUP_AVCCRM_SET_gc   (0x01) /* AVCC Reset Interrupt Mask Bit - SET */


/* AVCC low interrupt flag */
#define SUP_AVCCLF_CLEAR_gc (0x00) /* AVCC low interrupt flag - CLEAR */
#define SUP_AVCCLF_SET_gc   (0x02) /* AVCC low interrupt flag - SET */


/* AVCC reset interrupt flag */
#define SUP_AVCCRF_CLEAR_gc (0x00) /* AVCC reset interrupt flag - CLEAR */
#define SUP_AVCCRF_SET_gc   (0x01) /* AVCC reset interrupt flag - SET */


/* Voltage Monitor Flag */
#define SUP_VMF_CLEAR_gc (0x00) /* Voltage Monitor Flag - CLEAR */
#define SUP_VMF_SET_gc   (0x20) /* Voltage Monitor Flag - SET */


/* Voltage Monitor Interrupt Mask */
#define SUP_VMIM_CLEAR_gc (0x00) /* Voltage Monitor Interrupt Mask - CLEAR */
#define SUP_VMIM_SET_gc   (0x10) /* Voltage Monitor Interrupt Mask - SET */


/* Voltage Monitor Level Select */
#define SUP_VMCSR_VMLS_gc(x) (x & 0x0F)

/*
--------------------------------------------------------------------------------
SYMCH - 
--------------------------------------------------------------------------------
*/


/* Symbol timing limit for path A */
#define SYMCH_SYCA_SYTLA_gc(x) ((x<<4) & 0xF0)

/* Symbol Check check size for data path A */
#define SYMCH_SYCA_SYCSA_gc(x) (x & 0x0F)

/* Symbol timing limit for path B */
#define SYMCH_SYCB_SYTLB_gc(x) ((x<<4) & 0xF0)

/* Symbol Check check size for data path B */
#define SYMCH_SYCB_SYCSB_gc(x) (x & 0x0F)

/*
--------------------------------------------------------------------------------
TEMPER - 
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
TIMER0_WDT - 
--------------------------------------------------------------------------------
*/


/* Timer 0 Prescaler Reset */
#define TIMER0_WDT_T0PR_CLEAR_gc (0x00) /* Timer 0 Prescaler Reset - CLEAR */
#define TIMER0_WDT_T0PR_SET_gc   (0x10) /* Timer 0 Prescaler Reset - SET */


/* Timer 0 Interrupt Enable */
#define TIMER0_WDT_T0IE_CLEAR_gc (0x00) /* Timer 0 Interrupt Enable - CLEAR */
#define TIMER0_WDT_T0IE_SET_gc   (0x08) /* Timer 0 Interrupt Enable - SET */


/* Timer 0 Prescaler Select */
#define TIMER0_WDT_T0CR_T0PS_gc(x) (x & 0x07)

/* Timer0 Flag */
#define TIMER0_WDT_T0F_CLEAR_gc (0x00) /* Timer0 Flag - CLEAR */
#define TIMER0_WDT_T0F_SET_gc   (0x01) /* Timer0 Flag - SET */


/* Watchdog Change Enable */
#define TIMER0_WDT_WDCE_CLEAR_gc (0x00) /* Watchdog Change Enable - CLEAR */
#define TIMER0_WDT_WDCE_SET_gc   (0x10) /* Watchdog Change Enable - SET */


/* Watchdog System Reset Enable */
#define TIMER0_WDT_WDE_CLEAR_gc (0x00) /* Watchdog System Reset Enable - CLEAR */
#define TIMER0_WDT_WDE_SET_gc   (0x08) /* Watchdog System Reset Enable - SET */


/* Watchdog Prescaler Select */
#define TIMER0_WDT_WDTCR_WDPS_gc(x) (x & 0x07)

/*
--------------------------------------------------------------------------------
TIMER1 - 
--------------------------------------------------------------------------------
*/


/* Timer1 Enable */
#define TIMER1_T1ENA_CLEAR_gc (0x00) /* Timer1 Enable - CLEAR */
#define TIMER1_T1ENA_SET_gc   (0x80) /* Timer1 Enable - SET */


/* Timer1 Toggle with Start */
#define TIMER1_T1TOS_CLEAR_gc (0x00) /* Timer1 Toggle with Start - CLEAR */
#define TIMER1_T1TOS_SET_gc   (0x40) /* Timer1 Toggle with Start - SET */


/* Timer1 Reset */
#define TIMER1_T1RES_CLEAR_gc (0x00) /* Timer1 Reset - CLEAR */
#define TIMER1_T1RES_SET_gc   (0x20) /* Timer1 Reset - SET */


/* Timer1 Toggle Output Preset */
#define TIMER1_T1TOP_CLEAR_gc (0x00) /* Timer1 Toggle Output Preset - CLEAR */
#define TIMER1_T1TOP_SET_gc   (0x10) /* Timer1 Toggle Output Preset - SET */


/* Timer1 Compare Reset Mask */
#define TIMER1_T1CRM_CLEAR_gc (0x00) /* Timer1 Compare Reset Mask - CLEAR */
#define TIMER1_T1CRM_SET_gc   (0x04) /* Timer1 Compare Reset Mask - SET */


/* Timer1 Compare Toggle Mask */
#define TIMER1_T1CTM_CLEAR_gc (0x00) /* Timer1 Compare Toggle Mask - CLEAR */
#define TIMER1_T1CTM_SET_gc   (0x02) /* Timer1 Compare Toggle Mask - SET */


/* Timer1 Overflow Toggle Mask */
#define TIMER1_T1OTM_CLEAR_gc (0x00) /* Timer1 Overflow Toggle Mask - CLEAR */
#define TIMER1_T1OTM_SET_gc   (0x01) /* Timer1 Overflow Toggle Mask - SET */


/* Timer1 Compare Flag */
#define TIMER1_T1COF_CLEAR_gc (0x00) /* Timer1 Compare Flag - CLEAR */
#define TIMER1_T1COF_SET_gc   (0x02) /* Timer1 Compare Flag - SET */


/* Timer1 Overflow Flag */
#define TIMER1_T1OFF_CLEAR_gc (0x00) /* Timer1 Overflow Flag - CLEAR */
#define TIMER1_T1OFF_SET_gc   (0x01) /* Timer1 Overflow Flag - SET */


/* Timer1 Compare Interrupt Mask */
#define TIMER1_T1CIM_CLEAR_gc (0x00) /* Timer1 Compare Interrupt Mask - CLEAR */
#define TIMER1_T1CIM_SET_gc   (0x02) /* Timer1 Compare Interrupt Mask - SET */


/* Timer1 Overflow Interrupt Mask */
#define TIMER1_T1OIM_CLEAR_gc (0x00) /* Timer1 Overflow Interrupt Mask - CLEAR */
#define TIMER1_T1OIM_SET_gc   (0x01) /* Timer1 Overflow Interrupt Mask - SET */


/* Timer1 Duty Cycle */
#define TIMER1_T1MR_T1DC_gc(x) ((x<<6) & 0xC0)

/* Timer1 Prescaler Select */
#define TIMER1_T1MR_T1PS_gc(x) ((x<<2) & 0x3C)

/* Timer1 Clock Select */
#define TIMER1_T1CS_VAL_0x00_gc (0x00) /* clk_src */
#define TIMER1_T1CS_VAL_0x01_gc (0x01) /* clk_frc */
#define TIMER1_T1CS_VAL_0x02_gc (0x02) /* clk_T */
#define TIMER1_T1CS_VAL_0x03_gc (0x03) /* clk_xto4 */


/*
--------------------------------------------------------------------------------
TIMER2 - 
--------------------------------------------------------------------------------
*/


/* Timer2 Enable */
#define TIMER2_T2ENA_CLEAR_gc (0x00) /* Timer2 Enable - CLEAR */
#define TIMER2_T2ENA_SET_gc   (0x80) /* Timer2 Enable - SET */


/* Timer2 Toggle with Start */
#define TIMER2_T2TOS_CLEAR_gc (0x00) /* Timer2 Toggle with Start - CLEAR */
#define TIMER2_T2TOS_SET_gc   (0x40) /* Timer2 Toggle with Start - SET */


/* Timer2 Reset */
#define TIMER2_T2RES_CLEAR_gc (0x00) /* Timer2 Reset - CLEAR */
#define TIMER2_T2RES_SET_gc   (0x20) /* Timer2 Reset - SET */


/* Timer2 Toggle Output Preset */
#define TIMER2_T2TOP_CLEAR_gc (0x00) /* Timer2 Toggle Output Preset - CLEAR */
#define TIMER2_T2TOP_SET_gc   (0x10) /* Timer2 Toggle Output Preset - SET */


/* Timer2 Compare Reset Mask */
#define TIMER2_T2CRM_CLEAR_gc (0x00) /* Timer2 Compare Reset Mask - CLEAR */
#define TIMER2_T2CRM_SET_gc   (0x04) /* Timer2 Compare Reset Mask - SET */


/* Timer2 Compare Toggle Mask */
#define TIMER2_T2CTM_CLEAR_gc (0x00) /* Timer2 Compare Toggle Mask - CLEAR */
#define TIMER2_T2CTM_SET_gc   (0x02) /* Timer2 Compare Toggle Mask - SET */


/* Timer2 Overflow Toggle Mask */
#define TIMER2_T2OTM_CLEAR_gc (0x00) /* Timer2 Overflow Toggle Mask - CLEAR */
#define TIMER2_T2OTM_SET_gc   (0x01) /* Timer2 Overflow Toggle Mask - SET */


/* Timer2 Compare Flag */
#define TIMER2_T2COF_CLEAR_gc (0x00) /* Timer2 Compare Flag - CLEAR */
#define TIMER2_T2COF_SET_gc   (0x02) /* Timer2 Compare Flag - SET */


/* Timer2 Overflow Flag */
#define TIMER2_T2OFF_CLEAR_gc (0x00) /* Timer2 Overflow Flag - CLEAR */
#define TIMER2_T2OFF_SET_gc   (0x01) /* Timer2 Overflow Flag - SET */


/* Timer2 Compare Interrupt Mask */
#define TIMER2_T2CIM_CLEAR_gc (0x00) /* Timer2 Compare Interrupt Mask - CLEAR */
#define TIMER2_T2CIM_SET_gc   (0x02) /* Timer2 Compare Interrupt Mask - SET */


/* Timer2 Overflow Interrupt Mask */
#define TIMER2_T2OIM_CLEAR_gc (0x00) /* Timer2 Overflow Interrupt Mask - CLEAR */
#define TIMER2_T2OIM_SET_gc   (0x01) /* Timer2 Overflow Interrupt Mask - SET */


/* Timer2 Duty Cycle */
#define TIMER2_T2MR_T2DC_gc(x) ((x<<6) & 0xC0)

/* Timer2 Prescaler Select */
#define TIMER2_T2MR_T2PS_gc(x) ((x<<2) & 0x3C)

/* Timer2 Clock Select */
#define TIMER2_T2CS_VAL_0x00_gc (0x00) /* clk_src */
#define TIMER2_T2CS_VAL_0x01_gc (0x01) /* clk_vdiv */
#define TIMER2_T2CS_VAL_0x02_gc (0x02) /* clk_T */
#define TIMER2_T2CS_VAL_0x03_gc (0x03) /* clk_xto4 */


/*
--------------------------------------------------------------------------------
TIMER3 - 
--------------------------------------------------------------------------------
*/


/* Timer3 Enable */
#define TIMER3_T3ENA_CLEAR_gc (0x00) /* Timer3 Enable - CLEAR */
#define TIMER3_T3ENA_SET_gc   (0x80) /* Timer3 Enable - SET */


/* Timer3 Toggle with Start */
#define TIMER3_T3TOS_CLEAR_gc (0x00) /* Timer3 Toggle with Start - CLEAR */
#define TIMER3_T3TOS_SET_gc   (0x40) /* Timer3 Toggle with Start - SET */


/* Timer3 Reset */
#define TIMER3_T3RES_CLEAR_gc (0x00) /* Timer3 Reset - CLEAR */
#define TIMER3_T3RES_SET_gc   (0x20) /* Timer3 Reset - SET */


/* Timer3 Toggle Output Preset */
#define TIMER3_T3TOP_CLEAR_gc (0x00) /* Timer3 Toggle Output Preset - CLEAR */
#define TIMER3_T3TOP_SET_gc   (0x10) /* Timer3 Toggle Output Preset - SET */


/* Timer3 CaPture reset Mask */
#define TIMER3_T3CPRM_CLEAR_gc (0x00) /* Timer3 CaPture reset Mask - CLEAR */
#define TIMER3_T3CPRM_SET_gc   (0x08) /* Timer3 CaPture reset Mask - SET */


/* Timer3 Compare Reset Mask */
#define TIMER3_T3CRM_CLEAR_gc (0x00) /* Timer3 Compare Reset Mask - CLEAR */
#define TIMER3_T3CRM_SET_gc   (0x04) /* Timer3 Compare Reset Mask - SET */


/* Timer3 Compare Toggle Mask */
#define TIMER3_T3CTM_CLEAR_gc (0x00) /* Timer3 Compare Toggle Mask - CLEAR */
#define TIMER3_T3CTM_SET_gc   (0x02) /* Timer3 Compare Toggle Mask - SET */


/* Timer3 Overflow Toggle Mask */
#define TIMER3_T3OTM_CLEAR_gc (0x00) /* Timer3 Overflow Toggle Mask - CLEAR */
#define TIMER3_T3OTM_SET_gc   (0x01) /* Timer3 Overflow Toggle Mask - SET */


/* Timer3 Input Capture Flag */
#define TIMER3_T3ICF_CLEAR_gc (0x00) /* Timer3 Input Capture Flag - CLEAR */
#define TIMER3_T3ICF_SET_gc   (0x04) /* Timer3 Input Capture Flag - SET */


/* Timer3 Compare Flag */
#define TIMER3_T3COF_CLEAR_gc (0x00) /* Timer3 Compare Flag - CLEAR */
#define TIMER3_T3COF_SET_gc   (0x02) /* Timer3 Compare Flag - SET */


/* Timer3 OverFlow Flag */
#define TIMER3_T3OFF_CLEAR_gc (0x00) /* Timer3 OverFlow Flag - CLEAR */
#define TIMER3_T3OFF_SET_gc   (0x01) /* Timer3 OverFlow Flag - SET */


/* Timer3 Capture Interrupt Mask */
#define TIMER3_T3CPIM_CLEAR_gc (0x00) /* Timer3 Capture Interrupt Mask - CLEAR */
#define TIMER3_T3CPIM_SET_gc   (0x04) /* Timer3 Capture Interrupt Mask - SET */


/* Timer3 Compare Interrupt Mask */
#define TIMER3_T3CIM_CLEAR_gc (0x00) /* Timer3 Compare Interrupt Mask - CLEAR */
#define TIMER3_T3CIM_SET_gc   (0x02) /* Timer3 Compare Interrupt Mask - SET */


/* Timer3 Overflow Interrupt Mask */
#define TIMER3_T3OIM_CLEAR_gc (0x00) /* Timer3 Overflow Interrupt Mask - CLEAR */
#define TIMER3_T3OIM_SET_gc   (0x01) /* Timer3 Overflow Interrupt Mask - SET */


/* Timer3 Prescaler Select */
#define TIMER3_T3MRA_T3PS_gc(x) ((x<<2) & 0x1C)

/* Timer 3 Clock Select */
#define TIMER3_T3CS_VAL_0x00_gc (0x00) /* clk_frc */
#define TIMER3_T3CS_VAL_0x01_gc (0x01) /* clk_T */
#define TIMER3_T3CS_VAL_0x02_gc (0x02) /* clk_xto4 */
#define TIMER3_T3CS_VAL_0x03_gc (0x03) /* clk_xto2 */


/* Timer3 Input Capture Select */
#define TIMER3_T3MRB_T3ICS_gc(x) ((x<<5) & 0xE0)

/* Timer3 Capture Edge select */
#define TIMER3_T3CE_VAL_0x00_gc (0x00<<3) /* disable */
#define TIMER3_T3CE_VAL_0x01_gc (0x01<<3) /* rising edge */
#define TIMER3_T3CE_VAL_0x02_gc (0x02<<3) /* falling edge */
#define TIMER3_T3CE_VAL_0x03_gc (0x03<<3) /* both edges */


/* Timer3 input Capture Noise Canceller */
#define TIMER3_T3CNC_CLEAR_gc (0x00) /* Timer3 input Capture Noise Canceller - CLEAR */
#define TIMER3_T3CNC_SET_gc   (0x04) /* Timer3 input Capture Noise Canceller - SET */


/* Timer3 Software Capture Enable */
#define TIMER3_T3SCE_CLEAR_gc (0x00) /* Timer3 Software Capture Enable - CLEAR */
#define TIMER3_T3SCE_SET_gc   (0x02) /* Timer3 Software Capture Enable - SET */


/*
--------------------------------------------------------------------------------
TIMER4 - 
--------------------------------------------------------------------------------
*/


/* Timer4 Enable */
#define TIMER4_T4ENA_CLEAR_gc (0x00) /* Timer4 Enable - CLEAR */
#define TIMER4_T4ENA_SET_gc   (0x80) /* Timer4 Enable - SET */


/* Timer4 Toggle with Start */
#define TIMER4_T4TOS_CLEAR_gc (0x00) /* Timer4 Toggle with Start - CLEAR */
#define TIMER4_T4TOS_SET_gc   (0x40) /* Timer4 Toggle with Start - SET */


/* Timer4 Reset */
#define TIMER4_T4RES_CLEAR_gc (0x00) /* Timer4 Reset - CLEAR */
#define TIMER4_T4RES_SET_gc   (0x20) /* Timer4 Reset - SET */


/* Timer4 Toggle Output Preset */
#define TIMER4_T4TOP_CLEAR_gc (0x00) /* Timer4 Toggle Output Preset - CLEAR */
#define TIMER4_T4TOP_SET_gc   (0x10) /* Timer4 Toggle Output Preset - SET */


/* Timer4 CaPture reset Mask */
#define TIMER4_T4CPRM_CLEAR_gc (0x00) /* Timer4 CaPture reset Mask - CLEAR */
#define TIMER4_T4CPRM_SET_gc   (0x08) /* Timer4 CaPture reset Mask - SET */


/* Timer4 Compare Reset Mask */
#define TIMER4_T4CRM_CLEAR_gc (0x00) /* Timer4 Compare Reset Mask - CLEAR */
#define TIMER4_T4CRM_SET_gc   (0x04) /* Timer4 Compare Reset Mask - SET */


/* Timer4 Compare Toggle Mask */
#define TIMER4_T4CTM_CLEAR_gc (0x00) /* Timer4 Compare Toggle Mask - CLEAR */
#define TIMER4_T4CTM_SET_gc   (0x02) /* Timer4 Compare Toggle Mask - SET */


/* Timer4 Overflow Toggle Mask */
#define TIMER4_T4OTM_CLEAR_gc (0x00) /* Timer4 Overflow Toggle Mask - CLEAR */
#define TIMER4_T4OTM_SET_gc   (0x01) /* Timer4 Overflow Toggle Mask - SET */


/* Timer4 Input Capture Flag */
#define TIMER4_T4ICF_CLEAR_gc (0x00) /* Timer4 Input Capture Flag - CLEAR */
#define TIMER4_T4ICF_SET_gc   (0x04) /* Timer4 Input Capture Flag - SET */


/* Timer4 Compare Flag */
#define TIMER4_T4COF_CLEAR_gc (0x00) /* Timer4 Compare Flag - CLEAR */
#define TIMER4_T4COF_SET_gc   (0x02) /* Timer4 Compare Flag - SET */


/* Timer4 OverFlow Flag */
#define TIMER4_T4OFF_CLEAR_gc (0x00) /* Timer4 OverFlow Flag - CLEAR */
#define TIMER4_T4OFF_SET_gc   (0x01) /* Timer4 OverFlow Flag - SET */


/* Timer4 Capture Interrupt Mask */
#define TIMER4_T4CPIM_CLEAR_gc (0x00) /* Timer4 Capture Interrupt Mask - CLEAR */
#define TIMER4_T4CPIM_SET_gc   (0x04) /* Timer4 Capture Interrupt Mask - SET */


/* Timer4 Compare Interrupt Mask */
#define TIMER4_T4CIM_CLEAR_gc (0x00) /* Timer4 Compare Interrupt Mask - CLEAR */
#define TIMER4_T4CIM_SET_gc   (0x02) /* Timer4 Compare Interrupt Mask - SET */


/* Timer4 Overflow Interrupt Mask */
#define TIMER4_T4OIM_CLEAR_gc (0x00) /* Timer4 Overflow Interrupt Mask - CLEAR */
#define TIMER4_T4OIM_SET_gc   (0x01) /* Timer4 Overflow Interrupt Mask - SET */


/* Timer 4 Prescaler Select */
#define TIMER4_T4MRA_T4PS_gc(x) ((x<<2) & 0x1C)

/* Timer 4 Clock Select */
#define TIMER4_T4CS_VAL_0x00_gc (0x00) /* clk_src */
#define TIMER4_T4CS_VAL_0x01_gc (0x01) /* clk_T */
#define TIMER4_T4CS_VAL_0x02_gc (0x02) /* clk_xto6 */
#define TIMER4_T4CS_VAL_0x03_gc (0x03) /* clk_frc */


/* Timer4 Input Capture Select */
#define TIMER4_T4MRB_T4ICS_gc(x) ((x<<5) & 0xE0)

/* Timer4 Capture Edge select */
#define TIMER4_T4MRB_T4CE_gc(x) ((x<<3) & 0x18)

/* Timer4 input Capture Noise Canceller */
#define TIMER4_T4CNC_CLEAR_gc (0x00) /* Timer4 input Capture Noise Canceller - CLEAR */
#define TIMER4_T4CNC_SET_gc   (0x04) /* Timer4 input Capture Noise Canceller - SET */


/* Timer4 Software Capture Enable */
#define TIMER4_T4SCE_CLEAR_gc (0x00) /* Timer4 Software Capture Enable - CLEAR */
#define TIMER4_T4SCE_SET_gc   (0x02) /* Timer4 Software Capture Enable - SET */


/*
--------------------------------------------------------------------------------
TIMER5 - 
--------------------------------------------------------------------------------
*/


/* Timer/Counter Synchronization Mode */
#define TIMER5_TSM_CLEAR_gc (0x00) /* Timer/Counter Synchronization Mode - CLEAR */
#define TIMER5_TSM_SET_gc   (0x80) /* Timer/Counter Synchronization Mode - SET */


/* PreScaler Reset */
#define TIMER5_PSR10_CLEAR_gc (0x00) /* PreScaler Reset - CLEAR */
#define TIMER5_PSR10_SET_gc   (0x01) /* PreScaler Reset - SET */


/* Clear Timer5 on Compare Match */
#define TIMER5_T5CTC_CLEAR_gc (0x00) /* Clear Timer5 on Compare Match - CLEAR */
#define TIMER5_T5CTC_SET_gc   (0x08) /* Clear Timer5 on Compare Match - SET */


/* Timer5 Clock Select */
#define TIMER5_T5CS_VAL_0x00_gc (0x00) /* No Clock Source (Stopped) */
#define TIMER5_T5CS_VAL_0x01_gc (0x01) /* Running, No Prescaling */
#define TIMER5_T5CS_VAL_0x02_gc (0x02) /* Running, CLK/8 */
#define TIMER5_T5CS_VAL_0x03_gc (0x03) /* Running, CLK/32 */
#define TIMER5_T5CS_VAL_0x04_gc (0x04) /* Running, CLK/64 */
#define TIMER5_T5CS_VAL_0x05_gc (0x05) /* Running, CLK/128 */
#define TIMER5_T5CS_VAL_0x06_gc (0x06) /* Running, CLK/256 */
#define TIMER5_T5CS_VAL_0x07_gc (0x07) /* Running, CLK/1024 */


/* Timer5 Output Compare Output Match Flag */
#define TIMER5_T5COF_CLEAR_gc (0x00) /* Timer5 Output Compare Output Match Flag - CLEAR */
#define TIMER5_T5COF_SET_gc   (0x02) /* Timer5 Output Compare Output Match Flag - SET */


/* Timer5 Output Overflow Flag */
#define TIMER5_T5OFF_CLEAR_gc (0x00) /* Timer5 Output Overflow Flag - CLEAR */
#define TIMER5_T5OFF_SET_gc   (0x01) /* Timer5 Output Overflow Flag - SET */


/* Timer5 Output Compare Interrupt Mask */
#define TIMER5_T5CIM_CLEAR_gc (0x00) /* Timer5 Output Compare Interrupt Mask - CLEAR */
#define TIMER5_T5CIM_SET_gc   (0x02) /* Timer5 Output Compare Interrupt Mask - SET */


/* Timer5 Output Overflow Interrupt Mask */
#define TIMER5_T5OIM_CLEAR_gc (0x00) /* Timer5 Output Overflow Interrupt Mask - CLEAR */
#define TIMER5_T5OIM_SET_gc   (0x01) /* Timer5 Output Overflow Interrupt Mask - SET */

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


/* CHFLT -  (0x00) */
#define CHFLT_BASE       _SFR_MEM8 (0x00)  /* CHFLT Base Address */
#define CHFLT_CHCR       _SFR_MEM8 (0xA9)  /* Channel Filter Configuration Register */
#define CHFLT_CHDN       _SFR_MEM8 (0xAA)  /* Channel Filter Down Sampling Register */

/* CLK -  (0x00) */
#define CLK_BASE         _SFR_MEM8 (0x00)  /* CLK Base Address */
#define CLK_PRR0         _SFR_MEM8 (0x21)  /* Power Reduction Register 0 */
#define CLK_PRR1         _SFR_MEM8 (0x22)  /* Power Reduction Register 1 */
#define CLK_PRR2         _SFR_MEM8 (0x23)  /* Power Reduction Register 2 */
#define CLK_RDPR         _SFR_MEM8 (0x24)  /* Rx DSP power reduction register */
#define CLK_CLKOD        _SFR_MEM8 (0xC3)  /* Clock output divider settings Register */
#define CLK_CLKOCR       _SFR_MEM8 (0xC4)  /* Clock output control Register */
#define CLK_XFUSE        _SFR_MEM8 (0xC5)  
#define CLK_SRCCAL       _SFR_MEM8 (0xC6)  /* Slow RC oscillator calibration Register */
#define CLK_FRCCAL       _SFR_MEM8 (0xC7)  /* Fast RC oscillator calibration Register */
#define CLK_CMSR         _SFR_MEM8 (0xC8)  /* Clock management status Register */
#define CLK_CMOCR        _SFR_MEM8 (0xC9)  /* Clock management override control register */

/* CPU -  (0x00) */
#define CPU_BASE         _SFR_MEM8 (0x00)  /* CPU Base Address */
#define CPU_MCUCR        _SFR_MEM8 (0x2E)  /* MCU Control Register */
#define CPU_MCUSR        _SFR_MEM8 (0x4B)  /* MCU Status Register */
#define CPU_DWDR         _SFR_MEM8 (0x51)  /* debugWire communication Register */
#define CPU_SMCR         _SFR_MEM8 (0x58)  /* Sleep mode control Register */
#define CPU_CMCR         _SFR_MEM8 (0x59)  /* Clock Management Control Register */
#define CPU_CMIMR        _SFR_MEM8 (0x5A)  /* Clock Interrupt Mask Register */
#define CPU_CLPR         _SFR_MEM8 (0x5B)  /* Clock Prescaler Register */
#define CPU_SPMCSR       _SFR_MEM8 (0x5C)  /* Store Program Memory Control and Status Register */
#define CPU_SP           _SFR_MEM16(0x5D)  /* Stack Pointer  */
#define CPU_SPL          _SFR_MEM8 (0x5D)  /* Stack Pointer  LOW BYTE */
#define CPU_SPH          _SFR_MEM8 (0x5E)  /* Stack Pointer  HIGH BYTE */
#define CPU_SREG         _SFR_MEM8 (0x5F)  /* Status Register */

/* CRC -  (0x00) */
#define CRC_BASE         _SFR_MEM8 (0x00)  /* CRC Base Address */
#define CRC_CRCDIR       _SFR_MEM8 (0x49)  /* CRC Data Input Register */
#define CRC_CRCCR        _SFR_MEM8 (0x145) /* CRC Control Register */
#define CRC_CRCDOR       _SFR_MEM8 (0x146) /* CRC Data Output Register */

/* DEBOUNCE -  (0x00) */
#define DEBOUNCE_BASE    _SFR_MEM8 (0x00)  /* DEBOUNCE Base Address */
#define DEBOUNCE_DBCR    _SFR_MEM8 (0x152) /* DeBounce Control Register */
#define DEBOUNCE_DBTC    _SFR_MEM8 (0x153) /* Debounce Timer Compare Register */
#define DEBOUNCE_DBENB   _SFR_MEM8 (0x154) /* DeBounce Enable Port B */
#define DEBOUNCE_DBENC   _SFR_MEM8 (0x155) /* DeBounce Enable Port C */

/* DEBUG -  (0x00) */
#define DEBUG_BASE       _SFR_MEM8 (0x00)  /* DEBUG Base Address */
#define DEBUG_DBGSW      _SFR_MEM8 (0x156) /* Debugging Support Switch */

/* DEMOD -  (0x00) */
#define DEMOD_BASE       _SFR_MEM8 (0x00)  /* DEMOD Base Address */
#define DEMOD_RXFOB      _SFR_MEM8 (0x9F)  /* Received Frequency Offset vs Intermediate Frequency on path B */
#define DEMOD_RXFOA      _SFR_MEM8 (0xA0)  /* Received Frequency Offset vs Intermediate Frequency on path A */
#define DEMOD_DMMB       _SFR_MEM8 (0xA1)  /* Demodulator Mode for Path B */
#define DEMOD_DMMA       _SFR_MEM8 (0xA2)  /* Demodulator Mode for path A */
#define DEMOD_DMCDB      _SFR_MEM8 (0xA3)  /* Demodulator Carrier Detect for path B */
#define DEMOD_DMCDA      _SFR_MEM8 (0xA4)  /* Demodulator Carrier Detect for path A */
#define DEMOD_DMCRB      _SFR_MEM8 (0xA5)  /* Demodulator Control Register for path B */
#define DEMOD_DMCRA      _SFR_MEM8 (0xA6)  /* Demodulator Control Register for path A */
#define DEMOD_DMDRB      _SFR_MEM8 (0xA7)  /* Demodulator Data Rate on path B */
#define DEMOD_DMDRA      _SFR_MEM8 (0xA8)  /* Demodulator Data Rate on path A */

/* DFIFO -  (0x00) */
#define DFIFO_BASE       _SFR_MEM8 (0x00)  /* DFIFO Base Address */
#define DFIFO_DFS        _SFR_MEM8 (0xD2)  /* Data FIFO Status Register */
#define DFIFO_DFTL       _SFR_MEM16(0xD3)  /* Data FIFO Telegram Length */
#define DFIFO_DFTLL      _SFR_MEM8 (0xD3)  /* Data FIFO Telegram Length LOW BYTE */
#define DFIFO_DFTLH      _SFR_MEM8 (0xD4)  /* Data FIFO Telegram Length HIGH BYTE */
#define DFIFO_DFL        _SFR_MEM8 (0xD5)  /* Data FIFO Fill Level Register */
#define DFIFO_DFWP       _SFR_MEM8 (0xD6)  /* Data FIFO Write Pointer */
#define DFIFO_DFRP       _SFR_MEM8 (0xD7)  /* Data FIFO Read Pointer */
#define DFIFO_DFD        _SFR_MEM8 (0xD8)  /* Data FIFO Data Register */
#define DFIFO_DFI        _SFR_MEM8 (0xD9)  /* Data FIFO Interrupt Mask Register */
#define DFIFO_DFC        _SFR_MEM8 (0xDA)  /* Data FIFO Configuration Register */

/* EEPROM -  (0x00) */
#define EEPROM_BASE      _SFR_MEM8 (0x00)  /* EEPROM Base Address */
#define EEPROM_EECR      _SFR_MEM8 (0x3F)  /* EEPROM Control Register */
#define EEPROM_EEDR      _SFR_MEM8 (0x40)  /* EEPROM Data Register */
#define EEPROM_EEAR      _SFR_MEM16(0x41)  /* EEPROM Address Register */
#define EEPROM_EEARL     _SFR_MEM8 (0x41)  /* EEPROM Address Register LOW BYTE */
#define EEPROM_EEARH     _SFR_MEM8 (0x42)  /* EEPROM Address Register HIGH BYTE */
#define EEPROM_EEPR      _SFR_MEM8 (0x43)  /* EEPROM Protection Register */
#define EEPROM_EECR2     _SFR_MEM8 (0x159) /* EEPROM Control Register 2 */

/* FE -  (0x00) */
#define FE_BASE          _SFR_MEM8 (0x00)  /* FE Base Address */
#define FE_FESR          _SFR_MEM8 (0x100) /* Front-End Status Register */
#define FE_FEEN1         _SFR_MEM8 (0x101) /* Front-End Enable Register 1 */
#define FE_FEEN2         _SFR_MEM8 (0x102) /* Front-End Enable Register 2 */
#define FE_FELNA         _SFR_MEM8 (0x103) /* Front-End LNA Bias Register */
#define FE_FEVCT         _SFR_MEM8 (0x106) /* Front-End VCO Tuning Register */
#define FE_FEBT          _SFR_MEM8 (0x107) /* Front-End RC Tuning Register */
#define FE_FEMS          _SFR_MEM8 (0x108) /* Front-End Main and Swallow Control Register */
#define FE_FETN4         _SFR_MEM8 (0x109) /* Front-End RC Tuning 4bit Register */
#define FE_FECR          _SFR_MEM8 (0x10A) /* Front-End Control Register */
#define FE_FEVCO         _SFR_MEM8 (0x10B) /* Front-End VCO and PLL control */
#define FE_FEALR         _SFR_MEM8 (0x10C) /* Front-End Antenna Level Detector Range */
#define FE_FEANT         _SFR_MEM8 (0x10D) /* Front-End ANTenna */
#define FE_FEBIA         _SFR_MEM8 (0x10E) /* Front-End IF Amplifier BIAS */

/* FREQS -  (0x00) */
#define FREQS_BASE       _SFR_MEM8 (0x00)  /* FREQS Base Address */
#define FREQS_FSEN       _SFR_MEM8 (0x60)  /* Frequency Synthesizer Enable register */
#define FREQS_FFREQ1L    _SFR_MEM8 (0x64)  /* Fractional Frequency 1 Setting, Low Byte */
#define FREQS_FFREQ1M    _SFR_MEM8 (0x65)  /* Fractional Frequency 1 Setting, Middle Byte */
#define FREQS_FFREQ1H    _SFR_MEM8 (0x66)  /* Fractional Frequency 1 Setting, High Byte */
#define FREQS_FFREQ2L    _SFR_MEM8 (0x67)  /* Fractional Frequency 2 Setting, Low Byte */
#define FREQS_FFREQ2M    _SFR_MEM8 (0x68)  /* Fractional Frequency 2 Setting, Middle Byte */
#define FREQS_FFREQ2H    _SFR_MEM8 (0x69)  /* Fractional Frequency 2 Setting, High Byte */

/* FRSYNC -  (0x00) */
#define FRSYNC_BASE      _SFR_MEM8 (0x00)  /* FRSYNC Base Address */
#define FRSYNC_SFIDCB    _SFR_MEM8 (0xAB)  /* Start-Frame ID Control for data path B */
#define FRSYNC_SFIDLB    _SFR_MEM8 (0xAC)  /* Start-Frame ID Length for data path B */
#define FRSYNC_WUPTB     _SFR_MEM8 (0xAD)  /* Wake-Up Pattern Threshold for data path B */
#define FRSYNC_WUPLB     _SFR_MEM8 (0xAE)  /* Wake-Up Pattern Length for data path B */
#define FRSYNC_SFID1B    _SFR_MEM8 (0xAF)  /* Start-Frame ID byte 1 for data path B */
#define FRSYNC_SFID2B    _SFR_MEM8 (0xB0)  /* Start-Frame ID byte 2 for data path B */
#define FRSYNC_SFID3B    _SFR_MEM8 (0xB1)  /* Start-Frame ID byte 3 for data path B */
#define FRSYNC_SFID4B    _SFR_MEM8 (0xB2)  /* Start-Frame ID byte 4 for data path B */
#define FRSYNC_WUP1B     _SFR_MEM8 (0xB3)  /* Wake-Up Pattern byte 1 for data path B */
#define FRSYNC_WUP2B     _SFR_MEM8 (0xB4)  /* Wake-Up Pattern byte 2 for data path B */
#define FRSYNC_WUP3B     _SFR_MEM8 (0xB5)  /* Wake-Up Pattern byte 3 for data path B */
#define FRSYNC_WUP4B     _SFR_MEM8 (0xB6)  /* Wake-Up Pattern byte 4 for data path B */
#define FRSYNC_SFIDCA    _SFR_MEM8 (0xB7)  /* Start-Frame ID Control for data path A */
#define FRSYNC_SFIDLA    _SFR_MEM8 (0xB8)  /* Start-Frame ID Length for data path A */
#define FRSYNC_WUPTA     _SFR_MEM8 (0xB9)  /* Wake-Up Pattern Threshold for data path A */
#define FRSYNC_WUPLA     _SFR_MEM8 (0xBA)  /* Wake-Up Pattern Length for data path A */
#define FRSYNC_SFID1A    _SFR_MEM8 (0xBB)  /* Start-Frame ID byte 1 for data path A */
#define FRSYNC_SFID2A    _SFR_MEM8 (0xBC)  /* Start-Frame ID byte 2 for data path A */
#define FRSYNC_SFID3A    _SFR_MEM8 (0xBD)  /* Start-Frame ID byte 3 for data path A */
#define FRSYNC_SFID4A    _SFR_MEM8 (0xBE)  /* Start-Frame ID byte 4 for data path A */
#define FRSYNC_WUP1A     _SFR_MEM8 (0xBF)  /* Wake-Up Pattern byte 1 for data path A */
#define FRSYNC_WUP2A     _SFR_MEM8 (0xC0)  /* Wake-Up Pattern byte 2 for data path A */
#define FRSYNC_WUP3A     _SFR_MEM8 (0xC1)  /* Wake-Up Pattern byte 3 for data path A */
#define FRSYNC_WUP4A     _SFR_MEM8 (0xC2)  /* Wake-Up Pattern byte 4 for data path A */

/* GPIOREGS -  (0x00) */
#define GPIOREGS_BASE    _SFR_MEM8 (0x00)  /* GPIOREGS Base Address */
#define GPIOREGS_GPIOR0  _SFR_MEM8 (0x3A)  /* General Purpose I/O Register 0 */
#define GPIOREGS_GPIOR3  _SFR_MEM8 (0x3B)  /* General Purpose I/O Register 3 */
#define GPIOREGS_GPIOR4  _SFR_MEM8 (0x3C)  /* General Purpose I/O Register 4 */
#define GPIOREGS_GPIOR5  _SFR_MEM8 (0x3D)  /* General Purpose I/O Register 5 */
#define GPIOREGS_GPIOR6  _SFR_MEM8 (0x3E)  /* General Purpose I/O Register 6 */
#define GPIOREGS_GPIOR1  _SFR_MEM8 (0x44)  /* General Purpose I/O Register 1 */
#define GPIOREGS_GPIOR2  _SFR_MEM8 (0x45)  /* General Purpose I/O Register 2 */

/* IDSCAN -  (0x00) */
#define IDSCAN_BASE      _SFR_MEM8 (0x00)  /* IDSCAN Base Address */
#define IDSCAN_IDB0      _SFR_MEM8 (0x147) /* ID Byte 0 */
#define IDSCAN_IDB1      _SFR_MEM8 (0x148) /* ID Byte 1 */
#define IDSCAN_IDB2      _SFR_MEM8 (0x149) /* ID Byte 2 */
#define IDSCAN_IDB3      _SFR_MEM8 (0x14A) /* ID Byte 3 */
#define IDSCAN_IDC       _SFR_MEM8 (0x14B) /* ID Configuration */
#define IDSCAN_IDS       _SFR_MEM8 (0x14C) /* ID Status */

/* INT -  (0x00) */
#define INT_BASE         _SFR_MEM8 (0x00)  /* INT Base Address */
#define INT_PCIFR        _SFR_MEM8 (0x2F)  /* Pin change Interrupt flag Register */
#define INT_PCICR        _SFR_MEM8 (0x46)  /* Pin change Interrupt control Register */
#define INT_EIMSK        _SFR_MEM8 (0x47)  /* External Interrupt Mask Register */
#define INT_EIFR         _SFR_MEM8 (0x48)  /* External Interrupt Flag Register */
#define INT_EICRA        _SFR_MEM8 (0x6B)  /* External Interrupt control Register */
#define INT_PCMSK0       _SFR_MEM8 (0x6C)  /* Pin change Mask Register 0 */
#define INT_PCMSK1       _SFR_MEM8 (0x6D)  /* Pin change Mask Register 1 */

/* MEM -  (0x00) */
#define MEM_BASE         _SFR_MEM8 (0x00)  /* MEM Base Address */
#define MEM_PGMST        _SFR_MEM8 (0x15A) /* Program Memory Status Register */
#define MEM_EEST         _SFR_MEM8 (0x15B) /* EEPROM Status Register */

/* PORTB -  (0x00) */
#define PORTB_BASE       _SFR_MEM8 (0x00)  /* PORTB Base Address */
#define PORTB_PINB       _SFR_MEM8 (0x25)  /* Port B Input Pins */
#define PORTB_DDRB       _SFR_MEM8 (0x26)  /* Port B Data Direction Register */
#define PORTB_PORTB      _SFR_MEM8 (0x27)  /* Port B Data Register */

/* PORTC -  (0x00) */
#define PORTC_BASE       _SFR_MEM8 (0x00)  /* PORTC Base Address */
#define PORTC_PINC       _SFR_MEM8 (0x28)  /* Port C Input Pins */
#define PORTC_DDRC       _SFR_MEM8 (0x29)  /* Port C Data Direction Register */
#define PORTC_PORTC      _SFR_MEM8 (0x2A)  /* Port C Data Register */

/* RSSIB -  (0x00) */
#define RSSIB_BASE       _SFR_MEM8 (0x00)  /* RSSIB Base Address */
#define RSSIB_RSSAV      _SFR_MEM8 (0x14D) /* RSSI Average Value */
#define RSSIB_RSSPK      _SFR_MEM8 (0x14E) /* RSSI Peak Value */
#define RSSIB_RSSL       _SFR_MEM8 (0x14F) /* RSSI Low Threshold for Signal Check */
#define RSSIB_RSSH       _SFR_MEM8 (0x150) /* RSSI High Threshold for Signal Check */
#define RSSIB_RSSC       _SFR_MEM8 (0x151) /* RSSI Configuration Register */
#define RSSIB_RSIFG      _SFR_MEM8 (0x15C) /* RSSI High IF Amplifier Gain */
#define RSSIB_RSLDV      _SFR_MEM8 (0x15D) /* RSSI Low Band Damping Value */
#define RSSIB_RSHDV      _SFR_MEM8 (0x15E) /* RSSI High Band Damping Value */
#define RSSIB_RSCOM      _SFR_MEM8 (0x15F) /* RSSI Compensation Register */

/* RXBUF -  (0x00) */
#define RXBUF_BASE       _SFR_MEM8 (0x00)  /* RXBUF Base Address */
#define RXBUF_RXBC1      _SFR_MEM8 (0x12F) /* Rx Buffer configuration register 1 */
#define RXBUF_RXBC2      _SFR_MEM8 (0x130) /* Rx Buffer configuration register 2 */
#define RXBUF_RXTLLB     _SFR_MEM8 (0x131) /* Rx data telegram length register low byte for data path B */
#define RXBUF_RXTLHB     _SFR_MEM8 (0x132) /* Rx data telegram length register high byte for data path B */
#define RXBUF_RXCRLB     _SFR_MEM8 (0x133) /* Rx CRC result register low byte for data path B */
#define RXBUF_RXCRHB     _SFR_MEM8 (0x134) /* Rx CRC result register high byte for data path B */
#define RXBUF_RXCSBB     _SFR_MEM8 (0x135) /* Rx CRC skip bit number for data path B */
#define RXBUF_RXCILB     _SFR_MEM8 (0x136) /* Rx CRC Init value (16-bit RXCI) low byte for data path B */
#define RXBUF_RXCIHB     _SFR_MEM8 (0x137) /* Rx CRC Init value (16-bit RXCI) high byte for data path B */
#define RXBUF_RXCPLB     _SFR_MEM8 (0x138) /* Rx CRC polynomial low byte for data path B */
#define RXBUF_RXCPHB     _SFR_MEM8 (0x139) /* Rx CRC polynomial (15 bit RXCPB) high byte for data path B */
#define RXBUF_RXDSB      _SFR_MEM8 (0x13A) /* Rx data shift register for data path B */
#define RXBUF_RXTLLA     _SFR_MEM8 (0x13B) /* Rx data telegram length register low byte for data path A */
#define RXBUF_RXTLHA     _SFR_MEM8 (0x13C) /* Rx data telegram length register high byte for data path A */
#define RXBUF_RXCRLA     _SFR_MEM8 (0x13D) /* Rx CRC result register low byte for data path A */
#define RXBUF_RXCRHA     _SFR_MEM8 (0x13E) /* Rx CRC result register high byte for data path A */
#define RXBUF_RXCSBA     _SFR_MEM8 (0x13F) /* Rx CRC skip bit number for data path A */
#define RXBUF_RXCILA     _SFR_MEM8 (0x140) /* Rx CRC Init value (16-bit RXCI) low byte for data path A */
#define RXBUF_RXCIHA     _SFR_MEM8 (0x141) /* Rx CRC Init value (16-bit RXCI) high byte for data path A */
#define RXBUF_RXCPLA     _SFR_MEM8 (0x142) /* Rx CRC polynomial low byte for data path A */
#define RXBUF_RXCPHA     _SFR_MEM8 (0x143) /* Rx CRC polynomial (15 bit RXCPA) high byte for data path A */
#define RXBUF_RXDSA      _SFR_MEM8 (0x144) /* Rx data shift register for data path A */

/* RXDSP -  (0x00) */
#define RXDSP_BASE       _SFR_MEM8 (0x00)  /* RXDSP Base Address */
#define RXDSP_RDSIFR     _SFR_MEM8 (0x2D)  /* Rx DSP status interrupt flag register */
#define RXDSP_RDCR       _SFR_MEM8 (0x53)  /* Rx DSP control register */
#define RXDSP_EOTSA      _SFR_MEM8 (0x54)  /* End Of Telegram Status on path A */
#define RXDSP_EOTCA      _SFR_MEM8 (0x55)  /* End Of Telegram Conditions for path A */
#define RXDSP_EOTSB      _SFR_MEM8 (0x56)  /* End Of Telegram Status on path B */
#define RXDSP_EOTCB      _SFR_MEM8 (0x57)  /* End Of Telegram Conditions for path B */
#define RXDSP_SOTSB      _SFR_MEM8 (0x91)  /* Start Of Telegram Status for path B */
#define RXDSP_SOTSA      _SFR_MEM8 (0x92)  /* Start Of Telegram Status for path A */
#define RXDSP_SOTCB      _SFR_MEM8 (0x93)  /* Start Of Telegram Conditions for path B */
#define RXDSP_SOTCA      _SFR_MEM8 (0x94)  /* Start Of Telegram Conditions for path A */
#define RXDSP_TESRB      _SFR_MEM8 (0x95)  /* Telegram Status Register on Path B */
#define RXDSP_TESRA      _SFR_MEM8 (0x96)  /* Telegram Status Register on Path A */
#define RXDSP_RDSIMR     _SFR_MEM8 (0x98)  /* Rx DSP status interrupt mask register */
#define RXDSP_RDOCR      _SFR_MEM8 (0x99)  /* Rx DSP output control */

/* SFIFO -  (0x00) */
#define SFIFO_BASE       _SFR_MEM8 (0x00)  /* SFIFO Base Address */
#define SFIFO_SFS        _SFR_MEM8 (0xDB)  /* Support FIFO Status Register */
#define SFIFO_SFL        _SFR_MEM8 (0xDC)  /* Support FIFO Fill Level Register */
#define SFIFO_SFWP       _SFR_MEM8 (0xDD)  /* Support FIFO Write Pointer */
#define SFIFO_SFRP       _SFR_MEM8 (0xDE)  /* Support FIFO Read Pointer */
#define SFIFO_SFD        _SFR_MEM8 (0xDF)  /* Support FIFO Data Register */
#define SFIFO_SFI        _SFR_MEM8 (0xE0)  /* Support FIFO Interrupt Mask Register */
#define SFIFO_SFC        _SFR_MEM8 (0xE1)  /* Support FIFO Configuration Register */

/* SPI -  (0x00) */
#define SPI_BASE         _SFR_MEM8 (0x00)  /* SPI Base Address */
#define SPI_SPCR         _SFR_MEM8 (0x4C)  /* SPI Control Register */
#define SPI_SPSR         _SFR_MEM8 (0x4D)  /* SPI Status Register */
#define SPI_SPDR         _SFR_MEM8 (0x4E)  /* SPI Data Register */
#define SPI_SFFR         _SFR_MEM8 (0x157) /* SPI FIFO Fill Status Register */
#define SPI_SFIR         _SFR_MEM8 (0x158) /* SPI FIFO Interrupt Register */

/* SSM -  (0x00) */
#define SSM_BASE         _SFR_MEM8 (0x00)  /* SSM Base Address */
#define SSM_SSMCR        _SFR_MEM8 (0xE2)  /* SSM Control Register */
#define SSM_SSMRCR       _SFR_MEM8 (0xE3)  /* SSM Rx Control Register */
#define SSM_SSMFBR       _SFR_MEM8 (0xE4)  /* SSM Filter Bandwidth Register */
#define SSM_SSMRR        _SFR_MEM8 (0xE5)  /* SSM Run Register */
#define SSM_SSMSR        _SFR_MEM8 (0xE6)  /* SSM Status Register */
#define SSM_SSMIFR       _SFR_MEM8 (0xE7)  /* SSM Interrupt Flag Register */
#define SSM_SSMIMR       _SFR_MEM8 (0xE8)  /* SSM interrupt mask register */
#define SSM_MSMSTR       _SFR_MEM8 (0xE9)  /* Master State Machine state register */
#define SSM_SSMSTR       _SFR_MEM8 (0xEA)  /* SSM State Register */
#define SSM_SSMXSR       _SFR_MEM8 (0xEB)  /* SSM extended State Register */
#define SSM_MSMCR1       _SFR_MEM8 (0xEC)  /* Master State Machine Control Register 1 */
#define SSM_MSMCR2       _SFR_MEM8 (0xED)  /* Master State Machine Control Register 2 */
#define SSM_MSMCR3       _SFR_MEM8 (0xEE)  /* Master State Machine Control Register 3 */
#define SSM_MSMCR4       _SFR_MEM8 (0xEF)  /* Master State Machine Control Register 4 */
#define SSM_GTCR         _SFR_MEM8 (0xF0)  /* Get Telegram Control Register */
#define SSM_SOTC1A       _SFR_MEM8 (0xF1)  /* Start Of Telegram Conditions 1 for Path A */
#define SSM_SOTC2A       _SFR_MEM8 (0xF2)  /* Start Of Telegram Conditions 2 for Path A */
#define SSM_SOTC1B       _SFR_MEM8 (0xF3)  /* Start Of Telegram Conditions 1 for Path B */
#define SSM_SOTC2B       _SFR_MEM8 (0xF4)  /* Start Of Telegram Conditions 2 for Path B */
#define SSM_EOTC1A       _SFR_MEM8 (0xF5)  /* End Of Telegram Conditions 1 for Path A */
#define SSM_EOTC2A       _SFR_MEM8 (0xF6)  /* End Of Telegram Conditions 2 for Path A */
#define SSM_EOTC3A       _SFR_MEM8 (0xF7)  /* End Of Telegram Conditions 3 for Path A */
#define SSM_EOTC1B       _SFR_MEM8 (0xF8)  /* End Of Telegram Conditions 1 for Path B */
#define SSM_EOTC2B       _SFR_MEM8 (0xF9)  /* End Of Telegram Conditions 2 for Path B */
#define SSM_EOTC3B       _SFR_MEM8 (0xFA)  /* End Of Telegram Conditions 3 for Path B */
#define SSM_WCOTOA       _SFR_MEM8 (0xFB)  /* Wait check ok time out for path A */
#define SSM_WCOTOB       _SFR_MEM8 (0xFC)  /* Wait check ok time out for path B */
#define SSM_SOTTOA       _SFR_MEM8 (0xFD)  /* Start Of Telegram Time Out for path A */
#define SSM_SOTTOB       _SFR_MEM8 (0xFE)  /* Start Of Telegram Time Out for path B */
#define SSM_SSMFCR       _SFR_MEM8 (0xFF)  /* SSM Flow Control Register */

/* SUP -  (0x00) */
#define SUP_BASE         _SFR_MEM8 (0x00)  /* SUP Base Address */
#define SUP_VMCSR        _SFR_MEM8 (0x4A)  /* Voltage Monitor Control and Status Register */
#define SUP_SUPFR        _SFR_MEM8 (0xCA)  /* Supply Interrupt Flag Register */
#define SUP_SUPCR        _SFR_MEM8 (0xCB)  /* Supply Control Register */
#define SUP_SUPCA2       _SFR_MEM8 (0xCD)  /* Supply calibration register 2 */
#define SUP_SUPCA3       _SFR_MEM8 (0xCE)  /* Supply calibration register 3 */
#define SUP_SUPCA4       _SFR_MEM8 (0xCF)  /* Supply calibration register 4 */
#define SUP_CALRDY       _SFR_MEM8 (0xD0)  /* Calibration ready signature */
#define SUP_VMCAL        _SFR_MEM8 (0xD1)  /* Voltage Monitor Calibration register */

/* SYMCH -  (0x00) */
#define SYMCH_BASE       _SFR_MEM8 (0x00)  /* SYMCH Base Address */
#define SYMCH_SYCB       _SFR_MEM8 (0x9D)  /* Symbol check configuration for data path B */
#define SYMCH_SYCA       _SFR_MEM8 (0x9E)  /* Symbol check configuration for data path A */

/* TEMPER -  (0x00) */
#define TEMPER_BASE      _SFR_MEM8 (0x00)  /* TEMPER Base Address */
#define TEMPER_TEMPL     _SFR_MEM8 (0x9B)  /* Temperature Low byte */
#define TEMPER_TEMPH     _SFR_MEM8 (0x9C)  /* Temperature High byte */

/* TIMER0_WDT -  (0x00) */
#define TIMER0_WDT_BASE  _SFR_MEM8 (0x00)  /* TIMER0_WDT Base Address */
#define TIMER0_WDT_T0CR  _SFR_MEM8 (0x30)  /* Timer0 Control Register */
#define TIMER0_WDT_T0IFR _SFR_MEM8 (0x4F)  /* Timer0 Interrupt Flag Register */
#define TIMER0_WDT_WDTCR _SFR_MEM8 (0x6E)  /* Watchdog Timer0 control Register */

/* TIMER1 -  (0x00) */
#define TIMER1_BASE      _SFR_MEM8 (0x00)  /* TIMER1 Base Address */
#define TIMER1_T1CR      _SFR_MEM8 (0x31)  /* Timer1 control Register */
#define TIMER1_T1IFR     _SFR_MEM8 (0x35)  /* Timer1 Interrupt Flag Register */
#define TIMER1_T1CNT     _SFR_MEM8 (0x6F)  /* Timer1 Counter Register */
#define TIMER1_T1COR     _SFR_MEM8 (0x70)  /* Timer1 Compare Register */
#define TIMER1_T1MR      _SFR_MEM8 (0x71)  /* Timer1 Mode Register */
#define TIMER1_T1IMR     _SFR_MEM8 (0x72)  /* Timer1 Interrupt Mask Register */

/* TIMER2 -  (0x00) */
#define TIMER2_BASE      _SFR_MEM8 (0x00)  /* TIMER2 Base Address */
#define TIMER2_T2CR      _SFR_MEM8 (0x32)  /* Timer2 Control Register */
#define TIMER2_T2IFR     _SFR_MEM8 (0x36)  /* Timer2 Interrupt Flag Register */
#define TIMER2_T2CNT     _SFR_MEM8 (0x73)  /* Timer2 Counter Register */
#define TIMER2_T2COR     _SFR_MEM8 (0x74)  /* Timer2 Compare Register */
#define TIMER2_T2MR      _SFR_MEM8 (0x75)  /* Timer2 Mode Register */
#define TIMER2_T2IMR     _SFR_MEM8 (0x76)  /* Timer2 Interrupt Mask Register */

/* TIMER3 -  (0x00) */
#define TIMER3_BASE      _SFR_MEM8 (0x00)  /* TIMER3 Base Address */
#define TIMER3_T3CR      _SFR_MEM8 (0x33)  /* Timer3 control Register */
#define TIMER3_T3IFR     _SFR_MEM8 (0x37)  /* Timer3 interrupt flag Register */
#define TIMER3_T3CNT     _SFR_MEM16(0x77)  /* Timer3 counter Register */
#define TIMER3_T3CNTL    _SFR_MEM8 (0x77)  /* Timer3 counter Register LOW BYTE */
#define TIMER3_T3CNTH    _SFR_MEM8 (0x78)  /* Timer3 counter Register HIGH BYTE */
#define TIMER3_T3COR     _SFR_MEM16(0x79)  /* Timer3 compare Register */
#define TIMER3_T3CORL    _SFR_MEM8 (0x79)  /* Timer3 compare Register LOW BYTE */
#define TIMER3_T3CORH    _SFR_MEM8 (0x7A)  /* Timer3 compare Register HIGH BYTE */
#define TIMER3_T3ICR     _SFR_MEM16(0x7B)  /* Timer3 input capture Register */
#define TIMER3_T3ICRL    _SFR_MEM8 (0x7B)  /* Timer3 input capture Register LOW BYTE */
#define TIMER3_T3ICRH    _SFR_MEM8 (0x7C)  /* Timer3 input capture Register HIGH BYTE */
#define TIMER3_T3MRA     _SFR_MEM8 (0x7D)  /* Timer3 mode Register */
#define TIMER3_T3MRB     _SFR_MEM8 (0x7E)  /* Timer3 mode Register */
#define TIMER3_T3IMR     _SFR_MEM8 (0x7F)  /* Timer3 interrupt mask Register */

/* TIMER4 -  (0x00) */
#define TIMER4_BASE      _SFR_MEM8 (0x00)  /* TIMER4 Base Address */
#define TIMER4_T4CR      _SFR_MEM8 (0x34)  /* Timer4 control Register */
#define TIMER4_T4IFR     _SFR_MEM8 (0x38)  /* Timer4 interrupt flag Register */
#define TIMER4_T4CNT     _SFR_MEM16(0x80)  /* Timer4 counter Register */
#define TIMER4_T4CNTL    _SFR_MEM8 (0x80)  /* Timer4 counter Register LOW BYTE */
#define TIMER4_T4CNTH    _SFR_MEM8 (0x81)  /* Timer4 counter Register HIGH BYTE */
#define TIMER4_T4COR     _SFR_MEM16(0x82)  /* Timer4 compare Register */
#define TIMER4_T4CORL    _SFR_MEM8 (0x82)  /* Timer4 compare Register LOW BYTE */
#define TIMER4_T4CORH    _SFR_MEM8 (0x83)  /* Timer4 compare Register HIGH BYTE */
#define TIMER4_T4ICR     _SFR_MEM16(0x84)  /* Timer4 input capture Register */
#define TIMER4_T4ICRL    _SFR_MEM8 (0x84)  /* Timer4 input capture Register LOW BYTE */
#define TIMER4_T4ICRH    _SFR_MEM8 (0x85)  /* Timer4 input capture Register HIGH BYTE */
#define TIMER4_T4MRA     _SFR_MEM8 (0x86)  /* Timer4 mode Register */
#define TIMER4_T4MRB     _SFR_MEM8 (0x87)  /* Timer4 mode Register */
#define TIMER4_T4IMR     _SFR_MEM8 (0x88)  /* Timer4 interrupt mask Register */

/* TIMER5 -  (0x00) */
#define TIMER5_BASE      _SFR_MEM8 (0x00)  /* TIMER5 Base Address */
#define TIMER5_T5IFR     _SFR_MEM8 (0x39)  /* Timer5 Interrupt Flag Register */
#define TIMER5_T5OCR     _SFR_MEM16(0x8A)  /* Timer5 Output Compare Register */
#define TIMER5_T5OCRL    _SFR_MEM8 (0x8A)  /* Timer5 Output Compare Register LOW BYTE */
#define TIMER5_T5OCRH    _SFR_MEM8 (0x8B)  /* Timer5 Output Compare Register HIGH BYTE */
#define TIMER5_T5CCR     _SFR_MEM8 (0x8C)  /* Timer5 Control Register */
#define TIMER5_T5CNT     _SFR_MEM16(0x8D)  /* Timer5 Counter */
#define TIMER5_T5CNTL    _SFR_MEM8 (0x8D)  /* Timer5 Counter LOW BYTE */
#define TIMER5_T5CNTH    _SFR_MEM8 (0x8E)  /* Timer5 Counter HIGH BYTE */
#define TIMER5_T5IMR     _SFR_MEM8 (0x8F)  /* Timer5 Interrupt Mask Register */
#define TIMER5_GTCCR     _SFR_MEM8 (0x90)  /* General Timer/Counter Control Register */

/* FUSE -  (0x00) */
#define FUSE_BASE        _SFR_MEM8 (0x00)  /* FUSE Base Address */
#define FUSE_LOW         _SFR_MEM8 (0x00)  

/* LOCKBIT -  (0x00) */
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
#define None_RESET_vect_num     (0)                 
#define None_RESET_vect         _VECTOR(0)          /* External Pin, Power-on Reset, Brown-out Reset and Watchdog Reset */
#define None_INT0_vect_num      (1)                 
#define None_INT0_vect          _VECTOR(1)          /* External Interrupt Request 0 */
#define None_INT1_vect_num      (2)                 
#define None_INT1_vect          _VECTOR(2)          /* External Interrupt Request 1 */
#define None_PCI0_vect_num      (3)                 
#define None_PCI0_vect          _VECTOR(3)          /* Pin Change Interrupt Request 0 */
#define None_PCI1_vect_num      (4)                 
#define None_PCI1_vect          _VECTOR(4)          /* Pin Change Interrupt Request 1 */
#define None_VMON_vect_num      (5)                 
#define None_VMON_vect          _VECTOR(5)          /* Voltage Monitoring Interrupt */
#define None_AVCCR_vect_num     (6)                 
#define None_AVCCR_vect         _VECTOR(6)          /* AVCC Reset Interrupt */
#define None_AVCCL_vect_num     (7)                 
#define None_AVCCL_vect         _VECTOR(7)          /* AVCC Low Interrupt */
#define None_T0INT_vect_num     (8)                 
#define None_T0INT_vect         _VECTOR(8)          /* Timer 0 Interval Interrupt */
#define None_T1COMP_vect_num    (9)                 
#define None_T1COMP_vect        _VECTOR(9)          /* Timer/Counter1 Compare Match Interrupt */
#define None_T1OVF_vect_num     (10)                
#define None_T1OVF_vect         _VECTOR(10)         /* Timer/Counter1 Overflow Interrupt */
#define None_T2COMP_vect_num    (11)                
#define None_T2COMP_vect        _VECTOR(11)         /* Timer/Counter2 Compare Match Interrupt */
#define None_T2OVF_vect_num     (12)                
#define None_T2OVF_vect         _VECTOR(12)         /* Timer/Counter2 Overflow Interrupt */
#define None_T3CAP_vect_num     (13)                
#define None_T3CAP_vect         _VECTOR(13)         /* Timer/Counter3 Capture Event Interrupt */
#define None_T3COMP_vect_num    (14)                
#define None_T3COMP_vect        _VECTOR(14)         /* Timer/Counter3 Compare Match Interrupt */
#define None_T3OVF_vect_num     (15)                
#define None_T3OVF_vect         _VECTOR(15)         /* Timer/Counter3 Overflow Interrupt */
#define None_T4CAP_vect_num     (16)                
#define None_T4CAP_vect         _VECTOR(16)         /* Timer/Counter4 Capture Event Interrupt */
#define None_T4COMP_vect_num    (17)                
#define None_T4COMP_vect        _VECTOR(17)         /* Timer/Counter4 Compare Match Interrupt */
#define None_T4OVF_vect_num     (18)                
#define None_T4OVF_vect         _VECTOR(18)         /* Timer/Counter4 Overflow Interrupt */
#define None_T5COMP_vect_num    (19)                
#define None_T5COMP_vect        _VECTOR(19)         /* Timer/Counter5 Compare Match Interrupt */
#define None_T5OVF_vect_num     (20)                
#define None_T5OVF_vect         _VECTOR(20)         /* Timer/Counter5 Overflow Interrupt */
#define None_SPI_vect_num       (21)                
#define None_SPI_vect           _VECTOR(21)         /* SPI Serial Transfer Complete Interrupt */
#define None_SRX_FIFO_vect_num  (22)                
#define None_SRX_FIFO_vect      _VECTOR(22)         /* SPI Rx Buffer Interrupt */
#define None_STX_FIFO_vect_num  (23)                
#define None_STX_FIFO_vect      _VECTOR(23)         /* SPI Tx Buffer Interrupt */
#define None_SSM_vect_num       (24)                
#define None_SSM_vect           _VECTOR(24)         /* Sequencer State Machine Interrupt */
#define None_DFFLR_vect_num     (25)                
#define None_DFFLR_vect         _VECTOR(25)         /* Data FIFO fill level reached Interrupt */
#define None_DFOUE_vect_num     (26)                
#define None_DFOUE_vect         _VECTOR(26)         /* Data FIFO overflow or underflow error Interrupt */
#define None_SFFLR_vect_num     (27)                
#define None_SFFLR_vect         _VECTOR(27)         /* RSSI/Preamble FIFO fill level reached Interrupt */
#define None_SFOUE_vect_num     (28)                
#define None_SFOUE_vect         _VECTOR(28)         /* RSSI/Preamble FIFO overflow or underflow error Interrupt */
#define None_TMTCF_vect_num     (29)                
#define None_TMTCF_vect         _VECTOR(29)         /* Tx Modulator Telegram Finish Interrupt */
#define None_UHF_WCOB_vect_num  (30)                
#define None_UHF_WCOB_vect      _VECTOR(30)         /* UHF receiver wake up ok on Rx path B */
#define None_UHF_WCOA_vect_num  (31)                
#define None_UHF_WCOA_vect      _VECTOR(31)         /* UHF receiver wake up ok on Rx path A */
#define None_UHF_SOTB_vect_num  (32)                
#define None_UHF_SOTB_vect      _VECTOR(32)         /* UHF receiver start of telegram ok on Rx path B */
#define None_UHF_SOTA_vect_num  (33)                
#define None_UHF_SOTA_vect      _VECTOR(33)         /* UHF receiver start of telegram ok on Rx path A */
#define None_UHF_EOTB_vect_num  (34)                
#define None_UHF_EOTB_vect      _VECTOR(34)         /* UHF receiver end of telegram on Rx path B */
#define None_UHF_EOTA_vect_num  (35)                
#define None_UHF_EOTA_vect      _VECTOR(35)         /* UHF receiver end of telegram on Rx path A */
#define None_UHF_NBITB_vect_num (36)                
#define None_UHF_NBITB_vect     _VECTOR(36)         /* UHF receiver new bit on Rx path B */
#define None_UHF_NBITA_vect_num (37)                
#define None_UHF_NBITA_vect     _VECTOR(37)         /* UHF receiver new bit on Rx path A */
#define None_EXCM_vect_num      (38)                
#define None_EXCM_vect          _VECTOR(38)         /* External input Clock monitoring Interrupt */
#define None_ERDY_vect_num      (39)                
#define None_ERDY_vect          _VECTOR(39)         /* EEPROM Ready Interrupt */
#define None_SPMR_vect_num      (40)                
#define None_SPMR_vect          _VECTOR(40)         /* Store Program Memory Ready */
#define None_IDFULL_vect_num    (41)                
#define None_IDFULL_vect        _VECTOR(41)         /* IDSCAN Full Interrupt */

/* Vector Table Size */
#define _VECTOR_SIZE            (4)                 /* Size of individual vector. */
#define _VECTORS_SIZE           (42 * _VECTOR_SIZE) /* Size of all vectors */
/*
================================================================================
Constants
================================================================================
*/

#define PROGMEM_START            (0x0000)                                         
#define PROGMEM_SIZE             (0xD000)                                         
#define PROGMEM_END              (PROGMEM_START + PROGMEM_SIZE - 1)               

#define ROM_START                (0x0000)                                         
#define ROM_SIZE                 (0x8000)                                         
#define ROM_PAGE_SIZE            (0x0040)                                         
#define ROM_END                  (ROM_START + ROM_SIZE - 1)                       

#define FLASH_START              (0x8000)                                         
#define FLASH_SIZE               (0x5000)                                         
#define FLASH_PAGE_SIZE          (0x0040)                                         
#define FLASH_END                (FLASH_START + FLASH_SIZE - 1)                   

#define BOOT_SECTION_1_START     (0x8000)                                         
#define BOOT_SECTION_1_SIZE      (0x5000)                                         
#define BOOT_SECTION_1_PAGE_SIZE (0x0040)                                         
#define BOOT_SECTION_1_END       (BOOT_SECTION_1_START + BOOT_SECTION_1_SIZE - 1) 

#define SIGNATURESMEM_START  (0x0000)                                       
#define SIGNATURESMEM_SIZE   (0x0003)                                       
#define SIGNATURESMEM_END    (SIGNATURESMEM_START + SIGNATURESMEM_SIZE - 1) 

#define SIGNATURES_START     (0x0000)                                       
#define SIGNATURES_SIZE      (0x0003)                                       
#define SIGNATURES_PAGE_SIZE (0x0001)                                       
#define SIGNATURES_END       (SIGNATURES_START + SIGNATURES_SIZE - 1)       

#define FUSESMEM_START  (0x0000)                             
#define FUSESMEM_SIZE   (0x0001)                             
#define FUSESMEM_END    (FUSESMEM_START + FUSESMEM_SIZE - 1) 

#define FUSES_START     (0x0000)                             
#define FUSES_SIZE      (0x0001)                             
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
#define DATAMEM_SIZE        (0x0600)                               
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
#define IRAM_SIZE           (0x0400)                               
#define IRAM_PAGE_SIZE      (0x0001)                               
#define IRAM_END            (IRAM_START + IRAM_SIZE - 1)           

#define EEPROMMEM_START         (0x0000)                               
#define EEPROMMEM_SIZE          (0x0480)                               
#define EEPROMMEM_END           (EEPROMMEM_START + EEPROMMEM_SIZE - 1) 

#define EEPROM_START            (0x0000)                               
#define EEPROM_SIZE             (0x0400)                               
#define EEPROM_PAGE_SIZE        (0x0010)                               
#define EEPROM_END              (EEPROM_START + EEPROM_SIZE - 1)       

/* Added MAPPED_EEPROM segment names for avr-libc */
#define MAPPED_EEPROM_START     (EEPROM_START)                         
#define MAPPED_EEPROM_SIZE      (EEPROM_SIZE)                          
#define MAPPED_EEPROM_PAGE_SIZE (EEPROM_PAGE_SIZE)                     
#define MAPPED_EEPROM_END       (EEPROM_END)                           

#define CALDATA_START           (0x0400)                               
#define CALDATA_SIZE            (0x0080)                               
#define CALDATA_PAGE_SIZE       (0x0010)                               
#define CALDATA_END             (CALDATA_START + CALDATA_SIZE - 1)     

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
#define PORTC0 (0) 
#define PORTC1 (1) 
#define PORTC2 (2) 
#define PORTC3 (3) 
#define PORTC4 (4) 
#define PORTC5 (5) 

/*
================================================================================
Fuses/LockBits/Signatures
================================================================================
*/

/* ============ Fuses ============ */

#define FUSE_MEMORY_SIZE 0 

/* Fuse offset 0x00 */
#define EXTCLKEN (unsigned char)~_BV(0) /* External Clock enable */
#define RSTDISBL (unsigned char)~_BV(1) /* Disable external Reset */
#define BOOTRST  (unsigned char)~_BV(2) /* Select interrupt vector location */
#define EESAVE   (unsigned char)~_BV(3) /* Preserve EEPROM memory through the Chip Erase cycle */
#define WDTON    (unsigned char)~_BV(4) /* Watch-dog Timer always on */
#define SPIEN    (unsigned char)~_BV(5) /* Serial program downloading (SPI) enabled */
#define DWEN     (unsigned char)~_BV(6) /* Debug Wire enable */
#define CKDIV8   (unsigned char)~_BV(7) /* Divide clock by 8 internally */


/* ========== Lock Bits ========== */
#define __LOCK_BITS_EXIST  


/* ========== Signature ========== */
#define SIGNATURE_0 (0x1E) 
#define SIGNATURE_1 (0x95) 
#define SIGNATURE_2 (0x65) 

#endif /* #ifdef _AVR_ATA5782_H_INCLUDED */
