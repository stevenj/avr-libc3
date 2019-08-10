/******************************************************************************
 *   This file is part of avr-libc3.                                          * 
 *                                                                            * 
 *   Automatically created by devtools/gen-ioheader-atdf.py (V0.91)           * 
 *                                                                            * 
 *   .atpack File: ATA5835.atdf                                               * 
 *   .ATDF File:   atdf/ATA5835.atdf                                          * 
 *   Version:      2.0.6                                                      * 
 *   Date:         2019-04-16                                                 * 
 *   Device:       ATA5835                                                    * 
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
#  define _AVR_IOXXX_H_ "ioATA5835.h"
#else
#  error "Attempt to include more than one <avr/ioXXX.h> file."
#endif

#ifndef _AVR_ATA5835_H_INCLUDED
#  define _AVR_ATA5835_H_INCLUDED

/*
================================================================================
Ungrouped common register
================================================================================
*/

#define MCUCR  _SFR_MEM8 (0x2E) /* MCU Control Register */

#define MCUSR  _SFR_MEM8 (0x4B) /* MCU Status Register */

#define DWDR   _SFR_MEM8 (0x51) /* Debug Wire Data Register */

#define SPMCSR _SFR_MEM8 (0x57) /* Store Program Memory Control and Status Register */

#define SP     _SFR_MEM16(0x5D) /* Stack Pointer */
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
typedef enum LOCKBIT_BLB0_enum
{
    LOCKBIT_BLB0_VAL_0x00_gc = (0x00<<2), /* LPM and SPM prohibited in Application Section */
    LOCKBIT_BLB0_VAL_0x01_gc = (0x01<<2), /* LPM prohibited in Application Section */
    LOCKBIT_BLB0_VAL_0x02_gc = (0x02<<2), /* SPM prohibited in Application Section */
    LOCKBIT_BLB0_VAL_0x03_gc = (0x03<<2), /* No lock on SPM and LPM in Application Section */
} LOCKBIT_BLB0_t;

/* Boot Loader Protection */
typedef enum LOCKBIT_BLB1_enum
{
    LOCKBIT_BLB1_VAL_0x00_gc = (0x00<<4), /* LPM and SPM prohibited in Boot Loader Section */
    LOCKBIT_BLB1_VAL_0x01_gc = (0x01<<4), /* LPM prohibited in Boot Loader Section */
    LOCKBIT_BLB1_VAL_0x02_gc = (0x02<<4), /* SPM prohibited in Boot Loader Section */
    LOCKBIT_BLB1_VAL_0x03_gc = (0x03<<4), /* No lock on SPM and LPM in Boot Loader Section */
} LOCKBIT_BLB1_t;

/*
--------------------------------------------------------------------------------
CALIB - 
--------------------------------------------------------------------------------
*/

typedef struct CALIB_struct
{
    register8_t rsv_0x00[203]; /* RESERVED REGISTER BLOCK */
    register8_t XFUSE;         /* XROW Fuse */
    register8_t SRCCAL;        /* Slow RC Oscillator Calibration */
    register8_t FRCCAL;        /* Fast RC Oscillator Calibration */
    register8_t rsv_0xCE[4];   /* RESERVED REGISTER BLOCK */
    register8_t SUPCA1;        /* Supply Calibration 1 */
    register8_t SUPCA2;        /* Supply Calibration 2 */
    register8_t SUPCA3;        /* Supply Calibration 3 */
    register8_t SUPCA4;        /* Supply Calibration 4 */
    register8_t rsv_0xD6[4];   /* RESERVED REGISTER BLOCK */
    register8_t CALRDY;        /* Calibration Ready Signature */
} CALIB_t;


/* Fast RC Oscillator Temperature Compensation */
typedef enum CALIB_FRCTC_enum
{
    CALIB_FRCTC_CLEAR_gc = (0x00), /* Fast RC Oscillator Temperature Compensation - CLEAR */
    CALIB_FRCTC_SET_gc   = (0x20), /* Fast RC Oscillator Temperature Compensation - SET */
} CALIB_FRCTC_t;

/* Fast RC Oscillator Calibration */
#define CALIB_FRCCAL_FRCCAL_gc(x) (x & 0x1F)

/* Slow RC Oscillator Temperature Compensation */
#define CALIB_SRCCAL_SRCTC_gc(x) ((x<<6) & 0xC0)

/* Slow RC Oscillator Calibration */
#define CALIB_SRCCAL_SRCCAL_gc(x) (x & 0x3F)

/* PA Regulator Voltage Calibration */
#define CALIB_SUPCA1_PVCAL_gc(x) ((x<<6) & 0xC0)

/* AVCC Regulator Voltage Calibration */
#define CALIB_SUPCA1_AVCAL_gc(x) ((x<<4) & 0x30)

/* VMEM Regulator Voltage Calibration */
#define CALIB_SUPCA1_VVCAL_gc(x) ((x<<2) & 0x0C)

/* DVCC Regulator Voltage Calibration */
#define CALIB_SUPCA1_DVCAL_gc(x) (x & 0x03)

/* Voltage Monitor Calibration */
#define CALIB_SUPCA3_VMOCAL_gc(x) ((x<<6) & 0xC0)

/* AVCC Monitor Calibration */
#define CALIB_SUPCA3_AMCAL_gc(x) ((x<<4) & 0x30)

/* VMEM Monitor Calibration */
#define CALIB_SUPCA3_VMCAL_gc(x) ((x<<2) & 0x0C)

/* DVCC Monitor Calibration */
#define CALIB_SUPCA3_DMCAL_gc(x) (x & 0x03)

/* CP2 Output on Port ckout */
typedef enum CALIB_CKOUT_enum
{
    CALIB_CKOUT_CLEAR_gc = (0x00), /* CP2 Output on Port ckout - CLEAR */
    CALIB_CKOUT_SET_gc   = (0x40), /* CP2 Output on Port ckout - SET */
} CALIB_CKOUT_t;

/* NVM Variable Programming Time Enable */
typedef enum CALIB_NVPTE_enum
{
    CALIB_NVPTE_CLEAR_gc = (0x00), /* NVM Variable Programming Time Enable - CLEAR */
    CALIB_NVPTE_SET_gc   = (0x10), /* NVM Variable Programming Time Enable - SET */
} CALIB_NVPTE_t;

/* EEPROM Programming Time */
#define CALIB_XFUSE_E2PT_gc(x) ((x<<2) & 0x0C)

/* Flash Memory Programming Time */
#define CALIB_XFUSE_FLPT_gc(x) (x & 0x03)

/*
--------------------------------------------------------------------------------
CHFLT - 
--------------------------------------------------------------------------------
*/

typedef struct CHFLT_struct
{
    register8_t rsv_0x00[175]; /* RESERVED REGISTER BLOCK */
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
    register8_t rsv_0x24[53];  /* RESERVED REGISTER BLOCK */
    register8_t SMCR;          /* Sleep Mode Control Register */
    register8_t CMCR;          /* Clock Management Control Register */
    register8_t CMIMR;         /* Clock Management Interrupt Mask Register */
    register8_t CLPR;          /* Clock Prescaler */
    register8_t rsv_0x5D[108]; /* RESERVED REGISTER BLOCK */
    register8_t CLKOD;         /* Clock Output Divider */
    register8_t CLKOCR;        /* Clock output control Register */
    register8_t rsv_0xCB[3];   /* RESERVED REGISTER BLOCK */
    register8_t CMSR;          /* Clock Management Status Register */
    register8_t CMOCR;         /* Clock Management Override Control Register */
} CLK_t;


/* Clock Output Driver Enable */
typedef enum CLK_CLKOEN_enum
{
    CLK_CLKOEN_CLEAR_gc = (0x00), /* Clock Output Driver Enable - CLEAR */
    CLK_CLKOEN_SET_gc   = (0x04), /* Clock Output Driver Enable - SET */
} CLK_CLKOEN_t;

/* Clock Output Source */
typedef enum CLK_CLKOS_enum
{
    CLK_CLKOS_VAL_0x00_gc = (0x00), /* clk_src */
    CLK_CLKOS_VAL_0x01_gc = (0x01), /* clk_frc */
    CLK_CLKOS_VAL_0x02_gc = (0x02), /* clk_adiv */
    CLK_CLKOS_VAL_0x03_gc = (0x03), /* clk_xto */
} CLK_CLKOS_t;

/* Clock Prescaler Change Enable */
typedef enum CLK_CLPCE_enum
{
    CLK_CLPCE_CLEAR_gc = (0x00), /* Clock Prescaler Change Enable - CLEAR */
    CLK_CLPCE_SET_gc   = (0x80), /* Clock Prescaler Change Enable - SET */
} CLK_CLPCE_t;

/* Timer Clock Prescaler Select */
typedef enum CLK_CLTPS_enum
{
    CLK_CLTPS_VAL_0x00_gc = (0x00<<3), /* disabled */
    CLK_CLTPS_VAL_0x01_gc = (0x01<<3), /* 1 */
    CLK_CLTPS_VAL_0x02_gc = (0x02<<3), /* 2 */
    CLK_CLTPS_VAL_0x03_gc = (0x03<<3), /* 4 */
    CLK_CLTPS_VAL_0x04_gc = (0x04<<3), /* 8 */
    CLK_CLTPS_VAL_0x05_gc = (0x05<<3), /* 16 */
    CLK_CLTPS_VAL_0x06_gc = (0x06<<3), /* 32 */
    CLK_CLTPS_VAL_0x07_gc = (0x07<<3), /* 64 */
} CLK_CLTPS_t;

/* System Clock Prescaler Select */
typedef enum CLK_CLKPS_enum
{
    CLK_CLKPS_VAL_0x00_gc = (0x00), /* 1 */
    CLK_CLKPS_VAL_0x01_gc = (0x01), /* 2 */
    CLK_CLKPS_VAL_0x02_gc = (0x02), /* 4 */
    CLK_CLKPS_VAL_0x03_gc = (0x03), /* 8 */
    CLK_CLKPS_VAL_0x04_gc = (0x04), /* 16 */
    CLK_CLKPS_VAL_0x05_gc = (0x05), /* 32 */
    CLK_CLKPS_VAL_0x06_gc = (0x06), /* 64 */
    CLK_CLKPS_VAL_0x07_gc = (0x07), /* 128 */
} CLK_CLKPS_t;

/* Clock Management Control Change Enable */
typedef enum CLK_CMCCE_enum
{
    CLK_CMCCE_CLEAR_gc = (0x00), /* Clock Management Control Change Enable - CLEAR */
    CLK_CMCCE_SET_gc   = (0x80), /* Clock Management Control Change Enable - SET */
} CLK_CMCCE_t;

/* Clock Monitor Enable */
typedef enum CLK_CMONEN_enum
{
    CLK_CMONEN_CLEAR_gc = (0x00), /* Clock Monitor Enable - CLEAR */
    CLK_CMONEN_SET_gc   = (0x40), /* Clock Monitor Enable - SET */
} CLK_CMONEN_t;

/* Core Clock Select */
typedef enum CLK_CCS_enum
{
    CLK_CCS_CLEAR_gc = (0x00), /* Core Clock Select - CLEAR */
    CLK_CCS_SET_gc   = (0x08), /* Core Clock Select - SET */
} CLK_CCS_t;

/* Clock Management Mode */
typedef enum CLK_CMM_enum
{
    CLK_CMM_VAL_0x00_gc = (0x00), /* clk_src */
    CLK_CMM_VAL_0x01_gc = (0x01), /* clk_adiv */
    CLK_CMM_VAL_0x02_gc = (0x02), /* clk_ext */
    CLK_CMM_VAL_0x03_gc = (0x03), /* clk_xto6 */
    CLK_CMM_VAL_0x04_gc = (0x04), /* clk_xto4 */
} CLK_CMM_t;

/* External Clock Interrupt Enable */
typedef enum CLK_ECIE_enum
{
    CLK_ECIE_CLEAR_gc = (0x00), /* External Clock Interrupt Enable - CLEAR */
    CLK_ECIE_SET_gc   = (0x01), /* External Clock Interrupt Enable - SET */
} CLK_ECIE_t;

/* SRC Oscillator Active */
typedef enum CLK_SRCACT_enum
{
    CLK_SRCACT_CLEAR_gc = (0x00), /* SRC Oscillator Active - CLEAR */
    CLK_SRCACT_SET_gc   = (0x08), /* SRC Oscillator Active - SET */
} CLK_SRCACT_t;

/* FRC Oscillator Active */
typedef enum CLK_FRCACT_enum
{
    CLK_FRCACT_CLEAR_gc = (0x00), /* FRC Oscillator Active - CLEAR */
    CLK_FRCACT_SET_gc   = (0x04), /* FRC Oscillator Active - SET */
} CLK_FRCACT_t;

/* SRC Oscillator Always On */
typedef enum CLK_SRCAO_enum
{
    CLK_SRCAO_CLEAR_gc = (0x00), /* SRC Oscillator Always On - CLEAR */
    CLK_SRCAO_SET_gc   = (0x02), /* SRC Oscillator Always On - SET */
} CLK_SRCAO_t;

/* FRC Oscillator Always On */
typedef enum CLK_FRCAO_enum
{
    CLK_FRCAO_CLEAR_gc = (0x00), /* FRC Oscillator Always On - CLEAR */
    CLK_FRCAO_SET_gc   = (0x01), /* FRC Oscillator Always On - SET */
} CLK_FRCAO_t;

/* External Clock Fail */
typedef enum CLK_ECF_enum
{
    CLK_ECF_CLEAR_gc = (0x00), /* External Clock Fail - CLEAR */
    CLK_ECF_SET_gc   = (0x01), /* External Clock Fail - SET */
} CLK_ECF_t;

/* Power Reduction Trace Unit */
typedef enum CLK_PRTRC_enum
{
    CLK_PRTRC_CLEAR_gc = (0x00), /* Power Reduction Trace Unit - CLEAR */
    CLK_PRTRC_SET_gc   = (0x80), /* Power Reduction Trace Unit - SET */
} CLK_PRTRC_t;

/* Power Reduction UART */
typedef enum CLK_PRUART_enum
{
    CLK_PRUART_CLEAR_gc = (0x00), /* Power Reduction UART - CLEAR */
    CLK_PRUART_SET_gc   = (0x40), /* Power Reduction UART - SET */
} CLK_PRUART_t;

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

/* Power Reduction Tx Modulator */
typedef enum CLK_PRTM_enum
{
    CLK_PRTM_CLEAR_gc = (0x00), /* Power Reduction Tx Modulator - CLEAR */
    CLK_PRTM_SET_gc   = (0x40), /* Power Reduction Tx Modulator - SET */
} CLK_PRTM_t;

/* Power Reduction RSSI Buffer */
typedef enum CLK_PRRS_enum
{
    CLK_PRRS_CLEAR_gc = (0x00), /* Power Reduction RSSI Buffer - CLEAR */
    CLK_PRRS_SET_gc   = (0x20), /* Power Reduction RSSI Buffer - SET */
} CLK_PRRS_t;

/* Power Reduction ID Check */
typedef enum CLK_PRIDS_enum
{
    CLK_PRIDS_CLEAR_gc = (0x00), /* Power Reduction ID Check - CLEAR */
    CLK_PRIDS_SET_gc   = (0x10), /* Power Reduction ID Check - SET */
} CLK_PRIDS_t;

/* Power Reduction Data FIFO */
typedef enum CLK_PRDF_enum
{
    CLK_PRDF_CLEAR_gc = (0x00), /* Power Reduction Data FIFO - CLEAR */
    CLK_PRDF_SET_gc   = (0x08), /* Power Reduction Data FIFO - SET */
} CLK_PRDF_t;

/* Power Reduction Support FIFO */
typedef enum CLK_PRSF_enum
{
    CLK_PRSF_CLEAR_gc = (0x00), /* Power Reduction Support FIFO - CLEAR */
    CLK_PRSF_SET_gc   = (0x04), /* Power Reduction Support FIFO - SET */
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

/* Sleep Mode Select */
typedef enum CLK_SM_enum
{
    CLK_SM_IDLE_gc     = (0x00<<1), /* Idle */
    CLK_SM_PDOWN_gc    = (0x01<<1), /* Power Down */
    CLK_SM_VAL_0x02_gc = (0x02<<1), /* Reserved */
    CLK_SM_POFF_gc     = (0x03<<1), /* Power Off */
} CLK_SM_t;

/* Sleep Mode Enable */
typedef enum CLK_SE_enum
{
    CLK_SE_CLEAR_gc = (0x00), /* Sleep Mode Enable - CLEAR */
    CLK_SE_SET_gc   = (0x01), /* Sleep Mode Enable - SET */
} CLK_SE_t;

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
    register8_t DWDR;         /* Debug Wire Data Register */
    register8_t rsv_0x52[5];  /* RESERVED REGISTER BLOCK */
    register8_t SPMCSR;       /* Store Program Memory Control and Status Register */
    register8_t rsv_0x58[5];  /* RESERVED REGISTER BLOCK */
    _REGISTER16 (SP);         /* Stack Pointer */
    register8_t rsv_0x5E;     /* RESERVED REGISTER */
    register8_t SREG;         /* Status Register */
} CPU_t;


/* Port B7 High Side Driver Enable */
typedef enum CPU_PB7HS_enum
{
    CPU_PB7HS_CLEAR_gc = (0x00), /* Port B7 High Side Driver Enable - CLEAR */
    CPU_PB7HS_SET_gc   = (0x80), /* Port B7 High Side Driver Enable - SET */
} CPU_PB7HS_t;

/* Port B7 Low Side Driver Enable */
typedef enum CPU_PB7LS_enum
{
    CPU_PB7LS_CLEAR_gc = (0x00), /* Port B7 Low Side Driver Enable - CLEAR */
    CPU_PB7LS_SET_gc   = (0x40), /* Port B7 Low Side Driver Enable - SET */
} CPU_PB7LS_t;

/* Port B4 High Side Driver Enable */
typedef enum CPU_PB4HS_enum
{
    CPU_PB4HS_CLEAR_gc = (0x00), /* Port B4 High Side Driver Enable - CLEAR */
    CPU_PB4HS_SET_gc   = (0x20), /* Port B4 High Side Driver Enable - SET */
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

/* DebugWire Reset Flag */
typedef enum CPU_DWRF_enum
{
    CPU_DWRF_CLEAR_gc = (0x00), /* DebugWire Reset Flag - CLEAR */
    CPU_DWRF_SET_gc   = (0x10), /* DebugWire Reset Flag - SET */
} CPU_DWRF_t;

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

/* Power-On Reset Flag */
typedef enum CPU_PORF_enum
{
    CPU_PORF_CLEAR_gc = (0x00), /* Power-On Reset Flag - CLEAR */
    CPU_PORF_SET_gc   = (0x01), /* Power-On Reset Flag - SET */
} CPU_PORF_t;

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

/*
--------------------------------------------------------------------------------
CRC - 
--------------------------------------------------------------------------------
*/

typedef struct CRC_struct
{
    register8_t rsv_0x00[73];  /* RESERVED REGISTER BLOCK */
    register8_t CRCDIR;        /* CRC Data Input Register */
    register8_t rsv_0x4A[266]; /* RESERVED REGISTER BLOCK */
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
DEMOD - 
--------------------------------------------------------------------------------
*/

typedef struct DEMOD_struct
{
    register8_t rsv_0x00[157]; /* RESERVED REGISTER BLOCK */
    register8_t SYCB;          /* Symbol Check Configuration Path B */
    register8_t SYCA;          /* Symbol Check Configuration Path A */
    register8_t RXFOB;         /* Received Frequency Offset vs Intermediate Frequency Path B */
    register8_t RXFOA;         /* Received Frequency Offset vs Intermediate Frequency Path A */
    register8_t DMPATB;        /* Demodulator Signal Check Pattern Path B */
    register8_t DMPATA;        /* Demodulator Signal Check Pattern Path A */
    register8_t DMPC;          /* Demodulator Pattern Check Control */
    register8_t DMPCB;         /* Demodulator Pattern Check Control Path B */
    register8_t DMPCA;         /* Demodulator Pattern Check Control Path A */
    register8_t DMSRB;         /* Demodulator Symbol Rate Path B */
    register8_t DMSRA;         /* Demodulator Symbol Rate Path A */
    register8_t DMMB;          /* Demodulator Mode Path B */
    register8_t DMMA;          /* Demodulator Mode Path A */
    register8_t DMCDB;         /* Demodulator Carrier Detect Path B */
    register8_t DMCDA;         /* Demodulator Carrier Detect Path A */
    register8_t DMCRB;         /* Demodulator Control Path B */
    register8_t DMCRA;         /* Demodulator Control Path A */
    register8_t DMDN;          /* Demodulator Down Sampling */
} DEMOD_t;


/* Demodulator Carrier Detect Time Path A */
#define DEMOD_DMCDA_DMCTA_gc(x) ((x<<5) & 0xE0)

/* Demodulator Carrier Detect Limit Path A */
#define DEMOD_DMCDA_DMCLA_gc(x) (x & 0x1F)

/* Demodulator Carrier Detect Time Path B */
#define DEMOD_DMCDB_DMCTB_gc(x) ((x<<5) & 0xE0)

/* Demodulator Carrier Detect Limit Path B */
#define DEMOD_DMCDB_DMCLB_gc(x) (x & 0x1F)

/* Demodulator Automatic Restart Path A */
typedef enum DEMOD_DMARA_enum
{
    DEMOD_DMARA_CLEAR_gc = (0x00), /* Demodulator Automatic Restart Path A - CLEAR */
    DEMOD_DMARA_SET_gc   = (0x80), /* Demodulator Automatic Restart Path A - SET */
} DEMOD_DMARA_t;

/* Symbol Check with only 1T Path A */
typedef enum DEMOD_SY1TA_enum
{
    DEMOD_SY1TA_CLEAR_gc = (0x00), /* Symbol Check with only 1T Path A - CLEAR */
    DEMOD_SY1TA_SET_gc   = (0x40), /* Symbol Check with only 1T Path A - SET */
} DEMOD_SY1TA_t;

/* Select ASK Demodulation Path A */
typedef enum DEMOD_SASKA_enum
{
    DEMOD_SASKA_CLEAR_gc = (0x00), /* Select ASK Demodulation Path A - CLEAR */
    DEMOD_SASKA_SET_gc   = (0x20), /* Select ASK Demodulation Path A - SET */
} DEMOD_SASKA_t;

/* Demodulator PLL Loop Gain Path A */
#define DEMOD_DMCRA_DMPGA_gc(x) (x & 0x1F)

/* Demodulator Automatic Restart Path B */
typedef enum DEMOD_DMARB_enum
{
    DEMOD_DMARB_CLEAR_gc = (0x00), /* Demodulator Automatic Restart Path B - CLEAR */
    DEMOD_DMARB_SET_gc   = (0x80), /* Demodulator Automatic Restart Path B - SET */
} DEMOD_DMARB_t;

/* Symbol Check with only 1T Path B */
typedef enum DEMOD_SY1TB_enum
{
    DEMOD_SY1TB_CLEAR_gc = (0x00), /* Symbol Check with only 1T Path B - CLEAR */
    DEMOD_SY1TB_SET_gc   = (0x40), /* Symbol Check with only 1T Path B - SET */
} DEMOD_SY1TB_t;

/* Select ASK Demodulation Path B */
typedef enum DEMOD_SASKB_enum
{
    DEMOD_SASKB_CLEAR_gc = (0x00), /* Select ASK Demodulation Path B - CLEAR */
    DEMOD_SASKB_SET_gc   = (0x20), /* Select ASK Demodulation Path B - SET */
} DEMOD_SASKB_t;

/* Demodulator PLL Loop Gain Path B */
#define DEMOD_DMCRB_DMPGB_gc(x) (x & 0x1F)

/* Demodulator Down-sampling Path B */
#define DEMOD_DMDN_DMDNB_gc(x) ((x<<4) & 0xF0)

/* Demodulator Down-sampling Path A */
#define DEMOD_DMDN_DMDNA_gc(x) (x & 0x0F)

/* Demodulator NRZ Enable Path A */
typedef enum DEMOD_DMNEA_enum
{
    DEMOD_DMNEA_CLEAR_gc = (0x00), /* Demodulator NRZ Enable Path A - CLEAR */
    DEMOD_DMNEA_SET_gc   = (0x80), /* Demodulator NRZ Enable Path A - SET */
} DEMOD_DMNEA_t;

/* Demodulator Hold Mode Path A */
typedef enum DEMOD_DMHA_enum
{
    DEMOD_DMHA_CLEAR_gc = (0x00), /* Demodulator Hold Mode Path A - CLEAR */
    DEMOD_DMHA_SET_gc   = (0x40), /* Demodulator Hold Mode Path A - SET */
} DEMOD_DMHA_t;

/* Demodulator Data Polarity Path A */
typedef enum DEMOD_DMPA_enum
{
    DEMOD_DMPA_CLEAR_gc = (0x00), /* Demodulator Data Polarity Path A - CLEAR */
    DEMOD_DMPA_SET_gc   = (0x20), /* Demodulator Data Polarity Path A - SET */
} DEMOD_DMPA_t;

/* Demodulator Amplitude Threshold Path A */
#define DEMOD_DMMA_DMATA_gc(x) (x & 0x1F)

/* Demodulator NRZ Enable Path B */
typedef enum DEMOD_DMNEB_enum
{
    DEMOD_DMNEB_CLEAR_gc = (0x00), /* Demodulator NRZ Enable Path B - CLEAR */
    DEMOD_DMNEB_SET_gc   = (0x80), /* Demodulator NRZ Enable Path B - SET */
} DEMOD_DMNEB_t;

/* Demodulator Hold Mode Path B */
typedef enum DEMOD_DMHB_enum
{
    DEMOD_DMHB_CLEAR_gc = (0x00), /* Demodulator Hold Mode Path B - CLEAR */
    DEMOD_DMHB_SET_gc   = (0x40), /* Demodulator Hold Mode Path B - SET */
} DEMOD_DMHB_t;

/* Demodulator Data Polarity Path B */
typedef enum DEMOD_DMPB_enum
{
    DEMOD_DMPB_CLEAR_gc = (0x00), /* Demodulator Data Polarity Path B - CLEAR */
    DEMOD_DMPB_SET_gc   = (0x20), /* Demodulator Data Polarity Path B - SET */
} DEMOD_DMPB_t;

/* Demodulator Amplitude Threshold Path B */
#define DEMOD_DMMB_DMATB_gc(x) (x & 0x1F)

/* Pattern Check Enable Path B */
typedef enum DEMOD_PCENB_enum
{
    DEMOD_PCENB_CLEAR_gc = (0x00), /* Pattern Check Enable Path B - CLEAR */
    DEMOD_PCENB_SET_gc   = (0x80), /* Pattern Check Enable Path B - SET */
} DEMOD_PCENB_t;

/* Pattern Check Signal Path B */
typedef enum DEMOD_PCSIGB_enum
{
    DEMOD_PCSIGB_CLEAR_gc = (0x00), /* Pattern Check Signal Path B - CLEAR */
    DEMOD_PCSIGB_SET_gc   = (0x40), /* Pattern Check Signal Path B - SET */
} DEMOD_PCSIGB_t;

/* Pattern Check Ignore Amplitude Low Path B */
typedef enum DEMOD_PCIALB_enum
{
    DEMOD_PCIALB_CLEAR_gc = (0x00), /* Pattern Check Ignore Amplitude Low Path B - CLEAR */
    DEMOD_PCIALB_SET_gc   = (0x20), /* Pattern Check Ignore Amplitude Low Path B - SET */
} DEMOD_PCIALB_t;

/* Pattern Check Frequency Tracking Disable Path B */
typedef enum DEMOD_PCFTDB_enum
{
    DEMOD_PCFTDB_CLEAR_gc = (0x00), /* Pattern Check Frequency Tracking Disable Path B - CLEAR */
    DEMOD_PCFTDB_SET_gc   = (0x10), /* Pattern Check Frequency Tracking Disable Path B - SET */
} DEMOD_PCFTDB_t;

/* Pattern Check Enable Path A */
typedef enum DEMOD_PCENA_enum
{
    DEMOD_PCENA_CLEAR_gc = (0x00), /* Pattern Check Enable Path A - CLEAR */
    DEMOD_PCENA_SET_gc   = (0x08), /* Pattern Check Enable Path A - SET */
} DEMOD_PCENA_t;

/* Pattern Check Signal Path A */
typedef enum DEMOD_PCSIGA_enum
{
    DEMOD_PCSIGA_CLEAR_gc = (0x00), /* Pattern Check Signal Path A - CLEAR */
    DEMOD_PCSIGA_SET_gc   = (0x04), /* Pattern Check Signal Path A - SET */
} DEMOD_PCSIGA_t;

/* Pattern Check Ignore Amplitude Low Path A */
typedef enum DEMOD_PCIALA_enum
{
    DEMOD_PCIALA_CLEAR_gc = (0x00), /* Pattern Check Ignore Amplitude Low Path A - CLEAR */
    DEMOD_PCIALA_SET_gc   = (0x02), /* Pattern Check Ignore Amplitude Low Path A - SET */
} DEMOD_PCIALA_t;

/* Pattern Check Frequency Tracking Disable Path A */
typedef enum DEMOD_PCFTDA_enum
{
    DEMOD_PCFTDA_CLEAR_gc = (0x00), /* Pattern Check Frequency Tracking Disable Path A - CLEAR */
    DEMOD_PCFTDA_SET_gc   = (0x01), /* Pattern Check Frequency Tracking Disable Path A - SET */
} DEMOD_PCFTDA_t;

/* Pattern Select Path A */
typedef enum DEMOD_PSELA_enum
{
    DEMOD_PSELA_VAL_0x00_gc = (0x00<<6), /* 1T alternating (0x55 0xAA) */
    DEMOD_PSELA_VAL_0x01_gc = (0x01<<6), /* 2T alternating (0x33 0xCC) */
    DEMOD_PSELA_VAL_0x02_gc = (0x02<<6), /* DMPATx defined */
    DEMOD_PSELA_VAL_0x03_gc = (0x03<<6), /* Manchester conformal */
} DEMOD_PSELA_t;

/* Pattern Check Length Path A */
#define DEMOD_DMPCA_PCLENA_gc(x) ((x<<3) & 0x38)

/* Pattern Check Severity Path A */
typedef enum DEMOD_PCSEVA_enum
{
    DEMOD_PCSEVA_VAL_0x00_gc = (0x00), /* 12.5% */
    DEMOD_PCSEVA_VAL_0x01_gc = (0x01), /* 25% */
    DEMOD_PCSEVA_VAL_0x02_gc = (0x02), /* 37.5% */
    DEMOD_PCSEVA_VAL_0x03_gc = (0x03), /* 50% */
    DEMOD_PCSEVA_VAL_0x04_gc = (0x04), /* 62.5% */
    DEMOD_PCSEVA_VAL_0x05_gc = (0x05), /* 75% */
    DEMOD_PCSEVA_VAL_0x06_gc = (0x06), /* 87.5% */
    DEMOD_PCSEVA_VAL_0x07_gc = (0x07), /* 100% */
} DEMOD_PCSEVA_t;

/* Pattern Select Path B */
typedef enum DEMOD_PSELB_enum
{
    DEMOD_PSELB_VAL_0x00_gc = (0x00<<6), /* 1T alternating (0x55 0xAA) */
    DEMOD_PSELB_VAL_0x01_gc = (0x01<<6), /* 2T alternating (0x33 0xCC) */
    DEMOD_PSELB_VAL_0x02_gc = (0x02<<6), /* DMPATx defined */
    DEMOD_PSELB_VAL_0x03_gc = (0x03<<6), /* Manchester conformal */
} DEMOD_PSELB_t;

/* Pattern Check Length Path B */
#define DEMOD_DMPCB_PCLENB_gc(x) ((x<<3) & 0x38)

/* Pattern Check Severity Path B */
typedef enum DEMOD_PCSEVB_enum
{
    DEMOD_PCSEVB_VAL_0x00_gc = (0x00), /* 12.5% */
    DEMOD_PCSEVB_VAL_0x01_gc = (0x01), /* 25% */
    DEMOD_PCSEVB_VAL_0x02_gc = (0x02), /* 37.5% */
    DEMOD_PCSEVB_VAL_0x03_gc = (0x03), /* 50% */
    DEMOD_PCSEVB_VAL_0x04_gc = (0x04), /* 62.5% */
    DEMOD_PCSEVB_VAL_0x05_gc = (0x05), /* 75% */
    DEMOD_PCSEVB_VAL_0x06_gc = (0x06), /* 87.5% */
    DEMOD_PCSEVB_VAL_0x07_gc = (0x07), /* 100% */
} DEMOD_PCSEVB_t;

/* Symbol Timing Limit Path A */
#define DEMOD_SYCA_SYTLA_gc(x) ((x<<4) & 0xF0)

/* Symbol Check Size Path A */
#define DEMOD_SYCA_SYCSA_gc(x) (x & 0x0F)

/* Symbol Timing Limit Path B */
#define DEMOD_SYCB_SYTLB_gc(x) ((x<<4) & 0xF0)

/* Symbol Check Size Path B */
#define DEMOD_SYCB_SYCSB_gc(x) (x & 0x0F)

/*
--------------------------------------------------------------------------------
DFIFO - 
--------------------------------------------------------------------------------
*/

typedef struct DFIFO_struct
{
    register8_t rsv_0x00[223]; /* RESERVED REGISTER BLOCK */
    register8_t DFS;           /* Data FIFO Status */
    _REGISTER16 (DFTL);        /* Data FIFO Telegram Length */
    register8_t rsv_0xE1;      /* RESERVED REGISTER */
    register8_t DFL;           /* Data FIFO Fill Level */
    register8_t DFWP;          /* Data FIFO Write Pointer */
    register8_t DFRP;          /* Data FIFO Read Pointer */
    register8_t DFD;           /* Data FIFO Data */
    register8_t DFI;           /* Data FIFO Interrupt Mask */
    register8_t DFC;           /* Data FIFO Configuration */
} DFIFO_t;


/* Data FIFO Direct Read Access Operational Mode */
typedef enum DFIFO_DFDRA_enum
{
    DFIFO_DFDRA_CLEAR_gc = (0x00), /* Data FIFO Direct Read Access Operational Mode - CLEAR */
    DFIFO_DFDRA_SET_gc   = (0x80), /* Data FIFO Direct Read Access Operational Mode - SET */
} DFIFO_DFDRA_t;

/* Data FIFO Fill Level Configuration */
#define DFIFO_DFC_DFFLC_gc(x) (x & 0x3F)

/* Data FIFO Error Interrupt Mask */
typedef enum DFIFO_DFERIM_enum
{
    DFIFO_DFERIM_CLEAR_gc = (0x00), /* Data FIFO Error Interrupt Mask - CLEAR */
    DFIFO_DFERIM_SET_gc   = (0x02), /* Data FIFO Error Interrupt Mask - SET */
} DFIFO_DFERIM_t;

/* Data FIFO Fill Level Interrupt Mask */
typedef enum DFIFO_DFFLIM_enum
{
    DFIFO_DFFLIM_CLEAR_gc = (0x00), /* Data FIFO Fill Level Interrupt Mask - CLEAR */
    DFIFO_DFFLIM_SET_gc   = (0x01), /* Data FIFO Fill Level Interrupt Mask - SET */
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

/* Data FIFO Fill Level Reached Status Flag */
typedef enum DFIFO_DFFLRF_enum
{
    DFIFO_DFFLRF_CLEAR_gc = (0x00), /* Data FIFO Fill Level Reached Status Flag - CLEAR */
    DFIFO_DFFLRF_SET_gc   = (0x01), /* Data FIFO Fill Level Reached Status Flag - SET */
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
    register8_t EEPR;          /* EEPROM Protect Register */
    register8_t rsv_0x44[292]; /* RESERVED REGISTER BLOCK */
    register8_t EECR2;         /* EEPROM Control Register 2 */
    register8_t PGMST;         /* Program Memory Status Register */
    register8_t EEST;          /* EEPROM Status Register */
} EEPROM_t;


/* Non-Volatile Memory Busy */
typedef enum EEPROM_NVMBSY_enum
{
    EEPROM_NVMBSY_CLEAR_gc = (0x00), /* Non-Volatile Memory Busy - CLEAR */
    EEPROM_NVMBSY_SET_gc   = (0x80), /* Non-Volatile Memory Busy - SET */
} EEPROM_NVMBSY_t;

/* EEPROM Page Access */
typedef enum EEPROM_EEPAGE_enum
{
    EEPROM_EEPAGE_CLEAR_gc = (0x00), /* EEPROM Page Access - CLEAR */
    EEPROM_EEPAGE_SET_gc   = (0x40), /* EEPROM Page Access - SET */
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

/* EEPROM Error Correction Flag */
typedef enum EEPROM_EECF_enum
{
    EEPROM_EECF_CLEAR_gc = (0x00), /* EEPROM Error Correction Flag - CLEAR */
    EEPROM_EECF_SET_gc   = (0x80), /* EEPROM Error Correction Flag - SET */
} EEPROM_EECF_t;

/* EEPROM Error Fault Flag */
typedef enum EEPROM_EEFF_enum
{
    EEPROM_EEFF_CLEAR_gc = (0x00), /* EEPROM Error Fault Flag - CLEAR */
    EEPROM_EEFF_SET_gc   = (0x40), /* EEPROM Error Fault Flag - SET */
} EEPROM_EEFF_t;

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
    register8_t FESR;          /* RF Front End Status Register */
    register8_t FEEN1;         /* RF Front End Enable 1 */
    register8_t FEEN2;         /* RF Front End Enable 2 */
    register8_t FELNA;         /* RF Front End LNA Bias */
    register8_t FEAS;          /* RF Front End Antenna Switch */
    register8_t FEPAC;         /* RF Front End Power Amplifier Control */
    register8_t FEVCT;         /* RF Front End VCO Tuning */
    register8_t FEBT;          /* RF Front End RC Tuning */
    register8_t FEMS;          /* RF Front End Main and Swallow Counter */
    register8_t FETN4;         /* RF Front End RC Tuning 4bit Register */
    register8_t FECR;          /* RF Front End Control Register */
    register8_t FEVCO;         /* RF Front End VCO and PLL Control */
    register8_t FEBIA;         /* RF Front End Amplifier Bias */
    register8_t SPARE1;        /* RF Front End Spare Register 1 */
} FE_t;


/* SPDT RF Switch Tx 3 */
typedef enum FE_SDTX3_enum
{
    FE_SDTX3_CLEAR_gc = (0x00), /* SPDT RF Switch Tx 3 - CLEAR */
    FE_SDTX3_SET_gc   = (0x20), /* SPDT RF Switch Tx 3 - SET */
} FE_SDTX3_t;

/* SPDT RF Switch Rx 3 */
typedef enum FE_SDRX3_enum
{
    FE_SDRX3_CLEAR_gc = (0x00), /* SPDT RF Switch Rx 3 - CLEAR */
    FE_SDRX3_SET_gc   = (0x10), /* SPDT RF Switch Rx 3 - SET */
} FE_SDRX3_t;

/* SPDT RF Switch Tx 2 */
typedef enum FE_SDTX2_enum
{
    FE_SDTX2_CLEAR_gc = (0x00), /* SPDT RF Switch Tx 2 - CLEAR */
    FE_SDTX2_SET_gc   = (0x08), /* SPDT RF Switch Tx 2 - SET */
} FE_SDTX2_t;

/* SPDT RF Switch Rx 2 */
typedef enum FE_SDRX2_enum
{
    FE_SDRX2_CLEAR_gc = (0x00), /* SPDT RF Switch Rx 2 - CLEAR */
    FE_SDRX2_SET_gc   = (0x04), /* SPDT RF Switch Rx 2 - SET */
} FE_SDRX2_t;

/* SPDT RF Switch Tx 1 */
typedef enum FE_SDTX1_enum
{
    FE_SDTX1_CLEAR_gc = (0x00), /* SPDT RF Switch Tx 1 - CLEAR */
    FE_SDTX1_SET_gc   = (0x02), /* SPDT RF Switch Tx 1 - SET */
} FE_SDTX1_t;

/* SPDT RF Switch Rx 1 */
typedef enum FE_SDRX1_enum
{
    FE_SDRX1_CLEAR_gc = (0x00), /* SPDT RF Switch Rx 1 - CLEAR */
    FE_SDRX1_SET_gc   = (0x01), /* SPDT RF Switch Rx 1 - SET */
} FE_SDRX1_t;

/* IF Amplifier Enable */
typedef enum FE_IFAEN_enum
{
    FE_IFAEN_CLEAR_gc = (0x00), /* IF Amplifier Enable - CLEAR */
    FE_IFAEN_SET_gc   = (0x80), /* IF Amplifier Enable - SET */
} FE_IFAEN_t;

/* High Sensitivity Enable */
typedef enum FE_HISEN_enum
{
    FE_HISEN_CLEAR_gc = (0x00), /* High Sensitivity Enable - CLEAR */
    FE_HISEN_SET_gc   = (0x40), /* High Sensitivity Enable - SET */
} FE_HISEN_t;

/* 2 Bit Resistor Tuning */
#define FE_FEBT_RTN2_gc(x) ((x<<2) & 0x0C)

/* 2 Bit Capacitor Tuning */
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

/* Select 433MHz Not 315MHz Band */
typedef enum FE_S4N3_enum
{
    FE_S4N3_CLEAR_gc = (0x00), /* Select 433MHz Not 315MHz Band - CLEAR */
    FE_S4N3_SET_gc   = (0x02), /* Select 433MHz Not 315MHz Band - SET */
} FE_S4N3_t;

/* Low-Band Not High-Band */
typedef enum FE_LBNHB_enum
{
    FE_LBNHB_CLEAR_gc = (0x00), /* Low-Band Not High-Band - CLEAR */
    FE_LBNHB_SET_gc   = (0x01), /* Low-Band Not High-Band - SET */
} FE_LBNHB_t;

/* PLL Speedup 1 */
typedef enum FE_PLSP1_enum
{
    FE_PLSP1_CLEAR_gc = (0x00), /* PLL Speedup 1 - CLEAR */
    FE_PLSP1_SET_gc   = (0x40), /* PLL Speedup 1 - SET */
} FE_PLSP1_t;

/* ADC Clock Enable */
typedef enum FE_ADCLK_enum
{
    FE_ADCLK_CLEAR_gc = (0x00), /* ADC Clock Enable - CLEAR */
    FE_ADCLK_SET_gc   = (0x20), /* ADC Clock Enable - SET */
} FE_ADCLK_t;

/* Analog Digital Converter Enable */
typedef enum FE_ADEN_enum
{
    FE_ADEN_CLEAR_gc = (0x00), /* Analog Digital Converter Enable - CLEAR */
    FE_ADEN_SET_gc   = (0x10), /* Analog Digital Converter Enable - SET */
} FE_ADEN_t;

/* Low Noise Amplifier Enable */
typedef enum FE_LNAEN_enum
{
    FE_LNAEN_CLEAR_gc = (0x00), /* Low Noise Amplifier Enable - CLEAR */
    FE_LNAEN_SET_gc   = (0x08), /* Low Noise Amplifier Enable - SET */
} FE_LNAEN_t;

/* Crystal Oscillator Enable */
typedef enum FE_XTOEN_enum
{
    FE_XTOEN_CLEAR_gc = (0x00), /* Crystal Oscillator Enable - CLEAR */
    FE_XTOEN_SET_gc   = (0x04), /* Crystal Oscillator Enable - SET */
} FE_XTOEN_t;

/* PLL Calibration Mode */
typedef enum FE_PLCAL_enum
{
    FE_PLCAL_CLEAR_gc = (0x00), /* PLL Calibration Mode - CLEAR */
    FE_PLCAL_SET_gc   = (0x02), /* PLL Calibration Mode - SET */
} FE_PLCAL_t;

/* PLL Enable */
typedef enum FE_PLEN_enum
{
    FE_PLEN_CLEAR_gc = (0x00), /* PLL Enable - CLEAR */
    FE_PLEN_SET_gc   = (0x01), /* PLL Enable - SET */
} FE_PLEN_t;

/* XTO External Clock */
typedef enum FE_XTOEXT_enum
{
    FE_XTOEXT_CLEAR_gc = (0x00), /* XTO External Clock - CLEAR */
    FE_XTOEXT_SET_gc   = (0x80), /* XTO External Clock - SET */
} FE_XTOEXT_t;

/* XTO Voltage Pump Enable */
typedef enum FE_XTPEN_enum
{
    FE_XTPEN_CLEAR_gc = (0x00), /* XTO Voltage Pump Enable - CLEAR */
    FE_XTPEN_SET_gc   = (0x20), /* XTO Voltage Pump Enable - SET */
} FE_XTPEN_t;

/* PLL Post Enable */
typedef enum FE_PLPEN_enum
{
    FE_PLPEN_CLEAR_gc = (0x00), /* PLL Post Enable - CLEAR */
    FE_PLPEN_SET_gc   = (0x10), /* PLL Post Enable - SET */
} FE_PLPEN_t;

/* Temperature Measurement */
typedef enum FE_TMPM_enum
{
    FE_TMPM_CLEAR_gc = (0x00), /* Temperature Measurement - CLEAR */
    FE_TMPM_SET_gc   = (0x08), /* Temperature Measurement - SET */
} FE_TMPM_t;

/* Power Amplifier Enable */
typedef enum FE_PAEN_enum
{
    FE_PAEN_CLEAR_gc = (0x00), /* Power Amplifier Enable - CLEAR */
    FE_PAEN_SET_gc   = (0x04), /* Power Amplifier Enable - SET */
} FE_PAEN_t;

/* LNA Bias High Sense Mode */
#define FE_FELNA_LNABH_gc(x) ((x<<4) & 0xF0)

/* LNA Bias Normal Sense Mode */
#define FE_FELNA_LNABN_gc(x) (x & 0x0F)

/* PLL Main */
#define FE_FEMS_PLLM_gc(x) ((x<<4) & 0xF0)

/* PLL Swallow */
#define FE_FEMS_PLLS_gc(x) (x & 0x0F)

/* RF Front End Power Amplifier Control */
typedef enum FE_FEPAC_enum
{
    FE_FEPAC_VAL_0x00_gc = (0x00), /* -11.80  -12.90 */
    FE_FEPAC_VAL_0x01_gc = (0x01), /* -11.30  -12.33 */
    FE_FEPAC_VAL_0x02_gc = (0x02), /* -10.70  -11.76 */
    FE_FEPAC_VAL_0x03_gc = (0x03), /* -10.20  -11.10 */
    FE_FEPAC_VAL_0x04_gc = (0x04), /*  -9.70  -10.60 */
    FE_FEPAC_VAL_0x05_gc = (0x05), /*  -9.20  -10.00 */
    FE_FEPAC_VAL_0x06_gc = (0x06), /*  -8.60   -9.50 */
    FE_FEPAC_VAL_0x07_gc = (0x07), /*  -8.00   -9.00 */
    FE_FEPAC_VAL_0x08_gc = (0x08), /*  -7.50   -8.50 */
    FE_FEPAC_VAL_0x09_gc = (0x09), /*  -7.00   -7.90 */
    FE_FEPAC_VAL_0x0A_gc = (0x0A), /*  -6.40   -7.30 */
    FE_FEPAC_VAL_0x0B_gc = (0x0B), /*  -5.90   -6.80 */
    FE_FEPAC_VAL_0x0C_gc = (0x0C), /*  -5.30   -6.30 */
    FE_FEPAC_VAL_0x0D_gc = (0x0D), /*  -4.77   -5.70 */
    FE_FEPAC_VAL_0x0E_gc = (0x0E), /*  -4.17   -5.20 */
    FE_FEPAC_VAL_0x0F_gc = (0x0F), /*  -3.67   -4.60 */
    FE_FEPAC_VAL_0x10_gc = (0x10), /*  -3.12   -4.07 */
    FE_FEPAC_VAL_0x11_gc = (0x11), /*  -2.56   -3.47 */
    FE_FEPAC_VAL_0x12_gc = (0x12), /*  -2.10   -2.97 */
    FE_FEPAC_VAL_0x13_gc = (0x13), /*  -1.58   -2.42 */
    FE_FEPAC_VAL_0x14_gc = (0x14), /*  -1.08   -1.86 */
    FE_FEPAC_VAL_0x15_gc = (0x15), /*  -0.50   -1.40 */
    FE_FEPAC_VAL_0x16_gc = (0x16), /*   0.00   -0.88 */
    FE_FEPAC_VAL_0x17_gc = (0x17), /*   0.41   -0.38 */
    FE_FEPAC_VAL_0x18_gc = (0x18), /*   1.00    0.20  */
    FE_FEPAC_VAL_0x19_gc = (0x19), /*   1.42    0.70  */
    FE_FEPAC_VAL_0x1A_gc = (0x1A), /*   1.83    1.11  */
    FE_FEPAC_VAL_0x1B_gc = (0x1B), /*   2.42    1.70  */
    FE_FEPAC_VAL_0x1C_gc = (0x1C), /*   2.88    2.12  */
    FE_FEPAC_VAL_0x1D_gc = (0x1D), /*   3.38    2.53  */
    FE_FEPAC_VAL_0x1E_gc = (0x1E), /*   3.81    3.12  */
    FE_FEPAC_VAL_0x1F_gc = (0x1F), /*   4.31    3.58  */
    FE_FEPAC_VAL_0x20_gc = (0x20), /*   4.72    4.08  */
    FE_FEPAC_VAL_0x21_gc = (0x21), /*   5.09    4.51  */
    FE_FEPAC_VAL_0x22_gc = (0x22), /*   5.57    5.01  */
    FE_FEPAC_VAL_0x23_gc = (0x23), /*   6.00    5.42  */
    FE_FEPAC_VAL_0x24_gc = (0x24), /*   6.41    5.79  */
    FE_FEPAC_VAL_0x25_gc = (0x25), /*   6.77    6.27  */
    FE_FEPAC_VAL_0x26_gc = (0x26), /*   7.19    6.70  */
    FE_FEPAC_VAL_0x27_gc = (0x27), /*   7.55    7.11  */
    FE_FEPAC_VAL_0x28_gc = (0x28), /*   7.98    7.47  */
    FE_FEPAC_VAL_0x29_gc = (0x29), /*   8.40    7.89  */
    FE_FEPAC_VAL_0x2A_gc = (0x2A), /*   8.79    8.25  */
    FE_FEPAC_VAL_0x2B_gc = (0x2B), /*   9.11    8.68  */
    FE_FEPAC_VAL_0x2C_gc = (0x2C), /*   9.46    9.10  */
    FE_FEPAC_VAL_0x2D_gc = (0x2D), /*   9.82    9.49  */
    FE_FEPAC_VAL_0x2E_gc = (0x2E), /*  10.18    9.81  */
    FE_FEPAC_VAL_0x2F_gc = (0x2F), /*  10.60   10.16 */
    FE_FEPAC_VAL_0x30_gc = (0x30), /*  10.89   10.52 */
    FE_FEPAC_VAL_0x31_gc = (0x31), /*  11.30   10.88 */
    FE_FEPAC_VAL_0x32_gc = (0x32), /*  11.62   11.30 */
    FE_FEPAC_VAL_0x33_gc = (0x33), /*  12.06   11.59 */
    FE_FEPAC_VAL_0x34_gc = (0x34), /*  12.39   12.00 */
    FE_FEPAC_VAL_0x35_gc = (0x35), /*  12.82   12.32 */
    FE_FEPAC_VAL_0x36_gc = (0x36), /*  13.22   12.76 */
    FE_FEPAC_VAL_0x37_gc = (0x37), /*  13.58   13.09 */
    FE_FEPAC_VAL_0x38_gc = (0x38), /*  13.95   13.52 */
    FE_FEPAC_VAL_0x39_gc = (0x39), /*  14.22   13.92 */
    FE_FEPAC_VAL_0x3A_gc = (0x3A), /*  14.41   14.28 */
    FE_FEPAC_VAL_0x3B_gc = (0x3B), /*  14.49   14.65 */
    FE_FEPAC_VAL_0x3C_gc = (0x3C), /*  14.60   14.65 */
    FE_FEPAC_VAL_0x3D_gc = (0x3D), /*  14.60   14.65 */
    FE_FEPAC_VAL_0x3E_gc = (0x3E), /*  14.60   14.65 */
    FE_FEPAC_VAL_0x3F_gc = (0x3F), /*  14.60   14.65 */
} FE_FEPAC_t;

/* PLL Locked */
typedef enum FE_PLCK_enum
{
    FE_PLCK_CLEAR_gc = (0x00), /* PLL Locked - CLEAR */
    FE_PLCK_SET_gc   = (0x08), /* PLL Locked - SET */
} FE_PLCK_t;

/* XTO Ready */
typedef enum FE_XRDY_enum
{
    FE_XRDY_CLEAR_gc = (0x00), /* XTO Ready - CLEAR */
    FE_XRDY_SET_gc   = (0x04), /* XTO Ready - SET */
} FE_XRDY_t;

/* LNA Saturated */
typedef enum FE_SAT_enum
{
    FE_SAT_CLEAR_gc = (0x00), /* LNA Saturated - CLEAR */
    FE_SAT_SET_gc   = (0x01), /* LNA Saturated - SET */
} FE_SAT_t;

/* 4 Bit Resistor Tuning */
#define FE_FETN4_RTN4_gc(x) ((x<<4) & 0xF0)

/* 4 Bit Capacitor Tuning */
#define FE_FETN4_CTN4_gc(x) (x & 0x0F)

/* VCO Bias */
#define FE_FEVCO_VCOB_gc(x) ((x<<4) & 0xF0)

/* Charge Pump Current Control */
#define FE_FEVCO_CPCC_gc(x) (x & 0x0F)

/*
--------------------------------------------------------------------------------
FREQS - 
--------------------------------------------------------------------------------
*/

typedef struct FREQS_struct
{
    register8_t rsv_0x00[43]; /* RESERVED REGISTER BLOCK */
    register8_t FSCR;         /* Frequency Synthesizer Control Register */
    register8_t rsv_0x2C[52]; /* RESERVED REGISTER BLOCK */
    register8_t FSEN;         /* Frequency Synthesizer Enable */
    register8_t FSFCR;        /* Frequency Synthesizer Filter Control Register */
    _REGISTER16 (GACDIV);     /* Gauss Clock Divider */
    register8_t rsv_0x63;     /* RESERVED REGISTER */
    register8_t FFREQ1L;      /* Fractional Frequency 1 Low Byte */
    register8_t FFREQ1M;      /* Fractional Frequency 1 Middle Byte */
    register8_t FFREQ1H;      /* Fractional Frequency 1 High Byte */
    register8_t FFREQ2L;      /* Fractional Frequency 2 Low Byte */
    register8_t FFREQ2M;      /* Fractional Frequency 2 Middle Byte */
    register8_t FFREQ2H;      /* Fractional Frequency 2 High Byte */
} FREQS_t;


/* Power Amplifier Output is On */
typedef enum FREQS_PAON_enum
{
    FREQS_PAON_CLEAR_gc = (0x00), /* Power Amplifier Output is On - CLEAR */
    FREQS_PAON_SET_gc   = (0x80), /* Power Amplifier Output is On - SET */
} FREQS_PAON_t;

/* Power Amplifier Output Enable Register */
typedef enum FREQS_PAOER_enum
{
    FREQS_PAOER_CLEAR_gc = (0x00), /* Power Amplifier Output Enable Register - CLEAR */
    FREQS_PAOER_SET_gc   = (0x10), /* Power Amplifier Output Enable Register - SET */
} FREQS_PAOER_t;

/* Tx Modulation Source */
typedef enum FREQS_TXMS_enum
{
    FREQS_TXMS_VAL_0x00_gc = (0x00<<2), /* TXMOD Register */
    FREQS_TXMS_VAL_0x01_gc = (0x01<<2), /* TMDI Input */
    FREQS_TXMS_VAL_0x02_gc = (0x02<<2), /* Tx Modulator Serial Out */
} FREQS_TXMS_t;

/* Select FSK Modulation */
typedef enum FREQS_SFM_enum
{
    FREQS_SFM_CLEAR_gc = (0x00), /* Select FSK Modulation - CLEAR */
    FREQS_SFM_SET_gc   = (0x02), /* Select FSK Modulation - SET */
} FREQS_SFM_t;

/* Tx Modulation */
typedef enum FREQS_TXMOD_enum
{
    FREQS_TXMOD_CLEAR_gc = (0x00), /* Tx Modulation - CLEAR */
    FREQS_TXMOD_SET_gc   = (0x01), /* Tx Modulation - SET */
} FREQS_TXMOD_t;

/* ASK Shaping Enable */
typedef enum FREQS_ASEN_enum
{
    FREQS_ASEN_CLEAR_gc = (0x00), /* ASK Shaping Enable - CLEAR */
    FREQS_ASEN_SET_gc   = (0x10), /* ASK Shaping Enable - SET */
} FREQS_ASEN_t;

/* Pre-emphasis Filtering Enable */
typedef enum FREQS_PEEN_enum
{
    FREQS_PEEN_CLEAR_gc = (0x00), /* Pre-emphasis Filtering Enable - CLEAR */
    FREQS_PEEN_SET_gc   = (0x08), /* Pre-emphasis Filtering Enable - SET */
} FREQS_PEEN_t;

/* Gauss Filtering Enable */
typedef enum FREQS_GAEN_enum
{
    FREQS_GAEN_CLEAR_gc = (0x00), /* Gauss Filtering Enable - CLEAR */
    FREQS_GAEN_SET_gc   = (0x04), /* Gauss Filtering Enable - SET */
} FREQS_GAEN_t;

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

/* ASK Shaping Divider */
#define FREQS_FSFCR_ASDIV_gc(x) ((x<<4) & 0xF0)

/* Gauss Filter BT Selection */
typedef enum FREQS_BTSEL_enum
{
    FREQS_BTSEL_VAL_0x00_gc = (0x00), /* BT=2 */
    FREQS_BTSEL_VAL_0x01_gc = (0x01), /* BT=1.5 */
    FREQS_BTSEL_VAL_0x02_gc = (0x02), /* BT=1 */
    FREQS_BTSEL_VAL_0x03_gc = (0x03), /* BT=0.5 */
} FREQS_BTSEL_t;

/*
--------------------------------------------------------------------------------
FRSYNC - 
--------------------------------------------------------------------------------
*/

typedef struct FRSYNC_struct
{
    register8_t rsv_0x00[177]; /* RESERVED REGISTER BLOCK */
    register8_t SFIDCB;        /* Start Frame ID Configuration Path B */
    register8_t SFIDLB;        /* Start Frame ID Length Path B */
    register8_t WUPTB;         /* Wake-Up Pattern Threshold Path B */
    register8_t WUPLB;         /* Wake-Up Pattern Length Path B */
    register8_t SFID1B;        /* Start Frame ID Byte 1 Path B */
    register8_t SFID2B;        /* Start Frame ID Byte 2 Path B */
    register8_t SFID3B;        /* Start Frame ID Byte 3 Path B */
    register8_t SFID4B;        /* Start Frame ID Byte 4 Path B */
    register8_t WUP1B;         /* Wake-Up Pattern Byte 1 Path B */
    register8_t WUP2B;         /* Wake-Up Pattern Byte 2 Path B */
    register8_t WUP3B;         /* Wake-Up Pattern Byte 3 Path B */
    register8_t WUP4B;         /* Wake-Up Pattern Byte 4 Path B */
    register8_t SFIDCA;        /* Start Frame ID Configuration Path A */
    register8_t SFIDLA;        /* Start Frame ID Length Path A */
    register8_t WUPTA;         /* Wake-Up Pattern Threshold Path A */
    register8_t WUPLA;         /* Wake-Up Pattern Length Path A */
    register8_t SFID1A;        /* Start Frame ID Byte 1 Path A */
    register8_t SFID2A;        /* Start Frame ID Byte 2 Path A */
    register8_t SFID3A;        /* Start Frame ID Byte 3 Path A */
    register8_t SFID4A;        /* Start Frame ID Byte 4 Path A */
    register8_t WUP1A;         /* Wake-Up Pattern Byte 1 Path A */
    register8_t WUP2A;         /* Wake-Up Pattern Byte 2 Path A */
    register8_t WUP3A;         /* Wake-Up Pattern Byte 3 Path A */
    register8_t WUP4A;         /* Wake-Up Pattern Byte 4 Path A */
} FRSYNC_t;


/* Serial Mode Enable Path A */
typedef enum FRSYNC_SEMEA_enum
{
    FRSYNC_SEMEA_CLEAR_gc = (0x00), /* Serial Mode Enable Path A - CLEAR */
    FRSYNC_SEMEA_SET_gc   = (0x80), /* Serial Mode Enable Path A - SET */
} FRSYNC_SEMEA_t;

/* Start Frame ID Threshold Path A */
#define FRSYNC_SFIDCA_SFIDTA_gc(x) (x & 0x1F)

/* Serial Mode Enable Path B */
typedef enum FRSYNC_SEMEB_enum
{
    FRSYNC_SEMEB_CLEAR_gc = (0x00), /* Serial Mode Enable Path B - CLEAR */
    FRSYNC_SEMEB_SET_gc   = (0x80), /* Serial Mode Enable Path B - SET */
} FRSYNC_SEMEB_t;

/* Start Frame ID Threshold Path B */
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
IDCHK - 
--------------------------------------------------------------------------------
*/

typedef struct IDCHK_struct
{
    register8_t rsv_0x00[342]; /* RESERVED REGISTER BLOCK */
    register8_t IDB0;          /* ID Check Byte 0 */
    register8_t IDB1;          /* ID Check Byte 1 */
    register8_t IDB2;          /* ID Check Byte 2 */
    register8_t IDB3;          /* ID Check Byte 3 */
    register8_t IDC;           /* ID Check Configuration */
    register8_t IDS;           /* ID Check Status */
} IDCHK_t;


/* ID Check Execute */
typedef enum IDCHK_IDCE_enum
{
    IDCHK_IDCE_CLEAR_gc = (0x00), /* ID Check Execute - CLEAR */
    IDCHK_IDCE_SET_gc   = (0x80), /* ID Check Execute - SET */
} IDCHK_IDCE_t;

/* ID Clear */
typedef enum IDCHK_IDCLR_enum
{
    IDCHK_IDCLR_CLEAR_gc = (0x00), /* ID Clear - CLEAR */
    IDCHK_IDCLR_SET_gc   = (0x40), /* ID Clear - SET */
} IDCHK_IDCLR_t;

/* ID Full Interrupt Mask */
typedef enum IDCHK_IDFIM_enum
{
    IDCHK_IDFIM_CLEAR_gc = (0x00), /* ID Full Interrupt Mask - CLEAR */
    IDCHK_IDFIM_SET_gc   = (0x20), /* ID Full Interrupt Mask - SET */
} IDCHK_IDFIM_t;

/* ID Byte Offset */
#define IDCHK_IDC_IDBO_gc(x) ((x<<2) & 0x0C)

/* ID Length */
#define IDCHK_IDC_IDL_gc(x) (x & 0x03)

/* ID Full Flag */
typedef enum IDCHK_IDFULL_enum
{
    IDCHK_IDFULL_CLEAR_gc = (0x00), /* ID Full Flag - CLEAR */
    IDCHK_IDFULL_SET_gc   = (0x02), /* ID Full Flag - SET */
} IDCHK_IDFULL_t;

/* ID Check Ok Flag */
typedef enum IDCHK_IDOK_enum
{
    IDCHK_IDOK_CLEAR_gc = (0x00), /* ID Check Ok Flag - CLEAR */
    IDCHK_IDOK_SET_gc   = (0x01), /* ID Check Ok Flag - SET */
} IDCHK_IDOK_t;

/*
--------------------------------------------------------------------------------
INT - 
--------------------------------------------------------------------------------
*/

typedef struct INT_struct
{
    register8_t rsv_0x00[47]; /* RESERVED REGISTER BLOCK */
    register8_t PCIFR;        /* Pin Change Interrupt Flag Register */
    register8_t rsv_0x30[22]; /* RESERVED REGISTER BLOCK */
    register8_t PCICR;        /* Pin Change Interrupt Control Register */
    register8_t EIMSK;        /* External Interrupt Mask */
    register8_t EIFR;         /* External Interrupt Flag Register */
    register8_t rsv_0x49[34]; /* RESERVED REGISTER BLOCK */
    register8_t EICRA;        /* External Interrupt Control Register A */
    register8_t PCMSK0;       /* Pin Change Mask Register 0 */
    register8_t PCMSK1;       /* Pin Change Mask Register 1 */
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

/*
--------------------------------------------------------------------------------
LIN_UART - 
--------------------------------------------------------------------------------
*/

typedef struct LIN_UART_struct
{
    register8_t rsv_0x00[371]; /* RESERVED REGISTER BLOCK */
    register8_t LINCR;         /* LIN/UART Control Register */
    register8_t LINSIR;        /* LIN Status and Interrupt Register */
    register8_t LINENIR;       /* LIN/UART Enable Interrupt Register */
    register8_t LINERR;        /* LIN/UART Error Register */
    register8_t LINBTR;        /* LIN/UART Bit Timing Register */
    register8_t LINBRRL;       /* LIN/UART Baud Rate Register Low Byte */
    register8_t LINBRRH;       /* LIN/UART Baud Rate Register High Byte */
    register8_t LINDLR;        /* LIN/UART Data Length Register */
    register8_t LINIDR;        /* LIN/UART Identifier Register */
    register8_t LINSEL;        /* LIN/UART Data Buffer Selection */
    register8_t LINDAT;        /* LIN/UART Data Register */
} LIN_UART_t;


/* LIN/UART Disable Bit Timing Resynchronization */
typedef enum LIN_UART_LDISR_enum
{
    LIN_UART_LDISR_CLEAR_gc = (0x00), /* LIN/UART Disable Bit Timing Resynchronization - CLEAR */
    LIN_UART_LDISR_SET_gc   = (0x80), /* LIN/UART Disable Bit Timing Resynchronization - SET */
} LIN_UART_LDISR_t;

/* LIN/UART Bit Timing */
#define LIN_UART_LINBTR_LBT_gc(x) (x & 0x3F)

/* LIN/UART Software Reset */
typedef enum LIN_UART_LSWRES_enum
{
    LIN_UART_LSWRES_CLEAR_gc = (0x00), /* LIN/UART Software Reset - CLEAR */
    LIN_UART_LSWRES_SET_gc   = (0x80), /* LIN/UART Software Reset - SET */
} LIN_UART_LSWRES_t;

/* LIN 1.3 Mode */
typedef enum LIN_UART_LIN13_enum
{
    LIN_UART_LIN13_CLEAR_gc = (0x00), /* LIN 1.3 Mode - CLEAR */
    LIN_UART_LIN13_SET_gc   = (0x40), /* LIN 1.3 Mode - SET */
} LIN_UART_LIN13_t;

/* LIN/UART Configuration */
#define LIN_UART_LINCR_LCONF_gc(x) ((x<<4) & 0x30)

/* LIN/UART Enable */
typedef enum LIN_UART_LENA_enum
{
    LIN_UART_LENA_CLEAR_gc = (0x00), /* LIN/UART Enable - CLEAR */
    LIN_UART_LENA_SET_gc   = (0x08), /* LIN/UART Enable - SET */
} LIN_UART_LENA_t;

/* LIN/UART Command and Mode */
#define LIN_UART_LINCR_LCMD_gc(x) (x & 0x07)

/* LIN Transmit Data Length */
#define LIN_UART_LINDLR_LTXDL_gc(x) ((x<<4) & 0xF0)

/* LIN Receive Data Length */
#define LIN_UART_LINDLR_LRXDL_gc(x) (x & 0x0F)

/* LIN/UART Enable Error Interrupt */
typedef enum LIN_UART_LENERR_enum
{
    LIN_UART_LENERR_CLEAR_gc = (0x00), /* LIN/UART Enable Error Interrupt - CLEAR */
    LIN_UART_LENERR_SET_gc   = (0x08), /* LIN/UART Enable Error Interrupt - SET */
} LIN_UART_LENERR_t;

/* LIN Enable Identifier Ok Interrupt */
typedef enum LIN_UART_LENIDOK_enum
{
    LIN_UART_LENIDOK_CLEAR_gc = (0x00), /* LIN Enable Identifier Ok Interrupt - CLEAR */
    LIN_UART_LENIDOK_SET_gc   = (0x04), /* LIN Enable Identifier Ok Interrupt - SET */
} LIN_UART_LENIDOK_t;

/* LIN/UART Enable Transmit Ok Interrupt */
typedef enum LIN_UART_LENTXOK_enum
{
    LIN_UART_LENTXOK_CLEAR_gc = (0x00), /* LIN/UART Enable Transmit Ok Interrupt - CLEAR */
    LIN_UART_LENTXOK_SET_gc   = (0x02), /* LIN/UART Enable Transmit Ok Interrupt - SET */
} LIN_UART_LENTXOK_t;

/* LIN/UART Enable Receive Ok Interrupt */
typedef enum LIN_UART_LENRXOK_enum
{
    LIN_UART_LENRXOK_CLEAR_gc = (0x00), /* LIN/UART Enable Receive Ok Interrupt - CLEAR */
    LIN_UART_LENRXOK_SET_gc   = (0x01), /* LIN/UART Enable Receive Ok Interrupt - SET */
} LIN_UART_LENRXOK_t;

/* LIN Abort Flag */
typedef enum LIN_UART_LABORT_enum
{
    LIN_UART_LABORT_CLEAR_gc = (0x00), /* LIN Abort Flag - CLEAR */
    LIN_UART_LABORT_SET_gc   = (0x80), /* LIN Abort Flag - SET */
} LIN_UART_LABORT_t;

/* LIN Frame Time Out Error Flag */
typedef enum LIN_UART_LTOERR_enum
{
    LIN_UART_LTOERR_CLEAR_gc = (0x00), /* LIN Frame Time Out Error Flag - CLEAR */
    LIN_UART_LTOERR_SET_gc   = (0x40), /* LIN Frame Time Out Error Flag - SET */
} LIN_UART_LTOERR_t;

/* LIN/UART Overrun Error Flag */
typedef enum LIN_UART_LOVERR_enum
{
    LIN_UART_LOVERR_CLEAR_gc = (0x00), /* LIN/UART Overrun Error Flag - CLEAR */
    LIN_UART_LOVERR_SET_gc   = (0x20), /* LIN/UART Overrun Error Flag - SET */
} LIN_UART_LOVERR_t;

/* LIN/UART Framing Error Flag */
typedef enum LIN_UART_LFERR_enum
{
    LIN_UART_LFERR_CLEAR_gc = (0x00), /* LIN/UART Framing Error Flag - CLEAR */
    LIN_UART_LFERR_SET_gc   = (0x10), /* LIN/UART Framing Error Flag - SET */
} LIN_UART_LFERR_t;

/* LIN Synchronization Error Flag */
typedef enum LIN_UART_LSERR_enum
{
    LIN_UART_LSERR_CLEAR_gc = (0x00), /* LIN Synchronization Error Flag - CLEAR */
    LIN_UART_LSERR_SET_gc   = (0x08), /* LIN Synchronization Error Flag - SET */
} LIN_UART_LSERR_t;

/* LIN Parity Error Flag */
typedef enum LIN_UART_LPERR_enum
{
    LIN_UART_LPERR_CLEAR_gc = (0x00), /* LIN Parity Error Flag - CLEAR */
    LIN_UART_LPERR_SET_gc   = (0x04), /* LIN Parity Error Flag - SET */
} LIN_UART_LPERR_t;

/* LIN Checksum Error Flag */
typedef enum LIN_UART_LCERR_enum
{
    LIN_UART_LCERR_CLEAR_gc = (0x00), /* LIN Checksum Error Flag - CLEAR */
    LIN_UART_LCERR_SET_gc   = (0x02), /* LIN Checksum Error Flag - SET */
} LIN_UART_LCERR_t;

/* LIN Bit Error Flag */
typedef enum LIN_UART_LBERR_enum
{
    LIN_UART_LBERR_CLEAR_gc = (0x00), /* LIN Bit Error Flag - CLEAR */
    LIN_UART_LBERR_SET_gc   = (0x01), /* LIN Bit Error Flag - SET */
} LIN_UART_LBERR_t;

/* LIN Parity */
#define LIN_UART_LINIDR_LP_gc(x) ((x<<6) & 0xC0)

/* LIN Identifier */
#define LIN_UART_LINIDR_LID_gc(x) (x & 0x3F)

/* LIN Auto Increment of Data Buffer Index Disable */
typedef enum LIN_UART_LAINC_enum
{
    LIN_UART_LAINC_CLEAR_gc = (0x00), /* LIN Auto Increment of Data Buffer Index Disable - CLEAR */
    LIN_UART_LAINC_SET_gc   = (0x08), /* LIN Auto Increment of Data Buffer Index Disable - SET */
} LIN_UART_LAINC_t;

/* LIN Data Buffer Index */
#define LIN_UART_LINSEL_LINDX_gc(x) (x & 0x07)

/* LIN Identifier Status */
#define LIN_UART_LINSIR_LIDST_gc(x) ((x<<5) & 0xE0)

/* LIN/UART Busy Flag */
typedef enum LIN_UART_LBUSY_enum
{
    LIN_UART_LBUSY_CLEAR_gc = (0x00), /* LIN/UART Busy Flag - CLEAR */
    LIN_UART_LBUSY_SET_gc   = (0x10), /* LIN/UART Busy Flag - SET */
} LIN_UART_LBUSY_t;

/* LIN/UART Error Flag */
typedef enum LIN_UART_LERR_enum
{
    LIN_UART_LERR_CLEAR_gc = (0x00), /* LIN/UART Error Flag - CLEAR */
    LIN_UART_LERR_SET_gc   = (0x08), /* LIN/UART Error Flag - SET */
} LIN_UART_LERR_t;

/* LIN Identifier Ok Flag */
typedef enum LIN_UART_LIDOK_enum
{
    LIN_UART_LIDOK_CLEAR_gc = (0x00), /* LIN Identifier Ok Flag - CLEAR */
    LIN_UART_LIDOK_SET_gc   = (0x04), /* LIN Identifier Ok Flag - SET */
} LIN_UART_LIDOK_t;

/* LIN/UART Transmit Ok Flag */
typedef enum LIN_UART_LTXOK_enum
{
    LIN_UART_LTXOK_CLEAR_gc = (0x00), /* LIN/UART Transmit Ok Flag - CLEAR */
    LIN_UART_LTXOK_SET_gc   = (0x02), /* LIN/UART Transmit Ok Flag - SET */
} LIN_UART_LTXOK_t;

/* LIN/UART Receive Ok Flag */
typedef enum LIN_UART_LRXOK_enum
{
    LIN_UART_LRXOK_CLEAR_gc = (0x00), /* LIN/UART Receive Ok Flag - CLEAR */
    LIN_UART_LRXOK_SET_gc   = (0x01), /* LIN/UART Receive Ok Flag - SET */
} LIN_UART_LRXOK_t;

/*
--------------------------------------------------------------------------------
OCCOUNT - 
--------------------------------------------------------------------------------
*/

typedef struct OCCOUNT_struct
{
    register8_t rsv_0x00[368]; /* RESERVED REGISTER BLOCK */
    register8_t OCCR;          /* Oscillator Calibration Counter Configuration Register */
    register8_t OCCNT;         /* Oscillator Calibration Counter Value */
    register8_t OCGATE;        /* Oscillator Calibration Counter Gate */
} OCCOUNT_t;


/* Oscillator Calibration Select Target */
typedef enum OCCOUNT_OCSEL_enum
{
    OCCOUNT_OCSEL_CLEAR_gc = (0x00), /* Oscillator Calibration Select Target - CLEAR */
    OCCOUNT_OCSEL_SET_gc   = (0x02), /* Oscillator Calibration Select Target - SET */
} OCCOUNT_OCSEL_t;

/* Oscillator Calibration Counter Enable */
typedef enum OCCOUNT_OCEN_enum
{
    OCCOUNT_OCEN_CLEAR_gc = (0x00), /* Oscillator Calibration Counter Enable - CLEAR */
    OCCOUNT_OCEN_SET_gc   = (0x01), /* Oscillator Calibration Counter Enable - SET */
} OCCOUNT_OCEN_t;

/*
--------------------------------------------------------------------------------
PORTB - 
--------------------------------------------------------------------------------
*/

typedef struct PORTB_struct
{
    register8_t rsv_0x00[37]; /* RESERVED REGISTER BLOCK */
    register8_t PINB;         /* Port B Input Pins */
    register8_t DDRB;         /* Port B Data Direction */
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
    register8_t DDRC;         /* Port C Data Direction */
    register8_t PORTC;        /* Port C Data Register */
} PORTC_t;


/*
--------------------------------------------------------------------------------
PORTS - 
--------------------------------------------------------------------------------
*/

typedef struct PORTS_struct
{
    register8_t rsv_0x00[353]; /* RESERVED REGISTER BLOCK */
    register8_t DBCR;          /* Debounce Control Register */
    register8_t DBTC;          /* Debounce Timer Compare */
    register8_t DBENB;         /* Debounce Enable Port B */
    register8_t DBENC;         /* Debounce Enable Port C */
    register8_t DBGSW;         /* Debug Support Switch */
} PORTS_t;


/* Debounce Timer Mask Select */
typedef enum PORTS_DBTMS_enum
{
    PORTS_DBTMS_CLEAR_gc = (0x00), /* Debounce Timer Mask Select - CLEAR */
    PORTS_DBTMS_SET_gc   = (0x04), /* Debounce Timer Mask Select - SET */
} PORTS_DBTMS_t;

/* Debounce Clock Select */
typedef enum PORTS_DBCS_enum
{
    PORTS_DBCS_CLEAR_gc = (0x00), /* Debounce Clock Select - CLEAR */
    PORTS_DBCS_SET_gc   = (0x02), /* Debounce Clock Select - SET */
} PORTS_DBCS_t;

/* Debounce Mode */
typedef enum PORTS_DBMD_enum
{
    PORTS_DBMD_CLEAR_gc = (0x00), /* Debounce Mode - CLEAR */
    PORTS_DBMD_SET_gc   = (0x01), /* Debounce Mode - SET */
} PORTS_DBMD_t;

/* Debug Support Switch Enable */
typedef enum PORTS_DBGSE_enum
{
    PORTS_DBGSE_CLEAR_gc = (0x00), /* Debug Support Switch Enable - CLEAR */
    PORTS_DBGSE_SET_gc   = (0x80), /* Debug Support Switch Enable - SET */
} PORTS_DBGSE_t;

/* CPU Busy Flag */
typedef enum PORTS_CPBF_enum
{
    PORTS_CPBF_CLEAR_gc = (0x00), /* CPU Busy Flag - CLEAR */
    PORTS_CPBF_SET_gc   = (0x40), /* CPU Busy Flag - SET */
} PORTS_CPBF_t;

/* CPU Busy Flag Output Select */
typedef enum PORTS_CPBFOS_enum
{
    PORTS_CPBFOS_VAL_0x00_gc = (0x00<<4), /* no output */
    PORTS_CPBFOS_VAL_0x01_gc = (0x01<<4), /* PB0 */
    PORTS_CPBFOS_VAL_0x02_gc = (0x02<<4), /* PB4 */
    PORTS_CPBFOS_VAL_0x03_gc = (0x03<<4), /* PC1 */
} PORTS_CPBFOS_t;

/* Debug Support Group Select */
#define PORTS_DBGSW_DBGGS_gc(x) (x & 0x0F)

/*
--------------------------------------------------------------------------------
RSSIB - 
--------------------------------------------------------------------------------
*/

typedef struct RSSIB_struct
{
    register8_t rsv_0x00[348]; /* RESERVED REGISTER BLOCK */
    register8_t RSSAV;         /* RSSI Average Value */
    register8_t RSSPK;         /* RSSI Peak Value */
    register8_t RSSL;          /* RSSI Low Threshold */
    register8_t RSSH;          /* RSSI High Threshold */
    register8_t RSSC;          /* RSSI Configuration Register */
    register8_t rsv_0x161[10]; /* RESERVED REGISTER BLOCK */
    register8_t RSHSG;         /* RSSI LNA High Sensitivity Gain */
    register8_t RSIFG;         /* RSSI IF Amplifier Gain */
    register8_t RSLDV;         /* RSSI Low Band Damping Value */
    register8_t RSHDV;         /* RSSI High Band Damping Value */
    register8_t RSCOM;         /* RSSI Compensation Register */
} RSSIB_t;


/* RSSI LNA High Sensitivity Compensation */
typedef enum RSSIB_RSHISC_enum
{
    RSSIB_RSHISC_CLEAR_gc = (0x00), /* RSSI LNA High Sensitivity Compensation - CLEAR */
    RSSIB_RSHISC_SET_gc   = (0x04), /* RSSI LNA High Sensitivity Compensation - SET */
} RSSIB_RSHISC_t;

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

/* RSSI Within Low and High Limits */
typedef enum RSSIB_RSWLH_enum
{
    RSSIB_RSWLH_CLEAR_gc = (0x00), /* RSSI Within Low and High Limits - CLEAR */
    RSSIB_RSWLH_SET_gc   = (0x10), /* RSSI Within Low and High Limits - SET */
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
    register8_t rsv_0x00[318]; /* RESERVED REGISTER BLOCK */
    register8_t RXBC1;         /* Rx Buffer Configuration 1 */
    register8_t RXBC2;         /* Rx Buffer Configuration 2 */
    register8_t RXTLLB;        /* Rx Telegram Length Low Byte Path B */
    register8_t RXTLHB;        /* Rx Telegram Length High Byte Path B */
    register8_t RXCRLB;        /* Rx CRC Result Low Byte Path B */
    register8_t RXCRHB;        /* Rx CRC Result High Byte Path B */
    register8_t RXCSBB;        /* Rx CRC Skip Bit Number Path B */
    register8_t RXCILB;        /* Rx CRC Init Value Low Byte Path B */
    register8_t RXCIHB;        /* Rx CRC Init Value High Byte Path B */
    register8_t RXCPLB;        /* Rx CRC Polynomial Low Byte Path B */
    register8_t RXCPHB;        /* Rx CRC Polynomial High Byte Path B */
    register8_t RXDSB;         /* Receive Data Shift Register Path B */
    register8_t RXTLLA;        /* Rx Telegram Length Low Byte Path A */
    register8_t RXTLHA;        /* Rx Telegram Length High Byte Path A */
    register8_t RXCRLA;        /* Rx CRC Result Low Byte Path A */
    register8_t RXCRHA;        /* Rx CRC Result High Byte Path A */
    register8_t RXCSBA;        /* Rx CRC Skip Bit Number Path A */
    register8_t RXCILA;        /* Rx CRC Init Value Low Byte Path A */
    register8_t RXCIHA;        /* Rx CRC Init Value High Byte Path A */
    register8_t RXCPLA;        /* Rx CRC Polynomial Low Byte Path A */
    register8_t RXCPHA;        /* Rx CRC Polynomial High Byte Path A */
    register8_t RXDSA;         /* Receive Data Shift Register Path A */
} RXBUF_t;


/* Receive Data LSB-First Path B */
typedef enum RXBUF_RXLSBB_enum
{
    RXBUF_RXLSBB_CLEAR_gc = (0x00), /* Receive Data LSB-First Path B - CLEAR */
    RXBUF_RXLSBB_SET_gc   = (0x80), /* Receive Data LSB-First Path B - SET */
} RXBUF_RXLSBB_t;

/* Receive CRC Bit Length Path B */
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

/* Receive Data LSB-First Path A */
typedef enum RXBUF_RXLSBA_enum
{
    RXBUF_RXLSBA_CLEAR_gc = (0x00), /* Receive Data LSB-First Path A - CLEAR */
    RXBUF_RXLSBA_SET_gc   = (0x08), /* Receive Data LSB-First Path A - SET */
} RXBUF_RXLSBA_t;

/* Receive CRC Bit Length Path A */
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

/* RX Buffer Path Select */
typedef enum RXBUF_RXBPB_enum
{
    RXBUF_RXBPB_CLEAR_gc = (0x00), /* RX Buffer Path Select - CLEAR */
    RXBUF_RXBPB_SET_gc   = (0x01), /* RX Buffer Path Select - SET */
} RXBUF_RXBPB_t;

/*
--------------------------------------------------------------------------------
RXDSP - 
--------------------------------------------------------------------------------
*/

typedef struct RXDSP_struct
{
    register8_t rsv_0x00[36]; /* RESERVED REGISTER BLOCK */
    register8_t RDPR;         /* Rx DSP Power Reduction */
    register8_t rsv_0x25[8];  /* RESERVED REGISTER BLOCK */
    register8_t RDSIFR;       /* Rx DSP Status Interrupt Flag Register */
    register8_t rsv_0x2E[36]; /* RESERVED REGISTER BLOCK */
    register8_t RDCR;         /* Rx DSP Control Register */
    register8_t EOTSA;        /* End Of Telegram Status Path A */
    register8_t EOTCA;        /* End Of Telegram Conditions Path A */
    register8_t EOTSB;        /* End Of Telegram Status Path B */
    register8_t EOTCB;        /* End Of Telegram Conditions Path B */
    register8_t rsv_0x57[58]; /* RESERVED REGISTER BLOCK */
    register8_t SOTSB;        /* Start Of Telegram Status Path B */
    register8_t SOTSA;        /* Start Of Telegram Status Path A */
    register8_t SOTCB;        /* Start Of Telegram Conditions Path B */
    register8_t SOTCA;        /* Start Of Telegram Conditions Path A */
    register8_t TESRB;        /* Telegram Status Register Path B */
    register8_t TESRA;        /* Telegram Status Register Path A */
    register8_t rsv_0x97;     /* RESERVED REGISTER */
    register8_t RDSIMR;       /* Rx DSP Status Interrupt Mask Register */
    register8_t RDOCR;        /* Rx DSP Output Control */
    register8_t rsv_0x9A;     /* RESERVED REGISTER */
    _REGISTER16 (TEMP);       /* Temperature */
} RXDSP_t;


/* End Of Telegram Path B Fail Enable */
typedef enum RXDSP_EOTBFE_enum
{
    RXDSP_EOTBFE_CLEAR_gc = (0x00), /* End Of Telegram Path B Fail Enable - CLEAR */
    RXDSP_EOTBFE_SET_gc   = (0x80), /* End Of Telegram Path B Fail Enable - SET */
} RXDSP_EOTBFE_t;

/* RSSI Range Fail Enable Path A */
typedef enum RXDSP_RRFEA_enum
{
    RXDSP_RRFEA_CLEAR_gc = (0x00), /* RSSI Range Fail Enable Path A - CLEAR */
    RXDSP_RRFEA_SET_gc   = (0x40), /* RSSI Range Fail Enable Path A - SET */
} RXDSP_RRFEA_t;

/* Telegram Length Reached Enable Path A */
typedef enum RXDSP_TELREA_enum
{
    RXDSP_TELREA_CLEAR_gc = (0x00), /* Telegram Length Reached Enable Path A - CLEAR */
    RXDSP_TELREA_SET_gc   = (0x20), /* Telegram Length Reached Enable Path A - SET */
} RXDSP_TELREA_t;

/* Time-Out Fail Enable Path A */
typedef enum RXDSP_TMOFEA_enum
{
    RXDSP_TMOFEA_CLEAR_gc = (0x00), /* Time-Out Fail Enable Path A - CLEAR */
    RXDSP_TMOFEA_SET_gc   = (0x10), /* Time-Out Fail Enable Path A - SET */
} RXDSP_TMOFEA_t;

/* Manchester Coding Fail Enable Path A */
typedef enum RXDSP_MANFEA_enum
{
    RXDSP_MANFEA_CLEAR_gc = (0x00), /* Manchester Coding Fail Enable Path A - CLEAR */
    RXDSP_MANFEA_SET_gc   = (0x08), /* Manchester Coding Fail Enable Path A - SET */
} RXDSP_MANFEA_t;

/* Symbol Timing Fail Enable Path A */
typedef enum RXDSP_SYTFEA_enum
{
    RXDSP_SYTFEA_CLEAR_gc = (0x00), /* Symbol Timing Fail Enable Path A - CLEAR */
    RXDSP_SYTFEA_SET_gc   = (0x04), /* Symbol Timing Fail Enable Path A - SET */
} RXDSP_SYTFEA_t;

/* Modulation Amplitude Fail Enable Path A */
typedef enum RXDSP_AMPFEA_enum
{
    RXDSP_AMPFEA_CLEAR_gc = (0x00), /* Modulation Amplitude Fail Enable Path A - CLEAR */
    RXDSP_AMPFEA_SET_gc   = (0x02), /* Modulation Amplitude Fail Enable Path A - SET */
} RXDSP_AMPFEA_t;

/* RF Carrier Fail Enable Path A */
typedef enum RXDSP_CARFEA_enum
{
    RXDSP_CARFEA_CLEAR_gc = (0x00), /* RF Carrier Fail Enable Path A - CLEAR */
    RXDSP_CARFEA_SET_gc   = (0x01), /* RF Carrier Fail Enable Path A - SET */
} RXDSP_CARFEA_t;

/* End Of Telegram Path A Fail Enable */
typedef enum RXDSP_EOTAFE_enum
{
    RXDSP_EOTAFE_CLEAR_gc = (0x00), /* End Of Telegram Path A Fail Enable - CLEAR */
    RXDSP_EOTAFE_SET_gc   = (0x80), /* End Of Telegram Path A Fail Enable - SET */
} RXDSP_EOTAFE_t;

/* RSSI Range Fail Enable Path B */
typedef enum RXDSP_RRFEB_enum
{
    RXDSP_RRFEB_CLEAR_gc = (0x00), /* RSSI Range Fail Enable Path B - CLEAR */
    RXDSP_RRFEB_SET_gc   = (0x40), /* RSSI Range Fail Enable Path B - SET */
} RXDSP_RRFEB_t;

/* Telegram Length Reached Enable Path B */
typedef enum RXDSP_TELREB_enum
{
    RXDSP_TELREB_CLEAR_gc = (0x00), /* Telegram Length Reached Enable Path B - CLEAR */
    RXDSP_TELREB_SET_gc   = (0x20), /* Telegram Length Reached Enable Path B - SET */
} RXDSP_TELREB_t;

/* Time-Out Fail Enable Path B */
typedef enum RXDSP_TMOFEB_enum
{
    RXDSP_TMOFEB_CLEAR_gc = (0x00), /* Time-Out Fail Enable Path B - CLEAR */
    RXDSP_TMOFEB_SET_gc   = (0x10), /* Time-Out Fail Enable Path B - SET */
} RXDSP_TMOFEB_t;

/* Manchester Coding Fail Enable Path B */
typedef enum RXDSP_MANFEB_enum
{
    RXDSP_MANFEB_CLEAR_gc = (0x00), /* Manchester Coding Fail Enable Path B - CLEAR */
    RXDSP_MANFEB_SET_gc   = (0x08), /* Manchester Coding Fail Enable Path B - SET */
} RXDSP_MANFEB_t;

/* Symbol Timing Fail Enable Path B */
typedef enum RXDSP_SYTFEB_enum
{
    RXDSP_SYTFEB_CLEAR_gc = (0x00), /* Symbol Timing Fail Enable Path B - CLEAR */
    RXDSP_SYTFEB_SET_gc   = (0x04), /* Symbol Timing Fail Enable Path B - SET */
} RXDSP_SYTFEB_t;

/* Modulation Amplitude Fail Enable Path B */
typedef enum RXDSP_AMPFEB_enum
{
    RXDSP_AMPFEB_CLEAR_gc = (0x00), /* Modulation Amplitude Fail Enable Path B - CLEAR */
    RXDSP_AMPFEB_SET_gc   = (0x02), /* Modulation Amplitude Fail Enable Path B - SET */
} RXDSP_AMPFEB_t;

/* RF Carrier Fail Enable Path B */
typedef enum RXDSP_CARFEB_enum
{
    RXDSP_CARFEB_CLEAR_gc = (0x00), /* RF Carrier Fail Enable Path B - CLEAR */
    RXDSP_CARFEB_SET_gc   = (0x01), /* RF Carrier Fail Enable Path B - SET */
} RXDSP_CARFEB_t;

/* End Of Telegram Path B Fail */
typedef enum RXDSP_EOTBF_enum
{
    RXDSP_EOTBF_CLEAR_gc = (0x00), /* End Of Telegram Path B Fail - CLEAR */
    RXDSP_EOTBF_SET_gc   = (0x80), /* End Of Telegram Path B Fail - SET */
} RXDSP_EOTBF_t;

/* RSSI Range Fail Path A */
typedef enum RXDSP_RRFA_enum
{
    RXDSP_RRFA_CLEAR_gc = (0x00), /* RSSI Range Fail Path A - CLEAR */
    RXDSP_RRFA_SET_gc   = (0x40), /* RSSI Range Fail Path A - SET */
} RXDSP_RRFA_t;

/* Telegram Length Reached Path A */
typedef enum RXDSP_TELRA_enum
{
    RXDSP_TELRA_CLEAR_gc = (0x00), /* Telegram Length Reached Path A - CLEAR */
    RXDSP_TELRA_SET_gc   = (0x20), /* Telegram Length Reached Path A - SET */
} RXDSP_TELRA_t;

/* Time-Out Fail Path A */
typedef enum RXDSP_TMOFA_enum
{
    RXDSP_TMOFA_CLEAR_gc = (0x00), /* Time-Out Fail Path A - CLEAR */
    RXDSP_TMOFA_SET_gc   = (0x10), /* Time-Out Fail Path A - SET */
} RXDSP_TMOFA_t;

/* Manchester Coding Fail Path A */
typedef enum RXDSP_MANFA_enum
{
    RXDSP_MANFA_CLEAR_gc = (0x00), /* Manchester Coding Fail Path A - CLEAR */
    RXDSP_MANFA_SET_gc   = (0x08), /* Manchester Coding Fail Path A - SET */
} RXDSP_MANFA_t;

/* Symbol Timing Fail Path A */
typedef enum RXDSP_SYTFA_enum
{
    RXDSP_SYTFA_CLEAR_gc = (0x00), /* Symbol Timing Fail Path A - CLEAR */
    RXDSP_SYTFA_SET_gc   = (0x04), /* Symbol Timing Fail Path A - SET */
} RXDSP_SYTFA_t;

/* Modulation Amplitude Fail Path A */
typedef enum RXDSP_AMPFA_enum
{
    RXDSP_AMPFA_CLEAR_gc = (0x00), /* Modulation Amplitude Fail Path A - CLEAR */
    RXDSP_AMPFA_SET_gc   = (0x02), /* Modulation Amplitude Fail Path A - SET */
} RXDSP_AMPFA_t;

/* RF Carrier Fail Path A */
typedef enum RXDSP_CARFA_enum
{
    RXDSP_CARFA_CLEAR_gc = (0x00), /* RF Carrier Fail Path A - CLEAR */
    RXDSP_CARFA_SET_gc   = (0x01), /* RF Carrier Fail Path A - SET */
} RXDSP_CARFA_t;

/* End Of Telegram Path A Fail */
typedef enum RXDSP_EOTAF_enum
{
    RXDSP_EOTAF_CLEAR_gc = (0x00), /* End Of Telegram Path A Fail - CLEAR */
    RXDSP_EOTAF_SET_gc   = (0x80), /* End Of Telegram Path A Fail - SET */
} RXDSP_EOTAF_t;

/* RSSI Range Fail Path B */
typedef enum RXDSP_RRFB_enum
{
    RXDSP_RRFB_CLEAR_gc = (0x00), /* RSSI Range Fail Path B - CLEAR */
    RXDSP_RRFB_SET_gc   = (0x40), /* RSSI Range Fail Path B - SET */
} RXDSP_RRFB_t;

/* Telegram Length Reached Path B */
typedef enum RXDSP_TELRB_enum
{
    RXDSP_TELRB_CLEAR_gc = (0x00), /* Telegram Length Reached Path B - CLEAR */
    RXDSP_TELRB_SET_gc   = (0x20), /* Telegram Length Reached Path B - SET */
} RXDSP_TELRB_t;

/* Time-Out Fail Path B */
typedef enum RXDSP_TMOFB_enum
{
    RXDSP_TMOFB_CLEAR_gc = (0x00), /* Time-Out Fail Path B - CLEAR */
    RXDSP_TMOFB_SET_gc   = (0x10), /* Time-Out Fail Path B - SET */
} RXDSP_TMOFB_t;

/* Manchester Coding Fail Path B */
typedef enum RXDSP_MANFB_enum
{
    RXDSP_MANFB_CLEAR_gc = (0x00), /* Manchester Coding Fail Path B - CLEAR */
    RXDSP_MANFB_SET_gc   = (0x08), /* Manchester Coding Fail Path B - SET */
} RXDSP_MANFB_t;

/* Symbol Timing Fail Path B */
typedef enum RXDSP_SYTFB_enum
{
    RXDSP_SYTFB_CLEAR_gc = (0x00), /* Symbol Timing Fail Path B - CLEAR */
    RXDSP_SYTFB_SET_gc   = (0x04), /* Symbol Timing Fail Path B - SET */
} RXDSP_SYTFB_t;

/* Modulation Amplitude Fail Path B */
typedef enum RXDSP_AMPFB_enum
{
    RXDSP_AMPFB_CLEAR_gc = (0x00), /* Modulation Amplitude Fail Path B - CLEAR */
    RXDSP_AMPFB_SET_gc   = (0x02), /* Modulation Amplitude Fail Path B - SET */
} RXDSP_AMPFB_t;

/* RF Carrier Fail Path B */
typedef enum RXDSP_CARFB_enum
{
    RXDSP_CARFB_CLEAR_gc = (0x00), /* RF Carrier Fail Path B - CLEAR */
    RXDSP_CARFB_SET_gc   = (0x01), /* RF Carrier Fail Path B - SET */
} RXDSP_CARFB_t;

/* Rx DSP Enable */
typedef enum RXDSP_RDEN_enum
{
    RXDSP_RDEN_CLEAR_gc = (0x00), /* Rx DSP Enable - CLEAR */
    RXDSP_RDEN_SET_gc   = (0x04), /* Rx DSP Enable - SET */
} RXDSP_RDEN_t;

/* Divided ADC Clock Enable */
typedef enum RXDSP_ADIVEN_enum
{
    RXDSP_ADIVEN_CLEAR_gc = (0x00), /* Divided ADC Clock Enable - CLEAR */
    RXDSP_ADIVEN_SET_gc   = (0x02), /* Divided ADC Clock Enable - SET */
} RXDSP_ADIVEN_t;

/* Rx DSP Power Up */
typedef enum RXDSP_RDPU_enum
{
    RXDSP_RDPU_CLEAR_gc = (0x00), /* Rx DSP Power Up - CLEAR */
    RXDSP_RDPU_SET_gc   = (0x01), /* Rx DSP Power Up - SET */
} RXDSP_RDPU_t;

/* Rx DSP Start Bit Is Data Path B */
typedef enum RXDSP_RDSIDB_enum
{
    RXDSP_RDSIDB_CLEAR_gc = (0x00), /* Rx DSP Start Bit Is Data Path B - CLEAR */
    RXDSP_RDSIDB_SET_gc   = (0x40), /* Rx DSP Start Bit Is Data Path B - SET */
} RXDSP_RDSIDB_t;

/* Rx DSP Start Bit Is Data Path A */
typedef enum RXDSP_RDSIDA_enum
{
    RXDSP_RDSIDA_CLEAR_gc = (0x00), /* Rx DSP Start Bit Is Data Path A - CLEAR */
    RXDSP_RDSIDA_SET_gc   = (0x20), /* Rx DSP Start Bit Is Data Path A - SET */
} RXDSP_RDSIDA_t;

/* Enable Transparent Raw Data Path B */
typedef enum RXDSP_ETRPB_enum
{
    RXDSP_ETRPB_CLEAR_gc = (0x00), /* Enable Transparent Raw Data Path B - CLEAR */
    RXDSP_ETRPB_SET_gc   = (0x10), /* Enable Transparent Raw Data Path B - SET */
} RXDSP_ETRPB_t;

/* Enable Transparent Raw Data Path A */
typedef enum RXDSP_ETRPA_enum
{
    RXDSP_ETRPA_CLEAR_gc = (0x00), /* Enable Transparent Raw Data Path A - CLEAR */
    RXDSP_ETRPA_SET_gc   = (0x08), /* Enable Transparent Raw Data Path A - SET */
} RXDSP_ETRPA_t;

/* Transparent Mode Data Select */
#define RXDSP_RDOCR_TMDS_gc(x) ((x<<1) & 0x06)

/* Rx DSP Power Reduction Register Busy Flag */
typedef enum RXDSP_RDPRF_enum
{
    RXDSP_RDPRF_CLEAR_gc = (0x00), /* Rx DSP Power Reduction Register Busy Flag - CLEAR */
    RXDSP_RDPRF_SET_gc   = (0x80), /* Rx DSP Power Reduction Register Busy Flag - SET */
} RXDSP_RDPRF_t;

/* Automatic Rx DSP Power Reduction Flag */
typedef enum RXDSP_ARDPRF_enum
{
    RXDSP_ARDPRF_CLEAR_gc = (0x00), /* Automatic Rx DSP Power Reduction Flag - CLEAR */
    RXDSP_ARDPRF_SET_gc   = (0x40), /* Automatic Rx DSP Power Reduction Flag - SET */
} RXDSP_ARDPRF_t;

/* Automatic Power Reduction Path A */
typedef enum RXDSP_APRPTA_enum
{
    RXDSP_APRPTA_CLEAR_gc = (0x00), /* Automatic Power Reduction Path A - CLEAR */
    RXDSP_APRPTA_SET_gc   = (0x20), /* Automatic Power Reduction Path A - SET */
} RXDSP_APRPTA_t;

/* Automatic Power Reduction Path B */
typedef enum RXDSP_APRPTB_enum
{
    RXDSP_APRPTB_CLEAR_gc = (0x00), /* Automatic Power Reduction Path B - CLEAR */
    RXDSP_APRPTB_SET_gc   = (0x10), /* Automatic Power Reduction Path B - SET */
} RXDSP_APRPTB_t;

/* Power Reduction Temperature Measurement */
typedef enum RXDSP_PRTMP_enum
{
    RXDSP_PRTMP_CLEAR_gc = (0x00), /* Power Reduction Temperature Measurement - CLEAR */
    RXDSP_PRTMP_SET_gc   = (0x08), /* Power Reduction Temperature Measurement - SET */
} RXDSP_PRTMP_t;

/* Power Reduction Digital Channel Filter */
typedef enum RXDSP_PRFLT_enum
{
    RXDSP_PRFLT_CLEAR_gc = (0x00), /* Power Reduction Digital Channel Filter - CLEAR */
    RXDSP_PRFLT_SET_gc   = (0x04), /* Power Reduction Digital Channel Filter - SET */
} RXDSP_PRFLT_t;

/* Power Reduction Demodulator and Receiving Path A */
typedef enum RXDSP_PRPTA_enum
{
    RXDSP_PRPTA_CLEAR_gc = (0x00), /* Power Reduction Demodulator and Receiving Path A - CLEAR */
    RXDSP_PRPTA_SET_gc   = (0x02), /* Power Reduction Demodulator and Receiving Path A - SET */
} RXDSP_PRPTA_t;

/* Power Reduction Demodulator and Receiving Path B */
typedef enum RXDSP_PRPTB_enum
{
    RXDSP_PRPTB_CLEAR_gc = (0x00), /* Power Reduction Demodulator and Receiving Path B - CLEAR */
    RXDSP_PRPTB_SET_gc   = (0x01), /* Power Reduction Demodulator and Receiving Path B - SET */
} RXDSP_PRPTB_t;

/* Wake Check Ok Path B */
typedef enum RXDSP_WCOB_enum
{
    RXDSP_WCOB_CLEAR_gc = (0x00), /* Wake Check Ok Path B - CLEAR */
    RXDSP_WCOB_SET_gc   = (0x80), /* Wake Check Ok Path B - SET */
} RXDSP_WCOB_t;

/* Wake Check Ok Path A */
typedef enum RXDSP_WCOA_enum
{
    RXDSP_WCOA_CLEAR_gc = (0x00), /* Wake Check Ok Path A - CLEAR */
    RXDSP_WCOA_SET_gc   = (0x40), /* Wake Check Ok Path A - SET */
} RXDSP_WCOA_t;

/* Start Of Telegram Path B */
typedef enum RXDSP_SOTB_enum
{
    RXDSP_SOTB_CLEAR_gc = (0x00), /* Start Of Telegram Path B - CLEAR */
    RXDSP_SOTB_SET_gc   = (0x20), /* Start Of Telegram Path B - SET */
} RXDSP_SOTB_t;

/* Start Of Telegram Path A */
typedef enum RXDSP_SOTA_enum
{
    RXDSP_SOTA_CLEAR_gc = (0x00), /* Start Of Telegram Path A - CLEAR */
    RXDSP_SOTA_SET_gc   = (0x10), /* Start Of Telegram Path A - SET */
} RXDSP_SOTA_t;

/* End Of Telegram Path B */
typedef enum RXDSP_EOTB_enum
{
    RXDSP_EOTB_CLEAR_gc = (0x00), /* End Of Telegram Path B - CLEAR */
    RXDSP_EOTB_SET_gc   = (0x08), /* End Of Telegram Path B - SET */
} RXDSP_EOTB_t;

/* End Of Telegram Path A */
typedef enum RXDSP_EOTA_enum
{
    RXDSP_EOTA_CLEAR_gc = (0x00), /* End Of Telegram Path A - CLEAR */
    RXDSP_EOTA_SET_gc   = (0x04), /* End Of Telegram Path A - SET */
} RXDSP_EOTA_t;

/* New Bit Path B */
typedef enum RXDSP_NBITB_enum
{
    RXDSP_NBITB_CLEAR_gc = (0x00), /* New Bit Path B - CLEAR */
    RXDSP_NBITB_SET_gc   = (0x02), /* New Bit Path B - SET */
} RXDSP_NBITB_t;

/* New Bit Path A */
typedef enum RXDSP_NBITA_enum
{
    RXDSP_NBITA_CLEAR_gc = (0x00), /* New Bit Path A - CLEAR */
    RXDSP_NBITA_SET_gc   = (0x01), /* New Bit Path A - SET */
} RXDSP_NBITA_t;

/* Wake Check Ok Path B Interrupt Mask */
typedef enum RXDSP_WCOBM_enum
{
    RXDSP_WCOBM_CLEAR_gc = (0x00), /* Wake Check Ok Path B Interrupt Mask - CLEAR */
    RXDSP_WCOBM_SET_gc   = (0x80), /* Wake Check Ok Path B Interrupt Mask - SET */
} RXDSP_WCOBM_t;

/* Wake Check Ok Path A Interrupt Mask */
typedef enum RXDSP_WCOAM_enum
{
    RXDSP_WCOAM_CLEAR_gc = (0x00), /* Wake Check Ok Path A Interrupt Mask - CLEAR */
    RXDSP_WCOAM_SET_gc   = (0x40), /* Wake Check Ok Path A Interrupt Mask - SET */
} RXDSP_WCOAM_t;

/* Start Of Telegram Path B Interrupt Mask */
typedef enum RXDSP_SOTBM_enum
{
    RXDSP_SOTBM_CLEAR_gc = (0x00), /* Start Of Telegram Path B Interrupt Mask - CLEAR */
    RXDSP_SOTBM_SET_gc   = (0x20), /* Start Of Telegram Path B Interrupt Mask - SET */
} RXDSP_SOTBM_t;

/* Start Of Telegram Path A Interrupt Mask */
typedef enum RXDSP_SOTAM_enum
{
    RXDSP_SOTAM_CLEAR_gc = (0x00), /* Start Of Telegram Path A Interrupt Mask - CLEAR */
    RXDSP_SOTAM_SET_gc   = (0x10), /* Start Of Telegram Path A Interrupt Mask - SET */
} RXDSP_SOTAM_t;

/* End Of Telegram Path B Interrupt Mask */
typedef enum RXDSP_EOTBM_enum
{
    RXDSP_EOTBM_CLEAR_gc = (0x00), /* End Of Telegram Path B Interrupt Mask - CLEAR */
    RXDSP_EOTBM_SET_gc   = (0x08), /* End Of Telegram Path B Interrupt Mask - SET */
} RXDSP_EOTBM_t;

/* End Of Telegram Path A Interrupt Mask */
typedef enum RXDSP_EOTAM_enum
{
    RXDSP_EOTAM_CLEAR_gc = (0x00), /* End Of Telegram Path A Interrupt Mask - CLEAR */
    RXDSP_EOTAM_SET_gc   = (0x04), /* End Of Telegram Path A Interrupt Mask - SET */
} RXDSP_EOTAM_t;

/* New Bit Path B Interrupt Mask */
typedef enum RXDSP_NBITBM_enum
{
    RXDSP_NBITBM_CLEAR_gc = (0x00), /* New Bit Path B Interrupt Mask - CLEAR */
    RXDSP_NBITBM_SET_gc   = (0x02), /* New Bit Path B Interrupt Mask - SET */
} RXDSP_NBITBM_t;

/* New Bit Path A Interrupt Mask */
typedef enum RXDSP_NBITAM_enum
{
    RXDSP_NBITAM_CLEAR_gc = (0x00), /* New Bit Path A Interrupt Mask - CLEAR */
    RXDSP_NBITAM_SET_gc   = (0x01), /* New Bit Path A Interrupt Mask - SET */
} RXDSP_NBITAM_t;

/* Wake Check Ok Path B Ok Enable */
typedef enum RXDSP_WCOBOE_enum
{
    RXDSP_WCOBOE_CLEAR_gc = (0x00), /* Wake Check Ok Path B Ok Enable - CLEAR */
    RXDSP_WCOBOE_SET_gc   = (0x80), /* Wake Check Ok Path B Ok Enable - SET */
} RXDSP_WCOBOE_t;

/* RSSI Range Ok Enable Path A */
typedef enum RXDSP_RROEA_enum
{
    RXDSP_RROEA_CLEAR_gc = (0x00), /* RSSI Range Ok Enable Path A - CLEAR */
    RXDSP_RROEA_SET_gc   = (0x40), /* RSSI Range Ok Enable Path A - SET */
} RXDSP_RROEA_t;

/* Start of Frame Identifier Enable Path A */
typedef enum RXDSP_SFIDEA_enum
{
    RXDSP_SFIDEA_CLEAR_gc = (0x00), /* Start of Frame Identifier Enable Path A - CLEAR */
    RXDSP_SFIDEA_SET_gc   = (0x20), /* Start of Frame Identifier Enable Path A - SET */
} RXDSP_SFIDEA_t;

/* Wake Up Pattern Enable Path A */
typedef enum RXDSP_WUPEA_enum
{
    RXDSP_WUPEA_CLEAR_gc = (0x00), /* Wake Up Pattern Enable Path A - CLEAR */
    RXDSP_WUPEA_SET_gc   = (0x10), /* Wake Up Pattern Enable Path A - SET */
} RXDSP_WUPEA_t;

/* Manchester Coding Ok Enable Path A */
typedef enum RXDSP_MANOEA_enum
{
    RXDSP_MANOEA_CLEAR_gc = (0x00), /* Manchester Coding Ok Enable Path A - CLEAR */
    RXDSP_MANOEA_SET_gc   = (0x08), /* Manchester Coding Ok Enable Path A - SET */
} RXDSP_MANOEA_t;

/* Symbol Timing Ok Enable Path A */
typedef enum RXDSP_SYTOEA_enum
{
    RXDSP_SYTOEA_CLEAR_gc = (0x00), /* Symbol Timing Ok Enable Path A - CLEAR */
    RXDSP_SYTOEA_SET_gc   = (0x04), /* Symbol Timing Ok Enable Path A - SET */
} RXDSP_SYTOEA_t;

/* Modulation Amplitude Ok Enable Path A */
typedef enum RXDSP_AMPOEA_enum
{
    RXDSP_AMPOEA_CLEAR_gc = (0x00), /* Modulation Amplitude Ok Enable Path A - CLEAR */
    RXDSP_AMPOEA_SET_gc   = (0x02), /* Modulation Amplitude Ok Enable Path A - SET */
} RXDSP_AMPOEA_t;

/* RF Carrier Ok Enable Path A */
typedef enum RXDSP_CAROEA_enum
{
    RXDSP_CAROEA_CLEAR_gc = (0x00), /* RF Carrier Ok Enable Path A - CLEAR */
    RXDSP_CAROEA_SET_gc   = (0x01), /* RF Carrier Ok Enable Path A - SET */
} RXDSP_CAROEA_t;

/* Wake Check Ok Path A Ok Enable */
typedef enum RXDSP_WCOAOE_enum
{
    RXDSP_WCOAOE_CLEAR_gc = (0x00), /* Wake Check Ok Path A Ok Enable - CLEAR */
    RXDSP_WCOAOE_SET_gc   = (0x80), /* Wake Check Ok Path A Ok Enable - SET */
} RXDSP_WCOAOE_t;

/* RSSI Range Ok Enable Path B */
typedef enum RXDSP_RROEB_enum
{
    RXDSP_RROEB_CLEAR_gc = (0x00), /* RSSI Range Ok Enable Path B - CLEAR */
    RXDSP_RROEB_SET_gc   = (0x40), /* RSSI Range Ok Enable Path B - SET */
} RXDSP_RROEB_t;

/* Start of Frame Identifier Enable Path B */
typedef enum RXDSP_SFIDEB_enum
{
    RXDSP_SFIDEB_CLEAR_gc = (0x00), /* Start of Frame Identifier Enable Path B - CLEAR */
    RXDSP_SFIDEB_SET_gc   = (0x20), /* Start of Frame Identifier Enable Path B - SET */
} RXDSP_SFIDEB_t;

/* Wake Up Pattern Enable Path B */
typedef enum RXDSP_WUPEB_enum
{
    RXDSP_WUPEB_CLEAR_gc = (0x00), /* Wake Up Pattern Enable Path B - CLEAR */
    RXDSP_WUPEB_SET_gc   = (0x10), /* Wake Up Pattern Enable Path B - SET */
} RXDSP_WUPEB_t;

/* Manchester Coding Ok Enable Path B */
typedef enum RXDSP_MANOEB_enum
{
    RXDSP_MANOEB_CLEAR_gc = (0x00), /* Manchester Coding Ok Enable Path B - CLEAR */
    RXDSP_MANOEB_SET_gc   = (0x08), /* Manchester Coding Ok Enable Path B - SET */
} RXDSP_MANOEB_t;

/* Symbol Timing Ok Enable Path B */
typedef enum RXDSP_SYTOEB_enum
{
    RXDSP_SYTOEB_CLEAR_gc = (0x00), /* Symbol Timing Ok Enable Path B - CLEAR */
    RXDSP_SYTOEB_SET_gc   = (0x04), /* Symbol Timing Ok Enable Path B - SET */
} RXDSP_SYTOEB_t;

/* Modulation Amplitude Ok Enable Path B */
typedef enum RXDSP_AMPOEB_enum
{
    RXDSP_AMPOEB_CLEAR_gc = (0x00), /* Modulation Amplitude Ok Enable Path B - CLEAR */
    RXDSP_AMPOEB_SET_gc   = (0x02), /* Modulation Amplitude Ok Enable Path B - SET */
} RXDSP_AMPOEB_t;

/* RF Carrier Ok Enable Path B */
typedef enum RXDSP_CAROEB_enum
{
    RXDSP_CAROEB_CLEAR_gc = (0x00), /* RF Carrier Ok Enable Path B - CLEAR */
    RXDSP_CAROEB_SET_gc   = (0x01), /* RF Carrier Ok Enable Path B - SET */
} RXDSP_CAROEB_t;

/* Wake Check Ok Path B Ok */
typedef enum RXDSP_WCOBO_enum
{
    RXDSP_WCOBO_CLEAR_gc = (0x00), /* Wake Check Ok Path B Ok - CLEAR */
    RXDSP_WCOBO_SET_gc   = (0x80), /* Wake Check Ok Path B Ok - SET */
} RXDSP_WCOBO_t;

/* RSSI Range Ok Path A */
typedef enum RXDSP_RROA_enum
{
    RXDSP_RROA_CLEAR_gc = (0x00), /* RSSI Range Ok Path A - CLEAR */
    RXDSP_RROA_SET_gc   = (0x40), /* RSSI Range Ok Path A - SET */
} RXDSP_RROA_t;

/* Start of Frame Identifier Ok Path A */
typedef enum RXDSP_SFIDOA_enum
{
    RXDSP_SFIDOA_CLEAR_gc = (0x00), /* Start of Frame Identifier Ok Path A - CLEAR */
    RXDSP_SFIDOA_SET_gc   = (0x20), /* Start of Frame Identifier Ok Path A - SET */
} RXDSP_SFIDOA_t;

/* Wake Up Pattern Ok Path A */
typedef enum RXDSP_WUPOA_enum
{
    RXDSP_WUPOA_CLEAR_gc = (0x00), /* Wake Up Pattern Ok Path A - CLEAR */
    RXDSP_WUPOA_SET_gc   = (0x10), /* Wake Up Pattern Ok Path A - SET */
} RXDSP_WUPOA_t;

/* Manchester Coding Ok Path A */
typedef enum RXDSP_MANOA_enum
{
    RXDSP_MANOA_CLEAR_gc = (0x00), /* Manchester Coding Ok Path A - CLEAR */
    RXDSP_MANOA_SET_gc   = (0x08), /* Manchester Coding Ok Path A - SET */
} RXDSP_MANOA_t;

/* Symbol Timing Ok Path A */
typedef enum RXDSP_SYTOA_enum
{
    RXDSP_SYTOA_CLEAR_gc = (0x00), /* Symbol Timing Ok Path A - CLEAR */
    RXDSP_SYTOA_SET_gc   = (0x04), /* Symbol Timing Ok Path A - SET */
} RXDSP_SYTOA_t;

/* Modulation Amplitude Ok Path A */
typedef enum RXDSP_AMPOA_enum
{
    RXDSP_AMPOA_CLEAR_gc = (0x00), /* Modulation Amplitude Ok Path A - CLEAR */
    RXDSP_AMPOA_SET_gc   = (0x02), /* Modulation Amplitude Ok Path A - SET */
} RXDSP_AMPOA_t;

/* RF Carrier Ok Path A */
typedef enum RXDSP_CAROA_enum
{
    RXDSP_CAROA_CLEAR_gc = (0x00), /* RF Carrier Ok Path A - CLEAR */
    RXDSP_CAROA_SET_gc   = (0x01), /* RF Carrier Ok Path A - SET */
} RXDSP_CAROA_t;

/* Wake Check Ok Path A Ok */
typedef enum RXDSP_WCOAO_enum
{
    RXDSP_WCOAO_CLEAR_gc = (0x00), /* Wake Check Ok Path A Ok - CLEAR */
    RXDSP_WCOAO_SET_gc   = (0x80), /* Wake Check Ok Path A Ok - SET */
} RXDSP_WCOAO_t;

/* RSSI Range Ok Path B */
typedef enum RXDSP_RROB_enum
{
    RXDSP_RROB_CLEAR_gc = (0x00), /* RSSI Range Ok Path B - CLEAR */
    RXDSP_RROB_SET_gc   = (0x40), /* RSSI Range Ok Path B - SET */
} RXDSP_RROB_t;

/* Start of Frame Identifier Ok Path B */
typedef enum RXDSP_SFIDOB_enum
{
    RXDSP_SFIDOB_CLEAR_gc = (0x00), /* Start of Frame Identifier Ok Path B - CLEAR */
    RXDSP_SFIDOB_SET_gc   = (0x20), /* Start of Frame Identifier Ok Path B - SET */
} RXDSP_SFIDOB_t;

/* Wake Up Pattern Ok Path B */
typedef enum RXDSP_WUPOB_enum
{
    RXDSP_WUPOB_CLEAR_gc = (0x00), /* Wake Up Pattern Ok Path B - CLEAR */
    RXDSP_WUPOB_SET_gc   = (0x10), /* Wake Up Pattern Ok Path B - SET */
} RXDSP_WUPOB_t;

/* Manchester Coding Ok Path B */
typedef enum RXDSP_MANOB_enum
{
    RXDSP_MANOB_CLEAR_gc = (0x00), /* Manchester Coding Ok Path B - CLEAR */
    RXDSP_MANOB_SET_gc   = (0x08), /* Manchester Coding Ok Path B - SET */
} RXDSP_MANOB_t;

/* Symbol Timing Ok Path B */
typedef enum RXDSP_SYTOB_enum
{
    RXDSP_SYTOB_CLEAR_gc = (0x00), /* Symbol Timing Ok Path B - CLEAR */
    RXDSP_SYTOB_SET_gc   = (0x04), /* Symbol Timing Ok Path B - SET */
} RXDSP_SYTOB_t;

/* Modulation Amplitude Ok Path B */
typedef enum RXDSP_AMPOB_enum
{
    RXDSP_AMPOB_CLEAR_gc = (0x00), /* Modulation Amplitude Ok Path B - CLEAR */
    RXDSP_AMPOB_SET_gc   = (0x02), /* Modulation Amplitude Ok Path B - SET */
} RXDSP_AMPOB_t;

/* RF Carrier Ok Path B */
typedef enum RXDSP_CAROB_enum
{
    RXDSP_CAROB_CLEAR_gc = (0x00), /* RF Carrier Ok Path B - CLEAR */
    RXDSP_CAROB_SET_gc   = (0x01), /* RF Carrier Ok Path B - SET */
} RXDSP_CAROB_t;

/* End of Telegram Location Path A */
typedef enum RXDSP_EOTLA_enum
{
    RXDSP_EOTLA_VAL_0x00_gc = (0x00<<1), /* No EOT */
    RXDSP_EOTLA_VAL_0x01_gc = (0x01<<1), /* Before WCO */
    RXDSP_EOTLA_VAL_0x02_gc = (0x02<<1), /* Between WCO and SOT */
    RXDSP_EOTLA_VAL_0x03_gc = (0x03<<1), /* After SOT */
} RXDSP_EOTLA_t;

/* Cyclic Redundancy Check Ok Path A */
typedef enum RXDSP_CRCOA_enum
{
    RXDSP_CRCOA_CLEAR_gc = (0x00), /* Cyclic Redundancy Check Ok Path A - CLEAR */
    RXDSP_CRCOA_SET_gc   = (0x01), /* Cyclic Redundancy Check Ok Path A - SET */
} RXDSP_CRCOA_t;

/* End of Telegram Location Path B */
typedef enum RXDSP_EOTLB_enum
{
    RXDSP_EOTLB_VAL_0x00_gc = (0x00<<1), /* No EOT */
    RXDSP_EOTLB_VAL_0x01_gc = (0x01<<1), /* Before WCO */
    RXDSP_EOTLB_VAL_0x02_gc = (0x02<<1), /* Between WCO and SOT */
    RXDSP_EOTLB_VAL_0x03_gc = (0x03<<1), /* After SOT */
} RXDSP_EOTLB_t;

/* Cyclic Redundancy Check Ok Path B */
typedef enum RXDSP_CRCOB_enum
{
    RXDSP_CRCOB_CLEAR_gc = (0x00), /* Cyclic Redundancy Check Ok Path B - CLEAR */
    RXDSP_CRCOB_SET_gc   = (0x01), /* Cyclic Redundancy Check Ok Path B - SET */
} RXDSP_CRCOB_t;

/*
--------------------------------------------------------------------------------
SFIFO - 
--------------------------------------------------------------------------------
*/

typedef struct SFIFO_struct
{
    register8_t rsv_0x00[232]; /* RESERVED REGISTER BLOCK */
    register8_t SFS;           /* Support FIFO Status */
    register8_t SFL;           /* Support FIFO Fill Level */
    register8_t SFWP;          /* Support FIFO Write Pointer */
    register8_t SFRP;          /* Support FIFO Read Pointer */
    register8_t SFD;           /* Support FIFO Data */
    register8_t SFI;           /* Support FIFO Interrupt Mask */
    register8_t SFC;           /* Support FIFO Configuration */
} SFIFO_t;


/* Support FIFO Direct Read Access Operational Mode */
typedef enum SFIFO_SFDRA_enum
{
    SFIFO_SFDRA_CLEAR_gc = (0x00), /* Support FIFO Direct Read Access Operational Mode - CLEAR */
    SFIFO_SFDRA_SET_gc   = (0x80), /* Support FIFO Direct Read Access Operational Mode - SET */
} SFIFO_SFDRA_t;

/* Support FIFO Fill Level Configuration */
#define SFIFO_SFC_SFFLC_gc(x) (x & 0x1F)

/* Support FIFO Error Interrupt Mask */
typedef enum SFIFO_SFERIM_enum
{
    SFIFO_SFERIM_CLEAR_gc = (0x00), /* Support FIFO Error Interrupt Mask - CLEAR */
    SFIFO_SFERIM_SET_gc   = (0x02), /* Support FIFO Error Interrupt Mask - SET */
} SFIFO_SFERIM_t;

/* Support FIFO Fill Level Interrupt Mask */
typedef enum SFIFO_SFFLIM_enum
{
    SFIFO_SFFLIM_CLEAR_gc = (0x00), /* Support FIFO Fill Level Interrupt Mask - CLEAR */
    SFIFO_SFFLIM_SET_gc   = (0x01), /* Support FIFO Fill Level Interrupt Mask - SET */
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

/* Support FIFO Fill Level Reached Status Flag */
typedef enum SFIFO_SFFLRF_enum
{
    SFIFO_SFFLRF_CLEAR_gc = (0x00), /* Support FIFO Fill Level Reached Status Flag - CLEAR */
    SFIFO_SFFLRF_SET_gc   = (0x01), /* Support FIFO Fill Level Reached Status Flag - SET */
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
    register8_t rsv_0x4F[279]; /* RESERVED REGISTER BLOCK */
    register8_t SFFR;          /* SPI FIFO Fill Status Register */
    register8_t SFIR;          /* SPI FIFO Interrupt Register */
} SPI_t;


/* Transmit Buffer Clear */
typedef enum SPI_TFC_enum
{
    SPI_TFC_CLEAR_gc = (0x00), /* Transmit Buffer Clear - CLEAR */
    SPI_TFC_SET_gc   = (0x80), /* Transmit Buffer Clear - SET */
} SPI_TFC_t;

/* Transmit Buffer Fill Level */
#define SPI_SFFR_TFL_gc(x) ((x<<4) & 0x70)

/* Rx Buffer Clear */
typedef enum SPI_RFC_enum
{
    SPI_RFC_CLEAR_gc = (0x00), /* Rx Buffer Clear - CLEAR */
    SPI_RFC_SET_gc   = (0x08), /* Rx Buffer Clear - SET */
} SPI_RFC_t;

/* Receive Buffer Fill Level */
#define SPI_SFFR_RFL_gc(x) (x & 0x07)

/* SPI Transmit Buffer Interrupt Enable */
typedef enum SPI_STIE_enum
{
    SPI_STIE_CLEAR_gc = (0x00), /* SPI Transmit Buffer Interrupt Enable - CLEAR */
    SPI_STIE_SET_gc   = (0x80), /* SPI Transmit Buffer Interrupt Enable - SET */
} SPI_STIE_t;

/* Transmit Buffer Interrupt Level */
#define SPI_SFIR_TIL_gc(x) ((x<<4) & 0x70)

/* SPI Rx Buffer Interrupt Enable */
typedef enum SPI_SRIE_enum
{
    SPI_SRIE_CLEAR_gc = (0x00), /* SPI Rx Buffer Interrupt Enable - CLEAR */
    SPI_SRIE_SET_gc   = (0x08), /* SPI Rx Buffer Interrupt Enable - SET */
} SPI_SRIE_t;

/* Receive Buffer Interrupt Level */
#define SPI_SFIR_RIL_gc(x) (x & 0x07)

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

/* Clock Polarity */
typedef enum SPI_CPOL_enum
{
    SPI_CPOL_CLEAR_gc = (0x00), /* Clock Polarity - CLEAR */
    SPI_CPOL_SET_gc   = (0x08), /* Clock Polarity - SET */
} SPI_CPOL_t;

/* Clock Phase */
typedef enum SPI_CPHA_enum
{
    SPI_CPHA_CLEAR_gc = (0x00), /* Clock Phase - CLEAR */
    SPI_CPHA_SET_gc   = (0x04), /* Clock Phase - SET */
} SPI_CPHA_t;

/* SPI Clock Rate Select */
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

/*
--------------------------------------------------------------------------------
SSM - 
--------------------------------------------------------------------------------
*/

typedef struct SSM_struct
{
    register8_t rsv_0x00[239]; /* RESERVED REGISTER BLOCK */
    register8_t SSMCR;         /* Sequencer State Machine Control Register */
    register8_t SSMRCR;        /* Sequencer State Machine Rx Control Register */
    register8_t SSMFBR;        /* Sequencer State Machine Filter Bandwidth Register */
    register8_t SSMRR;         /* Sequencer State Machine Run Register */
    register8_t SSMSR;         /* Sequencer State Machine Status Register */
    register8_t SSMIFR;        /* Sequencer State Machine Interrupt Flag Register */
    register8_t SSMIMR;        /* Sequencer State Machine Interrupt Mask Register */
    register8_t MSMSTR;        /* Master State Machine State Register */
    register8_t SSMSTR;        /* Sequencer State Machine State Register */
    register8_t SSMXSR;        /* Sequencer State Machine Extended State Register */
    register8_t MSMCR1;        /* Master State Machine Control Register 1 */
    register8_t MSMCR2;        /* Master State Machine Control Register 2 */
    register8_t MSMCR3;        /* Master State Machine Control Register 3 */
    register8_t MSMCR4;        /* Master State Machine Control Register 4 */
    register8_t GTCR;          /* Get Telegram Control Register */
    register8_t rsv_0xFE[34];  /* RESERVED REGISTER BLOCK */
    register8_t SOTC1A;        /* Start Of Telegram Conditions 1 Path A */
    register8_t SOTC2A;        /* Start Of Telegram Conditions 2 Path A */
    register8_t SOTC1B;        /* Start Of Telegram Conditions 1 Path B */
    register8_t SOTC2B;        /* Start Of Telegram Conditions 2 Path B */
    register8_t EOTC1A;        /* End Of Telegram Conditions 1 Path A */
    register8_t EOTC2A;        /* End Of Telegram Conditions 2 Path A */
    register8_t EOTC3A;        /* End Of Telegram Conditions 3 Path A */
    register8_t EOTC1B;        /* End Of Telegram Conditions 1 Path B */
    register8_t EOTC2B;        /* End Of Telegram Conditions 2 Path B */
    register8_t EOTC3B;        /* End Of Telegram Conditions 3 Path B */
    register8_t WCOTOA;        /* Wake Check Ok Time-Out Path A */
    register8_t WCOTOB;        /* Wake Check Ok Time-Out Path B */
    register8_t SOTTOA;        /* Start Of Telegram Time Out Path A */
    register8_t SOTTOB;        /* Start Of Telegram Time Out Path B */
    register8_t SSMFCR;        /* Sequencer State Machine Flow Control Register */
} SSM_t;


/* End Of Telegram Path B Fail Enable */
typedef enum SSM_EOTBFE1_enum
{
    SSM_EOTBFE1_CLEAR_gc = (0x00), /* End Of Telegram Path B Fail Enable - CLEAR */
    SSM_EOTBFE1_SET_gc   = (0x80), /* End Of Telegram Path B Fail Enable - SET */
} SSM_EOTBFE1_t;

/* RSSI Range Fail Enable Path A */
typedef enum SSM_RRFEA1_enum
{
    SSM_RRFEA1_CLEAR_gc = (0x00), /* RSSI Range Fail Enable Path A - CLEAR */
    SSM_RRFEA1_SET_gc   = (0x40), /* RSSI Range Fail Enable Path A - SET */
} SSM_RRFEA1_t;

/* Telegram Length Reached Enable Path A */
typedef enum SSM_TELREA1_enum
{
    SSM_TELREA1_CLEAR_gc = (0x00), /* Telegram Length Reached Enable Path A - CLEAR */
    SSM_TELREA1_SET_gc   = (0x20), /* Telegram Length Reached Enable Path A - SET */
} SSM_TELREA1_t;

/* Time-Out Fail Enable Path A */
typedef enum SSM_TMOFEA1_enum
{
    SSM_TMOFEA1_CLEAR_gc = (0x00), /* Time-Out Fail Enable Path A - CLEAR */
    SSM_TMOFEA1_SET_gc   = (0x10), /* Time-Out Fail Enable Path A - SET */
} SSM_TMOFEA1_t;

/* Manchester Coding Fail Enable Path A */
typedef enum SSM_MANFEA1_enum
{
    SSM_MANFEA1_CLEAR_gc = (0x00), /* Manchester Coding Fail Enable Path A - CLEAR */
    SSM_MANFEA1_SET_gc   = (0x08), /* Manchester Coding Fail Enable Path A - SET */
} SSM_MANFEA1_t;

/* Symbol Timing Fail Enable Path A */
typedef enum SSM_SYTFEA1_enum
{
    SSM_SYTFEA1_CLEAR_gc = (0x00), /* Symbol Timing Fail Enable Path A - CLEAR */
    SSM_SYTFEA1_SET_gc   = (0x04), /* Symbol Timing Fail Enable Path A - SET */
} SSM_SYTFEA1_t;

/* Modulation Amplitude Fail Enable Path A */
typedef enum SSM_AMPFEA1_enum
{
    SSM_AMPFEA1_CLEAR_gc = (0x00), /* Modulation Amplitude Fail Enable Path A - CLEAR */
    SSM_AMPFEA1_SET_gc   = (0x02), /* Modulation Amplitude Fail Enable Path A - SET */
} SSM_AMPFEA1_t;

/* RF Carrier Fail Enable Path A */
typedef enum SSM_CARFEA1_enum
{
    SSM_CARFEA1_CLEAR_gc = (0x00), /* RF Carrier Fail Enable Path A - CLEAR */
    SSM_CARFEA1_SET_gc   = (0x01), /* RF Carrier Fail Enable Path A - SET */
} SSM_CARFEA1_t;

/* End Of Telegram Path A Fail Enable */
typedef enum SSM_EOTAFE1_enum
{
    SSM_EOTAFE1_CLEAR_gc = (0x00), /* End Of Telegram Path A Fail Enable - CLEAR */
    SSM_EOTAFE1_SET_gc   = (0x80), /* End Of Telegram Path A Fail Enable - SET */
} SSM_EOTAFE1_t;

/* RSSI Range Fail Enable Path B */
typedef enum SSM_RRFEB1_enum
{
    SSM_RRFEB1_CLEAR_gc = (0x00), /* RSSI Range Fail Enable Path B - CLEAR */
    SSM_RRFEB1_SET_gc   = (0x40), /* RSSI Range Fail Enable Path B - SET */
} SSM_RRFEB1_t;

/* Telegram Length Reached Enable Path B */
typedef enum SSM_TELREB1_enum
{
    SSM_TELREB1_CLEAR_gc = (0x00), /* Telegram Length Reached Enable Path B - CLEAR */
    SSM_TELREB1_SET_gc   = (0x20), /* Telegram Length Reached Enable Path B - SET */
} SSM_TELREB1_t;

/* Time-Out Fail Enable Path B */
typedef enum SSM_TMOFEB1_enum
{
    SSM_TMOFEB1_CLEAR_gc = (0x00), /* Time-Out Fail Enable Path B - CLEAR */
    SSM_TMOFEB1_SET_gc   = (0x10), /* Time-Out Fail Enable Path B - SET */
} SSM_TMOFEB1_t;

/* Manchester Coding Fail Enable Path B */
typedef enum SSM_MANFEB1_enum
{
    SSM_MANFEB1_CLEAR_gc = (0x00), /* Manchester Coding Fail Enable Path B - CLEAR */
    SSM_MANFEB1_SET_gc   = (0x08), /* Manchester Coding Fail Enable Path B - SET */
} SSM_MANFEB1_t;

/* Symbol Timing Fail Enable Path B */
typedef enum SSM_SYTFEB1_enum
{
    SSM_SYTFEB1_CLEAR_gc = (0x00), /* Symbol Timing Fail Enable Path B - CLEAR */
    SSM_SYTFEB1_SET_gc   = (0x04), /* Symbol Timing Fail Enable Path B - SET */
} SSM_SYTFEB1_t;

/* Modulation Amplitude Fail Enable Path B */
typedef enum SSM_AMPFEB1_enum
{
    SSM_AMPFEB1_CLEAR_gc = (0x00), /* Modulation Amplitude Fail Enable Path B - CLEAR */
    SSM_AMPFEB1_SET_gc   = (0x02), /* Modulation Amplitude Fail Enable Path B - SET */
} SSM_AMPFEB1_t;

/* RF Carrier Fail Enable Path B */
typedef enum SSM_CARFEB1_enum
{
    SSM_CARFEB1_CLEAR_gc = (0x00), /* RF Carrier Fail Enable Path B - CLEAR */
    SSM_CARFEB1_SET_gc   = (0x01), /* RF Carrier Fail Enable Path B - SET */
} SSM_CARFEB1_t;

/* End Of Telegram Path B Fail Enable */
typedef enum SSM_EOTBFE2_enum
{
    SSM_EOTBFE2_CLEAR_gc = (0x00), /* End Of Telegram Path B Fail Enable - CLEAR */
    SSM_EOTBFE2_SET_gc   = (0x80), /* End Of Telegram Path B Fail Enable - SET */
} SSM_EOTBFE2_t;

/* RSSI Range Fail Enable Path A */
typedef enum SSM_RRFEA2_enum
{
    SSM_RRFEA2_CLEAR_gc = (0x00), /* RSSI Range Fail Enable Path A - CLEAR */
    SSM_RRFEA2_SET_gc   = (0x40), /* RSSI Range Fail Enable Path A - SET */
} SSM_RRFEA2_t;

/* Telegram Length Reached Enable Path A */
typedef enum SSM_TELREA2_enum
{
    SSM_TELREA2_CLEAR_gc = (0x00), /* Telegram Length Reached Enable Path A - CLEAR */
    SSM_TELREA2_SET_gc   = (0x20), /* Telegram Length Reached Enable Path A - SET */
} SSM_TELREA2_t;

/* Time-Out Fail Enable Path A */
typedef enum SSM_TMOFEA2_enum
{
    SSM_TMOFEA2_CLEAR_gc = (0x00), /* Time-Out Fail Enable Path A - CLEAR */
    SSM_TMOFEA2_SET_gc   = (0x10), /* Time-Out Fail Enable Path A - SET */
} SSM_TMOFEA2_t;

/* Manchester Coding Fail Enable Path A */
typedef enum SSM_MANFEA2_enum
{
    SSM_MANFEA2_CLEAR_gc = (0x00), /* Manchester Coding Fail Enable Path A - CLEAR */
    SSM_MANFEA2_SET_gc   = (0x08), /* Manchester Coding Fail Enable Path A - SET */
} SSM_MANFEA2_t;

/* Symbol Timing Fail Enable Path A */
typedef enum SSM_SYTFEA2_enum
{
    SSM_SYTFEA2_CLEAR_gc = (0x00), /* Symbol Timing Fail Enable Path A - CLEAR */
    SSM_SYTFEA2_SET_gc   = (0x04), /* Symbol Timing Fail Enable Path A - SET */
} SSM_SYTFEA2_t;

/* Modulation Amplitude Fail Enable Path A */
typedef enum SSM_AMPFEA2_enum
{
    SSM_AMPFEA2_CLEAR_gc = (0x00), /* Modulation Amplitude Fail Enable Path A - CLEAR */
    SSM_AMPFEA2_SET_gc   = (0x02), /* Modulation Amplitude Fail Enable Path A - SET */
} SSM_AMPFEA2_t;

/* RF Carrier Fail Enable Path A */
typedef enum SSM_CARFEA2_enum
{
    SSM_CARFEA2_CLEAR_gc = (0x00), /* RF Carrier Fail Enable Path A - CLEAR */
    SSM_CARFEA2_SET_gc   = (0x01), /* RF Carrier Fail Enable Path A - SET */
} SSM_CARFEA2_t;

/* End Of Telegram Path A Fail Enable */
typedef enum SSM_EOTAFE2_enum
{
    SSM_EOTAFE2_CLEAR_gc = (0x00), /* End Of Telegram Path A Fail Enable - CLEAR */
    SSM_EOTAFE2_SET_gc   = (0x80), /* End Of Telegram Path A Fail Enable - SET */
} SSM_EOTAFE2_t;

/* RSSI Range Fail Enable Path B */
typedef enum SSM_RRFEB2_enum
{
    SSM_RRFEB2_CLEAR_gc = (0x00), /* RSSI Range Fail Enable Path B - CLEAR */
    SSM_RRFEB2_SET_gc   = (0x40), /* RSSI Range Fail Enable Path B - SET */
} SSM_RRFEB2_t;

/* Telegram Length Reached Enable Path B */
typedef enum SSM_TELREB2_enum
{
    SSM_TELREB2_CLEAR_gc = (0x00), /* Telegram Length Reached Enable Path B - CLEAR */
    SSM_TELREB2_SET_gc   = (0x20), /* Telegram Length Reached Enable Path B - SET */
} SSM_TELREB2_t;

/* Time-Out Fail Enable Path B */
typedef enum SSM_TMOFEB2_enum
{
    SSM_TMOFEB2_CLEAR_gc = (0x00), /* Time-Out Fail Enable Path B - CLEAR */
    SSM_TMOFEB2_SET_gc   = (0x10), /* Time-Out Fail Enable Path B - SET */
} SSM_TMOFEB2_t;

/* Manchester Coding Fail Enable Path B */
typedef enum SSM_MANFEB2_enum
{
    SSM_MANFEB2_CLEAR_gc = (0x00), /* Manchester Coding Fail Enable Path B - CLEAR */
    SSM_MANFEB2_SET_gc   = (0x08), /* Manchester Coding Fail Enable Path B - SET */
} SSM_MANFEB2_t;

/* Symbol Timing Fail Enable Path B */
typedef enum SSM_SYTFEB2_enum
{
    SSM_SYTFEB2_CLEAR_gc = (0x00), /* Symbol Timing Fail Enable Path B - CLEAR */
    SSM_SYTFEB2_SET_gc   = (0x04), /* Symbol Timing Fail Enable Path B - SET */
} SSM_SYTFEB2_t;

/* Modulation Amplitude Fail Enable Path B */
typedef enum SSM_AMPFEB2_enum
{
    SSM_AMPFEB2_CLEAR_gc = (0x00), /* Modulation Amplitude Fail Enable Path B - CLEAR */
    SSM_AMPFEB2_SET_gc   = (0x02), /* Modulation Amplitude Fail Enable Path B - SET */
} SSM_AMPFEB2_t;

/* RF Carrier Fail Enable Path B */
typedef enum SSM_CARFEB2_enum
{
    SSM_CARFEB2_CLEAR_gc = (0x00), /* RF Carrier Fail Enable Path B - CLEAR */
    SSM_CARFEB2_SET_gc   = (0x01), /* RF Carrier Fail Enable Path B - SET */
} SSM_CARFEB2_t;

/* End Of Telegram Path B Fail Enable */
typedef enum SSM_EOTBFE3_enum
{
    SSM_EOTBFE3_CLEAR_gc = (0x00), /* End Of Telegram Path B Fail Enable - CLEAR */
    SSM_EOTBFE3_SET_gc   = (0x80), /* End Of Telegram Path B Fail Enable - SET */
} SSM_EOTBFE3_t;

/* RSSI Range Fail Enable Path A */
typedef enum SSM_RRFEA3_enum
{
    SSM_RRFEA3_CLEAR_gc = (0x00), /* RSSI Range Fail Enable Path A - CLEAR */
    SSM_RRFEA3_SET_gc   = (0x40), /* RSSI Range Fail Enable Path A - SET */
} SSM_RRFEA3_t;

/* Telegram Length Reached Enable Path A */
typedef enum SSM_TELREA3_enum
{
    SSM_TELREA3_CLEAR_gc = (0x00), /* Telegram Length Reached Enable Path A - CLEAR */
    SSM_TELREA3_SET_gc   = (0x20), /* Telegram Length Reached Enable Path A - SET */
} SSM_TELREA3_t;

/* Time-Out Fail Enable Path A */
typedef enum SSM_TMOFEA3_enum
{
    SSM_TMOFEA3_CLEAR_gc = (0x00), /* Time-Out Fail Enable Path A - CLEAR */
    SSM_TMOFEA3_SET_gc   = (0x10), /* Time-Out Fail Enable Path A - SET */
} SSM_TMOFEA3_t;

/* Manchester Coding Fail Enable Path A */
typedef enum SSM_MANFEA3_enum
{
    SSM_MANFEA3_CLEAR_gc = (0x00), /* Manchester Coding Fail Enable Path A - CLEAR */
    SSM_MANFEA3_SET_gc   = (0x08), /* Manchester Coding Fail Enable Path A - SET */
} SSM_MANFEA3_t;

/* Symbol Timing Fail Enable Path A */
typedef enum SSM_SYTFEA3_enum
{
    SSM_SYTFEA3_CLEAR_gc = (0x00), /* Symbol Timing Fail Enable Path A - CLEAR */
    SSM_SYTFEA3_SET_gc   = (0x04), /* Symbol Timing Fail Enable Path A - SET */
} SSM_SYTFEA3_t;

/* Modulation Amplitude Fail Enable Path A */
typedef enum SSM_AMPFEA3_enum
{
    SSM_AMPFEA3_CLEAR_gc = (0x00), /* Modulation Amplitude Fail Enable Path A - CLEAR */
    SSM_AMPFEA3_SET_gc   = (0x02), /* Modulation Amplitude Fail Enable Path A - SET */
} SSM_AMPFEA3_t;

/* RF Carrier Fail Enable Path A */
typedef enum SSM_CARFEA3_enum
{
    SSM_CARFEA3_CLEAR_gc = (0x00), /* RF Carrier Fail Enable Path A - CLEAR */
    SSM_CARFEA3_SET_gc   = (0x01), /* RF Carrier Fail Enable Path A - SET */
} SSM_CARFEA3_t;

/* End Of Telegram Path A Fail Enable */
typedef enum SSM_EOTAFE3_enum
{
    SSM_EOTAFE3_CLEAR_gc = (0x00), /* End Of Telegram Path A Fail Enable - CLEAR */
    SSM_EOTAFE3_SET_gc   = (0x80), /* End Of Telegram Path A Fail Enable - SET */
} SSM_EOTAFE3_t;

/* RSSI Range Fail Enable Path B */
typedef enum SSM_RRFEB3_enum
{
    SSM_RRFEB3_CLEAR_gc = (0x00), /* RSSI Range Fail Enable Path B - CLEAR */
    SSM_RRFEB3_SET_gc   = (0x40), /* RSSI Range Fail Enable Path B - SET */
} SSM_RRFEB3_t;

/* Telegram Length Reached Enable Path B */
typedef enum SSM_TELREB3_enum
{
    SSM_TELREB3_CLEAR_gc = (0x00), /* Telegram Length Reached Enable Path B - CLEAR */
    SSM_TELREB3_SET_gc   = (0x20), /* Telegram Length Reached Enable Path B - SET */
} SSM_TELREB3_t;

/* Time-Out Fail Enable Path B */
typedef enum SSM_TMOFEB3_enum
{
    SSM_TMOFEB3_CLEAR_gc = (0x00), /* Time-Out Fail Enable Path B - CLEAR */
    SSM_TMOFEB3_SET_gc   = (0x10), /* Time-Out Fail Enable Path B - SET */
} SSM_TMOFEB3_t;

/* Manchester Coding Fail Enable Path B */
typedef enum SSM_MANFEB3_enum
{
    SSM_MANFEB3_CLEAR_gc = (0x00), /* Manchester Coding Fail Enable Path B - CLEAR */
    SSM_MANFEB3_SET_gc   = (0x08), /* Manchester Coding Fail Enable Path B - SET */
} SSM_MANFEB3_t;

/* Symbol Timing Fail Enable Path B */
typedef enum SSM_SYTFEB3_enum
{
    SSM_SYTFEB3_CLEAR_gc = (0x00), /* Symbol Timing Fail Enable Path B - CLEAR */
    SSM_SYTFEB3_SET_gc   = (0x04), /* Symbol Timing Fail Enable Path B - SET */
} SSM_SYTFEB3_t;

/* Modulation Amplitude Fail Enable Path B */
typedef enum SSM_AMPFEB3_enum
{
    SSM_AMPFEB3_CLEAR_gc = (0x00), /* Modulation Amplitude Fail Enable Path B - CLEAR */
    SSM_AMPFEB3_SET_gc   = (0x02), /* Modulation Amplitude Fail Enable Path B - SET */
} SSM_AMPFEB3_t;

/* RF Carrier Fail Enable Path B */
typedef enum SSM_CARFEB3_enum
{
    SSM_CARFEB3_CLEAR_gc = (0x00), /* RF Carrier Fail Enable Path B - CLEAR */
    SSM_CARFEB3_SET_gc   = (0x01), /* RF Carrier Fail Enable Path B - SET */
} SSM_CARFEB3_t;

/* Intermittent WUP Mode Path B */
typedef enum SSM_IWUPB_enum
{
    SSM_IWUPB_CLEAR_gc = (0x00), /* Intermittent WUP Mode Path B - CLEAR */
    SSM_IWUPB_SET_gc   = (0x80), /* Intermittent WUP Mode Path B - SET */
} SSM_IWUPB_t;

/* Demodulator Automatic Restart Path B */
typedef enum SSM_DARB_enum
{
    SSM_DARB_CLEAR_gc = (0x00), /* Demodulator Automatic Restart Path B - CLEAR */
    SSM_DARB_SET_gc   = (0x40), /* Demodulator Automatic Restart Path B - SET */
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

/* Demodulator Automatic Restart Path A */
typedef enum SSM_DARA_enum
{
    SSM_DARA_CLEAR_gc = (0x00), /* Demodulator Automatic Restart Path A - CLEAR */
    SSM_DARA_SET_gc   = (0x04), /* Demodulator Automatic Restart Path A - SET */
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

/* Master State Machine Sub-State Machine Select 1 */
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
} SSM_MSMSM1_t;

/* Master State Machine Sub-State Machine Select 0 */
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
} SSM_MSMSM0_t;

/* Master State Machine Sub-State Machine Select 3 */
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
} SSM_MSMSM3_t;

/* Master State Machine Sub-State Machine Select 2 */
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
} SSM_MSMSM2_t;

/* Master State Machine Sub-State Machine Select 5 */
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
} SSM_MSMSM5_t;

/* Master State Machine Sub-State Machine Select 4 */
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
} SSM_MSMSM4_t;

/* Master State Machine Sub-State Machine Select 7 */
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
} SSM_MSMSM7_t;

/* Master State Machine Sub-State Machine Select 6 */
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
} SSM_MSMSM6_t;

/* Wake Check Ok Path B Ok Enable */
typedef enum SSM_WCOBOE1_enum
{
    SSM_WCOBOE1_CLEAR_gc = (0x00), /* Wake Check Ok Path B Ok Enable - CLEAR */
    SSM_WCOBOE1_SET_gc   = (0x80), /* Wake Check Ok Path B Ok Enable - SET */
} SSM_WCOBOE1_t;

/* RSSI Range Ok Enable Path A */
typedef enum SSM_RROEA1_enum
{
    SSM_RROEA1_CLEAR_gc = (0x00), /* RSSI Range Ok Enable Path A - CLEAR */
    SSM_RROEA1_SET_gc   = (0x40), /* RSSI Range Ok Enable Path A - SET */
} SSM_RROEA1_t;

/* Start of Frame Identifier Enable Path A */
typedef enum SSM_SFIDEA1_enum
{
    SSM_SFIDEA1_CLEAR_gc = (0x00), /* Start of Frame Identifier Enable Path A - CLEAR */
    SSM_SFIDEA1_SET_gc   = (0x20), /* Start of Frame Identifier Enable Path A - SET */
} SSM_SFIDEA1_t;

/* Wake Up Pattern Enable Path A */
typedef enum SSM_WUPEA1_enum
{
    SSM_WUPEA1_CLEAR_gc = (0x00), /* Wake Up Pattern Enable Path A - CLEAR */
    SSM_WUPEA1_SET_gc   = (0x10), /* Wake Up Pattern Enable Path A - SET */
} SSM_WUPEA1_t;

/* Manchester Coding Ok Enable Path A */
typedef enum SSM_MANOEA1_enum
{
    SSM_MANOEA1_CLEAR_gc = (0x00), /* Manchester Coding Ok Enable Path A - CLEAR */
    SSM_MANOEA1_SET_gc   = (0x08), /* Manchester Coding Ok Enable Path A - SET */
} SSM_MANOEA1_t;

/* Symbol Timing Ok Enable Path A */
typedef enum SSM_SYTOEA1_enum
{
    SSM_SYTOEA1_CLEAR_gc = (0x00), /* Symbol Timing Ok Enable Path A - CLEAR */
    SSM_SYTOEA1_SET_gc   = (0x04), /* Symbol Timing Ok Enable Path A - SET */
} SSM_SYTOEA1_t;

/* Modulation Amplitude Ok Enable Path A */
typedef enum SSM_AMPOEA1_enum
{
    SSM_AMPOEA1_CLEAR_gc = (0x00), /* Modulation Amplitude Ok Enable Path A - CLEAR */
    SSM_AMPOEA1_SET_gc   = (0x02), /* Modulation Amplitude Ok Enable Path A - SET */
} SSM_AMPOEA1_t;

/* RF Carrier Ok Enable Path A */
typedef enum SSM_CAROEA1_enum
{
    SSM_CAROEA1_CLEAR_gc = (0x00), /* RF Carrier Ok Enable Path A - CLEAR */
    SSM_CAROEA1_SET_gc   = (0x01), /* RF Carrier Ok Enable Path A - SET */
} SSM_CAROEA1_t;

/* Wake Check Ok Path A Ok Enable */
typedef enum SSM_WCOAOE1_enum
{
    SSM_WCOAOE1_CLEAR_gc = (0x00), /* Wake Check Ok Path A Ok Enable - CLEAR */
    SSM_WCOAOE1_SET_gc   = (0x80), /* Wake Check Ok Path A Ok Enable - SET */
} SSM_WCOAOE1_t;

/* RSSI Range Ok Enable Path B */
typedef enum SSM_RROEB1_enum
{
    SSM_RROEB1_CLEAR_gc = (0x00), /* RSSI Range Ok Enable Path B - CLEAR */
    SSM_RROEB1_SET_gc   = (0x40), /* RSSI Range Ok Enable Path B - SET */
} SSM_RROEB1_t;

/* Start of Frame Identifier Enable Path B */
typedef enum SSM_SFIDEB1_enum
{
    SSM_SFIDEB1_CLEAR_gc = (0x00), /* Start of Frame Identifier Enable Path B - CLEAR */
    SSM_SFIDEB1_SET_gc   = (0x20), /* Start of Frame Identifier Enable Path B - SET */
} SSM_SFIDEB1_t;

/* Wake Up Pattern Enable Path B */
typedef enum SSM_WUPEB1_enum
{
    SSM_WUPEB1_CLEAR_gc = (0x00), /* Wake Up Pattern Enable Path B - CLEAR */
    SSM_WUPEB1_SET_gc   = (0x10), /* Wake Up Pattern Enable Path B - SET */
} SSM_WUPEB1_t;

/* Manchester Coding Ok Enable Path B */
typedef enum SSM_MANOEB1_enum
{
    SSM_MANOEB1_CLEAR_gc = (0x00), /* Manchester Coding Ok Enable Path B - CLEAR */
    SSM_MANOEB1_SET_gc   = (0x08), /* Manchester Coding Ok Enable Path B - SET */
} SSM_MANOEB1_t;

/* Symbol Timing Ok Enable Path B */
typedef enum SSM_SYTOEB1_enum
{
    SSM_SYTOEB1_CLEAR_gc = (0x00), /* Symbol Timing Ok Enable Path B - CLEAR */
    SSM_SYTOEB1_SET_gc   = (0x04), /* Symbol Timing Ok Enable Path B - SET */
} SSM_SYTOEB1_t;

/* Modulation Amplitude Ok Enable Path B */
typedef enum SSM_AMPOEB1_enum
{
    SSM_AMPOEB1_CLEAR_gc = (0x00), /* Modulation Amplitude Ok Enable Path B - CLEAR */
    SSM_AMPOEB1_SET_gc   = (0x02), /* Modulation Amplitude Ok Enable Path B - SET */
} SSM_AMPOEB1_t;

/* RF Carrier Ok Enable Path B */
typedef enum SSM_CAROEB1_enum
{
    SSM_CAROEB1_CLEAR_gc = (0x00), /* RF Carrier Ok Enable Path B - CLEAR */
    SSM_CAROEB1_SET_gc   = (0x01), /* RF Carrier Ok Enable Path B - SET */
} SSM_CAROEB1_t;

/* Wake Check Ok Path B Ok Enable */
typedef enum SSM_WCOBOE2_enum
{
    SSM_WCOBOE2_CLEAR_gc = (0x00), /* Wake Check Ok Path B Ok Enable - CLEAR */
    SSM_WCOBOE2_SET_gc   = (0x80), /* Wake Check Ok Path B Ok Enable - SET */
} SSM_WCOBOE2_t;

/* RSSI Range Ok Enable Path A */
typedef enum SSM_RROEA2_enum
{
    SSM_RROEA2_CLEAR_gc = (0x00), /* RSSI Range Ok Enable Path A - CLEAR */
    SSM_RROEA2_SET_gc   = (0x40), /* RSSI Range Ok Enable Path A - SET */
} SSM_RROEA2_t;

/* Start of Frame Identifier Enable Path A */
typedef enum SSM_SFIDEA2_enum
{
    SSM_SFIDEA2_CLEAR_gc = (0x00), /* Start of Frame Identifier Enable Path A - CLEAR */
    SSM_SFIDEA2_SET_gc   = (0x20), /* Start of Frame Identifier Enable Path A - SET */
} SSM_SFIDEA2_t;

/* Wake Up Pattern Enable Path A */
typedef enum SSM_WUPEA2_enum
{
    SSM_WUPEA2_CLEAR_gc = (0x00), /* Wake Up Pattern Enable Path A - CLEAR */
    SSM_WUPEA2_SET_gc   = (0x10), /* Wake Up Pattern Enable Path A - SET */
} SSM_WUPEA2_t;

/* Manchester Coding Ok Enable Path A */
typedef enum SSM_MANOEA2_enum
{
    SSM_MANOEA2_CLEAR_gc = (0x00), /* Manchester Coding Ok Enable Path A - CLEAR */
    SSM_MANOEA2_SET_gc   = (0x08), /* Manchester Coding Ok Enable Path A - SET */
} SSM_MANOEA2_t;

/* Symbol Timing Ok Enable Path A */
typedef enum SSM_SYTOEA2_enum
{
    SSM_SYTOEA2_CLEAR_gc = (0x00), /* Symbol Timing Ok Enable Path A - CLEAR */
    SSM_SYTOEA2_SET_gc   = (0x04), /* Symbol Timing Ok Enable Path A - SET */
} SSM_SYTOEA2_t;

/* Modulation Amplitude Ok Enable Path A */
typedef enum SSM_AMPOEA2_enum
{
    SSM_AMPOEA2_CLEAR_gc = (0x00), /* Modulation Amplitude Ok Enable Path A - CLEAR */
    SSM_AMPOEA2_SET_gc   = (0x02), /* Modulation Amplitude Ok Enable Path A - SET */
} SSM_AMPOEA2_t;

/* RF Carrier Ok Enable Path A */
typedef enum SSM_CAROEA2_enum
{
    SSM_CAROEA2_CLEAR_gc = (0x00), /* RF Carrier Ok Enable Path A - CLEAR */
    SSM_CAROEA2_SET_gc   = (0x01), /* RF Carrier Ok Enable Path A - SET */
} SSM_CAROEA2_t;

/* Wake Check Ok Path A Ok Enable */
typedef enum SSM_WCOAOE2_enum
{
    SSM_WCOAOE2_CLEAR_gc = (0x00), /* Wake Check Ok Path A Ok Enable - CLEAR */
    SSM_WCOAOE2_SET_gc   = (0x80), /* Wake Check Ok Path A Ok Enable - SET */
} SSM_WCOAOE2_t;

/* RSSI Range Ok Enable Path B */
typedef enum SSM_RROEB2_enum
{
    SSM_RROEB2_CLEAR_gc = (0x00), /* RSSI Range Ok Enable Path B - CLEAR */
    SSM_RROEB2_SET_gc   = (0x40), /* RSSI Range Ok Enable Path B - SET */
} SSM_RROEB2_t;

/* Start of Frame Identifier Enable Path B */
typedef enum SSM_SFIDEB2_enum
{
    SSM_SFIDEB2_CLEAR_gc = (0x00), /* Start of Frame Identifier Enable Path B - CLEAR */
    SSM_SFIDEB2_SET_gc   = (0x20), /* Start of Frame Identifier Enable Path B - SET */
} SSM_SFIDEB2_t;

/* Wake Up Pattern Enable Path B */
typedef enum SSM_WUPEB2_enum
{
    SSM_WUPEB2_CLEAR_gc = (0x00), /* Wake Up Pattern Enable Path B - CLEAR */
    SSM_WUPEB2_SET_gc   = (0x10), /* Wake Up Pattern Enable Path B - SET */
} SSM_WUPEB2_t;

/* Manchester Coding Ok Enable Path B */
typedef enum SSM_MANOEB2_enum
{
    SSM_MANOEB2_CLEAR_gc = (0x00), /* Manchester Coding Ok Enable Path B - CLEAR */
    SSM_MANOEB2_SET_gc   = (0x08), /* Manchester Coding Ok Enable Path B - SET */
} SSM_MANOEB2_t;

/* Symbol Timing Ok Enable Path B */
typedef enum SSM_SYTOEB2_enum
{
    SSM_SYTOEB2_CLEAR_gc = (0x00), /* Symbol Timing Ok Enable Path B - CLEAR */
    SSM_SYTOEB2_SET_gc   = (0x04), /* Symbol Timing Ok Enable Path B - SET */
} SSM_SYTOEB2_t;

/* Modulation Amplitude Ok Enable Path B */
typedef enum SSM_AMPOEB2_enum
{
    SSM_AMPOEB2_CLEAR_gc = (0x00), /* Modulation Amplitude Ok Enable Path B - CLEAR */
    SSM_AMPOEB2_SET_gc   = (0x02), /* Modulation Amplitude Ok Enable Path B - SET */
} SSM_AMPOEB2_t;

/* RF Carrier Ok Enable Path B */
typedef enum SSM_CAROEB2_enum
{
    SSM_CAROEB2_CLEAR_gc = (0x00), /* RF Carrier Ok Enable Path B - CLEAR */
    SSM_CAROEB2_SET_gc   = (0x01), /* RF Carrier Ok Enable Path B - SET */
} SSM_CAROEB2_t;

/* SSM Enable Raw Transparent Path B */
typedef enum SSM_SETRPB_enum
{
    SSM_SETRPB_CLEAR_gc = (0x00), /* SSM Enable Raw Transparent Path B - CLEAR */
    SSM_SETRPB_SET_gc   = (0x80), /* SSM Enable Raw Transparent Path B - SET */
} SSM_SETRPB_t;

/* SSM Enable Transparent Path A */
typedef enum SSM_SETRPA_enum
{
    SSM_SETRPA_CLEAR_gc = (0x00), /* SSM Enable Transparent Path A - CLEAR */
    SSM_SETRPA_SET_gc   = (0x40), /* SSM Enable Transparent Path A - SET */
} SSM_SETRPA_t;

/* SSM Tx ASK-Shaping Enable */
typedef enum SSM_SSMTAE_enum
{
    SSM_SSMTAE_CLEAR_gc = (0x00), /* SSM Tx ASK-Shaping Enable - CLEAR */
    SSM_SSMTAE_SET_gc   = (0x20), /* SSM Tx ASK-Shaping Enable - SET */
} SSM_SSMTAE_t;

/* SSM PA Voltage Enable */
typedef enum SSM_SSMPVE_enum
{
    SSM_SSMPVE_CLEAR_gc = (0x00), /* SSM PA Voltage Enable - CLEAR */
    SSM_SSMPVE_SET_gc   = (0x10), /* SSM PA Voltage Enable - SET */
} SSM_SSMPVE_t;

/* SSM Tx Preemphasis Enable */
typedef enum SSM_SSMTPE_enum
{
    SSM_SSMTPE_CLEAR_gc = (0x00), /* SSM Tx Preemphasis Enable - CLEAR */
    SSM_SSMTPE_SET_gc   = (0x08), /* SSM Tx Preemphasis Enable - SET */
} SSM_SSMTPE_t;

/* SSM Tx Gauss Shaping Enable */
typedef enum SSM_SSMTGE_enum
{
    SSM_SSMTGE_CLEAR_gc = (0x00), /* SSM Tx Gauss Shaping Enable - CLEAR */
    SSM_SSMTGE_SET_gc   = (0x04), /* SSM Tx Gauss Shaping Enable - SET */
} SSM_SSMTGE_t;

/* SSM Temperature Measurement */
typedef enum SSM_SSMTM_enum
{
    SSM_SSMTM_CLEAR_gc = (0x00), /* SSM Temperature Measurement - CLEAR */
    SSM_SSMTM_SET_gc   = (0x02), /* SSM Temperature Measurement - SET */
} SSM_SSMTM_t;

/* SSM Tx */
typedef enum SSM_SSMTX_enum
{
    SSM_SSMTX_CLEAR_gc = (0x00), /* SSM Tx - CLEAR */
    SSM_SSMTX_SET_gc   = (0x01), /* SSM Tx - SET */
} SSM_SSMTX_t;

/* SSM PLL Lock Delay Time */
typedef enum SSM_SSMPLDT_enum
{
    SSM_SSMPLDT_CLEAR_gc = (0x00), /* SSM PLL Lock Delay Time - CLEAR */
    SSM_SSMPLDT_SET_gc   = (0x20), /* SSM PLL Lock Delay Time - SET */
} SSM_SSMPLDT_t;

/* SSM Half Antenna Damping Delay Time */
typedef enum SSM_SSMHADT_enum
{
    SSM_SSMHADT_CLEAR_gc = (0x00), /* SSM Half Antenna Damping Delay Time - CLEAR */
    SSM_SSMHADT_SET_gc   = (0x10), /* SSM Half Antenna Damping Delay Time - SET */
} SSM_SSMHADT_t;

/* SSM Double Filter Delay Time */
typedef enum SSM_SSMDFDT_enum
{
    SSM_SSMDFDT_CLEAR_gc = (0x00), /* SSM Double Filter Delay Time - CLEAR */
    SSM_SSMDFDT_SET_gc   = (0x08), /* SSM Double Filter Delay Time - SET */
} SSM_SSMDFDT_t;

/* SSM Filter Delay */
typedef enum SSM_SSMFID_enum
{
    SSM_SSMFID_VAL_0x00_gc = (0x00), /* 380us (25kHz) */
    SSM_SSMFID_VAL_0x01_gc = (0x01), /* 202us (50kHz) */
    SSM_SSMFID_VAL_0x02_gc = (0x02), /* 135us (80kHz) */
    SSM_SSMFID_VAL_0x03_gc = (0x03), /*  75us (165kHz) */
    SSM_SSMFID_VAL_0x04_gc = (0x04), /*  58.5us (235kHz) */
    SSM_SSMFID_VAL_0x05_gc = (0x05), /*  45us (360kHz) */
} SSM_SSMFID_t;

/* SSM Continuous Start Telegram End Handling */
typedef enum SSM_SSMCEH_enum
{
    SSM_SSMCEH_CLEAR_gc = (0x00), /* SSM Continuous Start Telegram End Handling - CLEAR */
    SSM_SSMCEH_SET_gc   = (0x08), /* SSM Continuous Start Telegram End Handling - SET */
} SSM_SSMCEH_t;

/* SSM Single Start Telegram End Handling */
typedef enum SSM_SSMSEH_enum
{
    SSM_SSMSEH_CLEAR_gc = (0x00), /* SSM Single Start Telegram End Handling - CLEAR */
    SSM_SSMSEH_SET_gc   = (0x04), /* SSM Single Start Telegram End Handling - SET */
} SSM_SSMSEH_t;

/* SSM ID Scan Fail */
typedef enum SSM_SSMIDSF_enum
{
    SSM_SSMIDSF_CLEAR_gc = (0x00), /* SSM ID Scan Fail - CLEAR */
    SSM_SSMIDSF_SET_gc   = (0x02), /* SSM ID Scan Fail - SET */
} SSM_SSMIDSF_t;

/* SSM ID Scan OK */
typedef enum SSM_SSMIDSO_enum
{
    SSM_SSMIDSO_CLEAR_gc = (0x00), /* SSM ID Scan OK - CLEAR */
    SSM_SSMIDSO_SET_gc   = (0x01), /* SSM ID Scan OK - SET */
} SSM_SSMIDSO_t;

/* SSM Interrupt Flag */
typedef enum SSM_SSMIF_enum
{
    SSM_SSMIF_CLEAR_gc = (0x00), /* SSM Interrupt Flag - CLEAR */
    SSM_SSMIF_SET_gc   = (0x01), /* SSM Interrupt Flag - SET */
} SSM_SSMIF_t;

/* SSM Interrupt Mask */
typedef enum SSM_SSMIM_enum
{
    SSM_SSMIM_CLEAR_gc = (0x00), /* SSM Interrupt Mask - CLEAR */
    SSM_SSMIM_SET_gc   = (0x01), /* SSM Interrupt Mask - SET */
} SSM_SSMIM_t;

/* SSM Transparent Output Enable */
typedef enum SSM_SSMTMOE_enum
{
    SSM_SSMTMOE_CLEAR_gc = (0x00), /* SSM Transparent Output Enable - CLEAR */
    SSM_SSMTMOE_SET_gc   = (0x80), /* SSM Transparent Output Enable - SET */
} SSM_SSMTMOE_t;

/* SSM ID Check Enable */
typedef enum SSM_SSMIDSE_enum
{
    SSM_SSMIDSE_CLEAR_gc = (0x00), /* SSM ID Check Enable - CLEAR */
    SSM_SSMIDSE_SET_gc   = (0x40), /* SSM ID Check Enable - SET */
} SSM_SSMIDSE_t;

/* SSM IF Amplifier Enable */
typedef enum SSM_SSMIFA_enum
{
    SSM_SSMIFA_CLEAR_gc = (0x00), /* SSM IF Amplifier Enable - CLEAR */
    SSM_SSMIFA_SET_gc   = (0x20), /* SSM IF Amplifier Enable - SET */
} SSM_SSMIFA_t;

/* SSM Path Valid After SOT */
typedef enum SSM_SSMPVS_enum
{
    SSM_SSMPVS_CLEAR_gc = (0x00), /* SSM Path Valid After SOT - CLEAR */
    SSM_SSMPVS_SET_gc   = (0x10), /* SSM Path Valid After SOT - SET */
} SSM_SSMPVS_t;

/* SSM High Sensitivity Enable */
typedef enum SSM_SSMHIS_enum
{
    SSM_SSMHIS_CLEAR_gc = (0x00), /* SSM High Sensitivity Enable - CLEAR */
    SSM_SSMHIS_SET_gc   = (0x08), /* SSM High Sensitivity Enable - SET */
} SSM_SSMHIS_t;

/* SSM Antenna Damping Disable */
typedef enum SSM_SSMAD_enum
{
    SSM_SSMAD_CLEAR_gc = (0x00), /* SSM Antenna Damping Disable - CLEAR */
    SSM_SSMAD_SET_gc   = (0x04), /* SSM Antenna Damping Disable - SET */
} SSM_SSMAD_t;

/* SSM Path B */
typedef enum SSM_SSMPB_enum
{
    SSM_SSMPB_CLEAR_gc = (0x00), /* SSM Path B - CLEAR */
    SSM_SSMPB_SET_gc   = (0x02), /* SSM Path B - SET */
} SSM_SSMPB_t;

/* SSM Path A */
typedef enum SSM_SSMPA_enum
{
    SSM_SSMPA_CLEAR_gc = (0x00), /* SSM Path A - CLEAR */
    SSM_SSMPA_SET_gc   = (0x01), /* SSM Path A - SET */
} SSM_SSMPA_t;

/* SSM Stop */
typedef enum SSM_SSMST_enum
{
    SSM_SSMST_CLEAR_gc = (0x00), /* SSM Stop - CLEAR */
    SSM_SSMST_SET_gc   = (0x02), /* SSM Stop - SET */
} SSM_SSMST_t;

/* SSM Run */
typedef enum SSM_SSMR_enum
{
    SSM_SSMR_CLEAR_gc = (0x00), /* SSM Run - CLEAR */
    SSM_SSMR_SET_gc   = (0x01), /* SSM Run - SET */
} SSM_SSMR_t;

/* SSM Error */
typedef enum SSM_SSMERR_enum
{
    SSM_SSMERR_CLEAR_gc = (0x00), /* SSM Error - CLEAR */
    SSM_SSMERR_SET_gc   = (0x80), /* SSM Error - SET */
} SSM_SSMERR_t;

/* SSM Error State Machine */
#define SSM_SSMSR_SSMESM_gc(x) (x & 0x0F)

/*
--------------------------------------------------------------------------------
SUP - 
--------------------------------------------------------------------------------
*/

typedef struct SUP_struct
{
    register8_t rsv_0x00[208]; /* RESERVED REGISTER BLOCK */
    register8_t SUPFR;         /* Supply Flag Register */
    register8_t SUPCR;         /* Supply Control Register */
    register8_t rsv_0xD2[4];   /* RESERVED REGISTER BLOCK */
    register8_t DCCAL1;        /* DCDC Converter Calibration 1 */
    register8_t DCCAL2;        /* DCDC Converter Calibration 2 */
    register8_t DCCAL3;        /* DCDC Converter Calibration 3 */
    register8_t DCTST;         /* DCDC Converter Test Mode */
    register8_t rsv_0xDA[2];   /* RESERVED REGISTER BLOCK */
    register8_t RCTUNE4;       /* Resistor Capacitor 4 Bit Tuning */
    register8_t DCC1;          /* DCDC Converter Control 1 */
    register8_t DCC2;          /* DCDC Converter Control 2 */
} SUP_t;


/* DCDC Converter Clock Divider */
typedef enum SUP_DCCDIV_enum
{
    SUP_DCCDIV_VAL_0x00_gc = (0x00<<4), /* 16 (375kHz) */
    SUP_DCCDIV_VAL_0x01_gc = (0x01<<4), /* 12 (500kHz) */
    SUP_DCCDIV_VAL_0x02_gc = (0x02<<4), /*  8 (750kHz) */
    SUP_DCCDIV_VAL_0x03_gc = (0x03<<4), /*  6 (1MHz) */
} SUP_DCCDIV_t;

/* DCDC Converter High Side Switch */
typedef enum SUP_DCHSSW_enum
{
    SUP_DCHSSW_CLEAR_gc = (0x00), /* DCDC Converter High Side Switch - CLEAR */
    SUP_DCHSSW_SET_gc   = (0x02), /* DCDC Converter High Side Switch - SET */
} SUP_DCHSSW_t;

/* DCDC Converter Enable */
typedef enum SUP_DCEN_enum
{
    SUP_DCEN_CLEAR_gc = (0x00), /* DCDC Converter Enable - CLEAR */
    SUP_DCEN_SET_gc   = (0x01), /* DCDC Converter Enable - SET */
} SUP_DCEN_t;

/* DCDC Converter Driver Strength */
#define SUP_DCC2_DCDRV_gc(x) ((x<<4) & 0x30)

/* DCDC Converter Current Limit */
#define SUP_DCC2_DCCLIM_gc(x) ((x<<2) & 0x0C)

/* DCDC Converter Output Voltage */
typedef enum SUP_DCVOUT_enum
{
    SUP_DCVOUT_VAL_0x00_gc = (0x00), /* 2.2V */
    SUP_DCVOUT_VAL_0x01_gc = (0x01), /* 2.5V */
    SUP_DCVOUT_VAL_0x02_gc = (0x02), /* 2.8V */
    SUP_DCVOUT_VAL_0x03_gc = (0x03), /* 3.3V */
} SUP_DCVOUT_t;

/* Zero Crossing Calibration */
#define SUP_DCCAL1_ZCCAL_gc(x) ((x<<4) & 0xF0)

/* Current Limit Calibration */
#define SUP_DCCAL1_CCAL_gc(x) (x & 0x0F)

/* Offset Calibration */
#define SUP_DCCAL2_OFCAL_gc(x) ((x<<4) & 0xF0)

/* Dead Time Calibration */
#define SUP_DCCAL2_DTCAL_gc(x) (x & 0x0F)

/* 4 Bit Resistor Tuning */
#define SUP_RCTUNE4_RTUNE4_gc(x) ((x<<4) & 0xF0)

/* 4 Bit Capacitor Tuning */
#define SUP_RCTUNE4_CTUNE4_gc(x) (x & 0x0F)

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

/* Power Amplifier Regulator Double Internal Current */
typedef enum SUP_PVDIC_enum
{
    SUP_PVDIC_CLEAR_gc = (0x00), /* Power Amplifier Regulator Double Internal Current - CLEAR */
    SUP_PVDIC_SET_gc   = (0x10), /* Power Amplifier Regulator Double Internal Current - SET */
} SUP_PVDIC_t;

/* Power Amplifier Voltage 2.2V */
typedef enum SUP_PV22_enum
{
    SUP_PV22_CLEAR_gc = (0x00), /* Power Amplifier Voltage 2.2V - CLEAR */
    SUP_PV22_SET_gc   = (0x08), /* Power Amplifier Voltage 2.2V - SET */
} SUP_PV22_t;

/* Power Amplifier Voltage Supply Enable */
typedef enum SUP_PVEN_enum
{
    SUP_PVEN_CLEAR_gc = (0x00), /* Power Amplifier Voltage Supply Enable - CLEAR */
    SUP_PVEN_SET_gc   = (0x04), /* Power Amplifier Voltage Supply Enable - SET */
} SUP_PVEN_t;

/* AVCC Low Interrupt Mask */
typedef enum SUP_AVCCLM_enum
{
    SUP_AVCCLM_CLEAR_gc = (0x00), /* AVCC Low Interrupt Mask - CLEAR */
    SUP_AVCCLM_SET_gc   = (0x02), /* AVCC Low Interrupt Mask - SET */
} SUP_AVCCLM_t;

/* AVCC Reset Interrupt Mask */
typedef enum SUP_AVCCRM_enum
{
    SUP_AVCCRM_CLEAR_gc = (0x00), /* AVCC Reset Interrupt Mask - CLEAR */
    SUP_AVCCRM_SET_gc   = (0x01), /* AVCC Reset Interrupt Mask - SET */
} SUP_AVCCRM_t;

/* DCDC Converter Error Flag */
typedef enum SUP_DCERF_enum
{
    SUP_DCERF_CLEAR_gc = (0x00), /* DCDC Converter Error Flag - CLEAR */
    SUP_DCERF_SET_gc   = (0x08), /* DCDC Converter Error Flag - SET */
} SUP_DCERF_t;

/* DCDC Converter Ready Flag */
typedef enum SUP_DCRDYF_enum
{
    SUP_DCRDYF_CLEAR_gc = (0x00), /* DCDC Converter Ready Flag - CLEAR */
    SUP_DCRDYF_SET_gc   = (0x04), /* DCDC Converter Ready Flag - SET */
} SUP_DCRDYF_t;

/* AVCC Low Flag */
typedef enum SUP_AVCCLF_enum
{
    SUP_AVCCLF_CLEAR_gc = (0x00), /* AVCC Low Flag - CLEAR */
    SUP_AVCCLF_SET_gc   = (0x02), /* AVCC Low Flag - SET */
} SUP_AVCCLF_t;

/* AVCC Reset Flag */
typedef enum SUP_AVCCRF_enum
{
    SUP_AVCCRF_CLEAR_gc = (0x00), /* AVCC Reset Flag - CLEAR */
    SUP_AVCCRF_SET_gc   = (0x01), /* AVCC Reset Flag - SET */
} SUP_AVCCRF_t;

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
    register8_t WDTCR;        /* Watchdog Timer0 Control Register */
} TIMER0_WDT_t;


/* Timer0 Prescaler Reset */
typedef enum TIMER0_WDT_T0PR_enum
{
    TIMER0_WDT_T0PR_CLEAR_gc = (0x00), /* Timer0 Prescaler Reset - CLEAR */
    TIMER0_WDT_T0PR_SET_gc   = (0x10), /* Timer0 Prescaler Reset - SET */
} TIMER0_WDT_T0PR_t;

/* Timer0 Interrupt Enable */
typedef enum TIMER0_WDT_T0IE_enum
{
    TIMER0_WDT_T0IE_CLEAR_gc = (0x00), /* Timer0 Interrupt Enable - CLEAR */
    TIMER0_WDT_T0IE_SET_gc   = (0x08), /* Timer0 Interrupt Enable - SET */
} TIMER0_WDT_T0IE_t;

/* Timer0 Prescaler Select */
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

/* Watchdog Enable */
typedef enum TIMER0_WDT_WDE_enum
{
    TIMER0_WDT_WDE_CLEAR_gc = (0x00), /* Watchdog Enable - CLEAR */
    TIMER0_WDT_WDE_SET_gc   = (0x08), /* Watchdog Enable - SET */
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
    register8_t T1CR;         /* Timer1 Control Register */
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
    register8_t T3CR;         /* Timer3 Control Register */
    register8_t rsv_0x34[3];  /* RESERVED REGISTER BLOCK */
    register8_t T3IFR;        /* Timer3 Interrupt Flag Register */
    register8_t rsv_0x38[63]; /* RESERVED REGISTER BLOCK */
    _REGISTER16 (T3CNT);      /* Timer3 Counter */
    register8_t rsv_0x78;     /* RESERVED REGISTER */
    _REGISTER16 (T3COR);      /* Timer3 Compare */
    register8_t rsv_0x7A;     /* RESERVED REGISTER */
    _REGISTER16 (T3ICR);      /* Timer3 Input Capture */
    register8_t rsv_0x7C;     /* RESERVED REGISTER */
    register8_t T3MRA;        /* Timer3 Mode Register A */
    register8_t T3MRB;        /* Timer3 Mode Register B */
    register8_t T3IMR;        /* Timer3 Interrupt Mask Register */
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

/* Timer3 Capture Reset Mask */
typedef enum TIMER3_T3CPRM_enum
{
    TIMER3_T3CPRM_CLEAR_gc = (0x00), /* Timer3 Capture Reset Mask - CLEAR */
    TIMER3_T3CPRM_SET_gc   = (0x08), /* Timer3 Capture Reset Mask - SET */
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

/* Timer3 Overflow Flag */
typedef enum TIMER3_T3OFF_enum
{
    TIMER3_T3OFF_CLEAR_gc = (0x00), /* Timer3 Overflow Flag - CLEAR */
    TIMER3_T3OFF_SET_gc   = (0x01), /* Timer3 Overflow Flag - SET */
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

/* Timer3 Clock Select */
typedef enum TIMER3_T3CS_enum
{
    TIMER3_T3CS_VAL_0x00_gc = (0x00), /* clk_frc */
    TIMER3_T3CS_VAL_0x01_gc = (0x01), /* clk_T */
    TIMER3_T3CS_VAL_0x02_gc = (0x02), /* clk_xto4 */
    TIMER3_T3CS_VAL_0x03_gc = (0x03), /* clk_xto2 */
} TIMER3_T3CS_t;

/* Timer3 Input Capture Select */
typedef enum TIMER3_T3ICS_enum
{
    TIMER3_T3ICS_VAL_0x00_gc = (0x00<<5), /* clk_T2 */
    TIMER3_T3ICS_VAL_0x01_gc = (0x01<<5), /* trpa */
    TIMER3_T3ICS_VAL_0x02_gc = (0x02<<5), /* trpb */
    TIMER3_T3ICS_VAL_0x03_gc = (0x03<<5), /* ticp */
    TIMER3_T3ICS_VAL_0x04_gc = (0x04<<5), /* clk_src */
} TIMER3_T3ICS_t;

/* Timer3 Capture Edge Select */
typedef enum TIMER3_T3CE_enum
{
    TIMER3_T3CE_VAL_0x00_gc = (0x00<<3), /* disable */
    TIMER3_T3CE_VAL_0x01_gc = (0x01<<3), /* rising edge */
    TIMER3_T3CE_VAL_0x02_gc = (0x02<<3), /* falling edge */
    TIMER3_T3CE_VAL_0x03_gc = (0x03<<3), /* both edges */
} TIMER3_T3CE_t;

/* Timer3 Input Capture Noise Canceller */
typedef enum TIMER3_T3CNC_enum
{
    TIMER3_T3CNC_CLEAR_gc = (0x00), /* Timer3 Input Capture Noise Canceller - CLEAR */
    TIMER3_T3CNC_SET_gc   = (0x04), /* Timer3 Input Capture Noise Canceller - SET */
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
    register8_t T4CR;         /* Timer4 Control Register */
    register8_t rsv_0x35[3];  /* RESERVED REGISTER BLOCK */
    register8_t T4IFR;        /* Timer4 Interrupt Flag Register */
    register8_t rsv_0x39[71]; /* RESERVED REGISTER BLOCK */
    _REGISTER16 (T4CNT);      /* Timer4 Counter */
    register8_t rsv_0x81;     /* RESERVED REGISTER */
    _REGISTER16 (T4COR);      /* Timer4 Compare */
    register8_t rsv_0x83;     /* RESERVED REGISTER */
    _REGISTER16 (T4ICR);      /* Timer4 Input Capture */
    register8_t rsv_0x85;     /* RESERVED REGISTER */
    register8_t T4MRA;        /* Timer4 Mode Register A */
    register8_t T4MRB;        /* Timer4 Mode Register B */
    register8_t T4IMR;        /* Timer4 Interrupt Mask Register */
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

/* Timer4 Capture Reset Mask */
typedef enum TIMER4_T4CPRM_enum
{
    TIMER4_T4CPRM_CLEAR_gc = (0x00), /* Timer4 Capture Reset Mask - CLEAR */
    TIMER4_T4CPRM_SET_gc   = (0x08), /* Timer4 Capture Reset Mask - SET */
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

/* Timer4 Overflow Flag */
typedef enum TIMER4_T4OFF_enum
{
    TIMER4_T4OFF_CLEAR_gc = (0x00), /* Timer4 Overflow Flag - CLEAR */
    TIMER4_T4OFF_SET_gc   = (0x01), /* Timer4 Overflow Flag - SET */
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

/* Timer4 Prescaler Select */
#define TIMER4_T4MRA_T4PS_gc(x) ((x<<2) & 0x1C)

/* Timer4 Clock Select */
typedef enum TIMER4_T4CS_enum
{
    TIMER4_T4CS_VAL_0x00_gc = (0x00), /* clk_src */
    TIMER4_T4CS_VAL_0x01_gc = (0x01), /* clk_T */
    TIMER4_T4CS_VAL_0x02_gc = (0x02), /* clk_xto6 */
    TIMER4_T4CS_VAL_0x03_gc = (0x03), /* clk_frc */
} TIMER4_T4CS_t;

/* Timer4 Input Capture Select */
typedef enum TIMER4_T4ICS_enum
{
    TIMER4_T4ICS_VAL_0x00_gc = (0x00<<5), /* clk_T2 */
    TIMER4_T4ICS_VAL_0x01_gc = (0x01<<5), /* trpa */
    TIMER4_T4ICS_VAL_0x02_gc = (0x02<<5), /* trpb */
    TIMER4_T4ICS_VAL_0x03_gc = (0x03<<5), /* ticp */
    TIMER4_T4ICS_VAL_0x04_gc = (0x04<<5), /* clk_src */
} TIMER4_T4ICS_t;

/* Timer4 Capture Edge Select */
typedef enum TIMER4_T4CE_enum
{
    TIMER4_T4CE_VAL_0x00_gc = (0x00<<3), /* disable */
    TIMER4_T4CE_VAL_0x01_gc = (0x01<<3), /* rising edge */
    TIMER4_T4CE_VAL_0x02_gc = (0x02<<3), /* falling edge */
    TIMER4_T4CE_VAL_0x03_gc = (0x03<<3), /* both edges */
} TIMER4_T4CE_t;

/* Timer4 Input Capture Noise Canceller */
typedef enum TIMER4_T4CNC_enum
{
    TIMER4_T4CNC_CLEAR_gc = (0x00), /* Timer4 Input Capture Noise Canceller - CLEAR */
    TIMER4_T4CNC_SET_gc   = (0x04), /* Timer4 Input Capture Noise Canceller - SET */
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
    _REGISTER16 (T5OCR);      /* Timer5 Output Compare */
    register8_t rsv_0x8B;     /* RESERVED REGISTER */
    register8_t T5CCR;        /* Timer5 Configuration and Control Register */
    _REGISTER16 (T5CNT);      /* Timer5 Counter */
    register8_t rsv_0x8E;     /* RESERVED REGISTER */
    register8_t T5IMR;        /* Timer5 Interrupt Mask Register */
    register8_t GTCCR;        /* General Timer/Counter Control Register */
} TIMER5_t;


/* Timer Synchronization Mode */
typedef enum TIMER5_TSM_enum
{
    TIMER5_TSM_CLEAR_gc = (0x00), /* Timer Synchronization Mode - CLEAR */
    TIMER5_TSM_SET_gc   = (0x80), /* Timer Synchronization Mode - SET */
} TIMER5_TSM_t;

/* Prescaler Reset */
typedef enum TIMER5_PSR10_enum
{
    TIMER5_PSR10_CLEAR_gc = (0x00), /* Prescaler Reset - CLEAR */
    TIMER5_PSR10_SET_gc   = (0x01), /* Prescaler Reset - SET */
} TIMER5_PSR10_t;

/* Timer5 Clear Counter on Compare Match */
typedef enum TIMER5_T5CTC_enum
{
    TIMER5_T5CTC_CLEAR_gc = (0x00), /* Timer5 Clear Counter on Compare Match - CLEAR */
    TIMER5_T5CTC_SET_gc   = (0x08), /* Timer5 Clear Counter on Compare Match - SET */
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

/* Timer5 Compare Flag */
typedef enum TIMER5_T5COF_enum
{
    TIMER5_T5COF_CLEAR_gc = (0x00), /* Timer5 Compare Flag - CLEAR */
    TIMER5_T5COF_SET_gc   = (0x02), /* Timer5 Compare Flag - SET */
} TIMER5_T5COF_t;

/* Timer5 Overflow Flag */
typedef enum TIMER5_T5OFF_enum
{
    TIMER5_T5OFF_CLEAR_gc = (0x00), /* Timer5 Overflow Flag - CLEAR */
    TIMER5_T5OFF_SET_gc   = (0x01), /* Timer5 Overflow Flag - SET */
} TIMER5_T5OFF_t;

/* Timer5 Compare Interrupt Mask */
typedef enum TIMER5_T5CIM_enum
{
    TIMER5_T5CIM_CLEAR_gc = (0x00), /* Timer5 Compare Interrupt Mask - CLEAR */
    TIMER5_T5CIM_SET_gc   = (0x02), /* Timer5 Compare Interrupt Mask - SET */
} TIMER5_T5CIM_t;

/* Timer5 Overflow Interrupt Mask */
typedef enum TIMER5_T5OIM_enum
{
    TIMER5_T5OIM_CLEAR_gc = (0x00), /* Timer5 Overflow Interrupt Mask - CLEAR */
    TIMER5_T5OIM_SET_gc   = (0x01), /* Timer5 Overflow Interrupt Mask - SET */
} TIMER5_T5OIM_t;

/*
--------------------------------------------------------------------------------
TRACE - 
--------------------------------------------------------------------------------
*/

typedef struct TRACE_struct
{
    register8_t rsv_0x00[382]; /* RESERVED REGISTER BLOCK */
    register8_t TRCCR;         /* Trace Unit Control Register */
    register8_t TRCDR;         /* Trace Unit Data Register */
    _REGISTER16 (TRCID);       /* Trace Identifier */
} TRACE_t;


/* Trace Unit Enable */
typedef enum TRACE_TRCEN_enum
{
    TRACE_TRCEN_CLEAR_gc = (0x00), /* Trace Unit Enable - CLEAR */
    TRACE_TRCEN_SET_gc   = (0x02), /* Trace Unit Enable - SET */
} TRACE_TRCEN_t;

/* Trace Unit Change Enable */
typedef enum TRACE_TRCCE_enum
{
    TRACE_TRCCE_CLEAR_gc = (0x00), /* Trace Unit Change Enable - CLEAR */
    TRACE_TRCCE_SET_gc   = (0x01), /* Trace Unit Change Enable - SET */
} TRACE_TRCCE_t;

/*
--------------------------------------------------------------------------------
TXM - 
--------------------------------------------------------------------------------
*/

typedef struct TXM_struct
{
    register8_t rsv_0x00[303]; /* RESERVED REGISTER BLOCK */
    register8_t TMFSM;         /* Tx Modulator Finite State Machine */
    _REGISTER16 (TMCR);        /* Tx Modulator CRC Result */
    register8_t rsv_0x131;     /* RESERVED REGISTER */
    register8_t TMCSB;         /* Tx Modulator CRC Skip Bit Number */
    _REGISTER16 (TMCI);        /* Tx Modulator CRC Init Value */
    register8_t rsv_0x134;     /* RESERVED REGISTER */
    _REGISTER16 (TMCP);        /* Tx Modulator CRC Polynomial */
    register8_t rsv_0x136;     /* RESERVED REGISTER */
    register8_t TMSHR;         /* Tx Modulator Shift Register */
    _REGISTER16 (TMTL);        /* Tx Modulator Telegram Length */
    register8_t rsv_0x139;     /* RESERVED REGISTER */
    register8_t TMSSC;         /* Tx Modulator Stop Sequence Configuration */
    register8_t TMSR;          /* Tx Modulator Status Register */
    register8_t TMCR2;         /* Tx Modulator Control Register 2 */
    register8_t TMCR1;         /* Tx Modulator Control Register 1 */
} TXM_t;


/* Tx Modulator Transmission Complete Interrupt Mask */
typedef enum TXM_TMCIM_enum
{
    TXM_TMCIM_CLEAR_gc = (0x00), /* Tx Modulator Transmission Complete Interrupt Mask - CLEAR */
    TXM_TMCIM_SET_gc   = (0x10), /* Tx Modulator Transmission Complete Interrupt Mask - SET */
} TXM_TMCIM_t;

/* Tx Modulator Serial Output Clock Select */
typedef enum TXM_TMSCS_enum
{
    TXM_TMSCS_CLEAR_gc = (0x00), /* Tx Modulator Serial Output Clock Select - CLEAR */
    TXM_TMSCS_SET_gc   = (0x08), /* Tx Modulator Serial Output Clock Select - SET */
} TXM_TMSCS_t;

/* Tx Modulator Port Interface Select */
typedef enum TXM_TMPIS_enum
{
    TXM_TMPIS_VAL_0x00_gc = (0x00), /* Port C3 */
    TXM_TMPIS_VAL_0x01_gc = (0x01), /* M2 - Toggle Register Timer2 */
    TXM_TMPIS_VAL_0x02_gc = (0x02), /* M3 - Toggle Register Timer3 */
    TXM_TMPIS_VAL_0x03_gc = (0x03), /* M4 - Toggle Register Timer4 */
    TXM_TMPIS_VAL_0x04_gc = (0x04), /* SO Tx Modulator Serial Output */
    TXM_TMPIS_VAL_0x05_gc = (0x05), /* M1 - Toggle Register Timer1 */
} TXM_TMPIS_t;

/* Tx Modulator Most Significant Bit First */
typedef enum TXM_TMLSB_enum
{
    TXM_TMLSB_CLEAR_gc = (0x00), /* Tx Modulator Most Significant Bit First - CLEAR */
    TXM_TMLSB_SET_gc   = (0x40), /* Tx Modulator Most Significant Bit First - SET */
} TXM_TMLSB_t;

/* Tx Modulator Stop Sequence Enable */
typedef enum TXM_TMSSE_enum
{
    TXM_TMSSE_CLEAR_gc = (0x00), /* Tx Modulator Stop Sequence Enable - CLEAR */
    TXM_TMSSE_SET_gc   = (0x20), /* Tx Modulator Stop Sequence Enable - SET */
} TXM_TMSSE_t;

/* Tx Modulator Polarity */
typedef enum TXM_TMPOL_enum
{
    TXM_TMPOL_CLEAR_gc = (0x00), /* Tx Modulator Polarity - CLEAR */
    TXM_TMPOL_SET_gc   = (0x10), /* Tx Modulator Polarity - SET */
} TXM_TMPOL_t;

/* Tx Modulator NRZ Mode Enable */
typedef enum TXM_TMNRZE_enum
{
    TXM_TMNRZE_CLEAR_gc = (0x00), /* Tx Modulator NRZ Mode Enable - CLEAR */
    TXM_TMNRZE_SET_gc   = (0x08), /* Tx Modulator NRZ Mode Enable - SET */
} TXM_TMNRZE_t;

/* Tx Modulator CRC Length */
typedef enum TXM_TMCRCL_enum
{
    TXM_TMCRCL_VAL_0x00_gc = (0x00<<1), /* CRC 4-bit */
    TXM_TMCRCL_VAL_0x01_gc = (0x01<<1), /* CRC 8-bit */
    TXM_TMCRCL_VAL_0x02_gc = (0x02<<1), /* CRC 16-bit */
} TXM_TMCRCL_t;

/* Tx Modulator CRC Enable */
typedef enum TXM_TMCRCE_enum
{
    TXM_TMCRCE_CLEAR_gc = (0x00), /* Tx Modulator CRC Enable - CLEAR */
    TXM_TMCRCE_SET_gc   = (0x01), /* Tx Modulator CRC Enable - SET */
} TXM_TMCRCE_t;

/* Tx Modulator Master State Machine */
#define TXM_TMFSM_TMMSM_gc(x) ((x<<4) & 0x70)

/* Tx Modulator Sub State Machine */
#define TXM_TMFSM_TMSSM_gc(x) (x & 0x0F)

/* Tx Modulator Transmission Complete Status Flag */
typedef enum TXM_TMTCF_enum
{
    TXM_TMTCF_CLEAR_gc = (0x00), /* Tx Modulator Transmission Complete Status Flag - CLEAR */
    TXM_TMTCF_SET_gc   = (0x01), /* Tx Modulator Transmission Complete Status Flag - SET */
} TXM_TMTCF_t;

/* Tx Modulator Stop Sequence Hold Mode */
typedef enum TXM_TMSSH_enum
{
    TXM_TMSSH_CLEAR_gc = (0x00), /* Tx Modulator Stop Sequence Hold Mode - CLEAR */
    TXM_TMSSH_SET_gc   = (0x80), /* Tx Modulator Stop Sequence Hold Mode - SET */
} TXM_TMSSH_t;

/* Tx Modulator Stop Sequence Length */
#define TXM_TMSSC_TMSSL_gc(x) ((x<<4) & 0x70)

/* Tx Modulator Stop Sequence Pattern */
#define TXM_TMSSC_TMSSP_gc(x) (x & 0x0F)

/*
--------------------------------------------------------------------------------
VMON - 
--------------------------------------------------------------------------------
*/

typedef struct VMON_struct
{
    register8_t rsv_0x00[74]; /* RESERVED REGISTER BLOCK */
    register8_t VMCSR;        /* Voltage Monitor Control and Status Register */
} VMON_t;


/* Voltage Monitor Flag */
typedef enum VMON_VMF_enum
{
    VMON_VMF_CLEAR_gc = (0x00), /* Voltage Monitor Flag - CLEAR */
    VMON_VMF_SET_gc   = (0x20), /* Voltage Monitor Flag - SET */
} VMON_VMF_t;

/* Voltage Monitor Interrupt Mask */
typedef enum VMON_VMIM_enum
{
    VMON_VMIM_CLEAR_gc = (0x00), /* Voltage Monitor Interrupt Mask - CLEAR */
    VMON_VMIM_SET_gc   = (0x10), /* Voltage Monitor Interrupt Mask - SET */
} VMON_VMIM_t;

/* Voltage Monitor Level Select */
typedef enum VMON_VMLS_enum
{
    VMON_VMLS_VAL_0x00_gc = (0x00), /* disable */
    VMON_VMLS_VAL_0x01_gc = (0x01), /* 2.0V */
    VMON_VMLS_VAL_0x02_gc = (0x02), /* 2.1V */
    VMON_VMLS_VAL_0x03_gc = (0x03), /* 2.2V */
    VMON_VMLS_VAL_0x04_gc = (0x04), /* 2.3V */
    VMON_VMLS_VAL_0x05_gc = (0x05), /* 2.4V */
    VMON_VMLS_VAL_0x06_gc = (0x06), /* 2.5V */
    VMON_VMLS_VAL_0x07_gc = (0x07), /* 2.6V */
    VMON_VMLS_VAL_0x08_gc = (0x08), /* 2.7V */
    VMON_VMLS_VAL_0x09_gc = (0x09), /* 2.8V */
    VMON_VMLS_VAL_0x0A_gc = (0x0A), /* 2.9V */
    VMON_VMLS_VAL_0x0B_gc = (0x0B), /* 3.0V */
    VMON_VMLS_VAL_0x0C_gc = (0x0C), /* 3.1V */
    VMON_VMLS_VAL_0x0D_gc = (0x0D), /* 3.2V */
    VMON_VMLS_VAL_0x0E_gc = (0x0E), /* 3.3V */
    VMON_VMLS_VAL_0x0F_gc = (0x0F), /* 3.4V */
} VMON_VMLS_t;
/*
================================================================================
IO Module Instances. Mapped to memory.
================================================================================
*/

#define CALIB      (*(CALIB_t *) 0x0000)      
#define CHFLT      (*(CHFLT_t *) 0x0000)      
#define CLK        (*(CLK_t *) 0x0000)        
#define CPU        (*(CPU_t *) 0x0000)        
#define CRC        (*(CRC_t *) 0x0000)        
#define DEMOD      (*(DEMOD_t *) 0x0000)      
#define DFIFO      (*(DFIFO_t *) 0x0000)      
#define EEPROM     (*(EEPROM_t *) 0x0000)     
#define FE         (*(FE_t *) 0x0000)         
#define FREQS      (*(FREQS_t *) 0x0000)      
#define FRSYNC     (*(FRSYNC_t *) 0x0000)     
#define GPIOREGS   (*(GPIOREGS_t *) 0x0000)   
#define IDCHK      (*(IDCHK_t *) 0x0000)      
#define INT        (*(INT_t *) 0x0000)        
#define LIN_UART   (*(LIN_UART_t *) 0x0000)   
#define OCCOUNT    (*(OCCOUNT_t *) 0x0000)    
#define PORTB      (*(PORTB_t *) 0x0000)      
#define PORTC      (*(PORTC_t *) 0x0000)      
#define PORTS      (*(PORTS_t *) 0x0000)      
#define RSSIB      (*(RSSIB_t *) 0x0000)      
#define RXBUF      (*(RXBUF_t *) 0x0000)      
#define RXDSP      (*(RXDSP_t *) 0x0000)      
#define SFIFO      (*(SFIFO_t *) 0x0000)      
#define SPI        (*(SPI_t *) 0x0000)        
#define SSM        (*(SSM_t *) 0x0000)        
#define SUP        (*(SUP_t *) 0x0000)        
#define TIMER0_WDT (*(TIMER0_WDT_t *) 0x0000) 
#define TIMER1     (*(TIMER1_t *) 0x0000)     
#define TIMER2     (*(TIMER2_t *) 0x0000)     
#define TIMER3     (*(TIMER3_t *) 0x0000)     
#define TIMER4     (*(TIMER4_t *) 0x0000)     
#define TIMER5     (*(TIMER5_t *) 0x0000)     
#define TRACE      (*(TRACE_t *) 0x0000)      
#define TXM        (*(TXM_t *) 0x0000)        
#define VMON       (*(VMON_t *) 0x0000)       
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
#define LOCKBIT_BLB0_VAL_0x00_gc (0x00<<2) /* LPM and SPM prohibited in Application Section */
#define LOCKBIT_BLB0_VAL_0x01_gc (0x01<<2) /* LPM prohibited in Application Section */
#define LOCKBIT_BLB0_VAL_0x02_gc (0x02<<2) /* SPM prohibited in Application Section */
#define LOCKBIT_BLB0_VAL_0x03_gc (0x03<<2) /* No lock on SPM and LPM in Application Section */


/* Boot Loader Protection */
#define LOCKBIT_BLB1_VAL_0x00_gc (0x00<<4) /* LPM and SPM prohibited in Boot Loader Section */
#define LOCKBIT_BLB1_VAL_0x01_gc (0x01<<4) /* LPM prohibited in Boot Loader Section */
#define LOCKBIT_BLB1_VAL_0x02_gc (0x02<<4) /* SPM prohibited in Boot Loader Section */
#define LOCKBIT_BLB1_VAL_0x03_gc (0x03<<4) /* No lock on SPM and LPM in Boot Loader Section */


/*
--------------------------------------------------------------------------------
CALIB - 
--------------------------------------------------------------------------------
*/


/* Fast RC Oscillator Temperature Compensation */
#define CALIB_FRCTC_CLEAR_gc (0x00) /* Fast RC Oscillator Temperature Compensation - CLEAR */
#define CALIB_FRCTC_SET_gc   (0x20) /* Fast RC Oscillator Temperature Compensation - SET */


/* Fast RC Oscillator Calibration */
#define CALIB_FRCCAL_FRCCAL_gc(x) (x & 0x1F)

/* Slow RC Oscillator Temperature Compensation */
#define CALIB_SRCCAL_SRCTC_gc(x) ((x<<6) & 0xC0)

/* Slow RC Oscillator Calibration */
#define CALIB_SRCCAL_SRCCAL_gc(x) (x & 0x3F)

/* PA Regulator Voltage Calibration */
#define CALIB_SUPCA1_PVCAL_gc(x) ((x<<6) & 0xC0)

/* AVCC Regulator Voltage Calibration */
#define CALIB_SUPCA1_AVCAL_gc(x) ((x<<4) & 0x30)

/* VMEM Regulator Voltage Calibration */
#define CALIB_SUPCA1_VVCAL_gc(x) ((x<<2) & 0x0C)

/* DVCC Regulator Voltage Calibration */
#define CALIB_SUPCA1_DVCAL_gc(x) (x & 0x03)

/* Voltage Monitor Calibration */
#define CALIB_SUPCA3_VMOCAL_gc(x) ((x<<6) & 0xC0)

/* AVCC Monitor Calibration */
#define CALIB_SUPCA3_AMCAL_gc(x) ((x<<4) & 0x30)

/* VMEM Monitor Calibration */
#define CALIB_SUPCA3_VMCAL_gc(x) ((x<<2) & 0x0C)

/* DVCC Monitor Calibration */
#define CALIB_SUPCA3_DMCAL_gc(x) (x & 0x03)

/* CP2 Output on Port ckout */
#define CALIB_CKOUT_CLEAR_gc (0x00) /* CP2 Output on Port ckout - CLEAR */
#define CALIB_CKOUT_SET_gc   (0x40) /* CP2 Output on Port ckout - SET */


/* NVM Variable Programming Time Enable */
#define CALIB_NVPTE_CLEAR_gc (0x00) /* NVM Variable Programming Time Enable - CLEAR */
#define CALIB_NVPTE_SET_gc   (0x10) /* NVM Variable Programming Time Enable - SET */


/* EEPROM Programming Time */
#define CALIB_XFUSE_E2PT_gc(x) ((x<<2) & 0x0C)

/* Flash Memory Programming Time */
#define CALIB_XFUSE_FLPT_gc(x) (x & 0x03)

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


/* Clock Output Driver Enable */
#define CLK_CLKOEN_CLEAR_gc (0x00) /* Clock Output Driver Enable - CLEAR */
#define CLK_CLKOEN_SET_gc   (0x04) /* Clock Output Driver Enable - SET */


/* Clock Output Source */
#define CLK_CLKOS_VAL_0x00_gc (0x00) /* clk_src */
#define CLK_CLKOS_VAL_0x01_gc (0x01) /* clk_frc */
#define CLK_CLKOS_VAL_0x02_gc (0x02) /* clk_adiv */
#define CLK_CLKOS_VAL_0x03_gc (0x03) /* clk_xto */


/* Clock Prescaler Change Enable */
#define CLK_CLPCE_CLEAR_gc (0x00) /* Clock Prescaler Change Enable - CLEAR */
#define CLK_CLPCE_SET_gc   (0x80) /* Clock Prescaler Change Enable - SET */


/* Timer Clock Prescaler Select */
#define CLK_CLTPS_VAL_0x00_gc (0x00<<3) /* disabled */
#define CLK_CLTPS_VAL_0x01_gc (0x01<<3) /* 1 */
#define CLK_CLTPS_VAL_0x02_gc (0x02<<3) /* 2 */
#define CLK_CLTPS_VAL_0x03_gc (0x03<<3) /* 4 */
#define CLK_CLTPS_VAL_0x04_gc (0x04<<3) /* 8 */
#define CLK_CLTPS_VAL_0x05_gc (0x05<<3) /* 16 */
#define CLK_CLTPS_VAL_0x06_gc (0x06<<3) /* 32 */
#define CLK_CLTPS_VAL_0x07_gc (0x07<<3) /* 64 */


/* System Clock Prescaler Select */
#define CLK_CLKPS_VAL_0x00_gc (0x00) /* 1 */
#define CLK_CLKPS_VAL_0x01_gc (0x01) /* 2 */
#define CLK_CLKPS_VAL_0x02_gc (0x02) /* 4 */
#define CLK_CLKPS_VAL_0x03_gc (0x03) /* 8 */
#define CLK_CLKPS_VAL_0x04_gc (0x04) /* 16 */
#define CLK_CLKPS_VAL_0x05_gc (0x05) /* 32 */
#define CLK_CLKPS_VAL_0x06_gc (0x06) /* 64 */
#define CLK_CLKPS_VAL_0x07_gc (0x07) /* 128 */


/* Clock Management Control Change Enable */
#define CLK_CMCCE_CLEAR_gc (0x00) /* Clock Management Control Change Enable - CLEAR */
#define CLK_CMCCE_SET_gc   (0x80) /* Clock Management Control Change Enable - SET */


/* Clock Monitor Enable */
#define CLK_CMONEN_CLEAR_gc (0x00) /* Clock Monitor Enable - CLEAR */
#define CLK_CMONEN_SET_gc   (0x40) /* Clock Monitor Enable - SET */


/* Core Clock Select */
#define CLK_CCS_CLEAR_gc (0x00) /* Core Clock Select - CLEAR */
#define CLK_CCS_SET_gc   (0x08) /* Core Clock Select - SET */


/* Clock Management Mode */
#define CLK_CMM_VAL_0x00_gc (0x00) /* clk_src */
#define CLK_CMM_VAL_0x01_gc (0x01) /* clk_adiv */
#define CLK_CMM_VAL_0x02_gc (0x02) /* clk_ext */
#define CLK_CMM_VAL_0x03_gc (0x03) /* clk_xto6 */
#define CLK_CMM_VAL_0x04_gc (0x04) /* clk_xto4 */


/* External Clock Interrupt Enable */
#define CLK_ECIE_CLEAR_gc (0x00) /* External Clock Interrupt Enable - CLEAR */
#define CLK_ECIE_SET_gc   (0x01) /* External Clock Interrupt Enable - SET */


/* SRC Oscillator Active */
#define CLK_SRCACT_CLEAR_gc (0x00) /* SRC Oscillator Active - CLEAR */
#define CLK_SRCACT_SET_gc   (0x08) /* SRC Oscillator Active - SET */


/* FRC Oscillator Active */
#define CLK_FRCACT_CLEAR_gc (0x00) /* FRC Oscillator Active - CLEAR */
#define CLK_FRCACT_SET_gc   (0x04) /* FRC Oscillator Active - SET */


/* SRC Oscillator Always On */
#define CLK_SRCAO_CLEAR_gc (0x00) /* SRC Oscillator Always On - CLEAR */
#define CLK_SRCAO_SET_gc   (0x02) /* SRC Oscillator Always On - SET */


/* FRC Oscillator Always On */
#define CLK_FRCAO_CLEAR_gc (0x00) /* FRC Oscillator Always On - CLEAR */
#define CLK_FRCAO_SET_gc   (0x01) /* FRC Oscillator Always On - SET */


/* External Clock Fail */
#define CLK_ECF_CLEAR_gc (0x00) /* External Clock Fail - CLEAR */
#define CLK_ECF_SET_gc   (0x01) /* External Clock Fail - SET */


/* Power Reduction Trace Unit */
#define CLK_PRTRC_CLEAR_gc (0x00) /* Power Reduction Trace Unit - CLEAR */
#define CLK_PRTRC_SET_gc   (0x80) /* Power Reduction Trace Unit - SET */


/* Power Reduction UART */
#define CLK_PRUART_CLEAR_gc (0x00) /* Power Reduction UART - CLEAR */
#define CLK_PRUART_SET_gc   (0x40) /* Power Reduction UART - SET */


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


/* Power Reduction Tx Modulator */
#define CLK_PRTM_CLEAR_gc (0x00) /* Power Reduction Tx Modulator - CLEAR */
#define CLK_PRTM_SET_gc   (0x40) /* Power Reduction Tx Modulator - SET */


/* Power Reduction RSSI Buffer */
#define CLK_PRRS_CLEAR_gc (0x00) /* Power Reduction RSSI Buffer - CLEAR */
#define CLK_PRRS_SET_gc   (0x20) /* Power Reduction RSSI Buffer - SET */


/* Power Reduction ID Check */
#define CLK_PRIDS_CLEAR_gc (0x00) /* Power Reduction ID Check - CLEAR */
#define CLK_PRIDS_SET_gc   (0x10) /* Power Reduction ID Check - SET */


/* Power Reduction Data FIFO */
#define CLK_PRDF_CLEAR_gc (0x00) /* Power Reduction Data FIFO - CLEAR */
#define CLK_PRDF_SET_gc   (0x08) /* Power Reduction Data FIFO - SET */


/* Power Reduction Support FIFO */
#define CLK_PRSF_CLEAR_gc (0x00) /* Power Reduction Support FIFO - CLEAR */
#define CLK_PRSF_SET_gc   (0x04) /* Power Reduction Support FIFO - SET */


/* Power Reduction Rx Buffer A */
#define CLK_PRXA_CLEAR_gc (0x00) /* Power Reduction Rx Buffer A - CLEAR */
#define CLK_PRXA_SET_gc   (0x02) /* Power Reduction Rx Buffer A - SET */


/* Power Reduction Rx Buffer B */
#define CLK_PRXB_CLEAR_gc (0x00) /* Power Reduction Rx Buffer B - CLEAR */
#define CLK_PRXB_SET_gc   (0x01) /* Power Reduction Rx Buffer B - SET */


/* Sleep Mode Select */
#define CLK_SM_IDLE_gc     (0x00<<1) /* Idle */
#define CLK_SM_PDOWN_gc    (0x01<<1) /* Power Down */
#define CLK_SM_VAL_0x02_gc (0x02<<1) /* Reserved */
#define CLK_SM_POFF_gc     (0x03<<1) /* Power Off */


/* Sleep Mode Enable */
#define CLK_SE_CLEAR_gc (0x00) /* Sleep Mode Enable - CLEAR */
#define CLK_SE_SET_gc   (0x01) /* Sleep Mode Enable - SET */


/*
--------------------------------------------------------------------------------
CPU - 
--------------------------------------------------------------------------------
*/


/* Port B7 High Side Driver Enable */
#define CPU_PB7HS_CLEAR_gc (0x00) /* Port B7 High Side Driver Enable - CLEAR */
#define CPU_PB7HS_SET_gc   (0x80) /* Port B7 High Side Driver Enable - SET */


/* Port B7 Low Side Driver Enable */
#define CPU_PB7LS_CLEAR_gc (0x00) /* Port B7 Low Side Driver Enable - CLEAR */
#define CPU_PB7LS_SET_gc   (0x40) /* Port B7 Low Side Driver Enable - SET */


/* Port B4 High Side Driver Enable */
#define CPU_PB4HS_CLEAR_gc (0x00) /* Port B4 High Side Driver Enable - CLEAR */
#define CPU_PB4HS_SET_gc   (0x20) /* Port B4 High Side Driver Enable - SET */


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


/* DebugWire Reset Flag */
#define CPU_DWRF_CLEAR_gc (0x00) /* DebugWire Reset Flag - CLEAR */
#define CPU_DWRF_SET_gc   (0x10) /* DebugWire Reset Flag - SET */


/* Watchdog Reset Flag */
#define CPU_WDRF_CLEAR_gc (0x00) /* Watchdog Reset Flag - CLEAR */
#define CPU_WDRF_SET_gc   (0x08) /* Watchdog Reset Flag - SET */


/* External Reset Flag */
#define CPU_EXTRF_CLEAR_gc (0x00) /* External Reset Flag - CLEAR */
#define CPU_EXTRF_SET_gc   (0x02) /* External Reset Flag - SET */


/* Power-On Reset Flag */
#define CPU_PORF_CLEAR_gc (0x00) /* Power-On Reset Flag - CLEAR */
#define CPU_PORF_SET_gc   (0x01) /* Power-On Reset Flag - SET */


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
DEMOD - 
--------------------------------------------------------------------------------
*/


/* Demodulator Carrier Detect Time Path A */
#define DEMOD_DMCDA_DMCTA_gc(x) ((x<<5) & 0xE0)

/* Demodulator Carrier Detect Limit Path A */
#define DEMOD_DMCDA_DMCLA_gc(x) (x & 0x1F)

/* Demodulator Carrier Detect Time Path B */
#define DEMOD_DMCDB_DMCTB_gc(x) ((x<<5) & 0xE0)

/* Demodulator Carrier Detect Limit Path B */
#define DEMOD_DMCDB_DMCLB_gc(x) (x & 0x1F)

/* Demodulator Automatic Restart Path A */
#define DEMOD_DMARA_CLEAR_gc (0x00) /* Demodulator Automatic Restart Path A - CLEAR */
#define DEMOD_DMARA_SET_gc   (0x80) /* Demodulator Automatic Restart Path A - SET */


/* Symbol Check with only 1T Path A */
#define DEMOD_SY1TA_CLEAR_gc (0x00) /* Symbol Check with only 1T Path A - CLEAR */
#define DEMOD_SY1TA_SET_gc   (0x40) /* Symbol Check with only 1T Path A - SET */


/* Select ASK Demodulation Path A */
#define DEMOD_SASKA_CLEAR_gc (0x00) /* Select ASK Demodulation Path A - CLEAR */
#define DEMOD_SASKA_SET_gc   (0x20) /* Select ASK Demodulation Path A - SET */


/* Demodulator PLL Loop Gain Path A */
#define DEMOD_DMCRA_DMPGA_gc(x) (x & 0x1F)

/* Demodulator Automatic Restart Path B */
#define DEMOD_DMARB_CLEAR_gc (0x00) /* Demodulator Automatic Restart Path B - CLEAR */
#define DEMOD_DMARB_SET_gc   (0x80) /* Demodulator Automatic Restart Path B - SET */


/* Symbol Check with only 1T Path B */
#define DEMOD_SY1TB_CLEAR_gc (0x00) /* Symbol Check with only 1T Path B - CLEAR */
#define DEMOD_SY1TB_SET_gc   (0x40) /* Symbol Check with only 1T Path B - SET */


/* Select ASK Demodulation Path B */
#define DEMOD_SASKB_CLEAR_gc (0x00) /* Select ASK Demodulation Path B - CLEAR */
#define DEMOD_SASKB_SET_gc   (0x20) /* Select ASK Demodulation Path B - SET */


/* Demodulator PLL Loop Gain Path B */
#define DEMOD_DMCRB_DMPGB_gc(x) (x & 0x1F)

/* Demodulator Down-sampling Path B */
#define DEMOD_DMDN_DMDNB_gc(x) ((x<<4) & 0xF0)

/* Demodulator Down-sampling Path A */
#define DEMOD_DMDN_DMDNA_gc(x) (x & 0x0F)

/* Demodulator NRZ Enable Path A */
#define DEMOD_DMNEA_CLEAR_gc (0x00) /* Demodulator NRZ Enable Path A - CLEAR */
#define DEMOD_DMNEA_SET_gc   (0x80) /* Demodulator NRZ Enable Path A - SET */


/* Demodulator Hold Mode Path A */
#define DEMOD_DMHA_CLEAR_gc (0x00) /* Demodulator Hold Mode Path A - CLEAR */
#define DEMOD_DMHA_SET_gc   (0x40) /* Demodulator Hold Mode Path A - SET */


/* Demodulator Data Polarity Path A */
#define DEMOD_DMPA_CLEAR_gc (0x00) /* Demodulator Data Polarity Path A - CLEAR */
#define DEMOD_DMPA_SET_gc   (0x20) /* Demodulator Data Polarity Path A - SET */


/* Demodulator Amplitude Threshold Path A */
#define DEMOD_DMMA_DMATA_gc(x) (x & 0x1F)

/* Demodulator NRZ Enable Path B */
#define DEMOD_DMNEB_CLEAR_gc (0x00) /* Demodulator NRZ Enable Path B - CLEAR */
#define DEMOD_DMNEB_SET_gc   (0x80) /* Demodulator NRZ Enable Path B - SET */


/* Demodulator Hold Mode Path B */
#define DEMOD_DMHB_CLEAR_gc (0x00) /* Demodulator Hold Mode Path B - CLEAR */
#define DEMOD_DMHB_SET_gc   (0x40) /* Demodulator Hold Mode Path B - SET */


/* Demodulator Data Polarity Path B */
#define DEMOD_DMPB_CLEAR_gc (0x00) /* Demodulator Data Polarity Path B - CLEAR */
#define DEMOD_DMPB_SET_gc   (0x20) /* Demodulator Data Polarity Path B - SET */


/* Demodulator Amplitude Threshold Path B */
#define DEMOD_DMMB_DMATB_gc(x) (x & 0x1F)

/* Pattern Check Enable Path B */
#define DEMOD_PCENB_CLEAR_gc (0x00) /* Pattern Check Enable Path B - CLEAR */
#define DEMOD_PCENB_SET_gc   (0x80) /* Pattern Check Enable Path B - SET */


/* Pattern Check Signal Path B */
#define DEMOD_PCSIGB_CLEAR_gc (0x00) /* Pattern Check Signal Path B - CLEAR */
#define DEMOD_PCSIGB_SET_gc   (0x40) /* Pattern Check Signal Path B - SET */


/* Pattern Check Ignore Amplitude Low Path B */
#define DEMOD_PCIALB_CLEAR_gc (0x00) /* Pattern Check Ignore Amplitude Low Path B - CLEAR */
#define DEMOD_PCIALB_SET_gc   (0x20) /* Pattern Check Ignore Amplitude Low Path B - SET */


/* Pattern Check Frequency Tracking Disable Path B */
#define DEMOD_PCFTDB_CLEAR_gc (0x00) /* Pattern Check Frequency Tracking Disable Path B - CLEAR */
#define DEMOD_PCFTDB_SET_gc   (0x10) /* Pattern Check Frequency Tracking Disable Path B - SET */


/* Pattern Check Enable Path A */
#define DEMOD_PCENA_CLEAR_gc (0x00) /* Pattern Check Enable Path A - CLEAR */
#define DEMOD_PCENA_SET_gc   (0x08) /* Pattern Check Enable Path A - SET */


/* Pattern Check Signal Path A */
#define DEMOD_PCSIGA_CLEAR_gc (0x00) /* Pattern Check Signal Path A - CLEAR */
#define DEMOD_PCSIGA_SET_gc   (0x04) /* Pattern Check Signal Path A - SET */


/* Pattern Check Ignore Amplitude Low Path A */
#define DEMOD_PCIALA_CLEAR_gc (0x00) /* Pattern Check Ignore Amplitude Low Path A - CLEAR */
#define DEMOD_PCIALA_SET_gc   (0x02) /* Pattern Check Ignore Amplitude Low Path A - SET */


/* Pattern Check Frequency Tracking Disable Path A */
#define DEMOD_PCFTDA_CLEAR_gc (0x00) /* Pattern Check Frequency Tracking Disable Path A - CLEAR */
#define DEMOD_PCFTDA_SET_gc   (0x01) /* Pattern Check Frequency Tracking Disable Path A - SET */


/* Pattern Select Path A */
#define DEMOD_PSELA_VAL_0x00_gc (0x00<<6) /* 1T alternating (0x55 0xAA) */
#define DEMOD_PSELA_VAL_0x01_gc (0x01<<6) /* 2T alternating (0x33 0xCC) */
#define DEMOD_PSELA_VAL_0x02_gc (0x02<<6) /* DMPATx defined */
#define DEMOD_PSELA_VAL_0x03_gc (0x03<<6) /* Manchester conformal */


/* Pattern Check Length Path A */
#define DEMOD_DMPCA_PCLENA_gc(x) ((x<<3) & 0x38)

/* Pattern Check Severity Path A */
#define DEMOD_PCSEVA_VAL_0x00_gc (0x00) /* 12.5% */
#define DEMOD_PCSEVA_VAL_0x01_gc (0x01) /* 25% */
#define DEMOD_PCSEVA_VAL_0x02_gc (0x02) /* 37.5% */
#define DEMOD_PCSEVA_VAL_0x03_gc (0x03) /* 50% */
#define DEMOD_PCSEVA_VAL_0x04_gc (0x04) /* 62.5% */
#define DEMOD_PCSEVA_VAL_0x05_gc (0x05) /* 75% */
#define DEMOD_PCSEVA_VAL_0x06_gc (0x06) /* 87.5% */
#define DEMOD_PCSEVA_VAL_0x07_gc (0x07) /* 100% */


/* Pattern Select Path B */
#define DEMOD_PSELB_VAL_0x00_gc (0x00<<6) /* 1T alternating (0x55 0xAA) */
#define DEMOD_PSELB_VAL_0x01_gc (0x01<<6) /* 2T alternating (0x33 0xCC) */
#define DEMOD_PSELB_VAL_0x02_gc (0x02<<6) /* DMPATx defined */
#define DEMOD_PSELB_VAL_0x03_gc (0x03<<6) /* Manchester conformal */


/* Pattern Check Length Path B */
#define DEMOD_DMPCB_PCLENB_gc(x) ((x<<3) & 0x38)

/* Pattern Check Severity Path B */
#define DEMOD_PCSEVB_VAL_0x00_gc (0x00) /* 12.5% */
#define DEMOD_PCSEVB_VAL_0x01_gc (0x01) /* 25% */
#define DEMOD_PCSEVB_VAL_0x02_gc (0x02) /* 37.5% */
#define DEMOD_PCSEVB_VAL_0x03_gc (0x03) /* 50% */
#define DEMOD_PCSEVB_VAL_0x04_gc (0x04) /* 62.5% */
#define DEMOD_PCSEVB_VAL_0x05_gc (0x05) /* 75% */
#define DEMOD_PCSEVB_VAL_0x06_gc (0x06) /* 87.5% */
#define DEMOD_PCSEVB_VAL_0x07_gc (0x07) /* 100% */


/* Symbol Timing Limit Path A */
#define DEMOD_SYCA_SYTLA_gc(x) ((x<<4) & 0xF0)

/* Symbol Check Size Path A */
#define DEMOD_SYCA_SYCSA_gc(x) (x & 0x0F)

/* Symbol Timing Limit Path B */
#define DEMOD_SYCB_SYTLB_gc(x) ((x<<4) & 0xF0)

/* Symbol Check Size Path B */
#define DEMOD_SYCB_SYCSB_gc(x) (x & 0x0F)

/*
--------------------------------------------------------------------------------
DFIFO - 
--------------------------------------------------------------------------------
*/


/* Data FIFO Direct Read Access Operational Mode */
#define DFIFO_DFDRA_CLEAR_gc (0x00) /* Data FIFO Direct Read Access Operational Mode - CLEAR */
#define DFIFO_DFDRA_SET_gc   (0x80) /* Data FIFO Direct Read Access Operational Mode - SET */


/* Data FIFO Fill Level Configuration */
#define DFIFO_DFC_DFFLC_gc(x) (x & 0x3F)

/* Data FIFO Error Interrupt Mask */
#define DFIFO_DFERIM_CLEAR_gc (0x00) /* Data FIFO Error Interrupt Mask - CLEAR */
#define DFIFO_DFERIM_SET_gc   (0x02) /* Data FIFO Error Interrupt Mask - SET */


/* Data FIFO Fill Level Interrupt Mask */
#define DFIFO_DFFLIM_CLEAR_gc (0x00) /* Data FIFO Fill Level Interrupt Mask - CLEAR */
#define DFIFO_DFFLIM_SET_gc   (0x01) /* Data FIFO Fill Level Interrupt Mask - SET */


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


/* Data FIFO Fill Level Reached Status Flag */
#define DFIFO_DFFLRF_CLEAR_gc (0x00) /* Data FIFO Fill Level Reached Status Flag - CLEAR */
#define DFIFO_DFFLRF_SET_gc   (0x01) /* Data FIFO Fill Level Reached Status Flag - SET */


/*
--------------------------------------------------------------------------------
EEPROM - 
--------------------------------------------------------------------------------
*/


/* Non-Volatile Memory Busy */
#define EEPROM_NVMBSY_CLEAR_gc (0x00) /* Non-Volatile Memory Busy - CLEAR */
#define EEPROM_NVMBSY_SET_gc   (0x80) /* Non-Volatile Memory Busy - SET */


/* EEPROM Page Access */
#define EEPROM_EEPAGE_CLEAR_gc (0x00) /* EEPROM Page Access - CLEAR */
#define EEPROM_EEPAGE_SET_gc   (0x40) /* EEPROM Page Access - SET */


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


/* EEPROM Error Correction Flag */
#define EEPROM_EECF_CLEAR_gc (0x00) /* EEPROM Error Correction Flag - CLEAR */
#define EEPROM_EECF_SET_gc   (0x80) /* EEPROM Error Correction Flag - SET */


/* EEPROM Error Fault Flag */
#define EEPROM_EEFF_CLEAR_gc (0x00) /* EEPROM Error Fault Flag - CLEAR */
#define EEPROM_EEFF_SET_gc   (0x40) /* EEPROM Error Fault Flag - SET */


/* EEPROM Burst Read Enable */
#define EEPROM_EEBRE_CLEAR_gc (0x00) /* EEPROM Burst Read Enable - CLEAR */
#define EEPROM_EEBRE_SET_gc   (0x01) /* EEPROM Burst Read Enable - SET */


/*
--------------------------------------------------------------------------------
FE - 
--------------------------------------------------------------------------------
*/


/* SPDT RF Switch Tx 3 */
#define FE_SDTX3_CLEAR_gc (0x00) /* SPDT RF Switch Tx 3 - CLEAR */
#define FE_SDTX3_SET_gc   (0x20) /* SPDT RF Switch Tx 3 - SET */


/* SPDT RF Switch Rx 3 */
#define FE_SDRX3_CLEAR_gc (0x00) /* SPDT RF Switch Rx 3 - CLEAR */
#define FE_SDRX3_SET_gc   (0x10) /* SPDT RF Switch Rx 3 - SET */


/* SPDT RF Switch Tx 2 */
#define FE_SDTX2_CLEAR_gc (0x00) /* SPDT RF Switch Tx 2 - CLEAR */
#define FE_SDTX2_SET_gc   (0x08) /* SPDT RF Switch Tx 2 - SET */


/* SPDT RF Switch Rx 2 */
#define FE_SDRX2_CLEAR_gc (0x00) /* SPDT RF Switch Rx 2 - CLEAR */
#define FE_SDRX2_SET_gc   (0x04) /* SPDT RF Switch Rx 2 - SET */


/* SPDT RF Switch Tx 1 */
#define FE_SDTX1_CLEAR_gc (0x00) /* SPDT RF Switch Tx 1 - CLEAR */
#define FE_SDTX1_SET_gc   (0x02) /* SPDT RF Switch Tx 1 - SET */


/* SPDT RF Switch Rx 1 */
#define FE_SDRX1_CLEAR_gc (0x00) /* SPDT RF Switch Rx 1 - CLEAR */
#define FE_SDRX1_SET_gc   (0x01) /* SPDT RF Switch Rx 1 - SET */


/* IF Amplifier Enable */
#define FE_IFAEN_CLEAR_gc (0x00) /* IF Amplifier Enable - CLEAR */
#define FE_IFAEN_SET_gc   (0x80) /* IF Amplifier Enable - SET */


/* High Sensitivity Enable */
#define FE_HISEN_CLEAR_gc (0x00) /* High Sensitivity Enable - CLEAR */
#define FE_HISEN_SET_gc   (0x40) /* High Sensitivity Enable - SET */


/* 2 Bit Resistor Tuning */
#define FE_FEBT_RTN2_gc(x) ((x<<2) & 0x0C)

/* 2 Bit Capacitor Tuning */
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


/* Select 433MHz Not 315MHz Band */
#define FE_S4N3_CLEAR_gc (0x00) /* Select 433MHz Not 315MHz Band - CLEAR */
#define FE_S4N3_SET_gc   (0x02) /* Select 433MHz Not 315MHz Band - SET */


/* Low-Band Not High-Band */
#define FE_LBNHB_CLEAR_gc (0x00) /* Low-Band Not High-Band - CLEAR */
#define FE_LBNHB_SET_gc   (0x01) /* Low-Band Not High-Band - SET */


/* PLL Speedup 1 */
#define FE_PLSP1_CLEAR_gc (0x00) /* PLL Speedup 1 - CLEAR */
#define FE_PLSP1_SET_gc   (0x40) /* PLL Speedup 1 - SET */


/* ADC Clock Enable */
#define FE_ADCLK_CLEAR_gc (0x00) /* ADC Clock Enable - CLEAR */
#define FE_ADCLK_SET_gc   (0x20) /* ADC Clock Enable - SET */


/* Analog Digital Converter Enable */
#define FE_ADEN_CLEAR_gc (0x00) /* Analog Digital Converter Enable - CLEAR */
#define FE_ADEN_SET_gc   (0x10) /* Analog Digital Converter Enable - SET */


/* Low Noise Amplifier Enable */
#define FE_LNAEN_CLEAR_gc (0x00) /* Low Noise Amplifier Enable - CLEAR */
#define FE_LNAEN_SET_gc   (0x08) /* Low Noise Amplifier Enable - SET */


/* Crystal Oscillator Enable */
#define FE_XTOEN_CLEAR_gc (0x00) /* Crystal Oscillator Enable - CLEAR */
#define FE_XTOEN_SET_gc   (0x04) /* Crystal Oscillator Enable - SET */


/* PLL Calibration Mode */
#define FE_PLCAL_CLEAR_gc (0x00) /* PLL Calibration Mode - CLEAR */
#define FE_PLCAL_SET_gc   (0x02) /* PLL Calibration Mode - SET */


/* PLL Enable */
#define FE_PLEN_CLEAR_gc (0x00) /* PLL Enable - CLEAR */
#define FE_PLEN_SET_gc   (0x01) /* PLL Enable - SET */


/* XTO External Clock */
#define FE_XTOEXT_CLEAR_gc (0x00) /* XTO External Clock - CLEAR */
#define FE_XTOEXT_SET_gc   (0x80) /* XTO External Clock - SET */


/* XTO Voltage Pump Enable */
#define FE_XTPEN_CLEAR_gc (0x00) /* XTO Voltage Pump Enable - CLEAR */
#define FE_XTPEN_SET_gc   (0x20) /* XTO Voltage Pump Enable - SET */


/* PLL Post Enable */
#define FE_PLPEN_CLEAR_gc (0x00) /* PLL Post Enable - CLEAR */
#define FE_PLPEN_SET_gc   (0x10) /* PLL Post Enable - SET */


/* Temperature Measurement */
#define FE_TMPM_CLEAR_gc (0x00) /* Temperature Measurement - CLEAR */
#define FE_TMPM_SET_gc   (0x08) /* Temperature Measurement - SET */


/* Power Amplifier Enable */
#define FE_PAEN_CLEAR_gc (0x00) /* Power Amplifier Enable - CLEAR */
#define FE_PAEN_SET_gc   (0x04) /* Power Amplifier Enable - SET */


/* LNA Bias High Sense Mode */
#define FE_FELNA_LNABH_gc(x) ((x<<4) & 0xF0)

/* LNA Bias Normal Sense Mode */
#define FE_FELNA_LNABN_gc(x) (x & 0x0F)

/* PLL Main */
#define FE_FEMS_PLLM_gc(x) ((x<<4) & 0xF0)

/* PLL Swallow */
#define FE_FEMS_PLLS_gc(x) (x & 0x0F)

/* RF Front End Power Amplifier Control */
#define FE_FEPAC_VAL_0x00_gc (0x00) /* -11.80  -12.90 */
#define FE_FEPAC_VAL_0x01_gc (0x01) /* -11.30  -12.33 */
#define FE_FEPAC_VAL_0x02_gc (0x02) /* -10.70  -11.76 */
#define FE_FEPAC_VAL_0x03_gc (0x03) /* -10.20  -11.10 */
#define FE_FEPAC_VAL_0x04_gc (0x04) /*  -9.70  -10.60 */
#define FE_FEPAC_VAL_0x05_gc (0x05) /*  -9.20  -10.00 */
#define FE_FEPAC_VAL_0x06_gc (0x06) /*  -8.60   -9.50 */
#define FE_FEPAC_VAL_0x07_gc (0x07) /*  -8.00   -9.00 */
#define FE_FEPAC_VAL_0x08_gc (0x08) /*  -7.50   -8.50 */
#define FE_FEPAC_VAL_0x09_gc (0x09) /*  -7.00   -7.90 */
#define FE_FEPAC_VAL_0x0A_gc (0x0A) /*  -6.40   -7.30 */
#define FE_FEPAC_VAL_0x0B_gc (0x0B) /*  -5.90   -6.80 */
#define FE_FEPAC_VAL_0x0C_gc (0x0C) /*  -5.30   -6.30 */
#define FE_FEPAC_VAL_0x0D_gc (0x0D) /*  -4.77   -5.70 */
#define FE_FEPAC_VAL_0x0E_gc (0x0E) /*  -4.17   -5.20 */
#define FE_FEPAC_VAL_0x0F_gc (0x0F) /*  -3.67   -4.60 */
#define FE_FEPAC_VAL_0x10_gc (0x10) /*  -3.12   -4.07 */
#define FE_FEPAC_VAL_0x11_gc (0x11) /*  -2.56   -3.47 */
#define FE_FEPAC_VAL_0x12_gc (0x12) /*  -2.10   -2.97 */
#define FE_FEPAC_VAL_0x13_gc (0x13) /*  -1.58   -2.42 */
#define FE_FEPAC_VAL_0x14_gc (0x14) /*  -1.08   -1.86 */
#define FE_FEPAC_VAL_0x15_gc (0x15) /*  -0.50   -1.40 */
#define FE_FEPAC_VAL_0x16_gc (0x16) /*   0.00   -0.88 */
#define FE_FEPAC_VAL_0x17_gc (0x17) /*   0.41   -0.38 */
#define FE_FEPAC_VAL_0x18_gc (0x18) /*   1.00    0.20  */
#define FE_FEPAC_VAL_0x19_gc (0x19) /*   1.42    0.70  */
#define FE_FEPAC_VAL_0x1A_gc (0x1A) /*   1.83    1.11  */
#define FE_FEPAC_VAL_0x1B_gc (0x1B) /*   2.42    1.70  */
#define FE_FEPAC_VAL_0x1C_gc (0x1C) /*   2.88    2.12  */
#define FE_FEPAC_VAL_0x1D_gc (0x1D) /*   3.38    2.53  */
#define FE_FEPAC_VAL_0x1E_gc (0x1E) /*   3.81    3.12  */
#define FE_FEPAC_VAL_0x1F_gc (0x1F) /*   4.31    3.58  */
#define FE_FEPAC_VAL_0x20_gc (0x20) /*   4.72    4.08  */
#define FE_FEPAC_VAL_0x21_gc (0x21) /*   5.09    4.51  */
#define FE_FEPAC_VAL_0x22_gc (0x22) /*   5.57    5.01  */
#define FE_FEPAC_VAL_0x23_gc (0x23) /*   6.00    5.42  */
#define FE_FEPAC_VAL_0x24_gc (0x24) /*   6.41    5.79  */
#define FE_FEPAC_VAL_0x25_gc (0x25) /*   6.77    6.27  */
#define FE_FEPAC_VAL_0x26_gc (0x26) /*   7.19    6.70  */
#define FE_FEPAC_VAL_0x27_gc (0x27) /*   7.55    7.11  */
#define FE_FEPAC_VAL_0x28_gc (0x28) /*   7.98    7.47  */
#define FE_FEPAC_VAL_0x29_gc (0x29) /*   8.40    7.89  */
#define FE_FEPAC_VAL_0x2A_gc (0x2A) /*   8.79    8.25  */
#define FE_FEPAC_VAL_0x2B_gc (0x2B) /*   9.11    8.68  */
#define FE_FEPAC_VAL_0x2C_gc (0x2C) /*   9.46    9.10  */
#define FE_FEPAC_VAL_0x2D_gc (0x2D) /*   9.82    9.49  */
#define FE_FEPAC_VAL_0x2E_gc (0x2E) /*  10.18    9.81  */
#define FE_FEPAC_VAL_0x2F_gc (0x2F) /*  10.60   10.16 */
#define FE_FEPAC_VAL_0x30_gc (0x30) /*  10.89   10.52 */
#define FE_FEPAC_VAL_0x31_gc (0x31) /*  11.30   10.88 */
#define FE_FEPAC_VAL_0x32_gc (0x32) /*  11.62   11.30 */
#define FE_FEPAC_VAL_0x33_gc (0x33) /*  12.06   11.59 */
#define FE_FEPAC_VAL_0x34_gc (0x34) /*  12.39   12.00 */
#define FE_FEPAC_VAL_0x35_gc (0x35) /*  12.82   12.32 */
#define FE_FEPAC_VAL_0x36_gc (0x36) /*  13.22   12.76 */
#define FE_FEPAC_VAL_0x37_gc (0x37) /*  13.58   13.09 */
#define FE_FEPAC_VAL_0x38_gc (0x38) /*  13.95   13.52 */
#define FE_FEPAC_VAL_0x39_gc (0x39) /*  14.22   13.92 */
#define FE_FEPAC_VAL_0x3A_gc (0x3A) /*  14.41   14.28 */
#define FE_FEPAC_VAL_0x3B_gc (0x3B) /*  14.49   14.65 */
#define FE_FEPAC_VAL_0x3C_gc (0x3C) /*  14.60   14.65 */
#define FE_FEPAC_VAL_0x3D_gc (0x3D) /*  14.60   14.65 */
#define FE_FEPAC_VAL_0x3E_gc (0x3E) /*  14.60   14.65 */
#define FE_FEPAC_VAL_0x3F_gc (0x3F) /*  14.60   14.65 */


/* PLL Locked */
#define FE_PLCK_CLEAR_gc (0x00) /* PLL Locked - CLEAR */
#define FE_PLCK_SET_gc   (0x08) /* PLL Locked - SET */


/* XTO Ready */
#define FE_XRDY_CLEAR_gc (0x00) /* XTO Ready - CLEAR */
#define FE_XRDY_SET_gc   (0x04) /* XTO Ready - SET */


/* LNA Saturated */
#define FE_SAT_CLEAR_gc (0x00) /* LNA Saturated - CLEAR */
#define FE_SAT_SET_gc   (0x01) /* LNA Saturated - SET */


/* 4 Bit Resistor Tuning */
#define FE_FETN4_RTN4_gc(x) ((x<<4) & 0xF0)

/* 4 Bit Capacitor Tuning */
#define FE_FETN4_CTN4_gc(x) (x & 0x0F)

/* VCO Bias */
#define FE_FEVCO_VCOB_gc(x) ((x<<4) & 0xF0)

/* Charge Pump Current Control */
#define FE_FEVCO_CPCC_gc(x) (x & 0x0F)

/*
--------------------------------------------------------------------------------
FREQS - 
--------------------------------------------------------------------------------
*/


/* Power Amplifier Output is On */
#define FREQS_PAON_CLEAR_gc (0x00) /* Power Amplifier Output is On - CLEAR */
#define FREQS_PAON_SET_gc   (0x80) /* Power Amplifier Output is On - SET */


/* Power Amplifier Output Enable Register */
#define FREQS_PAOER_CLEAR_gc (0x00) /* Power Amplifier Output Enable Register - CLEAR */
#define FREQS_PAOER_SET_gc   (0x10) /* Power Amplifier Output Enable Register - SET */


/* Tx Modulation Source */
#define FREQS_TXMS_VAL_0x00_gc (0x00<<2) /* TXMOD Register */
#define FREQS_TXMS_VAL_0x01_gc (0x01<<2) /* TMDI Input */
#define FREQS_TXMS_VAL_0x02_gc (0x02<<2) /* Tx Modulator Serial Out */


/* Select FSK Modulation */
#define FREQS_SFM_CLEAR_gc (0x00) /* Select FSK Modulation - CLEAR */
#define FREQS_SFM_SET_gc   (0x02) /* Select FSK Modulation - SET */


/* Tx Modulation */
#define FREQS_TXMOD_CLEAR_gc (0x00) /* Tx Modulation - CLEAR */
#define FREQS_TXMOD_SET_gc   (0x01) /* Tx Modulation - SET */


/* ASK Shaping Enable */
#define FREQS_ASEN_CLEAR_gc (0x00) /* ASK Shaping Enable - CLEAR */
#define FREQS_ASEN_SET_gc   (0x10) /* ASK Shaping Enable - SET */


/* Pre-emphasis Filtering Enable */
#define FREQS_PEEN_CLEAR_gc (0x00) /* Pre-emphasis Filtering Enable - CLEAR */
#define FREQS_PEEN_SET_gc   (0x08) /* Pre-emphasis Filtering Enable - SET */


/* Gauss Filtering Enable */
#define FREQS_GAEN_CLEAR_gc (0x00) /* Gauss Filtering Enable - CLEAR */
#define FREQS_GAEN_SET_gc   (0x04) /* Gauss Filtering Enable - SET */


/* Sigma-delta Modulator Enable */
#define FREQS_SDEN_CLEAR_gc (0x00) /* Sigma-delta Modulator Enable - CLEAR */
#define FREQS_SDEN_SET_gc   (0x02) /* Sigma-delta Modulator Enable - SET */


/* Sigma-delta Modulator Power Up */
#define FREQS_SDPU_CLEAR_gc (0x00) /* Sigma-delta Modulator Power Up - CLEAR */
#define FREQS_SDPU_SET_gc   (0x01) /* Sigma-delta Modulator Power Up - SET */


/* ASK Shaping Divider */
#define FREQS_FSFCR_ASDIV_gc(x) ((x<<4) & 0xF0)

/* Gauss Filter BT Selection */
#define FREQS_BTSEL_VAL_0x00_gc (0x00) /* BT=2 */
#define FREQS_BTSEL_VAL_0x01_gc (0x01) /* BT=1.5 */
#define FREQS_BTSEL_VAL_0x02_gc (0x02) /* BT=1 */
#define FREQS_BTSEL_VAL_0x03_gc (0x03) /* BT=0.5 */


/*
--------------------------------------------------------------------------------
FRSYNC - 
--------------------------------------------------------------------------------
*/


/* Serial Mode Enable Path A */
#define FRSYNC_SEMEA_CLEAR_gc (0x00) /* Serial Mode Enable Path A - CLEAR */
#define FRSYNC_SEMEA_SET_gc   (0x80) /* Serial Mode Enable Path A - SET */


/* Start Frame ID Threshold Path A */
#define FRSYNC_SFIDCA_SFIDTA_gc(x) (x & 0x1F)

/* Serial Mode Enable Path B */
#define FRSYNC_SEMEB_CLEAR_gc (0x00) /* Serial Mode Enable Path B - CLEAR */
#define FRSYNC_SEMEB_SET_gc   (0x80) /* Serial Mode Enable Path B - SET */


/* Start Frame ID Threshold Path B */
#define FRSYNC_SFIDCB_SFIDTB_gc(x) (x & 0x1F)

/*
--------------------------------------------------------------------------------
GPIOREGS - 
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
IDCHK - 
--------------------------------------------------------------------------------
*/


/* ID Check Execute */
#define IDCHK_IDCE_CLEAR_gc (0x00) /* ID Check Execute - CLEAR */
#define IDCHK_IDCE_SET_gc   (0x80) /* ID Check Execute - SET */


/* ID Clear */
#define IDCHK_IDCLR_CLEAR_gc (0x00) /* ID Clear - CLEAR */
#define IDCHK_IDCLR_SET_gc   (0x40) /* ID Clear - SET */


/* ID Full Interrupt Mask */
#define IDCHK_IDFIM_CLEAR_gc (0x00) /* ID Full Interrupt Mask - CLEAR */
#define IDCHK_IDFIM_SET_gc   (0x20) /* ID Full Interrupt Mask - SET */


/* ID Byte Offset */
#define IDCHK_IDC_IDBO_gc(x) ((x<<2) & 0x0C)

/* ID Length */
#define IDCHK_IDC_IDL_gc(x) (x & 0x03)

/* ID Full Flag */
#define IDCHK_IDFULL_CLEAR_gc (0x00) /* ID Full Flag - CLEAR */
#define IDCHK_IDFULL_SET_gc   (0x02) /* ID Full Flag - SET */


/* ID Check Ok Flag */
#define IDCHK_IDOK_CLEAR_gc (0x00) /* ID Check Ok Flag - CLEAR */
#define IDCHK_IDOK_SET_gc   (0x01) /* ID Check Ok Flag - SET */


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


/*
--------------------------------------------------------------------------------
LIN_UART - 
--------------------------------------------------------------------------------
*/


/* LIN/UART Disable Bit Timing Resynchronization */
#define LIN_UART_LDISR_CLEAR_gc (0x00) /* LIN/UART Disable Bit Timing Resynchronization - CLEAR */
#define LIN_UART_LDISR_SET_gc   (0x80) /* LIN/UART Disable Bit Timing Resynchronization - SET */


/* LIN/UART Bit Timing */
#define LIN_UART_LINBTR_LBT_gc(x) (x & 0x3F)

/* LIN/UART Software Reset */
#define LIN_UART_LSWRES_CLEAR_gc (0x00) /* LIN/UART Software Reset - CLEAR */
#define LIN_UART_LSWRES_SET_gc   (0x80) /* LIN/UART Software Reset - SET */


/* LIN 1.3 Mode */
#define LIN_UART_LIN13_CLEAR_gc (0x00) /* LIN 1.3 Mode - CLEAR */
#define LIN_UART_LIN13_SET_gc   (0x40) /* LIN 1.3 Mode - SET */


/* LIN/UART Configuration */
#define LIN_UART_LINCR_LCONF_gc(x) ((x<<4) & 0x30)

/* LIN/UART Enable */
#define LIN_UART_LENA_CLEAR_gc (0x00) /* LIN/UART Enable - CLEAR */
#define LIN_UART_LENA_SET_gc   (0x08) /* LIN/UART Enable - SET */


/* LIN/UART Command and Mode */
#define LIN_UART_LINCR_LCMD_gc(x) (x & 0x07)

/* LIN Transmit Data Length */
#define LIN_UART_LINDLR_LTXDL_gc(x) ((x<<4) & 0xF0)

/* LIN Receive Data Length */
#define LIN_UART_LINDLR_LRXDL_gc(x) (x & 0x0F)

/* LIN/UART Enable Error Interrupt */
#define LIN_UART_LENERR_CLEAR_gc (0x00) /* LIN/UART Enable Error Interrupt - CLEAR */
#define LIN_UART_LENERR_SET_gc   (0x08) /* LIN/UART Enable Error Interrupt - SET */


/* LIN Enable Identifier Ok Interrupt */
#define LIN_UART_LENIDOK_CLEAR_gc (0x00) /* LIN Enable Identifier Ok Interrupt - CLEAR */
#define LIN_UART_LENIDOK_SET_gc   (0x04) /* LIN Enable Identifier Ok Interrupt - SET */


/* LIN/UART Enable Transmit Ok Interrupt */
#define LIN_UART_LENTXOK_CLEAR_gc (0x00) /* LIN/UART Enable Transmit Ok Interrupt - CLEAR */
#define LIN_UART_LENTXOK_SET_gc   (0x02) /* LIN/UART Enable Transmit Ok Interrupt - SET */


/* LIN/UART Enable Receive Ok Interrupt */
#define LIN_UART_LENRXOK_CLEAR_gc (0x00) /* LIN/UART Enable Receive Ok Interrupt - CLEAR */
#define LIN_UART_LENRXOK_SET_gc   (0x01) /* LIN/UART Enable Receive Ok Interrupt - SET */


/* LIN Abort Flag */
#define LIN_UART_LABORT_CLEAR_gc (0x00) /* LIN Abort Flag - CLEAR */
#define LIN_UART_LABORT_SET_gc   (0x80) /* LIN Abort Flag - SET */


/* LIN Frame Time Out Error Flag */
#define LIN_UART_LTOERR_CLEAR_gc (0x00) /* LIN Frame Time Out Error Flag - CLEAR */
#define LIN_UART_LTOERR_SET_gc   (0x40) /* LIN Frame Time Out Error Flag - SET */


/* LIN/UART Overrun Error Flag */
#define LIN_UART_LOVERR_CLEAR_gc (0x00) /* LIN/UART Overrun Error Flag - CLEAR */
#define LIN_UART_LOVERR_SET_gc   (0x20) /* LIN/UART Overrun Error Flag - SET */


/* LIN/UART Framing Error Flag */
#define LIN_UART_LFERR_CLEAR_gc (0x00) /* LIN/UART Framing Error Flag - CLEAR */
#define LIN_UART_LFERR_SET_gc   (0x10) /* LIN/UART Framing Error Flag - SET */


/* LIN Synchronization Error Flag */
#define LIN_UART_LSERR_CLEAR_gc (0x00) /* LIN Synchronization Error Flag - CLEAR */
#define LIN_UART_LSERR_SET_gc   (0x08) /* LIN Synchronization Error Flag - SET */


/* LIN Parity Error Flag */
#define LIN_UART_LPERR_CLEAR_gc (0x00) /* LIN Parity Error Flag - CLEAR */
#define LIN_UART_LPERR_SET_gc   (0x04) /* LIN Parity Error Flag - SET */


/* LIN Checksum Error Flag */
#define LIN_UART_LCERR_CLEAR_gc (0x00) /* LIN Checksum Error Flag - CLEAR */
#define LIN_UART_LCERR_SET_gc   (0x02) /* LIN Checksum Error Flag - SET */


/* LIN Bit Error Flag */
#define LIN_UART_LBERR_CLEAR_gc (0x00) /* LIN Bit Error Flag - CLEAR */
#define LIN_UART_LBERR_SET_gc   (0x01) /* LIN Bit Error Flag - SET */


/* LIN Parity */
#define LIN_UART_LINIDR_LP_gc(x) ((x<<6) & 0xC0)

/* LIN Identifier */
#define LIN_UART_LINIDR_LID_gc(x) (x & 0x3F)

/* LIN Auto Increment of Data Buffer Index Disable */
#define LIN_UART_LAINC_CLEAR_gc (0x00) /* LIN Auto Increment of Data Buffer Index Disable - CLEAR */
#define LIN_UART_LAINC_SET_gc   (0x08) /* LIN Auto Increment of Data Buffer Index Disable - SET */


/* LIN Data Buffer Index */
#define LIN_UART_LINSEL_LINDX_gc(x) (x & 0x07)

/* LIN Identifier Status */
#define LIN_UART_LINSIR_LIDST_gc(x) ((x<<5) & 0xE0)

/* LIN/UART Busy Flag */
#define LIN_UART_LBUSY_CLEAR_gc (0x00) /* LIN/UART Busy Flag - CLEAR */
#define LIN_UART_LBUSY_SET_gc   (0x10) /* LIN/UART Busy Flag - SET */


/* LIN/UART Error Flag */
#define LIN_UART_LERR_CLEAR_gc (0x00) /* LIN/UART Error Flag - CLEAR */
#define LIN_UART_LERR_SET_gc   (0x08) /* LIN/UART Error Flag - SET */


/* LIN Identifier Ok Flag */
#define LIN_UART_LIDOK_CLEAR_gc (0x00) /* LIN Identifier Ok Flag - CLEAR */
#define LIN_UART_LIDOK_SET_gc   (0x04) /* LIN Identifier Ok Flag - SET */


/* LIN/UART Transmit Ok Flag */
#define LIN_UART_LTXOK_CLEAR_gc (0x00) /* LIN/UART Transmit Ok Flag - CLEAR */
#define LIN_UART_LTXOK_SET_gc   (0x02) /* LIN/UART Transmit Ok Flag - SET */


/* LIN/UART Receive Ok Flag */
#define LIN_UART_LRXOK_CLEAR_gc (0x00) /* LIN/UART Receive Ok Flag - CLEAR */
#define LIN_UART_LRXOK_SET_gc   (0x01) /* LIN/UART Receive Ok Flag - SET */


/*
--------------------------------------------------------------------------------
OCCOUNT - 
--------------------------------------------------------------------------------
*/


/* Oscillator Calibration Select Target */
#define OCCOUNT_OCSEL_CLEAR_gc (0x00) /* Oscillator Calibration Select Target - CLEAR */
#define OCCOUNT_OCSEL_SET_gc   (0x02) /* Oscillator Calibration Select Target - SET */


/* Oscillator Calibration Counter Enable */
#define OCCOUNT_OCEN_CLEAR_gc (0x00) /* Oscillator Calibration Counter Enable - CLEAR */
#define OCCOUNT_OCEN_SET_gc   (0x01) /* Oscillator Calibration Counter Enable - SET */


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
PORTS - 
--------------------------------------------------------------------------------
*/


/* Debounce Timer Mask Select */
#define PORTS_DBTMS_CLEAR_gc (0x00) /* Debounce Timer Mask Select - CLEAR */
#define PORTS_DBTMS_SET_gc   (0x04) /* Debounce Timer Mask Select - SET */


/* Debounce Clock Select */
#define PORTS_DBCS_CLEAR_gc (0x00) /* Debounce Clock Select - CLEAR */
#define PORTS_DBCS_SET_gc   (0x02) /* Debounce Clock Select - SET */


/* Debounce Mode */
#define PORTS_DBMD_CLEAR_gc (0x00) /* Debounce Mode - CLEAR */
#define PORTS_DBMD_SET_gc   (0x01) /* Debounce Mode - SET */


/* Debug Support Switch Enable */
#define PORTS_DBGSE_CLEAR_gc (0x00) /* Debug Support Switch Enable - CLEAR */
#define PORTS_DBGSE_SET_gc   (0x80) /* Debug Support Switch Enable - SET */


/* CPU Busy Flag */
#define PORTS_CPBF_CLEAR_gc (0x00) /* CPU Busy Flag - CLEAR */
#define PORTS_CPBF_SET_gc   (0x40) /* CPU Busy Flag - SET */


/* CPU Busy Flag Output Select */
#define PORTS_CPBFOS_VAL_0x00_gc (0x00<<4) /* no output */
#define PORTS_CPBFOS_VAL_0x01_gc (0x01<<4) /* PB0 */
#define PORTS_CPBFOS_VAL_0x02_gc (0x02<<4) /* PB4 */
#define PORTS_CPBFOS_VAL_0x03_gc (0x03<<4) /* PC1 */


/* Debug Support Group Select */
#define PORTS_DBGSW_DBGGS_gc(x) (x & 0x0F)

/*
--------------------------------------------------------------------------------
RSSIB - 
--------------------------------------------------------------------------------
*/


/* RSSI LNA High Sensitivity Compensation */
#define RSSIB_RSHISC_CLEAR_gc (0x00) /* RSSI LNA High Sensitivity Compensation - CLEAR */
#define RSSIB_RSHISC_SET_gc   (0x04) /* RSSI LNA High Sensitivity Compensation - SET */


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


/* RSSI Within Low and High Limits */
#define RSSIB_RSWLH_CLEAR_gc (0x00) /* RSSI Within Low and High Limits - CLEAR */
#define RSSIB_RSWLH_SET_gc   (0x10) /* RSSI Within Low and High Limits - SET */


/* RSSI Update Period */
#define RSSIB_RSSC_RSUP_gc(x) (x & 0x0F)

/*
--------------------------------------------------------------------------------
RXBUF - 
--------------------------------------------------------------------------------
*/


/* Receive Data LSB-First Path B */
#define RXBUF_RXLSBB_CLEAR_gc (0x00) /* Receive Data LSB-First Path B - CLEAR */
#define RXBUF_RXLSBB_SET_gc   (0x80) /* Receive Data LSB-First Path B - SET */


/* Receive CRC Bit Length Path B */
#define RXBUF_RXCBLB_VAL_0x00_gc (0x00<<5) /* CRC 4-bit */
#define RXBUF_RXCBLB_VAL_0x01_gc (0x01<<5) /* CRC 8-bit */
#define RXBUF_RXCBLB_VAL_0x02_gc (0x02<<5) /* CRC 16-bit */


/* RX CRC Enable data path B */
#define RXBUF_RXCEB_CLEAR_gc (0x00) /* RX CRC Enable data path B - CLEAR */
#define RXBUF_RXCEB_SET_gc   (0x10) /* RX CRC Enable data path B - SET */


/* Receive Data LSB-First Path A */
#define RXBUF_RXLSBA_CLEAR_gc (0x00) /* Receive Data LSB-First Path A - CLEAR */
#define RXBUF_RXLSBA_SET_gc   (0x08) /* Receive Data LSB-First Path A - SET */


/* Receive CRC Bit Length Path A */
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


/* RX Buffer Path Select */
#define RXBUF_RXBPB_CLEAR_gc (0x00) /* RX Buffer Path Select - CLEAR */
#define RXBUF_RXBPB_SET_gc   (0x01) /* RX Buffer Path Select - SET */


/*
--------------------------------------------------------------------------------
RXDSP - 
--------------------------------------------------------------------------------
*/


/* End Of Telegram Path B Fail Enable */
#define RXDSP_EOTBFE_CLEAR_gc (0x00) /* End Of Telegram Path B Fail Enable - CLEAR */
#define RXDSP_EOTBFE_SET_gc   (0x80) /* End Of Telegram Path B Fail Enable - SET */


/* RSSI Range Fail Enable Path A */
#define RXDSP_RRFEA_CLEAR_gc (0x00) /* RSSI Range Fail Enable Path A - CLEAR */
#define RXDSP_RRFEA_SET_gc   (0x40) /* RSSI Range Fail Enable Path A - SET */


/* Telegram Length Reached Enable Path A */
#define RXDSP_TELREA_CLEAR_gc (0x00) /* Telegram Length Reached Enable Path A - CLEAR */
#define RXDSP_TELREA_SET_gc   (0x20) /* Telegram Length Reached Enable Path A - SET */


/* Time-Out Fail Enable Path A */
#define RXDSP_TMOFEA_CLEAR_gc (0x00) /* Time-Out Fail Enable Path A - CLEAR */
#define RXDSP_TMOFEA_SET_gc   (0x10) /* Time-Out Fail Enable Path A - SET */


/* Manchester Coding Fail Enable Path A */
#define RXDSP_MANFEA_CLEAR_gc (0x00) /* Manchester Coding Fail Enable Path A - CLEAR */
#define RXDSP_MANFEA_SET_gc   (0x08) /* Manchester Coding Fail Enable Path A - SET */


/* Symbol Timing Fail Enable Path A */
#define RXDSP_SYTFEA_CLEAR_gc (0x00) /* Symbol Timing Fail Enable Path A - CLEAR */
#define RXDSP_SYTFEA_SET_gc   (0x04) /* Symbol Timing Fail Enable Path A - SET */


/* Modulation Amplitude Fail Enable Path A */
#define RXDSP_AMPFEA_CLEAR_gc (0x00) /* Modulation Amplitude Fail Enable Path A - CLEAR */
#define RXDSP_AMPFEA_SET_gc   (0x02) /* Modulation Amplitude Fail Enable Path A - SET */


/* RF Carrier Fail Enable Path A */
#define RXDSP_CARFEA_CLEAR_gc (0x00) /* RF Carrier Fail Enable Path A - CLEAR */
#define RXDSP_CARFEA_SET_gc   (0x01) /* RF Carrier Fail Enable Path A - SET */


/* End Of Telegram Path A Fail Enable */
#define RXDSP_EOTAFE_CLEAR_gc (0x00) /* End Of Telegram Path A Fail Enable - CLEAR */
#define RXDSP_EOTAFE_SET_gc   (0x80) /* End Of Telegram Path A Fail Enable - SET */


/* RSSI Range Fail Enable Path B */
#define RXDSP_RRFEB_CLEAR_gc (0x00) /* RSSI Range Fail Enable Path B - CLEAR */
#define RXDSP_RRFEB_SET_gc   (0x40) /* RSSI Range Fail Enable Path B - SET */


/* Telegram Length Reached Enable Path B */
#define RXDSP_TELREB_CLEAR_gc (0x00) /* Telegram Length Reached Enable Path B - CLEAR */
#define RXDSP_TELREB_SET_gc   (0x20) /* Telegram Length Reached Enable Path B - SET */


/* Time-Out Fail Enable Path B */
#define RXDSP_TMOFEB_CLEAR_gc (0x00) /* Time-Out Fail Enable Path B - CLEAR */
#define RXDSP_TMOFEB_SET_gc   (0x10) /* Time-Out Fail Enable Path B - SET */


/* Manchester Coding Fail Enable Path B */
#define RXDSP_MANFEB_CLEAR_gc (0x00) /* Manchester Coding Fail Enable Path B - CLEAR */
#define RXDSP_MANFEB_SET_gc   (0x08) /* Manchester Coding Fail Enable Path B - SET */


/* Symbol Timing Fail Enable Path B */
#define RXDSP_SYTFEB_CLEAR_gc (0x00) /* Symbol Timing Fail Enable Path B - CLEAR */
#define RXDSP_SYTFEB_SET_gc   (0x04) /* Symbol Timing Fail Enable Path B - SET */


/* Modulation Amplitude Fail Enable Path B */
#define RXDSP_AMPFEB_CLEAR_gc (0x00) /* Modulation Amplitude Fail Enable Path B - CLEAR */
#define RXDSP_AMPFEB_SET_gc   (0x02) /* Modulation Amplitude Fail Enable Path B - SET */


/* RF Carrier Fail Enable Path B */
#define RXDSP_CARFEB_CLEAR_gc (0x00) /* RF Carrier Fail Enable Path B - CLEAR */
#define RXDSP_CARFEB_SET_gc   (0x01) /* RF Carrier Fail Enable Path B - SET */


/* End Of Telegram Path B Fail */
#define RXDSP_EOTBF_CLEAR_gc (0x00) /* End Of Telegram Path B Fail - CLEAR */
#define RXDSP_EOTBF_SET_gc   (0x80) /* End Of Telegram Path B Fail - SET */


/* RSSI Range Fail Path A */
#define RXDSP_RRFA_CLEAR_gc (0x00) /* RSSI Range Fail Path A - CLEAR */
#define RXDSP_RRFA_SET_gc   (0x40) /* RSSI Range Fail Path A - SET */


/* Telegram Length Reached Path A */
#define RXDSP_TELRA_CLEAR_gc (0x00) /* Telegram Length Reached Path A - CLEAR */
#define RXDSP_TELRA_SET_gc   (0x20) /* Telegram Length Reached Path A - SET */


/* Time-Out Fail Path A */
#define RXDSP_TMOFA_CLEAR_gc (0x00) /* Time-Out Fail Path A - CLEAR */
#define RXDSP_TMOFA_SET_gc   (0x10) /* Time-Out Fail Path A - SET */


/* Manchester Coding Fail Path A */
#define RXDSP_MANFA_CLEAR_gc (0x00) /* Manchester Coding Fail Path A - CLEAR */
#define RXDSP_MANFA_SET_gc   (0x08) /* Manchester Coding Fail Path A - SET */


/* Symbol Timing Fail Path A */
#define RXDSP_SYTFA_CLEAR_gc (0x00) /* Symbol Timing Fail Path A - CLEAR */
#define RXDSP_SYTFA_SET_gc   (0x04) /* Symbol Timing Fail Path A - SET */


/* Modulation Amplitude Fail Path A */
#define RXDSP_AMPFA_CLEAR_gc (0x00) /* Modulation Amplitude Fail Path A - CLEAR */
#define RXDSP_AMPFA_SET_gc   (0x02) /* Modulation Amplitude Fail Path A - SET */


/* RF Carrier Fail Path A */
#define RXDSP_CARFA_CLEAR_gc (0x00) /* RF Carrier Fail Path A - CLEAR */
#define RXDSP_CARFA_SET_gc   (0x01) /* RF Carrier Fail Path A - SET */


/* End Of Telegram Path A Fail */
#define RXDSP_EOTAF_CLEAR_gc (0x00) /* End Of Telegram Path A Fail - CLEAR */
#define RXDSP_EOTAF_SET_gc   (0x80) /* End Of Telegram Path A Fail - SET */


/* RSSI Range Fail Path B */
#define RXDSP_RRFB_CLEAR_gc (0x00) /* RSSI Range Fail Path B - CLEAR */
#define RXDSP_RRFB_SET_gc   (0x40) /* RSSI Range Fail Path B - SET */


/* Telegram Length Reached Path B */
#define RXDSP_TELRB_CLEAR_gc (0x00) /* Telegram Length Reached Path B - CLEAR */
#define RXDSP_TELRB_SET_gc   (0x20) /* Telegram Length Reached Path B - SET */


/* Time-Out Fail Path B */
#define RXDSP_TMOFB_CLEAR_gc (0x00) /* Time-Out Fail Path B - CLEAR */
#define RXDSP_TMOFB_SET_gc   (0x10) /* Time-Out Fail Path B - SET */


/* Manchester Coding Fail Path B */
#define RXDSP_MANFB_CLEAR_gc (0x00) /* Manchester Coding Fail Path B - CLEAR */
#define RXDSP_MANFB_SET_gc   (0x08) /* Manchester Coding Fail Path B - SET */


/* Symbol Timing Fail Path B */
#define RXDSP_SYTFB_CLEAR_gc (0x00) /* Symbol Timing Fail Path B - CLEAR */
#define RXDSP_SYTFB_SET_gc   (0x04) /* Symbol Timing Fail Path B - SET */


/* Modulation Amplitude Fail Path B */
#define RXDSP_AMPFB_CLEAR_gc (0x00) /* Modulation Amplitude Fail Path B - CLEAR */
#define RXDSP_AMPFB_SET_gc   (0x02) /* Modulation Amplitude Fail Path B - SET */


/* RF Carrier Fail Path B */
#define RXDSP_CARFB_CLEAR_gc (0x00) /* RF Carrier Fail Path B - CLEAR */
#define RXDSP_CARFB_SET_gc   (0x01) /* RF Carrier Fail Path B - SET */


/* Rx DSP Enable */
#define RXDSP_RDEN_CLEAR_gc (0x00) /* Rx DSP Enable - CLEAR */
#define RXDSP_RDEN_SET_gc   (0x04) /* Rx DSP Enable - SET */


/* Divided ADC Clock Enable */
#define RXDSP_ADIVEN_CLEAR_gc (0x00) /* Divided ADC Clock Enable - CLEAR */
#define RXDSP_ADIVEN_SET_gc   (0x02) /* Divided ADC Clock Enable - SET */


/* Rx DSP Power Up */
#define RXDSP_RDPU_CLEAR_gc (0x00) /* Rx DSP Power Up - CLEAR */
#define RXDSP_RDPU_SET_gc   (0x01) /* Rx DSP Power Up - SET */


/* Rx DSP Start Bit Is Data Path B */
#define RXDSP_RDSIDB_CLEAR_gc (0x00) /* Rx DSP Start Bit Is Data Path B - CLEAR */
#define RXDSP_RDSIDB_SET_gc   (0x40) /* Rx DSP Start Bit Is Data Path B - SET */


/* Rx DSP Start Bit Is Data Path A */
#define RXDSP_RDSIDA_CLEAR_gc (0x00) /* Rx DSP Start Bit Is Data Path A - CLEAR */
#define RXDSP_RDSIDA_SET_gc   (0x20) /* Rx DSP Start Bit Is Data Path A - SET */


/* Enable Transparent Raw Data Path B */
#define RXDSP_ETRPB_CLEAR_gc (0x00) /* Enable Transparent Raw Data Path B - CLEAR */
#define RXDSP_ETRPB_SET_gc   (0x10) /* Enable Transparent Raw Data Path B - SET */


/* Enable Transparent Raw Data Path A */
#define RXDSP_ETRPA_CLEAR_gc (0x00) /* Enable Transparent Raw Data Path A - CLEAR */
#define RXDSP_ETRPA_SET_gc   (0x08) /* Enable Transparent Raw Data Path A - SET */


/* Transparent Mode Data Select */
#define RXDSP_RDOCR_TMDS_gc(x) ((x<<1) & 0x06)

/* Rx DSP Power Reduction Register Busy Flag */
#define RXDSP_RDPRF_CLEAR_gc (0x00) /* Rx DSP Power Reduction Register Busy Flag - CLEAR */
#define RXDSP_RDPRF_SET_gc   (0x80) /* Rx DSP Power Reduction Register Busy Flag - SET */


/* Automatic Rx DSP Power Reduction Flag */
#define RXDSP_ARDPRF_CLEAR_gc (0x00) /* Automatic Rx DSP Power Reduction Flag - CLEAR */
#define RXDSP_ARDPRF_SET_gc   (0x40) /* Automatic Rx DSP Power Reduction Flag - SET */


/* Automatic Power Reduction Path A */
#define RXDSP_APRPTA_CLEAR_gc (0x00) /* Automatic Power Reduction Path A - CLEAR */
#define RXDSP_APRPTA_SET_gc   (0x20) /* Automatic Power Reduction Path A - SET */


/* Automatic Power Reduction Path B */
#define RXDSP_APRPTB_CLEAR_gc (0x00) /* Automatic Power Reduction Path B - CLEAR */
#define RXDSP_APRPTB_SET_gc   (0x10) /* Automatic Power Reduction Path B - SET */


/* Power Reduction Temperature Measurement */
#define RXDSP_PRTMP_CLEAR_gc (0x00) /* Power Reduction Temperature Measurement - CLEAR */
#define RXDSP_PRTMP_SET_gc   (0x08) /* Power Reduction Temperature Measurement - SET */


/* Power Reduction Digital Channel Filter */
#define RXDSP_PRFLT_CLEAR_gc (0x00) /* Power Reduction Digital Channel Filter - CLEAR */
#define RXDSP_PRFLT_SET_gc   (0x04) /* Power Reduction Digital Channel Filter - SET */


/* Power Reduction Demodulator and Receiving Path A */
#define RXDSP_PRPTA_CLEAR_gc (0x00) /* Power Reduction Demodulator and Receiving Path A - CLEAR */
#define RXDSP_PRPTA_SET_gc   (0x02) /* Power Reduction Demodulator and Receiving Path A - SET */


/* Power Reduction Demodulator and Receiving Path B */
#define RXDSP_PRPTB_CLEAR_gc (0x00) /* Power Reduction Demodulator and Receiving Path B - CLEAR */
#define RXDSP_PRPTB_SET_gc   (0x01) /* Power Reduction Demodulator and Receiving Path B - SET */


/* Wake Check Ok Path B */
#define RXDSP_WCOB_CLEAR_gc (0x00) /* Wake Check Ok Path B - CLEAR */
#define RXDSP_WCOB_SET_gc   (0x80) /* Wake Check Ok Path B - SET */


/* Wake Check Ok Path A */
#define RXDSP_WCOA_CLEAR_gc (0x00) /* Wake Check Ok Path A - CLEAR */
#define RXDSP_WCOA_SET_gc   (0x40) /* Wake Check Ok Path A - SET */


/* Start Of Telegram Path B */
#define RXDSP_SOTB_CLEAR_gc (0x00) /* Start Of Telegram Path B - CLEAR */
#define RXDSP_SOTB_SET_gc   (0x20) /* Start Of Telegram Path B - SET */


/* Start Of Telegram Path A */
#define RXDSP_SOTA_CLEAR_gc (0x00) /* Start Of Telegram Path A - CLEAR */
#define RXDSP_SOTA_SET_gc   (0x10) /* Start Of Telegram Path A - SET */


/* End Of Telegram Path B */
#define RXDSP_EOTB_CLEAR_gc (0x00) /* End Of Telegram Path B - CLEAR */
#define RXDSP_EOTB_SET_gc   (0x08) /* End Of Telegram Path B - SET */


/* End Of Telegram Path A */
#define RXDSP_EOTA_CLEAR_gc (0x00) /* End Of Telegram Path A - CLEAR */
#define RXDSP_EOTA_SET_gc   (0x04) /* End Of Telegram Path A - SET */


/* New Bit Path B */
#define RXDSP_NBITB_CLEAR_gc (0x00) /* New Bit Path B - CLEAR */
#define RXDSP_NBITB_SET_gc   (0x02) /* New Bit Path B - SET */


/* New Bit Path A */
#define RXDSP_NBITA_CLEAR_gc (0x00) /* New Bit Path A - CLEAR */
#define RXDSP_NBITA_SET_gc   (0x01) /* New Bit Path A - SET */


/* Wake Check Ok Path B Interrupt Mask */
#define RXDSP_WCOBM_CLEAR_gc (0x00) /* Wake Check Ok Path B Interrupt Mask - CLEAR */
#define RXDSP_WCOBM_SET_gc   (0x80) /* Wake Check Ok Path B Interrupt Mask - SET */


/* Wake Check Ok Path A Interrupt Mask */
#define RXDSP_WCOAM_CLEAR_gc (0x00) /* Wake Check Ok Path A Interrupt Mask - CLEAR */
#define RXDSP_WCOAM_SET_gc   (0x40) /* Wake Check Ok Path A Interrupt Mask - SET */


/* Start Of Telegram Path B Interrupt Mask */
#define RXDSP_SOTBM_CLEAR_gc (0x00) /* Start Of Telegram Path B Interrupt Mask - CLEAR */
#define RXDSP_SOTBM_SET_gc   (0x20) /* Start Of Telegram Path B Interrupt Mask - SET */


/* Start Of Telegram Path A Interrupt Mask */
#define RXDSP_SOTAM_CLEAR_gc (0x00) /* Start Of Telegram Path A Interrupt Mask - CLEAR */
#define RXDSP_SOTAM_SET_gc   (0x10) /* Start Of Telegram Path A Interrupt Mask - SET */


/* End Of Telegram Path B Interrupt Mask */
#define RXDSP_EOTBM_CLEAR_gc (0x00) /* End Of Telegram Path B Interrupt Mask - CLEAR */
#define RXDSP_EOTBM_SET_gc   (0x08) /* End Of Telegram Path B Interrupt Mask - SET */


/* End Of Telegram Path A Interrupt Mask */
#define RXDSP_EOTAM_CLEAR_gc (0x00) /* End Of Telegram Path A Interrupt Mask - CLEAR */
#define RXDSP_EOTAM_SET_gc   (0x04) /* End Of Telegram Path A Interrupt Mask - SET */


/* New Bit Path B Interrupt Mask */
#define RXDSP_NBITBM_CLEAR_gc (0x00) /* New Bit Path B Interrupt Mask - CLEAR */
#define RXDSP_NBITBM_SET_gc   (0x02) /* New Bit Path B Interrupt Mask - SET */


/* New Bit Path A Interrupt Mask */
#define RXDSP_NBITAM_CLEAR_gc (0x00) /* New Bit Path A Interrupt Mask - CLEAR */
#define RXDSP_NBITAM_SET_gc   (0x01) /* New Bit Path A Interrupt Mask - SET */


/* Wake Check Ok Path B Ok Enable */
#define RXDSP_WCOBOE_CLEAR_gc (0x00) /* Wake Check Ok Path B Ok Enable - CLEAR */
#define RXDSP_WCOBOE_SET_gc   (0x80) /* Wake Check Ok Path B Ok Enable - SET */


/* RSSI Range Ok Enable Path A */
#define RXDSP_RROEA_CLEAR_gc (0x00) /* RSSI Range Ok Enable Path A - CLEAR */
#define RXDSP_RROEA_SET_gc   (0x40) /* RSSI Range Ok Enable Path A - SET */


/* Start of Frame Identifier Enable Path A */
#define RXDSP_SFIDEA_CLEAR_gc (0x00) /* Start of Frame Identifier Enable Path A - CLEAR */
#define RXDSP_SFIDEA_SET_gc   (0x20) /* Start of Frame Identifier Enable Path A - SET */


/* Wake Up Pattern Enable Path A */
#define RXDSP_WUPEA_CLEAR_gc (0x00) /* Wake Up Pattern Enable Path A - CLEAR */
#define RXDSP_WUPEA_SET_gc   (0x10) /* Wake Up Pattern Enable Path A - SET */


/* Manchester Coding Ok Enable Path A */
#define RXDSP_MANOEA_CLEAR_gc (0x00) /* Manchester Coding Ok Enable Path A - CLEAR */
#define RXDSP_MANOEA_SET_gc   (0x08) /* Manchester Coding Ok Enable Path A - SET */


/* Symbol Timing Ok Enable Path A */
#define RXDSP_SYTOEA_CLEAR_gc (0x00) /* Symbol Timing Ok Enable Path A - CLEAR */
#define RXDSP_SYTOEA_SET_gc   (0x04) /* Symbol Timing Ok Enable Path A - SET */


/* Modulation Amplitude Ok Enable Path A */
#define RXDSP_AMPOEA_CLEAR_gc (0x00) /* Modulation Amplitude Ok Enable Path A - CLEAR */
#define RXDSP_AMPOEA_SET_gc   (0x02) /* Modulation Amplitude Ok Enable Path A - SET */


/* RF Carrier Ok Enable Path A */
#define RXDSP_CAROEA_CLEAR_gc (0x00) /* RF Carrier Ok Enable Path A - CLEAR */
#define RXDSP_CAROEA_SET_gc   (0x01) /* RF Carrier Ok Enable Path A - SET */


/* Wake Check Ok Path A Ok Enable */
#define RXDSP_WCOAOE_CLEAR_gc (0x00) /* Wake Check Ok Path A Ok Enable - CLEAR */
#define RXDSP_WCOAOE_SET_gc   (0x80) /* Wake Check Ok Path A Ok Enable - SET */


/* RSSI Range Ok Enable Path B */
#define RXDSP_RROEB_CLEAR_gc (0x00) /* RSSI Range Ok Enable Path B - CLEAR */
#define RXDSP_RROEB_SET_gc   (0x40) /* RSSI Range Ok Enable Path B - SET */


/* Start of Frame Identifier Enable Path B */
#define RXDSP_SFIDEB_CLEAR_gc (0x00) /* Start of Frame Identifier Enable Path B - CLEAR */
#define RXDSP_SFIDEB_SET_gc   (0x20) /* Start of Frame Identifier Enable Path B - SET */


/* Wake Up Pattern Enable Path B */
#define RXDSP_WUPEB_CLEAR_gc (0x00) /* Wake Up Pattern Enable Path B - CLEAR */
#define RXDSP_WUPEB_SET_gc   (0x10) /* Wake Up Pattern Enable Path B - SET */


/* Manchester Coding Ok Enable Path B */
#define RXDSP_MANOEB_CLEAR_gc (0x00) /* Manchester Coding Ok Enable Path B - CLEAR */
#define RXDSP_MANOEB_SET_gc   (0x08) /* Manchester Coding Ok Enable Path B - SET */


/* Symbol Timing Ok Enable Path B */
#define RXDSP_SYTOEB_CLEAR_gc (0x00) /* Symbol Timing Ok Enable Path B - CLEAR */
#define RXDSP_SYTOEB_SET_gc   (0x04) /* Symbol Timing Ok Enable Path B - SET */


/* Modulation Amplitude Ok Enable Path B */
#define RXDSP_AMPOEB_CLEAR_gc (0x00) /* Modulation Amplitude Ok Enable Path B - CLEAR */
#define RXDSP_AMPOEB_SET_gc   (0x02) /* Modulation Amplitude Ok Enable Path B - SET */


/* RF Carrier Ok Enable Path B */
#define RXDSP_CAROEB_CLEAR_gc (0x00) /* RF Carrier Ok Enable Path B - CLEAR */
#define RXDSP_CAROEB_SET_gc   (0x01) /* RF Carrier Ok Enable Path B - SET */


/* Wake Check Ok Path B Ok */
#define RXDSP_WCOBO_CLEAR_gc (0x00) /* Wake Check Ok Path B Ok - CLEAR */
#define RXDSP_WCOBO_SET_gc   (0x80) /* Wake Check Ok Path B Ok - SET */


/* RSSI Range Ok Path A */
#define RXDSP_RROA_CLEAR_gc (0x00) /* RSSI Range Ok Path A - CLEAR */
#define RXDSP_RROA_SET_gc   (0x40) /* RSSI Range Ok Path A - SET */


/* Start of Frame Identifier Ok Path A */
#define RXDSP_SFIDOA_CLEAR_gc (0x00) /* Start of Frame Identifier Ok Path A - CLEAR */
#define RXDSP_SFIDOA_SET_gc   (0x20) /* Start of Frame Identifier Ok Path A - SET */


/* Wake Up Pattern Ok Path A */
#define RXDSP_WUPOA_CLEAR_gc (0x00) /* Wake Up Pattern Ok Path A - CLEAR */
#define RXDSP_WUPOA_SET_gc   (0x10) /* Wake Up Pattern Ok Path A - SET */


/* Manchester Coding Ok Path A */
#define RXDSP_MANOA_CLEAR_gc (0x00) /* Manchester Coding Ok Path A - CLEAR */
#define RXDSP_MANOA_SET_gc   (0x08) /* Manchester Coding Ok Path A - SET */


/* Symbol Timing Ok Path A */
#define RXDSP_SYTOA_CLEAR_gc (0x00) /* Symbol Timing Ok Path A - CLEAR */
#define RXDSP_SYTOA_SET_gc   (0x04) /* Symbol Timing Ok Path A - SET */


/* Modulation Amplitude Ok Path A */
#define RXDSP_AMPOA_CLEAR_gc (0x00) /* Modulation Amplitude Ok Path A - CLEAR */
#define RXDSP_AMPOA_SET_gc   (0x02) /* Modulation Amplitude Ok Path A - SET */


/* RF Carrier Ok Path A */
#define RXDSP_CAROA_CLEAR_gc (0x00) /* RF Carrier Ok Path A - CLEAR */
#define RXDSP_CAROA_SET_gc   (0x01) /* RF Carrier Ok Path A - SET */


/* Wake Check Ok Path A Ok */
#define RXDSP_WCOAO_CLEAR_gc (0x00) /* Wake Check Ok Path A Ok - CLEAR */
#define RXDSP_WCOAO_SET_gc   (0x80) /* Wake Check Ok Path A Ok - SET */


/* RSSI Range Ok Path B */
#define RXDSP_RROB_CLEAR_gc (0x00) /* RSSI Range Ok Path B - CLEAR */
#define RXDSP_RROB_SET_gc   (0x40) /* RSSI Range Ok Path B - SET */


/* Start of Frame Identifier Ok Path B */
#define RXDSP_SFIDOB_CLEAR_gc (0x00) /* Start of Frame Identifier Ok Path B - CLEAR */
#define RXDSP_SFIDOB_SET_gc   (0x20) /* Start of Frame Identifier Ok Path B - SET */


/* Wake Up Pattern Ok Path B */
#define RXDSP_WUPOB_CLEAR_gc (0x00) /* Wake Up Pattern Ok Path B - CLEAR */
#define RXDSP_WUPOB_SET_gc   (0x10) /* Wake Up Pattern Ok Path B - SET */


/* Manchester Coding Ok Path B */
#define RXDSP_MANOB_CLEAR_gc (0x00) /* Manchester Coding Ok Path B - CLEAR */
#define RXDSP_MANOB_SET_gc   (0x08) /* Manchester Coding Ok Path B - SET */


/* Symbol Timing Ok Path B */
#define RXDSP_SYTOB_CLEAR_gc (0x00) /* Symbol Timing Ok Path B - CLEAR */
#define RXDSP_SYTOB_SET_gc   (0x04) /* Symbol Timing Ok Path B - SET */


/* Modulation Amplitude Ok Path B */
#define RXDSP_AMPOB_CLEAR_gc (0x00) /* Modulation Amplitude Ok Path B - CLEAR */
#define RXDSP_AMPOB_SET_gc   (0x02) /* Modulation Amplitude Ok Path B - SET */


/* RF Carrier Ok Path B */
#define RXDSP_CAROB_CLEAR_gc (0x00) /* RF Carrier Ok Path B - CLEAR */
#define RXDSP_CAROB_SET_gc   (0x01) /* RF Carrier Ok Path B - SET */


/* End of Telegram Location Path A */
#define RXDSP_EOTLA_VAL_0x00_gc (0x00<<1) /* No EOT */
#define RXDSP_EOTLA_VAL_0x01_gc (0x01<<1) /* Before WCO */
#define RXDSP_EOTLA_VAL_0x02_gc (0x02<<1) /* Between WCO and SOT */
#define RXDSP_EOTLA_VAL_0x03_gc (0x03<<1) /* After SOT */


/* Cyclic Redundancy Check Ok Path A */
#define RXDSP_CRCOA_CLEAR_gc (0x00) /* Cyclic Redundancy Check Ok Path A - CLEAR */
#define RXDSP_CRCOA_SET_gc   (0x01) /* Cyclic Redundancy Check Ok Path A - SET */


/* End of Telegram Location Path B */
#define RXDSP_EOTLB_VAL_0x00_gc (0x00<<1) /* No EOT */
#define RXDSP_EOTLB_VAL_0x01_gc (0x01<<1) /* Before WCO */
#define RXDSP_EOTLB_VAL_0x02_gc (0x02<<1) /* Between WCO and SOT */
#define RXDSP_EOTLB_VAL_0x03_gc (0x03<<1) /* After SOT */


/* Cyclic Redundancy Check Ok Path B */
#define RXDSP_CRCOB_CLEAR_gc (0x00) /* Cyclic Redundancy Check Ok Path B - CLEAR */
#define RXDSP_CRCOB_SET_gc   (0x01) /* Cyclic Redundancy Check Ok Path B - SET */


/*
--------------------------------------------------------------------------------
SFIFO - 
--------------------------------------------------------------------------------
*/


/* Support FIFO Direct Read Access Operational Mode */
#define SFIFO_SFDRA_CLEAR_gc (0x00) /* Support FIFO Direct Read Access Operational Mode - CLEAR */
#define SFIFO_SFDRA_SET_gc   (0x80) /* Support FIFO Direct Read Access Operational Mode - SET */


/* Support FIFO Fill Level Configuration */
#define SFIFO_SFC_SFFLC_gc(x) (x & 0x1F)

/* Support FIFO Error Interrupt Mask */
#define SFIFO_SFERIM_CLEAR_gc (0x00) /* Support FIFO Error Interrupt Mask - CLEAR */
#define SFIFO_SFERIM_SET_gc   (0x02) /* Support FIFO Error Interrupt Mask - SET */


/* Support FIFO Fill Level Interrupt Mask */
#define SFIFO_SFFLIM_CLEAR_gc (0x00) /* Support FIFO Fill Level Interrupt Mask - CLEAR */
#define SFIFO_SFFLIM_SET_gc   (0x01) /* Support FIFO Fill Level Interrupt Mask - SET */


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


/* Support FIFO Fill Level Reached Status Flag */
#define SFIFO_SFFLRF_CLEAR_gc (0x00) /* Support FIFO Fill Level Reached Status Flag - CLEAR */
#define SFIFO_SFFLRF_SET_gc   (0x01) /* Support FIFO Fill Level Reached Status Flag - SET */


/*
--------------------------------------------------------------------------------
SPI - 
--------------------------------------------------------------------------------
*/


/* Transmit Buffer Clear */
#define SPI_TFC_CLEAR_gc (0x00) /* Transmit Buffer Clear - CLEAR */
#define SPI_TFC_SET_gc   (0x80) /* Transmit Buffer Clear - SET */


/* Transmit Buffer Fill Level */
#define SPI_SFFR_TFL_gc(x) ((x<<4) & 0x70)

/* Rx Buffer Clear */
#define SPI_RFC_CLEAR_gc (0x00) /* Rx Buffer Clear - CLEAR */
#define SPI_RFC_SET_gc   (0x08) /* Rx Buffer Clear - SET */


/* Receive Buffer Fill Level */
#define SPI_SFFR_RFL_gc(x) (x & 0x07)

/* SPI Transmit Buffer Interrupt Enable */
#define SPI_STIE_CLEAR_gc (0x00) /* SPI Transmit Buffer Interrupt Enable - CLEAR */
#define SPI_STIE_SET_gc   (0x80) /* SPI Transmit Buffer Interrupt Enable - SET */


/* Transmit Buffer Interrupt Level */
#define SPI_SFIR_TIL_gc(x) ((x<<4) & 0x70)

/* SPI Rx Buffer Interrupt Enable */
#define SPI_SRIE_CLEAR_gc (0x00) /* SPI Rx Buffer Interrupt Enable - CLEAR */
#define SPI_SRIE_SET_gc   (0x08) /* SPI Rx Buffer Interrupt Enable - SET */


/* Receive Buffer Interrupt Level */
#define SPI_SFIR_RIL_gc(x) (x & 0x07)

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


/* Clock Polarity */
#define SPI_CPOL_CLEAR_gc (0x00) /* Clock Polarity - CLEAR */
#define SPI_CPOL_SET_gc   (0x08) /* Clock Polarity - SET */


/* Clock Phase */
#define SPI_CPHA_CLEAR_gc (0x00) /* Clock Phase - CLEAR */
#define SPI_CPHA_SET_gc   (0x04) /* Clock Phase - SET */


/* SPI Clock Rate Select */
#define SPI_SPR_VAL_0x00_gc (0x00) /* clkio/4 */
#define SPI_SPR_VAL_0x01_gc (0x01) /* clkio/16 */
#define SPI_SPR_VAL_0x02_gc (0x02) /* clkio/64 */
#define SPI_SPR_VAL_0x03_gc (0x03) /* clkio/128 */
#define SPI_SPR_VAL_0x04_gc (0x04) /* clkio/2 */
#define SPI_SPR_VAL_0x05_gc (0x05) /* clkio/8 */
#define SPI_SPR_VAL_0x06_gc (0x06) /* clkio/32 */
#define SPI_SPR_VAL_0x07_gc (0x07) /* clkio/64 */


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


/*
--------------------------------------------------------------------------------
SSM - 
--------------------------------------------------------------------------------
*/


/* End Of Telegram Path B Fail Enable */
#define SSM_EOTBFE1_CLEAR_gc (0x00) /* End Of Telegram Path B Fail Enable - CLEAR */
#define SSM_EOTBFE1_SET_gc   (0x80) /* End Of Telegram Path B Fail Enable - SET */


/* RSSI Range Fail Enable Path A */
#define SSM_RRFEA1_CLEAR_gc (0x00) /* RSSI Range Fail Enable Path A - CLEAR */
#define SSM_RRFEA1_SET_gc   (0x40) /* RSSI Range Fail Enable Path A - SET */


/* Telegram Length Reached Enable Path A */
#define SSM_TELREA1_CLEAR_gc (0x00) /* Telegram Length Reached Enable Path A - CLEAR */
#define SSM_TELREA1_SET_gc   (0x20) /* Telegram Length Reached Enable Path A - SET */


/* Time-Out Fail Enable Path A */
#define SSM_TMOFEA1_CLEAR_gc (0x00) /* Time-Out Fail Enable Path A - CLEAR */
#define SSM_TMOFEA1_SET_gc   (0x10) /* Time-Out Fail Enable Path A - SET */


/* Manchester Coding Fail Enable Path A */
#define SSM_MANFEA1_CLEAR_gc (0x00) /* Manchester Coding Fail Enable Path A - CLEAR */
#define SSM_MANFEA1_SET_gc   (0x08) /* Manchester Coding Fail Enable Path A - SET */


/* Symbol Timing Fail Enable Path A */
#define SSM_SYTFEA1_CLEAR_gc (0x00) /* Symbol Timing Fail Enable Path A - CLEAR */
#define SSM_SYTFEA1_SET_gc   (0x04) /* Symbol Timing Fail Enable Path A - SET */


/* Modulation Amplitude Fail Enable Path A */
#define SSM_AMPFEA1_CLEAR_gc (0x00) /* Modulation Amplitude Fail Enable Path A - CLEAR */
#define SSM_AMPFEA1_SET_gc   (0x02) /* Modulation Amplitude Fail Enable Path A - SET */


/* RF Carrier Fail Enable Path A */
#define SSM_CARFEA1_CLEAR_gc (0x00) /* RF Carrier Fail Enable Path A - CLEAR */
#define SSM_CARFEA1_SET_gc   (0x01) /* RF Carrier Fail Enable Path A - SET */


/* End Of Telegram Path A Fail Enable */
#define SSM_EOTAFE1_CLEAR_gc (0x00) /* End Of Telegram Path A Fail Enable - CLEAR */
#define SSM_EOTAFE1_SET_gc   (0x80) /* End Of Telegram Path A Fail Enable - SET */


/* RSSI Range Fail Enable Path B */
#define SSM_RRFEB1_CLEAR_gc (0x00) /* RSSI Range Fail Enable Path B - CLEAR */
#define SSM_RRFEB1_SET_gc   (0x40) /* RSSI Range Fail Enable Path B - SET */


/* Telegram Length Reached Enable Path B */
#define SSM_TELREB1_CLEAR_gc (0x00) /* Telegram Length Reached Enable Path B - CLEAR */
#define SSM_TELREB1_SET_gc   (0x20) /* Telegram Length Reached Enable Path B - SET */


/* Time-Out Fail Enable Path B */
#define SSM_TMOFEB1_CLEAR_gc (0x00) /* Time-Out Fail Enable Path B - CLEAR */
#define SSM_TMOFEB1_SET_gc   (0x10) /* Time-Out Fail Enable Path B - SET */


/* Manchester Coding Fail Enable Path B */
#define SSM_MANFEB1_CLEAR_gc (0x00) /* Manchester Coding Fail Enable Path B - CLEAR */
#define SSM_MANFEB1_SET_gc   (0x08) /* Manchester Coding Fail Enable Path B - SET */


/* Symbol Timing Fail Enable Path B */
#define SSM_SYTFEB1_CLEAR_gc (0x00) /* Symbol Timing Fail Enable Path B - CLEAR */
#define SSM_SYTFEB1_SET_gc   (0x04) /* Symbol Timing Fail Enable Path B - SET */


/* Modulation Amplitude Fail Enable Path B */
#define SSM_AMPFEB1_CLEAR_gc (0x00) /* Modulation Amplitude Fail Enable Path B - CLEAR */
#define SSM_AMPFEB1_SET_gc   (0x02) /* Modulation Amplitude Fail Enable Path B - SET */


/* RF Carrier Fail Enable Path B */
#define SSM_CARFEB1_CLEAR_gc (0x00) /* RF Carrier Fail Enable Path B - CLEAR */
#define SSM_CARFEB1_SET_gc   (0x01) /* RF Carrier Fail Enable Path B - SET */


/* End Of Telegram Path B Fail Enable */
#define SSM_EOTBFE2_CLEAR_gc (0x00) /* End Of Telegram Path B Fail Enable - CLEAR */
#define SSM_EOTBFE2_SET_gc   (0x80) /* End Of Telegram Path B Fail Enable - SET */


/* RSSI Range Fail Enable Path A */
#define SSM_RRFEA2_CLEAR_gc (0x00) /* RSSI Range Fail Enable Path A - CLEAR */
#define SSM_RRFEA2_SET_gc   (0x40) /* RSSI Range Fail Enable Path A - SET */


/* Telegram Length Reached Enable Path A */
#define SSM_TELREA2_CLEAR_gc (0x00) /* Telegram Length Reached Enable Path A - CLEAR */
#define SSM_TELREA2_SET_gc   (0x20) /* Telegram Length Reached Enable Path A - SET */


/* Time-Out Fail Enable Path A */
#define SSM_TMOFEA2_CLEAR_gc (0x00) /* Time-Out Fail Enable Path A - CLEAR */
#define SSM_TMOFEA2_SET_gc   (0x10) /* Time-Out Fail Enable Path A - SET */


/* Manchester Coding Fail Enable Path A */
#define SSM_MANFEA2_CLEAR_gc (0x00) /* Manchester Coding Fail Enable Path A - CLEAR */
#define SSM_MANFEA2_SET_gc   (0x08) /* Manchester Coding Fail Enable Path A - SET */


/* Symbol Timing Fail Enable Path A */
#define SSM_SYTFEA2_CLEAR_gc (0x00) /* Symbol Timing Fail Enable Path A - CLEAR */
#define SSM_SYTFEA2_SET_gc   (0x04) /* Symbol Timing Fail Enable Path A - SET */


/* Modulation Amplitude Fail Enable Path A */
#define SSM_AMPFEA2_CLEAR_gc (0x00) /* Modulation Amplitude Fail Enable Path A - CLEAR */
#define SSM_AMPFEA2_SET_gc   (0x02) /* Modulation Amplitude Fail Enable Path A - SET */


/* RF Carrier Fail Enable Path A */
#define SSM_CARFEA2_CLEAR_gc (0x00) /* RF Carrier Fail Enable Path A - CLEAR */
#define SSM_CARFEA2_SET_gc   (0x01) /* RF Carrier Fail Enable Path A - SET */


/* End Of Telegram Path A Fail Enable */
#define SSM_EOTAFE2_CLEAR_gc (0x00) /* End Of Telegram Path A Fail Enable - CLEAR */
#define SSM_EOTAFE2_SET_gc   (0x80) /* End Of Telegram Path A Fail Enable - SET */


/* RSSI Range Fail Enable Path B */
#define SSM_RRFEB2_CLEAR_gc (0x00) /* RSSI Range Fail Enable Path B - CLEAR */
#define SSM_RRFEB2_SET_gc   (0x40) /* RSSI Range Fail Enable Path B - SET */


/* Telegram Length Reached Enable Path B */
#define SSM_TELREB2_CLEAR_gc (0x00) /* Telegram Length Reached Enable Path B - CLEAR */
#define SSM_TELREB2_SET_gc   (0x20) /* Telegram Length Reached Enable Path B - SET */


/* Time-Out Fail Enable Path B */
#define SSM_TMOFEB2_CLEAR_gc (0x00) /* Time-Out Fail Enable Path B - CLEAR */
#define SSM_TMOFEB2_SET_gc   (0x10) /* Time-Out Fail Enable Path B - SET */


/* Manchester Coding Fail Enable Path B */
#define SSM_MANFEB2_CLEAR_gc (0x00) /* Manchester Coding Fail Enable Path B - CLEAR */
#define SSM_MANFEB2_SET_gc   (0x08) /* Manchester Coding Fail Enable Path B - SET */


/* Symbol Timing Fail Enable Path B */
#define SSM_SYTFEB2_CLEAR_gc (0x00) /* Symbol Timing Fail Enable Path B - CLEAR */
#define SSM_SYTFEB2_SET_gc   (0x04) /* Symbol Timing Fail Enable Path B - SET */


/* Modulation Amplitude Fail Enable Path B */
#define SSM_AMPFEB2_CLEAR_gc (0x00) /* Modulation Amplitude Fail Enable Path B - CLEAR */
#define SSM_AMPFEB2_SET_gc   (0x02) /* Modulation Amplitude Fail Enable Path B - SET */


/* RF Carrier Fail Enable Path B */
#define SSM_CARFEB2_CLEAR_gc (0x00) /* RF Carrier Fail Enable Path B - CLEAR */
#define SSM_CARFEB2_SET_gc   (0x01) /* RF Carrier Fail Enable Path B - SET */


/* End Of Telegram Path B Fail Enable */
#define SSM_EOTBFE3_CLEAR_gc (0x00) /* End Of Telegram Path B Fail Enable - CLEAR */
#define SSM_EOTBFE3_SET_gc   (0x80) /* End Of Telegram Path B Fail Enable - SET */


/* RSSI Range Fail Enable Path A */
#define SSM_RRFEA3_CLEAR_gc (0x00) /* RSSI Range Fail Enable Path A - CLEAR */
#define SSM_RRFEA3_SET_gc   (0x40) /* RSSI Range Fail Enable Path A - SET */


/* Telegram Length Reached Enable Path A */
#define SSM_TELREA3_CLEAR_gc (0x00) /* Telegram Length Reached Enable Path A - CLEAR */
#define SSM_TELREA3_SET_gc   (0x20) /* Telegram Length Reached Enable Path A - SET */


/* Time-Out Fail Enable Path A */
#define SSM_TMOFEA3_CLEAR_gc (0x00) /* Time-Out Fail Enable Path A - CLEAR */
#define SSM_TMOFEA3_SET_gc   (0x10) /* Time-Out Fail Enable Path A - SET */


/* Manchester Coding Fail Enable Path A */
#define SSM_MANFEA3_CLEAR_gc (0x00) /* Manchester Coding Fail Enable Path A - CLEAR */
#define SSM_MANFEA3_SET_gc   (0x08) /* Manchester Coding Fail Enable Path A - SET */


/* Symbol Timing Fail Enable Path A */
#define SSM_SYTFEA3_CLEAR_gc (0x00) /* Symbol Timing Fail Enable Path A - CLEAR */
#define SSM_SYTFEA3_SET_gc   (0x04) /* Symbol Timing Fail Enable Path A - SET */


/* Modulation Amplitude Fail Enable Path A */
#define SSM_AMPFEA3_CLEAR_gc (0x00) /* Modulation Amplitude Fail Enable Path A - CLEAR */
#define SSM_AMPFEA3_SET_gc   (0x02) /* Modulation Amplitude Fail Enable Path A - SET */


/* RF Carrier Fail Enable Path A */
#define SSM_CARFEA3_CLEAR_gc (0x00) /* RF Carrier Fail Enable Path A - CLEAR */
#define SSM_CARFEA3_SET_gc   (0x01) /* RF Carrier Fail Enable Path A - SET */


/* End Of Telegram Path A Fail Enable */
#define SSM_EOTAFE3_CLEAR_gc (0x00) /* End Of Telegram Path A Fail Enable - CLEAR */
#define SSM_EOTAFE3_SET_gc   (0x80) /* End Of Telegram Path A Fail Enable - SET */


/* RSSI Range Fail Enable Path B */
#define SSM_RRFEB3_CLEAR_gc (0x00) /* RSSI Range Fail Enable Path B - CLEAR */
#define SSM_RRFEB3_SET_gc   (0x40) /* RSSI Range Fail Enable Path B - SET */


/* Telegram Length Reached Enable Path B */
#define SSM_TELREB3_CLEAR_gc (0x00) /* Telegram Length Reached Enable Path B - CLEAR */
#define SSM_TELREB3_SET_gc   (0x20) /* Telegram Length Reached Enable Path B - SET */


/* Time-Out Fail Enable Path B */
#define SSM_TMOFEB3_CLEAR_gc (0x00) /* Time-Out Fail Enable Path B - CLEAR */
#define SSM_TMOFEB3_SET_gc   (0x10) /* Time-Out Fail Enable Path B - SET */


/* Manchester Coding Fail Enable Path B */
#define SSM_MANFEB3_CLEAR_gc (0x00) /* Manchester Coding Fail Enable Path B - CLEAR */
#define SSM_MANFEB3_SET_gc   (0x08) /* Manchester Coding Fail Enable Path B - SET */


/* Symbol Timing Fail Enable Path B */
#define SSM_SYTFEB3_CLEAR_gc (0x00) /* Symbol Timing Fail Enable Path B - CLEAR */
#define SSM_SYTFEB3_SET_gc   (0x04) /* Symbol Timing Fail Enable Path B - SET */


/* Modulation Amplitude Fail Enable Path B */
#define SSM_AMPFEB3_CLEAR_gc (0x00) /* Modulation Amplitude Fail Enable Path B - CLEAR */
#define SSM_AMPFEB3_SET_gc   (0x02) /* Modulation Amplitude Fail Enable Path B - SET */


/* RF Carrier Fail Enable Path B */
#define SSM_CARFEB3_CLEAR_gc (0x00) /* RF Carrier Fail Enable Path B - CLEAR */
#define SSM_CARFEB3_SET_gc   (0x01) /* RF Carrier Fail Enable Path B - SET */


/* Intermittent WUP Mode Path B */
#define SSM_IWUPB_CLEAR_gc (0x00) /* Intermittent WUP Mode Path B - CLEAR */
#define SSM_IWUPB_SET_gc   (0x80) /* Intermittent WUP Mode Path B - SET */


/* Demodulator Automatic Restart Path B */
#define SSM_DARB_CLEAR_gc (0x00) /* Demodulator Automatic Restart Path B - CLEAR */
#define SSM_DARB_SET_gc   (0x40) /* Demodulator Automatic Restart Path B - SET */


/* Gap Mode Path B */
#define SSM_GAPMB_CLEAR_gc (0x00) /* Gap Mode Path B - CLEAR */
#define SSM_GAPMB_SET_gc   (0x20) /* Gap Mode Path B - SET */


/* Rx Telegram End Handling Path B */
#define SSM_RXTEHB_CLEAR_gc (0x00) /* Rx Telegram End Handling Path B - CLEAR */
#define SSM_RXTEHB_SET_gc   (0x10) /* Rx Telegram End Handling Path B - SET */


/* Intermittent WUP Mode Path A */
#define SSM_IWUPA_CLEAR_gc (0x00) /* Intermittent WUP Mode Path A - CLEAR */
#define SSM_IWUPA_SET_gc   (0x08) /* Intermittent WUP Mode Path A - SET */


/* Demodulator Automatic Restart Path A */
#define SSM_DARA_CLEAR_gc (0x00) /* Demodulator Automatic Restart Path A - CLEAR */
#define SSM_DARA_SET_gc   (0x04) /* Demodulator Automatic Restart Path A - SET */


/* Gap Mode Path A */
#define SSM_GAPMA_CLEAR_gc (0x00) /* Gap Mode Path A - CLEAR */
#define SSM_GAPMA_SET_gc   (0x02) /* Gap Mode Path A - SET */


/* Rx Telegram End Handling Path A */
#define SSM_RXTEHA_CLEAR_gc (0x00) /* Rx Telegram End Handling Path A - CLEAR */
#define SSM_RXTEHA_SET_gc   (0x01) /* Rx Telegram End Handling Path A - SET */


/* Master State Machine Sub-State Machine Select 1 */
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


/* Master State Machine Sub-State Machine Select 0 */
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


/* Master State Machine Sub-State Machine Select 3 */
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


/* Master State Machine Sub-State Machine Select 2 */
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


/* Master State Machine Sub-State Machine Select 5 */
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


/* Master State Machine Sub-State Machine Select 4 */
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


/* Master State Machine Sub-State Machine Select 7 */
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


/* Master State Machine Sub-State Machine Select 6 */
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


/* Wake Check Ok Path B Ok Enable */
#define SSM_WCOBOE1_CLEAR_gc (0x00) /* Wake Check Ok Path B Ok Enable - CLEAR */
#define SSM_WCOBOE1_SET_gc   (0x80) /* Wake Check Ok Path B Ok Enable - SET */


/* RSSI Range Ok Enable Path A */
#define SSM_RROEA1_CLEAR_gc (0x00) /* RSSI Range Ok Enable Path A - CLEAR */
#define SSM_RROEA1_SET_gc   (0x40) /* RSSI Range Ok Enable Path A - SET */


/* Start of Frame Identifier Enable Path A */
#define SSM_SFIDEA1_CLEAR_gc (0x00) /* Start of Frame Identifier Enable Path A - CLEAR */
#define SSM_SFIDEA1_SET_gc   (0x20) /* Start of Frame Identifier Enable Path A - SET */


/* Wake Up Pattern Enable Path A */
#define SSM_WUPEA1_CLEAR_gc (0x00) /* Wake Up Pattern Enable Path A - CLEAR */
#define SSM_WUPEA1_SET_gc   (0x10) /* Wake Up Pattern Enable Path A - SET */


/* Manchester Coding Ok Enable Path A */
#define SSM_MANOEA1_CLEAR_gc (0x00) /* Manchester Coding Ok Enable Path A - CLEAR */
#define SSM_MANOEA1_SET_gc   (0x08) /* Manchester Coding Ok Enable Path A - SET */


/* Symbol Timing Ok Enable Path A */
#define SSM_SYTOEA1_CLEAR_gc (0x00) /* Symbol Timing Ok Enable Path A - CLEAR */
#define SSM_SYTOEA1_SET_gc   (0x04) /* Symbol Timing Ok Enable Path A - SET */


/* Modulation Amplitude Ok Enable Path A */
#define SSM_AMPOEA1_CLEAR_gc (0x00) /* Modulation Amplitude Ok Enable Path A - CLEAR */
#define SSM_AMPOEA1_SET_gc   (0x02) /* Modulation Amplitude Ok Enable Path A - SET */


/* RF Carrier Ok Enable Path A */
#define SSM_CAROEA1_CLEAR_gc (0x00) /* RF Carrier Ok Enable Path A - CLEAR */
#define SSM_CAROEA1_SET_gc   (0x01) /* RF Carrier Ok Enable Path A - SET */


/* Wake Check Ok Path A Ok Enable */
#define SSM_WCOAOE1_CLEAR_gc (0x00) /* Wake Check Ok Path A Ok Enable - CLEAR */
#define SSM_WCOAOE1_SET_gc   (0x80) /* Wake Check Ok Path A Ok Enable - SET */


/* RSSI Range Ok Enable Path B */
#define SSM_RROEB1_CLEAR_gc (0x00) /* RSSI Range Ok Enable Path B - CLEAR */
#define SSM_RROEB1_SET_gc   (0x40) /* RSSI Range Ok Enable Path B - SET */


/* Start of Frame Identifier Enable Path B */
#define SSM_SFIDEB1_CLEAR_gc (0x00) /* Start of Frame Identifier Enable Path B - CLEAR */
#define SSM_SFIDEB1_SET_gc   (0x20) /* Start of Frame Identifier Enable Path B - SET */


/* Wake Up Pattern Enable Path B */
#define SSM_WUPEB1_CLEAR_gc (0x00) /* Wake Up Pattern Enable Path B - CLEAR */
#define SSM_WUPEB1_SET_gc   (0x10) /* Wake Up Pattern Enable Path B - SET */


/* Manchester Coding Ok Enable Path B */
#define SSM_MANOEB1_CLEAR_gc (0x00) /* Manchester Coding Ok Enable Path B - CLEAR */
#define SSM_MANOEB1_SET_gc   (0x08) /* Manchester Coding Ok Enable Path B - SET */


/* Symbol Timing Ok Enable Path B */
#define SSM_SYTOEB1_CLEAR_gc (0x00) /* Symbol Timing Ok Enable Path B - CLEAR */
#define SSM_SYTOEB1_SET_gc   (0x04) /* Symbol Timing Ok Enable Path B - SET */


/* Modulation Amplitude Ok Enable Path B */
#define SSM_AMPOEB1_CLEAR_gc (0x00) /* Modulation Amplitude Ok Enable Path B - CLEAR */
#define SSM_AMPOEB1_SET_gc   (0x02) /* Modulation Amplitude Ok Enable Path B - SET */


/* RF Carrier Ok Enable Path B */
#define SSM_CAROEB1_CLEAR_gc (0x00) /* RF Carrier Ok Enable Path B - CLEAR */
#define SSM_CAROEB1_SET_gc   (0x01) /* RF Carrier Ok Enable Path B - SET */


/* Wake Check Ok Path B Ok Enable */
#define SSM_WCOBOE2_CLEAR_gc (0x00) /* Wake Check Ok Path B Ok Enable - CLEAR */
#define SSM_WCOBOE2_SET_gc   (0x80) /* Wake Check Ok Path B Ok Enable - SET */


/* RSSI Range Ok Enable Path A */
#define SSM_RROEA2_CLEAR_gc (0x00) /* RSSI Range Ok Enable Path A - CLEAR */
#define SSM_RROEA2_SET_gc   (0x40) /* RSSI Range Ok Enable Path A - SET */


/* Start of Frame Identifier Enable Path A */
#define SSM_SFIDEA2_CLEAR_gc (0x00) /* Start of Frame Identifier Enable Path A - CLEAR */
#define SSM_SFIDEA2_SET_gc   (0x20) /* Start of Frame Identifier Enable Path A - SET */


/* Wake Up Pattern Enable Path A */
#define SSM_WUPEA2_CLEAR_gc (0x00) /* Wake Up Pattern Enable Path A - CLEAR */
#define SSM_WUPEA2_SET_gc   (0x10) /* Wake Up Pattern Enable Path A - SET */


/* Manchester Coding Ok Enable Path A */
#define SSM_MANOEA2_CLEAR_gc (0x00) /* Manchester Coding Ok Enable Path A - CLEAR */
#define SSM_MANOEA2_SET_gc   (0x08) /* Manchester Coding Ok Enable Path A - SET */


/* Symbol Timing Ok Enable Path A */
#define SSM_SYTOEA2_CLEAR_gc (0x00) /* Symbol Timing Ok Enable Path A - CLEAR */
#define SSM_SYTOEA2_SET_gc   (0x04) /* Symbol Timing Ok Enable Path A - SET */


/* Modulation Amplitude Ok Enable Path A */
#define SSM_AMPOEA2_CLEAR_gc (0x00) /* Modulation Amplitude Ok Enable Path A - CLEAR */
#define SSM_AMPOEA2_SET_gc   (0x02) /* Modulation Amplitude Ok Enable Path A - SET */


/* RF Carrier Ok Enable Path A */
#define SSM_CAROEA2_CLEAR_gc (0x00) /* RF Carrier Ok Enable Path A - CLEAR */
#define SSM_CAROEA2_SET_gc   (0x01) /* RF Carrier Ok Enable Path A - SET */


/* Wake Check Ok Path A Ok Enable */
#define SSM_WCOAOE2_CLEAR_gc (0x00) /* Wake Check Ok Path A Ok Enable - CLEAR */
#define SSM_WCOAOE2_SET_gc   (0x80) /* Wake Check Ok Path A Ok Enable - SET */


/* RSSI Range Ok Enable Path B */
#define SSM_RROEB2_CLEAR_gc (0x00) /* RSSI Range Ok Enable Path B - CLEAR */
#define SSM_RROEB2_SET_gc   (0x40) /* RSSI Range Ok Enable Path B - SET */


/* Start of Frame Identifier Enable Path B */
#define SSM_SFIDEB2_CLEAR_gc (0x00) /* Start of Frame Identifier Enable Path B - CLEAR */
#define SSM_SFIDEB2_SET_gc   (0x20) /* Start of Frame Identifier Enable Path B - SET */


/* Wake Up Pattern Enable Path B */
#define SSM_WUPEB2_CLEAR_gc (0x00) /* Wake Up Pattern Enable Path B - CLEAR */
#define SSM_WUPEB2_SET_gc   (0x10) /* Wake Up Pattern Enable Path B - SET */


/* Manchester Coding Ok Enable Path B */
#define SSM_MANOEB2_CLEAR_gc (0x00) /* Manchester Coding Ok Enable Path B - CLEAR */
#define SSM_MANOEB2_SET_gc   (0x08) /* Manchester Coding Ok Enable Path B - SET */


/* Symbol Timing Ok Enable Path B */
#define SSM_SYTOEB2_CLEAR_gc (0x00) /* Symbol Timing Ok Enable Path B - CLEAR */
#define SSM_SYTOEB2_SET_gc   (0x04) /* Symbol Timing Ok Enable Path B - SET */


/* Modulation Amplitude Ok Enable Path B */
#define SSM_AMPOEB2_CLEAR_gc (0x00) /* Modulation Amplitude Ok Enable Path B - CLEAR */
#define SSM_AMPOEB2_SET_gc   (0x02) /* Modulation Amplitude Ok Enable Path B - SET */


/* RF Carrier Ok Enable Path B */
#define SSM_CAROEB2_CLEAR_gc (0x00) /* RF Carrier Ok Enable Path B - CLEAR */
#define SSM_CAROEB2_SET_gc   (0x01) /* RF Carrier Ok Enable Path B - SET */


/* SSM Enable Raw Transparent Path B */
#define SSM_SETRPB_CLEAR_gc (0x00) /* SSM Enable Raw Transparent Path B - CLEAR */
#define SSM_SETRPB_SET_gc   (0x80) /* SSM Enable Raw Transparent Path B - SET */


/* SSM Enable Transparent Path A */
#define SSM_SETRPA_CLEAR_gc (0x00) /* SSM Enable Transparent Path A - CLEAR */
#define SSM_SETRPA_SET_gc   (0x40) /* SSM Enable Transparent Path A - SET */


/* SSM Tx ASK-Shaping Enable */
#define SSM_SSMTAE_CLEAR_gc (0x00) /* SSM Tx ASK-Shaping Enable - CLEAR */
#define SSM_SSMTAE_SET_gc   (0x20) /* SSM Tx ASK-Shaping Enable - SET */


/* SSM PA Voltage Enable */
#define SSM_SSMPVE_CLEAR_gc (0x00) /* SSM PA Voltage Enable - CLEAR */
#define SSM_SSMPVE_SET_gc   (0x10) /* SSM PA Voltage Enable - SET */


/* SSM Tx Preemphasis Enable */
#define SSM_SSMTPE_CLEAR_gc (0x00) /* SSM Tx Preemphasis Enable - CLEAR */
#define SSM_SSMTPE_SET_gc   (0x08) /* SSM Tx Preemphasis Enable - SET */


/* SSM Tx Gauss Shaping Enable */
#define SSM_SSMTGE_CLEAR_gc (0x00) /* SSM Tx Gauss Shaping Enable - CLEAR */
#define SSM_SSMTGE_SET_gc   (0x04) /* SSM Tx Gauss Shaping Enable - SET */


/* SSM Temperature Measurement */
#define SSM_SSMTM_CLEAR_gc (0x00) /* SSM Temperature Measurement - CLEAR */
#define SSM_SSMTM_SET_gc   (0x02) /* SSM Temperature Measurement - SET */


/* SSM Tx */
#define SSM_SSMTX_CLEAR_gc (0x00) /* SSM Tx - CLEAR */
#define SSM_SSMTX_SET_gc   (0x01) /* SSM Tx - SET */


/* SSM PLL Lock Delay Time */
#define SSM_SSMPLDT_CLEAR_gc (0x00) /* SSM PLL Lock Delay Time - CLEAR */
#define SSM_SSMPLDT_SET_gc   (0x20) /* SSM PLL Lock Delay Time - SET */


/* SSM Half Antenna Damping Delay Time */
#define SSM_SSMHADT_CLEAR_gc (0x00) /* SSM Half Antenna Damping Delay Time - CLEAR */
#define SSM_SSMHADT_SET_gc   (0x10) /* SSM Half Antenna Damping Delay Time - SET */


/* SSM Double Filter Delay Time */
#define SSM_SSMDFDT_CLEAR_gc (0x00) /* SSM Double Filter Delay Time - CLEAR */
#define SSM_SSMDFDT_SET_gc   (0x08) /* SSM Double Filter Delay Time - SET */


/* SSM Filter Delay */
#define SSM_SSMFID_VAL_0x00_gc (0x00) /* 380us (25kHz) */
#define SSM_SSMFID_VAL_0x01_gc (0x01) /* 202us (50kHz) */
#define SSM_SSMFID_VAL_0x02_gc (0x02) /* 135us (80kHz) */
#define SSM_SSMFID_VAL_0x03_gc (0x03) /*  75us (165kHz) */
#define SSM_SSMFID_VAL_0x04_gc (0x04) /*  58.5us (235kHz) */
#define SSM_SSMFID_VAL_0x05_gc (0x05) /*  45us (360kHz) */


/* SSM Continuous Start Telegram End Handling */
#define SSM_SSMCEH_CLEAR_gc (0x00) /* SSM Continuous Start Telegram End Handling - CLEAR */
#define SSM_SSMCEH_SET_gc   (0x08) /* SSM Continuous Start Telegram End Handling - SET */


/* SSM Single Start Telegram End Handling */
#define SSM_SSMSEH_CLEAR_gc (0x00) /* SSM Single Start Telegram End Handling - CLEAR */
#define SSM_SSMSEH_SET_gc   (0x04) /* SSM Single Start Telegram End Handling - SET */


/* SSM ID Scan Fail */
#define SSM_SSMIDSF_CLEAR_gc (0x00) /* SSM ID Scan Fail - CLEAR */
#define SSM_SSMIDSF_SET_gc   (0x02) /* SSM ID Scan Fail - SET */


/* SSM ID Scan OK */
#define SSM_SSMIDSO_CLEAR_gc (0x00) /* SSM ID Scan OK - CLEAR */
#define SSM_SSMIDSO_SET_gc   (0x01) /* SSM ID Scan OK - SET */


/* SSM Interrupt Flag */
#define SSM_SSMIF_CLEAR_gc (0x00) /* SSM Interrupt Flag - CLEAR */
#define SSM_SSMIF_SET_gc   (0x01) /* SSM Interrupt Flag - SET */


/* SSM Interrupt Mask */
#define SSM_SSMIM_CLEAR_gc (0x00) /* SSM Interrupt Mask - CLEAR */
#define SSM_SSMIM_SET_gc   (0x01) /* SSM Interrupt Mask - SET */


/* SSM Transparent Output Enable */
#define SSM_SSMTMOE_CLEAR_gc (0x00) /* SSM Transparent Output Enable - CLEAR */
#define SSM_SSMTMOE_SET_gc   (0x80) /* SSM Transparent Output Enable - SET */


/* SSM ID Check Enable */
#define SSM_SSMIDSE_CLEAR_gc (0x00) /* SSM ID Check Enable - CLEAR */
#define SSM_SSMIDSE_SET_gc   (0x40) /* SSM ID Check Enable - SET */


/* SSM IF Amplifier Enable */
#define SSM_SSMIFA_CLEAR_gc (0x00) /* SSM IF Amplifier Enable - CLEAR */
#define SSM_SSMIFA_SET_gc   (0x20) /* SSM IF Amplifier Enable - SET */


/* SSM Path Valid After SOT */
#define SSM_SSMPVS_CLEAR_gc (0x00) /* SSM Path Valid After SOT - CLEAR */
#define SSM_SSMPVS_SET_gc   (0x10) /* SSM Path Valid After SOT - SET */


/* SSM High Sensitivity Enable */
#define SSM_SSMHIS_CLEAR_gc (0x00) /* SSM High Sensitivity Enable - CLEAR */
#define SSM_SSMHIS_SET_gc   (0x08) /* SSM High Sensitivity Enable - SET */


/* SSM Antenna Damping Disable */
#define SSM_SSMAD_CLEAR_gc (0x00) /* SSM Antenna Damping Disable - CLEAR */
#define SSM_SSMAD_SET_gc   (0x04) /* SSM Antenna Damping Disable - SET */


/* SSM Path B */
#define SSM_SSMPB_CLEAR_gc (0x00) /* SSM Path B - CLEAR */
#define SSM_SSMPB_SET_gc   (0x02) /* SSM Path B - SET */


/* SSM Path A */
#define SSM_SSMPA_CLEAR_gc (0x00) /* SSM Path A - CLEAR */
#define SSM_SSMPA_SET_gc   (0x01) /* SSM Path A - SET */


/* SSM Stop */
#define SSM_SSMST_CLEAR_gc (0x00) /* SSM Stop - CLEAR */
#define SSM_SSMST_SET_gc   (0x02) /* SSM Stop - SET */


/* SSM Run */
#define SSM_SSMR_CLEAR_gc (0x00) /* SSM Run - CLEAR */
#define SSM_SSMR_SET_gc   (0x01) /* SSM Run - SET */


/* SSM Error */
#define SSM_SSMERR_CLEAR_gc (0x00) /* SSM Error - CLEAR */
#define SSM_SSMERR_SET_gc   (0x80) /* SSM Error - SET */


/* SSM Error State Machine */
#define SSM_SSMSR_SSMESM_gc(x) (x & 0x0F)

/*
--------------------------------------------------------------------------------
SUP - 
--------------------------------------------------------------------------------
*/


/* DCDC Converter Clock Divider */
#define SUP_DCCDIV_VAL_0x00_gc (0x00<<4) /* 16 (375kHz) */
#define SUP_DCCDIV_VAL_0x01_gc (0x01<<4) /* 12 (500kHz) */
#define SUP_DCCDIV_VAL_0x02_gc (0x02<<4) /*  8 (750kHz) */
#define SUP_DCCDIV_VAL_0x03_gc (0x03<<4) /*  6 (1MHz) */


/* DCDC Converter High Side Switch */
#define SUP_DCHSSW_CLEAR_gc (0x00) /* DCDC Converter High Side Switch - CLEAR */
#define SUP_DCHSSW_SET_gc   (0x02) /* DCDC Converter High Side Switch - SET */


/* DCDC Converter Enable */
#define SUP_DCEN_CLEAR_gc (0x00) /* DCDC Converter Enable - CLEAR */
#define SUP_DCEN_SET_gc   (0x01) /* DCDC Converter Enable - SET */


/* DCDC Converter Driver Strength */
#define SUP_DCC2_DCDRV_gc(x) ((x<<4) & 0x30)

/* DCDC Converter Current Limit */
#define SUP_DCC2_DCCLIM_gc(x) ((x<<2) & 0x0C)

/* DCDC Converter Output Voltage */
#define SUP_DCVOUT_VAL_0x00_gc (0x00) /* 2.2V */
#define SUP_DCVOUT_VAL_0x01_gc (0x01) /* 2.5V */
#define SUP_DCVOUT_VAL_0x02_gc (0x02) /* 2.8V */
#define SUP_DCVOUT_VAL_0x03_gc (0x03) /* 3.3V */


/* Zero Crossing Calibration */
#define SUP_DCCAL1_ZCCAL_gc(x) ((x<<4) & 0xF0)

/* Current Limit Calibration */
#define SUP_DCCAL1_CCAL_gc(x) (x & 0x0F)

/* Offset Calibration */
#define SUP_DCCAL2_OFCAL_gc(x) ((x<<4) & 0xF0)

/* Dead Time Calibration */
#define SUP_DCCAL2_DTCAL_gc(x) (x & 0x0F)

/* 4 Bit Resistor Tuning */
#define SUP_RCTUNE4_RTUNE4_gc(x) ((x<<4) & 0xF0)

/* 4 Bit Capacitor Tuning */
#define SUP_RCTUNE4_CTUNE4_gc(x) (x & 0x0F)

/* AVCC Double Internal Current */
#define SUP_AVDIC_CLEAR_gc (0x00) /* AVCC Double Internal Current - CLEAR */
#define SUP_AVDIC_SET_gc   (0x40) /* AVCC Double Internal Current - SET */


/* AVCC Enable */
#define SUP_AVEN_CLEAR_gc (0x00) /* AVCC Enable - CLEAR */
#define SUP_AVEN_SET_gc   (0x20) /* AVCC Enable - SET */


/* Power Amplifier Regulator Double Internal Current */
#define SUP_PVDIC_CLEAR_gc (0x00) /* Power Amplifier Regulator Double Internal Current - CLEAR */
#define SUP_PVDIC_SET_gc   (0x10) /* Power Amplifier Regulator Double Internal Current - SET */


/* Power Amplifier Voltage 2.2V */
#define SUP_PV22_CLEAR_gc (0x00) /* Power Amplifier Voltage 2.2V - CLEAR */
#define SUP_PV22_SET_gc   (0x08) /* Power Amplifier Voltage 2.2V - SET */


/* Power Amplifier Voltage Supply Enable */
#define SUP_PVEN_CLEAR_gc (0x00) /* Power Amplifier Voltage Supply Enable - CLEAR */
#define SUP_PVEN_SET_gc   (0x04) /* Power Amplifier Voltage Supply Enable - SET */


/* AVCC Low Interrupt Mask */
#define SUP_AVCCLM_CLEAR_gc (0x00) /* AVCC Low Interrupt Mask - CLEAR */
#define SUP_AVCCLM_SET_gc   (0x02) /* AVCC Low Interrupt Mask - SET */


/* AVCC Reset Interrupt Mask */
#define SUP_AVCCRM_CLEAR_gc (0x00) /* AVCC Reset Interrupt Mask - CLEAR */
#define SUP_AVCCRM_SET_gc   (0x01) /* AVCC Reset Interrupt Mask - SET */


/* DCDC Converter Error Flag */
#define SUP_DCERF_CLEAR_gc (0x00) /* DCDC Converter Error Flag - CLEAR */
#define SUP_DCERF_SET_gc   (0x08) /* DCDC Converter Error Flag - SET */


/* DCDC Converter Ready Flag */
#define SUP_DCRDYF_CLEAR_gc (0x00) /* DCDC Converter Ready Flag - CLEAR */
#define SUP_DCRDYF_SET_gc   (0x04) /* DCDC Converter Ready Flag - SET */


/* AVCC Low Flag */
#define SUP_AVCCLF_CLEAR_gc (0x00) /* AVCC Low Flag - CLEAR */
#define SUP_AVCCLF_SET_gc   (0x02) /* AVCC Low Flag - SET */


/* AVCC Reset Flag */
#define SUP_AVCCRF_CLEAR_gc (0x00) /* AVCC Reset Flag - CLEAR */
#define SUP_AVCCRF_SET_gc   (0x01) /* AVCC Reset Flag - SET */


/*
--------------------------------------------------------------------------------
TIMER0_WDT - 
--------------------------------------------------------------------------------
*/


/* Timer0 Prescaler Reset */
#define TIMER0_WDT_T0PR_CLEAR_gc (0x00) /* Timer0 Prescaler Reset - CLEAR */
#define TIMER0_WDT_T0PR_SET_gc   (0x10) /* Timer0 Prescaler Reset - SET */


/* Timer0 Interrupt Enable */
#define TIMER0_WDT_T0IE_CLEAR_gc (0x00) /* Timer0 Interrupt Enable - CLEAR */
#define TIMER0_WDT_T0IE_SET_gc   (0x08) /* Timer0 Interrupt Enable - SET */


/* Timer0 Prescaler Select */
#define TIMER0_WDT_T0CR_T0PS_gc(x) (x & 0x07)

/* Timer0 Flag */
#define TIMER0_WDT_T0F_CLEAR_gc (0x00) /* Timer0 Flag - CLEAR */
#define TIMER0_WDT_T0F_SET_gc   (0x01) /* Timer0 Flag - SET */


/* Watchdog Change Enable */
#define TIMER0_WDT_WDCE_CLEAR_gc (0x00) /* Watchdog Change Enable - CLEAR */
#define TIMER0_WDT_WDCE_SET_gc   (0x10) /* Watchdog Change Enable - SET */


/* Watchdog Enable */
#define TIMER0_WDT_WDE_CLEAR_gc (0x00) /* Watchdog Enable - CLEAR */
#define TIMER0_WDT_WDE_SET_gc   (0x08) /* Watchdog Enable - SET */


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


/* Timer3 Capture Reset Mask */
#define TIMER3_T3CPRM_CLEAR_gc (0x00) /* Timer3 Capture Reset Mask - CLEAR */
#define TIMER3_T3CPRM_SET_gc   (0x08) /* Timer3 Capture Reset Mask - SET */


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


/* Timer3 Overflow Flag */
#define TIMER3_T3OFF_CLEAR_gc (0x00) /* Timer3 Overflow Flag - CLEAR */
#define TIMER3_T3OFF_SET_gc   (0x01) /* Timer3 Overflow Flag - SET */


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

/* Timer3 Clock Select */
#define TIMER3_T3CS_VAL_0x00_gc (0x00) /* clk_frc */
#define TIMER3_T3CS_VAL_0x01_gc (0x01) /* clk_T */
#define TIMER3_T3CS_VAL_0x02_gc (0x02) /* clk_xto4 */
#define TIMER3_T3CS_VAL_0x03_gc (0x03) /* clk_xto2 */


/* Timer3 Input Capture Select */
#define TIMER3_T3ICS_VAL_0x00_gc (0x00<<5) /* clk_T2 */
#define TIMER3_T3ICS_VAL_0x01_gc (0x01<<5) /* trpa */
#define TIMER3_T3ICS_VAL_0x02_gc (0x02<<5) /* trpb */
#define TIMER3_T3ICS_VAL_0x03_gc (0x03<<5) /* ticp */
#define TIMER3_T3ICS_VAL_0x04_gc (0x04<<5) /* clk_src */


/* Timer3 Capture Edge Select */
#define TIMER3_T3CE_VAL_0x00_gc (0x00<<3) /* disable */
#define TIMER3_T3CE_VAL_0x01_gc (0x01<<3) /* rising edge */
#define TIMER3_T3CE_VAL_0x02_gc (0x02<<3) /* falling edge */
#define TIMER3_T3CE_VAL_0x03_gc (0x03<<3) /* both edges */


/* Timer3 Input Capture Noise Canceller */
#define TIMER3_T3CNC_CLEAR_gc (0x00) /* Timer3 Input Capture Noise Canceller - CLEAR */
#define TIMER3_T3CNC_SET_gc   (0x04) /* Timer3 Input Capture Noise Canceller - SET */


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


/* Timer4 Capture Reset Mask */
#define TIMER4_T4CPRM_CLEAR_gc (0x00) /* Timer4 Capture Reset Mask - CLEAR */
#define TIMER4_T4CPRM_SET_gc   (0x08) /* Timer4 Capture Reset Mask - SET */


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


/* Timer4 Overflow Flag */
#define TIMER4_T4OFF_CLEAR_gc (0x00) /* Timer4 Overflow Flag - CLEAR */
#define TIMER4_T4OFF_SET_gc   (0x01) /* Timer4 Overflow Flag - SET */


/* Timer4 Capture Interrupt Mask */
#define TIMER4_T4CPIM_CLEAR_gc (0x00) /* Timer4 Capture Interrupt Mask - CLEAR */
#define TIMER4_T4CPIM_SET_gc   (0x04) /* Timer4 Capture Interrupt Mask - SET */


/* Timer4 Compare Interrupt Mask */
#define TIMER4_T4CIM_CLEAR_gc (0x00) /* Timer4 Compare Interrupt Mask - CLEAR */
#define TIMER4_T4CIM_SET_gc   (0x02) /* Timer4 Compare Interrupt Mask - SET */


/* Timer4 Overflow Interrupt Mask */
#define TIMER4_T4OIM_CLEAR_gc (0x00) /* Timer4 Overflow Interrupt Mask - CLEAR */
#define TIMER4_T4OIM_SET_gc   (0x01) /* Timer4 Overflow Interrupt Mask - SET */


/* Timer4 Prescaler Select */
#define TIMER4_T4MRA_T4PS_gc(x) ((x<<2) & 0x1C)

/* Timer4 Clock Select */
#define TIMER4_T4CS_VAL_0x00_gc (0x00) /* clk_src */
#define TIMER4_T4CS_VAL_0x01_gc (0x01) /* clk_T */
#define TIMER4_T4CS_VAL_0x02_gc (0x02) /* clk_xto6 */
#define TIMER4_T4CS_VAL_0x03_gc (0x03) /* clk_frc */


/* Timer4 Input Capture Select */
#define TIMER4_T4ICS_VAL_0x00_gc (0x00<<5) /* clk_T2 */
#define TIMER4_T4ICS_VAL_0x01_gc (0x01<<5) /* trpa */
#define TIMER4_T4ICS_VAL_0x02_gc (0x02<<5) /* trpb */
#define TIMER4_T4ICS_VAL_0x03_gc (0x03<<5) /* ticp */
#define TIMER4_T4ICS_VAL_0x04_gc (0x04<<5) /* clk_src */


/* Timer4 Capture Edge Select */
#define TIMER4_T4CE_VAL_0x00_gc (0x00<<3) /* disable */
#define TIMER4_T4CE_VAL_0x01_gc (0x01<<3) /* rising edge */
#define TIMER4_T4CE_VAL_0x02_gc (0x02<<3) /* falling edge */
#define TIMER4_T4CE_VAL_0x03_gc (0x03<<3) /* both edges */


/* Timer4 Input Capture Noise Canceller */
#define TIMER4_T4CNC_CLEAR_gc (0x00) /* Timer4 Input Capture Noise Canceller - CLEAR */
#define TIMER4_T4CNC_SET_gc   (0x04) /* Timer4 Input Capture Noise Canceller - SET */


/* Timer4 Software Capture Enable */
#define TIMER4_T4SCE_CLEAR_gc (0x00) /* Timer4 Software Capture Enable - CLEAR */
#define TIMER4_T4SCE_SET_gc   (0x02) /* Timer4 Software Capture Enable - SET */


/*
--------------------------------------------------------------------------------
TIMER5 - 
--------------------------------------------------------------------------------
*/


/* Timer Synchronization Mode */
#define TIMER5_TSM_CLEAR_gc (0x00) /* Timer Synchronization Mode - CLEAR */
#define TIMER5_TSM_SET_gc   (0x80) /* Timer Synchronization Mode - SET */


/* Prescaler Reset */
#define TIMER5_PSR10_CLEAR_gc (0x00) /* Prescaler Reset - CLEAR */
#define TIMER5_PSR10_SET_gc   (0x01) /* Prescaler Reset - SET */


/* Timer5 Clear Counter on Compare Match */
#define TIMER5_T5CTC_CLEAR_gc (0x00) /* Timer5 Clear Counter on Compare Match - CLEAR */
#define TIMER5_T5CTC_SET_gc   (0x08) /* Timer5 Clear Counter on Compare Match - SET */


/* Timer5 Clock Select */
#define TIMER5_T5CS_VAL_0x00_gc (0x00) /* No Clock Source (Stopped) */
#define TIMER5_T5CS_VAL_0x01_gc (0x01) /* Running, No Prescaling */
#define TIMER5_T5CS_VAL_0x02_gc (0x02) /* Running, CLK/8 */
#define TIMER5_T5CS_VAL_0x03_gc (0x03) /* Running, CLK/32 */
#define TIMER5_T5CS_VAL_0x04_gc (0x04) /* Running, CLK/64 */
#define TIMER5_T5CS_VAL_0x05_gc (0x05) /* Running, CLK/128 */
#define TIMER5_T5CS_VAL_0x06_gc (0x06) /* Running, CLK/256 */
#define TIMER5_T5CS_VAL_0x07_gc (0x07) /* Running, CLK/1024 */


/* Timer5 Compare Flag */
#define TIMER5_T5COF_CLEAR_gc (0x00) /* Timer5 Compare Flag - CLEAR */
#define TIMER5_T5COF_SET_gc   (0x02) /* Timer5 Compare Flag - SET */


/* Timer5 Overflow Flag */
#define TIMER5_T5OFF_CLEAR_gc (0x00) /* Timer5 Overflow Flag - CLEAR */
#define TIMER5_T5OFF_SET_gc   (0x01) /* Timer5 Overflow Flag - SET */


/* Timer5 Compare Interrupt Mask */
#define TIMER5_T5CIM_CLEAR_gc (0x00) /* Timer5 Compare Interrupt Mask - CLEAR */
#define TIMER5_T5CIM_SET_gc   (0x02) /* Timer5 Compare Interrupt Mask - SET */


/* Timer5 Overflow Interrupt Mask */
#define TIMER5_T5OIM_CLEAR_gc (0x00) /* Timer5 Overflow Interrupt Mask - CLEAR */
#define TIMER5_T5OIM_SET_gc   (0x01) /* Timer5 Overflow Interrupt Mask - SET */


/*
--------------------------------------------------------------------------------
TRACE - 
--------------------------------------------------------------------------------
*/


/* Trace Unit Enable */
#define TRACE_TRCEN_CLEAR_gc (0x00) /* Trace Unit Enable - CLEAR */
#define TRACE_TRCEN_SET_gc   (0x02) /* Trace Unit Enable - SET */


/* Trace Unit Change Enable */
#define TRACE_TRCCE_CLEAR_gc (0x00) /* Trace Unit Change Enable - CLEAR */
#define TRACE_TRCCE_SET_gc   (0x01) /* Trace Unit Change Enable - SET */


/*
--------------------------------------------------------------------------------
TXM - 
--------------------------------------------------------------------------------
*/


/* Tx Modulator Transmission Complete Interrupt Mask */
#define TXM_TMCIM_CLEAR_gc (0x00) /* Tx Modulator Transmission Complete Interrupt Mask - CLEAR */
#define TXM_TMCIM_SET_gc   (0x10) /* Tx Modulator Transmission Complete Interrupt Mask - SET */


/* Tx Modulator Serial Output Clock Select */
#define TXM_TMSCS_CLEAR_gc (0x00) /* Tx Modulator Serial Output Clock Select - CLEAR */
#define TXM_TMSCS_SET_gc   (0x08) /* Tx Modulator Serial Output Clock Select - SET */


/* Tx Modulator Port Interface Select */
#define TXM_TMPIS_VAL_0x00_gc (0x00) /* Port C3 */
#define TXM_TMPIS_VAL_0x01_gc (0x01) /* M2 - Toggle Register Timer2 */
#define TXM_TMPIS_VAL_0x02_gc (0x02) /* M3 - Toggle Register Timer3 */
#define TXM_TMPIS_VAL_0x03_gc (0x03) /* M4 - Toggle Register Timer4 */
#define TXM_TMPIS_VAL_0x04_gc (0x04) /* SO Tx Modulator Serial Output */
#define TXM_TMPIS_VAL_0x05_gc (0x05) /* M1 - Toggle Register Timer1 */


/* Tx Modulator Most Significant Bit First */
#define TXM_TMLSB_CLEAR_gc (0x00) /* Tx Modulator Most Significant Bit First - CLEAR */
#define TXM_TMLSB_SET_gc   (0x40) /* Tx Modulator Most Significant Bit First - SET */


/* Tx Modulator Stop Sequence Enable */
#define TXM_TMSSE_CLEAR_gc (0x00) /* Tx Modulator Stop Sequence Enable - CLEAR */
#define TXM_TMSSE_SET_gc   (0x20) /* Tx Modulator Stop Sequence Enable - SET */


/* Tx Modulator Polarity */
#define TXM_TMPOL_CLEAR_gc (0x00) /* Tx Modulator Polarity - CLEAR */
#define TXM_TMPOL_SET_gc   (0x10) /* Tx Modulator Polarity - SET */


/* Tx Modulator NRZ Mode Enable */
#define TXM_TMNRZE_CLEAR_gc (0x00) /* Tx Modulator NRZ Mode Enable - CLEAR */
#define TXM_TMNRZE_SET_gc   (0x08) /* Tx Modulator NRZ Mode Enable - SET */


/* Tx Modulator CRC Length */
#define TXM_TMCRCL_VAL_0x00_gc (0x00<<1) /* CRC 4-bit */
#define TXM_TMCRCL_VAL_0x01_gc (0x01<<1) /* CRC 8-bit */
#define TXM_TMCRCL_VAL_0x02_gc (0x02<<1) /* CRC 16-bit */


/* Tx Modulator CRC Enable */
#define TXM_TMCRCE_CLEAR_gc (0x00) /* Tx Modulator CRC Enable - CLEAR */
#define TXM_TMCRCE_SET_gc   (0x01) /* Tx Modulator CRC Enable - SET */


/* Tx Modulator Master State Machine */
#define TXM_TMFSM_TMMSM_gc(x) ((x<<4) & 0x70)

/* Tx Modulator Sub State Machine */
#define TXM_TMFSM_TMSSM_gc(x) (x & 0x0F)

/* Tx Modulator Transmission Complete Status Flag */
#define TXM_TMTCF_CLEAR_gc (0x00) /* Tx Modulator Transmission Complete Status Flag - CLEAR */
#define TXM_TMTCF_SET_gc   (0x01) /* Tx Modulator Transmission Complete Status Flag - SET */


/* Tx Modulator Stop Sequence Hold Mode */
#define TXM_TMSSH_CLEAR_gc (0x00) /* Tx Modulator Stop Sequence Hold Mode - CLEAR */
#define TXM_TMSSH_SET_gc   (0x80) /* Tx Modulator Stop Sequence Hold Mode - SET */


/* Tx Modulator Stop Sequence Length */
#define TXM_TMSSC_TMSSL_gc(x) ((x<<4) & 0x70)

/* Tx Modulator Stop Sequence Pattern */
#define TXM_TMSSC_TMSSP_gc(x) (x & 0x0F)

/*
--------------------------------------------------------------------------------
VMON - 
--------------------------------------------------------------------------------
*/


/* Voltage Monitor Flag */
#define VMON_VMF_CLEAR_gc (0x00) /* Voltage Monitor Flag - CLEAR */
#define VMON_VMF_SET_gc   (0x20) /* Voltage Monitor Flag - SET */


/* Voltage Monitor Interrupt Mask */
#define VMON_VMIM_CLEAR_gc (0x00) /* Voltage Monitor Interrupt Mask - CLEAR */
#define VMON_VMIM_SET_gc   (0x10) /* Voltage Monitor Interrupt Mask - SET */


/* Voltage Monitor Level Select */
#define VMON_VMLS_VAL_0x00_gc (0x00) /* disable */
#define VMON_VMLS_VAL_0x01_gc (0x01) /* 2.0V */
#define VMON_VMLS_VAL_0x02_gc (0x02) /* 2.1V */
#define VMON_VMLS_VAL_0x03_gc (0x03) /* 2.2V */
#define VMON_VMLS_VAL_0x04_gc (0x04) /* 2.3V */
#define VMON_VMLS_VAL_0x05_gc (0x05) /* 2.4V */
#define VMON_VMLS_VAL_0x06_gc (0x06) /* 2.5V */
#define VMON_VMLS_VAL_0x07_gc (0x07) /* 2.6V */
#define VMON_VMLS_VAL_0x08_gc (0x08) /* 2.7V */
#define VMON_VMLS_VAL_0x09_gc (0x09) /* 2.8V */
#define VMON_VMLS_VAL_0x0A_gc (0x0A) /* 2.9V */
#define VMON_VMLS_VAL_0x0B_gc (0x0B) /* 3.0V */
#define VMON_VMLS_VAL_0x0C_gc (0x0C) /* 3.1V */
#define VMON_VMLS_VAL_0x0D_gc (0x0D) /* 3.2V */
#define VMON_VMLS_VAL_0x0E_gc (0x0E) /* 3.3V */
#define VMON_VMLS_VAL_0x0F_gc (0x0F) /* 3.4V */

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


/* CALIB -  (0x00) */
#define CALIB_BASE       _SFR_MEM8 (0x00)  /* CALIB Base Address */
#define CALIB_XFUSE      _SFR_MEM8 (0xCB)  /* XROW Fuse */
#define CALIB_SRCCAL     _SFR_MEM8 (0xCC)  /* Slow RC Oscillator Calibration */
#define CALIB_FRCCAL     _SFR_MEM8 (0xCD)  /* Fast RC Oscillator Calibration */
#define CALIB_SUPCA1     _SFR_MEM8 (0xD2)  /* Supply Calibration 1 */
#define CALIB_SUPCA2     _SFR_MEM8 (0xD3)  /* Supply Calibration 2 */
#define CALIB_SUPCA3     _SFR_MEM8 (0xD4)  /* Supply Calibration 3 */
#define CALIB_SUPCA4     _SFR_MEM8 (0xD5)  /* Supply Calibration 4 */
#define CALIB_CALRDY     _SFR_MEM8 (0xDA)  /* Calibration Ready Signature */

/* CHFLT -  (0x00) */
#define CHFLT_BASE       _SFR_MEM8 (0x00)  /* CHFLT Base Address */
#define CHFLT_CHCR       _SFR_MEM8 (0xAF)  /* Channel Filter Configuration Register */
#define CHFLT_CHDN       _SFR_MEM8 (0xB0)  /* Channel Filter Down Sampling Register */

/* CLK -  (0x00) */
#define CLK_BASE         _SFR_MEM8 (0x00)  /* CLK Base Address */
#define CLK_PRR0         _SFR_MEM8 (0x21)  /* Power Reduction Register 0 */
#define CLK_PRR1         _SFR_MEM8 (0x22)  /* Power Reduction Register 1 */
#define CLK_PRR2         _SFR_MEM8 (0x23)  /* Power Reduction Register 2 */
#define CLK_SMCR         _SFR_MEM8 (0x59)  /* Sleep Mode Control Register */
#define CLK_CMCR         _SFR_MEM8 (0x5A)  /* Clock Management Control Register */
#define CLK_CMIMR        _SFR_MEM8 (0x5B)  /* Clock Management Interrupt Mask Register */
#define CLK_CLPR         _SFR_MEM8 (0x5C)  /* Clock Prescaler */
#define CLK_CLKOD        _SFR_MEM8 (0xC9)  /* Clock Output Divider */
#define CLK_CLKOCR       _SFR_MEM8 (0xCA)  /* Clock output control Register */
#define CLK_CMSR         _SFR_MEM8 (0xCE)  /* Clock Management Status Register */
#define CLK_CMOCR        _SFR_MEM8 (0xCF)  /* Clock Management Override Control Register */

/* CPU -  (0x00) */
#define CPU_BASE         _SFR_MEM8 (0x00)  /* CPU Base Address */
#define CPU_MCUCR        _SFR_MEM8 (0x2E)  /* MCU Control Register */
#define CPU_MCUSR        _SFR_MEM8 (0x4B)  /* MCU Status Register */
#define CPU_DWDR         _SFR_MEM8 (0x51)  /* Debug Wire Data Register */
#define CPU_SPMCSR       _SFR_MEM8 (0x57)  /* Store Program Memory Control and Status Register */
#define CPU_SP           _SFR_MEM16(0x5D)  /* Stack Pointer */
#define CPU_SPL          _SFR_MEM8 (0x5D)  /* Stack Pointer LOW BYTE */
#define CPU_SPH          _SFR_MEM8 (0x5E)  /* Stack Pointer HIGH BYTE */
#define CPU_SREG         _SFR_MEM8 (0x5F)  /* Status Register */

/* CRC -  (0x00) */
#define CRC_BASE         _SFR_MEM8 (0x00)  /* CRC Base Address */
#define CRC_CRCDIR       _SFR_MEM8 (0x49)  /* CRC Data Input Register */
#define CRC_CRCCR        _SFR_MEM8 (0x154) /* CRC Control Register */
#define CRC_CRCDOR       _SFR_MEM8 (0x155) /* CRC Data Output Register */

/* DEMOD -  (0x00) */
#define DEMOD_BASE       _SFR_MEM8 (0x00)  /* DEMOD Base Address */
#define DEMOD_SYCB       _SFR_MEM8 (0x9D)  /* Symbol Check Configuration Path B */
#define DEMOD_SYCA       _SFR_MEM8 (0x9E)  /* Symbol Check Configuration Path A */
#define DEMOD_RXFOB      _SFR_MEM8 (0x9F)  /* Received Frequency Offset vs Intermediate Frequency Path B */
#define DEMOD_RXFOA      _SFR_MEM8 (0xA0)  /* Received Frequency Offset vs Intermediate Frequency Path A */
#define DEMOD_DMPATB     _SFR_MEM8 (0xA1)  /* Demodulator Signal Check Pattern Path B */
#define DEMOD_DMPATA     _SFR_MEM8 (0xA2)  /* Demodulator Signal Check Pattern Path A */
#define DEMOD_DMPC       _SFR_MEM8 (0xA3)  /* Demodulator Pattern Check Control */
#define DEMOD_DMPCB      _SFR_MEM8 (0xA4)  /* Demodulator Pattern Check Control Path B */
#define DEMOD_DMPCA      _SFR_MEM8 (0xA5)  /* Demodulator Pattern Check Control Path A */
#define DEMOD_DMSRB      _SFR_MEM8 (0xA6)  /* Demodulator Symbol Rate Path B */
#define DEMOD_DMSRA      _SFR_MEM8 (0xA7)  /* Demodulator Symbol Rate Path A */
#define DEMOD_DMMB       _SFR_MEM8 (0xA8)  /* Demodulator Mode Path B */
#define DEMOD_DMMA       _SFR_MEM8 (0xA9)  /* Demodulator Mode Path A */
#define DEMOD_DMCDB      _SFR_MEM8 (0xAA)  /* Demodulator Carrier Detect Path B */
#define DEMOD_DMCDA      _SFR_MEM8 (0xAB)  /* Demodulator Carrier Detect Path A */
#define DEMOD_DMCRB      _SFR_MEM8 (0xAC)  /* Demodulator Control Path B */
#define DEMOD_DMCRA      _SFR_MEM8 (0xAD)  /* Demodulator Control Path A */
#define DEMOD_DMDN       _SFR_MEM8 (0xAE)  /* Demodulator Down Sampling */

/* DFIFO -  (0x00) */
#define DFIFO_BASE       _SFR_MEM8 (0x00)  /* DFIFO Base Address */
#define DFIFO_DFS        _SFR_MEM8 (0xDF)  /* Data FIFO Status */
#define DFIFO_DFTL       _SFR_MEM16(0xE0)  /* Data FIFO Telegram Length */
#define DFIFO_DFTLL      _SFR_MEM8 (0xE0)  /* Data FIFO Telegram Length LOW BYTE */
#define DFIFO_DFTLH      _SFR_MEM8 (0xE1)  /* Data FIFO Telegram Length HIGH BYTE */
#define DFIFO_DFL        _SFR_MEM8 (0xE2)  /* Data FIFO Fill Level */
#define DFIFO_DFWP       _SFR_MEM8 (0xE3)  /* Data FIFO Write Pointer */
#define DFIFO_DFRP       _SFR_MEM8 (0xE4)  /* Data FIFO Read Pointer */
#define DFIFO_DFD        _SFR_MEM8 (0xE5)  /* Data FIFO Data */
#define DFIFO_DFI        _SFR_MEM8 (0xE6)  /* Data FIFO Interrupt Mask */
#define DFIFO_DFC        _SFR_MEM8 (0xE7)  /* Data FIFO Configuration */

/* EEPROM -  (0x00) */
#define EEPROM_BASE      _SFR_MEM8 (0x00)  /* EEPROM Base Address */
#define EEPROM_EECR      _SFR_MEM8 (0x3F)  /* EEPROM Control Register */
#define EEPROM_EEDR      _SFR_MEM8 (0x40)  /* EEPROM Data Register */
#define EEPROM_EEAR      _SFR_MEM16(0x41)  /* EEPROM Address Register */
#define EEPROM_EEARL     _SFR_MEM8 (0x41)  /* EEPROM Address Register LOW BYTE */
#define EEPROM_EEARH     _SFR_MEM8 (0x42)  /* EEPROM Address Register HIGH BYTE */
#define EEPROM_EEPR      _SFR_MEM8 (0x43)  /* EEPROM Protect Register */
#define EEPROM_EECR2     _SFR_MEM8 (0x168) /* EEPROM Control Register 2 */
#define EEPROM_PGMST     _SFR_MEM8 (0x169) /* Program Memory Status Register */
#define EEPROM_EEST      _SFR_MEM8 (0x16A) /* EEPROM Status Register */

/* FE -  (0x00) */
#define FE_BASE          _SFR_MEM8 (0x00)  /* FE Base Address */
#define FE_FESR          _SFR_MEM8 (0x100) /* RF Front End Status Register */
#define FE_FEEN1         _SFR_MEM8 (0x101) /* RF Front End Enable 1 */
#define FE_FEEN2         _SFR_MEM8 (0x102) /* RF Front End Enable 2 */
#define FE_FELNA         _SFR_MEM8 (0x103) /* RF Front End LNA Bias */
#define FE_FEAS          _SFR_MEM8 (0x104) /* RF Front End Antenna Switch */
#define FE_FEPAC         _SFR_MEM8 (0x105) /* RF Front End Power Amplifier Control */
#define FE_FEVCT         _SFR_MEM8 (0x106) /* RF Front End VCO Tuning */
#define FE_FEBT          _SFR_MEM8 (0x107) /* RF Front End RC Tuning */
#define FE_FEMS          _SFR_MEM8 (0x108) /* RF Front End Main and Swallow Counter */
#define FE_FETN4         _SFR_MEM8 (0x109) /* RF Front End RC Tuning 4bit Register */
#define FE_FECR          _SFR_MEM8 (0x10A) /* RF Front End Control Register */
#define FE_FEVCO         _SFR_MEM8 (0x10B) /* RF Front End VCO and PLL Control */
#define FE_FEBIA         _SFR_MEM8 (0x10C) /* RF Front End Amplifier Bias */
#define FE_SPARE1        _SFR_MEM8 (0x10D) /* RF Front End Spare Register 1 */

/* FREQS -  (0x00) */
#define FREQS_BASE       _SFR_MEM8 (0x00)  /* FREQS Base Address */
#define FREQS_FSCR       _SFR_MEM8 (0x2B)  /* Frequency Synthesizer Control Register */
#define FREQS_FSEN       _SFR_MEM8 (0x60)  /* Frequency Synthesizer Enable */
#define FREQS_FSFCR      _SFR_MEM8 (0x61)  /* Frequency Synthesizer Filter Control Register */
#define FREQS_GACDIV     _SFR_MEM16(0x62)  /* Gauss Clock Divider */
#define FREQS_GACDIVL    _SFR_MEM8 (0x62)  /* Gauss Clock Divider LOW BYTE */
#define FREQS_GACDIVH    _SFR_MEM8 (0x63)  /* Gauss Clock Divider HIGH BYTE */
#define FREQS_FFREQ1L    _SFR_MEM8 (0x64)  /* Fractional Frequency 1 Low Byte */
#define FREQS_FFREQ1M    _SFR_MEM8 (0x65)  /* Fractional Frequency 1 Middle Byte */
#define FREQS_FFREQ1H    _SFR_MEM8 (0x66)  /* Fractional Frequency 1 High Byte */
#define FREQS_FFREQ2L    _SFR_MEM8 (0x67)  /* Fractional Frequency 2 Low Byte */
#define FREQS_FFREQ2M    _SFR_MEM8 (0x68)  /* Fractional Frequency 2 Middle Byte */
#define FREQS_FFREQ2H    _SFR_MEM8 (0x69)  /* Fractional Frequency 2 High Byte */

/* FRSYNC -  (0x00) */
#define FRSYNC_BASE      _SFR_MEM8 (0x00)  /* FRSYNC Base Address */
#define FRSYNC_SFIDCB    _SFR_MEM8 (0xB1)  /* Start Frame ID Configuration Path B */
#define FRSYNC_SFIDLB    _SFR_MEM8 (0xB2)  /* Start Frame ID Length Path B */
#define FRSYNC_WUPTB     _SFR_MEM8 (0xB3)  /* Wake-Up Pattern Threshold Path B */
#define FRSYNC_WUPLB     _SFR_MEM8 (0xB4)  /* Wake-Up Pattern Length Path B */
#define FRSYNC_SFID1B    _SFR_MEM8 (0xB5)  /* Start Frame ID Byte 1 Path B */
#define FRSYNC_SFID2B    _SFR_MEM8 (0xB6)  /* Start Frame ID Byte 2 Path B */
#define FRSYNC_SFID3B    _SFR_MEM8 (0xB7)  /* Start Frame ID Byte 3 Path B */
#define FRSYNC_SFID4B    _SFR_MEM8 (0xB8)  /* Start Frame ID Byte 4 Path B */
#define FRSYNC_WUP1B     _SFR_MEM8 (0xB9)  /* Wake-Up Pattern Byte 1 Path B */
#define FRSYNC_WUP2B     _SFR_MEM8 (0xBA)  /* Wake-Up Pattern Byte 2 Path B */
#define FRSYNC_WUP3B     _SFR_MEM8 (0xBB)  /* Wake-Up Pattern Byte 3 Path B */
#define FRSYNC_WUP4B     _SFR_MEM8 (0xBC)  /* Wake-Up Pattern Byte 4 Path B */
#define FRSYNC_SFIDCA    _SFR_MEM8 (0xBD)  /* Start Frame ID Configuration Path A */
#define FRSYNC_SFIDLA    _SFR_MEM8 (0xBE)  /* Start Frame ID Length Path A */
#define FRSYNC_WUPTA     _SFR_MEM8 (0xBF)  /* Wake-Up Pattern Threshold Path A */
#define FRSYNC_WUPLA     _SFR_MEM8 (0xC0)  /* Wake-Up Pattern Length Path A */
#define FRSYNC_SFID1A    _SFR_MEM8 (0xC1)  /* Start Frame ID Byte 1 Path A */
#define FRSYNC_SFID2A    _SFR_MEM8 (0xC2)  /* Start Frame ID Byte 2 Path A */
#define FRSYNC_SFID3A    _SFR_MEM8 (0xC3)  /* Start Frame ID Byte 3 Path A */
#define FRSYNC_SFID4A    _SFR_MEM8 (0xC4)  /* Start Frame ID Byte 4 Path A */
#define FRSYNC_WUP1A     _SFR_MEM8 (0xC5)  /* Wake-Up Pattern Byte 1 Path A */
#define FRSYNC_WUP2A     _SFR_MEM8 (0xC6)  /* Wake-Up Pattern Byte 2 Path A */
#define FRSYNC_WUP3A     _SFR_MEM8 (0xC7)  /* Wake-Up Pattern Byte 3 Path A */
#define FRSYNC_WUP4A     _SFR_MEM8 (0xC8)  /* Wake-Up Pattern Byte 4 Path A */

/* GPIOREGS -  (0x00) */
#define GPIOREGS_BASE    _SFR_MEM8 (0x00)  /* GPIOREGS Base Address */
#define GPIOREGS_GPIOR0  _SFR_MEM8 (0x3A)  /* General Purpose I/O Register 0 */
#define GPIOREGS_GPIOR3  _SFR_MEM8 (0x3B)  /* General Purpose I/O Register 3 */
#define GPIOREGS_GPIOR4  _SFR_MEM8 (0x3C)  /* General Purpose I/O Register 4 */
#define GPIOREGS_GPIOR5  _SFR_MEM8 (0x3D)  /* General Purpose I/O Register 5 */
#define GPIOREGS_GPIOR6  _SFR_MEM8 (0x3E)  /* General Purpose I/O Register 6 */
#define GPIOREGS_GPIOR1  _SFR_MEM8 (0x44)  /* General Purpose I/O Register 1 */
#define GPIOREGS_GPIOR2  _SFR_MEM8 (0x45)  /* General Purpose I/O Register 2 */

/* IDCHK -  (0x00) */
#define IDCHK_BASE       _SFR_MEM8 (0x00)  /* IDCHK Base Address */
#define IDCHK_IDB0       _SFR_MEM8 (0x156) /* ID Check Byte 0 */
#define IDCHK_IDB1       _SFR_MEM8 (0x157) /* ID Check Byte 1 */
#define IDCHK_IDB2       _SFR_MEM8 (0x158) /* ID Check Byte 2 */
#define IDCHK_IDB3       _SFR_MEM8 (0x159) /* ID Check Byte 3 */
#define IDCHK_IDC        _SFR_MEM8 (0x15A) /* ID Check Configuration */
#define IDCHK_IDS        _SFR_MEM8 (0x15B) /* ID Check Status */

/* INT -  (0x00) */
#define INT_BASE         _SFR_MEM8 (0x00)  /* INT Base Address */
#define INT_PCIFR        _SFR_MEM8 (0x2F)  /* Pin Change Interrupt Flag Register */
#define INT_PCICR        _SFR_MEM8 (0x46)  /* Pin Change Interrupt Control Register */
#define INT_EIMSK        _SFR_MEM8 (0x47)  /* External Interrupt Mask */
#define INT_EIFR         _SFR_MEM8 (0x48)  /* External Interrupt Flag Register */
#define INT_EICRA        _SFR_MEM8 (0x6B)  /* External Interrupt Control Register A */
#define INT_PCMSK0       _SFR_MEM8 (0x6C)  /* Pin Change Mask Register 0 */
#define INT_PCMSK1       _SFR_MEM8 (0x6D)  /* Pin Change Mask Register 1 */

/* LIN_UART -  (0x00) */
#define LIN_UART_BASE    _SFR_MEM8 (0x00)  /* LIN_UART Base Address */
#define LIN_UART_LINCR   _SFR_MEM8 (0x173) /* LIN/UART Control Register */
#define LIN_UART_LINSIR  _SFR_MEM8 (0x174) /* LIN Status and Interrupt Register */
#define LIN_UART_LINENIR _SFR_MEM8 (0x175) /* LIN/UART Enable Interrupt Register */
#define LIN_UART_LINERR  _SFR_MEM8 (0x176) /* LIN/UART Error Register */
#define LIN_UART_LINBTR  _SFR_MEM8 (0x177) /* LIN/UART Bit Timing Register */
#define LIN_UART_LINBRRL _SFR_MEM8 (0x178) /* LIN/UART Baud Rate Register Low Byte */
#define LIN_UART_LINBRRH _SFR_MEM8 (0x179) /* LIN/UART Baud Rate Register High Byte */
#define LIN_UART_LINDLR  _SFR_MEM8 (0x17A) /* LIN/UART Data Length Register */
#define LIN_UART_LINIDR  _SFR_MEM8 (0x17B) /* LIN/UART Identifier Register */
#define LIN_UART_LINSEL  _SFR_MEM8 (0x17C) /* LIN/UART Data Buffer Selection */
#define LIN_UART_LINDAT  _SFR_MEM8 (0x17D) /* LIN/UART Data Register */

/* OCCOUNT -  (0x00) */
#define OCCOUNT_BASE     _SFR_MEM8 (0x00)  /* OCCOUNT Base Address */
#define OCCOUNT_OCCR     _SFR_MEM8 (0x170) /* Oscillator Calibration Counter Configuration Register */
#define OCCOUNT_OCCNT    _SFR_MEM8 (0x171) /* Oscillator Calibration Counter Value */
#define OCCOUNT_OCGATE   _SFR_MEM8 (0x172) /* Oscillator Calibration Counter Gate */

/* PORTB -  (0x00) */
#define PORTB_BASE       _SFR_MEM8 (0x00)  /* PORTB Base Address */
#define PORTB_PINB       _SFR_MEM8 (0x25)  /* Port B Input Pins */
#define PORTB_DDRB       _SFR_MEM8 (0x26)  /* Port B Data Direction */
#define PORTB_PORTB      _SFR_MEM8 (0x27)  /* Port B Data Register */

/* PORTC -  (0x00) */
#define PORTC_BASE       _SFR_MEM8 (0x00)  /* PORTC Base Address */
#define PORTC_PINC       _SFR_MEM8 (0x28)  /* Port C Input Pins */
#define PORTC_DDRC       _SFR_MEM8 (0x29)  /* Port C Data Direction */
#define PORTC_PORTC      _SFR_MEM8 (0x2A)  /* Port C Data Register */

/* PORTS -  (0x00) */
#define PORTS_BASE       _SFR_MEM8 (0x00)  /* PORTS Base Address */
#define PORTS_DBCR       _SFR_MEM8 (0x161) /* Debounce Control Register */
#define PORTS_DBTC       _SFR_MEM8 (0x162) /* Debounce Timer Compare */
#define PORTS_DBENB      _SFR_MEM8 (0x163) /* Debounce Enable Port B */
#define PORTS_DBENC      _SFR_MEM8 (0x164) /* Debounce Enable Port C */
#define PORTS_DBGSW      _SFR_MEM8 (0x165) /* Debug Support Switch */

/* RSSIB -  (0x00) */
#define RSSIB_BASE       _SFR_MEM8 (0x00)  /* RSSIB Base Address */
#define RSSIB_RSSAV      _SFR_MEM8 (0x15C) /* RSSI Average Value */
#define RSSIB_RSSPK      _SFR_MEM8 (0x15D) /* RSSI Peak Value */
#define RSSIB_RSSL       _SFR_MEM8 (0x15E) /* RSSI Low Threshold */
#define RSSIB_RSSH       _SFR_MEM8 (0x15F) /* RSSI High Threshold */
#define RSSIB_RSSC       _SFR_MEM8 (0x160) /* RSSI Configuration Register */
#define RSSIB_RSHSG      _SFR_MEM8 (0x16B) /* RSSI LNA High Sensitivity Gain */
#define RSSIB_RSIFG      _SFR_MEM8 (0x16C) /* RSSI IF Amplifier Gain */
#define RSSIB_RSLDV      _SFR_MEM8 (0x16D) /* RSSI Low Band Damping Value */
#define RSSIB_RSHDV      _SFR_MEM8 (0x16E) /* RSSI High Band Damping Value */
#define RSSIB_RSCOM      _SFR_MEM8 (0x16F) /* RSSI Compensation Register */

/* RXBUF -  (0x00) */
#define RXBUF_BASE       _SFR_MEM8 (0x00)  /* RXBUF Base Address */
#define RXBUF_RXBC1      _SFR_MEM8 (0x13E) /* Rx Buffer Configuration 1 */
#define RXBUF_RXBC2      _SFR_MEM8 (0x13F) /* Rx Buffer Configuration 2 */
#define RXBUF_RXTLLB     _SFR_MEM8 (0x140) /* Rx Telegram Length Low Byte Path B */
#define RXBUF_RXTLHB     _SFR_MEM8 (0x141) /* Rx Telegram Length High Byte Path B */
#define RXBUF_RXCRLB     _SFR_MEM8 (0x142) /* Rx CRC Result Low Byte Path B */
#define RXBUF_RXCRHB     _SFR_MEM8 (0x143) /* Rx CRC Result High Byte Path B */
#define RXBUF_RXCSBB     _SFR_MEM8 (0x144) /* Rx CRC Skip Bit Number Path B */
#define RXBUF_RXCILB     _SFR_MEM8 (0x145) /* Rx CRC Init Value Low Byte Path B */
#define RXBUF_RXCIHB     _SFR_MEM8 (0x146) /* Rx CRC Init Value High Byte Path B */
#define RXBUF_RXCPLB     _SFR_MEM8 (0x147) /* Rx CRC Polynomial Low Byte Path B */
#define RXBUF_RXCPHB     _SFR_MEM8 (0x148) /* Rx CRC Polynomial High Byte Path B */
#define RXBUF_RXDSB      _SFR_MEM8 (0x149) /* Receive Data Shift Register Path B */
#define RXBUF_RXTLLA     _SFR_MEM8 (0x14A) /* Rx Telegram Length Low Byte Path A */
#define RXBUF_RXTLHA     _SFR_MEM8 (0x14B) /* Rx Telegram Length High Byte Path A */
#define RXBUF_RXCRLA     _SFR_MEM8 (0x14C) /* Rx CRC Result Low Byte Path A */
#define RXBUF_RXCRHA     _SFR_MEM8 (0x14D) /* Rx CRC Result High Byte Path A */
#define RXBUF_RXCSBA     _SFR_MEM8 (0x14E) /* Rx CRC Skip Bit Number Path A */
#define RXBUF_RXCILA     _SFR_MEM8 (0x14F) /* Rx CRC Init Value Low Byte Path A */
#define RXBUF_RXCIHA     _SFR_MEM8 (0x150) /* Rx CRC Init Value High Byte Path A */
#define RXBUF_RXCPLA     _SFR_MEM8 (0x151) /* Rx CRC Polynomial Low Byte Path A */
#define RXBUF_RXCPHA     _SFR_MEM8 (0x152) /* Rx CRC Polynomial High Byte Path A */
#define RXBUF_RXDSA      _SFR_MEM8 (0x153) /* Receive Data Shift Register Path A */

/* RXDSP -  (0x00) */
#define RXDSP_BASE       _SFR_MEM8 (0x00)  /* RXDSP Base Address */
#define RXDSP_RDPR       _SFR_MEM8 (0x24)  /* Rx DSP Power Reduction */
#define RXDSP_RDSIFR     _SFR_MEM8 (0x2D)  /* Rx DSP Status Interrupt Flag Register */
#define RXDSP_RDCR       _SFR_MEM8 (0x52)  /* Rx DSP Control Register */
#define RXDSP_EOTSA      _SFR_MEM8 (0x53)  /* End Of Telegram Status Path A */
#define RXDSP_EOTCA      _SFR_MEM8 (0x54)  /* End Of Telegram Conditions Path A */
#define RXDSP_EOTSB      _SFR_MEM8 (0x55)  /* End Of Telegram Status Path B */
#define RXDSP_EOTCB      _SFR_MEM8 (0x56)  /* End Of Telegram Conditions Path B */
#define RXDSP_SOTSB      _SFR_MEM8 (0x91)  /* Start Of Telegram Status Path B */
#define RXDSP_SOTSA      _SFR_MEM8 (0x92)  /* Start Of Telegram Status Path A */
#define RXDSP_SOTCB      _SFR_MEM8 (0x93)  /* Start Of Telegram Conditions Path B */
#define RXDSP_SOTCA      _SFR_MEM8 (0x94)  /* Start Of Telegram Conditions Path A */
#define RXDSP_TESRB      _SFR_MEM8 (0x95)  /* Telegram Status Register Path B */
#define RXDSP_TESRA      _SFR_MEM8 (0x96)  /* Telegram Status Register Path A */
#define RXDSP_RDSIMR     _SFR_MEM8 (0x98)  /* Rx DSP Status Interrupt Mask Register */
#define RXDSP_RDOCR      _SFR_MEM8 (0x99)  /* Rx DSP Output Control */
#define RXDSP_TEMP       _SFR_MEM16(0x9B)  /* Temperature */
#define RXDSP_TEMPL      _SFR_MEM8 (0x9B)  /* Temperature LOW BYTE */
#define RXDSP_TEMPH      _SFR_MEM8 (0x9C)  /* Temperature HIGH BYTE */

/* SFIFO -  (0x00) */
#define SFIFO_BASE       _SFR_MEM8 (0x00)  /* SFIFO Base Address */
#define SFIFO_SFS        _SFR_MEM8 (0xE8)  /* Support FIFO Status */
#define SFIFO_SFL        _SFR_MEM8 (0xE9)  /* Support FIFO Fill Level */
#define SFIFO_SFWP       _SFR_MEM8 (0xEA)  /* Support FIFO Write Pointer */
#define SFIFO_SFRP       _SFR_MEM8 (0xEB)  /* Support FIFO Read Pointer */
#define SFIFO_SFD        _SFR_MEM8 (0xEC)  /* Support FIFO Data */
#define SFIFO_SFI        _SFR_MEM8 (0xED)  /* Support FIFO Interrupt Mask */
#define SFIFO_SFC        _SFR_MEM8 (0xEE)  /* Support FIFO Configuration */

/* SPI -  (0x00) */
#define SPI_BASE         _SFR_MEM8 (0x00)  /* SPI Base Address */
#define SPI_SPCR         _SFR_MEM8 (0x4C)  /* SPI Control Register */
#define SPI_SPSR         _SFR_MEM8 (0x4D)  /* SPI Status Register */
#define SPI_SPDR         _SFR_MEM8 (0x4E)  /* SPI Data Register */
#define SPI_SFFR         _SFR_MEM8 (0x166) /* SPI FIFO Fill Status Register */
#define SPI_SFIR         _SFR_MEM8 (0x167) /* SPI FIFO Interrupt Register */

/* SSM -  (0x00) */
#define SSM_BASE         _SFR_MEM8 (0x00)  /* SSM Base Address */
#define SSM_SSMCR        _SFR_MEM8 (0xEF)  /* Sequencer State Machine Control Register */
#define SSM_SSMRCR       _SFR_MEM8 (0xF0)  /* Sequencer State Machine Rx Control Register */
#define SSM_SSMFBR       _SFR_MEM8 (0xF1)  /* Sequencer State Machine Filter Bandwidth Register */
#define SSM_SSMRR        _SFR_MEM8 (0xF2)  /* Sequencer State Machine Run Register */
#define SSM_SSMSR        _SFR_MEM8 (0xF3)  /* Sequencer State Machine Status Register */
#define SSM_SSMIFR       _SFR_MEM8 (0xF4)  /* Sequencer State Machine Interrupt Flag Register */
#define SSM_SSMIMR       _SFR_MEM8 (0xF5)  /* Sequencer State Machine Interrupt Mask Register */
#define SSM_MSMSTR       _SFR_MEM8 (0xF6)  /* Master State Machine State Register */
#define SSM_SSMSTR       _SFR_MEM8 (0xF7)  /* Sequencer State Machine State Register */
#define SSM_SSMXSR       _SFR_MEM8 (0xF8)  /* Sequencer State Machine Extended State Register */
#define SSM_MSMCR1       _SFR_MEM8 (0xF9)  /* Master State Machine Control Register 1 */
#define SSM_MSMCR2       _SFR_MEM8 (0xFA)  /* Master State Machine Control Register 2 */
#define SSM_MSMCR3       _SFR_MEM8 (0xFB)  /* Master State Machine Control Register 3 */
#define SSM_MSMCR4       _SFR_MEM8 (0xFC)  /* Master State Machine Control Register 4 */
#define SSM_GTCR         _SFR_MEM8 (0xFD)  /* Get Telegram Control Register */
#define SSM_SOTC1A       _SFR_MEM8 (0x120) /* Start Of Telegram Conditions 1 Path A */
#define SSM_SOTC2A       _SFR_MEM8 (0x121) /* Start Of Telegram Conditions 2 Path A */
#define SSM_SOTC1B       _SFR_MEM8 (0x122) /* Start Of Telegram Conditions 1 Path B */
#define SSM_SOTC2B       _SFR_MEM8 (0x123) /* Start Of Telegram Conditions 2 Path B */
#define SSM_EOTC1A       _SFR_MEM8 (0x124) /* End Of Telegram Conditions 1 Path A */
#define SSM_EOTC2A       _SFR_MEM8 (0x125) /* End Of Telegram Conditions 2 Path A */
#define SSM_EOTC3A       _SFR_MEM8 (0x126) /* End Of Telegram Conditions 3 Path A */
#define SSM_EOTC1B       _SFR_MEM8 (0x127) /* End Of Telegram Conditions 1 Path B */
#define SSM_EOTC2B       _SFR_MEM8 (0x128) /* End Of Telegram Conditions 2 Path B */
#define SSM_EOTC3B       _SFR_MEM8 (0x129) /* End Of Telegram Conditions 3 Path B */
#define SSM_WCOTOA       _SFR_MEM8 (0x12A) /* Wake Check Ok Time-Out Path A */
#define SSM_WCOTOB       _SFR_MEM8 (0x12B) /* Wake Check Ok Time-Out Path B */
#define SSM_SOTTOA       _SFR_MEM8 (0x12C) /* Start Of Telegram Time Out Path A */
#define SSM_SOTTOB       _SFR_MEM8 (0x12D) /* Start Of Telegram Time Out Path B */
#define SSM_SSMFCR       _SFR_MEM8 (0x12E) /* Sequencer State Machine Flow Control Register */

/* SUP -  (0x00) */
#define SUP_BASE         _SFR_MEM8 (0x00)  /* SUP Base Address */
#define SUP_SUPFR        _SFR_MEM8 (0xD0)  /* Supply Flag Register */
#define SUP_SUPCR        _SFR_MEM8 (0xD1)  /* Supply Control Register */
#define SUP_DCCAL1       _SFR_MEM8 (0xD6)  /* DCDC Converter Calibration 1 */
#define SUP_DCCAL2       _SFR_MEM8 (0xD7)  /* DCDC Converter Calibration 2 */
#define SUP_DCCAL3       _SFR_MEM8 (0xD8)  /* DCDC Converter Calibration 3 */
#define SUP_DCTST        _SFR_MEM8 (0xD9)  /* DCDC Converter Test Mode */
#define SUP_RCTUNE4      _SFR_MEM8 (0xDC)  /* Resistor Capacitor 4 Bit Tuning */
#define SUP_DCC1         _SFR_MEM8 (0xDD)  /* DCDC Converter Control 1 */
#define SUP_DCC2         _SFR_MEM8 (0xDE)  /* DCDC Converter Control 2 */

/* TIMER0_WDT -  (0x00) */
#define TIMER0_WDT_BASE  _SFR_MEM8 (0x00)  /* TIMER0_WDT Base Address */
#define TIMER0_WDT_T0CR  _SFR_MEM8 (0x30)  /* Timer0 Control Register */
#define TIMER0_WDT_T0IFR _SFR_MEM8 (0x4F)  /* Timer0 Interrupt Flag Register */
#define TIMER0_WDT_WDTCR _SFR_MEM8 (0x6E)  /* Watchdog Timer0 Control Register */

/* TIMER1 -  (0x00) */
#define TIMER1_BASE      _SFR_MEM8 (0x00)  /* TIMER1 Base Address */
#define TIMER1_T1CR      _SFR_MEM8 (0x31)  /* Timer1 Control Register */
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
#define TIMER3_T3CR      _SFR_MEM8 (0x33)  /* Timer3 Control Register */
#define TIMER3_T3IFR     _SFR_MEM8 (0x37)  /* Timer3 Interrupt Flag Register */
#define TIMER3_T3CNT     _SFR_MEM16(0x77)  /* Timer3 Counter */
#define TIMER3_T3CNTL    _SFR_MEM8 (0x77)  /* Timer3 Counter LOW BYTE */
#define TIMER3_T3CNTH    _SFR_MEM8 (0x78)  /* Timer3 Counter HIGH BYTE */
#define TIMER3_T3COR     _SFR_MEM16(0x79)  /* Timer3 Compare */
#define TIMER3_T3CORL    _SFR_MEM8 (0x79)  /* Timer3 Compare LOW BYTE */
#define TIMER3_T3CORH    _SFR_MEM8 (0x7A)  /* Timer3 Compare HIGH BYTE */
#define TIMER3_T3ICR     _SFR_MEM16(0x7B)  /* Timer3 Input Capture */
#define TIMER3_T3ICRL    _SFR_MEM8 (0x7B)  /* Timer3 Input Capture LOW BYTE */
#define TIMER3_T3ICRH    _SFR_MEM8 (0x7C)  /* Timer3 Input Capture HIGH BYTE */
#define TIMER3_T3MRA     _SFR_MEM8 (0x7D)  /* Timer3 Mode Register A */
#define TIMER3_T3MRB     _SFR_MEM8 (0x7E)  /* Timer3 Mode Register B */
#define TIMER3_T3IMR     _SFR_MEM8 (0x7F)  /* Timer3 Interrupt Mask Register */

/* TIMER4 -  (0x00) */
#define TIMER4_BASE      _SFR_MEM8 (0x00)  /* TIMER4 Base Address */
#define TIMER4_T4CR      _SFR_MEM8 (0x34)  /* Timer4 Control Register */
#define TIMER4_T4IFR     _SFR_MEM8 (0x38)  /* Timer4 Interrupt Flag Register */
#define TIMER4_T4CNT     _SFR_MEM16(0x80)  /* Timer4 Counter */
#define TIMER4_T4CNTL    _SFR_MEM8 (0x80)  /* Timer4 Counter LOW BYTE */
#define TIMER4_T4CNTH    _SFR_MEM8 (0x81)  /* Timer4 Counter HIGH BYTE */
#define TIMER4_T4COR     _SFR_MEM16(0x82)  /* Timer4 Compare */
#define TIMER4_T4CORL    _SFR_MEM8 (0x82)  /* Timer4 Compare LOW BYTE */
#define TIMER4_T4CORH    _SFR_MEM8 (0x83)  /* Timer4 Compare HIGH BYTE */
#define TIMER4_T4ICR     _SFR_MEM16(0x84)  /* Timer4 Input Capture */
#define TIMER4_T4ICRL    _SFR_MEM8 (0x84)  /* Timer4 Input Capture LOW BYTE */
#define TIMER4_T4ICRH    _SFR_MEM8 (0x85)  /* Timer4 Input Capture HIGH BYTE */
#define TIMER4_T4MRA     _SFR_MEM8 (0x86)  /* Timer4 Mode Register A */
#define TIMER4_T4MRB     _SFR_MEM8 (0x87)  /* Timer4 Mode Register B */
#define TIMER4_T4IMR     _SFR_MEM8 (0x88)  /* Timer4 Interrupt Mask Register */

/* TIMER5 -  (0x00) */
#define TIMER5_BASE      _SFR_MEM8 (0x00)  /* TIMER5 Base Address */
#define TIMER5_T5IFR     _SFR_MEM8 (0x39)  /* Timer5 Interrupt Flag Register */
#define TIMER5_T5OCR     _SFR_MEM16(0x8A)  /* Timer5 Output Compare */
#define TIMER5_T5OCRL    _SFR_MEM8 (0x8A)  /* Timer5 Output Compare LOW BYTE */
#define TIMER5_T5OCRH    _SFR_MEM8 (0x8B)  /* Timer5 Output Compare HIGH BYTE */
#define TIMER5_T5CCR     _SFR_MEM8 (0x8C)  /* Timer5 Configuration and Control Register */
#define TIMER5_T5CNT     _SFR_MEM16(0x8D)  /* Timer5 Counter */
#define TIMER5_T5CNTL    _SFR_MEM8 (0x8D)  /* Timer5 Counter LOW BYTE */
#define TIMER5_T5CNTH    _SFR_MEM8 (0x8E)  /* Timer5 Counter HIGH BYTE */
#define TIMER5_T5IMR     _SFR_MEM8 (0x8F)  /* Timer5 Interrupt Mask Register */
#define TIMER5_GTCCR     _SFR_MEM8 (0x90)  /* General Timer/Counter Control Register */

/* TRACE -  (0x00) */
#define TRACE_BASE       _SFR_MEM8 (0x00)  /* TRACE Base Address */
#define TRACE_TRCCR      _SFR_MEM8 (0x17E) /* Trace Unit Control Register */
#define TRACE_TRCDR      _SFR_MEM8 (0x17F) /* Trace Unit Data Register */
#define TRACE_TRCID      _SFR_MEM16(0x180) /* Trace Identifier */
#define TRACE_TRCIDL     _SFR_MEM8 (0x180) /* Trace Identifier LOW BYTE */
#define TRACE_TRCIDH     _SFR_MEM8 (0x181) /* Trace Identifier HIGH BYTE */

/* TXM -  (0x00) */
#define TXM_BASE         _SFR_MEM8 (0x00)  /* TXM Base Address */
#define TXM_TMFSM        _SFR_MEM8 (0x12F) /* Tx Modulator Finite State Machine */
#define TXM_TMCR         _SFR_MEM16(0x130) /* Tx Modulator CRC Result */
#define TXM_TMCRL        _SFR_MEM8 (0x130) /* Tx Modulator CRC Result LOW BYTE */
#define TXM_TMCRH        _SFR_MEM8 (0x131) /* Tx Modulator CRC Result HIGH BYTE */
#define TXM_TMCSB        _SFR_MEM8 (0x132) /* Tx Modulator CRC Skip Bit Number */
#define TXM_TMCI         _SFR_MEM16(0x133) /* Tx Modulator CRC Init Value */
#define TXM_TMCIL        _SFR_MEM8 (0x133) /* Tx Modulator CRC Init Value LOW BYTE */
#define TXM_TMCIH        _SFR_MEM8 (0x134) /* Tx Modulator CRC Init Value HIGH BYTE */
#define TXM_TMCP         _SFR_MEM16(0x135) /* Tx Modulator CRC Polynomial */
#define TXM_TMCPL        _SFR_MEM8 (0x135) /* Tx Modulator CRC Polynomial LOW BYTE */
#define TXM_TMCPH        _SFR_MEM8 (0x136) /* Tx Modulator CRC Polynomial HIGH BYTE */
#define TXM_TMSHR        _SFR_MEM8 (0x137) /* Tx Modulator Shift Register */
#define TXM_TMTL         _SFR_MEM16(0x138) /* Tx Modulator Telegram Length */
#define TXM_TMTLL        _SFR_MEM8 (0x138) /* Tx Modulator Telegram Length LOW BYTE */
#define TXM_TMTLH        _SFR_MEM8 (0x139) /* Tx Modulator Telegram Length HIGH BYTE */
#define TXM_TMSSC        _SFR_MEM8 (0x13A) /* Tx Modulator Stop Sequence Configuration */
#define TXM_TMSR         _SFR_MEM8 (0x13B) /* Tx Modulator Status Register */
#define TXM_TMCR2        _SFR_MEM8 (0x13C) /* Tx Modulator Control Register 2 */
#define TXM_TMCR1        _SFR_MEM8 (0x13D) /* Tx Modulator Control Register 1 */

/* VMON -  (0x00) */
#define VMON_BASE        _SFR_MEM8 (0x00)  /* VMON Base Address */
#define VMON_VMCSR       _SFR_MEM8 (0x4A)  /* Voltage Monitor Control and Status Register */

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
#define None_LINTC_vect_num     (24)                
#define None_LINTC_vect         _VECTOR(24)         /* LIN/UART Transfer Complete Interrupt */
#define None_LINERR_vect_num    (25)                
#define None_LINERR_vect        _VECTOR(25)         /* LIN/UART Error Interrupt */
#define None_SSM_vect_num       (26)                
#define None_SSM_vect           _VECTOR(26)         /* Sequencer State Machine Interrupt */
#define None_DFFLR_vect_num     (27)                
#define None_DFFLR_vect         _VECTOR(27)         /* Data FIFO fill level reached Interrupt */
#define None_DFOUE_vect_num     (28)                
#define None_DFOUE_vect         _VECTOR(28)         /* Data FIFO overflow or underflow error Interrupt */
#define None_SFFLR_vect_num     (29)                
#define None_SFFLR_vect         _VECTOR(29)         /* RSSI/Preamble FIFO fill level reached Interrupt */
#define None_SFOUE_vect_num     (30)                
#define None_SFOUE_vect         _VECTOR(30)         /* RSSI/Preamble FIFO overflow or underflow error Interrupt */
#define None_TMTCF_vect_num     (31)                
#define None_TMTCF_vect         _VECTOR(31)         /* Tx Modulator Telegram Finish Interrupt */
#define None_UHF_WCOA_vect_num  (32)                
#define None_UHF_WCOA_vect      _VECTOR(32)         /* UHF receiver wake up ok on Rx path A */
#define None_UHF_WCOB_vect_num  (33)                
#define None_UHF_WCOB_vect      _VECTOR(33)         /* UHF receiver wake up ok on Rx path B */
#define None_UHF_SOTA_vect_num  (34)                
#define None_UHF_SOTA_vect      _VECTOR(34)         /* UHF receiver start of telegram ok on Rx path A */
#define None_UHF_SOTB_vect_num  (35)                
#define None_UHF_SOTB_vect      _VECTOR(35)         /* UHF receiver start of telegram ok on Rx path B */
#define None_UHF_EOTA_vect_num  (36)                
#define None_UHF_EOTA_vect      _VECTOR(36)         /* UHF receiver end of telegram on Rx path A */
#define None_UHF_EOTB_vect_num  (37)                
#define None_UHF_EOTB_vect      _VECTOR(37)         /* UHF receiver end of telegram on Rx path B */
#define None_UHF_NBITA_vect_num (38)                
#define None_UHF_NBITA_vect     _VECTOR(38)         /* UHF receiver new bit on Rx path A */
#define None_UHF_NBITB_vect_num (39)                
#define None_UHF_NBITB_vect     _VECTOR(39)         /* UHF receiver new bit on Rx path B */
#define None_EXCM_vect_num      (40)                
#define None_EXCM_vect          _VECTOR(40)         /* External input Clock monitoring Interrupt */
#define None_ERDY_vect_num      (41)                
#define None_ERDY_vect          _VECTOR(41)         /* EEPROM Ready Interrupt */
#define None_SPMR_vect_num      (42)                
#define None_SPMR_vect          _VECTOR(42)         /* Store Program Memory Ready */
#define None_IDFULL_vect_num    (43)                
#define None_IDFULL_vect        _VECTOR(43)         /* IDSCAN Full Interrupt */

/* Vector Table Size */
#define _VECTOR_SIZE            (4)                 /* Size of individual vector. */
#define _VECTORS_SIZE           (44 * _VECTOR_SIZE) /* Size of all vectors */
/*
================================================================================
Constants
================================================================================
*/

#define PROGMEM_START   (0x0000)                           
#define PROGMEM_SIZE    (0xD200)                           
#define PROGMEM_END     (PROGMEM_START + PROGMEM_SIZE - 1) 

#define ROM_START       (0x0000)                           
#define ROM_SIZE        (0x8000)                           
#define ROM_PAGE_SIZE   (0x0040)                           
#define ROM_END         (ROM_START + ROM_SIZE - 1)         

#define FLASH_START     (0x8000)                           
#define FLASH_SIZE      (0x5200)                           
#define FLASH_PAGE_SIZE (0x0040)                           
#define FLASH_END       (FLASH_START + FLASH_SIZE - 1)     

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
#define DATAMEM_SIZE        (0x0A00)                               
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
#define IRAM_SIZE           (0x0800)                               
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
#define SIGNATURE_1 (0x94) 
#define SIGNATURE_2 (0x6B) 

#endif /* #ifdef _AVR_ATA5835_H_INCLUDED */
