/******************************************************************************
 *   This file is part of avr-libc3.                                          * 
 *                                                                            * 
 *   Automatically created by devtools/gen-ioheader-atdf.py (V0.91)           * 
 *                                                                            * 
 *   .atpack File: ATtiny20.atdf                                              * 
 *   .ATDF File:   atdf/ATtiny20.atdf                                         * 
 *   Version:      2.0.10                                                     * 
 *   Date:         2019-04-25                                                 * 
 *   Device:       ATtiny20                                                   * 
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
#  define _AVR_IOXXX_H_ "ioATtiny20.h"
#else
#  error "Attempt to include more than one <avr/ioXXX.h> file."
#endif

#ifndef _AVR_ATtiny20_H_INCLUDED
#  define _AVR_ATtiny20_H_INCLUDED

/*
================================================================================
Ungrouped common register
================================================================================
*/

#define NVMCSR _SFR_MEM8 (0x32) /* Non-Volatile Memory Control and Status Register */
#define NVMCMD _SFR_MEM8 (0x33) /* Non-Volatile Memory Command */

#define PRR    _SFR_MEM8 (0x35) /* Power Reduction Register */
#define CLKPSR _SFR_MEM8 (0x36) /* Clock Prescale Register */
#define CLKMSR _SFR_MEM8 (0x37) /* Clock Main Settings Register */

#define OSCCAL _SFR_MEM8 (0x39) /* Oscillator Calibration Value */
#define MCUCR  _SFR_MEM8 (0x3A) /* MCU Control Register */
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


/* Brown-out Detector trigger level */
typedef enum FUSE_BODLEVEL_enum
{
    FUSE_BODLEVEL_DISABLED_gc = (0x07<<4), /* Brown-out detection disabled; [BODLEVEL=111] */
    FUSE_BODLEVEL_1V8_gc      = (0x06<<4), /* Brown-out detection at VCC=1.8 V */
    FUSE_BODLEVEL_2V7_gc      = (0x05<<4), /* Brown-out detection at VCC=2.7 V */
    FUSE_BODLEVEL_4V3_gc      = (0x04<<4), /* Brown-out detection at VCC=4.3 V */
} FUSE_BODLEVEL_t;

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
PORT - I/O Port
--------------------------------------------------------------------------------
*/

typedef struct PORTB_struct
{
    register8_t rsv_0x00[4]; /* RESERVED REGISTER BLOCK */
    register8_t PINB;        /* Port B Data register */
    register8_t DDRB;        /* Data Direction Register, Port B */
    register8_t PORTB;       /* Input Pins, Port B */
    register8_t PUEB;        /* Pull-up Enable Control Register */
    register8_t PORTCR;      /* Port Control Register */
} PORTB_t;


/*
--------------------------------------------------------------------------------
PORT - I/O Port
--------------------------------------------------------------------------------
*/

typedef struct PORTA_struct
{
    register8_t PINA;        /* Port A Input Pins */
    register8_t DDRA;        /* Data Direction Register, Port A */
    register8_t PORTA;       /* Port A Data Register */
    register8_t PUEA;        /* Pull-up Enable Control Register */
    register8_t rsv_0x04[4]; /* RESERVED REGISTER BLOCK */
    register8_t PORTCR;      /* Port Control Register */
} PORTA_t;


/* Break-Before-Make Mode Enable */
typedef enum PORTB_BBMB_enum
{
    PORTB_BBMB_CLEAR_gc = (0x00), /* Break-Before-Make Mode Enable - CLEAR */
    PORTB_BBMB_SET_gc   = (0x02), /* Break-Before-Make Mode Enable - SET */
} PORTB_BBMB_t;

/* Break-Before-Make Mode Enable */
typedef enum PORTA_BBMA_enum
{
    PORTA_BBMA_CLEAR_gc = (0x00), /* Break-Before-Make Mode Enable - CLEAR */
    PORTA_BBMA_SET_gc   = (0x01), /* Break-Before-Make Mode Enable - SET */
} PORTA_BBMA_t;

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
--------------------------------------------------------------------------------
ADC - Analog-to-Digital Converter
--------------------------------------------------------------------------------
*/

typedef struct ADC_struct
{
    register8_t rsv_0x00[13]; /* RESERVED REGISTER BLOCK */
    register8_t DIDR0;        /* Digital Input Disable Register 0 */
    _REGISTER16 (ADC);        /* ADC Data Register  Bytes */
    register8_t rsv_0x0F;     /* RESERVED REGISTER */
    register8_t ADMUX;        /* The ADC multiplexer Selection Register */
    register8_t ADCSRB;       /* ADC Control and Status Register B */
    register8_t ADCSRA;       /* The ADC Control and Status register */
} ADC_t;


/* Reference Selection Bit */
typedef enum ADC_REFS_enum
{
    ADC_REFS_VAL_0x00_gc = (0x00<<6), /* Vcc used as internal reference */
    ADC_REFS_VAL_0x01_gc = (0x01<<6), /* Internal 1.1V Referemce */
} ADC_REFS_t;

/* Analog Channel and Gain Selection Bits */
typedef enum ADC_MUX_enum
{
    ADC_MUX_ADC0_gc     = (0x00), /* ADC0 */
    ADC_MUX_ADC1_gc     = (0x01), /* ADC1 */
    ADC_MUX_ADC2_gc     = (0x02), /* ADC2 */
    ADC_MUX_ADC3_gc     = (0x03), /* ADC3 */
    ADC_MUX_ADC4_gc     = (0x04), /* ADC4 */
    ADC_MUX_ADC5_gc     = (0x05), /* ADC5 */
    ADC_MUX_ADC6_gc     = (0x06), /* ADC6 */
    ADC_MUX_ADC7_gc     = (0x07), /* ADC7 */
    ADC_MUX_ADC_GND_gc  = (0x08), /* 0V (AGND) */
    ADC_MUX_ADC_VBG_gc  = (0x09), /* 1.1V Internal Reference */
    ADC_MUX_TEMPSENS_gc = (0x0A), /* Temperature sensor */
} ADC_MUX_t;

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

