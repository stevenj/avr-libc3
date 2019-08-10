/******************************************************************************
 *   This file is part of avr-libc3.                                          * 
 *                                                                            * 
 *   Automatically created by devtools/gen-ioheader-atdf.py (V0.91)           * 
 *                                                                            * 
 *   .atpack File: ATA6285.atdf                                               * 
 *   .ATDF File:   atdf/ATA6285.atdf                                          * 
 *   Version:      2.0.6                                                      * 
 *   Date:         2019-04-16                                                 * 
 *   Device:       ATA6285                                                    * 
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
#  define _AVR_IOXXX_H_ "ioATA6285.h"
#else
#  error "Attempt to include more than one <avr/ioXXX.h> file."
#endif

#ifndef _AVR_ATA6285_H_INCLUDED
#  define _AVR_ATA6285_H_INCLUDED

/*
================================================================================
Ungrouped common register
================================================================================
*/

#define CMCR   _SFR_MEM8 (0x2F) /* Clock Management Control Register */
#define CMSR   _SFR_MEM8 (0x30) /* Clock Management Status Register */

#define VMCSR  _SFR_MEM8 (0x36) /* Voltage Monitor Control and Status Register */

#define GPIOR0 _SFR_MEM8 (0x3E) /* General Purpose I/O Register 0 */

#define GPIOR1 _SFR_MEM8 (0x4A) /* General Purpose I/O Register 1 */
#define GPIOR2 _SFR_MEM8 (0x4B) /* General Purpose I/O Register 2 */

#define SMCR   _SFR_MEM8 (0x53) /* Sleep Mode Control Register */
#define MCUSR  _SFR_MEM8 (0x54) /* MCU Status Register */
#define MCUCR  _SFR_MEM8 (0x55) /* MCU Control Register */

#define SPMCSR _SFR_MEM8 (0x57) /* Store Program Memory Control Register */

#define CMIMR  _SFR_MEM8 (0x5B) /* Clock Management Interrupt Mask Register */
#define CLKPR  _SFR_MEM8 (0x5C) /* Clock Prescaler Register */
#define SP     _SFR_MEM16(0x5D) /* Stack Pointer  */
#define SREG   _SFR_MEM8 (0x5F) /* Status Register */

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
    register8_t HIGH;
} FUSE_t;


/* Upper EEPROM Locked (disabled) */
typedef enum FUSE_EELOCK_enum
{
    FUSE_EELOCK_CLEAR_gc = (0x00), /* Upper EEPROM Locked (disabled) - CLEAR */
    FUSE_EELOCK_SET_gc   = (0x80), /* Upper EEPROM Locked (disabled) - SET */
} FUSE_EELOCK_t;

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

/* Boot size select */
typedef enum FUSE_BOOTSZ_enum
{
    FUSE_BOOTSZ_VAL_0x03_gc = (0x03<<1), /* Boot size = 128 words */
    FUSE_BOOTSZ_VAL_0x02_gc = (0x02<<1), /* Boot size = 256 words */
    FUSE_BOOTSZ_VAL_0x01_gc = (0x01<<1), /* Boot size = 512 words */
    FUSE_BOOTSZ_VAL_0x00_gc = (0x00<<1), /* Boot size = 1024 words */
} FUSE_BOOTSZ_t;

/* Select reset vector */
typedef enum FUSE_BOOTRST_enum
{
    FUSE_BOOTRST_CLEAR_gc = (0x00), /* Select reset vector - CLEAR */
    FUSE_BOOTRST_SET_gc   = (0x01), /* Select reset vector - SET */
} FUSE_BOOTRST_t;

/* Divide clock by 8 internally */
typedef enum FUSE_CKDIV8_enum
{
    FUSE_CKDIV8_CLEAR_gc = (0x00), /* Divide clock by 8 internally - CLEAR */
    FUSE_CKDIV8_SET_gc   = (0x80), /* Divide clock by 8 internally - SET */
} FUSE_CKDIV8_t;

/* Clock output on PORTC1 */
typedef enum FUSE_CKOUT_enum
{
    FUSE_CKOUT_CLEAR_gc = (0x00), /* Clock output on PORTC1 - CLEAR */
    FUSE_CKOUT_SET_gc   = (0x40), /* Clock output on PORTC1 - SET */
} FUSE_CKOUT_t;

/* Select Clock Source */
typedef enum FUSE_SUT_CKSEL_enum
{
    FUSE_SUT_CKSEL_VAL_0x00_gc = (0x00<<4), /* Start-up time PWRDWN/RESET: 6 CK/14 CK + 0 ms;   [SUT=00] */
    FUSE_SUT_CKSEL_VAL_0x01_gc = (0x01<<4), /* Start-up time PWRDWN/RESET: 6 CK/14 CK + 5.7 ms; [SUT=01] */
    FUSE_SUT_CKSEL_VAL_0x02_gc = (0x02<<4), /* Start-up time PWRDWN/RESET: 6 CK/14 CK + 90 ms;  [SUT=10] */
} FUSE_SUT_CKSEL_t;

/* Enable Watchdog RC-Oscillator */
typedef enum FUSE_WDRCON_enum
{
    FUSE_WDRCON_CLEAR_gc = (0x00), /* Enable Watchdog RC-Oscillator - CLEAR */
    FUSE_WDRCON_SET_gc   = (0x08), /* Enable Watchdog RC-Oscillator - SET */
} FUSE_WDRCON_t;

/* Fast RC-Oscillator Frequency select */
typedef enum FUSE_FRCFS_enum
{
    FUSE_FRCFS_CLEAR_gc = (0x00), /* Fast RC-Oscillator Frequency select - CLEAR */
    FUSE_FRCFS_SET_gc   = (0x04), /* Fast RC-Oscillator Frequency select - SET */
} FUSE_FRCFS_t;

/* Brown-out detection enabled */
typedef enum FUSE_BODEN_enum
{
    FUSE_BODEN_CLEAR_gc = (0x00), /* Brown-out detection enabled - CLEAR */
    FUSE_BODEN_SET_gc   = (0x02), /* Brown-out detection enabled - SET */
} FUSE_BODEN_t;

/* Disable Temperatur shutdown Reset  */
typedef enum FUSE_TSRDI_enum
{
    FUSE_TSRDI_CLEAR_gc = (0x00), /* Disable Temperatur shutdown Reset  - CLEAR */
    FUSE_TSRDI_SET_gc   = (0x01), /* Disable Temperatur shutdown Reset  - SET */
} FUSE_TSRDI_t;

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
SENSOR_INTERFACE - 
--------------------------------------------------------------------------------
*/

typedef struct SENSOR_INTERFACE_struct
{
    register8_t rsv_0x00[57]; /* RESERVED REGISTER BLOCK */
    register8_t SSFR;         /* Sensor Status + Flag Register */
    register8_t rsv_0x3A[13]; /* RESERVED REGISTER BLOCK */
    register8_t SVCR;         /* Sensor Voltage Control Register */
    register8_t SCR;          /* Sensor Control Register */
    register8_t SCCR;         /* Sensor Capacitor Control Register */
    register8_t rsv_0x4A[23]; /* RESERVED REGISTER BLOCK */
    register8_t SIMSK;        /* Sensor Interrupt Mask register */
    register8_t rsv_0x62[2];  /* RESERVED REGISTER BLOCK */
    register8_t TSCR;         /* Temperature Sensor Control Register */
    register8_t rsv_0x65[2];  /* RESERVED REGISTER BLOCK */
    register8_t MSVCAL;       /* Motion Sensor Voltage Calibration Register */
} SENSOR_INTERFACE_t;


/* Sensor Motion Enable Bit */
typedef enum SENSOR_INTERFACE_SMEN_enum
{
    SENSOR_INTERFACE_SMEN_CLEAR_gc = (0x00), /* Sensor Motion Enable Bit - CLEAR */
    SENSOR_INTERFACE_SMEN_SET_gc   = (0x08), /* Sensor Motion Enable Bit - SET */
} SENSOR_INTERFACE_SMEN_t;

/* Sensor enable Bits */
#define SENSOR_INTERFACE_SCR_SEN_gc(x) ((x<<1) & 0x06)

/* Sensor Measurement Start Bit */
typedef enum SENSOR_INTERFACE_SMS_enum
{
    SENSOR_INTERFACE_SMS_CLEAR_gc = (0x00), /* Sensor Measurement Start Bit - CLEAR */
    SENSOR_INTERFACE_SMS_SET_gc   = (0x01), /* Sensor Measurement Start Bit - SET */
} SENSOR_INTERFACE_SMS_t;

/* Sensor Capacitor Channel Select Bit2 */
#define SENSOR_INTERFACE_SCCR_SCCS_gc(x) ((x<<2) & 0x1C)

/* Sensor Reference Charge Current Bit1 */
#define SENSOR_INTERFACE_SCCR_SRCC_gc(x) (x & 0x03)

/* Motion Sensor Interrupt Enable Bit */
typedef enum SENSOR_INTERFACE_MSIE_enum
{
    SENSOR_INTERFACE_MSIE_CLEAR_gc = (0x00), /* Motion Sensor Interrupt Enable Bit - CLEAR */
    SENSOR_INTERFACE_MSIE_SET_gc   = (0x01), /* Motion Sensor Interrupt Enable Bit - SET */
} SENSOR_INTERFACE_MSIE_t;

/* Motion Sensor Output */
typedef enum SENSOR_INTERFACE_MSENO_enum
{
    SENSOR_INTERFACE_MSENO_CLEAR_gc = (0x00), /* Motion Sensor Output - CLEAR */
    SENSOR_INTERFACE_MSENO_SET_gc   = (0x02), /* Motion Sensor Output - SET */
} SENSOR_INTERFACE_MSENO_t;

/* Motion Sensor Flag */
typedef enum SENSOR_INTERFACE_MSENF_enum
{
    SENSOR_INTERFACE_MSENF_CLEAR_gc = (0x00), /* Motion Sensor Flag - CLEAR */
    SENSOR_INTERFACE_MSENF_SET_gc   = (0x01), /* Motion Sensor Flag - SET */
} SENSOR_INTERFACE_MSENF_t;

/* Temperature Sensor Shutdown mode Disable */
typedef enum SENSOR_INTERFACE_TSSD_enum
{
    SENSOR_INTERFACE_TSSD_CLEAR_gc = (0x00), /* Temperature Sensor Shutdown mode Disable - CLEAR */
    SENSOR_INTERFACE_TSSD_SET_gc   = (0x01), /* Temperature Sensor Shutdown mode Disable - SET */
} SENSOR_INTERFACE_TSSD_t;

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
    register8_t VMCSR;        /* Voltage Monitor Control and Status Register */
    register8_t rsv_0x37[7];  /* RESERVED REGISTER BLOCK */
    register8_t GPIOR0;       /* General Purpose I/O Register 0 */
    register8_t rsv_0x3F[11]; /* RESERVED REGISTER BLOCK */
    register8_t GPIOR1;       /* General Purpose I/O Register 1 */
    register8_t GPIOR2;       /* General Purpose I/O Register 2 */
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
    register8_t rsv_0x60[5];  /* RESERVED REGISTER BLOCK */
    register8_t SRCCAL;       /* SRC-Oscillator Calibration Register */
    register8_t FRCCAL;       /* FRC-Oscillator Calibration Register */
} CPU_t;


/* Clock Prescaler Change Enable Bit */
typedef enum CPU_CLPCE_enum
{
    CPU_CLPCE_CLEAR_gc = (0x00), /* Clock Prescaler Change Enable Bit - CLEAR */
    CPU_CLPCE_SET_gc   = (0x80), /* Clock Prescaler Change Enable Bit - SET */
} CPU_CLPCE_t;

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

/* Clock Monitoring Enable */
typedef enum CPU_CMONEN_enum
{
    CPU_CMONEN_CLEAR_gc = (0x00), /* Clock Monitoring Enable - CLEAR */
    CPU_CMONEN_SET_gc   = (0x08), /* Clock Monitoring Enable - SET */
} CPU_CMONEN_t;

/* Slow RC-oscillator Disable Bit */
typedef enum CPU_SRCD_enum
{
    CPU_SRCD_CLEAR_gc = (0x00), /* Slow RC-oscillator Disable Bit - CLEAR */
    CPU_SRCD_SET_gc   = (0x04), /* Slow RC-oscillator Disable Bit - SET */
} CPU_SRCD_t;

/* Clock Management Mode Bitss */
#define CPU_CMCR_CMM_gc(x) (x & 0x03)

/* External Clock input Flag Bit */
typedef enum CPU_ECF_enum
{
    CPU_ECF_CLEAR_gc = (0x00), /* External Clock input Flag Bit - CLEAR */
    CPU_ECF_SET_gc   = (0x01), /* External Clock input Flag Bit - SET */
} CPU_ECF_t;

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

/* Voltage Monitor Flag */
typedef enum CPU_VMF_enum
{
    CPU_VMF_CLEAR_gc = (0x00), /* Voltage Monitor Flag - CLEAR */
    CPU_VMF_SET_gc   = (0x20), /* Voltage Monitor Flag - SET */
} CPU_VMF_t;

/* Voltage Monitor Interrupt Mask Bit */
typedef enum CPU_VMIM_enum
{
    CPU_VMIM_CLEAR_gc = (0x00), /* Voltage Monitor Interrupt Mask Bit - CLEAR */
    CPU_VMIM_SET_gc   = (0x10), /* Voltage Monitor Interrupt Mask Bit - SET */
} CPU_VMIM_t;

