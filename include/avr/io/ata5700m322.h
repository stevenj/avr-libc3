/******************************************************************************
 *   This file is part of avr-libc3.                                          * 
 *                                                                            * 
 *   Automatically created by devtools/gen-ioheader-atdf.py (V0.91)           * 
 *                                                                            * 
 *   .atpack File: ATA5700M322.atdf                                           * 
 *   .ATDF File:   atdf/ATA5700M322.atdf                                      * 
 *   Version:      2.0.6                                                      * 
 *   Date:         2019-04-16                                                 * 
 *   Device:       ATA5700M322                                                * 
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
#  define _AVR_IOXXX_H_ "ioATA5700M322.h"
#else
#  error "Attempt to include more than one <avr/ioXXX.h> file."
#endif

#ifndef _AVR_ATA5700M322_H_INCLUDED
#  define _AVR_ATA5700M322_H_INCLUDED

/*
================================================================================
Ungrouped common register
================================================================================
*/

#define MCUCR  _SFR_MEM8 (0x 2E) /* MCU control Register */

#define MCUSR  _SFR_MEM8 (0x 4B) /* MCU Status Register */

#define DWDR   _SFR_MEM8 (0x 51) /* Debug Wire Data Register */

#define SPMCSR _SFR_MEM8 (0x 57) /* Store Program Memory Control and Status Register */
#define SMCR   _SFR_MEM8 (0x 58) /* Sleep mode control Register */

#define SP     _SFR_MEM16(0x 5D) /* Stack Pointer */
#define SREG   _SFR_MEM8 (0x 5F) /* Status Register */

#define CMCR   _SFR_MEM8 (0x1E3) /* Clock Management Control Register */
#define CMIMR  _SFR_MEM8 (0x1E4) /* Clock interrupt mask Register */
#define CLPR   _SFR_MEM8 (0x1E5) /* Clock Prescaler Register */


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
AES - 
--------------------------------------------------------------------------------
*/

typedef struct AES_struct
{
    register8_t rsv_0x00[61];  /* RESERVED REGISTER BLOCK */
    register8_t AESCR;         /* AES Control Register */
    register8_t AESSR;         /* AES Status Register */
    register8_t rsv_0x3F[320]; /* RESERVED REGISTER BLOCK */
    register8_t AESDPR;        /* AES Data Pointer Register */
    register8_t AESKR;         /* AES Key Register */
    register8_t AESDR;         /* AES Data Register */
} AES_t;


/* AES Enable */
typedef enum AES_AESE_enum
{
    AES_AESE_CLEAR_gc = (0x00), /* AES Enable - CLEAR */
    AES_AESE_SET_gc   = (0x80), /* AES Enable - SET */
} AES_AESE_t;

/* AES Load Key Memory */
typedef enum AES_AESLKM_enum
{
    AES_AESLKM_CLEAR_gc = (0x00), /* AES Load Key Memory - CLEAR */
    AES_AESLKM_SET_gc   = (0x40), /* AES Load Key Memory - SET */
} AES_AESLKM_t;

/* AES Reset */
typedef enum AES_AESRES_enum
{
    AES_AESRES_CLEAR_gc = (0x00), /* AES Reset - CLEAR */
    AES_AESRES_SET_gc   = (0x20), /* AES Reset - SET */
} AES_AESRES_t;

/* AES State XOR load */
typedef enum AES_AESXOR_enum
{
    AES_AESXOR_CLEAR_gc = (0x00), /* AES State XOR load - CLEAR */
    AES_AESXOR_SET_gc   = (0x10), /* AES State XOR load - SET */
} AES_AESXOR_t;

/* AES Direction */
typedef enum AES_AESD_enum
{
    AES_AESD_CLEAR_gc = (0x00), /* AES Direction - CLEAR */
    AES_AESD_SET_gc   = (0x08), /* AES Direction - SET */
} AES_AESD_t;

/* AES Interrupt Mask */
typedef enum AES_AESIM_enum
{
    AES_AESIM_CLEAR_gc = (0x00), /* AES Interrupt Mask - CLEAR */
    AES_AESIM_SET_gc   = (0x04), /* AES Interrupt Mask - SET */
} AES_AESIM_t;

/* AES Write Data */
typedef enum AES_AESWD_enum
{
    AES_AESWD_CLEAR_gc = (0x00), /* AES Write Data - CLEAR */
    AES_AESWD_SET_gc   = (0x02), /* AES Write Data - SET */
} AES_AESWD_t;

/* AES Write Key */
typedef enum AES_AESWK_enum
{
    AES_AESWK_CLEAR_gc = (0x00), /* AES Write Key - CLEAR */
    AES_AESWK_SET_gc   = (0x01), /* AES Write Key - SET */
} AES_AESWK_t;

/* AES Error Flag */
typedef enum AES_AESERF_enum
{
    AES_AESERF_CLEAR_gc = (0x00), /* AES Error Flag - CLEAR */
    AES_AESERF_SET_gc   = (0x80), /* AES Error Flag - SET */
} AES_AESERF_t;

/* AES Ready Flag */
typedef enum AES_AESRF_enum
{
    AES_AESRF_CLEAR_gc = (0x00), /* AES Ready Flag - CLEAR */
    AES_AESRF_SET_gc   = (0x01), /* AES Ready Flag - SET */
} AES_AESRF_t;

/*
--------------------------------------------------------------------------------
CLK - 
--------------------------------------------------------------------------------
*/

typedef struct CLK_struct
{
    register8_t rsv_0x00[33];  /* RESERVED REGISTER BLOCK */
    register8_t PRR1;          /* Power reduction Register 1 */
    register8_t PRR2;          /* Power reduction register 2 */
    register8_t rsv_0x23[23];  /* RESERVED REGISTER BLOCK */
    register8_t PRR0;          /* Power reduction Register 0 */
    register8_t rsv_0x3B[138]; /* RESERVED REGISTER BLOCK */
    register8_t XFUSE;        
    register8_t MRCCAL;        /* Middle RC oscillator calibration Register */
    register8_t FRCCAL;        /* Fast RC oscillator calibration Register */
    register8_t rsv_0xC8;      /* RESERVED REGISTER */
    register8_t CMSR;          /* Clock management status Register */
    register8_t CMOCR;         /* Clock management override control register */
    register8_t rsv_0xCB[74];  /* RESERVED REGISTER BLOCK */
    register8_t CLKOD;         /* Clock output divider settings Register */
    register8_t CLKOCR;        /* Clock output control Register */
} CLK_t;


/* Clock output driver enable */
typedef enum CLK_CLKOEN_enum
{
    CLK_CLKOEN_CLEAR_gc = (0x00), /* Clock output driver enable - CLEAR */
    CLK_CLKOEN_SET_gc   = (0x04), /* Clock output driver enable - SET */
} CLK_CLKOEN_t;

/* Clock output source */
typedef enum CLK_CLKOS_enum
{
    CLK_CLKOS_VAL_0x00_gc = (0x00), /* clk_src */
    CLK_CLKOS_VAL_0x01_gc = (0x01), /* clk_frc */
    CLK_CLKOS_VAL_0x02_gc = (0x02), /* clk_mrc */
    CLK_CLKOS_VAL_0x03_gc = (0x03), /* clk_xto */
} CLK_CLKOS_t;

/* FRC Active */
typedef enum CLK_FRCACT_enum
{
    CLK_FRCACT_CLEAR_gc = (0x00), /* FRC Active - CLEAR */
    CLK_FRCACT_SET_gc   = (0x04), /* FRC Active - SET */
} CLK_FRCACT_t;

/* MRC Always On */
typedef enum CLK_MRCAO_enum
{
    CLK_MRCAO_CLEAR_gc = (0x00), /* MRC Always On - CLEAR */
    CLK_MRCAO_SET_gc   = (0x02), /* MRC Always On - SET */
} CLK_MRCAO_t;

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

/* Power Reduction Two Wire Interface 1 */
typedef enum CLK_PRTWI1_enum
{
    CLK_PRTWI1_CLEAR_gc = (0x00), /* Power Reduction Two Wire Interface 1 - CLEAR */
    CLK_PRTWI1_SET_gc   = (0x80), /* Power Reduction Two Wire Interface 1 - SET */
} CLK_PRTWI1_t;

/* Power Reduction Crypto Unit */
typedef enum CLK_PRCU_enum
{
    CLK_PRCU_CLEAR_gc = (0x00), /* Power Reduction Crypto Unit - CLEAR */
    CLK_PRCU_SET_gc   = (0x40), /* Power Reduction Crypto Unit - SET */
} CLK_PRCU_t;

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

/* Power Reduction LF RSSI */
typedef enum CLK_PRLFRS_enum
{
    CLK_PRLFRS_CLEAR_gc = (0x00), /* Power Reduction LF RSSI - CLEAR */
    CLK_PRLFRS_SET_gc   = (0x02), /* Power Reduction LF RSSI - SET */
} CLK_PRLFRS_t;

/* Power Reduction Serial Peripheral Interface */
typedef enum CLK_PRSPI_enum
{
    CLK_PRSPI_CLEAR_gc = (0x00), /* Power Reduction Serial Peripheral Interface - CLEAR */
    CLK_PRSPI_SET_gc   = (0x01), /* Power Reduction Serial Peripheral Interface - SET */
} CLK_PRSPI_t;

/* Power Reduction LF Protocol Handler */
typedef enum CLK_PRLFPH_enum
{
    CLK_PRLFPH_CLEAR_gc = (0x00), /* Power Reduction LF Protocol Handler - CLEAR */
    CLK_PRLFPH_SET_gc   = (0x80), /* Power Reduction LF Protocol Handler - SET */
} CLK_PRLFPH_t;

/* Power Reduction LF Transponder */
typedef enum CLK_PRLFTP_enum
{
    CLK_PRLFTP_CLEAR_gc = (0x00), /* Power Reduction LF Transponder - CLEAR */
    CLK_PRLFTP_SET_gc   = (0x40), /* Power Reduction LF Transponder - SET */
} CLK_PRLFTP_t;

/* Power Reduction LF Receiver */
typedef enum CLK_PRLFR_enum
{
    CLK_PRLFR_CLEAR_gc = (0x00), /* Power Reduction LF Receiver - CLEAR */
    CLK_PRLFR_SET_gc   = (0x20), /* Power Reduction LF Receiver - SET */
} CLK_PRLFR_t;

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

/* VX Tri-State Disable */
typedef enum CLK_VXTSDI_enum
{
    CLK_VXTSDI_CLEAR_gc = (0x00), /* VX Tri-State Disable - CLEAR */
    CLK_VXTSDI_SET_gc   = (0x10), /* VX Tri-State Disable - SET */
} CLK_VXTSDI_t;

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

/* Power Reduction TWI2 */
typedef enum CLK_PRTWI2_enum
{
    CLK_PRTWI2_CLEAR_gc = (0x00), /* Power Reduction TWI2 - CLEAR */
    CLK_PRTWI2_SET_gc   = (0x02), /* Power Reduction TWI2 - SET */
} CLK_PRTWI2_t;

/* Power Reduction SPI2 */
typedef enum CLK_PRSPI2_enum
{
    CLK_PRSPI2_CLEAR_gc = (0x00), /* Power Reduction SPI2 - CLEAR */
    CLK_PRSPI2_SET_gc   = (0x01), /* Power Reduction SPI2 - SET */
} CLK_PRSPI2_t;

/*
--------------------------------------------------------------------------------
CPU - 
--------------------------------------------------------------------------------
*/

typedef struct CPU_struct
{
    register8_t rsv_0x00[46];  /* RESERVED REGISTER BLOCK */
    register8_t MCUCR;         /* MCU control Register */
    register8_t rsv_0x2F[28];  /* RESERVED REGISTER BLOCK */
    register8_t MCUSR;         /* MCU Status Register */
    register8_t rsv_0x4C[5];   /* RESERVED REGISTER BLOCK */
    register8_t DWDR;          /* Debug Wire Data Register */
    register8_t rsv_0x52[5];   /* RESERVED REGISTER BLOCK */
    register8_t SPMCSR;        /* Store Program Memory Control and Status Register */
    register8_t SMCR;          /* Sleep mode control Register */
    register8_t rsv_0x59[4];   /* RESERVED REGISTER BLOCK */
    _REGISTER16 (SP);          /* Stack Pointer */
    register8_t rsv_0x5E;      /* RESERVED REGISTER */
    register8_t SREG;          /* Status Register */
    register8_t rsv_0x60[387]; /* RESERVED REGISTER BLOCK */
    register8_t CMCR;          /* Clock Management Control Register */
    register8_t CMIMR;         /* Clock interrupt mask Register */
    register8_t CLPR;          /* Clock Prescaler Register */
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

/* System Clock Prescaler Select */
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

/* Interrupt Vector Select */
typedef enum CPU_IVSEL_enum
{
    CPU_IVSEL_CLEAR_gc = (0x00), /* Interrupt Vector Select - CLEAR */
    CPU_IVSEL_SET_gc   = (0x80), /* Interrupt Vector Select - SET */
} CPU_IVSEL_t;

/* Trace Enable */
typedef enum CPU_TRCEN_enum
{
    CPU_TRCEN_CLEAR_gc = (0x00), /* Trace Enable - CLEAR */
    CPU_TRCEN_SET_gc   = (0x40), /* Trace Enable - SET */
} CPU_TRCEN_t;

/* Trace Change Enable */
typedef enum CPU_TRCCE_enum
{
    CPU_TRCCE_CLEAR_gc = (0x00), /* Trace Change Enable - CLEAR */
    CPU_TRCCE_SET_gc   = (0x20), /* Trace Change Enable - SET */
} CPU_TRCCE_t;

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

/* Interrupt Vector Location */
typedef enum CPU_IVL_enum
{
    CPU_IVL_VAL_0x00_gc = (0x00), /* 0x3600 */
    CPU_IVL_VAL_0x01_gc = (0x01), /* 0x4000 */
    CPU_IVL_VAL_0x02_gc = (0x02), /* 0x7000 */
    CPU_IVL_VAL_0x03_gc = (0x03), /* 0x8000 */
} CPU_IVL_t;

/* Transponder Reset Flag */
typedef enum CPU_TPRF_enum
{
    CPU_TPRF_CLEAR_gc = (0x00), /* Transponder Reset Flag - CLEAR */
    CPU_TPRF_SET_gc   = (0x20), /* Transponder Reset Flag - SET */
} CPU_TPRF_t;

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

/* Sleep Mode Select */
typedef enum CPU_SM_enum
{
    CPU_SM_IDLE_gc   = (0x00<<1), /* Idle */
    CPU_SM_PSAVE_gc  = (0x01<<1), /* Power save */
    CPU_SM_EPSAVE_gc = (0x02<<1), /* Extended power save */
    CPU_SM_PDOWN_gc  = (0x03<<1), /* Power down */
    CPU_SM_EPDOWN_gc = (0x04<<1), /* Extended power down */
    CPU_SM_POFF_gc   = (0x05<<1), /* Power off */
} CPU_SM_t;

/* Sleep Enable */
typedef enum CPU_SE_enum
{
    CPU_SE_CLEAR_gc = (0x00), /* Sleep Enable - CLEAR */
    CPU_SE_SET_gc   = (0x01), /* Sleep Enable - SET */
} CPU_SE_t;

/* SPM Interrupt Enable */
typedef enum CPU_SPMIE_enum
{
    CPU_SPMIE_CLEAR_gc = (0x00), /* SPM Interrupt Enable - CLEAR */
    CPU_SPMIE_SET_gc   = (0x80), /* SPM Interrupt Enable - SET */
} CPU_SPMIE_t;

/* Read-While-Write Section Busy */
typedef enum CPU_RWWSB_enum
{
    CPU_RWWSB_CLEAR_gc = (0x00), /* Read-While-Write Section Busy - CLEAR */
    CPU_RWWSB_SET_gc   = (0x40), /* Read-While-Write Section Busy - SET */
} CPU_RWWSB_t;

/* Fuse Lockbit select */
typedef enum CPU_FLSEL_enum
{
    CPU_FLSEL_VAL_0x00_gc  = (0x00<<3), /* ROM/FLASH */
    CPU_FLSEL_VAL_0x01_gc  = (0x08<<3), /* Lockbits */
    CPU_FLSEL_VAL_0x03_gc  = (0x18<<3), /* Security Fuses */
    CPU_FLSEL_VAL_0x05_gc  = (0x28<<3), /* EEPROM Protection Fuse Low */
    CPU_FLSEL_VALR_0x07_gc = (0x38<<3), /* EEPROM Protection Fuse High */
} CPU_FLSEL_t;

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
    register8_t rsv_0x00[325];  /* RESERVED REGISTER BLOCK */
    register8_t CRCCR;          /* CRC Control Register */
    register8_t CRCDOR;         /* CRC Data Output Register */
    register8_t rsv_0x147[153]; /* RESERVED REGISTER BLOCK */
    register8_t CRCDIR;         /* CRC Data Input Register */
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
    register8_t rsv_0x156[14]; /* RESERVED REGISTER BLOCK */
    register8_t DBEND;         /* DeBounce Enable Port D */
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
    register8_t rsv_0x00[252];  /* RESERVED REGISTER BLOCK */
    _REGISTER16 (TRCID);        /* Trace ID Register */
    register8_t rsv_0xFD[2];    /* RESERVED REGISTER BLOCK */
    register8_t TRCDR;          /* Trace Data Register */
    register8_t rsv_0x100[86];  /* RESERVED REGISTER BLOCK */
    register8_t DBGSW;          /* Debugging Support Switch */
    register8_t rsv_0x157[144]; /* RESERVED REGISTER BLOCK */
    register8_t DBONDR;         /* Downbond Test Register */
} DEBUG_t;


/* Analog Test Pins Enable */
typedef enum DEBUG_ATEST_enum
{
    DEBUG_ATEST_CLEAR_gc = (0x00), /* Analog Test Pins Enable - CLEAR */
    DEBUG_ATEST_SET_gc   = (0x80), /* Analog Test Pins Enable - SET */
} DEBUG_ATEST_t;

/* CPU Busy Flag */
typedef enum DEBUG_CPBF_enum
{
    DEBUG_CPBF_CLEAR_gc = (0x00), /* CPU Busy Flag - CLEAR */
    DEBUG_CPBF_SET_gc   = (0x40), /* CPU Busy Flag - SET */
} DEBUG_CPBF_t;

/* CPU Busy Flag Output Select */
typedef enum DEBUG_CPBFOS_enum
{
    DEBUG_CPBFOS_VAL_0x00_gc = (0x00<<4), /* disabled */
    DEBUG_CPBFOS_VAL_0x01_gc = (0x01<<4), /* PB0 */
    DEBUG_CPBFOS_VAL_0x02_gc = (0x02<<4), /* PB3 */
    DEBUG_CPBFOS_VAL_0x03_gc = (0x03<<4), /* PC1 */
} DEBUG_CPBFOS_t;

/* Debugging Support Group Select */
#define DEBUG_DBGSW_DBGGS_gc(x) (x & 0x0F)

/* Bond Test 6 */
typedef enum DEBUG_BTEST6_enum
{
    DEBUG_BTEST6_CLEAR_gc = (0x00), /* Bond Test 6 - CLEAR */
    DEBUG_BTEST6_SET_gc   = (0x40), /* Bond Test 6 - SET */
} DEBUG_BTEST6_t;

/* Bond Test 5 */
typedef enum DEBUG_BTEST5_enum
{
    DEBUG_BTEST5_CLEAR_gc = (0x00), /* Bond Test 5 - CLEAR */
    DEBUG_BTEST5_SET_gc   = (0x20), /* Bond Test 5 - SET */
} DEBUG_BTEST5_t;

/* Bond Test 4 */
typedef enum DEBUG_BTEST4_enum
{
    DEBUG_BTEST4_CLEAR_gc = (0x00), /* Bond Test 4 - CLEAR */
    DEBUG_BTEST4_SET_gc   = (0x10), /* Bond Test 4 - SET */
} DEBUG_BTEST4_t;

/* Bond AGND LF */
typedef enum DEBUG_AGND_LF_enum
{
    DEBUG_AGND_LF_CLEAR_gc = (0x00), /* Bond AGND LF - CLEAR */
    DEBUG_AGND_LF_SET_gc   = (0x08), /* Bond AGND LF - SET */
} DEBUG_AGND_LF_t;

/* Bond ISO SUBS3 GND */
typedef enum DEBUG_ISO_GND_enum
{
    DEBUG_ISO_GND_CLEAR_gc = (0x00), /* Bond ISO SUBS3 GND - CLEAR */
    DEBUG_ISO_GND_SET_gc   = (0x04), /* Bond ISO SUBS3 GND - SET */
} DEBUG_ISO_GND_t;

/* Bond AGND BB */
typedef enum DEBUG_AGND_BB_enum
{
    DEBUG_AGND_BB_CLEAR_gc = (0x00), /* Bond AGND BB - CLEAR */
    DEBUG_AGND_BB_SET_gc   = (0x02), /* Bond AGND BB - SET */
} DEBUG_AGND_BB_t;

/* Bond BBESD */
typedef enum DEBUG_BBESD_enum
{
    DEBUG_BBESD_CLEAR_gc = (0x00), /* Bond BBESD - CLEAR */
    DEBUG_BBESD_SET_gc   = (0x01), /* Bond BBESD - SET */
} DEBUG_BBESD_t;

/*
--------------------------------------------------------------------------------
DFIFO - 
--------------------------------------------------------------------------------
*/

typedef struct DFIFO_struct
{
    register8_t rsv_0x00[210]; /* RESERVED REGISTER BLOCK */
    register8_t DFS;           /* Data FIFO Status Register */
    register8_t rsv_0xD3[2];   /* RESERVED REGISTER BLOCK */
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
    register8_t rsv_0x00[54];  /* RESERVED REGISTER BLOCK */
    register8_t EECR2;         /* EEPROM Control Register 2 */
    register8_t rsv_0x37[8];   /* RESERVED REGISTER BLOCK */
    register8_t EECR;          /* EEPROM Control Register */
    register8_t EEDR;          /* EEPROM Data Register */
    _REGISTER16 (EEAR);        /* EEPROM Address Register */
    register8_t rsv_0x42;      /* RESERVED REGISTER */
    register8_t EEPR;          /* EEPROM Protection Register */
    register8_t rsv_0x44[247]; /* RESERVED REGISTER BLOCK */
    register8_t EEPR1;         /* EEPROM Protection Register 1 */
    register8_t EEPR2;         /* EEPROM Protection Register 2 */
    register8_t EEPR3;         /* EEPROM Protection Register 3 */
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

/* EEPROM Error Correction Code Flag */
typedef enum EEPROM_E2CF_enum
{
    EEPROM_E2CF_CLEAR_gc = (0x00), /* EEPROM Error Correction Code Flag - CLEAR */
    EEPROM_E2CF_SET_gc   = (0x80), /* EEPROM Error Correction Code Flag - SET */
} EEPROM_E2CF_t;

/* EEPROM error Fault Flag bit */
typedef enum EEPROM_E2FF_enum
{
    EEPROM_E2FF_CLEAR_gc = (0x00), /* EEPROM error Fault Flag bit - CLEAR */
    EEPROM_E2FF_SET_gc   = (0x40), /* EEPROM error Fault Flag bit - SET */
} EEPROM_E2FF_t;

/* EEPROM Access Violation Flag */
typedef enum EEPROM_E2AVF_enum
{
    EEPROM_E2AVF_CLEAR_gc = (0x00), /* EEPROM Access Violation Flag - CLEAR */
    EEPROM_E2AVF_SET_gc   = (0x20), /* EEPROM Access Violation Flag - SET */
} EEPROM_E2AVF_t;

/* EEPROM Error Code Correction Interrupt Mask */
typedef enum EEPROM_E2CIM_enum
{
    EEPROM_E2CIM_CLEAR_gc = (0x00), /* EEPROM Error Code Correction Interrupt Mask - CLEAR */
    EEPROM_E2CIM_SET_gc   = (0x02), /* EEPROM Error Code Correction Interrupt Mask - SET */
} EEPROM_E2CIM_t;

/* EEPROM Burst Read Enable */
typedef enum EEPROM_EEBRE_enum
{
    EEPROM_EEBRE_CLEAR_gc = (0x00), /* EEPROM Burst Read Enable - CLEAR */
    EEPROM_EEBRE_SET_gc   = (0x01), /* EEPROM Burst Read Enable - SET */
} EEPROM_EEBRE_t;

/* EEPROM Protection Section 7 Read Disable */
typedef enum EEPROM_EEPS7RD_enum
{
    EEPROM_EEPS7RD_CLEAR_gc = (0x00), /* EEPROM Protection Section 7 Read Disable - CLEAR */
    EEPROM_EEPS7RD_SET_gc   = (0x80), /* EEPROM Protection Section 7 Read Disable - SET */
} EEPROM_EEPS7RD_t;

/* EEPROM Protection Section 7 Write Disable */
typedef enum EEPROM_EEPS7WD_enum
{
    EEPROM_EEPS7WD_CLEAR_gc = (0x00), /* EEPROM Protection Section 7 Write Disable - CLEAR */
    EEPROM_EEPS7WD_SET_gc   = (0x40), /* EEPROM Protection Section 7 Write Disable - SET */
} EEPROM_EEPS7WD_t;

/* EEPROM Protection Section 6 Read Disable */
typedef enum EEPROM_EEPS6RD_enum
{
    EEPROM_EEPS6RD_CLEAR_gc = (0x00), /* EEPROM Protection Section 6 Read Disable - CLEAR */
    EEPROM_EEPS6RD_SET_gc   = (0x20), /* EEPROM Protection Section 6 Read Disable - SET */
} EEPROM_EEPS6RD_t;

/* EEPROM Protection Section 6 Write Disable */
typedef enum EEPROM_EEPS6WD_enum
{
    EEPROM_EEPS6WD_CLEAR_gc = (0x00), /* EEPROM Protection Section 6 Write Disable - CLEAR */
    EEPROM_EEPS6WD_SET_gc   = (0x10), /* EEPROM Protection Section 6 Write Disable - SET */
} EEPROM_EEPS6WD_t;

/* EEPROM Protection Section 5 Read Disable */
typedef enum EEPROM_EEPS5RD_enum
{
    EEPROM_EEPS5RD_CLEAR_gc = (0x00), /* EEPROM Protection Section 5 Read Disable - CLEAR */
    EEPROM_EEPS5RD_SET_gc   = (0x08), /* EEPROM Protection Section 5 Read Disable - SET */
} EEPROM_EEPS5RD_t;

/* EEPROM Protection Section 5 Write Disable */
typedef enum EEPROM_EEPS5WD_enum
{
    EEPROM_EEPS5WD_CLEAR_gc = (0x00), /* EEPROM Protection Section 5 Write Disable - CLEAR */
    EEPROM_EEPS5WD_SET_gc   = (0x04), /* EEPROM Protection Section 5 Write Disable - SET */
} EEPROM_EEPS5WD_t;

/* EEPROM Protection Section 4 Read Disable */
typedef enum EEPROM_EEPS4RD_enum
{
    EEPROM_EEPS4RD_CLEAR_gc = (0x00), /* EEPROM Protection Section 4 Read Disable - CLEAR */
    EEPROM_EEPS4RD_SET_gc   = (0x02), /* EEPROM Protection Section 4 Read Disable - SET */
} EEPROM_EEPS4RD_t;

/* EEPROM Protection Section 4 Write Disable */
typedef enum EEPROM_EEPS4WD_enum
{
    EEPROM_EEPS4WD_CLEAR_gc = (0x00), /* EEPROM Protection Section 4 Write Disable - CLEAR */
    EEPROM_EEPS4WD_SET_gc   = (0x01), /* EEPROM Protection Section 4 Write Disable - SET */
} EEPROM_EEPS4WD_t;

/* EEPROM Protection Section 11 Read Disable */
typedef enum EEPROM_EEPS11RD_enum
{
    EEPROM_EEPS11RD_CLEAR_gc = (0x00), /* EEPROM Protection Section 11 Read Disable - CLEAR */
    EEPROM_EEPS11RD_SET_gc   = (0x80), /* EEPROM Protection Section 11 Read Disable - SET */
} EEPROM_EEPS11RD_t;

/* EEPROM Protection Section 11 Write Disable */
typedef enum EEPROM_EEPS11WD_enum
{
    EEPROM_EEPS11WD_CLEAR_gc = (0x00), /* EEPROM Protection Section 11 Write Disable - CLEAR */
    EEPROM_EEPS11WD_SET_gc   = (0x40), /* EEPROM Protection Section 11 Write Disable - SET */
} EEPROM_EEPS11WD_t;

/* EEPROM Protection Section 10 Read Disable */
typedef enum EEPROM_EEPS10RD_enum
{
    EEPROM_EEPS10RD_CLEAR_gc = (0x00), /* EEPROM Protection Section 10 Read Disable - CLEAR */
    EEPROM_EEPS10RD_SET_gc   = (0x20), /* EEPROM Protection Section 10 Read Disable - SET */
} EEPROM_EEPS10RD_t;

/* EEPROM Protection Section 10 Write Disableble */
typedef enum EEPROM_EEPS10WD_enum
{
    EEPROM_EEPS10WD_CLEAR_gc = (0x00), /* EEPROM Protection Section 10 Write Disableble - CLEAR */
    EEPROM_EEPS10WD_SET_gc   = (0x10), /* EEPROM Protection Section 10 Write Disableble - SET */
} EEPROM_EEPS10WD_t;

/* EEPROM Protection Section 9 Read Disable */
typedef enum EEPROM_EEPS9RD_enum
{
    EEPROM_EEPS9RD_CLEAR_gc = (0x00), /* EEPROM Protection Section 9 Read Disable - CLEAR */
    EEPROM_EEPS9RD_SET_gc   = (0x08), /* EEPROM Protection Section 9 Read Disable - SET */
} EEPROM_EEPS9RD_t;

/* EEPROM Protection Section 9 Write Disable */
typedef enum EEPROM_EEPS9WD_enum
{
    EEPROM_EEPS9WD_CLEAR_gc = (0x00), /* EEPROM Protection Section 9 Write Disable - CLEAR */
    EEPROM_EEPS9WD_SET_gc   = (0x04), /* EEPROM Protection Section 9 Write Disable - SET */
} EEPROM_EEPS9WD_t;

/* EEPROM Protection Section 8 Read Disable */
typedef enum EEPROM_EEPS8RD_enum
{
    EEPROM_EEPS8RD_CLEAR_gc = (0x00), /* EEPROM Protection Section 8 Read Disable - CLEAR */
    EEPROM_EEPS8RD_SET_gc   = (0x02), /* EEPROM Protection Section 8 Read Disable - SET */
} EEPROM_EEPS8RD_t;

/* EEPROM Protection Section 8 Write Disable */
typedef enum EEPROM_EEPS8WD_enum
{
    EEPROM_EEPS8WD_CLEAR_gc = (0x00), /* EEPROM Protection Section 8 Write Disable - CLEAR */
    EEPROM_EEPS8WD_SET_gc   = (0x01), /* EEPROM Protection Section 8 Write Disable - SET */
} EEPROM_EEPS8WD_t;

/* EEPROM Protection Section 12 Read Disable */
typedef enum EEPROM_EEPS12RD_enum
{
    EEPROM_EEPS12RD_CLEAR_gc = (0x00), /* EEPROM Protection Section 12 Read Disable - CLEAR */
    EEPROM_EEPS12RD_SET_gc   = (0x02), /* EEPROM Protection Section 12 Read Disable - SET */
} EEPROM_EEPS12RD_t;

/* EEPROM Protection Section 12 Write Disable */
typedef enum EEPROM_EEPS12WD_enum
{
    EEPROM_EEPS12WD_CLEAR_gc = (0x00), /* EEPROM Protection Section 12 Write Disable - CLEAR */
    EEPROM_EEPS12WD_SET_gc   = (0x01), /* EEPROM Protection Section 12 Write Disable - SET */
} EEPROM_EEPS12WD_t;

/*
--------------------------------------------------------------------------------
GPIOREGS_DVCC - 
--------------------------------------------------------------------------------
*/

typedef struct GPIOREGS_DVCC_struct
{
    register8_t rsv_0x00[32]; /* RESERVED REGISTER BLOCK */
    register8_t GPIOR0;       /* General Purpose I/O Register 0 */
    register8_t rsv_0x21[35]; /* RESERVED REGISTER BLOCK */
    register8_t GPIOR1;       /* General Purpose I/O Register 1 */
    register8_t GPIOR2;       /* General Purpose I/O Register 2 */
} GPIOREGS_DVCC_t;


/*
--------------------------------------------------------------------------------
GPIOREGS_LFVCC - 
--------------------------------------------------------------------------------
*/

typedef struct GPIOREGS_LFVCC_struct
{
    register8_t rsv_0x00[386]; /* RESERVED REGISTER BLOCK */
    register8_t GPIOR3;        /* General Purpose I/O Register 3 */
    register8_t GPIOR4;        /* General Purpose I/O Register 4 */
    register8_t GPIOR5;        /* General Purpose I/O Register 5 */
    register8_t GPIOR6;        /* General Purpose I/O Register 6 */
    register8_t GPIOR7;        /* General Purpose I/O Register 7 */
    register8_t GPIOR8;        /* General Purpose I/O Register 8 */
} GPIOREGS_LFVCC_t;


/*
--------------------------------------------------------------------------------
INT - 
--------------------------------------------------------------------------------
*/

typedef struct INT_struct
{
    register8_t rsv_0x00[70];  /* RESERVED REGISTER BLOCK */
    register8_t PCICR;         /* Pin change Interrupt control Register */
    register8_t EIMSK;         /* External Interrupt Mask Register */
    register8_t EIFR;          /* External Interrupt Flag Register */
    register8_t rsv_0x49[34];  /* RESERVED REGISTER BLOCK */
    register8_t EICRA;         /* External Interrupt control Register */
    register8_t PCMSK0;        /* Pin change Mask Register 0 */
    register8_t PCMSK1;        /* Pin change Mask Register 1 */
    register8_t rsv_0x6E[243]; /* RESERVED REGISTER BLOCK */
    register8_t PCIFR;         /* Pin change Interrupt flag Register */
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

/* Pin Change Enable Mask bit 7 */
typedef enum INT_PCINT7_enum
{
    INT_PCINT7_CLEAR_gc = (0x00), /* Pin Change Enable Mask bit 7 - CLEAR */
    INT_PCINT7_SET_gc   = (0x80), /* Pin Change Enable Mask bit 7 - SET */
} INT_PCINT7_t;

/* Pin Change Enable Mask bit 6 */
typedef enum INT_PCINT6_enum
{
    INT_PCINT6_CLEAR_gc = (0x00), /* Pin Change Enable Mask bit 6 - CLEAR */
    INT_PCINT6_SET_gc   = (0x40), /* Pin Change Enable Mask bit 6 - SET */
} INT_PCINT6_t;

/* Pin Change Enable Mask bit 5 */
typedef enum INT_PCINT5_enum
{
    INT_PCINT5_CLEAR_gc = (0x00), /* Pin Change Enable Mask bit 5 - CLEAR */
    INT_PCINT5_SET_gc   = (0x20), /* Pin Change Enable Mask bit 5 - SET */
} INT_PCINT5_t;

/* Pin Change Enable Mask bit 4 */
typedef enum INT_PCINT4_enum
{
    INT_PCINT4_CLEAR_gc = (0x00), /* Pin Change Enable Mask bit 4 - CLEAR */
    INT_PCINT4_SET_gc   = (0x10), /* Pin Change Enable Mask bit 4 - SET */
} INT_PCINT4_t;

/* Pin Change Enable Mask bit 3 */
typedef enum INT_PCINT3_enum
{
    INT_PCINT3_CLEAR_gc = (0x00), /* Pin Change Enable Mask bit 3 - CLEAR */
    INT_PCINT3_SET_gc   = (0x08), /* Pin Change Enable Mask bit 3 - SET */
} INT_PCINT3_t;

/* Pin Change Enable Mask bit 2 */
typedef enum INT_PCINT2_enum
{
    INT_PCINT2_CLEAR_gc = (0x00), /* Pin Change Enable Mask bit 2 - CLEAR */
    INT_PCINT2_SET_gc   = (0x04), /* Pin Change Enable Mask bit 2 - SET */
} INT_PCINT2_t;

/* Pin Change Enable Mask bit 1 */
typedef enum INT_PCINT1_enum
{
    INT_PCINT1_CLEAR_gc = (0x00), /* Pin Change Enable Mask bit 1 - CLEAR */
    INT_PCINT1_SET_gc   = (0x02), /* Pin Change Enable Mask bit 1 - SET */
} INT_PCINT1_t;

/* Pin Change Enable Mask bit 0 */
typedef enum INT_PCINT0_enum
{
    INT_PCINT0_CLEAR_gc = (0x00), /* Pin Change Enable Mask bit 0 - CLEAR */
    INT_PCINT0_SET_gc   = (0x01), /* Pin Change Enable Mask bit 0 - SET */
} INT_PCINT0_t;

/* Pin Change Enable Mask bit 15 */
typedef enum INT_PCINT15_enum
{
    INT_PCINT15_CLEAR_gc = (0x00), /* Pin Change Enable Mask bit 15 - CLEAR */
    INT_PCINT15_SET_gc   = (0x80), /* Pin Change Enable Mask bit 15 - SET */
} INT_PCINT15_t;

/* Pin Change Enable Mask bit 14 */
typedef enum INT_PCINT14_enum
{
    INT_PCINT14_CLEAR_gc = (0x00), /* Pin Change Enable Mask bit 14 - CLEAR */
    INT_PCINT14_SET_gc   = (0x40), /* Pin Change Enable Mask bit 14 - SET */
} INT_PCINT14_t;

/* Pin Change Enable Mask bit 13 */
typedef enum INT_PCINT13_enum
{
    INT_PCINT13_CLEAR_gc = (0x00), /* Pin Change Enable Mask bit 13 - CLEAR */
    INT_PCINT13_SET_gc   = (0x20), /* Pin Change Enable Mask bit 13 - SET */
} INT_PCINT13_t;

/* Pin Change Enable Mask bit 12 */
typedef enum INT_PCINT12_enum
{
    INT_PCINT12_CLEAR_gc = (0x00), /* Pin Change Enable Mask bit 12 - CLEAR */
    INT_PCINT12_SET_gc   = (0x10), /* Pin Change Enable Mask bit 12 - SET */
} INT_PCINT12_t;

/* Pin Change Enable Mask bit 11 */
typedef enum INT_PCINT11_enum
{
    INT_PCINT11_CLEAR_gc = (0x00), /* Pin Change Enable Mask bit 11 - CLEAR */
    INT_PCINT11_SET_gc   = (0x08), /* Pin Change Enable Mask bit 11 - SET */
} INT_PCINT11_t;

/* Pin Change Enable Mask bit 10 */
typedef enum INT_PCINT10_enum
{
    INT_PCINT10_CLEAR_gc = (0x00), /* Pin Change Enable Mask bit 10 - CLEAR */
    INT_PCINT10_SET_gc   = (0x04), /* Pin Change Enable Mask bit 10 - SET */
} INT_PCINT10_t;

/* Pin Change Enable Mask bit 9 */
typedef enum INT_PCINT9_enum
{
    INT_PCINT9_CLEAR_gc = (0x00), /* Pin Change Enable Mask bit 9 - CLEAR */
    INT_PCINT9_SET_gc   = (0x02), /* Pin Change Enable Mask bit 9 - SET */
} INT_PCINT9_t;

/* Pin Change Enable Mask bit 8 */
typedef enum INT_PCINT8_enum
{
    INT_PCINT8_CLEAR_gc = (0x00), /* Pin Change Enable Mask bit 8 - CLEAR */
    INT_PCINT8_SET_gc   = (0x01), /* Pin Change Enable Mask bit 8 - SET */
} INT_PCINT8_t;

/*
--------------------------------------------------------------------------------
LED - 
--------------------------------------------------------------------------------
*/

typedef struct LED_struct
{
    register8_t rsv_0x00[495]; /* RESERVED REGISTER BLOCK */
    register8_t PDSCR;         /* Pad Driver Strength Control Register */
} LED_t;


/* Analog Testbus Select */
typedef enum LED_ATBSEL_enum
{
    LED_ATBSEL_CLEAR_gc = (0x00), /* Analog Testbus Select - CLEAR */
    LED_ATBSEL_SET_gc   = (0x80), /* Analog Testbus Select - SET */
} LED_ATBSEL_t;

/* Testmode Enable for RSSI Measurement */
typedef enum LED_RSSISEL_enum
{
    LED_RSSISEL_CLEAR_gc = (0x00), /* Testmode Enable for RSSI Measurement - CLEAR */
    LED_RSSISEL_SET_gc   = (0x40), /* Testmode Enable for RSSI Measurement - SET */
} LED_RSSISEL_t;

/* Standby Test Enable */
typedef enum LED_STBTEST_enum
{
    LED_STBTEST_CLEAR_gc = (0x00), /* Standby Test Enable - CLEAR */
    LED_STBTEST_SET_gc   = (0x20), /* Standby Test Enable - SET */
} LED_STBTEST_t;

/* Pad Driver Strength Control */
#define LED_PDSCR_PDSC_gc(x) (x & 0x1F)

/*
--------------------------------------------------------------------------------
LF_FIFO - 
--------------------------------------------------------------------------------
*/

typedef struct LF_FIFO_struct
{
    register8_t rsv_0x00[56];  /* RESERVED REGISTER BLOCK */
    register8_t LDFFL;         /* LF Data FIFO Fill Level Register */
    register8_t LDFD;          /* LF Data FIFO Data Register */
    register8_t rsv_0x3A[15];  /* RESERVED REGISTER BLOCK */
    register8_t LDFCKSW;       /* LF Data FIFO Clock Switch Register */
    register8_t rsv_0x4A[391]; /* RESERVED REGISTER BLOCK */
    register8_t LDFS;          /* LF Data FIFO Status Register */
    register8_t rsv_0x1D2;     /* RESERVED REGISTER */
    register8_t LDFWP;         /* LF Data FIFO Write Pointer */
    register8_t LDFRP;         /* LF Data FIFO Read Pointer */
    register8_t rsv_0x1D5;     /* RESERVED REGISTER */
    register8_t LDFIM;         /* LF Data FIFO Interrupt Mask Register */
    register8_t LDFC;          /* LF Data FIFO Configuration Register */
} LF_FIFO_t;


/* LF Data FIFO MSB alignment bit */
typedef enum LF_FIFO_LDFMSB_enum
{
    LF_FIFO_LDFMSB_CLEAR_gc = (0x00), /* LF Data FIFO MSB alignment bit - CLEAR */
    LF_FIFO_LDFMSB_SET_gc   = (0x40), /* LF Data FIFO MSB alignment bit - SET */
} LF_FIFO_LDFMSB_t;

/* LF Data FIFO Fill-Level Configuration */
#define LF_FIFO_LDFC_LDFFLC_gc(x) (x & 0x3F)

/* LF Data FIFO Synchronous Clock Status */
typedef enum LF_FIFO_LDFSCKS_enum
{
    LF_FIFO_LDFSCKS_CLEAR_gc = (0x00), /* LF Data FIFO Synchronous Clock Status - CLEAR */
    LF_FIFO_LDFSCKS_SET_gc   = (0x02), /* LF Data FIFO Synchronous Clock Status - SET */
} LF_FIFO_LDFSCKS_t;

/* LF Data FIFO Synchronous Clock Switch */
typedef enum LF_FIFO_LDFSCSW_enum
{
    LF_FIFO_LDFSCSW_CLEAR_gc = (0x00), /* LF Data FIFO Synchronous Clock Switch - CLEAR */
    LF_FIFO_LDFSCSW_SET_gc   = (0x01), /* LF Data FIFO Synchronous Clock Switch - SET */
} LF_FIFO_LDFSCSW_t;

/* LF Data FIFO Clear */
typedef enum LF_FIFO_LDFCLR_enum
{
    LF_FIFO_LDFCLR_CLEAR_gc = (0x00), /* LF Data FIFO Clear - CLEAR */
    LF_FIFO_LDFCLR_SET_gc   = (0x80), /* LF Data FIFO Clear - SET */
} LF_FIFO_LDFCLR_t;

/* LF Data Fifo Fill Level */
#define LF_FIFO_LDFFL_LDFFL_gc(x) (x & 0x3F)

/* LF Data FIFO Error Interrupt Mask */
typedef enum LF_FIFO_LDFEIM_enum
{
    LF_FIFO_LDFEIM_CLEAR_gc = (0x00), /* LF Data FIFO Error Interrupt Mask - CLEAR */
    LF_FIFO_LDFEIM_SET_gc   = (0x02), /* LF Data FIFO Error Interrupt Mask - SET */
} LF_FIFO_LDFEIM_t;

/* LF Data FIFO Fill-level Interrupt Mask */
typedef enum LF_FIFO_LDFFLIM_enum
{
    LF_FIFO_LDFFLIM_CLEAR_gc = (0x00), /* LF Data FIFO Fill-level Interrupt Mask - CLEAR */
    LF_FIFO_LDFFLIM_SET_gc   = (0x01), /* LF Data FIFO Fill-level Interrupt Mask - SET */
} LF_FIFO_LDFFLIM_t;

/* LF Data FIFO OverFlow flag */
typedef enum LF_FIFO_LDFOF_enum
{
    LF_FIFO_LDFOF_CLEAR_gc = (0x00), /* LF Data FIFO OverFlow flag - CLEAR */
    LF_FIFO_LDFOF_SET_gc   = (0x04), /* LF Data FIFO OverFlow flag - SET */
} LF_FIFO_LDFOF_t;

/* LF Data FIFO UnderFlow flag */
typedef enum LF_FIFO_LDFUF_enum
{
    LF_FIFO_LDFUF_CLEAR_gc = (0x00), /* LF Data FIFO UnderFlow flag - CLEAR */
    LF_FIFO_LDFUF_SET_gc   = (0x02), /* LF Data FIFO UnderFlow flag - SET */
} LF_FIFO_LDFUF_t;

/* LF Data FIFO Fill-Level Reached flag */
typedef enum LF_FIFO_LDFFLR_enum
{
    LF_FIFO_LDFFLR_CLEAR_gc = (0x00), /* LF Data FIFO Fill-Level Reached flag - CLEAR */
    LF_FIFO_LDFFLR_SET_gc   = (0x01), /* LF Data FIFO Fill-Level Reached flag - SET */
} LF_FIFO_LDFFLR_t;

/*
--------------------------------------------------------------------------------
LF_PROTOCOL_HANDLER - 
--------------------------------------------------------------------------------
*/

typedef struct LF_PROTOCOL_HANDLER_struct
{
    register8_t rsv_0x00[55];  /* RESERVED REGISTER BLOCK */
    register8_t PHTCR;         /* PH Telegram Configuration Register */
    register8_t rsv_0x38[3];   /* RESERVED REGISTER BLOCK */
    register8_t PHFR;          /* Protocol Handler Flag Register */
    register8_t rsv_0x3C[332]; /* RESERVED REGISTER BLOCK */
    register8_t PHBCRR;        /* Protocol Handler Bit Counter Read Register */
    register8_t rsv_0x189[7];  /* RESERVED REGISTER BLOCK */
    _REGISTER32 (PHID0);       /* PH ID0 Register */
    register8_t rsv_0x191[3];  /* RESERVED REGISTER BLOCK */
    register8_t PHID0L;        /* PH Identifier 0 Length Register */
    _REGISTER32 (PHID1);       /* PH ID1 Register */
    register8_t rsv_0x196[3];  /* RESERVED REGISTER BLOCK */
    register8_t PHID1L;        /* PH Identifier 1 Length Register */
    register8_t PHIDFR;        /* Protocol Handler ID Frame Register */
    register8_t rsv_0x19B[9];  /* RESERVED REGISTER BLOCK */
    register8_t PHTBLR;        /* Protocol Handler Telegram Bit Length Register */
    register8_t PHDFR;         /* Protocol Handler Data Frame end Register */
    register8_t rsv_0x1A6[50]; /* RESERVED REGISTER BLOCK */
    register8_t PHIMR;         /* Protocol Handler Interrupt Mask Register */
    register8_t PHCRCR;        /* Protocol Handler CRC Control Register */
    _REGISTER16 (PHCST);       /* PH CRC Start Value Register */
    register8_t rsv_0x1DB;     /* RESERVED REGISTER */
    _REGISTER16 (PHCRP);       /* PH CRC Polynomial Register */
    register8_t rsv_0x1DD;     /* RESERVED REGISTER */
    _REGISTER16 (PHCSR);       /* PH CRC Checksum Register */
} LF_PROTOCOL_HANDLER_t;


/* CRC Enable */
typedef enum LF_PROTOCOL_HANDLER_CRCEN_enum
{
    LF_PROTOCOL_HANDLER_CRCEN_CLEAR_gc = (0x00), /* CRC Enable - CLEAR */
    LF_PROTOCOL_HANDLER_CRCEN_SET_gc   = (0x80), /* CRC Enable - SET */
} LF_PROTOCOL_HANDLER_CRCEN_t;

/* CRC size bit 1 */
typedef enum LF_PROTOCOL_HANDLER_CRCSE1_enum
{
    LF_PROTOCOL_HANDLER_CRCSE1_CLEAR_gc = (0x00), /* CRC size bit 1 - CLEAR */
    LF_PROTOCOL_HANDLER_CRCSE1_SET_gc   = (0x20), /* CRC size bit 1 - SET */
} LF_PROTOCOL_HANDLER_CRCSE1_t;

/* CRC size bit 0 */
typedef enum LF_PROTOCOL_HANDLER_CRCSE0_enum
{
    LF_PROTOCOL_HANDLER_CRCSE0_CLEAR_gc = (0x00), /* CRC size bit 0 - CLEAR */
    LF_PROTOCOL_HANDLER_CRCSE0_SET_gc   = (0x10), /* CRC size bit 0 - SET */
} LF_PROTOCOL_HANDLER_CRCSE0_t;

/* CRC ID Frame */
typedef enum LF_PROTOCOL_HANDLER_CRCFR_enum
{
    LF_PROTOCOL_HANDLER_CRCFR_CLEAR_gc = (0x00), /* CRC ID Frame - CLEAR */
    LF_PROTOCOL_HANDLER_CRCFR_SET_gc   = (0x04), /* CRC ID Frame - SET */
} LF_PROTOCOL_HANDLER_CRCFR_t;

/* Protocol Handler IDentifier 1 Flag */
typedef enum LF_PROTOCOL_HANDLER_PHID1F_enum
{
    LF_PROTOCOL_HANDLER_PHID1F_CLEAR_gc = (0x00), /* Protocol Handler IDentifier 1 Flag - CLEAR */
    LF_PROTOCOL_HANDLER_PHID1F_SET_gc   = (0x20), /* Protocol Handler IDentifier 1 Flag - SET */
} LF_PROTOCOL_HANDLER_PHID1F_t;

/* Protocol Handler IDentifier 0 Flag */
typedef enum LF_PROTOCOL_HANDLER_PHID0F_enum
{
    LF_PROTOCOL_HANDLER_PHID0F_CLEAR_gc = (0x00), /* Protocol Handler IDentifier 0 Flag - CLEAR */
    LF_PROTOCOL_HANDLER_PHID0F_SET_gc   = (0x10), /* Protocol Handler IDentifier 0 Flag - SET */
} LF_PROTOCOL_HANDLER_PHID0F_t;

/* Protocol Handler ID Frame Flag */
typedef enum LF_PROTOCOL_HANDLER_PHIDFF_enum
{
    LF_PROTOCOL_HANDLER_PHIDFF_CLEAR_gc = (0x00), /* Protocol Handler ID Frame Flag - CLEAR */
    LF_PROTOCOL_HANDLER_PHIDFF_SET_gc   = (0x08), /* Protocol Handler ID Frame Flag - SET */
} LF_PROTOCOL_HANDLER_PHIDFF_t;

/* Protocol Handler Date Frame Flag */
typedef enum LF_PROTOCOL_HANDLER_PHDFF_enum
{
    LF_PROTOCOL_HANDLER_PHDFF_CLEAR_gc = (0x00), /* Protocol Handler Date Frame Flag - CLEAR */
    LF_PROTOCOL_HANDLER_PHDFF_SET_gc   = (0x04), /* Protocol Handler Date Frame Flag - SET */
} LF_PROTOCOL_HANDLER_PHDFF_t;

/* Protocol Handler Telegram Bit Length Flag */
typedef enum LF_PROTOCOL_HANDLER_PHTBLF_enum
{
    LF_PROTOCOL_HANDLER_PHTBLF_CLEAR_gc = (0x00), /* Protocol Handler Telegram Bit Length Flag - CLEAR */
    LF_PROTOCOL_HANDLER_PHTBLF_SET_gc   = (0x02), /* Protocol Handler Telegram Bit Length Flag - SET */
} LF_PROTOCOL_HANDLER_PHTBLF_t;

/* PH CRC Error Status Flag */
typedef enum LF_PROTOCOL_HANDLER_CRCEF_enum
{
    LF_PROTOCOL_HANDLER_CRCEF_CLEAR_gc = (0x00), /* PH CRC Error Status Flag - CLEAR */
    LF_PROTOCOL_HANDLER_CRCEF_SET_gc   = (0x01), /* PH CRC Error Status Flag - SET */
} LF_PROTOCOL_HANDLER_CRCEF_t;

/* Protocol Handler IDentifier 1 Interrupt Mask */
typedef enum LF_PROTOCOL_HANDLER_PHID1IM_enum
{
    LF_PROTOCOL_HANDLER_PHID1IM_CLEAR_gc = (0x00), /* Protocol Handler IDentifier 1 Interrupt Mask - CLEAR */
    LF_PROTOCOL_HANDLER_PHID1IM_SET_gc   = (0x20), /* Protocol Handler IDentifier 1 Interrupt Mask - SET */
} LF_PROTOCOL_HANDLER_PHID1IM_t;

/* Protocol Handler IDentifier 0 Interrupt Mask */
typedef enum LF_PROTOCOL_HANDLER_PHID0IM_enum
{
    LF_PROTOCOL_HANDLER_PHID0IM_CLEAR_gc = (0x00), /* Protocol Handler IDentifier 0 Interrupt Mask - CLEAR */
    LF_PROTOCOL_HANDLER_PHID0IM_SET_gc   = (0x10), /* Protocol Handler IDentifier 0 Interrupt Mask - SET */
} LF_PROTOCOL_HANDLER_PHID0IM_t;

/* Protocol Handler ID Frame Interrupt Mask */
typedef enum LF_PROTOCOL_HANDLER_PHIDFIM_enum
{
    LF_PROTOCOL_HANDLER_PHIDFIM_CLEAR_gc = (0x00), /* Protocol Handler ID Frame Interrupt Mask - CLEAR */
    LF_PROTOCOL_HANDLER_PHIDFIM_SET_gc   = (0x08), /* Protocol Handler ID Frame Interrupt Mask - SET */
} LF_PROTOCOL_HANDLER_PHIDFIM_t;

/* Protocol Handler Date Frame Interrupt Mask */
typedef enum LF_PROTOCOL_HANDLER_PHDFIM_enum
{
    LF_PROTOCOL_HANDLER_PHDFIM_CLEAR_gc = (0x00), /* Protocol Handler Date Frame Interrupt Mask - CLEAR */
    LF_PROTOCOL_HANDLER_PHDFIM_SET_gc   = (0x04), /* Protocol Handler Date Frame Interrupt Mask - SET */
} LF_PROTOCOL_HANDLER_PHDFIM_t;

/* Protocol Handler Telegram Bit Length Interrupt Mask */
typedef enum LF_PROTOCOL_HANDLER_PHTBLIM_enum
{
    LF_PROTOCOL_HANDLER_PHTBLIM_CLEAR_gc = (0x00), /* Protocol Handler Telegram Bit Length Interrupt Mask - CLEAR */
    LF_PROTOCOL_HANDLER_PHTBLIM_SET_gc   = (0x02), /* Protocol Handler Telegram Bit Length Interrupt Mask - SET */
} LF_PROTOCOL_HANDLER_PHTBLIM_t;

/* Continue or Single receive Mode */
typedef enum LF_PROTOCOL_HANDLER_CSM_enum
{
    LF_PROTOCOL_HANDLER_CSM_CLEAR_gc = (0x00), /* Continue or Single receive Mode - CLEAR */
    LF_PROTOCOL_HANDLER_CSM_SET_gc   = (0x80), /* Continue or Single receive Mode - SET */
} LF_PROTOCOL_HANDLER_CSM_t;

/* Continuous Pattern Mode */
typedef enum LF_PROTOCOL_HANDLER_CPM_enum
{
    LF_PROTOCOL_HANDLER_CPM_CLEAR_gc = (0x00), /* Continuous Pattern Mode - CLEAR */
    LF_PROTOCOL_HANDLER_CPM_SET_gc   = (0x40), /* Continuous Pattern Mode - SET */
} LF_PROTOCOL_HANDLER_CPM_t;

/* ID Frame stored in FIFO */
typedef enum LF_PROTOCOL_HANDLER_FRFIFO_enum
{
    LF_PROTOCOL_HANDLER_FRFIFO_CLEAR_gc = (0x00), /* ID Frame stored in FIFO - CLEAR */
    LF_PROTOCOL_HANDLER_FRFIFO_SET_gc   = (0x20), /* ID Frame stored in FIFO - SET */
} LF_PROTOCOL_HANDLER_FRFIFO_t;

/*
--------------------------------------------------------------------------------
LF_RECEIVER - 
--------------------------------------------------------------------------------
*/

typedef struct LF_RECEIVER_struct
{
    register8_t rsv_0x00[60];  /* RESERVED REGISTER BLOCK */
    register8_t LFFR;          /* LF Receiver Flag Register */
    register8_t rsv_0x3D[18];  /* RESERVED REGISTER BLOCK */
    register8_t LFCR0;         /* LF Receiver Control Register 0 */
    register8_t LFCR1;         /* LF Receiver Control Register 1 */
    register8_t rsv_0x51[9];   /* RESERVED REGISTER BLOCK */
    register8_t LFCR2;         /* LF Receiver Control Register 2 */
    register8_t LFCR3;         /* LF Receiver Control Register 3 */
    register8_t rsv_0x5C[212]; /* RESERVED REGISTER BLOCK */
    register8_t LFDSR1;        /* LF Receiver Decoder Setting Register 1 */
    register8_t LFDSR2;        /* LF Receiver Decoder Setting Register 2 */
    register8_t LFDSR3;        /* LF Receiver Decoder Setting Register 3 */
    register8_t LFDSR4;        /* LF Receiver Decoder Setting Register 4 */
    register8_t LFDSR5;        /* LF Decoder Setting 5 Register */
    register8_t LFDSR6;        /* LF Decoder Setting 6 Register */
    register8_t LFDSR7;        /* LF Decoder Setting 7 Register */
    register8_t LFDSR8;        /* LF Decoder Setting 8 Register */
    register8_t LFDSR9;        /* LF Decoder Setting 9 Register */
    register8_t LFDSR10;       /* LF Decoder Setting 10 Register */
    register8_t LFDSR11;       /* Low Frequency Decoder Setting Register 11 */
    register8_t rsv_0x13B[22]; /* RESERVED REGISTER BLOCK */
    register8_t LFSRCTM;       /* LF Receiver SRC Tuning MSB */
    register8_t rsv_0x152[10]; /* RESERVED REGISTER BLOCK */
    register8_t LFSRCTL;       /* LF Receiver SRC Tuning LSB */
    register8_t rsv_0x15D[50]; /* RESERVED REGISTER BLOCK */
    register8_t LFIMR;         /* LF Receiver Interrupt Mask Register */
    register8_t rsv_0x190[11]; /* RESERVED REGISTER BLOCK */
    _REGISTER32 (LFSYSY);      /* LF Receiver Synchronization Symbols Register */
    register8_t rsv_0x19C[3];  /* RESERVED REGISTER BLOCK */
    register8_t LFSYLE;        /* LF Receiver Synchronization Length Register */
    register8_t LFSTOP;        /* LF Receiver Stop Bit Register */
    register8_t rsv_0x1A1[6];  /* RESERVED REGISTER BLOCK */
    register8_t LFQC3;         /* LF Receiver Channel 3 Quality Faktor Register */
    register8_t LFQC2;         /* LF Receiver Channel 2 Quality Faktor Register */
    register8_t LFQC1;         /* LF Receiver Channel 1 Quality Faktor Register */
} LF_RECEIVER_t;


/* LF Receiver Reset Time */
typedef enum LF_RECEIVER_LFRRT_enum
{
    LF_RECEIVER_LFRRT_VAL_0x00_gc = (0x00<<6), /* 128 us */
    LF_RECEIVER_LFRRT_VAL_0x01_gc = (0x01<<6), /* 160 us */
    LF_RECEIVER_LFRRT_VAL_0x02_gc = (0x02<<6), /* 192 us */
    LF_RECEIVER_LFRRT_VAL_0x03_gc = (0x03<<6), /* 224 us */
} LF_RECEIVER_LFRRT_t;

/* LF Receiver Maximum Gain Select */
typedef enum LF_RECEIVER_LFMG_enum
{
    LF_RECEIVER_LFMG_CLEAR_gc = (0x00), /* LF Receiver Maximum Gain Select - CLEAR */
    LF_RECEIVER_LFMG_SET_gc   = (0x20), /* LF Receiver Maximum Gain Select - SET */
} LF_RECEIVER_LFMG_t;

/* LF Receiver Bit Rate */
typedef enum LF_RECEIVER_LFBR_enum
{
    LF_RECEIVER_LFBR_VAL_0x00_gc = (0x00<<3), /* 1.95 kBit/s */
    LF_RECEIVER_LFBR_VAL_0x01_gc = (0x01<<3), /* 3.90 kBit/s */
    LF_RECEIVER_LFBR_VAL_0x02_gc = (0x02<<3), /* 7.81 kBit/s */
} LF_RECEIVER_LFBR_t;

/* LF Receiver Channel 3 Enable */
typedef enum LF_RECEIVER_LFCE3_enum
{
    LF_RECEIVER_LFCE3_CLEAR_gc = (0x00), /* LF Receiver Channel 3 Enable - CLEAR */
    LF_RECEIVER_LFCE3_SET_gc   = (0x04), /* LF Receiver Channel 3 Enable - SET */
} LF_RECEIVER_LFCE3_t;

/* LF Receiver Channel 2 Enable */
typedef enum LF_RECEIVER_LFCE2_enum
{
    LF_RECEIVER_LFCE2_CLEAR_gc = (0x00), /* LF Receiver Channel 2 Enable - CLEAR */
    LF_RECEIVER_LFCE2_SET_gc   = (0x02), /* LF Receiver Channel 2 Enable - SET */
} LF_RECEIVER_LFCE2_t;

/* LF Receiver Channel 1 Enable */
typedef enum LF_RECEIVER_LFCE1_enum
{
    LF_RECEIVER_LFCE1_CLEAR_gc = (0x00), /* LF Receiver Channel 1 Enable - CLEAR */
    LF_RECEIVER_LFCE1_SET_gc   = (0x01), /* LF Receiver Channel 1 Enable - SET */
} LF_RECEIVER_LFCE1_t;

/* LF Receiver Enable */
typedef enum LF_RECEIVER_LFRE_enum
{
    LF_RECEIVER_LFRE_CLEAR_gc = (0x00), /* LF Receiver Enable - CLEAR */
    LF_RECEIVER_LFRE_SET_gc   = (0x80), /* LF Receiver Enable - SET */
} LF_RECEIVER_LFRE_t;

/* LF Port Event Enable */
typedef enum LF_RECEIVER_LFPEEN_enum
{
    LF_RECEIVER_LFPEEN_CLEAR_gc = (0x00), /* LF Port Event Enable - CLEAR */
    LF_RECEIVER_LFPEEN_SET_gc   = (0x40), /* LF Port Event Enable - SET */
} LF_RECEIVER_LFPEEN_t;

/* Adapt Threshold Enable */
typedef enum LF_RECEIVER_ADTHEN_enum
{
    LF_RECEIVER_ADTHEN_CLEAR_gc = (0x00), /* Adapt Threshold Enable - CLEAR */
    LF_RECEIVER_ADTHEN_SET_gc   = (0x20), /* Adapt Threshold Enable - SET */
} LF_RECEIVER_ADTHEN_t;

/* FLL Enable */
typedef enum LF_RECEIVER_FLLEN_enum
{
    LF_RECEIVER_FLLEN_CLEAR_gc = (0x00), /* FLL Enable - CLEAR */
    LF_RECEIVER_FLLEN_SET_gc   = (0x10), /* FLL Enable - SET */
} LF_RECEIVER_FLLEN_t;

/* Analog Reset Manchester Detector Enable */
typedef enum LF_RECEIVER_ARMDE_enum
{
    LF_RECEIVER_ARMDE_CLEAR_gc = (0x00), /* Analog Reset Manchester Detector Enable - CLEAR */
    LF_RECEIVER_ARMDE_SET_gc   = (0x08), /* Analog Reset Manchester Detector Enable - SET */
} LF_RECEIVER_ARMDE_t;

/* LF Function Mode bit 1 */
typedef enum LF_RECEIVER_LFFM1_enum
{
    LF_RECEIVER_LFFM1_CLEAR_gc = (0x00), /* LF Function Mode bit 1 - CLEAR */
    LF_RECEIVER_LFFM1_SET_gc   = (0x04), /* LF Function Mode bit 1 - SET */
} LF_RECEIVER_LFFM1_t;

/* RSSI Startup Time */
typedef enum LF_RECEIVER_RSST_enum
{
    LF_RECEIVER_RSST_VAL_0x00_gc = (0x00), /* 256 us */
    LF_RECEIVER_RSST_VAL_0x01_gc = (0x01), /* 384 us */
    LF_RECEIVER_RSST_VAL_0x02_gc = (0x02), /* 512 us */
    LF_RECEIVER_RSST_VAL_0x03_gc = (0x03), /* 640 us */
} LF_RECEIVER_RSST_t;

/* LF Velocity Control */
#define LF_RECEIVER_LFCR2_LFVC_gc(x) ((x<<5) & 0xE0)

/* LF coil Damping level select */
typedef enum LF_RECEIVER_LFDAMP_enum
{
    LF_RECEIVER_LFDAMP_CLEAR_gc = (0x00), /* LF coil Damping level select - CLEAR */
    LF_RECEIVER_LFDAMP_SET_gc   = (0x04), /* LF coil Damping level select - SET */
} LF_RECEIVER_LFDAMP_t;

/* LF Sensitivity Mode */
typedef enum LF_RECEIVER_LFSEN_enum
{
    LF_RECEIVER_LFSEN_VAL_0x00_gc = (0x00), /* High Sensitivity */
    LF_RECEIVER_LFSEN_VAL_0x01_gc = (0x01), /* Medium Sensitivity */
    LF_RECEIVER_LFSEN_VAL_0x02_gc = (0x02), /* Low Sensitivity */
} LF_RECEIVER_LFSEN_t;

/* LF Standby mode Enable */
typedef enum LF_RECEIVER_LFSBEN_enum
{
    LF_RECEIVER_LFSBEN_CLEAR_gc = (0x00), /* LF Standby mode Enable - CLEAR */
    LF_RECEIVER_LFSBEN_SET_gc   = (0x80), /* LF Standby mode Enable - SET */
} LF_RECEIVER_LFSBEN_t;

/* LF Standby Time */
typedef enum LF_RECEIVER_LFTS_enum
{
    LF_RECEIVER_LFTS_VAL_0x00_gc = (0x00<<4), /*  384 us */
    LF_RECEIVER_LFTS_VAL_0x01_gc = (0x01<<4), /*  768 us */
    LF_RECEIVER_LFTS_VAL_0x02_gc = (0x02<<4), /* 1152 us */
    LF_RECEIVER_LFTS_VAL_0x03_gc = (0x03<<4), /* 1536 us */
    LF_RECEIVER_LFTS_VAL_0x04_gc = (0x04<<4), /* 2304 us */
    LF_RECEIVER_LFTS_VAL_0x05_gc = (0x05<<4), /* 3072 us */
    LF_RECEIVER_LFTS_VAL_0x06_gc = (0x06<<4), /* 4608 us */
    LF_RECEIVER_LFTS_VAL_0x07_gc = (0x07<<4), /* 6144 us */
} LF_RECEIVER_LFTS_t;

/* LF On Time with Activated Standby Mode */
typedef enum LF_RECEIVER_LFTON_enum
{
    LF_RECEIVER_LFTON_CLEAR_gc = (0x00), /* LF On Time with Activated Standby Mode - CLEAR */
    LF_RECEIVER_LFTON_SET_gc   = (0x08), /* LF On Time with Activated Standby Mode - SET */
} LF_RECEIVER_LFTON_t;

/* LF RC Pump mode Enable */
typedef enum LF_RECEIVER_LFRCPM_enum
{
    LF_RECEIVER_LFRCPM_CLEAR_gc = (0x00), /* LF RC Pump mode Enable - CLEAR */
    LF_RECEIVER_LFRCPM_SET_gc   = (0x04), /* LF RC Pump mode Enable - SET */
} LF_RECEIVER_LFRCPM_t;

/* LF RC Pump Continuous Enable */
typedef enum LF_RECEIVER_LFRCPCEN_enum
{
    LF_RECEIVER_LFRCPCEN_CLEAR_gc = (0x00), /* LF RC Pump Continuous Enable - CLEAR */
    LF_RECEIVER_LFRCPCEN_SET_gc   = (0x02), /* LF RC Pump Continuous Enable - SET */
} LF_RECEIVER_LFRCPCEN_t;

/* LF RC Trim Enable */
typedef enum LF_RECEIVER_LFRCTEN_enum
{
    LF_RECEIVER_LFRCTEN_CLEAR_gc = (0x00), /* LF RC Trim Enable - CLEAR */
    LF_RECEIVER_LFRCTEN_SET_gc   = (0x01), /* LF RC Trim Enable - SET */
} LF_RECEIVER_LFRCTEN_t;

/* Count Threshold A */
#define LF_RECEIVER_LFDSR1_CTTHA_gc(x) ((x<<4) & 0x30)

/* High Threshold A */
#define LF_RECEIVER_LFDSR1_HITHA_gc(x) ((x<<2) & 0x0C)

/* Low Threshold A */
#define LF_RECEIVER_LFDSR1_LOTHA_gc(x) (x & 0x03)

/* Stop Bit Correlator Threshold */
#define LF_RECEIVER_LFDSR10_STBTH_gc(x) ((x<<6) & 0xC0)

/* Frequency Control Limit */
#define LF_RECEIVER_LFDSR10_FCL_gc(x) (x & 0x3F)

/* Time Init B */
#define LF_RECEIVER_LFDSR11_TINITB_gc(x) ((x<<4) & 0xF0)

/* Time Init A */
#define LF_RECEIVER_LFDSR11_TINITA_gc(x) (x & 0x0F)

/* Count Threshold B */
#define LF_RECEIVER_LFDSR2_CTTHB_gc(x) ((x<<4) & 0x30)

/* High Threshold B */
#define LF_RECEIVER_LFDSR2_HITHB_gc(x) ((x<<2) & 0x0C)

/* Low Threshold B */
#define LF_RECEIVER_LFDSR2_LOTHB_gc(x) (x & 0x03)

/* Quality Check Threshold */
#define LF_RECEIVER_LFDSR3_QCTH_gc(x) ((x<<3) & 0x38)

/* Preburst Detection Threshold */
#define LF_RECEIVER_LFDSR3_PBDTH_gc(x) (x & 0x03)

/* Sync Restart Control */
#define LF_RECEIVER_LFDSR4_SRSTC_gc(x) ((x<<6) & 0xC0)

/* Sync Count Threshold A */
#define LF_RECEIVER_LFDSR4_SCTHA_gc(x) ((x<<3) & 0x38)

/* Sync Detection Threshold A */
#define LF_RECEIVER_LFDSR4_SDTHA_gc(x) (x & 0x07)

/* Snyc Start-Up Time B */
typedef enum LF_RECEIVER_SSUTB_enum
{
    LF_RECEIVER_SSUTB_CLEAR_gc = (0x00), /* Snyc Start-Up Time B - CLEAR */
    LF_RECEIVER_SSUTB_SET_gc   = (0x80), /* Snyc Start-Up Time B - SET */
} LF_RECEIVER_SSUTB_t;

/* Snyc Start-Up Time A */
typedef enum LF_RECEIVER_SSUTA_enum
{
    LF_RECEIVER_SSUTA_CLEAR_gc = (0x00), /* Snyc Start-Up Time A - CLEAR */
    LF_RECEIVER_SSUTA_SET_gc   = (0x40), /* Snyc Start-Up Time A - SET */
} LF_RECEIVER_SSUTA_t;

/* Sync Count Threshold B */
#define LF_RECEIVER_LFDSR5_SCTHB_gc(x) ((x<<3) & 0x38)

/* Sync Detection Threshold B */
#define LF_RECEIVER_LFDSR5_SDTHB_gc(x) (x & 0x07)

/* Time Out Timer Delta Sync detect */
#define LF_RECEIVER_LFDSR6_TODS_gc(x) ((x<<3) & 0x38)

/* Time Out Decode Unit */
#define LF_RECEIVER_LFDSR6_TODU_gc(x) (x & 0x07)

/* FLL Manchester Detector Gain */
#define LF_RECEIVER_LFDSR7_MDG_gc(x) ((x<<6) & 0xC0)

/* FLL Manchester Detector Speed */
#define LF_RECEIVER_LFDSR7_MDSP_gc(x) ((x<<4) & 0x30)

/* FLL Preburst Gain */
#define LF_RECEIVER_LFDSR7_PBG_gc(x) ((x<<2) & 0x0C)

/* FLL Preburst Speed */
#define LF_RECEIVER_LFDSR7_PBSP_gc(x) (x & 0x03)

/* Adaptive Switch Threshold */
#define LF_RECEIVER_LFDSR8_ASWTH_gc(x) ((x<<4) & 0x70)

/* Loop Gain Fading Enable */
typedef enum LF_RECEIVER_LGFE_enum
{
    LF_RECEIVER_LGFE_CLEAR_gc = (0x00), /* Loop Gain Fading Enable - CLEAR */
    LF_RECEIVER_LGFE_SET_gc   = (0x08), /* Loop Gain Fading Enable - SET */
} LF_RECEIVER_LGFE_t;

/* Counter Limit Delta */
#define LF_RECEIVER_LFDSR8_CLD_gc(x) (x & 0x07)

/* LF Envelope Signal */
typedef enum LF_RECEIVER_LFES_enum
{
    LF_RECEIVER_LFES_CLEAR_gc = (0x00), /* LF Envelope Signal - CLEAR */
    LF_RECEIVER_LFES_SET_gc   = (0x80), /* LF Envelope Signal - SET */
} LF_RECEIVER_LFES_t;

/* LF Signal Detect */
typedef enum LF_RECEIVER_LFSD_enum
{
    LF_RECEIVER_LFSD_CLEAR_gc = (0x00), /* LF Signal Detect - CLEAR */
    LF_RECEIVER_LFSD_SET_gc   = (0x40), /* LF Signal Detect - SET */
} LF_RECEIVER_LFSD_t;

/* LF telegram Time Out Flag */
typedef enum LF_RECEIVER_LFTOF_enum
{
    LF_RECEIVER_LFTOF_CLEAR_gc = (0x00), /* LF telegram Time Out Flag - CLEAR */
    LF_RECEIVER_LFTOF_SET_gc   = (0x08), /* LF telegram Time Out Flag - SET */
} LF_RECEIVER_LFTOF_t;

/* LF End of Telegram Flag */
typedef enum LF_RECEIVER_LFEOF_enum
{
    LF_RECEIVER_LFEOF_CLEAR_gc = (0x00), /* LF End of Telegram Flag - CLEAR */
    LF_RECEIVER_LFEOF_SET_gc   = (0x04), /* LF End of Telegram Flag - SET */
} LF_RECEIVER_LFEOF_t;

/* LF Decoder Error Flag */
typedef enum LF_RECEIVER_LFDEF_enum
{
    LF_RECEIVER_LFDEF_CLEAR_gc = (0x00), /* LF Decoder Error Flag - CLEAR */
    LF_RECEIVER_LFDEF_SET_gc   = (0x02), /* LF Decoder Error Flag - SET */
} LF_RECEIVER_LFDEF_t;

/* LF Synchronization Detect Flag */
typedef enum LF_RECEIVER_LFSYDF_enum
{
    LF_RECEIVER_LFSYDF_CLEAR_gc = (0x00), /* LF Synchronization Detect Flag - CLEAR */
    LF_RECEIVER_LFSYDF_SET_gc   = (0x01), /* LF Synchronization Detect Flag - SET */
} LF_RECEIVER_LFSYDF_t;

/* LF End Of telegram Interrupt Mask */
typedef enum LF_RECEIVER_LFEOIM_enum
{
    LF_RECEIVER_LFEOIM_CLEAR_gc = (0x00), /* LF End Of telegram Interrupt Mask - CLEAR */
    LF_RECEIVER_LFEOIM_SET_gc   = (0x04), /* LF End Of telegram Interrupt Mask - SET */
} LF_RECEIVER_LFEOIM_t;

/* LF Decoder Error Interrupt Mask */
typedef enum LF_RECEIVER_LFDEIM_enum
{
    LF_RECEIVER_LFDEIM_CLEAR_gc = (0x00), /* LF Decoder Error Interrupt Mask - CLEAR */
    LF_RECEIVER_LFDEIM_SET_gc   = (0x02), /* LF Decoder Error Interrupt Mask - SET */
} LF_RECEIVER_LFDEIM_t;

/* LF Synchronization Detected Interrupt Mask */
typedef enum LF_RECEIVER_LFSYDIM_enum
{
    LF_RECEIVER_LFSYDIM_CLEAR_gc = (0x00), /* LF Synchronization Detected Interrupt Mask - CLEAR */
    LF_RECEIVER_LFSYDIM_SET_gc   = (0x01), /* LF Synchronization Detected Interrupt Mask - SET */
} LF_RECEIVER_LFSYDIM_t;

/* LF capacitor select channel 1 */
#define LF_RECEIVER_LFQC1_LFCS1_gc(x) ((x<<4) & 0xF0)

/* LF resistor select channel 1 */
#define LF_RECEIVER_LFQC1_LFQS1_gc(x) (x & 0x0F)

/* LF capacitor select channel 2 */
#define LF_RECEIVER_LFQC2_LFCS2_gc(x) ((x<<4) & 0xF0)

/* LF resistor select channel 2 */
#define LF_RECEIVER_LFQC2_LFQS2_gc(x) (x & 0x0F)

/* LF capacitor select channel 3 */
#define LF_RECEIVER_LFQC3_LFCS3_gc(x) ((x<<4) & 0xF0)

/* LF resistor select channel 3 */
#define LF_RECEIVER_LFQC3_LFQS3_gc(x) (x & 0x0F)

/* LF Receiver SRC Tuning Tuning value */
typedef enum LF_RECEIVER_LFSRCT0_enum
{
    LF_RECEIVER_LFSRCT0_CLEAR_gc = (0x00), /* LF Receiver SRC Tuning Tuning value - CLEAR */
    LF_RECEIVER_LFSRCT0_SET_gc   = (0x01), /* LF Receiver SRC Tuning Tuning value - SET */
} LF_RECEIVER_LFSRCT0_t;

/* LF Receiver SRC Tuning Tuning value */
typedef enum LF_RECEIVER_LFSRCT8_enum
{
    LF_RECEIVER_LFSRCT8_CLEAR_gc = (0x00), /* LF Receiver SRC Tuning Tuning value - CLEAR */
    LF_RECEIVER_LFSRCT8_SET_gc   = (0x80), /* LF Receiver SRC Tuning Tuning value - SET */
} LF_RECEIVER_LFSRCT8_t;

/* LF Receiver SRC Tuning Tuning value */
typedef enum LF_RECEIVER_LFSRCT7_enum
{
    LF_RECEIVER_LFSRCT7_CLEAR_gc = (0x00), /* LF Receiver SRC Tuning Tuning value - CLEAR */
    LF_RECEIVER_LFSRCT7_SET_gc   = (0x40), /* LF Receiver SRC Tuning Tuning value - SET */
} LF_RECEIVER_LFSRCT7_t;

/* LF Receiver SRC Tuning Tuning value */
typedef enum LF_RECEIVER_LFSRCT6_enum
{
    LF_RECEIVER_LFSRCT6_CLEAR_gc = (0x00), /* LF Receiver SRC Tuning Tuning value - CLEAR */
    LF_RECEIVER_LFSRCT6_SET_gc   = (0x20), /* LF Receiver SRC Tuning Tuning value - SET */
} LF_RECEIVER_LFSRCT6_t;

/* LF Receiver SRC Tuning Tuning value */
typedef enum LF_RECEIVER_LFSRCT5_enum
{
    LF_RECEIVER_LFSRCT5_CLEAR_gc = (0x00), /* LF Receiver SRC Tuning Tuning value - CLEAR */
    LF_RECEIVER_LFSRCT5_SET_gc   = (0x10), /* LF Receiver SRC Tuning Tuning value - SET */
} LF_RECEIVER_LFSRCT5_t;

/* LF Receiver SRC Tuning Tuning value */
typedef enum LF_RECEIVER_LFSRCT4_enum
{
    LF_RECEIVER_LFSRCT4_CLEAR_gc = (0x00), /* LF Receiver SRC Tuning Tuning value - CLEAR */
    LF_RECEIVER_LFSRCT4_SET_gc   = (0x08), /* LF Receiver SRC Tuning Tuning value - SET */
} LF_RECEIVER_LFSRCT4_t;

/* LF Receiver SRC Tuning Tuning value */
typedef enum LF_RECEIVER_LFSRCT3_enum
{
    LF_RECEIVER_LFSRCT3_CLEAR_gc = (0x00), /* LF Receiver SRC Tuning Tuning value - CLEAR */
    LF_RECEIVER_LFSRCT3_SET_gc   = (0x04), /* LF Receiver SRC Tuning Tuning value - SET */
} LF_RECEIVER_LFSRCT3_t;

/* LF Receiver SRC Tuning Tuning value */
typedef enum LF_RECEIVER_LFSRCT2_enum
{
    LF_RECEIVER_LFSRCT2_CLEAR_gc = (0x00), /* LF Receiver SRC Tuning Tuning value - CLEAR */
    LF_RECEIVER_LFSRCT2_SET_gc   = (0x02), /* LF Receiver SRC Tuning Tuning value - SET */
} LF_RECEIVER_LFSRCT2_t;

/* LF Receiver SRC Tuning Tuning value */
typedef enum LF_RECEIVER_LFSRCT1_enum
{
    LF_RECEIVER_LFSRCT1_CLEAR_gc = (0x00), /* LF Receiver SRC Tuning Tuning value - CLEAR */
    LF_RECEIVER_LFSRCT1_SET_gc   = (0x01), /* LF Receiver SRC Tuning Tuning value - SET */
} LF_RECEIVER_LFSRCT1_t;

/* LF Stop Bits Length */
#define LF_RECEIVER_LFSTOP_LFSTL_gc(x) ((x<<4) & 0x70)

/* LF Stop Bits Symbols */
#define LF_RECEIVER_LFSTOP_LFSTSY_gc(x) (x & 0x0F)

/*
--------------------------------------------------------------------------------
LF_RSSI - 
--------------------------------------------------------------------------------
*/

typedef struct LF_RSSI_struct
{
    register8_t rsv_0x00[432]; /* RESERVED REGISTER BLOCK */
    register8_t RSCR;          /* RSSI Control Register */
    register8_t RSSR;          /* RSSI Status Register */
    register8_t RSMS1R;        /* RSSI Measurement Setting 1 Register */
    register8_t RSMS2R;        /* RSSI Measurement Setting 2 Register */
    register8_t RSFR;          /* RSSI Flag Register */
    register8_t rsv_0x1B5;     /* RESERVED REGISTER */
    register8_t RSCALIB;       /* RSSI Calibration Register */
    register8_t RSDLYR;        /* RSSI Delay Register */
    register8_t RSRES1L;       /* RSSI Result 1 Low Byte Register */
    register8_t RSRES1H;       /* RSSI Result 1 High Byte Register */
    register8_t RSRES2L;       /* RSSI Result 2 Low Byte Register */
    register8_t RSRES2H;       /* RSSI Result 2 High Byte Register */
    register8_t RSRES3L;       /* RSSI Result 3 Low Byte Register */
    register8_t RSRES3H;       /* RSSI Result 3 High Byte Register */
    register8_t RSRES4L;       /* RSSI Result 4 Low Byte Register */
    register8_t RSRES4H;       /* RSSI Result 4 High Byte Register */
    register8_t RSSRCR;        /* RSSI SRC Calibration Register */
    register8_t SD12RR;        /* Sign Detection Channel 1 vs 2 Result Register */
    register8_t SD13RR;        /* Sign Detection Channel 1 vs 3 Result Register */
    register8_t SD23RR;        /* Sign Detection Channel 2 vs 3 Result Register */
    register8_t SD360R;        /* Sign Detection 360 Degree Result Register */
    register8_t RSDBGR;        /* RSSI Debug Register */
} LF_RSSI_t;


/* RSSI Calibration Bit 7 */
typedef enum LF_RSSI_RSCALIB7_enum
{
    LF_RSSI_RSCALIB7_CLEAR_gc = (0x00), /* RSSI Calibration Bit 7 - CLEAR */
    LF_RSSI_RSCALIB7_SET_gc   = (0x80), /* RSSI Calibration Bit 7 - SET */
} LF_RSSI_RSCALIB7_t;

/* RSSI Calibration Bit 6 */
typedef enum LF_RSSI_RSCALIB6_enum
{
    LF_RSSI_RSCALIB6_CLEAR_gc = (0x00), /* RSSI Calibration Bit 6 - CLEAR */
    LF_RSSI_RSCALIB6_SET_gc   = (0x40), /* RSSI Calibration Bit 6 - SET */
} LF_RSSI_RSCALIB6_t;

/* RSSI Calibration Bit 5 */
typedef enum LF_RSSI_RSCALIB5_enum
{
    LF_RSSI_RSCALIB5_CLEAR_gc = (0x00), /* RSSI Calibration Bit 5 - CLEAR */
    LF_RSSI_RSCALIB5_SET_gc   = (0x20), /* RSSI Calibration Bit 5 - SET */
} LF_RSSI_RSCALIB5_t;

/* RSSI Calibration Bit 4 */
typedef enum LF_RSSI_RSCALIB4_enum
{
    LF_RSSI_RSCALIB4_CLEAR_gc = (0x00), /* RSSI Calibration Bit 4 - CLEAR */
    LF_RSSI_RSCALIB4_SET_gc   = (0x10), /* RSSI Calibration Bit 4 - SET */
} LF_RSSI_RSCALIB4_t;

/* RSSI Calibration Bit 3 */
typedef enum LF_RSSI_RSCALIB3_enum
{
    LF_RSSI_RSCALIB3_CLEAR_gc = (0x00), /* RSSI Calibration Bit 3 - CLEAR */
    LF_RSSI_RSCALIB3_SET_gc   = (0x08), /* RSSI Calibration Bit 3 - SET */
} LF_RSSI_RSCALIB3_t;

/* RSSI Calibration Bit 2 */
typedef enum LF_RSSI_RSCALIB2_enum
{
    LF_RSSI_RSCALIB2_CLEAR_gc = (0x00), /* RSSI Calibration Bit 2 - CLEAR */
    LF_RSSI_RSCALIB2_SET_gc   = (0x04), /* RSSI Calibration Bit 2 - SET */
} LF_RSSI_RSCALIB2_t;

/* RSSI Calibration Bit 1 */
typedef enum LF_RSSI_RSCALIB1_enum
{
    LF_RSSI_RSCALIB1_CLEAR_gc = (0x00), /* RSSI Calibration Bit 1 - CLEAR */
    LF_RSSI_RSCALIB1_SET_gc   = (0x02), /* RSSI Calibration Bit 1 - SET */
} LF_RSSI_RSCALIB1_t;

/* RSSI Calibration Bit 0 */
typedef enum LF_RSSI_RSCALIB0_enum
{
    LF_RSSI_RSCALIB0_CLEAR_gc = (0x00), /* RSSI Calibration Bit 0 - CLEAR */
    LF_RSSI_RSCALIB0_SET_gc   = (0x01), /* RSSI Calibration Bit 0 - SET */
} LF_RSSI_RSCALIB0_t;

/* RSSI Reset Bit */
typedef enum LF_RSSI_RSRES_enum
{
    LF_RSSI_RSRES_CLEAR_gc = (0x00), /* RSSI Reset Bit - CLEAR */
    LF_RSSI_RSRES_SET_gc   = (0x80), /* RSSI Reset Bit - SET */
} LF_RSSI_RSRES_t;

/* RSSI Mode Bit 1 */
typedef enum LF_RSSI_RSMODE1_enum
{
    LF_RSSI_RSMODE1_CLEAR_gc = (0x00), /* RSSI Mode Bit 1 - CLEAR */
    LF_RSSI_RSMODE1_SET_gc   = (0x20), /* RSSI Mode Bit 1 - SET */
} LF_RSSI_RSMODE1_t;

/* RSSI Mode Bit 0 */
typedef enum LF_RSSI_RSMODE0_enum
{
    LF_RSSI_RSMODE0_CLEAR_gc = (0x00), /* RSSI Mode Bit 0 - CLEAR */
    LF_RSSI_RSMODE0_SET_gc   = (0x10), /* RSSI Mode Bit 0 - SET */
} LF_RSSI_RSMODE0_t;

/* RSSI Operation Flag Mask Bit */
typedef enum LF_RSSI_RSOFM_enum
{
    LF_RSSI_RSOFM_CLEAR_gc = (0x00), /* RSSI Operation Flag Mask Bit - CLEAR */
    LF_RSSI_RSOFM_SET_gc   = (0x08), /* RSSI Operation Flag Mask Bit - SET */
} LF_RSSI_RSOFM_t;

/* RSSI End Operation Request Bit */
typedef enum LF_RSSI_RSEOR_enum
{
    LF_RSSI_RSEOR_CLEAR_gc = (0x00), /* RSSI End Operation Request Bit - CLEAR */
    LF_RSSI_RSEOR_SET_gc   = (0x04), /* RSSI End Operation Request Bit - SET */
} LF_RSSI_RSEOR_t;

/* RSSI Operation Start Bit */
typedef enum LF_RSSI_RSOS_enum
{
    LF_RSSI_RSOS_CLEAR_gc = (0x00), /* RSSI Operation Start Bit - CLEAR */
    LF_RSSI_RSOS_SET_gc   = (0x02), /* RSSI Operation Start Bit - SET */
} LF_RSSI_RSOS_t;

/* RSSI Sign Detection Enable Bit */
typedef enum LF_RSSI_RSSDEN_enum
{
    LF_RSSI_RSSDEN_CLEAR_gc = (0x00), /* RSSI Sign Detection Enable Bit - CLEAR */
    LF_RSSI_RSSDEN_SET_gc   = (0x01), /* RSSI Sign Detection Enable Bit - SET */
} LF_RSSI_RSSDEN_t;

/* RSSI Debug Enable Bit */
typedef enum LF_RSSI_RSDBGEN_enum
{
    LF_RSSI_RSDBGEN_CLEAR_gc = (0x00), /* RSSI Debug Enable Bit - CLEAR */
    LF_RSSI_RSDBGEN_SET_gc   = (0x80), /* RSSI Debug Enable Bit - SET */
} LF_RSSI_RSDBGEN_t;

/* RSSI Debug Select Bit 1 */
typedef enum LF_RSSI_RSDBGS1_enum
{
    LF_RSSI_RSDBGS1_CLEAR_gc = (0x00), /* RSSI Debug Select Bit 1 - CLEAR */
    LF_RSSI_RSDBGS1_SET_gc   = (0x40), /* RSSI Debug Select Bit 1 - SET */
} LF_RSSI_RSDBGS1_t;

/* RSSI Debug Select Bit 0 */
typedef enum LF_RSSI_RSDBGS0_enum
{
    LF_RSSI_RSDBGS0_CLEAR_gc = (0x00), /* RSSI Debug Select Bit 0 - CLEAR */
    LF_RSSI_RSDBGS0_SET_gc   = (0x20), /* RSSI Debug Select Bit 0 - SET */
} LF_RSSI_RSDBGS0_t;

/* RSSI Hold Measurement Bit */
typedef enum LF_RSSI_RSHOME_enum
{
    LF_RSSI_RSHOME_CLEAR_gc = (0x00), /* RSSI Hold Measurement Bit - CLEAR */
    LF_RSSI_RSHOME_SET_gc   = (0x10), /* RSSI Hold Measurement Bit - SET */
} LF_RSSI_RSHOME_t;

/* RSSI Fix Pre-Divider Bit */
typedef enum LF_RSSI_RSFPD_enum
{
    LF_RSSI_RSFPD_CLEAR_gc = (0x00), /* RSSI Fix Pre-Divider Bit - CLEAR */
    LF_RSSI_RSFPD_SET_gc   = (0x08), /* RSSI Fix Pre-Divider Bit - SET */
} LF_RSSI_RSFPD_t;

/* RSSI Infinity Measurement Bit */
typedef enum LF_RSSI_RSINFM_enum
{
    LF_RSSI_RSINFM_CLEAR_gc = (0x00), /* RSSI Infinity Measurement Bit - CLEAR */
    LF_RSSI_RSINFM_SET_gc   = (0x04), /* RSSI Infinity Measurement Bit - SET */
} LF_RSSI_RSINFM_t;

/* RSSI Set Analog Bit */
typedef enum LF_RSSI_RSSANA_enum
{
    LF_RSSI_RSSANA_CLEAR_gc = (0x00), /* RSSI Set Analog Bit - CLEAR */
    LF_RSSI_RSSANA_SET_gc   = (0x01), /* RSSI Set Analog Bit - SET */
} LF_RSSI_RSSANA_t;

/* RSSI Range Delay Bit 1 */
typedef enum LF_RSSI_RSRD1_enum
{
    LF_RSSI_RSRD1_CLEAR_gc = (0x00), /* RSSI Range Delay Bit 1 - CLEAR */
    LF_RSSI_RSRD1_SET_gc   = (0x80), /* RSSI Range Delay Bit 1 - SET */
} LF_RSSI_RSRD1_t;

/* RSSI Range Delay Bit 0 */
typedef enum LF_RSSI_RSRD0_enum
{
    LF_RSSI_RSRD0_CLEAR_gc = (0x00), /* RSSI Range Delay Bit 0 - CLEAR */
    LF_RSSI_RSRD0_SET_gc   = (0x40), /* RSSI Range Delay Bit 0 - SET */
} LF_RSSI_RSRD0_t;

/* RSSI Tracking Delay Bit 5 */
typedef enum LF_RSSI_RSTRD5_enum
{
    LF_RSSI_RSTRD5_CLEAR_gc = (0x00), /* RSSI Tracking Delay Bit 5 - CLEAR */
    LF_RSSI_RSTRD5_SET_gc   = (0x20), /* RSSI Tracking Delay Bit 5 - SET */
} LF_RSSI_RSTRD5_t;

/* RSSI Tracking Delay Bit 4 */
typedef enum LF_RSSI_RSTRD4_enum
{
    LF_RSSI_RSTRD4_CLEAR_gc = (0x00), /* RSSI Tracking Delay Bit 4 - CLEAR */
    LF_RSSI_RSTRD4_SET_gc   = (0x10), /* RSSI Tracking Delay Bit 4 - SET */
} LF_RSSI_RSTRD4_t;

/* RSSI Tracking Delay Bit 3 */
typedef enum LF_RSSI_RSTRD3_enum
{
    LF_RSSI_RSTRD3_CLEAR_gc = (0x00), /* RSSI Tracking Delay Bit 3 - CLEAR */
    LF_RSSI_RSTRD3_SET_gc   = (0x08), /* RSSI Tracking Delay Bit 3 - SET */
} LF_RSSI_RSTRD3_t;

/* RSSI Tracking Delay Bit 2 */
typedef enum LF_RSSI_RSTRD2_enum
{
    LF_RSSI_RSTRD2_CLEAR_gc = (0x00), /* RSSI Tracking Delay Bit 2 - CLEAR */
    LF_RSSI_RSTRD2_SET_gc   = (0x04), /* RSSI Tracking Delay Bit 2 - SET */
} LF_RSSI_RSTRD2_t;

/* RSSI Tracking Delay Bit 1 */
typedef enum LF_RSSI_RSTRD1_enum
{
    LF_RSSI_RSTRD1_CLEAR_gc = (0x00), /* RSSI Tracking Delay Bit 1 - CLEAR */
    LF_RSSI_RSTRD1_SET_gc   = (0x02), /* RSSI Tracking Delay Bit 1 - SET */
} LF_RSSI_RSTRD1_t;

/* RSSI Tracking Delay Bit 0 */
typedef enum LF_RSSI_RSTRD0_enum
{
    LF_RSSI_RSTRD0_CLEAR_gc = (0x00), /* RSSI Tracking Delay Bit 0 - CLEAR */
    LF_RSSI_RSTRD0_SET_gc   = (0x01), /* RSSI Tracking Delay Bit 0 - SET */
} LF_RSSI_RSTRD0_t;

/* RSSI Averaging Out of Range Channel 3 Bit */
typedef enum LF_RSSI_RSAOOR3_enum
{
    LF_RSSI_RSAOOR3_CLEAR_gc = (0x00), /* RSSI Averaging Out of Range Channel 3 Bit - CLEAR */
    LF_RSSI_RSAOOR3_SET_gc   = (0x80), /* RSSI Averaging Out of Range Channel 3 Bit - SET */
} LF_RSSI_RSAOOR3_t;

/* RSSI Averaging Out of Range Channel 2 Bit */
typedef enum LF_RSSI_RSAOOR2_enum
{
    LF_RSSI_RSAOOR2_CLEAR_gc = (0x00), /* RSSI Averaging Out of Range Channel 2 Bit - CLEAR */
    LF_RSSI_RSAOOR2_SET_gc   = (0x40), /* RSSI Averaging Out of Range Channel 2 Bit - SET */
} LF_RSSI_RSAOOR2_t;

/* RSSI Averaging Out of Range Channel 1 Bit */
typedef enum LF_RSSI_RSAOOR1_enum
{
    LF_RSSI_RSAOOR1_CLEAR_gc = (0x00), /* RSSI Averaging Out of Range Channel 1 Bit - CLEAR */
    LF_RSSI_RSAOOR1_SET_gc   = (0x20), /* RSSI Averaging Out of Range Channel 1 Bit - SET */
} LF_RSSI_RSAOOR1_t;

/* RSSI Operation Finish Flag Bit */
typedef enum LF_RSSI_RSOFF_enum
{
    LF_RSSI_RSOFF_CLEAR_gc = (0x00), /* RSSI Operation Finish Flag Bit - CLEAR */
    LF_RSSI_RSOFF_SET_gc   = (0x08), /* RSSI Operation Finish Flag Bit - SET */
} LF_RSSI_RSOFF_t;

/* RSSI Out of Range Channel 3 Bit */
typedef enum LF_RSSI_RSOOR3_enum
{
    LF_RSSI_RSOOR3_CLEAR_gc = (0x00), /* RSSI Out of Range Channel 3 Bit - CLEAR */
    LF_RSSI_RSOOR3_SET_gc   = (0x04), /* RSSI Out of Range Channel 3 Bit - SET */
} LF_RSSI_RSOOR3_t;

/* RSSI Out of Range Channel 2 Bit */
typedef enum LF_RSSI_RSOOR2_enum
{
    LF_RSSI_RSOOR2_CLEAR_gc = (0x00), /* RSSI Out of Range Channel 2 Bit - CLEAR */
    LF_RSSI_RSOOR2_SET_gc   = (0x02), /* RSSI Out of Range Channel 2 Bit - SET */
} LF_RSSI_RSOOR2_t;

/* RSSI Out of Range Channel 1 Bit */
typedef enum LF_RSSI_RSOOR1_enum
{
    LF_RSSI_RSOOR1_CLEAR_gc = (0x00), /* RSSI Out of Range Channel 1 Bit - CLEAR */
    LF_RSSI_RSOOR1_SET_gc   = (0x01), /* RSSI Out of Range Channel 1 Bit - SET */
} LF_RSSI_RSOOR1_t;

/* RSSI Set Calibration Bit */
typedef enum LF_RSSI_RSSCAL_enum
{
    LF_RSSI_RSSCAL_CLEAR_gc = (0x00), /* RSSI Set Calibration Bit - CLEAR */
    LF_RSSI_RSSCAL_SET_gc   = (0x80), /* RSSI Set Calibration Bit - SET */
} LF_RSSI_RSSCAL_t;

/* RSSI Show Sample Value Bit */
typedef enum LF_RSSI_RSSSV_enum
{
    LF_RSSI_RSSSV_CLEAR_gc = (0x00), /* RSSI Show Sample Value Bit - CLEAR */
    LF_RSSI_RSSSV_SET_gc   = (0x40), /* RSSI Show Sample Value Bit - SET */
} LF_RSSI_RSSSV_t;

/* RSSI Current Mode Select Bit */
typedef enum LF_RSSI_RSCMS_enum
{
    LF_RSSI_RSCMS_CLEAR_gc = (0x00), /* RSSI Current Mode Select Bit - CLEAR */
    LF_RSSI_RSCMS_SET_gc   = (0x20), /* RSSI Current Mode Select Bit - SET */
} LF_RSSI_RSCMS_t;

/* RSSI Stimulus Bit */
typedef enum LF_RSSI_RSSTIM_enum
{
    LF_RSSI_RSSTIM_CLEAR_gc = (0x00), /* RSSI Stimulus Bit - CLEAR */
    LF_RSSI_RSSTIM_SET_gc   = (0x10), /* RSSI Stimulus Bit - SET */
} LF_RSSI_RSSTIM_t;

/* RSSI internal Measurement Bit */
typedef enum LF_RSSI_RSINTM_enum
{
    LF_RSSI_RSINTM_CLEAR_gc = (0x00), /* RSSI internal Measurement Bit - CLEAR */
    LF_RSSI_RSINTM_SET_gc   = (0x08), /* RSSI internal Measurement Bit - SET */
} LF_RSSI_RSINTM_t;

/* RSSI Channel 3 Enable Bit */
typedef enum LF_RSSI_RSCH3E_enum
{
    LF_RSSI_RSCH3E_CLEAR_gc = (0x00), /* RSSI Channel 3 Enable Bit - CLEAR */
    LF_RSSI_RSCH3E_SET_gc   = (0x04), /* RSSI Channel 3 Enable Bit - SET */
} LF_RSSI_RSCH3E_t;

/* RSSI Channel 2 Enable Bit */
typedef enum LF_RSSI_RSCH2E_enum
{
    LF_RSSI_RSCH2E_CLEAR_gc = (0x00), /* RSSI Channel 2 Enable Bit - CLEAR */
    LF_RSSI_RSCH2E_SET_gc   = (0x02), /* RSSI Channel 2 Enable Bit - SET */
} LF_RSSI_RSCH2E_t;

/* RSSI Channel 1 Enable Bit */
typedef enum LF_RSSI_RSCH1E_enum
{
    LF_RSSI_RSCH1E_CLEAR_gc = (0x00), /* RSSI Channel 1 Enable Bit - CLEAR */
    LF_RSSI_RSCH1E_SET_gc   = (0x01), /* RSSI Channel 1 Enable Bit - SET */
} LF_RSSI_RSCH1E_t;

/* RSSI Average Select Bit 3 */
typedef enum LF_RSSI_RSAVGS3_enum
{
    LF_RSSI_RSAVGS3_CLEAR_gc = (0x00), /* RSSI Average Select Bit 3 - CLEAR */
    LF_RSSI_RSAVGS3_SET_gc   = (0x80), /* RSSI Average Select Bit 3 - SET */
} LF_RSSI_RSAVGS3_t;

/* RSSI Average Select Bit 2 */
typedef enum LF_RSSI_RSAVGS2_enum
{
    LF_RSSI_RSAVGS2_CLEAR_gc = (0x00), /* RSSI Average Select Bit 2 - CLEAR */
    LF_RSSI_RSAVGS2_SET_gc   = (0x40), /* RSSI Average Select Bit 2 - SET */
} LF_RSSI_RSAVGS2_t;

/* RSSI Average Select Bit 1 */
typedef enum LF_RSSI_RSAVGS1_enum
{
    LF_RSSI_RSAVGS1_CLEAR_gc = (0x00), /* RSSI Average Select Bit 1 - CLEAR */
    LF_RSSI_RSAVGS1_SET_gc   = (0x20), /* RSSI Average Select Bit 1 - SET */
} LF_RSSI_RSAVGS1_t;

/* RSSI Average Select Bit 0 */
typedef enum LF_RSSI_RSAVGS0_enum
{
    LF_RSSI_RSAVGS0_CLEAR_gc = (0x00), /* RSSI Average Select Bit 0 - CLEAR */
    LF_RSSI_RSAVGS0_SET_gc   = (0x10), /* RSSI Average Select Bit 0 - SET */
} LF_RSSI_RSAVGS0_t;

/* RSSI Sample Address Bit 3 */
typedef enum LF_RSSI_RSSADR3_enum
{
    LF_RSSI_RSSADR3_CLEAR_gc = (0x00), /* RSSI Sample Address Bit 3 - CLEAR */
    LF_RSSI_RSSADR3_SET_gc   = (0x08), /* RSSI Sample Address Bit 3 - SET */
} LF_RSSI_RSSADR3_t;

/* RSSI Sample Address Bit 2 */
typedef enum LF_RSSI_RSSADR2_enum
{
    LF_RSSI_RSSADR2_CLEAR_gc = (0x00), /* RSSI Sample Address Bit 2 - CLEAR */
    LF_RSSI_RSSADR2_SET_gc   = (0x04), /* RSSI Sample Address Bit 2 - SET */
} LF_RSSI_RSSADR2_t;

/* RSSI Sample Address Bit 1 */
typedef enum LF_RSSI_RSSADR1_enum
{
    LF_RSSI_RSSADR1_CLEAR_gc = (0x00), /* RSSI Sample Address Bit 1 - CLEAR */
    LF_RSSI_RSSADR1_SET_gc   = (0x02), /* RSSI Sample Address Bit 1 - SET */
} LF_RSSI_RSSADR1_t;

/* RSSI Sample Address Bit 0 */
typedef enum LF_RSSI_RSSADR0_enum
{
    LF_RSSI_RSSADR0_CLEAR_gc = (0x00), /* RSSI Sample Address Bit 0 - CLEAR */
    LF_RSSI_RSSADR0_SET_gc   = (0x01), /* RSSI Sample Address Bit 0 - SET */
} LF_RSSI_RSSADR0_t;

/* RSSI Result 1 High Byte Bit 7 */
typedef enum LF_RSSI_RSRES1H7_enum
{
    LF_RSSI_RSRES1H7_CLEAR_gc = (0x00), /* RSSI Result 1 High Byte Bit 7 - CLEAR */
    LF_RSSI_RSRES1H7_SET_gc   = (0x80), /* RSSI Result 1 High Byte Bit 7 - SET */
} LF_RSSI_RSRES1H7_t;

/* RSSI Result 1 High Byte Bit 6 */
typedef enum LF_RSSI_RSRES1H6_enum
{
    LF_RSSI_RSRES1H6_CLEAR_gc = (0x00), /* RSSI Result 1 High Byte Bit 6 - CLEAR */
    LF_RSSI_RSRES1H6_SET_gc   = (0x40), /* RSSI Result 1 High Byte Bit 6 - SET */
} LF_RSSI_RSRES1H6_t;

/* RSSI Result 1 High Byte Bit 5 */
typedef enum LF_RSSI_RSRES1H5_enum
{
    LF_RSSI_RSRES1H5_CLEAR_gc = (0x00), /* RSSI Result 1 High Byte Bit 5 - CLEAR */
    LF_RSSI_RSRES1H5_SET_gc   = (0x20), /* RSSI Result 1 High Byte Bit 5 - SET */
} LF_RSSI_RSRES1H5_t;

/* RSSI Result 1 High Byte Bit 4 */
typedef enum LF_RSSI_RSRES1H4_enum
{
    LF_RSSI_RSRES1H4_CLEAR_gc = (0x00), /* RSSI Result 1 High Byte Bit 4 - CLEAR */
    LF_RSSI_RSRES1H4_SET_gc   = (0x10), /* RSSI Result 1 High Byte Bit 4 - SET */
} LF_RSSI_RSRES1H4_t;

/* RSSI Result 1 High Byte Bit 3 */
typedef enum LF_RSSI_RSRES1H3_enum
{
    LF_RSSI_RSRES1H3_CLEAR_gc = (0x00), /* RSSI Result 1 High Byte Bit 3 - CLEAR */
    LF_RSSI_RSRES1H3_SET_gc   = (0x08), /* RSSI Result 1 High Byte Bit 3 - SET */
} LF_RSSI_RSRES1H3_t;

/* RSSI Result 1 High Byte Bit 2 */
typedef enum LF_RSSI_RSRES1H2_enum
{
    LF_RSSI_RSRES1H2_CLEAR_gc = (0x00), /* RSSI Result 1 High Byte Bit 2 - CLEAR */
    LF_RSSI_RSRES1H2_SET_gc   = (0x04), /* RSSI Result 1 High Byte Bit 2 - SET */
} LF_RSSI_RSRES1H2_t;

/* RSSI Result 1 High Byte Bit 1 */
typedef enum LF_RSSI_RSRES1H1_enum
{
    LF_RSSI_RSRES1H1_CLEAR_gc = (0x00), /* RSSI Result 1 High Byte Bit 1 - CLEAR */
    LF_RSSI_RSRES1H1_SET_gc   = (0x02), /* RSSI Result 1 High Byte Bit 1 - SET */
} LF_RSSI_RSRES1H1_t;

/* RSSI Result 1 High Byte Bit 0 */
typedef enum LF_RSSI_RSRES1H0_enum
{
    LF_RSSI_RSRES1H0_CLEAR_gc = (0x00), /* RSSI Result 1 High Byte Bit 0 - CLEAR */
    LF_RSSI_RSRES1H0_SET_gc   = (0x01), /* RSSI Result 1 High Byte Bit 0 - SET */
} LF_RSSI_RSRES1H0_t;

/* RSSI Result 1 Low Byte Bit 7 */
typedef enum LF_RSSI_RSRES1L7_enum
{
    LF_RSSI_RSRES1L7_CLEAR_gc = (0x00), /* RSSI Result 1 Low Byte Bit 7 - CLEAR */
    LF_RSSI_RSRES1L7_SET_gc   = (0x80), /* RSSI Result 1 Low Byte Bit 7 - SET */
} LF_RSSI_RSRES1L7_t;

/* RSSI Result 1 Low Byte Bit 6 */
typedef enum LF_RSSI_RSRES1L6_enum
{
    LF_RSSI_RSRES1L6_CLEAR_gc = (0x00), /* RSSI Result 1 Low Byte Bit 6 - CLEAR */
    LF_RSSI_RSRES1L6_SET_gc   = (0x40), /* RSSI Result 1 Low Byte Bit 6 - SET */
} LF_RSSI_RSRES1L6_t;

/* RSSI Result 1 Low Byte Bit 5 */
typedef enum LF_RSSI_RSRES1L5_enum
{
    LF_RSSI_RSRES1L5_CLEAR_gc = (0x00), /* RSSI Result 1 Low Byte Bit 5 - CLEAR */
    LF_RSSI_RSRES1L5_SET_gc   = (0x20), /* RSSI Result 1 Low Byte Bit 5 - SET */
} LF_RSSI_RSRES1L5_t;

/* RSSI Result 1 Low Byte Bit 4 */
typedef enum LF_RSSI_RSRES1L4_enum
{
    LF_RSSI_RSRES1L4_CLEAR_gc = (0x00), /* RSSI Result 1 Low Byte Bit 4 - CLEAR */
    LF_RSSI_RSRES1L4_SET_gc   = (0x10), /* RSSI Result 1 Low Byte Bit 4 - SET */
} LF_RSSI_RSRES1L4_t;

/* RSSI Result 1 Low Byte Bit 3 */
typedef enum LF_RSSI_RSRES1L3_enum
{
    LF_RSSI_RSRES1L3_CLEAR_gc = (0x00), /* RSSI Result 1 Low Byte Bit 3 - CLEAR */
    LF_RSSI_RSRES1L3_SET_gc   = (0x08), /* RSSI Result 1 Low Byte Bit 3 - SET */
} LF_RSSI_RSRES1L3_t;

/* RSSI Result 1 Low Byte Bit 2 */
typedef enum LF_RSSI_RSRES1L2_enum
{
    LF_RSSI_RSRES1L2_CLEAR_gc = (0x00), /* RSSI Result 1 Low Byte Bit 2 - CLEAR */
    LF_RSSI_RSRES1L2_SET_gc   = (0x04), /* RSSI Result 1 Low Byte Bit 2 - SET */
} LF_RSSI_RSRES1L2_t;

/* RSSI Result 1 Low Byte Bit 1 */
typedef enum LF_RSSI_RSRES1L1_enum
{
    LF_RSSI_RSRES1L1_CLEAR_gc = (0x00), /* RSSI Result 1 Low Byte Bit 1 - CLEAR */
    LF_RSSI_RSRES1L1_SET_gc   = (0x02), /* RSSI Result 1 Low Byte Bit 1 - SET */
} LF_RSSI_RSRES1L1_t;

/* RSSI Result 1 Low Byte Bit 0 */
typedef enum LF_RSSI_RSRES1L0_enum
{
    LF_RSSI_RSRES1L0_CLEAR_gc = (0x00), /* RSSI Result 1 Low Byte Bit 0 - CLEAR */
    LF_RSSI_RSRES1L0_SET_gc   = (0x01), /* RSSI Result 1 Low Byte Bit 0 - SET */
} LF_RSSI_RSRES1L0_t;

/* RSSI Result 2 High Byte Bit 7 */
typedef enum LF_RSSI_RSRES2H7_enum
{
    LF_RSSI_RSRES2H7_CLEAR_gc = (0x00), /* RSSI Result 2 High Byte Bit 7 - CLEAR */
    LF_RSSI_RSRES2H7_SET_gc   = (0x80), /* RSSI Result 2 High Byte Bit 7 - SET */
} LF_RSSI_RSRES2H7_t;

/* RSSI Result 2 High Byte Bit 6 */
typedef enum LF_RSSI_RSRES2H6_enum
{
    LF_RSSI_RSRES2H6_CLEAR_gc = (0x00), /* RSSI Result 2 High Byte Bit 6 - CLEAR */
    LF_RSSI_RSRES2H6_SET_gc   = (0x40), /* RSSI Result 2 High Byte Bit 6 - SET */
} LF_RSSI_RSRES2H6_t;

/* RSSI Result 2 High Byte Bit 5 */
typedef enum LF_RSSI_RSRES2H5_enum
{
    LF_RSSI_RSRES2H5_CLEAR_gc = (0x00), /* RSSI Result 2 High Byte Bit 5 - CLEAR */
    LF_RSSI_RSRES2H5_SET_gc   = (0x20), /* RSSI Result 2 High Byte Bit 5 - SET */
} LF_RSSI_RSRES2H5_t;

/* RSSI Result 2 High Byte Bit 4 */
typedef enum LF_RSSI_RSRES2H4_enum
{
    LF_RSSI_RSRES2H4_CLEAR_gc = (0x00), /* RSSI Result 2 High Byte Bit 4 - CLEAR */
    LF_RSSI_RSRES2H4_SET_gc   = (0x10), /* RSSI Result 2 High Byte Bit 4 - SET */
} LF_RSSI_RSRES2H4_t;

/* RSSI Result 2 High Byte Bit 3 */
typedef enum LF_RSSI_RSRES2H3_enum
{
    LF_RSSI_RSRES2H3_CLEAR_gc = (0x00), /* RSSI Result 2 High Byte Bit 3 - CLEAR */
    LF_RSSI_RSRES2H3_SET_gc   = (0x08), /* RSSI Result 2 High Byte Bit 3 - SET */
} LF_RSSI_RSRES2H3_t;

/* RSSI Result 2 High Byte Bit 2 */
typedef enum LF_RSSI_RSRES2H2_enum
{
    LF_RSSI_RSRES2H2_CLEAR_gc = (0x00), /* RSSI Result 2 High Byte Bit 2 - CLEAR */
    LF_RSSI_RSRES2H2_SET_gc   = (0x04), /* RSSI Result 2 High Byte Bit 2 - SET */
} LF_RSSI_RSRES2H2_t;

/* RSSI Result 2 High Byte Bit 1 */
typedef enum LF_RSSI_RSRES2H1_enum
{
    LF_RSSI_RSRES2H1_CLEAR_gc = (0x00), /* RSSI Result 2 High Byte Bit 1 - CLEAR */
    LF_RSSI_RSRES2H1_SET_gc   = (0x02), /* RSSI Result 2 High Byte Bit 1 - SET */
} LF_RSSI_RSRES2H1_t;

/* RSSI Result 2 High Byte Bit 0 */
typedef enum LF_RSSI_RSRES2H0_enum
{
    LF_RSSI_RSRES2H0_CLEAR_gc = (0x00), /* RSSI Result 2 High Byte Bit 0 - CLEAR */
    LF_RSSI_RSRES2H0_SET_gc   = (0x01), /* RSSI Result 2 High Byte Bit 0 - SET */
} LF_RSSI_RSRES2H0_t;

/* RSSI Result 2 Low Byte Bit 7 */
typedef enum LF_RSSI_RSRES2L7_enum
{
    LF_RSSI_RSRES2L7_CLEAR_gc = (0x00), /* RSSI Result 2 Low Byte Bit 7 - CLEAR */
    LF_RSSI_RSRES2L7_SET_gc   = (0x80), /* RSSI Result 2 Low Byte Bit 7 - SET */
} LF_RSSI_RSRES2L7_t;

/* RSSI Result 2 Low Byte Bit 6 */
typedef enum LF_RSSI_RSRES2L6_enum
{
    LF_RSSI_RSRES2L6_CLEAR_gc = (0x00), /* RSSI Result 2 Low Byte Bit 6 - CLEAR */
    LF_RSSI_RSRES2L6_SET_gc   = (0x40), /* RSSI Result 2 Low Byte Bit 6 - SET */
} LF_RSSI_RSRES2L6_t;

/* RSSI Result 2 Low Byte Bit 5 */
typedef enum LF_RSSI_RSRES2L5_enum
{
    LF_RSSI_RSRES2L5_CLEAR_gc = (0x00), /* RSSI Result 2 Low Byte Bit 5 - CLEAR */
    LF_RSSI_RSRES2L5_SET_gc   = (0x20), /* RSSI Result 2 Low Byte Bit 5 - SET */
} LF_RSSI_RSRES2L5_t;

/* RSSI Result 2 Low Byte Bit 4 */
typedef enum LF_RSSI_RSRES2L4_enum
{
    LF_RSSI_RSRES2L4_CLEAR_gc = (0x00), /* RSSI Result 2 Low Byte Bit 4 - CLEAR */
    LF_RSSI_RSRES2L4_SET_gc   = (0x10), /* RSSI Result 2 Low Byte Bit 4 - SET */
} LF_RSSI_RSRES2L4_t;

/* RSSI Result 2 Low Byte Bit 3 */
typedef enum LF_RSSI_RSRES2L3_enum
{
    LF_RSSI_RSRES2L3_CLEAR_gc = (0x00), /* RSSI Result 2 Low Byte Bit 3 - CLEAR */
    LF_RSSI_RSRES2L3_SET_gc   = (0x08), /* RSSI Result 2 Low Byte Bit 3 - SET */
} LF_RSSI_RSRES2L3_t;

/* RSSI Result 2 Low Byte Bit 2 */
typedef enum LF_RSSI_RSRES2L2_enum
{
    LF_RSSI_RSRES2L2_CLEAR_gc = (0x00), /* RSSI Result 2 Low Byte Bit 2 - CLEAR */
    LF_RSSI_RSRES2L2_SET_gc   = (0x04), /* RSSI Result 2 Low Byte Bit 2 - SET */
} LF_RSSI_RSRES2L2_t;

/* RSSI Result 2 Low Byte Bit 1 */
typedef enum LF_RSSI_RSRES2L1_enum
{
    LF_RSSI_RSRES2L1_CLEAR_gc = (0x00), /* RSSI Result 2 Low Byte Bit 1 - CLEAR */
    LF_RSSI_RSRES2L1_SET_gc   = (0x02), /* RSSI Result 2 Low Byte Bit 1 - SET */
} LF_RSSI_RSRES2L1_t;

/* RSSI Result 2 Low Byte Bit 0 */
typedef enum LF_RSSI_RSRES2L0_enum
{
    LF_RSSI_RSRES2L0_CLEAR_gc = (0x00), /* RSSI Result 2 Low Byte Bit 0 - CLEAR */
    LF_RSSI_RSRES2L0_SET_gc   = (0x01), /* RSSI Result 2 Low Byte Bit 0 - SET */
} LF_RSSI_RSRES2L0_t;

/* RSSI Result 3 High Byte Bit 7 */
typedef enum LF_RSSI_RSRES3H7_enum
{
    LF_RSSI_RSRES3H7_CLEAR_gc = (0x00), /* RSSI Result 3 High Byte Bit 7 - CLEAR */
    LF_RSSI_RSRES3H7_SET_gc   = (0x80), /* RSSI Result 3 High Byte Bit 7 - SET */
} LF_RSSI_RSRES3H7_t;

/* RSSI Result 3 High Byte Bit 6 */
typedef enum LF_RSSI_RSRES3H6_enum
{
    LF_RSSI_RSRES3H6_CLEAR_gc = (0x00), /* RSSI Result 3 High Byte Bit 6 - CLEAR */
    LF_RSSI_RSRES3H6_SET_gc   = (0x40), /* RSSI Result 3 High Byte Bit 6 - SET */
} LF_RSSI_RSRES3H6_t;

/* RSSI Result 3 High Byte Bit 5 */
typedef enum LF_RSSI_RSRES3H5_enum
{
    LF_RSSI_RSRES3H5_CLEAR_gc = (0x00), /* RSSI Result 3 High Byte Bit 5 - CLEAR */
    LF_RSSI_RSRES3H5_SET_gc   = (0x20), /* RSSI Result 3 High Byte Bit 5 - SET */
} LF_RSSI_RSRES3H5_t;

/* RSSI Result 3 High Byte Bit 4 */
typedef enum LF_RSSI_RSRES3H4_enum
{
    LF_RSSI_RSRES3H4_CLEAR_gc = (0x00), /* RSSI Result 3 High Byte Bit 4 - CLEAR */
    LF_RSSI_RSRES3H4_SET_gc   = (0x10), /* RSSI Result 3 High Byte Bit 4 - SET */
} LF_RSSI_RSRES3H4_t;

/* RSSI Result 3 High Byte Bit 3 */
typedef enum LF_RSSI_RSRES3H3_enum
{
    LF_RSSI_RSRES3H3_CLEAR_gc = (0x00), /* RSSI Result 3 High Byte Bit 3 - CLEAR */
    LF_RSSI_RSRES3H3_SET_gc   = (0x08), /* RSSI Result 3 High Byte Bit 3 - SET */
} LF_RSSI_RSRES3H3_t;

/* RSSI Result 3 High Byte Bit 2 */
typedef enum LF_RSSI_RSRES3H2_enum
{
    LF_RSSI_RSRES3H2_CLEAR_gc = (0x00), /* RSSI Result 3 High Byte Bit 2 - CLEAR */
    LF_RSSI_RSRES3H2_SET_gc   = (0x04), /* RSSI Result 3 High Byte Bit 2 - SET */
} LF_RSSI_RSRES3H2_t;

/* RSSI Result 3 High Byte Bit 1 */
typedef enum LF_RSSI_RSRES3H1_enum
{
    LF_RSSI_RSRES3H1_CLEAR_gc = (0x00), /* RSSI Result 3 High Byte Bit 1 - CLEAR */
    LF_RSSI_RSRES3H1_SET_gc   = (0x02), /* RSSI Result 3 High Byte Bit 1 - SET */
} LF_RSSI_RSRES3H1_t;

/* RSSI Result 3 High Byte Bit 0 */
typedef enum LF_RSSI_RSRES3H0_enum
{
    LF_RSSI_RSRES3H0_CLEAR_gc = (0x00), /* RSSI Result 3 High Byte Bit 0 - CLEAR */
    LF_RSSI_RSRES3H0_SET_gc   = (0x01), /* RSSI Result 3 High Byte Bit 0 - SET */
} LF_RSSI_RSRES3H0_t;

/* RSSI Result 3 Low Byte Bit 7 */
typedef enum LF_RSSI_RSRES3L7_enum
{
    LF_RSSI_RSRES3L7_CLEAR_gc = (0x00), /* RSSI Result 3 Low Byte Bit 7 - CLEAR */
    LF_RSSI_RSRES3L7_SET_gc   = (0x80), /* RSSI Result 3 Low Byte Bit 7 - SET */
} LF_RSSI_RSRES3L7_t;

/* RSSI Result 3 Low Byte Bit 6 */
typedef enum LF_RSSI_RSRES3L6_enum
{
    LF_RSSI_RSRES3L6_CLEAR_gc = (0x00), /* RSSI Result 3 Low Byte Bit 6 - CLEAR */
    LF_RSSI_RSRES3L6_SET_gc   = (0x40), /* RSSI Result 3 Low Byte Bit 6 - SET */
} LF_RSSI_RSRES3L6_t;

/* RSSI Result 3 Low Byte Bit 5 */
typedef enum LF_RSSI_RSRES3L5_enum
{
    LF_RSSI_RSRES3L5_CLEAR_gc = (0x00), /* RSSI Result 3 Low Byte Bit 5 - CLEAR */
    LF_RSSI_RSRES3L5_SET_gc   = (0x20), /* RSSI Result 3 Low Byte Bit 5 - SET */
} LF_RSSI_RSRES3L5_t;

/* RSSI Result 3 Low Byte Bit 4 */
typedef enum LF_RSSI_RSRES3L4_enum
{
    LF_RSSI_RSRES3L4_CLEAR_gc = (0x00), /* RSSI Result 3 Low Byte Bit 4 - CLEAR */
    LF_RSSI_RSRES3L4_SET_gc   = (0x10), /* RSSI Result 3 Low Byte Bit 4 - SET */
} LF_RSSI_RSRES3L4_t;

/* RSSI Result 3 Low Byte Bit 3 */
typedef enum LF_RSSI_RSRES3L3_enum
{
    LF_RSSI_RSRES3L3_CLEAR_gc = (0x00), /* RSSI Result 3 Low Byte Bit 3 - CLEAR */
    LF_RSSI_RSRES3L3_SET_gc   = (0x08), /* RSSI Result 3 Low Byte Bit 3 - SET */
} LF_RSSI_RSRES3L3_t;

/* RSSI Result 3 Low Byte Bit 2 */
typedef enum LF_RSSI_RSRES3L2_enum
{
    LF_RSSI_RSRES3L2_CLEAR_gc = (0x00), /* RSSI Result 3 Low Byte Bit 2 - CLEAR */
    LF_RSSI_RSRES3L2_SET_gc   = (0x04), /* RSSI Result 3 Low Byte Bit 2 - SET */
} LF_RSSI_RSRES3L2_t;

/* RSSI Result 3 Low Byte Bit 1 */
typedef enum LF_RSSI_RSRES3L1_enum
{
    LF_RSSI_RSRES3L1_CLEAR_gc = (0x00), /* RSSI Result 3 Low Byte Bit 1 - CLEAR */
    LF_RSSI_RSRES3L1_SET_gc   = (0x02), /* RSSI Result 3 Low Byte Bit 1 - SET */
} LF_RSSI_RSRES3L1_t;

/* RSSI Result 3 Low Byte Bit 0 */
typedef enum LF_RSSI_RSRES3L0_enum
{
    LF_RSSI_RSRES3L0_CLEAR_gc = (0x00), /* RSSI Result 3 Low Byte Bit 0 - CLEAR */
    LF_RSSI_RSRES3L0_SET_gc   = (0x01), /* RSSI Result 3 Low Byte Bit 0 - SET */
} LF_RSSI_RSRES3L0_t;

/* RSSI Result 4 High Byte Bit 7 */
typedef enum LF_RSSI_RSRES4H7_enum
{
    LF_RSSI_RSRES4H7_CLEAR_gc = (0x00), /* RSSI Result 4 High Byte Bit 7 - CLEAR */
    LF_RSSI_RSRES4H7_SET_gc   = (0x80), /* RSSI Result 4 High Byte Bit 7 - SET */
} LF_RSSI_RSRES4H7_t;

/* RSSI Result 4 High Byte Bit 6 */
typedef enum LF_RSSI_RSRES4H6_enum
{
    LF_RSSI_RSRES4H6_CLEAR_gc = (0x00), /* RSSI Result 4 High Byte Bit 6 - CLEAR */
    LF_RSSI_RSRES4H6_SET_gc   = (0x40), /* RSSI Result 4 High Byte Bit 6 - SET */
} LF_RSSI_RSRES4H6_t;

/* RSSI Result 4 High Byte Bit 5 */
typedef enum LF_RSSI_RSRES4H5_enum
{
    LF_RSSI_RSRES4H5_CLEAR_gc = (0x00), /* RSSI Result 4 High Byte Bit 5 - CLEAR */
    LF_RSSI_RSRES4H5_SET_gc   = (0x20), /* RSSI Result 4 High Byte Bit 5 - SET */
} LF_RSSI_RSRES4H5_t;

/* RSSI Result 4 High Byte Bit 4 */
typedef enum LF_RSSI_RSRES4H4_enum
{
    LF_RSSI_RSRES4H4_CLEAR_gc = (0x00), /* RSSI Result 4 High Byte Bit 4 - CLEAR */
    LF_RSSI_RSRES4H4_SET_gc   = (0x10), /* RSSI Result 4 High Byte Bit 4 - SET */
} LF_RSSI_RSRES4H4_t;

/* RSSI Result 4 High Byte Bit 3 */
typedef enum LF_RSSI_RSRES4H3_enum
{
    LF_RSSI_RSRES4H3_CLEAR_gc = (0x00), /* RSSI Result 4 High Byte Bit 3 - CLEAR */
    LF_RSSI_RSRES4H3_SET_gc   = (0x08), /* RSSI Result 4 High Byte Bit 3 - SET */
} LF_RSSI_RSRES4H3_t;

/* RSSI Result 4 High Byte Bit 2 */
typedef enum LF_RSSI_RSRES4H2_enum
{
    LF_RSSI_RSRES4H2_CLEAR_gc = (0x00), /* RSSI Result 4 High Byte Bit 2 - CLEAR */
    LF_RSSI_RSRES4H2_SET_gc   = (0x04), /* RSSI Result 4 High Byte Bit 2 - SET */
} LF_RSSI_RSRES4H2_t;

/* RSSI Result 4 High Byte Bit 1 */
typedef enum LF_RSSI_RSRES4H1_enum
{
    LF_RSSI_RSRES4H1_CLEAR_gc = (0x00), /* RSSI Result 4 High Byte Bit 1 - CLEAR */
    LF_RSSI_RSRES4H1_SET_gc   = (0x02), /* RSSI Result 4 High Byte Bit 1 - SET */
} LF_RSSI_RSRES4H1_t;

/* RSSI Result 4 High Byte Bit 0 */
typedef enum LF_RSSI_RSRES4H0_enum
{
    LF_RSSI_RSRES4H0_CLEAR_gc = (0x00), /* RSSI Result 4 High Byte Bit 0 - CLEAR */
    LF_RSSI_RSRES4H0_SET_gc   = (0x01), /* RSSI Result 4 High Byte Bit 0 - SET */
} LF_RSSI_RSRES4H0_t;

/* RSSI Result 4 Low Byte Bit 7 */
typedef enum LF_RSSI_RSRES4L7_enum
{
    LF_RSSI_RSRES4L7_CLEAR_gc = (0x00), /* RSSI Result 4 Low Byte Bit 7 - CLEAR */
    LF_RSSI_RSRES4L7_SET_gc   = (0x80), /* RSSI Result 4 Low Byte Bit 7 - SET */
} LF_RSSI_RSRES4L7_t;

/* RSSI Result 4 Low Byte Bit 6 */
typedef enum LF_RSSI_RSRES4L6_enum
{
    LF_RSSI_RSRES4L6_CLEAR_gc = (0x00), /* RSSI Result 4 Low Byte Bit 6 - CLEAR */
    LF_RSSI_RSRES4L6_SET_gc   = (0x40), /* RSSI Result 4 Low Byte Bit 6 - SET */
} LF_RSSI_RSRES4L6_t;

/* RSSI Result 4 Low Byte Bit 5 */
typedef enum LF_RSSI_RSRES4L5_enum
{
    LF_RSSI_RSRES4L5_CLEAR_gc = (0x00), /* RSSI Result 4 Low Byte Bit 5 - CLEAR */
    LF_RSSI_RSRES4L5_SET_gc   = (0x20), /* RSSI Result 4 Low Byte Bit 5 - SET */
} LF_RSSI_RSRES4L5_t;

/* RSSI Result 4 Low Byte Bit 4 */
typedef enum LF_RSSI_RSRES4L4_enum
{
    LF_RSSI_RSRES4L4_CLEAR_gc = (0x00), /* RSSI Result 4 Low Byte Bit 4 - CLEAR */
    LF_RSSI_RSRES4L4_SET_gc   = (0x10), /* RSSI Result 4 Low Byte Bit 4 - SET */
} LF_RSSI_RSRES4L4_t;

/* RSSI Result 4 Low Byte Bit 3 */
typedef enum LF_RSSI_RSRES4L3_enum
{
    LF_RSSI_RSRES4L3_CLEAR_gc = (0x00), /* RSSI Result 4 Low Byte Bit 3 - CLEAR */
    LF_RSSI_RSRES4L3_SET_gc   = (0x08), /* RSSI Result 4 Low Byte Bit 3 - SET */
} LF_RSSI_RSRES4L3_t;

/* RSSI Result 4 Low Byte Bit 2 */
typedef enum LF_RSSI_RSRES4L2_enum
{
    LF_RSSI_RSRES4L2_CLEAR_gc = (0x00), /* RSSI Result 4 Low Byte Bit 2 - CLEAR */
    LF_RSSI_RSRES4L2_SET_gc   = (0x04), /* RSSI Result 4 Low Byte Bit 2 - SET */
} LF_RSSI_RSRES4L2_t;

/* RSSI Result 4 Low Byte Bit 1 */
typedef enum LF_RSSI_RSRES4L1_enum
{
    LF_RSSI_RSRES4L1_CLEAR_gc = (0x00), /* RSSI Result 4 Low Byte Bit 1 - CLEAR */
    LF_RSSI_RSRES4L1_SET_gc   = (0x02), /* RSSI Result 4 Low Byte Bit 1 - SET */
} LF_RSSI_RSRES4L1_t;

/* RSSI Result 4 Low Byte Bit 0 */
typedef enum LF_RSSI_RSRES4L0_enum
{
    LF_RSSI_RSRES4L0_CLEAR_gc = (0x00), /* RSSI Result 4 Low Byte Bit 0 - CLEAR */
    LF_RSSI_RSRES4L0_SET_gc   = (0x01), /* RSSI Result 4 Low Byte Bit 0 - SET */
} LF_RSSI_RSRES4L0_t;

/* RSSI Sample Valid Bit */
typedef enum LF_RSSI_RSSVLD_enum
{
    LF_RSSI_RSSVLD_CLEAR_gc = (0x00), /* RSSI Sample Valid Bit - CLEAR */
    LF_RSSI_RSSVLD_SET_gc   = (0x02), /* RSSI Sample Valid Bit - SET */
} LF_RSSI_RSSVLD_t;

/* RSSI Ready Bit */
typedef enum LF_RSSI_RSRDY_enum
{
    LF_RSSI_RSRDY_CLEAR_gc = (0x00), /* RSSI Ready Bit - CLEAR */
    LF_RSSI_RSRDY_SET_gc   = (0x01), /* RSSI Ready Bit - SET */
} LF_RSSI_RSRDY_t;

/* RSSI SRC Step Bit 1 */
typedef enum LF_RSSI_SRCSTEP1_enum
{
    LF_RSSI_SRCSTEP1_CLEAR_gc = (0x00), /* RSSI SRC Step Bit 1 - CLEAR */
    LF_RSSI_SRCSTEP1_SET_gc   = (0x80), /* RSSI SRC Step Bit 1 - SET */
} LF_RSSI_SRCSTEP1_t;

/* RSSI SRC Step Bit 0 */
typedef enum LF_RSSI_SRCSTEP0_enum
{
    LF_RSSI_SRCSTEP0_CLEAR_gc = (0x00), /* RSSI SRC Step Bit 0 - CLEAR */
    LF_RSSI_SRCSTEP0_SET_gc   = (0x40), /* RSSI SRC Step Bit 0 - SET */
} LF_RSSI_SRCSTEP0_t;

/* RSSI SRC Clear Bit */
typedef enum LF_RSSI_SRCCLR_enum
{
    LF_RSSI_SRCCLR_CLEAR_gc = (0x00), /* RSSI SRC Clear Bit - CLEAR */
    LF_RSSI_SRCCLR_SET_gc   = (0x10), /* RSSI SRC Clear Bit - SET */
} LF_RSSI_SRCCLR_t;

/* RSSI SRC Minimum Value Bit 1 */
typedef enum LF_RSSI_SRCMIN1_enum
{
    LF_RSSI_SRCMIN1_CLEAR_gc = (0x00), /* RSSI SRC Minimum Value Bit 1 - CLEAR */
    LF_RSSI_SRCMIN1_SET_gc   = (0x08), /* RSSI SRC Minimum Value Bit 1 - SET */
} LF_RSSI_SRCMIN1_t;

/* RSSI SRC Minimum Value Bit 0 */
typedef enum LF_RSSI_SRCMIN0_enum
{
    LF_RSSI_SRCMIN0_CLEAR_gc = (0x00), /* RSSI SRC Minimum Value Bit 0 - CLEAR */
    LF_RSSI_SRCMIN0_SET_gc   = (0x04), /* RSSI SRC Minimum Value Bit 0 - SET */
} LF_RSSI_SRCMIN0_t;

/* RSSI SRC Calibration Mode Bit 1 */
typedef enum LF_RSSI_SRCMODE1_enum
{
    LF_RSSI_SRCMODE1_CLEAR_gc = (0x00), /* RSSI SRC Calibration Mode Bit 1 - CLEAR */
    LF_RSSI_SRCMODE1_SET_gc   = (0x02), /* RSSI SRC Calibration Mode Bit 1 - SET */
} LF_RSSI_SRCMODE1_t;

/* RSSI SRC Calibration Mode Bit 0 */
typedef enum LF_RSSI_SRCMODE0_enum
{
    LF_RSSI_SRCMODE0_CLEAR_gc = (0x00), /* RSSI SRC Calibration Mode Bit 0 - CLEAR */
    LF_RSSI_SRCMODE0_SET_gc   = (0x01), /* RSSI SRC Calibration Mode Bit 0 - SET */
} LF_RSSI_SRCMODE0_t;

/* Sign Detection Channel 1 vs 2 Result Bit 7 */
typedef enum LF_RSSI_SD12RR7_enum
{
    LF_RSSI_SD12RR7_CLEAR_gc = (0x00), /* Sign Detection Channel 1 vs 2 Result Bit 7 - CLEAR */
    LF_RSSI_SD12RR7_SET_gc   = (0x80), /* Sign Detection Channel 1 vs 2 Result Bit 7 - SET */
} LF_RSSI_SD12RR7_t;

/* Sign Detection Channel 1 vs 2 Result Bit 6 */
typedef enum LF_RSSI_SD12RR6_enum
{
    LF_RSSI_SD12RR6_CLEAR_gc = (0x00), /* Sign Detection Channel 1 vs 2 Result Bit 6 - CLEAR */
    LF_RSSI_SD12RR6_SET_gc   = (0x40), /* Sign Detection Channel 1 vs 2 Result Bit 6 - SET */
} LF_RSSI_SD12RR6_t;

/* Sign Detection Channel 1 vs 2 Result Bit 5 */
typedef enum LF_RSSI_SD12RR5_enum
{
    LF_RSSI_SD12RR5_CLEAR_gc = (0x00), /* Sign Detection Channel 1 vs 2 Result Bit 5 - CLEAR */
    LF_RSSI_SD12RR5_SET_gc   = (0x20), /* Sign Detection Channel 1 vs 2 Result Bit 5 - SET */
} LF_RSSI_SD12RR5_t;

/* Sign Detection Channel 1 vs 2 Result Bit 4 */
typedef enum LF_RSSI_SD12RR4_enum
{
    LF_RSSI_SD12RR4_CLEAR_gc = (0x00), /* Sign Detection Channel 1 vs 2 Result Bit 4 - CLEAR */
    LF_RSSI_SD12RR4_SET_gc   = (0x10), /* Sign Detection Channel 1 vs 2 Result Bit 4 - SET */
} LF_RSSI_SD12RR4_t;

/* Sign Detection Channel 1 vs 2 Result Bit 3 */
typedef enum LF_RSSI_SD12RR3_enum
{
    LF_RSSI_SD12RR3_CLEAR_gc = (0x00), /* Sign Detection Channel 1 vs 2 Result Bit 3 - CLEAR */
    LF_RSSI_SD12RR3_SET_gc   = (0x08), /* Sign Detection Channel 1 vs 2 Result Bit 3 - SET */
} LF_RSSI_SD12RR3_t;

/* Sign Detection Channel 1 vs 2 Result Bit 2 */
typedef enum LF_RSSI_SD12RR2_enum
{
    LF_RSSI_SD12RR2_CLEAR_gc = (0x00), /* Sign Detection Channel 1 vs 2 Result Bit 2 - CLEAR */
    LF_RSSI_SD12RR2_SET_gc   = (0x04), /* Sign Detection Channel 1 vs 2 Result Bit 2 - SET */
} LF_RSSI_SD12RR2_t;

/* Sign Detection Channel 1 vs 2 Result Bit 1 */
typedef enum LF_RSSI_SD12RR1_enum
{
    LF_RSSI_SD12RR1_CLEAR_gc = (0x00), /* Sign Detection Channel 1 vs 2 Result Bit 1 - CLEAR */
    LF_RSSI_SD12RR1_SET_gc   = (0x02), /* Sign Detection Channel 1 vs 2 Result Bit 1 - SET */
} LF_RSSI_SD12RR1_t;

/* Sign Detection Channel 1 vs 2 Result Bit 0 */
typedef enum LF_RSSI_SD12RR0_enum
{
    LF_RSSI_SD12RR0_CLEAR_gc = (0x00), /* Sign Detection Channel 1 vs 2 Result Bit 0 - CLEAR */
    LF_RSSI_SD12RR0_SET_gc   = (0x01), /* Sign Detection Channel 1 vs 2 Result Bit 0 - SET */
} LF_RSSI_SD12RR0_t;

/* Sign Detection Channel 1 vs 3 Result Bit 7 */
typedef enum LF_RSSI_SD13RR7_enum
{
    LF_RSSI_SD13RR7_CLEAR_gc = (0x00), /* Sign Detection Channel 1 vs 3 Result Bit 7 - CLEAR */
    LF_RSSI_SD13RR7_SET_gc   = (0x80), /* Sign Detection Channel 1 vs 3 Result Bit 7 - SET */
} LF_RSSI_SD13RR7_t;

/* Sign Detection Channel 1 vs 3 Result Bit 6 */
typedef enum LF_RSSI_SD13RR6_enum
{
    LF_RSSI_SD13RR6_CLEAR_gc = (0x00), /* Sign Detection Channel 1 vs 3 Result Bit 6 - CLEAR */
    LF_RSSI_SD13RR6_SET_gc   = (0x40), /* Sign Detection Channel 1 vs 3 Result Bit 6 - SET */
} LF_RSSI_SD13RR6_t;

/* Sign Detection Channel 1 vs 3 Result Bit 5 */
typedef enum LF_RSSI_SD13RR5_enum
{
    LF_RSSI_SD13RR5_CLEAR_gc = (0x00), /* Sign Detection Channel 1 vs 3 Result Bit 5 - CLEAR */
    LF_RSSI_SD13RR5_SET_gc   = (0x20), /* Sign Detection Channel 1 vs 3 Result Bit 5 - SET */
} LF_RSSI_SD13RR5_t;

/* Sign Detection Channel 1 vs 3 Result Bit 4 */
typedef enum LF_RSSI_SD13RR4_enum
{
    LF_RSSI_SD13RR4_CLEAR_gc = (0x00), /* Sign Detection Channel 1 vs 3 Result Bit 4 - CLEAR */
    LF_RSSI_SD13RR4_SET_gc   = (0x10), /* Sign Detection Channel 1 vs 3 Result Bit 4 - SET */
} LF_RSSI_SD13RR4_t;

/* Sign Detection Channel 1 vs 3 Result Bit 3 */
typedef enum LF_RSSI_SD13RR3_enum
{
    LF_RSSI_SD13RR3_CLEAR_gc = (0x00), /* Sign Detection Channel 1 vs 3 Result Bit 3 - CLEAR */
    LF_RSSI_SD13RR3_SET_gc   = (0x08), /* Sign Detection Channel 1 vs 3 Result Bit 3 - SET */
} LF_RSSI_SD13RR3_t;

/* Sign Detection Channel 1 vs 3 Result Bit 2 */
typedef enum LF_RSSI_SD13RR2_enum
{
    LF_RSSI_SD13RR2_CLEAR_gc = (0x00), /* Sign Detection Channel 1 vs 3 Result Bit 2 - CLEAR */
    LF_RSSI_SD13RR2_SET_gc   = (0x04), /* Sign Detection Channel 1 vs 3 Result Bit 2 - SET */
} LF_RSSI_SD13RR2_t;

/* Sign Detection Channel 1 vs 3 Result Bit 1 */
typedef enum LF_RSSI_SD13RR1_enum
{
    LF_RSSI_SD13RR1_CLEAR_gc = (0x00), /* Sign Detection Channel 1 vs 3 Result Bit 1 - CLEAR */
    LF_RSSI_SD13RR1_SET_gc   = (0x02), /* Sign Detection Channel 1 vs 3 Result Bit 1 - SET */
} LF_RSSI_SD13RR1_t;

/* Sign Detection Channel 1 vs 3 Result Bit 0 */
typedef enum LF_RSSI_SD13RR0_enum
{
    LF_RSSI_SD13RR0_CLEAR_gc = (0x00), /* Sign Detection Channel 1 vs 3 Result Bit 0 - CLEAR */
    LF_RSSI_SD13RR0_SET_gc   = (0x01), /* Sign Detection Channel 1 vs 3 Result Bit 0 - SET */
} LF_RSSI_SD13RR0_t;

/* Sign Detection Channel 2 vs 3 Result Bit 7 */
typedef enum LF_RSSI_SD23RR7_enum
{
    LF_RSSI_SD23RR7_CLEAR_gc = (0x00), /* Sign Detection Channel 2 vs 3 Result Bit 7 - CLEAR */
    LF_RSSI_SD23RR7_SET_gc   = (0x80), /* Sign Detection Channel 2 vs 3 Result Bit 7 - SET */
} LF_RSSI_SD23RR7_t;

/* Sign Detection Channel 2 vs 3 Result Bit 6 */
typedef enum LF_RSSI_SD23RR6_enum
{
    LF_RSSI_SD23RR6_CLEAR_gc = (0x00), /* Sign Detection Channel 2 vs 3 Result Bit 6 - CLEAR */
    LF_RSSI_SD23RR6_SET_gc   = (0x40), /* Sign Detection Channel 2 vs 3 Result Bit 6 - SET */
} LF_RSSI_SD23RR6_t;

/* Sign Detection Channel 2 vs 3 Result Bit 5 */
typedef enum LF_RSSI_SD23RR5_enum
{
    LF_RSSI_SD23RR5_CLEAR_gc = (0x00), /* Sign Detection Channel 2 vs 3 Result Bit 5 - CLEAR */
    LF_RSSI_SD23RR5_SET_gc   = (0x20), /* Sign Detection Channel 2 vs 3 Result Bit 5 - SET */
} LF_RSSI_SD23RR5_t;

/* Sign Detection Channel 2 vs 3 Result Bit 4 */
typedef enum LF_RSSI_SD23RR4_enum
{
    LF_RSSI_SD23RR4_CLEAR_gc = (0x00), /* Sign Detection Channel 2 vs 3 Result Bit 4 - CLEAR */
    LF_RSSI_SD23RR4_SET_gc   = (0x10), /* Sign Detection Channel 2 vs 3 Result Bit 4 - SET */
} LF_RSSI_SD23RR4_t;

/* Sign Detection Channel 2 vs 3 Result Bit 3 */
typedef enum LF_RSSI_SD23RR3_enum
{
    LF_RSSI_SD23RR3_CLEAR_gc = (0x00), /* Sign Detection Channel 2 vs 3 Result Bit 3 - CLEAR */
    LF_RSSI_SD23RR3_SET_gc   = (0x08), /* Sign Detection Channel 2 vs 3 Result Bit 3 - SET */
} LF_RSSI_SD23RR3_t;

/* Sign Detection Channel 2 vs 3 Result Bit 2 */
typedef enum LF_RSSI_SD23RR2_enum
{
    LF_RSSI_SD23RR2_CLEAR_gc = (0x00), /* Sign Detection Channel 2 vs 3 Result Bit 2 - CLEAR */
    LF_RSSI_SD23RR2_SET_gc   = (0x04), /* Sign Detection Channel 2 vs 3 Result Bit 2 - SET */
} LF_RSSI_SD23RR2_t;

/* Sign Detection Channel 2 vs 3 Result Bit 1 */
typedef enum LF_RSSI_SD23RR1_enum
{
    LF_RSSI_SD23RR1_CLEAR_gc = (0x00), /* Sign Detection Channel 2 vs 3 Result Bit 1 - CLEAR */
    LF_RSSI_SD23RR1_SET_gc   = (0x02), /* Sign Detection Channel 2 vs 3 Result Bit 1 - SET */
} LF_RSSI_SD23RR1_t;

/* Sign Detection Channel 2 vs 3 Result Bit 0 */
typedef enum LF_RSSI_SD23RR0_enum
{
    LF_RSSI_SD23RR0_CLEAR_gc = (0x00), /* Sign Detection Channel 2 vs 3 Result Bit 0 - CLEAR */
    LF_RSSI_SD23RR0_SET_gc   = (0x01), /* Sign Detection Channel 2 vs 3 Result Bit 0 - SET */
} LF_RSSI_SD23RR0_t;

/* Sign Detection 360 Degree Result Bit 7 */
typedef enum LF_RSSI_SD360R7_enum
{
    LF_RSSI_SD360R7_CLEAR_gc = (0x00), /* Sign Detection 360 Degree Result Bit 7 - CLEAR */
    LF_RSSI_SD360R7_SET_gc   = (0x80), /* Sign Detection 360 Degree Result Bit 7 - SET */
} LF_RSSI_SD360R7_t;

/* Sign Detection 360 Degree Result Bit 6 */
typedef enum LF_RSSI_SD360R6_enum
{
    LF_RSSI_SD360R6_CLEAR_gc = (0x00), /* Sign Detection 360 Degree Result Bit 6 - CLEAR */
    LF_RSSI_SD360R6_SET_gc   = (0x40), /* Sign Detection 360 Degree Result Bit 6 - SET */
} LF_RSSI_SD360R6_t;

/* Sign Detection 360 Degree Result Bit 5 */
typedef enum LF_RSSI_SD360R5_enum
{
    LF_RSSI_SD360R5_CLEAR_gc = (0x00), /* Sign Detection 360 Degree Result Bit 5 - CLEAR */
    LF_RSSI_SD360R5_SET_gc   = (0x20), /* Sign Detection 360 Degree Result Bit 5 - SET */
} LF_RSSI_SD360R5_t;

/* Sign Detection 360 Degree Result Bit 4 */
typedef enum LF_RSSI_SD360R4_enum
{
    LF_RSSI_SD360R4_CLEAR_gc = (0x00), /* Sign Detection 360 Degree Result Bit 4 - CLEAR */
    LF_RSSI_SD360R4_SET_gc   = (0x10), /* Sign Detection 360 Degree Result Bit 4 - SET */
} LF_RSSI_SD360R4_t;

/* Sign Detection 360 Degree Result Bit 3 */
typedef enum LF_RSSI_SD360R3_enum
{
    LF_RSSI_SD360R3_CLEAR_gc = (0x00), /* Sign Detection 360 Degree Result Bit 3 - CLEAR */
    LF_RSSI_SD360R3_SET_gc   = (0x08), /* Sign Detection 360 Degree Result Bit 3 - SET */
} LF_RSSI_SD360R3_t;

/* Sign Detection 360 Degree Result Bit 2 */
typedef enum LF_RSSI_SD360R2_enum
{
    LF_RSSI_SD360R2_CLEAR_gc = (0x00), /* Sign Detection 360 Degree Result Bit 2 - CLEAR */
    LF_RSSI_SD360R2_SET_gc   = (0x04), /* Sign Detection 360 Degree Result Bit 2 - SET */
} LF_RSSI_SD360R2_t;

/* Sign Detection 360 Degree Result Bit 1 */
typedef enum LF_RSSI_SD360R1_enum
{
    LF_RSSI_SD360R1_CLEAR_gc = (0x00), /* Sign Detection 360 Degree Result Bit 1 - CLEAR */
    LF_RSSI_SD360R1_SET_gc   = (0x02), /* Sign Detection 360 Degree Result Bit 1 - SET */
} LF_RSSI_SD360R1_t;

/* Sign Detection 360 Degree Result Bit 0 */
typedef enum LF_RSSI_SD360R0_enum
{
    LF_RSSI_SD360R0_CLEAR_gc = (0x00), /* Sign Detection 360 Degree Result Bit 0 - CLEAR */
    LF_RSSI_SD360R0_SET_gc   = (0x01), /* Sign Detection 360 Degree Result Bit 0 - SET */
} LF_RSSI_SD360R0_t;

/*
--------------------------------------------------------------------------------
LF_TIMER - 
--------------------------------------------------------------------------------
*/

typedef struct LF_TIMER_struct
{
    register8_t rsv_0x00[53];  /* RESERVED REGISTER BLOCK */
    register8_t LTCMR;         /* LF Timer Control Mode Register */
    register8_t rsv_0x36[363]; /* RESERVED REGISTER BLOCK */
    register8_t LTCOR;         /* LF Timer Compare Register */
    register8_t rsv_0x1A2[4];  /* RESERVED REGISTER BLOCK */
    register8_t LTEMR;         /* LF Timer Event Mask Register */
} LF_TIMER_t;


/* LF Timer Enable */
typedef enum LF_TIMER_LTENA_enum
{
    LF_TIMER_LTENA_CLEAR_gc = (0x00), /* LF Timer Enable - CLEAR */
    LF_TIMER_LTENA_SET_gc   = (0x80), /* LF Timer Enable - SET */
} LF_TIMER_LTENA_t;

/* LF Timer Start Mode */
typedef enum LF_TIMER_LTSM_enum
{
    LF_TIMER_LTSM_CLEAR_gc = (0x00), /* LF Timer Start Mode - CLEAR */
    LF_TIMER_LTSM_SET_gc   = (0x40), /* LF Timer Start Mode - SET */
} LF_TIMER_LTSM_t;

/* LF Timer Continuous Mode */
typedef enum LF_TIMER_LTCM_enum
{
    LF_TIMER_LTCM_CLEAR_gc = (0x00), /* LF Timer Continuous Mode - CLEAR */
    LF_TIMER_LTCM_SET_gc   = (0x20), /* LF Timer Continuous Mode - SET */
} LF_TIMER_LTCM_t;

/* LF Timer Compare Interrupt Mask */
typedef enum LF_TIMER_LTCIM_enum
{
    LF_TIMER_LTCIM_CLEAR_gc = (0x00), /* LF Timer Compare Interrupt Mask - CLEAR */
    LF_TIMER_LTCIM_SET_gc   = (0x10), /* LF Timer Compare Interrupt Mask - SET */
} LF_TIMER_LTCIM_t;

/* LF Timer Compare Reset Mask */
typedef enum LF_TIMER_LTCRM_enum
{
    LF_TIMER_LTCRM_CLEAR_gc = (0x00), /* LF Timer Compare Reset Mask - CLEAR */
    LF_TIMER_LTCRM_SET_gc   = (0x08), /* LF Timer Compare Reset Mask - SET */
} LF_TIMER_LTCRM_t;

/* LF Timer Prescaler Select bit 2 */
typedef enum LF_TIMER_LTPS2_enum
{
    LF_TIMER_LTPS2_CLEAR_gc = (0x00), /* LF Timer Prescaler Select bit 2 - CLEAR */
    LF_TIMER_LTPS2_SET_gc   = (0x04), /* LF Timer Prescaler Select bit 2 - SET */
} LF_TIMER_LTPS2_t;

/* LF Timer Prescaler Select bit 1 */
typedef enum LF_TIMER_LTPS1_enum
{
    LF_TIMER_LTPS1_CLEAR_gc = (0x00), /* LF Timer Prescaler Select bit 1 - CLEAR */
    LF_TIMER_LTPS1_SET_gc   = (0x02), /* LF Timer Prescaler Select bit 1 - SET */
} LF_TIMER_LTPS1_t;

/* LF Timer Prescaler Select bit 0 */
typedef enum LF_TIMER_LTPS0_enum
{
    LF_TIMER_LTPS0_CLEAR_gc = (0x00), /* LF Timer Prescaler Select bit 0 - CLEAR */
    LF_TIMER_LTPS0_SET_gc   = (0x01), /* LF Timer Prescaler Select bit 0 - SET */
} LF_TIMER_LTPS0_t;

/* LF Timer Compare Flag */
typedef enum LF_TIMER_LTCOF_enum
{
    LF_TIMER_LTCOF_CLEAR_gc = (0x00), /* LF Timer Compare Flag - CLEAR */
    LF_TIMER_LTCOF_SET_gc   = (0x80), /* LF Timer Compare Flag - SET */
} LF_TIMER_LTCOF_t;

/* End OF telegram Event Mask */
typedef enum LF_TIMER_EOFEM_enum
{
    LF_TIMER_EOFEM_CLEAR_gc = (0x00), /* End OF telegram Event Mask - CLEAR */
    LF_TIMER_EOFEM_SET_gc   = (0x40), /* End OF telegram Event Mask - SET */
} LF_TIMER_EOFEM_t;

/* Fill Level reached Event Mask */
typedef enum LF_TIMER_FLEM_enum
{
    LF_TIMER_FLEM_CLEAR_gc = (0x00), /* Fill Level reached Event Mask - CLEAR */
    LF_TIMER_FLEM_SET_gc   = (0x20), /* Fill Level reached Event Mask - SET */
} LF_TIMER_FLEM_t;

/* Telegram Bit Length reached Event Mask */
typedef enum LF_TIMER_TBLEM_enum
{
    LF_TIMER_TBLEM_CLEAR_gc = (0x00), /* Telegram Bit Length reached Event Mask - CLEAR */
    LF_TIMER_TBLEM_SET_gc   = (0x10), /* Telegram Bit Length reached Event Mask - SET */
} LF_TIMER_TBLEM_t;

/* Data Frame end reached Event Mask */
typedef enum LF_TIMER_DFEM_enum
{
    LF_TIMER_DFEM_CLEAR_gc = (0x00), /* Data Frame end reached Event Mask - CLEAR */
    LF_TIMER_DFEM_SET_gc   = (0x08), /* Data Frame end reached Event Mask - SET */
} LF_TIMER_DFEM_t;

/* Identifier Frame Event Mask */
typedef enum LF_TIMER_IDFEM_enum
{
    LF_TIMER_IDFEM_CLEAR_gc = (0x00), /* Identifier Frame Event Mask - CLEAR */
    LF_TIMER_IDFEM_SET_gc   = (0x04), /* Identifier Frame Event Mask - SET */
} LF_TIMER_IDFEM_t;

/* ID1 Event Mask */
typedef enum LF_TIMER_ID1EM_enum
{
    LF_TIMER_ID1EM_CLEAR_gc = (0x00), /* ID1 Event Mask - CLEAR */
    LF_TIMER_ID1EM_SET_gc   = (0x02), /* ID1 Event Mask - SET */
} LF_TIMER_ID1EM_t;

/* ID0 Event Mask */
typedef enum LF_TIMER_ID0EM_enum
{
    LF_TIMER_ID0EM_CLEAR_gc = (0x00), /* ID0 Event Mask - CLEAR */
    LF_TIMER_ID0EM_SET_gc   = (0x01), /* ID0 Event Mask - SET */
} LF_TIMER_ID0EM_t;

/*
--------------------------------------------------------------------------------
LF_TRANSPONDER - 
--------------------------------------------------------------------------------
*/

typedef struct LF_TRANSPONDER_struct
{
    register8_t rsv_0x00[44];  /* RESERVED REGISTER BLOCK */
    register8_t TPCR2;         /* Transponder Control 2 Register */
    register8_t TPFR;          /* Transponder Flag Register */
    register8_t rsv_0x2E[43];  /* RESERVED REGISTER BLOCK */
    register8_t TPSR;          /* Transponder Status Register */
    register8_t rsv_0x5A[267]; /* RESERVED REGISTER BLOCK */
    register8_t TPCR1;         /* Transponder Control Register 1 */
    register8_t TPIMR;         /* Transponder Interrupt Mask Register */
    register8_t TPDCR1;        /* Transponder Decoder Comparator Register 1 */
    register8_t TPDCR2;        /* Transponder Decoder Comparator Register 2 */
    register8_t TPDCR3;        /* Transponder Decoder Comparator Register 3 */
    register8_t TPDCR4;        /* Transponder Decoder Comparator Register 4 */
    register8_t TPDCR5;        /* Transponder Decoder Comparator Register 5 */
    register8_t TPECR1;        /* Transponder Encoder Comparator Register 1 */
    register8_t TPECR2;        /* Transponder Encoder Comparator Register 2 */
    register8_t TPECR3;        /* Transponder Encoder Comparator Register 3 */
    register8_t TPECR4;        /* Transponder Encoder Comparator Register 4 */
    register8_t TPECMR;        /* Transponder Encoder Mode Register */
    register8_t TPCR3;         /* Transponder Control Register 3 */
    register8_t TPCR4;         /* Transponder Control Register 4 */
    register8_t TPCR5;         /* Transponder Control Register 5 */
} LF_TRANSPONDER_t;


/* Transponder Mode */
typedef enum LF_TRANSPONDER_TPMODE_enum
{
    LF_TRANSPONDER_TPMODE_CLEAR_gc = (0x00), /* Transponder Mode - CLEAR */
    LF_TRANSPONDER_TPMODE_SET_gc   = (0x80), /* Transponder Mode - SET */
} LF_TRANSPONDER_TPMODE_t;

/* Transponder Decoder Field Clock Prescaler value */
typedef enum LF_TRANSPONDER_TPDFCP_enum
{
    LF_TRANSPONDER_TPDFCP_VAL_0x00_gc = (0x00<<5), /* Field Clock / 1 */
    LF_TRANSPONDER_TPDFCP_VAL_0x01_gc = (0x01<<5), /* Field Clock / 1 */
    LF_TRANSPONDER_TPDFCP_VAL_0x02_gc = (0x02<<5), /* Field Clock / 2 */
    LF_TRANSPONDER_TPDFCP_VAL_0x03_gc = (0x03<<5), /* Field Clock / 4 */
} LF_TRANSPONDER_TPDFCP_t;

/* Transponder Bit Rate */
typedef enum LF_TRANSPONDER_TPBR_enum
{
    LF_TRANSPONDER_TPBR_CLEAR_gc = (0x00), /* Transponder Bit Rate - CLEAR */
    LF_TRANSPONDER_TPBR_SET_gc   = (0x10), /* Transponder Bit Rate - SET */
} LF_TRANSPONDER_TPBR_t;

/* Transponder Quadrature Pulse Length Operation Modulation */
typedef enum LF_TRANSPONDER_TPQPLM_enum
{
    LF_TRANSPONDER_TPQPLM_CLEAR_gc = (0x00), /* Transponder Quadrature Pulse Length Operation Modulation - CLEAR */
    LF_TRANSPONDER_TPQPLM_SET_gc   = (0x04), /* Transponder Quadrature Pulse Length Operation Modulation - SET */
} LF_TRANSPONDER_TPQPLM_t;

/* Transponder watch dog value for No Field timeout (with SRC clk) */
typedef enum LF_TRANSPONDER_TPWDLV_enum
{
    LF_TRANSPONDER_TPWDLV_VAL_0x00_gc = (0x00<<5), /* 1.024 ms */
    LF_TRANSPONDER_TPWDLV_VAL_0x01_gc = (0x01<<5), /* 2.048 ms */
    LF_TRANSPONDER_TPWDLV_VAL_0x02_gc = (0x02<<5), /* 3.072 ms */
    LF_TRANSPONDER_TPWDLV_VAL_0x03_gc = (0x03<<5), /* 4.096 ms */
} LF_TRANSPONDER_TPWDLV_t;

/* Transponder No Field Timeout enable */
typedef enum LF_TRANSPONDER_TPNFTO_enum
{
    LF_TRANSPONDER_TPNFTO_CLEAR_gc = (0x00), /* Transponder No Field Timeout enable - CLEAR */
    LF_TRANSPONDER_TPNFTO_SET_gc   = (0x10), /* Transponder No Field Timeout enable - SET */
} LF_TRANSPONDER_TPNFTO_t;

/* Transponder Disable */
typedef enum LF_TRANSPONDER_TPD_enum
{
    LF_TRANSPONDER_TPD_CLEAR_gc = (0x00), /* Transponder Disable - CLEAR */
    LF_TRANSPONDER_TPD_SET_gc   = (0x08), /* Transponder Disable - SET */
} LF_TRANSPONDER_TPD_t;

/* Transponder Power Switch Disable */
typedef enum LF_TRANSPONDER_TPPSD_enum
{
    LF_TRANSPONDER_TPPSD_CLEAR_gc = (0x00), /* Transponder Power Switch Disable - CLEAR */
    LF_TRANSPONDER_TPPSD_SET_gc   = (0x04), /* Transponder Power Switch Disable - SET */
} LF_TRANSPONDER_TPPSD_t;

/* Transponder Modulation */
typedef enum LF_TRANSPONDER_TPMOD_enum
{
    LF_TRANSPONDER_TPMOD_CLEAR_gc = (0x00), /* Transponder Modulation - CLEAR */
    LF_TRANSPONDER_TPMOD_SET_gc   = (0x02), /* Transponder Modulation - SET */
} LF_TRANSPONDER_TPMOD_t;

/* Transponder Mode Acknowledge */
typedef enum LF_TRANSPONDER_TPMA_enum
{
    LF_TRANSPONDER_TPMA_CLEAR_gc = (0x00), /* Transponder Mode Acknowledge - CLEAR */
    LF_TRANSPONDER_TPMA_SET_gc   = (0x01), /* Transponder Mode Acknowledge - SET */
} LF_TRANSPONDER_TPMA_t;

/* Transponder Reception Continuous Damping */
typedef enum LF_TRANSPONDER_TPRCD_enum
{
    LF_TRANSPONDER_TPRCD_CLEAR_gc = (0x00), /* Transponder Reception Continuous Damping - CLEAR */
    LF_TRANSPONDER_TPRCD_SET_gc   = (0x20), /* Transponder Reception Continuous Damping - SET */
} LF_TRANSPONDER_TPRCD_t;

/* Transponder Transmit Listen Window */
typedef enum LF_TRANSPONDER_TPTLIW_enum
{
    LF_TRANSPONDER_TPTLIW_CLEAR_gc = (0x00), /* Transponder Transmit Listen Window - CLEAR */
    LF_TRANSPONDER_TPTLIW_SET_gc   = (0x04), /* Transponder Transmit Listen Window - SET */
} LF_TRANSPONDER_TPTLIW_t;

/* Transponder Receive Data */
typedef enum LF_TRANSPONDER_TPRD_enum
{
    LF_TRANSPONDER_TPRD_CLEAR_gc = (0x00), /* Transponder Receive Data - CLEAR */
    LF_TRANSPONDER_TPRD_SET_gc   = (0x02), /* Transponder Receive Data - SET */
} LF_TRANSPONDER_TPRD_t;

/* Transponder Transmit Data */
typedef enum LF_TRANSPONDER_TPTD_enum
{
    LF_TRANSPONDER_TPTD_CLEAR_gc = (0x00), /* Transponder Transmit Data - CLEAR */
    LF_TRANSPONDER_TPTD_SET_gc   = (0x01), /* Transponder Transmit Data - SET */
} LF_TRANSPONDER_TPTD_t;

/* Transponder Battery Charge Mode */
typedef enum LF_TRANSPONDER_TPBCM_enum
{
    LF_TRANSPONDER_TPBCM_CLEAR_gc = (0x00), /* Transponder Battery Charge Mode - CLEAR */
    LF_TRANSPONDER_TPBCM_SET_gc   = (0x10), /* Transponder Battery Charge Mode - SET */
} LF_TRANSPONDER_TPBCM_t;

/* Transponder Battery Charge Current Select */
#define LF_TRANSPONDER_TPCR4_TPBCCS_gc(x) (x & 0x0F)

/* Transponder Modulation Damping Select */
#define LF_TRANSPONDER_TPCR5_TPMD_gc(x) ((x<<4) & 0x70)

/* Transponder Modulation Undamped Level Select */
typedef enum LF_TRANSPONDER_TPMUD_enum
{
    LF_TRANSPONDER_TPMUD_VAL_0x00_gc = (0x00), /* 5.0 V */
    LF_TRANSPONDER_TPMUD_VAL_0x01_gc = (0x01), /* 5.4 V */
    LF_TRANSPONDER_TPMUD_VAL_0x02_gc = (0x02), /* 5.8 V */
    LF_TRANSPONDER_TPMUD_VAL_0x03_gc = (0x03), /* 6.2 V */
    LF_TRANSPONDER_TPMUD_VAL_0x04_gc = (0x04), /* 6.6 V */
    LF_TRANSPONDER_TPMUD_VAL_0x05_gc = (0x05), /* 7.0 V */
    LF_TRANSPONDER_TPMUD_VAL_0x07_gc = (0x07), /* Up to OVP */
} LF_TRANSPONDER_TPMUD_t;

/* Transponder Encoder Mode 4 */
typedef enum LF_TRANSPONDER_TPECM4_enum
{
    LF_TRANSPONDER_TPECM4_VAL_0x00_gc = (0x00<<6), /* Manchester */
    LF_TRANSPONDER_TPECM4_VAL_0x01_gc = (0x01<<6), /* Biphase */
    LF_TRANSPONDER_TPECM4_VAL_0x02_gc = (0x02<<6), /* NRZ */
    LF_TRANSPONDER_TPECM4_VAL_0x03_gc = (0x03<<6), /* Manchester */
} LF_TRANSPONDER_TPECM4_t;

/* Transponder Encoder Mode 3 */
typedef enum LF_TRANSPONDER_TPECM3_enum
{
    LF_TRANSPONDER_TPECM3_VAL_0x00_gc = (0x00<<4), /* Manchester */
    LF_TRANSPONDER_TPECM3_VAL_0x01_gc = (0x01<<4), /* Biphase */
    LF_TRANSPONDER_TPECM3_VAL_0x02_gc = (0x02<<4), /* NRZ */
    LF_TRANSPONDER_TPECM3_VAL_0x03_gc = (0x03<<4), /* Manchester */
} LF_TRANSPONDER_TPECM3_t;

/* Transponder Encoder Mode 2 */
typedef enum LF_TRANSPONDER_TPECM2_enum
{
    LF_TRANSPONDER_TPECM2_VAL_0x00_gc = (0x00<<2), /* Manchester */
    LF_TRANSPONDER_TPECM2_VAL_0x01_gc = (0x01<<2), /* Biphase */
    LF_TRANSPONDER_TPECM2_VAL_0x02_gc = (0x02<<2), /* NRZ */
    LF_TRANSPONDER_TPECM2_VAL_0x03_gc = (0x03<<2), /* Manchester */
} LF_TRANSPONDER_TPECM2_t;

/* Transponder Encoder Mode 1 */
typedef enum LF_TRANSPONDER_TPECM1_enum
{
    LF_TRANSPONDER_TPECM1_VAL_0x00_gc = (0x00), /* Manchester */
    LF_TRANSPONDER_TPECM1_VAL_0x01_gc = (0x01), /* Biphase */
    LF_TRANSPONDER_TPECM1_VAL_0x02_gc = (0x02), /* NRZ */
    LF_TRANSPONDER_TPECM1_VAL_0x03_gc = (0x03), /* Manchester */
} LF_TRANSPONDER_TPECM1_t;

/* Transponder Bit Error Flag */
typedef enum LF_TRANSPONDER_TPBERF_enum
{
    LF_TRANSPONDER_TPBERF_CLEAR_gc = (0x00), /* Transponder Bit Error Flag - CLEAR */
    LF_TRANSPONDER_TPBERF_SET_gc   = (0x08), /* Transponder Bit Error Flag - SET */
} LF_TRANSPONDER_TPBERF_t;

/* Transponder No Field Timeout Flag */
typedef enum LF_TRANSPONDER_TPNFTF_enum
{
    LF_TRANSPONDER_TPNFTF_CLEAR_gc = (0x00), /* Transponder No Field Timeout Flag - CLEAR */
    LF_TRANSPONDER_TPNFTF_SET_gc   = (0x04), /* Transponder No Field Timeout Flag - SET */
} LF_TRANSPONDER_TPNFTF_t;

/* Transponder Field Timeout Flag */
typedef enum LF_TRANSPONDER_TPFTF_enum
{
    LF_TRANSPONDER_TPFTF_CLEAR_gc = (0x00), /* Transponder Field Timeout Flag - CLEAR */
    LF_TRANSPONDER_TPFTF_SET_gc   = (0x02), /* Transponder Field Timeout Flag - SET */
} LF_TRANSPONDER_TPFTF_t;

/* Transponder Flag */
typedef enum LF_TRANSPONDER_TPF_enum
{
    LF_TRANSPONDER_TPF_CLEAR_gc = (0x00), /* Transponder Flag - CLEAR */
    LF_TRANSPONDER_TPF_SET_gc   = (0x01), /* Transponder Flag - SET */
} LF_TRANSPONDER_TPF_t;

/* Transponder Bit Error Interrupt Mask */
typedef enum LF_TRANSPONDER_TPBERIM_enum
{
    LF_TRANSPONDER_TPBERIM_CLEAR_gc = (0x00), /* Transponder Bit Error Interrupt Mask - CLEAR */
    LF_TRANSPONDER_TPBERIM_SET_gc   = (0x08), /* Transponder Bit Error Interrupt Mask - SET */
} LF_TRANSPONDER_TPBERIM_t;

/* Transponder No Field Timeout Interrupt Mask */
typedef enum LF_TRANSPONDER_TPNFTIM_enum
{
    LF_TRANSPONDER_TPNFTIM_CLEAR_gc = (0x00), /* Transponder No Field Timeout Interrupt Mask - CLEAR */
    LF_TRANSPONDER_TPNFTIM_SET_gc   = (0x04), /* Transponder No Field Timeout Interrupt Mask - SET */
} LF_TRANSPONDER_TPNFTIM_t;

/* Transponder Field Timeout Interrupt Mask */
typedef enum LF_TRANSPONDER_TPFTIM_enum
{
    LF_TRANSPONDER_TPFTIM_CLEAR_gc = (0x00), /* Transponder Field Timeout Interrupt Mask - CLEAR */
    LF_TRANSPONDER_TPFTIM_SET_gc   = (0x02), /* Transponder Field Timeout Interrupt Mask - SET */
} LF_TRANSPONDER_TPFTIM_t;

/* Transponder Interrupt Mask */
typedef enum LF_TRANSPONDER_TPIM_enum
{
    LF_TRANSPONDER_TPIM_CLEAR_gc = (0x00), /* Transponder Interrupt Mask - CLEAR */
    LF_TRANSPONDER_TPIM_SET_gc   = (0x01), /* Transponder Interrupt Mask - SET */
} LF_TRANSPONDER_TPIM_t;

/* Transponder Battery Charge OK */
typedef enum LF_TRANSPONDER_TPBCOK_enum
{
    LF_TRANSPONDER_TPBCOK_CLEAR_gc = (0x00), /* Transponder Battery Charge OK - CLEAR */
    LF_TRANSPONDER_TPBCOK_SET_gc   = (0x08), /* Transponder Battery Charge OK - SET */
} LF_TRANSPONDER_TPBCOK_t;

/* Transponder Power Switch */
typedef enum LF_TRANSPONDER_TPPSW_enum
{
    LF_TRANSPONDER_TPPSW_CLEAR_gc = (0x00), /* Transponder Power Switch - CLEAR */
    LF_TRANSPONDER_TPPSW_SET_gc   = (0x04), /* Transponder Power Switch - SET */
} LF_TRANSPONDER_TPPSW_t;

/* Transponder GAP Signal */
typedef enum LF_TRANSPONDER_TPGAP_enum
{
    LF_TRANSPONDER_TPGAP_CLEAR_gc = (0x00), /* Transponder GAP Signal - CLEAR */
    LF_TRANSPONDER_TPGAP_SET_gc   = (0x02), /* Transponder GAP Signal - SET */
} LF_TRANSPONDER_TPGAP_t;

/* Transponder Active */
typedef enum LF_TRANSPONDER_TPA_enum
{
    LF_TRANSPONDER_TPA_CLEAR_gc = (0x00), /* Transponder Active - CLEAR */
    LF_TRANSPONDER_TPA_SET_gc   = (0x01), /* Transponder Active - SET */
} LF_TRANSPONDER_TPA_t;

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
    register8_t rsv_0x00[35]; /* RESERVED REGISTER BLOCK */
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
    register8_t rsv_0x00[38]; /* RESERVED REGISTER BLOCK */
    register8_t PINC;         /* Port C Input Pins */
    register8_t DDRC;         /* Port C Data Direction Register */
    register8_t PORTC;        /* Port C Data Register */
} PORTC_t;


/*
--------------------------------------------------------------------------------
PORTD - 
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
    register8_t SPCR;          /* SPI control Register */
    register8_t SPSR;          /* SPI Status Register */
    register8_t SPDR;          /* SPI Data Register */
    register8_t rsv_0x4F[264]; /* RESERVED REGISTER BLOCK */
    register8_t SFFR;          /* SPI FIFO Fill Status Register */
    register8_t SFIR;          /* SPI FIFO Interrupt Register */
} SPI_t;


/* SPI Tx Buffer Clear */
typedef enum SPI_TFC_enum
{
    SPI_TFC_CLEAR_gc = (0x00), /* SPI Tx Buffer Clear - CLEAR */
    SPI_TFC_SET_gc   = (0x80), /* SPI Tx Buffer Clear - SET */
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

/* SPI Rx Buffer Interrupt Enable */
typedef enum SPI_STIE_enum
{
    SPI_STIE_CLEAR_gc = (0x00), /* SPI Rx Buffer Interrupt Enable - CLEAR */
    SPI_STIE_SET_gc   = (0x80), /* SPI Rx Buffer Interrupt Enable - SET */
} SPI_STIE_t;

/* Transmit Buffer Interrupt Level */
#define SPI_SFIR_TIL_gc(x) ((x<<4) & 0x70)

/* Rx Buffer Interrupt Enable */
typedef enum SPI_SRIE_enum
{
    SPI_SRIE_CLEAR_gc = (0x00), /* Rx Buffer Interrupt Enable - CLEAR */
    SPI_SRIE_SET_gc   = (0x08), /* Rx Buffer Interrupt Enable - SET */
} SPI_SRIE_t;

/* Receive Buffer Interrupt Level */
#define SPI_SFIR_RIL_gc(x) (x & 0x07)

/* Spe Interrupt Enable */
typedef enum SPI_SPIE_enum
{
    SPI_SPIE_CLEAR_gc = (0x00), /* Spe Interrupt Enable - CLEAR */
    SPI_SPIE_SET_gc   = (0x80), /* Spe Interrupt Enable - SET */
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
SPI2 - 
--------------------------------------------------------------------------------
*/

typedef struct SPI2_struct
{
    register8_t rsv_0x00[247]; /* RESERVED REGISTER BLOCK */
    register8_t SP2CR;         /* SPI2 control Register */
    register8_t SP2DR;         /* SPI2 Data Register */
    register8_t SP2SR;         /* SPI2 Status Register */
} SPI2_t;


/* Spi2 Interrupt Enable */
typedef enum SPI2_SP2IE_enum
{
    SPI2_SP2IE_CLEAR_gc = (0x00), /* Spi2 Interrupt Enable - CLEAR */
    SPI2_SP2IE_SET_gc   = (0x80), /* Spi2 Interrupt Enable - SET */
} SPI2_SP2IE_t;

/* SPI2 Enable */
typedef enum SPI2_SP2E_enum
{
    SPI2_SP2E_CLEAR_gc = (0x00), /* SPI2 Enable - CLEAR */
    SPI2_SP2E_SET_gc   = (0x40), /* SPI2 Enable - SET */
} SPI2_SP2E_t;

/* Data Order */
typedef enum SPI2_DORD2_enum
{
    SPI2_DORD2_CLEAR_gc = (0x00), /* Data Order - CLEAR */
    SPI2_DORD2_SET_gc   = (0x20), /* Data Order - SET */
} SPI2_DORD2_t;

/* Master/Slave Select */
typedef enum SPI2_MSTR2_enum
{
    SPI2_MSTR2_CLEAR_gc = (0x00), /* Master/Slave Select - CLEAR */
    SPI2_MSTR2_SET_gc   = (0x10), /* Master/Slave Select - SET */
} SPI2_MSTR2_t;

/* Clock Polarity */
typedef enum SPI2_CPOL2_enum
{
    SPI2_CPOL2_CLEAR_gc = (0x00), /* Clock Polarity - CLEAR */
    SPI2_CPOL2_SET_gc   = (0x08), /* Clock Polarity - SET */
} SPI2_CPOL2_t;

/* Clock Phase */
typedef enum SPI2_CPHA2_enum
{
    SPI2_CPHA2_CLEAR_gc = (0x00), /* Clock Phase - CLEAR */
    SPI2_CPHA2_SET_gc   = (0x04), /* Clock Phase - SET */
} SPI2_CPHA2_t;

/* SPI2 Clock Rate Select */
typedef enum SPI2_SP2R_enum
{
    SPI2_SP2R_VAL_0x00_gc = (0x00), /* clkio/4 */
    SPI2_SP2R_VAL_0x01_gc = (0x01), /* clkio/16 */
    SPI2_SP2R_VAL_0x02_gc = (0x02), /* clkio/64 */
    SPI2_SP2R_VAL_0x03_gc = (0x03), /* clkio/128 */
} SPI2_SP2R_t;

/* SPI2 Interrupt Flag */
typedef enum SPI2_SP2IF_enum
{
    SPI2_SP2IF_CLEAR_gc = (0x00), /* SPI2 Interrupt Flag - CLEAR */
    SPI2_SP2IF_SET_gc   = (0x80), /* SPI2 Interrupt Flag - SET */
} SPI2_SP2IF_t;

/* Write Colliion Flag */
typedef enum SPI2_WCOL2_enum
{
    SPI2_WCOL2_CLEAR_gc = (0x00), /* Write Colliion Flag - CLEAR */
    SPI2_WCOL2_SET_gc   = (0x40), /* Write Colliion Flag - SET */
} SPI2_WCOL2_t;

/* Double SPI2 Speed Bit */
typedef enum SPI2_SPI22X_enum
{
    SPI2_SPI22X_CLEAR_gc = (0x00), /* Double SPI2 Speed Bit - CLEAR */
    SPI2_SPI22X_SET_gc   = (0x01), /* Double SPI2 Speed Bit - SET */
} SPI2_SPI22X_t;

/*
--------------------------------------------------------------------------------
SSM - 
--------------------------------------------------------------------------------
*/

typedef struct SSM_struct
{
    register8_t rsv_0x00[226]; /* RESERVED REGISTER BLOCK */
    register8_t SSMCR;         /* SSM Control Register */
    register8_t rsv_0xE3;      /* RESERVED REGISTER */
    register8_t SSMFBR;        /* SSM Filter Bandwidth Register */
    register8_t SSMRR;         /* SSM Run Register */
    register8_t SSMSR;         /* SSM Status Register */
    register8_t SSMIFR;        /* SSM Interrupt Flag Register */
    register8_t SSMIMR;        /* SSM interrupt mask register */
    register8_t MSMSTR;        /* Master State Machine state register */
    register8_t SSMSTR;        /* SSM State Register */
    register8_t rsv_0xEB;      /* RESERVED REGISTER */
    register8_t MSMCR1;        /* Master State Machine Control Register 1 */
    register8_t MSMCR2;        /* Master State Machine Control Register 2 */
    register8_t MSMCR3;        /* Master State Machine Control Register 3 */
    register8_t MSMCR4;        /* Master State Machine Control Register 4 */
} SSM_t;


/* Master State Machine SubState Machine Select 0 */
typedef enum SSM_MSMSM0_enum
{
    SSM_MSMSM0_VAL_0x00_gc = (0x00), /* None/Stop */
    SSM_MSMSM0_VAL_0x01_gc = (0x01), /* PLL en */
    SSM_MSMSM0_VAL_0x02_gc = (0x02), /* PLL lock */
    SSM_MSMSM0_VAL_0x03_gc = (0x03), /* TX DSP enable */
    SSM_MSMSM0_VAL_0x04_gc = (0x04), /* TX DSP disable */
    SSM_MSMSM0_VAL_0x05_gc = (0x05), /* Send telegram */
    SSM_MSMSM0_VAL_0x06_gc = (0x06), /* Shut down */
    SSM_MSMSM0_VAL_0x07_gc = (0x07), /* VCO Tuning */
    SSM_MSMSM0_VAL_0x08_gc = (0x08), /* Antenna Tuning */
} SSM_MSMSM0_t;

/* Master State Machine SubState Machine Select 1 */
typedef enum SSM_MSMSM1_enum
{
    SSM_MSMSM1_VAL_0x00_gc = (0x00<<4), /* None/Stop */
    SSM_MSMSM1_VAL_0x01_gc = (0x01<<4), /* PLL en */
    SSM_MSMSM1_VAL_0x02_gc = (0x02<<4), /* PLL lock */
    SSM_MSMSM1_VAL_0x03_gc = (0x03<<4), /* TX DSP enable */
    SSM_MSMSM1_VAL_0x04_gc = (0x04<<4), /* TX DSP disable */
    SSM_MSMSM1_VAL_0x05_gc = (0x05<<4), /* Send telegram */
    SSM_MSMSM1_VAL_0x06_gc = (0x06<<4), /* Shut down */
    SSM_MSMSM1_VAL_0x07_gc = (0x07<<4), /* VCO Tuning */
    SSM_MSMSM1_VAL_0x08_gc = (0x08<<4), /* Antenna Tuning */
} SSM_MSMSM1_t;

/* Master State Machine SubState Machine Select 2 */
typedef enum SSM_MSMSM2_enum
{
    SSM_MSMSM2_VAL_0x00_gc = (0x00), /* None/Stop */
    SSM_MSMSM2_VAL_0x01_gc = (0x01), /* PLL en */
    SSM_MSMSM2_VAL_0x02_gc = (0x02), /* PLL lock */
    SSM_MSMSM2_VAL_0x03_gc = (0x03), /* TX DSP enable */
    SSM_MSMSM2_VAL_0x04_gc = (0x04), /* TX DSP disable */
    SSM_MSMSM2_VAL_0x05_gc = (0x05), /* Send telegram */
    SSM_MSMSM2_VAL_0x06_gc = (0x06), /* Shut down */
    SSM_MSMSM2_VAL_0x07_gc = (0x07), /* VCO Tuning */
    SSM_MSMSM2_VAL_0x08_gc = (0x08), /* Antenna Tuning */
} SSM_MSMSM2_t;

/* Master State Machine SubState Machine Select 3 */
typedef enum SSM_MSMSM3_enum
{
    SSM_MSMSM3_VAL_0x00_gc = (0x00<<4), /* None/Stop */
    SSM_MSMSM3_VAL_0x01_gc = (0x01<<4), /* PLL en */
    SSM_MSMSM3_VAL_0x02_gc = (0x02<<4), /* PLL lock */
    SSM_MSMSM3_VAL_0x03_gc = (0x03<<4), /* TX DSP enable */
    SSM_MSMSM3_VAL_0x04_gc = (0x04<<4), /* TX DSP disable */
    SSM_MSMSM3_VAL_0x05_gc = (0x05<<4), /* Send telegram */
    SSM_MSMSM3_VAL_0x06_gc = (0x06<<4), /* Shut down */
    SSM_MSMSM3_VAL_0x07_gc = (0x07<<4), /* VCO Tuning */
    SSM_MSMSM3_VAL_0x08_gc = (0x08<<4), /* Antenna Tuning */
} SSM_MSMSM3_t;

/* Master State Machine SubState Machine Select 4 */
typedef enum SSM_MSMSM4_enum
{
    SSM_MSMSM4_VAL_0x00_gc = (0x00), /* None/Stop */
    SSM_MSMSM4_VAL_0x01_gc = (0x01), /* PLL en */
    SSM_MSMSM4_VAL_0x02_gc = (0x02), /* PLL lock */
    SSM_MSMSM4_VAL_0x03_gc = (0x03), /* TX DSP enable */
    SSM_MSMSM4_VAL_0x04_gc = (0x04), /* TX DSP disable */
    SSM_MSMSM4_VAL_0x05_gc = (0x05), /* Send telegram */
    SSM_MSMSM4_VAL_0x06_gc = (0x06), /* Shut down */
    SSM_MSMSM4_VAL_0x07_gc = (0x07), /* VCO Tuning */
    SSM_MSMSM4_VAL_0x08_gc = (0x08), /* Antenna Tuning */
} SSM_MSMSM4_t;

/* Master State Machine SubState Machine Select 5 */
typedef enum SSM_MSMSM5_enum
{
    SSM_MSMSM5_VAL_0x00_gc = (0x00<<4), /* None/Stop */
    SSM_MSMSM5_VAL_0x01_gc = (0x01<<4), /* PLL en */
    SSM_MSMSM5_VAL_0x02_gc = (0x02<<4), /* PLL lock */
    SSM_MSMSM5_VAL_0x03_gc = (0x03<<4), /* TX DSP enable */
    SSM_MSMSM5_VAL_0x04_gc = (0x04<<4), /* TX DSP disable */
    SSM_MSMSM5_VAL_0x05_gc = (0x05<<4), /* Send telegram */
    SSM_MSMSM5_VAL_0x06_gc = (0x06<<4), /* Shut down */
    SSM_MSMSM5_VAL_0x07_gc = (0x07<<4), /* VCO Tuning */
    SSM_MSMSM5_VAL_0x08_gc = (0x08<<4), /* Antenna Tuning */
} SSM_MSMSM5_t;

/* Master State Machine SubState Machine Select 6 */
typedef enum SSM_MSMSM6_enum
{
    SSM_MSMSM6_VAL_0x00_gc = (0x00), /* None/Stop */
    SSM_MSMSM6_VAL_0x01_gc = (0x01), /* PLL en */
    SSM_MSMSM6_VAL_0x02_gc = (0x02), /* PLL lock */
    SSM_MSMSM6_VAL_0x03_gc = (0x03), /* TX DSP enable */
    SSM_MSMSM6_VAL_0x04_gc = (0x04), /* TX DSP disable */
    SSM_MSMSM6_VAL_0x05_gc = (0x05), /* Send telegram */
    SSM_MSMSM6_VAL_0x06_gc = (0x06), /* Shut down */
    SSM_MSMSM6_VAL_0x07_gc = (0x07), /* VCO Tuning */
    SSM_MSMSM6_VAL_0x08_gc = (0x08), /* Antenna Tuning */
} SSM_MSMSM6_t;

/* Master State Machine SubState Machine Select 7 */
typedef enum SSM_MSMSM7_enum
{
    SSM_MSMSM7_VAL_0x00_gc = (0x00<<4), /* None/Stop */
    SSM_MSMSM7_VAL_0x01_gc = (0x01<<4), /* PLL en */
    SSM_MSMSM7_VAL_0x02_gc = (0x02<<4), /* PLL lock */
    SSM_MSMSM7_VAL_0x03_gc = (0x03<<4), /* TX DSP enable */
    SSM_MSMSM7_VAL_0x04_gc = (0x04<<4), /* TX DSP disable */
    SSM_MSMSM7_VAL_0x05_gc = (0x05<<4), /* Send telegram */
    SSM_MSMSM7_VAL_0x06_gc = (0x06<<4), /* Shut down */
    SSM_MSMSM7_VAL_0x07_gc = (0x07<<4), /* VCO Tuning */
    SSM_MSMSM7_VAL_0x08_gc = (0x08<<4), /* Antenna Tuning */
} SSM_MSMSM7_t;

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

/* Sequencer State Machine PLL Lock Delay Time */
typedef enum SSM_SSMPLDT_enum
{
    SSM_SSMPLDT_CLEAR_gc = (0x00), /* Sequencer State Machine PLL Lock Delay Time - CLEAR */
    SSM_SSMPLDT_SET_gc   = (0x20), /* Sequencer State Machine PLL Lock Delay Time - SET */
} SSM_SSMPLDT_t;

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
    register8_t VMSCR;         /* Voltage Monitor Status and Control Register */
    register8_t rsv_0x4B[125]; /* RESERVED REGISTER BLOCK */
    register8_t RCTCAL;        /* RC oscillator Temperature Compensation register */
    register8_t rsv_0xC9[2];   /* RESERVED REGISTER BLOCK */
    register8_t SUPFR;         /* Supply Interrupt Flag Register */
    register8_t SUPCR;         /* Supply Control Register */
    register8_t SUPCA1;        /* Supply calibration register 1 */
    register8_t SUPCA2;        /* Supply calibration register 2 */
    register8_t SUPCA3;        /* Supply calibration register 3 */
    register8_t SUPCA4;        /* Supply calibration register 4 */
    register8_t CALRDY;        /* Calibration ready signature */
    register8_t rsv_0xD2[276]; /* RESERVED REGISTER BLOCK */
    register8_t VMCR;          /* Voltage Monitor Control Register */
    register8_t rsv_0x1E7;     /* RESERVED REGISTER */
    register8_t CALRDYLF;      /* Calibration ready signature LFVCC */
    register8_t rsv_0x1E9[10]; /* RESERVED REGISTER BLOCK */
    register8_t SUPCA5;        /* Supply calibration register 5 */
    register8_t SUPCA6;        /* Supply calibration register 6 */
    register8_t SUPCA7;        /* Supply calibration register 7 */
    register8_t SUPCA8;        /* Supply calibration register 8 */
    register8_t SUPCA9;        /* Supply calibration register 9 */
    register8_t SUPCA10;       /* Supply calibration register 10 */
    register8_t rsv_0x1F9[5];  /* RESERVED REGISTER BLOCK */
    register8_t PMTER;         /* Power Management Test Enable Register */
} SUP_t;


/* Disable MRC Oscillator Bandgap */
typedef enum SUP_DI_MRCBG_enum
{
    SUP_DI_MRCBG_CLEAR_gc = (0x00), /* Disable MRC Oscillator Bandgap - CLEAR */
    SUP_DI_MRCBG_SET_gc   = (0x10), /* Disable MRC Oscillator Bandgap - SET */
} SUP_DI_MRCBG_t;

/* Medium frequency RC Oscillator Temperature Compensation */
#define SUP_RCTCAL_MRCTC_gc(x) ((x<<1) & 0x0E)

/* FRC Oscillator Temperature Compensation bit */
typedef enum SUP_FRCTC_enum
{
    SUP_FRCTC_CLEAR_gc = (0x00), /* FRC Oscillator Temperature Compensation bit - CLEAR */
    SUP_FRCTC_SET_gc   = (0x01), /* FRC Oscillator Temperature Compensation bit - SET */
} SUP_FRCTC_t;

/* Power Amplifier Regulator Calibration */
#define SUP_SUPCA1_PVCAL_gc(x) ((x<<4) & 0xF0)

/* Power Amplifier Regulator Double Internal Current */
typedef enum SUP_PVDIC_enum
{
    SUP_PVDIC_CLEAR_gc = (0x00), /* Power Amplifier Regulator Double Internal Current - CLEAR */
    SUP_PVDIC_SET_gc   = (0x08), /* Power Amplifier Regulator Double Internal Current - SET */
} SUP_PVDIC_t;

/* Power Amplifier Voltage 2.2V */
typedef enum SUP_PV22_enum
{
    SUP_PV22_CLEAR_gc = (0x00), /* Power Amplifier Voltage 2.2V - CLEAR */
    SUP_PV22_SET_gc   = (0x04), /* Power Amplifier Voltage 2.2V - SET */
} SUP_PV22_t;

/* VREF voltage for LFVCC Brown-out-Detector */
#define SUP_SUPCA7_LFVCCBD_gc(x) ((x<<3) & 0x38)

/* LFVCC and DVCC Output Voltage Calibration */
#define SUP_SUPCA7_VCCCAL_gc(x) (x & 0x07)

/* VREF voltage for DVCC Brown-out-Detector */
#define SUP_SUPCA8_DVCCBD_gc(x) ((x<<3) & 0x38)

/* VSIG voltage for LFVCC Brown-out-Detector */
#define SUP_SUPCA8_VSWBD_gc(x) (x & 0x07)

/* Memory Voltage Regulator Enable */
typedef enum SUP_VMEMEN_enum
{
    SUP_VMEMEN_CLEAR_gc = (0x00), /* Memory Voltage Regulator Enable - CLEAR */
    SUP_VMEMEN_SET_gc   = (0x80), /* Memory Voltage Regulator Enable - SET */
} SUP_VMEMEN_t;

/* VMEM Reset Mask */
typedef enum SUP_VMRESM_enum
{
    SUP_VMRESM_CLEAR_gc = (0x00), /* VMEM Reset Mask - CLEAR */
    SUP_VMRESM_SET_gc   = (0x40), /* VMEM Reset Mask - SET */
} SUP_VMRESM_t;

/* DVCC High Current Mode Enable */
typedef enum SUP_DVHEN_enum
{
    SUP_DVHEN_CLEAR_gc = (0x00), /* DVCC High Current Mode Enable - CLEAR */
    SUP_DVHEN_SET_gc   = (0x20), /* DVCC High Current Mode Enable - SET */
} SUP_DVHEN_t;

/* AVCC Enable */
typedef enum SUP_AVEN_enum
{
    SUP_AVEN_CLEAR_gc = (0x00), /* AVCC Enable - CLEAR */
    SUP_AVEN_SET_gc   = (0x10), /* AVCC Enable - SET */
} SUP_AVEN_t;

/* AVCC Double Internal Current */
typedef enum SUP_AVDIC_enum
{
    SUP_AVDIC_CLEAR_gc = (0x00), /* AVCC Double Internal Current - CLEAR */
    SUP_AVDIC_SET_gc   = (0x08), /* AVCC Double Internal Current - SET */
} SUP_AVDIC_t;

/* Power amplifier Voltage supply Enable */
typedef enum SUP_PVEN_enum
{
    SUP_PVEN_CLEAR_gc = (0x00), /* Power amplifier Voltage supply Enable - CLEAR */
    SUP_PVEN_SET_gc   = (0x04), /* Power amplifier Voltage supply Enable - SET */
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

/* Voltage Monitor Range Select */
typedef enum SUP_VMRS_enum
{
    SUP_VMRS_CLEAR_gc = (0x00), /* Voltage Monitor Range Select - CLEAR */
    SUP_VMRS_SET_gc   = (0x80), /* Voltage Monitor Range Select - SET */
} SUP_VMRS_t;

/* Voltage Monitor Power Supply Select */
#define SUP_VMCR_VMPS_gc(x) ((x<<5) & 0x60)

/* Voltage Monitor Interrupt Mask */
typedef enum SUP_VMIM_enum
{
    SUP_VMIM_CLEAR_gc = (0x00), /* Voltage Monitor Interrupt Mask - CLEAR */
    SUP_VMIM_SET_gc   = (0x10), /* Voltage Monitor Interrupt Mask - SET */
} SUP_VMIM_t;

/* Voltage Monitor Level Select */
#define SUP_VMCR_VMLS_gc(x) (x & 0x0F)

/* Voltage Monitor Disable Hysteresis */
typedef enum SUP_VMDIH_enum
{
    SUP_VMDIH_CLEAR_gc = (0x00), /* Voltage Monitor Disable Hysteresis - CLEAR */
    SUP_VMDIH_SET_gc   = (0x02), /* Voltage Monitor Disable Hysteresis - SET */
} SUP_VMDIH_t;

/* Voltage Monitor Flag */
typedef enum SUP_VMF_enum
{
    SUP_VMF_CLEAR_gc = (0x00), /* Voltage Monitor Flag - CLEAR */
    SUP_VMF_SET_gc   = (0x01), /* Voltage Monitor Flag - SET */
} SUP_VMF_t;

/*
--------------------------------------------------------------------------------
TIMER0_WDT - 
--------------------------------------------------------------------------------
*/

typedef struct TIMER0_WDT_struct
{
    register8_t rsv_0x00[82];  /* RESERVED REGISTER BLOCK */
    register8_t T0IFR;         /* Timer0 Interrupt Flag Register */
    register8_t rsv_0x53[27];  /* RESERVED REGISTER BLOCK */
    register8_t WDTCR;         /* Watchdog Timer0 control Register */
    register8_t rsv_0x6F[243]; /* RESERVED REGISTER BLOCK */
    register8_t T0CR;          /* Timer0 Control Register */
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
typedef enum TIMER0_WDT_T0PS_enum
{
    TIMER0_WDT_T0PS_VAL_0x00_gc = (0x00), /* 0.256ms typ */
    TIMER0_WDT_T0PS_VAL_0x01_gc = (0x01), /* 1ms typ */
    TIMER0_WDT_T0PS_VAL_0x02_gc = (0x02), /* 8ms typ */
    TIMER0_WDT_T0PS_VAL_0x03_gc = (0x03), /* 0.5s typ */
    TIMER0_WDT_T0PS_VAL_0x04_gc = (0x04), /* 1s typ */
    TIMER0_WDT_T0PS_VAL_0x05_gc = (0x05), /* 8s typ */
    TIMER0_WDT_T0PS_VAL_0x06_gc = (0x06), /* 67s typ */
    TIMER0_WDT_T0PS_VAL_0x07_gc = (0x07), /* 134s typ */
} TIMER0_WDT_T0PS_t;

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
typedef enum TIMER0_WDT_WDPS_enum
{
    TIMER0_WDT_WDPS_VAL_0x00_gc = (0x00), /* 1ms typ (0.85ms min) */
    TIMER0_WDT_WDPS_VAL_0x01_gc = (0x01), /* 4ms typ (3.4ms min) */
    TIMER0_WDT_WDPS_VAL_0x02_gc = (0x02), /* 32ms typ (27ms min) */
    TIMER0_WDT_WDPS_VAL_0x03_gc = (0x03), /* 2.1s typ (1.75s min) */
    TIMER0_WDT_WDPS_VAL_0x04_gc = (0x04), /* 4.2s typ (3.5s min) */
    TIMER0_WDT_WDPS_VAL_0x05_gc = (0x05), /* 16.8s typ (14s min) */
    TIMER0_WDT_WDPS_VAL_0x06_gc = (0x06), /* 134s typ (110s min) */
    TIMER0_WDT_WDPS_VAL_0x07_gc = (0x07), /* 268s typ (220s min) */
} TIMER0_WDT_WDPS_t;

/*
--------------------------------------------------------------------------------
TIMER1 - 
--------------------------------------------------------------------------------
*/

typedef struct TIMER1_struct
{
    register8_t rsv_0x00[49];  /* RESERVED REGISTER BLOCK */
    register8_t T1CR;          /* Timer1 control Register */
    register8_t rsv_0x32[61];  /* RESERVED REGISTER BLOCK */
    register8_t T1CNT;         /* Timer1 Counter Register */
    register8_t T1COR;         /* Timer1 Compare Register */
    register8_t T1MR;          /* Timer1 Mode Register */
    register8_t T1IMR;         /* Timer1 Interrupt Mask Register */
    register8_t rsv_0x73[303]; /* RESERVED REGISTER BLOCK */
    register8_t T1IFR;         /* Timer1 Interrupt Flag Register */
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
typedef enum TIMER1_T1DC_enum
{
    TIMER1_T1DC_VAL_0x00_gc = (0x00<<6), /* Bypass */
    TIMER1_T1DC_VAL_0x01_gc = (0x01<<6), /* Duty cycle 1/1 (div 2) */
    TIMER1_T1DC_VAL_0x02_gc = (0x02<<6), /* Duty cycle 1/2 (div 3) */
    TIMER1_T1DC_VAL_0x03_gc = (0x03<<6), /* Duty cycle 1/3 (div 4) */
} TIMER1_T1DC_t;

/* Timer1 Prescaler Select */
#define TIMER1_T1MR_T1PS_gc(x) ((x<<2) & 0x3C)

/* Timer1 Clock Select */
typedef enum TIMER1_T1CS_enum
{
    TIMER1_T1CS_VAL_0x00_gc = (0x00), /* clk_src */
    TIMER1_T1CS_VAL_0x01_gc = (0x01), /* clk_frc */
    TIMER1_T1CS_VAL_0x02_gc = (0x02), /* clk_T */
    TIMER1_T1CS_VAL_0x03_gc = (0x03), /* clk_mrc */
} TIMER1_T1CS_t;

/*
--------------------------------------------------------------------------------
TIMER2 - 
--------------------------------------------------------------------------------
*/

typedef struct TIMER2_struct
{
    register8_t rsv_0x00[50];  /* RESERVED REGISTER BLOCK */
    register8_t T2CR;          /* Timer2 Control Register */
    register8_t rsv_0x33[64];  /* RESERVED REGISTER BLOCK */
    register8_t T2CNT;         /* Timer2 Counter Register */
    register8_t T2COR;         /* Timer2 Compare Register */
    register8_t T2MR;          /* Timer2 Mode Register */
    register8_t T2IMR;         /* Timer2 Interrupt Mask Register */
    register8_t rsv_0x77[226]; /* RESERVED REGISTER BLOCK */
    register8_t T2IFR;         /* Timer2 Interrupt Flag Register */
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
typedef enum TIMER2_T2DC_enum
{
    TIMER2_T2DC_VAL_0x00_gc = (0x00<<6), /* Bypass */
    TIMER2_T2DC_VAL_0x01_gc = (0x01<<6), /* Duty cycle 1/1 (div 2) */
    TIMER2_T2DC_VAL_0x02_gc = (0x02<<6), /* Duty cycle 1/2 (div 3) */
    TIMER2_T2DC_VAL_0x03_gc = (0x03<<6), /* Duty cycle 1/3 (div 4) */
} TIMER2_T2DC_t;

/* Timer2 Prescaler Select */
#define TIMER2_T2MR_T2PS_gc(x) ((x<<2) & 0x3C)

/* Timer2 Clock Select */
typedef enum TIMER2_T2CS_enum
{
    TIMER2_T2CS_VAL_0x00_gc = (0x00), /* clk_src */
    TIMER2_T2CS_VAL_0x01_gc = (0x01), /* clk_mrc */
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
    register8_t rsv_0x00[51];  /* RESERVED REGISTER BLOCK */
    register8_t T3CR;          /* Timer3 control Register */
    register8_t rsv_0x34[67];  /* RESERVED REGISTER BLOCK */
    _REGISTER16 (T3CNT);       /* Timer3 counter Register */
    register8_t rsv_0x78;      /* RESERVED REGISTER */
    _REGISTER16 (T3COR);       /* Timer3 compare Register */
    register8_t rsv_0x7A;      /* RESERVED REGISTER */
    _REGISTER16 (T3ICR);       /* Timer3 input capture Register */
    register8_t rsv_0x7C;      /* RESERVED REGISTER */
    register8_t T3MRA;         /* Timer3 mode Register */
    register8_t T3MRB;         /* Timer3 mode Register */
    register8_t T3IMR;         /* Timer3 interrupt mask Register */
    register8_t rsv_0x80[353]; /* RESERVED REGISTER BLOCK */
    register8_t T3IFR;         /* Timer3 interrupt flag Register */
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

/* Timer3 CaPture Reset Mask */
typedef enum TIMER3_T3CPRM_enum
{
    TIMER3_T3CPRM_CLEAR_gc = (0x00), /* Timer3 CaPture Reset Mask - CLEAR */
    TIMER3_T3CPRM_SET_gc   = (0x08), /* Timer3 CaPture Reset Mask - SET */
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

/* Timer3 Clock Select */
typedef enum TIMER3_T3CS_enum
{
    TIMER3_T3CS_VAL_0x00_gc = (0x00), /* clk_frc */
    TIMER3_T3CS_VAL_0x01_gc = (0x01), /* clk_T */
    TIMER3_T3CS_VAL_0x02_gc = (0x02), /* clk_xto4 */
    TIMER3_T3CS_VAL_0x03_gc = (0x03), /* clk_TEI */
} TIMER3_T3CS_t;

/* Timer3 Input Capture Select */
typedef enum TIMER3_T3ICS_enum
{
    TIMER3_T3ICS_VAL_0x00_gc = (0x00<<5), /* clk_T2 */
    TIMER3_T3ICS_VAL_0x01_gc = (0x01<<5), /* clk_T1 */
    TIMER3_T3ICS_VAL_0x02_gc = (0x02<<5), /* clk_T4 */
    TIMER3_T3ICS_VAL_0x03_gc = (0x03<<5), /* TICP */
    TIMER3_T3ICS_VAL_0x04_gc = (0x04<<5), /* LFES */
    TIMER3_T3ICS_VAL_0x05_gc = (0x05<<5), /* clk_src */
    TIMER3_T3ICS_VAL_0x06_gc = (0x06<<5), /* TPGAP */
} TIMER3_T3ICS_t;

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
    register8_t rsv_0x00[52];  /* RESERVED REGISTER BLOCK */
    register8_t T4CR;          /* Timer4 control Register */
    register8_t rsv_0x35[75];  /* RESERVED REGISTER BLOCK */
    _REGISTER16 (T4CNT);       /* Timer4 counter Register */
    register8_t rsv_0x81;      /* RESERVED REGISTER */
    _REGISTER16 (T4COR);       /* Timer4 compare Register */
    register8_t rsv_0x83;      /* RESERVED REGISTER */
    _REGISTER16 (T4ICR);       /* Timer4 input capture Register */
    register8_t rsv_0x85;      /* RESERVED REGISTER */
    register8_t T4MRA;         /* Timer4 mode Register */
    register8_t T4MRB;         /* Timer4 mode Register */
    register8_t T4IMR;         /* Timer4 interrupt mask Register */
    register8_t rsv_0x89[329]; /* RESERVED REGISTER BLOCK */
    register8_t T4IFR;         /* Timer4 interrupt flag Register */
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

/* Timer4 CaPture Reset Mask */
typedef enum TIMER4_T4CPRM_enum
{
    TIMER4_T4CPRM_CLEAR_gc = (0x00), /* Timer4 CaPture Reset Mask - CLEAR */
    TIMER4_T4CPRM_SET_gc   = (0x08), /* Timer4 CaPture Reset Mask - SET */
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

/* Timer4 Prescaler Select */
#define TIMER4_T4MRA_T4PS_gc(x) ((x<<2) & 0x1C)

/* Timer4 Clock Select */
typedef enum TIMER4_T4CS_enum
{
    TIMER4_T4CS_VAL_0x00_gc = (0x00), /* clk_src */
    TIMER4_T4CS_VAL_0x01_gc = (0x01), /* clk_T */
    TIMER4_T4CS_VAL_0x02_gc = (0x02), /* clk_mrc */
    TIMER4_T4CS_VAL_0x03_gc = (0x03), /* clk_frc */
} TIMER4_T4CS_t;

/* Timer4 Input Capture Select */
typedef enum TIMER4_T4ICS_enum
{
    TIMER4_T4ICS_VAL_0x00_gc = (0x00<<5), /* clk_T2 */
    TIMER4_T4ICS_VAL_0x01_gc = (0x01<<5), /* clk_T1 */
    TIMER4_T4ICS_VAL_0x02_gc = (0x02<<5), /* clk_T3 */
    TIMER4_T4ICS_VAL_0x03_gc = (0x03<<5), /* TICP */
    TIMER4_T4ICS_VAL_0x04_gc = (0x04<<5), /* LFES */
    TIMER4_T4ICS_VAL_0x05_gc = (0x05<<5), /* clk_src */
    TIMER4_T4ICS_VAL_0x06_gc = (0x06<<5), /* TPGAP */
} TIMER4_T4ICS_t;

/* Timer4 Capture Edge select */
typedef enum TIMER4_T4CE_enum
{
    TIMER4_T4CE_VAL_0x00_gc = (0x00<<3), /* disable */
    TIMER4_T4CE_VAL_0x01_gc = (0x01<<3), /* rising edge */
    TIMER4_T4CE_VAL_0x02_gc = (0x02<<3), /* falling edge */
    TIMER4_T4CE_VAL_0x03_gc = (0x03<<3), /* both edges */
} TIMER4_T4CE_t;

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
    register8_t rsv_0x00[137]; /* RESERVED REGISTER BLOCK */
    register8_t T5TEMP;        /* Timer5 Temp Register */
    _REGISTER16 (T5OCR);       /* Timer5 Output Compare Register */
    register8_t rsv_0x8B;      /* RESERVED REGISTER */
    register8_t T5CCR;         /* Timer5 Control Register */
    _REGISTER16 (T5CNT);       /* Timer5 Counter */
    register8_t rsv_0x8E;      /* RESERVED REGISTER */
    register8_t T5IMR;         /* Timer5 Interrupt Mask Register */
    register8_t rsv_0x90[83];  /* RESERVED REGISTER BLOCK */
    register8_t GTCCR;         /* General Timer/Counter Control Register */
    register8_t rsv_0xE4[241]; /* RESERVED REGISTER BLOCK */
    register8_t T5IFR;         /* Timer5 Interrupt Flag Register */
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
--------------------------------------------------------------------------------
TMO - 
--------------------------------------------------------------------------------
*/

typedef struct TMO_struct
{
    register8_t rsv_0x00[496]; /* RESERVED REGISTER BLOCK */
    register8_t TMOCR;         /* Timer Modulator Output Control Register */
} TMO_t;


/* Timer modulator Output 4 Port Interface Select */
typedef enum TMO_TO4PIS_enum
{
    TMO_TO4PIS_VAL_0x00_gc = (0x00<<6), /* Port D5 Data Register */
    TMO_TO4PIS_VAL_0x01_gc = (0x01<<6), /* M1 - Toggle Register Timer1 */
    TMO_TO4PIS_VAL_0x02_gc = (0x02<<6), /* M2 - Toggle Register Timer2 */
    TMO_TO4PIS_VAL_0x03_gc = (0x03<<6), /* M3 - Toggle Register Timer3 */
} TMO_TO4PIS_t;

/* Timer modulator Output 3 Port Interface Select */
typedef enum TMO_TO3PIS_enum
{
    TMO_TO3PIS_VAL_0x00_gc = (0x00<<4), /* Port D4 Data Register */
    TMO_TO3PIS_VAL_0x01_gc = (0x01<<4), /* M1 - Toggle Register Timer1 */
    TMO_TO3PIS_VAL_0x02_gc = (0x02<<4), /* M3 - Toggle Register Timer3 */
    TMO_TO3PIS_VAL_0x03_gc = (0x03<<4), /* M4 - Toggle Register Timer4 */
} TMO_TO3PIS_t;

/* Timer modulator Output 2 Port Interface Select */
typedef enum TMO_TO2PIS_enum
{
    TMO_TO2PIS_VAL_0x00_gc = (0x00<<2), /* Port D3 Data Register */
    TMO_TO2PIS_VAL_0x01_gc = (0x01<<2), /* M1 - Toggle Register Timer1 */
    TMO_TO2PIS_VAL_0x02_gc = (0x02<<2), /* M2 - Toggle Register Timer2 */
    TMO_TO2PIS_VAL_0x03_gc = (0x03<<2), /* M4 - Toggle Register Timer4 */
} TMO_TO2PIS_t;

/* Timer modulator Output 1 Port Interface Select */
typedef enum TMO_TO1PIS_enum
{
    TMO_TO1PIS_VAL_0x00_gc = (0x00), /* Port D2 Data Register */
    TMO_TO1PIS_VAL_0x01_gc = (0x01), /* M1 - Toggle Register Timer1 */
    TMO_TO1PIS_VAL_0x02_gc = (0x02), /* M2 - Toggle Register Timer2 */
    TMO_TO1PIS_VAL_0x03_gc = (0x03), /* M3 - Toggle Register Timer3 */
} TMO_TO1PIS_t;

/*
--------------------------------------------------------------------------------
TPLF_CAL - 
--------------------------------------------------------------------------------
*/

typedef struct TPLF_CAL_struct
{
    register8_t rsv_0x00[144]; /* RESERVED REGISTER BLOCK */
    register8_t LFCALR1;       /* LF Receiver Calibration Register 1 */
    register8_t LFCALR2;       /* LF Receiver Calibration Register 2 */
    register8_t LFCALR3;       /* LF Receiver Calibration Register 3 */
    register8_t LFCALR4;       /* LF Receiver Calibration Register 4 */
    register8_t LFCALR5;       /* LF Receiver Calibration Register 5 */
    register8_t LFCALR6;       /* LF Receiver Calibration Register 6 */
    register8_t LFCALR7;       /* LF Receiver Calibration Register 7 */
    register8_t LFCALR8;       /* LF Receiver Calibration Register 8 */
    register8_t LFCALR9;       /* LF Receiver Calibration Register 9 */
    register8_t LFCALR10;      /* LF Receiver Calibration Register 10 */
    register8_t LFCALR11;      /* LF Receiver Calibration Register 11 */
    register8_t LFCALR12;      /* LF Receiver Calibration Register 12 */
    register8_t LFCALR13;      /* LF Receiver Calibration Register 13 */
    register8_t LFCALR14;      /* LF Receiver Calibration Register 14 */
    register8_t LFCALR15;      /* LF Receiver Calibration Register 15 */
    register8_t LFCALR16;      /* LF Receiver Calibration Register 16 */
    register8_t LFCALR17;      /* LF Receiver Calibration Register 17 */
    register8_t LFCALR18;      /* LF Receiver Calibration Register 18 */
    register8_t LFCALR19;      /* LF Receiver Calibration Register 19 */
    register8_t LFCALR20;      /* LF Receiver Calibration Register 20 */
    register8_t LFCALR21;      /* LF Receiver Calibration Register 21 */
    register8_t LFCALR22;      /* LF Receiver Calibration Register 22 */
    register8_t LFCALR23;      /* LF Receiver Calibration Register 23 */
    register8_t LFCALR24;      /* LF Receiver Calibration Register 24 */
    register8_t LFCALR25;      /* LF Receiver Calibration Register 25 */
    register8_t LFCALR26;      /* LF Receiver Calibration Register 26 */
    register8_t LFCALR27;      /* LF Receiver Calibration Register 27 */
    register8_t LFCALR28;      /* LF Receiver Calibration Register 28 */
    register8_t LFCALR29;      /* LF Receiver Calibration Register 29 */
    register8_t LFCALR30;      /* LF Receiver Calibration Register 30 */
    register8_t LFCALR31;      /* LF Receiver Calibration Register 31 */
    register8_t LFCALR32;      /* LF Receiver Calibration Register 32 */
    register8_t LFCALR33;      /* LF Receiver Calibration Register 33 */
    register8_t LFCALR34;      /* LF Receiver Calibration Register 34 */
    register8_t LFCALR35;      /* LF Receiver Calibration Register 35 */
    register8_t LFCALR36;      /* LF Receiver Calibration Register 36 */
    register8_t LFCALR37;      /* LF Receiver Calibration Register 37 */
    register8_t LFCALR38;      /* LF Receiver Calibration Register 38 */
    register8_t LFCALR39;      /* LF Receiver Calibration Register 39 */
    register8_t LFCALR40;      /* LF Receiver Calibration Register 40 */
    register8_t LFCALR41;      /* LF Receiver Calibration Register 41 */
    register8_t LFCALR42;      /* LF Receiver Calibration Register 42 */
    register8_t LFCALR43;      /* LF Receiver Calibration Register 43 */
    register8_t LFCALR44;      /* LF Receiver Calibration Register 44 */
    register8_t LFCALR45;      /* LF Receiver Calibration Register 45 */
    register8_t LFCALR46;      /* LF Receiver Calibration Register 46 */
    register8_t LFCALR47;      /* LF Receiver Calibration Register 47 */
    register8_t LFCALR48;      /* LF Receiver Calibration Register 48 */
    register8_t LFCALR49;      /* LF Receiver Calibration Register 49 */
    register8_t LFCALR50;      /* LF Receiver Calibration Register 50 */
    register8_t LFCALR51;      /* LF Receiver Calibration Register 51 */
    register8_t LFCALR52;      /* LF Receiver Calibration Register 52 */
    register8_t LFCALR53;      /* LF Receiver Calibration Register 53 */
    register8_t rsv_0xC5[176]; /* RESERVED REGISTER BLOCK */
    register8_t TPCALR1;       /* Transponder Calibration Register 1 */
    register8_t TPCALR2;       /* Transponder Calibration Register 2 */
    register8_t TPCALR3;       /* Transponder Calibration Register 3 */
    register8_t TPCALR4;       /* Transponder Calibration Register 4 */
    register8_t TPCALR5;       /* Transponder Calibration Register 5 */
    register8_t TPCALR6;       /* Transponder Calibration Register 6 */
    register8_t TPCALR7;       /* Transponder Calibration Register 7 */
    register8_t TPCALR8;       /* Transponder Calibration Register 8 */
    register8_t TPCALR9;       /* Transponder Calibration Register 9 */
    register8_t TPCALR10;      /* Transponder Calibration Register 10 */
    register8_t rsv_0x17F[15]; /* RESERVED REGISTER BLOCK */
    register8_t LFCPR;         /* LF Receiver Calibration Protect Register */
    register8_t rsv_0x18F[98]; /* RESERVED REGISTER BLOCK */
    register8_t SRCCAL;        /* Slow RC oscillator calibration */
    register8_t SRCTCAL;       /* SRC oscillator Temperature Compensation register */
    register8_t rsv_0x1F3[6];  /* RESERVED REGISTER BLOCK */
    register8_t TPCALR11;      /* Transponder Calibration Register 11 */
    register8_t TPCALR12;      /* Transponder Calibration Register 12 */
    register8_t TPCALR13;      /* Transponder Calibration Register 13 */
    register8_t rsv_0x1FC[3];  /* RESERVED REGISTER BLOCK */
    register8_t SRCCALL;       /* Slow RC oscillator calibration LSB */
} TPLF_CAL_t;


/* Bandgap Calibration of VREF1 */
#define TPLF_CAL_LFCALR1_SEL150M_gc(x) ((x<<5) & 0xE0)

/* icomp_range_trim */
#define TPLF_CAL_LFCALR1_ICOMPRT_gc(x) ((x<<3) & 0x18)

/* lf_stim_trim_current */
#define TPLF_CAL_LFCALR1_LFSTC_gc(x) (x & 0x07)

/* trim_ikomp_data */
typedef enum TPLF_CAL_TIKOMPD_enum
{
    TPLF_CAL_TIKOMPD_CLEAR_gc = (0x00), /* trim_ikomp_data - CLEAR */
    TPLF_CAL_TIKOMPD_SET_gc   = (0x80), /* trim_ikomp_data - SET */
} TPLF_CAL_TIKOMPD_t;

/* lf_stim_res_mode */
typedef enum TPLF_CAL_LFSRM_enum
{
    TPLF_CAL_LFSRM_CLEAR_gc = (0x00), /* lf_stim_res_mode - CLEAR */
    TPLF_CAL_LFSRM_SET_gc   = (0x40), /* lf_stim_res_mode - SET */
} TPLF_CAL_LFSRM_t;

/* lf_stim_trim_res */
#define TPLF_CAL_LFCALR2_LFSTRES_gc(x) (x & 0x3F)

/* Trim coarse gain bit 15 */
typedef enum TPLF_CAL_TCGAIN27_enum
{
    TPLF_CAL_TCGAIN27_CLEAR_gc = (0x00), /* Trim coarse gain bit 15 - CLEAR */
    TPLF_CAL_TCGAIN27_SET_gc   = (0x80), /* Trim coarse gain bit 15 - SET */
} TPLF_CAL_TCGAIN27_t;

/* Trim coarse gain bit 14 */
typedef enum TPLF_CAL_TCGAIN26_enum
{
    TPLF_CAL_TCGAIN26_CLEAR_gc = (0x00), /* Trim coarse gain bit 14 - CLEAR */
    TPLF_CAL_TCGAIN26_SET_gc   = (0x40), /* Trim coarse gain bit 14 - SET */
} TPLF_CAL_TCGAIN26_t;

/* Trim coarse gain bit 13 */
typedef enum TPLF_CAL_TCGAIN25_enum
{
    TPLF_CAL_TCGAIN25_CLEAR_gc = (0x00), /* Trim coarse gain bit 13 - CLEAR */
    TPLF_CAL_TCGAIN25_SET_gc   = (0x20), /* Trim coarse gain bit 13 - SET */
} TPLF_CAL_TCGAIN25_t;

/* Trim coarse gain bit 12 */
typedef enum TPLF_CAL_TCGAIN24_enum
{
    TPLF_CAL_TCGAIN24_CLEAR_gc = (0x00), /* Trim coarse gain bit 12 - CLEAR */
    TPLF_CAL_TCGAIN24_SET_gc   = (0x10), /* Trim coarse gain bit 12 - SET */
} TPLF_CAL_TCGAIN24_t;

/* Trim coarse gain bit 11 */
typedef enum TPLF_CAL_TCGAIN23_enum
{
    TPLF_CAL_TCGAIN23_CLEAR_gc = (0x00), /* Trim coarse gain bit 11 - CLEAR */
    TPLF_CAL_TCGAIN23_SET_gc   = (0x08), /* Trim coarse gain bit 11 - SET */
} TPLF_CAL_TCGAIN23_t;

/* Trim coarse gain bit 10 */
typedef enum TPLF_CAL_TCGAIN22_enum
{
    TPLF_CAL_TCGAIN22_CLEAR_gc = (0x00), /* Trim coarse gain bit 10 - CLEAR */
    TPLF_CAL_TCGAIN22_SET_gc   = (0x04), /* Trim coarse gain bit 10 - SET */
} TPLF_CAL_TCGAIN22_t;

/* Trim coarse gain bit 9 */
typedef enum TPLF_CAL_TCGAIN21_enum
{
    TPLF_CAL_TCGAIN21_CLEAR_gc = (0x00), /* Trim coarse gain bit 9 - CLEAR */
    TPLF_CAL_TCGAIN21_SET_gc   = (0x02), /* Trim coarse gain bit 9 - SET */
} TPLF_CAL_TCGAIN21_t;

/* Trim coarse gain bit 8 */
typedef enum TPLF_CAL_TCGAIN20_enum
{
    TPLF_CAL_TCGAIN20_CLEAR_gc = (0x00), /* Trim coarse gain bit 8 - CLEAR */
    TPLF_CAL_TCGAIN20_SET_gc   = (0x01), /* Trim coarse gain bit 8 - SET */
} TPLF_CAL_TCGAIN20_t;

/* Trim coarse gain bit 23 */
typedef enum TPLF_CAL_TCGAIN37_enum
{
    TPLF_CAL_TCGAIN37_CLEAR_gc = (0x00), /* Trim coarse gain bit 23 - CLEAR */
    TPLF_CAL_TCGAIN37_SET_gc   = (0x80), /* Trim coarse gain bit 23 - SET */
} TPLF_CAL_TCGAIN37_t;

/* Trim coarse gain bit 22 */
typedef enum TPLF_CAL_TCGAIN36_enum
{
    TPLF_CAL_TCGAIN36_CLEAR_gc = (0x00), /* Trim coarse gain bit 22 - CLEAR */
    TPLF_CAL_TCGAIN36_SET_gc   = (0x40), /* Trim coarse gain bit 22 - SET */
} TPLF_CAL_TCGAIN36_t;

/* Trim coarse gain bit 21 */
typedef enum TPLF_CAL_TCGAIN35_enum
{
    TPLF_CAL_TCGAIN35_CLEAR_gc = (0x00), /* Trim coarse gain bit 21 - CLEAR */
    TPLF_CAL_TCGAIN35_SET_gc   = (0x20), /* Trim coarse gain bit 21 - SET */
} TPLF_CAL_TCGAIN35_t;

/* Trim coarse gain bit 20 */
typedef enum TPLF_CAL_TCGAIN34_enum
{
    TPLF_CAL_TCGAIN34_CLEAR_gc = (0x00), /* Trim coarse gain bit 20 - CLEAR */
    TPLF_CAL_TCGAIN34_SET_gc   = (0x10), /* Trim coarse gain bit 20 - SET */
} TPLF_CAL_TCGAIN34_t;

/* Trim coarse gain bit 18 */
typedef enum TPLF_CAL_TCGAIN32_enum
{
    TPLF_CAL_TCGAIN32_CLEAR_gc = (0x00), /* Trim coarse gain bit 18 - CLEAR */
    TPLF_CAL_TCGAIN32_SET_gc   = (0x04), /* Trim coarse gain bit 18 - SET */
} TPLF_CAL_TCGAIN32_t;

/* Trim coarse gain bit 17 */
typedef enum TPLF_CAL_TCGAIN31_enum
{
    TPLF_CAL_TCGAIN31_CLEAR_gc = (0x00), /* Trim coarse gain bit 17 - CLEAR */
    TPLF_CAL_TCGAIN31_SET_gc   = (0x02), /* Trim coarse gain bit 17 - SET */
} TPLF_CAL_TCGAIN31_t;

/* Trim coarse gain bit 16 */
typedef enum TPLF_CAL_TCGAIN30_enum
{
    TPLF_CAL_TCGAIN30_CLEAR_gc = (0x00), /* Trim coarse gain bit 16 - CLEAR */
    TPLF_CAL_TCGAIN30_SET_gc   = (0x01), /* Trim coarse gain bit 16 - SET */
} TPLF_CAL_TCGAIN30_t;

/* Trim coarse gain bit 28 */
typedef enum TPLF_CAL_TCGAIN44_enum
{
    TPLF_CAL_TCGAIN44_CLEAR_gc = (0x00), /* Trim coarse gain bit 28 - CLEAR */
    TPLF_CAL_TCGAIN44_SET_gc   = (0x10), /* Trim coarse gain bit 28 - SET */
} TPLF_CAL_TCGAIN44_t;

/* Trim coarse gain bit 27 */
typedef enum TPLF_CAL_TCGAIN43_enum
{
    TPLF_CAL_TCGAIN43_CLEAR_gc = (0x00), /* Trim coarse gain bit 27 - CLEAR */
    TPLF_CAL_TCGAIN43_SET_gc   = (0x08), /* Trim coarse gain bit 27 - SET */
} TPLF_CAL_TCGAIN43_t;

/* Trim coarse gain bit 26 */
typedef enum TPLF_CAL_TCGAIN42_enum
{
    TPLF_CAL_TCGAIN42_CLEAR_gc = (0x00), /* Trim coarse gain bit 26 - CLEAR */
    TPLF_CAL_TCGAIN42_SET_gc   = (0x04), /* Trim coarse gain bit 26 - SET */
} TPLF_CAL_TCGAIN42_t;

/* Trim coarse gain bit 25 */
typedef enum TPLF_CAL_TCGAIN41_enum
{
    TPLF_CAL_TCGAIN41_CLEAR_gc = (0x00), /* Trim coarse gain bit 25 - CLEAR */
    TPLF_CAL_TCGAIN41_SET_gc   = (0x02), /* Trim coarse gain bit 25 - SET */
} TPLF_CAL_TCGAIN41_t;

/* Trim coarse gain bit 24 */
typedef enum TPLF_CAL_TCGAIN40_enum
{
    TPLF_CAL_TCGAIN40_CLEAR_gc = (0x00), /* Trim coarse gain bit 24 - CLEAR */
    TPLF_CAL_TCGAIN40_SET_gc   = (0x01), /* Trim coarse gain bit 24 - SET */
} TPLF_CAL_TCGAIN40_t;

/* LF Calibration Protect Change Enable */
typedef enum TPLF_CAL_LFCPCE_enum
{
    TPLF_CAL_LFCPCE_CLEAR_gc = (0x00), /* LF Calibration Protect Change Enable - CLEAR */
    TPLF_CAL_LFCPCE_SET_gc   = (0x80), /* LF Calibration Protect Change Enable - SET */
} TPLF_CAL_LFCPCE_t;

/* Transponder Constant Disable */
typedef enum TPLF_CAL_TPCD_enum
{
    TPLF_CAL_TPCD_CLEAR_gc = (0x00), /* Transponder Constant Disable - CLEAR */
    TPLF_CAL_TPCD_SET_gc   = (0x40), /* Transponder Constant Disable - SET */
} TPLF_CAL_TPCD_t;

/* LF Calibration Ready */
typedef enum TPLF_CAL_LFCALRY_enum
{
    TPLF_CAL_LFCALRY_CLEAR_gc = (0x00), /* LF Calibration Ready - CLEAR */
    TPLF_CAL_LFCALRY_SET_gc   = (0x02), /* LF Calibration Ready - SET */
} TPLF_CAL_LFCALRY_t;

/* LF Calibration Protection */
typedef enum TPLF_CAL_LFCALP_enum
{
    TPLF_CAL_LFCALP_CLEAR_gc = (0x00), /* LF Calibration Protection - CLEAR */
    TPLF_CAL_LFCALP_SET_gc   = (0x01), /* LF Calibration Protection - SET */
} TPLF_CAL_LFCALP_t;

/* Slow RC oscillator calibration bit 8 */
typedef enum TPLF_CAL_SRCCAL8_enum
{
    TPLF_CAL_SRCCAL8_CLEAR_gc = (0x00), /* Slow RC oscillator calibration bit 8 - CLEAR */
    TPLF_CAL_SRCCAL8_SET_gc   = (0x80), /* Slow RC oscillator calibration bit 8 - SET */
} TPLF_CAL_SRCCAL8_t;

/* Slow RC oscillator calibration bit 7 */
typedef enum TPLF_CAL_SRCCAL7_enum
{
    TPLF_CAL_SRCCAL7_CLEAR_gc = (0x00), /* Slow RC oscillator calibration bit 7 - CLEAR */
    TPLF_CAL_SRCCAL7_SET_gc   = (0x40), /* Slow RC oscillator calibration bit 7 - SET */
} TPLF_CAL_SRCCAL7_t;

/* Slow RC oscillator calibration bit 6 */
typedef enum TPLF_CAL_SRCCAL6_enum
{
    TPLF_CAL_SRCCAL6_CLEAR_gc = (0x00), /* Slow RC oscillator calibration bit 6 - CLEAR */
    TPLF_CAL_SRCCAL6_SET_gc   = (0x20), /* Slow RC oscillator calibration bit 6 - SET */
} TPLF_CAL_SRCCAL6_t;

/* Slow RC oscillator calibration bit 5 */
typedef enum TPLF_CAL_SRCCAL5_enum
{
    TPLF_CAL_SRCCAL5_CLEAR_gc = (0x00), /* Slow RC oscillator calibration bit 5 - CLEAR */
    TPLF_CAL_SRCCAL5_SET_gc   = (0x10), /* Slow RC oscillator calibration bit 5 - SET */
} TPLF_CAL_SRCCAL5_t;

/* Slow RC oscillator calibration bit 4 */
typedef enum TPLF_CAL_SRCCAL4_enum
{
    TPLF_CAL_SRCCAL4_CLEAR_gc = (0x00), /* Slow RC oscillator calibration bit 4 - CLEAR */
    TPLF_CAL_SRCCAL4_SET_gc   = (0x08), /* Slow RC oscillator calibration bit 4 - SET */
} TPLF_CAL_SRCCAL4_t;

/* Slow RC oscillator calibration bit 3 */
typedef enum TPLF_CAL_SRCCAL3_enum
{
    TPLF_CAL_SRCCAL3_CLEAR_gc = (0x00), /* Slow RC oscillator calibration bit 3 - CLEAR */
    TPLF_CAL_SRCCAL3_SET_gc   = (0x04), /* Slow RC oscillator calibration bit 3 - SET */
} TPLF_CAL_SRCCAL3_t;

/* Slow RC oscillator calibration bit 2 */
typedef enum TPLF_CAL_SRCCAL2_enum
{
    TPLF_CAL_SRCCAL2_CLEAR_gc = (0x00), /* Slow RC oscillator calibration bit 2 - CLEAR */
    TPLF_CAL_SRCCAL2_SET_gc   = (0x02), /* Slow RC oscillator calibration bit 2 - SET */
} TPLF_CAL_SRCCAL2_t;

/* Slow RC oscillator calibration bit 1 */
typedef enum TPLF_CAL_SRCCAL1_enum
{
    TPLF_CAL_SRCCAL1_CLEAR_gc = (0x00), /* Slow RC oscillator calibration bit 1 - CLEAR */
    TPLF_CAL_SRCCAL1_SET_gc   = (0x01), /* Slow RC oscillator calibration bit 1 - SET */
} TPLF_CAL_SRCCAL1_t;

/* Slow RC oscillator calibration bit 0 */
typedef enum TPLF_CAL_SRCCAL0_enum
{
    TPLF_CAL_SRCCAL0_CLEAR_gc = (0x00), /* Slow RC oscillator calibration bit 0 - CLEAR */
    TPLF_CAL_SRCCAL0_SET_gc   = (0x01), /* Slow RC oscillator calibration bit 0 - SET */
} TPLF_CAL_SRCCAL0_t;

/* Stop SRC-Osccillator output */
typedef enum TPLF_CAL_HOLD_SRC_enum
{
    TPLF_CAL_HOLD_SRC_CLEAR_gc = (0x00), /* Stop SRC-Osccillator output - CLEAR */
    TPLF_CAL_HOLD_SRC_SET_gc   = (0x80), /* Stop SRC-Osccillator output - SET */
} TPLF_CAL_HOLD_SRC_t;

/* Disable SRC Bandgap */
typedef enum TPLF_CAL_DIS_SRC_enum
{
    TPLF_CAL_DIS_SRC_CLEAR_gc = (0x00), /* Disable SRC Bandgap - CLEAR */
    TPLF_CAL_DIS_SRC_SET_gc   = (0x40), /* Disable SRC Bandgap - SET */
} TPLF_CAL_DIS_SRC_t;

/* SRC Oscillator Select delta current */
#define TPLF_CAL_SRCTCAL_SRCS_gc(x) ((x<<3) & 0x18)

/* SRC Oscillator Temperature Compensation */
#define TPLF_CAL_SRCTCAL_SRCTC_gc(x) (x & 0x07)

/* Transponder Calibration Register 11-TPCALR117 */
typedef enum TPLF_CAL_TPCALR117_enum
{
    TPLF_CAL_TPCALR117_CLEAR_gc = (0x00), /* Transponder Calibration Register 11-TPCALR117 - CLEAR */
    TPLF_CAL_TPCALR117_SET_gc   = (0x80), /* Transponder Calibration Register 11-TPCALR117 - SET */
} TPLF_CAL_TPCALR117_t;

/* Transponder Calibration Register 11-TPCALR116 */
typedef enum TPLF_CAL_TPCALR116_enum
{
    TPLF_CAL_TPCALR116_CLEAR_gc = (0x00), /* Transponder Calibration Register 11-TPCALR116 - CLEAR */
    TPLF_CAL_TPCALR116_SET_gc   = (0x40), /* Transponder Calibration Register 11-TPCALR116 - SET */
} TPLF_CAL_TPCALR116_t;

/* Transponder Calibration Register 11-TPCALR115 */
typedef enum TPLF_CAL_TPCALR115_enum
{
    TPLF_CAL_TPCALR115_CLEAR_gc = (0x00), /* Transponder Calibration Register 11-TPCALR115 - CLEAR */
    TPLF_CAL_TPCALR115_SET_gc   = (0x20), /* Transponder Calibration Register 11-TPCALR115 - SET */
} TPLF_CAL_TPCALR115_t;

/* Enable VSW Brown Out Detection */
typedef enum TPLF_CAL_ENVSWBD_enum
{
    TPLF_CAL_ENVSWBD_CLEAR_gc = (0x00), /* Enable VSW Brown Out Detection - CLEAR */
    TPLF_CAL_ENVSWBD_SET_gc   = (0x10), /* Enable VSW Brown Out Detection - SET */
} TPLF_CAL_ENVSWBD_t;

/* Enable LFVCC Brown Out Detection */
typedef enum TPLF_CAL_ENLFBD_enum
{
    TPLF_CAL_ENLFBD_CLEAR_gc = (0x00), /* Enable LFVCC Brown Out Detection - CLEAR */
    TPLF_CAL_ENLFBD_SET_gc   = (0x08), /* Enable LFVCC Brown Out Detection - SET */
} TPLF_CAL_ENLFBD_t;

/* Enable DVCC Brown Out Detection */
typedef enum TPLF_CAL_ENDVBD_enum
{
    TPLF_CAL_ENDVBD_CLEAR_gc = (0x00), /* Enable DVCC Brown Out Detection - CLEAR */
    TPLF_CAL_ENDVBD_SET_gc   = (0x04), /* Enable DVCC Brown Out Detection - SET */
} TPLF_CAL_ENDVBD_t;

/* Measurement Buffer Trimming bit 1 */
typedef enum TPLF_CAL_MTBTR1_enum
{
    TPLF_CAL_MTBTR1_CLEAR_gc = (0x00), /* Measurement Buffer Trimming bit 1 - CLEAR */
    TPLF_CAL_MTBTR1_SET_gc   = (0x02), /* Measurement Buffer Trimming bit 1 - SET */
} TPLF_CAL_MTBTR1_t;

/* Measurement Buffer Trimming bit 0 */
typedef enum TPLF_CAL_MTBTR0_enum
{
    TPLF_CAL_MTBTR0_CLEAR_gc = (0x00), /* Measurement Buffer Trimming bit 0 - CLEAR */
    TPLF_CAL_MTBTR0_SET_gc   = (0x01), /* Measurement Buffer Trimming bit 0 - SET */
} TPLF_CAL_MTBTR0_t;

/* Transponder Calibration Register 12-TPCALR127 */
typedef enum TPLF_CAL_TPCALR127_enum
{
    TPLF_CAL_TPCALR127_CLEAR_gc = (0x00), /* Transponder Calibration Register 12-TPCALR127 - CLEAR */
    TPLF_CAL_TPCALR127_SET_gc   = (0x80), /* Transponder Calibration Register 12-TPCALR127 - SET */
} TPLF_CAL_TPCALR127_t;

/* Transponder Calibration Register 12-TPCALR126 */
typedef enum TPLF_CAL_TPCALR126_enum
{
    TPLF_CAL_TPCALR126_CLEAR_gc = (0x00), /* Transponder Calibration Register 12-TPCALR126 - CLEAR */
    TPLF_CAL_TPCALR126_SET_gc   = (0x40), /* Transponder Calibration Register 12-TPCALR126 - SET */
} TPLF_CAL_TPCALR126_t;

/* Transponder Calibration Register 12-TPCALR125 */
typedef enum TPLF_CAL_TPCALR125_enum
{
    TPLF_CAL_TPCALR125_CLEAR_gc = (0x00), /* Transponder Calibration Register 12-TPCALR125 - CLEAR */
    TPLF_CAL_TPCALR125_SET_gc   = (0x20), /* Transponder Calibration Register 12-TPCALR125 - SET */
} TPLF_CAL_TPCALR125_t;

/* Transponder Calibration Register 12-TPCALR124 */
typedef enum TPLF_CAL_TPCALR124_enum
{
    TPLF_CAL_TPCALR124_CLEAR_gc = (0x00), /* Transponder Calibration Register 12-TPCALR124 - CLEAR */
    TPLF_CAL_TPCALR124_SET_gc   = (0x10), /* Transponder Calibration Register 12-TPCALR124 - SET */
} TPLF_CAL_TPCALR124_t;

/* Transponder Calibration Register 12-TPCALR123 */
typedef enum TPLF_CAL_TPCALR123_enum
{
    TPLF_CAL_TPCALR123_CLEAR_gc = (0x00), /* Transponder Calibration Register 12-TPCALR123 - CLEAR */
    TPLF_CAL_TPCALR123_SET_gc   = (0x08), /* Transponder Calibration Register 12-TPCALR123 - SET */
} TPLF_CAL_TPCALR123_t;

/* Transponder Calibration Register 12-TPCALR122 */
typedef enum TPLF_CAL_TPCALR122_enum
{
    TPLF_CAL_TPCALR122_CLEAR_gc = (0x00), /* Transponder Calibration Register 12-TPCALR122 - CLEAR */
    TPLF_CAL_TPCALR122_SET_gc   = (0x04), /* Transponder Calibration Register 12-TPCALR122 - SET */
} TPLF_CAL_TPCALR122_t;

/* Transponder Calibration Register 12-TPCALR121 */
typedef enum TPLF_CAL_TPCALR121_enum
{
    TPLF_CAL_TPCALR121_CLEAR_gc = (0x00), /* Transponder Calibration Register 12-TPCALR121 - CLEAR */
    TPLF_CAL_TPCALR121_SET_gc   = (0x02), /* Transponder Calibration Register 12-TPCALR121 - SET */
} TPLF_CAL_TPCALR121_t;

/* Transponder Direct Modulation */
typedef enum TPLF_CAL_TPDMOD_enum
{
    TPLF_CAL_TPDMOD_CLEAR_gc = (0x00), /* Transponder Direct Modulation - CLEAR */
    TPLF_CAL_TPDMOD_SET_gc   = (0x01), /* Transponder Direct Modulation - SET */
} TPLF_CAL_TPDMOD_t;

/* Transponder Power On Reset Threshold */
#define TPLF_CAL_TPCALR3_TPORTH_gc(x) ((x<<3) & 0x18)

/* Not used */
typedef enum TPLF_CAL_LFVCC_TPCAL2_enum
{
    TPLF_CAL_LFVCC_TPCAL2_CLEAR_gc = (0x00), /* Not used - CLEAR */
    TPLF_CAL_LFVCC_TPCAL2_SET_gc   = (0x04), /* Not used - SET */
} TPLF_CAL_LFVCC_TPCAL2_t;

/* Not used */
typedef enum TPLF_CAL_LFVCC_TPCAL1_enum
{
    TPLF_CAL_LFVCC_TPCAL1_CLEAR_gc = (0x00), /* Not used - CLEAR */
    TPLF_CAL_LFVCC_TPCAL1_SET_gc   = (0x02), /* Not used - SET */
} TPLF_CAL_LFVCC_TPCAL1_t;

/* Not used */
typedef enum TPLF_CAL_LFVCC_TPCAL0_enum
{
    TPLF_CAL_LFVCC_TPCAL0_CLEAR_gc = (0x00), /* Not used - CLEAR */
    TPLF_CAL_LFVCC_TPCAL0_SET_gc   = (0x01), /* Not used - SET */
} TPLF_CAL_LFVCC_TPCAL0_t;

/* Comparator VC Calibration */
#define TPLF_CAL_TPCALR4_COMPVC_CAL_gc(x) ((x<<3) & 0x18)

/* Transponder Init Calibration */
#define TPLF_CAL_TPCALR4_TPINIT_CAL_gc(x) (x & 0x07)

/*
--------------------------------------------------------------------------------
TWI1 - 
--------------------------------------------------------------------------------
*/

typedef struct TWI1_struct
{
    register8_t rsv_0x00[489]; /* RESERVED REGISTER BLOCK */
    register8_t TW1BR;         /* TWI1 Bit Rate Register */
    register8_t TW1CR;         /* TWI1 Control Register */
    register8_t TW1SR;         /* TWI1 Status Register */
    register8_t TW1DR;         /* TWI1 Data Register */
    register8_t TW1AR;         /* TWI1 (Slave) Address Register */
    register8_t TW1AMR;        /* TWI1 Address Mask Register */
} TWI1_t;


/* TWI1 (Slave) Address */
#define TWI1_TW1AR_TW1A_gc(x) ((x<<1) & 0xFE)

/* TWI1 General Call Recognition Enable */
typedef enum TWI1_TW1GCE_enum
{
    TWI1_TW1GCE_CLEAR_gc = (0x00), /* TWI1 General Call Recognition Enable - CLEAR */
    TWI1_TW1GCE_SET_gc   = (0x01), /* TWI1 General Call Recognition Enable - SET */
} TWI1_TW1GCE_t;

/* TWI1 Interrupt Flag */
typedef enum TWI1_TW1INT_enum
{
    TWI1_TW1INT_CLEAR_gc = (0x00), /* TWI1 Interrupt Flag - CLEAR */
    TWI1_TW1INT_SET_gc   = (0x80), /* TWI1 Interrupt Flag - SET */
} TWI1_TW1INT_t;

/* TWI1 Enable Acknowledge */
typedef enum TWI1_TW1EA_enum
{
    TWI1_TW1EA_CLEAR_gc = (0x00), /* TWI1 Enable Acknowledge - CLEAR */
    TWI1_TW1EA_SET_gc   = (0x40), /* TWI1 Enable Acknowledge - SET */
} TWI1_TW1EA_t;

/* TWI1 START Condition */
typedef enum TWI1_TW1STA_enum
{
    TWI1_TW1STA_CLEAR_gc = (0x00), /* TWI1 START Condition - CLEAR */
    TWI1_TW1STA_SET_gc   = (0x20), /* TWI1 START Condition - SET */
} TWI1_TW1STA_t;

/* TWI1 STOP Condition */
typedef enum TWI1_TW1STO_enum
{
    TWI1_TW1STO_CLEAR_gc = (0x00), /* TWI1 STOP Condition - CLEAR */
    TWI1_TW1STO_SET_gc   = (0x10), /* TWI1 STOP Condition - SET */
} TWI1_TW1STO_t;

/* TWI1 Write Collision Flag */
typedef enum TWI1_TW1WC_enum
{
    TWI1_TW1WC_CLEAR_gc = (0x00), /* TWI1 Write Collision Flag - CLEAR */
    TWI1_TW1WC_SET_gc   = (0x08), /* TWI1 Write Collision Flag - SET */
} TWI1_TW1WC_t;

/* TWI1 Enable */
typedef enum TWI1_TW1EN_enum
{
    TWI1_TW1EN_CLEAR_gc = (0x00), /* TWI1 Enable - CLEAR */
    TWI1_TW1EN_SET_gc   = (0x04), /* TWI1 Enable - SET */
} TWI1_TW1EN_t;

/* TWI1 Interrupt Enable */
typedef enum TWI1_TW1IE_enum
{
    TWI1_TW1IE_CLEAR_gc = (0x00), /* TWI1 Interrupt Enable - CLEAR */
    TWI1_TW1IE_SET_gc   = (0x01), /* TWI1 Interrupt Enable - SET */
} TWI1_TW1IE_t;

/* TWI1 Status */
#define TWI1_TW1SR_TW1S_gc(x) ((x<<3) & 0xF8)

/* TWI1 Prescaler */
typedef enum TWI1_TW1PS_enum
{
    TWI1_TW1PS_VAL_0x00_gc = (0x00), /* 1 */
    TWI1_TW1PS_VAL_0x01_gc = (0x01), /* 4 */
    TWI1_TW1PS_VAL_0x02_gc = (0x02), /* 16 */
    TWI1_TW1PS_VAL_0x03_gc = (0x03), /* 64 */
} TWI1_TW1PS_t;

/*
--------------------------------------------------------------------------------
TWI2 - 
--------------------------------------------------------------------------------
*/

typedef struct TWI2_struct
{
    register8_t rsv_0x00[426]; /* RESERVED REGISTER BLOCK */
    register8_t TW2BR;         /* TWI2 Bit Rate Register */
    register8_t TW2CR;         /* TWI2 Control Register */
    register8_t TW2SR;         /* TWI2 Status Register */
    register8_t TW2DR;         /* TWI2 Data Register */
    register8_t TW2AR;         /* TWI2 (Slave) Address Register */
    register8_t TW2AMR;        /* TWI2 Address Mask Register */
} TWI2_t;


/* TWI2 (Slave) Address */
#define TWI2_TW2AR_TW2A_gc(x) ((x<<1) & 0xFE)

/* TWI2 General Call Recognition Enable */
typedef enum TWI2_TW2GCE_enum
{
    TWI2_TW2GCE_CLEAR_gc = (0x00), /* TWI2 General Call Recognition Enable - CLEAR */
    TWI2_TW2GCE_SET_gc   = (0x01), /* TWI2 General Call Recognition Enable - SET */
} TWI2_TW2GCE_t;

/* TWI2 Interrupt Flag */
typedef enum TWI2_TW2INT_enum
{
    TWI2_TW2INT_CLEAR_gc = (0x00), /* TWI2 Interrupt Flag - CLEAR */
    TWI2_TW2INT_SET_gc   = (0x80), /* TWI2 Interrupt Flag - SET */
} TWI2_TW2INT_t;

/* TWI2 Enable Acknowledge */
typedef enum TWI2_TW2EA_enum
{
    TWI2_TW2EA_CLEAR_gc = (0x00), /* TWI2 Enable Acknowledge - CLEAR */
    TWI2_TW2EA_SET_gc   = (0x40), /* TWI2 Enable Acknowledge - SET */
} TWI2_TW2EA_t;

/* TWI2 START Condition */
typedef enum TWI2_TW2STA_enum
{
    TWI2_TW2STA_CLEAR_gc = (0x00), /* TWI2 START Condition - CLEAR */
    TWI2_TW2STA_SET_gc   = (0x20), /* TWI2 START Condition - SET */
} TWI2_TW2STA_t;

/* TWI2 STOP Condition */
typedef enum TWI2_TW2STO_enum
{
    TWI2_TW2STO_CLEAR_gc = (0x00), /* TWI2 STOP Condition - CLEAR */
    TWI2_TW2STO_SET_gc   = (0x10), /* TWI2 STOP Condition - SET */
} TWI2_TW2STO_t;

/* TWI2 Write Collision Flag */
typedef enum TWI2_TW2WC_enum
{
    TWI2_TW2WC_CLEAR_gc = (0x00), /* TWI2 Write Collision Flag - CLEAR */
    TWI2_TW2WC_SET_gc   = (0x08), /* TWI2 Write Collision Flag - SET */
} TWI2_TW2WC_t;

/* TWI2 Enable */
typedef enum TWI2_TW2EN_enum
{
    TWI2_TW2EN_CLEAR_gc = (0x00), /* TWI2 Enable - CLEAR */
    TWI2_TW2EN_SET_gc   = (0x04), /* TWI2 Enable - SET */
} TWI2_TW2EN_t;

/* TWI2 Interrupt Enable */
typedef enum TWI2_TW2IE_enum
{
    TWI2_TW2IE_CLEAR_gc = (0x00), /* TWI2 Interrupt Enable - CLEAR */
    TWI2_TW2IE_SET_gc   = (0x01), /* TWI2 Interrupt Enable - SET */
} TWI2_TW2IE_t;

/* TWI2 Status */
#define TWI2_TW2SR_TW2S_gc(x) ((x<<3) & 0xF8)

/* TWI2 Prescaler */
typedef enum TWI2_TW2PS_enum
{
    TWI2_TW2PS_VAL_0x00_gc = (0x00), /* 1 */
    TWI2_TW2PS_VAL_0x01_gc = (0x01), /* 4 */
    TWI2_TW2PS_VAL_0x02_gc = (0x02), /* 16 */
    TWI2_TW2PS_VAL_0x03_gc = (0x03), /* 64 */
} TWI2_TW2PS_t;

/*
--------------------------------------------------------------------------------
VX_MODE - 
--------------------------------------------------------------------------------
*/

typedef struct VX_MODE_struct
{
    register8_t rsv_0x00[235]; /* RESERVED REGISTER BLOCK */
    register8_t VXMCTRL;       /* VX Mode Control Register */
} VX_MODE_t;


/* Enable VX Inputs */
typedef enum VX_MODE_EN_VX_IN_enum
{
    VX_MODE_EN_VX_IN_CLEAR_gc = (0x00), /* Enable VX Inputs - CLEAR */
    VX_MODE_EN_VX_IN_SET_gc   = (0x10), /* Enable VX Inputs - SET */
} VX_MODE_EN_VX_IN_t;

/* Enable PB4 as an VX/VBAT Supply Output */
typedef enum VX_MODE_EN_VX_OUT_enum
{
    VX_MODE_EN_VX_OUT_CLEAR_gc = (0x00), /* Enable PB4 as an VX/VBAT Supply Output - CLEAR */
    VX_MODE_EN_VX_OUT_SET_gc   = (0x08), /* Enable PB4 as an VX/VBAT Supply Output - SET */
} VX_MODE_EN_VX_OUT_t;

/* Enable the VX_LDO */
typedef enum VX_MODE_EN_VX_enum
{
    VX_MODE_EN_VX_CLEAR_gc = (0x00), /* Enable the VX_LDO - CLEAR */
    VX_MODE_EN_VX_SET_gc   = (0x04), /* Enable the VX_LDO - SET */
} VX_MODE_EN_VX_t;

/* Select VX voltage level */
typedef enum VX_MODE_VX_SEL1_enum
{
    VX_MODE_VX_SEL1_CLEAR_gc = (0x00), /* Select VX voltage level - CLEAR */
    VX_MODE_VX_SEL1_SET_gc   = (0x02), /* Select VX voltage level - SET */
} VX_MODE_VX_SEL1_t;

/* Select VX voltage level */
typedef enum VX_MODE_VX_SEL0_enum
{
    VX_MODE_VX_SEL0_CLEAR_gc = (0x00), /* Select VX voltage level - CLEAR */
    VX_MODE_VX_SEL0_SET_gc   = (0x01), /* Select VX voltage level - SET */
} VX_MODE_VX_SEL0_t;

/*
--------------------------------------------------------------------------------
FUSE - 
--------------------------------------------------------------------------------
*/

typedef struct FUSE_struct
{
    register8_t LOW;
} FUSE_t;


/* MRC is selected during reset startup phase */
typedef enum FUSE_CKSTART_enum
{
    FUSE_CKSTART_CLEAR_gc = (0x00), /* MRC is selected during reset startup phase - CLEAR */
    FUSE_CKSTART_SET_gc   = (0x80), /* MRC is selected during reset startup phase - SET */
} FUSE_CKSTART_t;

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

/* Select boot reset vector */
typedef enum FUSE_BOOTRST_enum
{
    FUSE_BOOTRST_CLEAR_gc = (0x00), /* Select boot reset vector - CLEAR */
    FUSE_BOOTRST_SET_gc   = (0x04), /* Select boot reset vector - SET */
} FUSE_BOOTRST_t;

/* EEPROM Access Control */
typedef enum FUSE_EEACC_enum
{
    FUSE_EEACC_CLEAR_gc = (0x00), /* EEPROM Access Control - CLEAR */
    FUSE_EEACC_SET_gc   = (0x02), /* EEPROM Access Control - SET */
} FUSE_EEACC_t;

/* Protect Customer EEPROM section */
typedef enum FUSE_PCEE1_enum
{
    FUSE_PCEE1_CLEAR_gc = (0x00), /* Protect Customer EEPROM section - CLEAR */
    FUSE_PCEE1_SET_gc   = (0x01), /* Protect Customer EEPROM section - SET */
} FUSE_PCEE1_t;

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
/*
================================================================================
IO Module Instances. Mapped to memory.
================================================================================
*/

#define AES                 (*(AES_t *) 0x0000)                 
#define CLK                 (*(CLK_t *) 0x0000)                 
#define CPU                 (*(CPU_t *) 0x0000)                 
#define CRC                 (*(CRC_t *) 0x0000)                 
#define DEBOUNCE            (*(DEBOUNCE_t *) 0x0000)            
#define DEBUG               (*(DEBUG_t *) 0x0000)               
#define DFIFO               (*(DFIFO_t *) 0x0000)               
#define EEPROM              (*(EEPROM_t *) 0x0000)              
#define GPIOREGS_DVCC       (*(GPIOREGS_DVCC_t *) 0x0000)       
#define GPIOREGS_LFVCC      (*(GPIOREGS_LFVCC_t *) 0x0000)      
#define INT                 (*(INT_t *) 0x0000)                 
#define LED                 (*(LED_t *) 0x0000)                 
#define LF_FIFO             (*(LF_FIFO_t *) 0x0000)             
#define LF_PROTOCOL_HANDLER (*(LF_PROTOCOL_HANDLER_t *) 0x0000) 
#define LF_RECEIVER         (*(LF_RECEIVER_t *) 0x0000)         
#define LF_RSSI             (*(LF_RSSI_t *) 0x0000)             
#define LF_TIMER            (*(LF_TIMER_t *) 0x0000)            
#define LF_TRANSPONDER      (*(LF_TRANSPONDER_t *) 0x0000)      
#define MEM                 (*(MEM_t *) 0x0000)                 
#define PORTB               (*(PORTB_t *) 0x0000)               
#define PORTC               (*(PORTC_t *) 0x0000)               
#define PORTD               (*(PORTD_t *) 0x0000)               
#define SFIFO               (*(SFIFO_t *) 0x0000)               
#define SPI                 (*(SPI_t *) 0x0000)                 
#define SPI2                (*(SPI2_t *) 0x0000)                
#define SSM                 (*(SSM_t *) 0x0000)                 
#define SUP                 (*(SUP_t *) 0x0000)                 
#define TIMER0_WDT          (*(TIMER0_WDT_t *) 0x0000)          
#define TIMER1              (*(TIMER1_t *) 0x0000)              
#define TIMER2              (*(TIMER2_t *) 0x0000)              
#define TIMER3              (*(TIMER3_t *) 0x0000)              
#define TIMER4              (*(TIMER4_t *) 0x0000)              
#define TIMER5              (*(TIMER5_t *) 0x0000)              
#define TMO                 (*(TMO_t *) 0x0000)                 
#define TPLF_CAL            (*(TPLF_CAL_t *) 0x0000)            
#define TWI1                (*(TWI1_t *) 0x0000)                
#define TWI2                (*(TWI2_t *) 0x0000)                
#define VX_MODE             (*(VX_MODE_t *) 0x0000)             
#define FUSE                (*(FUSE_t *) 0x0000)                
#define LOCKBIT             (*(LOCKBIT_t *) 0x0000)             
#else
/*
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
ASM LANGUAGE - ONLY
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/


/*
--------------------------------------------------------------------------------
AES - 
--------------------------------------------------------------------------------
*/


/* AES Enable */
#define AES_AESE_CLEAR_gc (0x00) /* AES Enable - CLEAR */
#define AES_AESE_SET_gc   (0x80) /* AES Enable - SET */


/* AES Load Key Memory */
#define AES_AESLKM_CLEAR_gc (0x00) /* AES Load Key Memory - CLEAR */
#define AES_AESLKM_SET_gc   (0x40) /* AES Load Key Memory - SET */


/* AES Reset */
#define AES_AESRES_CLEAR_gc (0x00) /* AES Reset - CLEAR */
#define AES_AESRES_SET_gc   (0x20) /* AES Reset - SET */


/* AES State XOR load */
#define AES_AESXOR_CLEAR_gc (0x00) /* AES State XOR load - CLEAR */
#define AES_AESXOR_SET_gc   (0x10) /* AES State XOR load - SET */


/* AES Direction */
#define AES_AESD_CLEAR_gc (0x00) /* AES Direction - CLEAR */
#define AES_AESD_SET_gc   (0x08) /* AES Direction - SET */


/* AES Interrupt Mask */
#define AES_AESIM_CLEAR_gc (0x00) /* AES Interrupt Mask - CLEAR */
#define AES_AESIM_SET_gc   (0x04) /* AES Interrupt Mask - SET */


/* AES Write Data */
#define AES_AESWD_CLEAR_gc (0x00) /* AES Write Data - CLEAR */
#define AES_AESWD_SET_gc   (0x02) /* AES Write Data - SET */


/* AES Write Key */
#define AES_AESWK_CLEAR_gc (0x00) /* AES Write Key - CLEAR */
#define AES_AESWK_SET_gc   (0x01) /* AES Write Key - SET */


/* AES Error Flag */
#define AES_AESERF_CLEAR_gc (0x00) /* AES Error Flag - CLEAR */
#define AES_AESERF_SET_gc   (0x80) /* AES Error Flag - SET */


/* AES Ready Flag */
#define AES_AESRF_CLEAR_gc (0x00) /* AES Ready Flag - CLEAR */
#define AES_AESRF_SET_gc   (0x01) /* AES Ready Flag - SET */


/*
--------------------------------------------------------------------------------
CLK - 
--------------------------------------------------------------------------------
*/


/* Clock output driver enable */
#define CLK_CLKOEN_CLEAR_gc (0x00) /* Clock output driver enable - CLEAR */
#define CLK_CLKOEN_SET_gc   (0x04) /* Clock output driver enable - SET */


/* Clock output source */
#define CLK_CLKOS_VAL_0x00_gc (0x00) /* clk_src */
#define CLK_CLKOS_VAL_0x01_gc (0x01) /* clk_frc */
#define CLK_CLKOS_VAL_0x02_gc (0x02) /* clk_mrc */
#define CLK_CLKOS_VAL_0x03_gc (0x03) /* clk_xto */


/* FRC Active */
#define CLK_FRCACT_CLEAR_gc (0x00) /* FRC Active - CLEAR */
#define CLK_FRCACT_SET_gc   (0x04) /* FRC Active - SET */


/* MRC Always On */
#define CLK_MRCAO_CLEAR_gc (0x00) /* MRC Always On - CLEAR */
#define CLK_MRCAO_SET_gc   (0x02) /* MRC Always On - SET */


/* FRC Always On */
#define CLK_FRCAO_CLEAR_gc (0x00) /* FRC Always On - CLEAR */
#define CLK_FRCAO_SET_gc   (0x01) /* FRC Always On - SET */


/* External clock fail */
#define CLK_ECF_CLEAR_gc (0x00) /* External clock fail - CLEAR */
#define CLK_ECF_SET_gc   (0x01) /* External clock fail - SET */


/* Power Reduction Two Wire Interface 1 */
#define CLK_PRTWI1_CLEAR_gc (0x00) /* Power Reduction Two Wire Interface 1 - CLEAR */
#define CLK_PRTWI1_SET_gc   (0x80) /* Power Reduction Two Wire Interface 1 - SET */


/* Power Reduction Crypto Unit */
#define CLK_PRCU_CLEAR_gc (0x00) /* Power Reduction Crypto Unit - CLEAR */
#define CLK_PRCU_SET_gc   (0x40) /* Power Reduction Crypto Unit - SET */


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


/* Power Reduction LF RSSI */
#define CLK_PRLFRS_CLEAR_gc (0x00) /* Power Reduction LF RSSI - CLEAR */
#define CLK_PRLFRS_SET_gc   (0x02) /* Power Reduction LF RSSI - SET */


/* Power Reduction Serial Peripheral Interface */
#define CLK_PRSPI_CLEAR_gc (0x00) /* Power Reduction Serial Peripheral Interface - CLEAR */
#define CLK_PRSPI_SET_gc   (0x01) /* Power Reduction Serial Peripheral Interface - SET */


/* Power Reduction LF Protocol Handler */
#define CLK_PRLFPH_CLEAR_gc (0x00) /* Power Reduction LF Protocol Handler - CLEAR */
#define CLK_PRLFPH_SET_gc   (0x80) /* Power Reduction LF Protocol Handler - SET */


/* Power Reduction LF Transponder */
#define CLK_PRLFTP_CLEAR_gc (0x00) /* Power Reduction LF Transponder - CLEAR */
#define CLK_PRLFTP_SET_gc   (0x40) /* Power Reduction LF Transponder - SET */


/* Power Reduction LF Receiver */
#define CLK_PRLFR_CLEAR_gc (0x00) /* Power Reduction LF Receiver - CLEAR */
#define CLK_PRLFR_SET_gc   (0x20) /* Power Reduction LF Receiver - SET */


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


/* VX Tri-State Disable */
#define CLK_VXTSDI_CLEAR_gc (0x00) /* VX Tri-State Disable - CLEAR */
#define CLK_VXTSDI_SET_gc   (0x10) /* VX Tri-State Disable - SET */


/* Power Reduction Data FIFO */
#define CLK_PRDF_CLEAR_gc (0x00) /* Power Reduction Data FIFO - CLEAR */
#define CLK_PRDF_SET_gc   (0x08) /* Power Reduction Data FIFO - SET */


/* Power Reduction Support FIFO */
#define CLK_PRSF_CLEAR_gc (0x00) /* Power Reduction Support FIFO - CLEAR */
#define CLK_PRSF_SET_gc   (0x04) /* Power Reduction Support FIFO - SET */


/* Power Reduction TWI2 */
#define CLK_PRTWI2_CLEAR_gc (0x00) /* Power Reduction TWI2 - CLEAR */
#define CLK_PRTWI2_SET_gc   (0x02) /* Power Reduction TWI2 - SET */


/* Power Reduction SPI2 */
#define CLK_PRSPI2_CLEAR_gc (0x00) /* Power Reduction SPI2 - CLEAR */
#define CLK_PRSPI2_SET_gc   (0x01) /* Power Reduction SPI2 - SET */


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


/* System Clock Prescaler Select */
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


/* Core Clock Select */
#define CPU_CCS_CLEAR_gc (0x00) /* Core Clock Select - CLEAR */
#define CPU_CCS_SET_gc   (0x08) /* Core Clock Select - SET */


/* Clock Management Mode */
#define CPU_CMCR_CMM_gc(x) (x & 0x07)

/* External clock interrupt enable */
#define CPU_ECIE_CLEAR_gc (0x00) /* External clock interrupt enable - CLEAR */
#define CPU_ECIE_SET_gc   (0x01) /* External clock interrupt enable - SET */


/* Interrupt Vector Select */
#define CPU_IVSEL_CLEAR_gc (0x00) /* Interrupt Vector Select - CLEAR */
#define CPU_IVSEL_SET_gc   (0x80) /* Interrupt Vector Select - SET */


/* Trace Enable */
#define CPU_TRCEN_CLEAR_gc (0x00) /* Trace Enable - CLEAR */
#define CPU_TRCEN_SET_gc   (0x40) /* Trace Enable - SET */


/* Trace Change Enable */
#define CPU_TRCCE_CLEAR_gc (0x00) /* Trace Change Enable - CLEAR */
#define CPU_TRCCE_SET_gc   (0x20) /* Trace Change Enable - SET */


/* Pull-up Resistors Disable */
#define CPU_PUD_CLEAR_gc (0x00) /* Pull-up Resistors Disable - CLEAR */
#define CPU_PUD_SET_gc   (0x10) /* Pull-up Resistors Disable - SET */


/* Enable Port Settings */
#define CPU_ENPS_CLEAR_gc (0x00) /* Enable Port Settings - CLEAR */
#define CPU_ENPS_SET_gc   (0x08) /* Enable Port Settings - SET */


/* SPI Interrupt Only */
#define CPU_SPIIO_CLEAR_gc (0x00) /* SPI Interrupt Only - CLEAR */
#define CPU_SPIIO_SET_gc   (0x04) /* SPI Interrupt Only - SET */


/* Interrupt Vector Location */
#define CPU_IVL_VAL_0x00_gc (0x00) /* 0x3600 */
#define CPU_IVL_VAL_0x01_gc (0x01) /* 0x4000 */
#define CPU_IVL_VAL_0x02_gc (0x02) /* 0x7000 */
#define CPU_IVL_VAL_0x03_gc (0x03) /* 0x8000 */


/* Transponder Reset Flag */
#define CPU_TPRF_CLEAR_gc (0x00) /* Transponder Reset Flag - CLEAR */
#define CPU_TPRF_SET_gc   (0x20) /* Transponder Reset Flag - SET */


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


/* Sleep Mode Select */
#define CPU_SM_IDLE_gc   (0x00<<1) /* Idle */
#define CPU_SM_PSAVE_gc  (0x01<<1) /* Power save */
#define CPU_SM_EPSAVE_gc (0x02<<1) /* Extended power save */
#define CPU_SM_PDOWN_gc  (0x03<<1) /* Power down */
#define CPU_SM_EPDOWN_gc (0x04<<1) /* Extended power down */
#define CPU_SM_POFF_gc   (0x05<<1) /* Power off */


/* Sleep Enable */
#define CPU_SE_CLEAR_gc (0x00) /* Sleep Enable - CLEAR */
#define CPU_SE_SET_gc   (0x01) /* Sleep Enable - SET */


/* SPM Interrupt Enable */
#define CPU_SPMIE_CLEAR_gc (0x00) /* SPM Interrupt Enable - CLEAR */
#define CPU_SPMIE_SET_gc   (0x80) /* SPM Interrupt Enable - SET */


/* Read-While-Write Section Busy */
#define CPU_RWWSB_CLEAR_gc (0x00) /* Read-While-Write Section Busy - CLEAR */
#define CPU_RWWSB_SET_gc   (0x40) /* Read-While-Write Section Busy - SET */


/* Fuse Lockbit select */
#define CPU_FLSEL_VAL_0x00_gc  (0x00<<3) /* ROM/FLASH */
#define CPU_FLSEL_VAL_0x01_gc  (0x08<<3) /* Lockbits */
#define CPU_FLSEL_VAL_0x03_gc  (0x18<<3) /* Security Fuses */
#define CPU_FLSEL_VAL_0x05_gc  (0x28<<3) /* EEPROM Protection Fuse Low */
#define CPU_FLSEL_VALR_0x07_gc (0x38<<3) /* EEPROM Protection Fuse High */


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


/* Analog Test Pins Enable */
#define DEBUG_ATEST_CLEAR_gc (0x00) /* Analog Test Pins Enable - CLEAR */
#define DEBUG_ATEST_SET_gc   (0x80) /* Analog Test Pins Enable - SET */


/* CPU Busy Flag */
#define DEBUG_CPBF_CLEAR_gc (0x00) /* CPU Busy Flag - CLEAR */
#define DEBUG_CPBF_SET_gc   (0x40) /* CPU Busy Flag - SET */


/* CPU Busy Flag Output Select */
#define DEBUG_CPBFOS_VAL_0x00_gc (0x00<<4) /* disabled */
#define DEBUG_CPBFOS_VAL_0x01_gc (0x01<<4) /* PB0 */
#define DEBUG_CPBFOS_VAL_0x02_gc (0x02<<4) /* PB3 */
#define DEBUG_CPBFOS_VAL_0x03_gc (0x03<<4) /* PC1 */


/* Debugging Support Group Select */
#define DEBUG_DBGSW_DBGGS_gc(x) (x & 0x0F)

/* Bond Test 6 */
#define DEBUG_BTEST6_CLEAR_gc (0x00) /* Bond Test 6 - CLEAR */
#define DEBUG_BTEST6_SET_gc   (0x40) /* Bond Test 6 - SET */


/* Bond Test 5 */
#define DEBUG_BTEST5_CLEAR_gc (0x00) /* Bond Test 5 - CLEAR */
#define DEBUG_BTEST5_SET_gc   (0x20) /* Bond Test 5 - SET */


/* Bond Test 4 */
#define DEBUG_BTEST4_CLEAR_gc (0x00) /* Bond Test 4 - CLEAR */
#define DEBUG_BTEST4_SET_gc   (0x10) /* Bond Test 4 - SET */


/* Bond AGND LF */
#define DEBUG_AGND_LF_CLEAR_gc (0x00) /* Bond AGND LF - CLEAR */
#define DEBUG_AGND_LF_SET_gc   (0x08) /* Bond AGND LF - SET */


/* Bond ISO SUBS3 GND */
#define DEBUG_ISO_GND_CLEAR_gc (0x00) /* Bond ISO SUBS3 GND - CLEAR */
#define DEBUG_ISO_GND_SET_gc   (0x04) /* Bond ISO SUBS3 GND - SET */


/* Bond AGND BB */
#define DEBUG_AGND_BB_CLEAR_gc (0x00) /* Bond AGND BB - CLEAR */
#define DEBUG_AGND_BB_SET_gc   (0x02) /* Bond AGND BB - SET */


/* Bond BBESD */
#define DEBUG_BBESD_CLEAR_gc (0x00) /* Bond BBESD - CLEAR */
#define DEBUG_BBESD_SET_gc   (0x01) /* Bond BBESD - SET */


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


/* EEPROM Error Correction Code Flag */
#define EEPROM_E2CF_CLEAR_gc (0x00) /* EEPROM Error Correction Code Flag - CLEAR */
#define EEPROM_E2CF_SET_gc   (0x80) /* EEPROM Error Correction Code Flag - SET */


/* EEPROM error Fault Flag bit */
#define EEPROM_E2FF_CLEAR_gc (0x00) /* EEPROM error Fault Flag bit - CLEAR */
#define EEPROM_E2FF_SET_gc   (0x40) /* EEPROM error Fault Flag bit - SET */


/* EEPROM Access Violation Flag */
#define EEPROM_E2AVF_CLEAR_gc (0x00) /* EEPROM Access Violation Flag - CLEAR */
#define EEPROM_E2AVF_SET_gc   (0x20) /* EEPROM Access Violation Flag - SET */


/* EEPROM Error Code Correction Interrupt Mask */
#define EEPROM_E2CIM_CLEAR_gc (0x00) /* EEPROM Error Code Correction Interrupt Mask - CLEAR */
#define EEPROM_E2CIM_SET_gc   (0x02) /* EEPROM Error Code Correction Interrupt Mask - SET */


/* EEPROM Burst Read Enable */
#define EEPROM_EEBRE_CLEAR_gc (0x00) /* EEPROM Burst Read Enable - CLEAR */
#define EEPROM_EEBRE_SET_gc   (0x01) /* EEPROM Burst Read Enable - SET */


/* EEPROM Protection Section 7 Read Disable */
#define EEPROM_EEPS7RD_CLEAR_gc (0x00) /* EEPROM Protection Section 7 Read Disable - CLEAR */
#define EEPROM_EEPS7RD_SET_gc   (0x80) /* EEPROM Protection Section 7 Read Disable - SET */


/* EEPROM Protection Section 7 Write Disable */
#define EEPROM_EEPS7WD_CLEAR_gc (0x00) /* EEPROM Protection Section 7 Write Disable - CLEAR */
#define EEPROM_EEPS7WD_SET_gc   (0x40) /* EEPROM Protection Section 7 Write Disable - SET */


/* EEPROM Protection Section 6 Read Disable */
#define EEPROM_EEPS6RD_CLEAR_gc (0x00) /* EEPROM Protection Section 6 Read Disable - CLEAR */
#define EEPROM_EEPS6RD_SET_gc   (0x20) /* EEPROM Protection Section 6 Read Disable - SET */


/* EEPROM Protection Section 6 Write Disable */
#define EEPROM_EEPS6WD_CLEAR_gc (0x00) /* EEPROM Protection Section 6 Write Disable - CLEAR */
#define EEPROM_EEPS6WD_SET_gc   (0x10) /* EEPROM Protection Section 6 Write Disable - SET */


/* EEPROM Protection Section 5 Read Disable */
#define EEPROM_EEPS5RD_CLEAR_gc (0x00) /* EEPROM Protection Section 5 Read Disable - CLEAR */
#define EEPROM_EEPS5RD_SET_gc   (0x08) /* EEPROM Protection Section 5 Read Disable - SET */


/* EEPROM Protection Section 5 Write Disable */
#define EEPROM_EEPS5WD_CLEAR_gc (0x00) /* EEPROM Protection Section 5 Write Disable - CLEAR */
#define EEPROM_EEPS5WD_SET_gc   (0x04) /* EEPROM Protection Section 5 Write Disable - SET */


/* EEPROM Protection Section 4 Read Disable */
#define EEPROM_EEPS4RD_CLEAR_gc (0x00) /* EEPROM Protection Section 4 Read Disable - CLEAR */
#define EEPROM_EEPS4RD_SET_gc   (0x02) /* EEPROM Protection Section 4 Read Disable - SET */


/* EEPROM Protection Section 4 Write Disable */
#define EEPROM_EEPS4WD_CLEAR_gc (0x00) /* EEPROM Protection Section 4 Write Disable - CLEAR */
#define EEPROM_EEPS4WD_SET_gc   (0x01) /* EEPROM Protection Section 4 Write Disable - SET */


/* EEPROM Protection Section 11 Read Disable */
#define EEPROM_EEPS11RD_CLEAR_gc (0x00) /* EEPROM Protection Section 11 Read Disable - CLEAR */
#define EEPROM_EEPS11RD_SET_gc   (0x80) /* EEPROM Protection Section 11 Read Disable - SET */


/* EEPROM Protection Section 11 Write Disable */
#define EEPROM_EEPS11WD_CLEAR_gc (0x00) /* EEPROM Protection Section 11 Write Disable - CLEAR */
#define EEPROM_EEPS11WD_SET_gc   (0x40) /* EEPROM Protection Section 11 Write Disable - SET */


/* EEPROM Protection Section 10 Read Disable */
#define EEPROM_EEPS10RD_CLEAR_gc (0x00) /* EEPROM Protection Section 10 Read Disable - CLEAR */
#define EEPROM_EEPS10RD_SET_gc   (0x20) /* EEPROM Protection Section 10 Read Disable - SET */


/* EEPROM Protection Section 10 Write Disableble */
#define EEPROM_EEPS10WD_CLEAR_gc (0x00) /* EEPROM Protection Section 10 Write Disableble - CLEAR */
#define EEPROM_EEPS10WD_SET_gc   (0x10) /* EEPROM Protection Section 10 Write Disableble - SET */


/* EEPROM Protection Section 9 Read Disable */
#define EEPROM_EEPS9RD_CLEAR_gc (0x00) /* EEPROM Protection Section 9 Read Disable - CLEAR */
#define EEPROM_EEPS9RD_SET_gc   (0x08) /* EEPROM Protection Section 9 Read Disable - SET */


/* EEPROM Protection Section 9 Write Disable */
#define EEPROM_EEPS9WD_CLEAR_gc (0x00) /* EEPROM Protection Section 9 Write Disable - CLEAR */
#define EEPROM_EEPS9WD_SET_gc   (0x04) /* EEPROM Protection Section 9 Write Disable - SET */


/* EEPROM Protection Section 8 Read Disable */
#define EEPROM_EEPS8RD_CLEAR_gc (0x00) /* EEPROM Protection Section 8 Read Disable - CLEAR */
#define EEPROM_EEPS8RD_SET_gc   (0x02) /* EEPROM Protection Section 8 Read Disable - SET */


/* EEPROM Protection Section 8 Write Disable */
#define EEPROM_EEPS8WD_CLEAR_gc (0x00) /* EEPROM Protection Section 8 Write Disable - CLEAR */
#define EEPROM_EEPS8WD_SET_gc   (0x01) /* EEPROM Protection Section 8 Write Disable - SET */


/* EEPROM Protection Section 12 Read Disable */
#define EEPROM_EEPS12RD_CLEAR_gc (0x00) /* EEPROM Protection Section 12 Read Disable - CLEAR */
#define EEPROM_EEPS12RD_SET_gc   (0x02) /* EEPROM Protection Section 12 Read Disable - SET */


/* EEPROM Protection Section 12 Write Disable */
#define EEPROM_EEPS12WD_CLEAR_gc (0x00) /* EEPROM Protection Section 12 Write Disable - CLEAR */
#define EEPROM_EEPS12WD_SET_gc   (0x01) /* EEPROM Protection Section 12 Write Disable - SET */


/*
--------------------------------------------------------------------------------
GPIOREGS_DVCC - 
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
GPIOREGS_LFVCC - 
--------------------------------------------------------------------------------
*/


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


/* Pin Change Enable Mask bit 7 */
#define INT_PCINT7_CLEAR_gc (0x00) /* Pin Change Enable Mask bit 7 - CLEAR */
#define INT_PCINT7_SET_gc   (0x80) /* Pin Change Enable Mask bit 7 - SET */


/* Pin Change Enable Mask bit 6 */
#define INT_PCINT6_CLEAR_gc (0x00) /* Pin Change Enable Mask bit 6 - CLEAR */
#define INT_PCINT6_SET_gc   (0x40) /* Pin Change Enable Mask bit 6 - SET */


/* Pin Change Enable Mask bit 5 */
#define INT_PCINT5_CLEAR_gc (0x00) /* Pin Change Enable Mask bit 5 - CLEAR */
#define INT_PCINT5_SET_gc   (0x20) /* Pin Change Enable Mask bit 5 - SET */


/* Pin Change Enable Mask bit 4 */
#define INT_PCINT4_CLEAR_gc (0x00) /* Pin Change Enable Mask bit 4 - CLEAR */
#define INT_PCINT4_SET_gc   (0x10) /* Pin Change Enable Mask bit 4 - SET */


/* Pin Change Enable Mask bit 3 */
#define INT_PCINT3_CLEAR_gc (0x00) /* Pin Change Enable Mask bit 3 - CLEAR */
#define INT_PCINT3_SET_gc   (0x08) /* Pin Change Enable Mask bit 3 - SET */


/* Pin Change Enable Mask bit 2 */
#define INT_PCINT2_CLEAR_gc (0x00) /* Pin Change Enable Mask bit 2 - CLEAR */
#define INT_PCINT2_SET_gc   (0x04) /* Pin Change Enable Mask bit 2 - SET */


/* Pin Change Enable Mask bit 1 */
#define INT_PCINT1_CLEAR_gc (0x00) /* Pin Change Enable Mask bit 1 - CLEAR */
#define INT_PCINT1_SET_gc   (0x02) /* Pin Change Enable Mask bit 1 - SET */


/* Pin Change Enable Mask bit 0 */
#define INT_PCINT0_CLEAR_gc (0x00) /* Pin Change Enable Mask bit 0 - CLEAR */
#define INT_PCINT0_SET_gc   (0x01) /* Pin Change Enable Mask bit 0 - SET */


/* Pin Change Enable Mask bit 15 */
#define INT_PCINT15_CLEAR_gc (0x00) /* Pin Change Enable Mask bit 15 - CLEAR */
#define INT_PCINT15_SET_gc   (0x80) /* Pin Change Enable Mask bit 15 - SET */


/* Pin Change Enable Mask bit 14 */
#define INT_PCINT14_CLEAR_gc (0x00) /* Pin Change Enable Mask bit 14 - CLEAR */
#define INT_PCINT14_SET_gc   (0x40) /* Pin Change Enable Mask bit 14 - SET */


/* Pin Change Enable Mask bit 13 */
#define INT_PCINT13_CLEAR_gc (0x00) /* Pin Change Enable Mask bit 13 - CLEAR */
#define INT_PCINT13_SET_gc   (0x20) /* Pin Change Enable Mask bit 13 - SET */


/* Pin Change Enable Mask bit 12 */
#define INT_PCINT12_CLEAR_gc (0x00) /* Pin Change Enable Mask bit 12 - CLEAR */
#define INT_PCINT12_SET_gc   (0x10) /* Pin Change Enable Mask bit 12 - SET */


/* Pin Change Enable Mask bit 11 */
#define INT_PCINT11_CLEAR_gc (0x00) /* Pin Change Enable Mask bit 11 - CLEAR */
#define INT_PCINT11_SET_gc   (0x08) /* Pin Change Enable Mask bit 11 - SET */


/* Pin Change Enable Mask bit 10 */
#define INT_PCINT10_CLEAR_gc (0x00) /* Pin Change Enable Mask bit 10 - CLEAR */
#define INT_PCINT10_SET_gc   (0x04) /* Pin Change Enable Mask bit 10 - SET */


/* Pin Change Enable Mask bit 9 */
#define INT_PCINT9_CLEAR_gc (0x00) /* Pin Change Enable Mask bit 9 - CLEAR */
#define INT_PCINT9_SET_gc   (0x02) /* Pin Change Enable Mask bit 9 - SET */


/* Pin Change Enable Mask bit 8 */
#define INT_PCINT8_CLEAR_gc (0x00) /* Pin Change Enable Mask bit 8 - CLEAR */
#define INT_PCINT8_SET_gc   (0x01) /* Pin Change Enable Mask bit 8 - SET */


/*
--------------------------------------------------------------------------------
LED - 
--------------------------------------------------------------------------------
*/


/* Analog Testbus Select */
#define LED_ATBSEL_CLEAR_gc (0x00) /* Analog Testbus Select - CLEAR */
#define LED_ATBSEL_SET_gc   (0x80) /* Analog Testbus Select - SET */


/* Testmode Enable for RSSI Measurement */
#define LED_RSSISEL_CLEAR_gc (0x00) /* Testmode Enable for RSSI Measurement - CLEAR */
#define LED_RSSISEL_SET_gc   (0x40) /* Testmode Enable for RSSI Measurement - SET */


/* Standby Test Enable */
#define LED_STBTEST_CLEAR_gc (0x00) /* Standby Test Enable - CLEAR */
#define LED_STBTEST_SET_gc   (0x20) /* Standby Test Enable - SET */


/* Pad Driver Strength Control */
#define LED_PDSCR_PDSC_gc(x) (x & 0x1F)

/*
--------------------------------------------------------------------------------
LF_FIFO - 
--------------------------------------------------------------------------------
*/


/* LF Data FIFO MSB alignment bit */
#define LF_FIFO_LDFMSB_CLEAR_gc (0x00) /* LF Data FIFO MSB alignment bit - CLEAR */
#define LF_FIFO_LDFMSB_SET_gc   (0x40) /* LF Data FIFO MSB alignment bit - SET */


/* LF Data FIFO Fill-Level Configuration */
#define LF_FIFO_LDFC_LDFFLC_gc(x) (x & 0x3F)

/* LF Data FIFO Synchronous Clock Status */
#define LF_FIFO_LDFSCKS_CLEAR_gc (0x00) /* LF Data FIFO Synchronous Clock Status - CLEAR */
#define LF_FIFO_LDFSCKS_SET_gc   (0x02) /* LF Data FIFO Synchronous Clock Status - SET */


/* LF Data FIFO Synchronous Clock Switch */
#define LF_FIFO_LDFSCSW_CLEAR_gc (0x00) /* LF Data FIFO Synchronous Clock Switch - CLEAR */
#define LF_FIFO_LDFSCSW_SET_gc   (0x01) /* LF Data FIFO Synchronous Clock Switch - SET */


/* LF Data FIFO Clear */
#define LF_FIFO_LDFCLR_CLEAR_gc (0x00) /* LF Data FIFO Clear - CLEAR */
#define LF_FIFO_LDFCLR_SET_gc   (0x80) /* LF Data FIFO Clear - SET */


/* LF Data Fifo Fill Level */
#define LF_FIFO_LDFFL_LDFFL_gc(x) (x & 0x3F)

/* LF Data FIFO Error Interrupt Mask */
#define LF_FIFO_LDFEIM_CLEAR_gc (0x00) /* LF Data FIFO Error Interrupt Mask - CLEAR */
#define LF_FIFO_LDFEIM_SET_gc   (0x02) /* LF Data FIFO Error Interrupt Mask - SET */


/* LF Data FIFO Fill-level Interrupt Mask */
#define LF_FIFO_LDFFLIM_CLEAR_gc (0x00) /* LF Data FIFO Fill-level Interrupt Mask - CLEAR */
#define LF_FIFO_LDFFLIM_SET_gc   (0x01) /* LF Data FIFO Fill-level Interrupt Mask - SET */


/* LF Data FIFO OverFlow flag */
#define LF_FIFO_LDFOF_CLEAR_gc (0x00) /* LF Data FIFO OverFlow flag - CLEAR */
#define LF_FIFO_LDFOF_SET_gc   (0x04) /* LF Data FIFO OverFlow flag - SET */


/* LF Data FIFO UnderFlow flag */
#define LF_FIFO_LDFUF_CLEAR_gc (0x00) /* LF Data FIFO UnderFlow flag - CLEAR */
#define LF_FIFO_LDFUF_SET_gc   (0x02) /* LF Data FIFO UnderFlow flag - SET */


/* LF Data FIFO Fill-Level Reached flag */
#define LF_FIFO_LDFFLR_CLEAR_gc (0x00) /* LF Data FIFO Fill-Level Reached flag - CLEAR */
#define LF_FIFO_LDFFLR_SET_gc   (0x01) /* LF Data FIFO Fill-Level Reached flag - SET */


/*
--------------------------------------------------------------------------------
LF_PROTOCOL_HANDLER - 
--------------------------------------------------------------------------------
*/


/* CRC Enable */
#define LF_PROTOCOL_HANDLER_CRCEN_CLEAR_gc (0x00) /* CRC Enable - CLEAR */
#define LF_PROTOCOL_HANDLER_CRCEN_SET_gc   (0x80) /* CRC Enable - SET */


/* CRC size bit 1 */
#define LF_PROTOCOL_HANDLER_CRCSE1_CLEAR_gc (0x00) /* CRC size bit 1 - CLEAR */
#define LF_PROTOCOL_HANDLER_CRCSE1_SET_gc   (0x20) /* CRC size bit 1 - SET */


/* CRC size bit 0 */
#define LF_PROTOCOL_HANDLER_CRCSE0_CLEAR_gc (0x00) /* CRC size bit 0 - CLEAR */
#define LF_PROTOCOL_HANDLER_CRCSE0_SET_gc   (0x10) /* CRC size bit 0 - SET */


/* CRC ID Frame */
#define LF_PROTOCOL_HANDLER_CRCFR_CLEAR_gc (0x00) /* CRC ID Frame - CLEAR */
#define LF_PROTOCOL_HANDLER_CRCFR_SET_gc   (0x04) /* CRC ID Frame - SET */


/* Protocol Handler IDentifier 1 Flag */
#define LF_PROTOCOL_HANDLER_PHID1F_CLEAR_gc (0x00) /* Protocol Handler IDentifier 1 Flag - CLEAR */
#define LF_PROTOCOL_HANDLER_PHID1F_SET_gc   (0x20) /* Protocol Handler IDentifier 1 Flag - SET */


/* Protocol Handler IDentifier 0 Flag */
#define LF_PROTOCOL_HANDLER_PHID0F_CLEAR_gc (0x00) /* Protocol Handler IDentifier 0 Flag - CLEAR */
#define LF_PROTOCOL_HANDLER_PHID0F_SET_gc   (0x10) /* Protocol Handler IDentifier 0 Flag - SET */


/* Protocol Handler ID Frame Flag */
#define LF_PROTOCOL_HANDLER_PHIDFF_CLEAR_gc (0x00) /* Protocol Handler ID Frame Flag - CLEAR */
#define LF_PROTOCOL_HANDLER_PHIDFF_SET_gc   (0x08) /* Protocol Handler ID Frame Flag - SET */


/* Protocol Handler Date Frame Flag */
#define LF_PROTOCOL_HANDLER_PHDFF_CLEAR_gc (0x00) /* Protocol Handler Date Frame Flag - CLEAR */
#define LF_PROTOCOL_HANDLER_PHDFF_SET_gc   (0x04) /* Protocol Handler Date Frame Flag - SET */


/* Protocol Handler Telegram Bit Length Flag */
#define LF_PROTOCOL_HANDLER_PHTBLF_CLEAR_gc (0x00) /* Protocol Handler Telegram Bit Length Flag - CLEAR */
#define LF_PROTOCOL_HANDLER_PHTBLF_SET_gc   (0x02) /* Protocol Handler Telegram Bit Length Flag - SET */


/* PH CRC Error Status Flag */
#define LF_PROTOCOL_HANDLER_CRCEF_CLEAR_gc (0x00) /* PH CRC Error Status Flag - CLEAR */
#define LF_PROTOCOL_HANDLER_CRCEF_SET_gc   (0x01) /* PH CRC Error Status Flag - SET */


/* Protocol Handler IDentifier 1 Interrupt Mask */
#define LF_PROTOCOL_HANDLER_PHID1IM_CLEAR_gc (0x00) /* Protocol Handler IDentifier 1 Interrupt Mask - CLEAR */
#define LF_PROTOCOL_HANDLER_PHID1IM_SET_gc   (0x20) /* Protocol Handler IDentifier 1 Interrupt Mask - SET */


/* Protocol Handler IDentifier 0 Interrupt Mask */
#define LF_PROTOCOL_HANDLER_PHID0IM_CLEAR_gc (0x00) /* Protocol Handler IDentifier 0 Interrupt Mask - CLEAR */
#define LF_PROTOCOL_HANDLER_PHID0IM_SET_gc   (0x10) /* Protocol Handler IDentifier 0 Interrupt Mask - SET */


/* Protocol Handler ID Frame Interrupt Mask */
#define LF_PROTOCOL_HANDLER_PHIDFIM_CLEAR_gc (0x00) /* Protocol Handler ID Frame Interrupt Mask - CLEAR */
#define LF_PROTOCOL_HANDLER_PHIDFIM_SET_gc   (0x08) /* Protocol Handler ID Frame Interrupt Mask - SET */


/* Protocol Handler Date Frame Interrupt Mask */
#define LF_PROTOCOL_HANDLER_PHDFIM_CLEAR_gc (0x00) /* Protocol Handler Date Frame Interrupt Mask - CLEAR */
#define LF_PROTOCOL_HANDLER_PHDFIM_SET_gc   (0x04) /* Protocol Handler Date Frame Interrupt Mask - SET */


/* Protocol Handler Telegram Bit Length Interrupt Mask */
#define LF_PROTOCOL_HANDLER_PHTBLIM_CLEAR_gc (0x00) /* Protocol Handler Telegram Bit Length Interrupt Mask - CLEAR */
#define LF_PROTOCOL_HANDLER_PHTBLIM_SET_gc   (0x02) /* Protocol Handler Telegram Bit Length Interrupt Mask - SET */


/* Continue or Single receive Mode */
#define LF_PROTOCOL_HANDLER_CSM_CLEAR_gc (0x00) /* Continue or Single receive Mode - CLEAR */
#define LF_PROTOCOL_HANDLER_CSM_SET_gc   (0x80) /* Continue or Single receive Mode - SET */


/* Continuous Pattern Mode */
#define LF_PROTOCOL_HANDLER_CPM_CLEAR_gc (0x00) /* Continuous Pattern Mode - CLEAR */
#define LF_PROTOCOL_HANDLER_CPM_SET_gc   (0x40) /* Continuous Pattern Mode - SET */


/* ID Frame stored in FIFO */
#define LF_PROTOCOL_HANDLER_FRFIFO_CLEAR_gc (0x00) /* ID Frame stored in FIFO - CLEAR */
#define LF_PROTOCOL_HANDLER_FRFIFO_SET_gc   (0x20) /* ID Frame stored in FIFO - SET */


/*
--------------------------------------------------------------------------------
LF_RECEIVER - 
--------------------------------------------------------------------------------
*/


/* LF Receiver Reset Time */
#define LF_RECEIVER_LFRRT_VAL_0x00_gc (0x00<<6) /* 128 us */
#define LF_RECEIVER_LFRRT_VAL_0x01_gc (0x01<<6) /* 160 us */
#define LF_RECEIVER_LFRRT_VAL_0x02_gc (0x02<<6) /* 192 us */
#define LF_RECEIVER_LFRRT_VAL_0x03_gc (0x03<<6) /* 224 us */


/* LF Receiver Maximum Gain Select */
#define LF_RECEIVER_LFMG_CLEAR_gc (0x00) /* LF Receiver Maximum Gain Select - CLEAR */
#define LF_RECEIVER_LFMG_SET_gc   (0x20) /* LF Receiver Maximum Gain Select - SET */


/* LF Receiver Bit Rate */
#define LF_RECEIVER_LFBR_VAL_0x00_gc (0x00<<3) /* 1.95 kBit/s */
#define LF_RECEIVER_LFBR_VAL_0x01_gc (0x01<<3) /* 3.90 kBit/s */
#define LF_RECEIVER_LFBR_VAL_0x02_gc (0x02<<3) /* 7.81 kBit/s */


/* LF Receiver Channel 3 Enable */
#define LF_RECEIVER_LFCE3_CLEAR_gc (0x00) /* LF Receiver Channel 3 Enable - CLEAR */
#define LF_RECEIVER_LFCE3_SET_gc   (0x04) /* LF Receiver Channel 3 Enable - SET */


/* LF Receiver Channel 2 Enable */
#define LF_RECEIVER_LFCE2_CLEAR_gc (0x00) /* LF Receiver Channel 2 Enable - CLEAR */
#define LF_RECEIVER_LFCE2_SET_gc   (0x02) /* LF Receiver Channel 2 Enable - SET */


/* LF Receiver Channel 1 Enable */
#define LF_RECEIVER_LFCE1_CLEAR_gc (0x00) /* LF Receiver Channel 1 Enable - CLEAR */
#define LF_RECEIVER_LFCE1_SET_gc   (0x01) /* LF Receiver Channel 1 Enable - SET */


/* LF Receiver Enable */
#define LF_RECEIVER_LFRE_CLEAR_gc (0x00) /* LF Receiver Enable - CLEAR */
#define LF_RECEIVER_LFRE_SET_gc   (0x80) /* LF Receiver Enable - SET */


/* LF Port Event Enable */
#define LF_RECEIVER_LFPEEN_CLEAR_gc (0x00) /* LF Port Event Enable - CLEAR */
#define LF_RECEIVER_LFPEEN_SET_gc   (0x40) /* LF Port Event Enable - SET */


/* Adapt Threshold Enable */
#define LF_RECEIVER_ADTHEN_CLEAR_gc (0x00) /* Adapt Threshold Enable - CLEAR */
#define LF_RECEIVER_ADTHEN_SET_gc   (0x20) /* Adapt Threshold Enable - SET */


/* FLL Enable */
#define LF_RECEIVER_FLLEN_CLEAR_gc (0x00) /* FLL Enable - CLEAR */
#define LF_RECEIVER_FLLEN_SET_gc   (0x10) /* FLL Enable - SET */


/* Analog Reset Manchester Detector Enable */
#define LF_RECEIVER_ARMDE_CLEAR_gc (0x00) /* Analog Reset Manchester Detector Enable - CLEAR */
#define LF_RECEIVER_ARMDE_SET_gc   (0x08) /* Analog Reset Manchester Detector Enable - SET */


/* LF Function Mode bit 1 */
#define LF_RECEIVER_LFFM1_CLEAR_gc (0x00) /* LF Function Mode bit 1 - CLEAR */
#define LF_RECEIVER_LFFM1_SET_gc   (0x04) /* LF Function Mode bit 1 - SET */


/* RSSI Startup Time */
#define LF_RECEIVER_RSST_VAL_0x00_gc (0x00) /* 256 us */
#define LF_RECEIVER_RSST_VAL_0x01_gc (0x01) /* 384 us */
#define LF_RECEIVER_RSST_VAL_0x02_gc (0x02) /* 512 us */
#define LF_RECEIVER_RSST_VAL_0x03_gc (0x03) /* 640 us */


/* LF Velocity Control */
#define LF_RECEIVER_LFCR2_LFVC_gc(x) ((x<<5) & 0xE0)

/* LF coil Damping level select */
#define LF_RECEIVER_LFDAMP_CLEAR_gc (0x00) /* LF coil Damping level select - CLEAR */
#define LF_RECEIVER_LFDAMP_SET_gc   (0x04) /* LF coil Damping level select - SET */


/* LF Sensitivity Mode */
#define LF_RECEIVER_LFSEN_VAL_0x00_gc (0x00) /* High Sensitivity */
#define LF_RECEIVER_LFSEN_VAL_0x01_gc (0x01) /* Medium Sensitivity */
#define LF_RECEIVER_LFSEN_VAL_0x02_gc (0x02) /* Low Sensitivity */


/* LF Standby mode Enable */
#define LF_RECEIVER_LFSBEN_CLEAR_gc (0x00) /* LF Standby mode Enable - CLEAR */
#define LF_RECEIVER_LFSBEN_SET_gc   (0x80) /* LF Standby mode Enable - SET */


/* LF Standby Time */
#define LF_RECEIVER_LFTS_VAL_0x00_gc (0x00<<4) /*  384 us */
#define LF_RECEIVER_LFTS_VAL_0x01_gc (0x01<<4) /*  768 us */
#define LF_RECEIVER_LFTS_VAL_0x02_gc (0x02<<4) /* 1152 us */
#define LF_RECEIVER_LFTS_VAL_0x03_gc (0x03<<4) /* 1536 us */
#define LF_RECEIVER_LFTS_VAL_0x04_gc (0x04<<4) /* 2304 us */
#define LF_RECEIVER_LFTS_VAL_0x05_gc (0x05<<4) /* 3072 us */
#define LF_RECEIVER_LFTS_VAL_0x06_gc (0x06<<4) /* 4608 us */
#define LF_RECEIVER_LFTS_VAL_0x07_gc (0x07<<4) /* 6144 us */


/* LF On Time with Activated Standby Mode */
#define LF_RECEIVER_LFTON_CLEAR_gc (0x00) /* LF On Time with Activated Standby Mode - CLEAR */
#define LF_RECEIVER_LFTON_SET_gc   (0x08) /* LF On Time with Activated Standby Mode - SET */


/* LF RC Pump mode Enable */
#define LF_RECEIVER_LFRCPM_CLEAR_gc (0x00) /* LF RC Pump mode Enable - CLEAR */
#define LF_RECEIVER_LFRCPM_SET_gc   (0x04) /* LF RC Pump mode Enable - SET */


/* LF RC Pump Continuous Enable */
#define LF_RECEIVER_LFRCPCEN_CLEAR_gc (0x00) /* LF RC Pump Continuous Enable - CLEAR */
#define LF_RECEIVER_LFRCPCEN_SET_gc   (0x02) /* LF RC Pump Continuous Enable - SET */


/* LF RC Trim Enable */
#define LF_RECEIVER_LFRCTEN_CLEAR_gc (0x00) /* LF RC Trim Enable - CLEAR */
#define LF_RECEIVER_LFRCTEN_SET_gc   (0x01) /* LF RC Trim Enable - SET */


/* Count Threshold A */
#define LF_RECEIVER_LFDSR1_CTTHA_gc(x) ((x<<4) & 0x30)

/* High Threshold A */
#define LF_RECEIVER_LFDSR1_HITHA_gc(x) ((x<<2) & 0x0C)

/* Low Threshold A */
#define LF_RECEIVER_LFDSR1_LOTHA_gc(x) (x & 0x03)

/* Stop Bit Correlator Threshold */
#define LF_RECEIVER_LFDSR10_STBTH_gc(x) ((x<<6) & 0xC0)

/* Frequency Control Limit */
#define LF_RECEIVER_LFDSR10_FCL_gc(x) (x & 0x3F)

/* Time Init B */
#define LF_RECEIVER_LFDSR11_TINITB_gc(x) ((x<<4) & 0xF0)

/* Time Init A */
#define LF_RECEIVER_LFDSR11_TINITA_gc(x) (x & 0x0F)

/* Count Threshold B */
#define LF_RECEIVER_LFDSR2_CTTHB_gc(x) ((x<<4) & 0x30)

/* High Threshold B */
#define LF_RECEIVER_LFDSR2_HITHB_gc(x) ((x<<2) & 0x0C)

/* Low Threshold B */
#define LF_RECEIVER_LFDSR2_LOTHB_gc(x) (x & 0x03)

/* Quality Check Threshold */
#define LF_RECEIVER_LFDSR3_QCTH_gc(x) ((x<<3) & 0x38)

/* Preburst Detection Threshold */
#define LF_RECEIVER_LFDSR3_PBDTH_gc(x) (x & 0x03)

/* Sync Restart Control */
#define LF_RECEIVER_LFDSR4_SRSTC_gc(x) ((x<<6) & 0xC0)

/* Sync Count Threshold A */
#define LF_RECEIVER_LFDSR4_SCTHA_gc(x) ((x<<3) & 0x38)

/* Sync Detection Threshold A */
#define LF_RECEIVER_LFDSR4_SDTHA_gc(x) (x & 0x07)

/* Snyc Start-Up Time B */
#define LF_RECEIVER_SSUTB_CLEAR_gc (0x00) /* Snyc Start-Up Time B - CLEAR */
#define LF_RECEIVER_SSUTB_SET_gc   (0x80) /* Snyc Start-Up Time B - SET */


/* Snyc Start-Up Time A */
#define LF_RECEIVER_SSUTA_CLEAR_gc (0x00) /* Snyc Start-Up Time A - CLEAR */
#define LF_RECEIVER_SSUTA_SET_gc   (0x40) /* Snyc Start-Up Time A - SET */


/* Sync Count Threshold B */
#define LF_RECEIVER_LFDSR5_SCTHB_gc(x) ((x<<3) & 0x38)

/* Sync Detection Threshold B */
#define LF_RECEIVER_LFDSR5_SDTHB_gc(x) (x & 0x07)

/* Time Out Timer Delta Sync detect */
#define LF_RECEIVER_LFDSR6_TODS_gc(x) ((x<<3) & 0x38)

/* Time Out Decode Unit */
#define LF_RECEIVER_LFDSR6_TODU_gc(x) (x & 0x07)

/* FLL Manchester Detector Gain */
#define LF_RECEIVER_LFDSR7_MDG_gc(x) ((x<<6) & 0xC0)

/* FLL Manchester Detector Speed */
#define LF_RECEIVER_LFDSR7_MDSP_gc(x) ((x<<4) & 0x30)

/* FLL Preburst Gain */
#define LF_RECEIVER_LFDSR7_PBG_gc(x) ((x<<2) & 0x0C)

/* FLL Preburst Speed */
#define LF_RECEIVER_LFDSR7_PBSP_gc(x) (x & 0x03)

/* Adaptive Switch Threshold */
#define LF_RECEIVER_LFDSR8_ASWTH_gc(x) ((x<<4) & 0x70)

/* Loop Gain Fading Enable */
#define LF_RECEIVER_LGFE_CLEAR_gc (0x00) /* Loop Gain Fading Enable - CLEAR */
#define LF_RECEIVER_LGFE_SET_gc   (0x08) /* Loop Gain Fading Enable - SET */


/* Counter Limit Delta */
#define LF_RECEIVER_LFDSR8_CLD_gc(x) (x & 0x07)

/* LF Envelope Signal */
#define LF_RECEIVER_LFES_CLEAR_gc (0x00) /* LF Envelope Signal - CLEAR */
#define LF_RECEIVER_LFES_SET_gc   (0x80) /* LF Envelope Signal - SET */


/* LF Signal Detect */
#define LF_RECEIVER_LFSD_CLEAR_gc (0x00) /* LF Signal Detect - CLEAR */
#define LF_RECEIVER_LFSD_SET_gc   (0x40) /* LF Signal Detect - SET */


/* LF telegram Time Out Flag */
#define LF_RECEIVER_LFTOF_CLEAR_gc (0x00) /* LF telegram Time Out Flag - CLEAR */
#define LF_RECEIVER_LFTOF_SET_gc   (0x08) /* LF telegram Time Out Flag - SET */


/* LF End of Telegram Flag */
#define LF_RECEIVER_LFEOF_CLEAR_gc (0x00) /* LF End of Telegram Flag - CLEAR */
#define LF_RECEIVER_LFEOF_SET_gc   (0x04) /* LF End of Telegram Flag - SET */


/* LF Decoder Error Flag */
#define LF_RECEIVER_LFDEF_CLEAR_gc (0x00) /* LF Decoder Error Flag - CLEAR */
#define LF_RECEIVER_LFDEF_SET_gc   (0x02) /* LF Decoder Error Flag - SET */


/* LF Synchronization Detect Flag */
#define LF_RECEIVER_LFSYDF_CLEAR_gc (0x00) /* LF Synchronization Detect Flag - CLEAR */
#define LF_RECEIVER_LFSYDF_SET_gc   (0x01) /* LF Synchronization Detect Flag - SET */


/* LF End Of telegram Interrupt Mask */
#define LF_RECEIVER_LFEOIM_CLEAR_gc (0x00) /* LF End Of telegram Interrupt Mask - CLEAR */
#define LF_RECEIVER_LFEOIM_SET_gc   (0x04) /* LF End Of telegram Interrupt Mask - SET */


/* LF Decoder Error Interrupt Mask */
#define LF_RECEIVER_LFDEIM_CLEAR_gc (0x00) /* LF Decoder Error Interrupt Mask - CLEAR */
#define LF_RECEIVER_LFDEIM_SET_gc   (0x02) /* LF Decoder Error Interrupt Mask - SET */


/* LF Synchronization Detected Interrupt Mask */
#define LF_RECEIVER_LFSYDIM_CLEAR_gc (0x00) /* LF Synchronization Detected Interrupt Mask - CLEAR */
#define LF_RECEIVER_LFSYDIM_SET_gc   (0x01) /* LF Synchronization Detected Interrupt Mask - SET */


/* LF capacitor select channel 1 */
#define LF_RECEIVER_LFQC1_LFCS1_gc(x) ((x<<4) & 0xF0)

/* LF resistor select channel 1 */
#define LF_RECEIVER_LFQC1_LFQS1_gc(x) (x & 0x0F)

/* LF capacitor select channel 2 */
#define LF_RECEIVER_LFQC2_LFCS2_gc(x) ((x<<4) & 0xF0)

/* LF resistor select channel 2 */
#define LF_RECEIVER_LFQC2_LFQS2_gc(x) (x & 0x0F)

/* LF capacitor select channel 3 */
#define LF_RECEIVER_LFQC3_LFCS3_gc(x) ((x<<4) & 0xF0)

/* LF resistor select channel 3 */
#define LF_RECEIVER_LFQC3_LFQS3_gc(x) (x & 0x0F)

/* LF Receiver SRC Tuning Tuning value */
#define LF_RECEIVER_LFSRCT0_CLEAR_gc (0x00) /* LF Receiver SRC Tuning Tuning value - CLEAR */
#define LF_RECEIVER_LFSRCT0_SET_gc   (0x01) /* LF Receiver SRC Tuning Tuning value - SET */


/* LF Receiver SRC Tuning Tuning value */
#define LF_RECEIVER_LFSRCT8_CLEAR_gc (0x00) /* LF Receiver SRC Tuning Tuning value - CLEAR */
#define LF_RECEIVER_LFSRCT8_SET_gc   (0x80) /* LF Receiver SRC Tuning Tuning value - SET */


/* LF Receiver SRC Tuning Tuning value */
#define LF_RECEIVER_LFSRCT7_CLEAR_gc (0x00) /* LF Receiver SRC Tuning Tuning value - CLEAR */
#define LF_RECEIVER_LFSRCT7_SET_gc   (0x40) /* LF Receiver SRC Tuning Tuning value - SET */


/* LF Receiver SRC Tuning Tuning value */
#define LF_RECEIVER_LFSRCT6_CLEAR_gc (0x00) /* LF Receiver SRC Tuning Tuning value - CLEAR */
#define LF_RECEIVER_LFSRCT6_SET_gc   (0x20) /* LF Receiver SRC Tuning Tuning value - SET */


/* LF Receiver SRC Tuning Tuning value */
#define LF_RECEIVER_LFSRCT5_CLEAR_gc (0x00) /* LF Receiver SRC Tuning Tuning value - CLEAR */
#define LF_RECEIVER_LFSRCT5_SET_gc   (0x10) /* LF Receiver SRC Tuning Tuning value - SET */


/* LF Receiver SRC Tuning Tuning value */
#define LF_RECEIVER_LFSRCT4_CLEAR_gc (0x00) /* LF Receiver SRC Tuning Tuning value - CLEAR */
#define LF_RECEIVER_LFSRCT4_SET_gc   (0x08) /* LF Receiver SRC Tuning Tuning value - SET */


/* LF Receiver SRC Tuning Tuning value */
#define LF_RECEIVER_LFSRCT3_CLEAR_gc (0x00) /* LF Receiver SRC Tuning Tuning value - CLEAR */
#define LF_RECEIVER_LFSRCT3_SET_gc   (0x04) /* LF Receiver SRC Tuning Tuning value - SET */


/* LF Receiver SRC Tuning Tuning value */
#define LF_RECEIVER_LFSRCT2_CLEAR_gc (0x00) /* LF Receiver SRC Tuning Tuning value - CLEAR */
#define LF_RECEIVER_LFSRCT2_SET_gc   (0x02) /* LF Receiver SRC Tuning Tuning value - SET */


/* LF Receiver SRC Tuning Tuning value */
#define LF_RECEIVER_LFSRCT1_CLEAR_gc (0x00) /* LF Receiver SRC Tuning Tuning value - CLEAR */
#define LF_RECEIVER_LFSRCT1_SET_gc   (0x01) /* LF Receiver SRC Tuning Tuning value - SET */


/* LF Stop Bits Length */
#define LF_RECEIVER_LFSTOP_LFSTL_gc(x) ((x<<4) & 0x70)

/* LF Stop Bits Symbols */
#define LF_RECEIVER_LFSTOP_LFSTSY_gc(x) (x & 0x0F)

/*
--------------------------------------------------------------------------------
LF_RSSI - 
--------------------------------------------------------------------------------
*/


/* RSSI Calibration Bit 7 */
#define LF_RSSI_RSCALIB7_CLEAR_gc (0x00) /* RSSI Calibration Bit 7 - CLEAR */
#define LF_RSSI_RSCALIB7_SET_gc   (0x80) /* RSSI Calibration Bit 7 - SET */


/* RSSI Calibration Bit 6 */
#define LF_RSSI_RSCALIB6_CLEAR_gc (0x00) /* RSSI Calibration Bit 6 - CLEAR */
#define LF_RSSI_RSCALIB6_SET_gc   (0x40) /* RSSI Calibration Bit 6 - SET */


/* RSSI Calibration Bit 5 */
#define LF_RSSI_RSCALIB5_CLEAR_gc (0x00) /* RSSI Calibration Bit 5 - CLEAR */
#define LF_RSSI_RSCALIB5_SET_gc   (0x20) /* RSSI Calibration Bit 5 - SET */


/* RSSI Calibration Bit 4 */
#define LF_RSSI_RSCALIB4_CLEAR_gc (0x00) /* RSSI Calibration Bit 4 - CLEAR */
#define LF_RSSI_RSCALIB4_SET_gc   (0x10) /* RSSI Calibration Bit 4 - SET */


/* RSSI Calibration Bit 3 */
#define LF_RSSI_RSCALIB3_CLEAR_gc (0x00) /* RSSI Calibration Bit 3 - CLEAR */
#define LF_RSSI_RSCALIB3_SET_gc   (0x08) /* RSSI Calibration Bit 3 - SET */


/* RSSI Calibration Bit 2 */
#define LF_RSSI_RSCALIB2_CLEAR_gc (0x00) /* RSSI Calibration Bit 2 - CLEAR */
#define LF_RSSI_RSCALIB2_SET_gc   (0x04) /* RSSI Calibration Bit 2 - SET */


/* RSSI Calibration Bit 1 */
#define LF_RSSI_RSCALIB1_CLEAR_gc (0x00) /* RSSI Calibration Bit 1 - CLEAR */
#define LF_RSSI_RSCALIB1_SET_gc   (0x02) /* RSSI Calibration Bit 1 - SET */


/* RSSI Calibration Bit 0 */
#define LF_RSSI_RSCALIB0_CLEAR_gc (0x00) /* RSSI Calibration Bit 0 - CLEAR */
#define LF_RSSI_RSCALIB0_SET_gc   (0x01) /* RSSI Calibration Bit 0 - SET */


/* RSSI Reset Bit */
#define LF_RSSI_RSRES_CLEAR_gc (0x00) /* RSSI Reset Bit - CLEAR */
#define LF_RSSI_RSRES_SET_gc   (0x80) /* RSSI Reset Bit - SET */


/* RSSI Mode Bit 1 */
#define LF_RSSI_RSMODE1_CLEAR_gc (0x00) /* RSSI Mode Bit 1 - CLEAR */
#define LF_RSSI_RSMODE1_SET_gc   (0x20) /* RSSI Mode Bit 1 - SET */


/* RSSI Mode Bit 0 */
#define LF_RSSI_RSMODE0_CLEAR_gc (0x00) /* RSSI Mode Bit 0 - CLEAR */
#define LF_RSSI_RSMODE0_SET_gc   (0x10) /* RSSI Mode Bit 0 - SET */


/* RSSI Operation Flag Mask Bit */
#define LF_RSSI_RSOFM_CLEAR_gc (0x00) /* RSSI Operation Flag Mask Bit - CLEAR */
#define LF_RSSI_RSOFM_SET_gc   (0x08) /* RSSI Operation Flag Mask Bit - SET */


/* RSSI End Operation Request Bit */
#define LF_RSSI_RSEOR_CLEAR_gc (0x00) /* RSSI End Operation Request Bit - CLEAR */
#define LF_RSSI_RSEOR_SET_gc   (0x04) /* RSSI End Operation Request Bit - SET */


/* RSSI Operation Start Bit */
#define LF_RSSI_RSOS_CLEAR_gc (0x00) /* RSSI Operation Start Bit - CLEAR */
#define LF_RSSI_RSOS_SET_gc   (0x02) /* RSSI Operation Start Bit - SET */


/* RSSI Sign Detection Enable Bit */
#define LF_RSSI_RSSDEN_CLEAR_gc (0x00) /* RSSI Sign Detection Enable Bit - CLEAR */
#define LF_RSSI_RSSDEN_SET_gc   (0x01) /* RSSI Sign Detection Enable Bit - SET */


/* RSSI Debug Enable Bit */
#define LF_RSSI_RSDBGEN_CLEAR_gc (0x00) /* RSSI Debug Enable Bit - CLEAR */
#define LF_RSSI_RSDBGEN_SET_gc   (0x80) /* RSSI Debug Enable Bit - SET */


/* RSSI Debug Select Bit 1 */
#define LF_RSSI_RSDBGS1_CLEAR_gc (0x00) /* RSSI Debug Select Bit 1 - CLEAR */
#define LF_RSSI_RSDBGS1_SET_gc   (0x40) /* RSSI Debug Select Bit 1 - SET */


/* RSSI Debug Select Bit 0 */
#define LF_RSSI_RSDBGS0_CLEAR_gc (0x00) /* RSSI Debug Select Bit 0 - CLEAR */
#define LF_RSSI_RSDBGS0_SET_gc   (0x20) /* RSSI Debug Select Bit 0 - SET */


/* RSSI Hold Measurement Bit */
#define LF_RSSI_RSHOME_CLEAR_gc (0x00) /* RSSI Hold Measurement Bit - CLEAR */
#define LF_RSSI_RSHOME_SET_gc   (0x10) /* RSSI Hold Measurement Bit - SET */


/* RSSI Fix Pre-Divider Bit */
#define LF_RSSI_RSFPD_CLEAR_gc (0x00) /* RSSI Fix Pre-Divider Bit - CLEAR */
#define LF_RSSI_RSFPD_SET_gc   (0x08) /* RSSI Fix Pre-Divider Bit - SET */


/* RSSI Infinity Measurement Bit */
#define LF_RSSI_RSINFM_CLEAR_gc (0x00) /* RSSI Infinity Measurement Bit - CLEAR */
#define LF_RSSI_RSINFM_SET_gc   (0x04) /* RSSI Infinity Measurement Bit - SET */


/* RSSI Set Analog Bit */
#define LF_RSSI_RSSANA_CLEAR_gc (0x00) /* RSSI Set Analog Bit - CLEAR */
#define LF_RSSI_RSSANA_SET_gc   (0x01) /* RSSI Set Analog Bit - SET */


/* RSSI Range Delay Bit 1 */
#define LF_RSSI_RSRD1_CLEAR_gc (0x00) /* RSSI Range Delay Bit 1 - CLEAR */
#define LF_RSSI_RSRD1_SET_gc   (0x80) /* RSSI Range Delay Bit 1 - SET */


/* RSSI Range Delay Bit 0 */
#define LF_RSSI_RSRD0_CLEAR_gc (0x00) /* RSSI Range Delay Bit 0 - CLEAR */
#define LF_RSSI_RSRD0_SET_gc   (0x40) /* RSSI Range Delay Bit 0 - SET */


/* RSSI Tracking Delay Bit 5 */
#define LF_RSSI_RSTRD5_CLEAR_gc (0x00) /* RSSI Tracking Delay Bit 5 - CLEAR */
#define LF_RSSI_RSTRD5_SET_gc   (0x20) /* RSSI Tracking Delay Bit 5 - SET */


/* RSSI Tracking Delay Bit 4 */
#define LF_RSSI_RSTRD4_CLEAR_gc (0x00) /* RSSI Tracking Delay Bit 4 - CLEAR */
#define LF_RSSI_RSTRD4_SET_gc   (0x10) /* RSSI Tracking Delay Bit 4 - SET */


/* RSSI Tracking Delay Bit 3 */
#define LF_RSSI_RSTRD3_CLEAR_gc (0x00) /* RSSI Tracking Delay Bit 3 - CLEAR */
#define LF_RSSI_RSTRD3_SET_gc   (0x08) /* RSSI Tracking Delay Bit 3 - SET */


/* RSSI Tracking Delay Bit 2 */
#define LF_RSSI_RSTRD2_CLEAR_gc (0x00) /* RSSI Tracking Delay Bit 2 - CLEAR */
#define LF_RSSI_RSTRD2_SET_gc   (0x04) /* RSSI Tracking Delay Bit 2 - SET */


/* RSSI Tracking Delay Bit 1 */
#define LF_RSSI_RSTRD1_CLEAR_gc (0x00) /* RSSI Tracking Delay Bit 1 - CLEAR */
#define LF_RSSI_RSTRD1_SET_gc   (0x02) /* RSSI Tracking Delay Bit 1 - SET */


/* RSSI Tracking Delay Bit 0 */
#define LF_RSSI_RSTRD0_CLEAR_gc (0x00) /* RSSI Tracking Delay Bit 0 - CLEAR */
#define LF_RSSI_RSTRD0_SET_gc   (0x01) /* RSSI Tracking Delay Bit 0 - SET */


/* RSSI Averaging Out of Range Channel 3 Bit */
#define LF_RSSI_RSAOOR3_CLEAR_gc (0x00) /* RSSI Averaging Out of Range Channel 3 Bit - CLEAR */
#define LF_RSSI_RSAOOR3_SET_gc   (0x80) /* RSSI Averaging Out of Range Channel 3 Bit - SET */


/* RSSI Averaging Out of Range Channel 2 Bit */
#define LF_RSSI_RSAOOR2_CLEAR_gc (0x00) /* RSSI Averaging Out of Range Channel 2 Bit - CLEAR */
#define LF_RSSI_RSAOOR2_SET_gc   (0x40) /* RSSI Averaging Out of Range Channel 2 Bit - SET */


/* RSSI Averaging Out of Range Channel 1 Bit */
#define LF_RSSI_RSAOOR1_CLEAR_gc (0x00) /* RSSI Averaging Out of Range Channel 1 Bit - CLEAR */
#define LF_RSSI_RSAOOR1_SET_gc   (0x20) /* RSSI Averaging Out of Range Channel 1 Bit - SET */


/* RSSI Operation Finish Flag Bit */
#define LF_RSSI_RSOFF_CLEAR_gc (0x00) /* RSSI Operation Finish Flag Bit - CLEAR */
#define LF_RSSI_RSOFF_SET_gc   (0x08) /* RSSI Operation Finish Flag Bit - SET */


/* RSSI Out of Range Channel 3 Bit */
#define LF_RSSI_RSOOR3_CLEAR_gc (0x00) /* RSSI Out of Range Channel 3 Bit - CLEAR */
#define LF_RSSI_RSOOR3_SET_gc   (0x04) /* RSSI Out of Range Channel 3 Bit - SET */


/* RSSI Out of Range Channel 2 Bit */
#define LF_RSSI_RSOOR2_CLEAR_gc (0x00) /* RSSI Out of Range Channel 2 Bit - CLEAR */
#define LF_RSSI_RSOOR2_SET_gc   (0x02) /* RSSI Out of Range Channel 2 Bit - SET */


/* RSSI Out of Range Channel 1 Bit */
#define LF_RSSI_RSOOR1_CLEAR_gc (0x00) /* RSSI Out of Range Channel 1 Bit - CLEAR */
#define LF_RSSI_RSOOR1_SET_gc   (0x01) /* RSSI Out of Range Channel 1 Bit - SET */


/* RSSI Set Calibration Bit */
#define LF_RSSI_RSSCAL_CLEAR_gc (0x00) /* RSSI Set Calibration Bit - CLEAR */
#define LF_RSSI_RSSCAL_SET_gc   (0x80) /* RSSI Set Calibration Bit - SET */


/* RSSI Show Sample Value Bit */
#define LF_RSSI_RSSSV_CLEAR_gc (0x00) /* RSSI Show Sample Value Bit - CLEAR */
#define LF_RSSI_RSSSV_SET_gc   (0x40) /* RSSI Show Sample Value Bit - SET */


/* RSSI Current Mode Select Bit */
#define LF_RSSI_RSCMS_CLEAR_gc (0x00) /* RSSI Current Mode Select Bit - CLEAR */
#define LF_RSSI_RSCMS_SET_gc   (0x20) /* RSSI Current Mode Select Bit - SET */


/* RSSI Stimulus Bit */
#define LF_RSSI_RSSTIM_CLEAR_gc (0x00) /* RSSI Stimulus Bit - CLEAR */
#define LF_RSSI_RSSTIM_SET_gc   (0x10) /* RSSI Stimulus Bit - SET */


/* RSSI internal Measurement Bit */
#define LF_RSSI_RSINTM_CLEAR_gc (0x00) /* RSSI internal Measurement Bit - CLEAR */
#define LF_RSSI_RSINTM_SET_gc   (0x08) /* RSSI internal Measurement Bit - SET */


/* RSSI Channel 3 Enable Bit */
#define LF_RSSI_RSCH3E_CLEAR_gc (0x00) /* RSSI Channel 3 Enable Bit - CLEAR */
#define LF_RSSI_RSCH3E_SET_gc   (0x04) /* RSSI Channel 3 Enable Bit - SET */


/* RSSI Channel 2 Enable Bit */
#define LF_RSSI_RSCH2E_CLEAR_gc (0x00) /* RSSI Channel 2 Enable Bit - CLEAR */
#define LF_RSSI_RSCH2E_SET_gc   (0x02) /* RSSI Channel 2 Enable Bit - SET */


/* RSSI Channel 1 Enable Bit */
#define LF_RSSI_RSCH1E_CLEAR_gc (0x00) /* RSSI Channel 1 Enable Bit - CLEAR */
#define LF_RSSI_RSCH1E_SET_gc   (0x01) /* RSSI Channel 1 Enable Bit - SET */


/* RSSI Average Select Bit 3 */
#define LF_RSSI_RSAVGS3_CLEAR_gc (0x00) /* RSSI Average Select Bit 3 - CLEAR */
#define LF_RSSI_RSAVGS3_SET_gc   (0x80) /* RSSI Average Select Bit 3 - SET */


/* RSSI Average Select Bit 2 */
#define LF_RSSI_RSAVGS2_CLEAR_gc (0x00) /* RSSI Average Select Bit 2 - CLEAR */
#define LF_RSSI_RSAVGS2_SET_gc   (0x40) /* RSSI Average Select Bit 2 - SET */


/* RSSI Average Select Bit 1 */
#define LF_RSSI_RSAVGS1_CLEAR_gc (0x00) /* RSSI Average Select Bit 1 - CLEAR */
#define LF_RSSI_RSAVGS1_SET_gc   (0x20) /* RSSI Average Select Bit 1 - SET */


/* RSSI Average Select Bit 0 */
#define LF_RSSI_RSAVGS0_CLEAR_gc (0x00) /* RSSI Average Select Bit 0 - CLEAR */
#define LF_RSSI_RSAVGS0_SET_gc   (0x10) /* RSSI Average Select Bit 0 - SET */


/* RSSI Sample Address Bit 3 */
#define LF_RSSI_RSSADR3_CLEAR_gc (0x00) /* RSSI Sample Address Bit 3 - CLEAR */
#define LF_RSSI_RSSADR3_SET_gc   (0x08) /* RSSI Sample Address Bit 3 - SET */


/* RSSI Sample Address Bit 2 */
#define LF_RSSI_RSSADR2_CLEAR_gc (0x00) /* RSSI Sample Address Bit 2 - CLEAR */
#define LF_RSSI_RSSADR2_SET_gc   (0x04) /* RSSI Sample Address Bit 2 - SET */


/* RSSI Sample Address Bit 1 */
#define LF_RSSI_RSSADR1_CLEAR_gc (0x00) /* RSSI Sample Address Bit 1 - CLEAR */
#define LF_RSSI_RSSADR1_SET_gc   (0x02) /* RSSI Sample Address Bit 1 - SET */


/* RSSI Sample Address Bit 0 */
#define LF_RSSI_RSSADR0_CLEAR_gc (0x00) /* RSSI Sample Address Bit 0 - CLEAR */
#define LF_RSSI_RSSADR0_SET_gc   (0x01) /* RSSI Sample Address Bit 0 - SET */


/* RSSI Result 1 High Byte Bit 7 */
#define LF_RSSI_RSRES1H7_CLEAR_gc (0x00) /* RSSI Result 1 High Byte Bit 7 - CLEAR */
#define LF_RSSI_RSRES1H7_SET_gc   (0x80) /* RSSI Result 1 High Byte Bit 7 - SET */


/* RSSI Result 1 High Byte Bit 6 */
#define LF_RSSI_RSRES1H6_CLEAR_gc (0x00) /* RSSI Result 1 High Byte Bit 6 - CLEAR */
#define LF_RSSI_RSRES1H6_SET_gc   (0x40) /* RSSI Result 1 High Byte Bit 6 - SET */


/* RSSI Result 1 High Byte Bit 5 */
#define LF_RSSI_RSRES1H5_CLEAR_gc (0x00) /* RSSI Result 1 High Byte Bit 5 - CLEAR */
#define LF_RSSI_RSRES1H5_SET_gc   (0x20) /* RSSI Result 1 High Byte Bit 5 - SET */


/* RSSI Result 1 High Byte Bit 4 */
#define LF_RSSI_RSRES1H4_CLEAR_gc (0x00) /* RSSI Result 1 High Byte Bit 4 - CLEAR */
#define LF_RSSI_RSRES1H4_SET_gc   (0x10) /* RSSI Result 1 High Byte Bit 4 - SET */


/* RSSI Result 1 High Byte Bit 3 */
#define LF_RSSI_RSRES1H3_CLEAR_gc (0x00) /* RSSI Result 1 High Byte Bit 3 - CLEAR */
#define LF_RSSI_RSRES1H3_SET_gc   (0x08) /* RSSI Result 1 High Byte Bit 3 - SET */


/* RSSI Result 1 High Byte Bit 2 */
#define LF_RSSI_RSRES1H2_CLEAR_gc (0x00) /* RSSI Result 1 High Byte Bit 2 - CLEAR */
#define LF_RSSI_RSRES1H2_SET_gc   (0x04) /* RSSI Result 1 High Byte Bit 2 - SET */


/* RSSI Result 1 High Byte Bit 1 */
#define LF_RSSI_RSRES1H1_CLEAR_gc (0x00) /* RSSI Result 1 High Byte Bit 1 - CLEAR */
#define LF_RSSI_RSRES1H1_SET_gc   (0x02) /* RSSI Result 1 High Byte Bit 1 - SET */


/* RSSI Result 1 High Byte Bit 0 */
#define LF_RSSI_RSRES1H0_CLEAR_gc (0x00) /* RSSI Result 1 High Byte Bit 0 - CLEAR */
#define LF_RSSI_RSRES1H0_SET_gc   (0x01) /* RSSI Result 1 High Byte Bit 0 - SET */


/* RSSI Result 1 Low Byte Bit 7 */
#define LF_RSSI_RSRES1L7_CLEAR_gc (0x00) /* RSSI Result 1 Low Byte Bit 7 - CLEAR */
#define LF_RSSI_RSRES1L7_SET_gc   (0x80) /* RSSI Result 1 Low Byte Bit 7 - SET */


/* RSSI Result 1 Low Byte Bit 6 */
#define LF_RSSI_RSRES1L6_CLEAR_gc (0x00) /* RSSI Result 1 Low Byte Bit 6 - CLEAR */
#define LF_RSSI_RSRES1L6_SET_gc   (0x40) /* RSSI Result 1 Low Byte Bit 6 - SET */


/* RSSI Result 1 Low Byte Bit 5 */
#define LF_RSSI_RSRES1L5_CLEAR_gc (0x00) /* RSSI Result 1 Low Byte Bit 5 - CLEAR */
#define LF_RSSI_RSRES1L5_SET_gc   (0x20) /* RSSI Result 1 Low Byte Bit 5 - SET */


/* RSSI Result 1 Low Byte Bit 4 */
#define LF_RSSI_RSRES1L4_CLEAR_gc (0x00) /* RSSI Result 1 Low Byte Bit 4 - CLEAR */
#define LF_RSSI_RSRES1L4_SET_gc   (0x10) /* RSSI Result 1 Low Byte Bit 4 - SET */


/* RSSI Result 1 Low Byte Bit 3 */
#define LF_RSSI_RSRES1L3_CLEAR_gc (0x00) /* RSSI Result 1 Low Byte Bit 3 - CLEAR */
#define LF_RSSI_RSRES1L3_SET_gc   (0x08) /* RSSI Result 1 Low Byte Bit 3 - SET */


/* RSSI Result 1 Low Byte Bit 2 */
#define LF_RSSI_RSRES1L2_CLEAR_gc (0x00) /* RSSI Result 1 Low Byte Bit 2 - CLEAR */
#define LF_RSSI_RSRES1L2_SET_gc   (0x04) /* RSSI Result 1 Low Byte Bit 2 - SET */


/* RSSI Result 1 Low Byte Bit 1 */
#define LF_RSSI_RSRES1L1_CLEAR_gc (0x00) /* RSSI Result 1 Low Byte Bit 1 - CLEAR */
#define LF_RSSI_RSRES1L1_SET_gc   (0x02) /* RSSI Result 1 Low Byte Bit 1 - SET */


/* RSSI Result 1 Low Byte Bit 0 */
#define LF_RSSI_RSRES1L0_CLEAR_gc (0x00) /* RSSI Result 1 Low Byte Bit 0 - CLEAR */
#define LF_RSSI_RSRES1L0_SET_gc   (0x01) /* RSSI Result 1 Low Byte Bit 0 - SET */


/* RSSI Result 2 High Byte Bit 7 */
#define LF_RSSI_RSRES2H7_CLEAR_gc (0x00) /* RSSI Result 2 High Byte Bit 7 - CLEAR */
#define LF_RSSI_RSRES2H7_SET_gc   (0x80) /* RSSI Result 2 High Byte Bit 7 - SET */


/* RSSI Result 2 High Byte Bit 6 */
#define LF_RSSI_RSRES2H6_CLEAR_gc (0x00) /* RSSI Result 2 High Byte Bit 6 - CLEAR */
#define LF_RSSI_RSRES2H6_SET_gc   (0x40) /* RSSI Result 2 High Byte Bit 6 - SET */


/* RSSI Result 2 High Byte Bit 5 */
#define LF_RSSI_RSRES2H5_CLEAR_gc (0x00) /* RSSI Result 2 High Byte Bit 5 - CLEAR */
#define LF_RSSI_RSRES2H5_SET_gc   (0x20) /* RSSI Result 2 High Byte Bit 5 - SET */


/* RSSI Result 2 High Byte Bit 4 */
#define LF_RSSI_RSRES2H4_CLEAR_gc (0x00) /* RSSI Result 2 High Byte Bit 4 - CLEAR */
#define LF_RSSI_RSRES2H4_SET_gc   (0x10) /* RSSI Result 2 High Byte Bit 4 - SET */


/* RSSI Result 2 High Byte Bit 3 */
#define LF_RSSI_RSRES2H3_CLEAR_gc (0x00) /* RSSI Result 2 High Byte Bit 3 - CLEAR */
#define LF_RSSI_RSRES2H3_SET_gc   (0x08) /* RSSI Result 2 High Byte Bit 3 - SET */


/* RSSI Result 2 High Byte Bit 2 */
#define LF_RSSI_RSRES2H2_CLEAR_gc (0x00) /* RSSI Result 2 High Byte Bit 2 - CLEAR */
#define LF_RSSI_RSRES2H2_SET_gc   (0x04) /* RSSI Result 2 High Byte Bit 2 - SET */


/* RSSI Result 2 High Byte Bit 1 */
#define LF_RSSI_RSRES2H1_CLEAR_gc (0x00) /* RSSI Result 2 High Byte Bit 1 - CLEAR */
#define LF_RSSI_RSRES2H1_SET_gc   (0x02) /* RSSI Result 2 High Byte Bit 1 - SET */


/* RSSI Result 2 High Byte Bit 0 */
#define LF_RSSI_RSRES2H0_CLEAR_gc (0x00) /* RSSI Result 2 High Byte Bit 0 - CLEAR */
#define LF_RSSI_RSRES2H0_SET_gc   (0x01) /* RSSI Result 2 High Byte Bit 0 - SET */


/* RSSI Result 2 Low Byte Bit 7 */
#define LF_RSSI_RSRES2L7_CLEAR_gc (0x00) /* RSSI Result 2 Low Byte Bit 7 - CLEAR */
#define LF_RSSI_RSRES2L7_SET_gc   (0x80) /* RSSI Result 2 Low Byte Bit 7 - SET */


/* RSSI Result 2 Low Byte Bit 6 */
#define LF_RSSI_RSRES2L6_CLEAR_gc (0x00) /* RSSI Result 2 Low Byte Bit 6 - CLEAR */
#define LF_RSSI_RSRES2L6_SET_gc   (0x40) /* RSSI Result 2 Low Byte Bit 6 - SET */


/* RSSI Result 2 Low Byte Bit 5 */
#define LF_RSSI_RSRES2L5_CLEAR_gc (0x00) /* RSSI Result 2 Low Byte Bit 5 - CLEAR */
#define LF_RSSI_RSRES2L5_SET_gc   (0x20) /* RSSI Result 2 Low Byte Bit 5 - SET */


/* RSSI Result 2 Low Byte Bit 4 */
#define LF_RSSI_RSRES2L4_CLEAR_gc (0x00) /* RSSI Result 2 Low Byte Bit 4 - CLEAR */
#define LF_RSSI_RSRES2L4_SET_gc   (0x10) /* RSSI Result 2 Low Byte Bit 4 - SET */


/* RSSI Result 2 Low Byte Bit 3 */
#define LF_RSSI_RSRES2L3_CLEAR_gc (0x00) /* RSSI Result 2 Low Byte Bit 3 - CLEAR */
#define LF_RSSI_RSRES2L3_SET_gc   (0x08) /* RSSI Result 2 Low Byte Bit 3 - SET */


/* RSSI Result 2 Low Byte Bit 2 */
#define LF_RSSI_RSRES2L2_CLEAR_gc (0x00) /* RSSI Result 2 Low Byte Bit 2 - CLEAR */
#define LF_RSSI_RSRES2L2_SET_gc   (0x04) /* RSSI Result 2 Low Byte Bit 2 - SET */


/* RSSI Result 2 Low Byte Bit 1 */
#define LF_RSSI_RSRES2L1_CLEAR_gc (0x00) /* RSSI Result 2 Low Byte Bit 1 - CLEAR */
#define LF_RSSI_RSRES2L1_SET_gc   (0x02) /* RSSI Result 2 Low Byte Bit 1 - SET */


/* RSSI Result 2 Low Byte Bit 0 */
#define LF_RSSI_RSRES2L0_CLEAR_gc (0x00) /* RSSI Result 2 Low Byte Bit 0 - CLEAR */
#define LF_RSSI_RSRES2L0_SET_gc   (0x01) /* RSSI Result 2 Low Byte Bit 0 - SET */


/* RSSI Result 3 High Byte Bit 7 */
#define LF_RSSI_RSRES3H7_CLEAR_gc (0x00) /* RSSI Result 3 High Byte Bit 7 - CLEAR */
#define LF_RSSI_RSRES3H7_SET_gc   (0x80) /* RSSI Result 3 High Byte Bit 7 - SET */


/* RSSI Result 3 High Byte Bit 6 */
#define LF_RSSI_RSRES3H6_CLEAR_gc (0x00) /* RSSI Result 3 High Byte Bit 6 - CLEAR */
#define LF_RSSI_RSRES3H6_SET_gc   (0x40) /* RSSI Result 3 High Byte Bit 6 - SET */


/* RSSI Result 3 High Byte Bit 5 */
#define LF_RSSI_RSRES3H5_CLEAR_gc (0x00) /* RSSI Result 3 High Byte Bit 5 - CLEAR */
#define LF_RSSI_RSRES3H5_SET_gc   (0x20) /* RSSI Result 3 High Byte Bit 5 - SET */


/* RSSI Result 3 High Byte Bit 4 */
#define LF_RSSI_RSRES3H4_CLEAR_gc (0x00) /* RSSI Result 3 High Byte Bit 4 - CLEAR */
#define LF_RSSI_RSRES3H4_SET_gc   (0x10) /* RSSI Result 3 High Byte Bit 4 - SET */


/* RSSI Result 3 High Byte Bit 3 */
#define LF_RSSI_RSRES3H3_CLEAR_gc (0x00) /* RSSI Result 3 High Byte Bit 3 - CLEAR */
#define LF_RSSI_RSRES3H3_SET_gc   (0x08) /* RSSI Result 3 High Byte Bit 3 - SET */


/* RSSI Result 3 High Byte Bit 2 */
#define LF_RSSI_RSRES3H2_CLEAR_gc (0x00) /* RSSI Result 3 High Byte Bit 2 - CLEAR */
#define LF_RSSI_RSRES3H2_SET_gc   (0x04) /* RSSI Result 3 High Byte Bit 2 - SET */


/* RSSI Result 3 High Byte Bit 1 */
#define LF_RSSI_RSRES3H1_CLEAR_gc (0x00) /* RSSI Result 3 High Byte Bit 1 - CLEAR */
#define LF_RSSI_RSRES3H1_SET_gc   (0x02) /* RSSI Result 3 High Byte Bit 1 - SET */


/* RSSI Result 3 High Byte Bit 0 */
#define LF_RSSI_RSRES3H0_CLEAR_gc (0x00) /* RSSI Result 3 High Byte Bit 0 - CLEAR */
#define LF_RSSI_RSRES3H0_SET_gc   (0x01) /* RSSI Result 3 High Byte Bit 0 - SET */


/* RSSI Result 3 Low Byte Bit 7 */
#define LF_RSSI_RSRES3L7_CLEAR_gc (0x00) /* RSSI Result 3 Low Byte Bit 7 - CLEAR */
#define LF_RSSI_RSRES3L7_SET_gc   (0x80) /* RSSI Result 3 Low Byte Bit 7 - SET */


/* RSSI Result 3 Low Byte Bit 6 */
#define LF_RSSI_RSRES3L6_CLEAR_gc (0x00) /* RSSI Result 3 Low Byte Bit 6 - CLEAR */
#define LF_RSSI_RSRES3L6_SET_gc   (0x40) /* RSSI Result 3 Low Byte Bit 6 - SET */


/* RSSI Result 3 Low Byte Bit 5 */
#define LF_RSSI_RSRES3L5_CLEAR_gc (0x00) /* RSSI Result 3 Low Byte Bit 5 - CLEAR */
#define LF_RSSI_RSRES3L5_SET_gc   (0x20) /* RSSI Result 3 Low Byte Bit 5 - SET */


/* RSSI Result 3 Low Byte Bit 4 */
#define LF_RSSI_RSRES3L4_CLEAR_gc (0x00) /* RSSI Result 3 Low Byte Bit 4 - CLEAR */
#define LF_RSSI_RSRES3L4_SET_gc   (0x10) /* RSSI Result 3 Low Byte Bit 4 - SET */


/* RSSI Result 3 Low Byte Bit 3 */
#define LF_RSSI_RSRES3L3_CLEAR_gc (0x00) /* RSSI Result 3 Low Byte Bit 3 - CLEAR */
#define LF_RSSI_RSRES3L3_SET_gc   (0x08) /* RSSI Result 3 Low Byte Bit 3 - SET */


/* RSSI Result 3 Low Byte Bit 2 */
#define LF_RSSI_RSRES3L2_CLEAR_gc (0x00) /* RSSI Result 3 Low Byte Bit 2 - CLEAR */
#define LF_RSSI_RSRES3L2_SET_gc   (0x04) /* RSSI Result 3 Low Byte Bit 2 - SET */


/* RSSI Result 3 Low Byte Bit 1 */
#define LF_RSSI_RSRES3L1_CLEAR_gc (0x00) /* RSSI Result 3 Low Byte Bit 1 - CLEAR */
#define LF_RSSI_RSRES3L1_SET_gc   (0x02) /* RSSI Result 3 Low Byte Bit 1 - SET */


/* RSSI Result 3 Low Byte Bit 0 */
#define LF_RSSI_RSRES3L0_CLEAR_gc (0x00) /* RSSI Result 3 Low Byte Bit 0 - CLEAR */
#define LF_RSSI_RSRES3L0_SET_gc   (0x01) /* RSSI Result 3 Low Byte Bit 0 - SET */


/* RSSI Result 4 High Byte Bit 7 */
#define LF_RSSI_RSRES4H7_CLEAR_gc (0x00) /* RSSI Result 4 High Byte Bit 7 - CLEAR */
#define LF_RSSI_RSRES4H7_SET_gc   (0x80) /* RSSI Result 4 High Byte Bit 7 - SET */


/* RSSI Result 4 High Byte Bit 6 */
#define LF_RSSI_RSRES4H6_CLEAR_gc (0x00) /* RSSI Result 4 High Byte Bit 6 - CLEAR */
#define LF_RSSI_RSRES4H6_SET_gc   (0x40) /* RSSI Result 4 High Byte Bit 6 - SET */


/* RSSI Result 4 High Byte Bit 5 */
#define LF_RSSI_RSRES4H5_CLEAR_gc (0x00) /* RSSI Result 4 High Byte Bit 5 - CLEAR */
#define LF_RSSI_RSRES4H5_SET_gc   (0x20) /* RSSI Result 4 High Byte Bit 5 - SET */


/* RSSI Result 4 High Byte Bit 4 */
#define LF_RSSI_RSRES4H4_CLEAR_gc (0x00) /* RSSI Result 4 High Byte Bit 4 - CLEAR */
#define LF_RSSI_RSRES4H4_SET_gc   (0x10) /* RSSI Result 4 High Byte Bit 4 - SET */


/* RSSI Result 4 High Byte Bit 3 */
#define LF_RSSI_RSRES4H3_CLEAR_gc (0x00) /* RSSI Result 4 High Byte Bit 3 - CLEAR */
#define LF_RSSI_RSRES4H3_SET_gc   (0x08) /* RSSI Result 4 High Byte Bit 3 - SET */


/* RSSI Result 4 High Byte Bit 2 */
#define LF_RSSI_RSRES4H2_CLEAR_gc (0x00) /* RSSI Result 4 High Byte Bit 2 - CLEAR */
#define LF_RSSI_RSRES4H2_SET_gc   (0x04) /* RSSI Result 4 High Byte Bit 2 - SET */


/* RSSI Result 4 High Byte Bit 1 */
#define LF_RSSI_RSRES4H1_CLEAR_gc (0x00) /* RSSI Result 4 High Byte Bit 1 - CLEAR */
#define LF_RSSI_RSRES4H1_SET_gc   (0x02) /* RSSI Result 4 High Byte Bit 1 - SET */


/* RSSI Result 4 High Byte Bit 0 */
#define LF_RSSI_RSRES4H0_CLEAR_gc (0x00) /* RSSI Result 4 High Byte Bit 0 - CLEAR */
#define LF_RSSI_RSRES4H0_SET_gc   (0x01) /* RSSI Result 4 High Byte Bit 0 - SET */


/* RSSI Result 4 Low Byte Bit 7 */
#define LF_RSSI_RSRES4L7_CLEAR_gc (0x00) /* RSSI Result 4 Low Byte Bit 7 - CLEAR */
#define LF_RSSI_RSRES4L7_SET_gc   (0x80) /* RSSI Result 4 Low Byte Bit 7 - SET */


/* RSSI Result 4 Low Byte Bit 6 */
#define LF_RSSI_RSRES4L6_CLEAR_gc (0x00) /* RSSI Result 4 Low Byte Bit 6 - CLEAR */
#define LF_RSSI_RSRES4L6_SET_gc   (0x40) /* RSSI Result 4 Low Byte Bit 6 - SET */


/* RSSI Result 4 Low Byte Bit 5 */
#define LF_RSSI_RSRES4L5_CLEAR_gc (0x00) /* RSSI Result 4 Low Byte Bit 5 - CLEAR */
#define LF_RSSI_RSRES4L5_SET_gc   (0x20) /* RSSI Result 4 Low Byte Bit 5 - SET */


/* RSSI Result 4 Low Byte Bit 4 */
#define LF_RSSI_RSRES4L4_CLEAR_gc (0x00) /* RSSI Result 4 Low Byte Bit 4 - CLEAR */
#define LF_RSSI_RSRES4L4_SET_gc   (0x10) /* RSSI Result 4 Low Byte Bit 4 - SET */


/* RSSI Result 4 Low Byte Bit 3 */
#define LF_RSSI_RSRES4L3_CLEAR_gc (0x00) /* RSSI Result 4 Low Byte Bit 3 - CLEAR */
#define LF_RSSI_RSRES4L3_SET_gc   (0x08) /* RSSI Result 4 Low Byte Bit 3 - SET */


/* RSSI Result 4 Low Byte Bit 2 */
#define LF_RSSI_RSRES4L2_CLEAR_gc (0x00) /* RSSI Result 4 Low Byte Bit 2 - CLEAR */
#define LF_RSSI_RSRES4L2_SET_gc   (0x04) /* RSSI Result 4 Low Byte Bit 2 - SET */


/* RSSI Result 4 Low Byte Bit 1 */
#define LF_RSSI_RSRES4L1_CLEAR_gc (0x00) /* RSSI Result 4 Low Byte Bit 1 - CLEAR */
#define LF_RSSI_RSRES4L1_SET_gc   (0x02) /* RSSI Result 4 Low Byte Bit 1 - SET */


/* RSSI Result 4 Low Byte Bit 0 */
#define LF_RSSI_RSRES4L0_CLEAR_gc (0x00) /* RSSI Result 4 Low Byte Bit 0 - CLEAR */
#define LF_RSSI_RSRES4L0_SET_gc   (0x01) /* RSSI Result 4 Low Byte Bit 0 - SET */


/* RSSI Sample Valid Bit */
#define LF_RSSI_RSSVLD_CLEAR_gc (0x00) /* RSSI Sample Valid Bit - CLEAR */
#define LF_RSSI_RSSVLD_SET_gc   (0x02) /* RSSI Sample Valid Bit - SET */


/* RSSI Ready Bit */
#define LF_RSSI_RSRDY_CLEAR_gc (0x00) /* RSSI Ready Bit - CLEAR */
#define LF_RSSI_RSRDY_SET_gc   (0x01) /* RSSI Ready Bit - SET */


/* RSSI SRC Step Bit 1 */
#define LF_RSSI_SRCSTEP1_CLEAR_gc (0x00) /* RSSI SRC Step Bit 1 - CLEAR */
#define LF_RSSI_SRCSTEP1_SET_gc   (0x80) /* RSSI SRC Step Bit 1 - SET */


/* RSSI SRC Step Bit 0 */
#define LF_RSSI_SRCSTEP0_CLEAR_gc (0x00) /* RSSI SRC Step Bit 0 - CLEAR */
#define LF_RSSI_SRCSTEP0_SET_gc   (0x40) /* RSSI SRC Step Bit 0 - SET */


/* RSSI SRC Clear Bit */
#define LF_RSSI_SRCCLR_CLEAR_gc (0x00) /* RSSI SRC Clear Bit - CLEAR */
#define LF_RSSI_SRCCLR_SET_gc   (0x10) /* RSSI SRC Clear Bit - SET */


/* RSSI SRC Minimum Value Bit 1 */
#define LF_RSSI_SRCMIN1_CLEAR_gc (0x00) /* RSSI SRC Minimum Value Bit 1 - CLEAR */
#define LF_RSSI_SRCMIN1_SET_gc   (0x08) /* RSSI SRC Minimum Value Bit 1 - SET */


/* RSSI SRC Minimum Value Bit 0 */
#define LF_RSSI_SRCMIN0_CLEAR_gc (0x00) /* RSSI SRC Minimum Value Bit 0 - CLEAR */
#define LF_RSSI_SRCMIN0_SET_gc   (0x04) /* RSSI SRC Minimum Value Bit 0 - SET */


/* RSSI SRC Calibration Mode Bit 1 */
#define LF_RSSI_SRCMODE1_CLEAR_gc (0x00) /* RSSI SRC Calibration Mode Bit 1 - CLEAR */
#define LF_RSSI_SRCMODE1_SET_gc   (0x02) /* RSSI SRC Calibration Mode Bit 1 - SET */


/* RSSI SRC Calibration Mode Bit 0 */
#define LF_RSSI_SRCMODE0_CLEAR_gc (0x00) /* RSSI SRC Calibration Mode Bit 0 - CLEAR */
#define LF_RSSI_SRCMODE0_SET_gc   (0x01) /* RSSI SRC Calibration Mode Bit 0 - SET */


/* Sign Detection Channel 1 vs 2 Result Bit 7 */
#define LF_RSSI_SD12RR7_CLEAR_gc (0x00) /* Sign Detection Channel 1 vs 2 Result Bit 7 - CLEAR */
#define LF_RSSI_SD12RR7_SET_gc   (0x80) /* Sign Detection Channel 1 vs 2 Result Bit 7 - SET */


/* Sign Detection Channel 1 vs 2 Result Bit 6 */
#define LF_RSSI_SD12RR6_CLEAR_gc (0x00) /* Sign Detection Channel 1 vs 2 Result Bit 6 - CLEAR */
#define LF_RSSI_SD12RR6_SET_gc   (0x40) /* Sign Detection Channel 1 vs 2 Result Bit 6 - SET */


/* Sign Detection Channel 1 vs 2 Result Bit 5 */
#define LF_RSSI_SD12RR5_CLEAR_gc (0x00) /* Sign Detection Channel 1 vs 2 Result Bit 5 - CLEAR */
#define LF_RSSI_SD12RR5_SET_gc   (0x20) /* Sign Detection Channel 1 vs 2 Result Bit 5 - SET */


/* Sign Detection Channel 1 vs 2 Result Bit 4 */
#define LF_RSSI_SD12RR4_CLEAR_gc (0x00) /* Sign Detection Channel 1 vs 2 Result Bit 4 - CLEAR */
#define LF_RSSI_SD12RR4_SET_gc   (0x10) /* Sign Detection Channel 1 vs 2 Result Bit 4 - SET */


/* Sign Detection Channel 1 vs 2 Result Bit 3 */
#define LF_RSSI_SD12RR3_CLEAR_gc (0x00) /* Sign Detection Channel 1 vs 2 Result Bit 3 - CLEAR */
#define LF_RSSI_SD12RR3_SET_gc   (0x08) /* Sign Detection Channel 1 vs 2 Result Bit 3 - SET */


/* Sign Detection Channel 1 vs 2 Result Bit 2 */
#define LF_RSSI_SD12RR2_CLEAR_gc (0x00) /* Sign Detection Channel 1 vs 2 Result Bit 2 - CLEAR */
#define LF_RSSI_SD12RR2_SET_gc   (0x04) /* Sign Detection Channel 1 vs 2 Result Bit 2 - SET */


/* Sign Detection Channel 1 vs 2 Result Bit 1 */
#define LF_RSSI_SD12RR1_CLEAR_gc (0x00) /* Sign Detection Channel 1 vs 2 Result Bit 1 - CLEAR */
#define LF_RSSI_SD12RR1_SET_gc   (0x02) /* Sign Detection Channel 1 vs 2 Result Bit 1 - SET */


/* Sign Detection Channel 1 vs 2 Result Bit 0 */
#define LF_RSSI_SD12RR0_CLEAR_gc (0x00) /* Sign Detection Channel 1 vs 2 Result Bit 0 - CLEAR */
#define LF_RSSI_SD12RR0_SET_gc   (0x01) /* Sign Detection Channel 1 vs 2 Result Bit 0 - SET */


/* Sign Detection Channel 1 vs 3 Result Bit 7 */
#define LF_RSSI_SD13RR7_CLEAR_gc (0x00) /* Sign Detection Channel 1 vs 3 Result Bit 7 - CLEAR */
#define LF_RSSI_SD13RR7_SET_gc   (0x80) /* Sign Detection Channel 1 vs 3 Result Bit 7 - SET */


/* Sign Detection Channel 1 vs 3 Result Bit 6 */
#define LF_RSSI_SD13RR6_CLEAR_gc (0x00) /* Sign Detection Channel 1 vs 3 Result Bit 6 - CLEAR */
#define LF_RSSI_SD13RR6_SET_gc   (0x40) /* Sign Detection Channel 1 vs 3 Result Bit 6 - SET */


/* Sign Detection Channel 1 vs 3 Result Bit 5 */
#define LF_RSSI_SD13RR5_CLEAR_gc (0x00) /* Sign Detection Channel 1 vs 3 Result Bit 5 - CLEAR */
#define LF_RSSI_SD13RR5_SET_gc   (0x20) /* Sign Detection Channel 1 vs 3 Result Bit 5 - SET */


/* Sign Detection Channel 1 vs 3 Result Bit 4 */
#define LF_RSSI_SD13RR4_CLEAR_gc (0x00) /* Sign Detection Channel 1 vs 3 Result Bit 4 - CLEAR */
#define LF_RSSI_SD13RR4_SET_gc   (0x10) /* Sign Detection Channel 1 vs 3 Result Bit 4 - SET */


/* Sign Detection Channel 1 vs 3 Result Bit 3 */
#define LF_RSSI_SD13RR3_CLEAR_gc (0x00) /* Sign Detection Channel 1 vs 3 Result Bit 3 - CLEAR */
#define LF_RSSI_SD13RR3_SET_gc   (0x08) /* Sign Detection Channel 1 vs 3 Result Bit 3 - SET */


/* Sign Detection Channel 1 vs 3 Result Bit 2 */
#define LF_RSSI_SD13RR2_CLEAR_gc (0x00) /* Sign Detection Channel 1 vs 3 Result Bit 2 - CLEAR */
#define LF_RSSI_SD13RR2_SET_gc   (0x04) /* Sign Detection Channel 1 vs 3 Result Bit 2 - SET */


/* Sign Detection Channel 1 vs 3 Result Bit 1 */
#define LF_RSSI_SD13RR1_CLEAR_gc (0x00) /* Sign Detection Channel 1 vs 3 Result Bit 1 - CLEAR */
#define LF_RSSI_SD13RR1_SET_gc   (0x02) /* Sign Detection Channel 1 vs 3 Result Bit 1 - SET */


/* Sign Detection Channel 1 vs 3 Result Bit 0 */
#define LF_RSSI_SD13RR0_CLEAR_gc (0x00) /* Sign Detection Channel 1 vs 3 Result Bit 0 - CLEAR */
#define LF_RSSI_SD13RR0_SET_gc   (0x01) /* Sign Detection Channel 1 vs 3 Result Bit 0 - SET */


/* Sign Detection Channel 2 vs 3 Result Bit 7 */
#define LF_RSSI_SD23RR7_CLEAR_gc (0x00) /* Sign Detection Channel 2 vs 3 Result Bit 7 - CLEAR */
#define LF_RSSI_SD23RR7_SET_gc   (0x80) /* Sign Detection Channel 2 vs 3 Result Bit 7 - SET */


/* Sign Detection Channel 2 vs 3 Result Bit 6 */
#define LF_RSSI_SD23RR6_CLEAR_gc (0x00) /* Sign Detection Channel 2 vs 3 Result Bit 6 - CLEAR */
#define LF_RSSI_SD23RR6_SET_gc   (0x40) /* Sign Detection Channel 2 vs 3 Result Bit 6 - SET */


/* Sign Detection Channel 2 vs 3 Result Bit 5 */
#define LF_RSSI_SD23RR5_CLEAR_gc (0x00) /* Sign Detection Channel 2 vs 3 Result Bit 5 - CLEAR */
#define LF_RSSI_SD23RR5_SET_gc   (0x20) /* Sign Detection Channel 2 vs 3 Result Bit 5 - SET */


/* Sign Detection Channel 2 vs 3 Result Bit 4 */
#define LF_RSSI_SD23RR4_CLEAR_gc (0x00) /* Sign Detection Channel 2 vs 3 Result Bit 4 - CLEAR */
#define LF_RSSI_SD23RR4_SET_gc   (0x10) /* Sign Detection Channel 2 vs 3 Result Bit 4 - SET */


/* Sign Detection Channel 2 vs 3 Result Bit 3 */
#define LF_RSSI_SD23RR3_CLEAR_gc (0x00) /* Sign Detection Channel 2 vs 3 Result Bit 3 - CLEAR */
#define LF_RSSI_SD23RR3_SET_gc   (0x08) /* Sign Detection Channel 2 vs 3 Result Bit 3 - SET */


/* Sign Detection Channel 2 vs 3 Result Bit 2 */
#define LF_RSSI_SD23RR2_CLEAR_gc (0x00) /* Sign Detection Channel 2 vs 3 Result Bit 2 - CLEAR */
#define LF_RSSI_SD23RR2_SET_gc   (0x04) /* Sign Detection Channel 2 vs 3 Result Bit 2 - SET */


/* Sign Detection Channel 2 vs 3 Result Bit 1 */
#define LF_RSSI_SD23RR1_CLEAR_gc (0x00) /* Sign Detection Channel 2 vs 3 Result Bit 1 - CLEAR */
#define LF_RSSI_SD23RR1_SET_gc   (0x02) /* Sign Detection Channel 2 vs 3 Result Bit 1 - SET */


/* Sign Detection Channel 2 vs 3 Result Bit 0 */
#define LF_RSSI_SD23RR0_CLEAR_gc (0x00) /* Sign Detection Channel 2 vs 3 Result Bit 0 - CLEAR */
#define LF_RSSI_SD23RR0_SET_gc   (0x01) /* Sign Detection Channel 2 vs 3 Result Bit 0 - SET */


/* Sign Detection 360 Degree Result Bit 7 */
#define LF_RSSI_SD360R7_CLEAR_gc (0x00) /* Sign Detection 360 Degree Result Bit 7 - CLEAR */
#define LF_RSSI_SD360R7_SET_gc   (0x80) /* Sign Detection 360 Degree Result Bit 7 - SET */


/* Sign Detection 360 Degree Result Bit 6 */
#define LF_RSSI_SD360R6_CLEAR_gc (0x00) /* Sign Detection 360 Degree Result Bit 6 - CLEAR */
#define LF_RSSI_SD360R6_SET_gc   (0x40) /* Sign Detection 360 Degree Result Bit 6 - SET */


/* Sign Detection 360 Degree Result Bit 5 */
#define LF_RSSI_SD360R5_CLEAR_gc (0x00) /* Sign Detection 360 Degree Result Bit 5 - CLEAR */
#define LF_RSSI_SD360R5_SET_gc   (0x20) /* Sign Detection 360 Degree Result Bit 5 - SET */


/* Sign Detection 360 Degree Result Bit 4 */
#define LF_RSSI_SD360R4_CLEAR_gc (0x00) /* Sign Detection 360 Degree Result Bit 4 - CLEAR */
#define LF_RSSI_SD360R4_SET_gc   (0x10) /* Sign Detection 360 Degree Result Bit 4 - SET */


/* Sign Detection 360 Degree Result Bit 3 */
#define LF_RSSI_SD360R3_CLEAR_gc (0x00) /* Sign Detection 360 Degree Result Bit 3 - CLEAR */
#define LF_RSSI_SD360R3_SET_gc   (0x08) /* Sign Detection 360 Degree Result Bit 3 - SET */


/* Sign Detection 360 Degree Result Bit 2 */
#define LF_RSSI_SD360R2_CLEAR_gc (0x00) /* Sign Detection 360 Degree Result Bit 2 - CLEAR */
#define LF_RSSI_SD360R2_SET_gc   (0x04) /* Sign Detection 360 Degree Result Bit 2 - SET */


/* Sign Detection 360 Degree Result Bit 1 */
#define LF_RSSI_SD360R1_CLEAR_gc (0x00) /* Sign Detection 360 Degree Result Bit 1 - CLEAR */
#define LF_RSSI_SD360R1_SET_gc   (0x02) /* Sign Detection 360 Degree Result Bit 1 - SET */


/* Sign Detection 360 Degree Result Bit 0 */
#define LF_RSSI_SD360R0_CLEAR_gc (0x00) /* Sign Detection 360 Degree Result Bit 0 - CLEAR */
#define LF_RSSI_SD360R0_SET_gc   (0x01) /* Sign Detection 360 Degree Result Bit 0 - SET */


/*
--------------------------------------------------------------------------------
LF_TIMER - 
--------------------------------------------------------------------------------
*/


/* LF Timer Enable */
#define LF_TIMER_LTENA_CLEAR_gc (0x00) /* LF Timer Enable - CLEAR */
#define LF_TIMER_LTENA_SET_gc   (0x80) /* LF Timer Enable - SET */


/* LF Timer Start Mode */
#define LF_TIMER_LTSM_CLEAR_gc (0x00) /* LF Timer Start Mode - CLEAR */
#define LF_TIMER_LTSM_SET_gc   (0x40) /* LF Timer Start Mode - SET */


/* LF Timer Continuous Mode */
#define LF_TIMER_LTCM_CLEAR_gc (0x00) /* LF Timer Continuous Mode - CLEAR */
#define LF_TIMER_LTCM_SET_gc   (0x20) /* LF Timer Continuous Mode - SET */


/* LF Timer Compare Interrupt Mask */
#define LF_TIMER_LTCIM_CLEAR_gc (0x00) /* LF Timer Compare Interrupt Mask - CLEAR */
#define LF_TIMER_LTCIM_SET_gc   (0x10) /* LF Timer Compare Interrupt Mask - SET */


/* LF Timer Compare Reset Mask */
#define LF_TIMER_LTCRM_CLEAR_gc (0x00) /* LF Timer Compare Reset Mask - CLEAR */
#define LF_TIMER_LTCRM_SET_gc   (0x08) /* LF Timer Compare Reset Mask - SET */


/* LF Timer Prescaler Select bit 2 */
#define LF_TIMER_LTPS2_CLEAR_gc (0x00) /* LF Timer Prescaler Select bit 2 - CLEAR */
#define LF_TIMER_LTPS2_SET_gc   (0x04) /* LF Timer Prescaler Select bit 2 - SET */


/* LF Timer Prescaler Select bit 1 */
#define LF_TIMER_LTPS1_CLEAR_gc (0x00) /* LF Timer Prescaler Select bit 1 - CLEAR */
#define LF_TIMER_LTPS1_SET_gc   (0x02) /* LF Timer Prescaler Select bit 1 - SET */


/* LF Timer Prescaler Select bit 0 */
#define LF_TIMER_LTPS0_CLEAR_gc (0x00) /* LF Timer Prescaler Select bit 0 - CLEAR */
#define LF_TIMER_LTPS0_SET_gc   (0x01) /* LF Timer Prescaler Select bit 0 - SET */


/* LF Timer Compare Flag */
#define LF_TIMER_LTCOF_CLEAR_gc (0x00) /* LF Timer Compare Flag - CLEAR */
#define LF_TIMER_LTCOF_SET_gc   (0x80) /* LF Timer Compare Flag - SET */


/* End OF telegram Event Mask */
#define LF_TIMER_EOFEM_CLEAR_gc (0x00) /* End OF telegram Event Mask - CLEAR */
#define LF_TIMER_EOFEM_SET_gc   (0x40) /* End OF telegram Event Mask - SET */


/* Fill Level reached Event Mask */
#define LF_TIMER_FLEM_CLEAR_gc (0x00) /* Fill Level reached Event Mask - CLEAR */
#define LF_TIMER_FLEM_SET_gc   (0x20) /* Fill Level reached Event Mask - SET */


/* Telegram Bit Length reached Event Mask */
#define LF_TIMER_TBLEM_CLEAR_gc (0x00) /* Telegram Bit Length reached Event Mask - CLEAR */
#define LF_TIMER_TBLEM_SET_gc   (0x10) /* Telegram Bit Length reached Event Mask - SET */


/* Data Frame end reached Event Mask */
#define LF_TIMER_DFEM_CLEAR_gc (0x00) /* Data Frame end reached Event Mask - CLEAR */
#define LF_TIMER_DFEM_SET_gc   (0x08) /* Data Frame end reached Event Mask - SET */


/* Identifier Frame Event Mask */
#define LF_TIMER_IDFEM_CLEAR_gc (0x00) /* Identifier Frame Event Mask - CLEAR */
#define LF_TIMER_IDFEM_SET_gc   (0x04) /* Identifier Frame Event Mask - SET */


/* ID1 Event Mask */
#define LF_TIMER_ID1EM_CLEAR_gc (0x00) /* ID1 Event Mask - CLEAR */
#define LF_TIMER_ID1EM_SET_gc   (0x02) /* ID1 Event Mask - SET */


/* ID0 Event Mask */
#define LF_TIMER_ID0EM_CLEAR_gc (0x00) /* ID0 Event Mask - CLEAR */
#define LF_TIMER_ID0EM_SET_gc   (0x01) /* ID0 Event Mask - SET */


/*
--------------------------------------------------------------------------------
LF_TRANSPONDER - 
--------------------------------------------------------------------------------
*/


/* Transponder Mode */
#define LF_TRANSPONDER_TPMODE_CLEAR_gc (0x00) /* Transponder Mode - CLEAR */
#define LF_TRANSPONDER_TPMODE_SET_gc   (0x80) /* Transponder Mode - SET */


/* Transponder Decoder Field Clock Prescaler value */
#define LF_TRANSPONDER_TPDFCP_VAL_0x00_gc (0x00<<5) /* Field Clock / 1 */
#define LF_TRANSPONDER_TPDFCP_VAL_0x01_gc (0x01<<5) /* Field Clock / 1 */
#define LF_TRANSPONDER_TPDFCP_VAL_0x02_gc (0x02<<5) /* Field Clock / 2 */
#define LF_TRANSPONDER_TPDFCP_VAL_0x03_gc (0x03<<5) /* Field Clock / 4 */


/* Transponder Bit Rate */
#define LF_TRANSPONDER_TPBR_CLEAR_gc (0x00) /* Transponder Bit Rate - CLEAR */
#define LF_TRANSPONDER_TPBR_SET_gc   (0x10) /* Transponder Bit Rate - SET */


/* Transponder Quadrature Pulse Length Operation Modulation */
#define LF_TRANSPONDER_TPQPLM_CLEAR_gc (0x00) /* Transponder Quadrature Pulse Length Operation Modulation - CLEAR */
#define LF_TRANSPONDER_TPQPLM_SET_gc   (0x04) /* Transponder Quadrature Pulse Length Operation Modulation - SET */


/* Transponder watch dog value for No Field timeout (with SRC clk) */
#define LF_TRANSPONDER_TPWDLV_VAL_0x00_gc (0x00<<5) /* 1.024 ms */
#define LF_TRANSPONDER_TPWDLV_VAL_0x01_gc (0x01<<5) /* 2.048 ms */
#define LF_TRANSPONDER_TPWDLV_VAL_0x02_gc (0x02<<5) /* 3.072 ms */
#define LF_TRANSPONDER_TPWDLV_VAL_0x03_gc (0x03<<5) /* 4.096 ms */


/* Transponder No Field Timeout enable */
#define LF_TRANSPONDER_TPNFTO_CLEAR_gc (0x00) /* Transponder No Field Timeout enable - CLEAR */
#define LF_TRANSPONDER_TPNFTO_SET_gc   (0x10) /* Transponder No Field Timeout enable - SET */


/* Transponder Disable */
#define LF_TRANSPONDER_TPD_CLEAR_gc (0x00) /* Transponder Disable - CLEAR */
#define LF_TRANSPONDER_TPD_SET_gc   (0x08) /* Transponder Disable - SET */


/* Transponder Power Switch Disable */
#define LF_TRANSPONDER_TPPSD_CLEAR_gc (0x00) /* Transponder Power Switch Disable - CLEAR */
#define LF_TRANSPONDER_TPPSD_SET_gc   (0x04) /* Transponder Power Switch Disable - SET */


/* Transponder Modulation */
#define LF_TRANSPONDER_TPMOD_CLEAR_gc (0x00) /* Transponder Modulation - CLEAR */
#define LF_TRANSPONDER_TPMOD_SET_gc   (0x02) /* Transponder Modulation - SET */


/* Transponder Mode Acknowledge */
#define LF_TRANSPONDER_TPMA_CLEAR_gc (0x00) /* Transponder Mode Acknowledge - CLEAR */
#define LF_TRANSPONDER_TPMA_SET_gc   (0x01) /* Transponder Mode Acknowledge - SET */


/* Transponder Reception Continuous Damping */
#define LF_TRANSPONDER_TPRCD_CLEAR_gc (0x00) /* Transponder Reception Continuous Damping - CLEAR */
#define LF_TRANSPONDER_TPRCD_SET_gc   (0x20) /* Transponder Reception Continuous Damping - SET */


/* Transponder Transmit Listen Window */
#define LF_TRANSPONDER_TPTLIW_CLEAR_gc (0x00) /* Transponder Transmit Listen Window - CLEAR */
#define LF_TRANSPONDER_TPTLIW_SET_gc   (0x04) /* Transponder Transmit Listen Window - SET */


/* Transponder Receive Data */
#define LF_TRANSPONDER_TPRD_CLEAR_gc (0x00) /* Transponder Receive Data - CLEAR */
#define LF_TRANSPONDER_TPRD_SET_gc   (0x02) /* Transponder Receive Data - SET */


/* Transponder Transmit Data */
#define LF_TRANSPONDER_TPTD_CLEAR_gc (0x00) /* Transponder Transmit Data - CLEAR */
#define LF_TRANSPONDER_TPTD_SET_gc   (0x01) /* Transponder Transmit Data - SET */


/* Transponder Battery Charge Mode */
#define LF_TRANSPONDER_TPBCM_CLEAR_gc (0x00) /* Transponder Battery Charge Mode - CLEAR */
#define LF_TRANSPONDER_TPBCM_SET_gc   (0x10) /* Transponder Battery Charge Mode - SET */


/* Transponder Battery Charge Current Select */
#define LF_TRANSPONDER_TPCR4_TPBCCS_gc(x) (x & 0x0F)

/* Transponder Modulation Damping Select */
#define LF_TRANSPONDER_TPCR5_TPMD_gc(x) ((x<<4) & 0x70)

/* Transponder Modulation Undamped Level Select */
#define LF_TRANSPONDER_TPMUD_VAL_0x00_gc (0x00) /* 5.0 V */
#define LF_TRANSPONDER_TPMUD_VAL_0x01_gc (0x01) /* 5.4 V */
#define LF_TRANSPONDER_TPMUD_VAL_0x02_gc (0x02) /* 5.8 V */
#define LF_TRANSPONDER_TPMUD_VAL_0x03_gc (0x03) /* 6.2 V */
#define LF_TRANSPONDER_TPMUD_VAL_0x04_gc (0x04) /* 6.6 V */
#define LF_TRANSPONDER_TPMUD_VAL_0x05_gc (0x05) /* 7.0 V */
#define LF_TRANSPONDER_TPMUD_VAL_0x07_gc (0x07) /* Up to OVP */


/* Transponder Encoder Mode 4 */
#define LF_TRANSPONDER_TPECM4_VAL_0x00_gc (0x00<<6) /* Manchester */
#define LF_TRANSPONDER_TPECM4_VAL_0x01_gc (0x01<<6) /* Biphase */
#define LF_TRANSPONDER_TPECM4_VAL_0x02_gc (0x02<<6) /* NRZ */
#define LF_TRANSPONDER_TPECM4_VAL_0x03_gc (0x03<<6) /* Manchester */


/* Transponder Encoder Mode 3 */
#define LF_TRANSPONDER_TPECM3_VAL_0x00_gc (0x00<<4) /* Manchester */
#define LF_TRANSPONDER_TPECM3_VAL_0x01_gc (0x01<<4) /* Biphase */
#define LF_TRANSPONDER_TPECM3_VAL_0x02_gc (0x02<<4) /* NRZ */
#define LF_TRANSPONDER_TPECM3_VAL_0x03_gc (0x03<<4) /* Manchester */


/* Transponder Encoder Mode 2 */
#define LF_TRANSPONDER_TPECM2_VAL_0x00_gc (0x00<<2) /* Manchester */
#define LF_TRANSPONDER_TPECM2_VAL_0x01_gc (0x01<<2) /* Biphase */
#define LF_TRANSPONDER_TPECM2_VAL_0x02_gc (0x02<<2) /* NRZ */
#define LF_TRANSPONDER_TPECM2_VAL_0x03_gc (0x03<<2) /* Manchester */


/* Transponder Encoder Mode 1 */
#define LF_TRANSPONDER_TPECM1_VAL_0x00_gc (0x00) /* Manchester */
#define LF_TRANSPONDER_TPECM1_VAL_0x01_gc (0x01) /* Biphase */
#define LF_TRANSPONDER_TPECM1_VAL_0x02_gc (0x02) /* NRZ */
#define LF_TRANSPONDER_TPECM1_VAL_0x03_gc (0x03) /* Manchester */


/* Transponder Bit Error Flag */
#define LF_TRANSPONDER_TPBERF_CLEAR_gc (0x00) /* Transponder Bit Error Flag - CLEAR */
#define LF_TRANSPONDER_TPBERF_SET_gc   (0x08) /* Transponder Bit Error Flag - SET */


/* Transponder No Field Timeout Flag */
#define LF_TRANSPONDER_TPNFTF_CLEAR_gc (0x00) /* Transponder No Field Timeout Flag - CLEAR */
#define LF_TRANSPONDER_TPNFTF_SET_gc   (0x04) /* Transponder No Field Timeout Flag - SET */


/* Transponder Field Timeout Flag */
#define LF_TRANSPONDER_TPFTF_CLEAR_gc (0x00) /* Transponder Field Timeout Flag - CLEAR */
#define LF_TRANSPONDER_TPFTF_SET_gc   (0x02) /* Transponder Field Timeout Flag - SET */


/* Transponder Flag */
#define LF_TRANSPONDER_TPF_CLEAR_gc (0x00) /* Transponder Flag - CLEAR */
#define LF_TRANSPONDER_TPF_SET_gc   (0x01) /* Transponder Flag - SET */


/* Transponder Bit Error Interrupt Mask */
#define LF_TRANSPONDER_TPBERIM_CLEAR_gc (0x00) /* Transponder Bit Error Interrupt Mask - CLEAR */
#define LF_TRANSPONDER_TPBERIM_SET_gc   (0x08) /* Transponder Bit Error Interrupt Mask - SET */


/* Transponder No Field Timeout Interrupt Mask */
#define LF_TRANSPONDER_TPNFTIM_CLEAR_gc (0x00) /* Transponder No Field Timeout Interrupt Mask - CLEAR */
#define LF_TRANSPONDER_TPNFTIM_SET_gc   (0x04) /* Transponder No Field Timeout Interrupt Mask - SET */


/* Transponder Field Timeout Interrupt Mask */
#define LF_TRANSPONDER_TPFTIM_CLEAR_gc (0x00) /* Transponder Field Timeout Interrupt Mask - CLEAR */
#define LF_TRANSPONDER_TPFTIM_SET_gc   (0x02) /* Transponder Field Timeout Interrupt Mask - SET */


/* Transponder Interrupt Mask */
#define LF_TRANSPONDER_TPIM_CLEAR_gc (0x00) /* Transponder Interrupt Mask - CLEAR */
#define LF_TRANSPONDER_TPIM_SET_gc   (0x01) /* Transponder Interrupt Mask - SET */


/* Transponder Battery Charge OK */
#define LF_TRANSPONDER_TPBCOK_CLEAR_gc (0x00) /* Transponder Battery Charge OK - CLEAR */
#define LF_TRANSPONDER_TPBCOK_SET_gc   (0x08) /* Transponder Battery Charge OK - SET */


/* Transponder Power Switch */
#define LF_TRANSPONDER_TPPSW_CLEAR_gc (0x00) /* Transponder Power Switch - CLEAR */
#define LF_TRANSPONDER_TPPSW_SET_gc   (0x04) /* Transponder Power Switch - SET */


/* Transponder GAP Signal */
#define LF_TRANSPONDER_TPGAP_CLEAR_gc (0x00) /* Transponder GAP Signal - CLEAR */
#define LF_TRANSPONDER_TPGAP_SET_gc   (0x02) /* Transponder GAP Signal - SET */


/* Transponder Active */
#define LF_TRANSPONDER_TPA_CLEAR_gc (0x00) /* Transponder Active - CLEAR */
#define LF_TRANSPONDER_TPA_SET_gc   (0x01) /* Transponder Active - SET */


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
PORTD - 
--------------------------------------------------------------------------------
*/


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


/* SPI Tx Buffer Clear */
#define SPI_TFC_CLEAR_gc (0x00) /* SPI Tx Buffer Clear - CLEAR */
#define SPI_TFC_SET_gc   (0x80) /* SPI Tx Buffer Clear - SET */


/* Transmit Buffer Fill Level */
#define SPI_SFFR_TFL_gc(x) ((x<<4) & 0x70)

/* Rx Buffer Clear */
#define SPI_RFC_CLEAR_gc (0x00) /* Rx Buffer Clear - CLEAR */
#define SPI_RFC_SET_gc   (0x08) /* Rx Buffer Clear - SET */


/* Receive Buffer Fill Level */
#define SPI_SFFR_RFL_gc(x) (x & 0x07)

/* SPI Rx Buffer Interrupt Enable */
#define SPI_STIE_CLEAR_gc (0x00) /* SPI Rx Buffer Interrupt Enable - CLEAR */
#define SPI_STIE_SET_gc   (0x80) /* SPI Rx Buffer Interrupt Enable - SET */


/* Transmit Buffer Interrupt Level */
#define SPI_SFIR_TIL_gc(x) ((x<<4) & 0x70)

/* Rx Buffer Interrupt Enable */
#define SPI_SRIE_CLEAR_gc (0x00) /* Rx Buffer Interrupt Enable - CLEAR */
#define SPI_SRIE_SET_gc   (0x08) /* Rx Buffer Interrupt Enable - SET */


/* Receive Buffer Interrupt Level */
#define SPI_SFIR_RIL_gc(x) (x & 0x07)

/* Spe Interrupt Enable */
#define SPI_SPIE_CLEAR_gc (0x00) /* Spe Interrupt Enable - CLEAR */
#define SPI_SPIE_SET_gc   (0x80) /* Spe Interrupt Enable - SET */


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
SPI2 - 
--------------------------------------------------------------------------------
*/


/* Spi2 Interrupt Enable */
#define SPI2_SP2IE_CLEAR_gc (0x00) /* Spi2 Interrupt Enable - CLEAR */
#define SPI2_SP2IE_SET_gc   (0x80) /* Spi2 Interrupt Enable - SET */


/* SPI2 Enable */
#define SPI2_SP2E_CLEAR_gc (0x00) /* SPI2 Enable - CLEAR */
#define SPI2_SP2E_SET_gc   (0x40) /* SPI2 Enable - SET */


/* Data Order */
#define SPI2_DORD2_CLEAR_gc (0x00) /* Data Order - CLEAR */
#define SPI2_DORD2_SET_gc   (0x20) /* Data Order - SET */


/* Master/Slave Select */
#define SPI2_MSTR2_CLEAR_gc (0x00) /* Master/Slave Select - CLEAR */
#define SPI2_MSTR2_SET_gc   (0x10) /* Master/Slave Select - SET */


/* Clock Polarity */
#define SPI2_CPOL2_CLEAR_gc (0x00) /* Clock Polarity - CLEAR */
#define SPI2_CPOL2_SET_gc   (0x08) /* Clock Polarity - SET */


/* Clock Phase */
#define SPI2_CPHA2_CLEAR_gc (0x00) /* Clock Phase - CLEAR */
#define SPI2_CPHA2_SET_gc   (0x04) /* Clock Phase - SET */


/* SPI2 Clock Rate Select */
#define SPI2_SP2R_VAL_0x00_gc (0x00) /* clkio/4 */
#define SPI2_SP2R_VAL_0x01_gc (0x01) /* clkio/16 */
#define SPI2_SP2R_VAL_0x02_gc (0x02) /* clkio/64 */
#define SPI2_SP2R_VAL_0x03_gc (0x03) /* clkio/128 */


/* SPI2 Interrupt Flag */
#define SPI2_SP2IF_CLEAR_gc (0x00) /* SPI2 Interrupt Flag - CLEAR */
#define SPI2_SP2IF_SET_gc   (0x80) /* SPI2 Interrupt Flag - SET */


/* Write Colliion Flag */
#define SPI2_WCOL2_CLEAR_gc (0x00) /* Write Colliion Flag - CLEAR */
#define SPI2_WCOL2_SET_gc   (0x40) /* Write Colliion Flag - SET */


/* Double SPI2 Speed Bit */
#define SPI2_SPI22X_CLEAR_gc (0x00) /* Double SPI2 Speed Bit - CLEAR */
#define SPI2_SPI22X_SET_gc   (0x01) /* Double SPI2 Speed Bit - SET */


/*
--------------------------------------------------------------------------------
SSM - 
--------------------------------------------------------------------------------
*/


/* Master State Machine SubState Machine Select 0 */
#define SSM_MSMSM0_VAL_0x00_gc (0x00) /* None/Stop */
#define SSM_MSMSM0_VAL_0x01_gc (0x01) /* PLL en */
#define SSM_MSMSM0_VAL_0x02_gc (0x02) /* PLL lock */
#define SSM_MSMSM0_VAL_0x03_gc (0x03) /* TX DSP enable */
#define SSM_MSMSM0_VAL_0x04_gc (0x04) /* TX DSP disable */
#define SSM_MSMSM0_VAL_0x05_gc (0x05) /* Send telegram */
#define SSM_MSMSM0_VAL_0x06_gc (0x06) /* Shut down */
#define SSM_MSMSM0_VAL_0x07_gc (0x07) /* VCO Tuning */
#define SSM_MSMSM0_VAL_0x08_gc (0x08) /* Antenna Tuning */


/* Master State Machine SubState Machine Select 1 */
#define SSM_MSMSM1_VAL_0x00_gc (0x00<<4) /* None/Stop */
#define SSM_MSMSM1_VAL_0x01_gc (0x01<<4) /* PLL en */
#define SSM_MSMSM1_VAL_0x02_gc (0x02<<4) /* PLL lock */
#define SSM_MSMSM1_VAL_0x03_gc (0x03<<4) /* TX DSP enable */
#define SSM_MSMSM1_VAL_0x04_gc (0x04<<4) /* TX DSP disable */
#define SSM_MSMSM1_VAL_0x05_gc (0x05<<4) /* Send telegram */
#define SSM_MSMSM1_VAL_0x06_gc (0x06<<4) /* Shut down */
#define SSM_MSMSM1_VAL_0x07_gc (0x07<<4) /* VCO Tuning */
#define SSM_MSMSM1_VAL_0x08_gc (0x08<<4) /* Antenna Tuning */


/* Master State Machine SubState Machine Select 2 */
#define SSM_MSMSM2_VAL_0x00_gc (0x00) /* None/Stop */
#define SSM_MSMSM2_VAL_0x01_gc (0x01) /* PLL en */
#define SSM_MSMSM2_VAL_0x02_gc (0x02) /* PLL lock */
#define SSM_MSMSM2_VAL_0x03_gc (0x03) /* TX DSP enable */
#define SSM_MSMSM2_VAL_0x04_gc (0x04) /* TX DSP disable */
#define SSM_MSMSM2_VAL_0x05_gc (0x05) /* Send telegram */
#define SSM_MSMSM2_VAL_0x06_gc (0x06) /* Shut down */
#define SSM_MSMSM2_VAL_0x07_gc (0x07) /* VCO Tuning */
#define SSM_MSMSM2_VAL_0x08_gc (0x08) /* Antenna Tuning */


/* Master State Machine SubState Machine Select 3 */
#define SSM_MSMSM3_VAL_0x00_gc (0x00<<4) /* None/Stop */
#define SSM_MSMSM3_VAL_0x01_gc (0x01<<4) /* PLL en */
#define SSM_MSMSM3_VAL_0x02_gc (0x02<<4) /* PLL lock */
#define SSM_MSMSM3_VAL_0x03_gc (0x03<<4) /* TX DSP enable */
#define SSM_MSMSM3_VAL_0x04_gc (0x04<<4) /* TX DSP disable */
#define SSM_MSMSM3_VAL_0x05_gc (0x05<<4) /* Send telegram */
#define SSM_MSMSM3_VAL_0x06_gc (0x06<<4) /* Shut down */
#define SSM_MSMSM3_VAL_0x07_gc (0x07<<4) /* VCO Tuning */
#define SSM_MSMSM3_VAL_0x08_gc (0x08<<4) /* Antenna Tuning */


/* Master State Machine SubState Machine Select 4 */
#define SSM_MSMSM4_VAL_0x00_gc (0x00) /* None/Stop */
#define SSM_MSMSM4_VAL_0x01_gc (0x01) /* PLL en */
#define SSM_MSMSM4_VAL_0x02_gc (0x02) /* PLL lock */
#define SSM_MSMSM4_VAL_0x03_gc (0x03) /* TX DSP enable */
#define SSM_MSMSM4_VAL_0x04_gc (0x04) /* TX DSP disable */
#define SSM_MSMSM4_VAL_0x05_gc (0x05) /* Send telegram */
#define SSM_MSMSM4_VAL_0x06_gc (0x06) /* Shut down */
#define SSM_MSMSM4_VAL_0x07_gc (0x07) /* VCO Tuning */
#define SSM_MSMSM4_VAL_0x08_gc (0x08) /* Antenna Tuning */


/* Master State Machine SubState Machine Select 5 */
#define SSM_MSMSM5_VAL_0x00_gc (0x00<<4) /* None/Stop */
#define SSM_MSMSM5_VAL_0x01_gc (0x01<<4) /* PLL en */
#define SSM_MSMSM5_VAL_0x02_gc (0x02<<4) /* PLL lock */
#define SSM_MSMSM5_VAL_0x03_gc (0x03<<4) /* TX DSP enable */
#define SSM_MSMSM5_VAL_0x04_gc (0x04<<4) /* TX DSP disable */
#define SSM_MSMSM5_VAL_0x05_gc (0x05<<4) /* Send telegram */
#define SSM_MSMSM5_VAL_0x06_gc (0x06<<4) /* Shut down */
#define SSM_MSMSM5_VAL_0x07_gc (0x07<<4) /* VCO Tuning */
#define SSM_MSMSM5_VAL_0x08_gc (0x08<<4) /* Antenna Tuning */


/* Master State Machine SubState Machine Select 6 */
#define SSM_MSMSM6_VAL_0x00_gc (0x00) /* None/Stop */
#define SSM_MSMSM6_VAL_0x01_gc (0x01) /* PLL en */
#define SSM_MSMSM6_VAL_0x02_gc (0x02) /* PLL lock */
#define SSM_MSMSM6_VAL_0x03_gc (0x03) /* TX DSP enable */
#define SSM_MSMSM6_VAL_0x04_gc (0x04) /* TX DSP disable */
#define SSM_MSMSM6_VAL_0x05_gc (0x05) /* Send telegram */
#define SSM_MSMSM6_VAL_0x06_gc (0x06) /* Shut down */
#define SSM_MSMSM6_VAL_0x07_gc (0x07) /* VCO Tuning */
#define SSM_MSMSM6_VAL_0x08_gc (0x08) /* Antenna Tuning */


/* Master State Machine SubState Machine Select 7 */
#define SSM_MSMSM7_VAL_0x00_gc (0x00<<4) /* None/Stop */
#define SSM_MSMSM7_VAL_0x01_gc (0x01<<4) /* PLL en */
#define SSM_MSMSM7_VAL_0x02_gc (0x02<<4) /* PLL lock */
#define SSM_MSMSM7_VAL_0x03_gc (0x03<<4) /* TX DSP enable */
#define SSM_MSMSM7_VAL_0x04_gc (0x04<<4) /* TX DSP disable */
#define SSM_MSMSM7_VAL_0x05_gc (0x05<<4) /* Send telegram */
#define SSM_MSMSM7_VAL_0x06_gc (0x06<<4) /* Shut down */
#define SSM_MSMSM7_VAL_0x07_gc (0x07<<4) /* VCO Tuning */
#define SSM_MSMSM7_VAL_0x08_gc (0x08<<4) /* Antenna Tuning */


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


/* Sequencer State Machine PLL Lock Delay Time */
#define SSM_SSMPLDT_CLEAR_gc (0x00) /* Sequencer State Machine PLL Lock Delay Time - CLEAR */
#define SSM_SSMPLDT_SET_gc   (0x20) /* Sequencer State Machine PLL Lock Delay Time - SET */


/* Sequencer State Machine Interrupt Flag */
#define SSM_SSMIF_CLEAR_gc (0x00) /* Sequencer State Machine Interrupt Flag - CLEAR */
#define SSM_SSMIF_SET_gc   (0x01) /* Sequencer State Machine Interrupt Flag - SET */


/* Sequencer State Machine Interrupt Mask */
#define SSM_SSMIM_CLEAR_gc (0x00) /* Sequencer State Machine Interrupt Mask - CLEAR */
#define SSM_SSMIM_SET_gc   (0x01) /* Sequencer State Machine Interrupt Mask - SET */


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


/* Disable MRC Oscillator Bandgap */
#define SUP_DI_MRCBG_CLEAR_gc (0x00) /* Disable MRC Oscillator Bandgap - CLEAR */
#define SUP_DI_MRCBG_SET_gc   (0x10) /* Disable MRC Oscillator Bandgap - SET */


/* Medium frequency RC Oscillator Temperature Compensation */
#define SUP_RCTCAL_MRCTC_gc(x) ((x<<1) & 0x0E)

/* FRC Oscillator Temperature Compensation bit */
#define SUP_FRCTC_CLEAR_gc (0x00) /* FRC Oscillator Temperature Compensation bit - CLEAR */
#define SUP_FRCTC_SET_gc   (0x01) /* FRC Oscillator Temperature Compensation bit - SET */


/* Power Amplifier Regulator Calibration */
#define SUP_SUPCA1_PVCAL_gc(x) ((x<<4) & 0xF0)

/* Power Amplifier Regulator Double Internal Current */
#define SUP_PVDIC_CLEAR_gc (0x00) /* Power Amplifier Regulator Double Internal Current - CLEAR */
#define SUP_PVDIC_SET_gc   (0x08) /* Power Amplifier Regulator Double Internal Current - SET */


/* Power Amplifier Voltage 2.2V */
#define SUP_PV22_CLEAR_gc (0x00) /* Power Amplifier Voltage 2.2V - CLEAR */
#define SUP_PV22_SET_gc   (0x04) /* Power Amplifier Voltage 2.2V - SET */


/* VREF voltage for LFVCC Brown-out-Detector */
#define SUP_SUPCA7_LFVCCBD_gc(x) ((x<<3) & 0x38)

/* LFVCC and DVCC Output Voltage Calibration */
#define SUP_SUPCA7_VCCCAL_gc(x) (x & 0x07)

/* VREF voltage for DVCC Brown-out-Detector */
#define SUP_SUPCA8_DVCCBD_gc(x) ((x<<3) & 0x38)

/* VSIG voltage for LFVCC Brown-out-Detector */
#define SUP_SUPCA8_VSWBD_gc(x) (x & 0x07)

/* Memory Voltage Regulator Enable */
#define SUP_VMEMEN_CLEAR_gc (0x00) /* Memory Voltage Regulator Enable - CLEAR */
#define SUP_VMEMEN_SET_gc   (0x80) /* Memory Voltage Regulator Enable - SET */


/* VMEM Reset Mask */
#define SUP_VMRESM_CLEAR_gc (0x00) /* VMEM Reset Mask - CLEAR */
#define SUP_VMRESM_SET_gc   (0x40) /* VMEM Reset Mask - SET */


/* DVCC High Current Mode Enable */
#define SUP_DVHEN_CLEAR_gc (0x00) /* DVCC High Current Mode Enable - CLEAR */
#define SUP_DVHEN_SET_gc   (0x20) /* DVCC High Current Mode Enable - SET */


/* AVCC Enable */
#define SUP_AVEN_CLEAR_gc (0x00) /* AVCC Enable - CLEAR */
#define SUP_AVEN_SET_gc   (0x10) /* AVCC Enable - SET */


/* AVCC Double Internal Current */
#define SUP_AVDIC_CLEAR_gc (0x00) /* AVCC Double Internal Current - CLEAR */
#define SUP_AVDIC_SET_gc   (0x08) /* AVCC Double Internal Current - SET */


/* Power amplifier Voltage supply Enable */
#define SUP_PVEN_CLEAR_gc (0x00) /* Power amplifier Voltage supply Enable - CLEAR */
#define SUP_PVEN_SET_gc   (0x04) /* Power amplifier Voltage supply Enable - SET */


/* AVCC Low Interrupt Mask */
#define SUP_AVCCLM_CLEAR_gc (0x00) /* AVCC Low Interrupt Mask - CLEAR */
#define SUP_AVCCLM_SET_gc   (0x02) /* AVCC Low Interrupt Mask - SET */


/* AVCC Reset Interrupt Mask */
#define SUP_AVCCRM_CLEAR_gc (0x00) /* AVCC Reset Interrupt Mask - CLEAR */
#define SUP_AVCCRM_SET_gc   (0x01) /* AVCC Reset Interrupt Mask - SET */


/* AVCC low interrupt flag */
#define SUP_AVCCLF_CLEAR_gc (0x00) /* AVCC low interrupt flag - CLEAR */
#define SUP_AVCCLF_SET_gc   (0x02) /* AVCC low interrupt flag - SET */


/* AVCC reset interrupt flag */
#define SUP_AVCCRF_CLEAR_gc (0x00) /* AVCC reset interrupt flag - CLEAR */
#define SUP_AVCCRF_SET_gc   (0x01) /* AVCC reset interrupt flag - SET */


/* Voltage Monitor Range Select */
#define SUP_VMRS_CLEAR_gc (0x00) /* Voltage Monitor Range Select - CLEAR */
#define SUP_VMRS_SET_gc   (0x80) /* Voltage Monitor Range Select - SET */


/* Voltage Monitor Power Supply Select */
#define SUP_VMCR_VMPS_gc(x) ((x<<5) & 0x60)

/* Voltage Monitor Interrupt Mask */
#define SUP_VMIM_CLEAR_gc (0x00) /* Voltage Monitor Interrupt Mask - CLEAR */
#define SUP_VMIM_SET_gc   (0x10) /* Voltage Monitor Interrupt Mask - SET */


/* Voltage Monitor Level Select */
#define SUP_VMCR_VMLS_gc(x) (x & 0x0F)

/* Voltage Monitor Disable Hysteresis */
#define SUP_VMDIH_CLEAR_gc (0x00) /* Voltage Monitor Disable Hysteresis - CLEAR */
#define SUP_VMDIH_SET_gc   (0x02) /* Voltage Monitor Disable Hysteresis - SET */


/* Voltage Monitor Flag */
#define SUP_VMF_CLEAR_gc (0x00) /* Voltage Monitor Flag - CLEAR */
#define SUP_VMF_SET_gc   (0x01) /* Voltage Monitor Flag - SET */


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
#define TIMER0_WDT_T0PS_VAL_0x00_gc (0x00) /* 0.256ms typ */
#define TIMER0_WDT_T0PS_VAL_0x01_gc (0x01) /* 1ms typ */
#define TIMER0_WDT_T0PS_VAL_0x02_gc (0x02) /* 8ms typ */
#define TIMER0_WDT_T0PS_VAL_0x03_gc (0x03) /* 0.5s typ */
#define TIMER0_WDT_T0PS_VAL_0x04_gc (0x04) /* 1s typ */
#define TIMER0_WDT_T0PS_VAL_0x05_gc (0x05) /* 8s typ */
#define TIMER0_WDT_T0PS_VAL_0x06_gc (0x06) /* 67s typ */
#define TIMER0_WDT_T0PS_VAL_0x07_gc (0x07) /* 134s typ */


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
#define TIMER0_WDT_WDPS_VAL_0x00_gc (0x00) /* 1ms typ (0.85ms min) */
#define TIMER0_WDT_WDPS_VAL_0x01_gc (0x01) /* 4ms typ (3.4ms min) */
#define TIMER0_WDT_WDPS_VAL_0x02_gc (0x02) /* 32ms typ (27ms min) */
#define TIMER0_WDT_WDPS_VAL_0x03_gc (0x03) /* 2.1s typ (1.75s min) */
#define TIMER0_WDT_WDPS_VAL_0x04_gc (0x04) /* 4.2s typ (3.5s min) */
#define TIMER0_WDT_WDPS_VAL_0x05_gc (0x05) /* 16.8s typ (14s min) */
#define TIMER0_WDT_WDPS_VAL_0x06_gc (0x06) /* 134s typ (110s min) */
#define TIMER0_WDT_WDPS_VAL_0x07_gc (0x07) /* 268s typ (220s min) */


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
#define TIMER1_T1DC_VAL_0x00_gc (0x00<<6) /* Bypass */
#define TIMER1_T1DC_VAL_0x01_gc (0x01<<6) /* Duty cycle 1/1 (div 2) */
#define TIMER1_T1DC_VAL_0x02_gc (0x02<<6) /* Duty cycle 1/2 (div 3) */
#define TIMER1_T1DC_VAL_0x03_gc (0x03<<6) /* Duty cycle 1/3 (div 4) */


/* Timer1 Prescaler Select */
#define TIMER1_T1MR_T1PS_gc(x) ((x<<2) & 0x3C)

/* Timer1 Clock Select */
#define TIMER1_T1CS_VAL_0x00_gc (0x00) /* clk_src */
#define TIMER1_T1CS_VAL_0x01_gc (0x01) /* clk_frc */
#define TIMER1_T1CS_VAL_0x02_gc (0x02) /* clk_T */
#define TIMER1_T1CS_VAL_0x03_gc (0x03) /* clk_mrc */


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
#define TIMER2_T2DC_VAL_0x00_gc (0x00<<6) /* Bypass */
#define TIMER2_T2DC_VAL_0x01_gc (0x01<<6) /* Duty cycle 1/1 (div 2) */
#define TIMER2_T2DC_VAL_0x02_gc (0x02<<6) /* Duty cycle 1/2 (div 3) */
#define TIMER2_T2DC_VAL_0x03_gc (0x03<<6) /* Duty cycle 1/3 (div 4) */


/* Timer2 Prescaler Select */
#define TIMER2_T2MR_T2PS_gc(x) ((x<<2) & 0x3C)

/* Timer2 Clock Select */
#define TIMER2_T2CS_VAL_0x00_gc (0x00) /* clk_src */
#define TIMER2_T2CS_VAL_0x01_gc (0x01) /* clk_mrc */
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


/* Timer3 CaPture Reset Mask */
#define TIMER3_T3CPRM_CLEAR_gc (0x00) /* Timer3 CaPture Reset Mask - CLEAR */
#define TIMER3_T3CPRM_SET_gc   (0x08) /* Timer3 CaPture Reset Mask - SET */


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

/* Timer3 Clock Select */
#define TIMER3_T3CS_VAL_0x00_gc (0x00) /* clk_frc */
#define TIMER3_T3CS_VAL_0x01_gc (0x01) /* clk_T */
#define TIMER3_T3CS_VAL_0x02_gc (0x02) /* clk_xto4 */
#define TIMER3_T3CS_VAL_0x03_gc (0x03) /* clk_TEI */


/* Timer3 Input Capture Select */
#define TIMER3_T3ICS_VAL_0x00_gc (0x00<<5) /* clk_T2 */
#define TIMER3_T3ICS_VAL_0x01_gc (0x01<<5) /* clk_T1 */
#define TIMER3_T3ICS_VAL_0x02_gc (0x02<<5) /* clk_T4 */
#define TIMER3_T3ICS_VAL_0x03_gc (0x03<<5) /* TICP */
#define TIMER3_T3ICS_VAL_0x04_gc (0x04<<5) /* LFES */
#define TIMER3_T3ICS_VAL_0x05_gc (0x05<<5) /* clk_src */
#define TIMER3_T3ICS_VAL_0x06_gc (0x06<<5) /* TPGAP */


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


/* Timer4 CaPture Reset Mask */
#define TIMER4_T4CPRM_CLEAR_gc (0x00) /* Timer4 CaPture Reset Mask - CLEAR */
#define TIMER4_T4CPRM_SET_gc   (0x08) /* Timer4 CaPture Reset Mask - SET */


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


/* Timer4 Prescaler Select */
#define TIMER4_T4MRA_T4PS_gc(x) ((x<<2) & 0x1C)

/* Timer4 Clock Select */
#define TIMER4_T4CS_VAL_0x00_gc (0x00) /* clk_src */
#define TIMER4_T4CS_VAL_0x01_gc (0x01) /* clk_T */
#define TIMER4_T4CS_VAL_0x02_gc (0x02) /* clk_mrc */
#define TIMER4_T4CS_VAL_0x03_gc (0x03) /* clk_frc */


/* Timer4 Input Capture Select */
#define TIMER4_T4ICS_VAL_0x00_gc (0x00<<5) /* clk_T2 */
#define TIMER4_T4ICS_VAL_0x01_gc (0x01<<5) /* clk_T1 */
#define TIMER4_T4ICS_VAL_0x02_gc (0x02<<5) /* clk_T3 */
#define TIMER4_T4ICS_VAL_0x03_gc (0x03<<5) /* TICP */
#define TIMER4_T4ICS_VAL_0x04_gc (0x04<<5) /* LFES */
#define TIMER4_T4ICS_VAL_0x05_gc (0x05<<5) /* clk_src */
#define TIMER4_T4ICS_VAL_0x06_gc (0x06<<5) /* TPGAP */


/* Timer4 Capture Edge select */
#define TIMER4_T4CE_VAL_0x00_gc (0x00<<3) /* disable */
#define TIMER4_T4CE_VAL_0x01_gc (0x01<<3) /* rising edge */
#define TIMER4_T4CE_VAL_0x02_gc (0x02<<3) /* falling edge */
#define TIMER4_T4CE_VAL_0x03_gc (0x03<<3) /* both edges */


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


/*
--------------------------------------------------------------------------------
TMO - 
--------------------------------------------------------------------------------
*/


/* Timer modulator Output 4 Port Interface Select */
#define TMO_TO4PIS_VAL_0x00_gc (0x00<<6) /* Port D5 Data Register */
#define TMO_TO4PIS_VAL_0x01_gc (0x01<<6) /* M1 - Toggle Register Timer1 */
#define TMO_TO4PIS_VAL_0x02_gc (0x02<<6) /* M2 - Toggle Register Timer2 */
#define TMO_TO4PIS_VAL_0x03_gc (0x03<<6) /* M3 - Toggle Register Timer3 */


/* Timer modulator Output 3 Port Interface Select */
#define TMO_TO3PIS_VAL_0x00_gc (0x00<<4) /* Port D4 Data Register */
#define TMO_TO3PIS_VAL_0x01_gc (0x01<<4) /* M1 - Toggle Register Timer1 */
#define TMO_TO3PIS_VAL_0x02_gc (0x02<<4) /* M3 - Toggle Register Timer3 */
#define TMO_TO3PIS_VAL_0x03_gc (0x03<<4) /* M4 - Toggle Register Timer4 */


/* Timer modulator Output 2 Port Interface Select */
#define TMO_TO2PIS_VAL_0x00_gc (0x00<<2) /* Port D3 Data Register */
#define TMO_TO2PIS_VAL_0x01_gc (0x01<<2) /* M1 - Toggle Register Timer1 */
#define TMO_TO2PIS_VAL_0x02_gc (0x02<<2) /* M2 - Toggle Register Timer2 */
#define TMO_TO2PIS_VAL_0x03_gc (0x03<<2) /* M4 - Toggle Register Timer4 */


/* Timer modulator Output 1 Port Interface Select */
#define TMO_TO1PIS_VAL_0x00_gc (0x00) /* Port D2 Data Register */
#define TMO_TO1PIS_VAL_0x01_gc (0x01) /* M1 - Toggle Register Timer1 */
#define TMO_TO1PIS_VAL_0x02_gc (0x02) /* M2 - Toggle Register Timer2 */
#define TMO_TO1PIS_VAL_0x03_gc (0x03) /* M3 - Toggle Register Timer3 */


/*
--------------------------------------------------------------------------------
TPLF_CAL - 
--------------------------------------------------------------------------------
*/


/* Bandgap Calibration of VREF1 */
#define TPLF_CAL_LFCALR1_SEL150M_gc(x) ((x<<5) & 0xE0)

/* icomp_range_trim */
#define TPLF_CAL_LFCALR1_ICOMPRT_gc(x) ((x<<3) & 0x18)

/* lf_stim_trim_current */
#define TPLF_CAL_LFCALR1_LFSTC_gc(x) (x & 0x07)

/* trim_ikomp_data */
#define TPLF_CAL_TIKOMPD_CLEAR_gc (0x00) /* trim_ikomp_data - CLEAR */
#define TPLF_CAL_TIKOMPD_SET_gc   (0x80) /* trim_ikomp_data - SET */


/* lf_stim_res_mode */
#define TPLF_CAL_LFSRM_CLEAR_gc (0x00) /* lf_stim_res_mode - CLEAR */
#define TPLF_CAL_LFSRM_SET_gc   (0x40) /* lf_stim_res_mode - SET */


/* lf_stim_trim_res */
#define TPLF_CAL_LFCALR2_LFSTRES_gc(x) (x & 0x3F)

/* Trim coarse gain bit 15 */
#define TPLF_CAL_TCGAIN27_CLEAR_gc (0x00) /* Trim coarse gain bit 15 - CLEAR */
#define TPLF_CAL_TCGAIN27_SET_gc   (0x80) /* Trim coarse gain bit 15 - SET */


/* Trim coarse gain bit 14 */
#define TPLF_CAL_TCGAIN26_CLEAR_gc (0x00) /* Trim coarse gain bit 14 - CLEAR */
#define TPLF_CAL_TCGAIN26_SET_gc   (0x40) /* Trim coarse gain bit 14 - SET */


/* Trim coarse gain bit 13 */
#define TPLF_CAL_TCGAIN25_CLEAR_gc (0x00) /* Trim coarse gain bit 13 - CLEAR */
#define TPLF_CAL_TCGAIN25_SET_gc   (0x20) /* Trim coarse gain bit 13 - SET */


/* Trim coarse gain bit 12 */
#define TPLF_CAL_TCGAIN24_CLEAR_gc (0x00) /* Trim coarse gain bit 12 - CLEAR */
#define TPLF_CAL_TCGAIN24_SET_gc   (0x10) /* Trim coarse gain bit 12 - SET */


/* Trim coarse gain bit 11 */
#define TPLF_CAL_TCGAIN23_CLEAR_gc (0x00) /* Trim coarse gain bit 11 - CLEAR */
#define TPLF_CAL_TCGAIN23_SET_gc   (0x08) /* Trim coarse gain bit 11 - SET */


/* Trim coarse gain bit 10 */
#define TPLF_CAL_TCGAIN22_CLEAR_gc (0x00) /* Trim coarse gain bit 10 - CLEAR */
#define TPLF_CAL_TCGAIN22_SET_gc   (0x04) /* Trim coarse gain bit 10 - SET */


/* Trim coarse gain bit 9 */
#define TPLF_CAL_TCGAIN21_CLEAR_gc (0x00) /* Trim coarse gain bit 9 - CLEAR */
#define TPLF_CAL_TCGAIN21_SET_gc   (0x02) /* Trim coarse gain bit 9 - SET */


/* Trim coarse gain bit 8 */
#define TPLF_CAL_TCGAIN20_CLEAR_gc (0x00) /* Trim coarse gain bit 8 - CLEAR */
#define TPLF_CAL_TCGAIN20_SET_gc   (0x01) /* Trim coarse gain bit 8 - SET */


/* Trim coarse gain bit 23 */
#define TPLF_CAL_TCGAIN37_CLEAR_gc (0x00) /* Trim coarse gain bit 23 - CLEAR */
#define TPLF_CAL_TCGAIN37_SET_gc   (0x80) /* Trim coarse gain bit 23 - SET */


/* Trim coarse gain bit 22 */
#define TPLF_CAL_TCGAIN36_CLEAR_gc (0x00) /* Trim coarse gain bit 22 - CLEAR */
#define TPLF_CAL_TCGAIN36_SET_gc   (0x40) /* Trim coarse gain bit 22 - SET */


/* Trim coarse gain bit 21 */
#define TPLF_CAL_TCGAIN35_CLEAR_gc (0x00) /* Trim coarse gain bit 21 - CLEAR */
#define TPLF_CAL_TCGAIN35_SET_gc   (0x20) /* Trim coarse gain bit 21 - SET */


/* Trim coarse gain bit 20 */
#define TPLF_CAL_TCGAIN34_CLEAR_gc (0x00) /* Trim coarse gain bit 20 - CLEAR */
#define TPLF_CAL_TCGAIN34_SET_gc   (0x10) /* Trim coarse gain bit 20 - SET */


/* Trim coarse gain bit 18 */
#define TPLF_CAL_TCGAIN32_CLEAR_gc (0x00) /* Trim coarse gain bit 18 - CLEAR */
#define TPLF_CAL_TCGAIN32_SET_gc   (0x04) /* Trim coarse gain bit 18 - SET */


/* Trim coarse gain bit 17 */
#define TPLF_CAL_TCGAIN31_CLEAR_gc (0x00) /* Trim coarse gain bit 17 - CLEAR */
#define TPLF_CAL_TCGAIN31_SET_gc   (0x02) /* Trim coarse gain bit 17 - SET */


/* Trim coarse gain bit 16 */
#define TPLF_CAL_TCGAIN30_CLEAR_gc (0x00) /* Trim coarse gain bit 16 - CLEAR */
#define TPLF_CAL_TCGAIN30_SET_gc   (0x01) /* Trim coarse gain bit 16 - SET */


/* Trim coarse gain bit 28 */
#define TPLF_CAL_TCGAIN44_CLEAR_gc (0x00) /* Trim coarse gain bit 28 - CLEAR */
#define TPLF_CAL_TCGAIN44_SET_gc   (0x10) /* Trim coarse gain bit 28 - SET */


/* Trim coarse gain bit 27 */
#define TPLF_CAL_TCGAIN43_CLEAR_gc (0x00) /* Trim coarse gain bit 27 - CLEAR */
#define TPLF_CAL_TCGAIN43_SET_gc   (0x08) /* Trim coarse gain bit 27 - SET */


/* Trim coarse gain bit 26 */
#define TPLF_CAL_TCGAIN42_CLEAR_gc (0x00) /* Trim coarse gain bit 26 - CLEAR */
#define TPLF_CAL_TCGAIN42_SET_gc   (0x04) /* Trim coarse gain bit 26 - SET */


/* Trim coarse gain bit 25 */
#define TPLF_CAL_TCGAIN41_CLEAR_gc (0x00) /* Trim coarse gain bit 25 - CLEAR */
#define TPLF_CAL_TCGAIN41_SET_gc   (0x02) /* Trim coarse gain bit 25 - SET */


/* Trim coarse gain bit 24 */
#define TPLF_CAL_TCGAIN40_CLEAR_gc (0x00) /* Trim coarse gain bit 24 - CLEAR */
#define TPLF_CAL_TCGAIN40_SET_gc   (0x01) /* Trim coarse gain bit 24 - SET */


/* LF Calibration Protect Change Enable */
#define TPLF_CAL_LFCPCE_CLEAR_gc (0x00) /* LF Calibration Protect Change Enable - CLEAR */
#define TPLF_CAL_LFCPCE_SET_gc   (0x80) /* LF Calibration Protect Change Enable - SET */


/* Transponder Constant Disable */
#define TPLF_CAL_TPCD_CLEAR_gc (0x00) /* Transponder Constant Disable - CLEAR */
#define TPLF_CAL_TPCD_SET_gc   (0x40) /* Transponder Constant Disable - SET */


/* LF Calibration Ready */
#define TPLF_CAL_LFCALRY_CLEAR_gc (0x00) /* LF Calibration Ready - CLEAR */
#define TPLF_CAL_LFCALRY_SET_gc   (0x02) /* LF Calibration Ready - SET */


/* LF Calibration Protection */
#define TPLF_CAL_LFCALP_CLEAR_gc (0x00) /* LF Calibration Protection - CLEAR */
#define TPLF_CAL_LFCALP_SET_gc   (0x01) /* LF Calibration Protection - SET */


/* Slow RC oscillator calibration bit 8 */
#define TPLF_CAL_SRCCAL8_CLEAR_gc (0x00) /* Slow RC oscillator calibration bit 8 - CLEAR */
#define TPLF_CAL_SRCCAL8_SET_gc   (0x80) /* Slow RC oscillator calibration bit 8 - SET */


/* Slow RC oscillator calibration bit 7 */
#define TPLF_CAL_SRCCAL7_CLEAR_gc (0x00) /* Slow RC oscillator calibration bit 7 - CLEAR */
#define TPLF_CAL_SRCCAL7_SET_gc   (0x40) /* Slow RC oscillator calibration bit 7 - SET */


/* Slow RC oscillator calibration bit 6 */
#define TPLF_CAL_SRCCAL6_CLEAR_gc (0x00) /* Slow RC oscillator calibration bit 6 - CLEAR */
#define TPLF_CAL_SRCCAL6_SET_gc   (0x20) /* Slow RC oscillator calibration bit 6 - SET */


/* Slow RC oscillator calibration bit 5 */
#define TPLF_CAL_SRCCAL5_CLEAR_gc (0x00) /* Slow RC oscillator calibration bit 5 - CLEAR */
#define TPLF_CAL_SRCCAL5_SET_gc   (0x10) /* Slow RC oscillator calibration bit 5 - SET */


/* Slow RC oscillator calibration bit 4 */
#define TPLF_CAL_SRCCAL4_CLEAR_gc (0x00) /* Slow RC oscillator calibration bit 4 - CLEAR */
#define TPLF_CAL_SRCCAL4_SET_gc   (0x08) /* Slow RC oscillator calibration bit 4 - SET */


/* Slow RC oscillator calibration bit 3 */
#define TPLF_CAL_SRCCAL3_CLEAR_gc (0x00) /* Slow RC oscillator calibration bit 3 - CLEAR */
#define TPLF_CAL_SRCCAL3_SET_gc   (0x04) /* Slow RC oscillator calibration bit 3 - SET */


/* Slow RC oscillator calibration bit 2 */
#define TPLF_CAL_SRCCAL2_CLEAR_gc (0x00) /* Slow RC oscillator calibration bit 2 - CLEAR */
#define TPLF_CAL_SRCCAL2_SET_gc   (0x02) /* Slow RC oscillator calibration bit 2 - SET */


/* Slow RC oscillator calibration bit 1 */
#define TPLF_CAL_SRCCAL1_CLEAR_gc (0x00) /* Slow RC oscillator calibration bit 1 - CLEAR */
#define TPLF_CAL_SRCCAL1_SET_gc   (0x01) /* Slow RC oscillator calibration bit 1 - SET */


/* Slow RC oscillator calibration bit 0 */
#define TPLF_CAL_SRCCAL0_CLEAR_gc (0x00) /* Slow RC oscillator calibration bit 0 - CLEAR */
#define TPLF_CAL_SRCCAL0_SET_gc   (0x01) /* Slow RC oscillator calibration bit 0 - SET */


/* Stop SRC-Osccillator output */
#define TPLF_CAL_HOLD_SRC_CLEAR_gc (0x00) /* Stop SRC-Osccillator output - CLEAR */
#define TPLF_CAL_HOLD_SRC_SET_gc   (0x80) /* Stop SRC-Osccillator output - SET */


/* Disable SRC Bandgap */
#define TPLF_CAL_DIS_SRC_CLEAR_gc (0x00) /* Disable SRC Bandgap - CLEAR */
#define TPLF_CAL_DIS_SRC_SET_gc   (0x40) /* Disable SRC Bandgap - SET */


/* SRC Oscillator Select delta current */
#define TPLF_CAL_SRCTCAL_SRCS_gc(x) ((x<<3) & 0x18)

/* SRC Oscillator Temperature Compensation */
#define TPLF_CAL_SRCTCAL_SRCTC_gc(x) (x & 0x07)

/* Transponder Calibration Register 11-TPCALR117 */
#define TPLF_CAL_TPCALR117_CLEAR_gc (0x00) /* Transponder Calibration Register 11-TPCALR117 - CLEAR */
#define TPLF_CAL_TPCALR117_SET_gc   (0x80) /* Transponder Calibration Register 11-TPCALR117 - SET */


/* Transponder Calibration Register 11-TPCALR116 */
#define TPLF_CAL_TPCALR116_CLEAR_gc (0x00) /* Transponder Calibration Register 11-TPCALR116 - CLEAR */
#define TPLF_CAL_TPCALR116_SET_gc   (0x40) /* Transponder Calibration Register 11-TPCALR116 - SET */


/* Transponder Calibration Register 11-TPCALR115 */
#define TPLF_CAL_TPCALR115_CLEAR_gc (0x00) /* Transponder Calibration Register 11-TPCALR115 - CLEAR */
#define TPLF_CAL_TPCALR115_SET_gc   (0x20) /* Transponder Calibration Register 11-TPCALR115 - SET */


/* Enable VSW Brown Out Detection */
#define TPLF_CAL_ENVSWBD_CLEAR_gc (0x00) /* Enable VSW Brown Out Detection - CLEAR */
#define TPLF_CAL_ENVSWBD_SET_gc   (0x10) /* Enable VSW Brown Out Detection - SET */


/* Enable LFVCC Brown Out Detection */
#define TPLF_CAL_ENLFBD_CLEAR_gc (0x00) /* Enable LFVCC Brown Out Detection - CLEAR */
#define TPLF_CAL_ENLFBD_SET_gc   (0x08) /* Enable LFVCC Brown Out Detection - SET */


/* Enable DVCC Brown Out Detection */
#define TPLF_CAL_ENDVBD_CLEAR_gc (0x00) /* Enable DVCC Brown Out Detection - CLEAR */
#define TPLF_CAL_ENDVBD_SET_gc   (0x04) /* Enable DVCC Brown Out Detection - SET */


/* Measurement Buffer Trimming bit 1 */
#define TPLF_CAL_MTBTR1_CLEAR_gc (0x00) /* Measurement Buffer Trimming bit 1 - CLEAR */
#define TPLF_CAL_MTBTR1_SET_gc   (0x02) /* Measurement Buffer Trimming bit 1 - SET */


/* Measurement Buffer Trimming bit 0 */
#define TPLF_CAL_MTBTR0_CLEAR_gc (0x00) /* Measurement Buffer Trimming bit 0 - CLEAR */
#define TPLF_CAL_MTBTR0_SET_gc   (0x01) /* Measurement Buffer Trimming bit 0 - SET */


/* Transponder Calibration Register 12-TPCALR127 */
#define TPLF_CAL_TPCALR127_CLEAR_gc (0x00) /* Transponder Calibration Register 12-TPCALR127 - CLEAR */
#define TPLF_CAL_TPCALR127_SET_gc   (0x80) /* Transponder Calibration Register 12-TPCALR127 - SET */


/* Transponder Calibration Register 12-TPCALR126 */
#define TPLF_CAL_TPCALR126_CLEAR_gc (0x00) /* Transponder Calibration Register 12-TPCALR126 - CLEAR */
#define TPLF_CAL_TPCALR126_SET_gc   (0x40) /* Transponder Calibration Register 12-TPCALR126 - SET */


/* Transponder Calibration Register 12-TPCALR125 */
#define TPLF_CAL_TPCALR125_CLEAR_gc (0x00) /* Transponder Calibration Register 12-TPCALR125 - CLEAR */
#define TPLF_CAL_TPCALR125_SET_gc   (0x20) /* Transponder Calibration Register 12-TPCALR125 - SET */


/* Transponder Calibration Register 12-TPCALR124 */
#define TPLF_CAL_TPCALR124_CLEAR_gc (0x00) /* Transponder Calibration Register 12-TPCALR124 - CLEAR */
#define TPLF_CAL_TPCALR124_SET_gc   (0x10) /* Transponder Calibration Register 12-TPCALR124 - SET */


/* Transponder Calibration Register 12-TPCALR123 */
#define TPLF_CAL_TPCALR123_CLEAR_gc (0x00) /* Transponder Calibration Register 12-TPCALR123 - CLEAR */
#define TPLF_CAL_TPCALR123_SET_gc   (0x08) /* Transponder Calibration Register 12-TPCALR123 - SET */


/* Transponder Calibration Register 12-TPCALR122 */
#define TPLF_CAL_TPCALR122_CLEAR_gc (0x00) /* Transponder Calibration Register 12-TPCALR122 - CLEAR */
#define TPLF_CAL_TPCALR122_SET_gc   (0x04) /* Transponder Calibration Register 12-TPCALR122 - SET */


/* Transponder Calibration Register 12-TPCALR121 */
#define TPLF_CAL_TPCALR121_CLEAR_gc (0x00) /* Transponder Calibration Register 12-TPCALR121 - CLEAR */
#define TPLF_CAL_TPCALR121_SET_gc   (0x02) /* Transponder Calibration Register 12-TPCALR121 - SET */


/* Transponder Direct Modulation */
#define TPLF_CAL_TPDMOD_CLEAR_gc (0x00) /* Transponder Direct Modulation - CLEAR */
#define TPLF_CAL_TPDMOD_SET_gc   (0x01) /* Transponder Direct Modulation - SET */


/* Transponder Power On Reset Threshold */
#define TPLF_CAL_TPCALR3_TPORTH_gc(x) ((x<<3) & 0x18)

/* Not used */
#define TPLF_CAL_LFVCC_TPCAL2_CLEAR_gc (0x00) /* Not used - CLEAR */
#define TPLF_CAL_LFVCC_TPCAL2_SET_gc   (0x04) /* Not used - SET */


/* Not used */
#define TPLF_CAL_LFVCC_TPCAL1_CLEAR_gc (0x00) /* Not used - CLEAR */
#define TPLF_CAL_LFVCC_TPCAL1_SET_gc   (0x02) /* Not used - SET */


/* Not used */
#define TPLF_CAL_LFVCC_TPCAL0_CLEAR_gc (0x00) /* Not used - CLEAR */
#define TPLF_CAL_LFVCC_TPCAL0_SET_gc   (0x01) /* Not used - SET */


/* Comparator VC Calibration */
#define TPLF_CAL_TPCALR4_COMPVC_CAL_gc(x) ((x<<3) & 0x18)

/* Transponder Init Calibration */
#define TPLF_CAL_TPCALR4_TPINIT_CAL_gc(x) (x & 0x07)

/*
--------------------------------------------------------------------------------
TWI1 - 
--------------------------------------------------------------------------------
*/


/* TWI1 (Slave) Address */
#define TWI1_TW1AR_TW1A_gc(x) ((x<<1) & 0xFE)

/* TWI1 General Call Recognition Enable */
#define TWI1_TW1GCE_CLEAR_gc (0x00) /* TWI1 General Call Recognition Enable - CLEAR */
#define TWI1_TW1GCE_SET_gc   (0x01) /* TWI1 General Call Recognition Enable - SET */


/* TWI1 Interrupt Flag */
#define TWI1_TW1INT_CLEAR_gc (0x00) /* TWI1 Interrupt Flag - CLEAR */
#define TWI1_TW1INT_SET_gc   (0x80) /* TWI1 Interrupt Flag - SET */


/* TWI1 Enable Acknowledge */
#define TWI1_TW1EA_CLEAR_gc (0x00) /* TWI1 Enable Acknowledge - CLEAR */
#define TWI1_TW1EA_SET_gc   (0x40) /* TWI1 Enable Acknowledge - SET */


/* TWI1 START Condition */
#define TWI1_TW1STA_CLEAR_gc (0x00) /* TWI1 START Condition - CLEAR */
#define TWI1_TW1STA_SET_gc   (0x20) /* TWI1 START Condition - SET */


/* TWI1 STOP Condition */
#define TWI1_TW1STO_CLEAR_gc (0x00) /* TWI1 STOP Condition - CLEAR */
#define TWI1_TW1STO_SET_gc   (0x10) /* TWI1 STOP Condition - SET */


/* TWI1 Write Collision Flag */
#define TWI1_TW1WC_CLEAR_gc (0x00) /* TWI1 Write Collision Flag - CLEAR */
#define TWI1_TW1WC_SET_gc   (0x08) /* TWI1 Write Collision Flag - SET */


/* TWI1 Enable */
#define TWI1_TW1EN_CLEAR_gc (0x00) /* TWI1 Enable - CLEAR */
#define TWI1_TW1EN_SET_gc   (0x04) /* TWI1 Enable - SET */


/* TWI1 Interrupt Enable */
#define TWI1_TW1IE_CLEAR_gc (0x00) /* TWI1 Interrupt Enable - CLEAR */
#define TWI1_TW1IE_SET_gc   (0x01) /* TWI1 Interrupt Enable - SET */


/* TWI1 Status */
#define TWI1_TW1SR_TW1S_gc(x) ((x<<3) & 0xF8)

/* TWI1 Prescaler */
#define TWI1_TW1PS_VAL_0x00_gc (0x00) /* 1 */
#define TWI1_TW1PS_VAL_0x01_gc (0x01) /* 4 */
#define TWI1_TW1PS_VAL_0x02_gc (0x02) /* 16 */
#define TWI1_TW1PS_VAL_0x03_gc (0x03) /* 64 */


/*
--------------------------------------------------------------------------------
TWI2 - 
--------------------------------------------------------------------------------
*/


/* TWI2 (Slave) Address */
#define TWI2_TW2AR_TW2A_gc(x) ((x<<1) & 0xFE)

/* TWI2 General Call Recognition Enable */
#define TWI2_TW2GCE_CLEAR_gc (0x00) /* TWI2 General Call Recognition Enable - CLEAR */
#define TWI2_TW2GCE_SET_gc   (0x01) /* TWI2 General Call Recognition Enable - SET */


/* TWI2 Interrupt Flag */
#define TWI2_TW2INT_CLEAR_gc (0x00) /* TWI2 Interrupt Flag - CLEAR */
#define TWI2_TW2INT_SET_gc   (0x80) /* TWI2 Interrupt Flag - SET */


/* TWI2 Enable Acknowledge */
#define TWI2_TW2EA_CLEAR_gc (0x00) /* TWI2 Enable Acknowledge - CLEAR */
#define TWI2_TW2EA_SET_gc   (0x40) /* TWI2 Enable Acknowledge - SET */


/* TWI2 START Condition */
#define TWI2_TW2STA_CLEAR_gc (0x00) /* TWI2 START Condition - CLEAR */
#define TWI2_TW2STA_SET_gc   (0x20) /* TWI2 START Condition - SET */


/* TWI2 STOP Condition */
#define TWI2_TW2STO_CLEAR_gc (0x00) /* TWI2 STOP Condition - CLEAR */
#define TWI2_TW2STO_SET_gc   (0x10) /* TWI2 STOP Condition - SET */


/* TWI2 Write Collision Flag */
#define TWI2_TW2WC_CLEAR_gc (0x00) /* TWI2 Write Collision Flag - CLEAR */
#define TWI2_TW2WC_SET_gc   (0x08) /* TWI2 Write Collision Flag - SET */


/* TWI2 Enable */
#define TWI2_TW2EN_CLEAR_gc (0x00) /* TWI2 Enable - CLEAR */
#define TWI2_TW2EN_SET_gc   (0x04) /* TWI2 Enable - SET */


/* TWI2 Interrupt Enable */
#define TWI2_TW2IE_CLEAR_gc (0x00) /* TWI2 Interrupt Enable - CLEAR */
#define TWI2_TW2IE_SET_gc   (0x01) /* TWI2 Interrupt Enable - SET */


/* TWI2 Status */
#define TWI2_TW2SR_TW2S_gc(x) ((x<<3) & 0xF8)

/* TWI2 Prescaler */
#define TWI2_TW2PS_VAL_0x00_gc (0x00) /* 1 */
#define TWI2_TW2PS_VAL_0x01_gc (0x01) /* 4 */
#define TWI2_TW2PS_VAL_0x02_gc (0x02) /* 16 */
#define TWI2_TW2PS_VAL_0x03_gc (0x03) /* 64 */


/*
--------------------------------------------------------------------------------
VX_MODE - 
--------------------------------------------------------------------------------
*/


/* Enable VX Inputs */
#define VX_MODE_EN_VX_IN_CLEAR_gc (0x00) /* Enable VX Inputs - CLEAR */
#define VX_MODE_EN_VX_IN_SET_gc   (0x10) /* Enable VX Inputs - SET */


/* Enable PB4 as an VX/VBAT Supply Output */
#define VX_MODE_EN_VX_OUT_CLEAR_gc (0x00) /* Enable PB4 as an VX/VBAT Supply Output - CLEAR */
#define VX_MODE_EN_VX_OUT_SET_gc   (0x08) /* Enable PB4 as an VX/VBAT Supply Output - SET */


/* Enable the VX_LDO */
#define VX_MODE_EN_VX_CLEAR_gc (0x00) /* Enable the VX_LDO - CLEAR */
#define VX_MODE_EN_VX_SET_gc   (0x04) /* Enable the VX_LDO - SET */


/* Select VX voltage level */
#define VX_MODE_VX_SEL1_CLEAR_gc (0x00) /* Select VX voltage level - CLEAR */
#define VX_MODE_VX_SEL1_SET_gc   (0x02) /* Select VX voltage level - SET */


/* Select VX voltage level */
#define VX_MODE_VX_SEL0_CLEAR_gc (0x00) /* Select VX voltage level - CLEAR */
#define VX_MODE_VX_SEL0_SET_gc   (0x01) /* Select VX voltage level - SET */


/*
--------------------------------------------------------------------------------
FUSE - 
--------------------------------------------------------------------------------
*/


/* MRC is selected during reset startup phase */
#define FUSE_CKSTART_CLEAR_gc (0x00) /* MRC is selected during reset startup phase - CLEAR */
#define FUSE_CKSTART_SET_gc   (0x80) /* MRC is selected during reset startup phase - SET */


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


/* Select boot reset vector */
#define FUSE_BOOTRST_CLEAR_gc (0x00) /* Select boot reset vector - CLEAR */
#define FUSE_BOOTRST_SET_gc   (0x04) /* Select boot reset vector - SET */


/* EEPROM Access Control */
#define FUSE_EEACC_CLEAR_gc (0x00) /* EEPROM Access Control - CLEAR */
#define FUSE_EEACC_SET_gc   (0x02) /* EEPROM Access Control - SET */


/* Protect Customer EEPROM section */
#define FUSE_PCEE1_CLEAR_gc (0x00) /* Protect Customer EEPROM section - CLEAR */
#define FUSE_PCEE1_SET_gc   (0x01) /* Protect Customer EEPROM section - SET */


/*
--------------------------------------------------------------------------------
LOCKBIT - 
--------------------------------------------------------------------------------
*/


/* Memory Lock */
#define LOCKBIT_LB_VAL_0x00_gc (0x00) /* Further programming and verification disabled */
#define LOCKBIT_LB_VAL_0x02_gc (0x02) /* Further programming disabled */
#define LOCKBIT_LB_VAL_0x03_gc (0x03) /* No memory lock features enable */

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


/* AES -  (0x00) */
#define AES_BASE                   _SFR_MEM8 (0x00)  /* AES Base Address */
#define AES_AESCR                  _SFR_MEM8 (0x3D)  /* AES Control Register */
#define AES_AESSR                  _SFR_MEM8 (0x3E)  /* AES Status Register */
#define AES_AESDPR                 _SFR_MEM8 (0x17F) /* AES Data Pointer Register */
#define AES_AESKR                  _SFR_MEM8 (0x180) /* AES Key Register */
#define AES_AESDR                  _SFR_MEM8 (0x181) /* AES Data Register */

/* CLK -  (0x00) */
#define CLK_BASE                   _SFR_MEM8 (0x00)  /* CLK Base Address */
#define CLK_PRR1                   _SFR_MEM8 (0x21)  /* Power reduction Register 1 */
#define CLK_PRR2                   _SFR_MEM8 (0x22)  /* Power reduction register 2 */
#define CLK_PRR0                   _SFR_MEM8 (0x3A)  /* Power reduction Register 0 */
#define CLK_XFUSE                  _SFR_MEM8 (0xC5)  
#define CLK_MRCCAL                 _SFR_MEM8 (0xC6)  /* Middle RC oscillator calibration Register */
#define CLK_FRCCAL                 _SFR_MEM8 (0xC7)  /* Fast RC oscillator calibration Register */
#define CLK_CMSR                   _SFR_MEM8 (0xC9)  /* Clock management status Register */
#define CLK_CMOCR                  _SFR_MEM8 (0xCA)  /* Clock management override control register */
#define CLK_CLKOD                  _SFR_MEM8 (0x115) /* Clock output divider settings Register */
#define CLK_CLKOCR                 _SFR_MEM8 (0x116) /* Clock output control Register */

/* CPU -  (0x00) */
#define CPU_BASE                   _SFR_MEM8 (0x00)  /* CPU Base Address */
#define CPU_MCUCR                  _SFR_MEM8 (0x2E)  /* MCU control Register */
#define CPU_MCUSR                  _SFR_MEM8 (0x4B)  /* MCU Status Register */
#define CPU_DWDR                   _SFR_MEM8 (0x51)  /* Debug Wire Data Register */
#define CPU_SPMCSR                 _SFR_MEM8 (0x57)  /* Store Program Memory Control and Status Register */
#define CPU_SMCR                   _SFR_MEM8 (0x58)  /* Sleep mode control Register */
#define CPU_SP                     _SFR_MEM16(0x5D)  /* Stack Pointer */
#define CPU_SPL                    _SFR_MEM8 (0x5D)  /* Stack Pointer LOW BYTE */
#define CPU_SPH                    _SFR_MEM8 (0x5E)  /* Stack Pointer HIGH BYTE */
#define CPU_SREG                   _SFR_MEM8 (0x5F)  /* Status Register */
#define CPU_CMCR                   _SFR_MEM8 (0x1E3) /* Clock Management Control Register */
#define CPU_CMIMR                  _SFR_MEM8 (0x1E4) /* Clock interrupt mask Register */
#define CPU_CLPR                   _SFR_MEM8 (0x1E5) /* Clock Prescaler Register */

/* CRC -  (0x00) */
#define CRC_BASE                   _SFR_MEM8 (0x00)  /* CRC Base Address */
#define CRC_CRCCR                  _SFR_MEM8 (0x145) /* CRC Control Register */
#define CRC_CRCDOR                 _SFR_MEM8 (0x146) /* CRC Data Output Register */
#define CRC_CRCDIR                 _SFR_MEM8 (0x1E0) /* CRC Data Input Register */

/* DEBOUNCE -  (0x00) */
#define DEBOUNCE_BASE              _SFR_MEM8 (0x00)  /* DEBOUNCE Base Address */
#define DEBOUNCE_DBCR              _SFR_MEM8 (0x152) /* DeBounce Control Register */
#define DEBOUNCE_DBTC              _SFR_MEM8 (0x153) /* Debounce Timer Compare Register */
#define DEBOUNCE_DBENB             _SFR_MEM8 (0x154) /* DeBounce Enable Port B */
#define DEBOUNCE_DBENC             _SFR_MEM8 (0x155) /* DeBounce Enable Port C */
#define DEBOUNCE_DBEND             _SFR_MEM8 (0x164) /* DeBounce Enable Port D */

/* DEBUG -  (0x00) */
#define DEBUG_BASE                 _SFR_MEM16(0x00)  /* DEBUG Base Address */
#define DEBUG_TRCID                _SFR_MEM16(0xFC)  /* Trace ID Register */
#define DEBUG_TRCIDL               _SFR_MEM8 (0xFC)  /* Trace ID Register LOW BYTE */
#define DEBUG_TRCIDH               _SFR_MEM8 (0xFD)  /* Trace ID Register HIGH BYTE */
#define DEBUG_TRCDR                _SFR_MEM8 (0xFF)  /* Trace Data Register */
#define DEBUG_DBGSW                _SFR_MEM8 (0x156) /* Debugging Support Switch */
#define DEBUG_DBONDR               _SFR_MEM8 (0x1E7) /* Downbond Test Register */

/* DFIFO -  (0x00) */
#define DFIFO_BASE                 _SFR_MEM8 (0x00)  /* DFIFO Base Address */
#define DFIFO_DFS                  _SFR_MEM8 (0xD2)  /* Data FIFO Status Register */
#define DFIFO_DFL                  _SFR_MEM8 (0xD5)  /* Data FIFO Fill Level Register */
#define DFIFO_DFWP                 _SFR_MEM8 (0xD6)  /* Data FIFO Write Pointer */
#define DFIFO_DFRP                 _SFR_MEM8 (0xD7)  /* Data FIFO Read Pointer */
#define DFIFO_DFD                  _SFR_MEM8 (0xD8)  /* Data FIFO Data Register */
#define DFIFO_DFI                  _SFR_MEM8 (0xD9)  /* Data FIFO Interrupt Mask Register */
#define DFIFO_DFC                  _SFR_MEM8 (0xDA)  /* Data FIFO Configuration Register */

/* EEPROM -  (0x00) */
#define EEPROM_BASE                _SFR_MEM8 (0x00)  /* EEPROM Base Address */
#define EEPROM_EECR2               _SFR_MEM8 (0x36)  /* EEPROM Control Register 2 */
#define EEPROM_EECR                _SFR_MEM8 (0x3F)  /* EEPROM Control Register */
#define EEPROM_EEDR                _SFR_MEM8 (0x40)  /* EEPROM Data Register */
#define EEPROM_EEAR                _SFR_MEM16(0x41)  /* EEPROM Address Register */
#define EEPROM_EEARL               _SFR_MEM8 (0x41)  /* EEPROM Address Register LOW BYTE */
#define EEPROM_EEARH               _SFR_MEM8 (0x42)  /* EEPROM Address Register HIGH BYTE */
#define EEPROM_EEPR                _SFR_MEM8 (0x43)  /* EEPROM Protection Register */
#define EEPROM_EEPR1               _SFR_MEM8 (0x13B) /* EEPROM Protection Register 1 */
#define EEPROM_EEPR2               _SFR_MEM8 (0x13C) /* EEPROM Protection Register 2 */
#define EEPROM_EEPR3               _SFR_MEM8 (0x13D) /* EEPROM Protection Register 3 */

/* GPIOREGS_DVCC -  (0x00) */
#define GPIOREGS_DVCC_BASE         _SFR_MEM8 (0x00)  /* GPIOREGS_DVCC Base Address */
#define GPIOREGS_DVCC_GPIOR0       _SFR_MEM8 (0x20)  /* General Purpose I/O Register 0 */
#define GPIOREGS_DVCC_GPIOR1       _SFR_MEM8 (0x44)  /* General Purpose I/O Register 1 */
#define GPIOREGS_DVCC_GPIOR2       _SFR_MEM8 (0x45)  /* General Purpose I/O Register 2 */

/* GPIOREGS_LFVCC -  (0x00) */
#define GPIOREGS_LFVCC_BASE        _SFR_MEM8 (0x00)  /* GPIOREGS_LFVCC Base Address */
#define GPIOREGS_LFVCC_GPIOR3      _SFR_MEM8 (0x182) /* General Purpose I/O Register 3 */
#define GPIOREGS_LFVCC_GPIOR4      _SFR_MEM8 (0x183) /* General Purpose I/O Register 4 */
#define GPIOREGS_LFVCC_GPIOR5      _SFR_MEM8 (0x184) /* General Purpose I/O Register 5 */
#define GPIOREGS_LFVCC_GPIOR6      _SFR_MEM8 (0x185) /* General Purpose I/O Register 6 */
#define GPIOREGS_LFVCC_GPIOR7      _SFR_MEM8 (0x186) /* General Purpose I/O Register 7 */
#define GPIOREGS_LFVCC_GPIOR8      _SFR_MEM8 (0x187) /* General Purpose I/O Register 8 */

/* INT -  (0x00) */
#define INT_BASE                   _SFR_MEM8 (0x00)  /* INT Base Address */
#define INT_PCICR                  _SFR_MEM8 (0x46)  /* Pin change Interrupt control Register */
#define INT_EIMSK                  _SFR_MEM8 (0x47)  /* External Interrupt Mask Register */
#define INT_EIFR                   _SFR_MEM8 (0x48)  /* External Interrupt Flag Register */
#define INT_EICRA                  _SFR_MEM8 (0x6B)  /* External Interrupt control Register */
#define INT_PCMSK0                 _SFR_MEM8 (0x6C)  /* Pin change Mask Register 0 */
#define INT_PCMSK1                 _SFR_MEM8 (0x6D)  /* Pin change Mask Register 1 */
#define INT_PCIFR                  _SFR_MEM8 (0x161) /* Pin change Interrupt flag Register */

/* LED -  (0x00) */
#define LED_BASE                   _SFR_MEM8 (0x00)  /* LED Base Address */
#define LED_PDSCR                  _SFR_MEM8 (0x1EF) /* Pad Driver Strength Control Register */

/* LF_FIFO -  (0x00) */
#define LF_FIFO_BASE               _SFR_MEM8 (0x00)  /* LF_FIFO Base Address */
#define LF_FIFO_LDFFL              _SFR_MEM8 (0x38)  /* LF Data FIFO Fill Level Register */
#define LF_FIFO_LDFD               _SFR_MEM8 (0x39)  /* LF Data FIFO Data Register */
#define LF_FIFO_LDFCKSW            _SFR_MEM8 (0x49)  /* LF Data FIFO Clock Switch Register */
#define LF_FIFO_LDFS               _SFR_MEM8 (0x1D1) /* LF Data FIFO Status Register */
#define LF_FIFO_LDFWP              _SFR_MEM8 (0x1D3) /* LF Data FIFO Write Pointer */
#define LF_FIFO_LDFRP              _SFR_MEM8 (0x1D4) /* LF Data FIFO Read Pointer */
#define LF_FIFO_LDFIM              _SFR_MEM8 (0x1D6) /* LF Data FIFO Interrupt Mask Register */
#define LF_FIFO_LDFC               _SFR_MEM8 (0x1D7) /* LF Data FIFO Configuration Register */

/* LF_PROTOCOL_HANDLER -  (0x00) */
#define LF_PROTOCOL_HANDLER_BASE   _SFR_MEM8 (0x00)  /* LF_PROTOCOL_HANDLER Base Address */
#define LF_PROTOCOL_HANDLER_PHTCR  _SFR_MEM8 (0x37)  /* PH Telegram Configuration Register */
#define LF_PROTOCOL_HANDLER_PHFR   _SFR_MEM8 (0x3B)  /* Protocol Handler Flag Register */
#define LF_PROTOCOL_HANDLER_PHBCRR _SFR_MEM8 (0x188) /* Protocol Handler Bit Counter Read Register */
#define LF_PROTOCOL_HANDLER_PHID0  _SFR_MEM32(0x190) /* PH ID0 Register */
#define LF_PROTOCOL_HANDLER_PHID0L _SFR_MEM16(0x190) /* PH ID0 Register LOW WORD */
#define LF_PROTOCOL_HANDLER_PHID00 _SFR_MEM8 (0x190) /* PH ID0 Register LOW BYTE */
#define LF_PROTOCOL_HANDLER_PHID01 _SFR_MEM8 (0x191) /* PH ID0 Register 2nd BYTE */
#define LF_PROTOCOL_HANDLER_PHID0H _SFR_MEM16(0x192) /* PH ID0 Register HIGH WORD */
#define LF_PROTOCOL_HANDLER_PHID02 _SFR_MEM8 (0x192) /* PH ID0 Register 3rd BYTE */
#define LF_PROTOCOL_HANDLER_PHID03 _SFR_MEM8 (0x193) /* PH ID0 Register HIGH BYTE */
/* WARNING: LF_PROTOCOL_HANDLER_PHID0L ALREADY DEFINED as '_SFR_MEM16(0x190)' NOT '_SFR_MEM8 (0x194)' */
#define LF_PROTOCOL_HANDLER_PHID1  _SFR_MEM32(0x195) /* PH ID1 Register */
#define LF_PROTOCOL_HANDLER_PHID1L _SFR_MEM16(0x195) /* PH ID1 Register LOW WORD */
#define LF_PROTOCOL_HANDLER_PHID10 _SFR_MEM8 (0x195) /* PH ID1 Register LOW BYTE */
#define LF_PROTOCOL_HANDLER_PHID11 _SFR_MEM8 (0x196) /* PH ID1 Register 2nd BYTE */
#define LF_PROTOCOL_HANDLER_PHID1H _SFR_MEM16(0x197) /* PH ID1 Register HIGH WORD */
#define LF_PROTOCOL_HANDLER_PHID12 _SFR_MEM8 (0x197) /* PH ID1 Register 3rd BYTE */
#define LF_PROTOCOL_HANDLER_PHID13 _SFR_MEM8 (0x198) /* PH ID1 Register HIGH BYTE */
/* WARNING: LF_PROTOCOL_HANDLER_PHID1L ALREADY DEFINED as '_SFR_MEM16(0x195)' NOT '_SFR_MEM8 (0x199)' */
#define LF_PROTOCOL_HANDLER_PHIDFR _SFR_MEM8 (0x19A) /* Protocol Handler ID Frame Register */
#define LF_PROTOCOL_HANDLER_PHTBLR _SFR_MEM8 (0x1A4) /* Protocol Handler Telegram Bit Length Register */
#define LF_PROTOCOL_HANDLER_PHDFR  _SFR_MEM8 (0x1A5) /* Protocol Handler Data Frame end Register */
#define LF_PROTOCOL_HANDLER_PHIMR  _SFR_MEM8 (0x1D8) /* Protocol Handler Interrupt Mask Register */
#define LF_PROTOCOL_HANDLER_PHCRCR _SFR_MEM8 (0x1D9) /* Protocol Handler CRC Control Register */
#define LF_PROTOCOL_HANDLER_PHCST  _SFR_MEM16(0x1DA) /* PH CRC Start Value Register */
#define LF_PROTOCOL_HANDLER_PHCSTL _SFR_MEM8 (0x1DA) /* PH CRC Start Value Register LOW BYTE */
#define LF_PROTOCOL_HANDLER_PHCSTH _SFR_MEM8 (0x1DB) /* PH CRC Start Value Register HIGH BYTE */
#define LF_PROTOCOL_HANDLER_PHCRP  _SFR_MEM16(0x1DC) /* PH CRC Polynomial Register */
#define LF_PROTOCOL_HANDLER_PHCRPL _SFR_MEM8 (0x1DC) /* PH CRC Polynomial Register LOW BYTE */
#define LF_PROTOCOL_HANDLER_PHCRPH _SFR_MEM8 (0x1DD) /* PH CRC Polynomial Register HIGH BYTE */
#define LF_PROTOCOL_HANDLER_PHCSR  _SFR_MEM16(0x1DE) /* PH CRC Checksum Register */
#define LF_PROTOCOL_HANDLER_PHCSRL _SFR_MEM8 (0x1DE) /* PH CRC Checksum Register LOW BYTE */
#define LF_PROTOCOL_HANDLER_PHCSRH _SFR_MEM8 (0x1DF) /* PH CRC Checksum Register HIGH BYTE */

/* LF_RECEIVER -  (0x00) */
#define LF_RECEIVER_BASE           _SFR_MEM8 (0x00)  /* LF_RECEIVER Base Address */
#define LF_RECEIVER_LFFR           _SFR_MEM8 (0x3C)  /* LF Receiver Flag Register */
#define LF_RECEIVER_LFCR0          _SFR_MEM8 (0x4F)  /* LF Receiver Control Register 0 */
#define LF_RECEIVER_LFCR1          _SFR_MEM8 (0x50)  /* LF Receiver Control Register 1 */
#define LF_RECEIVER_LFCR2          _SFR_MEM8 (0x5A)  /* LF Receiver Control Register 2 */
#define LF_RECEIVER_LFCR3          _SFR_MEM8 (0x5B)  /* LF Receiver Control Register 3 */
#define LF_RECEIVER_LFDSR1         _SFR_MEM8 (0x130) /* LF Receiver Decoder Setting Register 1 */
#define LF_RECEIVER_LFDSR2         _SFR_MEM8 (0x131) /* LF Receiver Decoder Setting Register 2 */
#define LF_RECEIVER_LFDSR3         _SFR_MEM8 (0x132) /* LF Receiver Decoder Setting Register 3 */
#define LF_RECEIVER_LFDSR4         _SFR_MEM8 (0x133) /* LF Receiver Decoder Setting Register 4 */
#define LF_RECEIVER_LFDSR5         _SFR_MEM8 (0x134) /* LF Decoder Setting 5 Register */
#define LF_RECEIVER_LFDSR6         _SFR_MEM8 (0x135) /* LF Decoder Setting 6 Register */
#define LF_RECEIVER_LFDSR7         _SFR_MEM8 (0x136) /* LF Decoder Setting 7 Register */
#define LF_RECEIVER_LFDSR8         _SFR_MEM8 (0x137) /* LF Decoder Setting 8 Register */
#define LF_RECEIVER_LFDSR9         _SFR_MEM8 (0x138) /* LF Decoder Setting 9 Register */
#define LF_RECEIVER_LFDSR10        _SFR_MEM8 (0x139) /* LF Decoder Setting 10 Register */
#define LF_RECEIVER_LFDSR11        _SFR_MEM8 (0x13A) /* Low Frequency Decoder Setting Register 11 */
#define LF_RECEIVER_LFSRCTM        _SFR_MEM8 (0x151) /* LF Receiver SRC Tuning MSB */
#define LF_RECEIVER_LFSRCTL        _SFR_MEM8 (0x15C) /* LF Receiver SRC Tuning LSB */
#define LF_RECEIVER_LFIMR          _SFR_MEM8 (0x18F) /* LF Receiver Interrupt Mask Register */
#define LF_RECEIVER_LFSYSY         _SFR_MEM32(0x19B) /* LF Receiver Synchronization Symbols Register */
#define LF_RECEIVER_LFSYSYL        _SFR_MEM16(0x19B) /* LF Receiver Synchronization Symbols Register LOW WORD */
#define LF_RECEIVER_LFSYSY0        _SFR_MEM8 (0x19B) /* LF Receiver Synchronization Symbols Register LOW BYTE */
#define LF_RECEIVER_LFSYSY1        _SFR_MEM8 (0x19C) /* LF Receiver Synchronization Symbols Register 2nd BYTE */
#define LF_RECEIVER_LFSYSYH        _SFR_MEM16(0x19D) /* LF Receiver Synchronization Symbols Register HIGH WORD */
#define LF_RECEIVER_LFSYSY2        _SFR_MEM8 (0x19D) /* LF Receiver Synchronization Symbols Register 3rd BYTE */
#define LF_RECEIVER_LFSYSY3        _SFR_MEM8 (0x19E) /* LF Receiver Synchronization Symbols Register HIGH BYTE */
#define LF_RECEIVER_LFSYLE         _SFR_MEM8 (0x19F) /* LF Receiver Synchronization Length Register */
#define LF_RECEIVER_LFSTOP         _SFR_MEM8 (0x1A0) /* LF Receiver Stop Bit Register */
#define LF_RECEIVER_LFQC3          _SFR_MEM8 (0x1A7) /* LF Receiver Channel 3 Quality Faktor Register */
#define LF_RECEIVER_LFQC2          _SFR_MEM8 (0x1A8) /* LF Receiver Channel 2 Quality Faktor Register */
#define LF_RECEIVER_LFQC1          _SFR_MEM8 (0x1A9) /* LF Receiver Channel 1 Quality Faktor Register */

/* LF_RSSI -  (0x00) */
#define LF_RSSI_BASE               _SFR_MEM8 (0x00)  /* LF_RSSI Base Address */
#define LF_RSSI_RSCR               _SFR_MEM8 (0x1B0) /* RSSI Control Register */
#define LF_RSSI_RSSR               _SFR_MEM8 (0x1B1) /* RSSI Status Register */
#define LF_RSSI_RSMS1R             _SFR_MEM8 (0x1B2) /* RSSI Measurement Setting 1 Register */
#define LF_RSSI_RSMS2R             _SFR_MEM8 (0x1B3) /* RSSI Measurement Setting 2 Register */
#define LF_RSSI_RSFR               _SFR_MEM8 (0x1B4) /* RSSI Flag Register */
#define LF_RSSI_RSCALIB            _SFR_MEM8 (0x1B6) /* RSSI Calibration Register */
#define LF_RSSI_RSDLYR             _SFR_MEM8 (0x1B7) /* RSSI Delay Register */
#define LF_RSSI_RSRES1L            _SFR_MEM8 (0x1B8) /* RSSI Result 1 Low Byte Register */
#define LF_RSSI_RSRES1H            _SFR_MEM8 (0x1B9) /* RSSI Result 1 High Byte Register */
#define LF_RSSI_RSRES2L            _SFR_MEM8 (0x1BA) /* RSSI Result 2 Low Byte Register */
#define LF_RSSI_RSRES2H            _SFR_MEM8 (0x1BB) /* RSSI Result 2 High Byte Register */
#define LF_RSSI_RSRES3L            _SFR_MEM8 (0x1BC) /* RSSI Result 3 Low Byte Register */
#define LF_RSSI_RSRES3H            _SFR_MEM8 (0x1BD) /* RSSI Result 3 High Byte Register */
#define LF_RSSI_RSRES4L            _SFR_MEM8 (0x1BE) /* RSSI Result 4 Low Byte Register */
#define LF_RSSI_RSRES4H            _SFR_MEM8 (0x1BF) /* RSSI Result 4 High Byte Register */
#define LF_RSSI_RSSRCR             _SFR_MEM8 (0x1C0) /* RSSI SRC Calibration Register */
#define LF_RSSI_SD12RR             _SFR_MEM8 (0x1C1) /* Sign Detection Channel 1 vs 2 Result Register */
#define LF_RSSI_SD13RR             _SFR_MEM8 (0x1C2) /* Sign Detection Channel 1 vs 3 Result Register */
#define LF_RSSI_SD23RR             _SFR_MEM8 (0x1C3) /* Sign Detection Channel 2 vs 3 Result Register */
#define LF_RSSI_SD360R             _SFR_MEM8 (0x1C4) /* Sign Detection 360 Degree Result Register */
#define LF_RSSI_RSDBGR             _SFR_MEM8 (0x1C5) /* RSSI Debug Register */

/* LF_TIMER -  (0x00) */
#define LF_TIMER_BASE              _SFR_MEM8 (0x00)  /* LF_TIMER Base Address */
#define LF_TIMER_LTCMR             _SFR_MEM8 (0x35)  /* LF Timer Control Mode Register */
#define LF_TIMER_LTCOR             _SFR_MEM8 (0x1A1) /* LF Timer Compare Register */
#define LF_TIMER_LTEMR             _SFR_MEM8 (0x1A6) /* LF Timer Event Mask Register */

/* LF_TRANSPONDER -  (0x00) */
#define LF_TRANSPONDER_BASE        _SFR_MEM8 (0x00)  /* LF_TRANSPONDER Base Address */
#define LF_TRANSPONDER_TPCR2       _SFR_MEM8 (0x2C)  /* Transponder Control 2 Register */
#define LF_TRANSPONDER_TPFR        _SFR_MEM8 (0x2D)  /* Transponder Flag Register */
#define LF_TRANSPONDER_TPSR        _SFR_MEM8 (0x59)  /* Transponder Status Register */
#define LF_TRANSPONDER_TPCR1       _SFR_MEM8 (0x165) /* Transponder Control Register 1 */
#define LF_TRANSPONDER_TPIMR       _SFR_MEM8 (0x166) /* Transponder Interrupt Mask Register */
#define LF_TRANSPONDER_TPDCR1      _SFR_MEM8 (0x167) /* Transponder Decoder Comparator Register 1 */
#define LF_TRANSPONDER_TPDCR2      _SFR_MEM8 (0x168) /* Transponder Decoder Comparator Register 2 */
#define LF_TRANSPONDER_TPDCR3      _SFR_MEM8 (0x169) /* Transponder Decoder Comparator Register 3 */
#define LF_TRANSPONDER_TPDCR4      _SFR_MEM8 (0x16A) /* Transponder Decoder Comparator Register 4 */
#define LF_TRANSPONDER_TPDCR5      _SFR_MEM8 (0x16B) /* Transponder Decoder Comparator Register 5 */
#define LF_TRANSPONDER_TPECR1      _SFR_MEM8 (0x16C) /* Transponder Encoder Comparator Register 1 */
#define LF_TRANSPONDER_TPECR2      _SFR_MEM8 (0x16D) /* Transponder Encoder Comparator Register 2 */
#define LF_TRANSPONDER_TPECR3      _SFR_MEM8 (0x16E) /* Transponder Encoder Comparator Register 3 */
#define LF_TRANSPONDER_TPECR4      _SFR_MEM8 (0x16F) /* Transponder Encoder Comparator Register 4 */
#define LF_TRANSPONDER_TPECMR      _SFR_MEM8 (0x170) /* Transponder Encoder Mode Register */
#define LF_TRANSPONDER_TPCR3       _SFR_MEM8 (0x171) /* Transponder Control Register 3 */
#define LF_TRANSPONDER_TPCR4       _SFR_MEM8 (0x172) /* Transponder Control Register 4 */
#define LF_TRANSPONDER_TPCR5       _SFR_MEM8 (0x173) /* Transponder Control Register 5 */

/* MEM -  (0x00) */
#define MEM_BASE                   _SFR_MEM8 (0x00)  /* MEM Base Address */
#define MEM_PGMST                  _SFR_MEM8 (0x15A) /* Program Memory Status Register */
#define MEM_EEST                   _SFR_MEM8 (0x15B) /* EEPROM Status Register */

/* PORTB -  (0x00) */
#define PORTB_BASE                 _SFR_MEM8 (0x00)  /* PORTB Base Address */
#define PORTB_PINB                 _SFR_MEM8 (0x23)  /* Port B Input Pins */
#define PORTB_DDRB                 _SFR_MEM8 (0x24)  /* Port B Data Direction Register */
#define PORTB_PORTB                _SFR_MEM8 (0x25)  /* Port B Data Register */

/* PORTC -  (0x00) */
#define PORTC_BASE                 _SFR_MEM8 (0x00)  /* PORTC Base Address */
#define PORTC_PINC                 _SFR_MEM8 (0x26)  /* Port C Input Pins */
#define PORTC_DDRC                 _SFR_MEM8 (0x27)  /* Port C Data Direction Register */
#define PORTC_PORTC                _SFR_MEM8 (0x28)  /* Port C Data Register */

/* PORTD -  (0x00) */
#define PORTD_BASE                 _SFR_MEM8 (0x00)  /* PORTD Base Address */
#define PORTD_PIND                 _SFR_MEM8 (0x29)  /* Port D Input Pins */
#define PORTD_DDRD                 _SFR_MEM8 (0x2A)  /* Port D Data Direction Register */
#define PORTD_PORTD                _SFR_MEM8 (0x2B)  /* Port D Data Register */

/* SFIFO -  (0x00) */
#define SFIFO_BASE                 _SFR_MEM8 (0x00)  /* SFIFO Base Address */
#define SFIFO_SFS                  _SFR_MEM8 (0xDB)  /* Support FIFO Status Register */
#define SFIFO_SFL                  _SFR_MEM8 (0xDC)  /* Support FIFO Fill Level Register */
#define SFIFO_SFWP                 _SFR_MEM8 (0xDD)  /* Support FIFO Write Pointer */
#define SFIFO_SFRP                 _SFR_MEM8 (0xDE)  /* Support FIFO Read Pointer */
#define SFIFO_SFD                  _SFR_MEM8 (0xDF)  /* Support FIFO Data Register */
#define SFIFO_SFI                  _SFR_MEM8 (0xE0)  /* Support FIFO Interrupt Mask Register */
#define SFIFO_SFC                  _SFR_MEM8 (0xE1)  /* Support FIFO Configuration Register */

/* SPI -  (0x00) */
#define SPI_BASE                   _SFR_MEM8 (0x00)  /* SPI Base Address */
#define SPI_SPCR                   _SFR_MEM8 (0x4C)  /* SPI control Register */
#define SPI_SPSR                   _SFR_MEM8 (0x4D)  /* SPI Status Register */
#define SPI_SPDR                   _SFR_MEM8 (0x4E)  /* SPI Data Register */
#define SPI_SFFR                   _SFR_MEM8 (0x157) /* SPI FIFO Fill Status Register */
#define SPI_SFIR                   _SFR_MEM8 (0x158) /* SPI FIFO Interrupt Register */

/* SPI2 -  (0x00) */
#define SPI2_BASE                  _SFR_MEM8 (0x00)  /* SPI2 Base Address */
#define SPI2_SP2CR                 _SFR_MEM8 (0xF7)  /* SPI2 control Register */
#define SPI2_SP2DR                 _SFR_MEM8 (0xF8)  /* SPI2 Data Register */
#define SPI2_SP2SR                 _SFR_MEM8 (0xF9)  /* SPI2 Status Register */

/* SSM -  (0x00) */
#define SSM_BASE                   _SFR_MEM8 (0x00)  /* SSM Base Address */
#define SSM_SSMCR                  _SFR_MEM8 (0xE2)  /* SSM Control Register */
#define SSM_SSMFBR                 _SFR_MEM8 (0xE4)  /* SSM Filter Bandwidth Register */
#define SSM_SSMRR                  _SFR_MEM8 (0xE5)  /* SSM Run Register */
#define SSM_SSMSR                  _SFR_MEM8 (0xE6)  /* SSM Status Register */
#define SSM_SSMIFR                 _SFR_MEM8 (0xE7)  /* SSM Interrupt Flag Register */
#define SSM_SSMIMR                 _SFR_MEM8 (0xE8)  /* SSM interrupt mask register */
#define SSM_MSMSTR                 _SFR_MEM8 (0xE9)  /* Master State Machine state register */
#define SSM_SSMSTR                 _SFR_MEM8 (0xEA)  /* SSM State Register */
#define SSM_MSMCR1                 _SFR_MEM8 (0xEC)  /* Master State Machine Control Register 1 */
#define SSM_MSMCR2                 _SFR_MEM8 (0xED)  /* Master State Machine Control Register 2 */
#define SSM_MSMCR3                 _SFR_MEM8 (0xEE)  /* Master State Machine Control Register 3 */
#define SSM_MSMCR4                 _SFR_MEM8 (0xEF)  /* Master State Machine Control Register 4 */

/* SUP -  (0x00) */
#define SUP_BASE                   _SFR_MEM8 (0x00)  /* SUP Base Address */
#define SUP_VMSCR                  _SFR_MEM8 (0x4A)  /* Voltage Monitor Status and Control Register */
#define SUP_RCTCAL                 _SFR_MEM8 (0xC8)  /* RC oscillator Temperature Compensation register */
#define SUP_SUPFR                  _SFR_MEM8 (0xCB)  /* Supply Interrupt Flag Register */
#define SUP_SUPCR                  _SFR_MEM8 (0xCC)  /* Supply Control Register */
#define SUP_SUPCA1                 _SFR_MEM8 (0xCD)  /* Supply calibration register 1 */
#define SUP_SUPCA2                 _SFR_MEM8 (0xCE)  /* Supply calibration register 2 */
#define SUP_SUPCA3                 _SFR_MEM8 (0xCF)  /* Supply calibration register 3 */
#define SUP_SUPCA4                 _SFR_MEM8 (0xD0)  /* Supply calibration register 4 */
#define SUP_CALRDY                 _SFR_MEM8 (0xD1)  /* Calibration ready signature */
#define SUP_VMCR                   _SFR_MEM8 (0x1E6) /* Voltage Monitor Control Register */
#define SUP_CALRDYLF               _SFR_MEM8 (0x1E8) /* Calibration ready signature LFVCC */
#define SUP_SUPCA5                 _SFR_MEM8 (0x1F3) /* Supply calibration register 5 */
#define SUP_SUPCA6                 _SFR_MEM8 (0x1F4) /* Supply calibration register 6 */
#define SUP_SUPCA7                 _SFR_MEM8 (0x1F5) /* Supply calibration register 7 */
#define SUP_SUPCA8                 _SFR_MEM8 (0x1F6) /* Supply calibration register 8 */
#define SUP_SUPCA9                 _SFR_MEM8 (0x1F7) /* Supply calibration register 9 */
#define SUP_SUPCA10                _SFR_MEM8 (0x1F8) /* Supply calibration register 10 */
#define SUP_PMTER                  _SFR_MEM8 (0x1FE) /* Power Management Test Enable Register */

/* TIMER0_WDT -  (0x00) */
#define TIMER0_WDT_BASE            _SFR_MEM8 (0x00)  /* TIMER0_WDT Base Address */
#define TIMER0_WDT_T0IFR           _SFR_MEM8 (0x52)  /* Timer0 Interrupt Flag Register */
#define TIMER0_WDT_WDTCR           _SFR_MEM8 (0x6E)  /* Watchdog Timer0 control Register */
#define TIMER0_WDT_T0CR            _SFR_MEM8 (0x162) /* Timer0 Control Register */

/* TIMER1 -  (0x00) */
#define TIMER1_BASE                _SFR_MEM8 (0x00)  /* TIMER1 Base Address */
#define TIMER1_T1CR                _SFR_MEM8 (0x31)  /* Timer1 control Register */
#define TIMER1_T1CNT               _SFR_MEM8 (0x6F)  /* Timer1 Counter Register */
#define TIMER1_T1COR               _SFR_MEM8 (0x70)  /* Timer1 Compare Register */
#define TIMER1_T1MR                _SFR_MEM8 (0x71)  /* Timer1 Mode Register */
#define TIMER1_T1IMR               _SFR_MEM8 (0x72)  /* Timer1 Interrupt Mask Register */
#define TIMER1_T1IFR               _SFR_MEM8 (0x1A2) /* Timer1 Interrupt Flag Register */

/* TIMER2 -  (0x00) */
#define TIMER2_BASE                _SFR_MEM8 (0x00)  /* TIMER2 Base Address */
#define TIMER2_T2CR                _SFR_MEM8 (0x32)  /* Timer2 Control Register */
#define TIMER2_T2CNT               _SFR_MEM8 (0x73)  /* Timer2 Counter Register */
#define TIMER2_T2COR               _SFR_MEM8 (0x74)  /* Timer2 Compare Register */
#define TIMER2_T2MR                _SFR_MEM8 (0x75)  /* Timer2 Mode Register */
#define TIMER2_T2IMR               _SFR_MEM8 (0x76)  /* Timer2 Interrupt Mask Register */
#define TIMER2_T2IFR               _SFR_MEM8 (0x159) /* Timer2 Interrupt Flag Register */

/* TIMER3 -  (0x00) */
#define TIMER3_BASE                _SFR_MEM8 (0x00)  /* TIMER3 Base Address */
#define TIMER3_T3CR                _SFR_MEM8 (0x33)  /* Timer3 control Register */
#define TIMER3_T3CNT               _SFR_MEM16(0x77)  /* Timer3 counter Register */
#define TIMER3_T3CNTL              _SFR_MEM8 (0x77)  /* Timer3 counter Register LOW BYTE */
#define TIMER3_T3CNTH              _SFR_MEM8 (0x78)  /* Timer3 counter Register HIGH BYTE */
#define TIMER3_T3COR               _SFR_MEM16(0x79)  /* Timer3 compare Register */
#define TIMER3_T3CORL              _SFR_MEM8 (0x79)  /* Timer3 compare Register LOW BYTE */
#define TIMER3_T3CORH              _SFR_MEM8 (0x7A)  /* Timer3 compare Register HIGH BYTE */
#define TIMER3_T3ICR               _SFR_MEM16(0x7B)  /* Timer3 input capture Register */
#define TIMER3_T3ICRL              _SFR_MEM8 (0x7B)  /* Timer3 input capture Register LOW BYTE */
#define TIMER3_T3ICRH              _SFR_MEM8 (0x7C)  /* Timer3 input capture Register HIGH BYTE */
#define TIMER3_T3MRA               _SFR_MEM8 (0x7D)  /* Timer3 mode Register */
#define TIMER3_T3MRB               _SFR_MEM8 (0x7E)  /* Timer3 mode Register */
#define TIMER3_T3IMR               _SFR_MEM8 (0x7F)  /* Timer3 interrupt mask Register */
#define TIMER3_T3IFR               _SFR_MEM8 (0x1E1) /* Timer3 interrupt flag Register */

/* TIMER4 -  (0x00) */
#define TIMER4_BASE                _SFR_MEM8 (0x00)  /* TIMER4 Base Address */
#define TIMER4_T4CR                _SFR_MEM8 (0x34)  /* Timer4 control Register */
#define TIMER4_T4CNT               _SFR_MEM16(0x80)  /* Timer4 counter Register */
#define TIMER4_T4CNTL              _SFR_MEM8 (0x80)  /* Timer4 counter Register LOW BYTE */
#define TIMER4_T4CNTH              _SFR_MEM8 (0x81)  /* Timer4 counter Register HIGH BYTE */
#define TIMER4_T4COR               _SFR_MEM16(0x82)  /* Timer4 compare Register */
#define TIMER4_T4CORL              _SFR_MEM8 (0x82)  /* Timer4 compare Register LOW BYTE */
#define TIMER4_T4CORH              _SFR_MEM8 (0x83)  /* Timer4 compare Register HIGH BYTE */
#define TIMER4_T4ICR               _SFR_MEM16(0x84)  /* Timer4 input capture Register */
#define TIMER4_T4ICRL              _SFR_MEM8 (0x84)  /* Timer4 input capture Register LOW BYTE */
#define TIMER4_T4ICRH              _SFR_MEM8 (0x85)  /* Timer4 input capture Register HIGH BYTE */
#define TIMER4_T4MRA               _SFR_MEM8 (0x86)  /* Timer4 mode Register */
#define TIMER4_T4MRB               _SFR_MEM8 (0x87)  /* Timer4 mode Register */
#define TIMER4_T4IMR               _SFR_MEM8 (0x88)  /* Timer4 interrupt mask Register */
#define TIMER4_T4IFR               _SFR_MEM8 (0x1D2) /* Timer4 interrupt flag Register */

/* TIMER5 -  (0x00) */
#define TIMER5_BASE                _SFR_MEM8 (0x00)  /* TIMER5 Base Address */
#define TIMER5_T5TEMP              _SFR_MEM8 (0x89)  /* Timer5 Temp Register */
#define TIMER5_T5OCR               _SFR_MEM16(0x8A)  /* Timer5 Output Compare Register */
#define TIMER5_T5OCRL              _SFR_MEM8 (0x8A)  /* Timer5 Output Compare Register LOW BYTE */
#define TIMER5_T5OCRH              _SFR_MEM8 (0x8B)  /* Timer5 Output Compare Register HIGH BYTE */
#define TIMER5_T5CCR               _SFR_MEM8 (0x8C)  /* Timer5 Control Register */
#define TIMER5_T5CNT               _SFR_MEM16(0x8D)  /* Timer5 Counter */
#define TIMER5_T5CNTL              _SFR_MEM8 (0x8D)  /* Timer5 Counter LOW BYTE */
#define TIMER5_T5CNTH              _SFR_MEM8 (0x8E)  /* Timer5 Counter HIGH BYTE */
#define TIMER5_T5IMR               _SFR_MEM8 (0x8F)  /* Timer5 Interrupt Mask Register */
#define TIMER5_GTCCR               _SFR_MEM8 (0xE3)  /* General Timer/Counter Control Register */
#define TIMER5_T5IFR               _SFR_MEM8 (0x1D5) /* Timer5 Interrupt Flag Register */

/* TMO -  (0x00) */
#define TMO_BASE                   _SFR_MEM8 (0x00)  /* TMO Base Address */
#define TMO_TMOCR                  _SFR_MEM8 (0x1F0) /* Timer Modulator Output Control Register */

/* TPLF_CAL -  (0x00) */
#define TPLF_CAL_BASE              _SFR_MEM8 (0x00)  /* TPLF_CAL Base Address */
#define TPLF_CAL_LFCALR1           _SFR_MEM8 (0x90)  /* LF Receiver Calibration Register 1 */
#define TPLF_CAL_LFCALR2           _SFR_MEM8 (0x91)  /* LF Receiver Calibration Register 2 */
#define TPLF_CAL_LFCALR3           _SFR_MEM8 (0x92)  /* LF Receiver Calibration Register 3 */
#define TPLF_CAL_LFCALR4           _SFR_MEM8 (0x93)  /* LF Receiver Calibration Register 4 */
#define TPLF_CAL_LFCALR5           _SFR_MEM8 (0x94)  /* LF Receiver Calibration Register 5 */
#define TPLF_CAL_LFCALR6           _SFR_MEM8 (0x95)  /* LF Receiver Calibration Register 6 */
#define TPLF_CAL_LFCALR7           _SFR_MEM8 (0x96)  /* LF Receiver Calibration Register 7 */
#define TPLF_CAL_LFCALR8           _SFR_MEM8 (0x97)  /* LF Receiver Calibration Register 8 */
#define TPLF_CAL_LFCALR9           _SFR_MEM8 (0x98)  /* LF Receiver Calibration Register 9 */
#define TPLF_CAL_LFCALR10          _SFR_MEM8 (0x99)  /* LF Receiver Calibration Register 10 */
#define TPLF_CAL_LFCALR11          _SFR_MEM8 (0x9A)  /* LF Receiver Calibration Register 11 */
#define TPLF_CAL_LFCALR12          _SFR_MEM8 (0x9B)  /* LF Receiver Calibration Register 12 */
#define TPLF_CAL_LFCALR13          _SFR_MEM8 (0x9C)  /* LF Receiver Calibration Register 13 */
#define TPLF_CAL_LFCALR14          _SFR_MEM8 (0x9D)  /* LF Receiver Calibration Register 14 */
#define TPLF_CAL_LFCALR15          _SFR_MEM8 (0x9E)  /* LF Receiver Calibration Register 15 */
#define TPLF_CAL_LFCALR16          _SFR_MEM8 (0x9F)  /* LF Receiver Calibration Register 16 */
#define TPLF_CAL_LFCALR17          _SFR_MEM8 (0xA0)  /* LF Receiver Calibration Register 17 */
#define TPLF_CAL_LFCALR18          _SFR_MEM8 (0xA1)  /* LF Receiver Calibration Register 18 */
#define TPLF_CAL_LFCALR19          _SFR_MEM8 (0xA2)  /* LF Receiver Calibration Register 19 */
#define TPLF_CAL_LFCALR20          _SFR_MEM8 (0xA3)  /* LF Receiver Calibration Register 20 */
#define TPLF_CAL_LFCALR21          _SFR_MEM8 (0xA4)  /* LF Receiver Calibration Register 21 */
#define TPLF_CAL_LFCALR22          _SFR_MEM8 (0xA5)  /* LF Receiver Calibration Register 22 */
#define TPLF_CAL_LFCALR23          _SFR_MEM8 (0xA6)  /* LF Receiver Calibration Register 23 */
#define TPLF_CAL_LFCALR24          _SFR_MEM8 (0xA7)  /* LF Receiver Calibration Register 24 */
#define TPLF_CAL_LFCALR25          _SFR_MEM8 (0xA8)  /* LF Receiver Calibration Register 25 */
#define TPLF_CAL_LFCALR26          _SFR_MEM8 (0xA9)  /* LF Receiver Calibration Register 26 */
#define TPLF_CAL_LFCALR27          _SFR_MEM8 (0xAA)  /* LF Receiver Calibration Register 27 */
#define TPLF_CAL_LFCALR28          _SFR_MEM8 (0xAB)  /* LF Receiver Calibration Register 28 */
#define TPLF_CAL_LFCALR29          _SFR_MEM8 (0xAC)  /* LF Receiver Calibration Register 29 */
#define TPLF_CAL_LFCALR30          _SFR_MEM8 (0xAD)  /* LF Receiver Calibration Register 30 */
#define TPLF_CAL_LFCALR31          _SFR_MEM8 (0xAE)  /* LF Receiver Calibration Register 31 */
#define TPLF_CAL_LFCALR32          _SFR_MEM8 (0xAF)  /* LF Receiver Calibration Register 32 */
#define TPLF_CAL_LFCALR33          _SFR_MEM8 (0xB0)  /* LF Receiver Calibration Register 33 */
#define TPLF_CAL_LFCALR34          _SFR_MEM8 (0xB1)  /* LF Receiver Calibration Register 34 */
#define TPLF_CAL_LFCALR35          _SFR_MEM8 (0xB2)  /* LF Receiver Calibration Register 35 */
#define TPLF_CAL_LFCALR36          _SFR_MEM8 (0xB3)  /* LF Receiver Calibration Register 36 */
#define TPLF_CAL_LFCALR37          _SFR_MEM8 (0xB4)  /* LF Receiver Calibration Register 37 */
#define TPLF_CAL_LFCALR38          _SFR_MEM8 (0xB5)  /* LF Receiver Calibration Register 38 */
#define TPLF_CAL_LFCALR39          _SFR_MEM8 (0xB6)  /* LF Receiver Calibration Register 39 */
#define TPLF_CAL_LFCALR40          _SFR_MEM8 (0xB7)  /* LF Receiver Calibration Register 40 */
#define TPLF_CAL_LFCALR41          _SFR_MEM8 (0xB8)  /* LF Receiver Calibration Register 41 */
#define TPLF_CAL_LFCALR42          _SFR_MEM8 (0xB9)  /* LF Receiver Calibration Register 42 */
#define TPLF_CAL_LFCALR43          _SFR_MEM8 (0xBA)  /* LF Receiver Calibration Register 43 */
#define TPLF_CAL_LFCALR44          _SFR_MEM8 (0xBB)  /* LF Receiver Calibration Register 44 */
#define TPLF_CAL_LFCALR45          _SFR_MEM8 (0xBC)  /* LF Receiver Calibration Register 45 */
#define TPLF_CAL_LFCALR46          _SFR_MEM8 (0xBD)  /* LF Receiver Calibration Register 46 */
#define TPLF_CAL_LFCALR47          _SFR_MEM8 (0xBE)  /* LF Receiver Calibration Register 47 */
#define TPLF_CAL_LFCALR48          _SFR_MEM8 (0xBF)  /* LF Receiver Calibration Register 48 */
#define TPLF_CAL_LFCALR49          _SFR_MEM8 (0xC0)  /* LF Receiver Calibration Register 49 */
#define TPLF_CAL_LFCALR50          _SFR_MEM8 (0xC1)  /* LF Receiver Calibration Register 50 */
#define TPLF_CAL_LFCALR51          _SFR_MEM8 (0xC2)  /* LF Receiver Calibration Register 51 */
#define TPLF_CAL_LFCALR52          _SFR_MEM8 (0xC3)  /* LF Receiver Calibration Register 52 */
#define TPLF_CAL_LFCALR53          _SFR_MEM8 (0xC4)  /* LF Receiver Calibration Register 53 */
#define TPLF_CAL_TPCALR1           _SFR_MEM8 (0x175) /* Transponder Calibration Register 1 */
#define TPLF_CAL_TPCALR2           _SFR_MEM8 (0x176) /* Transponder Calibration Register 2 */
#define TPLF_CAL_TPCALR3           _SFR_MEM8 (0x177) /* Transponder Calibration Register 3 */
#define TPLF_CAL_TPCALR4           _SFR_MEM8 (0x178) /* Transponder Calibration Register 4 */
#define TPLF_CAL_TPCALR5           _SFR_MEM8 (0x179) /* Transponder Calibration Register 5 */
#define TPLF_CAL_TPCALR6           _SFR_MEM8 (0x17A) /* Transponder Calibration Register 6 */
#define TPLF_CAL_TPCALR7           _SFR_MEM8 (0x17B) /* Transponder Calibration Register 7 */
#define TPLF_CAL_TPCALR8           _SFR_MEM8 (0x17C) /* Transponder Calibration Register 8 */
#define TPLF_CAL_TPCALR9           _SFR_MEM8 (0x17D) /* Transponder Calibration Register 9 */
#define TPLF_CAL_TPCALR10          _SFR_MEM8 (0x17E) /* Transponder Calibration Register 10 */
#define TPLF_CAL_LFCPR             _SFR_MEM8 (0x18E) /* LF Receiver Calibration Protect Register */
#define TPLF_CAL_SRCCAL            _SFR_MEM8 (0x1F1) /* Slow RC oscillator calibration */
#define TPLF_CAL_SRCTCAL           _SFR_MEM8 (0x1F2) /* SRC oscillator Temperature Compensation register */
#define TPLF_CAL_TPCALR11          _SFR_MEM8 (0x1F9) /* Transponder Calibration Register 11 */
#define TPLF_CAL_TPCALR12          _SFR_MEM8 (0x1FA) /* Transponder Calibration Register 12 */
#define TPLF_CAL_TPCALR13          _SFR_MEM8 (0x1FB) /* Transponder Calibration Register 13 */
#define TPLF_CAL_SRCCALL           _SFR_MEM8 (0x1FF) /* Slow RC oscillator calibration LSB */

/* TWI1 -  (0x00) */
#define TWI1_BASE                  _SFR_MEM8 (0x00)  /* TWI1 Base Address */
#define TWI1_TW1BR                 _SFR_MEM8 (0x1E9) /* TWI1 Bit Rate Register */
#define TWI1_TW1CR                 _SFR_MEM8 (0x1EA) /* TWI1 Control Register */
#define TWI1_TW1SR                 _SFR_MEM8 (0x1EB) /* TWI1 Status Register */
#define TWI1_TW1DR                 _SFR_MEM8 (0x1EC) /* TWI1 Data Register */
#define TWI1_TW1AR                 _SFR_MEM8 (0x1ED) /* TWI1 (Slave) Address Register */
#define TWI1_TW1AMR                _SFR_MEM8 (0x1EE) /* TWI1 Address Mask Register */

/* TWI2 -  (0x00) */
#define TWI2_BASE                  _SFR_MEM8 (0x00)  /* TWI2 Base Address */
#define TWI2_TW2BR                 _SFR_MEM8 (0x1AA) /* TWI2 Bit Rate Register */
#define TWI2_TW2CR                 _SFR_MEM8 (0x1AB) /* TWI2 Control Register */
#define TWI2_TW2SR                 _SFR_MEM8 (0x1AC) /* TWI2 Status Register */
#define TWI2_TW2DR                 _SFR_MEM8 (0x1AD) /* TWI2 Data Register */
#define TWI2_TW2AR                 _SFR_MEM8 (0x1AE) /* TWI2 (Slave) Address Register */
#define TWI2_TW2AMR                _SFR_MEM8 (0x1AF) /* TWI2 Address Mask Register */

/* VX_MODE -  (0x00) */
#define VX_MODE_BASE               _SFR_MEM8 (0x00)  /* VX_MODE Base Address */
#define VX_MODE_VXMCTRL            _SFR_MEM8 (0xEB)  /* VX Mode Control Register */

/* FUSE -  (0x00) */
#define FUSE_BASE                  _SFR_MEM8 (0x00)  /* FUSE Base Address */
#define FUSE_LOW                   _SFR_MEM8 (0x00)  

/* LOCKBIT -  (0x00) */
#define LOCKBIT_BASE               _SFR_MEM8 (0x00)  /* LOCKBIT Base Address */
#define LOCKBIT_LOCKBIT            _SFR_MEM8 (0x00)  
/* avr-libc typedef for avr/fuse.h */
typedef FUSE_t NVM_FUSES_t;

/*
================================================================================
Interrupt Vector Definitions
================================================================================
*/

/* Vector 0 is the reset vector */
#define None_RESET_vect_num    (0)                 
#define None_RESET_vect        _VECTOR(0)          /* External Pin, Power-on Reset, Brown-out Reset and Watchdog Reset */
#define None_INT0_vect_num     (1)                 
#define None_INT0_vect         _VECTOR(1)          /* External Interrupt Request 0 */
#define None_INT1_vect_num     (2)                 
#define None_INT1_vect         _VECTOR(2)          /* External Interrupt Request 1 */
#define None_PCI0_vect_num     (3)                 
#define None_PCI0_vect         _VECTOR(3)          /* Pin Change Interrupt Request 0 */
#define None_PCI1_vect_num     (4)                 
#define None_PCI1_vect         _VECTOR(4)          /* Pin Change Interrupt Request 1 */
#define None_VMON_vect_num     (5)                 
#define None_VMON_vect         _VECTOR(5)          /* Voltage Monitoring Interrupt */
#define None_AVCCR_vect_num    (6)                 
#define None_AVCCR_vect        _VECTOR(6)          /* AVCC Reset Interrupt */
#define None_AVCCL_vect_num    (7)                 
#define None_AVCCL_vect        _VECTOR(7)          /* AVCC Low Interrupt */
#define None_T0INT_vect_num    (8)                 
#define None_T0INT_vect        _VECTOR(8)          /* Timer0 Interval Interrupt */
#define None_T1COMP_vect_num   (9)                 
#define None_T1COMP_vect       _VECTOR(9)          /* Timer/Counter1 Compare Match Interrupt */
#define None_T1OVF_vect_num    (10)                
#define None_T1OVF_vect        _VECTOR(10)         /* Timer/Counter1 Overflow Interrupt */
#define None_T2COMP_vect_num   (11)                
#define None_T2COMP_vect       _VECTOR(11)         /* Timer/Counter2 Compare Match Interrupt */
#define None_T2OVF_vect_num    (12)                
#define None_T2OVF_vect        _VECTOR(12)         /* Timer/Counter2 Overflow Interrupt */
#define None_T3CAP_vect_num    (13)                
#define None_T3CAP_vect        _VECTOR(13)         /* Timer/Counter3 Capture Event Interrupt */
#define None_T3COMP_vect_num   (14)                
#define None_T3COMP_vect       _VECTOR(14)         /* Timer/Counter3 Compare Match Interrupt */
#define None_T3OVF_vect_num    (15)                
#define None_T3OVF_vect        _VECTOR(15)         /* Timer/Counter3 Overflow Interrupt */
#define None_T4CAP_vect_num    (16)                
#define None_T4CAP_vect        _VECTOR(16)         /* Timer/Counter4 Capture Event Interrupt */
#define None_T4COMP_vect_num   (17)                
#define None_T4COMP_vect       _VECTOR(17)         /* Timer/Counter4 Compare Match Interrupt */
#define None_T4OVF_vect_num    (18)                
#define None_T4OVF_vect        _VECTOR(18)         /* Timer/Counter4 Overflow Interrupt */
#define None_T5COMP_vect_num   (19)                
#define None_T5COMP_vect       _VECTOR(19)         /* Timer/Counter5 Compare Match Interrupt */
#define None_T5OVF_vect_num    (20)                
#define None_T5OVF_vect        _VECTOR(20)         /* Timer/Counter5 Overflow Interrupt */
#define None_SPI_vect_num      (21)                
#define None_SPI_vect          _VECTOR(21)         /* SPI Serial Transfer Complete Interrupt */
#define None_SRX_FIFO_vect_num (22)                
#define None_SRX_FIFO_vect     _VECTOR(22)         /* SPI Rx Buffer Interrupt */
#define None_STX_FIFO_vect_num (23)                
#define None_STX_FIFO_vect     _VECTOR(23)         /* SPI Tx Buffer Interrupt */
#define None_SSM_vect_num      (24)                
#define None_SSM_vect          _VECTOR(24)         /* Sequencer State Machine Interrupt */
#define None_DFFLR_vect_num    (25)                
#define None_DFFLR_vect        _VECTOR(25)         /* Data FIFO fill level reached Interrupt */
#define None_DFOUE_vect_num    (26)                
#define None_DFOUE_vect        _VECTOR(26)         /* Data FIFO overflow or underflow error Interrupt */
#define None_SFFLR_vect_num    (27)                
#define None_SFFLR_vect        _VECTOR(27)         /* RSSI/Preamble FIFO fill level reached Interrupt */
#define None_SFOUE_vect_num    (28)                
#define None_SFOUE_vect        _VECTOR(28)         /* RSSI/Preamble FIFO overflow or underflow error Interrupt */
#define None_TMTCF_vect_num    (29)                
#define None_TMTCF_vect        _VECTOR(29)         /* Tx Modulator Telegram Finish Interrupt */
#define None_AES_vect_num      (30)                
#define None_AES_vect          _VECTOR(30)         /* AES Krypto Unit Interrupt */
#define None_TPINT_vect_num    (31)                
#define None_TPINT_vect        _VECTOR(31)         /* Transponder Mode Interrupt */
#define None_TPTOERR_vect_num  (32)                
#define None_TPTOERR_vect      _VECTOR(32)         /* Transponder Timeout Error Interrupt */
#define None_LFID0INT_vect_num (33)                
#define None_LFID0INT_vect     _VECTOR(33)         /* LF receiver Identifier 0 Interrupt */
#define None_LFID1INT_vect_num (34)                
#define None_LFID1INT_vect     _VECTOR(34)         /* LF receiver Identifier 1 Interrupt */
#define None_LFFEINT_vect_num  (35)                
#define None_LFFEINT_vect      _VECTOR(35)         /* LF receiver Frame End Interrupt */
#define None_LFBCR_vect_num    (36)                
#define None_LFBCR_vect        _VECTOR(36)         /* LF receiver Bit Count Reached Interrupt */
#define None_LFPBD_vect_num    (37)                
#define None_LFPBD_vect        _VECTOR(37)         /* LF receiver PreBurst Detected Interrupt */
#define None_LFDE_vect_num     (38)                
#define None_LFDE_vect         _VECTOR(38)         /* LF receiver Decoder Error Interrupt */
#define None_LFEOT_vect_num    (39)                
#define None_LFEOT_vect        _VECTOR(39)         /* LF receiver End of Telegram Interrupt */
#define None_LFTCOR_vect_num   (40)                
#define None_LFTCOR_vect       _VECTOR(40)         /* LF receiver Timer Compare Match Interrupt */
#define None_LFRSCO_vect_num   (41)                
#define None_LFRSCO_vect       _VECTOR(41)         /* LF receiver RSSI measurement Interrupt */
#define None_LDFFLR_vect_num   (42)                
#define None_LDFFLR_vect       _VECTOR(42)         /* LF Data FIFO Fill Level Reached Interrupt */
#define None_LDFOUE_vect_num   (43)                
#define None_LDFOUE_vect       _VECTOR(43)         /* LF Data FIFO Overflow or Underflow Error Interrupt */
#define None_EXCM_vect_num     (44)                
#define None_EXCM_vect         _VECTOR(44)         /* External input Clock monitoring Interrupt */
#define None_E2CINT_vect_num   (45)                
#define None_E2CINT_vect       _VECTOR(45)         /* EEPROM Error Correction Interrupt */
#define None_ERDY_vect_num     (46)                
#define None_ERDY_vect         _VECTOR(46)         /* EEPROM Ready Interrupt */
#define None_SPMR_vect_num     (47)                
#define None_SPMR_vect         _VECTOR(47)         /* Store Program Memory Ready */
#define None_TWI1_vect_num     (48)                
#define None_TWI1_vect         _VECTOR(48)         /* TWI1 Interrupt */
#define None_SPI2_vect_num     (49)                
#define None_SPI2_vect         _VECTOR(49)         /* SPI2 Interrupt */
#define None_TWI2_vect_num     (50)                
#define None_TWI2_vect         _VECTOR(50)         /* TWI2 Interrupt */

/* Vector Table Size */
#define _VECTOR_SIZE           (4)                 /* Size of individual vector. */
#define _VECTORS_SIZE          (51 * _VECTOR_SIZE) /* Size of all vectors */
/*
================================================================================
Constants
================================================================================
*/

#define PROGMEM_START   (0x0000)                           
#define PROGMEM_SIZE    (0x10000)                          
#define PROGMEM_END     (PROGMEM_START + PROGMEM_SIZE - 1) 

#define ROM_START       (0x0000)                           
#define ROM_SIZE        (0x8000)                           
#define ROM_PAGE_SIZE   (0x0040)                           
#define ROM_END         (ROM_START + ROM_SIZE - 1)         

#define FLASH_START     (0x8000)                           
#define FLASH_SIZE      (0x8000)                           
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
#define EEPROMMEM_SIZE          (0x0880)                               
#define EEPROMMEM_END           (EEPROMMEM_START + EEPROMMEM_SIZE - 1) 

#define EEPROM_START            (0x0000)                               
#define EEPROM_SIZE             (0x0880)                               
#define EEPROM_PAGE_SIZE        (0x0010)                               
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
#define PORTC0 (0) 
#define PORTC1 (1) 
#define PORTC2 (2) 
#define PORTD0 (0) 
#define PORTD1 (1) 
#define PORTD2 (2) 
#define PORTD3 (3) 
#define PORTD4 (4) 
#define PORTD5 (5) 
#define PORTD6 (6) 
#define PORTD7 (7) 

/*
================================================================================
Fuses/LockBits/Signatures
================================================================================
*/

/* ============ Fuses ============ */

#define FUSE_MEMORY_SIZE 0 

/* Fuse offset 0x00 */
#define PCEE1   (unsigned char)~_BV(0) /* Protect Customer EEPROM section */
#define EEACC   (unsigned char)~_BV(1) /* EEPROM Access Control */
#define BOOTRST (unsigned char)~_BV(2) /* Select boot reset vector */
#define EESAVE  (unsigned char)~_BV(3) /* Preserve EEPROM memory through the Chip Erase cycle */
#define WDTON   (unsigned char)~_BV(4) /* Watch-dog Timer always on */
#define SPIEN   (unsigned char)~_BV(5) /* Serial program downloading (SPI) enabled */
#define DWEN    (unsigned char)~_BV(6) /* Debug Wire enable */
#define CKSTART (unsigned char)~_BV(7) /* MRC is selected during reset startup phase */


/* ========== Lock Bits ========== */
#define __LOCK_BITS_EXIST  


/* ========== Signature ========== */
#define SIGNATURE_0 (0x1E) 
#define SIGNATURE_1 (0x95) 
#define SIGNATURE_2 (0x67) 

#endif /* #ifdef _AVR_ATA5700M322_H_INCLUDED */
