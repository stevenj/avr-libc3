/******************************************************************************
 *   This file is part of avr-libc3.                                          * 
 *                                                                            * 
 *   Automatically created by devtools/gen-ioheader-atdf.py (V0.91)           * 
 *                                                                            * 
 *   .atpack File: ATA5790N.atdf                                              * 
 *   .ATDF File:   atdf/ATA5790N.atdf                                         * 
 *   Version:      2.0.6                                                      * 
 *   Date:         2019-04-16                                                 * 
 *   Device:       ATA5790N                                                   * 
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
#  define _AVR_IOXXX_H_ "ioATA5790N.h"
#else
#  error "Attempt to include more than one <avr/ioXXX.h> file."
#endif

#ifndef _AVR_ATA5790N_H_INCLUDED
#  define _AVR_ATA5790N_H_INCLUDED

/*
================================================================================
Ungrouped common register
================================================================================
*/

#define CMCR   _SFR_MEM8 (0x2F) /* Clock Management Control Register */
#define CMSR   _SFR_MEM8 (0x30) /* Clock Management Status Register */

#define VMSR   _SFR_MEM8 (0x36) /* Voltage Monitor Status Register */

#define GPIOR  _SFR_MEM8 (0x3E) /* General Purpose I/O Register 0 */

#define VMCR   _SFR_MEM8 (0x4B) /* Voltage Monitor Control Register */

#define SMCR   _SFR_MEM8 (0x53) /* Sleep Mode Control Register */
#define MCUSR  _SFR_MEM8 (0x54) /* MCU Status Register */
#define MCUCR  _SFR_MEM8 (0x55) /* MCU Control Register */

#define SPMCSR _SFR_MEM8 (0x57) /* Store Program Memory Control Register */

#define CMIMR  _SFR_MEM8 (0x5B) /* Clock Management Interrupt Mask Register */
#define CLKPR  _SFR_MEM8 (0x5C) /* Clock Prescaler Register */
#define SP     _SFR_MEM16(0x5D) /* Stack Pointer  */
#define SREG   _SFR_MEM8 (0x5F) /* Status Register */

#define PRR0   _SFR_MEM8 (0x63) /* Power Reduction Register */
#define PRR1   _SFR_MEM8 (0x64) /* Power Reduction Register */
#define SRCCAL _SFR_MEM8 (0x65) /* SRC-Oscillator Calibration Register */
#define FRCCAL _SFR_MEM8 (0x66) /* FRC-Oscillator Calibration Register */


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

/* DebugWIRE Enable */
typedef enum FUSE_DWEN_enum
{
    FUSE_DWEN_CLEAR_gc = (0x00), /* DebugWIRE Enable - CLEAR */
    FUSE_DWEN_SET_gc   = (0x40), /* DebugWIRE Enable - SET */
} FUSE_DWEN_t;

/* SPI Enable */
typedef enum FUSE_SPIEN_enum
{
    FUSE_SPIEN_CLEAR_gc = (0x00), /* SPI Enable - CLEAR */
    FUSE_SPIEN_SET_gc   = (0x20), /* SPI Enable - SET */
} FUSE_SPIEN_t;

/* Enable Watchdog Timer */
typedef enum FUSE_WDTON_enum
{
    FUSE_WDTON_CLEAR_gc = (0x00), /* Enable Watchdog Timer - CLEAR */
    FUSE_WDTON_SET_gc   = (0x10), /* Enable Watchdog Timer - SET */
} FUSE_WDTON_t;

/* Preserve EEPROM through the Chip Erase cycle */
typedef enum FUSE_EESAVE_enum
{
    FUSE_EESAVE_CLEAR_gc = (0x00), /* Preserve EEPROM through the Chip Erase cycle - CLEAR */
    FUSE_EESAVE_SET_gc   = (0x08), /* Preserve EEPROM through the Chip Erase cycle - SET */
} FUSE_EESAVE_t;

/* This fuse bit must be set.  */
typedef enum FUSE_Reserved_enum
{
    FUSE_Reserved_CLEAR_gc = (0x00), /* This fuse bit must be set.  - CLEAR */
    FUSE_Reserved_SET_gc   = (0x04), /* This fuse bit must be set.  - SET */
} FUSE_Reserved_t;

/* Enables the 32 kHz oscillator. */
typedef enum FUSE__32OEN_enum
{
    FUSE__32OEN_CLEAR_gc = (0x00), /* Enables the 32 kHz oscillator. - CLEAR */
    FUSE__32OEN_SET_gc   = (0x02), /* Enables the 32 kHz oscillator. - SET */
} FUSE__32OEN_t;

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
    LOCKBIT_LB_VAL_0x03_gc = (0x03), /* No memory lock features enabled */
} LOCKBIT_LB_t;

/* Boot Loader Protection Mode */
typedef enum LOCKBIT_BLB0_enum
{
    LOCKBIT_BLB0_VAL_0x00_gc = (0x00<<2), /* LPM and SPM prohibited in Application Section */
    LOCKBIT_BLB0_VAL_0x01_gc = (0x01<<2), /* LPM prohibited in Application Section */
    LOCKBIT_BLB0_VAL_0x02_gc = (0x02<<2), /* SPM prohibited in Application Section */
    LOCKBIT_BLB0_VAL_0x03_gc = (0x03<<2), /* No lock on SPM and LPM in Application Section */
} LOCKBIT_BLB0_t;

/* Boot Loader Protection Mode */
typedef enum LOCKBIT_BLB1_enum
{
    LOCKBIT_BLB1_VAL_0x00_gc = (0x00<<4), /* LPM and SPM prohibited in Boot Section */
    LOCKBIT_BLB1_VAL_0x01_gc = (0x01<<4), /* LPM prohibited in Boot Section */
    LOCKBIT_BLB1_VAL_0x02_gc = (0x02<<4), /* SPM prohibited in Boot Section */
    LOCKBIT_BLB1_VAL_0x03_gc = (0x03<<4), /* No lock on SPM and LPM in Boot Section */
} LOCKBIT_BLB1_t;

/*
--------------------------------------------------------------------------------
SPI - 
--------------------------------------------------------------------------------
*/