/* Voltage Monitor Level Select Bits */
#define CPU_VMCSR_VMLS_gc(x) ((x<<1) & 0x0E)

/* Voltage Monitor Enable Bit */
typedef enum CPU_VMEN_enum
{
    CPU_VMEN_CLEAR_gc = (0x00), /* Voltage Monitor Enable Bit - CLEAR */
    CPU_VMEN_SET_gc   = (0x01), /* Voltage Monitor Enable Bit - SET */
} CPU_VMEN_t;

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
typedef enum CPU_SELFPRGEN_enum
{
    CPU_SELFPRGEN_CLEAR_gc = (0x00), /* Self Programming Enable - CLEAR */
    CPU_SELFPRGEN_SET_gc   = (0x01), /* Self Programming Enable - SET */
} CPU_SELFPRGEN_t;

/* MCU Control Register-PUD */
typedef enum CPU_PUD_enum
{
    CPU_PUD_CLEAR_gc = (0x00), /* MCU Control Register-PUD - CLEAR */
    CPU_PUD_SET_gc   = (0x10), /* MCU Control Register-PUD - SET */
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

/* Temperature Shutdown Reset Flag */
typedef enum CPU_TSRF_enum
{
    CPU_TSRF_CLEAR_gc = (0x00), /* Temperature Shutdown Reset Flag - CLEAR */
    CPU_TSRF_SET_gc   = (0x20), /* Temperature Shutdown Reset Flag - SET */
} CPU_TSRF_t;

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

/* Sleep Mode Control Register-SM */
typedef enum CPU_SM_enum
{
    CPU_SM_IDLE_gc     = (0x00<<1), /* Idle */
    CPU_SM_SENSORNR_gc = (0x01<<1), /* Sensor Noise Reduction */
    CPU_SM_PDOWN_gc    = (0x02<<1), /* Power Down */
    CPU_SM_VAL_0x03_gc = (0x03<<1), /* Reserved */
    CPU_SM_VAL_0x04_gc = (0x04<<1), /* Reserved */
    CPU_SM_VAL_0x05_gc = (0x05<<1), /* Reserved */
    CPU_SM_VAL_0x06_gc = (0x06<<1), /* Reserved */
    CPU_SM_VAL_0x07_gc = (0x07<<1), /* Reserved */
} CPU_SM_t;

/* Sleep Mode Control Register-SE */
typedef enum CPU_SE_enum
{
    CPU_SE_CLEAR_gc = (0x00), /* Sleep Mode Control Register-SE - CLEAR */
    CPU_SE_SET_gc   = (0x01), /* Sleep Mode Control Register-SE - SET */
} CPU_SE_t;

/*
--------------------------------------------------------------------------------
LFRX - 
--------------------------------------------------------------------------------
*/

typedef struct LFRX_struct
{
    register8_t rsv_0x00[56]; /* RESERVED REGISTER BLOCK */
    register8_t LFFR;         /* Low Frequency Flag Register */
    register8_t rsv_0x39[23]; /* RESERVED REGISTER BLOCK */
    register8_t LFRR;         /* LF RSSI Data Register */
    register8_t rsv_0x51;     /* RESERVED REGISTER */
    register8_t LFCDR;        /* LF receiver Control und Data Register */
    register8_t rsv_0x53[3];  /* RESERVED REGISTER BLOCK */
    register8_t LFRB;         /* Low Frequency Receive data Buffer */
    register8_t rsv_0x57[42]; /* RESERVED REGISTER BLOCK */
    register8_t LFIMR;        /* Low Frequency Interrupt Mask Register */
    register8_t LFRCR;        /* Low Frequency Receiver Control Register */
    register8_t LFHCR;        /* LF Header Compare Register */
    _REGISTER16 (LFIDC);      /* LF ID Compare Register  */
    register8_t rsv_0x85;     /* RESERVED REGISTER */
    _REGISTER16 (LFCAL);      /* LF Calibration Register  Bytes */
} LFRX_t;


/* LF receiver Capacitor Select Bits */
#define LFRX_LFRCR_LFCS_gc(x) ((x<<5) & 0xE0)

/* LF Receiver Sensitivity Select Bit */
typedef enum LFRX_LFRSS_enum
{
    LFRX_LFRSS_CLEAR_gc = (0x00), /* LF Receiver Sensitivity Select Bit - CLEAR */
    LFRX_LFRSS_SET_gc   = (0x10), /* LF Receiver Sensitivity Select Bit - SET */
} LFRX_LFRSS_t;

/* LF receiver Wake-up Mode Bits */
#define LFRX_LFRCR_LFWM_gc(x) ((x<<2) & 0x0C)

/* LF receiver Burst Mode enable Bit */
typedef enum LFRX_LFBM_enum
{
    LFRX_LFBM_CLEAR_gc = (0x00), /* LF receiver Burst Mode enable Bit - CLEAR */
    LFRX_LFBM_SET_gc   = (0x02), /* LF receiver Burst Mode enable Bit - SET */
} LFRX_LFBM_t;

/* LF receiver Enable Bit */
typedef enum LFRX_LFEN_enum
{
    LFRX_LFEN_CLEAR_gc = (0x00), /* LF receiver Enable Bit - CLEAR */
    LFRX_LFEN_SET_gc   = (0x01), /* LF receiver Enable Bit - SET */
} LFRX_LFEN_t;

/* LF receiver RSSI Software Capture Enable Bit */
typedef enum LFRX_LFSCE_enum
{
    LFRX_LFSCE_CLEAR_gc = (0x00), /* LF receiver RSSI Software Capture Enable Bit - CLEAR */
    LFRX_LFSCE_SET_gc   = (0x80), /* LF receiver RSSI Software Capture Enable Bit - SET */
} LFRX_LFSCE_t;

/* LF receiver Reset Bit */
typedef enum LFRX_LFRST_enum
{
    LFRX_LFRST_CLEAR_gc = (0x00), /* LF receiver Reset Bit - CLEAR */
    LFRX_LFRST_SET_gc   = (0x40), /* LF receiver Reset Bit - SET */
} LFRX_LFRST_t;

/* LF receiver Data Output Bit */
typedef enum LFRX_LFDO_enum
{
    LFRX_LFDO_CLEAR_gc = (0x00), /* LF receiver Data Output Bit - CLEAR */
    LFRX_LFDO_SET_gc   = (0x01), /* LF receiver Data Output Bit - SET */
} LFRX_LFDO_t;

/* LF receiver End of data Interrupt Mask bit */
typedef enum LFRX_LFEIM_enum
{
    LFRX_LFEIM_CLEAR_gc = (0x00), /* LF receiver End of data Interrupt Mask bit - CLEAR */
    LFRX_LFEIM_SET_gc   = (0x04), /* LF receiver End of data Interrupt Mask bit - SET */
} LFRX_LFEIM_t;

/* LF receiver data Buffer Interrupt Mask bit */
typedef enum LFRX_LFBIM_enum
{
    LFRX_LFBIM_CLEAR_gc = (0x00), /* LF receiver data Buffer Interrupt Mask bit - CLEAR */
    LFRX_LFBIM_SET_gc   = (0x02), /* LF receiver data Buffer Interrupt Mask bit - SET */
} LFRX_LFBIM_t;

/* LF receiver Wake-up Interrupt Mask bit */
typedef enum LFRX_LFWIM_enum
{
    LFRX_LFWIM_CLEAR_gc = (0x00), /* LF receiver Wake-up Interrupt Mask bit - CLEAR */
    LFRX_LFWIM_SET_gc   = (0x01), /* LF receiver Wake-up Interrupt Mask bit - SET */
} LFRX_LFWIM_t;

/* LF receiver Rssi data Flag */
typedef enum LFRX_LFRF_enum
{
    LFRX_LFRF_CLEAR_gc = (0x00), /* LF receiver Rssi data Flag - CLEAR */
    LFRX_LFRF_SET_gc   = (0x08), /* LF receiver Rssi data Flag - SET */
} LFRX_LFRF_t;

/* LF receiver End of data Flag */
typedef enum LFRX_LFEDF_enum
{
    LFRX_LFEDF_CLEAR_gc = (0x00), /* LF receiver End of data Flag - CLEAR */
    LFRX_LFEDF_SET_gc   = (0x04), /* LF receiver End of data Flag - SET */
} LFRX_LFEDF_t;

/* LF receiver data Buffer full Flag */
typedef enum LFRX_LFBF_enum
{
    LFRX_LFBF_CLEAR_gc = (0x00), /* LF receiver data Buffer full Flag - CLEAR */
    LFRX_LFBF_SET_gc   = (0x02), /* LF receiver data Buffer full Flag - SET */
} LFRX_LFBF_t;

/* LF receiver Wake-up Flag */
typedef enum LFRX_LFWPF_enum
{
    LFRX_LFWPF_CLEAR_gc = (0x00), /* LF receiver Wake-up Flag - CLEAR */
    LFRX_LFWPF_SET_gc   = (0x01), /* LF receiver Wake-up Flag - SET */
} LFRX_LFWPF_t;

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
    register8_t rsv_0x3E[5];  /* RESERVED REGISTER BLOCK */
    register8_t PCICR;        /* Pin Change Interrupt Control Register */
    register8_t EIMSK;        /* External Interrupt Mask Register */
    register8_t rsv_0x45[36]; /* RESERVED REGISTER BLOCK */
    register8_t EICRA;        /* External Interrupt Control Register */
    register8_t PCMSK0;       /* Pin Change Mask Register 0 */
    register8_t PCMSK1;       /* Pin Change Mask Register 1 */
    register8_t PCMSK2;       /* Pin Change Mask Register 2 */
} EXTERNAL_INTERRUPT_t;


/* External Interrupt Sense Control 1 Bits */
#define EXTERNAL_INTERRUPT_EICRA_ISC1_gc(x) ((x<<2) & 0x0C)

/* External Interrupt Sense Control 0 Bits */
#define EXTERNAL_INTERRUPT_EICRA_ISC0_gc(x) (x & 0x03)

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
TIMER_COUNTER_1 - 
--------------------------------------------------------------------------------
*/

typedef struct TIMER_COUNTER_1_struct
{
    register8_t rsv_0x00[58]; /* RESERVED REGISTER BLOCK */
    register8_t T10IFR;       /* Timer1/0 Interrupt Flag Register */
    register8_t rsv_0x3B[29]; /* RESERVED REGISTER BLOCK */
    register8_t T1CR;         /* Timer 1 Control Register */
} TIMER_COUNTER_1_t;


/* Timer 1 Interrupt Enable Bit */
typedef enum TIMER_COUNTER_1_T1IE_enum
{
    TIMER_COUNTER_1_T1IE_CLEAR_gc = (0x00), /* Timer 1 Interrupt Enable Bit - CLEAR */
    TIMER_COUNTER_1_T1IE_SET_gc   = (0x80), /* Timer 1 Interrupt Enable Bit - SET */
} TIMER_COUNTER_1_T1IE_t;

/* Timer 1 Clock Select Bits */
#define TIMER_COUNTER_1_T1CR_T1CS_gc(x) ((x<<3) & 0x38)

/* Timer 1 Prescaler Select Bits */
#define TIMER_COUNTER_1_T1CR_T1PS_gc(x) (x & 0x07)

/* Timer 1 Flag Bit */
typedef enum TIMER_COUNTER_1_T1F_enum
{
    TIMER_COUNTER_1_T1F_CLEAR_gc = (0x00), /* Timer 1 Flag Bit - CLEAR */
    TIMER_COUNTER_1_T1F_SET_gc   = (0x02), /* Timer 1 Flag Bit - SET */
} TIMER_COUNTER_1_T1F_t;

/* Timer 0 Flag Bit */
typedef enum TIMER_COUNTER_1_T0F_enum
{
    TIMER_COUNTER_1_T0F_CLEAR_gc = (0x00), /* Timer 0 Flag Bit - CLEAR */
    TIMER_COUNTER_1_T0F_SET_gc   = (0x01), /* Timer 0 Flag Bit - SET */
} TIMER_COUNTER_1_T0F_t;

/*
--------------------------------------------------------------------------------
TIMER_COUNTER_2 - 
--------------------------------------------------------------------------------
*/