/* ADC Auto Trigger Enable */
typedef enum ADC_ADATE_enum
{
    ADC_ADATE_CLEAR_gc = (0x00), /* ADC Auto Trigger Enable - CLEAR */
    ADC_ADATE_SET_gc   = (0x20), /* ADC Auto Trigger Enable - SET */
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

/* ADC Prescaler Select Bits */
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

/* ADC Control and Status Register B-ADLAR */
typedef enum ADC_ADLAR_enum
{
    ADC_ADLAR_CLEAR_gc = (0x00), /* ADC Control and Status Register B-ADLAR - CLEAR */
    ADC_ADLAR_SET_gc   = (0x08), /* ADC Control and Status Register B-ADLAR - SET */
} ADC_ADLAR_t;

/* ADC Auto Trigger Sources */
typedef enum ADC_ADTS_enum
{
    ADC_ADTS_VAL_0x00_gc = (0x00), /* Free Running mode */
    ADC_ADTS_VAL_0x01_gc = (0x01), /* Analog Comparator */
    ADC_ADTS_VAL_0x02_gc = (0x02), /* External Interrupt Request 0 */
    ADC_ADTS_VAL_0x03_gc = (0x03), /* Timer/Counter0 Compare Match A */
    ADC_ADTS_VAL_0x04_gc = (0x04), /* Timer/Counter0 Overflow */
    ADC_ADTS_VAL_0x05_gc = (0x05), /* Timer/Counter1 Compare Match B */
    ADC_ADTS_VAL_0x06_gc = (0x06), /* Timer/Counter1 Overflow */
    ADC_ADTS_VAL_0x07_gc = (0x07), /* Watchdog Interrupt Request */
} ADC_ADTS_t;

/* ADC6 Digital input Disable */
typedef enum ADC_ADC7D_enum
{
    ADC_ADC7D_CLEAR_gc = (0x00), /* ADC6 Digital input Disable - CLEAR */
    ADC_ADC7D_SET_gc   = (0x80), /* ADC6 Digital input Disable - SET */
} ADC_ADC7D_t;

/* ADC5 Digital input Disable */
typedef enum ADC_ADC6D_enum
{
    ADC_ADC6D_CLEAR_gc = (0x00), /* ADC5 Digital input Disable - CLEAR */
    ADC_ADC6D_SET_gc   = (0x40), /* ADC5 Digital input Disable - SET */
} ADC_ADC6D_t;

/* ADC4 Digital input Disable */
typedef enum ADC_ADC5D_enum
{
    ADC_ADC5D_CLEAR_gc = (0x00), /* ADC4 Digital input Disable - CLEAR */
    ADC_ADC5D_SET_gc   = (0x20), /* ADC4 Digital input Disable - SET */
} ADC_ADC5D_t;

/* ADC3 Digital input Disable */
typedef enum ADC_ADC4D_enum
{
    ADC_ADC4D_CLEAR_gc = (0x00), /* ADC3 Digital input Disable - CLEAR */
    ADC_ADC4D_SET_gc   = (0x10), /* ADC3 Digital input Disable - SET */
} ADC_ADC4D_t;

/* AREF Digital Input Disable */
typedef enum ADC_ADC3D_enum
{
    ADC_ADC3D_CLEAR_gc = (0x00), /* AREF Digital Input Disable - CLEAR */
    ADC_ADC3D_SET_gc   = (0x08), /* AREF Digital Input Disable - SET */
} ADC_ADC3D_t;

/* ADC2 Digital input Disable */
typedef enum ADC_ADC2D_enum
{
    ADC_ADC2D_CLEAR_gc = (0x00), /* ADC2 Digital input Disable - CLEAR */
    ADC_ADC2D_SET_gc   = (0x04), /* ADC2 Digital input Disable - SET */
} ADC_ADC2D_t;

/* ADC1 Digital input Disable */
typedef enum ADC_ADC1D_enum
{
    ADC_ADC1D_CLEAR_gc = (0x00), /* ADC1 Digital input Disable - CLEAR */
    ADC_ADC1D_SET_gc   = (0x02), /* ADC1 Digital input Disable - SET */
} ADC_ADC1D_t;

/* ADC0 Digital input Disable */
typedef enum ADC_ADC0D_enum
{
    ADC_ADC0D_CLEAR_gc = (0x00), /* ADC0 Digital input Disable - CLEAR */
    ADC_ADC0D_SET_gc   = (0x01), /* ADC0 Digital input Disable - SET */
} ADC_ADC0D_t;

/*
--------------------------------------------------------------------------------
AC - Analog Comparator
--------------------------------------------------------------------------------
*/

typedef struct AC_struct
{
    register8_t rsv_0x00[19]; /* RESERVED REGISTER BLOCK */
    register8_t ACSRB;        /* Analog Comparator Control And Status Register B */
    register8_t ACSRA;        /* Analog Comparator Control And Status Register A */
} AC_t;


/* Hysteresis Select */
typedef enum AC_HSEL_enum
{
    AC_HSEL_CLEAR_gc = (0x00), /* Hysteresis Select - CLEAR */
    AC_HSEL_SET_gc   = (0x80), /* Hysteresis Select - SET */
} AC_HSEL_t;

/* Hysteresis Level */
typedef enum AC_HLEV_enum
{
    AC_HLEV_CLEAR_gc = (0x00), /* Hysteresis Level - CLEAR */
    AC_HLEV_SET_gc   = (0x40), /* Hysteresis Level - SET */
} AC_HLEV_t;

/* Analog Comparator Multiplexer Enable */
typedef enum AC_ACME_enum
{
    AC_ACME_CLEAR_gc = (0x00), /* Analog Comparator Multiplexer Enable - CLEAR */
    AC_ACME_SET_gc   = (0x04), /* Analog Comparator Multiplexer Enable - SET */
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
CPU - CPU Registers
--------------------------------------------------------------------------------
*/

typedef struct CPU_struct
{
    register8_t rsv_0x00[50]; /* RESERVED REGISTER BLOCK */
    register8_t NVMCSR;       /* Non-Volatile Memory Control and Status Register */
    register8_t NVMCMD;       /* Non-Volatile Memory Command */
    register8_t rsv_0x34;     /* RESERVED REGISTER */
    register8_t PRR;          /* Power Reduction Register */
    register8_t CLKPSR;       /* Clock Prescale Register */
    register8_t CLKMSR;       /* Clock Main Settings Register */
    register8_t rsv_0x38;     /* RESERVED REGISTER */
    register8_t OSCCAL;       /* Oscillator Calibration Value */
    register8_t MCUCR;        /* MCU Control Register */
    register8_t RSTFLR;       /* Reset Flag Register */
    register8_t CCP;          /* Configuration Change Protection */
    _REGISTER16 (SP);         /* Stack Pointer  */
    register8_t rsv_0x3E;     /* RESERVED REGISTER */
    register8_t SREG;         /* Status Register */
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

/* Power Reduction TWI */
typedef enum CPU_PRTWI_enum
{
    CPU_PRTWI_CLEAR_gc = (0x00), /* Power Reduction TWI - CLEAR */
    CPU_PRTWI_SET_gc   = (0x10), /* Power Reduction TWI - SET */
} CPU_PRTWI_t;

/* Power Reduction Serial Peripheral Interface */
typedef enum CPU_PRSPI_enum
{
    CPU_PRSPI_CLEAR_gc = (0x00), /* Power Reduction Serial Peripheral Interface - CLEAR */
    CPU_PRSPI_SET_gc   = (0x08), /* Power Reduction Serial Peripheral Interface - SET */
} CPU_PRSPI_t;

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

/* Power Reduction ADC */
typedef enum CPU_PRADC_enum
{
    CPU_PRADC_CLEAR_gc = (0x00), /* Power Reduction ADC - CLEAR */
    CPU_PRADC_SET_gc   = (0x01), /* Power Reduction ADC - SET */
} CPU_PRADC_t;

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

/* BOD Sleep */
typedef enum CPU_BODS_enum
{
    CPU_BODS_CLEAR_gc = (0x00), /* BOD Sleep - CLEAR */
    CPU_BODS_SET_gc   = (0x10), /* BOD Sleep - SET */
} CPU_BODS_t;

/* Sleep Mode */
typedef enum CPU_SM_enum
{
    CPU_SM_IDLE_gc  = (0x00<<1), /* Idle */
    CPU_SM_ADC_gc   = (0x01<<1), /* ADC noise reduction */
    CPU_SM_PDOWN_gc = (0x02<<1), /* Power-down */
    CPU_SM_STDBY_gc = (0x04<<1), /* Standby */
} CPU_SM_t;

/* Sleep Enable */
typedef enum CPU_SE_enum
{
    CPU_SE_CLEAR_gc = (0x00), /* Sleep Enable - CLEAR */
    CPU_SE_SET_gc   = (0x01), /* Sleep Enable - SET */
} CPU_SE_t;

/*
--------------------------------------------------------------------------------
EXINT - External Interrupts
--------------------------------------------------------------------------------
*/

typedef struct EXINT_struct
{
    register8_t rsv_0x00[9];  /* RESERVED REGISTER BLOCK */
    register8_t PCMSK0;       /* Pin Change Mask Register 0 */
    register8_t PCMSK1;       /* Pin Change Mask Register 1 */
    register8_t GIFR;         /* General Interrupt Flag Register */
    register8_t GIMSK;        /* General Interrupt Mask Register */
    register8_t rsv_0x0D[45]; /* RESERVED REGISTER BLOCK */
    register8_t MCUCR;        /* MCU Control Register */
} EXINT_t;


/* Interrupt Sense Control 0 Bit 1 */
typedef enum EXINT_ISC01_enum
{
    EXINT_ISC01_CLEAR_gc = (0x00), /* Interrupt Sense Control 0 Bit 1 - CLEAR */
    EXINT_ISC01_SET_gc   = (0x80), /* Interrupt Sense Control 0 Bit 1 - SET */
} EXINT_ISC01_t;

/* Interrupt Sense Control 0 Bit 0 */
typedef enum EXINT_ISC00_enum
{
    EXINT_ISC00_VAL_0x00_gc = (0x00<<6), /* Low Level of INTX */
    EXINT_ISC00_VAL_0x01_gc = (0x01<<6), /* Any logical change on INTX */
    EXINT_ISC00_VAL_0x02_gc = (0x02<<6), /* Falling Edge of INTX */
    EXINT_ISC00_VAL_0x03_gc = (0x03<<6), /* Rising Edge of INTX */
} EXINT_ISC00_t;

/* Pin Change Interrupt Flags */
#define EXINT_GIFR_PCIF_gc(x) ((x<<4) & 0x30)

/* External Interrupt Flag 0 */
typedef enum EXINT_INTF0_enum
{
    EXINT_INTF0_CLEAR_gc = (0x00), /* External Interrupt Flag 0 - CLEAR */
    EXINT_INTF0_SET_gc   = (0x01), /* External Interrupt Flag 0 - SET */
} EXINT_INTF0_t;

/* Pin Change Interrupt Enables */
#define EXINT_GIMSK_PCIE_gc(x) ((x<<4) & 0x30)

/* External Interrupt Request 0 Enable */
typedef enum EXINT_INT0_enum
{
    EXINT_INT0_CLEAR_gc = (0x00), /* External Interrupt Request 0 Enable - CLEAR */
    EXINT_INT0_SET_gc   = (0x01), /* External Interrupt Request 0 Enable - SET */
} EXINT_INT0_t;

/*
--------------------------------------------------------------------------------
TC8 - Timer/Counter, 8-bit
--------------------------------------------------------------------------------
*/

typedef struct TC0_struct
{
    register8_t rsv_0x00[21]; /* RESERVED REGISTER BLOCK */
    register8_t OCR0B;        /* Timer/Counter0 Output Compare Register */
    register8_t OCR0A;        /* Timer/Counter0 Output Compare Register */
    register8_t TCNT0;        /* Timer/Counter0 */
    register8_t TCCR0B;       /* Timer/Counter 0 Control Register B */
    register8_t TCCR0A;       /* Timer/Counter 0 Control Register A */
    register8_t rsv_0x1A[11]; /* RESERVED REGISTER BLOCK */
    register8_t TIFR;         /* Overflow Interrupt Enable */
    register8_t TIMSK;        /* Timer Interrupt Mask Register */
    register8_t GTCCR;        /* General Timer/Counter Control Register */
} TC0_t;


/* Compare Output Mode for Channel A bits */
#define TC0_TCCR0A_COM0A_gc(x) ((x<<6) & 0xC0)

/* Compare Output Mode for Channel B bits */
#define TC0_TCCR0A_COM0B_gc(x) ((x<<4) & 0x30)

/* Waveform Generation Mode */
#define TC0_TCCR0A_WGM0_gc(x) (x & 0x03)

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

/* Waveform Generation Mode */
typedef enum TC0_WGM02_enum
{
    TC0_WGM02_CLEAR_gc = (0x00), /* Waveform Generation Mode - CLEAR */
    TC0_WGM02_SET_gc   = (0x08), /* Waveform Generation Mode - SET */
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

/* Input Capture Interrupt Enable */
typedef enum TC0_ICIE1_enum
{
    TC0_ICIE1_CLEAR_gc = (0x00), /* Input Capture Interrupt Enable - CLEAR */
    TC0_ICIE1_SET_gc   = (0x80), /* Input Capture Interrupt Enable - SET */
} TC0_ICIE1_t;

/* Output Compare B Match Interrupt Enable */
typedef enum TC0_OCIE1B_enum
{
    TC0_OCIE1B_CLEAR_gc = (0x00), /* Output Compare B Match Interrupt Enable - CLEAR */
    TC0_OCIE1B_SET_gc   = (0x20), /* Output Compare B Match Interrupt Enable - SET */
} TC0_OCIE1B_t;

/* Output Compare A Match Interrupt Enable */
typedef enum TC0_OCIE1A_enum
{
    TC0_OCIE1A_CLEAR_gc = (0x00), /* Output Compare A Match Interrupt Enable - CLEAR */
    TC0_OCIE1A_SET_gc   = (0x10), /* Output Compare A Match Interrupt Enable - SET */
} TC0_OCIE1A_t;

/* Overflow Interrupt Enable */
#define TC0_TIMSK_TOIE_gc(x) (x & 0x09)

/* Timer/Counter Output Compare Match B Interrupt Enable */
typedef enum TC0_OCIE0B_enum
{
    TC0_OCIE0B_CLEAR_gc = (0x00), /* Timer/Counter Output Compare Match B Interrupt Enable - CLEAR */
    TC0_OCIE0B_SET_gc   = (0x04), /* Timer/Counter Output Compare Match B Interrupt Enable - SET */
} TC0_OCIE0B_t;

/* Timer/Counter0 Output Compare Match A Interrupt Enable */
typedef enum TC0_OCIE0A_enum
{
    TC0_OCIE0A_CLEAR_gc = (0x00), /* Timer/Counter0 Output Compare Match A Interrupt Enable - CLEAR */
    TC0_OCIE0A_SET_gc   = (0x02), /* Timer/Counter0 Output Compare Match A Interrupt Enable - SET */
} TC0_OCIE0A_t;

/* Input Capture Flag */
typedef enum TC0_ICF1_enum
{
    TC0_ICF1_CLEAR_gc = (0x00), /* Input Capture Flag - CLEAR */
    TC0_ICF1_SET_gc   = (0x80), /* Input Capture Flag - SET */
} TC0_ICF1_t;

/* Timer Output Compare Flag 1B */
typedef enum TC0_OCF1B_enum
{
    TC0_OCF1B_CLEAR_gc = (0x00), /* Timer Output Compare Flag 1B - CLEAR */
    TC0_OCF1B_SET_gc   = (0x20), /* Timer Output Compare Flag 1B - SET */
} TC0_OCF1B_t;

/* Timer Output Compare Flag 1A */
typedef enum TC0_OCF1A_enum
{
    TC0_OCF1A_CLEAR_gc = (0x00), /* Timer Output Compare Flag 1A - CLEAR */
    TC0_OCF1A_SET_gc   = (0x10), /* Timer Output Compare Flag 1A - SET */
} TC0_OCF1A_t;

/* Timer Overflow Flag */
#define TC0_TIFR_TOV_gc(x) (x & 0x09)

/* Output Compare Flag 0 B */
typedef enum TC0_OCF0B_enum
{
    TC0_OCF0B_CLEAR_gc = (0x00), /* Output Compare Flag 0 B - CLEAR */
    TC0_OCF0B_SET_gc   = (0x04), /* Output Compare Flag 0 B - SET */
} TC0_OCF0B_t;

/* Output Compare Flag 0 A */
typedef enum TC0_OCF0A_enum
{
    TC0_OCF0A_CLEAR_gc = (0x00), /* Output Compare Flag 0 A - CLEAR */
    TC0_OCF0A_SET_gc   = (0x02), /* Output Compare Flag 0 A - SET */
} TC0_OCF0A_t;

/* Timer Synchronization Mode */
typedef enum TC0_TSM_enum
{
    TC0_TSM_CLEAR_gc = (0x00), /* Timer Synchronization Mode - CLEAR */
    TC0_TSM_SET_gc   = (0x80), /* Timer Synchronization Mode - SET */
} TC0_TSM_t;

/* Prescaler Reset */
typedef enum TC0_PSR_enum
{
    TC0_PSR_CLEAR_gc = (0x00), /* Prescaler Reset - CLEAR */
    TC0_PSR_SET_gc   = (0x01), /* Prescaler Reset - SET */
} TC0_PSR_t;

/*
--------------------------------------------------------------------------------
TWI - Two Wire Serial Interface
--------------------------------------------------------------------------------
*/

typedef struct TWI_struct
{
    register8_t rsv_0x00[40]; /* RESERVED REGISTER BLOCK */
    register8_t TWSD;         /* TWI Slave Data Register */
    register8_t TWSAM;        /* TWI Slave Address Mask Register */
    register8_t TWSA;         /* TWI Slave Address Register */
    register8_t TWSSRA;       /* TWI Slave Status Register A */
    register8_t TWSCRB;       /* TWI Slave Control Register B */
    register8_t TWSCRA;       /* TWI Slave Control Register A */
} TWI_t;


/* TWI SDA Hold Time Enable */
typedef enum TWI_TWSHE_enum
{
    TWI_TWSHE_CLEAR_gc = (0x00), /* TWI SDA Hold Time Enable - CLEAR */
    TWI_TWSHE_SET_gc   = (0x80), /* TWI SDA Hold Time Enable - SET */
} TWI_TWSHE_t;

/* TWI Data Interrupt Enable */
typedef enum TWI_TWDIE_enum
{
    TWI_TWDIE_CLEAR_gc = (0x00), /* TWI Data Interrupt Enable - CLEAR */
    TWI_TWDIE_SET_gc   = (0x20), /* TWI Data Interrupt Enable - SET */
} TWI_TWDIE_t;

/* TWI Address/Stop Interrupt Enable */
typedef enum TWI_TWASIE_enum
{
    TWI_TWASIE_CLEAR_gc = (0x00), /* TWI Address/Stop Interrupt Enable - CLEAR */
    TWI_TWASIE_SET_gc   = (0x10), /* TWI Address/Stop Interrupt Enable - SET */
} TWI_TWASIE_t;

/* Two-Wire Interface Enable */
typedef enum TWI_TWEN_enum
{
    TWI_TWEN_CLEAR_gc = (0x00), /* Two-Wire Interface Enable - CLEAR */
    TWI_TWEN_SET_gc   = (0x08), /* Two-Wire Interface Enable - SET */
} TWI_TWEN_t;

/* TWI Stop Interrupt Enable */
typedef enum TWI_TWSIE_enum
{
    TWI_TWSIE_CLEAR_gc = (0x00), /* TWI Stop Interrupt Enable - CLEAR */
    TWI_TWSIE_SET_gc   = (0x04), /* TWI Stop Interrupt Enable - SET */
} TWI_TWSIE_t;

/* TWI Promiscuous Mode Enable */
typedef enum TWI_TWPME_enum
{
    TWI_TWPME_CLEAR_gc = (0x00), /* TWI Promiscuous Mode Enable - CLEAR */
    TWI_TWPME_SET_gc   = (0x02), /* TWI Promiscuous Mode Enable - SET */
} TWI_TWPME_t;

/* TWI Smart Mode Enable */
typedef enum TWI_TWSME_enum
{
    TWI_TWSME_CLEAR_gc = (0x00), /* TWI Smart Mode Enable - CLEAR */
    TWI_TWSME_SET_gc   = (0x01), /* TWI Smart Mode Enable - SET */
} TWI_TWSME_t;

/* TWI Acknowledge Action */
typedef enum TWI_TWAA_enum
{
    TWI_TWAA_CLEAR_gc = (0x00), /* TWI Acknowledge Action - CLEAR */
    TWI_TWAA_SET_gc   = (0x04), /* TWI Acknowledge Action - SET */
} TWI_TWAA_t;

/* TWI Slave Control Register B-TWCMD */
#define TWI_TWSCRB_TWCMD_gc(x) (x & 0x03)

/* TWI Data Interrupt Flag */
typedef enum TWI_TWDIF_enum
{
    TWI_TWDIF_CLEAR_gc = (0x00), /* TWI Data Interrupt Flag - CLEAR */
    TWI_TWDIF_SET_gc   = (0x80), /* TWI Data Interrupt Flag - SET */
} TWI_TWDIF_t;

/* TWI Address/Stop Interrupt Flag */
typedef enum TWI_TWASIF_enum
{
    TWI_TWASIF_CLEAR_gc = (0x00), /* TWI Address/Stop Interrupt Flag - CLEAR */
    TWI_TWASIF_SET_gc   = (0x40), /* TWI Address/Stop Interrupt Flag - SET */
} TWI_TWASIF_t;

/* TWI Clock Hold */
typedef enum TWI_TWCH_enum
{
    TWI_TWCH_CLEAR_gc = (0x00), /* TWI Clock Hold - CLEAR */
    TWI_TWCH_SET_gc   = (0x20), /* TWI Clock Hold - SET */
} TWI_TWCH_t;

/* TWI Receive Acknowledge */
typedef enum TWI_TWRA_enum
{
    TWI_TWRA_CLEAR_gc = (0x00), /* TWI Receive Acknowledge - CLEAR */
    TWI_TWRA_SET_gc   = (0x10), /* TWI Receive Acknowledge - SET */
} TWI_TWRA_t;

/* TWI Collision */
typedef enum TWI_TWC_enum
{
    TWI_TWC_CLEAR_gc = (0x00), /* TWI Collision - CLEAR */
    TWI_TWC_SET_gc   = (0x08), /* TWI Collision - SET */
} TWI_TWC_t;

/* TWI Bus Error */
typedef enum TWI_TWBE_enum
{
    TWI_TWBE_CLEAR_gc = (0x00), /* TWI Bus Error - CLEAR */
    TWI_TWBE_SET_gc   = (0x04), /* TWI Bus Error - SET */
} TWI_TWBE_t;

/* TWI Read/Write Direction */
typedef enum TWI_TWDIR_enum
{
    TWI_TWDIR_CLEAR_gc = (0x00), /* TWI Read/Write Direction - CLEAR */
    TWI_TWDIR_SET_gc   = (0x02), /* TWI Read/Write Direction - SET */
} TWI_TWDIR_t;

/* TWI Address or Stop */
typedef enum TWI_TWAS_enum
{
    TWI_TWAS_CLEAR_gc = (0x00), /* TWI Address or Stop - CLEAR */
    TWI_TWAS_SET_gc   = (0x01), /* TWI Address or Stop - SET */
} TWI_TWAS_t;

/*
--------------------------------------------------------------------------------
TC16 - Timer/Counter, 16-bit
--------------------------------------------------------------------------------
*/

typedef struct TC1_struct
{
    register8_t rsv_0x00[26]; /* RESERVED REGISTER BLOCK */
    _REGISTER16 (ICR1);       /* Input Capture Register  Bytes */
    register8_t rsv_0x1B;     /* RESERVED REGISTER */
    _REGISTER16 (OCR1B);      /* Timer/Counter1 Output Compare Register B  */
    register8_t rsv_0x1D;     /* RESERVED REGISTER */
    _REGISTER16 (OCR1A);      /* Timer/Counter 1 Output Compare Register A  */
    register8_t rsv_0x1F;     /* RESERVED REGISTER */
    _REGISTER16 (TCNT1);      /* Timer/Counter1  */
    register8_t rsv_0x21;     /* RESERVED REGISTER */
    register8_t TCCR1C;       /* Timer/Counter1 Control Register C */
    register8_t TCCR1B;       /* Timer/Counter1 Control Register B */
    register8_t TCCR1A;       /* Timer/Counter1 Control Register A */
    register8_t TIFR;         /* Overflow Interrupt Enable */
    register8_t TIMSK;        /* Timer Interrupt Mask Register */
    register8_t GTCCR;        /* General Timer/Counter Control Register */
} TC1_t;


/* Compare Output Mode 1A, bits */
#define TC1_TCCR1A_COM1A_gc(x) ((x<<6) & 0xC0)

/* Compare Output Mode 1B, bits */
#define TC1_TCCR1A_COM1B_gc(x) ((x<<4) & 0x30)

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

/* Input Capture Interrupt Enable */
typedef enum TC1_ICIE1_enum
{
    TC1_ICIE1_CLEAR_gc = (0x00), /* Input Capture Interrupt Enable - CLEAR */
    TC1_ICIE1_SET_gc   = (0x80), /* Input Capture Interrupt Enable - SET */
} TC1_ICIE1_t;

/* Output Compare B Match Interrupt Enable */
typedef enum TC1_OCIE1B_enum
{
    TC1_OCIE1B_CLEAR_gc = (0x00), /* Output Compare B Match Interrupt Enable - CLEAR */
    TC1_OCIE1B_SET_gc   = (0x20), /* Output Compare B Match Interrupt Enable - SET */
} TC1_OCIE1B_t;

/* Output Compare A Match Interrupt Enable */
typedef enum TC1_OCIE1A_enum
{
    TC1_OCIE1A_CLEAR_gc = (0x00), /* Output Compare A Match Interrupt Enable - CLEAR */
    TC1_OCIE1A_SET_gc   = (0x10), /* Output Compare A Match Interrupt Enable - SET */
} TC1_OCIE1A_t;

/* Overflow Interrupt Enable */
#define TC1_TIMSK_TOIE_gc(x) (x & 0x09)

/* Timer/Counter Output Compare Match B Interrupt Enable */
typedef enum TC1_OCIE0B_enum
{
    TC1_OCIE0B_CLEAR_gc = (0x00), /* Timer/Counter Output Compare Match B Interrupt Enable - CLEAR */
    TC1_OCIE0B_SET_gc   = (0x04), /* Timer/Counter Output Compare Match B Interrupt Enable - SET */
} TC1_OCIE0B_t;

/* Timer/Counter0 Output Compare Match A Interrupt Enable */
typedef enum TC1_OCIE0A_enum
{
    TC1_OCIE0A_CLEAR_gc = (0x00), /* Timer/Counter0 Output Compare Match A Interrupt Enable - CLEAR */
    TC1_OCIE0A_SET_gc   = (0x02), /* Timer/Counter0 Output Compare Match A Interrupt Enable - SET */
} TC1_OCIE0A_t;

/* Input Capture Flag */
typedef enum TC1_ICF1_enum
{
    TC1_ICF1_CLEAR_gc = (0x00), /* Input Capture Flag - CLEAR */
    TC1_ICF1_SET_gc   = (0x80), /* Input Capture Flag - SET */
} TC1_ICF1_t;

/* Timer Output Compare Flag 1B */
typedef enum TC1_OCF1B_enum
{
    TC1_OCF1B_CLEAR_gc = (0x00), /* Timer Output Compare Flag 1B - CLEAR */
    TC1_OCF1B_SET_gc   = (0x20), /* Timer Output Compare Flag 1B - SET */
} TC1_OCF1B_t;

/* Timer Output Compare Flag 1A */
typedef enum TC1_OCF1A_enum
{
    TC1_OCF1A_CLEAR_gc = (0x00), /* Timer Output Compare Flag 1A - CLEAR */
    TC1_OCF1A_SET_gc   = (0x10), /* Timer Output Compare Flag 1A - SET */
} TC1_OCF1A_t;

/* Timer Overflow Flag */
#define TC1_TIFR_TOV_gc(x) (x & 0x09)

/* Output Compare Flag 0 B */
typedef enum TC1_OCF0B_enum
{
    TC1_OCF0B_CLEAR_gc = (0x00), /* Output Compare Flag 0 B - CLEAR */
    TC1_OCF0B_SET_gc   = (0x04), /* Output Compare Flag 0 B - SET */
} TC1_OCF0B_t;

/* Output Compare Flag 0 A */
typedef enum TC1_OCF0A_enum
{
    TC1_OCF0A_CLEAR_gc = (0x00), /* Output Compare Flag 0 A - CLEAR */
    TC1_OCF0A_SET_gc   = (0x02), /* Output Compare Flag 0 A - SET */
} TC1_OCF0A_t;

/* Timer Synchronization Mode */
typedef enum TC1_TSM_enum
{
    TC1_TSM_CLEAR_gc = (0x00), /* Timer Synchronization Mode - CLEAR */
    TC1_TSM_SET_gc   = (0x80), /* Timer Synchronization Mode - SET */
} TC1_TSM_t;

/* Prescaler Reset */
typedef enum TC1_PSR_enum
{
    TC1_PSR_CLEAR_gc = (0x00), /* Prescaler Reset - CLEAR */
    TC1_PSR_SET_gc   = (0x01), /* Prescaler Reset - SET */
} TC1_PSR_t;

/*
--------------------------------------------------------------------------------
SPI - Serial Peripheral Interface
--------------------------------------------------------------------------------
*/

typedef struct SPI_struct
{
    register8_t rsv_0x00[46]; /* RESERVED REGISTER BLOCK */
    register8_t SPDR;         /* SPI Data Register */
    register8_t SPSR;         /* SPI Status Register */
    register8_t SPCR;         /* SPI Control Register */
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
    SPI_SPR_VAL_0x00_gc = (0x00), /* fcl/4 */
    SPI_SPR_VAL_0x01_gc = (0x01), /* fcl/16 */
    SPI_SPR_VAL_0x02_gc = (0x02), /* fcl/64 */
    SPI_SPR_VAL_0x03_gc = (0x03), /* fcl/128 */
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
================================================================================
IO Module Instances. Mapped to memory.
================================================================================
*/

#define PORTB   (*(PORTB_t *) 0x0000)   /* I/O Port */
#define PORTA   (*(PORTA_t *) 0x0000)   /* I/O Port */
#define WDT     (*(WDT_t *) 0x0000)     /* Watchdog Timer */
#define ADC     (*(ADC_t *) 0x0000)     /* Analog-to-Digital Converter */
#define AC      (*(AC_t *) 0x0000)      /* Analog Comparator */
#define CPU     (*(CPU_t *) 0x0000)     /* CPU Registers */
#define EXINT   (*(EXINT_t *) 0x0000)   /* External Interrupts */
#define TC0     (*(TC0_t *) 0x0000)     /* Timer/Counter, 8-bit */
#define TWI     (*(TWI_t *) 0x0000)     /* Two Wire Serial Interface */
#define TC1     (*(TC1_t *) 0x0000)     /* Timer/Counter, 16-bit */
#define SPI     (*(SPI_t *) 0x0000)     /* Serial Peripheral Interface */
#define FUSE    (*(FUSE_t *) 0x0000)    /* Fuses */
#define LOCKBIT (*(LOCKBIT_t *) 0x0000) /* Lockbits */
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
#define FUSE_BODLEVEL_DISABLED_gc (0x07<<4) /* Brown-out detection disabled; [BODLEVEL=111] */
#define FUSE_BODLEVEL_1V8_gc      (0x06<<4) /* Brown-out detection at VCC=1.8 V */
#define FUSE_BODLEVEL_2V7_gc      (0x05<<4) /* Brown-out detection at VCC=2.7 V */
#define FUSE_BODLEVEL_4V3_gc      (0x04<<4) /* Brown-out detection at VCC=4.3 V */


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
PORT - I/O Port
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
PORT - I/O Port
--------------------------------------------------------------------------------
*/


/* Break-Before-Make Mode Enable */
#define PORTB_BBMB_CLEAR_gc (0x00) /* Break-Before-Make Mode Enable - CLEAR */
#define PORTB_BBMB_SET_gc   (0x02) /* Break-Before-Make Mode Enable - SET */


/* Break-Before-Make Mode Enable */
#define PORTA_BBMA_CLEAR_gc (0x00) /* Break-Before-Make Mode Enable - CLEAR */
#define PORTA_BBMA_SET_gc   (0x01) /* Break-Before-Make Mode Enable - SET */


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


/*
--------------------------------------------------------------------------------
ADC - Analog-to-Digital Converter
--------------------------------------------------------------------------------
*/


/* Reference Selection Bit */
#define ADC_REFS_VAL_0x00_gc (0x00<<6) /* Vcc used as internal reference */
#define ADC_REFS_VAL_0x01_gc (0x01<<6) /* Internal 1.1V Referemce */


/* Analog Channel and Gain Selection Bits */
#define ADC_MUX_ADC0_gc     (0x00) /* ADC0 */
#define ADC_MUX_ADC1_gc     (0x01) /* ADC1 */
#define ADC_MUX_ADC2_gc     (0x02) /* ADC2 */
#define ADC_MUX_ADC3_gc     (0x03) /* ADC3 */
#define ADC_MUX_ADC4_gc     (0x04) /* ADC4 */
#define ADC_MUX_ADC5_gc     (0x05) /* ADC5 */
#define ADC_MUX_ADC6_gc     (0x06) /* ADC6 */
#define ADC_MUX_ADC7_gc     (0x07) /* ADC7 */
#define ADC_MUX_ADC_GND_gc  (0x08) /* 0V (AGND) */
#define ADC_MUX_ADC_VBG_gc  (0x09) /* 1.1V Internal Reference */
#define ADC_MUX_TEMPSENS_gc (0x0A) /* Temperature sensor */


/* ADC Enable */
#define ADC_ADEN_CLEAR_gc (0x00) /* ADC Enable - CLEAR */
#define ADC_ADEN_SET_gc   (0x80) /* ADC Enable - SET */


/* ADC Start Conversion */
#define ADC_ADSC_CLEAR_gc (0x00) /* ADC Start Conversion - CLEAR */
#define ADC_ADSC_SET_gc   (0x40) /* ADC Start Conversion - SET */


/* ADC Auto Trigger Enable */
#define ADC_ADATE_CLEAR_gc (0x00) /* ADC Auto Trigger Enable - CLEAR */
#define ADC_ADATE_SET_gc   (0x20) /* ADC Auto Trigger Enable - SET */


/* ADC Interrupt Flag */
#define ADC_ADIF_CLEAR_gc (0x00) /* ADC Interrupt Flag - CLEAR */
#define ADC_ADIF_SET_gc   (0x10) /* ADC Interrupt Flag - SET */


/* ADC Interrupt Enable */
#define ADC_ADIE_CLEAR_gc (0x00) /* ADC Interrupt Enable - CLEAR */
#define ADC_ADIE_SET_gc   (0x08) /* ADC Interrupt Enable - SET */


/* ADC Prescaler Select Bits */
#define ADC_ADPS_VAL_0x00_gc (0x00) /* 2 */
#define ADC_ADPS_VAL_0x01_gc (0x01) /* 2 */
#define ADC_ADPS_VAL_0x02_gc (0x02) /* 4 */
#define ADC_ADPS_VAL_0x03_gc (0x03) /* 8 */
#define ADC_ADPS_VAL_0x04_gc (0x04) /* 16 */
#define ADC_ADPS_VAL_0x05_gc (0x05) /* 32 */
#define ADC_ADPS_VAL_0x06_gc (0x06) /* 64 */
#define ADC_ADPS_VAL_0x07_gc (0x07) /* 128 */


/* ADC Control and Status Register B-ADLAR */
#define ADC_ADLAR_CLEAR_gc (0x00) /* ADC Control and Status Register B-ADLAR - CLEAR */
#define ADC_ADLAR_SET_gc   (0x08) /* ADC Control and Status Register B-ADLAR - SET */


/* ADC Auto Trigger Sources */
#define ADC_ADTS_VAL_0x00_gc (0x00) /* Free Running mode */
#define ADC_ADTS_VAL_0x01_gc (0x01) /* Analog Comparator */
#define ADC_ADTS_VAL_0x02_gc (0x02) /* External Interrupt Request 0 */
#define ADC_ADTS_VAL_0x03_gc (0x03) /* Timer/Counter0 Compare Match A */
#define ADC_ADTS_VAL_0x04_gc (0x04) /* Timer/Counter0 Overflow */
#define ADC_ADTS_VAL_0x05_gc (0x05) /* Timer/Counter1 Compare Match B */
#define ADC_ADTS_VAL_0x06_gc (0x06) /* Timer/Counter1 Overflow */
#define ADC_ADTS_VAL_0x07_gc (0x07) /* Watchdog Interrupt Request */


/* ADC6 Digital input Disable */
#define ADC_ADC7D_CLEAR_gc (0x00) /* ADC6 Digital input Disable - CLEAR */
#define ADC_ADC7D_SET_gc   (0x80) /* ADC6 Digital input Disable - SET */


/* ADC5 Digital input Disable */
#define ADC_ADC6D_CLEAR_gc (0x00) /* ADC5 Digital input Disable - CLEAR */
#define ADC_ADC6D_SET_gc   (0x40) /* ADC5 Digital input Disable - SET */


/* ADC4 Digital input Disable */
#define ADC_ADC5D_CLEAR_gc (0x00) /* ADC4 Digital input Disable - CLEAR */
#define ADC_ADC5D_SET_gc   (0x20) /* ADC4 Digital input Disable - SET */


/* ADC3 Digital input Disable */
#define ADC_ADC4D_CLEAR_gc (0x00) /* ADC3 Digital input Disable - CLEAR */
#define ADC_ADC4D_SET_gc   (0x10) /* ADC3 Digital input Disable - SET */


/* AREF Digital Input Disable */
#define ADC_ADC3D_CLEAR_gc (0x00) /* AREF Digital Input Disable - CLEAR */
#define ADC_ADC3D_SET_gc   (0x08) /* AREF Digital Input Disable - SET */


/* ADC2 Digital input Disable */
#define ADC_ADC2D_CLEAR_gc (0x00) /* ADC2 Digital input Disable - CLEAR */
#define ADC_ADC2D_SET_gc   (0x04) /* ADC2 Digital input Disable - SET */


/* ADC1 Digital input Disable */
#define ADC_ADC1D_CLEAR_gc (0x00) /* ADC1 Digital input Disable - CLEAR */
#define ADC_ADC1D_SET_gc   (0x02) /* ADC1 Digital input Disable - SET */


/* ADC0 Digital input Disable */
#define ADC_ADC0D_CLEAR_gc (0x00) /* ADC0 Digital input Disable - CLEAR */
#define ADC_ADC0D_SET_gc   (0x01) /* ADC0 Digital input Disable - SET */


/*
--------------------------------------------------------------------------------
AC - Analog Comparator
--------------------------------------------------------------------------------
*/


/* Hysteresis Select */
#define AC_HSEL_CLEAR_gc (0x00) /* Hysteresis Select - CLEAR */
#define AC_HSEL_SET_gc   (0x80) /* Hysteresis Select - SET */


/* Hysteresis Level */
#define AC_HLEV_CLEAR_gc (0x00) /* Hysteresis Level - CLEAR */
#define AC_HLEV_SET_gc   (0x40) /* Hysteresis Level - SET */


/* Analog Comparator Multiplexer Enable */
#define AC_ACME_CLEAR_gc (0x00) /* Analog Comparator Multiplexer Enable - CLEAR */
#define AC_ACME_SET_gc   (0x04) /* Analog Comparator Multiplexer Enable - SET */


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


/* Power Reduction TWI */
#define CPU_PRTWI_CLEAR_gc (0x00) /* Power Reduction TWI - CLEAR */
#define CPU_PRTWI_SET_gc   (0x10) /* Power Reduction TWI - SET */


/* Power Reduction Serial Peripheral Interface */
#define CPU_PRSPI_CLEAR_gc (0x00) /* Power Reduction Serial Peripheral Interface - CLEAR */
#define CPU_PRSPI_SET_gc   (0x08) /* Power Reduction Serial Peripheral Interface - SET */


/* Power Reduction Timer/Counter1 */
#define CPU_PRTIM1_CLEAR_gc (0x00) /* Power Reduction Timer/Counter1 - CLEAR */
#define CPU_PRTIM1_SET_gc   (0x04) /* Power Reduction Timer/Counter1 - SET */


/* Power Reduction Timer/Counter0 */
#define CPU_PRTIM0_CLEAR_gc (0x00) /* Power Reduction Timer/Counter0 - CLEAR */
#define CPU_PRTIM0_SET_gc   (0x02) /* Power Reduction Timer/Counter0 - SET */


/* Power Reduction ADC */
#define CPU_PRADC_CLEAR_gc (0x00) /* Power Reduction ADC - CLEAR */
#define CPU_PRADC_SET_gc   (0x01) /* Power Reduction ADC - SET */


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


/* BOD Sleep */
#define CPU_BODS_CLEAR_gc (0x00) /* BOD Sleep - CLEAR */
#define CPU_BODS_SET_gc   (0x10) /* BOD Sleep - SET */


/* Sleep Mode */
#define CPU_SM_IDLE_gc  (0x00<<1) /* Idle */
#define CPU_SM_ADC_gc   (0x01<<1) /* ADC noise reduction */
#define CPU_SM_PDOWN_gc (0x02<<1) /* Power-down */
#define CPU_SM_STDBY_gc (0x04<<1) /* Standby */


/* Sleep Enable */
#define CPU_SE_CLEAR_gc (0x00) /* Sleep Enable - CLEAR */
#define CPU_SE_SET_gc   (0x01) /* Sleep Enable - SET */


/*
--------------------------------------------------------------------------------
EXINT - External Interrupts
--------------------------------------------------------------------------------
*/


/* Interrupt Sense Control 0 Bit 1 */
#define EXINT_ISC01_CLEAR_gc (0x00) /* Interrupt Sense Control 0 Bit 1 - CLEAR */
#define EXINT_ISC01_SET_gc   (0x80) /* Interrupt Sense Control 0 Bit 1 - SET */


/* Interrupt Sense Control 0 Bit 0 */
#define EXINT_ISC00_VAL_0x00_gc (0x00<<6) /* Low Level of INTX */
#define EXINT_ISC00_VAL_0x01_gc (0x01<<6) /* Any logical change on INTX */
#define EXINT_ISC00_VAL_0x02_gc (0x02<<6) /* Falling Edge of INTX */
#define EXINT_ISC00_VAL_0x03_gc (0x03<<6) /* Rising Edge of INTX */


/* Pin Change Interrupt Flags */
#define EXINT_GIFR_PCIF_gc(x) ((x<<4) & 0x30)

/* External Interrupt Flag 0 */
#define EXINT_INTF0_CLEAR_gc (0x00) /* External Interrupt Flag 0 - CLEAR */
#define EXINT_INTF0_SET_gc   (0x01) /* External Interrupt Flag 0 - SET */


/* Pin Change Interrupt Enables */
#define EXINT_GIMSK_PCIE_gc(x) ((x<<4) & 0x30)

/* External Interrupt Request 0 Enable */
#define EXINT_INT0_CLEAR_gc (0x00) /* External Interrupt Request 0 Enable - CLEAR */
#define EXINT_INT0_SET_gc   (0x01) /* External Interrupt Request 0 Enable - SET */


/*
--------------------------------------------------------------------------------
TC8 - Timer/Counter, 8-bit
--------------------------------------------------------------------------------
*/


/* Compare Output Mode for Channel A bits */
#define TC0_TCCR0A_COM0A_gc(x) ((x<<6) & 0xC0)

/* Compare Output Mode for Channel B bits */
#define TC0_TCCR0A_COM0B_gc(x) ((x<<4) & 0x30)

/* Waveform Generation Mode */
#define TC0_TCCR0A_WGM0_gc(x) (x & 0x03)

/* Force Output Compare A */
#define TC0_FOC0A_CLEAR_gc (0x00) /* Force Output Compare A - CLEAR */
#define TC0_FOC0A_SET_gc   (0x80) /* Force Output Compare A - SET */


/* Force Output Compare B */
#define TC0_FOC0B_CLEAR_gc (0x00) /* Force Output Compare B - CLEAR */
#define TC0_FOC0B_SET_gc   (0x40) /* Force Output Compare B - SET */


/* Waveform Generation Mode */
#define TC0_WGM02_CLEAR_gc (0x00) /* Waveform Generation Mode - CLEAR */
#define TC0_WGM02_SET_gc   (0x08) /* Waveform Generation Mode - SET */


/* Clock Select */
#define TC0_CS0_VAL_0x00_gc (0x00) /* No Clock Source (Stopped) */
#define TC0_CS0_VAL_0x01_gc (0x01) /* Running, No Prescaling */
#define TC0_CS0_VAL_0x02_gc (0x02) /* Running, CLK/8 */
#define TC0_CS0_VAL_0x03_gc (0x03) /* Running, CLK/64 */
#define TC0_CS0_VAL_0x04_gc (0x04) /* Running, CLK/256 */
#define TC0_CS0_VAL_0x05_gc (0x05) /* Running, CLK/1024 */
#define TC0_CS0_VAL_0x06_gc (0x06) /* Running, ExtClk Tx Falling Edge */
#define TC0_CS0_VAL_0x07_gc (0x07) /* Running, ExtClk Tx Rising Edge */


/* Input Capture Interrupt Enable */
#define TC0_ICIE1_CLEAR_gc (0x00) /* Input Capture Interrupt Enable - CLEAR */
#define TC0_ICIE1_SET_gc   (0x80) /* Input Capture Interrupt Enable - SET */


/* Output Compare B Match Interrupt Enable */
#define TC0_OCIE1B_CLEAR_gc (0x00) /* Output Compare B Match Interrupt Enable - CLEAR */
#define TC0_OCIE1B_SET_gc   (0x20) /* Output Compare B Match Interrupt Enable - SET */


/* Output Compare A Match Interrupt Enable */
#define TC0_OCIE1A_CLEAR_gc (0x00) /* Output Compare A Match Interrupt Enable - CLEAR */
#define TC0_OCIE1A_SET_gc   (0x10) /* Output Compare A Match Interrupt Enable - SET */


/* Overflow Interrupt Enable */
#define TC0_TIMSK_TOIE_gc(x) (x & 0x09)

/* Timer/Counter Output Compare Match B Interrupt Enable */
#define TC0_OCIE0B_CLEAR_gc (0x00) /* Timer/Counter Output Compare Match B Interrupt Enable - CLEAR */
#define TC0_OCIE0B_SET_gc   (0x04) /* Timer/Counter Output Compare Match B Interrupt Enable - SET */


/* Timer/Counter0 Output Compare Match A Interrupt Enable */
#define TC0_OCIE0A_CLEAR_gc (0x00) /* Timer/Counter0 Output Compare Match A Interrupt Enable - CLEAR */
#define TC0_OCIE0A_SET_gc   (0x02) /* Timer/Counter0 Output Compare Match A Interrupt Enable - SET */


/* Input Capture Flag */
#define TC0_ICF1_CLEAR_gc (0x00) /* Input Capture Flag - CLEAR */
#define TC0_ICF1_SET_gc   (0x80) /* Input Capture Flag - SET */


/* Timer Output Compare Flag 1B */
#define TC0_OCF1B_CLEAR_gc (0x00) /* Timer Output Compare Flag 1B - CLEAR */
#define TC0_OCF1B_SET_gc   (0x20) /* Timer Output Compare Flag 1B - SET */


/* Timer Output Compare Flag 1A */
#define TC0_OCF1A_CLEAR_gc (0x00) /* Timer Output Compare Flag 1A - CLEAR */
#define TC0_OCF1A_SET_gc   (0x10) /* Timer Output Compare Flag 1A - SET */


/* Timer Overflow Flag */
#define TC0_TIFR_TOV_gc(x) (x & 0x09)

/* Output Compare Flag 0 B */
#define TC0_OCF0B_CLEAR_gc (0x00) /* Output Compare Flag 0 B - CLEAR */
#define TC0_OCF0B_SET_gc   (0x04) /* Output Compare Flag 0 B - SET */


/* Output Compare Flag 0 A */
#define TC0_OCF0A_CLEAR_gc (0x00) /* Output Compare Flag 0 A - CLEAR */
#define TC0_OCF0A_SET_gc   (0x02) /* Output Compare Flag 0 A - SET */


/* Timer Synchronization Mode */
#define TC0_TSM_CLEAR_gc (0x00) /* Timer Synchronization Mode - CLEAR */
#define TC0_TSM_SET_gc   (0x80) /* Timer Synchronization Mode - SET */


/* Prescaler Reset */
#define TC0_PSR_CLEAR_gc (0x00) /* Prescaler Reset - CLEAR */
#define TC0_PSR_SET_gc   (0x01) /* Prescaler Reset - SET */


/*
--------------------------------------------------------------------------------
TWI - Two Wire Serial Interface
--------------------------------------------------------------------------------
*/


/* TWI SDA Hold Time Enable */
#define TWI_TWSHE_CLEAR_gc (0x00) /* TWI SDA Hold Time Enable - CLEAR */
#define TWI_TWSHE_SET_gc   (0x80) /* TWI SDA Hold Time Enable - SET */


/* TWI Data Interrupt Enable */
#define TWI_TWDIE_CLEAR_gc (0x00) /* TWI Data Interrupt Enable - CLEAR */
#define TWI_TWDIE_SET_gc   (0x20) /* TWI Data Interrupt Enable - SET */


/* TWI Address/Stop Interrupt Enable */
#define TWI_TWASIE_CLEAR_gc (0x00) /* TWI Address/Stop Interrupt Enable - CLEAR */
#define TWI_TWASIE_SET_gc   (0x10) /* TWI Address/Stop Interrupt Enable - SET */


/* Two-Wire Interface Enable */
#define TWI_TWEN_CLEAR_gc (0x00) /* Two-Wire Interface Enable - CLEAR */
#define TWI_TWEN_SET_gc   (0x08) /* Two-Wire Interface Enable - SET */


/* TWI Stop Interrupt Enable */
#define TWI_TWSIE_CLEAR_gc (0x00) /* TWI Stop Interrupt Enable - CLEAR */
#define TWI_TWSIE_SET_gc   (0x04) /* TWI Stop Interrupt Enable - SET */


/* TWI Promiscuous Mode Enable */
#define TWI_TWPME_CLEAR_gc (0x00) /* TWI Promiscuous Mode Enable - CLEAR */
#define TWI_TWPME_SET_gc   (0x02) /* TWI Promiscuous Mode Enable - SET */


/* TWI Smart Mode Enable */
#define TWI_TWSME_CLEAR_gc (0x00) /* TWI Smart Mode Enable - CLEAR */
#define TWI_TWSME_SET_gc   (0x01) /* TWI Smart Mode Enable - SET */


/* TWI Acknowledge Action */
#define TWI_TWAA_CLEAR_gc (0x00) /* TWI Acknowledge Action - CLEAR */
#define TWI_TWAA_SET_gc   (0x04) /* TWI Acknowledge Action - SET */


/* TWI Slave Control Register B-TWCMD */
#define TWI_TWSCRB_TWCMD_gc(x) (x & 0x03)

/* TWI Data Interrupt Flag */
#define TWI_TWDIF_CLEAR_gc (0x00) /* TWI Data Interrupt Flag - CLEAR */
#define TWI_TWDIF_SET_gc   (0x80) /* TWI Data Interrupt Flag - SET */


/* TWI Address/Stop Interrupt Flag */
#define TWI_TWASIF_CLEAR_gc (0x00) /* TWI Address/Stop Interrupt Flag - CLEAR */
#define TWI_TWASIF_SET_gc   (0x40) /* TWI Address/Stop Interrupt Flag - SET */


/* TWI Clock Hold */
#define TWI_TWCH_CLEAR_gc (0x00) /* TWI Clock Hold - CLEAR */
#define TWI_TWCH_SET_gc   (0x20) /* TWI Clock Hold - SET */


/* TWI Receive Acknowledge */
#define TWI_TWRA_CLEAR_gc (0x00) /* TWI Receive Acknowledge - CLEAR */
#define TWI_TWRA_SET_gc   (0x10) /* TWI Receive Acknowledge - SET */


/* TWI Collision */
#define TWI_TWC_CLEAR_gc (0x00) /* TWI Collision - CLEAR */
#define TWI_TWC_SET_gc   (0x08) /* TWI Collision - SET */


/* TWI Bus Error */
#define TWI_TWBE_CLEAR_gc (0x00) /* TWI Bus Error - CLEAR */
#define TWI_TWBE_SET_gc   (0x04) /* TWI Bus Error - SET */


/* TWI Read/Write Direction */
#define TWI_TWDIR_CLEAR_gc (0x00) /* TWI Read/Write Direction - CLEAR */
#define TWI_TWDIR_SET_gc   (0x02) /* TWI Read/Write Direction - SET */


/* TWI Address or Stop */
#define TWI_TWAS_CLEAR_gc (0x00) /* TWI Address or Stop - CLEAR */
#define TWI_TWAS_SET_gc   (0x01) /* TWI Address or Stop - SET */


/*
--------------------------------------------------------------------------------
TC16 - Timer/Counter, 16-bit
--------------------------------------------------------------------------------
*/


/* Compare Output Mode 1A, bits */
#define TC1_TCCR1A_COM1A_gc(x) ((x<<6) & 0xC0)

/* Compare Output Mode 1B, bits */
#define TC1_TCCR1A_COM1B_gc(x) ((x<<4) & 0x30)

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


/* Input Capture Interrupt Enable */
#define TC1_ICIE1_CLEAR_gc (0x00) /* Input Capture Interrupt Enable - CLEAR */
#define TC1_ICIE1_SET_gc   (0x80) /* Input Capture Interrupt Enable - SET */


/* Output Compare B Match Interrupt Enable */
#define TC1_OCIE1B_CLEAR_gc (0x00) /* Output Compare B Match Interrupt Enable - CLEAR */
#define TC1_OCIE1B_SET_gc   (0x20) /* Output Compare B Match Interrupt Enable - SET */


/* Output Compare A Match Interrupt Enable */
#define TC1_OCIE1A_CLEAR_gc (0x00) /* Output Compare A Match Interrupt Enable - CLEAR */
#define TC1_OCIE1A_SET_gc   (0x10) /* Output Compare A Match Interrupt Enable - SET */


/* Overflow Interrupt Enable */
#define TC1_TIMSK_TOIE_gc(x) (x & 0x09)

/* Timer/Counter Output Compare Match B Interrupt Enable */
#define TC1_OCIE0B_CLEAR_gc (0x00) /* Timer/Counter Output Compare Match B Interrupt Enable - CLEAR */
#define TC1_OCIE0B_SET_gc   (0x04) /* Timer/Counter Output Compare Match B Interrupt Enable - SET */


/* Timer/Counter0 Output Compare Match A Interrupt Enable */
#define TC1_OCIE0A_CLEAR_gc (0x00) /* Timer/Counter0 Output Compare Match A Interrupt Enable - CLEAR */
#define TC1_OCIE0A_SET_gc   (0x02) /* Timer/Counter0 Output Compare Match A Interrupt Enable - SET */


/* Input Capture Flag */
#define TC1_ICF1_CLEAR_gc (0x00) /* Input Capture Flag - CLEAR */
#define TC1_ICF1_SET_gc   (0x80) /* Input Capture Flag - SET */


/* Timer Output Compare Flag 1B */
#define TC1_OCF1B_CLEAR_gc (0x00) /* Timer Output Compare Flag 1B - CLEAR */
#define TC1_OCF1B_SET_gc   (0x20) /* Timer Output Compare Flag 1B - SET */


/* Timer Output Compare Flag 1A */
#define TC1_OCF1A_CLEAR_gc (0x00) /* Timer Output Compare Flag 1A - CLEAR */
#define TC1_OCF1A_SET_gc   (0x10) /* Timer Output Compare Flag 1A - SET */


/* Timer Overflow Flag */
#define TC1_TIFR_TOV_gc(x) (x & 0x09)

/* Output Compare Flag 0 B */
#define TC1_OCF0B_CLEAR_gc (0x00) /* Output Compare Flag 0 B - CLEAR */
#define TC1_OCF0B_SET_gc   (0x04) /* Output Compare Flag 0 B - SET */


/* Output Compare Flag 0 A */
#define TC1_OCF0A_CLEAR_gc (0x00) /* Output Compare Flag 0 A - CLEAR */
#define TC1_OCF0A_SET_gc   (0x02) /* Output Compare Flag 0 A - SET */


/* Timer Synchronization Mode */
#define TC1_TSM_CLEAR_gc (0x00) /* Timer Synchronization Mode - CLEAR */
#define TC1_TSM_SET_gc   (0x80) /* Timer Synchronization Mode - SET */


/* Prescaler Reset */
#define TC1_PSR_CLEAR_gc (0x00) /* Prescaler Reset - CLEAR */
#define TC1_PSR_SET_gc   (0x01) /* Prescaler Reset - SET */


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
#define SPI_SPR_VAL_0x00_gc (0x00) /* fcl/4 */
#define SPI_SPR_VAL_0x01_gc (0x01) /* fcl/16 */
#define SPI_SPR_VAL_0x02_gc (0x02) /* fcl/64 */
#define SPI_SPR_VAL_0x03_gc (0x03) /* fcl/128 */


/* SPI Interrupt Flag */
#define SPI_SPIF_CLEAR_gc (0x00) /* SPI Interrupt Flag - CLEAR */
#define SPI_SPIF_SET_gc   (0x80) /* SPI Interrupt Flag - SET */


/* Write Collision Flag */
#define SPI_WCOL_CLEAR_gc (0x00) /* Write Collision Flag - CLEAR */
#define SPI_WCOL_SET_gc   (0x40) /* Write Collision Flag - SET */


/* Double SPI Speed Bit */
#define SPI_SPI2X_CLEAR_gc (0x00) /* Double SPI Speed Bit - CLEAR */
#define SPI_SPI2X_SET_gc   (0x01) /* Double SPI Speed Bit - SET */

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
#define PORTBB_BASE     _SFR_MEM8 (0x0000) /* PORTBB Base Address */
#define PORTBB_PINB     _SFR_MEM8 (0x0004) /* Port B Data register */
#define PORTBB_DDRB     _SFR_MEM8 (0x0005) /* Data Direction Register, Port B */
#define PORTBB_PORTB    _SFR_MEM8 (0x0006) /* Input Pins, Port B */
#define PORTBB_PUEB     _SFR_MEM8 (0x0007) /* Pull-up Enable Control Register */
#define PORTBB_PORTCR   _SFR_MEM8 (0x0008) /* Port Control Register */

/* PORTA - I/O Port (0x0000) */
#define PORTAA_BASE     _SFR_MEM8 (0x0000) /* PORTAA Base Address */
#define PORTAA_PINA     _SFR_MEM8 (0x0000) /* Port A Input Pins */
#define PORTAA_DDRA     _SFR_MEM8 (0x0001) /* Data Direction Register, Port A */
#define PORTAA_PORTA    _SFR_MEM8 (0x0002) /* Port A Data Register */
#define PORTAA_PUEA     _SFR_MEM8 (0x0003) /* Pull-up Enable Control Register */
#define PORTAA_PORTCR   _SFR_MEM8 (0x0008) /* Port Control Register */

/* WDT - Watchdog Timer (0x0000) */
#define WDT_BASE        _SFR_MEM8 (0x0000) /* WDT Base Address */
#define WDT_WDTCSR      _SFR_MEM8 (0x0031) /* Watchdog Timer Control and Status Register */

/* ADC - Analog-to-Digital Converter (0x0000) */
#define ADC_BASE        _SFR_MEM8 (0x0000) /* ADC Base Address */
#define ADC_DIDR0       _SFR_MEM8 (0x000D) /* Digital Input Disable Register 0 */
#define ADC_ADC         _SFR_MEM16(0x000E) /* ADC Data Register  Bytes */
#define ADC_ADCL        _SFR_MEM8 (0x000E) /* ADC Data Register  Bytes LOW BYTE */
#define ADC_ADCH        _SFR_MEM8 (0x000F) /* ADC Data Register  Bytes HIGH BYTE */
#define ADC_ADMUX       _SFR_MEM8 (0x0010) /* The ADC multiplexer Selection Register */
#define ADC_ADCSRB      _SFR_MEM8 (0x0011) /* ADC Control and Status Register B */
#define ADC_ADCSRA      _SFR_MEM8 (0x0012) /* The ADC Control and Status register */

/* AC - Analog Comparator (0x0000) */
#define AC_BASE         _SFR_MEM8 (0x0000) /* AC Base Address */
#define AC_ACSRB        _SFR_MEM8 (0x0013) /* Analog Comparator Control And Status Register B */
#define AC_ACSRA        _SFR_MEM8 (0x0014) /* Analog Comparator Control And Status Register A */

/* CPU - CPU Registers (0x0000) */
#define CPU_BASE        _SFR_MEM8 (0x0000) /* CPU Base Address */
#define CPU_NVMCSR      _SFR_MEM8 (0x0032) /* Non-Volatile Memory Control and Status Register */
#define CPU_NVMCMD      _SFR_MEM8 (0x0033) /* Non-Volatile Memory Command */
#define CPU_PRR         _SFR_MEM8 (0x0035) /* Power Reduction Register */
#define CPU_CLKPSR      _SFR_MEM8 (0x0036) /* Clock Prescale Register */
#define CPU_CLKMSR      _SFR_MEM8 (0x0037) /* Clock Main Settings Register */
#define CPU_OSCCAL      _SFR_MEM8 (0x0039) /* Oscillator Calibration Value */
#define CPU_MCUCR       _SFR_MEM8 (0x003A) /* MCU Control Register */
#define CPU_RSTFLR      _SFR_MEM8 (0x003B) /* Reset Flag Register */
#define CPU_CCP         _SFR_MEM8 (0x003C) /* Configuration Change Protection */
#define CPU_SP          _SFR_MEM16(0x003D) /* Stack Pointer  */
#define CPU_SPL         _SFR_MEM8 (0x003D) /* Stack Pointer  LOW BYTE */
#define CPU_SPH         _SFR_MEM8 (0x003E) /* Stack Pointer  HIGH BYTE */
#define CPU_SREG        _SFR_MEM8 (0x003F) /* Status Register */

/* EXINT - External Interrupts (0x0000) */
#define EXINT_BASE      _SFR_MEM8 (0x0000) /* EXINT Base Address */
#define EXINT_PCMSK0    _SFR_MEM8 (0x0009) /* Pin Change Mask Register 0 */
#define EXINT_PCMSK1    _SFR_MEM8 (0x000A) /* Pin Change Mask Register 1 */
#define EXINT_GIFR      _SFR_MEM8 (0x000B) /* General Interrupt Flag Register */
#define EXINT_GIMSK     _SFR_MEM8 (0x000C) /* General Interrupt Mask Register */
#define EXINT_MCUCR     _SFR_MEM8 (0x003A) /* MCU Control Register */

/* TC0 - Timer/Counter, 8-bit (0x0000) */
#define TC8_BASE        _SFR_MEM8 (0x0000) /* TC8 Base Address */
#define TC8_OCR0B       _SFR_MEM8 (0x0015) /* Timer/Counter0 Output Compare Register */
#define TC8_OCR0A       _SFR_MEM8 (0x0016) /* Timer/Counter0 Output Compare Register */
#define TC8_TCNT0       _SFR_MEM8 (0x0017) /* Timer/Counter0 */
#define TC8_TCCR0B      _SFR_MEM8 (0x0018) /* Timer/Counter 0 Control Register B */
#define TC8_TCCR0A      _SFR_MEM8 (0x0019) /* Timer/Counter 0 Control Register A */
#define TC8_TIFR        _SFR_MEM8 (0x0025) /* Overflow Interrupt Enable */
#define TC8_TIMSK       _SFR_MEM8 (0x0026) /* Timer Interrupt Mask Register */
#define TC8_GTCCR       _SFR_MEM8 (0x0027) /* General Timer/Counter Control Register */

/* TWI - Two Wire Serial Interface (0x0000) */
#define TWI_BASE        _SFR_MEM8 (0x0000) /* TWI Base Address */
#define TWI_TWSD        _SFR_MEM8 (0x0028) /* TWI Slave Data Register */
#define TWI_TWSAM       _SFR_MEM8 (0x0029) /* TWI Slave Address Mask Register */
#define TWI_TWSA        _SFR_MEM8 (0x002A) /* TWI Slave Address Register */
#define TWI_TWSSRA      _SFR_MEM8 (0x002B) /* TWI Slave Status Register A */
#define TWI_TWSCRB      _SFR_MEM8 (0x002C) /* TWI Slave Control Register B */
#define TWI_TWSCRA      _SFR_MEM8 (0x002D) /* TWI Slave Control Register A */

/* TC1 - Timer/Counter, 16-bit (0x0000) */
#define TC16_BASE       _SFR_MEM16(0x0000) /* TC16 Base Address */
#define TC16_ICR1       _SFR_MEM16(0x001A) /* Input Capture Register  Bytes */
#define TC16_ICR1L      _SFR_MEM8 (0x001A) /* Input Capture Register  Bytes LOW BYTE */
#define TC16_ICR1H      _SFR_MEM8 (0x001B) /* Input Capture Register  Bytes HIGH BYTE */
#define TC16_OCR1B      _SFR_MEM16(0x001C) /* Timer/Counter1 Output Compare Register B  */
#define TC16_OCR1BL     _SFR_MEM8 (0x001C) /* Timer/Counter1 Output Compare Register B  LOW BYTE */
#define TC16_OCR1BH     _SFR_MEM8 (0x001D) /* Timer/Counter1 Output Compare Register B  HIGH BYTE */
#define TC16_OCR1A      _SFR_MEM16(0x001E) /* Timer/Counter 1 Output Compare Register A  */
#define TC16_OCR1AL     _SFR_MEM8 (0x001E) /* Timer/Counter 1 Output Compare Register A  LOW BYTE */
#define TC16_OCR1AH     _SFR_MEM8 (0x001F) /* Timer/Counter 1 Output Compare Register A  HIGH BYTE */
#define TC16_TCNT1      _SFR_MEM16(0x0020) /* Timer/Counter1  */
#define TC16_TCNT1L     _SFR_MEM8 (0x0020) /* Timer/Counter1  LOW BYTE */
#define TC16_TCNT1H     _SFR_MEM8 (0x0021) /* Timer/Counter1  HIGH BYTE */
#define TC16_TCCR1C     _SFR_MEM8 (0x0022) /* Timer/Counter1 Control Register C */
#define TC16_TCCR1B     _SFR_MEM8 (0x0023) /* Timer/Counter1 Control Register B */
#define TC16_TCCR1A     _SFR_MEM8 (0x0024) /* Timer/Counter1 Control Register A */
#define TC16_TIFR       _SFR_MEM8 (0x0025) /* Overflow Interrupt Enable */
#define TC16_TIMSK      _SFR_MEM8 (0x0026) /* Timer Interrupt Mask Register */
#define TC16_GTCCR      _SFR_MEM8 (0x0027) /* General Timer/Counter Control Register */

/* SPI - Serial Peripheral Interface (0x0000) */
#define SPI_BASE        _SFR_MEM8 (0x0000) /* SPI Base Address */
#define SPI_SPDR        _SFR_MEM8 (0x002E) /* SPI Data Register */
#define SPI_SPSR        _SFR_MEM8 (0x002F) /* SPI Status Register */
#define SPI_SPCR        _SFR_MEM8 (0x0030) /* SPI Control Register */

/* FUSE - Fuses (0x0000) */
#define FUSE_BASE       _SFR_MEM8 (0x0000) /* FUSE Base Address */
#define FUSE_BYTE0      _SFR_MEM8 (0x0000) 

/* LOCKBIT - Lockbits (0x0000) */
#define LOCKBIT_BASE    _SFR_MEM8 (0x0000) /* LOCKBIT Base Address */
#define LOCKBIT_LOCKBIT _SFR_MEM8 (0x0000) 
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
#define None_WDT_vect_num        (4)                 
#define None_WDT_vect            _VECTOR(4)          /* Watchdog Time-out */
#define None_TIM1_CAPT_vect_num  (5)                 
#define None_TIM1_CAPT_vect      _VECTOR(5)          /* Timer/Counter1 Input Capture */
#define None_TIM1_COMPA_vect_num (6)                 
#define None_TIM1_COMPA_vect     _VECTOR(6)          /*  Timer/Counter1 Compare Match A */
#define None_TIM1_COMPB_vect_num (7)                 
#define None_TIM1_COMPB_vect     _VECTOR(7)          /*  Timer/Counter1 Compare Match B */
#define None_TIM1_OVF_vect_num   (8)                 
#define None_TIM1_OVF_vect       _VECTOR(8)          /* Timer/Counter1 Overflow */
#define None_TIM0_COMPA_vect_num (9)                 
#define None_TIM0_COMPA_vect     _VECTOR(9)          /* Timer/Counter0 Compare Match A */
#define None_TIM0_COMPB_vect_num (10)                
#define None_TIM0_COMPB_vect     _VECTOR(10)         /* Timer/Counter0 Compare Match B */
#define None_TIM0_OVF_vect_num   (11)                
#define None_TIM0_OVF_vect       _VECTOR(11)         /* Timer/Counter0 Overflow */
#define None_ANA_COMP_vect_num   (12)                
#define None_ANA_COMP_vect       _VECTOR(12)         /* Analog Comparator */
#define None_ADC_ADC_vect_num    (13)                
#define None_ADC_ADC_vect        _VECTOR(13)         /* Conversion Complete */
#define None_TWI_SLAVE_vect_num  (14)                
#define None_TWI_SLAVE_vect      _VECTOR(14)         /* Two-Wire Interface */
#define None_SPI_vect_num        (15)                
#define None_SPI_vect            _VECTOR(15)         /* Serial Peripheral Interface */
#define None_QTRIP_vect_num      (16)                
#define None_QTRIP_vect          _VECTOR(16)         /* Touch Sensing */

/* Vector Table Size */
#define _VECTOR_SIZE             (2)                 /* Size of individual vector. */
#define _VECTORS_SIZE            (17 * _VECTOR_SIZE) /* Size of all vectors */
/*
================================================================================
Constants
================================================================================
*/

#define PROGMEM_START   (0x0000)                           
#define PROGMEM_SIZE    (0x0800)                           
#define PROGMEM_END     (PROGMEM_START + PROGMEM_SIZE - 1) 

#define FLASH_START     (0x0000)                           
#define FLASH_SIZE      (0x0800)                           
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
#define DATAMEM_SIZE                        (0x4800)                                                               
#define DATAMEM_END                         (DATAMEM_START + DATAMEM_SIZE - 1)                                     

#define IO_START                            (0x0000)                                                               
#define IO_SIZE                             (0x0040)                                                               
#define IO_PAGE_SIZE                        (0x0001)                                                               
#define IO_END                              (IO_START + IO_SIZE - 1)                                               

#define SRAM_START                          (0x0040)                                                               
#define SRAM_SIZE                           (0x0080)                                                               
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
#define MAPPED_FLASH_SIZE                   (0x0800)                                                               
#define MAPPED_FLASH_PAGE_SIZE              (0x0001)                                                               
#define MAPPED_FLASH_END                    (MAPPED_FLASH_START + MAPPED_FLASH_SIZE - 1)                           

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

#define PA0 (0) 
#define PA1 (1) 
#define PA2 (2) 
#define PA3 (3) 
#define PA4 (4) 
#define PA5 (5) 
#define PA6 (6) 
#define PA7 (7) 

/*
================================================================================
Fuses/LockBits/Signatures
================================================================================
*/

/* ============ Fuses ============ */

#define FUSE_MEMORY_SIZE 0 

/* Fuse offset 0x00 */
#define RSTDISBL  (unsigned char)~_BV(0) /* Disable external reset */
#define WDTON     (unsigned char)~_BV(1) /* Watch dog timer always on */
#define CKOUT     (unsigned char)~_BV(2) /* Output external clock */
#define BODLEVEL0 (unsigned char)~_BV(4) /* Brown-out Detector trigger level bit 0 */
#define BODLEVEL1 (unsigned char)~_BV(5) /* Brown-out Detector trigger level bit 1 */
#define BODLEVEL2 (unsigned char)~_BV(6) /* Brown-out Detector trigger level bit 2 */


/* ========== Lock Bits ========== */
#define __LOCK_BITS_EXIST  


/* ========== Signature ========== */
#define SIGNATURE_0 (0x1E) 
#define SIGNATURE_1 (0x91) 
#define SIGNATURE_2 (0x0F) 

#endif /* #ifdef _AVR_ATtiny20_H_INCLUDED */
