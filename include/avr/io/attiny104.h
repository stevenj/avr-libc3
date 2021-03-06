/******************************************************************************
 *   This file is part of avr-libc3.                                          * 
 *                                                                            * 
 *   Automatically created by devtools/gen-ioheader-atdf.py (V0.91)           * 
 *                                                                            * 
 *   .atpack File: ATtiny104.atdf                                             * 
 *   .ATDF File:   atdf/ATtiny104.atdf                                        * 
 *   Version:      2.0.10                                                     * 
 *   Date:         2019-04-25                                                 * 
 *   Device:       ATtiny104                                                  * 
 *   Architecture: AVR8L                                                      * 
 *                                                                            * 
 *   Changelog:                                                               * 
 *                                                                            * 
 *   2.0.10 2019-04-25 :                                                      * 
 *        - Added missing TCB1 PORTMUX for tiny3217/3216/1617/1616/1614.      * 
 *    2.0.2 2019-01-24 :                                                      * 
 *        - Corrected TC2 instance in ATtiny441.                              * 
 *        - Corrected defines for ATtiny1634.                                 * 
 *        - Refactored away family header files, now there is one header file * 
 *        - per device.                                                       * 
 *        - Corrected FUSE_MEMORY_SIZE for ATtiny4/5/9/10/20/40.              * 
 *        - Added simulator support for mega1609/1608/809/808.                * 
 *        - Succeeds Atmel.ATtiny_DFP 1.3.229.                                * 
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
#  define _AVR_IOXXX_H_ "ioATtiny104.h"
#else
#  error "Attempt to include more than one <avr/ioXXX.h> file."
#endif

#ifndef _AVR_ATtiny104_H_INCLUDED
#  define _AVR_ATtiny104_H_INCLUDED

/*
================================================================================
Ungrouped common register
================================================================================
*/

#define NVMCSR _SFR_MEM8 (0x32) /* Non-Volatile Memory Control and Status Register */
#define NVMCMD _SFR_MEM8 (0x33) /* Non-Volatile Memory Command */
#define VLMCSR _SFR_MEM8 (0x34) /* Vcc Level Monitoring Control and Status Register */
#define PRR    _SFR_MEM8 (0x35) /* Power Reduction Register */
#define CLKPSR _SFR_MEM8 (0x36) /* Clock Prescale Register */
#define CLKMSR _SFR_MEM8 (0x37) /* Clock Main Settings Register */

#define OSCCAL _SFR_MEM8 (0x39) /* Oscillator Calibration Value */
#define SMCR   _SFR_MEM8 (0x3A) /* Sleep Mode Control Register */
#define RSTFLR _SFR_MEM8 (0x3B) /* Reset Flag Register */
#define CCP    _SFR_MEM8 (0x3C) /* Configuration Change Protection */
#define SP     _SFR_MEM16(0x3D) /* Stack Pointer  */
#define SREG   _SFR_MEM8 (0x3F) /* Status Register */


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
    register8_t BYTE0;
} FUSE_t;


/* Self programming enable */
typedef enum FUSE_SELFPROGEN_enum
{
    FUSE_SELFPROGEN_CLEAR_gc = (0x00), /* Self programming enable - CLEAR */
    FUSE_SELFPROGEN_SET_gc   = (0x08), /* Self programming enable - SET */
} FUSE_SELFPROGEN_t;

/* Output external clock */
typedef enum FUSE_CKOUT_enum
{
    FUSE_CKOUT_CLEAR_gc = (0x00), /* Output external clock - CLEAR */
    FUSE_CKOUT_SET_gc   = (0x04), /* Output external clock - SET */
} FUSE_CKOUT_t;

/* Watch dog timer always on */
typedef enum FUSE_WDTON_enum
{
    FUSE_WDTON_CLEAR_gc = (0x00), /* Watch dog timer always on - CLEAR */
    FUSE_WDTON_SET_gc   = (0x02), /* Watch dog timer always on - SET */
} FUSE_WDTON_t;

/* Disable external reset */
typedef enum FUSE_RSTDISBL_enum
{
    FUSE_RSTDISBL_CLEAR_gc = (0x00), /* Disable external reset - CLEAR */
    FUSE_RSTDISBL_SET_gc   = (0x01), /* Disable external reset - SET */
} FUSE_RSTDISBL_t;

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

/*
--------------------------------------------------------------------------------
ADC - Analog-to-Digital Converter
--------------------------------------------------------------------------------
*/

typedef struct ADC_struct
{
    register8_t rsv_0x00[23]; /* RESERVED REGISTER BLOCK */
    register8_t DIDR0;        /* Digital Input Disable Register */
    register8_t rsv_0x18;     /* RESERVED REGISTER */
    register8_t ADCL;         /* ADC Data Register Low */
    register8_t ADCH;         /* ADC Data Register High */
    register8_t ADMUX;        /* The ADC multiplexer Selection Register */
    register8_t ADCSRB;       /* The ADC Control and Status register B */
    register8_t ADCSRA;       /* The ADC Control and Status register A */
} ADC_t;


/* Analog Channel Selection Bits */
typedef enum ADC_MUX_enum
{
    ADC_MUX_ADC0_gc = (0x00), /* ADC0 */
    ADC_MUX_ADC1_gc = (0x01), /* ADC1 */
    ADC_MUX_ADC2_gc = (0x02), /* ADC2 */
    ADC_MUX_ADC3_gc = (0x03), /* ADC3 */
    ADC_MUX_ADC4_gc = (0x04), /* ADC4 */
    ADC_MUX_ADC5_gc = (0x05), /* ADC5 */
    ADC_MUX_ADC6_gc = (0x06), /* ADC6 */
    ADC_MUX_ADC7_gc = (0x07), /* ADC7 */
} ADC_MUX_t;

/* Analog Reference voltage Selection Bits */
typedef enum ADC_REFS_enum
{
    ADC_REFS_VAL_0x00_gc = (0x00<<6), /* Vcc */
    ADC_REFS_VAL_0x01_gc = (0x01<<6), /* Internal 1.1V Referemce */
    ADC_REFS_VAL_0x02_gc = (0x02<<6), /* Internal 2.2V Referemce */
    ADC_REFS_VAL_0x03_gc = (0x03<<6), /* Internal 4.3V Referemce */
} ADC_REFS_t;

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

/* Left Adjustment for ADC Result Readout */
typedef enum ADC_ADLAR_enum
{
    ADC_ADLAR_CLEAR_gc = (0x00), /* Left Adjustment for ADC Result Readout - CLEAR */
    ADC_ADLAR_SET_gc   = (0x80), /* Left Adjustment for ADC Result Readout - SET */
} ADC_ADLAR_t;

/* ADC Auto Trigger Source bits */
typedef enum ADC_ADTS_enum
{
    ADC_ADTS_VAL_0x00_gc = (0x00), /* Free Running mode */
    ADC_ADTS_VAL_0x01_gc = (0x01), /* Analog Comparator */
    ADC_ADTS_VAL_0x02_gc = (0x02), /* External Interrupt Request 0 */
    ADC_ADTS_VAL_0x03_gc = (0x03), /* Timer/Counter0 Compare Match A */
    ADC_ADTS_VAL_0x04_gc = (0x04), /* Timer/Counter0 Overflow */
    ADC_ADTS_VAL_0x05_gc = (0x05), /* Timer/Counter0 Compare Match B */
    ADC_ADTS_VAL_0x06_gc = (0x06), /* Pin Change Interrupt 0 Request */
    ADC_ADTS_VAL_0x07_gc = (0x07), /* Timer/Counter0 Capture Event */
} ADC_ADTS_t;

/* ADC7 Digital Input Disable */
typedef enum ADC_ADC7D_enum
{
    ADC_ADC7D_CLEAR_gc = (0x00), /* ADC7 Digital Input Disable - CLEAR */
    ADC_ADC7D_SET_gc   = (0x80), /* ADC7 Digital Input Disable - SET */
} ADC_ADC7D_t;

/* ADC6 Digital Input Disable */
typedef enum ADC_ADC6D_enum
{
    ADC_ADC6D_CLEAR_gc = (0x00), /* ADC6 Digital Input Disable - CLEAR */
    ADC_ADC6D_SET_gc   = (0x40), /* ADC6 Digital Input Disable - SET */
} ADC_ADC6D_t;

/* ADC5 Digital Input Disable */
typedef enum ADC_ADC5D_enum
{
    ADC_ADC5D_CLEAR_gc = (0x00), /* ADC5 Digital Input Disable - CLEAR */
    ADC_ADC5D_SET_gc   = (0x20), /* ADC5 Digital Input Disable - SET */
} ADC_ADC5D_t;

/* ADC4 Digital Input Disable */
typedef enum ADC_ADC4D_enum
{
    ADC_ADC4D_CLEAR_gc = (0x00), /* ADC4 Digital Input Disable - CLEAR */
    ADC_ADC4D_SET_gc   = (0x10), /* ADC4 Digital Input Disable - SET */
} ADC_ADC4D_t;

/* ADC3 Digital Input Disable */
typedef enum ADC_ADC3D_enum
{
    ADC_ADC3D_CLEAR_gc = (0x00), /* ADC3 Digital Input Disable - CLEAR */
    ADC_ADC3D_SET_gc   = (0x08), /* ADC3 Digital Input Disable - SET */
} ADC_ADC3D_t;

/* ADC2 Digital Input Disable */
typedef enum ADC_ADC2D_enum
{
    ADC_ADC2D_CLEAR_gc = (0x00), /* ADC2 Digital Input Disable - CLEAR */
    ADC_ADC2D_SET_gc   = (0x04), /* ADC2 Digital Input Disable - SET */
} ADC_ADC2D_t;

/* ADC1 Digital Input Disable */
typedef enum ADC_ADC1D_enum
{
    ADC_ADC1D_CLEAR_gc = (0x00), /* ADC1 Digital Input Disable - CLEAR */
    ADC_ADC1D_SET_gc   = (0x02), /* ADC1 Digital Input Disable - SET */
} ADC_ADC1D_t;

/* ADC0 Digital Input Disable */
typedef enum ADC_ADC0D_enum
{
    ADC_ADC0D_CLEAR_gc = (0x00), /* ADC0 Digital Input Disable - CLEAR */
    ADC_ADC0D_SET_gc   = (0x01), /* ADC0 Digital Input Disable - SET */
} ADC_ADC0D_t;

/*
--------------------------------------------------------------------------------
AC - Analog Comparator
--------------------------------------------------------------------------------
*/

typedef struct AC_struct
{
    register8_t rsv_0x00[23]; /* RESERVED REGISTER BLOCK */
    register8_t DIDR0;       
    register8_t rsv_0x18[6];  /* RESERVED REGISTER BLOCK */
    register8_t ACSRB;        /* Analog Comparator Control And Status Register B */
    register8_t ACSRA;        /* Analog Comparator Control And Status Register A */
} AC_t;


/* Analog Comparator Disable */
typedef enum AC_ACD_enum
{
    AC_ACD_CLEAR_gc = (0x00), /* Analog Comparator Disable - CLEAR */
    AC_ACD_SET_gc   = (0x80), /* Analog Comparator Disable - SET */
} AC_ACD_t;