typedef struct TIMER_COUNTER_2_struct
{
    register8_t rsv_0x00[49]; /* RESERVED REGISTER BLOCK */
    register8_t T2CRA;        /* Timer 2 Control Register A */
    register8_t T2CRB;        /* Timer 2 Control Register B */
    register8_t rsv_0x33[8];  /* RESERVED REGISTER BLOCK */
    register8_t T2IFR;        /* Timer2 Interrupt Flag Register */
    register8_t rsv_0x3C[19]; /* RESERVED REGISTER BLOCK */
    register8_t T2MDR;        /* Timer 2 Modulator Data Register */
    register8_t rsv_0x50[30]; /* RESERVED REGISTER BLOCK */
    register8_t T2ICRL;       /* Timer 2 Input Capture Register Low Byte */
    register8_t T2ICR;        /* Timer 2 Input Capture Register High Byte */
    _REGISTER16 (T2COR);      /* Timer2 Compare Register  Bytes */
    register8_t rsv_0x71;     /* RESERVED REGISTER */
    register8_t T2MRA;        /* Timer 2 Mode Register A */
    register8_t T2MRB;        /* Timer 2 Mode Register B */
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

/* Timer Input Capture Select Bit */
typedef enum TIMER_COUNTER_2_T2ICS_enum
{
    TIMER_COUNTER_2_T2ICS_CLEAR_gc = (0x00), /* Timer Input Capture Select Bit - CLEAR */
    TIMER_COUNTER_2_T2ICS_SET_gc   = (0x20), /* Timer Input Capture Select Bit - SET */
} TIMER_COUNTER_2_T2ICS_t;

/* Timer 2 Compare Reset Mask Bit */
typedef enum TIMER_COUNTER_2_T2CRM_enum
{
    TIMER_COUNTER_2_T2CRM_CLEAR_gc = (0x00), /* Timer 2 Compare Reset Mask Bit - CLEAR */
    TIMER_COUNTER_2_T2CRM_SET_gc   = (0x08), /* Timer 2 Compare Reset Mask Bit - SET */
} TIMER_COUNTER_2_T2CRM_t;

/* Timer2 Counter Reset */
typedef enum TIMER_COUNTER_2_T2CR_enum
{
    TIMER_COUNTER_2_T2CR_CLEAR_gc = (0x00), /* Timer2 Counter Reset - CLEAR */
    TIMER_COUNTER_2_T2CR_SET_gc   = (0x04), /* Timer2 Counter Reset - SET */
} TIMER_COUNTER_2_T2CR_t;

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

/* Timer 2 Software Capture Enable Bit */
typedef enum TIMER_COUNTER_2_T2SCE_enum
{
    TIMER_COUNTER_2_T2SCE_CLEAR_gc = (0x00), /* Timer 2 Software Capture Enable Bit - CLEAR */
    TIMER_COUNTER_2_T2SCE_SET_gc   = (0x01), /* Timer 2 Software Capture Enable Bit - SET */
} TIMER_COUNTER_2_T2SCE_t;

/* Timer2 SSI Transmit Complete Flag Bit */
typedef enum TIMER_COUNTER_2_T2TCF_enum
{
    TIMER_COUNTER_2_T2TCF_CLEAR_gc = (0x00), /* Timer2 SSI Transmit Complete Flag Bit - CLEAR */
    TIMER_COUNTER_2_T2TCF_SET_gc   = (0x20), /* Timer2 SSI Transmit Complete Flag Bit - SET */
} TIMER_COUNTER_2_T2TCF_t;

/* Timer2 SSI Transmit Flag Bit */
typedef enum TIMER_COUNTER_2_T2TXF_enum
{
    TIMER_COUNTER_2_T2TXF_CLEAR_gc = (0x00), /* Timer2 SSI Transmit Flag Bit - CLEAR */
    TIMER_COUNTER_2_T2TXF_SET_gc   = (0x10), /* Timer2 SSI Transmit Flag Bit - SET */
} TIMER_COUNTER_2_T2TXF_t;

/* Timer2 SSI Receive Flag Bit */
typedef enum TIMER_COUNTER_2_T2RXF_enum
{
    TIMER_COUNTER_2_T2RXF_CLEAR_gc = (0x00), /* Timer2 SSI Receive Flag Bit - CLEAR */
    TIMER_COUNTER_2_T2RXF_SET_gc   = (0x08), /* Timer2 SSI Receive Flag Bit - SET */
} TIMER_COUNTER_2_T2RXF_t;

/* Timer2 Input Capture Flag Bit */
typedef enum TIMER_COUNTER_2_T2ICF_enum
{
    TIMER_COUNTER_2_T2ICF_CLEAR_gc = (0x00), /* Timer2 Input Capture Flag Bit - CLEAR */
    TIMER_COUNTER_2_T2ICF_SET_gc   = (0x04), /* Timer2 Input Capture Flag Bit - SET */
} TIMER_COUNTER_2_T2ICF_t;

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

/* Timer2 SSI Transmit Complete Interrupt Mask Bit */
typedef enum TIMER_COUNTER_2_T2TCIM_enum
{
    TIMER_COUNTER_2_T2TCIM_CLEAR_gc = (0x00), /* Timer2 SSI Transmit Complete Interrupt Mask Bit - CLEAR */
    TIMER_COUNTER_2_T2TCIM_SET_gc   = (0x20), /* Timer2 SSI Transmit Complete Interrupt Mask Bit - SET */
} TIMER_COUNTER_2_T2TCIM_t;

/* Timer2 SSI Transmit Interrupt Mask Bit */
typedef enum TIMER_COUNTER_2_T2TXIM_enum
{
    TIMER_COUNTER_2_T2TXIM_CLEAR_gc = (0x00), /* Timer2 SSI Transmit Interrupt Mask Bit - CLEAR */
    TIMER_COUNTER_2_T2TXIM_SET_gc   = (0x10), /* Timer2 SSI Transmit Interrupt Mask Bit - SET */
} TIMER_COUNTER_2_T2TXIM_t;

/* Timer2 SSI Receive Interrupt Mask Bit */
typedef enum TIMER_COUNTER_2_T2RXIM_enum
{
    TIMER_COUNTER_2_T2RXIM_CLEAR_gc = (0x00), /* Timer2 SSI Receive Interrupt Mask Bit - CLEAR */
    TIMER_COUNTER_2_T2RXIM_SET_gc   = (0x08), /* Timer2 SSI Receive Interrupt Mask Bit - SET */
} TIMER_COUNTER_2_T2RXIM_t;

/* Timer 2 Capture Interrupt Mask Bit */
typedef enum TIMER_COUNTER_2_T2CPIM_enum
{
    TIMER_COUNTER_2_T2CPIM_CLEAR_gc = (0x00), /* Timer 2 Capture Interrupt Mask Bit - CLEAR */
    TIMER_COUNTER_2_T2CPIM_SET_gc   = (0x04), /* Timer 2 Capture Interrupt Mask Bit - SET */
} TIMER_COUNTER_2_T2CPIM_t;

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

/* Timer 2 Top select Bits */
#define TIMER_COUNTER_2_T2MRA_T2TP_gc(x) ((x<<6) & 0xC0)

/* Timer 2 Input Capture Noise Canceler Bit */
typedef enum TIMER_COUNTER_2_T2CNC_enum
{
    TIMER_COUNTER_2_T2CNC_CLEAR_gc = (0x00), /* Timer 2 Input Capture Noise Canceler Bit - CLEAR */
    TIMER_COUNTER_2_T2CNC_SET_gc   = (0x20), /* Timer 2 Input Capture Noise Canceler Bit - SET */
} TIMER_COUNTER_2_T2CNC_t;

/* Timer 2 Capture Edge Select Bits */
#define TIMER_COUNTER_2_T2MRA_T2CE_gc(x) ((x<<3) & 0x18)

/* Timer 2 Clock Select Bits */
#define TIMER_COUNTER_2_T2MRA_T2CS_gc(x) (x & 0x07)

/* Timer 2 SSI Enable Bit */
typedef enum TIMER_COUNTER_2_T2SSIE_enum
{
    TIMER_COUNTER_2_T2SSIE_CLEAR_gc = (0x00), /* Timer 2 SSI Enable Bit - CLEAR */
    TIMER_COUNTER_2_T2SSIE_SET_gc   = (0x80), /* Timer 2 SSI Enable Bit - SET */
} TIMER_COUNTER_2_T2SSIE_t;

/* Timer2 Clock Polarity for SSI shift clock */
typedef enum TIMER_COUNTER_2_T2CPOL_enum
{
    TIMER_COUNTER_2_T2CPOL_CLEAR_gc = (0x00), /* Timer2 Clock Polarity for SSI shift clock - CLEAR */
    TIMER_COUNTER_2_T2CPOL_SET_gc   = (0x40), /* Timer2 Clock Polarity for SSI shift clock - SET */
} TIMER_COUNTER_2_T2CPOL_t;

/* Timer 2 Toggle Output Preset Bit */
typedef enum TIMER_COUNTER_2_T2TOP_enum
{
    TIMER_COUNTER_2_T2TOP_CLEAR_gc = (0x00), /* Timer 2 Toggle Output Preset Bit - CLEAR */
    TIMER_COUNTER_2_T2TOP_SET_gc   = (0x10), /* Timer 2 Toggle Output Preset Bit - SET */
} TIMER_COUNTER_2_T2TOP_t;

/* Timer 2 Mode Bits */
#define TIMER_COUNTER_2_T2MRB_T2M_gc(x) (x & 0x0F)

/*
--------------------------------------------------------------------------------
TIMER_COUNTER_3 - 
--------------------------------------------------------------------------------
*/

typedef struct TIMER_COUNTER_3_struct
{
    register8_t rsv_0x00[52]; /* RESERVED REGISTER BLOCK */
    register8_t T3CRA;        /* Timer 3 Control Register A */
    register8_t rsv_0x35[7];  /* RESERVED REGISTER BLOCK */
    register8_t T3IFR;        /* Timer3 Interrupt Flag Register */
    register8_t rsv_0x3D[57]; /* RESERVED REGISTER BLOCK */
    _REGISTER16 (T3ICR);      /* Timer3 Input Capture Register  Bytes */
    register8_t rsv_0x77;     /* RESERVED REGISTER */
    _REGISTER16 (T3CORA);     /* Timer3 COmpare Register A  Bytes */
    register8_t rsv_0x79;     /* RESERVED REGISTER */
    _REGISTER16 (T3CORB);     /* Timer3 COmpare Register B  Bytes */
    register8_t rsv_0x7B;     /* RESERVED REGISTER */
    register8_t T3MRA;        /* Timer 3 Mode Register A */
    register8_t T3MRB;        /* Timer 3 Mode Register B */
    register8_t T3CRB;        /* Timer 3 Control Register B */
    register8_t T3IMR;        /* Timer3 Interrupt Mask Register */
} TIMER_COUNTER_3_t;


/* Timer 3 Enable Bit */
typedef enum TIMER_COUNTER_3_T3E_enum
{
    TIMER_COUNTER_3_T3E_CLEAR_gc = (0x00), /* Timer 3 Enable Bit - CLEAR */
    TIMER_COUNTER_3_T3E_SET_gc   = (0x80), /* Timer 3 Enable Bit - SET */
} TIMER_COUNTER_3_T3E_t;

/* Timer 3 Toggle with Start Bit */
typedef enum TIMER_COUNTER_3_T3TS_enum
{
    TIMER_COUNTER_3_T3TS_CLEAR_gc = (0x00), /* Timer 3 Toggle with Start Bit - CLEAR */
    TIMER_COUNTER_3_T3TS_SET_gc   = (0x40), /* Timer 3 Toggle with Start Bit - SET */
} TIMER_COUNTER_3_T3TS_t;

/* Timer3 Counter Reset */
typedef enum TIMER_COUNTER_3_T3CR_enum
{
    TIMER_COUNTER_3_T3CR_CLEAR_gc = (0x00), /* Timer3 Counter Reset - CLEAR */
    TIMER_COUNTER_3_T3CR_SET_gc   = (0x04), /* Timer3 Counter Reset - SET */
} TIMER_COUNTER_3_T3CR_t;

/* Timer 3 Software Capture Enable Bit */
typedef enum TIMER_COUNTER_3_T3SCE_enum
{
    TIMER_COUNTER_3_T3SCE_CLEAR_gc = (0x00), /* Timer 3 Software Capture Enable Bit - CLEAR */
    TIMER_COUNTER_3_T3SCE_SET_gc   = (0x02), /* Timer 3 Software Capture Enable Bit - SET */
} TIMER_COUNTER_3_T3SCE_t;

/* Timer 3 Alternate Compare register sequence bit */
typedef enum TIMER_COUNTER_3_T3AC_enum
{
    TIMER_COUNTER_3_T3AC_CLEAR_gc = (0x00), /* Timer 3 Alternate Compare register sequence bit - CLEAR */
    TIMER_COUNTER_3_T3AC_SET_gc   = (0x01), /* Timer 3 Alternate Compare register sequence bit - SET */
} TIMER_COUNTER_3_T3AC_t;

/* Timer 3 CaPture Reset Mask bit */
typedef enum TIMER_COUNTER_3_T3CPRM_enum
{
    TIMER_COUNTER_3_T3CPRM_CLEAR_gc = (0x00), /* Timer 3 CaPture Reset Mask bit - CLEAR */
    TIMER_COUNTER_3_T3CPRM_SET_gc   = (0x40), /* Timer 3 CaPture Reset Mask bit - SET */
} TIMER_COUNTER_3_T3CPRM_t;

/* Timer 3 Compare Reset Mask bit B */
typedef enum TIMER_COUNTER_3_T3CRMB_enum
{
    TIMER_COUNTER_3_T3CRMB_CLEAR_gc = (0x00), /* Timer 3 Compare Reset Mask bit B - CLEAR */
    TIMER_COUNTER_3_T3CRMB_SET_gc   = (0x20), /* Timer 3 Compare Reset Mask bit B - SET */
} TIMER_COUNTER_3_T3CRMB_t;

/* Timer 3 Single Action Mask bit B */
typedef enum TIMER_COUNTER_3_T3SAMB_enum
{
    TIMER_COUNTER_3_T3SAMB_CLEAR_gc = (0x00), /* Timer 3 Single Action Mask bit B - CLEAR */
    TIMER_COUNTER_3_T3SAMB_SET_gc   = (0x10), /* Timer 3 Single Action Mask bit B - SET */
} TIMER_COUNTER_3_T3SAMB_t;

/* Timer 3 Compare Toggle Mask bit B */
typedef enum TIMER_COUNTER_3_T3CTMB_enum
{
    TIMER_COUNTER_3_T3CTMB_CLEAR_gc = (0x00), /* Timer 3 Compare Toggle Mask bit B - CLEAR */
    TIMER_COUNTER_3_T3CTMB_SET_gc   = (0x08), /* Timer 3 Compare Toggle Mask bit B - SET */
} TIMER_COUNTER_3_T3CTMB_t;

/* Timer 3 Compare Reset Mask bit A */
typedef enum TIMER_COUNTER_3_T3CRMA_enum
{
    TIMER_COUNTER_3_T3CRMA_CLEAR_gc = (0x00), /* Timer 3 Compare Reset Mask bit A - CLEAR */
    TIMER_COUNTER_3_T3CRMA_SET_gc   = (0x04), /* Timer 3 Compare Reset Mask bit A - SET */
} TIMER_COUNTER_3_T3CRMA_t;

/* Timer 3 Single Action Mask bit A */
typedef enum TIMER_COUNTER_3_T3SAMA_enum
{
    TIMER_COUNTER_3_T3SAMA_CLEAR_gc = (0x00), /* Timer 3 Single Action Mask bit A - CLEAR */
    TIMER_COUNTER_3_T3SAMA_SET_gc   = (0x02), /* Timer 3 Single Action Mask bit A - SET */
} TIMER_COUNTER_3_T3SAMA_t;

/* Timer 3 Compare Toggle Mask bit A */
typedef enum TIMER_COUNTER_3_T3CTMA_enum
{
    TIMER_COUNTER_3_T3CTMA_CLEAR_gc = (0x00), /* Timer 3 Compare Toggle Mask bit A - CLEAR */
    TIMER_COUNTER_3_T3CTMA_SET_gc   = (0x01), /* Timer 3 Compare Toggle Mask bit A - SET */
} TIMER_COUNTER_3_T3CTMA_t;

/* Timer 3 Input Capture Select Bits */
#define TIMER_COUNTER_3_T3MRA_T3ICS_gc(x) ((x<<6) & 0xC0)

/* Timer 3 input Capture Noise Canceler Bit */
typedef enum TIMER_COUNTER_3_T3CNC_enum
{
    TIMER_COUNTER_3_T3CNC_CLEAR_gc = (0x00), /* Timer 3 input Capture Noise Canceler Bit - CLEAR */
    TIMER_COUNTER_3_T3CNC_SET_gc   = (0x20), /* Timer 3 input Capture Noise Canceler Bit - SET */
} TIMER_COUNTER_3_T3CNC_t;

/* Timer 3 Capture Edge select Bits */
#define TIMER_COUNTER_3_T3MRA_T3CE_gc(x) ((x<<3) & 0x18)

/* Timer 3 Clock Select Bits */
#define TIMER_COUNTER_3_T3MRA_T3CS_gc(x) (x & 0x07)

/* Timer3 Input Capture Flag bit */
typedef enum TIMER_COUNTER_3_T3ICF_enum
{
    TIMER_COUNTER_3_T3ICF_CLEAR_gc = (0x00), /* Timer3 Input Capture Flag bit - CLEAR */
    TIMER_COUNTER_3_T3ICF_SET_gc   = (0x08), /* Timer3 Input Capture Flag bit - SET */
} TIMER_COUNTER_3_T3ICF_t;

/* Timer3 Compare B Flag bit */
typedef enum TIMER_COUNTER_3_T3COBF_enum
{
    TIMER_COUNTER_3_T3COBF_CLEAR_gc = (0x00), /* Timer3 Compare B Flag bit - CLEAR */
    TIMER_COUNTER_3_T3COBF_SET_gc   = (0x04), /* Timer3 Compare B Flag bit - SET */
} TIMER_COUNTER_3_T3COBF_t;

/* Timer3 Compare A Flag bit */
typedef enum TIMER_COUNTER_3_T3COAF_enum
{
    TIMER_COUNTER_3_T3COAF_CLEAR_gc = (0x00), /* Timer3 Compare A Flag bit - CLEAR */
    TIMER_COUNTER_3_T3COAF_SET_gc   = (0x02), /* Timer3 Compare A Flag bit - SET */
} TIMER_COUNTER_3_T3COAF_t;

/* Timer3 OverFlow Flag bit */
typedef enum TIMER_COUNTER_3_T3OFF_enum
{
    TIMER_COUNTER_3_T3OFF_CLEAR_gc = (0x00), /* Timer3 OverFlow Flag bit - CLEAR */
    TIMER_COUNTER_3_T3OFF_SET_gc   = (0x01), /* Timer3 OverFlow Flag bit - SET */
} TIMER_COUNTER_3_T3OFF_t;

/* Timer3 Capture Interrupt Mask bit */
typedef enum TIMER_COUNTER_3_T3CPIM_enum
{
    TIMER_COUNTER_3_T3CPIM_CLEAR_gc = (0x00), /* Timer3 Capture Interrupt Mask bit - CLEAR */
    TIMER_COUNTER_3_T3CPIM_SET_gc   = (0x08), /* Timer3 Capture Interrupt Mask bit - SET */
} TIMER_COUNTER_3_T3CPIM_t;

/* Timer3 Compare B Interrupt Mask bit */
typedef enum TIMER_COUNTER_3_T3CBIM_enum
{
    TIMER_COUNTER_3_T3CBIM_CLEAR_gc = (0x00), /* Timer3 Compare B Interrupt Mask bit - CLEAR */
    TIMER_COUNTER_3_T3CBIM_SET_gc   = (0x04), /* Timer3 Compare B Interrupt Mask bit - SET */
} TIMER_COUNTER_3_T3CBIM_t;

/* Timer3 Compare A Interrupt Mask bit */
typedef enum TIMER_COUNTER_3_T3CAIM_enum
{
    TIMER_COUNTER_3_T3CAIM_CLEAR_gc = (0x00), /* Timer3 Compare A Interrupt Mask bit - CLEAR */
    TIMER_COUNTER_3_T3CAIM_SET_gc   = (0x02), /* Timer3 Compare A Interrupt Mask bit - SET */
} TIMER_COUNTER_3_T3CAIM_t;

/* Timer3 Overflow Interrupt Mask bit */
typedef enum TIMER_COUNTER_3_T3OIM_enum
{
    TIMER_COUNTER_3_T3OIM_CLEAR_gc = (0x00), /* Timer3 Overflow Interrupt Mask bit - CLEAR */
    TIMER_COUNTER_3_T3OIM_SET_gc   = (0x01), /* Timer3 Overflow Interrupt Mask bit - SET */
} TIMER_COUNTER_3_T3OIM_t;

/* Timer 3 Toggle Output Preset Bit */
typedef enum TIMER_COUNTER_3_T3TOP_enum
{
    TIMER_COUNTER_3_T3TOP_CLEAR_gc = (0x00), /* Timer 3 Toggle Output Preset Bit - CLEAR */
    TIMER_COUNTER_3_T3TOP_SET_gc   = (0x10), /* Timer 3 Toggle Output Preset Bit - SET */
} TIMER_COUNTER_3_T3TOP_t;

/* Timer 3 Mode Bits */
#define TIMER_COUNTER_3_T3MRB_T3M_gc(x) (x & 0x07)

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
TIMER_COUNTER_0 - 
--------------------------------------------------------------------------------
*/

typedef struct TIMER_COUNTER_0_struct
{
    register8_t rsv_0x00[58]; /* RESERVED REGISTER BLOCK */
    register8_t T10IFR;       /* Timer1/0 Interrupt Flag Register */
    register8_t rsv_0x3B[30]; /* RESERVED REGISTER BLOCK */
    register8_t T0CR;         /* Timer 0 Control Register */
} TIMER_COUNTER_0_t;


/* Timer 0 Prescaler B Select Bits */
#define TIMER_COUNTER_0_T0CR_T0PBS_gc(x) ((x<<5) & 0xE0)

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

/* Timer 0 Prescaler A Select Bits */
#define TIMER_COUNTER_0_T0CR_T0PAS_gc(x) (x & 0x07)

/* Timer 1 Flag Bit */
typedef enum TIMER_COUNTER_0_T1F_enum
{
    TIMER_COUNTER_0_T1F_CLEAR_gc = (0x00), /* Timer 1 Flag Bit - CLEAR */
    TIMER_COUNTER_0_T1F_SET_gc   = (0x02), /* Timer 1 Flag Bit - SET */
} TIMER_COUNTER_0_T1F_t;

/* Timer 0 Flag Bit */
typedef enum TIMER_COUNTER_0_T0F_enum
{
    TIMER_COUNTER_0_T0F_CLEAR_gc = (0x00), /* Timer 0 Flag Bit - CLEAR */
    TIMER_COUNTER_0_T0F_SET_gc   = (0x01), /* Timer 0 Flag Bit - SET */
} TIMER_COUNTER_0_T0F_t;

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
} EEPROM_t;


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