typedef struct SPI_struct
{
    register8_t rsv_0x00[76]; /* RESERVED REGISTER BLOCK */
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
CPU - 
--------------------------------------------------------------------------------
*/

typedef struct CPU_struct
{
    register8_t rsv_0x00[47]; /* RESERVED REGISTER BLOCK */
    register8_t CMCR;         /* Clock Management Control Register */
    register8_t CMSR;         /* Clock Management Status Register */
    register8_t rsv_0x31[5];  /* RESERVED REGISTER BLOCK */
    register8_t VMSR;         /* Voltage Monitor Status Register */
    register8_t rsv_0x37[7];  /* RESERVED REGISTER BLOCK */
    register8_t GPIOR;        /* General Purpose I/O Register 0 */
    register8_t rsv_0x3F[12]; /* RESERVED REGISTER BLOCK */
    register8_t VMCR;         /* Voltage Monitor Control Register */
    register8_t rsv_0x4C[7];  /* RESERVED REGISTER BLOCK */
    register8_t SMCR;         /* Sleep Mode Control Register */
    register8_t MCUSR;        /* MCU Status Register */
    register8_t MCUCR;        /* MCU Control Register */
    register8_t rsv_0x56;     /* RESERVED REGISTER */
    register8_t SPMCSR;       /* Store Program Memory Control Register */
    register8_t rsv_0x58[3];  /* RESERVED REGISTER BLOCK */
    register8_t CMIMR;        /* Clock Management Interrupt Mask Register */
    register8_t CLKPR;        /* Clock Prescaler Register */
    _REGISTER16 (SP);         /* Stack Pointer  */
    register8_t rsv_0x5E;     /* RESERVED REGISTER */
    register8_t SREG;         /* Status Register */
    register8_t rsv_0x60[3];  /* RESERVED REGISTER BLOCK */
    register8_t PRR0;         /* Power Reduction Register */
    register8_t PRR1;         /* Power Reduction Register */
    register8_t SRCCAL;       /* SRC-Oscillator Calibration Register */
    register8_t FRCCAL;       /* FRC-Oscillator Calibration Register */
} CPU_t;


/* Clock Prescaler Change Enable Bit */
typedef enum CPU_CLKPCE_enum
{
    CPU_CLKPCE_CLEAR_gc = (0x00), /* Clock Prescaler Change Enable Bit - CLEAR */
    CPU_CLKPCE_SET_gc   = (0x80), /* Clock Prescaler Change Enable Bit - SET */
} CPU_CLKPCE_t;

/* Clock Timer Prescaler Select Bits */
#define CPU_CLKPR_CLTPS_gc(x) ((x<<3) & 0x38)

/* Clock system Prescaler Select Bits */
#define CPU_CLKPR_CLKPS_gc(x) (x & 0x07)

/* Clock Management Control Change Enable Bit */
typedef enum CPU_CMCCE_enum
{
    CPU_CMCCE_CLEAR_gc = (0x00), /* Clock Management Control Change Enable Bit - CLEAR */
    CPU_CMCCE_SET_gc   = (0x80), /* Clock Management Control Change Enable Bit - SET */
} CPU_CMCCE_t;

/* Clock Monitoring Enable Bit */
typedef enum CPU_CMONEN_enum
{
    CPU_CMONEN_CLEAR_gc = (0x00), /* Clock Monitoring Enable Bit - CLEAR */
    CPU_CMONEN_SET_gc   = (0x40), /* Clock Monitoring Enable Bit - SET */
} CPU_CMONEN_t;

/* External Clock Input Select Bit */
typedef enum CPU_ECINS_enum
{
    CPU_ECINS_CLEAR_gc = (0x00), /* External Clock Input Select Bit - CLEAR */
    CPU_ECINS_SET_gc   = (0x20), /* External Clock Input Select Bit - SET */
} CPU_ECINS_t;

/* Core Clock Select Bit */
typedef enum CPU_CCS_enum
{
    CPU_CCS_CLEAR_gc = (0x00), /* Core Clock Select Bit - CLEAR */
    CPU_CCS_SET_gc   = (0x10), /* Core Clock Select Bit - SET */
} CPU_CCS_t;

/* Crystal Oscillator 32 kHz Disable Bit */
typedef enum CPU_CO32D_enum
{
    CPU_CO32D_CLEAR_gc = (0x00), /* Crystal Oscillator 32 kHz Disable Bit - CLEAR */
    CPU_CO32D_SET_gc   = (0x08), /* Crystal Oscillator 32 kHz Disable Bit - SET */
} CPU_CO32D_t;

/* Slow RC-oscillator Disable Bit */
typedef enum CPU_SRCD_enum
{
    CPU_SRCD_CLEAR_gc = (0x00), /* Slow RC-oscillator Disable Bit - CLEAR */
    CPU_SRCD_SET_gc   = (0x04), /* Slow RC-oscillator Disable Bit - SET */
} CPU_SRCD_t;

/* Clock Management Mode Bitss */
#define CPU_CMCR_CMM_gc(x) (x & 0x03)

/* Real-Time Clock Flag */
typedef enum CPU_RTCF_enum
{
    CPU_RTCF_CLEAR_gc = (0x00), /* Real-Time Clock Flag - CLEAR */
    CPU_RTCF_SET_gc   = (0x04), /* Real-Time Clock Flag - SET */
} CPU_RTCF_t;

/* Slow Crystal Oscillator Flag */
typedef enum CPU_SXF_enum
{
    CPU_SXF_CLEAR_gc = (0x00), /* Slow Crystal Oscillator Flag - CLEAR */
    CPU_SXF_SET_gc   = (0x02), /* Slow Crystal Oscillator Flag - SET */
} CPU_SXF_t;

/* External Clock input Flag Bit */
typedef enum CPU_ECF_enum
{
    CPU_ECF_CLEAR_gc = (0x00), /* External Clock input Flag Bit - CLEAR */
    CPU_ECF_SET_gc   = (0x01), /* External Clock input Flag Bit - SET */
} CPU_ECF_t;

/* Real-Time Clock Interrupt Enable Bit */
typedef enum CPU_RTCIE_enum
{
    CPU_RTCIE_CLEAR_gc = (0x00), /* Real-Time Clock Interrupt Enable Bit - CLEAR */
    CPU_RTCIE_SET_gc   = (0x04), /* Real-Time Clock Interrupt Enable Bit - SET */
} CPU_RTCIE_t;

/* Slow Crystal Oscillator Interrupt Enable Bit */
typedef enum CPU_SXIE_enum
{
    CPU_SXIE_CLEAR_gc = (0x00), /* Slow Crystal Oscillator Interrupt Enable Bit - CLEAR */
    CPU_SXIE_SET_gc   = (0x02), /* Slow Crystal Oscillator Interrupt Enable Bit - SET */
} CPU_SXIE_t;

/* External Clock input Interrupt Enable Bit */
typedef enum CPU_ECIE_enum
{
    CPU_ECIE_CLEAR_gc = (0x00), /* External Clock input Interrupt Enable Bit - CLEAR */
    CPU_ECIE_SET_gc   = (0x01), /* External Clock input Interrupt Enable Bit - SET */
} CPU_ECIE_t;

/* Brown-Out Detection Level Select Bit */
typedef enum CPU_BODLS_enum
{
    CPU_BODLS_CLEAR_gc = (0x00), /* Brown-Out Detection Level Select Bit - CLEAR */
    CPU_BODLS_SET_gc   = (0x80), /* Brown-Out Detection Level Select Bit - SET */
} CPU_BODLS_t;

/* Brown-Out Detection on Power-Down Bit */
typedef enum CPU_BODPD_enum
{
    CPU_BODPD_CLEAR_gc = (0x00), /* Brown-Out Detection on Power-Down Bit - CLEAR */
    CPU_BODPD_SET_gc   = (0x40), /* Brown-Out Detection on Power-Down Bit - SET */
} CPU_BODPD_t;

/* Voltage Monitor Power supply Select Bit */
typedef enum CPU_VMPS_enum
{
    CPU_VMPS_CLEAR_gc = (0x00), /* Voltage Monitor Power supply Select Bit - CLEAR */
    CPU_VMPS_SET_gc   = (0x20), /* Voltage Monitor Power supply Select Bit - SET */
} CPU_VMPS_t;

/* Voltage Monitor Interrupt Mask Bit */
typedef enum CPU_VMIM_enum
{
    CPU_VMIM_CLEAR_gc = (0x00), /* Voltage Monitor Interrupt Mask Bit - CLEAR */
    CPU_VMIM_SET_gc   = (0x10), /* Voltage Monitor Interrupt Mask Bit - SET */
} CPU_VMIM_t;

/* Voltage Monitor Level Select Bits */
#define CPU_VMCR_VMLS_gc(x) (x & 0x0F)

/* Voltage Monitor Flag */
typedef enum CPU_VMF_enum
{
    CPU_VMF_CLEAR_gc = (0x00), /* Voltage Monitor Flag - CLEAR */
    CPU_VMF_SET_gc   = (0x01), /* Voltage Monitor Flag - SET */
} CPU_VMF_t;

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

/* Read-While-Write Section Busy */
typedef enum CPU_RWWSB_enum
{
    CPU_RWWSB_CLEAR_gc = (0x00), /* Read-While-Write Section Busy - CLEAR */
    CPU_RWWSB_SET_gc   = (0x40), /* Read-While-Write Section Busy - SET */
} CPU_RWWSB_t;

/* Signature Row Read Bit */
typedef enum CPU_SIGRD_enum
{
    CPU_SIGRD_CLEAR_gc = (0x00), /* Signature Row Read Bit - CLEAR */
    CPU_SIGRD_SET_gc   = (0x20), /* Signature Row Read Bit - SET */
} CPU_SIGRD_t;

/* Read-While-Write section read enable */
typedef enum CPU_RWWSRE_enum
{
    CPU_RWWSRE_CLEAR_gc = (0x00), /* Read-While-Write section read enable - CLEAR */
    CPU_RWWSRE_SET_gc   = (0x10), /* Read-While-Write section read enable - SET */
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

/* Self Programming Enable */
typedef enum CPU_SPMEN_enum
{
    CPU_SPMEN_CLEAR_gc = (0x00), /* Self Programming Enable - CLEAR */
    CPU_SPMEN_SET_gc   = (0x01), /* Self Programming Enable - SET */
} CPU_SPMEN_t;

/* Pull-up Disable Flag */
typedef enum CPU_PUD_enum
{
    CPU_PUD_CLEAR_gc = (0x00), /* Pull-up Disable Flag - CLEAR */
    CPU_PUD_SET_gc   = (0x10), /* Pull-up Disable Flag - SET */
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

/* TransPonder Reset Flag */
typedef enum CPU_TPRF_enum
{
    CPU_TPRF_CLEAR_gc = (0x00), /* TransPonder Reset Flag - CLEAR */
    CPU_TPRF_SET_gc   = (0x20), /* TransPonder Reset Flag - SET */
} CPU_TPRF_t;

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

/* Sleep Mode Select Bit2 */
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

/* Sleep Enable Bit */
typedef enum CPU_SE_enum
{
    CPU_SE_CLEAR_gc = (0x00), /* Sleep Enable Bit - CLEAR */
    CPU_SE_SET_gc   = (0x01), /* Sleep Enable Bit - SET */
} CPU_SE_t;

/* Power Reduction Voltage Monitor */
typedef enum CPU_PRVM_enum
{
    CPU_PRVM_CLEAR_gc = (0x00), /* Power Reduction Voltage Monitor - CLEAR */
    CPU_PRVM_SET_gc   = (0x80), /* Power Reduction Voltage Monitor - SET */
} CPU_PRVM_t;

/* Power Reduction IR Driver Stage */
typedef enum CPU_PRDS_enum
{
    CPU_PRDS_CLEAR_gc = (0x00), /* Power Reduction IR Driver Stage - CLEAR */
    CPU_PRDS_SET_gc   = (0x40), /* Power Reduction IR Driver Stage - SET */
} CPU_PRDS_t;

/* Power Reduction Crypto Unit */
typedef enum CPU_PRCU_enum
{
    CPU_PRCU_CLEAR_gc = (0x00), /* Power Reduction Crypto Unit - CLEAR */
    CPU_PRCU_SET_gc   = (0x20), /* Power Reduction Crypto Unit - SET */
} CPU_PRCU_t;

/* Power Reduction Timer Modulator */
typedef enum CPU_PRTM_enum
{
    CPU_PRTM_CLEAR_gc = (0x00), /* Power Reduction Timer Modulator - CLEAR */
    CPU_PRTM_SET_gc   = (0x10), /* Power Reduction Timer Modulator - SET */
} CPU_PRTM_t;

/* Power Reduction Timer3 */
typedef enum CPU_PRT3_enum
{
    CPU_PRT3_CLEAR_gc = (0x00), /* Power Reduction Timer3 - CLEAR */
    CPU_PRT3_SET_gc   = (0x08), /* Power Reduction Timer3 - SET */
} CPU_PRT3_t;

/* Power Reduction Timer2 */
typedef enum CPU_PRT2_enum
{
    CPU_PRT2_CLEAR_gc = (0x00), /* Power Reduction Timer2 - CLEAR */
    CPU_PRT2_SET_gc   = (0x04), /* Power Reduction Timer2 - SET */
} CPU_PRT2_t;

/* Power Reduction Timer1 */
typedef enum CPU_PRT1_enum
{
    CPU_PRT1_CLEAR_gc = (0x00), /* Power Reduction Timer1 - CLEAR */
    CPU_PRT1_SET_gc   = (0x02), /* Power Reduction Timer1 - SET */
} CPU_PRT1_t;

/* Power Reduction LF-Receiver Interface */
typedef enum CPU_PRLFR_enum
{
    CPU_PRLFR_CLEAR_gc = (0x00), /* Power Reduction LF-Receiver Interface - CLEAR */
    CPU_PRLFR_SET_gc   = (0x01), /* Power Reduction LF-Receiver Interface - SET */
} CPU_PRLFR_t;

/* Power Reduction Serial Peripheral Interface */
typedef enum CPU_PRSPI_enum
{
    CPU_PRSPI_CLEAR_gc = (0x00), /* Power Reduction Serial Peripheral Interface - CLEAR */
    CPU_PRSPI_SET_gc   = (0x02), /* Power Reduction Serial Peripheral Interface - SET */
} CPU_PRSPI_t;

/* Power Reduction Contactless Interface */
typedef enum CPU_PRCI_enum
{
    CPU_PRCI_CLEAR_gc = (0x00), /* Power Reduction Contactless Interface - CLEAR */
    CPU_PRCI_SET_gc   = (0x01), /* Power Reduction Contactless Interface - SET */
} CPU_PRCI_t;

/*
--------------------------------------------------------------------------------
AFE - 
--------------------------------------------------------------------------------
*/

typedef struct AFE_struct
{
    register8_t rsv_0x00[45];  /* RESERVED REGISTER BLOCK */
    register8_t TPCR;          /* Transponder Control Register */
    register8_t TPFR;          /* Transponder Status & Flag Register */
    register8_t rsv_0x2F[109]; /* RESERVED REGISTER BLOCK */
    register8_t TPIMR;         /* Transponder Interrupt Mask Register */
} AFE_t;


/* Transponder Disable Bit */
typedef enum AFE_TPD_enum
{
    AFE_TPD_CLEAR_gc = (0x00), /* Transponder Disable Bit - CLEAR */
    AFE_TPD_SET_gc   = (0x80), /* Transponder Disable Bit - SET */
} AFE_TPD_t;

/* Transponder Power Switch Disable Bit */
typedef enum AFE_TPPSD_enum
{
    AFE_TPPSD_CLEAR_gc = (0x00), /* Transponder Power Switch Disable Bit - CLEAR */
    AFE_TPPSD_SET_gc   = (0x40), /* Transponder Power Switch Disable Bit - SET */
} AFE_TPPSD_t;

/* Transponder Modulation Damping level select Bit1 */
#define AFE_TPCR_TPMD_gc(x) ((x<<4) & 0x30)

/* Transponder Modulation Select Bits */
#define AFE_TPCR_TPMS_gc(x) ((x<<2) & 0x0C)

/* Transponder Modulator Bit */
typedef enum AFE_TPMOD_enum
{
    AFE_TPMOD_CLEAR_gc = (0x00), /* Transponder Modulator Bit - CLEAR */
    AFE_TPMOD_SET_gc   = (0x02), /* Transponder Modulator Bit - SET */
} AFE_TPMOD_t;

/* Transponder Mode Acknowledgment Bit */
typedef enum AFE_TPMA_enum
{
    AFE_TPMA_CLEAR_gc = (0x00), /* Transponder Mode Acknowledgment Bit - CLEAR */
    AFE_TPMA_SET_gc   = (0x01), /* Transponder Mode Acknowledgment Bit - SET */
} AFE_TPMA_t;

/* Transponder Interrupt Mask Bit */
typedef enum AFE_TPIM_enum
{
    AFE_TPIM_CLEAR_gc = (0x00), /* Transponder Interrupt Mask Bit - CLEAR */
    AFE_TPIM_SET_gc   = (0x01), /* Transponder Interrupt Mask Bit - SET */
} AFE_TPIM_t;

/* Transponder Power Switch Bit */
typedef enum AFE_TPPSW_enum
{
    AFE_TPPSW_CLEAR_gc = (0x00), /* Transponder Power Switch Bit - CLEAR */
    AFE_TPPSW_SET_gc   = (0x08), /* Transponder Power Switch Bit - SET */
} AFE_TPPSW_t;

/* Transponder Gap Signal Bit */
typedef enum AFE_TPGAP_enum
{
    AFE_TPGAP_CLEAR_gc = (0x00), /* Transponder Gap Signal Bit - CLEAR */
    AFE_TPGAP_SET_gc   = (0x04), /* Transponder Gap Signal Bit - SET */
} AFE_TPGAP_t;

/* Transponder Active Bit */
typedef enum AFE_TPA_enum
{
    AFE_TPA_CLEAR_gc = (0x00), /* Transponder Active Bit - CLEAR */
    AFE_TPA_SET_gc   = (0x02), /* Transponder Active Bit - SET */
} AFE_TPA_t;

/* Transponder Flag */
typedef enum AFE_TPF_enum
{
    AFE_TPF_CLEAR_gc = (0x00), /* Transponder Flag - CLEAR */
    AFE_TPF_SET_gc   = (0x01), /* Transponder Flag - SET */
} AFE_TPF_t;

/*
--------------------------------------------------------------------------------
DDDLFRX - 
--------------------------------------------------------------------------------
*/

typedef struct DDDLFRX_struct
{
    register8_t rsv_0x00[56]; /* RESERVED REGISTER BLOCK */
    register8_t LFFR;         /* LF Flag Register */
    register8_t rsv_0x39[22]; /* RESERVED REGISTER BLOCK */
    register8_t LFCR0;        /* Low Frequency Receiver Control Register 0 */
    register8_t LFCR1;        /* LF receiver Control Register 1 */
    register8_t rsv_0x51;     /* RESERVED REGISTER */
    register8_t LFRDB;        /* LF Receiver Data Buffer */
    register8_t rsv_0x53[3];  /* RESERVED REGISTER BLOCK */
    register8_t LFSR;         /* LF Status Register */
    register8_t rsv_0x57[43]; /* RESERVED REGISTER BLOCK */
    register8_t LFIMR;        /* LF Interrupt Mask Register */
    register8_t LFCAD;        /* LF Clock Adjustment Data Register */
    register8_t LFID00;       /* LF ID 0 Data Register Byte 0 */
    register8_t LFID01;       /* LF ID 0 Data Register Byte 1 */
    register8_t LFID02;       /* LF ID 0 Data Register Byte 2 */
    register8_t LFID03;       /* LF ID 0 Data Register Byte 3 */
    register8_t LFID10;       /* LF ID 1 Data Register Byte 0 */
    register8_t LFID11;       /* LF ID 1 Data Register Byte 1 */
    register8_t LFID12;       /* LF ID 1 Data Register Byte 2 */
    register8_t LFID13;       /* LF ID 1 Data Register Byte 3 */
    register8_t LFRD0;        /* LF Receive Data Register Byte 0 */
    register8_t LFRD1;        /* LF Receive Data Register Byte 1 */
    register8_t LFRD2;        /* LF Receive Data Register Byte 2 */
    register8_t LFRD3;        /* LF Receive Data Register Byte 3 */
    register8_t LFID0M;       /* LF Identifier 0 Mask Register */
    register8_t LFID1M;       /* LF Identifier 1 Mask Register */
    register8_t LFRDF;        /* LF Receive Data Frame Register */
    register8_t LFRSD1;       /* LF RSSI Data Register 1 */
    register8_t LFRSD2;       /* LF RSSI Data Register 2 */
    register8_t LFRSD3;       /* LF RSSI Data Register 3 */
    register8_t LFCC1;        /* Low Frequency Channel Capacity select register 1 */
    register8_t LFCC2;        /* Low Frequency Channel Capacity select register 2 */
    register8_t LFCC3;        /* Low Frequency Channel Capacity select register 3 */
    register8_t LFQCR;        /* Low Frequency Receiver Quality Controll Register */
} DDDLFRX_t;


/* LF Receiver Quality ????? */
typedef enum DDDLFRX_LFQCLL_enum
{
    DDDLFRX_LFQCLL_CLEAR_gc = (0x00), /* LF Receiver Quality ????? - CLEAR */
    DDDLFRX_LFQCLL_SET_gc   = (0x01), /* LF Receiver Quality ????? - SET */
} DDDLFRX_LFQCLL_t;

/* LF Receiver Velocity Control Bits */
#define DDDLFRX_LFCR0_LFVC_gc(x) ((x<<6) & 0xC0)

/* LF receiver Max Gain Bit */
typedef enum DDDLFRX_LFMG_enum
{
    DDDLFRX_LFMG_CLEAR_gc = (0x00), /* LF receiver Max Gain Bit - CLEAR */
    DDDLFRX_LFMG_SET_gc   = (0x20), /* LF receiver Max Gain Bit - SET */
} DDDLFRX_LFMG_t;

/* LF Receiver Buffer Data Frame Select Bit */
typedef enum DDDLFRX_LFRBS_enum
{
    DDDLFRX_LFRBS_CLEAR_gc = (0x00), /* LF Receiver Buffer Data Frame Select Bit - CLEAR */
    DDDLFRX_LFRBS_SET_gc   = (0x10), /* LF Receiver Buffer Data Frame Select Bit - SET */
} DDDLFRX_LFRBS_t;

/* LF receiver Baud Rate Select Bit */
typedef enum DDDLFRX_LFBRS_enum
{
    DDDLFRX_LFBRS_CLEAR_gc = (0x00), /* LF receiver Baud Rate Select Bit - CLEAR */
    DDDLFRX_LFBRS_SET_gc   = (0x08), /* LF receiver Baud Rate Select Bit - SET */
} DDDLFRX_LFBRS_t;

/* LF receiver Channel Enable Bits */
#define DDDLFRX_LFCR0_LFCE_gc(x) (x & 0x07)

/* LF Receiver Enable Bit */
typedef enum DDDLFRX_LFRE_enum
{
    DDDLFRX_LFRE_CLEAR_gc = (0x00), /* LF Receiver Enable Bit - CLEAR */
    DDDLFRX_LFRE_SET_gc   = (0x80), /* LF Receiver Enable Bit - SET */
} DDDLFRX_LFRE_t;

/* LF Receiver Quality Check Bit */
typedef enum DDDLFRX_LFQCE_enum
{
    DDDLFRX_LFQCE_CLEAR_gc = (0x00), /* LF Receiver Quality Check Bit - CLEAR */
    DDDLFRX_LFQCE_SET_gc   = (0x40), /* LF Receiver Quality Check Bit - SET */
} DDDLFRX_LFQCE_t;

/* LF receiver Rssi Measurement Start Additional Bit */
typedef enum DDDLFRX_LFRMSA_enum
{
    DDDLFRX_LFRMSA_CLEAR_gc = (0x00), /* LF receiver Rssi Measurement Start Additional Bit - CLEAR */
    DDDLFRX_LFRMSA_SET_gc   = (0x20), /* LF receiver Rssi Measurement Start Additional Bit - SET */
} DDDLFRX_LFRMSA_t;

/* LF receiver RSSI Measurement Start Bit */
typedef enum DDDLFRX_LFRMS_enum
{
    DDDLFRX_LFRMS_CLEAR_gc = (0x00), /* LF receiver RSSI Measurement Start Bit - CLEAR */
    DDDLFRX_LFRMS_SET_gc   = (0x10), /* LF receiver RSSI Measurement Start Bit - SET */
} DDDLFRX_LFRMS_t;

/* LF Function Mode Bits */
#define DDDLFRX_LFCR1_LFFM_gc(x) ((x<<2) & 0x0C)

/* LF Mode Bits */
#define DDDLFRX_LFCR1_LFM_gc(x) (x & 0x03)

/* Identifier 0 Enable Bit */
typedef enum DDDLFRX_ID0E_enum
{
    DDDLFRX_ID0E_CLEAR_gc = (0x00), /* Identifier 0 Enable Bit - CLEAR */
    DDDLFRX_ID0E_SET_gc   = (0x80), /* Identifier 0 Enable Bit - SET */
} DDDLFRX_ID0E_t;

/* Identifier 0 Frame Select Bits */
#define DDDLFRX_LFID0M_ID0FS_gc(x) (x & 0x1F)

/* Identifier 1 Enable Bit */
typedef enum DDDLFRX_ID1E_enum
{
    DDDLFRX_ID1E_CLEAR_gc = (0x00), /* Identifier 1 Enable Bit - CLEAR */
    DDDLFRX_ID1E_SET_gc   = (0x80), /* Identifier 1 Enable Bit - SET */
} DDDLFRX_ID1E_t;

/* Identifier 1 Frame Select Bits */
#define DDDLFRX_LFID1M_ID1FS_gc(x) (x & 0x1F)

/* Receive Data Frame Enable Bit */
typedef enum DDDLFRX_RDFE_enum
{
    DDDLFRX_RDFE_CLEAR_gc = (0x00), /* Receive Data Frame Enable Bit - CLEAR */
    DDDLFRX_RDFE_SET_gc   = (0x80), /* Receive Data Frame Enable Bit - SET */
} DDDLFRX_RDFE_t;

/* Receive Data Frame Select Bits */
#define DDDLFRX_LFRDF_RDFS_gc(x) (x & 0x1F)

/* LF Manchester Decoder Error Interrupt Mask Bit */
typedef enum DDDLFRX_LFMDIM_enum
{
    DDDLFRX_LFMDIM_CLEAR_gc = (0x00), /* LF Manchester Decoder Error Interrupt Mask Bit - CLEAR */
    DDDLFRX_LFMDIM_SET_gc   = (0x40), /* LF Manchester Decoder Error Interrupt Mask Bit - SET */
} DDDLFRX_LFMDIM_t;

/* LF Signal Detected Interrupt Mask Bit */
typedef enum DDDLFRX_LFSDIM_enum
{
    DDDLFRX_LFSDIM_CLEAR_gc = (0x00), /* LF Signal Detected Interrupt Mask Bit - CLEAR */
    DDDLFRX_LFSDIM_SET_gc   = (0x20), /* LF Signal Detected Interrupt Mask Bit - SET */
} DDDLFRX_LFSDIM_t;

/* LF RSSI Data Interrupt Mask Bit */
typedef enum DDDLFRX_LFRSIM_enum
{
    DDDLFRX_LFRSIM_CLEAR_gc = (0x00), /* LF RSSI Data Interrupt Mask Bit - CLEAR */
    DDDLFRX_LFRSIM_SET_gc   = (0x10), /* LF RSSI Data Interrupt Mask Bit - SET */
} DDDLFRX_LFRSIM_t;

/* LF Receiver Data Buffer Interrupt Mask Bit */
typedef enum DDDLFRX_LFDBIM_enum
{
    DDDLFRX_LFDBIM_CLEAR_gc = (0x00), /* LF Receiver Data Buffer Interrupt Mask Bit - CLEAR */
    DDDLFRX_LFDBIM_SET_gc   = (0x08), /* LF Receiver Data Buffer Interrupt Mask Bit - SET */
} DDDLFRX_LFDBIM_t;

/* LF Receiver Frame End Interrupt Mask Bit */
typedef enum DDDLFRX_LFFEIM_enum
{
    DDDLFRX_LFFEIM_CLEAR_gc = (0x00), /* LF Receiver Frame End Interrupt Mask Bit - CLEAR */
    DDDLFRX_LFFEIM_SET_gc   = (0x04), /* LF Receiver Frame End Interrupt Mask Bit - SET */
} DDDLFRX_LFFEIM_t;

/* LF Identifier 1 Interrupt Mask Bit */
typedef enum DDDLFRX_LFID1IM_enum
{
    DDDLFRX_LFID1IM_CLEAR_gc = (0x00), /* LF Identifier 1 Interrupt Mask Bit - CLEAR */
    DDDLFRX_LFID1IM_SET_gc   = (0x02), /* LF Identifier 1 Interrupt Mask Bit - SET */
} DDDLFRX_LFID1IM_t;

/* LF Identifier 0 Interrupt Mask Bit */
typedef enum DDDLFRX_LFID0IM_enum
{
    DDDLFRX_LFID0IM_CLEAR_gc = (0x00), /* LF Identifier 0 Interrupt Mask Bit - CLEAR */
    DDDLFRX_LFID0IM_SET_gc   = (0x01), /* LF Identifier 0 Interrupt Mask Bit - SET */
} DDDLFRX_LFID0IM_t;

/* LF Clock Adjustment Flag */
typedef enum DDDLFRX_LFCAF_enum
{
    DDDLFRX_LFCAF_CLEAR_gc = (0x00), /* LF Clock Adjustment Flag - CLEAR */
    DDDLFRX_LFCAF_SET_gc   = (0x80), /* LF Clock Adjustment Flag - SET */
} DDDLFRX_LFCAF_t;

/* LF Manchester Decoder Error Flag */
typedef enum DDDLFRX_LFMDF_enum
{
    DDDLFRX_LFMDF_CLEAR_gc = (0x00), /* LF Manchester Decoder Error Flag - CLEAR */
    DDDLFRX_LFMDF_SET_gc   = (0x40), /* LF Manchester Decoder Error Flag - SET */
} DDDLFRX_LFMDF_t;

/* LF Signal Detect Flag */
typedef enum DDDLFRX_LFSDF_enum
{
    DDDLFRX_LFSDF_CLEAR_gc = (0x00), /* LF Signal Detect Flag - CLEAR */
    DDDLFRX_LFSDF_SET_gc   = (0x20), /* LF Signal Detect Flag - SET */
} DDDLFRX_LFSDF_t;

/* LF RSSI Data Flag */
typedef enum DDDLFRX_LFRSF_enum
{
    DDDLFRX_LFRSF_CLEAR_gc = (0x00), /* LF RSSI Data Flag - CLEAR */
    DDDLFRX_LFRSF_SET_gc   = (0x10), /* LF RSSI Data Flag - SET */
} DDDLFRX_LFRSF_t;

/* LF Data Buffer Full Flag */
typedef enum DDDLFRX_LFDBF_enum
{
    DDDLFRX_LFDBF_CLEAR_gc = (0x00), /* LF Data Buffer Full Flag - CLEAR */
    DDDLFRX_LFDBF_SET_gc   = (0x08), /* LF Data Buffer Full Flag - SET */
} DDDLFRX_LFDBF_t;

/* LF Frame End Flag */
typedef enum DDDLFRX_LFFEF_enum
{
    DDDLFRX_LFFEF_CLEAR_gc = (0x00), /* LF Frame End Flag - CLEAR */
    DDDLFRX_LFFEF_SET_gc   = (0x04), /* LF Frame End Flag - SET */
} DDDLFRX_LFFEF_t;

/* LF Identifier 1 Flag */
typedef enum DDDLFRX_LFID1F_enum
{
    DDDLFRX_LFID1F_CLEAR_gc = (0x00), /* LF Identifier 1 Flag - CLEAR */
    DDDLFRX_LFID1F_SET_gc   = (0x02), /* LF Identifier 1 Flag - SET */
} DDDLFRX_LFID1F_t;

/* LF Identifier 0 Flag */
typedef enum DDDLFRX_LFID0F_enum
{
    DDDLFRX_LFID0F_CLEAR_gc = (0x00), /* LF Identifier 0 Flag - CLEAR */
    DDDLFRX_LFID0F_SET_gc   = (0x01), /* LF Identifier 0 Flag - SET */
} DDDLFRX_LFID0F_t;

/* LF Signal Data Bit */
typedef enum DDDLFRX_LFSD_enum
{
    DDDLFRX_LFSD_CLEAR_gc = (0x00), /* LF Signal Data Bit - CLEAR */
    DDDLFRX_LFSD_SET_gc   = (0x02), /* LF Signal Data Bit - SET */
} DDDLFRX_LFSD_t;

/* LF Envelope Signal Bit */
typedef enum DDDLFRX_LFES_enum
{
    DDDLFRX_LFES_CLEAR_gc = (0x00), /* LF Envelope Signal Bit - CLEAR */
    DDDLFRX_LFES_SET_gc   = (0x01), /* LF Envelope Signal Bit - SET */
} DDDLFRX_LFES_t;

/*
--------------------------------------------------------------------------------
IRLED - 
--------------------------------------------------------------------------------
*/

typedef struct IRLED_struct
{
    register8_t rsv_0x00[109]; /* RESERVED REGISTER BLOCK */
    register8_t LDCR;          /* LED Driver Control Register */
} IRLED_t;


/* LED Driver Current Select Bits */
#define IRLED_LDCR_LDCS_gc(x) ((x<<1) & 0x06)

/* LED Driver Enable Bit */
typedef enum IRLED_LDE_enum
{
    IRLED_LDE_CLEAR_gc = (0x00), /* LED Driver Enable Bit - CLEAR */
    IRLED_LDE_SET_gc   = (0x01), /* LED Driver Enable Bit - SET */
} IRLED_LDE_t;

/*
--------------------------------------------------------------------------------
AES - 
--------------------------------------------------------------------------------
*/

typedef struct AES_struct
{
    register8_t rsv_0x00[51]; /* RESERVED REGISTER BLOCK */
    register8_t AESCR;        /* AES Control Register */
    register8_t AESSR;        /* AES Status Register */
    register8_t rsv_0x35[20]; /* RESERVED REGISTER BLOCK */
    register8_t AESDR;        /* AES Data Register */
    register8_t AESKR;        /* AES Key Register */
} AES_t;


/* AES Enable Bit */
typedef enum AES_AESE_enum
{
    AES_AESE_CLEAR_gc = (0x00), /* AES Enable Bit - CLEAR */
    AES_AESE_SET_gc   = (0x80), /* AES Enable Bit - SET */
} AES_AESE_t;

/* AES Reset Bit */
typedef enum AES_AESRES_enum
{
    AES_AESRES_CLEAR_gc = (0x00), /* AES Reset Bit - CLEAR */
    AES_AESRES_SET_gc   = (0x20), /* AES Reset Bit - SET */
} AES_AESRES_t;

/* AES State XOR load bit */
typedef enum AES_AESXOR_enum
{
    AES_AESXOR_CLEAR_gc = (0x00), /* AES State XOR load bit - CLEAR */
    AES_AESXOR_SET_gc   = (0x10), /* AES State XOR load bit - SET */
} AES_AESXOR_t;

/* AES Direction Bit */
typedef enum AES_AESD_enum
{
    AES_AESD_CLEAR_gc = (0x00), /* AES Direction Bit - CLEAR */
    AES_AESD_SET_gc   = (0x08), /* AES Direction Bit - SET */
} AES_AESD_t;

/* AES Interrupt Mask Bit */
typedef enum AES_AESIM_enum
{
    AES_AESIM_CLEAR_gc = (0x00), /* AES Interrupt Mask Bit - CLEAR */
    AES_AESIM_SET_gc   = (0x04), /* AES Interrupt Mask Bit - SET */
} AES_AESIM_t;

/* AES Write Data Bit */
typedef enum AES_AESWD_enum
{
    AES_AESWD_CLEAR_gc = (0x00), /* AES Write Data Bit - CLEAR */
    AES_AESWD_SET_gc   = (0x02), /* AES Write Data Bit - SET */
} AES_AESWD_t;

/* AES Write Key Bit */
typedef enum AES_AESWK_enum
{
    AES_AESWK_CLEAR_gc = (0x00), /* AES Write Key Bit - CLEAR */
    AES_AESWK_SET_gc   = (0x01), /* AES Write Key Bit - SET */
} AES_AESWK_t;

/* AES Error Flag Bit */
typedef enum AES_AESERF_enum
{
    AES_AESERF_CLEAR_gc = (0x00), /* AES Error Flag Bit - CLEAR */
    AES_AESERF_SET_gc   = (0x80), /* AES Error Flag Bit - SET */
} AES_AESERF_t;

/* AES Ready Flag Bit */
typedef enum AES_AESRF_enum
{
    AES_AESRF_CLEAR_gc = (0x00), /* AES Ready Flag Bit - CLEAR */
    AES_AESRF_SET_gc   = (0x01), /* AES Ready Flag Bit - SET */
} AES_AESRF_t;

/*
--------------------------------------------------------------------------------
MOD - 
--------------------------------------------------------------------------------
*/

typedef struct MOD_struct
{
    register8_t rsv_0x00[53]; /* RESERVED REGISTER BLOCK */
    register8_t TMIFR;        /* Timer Modulator Interrupt Flag Register */
    register8_t rsv_0x36[18]; /* RESERVED REGISTER BLOCK */
    register8_t TMDR;         /* Timer Modulator Data Register */
    register8_t rsv_0x49[52]; /* RESERVED REGISTER BLOCK */
    register8_t TMCR;         /* Timer Modulator Control Register */
    register8_t TMMR;         /* Timer Modulator Mode Register */
    register8_t TMIMR;        /* Timer Modulator Interrupt Mask Register */
    register8_t rsv_0x80[40]; /* RESERVED REGISTER BLOCK */
    register8_t TMMDR;        /* Timer Modulator Manchester Data Register */
    register8_t TMBDR;        /* Timer Modulator Biphase Data Register */
    register8_t TMTDR;        /* Timer Modulator Transmit Data Register */
    register8_t TMSR;         /* Timer Modulator Shift Register */
} MOD_t;


/* Timer Modulator SSI Enable Bit */
typedef enum MOD_TMSSIE_enum
{
    MOD_TMSSIE_CLEAR_gc = (0x00), /* Timer Modulator SSI Enable Bit - CLEAR */
    MOD_TMSSIE_SET_gc   = (0x80), /* Timer Modulator SSI Enable Bit - SET */
} MOD_TMSSIE_t;

/* Timer Modulator Clock Polarity for SSI shift clock */
typedef enum MOD_TMCPOL_enum
{
    MOD_TMCPOL_CLEAR_gc = (0x00), /* Timer Modulator Clock Polarity for SSI shift clock - CLEAR */
    MOD_TMCPOL_SET_gc   = (0x40), /* Timer Modulator Clock Polarity for SSI shift clock - SET */
} MOD_TMCPOL_t;

/* Modulator Interface 4 Select Bits */
#define MOD_TMCR_MI4S_gc(x) ((x<<4) & 0x30)

/* Modulator Interface 2 Select Bits */
#define MOD_TMCR_MI2S_gc(x) ((x<<2) & 0x0C)

/* Modulator Interface 1 Select Bits */
#define MOD_TMCR_MI1S_gc(x) (x & 0x03)

/* Timer Modulator 1/2 output Select bit */
typedef enum MOD_TM12S_enum
{
    MOD_TM12S_CLEAR_gc = (0x00), /* Timer Modulator 1/2 output Select bit - CLEAR */
    MOD_TM12S_SET_gc   = (0x80), /* Timer Modulator 1/2 output Select bit - SET */
} MOD_TM12S_t;

/* Timer Modulator Mode Select Bits */
#define MOD_TMMR_TMMS_gc(x) ((x<<5) & 0x60)

/* Modulator OUT signal Complement Bit */
typedef enum MOD_MOUTC_enum
{
    MOD_MOUTC_CLEAR_gc = (0x00), /* Modulator OUT signal Complement Bit - CLEAR */
    MOD_MOUTC_SET_gc   = (0x10), /* Modulator OUT signal Complement Bit - SET */
} MOD_MOUTC_t;

/* Modulator Shift Clock Select Bits */
#define MOD_TMMR_MSCS_gc(x) ((x<<2) & 0x0C)

/* Modulator Output Select Bits */
#define MOD_TMMR_MOS_gc(x) (x & 0x03)

/* Timer Modulator SSI Transmit Status Bit */
typedef enum MOD_TMTXS_enum
{
    MOD_TMTXS_CLEAR_gc = (0x00), /* Timer Modulator SSI Transmit Status Bit - CLEAR */
    MOD_TMTXS_SET_gc   = (0x10), /* Timer Modulator SSI Transmit Status Bit - SET */
} MOD_TMTXS_t;

/* Timer Modulator SSI Receive Status Bit */
typedef enum MOD_TMRXS_enum
{
    MOD_TMRXS_CLEAR_gc = (0x00), /* Timer Modulator SSI Receive Status Bit - CLEAR */
    MOD_TMRXS_SET_gc   = (0x08), /* Timer Modulator SSI Receive Status Bit - SET */
} MOD_TMRXS_t;

/* Timer Modulator SSI Transmit Complete Flag Bit */
typedef enum MOD_TMTCF_enum
{
    MOD_TMTCF_CLEAR_gc = (0x00), /* Timer Modulator SSI Transmit Complete Flag Bit - CLEAR */
    MOD_TMTCF_SET_gc   = (0x04), /* Timer Modulator SSI Transmit Complete Flag Bit - SET */
} MOD_TMTCF_t;

/* Timer Modulator SSI Transmit Flag Bit */
typedef enum MOD_TMTXF_enum
{
    MOD_TMTXF_CLEAR_gc = (0x00), /* Timer Modulator SSI Transmit Flag Bit - CLEAR */
    MOD_TMTXF_SET_gc   = (0x02), /* Timer Modulator SSI Transmit Flag Bit - SET */
} MOD_TMTXF_t;

/* Timer Modulator SSI Receive Flag Bit */
typedef enum MOD_TMRXF_enum
{
    MOD_TMRXF_CLEAR_gc = (0x00), /* Timer Modulator SSI Receive Flag Bit - CLEAR */
    MOD_TMRXF_SET_gc   = (0x01), /* Timer Modulator SSI Receive Flag Bit - SET */
} MOD_TMRXF_t;

/* Timer Modulator SSI Transmit Complete Interrupt Mask Bit */
typedef enum MOD_TMTCIM_enum
{
    MOD_TMTCIM_CLEAR_gc = (0x00), /* Timer Modulator SSI Transmit Complete Interrupt Mask Bit - CLEAR */
    MOD_TMTCIM_SET_gc   = (0x04), /* Timer Modulator SSI Transmit Complete Interrupt Mask Bit - SET */
} MOD_TMTCIM_t;

/* Timer Modulator SSI Transmit Interrupt Mask Bit */
typedef enum MOD_TMTXIM_enum
{
    MOD_TMTXIM_CLEAR_gc = (0x00), /* Timer Modulator SSI Transmit Interrupt Mask Bit - CLEAR */
    MOD_TMTXIM_SET_gc   = (0x02), /* Timer Modulator SSI Transmit Interrupt Mask Bit - SET */
} MOD_TMTXIM_t;

/* Timer Modulator SSI Receive Interrupt Mask Bit */
typedef enum MOD_TMRXIM_enum
{
    MOD_TMRXIM_CLEAR_gc = (0x00), /* Timer Modulator SSI Receive Interrupt Mask Bit - CLEAR */
    MOD_TMRXIM_SET_gc   = (0x01), /* Timer Modulator SSI Receive Interrupt Mask Bit - SET */
} MOD_TMRXIM_t;

/*
--------------------------------------------------------------------------------
VMON - 
--------------------------------------------------------------------------------
*/

typedef struct VMON_struct
{
    register8_t rsv_0x00[54]; /* RESERVED REGISTER BLOCK */
    register8_t VMSR;         /* Voltage Monitor Status Register */
    register8_t rsv_0x37[20]; /* RESERVED REGISTER BLOCK */
    register8_t VMCR;         /* Voltage Monitor Control Register */
} VMON_t;


/* Brown-Out Detection Level Bit */
typedef enum VMON_BODLS_enum
{
    VMON_BODLS_CLEAR_gc = (0x00), /* Brown-Out Detection Level Bit - CLEAR */
    VMON_BODLS_SET_gc   = (0x80), /* Brown-Out Detection Level Bit - SET */
} VMON_BODLS_t;

/* Brown-Out Detection on Power-Down Bit */
typedef enum VMON_BODPD_enum
{
    VMON_BODPD_CLEAR_gc = (0x00), /* Brown-Out Detection on Power-Down Bit - CLEAR */
    VMON_BODPD_SET_gc   = (0x40), /* Brown-Out Detection on Power-Down Bit - SET */
} VMON_BODPD_t;

/* Voltage Monitor Power Supply Voltage Select Bit */
typedef enum VMON_VMPS_enum
{
    VMON_VMPS_CLEAR_gc = (0x00), /* Voltage Monitor Power Supply Voltage Select Bit - CLEAR */
    VMON_VMPS_SET_gc   = (0x20), /* Voltage Monitor Power Supply Voltage Select Bit - SET */
} VMON_VMPS_t;

/* Voltag Monitor Interrupt Mask bit */
typedef enum VMON_VMIM_enum
{
    VMON_VMIM_CLEAR_gc = (0x00), /* Voltag Monitor Interrupt Mask bit - CLEAR */
    VMON_VMIM_SET_gc   = (0x10), /* Voltag Monitor Interrupt Mask bit - SET */
} VMON_VMIM_t;

/* Voltage Monitor Level Select Bits */
#define VMON_VMCR_VMLS_gc(x) (x & 0x0F)

/* Voltage Monitor Flag */
typedef enum VMON_VMF_enum
{
    VMON_VMF_CLEAR_gc = (0x00), /* Voltage Monitor Flag - CLEAR */
    VMON_VMF_SET_gc   = (0x01), /* Voltage Monitor Flag - SET */
} VMON_VMF_t;

/*
--------------------------------------------------------------------------------
EXTERNAL_INTERRUPT - 
--------------------------------------------------------------------------------
*/

typedef struct EXTERNAL_INTERRUPT_struct
{
    register8_t rsv_0x00[55]; /* RESERVED REGISTER BLOCK */
    register8_t PCIFR;        /* Pin Change Interrupt Flag Register */
    register8_t rsv_0x38[5];  /* RESERVED REGISTER BLOCK */
    register8_t EIFR;         /* External Interrupt Flag Register */
    register8_t rsv_0x3E[8];  /* RESERVED REGISTER BLOCK */
    register8_t PCICR;        /* Pin Change Interrupt Control Register */
    register8_t EIMSK;        /* External Interrupt Mask Register */
    register8_t rsv_0x48[33]; /* RESERVED REGISTER BLOCK */
    register8_t EICRA;        /* External Interrupt Control Register */
    register8_t PCMSK0;       /* Pin Change Mask Register 0 */
    register8_t PCMSK1;       /* Pin Change Mask Register 1 */
} EXTERNAL_INTERRUPT_t;


/* External Interrupt Sense Control 0 Bit 1 */
typedef enum EXTERNAL_INTERRUPT_ISC01_enum
{
    EXTERNAL_INTERRUPT_ISC01_CLEAR_gc = (0x00), /* External Interrupt Sense Control 0 Bit 1 - CLEAR */
    EXTERNAL_INTERRUPT_ISC01_SET_gc   = (0x02), /* External Interrupt Sense Control 0 Bit 1 - SET */
} EXTERNAL_INTERRUPT_ISC01_t;

/* External Interrupt Sense Control 0 Bit 0 */
typedef enum EXTERNAL_INTERRUPT_ISC00_enum
{
    EXTERNAL_INTERRUPT_ISC00_CLEAR_gc = (0x00), /* External Interrupt Sense Control 0 Bit 0 - CLEAR */
    EXTERNAL_INTERRUPT_ISC00_SET_gc   = (0x01), /* External Interrupt Sense Control 0 Bit 0 - SET */
} EXTERNAL_INTERRUPT_ISC00_t;

/* External Interrupt Request 0 Enable */
typedef enum EXTERNAL_INTERRUPT_INT0_enum
{
    EXTERNAL_INTERRUPT_INT0_CLEAR_gc = (0x00), /* External Interrupt Request 0 Enable - CLEAR */
    EXTERNAL_INTERRUPT_INT0_SET_gc   = (0x01), /* External Interrupt Request 0 Enable - SET */
} EXTERNAL_INTERRUPT_INT0_t;

/* External Interrupt Flag 0 */
typedef enum EXTERNAL_INTERRUPT_INTF0_enum
{
    EXTERNAL_INTERRUPT_INTF0_CLEAR_gc = (0x00), /* External Interrupt Flag 0 - CLEAR */
    EXTERNAL_INTERRUPT_INTF0_SET_gc   = (0x01), /* External Interrupt Flag 0 - SET */
} EXTERNAL_INTERRUPT_INTF0_t;

/*
--------------------------------------------------------------------------------
EEPROM - 
--------------------------------------------------------------------------------
*/

typedef struct EEPROM_struct
{
    register8_t rsv_0x00[63]; /* RESERVED REGISTER BLOCK */
    register8_t EECR;         /* EEPROM Control Register */
    register8_t EEDR;         /* EEPROM Data Register */
    _REGISTER16 (EEAR);       /* EEPROM Address Register  Bytes */
    register8_t rsv_0x42;     /* RESERVED REGISTER */
    register8_t EEPR;         /* EEPROM Protect Register */
    register8_t EECCR;        /* EEPROM Error Correction Code Register */
    register8_t EECR2;        /* EEPROM Control Register 2 */
} EEPROM_t;


/* Non-volatile memory busy */
typedef enum EEPROM_NVMBSY_enum
{
    EEPROM_NVMBSY_CLEAR_gc = (0x00), /* Non-volatile memory busy - CLEAR */
    EEPROM_NVMBSY_SET_gc   = (0x80), /* Non-volatile memory busy - SET */
} EEPROM_NVMBSY_t;

/* EEPROM Low Power Pump Enable Bit */
typedef enum EEPROM_EELP_enum
{
    EEPROM_EELP_CLEAR_gc = (0x00), /* EEPROM Low Power Pump Enable Bit - CLEAR */
    EEPROM_EELP_SET_gc   = (0x40), /* EEPROM Low Power Pump Enable Bit - SET */
} EEPROM_EELP_t;

/* EEPROM Programming Mode Bits */
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

/* EEPROM Page Access */
typedef enum EEPROM_EEPAGE_enum
{
    EEPROM_EEPAGE_CLEAR_gc = (0x00), /* EEPROM Page Access - CLEAR */
    EEPROM_EEPAGE_SET_gc   = (0x02), /* EEPROM Page Access - SET */
} EEPROM_EEPAGE_t;

/* EEPROM Burst Read Enable bit */
typedef enum EEPROM_EEBRE_enum
{
    EEPROM_EEBRE_CLEAR_gc = (0x00), /* EEPROM Burst Read Enable bit - CLEAR */
    EEPROM_EEBRE_SET_gc   = (0x01), /* EEPROM Burst Read Enable bit - SET */
} EEPROM_EEBRE_t;

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
TIMER_COUNTER_0 - 
--------------------------------------------------------------------------------
*/

typedef struct TIMER_COUNTER_0_struct
{
    register8_t rsv_0x00[57]; /* RESERVED REGISTER BLOCK */
    register8_t T0IFR;        /* Timer0 Interrupt Flag Register */
    register8_t rsv_0x3A[31]; /* RESERVED REGISTER BLOCK */
    register8_t T0CR;         /* Timer 0 Control Register */
} TIMER_COUNTER_0_t;


/* Timer 0 Prescaler Reset Bit */
typedef enum TIMER_COUNTER_0_T0PR_enum
{
    TIMER_COUNTER_0_T0PR_CLEAR_gc = (0x00), /* Timer 0 Prescaler Reset Bit - CLEAR */
    TIMER_COUNTER_0_T0PR_SET_gc   = (0x10), /* Timer 0 Prescaler Reset Bit - SET */
} TIMER_COUNTER_0_T0PR_t;

/* Timer 0 Interrupt Enable Bit */
typedef enum TIMER_COUNTER_0_T0IE_enum
{
    TIMER_COUNTER_0_T0IE_CLEAR_gc = (0x00), /* Timer 0 Interrupt Enable Bit - CLEAR */
    TIMER_COUNTER_0_T0IE_SET_gc   = (0x08), /* Timer 0 Interrupt Enable Bit - SET */
} TIMER_COUNTER_0_T0IE_t;

/* Timer 0 Prescaler Select Bits */
#define TIMER_COUNTER_0_T0CR_T0PS_gc(x) (x & 0x07)

/* Timer 0 Flag Bit */
typedef enum TIMER_COUNTER_0_T0F_enum
{
    TIMER_COUNTER_0_T0F_CLEAR_gc = (0x00), /* Timer 0 Flag Bit - CLEAR */
    TIMER_COUNTER_0_T0F_SET_gc   = (0x01), /* Timer 0 Flag Bit - SET */
} TIMER_COUNTER_0_T0F_t;

/*
--------------------------------------------------------------------------------
TIMER_COUNTER_1 - 
--------------------------------------------------------------------------------
*/

typedef struct TIMER_COUNTER_1_struct
{
    register8_t rsv_0x00[58]; /* RESERVED REGISTER BLOCK */
    register8_t T1IFR;        /* Timer1 Interrupt Flag Register */
    register8_t rsv_0x3B[29]; /* RESERVED REGISTER BLOCK */
    register8_t T1CR;         /* Timer 1 Control Register */
} TIMER_COUNTER_1_t;


/* Timer 1 Enable Bit */
typedef enum TIMER_COUNTER_1_T1E_enum
{
    TIMER_COUNTER_1_T1E_CLEAR_gc = (0x00), /* Timer 1 Enable Bit - CLEAR */
    TIMER_COUNTER_1_T1E_SET_gc   = (0x80), /* Timer 1 Enable Bit - SET */
} TIMER_COUNTER_1_T1E_t;

/* Timer 1 Clock Select Bits */
#define TIMER_COUNTER_1_T1CR_T1CS_gc(x) ((x<<3) & 0x18)

/* Timer 1 Interrupt Enable Bit */
typedef enum TIMER_COUNTER_1_T1IE_enum
{
    TIMER_COUNTER_1_T1IE_CLEAR_gc = (0x00), /* Timer 1 Interrupt Enable Bit - CLEAR */
    TIMER_COUNTER_1_T1IE_SET_gc   = (0x04), /* Timer 1 Interrupt Enable Bit - SET */
} TIMER_COUNTER_1_T1IE_t;

/* Timer 1 Prescaler Select Bits */
#define TIMER_COUNTER_1_T1CR_T1PS_gc(x) (x & 0x03)

/* Timer 1 Flag Bit */
typedef enum TIMER_COUNTER_1_T1F_enum
{
    TIMER_COUNTER_1_T1F_CLEAR_gc = (0x00), /* Timer 1 Flag Bit - CLEAR */
    TIMER_COUNTER_1_T1F_SET_gc   = (0x01), /* Timer 1 Flag Bit - SET */
} TIMER_COUNTER_1_T1F_t;

/*
--------------------------------------------------------------------------------
TIMER_COUNTER_2 - 
--------------------------------------------------------------------------------
*/

typedef struct TIMER_COUNTER_2_struct
{
    register8_t rsv_0x00[49]; /* RESERVED REGISTER BLOCK */
    register8_t T2CR;         /* Timer 2 Control Register */
    register8_t rsv_0x32[9];  /* RESERVED REGISTER BLOCK */
    register8_t T2IFR;        /* Timer2 Interrupt Flag Register */
    register8_t rsv_0x3C[52]; /* RESERVED REGISTER BLOCK */
    register8_t T2CNT;        /* Timer 2 Counter Register */
    register8_t T2COR;        /* Timer2 Compare Register */
    register8_t rsv_0x72;     /* RESERVED REGISTER */
    register8_t T2MR;         /* Timer 2 Mode Register */
    register8_t T2IMR;        /* Timer 2 Interrupt Mask Register */
} TIMER_COUNTER_2_t;


/* Timer 2 Enable Bit */
typedef enum TIMER_COUNTER_2_T2E_enum
{
    TIMER_COUNTER_2_T2E_CLEAR_gc = (0x00), /* Timer 2 Enable Bit - CLEAR */
    TIMER_COUNTER_2_T2E_SET_gc   = (0x80), /* Timer 2 Enable Bit - SET */
} TIMER_COUNTER_2_T2E_t;

/* Timer 2 Toggle with Start Bit */
typedef enum TIMER_COUNTER_2_T2TS_enum
{
    TIMER_COUNTER_2_T2TS_CLEAR_gc = (0x00), /* Timer 2 Toggle with Start Bit - CLEAR */
    TIMER_COUNTER_2_T2TS_SET_gc   = (0x40), /* Timer 2 Toggle with Start Bit - SET */
} TIMER_COUNTER_2_T2TS_t;

/* Timer 2 Reset Bit */
typedef enum TIMER_COUNTER_2_T2RES_enum
{
    TIMER_COUNTER_2_T2RES_CLEAR_gc = (0x00), /* Timer 2 Reset Bit - CLEAR */
    TIMER_COUNTER_2_T2RES_SET_gc   = (0x20), /* Timer 2 Reset Bit - SET */
} TIMER_COUNTER_2_T2RES_t;

/* Toggle Output Preset Bit */
typedef enum TIMER_COUNTER_2_T2TOP_enum
{
    TIMER_COUNTER_2_T2TOP_CLEAR_gc = (0x00), /* Toggle Output Preset Bit - CLEAR */
    TIMER_COUNTER_2_T2TOP_SET_gc   = (0x10), /* Toggle Output Preset Bit - SET */
} TIMER_COUNTER_2_T2TOP_t;

/* Timer 2 Gap Reset Mask Bit */
typedef enum TIMER_COUNTER_2_T2GRM_enum
{
    TIMER_COUNTER_2_T2GRM_CLEAR_gc = (0x00), /* Timer 2 Gap Reset Mask Bit - CLEAR */
    TIMER_COUNTER_2_T2GRM_SET_gc   = (0x08), /* Timer 2 Gap Reset Mask Bit - SET */
} TIMER_COUNTER_2_T2GRM_t;

/* Timer2 Compare Reset Mask Bit */
typedef enum TIMER_COUNTER_2_T2CRM_enum
{
    TIMER_COUNTER_2_T2CRM_CLEAR_gc = (0x00), /* Timer2 Compare Reset Mask Bit - CLEAR */
    TIMER_COUNTER_2_T2CRM_SET_gc   = (0x04), /* Timer2 Compare Reset Mask Bit - SET */
} TIMER_COUNTER_2_T2CRM_t;

/* Timer 2 Compare Toggle Mask Bit */
typedef enum TIMER_COUNTER_2_T2CTM_enum
{
    TIMER_COUNTER_2_T2CTM_CLEAR_gc = (0x00), /* Timer 2 Compare Toggle Mask Bit - CLEAR */
    TIMER_COUNTER_2_T2CTM_SET_gc   = (0x02), /* Timer 2 Compare Toggle Mask Bit - SET */
} TIMER_COUNTER_2_T2CTM_t;

/* Timer 2 Overflow Toggle Mask Bit */
typedef enum TIMER_COUNTER_2_T2OTM_enum
{
    TIMER_COUNTER_2_T2OTM_CLEAR_gc = (0x00), /* Timer 2 Overflow Toggle Mask Bit - CLEAR */
    TIMER_COUNTER_2_T2OTM_SET_gc   = (0x01), /* Timer 2 Overflow Toggle Mask Bit - SET */
} TIMER_COUNTER_2_T2OTM_t;

/* Timer 2 Compare Flag Bit */
typedef enum TIMER_COUNTER_2_T2COF_enum
{
    TIMER_COUNTER_2_T2COF_CLEAR_gc = (0x00), /* Timer 2 Compare Flag Bit - CLEAR */
    TIMER_COUNTER_2_T2COF_SET_gc   = (0x02), /* Timer 2 Compare Flag Bit - SET */
} TIMER_COUNTER_2_T2COF_t;

/* Timer 2 Overflow Flag Bit */
typedef enum TIMER_COUNTER_2_T2OFF_enum
{
    TIMER_COUNTER_2_T2OFF_CLEAR_gc = (0x00), /* Timer 2 Overflow Flag Bit - CLEAR */
    TIMER_COUNTER_2_T2OFF_SET_gc   = (0x01), /* Timer 2 Overflow Flag Bit - SET */
} TIMER_COUNTER_2_T2OFF_t;

/* Timer 2 Compare Interrupt Mask Bit */
typedef enum TIMER_COUNTER_2_T2CIM_enum
{
    TIMER_COUNTER_2_T2CIM_CLEAR_gc = (0x00), /* Timer 2 Compare Interrupt Mask Bit - CLEAR */
    TIMER_COUNTER_2_T2CIM_SET_gc   = (0x02), /* Timer 2 Compare Interrupt Mask Bit - SET */
} TIMER_COUNTER_2_T2CIM_t;

/* Timer 2 Overflow Interrupt Mask Bit */
typedef enum TIMER_COUNTER_2_T2OIM_enum
{
    TIMER_COUNTER_2_T2OIM_CLEAR_gc = (0x00), /* Timer 2 Overflow Interrupt Mask Bit - CLEAR */
    TIMER_COUNTER_2_T2OIM_SET_gc   = (0x01), /* Timer 2 Overflow Interrupt Mask Bit - SET */
} TIMER_COUNTER_2_T2OIM_t;

/* Timer 2 Duty Cycle Bits */
#define TIMER_COUNTER_2_T2MR_T2D_gc(x) ((x<<6) & 0xC0)

/* Timer 2 Prescaler Select Bits */
#define TIMER_COUNTER_2_T2MR_T2PS_gc(x) ((x<<3) & 0x38)

/* Timer 2 Clock Select Bits */
#define TIMER_COUNTER_2_T2MR_T2CS_gc(x) (x & 0x07)

/*
--------------------------------------------------------------------------------
TIMER_COUNTER_3 - 
--------------------------------------------------------------------------------
*/

typedef struct TIMER_COUNTER_3_struct
{
    register8_t rsv_0x00[44]; /* RESERVED REGISTER BLOCK */
    register8_t T3CR2;        /* Timer3 Control Register 2 */
    register8_t rsv_0x2D[5];  /* RESERVED REGISTER BLOCK */
    register8_t T3CR;         /* Timer 3 Control Register */
    register8_t rsv_0x33[9];  /* RESERVED REGISTER BLOCK */
    register8_t T3IFR;        /* Timer3 Interrupt Flag Register */
    register8_t rsv_0x3D[56]; /* RESERVED REGISTER BLOCK */
    register8_t T3CO2R;       /* Timer3 COmpare2 Register */
    register8_t T3CNT;        /* Timer3 Counter Register */
    register8_t T3COR;        /* Timer3 COmpare Register */
    register8_t T3ICR;        /* Timer3 Input Capture Register */
    register8_t T3MRA;        /* Timer 3 Mode Register A */
    register8_t T3MRB;        /* Timer 3 Mode Register B */
    register8_t T3IMR;        /* Timer3 Interrupt Mask Register */
} TIMER_COUNTER_3_t;


/* Timer 3 Enable Bit */
typedef enum TIMER_COUNTER_3_T3E_enum
{
    TIMER_COUNTER_3_T3E_CLEAR_gc = (0x00), /* Timer 3 Enable Bit - CLEAR */
    TIMER_COUNTER_3_T3E_SET_gc   = (0x80), /* Timer 3 Enable Bit - SET */
} TIMER_COUNTER_3_T3E_t;

/* Timer 3 Capture Toggle Mask Bit */
typedef enum TIMER_COUNTER_3_T3CPTM_enum
{
    TIMER_COUNTER_3_T3CPTM_CLEAR_gc = (0x00), /* Timer 3 Capture Toggle Mask Bit - CLEAR */
    TIMER_COUNTER_3_T3CPTM_SET_gc   = (0x40), /* Timer 3 Capture Toggle Mask Bit - SET */
} TIMER_COUNTER_3_T3CPTM_t;

/* Timer 3 Reset Bit */
typedef enum TIMER_COUNTER_3_T3RES_enum
{
    TIMER_COUNTER_3_T3RES_CLEAR_gc = (0x00), /* Timer 3 Reset Bit - CLEAR */
    TIMER_COUNTER_3_T3RES_SET_gc   = (0x20), /* Timer 3 Reset Bit - SET */
} TIMER_COUNTER_3_T3RES_t;

/* Timer 3 Toggle Output Preset Bit */
typedef enum TIMER_COUNTER_3_T3TOP_enum
{
    TIMER_COUNTER_3_T3TOP_CLEAR_gc = (0x00), /* Timer 3 Toggle Output Preset Bit - CLEAR */
    TIMER_COUNTER_3_T3TOP_SET_gc   = (0x10), /* Timer 3 Toggle Output Preset Bit - SET */
} TIMER_COUNTER_3_T3TOP_t;

/* Timer 3 Capture Reset Mask Bit */
typedef enum TIMER_COUNTER_3_T3CPRM_enum
{
    TIMER_COUNTER_3_T3CPRM_CLEAR_gc = (0x00), /* Timer 3 Capture Reset Mask Bit - CLEAR */
    TIMER_COUNTER_3_T3CPRM_SET_gc   = (0x08), /* Timer 3 Capture Reset Mask Bit - SET */
} TIMER_COUNTER_3_T3CPRM_t;

/* Timer3 Compare Reset Mask Bit */
typedef enum TIMER_COUNTER_3_T3CRM_enum
{
    TIMER_COUNTER_3_T3CRM_CLEAR_gc = (0x00), /* Timer3 Compare Reset Mask Bit - CLEAR */
    TIMER_COUNTER_3_T3CRM_SET_gc   = (0x04), /* Timer3 Compare Reset Mask Bit - SET */
} TIMER_COUNTER_3_T3CRM_t;

/* Timer 3 Compare Toggle Mask Bit */
typedef enum TIMER_COUNTER_3_T3CTM_enum
{
    TIMER_COUNTER_3_T3CTM_CLEAR_gc = (0x00), /* Timer 3 Compare Toggle Mask Bit - CLEAR */
    TIMER_COUNTER_3_T3CTM_SET_gc   = (0x02), /* Timer 3 Compare Toggle Mask Bit - SET */
} TIMER_COUNTER_3_T3CTM_t;

/* Timer 3 Overflow Toggle Mask Bit */
typedef enum TIMER_COUNTER_3_T3OTM_enum
{
    TIMER_COUNTER_3_T3OTM_CLEAR_gc = (0x00), /* Timer 3 Overflow Toggle Mask Bit - CLEAR */
    TIMER_COUNTER_3_T3OTM_SET_gc   = (0x01), /* Timer 3 Overflow Toggle Mask Bit - SET */
} TIMER_COUNTER_3_T3OTM_t;

/* Timer 3 Compare 2 Reset Mask bit */
typedef enum TIMER_COUNTER_3_T3C2RM_enum
{
    TIMER_COUNTER_3_T3C2RM_CLEAR_gc = (0x00), /* Timer 3 Compare 2 Reset Mask bit - CLEAR */
    TIMER_COUNTER_3_T3C2RM_SET_gc   = (0x04), /* Timer 3 Compare 2 Reset Mask bit - SET */
} TIMER_COUNTER_3_T3C2RM_t;

/* Timer 3 Compare 2 Toggle Mask bit */
typedef enum TIMER_COUNTER_3_T3C2TM_enum
{
    TIMER_COUNTER_3_T3C2TM_CLEAR_gc = (0x00), /* Timer 3 Compare 2 Toggle Mask bit - CLEAR */
    TIMER_COUNTER_3_T3C2TM_SET_gc   = (0x02), /* Timer 3 Compare 2 Toggle Mask bit - SET */
} TIMER_COUNTER_3_T3C2TM_t;

/* Timer 3 Global Reset Bit */
typedef enum TIMER_COUNTER_3_T3GRES_enum
{
    TIMER_COUNTER_3_T3GRES_CLEAR_gc = (0x00), /* Timer 3 Global Reset Bit - CLEAR */
    TIMER_COUNTER_3_T3GRES_SET_gc   = (0x01), /* Timer 3 Global Reset Bit - SET */
} TIMER_COUNTER_3_T3GRES_t;

/* Timer 3 Input Capture Select Bits */
#define TIMER_COUNTER_3_T3MRA_T3ICS_gc(x) ((x<<6) & 0xC0)

/* Timer 3 Input Capture Noise Canceler Bit */
typedef enum TIMER_COUNTER_3_T3CNC_enum
{
    TIMER_COUNTER_3_T3CNC_CLEAR_gc = (0x00), /* Timer 3 Input Capture Noise Canceler Bit - CLEAR */
    TIMER_COUNTER_3_T3CNC_SET_gc   = (0x20), /* Timer 3 Input Capture Noise Canceler Bit - SET */
} TIMER_COUNTER_3_T3CNC_t;

/* Timer 3 Capture Edge select Bits */
#define TIMER_COUNTER_3_T3MRA_T3CE_gc(x) ((x<<3) & 0x18)

/* Timer 3 Software Capture Enable Bit */
typedef enum TIMER_COUNTER_3_T3SCE_enum
{
    TIMER_COUNTER_3_T3SCE_CLEAR_gc = (0x00), /* Timer 3 Software Capture Enable Bit - CLEAR */
    TIMER_COUNTER_3_T3SCE_SET_gc   = (0x04), /* Timer 3 Software Capture Enable Bit - SET */
} TIMER_COUNTER_3_T3SCE_t;

/* Timer 3 Clock Select Bits */
#define TIMER_COUNTER_3_T3MRA_T3CS_gc(x) (x & 0x03)

/* Timer3 Compare 2 Flag bit */
typedef enum TIMER_COUNTER_3_T3CO2F_enum
{
    TIMER_COUNTER_3_T3CO2F_CLEAR_gc = (0x00), /* Timer3 Compare 2 Flag bit - CLEAR */
    TIMER_COUNTER_3_T3CO2F_SET_gc   = (0x08), /* Timer3 Compare 2 Flag bit - SET */
} TIMER_COUNTER_3_T3CO2F_t;

/* Timer3 Input Capture Flag bit */
typedef enum TIMER_COUNTER_3_T3ICF_enum
{
    TIMER_COUNTER_3_T3ICF_CLEAR_gc = (0x00), /* Timer3 Input Capture Flag bit - CLEAR */
    TIMER_COUNTER_3_T3ICF_SET_gc   = (0x04), /* Timer3 Input Capture Flag bit - SET */
} TIMER_COUNTER_3_T3ICF_t;

/* Timer3 Compare Flag bit */
typedef enum TIMER_COUNTER_3_T3COF_enum
{
    TIMER_COUNTER_3_T3COF_CLEAR_gc = (0x00), /* Timer3 Compare Flag bit - CLEAR */
    TIMER_COUNTER_3_T3COF_SET_gc   = (0x02), /* Timer3 Compare Flag bit - SET */
} TIMER_COUNTER_3_T3COF_t;

/* Timer3 OverFlow Flag bit */
typedef enum TIMER_COUNTER_3_T3OFF_enum
{
    TIMER_COUNTER_3_T3OFF_CLEAR_gc = (0x00), /* Timer3 OverFlow Flag bit - CLEAR */
    TIMER_COUNTER_3_T3OFF_SET_gc   = (0x01), /* Timer3 OverFlow Flag bit - SET */
} TIMER_COUNTER_3_T3OFF_t;

/* Timer3 Compare 2 Interrupt Mask bit */
typedef enum TIMER_COUNTER_3_T3C2IM_enum
{
    TIMER_COUNTER_3_T3C2IM_CLEAR_gc = (0x00), /* Timer3 Compare 2 Interrupt Mask bit - CLEAR */
    TIMER_COUNTER_3_T3C2IM_SET_gc   = (0x08), /* Timer3 Compare 2 Interrupt Mask bit - SET */
} TIMER_COUNTER_3_T3C2IM_t;

/* Timer3 Capture Interrupt Mask bit */
typedef enum TIMER_COUNTER_3_T3CPIM_enum
{
    TIMER_COUNTER_3_T3CPIM_CLEAR_gc = (0x00), /* Timer3 Capture Interrupt Mask bit - CLEAR */
    TIMER_COUNTER_3_T3CPIM_SET_gc   = (0x04), /* Timer3 Capture Interrupt Mask bit - SET */
} TIMER_COUNTER_3_T3CPIM_t;

/* Timer3 Compare Interrupt Mask bit */
typedef enum TIMER_COUNTER_3_T3CIM_enum
{
    TIMER_COUNTER_3_T3CIM_CLEAR_gc = (0x00), /* Timer3 Compare Interrupt Mask bit - CLEAR */
    TIMER_COUNTER_3_T3CIM_SET_gc   = (0x02), /* Timer3 Compare Interrupt Mask bit - SET */
} TIMER_COUNTER_3_T3CIM_t;

/* Timer3 Overflow Interrupt Mask bit */
typedef enum TIMER_COUNTER_3_T3OIM_enum
{
    TIMER_COUNTER_3_T3OIM_CLEAR_gc = (0x00), /* Timer3 Overflow Interrupt Mask bit - CLEAR */
    TIMER_COUNTER_3_T3OIM_SET_gc   = (0x01), /* Timer3 Overflow Interrupt Mask bit - SET */
} TIMER_COUNTER_3_T3OIM_t;

/*
--------------------------------------------------------------------------------
RTC_TIMER - 
--------------------------------------------------------------------------------
*/

typedef struct RTC_TIMER_struct
{
    register8_t rsv_0x00[158]; /* RESERVED REGISTER BLOCK */
    register8_t RTCCR;         /* Real-Time Clock Control Register */
    register8_t RTCDR;         /* Real Time Clock Data Register */
} RTC_TIMER_t;


/* Real-Time Counter Reset Bit */
typedef enum RTC_TIMER_RTCR_enum
{
    RTC_TIMER_RTCR_CLEAR_gc = (0x00), /* Real-Time Counter Reset Bit - CLEAR */
    RTC_TIMER_RTCR_SET_gc   = (0x01), /* Real-Time Counter Reset Bit - SET */
} RTC_TIMER_RTCR_t;

/*
--------------------------------------------------------------------------------
WDT - Watchdog Timer
--------------------------------------------------------------------------------
*/

typedef struct WDT_struct
{
    register8_t rsv_0x00[96]; /* RESERVED REGISTER BLOCK */
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

/* Watch Dog Timer Prescaler Select bits */
#define WDT_WDTCR_WDPS_gc(x) (x & 0x07)

/*
--------------------------------------------------------------------------------
CRC - 
--------------------------------------------------------------------------------
*/

typedef struct CRC_struct
{
    register8_t rsv_0x00[172]; /* RESERVED REGISTER BLOCK */
    register8_t CRCPOL;        /* CRC Polynomial Data Register */
    register8_t CRCDR;         /* CRC Data Register */
    register8_t CRCCR;         /* CRC Control Register */
    register8_t CRCSR;         /* CRC Status Register */
} CRC_t;


/* CRC Reset Bit */
typedef enum CRC_CRCRS_enum
{
    CRC_CRCRS_CLEAR_gc = (0x00), /* CRC Reset Bit - CLEAR */
    CRC_CRCRS_SET_gc   = (0x80), /* CRC Reset Bit - SET */
} CRC_CRCRS_t;

/* Start VALue Bit */
typedef enum CRC_STVAL_enum
{
    CRC_STVAL_CLEAR_gc = (0x00), /* Start VALue Bit - CLEAR */
    CRC_STVAL_SET_gc   = (0x40), /* Start VALue Bit - SET */
} CRC_STVAL_t;

/* Reflect Output Data Bit */
typedef enum CRC_REFLO_enum
{
    CRC_REFLO_CLEAR_gc = (0x00), /* Reflect Output Data Bit - CLEAR */
    CRC_REFLO_SET_gc   = (0x20), /* Reflect Output Data Bit - SET */
} CRC_REFLO_t;

/* Reflect Input Data Bit */
typedef enum CRC_REFLI_enum
{
    CRC_REFLI_CLEAR_gc = (0x00), /* Reflect Input Data Bit - CLEAR */
    CRC_REFLI_SET_gc   = (0x10), /* Reflect Input Data Bit - SET */
} CRC_REFLI_t;

/* CRC Mode Select Bit */
typedef enum CRC_CRCSEL_enum
{
    CRC_CRCSEL_CLEAR_gc = (0x00), /* CRC Mode Select Bit - CLEAR */
    CRC_CRCSEL_SET_gc   = (0x08), /* CRC Mode Select Bit - SET */
} CRC_CRCSEL_t;

/* Partial CRC Computation Bits */
#define CRC_CRCCR_CRCN_gc(x) (x & 0x07)

/* CRC Busy Flag */
typedef enum CRC_CRCBF_enum
{
    CRC_CRCBF_CLEAR_gc = (0x00), /* CRC Busy Flag - CLEAR */
    CRC_CRCBF_SET_gc   = (0x01), /* CRC Busy Flag - SET */
} CRC_CRCBF_t;

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
================================================================================
IO Module Instances. Mapped to memory.
================================================================================
*/

#define SPI                (*(SPI_t *) 0x0000)                
#define CPU                (*(CPU_t *) 0x0000)                
#define AFE                (*(AFE_t *) 0x0000)                
#define DDDLFRX            (*(DDDLFRX_t *) 0x0000)            
#define IRLED              (*(IRLED_t *) 0x0000)              
#define AES                (*(AES_t *) 0x0000)                
#define MOD                (*(MOD_t *) 0x0000)                
#define VMON               (*(VMON_t *) 0x0000)               
#define EXTERNAL_INTERRUPT (*(EXTERNAL_INTERRUPT_t *) 0x0000) 
#define EEPROM             (*(EEPROM_t *) 0x0000)             
#define PORTB              (*(PORTB_t *) 0x0000)              
#define PORTD              (*(PORTD_t *) 0x0000)              
#define TIMER_COUNTER_0    (*(TIMER_COUNTER_0_t *) 0x0000)    
#define TIMER_COUNTER_1    (*(TIMER_COUNTER_1_t *) 0x0000)    
#define TIMER_COUNTER_2    (*(TIMER_COUNTER_2_t *) 0x0000)    
#define TIMER_COUNTER_3    (*(TIMER_COUNTER_3_t *) 0x0000)    
#define RTC_TIMER          (*(RTC_TIMER_t *) 0x0000)          
#define WDT                (*(WDT_t *) 0x0000)                /* Watchdog Timer */
#define CRC                (*(CRC_t *) 0x0000)                
#define PORTC              (*(PORTC_t *) 0x0000)              
#define FUSE               (*(FUSE_t *) 0x0000)               
#define LOCKBIT            (*(LOCKBIT_t *) 0x0000)            
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


/* DebugWIRE Enable */
#define FUSE_DWEN_CLEAR_gc (0x00) /* DebugWIRE Enable - CLEAR */
#define FUSE_DWEN_SET_gc   (0x40) /* DebugWIRE Enable - SET */


/* SPI Enable */
#define FUSE_SPIEN_CLEAR_gc (0x00) /* SPI Enable - CLEAR */
#define FUSE_SPIEN_SET_gc   (0x20) /* SPI Enable - SET */


/* Enable Watchdog Timer */
#define FUSE_WDTON_CLEAR_gc (0x00) /* Enable Watchdog Timer - CLEAR */
#define FUSE_WDTON_SET_gc   (0x10) /* Enable Watchdog Timer - SET */


/* Preserve EEPROM through the Chip Erase cycle */
#define FUSE_EESAVE_CLEAR_gc (0x00) /* Preserve EEPROM through the Chip Erase cycle - CLEAR */
#define FUSE_EESAVE_SET_gc   (0x08) /* Preserve EEPROM through the Chip Erase cycle - SET */


/* This fuse bit must be set.  */
#define FUSE_Reserved_CLEAR_gc (0x00) /* This fuse bit must be set.  - CLEAR */
#define FUSE_Reserved_SET_gc   (0x04) /* This fuse bit must be set.  - SET */


/* Enables the 32 kHz oscillator. */
#define FUSE__32OEN_CLEAR_gc (0x00) /* Enables the 32 kHz oscillator. - CLEAR */
#define FUSE__32OEN_SET_gc   (0x02) /* Enables the 32 kHz oscillator. - SET */


/*
--------------------------------------------------------------------------------
LOCKBIT - 
--------------------------------------------------------------------------------
*/


/* Memory Lock */
#define LOCKBIT_LB_VAL_0x00_gc (0x00) /* Further programming and verification disabled */
#define LOCKBIT_LB_VAL_0x02_gc (0x02) /* Further programming disabled */
#define LOCKBIT_LB_VAL_0x03_gc (0x03) /* No memory lock features enabled */


/* Boot Loader Protection Mode */
#define LOCKBIT_BLB0_VAL_0x00_gc (0x00<<2) /* LPM and SPM prohibited in Application Section */
#define LOCKBIT_BLB0_VAL_0x01_gc (0x01<<2) /* LPM prohibited in Application Section */
#define LOCKBIT_BLB0_VAL_0x02_gc (0x02<<2) /* SPM prohibited in Application Section */
#define LOCKBIT_BLB0_VAL_0x03_gc (0x03<<2) /* No lock on SPM and LPM in Application Section */


/* Boot Loader Protection Mode */
#define LOCKBIT_BLB1_VAL_0x00_gc (0x00<<4) /* LPM and SPM prohibited in Boot Section */
#define LOCKBIT_BLB1_VAL_0x01_gc (0x01<<4) /* LPM prohibited in Boot Section */
#define LOCKBIT_BLB1_VAL_0x02_gc (0x02<<4) /* SPM prohibited in Boot Section */
#define LOCKBIT_BLB1_VAL_0x03_gc (0x03<<4) /* No lock on SPM and LPM in Boot Section */


/*
--------------------------------------------------------------------------------
SPI - 
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
CPU - 
--------------------------------------------------------------------------------
*/


/* Clock Prescaler Change Enable Bit */
#define CPU_CLKPCE_CLEAR_gc (0x00) /* Clock Prescaler Change Enable Bit - CLEAR */
#define CPU_CLKPCE_SET_gc   (0x80) /* Clock Prescaler Change Enable Bit - SET */


/* Clock Timer Prescaler Select Bits */
#define CPU_CLKPR_CLTPS_gc(x) ((x<<3) & 0x38)

/* Clock system Prescaler Select Bits */
#define CPU_CLKPR_CLKPS_gc(x) (x & 0x07)

/* Clock Management Control Change Enable Bit */
#define CPU_CMCCE_CLEAR_gc (0x00) /* Clock Management Control Change Enable Bit - CLEAR */
#define CPU_CMCCE_SET_gc   (0x80) /* Clock Management Control Change Enable Bit - SET */


/* Clock Monitoring Enable Bit */
#define CPU_CMONEN_CLEAR_gc (0x00) /* Clock Monitoring Enable Bit - CLEAR */
#define CPU_CMONEN_SET_gc   (0x40) /* Clock Monitoring Enable Bit - SET */


/* External Clock Input Select Bit */
#define CPU_ECINS_CLEAR_gc (0x00) /* External Clock Input Select Bit - CLEAR */
#define CPU_ECINS_SET_gc   (0x20) /* External Clock Input Select Bit - SET */


/* Core Clock Select Bit */
#define CPU_CCS_CLEAR_gc (0x00) /* Core Clock Select Bit - CLEAR */
#define CPU_CCS_SET_gc   (0x10) /* Core Clock Select Bit - SET */


/* Crystal Oscillator 32 kHz Disable Bit */
#define CPU_CO32D_CLEAR_gc (0x00) /* Crystal Oscillator 32 kHz Disable Bit - CLEAR */
#define CPU_CO32D_SET_gc   (0x08) /* Crystal Oscillator 32 kHz Disable Bit - SET */


/* Slow RC-oscillator Disable Bit */
#define CPU_SRCD_CLEAR_gc (0x00) /* Slow RC-oscillator Disable Bit - CLEAR */
#define CPU_SRCD_SET_gc   (0x04) /* Slow RC-oscillator Disable Bit - SET */


/* Clock Management Mode Bitss */
#define CPU_CMCR_CMM_gc(x) (x & 0x03)

/* Real-Time Clock Flag */
#define CPU_RTCF_CLEAR_gc (0x00) /* Real-Time Clock Flag - CLEAR */
#define CPU_RTCF_SET_gc   (0x04) /* Real-Time Clock Flag - SET */


/* Slow Crystal Oscillator Flag */
#define CPU_SXF_CLEAR_gc (0x00) /* Slow Crystal Oscillator Flag - CLEAR */
#define CPU_SXF_SET_gc   (0x02) /* Slow Crystal Oscillator Flag - SET */


/* External Clock input Flag Bit */
#define CPU_ECF_CLEAR_gc (0x00) /* External Clock input Flag Bit - CLEAR */
#define CPU_ECF_SET_gc   (0x01) /* External Clock input Flag Bit - SET */


/* Real-Time Clock Interrupt Enable Bit */
#define CPU_RTCIE_CLEAR_gc (0x00) /* Real-Time Clock Interrupt Enable Bit - CLEAR */
#define CPU_RTCIE_SET_gc   (0x04) /* Real-Time Clock Interrupt Enable Bit - SET */


/* Slow Crystal Oscillator Interrupt Enable Bit */
#define CPU_SXIE_CLEAR_gc (0x00) /* Slow Crystal Oscillator Interrupt Enable Bit - CLEAR */
#define CPU_SXIE_SET_gc   (0x02) /* Slow Crystal Oscillator Interrupt Enable Bit - SET */


/* External Clock input Interrupt Enable Bit */
#define CPU_ECIE_CLEAR_gc (0x00) /* External Clock input Interrupt Enable Bit - CLEAR */
#define CPU_ECIE_SET_gc   (0x01) /* External Clock input Interrupt Enable Bit - SET */


/* Brown-Out Detection Level Select Bit */
#define CPU_BODLS_CLEAR_gc (0x00) /* Brown-Out Detection Level Select Bit - CLEAR */
#define CPU_BODLS_SET_gc   (0x80) /* Brown-Out Detection Level Select Bit - SET */


/* Brown-Out Detection on Power-Down Bit */
#define CPU_BODPD_CLEAR_gc (0x00) /* Brown-Out Detection on Power-Down Bit - CLEAR */
#define CPU_BODPD_SET_gc   (0x40) /* Brown-Out Detection on Power-Down Bit - SET */


/* Voltage Monitor Power supply Select Bit */
#define CPU_VMPS_CLEAR_gc (0x00) /* Voltage Monitor Power supply Select Bit - CLEAR */
#define CPU_VMPS_SET_gc   (0x20) /* Voltage Monitor Power supply Select Bit - SET */


/* Voltage Monitor Interrupt Mask Bit */
#define CPU_VMIM_CLEAR_gc (0x00) /* Voltage Monitor Interrupt Mask Bit - CLEAR */
#define CPU_VMIM_SET_gc   (0x10) /* Voltage Monitor Interrupt Mask Bit - SET */


/* Voltage Monitor Level Select Bits */
#define CPU_VMCR_VMLS_gc(x) (x & 0x0F)

/* Voltage Monitor Flag */
#define CPU_VMF_CLEAR_gc (0x00) /* Voltage Monitor Flag - CLEAR */
#define CPU_VMF_SET_gc   (0x01) /* Voltage Monitor Flag - SET */


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


/* Read-While-Write Section Busy */
#define CPU_RWWSB_CLEAR_gc (0x00) /* Read-While-Write Section Busy - CLEAR */
#define CPU_RWWSB_SET_gc   (0x40) /* Read-While-Write Section Busy - SET */


/* Signature Row Read Bit */
#define CPU_SIGRD_CLEAR_gc (0x00) /* Signature Row Read Bit - CLEAR */
#define CPU_SIGRD_SET_gc   (0x20) /* Signature Row Read Bit - SET */


/* Read-While-Write section read enable */
#define CPU_RWWSRE_CLEAR_gc (0x00) /* Read-While-Write section read enable - CLEAR */
#define CPU_RWWSRE_SET_gc   (0x10) /* Read-While-Write section read enable - SET */


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
#define CPU_SPMEN_CLEAR_gc (0x00) /* Self Programming Enable - CLEAR */
#define CPU_SPMEN_SET_gc   (0x01) /* Self Programming Enable - SET */


/* Pull-up Disable Flag */
#define CPU_PUD_CLEAR_gc (0x00) /* Pull-up Disable Flag - CLEAR */
#define CPU_PUD_SET_gc   (0x10) /* Pull-up Disable Flag - SET */


/* Interrupt Vector Select */
#define CPU_IVSEL_CLEAR_gc (0x00) /* Interrupt Vector Select - CLEAR */
#define CPU_IVSEL_SET_gc   (0x02) /* Interrupt Vector Select - SET */


/* Interrupt Vector Change Enable */
#define CPU_IVCE_CLEAR_gc (0x00) /* Interrupt Vector Change Enable - CLEAR */
#define CPU_IVCE_SET_gc   (0x01) /* Interrupt Vector Change Enable - SET */


/* TransPonder Reset Flag */
#define CPU_TPRF_CLEAR_gc (0x00) /* TransPonder Reset Flag - CLEAR */
#define CPU_TPRF_SET_gc   (0x20) /* TransPonder Reset Flag - SET */


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


/* Sleep Mode Select Bit2 */
#define CPU_SM_IDLE_gc     (0x00<<1) /* Idle */
#define CPU_SM_EPSAVE_gc   (0x01<<1) /* Extended power-save */
#define CPU_SM_PDOWN_gc    (0x02<<1) /* Power Down */
#define CPU_SM_PSAVE_gc    (0x03<<1) /* Power Save */
#define CPU_SM_VAL_0x04_gc (0x04<<1) /* Reserved */
#define CPU_SM_VAL_0x05_gc (0x05<<1) /* Reserved */
#define CPU_SM_VAL_0x06_gc (0x06<<1) /* Reserved */
#define CPU_SM_VAL_0x07_gc (0x07<<1) /* Reserved */


/* Sleep Enable Bit */
#define CPU_SE_CLEAR_gc (0x00) /* Sleep Enable Bit - CLEAR */
#define CPU_SE_SET_gc   (0x01) /* Sleep Enable Bit - SET */


/* Power Reduction Voltage Monitor */
#define CPU_PRVM_CLEAR_gc (0x00) /* Power Reduction Voltage Monitor - CLEAR */
#define CPU_PRVM_SET_gc   (0x80) /* Power Reduction Voltage Monitor - SET */


/* Power Reduction IR Driver Stage */
#define CPU_PRDS_CLEAR_gc (0x00) /* Power Reduction IR Driver Stage - CLEAR */
#define CPU_PRDS_SET_gc   (0x40) /* Power Reduction IR Driver Stage - SET */


/* Power Reduction Crypto Unit */
#define CPU_PRCU_CLEAR_gc (0x00) /* Power Reduction Crypto Unit - CLEAR */
#define CPU_PRCU_SET_gc   (0x20) /* Power Reduction Crypto Unit - SET */


/* Power Reduction Timer Modulator */
#define CPU_PRTM_CLEAR_gc (0x00) /* Power Reduction Timer Modulator - CLEAR */
#define CPU_PRTM_SET_gc   (0x10) /* Power Reduction Timer Modulator - SET */


/* Power Reduction Timer3 */
#define CPU_PRT3_CLEAR_gc (0x00) /* Power Reduction Timer3 - CLEAR */
#define CPU_PRT3_SET_gc   (0x08) /* Power Reduction Timer3 - SET */


/* Power Reduction Timer2 */
#define CPU_PRT2_CLEAR_gc (0x00) /* Power Reduction Timer2 - CLEAR */
#define CPU_PRT2_SET_gc   (0x04) /* Power Reduction Timer2 - SET */


/* Power Reduction Timer1 */
#define CPU_PRT1_CLEAR_gc (0x00) /* Power Reduction Timer1 - CLEAR */
#define CPU_PRT1_SET_gc   (0x02) /* Power Reduction Timer1 - SET */


/* Power Reduction LF-Receiver Interface */
#define CPU_PRLFR_CLEAR_gc (0x00) /* Power Reduction LF-Receiver Interface - CLEAR */
#define CPU_PRLFR_SET_gc   (0x01) /* Power Reduction LF-Receiver Interface - SET */


/* Power Reduction Serial Peripheral Interface */
#define CPU_PRSPI_CLEAR_gc (0x00) /* Power Reduction Serial Peripheral Interface - CLEAR */
#define CPU_PRSPI_SET_gc   (0x02) /* Power Reduction Serial Peripheral Interface - SET */


/* Power Reduction Contactless Interface */
#define CPU_PRCI_CLEAR_gc (0x00) /* Power Reduction Contactless Interface - CLEAR */
#define CPU_PRCI_SET_gc   (0x01) /* Power Reduction Contactless Interface - SET */


/*
--------------------------------------------------------------------------------
AFE - 
--------------------------------------------------------------------------------
*/


/* Transponder Disable Bit */
#define AFE_TPD_CLEAR_gc (0x00) /* Transponder Disable Bit - CLEAR */
#define AFE_TPD_SET_gc   (0x80) /* Transponder Disable Bit - SET */


/* Transponder Power Switch Disable Bit */
#define AFE_TPPSD_CLEAR_gc (0x00) /* Transponder Power Switch Disable Bit - CLEAR */
#define AFE_TPPSD_SET_gc   (0x40) /* Transponder Power Switch Disable Bit - SET */


/* Transponder Modulation Damping level select Bit1 */
#define AFE_TPCR_TPMD_gc(x) ((x<<4) & 0x30)

/* Transponder Modulation Select Bits */
#define AFE_TPCR_TPMS_gc(x) ((x<<2) & 0x0C)

/* Transponder Modulator Bit */
#define AFE_TPMOD_CLEAR_gc (0x00) /* Transponder Modulator Bit - CLEAR */
#define AFE_TPMOD_SET_gc   (0x02) /* Transponder Modulator Bit - SET */


/* Transponder Mode Acknowledgment Bit */
#define AFE_TPMA_CLEAR_gc (0x00) /* Transponder Mode Acknowledgment Bit - CLEAR */
#define AFE_TPMA_SET_gc   (0x01) /* Transponder Mode Acknowledgment Bit - SET */


/* Transponder Interrupt Mask Bit */
#define AFE_TPIM_CLEAR_gc (0x00) /* Transponder Interrupt Mask Bit - CLEAR */
#define AFE_TPIM_SET_gc   (0x01) /* Transponder Interrupt Mask Bit - SET */


/* Transponder Power Switch Bit */
#define AFE_TPPSW_CLEAR_gc (0x00) /* Transponder Power Switch Bit - CLEAR */
#define AFE_TPPSW_SET_gc   (0x08) /* Transponder Power Switch Bit - SET */


/* Transponder Gap Signal Bit */
#define AFE_TPGAP_CLEAR_gc (0x00) /* Transponder Gap Signal Bit - CLEAR */
#define AFE_TPGAP_SET_gc   (0x04) /* Transponder Gap Signal Bit - SET */


/* Transponder Active Bit */
#define AFE_TPA_CLEAR_gc (0x00) /* Transponder Active Bit - CLEAR */
#define AFE_TPA_SET_gc   (0x02) /* Transponder Active Bit - SET */


/* Transponder Flag */
#define AFE_TPF_CLEAR_gc (0x00) /* Transponder Flag - CLEAR */
#define AFE_TPF_SET_gc   (0x01) /* Transponder Flag - SET */


/*
--------------------------------------------------------------------------------
DDDLFRX - 
--------------------------------------------------------------------------------
*/


/* LF Receiver Quality ????? */
#define DDDLFRX_LFQCLL_CLEAR_gc (0x00) /* LF Receiver Quality ????? - CLEAR */
#define DDDLFRX_LFQCLL_SET_gc   (0x01) /* LF Receiver Quality ????? - SET */


/* LF Receiver Velocity Control Bits */
#define DDDLFRX_LFCR0_LFVC_gc(x) ((x<<6) & 0xC0)

/* LF receiver Max Gain Bit */
#define DDDLFRX_LFMG_CLEAR_gc (0x00) /* LF receiver Max Gain Bit - CLEAR */
#define DDDLFRX_LFMG_SET_gc   (0x20) /* LF receiver Max Gain Bit - SET */


/* LF Receiver Buffer Data Frame Select Bit */
#define DDDLFRX_LFRBS_CLEAR_gc (0x00) /* LF Receiver Buffer Data Frame Select Bit - CLEAR */
#define DDDLFRX_LFRBS_SET_gc   (0x10) /* LF Receiver Buffer Data Frame Select Bit - SET */


/* LF receiver Baud Rate Select Bit */
#define DDDLFRX_LFBRS_CLEAR_gc (0x00) /* LF receiver Baud Rate Select Bit - CLEAR */
#define DDDLFRX_LFBRS_SET_gc   (0x08) /* LF receiver Baud Rate Select Bit - SET */


/* LF receiver Channel Enable Bits */
#define DDDLFRX_LFCR0_LFCE_gc(x) (x & 0x07)

/* LF Receiver Enable Bit */
#define DDDLFRX_LFRE_CLEAR_gc (0x00) /* LF Receiver Enable Bit - CLEAR */
#define DDDLFRX_LFRE_SET_gc   (0x80) /* LF Receiver Enable Bit - SET */


/* LF Receiver Quality Check Bit */
#define DDDLFRX_LFQCE_CLEAR_gc (0x00) /* LF Receiver Quality Check Bit - CLEAR */
#define DDDLFRX_LFQCE_SET_gc   (0x40) /* LF Receiver Quality Check Bit - SET */


/* LF receiver Rssi Measurement Start Additional Bit */
#define DDDLFRX_LFRMSA_CLEAR_gc (0x00) /* LF receiver Rssi Measurement Start Additional Bit - CLEAR */
#define DDDLFRX_LFRMSA_SET_gc   (0x20) /* LF receiver Rssi Measurement Start Additional Bit - SET */


/* LF receiver RSSI Measurement Start Bit */
#define DDDLFRX_LFRMS_CLEAR_gc (0x00) /* LF receiver RSSI Measurement Start Bit - CLEAR */
#define DDDLFRX_LFRMS_SET_gc   (0x10) /* LF receiver RSSI Measurement Start Bit - SET */


/* LF Function Mode Bits */
#define DDDLFRX_LFCR1_LFFM_gc(x) ((x<<2) & 0x0C)

/* LF Mode Bits */
#define DDDLFRX_LFCR1_LFM_gc(x) (x & 0x03)

/* Identifier 0 Enable Bit */
#define DDDLFRX_ID0E_CLEAR_gc (0x00) /* Identifier 0 Enable Bit - CLEAR */
#define DDDLFRX_ID0E_SET_gc   (0x80) /* Identifier 0 Enable Bit - SET */


/* Identifier 0 Frame Select Bits */
#define DDDLFRX_LFID0M_ID0FS_gc(x) (x & 0x1F)

/* Identifier 1 Enable Bit */
#define DDDLFRX_ID1E_CLEAR_gc (0x00) /* Identifier 1 Enable Bit - CLEAR */
#define DDDLFRX_ID1E_SET_gc   (0x80) /* Identifier 1 Enable Bit - SET */


/* Identifier 1 Frame Select Bits */
#define DDDLFRX_LFID1M_ID1FS_gc(x) (x & 0x1F)

/* Receive Data Frame Enable Bit */
#define DDDLFRX_RDFE_CLEAR_gc (0x00) /* Receive Data Frame Enable Bit - CLEAR */
#define DDDLFRX_RDFE_SET_gc   (0x80) /* Receive Data Frame Enable Bit - SET */


/* Receive Data Frame Select Bits */
#define DDDLFRX_LFRDF_RDFS_gc(x) (x & 0x1F)

/* LF Manchester Decoder Error Interrupt Mask Bit */
#define DDDLFRX_LFMDIM_CLEAR_gc (0x00) /* LF Manchester Decoder Error Interrupt Mask Bit - CLEAR */
#define DDDLFRX_LFMDIM_SET_gc   (0x40) /* LF Manchester Decoder Error Interrupt Mask Bit - SET */


/* LF Signal Detected Interrupt Mask Bit */
#define DDDLFRX_LFSDIM_CLEAR_gc (0x00) /* LF Signal Detected Interrupt Mask Bit - CLEAR */
#define DDDLFRX_LFSDIM_SET_gc   (0x20) /* LF Signal Detected Interrupt Mask Bit - SET */


/* LF RSSI Data Interrupt Mask Bit */
#define DDDLFRX_LFRSIM_CLEAR_gc (0x00) /* LF RSSI Data Interrupt Mask Bit - CLEAR */
#define DDDLFRX_LFRSIM_SET_gc   (0x10) /* LF RSSI Data Interrupt Mask Bit - SET */


/* LF Receiver Data Buffer Interrupt Mask Bit */
#define DDDLFRX_LFDBIM_CLEAR_gc (0x00) /* LF Receiver Data Buffer Interrupt Mask Bit - CLEAR */
#define DDDLFRX_LFDBIM_SET_gc   (0x08) /* LF Receiver Data Buffer Interrupt Mask Bit - SET */


/* LF Receiver Frame End Interrupt Mask Bit */
#define DDDLFRX_LFFEIM_CLEAR_gc (0x00) /* LF Receiver Frame End Interrupt Mask Bit - CLEAR */
#define DDDLFRX_LFFEIM_SET_gc   (0x04) /* LF Receiver Frame End Interrupt Mask Bit - SET */


/* LF Identifier 1 Interrupt Mask Bit */
#define DDDLFRX_LFID1IM_CLEAR_gc (0x00) /* LF Identifier 1 Interrupt Mask Bit - CLEAR */
#define DDDLFRX_LFID1IM_SET_gc   (0x02) /* LF Identifier 1 Interrupt Mask Bit - SET */


/* LF Identifier 0 Interrupt Mask Bit */
#define DDDLFRX_LFID0IM_CLEAR_gc (0x00) /* LF Identifier 0 Interrupt Mask Bit - CLEAR */
#define DDDLFRX_LFID0IM_SET_gc   (0x01) /* LF Identifier 0 Interrupt Mask Bit - SET */


/* LF Clock Adjustment Flag */
#define DDDLFRX_LFCAF_CLEAR_gc (0x00) /* LF Clock Adjustment Flag - CLEAR */
#define DDDLFRX_LFCAF_SET_gc   (0x80) /* LF Clock Adjustment Flag - SET */


/* LF Manchester Decoder Error Flag */
#define DDDLFRX_LFMDF_CLEAR_gc (0x00) /* LF Manchester Decoder Error Flag - CLEAR */
#define DDDLFRX_LFMDF_SET_gc   (0x40) /* LF Manchester Decoder Error Flag - SET */


/* LF Signal Detect Flag */
#define DDDLFRX_LFSDF_CLEAR_gc (0x00) /* LF Signal Detect Flag - CLEAR */
#define DDDLFRX_LFSDF_SET_gc   (0x20) /* LF Signal Detect Flag - SET */


/* LF RSSI Data Flag */
#define DDDLFRX_LFRSF_CLEAR_gc (0x00) /* LF RSSI Data Flag - CLEAR */
#define DDDLFRX_LFRSF_SET_gc   (0x10) /* LF RSSI Data Flag - SET */


/* LF Data Buffer Full Flag */
#define DDDLFRX_LFDBF_CLEAR_gc (0x00) /* LF Data Buffer Full Flag - CLEAR */
#define DDDLFRX_LFDBF_SET_gc   (0x08) /* LF Data Buffer Full Flag - SET */


/* LF Frame End Flag */
#define DDDLFRX_LFFEF_CLEAR_gc (0x00) /* LF Frame End Flag - CLEAR */
#define DDDLFRX_LFFEF_SET_gc   (0x04) /* LF Frame End Flag - SET */


/* LF Identifier 1 Flag */
#define DDDLFRX_LFID1F_CLEAR_gc (0x00) /* LF Identifier 1 Flag - CLEAR */
#define DDDLFRX_LFID1F_SET_gc   (0x02) /* LF Identifier 1 Flag - SET */


/* LF Identifier 0 Flag */
#define DDDLFRX_LFID0F_CLEAR_gc (0x00) /* LF Identifier 0 Flag - CLEAR */
#define DDDLFRX_LFID0F_SET_gc   (0x01) /* LF Identifier 0 Flag - SET */


/* LF Signal Data Bit */
#define DDDLFRX_LFSD_CLEAR_gc (0x00) /* LF Signal Data Bit - CLEAR */
#define DDDLFRX_LFSD_SET_gc   (0x02) /* LF Signal Data Bit - SET */


/* LF Envelope Signal Bit */
#define DDDLFRX_LFES_CLEAR_gc (0x00) /* LF Envelope Signal Bit - CLEAR */
#define DDDLFRX_LFES_SET_gc   (0x01) /* LF Envelope Signal Bit - SET */


/*
--------------------------------------------------------------------------------
IRLED - 
--------------------------------------------------------------------------------
*/


/* LED Driver Current Select Bits */
#define IRLED_LDCR_LDCS_gc(x) ((x<<1) & 0x06)

/* LED Driver Enable Bit */
#define IRLED_LDE_CLEAR_gc (0x00) /* LED Driver Enable Bit - CLEAR */
#define IRLED_LDE_SET_gc   (0x01) /* LED Driver Enable Bit - SET */


/*
--------------------------------------------------------------------------------
AES - 
--------------------------------------------------------------------------------
*/


/* AES Enable Bit */
#define AES_AESE_CLEAR_gc (0x00) /* AES Enable Bit - CLEAR */
#define AES_AESE_SET_gc   (0x80) /* AES Enable Bit - SET */


/* AES Reset Bit */
#define AES_AESRES_CLEAR_gc (0x00) /* AES Reset Bit - CLEAR */
#define AES_AESRES_SET_gc   (0x20) /* AES Reset Bit - SET */


/* AES State XOR load bit */
#define AES_AESXOR_CLEAR_gc (0x00) /* AES State XOR load bit - CLEAR */
#define AES_AESXOR_SET_gc   (0x10) /* AES State XOR load bit - SET */


/* AES Direction Bit */
#define AES_AESD_CLEAR_gc (0x00) /* AES Direction Bit - CLEAR */
#define AES_AESD_SET_gc   (0x08) /* AES Direction Bit - SET */


/* AES Interrupt Mask Bit */
#define AES_AESIM_CLEAR_gc (0x00) /* AES Interrupt Mask Bit - CLEAR */
#define AES_AESIM_SET_gc   (0x04) /* AES Interrupt Mask Bit - SET */


/* AES Write Data Bit */
#define AES_AESWD_CLEAR_gc (0x00) /* AES Write Data Bit - CLEAR */
#define AES_AESWD_SET_gc   (0x02) /* AES Write Data Bit - SET */


/* AES Write Key Bit */
#define AES_AESWK_CLEAR_gc (0x00) /* AES Write Key Bit - CLEAR */
#define AES_AESWK_SET_gc   (0x01) /* AES Write Key Bit - SET */


/* AES Error Flag Bit */
#define AES_AESERF_CLEAR_gc (0x00) /* AES Error Flag Bit - CLEAR */
#define AES_AESERF_SET_gc   (0x80) /* AES Error Flag Bit - SET */


/* AES Ready Flag Bit */
#define AES_AESRF_CLEAR_gc (0x00) /* AES Ready Flag Bit - CLEAR */
#define AES_AESRF_SET_gc   (0x01) /* AES Ready Flag Bit - SET */


/*
--------------------------------------------------------------------------------
MOD - 
--------------------------------------------------------------------------------
*/


/* Timer Modulator SSI Enable Bit */
#define MOD_TMSSIE_CLEAR_gc (0x00) /* Timer Modulator SSI Enable Bit - CLEAR */
#define MOD_TMSSIE_SET_gc   (0x80) /* Timer Modulator SSI Enable Bit - SET */


/* Timer Modulator Clock Polarity for SSI shift clock */
#define MOD_TMCPOL_CLEAR_gc (0x00) /* Timer Modulator Clock Polarity for SSI shift clock - CLEAR */
#define MOD_TMCPOL_SET_gc   (0x40) /* Timer Modulator Clock Polarity for SSI shift clock - SET */


/* Modulator Interface 4 Select Bits */
#define MOD_TMCR_MI4S_gc(x) ((x<<4) & 0x30)

/* Modulator Interface 2 Select Bits */
#define MOD_TMCR_MI2S_gc(x) ((x<<2) & 0x0C)

/* Modulator Interface 1 Select Bits */
#define MOD_TMCR_MI1S_gc(x) (x & 0x03)

/* Timer Modulator 1/2 output Select bit */
#define MOD_TM12S_CLEAR_gc (0x00) /* Timer Modulator 1/2 output Select bit - CLEAR */
#define MOD_TM12S_SET_gc   (0x80) /* Timer Modulator 1/2 output Select bit - SET */


/* Timer Modulator Mode Select Bits */
#define MOD_TMMR_TMMS_gc(x) ((x<<5) & 0x60)

/* Modulator OUT signal Complement Bit */
#define MOD_MOUTC_CLEAR_gc (0x00) /* Modulator OUT signal Complement Bit - CLEAR */
#define MOD_MOUTC_SET_gc   (0x10) /* Modulator OUT signal Complement Bit - SET */


/* Modulator Shift Clock Select Bits */
#define MOD_TMMR_MSCS_gc(x) ((x<<2) & 0x0C)

/* Modulator Output Select Bits */
#define MOD_TMMR_MOS_gc(x) (x & 0x03)

/* Timer Modulator SSI Transmit Status Bit */
#define MOD_TMTXS_CLEAR_gc (0x00) /* Timer Modulator SSI Transmit Status Bit - CLEAR */
#define MOD_TMTXS_SET_gc   (0x10) /* Timer Modulator SSI Transmit Status Bit - SET */


/* Timer Modulator SSI Receive Status Bit */
#define MOD_TMRXS_CLEAR_gc (0x00) /* Timer Modulator SSI Receive Status Bit - CLEAR */
#define MOD_TMRXS_SET_gc   (0x08) /* Timer Modulator SSI Receive Status Bit - SET */


/* Timer Modulator SSI Transmit Complete Flag Bit */
#define MOD_TMTCF_CLEAR_gc (0x00) /* Timer Modulator SSI Transmit Complete Flag Bit - CLEAR */
#define MOD_TMTCF_SET_gc   (0x04) /* Timer Modulator SSI Transmit Complete Flag Bit - SET */


/* Timer Modulator SSI Transmit Flag Bit */
#define MOD_TMTXF_CLEAR_gc (0x00) /* Timer Modulator SSI Transmit Flag Bit - CLEAR */
#define MOD_TMTXF_SET_gc   (0x02) /* Timer Modulator SSI Transmit Flag Bit - SET */


/* Timer Modulator SSI Receive Flag Bit */
#define MOD_TMRXF_CLEAR_gc (0x00) /* Timer Modulator SSI Receive Flag Bit - CLEAR */
#define MOD_TMRXF_SET_gc   (0x01) /* Timer Modulator SSI Receive Flag Bit - SET */


/* Timer Modulator SSI Transmit Complete Interrupt Mask Bit */
#define MOD_TMTCIM_CLEAR_gc (0x00) /* Timer Modulator SSI Transmit Complete Interrupt Mask Bit - CLEAR */
#define MOD_TMTCIM_SET_gc   (0x04) /* Timer Modulator SSI Transmit Complete Interrupt Mask Bit - SET */


/* Timer Modulator SSI Transmit Interrupt Mask Bit */
#define MOD_TMTXIM_CLEAR_gc (0x00) /* Timer Modulator SSI Transmit Interrupt Mask Bit - CLEAR */
#define MOD_TMTXIM_SET_gc   (0x02) /* Timer Modulator SSI Transmit Interrupt Mask Bit - SET */


/* Timer Modulator SSI Receive Interrupt Mask Bit */
#define MOD_TMRXIM_CLEAR_gc (0x00) /* Timer Modulator SSI Receive Interrupt Mask Bit - CLEAR */
#define MOD_TMRXIM_SET_gc   (0x01) /* Timer Modulator SSI Receive Interrupt Mask Bit - SET */


/*
--------------------------------------------------------------------------------
VMON - 
--------------------------------------------------------------------------------
*/


/* Brown-Out Detection Level Bit */
#define VMON_BODLS_CLEAR_gc (0x00) /* Brown-Out Detection Level Bit - CLEAR */
#define VMON_BODLS_SET_gc   (0x80) /* Brown-Out Detection Level Bit - SET */


/* Brown-Out Detection on Power-Down Bit */
#define VMON_BODPD_CLEAR_gc (0x00) /* Brown-Out Detection on Power-Down Bit - CLEAR */
#define VMON_BODPD_SET_gc   (0x40) /* Brown-Out Detection on Power-Down Bit - SET */


/* Voltage Monitor Power Supply Voltage Select Bit */
#define VMON_VMPS_CLEAR_gc (0x00) /* Voltage Monitor Power Supply Voltage Select Bit - CLEAR */
#define VMON_VMPS_SET_gc   (0x20) /* Voltage Monitor Power Supply Voltage Select Bit - SET */


/* Voltag Monitor Interrupt Mask bit */
#define VMON_VMIM_CLEAR_gc (0x00) /* Voltag Monitor Interrupt Mask bit - CLEAR */
#define VMON_VMIM_SET_gc   (0x10) /* Voltag Monitor Interrupt Mask bit - SET */


/* Voltage Monitor Level Select Bits */
#define VMON_VMCR_VMLS_gc(x) (x & 0x0F)

/* Voltage Monitor Flag */
#define VMON_VMF_CLEAR_gc (0x00) /* Voltage Monitor Flag - CLEAR */
#define VMON_VMF_SET_gc   (0x01) /* Voltage Monitor Flag - SET */


/*
--------------------------------------------------------------------------------
EXTERNAL_INTERRUPT - 
--------------------------------------------------------------------------------
*/


/* External Interrupt Sense Control 0 Bit 1 */
#define EXTERNAL_INTERRUPT_ISC01_CLEAR_gc (0x00) /* External Interrupt Sense Control 0 Bit 1 - CLEAR */
#define EXTERNAL_INTERRUPT_ISC01_SET_gc   (0x02) /* External Interrupt Sense Control 0 Bit 1 - SET */


/* External Interrupt Sense Control 0 Bit 0 */
#define EXTERNAL_INTERRUPT_ISC00_CLEAR_gc (0x00) /* External Interrupt Sense Control 0 Bit 0 - CLEAR */
#define EXTERNAL_INTERRUPT_ISC00_SET_gc   (0x01) /* External Interrupt Sense Control 0 Bit 0 - SET */


/* External Interrupt Request 0 Enable */
#define EXTERNAL_INTERRUPT_INT0_CLEAR_gc (0x00) /* External Interrupt Request 0 Enable - CLEAR */
#define EXTERNAL_INTERRUPT_INT0_SET_gc   (0x01) /* External Interrupt Request 0 Enable - SET */


/* External Interrupt Flag 0 */
#define EXTERNAL_INTERRUPT_INTF0_CLEAR_gc (0x00) /* External Interrupt Flag 0 - CLEAR */
#define EXTERNAL_INTERRUPT_INTF0_SET_gc   (0x01) /* External Interrupt Flag 0 - SET */


/*
--------------------------------------------------------------------------------
EEPROM - 
--------------------------------------------------------------------------------
*/


/* Non-volatile memory busy */
#define EEPROM_NVMBSY_CLEAR_gc (0x00) /* Non-volatile memory busy - CLEAR */
#define EEPROM_NVMBSY_SET_gc   (0x80) /* Non-volatile memory busy - SET */


/* EEPROM Low Power Pump Enable Bit */
#define EEPROM_EELP_CLEAR_gc (0x00) /* EEPROM Low Power Pump Enable Bit - CLEAR */
#define EEPROM_EELP_SET_gc   (0x40) /* EEPROM Low Power Pump Enable Bit - SET */


/* EEPROM Programming Mode Bits */
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


/* EEPROM Page Access */
#define EEPROM_EEPAGE_CLEAR_gc (0x00) /* EEPROM Page Access - CLEAR */
#define EEPROM_EEPAGE_SET_gc   (0x02) /* EEPROM Page Access - SET */


/* EEPROM Burst Read Enable bit */
#define EEPROM_EEBRE_CLEAR_gc (0x00) /* EEPROM Burst Read Enable bit - CLEAR */
#define EEPROM_EEBRE_SET_gc   (0x01) /* EEPROM Burst Read Enable bit - SET */


/*
--------------------------------------------------------------------------------
PORTB - 
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
PORTD - 
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
TIMER_COUNTER_0 - 
--------------------------------------------------------------------------------
*/


/* Timer 0 Prescaler Reset Bit */
#define TIMER_COUNTER_0_T0PR_CLEAR_gc (0x00) /* Timer 0 Prescaler Reset Bit - CLEAR */
#define TIMER_COUNTER_0_T0PR_SET_gc   (0x10) /* Timer 0 Prescaler Reset Bit - SET */


/* Timer 0 Interrupt Enable Bit */
#define TIMER_COUNTER_0_T0IE_CLEAR_gc (0x00) /* Timer 0 Interrupt Enable Bit - CLEAR */
#define TIMER_COUNTER_0_T0IE_SET_gc   (0x08) /* Timer 0 Interrupt Enable Bit - SET */


/* Timer 0 Prescaler Select Bits */
#define TIMER_COUNTER_0_T0CR_T0PS_gc(x) (x & 0x07)

/* Timer 0 Flag Bit */
#define TIMER_COUNTER_0_T0F_CLEAR_gc (0x00) /* Timer 0 Flag Bit - CLEAR */
#define TIMER_COUNTER_0_T0F_SET_gc   (0x01) /* Timer 0 Flag Bit - SET */


/*
--------------------------------------------------------------------------------
TIMER_COUNTER_1 - 
--------------------------------------------------------------------------------
*/


/* Timer 1 Enable Bit */
#define TIMER_COUNTER_1_T1E_CLEAR_gc (0x00) /* Timer 1 Enable Bit - CLEAR */
#define TIMER_COUNTER_1_T1E_SET_gc   (0x80) /* Timer 1 Enable Bit - SET */


/* Timer 1 Clock Select Bits */
#define TIMER_COUNTER_1_T1CR_T1CS_gc(x) ((x<<3) & 0x18)

/* Timer 1 Interrupt Enable Bit */
#define TIMER_COUNTER_1_T1IE_CLEAR_gc (0x00) /* Timer 1 Interrupt Enable Bit - CLEAR */
#define TIMER_COUNTER_1_T1IE_SET_gc   (0x04) /* Timer 1 Interrupt Enable Bit - SET */


/* Timer 1 Prescaler Select Bits */
#define TIMER_COUNTER_1_T1CR_T1PS_gc(x) (x & 0x03)

/* Timer 1 Flag Bit */
#define TIMER_COUNTER_1_T1F_CLEAR_gc (0x00) /* Timer 1 Flag Bit - CLEAR */
#define TIMER_COUNTER_1_T1F_SET_gc   (0x01) /* Timer 1 Flag Bit - SET */


/*
--------------------------------------------------------------------------------
TIMER_COUNTER_2 - 
--------------------------------------------------------------------------------
*/


/* Timer 2 Enable Bit */
#define TIMER_COUNTER_2_T2E_CLEAR_gc (0x00) /* Timer 2 Enable Bit - CLEAR */
#define TIMER_COUNTER_2_T2E_SET_gc   (0x80) /* Timer 2 Enable Bit - SET */


/* Timer 2 Toggle with Start Bit */
#define TIMER_COUNTER_2_T2TS_CLEAR_gc (0x00) /* Timer 2 Toggle with Start Bit - CLEAR */
#define TIMER_COUNTER_2_T2TS_SET_gc   (0x40) /* Timer 2 Toggle with Start Bit - SET */


/* Timer 2 Reset Bit */
#define TIMER_COUNTER_2_T2RES_CLEAR_gc (0x00) /* Timer 2 Reset Bit - CLEAR */
#define TIMER_COUNTER_2_T2RES_SET_gc   (0x20) /* Timer 2 Reset Bit - SET */


/* Toggle Output Preset Bit */
#define TIMER_COUNTER_2_T2TOP_CLEAR_gc (0x00) /* Toggle Output Preset Bit - CLEAR */
#define TIMER_COUNTER_2_T2TOP_SET_gc   (0x10) /* Toggle Output Preset Bit - SET */


/* Timer 2 Gap Reset Mask Bit */
#define TIMER_COUNTER_2_T2GRM_CLEAR_gc (0x00) /* Timer 2 Gap Reset Mask Bit - CLEAR */
#define TIMER_COUNTER_2_T2GRM_SET_gc   (0x08) /* Timer 2 Gap Reset Mask Bit - SET */


/* Timer2 Compare Reset Mask Bit */
#define TIMER_COUNTER_2_T2CRM_CLEAR_gc (0x00) /* Timer2 Compare Reset Mask Bit - CLEAR */
#define TIMER_COUNTER_2_T2CRM_SET_gc   (0x04) /* Timer2 Compare Reset Mask Bit - SET */


/* Timer 2 Compare Toggle Mask Bit */
#define TIMER_COUNTER_2_T2CTM_CLEAR_gc (0x00) /* Timer 2 Compare Toggle Mask Bit - CLEAR */
#define TIMER_COUNTER_2_T2CTM_SET_gc   (0x02) /* Timer 2 Compare Toggle Mask Bit - SET */


/* Timer 2 Overflow Toggle Mask Bit */
#define TIMER_COUNTER_2_T2OTM_CLEAR_gc (0x00) /* Timer 2 Overflow Toggle Mask Bit - CLEAR */
#define TIMER_COUNTER_2_T2OTM_SET_gc   (0x01) /* Timer 2 Overflow Toggle Mask Bit - SET */


/* Timer 2 Compare Flag Bit */
#define TIMER_COUNTER_2_T2COF_CLEAR_gc (0x00) /* Timer 2 Compare Flag Bit - CLEAR */
#define TIMER_COUNTER_2_T2COF_SET_gc   (0x02) /* Timer 2 Compare Flag Bit - SET */


/* Timer 2 Overflow Flag Bit */
#define TIMER_COUNTER_2_T2OFF_CLEAR_gc (0x00) /* Timer 2 Overflow Flag Bit - CLEAR */
#define TIMER_COUNTER_2_T2OFF_SET_gc   (0x01) /* Timer 2 Overflow Flag Bit - SET */


/* Timer 2 Compare Interrupt Mask Bit */
#define TIMER_COUNTER_2_T2CIM_CLEAR_gc (0x00) /* Timer 2 Compare Interrupt Mask Bit - CLEAR */
#define TIMER_COUNTER_2_T2CIM_SET_gc   (0x02) /* Timer 2 Compare Interrupt Mask Bit - SET */


/* Timer 2 Overflow Interrupt Mask Bit */
#define TIMER_COUNTER_2_T2OIM_CLEAR_gc (0x00) /* Timer 2 Overflow Interrupt Mask Bit - CLEAR */
#define TIMER_COUNTER_2_T2OIM_SET_gc   (0x01) /* Timer 2 Overflow Interrupt Mask Bit - SET */


/* Timer 2 Duty Cycle Bits */
#define TIMER_COUNTER_2_T2MR_T2D_gc(x) ((x<<6) & 0xC0)

/* Timer 2 Prescaler Select Bits */
#define TIMER_COUNTER_2_T2MR_T2PS_gc(x) ((x<<3) & 0x38)

/* Timer 2 Clock Select Bits */
#define TIMER_COUNTER_2_T2MR_T2CS_gc(x) (x & 0x07)

/*
--------------------------------------------------------------------------------
TIMER_COUNTER_3 - 
--------------------------------------------------------------------------------
*/


/* Timer 3 Enable Bit */
#define TIMER_COUNTER_3_T3E_CLEAR_gc (0x00) /* Timer 3 Enable Bit - CLEAR */
#define TIMER_COUNTER_3_T3E_SET_gc   (0x80) /* Timer 3 Enable Bit - SET */


/* Timer 3 Capture Toggle Mask Bit */
#define TIMER_COUNTER_3_T3CPTM_CLEAR_gc (0x00) /* Timer 3 Capture Toggle Mask Bit - CLEAR */
#define TIMER_COUNTER_3_T3CPTM_SET_gc   (0x40) /* Timer 3 Capture Toggle Mask Bit - SET */


/* Timer 3 Reset Bit */
#define TIMER_COUNTER_3_T3RES_CLEAR_gc (0x00) /* Timer 3 Reset Bit - CLEAR */
#define TIMER_COUNTER_3_T3RES_SET_gc   (0x20) /* Timer 3 Reset Bit - SET */


/* Timer 3 Toggle Output Preset Bit */
#define TIMER_COUNTER_3_T3TOP_CLEAR_gc (0x00) /* Timer 3 Toggle Output Preset Bit - CLEAR */
#define TIMER_COUNTER_3_T3TOP_SET_gc   (0x10) /* Timer 3 Toggle Output Preset Bit - SET */


/* Timer 3 Capture Reset Mask Bit */
#define TIMER_COUNTER_3_T3CPRM_CLEAR_gc (0x00) /* Timer 3 Capture Reset Mask Bit - CLEAR */
#define TIMER_COUNTER_3_T3CPRM_SET_gc   (0x08) /* Timer 3 Capture Reset Mask Bit - SET */


/* Timer3 Compare Reset Mask Bit */
#define TIMER_COUNTER_3_T3CRM_CLEAR_gc (0x00) /* Timer3 Compare Reset Mask Bit - CLEAR */
#define TIMER_COUNTER_3_T3CRM_SET_gc   (0x04) /* Timer3 Compare Reset Mask Bit - SET */


/* Timer 3 Compare Toggle Mask Bit */
#define TIMER_COUNTER_3_T3CTM_CLEAR_gc (0x00) /* Timer 3 Compare Toggle Mask Bit - CLEAR */
#define TIMER_COUNTER_3_T3CTM_SET_gc   (0x02) /* Timer 3 Compare Toggle Mask Bit - SET */


/* Timer 3 Overflow Toggle Mask Bit */
#define TIMER_COUNTER_3_T3OTM_CLEAR_gc (0x00) /* Timer 3 Overflow Toggle Mask Bit - CLEAR */
#define TIMER_COUNTER_3_T3OTM_SET_gc   (0x01) /* Timer 3 Overflow Toggle Mask Bit - SET */


/* Timer 3 Compare 2 Reset Mask bit */
#define TIMER_COUNTER_3_T3C2RM_CLEAR_gc (0x00) /* Timer 3 Compare 2 Reset Mask bit - CLEAR */
#define TIMER_COUNTER_3_T3C2RM_SET_gc   (0x04) /* Timer 3 Compare 2 Reset Mask bit - SET */


/* Timer 3 Compare 2 Toggle Mask bit */
#define TIMER_COUNTER_3_T3C2TM_CLEAR_gc (0x00) /* Timer 3 Compare 2 Toggle Mask bit - CLEAR */
#define TIMER_COUNTER_3_T3C2TM_SET_gc   (0x02) /* Timer 3 Compare 2 Toggle Mask bit - SET */


/* Timer 3 Global Reset Bit */
#define TIMER_COUNTER_3_T3GRES_CLEAR_gc (0x00) /* Timer 3 Global Reset Bit - CLEAR */
#define TIMER_COUNTER_3_T3GRES_SET_gc   (0x01) /* Timer 3 Global Reset Bit - SET */


/* Timer 3 Input Capture Select Bits */
#define TIMER_COUNTER_3_T3MRA_T3ICS_gc(x) ((x<<6) & 0xC0)

/* Timer 3 Input Capture Noise Canceler Bit */
#define TIMER_COUNTER_3_T3CNC_CLEAR_gc (0x00) /* Timer 3 Input Capture Noise Canceler Bit - CLEAR */
#define TIMER_COUNTER_3_T3CNC_SET_gc   (0x20) /* Timer 3 Input Capture Noise Canceler Bit - SET */


/* Timer 3 Capture Edge select Bits */
#define TIMER_COUNTER_3_T3MRA_T3CE_gc(x) ((x<<3) & 0x18)

/* Timer 3 Software Capture Enable Bit */
#define TIMER_COUNTER_3_T3SCE_CLEAR_gc (0x00) /* Timer 3 Software Capture Enable Bit - CLEAR */
#define TIMER_COUNTER_3_T3SCE_SET_gc   (0x04) /* Timer 3 Software Capture Enable Bit - SET */


/* Timer 3 Clock Select Bits */
#define TIMER_COUNTER_3_T3MRA_T3CS_gc(x) (x & 0x03)

/* Timer3 Compare 2 Flag bit */
#define TIMER_COUNTER_3_T3CO2F_CLEAR_gc (0x00) /* Timer3 Compare 2 Flag bit - CLEAR */
#define TIMER_COUNTER_3_T3CO2F_SET_gc   (0x08) /* Timer3 Compare 2 Flag bit - SET */


/* Timer3 Input Capture Flag bit */
#define TIMER_COUNTER_3_T3ICF_CLEAR_gc (0x00) /* Timer3 Input Capture Flag bit - CLEAR */
#define TIMER_COUNTER_3_T3ICF_SET_gc   (0x04) /* Timer3 Input Capture Flag bit - SET */


/* Timer3 Compare Flag bit */
#define TIMER_COUNTER_3_T3COF_CLEAR_gc (0x00) /* Timer3 Compare Flag bit - CLEAR */
#define TIMER_COUNTER_3_T3COF_SET_gc   (0x02) /* Timer3 Compare Flag bit - SET */


/* Timer3 OverFlow Flag bit */
#define TIMER_COUNTER_3_T3OFF_CLEAR_gc (0x00) /* Timer3 OverFlow Flag bit - CLEAR */
#define TIMER_COUNTER_3_T3OFF_SET_gc   (0x01) /* Timer3 OverFlow Flag bit - SET */


/* Timer3 Compare 2 Interrupt Mask bit */
#define TIMER_COUNTER_3_T3C2IM_CLEAR_gc (0x00) /* Timer3 Compare 2 Interrupt Mask bit - CLEAR */
#define TIMER_COUNTER_3_T3C2IM_SET_gc   (0x08) /* Timer3 Compare 2 Interrupt Mask bit - SET */


/* Timer3 Capture Interrupt Mask bit */
#define TIMER_COUNTER_3_T3CPIM_CLEAR_gc (0x00) /* Timer3 Capture Interrupt Mask bit - CLEAR */
#define TIMER_COUNTER_3_T3CPIM_SET_gc   (0x04) /* Timer3 Capture Interrupt Mask bit - SET */


/* Timer3 Compare Interrupt Mask bit */
#define TIMER_COUNTER_3_T3CIM_CLEAR_gc (0x00) /* Timer3 Compare Interrupt Mask bit - CLEAR */
#define TIMER_COUNTER_3_T3CIM_SET_gc   (0x02) /* Timer3 Compare Interrupt Mask bit - SET */


/* Timer3 Overflow Interrupt Mask bit */
#define TIMER_COUNTER_3_T3OIM_CLEAR_gc (0x00) /* Timer3 Overflow Interrupt Mask bit - CLEAR */
#define TIMER_COUNTER_3_T3OIM_SET_gc   (0x01) /* Timer3 Overflow Interrupt Mask bit - SET */


/*
--------------------------------------------------------------------------------
RTC_TIMER - 
--------------------------------------------------------------------------------
*/


/* Real-Time Counter Reset Bit */
#define RTC_TIMER_RTCR_CLEAR_gc (0x00) /* Real-Time Counter Reset Bit - CLEAR */
#define RTC_TIMER_RTCR_SET_gc   (0x01) /* Real-Time Counter Reset Bit - SET */


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


/* Watch Dog Timer Prescaler Select bits */
#define WDT_WDTCR_WDPS_gc(x) (x & 0x07)

/*
--------------------------------------------------------------------------------
CRC - 
--------------------------------------------------------------------------------
*/


/* CRC Reset Bit */
#define CRC_CRCRS_CLEAR_gc (0x00) /* CRC Reset Bit - CLEAR */
#define CRC_CRCRS_SET_gc   (0x80) /* CRC Reset Bit - SET */


/* Start VALue Bit */
#define CRC_STVAL_CLEAR_gc (0x00) /* Start VALue Bit - CLEAR */
#define CRC_STVAL_SET_gc   (0x40) /* Start VALue Bit - SET */


/* Reflect Output Data Bit */
#define CRC_REFLO_CLEAR_gc (0x00) /* Reflect Output Data Bit - CLEAR */
#define CRC_REFLO_SET_gc   (0x20) /* Reflect Output Data Bit - SET */


/* Reflect Input Data Bit */
#define CRC_REFLI_CLEAR_gc (0x00) /* Reflect Input Data Bit - CLEAR */
#define CRC_REFLI_SET_gc   (0x10) /* Reflect Input Data Bit - SET */


/* CRC Mode Select Bit */
#define CRC_CRCSEL_CLEAR_gc (0x00) /* CRC Mode Select Bit - CLEAR */
#define CRC_CRCSEL_SET_gc   (0x08) /* CRC Mode Select Bit - SET */


/* Partial CRC Computation Bits */
#define CRC_CRCCR_CRCN_gc(x) (x & 0x07)

/* CRC Busy Flag */
#define CRC_CRCBF_CLEAR_gc (0x00) /* CRC Busy Flag - CLEAR */
#define CRC_CRCBF_SET_gc   (0x01) /* CRC Busy Flag - SET */


/*
--------------------------------------------------------------------------------
PORTC - 
--------------------------------------------------------------------------------
*/

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


/* SPI -  (0x0000) */
#define SPI_BASE                  _SFR_MEM8 (0x0000) /* SPI Base Address */
#define SPI_SPCR                  _SFR_MEM8 (0x004C) /* SPI Control Register */
#define SPI_SPSR                  _SFR_MEM8 (0x004D) /* SPI Status Register */
#define SPI_SPDR                  _SFR_MEM8 (0x004E) /* SPI Data Register */

/* CPU -  (0x0000) */
#define CPU_BASE                  _SFR_MEM8 (0x0000) /* CPU Base Address */
#define CPU_CMCR                  _SFR_MEM8 (0x002F) /* Clock Management Control Register */
#define CPU_CMSR                  _SFR_MEM8 (0x0030) /* Clock Management Status Register */
#define CPU_VMSR                  _SFR_MEM8 (0x0036) /* Voltage Monitor Status Register */
#define CPU_GPIOR                 _SFR_MEM8 (0x003E) /* General Purpose I/O Register 0 */
#define CPU_VMCR                  _SFR_MEM8 (0x004B) /* Voltage Monitor Control Register */
#define CPU_SMCR                  _SFR_MEM8 (0x0053) /* Sleep Mode Control Register */
#define CPU_MCUSR                 _SFR_MEM8 (0x0054) /* MCU Status Register */
#define CPU_MCUCR                 _SFR_MEM8 (0x0055) /* MCU Control Register */
#define CPU_SPMCSR                _SFR_MEM8 (0x0057) /* Store Program Memory Control Register */
#define CPU_CMIMR                 _SFR_MEM8 (0x005B) /* Clock Management Interrupt Mask Register */
#define CPU_CLKPR                 _SFR_MEM8 (0x005C) /* Clock Prescaler Register */
#define CPU_SP                    _SFR_MEM16(0x005D) /* Stack Pointer  */
#define CPU_SPL                   _SFR_MEM8 (0x005D) /* Stack Pointer  LOW BYTE */
#define CPU_SPH                   _SFR_MEM8 (0x005E) /* Stack Pointer  HIGH BYTE */
#define CPU_SREG                  _SFR_MEM8 (0x005F) /* Status Register */
#define CPU_PRR0                  _SFR_MEM8 (0x0063) /* Power Reduction Register */
#define CPU_PRR1                  _SFR_MEM8 (0x0064) /* Power Reduction Register */
#define CPU_SRCCAL                _SFR_MEM8 (0x0065) /* SRC-Oscillator Calibration Register */
#define CPU_FRCCAL                _SFR_MEM8 (0x0066) /* FRC-Oscillator Calibration Register */

/* AFE -  (0x0000) */
#define AFE_BASE                  _SFR_MEM8 (0x0000) /* AFE Base Address */
#define AFE_TPCR                  _SFR_MEM8 (0x002D) /* Transponder Control Register */
#define AFE_TPFR                  _SFR_MEM8 (0x002E) /* Transponder Status & Flag Register */
#define AFE_TPIMR                 _SFR_MEM8 (0x009C) /* Transponder Interrupt Mask Register */

/* DDDLFRX -  (0x0000) */
#define DDDLFRX_BASE              _SFR_MEM8 (0x0000) /* DDDLFRX Base Address */
#define DDDLFRX_LFFR              _SFR_MEM8 (0x0038) /* LF Flag Register */
#define DDDLFRX_LFCR0             _SFR_MEM8 (0x004F) /* Low Frequency Receiver Control Register 0 */
#define DDDLFRX_LFCR1             _SFR_MEM8 (0x0050) /* LF receiver Control Register 1 */
#define DDDLFRX_LFRDB             _SFR_MEM8 (0x0052) /* LF Receiver Data Buffer */
#define DDDLFRX_LFSR              _SFR_MEM8 (0x0056) /* LF Status Register */
#define DDDLFRX_LFIMR             _SFR_MEM8 (0x0082) /* LF Interrupt Mask Register */
#define DDDLFRX_LFCAD             _SFR_MEM8 (0x0083) /* LF Clock Adjustment Data Register */
#define DDDLFRX_LFID00            _SFR_MEM8 (0x0084) /* LF ID 0 Data Register Byte 0 */
#define DDDLFRX_LFID01            _SFR_MEM8 (0x0085) /* LF ID 0 Data Register Byte 1 */
#define DDDLFRX_LFID02            _SFR_MEM8 (0x0086) /* LF ID 0 Data Register Byte 2 */
#define DDDLFRX_LFID03            _SFR_MEM8 (0x0087) /* LF ID 0 Data Register Byte 3 */
#define DDDLFRX_LFID10            _SFR_MEM8 (0x0088) /* LF ID 1 Data Register Byte 0 */
#define DDDLFRX_LFID11            _SFR_MEM8 (0x0089) /* LF ID 1 Data Register Byte 1 */
#define DDDLFRX_LFID12            _SFR_MEM8 (0x008A) /* LF ID 1 Data Register Byte 2 */
#define DDDLFRX_LFID13            _SFR_MEM8 (0x008B) /* LF ID 1 Data Register Byte 3 */
#define DDDLFRX_LFRD0             _SFR_MEM8 (0x008C) /* LF Receive Data Register Byte 0 */
#define DDDLFRX_LFRD1             _SFR_MEM8 (0x008D) /* LF Receive Data Register Byte 1 */
#define DDDLFRX_LFRD2             _SFR_MEM8 (0x008E) /* LF Receive Data Register Byte 2 */
#define DDDLFRX_LFRD3             _SFR_MEM8 (0x008F) /* LF Receive Data Register Byte 3 */
#define DDDLFRX_LFID0M            _SFR_MEM8 (0x0090) /* LF Identifier 0 Mask Register */
#define DDDLFRX_LFID1M            _SFR_MEM8 (0x0091) /* LF Identifier 1 Mask Register */
#define DDDLFRX_LFRDF             _SFR_MEM8 (0x0092) /* LF Receive Data Frame Register */
#define DDDLFRX_LFRSD1            _SFR_MEM8 (0x0093) /* LF RSSI Data Register 1 */
#define DDDLFRX_LFRSD2            _SFR_MEM8 (0x0094) /* LF RSSI Data Register 2 */
#define DDDLFRX_LFRSD3            _SFR_MEM8 (0x0095) /* LF RSSI Data Register 3 */
#define DDDLFRX_LFCC1             _SFR_MEM8 (0x0096) /* Low Frequency Channel Capacity select register 1 */
#define DDDLFRX_LFCC2             _SFR_MEM8 (0x0097) /* Low Frequency Channel Capacity select register 2 */
#define DDDLFRX_LFCC3             _SFR_MEM8 (0x0098) /* Low Frequency Channel Capacity select register 3 */
#define DDDLFRX_LFQCR             _SFR_MEM8 (0x0099) /* Low Frequency Receiver Quality Controll Register */

/* IRLED -  (0x0000) */
#define IRLED_BASE                _SFR_MEM8 (0x0000) /* IRLED Base Address */
#define IRLED_LDCR                _SFR_MEM8 (0x006D) /* LED Driver Control Register */

/* AES -  (0x0000) */
#define AES_BASE                  _SFR_MEM8 (0x0000) /* AES Base Address */
#define AES_AESCR                 _SFR_MEM8 (0x0033) /* AES Control Register */
#define AES_AESSR                 _SFR_MEM8 (0x0034) /* AES Status Register */
#define AES_AESDR                 _SFR_MEM8 (0x0049) /* AES Data Register */
#define AES_AESKR                 _SFR_MEM8 (0x004A) /* AES Key Register */

/* MOD -  (0x0000) */
#define MOD_BASE                  _SFR_MEM8 (0x0000) /* MOD Base Address */
#define MOD_TMIFR                 _SFR_MEM8 (0x0035) /* Timer Modulator Interrupt Flag Register */
#define MOD_TMDR                  _SFR_MEM8 (0x0048) /* Timer Modulator Data Register */
#define MOD_TMCR                  _SFR_MEM8 (0x007D) /* Timer Modulator Control Register */
#define MOD_TMMR                  _SFR_MEM8 (0x007E) /* Timer Modulator Mode Register */
#define MOD_TMIMR                 _SFR_MEM8 (0x007F) /* Timer Modulator Interrupt Mask Register */
#define MOD_TMMDR                 _SFR_MEM8 (0x00A8) /* Timer Modulator Manchester Data Register */
#define MOD_TMBDR                 _SFR_MEM8 (0x00A9) /* Timer Modulator Biphase Data Register */
#define MOD_TMTDR                 _SFR_MEM8 (0x00AA) /* Timer Modulator Transmit Data Register */
#define MOD_TMSR                  _SFR_MEM8 (0x00AB) /* Timer Modulator Shift Register */

/* VMON -  (0x0000) */
#define VMON_BASE                 _SFR_MEM8 (0x0000) /* VMON Base Address */
#define VMON_VMSR                 _SFR_MEM8 (0x0036) /* Voltage Monitor Status Register */
#define VMON_VMCR                 _SFR_MEM8 (0x004B) /* Voltage Monitor Control Register */

/* EXTERNAL_INTERRUPT -  (0x0000) */
#define EXTERNAL_INTERRUPT_BASE   _SFR_MEM8 (0x0000) /* EXTERNAL_INTERRUPT Base Address */
#define EXTERNAL_INTERRUPT_PCIFR  _SFR_MEM8 (0x0037) /* Pin Change Interrupt Flag Register */
#define EXTERNAL_INTERRUPT_EIFR   _SFR_MEM8 (0x003D) /* External Interrupt Flag Register */
#define EXTERNAL_INTERRUPT_PCICR  _SFR_MEM8 (0x0046) /* Pin Change Interrupt Control Register */
#define EXTERNAL_INTERRUPT_EIMSK  _SFR_MEM8 (0x0047) /* External Interrupt Mask Register */
#define EXTERNAL_INTERRUPT_EICRA  _SFR_MEM8 (0x0069) /* External Interrupt Control Register */
#define EXTERNAL_INTERRUPT_PCMSK0 _SFR_MEM8 (0x006A) /* Pin Change Mask Register 0 */
#define EXTERNAL_INTERRUPT_PCMSK1 _SFR_MEM8 (0x006B) /* Pin Change Mask Register 1 */

/* EEPROM -  (0x0000) */
#define EEPROM_BASE               _SFR_MEM8 (0x0000) /* EEPROM Base Address */
#define EEPROM_EECR               _SFR_MEM8 (0x003F) /* EEPROM Control Register */
#define EEPROM_EEDR               _SFR_MEM8 (0x0040) /* EEPROM Data Register */
#define EEPROM_EEAR               _SFR_MEM16(0x0041) /* EEPROM Address Register  Bytes */
#define EEPROM_EEARL              _SFR_MEM8 (0x0041) /* EEPROM Address Register  Bytes LOW BYTE */
#define EEPROM_EEARH              _SFR_MEM8 (0x0042) /* EEPROM Address Register  Bytes HIGH BYTE */
#define EEPROM_EEPR               _SFR_MEM8 (0x0043) /* EEPROM Protect Register */
#define EEPROM_EECCR              _SFR_MEM8 (0x0044) /* EEPROM Error Correction Code Register */
#define EEPROM_EECR2              _SFR_MEM8 (0x0045) /* EEPROM Control Register 2 */

/* PORTB -  (0x0000) */
#define PORTB_BASE                _SFR_MEM8 (0x0000) /* PORTB Base Address */
#define PORTB_PINB                _SFR_MEM8 (0x0023) /* Port B Input Pins */
#define PORTB_DDRB                _SFR_MEM8 (0x0024) /* Port B Data Direction Register */
#define PORTB_PORTB               _SFR_MEM8 (0x0025) /* Port B Data Register */

/* PORTD -  (0x0000) */
#define PORTD_BASE                _SFR_MEM8 (0x0000) /* PORTD Base Address */
#define PORTD_PIND                _SFR_MEM8 (0x0029) /* Port D Input Pins */
#define PORTD_DDRD                _SFR_MEM8 (0x002A) /* Port D Data Direction Register */
#define PORTD_PORTD               _SFR_MEM8 (0x002B) /* Port D Data Register */

/* TIMER_COUNTER_0 -  (0x0000) */
#define TIMER_COUNTER_0_BASE      _SFR_MEM8 (0x0000) /* TIMER_COUNTER_0 Base Address */
#define TIMER_COUNTER_0_T0IFR     _SFR_MEM8 (0x0039) /* Timer0 Interrupt Flag Register */
#define TIMER_COUNTER_0_T0CR      _SFR_MEM8 (0x0059) /* Timer 0 Control Register */

/* TIMER_COUNTER_1 -  (0x0000) */
#define TIMER_COUNTER_1_BASE      _SFR_MEM8 (0x0000) /* TIMER_COUNTER_1 Base Address */
#define TIMER_COUNTER_1_T1IFR     _SFR_MEM8 (0x003A) /* Timer1 Interrupt Flag Register */
#define TIMER_COUNTER_1_T1CR      _SFR_MEM8 (0x0058) /* Timer 1 Control Register */

/* TIMER_COUNTER_2 -  (0x0000) */
#define TIMER_COUNTER_2_BASE      _SFR_MEM8 (0x0000) /* TIMER_COUNTER_2 Base Address */
#define TIMER_COUNTER_2_T2CR      _SFR_MEM8 (0x0031) /* Timer 2 Control Register */
#define TIMER_COUNTER_2_T2IFR     _SFR_MEM8 (0x003B) /* Timer2 Interrupt Flag Register */
#define TIMER_COUNTER_2_T2CNT     _SFR_MEM8 (0x0070) /* Timer 2 Counter Register */
#define TIMER_COUNTER_2_T2COR     _SFR_MEM8 (0x0071) /* Timer2 Compare Register */
#define TIMER_COUNTER_2_T2MR      _SFR_MEM8 (0x0073) /* Timer 2 Mode Register */
#define TIMER_COUNTER_2_T2IMR     _SFR_MEM8 (0x0074) /* Timer 2 Interrupt Mask Register */

/* TIMER_COUNTER_3 -  (0x0000) */
#define TIMER_COUNTER_3_BASE      _SFR_MEM8 (0x0000) /* TIMER_COUNTER_3 Base Address */
#define TIMER_COUNTER_3_T3CR2     _SFR_MEM8 (0x002C) /* Timer3 Control Register 2 */
#define TIMER_COUNTER_3_T3CR      _SFR_MEM8 (0x0032) /* Timer 3 Control Register */
#define TIMER_COUNTER_3_T3IFR     _SFR_MEM8 (0x003C) /* Timer3 Interrupt Flag Register */
#define TIMER_COUNTER_3_T3CO2R    _SFR_MEM8 (0x0075) /* Timer3 COmpare2 Register */
#define TIMER_COUNTER_3_T3CNT     _SFR_MEM8 (0x0076) /* Timer3 Counter Register */
#define TIMER_COUNTER_3_T3COR     _SFR_MEM8 (0x0077) /* Timer3 COmpare Register */
#define TIMER_COUNTER_3_T3ICR     _SFR_MEM8 (0x0078) /* Timer3 Input Capture Register */
#define TIMER_COUNTER_3_T3MRA     _SFR_MEM8 (0x0079) /* Timer 3 Mode Register A */
#define TIMER_COUNTER_3_T3MRB     _SFR_MEM8 (0x007A) /* Timer 3 Mode Register B */
#define TIMER_COUNTER_3_T3IMR     _SFR_MEM8 (0x007B) /* Timer3 Interrupt Mask Register */

/* RTC_TIMER -  (0x0000) */
#define RTC_TIMER_BASE            _SFR_MEM8 (0x0000) /* RTC_TIMER Base Address */
#define RTC_TIMER_RTCCR           _SFR_MEM8 (0x009E) /* Real-Time Clock Control Register */
#define RTC_TIMER_RTCDR           _SFR_MEM8 (0x009F) /* Real Time Clock Data Register */

/* WDT - Watchdog Timer (0x0000) */
#define WDT_BASE                  _SFR_MEM8 (0x0000) /* WDT Base Address */
#define WDT_WDTCR                 _SFR_MEM8 (0x0060) /* Watchdog Timer Control Register */

/* CRC -  (0x0000) */
#define CRC_BASE                  _SFR_MEM8 (0x0000) /* CRC Base Address */
#define CRC_CRCPOL                _SFR_MEM8 (0x00AC) /* CRC Polynomial Data Register */
#define CRC_CRCDR                 _SFR_MEM8 (0x00AD) /* CRC Data Register */
#define CRC_CRCCR                 _SFR_MEM8 (0x00AE) /* CRC Control Register */
#define CRC_CRCSR                 _SFR_MEM8 (0x00AF) /* CRC Status Register */

/* PORTC -  (0x0000) */
#define PORTC_BASE                _SFR_MEM8 (0x0000) /* PORTC Base Address */
#define PORTC_PINC                _SFR_MEM8 (0x0026) /* Port C Input Pins */
#define PORTC_DDRC                _SFR_MEM8 (0x0027) /* Port C Data Direction Register */
#define PORTC_PORTC               _SFR_MEM8 (0x0028) /* Port C Data Register */

/* FUSE -  (0x0000) */
#define FUSE_BASE                 _SFR_MEM8 (0x0000) /* FUSE Base Address */
#define FUSE_LOW                  _SFR_MEM8 (0x0000) 

/* LOCKBIT -  (0x0000) */
#define LOCKBIT_BASE              _SFR_MEM8 (0x0000) /* LOCKBIT Base Address */
#define LOCKBIT_LOCKBIT           _SFR_MEM8 (0x0000) 
/* avr-libc typedef for avr/fuse.h */
typedef FUSE_t NVM_FUSES_t;

/*
================================================================================
Interrupt Vector Definitions
================================================================================
*/

/* Vector 0 is the reset vector */
#define None_RESET_vect_num     (0)                 
#define None_RESET_vect         _VECTOR(0)          /* External Pin, Power-on Reset, Brown-out Reset, Watchdog Reset and Transponder Reset */
#define None_TPINT_vect_num     (1)                 
#define None_TPINT_vect         _VECTOR(1)          /* Transponder Mode Interrupt */
#define None_INT0_vect_num      (2)                 
#define None_INT0_vect          _VECTOR(2)          /* External Interrupt Request 0 */
#define None_PCINT0_vect_num    (3)                 
#define None_PCINT0_vect        _VECTOR(3)          /* Pin Change Interrupt Request 0 */
#define None_PCINT1_vect_num    (4)                 
#define None_PCINT1_vect        _VECTOR(4)          /* Pin Change Interrupt Request 1 */
#define None_VMINT_vect_num     (5)                 
#define None_VMINT_vect         _VECTOR(5)          /* Voltage Monitoring Interrupt */
#define None_T0INT_vect_num     (6)                 
#define None_T0INT_vect         _VECTOR(6)          /* Timer0 Interval Interrupt */
#define None_LFID0INT_vect_num  (7)                 
#define None_LFID0INT_vect      _VECTOR(7)          /* LF-Receiver Identifier 0 Interrupt */
#define None_LFID1INT_vect_num  (8)                 
#define None_LFID1INT_vect      _VECTOR(8)          /* LF-Receiver Identifier 1 Interrupt */
#define None_LFFEINT_vect_num   (9)                 
#define None_LFFEINT_vect       _VECTOR(9)          /* LF-Receiver Frame End Interrupt */
#define None_LFDBINT_vect_num   (10)                
#define None_LFDBINT_vect       _VECTOR(10)         /* LF-Receiver Data Buffer full Interrupt */
#define None_T3CAPINT_vect_num  (11)                
#define None_T3CAPINT_vect      _VECTOR(11)         /* Timer/Counter3 Capture Event Interrupt */
#define None_T3COMINT_vect_num  (12)                
#define None_T3COMINT_vect      _VECTOR(12)         /* Timer/Counter3 Compare Match Interrupt */
#define None_T3OVFINT_vect_num  (13)                
#define None_T3OVFINT_vect      _VECTOR(13)         /* Timer/Counter3 Overflow Interrupt */
#define None_T3COM2INT_vect_num (14)                
#define None_T3COM2INT_vect     _VECTOR(14)         /* Timer/Counter3 Compare Match 2 Interrupt */
#define None_T2COMINT_vect_num  (15)                
#define None_T2COMINT_vect      _VECTOR(15)         /* Timer/Counter2 Compare Match Interrupt */
#define None_T2OVFINT_vect_num  (16)                
#define None_T2OVFINT_vect      _VECTOR(16)         /* Timer/Counter2 Overflow Interrupt */
#define None_T1INT_vect_num     (17)                
#define None_T1INT_vect         _VECTOR(17)         /* Timer 1 Interval Interrupt */
#define None_SPISTC_vect_num    (18)                
#define None_SPISTC_vect        _VECTOR(18)         /* SPI Serial Transfer Complete Interrupt */
#define None_TMRXBINT_vect_num  (19)                
#define None_TMRXBINT_vect      _VECTOR(19)         /* Timer Modulator SSI Receive Buffer Interrupt */
#define None_TMTXBINT_vect_num  (20)                
#define None_TMTXBINT_vect      _VECTOR(20)         /* Timer Modulator SSI Transmit Buffer Interrupt */
#define None_TMTXCINT_vect_num  (21)                
#define None_TMTXCINT_vect      _VECTOR(21)         /* Timer Modulator Transmit Complete Interrupt */
#define None_AESINT_vect_num    (22)                
#define None_AESINT_vect        _VECTOR(22)         /* AES Interrupt */
#define None_LFRSSINT_vect_num  (23)                
#define None_LFRSSINT_vect      _VECTOR(23)         /* LF-Receiver RSSi measurement Interrupt */
#define None_LFSDINT_vect_num   (24)                
#define None_LFSDINT_vect       _VECTOR(24)         /* LF-Receiver Signal Detect Interrupt */
#define None_LFMDINT_vect_num   (25)                
#define None_LFMDINT_vect       _VECTOR(25)         /* LF-Receiver Manchester Decoder error Interrupt  */
#define None_EXCMINT_vect_num   (26)                
#define None_EXCMINT_vect       _VECTOR(26)         /* External Input Clock Monitoring Interrupt */
#define None_EXXMINT_vect_num   (27)                
#define None_EXXMINT_vect       _VECTOR(27)         /* External XTAL Oscillator Break Down Interrupt */
#define None_RTCINT_vect_num    (28)                
#define None_RTCINT_vect        _VECTOR(28)         /* Real Time Clock Interrupt */
#define None_EEREADY_vect_num   (29)                
#define None_EEREADY_vect       _VECTOR(29)         /* EEPROM Ready Interrupt */
#define None_SPMREADY_vect_num  (30)                
#define None_SPMREADY_vect      _VECTOR(30)         /* Store Program Memory Ready  */

/* Vector Table Size */
#define _VECTOR_SIZE            (4)                 /* Size of individual vector. */
#define _VECTORS_SIZE           (31 * _VECTOR_SIZE) /* Size of all vectors */
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

#define BOOT_SECTION_1_START     (0x3800)                                         
#define BOOT_SECTION_1_SIZE      (0x0800)                                         
#define BOOT_SECTION_1_PAGE_SIZE (0x0080)                                         
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
#define EEPROMMEM_SIZE          (0x0800)                               
#define EEPROMMEM_END           (EEPROMMEM_START + EEPROMMEM_SIZE - 1) 

#define EEPROM_START            (0x0000)                               
#define EEPROM_SIZE             (0x0800)                               
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
#define PORTD0 (0) 
#define PORTD1 (1) 
#define PORTD2 (2) 
#define PORTD3 (3) 
#define PORTD4 (4) 
#define PORTD5 (5) 
#define PORTD6 (6) 
#define PORTD7 (7) 
#define PORTC0 (0) 
#define PORTC1 (1) 
#define PORTC2 (2) 
#define PORTC3 (3) 
#define PORTC4 (4) 
#define PORTC5 (5) 
#define PORTC6 (6) 
#define PORTC7 (7) 

/*
================================================================================
Fuses/LockBits/Signatures
================================================================================
*/

/* ============ Fuses ============ */

#define FUSE_MEMORY_SIZE 0 

/* Fuse offset 0x00 */
#define _32OEN   (unsigned char)~_BV(1) /* Enables the 32 kHz oscillator. */
#define Reserved (unsigned char)~_BV(2) /* This fuse bit must be set.  */
#define EESAVE   (unsigned char)~_BV(3) /* Preserve EEPROM through the Chip Erase cycle */
#define WDTON    (unsigned char)~_BV(4) /* Enable Watchdog Timer */
#define SPIEN    (unsigned char)~_BV(5) /* SPI Enable */
#define DWEN     (unsigned char)~_BV(6) /* DebugWIRE Enable */
#define CKDIV8   (unsigned char)~_BV(7) /* Divide clock by 8 internally */


/* ========== Lock Bits ========== */
#define __LOCK_BITS_EXIST  


/* ========== Signature ========== */
#define SIGNATURE_0 (0x1E) 
#define SIGNATURE_1 (0x94) 
#define SIGNATURE_2 (0x62) 

#endif /* #ifdef _AVR_ATA5790N_H_INCLUDED */