/* Analog Comparator Bandgap enable */
typedef enum AC_ACBG_enum
{
    AC_ACBG_CLEAR_gc = (0x00), /* Analog Comparator Bandgap enable - CLEAR */
    AC_ACBG_SET_gc   = (0x40), /* Analog Comparator Bandgap enable - SET */
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

/* Analog Comparator Input Capture  Enable */
typedef enum AC_ACIC_enum
{
    AC_ACIC_CLEAR_gc = (0x00), /* Analog Comparator Input Capture  Enable - CLEAR */
    AC_ACIC_SET_gc   = (0x04), /* Analog Comparator Input Capture  Enable - SET */
} AC_ACIC_t;

/* Analog Comparator Interrupt Mode Select bits */
typedef enum AC_ACIS_enum
{
    AC_ACIS_VAL_0x00_gc = (0x00), /* Interrupt on Toggle */
    AC_ACIS_VAL_0x01_gc = (0x01), /* Reserved */
    AC_ACIS_VAL_0x02_gc = (0x02), /* Interrupt on Falling Edge */
    AC_ACIS_VAL_0x03_gc = (0x03), /* Interrupt on Rising Edge */
} AC_ACIS_t;

/* Analog Comparator Output Enable */
typedef enum AC_ACOE_enum
{
    AC_ACOE_CLEAR_gc = (0x00), /* Analog Comparator Output Enable - CLEAR */
    AC_ACOE_SET_gc   = (0x02), /* Analog Comparator Output Enable - SET */
} AC_ACOE_t;

/* Analog Comparator positive input selection bit */
typedef enum AC_ACPMUX_enum
{
    AC_ACPMUX_CLEAR_gc = (0x00), /* Analog Comparator positive input selection bit - CLEAR */
    AC_ACPMUX_SET_gc   = (0x01), /* Analog Comparator positive input selection bit - SET */
} AC_ACPMUX_t;

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
CPU - CPU Registers
--------------------------------------------------------------------------------
*/

typedef struct CPU_struct
{
    register8_t rsv_0x00[50]; /* RESERVED REGISTER BLOCK */
    register8_t NVMCSR;       /* Non-Volatile Memory Control and Status Register */
    register8_t NVMCMD;       /* Non-Volatile Memory Command */
    register8_t VLMCSR;       /* Vcc Level Monitoring Control and Status Register */
    register8_t PRR;          /* Power Reduction Register */
    register8_t CLKPSR;       /* Clock Prescale Register */
    register8_t CLKMSR;       /* Clock Main Settings Register */
    register8_t rsv_0x38;     /* RESERVED REGISTER */
    register8_t OSCCAL;       /* Oscillator Calibration Value */
    register8_t SMCR;         /* Sleep Mode Control Register */
    register8_t RSTFLR;       /* Reset Flag Register */
    register8_t CCP;          /* Configuration Change Protection */
    _REGISTER16 (SP);         /* Stack Pointer  */
    register8_t rsv_0x3E;     /* RESERVED REGISTER */
    register8_t SREG;         /* Status Register */
} CPU_t;


/* CCP signature */
typedef enum CPU_CCP_enum
{
    CPU_CCP_SPM_gc   = (0xE7), /* SPM Instruction Protection */
    CPU_CCP_IOREG_gc = (0xD8), /* IO Register Protection */
} CPU_CCP_t;

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

/* Clock Prescaler Select Bits */
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

/* Sleep Mode Select Bits */
typedef enum CPU_SM_enum
{
    CPU_SM_IDLE_gc     = (0x00<<1), /* Idle */
    CPU_SM_ADC_gc      = (0x01<<1), /* ADC Noise Reduction */
    CPU_SM_PDOWN_gc    = (0x02<<1), /* Power Down */
    CPU_SM_VAL_0x03_gc = (0x03<<1), /* Reserved */
    CPU_SM_STDBY_gc    = (0x04<<1), /* Standby */
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

/* Power Reduction USART */
typedef enum CPU_PRUSART_enum
{
    CPU_PRUSART_CLEAR_gc = (0x00), /* Power Reduction USART - CLEAR */
    CPU_PRUSART_SET_gc   = (0x04), /* Power Reduction USART - SET */
} CPU_PRUSART_t;

/* Power Reduction ADC */
typedef enum CPU_PRADC_enum
{
    CPU_PRADC_CLEAR_gc = (0x00), /* Power Reduction ADC - CLEAR */
    CPU_PRADC_SET_gc   = (0x02), /* Power Reduction ADC - SET */
} CPU_PRADC_t;

/* Power Reduction Timer/Counter0 */
typedef enum CPU_PRTIM0_enum
{
    CPU_PRTIM0_CLEAR_gc = (0x00), /* Power Reduction Timer/Counter0 - CLEAR */
    CPU_PRTIM0_SET_gc   = (0x01), /* Power Reduction Timer/Counter0 - SET */
} CPU_PRTIM0_t;

/* VLM Flag */
typedef enum CPU_VLMF_enum
{
    CPU_VLMF_CLEAR_gc = (0x00), /* VLM Flag - CLEAR */
    CPU_VLMF_SET_gc   = (0x80), /* VLM Flag - SET */
} CPU_VLMF_t;

/* VLM Interrupt Enable */
typedef enum CPU_VLMIE_enum
{
    CPU_VLMIE_CLEAR_gc = (0x00), /* VLM Interrupt Enable - CLEAR */
    CPU_VLMIE_SET_gc   = (0x40), /* VLM Interrupt Enable - SET */
} CPU_VLMIE_t;

/* Trigger Level of Voltage Level Monitor bits */
#define CPU_VLMCSR_VLM_gc(x) (x & 0x07)

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

/* Power-on Reset Flag */
typedef enum CPU_PORF_enum
{
    CPU_PORF_CLEAR_gc = (0x00), /* Power-on Reset Flag - CLEAR */
    CPU_PORF_SET_gc   = (0x01), /* Power-on Reset Flag - SET */
} CPU_PORF_t;

/* Non-Volatile Memory Busy */
typedef enum CPU_NVMBSY_enum
{
    CPU_NVMBSY_CLEAR_gc = (0x00), /* Non-Volatile Memory Busy - CLEAR */
    CPU_NVMBSY_SET_gc   = (0x80), /* Non-Volatile Memory Busy - SET */
} CPU_NVMBSY_t;

/*
--------------------------------------------------------------------------------
PORT - I/O Port
--------------------------------------------------------------------------------
*/

typedef struct PORTB_struct
{
    register8_t rsv_0x00[4];  /* RESERVED REGISTER BLOCK */
    register8_t PINB;         /* Input Pins, Port B */
    register8_t DDRB;         /* Data Direction Register, Port B */
    register8_t PORTB;        /* Port B Data register */
    register8_t PUEB;         /* Pull-up Enable Control Register for PORTB */
    register8_t rsv_0x08[14]; /* RESERVED REGISTER BLOCK */
    register8_t PORTCR;       /* Port Control Register */
} PORTB_t;


/*
--------------------------------------------------------------------------------
PORT - I/O Port
--------------------------------------------------------------------------------
*/

typedef struct PORTA_struct
{
    register8_t PINA;         /* Input Pins, Port A */
    register8_t DDRA;         /* Data Direction Register, Port A */
    register8_t PORTA;        /* Port A Data register */
    register8_t PUEA;         /* Pull-up Enable Control Register for PORTA */
    register8_t rsv_0x04[18]; /* RESERVED REGISTER BLOCK */
    register8_t PORTCR;       /* Port Control Register */
} PORTA_t;


/* Break-Before-Make Mode Enable for PORTB */
typedef enum PORTB_BBMB_enum
{
    PORTB_BBMB_CLEAR_gc = (0x00), /* Break-Before-Make Mode Enable for PORTB - CLEAR */
    PORTB_BBMB_SET_gc   = (0x02), /* Break-Before-Make Mode Enable for PORTB - SET */
} PORTB_BBMB_t;

/* Break-Before-Make Mode Enable for PORTA */
typedef enum PORTA_BBMA_enum
{
    PORTA_BBMA_CLEAR_gc = (0x00), /* Break-Before-Make Mode Enable for PORTA - CLEAR */
    PORTA_BBMA_SET_gc   = (0x01), /* Break-Before-Make Mode Enable for PORTA - SET */
} PORTA_BBMA_t;

/*
--------------------------------------------------------------------------------
EXINT - External Interrupts
--------------------------------------------------------------------------------
*/

typedef struct EXINT_struct
{
    register8_t rsv_0x00[15]; /* RESERVED REGISTER BLOCK */
    register8_t PCMSK0;       /* Pin Change Mask Register 0 */
    register8_t PCMSK1;       /* Pin Change Mask Register 1 */
    register8_t PCIFR;        /* Pin Change Interrupt Flag Register */
    register8_t PCICR;        /* Pin Change Interrupt Control Register */
    register8_t EIMSK;        /* External Interrupt Mask register */
    register8_t EIFR;         /* External Interrupt Flag register */
    register8_t EICRA;        /* External Interrupt Control Register A */
} EXINT_t;


/* Interrupt Sense Control 0 Bit 1 */
typedef enum EXINT_ISC01_enum
{
    EXINT_ISC01_CLEAR_gc = (0x00), /* Interrupt Sense Control 0 Bit 1 - CLEAR */
    EXINT_ISC01_SET_gc   = (0x02), /* Interrupt Sense Control 0 Bit 1 - SET */
} EXINT_ISC01_t;

/* Interrupt Sense Control 0 Bit 0 */
typedef enum EXINT_ISC00_enum
{
    EXINT_ISC00_CLEAR_gc = (0x00), /* Interrupt Sense Control 0 Bit 0 - CLEAR */
    EXINT_ISC00_SET_gc   = (0x01), /* Interrupt Sense Control 0 Bit 0 - SET */
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

/* Pin Change Interrupt Enable 1 */
typedef enum EXINT_PCIE1_enum
{
    EXINT_PCIE1_CLEAR_gc = (0x00), /* Pin Change Interrupt Enable 1 - CLEAR */
    EXINT_PCIE1_SET_gc   = (0x02), /* Pin Change Interrupt Enable 1 - SET */
} EXINT_PCIE1_t;

/* Pin Change Interrupt Enable 0 */
typedef enum EXINT_PCIE0_enum
{
    EXINT_PCIE0_CLEAR_gc = (0x00), /* Pin Change Interrupt Enable 0 - CLEAR */
    EXINT_PCIE0_SET_gc   = (0x01), /* Pin Change Interrupt Enable 0 - SET */
} EXINT_PCIE0_t;

/* Pin Change Interrupt Flag 1 */
typedef enum EXINT_PCIF1_enum
{
    EXINT_PCIF1_CLEAR_gc = (0x00), /* Pin Change Interrupt Flag 1 - CLEAR */
    EXINT_PCIF1_SET_gc   = (0x02), /* Pin Change Interrupt Flag 1 - SET */
} EXINT_PCIF1_t;

/* Pin Change Interrupt Flag 0 */
typedef enum EXINT_PCIF0_enum
{
    EXINT_PCIF0_CLEAR_gc = (0x00), /* Pin Change Interrupt Flag 0 - CLEAR */
    EXINT_PCIF0_SET_gc   = (0x01), /* Pin Change Interrupt Flag 0 - SET */
} EXINT_PCIF0_t;

/* Pin Change Enable Mask 1 Bit 3 */
typedef enum EXINT_PCINT11_enum
{
    EXINT_PCINT11_CLEAR_gc = (0x00), /* Pin Change Enable Mask 1 Bit 3 - CLEAR */
    EXINT_PCINT11_SET_gc   = (0x08), /* Pin Change Enable Mask 1 Bit 3 - SET */
} EXINT_PCINT11_t;

/* Pin Change Enable Mask 1 Bit 2 */
typedef enum EXINT_PCINT10_enum
{
    EXINT_PCINT10_CLEAR_gc = (0x00), /* Pin Change Enable Mask 1 Bit 2 - CLEAR */
    EXINT_PCINT10_SET_gc   = (0x04), /* Pin Change Enable Mask 1 Bit 2 - SET */
} EXINT_PCINT10_t;

/* Pin Change Enable Mask 1 Bit 1 */
typedef enum EXINT_PCINT9_enum
{
    EXINT_PCINT9_CLEAR_gc = (0x00), /* Pin Change Enable Mask 1 Bit 1 - CLEAR */
    EXINT_PCINT9_SET_gc   = (0x02), /* Pin Change Enable Mask 1 Bit 1 - SET */
} EXINT_PCINT9_t;

/* Pin Change Enable Mask 1 Bit 0 */
typedef enum EXINT_PCINT8_enum
{
    EXINT_PCINT8_CLEAR_gc = (0x00), /* Pin Change Enable Mask 1 Bit 0 - CLEAR */
    EXINT_PCINT8_SET_gc   = (0x01), /* Pin Change Enable Mask 1 Bit 0 - SET */
} EXINT_PCINT8_t;

/* Pin Change Enable Mask 0 Bit 7 */
typedef enum EXINT_PCINT7_enum
{
    EXINT_PCINT7_CLEAR_gc = (0x00), /* Pin Change Enable Mask 0 Bit 7 - CLEAR */
    EXINT_PCINT7_SET_gc   = (0x80), /* Pin Change Enable Mask 0 Bit 7 - SET */
} EXINT_PCINT7_t;

/* Pin Change Enable Mask 0 Bit 6 */
typedef enum EXINT_PCINT6_enum
{
    EXINT_PCINT6_CLEAR_gc = (0x00), /* Pin Change Enable Mask 0 Bit 6 - CLEAR */
    EXINT_PCINT6_SET_gc   = (0x40), /* Pin Change Enable Mask 0 Bit 6 - SET */
} EXINT_PCINT6_t;

/* Pin Change Enable Mask 0 Bit 5 */
typedef enum EXINT_PCINT5_enum
{
    EXINT_PCINT5_CLEAR_gc = (0x00), /* Pin Change Enable Mask 0 Bit 5 - CLEAR */
    EXINT_PCINT5_SET_gc   = (0x20), /* Pin Change Enable Mask 0 Bit 5 - SET */
} EXINT_PCINT5_t;

/* Pin Change Enable Mask 0 Bit 4 */
typedef enum EXINT_PCINT4_enum
{
    EXINT_PCINT4_CLEAR_gc = (0x00), /* Pin Change Enable Mask 0 Bit 4 - CLEAR */
    EXINT_PCINT4_SET_gc   = (0x10), /* Pin Change Enable Mask 0 Bit 4 - SET */
} EXINT_PCINT4_t;

/* Pin Change Enable Mask 0 Bit 3 */
typedef enum EXINT_PCINT3_enum
{
    EXINT_PCINT3_CLEAR_gc = (0x00), /* Pin Change Enable Mask 0 Bit 3 - CLEAR */
    EXINT_PCINT3_SET_gc   = (0x08), /* Pin Change Enable Mask 0 Bit 3 - SET */
} EXINT_PCINT3_t;

/* Pin Change Enable Mask 0 Bit 2 */
typedef enum EXINT_PCINT2_enum
{
    EXINT_PCINT2_CLEAR_gc = (0x00), /* Pin Change Enable Mask 0 Bit 2 - CLEAR */
    EXINT_PCINT2_SET_gc   = (0x04), /* Pin Change Enable Mask 0 Bit 2 - SET */
} EXINT_PCINT2_t;

/* Pin Change Enable Mask 0 Bit 1 */
typedef enum EXINT_PCINT1_enum
{
    EXINT_PCINT1_CLEAR_gc = (0x00), /* Pin Change Enable Mask 0 Bit 1 - CLEAR */
    EXINT_PCINT1_SET_gc   = (0x02), /* Pin Change Enable Mask 0 Bit 1 - SET */
} EXINT_PCINT1_t;

/* Pin Change Enable Mask 0 Bit 0 */
typedef enum EXINT_PCINT0_enum
{
    EXINT_PCINT0_CLEAR_gc = (0x00), /* Pin Change Enable Mask 0 Bit 0 - CLEAR */
    EXINT_PCINT0_SET_gc   = (0x01), /* Pin Change Enable Mask 0 Bit 0 - SET */
} EXINT_PCINT0_t;

/*
--------------------------------------------------------------------------------
TC16 - Timer/Counter, 16-bit
--------------------------------------------------------------------------------
*/

typedef struct TC0_struct
{
    register8_t rsv_0x00[34]; /* RESERVED REGISTER BLOCK */
    _REGISTER16 (ICR0);       /* Input Capture Register  Bytes */
    register8_t rsv_0x23;     /* RESERVED REGISTER */
    _REGISTER16 (OCR0B);      /* Timer/Counter0 Output Compare Register B  */
    register8_t rsv_0x25;     /* RESERVED REGISTER */
    _REGISTER16 (OCR0A);      /* Timer/Counter 0 Output Compare Register A  */
    register8_t rsv_0x27;     /* RESERVED REGISTER */
    _REGISTER16 (TCNT0);      /* Timer/Counter0  */
    register8_t rsv_0x29;     /* RESERVED REGISTER */
    register8_t TIFR0;        /* Overflow Interrupt Enable */
    register8_t TIMSK0;       /* Timer Interrupt Mask Register 0 */
    register8_t TCCR0C;       /* Timer/Counter 0 Control Register C */
    register8_t TCCR0B;       /* Timer/Counter 0 Control Register B */
    register8_t TCCR0A;       /* Timer/Counter 0 Control Register A */
    register8_t GTCCR;        /* General Timer/Counter Control Register */
} TC0_t;


/* Compare Output Mode for Channel A bits */
#define TC0_TCCR0A_COM0A_gc(x) ((x<<6) & 0xC0)

/* Compare Output Mode for Channel B bits */
#define TC0_TCCR0A_COM0B_gc(x) ((x<<4) & 0x30)

/* Waveform Generation Mode */
#define TC0_TCCR0A_WGM0_gc(x) (x & 0x03)

/* Input Capture Noise Canceler */
typedef enum TC0_ICNC0_enum
{
    TC0_ICNC0_CLEAR_gc = (0x00), /* Input Capture Noise Canceler - CLEAR */
    TC0_ICNC0_SET_gc   = (0x80), /* Input Capture Noise Canceler - SET */
} TC0_ICNC0_t;

/* Input Capture Edge Select */
typedef enum TC0_ICES0_enum
{
    TC0_ICES0_CLEAR_gc = (0x00), /* Input Capture Edge Select - CLEAR */
    TC0_ICES0_SET_gc   = (0x40), /* Input Capture Edge Select - SET */
} TC0_ICES0_t;

/* Waveform Generation Mode */
#define TC0_TCCR0B_WGM0_gc(x) ((x<<3) & 0x18)

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

/* Force Output Compare for Channel A */
typedef enum TC0_FOC0A_enum
{
    TC0_FOC0A_CLEAR_gc = (0x00), /* Force Output Compare for Channel A - CLEAR */
    TC0_FOC0A_SET_gc   = (0x80), /* Force Output Compare for Channel A - SET */
} TC0_FOC0A_t;

/* Force Output Compare for Channel B */
typedef enum TC0_FOC0B_enum
{
    TC0_FOC0B_CLEAR_gc = (0x00), /* Force Output Compare for Channel B - CLEAR */
    TC0_FOC0B_SET_gc   = (0x40), /* Force Output Compare for Channel B - SET */
} TC0_FOC0B_t;

/* Input Capture Interrupt Enable */
typedef enum TC0_ICIE0_enum
{
    TC0_ICIE0_CLEAR_gc = (0x00), /* Input Capture Interrupt Enable - CLEAR */
    TC0_ICIE0_SET_gc   = (0x20), /* Input Capture Interrupt Enable - SET */
} TC0_ICIE0_t;

/* Output Compare B Match Interrupt Enable */
typedef enum TC0_OCIE0B_enum
{
    TC0_OCIE0B_CLEAR_gc = (0x00), /* Output Compare B Match Interrupt Enable - CLEAR */
    TC0_OCIE0B_SET_gc   = (0x04), /* Output Compare B Match Interrupt Enable - SET */
} TC0_OCIE0B_t;

/* Output Compare A Match Interrupt Enable */
typedef enum TC0_OCIE0A_enum
{
    TC0_OCIE0A_CLEAR_gc = (0x00), /* Output Compare A Match Interrupt Enable - CLEAR */
    TC0_OCIE0A_SET_gc   = (0x02), /* Output Compare A Match Interrupt Enable - SET */
} TC0_OCIE0A_t;

/* Overflow Interrupt Enable */
typedef enum TC0_TOIE0_enum
{
    TC0_TOIE0_CLEAR_gc = (0x00), /* Overflow Interrupt Enable - CLEAR */
    TC0_TOIE0_SET_gc   = (0x01), /* Overflow Interrupt Enable - SET */
} TC0_TOIE0_t;

/* Input Capture Flag */
typedef enum TC0_ICF0_enum
{
    TC0_ICF0_CLEAR_gc = (0x00), /* Input Capture Flag - CLEAR */
    TC0_ICF0_SET_gc   = (0x20), /* Input Capture Flag - SET */
} TC0_ICF0_t;

/* Timer Output Compare Flag 0B */
typedef enum TC0_OCF0B_enum
{
    TC0_OCF0B_CLEAR_gc = (0x00), /* Timer Output Compare Flag 0B - CLEAR */
    TC0_OCF0B_SET_gc   = (0x04), /* Timer Output Compare Flag 0B - SET */
} TC0_OCF0B_t;

/* Timer Output Compare Flag 0A */
typedef enum TC0_OCF0A_enum
{
    TC0_OCF0A_CLEAR_gc = (0x00), /* Timer Output Compare Flag 0A - CLEAR */
    TC0_OCF0A_SET_gc   = (0x02), /* Timer Output Compare Flag 0A - SET */
} TC0_OCF0A_t;

/* Timer Overflow Flag */
typedef enum TC0_TOV0_enum
{
    TC0_TOV0_CLEAR_gc = (0x00), /* Timer Overflow Flag - CLEAR */
    TC0_TOV0_SET_gc   = (0x01), /* Timer Overflow Flag - SET */
} TC0_TOV0_t;

/* Timer Synchronization Mode */
typedef enum TC0_TSM_enum
{
    TC0_TSM_CLEAR_gc = (0x00), /* Timer Synchronization Mode - CLEAR */
    TC0_TSM_SET_gc   = (0x80), /* Timer Synchronization Mode - SET */
} TC0_TSM_t;

/* Remap Bit for 14 pin part only */
typedef enum TC0_REMAP_enum
{
    TC0_REMAP_CLEAR_gc = (0x00), /* Remap Bit for 14 pin part only - CLEAR */
    TC0_REMAP_SET_gc   = (0x02), /* Remap Bit for 14 pin part only - SET */
} TC0_REMAP_t;

/* Prescaler Reset */
typedef enum TC0_PSR_enum
{
    TC0_PSR_CLEAR_gc = (0x00), /* Prescaler Reset - CLEAR */
    TC0_PSR_SET_gc   = (0x01), /* Prescaler Reset - SET */
} TC0_PSR_t;

/*
--------------------------------------------------------------------------------
USART - USART
--------------------------------------------------------------------------------
*/

typedef struct USART_struct
{
    register8_t rsv_0x00[8]; /* RESERVED REGISTER BLOCK */
    register8_t UDR;         /* USART I/O Data Register */
    _REGISTER16 (UBRR);      /* USART Baud Rate Register  Bytes */
    register8_t rsv_0x0A;    /* RESERVED REGISTER */
    register8_t UCSRD;       /* USART Control and Status Register D */
    register8_t UCSRC;       /* USART Control and Status Register C */
    register8_t UCSRB;       /* USART Control and Status Register B */
    register8_t UCSRA;       /* USART Control and Status Register A */
} USART_t;


/* USART Receive Complete */
typedef enum USART_RXC_enum
{
    USART_RXC_CLEAR_gc = (0x00), /* USART Receive Complete - CLEAR */
    USART_RXC_SET_gc   = (0x80), /* USART Receive Complete - SET */
} USART_RXC_t;

/* USART Transmitt Complete */
typedef enum USART_TXC_enum
{
    USART_TXC_CLEAR_gc = (0x00), /* USART Transmitt Complete - CLEAR */
    USART_TXC_SET_gc   = (0x40), /* USART Transmitt Complete - SET */
} USART_TXC_t;

/* USART Data Register Empty */
typedef enum USART_UDRE_enum
{
    USART_UDRE_CLEAR_gc = (0x00), /* USART Data Register Empty - CLEAR */
    USART_UDRE_SET_gc   = (0x20), /* USART Data Register Empty - SET */
} USART_UDRE_t;

/* Framing Error */
typedef enum USART_FE_enum
{
    USART_FE_CLEAR_gc = (0x00), /* Framing Error - CLEAR */
    USART_FE_SET_gc   = (0x10), /* Framing Error - SET */
} USART_FE_t;

/* Data overRun */
typedef enum USART_DOR_enum
{
    USART_DOR_CLEAR_gc = (0x00), /* Data overRun - CLEAR */
    USART_DOR_SET_gc   = (0x08), /* Data overRun - SET */
} USART_DOR_t;

/* Parity Error */
typedef enum USART_UPE_enum
{
    USART_UPE_CLEAR_gc = (0x00), /* Parity Error - CLEAR */
    USART_UPE_SET_gc   = (0x04), /* Parity Error - SET */
} USART_UPE_t;

/* Double the USART transmission speed */
typedef enum USART_U2X_enum
{
    USART_U2X_CLEAR_gc = (0x00), /* Double the USART transmission speed - CLEAR */
    USART_U2X_SET_gc   = (0x02), /* Double the USART transmission speed - SET */
} USART_U2X_t;

/* Multi-processor Communication Mode */
typedef enum USART_MPCM_enum
{
    USART_MPCM_CLEAR_gc = (0x00), /* Multi-processor Communication Mode - CLEAR */
    USART_MPCM_SET_gc   = (0x01), /* Multi-processor Communication Mode - SET */
} USART_MPCM_t;

/* RX Complete Interrupt Enable */
typedef enum USART_RXCIE_enum
{
    USART_RXCIE_CLEAR_gc = (0x00), /* RX Complete Interrupt Enable - CLEAR */
    USART_RXCIE_SET_gc   = (0x80), /* RX Complete Interrupt Enable - SET */
} USART_RXCIE_t;

/* TX Complete Interrupt Enable */
typedef enum USART_TXCIE_enum
{
    USART_TXCIE_CLEAR_gc = (0x00), /* TX Complete Interrupt Enable - CLEAR */
    USART_TXCIE_SET_gc   = (0x40), /* TX Complete Interrupt Enable - SET */
} USART_TXCIE_t;

/* USART Data register Empty Interrupt Enable */
typedef enum USART_UDRIE_enum
{
    USART_UDRIE_CLEAR_gc = (0x00), /* USART Data register Empty Interrupt Enable - CLEAR */
    USART_UDRIE_SET_gc   = (0x20), /* USART Data register Empty Interrupt Enable - SET */
} USART_UDRIE_t;

/* Receiver Enable */
typedef enum USART_RXEN_enum
{
    USART_RXEN_CLEAR_gc = (0x00), /* Receiver Enable - CLEAR */
    USART_RXEN_SET_gc   = (0x10), /* Receiver Enable - SET */
} USART_RXEN_t;

/* Transmitter Enable */
typedef enum USART_TXEN_enum
{
    USART_TXEN_CLEAR_gc = (0x00), /* Transmitter Enable - CLEAR */
    USART_TXEN_SET_gc   = (0x08), /* Transmitter Enable - SET */
} USART_TXEN_t;

/* Character Size */
typedef enum USART_UCSZ2_enum
{
    USART_UCSZ2_CLEAR_gc = (0x00), /* Character Size - CLEAR */
    USART_UCSZ2_SET_gc   = (0x04), /* Character Size - SET */
} USART_UCSZ2_t;

/* Receive Data Bit 8 */
typedef enum USART_RXB8_enum
{
    USART_RXB8_CLEAR_gc = (0x00), /* Receive Data Bit 8 - CLEAR */
    USART_RXB8_SET_gc   = (0x02), /* Receive Data Bit 8 - SET */
} USART_RXB8_t;

/* Transmit Data Bit 8 */
typedef enum USART_TXB8_enum
{
    USART_TXB8_CLEAR_gc = (0x00), /* Transmit Data Bit 8 - CLEAR */
    USART_TXB8_SET_gc   = (0x01), /* Transmit Data Bit 8 - SET */
} USART_TXB8_t;

/* USART Mode Select */
typedef enum USART_UMSEL_enum
{
    USART_UMSEL_VAL_0x00_gc = (0x00<<6), /* Asynchronous Operation */
    USART_UMSEL_VAL_0x01_gc = (0x01<<6), /* Synchronous Operation */
} USART_UMSEL_t;

/* Parity Mode Bits */
typedef enum USART_UPM_enum
{
    USART_UPM_VAL_0x00_gc = (0x00<<4), /* Disabled */
    USART_UPM_VAL_0x01_gc = (0x01<<4), /* Reserved */
    USART_UPM_VAL_0x02_gc = (0x02<<4), /* Enabled, Even Parity */
    USART_UPM_VAL_0x03_gc = (0x03<<4), /* Enabled, Odd Parity */
} USART_UPM_t;

/* Stop Bit Select */
typedef enum USART_USBS_enum
{
    USART_USBS_VAL_0x00_gc = (0x00<<3), /* 1-bit */
    USART_USBS_VAL_0x01_gc = (0x01<<3), /* 2-bit */
} USART_USBS_t;

/* Character Size */
#define USART_UCSRC_UCSZ_gc(x) ((x<<1) & 0x06)

/* Clock Polarity */
typedef enum USART_UCPOL_enum
{
    USART_UCPOL_CLEAR_gc = (0x00), /* Clock Polarity - CLEAR */
    USART_UCPOL_SET_gc   = (0x01), /* Clock Polarity - SET */
} USART_UCPOL_t;

/* USART RX Start Interrupt Enable */
typedef enum USART_RXSIE_enum
{
    USART_RXSIE_CLEAR_gc = (0x00), /* USART RX Start Interrupt Enable - CLEAR */
    USART_RXSIE_SET_gc   = (0x80), /* USART RX Start Interrupt Enable - SET */
} USART_RXSIE_t;

/* USART RX Start Flag */
typedef enum USART_RXS_enum
{
    USART_RXS_CLEAR_gc = (0x00), /* USART RX Start Flag - CLEAR */
    USART_RXS_SET_gc   = (0x40), /* USART RX Start Flag - SET */
} USART_RXS_t;

/* Start frame detection enable */
typedef enum USART_SFDE_enum
{
    USART_SFDE_CLEAR_gc = (0x00), /* Start frame detection enable - CLEAR */
    USART_SFDE_SET_gc   = (0x20), /* Start frame detection enable - SET */
} USART_SFDE_t;

/*
--------------------------------------------------------------------------------
WDT - Watchdog Timer
--------------------------------------------------------------------------------
*/

typedef struct WDT_struct
{
    register8_t rsv_0x00[49]; /* RESERVED REGISTER BLOCK */
    register8_t WDTCSR;       /* Watchdog Timer Control and Status Register */
} WDT_t;


/* Watchdog Timer Interrupt Flag */
typedef enum WDT_WDIF_enum
{
    WDT_WDIF_CLEAR_gc = (0x00), /* Watchdog Timer Interrupt Flag - CLEAR */
    WDT_WDIF_SET_gc   = (0x80), /* Watchdog Timer Interrupt Flag - SET */
} WDT_WDIF_t;

/* Watchdog Timer Interrupt Enable */
typedef enum WDT_WDIE_enum
{
    WDT_WDIE_CLEAR_gc = (0x00), /* Watchdog Timer Interrupt Enable - CLEAR */
    WDT_WDIE_SET_gc   = (0x40), /* Watchdog Timer Interrupt Enable - SET */
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

/* Watch Dog Enable */
typedef enum WDT_WDE_enum
{
    WDT_WDE_CLEAR_gc = (0x00), /* Watch Dog Enable - CLEAR */
    WDT_WDE_SET_gc   = (0x08), /* Watch Dog Enable - SET */
} WDT_WDE_t;
/*
================================================================================
IO Module Instances. Mapped to memory.
================================================================================
*/

#define ADC     (*(ADC_t *) 0x0000)     /* Analog-to-Digital Converter */
#define AC      (*(AC_t *) 0x0000)      /* Analog Comparator */
#define CPU     (*(CPU_t *) 0x0000)     /* CPU Registers */
#define PORTA   (*(PORTA_t *) 0x0000)   /* I/O Port */
#define PORTB   (*(PORTB_t *) 0x0000)   /* I/O Port */
#define EXINT   (*(EXINT_t *) 0x0000)   /* External Interrupts */
#define TC0     (*(TC0_t *) 0x0000)     /* Timer/Counter, 16-bit */
#define WDT     (*(WDT_t *) 0x0000)     /* Watchdog Timer */
#define FUSE    (*(FUSE_t *) 0x0000)    /* Fuses */
#define LOCKBIT (*(LOCKBIT_t *) 0x0000) /* Lockbits */
#define USART   (*(USART_t *) 0x0000)   /* USART */
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


/* Self programming enable */
#define FUSE_SELFPROGEN_CLEAR_gc (0x00) /* Self programming enable - CLEAR */
#define FUSE_SELFPROGEN_SET_gc   (0x08) /* Self programming enable - SET */


/* Output external clock */
#define FUSE_CKOUT_CLEAR_gc (0x00) /* Output external clock - CLEAR */
#define FUSE_CKOUT_SET_gc   (0x04) /* Output external clock - SET */


/* Watch dog timer always on */
#define FUSE_WDTON_CLEAR_gc (0x00) /* Watch dog timer always on - CLEAR */
#define FUSE_WDTON_SET_gc   (0x02) /* Watch dog timer always on - SET */


/* Disable external reset */
#define FUSE_RSTDISBL_CLEAR_gc (0x00) /* Disable external reset - CLEAR */
#define FUSE_RSTDISBL_SET_gc   (0x01) /* Disable external reset - SET */


/*
--------------------------------------------------------------------------------
LOCKBIT - Lockbits
--------------------------------------------------------------------------------
*/


/* Memory Lock */
#define LOCKBIT_LB_PROG_VER_DISABLED_gc (0x00) /* Further programming and verification disabled */
#define LOCKBIT_LB_PROG_DISABLED_gc     (0x02) /* Further programming disabled */
#define LOCKBIT_LB_NO_LOCK_gc           (0x03) /* No memory lock features enabled */


/*
--------------------------------------------------------------------------------
ADC - Analog-to-Digital Converter
--------------------------------------------------------------------------------
*/


/* Analog Channel Selection Bits */
#define ADC_MUX_ADC0_gc (0x00) /* ADC0 */
#define ADC_MUX_ADC1_gc (0x01) /* ADC1 */
#define ADC_MUX_ADC2_gc (0x02) /* ADC2 */
#define ADC_MUX_ADC3_gc (0x03) /* ADC3 */
#define ADC_MUX_ADC4_gc (0x04) /* ADC4 */
#define ADC_MUX_ADC5_gc (0x05) /* ADC5 */
#define ADC_MUX_ADC6_gc (0x06) /* ADC6 */
#define ADC_MUX_ADC7_gc (0x07) /* ADC7 */


/* Analog Reference voltage Selection Bits */
#define ADC_REFS_VAL_0x00_gc (0x00<<6) /* Vcc */
#define ADC_REFS_VAL_0x01_gc (0x01<<6) /* Internal 1.1V Referemce */
#define ADC_REFS_VAL_0x02_gc (0x02<<6) /* Internal 2.2V Referemce */
#define ADC_REFS_VAL_0x03_gc (0x03<<6) /* Internal 4.3V Referemce */


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


/* Left Adjustment for ADC Result Readout */
#define ADC_ADLAR_CLEAR_gc (0x00) /* Left Adjustment for ADC Result Readout - CLEAR */
#define ADC_ADLAR_SET_gc   (0x80) /* Left Adjustment for ADC Result Readout - SET */


/* ADC Auto Trigger Source bits */
#define ADC_ADTS_VAL_0x00_gc (0x00) /* Free Running mode */
#define ADC_ADTS_VAL_0x01_gc (0x01) /* Analog Comparator */
#define ADC_ADTS_VAL_0x02_gc (0x02) /* External Interrupt Request 0 */
#define ADC_ADTS_VAL_0x03_gc (0x03) /* Timer/Counter0 Compare Match A */
#define ADC_ADTS_VAL_0x04_gc (0x04) /* Timer/Counter0 Overflow */
#define ADC_ADTS_VAL_0x05_gc (0x05) /* Timer/Counter0 Compare Match B */
#define ADC_ADTS_VAL_0x06_gc (0x06) /* Pin Change Interrupt 0 Request */
#define ADC_ADTS_VAL_0x07_gc (0x07) /* Timer/Counter0 Capture Event */


/* ADC7 Digital Input Disable */
#define ADC_ADC7D_CLEAR_gc (0x00) /* ADC7 Digital Input Disable - CLEAR */
#define ADC_ADC7D_SET_gc   (0x80) /* ADC7 Digital Input Disable - SET */


/* ADC6 Digital Input Disable */
#define ADC_ADC6D_CLEAR_gc (0x00) /* ADC6 Digital Input Disable - CLEAR */
#define ADC_ADC6D_SET_gc   (0x40) /* ADC6 Digital Input Disable - SET */


/* ADC5 Digital Input Disable */
#define ADC_ADC5D_CLEAR_gc (0x00) /* ADC5 Digital Input Disable - CLEAR */
#define ADC_ADC5D_SET_gc   (0x20) /* ADC5 Digital Input Disable - SET */


/* ADC4 Digital Input Disable */
#define ADC_ADC4D_CLEAR_gc (0x00) /* ADC4 Digital Input Disable - CLEAR */
#define ADC_ADC4D_SET_gc   (0x10) /* ADC4 Digital Input Disable - SET */


/* ADC3 Digital Input Disable */
#define ADC_ADC3D_CLEAR_gc (0x00) /* ADC3 Digital Input Disable - CLEAR */
#define ADC_ADC3D_SET_gc   (0x08) /* ADC3 Digital Input Disable - SET */


/* ADC2 Digital Input Disable */
#define ADC_ADC2D_CLEAR_gc (0x00) /* ADC2 Digital Input Disable - CLEAR */
#define ADC_ADC2D_SET_gc   (0x04) /* ADC2 Digital Input Disable - SET */


/* ADC1 Digital Input Disable */
#define ADC_ADC1D_CLEAR_gc (0x00) /* ADC1 Digital Input Disable - CLEAR */
#define ADC_ADC1D_SET_gc   (0x02) /* ADC1 Digital Input Disable - SET */


/* ADC0 Digital Input Disable */
#define ADC_ADC0D_CLEAR_gc (0x00) /* ADC0 Digital Input Disable - CLEAR */
#define ADC_ADC0D_SET_gc   (0x01) /* ADC0 Digital Input Disable - SET */


/*
--------------------------------------------------------------------------------
AC - Analog Comparator
--------------------------------------------------------------------------------
*/


/* Analog Comparator Disable */
#define AC_ACD_CLEAR_gc (0x00) /* Analog Comparator Disable - CLEAR */
#define AC_ACD_SET_gc   (0x80) /* Analog Comparator Disable - SET */


/* Analog Comparator Bandgap enable */
#define AC_ACBG_CLEAR_gc (0x00) /* Analog Comparator Bandgap enable - CLEAR */
#define AC_ACBG_SET_gc   (0x40) /* Analog Comparator Bandgap enable - SET */


/* Analog Compare Output */
#define AC_ACO_CLEAR_gc (0x00) /* Analog Compare Output - CLEAR */
#define AC_ACO_SET_gc   (0x20) /* Analog Compare Output - SET */


/* Analog Comparator Interrupt Flag */
#define AC_ACI_CLEAR_gc (0x00) /* Analog Comparator Interrupt Flag - CLEAR */
#define AC_ACI_SET_gc   (0x10) /* Analog Comparator Interrupt Flag - SET */


/* Analog Comparator Interrupt Enable */
#define AC_ACIE_CLEAR_gc (0x00) /* Analog Comparator Interrupt Enable - CLEAR */
#define AC_ACIE_SET_gc   (0x08) /* Analog Comparator Interrupt Enable - SET */


/* Analog Comparator Input Capture  Enable */
#define AC_ACIC_CLEAR_gc (0x00) /* Analog Comparator Input Capture  Enable - CLEAR */
#define AC_ACIC_SET_gc   (0x04) /* Analog Comparator Input Capture  Enable - SET */


/* Analog Comparator Interrupt Mode Select bits */
#define AC_ACIS_VAL_0x00_gc (0x00) /* Interrupt on Toggle */
#define AC_ACIS_VAL_0x01_gc (0x01) /* Reserved */
#define AC_ACIS_VAL_0x02_gc (0x02) /* Interrupt on Falling Edge */
#define AC_ACIS_VAL_0x03_gc (0x03) /* Interrupt on Rising Edge */


/* Analog Comparator Output Enable */
#define AC_ACOE_CLEAR_gc (0x00) /* Analog Comparator Output Enable - CLEAR */
#define AC_ACOE_SET_gc   (0x02) /* Analog Comparator Output Enable - SET */


/* Analog Comparator positive input selection bit */
#define AC_ACPMUX_CLEAR_gc (0x00) /* Analog Comparator positive input selection bit - CLEAR */
#define AC_ACPMUX_SET_gc   (0x01) /* Analog Comparator positive input selection bit - SET */


/* AIN1 Digital Input Disable */
#define AC_AIN1D_CLEAR_gc (0x00) /* AIN1 Digital Input Disable - CLEAR */
#define AC_AIN1D_SET_gc   (0x02) /* AIN1 Digital Input Disable - SET */


/* AIN0 Digital Input Disable */
#define AC_AIN0D_CLEAR_gc (0x00) /* AIN0 Digital Input Disable - CLEAR */
#define AC_AIN0D_SET_gc   (0x01) /* AIN0 Digital Input Disable - SET */


/*
--------------------------------------------------------------------------------
CPU - CPU Registers
--------------------------------------------------------------------------------
*/


/* CCP signature */
#define CPU_CCP_SPM_gc   (0xE7) /* SPM Instruction Protection */
#define CPU_CCP_IOREG_gc (0xD8) /* IO Register Protection */


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


/* Clock Prescaler Select Bits */
#define CPU_CLKPS_VAL_0x00_gc (0x00) /* 1 */
#define CPU_CLKPS_VAL_0x01_gc (0x01) /* 2 */
#define CPU_CLKPS_VAL_0x02_gc (0x02) /* 4 */
#define CPU_CLKPS_VAL_0x03_gc (0x03) /* 8 */
#define CPU_CLKPS_VAL_0x04_gc (0x04) /* 16 */
#define CPU_CLKPS_VAL_0x05_gc (0x05) /* 32 */
#define CPU_CLKPS_VAL_0x06_gc (0x06) /* 64 */
#define CPU_CLKPS_VAL_0x07_gc (0x07) /* 128 */
#define CPU_CLKPS_VAL_0x08_gc (0x08) /* 256 */


/* Sleep Mode Select Bits */
#define CPU_SM_IDLE_gc     (0x00<<1) /* Idle */
#define CPU_SM_ADC_gc      (0x01<<1) /* ADC Noise Reduction */
#define CPU_SM_PDOWN_gc    (0x02<<1) /* Power Down */
#define CPU_SM_VAL_0x03_gc (0x03<<1) /* Reserved */
#define CPU_SM_STDBY_gc    (0x04<<1) /* Standby */
#define CPU_SM_VAL_0x05_gc (0x05<<1) /* Reserved */
#define CPU_SM_VAL_0x06_gc (0x06<<1) /* Reserved */
#define CPU_SM_VAL_0x07_gc (0x07<<1) /* Reserved */


/* Sleep Enable */
#define CPU_SE_CLEAR_gc (0x00) /* Sleep Enable - CLEAR */
#define CPU_SE_SET_gc   (0x01) /* Sleep Enable - SET */


/* Power Reduction USART */
#define CPU_PRUSART_CLEAR_gc (0x00) /* Power Reduction USART - CLEAR */
#define CPU_PRUSART_SET_gc   (0x04) /* Power Reduction USART - SET */


/* Power Reduction ADC */
#define CPU_PRADC_CLEAR_gc (0x00) /* Power Reduction ADC - CLEAR */
#define CPU_PRADC_SET_gc   (0x02) /* Power Reduction ADC - SET */


/* Power Reduction Timer/Counter0 */
#define CPU_PRTIM0_CLEAR_gc (0x00) /* Power Reduction Timer/Counter0 - CLEAR */
#define CPU_PRTIM0_SET_gc   (0x01) /* Power Reduction Timer/Counter0 - SET */


/* VLM Flag */
#define CPU_VLMF_CLEAR_gc (0x00) /* VLM Flag - CLEAR */
#define CPU_VLMF_SET_gc   (0x80) /* VLM Flag - SET */


/* VLM Interrupt Enable */
#define CPU_VLMIE_CLEAR_gc (0x00) /* VLM Interrupt Enable - CLEAR */
#define CPU_VLMIE_SET_gc   (0x40) /* VLM Interrupt Enable - SET */


/* Trigger Level of Voltage Level Monitor bits */
#define CPU_VLMCSR_VLM_gc(x) (x & 0x07)

/* Watchdog Reset Flag */
#define CPU_WDRF_CLEAR_gc (0x00) /* Watchdog Reset Flag - CLEAR */
#define CPU_WDRF_SET_gc   (0x08) /* Watchdog Reset Flag - SET */


/* External Reset Flag */
#define CPU_EXTRF_CLEAR_gc (0x00) /* External Reset Flag - CLEAR */
#define CPU_EXTRF_SET_gc   (0x02) /* External Reset Flag - SET */


/* Power-on Reset Flag */
#define CPU_PORF_CLEAR_gc (0x00) /* Power-on Reset Flag - CLEAR */
#define CPU_PORF_SET_gc   (0x01) /* Power-on Reset Flag - SET */


/* Non-Volatile Memory Busy */
#define CPU_NVMBSY_CLEAR_gc (0x00) /* Non-Volatile Memory Busy - CLEAR */
#define CPU_NVMBSY_SET_gc   (0x80) /* Non-Volatile Memory Busy - SET */


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


/* Break-Before-Make Mode Enable for PORTB */
#define PORTB_BBMB_CLEAR_gc (0x00) /* Break-Before-Make Mode Enable for PORTB - CLEAR */
#define PORTB_BBMB_SET_gc   (0x02) /* Break-Before-Make Mode Enable for PORTB - SET */


/* Break-Before-Make Mode Enable for PORTA */
#define PORTA_BBMA_CLEAR_gc (0x00) /* Break-Before-Make Mode Enable for PORTA - CLEAR */
#define PORTA_BBMA_SET_gc   (0x01) /* Break-Before-Make Mode Enable for PORTA - SET */


/*
--------------------------------------------------------------------------------
EXINT - External Interrupts
--------------------------------------------------------------------------------
*/


/* Interrupt Sense Control 0 Bit 1 */
#define EXINT_ISC01_CLEAR_gc (0x00) /* Interrupt Sense Control 0 Bit 1 - CLEAR */
#define EXINT_ISC01_SET_gc   (0x02) /* Interrupt Sense Control 0 Bit 1 - SET */


/* Interrupt Sense Control 0 Bit 0 */
#define EXINT_ISC00_CLEAR_gc (0x00) /* Interrupt Sense Control 0 Bit 0 - CLEAR */
#define EXINT_ISC00_SET_gc   (0x01) /* Interrupt Sense Control 0 Bit 0 - SET */


/* External Interrupt Request 0 Enable */
#define EXINT_INT0_CLEAR_gc (0x00) /* External Interrupt Request 0 Enable - CLEAR */
#define EXINT_INT0_SET_gc   (0x01) /* External Interrupt Request 0 Enable - SET */


/* External Interrupt Flag 0 */
#define EXINT_INTF0_CLEAR_gc (0x00) /* External Interrupt Flag 0 - CLEAR */
#define EXINT_INTF0_SET_gc   (0x01) /* External Interrupt Flag 0 - SET */


/* Pin Change Interrupt Enable 1 */
#define EXINT_PCIE1_CLEAR_gc (0x00) /* Pin Change Interrupt Enable 1 - CLEAR */
#define EXINT_PCIE1_SET_gc   (0x02) /* Pin Change Interrupt Enable 1 - SET */


/* Pin Change Interrupt Enable 0 */
#define EXINT_PCIE0_CLEAR_gc (0x00) /* Pin Change Interrupt Enable 0 - CLEAR */
#define EXINT_PCIE0_SET_gc   (0x01) /* Pin Change Interrupt Enable 0 - SET */


/* Pin Change Interrupt Flag 1 */
#define EXINT_PCIF1_CLEAR_gc (0x00) /* Pin Change Interrupt Flag 1 - CLEAR */
#define EXINT_PCIF1_SET_gc   (0x02) /* Pin Change Interrupt Flag 1 - SET */


/* Pin Change Interrupt Flag 0 */
#define EXINT_PCIF0_CLEAR_gc (0x00) /* Pin Change Interrupt Flag 0 - CLEAR */
#define EXINT_PCIF0_SET_gc   (0x01) /* Pin Change Interrupt Flag 0 - SET */


/* Pin Change Enable Mask 1 Bit 3 */
#define EXINT_PCINT11_CLEAR_gc (0x00) /* Pin Change Enable Mask 1 Bit 3 - CLEAR */
#define EXINT_PCINT11_SET_gc   (0x08) /* Pin Change Enable Mask 1 Bit 3 - SET */


/* Pin Change Enable Mask 1 Bit 2 */
#define EXINT_PCINT10_CLEAR_gc (0x00) /* Pin Change Enable Mask 1 Bit 2 - CLEAR */
#define EXINT_PCINT10_SET_gc   (0x04) /* Pin Change Enable Mask 1 Bit 2 - SET */


/* Pin Change Enable Mask 1 Bit 1 */
#define EXINT_PCINT9_CLEAR_gc (0x00) /* Pin Change Enable Mask 1 Bit 1 - CLEAR */
#define EXINT_PCINT9_SET_gc   (0x02) /* Pin Change Enable Mask 1 Bit 1 - SET */


/* Pin Change Enable Mask 1 Bit 0 */
#define EXINT_PCINT8_CLEAR_gc (0x00) /* Pin Change Enable Mask 1 Bit 0 - CLEAR */
#define EXINT_PCINT8_SET_gc   (0x01) /* Pin Change Enable Mask 1 Bit 0 - SET */


/* Pin Change Enable Mask 0 Bit 7 */
#define EXINT_PCINT7_CLEAR_gc (0x00) /* Pin Change Enable Mask 0 Bit 7 - CLEAR */
#define EXINT_PCINT7_SET_gc   (0x80) /* Pin Change Enable Mask 0 Bit 7 - SET */


/* Pin Change Enable Mask 0 Bit 6 */
#define EXINT_PCINT6_CLEAR_gc (0x00) /* Pin Change Enable Mask 0 Bit 6 - CLEAR */
#define EXINT_PCINT6_SET_gc   (0x40) /* Pin Change Enable Mask 0 Bit 6 - SET */


/* Pin Change Enable Mask 0 Bit 5 */
#define EXINT_PCINT5_CLEAR_gc (0x00) /* Pin Change Enable Mask 0 Bit 5 - CLEAR */
#define EXINT_PCINT5_SET_gc   (0x20) /* Pin Change Enable Mask 0 Bit 5 - SET */


/* Pin Change Enable Mask 0 Bit 4 */
#define EXINT_PCINT4_CLEAR_gc (0x00) /* Pin Change Enable Mask 0 Bit 4 - CLEAR */
#define EXINT_PCINT4_SET_gc   (0x10) /* Pin Change Enable Mask 0 Bit 4 - SET */


/* Pin Change Enable Mask 0 Bit 3 */
#define EXINT_PCINT3_CLEAR_gc (0x00) /* Pin Change Enable Mask 0 Bit 3 - CLEAR */
#define EXINT_PCINT3_SET_gc   (0x08) /* Pin Change Enable Mask 0 Bit 3 - SET */


/* Pin Change Enable Mask 0 Bit 2 */
#define EXINT_PCINT2_CLEAR_gc (0x00) /* Pin Change Enable Mask 0 Bit 2 - CLEAR */
#define EXINT_PCINT2_SET_gc   (0x04) /* Pin Change Enable Mask 0 Bit 2 - SET */


/* Pin Change Enable Mask 0 Bit 1 */
#define EXINT_PCINT1_CLEAR_gc (0x00) /* Pin Change Enable Mask 0 Bit 1 - CLEAR */
#define EXINT_PCINT1_SET_gc   (0x02) /* Pin Change Enable Mask 0 Bit 1 - SET */


/* Pin Change Enable Mask 0 Bit 0 */
#define EXINT_PCINT0_CLEAR_gc (0x00) /* Pin Change Enable Mask 0 Bit 0 - CLEAR */
#define EXINT_PCINT0_SET_gc   (0x01) /* Pin Change Enable Mask 0 Bit 0 - SET */


/*
--------------------------------------------------------------------------------
TC16 - Timer/Counter, 16-bit
--------------------------------------------------------------------------------
*/


/* Compare Output Mode for Channel A bits */
#define TC0_TCCR0A_COM0A_gc(x) ((x<<6) & 0xC0)

/* Compare Output Mode for Channel B bits */
#define TC0_TCCR0A_COM0B_gc(x) ((x<<4) & 0x30)

/* Waveform Generation Mode */
#define TC0_TCCR0A_WGM0_gc(x) (x & 0x03)

/* Input Capture Noise Canceler */
#define TC0_ICNC0_CLEAR_gc (0x00) /* Input Capture Noise Canceler - CLEAR */
#define TC0_ICNC0_SET_gc   (0x80) /* Input Capture Noise Canceler - SET */


/* Input Capture Edge Select */
#define TC0_ICES0_CLEAR_gc (0x00) /* Input Capture Edge Select - CLEAR */
#define TC0_ICES0_SET_gc   (0x40) /* Input Capture Edge Select - SET */


/* Waveform Generation Mode */
#define TC0_TCCR0B_WGM0_gc(x) ((x<<3) & 0x18)

/* Clock Select */
#define TC0_CS0_VAL_0x00_gc (0x00) /* No Clock Source (Stopped) */
#define TC0_CS0_VAL_0x01_gc (0x01) /* Running, No Prescaling */
#define TC0_CS0_VAL_0x02_gc (0x02) /* Running, CLK/8 */
#define TC0_CS0_VAL_0x03_gc (0x03) /* Running, CLK/64 */
#define TC0_CS0_VAL_0x04_gc (0x04) /* Running, CLK/256 */
#define TC0_CS0_VAL_0x05_gc (0x05) /* Running, CLK/1024 */
#define TC0_CS0_VAL_0x06_gc (0x06) /* Running, ExtClk Tx Falling Edge */
#define TC0_CS0_VAL_0x07_gc (0x07) /* Running, ExtClk Tx Rising Edge */


/* Force Output Compare for Channel A */
#define TC0_FOC0A_CLEAR_gc (0x00) /* Force Output Compare for Channel A - CLEAR */
#define TC0_FOC0A_SET_gc   (0x80) /* Force Output Compare for Channel A - SET */


/* Force Output Compare for Channel B */
#define TC0_FOC0B_CLEAR_gc (0x00) /* Force Output Compare for Channel B - CLEAR */
#define TC0_FOC0B_SET_gc   (0x40) /* Force Output Compare for Channel B - SET */


/* Input Capture Interrupt Enable */
#define TC0_ICIE0_CLEAR_gc (0x00) /* Input Capture Interrupt Enable - CLEAR */
#define TC0_ICIE0_SET_gc   (0x20) /* Input Capture Interrupt Enable - SET */


/* Output Compare B Match Interrupt Enable */
#define TC0_OCIE0B_CLEAR_gc (0x00) /* Output Compare B Match Interrupt Enable - CLEAR */
#define TC0_OCIE0B_SET_gc   (0x04) /* Output Compare B Match Interrupt Enable - SET */


/* Output Compare A Match Interrupt Enable */
#define TC0_OCIE0A_CLEAR_gc (0x00) /* Output Compare A Match Interrupt Enable - CLEAR */
#define TC0_OCIE0A_SET_gc   (0x02) /* Output Compare A Match Interrupt Enable - SET */


/* Overflow Interrupt Enable */
#define TC0_TOIE0_CLEAR_gc (0x00) /* Overflow Interrupt Enable - CLEAR */
#define TC0_TOIE0_SET_gc   (0x01) /* Overflow Interrupt Enable - SET */


/* Input Capture Flag */
#define TC0_ICF0_CLEAR_gc (0x00) /* Input Capture Flag - CLEAR */
#define TC0_ICF0_SET_gc   (0x20) /* Input Capture Flag - SET */


/* Timer Output Compare Flag 0B */
#define TC0_OCF0B_CLEAR_gc (0x00) /* Timer Output Compare Flag 0B - CLEAR */
#define TC0_OCF0B_SET_gc   (0x04) /* Timer Output Compare Flag 0B - SET */


/* Timer Output Compare Flag 0A */
#define TC0_OCF0A_CLEAR_gc (0x00) /* Timer Output Compare Flag 0A - CLEAR */
#define TC0_OCF0A_SET_gc   (0x02) /* Timer Output Compare Flag 0A - SET */


/* Timer Overflow Flag */
#define TC0_TOV0_CLEAR_gc (0x00) /* Timer Overflow Flag - CLEAR */
#define TC0_TOV0_SET_gc   (0x01) /* Timer Overflow Flag - SET */


/* Timer Synchronization Mode */
#define TC0_TSM_CLEAR_gc (0x00) /* Timer Synchronization Mode - CLEAR */
#define TC0_TSM_SET_gc   (0x80) /* Timer Synchronization Mode - SET */


/* Remap Bit for 14 pin part only */
#define TC0_REMAP_CLEAR_gc (0x00) /* Remap Bit for 14 pin part only - CLEAR */
#define TC0_REMAP_SET_gc   (0x02) /* Remap Bit for 14 pin part only - SET */


/* Prescaler Reset */
#define TC0_PSR_CLEAR_gc (0x00) /* Prescaler Reset - CLEAR */
#define TC0_PSR_SET_gc   (0x01) /* Prescaler Reset - SET */


/*
--------------------------------------------------------------------------------
USART - USART
--------------------------------------------------------------------------------
*/


/* USART Receive Complete */
#define USART_RXC_CLEAR_gc (0x00) /* USART Receive Complete - CLEAR */
#define USART_RXC_SET_gc   (0x80) /* USART Receive Complete - SET */


/* USART Transmitt Complete */
#define USART_TXC_CLEAR_gc (0x00) /* USART Transmitt Complete - CLEAR */
#define USART_TXC_SET_gc   (0x40) /* USART Transmitt Complete - SET */


/* USART Data Register Empty */
#define USART_UDRE_CLEAR_gc (0x00) /* USART Data Register Empty - CLEAR */
#define USART_UDRE_SET_gc   (0x20) /* USART Data Register Empty - SET */


/* Framing Error */
#define USART_FE_CLEAR_gc (0x00) /* Framing Error - CLEAR */
#define USART_FE_SET_gc   (0x10) /* Framing Error - SET */


/* Data overRun */
#define USART_DOR_CLEAR_gc (0x00) /* Data overRun - CLEAR */
#define USART_DOR_SET_gc   (0x08) /* Data overRun - SET */


/* Parity Error */
#define USART_UPE_CLEAR_gc (0x00) /* Parity Error - CLEAR */
#define USART_UPE_SET_gc   (0x04) /* Parity Error - SET */


/* Double the USART transmission speed */
#define USART_U2X_CLEAR_gc (0x00) /* Double the USART transmission speed - CLEAR */
#define USART_U2X_SET_gc   (0x02) /* Double the USART transmission speed - SET */


/* Multi-processor Communication Mode */
#define USART_MPCM_CLEAR_gc (0x00) /* Multi-processor Communication Mode - CLEAR */
#define USART_MPCM_SET_gc   (0x01) /* Multi-processor Communication Mode - SET */


/* RX Complete Interrupt Enable */
#define USART_RXCIE_CLEAR_gc (0x00) /* RX Complete Interrupt Enable - CLEAR */
#define USART_RXCIE_SET_gc   (0x80) /* RX Complete Interrupt Enable - SET */


/* TX Complete Interrupt Enable */
#define USART_TXCIE_CLEAR_gc (0x00) /* TX Complete Interrupt Enable - CLEAR */
#define USART_TXCIE_SET_gc   (0x40) /* TX Complete Interrupt Enable - SET */


/* USART Data register Empty Interrupt Enable */
#define USART_UDRIE_CLEAR_gc (0x00) /* USART Data register Empty Interrupt Enable - CLEAR */
#define USART_UDRIE_SET_gc   (0x20) /* USART Data register Empty Interrupt Enable - SET */


/* Receiver Enable */
#define USART_RXEN_CLEAR_gc (0x00) /* Receiver Enable - CLEAR */
#define USART_RXEN_SET_gc   (0x10) /* Receiver Enable - SET */


/* Transmitter Enable */
#define USART_TXEN_CLEAR_gc (0x00) /* Transmitter Enable - CLEAR */
#define USART_TXEN_SET_gc   (0x08) /* Transmitter Enable - SET */


/* Character Size */
#define USART_UCSZ2_CLEAR_gc (0x00) /* Character Size - CLEAR */
#define USART_UCSZ2_SET_gc   (0x04) /* Character Size - SET */


/* Receive Data Bit 8 */
#define USART_RXB8_CLEAR_gc (0x00) /* Receive Data Bit 8 - CLEAR */
#define USART_RXB8_SET_gc   (0x02) /* Receive Data Bit 8 - SET */


/* Transmit Data Bit 8 */
#define USART_TXB8_CLEAR_gc (0x00) /* Transmit Data Bit 8 - CLEAR */
#define USART_TXB8_SET_gc   (0x01) /* Transmit Data Bit 8 - SET */


/* USART Mode Select */
#define USART_UMSEL_VAL_0x00_gc (0x00<<6) /* Asynchronous Operation */
#define USART_UMSEL_VAL_0x01_gc (0x01<<6) /* Synchronous Operation */


/* Parity Mode Bits */
#define USART_UPM_VAL_0x00_gc (0x00<<4) /* Disabled */
#define USART_UPM_VAL_0x01_gc (0x01<<4) /* Reserved */
#define USART_UPM_VAL_0x02_gc (0x02<<4) /* Enabled, Even Parity */
#define USART_UPM_VAL_0x03_gc (0x03<<4) /* Enabled, Odd Parity */


/* Stop Bit Select */
#define USART_USBS_VAL_0x00_gc (0x00<<3) /* 1-bit */
#define USART_USBS_VAL_0x01_gc (0x01<<3) /* 2-bit */


/* Character Size */
#define USART_UCSRC_UCSZ_gc(x) ((x<<1) & 0x06)

/* Clock Polarity */
#define USART_UCPOL_CLEAR_gc (0x00) /* Clock Polarity - CLEAR */
#define USART_UCPOL_SET_gc   (0x01) /* Clock Polarity - SET */


/* USART RX Start Interrupt Enable */
#define USART_RXSIE_CLEAR_gc (0x00) /* USART RX Start Interrupt Enable - CLEAR */
#define USART_RXSIE_SET_gc   (0x80) /* USART RX Start Interrupt Enable - SET */


/* USART RX Start Flag */
#define USART_RXS_CLEAR_gc (0x00) /* USART RX Start Flag - CLEAR */
#define USART_RXS_SET_gc   (0x40) /* USART RX Start Flag - SET */


/* Start frame detection enable */
#define USART_SFDE_CLEAR_gc (0x00) /* Start frame detection enable - CLEAR */
#define USART_SFDE_SET_gc   (0x20) /* Start frame detection enable - SET */


/*
--------------------------------------------------------------------------------
WDT - Watchdog Timer
--------------------------------------------------------------------------------
*/


/* Watchdog Timer Interrupt Flag */
#define WDT_WDIF_CLEAR_gc (0x00) /* Watchdog Timer Interrupt Flag - CLEAR */
#define WDT_WDIF_SET_gc   (0x80) /* Watchdog Timer Interrupt Flag - SET */


/* Watchdog Timer Interrupt Enable */
#define WDT_WDIE_CLEAR_gc (0x00) /* Watchdog Timer Interrupt Enable - CLEAR */
#define WDT_WDIE_SET_gc   (0x40) /* Watchdog Timer Interrupt Enable - SET */


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


/* Watch Dog Enable */
#define WDT_WDE_CLEAR_gc (0x00) /* Watch Dog Enable - CLEAR */
#define WDT_WDE_SET_gc   (0x08) /* Watch Dog Enable - SET */

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
#define ADC_BASE        _SFR_MEM8 (0x0000) /* ADC Base Address */
#define ADC_DIDR0       _SFR_MEM8 (0x0017) /* Digital Input Disable Register */
#define ADC_ADCL        _SFR_MEM8 (0x0019) /* ADC Data Register Low */
#define ADC_ADCH        _SFR_MEM8 (0x001A) /* ADC Data Register High */
#define ADC_ADMUX       _SFR_MEM8 (0x001B) /* The ADC multiplexer Selection Register */
#define ADC_ADCSRB      _SFR_MEM8 (0x001C) /* The ADC Control and Status register B */
#define ADC_ADCSRA      _SFR_MEM8 (0x001D) /* The ADC Control and Status register A */

/* AC - Analog Comparator (0x0000) */
#define AC_BASE         _SFR_MEM8 (0x0000) /* AC Base Address */
#define AC_DIDR0        _SFR_MEM8 (0x0017) 
#define AC_ACSRB        _SFR_MEM8 (0x001E) /* Analog Comparator Control And Status Register B */
#define AC_ACSRA        _SFR_MEM8 (0x001F) /* Analog Comparator Control And Status Register A */

/* CPU - CPU Registers (0x0000) */
#define CPU_BASE        _SFR_MEM8 (0x0000) /* CPU Base Address */
#define CPU_NVMCSR      _SFR_MEM8 (0x0032) /* Non-Volatile Memory Control and Status Register */
#define CPU_NVMCMD      _SFR_MEM8 (0x0033) /* Non-Volatile Memory Command */
#define CPU_VLMCSR      _SFR_MEM8 (0x0034) /* Vcc Level Monitoring Control and Status Register */
#define CPU_PRR         _SFR_MEM8 (0x0035) /* Power Reduction Register */
#define CPU_CLKPSR      _SFR_MEM8 (0x0036) /* Clock Prescale Register */
#define CPU_CLKMSR      _SFR_MEM8 (0x0037) /* Clock Main Settings Register */
#define CPU_OSCCAL      _SFR_MEM8 (0x0039) /* Oscillator Calibration Value */
#define CPU_SMCR        _SFR_MEM8 (0x003A) /* Sleep Mode Control Register */
#define CPU_RSTFLR      _SFR_MEM8 (0x003B) /* Reset Flag Register */
#define CPU_CCP         _SFR_MEM8 (0x003C) /* Configuration Change Protection */
#define CPU_SP          _SFR_MEM16(0x003D) /* Stack Pointer  */
#define CPU_SPL         _SFR_MEM8 (0x003D) /* Stack Pointer  LOW BYTE */
#define CPU_SPH         _SFR_MEM8 (0x003E) /* Stack Pointer  HIGH BYTE */
#define CPU_SREG        _SFR_MEM8 (0x003F) /* Status Register */

/* PORTA - I/O Port (0x0000) */
#define PORTAA_BASE     _SFR_MEM8 (0x0000) /* PORTAA Base Address */
#define PORTAA_PINA     _SFR_MEM8 (0x0000) /* Input Pins, Port A */
#define PORTAA_DDRA     _SFR_MEM8 (0x0001) /* Data Direction Register, Port A */
#define PORTAA_PORTA    _SFR_MEM8 (0x0002) /* Port A Data register */
#define PORTAA_PUEA     _SFR_MEM8 (0x0003) /* Pull-up Enable Control Register for PORTA */
#define PORTAA_PORTCR   _SFR_MEM8 (0x0016) /* Port Control Register */

/* PORTB - I/O Port (0x0000) */
#define PORTBB_BASE     _SFR_MEM8 (0x0000) /* PORTBB Base Address */
#define PORTBB_PINB     _SFR_MEM8 (0x0004) /* Input Pins, Port B */
#define PORTBB_DDRB     _SFR_MEM8 (0x0005) /* Data Direction Register, Port B */
#define PORTBB_PORTB    _SFR_MEM8 (0x0006) /* Port B Data register */
#define PORTBB_PUEB     _SFR_MEM8 (0x0007) /* Pull-up Enable Control Register for PORTB */
#define PORTBB_PORTCR   _SFR_MEM8 (0x0016) /* Port Control Register */

/* EXINT - External Interrupts (0x0000) */
#define EXINT_BASE      _SFR_MEM8 (0x0000) /* EXINT Base Address */
#define EXINT_PCMSK0    _SFR_MEM8 (0x000F) /* Pin Change Mask Register 0 */
#define EXINT_PCMSK1    _SFR_MEM8 (0x0010) /* Pin Change Mask Register 1 */
#define EXINT_PCIFR     _SFR_MEM8 (0x0011) /* Pin Change Interrupt Flag Register */
#define EXINT_PCICR     _SFR_MEM8 (0x0012) /* Pin Change Interrupt Control Register */
#define EXINT_EIMSK     _SFR_MEM8 (0x0013) /* External Interrupt Mask register */
#define EXINT_EIFR      _SFR_MEM8 (0x0014) /* External Interrupt Flag register */
#define EXINT_EICRA     _SFR_MEM8 (0x0015) /* External Interrupt Control Register A */

/* TC0 - Timer/Counter, 16-bit (0x0000) */
#define TC16_BASE       _SFR_MEM16(0x0000) /* TC16 Base Address */
#define TC16_ICR0       _SFR_MEM16(0x0022) /* Input Capture Register  Bytes */
#define TC16_ICR0L      _SFR_MEM8 (0x0022) /* Input Capture Register  Bytes LOW BYTE */
#define TC16_ICR0H      _SFR_MEM8 (0x0023) /* Input Capture Register  Bytes HIGH BYTE */
#define TC16_OCR0B      _SFR_MEM16(0x0024) /* Timer/Counter0 Output Compare Register B  */
#define TC16_OCR0BL     _SFR_MEM8 (0x0024) /* Timer/Counter0 Output Compare Register B  LOW BYTE */
#define TC16_OCR0BH     _SFR_MEM8 (0x0025) /* Timer/Counter0 Output Compare Register B  HIGH BYTE */
#define TC16_OCR0A      _SFR_MEM16(0x0026) /* Timer/Counter 0 Output Compare Register A  */
#define TC16_OCR0AL     _SFR_MEM8 (0x0026) /* Timer/Counter 0 Output Compare Register A  LOW BYTE */
#define TC16_OCR0AH     _SFR_MEM8 (0x0027) /* Timer/Counter 0 Output Compare Register A  HIGH BYTE */
#define TC16_TCNT0      _SFR_MEM16(0x0028) /* Timer/Counter0  */
#define TC16_TCNT0L     _SFR_MEM8 (0x0028) /* Timer/Counter0  LOW BYTE */
#define TC16_TCNT0H     _SFR_MEM8 (0x0029) /* Timer/Counter0  HIGH BYTE */
#define TC16_TIFR0      _SFR_MEM8 (0x002A) /* Overflow Interrupt Enable */
#define TC16_TIMSK0     _SFR_MEM8 (0x002B) /* Timer Interrupt Mask Register 0 */
#define TC16_TCCR0C     _SFR_MEM8 (0x002C) /* Timer/Counter 0 Control Register C */
#define TC16_TCCR0B     _SFR_MEM8 (0x002D) /* Timer/Counter 0 Control Register B */
#define TC16_TCCR0A     _SFR_MEM8 (0x002E) /* Timer/Counter 0 Control Register A */
#define TC16_GTCCR      _SFR_MEM8 (0x002F) /* General Timer/Counter Control Register */

/* WDT - Watchdog Timer (0x0000) */
#define WDT_BASE        _SFR_MEM8 (0x0000) /* WDT Base Address */
#define WDT_WDTCSR      _SFR_MEM8 (0x0031) /* Watchdog Timer Control and Status Register */

/* FUSE - Fuses (0x0000) */
#define FUSE_BASE       _SFR_MEM8 (0x0000) /* FUSE Base Address */
#define FUSE_BYTE0      _SFR_MEM8 (0x0000) 

/* LOCKBIT - Lockbits (0x0000) */
#define LOCKBIT_BASE    _SFR_MEM8 (0x0000) /* LOCKBIT Base Address */
#define LOCKBIT_LOCKBIT _SFR_MEM8 (0x0000) 

/* USART - USART (0x0000) */
#define USART_BASE      _SFR_MEM8 (0x0000) /* USART Base Address */
#define USART_UDR       _SFR_MEM8 (0x0008) /* USART I/O Data Register */
#define USART_UBRR      _SFR_MEM16(0x0009) /* USART Baud Rate Register  Bytes */
#define USART_UBRRL     _SFR_MEM8 (0x0009) /* USART Baud Rate Register  Bytes LOW BYTE */
#define USART_UBRRH     _SFR_MEM8 (0x000A) /* USART Baud Rate Register  Bytes HIGH BYTE */
#define USART_UCSRD     _SFR_MEM8 (0x000B) /* USART Control and Status Register D */
#define USART_UCSRC     _SFR_MEM8 (0x000C) /* USART Control and Status Register C */
#define USART_UCSRB     _SFR_MEM8 (0x000D) /* USART Control and Status Register B */
#define USART_UCSRA     _SFR_MEM8 (0x000E) /* USART Control and Status Register A */
/* avr-libc typedef for avr/fuse.h */
typedef FUSE_t NVM_FUSES_t;

/*
================================================================================
Interrupt Vector Definitions
================================================================================
*/

/* Vector 0 is the reset vector */
#define None_RESET_vect_num      (0)                 
#define None_RESET_vect          _VECTOR(0)          /* External Reset, Power-on Reset and Watchdog Reset */
#define None_INT0_vect_num       (1)                 
#define None_INT0_vect           _VECTOR(1)          /* External Interrupt Request 0 */
#define None_PCINT0_vect_num     (2)                 
#define None_PCINT0_vect         _VECTOR(2)          /* Pin Change Interrupt Request 0 */
#define None_PCINT1_vect_num     (3)                 
#define None_PCINT1_vect         _VECTOR(3)          /* Pin Change Interrupt Request 1 */
#define None_TIM0_CAPT_vect_num  (4)                 
#define None_TIM0_CAPT_vect      _VECTOR(4)          /* Timer/Counter0 Input Capture */
#define None_TIM0_OVF_vect_num   (5)                 
#define None_TIM0_OVF_vect       _VECTOR(5)          /* Timer/Counter0 Overflow */
#define None_TIM0_COMPA_vect_num (6)                 
#define None_TIM0_COMPA_vect     _VECTOR(6)          /* Timer/Counter Compare Match A */
#define None_TIM0_COMPB_vect_num (7)                 
#define None_TIM0_COMPB_vect     _VECTOR(7)          /* Timer/Counter Compare Match B */
#define None_ANA_COMP_vect_num   (8)                 
#define None_ANA_COMP_vect       _VECTOR(8)          /* Analog Comparator */
#define None_WDT_vect_num        (9)                 
#define None_WDT_vect            _VECTOR(9)          /* Watchdog Time-out */
#define None_VLM_vect_num        (10)                
#define None_VLM_vect            _VECTOR(10)         /* Vcc Voltage Level Monitor */
#define None_ADC_vect_num        (11)                
#define None_ADC_vect            _VECTOR(11)         /* ADC Conversion complete */
#define None_USART_RXS_vect_num  (12)                
#define None_USART_RXS_vect      _VECTOR(12)         /* USART RX Start */
#define None_USART_RXC_vect_num  (13)                
#define None_USART_RXC_vect      _VECTOR(13)         /* USART RX Complete */
#define None_USART_DRE_vect_num  (14)                
#define None_USART_DRE_vect      _VECTOR(14)         /* USART Data register empty */
#define None_USART_TXC_vect_num  (15)                
#define None_USART_TXC_vect      _VECTOR(15)         /* USART Tx Complete */

/* Vector Table Size */
#define _VECTOR_SIZE             (2)                 /* Size of individual vector. */
#define _VECTORS_SIZE            (16 * _VECTOR_SIZE) /* Size of all vectors */
/*
================================================================================
Constants
================================================================================
*/

#define PROGMEM_START   (0x0000)                           
#define PROGMEM_SIZE    (0x0400)                           
#define PROGMEM_END     (PROGMEM_START + PROGMEM_SIZE - 1) 

#define FLASH_START     (0x0000)                           
#define FLASH_SIZE      (0x0400)                           
#define FLASH_PAGE_SIZE (0x0080)                           
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

#define DATAMEM_START                       (0x0000)                                                               
#define DATAMEM_SIZE                        (0x4400)                                                               
#define DATAMEM_END                         (DATAMEM_START + DATAMEM_SIZE - 1)                                     

#define IO_START                            (0x0000)                                                               
#define IO_SIZE                             (0x0040)                                                               
#define IO_PAGE_SIZE                        (0x0001)                                                               
#define IO_END                              (IO_START + IO_SIZE - 1)                                               

#define SRAM_START                          (0x0040)                                                               
#define SRAM_SIZE                           (0x0020)                                                               
#define SRAM_PAGE_SIZE                      (0x0001)                                                               
#define SRAM_END                            (SRAM_START + SRAM_SIZE - 1)                                           

#define MAPPED_NVM_LOCK_BITS_START          (0x3F00)                                                               
#define MAPPED_NVM_LOCK_BITS_SIZE           (0x0002)                                                               
#define MAPPED_NVM_LOCK_BITS_PAGE_SIZE      (0x0001)                                                               
#define MAPPED_NVM_LOCK_BITS_END            (MAPPED_NVM_LOCK_BITS_START + MAPPED_NVM_LOCK_BITS_SIZE - 1)           

#define MAPPED_CONFIGURATION_BITS_START     (0x3F40)                                                               
#define MAPPED_CONFIGURATION_BITS_SIZE      (0x0002)                                                               
#define MAPPED_CONFIGURATION_BITS_PAGE_SIZE (0x0001)                                                               
#define MAPPED_CONFIGURATION_BITS_END       (MAPPED_CONFIGURATION_BITS_START + MAPPED_CONFIGURATION_BITS_SIZE - 1) 

#define MAPPED_CALIBRATION_BITS_START       (0x3F80)                                                               
#define MAPPED_CALIBRATION_BITS_SIZE        (0x0002)                                                               
#define MAPPED_CALIBRATION_BITS_PAGE_SIZE   (0x0001)                                                               
#define MAPPED_CALIBRATION_BITS_END         (MAPPED_CALIBRATION_BITS_START + MAPPED_CALIBRATION_BITS_SIZE - 1)     

#define MAPPED_DEVICE_ID_BITS_START         (0x3FC0)                                                               
#define MAPPED_DEVICE_ID_BITS_SIZE          (0x0004)                                                               
#define MAPPED_DEVICE_ID_BITS_PAGE_SIZE     (0x0001)                                                               
#define MAPPED_DEVICE_ID_BITS_END           (MAPPED_DEVICE_ID_BITS_START + MAPPED_DEVICE_ID_BITS_SIZE - 1)         

#define MAPPED_FLASH_START                  (0x4000)                                                               
#define MAPPED_FLASH_SIZE                   (0x0400)                                                               
#define MAPPED_FLASH_PAGE_SIZE              (0x0001)                                                               
#define MAPPED_FLASH_END                    (MAPPED_FLASH_START + MAPPED_FLASH_SIZE - 1)                           

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

/*
================================================================================
Fuses/LockBits/Signatures
================================================================================
*/

/* ============ Fuses ============ */

#define FUSE_MEMORY_SIZE 0 

/* Fuse offset 0x00 */
#define RSTDISBL   (unsigned char)~_BV(0) /* Disable external reset */
#define WDTON      (unsigned char)~_BV(1) /* Watch dog timer always on */
#define CKOUT      (unsigned char)~_BV(2) /* Output external clock */
#define SELFPROGEN (unsigned char)~_BV(3) /* Self programming enable */


/* ========== Lock Bits ========== */
#define __LOCK_BITS_EXIST  


/* ========== Signature ========== */
#define SIGNATURE_0 (0x1E) 
#define SIGNATURE_1 (0x90) 
#define SIGNATURE_2 (0x0B) 

#endif /* #ifdef _AVR_ATtiny104_H_INCLUDED */