#define SENSOR_INTERFACE   (*(SENSOR_INTERFACE_t *) 0x0000)   
#define SPI                (*(SPI_t *) 0x0000)                
#define CPU                (*(CPU_t *) 0x0000)                
#define LFRX               (*(LFRX_t *) 0x0000)               
#define EXTERNAL_INTERRUPT (*(EXTERNAL_INTERRUPT_t *) 0x0000) 
#define PORTB              (*(PORTB_t *) 0x0000)              
#define PORTD              (*(PORTD_t *) 0x0000)              
#define TIMER_COUNTER_1    (*(TIMER_COUNTER_1_t *) 0x0000)    
#define TIMER_COUNTER_2    (*(TIMER_COUNTER_2_t *) 0x0000)    
#define TIMER_COUNTER_3    (*(TIMER_COUNTER_3_t *) 0x0000)    
#define WDT                (*(WDT_t *) 0x0000)                /* Watchdog Timer */
#define TIMER_COUNTER_0    (*(TIMER_COUNTER_0_t *) 0x0000)    
#define EEPROM             (*(EEPROM_t *) 0x0000)             
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


/* Upper EEPROM Locked (disabled) */
#define FUSE_EELOCK_CLEAR_gc (0x00) /* Upper EEPROM Locked (disabled) - CLEAR */
#define FUSE_EELOCK_SET_gc   (0x80) /* Upper EEPROM Locked (disabled) - SET */


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


/* Boot size select */
#define FUSE_BOOTSZ_VAL_0x03_gc (0x03<<1) /* Boot size = 128 words */
#define FUSE_BOOTSZ_VAL_0x02_gc (0x02<<1) /* Boot size = 256 words */
#define FUSE_BOOTSZ_VAL_0x01_gc (0x01<<1) /* Boot size = 512 words */
#define FUSE_BOOTSZ_VAL_0x00_gc (0x00<<1) /* Boot size = 1024 words */


/* Select reset vector */
#define FUSE_BOOTRST_CLEAR_gc (0x00) /* Select reset vector - CLEAR */
#define FUSE_BOOTRST_SET_gc   (0x01) /* Select reset vector - SET */


/* Divide clock by 8 internally */
#define FUSE_CKDIV8_CLEAR_gc (0x00) /* Divide clock by 8 internally - CLEAR */
#define FUSE_CKDIV8_SET_gc   (0x80) /* Divide clock by 8 internally - SET */


/* Clock output on PORTC1 */
#define FUSE_CKOUT_CLEAR_gc (0x00) /* Clock output on PORTC1 - CLEAR */
#define FUSE_CKOUT_SET_gc   (0x40) /* Clock output on PORTC1 - SET */


/* Select Clock Source */
#define FUSE_SUT_CKSEL_VAL_0x00_gc (0x00<<4) /* Start-up time PWRDWN/RESET: 6 CK/14 CK + 0 ms;   [SUT=00] */
#define FUSE_SUT_CKSEL_VAL_0x01_gc (0x01<<4) /* Start-up time PWRDWN/RESET: 6 CK/14 CK + 5.7 ms; [SUT=01] */
#define FUSE_SUT_CKSEL_VAL_0x02_gc (0x02<<4) /* Start-up time PWRDWN/RESET: 6 CK/14 CK + 90 ms;  [SUT=10] */


/* Enable Watchdog RC-Oscillator */
#define FUSE_WDRCON_CLEAR_gc (0x00) /* Enable Watchdog RC-Oscillator - CLEAR */
#define FUSE_WDRCON_SET_gc   (0x08) /* Enable Watchdog RC-Oscillator - SET */


/* Fast RC-Oscillator Frequency select */
#define FUSE_FRCFS_CLEAR_gc (0x00) /* Fast RC-Oscillator Frequency select - CLEAR */
#define FUSE_FRCFS_SET_gc   (0x04) /* Fast RC-Oscillator Frequency select - SET */


/* Brown-out detection enabled */
#define FUSE_BODEN_CLEAR_gc (0x00) /* Brown-out detection enabled - CLEAR */
#define FUSE_BODEN_SET_gc   (0x02) /* Brown-out detection enabled - SET */


/* Disable Temperatur shutdown Reset  */
#define FUSE_TSRDI_CLEAR_gc (0x00) /* Disable Temperatur shutdown Reset  - CLEAR */
#define FUSE_TSRDI_SET_gc   (0x01) /* Disable Temperatur shutdown Reset  - SET */


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
SENSOR_INTERFACE - 
--------------------------------------------------------------------------------
*/


/* Sensor Motion Enable Bit */
#define SENSOR_INTERFACE_SMEN_CLEAR_gc (0x00) /* Sensor Motion Enable Bit - CLEAR */
#define SENSOR_INTERFACE_SMEN_SET_gc   (0x08) /* Sensor Motion Enable Bit - SET */


/* Sensor enable Bits */
#define SENSOR_INTERFACE_SCR_SEN_gc(x) ((x<<1) & 0x06)

/* Sensor Measurement Start Bit */
#define SENSOR_INTERFACE_SMS_CLEAR_gc (0x00) /* Sensor Measurement Start Bit - CLEAR */
#define SENSOR_INTERFACE_SMS_SET_gc   (0x01) /* Sensor Measurement Start Bit - SET */


/* Sensor Capacitor Channel Select Bit2 */
#define SENSOR_INTERFACE_SCCR_SCCS_gc(x) ((x<<2) & 0x1C)

/* Sensor Reference Charge Current Bit1 */
#define SENSOR_INTERFACE_SCCR_SRCC_gc(x) (x & 0x03)

/* Motion Sensor Interrupt Enable Bit */
#define SENSOR_INTERFACE_MSIE_CLEAR_gc (0x00) /* Motion Sensor Interrupt Enable Bit - CLEAR */
#define SENSOR_INTERFACE_MSIE_SET_gc   (0x01) /* Motion Sensor Interrupt Enable Bit - SET */


/* Motion Sensor Output */
#define SENSOR_INTERFACE_MSENO_CLEAR_gc (0x00) /* Motion Sensor Output - CLEAR */
#define SENSOR_INTERFACE_MSENO_SET_gc   (0x02) /* Motion Sensor Output - SET */


/* Motion Sensor Flag */
#define SENSOR_INTERFACE_MSENF_CLEAR_gc (0x00) /* Motion Sensor Flag - CLEAR */
#define SENSOR_INTERFACE_MSENF_SET_gc   (0x01) /* Motion Sensor Flag - SET */


/* Temperature Sensor Shutdown mode Disable */
#define SENSOR_INTERFACE_TSSD_CLEAR_gc (0x00) /* Temperature Sensor Shutdown mode Disable - CLEAR */
#define SENSOR_INTERFACE_TSSD_SET_gc   (0x01) /* Temperature Sensor Shutdown mode Disable - SET */


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
#define CPU_CLPCE_CLEAR_gc (0x00) /* Clock Prescaler Change Enable Bit - CLEAR */
#define CPU_CLPCE_SET_gc   (0x80) /* Clock Prescaler Change Enable Bit - SET */


/* Clock Timer Prescaler Select Bits */
#define CPU_CLKPR_CLTPS_gc(x) ((x<<3) & 0x38)

/* Clock system Prescaler Select Bits */
#define CPU_CLKPR_CLKPS_gc(x) (x & 0x07)

/* Clock Management Control Change Enable Bit */
#define CPU_CMCCE_CLEAR_gc (0x00) /* Clock Management Control Change Enable Bit - CLEAR */
#define CPU_CMCCE_SET_gc   (0x80) /* Clock Management Control Change Enable Bit - SET */


/* External Clock Input Select Bit */
#define CPU_ECINS_CLEAR_gc (0x00) /* External Clock Input Select Bit - CLEAR */
#define CPU_ECINS_SET_gc   (0x20) /* External Clock Input Select Bit - SET */


/* Core Clock Select Bit */
#define CPU_CCS_CLEAR_gc (0x00) /* Core Clock Select Bit - CLEAR */
#define CPU_CCS_SET_gc   (0x10) /* Core Clock Select Bit - SET */


/* Clock Monitoring Enable */
#define CPU_CMONEN_CLEAR_gc (0x00) /* Clock Monitoring Enable - CLEAR */
#define CPU_CMONEN_SET_gc   (0x08) /* Clock Monitoring Enable - SET */


/* Slow RC-oscillator Disable Bit */
#define CPU_SRCD_CLEAR_gc (0x00) /* Slow RC-oscillator Disable Bit - CLEAR */
#define CPU_SRCD_SET_gc   (0x04) /* Slow RC-oscillator Disable Bit - SET */


/* Clock Management Mode Bitss */
#define CPU_CMCR_CMM_gc(x) (x & 0x03)

/* External Clock input Flag Bit */
#define CPU_ECF_CLEAR_gc (0x00) /* External Clock input Flag Bit - CLEAR */
#define CPU_ECF_SET_gc   (0x01) /* External Clock input Flag Bit - SET */


/* External Clock input Interrupt Enable Bit */
#define CPU_ECIE_CLEAR_gc (0x00) /* External Clock input Interrupt Enable Bit - CLEAR */
#define CPU_ECIE_SET_gc   (0x01) /* External Clock input Interrupt Enable Bit - SET */


/* Brown-Out Detection Level Select Bit */
#define CPU_BODLS_CLEAR_gc (0x00) /* Brown-Out Detection Level Select Bit - CLEAR */
#define CPU_BODLS_SET_gc   (0x80) /* Brown-Out Detection Level Select Bit - SET */


/* Brown-Out Detection on Power-Down Bit */
#define CPU_BODPD_CLEAR_gc (0x00) /* Brown-Out Detection on Power-Down Bit - CLEAR */
#define CPU_BODPD_SET_gc   (0x40) /* Brown-Out Detection on Power-Down Bit - SET */


/* Voltage Monitor Flag */
#define CPU_VMF_CLEAR_gc (0x00) /* Voltage Monitor Flag - CLEAR */
#define CPU_VMF_SET_gc   (0x20) /* Voltage Monitor Flag - SET */


/* Voltage Monitor Interrupt Mask Bit */
#define CPU_VMIM_CLEAR_gc (0x00) /* Voltage Monitor Interrupt Mask Bit - CLEAR */
#define CPU_VMIM_SET_gc   (0x10) /* Voltage Monitor Interrupt Mask Bit - SET */


/* Voltage Monitor Level Select Bits */
#define CPU_VMCSR_VMLS_gc(x) ((x<<1) & 0x0E)

/* Voltage Monitor Enable Bit */
#define CPU_VMEN_CLEAR_gc (0x00) /* Voltage Monitor Enable Bit - CLEAR */
#define CPU_VMEN_SET_gc   (0x01) /* Voltage Monitor Enable Bit - SET */


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
#define CPU_SELFPRGEN_CLEAR_gc (0x00) /* Self Programming Enable - CLEAR */
#define CPU_SELFPRGEN_SET_gc   (0x01) /* Self Programming Enable - SET */


/* MCU Control Register-PUD */
#define CPU_PUD_CLEAR_gc (0x00) /* MCU Control Register-PUD - CLEAR */
#define CPU_PUD_SET_gc   (0x10) /* MCU Control Register-PUD - SET */


/* Interrupt Vector Select */
#define CPU_IVSEL_CLEAR_gc (0x00) /* Interrupt Vector Select - CLEAR */
#define CPU_IVSEL_SET_gc   (0x02) /* Interrupt Vector Select - SET */


/* Interrupt Vector Change Enable */
#define CPU_IVCE_CLEAR_gc (0x00) /* Interrupt Vector Change Enable - CLEAR */
#define CPU_IVCE_SET_gc   (0x01) /* Interrupt Vector Change Enable - SET */


/* Temperature Shutdown Reset Flag */
#define CPU_TSRF_CLEAR_gc (0x00) /* Temperature Shutdown Reset Flag - CLEAR */
#define CPU_TSRF_SET_gc   (0x20) /* Temperature Shutdown Reset Flag - SET */


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


/* Sleep Mode Control Register-SM */
#define CPU_SM_IDLE_gc     (0x00<<1) /* Idle */
#define CPU_SM_SENSORNR_gc (0x01<<1) /* Sensor Noise Reduction */
#define CPU_SM_PDOWN_gc    (0x02<<1) /* Power Down */
#define CPU_SM_VAL_0x03_gc (0x03<<1) /* Reserved */
#define CPU_SM_VAL_0x04_gc (0x04<<1) /* Reserved */
#define CPU_SM_VAL_0x05_gc (0x05<<1) /* Reserved */
#define CPU_SM_VAL_0x06_gc (0x06<<1) /* Reserved */
#define CPU_SM_VAL_0x07_gc (0x07<<1) /* Reserved */


/* Sleep Mode Control Register-SE */
#define CPU_SE_CLEAR_gc (0x00) /* Sleep Mode Control Register-SE - CLEAR */
#define CPU_SE_SET_gc   (0x01) /* Sleep Mode Control Register-SE - SET */


/*
--------------------------------------------------------------------------------
LFRX - 
--------------------------------------------------------------------------------
*/


/* LF receiver Capacitor Select Bits */
#define LFRX_LFRCR_LFCS_gc(x) ((x<<5) & 0xE0)

/* LF Receiver Sensitivity Select Bit */
#define LFRX_LFRSS_CLEAR_gc (0x00) /* LF Receiver Sensitivity Select Bit - CLEAR */
#define LFRX_LFRSS_SET_gc   (0x10) /* LF Receiver Sensitivity Select Bit - SET */


/* LF receiver Wake-up Mode Bits */
#define LFRX_LFRCR_LFWM_gc(x) ((x<<2) & 0x0C)

/* LF receiver Burst Mode enable Bit */
#define LFRX_LFBM_CLEAR_gc (0x00) /* LF receiver Burst Mode enable Bit - CLEAR */
#define LFRX_LFBM_SET_gc   (0x02) /* LF receiver Burst Mode enable Bit - SET */


/* LF receiver Enable Bit */
#define LFRX_LFEN_CLEAR_gc (0x00) /* LF receiver Enable Bit - CLEAR */
#define LFRX_LFEN_SET_gc   (0x01) /* LF receiver Enable Bit - SET */


/* LF receiver RSSI Software Capture Enable Bit */
#define LFRX_LFSCE_CLEAR_gc (0x00) /* LF receiver RSSI Software Capture Enable Bit - CLEAR */
#define LFRX_LFSCE_SET_gc   (0x80) /* LF receiver RSSI Software Capture Enable Bit - SET */


/* LF receiver Reset Bit */
#define LFRX_LFRST_CLEAR_gc (0x00) /* LF receiver Reset Bit - CLEAR */
#define LFRX_LFRST_SET_gc   (0x40) /* LF receiver Reset Bit - SET */


/* LF receiver Data Output Bit */
#define LFRX_LFDO_CLEAR_gc (0x00) /* LF receiver Data Output Bit - CLEAR */
#define LFRX_LFDO_SET_gc   (0x01) /* LF receiver Data Output Bit - SET */


/* LF receiver End of data Interrupt Mask bit */
#define LFRX_LFEIM_CLEAR_gc (0x00) /* LF receiver End of data Interrupt Mask bit - CLEAR */
#define LFRX_LFEIM_SET_gc   (0x04) /* LF receiver End of data Interrupt Mask bit - SET */


/* LF receiver data Buffer Interrupt Mask bit */
#define LFRX_LFBIM_CLEAR_gc (0x00) /* LF receiver data Buffer Interrupt Mask bit - CLEAR */
#define LFRX_LFBIM_SET_gc   (0x02) /* LF receiver data Buffer Interrupt Mask bit - SET */


/* LF receiver Wake-up Interrupt Mask bit */
#define LFRX_LFWIM_CLEAR_gc (0x00) /* LF receiver Wake-up Interrupt Mask bit - CLEAR */
#define LFRX_LFWIM_SET_gc   (0x01) /* LF receiver Wake-up Interrupt Mask bit - SET */


/* LF receiver Rssi data Flag */
#define LFRX_LFRF_CLEAR_gc (0x00) /* LF receiver Rssi data Flag - CLEAR */
#define LFRX_LFRF_SET_gc   (0x08) /* LF receiver Rssi data Flag - SET */


/* LF receiver End of data Flag */
#define LFRX_LFEDF_CLEAR_gc (0x00) /* LF receiver End of data Flag - CLEAR */
#define LFRX_LFEDF_SET_gc   (0x04) /* LF receiver End of data Flag - SET */


/* LF receiver data Buffer full Flag */
#define LFRX_LFBF_CLEAR_gc (0x00) /* LF receiver data Buffer full Flag - CLEAR */
#define LFRX_LFBF_SET_gc   (0x02) /* LF receiver data Buffer full Flag - SET */


/* LF receiver Wake-up Flag */
#define LFRX_LFWPF_CLEAR_gc (0x00) /* LF receiver Wake-up Flag - CLEAR */
#define LFRX_LFWPF_SET_gc   (0x01) /* LF receiver Wake-up Flag - SET */


/*
--------------------------------------------------------------------------------
EXTERNAL_INTERRUPT - 
--------------------------------------------------------------------------------
*/


/* External Interrupt Sense Control 1 Bits */
#define EXTERNAL_INTERRUPT_EICRA_ISC1_gc(x) ((x<<2) & 0x0C)

/* External Interrupt Sense Control 0 Bits */
#define EXTERNAL_INTERRUPT_EICRA_ISC0_gc(x) (x & 0x03)

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
TIMER_COUNTER_1 - 
--------------------------------------------------------------------------------
*/


/* Timer 1 Interrupt Enable Bit */
#define TIMER_COUNTER_1_T1IE_CLEAR_gc (0x00) /* Timer 1 Interrupt Enable Bit - CLEAR */
#define TIMER_COUNTER_1_T1IE_SET_gc   (0x80) /* Timer 1 Interrupt Enable Bit - SET */


/* Timer 1 Clock Select Bits */
#define TIMER_COUNTER_1_T1CR_T1CS_gc(x) ((x<<3) & 0x38)

/* Timer 1 Prescaler Select Bits */
#define TIMER_COUNTER_1_T1CR_T1PS_gc(x) (x & 0x07)

/* Timer 1 Flag Bit */
#define TIMER_COUNTER_1_T1F_CLEAR_gc (0x00) /* Timer 1 Flag Bit - CLEAR */
#define TIMER_COUNTER_1_T1F_SET_gc   (0x02) /* Timer 1 Flag Bit - SET */


/* Timer 0 Flag Bit */
#define TIMER_COUNTER_1_T0F_CLEAR_gc (0x00) /* Timer 0 Flag Bit - CLEAR */
#define TIMER_COUNTER_1_T0F_SET_gc   (0x01) /* Timer 0 Flag Bit - SET */


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


/* Timer Input Capture Select Bit */
#define TIMER_COUNTER_2_T2ICS_CLEAR_gc (0x00) /* Timer Input Capture Select Bit - CLEAR */
#define TIMER_COUNTER_2_T2ICS_SET_gc   (0x20) /* Timer Input Capture Select Bit - SET */


/* Timer 2 Compare Reset Mask Bit */
#define TIMER_COUNTER_2_T2CRM_CLEAR_gc (0x00) /* Timer 2 Compare Reset Mask Bit - CLEAR */
#define TIMER_COUNTER_2_T2CRM_SET_gc   (0x08) /* Timer 2 Compare Reset Mask Bit - SET */


/* Timer2 Counter Reset */
#define TIMER_COUNTER_2_T2CR_CLEAR_gc (0x00) /* Timer2 Counter Reset - CLEAR */
#define TIMER_COUNTER_2_T2CR_SET_gc   (0x04) /* Timer2 Counter Reset - SET */


/* Timer 2 Compare Toggle Mask Bit */
#define TIMER_COUNTER_2_T2CTM_CLEAR_gc (0x00) /* Timer 2 Compare Toggle Mask Bit - CLEAR */
#define TIMER_COUNTER_2_T2CTM_SET_gc   (0x02) /* Timer 2 Compare Toggle Mask Bit - SET */


/* Timer 2 Overflow Toggle Mask Bit */
#define TIMER_COUNTER_2_T2OTM_CLEAR_gc (0x00) /* Timer 2 Overflow Toggle Mask Bit - CLEAR */
#define TIMER_COUNTER_2_T2OTM_SET_gc   (0x01) /* Timer 2 Overflow Toggle Mask Bit - SET */


/* Timer 2 Software Capture Enable Bit */
#define TIMER_COUNTER_2_T2SCE_CLEAR_gc (0x00) /* Timer 2 Software Capture Enable Bit - CLEAR */
#define TIMER_COUNTER_2_T2SCE_SET_gc   (0x01) /* Timer 2 Software Capture Enable Bit - SET */


/* Timer2 SSI Transmit Complete Flag Bit */
#define TIMER_COUNTER_2_T2TCF_CLEAR_gc (0x00) /* Timer2 SSI Transmit Complete Flag Bit - CLEAR */
#define TIMER_COUNTER_2_T2TCF_SET_gc   (0x20) /* Timer2 SSI Transmit Complete Flag Bit - SET */


/* Timer2 SSI Transmit Flag Bit */
#define TIMER_COUNTER_2_T2TXF_CLEAR_gc (0x00) /* Timer2 SSI Transmit Flag Bit - CLEAR */
#define TIMER_COUNTER_2_T2TXF_SET_gc   (0x10) /* Timer2 SSI Transmit Flag Bit - SET */


/* Timer2 SSI Receive Flag Bit */
#define TIMER_COUNTER_2_T2RXF_CLEAR_gc (0x00) /* Timer2 SSI Receive Flag Bit - CLEAR */
#define TIMER_COUNTER_2_T2RXF_SET_gc   (0x08) /* Timer2 SSI Receive Flag Bit - SET */


/* Timer2 Input Capture Flag Bit */
#define TIMER_COUNTER_2_T2ICF_CLEAR_gc (0x00) /* Timer2 Input Capture Flag Bit - CLEAR */
#define TIMER_COUNTER_2_T2ICF_SET_gc   (0x04) /* Timer2 Input Capture Flag Bit - SET */


/* Timer 2 Compare Flag Bit */
#define TIMER_COUNTER_2_T2COF_CLEAR_gc (0x00) /* Timer 2 Compare Flag Bit - CLEAR */
#define TIMER_COUNTER_2_T2COF_SET_gc   (0x02) /* Timer 2 Compare Flag Bit - SET */


/* Timer 2 Overflow Flag Bit */
#define TIMER_COUNTER_2_T2OFF_CLEAR_gc (0x00) /* Timer 2 Overflow Flag Bit - CLEAR */
#define TIMER_COUNTER_2_T2OFF_SET_gc   (0x01) /* Timer 2 Overflow Flag Bit - SET */


/* Timer2 SSI Transmit Complete Interrupt Mask Bit */
#define TIMER_COUNTER_2_T2TCIM_CLEAR_gc (0x00) /* Timer2 SSI Transmit Complete Interrupt Mask Bit - CLEAR */
#define TIMER_COUNTER_2_T2TCIM_SET_gc   (0x20) /* Timer2 SSI Transmit Complete Interrupt Mask Bit - SET */


/* Timer2 SSI Transmit Interrupt Mask Bit */
#define TIMER_COUNTER_2_T2TXIM_CLEAR_gc (0x00) /* Timer2 SSI Transmit Interrupt Mask Bit - CLEAR */
#define TIMER_COUNTER_2_T2TXIM_SET_gc   (0x10) /* Timer2 SSI Transmit Interrupt Mask Bit - SET */


/* Timer2 SSI Receive Interrupt Mask Bit */
#define TIMER_COUNTER_2_T2RXIM_CLEAR_gc (0x00) /* Timer2 SSI Receive Interrupt Mask Bit - CLEAR */
#define TIMER_COUNTER_2_T2RXIM_SET_gc   (0x08) /* Timer2 SSI Receive Interrupt Mask Bit - SET */


/* Timer 2 Capture Interrupt Mask Bit */
#define TIMER_COUNTER_2_T2CPIM_CLEAR_gc (0x00) /* Timer 2 Capture Interrupt Mask Bit - CLEAR */
#define TIMER_COUNTER_2_T2CPIM_SET_gc   (0x04) /* Timer 2 Capture Interrupt Mask Bit - SET */


/* Timer 2 Compare Interrupt Mask Bit */
#define TIMER_COUNTER_2_T2CIM_CLEAR_gc (0x00) /* Timer 2 Compare Interrupt Mask Bit - CLEAR */
#define TIMER_COUNTER_2_T2CIM_SET_gc   (0x02) /* Timer 2 Compare Interrupt Mask Bit - SET */


/* Timer 2 Overflow Interrupt Mask Bit */
#define TIMER_COUNTER_2_T2OIM_CLEAR_gc (0x00) /* Timer 2 Overflow Interrupt Mask Bit - CLEAR */
#define TIMER_COUNTER_2_T2OIM_SET_gc   (0x01) /* Timer 2 Overflow Interrupt Mask Bit - SET */


/* Timer 2 Top select Bits */
#define TIMER_COUNTER_2_T2MRA_T2TP_gc(x) ((x<<6) & 0xC0)

/* Timer 2 Input Capture Noise Canceler Bit */
#define TIMER_COUNTER_2_T2CNC_CLEAR_gc (0x00) /* Timer 2 Input Capture Noise Canceler Bit - CLEAR */
#define TIMER_COUNTER_2_T2CNC_SET_gc   (0x20) /* Timer 2 Input Capture Noise Canceler Bit - SET */


/* Timer 2 Capture Edge Select Bits */
#define TIMER_COUNTER_2_T2MRA_T2CE_gc(x) ((x<<3) & 0x18)

/* Timer 2 Clock Select Bits */
#define TIMER_COUNTER_2_T2MRA_T2CS_gc(x) (x & 0x07)

/* Timer 2 SSI Enable Bit */
#define TIMER_COUNTER_2_T2SSIE_CLEAR_gc (0x00) /* Timer 2 SSI Enable Bit - CLEAR */
#define TIMER_COUNTER_2_T2SSIE_SET_gc   (0x80) /* Timer 2 SSI Enable Bit - SET */


/* Timer2 Clock Polarity for SSI shift clock */
#define TIMER_COUNTER_2_T2CPOL_CLEAR_gc (0x00) /* Timer2 Clock Polarity for SSI shift clock - CLEAR */
#define TIMER_COUNTER_2_T2CPOL_SET_gc   (0x40) /* Timer2 Clock Polarity for SSI shift clock - SET */


/* Timer 2 Toggle Output Preset Bit */
#define TIMER_COUNTER_2_T2TOP_CLEAR_gc (0x00) /* Timer 2 Toggle Output Preset Bit - CLEAR */
#define TIMER_COUNTER_2_T2TOP_SET_gc   (0x10) /* Timer 2 Toggle Output Preset Bit - SET */


/* Timer 2 Mode Bits */
#define TIMER_COUNTER_2_T2MRB_T2M_gc(x) (x & 0x0F)

/*
--------------------------------------------------------------------------------
TIMER_COUNTER_3 - 
--------------------------------------------------------------------------------
*/


/* Timer 3 Enable Bit */
#define TIMER_COUNTER_3_T3E_CLEAR_gc (0x00) /* Timer 3 Enable Bit - CLEAR */
#define TIMER_COUNTER_3_T3E_SET_gc   (0x80) /* Timer 3 Enable Bit - SET */


/* Timer 3 Toggle with Start Bit */
#define TIMER_COUNTER_3_T3TS_CLEAR_gc (0x00) /* Timer 3 Toggle with Start Bit - CLEAR */
#define TIMER_COUNTER_3_T3TS_SET_gc   (0x40) /* Timer 3 Toggle with Start Bit - SET */


/* Timer3 Counter Reset */
#define TIMER_COUNTER_3_T3CR_CLEAR_gc (0x00) /* Timer3 Counter Reset - CLEAR */
#define TIMER_COUNTER_3_T3CR_SET_gc   (0x04) /* Timer3 Counter Reset - SET */


/* Timer 3 Software Capture Enable Bit */
#define TIMER_COUNTER_3_T3SCE_CLEAR_gc (0x00) /* Timer 3 Software Capture Enable Bit - CLEAR */
#define TIMER_COUNTER_3_T3SCE_SET_gc   (0x02) /* Timer 3 Software Capture Enable Bit - SET */


/* Timer 3 Alternate Compare register sequence bit */
#define TIMER_COUNTER_3_T3AC_CLEAR_gc (0x00) /* Timer 3 Alternate Compare register sequence bit - CLEAR */
#define TIMER_COUNTER_3_T3AC_SET_gc   (0x01) /* Timer 3 Alternate Compare register sequence bit - SET */


/* Timer 3 CaPture Reset Mask bit */
#define TIMER_COUNTER_3_T3CPRM_CLEAR_gc (0x00) /* Timer 3 CaPture Reset Mask bit - CLEAR */
#define TIMER_COUNTER_3_T3CPRM_SET_gc   (0x40) /* Timer 3 CaPture Reset Mask bit - SET */


/* Timer 3 Compare Reset Mask bit B */
#define TIMER_COUNTER_3_T3CRMB_CLEAR_gc (0x00) /* Timer 3 Compare Reset Mask bit B - CLEAR */
#define TIMER_COUNTER_3_T3CRMB_SET_gc   (0x20) /* Timer 3 Compare Reset Mask bit B - SET */


/* Timer 3 Single Action Mask bit B */
#define TIMER_COUNTER_3_T3SAMB_CLEAR_gc (0x00) /* Timer 3 Single Action Mask bit B - CLEAR */
#define TIMER_COUNTER_3_T3SAMB_SET_gc   (0x10) /* Timer 3 Single Action Mask bit B - SET */


/* Timer 3 Compare Toggle Mask bit B */
#define TIMER_COUNTER_3_T3CTMB_CLEAR_gc (0x00) /* Timer 3 Compare Toggle Mask bit B - CLEAR */
#define TIMER_COUNTER_3_T3CTMB_SET_gc   (0x08) /* Timer 3 Compare Toggle Mask bit B - SET */


/* Timer 3 Compare Reset Mask bit A */
#define TIMER_COUNTER_3_T3CRMA_CLEAR_gc (0x00) /* Timer 3 Compare Reset Mask bit A - CLEAR */
#define TIMER_COUNTER_3_T3CRMA_SET_gc   (0x04) /* Timer 3 Compare Reset Mask bit A - SET */


/* Timer 3 Single Action Mask bit A */
#define TIMER_COUNTER_3_T3SAMA_CLEAR_gc (0x00) /* Timer 3 Single Action Mask bit A - CLEAR */
#define TIMER_COUNTER_3_T3SAMA_SET_gc   (0x02) /* Timer 3 Single Action Mask bit A - SET */


/* Timer 3 Compare Toggle Mask bit A */
#define TIMER_COUNTER_3_T3CTMA_CLEAR_gc (0x00) /* Timer 3 Compare Toggle Mask bit A - CLEAR */
#define TIMER_COUNTER_3_T3CTMA_SET_gc   (0x01) /* Timer 3 Compare Toggle Mask bit A - SET */


/* Timer 3 Input Capture Select Bits */
#define TIMER_COUNTER_3_T3MRA_T3ICS_gc(x) ((x<<6) & 0xC0)

/* Timer 3 input Capture Noise Canceler Bit */
#define TIMER_COUNTER_3_T3CNC_CLEAR_gc (0x00) /* Timer 3 input Capture Noise Canceler Bit - CLEAR */
#define TIMER_COUNTER_3_T3CNC_SET_gc   (0x20) /* Timer 3 input Capture Noise Canceler Bit - SET */


/* Timer 3 Capture Edge select Bits */
#define TIMER_COUNTER_3_T3MRA_T3CE_gc(x) ((x<<3) & 0x18)

/* Timer 3 Clock Select Bits */
#define TIMER_COUNTER_3_T3MRA_T3CS_gc(x) (x & 0x07)

/* Timer3 Input Capture Flag bit */
#define TIMER_COUNTER_3_T3ICF_CLEAR_gc (0x00) /* Timer3 Input Capture Flag bit - CLEAR */
#define TIMER_COUNTER_3_T3ICF_SET_gc   (0x08) /* Timer3 Input Capture Flag bit - SET */


/* Timer3 Compare B Flag bit */
#define TIMER_COUNTER_3_T3COBF_CLEAR_gc (0x00) /* Timer3 Compare B Flag bit - CLEAR */
#define TIMER_COUNTER_3_T3COBF_SET_gc   (0x04) /* Timer3 Compare B Flag bit - SET */


/* Timer3 Compare A Flag bit */
#define TIMER_COUNTER_3_T3COAF_CLEAR_gc (0x00) /* Timer3 Compare A Flag bit - CLEAR */
#define TIMER_COUNTER_3_T3COAF_SET_gc   (0x02) /* Timer3 Compare A Flag bit - SET */


/* Timer3 OverFlow Flag bit */
#define TIMER_COUNTER_3_T3OFF_CLEAR_gc (0x00) /* Timer3 OverFlow Flag bit - CLEAR */
#define TIMER_COUNTER_3_T3OFF_SET_gc   (0x01) /* Timer3 OverFlow Flag bit - SET */


/* Timer3 Capture Interrupt Mask bit */
#define TIMER_COUNTER_3_T3CPIM_CLEAR_gc (0x00) /* Timer3 Capture Interrupt Mask bit - CLEAR */
#define TIMER_COUNTER_3_T3CPIM_SET_gc   (0x08) /* Timer3 Capture Interrupt Mask bit - SET */


/* Timer3 Compare B Interrupt Mask bit */
#define TIMER_COUNTER_3_T3CBIM_CLEAR_gc (0x00) /* Timer3 Compare B Interrupt Mask bit - CLEAR */
#define TIMER_COUNTER_3_T3CBIM_SET_gc   (0x04) /* Timer3 Compare B Interrupt Mask bit - SET */


/* Timer3 Compare A Interrupt Mask bit */
#define TIMER_COUNTER_3_T3CAIM_CLEAR_gc (0x00) /* Timer3 Compare A Interrupt Mask bit - CLEAR */
#define TIMER_COUNTER_3_T3CAIM_SET_gc   (0x02) /* Timer3 Compare A Interrupt Mask bit - SET */


/* Timer3 Overflow Interrupt Mask bit */
#define TIMER_COUNTER_3_T3OIM_CLEAR_gc (0x00) /* Timer3 Overflow Interrupt Mask bit - CLEAR */
#define TIMER_COUNTER_3_T3OIM_SET_gc   (0x01) /* Timer3 Overflow Interrupt Mask bit - SET */


/* Timer 3 Toggle Output Preset Bit */
#define TIMER_COUNTER_3_T3TOP_CLEAR_gc (0x00) /* Timer 3 Toggle Output Preset Bit - CLEAR */
#define TIMER_COUNTER_3_T3TOP_SET_gc   (0x10) /* Timer 3 Toggle Output Preset Bit - SET */


/* Timer 3 Mode Bits */
#define TIMER_COUNTER_3_T3MRB_T3M_gc(x) (x & 0x07)

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
TIMER_COUNTER_0 - 
--------------------------------------------------------------------------------
*/


/* Timer 0 Prescaler B Select Bits */
#define TIMER_COUNTER_0_T0CR_T0PBS_gc(x) ((x<<5) & 0xE0)

/* Timer 0 Prescaler Reset Bit */
#define TIMER_COUNTER_0_T0PR_CLEAR_gc (0x00) /* Timer 0 Prescaler Reset Bit - CLEAR */
#define TIMER_COUNTER_0_T0PR_SET_gc   (0x10) /* Timer 0 Prescaler Reset Bit - SET */


/* Timer 0 Interrupt Enable Bit */
#define TIMER_COUNTER_0_T0IE_CLEAR_gc (0x00) /* Timer 0 Interrupt Enable Bit - CLEAR */
#define TIMER_COUNTER_0_T0IE_SET_gc   (0x08) /* Timer 0 Interrupt Enable Bit - SET */


/* Timer 0 Prescaler A Select Bits */
#define TIMER_COUNTER_0_T0CR_T0PAS_gc(x) (x & 0x07)

/* Timer 1 Flag Bit */
#define TIMER_COUNTER_0_T1F_CLEAR_gc (0x00) /* Timer 1 Flag Bit - CLEAR */
#define TIMER_COUNTER_0_T1F_SET_gc   (0x02) /* Timer 1 Flag Bit - SET */


/* Timer 0 Flag Bit */
#define TIMER_COUNTER_0_T0F_CLEAR_gc (0x00) /* Timer 0 Flag Bit - CLEAR */
#define TIMER_COUNTER_0_T0F_SET_gc   (0x01) /* Timer 0 Flag Bit - SET */


/*
--------------------------------------------------------------------------------
EEPROM - 
--------------------------------------------------------------------------------
*/


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


/* SENSOR_INTERFACE -  (0x0000) */
#define SENSOR_INTERFACE_BASE     _SFR_MEM8 (0x0000) /* SENSOR_INTERFACE Base Address */
#define SENSOR_INTERFACE_SSFR     _SFR_MEM8 (0x0039) /* Sensor Status + Flag Register */
#define SENSOR_INTERFACE_SVCR     _SFR_MEM8 (0x0047) /* Sensor Voltage Control Register */
#define SENSOR_INTERFACE_SCR      _SFR_MEM8 (0x0048) /* Sensor Control Register */
#define SENSOR_INTERFACE_SCCR     _SFR_MEM8 (0x0049) /* Sensor Capacitor Control Register */
#define SENSOR_INTERFACE_SIMSK    _SFR_MEM8 (0x0061) /* Sensor Interrupt Mask register */
#define SENSOR_INTERFACE_TSCR     _SFR_MEM8 (0x0064) /* Temperature Sensor Control Register */
#define SENSOR_INTERFACE_MSVCAL   _SFR_MEM8 (0x0067) /* Motion Sensor Voltage Calibration Register */

/* SPI -  (0x0000) */
#define SPI_BASE                  _SFR_MEM8 (0x0000) /* SPI Base Address */
#define SPI_SPCR                  _SFR_MEM8 (0x004C) /* SPI Control Register */
#define SPI_SPSR                  _SFR_MEM8 (0x004D) /* SPI Status Register */
#define SPI_SPDR                  _SFR_MEM8 (0x004E) /* SPI Data Register */

/* CPU -  (0x0000) */
#define CPU_BASE                  _SFR_MEM8 (0x0000) /* CPU Base Address */
#define CPU_CMCR                  _SFR_MEM8 (0x002F) /* Clock Management Control Register */
#define CPU_CMSR                  _SFR_MEM8 (0x0030) /* Clock Management Status Register */
#define CPU_VMCSR                 _SFR_MEM8 (0x0036) /* Voltage Monitor Control and Status Register */
#define CPU_GPIOR0                _SFR_MEM8 (0x003E) /* General Purpose I/O Register 0 */
#define CPU_GPIOR1                _SFR_MEM8 (0x004A) /* General Purpose I/O Register 1 */
#define CPU_GPIOR2                _SFR_MEM8 (0x004B) /* General Purpose I/O Register 2 */
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
#define CPU_SRCCAL                _SFR_MEM8 (0x0065) /* SRC-Oscillator Calibration Register */
#define CPU_FRCCAL                _SFR_MEM8 (0x0066) /* FRC-Oscillator Calibration Register */

/* LFRX -  (0x0000) */
#define LFRX_BASE                 _SFR_MEM8 (0x0000) /* LFRX Base Address */
#define LFRX_LFFR                 _SFR_MEM8 (0x0038) /* Low Frequency Flag Register */
#define LFRX_LFRR                 _SFR_MEM8 (0x0050) /* LF RSSI Data Register */
#define LFRX_LFCDR                _SFR_MEM8 (0x0052) /* LF receiver Control und Data Register */
#define LFRX_LFRB                 _SFR_MEM8 (0x0056) /* Low Frequency Receive data Buffer */
#define LFRX_LFIMR                _SFR_MEM8 (0x0081) /* Low Frequency Interrupt Mask Register */
#define LFRX_LFRCR                _SFR_MEM8 (0x0082) /* Low Frequency Receiver Control Register */
#define LFRX_LFHCR                _SFR_MEM8 (0x0083) /* LF Header Compare Register */
#define LFRX_LFIDC                _SFR_MEM16(0x0084) /* LF ID Compare Register  */
#define LFRX_LFIDCL               _SFR_MEM8 (0x0084) /* LF ID Compare Register  LOW BYTE */
#define LFRX_LFIDCH               _SFR_MEM8 (0x0085) /* LF ID Compare Register  HIGH BYTE */
#define LFRX_LFCAL                _SFR_MEM16(0x0086) /* LF Calibration Register  Bytes */
#define LFRX_LFCALL               _SFR_MEM8 (0x0086) /* LF Calibration Register  Bytes LOW BYTE */
#define LFRX_LFCALH               _SFR_MEM8 (0x0087) /* LF Calibration Register  Bytes HIGH BYTE */

/* EXTERNAL_INTERRUPT -  (0x0000) */
#define EXTERNAL_INTERRUPT_BASE   _SFR_MEM8 (0x0000) /* EXTERNAL_INTERRUPT Base Address */
#define EXTERNAL_INTERRUPT_PCIFR  _SFR_MEM8 (0x0037) /* Pin Change Interrupt Flag Register */
#define EXTERNAL_INTERRUPT_EIFR   _SFR_MEM8 (0x003D) /* External Interrupt Flag Register */
#define EXTERNAL_INTERRUPT_PCICR  _SFR_MEM8 (0x0043) /* Pin Change Interrupt Control Register */
#define EXTERNAL_INTERRUPT_EIMSK  _SFR_MEM8 (0x0044) /* External Interrupt Mask Register */
#define EXTERNAL_INTERRUPT_EICRA  _SFR_MEM8 (0x0069) /* External Interrupt Control Register */
#define EXTERNAL_INTERRUPT_PCMSK0 _SFR_MEM8 (0x006A) /* Pin Change Mask Register 0 */
#define EXTERNAL_INTERRUPT_PCMSK1 _SFR_MEM8 (0x006B) /* Pin Change Mask Register 1 */
#define EXTERNAL_INTERRUPT_PCMSK2 _SFR_MEM8 (0x006C) /* Pin Change Mask Register 2 */

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

/* TIMER_COUNTER_1 -  (0x0000) */
#define TIMER_COUNTER_1_BASE      _SFR_MEM8 (0x0000) /* TIMER_COUNTER_1 Base Address */
#define TIMER_COUNTER_1_T10IFR    _SFR_MEM8 (0x003A) /* Timer1/0 Interrupt Flag Register */
#define TIMER_COUNTER_1_T1CR      _SFR_MEM8 (0x0058) /* Timer 1 Control Register */

/* TIMER_COUNTER_2 -  (0x0000) */
#define TIMER_COUNTER_2_BASE      _SFR_MEM8 (0x0000) /* TIMER_COUNTER_2 Base Address */
#define TIMER_COUNTER_2_T2CRA     _SFR_MEM8 (0x0031) /* Timer 2 Control Register A */
#define TIMER_COUNTER_2_T2CRB     _SFR_MEM8 (0x0032) /* Timer 2 Control Register B */
#define TIMER_COUNTER_2_T2IFR     _SFR_MEM8 (0x003B) /* Timer2 Interrupt Flag Register */
#define TIMER_COUNTER_2_T2MDR     _SFR_MEM8 (0x004F) /* Timer 2 Modulator Data Register */
#define TIMER_COUNTER_2_T2ICRL    _SFR_MEM8 (0x006E) /* Timer 2 Input Capture Register Low Byte */
#define TIMER_COUNTER_2_T2ICR     _SFR_MEM8 (0x006F) /* Timer 2 Input Capture Register High Byte */
#define TIMER_COUNTER_2_T2COR     _SFR_MEM16(0x0070) /* Timer2 Compare Register  Bytes */
#define TIMER_COUNTER_2_T2CORL    _SFR_MEM8 (0x0070) /* Timer2 Compare Register  Bytes LOW BYTE */
#define TIMER_COUNTER_2_T2CORH    _SFR_MEM8 (0x0071) /* Timer2 Compare Register  Bytes HIGH BYTE */
#define TIMER_COUNTER_2_T2MRA     _SFR_MEM8 (0x0072) /* Timer 2 Mode Register A */
#define TIMER_COUNTER_2_T2MRB     _SFR_MEM8 (0x0073) /* Timer 2 Mode Register B */
#define TIMER_COUNTER_2_T2IMR     _SFR_MEM8 (0x0074) /* Timer 2 Interrupt Mask Register */

/* TIMER_COUNTER_3 -  (0x0000) */
#define TIMER_COUNTER_3_BASE      _SFR_MEM8 (0x0000) /* TIMER_COUNTER_3 Base Address */
#define TIMER_COUNTER_3_T3CRA     _SFR_MEM8 (0x0034) /* Timer 3 Control Register A */
#define TIMER_COUNTER_3_T3IFR     _SFR_MEM8 (0x003C) /* Timer3 Interrupt Flag Register */
#define TIMER_COUNTER_3_T3ICR     _SFR_MEM16(0x0076) /* Timer3 Input Capture Register  Bytes */
#define TIMER_COUNTER_3_T3ICRL    _SFR_MEM8 (0x0076) /* Timer3 Input Capture Register  Bytes LOW BYTE */
#define TIMER_COUNTER_3_T3ICRH    _SFR_MEM8 (0x0077) /* Timer3 Input Capture Register  Bytes HIGH BYTE */
#define TIMER_COUNTER_3_T3CORA    _SFR_MEM16(0x0078) /* Timer3 COmpare Register A  Bytes */
#define TIMER_COUNTER_3_T3CORAL   _SFR_MEM8 (0x0078) /* Timer3 COmpare Register A  Bytes LOW BYTE */
#define TIMER_COUNTER_3_T3CORAH   _SFR_MEM8 (0x0079) /* Timer3 COmpare Register A  Bytes HIGH BYTE */
#define TIMER_COUNTER_3_T3CORB    _SFR_MEM16(0x007A) /* Timer3 COmpare Register B  Bytes */
#define TIMER_COUNTER_3_T3CORBL   _SFR_MEM8 (0x007A) /* Timer3 COmpare Register B  Bytes LOW BYTE */
#define TIMER_COUNTER_3_T3CORBH   _SFR_MEM8 (0x007B) /* Timer3 COmpare Register B  Bytes HIGH BYTE */
#define TIMER_COUNTER_3_T3MRA     _SFR_MEM8 (0x007C) /* Timer 3 Mode Register A */
#define TIMER_COUNTER_3_T3MRB     _SFR_MEM8 (0x007D) /* Timer 3 Mode Register B */
#define TIMER_COUNTER_3_T3CRB     _SFR_MEM8 (0x007E) /* Timer 3 Control Register B */
#define TIMER_COUNTER_3_T3IMR     _SFR_MEM8 (0x007F) /* Timer3 Interrupt Mask Register */

/* WDT - Watchdog Timer (0x0000) */
#define WDT_BASE                  _SFR_MEM8 (0x0000) /* WDT Base Address */
#define WDT_WDTCR                 _SFR_MEM8 (0x0060) /* Watchdog Timer Control Register */

/* TIMER_COUNTER_0 -  (0x0000) */
#define TIMER_COUNTER_0_BASE      _SFR_MEM8 (0x0000) /* TIMER_COUNTER_0 Base Address */
#define TIMER_COUNTER_0_T10IFR    _SFR_MEM8 (0x003A) /* Timer1/0 Interrupt Flag Register */
#define TIMER_COUNTER_0_T0CR      _SFR_MEM8 (0x0059) /* Timer 0 Control Register */

/* EEPROM -  (0x0000) */
#define EEPROM_BASE               _SFR_MEM8 (0x0000) /* EEPROM Base Address */
#define EEPROM_EECR               _SFR_MEM8 (0x003F) /* EEPROM Control Register */
#define EEPROM_EEDR               _SFR_MEM8 (0x0040) /* EEPROM Data Register */
#define EEPROM_EEAR               _SFR_MEM16(0x0041) /* EEPROM Address Register  Bytes */
#define EEPROM_EEARL              _SFR_MEM8 (0x0041) /* EEPROM Address Register  Bytes LOW BYTE */
#define EEPROM_EEARH              _SFR_MEM8 (0x0042) /* EEPROM Address Register  Bytes HIGH BYTE */

/* PORTC -  (0x0000) */
#define PORTC_BASE                _SFR_MEM8 (0x0000) /* PORTC Base Address */
#define PORTC_PINC                _SFR_MEM8 (0x0026) /* Port C Input Pins */
#define PORTC_DDRC                _SFR_MEM8 (0x0027) /* Port C Data Direction Register */
#define PORTC_PORTC               _SFR_MEM8 (0x0028) /* Port C Data Register */

/* FUSE -  (0x0000) */
#define FUSE_BASE                 _SFR_MEM8 (0x0000) /* FUSE Base Address */
#define FUSE_LOW                  _SFR_MEM8 (0x0000) 
#define FUSE_HIGH                 _SFR_MEM8 (0x0001) 

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
#define None_RESET_vect_num   (0)                 
#define None_RESET_vect       _VECTOR(0)          /* External Pin, Power-on Reset, Brown-out Reset, Watchdog Reset and Temperature Shutdown Reset */
#define None_INT0_vect_num    (1)                 
#define None_INT0_vect        _VECTOR(1)          /* External Interrupt Request 0 */
#define None_INT1_vect_num    (2)                 
#define None_INT1_vect        _VECTOR(2)          /* External Interrupt Request 1 */
#define None_PCINT0_vect_num  (3)                 
#define None_PCINT0_vect      _VECTOR(3)          /* Pin Change Interrupt Request 0 */
#define None_PCINT1_vect_num  (4)                 
#define None_PCINT1_vect      _VECTOR(4)          /* Pin Change Interrupt Request 1 */
#define None_PCINT2_vect_num  (5)                 
#define None_PCINT2_vect      _VECTOR(5)          /* Pin Change Interrupt Request 2 */
#define None_INTVM_vect_num   (6)                 
#define None_INTVM_vect       _VECTOR(6)          /* Voltage Monitor Interrupt */
#define None_SENINT_vect_num  (7)                 
#define None_SENINT_vect      _VECTOR(7)          /* Sensor Interface Interrupt */
#define None_INTT0_vect_num   (8)                 
#define None_INTT0_vect       _VECTOR(8)          /* Timer0 Interval Interrupt */
#define None_LFWP_vect_num    (9)                 
#define None_LFWP_vect        _VECTOR(9)          /* LF-Receiver Wake-up Interrupt */
#define None_T3CAP_vect_num   (10)                
#define None_T3CAP_vect       _VECTOR(10)         /* Timer/Counter3 Capture Event */
#define None_T3COMA_vect_num  (11)                
#define None_T3COMA_vect      _VECTOR(11)         /* Timer/Counter3 Compare Match A */
#define None_T3COMB_vect_num  (12)                
#define None_T3COMB_vect      _VECTOR(12)         /* Timer/Counter3 Compare Match B */
#define None_T3OVF_vect_num   (13)                
#define None_T3OVF_vect       _VECTOR(13)         /* Timer/Counter3 Overflow */
#define None_T2CAP_vect_num   (14)                
#define None_T2CAP_vect       _VECTOR(14)         /* Timer/Counter2 Capture Event */
#define None_T2COM_vect_num   (15)                
#define None_T2COM_vect       _VECTOR(15)         /* Timer/Counter2 Compare Match */
#define None_T2OVF_vect_num   (16)                
#define None_T2OVF_vect       _VECTOR(16)         /* Timer/Counter2 Overflow */
#define None_SPISTC_vect_num  (17)                
#define None_SPISTC_vect      _VECTOR(17)         /* SPI Serial Transfer Complete */
#define None_LFRXB_vect_num   (18)                
#define None_LFRXB_vect       _VECTOR(18)         /* LF Receive Buffer Interrupt */
#define None_INTT1_vect_num   (19)                
#define None_INTT1_vect       _VECTOR(19)         /* Timer1 Interval Interrupt */
#define None_T2RXB_vect_num   (20)                
#define None_T2RXB_vect       _VECTOR(20)         /* Timer2 SSI Receive Buffer Interrupt */
#define None_T2TXB_vect_num   (21)                
#define None_T2TXB_vect       _VECTOR(21)         /* Timer2 SSI Transmit Buffer Interrupt */
#define None_T2TXC_vect_num   (22)                
#define None_T2TXC_vect       _VECTOR(22)         /* Timer2 SSI Transmit Complete Interrupt */
#define None_LFREOB_vect_num  (23)                
#define None_LFREOB_vect      _VECTOR(23)         /* LF-Receiver End of Burst Interrupt */
#define None_EXCM_vect_num    (24)                
#define None_EXCM_vect        _VECTOR(24)         /* External Input Clock break down Interrupt */
#define None_EEREADY_vect_num (25)                
#define None_EEREADY_vect     _VECTOR(25)         /* EEPROM Ready Interrupt */
#define None_SPM_RDY_vect_num (26)                
#define None_SPM_RDY_vect     _VECTOR(26)         /* Store Program Memory Ready */

/* Vector Table Size */
#define _VECTOR_SIZE          (2)                 /* Size of individual vector. */
#define _VECTORS_SIZE         (27 * _VECTOR_SIZE) /* Size of all vectors */
/*
================================================================================
Constants
================================================================================
*/

#define PROGMEM_START            (0x0000)                                         
#define PROGMEM_SIZE             (0x2000)                                         
#define PROGMEM_END              (PROGMEM_START + PROGMEM_SIZE - 1)               

#define FLASH_START              (0x0000)                                         
#define FLASH_SIZE               (0x2000)                                         
#define FLASH_PAGE_SIZE          (0x0040)                                         
#define FLASH_END                (FLASH_START + FLASH_SIZE - 1)                   

#define BOOT_SECTION_1_START     (0x1F00)                                         
#define BOOT_SECTION_1_SIZE      (0x0100)                                         
#define BOOT_SECTION_1_PAGE_SIZE (0x0040)                                         
#define BOOT_SECTION_1_END       (BOOT_SECTION_1_START + BOOT_SECTION_1_SIZE - 1) 

#define BOOT_SECTION_2_START     (0x1E00)                                         
#define BOOT_SECTION_2_SIZE      (0x0200)                                         
#define BOOT_SECTION_2_PAGE_SIZE (0x0040)                                         
#define BOOT_SECTION_2_END       (BOOT_SECTION_2_START + BOOT_SECTION_2_SIZE - 1) 

#define BOOT_SECTION_3_START     (0x1C00)                                         
#define BOOT_SECTION_3_SIZE      (0x0400)                                         
#define BOOT_SECTION_3_PAGE_SIZE (0x0040)                                         
#define BOOT_SECTION_3_END       (BOOT_SECTION_3_START + BOOT_SECTION_3_SIZE - 1) 

#define BOOT_SECTION_4_START     (0x1800)                                         
#define BOOT_SECTION_4_SIZE      (0x0800)                                         
#define BOOT_SECTION_4_PAGE_SIZE (0x0040)                                         
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
#define EEPROMMEM_SIZE          (0x0140)                               
#define EEPROMMEM_END           (EEPROMMEM_START + EEPROMMEM_SIZE - 1) 

#define EEPROM_START            (0x0000)                               
#define EEPROM_SIZE             (0x0140)                               
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

/*
================================================================================
Fuses/LockBits/Signatures
================================================================================
*/

/* ============ Fuses ============ */

#define FUSE_MEMORY_SIZE 1 

/* Fuse offset 0x00 */
#define TSRDI      (unsigned char)~_BV(0) /* Disable Temperatur shutdown Reset  */
#define BODEN      (unsigned char)~_BV(1) /* Brown-out detection enabled */
#define FRCFS      (unsigned char)~_BV(2) /* Fast RC-Oscillator Frequency select */
#define WDRCON     (unsigned char)~_BV(3) /* Enable Watchdog RC-Oscillator */
#define SUT_CKSEL0 (unsigned char)~_BV(4) /* Select Clock Source bit 0 */
#define SUT_CKSEL1 (unsigned char)~_BV(5) /* Select Clock Source bit 1 */
#define CKOUT      (unsigned char)~_BV(6) /* Clock output on PORTC1 */
#define CKDIV8     (unsigned char)~_BV(7) /* Divide clock by 8 internally */

/* Fuse offset 0x01 */
#define BOOTRST (unsigned char)~_BV(0) /* Select reset vector */
#define BOOTSZ0 (unsigned char)~_BV(1) /* Boot size select bit 0 */
#define BOOTSZ1 (unsigned char)~_BV(2) /* Boot size select bit 1 */
#define EESAVE  (unsigned char)~_BV(3) /* Preserve EEPROM through the Chip Erase cycle */
#define WDTON   (unsigned char)~_BV(4) /* Watch-dog Timer always on */
#define SPIEN   (unsigned char)~_BV(5) /* Serial program downloading (SPI) enabled */
#define DWEN    (unsigned char)~_BV(6) /* Debug Wire enable */
#define EELOCK  (unsigned char)~_BV(7) /* Upper EEPROM Locked (disabled) */


/* ========== Lock Bits ========== */
#define __LOCK_BITS_EXIST  


/* ========== Signature ========== */
#define SIGNATURE_0 (0x1E) 
#define SIGNATURE_1 (0x93) 
#define SIGNATURE_2 (0x82) 

#endif /* #ifdef _AVR_ATA6285_H_INCLUDED */
