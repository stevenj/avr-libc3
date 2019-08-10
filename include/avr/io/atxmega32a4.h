/******************************************************************************
 *   This file is part of avr-libc3.                                          * 
 *                                                                            * 
 *   Automatically created by devtools/gen-ioheader-atdf.py (V0.91)           * 
 *                                                                            * 
 *   .atpack File: ATxmega32A4.atdf                                           * 
 *   .ATDF File:   atdf/ATxmega32A4.atdf                                      * 
 *   Version:      2.0.11                                                     * 
 *   Date:         2019-07-11                                                 * 
 *   Device:       ATxmega32A4                                                * 
 *   Architecture: AVR8_XMEGA                                                 * 
 *                                                                            * 
 *   Changelog:                                                               * 
 *                                                                            * 
 *   2.0.11 2019-07-11 :                                                      * 
 *        - Added description for some interrupts and added                   * 
 *        - memberofperipheral for VirtualPin in PIC files.                   * 
 *    2.0.6    UNKNOWN :                                                      * 
 *        - Added isexecutable attribute to SRAM in PIC files.                * 
 *    2.0.3 2019-01-24 :                                                      * 
 *        - Fixed upper bound of external memory for EBI devices.             * 
 *        - Succeeds Atmel.XMEGAA_DFP 1.1.68.                                 * 
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
#  define _AVR_IOXXX_H_ "ioATxmega32A4.h"
#else
#  error "Attempt to include more than one <avr/ioXXX.h> file."
#endif

#ifndef _AVR_ATxmega32A4_H_INCLUDED
#  define _AVR_ATxmega32A4_H_INCLUDED

/*
================================================================================
Ungrouped common register
================================================================================
*/

#define GPIOR0 _SFR_MEM8 (0x0)  /* General Purpose IO Register 0 */
#define GPIOR1 _SFR_MEM8 (0x1)  /* General Purpose IO Register 1 */
#define GPIOR2 _SFR_MEM8 (0x2)  /* General Purpose IO Register 2 */
#define GPIOR3 _SFR_MEM8 (0x3)  /* General Purpose IO Register 3 */
#define GPIOR4 _SFR_MEM8 (0x4)  /* General Purpose IO Register 4 */
#define GPIOR5 _SFR_MEM8 (0x5)  /* General Purpose IO Register 5 */
#define GPIOR6 _SFR_MEM8 (0x6)  /* General Purpose IO Register 6 */
#define GPIOR7 _SFR_MEM8 (0x7)  /* General Purpose IO Register 7 */
#define GPIOR8 _SFR_MEM8 (0x8)  /* General Purpose IO Register 8 */
#define GPIOR9 _SFR_MEM8 (0x9)  /* General Purpose IO Register 9 */
#define GPIORA _SFR_MEM8 (0xA)  /* General Purpose IO Register 10 */
#define GPIORB _SFR_MEM8 (0xB)  /* General Purpose IO Register 11 */
#define GPIORC _SFR_MEM8 (0xC)  /* General Purpose IO Register 12 */
#define GPIORD _SFR_MEM8 (0xD)  /* General Purpose IO Register 13 */
#define GPIORE _SFR_MEM8 (0xE)  /* General Purpose IO Register 14 */
#define GPIORF _SFR_MEM8 (0xF)  /* General Purpose IO Register 15 */

#define CCP    _SFR_MEM8 (0x34) /* Configuration Change Protection */

#define RAMPD  _SFR_MEM8 (0x38) /* Ramp D */
#define RAMPX  _SFR_MEM8 (0x39) /* Ramp X */
#define RAMPY  _SFR_MEM8 (0x3A) /* Ramp Y */
#define RAMPZ  _SFR_MEM8 (0x3B) /* Ramp Z */
#define EIND   _SFR_MEM8 (0x3C) /* Extended Indirect Jump */
#define SPL    _SFR_MEM8 (0x3D) /* Stack Pointer Low */
#define SPH    _SFR_MEM8 (0x3E) /* Stack Pointer High */
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
GPIO - General Purpose IO
--------------------------------------------------------------------------------
*/

typedef struct GPIO_struct
{
    register8_t GPIOR0; /* General Purpose IO Register 0 */
    register8_t GPIOR1; /* General Purpose IO Register 1 */
    register8_t GPIOR2; /* General Purpose IO Register 2 */
    register8_t GPIOR3; /* General Purpose IO Register 3 */
    register8_t GPIOR4; /* General Purpose IO Register 4 */
    register8_t GPIOR5; /* General Purpose IO Register 5 */
    register8_t GPIOR6; /* General Purpose IO Register 6 */
    register8_t GPIOR7; /* General Purpose IO Register 7 */
    register8_t GPIOR8; /* General Purpose IO Register 8 */
    register8_t GPIOR9; /* General Purpose IO Register 9 */
    register8_t GPIORA; /* General Purpose IO Register 10 */
    register8_t GPIORB; /* General Purpose IO Register 11 */
    register8_t GPIORC; /* General Purpose IO Register 12 */
    register8_t GPIORD; /* General Purpose IO Register 13 */
    register8_t GPIORE; /* General Purpose IO Register 14 */
    register8_t GPIORF; /* General Purpose IO Register 15 */
} GPIO_t;


/*
--------------------------------------------------------------------------------
XOCD - On-Chip Debug System
--------------------------------------------------------------------------------
*/

typedef struct OCD_struct
{
    register8_t OCDR0; /* OCD Register 0 */
    register8_t OCDR1; /* OCD Register 1 */
} OCD_t;


/* OCDR Dirty */
typedef enum OCD_OCDRD_enum
{
    OCD_OCDRD_CLEAR_gc = (0x00), /* OCDR Dirty - CLEAR */
    OCD_OCDRD_SET_gc   = (0x01), /* OCDR Dirty - SET */
} OCD_OCDRD_t;

/*
--------------------------------------------------------------------------------
CPU - CPU
--------------------------------------------------------------------------------
*/

typedef struct CPU_struct
{
    register8_t rsv_0x00[4]; /* RESERVED REGISTER BLOCK */
    register8_t CCP;         /* Configuration Change Protection */
    register8_t rsv_0x05[3]; /* RESERVED REGISTER BLOCK */
    register8_t RAMPD;       /* Ramp D */
    register8_t RAMPX;       /* Ramp X */
    register8_t RAMPY;       /* Ramp Y */
    register8_t RAMPZ;       /* Ramp Z */
    register8_t EIND;        /* Extended Indirect Jump */
    register8_t SPL;         /* Stack Pointer Low */
    register8_t SPH;         /* Stack Pointer High */
    register8_t SREG;        /* Status Register */
} CPU_t;


/* CCP signature */
typedef enum CPU_CCP_enum
{
    CPU_CCP_SPM_gc   = (0x9D), /* SPM Instruction Protection */
    CPU_CCP_IOREG_gc = (0xD8), /* IO Register Protection */
} CPU_CCP_t;

/* Global Interrupt Enable Flag */
typedef enum CPU_I_enum
{
    CPU_I_CLEAR_gc = (0x00), /* Global Interrupt Enable Flag - CLEAR */
    CPU_I_SET_gc   = (0x80), /* Global Interrupt Enable Flag - SET */
} CPU_I_t;

/* Transfer Bit */
typedef enum CPU_T_enum
{
    CPU_T_CLEAR_gc = (0x00), /* Transfer Bit - CLEAR */
    CPU_T_SET_gc   = (0x40), /* Transfer Bit - SET */
} CPU_T_t;

/* Half Carry Flag */
typedef enum CPU_H_enum
{
    CPU_H_CLEAR_gc = (0x00), /* Half Carry Flag - CLEAR */
    CPU_H_SET_gc   = (0x20), /* Half Carry Flag - SET */
} CPU_H_t;

/* N Exclusive Or V Flag */
typedef enum CPU_S_enum
{
    CPU_S_CLEAR_gc = (0x00), /* N Exclusive Or V Flag - CLEAR */
    CPU_S_SET_gc   = (0x10), /* N Exclusive Or V Flag - SET */
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
CLK - Clock System
--------------------------------------------------------------------------------
*/

typedef struct CLK_struct
{
    register8_t CTRL;    /* Control Register */
    register8_t PSCTRL;  /* Prescaler Control Register */
    register8_t LOCK;    /* Lock register */
    register8_t RTCCTRL; /* RTC Control Register */
} CLK_t;


/*
--------------------------------------------------------------------------------
CLK - Clock System
--------------------------------------------------------------------------------
*/

typedef struct PR_struct
{
    register8_t PRGEN; /* General Power Reduction */
    register8_t PRPA;  /* Power Reduction Port A */
    register8_t PRPB;  /* Power Reduction Port B */
    register8_t PRPC;  /* Power Reduction Port C */
    register8_t PRPD;  /* Power Reduction Port D */
    register8_t PRPE;  /* Power Reduction Port E */
    register8_t PRPF;  /* Power Reduction Port F */
} PR_t;


/* System Clock Selection */
typedef enum CLK_SCLKSEL_enum
{
    CLK_SCLKSEL_RC2M_gc  = (0x00), /* Internal 2MHz RC Oscillator */
    CLK_SCLKSEL_RC32M_gc = (0x01), /* Internal 32MHz RC Oscillator */
    CLK_SCLKSEL_RC32K_gc = (0x02), /* Internal 32kHz RC Oscillator */
    CLK_SCLKSEL_XOSC_gc  = (0x03), /* External Crystal Oscillator or Clock */
    CLK_SCLKSEL_PLL_gc   = (0x04), /* Phase Locked Loop */
} CLK_SCLKSEL_t;

/* Prescaler A Division Factor */
typedef enum CLK_PSADIV_enum
{
    CLK_PSADIV_1_gc   = (0x00<<2), /* Divide by 1 */
    CLK_PSADIV_2_gc   = (0x01<<2), /* Divide by 2 */
    CLK_PSADIV_4_gc   = (0x03<<2), /* Divide by 4 */
    CLK_PSADIV_8_gc   = (0x05<<2), /* Divide by 8 */
    CLK_PSADIV_16_gc  = (0x07<<2), /* Divide by 16 */
    CLK_PSADIV_32_gc  = (0x09<<2), /* Divide by 32 */
    CLK_PSADIV_64_gc  = (0x0B<<2), /* Divide by 64 */
    CLK_PSADIV_128_gc = (0x0D<<2), /* Divide by 128 */
    CLK_PSADIV_256_gc = (0x0F<<2), /* Divide by 256 */
    CLK_PSADIV_512_gc = (0x11<<2), /* Divide by 512 */
} CLK_PSADIV_t;

/* Prescaler B and C Division factor */
typedef enum CLK_PSBCDIV_enum
{
    CLK_PSBCDIV_1_1_gc = (0x00), /* Divide B by 1 and C by 1 */
    CLK_PSBCDIV_1_2_gc = (0x01), /* Divide B by 1 and C by 2 */
    CLK_PSBCDIV_4_1_gc = (0x02), /* Divide B by 4 and C by 1 */
    CLK_PSBCDIV_2_2_gc = (0x03), /* Divide B by 2 and C by 2 */
} CLK_PSBCDIV_t;

/* Clock System Lock */
typedef enum CLK_LOCK_enum
{
    CLK_LOCK_CLEAR_gc = (0x00), /* Clock System Lock - CLEAR */
    CLK_LOCK_SET_gc   = (0x01), /* Clock System Lock - SET */
} CLK_LOCK_t;

/* RTC Clock Source */
typedef enum CLK_RTCSRC_enum
{
    CLK_RTCSRC_ULP_gc    = (0x00<<1), /* 1kHz from internal 32kHz ULP */
    CLK_RTCSRC_TOSC_gc   = (0x01<<1), /* 1kHz from 32kHz crystal oscillator on TOSC */
    CLK_RTCSRC_RCOSC_gc  = (0x02<<1), /* 1kHz from internal 32kHz RC oscillator */
    CLK_RTCSRC_TOSC32_gc = (0x05<<1), /* 32kHz from 32kHz crystal oscillator on TOSC */
} CLK_RTCSRC_t;

/* RTC Clock Source Enable */
typedef enum CLK_RTCEN_enum
{
    CLK_RTCEN_CLEAR_gc = (0x00), /* RTC Clock Source Enable - CLEAR */
    CLK_RTCEN_SET_gc   = (0x01), /* RTC Clock Source Enable - SET */
} CLK_RTCEN_t;

/* AES */
typedef enum PR_AES_enum
{
    PR_AES_CLEAR_gc = (0x00), /* AES - CLEAR */
    PR_AES_SET_gc   = (0x10), /* AES - SET */
} PR_AES_t;

/* Real-time Counter */
typedef enum PR_RTC_enum
{
    PR_RTC_CLEAR_gc = (0x00), /* Real-time Counter - CLEAR */
    PR_RTC_SET_gc   = (0x04), /* Real-time Counter - SET */
} PR_RTC_t;

/* Event System */
typedef enum PR_EVSYS_enum
{
    PR_EVSYS_CLEAR_gc = (0x00), /* Event System - CLEAR */
    PR_EVSYS_SET_gc   = (0x02), /* Event System - SET */
} PR_EVSYS_t;

/* DMA-Controller */
typedef enum PR_DMA_enum
{
    PR_DMA_CLEAR_gc = (0x00), /* DMA-Controller - CLEAR */
    PR_DMA_SET_gc   = (0x01), /* DMA-Controller - SET */
} PR_DMA_t;

/* Port A DAC */
typedef enum PR_DAC_enum
{
    PR_DAC_CLEAR_gc = (0x00), /* Port A DAC - CLEAR */
    PR_DAC_SET_gc   = (0x04), /* Port A DAC - SET */
} PR_DAC_t;

/* Port A ADC */
typedef enum PR_ADC_enum
{
    PR_ADC_CLEAR_gc = (0x00), /* Port A ADC - CLEAR */
    PR_ADC_SET_gc   = (0x02), /* Port A ADC - SET */
} PR_ADC_t;

/* Port A Analog Comparator */
typedef enum PR_AC_enum
{
    PR_AC_CLEAR_gc = (0x00), /* Port A Analog Comparator - CLEAR */
    PR_AC_SET_gc   = (0x01), /* Port A Analog Comparator - SET */
} PR_AC_t;

/* Port B DAC */
typedef enum PR_DAC_enum
{
    PR_DAC_CLEAR_gc = (0x00), /* Port B DAC - CLEAR */
    PR_DAC_SET_gc   = (0x04), /* Port B DAC - SET */
} PR_DAC_t;

/* Port B ADC */
typedef enum PR_ADC_enum
{
    PR_ADC_CLEAR_gc = (0x00), /* Port B ADC - CLEAR */
    PR_ADC_SET_gc   = (0x02), /* Port B ADC - SET */
} PR_ADC_t;

/* Port B Analog Comparator */
typedef enum PR_AC_enum
{
    PR_AC_CLEAR_gc = (0x00), /* Port B Analog Comparator - CLEAR */
    PR_AC_SET_gc   = (0x01), /* Port B Analog Comparator - SET */
} PR_AC_t;

/* Port C Two-wire Interface */
typedef enum PR_TWI_enum
{
    PR_TWI_CLEAR_gc = (0x00), /* Port C Two-wire Interface - CLEAR */
    PR_TWI_SET_gc   = (0x40), /* Port C Two-wire Interface - SET */
} PR_TWI_t;

/* Port C USART1 */
typedef enum PR_USART1_enum
{
    PR_USART1_CLEAR_gc = (0x00), /* Port C USART1 - CLEAR */
    PR_USART1_SET_gc   = (0x20), /* Port C USART1 - SET */
} PR_USART1_t;

/* Port C USART0 */
typedef enum PR_USART0_enum
{
    PR_USART0_CLEAR_gc = (0x00), /* Port C USART0 - CLEAR */
    PR_USART0_SET_gc   = (0x10), /* Port C USART0 - SET */
} PR_USART0_t;

/* Port C SPI */
typedef enum PR_SPI_enum
{
    PR_SPI_CLEAR_gc = (0x00), /* Port C SPI - CLEAR */
    PR_SPI_SET_gc   = (0x08), /* Port C SPI - SET */
} PR_SPI_t;

/* Port C AWEX */
typedef enum PR_HIRES_enum
{
    PR_HIRES_CLEAR_gc = (0x00), /* Port C AWEX - CLEAR */
    PR_HIRES_SET_gc   = (0x04), /* Port C AWEX - SET */
} PR_HIRES_t;

/* Port C Timer/Counter1 */
typedef enum PR_TC1_enum
{
    PR_TC1_CLEAR_gc = (0x00), /* Port C Timer/Counter1 - CLEAR */
    PR_TC1_SET_gc   = (0x02), /* Port C Timer/Counter1 - SET */
} PR_TC1_t;

/* Port C Timer/Counter0 */
typedef enum PR_TC0_enum
{
    PR_TC0_CLEAR_gc = (0x00), /* Port C Timer/Counter0 - CLEAR */
    PR_TC0_SET_gc   = (0x01), /* Port C Timer/Counter0 - SET */
} PR_TC0_t;

/* Port D Two-wire Interface */
typedef enum PR_TWI_enum
{
    PR_TWI_CLEAR_gc = (0x00), /* Port D Two-wire Interface - CLEAR */
    PR_TWI_SET_gc   = (0x40), /* Port D Two-wire Interface - SET */
} PR_TWI_t;

/* Port D USART1 */
typedef enum PR_USART1_enum
{
    PR_USART1_CLEAR_gc = (0x00), /* Port D USART1 - CLEAR */
    PR_USART1_SET_gc   = (0x20), /* Port D USART1 - SET */
} PR_USART1_t;

/* Port D USART0 */
typedef enum PR_USART0_enum
{
    PR_USART0_CLEAR_gc = (0x00), /* Port D USART0 - CLEAR */
    PR_USART0_SET_gc   = (0x10), /* Port D USART0 - SET */
} PR_USART0_t;

/* Port D SPI */
typedef enum PR_SPI_enum
{
    PR_SPI_CLEAR_gc = (0x00), /* Port D SPI - CLEAR */
    PR_SPI_SET_gc   = (0x08), /* Port D SPI - SET */
} PR_SPI_t;

/* Port D AWEX */
typedef enum PR_HIRES_enum
{
    PR_HIRES_CLEAR_gc = (0x00), /* Port D AWEX - CLEAR */
    PR_HIRES_SET_gc   = (0x04), /* Port D AWEX - SET */
} PR_HIRES_t;

/* Port D Timer/Counter1 */
typedef enum PR_TC1_enum
{
    PR_TC1_CLEAR_gc = (0x00), /* Port D Timer/Counter1 - CLEAR */
    PR_TC1_SET_gc   = (0x02), /* Port D Timer/Counter1 - SET */
} PR_TC1_t;

/* Port D Timer/Counter0 */
typedef enum PR_TC0_enum
{
    PR_TC0_CLEAR_gc = (0x00), /* Port D Timer/Counter0 - CLEAR */
    PR_TC0_SET_gc   = (0x01), /* Port D Timer/Counter0 - SET */
} PR_TC0_t;

/* Port E Two-wire Interface */
typedef enum PR_TWI_enum
{
    PR_TWI_CLEAR_gc = (0x00), /* Port E Two-wire Interface - CLEAR */
    PR_TWI_SET_gc   = (0x40), /* Port E Two-wire Interface - SET */
} PR_TWI_t;

/* Port E USART1 */
typedef enum PR_USART1_enum
{
    PR_USART1_CLEAR_gc = (0x00), /* Port E USART1 - CLEAR */
    PR_USART1_SET_gc   = (0x20), /* Port E USART1 - SET */
} PR_USART1_t;

/* Port E USART0 */
typedef enum PR_USART0_enum
{
    PR_USART0_CLEAR_gc = (0x00), /* Port E USART0 - CLEAR */
    PR_USART0_SET_gc   = (0x10), /* Port E USART0 - SET */
} PR_USART0_t;

/* Port E SPI */
typedef enum PR_SPI_enum
{
    PR_SPI_CLEAR_gc = (0x00), /* Port E SPI - CLEAR */
    PR_SPI_SET_gc   = (0x08), /* Port E SPI - SET */
} PR_SPI_t;

/* Port E AWEX */
typedef enum PR_HIRES_enum
{
    PR_HIRES_CLEAR_gc = (0x00), /* Port E AWEX - CLEAR */
    PR_HIRES_SET_gc   = (0x04), /* Port E AWEX - SET */
} PR_HIRES_t;

/* Port E Timer/Counter1 */
typedef enum PR_TC1_enum
{
    PR_TC1_CLEAR_gc = (0x00), /* Port E Timer/Counter1 - CLEAR */
    PR_TC1_SET_gc   = (0x02), /* Port E Timer/Counter1 - SET */
} PR_TC1_t;

/* Port E Timer/Counter0 */
typedef enum PR_TC0_enum
{
    PR_TC0_CLEAR_gc = (0x00), /* Port E Timer/Counter0 - CLEAR */
    PR_TC0_SET_gc   = (0x01), /* Port E Timer/Counter0 - SET */
} PR_TC0_t;

/* Port F Two-wire Interface */
typedef enum PR_TWI_enum
{
    PR_TWI_CLEAR_gc = (0x00), /* Port F Two-wire Interface - CLEAR */
    PR_TWI_SET_gc   = (0x40), /* Port F Two-wire Interface - SET */
} PR_TWI_t;

/* Port F USART1 */
typedef enum PR_USART1_enum
{
    PR_USART1_CLEAR_gc = (0x00), /* Port F USART1 - CLEAR */
    PR_USART1_SET_gc   = (0x20), /* Port F USART1 - SET */
} PR_USART1_t;

/* Port F USART0 */
typedef enum PR_USART0_enum
{
    PR_USART0_CLEAR_gc = (0x00), /* Port F USART0 - CLEAR */
    PR_USART0_SET_gc   = (0x10), /* Port F USART0 - SET */
} PR_USART0_t;

/* Port F SPI */
typedef enum PR_SPI_enum
{
    PR_SPI_CLEAR_gc = (0x00), /* Port F SPI - CLEAR */
    PR_SPI_SET_gc   = (0x08), /* Port F SPI - SET */
} PR_SPI_t;

/* Port F AWEX */
typedef enum PR_HIRES_enum
{
    PR_HIRES_CLEAR_gc = (0x00), /* Port F AWEX - CLEAR */
    PR_HIRES_SET_gc   = (0x04), /* Port F AWEX - SET */
} PR_HIRES_t;

/* Port F Timer/Counter1 */
typedef enum PR_TC1_enum
{
    PR_TC1_CLEAR_gc = (0x00), /* Port F Timer/Counter1 - CLEAR */
    PR_TC1_SET_gc   = (0x02), /* Port F Timer/Counter1 - SET */
} PR_TC1_t;

/* Port F Timer/Counter0 */
typedef enum PR_TC0_enum
{
    PR_TC0_CLEAR_gc = (0x00), /* Port F Timer/Counter0 - CLEAR */
    PR_TC0_SET_gc   = (0x01), /* Port F Timer/Counter0 - SET */
} PR_TC0_t;

/*
--------------------------------------------------------------------------------
SLEEP - Sleep Controller
--------------------------------------------------------------------------------
*/

typedef struct SLEEP_struct
{
    register8_t CTRL; /* Control Register */
} SLEEP_t;


/* Sleep Mode */
typedef enum SLEEP_SMODE_enum
{
    SLEEP_SMODE_IDLE_gc   = (0x00<<1), /* Idle mode */
    SLEEP_SMODE_PDOWN_gc  = (0x02<<1), /* Power-down Mode */
    SLEEP_SMODE_PSAVE_gc  = (0x03<<1), /* Power-save Mode */
    SLEEP_SMODE_STDBY_gc  = (0x06<<1), /* Standby Mode */
    SLEEP_SMODE_ESTDBY_gc = (0x07<<1), /* Extended Standby Mode */
} SLEEP_SMODE_t;

/* Sleep Enable */
typedef enum SLEEP_SEN_enum
{
    SLEEP_SEN_CLEAR_gc = (0x00), /* Sleep Enable - CLEAR */
    SLEEP_SEN_SET_gc   = (0x01), /* Sleep Enable - SET */
} SLEEP_SEN_t;

/*
--------------------------------------------------------------------------------
OSC - Oscillator
--------------------------------------------------------------------------------
*/

typedef struct OSC_struct
{
    register8_t CTRL;     /* Control Register */
    register8_t STATUS;   /* Status Register */
    register8_t XOSCCTRL; /* External Oscillator Control Register */
    register8_t XOSCFAIL; /* External Oscillator Failure Detection Register */
    register8_t RC32KCAL; /* 32kHz Internal Oscillator Calibration Register */
    register8_t PLLCTRL;  /* PLL Control REgister */
    register8_t DFLLCTRL; /* DFLL Control Register */
} OSC_t;


/* PLL Enable */
typedef enum OSC_PLLEN_enum
{
    OSC_PLLEN_CLEAR_gc = (0x00), /* PLL Enable - CLEAR */
    OSC_PLLEN_SET_gc   = (0x10), /* PLL Enable - SET */
} OSC_PLLEN_t;

/* External Oscillator Enable */
typedef enum OSC_XOSCEN_enum
{
    OSC_XOSCEN_CLEAR_gc = (0x00), /* External Oscillator Enable - CLEAR */
    OSC_XOSCEN_SET_gc   = (0x08), /* External Oscillator Enable - SET */
} OSC_XOSCEN_t;

/* Internal 32kHz RC Oscillator Enable */
typedef enum OSC_RC32KEN_enum
{
    OSC_RC32KEN_CLEAR_gc = (0x00), /* Internal 32kHz RC Oscillator Enable - CLEAR */
    OSC_RC32KEN_SET_gc   = (0x04), /* Internal 32kHz RC Oscillator Enable - SET */
} OSC_RC32KEN_t;

/* Internal 32MHz RC Oscillator Enable */
typedef enum OSC_RC32MEN_enum
{
    OSC_RC32MEN_CLEAR_gc = (0x00), /* Internal 32MHz RC Oscillator Enable - CLEAR */
    OSC_RC32MEN_SET_gc   = (0x02), /* Internal 32MHz RC Oscillator Enable - SET */
} OSC_RC32MEN_t;

/* Internal 2MHz RC Oscillator Enable */
typedef enum OSC_RC2MEN_enum
{
    OSC_RC2MEN_CLEAR_gc = (0x00), /* Internal 2MHz RC Oscillator Enable - CLEAR */
    OSC_RC2MEN_SET_gc   = (0x01), /* Internal 2MHz RC Oscillator Enable - SET */
} OSC_RC2MEN_t;

/* PLL Ready */
typedef enum OSC_PLLRDY_enum
{
    OSC_PLLRDY_CLEAR_gc = (0x00), /* PLL Ready - CLEAR */
    OSC_PLLRDY_SET_gc   = (0x10), /* PLL Ready - SET */
} OSC_PLLRDY_t;

/* External Oscillator Ready */
typedef enum OSC_XOSCRDY_enum
{
    OSC_XOSCRDY_CLEAR_gc = (0x00), /* External Oscillator Ready - CLEAR */
    OSC_XOSCRDY_SET_gc   = (0x08), /* External Oscillator Ready - SET */
} OSC_XOSCRDY_t;

/* Internal 32kHz RC Oscillator Ready */
typedef enum OSC_RC32KRDY_enum
{
    OSC_RC32KRDY_CLEAR_gc = (0x00), /* Internal 32kHz RC Oscillator Ready - CLEAR */
    OSC_RC32KRDY_SET_gc   = (0x04), /* Internal 32kHz RC Oscillator Ready - SET */
} OSC_RC32KRDY_t;

/* Internal 32MHz RC Oscillator Ready */
typedef enum OSC_RC32MRDY_enum
{
    OSC_RC32MRDY_CLEAR_gc = (0x00), /* Internal 32MHz RC Oscillator Ready - CLEAR */
    OSC_RC32MRDY_SET_gc   = (0x02), /* Internal 32MHz RC Oscillator Ready - SET */
} OSC_RC32MRDY_t;

/* Internal 2MHz RC Oscillator Ready */
typedef enum OSC_RC2MRDY_enum
{
    OSC_RC2MRDY_CLEAR_gc = (0x00), /* Internal 2MHz RC Oscillator Ready - CLEAR */
    OSC_RC2MRDY_SET_gc   = (0x01), /* Internal 2MHz RC Oscillator Ready - SET */
} OSC_RC2MRDY_t;

/* Frequency Range */
typedef enum OSC_FRQRANGE_enum
{
    OSC_FRQRANGE_04TO2_gc  = (0x00<<6), /* 0.4 - 2 MHz */
    OSC_FRQRANGE_2TO9_gc   = (0x01<<6), /* 2 - 9 MHz */
    OSC_FRQRANGE_9TO12_gc  = (0x02<<6), /* 9 - 12 MHz */
    OSC_FRQRANGE_12TO16_gc = (0x03<<6), /* 12 - 16 MHz */
} OSC_FRQRANGE_t;

/* 32kHz XTAL OSC Low-power Mode */
typedef enum OSC_X32KLPM_enum
{
    OSC_X32KLPM_CLEAR_gc = (0x00), /* 32kHz XTAL OSC Low-power Mode - CLEAR */
    OSC_X32KLPM_SET_gc   = (0x20), /* 32kHz XTAL OSC Low-power Mode - SET */
} OSC_X32KLPM_t;

/* External Oscillator Selection and Startup Time */
typedef enum OSC_XOSCSEL_enum
{
    OSC_XOSCSEL_EXTCLK_gc      = (0x00), /* External Clock - 6 CLK */
    OSC_XOSCSEL_32KHz_gc       = (0x02), /* 32kHz TOSC - 32K CLK */
    OSC_XOSCSEL_XTAL_256CLK_gc = (0x03), /* 0.4-16MHz XTAL - 256 CLK */
    OSC_XOSCSEL_XTAL_1KCLK_gc  = (0x07), /* 0.4-16MHz XTAL - 1K CLK */
    OSC_XOSCSEL_XTAL_16KCLK_gc = (0x0B), /* 0.4-16MHz XTAL - 16K CLK */
} OSC_XOSCSEL_t;

/* Failure Detection Interrupt Flag */
typedef enum OSC_XOSCFDIF_enum
{
    OSC_XOSCFDIF_CLEAR_gc = (0x00), /* Failure Detection Interrupt Flag - CLEAR */
    OSC_XOSCFDIF_SET_gc   = (0x02), /* Failure Detection Interrupt Flag - SET */
} OSC_XOSCFDIF_t;

/* Failure Detection Enable */
typedef enum OSC_XOSCFDEN_enum
{
    OSC_XOSCFDEN_CLEAR_gc = (0x00), /* Failure Detection Enable - CLEAR */
    OSC_XOSCFDEN_SET_gc   = (0x01), /* Failure Detection Enable - SET */
} OSC_XOSCFDEN_t;

/* Clock Source */
typedef enum OSC_PLLSRC_enum
{
    OSC_PLLSRC_RC2M_gc  = (0x00<<6), /* Internal 2MHz RC Oscillator */
    OSC_PLLSRC_RC32M_gc = (0x02<<6), /* Internal 32MHz RC Oscillator */
    OSC_PLLSRC_XOSC_gc  = (0x03<<6), /* External Oscillator */
} OSC_PLLSRC_t;

/* Multiplication Factor */
#define OSC_PLLCTRL_PLLFAC_gc(x) (x & 0x1F)

/* 32MHz Calibration Reference */
typedef enum OSC_RC32MCREF_enum
{
    OSC_RC32MCREF_CLEAR_gc = (0x00), /* 32MHz Calibration Reference - CLEAR */
    OSC_RC32MCREF_SET_gc   = (0x02), /* 32MHz Calibration Reference - SET */
} OSC_RC32MCREF_t;

/* 2MHz Calibration Reference */
typedef enum OSC_RC2MCREF_enum
{
    OSC_RC2MCREF_CLEAR_gc = (0x00), /* 2MHz Calibration Reference - CLEAR */
    OSC_RC2MCREF_SET_gc   = (0x01), /* 2MHz Calibration Reference - SET */
} OSC_RC2MCREF_t;

/*
--------------------------------------------------------------------------------
DFLL - DFLL
--------------------------------------------------------------------------------
*/

typedef struct DFLL_struct
{
    register8_t CTRL;     /* Control Register */
    register8_t rsv_0x01; /* RESERVED REGISTER */
    register8_t CALA;     /* Calibration Register A */
    register8_t CALB;     /* Calibration Register B */
    register8_t COMP0;    /* Oscillator Compare Register 0 */
    register8_t COMP1;    /* Oscillator Compare Register 1 */
    register8_t COMP2;    /* Oscillator Compare Register 2 */
} DFLL_t;


/* DFLL Enable */
typedef enum DFLL_ENABLE_enum
{
    DFLL_ENABLE_CLEAR_gc = (0x00), /* DFLL Enable - CLEAR */
    DFLL_ENABLE_SET_gc   = (0x01), /* DFLL Enable - SET */
} DFLL_ENABLE_t;

/*
--------------------------------------------------------------------------------
RST - Reset
--------------------------------------------------------------------------------
*/

typedef struct RST_struct
{
    register8_t STATUS; /* Status Register */
    register8_t CTRL;   /* Control Register */
} RST_t;


/* Spike Detection Reset Flag */
typedef enum RST_SDRF_enum
{
    RST_SDRF_CLEAR_gc = (0x00), /* Spike Detection Reset Flag - CLEAR */
    RST_SDRF_SET_gc   = (0x40), /* Spike Detection Reset Flag - SET */
} RST_SDRF_t;

/* Software Reset Flag */
typedef enum RST_SRF_enum
{
    RST_SRF_CLEAR_gc = (0x00), /* Software Reset Flag - CLEAR */
    RST_SRF_SET_gc   = (0x20), /* Software Reset Flag - SET */
} RST_SRF_t;

/* Programming and Debug Interface Interface Reset Flag */
typedef enum RST_PDIRF_enum
{
    RST_PDIRF_CLEAR_gc = (0x00), /* Programming and Debug Interface Interface Reset Flag - CLEAR */
    RST_PDIRF_SET_gc   = (0x10), /* Programming and Debug Interface Interface Reset Flag - SET */
} RST_PDIRF_t;

/* Watchdog Reset Flag */
typedef enum RST_WDRF_enum
{
    RST_WDRF_CLEAR_gc = (0x00), /* Watchdog Reset Flag - CLEAR */
    RST_WDRF_SET_gc   = (0x08), /* Watchdog Reset Flag - SET */
} RST_WDRF_t;

/* Brown-out Reset Flag */
typedef enum RST_BORF_enum
{
    RST_BORF_CLEAR_gc = (0x00), /* Brown-out Reset Flag - CLEAR */
    RST_BORF_SET_gc   = (0x04), /* Brown-out Reset Flag - SET */
} RST_BORF_t;

/* External Reset Flag */
typedef enum RST_EXTRF_enum
{
    RST_EXTRF_CLEAR_gc = (0x00), /* External Reset Flag - CLEAR */
    RST_EXTRF_SET_gc   = (0x02), /* External Reset Flag - SET */
} RST_EXTRF_t;

/* Power-on Reset Flag */
typedef enum RST_PORF_enum
{
    RST_PORF_CLEAR_gc = (0x00), /* Power-on Reset Flag - CLEAR */
    RST_PORF_SET_gc   = (0x01), /* Power-on Reset Flag - SET */
} RST_PORF_t;

/* Software Reset */
typedef enum RST_SWRST_enum
{
    RST_SWRST_CLEAR_gc = (0x00), /* Software Reset - CLEAR */
    RST_SWRST_SET_gc   = (0x01), /* Software Reset - SET */
} RST_SWRST_t;

/*
--------------------------------------------------------------------------------
WDT - Watch-Dog Timer
--------------------------------------------------------------------------------
*/

typedef struct WDT_struct
{
    register8_t CTRL;    /* Control */
    register8_t WINCTRL; /* Windowed Mode Control */
    register8_t STATUS;  /* Status */
} WDT_t;


/* Period */
typedef enum WDT_PER_enum
{
    WDT_PER_8CLK_gc   = (0x00<<2), /* 8 cycles (8ms @ 3.3V) */
    WDT_PER_16CLK_gc  = (0x01<<2), /* 16 cycles (16ms @ 3.3V) */
    WDT_PER_32CLK_gc  = (0x02<<2), /* 32 cycles (32ms @ 3.3V) */
    WDT_PER_64CLK_gc  = (0x03<<2), /* 64 cycles (64ms @ 3.3V) */
    WDT_PER_128CLK_gc = (0x04<<2), /* 128 cycles (0.128s @ 3.3V) */
    WDT_PER_256CLK_gc = (0x05<<2), /* 256 cycles (0.256s @ 3.3V) */
    WDT_PER_512CLK_gc = (0x06<<2), /* 512 cycles (0.512s @ 3.3V) */
    WDT_PER_1KCLK_gc  = (0x07<<2), /* 1K cycles (1s @ 3.3V) */
    WDT_PER_2KCLK_gc  = (0x08<<2), /* 2K cycles (2s @ 3.3V) */
    WDT_PER_4KCLK_gc  = (0x09<<2), /* 4K cycles (4s @ 3.3V) */
    WDT_PER_8KCLK_gc  = (0x0A<<2), /* 8K cycles (8s @ 3.3V) */
} WDT_PER_t;

/* Enable */
typedef enum WDT_ENABLE_enum
{
    WDT_ENABLE_CLEAR_gc = (0x00), /* Enable - CLEAR */
    WDT_ENABLE_SET_gc   = (0x02), /* Enable - SET */
} WDT_ENABLE_t;

/* Change Enable */
typedef enum WDT_CEN_enum
{
    WDT_CEN_CLEAR_gc = (0x00), /* Change Enable - CLEAR */
    WDT_CEN_SET_gc   = (0x01), /* Change Enable - SET */
} WDT_CEN_t;

/* Windowed Mode Period */
typedef enum WDT_WPER_enum
{
    WDT_WPER_8CLK_gc   = (0x00<<2), /* 8 cycles (8ms @ 3.3V) */
    WDT_WPER_16CLK_gc  = (0x01<<2), /* 16 cycles (16ms @ 3.3V) */
    WDT_WPER_32CLK_gc  = (0x02<<2), /* 32 cycles (32ms @ 3.3V) */
    WDT_WPER_64CLK_gc  = (0x03<<2), /* 64 cycles (64ms @ 3.3V) */
    WDT_WPER_128CLK_gc = (0x04<<2), /* 128 cycles (0.128s @ 3.3V) */
    WDT_WPER_256CLK_gc = (0x05<<2), /* 256 cycles (0.256s @ 3.3V) */
    WDT_WPER_512CLK_gc = (0x06<<2), /* 512 cycles (0.512s @ 3.3V) */
    WDT_WPER_1KCLK_gc  = (0x07<<2), /* 1K cycles (1s @ 3.3V) */
    WDT_WPER_2KCLK_gc  = (0x08<<2), /* 2K cycles (2s @ 3.3V) */
    WDT_WPER_4KCLK_gc  = (0x09<<2), /* 4K cycles (4s @ 3.3V) */
    WDT_WPER_8KCLK_gc  = (0x0A<<2), /* 8K cycles (8s @ 3.3V) */
} WDT_WPER_t;

/* Windowed Mode Enable */
typedef enum WDT_WEN_enum
{
    WDT_WEN_CLEAR_gc = (0x00), /* Windowed Mode Enable - CLEAR */
    WDT_WEN_SET_gc   = (0x02), /* Windowed Mode Enable - SET */
} WDT_WEN_t;

/* Windowed Mode Change Enable */
typedef enum WDT_WCEN_enum
{
    WDT_WCEN_CLEAR_gc = (0x00), /* Windowed Mode Change Enable - CLEAR */
    WDT_WCEN_SET_gc   = (0x01), /* Windowed Mode Change Enable - SET */
} WDT_WCEN_t;

/* Syncronization busy */
typedef enum WDT_SYNCBUSY_enum
{
    WDT_SYNCBUSY_CLEAR_gc = (0x00), /* Syncronization busy - CLEAR */
    WDT_SYNCBUSY_SET_gc   = (0x01), /* Syncronization busy - SET */
} WDT_SYNCBUSY_t;

/*
--------------------------------------------------------------------------------
MCU - MCU Control
--------------------------------------------------------------------------------
*/

typedef struct MCU_struct
{
    register8_t DEVID0;    /* Device ID byte 0 */
    register8_t DEVID1;    /* Device ID byte 1 */
    register8_t DEVID2;    /* Device ID byte 2 */
    register8_t REVID;     /* Revision ID */
    register8_t JTAGUID;   /* JTAG User ID */
    register8_t rsv_0x05;  /* RESERVED REGISTER */
    register8_t MCUCR;     /* MCU Control */
    register8_t rsv_0x07;  /* RESERVED REGISTER */
    register8_t EVSYSLOCK; /* Event System Lock */
    register8_t AWEXLOCK;  /* AWEX Lock */
} MCU_t;


/* JTAG Disable */
typedef enum MCU_JTAGD_enum
{
    MCU_JTAGD_CLEAR_gc = (0x00), /* JTAG Disable - CLEAR */
    MCU_JTAGD_SET_gc   = (0x01), /* JTAG Disable - SET */
} MCU_JTAGD_t;

/* Event Channel 4-7 Lock */
typedef enum MCU_EVSYS1LOCK_enum
{
    MCU_EVSYS1LOCK_CLEAR_gc = (0x00), /* Event Channel 4-7 Lock - CLEAR */
    MCU_EVSYS1LOCK_SET_gc   = (0x10), /* Event Channel 4-7 Lock - SET */
} MCU_EVSYS1LOCK_t;

/* Event Channel 0-3 Lock */
typedef enum MCU_EVSYS0LOCK_enum
{
    MCU_EVSYS0LOCK_CLEAR_gc = (0x00), /* Event Channel 0-3 Lock - CLEAR */
    MCU_EVSYS0LOCK_SET_gc   = (0x01), /* Event Channel 0-3 Lock - SET */
} MCU_EVSYS0LOCK_t;

/* AWeX on T/C E0 Lock */
typedef enum MCU_AWEXELOCK_enum
{
    MCU_AWEXELOCK_CLEAR_gc = (0x00), /* AWeX on T/C E0 Lock - CLEAR */
    MCU_AWEXELOCK_SET_gc   = (0x04), /* AWeX on T/C E0 Lock - SET */
} MCU_AWEXELOCK_t;

/* AWeX on T/C C0 Lock */
typedef enum MCU_AWEXCLOCK_enum
{
    MCU_AWEXCLOCK_CLEAR_gc = (0x00), /* AWeX on T/C C0 Lock - CLEAR */
    MCU_AWEXCLOCK_SET_gc   = (0x01), /* AWeX on T/C C0 Lock - SET */
} MCU_AWEXCLOCK_t;

/*
--------------------------------------------------------------------------------
PMIC - Programmable Multi-level Interrupt Controller
--------------------------------------------------------------------------------
*/

typedef struct PMIC_struct
{
    register8_t STATUS; /* Status Register */
    register8_t INTPRI; /* Interrupt Priority */
    register8_t CTRL;   /* Control Register */
} PMIC_t;


/* Non-maskable Interrupt Executing */
typedef enum PMIC_NMIEX_enum
{
    PMIC_NMIEX_CLEAR_gc = (0x00), /* Non-maskable Interrupt Executing - CLEAR */
    PMIC_NMIEX_SET_gc   = (0x80), /* Non-maskable Interrupt Executing - SET */
} PMIC_NMIEX_t;

/* High Level Interrupt Executing */
typedef enum PMIC_HILVLEX_enum
{
    PMIC_HILVLEX_CLEAR_gc = (0x00), /* High Level Interrupt Executing - CLEAR */
    PMIC_HILVLEX_SET_gc   = (0x04), /* High Level Interrupt Executing - SET */
} PMIC_HILVLEX_t;

/* Medium Level Interrupt Executing */
typedef enum PMIC_MEDLVLEX_enum
{
    PMIC_MEDLVLEX_CLEAR_gc = (0x00), /* Medium Level Interrupt Executing - CLEAR */
    PMIC_MEDLVLEX_SET_gc   = (0x02), /* Medium Level Interrupt Executing - SET */
} PMIC_MEDLVLEX_t;

/* Low Level Interrupt Executing */
typedef enum PMIC_LOLVLEX_enum
{
    PMIC_LOLVLEX_CLEAR_gc = (0x00), /* Low Level Interrupt Executing - CLEAR */
    PMIC_LOLVLEX_SET_gc   = (0x01), /* Low Level Interrupt Executing - SET */
} PMIC_LOLVLEX_t;

/* Round-Robin Priority Enable */
typedef enum PMIC_RREN_enum
{
    PMIC_RREN_CLEAR_gc = (0x00), /* Round-Robin Priority Enable - CLEAR */
    PMIC_RREN_SET_gc   = (0x80), /* Round-Robin Priority Enable - SET */
} PMIC_RREN_t;

/* Interrupt Vector Select */
typedef enum PMIC_IVSEL_enum
{
    PMIC_IVSEL_CLEAR_gc = (0x00), /* Interrupt Vector Select - CLEAR */
    PMIC_IVSEL_SET_gc   = (0x40), /* Interrupt Vector Select - SET */
} PMIC_IVSEL_t;

/* High Level Enable */
typedef enum PMIC_HILVLEN_enum
{
    PMIC_HILVLEN_CLEAR_gc = (0x00), /* High Level Enable - CLEAR */
    PMIC_HILVLEN_SET_gc   = (0x04), /* High Level Enable - SET */
} PMIC_HILVLEN_t;

/* Medium Level Enable */
typedef enum PMIC_MEDLVLEN_enum
{
    PMIC_MEDLVLEN_CLEAR_gc = (0x00), /* Medium Level Enable - CLEAR */
    PMIC_MEDLVLEN_SET_gc   = (0x02), /* Medium Level Enable - SET */
} PMIC_MEDLVLEN_t;

/* Low Level Enable */
typedef enum PMIC_LOLVLEN_enum
{
    PMIC_LOLVLEN_CLEAR_gc = (0x00), /* Low Level Enable - CLEAR */
    PMIC_LOLVLEN_SET_gc   = (0x01), /* Low Level Enable - SET */
} PMIC_LOLVLEN_t;

/*
--------------------------------------------------------------------------------
DMA - DMA Controller
--------------------------------------------------------------------------------
*/

typedef struct DMA_CH_struct
{
    register8_t CTRLA;     /* Channel Control */
    register8_t CTRLB;     /* Channel Control */
    register8_t ADDRCTRL;  /* Address Control */
    register8_t TRIGSRC;   /* Channel Trigger Source */
    _REGISTER16 (TRFCNT);  /* Channel Block Transfer Count */
    register8_t rsv_0x05;  /* RESERVED REGISTER */
    register8_t REPCNT;    /* Channel Repeat Count */
    register8_t rsv_0x07;  /* RESERVED REGISTER */
    register8_t SRCADDR0;  /* Channel Source Address 0 */
    register8_t SRCADDR1;  /* Channel Source Address 1 */
    register8_t SRCADDR2;  /* Channel Source Address 2 */
    register8_t rsv_0x0B;  /* RESERVED REGISTER */
    register8_t DESTADDR0; /* Channel Destination Address 0 */
    register8_t DESTADDR1; /* Channel Destination Address 1 */
    register8_t DESTADDR2; /* Channel Destination Address 2 */
} DMA_CH_t;


/*
--------------------------------------------------------------------------------
DMA - DMA Controller
--------------------------------------------------------------------------------
*/

typedef struct DMA_struct
{
    register8_t CTRL;        /* Control */
    register8_t rsv_0x01[2]; /* RESERVED REGISTER BLOCK */
    register8_t INTFLAGS;    /* Transfer Interrupt Status */
    register8_t STATUS;      /* Status */
    register8_t rsv_0x05;    /* RESERVED REGISTER */
    _REGISTER16 (TEMP);      /* Temporary Register For 16/24-bit Access */
} DMA_t;


/* Channel Enable */
typedef enum DMA_CH_ENABLE_enum
{
    DMA_CH_ENABLE_CLEAR_gc = (0x00), /* Channel Enable - CLEAR */
    DMA_CH_ENABLE_SET_gc   = (0x80), /* Channel Enable - SET */
} DMA_CH_ENABLE_t;

/* Channel Software Reset */
typedef enum DMA_CH_RESET_enum
{
    DMA_CH_RESET_CLEAR_gc = (0x00), /* Channel Software Reset - CLEAR */
    DMA_CH_RESET_SET_gc   = (0x40), /* Channel Software Reset - SET */
} DMA_CH_RESET_t;

/* Channel Repeat Mode */
typedef enum DMA_CH_REPEAT_enum
{
    DMA_CH_REPEAT_CLEAR_gc = (0x00), /* Channel Repeat Mode - CLEAR */
    DMA_CH_REPEAT_SET_gc   = (0x20), /* Channel Repeat Mode - SET */
} DMA_CH_REPEAT_t;

/* Channel Transfer Request */
typedef enum DMA_CH_TRFREQ_enum
{
    DMA_CH_TRFREQ_CLEAR_gc = (0x00), /* Channel Transfer Request - CLEAR */
    DMA_CH_TRFREQ_SET_gc   = (0x10), /* Channel Transfer Request - SET */
} DMA_CH_TRFREQ_t;

/* Channel Single Shot Data Transfer */
typedef enum DMA_CH_SINGLE_enum
{
    DMA_CH_SINGLE_CLEAR_gc = (0x00), /* Channel Single Shot Data Transfer - CLEAR */
    DMA_CH_SINGLE_SET_gc   = (0x04), /* Channel Single Shot Data Transfer - SET */
} DMA_CH_SINGLE_t;

/* Channel Transfer Mode */
typedef enum DMA_CH_BURSTLEN_enum
{
    DMA_CH_BURSTLEN_1BYTE_gc = (0x00), /* 1-byte burst mode */
    DMA_CH_BURSTLEN_2BYTE_gc = (0x01), /* 2-byte burst mode */
    DMA_CH_BURSTLEN_4BYTE_gc = (0x02), /* 4-byte burst mode */
    DMA_CH_BURSTLEN_8BYTE_gc = (0x03), /* 8-byte burst mode */
} DMA_CH_BURSTLEN_t;

/* Block Transfer Busy */
typedef enum DMA_CH_CHBUSY_enum
{
    DMA_CH_CHBUSY_CLEAR_gc = (0x00), /* Block Transfer Busy - CLEAR */
    DMA_CH_CHBUSY_SET_gc   = (0x80), /* Block Transfer Busy - SET */
} DMA_CH_CHBUSY_t;

/* Block Transfer Pending */
typedef enum DMA_CH_CHPEND_enum
{
    DMA_CH_CHPEND_CLEAR_gc = (0x00), /* Block Transfer Pending - CLEAR */
    DMA_CH_CHPEND_SET_gc   = (0x40), /* Block Transfer Pending - SET */
} DMA_CH_CHPEND_t;

/* Block Transfer Error Interrupt Flag */
typedef enum DMA_CH_ERRIF_enum
{
    DMA_CH_ERRIF_CLEAR_gc = (0x00), /* Block Transfer Error Interrupt Flag - CLEAR */
    DMA_CH_ERRIF_SET_gc   = (0x20), /* Block Transfer Error Interrupt Flag - SET */
} DMA_CH_ERRIF_t;

/* Transaction Complete Interrupt Flag */
typedef enum DMA_CH_TRNIF_enum
{
    DMA_CH_TRNIF_CLEAR_gc = (0x00), /* Transaction Complete Interrupt Flag - CLEAR */
    DMA_CH_TRNIF_SET_gc   = (0x10), /* Transaction Complete Interrupt Flag - SET */
} DMA_CH_TRNIF_t;

/* Transfer Error Interrupt Level */
typedef enum DMA_CH_ERRINTLVL_enum
{
    DMA_CH_ERRINTLVL_OFF_gc = (0x00<<2), /* Interrupt disabled */
    DMA_CH_ERRINTLVL_LO_gc  = (0x01<<2), /* Low level */
    DMA_CH_ERRINTLVL_MED_gc = (0x02<<2), /* Medium level */
    DMA_CH_ERRINTLVL_HI_gc  = (0x03<<2), /* High level */
} DMA_CH_ERRINTLVL_t;

/* Transaction Complete Interrupt Level */
typedef enum DMA_CH_TRNINTLVL_enum
{
    DMA_CH_TRNINTLVL_OFF_gc = (0x00), /* Interrupt disabled */
    DMA_CH_TRNINTLVL_LO_gc  = (0x01), /* Low level */
    DMA_CH_TRNINTLVL_MED_gc = (0x02), /* Medium level */
    DMA_CH_TRNINTLVL_HI_gc  = (0x03), /* High level */
} DMA_CH_TRNINTLVL_t;

/* Channel Source Address Reload */
typedef enum DMA_CH_SRCRELOAD_enum
{
    DMA_CH_SRCRELOAD_NONE_gc        = (0x00<<6), /* No reload */
    DMA_CH_SRCRELOAD_BLOCK_gc       = (0x01<<6), /* Reload at end of block */
    DMA_CH_SRCRELOAD_BURST_gc       = (0x02<<6), /* Reload at end of burst */
    DMA_CH_SRCRELOAD_TRANSACTION_gc = (0x03<<6), /* Reload at end of transaction */
} DMA_CH_SRCRELOAD_t;

/* Channel Source Address Mode */
typedef enum DMA_CH_SRCDIR_enum
{
    DMA_CH_SRCDIR_FIXED_gc = (0x00<<4), /* Fixed */
    DMA_CH_SRCDIR_INC_gc   = (0x01<<4), /* Increment */
    DMA_CH_SRCDIR_DEC_gc   = (0x02<<4), /* Decrement */
} DMA_CH_SRCDIR_t;

/* Channel Destination Address Reload */
typedef enum DMA_CH_DESTRELOAD_enum
{
    DMA_CH_DESTRELOAD_NONE_gc        = (0x00<<2), /* No reload */
    DMA_CH_DESTRELOAD_BLOCK_gc       = (0x01<<2), /* Reload at end of block */
    DMA_CH_DESTRELOAD_BURST_gc       = (0x02<<2), /* Reload at end of burst */
    DMA_CH_DESTRELOAD_TRANSACTION_gc = (0x03<<2), /* Reload at end of transaction */
} DMA_CH_DESTRELOAD_t;

/* Channel Destination Address Mode */
typedef enum DMA_CH_DESTDIR_enum
{
    DMA_CH_DESTDIR_FIXED_gc = (0x00), /* Fixed */
    DMA_CH_DESTDIR_INC_gc   = (0x01), /* Increment */
    DMA_CH_DESTDIR_DEC_gc   = (0x02), /* Decrement */
} DMA_CH_DESTDIR_t;

/* Channel Trigger Source */
typedef enum DMA_CH_TRIGSRC_enum
{
    DMA_CH_TRIGSRC_OFF_gc         = (0x00), /* Off software triggers only */
    DMA_CH_TRIGSRC_EVSYS_CH0_gc   = (0x01), /* Event System Channel 0 */
    DMA_CH_TRIGSRC_EVSYS_CH1_gc   = (0x02), /* Event System Channel 1 */
    DMA_CH_TRIGSRC_EVSYS_CH2_gc   = (0x03), /* Event System Channel 2 */
    DMA_CH_TRIGSRC_ADCA_CH0_gc    = (0x10), /* ADCA Channel 0 */
    DMA_CH_TRIGSRC_ADCA_CH1_gc    = (0x11), /* ADCA Channel 1 */
    DMA_CH_TRIGSRC_ADCA_CH2_gc    = (0x12), /* ADCA Channel 2 */
    DMA_CH_TRIGSRC_ADCA_CH3_gc    = (0x13), /* ADCA Channel 3 */
    DMA_CH_TRIGSRC_ADCA_CH4_gc    = (0x14), /* ADCA Channel 0,1,2,3 combined */
    DMA_CH_TRIGSRC_DACA_CH0_gc    = (0x15), /* DACA Channel 0 */
    DMA_CH_TRIGSRC_DACA_CH1_gc    = (0x16), /* DACA Channel 1 */
    DMA_CH_TRIGSRC_ADCB_CH0_gc    = (0x20), /* ADCB Channel 0 */
    DMA_CH_TRIGSRC_ADCB_CH1_gc    = (0x21), /* ADCB Channel 1 */
    DMA_CH_TRIGSRC_ADCB_CH2_gc    = (0x22), /* ADCB Channel 2 */
    DMA_CH_TRIGSRC_ADCB_CH3_gc    = (0x23), /* ADCB Channel 3 */
    DMA_CH_TRIGSRC_ADCB_CH4_gc    = (0x24), /* ADCB Channel 0,1,2,3 combined */
    DMA_CH_TRIGSRC_DACB_CH0_gc    = (0x25), /* DACB Channel 0 */
    DMA_CH_TRIGSRC_DACB_CH1_gc    = (0x26), /* DACB Channel 1 */
    DMA_CH_TRIGSRC_TCC0_OVF_gc    = (0x40), /* Timer/Counter C0 Overflow */
    DMA_CH_TRIGSRC_TCC0_ERR_gc    = (0x41), /* Timer/Counter C0 Error */
    DMA_CH_TRIGSRC_TCC0_CCA_gc    = (0x42), /* Timer/Counter C0 Compare or Capture A */
    DMA_CH_TRIGSRC_TCC0_CCB_gc    = (0x43), /* Timer/Counter C0 Compare or Capture B */
    DMA_CH_TRIGSRC_TCC0_CCC_gc    = (0x44), /* Timer/Counter C0 Compare or Capture C */
    DMA_CH_TRIGSRC_TCC0_CCD_gc    = (0x45), /* Timer/Counter C0 Compare or Capture D */
    DMA_CH_TRIGSRC_TCC1_OVF_gc    = (0x46), /* Timer/Counter C1 Overflow */
    DMA_CH_TRIGSRC_TCC1_ERR_gc    = (0x47), /* Timer/Counter C1 Error */
    DMA_CH_TRIGSRC_TCC1_CCA_gc    = (0x48), /* Timer/Counter C1 Compare or Capture A */
    DMA_CH_TRIGSRC_TCC1_CCB_gc    = (0x49), /* Timer/Counter C1 Compare or Capture B */
    DMA_CH_TRIGSRC_SPIC_gc        = (0x4A), /* SPI C Transfer Complete */
    DMA_CH_TRIGSRC_USARTC0_RXC_gc = (0x4B), /* USART C0 Receive Complete */
    DMA_CH_TRIGSRC_USARTC0_DRE_gc = (0x4C), /* USART C0 Data Register Empty */
    DMA_CH_TRIGSRC_USARTC1_RXC_gc = (0x4E), /* USART C1 Receive Complete */
    DMA_CH_TRIGSRC_USARTC1_DRE_gc = (0x4F), /* USART C1 Data Register Empty */
    DMA_CH_TRIGSRC_TCD0_OVF_gc    = (0x60), /* Timer/Counter D0 Overflow */
    DMA_CH_TRIGSRC_TCD0_ERR_gc    = (0x61), /* Timer/Counter D0 Error */
    DMA_CH_TRIGSRC_TCD0_CCA_gc    = (0x62), /* Timer/Counter D0 Compare or Capture A */
    DMA_CH_TRIGSRC_TCD0_CCB_gc    = (0x63), /* Timer/Counter D0 Compare or Capture B */
    DMA_CH_TRIGSRC_TCD0_CCC_gc    = (0x64), /* Timer/Counter D0 Compare or Capture C */
    DMA_CH_TRIGSRC_TCD0_CCD_gc    = (0x65), /* Timer/Counter D0 Compare or Capture D */
    DMA_CH_TRIGSRC_TCD1_OVF_gc    = (0x66), /* Timer/Counter D1 Overflow */
    DMA_CH_TRIGSRC_TCD1_ERR_gc    = (0x67), /* Timer/Counter D1 Error */
    DMA_CH_TRIGSRC_TCD1_CCA_gc    = (0x68), /* Timer/Counter D1 Compare or Capture A */
    DMA_CH_TRIGSRC_TCD1_CCB_gc    = (0x69), /* Timer/Counter D1 Compare or Capture B */
    DMA_CH_TRIGSRC_SPID_gc        = (0x6A), /* SPI D Transfer Complete */
    DMA_CH_TRIGSRC_USARTD0_RXC_gc = (0x6B), /* USART D0 Receive Complete */
    DMA_CH_TRIGSRC_USARTD0_DRE_gc = (0x6C), /* USART D0 Data Register Empty */
    DMA_CH_TRIGSRC_USARTD1_RXC_gc = (0x6E), /* USART D1 Receive Complete */
    DMA_CH_TRIGSRC_USARTD1_DRE_gc = (0x6F), /* USART D1 Data Register Empty */
    DMA_CH_TRIGSRC_TCE0_OVF_gc    = (0x80), /* Timer/Counter E0 Overflow */
    DMA_CH_TRIGSRC_TCE0_ERR_gc    = (0x81), /* Timer/Counter E0 Error */
    DMA_CH_TRIGSRC_TCE0_CCA_gc    = (0x82), /* Timer/Counter E0 Compare or Capture A */
    DMA_CH_TRIGSRC_TCE0_CCB_gc    = (0x83), /* Timer/Counter E0 Compare or Capture B */
    DMA_CH_TRIGSRC_TCE0_CCC_gc    = (0x84), /* Timer/Counter E0 Compare or Capture C */
    DMA_CH_TRIGSRC_TCE0_CCD_gc    = (0x85), /* Timer/Counter E0 Compare or Capture D */
    DMA_CH_TRIGSRC_TCE1_OVF_gc    = (0x86), /* Timer/Counter E1 Overflow */
    DMA_CH_TRIGSRC_TCE1_ERR_gc    = (0x87), /* Timer/Counter E1 Error */
    DMA_CH_TRIGSRC_TCE1_CCA_gc    = (0x88), /* Timer/Counter E1 Compare or Capture A */
    DMA_CH_TRIGSRC_TCE1_CCB_gc    = (0x89), /* Timer/Counter E1 Compare or Capture B */
    DMA_CH_TRIGSRC_SPIE_gc        = (0x8A), /* SPI E Transfer Complete */
    DMA_CH_TRIGSRC_USARTE0_RXC_gc = (0x8B), /* USART E0 Receive Complete */
    DMA_CH_TRIGSRC_USARTE0_DRE_gc = (0x8C), /* USART E0 Data Register Empty */
    DMA_CH_TRIGSRC_USARTE1_RXC_gc = (0x8E), /* USART E1 Receive Complete */
    DMA_CH_TRIGSRC_USARTE1_DRE_gc = (0x8F), /* USART E1 Data Register Empty */
    DMA_CH_TRIGSRC_TCF0_OVF_gc    = (0xA0), /* Timer/Counter F0 Overflow */
    DMA_CH_TRIGSRC_TCF0_ERR_gc    = (0xA1), /* Timer/Counter F0 Error */
    DMA_CH_TRIGSRC_TCF0_CCA_gc    = (0xA2), /* Timer/Counter F0 Compare or Capture A */
    DMA_CH_TRIGSRC_TCF0_CCB_gc    = (0xA3), /* Timer/Counter F0 Compare or Capture B */
    DMA_CH_TRIGSRC_TCF0_CCC_gc    = (0xA4), /* Timer/Counter F0 Compare or Capture C */
    DMA_CH_TRIGSRC_TCF0_CCD_gc    = (0xA5), /* Timer/Counter F0 Compare or Capture D */
    DMA_CH_TRIGSRC_TCF1_OVF_gc    = (0xA6), /* Timer/Counter F1 Overflow */
    DMA_CH_TRIGSRC_TCF1_ERR_gc    = (0xA7), /* Timer/Counter F1 Error */
    DMA_CH_TRIGSRC_TCF1_CCA_gc    = (0xA8), /* Timer/Counter F1 Compare or Capture A */
    DMA_CH_TRIGSRC_TCF1_CCB_gc    = (0xA9), /* Timer/Counter F1 Compare or Capture B */
    DMA_CH_TRIGSRC_SPIF_gc        = (0xAA), /* SPI F Transfer Complete */
    DMA_CH_TRIGSRC_USARTF0_RXC_gc = (0xAB), /* USART F0 Receive Complete */
    DMA_CH_TRIGSRC_USARTF0_DRE_gc = (0xAC), /* USART F0 Data Register Empty */
    DMA_CH_TRIGSRC_USARTF1_RXC_gc = (0xAE), /* USART F1 Receive Complete */
    DMA_CH_TRIGSRC_USARTF1_DRE_gc = (0xAF), /* USART F1 Data Register Empty */
} DMA_CH_TRIGSRC_t;

/* Enable */
typedef enum DMA_ENABLE_enum
{
    DMA_ENABLE_CLEAR_gc = (0x00), /* Enable - CLEAR */
    DMA_ENABLE_SET_gc   = (0x80), /* Enable - SET */
} DMA_ENABLE_t;

/* Software Reset */
typedef enum DMA_RESET_enum
{
    DMA_RESET_CLEAR_gc = (0x00), /* Software Reset - CLEAR */
    DMA_RESET_SET_gc   = (0x40), /* Software Reset - SET */
} DMA_RESET_t;

/* Double Buffering Mode */
typedef enum DMA_DBUFMODE_enum
{
    DMA_DBUFMODE_DISABLED_gc = (0x00<<2), /* Double buffering disabled */
    DMA_DBUFMODE_CH01_gc     = (0x01<<2), /* Double buffering enabled on channel 0/1 */
    DMA_DBUFMODE_CH23_gc     = (0x02<<2), /* Double buffering enabled on channel 2/3 */
    DMA_DBUFMODE_CH01CH23_gc = (0x03<<2), /* Double buffering enabled on ch. 0/1 and ch. 2/3 */
} DMA_DBUFMODE_t;

/* Channel Priority Mode */
typedef enum DMA_PRIMODE_enum
{
    DMA_PRIMODE_RR0123_gc   = (0x00), /* Round Robin */
    DMA_PRIMODE_CH0RR123_gc = (0x01), /* Channel 0 > Round Robin on channel 1/2/3 */
    DMA_PRIMODE_CH01RR23_gc = (0x02), /* Channel 0 > channel 1 > Round Robin on channel 2/3 */
    DMA_PRIMODE_CH0123_gc   = (0x03), /* Channel 0 > channel 1 > channel 2 > channel 3 */
} DMA_PRIMODE_t;

/* Channel 3 Block Transfer Error Interrupt Flag */
typedef enum DMA_CH3ERRIF_enum
{
    DMA_CH3ERRIF_CLEAR_gc = (0x00), /* Channel 3 Block Transfer Error Interrupt Flag - CLEAR */
    DMA_CH3ERRIF_SET_gc   = (0x80), /* Channel 3 Block Transfer Error Interrupt Flag - SET */
} DMA_CH3ERRIF_t;

/* Channel 2 Block Transfer Error Interrupt Flag */
typedef enum DMA_CH2ERRIF_enum
{
    DMA_CH2ERRIF_CLEAR_gc = (0x00), /* Channel 2 Block Transfer Error Interrupt Flag - CLEAR */
    DMA_CH2ERRIF_SET_gc   = (0x40), /* Channel 2 Block Transfer Error Interrupt Flag - SET */
} DMA_CH2ERRIF_t;

/* Channel 1 Block Transfer Error Interrupt Flag */
typedef enum DMA_CH1ERRIF_enum
{
    DMA_CH1ERRIF_CLEAR_gc = (0x00), /* Channel 1 Block Transfer Error Interrupt Flag - CLEAR */
    DMA_CH1ERRIF_SET_gc   = (0x20), /* Channel 1 Block Transfer Error Interrupt Flag - SET */
} DMA_CH1ERRIF_t;

/* Channel 0 Block Transfer Error Interrupt Flag */
typedef enum DMA_CH0ERRIF_enum
{
    DMA_CH0ERRIF_CLEAR_gc = (0x00), /* Channel 0 Block Transfer Error Interrupt Flag - CLEAR */
    DMA_CH0ERRIF_SET_gc   = (0x10), /* Channel 0 Block Transfer Error Interrupt Flag - SET */
} DMA_CH0ERRIF_t;

/* Channel 3 Transaction Complete Interrupt Flag */
typedef enum DMA_CH3TRNIF_enum
{
    DMA_CH3TRNIF_CLEAR_gc = (0x00), /* Channel 3 Transaction Complete Interrupt Flag - CLEAR */
    DMA_CH3TRNIF_SET_gc   = (0x08), /* Channel 3 Transaction Complete Interrupt Flag - SET */
} DMA_CH3TRNIF_t;

/* Channel 2 Transaction Complete Interrupt Flag */
typedef enum DMA_CH2TRNIF_enum
{
    DMA_CH2TRNIF_CLEAR_gc = (0x00), /* Channel 2 Transaction Complete Interrupt Flag - CLEAR */
    DMA_CH2TRNIF_SET_gc   = (0x04), /* Channel 2 Transaction Complete Interrupt Flag - SET */
} DMA_CH2TRNIF_t;

/* Channel 1 Transaction Complete Interrupt Flag */
typedef enum DMA_CH1TRNIF_enum
{
    DMA_CH1TRNIF_CLEAR_gc = (0x00), /* Channel 1 Transaction Complete Interrupt Flag - CLEAR */
    DMA_CH1TRNIF_SET_gc   = (0x02), /* Channel 1 Transaction Complete Interrupt Flag - SET */
} DMA_CH1TRNIF_t;

/* Channel 0 Transaction Complete Interrupt Flag */
typedef enum DMA_CH0TRNIF_enum
{
    DMA_CH0TRNIF_CLEAR_gc = (0x00), /* Channel 0 Transaction Complete Interrupt Flag - CLEAR */
    DMA_CH0TRNIF_SET_gc   = (0x01), /* Channel 0 Transaction Complete Interrupt Flag - SET */
} DMA_CH0TRNIF_t;

/* Channel 3 Block Transfer Busy */
typedef enum DMA_CH3BUSY_enum
{
    DMA_CH3BUSY_CLEAR_gc = (0x00), /* Channel 3 Block Transfer Busy - CLEAR */
    DMA_CH3BUSY_SET_gc   = (0x80), /* Channel 3 Block Transfer Busy - SET */
} DMA_CH3BUSY_t;

/* Channel 2 Block Transfer Busy */
typedef enum DMA_CH2BUSY_enum
{
    DMA_CH2BUSY_CLEAR_gc = (0x00), /* Channel 2 Block Transfer Busy - CLEAR */
    DMA_CH2BUSY_SET_gc   = (0x40), /* Channel 2 Block Transfer Busy - SET */
} DMA_CH2BUSY_t;

/* Channel 1 Block Transfer Busy */
typedef enum DMA_CH1BUSY_enum
{
    DMA_CH1BUSY_CLEAR_gc = (0x00), /* Channel 1 Block Transfer Busy - CLEAR */
    DMA_CH1BUSY_SET_gc   = (0x20), /* Channel 1 Block Transfer Busy - SET */
} DMA_CH1BUSY_t;

/* Channel 0 Block Transfer Busy */
typedef enum DMA_CH0BUSY_enum
{
    DMA_CH0BUSY_CLEAR_gc = (0x00), /* Channel 0 Block Transfer Busy - CLEAR */
    DMA_CH0BUSY_SET_gc   = (0x10), /* Channel 0 Block Transfer Busy - SET */
} DMA_CH0BUSY_t;

/* Channel 3 Block Transfer Pending */
typedef enum DMA_CH3PEND_enum
{
    DMA_CH3PEND_CLEAR_gc = (0x00), /* Channel 3 Block Transfer Pending - CLEAR */
    DMA_CH3PEND_SET_gc   = (0x08), /* Channel 3 Block Transfer Pending - SET */
} DMA_CH3PEND_t;

/* Channel 2 Block Transfer Pending */
typedef enum DMA_CH2PEND_enum
{
    DMA_CH2PEND_CLEAR_gc = (0x00), /* Channel 2 Block Transfer Pending - CLEAR */
    DMA_CH2PEND_SET_gc   = (0x04), /* Channel 2 Block Transfer Pending - SET */
} DMA_CH2PEND_t;

/* Channel 1 Block Transfer Pending */
typedef enum DMA_CH1PEND_enum
{
    DMA_CH1PEND_CLEAR_gc = (0x00), /* Channel 1 Block Transfer Pending - CLEAR */
    DMA_CH1PEND_SET_gc   = (0x02), /* Channel 1 Block Transfer Pending - SET */
} DMA_CH1PEND_t;

/* Channel 0 Block Transfer Pending */
typedef enum DMA_CH0PEND_enum
{
    DMA_CH0PEND_CLEAR_gc = (0x00), /* Channel 0 Block Transfer Pending - CLEAR */
    DMA_CH0PEND_SET_gc   = (0x01), /* Channel 0 Block Transfer Pending - SET */
} DMA_CH0PEND_t;

/*
--------------------------------------------------------------------------------
EVSYS - Event System
--------------------------------------------------------------------------------
*/

typedef struct EVSYS_struct
{
    register8_t CH0MUX;  /* Event Channel 0 Multiplexer */
    register8_t CH1MUX;  /* Event Channel 1 Multiplexer */
    register8_t CH2MUX;  /* Event Channel 2 Multiplexer */
    register8_t CH3MUX;  /* Event Channel 3 Multiplexer */
    register8_t CH4MUX;  /* Event Channel 4 Multiplexer */
    register8_t CH5MUX;  /* Event Channel 5 Multiplexer */
    register8_t CH6MUX;  /* Event Channel 6 Multiplexer */
    register8_t CH7MUX;  /* Event Channel 7 Multiplexer */
    register8_t CH0CTRL; /* Channel 0 Control Register */
    register8_t CH1CTRL; /* Channel 1 Control Register */
    register8_t CH2CTRL; /* Channel 2 Control Register */
    register8_t CH3CTRL; /* Channel 3 Control Register */
    register8_t CH4CTRL; /* Channel 4 Control Register */
    register8_t CH5CTRL; /* Channel 5 Control Register */
    register8_t CH6CTRL; /* Channel 6 Control Register */
    register8_t CH7CTRL; /* Channel 7 Control Register */
    register8_t STROBE;  /* Event Strobe */
    register8_t DATA;    /* Event Data */
} EVSYS_t;


/* Event Channel 0 Multiplexer */
typedef enum EVSYS_CHMUX_enum
{
    EVSYS_CHMUX_OFF_gc             = (0x00), /* Off */
    EVSYS_CHMUX_RTC_OVF_gc         = (0x08), /* RTC Overflow */
    EVSYS_CHMUX_RTC_CMP_gc         = (0x09), /* RTC Compare Match */
    EVSYS_CHMUX_ACA_CH0_gc         = (0x10), /* Analog Comparator A Channel 0 */
    EVSYS_CHMUX_ACA_CH1_gc         = (0x11), /* Analog Comparator A Channel 1 */
    EVSYS_CHMUX_ACA_WIN_gc         = (0x12), /* Analog Comparator A Window */
    EVSYS_CHMUX_ACB_CH0_gc         = (0x13), /* Analog Comparator B Channel 0 */
    EVSYS_CHMUX_ACB_CH1_gc         = (0x14), /* Analog Comparator B Channel 1 */
    EVSYS_CHMUX_ACB_WIN_gc         = (0x15), /* Analog Comparator B Window */
    EVSYS_CHMUX_ADCA_CH0_gc        = (0x20), /* ADC A Channel 0 */
    EVSYS_CHMUX_ADCA_CH1_gc        = (0x21), /* ADC A Channel 1 */
    EVSYS_CHMUX_ADCA_CH2_gc        = (0x22), /* ADC A Channel 2 */
    EVSYS_CHMUX_ADCA_CH3_gc        = (0x23), /* ADC A Channel 3 */
    EVSYS_CHMUX_ADCB_CH0_gc        = (0x24), /* ADC B Channel 0 */
    EVSYS_CHMUX_ADCB_CH1_gc        = (0x25), /* ADC B Channel 1 */
    EVSYS_CHMUX_ADCB_CH2_gc        = (0x26), /* ADC B Channel 2 */
    EVSYS_CHMUX_ADCB_CH3_gc        = (0x27), /* ADC B Channel 3 */
    EVSYS_CHMUX_PORTA_PIN0_gc      = (0x50), /* Port A, Pin0 */
    EVSYS_CHMUX_PORTA_PIN1_gc      = (0x51), /* Port A, Pin1 */
    EVSYS_CHMUX_PORTA_PIN2_gc      = (0x52), /* Port A, Pin2 */
    EVSYS_CHMUX_PORTA_PIN3_gc      = (0x53), /* Port A, Pin3 */
    EVSYS_CHMUX_PORTA_PIN4_gc      = (0x54), /* Port A, Pin4 */
    EVSYS_CHMUX_PORTA_PIN5_gc      = (0x55), /* Port A, Pin5 */
    EVSYS_CHMUX_PORTA_PIN6_gc      = (0x56), /* Port A, Pin6 */
    EVSYS_CHMUX_PORTA_PIN7_gc      = (0x57), /* Port A, Pin7 */
    EVSYS_CHMUX_PORTB_PIN0_gc      = (0x58), /* Port B, Pin0 */
    EVSYS_CHMUX_PORTB_PIN1_gc      = (0x59), /* Port B, Pin1 */
    EVSYS_CHMUX_PORTB_PIN2_gc      = (0x5A), /* Port B, Pin2 */
    EVSYS_CHMUX_PORTB_PIN3_gc      = (0x5B), /* Port B, Pin3 */
    EVSYS_CHMUX_PORTB_PIN4_gc      = (0x5C), /* Port B, Pin4 */
    EVSYS_CHMUX_PORTB_PIN5_gc      = (0x5D), /* Port B, Pin5 */
    EVSYS_CHMUX_PORTB_PIN6_gc      = (0x5E), /* Port B, Pin6 */
    EVSYS_CHMUX_PORTB_PIN7_gc      = (0x5F), /* Port B, Pin7 */
    EVSYS_CHMUX_PORTC_PIN0_gc      = (0x60), /* Port C, Pin0 */
    EVSYS_CHMUX_PORTC_PIN1_gc      = (0x61), /* Port C, Pin1 */
    EVSYS_CHMUX_PORTC_PIN2_gc      = (0x62), /* Port C, Pin2 */
    EVSYS_CHMUX_PORTC_PIN3_gc      = (0x63), /* Port C, Pin3 */
    EVSYS_CHMUX_PORTC_PIN4_gc      = (0x64), /* Port C, Pin4 */
    EVSYS_CHMUX_PORTC_PIN5_gc      = (0x65), /* Port C, Pin5 */
    EVSYS_CHMUX_PORTC_PIN6_gc      = (0x66), /* Port C, Pin6 */
    EVSYS_CHMUX_PORTC_PIN7_gc      = (0x67), /* Port C, Pin7 */
    EVSYS_CHMUX_PORTD_PIN0_gc      = (0x68), /* Port D, Pin0 */
    EVSYS_CHMUX_PORTD_PIN1_gc      = (0x69), /* Port D, Pin1 */
    EVSYS_CHMUX_PORTD_PIN2_gc      = (0x6A), /* Port D, Pin2 */
    EVSYS_CHMUX_PORTD_PIN3_gc      = (0x6B), /* Port D, Pin3 */
    EVSYS_CHMUX_PORTD_PIN4_gc      = (0x6C), /* Port D, Pin4 */
    EVSYS_CHMUX_PORTD_PIN5_gc      = (0x6D), /* Port D, Pin5 */
    EVSYS_CHMUX_PORTD_PIN6_gc      = (0x6E), /* Port D, Pin6 */
    EVSYS_CHMUX_PORTD_PIN7_gc      = (0x6F), /* Port D, Pin7 */
    EVSYS_CHMUX_PORTE_PIN0_gc      = (0x70), /* Port E, Pin0 */
    EVSYS_CHMUX_PORTE_PIN1_gc      = (0x71), /* Port E, Pin1 */
    EVSYS_CHMUX_PORTE_PIN2_gc      = (0x72), /* Port E, Pin2 */
    EVSYS_CHMUX_PORTE_PIN3_gc      = (0x73), /* Port E, Pin3 */
    EVSYS_CHMUX_PORTE_PIN4_gc      = (0x74), /* Port E, Pin4 */
    EVSYS_CHMUX_PORTE_PIN5_gc      = (0x75), /* Port E, Pin5 */
    EVSYS_CHMUX_PORTE_PIN6_gc      = (0x76), /* Port E, Pin6 */
    EVSYS_CHMUX_PORTE_PIN7_gc      = (0x77), /* Port E, Pin7 */
    EVSYS_CHMUX_PORTF_PIN0_gc      = (0x78), /* Port F, Pin0 */
    EVSYS_CHMUX_PORTF_PIN1_gc      = (0x79), /* Port F, Pin1 */
    EVSYS_CHMUX_PORTF_PIN2_gc      = (0x7A), /* Port F, Pin2 */
    EVSYS_CHMUX_PORTF_PIN3_gc      = (0x7B), /* Port F, Pin3 */
    EVSYS_CHMUX_PORTF_PIN4_gc      = (0x7C), /* Port F, Pin4 */
    EVSYS_CHMUX_PORTF_PIN5_gc      = (0x7D), /* Port F, Pin5 */
    EVSYS_CHMUX_PORTF_PIN6_gc      = (0x7E), /* Port F, Pin6 */
    EVSYS_CHMUX_PORTF_PIN7_gc      = (0x7F), /* Port F, Pin7 */
    EVSYS_CHMUX_PRESCALER_1_gc     = (0x80), /* Prescaler, divide by 1 */
    EVSYS_CHMUX_PRESCALER_2_gc     = (0x81), /* Prescaler, divide by 2 */
    EVSYS_CHMUX_PRESCALER_4_gc     = (0x82), /* Prescaler, divide by 4 */
    EVSYS_CHMUX_PRESCALER_8_gc     = (0x83), /* Prescaler, divide by 8 */
    EVSYS_CHMUX_PRESCALER_16_gc    = (0x84), /* Prescaler, divide by 16 */
    EVSYS_CHMUX_PRESCALER_32_gc    = (0x85), /* Prescaler, divide by 32 */
    EVSYS_CHMUX_PRESCALER_64_gc    = (0x86), /* Prescaler, divide by 64 */
    EVSYS_CHMUX_PRESCALER_128_gc   = (0x87), /* Prescaler, divide by 128 */
    EVSYS_CHMUX_PRESCALER_256_gc   = (0x88), /* Prescaler, divide by 256 */
    EVSYS_CHMUX_PRESCALER_512_gc   = (0x89), /* Prescaler, divide by 512 */
    EVSYS_CHMUX_PRESCALER_1024_gc  = (0x8A), /* Prescaler, divide by 1024 */
    EVSYS_CHMUX_PRESCALER_2048_gc  = (0x8B), /* Prescaler, divide by 2048 */
    EVSYS_CHMUX_PRESCALER_4096_gc  = (0x8C), /* Prescaler, divide by 4096 */
    EVSYS_CHMUX_PRESCALER_8192_gc  = (0x8D), /* Prescaler, divide by 8192 */
    EVSYS_CHMUX_PRESCALER_16384_gc = (0x8E), /* Prescaler, divide by 16384 */
    EVSYS_CHMUX_PRESCALER_32768_gc = (0x8F), /* Prescaler, divide by 32768 */
    EVSYS_CHMUX_TCC0_OVF_gc        = (0xC0), /* Timer/Counter C0 Overflow */
    EVSYS_CHMUX_TCC0_ERR_gc        = (0xC1), /* Timer/Counter C0 Error */
    EVSYS_CHMUX_TCC0_CCA_gc        = (0xC4), /* Timer/Counter C0 Compare or Capture A */
    EVSYS_CHMUX_TCC0_CCB_gc        = (0xC5), /* Timer/Counter C0 Compare or Capture B */
    EVSYS_CHMUX_TCC0_CCC_gc        = (0xC6), /* Timer/Counter C0 Compare or Capture C */
    EVSYS_CHMUX_TCC0_CCD_gc        = (0xC7), /* Timer/Counter C0 Compare or Capture D */
    EVSYS_CHMUX_TCC1_OVF_gc        = (0xC8), /* Timer/Counter C1 Overflow */
    EVSYS_CHMUX_TCC1_ERR_gc        = (0xC9), /* Timer/Counter C1 Error */
    EVSYS_CHMUX_TCC1_CCA_gc        = (0xCC), /* Timer/Counter C1 Compare or Capture A */
    EVSYS_CHMUX_TCC1_CCB_gc        = (0xCD), /* Timer/Counter C1 Compare or Capture B */
    EVSYS_CHMUX_TCD0_OVF_gc        = (0xD0), /* Timer/Counter D0 Overflow */
    EVSYS_CHMUX_TCD0_ERR_gc        = (0xD1), /* Timer/Counter D0 Error */
    EVSYS_CHMUX_TCD0_CCA_gc        = (0xD4), /* Timer/Counter D0 Compare or Capture A */
    EVSYS_CHMUX_TCD0_CCB_gc        = (0xD5), /* Timer/Counter D0 Compare or Capture B */
    EVSYS_CHMUX_TCD0_CCC_gc        = (0xD6), /* Timer/Counter D0 Compare or Capture C */
    EVSYS_CHMUX_TCD0_CCD_gc        = (0xD7), /* Timer/Counter D0 Compare or Capture D */
    EVSYS_CHMUX_TCD1_OVF_gc        = (0xD8), /* Timer/Counter D1 Overflow */
    EVSYS_CHMUX_TCD1_ERR_gc        = (0xD9), /* Timer/Counter D1 Error */
    EVSYS_CHMUX_TCD1_CCA_gc        = (0xDC), /* Timer/Counter D1 Compare or Capture A */
    EVSYS_CHMUX_TCD1_CCB_gc        = (0xDD), /* Timer/Counter D1 Compare or Capture B */
    EVSYS_CHMUX_TCE0_OVF_gc        = (0xE0), /* Timer/Counter E0 Overflow */
    EVSYS_CHMUX_TCE0_ERR_gc        = (0xE1), /* Timer/Counter E0 Error */
    EVSYS_CHMUX_TCE0_CCA_gc        = (0xE4), /* Timer/Counter E0 Compare or Capture A */
    EVSYS_CHMUX_TCE0_CCB_gc        = (0xE5), /* Timer/Counter E0 Compare or Capture B */
    EVSYS_CHMUX_TCE0_CCC_gc        = (0xE6), /* Timer/Counter E0 Compare or Capture C */
    EVSYS_CHMUX_TCE0_CCD_gc        = (0xE7), /* Timer/Counter E0 Compare or Capture D */
    EVSYS_CHMUX_TCE1_OVF_gc        = (0xE8), /* Timer/Counter E1 Overflow */
    EVSYS_CHMUX_TCE1_ERR_gc        = (0xE9), /* Timer/Counter E1 Error */
    EVSYS_CHMUX_TCE1_CCA_gc        = (0xEC), /* Timer/Counter E1 Compare or Capture A */
    EVSYS_CHMUX_TCE1_CCB_gc        = (0xED), /* Timer/Counter E1 Compare or Capture B */
    EVSYS_CHMUX_TCF0_OVF_gc        = (0xF0), /* Timer/Counter F0 Overflow */
    EVSYS_CHMUX_TCF0_ERR_gc        = (0xF1), /* Timer/Counter F0 Error */
    EVSYS_CHMUX_TCF0_CCA_gc        = (0xF4), /* Timer/Counter F0 Compare or Capture A */
    EVSYS_CHMUX_TCF0_CCB_gc        = (0xF5), /* Timer/Counter F0 Compare or Capture B */
    EVSYS_CHMUX_TCF0_CCC_gc        = (0xF6), /* Timer/Counter F0 Compare or Capture C */
    EVSYS_CHMUX_TCF0_CCD_gc        = (0xF7), /* Timer/Counter F0 Compare or Capture D */
    EVSYS_CHMUX_TCF1_OVF_gc        = (0xF8), /* Timer/Counter F1 Overflow */
    EVSYS_CHMUX_TCF1_ERR_gc        = (0xF9), /* Timer/Counter F1 Error */
    EVSYS_CHMUX_TCF1_CCA_gc        = (0xFC), /* Timer/Counter F1 Compare or Capture A */
    EVSYS_CHMUX_TCF1_CCB_gc        = (0xFD), /* Timer/Counter F1 Compare or Capture B */
} EVSYS_CHMUX_t;

/* Event Channel 1 Multiplexer */
typedef enum EVSYS_CHMUX_enum
{
    EVSYS_CHMUX_OFF_gc             = (0x00), /* Off */
    EVSYS_CHMUX_RTC_OVF_gc         = (0x08), /* RTC Overflow */
    EVSYS_CHMUX_RTC_CMP_gc         = (0x09), /* RTC Compare Match */
    EVSYS_CHMUX_ACA_CH0_gc         = (0x10), /* Analog Comparator A Channel 0 */
    EVSYS_CHMUX_ACA_CH1_gc         = (0x11), /* Analog Comparator A Channel 1 */
    EVSYS_CHMUX_ACA_WIN_gc         = (0x12), /* Analog Comparator A Window */
    EVSYS_CHMUX_ACB_CH0_gc         = (0x13), /* Analog Comparator B Channel 0 */
    EVSYS_CHMUX_ACB_CH1_gc         = (0x14), /* Analog Comparator B Channel 1 */
    EVSYS_CHMUX_ACB_WIN_gc         = (0x15), /* Analog Comparator B Window */
    EVSYS_CHMUX_ADCA_CH0_gc        = (0x20), /* ADC A Channel 0 */
    EVSYS_CHMUX_ADCA_CH1_gc        = (0x21), /* ADC A Channel 1 */
    EVSYS_CHMUX_ADCA_CH2_gc        = (0x22), /* ADC A Channel 2 */
    EVSYS_CHMUX_ADCA_CH3_gc        = (0x23), /* ADC A Channel 3 */
    EVSYS_CHMUX_ADCB_CH0_gc        = (0x24), /* ADC B Channel 0 */
    EVSYS_CHMUX_ADCB_CH1_gc        = (0x25), /* ADC B Channel 1 */
    EVSYS_CHMUX_ADCB_CH2_gc        = (0x26), /* ADC B Channel 2 */
    EVSYS_CHMUX_ADCB_CH3_gc        = (0x27), /* ADC B Channel 3 */
    EVSYS_CHMUX_PORTA_PIN0_gc      = (0x50), /* Port A, Pin0 */
    EVSYS_CHMUX_PORTA_PIN1_gc      = (0x51), /* Port A, Pin1 */
    EVSYS_CHMUX_PORTA_PIN2_gc      = (0x52), /* Port A, Pin2 */
    EVSYS_CHMUX_PORTA_PIN3_gc      = (0x53), /* Port A, Pin3 */
    EVSYS_CHMUX_PORTA_PIN4_gc      = (0x54), /* Port A, Pin4 */
    EVSYS_CHMUX_PORTA_PIN5_gc      = (0x55), /* Port A, Pin5 */
    EVSYS_CHMUX_PORTA_PIN6_gc      = (0x56), /* Port A, Pin6 */
    EVSYS_CHMUX_PORTA_PIN7_gc      = (0x57), /* Port A, Pin7 */
    EVSYS_CHMUX_PORTB_PIN0_gc      = (0x58), /* Port B, Pin0 */
    EVSYS_CHMUX_PORTB_PIN1_gc      = (0x59), /* Port B, Pin1 */
    EVSYS_CHMUX_PORTB_PIN2_gc      = (0x5A), /* Port B, Pin2 */
    EVSYS_CHMUX_PORTB_PIN3_gc      = (0x5B), /* Port B, Pin3 */
    EVSYS_CHMUX_PORTB_PIN4_gc      = (0x5C), /* Port B, Pin4 */
    EVSYS_CHMUX_PORTB_PIN5_gc      = (0x5D), /* Port B, Pin5 */
    EVSYS_CHMUX_PORTB_PIN6_gc      = (0x5E), /* Port B, Pin6 */
    EVSYS_CHMUX_PORTB_PIN7_gc      = (0x5F), /* Port B, Pin7 */
    EVSYS_CHMUX_PORTC_PIN0_gc      = (0x60), /* Port C, Pin0 */
    EVSYS_CHMUX_PORTC_PIN1_gc      = (0x61), /* Port C, Pin1 */
    EVSYS_CHMUX_PORTC_PIN2_gc      = (0x62), /* Port C, Pin2 */
    EVSYS_CHMUX_PORTC_PIN3_gc      = (0x63), /* Port C, Pin3 */
    EVSYS_CHMUX_PORTC_PIN4_gc      = (0x64), /* Port C, Pin4 */
    EVSYS_CHMUX_PORTC_PIN5_gc      = (0x65), /* Port C, Pin5 */
    EVSYS_CHMUX_PORTC_PIN6_gc      = (0x66), /* Port C, Pin6 */
    EVSYS_CHMUX_PORTC_PIN7_gc      = (0x67), /* Port C, Pin7 */
    EVSYS_CHMUX_PORTD_PIN0_gc      = (0x68), /* Port D, Pin0 */
    EVSYS_CHMUX_PORTD_PIN1_gc      = (0x69), /* Port D, Pin1 */
    EVSYS_CHMUX_PORTD_PIN2_gc      = (0x6A), /* Port D, Pin2 */
    EVSYS_CHMUX_PORTD_PIN3_gc      = (0x6B), /* Port D, Pin3 */
    EVSYS_CHMUX_PORTD_PIN4_gc      = (0x6C), /* Port D, Pin4 */
    EVSYS_CHMUX_PORTD_PIN5_gc      = (0x6D), /* Port D, Pin5 */
    EVSYS_CHMUX_PORTD_PIN6_gc      = (0x6E), /* Port D, Pin6 */
    EVSYS_CHMUX_PORTD_PIN7_gc      = (0x6F), /* Port D, Pin7 */
    EVSYS_CHMUX_PORTE_PIN0_gc      = (0x70), /* Port E, Pin0 */
    EVSYS_CHMUX_PORTE_PIN1_gc      = (0x71), /* Port E, Pin1 */
    EVSYS_CHMUX_PORTE_PIN2_gc      = (0x72), /* Port E, Pin2 */
    EVSYS_CHMUX_PORTE_PIN3_gc      = (0x73), /* Port E, Pin3 */
    EVSYS_CHMUX_PORTE_PIN4_gc      = (0x74), /* Port E, Pin4 */
    EVSYS_CHMUX_PORTE_PIN5_gc      = (0x75), /* Port E, Pin5 */
    EVSYS_CHMUX_PORTE_PIN6_gc      = (0x76), /* Port E, Pin6 */
    EVSYS_CHMUX_PORTE_PIN7_gc      = (0x77), /* Port E, Pin7 */
    EVSYS_CHMUX_PORTF_PIN0_gc      = (0x78), /* Port F, Pin0 */
    EVSYS_CHMUX_PORTF_PIN1_gc      = (0x79), /* Port F, Pin1 */
    EVSYS_CHMUX_PORTF_PIN2_gc      = (0x7A), /* Port F, Pin2 */
    EVSYS_CHMUX_PORTF_PIN3_gc      = (0x7B), /* Port F, Pin3 */
    EVSYS_CHMUX_PORTF_PIN4_gc      = (0x7C), /* Port F, Pin4 */
    EVSYS_CHMUX_PORTF_PIN5_gc      = (0x7D), /* Port F, Pin5 */
    EVSYS_CHMUX_PORTF_PIN6_gc      = (0x7E), /* Port F, Pin6 */
    EVSYS_CHMUX_PORTF_PIN7_gc      = (0x7F), /* Port F, Pin7 */
    EVSYS_CHMUX_PRESCALER_1_gc     = (0x80), /* Prescaler, divide by 1 */
    EVSYS_CHMUX_PRESCALER_2_gc     = (0x81), /* Prescaler, divide by 2 */
    EVSYS_CHMUX_PRESCALER_4_gc     = (0x82), /* Prescaler, divide by 4 */
    EVSYS_CHMUX_PRESCALER_8_gc     = (0x83), /* Prescaler, divide by 8 */
    EVSYS_CHMUX_PRESCALER_16_gc    = (0x84), /* Prescaler, divide by 16 */
    EVSYS_CHMUX_PRESCALER_32_gc    = (0x85), /* Prescaler, divide by 32 */
    EVSYS_CHMUX_PRESCALER_64_gc    = (0x86), /* Prescaler, divide by 64 */
    EVSYS_CHMUX_PRESCALER_128_gc   = (0x87), /* Prescaler, divide by 128 */
    EVSYS_CHMUX_PRESCALER_256_gc   = (0x88), /* Prescaler, divide by 256 */
    EVSYS_CHMUX_PRESCALER_512_gc   = (0x89), /* Prescaler, divide by 512 */
    EVSYS_CHMUX_PRESCALER_1024_gc  = (0x8A), /* Prescaler, divide by 1024 */
    EVSYS_CHMUX_PRESCALER_2048_gc  = (0x8B), /* Prescaler, divide by 2048 */
    EVSYS_CHMUX_PRESCALER_4096_gc  = (0x8C), /* Prescaler, divide by 4096 */
    EVSYS_CHMUX_PRESCALER_8192_gc  = (0x8D), /* Prescaler, divide by 8192 */
    EVSYS_CHMUX_PRESCALER_16384_gc = (0x8E), /* Prescaler, divide by 16384 */
    EVSYS_CHMUX_PRESCALER_32768_gc = (0x8F), /* Prescaler, divide by 32768 */
    EVSYS_CHMUX_TCC0_OVF_gc        = (0xC0), /* Timer/Counter C0 Overflow */
    EVSYS_CHMUX_TCC0_ERR_gc        = (0xC1), /* Timer/Counter C0 Error */
    EVSYS_CHMUX_TCC0_CCA_gc        = (0xC4), /* Timer/Counter C0 Compare or Capture A */
    EVSYS_CHMUX_TCC0_CCB_gc        = (0xC5), /* Timer/Counter C0 Compare or Capture B */
    EVSYS_CHMUX_TCC0_CCC_gc        = (0xC6), /* Timer/Counter C0 Compare or Capture C */
    EVSYS_CHMUX_TCC0_CCD_gc        = (0xC7), /* Timer/Counter C0 Compare or Capture D */
    EVSYS_CHMUX_TCC1_OVF_gc        = (0xC8), /* Timer/Counter C1 Overflow */
    EVSYS_CHMUX_TCC1_ERR_gc        = (0xC9), /* Timer/Counter C1 Error */
    EVSYS_CHMUX_TCC1_CCA_gc        = (0xCC), /* Timer/Counter C1 Compare or Capture A */
    EVSYS_CHMUX_TCC1_CCB_gc        = (0xCD), /* Timer/Counter C1 Compare or Capture B */
    EVSYS_CHMUX_TCD0_OVF_gc        = (0xD0), /* Timer/Counter D0 Overflow */
    EVSYS_CHMUX_TCD0_ERR_gc        = (0xD1), /* Timer/Counter D0 Error */
    EVSYS_CHMUX_TCD0_CCA_gc        = (0xD4), /* Timer/Counter D0 Compare or Capture A */
    EVSYS_CHMUX_TCD0_CCB_gc        = (0xD5), /* Timer/Counter D0 Compare or Capture B */
    EVSYS_CHMUX_TCD0_CCC_gc        = (0xD6), /* Timer/Counter D0 Compare or Capture C */
    EVSYS_CHMUX_TCD0_CCD_gc        = (0xD7), /* Timer/Counter D0 Compare or Capture D */
    EVSYS_CHMUX_TCD1_OVF_gc        = (0xD8), /* Timer/Counter D1 Overflow */
    EVSYS_CHMUX_TCD1_ERR_gc        = (0xD9), /* Timer/Counter D1 Error */
    EVSYS_CHMUX_TCD1_CCA_gc        = (0xDC), /* Timer/Counter D1 Compare or Capture A */
    EVSYS_CHMUX_TCD1_CCB_gc        = (0xDD), /* Timer/Counter D1 Compare or Capture B */
    EVSYS_CHMUX_TCE0_OVF_gc        = (0xE0), /* Timer/Counter E0 Overflow */
    EVSYS_CHMUX_TCE0_ERR_gc        = (0xE1), /* Timer/Counter E0 Error */
    EVSYS_CHMUX_TCE0_CCA_gc        = (0xE4), /* Timer/Counter E0 Compare or Capture A */
    EVSYS_CHMUX_TCE0_CCB_gc        = (0xE5), /* Timer/Counter E0 Compare or Capture B */
    EVSYS_CHMUX_TCE0_CCC_gc        = (0xE6), /* Timer/Counter E0 Compare or Capture C */
    EVSYS_CHMUX_TCE0_CCD_gc        = (0xE7), /* Timer/Counter E0 Compare or Capture D */
    EVSYS_CHMUX_TCE1_OVF_gc        = (0xE8), /* Timer/Counter E1 Overflow */
    EVSYS_CHMUX_TCE1_ERR_gc        = (0xE9), /* Timer/Counter E1 Error */
    EVSYS_CHMUX_TCE1_CCA_gc        = (0xEC), /* Timer/Counter E1 Compare or Capture A */
    EVSYS_CHMUX_TCE1_CCB_gc        = (0xED), /* Timer/Counter E1 Compare or Capture B */
    EVSYS_CHMUX_TCF0_OVF_gc        = (0xF0), /* Timer/Counter F0 Overflow */
    EVSYS_CHMUX_TCF0_ERR_gc        = (0xF1), /* Timer/Counter F0 Error */
    EVSYS_CHMUX_TCF0_CCA_gc        = (0xF4), /* Timer/Counter F0 Compare or Capture A */
    EVSYS_CHMUX_TCF0_CCB_gc        = (0xF5), /* Timer/Counter F0 Compare or Capture B */
    EVSYS_CHMUX_TCF0_CCC_gc        = (0xF6), /* Timer/Counter F0 Compare or Capture C */
    EVSYS_CHMUX_TCF0_CCD_gc        = (0xF7), /* Timer/Counter F0 Compare or Capture D */
    EVSYS_CHMUX_TCF1_OVF_gc        = (0xF8), /* Timer/Counter F1 Overflow */
    EVSYS_CHMUX_TCF1_ERR_gc        = (0xF9), /* Timer/Counter F1 Error */
    EVSYS_CHMUX_TCF1_CCA_gc        = (0xFC), /* Timer/Counter F1 Compare or Capture A */
    EVSYS_CHMUX_TCF1_CCB_gc        = (0xFD), /* Timer/Counter F1 Compare or Capture B */
} EVSYS_CHMUX_t;

/* Event Channel 2 Multiplexer */
typedef enum EVSYS_CHMUX_enum
{
    EVSYS_CHMUX_OFF_gc             = (0x00), /* Off */
    EVSYS_CHMUX_RTC_OVF_gc         = (0x08), /* RTC Overflow */
    EVSYS_CHMUX_RTC_CMP_gc         = (0x09), /* RTC Compare Match */
    EVSYS_CHMUX_ACA_CH0_gc         = (0x10), /* Analog Comparator A Channel 0 */
    EVSYS_CHMUX_ACA_CH1_gc         = (0x11), /* Analog Comparator A Channel 1 */
    EVSYS_CHMUX_ACA_WIN_gc         = (0x12), /* Analog Comparator A Window */
    EVSYS_CHMUX_ACB_CH0_gc         = (0x13), /* Analog Comparator B Channel 0 */
    EVSYS_CHMUX_ACB_CH1_gc         = (0x14), /* Analog Comparator B Channel 1 */
    EVSYS_CHMUX_ACB_WIN_gc         = (0x15), /* Analog Comparator B Window */
    EVSYS_CHMUX_ADCA_CH0_gc        = (0x20), /* ADC A Channel 0 */
    EVSYS_CHMUX_ADCA_CH1_gc        = (0x21), /* ADC A Channel 1 */
    EVSYS_CHMUX_ADCA_CH2_gc        = (0x22), /* ADC A Channel 2 */
    EVSYS_CHMUX_ADCA_CH3_gc        = (0x23), /* ADC A Channel 3 */
    EVSYS_CHMUX_ADCB_CH0_gc        = (0x24), /* ADC B Channel 0 */
    EVSYS_CHMUX_ADCB_CH1_gc        = (0x25), /* ADC B Channel 1 */
    EVSYS_CHMUX_ADCB_CH2_gc        = (0x26), /* ADC B Channel 2 */
    EVSYS_CHMUX_ADCB_CH3_gc        = (0x27), /* ADC B Channel 3 */
    EVSYS_CHMUX_PORTA_PIN0_gc      = (0x50), /* Port A, Pin0 */
    EVSYS_CHMUX_PORTA_PIN1_gc      = (0x51), /* Port A, Pin1 */
    EVSYS_CHMUX_PORTA_PIN2_gc      = (0x52), /* Port A, Pin2 */
    EVSYS_CHMUX_PORTA_PIN3_gc      = (0x53), /* Port A, Pin3 */
    EVSYS_CHMUX_PORTA_PIN4_gc      = (0x54), /* Port A, Pin4 */
    EVSYS_CHMUX_PORTA_PIN5_gc      = (0x55), /* Port A, Pin5 */
    EVSYS_CHMUX_PORTA_PIN6_gc      = (0x56), /* Port A, Pin6 */
    EVSYS_CHMUX_PORTA_PIN7_gc      = (0x57), /* Port A, Pin7 */
    EVSYS_CHMUX_PORTB_PIN0_gc      = (0x58), /* Port B, Pin0 */
    EVSYS_CHMUX_PORTB_PIN1_gc      = (0x59), /* Port B, Pin1 */
    EVSYS_CHMUX_PORTB_PIN2_gc      = (0x5A), /* Port B, Pin2 */
    EVSYS_CHMUX_PORTB_PIN3_gc      = (0x5B), /* Port B, Pin3 */
    EVSYS_CHMUX_PORTB_PIN4_gc      = (0x5C), /* Port B, Pin4 */
    EVSYS_CHMUX_PORTB_PIN5_gc      = (0x5D), /* Port B, Pin5 */
    EVSYS_CHMUX_PORTB_PIN6_gc      = (0x5E), /* Port B, Pin6 */
    EVSYS_CHMUX_PORTB_PIN7_gc      = (0x5F), /* Port B, Pin7 */
    EVSYS_CHMUX_PORTC_PIN0_gc      = (0x60), /* Port C, Pin0 */
    EVSYS_CHMUX_PORTC_PIN1_gc      = (0x61), /* Port C, Pin1 */
    EVSYS_CHMUX_PORTC_PIN2_gc      = (0x62), /* Port C, Pin2 */
    EVSYS_CHMUX_PORTC_PIN3_gc      = (0x63), /* Port C, Pin3 */
    EVSYS_CHMUX_PORTC_PIN4_gc      = (0x64), /* Port C, Pin4 */
    EVSYS_CHMUX_PORTC_PIN5_gc      = (0x65), /* Port C, Pin5 */
    EVSYS_CHMUX_PORTC_PIN6_gc      = (0x66), /* Port C, Pin6 */
    EVSYS_CHMUX_PORTC_PIN7_gc      = (0x67), /* Port C, Pin7 */
    EVSYS_CHMUX_PORTD_PIN0_gc      = (0x68), /* Port D, Pin0 */
    EVSYS_CHMUX_PORTD_PIN1_gc      = (0x69), /* Port D, Pin1 */
    EVSYS_CHMUX_PORTD_PIN2_gc      = (0x6A), /* Port D, Pin2 */
    EVSYS_CHMUX_PORTD_PIN3_gc      = (0x6B), /* Port D, Pin3 */
    EVSYS_CHMUX_PORTD_PIN4_gc      = (0x6C), /* Port D, Pin4 */
    EVSYS_CHMUX_PORTD_PIN5_gc      = (0x6D), /* Port D, Pin5 */
    EVSYS_CHMUX_PORTD_PIN6_gc      = (0x6E), /* Port D, Pin6 */
    EVSYS_CHMUX_PORTD_PIN7_gc      = (0x6F), /* Port D, Pin7 */
    EVSYS_CHMUX_PORTE_PIN0_gc      = (0x70), /* Port E, Pin0 */
    EVSYS_CHMUX_PORTE_PIN1_gc      = (0x71), /* Port E, Pin1 */
    EVSYS_CHMUX_PORTE_PIN2_gc      = (0x72), /* Port E, Pin2 */
    EVSYS_CHMUX_PORTE_PIN3_gc      = (0x73), /* Port E, Pin3 */
    EVSYS_CHMUX_PORTE_PIN4_gc      = (0x74), /* Port E, Pin4 */
    EVSYS_CHMUX_PORTE_PIN5_gc      = (0x75), /* Port E, Pin5 */
    EVSYS_CHMUX_PORTE_PIN6_gc      = (0x76), /* Port E, Pin6 */
    EVSYS_CHMUX_PORTE_PIN7_gc      = (0x77), /* Port E, Pin7 */
    EVSYS_CHMUX_PORTF_PIN0_gc      = (0x78), /* Port F, Pin0 */
    EVSYS_CHMUX_PORTF_PIN1_gc      = (0x79), /* Port F, Pin1 */
    EVSYS_CHMUX_PORTF_PIN2_gc      = (0x7A), /* Port F, Pin2 */
    EVSYS_CHMUX_PORTF_PIN3_gc      = (0x7B), /* Port F, Pin3 */
    EVSYS_CHMUX_PORTF_PIN4_gc      = (0x7C), /* Port F, Pin4 */
    EVSYS_CHMUX_PORTF_PIN5_gc      = (0x7D), /* Port F, Pin5 */
    EVSYS_CHMUX_PORTF_PIN6_gc      = (0x7E), /* Port F, Pin6 */
    EVSYS_CHMUX_PORTF_PIN7_gc      = (0x7F), /* Port F, Pin7 */
    EVSYS_CHMUX_PRESCALER_1_gc     = (0x80), /* Prescaler, divide by 1 */
    EVSYS_CHMUX_PRESCALER_2_gc     = (0x81), /* Prescaler, divide by 2 */
    EVSYS_CHMUX_PRESCALER_4_gc     = (0x82), /* Prescaler, divide by 4 */
    EVSYS_CHMUX_PRESCALER_8_gc     = (0x83), /* Prescaler, divide by 8 */
    EVSYS_CHMUX_PRESCALER_16_gc    = (0x84), /* Prescaler, divide by 16 */
    EVSYS_CHMUX_PRESCALER_32_gc    = (0x85), /* Prescaler, divide by 32 */
    EVSYS_CHMUX_PRESCALER_64_gc    = (0x86), /* Prescaler, divide by 64 */
    EVSYS_CHMUX_PRESCALER_128_gc   = (0x87), /* Prescaler, divide by 128 */
    EVSYS_CHMUX_PRESCALER_256_gc   = (0x88), /* Prescaler, divide by 256 */
    EVSYS_CHMUX_PRESCALER_512_gc   = (0x89), /* Prescaler, divide by 512 */
    EVSYS_CHMUX_PRESCALER_1024_gc  = (0x8A), /* Prescaler, divide by 1024 */
    EVSYS_CHMUX_PRESCALER_2048_gc  = (0x8B), /* Prescaler, divide by 2048 */
    EVSYS_CHMUX_PRESCALER_4096_gc  = (0x8C), /* Prescaler, divide by 4096 */
    EVSYS_CHMUX_PRESCALER_8192_gc  = (0x8D), /* Prescaler, divide by 8192 */
    EVSYS_CHMUX_PRESCALER_16384_gc = (0x8E), /* Prescaler, divide by 16384 */
    EVSYS_CHMUX_PRESCALER_32768_gc = (0x8F), /* Prescaler, divide by 32768 */
    EVSYS_CHMUX_TCC0_OVF_gc        = (0xC0), /* Timer/Counter C0 Overflow */
    EVSYS_CHMUX_TCC0_ERR_gc        = (0xC1), /* Timer/Counter C0 Error */
    EVSYS_CHMUX_TCC0_CCA_gc        = (0xC4), /* Timer/Counter C0 Compare or Capture A */
    EVSYS_CHMUX_TCC0_CCB_gc        = (0xC5), /* Timer/Counter C0 Compare or Capture B */
    EVSYS_CHMUX_TCC0_CCC_gc        = (0xC6), /* Timer/Counter C0 Compare or Capture C */
    EVSYS_CHMUX_TCC0_CCD_gc        = (0xC7), /* Timer/Counter C0 Compare or Capture D */
    EVSYS_CHMUX_TCC1_OVF_gc        = (0xC8), /* Timer/Counter C1 Overflow */
    EVSYS_CHMUX_TCC1_ERR_gc        = (0xC9), /* Timer/Counter C1 Error */
    EVSYS_CHMUX_TCC1_CCA_gc        = (0xCC), /* Timer/Counter C1 Compare or Capture A */
    EVSYS_CHMUX_TCC1_CCB_gc        = (0xCD), /* Timer/Counter C1 Compare or Capture B */
    EVSYS_CHMUX_TCD0_OVF_gc        = (0xD0), /* Timer/Counter D0 Overflow */
    EVSYS_CHMUX_TCD0_ERR_gc        = (0xD1), /* Timer/Counter D0 Error */
    EVSYS_CHMUX_TCD0_CCA_gc        = (0xD4), /* Timer/Counter D0 Compare or Capture A */
    EVSYS_CHMUX_TCD0_CCB_gc        = (0xD5), /* Timer/Counter D0 Compare or Capture B */
    EVSYS_CHMUX_TCD0_CCC_gc        = (0xD6), /* Timer/Counter D0 Compare or Capture C */
    EVSYS_CHMUX_TCD0_CCD_gc        = (0xD7), /* Timer/Counter D0 Compare or Capture D */
    EVSYS_CHMUX_TCD1_OVF_gc        = (0xD8), /* Timer/Counter D1 Overflow */
    EVSYS_CHMUX_TCD1_ERR_gc        = (0xD9), /* Timer/Counter D1 Error */
    EVSYS_CHMUX_TCD1_CCA_gc        = (0xDC), /* Timer/Counter D1 Compare or Capture A */
    EVSYS_CHMUX_TCD1_CCB_gc        = (0xDD), /* Timer/Counter D1 Compare or Capture B */
    EVSYS_CHMUX_TCE0_OVF_gc        = (0xE0), /* Timer/Counter E0 Overflow */
    EVSYS_CHMUX_TCE0_ERR_gc        = (0xE1), /* Timer/Counter E0 Error */
    EVSYS_CHMUX_TCE0_CCA_gc        = (0xE4), /* Timer/Counter E0 Compare or Capture A */
    EVSYS_CHMUX_TCE0_CCB_gc        = (0xE5), /* Timer/Counter E0 Compare or Capture B */
    EVSYS_CHMUX_TCE0_CCC_gc        = (0xE6), /* Timer/Counter E0 Compare or Capture C */
    EVSYS_CHMUX_TCE0_CCD_gc        = (0xE7), /* Timer/Counter E0 Compare or Capture D */
    EVSYS_CHMUX_TCE1_OVF_gc        = (0xE8), /* Timer/Counter E1 Overflow */
    EVSYS_CHMUX_TCE1_ERR_gc        = (0xE9), /* Timer/Counter E1 Error */
    EVSYS_CHMUX_TCE1_CCA_gc        = (0xEC), /* Timer/Counter E1 Compare or Capture A */
    EVSYS_CHMUX_TCE1_CCB_gc        = (0xED), /* Timer/Counter E1 Compare or Capture B */
    EVSYS_CHMUX_TCF0_OVF_gc        = (0xF0), /* Timer/Counter F0 Overflow */
    EVSYS_CHMUX_TCF0_ERR_gc        = (0xF1), /* Timer/Counter F0 Error */
    EVSYS_CHMUX_TCF0_CCA_gc        = (0xF4), /* Timer/Counter F0 Compare or Capture A */
    EVSYS_CHMUX_TCF0_CCB_gc        = (0xF5), /* Timer/Counter F0 Compare or Capture B */
    EVSYS_CHMUX_TCF0_CCC_gc        = (0xF6), /* Timer/Counter F0 Compare or Capture C */
    EVSYS_CHMUX_TCF0_CCD_gc        = (0xF7), /* Timer/Counter F0 Compare or Capture D */
    EVSYS_CHMUX_TCF1_OVF_gc        = (0xF8), /* Timer/Counter F1 Overflow */
    EVSYS_CHMUX_TCF1_ERR_gc        = (0xF9), /* Timer/Counter F1 Error */
    EVSYS_CHMUX_TCF1_CCA_gc        = (0xFC), /* Timer/Counter F1 Compare or Capture A */
    EVSYS_CHMUX_TCF1_CCB_gc        = (0xFD), /* Timer/Counter F1 Compare or Capture B */
} EVSYS_CHMUX_t;

/* Event Channel 3 Multiplexer */
typedef enum EVSYS_CHMUX_enum
{
    EVSYS_CHMUX_OFF_gc             = (0x00), /* Off */
    EVSYS_CHMUX_RTC_OVF_gc         = (0x08), /* RTC Overflow */
    EVSYS_CHMUX_RTC_CMP_gc         = (0x09), /* RTC Compare Match */
    EVSYS_CHMUX_ACA_CH0_gc         = (0x10), /* Analog Comparator A Channel 0 */
    EVSYS_CHMUX_ACA_CH1_gc         = (0x11), /* Analog Comparator A Channel 1 */
    EVSYS_CHMUX_ACA_WIN_gc         = (0x12), /* Analog Comparator A Window */
    EVSYS_CHMUX_ACB_CH0_gc         = (0x13), /* Analog Comparator B Channel 0 */
    EVSYS_CHMUX_ACB_CH1_gc         = (0x14), /* Analog Comparator B Channel 1 */
    EVSYS_CHMUX_ACB_WIN_gc         = (0x15), /* Analog Comparator B Window */
    EVSYS_CHMUX_ADCA_CH0_gc        = (0x20), /* ADC A Channel 0 */
    EVSYS_CHMUX_ADCA_CH1_gc        = (0x21), /* ADC A Channel 1 */
    EVSYS_CHMUX_ADCA_CH2_gc        = (0x22), /* ADC A Channel 2 */
    EVSYS_CHMUX_ADCA_CH3_gc        = (0x23), /* ADC A Channel 3 */
    EVSYS_CHMUX_ADCB_CH0_gc        = (0x24), /* ADC B Channel 0 */
    EVSYS_CHMUX_ADCB_CH1_gc        = (0x25), /* ADC B Channel 1 */
    EVSYS_CHMUX_ADCB_CH2_gc        = (0x26), /* ADC B Channel 2 */
    EVSYS_CHMUX_ADCB_CH3_gc        = (0x27), /* ADC B Channel 3 */
    EVSYS_CHMUX_PORTA_PIN0_gc      = (0x50), /* Port A, Pin0 */
    EVSYS_CHMUX_PORTA_PIN1_gc      = (0x51), /* Port A, Pin1 */
    EVSYS_CHMUX_PORTA_PIN2_gc      = (0x52), /* Port A, Pin2 */
    EVSYS_CHMUX_PORTA_PIN3_gc      = (0x53), /* Port A, Pin3 */
    EVSYS_CHMUX_PORTA_PIN4_gc      = (0x54), /* Port A, Pin4 */
    EVSYS_CHMUX_PORTA_PIN5_gc      = (0x55), /* Port A, Pin5 */
    EVSYS_CHMUX_PORTA_PIN6_gc      = (0x56), /* Port A, Pin6 */
    EVSYS_CHMUX_PORTA_PIN7_gc      = (0x57), /* Port A, Pin7 */
    EVSYS_CHMUX_PORTB_PIN0_gc      = (0x58), /* Port B, Pin0 */
    EVSYS_CHMUX_PORTB_PIN1_gc      = (0x59), /* Port B, Pin1 */
    EVSYS_CHMUX_PORTB_PIN2_gc      = (0x5A), /* Port B, Pin2 */
    EVSYS_CHMUX_PORTB_PIN3_gc      = (0x5B), /* Port B, Pin3 */
    EVSYS_CHMUX_PORTB_PIN4_gc      = (0x5C), /* Port B, Pin4 */
    EVSYS_CHMUX_PORTB_PIN5_gc      = (0x5D), /* Port B, Pin5 */
    EVSYS_CHMUX_PORTB_PIN6_gc      = (0x5E), /* Port B, Pin6 */
    EVSYS_CHMUX_PORTB_PIN7_gc      = (0x5F), /* Port B, Pin7 */
    EVSYS_CHMUX_PORTC_PIN0_gc      = (0x60), /* Port C, Pin0 */
    EVSYS_CHMUX_PORTC_PIN1_gc      = (0x61), /* Port C, Pin1 */
    EVSYS_CHMUX_PORTC_PIN2_gc      = (0x62), /* Port C, Pin2 */
    EVSYS_CHMUX_PORTC_PIN3_gc      = (0x63), /* Port C, Pin3 */
    EVSYS_CHMUX_PORTC_PIN4_gc      = (0x64), /* Port C, Pin4 */
    EVSYS_CHMUX_PORTC_PIN5_gc      = (0x65), /* Port C, Pin5 */
    EVSYS_CHMUX_PORTC_PIN6_gc      = (0x66), /* Port C, Pin6 */
    EVSYS_CHMUX_PORTC_PIN7_gc      = (0x67), /* Port C, Pin7 */
    EVSYS_CHMUX_PORTD_PIN0_gc      = (0x68), /* Port D, Pin0 */
    EVSYS_CHMUX_PORTD_PIN1_gc      = (0x69), /* Port D, Pin1 */
    EVSYS_CHMUX_PORTD_PIN2_gc      = (0x6A), /* Port D, Pin2 */
    EVSYS_CHMUX_PORTD_PIN3_gc      = (0x6B), /* Port D, Pin3 */
    EVSYS_CHMUX_PORTD_PIN4_gc      = (0x6C), /* Port D, Pin4 */
    EVSYS_CHMUX_PORTD_PIN5_gc      = (0x6D), /* Port D, Pin5 */
    EVSYS_CHMUX_PORTD_PIN6_gc      = (0x6E), /* Port D, Pin6 */
    EVSYS_CHMUX_PORTD_PIN7_gc      = (0x6F), /* Port D, Pin7 */
    EVSYS_CHMUX_PORTE_PIN0_gc      = (0x70), /* Port E, Pin0 */
    EVSYS_CHMUX_PORTE_PIN1_gc      = (0x71), /* Port E, Pin1 */
    EVSYS_CHMUX_PORTE_PIN2_gc      = (0x72), /* Port E, Pin2 */
    EVSYS_CHMUX_PORTE_PIN3_gc      = (0x73), /* Port E, Pin3 */
    EVSYS_CHMUX_PORTE_PIN4_gc      = (0x74), /* Port E, Pin4 */
    EVSYS_CHMUX_PORTE_PIN5_gc      = (0x75), /* Port E, Pin5 */
    EVSYS_CHMUX_PORTE_PIN6_gc      = (0x76), /* Port E, Pin6 */
    EVSYS_CHMUX_PORTE_PIN7_gc      = (0x77), /* Port E, Pin7 */
    EVSYS_CHMUX_PORTF_PIN0_gc      = (0x78), /* Port F, Pin0 */
    EVSYS_CHMUX_PORTF_PIN1_gc      = (0x79), /* Port F, Pin1 */
    EVSYS_CHMUX_PORTF_PIN2_gc      = (0x7A), /* Port F, Pin2 */
    EVSYS_CHMUX_PORTF_PIN3_gc      = (0x7B), /* Port F, Pin3 */
    EVSYS_CHMUX_PORTF_PIN4_gc      = (0x7C), /* Port F, Pin4 */
    EVSYS_CHMUX_PORTF_PIN5_gc      = (0x7D), /* Port F, Pin5 */
    EVSYS_CHMUX_PORTF_PIN6_gc      = (0x7E), /* Port F, Pin6 */
    EVSYS_CHMUX_PORTF_PIN7_gc      = (0x7F), /* Port F, Pin7 */
    EVSYS_CHMUX_PRESCALER_1_gc     = (0x80), /* Prescaler, divide by 1 */
    EVSYS_CHMUX_PRESCALER_2_gc     = (0x81), /* Prescaler, divide by 2 */
    EVSYS_CHMUX_PRESCALER_4_gc     = (0x82), /* Prescaler, divide by 4 */
    EVSYS_CHMUX_PRESCALER_8_gc     = (0x83), /* Prescaler, divide by 8 */
    EVSYS_CHMUX_PRESCALER_16_gc    = (0x84), /* Prescaler, divide by 16 */
    EVSYS_CHMUX_PRESCALER_32_gc    = (0x85), /* Prescaler, divide by 32 */
    EVSYS_CHMUX_PRESCALER_64_gc    = (0x86), /* Prescaler, divide by 64 */
    EVSYS_CHMUX_PRESCALER_128_gc   = (0x87), /* Prescaler, divide by 128 */
    EVSYS_CHMUX_PRESCALER_256_gc   = (0x88), /* Prescaler, divide by 256 */
    EVSYS_CHMUX_PRESCALER_512_gc   = (0x89), /* Prescaler, divide by 512 */
    EVSYS_CHMUX_PRESCALER_1024_gc  = (0x8A), /* Prescaler, divide by 1024 */
    EVSYS_CHMUX_PRESCALER_2048_gc  = (0x8B), /* Prescaler, divide by 2048 */
    EVSYS_CHMUX_PRESCALER_4096_gc  = (0x8C), /* Prescaler, divide by 4096 */
    EVSYS_CHMUX_PRESCALER_8192_gc  = (0x8D), /* Prescaler, divide by 8192 */
    EVSYS_CHMUX_PRESCALER_16384_gc = (0x8E), /* Prescaler, divide by 16384 */
    EVSYS_CHMUX_PRESCALER_32768_gc = (0x8F), /* Prescaler, divide by 32768 */
    EVSYS_CHMUX_TCC0_OVF_gc        = (0xC0), /* Timer/Counter C0 Overflow */
    EVSYS_CHMUX_TCC0_ERR_gc        = (0xC1), /* Timer/Counter C0 Error */
    EVSYS_CHMUX_TCC0_CCA_gc        = (0xC4), /* Timer/Counter C0 Compare or Capture A */
    EVSYS_CHMUX_TCC0_CCB_gc        = (0xC5), /* Timer/Counter C0 Compare or Capture B */
    EVSYS_CHMUX_TCC0_CCC_gc        = (0xC6), /* Timer/Counter C0 Compare or Capture C */
    EVSYS_CHMUX_TCC0_CCD_gc        = (0xC7), /* Timer/Counter C0 Compare or Capture D */
    EVSYS_CHMUX_TCC1_OVF_gc        = (0xC8), /* Timer/Counter C1 Overflow */
    EVSYS_CHMUX_TCC1_ERR_gc        = (0xC9), /* Timer/Counter C1 Error */
    EVSYS_CHMUX_TCC1_CCA_gc        = (0xCC), /* Timer/Counter C1 Compare or Capture A */
    EVSYS_CHMUX_TCC1_CCB_gc        = (0xCD), /* Timer/Counter C1 Compare or Capture B */
    EVSYS_CHMUX_TCD0_OVF_gc        = (0xD0), /* Timer/Counter D0 Overflow */
    EVSYS_CHMUX_TCD0_ERR_gc        = (0xD1), /* Timer/Counter D0 Error */
    EVSYS_CHMUX_TCD0_CCA_gc        = (0xD4), /* Timer/Counter D0 Compare or Capture A */
    EVSYS_CHMUX_TCD0_CCB_gc        = (0xD5), /* Timer/Counter D0 Compare or Capture B */
    EVSYS_CHMUX_TCD0_CCC_gc        = (0xD6), /* Timer/Counter D0 Compare or Capture C */
    EVSYS_CHMUX_TCD0_CCD_gc        = (0xD7), /* Timer/Counter D0 Compare or Capture D */
    EVSYS_CHMUX_TCD1_OVF_gc        = (0xD8), /* Timer/Counter D1 Overflow */
    EVSYS_CHMUX_TCD1_ERR_gc        = (0xD9), /* Timer/Counter D1 Error */
    EVSYS_CHMUX_TCD1_CCA_gc        = (0xDC), /* Timer/Counter D1 Compare or Capture A */
    EVSYS_CHMUX_TCD1_CCB_gc        = (0xDD), /* Timer/Counter D1 Compare or Capture B */
    EVSYS_CHMUX_TCE0_OVF_gc        = (0xE0), /* Timer/Counter E0 Overflow */
    EVSYS_CHMUX_TCE0_ERR_gc        = (0xE1), /* Timer/Counter E0 Error */
    EVSYS_CHMUX_TCE0_CCA_gc        = (0xE4), /* Timer/Counter E0 Compare or Capture A */
    EVSYS_CHMUX_TCE0_CCB_gc        = (0xE5), /* Timer/Counter E0 Compare or Capture B */
    EVSYS_CHMUX_TCE0_CCC_gc        = (0xE6), /* Timer/Counter E0 Compare or Capture C */
    EVSYS_CHMUX_TCE0_CCD_gc        = (0xE7), /* Timer/Counter E0 Compare or Capture D */
    EVSYS_CHMUX_TCE1_OVF_gc        = (0xE8), /* Timer/Counter E1 Overflow */
    EVSYS_CHMUX_TCE1_ERR_gc        = (0xE9), /* Timer/Counter E1 Error */
    EVSYS_CHMUX_TCE1_CCA_gc        = (0xEC), /* Timer/Counter E1 Compare or Capture A */
    EVSYS_CHMUX_TCE1_CCB_gc        = (0xED), /* Timer/Counter E1 Compare or Capture B */
    EVSYS_CHMUX_TCF0_OVF_gc        = (0xF0), /* Timer/Counter F0 Overflow */
    EVSYS_CHMUX_TCF0_ERR_gc        = (0xF1), /* Timer/Counter F0 Error */
    EVSYS_CHMUX_TCF0_CCA_gc        = (0xF4), /* Timer/Counter F0 Compare or Capture A */
    EVSYS_CHMUX_TCF0_CCB_gc        = (0xF5), /* Timer/Counter F0 Compare or Capture B */
    EVSYS_CHMUX_TCF0_CCC_gc        = (0xF6), /* Timer/Counter F0 Compare or Capture C */
    EVSYS_CHMUX_TCF0_CCD_gc        = (0xF7), /* Timer/Counter F0 Compare or Capture D */
    EVSYS_CHMUX_TCF1_OVF_gc        = (0xF8), /* Timer/Counter F1 Overflow */
    EVSYS_CHMUX_TCF1_ERR_gc        = (0xF9), /* Timer/Counter F1 Error */
    EVSYS_CHMUX_TCF1_CCA_gc        = (0xFC), /* Timer/Counter F1 Compare or Capture A */
    EVSYS_CHMUX_TCF1_CCB_gc        = (0xFD), /* Timer/Counter F1 Compare or Capture B */
} EVSYS_CHMUX_t;

/* Event Channel 4 Multiplexer */
typedef enum EVSYS_CHMUX_enum
{
    EVSYS_CHMUX_OFF_gc             = (0x00), /* Off */
    EVSYS_CHMUX_RTC_OVF_gc         = (0x08), /* RTC Overflow */
    EVSYS_CHMUX_RTC_CMP_gc         = (0x09), /* RTC Compare Match */
    EVSYS_CHMUX_ACA_CH0_gc         = (0x10), /* Analog Comparator A Channel 0 */
    EVSYS_CHMUX_ACA_CH1_gc         = (0x11), /* Analog Comparator A Channel 1 */
    EVSYS_CHMUX_ACA_WIN_gc         = (0x12), /* Analog Comparator A Window */
    EVSYS_CHMUX_ACB_CH0_gc         = (0x13), /* Analog Comparator B Channel 0 */
    EVSYS_CHMUX_ACB_CH1_gc         = (0x14), /* Analog Comparator B Channel 1 */
    EVSYS_CHMUX_ACB_WIN_gc         = (0x15), /* Analog Comparator B Window */
    EVSYS_CHMUX_ADCA_CH0_gc        = (0x20), /* ADC A Channel 0 */
    EVSYS_CHMUX_ADCA_CH1_gc        = (0x21), /* ADC A Channel 1 */
    EVSYS_CHMUX_ADCA_CH2_gc        = (0x22), /* ADC A Channel 2 */
    EVSYS_CHMUX_ADCA_CH3_gc        = (0x23), /* ADC A Channel 3 */
    EVSYS_CHMUX_ADCB_CH0_gc        = (0x24), /* ADC B Channel 0 */
    EVSYS_CHMUX_ADCB_CH1_gc        = (0x25), /* ADC B Channel 1 */
    EVSYS_CHMUX_ADCB_CH2_gc        = (0x26), /* ADC B Channel 2 */
    EVSYS_CHMUX_ADCB_CH3_gc        = (0x27), /* ADC B Channel 3 */
    EVSYS_CHMUX_PORTA_PIN0_gc      = (0x50), /* Port A, Pin0 */
    EVSYS_CHMUX_PORTA_PIN1_gc      = (0x51), /* Port A, Pin1 */
    EVSYS_CHMUX_PORTA_PIN2_gc      = (0x52), /* Port A, Pin2 */
    EVSYS_CHMUX_PORTA_PIN3_gc      = (0x53), /* Port A, Pin3 */
    EVSYS_CHMUX_PORTA_PIN4_gc      = (0x54), /* Port A, Pin4 */
    EVSYS_CHMUX_PORTA_PIN5_gc      = (0x55), /* Port A, Pin5 */
    EVSYS_CHMUX_PORTA_PIN6_gc      = (0x56), /* Port A, Pin6 */
    EVSYS_CHMUX_PORTA_PIN7_gc      = (0x57), /* Port A, Pin7 */
    EVSYS_CHMUX_PORTB_PIN0_gc      = (0x58), /* Port B, Pin0 */
    EVSYS_CHMUX_PORTB_PIN1_gc      = (0x59), /* Port B, Pin1 */
    EVSYS_CHMUX_PORTB_PIN2_gc      = (0x5A), /* Port B, Pin2 */
    EVSYS_CHMUX_PORTB_PIN3_gc      = (0x5B), /* Port B, Pin3 */
    EVSYS_CHMUX_PORTB_PIN4_gc      = (0x5C), /* Port B, Pin4 */
    EVSYS_CHMUX_PORTB_PIN5_gc      = (0x5D), /* Port B, Pin5 */
    EVSYS_CHMUX_PORTB_PIN6_gc      = (0x5E), /* Port B, Pin6 */
    EVSYS_CHMUX_PORTB_PIN7_gc      = (0x5F), /* Port B, Pin7 */
    EVSYS_CHMUX_PORTC_PIN0_gc      = (0x60), /* Port C, Pin0 */
    EVSYS_CHMUX_PORTC_PIN1_gc      = (0x61), /* Port C, Pin1 */
    EVSYS_CHMUX_PORTC_PIN2_gc      = (0x62), /* Port C, Pin2 */
    EVSYS_CHMUX_PORTC_PIN3_gc      = (0x63), /* Port C, Pin3 */
    EVSYS_CHMUX_PORTC_PIN4_gc      = (0x64), /* Port C, Pin4 */
    EVSYS_CHMUX_PORTC_PIN5_gc      = (0x65), /* Port C, Pin5 */
    EVSYS_CHMUX_PORTC_PIN6_gc      = (0x66), /* Port C, Pin6 */
    EVSYS_CHMUX_PORTC_PIN7_gc      = (0x67), /* Port C, Pin7 */
    EVSYS_CHMUX_PORTD_PIN0_gc      = (0x68), /* Port D, Pin0 */
    EVSYS_CHMUX_PORTD_PIN1_gc      = (0x69), /* Port D, Pin1 */
    EVSYS_CHMUX_PORTD_PIN2_gc      = (0x6A), /* Port D, Pin2 */
    EVSYS_CHMUX_PORTD_PIN3_gc      = (0x6B), /* Port D, Pin3 */
    EVSYS_CHMUX_PORTD_PIN4_gc      = (0x6C), /* Port D, Pin4 */
    EVSYS_CHMUX_PORTD_PIN5_gc      = (0x6D), /* Port D, Pin5 */
    EVSYS_CHMUX_PORTD_PIN6_gc      = (0x6E), /* Port D, Pin6 */
    EVSYS_CHMUX_PORTD_PIN7_gc      = (0x6F), /* Port D, Pin7 */
    EVSYS_CHMUX_PORTE_PIN0_gc      = (0x70), /* Port E, Pin0 */
    EVSYS_CHMUX_PORTE_PIN1_gc      = (0x71), /* Port E, Pin1 */
    EVSYS_CHMUX_PORTE_PIN2_gc      = (0x72), /* Port E, Pin2 */
    EVSYS_CHMUX_PORTE_PIN3_gc      = (0x73), /* Port E, Pin3 */
    EVSYS_CHMUX_PORTE_PIN4_gc      = (0x74), /* Port E, Pin4 */
    EVSYS_CHMUX_PORTE_PIN5_gc      = (0x75), /* Port E, Pin5 */
    EVSYS_CHMUX_PORTE_PIN6_gc      = (0x76), /* Port E, Pin6 */
    EVSYS_CHMUX_PORTE_PIN7_gc      = (0x77), /* Port E, Pin7 */
    EVSYS_CHMUX_PORTF_PIN0_gc      = (0x78), /* Port F, Pin0 */
    EVSYS_CHMUX_PORTF_PIN1_gc      = (0x79), /* Port F, Pin1 */
    EVSYS_CHMUX_PORTF_PIN2_gc      = (0x7A), /* Port F, Pin2 */
    EVSYS_CHMUX_PORTF_PIN3_gc      = (0x7B), /* Port F, Pin3 */
    EVSYS_CHMUX_PORTF_PIN4_gc      = (0x7C), /* Port F, Pin4 */
    EVSYS_CHMUX_PORTF_PIN5_gc      = (0x7D), /* Port F, Pin5 */
    EVSYS_CHMUX_PORTF_PIN6_gc      = (0x7E), /* Port F, Pin6 */
    EVSYS_CHMUX_PORTF_PIN7_gc      = (0x7F), /* Port F, Pin7 */
    EVSYS_CHMUX_PRESCALER_1_gc     = (0x80), /* Prescaler, divide by 1 */
    EVSYS_CHMUX_PRESCALER_2_gc     = (0x81), /* Prescaler, divide by 2 */
    EVSYS_CHMUX_PRESCALER_4_gc     = (0x82), /* Prescaler, divide by 4 */
    EVSYS_CHMUX_PRESCALER_8_gc     = (0x83), /* Prescaler, divide by 8 */
    EVSYS_CHMUX_PRESCALER_16_gc    = (0x84), /* Prescaler, divide by 16 */
    EVSYS_CHMUX_PRESCALER_32_gc    = (0x85), /* Prescaler, divide by 32 */
    EVSYS_CHMUX_PRESCALER_64_gc    = (0x86), /* Prescaler, divide by 64 */
    EVSYS_CHMUX_PRESCALER_128_gc   = (0x87), /* Prescaler, divide by 128 */
    EVSYS_CHMUX_PRESCALER_256_gc   = (0x88), /* Prescaler, divide by 256 */
    EVSYS_CHMUX_PRESCALER_512_gc   = (0x89), /* Prescaler, divide by 512 */
    EVSYS_CHMUX_PRESCALER_1024_gc  = (0x8A), /* Prescaler, divide by 1024 */
    EVSYS_CHMUX_PRESCALER_2048_gc  = (0x8B), /* Prescaler, divide by 2048 */
    EVSYS_CHMUX_PRESCALER_4096_gc  = (0x8C), /* Prescaler, divide by 4096 */
    EVSYS_CHMUX_PRESCALER_8192_gc  = (0x8D), /* Prescaler, divide by 8192 */
    EVSYS_CHMUX_PRESCALER_16384_gc = (0x8E), /* Prescaler, divide by 16384 */
    EVSYS_CHMUX_PRESCALER_32768_gc = (0x8F), /* Prescaler, divide by 32768 */
    EVSYS_CHMUX_TCC0_OVF_gc        = (0xC0), /* Timer/Counter C0 Overflow */
    EVSYS_CHMUX_TCC0_ERR_gc        = (0xC1), /* Timer/Counter C0 Error */
    EVSYS_CHMUX_TCC0_CCA_gc        = (0xC4), /* Timer/Counter C0 Compare or Capture A */
    EVSYS_CHMUX_TCC0_CCB_gc        = (0xC5), /* Timer/Counter C0 Compare or Capture B */
    EVSYS_CHMUX_TCC0_CCC_gc        = (0xC6), /* Timer/Counter C0 Compare or Capture C */
    EVSYS_CHMUX_TCC0_CCD_gc        = (0xC7), /* Timer/Counter C0 Compare or Capture D */
    EVSYS_CHMUX_TCC1_OVF_gc        = (0xC8), /* Timer/Counter C1 Overflow */
    EVSYS_CHMUX_TCC1_ERR_gc        = (0xC9), /* Timer/Counter C1 Error */
    EVSYS_CHMUX_TCC1_CCA_gc        = (0xCC), /* Timer/Counter C1 Compare or Capture A */
    EVSYS_CHMUX_TCC1_CCB_gc        = (0xCD), /* Timer/Counter C1 Compare or Capture B */
    EVSYS_CHMUX_TCD0_OVF_gc        = (0xD0), /* Timer/Counter D0 Overflow */
    EVSYS_CHMUX_TCD0_ERR_gc        = (0xD1), /* Timer/Counter D0 Error */
    EVSYS_CHMUX_TCD0_CCA_gc        = (0xD4), /* Timer/Counter D0 Compare or Capture A */
    EVSYS_CHMUX_TCD0_CCB_gc        = (0xD5), /* Timer/Counter D0 Compare or Capture B */
    EVSYS_CHMUX_TCD0_CCC_gc        = (0xD6), /* Timer/Counter D0 Compare or Capture C */
    EVSYS_CHMUX_TCD0_CCD_gc        = (0xD7), /* Timer/Counter D0 Compare or Capture D */
    EVSYS_CHMUX_TCD1_OVF_gc        = (0xD8), /* Timer/Counter D1 Overflow */
    EVSYS_CHMUX_TCD1_ERR_gc        = (0xD9), /* Timer/Counter D1 Error */
    EVSYS_CHMUX_TCD1_CCA_gc        = (0xDC), /* Timer/Counter D1 Compare or Capture A */
    EVSYS_CHMUX_TCD1_CCB_gc        = (0xDD), /* Timer/Counter D1 Compare or Capture B */
    EVSYS_CHMUX_TCE0_OVF_gc        = (0xE0), /* Timer/Counter E0 Overflow */
    EVSYS_CHMUX_TCE0_ERR_gc        = (0xE1), /* Timer/Counter E0 Error */
    EVSYS_CHMUX_TCE0_CCA_gc        = (0xE4), /* Timer/Counter E0 Compare or Capture A */
    EVSYS_CHMUX_TCE0_CCB_gc        = (0xE5), /* Timer/Counter E0 Compare or Capture B */
    EVSYS_CHMUX_TCE0_CCC_gc        = (0xE6), /* Timer/Counter E0 Compare or Capture C */
    EVSYS_CHMUX_TCE0_CCD_gc        = (0xE7), /* Timer/Counter E0 Compare or Capture D */
    EVSYS_CHMUX_TCE1_OVF_gc        = (0xE8), /* Timer/Counter E1 Overflow */
    EVSYS_CHMUX_TCE1_ERR_gc        = (0xE9), /* Timer/Counter E1 Error */
    EVSYS_CHMUX_TCE1_CCA_gc        = (0xEC), /* Timer/Counter E1 Compare or Capture A */
    EVSYS_CHMUX_TCE1_CCB_gc        = (0xED), /* Timer/Counter E1 Compare or Capture B */
    EVSYS_CHMUX_TCF0_OVF_gc        = (0xF0), /* Timer/Counter F0 Overflow */
    EVSYS_CHMUX_TCF0_ERR_gc        = (0xF1), /* Timer/Counter F0 Error */
    EVSYS_CHMUX_TCF0_CCA_gc        = (0xF4), /* Timer/Counter F0 Compare or Capture A */
    EVSYS_CHMUX_TCF0_CCB_gc        = (0xF5), /* Timer/Counter F0 Compare or Capture B */
    EVSYS_CHMUX_TCF0_CCC_gc        = (0xF6), /* Timer/Counter F0 Compare or Capture C */
    EVSYS_CHMUX_TCF0_CCD_gc        = (0xF7), /* Timer/Counter F0 Compare or Capture D */
    EVSYS_CHMUX_TCF1_OVF_gc        = (0xF8), /* Timer/Counter F1 Overflow */
    EVSYS_CHMUX_TCF1_ERR_gc        = (0xF9), /* Timer/Counter F1 Error */
    EVSYS_CHMUX_TCF1_CCA_gc        = (0xFC), /* Timer/Counter F1 Compare or Capture A */
    EVSYS_CHMUX_TCF1_CCB_gc        = (0xFD), /* Timer/Counter F1 Compare or Capture B */
} EVSYS_CHMUX_t;

/* Event Channel 5 Multiplexer */
typedef enum EVSYS_CHMUX_enum
{
    EVSYS_CHMUX_OFF_gc             = (0x00), /* Off */
    EVSYS_CHMUX_RTC_OVF_gc         = (0x08), /* RTC Overflow */
    EVSYS_CHMUX_RTC_CMP_gc         = (0x09), /* RTC Compare Match */
    EVSYS_CHMUX_ACA_CH0_gc         = (0x10), /* Analog Comparator A Channel 0 */
    EVSYS_CHMUX_ACA_CH1_gc         = (0x11), /* Analog Comparator A Channel 1 */
    EVSYS_CHMUX_ACA_WIN_gc         = (0x12), /* Analog Comparator A Window */
    EVSYS_CHMUX_ACB_CH0_gc         = (0x13), /* Analog Comparator B Channel 0 */
    EVSYS_CHMUX_ACB_CH1_gc         = (0x14), /* Analog Comparator B Channel 1 */
    EVSYS_CHMUX_ACB_WIN_gc         = (0x15), /* Analog Comparator B Window */
    EVSYS_CHMUX_ADCA_CH0_gc        = (0x20), /* ADC A Channel 0 */
    EVSYS_CHMUX_ADCA_CH1_gc        = (0x21), /* ADC A Channel 1 */
    EVSYS_CHMUX_ADCA_CH2_gc        = (0x22), /* ADC A Channel 2 */
    EVSYS_CHMUX_ADCA_CH3_gc        = (0x23), /* ADC A Channel 3 */
    EVSYS_CHMUX_ADCB_CH0_gc        = (0x24), /* ADC B Channel 0 */
    EVSYS_CHMUX_ADCB_CH1_gc        = (0x25), /* ADC B Channel 1 */
    EVSYS_CHMUX_ADCB_CH2_gc        = (0x26), /* ADC B Channel 2 */
    EVSYS_CHMUX_ADCB_CH3_gc        = (0x27), /* ADC B Channel 3 */
    EVSYS_CHMUX_PORTA_PIN0_gc      = (0x50), /* Port A, Pin0 */
    EVSYS_CHMUX_PORTA_PIN1_gc      = (0x51), /* Port A, Pin1 */
    EVSYS_CHMUX_PORTA_PIN2_gc      = (0x52), /* Port A, Pin2 */
    EVSYS_CHMUX_PORTA_PIN3_gc      = (0x53), /* Port A, Pin3 */
    EVSYS_CHMUX_PORTA_PIN4_gc      = (0x54), /* Port A, Pin4 */
    EVSYS_CHMUX_PORTA_PIN5_gc      = (0x55), /* Port A, Pin5 */
    EVSYS_CHMUX_PORTA_PIN6_gc      = (0x56), /* Port A, Pin6 */
    EVSYS_CHMUX_PORTA_PIN7_gc      = (0x57), /* Port A, Pin7 */
    EVSYS_CHMUX_PORTB_PIN0_gc      = (0x58), /* Port B, Pin0 */
    EVSYS_CHMUX_PORTB_PIN1_gc      = (0x59), /* Port B, Pin1 */
    EVSYS_CHMUX_PORTB_PIN2_gc      = (0x5A), /* Port B, Pin2 */
    EVSYS_CHMUX_PORTB_PIN3_gc      = (0x5B), /* Port B, Pin3 */
    EVSYS_CHMUX_PORTB_PIN4_gc      = (0x5C), /* Port B, Pin4 */
    EVSYS_CHMUX_PORTB_PIN5_gc      = (0x5D), /* Port B, Pin5 */
    EVSYS_CHMUX_PORTB_PIN6_gc      = (0x5E), /* Port B, Pin6 */
    EVSYS_CHMUX_PORTB_PIN7_gc      = (0x5F), /* Port B, Pin7 */
    EVSYS_CHMUX_PORTC_PIN0_gc      = (0x60), /* Port C, Pin0 */
    EVSYS_CHMUX_PORTC_PIN1_gc      = (0x61), /* Port C, Pin1 */
    EVSYS_CHMUX_PORTC_PIN2_gc      = (0x62), /* Port C, Pin2 */
    EVSYS_CHMUX_PORTC_PIN3_gc      = (0x63), /* Port C, Pin3 */
    EVSYS_CHMUX_PORTC_PIN4_gc      = (0x64), /* Port C, Pin4 */
    EVSYS_CHMUX_PORTC_PIN5_gc      = (0x65), /* Port C, Pin5 */
    EVSYS_CHMUX_PORTC_PIN6_gc      = (0x66), /* Port C, Pin6 */
    EVSYS_CHMUX_PORTC_PIN7_gc      = (0x67), /* Port C, Pin7 */
    EVSYS_CHMUX_PORTD_PIN0_gc      = (0x68), /* Port D, Pin0 */
    EVSYS_CHMUX_PORTD_PIN1_gc      = (0x69), /* Port D, Pin1 */
    EVSYS_CHMUX_PORTD_PIN2_gc      = (0x6A), /* Port D, Pin2 */
    EVSYS_CHMUX_PORTD_PIN3_gc      = (0x6B), /* Port D, Pin3 */
    EVSYS_CHMUX_PORTD_PIN4_gc      = (0x6C), /* Port D, Pin4 */
    EVSYS_CHMUX_PORTD_PIN5_gc      = (0x6D), /* Port D, Pin5 */
    EVSYS_CHMUX_PORTD_PIN6_gc      = (0x6E), /* Port D, Pin6 */
    EVSYS_CHMUX_PORTD_PIN7_gc      = (0x6F), /* Port D, Pin7 */
    EVSYS_CHMUX_PORTE_PIN0_gc      = (0x70), /* Port E, Pin0 */
    EVSYS_CHMUX_PORTE_PIN1_gc      = (0x71), /* Port E, Pin1 */
    EVSYS_CHMUX_PORTE_PIN2_gc      = (0x72), /* Port E, Pin2 */
    EVSYS_CHMUX_PORTE_PIN3_gc      = (0x73), /* Port E, Pin3 */
    EVSYS_CHMUX_PORTE_PIN4_gc      = (0x74), /* Port E, Pin4 */
    EVSYS_CHMUX_PORTE_PIN5_gc      = (0x75), /* Port E, Pin5 */
    EVSYS_CHMUX_PORTE_PIN6_gc      = (0x76), /* Port E, Pin6 */
    EVSYS_CHMUX_PORTE_PIN7_gc      = (0x77), /* Port E, Pin7 */
    EVSYS_CHMUX_PORTF_PIN0_gc      = (0x78), /* Port F, Pin0 */
    EVSYS_CHMUX_PORTF_PIN1_gc      = (0x79), /* Port F, Pin1 */
    EVSYS_CHMUX_PORTF_PIN2_gc      = (0x7A), /* Port F, Pin2 */
    EVSYS_CHMUX_PORTF_PIN3_gc      = (0x7B), /* Port F, Pin3 */
    EVSYS_CHMUX_PORTF_PIN4_gc      = (0x7C), /* Port F, Pin4 */
    EVSYS_CHMUX_PORTF_PIN5_gc      = (0x7D), /* Port F, Pin5 */
    EVSYS_CHMUX_PORTF_PIN6_gc      = (0x7E), /* Port F, Pin6 */
    EVSYS_CHMUX_PORTF_PIN7_gc      = (0x7F), /* Port F, Pin7 */
    EVSYS_CHMUX_PRESCALER_1_gc     = (0x80), /* Prescaler, divide by 1 */
    EVSYS_CHMUX_PRESCALER_2_gc     = (0x81), /* Prescaler, divide by 2 */
    EVSYS_CHMUX_PRESCALER_4_gc     = (0x82), /* Prescaler, divide by 4 */
    EVSYS_CHMUX_PRESCALER_8_gc     = (0x83), /* Prescaler, divide by 8 */
    EVSYS_CHMUX_PRESCALER_16_gc    = (0x84), /* Prescaler, divide by 16 */
    EVSYS_CHMUX_PRESCALER_32_gc    = (0x85), /* Prescaler, divide by 32 */
    EVSYS_CHMUX_PRESCALER_64_gc    = (0x86), /* Prescaler, divide by 64 */
    EVSYS_CHMUX_PRESCALER_128_gc   = (0x87), /* Prescaler, divide by 128 */
    EVSYS_CHMUX_PRESCALER_256_gc   = (0x88), /* Prescaler, divide by 256 */
    EVSYS_CHMUX_PRESCALER_512_gc   = (0x89), /* Prescaler, divide by 512 */
    EVSYS_CHMUX_PRESCALER_1024_gc  = (0x8A), /* Prescaler, divide by 1024 */
    EVSYS_CHMUX_PRESCALER_2048_gc  = (0x8B), /* Prescaler, divide by 2048 */
    EVSYS_CHMUX_PRESCALER_4096_gc  = (0x8C), /* Prescaler, divide by 4096 */
    EVSYS_CHMUX_PRESCALER_8192_gc  = (0x8D), /* Prescaler, divide by 8192 */
    EVSYS_CHMUX_PRESCALER_16384_gc = (0x8E), /* Prescaler, divide by 16384 */
    EVSYS_CHMUX_PRESCALER_32768_gc = (0x8F), /* Prescaler, divide by 32768 */
    EVSYS_CHMUX_TCC0_OVF_gc        = (0xC0), /* Timer/Counter C0 Overflow */
    EVSYS_CHMUX_TCC0_ERR_gc        = (0xC1), /* Timer/Counter C0 Error */
    EVSYS_CHMUX_TCC0_CCA_gc        = (0xC4), /* Timer/Counter C0 Compare or Capture A */
    EVSYS_CHMUX_TCC0_CCB_gc        = (0xC5), /* Timer/Counter C0 Compare or Capture B */
    EVSYS_CHMUX_TCC0_CCC_gc        = (0xC6), /* Timer/Counter C0 Compare or Capture C */
    EVSYS_CHMUX_TCC0_CCD_gc        = (0xC7), /* Timer/Counter C0 Compare or Capture D */
    EVSYS_CHMUX_TCC1_OVF_gc        = (0xC8), /* Timer/Counter C1 Overflow */
    EVSYS_CHMUX_TCC1_ERR_gc        = (0xC9), /* Timer/Counter C1 Error */
    EVSYS_CHMUX_TCC1_CCA_gc        = (0xCC), /* Timer/Counter C1 Compare or Capture A */
    EVSYS_CHMUX_TCC1_CCB_gc        = (0xCD), /* Timer/Counter C1 Compare or Capture B */
    EVSYS_CHMUX_TCD0_OVF_gc        = (0xD0), /* Timer/Counter D0 Overflow */
    EVSYS_CHMUX_TCD0_ERR_gc        = (0xD1), /* Timer/Counter D0 Error */
    EVSYS_CHMUX_TCD0_CCA_gc        = (0xD4), /* Timer/Counter D0 Compare or Capture A */
    EVSYS_CHMUX_TCD0_CCB_gc        = (0xD5), /* Timer/Counter D0 Compare or Capture B */
    EVSYS_CHMUX_TCD0_CCC_gc        = (0xD6), /* Timer/Counter D0 Compare or Capture C */
    EVSYS_CHMUX_TCD0_CCD_gc        = (0xD7), /* Timer/Counter D0 Compare or Capture D */
    EVSYS_CHMUX_TCD1_OVF_gc        = (0xD8), /* Timer/Counter D1 Overflow */
    EVSYS_CHMUX_TCD1_ERR_gc        = (0xD9), /* Timer/Counter D1 Error */
    EVSYS_CHMUX_TCD1_CCA_gc        = (0xDC), /* Timer/Counter D1 Compare or Capture A */
    EVSYS_CHMUX_TCD1_CCB_gc        = (0xDD), /* Timer/Counter D1 Compare or Capture B */
    EVSYS_CHMUX_TCE0_OVF_gc        = (0xE0), /* Timer/Counter E0 Overflow */
    EVSYS_CHMUX_TCE0_ERR_gc        = (0xE1), /* Timer/Counter E0 Error */
    EVSYS_CHMUX_TCE0_CCA_gc        = (0xE4), /* Timer/Counter E0 Compare or Capture A */
    EVSYS_CHMUX_TCE0_CCB_gc        = (0xE5), /* Timer/Counter E0 Compare or Capture B */
    EVSYS_CHMUX_TCE0_CCC_gc        = (0xE6), /* Timer/Counter E0 Compare or Capture C */
    EVSYS_CHMUX_TCE0_CCD_gc        = (0xE7), /* Timer/Counter E0 Compare or Capture D */
    EVSYS_CHMUX_TCE1_OVF_gc        = (0xE8), /* Timer/Counter E1 Overflow */
    EVSYS_CHMUX_TCE1_ERR_gc        = (0xE9), /* Timer/Counter E1 Error */
    EVSYS_CHMUX_TCE1_CCA_gc        = (0xEC), /* Timer/Counter E1 Compare or Capture A */
    EVSYS_CHMUX_TCE1_CCB_gc        = (0xED), /* Timer/Counter E1 Compare or Capture B */
    EVSYS_CHMUX_TCF0_OVF_gc        = (0xF0), /* Timer/Counter F0 Overflow */
    EVSYS_CHMUX_TCF0_ERR_gc        = (0xF1), /* Timer/Counter F0 Error */
    EVSYS_CHMUX_TCF0_CCA_gc        = (0xF4), /* Timer/Counter F0 Compare or Capture A */
    EVSYS_CHMUX_TCF0_CCB_gc        = (0xF5), /* Timer/Counter F0 Compare or Capture B */
    EVSYS_CHMUX_TCF0_CCC_gc        = (0xF6), /* Timer/Counter F0 Compare or Capture C */
    EVSYS_CHMUX_TCF0_CCD_gc        = (0xF7), /* Timer/Counter F0 Compare or Capture D */
    EVSYS_CHMUX_TCF1_OVF_gc        = (0xF8), /* Timer/Counter F1 Overflow */
    EVSYS_CHMUX_TCF1_ERR_gc        = (0xF9), /* Timer/Counter F1 Error */
    EVSYS_CHMUX_TCF1_CCA_gc        = (0xFC), /* Timer/Counter F1 Compare or Capture A */
    EVSYS_CHMUX_TCF1_CCB_gc        = (0xFD), /* Timer/Counter F1 Compare or Capture B */
} EVSYS_CHMUX_t;

/* Event Channel 6 Multiplexer */
typedef enum EVSYS_CHMUX_enum
{
    EVSYS_CHMUX_OFF_gc             = (0x00), /* Off */
    EVSYS_CHMUX_RTC_OVF_gc         = (0x08), /* RTC Overflow */
    EVSYS_CHMUX_RTC_CMP_gc         = (0x09), /* RTC Compare Match */
    EVSYS_CHMUX_ACA_CH0_gc         = (0x10), /* Analog Comparator A Channel 0 */
    EVSYS_CHMUX_ACA_CH1_gc         = (0x11), /* Analog Comparator A Channel 1 */
    EVSYS_CHMUX_ACA_WIN_gc         = (0x12), /* Analog Comparator A Window */
    EVSYS_CHMUX_ACB_CH0_gc         = (0x13), /* Analog Comparator B Channel 0 */
    EVSYS_CHMUX_ACB_CH1_gc         = (0x14), /* Analog Comparator B Channel 1 */
    EVSYS_CHMUX_ACB_WIN_gc         = (0x15), /* Analog Comparator B Window */
    EVSYS_CHMUX_ADCA_CH0_gc        = (0x20), /* ADC A Channel 0 */
    EVSYS_CHMUX_ADCA_CH1_gc        = (0x21), /* ADC A Channel 1 */
    EVSYS_CHMUX_ADCA_CH2_gc        = (0x22), /* ADC A Channel 2 */
    EVSYS_CHMUX_ADCA_CH3_gc        = (0x23), /* ADC A Channel 3 */
    EVSYS_CHMUX_ADCB_CH0_gc        = (0x24), /* ADC B Channel 0 */
    EVSYS_CHMUX_ADCB_CH1_gc        = (0x25), /* ADC B Channel 1 */
    EVSYS_CHMUX_ADCB_CH2_gc        = (0x26), /* ADC B Channel 2 */
    EVSYS_CHMUX_ADCB_CH3_gc        = (0x27), /* ADC B Channel 3 */
    EVSYS_CHMUX_PORTA_PIN0_gc      = (0x50), /* Port A, Pin0 */
    EVSYS_CHMUX_PORTA_PIN1_gc      = (0x51), /* Port A, Pin1 */
    EVSYS_CHMUX_PORTA_PIN2_gc      = (0x52), /* Port A, Pin2 */
    EVSYS_CHMUX_PORTA_PIN3_gc      = (0x53), /* Port A, Pin3 */
    EVSYS_CHMUX_PORTA_PIN4_gc      = (0x54), /* Port A, Pin4 */
    EVSYS_CHMUX_PORTA_PIN5_gc      = (0x55), /* Port A, Pin5 */
    EVSYS_CHMUX_PORTA_PIN6_gc      = (0x56), /* Port A, Pin6 */
    EVSYS_CHMUX_PORTA_PIN7_gc      = (0x57), /* Port A, Pin7 */
    EVSYS_CHMUX_PORTB_PIN0_gc      = (0x58), /* Port B, Pin0 */
    EVSYS_CHMUX_PORTB_PIN1_gc      = (0x59), /* Port B, Pin1 */
    EVSYS_CHMUX_PORTB_PIN2_gc      = (0x5A), /* Port B, Pin2 */
    EVSYS_CHMUX_PORTB_PIN3_gc      = (0x5B), /* Port B, Pin3 */
    EVSYS_CHMUX_PORTB_PIN4_gc      = (0x5C), /* Port B, Pin4 */
    EVSYS_CHMUX_PORTB_PIN5_gc      = (0x5D), /* Port B, Pin5 */
    EVSYS_CHMUX_PORTB_PIN6_gc      = (0x5E), /* Port B, Pin6 */
    EVSYS_CHMUX_PORTB_PIN7_gc      = (0x5F), /* Port B, Pin7 */
    EVSYS_CHMUX_PORTC_PIN0_gc      = (0x60), /* Port C, Pin0 */
    EVSYS_CHMUX_PORTC_PIN1_gc      = (0x61), /* Port C, Pin1 */
    EVSYS_CHMUX_PORTC_PIN2_gc      = (0x62), /* Port C, Pin2 */
    EVSYS_CHMUX_PORTC_PIN3_gc      = (0x63), /* Port C, Pin3 */
    EVSYS_CHMUX_PORTC_PIN4_gc      = (0x64), /* Port C, Pin4 */
    EVSYS_CHMUX_PORTC_PIN5_gc      = (0x65), /* Port C, Pin5 */
    EVSYS_CHMUX_PORTC_PIN6_gc      = (0x66), /* Port C, Pin6 */
    EVSYS_CHMUX_PORTC_PIN7_gc      = (0x67), /* Port C, Pin7 */
    EVSYS_CHMUX_PORTD_PIN0_gc      = (0x68), /* Port D, Pin0 */
    EVSYS_CHMUX_PORTD_PIN1_gc      = (0x69), /* Port D, Pin1 */
    EVSYS_CHMUX_PORTD_PIN2_gc      = (0x6A), /* Port D, Pin2 */
    EVSYS_CHMUX_PORTD_PIN3_gc      = (0x6B), /* Port D, Pin3 */
    EVSYS_CHMUX_PORTD_PIN4_gc      = (0x6C), /* Port D, Pin4 */
    EVSYS_CHMUX_PORTD_PIN5_gc      = (0x6D), /* Port D, Pin5 */
    EVSYS_CHMUX_PORTD_PIN6_gc      = (0x6E), /* Port D, Pin6 */
    EVSYS_CHMUX_PORTD_PIN7_gc      = (0x6F), /* Port D, Pin7 */
    EVSYS_CHMUX_PORTE_PIN0_gc      = (0x70), /* Port E, Pin0 */
    EVSYS_CHMUX_PORTE_PIN1_gc      = (0x71), /* Port E, Pin1 */
    EVSYS_CHMUX_PORTE_PIN2_gc      = (0x72), /* Port E, Pin2 */
    EVSYS_CHMUX_PORTE_PIN3_gc      = (0x73), /* Port E, Pin3 */
    EVSYS_CHMUX_PORTE_PIN4_gc      = (0x74), /* Port E, Pin4 */
    EVSYS_CHMUX_PORTE_PIN5_gc      = (0x75), /* Port E, Pin5 */
    EVSYS_CHMUX_PORTE_PIN6_gc      = (0x76), /* Port E, Pin6 */
    EVSYS_CHMUX_PORTE_PIN7_gc      = (0x77), /* Port E, Pin7 */
    EVSYS_CHMUX_PORTF_PIN0_gc      = (0x78), /* Port F, Pin0 */
    EVSYS_CHMUX_PORTF_PIN1_gc      = (0x79), /* Port F, Pin1 */
    EVSYS_CHMUX_PORTF_PIN2_gc      = (0x7A), /* Port F, Pin2 */
    EVSYS_CHMUX_PORTF_PIN3_gc      = (0x7B), /* Port F, Pin3 */
    EVSYS_CHMUX_PORTF_PIN4_gc      = (0x7C), /* Port F, Pin4 */
    EVSYS_CHMUX_PORTF_PIN5_gc      = (0x7D), /* Port F, Pin5 */
    EVSYS_CHMUX_PORTF_PIN6_gc      = (0x7E), /* Port F, Pin6 */
    EVSYS_CHMUX_PORTF_PIN7_gc      = (0x7F), /* Port F, Pin7 */
    EVSYS_CHMUX_PRESCALER_1_gc     = (0x80), /* Prescaler, divide by 1 */
    EVSYS_CHMUX_PRESCALER_2_gc     = (0x81), /* Prescaler, divide by 2 */
    EVSYS_CHMUX_PRESCALER_4_gc     = (0x82), /* Prescaler, divide by 4 */
    EVSYS_CHMUX_PRESCALER_8_gc     = (0x83), /* Prescaler, divide by 8 */
    EVSYS_CHMUX_PRESCALER_16_gc    = (0x84), /* Prescaler, divide by 16 */
    EVSYS_CHMUX_PRESCALER_32_gc    = (0x85), /* Prescaler, divide by 32 */
    EVSYS_CHMUX_PRESCALER_64_gc    = (0x86), /* Prescaler, divide by 64 */
    EVSYS_CHMUX_PRESCALER_128_gc   = (0x87), /* Prescaler, divide by 128 */
    EVSYS_CHMUX_PRESCALER_256_gc   = (0x88), /* Prescaler, divide by 256 */
    EVSYS_CHMUX_PRESCALER_512_gc   = (0x89), /* Prescaler, divide by 512 */
    EVSYS_CHMUX_PRESCALER_1024_gc  = (0x8A), /* Prescaler, divide by 1024 */
    EVSYS_CHMUX_PRESCALER_2048_gc  = (0x8B), /* Prescaler, divide by 2048 */
    EVSYS_CHMUX_PRESCALER_4096_gc  = (0x8C), /* Prescaler, divide by 4096 */
    EVSYS_CHMUX_PRESCALER_8192_gc  = (0x8D), /* Prescaler, divide by 8192 */
    EVSYS_CHMUX_PRESCALER_16384_gc = (0x8E), /* Prescaler, divide by 16384 */
    EVSYS_CHMUX_PRESCALER_32768_gc = (0x8F), /* Prescaler, divide by 32768 */
    EVSYS_CHMUX_TCC0_OVF_gc        = (0xC0), /* Timer/Counter C0 Overflow */
    EVSYS_CHMUX_TCC0_ERR_gc        = (0xC1), /* Timer/Counter C0 Error */
    EVSYS_CHMUX_TCC0_CCA_gc        = (0xC4), /* Timer/Counter C0 Compare or Capture A */
    EVSYS_CHMUX_TCC0_CCB_gc        = (0xC5), /* Timer/Counter C0 Compare or Capture B */
    EVSYS_CHMUX_TCC0_CCC_gc        = (0xC6), /* Timer/Counter C0 Compare or Capture C */
    EVSYS_CHMUX_TCC0_CCD_gc        = (0xC7), /* Timer/Counter C0 Compare or Capture D */
    EVSYS_CHMUX_TCC1_OVF_gc        = (0xC8), /* Timer/Counter C1 Overflow */
    EVSYS_CHMUX_TCC1_ERR_gc        = (0xC9), /* Timer/Counter C1 Error */
    EVSYS_CHMUX_TCC1_CCA_gc        = (0xCC), /* Timer/Counter C1 Compare or Capture A */
    EVSYS_CHMUX_TCC1_CCB_gc        = (0xCD), /* Timer/Counter C1 Compare or Capture B */
    EVSYS_CHMUX_TCD0_OVF_gc        = (0xD0), /* Timer/Counter D0 Overflow */
    EVSYS_CHMUX_TCD0_ERR_gc        = (0xD1), /* Timer/Counter D0 Error */
    EVSYS_CHMUX_TCD0_CCA_gc        = (0xD4), /* Timer/Counter D0 Compare or Capture A */
    EVSYS_CHMUX_TCD0_CCB_gc        = (0xD5), /* Timer/Counter D0 Compare or Capture B */
    EVSYS_CHMUX_TCD0_CCC_gc        = (0xD6), /* Timer/Counter D0 Compare or Capture C */
    EVSYS_CHMUX_TCD0_CCD_gc        = (0xD7), /* Timer/Counter D0 Compare or Capture D */
    EVSYS_CHMUX_TCD1_OVF_gc        = (0xD8), /* Timer/Counter D1 Overflow */
    EVSYS_CHMUX_TCD1_ERR_gc        = (0xD9), /* Timer/Counter D1 Error */
    EVSYS_CHMUX_TCD1_CCA_gc        = (0xDC), /* Timer/Counter D1 Compare or Capture A */
    EVSYS_CHMUX_TCD1_CCB_gc        = (0xDD), /* Timer/Counter D1 Compare or Capture B */
    EVSYS_CHMUX_TCE0_OVF_gc        = (0xE0), /* Timer/Counter E0 Overflow */
    EVSYS_CHMUX_TCE0_ERR_gc        = (0xE1), /* Timer/Counter E0 Error */
    EVSYS_CHMUX_TCE0_CCA_gc        = (0xE4), /* Timer/Counter E0 Compare or Capture A */
    EVSYS_CHMUX_TCE0_CCB_gc        = (0xE5), /* Timer/Counter E0 Compare or Capture B */
    EVSYS_CHMUX_TCE0_CCC_gc        = (0xE6), /* Timer/Counter E0 Compare or Capture C */
    EVSYS_CHMUX_TCE0_CCD_gc        = (0xE7), /* Timer/Counter E0 Compare or Capture D */
    EVSYS_CHMUX_TCE1_OVF_gc        = (0xE8), /* Timer/Counter E1 Overflow */
    EVSYS_CHMUX_TCE1_ERR_gc        = (0xE9), /* Timer/Counter E1 Error */
    EVSYS_CHMUX_TCE1_CCA_gc        = (0xEC), /* Timer/Counter E1 Compare or Capture A */
    EVSYS_CHMUX_TCE1_CCB_gc        = (0xED), /* Timer/Counter E1 Compare or Capture B */
    EVSYS_CHMUX_TCF0_OVF_gc        = (0xF0), /* Timer/Counter F0 Overflow */
    EVSYS_CHMUX_TCF0_ERR_gc        = (0xF1), /* Timer/Counter F0 Error */
    EVSYS_CHMUX_TCF0_CCA_gc        = (0xF4), /* Timer/Counter F0 Compare or Capture A */
    EVSYS_CHMUX_TCF0_CCB_gc        = (0xF5), /* Timer/Counter F0 Compare or Capture B */
    EVSYS_CHMUX_TCF0_CCC_gc        = (0xF6), /* Timer/Counter F0 Compare or Capture C */
    EVSYS_CHMUX_TCF0_CCD_gc        = (0xF7), /* Timer/Counter F0 Compare or Capture D */
    EVSYS_CHMUX_TCF1_OVF_gc        = (0xF8), /* Timer/Counter F1 Overflow */
    EVSYS_CHMUX_TCF1_ERR_gc        = (0xF9), /* Timer/Counter F1 Error */
    EVSYS_CHMUX_TCF1_CCA_gc        = (0xFC), /* Timer/Counter F1 Compare or Capture A */
    EVSYS_CHMUX_TCF1_CCB_gc        = (0xFD), /* Timer/Counter F1 Compare or Capture B */
} EVSYS_CHMUX_t;

/* Event Channel 7 Multiplexer */
typedef enum EVSYS_CHMUX_enum
{
    EVSYS_CHMUX_OFF_gc             = (0x00), /* Off */
    EVSYS_CHMUX_RTC_OVF_gc         = (0x08), /* RTC Overflow */
    EVSYS_CHMUX_RTC_CMP_gc         = (0x09), /* RTC Compare Match */
    EVSYS_CHMUX_ACA_CH0_gc         = (0x10), /* Analog Comparator A Channel 0 */
    EVSYS_CHMUX_ACA_CH1_gc         = (0x11), /* Analog Comparator A Channel 1 */
    EVSYS_CHMUX_ACA_WIN_gc         = (0x12), /* Analog Comparator A Window */
    EVSYS_CHMUX_ACB_CH0_gc         = (0x13), /* Analog Comparator B Channel 0 */
    EVSYS_CHMUX_ACB_CH1_gc         = (0x14), /* Analog Comparator B Channel 1 */
    EVSYS_CHMUX_ACB_WIN_gc         = (0x15), /* Analog Comparator B Window */
    EVSYS_CHMUX_ADCA_CH0_gc        = (0x20), /* ADC A Channel 0 */
    EVSYS_CHMUX_ADCA_CH1_gc        = (0x21), /* ADC A Channel 1 */
    EVSYS_CHMUX_ADCA_CH2_gc        = (0x22), /* ADC A Channel 2 */
    EVSYS_CHMUX_ADCA_CH3_gc        = (0x23), /* ADC A Channel 3 */
    EVSYS_CHMUX_ADCB_CH0_gc        = (0x24), /* ADC B Channel 0 */
    EVSYS_CHMUX_ADCB_CH1_gc        = (0x25), /* ADC B Channel 1 */
    EVSYS_CHMUX_ADCB_CH2_gc        = (0x26), /* ADC B Channel 2 */
    EVSYS_CHMUX_ADCB_CH3_gc        = (0x27), /* ADC B Channel 3 */
    EVSYS_CHMUX_PORTA_PIN0_gc      = (0x50), /* Port A, Pin0 */
    EVSYS_CHMUX_PORTA_PIN1_gc      = (0x51), /* Port A, Pin1 */
    EVSYS_CHMUX_PORTA_PIN2_gc      = (0x52), /* Port A, Pin2 */
    EVSYS_CHMUX_PORTA_PIN3_gc      = (0x53), /* Port A, Pin3 */
    EVSYS_CHMUX_PORTA_PIN4_gc      = (0x54), /* Port A, Pin4 */
    EVSYS_CHMUX_PORTA_PIN5_gc      = (0x55), /* Port A, Pin5 */
    EVSYS_CHMUX_PORTA_PIN6_gc      = (0x56), /* Port A, Pin6 */
    EVSYS_CHMUX_PORTA_PIN7_gc      = (0x57), /* Port A, Pin7 */
    EVSYS_CHMUX_PORTB_PIN0_gc      = (0x58), /* Port B, Pin0 */
    EVSYS_CHMUX_PORTB_PIN1_gc      = (0x59), /* Port B, Pin1 */
    EVSYS_CHMUX_PORTB_PIN2_gc      = (0x5A), /* Port B, Pin2 */
    EVSYS_CHMUX_PORTB_PIN3_gc      = (0x5B), /* Port B, Pin3 */
    EVSYS_CHMUX_PORTB_PIN4_gc      = (0x5C), /* Port B, Pin4 */
    EVSYS_CHMUX_PORTB_PIN5_gc      = (0x5D), /* Port B, Pin5 */
    EVSYS_CHMUX_PORTB_PIN6_gc      = (0x5E), /* Port B, Pin6 */
    EVSYS_CHMUX_PORTB_PIN7_gc      = (0x5F), /* Port B, Pin7 */
    EVSYS_CHMUX_PORTC_PIN0_gc      = (0x60), /* Port C, Pin0 */
    EVSYS_CHMUX_PORTC_PIN1_gc      = (0x61), /* Port C, Pin1 */
    EVSYS_CHMUX_PORTC_PIN2_gc      = (0x62), /* Port C, Pin2 */
    EVSYS_CHMUX_PORTC_PIN3_gc      = (0x63), /* Port C, Pin3 */
    EVSYS_CHMUX_PORTC_PIN4_gc      = (0x64), /* Port C, Pin4 */
    EVSYS_CHMUX_PORTC_PIN5_gc      = (0x65), /* Port C, Pin5 */
    EVSYS_CHMUX_PORTC_PIN6_gc      = (0x66), /* Port C, Pin6 */
    EVSYS_CHMUX_PORTC_PIN7_gc      = (0x67), /* Port C, Pin7 */
    EVSYS_CHMUX_PORTD_PIN0_gc      = (0x68), /* Port D, Pin0 */
    EVSYS_CHMUX_PORTD_PIN1_gc      = (0x69), /* Port D, Pin1 */
    EVSYS_CHMUX_PORTD_PIN2_gc      = (0x6A), /* Port D, Pin2 */
    EVSYS_CHMUX_PORTD_PIN3_gc      = (0x6B), /* Port D, Pin3 */
    EVSYS_CHMUX_PORTD_PIN4_gc      = (0x6C), /* Port D, Pin4 */
    EVSYS_CHMUX_PORTD_PIN5_gc      = (0x6D), /* Port D, Pin5 */
    EVSYS_CHMUX_PORTD_PIN6_gc      = (0x6E), /* Port D, Pin6 */
    EVSYS_CHMUX_PORTD_PIN7_gc      = (0x6F), /* Port D, Pin7 */
    EVSYS_CHMUX_PORTE_PIN0_gc      = (0x70), /* Port E, Pin0 */
    EVSYS_CHMUX_PORTE_PIN1_gc      = (0x71), /* Port E, Pin1 */
    EVSYS_CHMUX_PORTE_PIN2_gc      = (0x72), /* Port E, Pin2 */
    EVSYS_CHMUX_PORTE_PIN3_gc      = (0x73), /* Port E, Pin3 */
    EVSYS_CHMUX_PORTE_PIN4_gc      = (0x74), /* Port E, Pin4 */
    EVSYS_CHMUX_PORTE_PIN5_gc      = (0x75), /* Port E, Pin5 */
    EVSYS_CHMUX_PORTE_PIN6_gc      = (0x76), /* Port E, Pin6 */
    EVSYS_CHMUX_PORTE_PIN7_gc      = (0x77), /* Port E, Pin7 */
    EVSYS_CHMUX_PORTF_PIN0_gc      = (0x78), /* Port F, Pin0 */
    EVSYS_CHMUX_PORTF_PIN1_gc      = (0x79), /* Port F, Pin1 */
    EVSYS_CHMUX_PORTF_PIN2_gc      = (0x7A), /* Port F, Pin2 */
    EVSYS_CHMUX_PORTF_PIN3_gc      = (0x7B), /* Port F, Pin3 */
    EVSYS_CHMUX_PORTF_PIN4_gc      = (0x7C), /* Port F, Pin4 */
    EVSYS_CHMUX_PORTF_PIN5_gc      = (0x7D), /* Port F, Pin5 */
    EVSYS_CHMUX_PORTF_PIN6_gc      = (0x7E), /* Port F, Pin6 */
    EVSYS_CHMUX_PORTF_PIN7_gc      = (0x7F), /* Port F, Pin7 */
    EVSYS_CHMUX_PRESCALER_1_gc     = (0x80), /* Prescaler, divide by 1 */
    EVSYS_CHMUX_PRESCALER_2_gc     = (0x81), /* Prescaler, divide by 2 */
    EVSYS_CHMUX_PRESCALER_4_gc     = (0x82), /* Prescaler, divide by 4 */
    EVSYS_CHMUX_PRESCALER_8_gc     = (0x83), /* Prescaler, divide by 8 */
    EVSYS_CHMUX_PRESCALER_16_gc    = (0x84), /* Prescaler, divide by 16 */
    EVSYS_CHMUX_PRESCALER_32_gc    = (0x85), /* Prescaler, divide by 32 */
    EVSYS_CHMUX_PRESCALER_64_gc    = (0x86), /* Prescaler, divide by 64 */
    EVSYS_CHMUX_PRESCALER_128_gc   = (0x87), /* Prescaler, divide by 128 */
    EVSYS_CHMUX_PRESCALER_256_gc   = (0x88), /* Prescaler, divide by 256 */
    EVSYS_CHMUX_PRESCALER_512_gc   = (0x89), /* Prescaler, divide by 512 */
    EVSYS_CHMUX_PRESCALER_1024_gc  = (0x8A), /* Prescaler, divide by 1024 */
    EVSYS_CHMUX_PRESCALER_2048_gc  = (0x8B), /* Prescaler, divide by 2048 */
    EVSYS_CHMUX_PRESCALER_4096_gc  = (0x8C), /* Prescaler, divide by 4096 */
    EVSYS_CHMUX_PRESCALER_8192_gc  = (0x8D), /* Prescaler, divide by 8192 */
    EVSYS_CHMUX_PRESCALER_16384_gc = (0x8E), /* Prescaler, divide by 16384 */
    EVSYS_CHMUX_PRESCALER_32768_gc = (0x8F), /* Prescaler, divide by 32768 */
    EVSYS_CHMUX_TCC0_OVF_gc        = (0xC0), /* Timer/Counter C0 Overflow */
    EVSYS_CHMUX_TCC0_ERR_gc        = (0xC1), /* Timer/Counter C0 Error */
    EVSYS_CHMUX_TCC0_CCA_gc        = (0xC4), /* Timer/Counter C0 Compare or Capture A */
    EVSYS_CHMUX_TCC0_CCB_gc        = (0xC5), /* Timer/Counter C0 Compare or Capture B */
    EVSYS_CHMUX_TCC0_CCC_gc        = (0xC6), /* Timer/Counter C0 Compare or Capture C */
    EVSYS_CHMUX_TCC0_CCD_gc        = (0xC7), /* Timer/Counter C0 Compare or Capture D */
    EVSYS_CHMUX_TCC1_OVF_gc        = (0xC8), /* Timer/Counter C1 Overflow */
    EVSYS_CHMUX_TCC1_ERR_gc        = (0xC9), /* Timer/Counter C1 Error */
    EVSYS_CHMUX_TCC1_CCA_gc        = (0xCC), /* Timer/Counter C1 Compare or Capture A */
    EVSYS_CHMUX_TCC1_CCB_gc        = (0xCD), /* Timer/Counter C1 Compare or Capture B */
    EVSYS_CHMUX_TCD0_OVF_gc        = (0xD0), /* Timer/Counter D0 Overflow */
    EVSYS_CHMUX_TCD0_ERR_gc        = (0xD1), /* Timer/Counter D0 Error */
    EVSYS_CHMUX_TCD0_CCA_gc        = (0xD4), /* Timer/Counter D0 Compare or Capture A */
    EVSYS_CHMUX_TCD0_CCB_gc        = (0xD5), /* Timer/Counter D0 Compare or Capture B */
    EVSYS_CHMUX_TCD0_CCC_gc        = (0xD6), /* Timer/Counter D0 Compare or Capture C */
    EVSYS_CHMUX_TCD0_CCD_gc        = (0xD7), /* Timer/Counter D0 Compare or Capture D */
    EVSYS_CHMUX_TCD1_OVF_gc        = (0xD8), /* Timer/Counter D1 Overflow */
    EVSYS_CHMUX_TCD1_ERR_gc        = (0xD9), /* Timer/Counter D1 Error */
    EVSYS_CHMUX_TCD1_CCA_gc        = (0xDC), /* Timer/Counter D1 Compare or Capture A */
    EVSYS_CHMUX_TCD1_CCB_gc        = (0xDD), /* Timer/Counter D1 Compare or Capture B */
    EVSYS_CHMUX_TCE0_OVF_gc        = (0xE0), /* Timer/Counter E0 Overflow */
    EVSYS_CHMUX_TCE0_ERR_gc        = (0xE1), /* Timer/Counter E0 Error */
    EVSYS_CHMUX_TCE0_CCA_gc        = (0xE4), /* Timer/Counter E0 Compare or Capture A */
    EVSYS_CHMUX_TCE0_CCB_gc        = (0xE5), /* Timer/Counter E0 Compare or Capture B */
    EVSYS_CHMUX_TCE0_CCC_gc        = (0xE6), /* Timer/Counter E0 Compare or Capture C */
    EVSYS_CHMUX_TCE0_CCD_gc        = (0xE7), /* Timer/Counter E0 Compare or Capture D */
    EVSYS_CHMUX_TCE1_OVF_gc        = (0xE8), /* Timer/Counter E1 Overflow */
    EVSYS_CHMUX_TCE1_ERR_gc        = (0xE9), /* Timer/Counter E1 Error */
    EVSYS_CHMUX_TCE1_CCA_gc        = (0xEC), /* Timer/Counter E1 Compare or Capture A */
    EVSYS_CHMUX_TCE1_CCB_gc        = (0xED), /* Timer/Counter E1 Compare or Capture B */
    EVSYS_CHMUX_TCF0_OVF_gc        = (0xF0), /* Timer/Counter F0 Overflow */
    EVSYS_CHMUX_TCF0_ERR_gc        = (0xF1), /* Timer/Counter F0 Error */
    EVSYS_CHMUX_TCF0_CCA_gc        = (0xF4), /* Timer/Counter F0 Compare or Capture A */
    EVSYS_CHMUX_TCF0_CCB_gc        = (0xF5), /* Timer/Counter F0 Compare or Capture B */
    EVSYS_CHMUX_TCF0_CCC_gc        = (0xF6), /* Timer/Counter F0 Compare or Capture C */
    EVSYS_CHMUX_TCF0_CCD_gc        = (0xF7), /* Timer/Counter F0 Compare or Capture D */
    EVSYS_CHMUX_TCF1_OVF_gc        = (0xF8), /* Timer/Counter F1 Overflow */
    EVSYS_CHMUX_TCF1_ERR_gc        = (0xF9), /* Timer/Counter F1 Error */
    EVSYS_CHMUX_TCF1_CCA_gc        = (0xFC), /* Timer/Counter F1 Compare or Capture A */
    EVSYS_CHMUX_TCF1_CCB_gc        = (0xFD), /* Timer/Counter F1 Compare or Capture B */
} EVSYS_CHMUX_t;

/* Quadrature Decoder Index Recognition Mode */
#define EVSYS_CH0CTRL_QDIRM_gc(x) ((x<<5) & 0x60)

/* Quadrature Decoder Index Enable */
typedef enum EVSYS_QDIEN_enum
{
    EVSYS_QDIEN_CLEAR_gc = (0x00), /* Quadrature Decoder Index Enable - CLEAR */
    EVSYS_QDIEN_SET_gc   = (0x10), /* Quadrature Decoder Index Enable - SET */
} EVSYS_QDIEN_t;

/* Quadrature Decoder Enable */
typedef enum EVSYS_QDEN_enum
{
    EVSYS_QDEN_CLEAR_gc = (0x00), /* Quadrature Decoder Enable - CLEAR */
    EVSYS_QDEN_SET_gc   = (0x08), /* Quadrature Decoder Enable - SET */
} EVSYS_QDEN_t;

/* Digital Filter */
typedef enum EVSYS_DIGFILT_enum
{
    EVSYS_DIGFILT_1SAMPLE_gc  = (0x00), /* 1 SAMPLE */
    EVSYS_DIGFILT_2SAMPLES_gc = (0x01), /* 2 SAMPLES */
    EVSYS_DIGFILT_3SAMPLES_gc = (0x02), /* 3 SAMPLES */
    EVSYS_DIGFILT_4SAMPLES_gc = (0x03), /* 4 SAMPLES */
    EVSYS_DIGFILT_5SAMPLES_gc = (0x04), /* 5 SAMPLES */
    EVSYS_DIGFILT_6SAMPLES_gc = (0x05), /* 6 SAMPLES */
    EVSYS_DIGFILT_7SAMPLES_gc = (0x06), /* 7 SAMPLES */
    EVSYS_DIGFILT_8SAMPLES_gc = (0x07), /* 8 SAMPLES */
} EVSYS_DIGFILT_t;

/* Digital Filter */
typedef enum EVSYS_DIGFILT_enum
{
    EVSYS_DIGFILT_1SAMPLE_gc  = (0x00), /* 1 SAMPLE */
    EVSYS_DIGFILT_2SAMPLES_gc = (0x01), /* 2 SAMPLES */
    EVSYS_DIGFILT_3SAMPLES_gc = (0x02), /* 3 SAMPLES */
    EVSYS_DIGFILT_4SAMPLES_gc = (0x03), /* 4 SAMPLES */
    EVSYS_DIGFILT_5SAMPLES_gc = (0x04), /* 5 SAMPLES */
    EVSYS_DIGFILT_6SAMPLES_gc = (0x05), /* 6 SAMPLES */
    EVSYS_DIGFILT_7SAMPLES_gc = (0x06), /* 7 SAMPLES */
    EVSYS_DIGFILT_8SAMPLES_gc = (0x07), /* 8 SAMPLES */
} EVSYS_DIGFILT_t;

/* Quadrature Decoder Index Recognition Mode */
typedef enum EVSYS_QDIRM_enum
{
    EVSYS_QDIRM_00_gc = (0x00<<5), /* QDPH0 = 0, QDPH90 = 0 */
    EVSYS_QDIRM_01_gc = (0x01<<5), /* QDPH0 = 0, QDPH90 = 1 */
    EVSYS_QDIRM_10_gc = (0x02<<5), /* QDPH0 = 1, QDPH90 = 0 */
    EVSYS_QDIRM_11_gc = (0x03<<5), /* QDPH0 = 1, QDPH90 = 1 */
} EVSYS_QDIRM_t;

/* Quadrature Decoder Index Enable */
typedef enum EVSYS_QDIEN_enum
{
    EVSYS_QDIEN_CLEAR_gc = (0x00), /* Quadrature Decoder Index Enable - CLEAR */
    EVSYS_QDIEN_SET_gc   = (0x10), /* Quadrature Decoder Index Enable - SET */
} EVSYS_QDIEN_t;

/* Quadrature Decoder Enable */
typedef enum EVSYS_QDEN_enum
{
    EVSYS_QDEN_CLEAR_gc = (0x00), /* Quadrature Decoder Enable - CLEAR */
    EVSYS_QDEN_SET_gc   = (0x08), /* Quadrature Decoder Enable - SET */
} EVSYS_QDEN_t;

/* Digital Filter */
typedef enum EVSYS_DIGFILT_enum
{
    EVSYS_DIGFILT_1SAMPLE_gc  = (0x00), /* 1 SAMPLE */
    EVSYS_DIGFILT_2SAMPLES_gc = (0x01), /* 2 SAMPLES */
    EVSYS_DIGFILT_3SAMPLES_gc = (0x02), /* 3 SAMPLES */
    EVSYS_DIGFILT_4SAMPLES_gc = (0x03), /* 4 SAMPLES */
    EVSYS_DIGFILT_5SAMPLES_gc = (0x04), /* 5 SAMPLES */
    EVSYS_DIGFILT_6SAMPLES_gc = (0x05), /* 6 SAMPLES */
    EVSYS_DIGFILT_7SAMPLES_gc = (0x06), /* 7 SAMPLES */
    EVSYS_DIGFILT_8SAMPLES_gc = (0x07), /* 8 SAMPLES */
} EVSYS_DIGFILT_t;

/* Digital Filter */
typedef enum EVSYS_DIGFILT_enum
{
    EVSYS_DIGFILT_1SAMPLE_gc  = (0x00), /* 1 SAMPLE */
    EVSYS_DIGFILT_2SAMPLES_gc = (0x01), /* 2 SAMPLES */
    EVSYS_DIGFILT_3SAMPLES_gc = (0x02), /* 3 SAMPLES */
    EVSYS_DIGFILT_4SAMPLES_gc = (0x03), /* 4 SAMPLES */
    EVSYS_DIGFILT_5SAMPLES_gc = (0x04), /* 5 SAMPLES */
    EVSYS_DIGFILT_6SAMPLES_gc = (0x05), /* 6 SAMPLES */
    EVSYS_DIGFILT_7SAMPLES_gc = (0x06), /* 7 SAMPLES */
    EVSYS_DIGFILT_8SAMPLES_gc = (0x07), /* 8 SAMPLES */
} EVSYS_DIGFILT_t;

/* Quadrature Decoder Index Recognition Mode */
typedef enum EVSYS_QDIRM_enum
{
    EVSYS_QDIRM_00_gc = (0x00<<5), /* QDPH0 = 0, QDPH90 = 0 */
    EVSYS_QDIRM_01_gc = (0x01<<5), /* QDPH0 = 0, QDPH90 = 1 */
    EVSYS_QDIRM_10_gc = (0x02<<5), /* QDPH0 = 1, QDPH90 = 0 */
    EVSYS_QDIRM_11_gc = (0x03<<5), /* QDPH0 = 1, QDPH90 = 1 */
} EVSYS_QDIRM_t;

/* Quadrature Decoder Index Enable */
typedef enum EVSYS_QDIEN_enum
{
    EVSYS_QDIEN_CLEAR_gc = (0x00), /* Quadrature Decoder Index Enable - CLEAR */
    EVSYS_QDIEN_SET_gc   = (0x10), /* Quadrature Decoder Index Enable - SET */
} EVSYS_QDIEN_t;

/* Quadrature Decoder Enable */
typedef enum EVSYS_QDEN_enum
{
    EVSYS_QDEN_CLEAR_gc = (0x00), /* Quadrature Decoder Enable - CLEAR */
    EVSYS_QDEN_SET_gc   = (0x08), /* Quadrature Decoder Enable - SET */
} EVSYS_QDEN_t;

/* Digital Filter */
typedef enum EVSYS_DIGFILT_enum
{
    EVSYS_DIGFILT_1SAMPLE_gc  = (0x00), /* 1 SAMPLE */
    EVSYS_DIGFILT_2SAMPLES_gc = (0x01), /* 2 SAMPLES */
    EVSYS_DIGFILT_3SAMPLES_gc = (0x02), /* 3 SAMPLES */
    EVSYS_DIGFILT_4SAMPLES_gc = (0x03), /* 4 SAMPLES */
    EVSYS_DIGFILT_5SAMPLES_gc = (0x04), /* 5 SAMPLES */
    EVSYS_DIGFILT_6SAMPLES_gc = (0x05), /* 6 SAMPLES */
    EVSYS_DIGFILT_7SAMPLES_gc = (0x06), /* 7 SAMPLES */
    EVSYS_DIGFILT_8SAMPLES_gc = (0x07), /* 8 SAMPLES */
} EVSYS_DIGFILT_t;

/* Digital Filter */
typedef enum EVSYS_DIGFILT_enum
{
    EVSYS_DIGFILT_1SAMPLE_gc  = (0x00), /* 1 SAMPLE */
    EVSYS_DIGFILT_2SAMPLES_gc = (0x01), /* 2 SAMPLES */
    EVSYS_DIGFILT_3SAMPLES_gc = (0x02), /* 3 SAMPLES */
    EVSYS_DIGFILT_4SAMPLES_gc = (0x03), /* 4 SAMPLES */
    EVSYS_DIGFILT_5SAMPLES_gc = (0x04), /* 5 SAMPLES */
    EVSYS_DIGFILT_6SAMPLES_gc = (0x05), /* 6 SAMPLES */
    EVSYS_DIGFILT_7SAMPLES_gc = (0x06), /* 7 SAMPLES */
    EVSYS_DIGFILT_8SAMPLES_gc = (0x07), /* 8 SAMPLES */
} EVSYS_DIGFILT_t;

/* Digital Filter */
typedef enum EVSYS_DIGFILT_enum
{
    EVSYS_DIGFILT_1SAMPLE_gc  = (0x00), /* 1 SAMPLE */
    EVSYS_DIGFILT_2SAMPLES_gc = (0x01), /* 2 SAMPLES */
    EVSYS_DIGFILT_3SAMPLES_gc = (0x02), /* 3 SAMPLES */
    EVSYS_DIGFILT_4SAMPLES_gc = (0x03), /* 4 SAMPLES */
    EVSYS_DIGFILT_5SAMPLES_gc = (0x04), /* 5 SAMPLES */
    EVSYS_DIGFILT_6SAMPLES_gc = (0x05), /* 6 SAMPLES */
    EVSYS_DIGFILT_7SAMPLES_gc = (0x06), /* 7 SAMPLES */
    EVSYS_DIGFILT_8SAMPLES_gc = (0x07), /* 8 SAMPLES */
} EVSYS_DIGFILT_t;

/* Digital Filter */
typedef enum EVSYS_DIGFILT_enum
{
    EVSYS_DIGFILT_1SAMPLE_gc  = (0x00), /* 1 SAMPLE */
    EVSYS_DIGFILT_2SAMPLES_gc = (0x01), /* 2 SAMPLES */
    EVSYS_DIGFILT_3SAMPLES_gc = (0x02), /* 3 SAMPLES */
    EVSYS_DIGFILT_4SAMPLES_gc = (0x03), /* 4 SAMPLES */
    EVSYS_DIGFILT_5SAMPLES_gc = (0x04), /* 5 SAMPLES */
    EVSYS_DIGFILT_6SAMPLES_gc = (0x05), /* 6 SAMPLES */
    EVSYS_DIGFILT_7SAMPLES_gc = (0x06), /* 7 SAMPLES */
    EVSYS_DIGFILT_8SAMPLES_gc = (0x07), /* 8 SAMPLES */
} EVSYS_DIGFILT_t;

/*
--------------------------------------------------------------------------------
NVM - Non Volatile Memory Controller
--------------------------------------------------------------------------------
*/

typedef struct NVM_struct
{
    register8_t ADDR0;       /* Address Register 0 */
    register8_t ADDR1;       /* Address Register 1 */
    register8_t ADDR2;       /* Address Register 2 */
    register8_t rsv_0x03;    /* RESERVED REGISTER */
    register8_t DATA0;       /* Data Register 0 */
    register8_t DATA1;       /* Data Register 1 */
    register8_t DATA2;       /* Data Register 2 */
    register8_t rsv_0x07[3]; /* RESERVED REGISTER BLOCK */
    register8_t CMD;         /* Command */
    register8_t CTRLA;       /* Control Register A */
    register8_t CTRLB;       /* Control Register B */
    register8_t INTCTRL;     /* Interrupt Control */
    register8_t rsv_0x0E;    /* RESERVED REGISTER */
    register8_t STATUS;      /* Status */
    register8_t LOCKBITS;    /* Lock Bits */
} NVM_t;


/*
--------------------------------------------------------------------------------
NVM - Non Volatile Memory Controller
--------------------------------------------------------------------------------
*/

typedef struct NVM_LOCKBITS_struct
{
    register8_t LOCKBITS; /* Lock Bits */
} NVM_LOCKBITS_t;


/*
--------------------------------------------------------------------------------
NVM - Non Volatile Memory Controller
--------------------------------------------------------------------------------
*/

typedef struct NVM_FUSES_struct
{
    register8_t FUSEBYTE0; /* JTAG User ID */
    register8_t FUSEBYTE1; /* Watchdog Configuration */
    register8_t FUSEBYTE2; /* Reset Configuration */
    register8_t rsv_0x03;  /* RESERVED REGISTER */
    register8_t FUSEBYTE4; /* Start-up Configuration */
    register8_t FUSEBYTE5; /* EESAVE and BOD Level */
} NVM_FUSES_t;


/*
--------------------------------------------------------------------------------
NVM - Non Volatile Memory Controller
--------------------------------------------------------------------------------
*/

typedef struct NVM_PROD_SIGNATURES_struct
{
    register8_t RCOSC2M;      /* RCOSC 2MHz Calibration Value */
    register8_t rsv_0x01;     /* RESERVED REGISTER */
    register8_t RCOSC32K;     /* RCOSC 32kHz Calibration Value */
    register8_t RCOSC32M;     /* RCOSC 32MHz Calibration Value */
    register8_t rsv_0x04[4];  /* RESERVED REGISTER BLOCK */
    register8_t LOTNUM0;      /* Lot Number Byte 0, ASCII */
    register8_t LOTNUM1;      /* Lot Number Byte 1, ASCII */
    register8_t LOTNUM2;      /* Lot Number Byte 2, ASCII */
    register8_t LOTNUM3;      /* Lot Number Byte 3, ASCII */
    register8_t LOTNUM4;      /* Lot Number Byte 4, ASCII */
    register8_t LOTNUM5;      /* Lot Number Byte 5, ASCII */
    register8_t rsv_0x0E[2];  /* RESERVED REGISTER BLOCK */
    register8_t WAFNUM;       /* Wafer Number */
    register8_t rsv_0x11;     /* RESERVED REGISTER */
    register8_t COORDX0;      /* Wafer Coordinate X Byte 0 */
    register8_t COORDX1;      /* Wafer Coordinate X Byte 1 */
    register8_t COORDY0;      /* Wafer Coordinate Y Byte 0 */
    register8_t COORDY1;      /* Wafer Coordinate Y Byte 1 */
    register8_t rsv_0x16[10]; /* RESERVED REGISTER BLOCK */
    register8_t ADCACAL0;     /* ADCA Calibration Byte 0 */
    register8_t ADCACAL1;     /* ADCA Calibration Byte 1 */
    register8_t rsv_0x22[2];  /* RESERVED REGISTER BLOCK */
    register8_t ADCBCAL0;     /* ADCB Calibration Byte 0 */
    register8_t ADCBCAL1;     /* ADCB Calibration Byte 1 */
    register8_t rsv_0x26[8];  /* RESERVED REGISTER BLOCK */
    register8_t TEMPSENSE0;   /* Temperature Sensor Calibration Byte 0 */
    register8_t TEMPSENSE1;   /* Temperature Sensor Calibration Byte 0 */
} NVM_PROD_SIGNATURES_t;


/* Command */
typedef enum NVM_CMD_enum
{
    NVM_CMD_NO_OPERATION_gc            = (0x00), /* Noop/Ordinary LPM */
    NVM_CMD_READ_CALIB_ROW_gc          = (0x02), /* Read calibration row */
    NVM_CMD_READ_USER_SIG_ROW_gc       = (0x01), /* Read user signature row */
    NVM_CMD_READ_EEPROM_gc             = (0x06), /* Read EEPROM */
    NVM_CMD_READ_FUSES_gc              = (0x07), /* Read fuse byte */
    NVM_CMD_WRITE_LOCK_BITS_gc         = (0x08), /* Write lock bits */
    NVM_CMD_ERASE_USER_SIG_ROW_gc      = (0x18), /* Erase user signature row */
    NVM_CMD_WRITE_USER_SIG_ROW_gc      = (0x1A), /* Write user signature row */
    NVM_CMD_ERASE_APP_gc               = (0x20), /* Erase Application Section */
    NVM_CMD_ERASE_APP_PAGE_gc          = (0x22), /* Erase Application Section page */
    NVM_CMD_LOAD_FLASH_BUFFER_gc       = (0x23), /* Load Flash page buffer */
    NVM_CMD_WRITE_APP_PAGE_gc          = (0x24), /* Write Application Section page */
    NVM_CMD_ERASE_WRITE_APP_PAGE_gc    = (0x25), /* Erase-and-write Application Section page */
    NVM_CMD_ERASE_FLASH_BUFFER_gc      = (0x26), /* Erase/flush Flash page buffer */
    NVM_CMD_ERASE_BOOT_PAGE_gc         = (0x2A), /* Erase Boot Section page */
    NVM_CMD_ERASE_FLASH_PAGE_gc        = (0x2B), /* Erase Flash page */
    NVM_CMD_WRITE_BOOT_PAGE_gc         = (0x2C), /* Write Boot Section page */
    NVM_CMD_ERASE_WRITE_BOOT_PAGE_gc   = (0x2D), /* Erase-and-write Boot Section page */
    NVM_CMD_WRITE_FLASH_PAGE_gc        = (0x2E), /* Write Flash page */
    NVM_CMD_ERASE_WRITE_FLASH_PAGE_gc  = (0x2F), /* Erase and Write Flash page */
    NVM_CMD_ERASE_EEPROM_gc            = (0x30), /* Erase EEPROM */
    NVM_CMD_ERASE_EEPROM_PAGE_gc       = (0x32), /* Erase EEPROM page */
    NVM_CMD_LOAD_EEPROM_BUFFER_gc      = (0x33), /* Load EEPROM page buffer */
    NVM_CMD_WRITE_EEPROM_PAGE_gc       = (0x34), /* Write EEPROM page */
    NVM_CMD_ERASE_WRITE_EEPROM_PAGE_gc = (0x35), /* Erase-and-write EEPROM page */
    NVM_CMD_ERASE_EEPROM_BUFFER_gc     = (0x36), /* Erase/flush EEPROM page buffer */
    NVM_CMD_APP_CRC_gc                 = (0x38), /* Generate Application section CRC */
    NVM_CMD_BOOT_CRC_gc                = (0x39), /* Generate Boot Section CRC */
    NVM_CMD_FLASH_RANGE_CRC_gc         = (0x3A), /* Generate Flash Range CRC */
} NVM_CMD_t;

/* Command Execute */
typedef enum NVM_CMDEX_enum
{
    NVM_CMDEX_CLEAR_gc = (0x00), /* Command Execute - CLEAR */
    NVM_CMDEX_SET_gc   = (0x01), /* Command Execute - SET */
} NVM_CMDEX_t;

/* EEPROM Mapping Enable */
typedef enum NVM_EEMAPEN_enum
{
    NVM_EEMAPEN_CLEAR_gc = (0x00), /* EEPROM Mapping Enable - CLEAR */
    NVM_EEMAPEN_SET_gc   = (0x08), /* EEPROM Mapping Enable - SET */
} NVM_EEMAPEN_t;

/* Flash Power Reduction Enable */
typedef enum NVM_FPRM_enum
{
    NVM_FPRM_CLEAR_gc = (0x00), /* Flash Power Reduction Enable - CLEAR */
    NVM_FPRM_SET_gc   = (0x04), /* Flash Power Reduction Enable - SET */
} NVM_FPRM_t;

/* EEPROM Power Reduction Enable */
typedef enum NVM_EPRM_enum
{
    NVM_EPRM_CLEAR_gc = (0x00), /* EEPROM Power Reduction Enable - CLEAR */
    NVM_EPRM_SET_gc   = (0x02), /* EEPROM Power Reduction Enable - SET */
} NVM_EPRM_t;

/* SPM Lock */
typedef enum NVM_SPMLOCK_enum
{
    NVM_SPMLOCK_CLEAR_gc = (0x00), /* SPM Lock - CLEAR */
    NVM_SPMLOCK_SET_gc   = (0x01), /* SPM Lock - SET */
} NVM_SPMLOCK_t;

/* SPM Interrupt Level */
typedef enum NVM_SPMLVL_enum
{
    NVM_SPMLVL_OFF_gc = (0x00<<2), /* Interrupt disabled */
    NVM_SPMLVL_LO_gc  = (0x01<<2), /* Low level */
    NVM_SPMLVL_MED_gc = (0x02<<2), /* Medium level */
    NVM_SPMLVL_HI_gc  = (0x03<<2), /* High level */
} NVM_SPMLVL_t;

/* EEPROM Interrupt Level */
typedef enum NVM_EELVL_enum
{
    NVM_EELVL_OFF_gc = (0x00), /* Interrupt disabled */
    NVM_EELVL_LO_gc  = (0x01), /* Low level */
    NVM_EELVL_MED_gc = (0x02), /* Medium level */
    NVM_EELVL_HI_gc  = (0x03), /* High level */
} NVM_EELVL_t;

/* Non-volatile Memory Busy */
typedef enum NVM_NVMBUSY_enum
{
    NVM_NVMBUSY_CLEAR_gc = (0x00), /* Non-volatile Memory Busy - CLEAR */
    NVM_NVMBUSY_SET_gc   = (0x80), /* Non-volatile Memory Busy - SET */
} NVM_NVMBUSY_t;

/* Flash Memory Busy */
typedef enum NVM_FBUSY_enum
{
    NVM_FBUSY_CLEAR_gc = (0x00), /* Flash Memory Busy - CLEAR */
    NVM_FBUSY_SET_gc   = (0x40), /* Flash Memory Busy - SET */
} NVM_FBUSY_t;

/* EEPROM Page Buffer Active Loading */
typedef enum NVM_EELOAD_enum
{
    NVM_EELOAD_CLEAR_gc = (0x00), /* EEPROM Page Buffer Active Loading - CLEAR */
    NVM_EELOAD_SET_gc   = (0x02), /* EEPROM Page Buffer Active Loading - SET */
} NVM_EELOAD_t;

/* Flash Page Buffer Active Loading */
typedef enum NVM_FLOAD_enum
{
    NVM_FLOAD_CLEAR_gc = (0x00), /* Flash Page Buffer Active Loading - CLEAR */
    NVM_FLOAD_SET_gc   = (0x01), /* Flash Page Buffer Active Loading - SET */
} NVM_FLOAD_t;

/* Boot Lock Bits - Boot Section */
typedef enum NVM_BLBB_enum
{
    NVM_BLBB_NOLOCK_gc = (0x03<<6), /* No locks */
    NVM_BLBB_WLOCK_gc  = (0x02<<6), /* Write not allowed */
    NVM_BLBB_RLOCK_gc  = (0x01<<6), /* Read not allowed */
    NVM_BLBB_RWLOCK_gc = (0x00<<6), /* Read and write not allowed */
} NVM_BLBB_t;

/* Boot Lock Bits - Application Section */
typedef enum NVM_BLBA_enum
{
    NVM_BLBA_NOLOCK_gc = (0x03<<4), /* No locks */
    NVM_BLBA_WLOCK_gc  = (0x02<<4), /* Write not allowed */
    NVM_BLBA_RLOCK_gc  = (0x01<<4), /* Read not allowed */
    NVM_BLBA_RWLOCK_gc = (0x00<<4), /* Read and write not allowed */
} NVM_BLBA_t;

/* Boot Lock Bits - Application Table */
typedef enum NVM_BLBAT_enum
{
    NVM_BLBAT_NOLOCK_gc = (0x03<<2), /* No locks */
    NVM_BLBAT_WLOCK_gc  = (0x02<<2), /* Write not allowed */
    NVM_BLBAT_RLOCK_gc  = (0x01<<2), /* Read not allowed */
    NVM_BLBAT_RWLOCK_gc = (0x00<<2), /* Read and write not allowed */
} NVM_BLBAT_t;

/* Lock Bits */
typedef enum NVM_LB_enum
{
    NVM_LB_NOLOCK_gc = (0x03), /* No locks */
    NVM_LB_WLOCK_gc  = (0x02), /* Write not allowed */
    NVM_LB_RWLOCK_gc = (0x00), /* Read and write not allowed */
} NVM_LB_t;

/* Boot Lock Bits - Boot Section */
typedef enum NVM_LOCKBITS_BLBB_enum
{
    NVM_LOCKBITS_BLBB_NOLOCK_gc = (0x03<<6), /* No locks */
    NVM_LOCKBITS_BLBB_WLOCK_gc  = (0x02<<6), /* Write not allowed */
    NVM_LOCKBITS_BLBB_RLOCK_gc  = (0x01<<6), /* Read not allowed */
    NVM_LOCKBITS_BLBB_RWLOCK_gc = (0x00<<6), /* Read and write not allowed */
} NVM_LOCKBITS_BLBB_t;

/* Boot Lock Bits - Application Section */
typedef enum NVM_LOCKBITS_BLBA_enum
{
    NVM_LOCKBITS_BLBA_NOLOCK_gc = (0x03<<4), /* No locks */
    NVM_LOCKBITS_BLBA_WLOCK_gc  = (0x02<<4), /* Write not allowed */
    NVM_LOCKBITS_BLBA_RLOCK_gc  = (0x01<<4), /* Read not allowed */
    NVM_LOCKBITS_BLBA_RWLOCK_gc = (0x00<<4), /* Read and write not allowed */
} NVM_LOCKBITS_BLBA_t;

/* Boot Lock Bits - Application Table */
typedef enum NVM_LOCKBITS_BLBAT_enum
{
    NVM_LOCKBITS_BLBAT_NOLOCK_gc = (0x03<<2), /* No locks */
    NVM_LOCKBITS_BLBAT_WLOCK_gc  = (0x02<<2), /* Write not allowed */
    NVM_LOCKBITS_BLBAT_RLOCK_gc  = (0x01<<2), /* Read not allowed */
    NVM_LOCKBITS_BLBAT_RWLOCK_gc = (0x00<<2), /* Read and write not allowed */
} NVM_LOCKBITS_BLBAT_t;

/* Lock Bits */
typedef enum NVM_LOCKBITS_LB_enum
{
    NVM_LOCKBITS_LB_NOLOCK_gc = (0x03), /* No locks */
    NVM_LOCKBITS_LB_WLOCK_gc  = (0x02), /* Write not allowed */
    NVM_LOCKBITS_LB_RWLOCK_gc = (0x00), /* Read and write not allowed */
} NVM_LOCKBITS_LB_t;

/* Watchdog Window Timeout Period */
typedef enum NVM_FUSES_WDWP_enum
{
    NVM_FUSES_WDWP_8CLK_gc   = (0x00<<4), /* 8 cycles (8ms @ 3.3V) */
    NVM_FUSES_WDWP_16CLK_gc  = (0x01<<4), /* 16 cycles (16ms @ 3.3V) */
    NVM_FUSES_WDWP_32CLK_gc  = (0x02<<4), /* 32 cycles (32ms @ 3.3V) */
    NVM_FUSES_WDWP_64CLK_gc  = (0x03<<4), /* 64 cycles (64ms @ 3.3V) */
    NVM_FUSES_WDWP_128CLK_gc = (0x04<<4), /* 128 cycles (0.125s @ 3.3V) */
    NVM_FUSES_WDWP_256CLK_gc = (0x05<<4), /* 256 cycles (0.25s @ 3.3V) */
    NVM_FUSES_WDWP_512CLK_gc = (0x06<<4), /* 512 cycles (0.5s @ 3.3V) */
    NVM_FUSES_WDWP_1KCLK_gc  = (0x07<<4), /* 1K cycles (1s @ 3.3V) */
    NVM_FUSES_WDWP_2KCLK_gc  = (0x08<<4), /* 2K cycles (2s @ 3.3V) */
    NVM_FUSES_WDWP_4KCLK_gc  = (0x09<<4), /* 4K cycles (4s @ 3.3V) */
    NVM_FUSES_WDWP_8KCLK_gc  = (0x0A<<4), /* 8K cycles (8s @ 3.3V) */
} NVM_FUSES_WDWP_t;

/* Watchdog Timeout Period */
typedef enum NVM_FUSES_WDP_enum
{
    NVM_FUSES_WDP_8CLK_gc   = (0x00), /* 8 cycles (8ms @ 3.3V) */
    NVM_FUSES_WDP_16CLK_gc  = (0x01), /* 16 cycles (16ms @ 3.3V) */
    NVM_FUSES_WDP_32CLK_gc  = (0x02), /* 32 cycles (32ms @ 3.3V) */
    NVM_FUSES_WDP_64CLK_gc  = (0x03), /* 64 cycles (64ms @ 3.3V) */
    NVM_FUSES_WDP_128CLK_gc = (0x04), /* 128 cycles (0.125s @ 3.3V) */
    NVM_FUSES_WDP_256CLK_gc = (0x05), /* 256 cycles (0.25s @ 3.3V) */
    NVM_FUSES_WDP_512CLK_gc = (0x06), /* 512 cycles (0.5s @ 3.3V) */
    NVM_FUSES_WDP_1KCLK_gc  = (0x07), /* 1K cycles (1s @ 3.3V) */
    NVM_FUSES_WDP_2KCLK_gc  = (0x08), /* 2K cycles (2s @ 3.3V) */
    NVM_FUSES_WDP_4KCLK_gc  = (0x09), /* 4K cycles (4s @ 3.3V) */
    NVM_FUSES_WDP_8KCLK_gc  = (0x0A), /* 8K cycles (8s @ 3.3V) */
} NVM_FUSES_WDP_t;

/* Boot Loader Section Reset Vector */
typedef enum NVM_FUSES_BOOTRST_enum
{
    NVM_FUSES_BOOTRST_BOOTLDR_gc     = (0x00<<6), /* Boot Loader Reset */
    NVM_FUSES_BOOTRST_APPLICATION_gc = (0x01<<6), /* Application Reset */
} NVM_FUSES_BOOTRST_t;

/* BOD Operation in Power-Down Mode */
typedef enum NVM_FUSES_BODPD_enum
{
    NVM_FUSES_BODPD_INSAMPLEDMODE_gc = (0x01), /* BOD enabled in sampled mode */
    NVM_FUSES_BODPD_CONTINOUSLY_gc   = (0x02), /* BOD enabled continuously */
    NVM_FUSES_BODPD_DISABLED_gc      = (0x03), /* BOD Disabled */
} NVM_FUSES_BODPD_t;

/* External Reset Disable */
typedef enum NVM_FUSES_RSTDISBL_enum
{
    NVM_FUSES_RSTDISBL_CLEAR_gc = (0x00), /* External Reset Disable - CLEAR */
    NVM_FUSES_RSTDISBL_SET_gc   = (0x10), /* External Reset Disable - SET */
} NVM_FUSES_RSTDISBL_t;

/* Start-up Time */
typedef enum NVM_FUSES_STARTUPTIME_enum
{
    NVM_FUSES_STARTUPTIME_0MS_gc  = (0x03<<2), /* 0 ms */
    NVM_FUSES_STARTUPTIME_4MS_gc  = (0x01<<2), /* 4 ms */
    NVM_FUSES_STARTUPTIME_64MS_gc = (0x00<<2), /* 64 ms */
} NVM_FUSES_STARTUPTIME_t;

/* Watchdog Timer Lock */
typedef enum NVM_FUSES_WDLOCK_enum
{
    NVM_FUSES_WDLOCK_CLEAR_gc = (0x00), /* Watchdog Timer Lock - CLEAR */
    NVM_FUSES_WDLOCK_SET_gc   = (0x02), /* Watchdog Timer Lock - SET */
} NVM_FUSES_WDLOCK_t;

/* JTAG Interface Enable */
typedef enum NVM_FUSES_JTAGEN_enum
{
    NVM_FUSES_JTAGEN_CLEAR_gc = (0x00), /* JTAG Interface Enable - CLEAR */
    NVM_FUSES_JTAGEN_SET_gc   = (0x01), /* JTAG Interface Enable - SET */
} NVM_FUSES_JTAGEN_t;

/* BOD Operation in Active Mode */
typedef enum NVM_FUSES_BODACT_enum
{
    NVM_FUSES_BODACT_INSAMPLEDMODE_gc = (0x01<<4), /* BOD enabled in sampled mode */
    NVM_FUSES_BODACT_CONTINOUSLY_gc   = (0x02<<4), /* BOD enabled continuously */
    NVM_FUSES_BODACT_DISABLED_gc      = (0x03<<4), /* BOD Disabled */
} NVM_FUSES_BODACT_t;

/* Preserve EEPROM Through Chip Erase */
typedef enum NVM_FUSES_EESAVE_enum
{
    NVM_FUSES_EESAVE_CLEAR_gc = (0x00), /* Preserve EEPROM Through Chip Erase - CLEAR */
    NVM_FUSES_EESAVE_SET_gc   = (0x08), /* Preserve EEPROM Through Chip Erase - SET */
} NVM_FUSES_EESAVE_t;

/* Brownout Detection Voltage Level */
typedef enum NVM_FUSES_BODLEVEL_enum
{
    NVM_FUSES_BODLEVEL_1V6_gc = (0x07), /* 1.6 V */
    NVM_FUSES_BODLEVEL_1V9_gc = (0x06), /* 1.9 V */
    NVM_FUSES_BODLEVEL_2V1_gc = (0x05), /* 2.1 V */
    NVM_FUSES_BODLEVEL_2V4_gc = (0x04), /* 2.4 V */
    NVM_FUSES_BODLEVEL_2V7_gc = (0x03), /* 2.7 V */
    NVM_FUSES_BODLEVEL_3V0_gc = (0x02), /* 3.0 V */
    NVM_FUSES_BODLEVEL_3V2_gc = (0x01), /* 3.2 V */
    NVM_FUSES_BODLEVEL_3V5_gc = (0x00), /* 3.5 V */
} NVM_FUSES_BODLEVEL_t;

/*
--------------------------------------------------------------------------------
AC - Analog Comparator
--------------------------------------------------------------------------------
*/

typedef struct AC_struct
{
    register8_t AC0CTRL;    /* Analog Comparator 0 Control */
    register8_t AC1CTRL;    /* Analog Comparator 1 Control */
    register8_t AC0MUXCTRL; /* Analog Comparator 0 MUX Control */
    register8_t AC1MUXCTRL; /* Analog Comparator 1 MUX Control */
    register8_t CTRLA;      /* Control Register A */
    register8_t CTRLB;      /* Control Register B */
    register8_t WINCTRL;    /* Window Mode Control */
    register8_t STATUS;     /* Status */
} AC_t;


/* Interrupt Mode */
typedef enum AC_INTMODE_enum
{
    AC_INTMODE_BOTHEDGES_gc = (0x00<<6), /* Interrupt on both edges */
    AC_INTMODE_FALLING_gc   = (0x02<<6), /* Interrupt on falling edge */
    AC_INTMODE_RISING_gc    = (0x03<<6), /* Interrupt on rising edge */
} AC_INTMODE_t;

/* Interrupt Level */
typedef enum AC_INTLVL_enum
{
    AC_INTLVL_OFF_gc = (0x00<<4), /* Interrupt disabled */
    AC_INTLVL_LO_gc  = (0x01<<4), /* Low level */
    AC_INTLVL_MED_gc = (0x02<<4), /* Medium level */
    AC_INTLVL_HI_gc  = (0x03<<4), /* High level */
} AC_INTLVL_t;

/* High-speed Mode */
typedef enum AC_HSMODE_enum
{
    AC_HSMODE_CLEAR_gc = (0x00), /* High-speed Mode - CLEAR */
    AC_HSMODE_SET_gc   = (0x08), /* High-speed Mode - SET */
} AC_HSMODE_t;

/* Hysteresis Mode */
typedef enum AC_HYSMODE_enum
{
    AC_HYSMODE_NO_gc    = (0x00<<1), /* No hysteresis */
    AC_HYSMODE_SMALL_gc = (0x01<<1), /* Small hysteresis */
    AC_HYSMODE_LARGE_gc = (0x02<<1), /* Large hysteresis */
} AC_HYSMODE_t;

/* Enable */
typedef enum AC_ENABLE_enum
{
    AC_ENABLE_CLEAR_gc = (0x00), /* Enable - CLEAR */
    AC_ENABLE_SET_gc   = (0x01), /* Enable - SET */
} AC_ENABLE_t;

/* Interrupt Mode */
typedef enum AC_INTMODE_enum
{
    AC_INTMODE_BOTHEDGES_gc = (0x00<<6), /* Interrupt on both edges */
    AC_INTMODE_FALLING_gc   = (0x02<<6), /* Interrupt on falling edge */
    AC_INTMODE_RISING_gc    = (0x03<<6), /* Interrupt on rising edge */
} AC_INTMODE_t;

/* Interrupt Level */
typedef enum AC_INTLVL_enum
{
    AC_INTLVL_OFF_gc = (0x00<<4), /* Interrupt disabled */
    AC_INTLVL_LO_gc  = (0x01<<4), /* Low level */
    AC_INTLVL_MED_gc = (0x02<<4), /* Medium level */
    AC_INTLVL_HI_gc  = (0x03<<4), /* High level */
} AC_INTLVL_t;

/* High-speed Mode */
typedef enum AC_HSMODE_enum
{
    AC_HSMODE_CLEAR_gc = (0x00), /* High-speed Mode - CLEAR */
    AC_HSMODE_SET_gc   = (0x08), /* High-speed Mode - SET */
} AC_HSMODE_t;

/* Hysteresis Mode */
typedef enum AC_HYSMODE_enum
{
    AC_HYSMODE_NO_gc    = (0x00<<1), /* No hysteresis */
    AC_HYSMODE_SMALL_gc = (0x01<<1), /* Small hysteresis */
    AC_HYSMODE_LARGE_gc = (0x02<<1), /* Large hysteresis */
} AC_HYSMODE_t;

/* Enable */
typedef enum AC_ENABLE_enum
{
    AC_ENABLE_CLEAR_gc = (0x00), /* Enable - CLEAR */
    AC_ENABLE_SET_gc   = (0x01), /* Enable - SET */
} AC_ENABLE_t;

/* MUX Positive Input */
typedef enum AC_MUXPOS_enum
{
    AC_MUXPOS_PIN0_gc = (0x00<<3), /* Pin 0 */
    AC_MUXPOS_PIN1_gc = (0x01<<3), /* Pin 1 */
    AC_MUXPOS_PIN2_gc = (0x02<<3), /* Pin 2 */
    AC_MUXPOS_PIN3_gc = (0x03<<3), /* Pin 3 */
    AC_MUXPOS_PIN4_gc = (0x04<<3), /* Pin 4 */
    AC_MUXPOS_PIN5_gc = (0x05<<3), /* Pin 5 */
    AC_MUXPOS_PIN6_gc = (0x06<<3), /* Pin 6 */
    AC_MUXPOS_DAC_gc  = (0x07<<3), /* DAC output */
} AC_MUXPOS_t;

/* MUX Negative Input */
typedef enum AC_MUXNEG_enum
{
    AC_MUXNEG_PIN0_gc    = (0x00), /* Pin 0 */
    AC_MUXNEG_PIN1_gc    = (0x01), /* Pin 1 */
    AC_MUXNEG_PIN3_gc    = (0x02), /* Pin 3 */
    AC_MUXNEG_PIN5_gc    = (0x03), /* Pin 5 */
    AC_MUXNEG_PIN7_gc    = (0x04), /* Pin 7 */
    AC_MUXNEG_DAC_gc     = (0x05), /* DAC output */
    AC_MUXNEG_BANDGAP_gc = (0x06), /* Bandgap Reference */
    AC_MUXNEG_SCALER_gc  = (0x07), /* Internal voltage scaler */
} AC_MUXNEG_t;

/* MUX Positive Input */
typedef enum AC_MUXPOS_enum
{
    AC_MUXPOS_PIN0_gc = (0x00<<3), /* Pin 0 */
    AC_MUXPOS_PIN1_gc = (0x01<<3), /* Pin 1 */
    AC_MUXPOS_PIN2_gc = (0x02<<3), /* Pin 2 */
    AC_MUXPOS_PIN3_gc = (0x03<<3), /* Pin 3 */
    AC_MUXPOS_PIN4_gc = (0x04<<3), /* Pin 4 */
    AC_MUXPOS_PIN5_gc = (0x05<<3), /* Pin 5 */
    AC_MUXPOS_PIN6_gc = (0x06<<3), /* Pin 6 */
    AC_MUXPOS_DAC_gc  = (0x07<<3), /* DAC output */
} AC_MUXPOS_t;

/* MUX Negative Input */
typedef enum AC_MUXNEG_enum
{
    AC_MUXNEG_PIN0_gc    = (0x00), /* Pin 0 */
    AC_MUXNEG_PIN1_gc    = (0x01), /* Pin 1 */
    AC_MUXNEG_PIN3_gc    = (0x02), /* Pin 3 */
    AC_MUXNEG_PIN5_gc    = (0x03), /* Pin 5 */
    AC_MUXNEG_PIN7_gc    = (0x04), /* Pin 7 */
    AC_MUXNEG_DAC_gc     = (0x05), /* DAC output */
    AC_MUXNEG_BANDGAP_gc = (0x06), /* Bandgap Reference */
    AC_MUXNEG_SCALER_gc  = (0x07), /* Internal voltage scaler */
} AC_MUXNEG_t;

/* Analog Comparator 0 Output Enable */
typedef enum AC_AC0OUT_enum
{
    AC_AC0OUT_CLEAR_gc = (0x00), /* Analog Comparator 0 Output Enable - CLEAR */
    AC_AC0OUT_SET_gc   = (0x01), /* Analog Comparator 0 Output Enable - SET */
} AC_AC0OUT_t;

/* Window Mode Enable */
typedef enum AC_WEN_enum
{
    AC_WEN_CLEAR_gc = (0x00), /* Window Mode Enable - CLEAR */
    AC_WEN_SET_gc   = (0x10), /* Window Mode Enable - SET */
} AC_WEN_t;

/* Window Interrupt Mode */
typedef enum AC_WINTMODE_enum
{
    AC_WINTMODE_ABOVE_gc   = (0x00<<2), /* Interrupt on above window */
    AC_WINTMODE_INSIDE_gc  = (0x01<<2), /* Interrupt on inside window */
    AC_WINTMODE_BELOW_gc   = (0x02<<2), /* Interrupt on below window */
    AC_WINTMODE_OUTSIDE_gc = (0x03<<2), /* Interrupt on outside window */
} AC_WINTMODE_t;

/* Window Interrupt Level */
typedef enum AC_WINTLVL_enum
{
    AC_WINTLVL_OFF_gc = (0x00), /* Interrupt disabled */
    AC_WINTLVL_LO_gc  = (0x01), /* Low priority */
    AC_WINTLVL_MED_gc = (0x02), /* Medium priority */
    AC_WINTLVL_HI_gc  = (0x03), /* High priority */
} AC_WINTLVL_t;

/* Window Mode State */
typedef enum AC_WSTATE_enum
{
    AC_WSTATE_ABOVE_gc  = (0x00<<6), /* Signal above window */
    AC_WSTATE_INSIDE_gc = (0x01<<6), /* Signal inside window */
    AC_WSTATE_BELOW_gc  = (0x02<<6), /* Signal below window */
} AC_WSTATE_t;

/* Analog Comparator 1 State */
typedef enum AC_AC1STATE_enum
{
    AC_AC1STATE_CLEAR_gc = (0x00), /* Analog Comparator 1 State - CLEAR */
    AC_AC1STATE_SET_gc   = (0x20), /* Analog Comparator 1 State - SET */
} AC_AC1STATE_t;

/* Analog Comparator 0 State */
typedef enum AC_AC0STATE_enum
{
    AC_AC0STATE_CLEAR_gc = (0x00), /* Analog Comparator 0 State - CLEAR */
    AC_AC0STATE_SET_gc   = (0x10), /* Analog Comparator 0 State - SET */
} AC_AC0STATE_t;

/* Window Mode Interrupt Flag */
typedef enum AC_WIF_enum
{
    AC_WIF_CLEAR_gc = (0x00), /* Window Mode Interrupt Flag - CLEAR */
    AC_WIF_SET_gc   = (0x04), /* Window Mode Interrupt Flag - SET */
} AC_WIF_t;

/* Analog Comparator 1 Interrupt Flag */
typedef enum AC_AC1IF_enum
{
    AC_AC1IF_CLEAR_gc = (0x00), /* Analog Comparator 1 Interrupt Flag - CLEAR */
    AC_AC1IF_SET_gc   = (0x02), /* Analog Comparator 1 Interrupt Flag - SET */
} AC_AC1IF_t;

/* Analog Comparator 0 Interrupt Flag */
typedef enum AC_AC0IF_enum
{
    AC_AC0IF_CLEAR_gc = (0x00), /* Analog Comparator 0 Interrupt Flag - CLEAR */
    AC_AC0IF_SET_gc   = (0x01), /* Analog Comparator 0 Interrupt Flag - SET */
} AC_AC0IF_t;

/*
--------------------------------------------------------------------------------
ADC - Analog/Digital Converter
--------------------------------------------------------------------------------
*/

typedef struct ADC_CH_struct
{
    register8_t CTRL;     /* Control Register */
    register8_t MUXCTRL;  /* MUX Control */
    register8_t INTCTRL;  /* Channel Interrupt Control */
    register8_t INTFLAGS; /* Interrupt Flags */
    _REGISTER16 (RES);    /* Channel Result */
} ADC_CH_t;


/*
--------------------------------------------------------------------------------
ADC - Analog/Digital Converter
--------------------------------------------------------------------------------
*/

typedef struct ADC_struct
{
    register8_t CTRLA;       /* Control Register A */
    register8_t CTRLB;       /* Control Register B */
    register8_t REFCTRL;     /* Reference Control */
    register8_t EVCTRL;      /* Event Control */
    register8_t PRESCALER;   /* Clock Prescaler */
    register8_t rsv_0x05;    /* RESERVED REGISTER */
    register8_t INTFLAGS;    /* Interrupt Flags */
    register8_t TEMP;        /* Temporary register */
    register8_t rsv_0x08[4]; /* RESERVED REGISTER BLOCK */
    _REGISTER16 (CAL);       /* Calibration Value */
    register8_t rsv_0x0D[3]; /* RESERVED REGISTER BLOCK */
    _REGISTER16 (CH0RES);    /* Channel 0 Result */
    register8_t rsv_0x11;    /* RESERVED REGISTER */
    _REGISTER16 (CH1RES);    /* Channel 1 Result */
    register8_t rsv_0x13;    /* RESERVED REGISTER */
    _REGISTER16 (CH2RES);    /* Channel 2 Result */
    register8_t rsv_0x15;    /* RESERVED REGISTER */
    _REGISTER16 (CH3RES);    /* Channel 3 Result */
    register8_t rsv_0x17;    /* RESERVED REGISTER */
    _REGISTER16 (CMP);       /* Compare Value */
} ADC_t;


/* Channel Start Conversion */
typedef enum ADC_CH_START_enum
{
    ADC_CH_START_CLEAR_gc = (0x00), /* Channel Start Conversion - CLEAR */
    ADC_CH_START_SET_gc   = (0x80), /* Channel Start Conversion - SET */
} ADC_CH_START_t;

/* Gain Factor */
typedef enum ADC_CH_GAINFAC_enum
{
    ADC_CH_GAINFAC_1X_gc   = (0x00<<2), /* 1x gain */
    ADC_CH_GAINFAC_2X_gc   = (0x01<<2), /* 2x gain */
    ADC_CH_GAINFAC_4X_gc   = (0x02<<2), /* 4x gain */
    ADC_CH_GAINFAC_8X_gc   = (0x03<<2), /* 8x gain */
    ADC_CH_GAINFAC_16X_gc  = (0x04<<2), /* 16x gain */
    ADC_CH_GAINFAC_32X_gc  = (0x05<<2), /* 32x gain */
    ADC_CH_GAINFAC_64X_gc  = (0x06<<2), /* 64x gain */
    ADC_CH_GAINFAC_DIV2_gc = (0x07<<2), /* x/2 gain */
} ADC_CH_GAINFAC_t;

/* Input Mode Select */
typedef enum ADC_CH_INPUTMODE_enum
{
    ADC_CH_INPUTMODE_INTERNAL_gc    = (0x00), /* Internal inputs, no gain */
    ADC_CH_INPUTMODE_SINGLEENDED_gc = (0x01), /* Single-ended input, no gain */
    ADC_CH_INPUTMODE_DIFF_gc        = (0x02), /* Differential input, no gain */
    ADC_CH_INPUTMODE_DIFFWGAIN_gc   = (0x03), /* Differential input, with gain */
} ADC_CH_INPUTMODE_t;

/* Positive Input Select */
typedef enum ADC_CH_MUXPOS_enum
{
    ADC_CH_MUXPOS_PIN0_gc  = (0x00<<3), /* Input pin 0 */
    ADC_CH_MUXPOS_PIN1_gc  = (0x01<<3), /* Input pin 1 */
    ADC_CH_MUXPOS_PIN2_gc  = (0x02<<3), /* Input pin 2 */
    ADC_CH_MUXPOS_PIN3_gc  = (0x03<<3), /* Input pin 3 */
    ADC_CH_MUXPOS_PIN4_gc  = (0x04<<3), /* Input pin 4 */
    ADC_CH_MUXPOS_PIN5_gc  = (0x05<<3), /* Input pin 5 */
    ADC_CH_MUXPOS_PIN6_gc  = (0x06<<3), /* Input pin 6 */
    ADC_CH_MUXPOS_PIN7_gc  = (0x07<<3), /* Input pin 7 */
    ADC_CH_MUXPOS_PIN8_gc  = (0x08<<3), /* Input pin 8 */
    ADC_CH_MUXPOS_PIN9_gc  = (0x09<<3), /* Input pin 9 */
    ADC_CH_MUXPOS_PIN10_gc = (0x0A<<3), /* Input pin 10 */
    ADC_CH_MUXPOS_PIN11_gc = (0x0B<<3), /* Input pin 11 */
} ADC_CH_MUXPOS_t;

/* Internal Input Select */
typedef enum ADC_CH_MUXINT_enum
{
    ADC_CH_MUXINT_TEMP_gc      = (0x00<<3), /* Temperature Reference */
    ADC_CH_MUXINT_BANDGAP_gc   = (0x01<<3), /* Bandgap Reference */
    ADC_CH_MUXINT_SCALEDVCC_gc = (0x02<<3), /* 1/10 scaled VCC */
    ADC_CH_MUXINT_DAC_gc       = (0x03<<3), /* DAC output */
} ADC_CH_MUXINT_t;

/* Negative Input Select */
typedef enum ADC_CH_MUXNEG_enum
{
    ADC_CH_MUXNEG_PIN0_gc = (0x00), /* Input pin 0 */
    ADC_CH_MUXNEG_PIN1_gc = (0x01), /* Input pin 1 */
    ADC_CH_MUXNEG_PIN2_gc = (0x02), /* Input pin 2 */
    ADC_CH_MUXNEG_PIN3_gc = (0x03), /* Input pin 3 */
    ADC_CH_MUXNEG_PIN4_gc = (0x00), /* Input pin 4 */
    ADC_CH_MUXNEG_PIN5_gc = (0x01), /* Input pin 5 */
    ADC_CH_MUXNEG_PIN6_gc = (0x02), /* Input pin 6 */
    ADC_CH_MUXNEG_PIN7_gc = (0x03), /* Input pin 7 */
} ADC_CH_MUXNEG_t;

/* MUX selection on Negative ADC Input Gain on 4 LSB pins */
typedef enum ADC_CH_MUXNEGL_enum
{
    ADC_CH_MUXNEGL_PIN0_gc = (0x00), /* Input pin 0 */
    ADC_CH_MUXNEGL_PIN1_gc = (0x01), /* Input pin 1 */
    ADC_CH_MUXNEGL_PIN2_gc = (0x02), /* Input pin 2 */
    ADC_CH_MUXNEGL_PIN3_gc = (0x03), /* Input pin 3 */
} ADC_CH_MUXNEGL_t;

/* MUX selection on Negative ADC Input Gain on 4 MSB pins */
typedef enum ADC_CH_MUXNEGH_enum
{
    ADC_CH_MUXNEGH_PIN4_gc = (0x00), /* Input pin 4 */
    ADC_CH_MUXNEGH_PIN5_gc = (0x01), /* Input pin 5 */
    ADC_CH_MUXNEGH_PIN6_gc = (0x02), /* Input pin 6 */
    ADC_CH_MUXNEGH_PIN7_gc = (0x03), /* Input pin 7 */
} ADC_CH_MUXNEGH_t;

/* Interrupt Mode */
typedef enum ADC_CH_INTMODE_enum
{
    ADC_CH_INTMODE_COMPLETE_gc = (0x00<<2), /* Interrupt on conversion complete */
    ADC_CH_INTMODE_BELOW_gc    = (0x01<<2), /* Interrupt on result below compare value */
    ADC_CH_INTMODE_ABOVE_gc    = (0x03<<2), /* Interrupt on result above compare value */
} ADC_CH_INTMODE_t;

/* Interrupt Level */
typedef enum ADC_CH_INTLVL_enum
{
    ADC_CH_INTLVL_OFF_gc = (0x00), /* Interrupt disabled */
    ADC_CH_INTLVL_LO_gc  = (0x01), /* Low level */
    ADC_CH_INTLVL_MED_gc = (0x02), /* Medium level */
    ADC_CH_INTLVL_HI_gc  = (0x03), /* High level */
} ADC_CH_INTLVL_t;

/* Channel Interrupt Flag */
typedef enum ADC_CH_CHIF_enum
{
    ADC_CH_CHIF_CLEAR_gc = (0x00), /* Channel Interrupt Flag - CLEAR */
    ADC_CH_CHIF_SET_gc   = (0x01), /* Channel Interrupt Flag - SET */
} ADC_CH_CHIF_t;

/* DMA Selection */
typedef enum ADC_DMASEL_enum
{
    ADC_DMASEL_OFF_gc    = (0x00<<6), /* Combined DMA request OFF */
    ADC_DMASEL_CH01_gc   = (0x01<<6), /* ADC Channel 0 or 1 */
    ADC_DMASEL_CH012_gc  = (0x02<<6), /* ADC Channel 0 or 1 or 2 */
    ADC_DMASEL_CH0123_gc = (0x03<<6), /* ADC Channel 0 or 1 or 2 or 3 */
} ADC_DMASEL_t;

/* Channel 3 Start Conversion */
typedef enum ADC_CH3START_enum
{
    ADC_CH3START_CLEAR_gc = (0x00), /* Channel 3 Start Conversion - CLEAR */
    ADC_CH3START_SET_gc   = (0x20), /* Channel 3 Start Conversion - SET */
} ADC_CH3START_t;

/* Channel 2 Start Conversion */
typedef enum ADC_CH2START_enum
{
    ADC_CH2START_CLEAR_gc = (0x00), /* Channel 2 Start Conversion - CLEAR */
    ADC_CH2START_SET_gc   = (0x10), /* Channel 2 Start Conversion - SET */
} ADC_CH2START_t;

/* Channel 1 Start Conversion */
typedef enum ADC_CH1START_enum
{
    ADC_CH1START_CLEAR_gc = (0x00), /* Channel 1 Start Conversion - CLEAR */
    ADC_CH1START_SET_gc   = (0x08), /* Channel 1 Start Conversion - SET */
} ADC_CH1START_t;

/* Channel 0 Start Conversion */
typedef enum ADC_CH0START_enum
{
    ADC_CH0START_CLEAR_gc = (0x00), /* Channel 0 Start Conversion - CLEAR */
    ADC_CH0START_SET_gc   = (0x04), /* Channel 0 Start Conversion - SET */
} ADC_CH0START_t;

/* Flush Pipeline */
typedef enum ADC_FLUSH_enum
{
    ADC_FLUSH_CLEAR_gc = (0x00), /* Flush Pipeline - CLEAR */
    ADC_FLUSH_SET_gc   = (0x02), /* Flush Pipeline - SET */
} ADC_FLUSH_t;

/* Enable ADC */
typedef enum ADC_ENABLE_enum
{
    ADC_ENABLE_CLEAR_gc = (0x00), /* Enable ADC - CLEAR */
    ADC_ENABLE_SET_gc   = (0x01), /* Enable ADC - SET */
} ADC_ENABLE_t;

/* Conversion Mode */
typedef enum ADC_CONMODE_enum
{
    ADC_CONMODE_CLEAR_gc = (0x00), /* Conversion Mode - CLEAR */
    ADC_CONMODE_SET_gc   = (0x10), /* Conversion Mode - SET */
} ADC_CONMODE_t;

/* Free Running Mode Enable */
typedef enum ADC_FREERUN_enum
{
    ADC_FREERUN_CLEAR_gc = (0x00), /* Free Running Mode Enable - CLEAR */
    ADC_FREERUN_SET_gc   = (0x08), /* Free Running Mode Enable - SET */
} ADC_FREERUN_t;

/* Result Resolution */
typedef enum ADC_RESOLUTION_enum
{
    ADC_RESOLUTION_12BIT_gc     = (0x00<<1), /* 12-bit right-adjusted result */
    ADC_RESOLUTION_8BIT_gc      = (0x02<<1), /* 8-bit right-adjusted result */
    ADC_RESOLUTION_LEFT12BIT_gc = (0x03<<1), /* 12-bit left-adjusted result */
} ADC_RESOLUTION_t;

/* Reference Selection */
typedef enum ADC_REFSEL_enum
{
    ADC_REFSEL_INT1V_gc  = (0x00<<4), /* Internal 1V */
    ADC_REFSEL_INTVCC_gc = (0x01<<4), /* Internal VCC / 1.6V */
    ADC_REFSEL_AREFA_gc  = (0x02<<4), /* External reference on PORT A */
    ADC_REFSEL_AREFB_gc  = (0x03<<4), /* External reference on PORT B */
} ADC_REFSEL_t;

/* Bandgap enable */
typedef enum ADC_BANDGAP_enum
{
    ADC_BANDGAP_CLEAR_gc = (0x00), /* Bandgap enable - CLEAR */
    ADC_BANDGAP_SET_gc   = (0x02), /* Bandgap enable - SET */
} ADC_BANDGAP_t;

/* Temperature Reference Enable */
typedef enum ADC_TEMPREF_enum
{
    ADC_TEMPREF_CLEAR_gc = (0x00), /* Temperature Reference Enable - CLEAR */
    ADC_TEMPREF_SET_gc   = (0x01), /* Temperature Reference Enable - SET */
} ADC_TEMPREF_t;

/* Channel Sweep Selection */
typedef enum ADC_SWEEP_enum
{
    ADC_SWEEP_0_gc    = (0x00<<6), /* ADC Channel 0 */
    ADC_SWEEP_01_gc   = (0x01<<6), /* ADC Channel 0,1 */
    ADC_SWEEP_012_gc  = (0x02<<6), /* ADC Channel 0,1,2 */
    ADC_SWEEP_0123_gc = (0x03<<6), /* ADC Channel 0,1,2,3 */
} ADC_SWEEP_t;

/* Event Input Select */
typedef enum ADC_EVSEL_enum
{
    ADC_EVSEL_0123_gc = (0x00<<3), /* Event Channel 0,1,2,3 */
    ADC_EVSEL_1234_gc = (0x01<<3), /* Event Channel 1,2,3,4 */
    ADC_EVSEL_2345_gc = (0x02<<3), /* Event Channel 2,3,4,5 */
    ADC_EVSEL_3456_gc = (0x03<<3), /* Event Channel 3,4,5,6 */
    ADC_EVSEL_4567_gc = (0x04<<3), /* Event Channel 4,5,6,7 */
    ADC_EVSEL_567_gc  = (0x05<<3), /* Event Channel 5,6,7 */
    ADC_EVSEL_67_gc   = (0x06<<3), /* Event Channel 6,7 */
    ADC_EVSEL_7_gc    = (0x07<<3), /* Event Channel 7 */
} ADC_EVSEL_t;

/* Event Action Select */
typedef enum ADC_EVACT_enum
{
    ADC_EVACT_NONE_gc      = (0x00), /* No event action */
    ADC_EVACT_CH0_gc       = (0x01), /* First event triggers channel 0 */
    ADC_EVACT_CH01_gc      = (0x02), /* First two events trigger channel 0,1 */
    ADC_EVACT_CH012_gc     = (0x03), /* First three events trigger channel 0,1,2 */
    ADC_EVACT_CH0123_gc    = (0x04), /* Events trigger channel 0,1,2,3 */
    ADC_EVACT_SWEEP_gc     = (0x05), /* First event triggers sweep */
    ADC_EVACT_SYNCSWEEP_gc = (0x06), /* The ADC is flushed and restarted for accurate timing */
} ADC_EVACT_t;

/* Clock Prescaler Selection */
typedef enum ADC_PRESCALER_enum
{
    ADC_PRESCALER_DIV4_gc   = (0x00), /* Divide clock by 4 */
    ADC_PRESCALER_DIV8_gc   = (0x01), /* Divide clock by 8 */
    ADC_PRESCALER_DIV16_gc  = (0x02), /* Divide clock by 16 */
    ADC_PRESCALER_DIV32_gc  = (0x03), /* Divide clock by 32 */
    ADC_PRESCALER_DIV64_gc  = (0x04), /* Divide clock by 64 */
    ADC_PRESCALER_DIV128_gc = (0x05), /* Divide clock by 128 */
    ADC_PRESCALER_DIV256_gc = (0x06), /* Divide clock by 256 */
    ADC_PRESCALER_DIV512_gc = (0x07), /* Divide clock by 512 */
} ADC_PRESCALER_t;

/* Channel 3 Interrupt Flag */
typedef enum ADC_CH3IF_enum
{
    ADC_CH3IF_CLEAR_gc = (0x00), /* Channel 3 Interrupt Flag - CLEAR */
    ADC_CH3IF_SET_gc   = (0x08), /* Channel 3 Interrupt Flag - SET */
} ADC_CH3IF_t;

/* Channel 2 Interrupt Flag */
typedef enum ADC_CH2IF_enum
{
    ADC_CH2IF_CLEAR_gc = (0x00), /* Channel 2 Interrupt Flag - CLEAR */
    ADC_CH2IF_SET_gc   = (0x04), /* Channel 2 Interrupt Flag - SET */
} ADC_CH2IF_t;

/* Channel 1 Interrupt Flag */
typedef enum ADC_CH1IF_enum
{
    ADC_CH1IF_CLEAR_gc = (0x00), /* Channel 1 Interrupt Flag - CLEAR */
    ADC_CH1IF_SET_gc   = (0x02), /* Channel 1 Interrupt Flag - SET */
} ADC_CH1IF_t;

/* Channel 0 Interrupt Flag */
typedef enum ADC_CH0IF_enum
{
    ADC_CH0IF_CLEAR_gc = (0x00), /* Channel 0 Interrupt Flag - CLEAR */
    ADC_CH0IF_SET_gc   = (0x01), /* Channel 0 Interrupt Flag - SET */
} ADC_CH0IF_t;

/*
--------------------------------------------------------------------------------
DAC - Digital/Analog Converter
--------------------------------------------------------------------------------
*/

typedef struct DAC_struct
{
    register8_t CTRLA;        /* Control Register A */
    register8_t CTRLB;        /* Control Register B */
    register8_t CTRLC;        /* Control Register C */
    register8_t EVCTRL;       /* Event Input Control */
    register8_t TIMCTRL;      /* Timing Control */
    register8_t STATUS;       /* Status */
    register8_t rsv_0x06[2];  /* RESERVED REGISTER BLOCK */
    register8_t GAINCAL;      /* Gain Calibration */
    register8_t OFFSETCAL;    /* Offset Calibration */
    register8_t rsv_0x0A[14]; /* RESERVED REGISTER BLOCK */
    _REGISTER16 (CH0DATA);    /* Channel 0 Data */
    register8_t rsv_0x19;     /* RESERVED REGISTER */
    _REGISTER16 (CH1DATA);    /* Channel 1 Data */
} DAC_t;


/* Internal Output Enable */
typedef enum DAC_IDOEN_enum
{
    DAC_IDOEN_CLEAR_gc = (0x00), /* Internal Output Enable - CLEAR */
    DAC_IDOEN_SET_gc   = (0x10), /* Internal Output Enable - SET */
} DAC_IDOEN_t;

/* Channel 1 Output Enable */
typedef enum DAC_CH1EN_enum
{
    DAC_CH1EN_CLEAR_gc = (0x00), /* Channel 1 Output Enable - CLEAR */
    DAC_CH1EN_SET_gc   = (0x08), /* Channel 1 Output Enable - SET */
} DAC_CH1EN_t;

/* Channel 0 Output Enable */
typedef enum DAC_CH0EN_enum
{
    DAC_CH0EN_CLEAR_gc = (0x00), /* Channel 0 Output Enable - CLEAR */
    DAC_CH0EN_SET_gc   = (0x04), /* Channel 0 Output Enable - SET */
} DAC_CH0EN_t;

/* Low Power Mode */
typedef enum DAC_LPMODE_enum
{
    DAC_LPMODE_CLEAR_gc = (0x00), /* Low Power Mode - CLEAR */
    DAC_LPMODE_SET_gc   = (0x02), /* Low Power Mode - SET */
} DAC_LPMODE_t;

/* Enable */
typedef enum DAC_ENABLE_enum
{
    DAC_ENABLE_CLEAR_gc = (0x00), /* Enable - CLEAR */
    DAC_ENABLE_SET_gc   = (0x01), /* Enable - SET */
} DAC_ENABLE_t;

/* Channel Select */
typedef enum DAC_CHSEL_enum
{
    DAC_CHSEL_SINGLE_gc = (0x00<<5), /* Single channel operation (Channel A only) */
    DAC_CHSEL_DUAL_gc   = (0x02<<5), /* Dual channel operation (S/H on both channels) */
} DAC_CHSEL_t;

/* Channel 1 Event Trig Enable */
typedef enum DAC_CH1TRIG_enum
{
    DAC_CH1TRIG_CLEAR_gc = (0x00), /* Channel 1 Event Trig Enable - CLEAR */
    DAC_CH1TRIG_SET_gc   = (0x02), /* Channel 1 Event Trig Enable - SET */
} DAC_CH1TRIG_t;

/* Channel 0 Event Trig Enable */
typedef enum DAC_CH0TRIG_enum
{
    DAC_CH0TRIG_CLEAR_gc = (0x00), /* Channel 0 Event Trig Enable - CLEAR */
    DAC_CH0TRIG_SET_gc   = (0x01), /* Channel 0 Event Trig Enable - SET */
} DAC_CH0TRIG_t;

/* Reference Select */
typedef enum DAC_REFSEL_enum
{
    DAC_REFSEL_INT1V_gc = (0x00<<3), /* Internal 1V  */
    DAC_REFSEL_AVCC_gc  = (0x01<<3), /* Analog supply voltage */
    DAC_REFSEL_AREFA_gc = (0x02<<3), /* External reference on AREF on PORTA */
    DAC_REFSEL_AREFB_gc = (0x03<<3), /* External reference on AREF on PORTB */
} DAC_REFSEL_t;

/* Left-adjust Result */
typedef enum DAC_LEFTADJ_enum
{
    DAC_LEFTADJ_CLEAR_gc = (0x00), /* Left-adjust Result - CLEAR */
    DAC_LEFTADJ_SET_gc   = (0x01), /* Left-adjust Result - SET */
} DAC_LEFTADJ_t;

/* Event Input Selection */
typedef enum DAC_EVSEL_enum
{
    DAC_EVSEL_0_gc = (0x00), /* Event Channel 0 */
    DAC_EVSEL_1_gc = (0x01), /* Event Channel 1 */
    DAC_EVSEL_2_gc = (0x02), /* Event Channel 2 */
    DAC_EVSEL_3_gc = (0x03), /* Event Channel 3 */
    DAC_EVSEL_4_gc = (0x04), /* Event Channel 4 */
    DAC_EVSEL_5_gc = (0x05), /* Event Channel 5 */
    DAC_EVSEL_6_gc = (0x06), /* Event Channel 6 */
    DAC_EVSEL_7_gc = (0x07), /* Event Channel 7 */
} DAC_EVSEL_t;

/* Conversion Intercal */
typedef enum DAC_CONINTVAL_enum
{
    DAC_CONINTVAL_1CLK_gc   = (0x00<<4), /* 1 CLK / 2 CLK in S/H mode */
    DAC_CONINTVAL_2CLK_gc   = (0x01<<4), /* 2 CLK / 3 CLK in S/H mode */
    DAC_CONINTVAL_4CLK_gc   = (0x02<<4), /* 4 CLK / 6 CLK in S/H mode */
    DAC_CONINTVAL_8CLK_gc   = (0x03<<4), /* 8 CLK / 12 CLK in S/H mode */
    DAC_CONINTVAL_16CLK_gc  = (0x04<<4), /* 16 CLK / 24 CLK in S/H mode */
    DAC_CONINTVAL_32CLK_gc  = (0x05<<4), /* 32 CLK / 48 CLK in S/H mode */
    DAC_CONINTVAL_64CLK_gc  = (0x06<<4), /* 64 CLK / 96 CLK in S/H mode */
    DAC_CONINTVAL_128CLK_gc = (0x07<<4), /* 128 CLK / 192 CLK in S/H mode */
} DAC_CONINTVAL_t;

/* Refresh Timing Control */
typedef enum DAC_REFRESH_enum
{
    DAC_REFRESH_16CLK_gc    = (0x00), /* 16 CLK */
    DAC_REFRESH_32CLK_gc    = (0x01), /* 32 CLK */
    DAC_REFRESH_64CLK_gc    = (0x02), /* 64 CLK */
    DAC_REFRESH_128CLK_gc   = (0x03), /* 128 CLK */
    DAC_REFRESH_256CLK_gc   = (0x04), /* 256 CLK */
    DAC_REFRESH_512CLK_gc   = (0x05), /* 512 CLK */
    DAC_REFRESH_1024CLK_gc  = (0x06), /* 1024 CLK */
    DAC_REFRESH_2048CLK_gc  = (0x07), /* 2048 CLK */
    DAC_REFRESH_4096CLK_gc  = (0x08), /* 4096 CLK */
    DAC_REFRESH_8192CLK_gc  = (0x09), /* 8192 CLK */
    DAC_REFRESH_16384CLK_gc = (0x0A), /* 16384 CLK */
    DAC_REFRESH_32768CLK_gc = (0x0B), /* 32768 CLK */
    DAC_REFRESH_65536CLK_gc = (0x0C), /* 65536 CLK */
    DAC_REFRESH_OFF_gc      = (0x0F), /* Auto refresh OFF */
} DAC_REFRESH_t;

/* Channel 1 Data Register Empty */
typedef enum DAC_CH1DRE_enum
{
    DAC_CH1DRE_CLEAR_gc = (0x00), /* Channel 1 Data Register Empty - CLEAR */
    DAC_CH1DRE_SET_gc   = (0x02), /* Channel 1 Data Register Empty - SET */
} DAC_CH1DRE_t;

/* Channel 0 Data Register Empty */
typedef enum DAC_CH0DRE_enum
{
    DAC_CH0DRE_CLEAR_gc = (0x00), /* Channel 0 Data Register Empty - CLEAR */
    DAC_CH0DRE_SET_gc   = (0x01), /* Channel 0 Data Register Empty - SET */
} DAC_CH0DRE_t;

/*
--------------------------------------------------------------------------------
RTC - Real-Time Counter
--------------------------------------------------------------------------------
*/

typedef struct RTC_struct
{
    register8_t CTRL;        /* Control Register */
    register8_t STATUS;      /* Status Register */
    register8_t INTCTRL;     /* Interrupt Control Register */
    register8_t INTFLAGS;    /* Interrupt Flags */
    register8_t TEMP;        /* Temporary register */
    register8_t rsv_0x05[3]; /* RESERVED REGISTER BLOCK */
    _REGISTER16 (CNT);       /* Count Register */
    register8_t rsv_0x09;    /* RESERVED REGISTER */
    _REGISTER16 (PER);       /* Period Register */
    register8_t rsv_0x0B;    /* RESERVED REGISTER */
    _REGISTER16 (COMP);      /* Compare Register */
} RTC_t;


/* Prescaling Factor */
typedef enum RTC_PRESCALER_enum
{
    RTC_PRESCALER_OFF_gc     = (0x00), /* RTC Off */
    RTC_PRESCALER_DIV1_gc    = (0x01), /* RTC Clock */
    RTC_PRESCALER_DIV2_gc    = (0x02), /* RTC Clock / 2 */
    RTC_PRESCALER_DIV8_gc    = (0x03), /* RTC Clock / 8 */
    RTC_PRESCALER_DIV16_gc   = (0x04), /* RTC Clock / 16 */
    RTC_PRESCALER_DIV64_gc   = (0x05), /* RTC Clock / 64 */
    RTC_PRESCALER_DIV256_gc  = (0x06), /* RTC Clock / 256 */
    RTC_PRESCALER_DIV1024_gc = (0x07), /* RTC Clock / 1024 */
} RTC_PRESCALER_t;

/* Synchronization Busy Flag */
typedef enum RTC_SYNCBUSY_enum
{
    RTC_SYNCBUSY_CLEAR_gc = (0x00), /* Synchronization Busy Flag - CLEAR */
    RTC_SYNCBUSY_SET_gc   = (0x01), /* Synchronization Busy Flag - SET */
} RTC_SYNCBUSY_t;

/* Compare Match Interrupt Level */
typedef enum RTC_COMPINTLVL_enum
{
    RTC_COMPINTLVL_OFF_gc = (0x00<<2), /* Interrupt Disabled */
    RTC_COMPINTLVL_LO_gc  = (0x01<<2), /* Low Level */
    RTC_COMPINTLVL_MED_gc = (0x02<<2), /* Medium Level */
    RTC_COMPINTLVL_HI_gc  = (0x03<<2), /* High Level */
} RTC_COMPINTLVL_t;

/* Overflow Interrupt Level */
typedef enum RTC_OVFINTLVL_enum
{
    RTC_OVFINTLVL_OFF_gc = (0x00), /* Interrupt Disabled */
    RTC_OVFINTLVL_LO_gc  = (0x01), /* Low Level */
    RTC_OVFINTLVL_MED_gc = (0x02), /* Medium Level */
    RTC_OVFINTLVL_HI_gc  = (0x03), /* High Level */
} RTC_OVFINTLVL_t;

/* Compare Match Interrupt Flag */
typedef enum RTC_COMPIF_enum
{
    RTC_COMPIF_CLEAR_gc = (0x00), /* Compare Match Interrupt Flag - CLEAR */
    RTC_COMPIF_SET_gc   = (0x02), /* Compare Match Interrupt Flag - SET */
} RTC_COMPIF_t;

/* Overflow Interrupt Flag */
typedef enum RTC_OVFIF_enum
{
    RTC_OVFIF_CLEAR_gc = (0x00), /* Overflow Interrupt Flag - CLEAR */
    RTC_OVFIF_SET_gc   = (0x01), /* Overflow Interrupt Flag - SET */
} RTC_OVFIF_t;

/*
--------------------------------------------------------------------------------
TWI - Two-Wire Interface
--------------------------------------------------------------------------------
*/

typedef struct TWI_MASTER_struct
{
    register8_t CTRLA;  /* Control Register A */
    register8_t CTRLB;  /* Control Register B */
    register8_t CTRLC;  /* Control Register C */
    register8_t STATUS; /* Status Register */
    register8_t BAUD;   /* Baud Rate Control Register */
    register8_t ADDR;   /* Address Register */
    register8_t DATA;   /* Data Register */
} TWI_MASTER_t;


/*
--------------------------------------------------------------------------------
TWI - Two-Wire Interface
--------------------------------------------------------------------------------
*/

typedef struct TWI_SLAVE_struct
{
    register8_t CTRLA;    /* Control Register A */
    register8_t CTRLB;    /* Control Register B */
    register8_t STATUS;   /* Status Register */
    register8_t ADDR;     /* Address Register */
    register8_t DATA;     /* Data Register */
    register8_t ADDRMASK; /* Address Mask Register */
} TWI_SLAVE_t;


/*
--------------------------------------------------------------------------------
TWI - Two-Wire Interface
--------------------------------------------------------------------------------
*/

typedef struct TWI_struct
{
    register8_t CTRL; /* TWI Common Control Register */
} TWI_t;


/* Interrupt Level */
typedef enum TWI_MASTER_INTLVL_enum
{
    TWI_MASTER_INTLVL_OFF_gc = (0x00<<6), /* Interrupt Disabled */
    TWI_MASTER_INTLVL_LO_gc  = (0x01<<6), /* Low Level */
    TWI_MASTER_INTLVL_MED_gc = (0x02<<6), /* Medium Level */
    TWI_MASTER_INTLVL_HI_gc  = (0x03<<6), /* High Level */
} TWI_MASTER_INTLVL_t;

/* Read Interrupt Enable */
typedef enum TWI_MASTER_RIEN_enum
{
    TWI_MASTER_RIEN_CLEAR_gc = (0x00), /* Read Interrupt Enable - CLEAR */
    TWI_MASTER_RIEN_SET_gc   = (0x20), /* Read Interrupt Enable - SET */
} TWI_MASTER_RIEN_t;

/* Write Interrupt Enable */
typedef enum TWI_MASTER_WIEN_enum
{
    TWI_MASTER_WIEN_CLEAR_gc = (0x00), /* Write Interrupt Enable - CLEAR */
    TWI_MASTER_WIEN_SET_gc   = (0x10), /* Write Interrupt Enable - SET */
} TWI_MASTER_WIEN_t;

/* Enable TWI Master */
typedef enum TWI_MASTER_ENABLE_enum
{
    TWI_MASTER_ENABLE_CLEAR_gc = (0x00), /* Enable TWI Master - CLEAR */
    TWI_MASTER_ENABLE_SET_gc   = (0x08), /* Enable TWI Master - SET */
} TWI_MASTER_ENABLE_t;

/* Inactive Bus timeout */
typedef enum TWI_MASTER_TIMEOUT_enum
{
    TWI_MASTER_TIMEOUT_DISABLED_gc = (0x00<<2), /* Bus Timeout Disabled */
    TWI_MASTER_TIMEOUT_50US_gc     = (0x01<<2), /* 50 Microseconds */
    TWI_MASTER_TIMEOUT_100US_gc    = (0x02<<2), /* 100 Microseconds */
    TWI_MASTER_TIMEOUT_200US_gc    = (0x03<<2), /* 200 Microseconds */
} TWI_MASTER_TIMEOUT_t;

/* Quick Command Enable */
typedef enum TWI_MASTER_QCEN_enum
{
    TWI_MASTER_QCEN_CLEAR_gc = (0x00), /* Quick Command Enable - CLEAR */
    TWI_MASTER_QCEN_SET_gc   = (0x02), /* Quick Command Enable - SET */
} TWI_MASTER_QCEN_t;

/* Smart Mode Enable */
typedef enum TWI_MASTER_SMEN_enum
{
    TWI_MASTER_SMEN_CLEAR_gc = (0x00), /* Smart Mode Enable - CLEAR */
    TWI_MASTER_SMEN_SET_gc   = (0x01), /* Smart Mode Enable - SET */
} TWI_MASTER_SMEN_t;

/* Acknowledge Action */
typedef enum TWI_MASTER_ACKACT_enum
{
    TWI_MASTER_ACKACT_CLEAR_gc = (0x00), /* Acknowledge Action - CLEAR */
    TWI_MASTER_ACKACT_SET_gc   = (0x04), /* Acknowledge Action - SET */
} TWI_MASTER_ACKACT_t;

/* Command */
typedef enum TWI_MASTER_CMD_enum
{
    TWI_MASTER_CMD_NOACT_gc     = (0x00), /* No Action */
    TWI_MASTER_CMD_REPSTART_gc  = (0x01), /* Issue Repeated Start Condition */
    TWI_MASTER_CMD_RECVTRANS_gc = (0x02), /* Receive or Transmit Data */
    TWI_MASTER_CMD_STOP_gc      = (0x03), /* Issue Stop Condition */
} TWI_MASTER_CMD_t;

/* Read Interrupt Flag */
typedef enum TWI_MASTER_RIF_enum
{
    TWI_MASTER_RIF_CLEAR_gc = (0x00), /* Read Interrupt Flag - CLEAR */
    TWI_MASTER_RIF_SET_gc   = (0x80), /* Read Interrupt Flag - SET */
} TWI_MASTER_RIF_t;

/* Write Interrupt Flag */
typedef enum TWI_MASTER_WIF_enum
{
    TWI_MASTER_WIF_CLEAR_gc = (0x00), /* Write Interrupt Flag - CLEAR */
    TWI_MASTER_WIF_SET_gc   = (0x40), /* Write Interrupt Flag - SET */
} TWI_MASTER_WIF_t;

/* Clock Hold */
typedef enum TWI_MASTER_CLKHOLD_enum
{
    TWI_MASTER_CLKHOLD_CLEAR_gc = (0x00), /* Clock Hold - CLEAR */
    TWI_MASTER_CLKHOLD_SET_gc   = (0x20), /* Clock Hold - SET */
} TWI_MASTER_CLKHOLD_t;

/* Received Acknowledge */
typedef enum TWI_MASTER_RXACK_enum
{
    TWI_MASTER_RXACK_CLEAR_gc = (0x00), /* Received Acknowledge - CLEAR */
    TWI_MASTER_RXACK_SET_gc   = (0x10), /* Received Acknowledge - SET */
} TWI_MASTER_RXACK_t;

/* Arbitration Lost */
typedef enum TWI_MASTER_ARBLOST_enum
{
    TWI_MASTER_ARBLOST_CLEAR_gc = (0x00), /* Arbitration Lost - CLEAR */
    TWI_MASTER_ARBLOST_SET_gc   = (0x08), /* Arbitration Lost - SET */
} TWI_MASTER_ARBLOST_t;

/* Bus Error */
typedef enum TWI_MASTER_BUSERR_enum
{
    TWI_MASTER_BUSERR_CLEAR_gc = (0x00), /* Bus Error - CLEAR */
    TWI_MASTER_BUSERR_SET_gc   = (0x04), /* Bus Error - SET */
} TWI_MASTER_BUSERR_t;

/* Bus State */
typedef enum TWI_MASTER_BUSSTATE_enum
{
    TWI_MASTER_BUSSTATE_UNKNOWN_gc = (0x00), /* Unknown Bus State */
    TWI_MASTER_BUSSTATE_IDLE_gc    = (0x01), /* Bus is Idle */
    TWI_MASTER_BUSSTATE_OWNER_gc   = (0x02), /* This Module Controls The Bus */
    TWI_MASTER_BUSSTATE_BUSY_gc    = (0x03), /* The Bus is Busy */
} TWI_MASTER_BUSSTATE_t;

/* Interrupt Level */
typedef enum TWI_SLAVE_INTLVL_enum
{
    TWI_SLAVE_INTLVL_OFF_gc = (0x00<<6), /* Interrupt Disabled */
    TWI_SLAVE_INTLVL_LO_gc  = (0x01<<6), /* Low Level */
    TWI_SLAVE_INTLVL_MED_gc = (0x02<<6), /* Medium Level */
    TWI_SLAVE_INTLVL_HI_gc  = (0x03<<6), /* High Level */
} TWI_SLAVE_INTLVL_t;

/* Data Interrupt Enable */
typedef enum TWI_SLAVE_DIEN_enum
{
    TWI_SLAVE_DIEN_CLEAR_gc = (0x00), /* Data Interrupt Enable - CLEAR */
    TWI_SLAVE_DIEN_SET_gc   = (0x20), /* Data Interrupt Enable - SET */
} TWI_SLAVE_DIEN_t;

/* Address/Stop Interrupt Enable */
typedef enum TWI_SLAVE_APIEN_enum
{
    TWI_SLAVE_APIEN_CLEAR_gc = (0x00), /* Address/Stop Interrupt Enable - CLEAR */
    TWI_SLAVE_APIEN_SET_gc   = (0x10), /* Address/Stop Interrupt Enable - SET */
} TWI_SLAVE_APIEN_t;

/* Enable TWI Slave */
typedef enum TWI_SLAVE_ENABLE_enum
{
    TWI_SLAVE_ENABLE_CLEAR_gc = (0x00), /* Enable TWI Slave - CLEAR */
    TWI_SLAVE_ENABLE_SET_gc   = (0x08), /* Enable TWI Slave - SET */
} TWI_SLAVE_ENABLE_t;

/* Stop Interrupt Enable */
typedef enum TWI_SLAVE_PIEN_enum
{
    TWI_SLAVE_PIEN_CLEAR_gc = (0x00), /* Stop Interrupt Enable - CLEAR */
    TWI_SLAVE_PIEN_SET_gc   = (0x04), /* Stop Interrupt Enable - SET */
} TWI_SLAVE_PIEN_t;

/* Promiscuous Mode Enable */
typedef enum TWI_SLAVE_PMEN_enum
{
    TWI_SLAVE_PMEN_CLEAR_gc = (0x00), /* Promiscuous Mode Enable - CLEAR */
    TWI_SLAVE_PMEN_SET_gc   = (0x02), /* Promiscuous Mode Enable - SET */
} TWI_SLAVE_PMEN_t;

/* Smart Mode Enable */
typedef enum TWI_SLAVE_SMEN_enum
{
    TWI_SLAVE_SMEN_CLEAR_gc = (0x00), /* Smart Mode Enable - CLEAR */
    TWI_SLAVE_SMEN_SET_gc   = (0x01), /* Smart Mode Enable - SET */
} TWI_SLAVE_SMEN_t;

/* Acknowledge Action */
typedef enum TWI_SLAVE_ACKACT_enum
{
    TWI_SLAVE_ACKACT_CLEAR_gc = (0x00), /* Acknowledge Action - CLEAR */
    TWI_SLAVE_ACKACT_SET_gc   = (0x04), /* Acknowledge Action - SET */
} TWI_SLAVE_ACKACT_t;

/* Command */
typedef enum TWI_SLAVE_CMD_enum
{
    TWI_SLAVE_CMD_NOACT_gc     = (0x00), /* No Action */
    TWI_SLAVE_CMD_COMPTRANS_gc = (0x02), /* Used To Complete a Transaction */
    TWI_SLAVE_CMD_RESPONSE_gc  = (0x03), /* Used in Response to Address/Data Interrupt */
} TWI_SLAVE_CMD_t;

/* Data Interrupt Flag */
typedef enum TWI_SLAVE_DIF_enum
{
    TWI_SLAVE_DIF_CLEAR_gc = (0x00), /* Data Interrupt Flag - CLEAR */
    TWI_SLAVE_DIF_SET_gc   = (0x80), /* Data Interrupt Flag - SET */
} TWI_SLAVE_DIF_t;

/* Address/Stop Interrupt Flag */
typedef enum TWI_SLAVE_APIF_enum
{
    TWI_SLAVE_APIF_CLEAR_gc = (0x00), /* Address/Stop Interrupt Flag - CLEAR */
    TWI_SLAVE_APIF_SET_gc   = (0x40), /* Address/Stop Interrupt Flag - SET */
} TWI_SLAVE_APIF_t;

/* Clock Hold */
typedef enum TWI_SLAVE_CLKHOLD_enum
{
    TWI_SLAVE_CLKHOLD_CLEAR_gc = (0x00), /* Clock Hold - CLEAR */
    TWI_SLAVE_CLKHOLD_SET_gc   = (0x20), /* Clock Hold - SET */
} TWI_SLAVE_CLKHOLD_t;

/* Received Acknowledge */
typedef enum TWI_SLAVE_RXACK_enum
{
    TWI_SLAVE_RXACK_CLEAR_gc = (0x00), /* Received Acknowledge - CLEAR */
    TWI_SLAVE_RXACK_SET_gc   = (0x10), /* Received Acknowledge - SET */
} TWI_SLAVE_RXACK_t;

/* Collision */
typedef enum TWI_SLAVE_COLL_enum
{
    TWI_SLAVE_COLL_CLEAR_gc = (0x00), /* Collision - CLEAR */
    TWI_SLAVE_COLL_SET_gc   = (0x08), /* Collision - SET */
} TWI_SLAVE_COLL_t;

/* Bus Error */
typedef enum TWI_SLAVE_BUSERR_enum
{
    TWI_SLAVE_BUSERR_CLEAR_gc = (0x00), /* Bus Error - CLEAR */
    TWI_SLAVE_BUSERR_SET_gc   = (0x04), /* Bus Error - SET */
} TWI_SLAVE_BUSERR_t;

/* Read/Write Direction */
typedef enum TWI_SLAVE_DIR_enum
{
    TWI_SLAVE_DIR_CLEAR_gc = (0x00), /* Read/Write Direction - CLEAR */
    TWI_SLAVE_DIR_SET_gc   = (0x02), /* Read/Write Direction - SET */
} TWI_SLAVE_DIR_t;

/* Slave Address or Stop */
typedef enum TWI_SLAVE_AP_enum
{
    TWI_SLAVE_AP_CLEAR_gc = (0x00), /* Slave Address or Stop - CLEAR */
    TWI_SLAVE_AP_SET_gc   = (0x01), /* Slave Address or Stop - SET */
} TWI_SLAVE_AP_t;

/* Address Mask */
#define TWI_SLAVE_ADDRMASK_ADDRMASK_gc(x) ((x<<1) & 0xFE)

/* Address Enable */
typedef enum TWI_SLAVE_ADDREN_enum
{
    TWI_SLAVE_ADDREN_CLEAR_gc = (0x00), /* Address Enable - CLEAR */
    TWI_SLAVE_ADDREN_SET_gc   = (0x01), /* Address Enable - SET */
} TWI_SLAVE_ADDREN_t;

/* SDA Hold Time Enable */
typedef enum TWI_SDAHOLD_enum
{
    TWI_SDAHOLD_OFF_gc   = (0x00<<1), /* SDA hold time off */
    TWI_SDAHOLD_50NS_gc  = (0x01<<1), /* Typical 50ns hold time */
    TWI_SDAHOLD_300NS_gc = (0x02<<1), /* Typical 300ns hold time */
    TWI_SDAHOLD_400NS_gc = (0x03<<1), /* Typical 400ns hold time */
} TWI_SDAHOLD_t;

/* External Driver Interface Enable */
typedef enum TWI_EDIEN_enum
{
    TWI_EDIEN_CLEAR_gc = (0x00), /* External Driver Interface Enable - CLEAR */
    TWI_EDIEN_SET_gc   = (0x01), /* External Driver Interface Enable - SET */
} TWI_EDIEN_t;

/*
--------------------------------------------------------------------------------
PORT - Port Configuration
--------------------------------------------------------------------------------
*/

typedef struct PORTCFG_struct
{
    register8_t MPCMASK;  /* Multi-pin Configuration Mask */
    register8_t rsv_0x01; /* RESERVED REGISTER */
    register8_t VPCTRLA;  /* Virtual Port Control Register A */
    register8_t VPCTRLB;  /* Virtual Port Control Register B */
    register8_t CLKEVOUT; /* Clock and Event Out Register */
} PORTCFG_t;


/*
--------------------------------------------------------------------------------
PORT - Port Configuration
--------------------------------------------------------------------------------
*/

typedef struct VPORT_struct
{
    register8_t DIR;      /* I/O Port Data Direction */
    register8_t OUT;      /* I/O Port Output */
    register8_t IN;       /* I/O Port Input */
    register8_t INTFLAGS; /* Interrupt Flag Register */
} VPORT_t;


/*
--------------------------------------------------------------------------------
PORT - Port Configuration
--------------------------------------------------------------------------------
*/

typedef struct PORT_struct
{
    register8_t DIR;         /* I/O Port Data Direction */
    register8_t DIRSET;      /* I/O Port Data Direction Set */
    register8_t DIRCLR;      /* I/O Port Data Direction Clear */
    register8_t DIRTGL;      /* I/O Port Data Direction Toggle */
    register8_t OUT;         /* I/O Port Output */
    register8_t OUTSET;      /* I/O Port Output Set */
    register8_t OUTCLR;      /* I/O Port Output Clear */
    register8_t OUTTGL;      /* I/O Port Output Toggle */
    register8_t IN;          /* I/O port Input */
    register8_t INTCTRL;     /* Interrupt Control Register */
    register8_t INT0MASK;    /* Port Interrupt 0 Mask */
    register8_t INT1MASK;    /* Port Interrupt 1 Mask */
    register8_t INTFLAGS;    /* Interrupt Flag Register */
    register8_t rsv_0x0D[3]; /* RESERVED REGISTER BLOCK */
    register8_t PIN0CTRL;    /* Pin 0 Control Register */
    register8_t PIN1CTRL;    /* Pin 1 Control Register */
    register8_t PIN2CTRL;    /* Pin 2 Control Register */
    register8_t PIN3CTRL;    /* Pin 3 Control Register */
    register8_t PIN4CTRL;    /* Pin 4 Control Register */
    register8_t PIN5CTRL;    /* Pin 5 Control Register */
    register8_t PIN6CTRL;    /* Pin 6 Control Register */
    register8_t PIN7CTRL;    /* Pin 7 Control Register */
} PORT_t;


/* Virtual Port 1 Mapping */
typedef enum PORTCFG_VP1MAP_enum
{
    PORTCFG_VP1MAP_PORTA_gc = (0x00<<4), /* Mapped To PORTA */
    PORTCFG_VP1MAP_PORTB_gc = (0x01<<4), /* Mapped To PORTB */
    PORTCFG_VP1MAP_PORTC_gc = (0x02<<4), /* Mapped To PORTC */
    PORTCFG_VP1MAP_PORTD_gc = (0x03<<4), /* Mapped To PORTD */
    PORTCFG_VP1MAP_PORTE_gc = (0x04<<4), /* Mapped To PORTE */
    PORTCFG_VP1MAP_PORTF_gc = (0x05<<4), /* Mapped To PORTF */
    PORTCFG_VP1MAP_PORTG_gc = (0x06<<4), /* Mapped To PORTG */
    PORTCFG_VP1MAP_PORTH_gc = (0x07<<4), /* Mapped To PORTH */
    PORTCFG_VP1MAP_PORTJ_gc = (0x08<<4), /* Mapped To PORTJ */
    PORTCFG_VP1MAP_PORTK_gc = (0x09<<4), /* Mapped To PORTK */
    PORTCFG_VP1MAP_PORTL_gc = (0x0A<<4), /* Mapped To PORTL */
    PORTCFG_VP1MAP_PORTM_gc = (0x0B<<4), /* Mapped To PORTM */
    PORTCFG_VP1MAP_PORTN_gc = (0x0C<<4), /* Mapped To PORTN */
    PORTCFG_VP1MAP_PORTP_gc = (0x0D<<4), /* Mapped To PORTP */
    PORTCFG_VP1MAP_PORTQ_gc = (0x0E<<4), /* Mapped To PORTQ */
    PORTCFG_VP1MAP_PORTR_gc = (0x0F<<4), /* Mapped To PORTR */
} PORTCFG_VP1MAP_t;

/* Virtual Port 0 Mapping */
typedef enum PORTCFG_VP0MAP_enum
{
    PORTCFG_VP0MAP_PORTA_gc = (0x00), /* Mapped To PORTA */
    PORTCFG_VP0MAP_PORTB_gc = (0x01), /* Mapped To PORTB */
    PORTCFG_VP0MAP_PORTC_gc = (0x02), /* Mapped To PORTC */
    PORTCFG_VP0MAP_PORTD_gc = (0x03), /* Mapped To PORTD */
    PORTCFG_VP0MAP_PORTE_gc = (0x04), /* Mapped To PORTE */
    PORTCFG_VP0MAP_PORTF_gc = (0x05), /* Mapped To PORTF */
    PORTCFG_VP0MAP_PORTG_gc = (0x06), /* Mapped To PORTG */
    PORTCFG_VP0MAP_PORTH_gc = (0x07), /* Mapped To PORTH */
    PORTCFG_VP0MAP_PORTJ_gc = (0x08), /* Mapped To PORTJ */
    PORTCFG_VP0MAP_PORTK_gc = (0x09), /* Mapped To PORTK */
    PORTCFG_VP0MAP_PORTL_gc = (0x0A), /* Mapped To PORTL */
    PORTCFG_VP0MAP_PORTM_gc = (0x0B), /* Mapped To PORTM */
    PORTCFG_VP0MAP_PORTN_gc = (0x0C), /* Mapped To PORTN */
    PORTCFG_VP0MAP_PORTP_gc = (0x0D), /* Mapped To PORTP */
    PORTCFG_VP0MAP_PORTQ_gc = (0x0E), /* Mapped To PORTQ */
    PORTCFG_VP0MAP_PORTR_gc = (0x0F), /* Mapped To PORTR */
} PORTCFG_VP0MAP_t;

/* Virtual Port 3 Mapping */
typedef enum PORTCFG_VP3MAP_enum
{
    PORTCFG_VP3MAP_PORTA_gc = (0x00<<4), /* Mapped To PORTA */
    PORTCFG_VP3MAP_PORTB_gc = (0x01<<4), /* Mapped To PORTB */
    PORTCFG_VP3MAP_PORTC_gc = (0x02<<4), /* Mapped To PORTC */
    PORTCFG_VP3MAP_PORTD_gc = (0x03<<4), /* Mapped To PORTD */
    PORTCFG_VP3MAP_PORTE_gc = (0x04<<4), /* Mapped To PORTE */
    PORTCFG_VP3MAP_PORTF_gc = (0x05<<4), /* Mapped To PORTF */
    PORTCFG_VP3MAP_PORTG_gc = (0x06<<4), /* Mapped To PORTG */
    PORTCFG_VP3MAP_PORTH_gc = (0x07<<4), /* Mapped To PORTH */
    PORTCFG_VP3MAP_PORTJ_gc = (0x08<<4), /* Mapped To PORTJ */
    PORTCFG_VP3MAP_PORTK_gc = (0x09<<4), /* Mapped To PORTK */
    PORTCFG_VP3MAP_PORTL_gc = (0x0A<<4), /* Mapped To PORTL */
    PORTCFG_VP3MAP_PORTM_gc = (0x0B<<4), /* Mapped To PORTM */
    PORTCFG_VP3MAP_PORTN_gc = (0x0C<<4), /* Mapped To PORTN */
    PORTCFG_VP3MAP_PORTP_gc = (0x0D<<4), /* Mapped To PORTP */
    PORTCFG_VP3MAP_PORTQ_gc = (0x0E<<4), /* Mapped To PORTQ */
    PORTCFG_VP3MAP_PORTR_gc = (0x0F<<4), /* Mapped To PORTR */
} PORTCFG_VP3MAP_t;

/* Virtual Port 2 Mapping */
typedef enum PORTCFG_VP2MAP_enum
{
    PORTCFG_VP2MAP_PORTA_gc = (0x00), /* Mapped To PORTA */
    PORTCFG_VP2MAP_PORTB_gc = (0x01), /* Mapped To PORTB */
    PORTCFG_VP2MAP_PORTC_gc = (0x02), /* Mapped To PORTC */
    PORTCFG_VP2MAP_PORTD_gc = (0x03), /* Mapped To PORTD */
    PORTCFG_VP2MAP_PORTE_gc = (0x04), /* Mapped To PORTE */
    PORTCFG_VP2MAP_PORTF_gc = (0x05), /* Mapped To PORTF */
    PORTCFG_VP2MAP_PORTG_gc = (0x06), /* Mapped To PORTG */
    PORTCFG_VP2MAP_PORTH_gc = (0x07), /* Mapped To PORTH */
    PORTCFG_VP2MAP_PORTJ_gc = (0x08), /* Mapped To PORTJ */
    PORTCFG_VP2MAP_PORTK_gc = (0x09), /* Mapped To PORTK */
    PORTCFG_VP2MAP_PORTL_gc = (0x0A), /* Mapped To PORTL */
    PORTCFG_VP2MAP_PORTM_gc = (0x0B), /* Mapped To PORTM */
    PORTCFG_VP2MAP_PORTN_gc = (0x0C), /* Mapped To PORTN */
    PORTCFG_VP2MAP_PORTP_gc = (0x0D), /* Mapped To PORTP */
    PORTCFG_VP2MAP_PORTQ_gc = (0x0E), /* Mapped To PORTQ */
    PORTCFG_VP2MAP_PORTR_gc = (0x0F), /* Mapped To PORTR */
} PORTCFG_VP2MAP_t;

/* Clock Output Port */
typedef enum PORTCFG_CLKOUT_enum
{
    PORTCFG_CLKOUT_OFF_gc = (0x00), /* Clock Output Disabled */
    PORTCFG_CLKOUT_PC7_gc = (0x01), /* Clock Output on Port C pin 7 */
    PORTCFG_CLKOUT_PD7_gc = (0x02), /* Clock Output on Port D pin 7 */
    PORTCFG_CLKOUT_PE7_gc = (0x03), /* Clock Output on Port E pin 7 */
} PORTCFG_CLKOUT_t;

/* Event Output Port */
typedef enum PORTCFG_EVOUT_enum
{
    PORTCFG_EVOUT_OFF_gc = (0x00<<4), /* Event Output Disabled */
    PORTCFG_EVOUT_PC7_gc = (0x01<<4), /* Event Channel 7 Output on Port C pin 7 */
    PORTCFG_EVOUT_PD7_gc = (0x02<<4), /* Event Channel 7 Output on Port D pin 7 */
    PORTCFG_EVOUT_PE7_gc = (0x03<<4), /* Event Channel 7 Output on Port E pin 7 */
} PORTCFG_EVOUT_t;

/* Port Interrupt 1 Flag */
typedef enum VPORT_INT1IF_enum
{
    VPORT_INT1IF_CLEAR_gc = (0x00), /* Port Interrupt 1 Flag - CLEAR */
    VPORT_INT1IF_SET_gc   = (0x02), /* Port Interrupt 1 Flag - SET */
} VPORT_INT1IF_t;

/* Port Interrupt 0 Flag */
typedef enum VPORT_INT0IF_enum
{
    VPORT_INT0IF_CLEAR_gc = (0x00), /* Port Interrupt 0 Flag - CLEAR */
    VPORT_INT0IF_SET_gc   = (0x01), /* Port Interrupt 0 Flag - SET */
} VPORT_INT0IF_t;

/* Port Interrupt 1 Level */
typedef enum PORT_INT1LVL_enum
{
    PORT_INT1LVL_OFF_gc = (0x00<<2), /* Interrupt Disabled */
    PORT_INT1LVL_LO_gc  = (0x01<<2), /* Low Level */
    PORT_INT1LVL_MED_gc = (0x02<<2), /* Medium Level */
    PORT_INT1LVL_HI_gc  = (0x03<<2), /* High Level */
} PORT_INT1LVL_t;

/* Port Interrupt 0 Level */
typedef enum PORT_INT0LVL_enum
{
    PORT_INT0LVL_OFF_gc = (0x00), /* Interrupt Disabled */
    PORT_INT0LVL_LO_gc  = (0x01), /* Low Level */
    PORT_INT0LVL_MED_gc = (0x02), /* Medium Level */
    PORT_INT0LVL_HI_gc  = (0x03), /* High Level */
} PORT_INT0LVL_t;

/* Port Interrupt 1 Flag */
typedef enum PORT_INT1IF_enum
{
    PORT_INT1IF_CLEAR_gc = (0x00), /* Port Interrupt 1 Flag - CLEAR */
    PORT_INT1IF_SET_gc   = (0x02), /* Port Interrupt 1 Flag - SET */
} PORT_INT1IF_t;

/* Port Interrupt 0 Flag */
typedef enum PORT_INT0IF_enum
{
    PORT_INT0IF_CLEAR_gc = (0x00), /* Port Interrupt 0 Flag - CLEAR */
    PORT_INT0IF_SET_gc   = (0x01), /* Port Interrupt 0 Flag - SET */
} PORT_INT0IF_t;

/* Slew Rate Enable */
typedef enum PORT_SRLEN_enum
{
    PORT_SRLEN_CLEAR_gc = (0x00), /* Slew Rate Enable - CLEAR */
    PORT_SRLEN_SET_gc   = (0x80), /* Slew Rate Enable - SET */
} PORT_SRLEN_t;

/* Inverted I/O Enable */
typedef enum PORT_INVEN_enum
{
    PORT_INVEN_CLEAR_gc = (0x00), /* Inverted I/O Enable - CLEAR */
    PORT_INVEN_SET_gc   = (0x40), /* Inverted I/O Enable - SET */
} PORT_INVEN_t;

/* Output/Pull Configuration */
typedef enum PORT_OPC_enum
{
    PORT_OPC_TOTEM_gc        = (0x00<<3), /* Totempole */
    PORT_OPC_BUSKEEPER_gc    = (0x01<<3), /* Totempole w/ Bus keeper on Input and Output */
    PORT_OPC_PULLDOWN_gc     = (0x02<<3), /* Totempole w/ Pull-down on Input */
    PORT_OPC_PULLUP_gc       = (0x03<<3), /* Totempole w/ Pull-up on Input */
    PORT_OPC_WIREDOR_gc      = (0x04<<3), /* Wired OR */
    PORT_OPC_WIREDAND_gc     = (0x05<<3), /* Wired AND */
    PORT_OPC_WIREDORPULL_gc  = (0x06<<3), /* Wired OR w/ Pull-down */
    PORT_OPC_WIREDANDPULL_gc = (0x07<<3), /* Wired AND w/ Pull-up */
} PORT_OPC_t;

/* Input/Sense Configuration */
typedef enum PORT_ISC_enum
{
    PORT_ISC_BOTHEDGES_gc     = (0x00), /* Sense Both Edges */
    PORT_ISC_RISING_gc        = (0x01), /* Sense Rising Edge */
    PORT_ISC_FALLING_gc       = (0x02), /* Sense Falling Edge */
    PORT_ISC_LEVEL_gc         = (0x03), /* Sense Level (Transparent For Events) */
    PORT_ISC_INPUT_DISABLE_gc = (0x07), /* Disable Digital Input Buffer */
} PORT_ISC_t;

/* Slew Rate Enable */
typedef enum PORT_SRLEN_enum
{
    PORT_SRLEN_CLEAR_gc = (0x00), /* Slew Rate Enable - CLEAR */
    PORT_SRLEN_SET_gc   = (0x80), /* Slew Rate Enable - SET */
} PORT_SRLEN_t;

/* Inverted I/O Enable */
typedef enum PORT_INVEN_enum
{
    PORT_INVEN_CLEAR_gc = (0x00), /* Inverted I/O Enable - CLEAR */
    PORT_INVEN_SET_gc   = (0x40), /* Inverted I/O Enable - SET */
} PORT_INVEN_t;

/* Output/Pull Configuration */
typedef enum PORT_OPC_enum
{
    PORT_OPC_TOTEM_gc        = (0x00<<3), /* Totempole */
    PORT_OPC_BUSKEEPER_gc    = (0x01<<3), /* Totempole w/ Bus keeper on Input and Output */
    PORT_OPC_PULLDOWN_gc     = (0x02<<3), /* Totempole w/ Pull-down on Input */
    PORT_OPC_PULLUP_gc       = (0x03<<3), /* Totempole w/ Pull-up on Input */
    PORT_OPC_WIREDOR_gc      = (0x04<<3), /* Wired OR */
    PORT_OPC_WIREDAND_gc     = (0x05<<3), /* Wired AND */
    PORT_OPC_WIREDORPULL_gc  = (0x06<<3), /* Wired OR w/ Pull-down */
    PORT_OPC_WIREDANDPULL_gc = (0x07<<3), /* Wired AND w/ Pull-up */
} PORT_OPC_t;

/* Input/Sense Configuration */
typedef enum PORT_ISC_enum
{
    PORT_ISC_BOTHEDGES_gc     = (0x00), /* Sense Both Edges */
    PORT_ISC_RISING_gc        = (0x01), /* Sense Rising Edge */
    PORT_ISC_FALLING_gc       = (0x02), /* Sense Falling Edge */
    PORT_ISC_LEVEL_gc         = (0x03), /* Sense Level (Transparent For Events) */
    PORT_ISC_INPUT_DISABLE_gc = (0x07), /* Disable Digital Input Buffer */
} PORT_ISC_t;

/* Slew Rate Enable */
typedef enum PORT_SRLEN_enum
{
    PORT_SRLEN_CLEAR_gc = (0x00), /* Slew Rate Enable - CLEAR */
    PORT_SRLEN_SET_gc   = (0x80), /* Slew Rate Enable - SET */
} PORT_SRLEN_t;

/* Inverted I/O Enable */
typedef enum PORT_INVEN_enum
{
    PORT_INVEN_CLEAR_gc = (0x00), /* Inverted I/O Enable - CLEAR */
    PORT_INVEN_SET_gc   = (0x40), /* Inverted I/O Enable - SET */
} PORT_INVEN_t;

/* Output/Pull Configuration */
typedef enum PORT_OPC_enum
{
    PORT_OPC_TOTEM_gc        = (0x00<<3), /* Totempole */
    PORT_OPC_BUSKEEPER_gc    = (0x01<<3), /* Totempole w/ Bus keeper on Input and Output */
    PORT_OPC_PULLDOWN_gc     = (0x02<<3), /* Totempole w/ Pull-down on Input */
    PORT_OPC_PULLUP_gc       = (0x03<<3), /* Totempole w/ Pull-up on Input */
    PORT_OPC_WIREDOR_gc      = (0x04<<3), /* Wired OR */
    PORT_OPC_WIREDAND_gc     = (0x05<<3), /* Wired AND */
    PORT_OPC_WIREDORPULL_gc  = (0x06<<3), /* Wired OR w/ Pull-down */
    PORT_OPC_WIREDANDPULL_gc = (0x07<<3), /* Wired AND w/ Pull-up */
} PORT_OPC_t;

/* Input/Sense Configuration */
typedef enum PORT_ISC_enum
{
    PORT_ISC_BOTHEDGES_gc     = (0x00), /* Sense Both Edges */
    PORT_ISC_RISING_gc        = (0x01), /* Sense Rising Edge */
    PORT_ISC_FALLING_gc       = (0x02), /* Sense Falling Edge */
    PORT_ISC_LEVEL_gc         = (0x03), /* Sense Level (Transparent For Events) */
    PORT_ISC_INPUT_DISABLE_gc = (0x07), /* Disable Digital Input Buffer */
} PORT_ISC_t;

/* Slew Rate Enable */
typedef enum PORT_SRLEN_enum
{
    PORT_SRLEN_CLEAR_gc = (0x00), /* Slew Rate Enable - CLEAR */
    PORT_SRLEN_SET_gc   = (0x80), /* Slew Rate Enable - SET */
} PORT_SRLEN_t;

/* Inverted I/O Enable */
typedef enum PORT_INVEN_enum
{
    PORT_INVEN_CLEAR_gc = (0x00), /* Inverted I/O Enable - CLEAR */
    PORT_INVEN_SET_gc   = (0x40), /* Inverted I/O Enable - SET */
} PORT_INVEN_t;

/* Output/Pull Configuration */
typedef enum PORT_OPC_enum
{
    PORT_OPC_TOTEM_gc        = (0x00<<3), /* Totempole */
    PORT_OPC_BUSKEEPER_gc    = (0x01<<3), /* Totempole w/ Bus keeper on Input and Output */
    PORT_OPC_PULLDOWN_gc     = (0x02<<3), /* Totempole w/ Pull-down on Input */
    PORT_OPC_PULLUP_gc       = (0x03<<3), /* Totempole w/ Pull-up on Input */
    PORT_OPC_WIREDOR_gc      = (0x04<<3), /* Wired OR */
    PORT_OPC_WIREDAND_gc     = (0x05<<3), /* Wired AND */
    PORT_OPC_WIREDORPULL_gc  = (0x06<<3), /* Wired OR w/ Pull-down */
    PORT_OPC_WIREDANDPULL_gc = (0x07<<3), /* Wired AND w/ Pull-up */
} PORT_OPC_t;

/* Input/Sense Configuration */
typedef enum PORT_ISC_enum
{
    PORT_ISC_BOTHEDGES_gc     = (0x00), /* Sense Both Edges */
    PORT_ISC_RISING_gc        = (0x01), /* Sense Rising Edge */
    PORT_ISC_FALLING_gc       = (0x02), /* Sense Falling Edge */
    PORT_ISC_LEVEL_gc         = (0x03), /* Sense Level (Transparent For Events) */
    PORT_ISC_INPUT_DISABLE_gc = (0x07), /* Disable Digital Input Buffer */
} PORT_ISC_t;

/* Slew Rate Enable */
typedef enum PORT_SRLEN_enum
{
    PORT_SRLEN_CLEAR_gc = (0x00), /* Slew Rate Enable - CLEAR */
    PORT_SRLEN_SET_gc   = (0x80), /* Slew Rate Enable - SET */
} PORT_SRLEN_t;

/* Inverted I/O Enable */
typedef enum PORT_INVEN_enum
{
    PORT_INVEN_CLEAR_gc = (0x00), /* Inverted I/O Enable - CLEAR */
    PORT_INVEN_SET_gc   = (0x40), /* Inverted I/O Enable - SET */
} PORT_INVEN_t;

/* Output/Pull Configuration */
typedef enum PORT_OPC_enum
{
    PORT_OPC_TOTEM_gc        = (0x00<<3), /* Totempole */
    PORT_OPC_BUSKEEPER_gc    = (0x01<<3), /* Totempole w/ Bus keeper on Input and Output */
    PORT_OPC_PULLDOWN_gc     = (0x02<<3), /* Totempole w/ Pull-down on Input */
    PORT_OPC_PULLUP_gc       = (0x03<<3), /* Totempole w/ Pull-up on Input */
    PORT_OPC_WIREDOR_gc      = (0x04<<3), /* Wired OR */
    PORT_OPC_WIREDAND_gc     = (0x05<<3), /* Wired AND */
    PORT_OPC_WIREDORPULL_gc  = (0x06<<3), /* Wired OR w/ Pull-down */
    PORT_OPC_WIREDANDPULL_gc = (0x07<<3), /* Wired AND w/ Pull-up */
} PORT_OPC_t;

/* Input/Sense Configuration */
typedef enum PORT_ISC_enum
{
    PORT_ISC_BOTHEDGES_gc     = (0x00), /* Sense Both Edges */
    PORT_ISC_RISING_gc        = (0x01), /* Sense Rising Edge */
    PORT_ISC_FALLING_gc       = (0x02), /* Sense Falling Edge */
    PORT_ISC_LEVEL_gc         = (0x03), /* Sense Level (Transparent For Events) */
    PORT_ISC_INPUT_DISABLE_gc = (0x07), /* Disable Digital Input Buffer */
} PORT_ISC_t;

/* Slew Rate Enable */
typedef enum PORT_SRLEN_enum
{
    PORT_SRLEN_CLEAR_gc = (0x00), /* Slew Rate Enable - CLEAR */
    PORT_SRLEN_SET_gc   = (0x80), /* Slew Rate Enable - SET */
} PORT_SRLEN_t;

/* Inverted I/O Enable */
typedef enum PORT_INVEN_enum
{
    PORT_INVEN_CLEAR_gc = (0x00), /* Inverted I/O Enable - CLEAR */
    PORT_INVEN_SET_gc   = (0x40), /* Inverted I/O Enable - SET */
} PORT_INVEN_t;

/* Output/Pull Configuration */
typedef enum PORT_OPC_enum
{
    PORT_OPC_TOTEM_gc        = (0x00<<3), /* Totempole */
    PORT_OPC_BUSKEEPER_gc    = (0x01<<3), /* Totempole w/ Bus keeper on Input and Output */
    PORT_OPC_PULLDOWN_gc     = (0x02<<3), /* Totempole w/ Pull-down on Input */
    PORT_OPC_PULLUP_gc       = (0x03<<3), /* Totempole w/ Pull-up on Input */
    PORT_OPC_WIREDOR_gc      = (0x04<<3), /* Wired OR */
    PORT_OPC_WIREDAND_gc     = (0x05<<3), /* Wired AND */
    PORT_OPC_WIREDORPULL_gc  = (0x06<<3), /* Wired OR w/ Pull-down */
    PORT_OPC_WIREDANDPULL_gc = (0x07<<3), /* Wired AND w/ Pull-up */
} PORT_OPC_t;

/* Input/Sense Configuration */
typedef enum PORT_ISC_enum
{
    PORT_ISC_BOTHEDGES_gc     = (0x00), /* Sense Both Edges */
    PORT_ISC_RISING_gc        = (0x01), /* Sense Rising Edge */
    PORT_ISC_FALLING_gc       = (0x02), /* Sense Falling Edge */
    PORT_ISC_LEVEL_gc         = (0x03), /* Sense Level (Transparent For Events) */
    PORT_ISC_INPUT_DISABLE_gc = (0x07), /* Disable Digital Input Buffer */
} PORT_ISC_t;

/* Slew Rate Enable */
typedef enum PORT_SRLEN_enum
{
    PORT_SRLEN_CLEAR_gc = (0x00), /* Slew Rate Enable - CLEAR */
    PORT_SRLEN_SET_gc   = (0x80), /* Slew Rate Enable - SET */
} PORT_SRLEN_t;

/* Inverted I/O Enable */
typedef enum PORT_INVEN_enum
{
    PORT_INVEN_CLEAR_gc = (0x00), /* Inverted I/O Enable - CLEAR */
    PORT_INVEN_SET_gc   = (0x40), /* Inverted I/O Enable - SET */
} PORT_INVEN_t;

/* Output/Pull Configuration */
typedef enum PORT_OPC_enum
{
    PORT_OPC_TOTEM_gc        = (0x00<<3), /* Totempole */
    PORT_OPC_BUSKEEPER_gc    = (0x01<<3), /* Totempole w/ Bus keeper on Input and Output */
    PORT_OPC_PULLDOWN_gc     = (0x02<<3), /* Totempole w/ Pull-down on Input */
    PORT_OPC_PULLUP_gc       = (0x03<<3), /* Totempole w/ Pull-up on Input */
    PORT_OPC_WIREDOR_gc      = (0x04<<3), /* Wired OR */
    PORT_OPC_WIREDAND_gc     = (0x05<<3), /* Wired AND */
    PORT_OPC_WIREDORPULL_gc  = (0x06<<3), /* Wired OR w/ Pull-down */
    PORT_OPC_WIREDANDPULL_gc = (0x07<<3), /* Wired AND w/ Pull-up */
} PORT_OPC_t;

/* Input/Sense Configuration */
typedef enum PORT_ISC_enum
{
    PORT_ISC_BOTHEDGES_gc     = (0x00), /* Sense Both Edges */
    PORT_ISC_RISING_gc        = (0x01), /* Sense Rising Edge */
    PORT_ISC_FALLING_gc       = (0x02), /* Sense Falling Edge */
    PORT_ISC_LEVEL_gc         = (0x03), /* Sense Level (Transparent For Events) */
    PORT_ISC_INPUT_DISABLE_gc = (0x07), /* Disable Digital Input Buffer */
} PORT_ISC_t;

/* Slew Rate Enable */
typedef enum PORT_SRLEN_enum
{
    PORT_SRLEN_CLEAR_gc = (0x00), /* Slew Rate Enable - CLEAR */
    PORT_SRLEN_SET_gc   = (0x80), /* Slew Rate Enable - SET */
} PORT_SRLEN_t;

/* Inverted I/O Enable */
typedef enum PORT_INVEN_enum
{
    PORT_INVEN_CLEAR_gc = (0x00), /* Inverted I/O Enable - CLEAR */
    PORT_INVEN_SET_gc   = (0x40), /* Inverted I/O Enable - SET */
} PORT_INVEN_t;

/* Output/Pull Configuration */
typedef enum PORT_OPC_enum
{
    PORT_OPC_TOTEM_gc        = (0x00<<3), /* Totempole */
    PORT_OPC_BUSKEEPER_gc    = (0x01<<3), /* Totempole w/ Bus keeper on Input and Output */
    PORT_OPC_PULLDOWN_gc     = (0x02<<3), /* Totempole w/ Pull-down on Input */
    PORT_OPC_PULLUP_gc       = (0x03<<3), /* Totempole w/ Pull-up on Input */
    PORT_OPC_WIREDOR_gc      = (0x04<<3), /* Wired OR */
    PORT_OPC_WIREDAND_gc     = (0x05<<3), /* Wired AND */
    PORT_OPC_WIREDORPULL_gc  = (0x06<<3), /* Wired OR w/ Pull-down */
    PORT_OPC_WIREDANDPULL_gc = (0x07<<3), /* Wired AND w/ Pull-up */
} PORT_OPC_t;

/* Input/Sense Configuration */
typedef enum PORT_ISC_enum
{
    PORT_ISC_BOTHEDGES_gc     = (0x00), /* Sense Both Edges */
    PORT_ISC_RISING_gc        = (0x01), /* Sense Rising Edge */
    PORT_ISC_FALLING_gc       = (0x02), /* Sense Falling Edge */
    PORT_ISC_LEVEL_gc         = (0x03), /* Sense Level (Transparent For Events) */
    PORT_ISC_INPUT_DISABLE_gc = (0x07), /* Disable Digital Input Buffer */
} PORT_ISC_t;

/*
--------------------------------------------------------------------------------
TC - 16-bit Timer/Counter With PWM
--------------------------------------------------------------------------------
*/

typedef struct TC0_struct
{
    register8_t CTRLA;        /* Control Register A */
    register8_t CTRLB;        /* Control Register B */
    register8_t CTRLC;        /* Control register C */
    register8_t CTRLD;        /* Control Register D */
    register8_t CTRLE;        /* Control Register E */
    register8_t rsv_0x05;     /* RESERVED REGISTER */
    register8_t INTCTRLA;     /* Interrupt Control Register A */
    register8_t INTCTRLB;     /* Interrupt Control Register B */
    register8_t CTRLFCLR;     /* Control Register F Clear */
    register8_t CTRLFSET;     /* Control Register F Set */
    register8_t CTRLGCLR;     /* Control Register G Clear */
    register8_t CTRLGSET;     /* Control Register G Set */
    register8_t INTFLAGS;     /* Interrupt Flag Register */
    register8_t rsv_0x0D[2];  /* RESERVED REGISTER BLOCK */
    register8_t TEMP;         /* Temporary Register For 16-bit Access */
    register8_t rsv_0x10[16]; /* RESERVED REGISTER BLOCK */
    _REGISTER16 (CNT);        /* Count */
    register8_t rsv_0x21[5];  /* RESERVED REGISTER BLOCK */
    _REGISTER16 (PER);        /* Period */
    register8_t rsv_0x27;     /* RESERVED REGISTER */
    _REGISTER16 (CCA);        /* Compare or Capture A */
    register8_t rsv_0x29;     /* RESERVED REGISTER */
    _REGISTER16 (CCB);        /* Compare or Capture B */
    register8_t rsv_0x2B;     /* RESERVED REGISTER */
    _REGISTER16 (CCC);        /* Compare or Capture C */
    register8_t rsv_0x2D;     /* RESERVED REGISTER */
    _REGISTER16 (CCD);        /* Compare or Capture D */
    register8_t rsv_0x2F[7];  /* RESERVED REGISTER BLOCK */
    _REGISTER16 (PERBUF);     /* Period Buffer */
    register8_t rsv_0x37;     /* RESERVED REGISTER */
    _REGISTER16 (CCABUF);     /* Compare Or Capture A Buffer */
    register8_t rsv_0x39;     /* RESERVED REGISTER */
    _REGISTER16 (CCBBUF);     /* Compare Or Capture B Buffer */
    register8_t rsv_0x3B;     /* RESERVED REGISTER */
    _REGISTER16 (CCCBUF);     /* Compare Or Capture C Buffer */
    register8_t rsv_0x3D;     /* RESERVED REGISTER */
    _REGISTER16 (CCDBUF);     /* Compare Or Capture D Buffer */
} TC0_t;


/*
--------------------------------------------------------------------------------
TC - 16-bit Timer/Counter With PWM
--------------------------------------------------------------------------------
*/

typedef struct TC1_struct
{
    register8_t CTRLA;        /* Control  Register A */
    register8_t CTRLB;        /* Control Register B */
    register8_t CTRLC;        /* Control register C */
    register8_t CTRLD;        /* Control Register D */
    register8_t CTRLE;        /* Control Register E */
    register8_t rsv_0x05;     /* RESERVED REGISTER */
    register8_t INTCTRLA;     /* Interrupt Control Register A */
    register8_t INTCTRLB;     /* Interrupt Control Register B */
    register8_t CTRLFCLR;     /* Control Register F Clear */
    register8_t CTRLFSET;     /* Control Register F Set */
    register8_t CTRLGCLR;     /* Control Register G Clear */
    register8_t CTRLGSET;     /* Control Register G Set */
    register8_t INTFLAGS;     /* Interrupt Flag Register */
    register8_t rsv_0x0D[2];  /* RESERVED REGISTER BLOCK */
    register8_t TEMP;         /* Temporary Register For 16-bit Access */
    register8_t rsv_0x10[16]; /* RESERVED REGISTER BLOCK */
    _REGISTER16 (CNT);        /* Count */
    register8_t rsv_0x21[5];  /* RESERVED REGISTER BLOCK */
    _REGISTER16 (PER);        /* Period */
    register8_t rsv_0x27;     /* RESERVED REGISTER */
    _REGISTER16 (CCA);        /* Compare or Capture A */
    register8_t rsv_0x29;     /* RESERVED REGISTER */
    _REGISTER16 (CCB);        /* Compare or Capture B */
    register8_t rsv_0x2B[11]; /* RESERVED REGISTER BLOCK */
    _REGISTER16 (PERBUF);     /* Period Buffer */
    register8_t rsv_0x37;     /* RESERVED REGISTER */
    _REGISTER16 (CCABUF);     /* Compare Or Capture A Buffer */
    register8_t rsv_0x39;     /* RESERVED REGISTER */
    _REGISTER16 (CCBBUF);     /* Compare Or Capture B Buffer */
} TC1_t;


/*
--------------------------------------------------------------------------------
TC - 16-bit Timer/Counter With PWM
--------------------------------------------------------------------------------
*/

typedef struct AWEX_struct
{
    register8_t CTRL;      /* Control Register */
    register8_t rsv_0x01;  /* RESERVED REGISTER */
    register8_t FDEMASK;   /* Fault Detection Event Mask */
    register8_t FDCTRL;    /* Fault Detection Control Register */
    register8_t STATUS;    /* Status Register */
    register8_t rsv_0x05;  /* RESERVED REGISTER */
    register8_t DTBOTH;    /* Dead Time Both Sides */
    register8_t DTBOTHBUF; /* Dead Time Both Sides Buffer */
    register8_t DTLS;      /* Dead Time Low Side */
    register8_t DTHS;      /* Dead Time High Side */
    register8_t DTLSBUF;   /* Dead Time Low Side Buffer */
    register8_t DTHSBUF;   /* Dead Time High Side Buffer */
    register8_t OUTOVEN;   /* Output Override Enable */
} AWEX_t;


/*
--------------------------------------------------------------------------------
TC - 16-bit Timer/Counter With PWM
--------------------------------------------------------------------------------
*/

typedef struct HIRES_struct
{
    register8_t CTRLA; /* Control Register */
} HIRES_t;


/* Clock Selection */
typedef enum TC0_CLKSEL_enum
{
    TC0_CLKSEL_OFF_gc     = (0x00), /* Timer Off */
    TC0_CLKSEL_DIV1_gc    = (0x01), /* System Clock */
    TC0_CLKSEL_DIV2_gc    = (0x02), /* System Clock / 2 */
    TC0_CLKSEL_DIV4_gc    = (0x03), /* System Clock / 4 */
    TC0_CLKSEL_DIV8_gc    = (0x04), /* System Clock / 8 */
    TC0_CLKSEL_DIV64_gc   = (0x05), /* System Clock / 64 */
    TC0_CLKSEL_DIV256_gc  = (0x06), /* System Clock / 256 */
    TC0_CLKSEL_DIV1024_gc = (0x07), /* System Clock / 1024 */
    TC0_CLKSEL_EVCH0_gc   = (0x08), /* Event Channel 0 */
    TC0_CLKSEL_EVCH1_gc   = (0x09), /* Event Channel 1 */
    TC0_CLKSEL_EVCH2_gc   = (0x0A), /* Event Channel 2 */
    TC0_CLKSEL_EVCH3_gc   = (0x0B), /* Event Channel 3 */
    TC0_CLKSEL_EVCH4_gc   = (0x0C), /* Event Channel 4 */
    TC0_CLKSEL_EVCH5_gc   = (0x0D), /* Event Channel 5 */
    TC0_CLKSEL_EVCH6_gc   = (0x0E), /* Event Channel 6 */
    TC0_CLKSEL_EVCH7_gc   = (0x0F), /* Event Channel 7 */
} TC0_CLKSEL_t;

/* Compare or Capture D Enable */
typedef enum TC0_CCDEN_enum
{
    TC0_CCDEN_CLEAR_gc = (0x00), /* Compare or Capture D Enable - CLEAR */
    TC0_CCDEN_SET_gc   = (0x80), /* Compare or Capture D Enable - SET */
} TC0_CCDEN_t;

/* Compare or Capture C Enable */
typedef enum TC0_CCCEN_enum
{
    TC0_CCCEN_CLEAR_gc = (0x00), /* Compare or Capture C Enable - CLEAR */
    TC0_CCCEN_SET_gc   = (0x40), /* Compare or Capture C Enable - SET */
} TC0_CCCEN_t;

/* Compare or Capture B Enable */
typedef enum TC0_CCBEN_enum
{
    TC0_CCBEN_CLEAR_gc = (0x00), /* Compare or Capture B Enable - CLEAR */
    TC0_CCBEN_SET_gc   = (0x20), /* Compare or Capture B Enable - SET */
} TC0_CCBEN_t;

/* Compare or Capture A Enable */
typedef enum TC0_CCAEN_enum
{
    TC0_CCAEN_CLEAR_gc = (0x00), /* Compare or Capture A Enable - CLEAR */
    TC0_CCAEN_SET_gc   = (0x10), /* Compare or Capture A Enable - SET */
} TC0_CCAEN_t;

/* Waveform generation mode */
typedef enum TC0_WGMODE_enum
{
    TC0_WGMODE_NORMAL_gc = (0x00), /* Normal Mode */
    TC0_WGMODE_FRQ_gc    = (0x01), /* Frequency Generation Mode */
    TC0_WGMODE_SS_gc     = (0x03), /* Single Slope */
    TC0_WGMODE_DS_T_gc   = (0x05), /* Dual Slope, Update on TOP */
    TC0_WGMODE_DS_TB_gc  = (0x06), /* Dual Slope, Update on TOP and BOTTOM */
    TC0_WGMODE_DS_B_gc   = (0x07), /* Dual Slope, Update on BOTTOM */
} TC0_WGMODE_t;

/* Compare D Output Value */
typedef enum TC0_CMPD_enum
{
    TC0_CMPD_CLEAR_gc = (0x00), /* Compare D Output Value - CLEAR */
    TC0_CMPD_SET_gc   = (0x08), /* Compare D Output Value - SET */
} TC0_CMPD_t;

/* Compare C Output Value */
typedef enum TC0_CMPC_enum
{
    TC0_CMPC_CLEAR_gc = (0x00), /* Compare C Output Value - CLEAR */
    TC0_CMPC_SET_gc   = (0x04), /* Compare C Output Value - SET */
} TC0_CMPC_t;

/* Compare B Output Value */
typedef enum TC0_CMPB_enum
{
    TC0_CMPB_CLEAR_gc = (0x00), /* Compare B Output Value - CLEAR */
    TC0_CMPB_SET_gc   = (0x02), /* Compare B Output Value - SET */
} TC0_CMPB_t;

/* Compare A Output Value */
typedef enum TC0_CMPA_enum
{
    TC0_CMPA_CLEAR_gc = (0x00), /* Compare A Output Value - CLEAR */
    TC0_CMPA_SET_gc   = (0x01), /* Compare A Output Value - SET */
} TC0_CMPA_t;

/* Event Action */
typedef enum TC0_EVACT_enum
{
    TC0_EVACT_OFF_gc     = (0x00<<5), /* No Event Action */
    TC0_EVACT_CAPT_gc    = (0x01<<5), /* Input Capture */
    TC0_EVACT_UPDOWN_gc  = (0x02<<5), /* Externally Controlled Up/Down Count */
    TC0_EVACT_QDEC_gc    = (0x03<<5), /* Quadrature Decode */
    TC0_EVACT_RESTART_gc = (0x04<<5), /* Restart */
    TC0_EVACT_FRQ_gc     = (0x05<<5), /* Frequency Capture */
    TC0_EVACT_PW_gc      = (0x06<<5), /* Pulse-width Capture */
} TC0_EVACT_t;

/* Event Delay */
typedef enum TC0_EVDLY_enum
{
    TC0_EVDLY_CLEAR_gc = (0x00), /* Event Delay - CLEAR */
    TC0_EVDLY_SET_gc   = (0x10), /* Event Delay - SET */
} TC0_EVDLY_t;

/* Event Source Select */
typedef enum TC0_EVSEL_enum
{
    TC0_EVSEL_OFF_gc = (0x00), /* No Event Source */
    TC0_EVSEL_CH0_gc = (0x08), /* Event Channel 0 */
    TC0_EVSEL_CH1_gc = (0x09), /* Event Channel 1 */
    TC0_EVSEL_CH2_gc = (0x0A), /* Event Channel 2 */
    TC0_EVSEL_CH3_gc = (0x0B), /* Event Channel 3 */
    TC0_EVSEL_CH4_gc = (0x0C), /* Event Channel 4 */
    TC0_EVSEL_CH5_gc = (0x0D), /* Event Channel 5 */
    TC0_EVSEL_CH6_gc = (0x0E), /* Event Channel 6 */
    TC0_EVSEL_CH7_gc = (0x0F), /* Event Channel 7 */
} TC0_EVSEL_t;

/* Byte Mode */
typedef enum TC0_BYTEM_enum
{
    TC0_BYTEM_CLEAR_gc = (0x00), /* Byte Mode - CLEAR */
    TC0_BYTEM_SET_gc   = (0x01), /* Byte Mode - SET */
} TC0_BYTEM_t;

/* Error Interrupt Level */
typedef enum TC0_ERRINTLVL_enum
{
    TC0_ERRINTLVL_OFF_gc = (0x00<<2), /* Interrupt Disabled */
    TC0_ERRINTLVL_LO_gc  = (0x01<<2), /* Low Level */
    TC0_ERRINTLVL_MED_gc = (0x02<<2), /* Medium Level */
    TC0_ERRINTLVL_HI_gc  = (0x03<<2), /* High Level */
} TC0_ERRINTLVL_t;

/* Overflow interrupt level */
typedef enum TC0_OVFINTLVL_enum
{
    TC0_OVFINTLVL_OFF_gc = (0x00), /* Interrupt Disabled */
    TC0_OVFINTLVL_LO_gc  = (0x01), /* Low Level */
    TC0_OVFINTLVL_MED_gc = (0x02), /* Medium Level */
    TC0_OVFINTLVL_HI_gc  = (0x03), /* High Level */
} TC0_OVFINTLVL_t;

/* Compare or Capture D Interrupt Level */
typedef enum TC0_CCDINTLVL_enum
{
    TC0_CCDINTLVL_OFF_gc = (0x00<<6), /* Interrupt Disabled */
    TC0_CCDINTLVL_LO_gc  = (0x01<<6), /* Low Level */
    TC0_CCDINTLVL_MED_gc = (0x02<<6), /* Medium Level */
    TC0_CCDINTLVL_HI_gc  = (0x03<<6), /* High Level */
} TC0_CCDINTLVL_t;

/* Compare or Capture C Interrupt Level */
typedef enum TC0_CCCINTLVL_enum
{
    TC0_CCCINTLVL_OFF_gc = (0x00<<4), /* Interrupt Disabled */
    TC0_CCCINTLVL_LO_gc  = (0x01<<4), /* Low Level */
    TC0_CCCINTLVL_MED_gc = (0x02<<4), /* Medium Level */
    TC0_CCCINTLVL_HI_gc  = (0x03<<4), /* High Level */
} TC0_CCCINTLVL_t;

/* Compare or Capture B Interrupt Level */
typedef enum TC0_CCBINTLVL_enum
{
    TC0_CCBINTLVL_OFF_gc = (0x00<<2), /* Interrupt Disabled */
    TC0_CCBINTLVL_LO_gc  = (0x01<<2), /* Low Level */
    TC0_CCBINTLVL_MED_gc = (0x02<<2), /* Medium Level */
    TC0_CCBINTLVL_HI_gc  = (0x03<<2), /* High Level */
} TC0_CCBINTLVL_t;

/* Compare or Capture A Interrupt Level */
typedef enum TC0_CCAINTLVL_enum
{
    TC0_CCAINTLVL_OFF_gc = (0x00), /* Interrupt Disabled */
    TC0_CCAINTLVL_LO_gc  = (0x01), /* Low Level */
    TC0_CCAINTLVL_MED_gc = (0x02), /* Medium Level */
    TC0_CCAINTLVL_HI_gc  = (0x03), /* High Level */
} TC0_CCAINTLVL_t;

/* Command */
#define TC0_CTRLFCLR_CMD_gc(x) ((x<<2) & 0x0C)

/* Lock Update */
typedef enum TC0_LUPD_enum
{
    TC0_LUPD_CLEAR_gc = (0x00), /* Lock Update - CLEAR */
    TC0_LUPD_SET_gc   = (0x02), /* Lock Update - SET */
} TC0_LUPD_t;

/* Direction */
typedef enum TC0_DIR_enum
{
    TC0_DIR_CLEAR_gc = (0x00), /* Direction - CLEAR */
    TC0_DIR_SET_gc   = (0x01), /* Direction - SET */
} TC0_DIR_t;

/* Command */
typedef enum TC0_CMD_enum
{
    TC0_CMD_NONE_gc    = (0x00<<2), /* No Command */
    TC0_CMD_UPDATE_gc  = (0x01<<2), /* Force Update */
    TC0_CMD_RESTART_gc = (0x02<<2), /* Force Restart */
    TC0_CMD_RESET_gc   = (0x03<<2), /* Force Hard Reset */
} TC0_CMD_t;

/* Lock Update */
typedef enum TC0_LUPD_enum
{
    TC0_LUPD_CLEAR_gc = (0x00), /* Lock Update - CLEAR */
    TC0_LUPD_SET_gc   = (0x02), /* Lock Update - SET */
} TC0_LUPD_t;

/* Direction */
typedef enum TC0_DIR_enum
{
    TC0_DIR_CLEAR_gc = (0x00), /* Direction - CLEAR */
    TC0_DIR_SET_gc   = (0x01), /* Direction - SET */
} TC0_DIR_t;

/* Compare or Capture D Buffer Valid */
typedef enum TC0_CCDBV_enum
{
    TC0_CCDBV_CLEAR_gc = (0x00), /* Compare or Capture D Buffer Valid - CLEAR */
    TC0_CCDBV_SET_gc   = (0x10), /* Compare or Capture D Buffer Valid - SET */
} TC0_CCDBV_t;

/* Compare or Capture C Buffer Valid */
typedef enum TC0_CCCBV_enum
{
    TC0_CCCBV_CLEAR_gc = (0x00), /* Compare or Capture C Buffer Valid - CLEAR */
    TC0_CCCBV_SET_gc   = (0x08), /* Compare or Capture C Buffer Valid - SET */
} TC0_CCCBV_t;

/* Compare or Capture B Buffer Valid */
typedef enum TC0_CCBBV_enum
{
    TC0_CCBBV_CLEAR_gc = (0x00), /* Compare or Capture B Buffer Valid - CLEAR */
    TC0_CCBBV_SET_gc   = (0x04), /* Compare or Capture B Buffer Valid - SET */
} TC0_CCBBV_t;

/* Compare or Capture A Buffer Valid */
typedef enum TC0_CCABV_enum
{
    TC0_CCABV_CLEAR_gc = (0x00), /* Compare or Capture A Buffer Valid - CLEAR */
    TC0_CCABV_SET_gc   = (0x02), /* Compare or Capture A Buffer Valid - SET */
} TC0_CCABV_t;

/* Period Buffer Valid */
typedef enum TC0_PERBV_enum
{
    TC0_PERBV_CLEAR_gc = (0x00), /* Period Buffer Valid - CLEAR */
    TC0_PERBV_SET_gc   = (0x01), /* Period Buffer Valid - SET */
} TC0_PERBV_t;

/* Compare or Capture D Buffer Valid */
typedef enum TC0_CCDBV_enum
{
    TC0_CCDBV_CLEAR_gc = (0x00), /* Compare or Capture D Buffer Valid - CLEAR */
    TC0_CCDBV_SET_gc   = (0x10), /* Compare or Capture D Buffer Valid - SET */
} TC0_CCDBV_t;

/* Compare or Capture C Buffer Valid */
typedef enum TC0_CCCBV_enum
{
    TC0_CCCBV_CLEAR_gc = (0x00), /* Compare or Capture C Buffer Valid - CLEAR */
    TC0_CCCBV_SET_gc   = (0x08), /* Compare or Capture C Buffer Valid - SET */
} TC0_CCCBV_t;

/* Compare or Capture B Buffer Valid */
typedef enum TC0_CCBBV_enum
{
    TC0_CCBBV_CLEAR_gc = (0x00), /* Compare or Capture B Buffer Valid - CLEAR */
    TC0_CCBBV_SET_gc   = (0x04), /* Compare or Capture B Buffer Valid - SET */
} TC0_CCBBV_t;

/* Compare or Capture A Buffer Valid */
typedef enum TC0_CCABV_enum
{
    TC0_CCABV_CLEAR_gc = (0x00), /* Compare or Capture A Buffer Valid - CLEAR */
    TC0_CCABV_SET_gc   = (0x02), /* Compare or Capture A Buffer Valid - SET */
} TC0_CCABV_t;

/* Period Buffer Valid */
typedef enum TC0_PERBV_enum
{
    TC0_PERBV_CLEAR_gc = (0x00), /* Period Buffer Valid - CLEAR */
    TC0_PERBV_SET_gc   = (0x01), /* Period Buffer Valid - SET */
} TC0_PERBV_t;

/* Compare or Capture D Interrupt Flag */
typedef enum TC0_CCDIF_enum
{
    TC0_CCDIF_CLEAR_gc = (0x00), /* Compare or Capture D Interrupt Flag - CLEAR */
    TC0_CCDIF_SET_gc   = (0x80), /* Compare or Capture D Interrupt Flag - SET */
} TC0_CCDIF_t;

/* Compare or Capture C Interrupt Flag */
typedef enum TC0_CCCIF_enum
{
    TC0_CCCIF_CLEAR_gc = (0x00), /* Compare or Capture C Interrupt Flag - CLEAR */
    TC0_CCCIF_SET_gc   = (0x40), /* Compare or Capture C Interrupt Flag - SET */
} TC0_CCCIF_t;

/* Compare or Capture B Interrupt Flag */
typedef enum TC0_CCBIF_enum
{
    TC0_CCBIF_CLEAR_gc = (0x00), /* Compare or Capture B Interrupt Flag - CLEAR */
    TC0_CCBIF_SET_gc   = (0x20), /* Compare or Capture B Interrupt Flag - SET */
} TC0_CCBIF_t;

/* Compare or Capture A Interrupt Flag */
typedef enum TC0_CCAIF_enum
{
    TC0_CCAIF_CLEAR_gc = (0x00), /* Compare or Capture A Interrupt Flag - CLEAR */
    TC0_CCAIF_SET_gc   = (0x10), /* Compare or Capture A Interrupt Flag - SET */
} TC0_CCAIF_t;

/* Error Interrupt Flag */
typedef enum TC0_ERRIF_enum
{
    TC0_ERRIF_CLEAR_gc = (0x00), /* Error Interrupt Flag - CLEAR */
    TC0_ERRIF_SET_gc   = (0x02), /* Error Interrupt Flag - SET */
} TC0_ERRIF_t;

/* Overflow Interrupt Flag */
typedef enum TC0_OVFIF_enum
{
    TC0_OVFIF_CLEAR_gc = (0x00), /* Overflow Interrupt Flag - CLEAR */
    TC0_OVFIF_SET_gc   = (0x01), /* Overflow Interrupt Flag - SET */
} TC0_OVFIF_t;

/* Clock Selection */
typedef enum TC1_CLKSEL_enum
{
    TC1_CLKSEL_OFF_gc     = (0x00), /* Timer Off */
    TC1_CLKSEL_DIV1_gc    = (0x01), /* System Clock */
    TC1_CLKSEL_DIV2_gc    = (0x02), /* System Clock / 2 */
    TC1_CLKSEL_DIV4_gc    = (0x03), /* System Clock / 4 */
    TC1_CLKSEL_DIV8_gc    = (0x04), /* System Clock / 8 */
    TC1_CLKSEL_DIV64_gc   = (0x05), /* System Clock / 64 */
    TC1_CLKSEL_DIV256_gc  = (0x06), /* System Clock / 256 */
    TC1_CLKSEL_DIV1024_gc = (0x07), /* System Clock / 1024 */
    TC1_CLKSEL_EVCH0_gc   = (0x08), /* Event Channel 0 */
    TC1_CLKSEL_EVCH1_gc   = (0x09), /* Event Channel 1 */
    TC1_CLKSEL_EVCH2_gc   = (0x0A), /* Event Channel 2 */
    TC1_CLKSEL_EVCH3_gc   = (0x0B), /* Event Channel 3 */
    TC1_CLKSEL_EVCH4_gc   = (0x0C), /* Event Channel 4 */
    TC1_CLKSEL_EVCH5_gc   = (0x0D), /* Event Channel 5 */
    TC1_CLKSEL_EVCH6_gc   = (0x0E), /* Event Channel 6 */
    TC1_CLKSEL_EVCH7_gc   = (0x0F), /* Event Channel 7 */
} TC1_CLKSEL_t;

/* Compare or Capture B Enable */
typedef enum TC1_CCBEN_enum
{
    TC1_CCBEN_CLEAR_gc = (0x00), /* Compare or Capture B Enable - CLEAR */
    TC1_CCBEN_SET_gc   = (0x20), /* Compare or Capture B Enable - SET */
} TC1_CCBEN_t;

/* Compare or Capture A Enable */
typedef enum TC1_CCAEN_enum
{
    TC1_CCAEN_CLEAR_gc = (0x00), /* Compare or Capture A Enable - CLEAR */
    TC1_CCAEN_SET_gc   = (0x10), /* Compare or Capture A Enable - SET */
} TC1_CCAEN_t;

/* Waveform generation mode */
typedef enum TC1_WGMODE_enum
{
    TC1_WGMODE_NORMAL_gc = (0x00), /* Normal Mode */
    TC1_WGMODE_FRQ_gc    = (0x01), /* Frequency Generation Mode */
    TC1_WGMODE_SS_gc     = (0x03), /* Single Slope */
    TC1_WGMODE_DS_T_gc   = (0x05), /* Dual Slope, Update on TOP */
    TC1_WGMODE_DS_TB_gc  = (0x06), /* Dual Slope, Update on TOP and BOTTOM */
    TC1_WGMODE_DS_B_gc   = (0x07), /* Dual Slope, Update on BOTTOM */
} TC1_WGMODE_t;

/* Compare B Output Value */
typedef enum TC1_CMPB_enum
{
    TC1_CMPB_CLEAR_gc = (0x00), /* Compare B Output Value - CLEAR */
    TC1_CMPB_SET_gc   = (0x02), /* Compare B Output Value - SET */
} TC1_CMPB_t;

/* Compare A Output Value */
typedef enum TC1_CMPA_enum
{
    TC1_CMPA_CLEAR_gc = (0x00), /* Compare A Output Value - CLEAR */
    TC1_CMPA_SET_gc   = (0x01), /* Compare A Output Value - SET */
} TC1_CMPA_t;

/* Event Action */
typedef enum TC1_EVACT_enum
{
    TC1_EVACT_OFF_gc     = (0x00<<5), /* No Event Action */
    TC1_EVACT_CAPT_gc    = (0x01<<5), /* Input Capture */
    TC1_EVACT_UPDOWN_gc  = (0x02<<5), /* Externally Controlled Up/Down Count */
    TC1_EVACT_QDEC_gc    = (0x03<<5), /* Quadrature Decode */
    TC1_EVACT_RESTART_gc = (0x04<<5), /* Restart */
    TC1_EVACT_FRQ_gc     = (0x05<<5), /* Frequency Capture */
    TC1_EVACT_PW_gc      = (0x06<<5), /* Pulse-width Capture */
} TC1_EVACT_t;

/* Event Delay */
typedef enum TC1_EVDLY_enum
{
    TC1_EVDLY_CLEAR_gc = (0x00), /* Event Delay - CLEAR */
    TC1_EVDLY_SET_gc   = (0x10), /* Event Delay - SET */
} TC1_EVDLY_t;

/* Event Source Select */
typedef enum TC1_EVSEL_enum
{
    TC1_EVSEL_OFF_gc = (0x00), /* No Event Source */
    TC1_EVSEL_CH0_gc = (0x08), /* Event Channel 0 */
    TC1_EVSEL_CH1_gc = (0x09), /* Event Channel 1 */
    TC1_EVSEL_CH2_gc = (0x0A), /* Event Channel 2 */
    TC1_EVSEL_CH3_gc = (0x0B), /* Event Channel 3 */
    TC1_EVSEL_CH4_gc = (0x0C), /* Event Channel 4 */
    TC1_EVSEL_CH5_gc = (0x0D), /* Event Channel 5 */
    TC1_EVSEL_CH6_gc = (0x0E), /* Event Channel 6 */
    TC1_EVSEL_CH7_gc = (0x0F), /* Event Channel 7 */
} TC1_EVSEL_t;

/* Byte Mode */
typedef enum TC1_BYTEM_enum
{
    TC1_BYTEM_CLEAR_gc = (0x00), /* Byte Mode - CLEAR */
    TC1_BYTEM_SET_gc   = (0x01), /* Byte Mode - SET */
} TC1_BYTEM_t;

/* Error Interrupt Level */
typedef enum TC1_ERRINTLVL_enum
{
    TC1_ERRINTLVL_OFF_gc = (0x00<<2), /* Interrupt Disabled */
    TC1_ERRINTLVL_LO_gc  = (0x01<<2), /* Low Level */
    TC1_ERRINTLVL_MED_gc = (0x02<<2), /* Medium Level */
    TC1_ERRINTLVL_HI_gc  = (0x03<<2), /* High Level */
} TC1_ERRINTLVL_t;

/* Overflow interrupt level */
typedef enum TC1_OVFINTLVL_enum
{
    TC1_OVFINTLVL_OFF_gc = (0x00), /* Interrupt Disabled */
    TC1_OVFINTLVL_LO_gc  = (0x01), /* Low Level */
    TC1_OVFINTLVL_MED_gc = (0x02), /* Medium Level */
    TC1_OVFINTLVL_HI_gc  = (0x03), /* High Level */
} TC1_OVFINTLVL_t;

/* Compare or Capture B Interrupt Level */
typedef enum TC1_CCBINTLVL_enum
{
    TC1_CCBINTLVL_OFF_gc = (0x00<<2), /* Interrupt Disabled */
    TC1_CCBINTLVL_LO_gc  = (0x01<<2), /* Low Level */
    TC1_CCBINTLVL_MED_gc = (0x02<<2), /* Medium Level */
    TC1_CCBINTLVL_HI_gc  = (0x03<<2), /* High Level */
} TC1_CCBINTLVL_t;

/* Compare or Capture A Interrupt Level */
typedef enum TC1_CCAINTLVL_enum
{
    TC1_CCAINTLVL_OFF_gc = (0x00), /* Interrupt Disabled */
    TC1_CCAINTLVL_LO_gc  = (0x01), /* Low Level */
    TC1_CCAINTLVL_MED_gc = (0x02), /* Medium Level */
    TC1_CCAINTLVL_HI_gc  = (0x03), /* High Level */
} TC1_CCAINTLVL_t;

/* Command */
#define TC1_CTRLFCLR_CMD_gc(x) ((x<<2) & 0x0C)

/* Lock Update */
typedef enum TC1_LUPD_enum
{
    TC1_LUPD_CLEAR_gc = (0x00), /* Lock Update - CLEAR */
    TC1_LUPD_SET_gc   = (0x02), /* Lock Update - SET */
} TC1_LUPD_t;

/* Direction */
typedef enum TC1_DIR_enum
{
    TC1_DIR_CLEAR_gc = (0x00), /* Direction - CLEAR */
    TC1_DIR_SET_gc   = (0x01), /* Direction - SET */
} TC1_DIR_t;

/* Command */
typedef enum TC1_CMD_enum
{
    TC1_CMD_NONE_gc    = (0x00<<2), /* No Command */
    TC1_CMD_UPDATE_gc  = (0x01<<2), /* Force Update */
    TC1_CMD_RESTART_gc = (0x02<<2), /* Force Restart */
    TC1_CMD_RESET_gc   = (0x03<<2), /* Force Hard Reset */
} TC1_CMD_t;

/* Lock Update */
typedef enum TC1_LUPD_enum
{
    TC1_LUPD_CLEAR_gc = (0x00), /* Lock Update - CLEAR */
    TC1_LUPD_SET_gc   = (0x02), /* Lock Update - SET */
} TC1_LUPD_t;

/* Direction */
typedef enum TC1_DIR_enum
{
    TC1_DIR_CLEAR_gc = (0x00), /* Direction - CLEAR */
    TC1_DIR_SET_gc   = (0x01), /* Direction - SET */
} TC1_DIR_t;

/* Compare or Capture B Buffer Valid */
typedef enum TC1_CCBBV_enum
{
    TC1_CCBBV_CLEAR_gc = (0x00), /* Compare or Capture B Buffer Valid - CLEAR */
    TC1_CCBBV_SET_gc   = (0x04), /* Compare or Capture B Buffer Valid - SET */
} TC1_CCBBV_t;

/* Compare or Capture A Buffer Valid */
typedef enum TC1_CCABV_enum
{
    TC1_CCABV_CLEAR_gc = (0x00), /* Compare or Capture A Buffer Valid - CLEAR */
    TC1_CCABV_SET_gc   = (0x02), /* Compare or Capture A Buffer Valid - SET */
} TC1_CCABV_t;

/* Period Buffer Valid */
typedef enum TC1_PERBV_enum
{
    TC1_PERBV_CLEAR_gc = (0x00), /* Period Buffer Valid - CLEAR */
    TC1_PERBV_SET_gc   = (0x01), /* Period Buffer Valid - SET */
} TC1_PERBV_t;

/* Compare or Capture B Buffer Valid */
typedef enum TC1_CCBBV_enum
{
    TC1_CCBBV_CLEAR_gc = (0x00), /* Compare or Capture B Buffer Valid - CLEAR */
    TC1_CCBBV_SET_gc   = (0x04), /* Compare or Capture B Buffer Valid - SET */
} TC1_CCBBV_t;

/* Compare or Capture A Buffer Valid */
typedef enum TC1_CCABV_enum
{
    TC1_CCABV_CLEAR_gc = (0x00), /* Compare or Capture A Buffer Valid - CLEAR */
    TC1_CCABV_SET_gc   = (0x02), /* Compare or Capture A Buffer Valid - SET */
} TC1_CCABV_t;

/* Period Buffer Valid */
typedef enum TC1_PERBV_enum
{
    TC1_PERBV_CLEAR_gc = (0x00), /* Period Buffer Valid - CLEAR */
    TC1_PERBV_SET_gc   = (0x01), /* Period Buffer Valid - SET */
} TC1_PERBV_t;

/* Compare or Capture B Interrupt Flag */
typedef enum TC1_CCBIF_enum
{
    TC1_CCBIF_CLEAR_gc = (0x00), /* Compare or Capture B Interrupt Flag - CLEAR */
    TC1_CCBIF_SET_gc   = (0x20), /* Compare or Capture B Interrupt Flag - SET */
} TC1_CCBIF_t;

/* Compare or Capture A Interrupt Flag */
typedef enum TC1_CCAIF_enum
{
    TC1_CCAIF_CLEAR_gc = (0x00), /* Compare or Capture A Interrupt Flag - CLEAR */
    TC1_CCAIF_SET_gc   = (0x10), /* Compare or Capture A Interrupt Flag - SET */
} TC1_CCAIF_t;

/* Error Interrupt Flag */
typedef enum TC1_ERRIF_enum
{
    TC1_ERRIF_CLEAR_gc = (0x00), /* Error Interrupt Flag - CLEAR */
    TC1_ERRIF_SET_gc   = (0x02), /* Error Interrupt Flag - SET */
} TC1_ERRIF_t;

/* Overflow Interrupt Flag */
typedef enum TC1_OVFIF_enum
{
    TC1_OVFIF_CLEAR_gc = (0x00), /* Overflow Interrupt Flag - CLEAR */
    TC1_OVFIF_SET_gc   = (0x01), /* Overflow Interrupt Flag - SET */
} TC1_OVFIF_t;

/* Pattern Generation Mode */
typedef enum AWEX_PGM_enum
{
    AWEX_PGM_CLEAR_gc = (0x00), /* Pattern Generation Mode - CLEAR */
    AWEX_PGM_SET_gc   = (0x20), /* Pattern Generation Mode - SET */
} AWEX_PGM_t;

/* Common Waveform Channel Mode */
typedef enum AWEX_CWCM_enum
{
    AWEX_CWCM_CLEAR_gc = (0x00), /* Common Waveform Channel Mode - CLEAR */
    AWEX_CWCM_SET_gc   = (0x10), /* Common Waveform Channel Mode - SET */
} AWEX_CWCM_t;

/* Dead Time Insertion Compare Channel D Enable */
typedef enum AWEX_DTICCDEN_enum
{
    AWEX_DTICCDEN_CLEAR_gc = (0x00), /* Dead Time Insertion Compare Channel D Enable - CLEAR */
    AWEX_DTICCDEN_SET_gc   = (0x08), /* Dead Time Insertion Compare Channel D Enable - SET */
} AWEX_DTICCDEN_t;

/* Dead Time Insertion Compare Channel C Enable */
typedef enum AWEX_DTICCCEN_enum
{
    AWEX_DTICCCEN_CLEAR_gc = (0x00), /* Dead Time Insertion Compare Channel C Enable - CLEAR */
    AWEX_DTICCCEN_SET_gc   = (0x04), /* Dead Time Insertion Compare Channel C Enable - SET */
} AWEX_DTICCCEN_t;

/* Dead Time Insertion Compare Channel B Enable */
typedef enum AWEX_DTICCBEN_enum
{
    AWEX_DTICCBEN_CLEAR_gc = (0x00), /* Dead Time Insertion Compare Channel B Enable - CLEAR */
    AWEX_DTICCBEN_SET_gc   = (0x02), /* Dead Time Insertion Compare Channel B Enable - SET */
} AWEX_DTICCBEN_t;

/* Dead Time Insertion Compare Channel A Enable */
typedef enum AWEX_DTICCAEN_enum
{
    AWEX_DTICCAEN_CLEAR_gc = (0x00), /* Dead Time Insertion Compare Channel A Enable - CLEAR */
    AWEX_DTICCAEN_SET_gc   = (0x01), /* Dead Time Insertion Compare Channel A Enable - SET */
} AWEX_DTICCAEN_t;

/* Fault Detect on Disable Break Disable */
typedef enum AWEX_FDDBD_enum
{
    AWEX_FDDBD_CLEAR_gc = (0x00), /* Fault Detect on Disable Break Disable - CLEAR */
    AWEX_FDDBD_SET_gc   = (0x10), /* Fault Detect on Disable Break Disable - SET */
} AWEX_FDDBD_t;

/* Fault Detect Mode */
typedef enum AWEX_FDMODE_enum
{
    AWEX_FDMODE_CLEAR_gc = (0x00), /* Fault Detect Mode - CLEAR */
    AWEX_FDMODE_SET_gc   = (0x04), /* Fault Detect Mode - SET */
} AWEX_FDMODE_t;

/* Fault Detect Action */
typedef enum AWEX_FDACT_enum
{
    AWEX_FDACT_NONE_gc     = (0x00), /* No Fault Protection */
    AWEX_FDACT_CLEAROE_gc  = (0x01), /* Clear Output Enable Bits */
    AWEX_FDACT_CLEARDIR_gc = (0x03), /* Clear I/O Port Direction Bits */
} AWEX_FDACT_t;

/* Fault Detect Flag */
typedef enum AWEX_FDF_enum
{
    AWEX_FDF_CLEAR_gc = (0x00), /* Fault Detect Flag - CLEAR */
    AWEX_FDF_SET_gc   = (0x04), /* Fault Detect Flag - SET */
} AWEX_FDF_t;

/* Dead Time High Side Buffer Valid */
typedef enum AWEX_DTHSBUFV_enum
{
    AWEX_DTHSBUFV_CLEAR_gc = (0x00), /* Dead Time High Side Buffer Valid - CLEAR */
    AWEX_DTHSBUFV_SET_gc   = (0x02), /* Dead Time High Side Buffer Valid - SET */
} AWEX_DTHSBUFV_t;

/* Dead Time Low Side Buffer Valid */
typedef enum AWEX_DTLSBUFV_enum
{
    AWEX_DTLSBUFV_CLEAR_gc = (0x00), /* Dead Time Low Side Buffer Valid - CLEAR */
    AWEX_DTLSBUFV_SET_gc   = (0x01), /* Dead Time Low Side Buffer Valid - SET */
} AWEX_DTLSBUFV_t;

/* High Resolution Enable */
typedef enum HIRES_HREN_enum
{
    HIRES_HREN_NONE_gc = (0x00), /* No Fault Protection */
    HIRES_HREN_TC0_gc  = (0x01), /* Enable High Resolution on Timer/Counter 0 */
    HIRES_HREN_TC1_gc  = (0x02), /* Enable High Resolution on Timer/Counter 1 */
    HIRES_HREN_BOTH_gc = (0x03), /* Enable High Resolution both Timer/Counters */
} HIRES_HREN_t;

/*
--------------------------------------------------------------------------------
USART - Universal Asynchronous Receiver-Transmitter
--------------------------------------------------------------------------------
*/

typedef struct USART_struct
{
    register8_t DATA;      /* Data Register */
    register8_t STATUS;    /* Status Register */
    register8_t rsv_0x02;  /* RESERVED REGISTER */
    register8_t CTRLA;     /* Control Register A */
    register8_t CTRLB;     /* Control Register B */
    register8_t CTRLC;     /* Control Register C */
    register8_t BAUDCTRLA; /* Baud Rate Control Register A */
    register8_t BAUDCTRLB; /* Baud Rate Control Register B */
} USART_t;


/* Receive Interrupt Flag */
typedef enum USART_RXCIF_enum
{
    USART_RXCIF_CLEAR_gc = (0x00), /* Receive Interrupt Flag - CLEAR */
    USART_RXCIF_SET_gc   = (0x80), /* Receive Interrupt Flag - SET */
} USART_RXCIF_t;

/* Transmit Interrupt Flag */
typedef enum USART_TXCIF_enum
{
    USART_TXCIF_CLEAR_gc = (0x00), /* Transmit Interrupt Flag - CLEAR */
    USART_TXCIF_SET_gc   = (0x40), /* Transmit Interrupt Flag - SET */
} USART_TXCIF_t;

/* Data Register Empty Flag */
typedef enum USART_DREIF_enum
{
    USART_DREIF_CLEAR_gc = (0x00), /* Data Register Empty Flag - CLEAR */
    USART_DREIF_SET_gc   = (0x20), /* Data Register Empty Flag - SET */
} USART_DREIF_t;

/* Frame Error */
typedef enum USART_FERR_enum
{
    USART_FERR_CLEAR_gc = (0x00), /* Frame Error - CLEAR */
    USART_FERR_SET_gc   = (0x10), /* Frame Error - SET */
} USART_FERR_t;

/* Buffer Overflow */
typedef enum USART_BUFOVF_enum
{
    USART_BUFOVF_CLEAR_gc = (0x00), /* Buffer Overflow - CLEAR */
    USART_BUFOVF_SET_gc   = (0x08), /* Buffer Overflow - SET */
} USART_BUFOVF_t;

/* Parity Error */
typedef enum USART_PERR_enum
{
    USART_PERR_CLEAR_gc = (0x00), /* Parity Error - CLEAR */
    USART_PERR_SET_gc   = (0x04), /* Parity Error - SET */
} USART_PERR_t;

/* Receive Bit 8 */
typedef enum USART_RXB8_enum
{
    USART_RXB8_CLEAR_gc = (0x00), /* Receive Bit 8 - CLEAR */
    USART_RXB8_SET_gc   = (0x01), /* Receive Bit 8 - SET */
} USART_RXB8_t;

/* Receive Interrupt Level */
typedef enum USART_RXCINTLVL_enum
{
    USART_RXCINTLVL_OFF_gc = (0x00<<4), /* Interrupt Disabled */
    USART_RXCINTLVL_LO_gc  = (0x01<<4), /* Low Level */
    USART_RXCINTLVL_MED_gc = (0x02<<4), /* Medium Level */
    USART_RXCINTLVL_HI_gc  = (0x03<<4), /* High Level */
} USART_RXCINTLVL_t;

/* Transmit Interrupt Level */
typedef enum USART_TXCINTLVL_enum
{
    USART_TXCINTLVL_OFF_gc = (0x00<<2), /* Interrupt Disabled */
    USART_TXCINTLVL_LO_gc  = (0x01<<2), /* Low Level */
    USART_TXCINTLVL_MED_gc = (0x02<<2), /* Medium Level */
    USART_TXCINTLVL_HI_gc  = (0x03<<2), /* High Level */
} USART_TXCINTLVL_t;

/* Data Register Empty Interrupt Level */
typedef enum USART_DREINTLVL_enum
{
    USART_DREINTLVL_OFF_gc = (0x00), /* Interrupt Disabled */
    USART_DREINTLVL_LO_gc  = (0x01), /* Low Level */
    USART_DREINTLVL_MED_gc = (0x02), /* Medium Level */
    USART_DREINTLVL_HI_gc  = (0x03), /* High Level */
} USART_DREINTLVL_t;

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

/* Double transmission speed */
typedef enum USART_CLK2X_enum
{
    USART_CLK2X_CLEAR_gc = (0x00), /* Double transmission speed - CLEAR */
    USART_CLK2X_SET_gc   = (0x04), /* Double transmission speed - SET */
} USART_CLK2X_t;

/* Multi-processor Communication Mode */
typedef enum USART_MPCM_enum
{
    USART_MPCM_CLEAR_gc = (0x00), /* Multi-processor Communication Mode - CLEAR */
    USART_MPCM_SET_gc   = (0x02), /* Multi-processor Communication Mode - SET */
} USART_MPCM_t;

/* Transmit bit 8 */
typedef enum USART_TXB8_enum
{
    USART_TXB8_CLEAR_gc = (0x00), /* Transmit bit 8 - CLEAR */
    USART_TXB8_SET_gc   = (0x01), /* Transmit bit 8 - SET */
} USART_TXB8_t;

/* Communication Mode */
typedef enum USART_CMODE_enum
{
    USART_CMODE_ASYNCHRONOUS_gc = (0x00<<6), /* Asynchronous Mode */
    USART_CMODE_SYNCHRONOUS_gc  = (0x01<<6), /* Synchronous Mode */
    USART_CMODE_IRDA_gc         = (0x02<<6), /* IrDA Mode */
    USART_CMODE_MSPI_gc         = (0x03<<6), /* Master SPI Mode */
} USART_CMODE_t;

/* Parity Mode */
typedef enum USART_PMODE_enum
{
    USART_PMODE_DISABLED_gc = (0x00<<4), /* No Parity */
    USART_PMODE_EVEN_gc     = (0x02<<4), /* Even Parity */
    USART_PMODE_ODD_gc      = (0x03<<4), /* Odd Parity */
} USART_PMODE_t;

/* Stop Bit Mode */
typedef enum USART_SBMODE_enum
{
    USART_SBMODE_CLEAR_gc = (0x00), /* Stop Bit Mode - CLEAR */
    USART_SBMODE_SET_gc   = (0x08), /* Stop Bit Mode - SET */
} USART_SBMODE_t;

/* Character Size */
typedef enum USART_CHSIZE_enum
{
    USART_CHSIZE_5BIT_gc = (0x00), /* Character size: 5 bit */
    USART_CHSIZE_6BIT_gc = (0x01), /* Character size: 6 bit */
    USART_CHSIZE_7BIT_gc = (0x02), /* Character size: 7 bit */
    USART_CHSIZE_8BIT_gc = (0x03), /* Character size: 8 bit */
    USART_CHSIZE_9BIT_gc = (0x07), /* Character size: 9 bit */
} USART_CHSIZE_t;

/* SPI Master Mode, Data Order */
typedef enum USART_UDORD_enum
{
    USART_UDORD_CLEAR_gc = (0x00), /* SPI Master Mode, Data Order - CLEAR */
    USART_UDORD_SET_gc   = (0x04), /* SPI Master Mode, Data Order - SET */
} USART_UDORD_t;

/* SPI Master Mode, Clock Phase */
typedef enum USART_UCPHA_enum
{
    USART_UCPHA_CLEAR_gc = (0x00), /* SPI Master Mode, Clock Phase - CLEAR */
    USART_UCPHA_SET_gc   = (0x02), /* SPI Master Mode, Clock Phase - SET */
} USART_UCPHA_t;

/* Baud Rate Scale */
#define USART_BAUDCTRLB_BSCALE_gc(x) ((x<<4) & 0xF0)

/* Baud Rate Selection bits[11:8] */
#define USART_BAUDCTRLB_BSEL_gc(x) (x & 0x0F)

/*
--------------------------------------------------------------------------------
SPI - Serial Peripheral Interface
--------------------------------------------------------------------------------
*/

typedef struct SPI_struct
{
    register8_t CTRL;    /* Control Register */
    register8_t INTCTRL; /* Interrupt Control Register */
    register8_t STATUS;  /* Status Register */
    register8_t DATA;    /* Data Register */
} SPI_t;


/* Enable Double Speed */
typedef enum SPI_CLK2X_enum
{
    SPI_CLK2X_CLEAR_gc = (0x00), /* Enable Double Speed - CLEAR */
    SPI_CLK2X_SET_gc   = (0x80), /* Enable Double Speed - SET */
} SPI_CLK2X_t;

/* Enable Module */
typedef enum SPI_ENABLE_enum
{
    SPI_ENABLE_CLEAR_gc = (0x00), /* Enable Module - CLEAR */
    SPI_ENABLE_SET_gc   = (0x40), /* Enable Module - SET */
} SPI_ENABLE_t;

/* Data Order Setting */
typedef enum SPI_DORD_enum
{
    SPI_DORD_CLEAR_gc = (0x00), /* Data Order Setting - CLEAR */
    SPI_DORD_SET_gc   = (0x20), /* Data Order Setting - SET */
} SPI_DORD_t;

/* Master Operation Enable */
typedef enum SPI_MASTER_enum
{
    SPI_MASTER_CLEAR_gc = (0x00), /* Master Operation Enable - CLEAR */
    SPI_MASTER_SET_gc   = (0x10), /* Master Operation Enable - SET */
} SPI_MASTER_t;

/* SPI Mode */
typedef enum SPI_MODE_enum
{
    SPI_MODE_0_gc = (0x00<<2), /* SPI Mode 0 */
    SPI_MODE_1_gc = (0x01<<2), /* SPI Mode 1 */
    SPI_MODE_2_gc = (0x02<<2), /* SPI Mode 2 */
    SPI_MODE_3_gc = (0x03<<2), /* SPI Mode 3 */
} SPI_MODE_t;

/* Prescaler */
typedef enum SPI_PRESCALER_enum
{
    SPI_PRESCALER_DIV4_gc   = (0x00), /* System Clock / 4 */
    SPI_PRESCALER_DIV16_gc  = (0x01), /* System Clock / 16 */
    SPI_PRESCALER_DIV64_gc  = (0x02), /* System Clock / 64 */
    SPI_PRESCALER_DIV128_gc = (0x03), /* System Clock / 128 */
} SPI_PRESCALER_t;

/* Interrupt level */
typedef enum SPI_INTLVL_enum
{
    SPI_INTLVL_OFF_gc = (0x00), /* Interrupt Disabled */
    SPI_INTLVL_LO_gc  = (0x01), /* Low Level */
    SPI_INTLVL_MED_gc = (0x02), /* Medium Level */
    SPI_INTLVL_HI_gc  = (0x03), /* High Level */
} SPI_INTLVL_t;

/* Interrupt Flag */
typedef enum SPI_IF_enum
{
    SPI_IF_CLEAR_gc = (0x00), /* Interrupt Flag - CLEAR */
    SPI_IF_SET_gc   = (0x80), /* Interrupt Flag - SET */
} SPI_IF_t;

/* Write Collision */
typedef enum SPI_WRCOL_enum
{
    SPI_WRCOL_CLEAR_gc = (0x00), /* Write Collision - CLEAR */
    SPI_WRCOL_SET_gc   = (0x40), /* Write Collision - SET */
} SPI_WRCOL_t;

/*
--------------------------------------------------------------------------------
IRCOM - IR Communication Module
--------------------------------------------------------------------------------
*/

typedef struct IRCOM_struct
{
    register8_t CTRL;     /* Control Register */
    register8_t TXPLCTRL; /* IrDA Transmitter Pulse Length Control Register */
    register8_t RXPLCTRL; /* IrDA Receiver Pulse Length Control Register */
} IRCOM_t;


/* Event Channel Select */
typedef enum IRCOM_EVSEL_enum
{
    IRCOM_EVSEL_OFF_gc = (0x00), /* No Event Source */
    IRCOM_EVSEL_0_gc   = (0x08), /* Event Channel 0 */
    IRCOM_EVSEL_1_gc   = (0x09), /* Event Channel 1 */
    IRCOM_EVSEL_2_gc   = (0x0A), /* Event Channel 2 */
    IRCOM_EVSEL_3_gc   = (0x0B), /* Event Channel 3 */
    IRCOM_EVSEL_4_gc   = (0x0C), /* Event Channel 4 */
    IRCOM_EVSEL_5_gc   = (0x0D), /* Event Channel 5 */
    IRCOM_EVSEL_6_gc   = (0x0E), /* Event Channel 6 */
    IRCOM_EVSEL_7_gc   = (0x0F), /* Event Channel 7 */
} IRCOM_EVSEL_t;

/*
--------------------------------------------------------------------------------
AES - AES Module
--------------------------------------------------------------------------------
*/

typedef struct AES_struct
{
    register8_t CTRL;    /* AES Control Register */
    register8_t STATUS;  /* AES Status Register */
    register8_t STATE;   /* AES State Register */
    register8_t KEY;     /* AES Key Register */
    register8_t INTCTRL; /* AES Interrupt Control Register */
} AES_t;


/* Start/Run */
typedef enum AES_START_enum
{
    AES_START_CLEAR_gc = (0x00), /* Start/Run - CLEAR */
    AES_START_SET_gc   = (0x80), /* Start/Run - SET */
} AES_START_t;

/* Auto Start Trigger */
typedef enum AES_AUTO_enum
{
    AES_AUTO_CLEAR_gc = (0x00), /* Auto Start Trigger - CLEAR */
    AES_AUTO_SET_gc   = (0x40), /* Auto Start Trigger - SET */
} AES_AUTO_t;

/* AES Software Reset */
typedef enum AES_RESET_enum
{
    AES_RESET_CLEAR_gc = (0x00), /* AES Software Reset - CLEAR */
    AES_RESET_SET_gc   = (0x20), /* AES Software Reset - SET */
} AES_RESET_t;

/* Decryption / Direction */
typedef enum AES_DECRYPT_enum
{
    AES_DECRYPT_CLEAR_gc = (0x00), /* Decryption / Direction - CLEAR */
    AES_DECRYPT_SET_gc   = (0x10), /* Decryption / Direction - SET */
} AES_DECRYPT_t;

/* State XOR Load Enable */
typedef enum AES_XOR_enum
{
    AES_XOR_CLEAR_gc = (0x00), /* State XOR Load Enable - CLEAR */
    AES_XOR_SET_gc   = (0x04), /* State XOR Load Enable - SET */
} AES_XOR_t;

/* AES Error */
typedef enum AES_ERROR_enum
{
    AES_ERROR_CLEAR_gc = (0x00), /* AES Error - CLEAR */
    AES_ERROR_SET_gc   = (0x80), /* AES Error - SET */
} AES_ERROR_t;

/* State Ready Interrupt Flag */
typedef enum AES_SRIF_enum
{
    AES_SRIF_CLEAR_gc = (0x00), /* State Ready Interrupt Flag - CLEAR */
    AES_SRIF_SET_gc   = (0x01), /* State Ready Interrupt Flag - SET */
} AES_SRIF_t;

/* Interrupt level */
typedef enum AES_INTLVL_enum
{
    AES_INTLVL_OFF_gc = (0x00), /* Interrupt Disabled */
    AES_INTLVL_LO_gc  = (0x01), /* Low Level */
    AES_INTLVL_MED_gc = (0x02), /* Medium Level */
    AES_INTLVL_HI_gc  = (0x03), /* High Level */
} AES_INTLVL_t;
/*
================================================================================
IO Module Instances. Mapped to memory.
================================================================================
*/

#define GPIO            (*(GPIO_t *) 0x0000)                /* General Purpose IO Registers */
#define FUSE            (*(NVM_FUSES_t *) 0x0000)           /* Fuses */
#define LOCKBIT         (*(NVM_LOCKBITS_t *) 0x0000)        /* Lock Bits */
#define PROD_SIGNATURES (*(NVM_PROD_SIGNATURES_t *) 0x0000) /* Production Signatures */
#define VPORT0          (*(VPORT_t *) 0x0010)               /* Virtual Port */
#define VPORT1          (*(VPORT_t *) 0x0014)               /* Virtual Port */
#define VPORT2          (*(VPORT_t *) 0x0018)               /* Virtual Port */
#define VPORT3          (*(VPORT_t *) 0x001C)               /* Virtual Port */
#define OCD             (*(OCD_t *) 0x002E)                 /* On-Chip Debug System */
#define CPU             (*(CPU_t *) 0x0030)                 /* CPU registers */
#define CLK             (*(CLK_t *) 0x0040)                 /* Clock System */
#define SLEEP           (*(SLEEP_t *) 0x0048)               /* Sleep Controller */
#define OSC             (*(OSC_t *) 0x0050)                 /* Oscillator */
#define DFLLRC32M       (*(DFLL_t *) 0x0060)                /* DFLL */
#define DFLLRC2M        (*(DFLL_t *) 0x0068)                /* DFLL */
#define PR              (*(PR_t *) 0x0070)                  /* Power Reduction */
#define RST             (*(RST_t *) 0x0078)                 /* Reset */
#define WDT             (*(WDT_t *) 0x0080)                 /* Watch-Dog Timer */
#define MCU             (*(MCU_t *) 0x0090)                 /* MCU Control */
#define PMIC            (*(PMIC_t *) 0x00A0)                /* Programmable Multi-level Interrupt Controller */
#define PORTCFG         (*(PORTCFG_t *) 0x00B0)             /* I/O port Configuration */
#define AES             (*(AES_t *) 0x00C0)                 /* AES Module */
#define DMA             (*(DMA_t *) 0x0100)                 /* DMA Controller */
#define EVSYS           (*(EVSYS_t *) 0x0180)               /* Event System */
#define NVM             (*(NVM_t *) 0x01C0)                 /* Non-volatile Memory Controller */
#define ADCA            (*(ADC_t *) 0x0200)                 /* Analog-to-Digital Converter */
#define DACB            (*(DAC_t *) 0x0320)                 /* Digital-to-Analog Converter */
#define ACA             (*(AC_t *) 0x0380)                  /* Analog Comparator */
#define RTC             (*(RTC_t *) 0x0400)                 /* Real-Time Counter */
#define TWIC            (*(TWI_t *) 0x0480)                 /* Two-Wire Interface */
#define TWIE            (*(TWI_t *) 0x04A0)                 /* Two-Wire Interface */
#define PORTA           (*(PORT_t *) 0x0600)                /* I/O Ports */
#define PORTB           (*(PORT_t *) 0x0620)                /* I/O Ports */
#define PORTC           (*(PORT_t *) 0x0640)                /* I/O Ports */
#define PORTD           (*(PORT_t *) 0x0660)                /* I/O Ports */
#define PORTE           (*(PORT_t *) 0x0680)                /* I/O Ports */
#define PORTR           (*(PORT_t *) 0x07E0)                /* I/O Ports */
#define TCC0            (*(TC0_t *) 0x0800)                 /* 16-bit Timer/Counter 0 */
#define TCC1            (*(TC1_t *) 0x0840)                 /* 16-bit Timer/Counter 1 */
#define AWEXC           (*(AWEX_t *) 0x0880)                /* Advanced Waveform Extension */
#define HIRESC          (*(HIRES_t *) 0x0890)               /* High-Resolution Extension */
#define USARTC0         (*(USART_t *) 0x08A0)               /* Universal Synchronous/Asynchronous Receiver/Transmitter */
#define USARTC1         (*(USART_t *) 0x08B0)               /* Universal Synchronous/Asynchronous Receiver/Transmitter */
#define SPIC            (*(SPI_t *) 0x08C0)                 /* Serial Peripheral Interface */
#define IRCOM           (*(IRCOM_t *) 0x08F8)               /* IR Communication Module */
#define TCD0            (*(TC0_t *) 0x0900)                 /* 16-bit Timer/Counter 0 */
#define TCD1            (*(TC1_t *) 0x0940)                 /* 16-bit Timer/Counter 1 */
#define HIRESD          (*(HIRES_t *) 0x0990)               /* High-Resolution Extension */
#define USARTD0         (*(USART_t *) 0x09A0)               /* Universal Synchronous/Asynchronous Receiver/Transmitter */
#define USARTD1         (*(USART_t *) 0x09B0)               /* Universal Synchronous/Asynchronous Receiver/Transmitter */
#define SPID            (*(SPI_t *) 0x09C0)                 /* Serial Peripheral Interface */
#define TCE0            (*(TC0_t *) 0x0A00)                 /* 16-bit Timer/Counter 0 */
#define HIRESE          (*(HIRES_t *) 0x0A90)               /* High-Resolution Extension */
#define USARTE0         (*(USART_t *) 0x0AA0)               /* Universal Synchronous/Asynchronous Receiver/Transmitter */
#else
/*
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
ASM LANGUAGE - ONLY
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/


/*
--------------------------------------------------------------------------------
GPIO - General Purpose IO
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
XOCD - On-Chip Debug System
--------------------------------------------------------------------------------
*/


/* OCDR Dirty */
#define OCD_OCDRD_CLEAR_gc (0x00) /* OCDR Dirty - CLEAR */
#define OCD_OCDRD_SET_gc   (0x01) /* OCDR Dirty - SET */


/*
--------------------------------------------------------------------------------
CPU - CPU
--------------------------------------------------------------------------------
*/


/* CCP signature */
#define CPU_CCP_SPM_gc   (0x9D) /* SPM Instruction Protection */
#define CPU_CCP_IOREG_gc (0xD8) /* IO Register Protection */


/* Global Interrupt Enable Flag */
#define CPU_I_CLEAR_gc (0x00) /* Global Interrupt Enable Flag - CLEAR */
#define CPU_I_SET_gc   (0x80) /* Global Interrupt Enable Flag - SET */


/* Transfer Bit */
#define CPU_T_CLEAR_gc (0x00) /* Transfer Bit - CLEAR */
#define CPU_T_SET_gc   (0x40) /* Transfer Bit - SET */


/* Half Carry Flag */
#define CPU_H_CLEAR_gc (0x00) /* Half Carry Flag - CLEAR */
#define CPU_H_SET_gc   (0x20) /* Half Carry Flag - SET */


/* N Exclusive Or V Flag */
#define CPU_S_CLEAR_gc (0x00) /* N Exclusive Or V Flag - CLEAR */
#define CPU_S_SET_gc   (0x10) /* N Exclusive Or V Flag - SET */


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
CLK - Clock System
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
CLK - Clock System
--------------------------------------------------------------------------------
*/


/* System Clock Selection */
#define CLK_SCLKSEL_RC2M_gc  (0x00) /* Internal 2MHz RC Oscillator */
#define CLK_SCLKSEL_RC32M_gc (0x01) /* Internal 32MHz RC Oscillator */
#define CLK_SCLKSEL_RC32K_gc (0x02) /* Internal 32kHz RC Oscillator */
#define CLK_SCLKSEL_XOSC_gc  (0x03) /* External Crystal Oscillator or Clock */
#define CLK_SCLKSEL_PLL_gc   (0x04) /* Phase Locked Loop */


/* Prescaler A Division Factor */
#define CLK_PSADIV_1_gc   (0x00<<2) /* Divide by 1 */
#define CLK_PSADIV_2_gc   (0x01<<2) /* Divide by 2 */
#define CLK_PSADIV_4_gc   (0x03<<2) /* Divide by 4 */
#define CLK_PSADIV_8_gc   (0x05<<2) /* Divide by 8 */
#define CLK_PSADIV_16_gc  (0x07<<2) /* Divide by 16 */
#define CLK_PSADIV_32_gc  (0x09<<2) /* Divide by 32 */
#define CLK_PSADIV_64_gc  (0x0B<<2) /* Divide by 64 */
#define CLK_PSADIV_128_gc (0x0D<<2) /* Divide by 128 */
#define CLK_PSADIV_256_gc (0x0F<<2) /* Divide by 256 */
#define CLK_PSADIV_512_gc (0x11<<2) /* Divide by 512 */


/* Prescaler B and C Division factor */
#define CLK_PSBCDIV_1_1_gc (0x00) /* Divide B by 1 and C by 1 */
#define CLK_PSBCDIV_1_2_gc (0x01) /* Divide B by 1 and C by 2 */
#define CLK_PSBCDIV_4_1_gc (0x02) /* Divide B by 4 and C by 1 */
#define CLK_PSBCDIV_2_2_gc (0x03) /* Divide B by 2 and C by 2 */


/* Clock System Lock */
#define CLK_LOCK_CLEAR_gc (0x00) /* Clock System Lock - CLEAR */
#define CLK_LOCK_SET_gc   (0x01) /* Clock System Lock - SET */


/* RTC Clock Source */
#define CLK_RTCSRC_ULP_gc    (0x00<<1) /* 1kHz from internal 32kHz ULP */
#define CLK_RTCSRC_TOSC_gc   (0x01<<1) /* 1kHz from 32kHz crystal oscillator on TOSC */
#define CLK_RTCSRC_RCOSC_gc  (0x02<<1) /* 1kHz from internal 32kHz RC oscillator */
#define CLK_RTCSRC_TOSC32_gc (0x05<<1) /* 32kHz from 32kHz crystal oscillator on TOSC */


/* RTC Clock Source Enable */
#define CLK_RTCEN_CLEAR_gc (0x00) /* RTC Clock Source Enable - CLEAR */
#define CLK_RTCEN_SET_gc   (0x01) /* RTC Clock Source Enable - SET */


/* AES */
#define PR_AES_CLEAR_gc (0x00) /* AES - CLEAR */
#define PR_AES_SET_gc   (0x10) /* AES - SET */


/* Real-time Counter */
#define PR_RTC_CLEAR_gc (0x00) /* Real-time Counter - CLEAR */
#define PR_RTC_SET_gc   (0x04) /* Real-time Counter - SET */


/* Event System */
#define PR_EVSYS_CLEAR_gc (0x00) /* Event System - CLEAR */
#define PR_EVSYS_SET_gc   (0x02) /* Event System - SET */


/* DMA-Controller */
#define PR_DMA_CLEAR_gc (0x00) /* DMA-Controller - CLEAR */
#define PR_DMA_SET_gc   (0x01) /* DMA-Controller - SET */


/* Port A DAC */
#define PR_DAC_CLEAR_gc (0x00) /* Port A DAC - CLEAR */
#define PR_DAC_SET_gc   (0x04) /* Port A DAC - SET */


/* Port A ADC */
#define PR_ADC_CLEAR_gc (0x00) /* Port A ADC - CLEAR */
#define PR_ADC_SET_gc   (0x02) /* Port A ADC - SET */


/* Port A Analog Comparator */
#define PR_AC_CLEAR_gc (0x00) /* Port A Analog Comparator - CLEAR */
#define PR_AC_SET_gc   (0x01) /* Port A Analog Comparator - SET */


/* Port B DAC */
/* PR_DAC_CLEAR_gc ALREADY DEFINED */
/* PR_DAC_SET_gc ALREADY DEFINED */


/* Port B ADC */
/* PR_ADC_CLEAR_gc ALREADY DEFINED */
/* PR_ADC_SET_gc ALREADY DEFINED */


/* Port B Analog Comparator */
/* PR_AC_CLEAR_gc ALREADY DEFINED */
/* PR_AC_SET_gc ALREADY DEFINED */


/* Port C Two-wire Interface */
#define PR_TWI_CLEAR_gc (0x00) /* Port C Two-wire Interface - CLEAR */
#define PR_TWI_SET_gc   (0x40) /* Port C Two-wire Interface - SET */


/* Port C USART1 */
#define PR_USART1_CLEAR_gc (0x00) /* Port C USART1 - CLEAR */
#define PR_USART1_SET_gc   (0x20) /* Port C USART1 - SET */


/* Port C USART0 */
#define PR_USART0_CLEAR_gc (0x00) /* Port C USART0 - CLEAR */
#define PR_USART0_SET_gc   (0x10) /* Port C USART0 - SET */


/* Port C SPI */
#define PR_SPI_CLEAR_gc (0x00) /* Port C SPI - CLEAR */
#define PR_SPI_SET_gc   (0x08) /* Port C SPI - SET */


/* Port C AWEX */
#define PR_HIRES_CLEAR_gc (0x00) /* Port C AWEX - CLEAR */
#define PR_HIRES_SET_gc   (0x04) /* Port C AWEX - SET */


/* Port C Timer/Counter1 */
#define PR_TC1_CLEAR_gc (0x00) /* Port C Timer/Counter1 - CLEAR */
#define PR_TC1_SET_gc   (0x02) /* Port C Timer/Counter1 - SET */


/* Port C Timer/Counter0 */
#define PR_TC0_CLEAR_gc (0x00) /* Port C Timer/Counter0 - CLEAR */
#define PR_TC0_SET_gc   (0x01) /* Port C Timer/Counter0 - SET */


/* Port D Two-wire Interface */
/* PR_TWI_CLEAR_gc ALREADY DEFINED */
/* PR_TWI_SET_gc ALREADY DEFINED */


/* Port D USART1 */
/* PR_USART1_CLEAR_gc ALREADY DEFINED */
/* PR_USART1_SET_gc ALREADY DEFINED */


/* Port D USART0 */
/* PR_USART0_CLEAR_gc ALREADY DEFINED */
/* PR_USART0_SET_gc ALREADY DEFINED */


/* Port D SPI */
/* PR_SPI_CLEAR_gc ALREADY DEFINED */
/* PR_SPI_SET_gc ALREADY DEFINED */


/* Port D AWEX */
/* PR_HIRES_CLEAR_gc ALREADY DEFINED */
/* PR_HIRES_SET_gc ALREADY DEFINED */


/* Port D Timer/Counter1 */
/* PR_TC1_CLEAR_gc ALREADY DEFINED */
/* PR_TC1_SET_gc ALREADY DEFINED */


/* Port D Timer/Counter0 */
/* PR_TC0_CLEAR_gc ALREADY DEFINED */
/* PR_TC0_SET_gc ALREADY DEFINED */


/* Port E Two-wire Interface */
/* PR_TWI_CLEAR_gc ALREADY DEFINED */
/* PR_TWI_SET_gc ALREADY DEFINED */


/* Port E USART1 */
/* PR_USART1_CLEAR_gc ALREADY DEFINED */
/* PR_USART1_SET_gc ALREADY DEFINED */


/* Port E USART0 */
/* PR_USART0_CLEAR_gc ALREADY DEFINED */
/* PR_USART0_SET_gc ALREADY DEFINED */


/* Port E SPI */
/* PR_SPI_CLEAR_gc ALREADY DEFINED */
/* PR_SPI_SET_gc ALREADY DEFINED */


/* Port E AWEX */
/* PR_HIRES_CLEAR_gc ALREADY DEFINED */
/* PR_HIRES_SET_gc ALREADY DEFINED */


/* Port E Timer/Counter1 */
/* PR_TC1_CLEAR_gc ALREADY DEFINED */
/* PR_TC1_SET_gc ALREADY DEFINED */


/* Port E Timer/Counter0 */
/* PR_TC0_CLEAR_gc ALREADY DEFINED */
/* PR_TC0_SET_gc ALREADY DEFINED */


/* Port F Two-wire Interface */
/* PR_TWI_CLEAR_gc ALREADY DEFINED */
/* PR_TWI_SET_gc ALREADY DEFINED */


/* Port F USART1 */
/* PR_USART1_CLEAR_gc ALREADY DEFINED */
/* PR_USART1_SET_gc ALREADY DEFINED */


/* Port F USART0 */
/* PR_USART0_CLEAR_gc ALREADY DEFINED */
/* PR_USART0_SET_gc ALREADY DEFINED */


/* Port F SPI */
/* PR_SPI_CLEAR_gc ALREADY DEFINED */
/* PR_SPI_SET_gc ALREADY DEFINED */


/* Port F AWEX */
/* PR_HIRES_CLEAR_gc ALREADY DEFINED */
/* PR_HIRES_SET_gc ALREADY DEFINED */


/* Port F Timer/Counter1 */
/* PR_TC1_CLEAR_gc ALREADY DEFINED */
/* PR_TC1_SET_gc ALREADY DEFINED */


/* Port F Timer/Counter0 */
/* PR_TC0_CLEAR_gc ALREADY DEFINED */
/* PR_TC0_SET_gc ALREADY DEFINED */


/*
--------------------------------------------------------------------------------
SLEEP - Sleep Controller
--------------------------------------------------------------------------------
*/


/* Sleep Mode */
#define SLEEP_SMODE_IDLE_gc   (0x00<<1) /* Idle mode */
#define SLEEP_SMODE_PDOWN_gc  (0x02<<1) /* Power-down Mode */
#define SLEEP_SMODE_PSAVE_gc  (0x03<<1) /* Power-save Mode */
#define SLEEP_SMODE_STDBY_gc  (0x06<<1) /* Standby Mode */
#define SLEEP_SMODE_ESTDBY_gc (0x07<<1) /* Extended Standby Mode */


/* Sleep Enable */
#define SLEEP_SEN_CLEAR_gc (0x00) /* Sleep Enable - CLEAR */
#define SLEEP_SEN_SET_gc   (0x01) /* Sleep Enable - SET */


/*
--------------------------------------------------------------------------------
OSC - Oscillator
--------------------------------------------------------------------------------
*/


/* PLL Enable */
#define OSC_PLLEN_CLEAR_gc (0x00) /* PLL Enable - CLEAR */
#define OSC_PLLEN_SET_gc   (0x10) /* PLL Enable - SET */


/* External Oscillator Enable */
#define OSC_XOSCEN_CLEAR_gc (0x00) /* External Oscillator Enable - CLEAR */
#define OSC_XOSCEN_SET_gc   (0x08) /* External Oscillator Enable - SET */


/* Internal 32kHz RC Oscillator Enable */
#define OSC_RC32KEN_CLEAR_gc (0x00) /* Internal 32kHz RC Oscillator Enable - CLEAR */
#define OSC_RC32KEN_SET_gc   (0x04) /* Internal 32kHz RC Oscillator Enable - SET */


/* Internal 32MHz RC Oscillator Enable */
#define OSC_RC32MEN_CLEAR_gc (0x00) /* Internal 32MHz RC Oscillator Enable - CLEAR */
#define OSC_RC32MEN_SET_gc   (0x02) /* Internal 32MHz RC Oscillator Enable - SET */


/* Internal 2MHz RC Oscillator Enable */
#define OSC_RC2MEN_CLEAR_gc (0x00) /* Internal 2MHz RC Oscillator Enable - CLEAR */
#define OSC_RC2MEN_SET_gc   (0x01) /* Internal 2MHz RC Oscillator Enable - SET */


/* PLL Ready */
#define OSC_PLLRDY_CLEAR_gc (0x00) /* PLL Ready - CLEAR */
#define OSC_PLLRDY_SET_gc   (0x10) /* PLL Ready - SET */


/* External Oscillator Ready */
#define OSC_XOSCRDY_CLEAR_gc (0x00) /* External Oscillator Ready - CLEAR */
#define OSC_XOSCRDY_SET_gc   (0x08) /* External Oscillator Ready - SET */


/* Internal 32kHz RC Oscillator Ready */
#define OSC_RC32KRDY_CLEAR_gc (0x00) /* Internal 32kHz RC Oscillator Ready - CLEAR */
#define OSC_RC32KRDY_SET_gc   (0x04) /* Internal 32kHz RC Oscillator Ready - SET */


/* Internal 32MHz RC Oscillator Ready */
#define OSC_RC32MRDY_CLEAR_gc (0x00) /* Internal 32MHz RC Oscillator Ready - CLEAR */
#define OSC_RC32MRDY_SET_gc   (0x02) /* Internal 32MHz RC Oscillator Ready - SET */


/* Internal 2MHz RC Oscillator Ready */
#define OSC_RC2MRDY_CLEAR_gc (0x00) /* Internal 2MHz RC Oscillator Ready - CLEAR */
#define OSC_RC2MRDY_SET_gc   (0x01) /* Internal 2MHz RC Oscillator Ready - SET */


/* Frequency Range */
#define OSC_FRQRANGE_04TO2_gc  (0x00<<6) /* 0.4 - 2 MHz */
#define OSC_FRQRANGE_2TO9_gc   (0x01<<6) /* 2 - 9 MHz */
#define OSC_FRQRANGE_9TO12_gc  (0x02<<6) /* 9 - 12 MHz */
#define OSC_FRQRANGE_12TO16_gc (0x03<<6) /* 12 - 16 MHz */


/* 32kHz XTAL OSC Low-power Mode */
#define OSC_X32KLPM_CLEAR_gc (0x00) /* 32kHz XTAL OSC Low-power Mode - CLEAR */
#define OSC_X32KLPM_SET_gc   (0x20) /* 32kHz XTAL OSC Low-power Mode - SET */


/* External Oscillator Selection and Startup Time */
#define OSC_XOSCSEL_EXTCLK_gc      (0x00) /* External Clock - 6 CLK */
#define OSC_XOSCSEL_32KHz_gc       (0x02) /* 32kHz TOSC - 32K CLK */
#define OSC_XOSCSEL_XTAL_256CLK_gc (0x03) /* 0.4-16MHz XTAL - 256 CLK */
#define OSC_XOSCSEL_XTAL_1KCLK_gc  (0x07) /* 0.4-16MHz XTAL - 1K CLK */
#define OSC_XOSCSEL_XTAL_16KCLK_gc (0x0B) /* 0.4-16MHz XTAL - 16K CLK */


/* Failure Detection Interrupt Flag */
#define OSC_XOSCFDIF_CLEAR_gc (0x00) /* Failure Detection Interrupt Flag - CLEAR */
#define OSC_XOSCFDIF_SET_gc   (0x02) /* Failure Detection Interrupt Flag - SET */


/* Failure Detection Enable */
#define OSC_XOSCFDEN_CLEAR_gc (0x00) /* Failure Detection Enable - CLEAR */
#define OSC_XOSCFDEN_SET_gc   (0x01) /* Failure Detection Enable - SET */


/* Clock Source */
#define OSC_PLLSRC_RC2M_gc  (0x00<<6) /* Internal 2MHz RC Oscillator */
#define OSC_PLLSRC_RC32M_gc (0x02<<6) /* Internal 32MHz RC Oscillator */
#define OSC_PLLSRC_XOSC_gc  (0x03<<6) /* External Oscillator */


/* Multiplication Factor */
#define OSC_PLLCTRL_PLLFAC_gc(x) (x & 0x1F)

/* 32MHz Calibration Reference */
#define OSC_RC32MCREF_CLEAR_gc (0x00) /* 32MHz Calibration Reference - CLEAR */
#define OSC_RC32MCREF_SET_gc   (0x02) /* 32MHz Calibration Reference - SET */


/* 2MHz Calibration Reference */
#define OSC_RC2MCREF_CLEAR_gc (0x00) /* 2MHz Calibration Reference - CLEAR */
#define OSC_RC2MCREF_SET_gc   (0x01) /* 2MHz Calibration Reference - SET */


/*
--------------------------------------------------------------------------------
DFLL - DFLL
--------------------------------------------------------------------------------
*/


/* DFLL Enable */
#define DFLL_ENABLE_CLEAR_gc (0x00) /* DFLL Enable - CLEAR */
#define DFLL_ENABLE_SET_gc   (0x01) /* DFLL Enable - SET */


/*
--------------------------------------------------------------------------------
RST - Reset
--------------------------------------------------------------------------------
*/


/* Spike Detection Reset Flag */
#define RST_SDRF_CLEAR_gc (0x00) /* Spike Detection Reset Flag - CLEAR */
#define RST_SDRF_SET_gc   (0x40) /* Spike Detection Reset Flag - SET */


/* Software Reset Flag */
#define RST_SRF_CLEAR_gc (0x00) /* Software Reset Flag - CLEAR */
#define RST_SRF_SET_gc   (0x20) /* Software Reset Flag - SET */


/* Programming and Debug Interface Interface Reset Flag */
#define RST_PDIRF_CLEAR_gc (0x00) /* Programming and Debug Interface Interface Reset Flag - CLEAR */
#define RST_PDIRF_SET_gc   (0x10) /* Programming and Debug Interface Interface Reset Flag - SET */


/* Watchdog Reset Flag */
#define RST_WDRF_CLEAR_gc (0x00) /* Watchdog Reset Flag - CLEAR */
#define RST_WDRF_SET_gc   (0x08) /* Watchdog Reset Flag - SET */


/* Brown-out Reset Flag */
#define RST_BORF_CLEAR_gc (0x00) /* Brown-out Reset Flag - CLEAR */
#define RST_BORF_SET_gc   (0x04) /* Brown-out Reset Flag - SET */


/* External Reset Flag */
#define RST_EXTRF_CLEAR_gc (0x00) /* External Reset Flag - CLEAR */
#define RST_EXTRF_SET_gc   (0x02) /* External Reset Flag - SET */


/* Power-on Reset Flag */
#define RST_PORF_CLEAR_gc (0x00) /* Power-on Reset Flag - CLEAR */
#define RST_PORF_SET_gc   (0x01) /* Power-on Reset Flag - SET */


/* Software Reset */
#define RST_SWRST_CLEAR_gc (0x00) /* Software Reset - CLEAR */
#define RST_SWRST_SET_gc   (0x01) /* Software Reset - SET */


/*
--------------------------------------------------------------------------------
WDT - Watch-Dog Timer
--------------------------------------------------------------------------------
*/


/* Period */
#define WDT_PER_8CLK_gc   (0x00<<2) /* 8 cycles (8ms @ 3.3V) */
#define WDT_PER_16CLK_gc  (0x01<<2) /* 16 cycles (16ms @ 3.3V) */
#define WDT_PER_32CLK_gc  (0x02<<2) /* 32 cycles (32ms @ 3.3V) */
#define WDT_PER_64CLK_gc  (0x03<<2) /* 64 cycles (64ms @ 3.3V) */
#define WDT_PER_128CLK_gc (0x04<<2) /* 128 cycles (0.128s @ 3.3V) */
#define WDT_PER_256CLK_gc (0x05<<2) /* 256 cycles (0.256s @ 3.3V) */
#define WDT_PER_512CLK_gc (0x06<<2) /* 512 cycles (0.512s @ 3.3V) */
#define WDT_PER_1KCLK_gc  (0x07<<2) /* 1K cycles (1s @ 3.3V) */
#define WDT_PER_2KCLK_gc  (0x08<<2) /* 2K cycles (2s @ 3.3V) */
#define WDT_PER_4KCLK_gc  (0x09<<2) /* 4K cycles (4s @ 3.3V) */
#define WDT_PER_8KCLK_gc  (0x0A<<2) /* 8K cycles (8s @ 3.3V) */


/* Enable */
#define WDT_ENABLE_CLEAR_gc (0x00) /* Enable - CLEAR */
#define WDT_ENABLE_SET_gc   (0x02) /* Enable - SET */


/* Change Enable */
#define WDT_CEN_CLEAR_gc (0x00) /* Change Enable - CLEAR */
#define WDT_CEN_SET_gc   (0x01) /* Change Enable - SET */


/* Windowed Mode Period */
#define WDT_WPER_8CLK_gc   (0x00<<2) /* 8 cycles (8ms @ 3.3V) */
#define WDT_WPER_16CLK_gc  (0x01<<2) /* 16 cycles (16ms @ 3.3V) */
#define WDT_WPER_32CLK_gc  (0x02<<2) /* 32 cycles (32ms @ 3.3V) */
#define WDT_WPER_64CLK_gc  (0x03<<2) /* 64 cycles (64ms @ 3.3V) */
#define WDT_WPER_128CLK_gc (0x04<<2) /* 128 cycles (0.128s @ 3.3V) */
#define WDT_WPER_256CLK_gc (0x05<<2) /* 256 cycles (0.256s @ 3.3V) */
#define WDT_WPER_512CLK_gc (0x06<<2) /* 512 cycles (0.512s @ 3.3V) */
#define WDT_WPER_1KCLK_gc  (0x07<<2) /* 1K cycles (1s @ 3.3V) */
#define WDT_WPER_2KCLK_gc  (0x08<<2) /* 2K cycles (2s @ 3.3V) */
#define WDT_WPER_4KCLK_gc  (0x09<<2) /* 4K cycles (4s @ 3.3V) */
#define WDT_WPER_8KCLK_gc  (0x0A<<2) /* 8K cycles (8s @ 3.3V) */


/* Windowed Mode Enable */
#define WDT_WEN_CLEAR_gc (0x00) /* Windowed Mode Enable - CLEAR */
#define WDT_WEN_SET_gc   (0x02) /* Windowed Mode Enable - SET */


/* Windowed Mode Change Enable */
#define WDT_WCEN_CLEAR_gc (0x00) /* Windowed Mode Change Enable - CLEAR */
#define WDT_WCEN_SET_gc   (0x01) /* Windowed Mode Change Enable - SET */


/* Syncronization busy */
#define WDT_SYNCBUSY_CLEAR_gc (0x00) /* Syncronization busy - CLEAR */
#define WDT_SYNCBUSY_SET_gc   (0x01) /* Syncronization busy - SET */


/*
--------------------------------------------------------------------------------
MCU - MCU Control
--------------------------------------------------------------------------------
*/


/* JTAG Disable */
#define MCU_JTAGD_CLEAR_gc (0x00) /* JTAG Disable - CLEAR */
#define MCU_JTAGD_SET_gc   (0x01) /* JTAG Disable - SET */


/* Event Channel 4-7 Lock */
#define MCU_EVSYS1LOCK_CLEAR_gc (0x00) /* Event Channel 4-7 Lock - CLEAR */
#define MCU_EVSYS1LOCK_SET_gc   (0x10) /* Event Channel 4-7 Lock - SET */


/* Event Channel 0-3 Lock */
#define MCU_EVSYS0LOCK_CLEAR_gc (0x00) /* Event Channel 0-3 Lock - CLEAR */
#define MCU_EVSYS0LOCK_SET_gc   (0x01) /* Event Channel 0-3 Lock - SET */


/* AWeX on T/C E0 Lock */
#define MCU_AWEXELOCK_CLEAR_gc (0x00) /* AWeX on T/C E0 Lock - CLEAR */
#define MCU_AWEXELOCK_SET_gc   (0x04) /* AWeX on T/C E0 Lock - SET */


/* AWeX on T/C C0 Lock */
#define MCU_AWEXCLOCK_CLEAR_gc (0x00) /* AWeX on T/C C0 Lock - CLEAR */
#define MCU_AWEXCLOCK_SET_gc   (0x01) /* AWeX on T/C C0 Lock - SET */


/*
--------------------------------------------------------------------------------
PMIC - Programmable Multi-level Interrupt Controller
--------------------------------------------------------------------------------
*/


/* Non-maskable Interrupt Executing */
#define PMIC_NMIEX_CLEAR_gc (0x00) /* Non-maskable Interrupt Executing - CLEAR */
#define PMIC_NMIEX_SET_gc   (0x80) /* Non-maskable Interrupt Executing - SET */


/* High Level Interrupt Executing */
#define PMIC_HILVLEX_CLEAR_gc (0x00) /* High Level Interrupt Executing - CLEAR */
#define PMIC_HILVLEX_SET_gc   (0x04) /* High Level Interrupt Executing - SET */


/* Medium Level Interrupt Executing */
#define PMIC_MEDLVLEX_CLEAR_gc (0x00) /* Medium Level Interrupt Executing - CLEAR */
#define PMIC_MEDLVLEX_SET_gc   (0x02) /* Medium Level Interrupt Executing - SET */


/* Low Level Interrupt Executing */
#define PMIC_LOLVLEX_CLEAR_gc (0x00) /* Low Level Interrupt Executing - CLEAR */
#define PMIC_LOLVLEX_SET_gc   (0x01) /* Low Level Interrupt Executing - SET */


/* Round-Robin Priority Enable */
#define PMIC_RREN_CLEAR_gc (0x00) /* Round-Robin Priority Enable - CLEAR */
#define PMIC_RREN_SET_gc   (0x80) /* Round-Robin Priority Enable - SET */


/* Interrupt Vector Select */
#define PMIC_IVSEL_CLEAR_gc (0x00) /* Interrupt Vector Select - CLEAR */
#define PMIC_IVSEL_SET_gc   (0x40) /* Interrupt Vector Select - SET */


/* High Level Enable */
#define PMIC_HILVLEN_CLEAR_gc (0x00) /* High Level Enable - CLEAR */
#define PMIC_HILVLEN_SET_gc   (0x04) /* High Level Enable - SET */


/* Medium Level Enable */
#define PMIC_MEDLVLEN_CLEAR_gc (0x00) /* Medium Level Enable - CLEAR */
#define PMIC_MEDLVLEN_SET_gc   (0x02) /* Medium Level Enable - SET */


/* Low Level Enable */
#define PMIC_LOLVLEN_CLEAR_gc (0x00) /* Low Level Enable - CLEAR */
#define PMIC_LOLVLEN_SET_gc   (0x01) /* Low Level Enable - SET */


/*
--------------------------------------------------------------------------------
DMA - DMA Controller
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
DMA - DMA Controller
--------------------------------------------------------------------------------
*/


/* Channel Enable */
#define DMA_CH_ENABLE_CLEAR_gc (0x00) /* Channel Enable - CLEAR */
#define DMA_CH_ENABLE_SET_gc   (0x80) /* Channel Enable - SET */


/* Channel Software Reset */
#define DMA_CH_RESET_CLEAR_gc (0x00) /* Channel Software Reset - CLEAR */
#define DMA_CH_RESET_SET_gc   (0x40) /* Channel Software Reset - SET */


/* Channel Repeat Mode */
#define DMA_CH_REPEAT_CLEAR_gc (0x00) /* Channel Repeat Mode - CLEAR */
#define DMA_CH_REPEAT_SET_gc   (0x20) /* Channel Repeat Mode - SET */


/* Channel Transfer Request */
#define DMA_CH_TRFREQ_CLEAR_gc (0x00) /* Channel Transfer Request - CLEAR */
#define DMA_CH_TRFREQ_SET_gc   (0x10) /* Channel Transfer Request - SET */


/* Channel Single Shot Data Transfer */
#define DMA_CH_SINGLE_CLEAR_gc (0x00) /* Channel Single Shot Data Transfer - CLEAR */
#define DMA_CH_SINGLE_SET_gc   (0x04) /* Channel Single Shot Data Transfer - SET */


/* Channel Transfer Mode */
#define DMA_CH_BURSTLEN_1BYTE_gc (0x00) /* 1-byte burst mode */
#define DMA_CH_BURSTLEN_2BYTE_gc (0x01) /* 2-byte burst mode */
#define DMA_CH_BURSTLEN_4BYTE_gc (0x02) /* 4-byte burst mode */
#define DMA_CH_BURSTLEN_8BYTE_gc (0x03) /* 8-byte burst mode */


/* Block Transfer Busy */
#define DMA_CH_CHBUSY_CLEAR_gc (0x00) /* Block Transfer Busy - CLEAR */
#define DMA_CH_CHBUSY_SET_gc   (0x80) /* Block Transfer Busy - SET */


/* Block Transfer Pending */
#define DMA_CH_CHPEND_CLEAR_gc (0x00) /* Block Transfer Pending - CLEAR */
#define DMA_CH_CHPEND_SET_gc   (0x40) /* Block Transfer Pending - SET */


/* Block Transfer Error Interrupt Flag */
#define DMA_CH_ERRIF_CLEAR_gc (0x00) /* Block Transfer Error Interrupt Flag - CLEAR */
#define DMA_CH_ERRIF_SET_gc   (0x20) /* Block Transfer Error Interrupt Flag - SET */


/* Transaction Complete Interrupt Flag */
#define DMA_CH_TRNIF_CLEAR_gc (0x00) /* Transaction Complete Interrupt Flag - CLEAR */
#define DMA_CH_TRNIF_SET_gc   (0x10) /* Transaction Complete Interrupt Flag - SET */


/* Transfer Error Interrupt Level */
#define DMA_CH_ERRINTLVL_OFF_gc (0x00<<2) /* Interrupt disabled */
#define DMA_CH_ERRINTLVL_LO_gc  (0x01<<2) /* Low level */
#define DMA_CH_ERRINTLVL_MED_gc (0x02<<2) /* Medium level */
#define DMA_CH_ERRINTLVL_HI_gc  (0x03<<2) /* High level */


/* Transaction Complete Interrupt Level */
#define DMA_CH_TRNINTLVL_OFF_gc (0x00) /* Interrupt disabled */
#define DMA_CH_TRNINTLVL_LO_gc  (0x01) /* Low level */
#define DMA_CH_TRNINTLVL_MED_gc (0x02) /* Medium level */
#define DMA_CH_TRNINTLVL_HI_gc  (0x03) /* High level */


/* Channel Source Address Reload */
#define DMA_CH_SRCRELOAD_NONE_gc        (0x00<<6) /* No reload */
#define DMA_CH_SRCRELOAD_BLOCK_gc       (0x01<<6) /* Reload at end of block */
#define DMA_CH_SRCRELOAD_BURST_gc       (0x02<<6) /* Reload at end of burst */
#define DMA_CH_SRCRELOAD_TRANSACTION_gc (0x03<<6) /* Reload at end of transaction */


/* Channel Source Address Mode */
#define DMA_CH_SRCDIR_FIXED_gc (0x00<<4) /* Fixed */
#define DMA_CH_SRCDIR_INC_gc   (0x01<<4) /* Increment */
#define DMA_CH_SRCDIR_DEC_gc   (0x02<<4) /* Decrement */


/* Channel Destination Address Reload */
#define DMA_CH_DESTRELOAD_NONE_gc        (0x00<<2) /* No reload */
#define DMA_CH_DESTRELOAD_BLOCK_gc       (0x01<<2) /* Reload at end of block */
#define DMA_CH_DESTRELOAD_BURST_gc       (0x02<<2) /* Reload at end of burst */
#define DMA_CH_DESTRELOAD_TRANSACTION_gc (0x03<<2) /* Reload at end of transaction */


/* Channel Destination Address Mode */
#define DMA_CH_DESTDIR_FIXED_gc (0x00) /* Fixed */
#define DMA_CH_DESTDIR_INC_gc   (0x01) /* Increment */
#define DMA_CH_DESTDIR_DEC_gc   (0x02) /* Decrement */


/* Channel Trigger Source */
#define DMA_CH_TRIGSRC_OFF_gc         (0x00) /* Off software triggers only */
#define DMA_CH_TRIGSRC_EVSYS_CH0_gc   (0x01) /* Event System Channel 0 */
#define DMA_CH_TRIGSRC_EVSYS_CH1_gc   (0x02) /* Event System Channel 1 */
#define DMA_CH_TRIGSRC_EVSYS_CH2_gc   (0x03) /* Event System Channel 2 */
#define DMA_CH_TRIGSRC_ADCA_CH0_gc    (0x10) /* ADCA Channel 0 */
#define DMA_CH_TRIGSRC_ADCA_CH1_gc    (0x11) /* ADCA Channel 1 */
#define DMA_CH_TRIGSRC_ADCA_CH2_gc    (0x12) /* ADCA Channel 2 */
#define DMA_CH_TRIGSRC_ADCA_CH3_gc    (0x13) /* ADCA Channel 3 */
#define DMA_CH_TRIGSRC_ADCA_CH4_gc    (0x14) /* ADCA Channel 0,1,2,3 combined */
#define DMA_CH_TRIGSRC_DACA_CH0_gc    (0x15) /* DACA Channel 0 */
#define DMA_CH_TRIGSRC_DACA_CH1_gc    (0x16) /* DACA Channel 1 */
#define DMA_CH_TRIGSRC_ADCB_CH0_gc    (0x20) /* ADCB Channel 0 */
#define DMA_CH_TRIGSRC_ADCB_CH1_gc    (0x21) /* ADCB Channel 1 */
#define DMA_CH_TRIGSRC_ADCB_CH2_gc    (0x22) /* ADCB Channel 2 */
#define DMA_CH_TRIGSRC_ADCB_CH3_gc    (0x23) /* ADCB Channel 3 */
#define DMA_CH_TRIGSRC_ADCB_CH4_gc    (0x24) /* ADCB Channel 0,1,2,3 combined */
#define DMA_CH_TRIGSRC_DACB_CH0_gc    (0x25) /* DACB Channel 0 */
#define DMA_CH_TRIGSRC_DACB_CH1_gc    (0x26) /* DACB Channel 1 */
#define DMA_CH_TRIGSRC_TCC0_OVF_gc    (0x40) /* Timer/Counter C0 Overflow */
#define DMA_CH_TRIGSRC_TCC0_ERR_gc    (0x41) /* Timer/Counter C0 Error */
#define DMA_CH_TRIGSRC_TCC0_CCA_gc    (0x42) /* Timer/Counter C0 Compare or Capture A */
#define DMA_CH_TRIGSRC_TCC0_CCB_gc    (0x43) /* Timer/Counter C0 Compare or Capture B */
#define DMA_CH_TRIGSRC_TCC0_CCC_gc    (0x44) /* Timer/Counter C0 Compare or Capture C */
#define DMA_CH_TRIGSRC_TCC0_CCD_gc    (0x45) /* Timer/Counter C0 Compare or Capture D */
#define DMA_CH_TRIGSRC_TCC1_OVF_gc    (0x46) /* Timer/Counter C1 Overflow */
#define DMA_CH_TRIGSRC_TCC1_ERR_gc    (0x47) /* Timer/Counter C1 Error */
#define DMA_CH_TRIGSRC_TCC1_CCA_gc    (0x48) /* Timer/Counter C1 Compare or Capture A */
#define DMA_CH_TRIGSRC_TCC1_CCB_gc    (0x49) /* Timer/Counter C1 Compare or Capture B */
#define DMA_CH_TRIGSRC_SPIC_gc        (0x4A) /* SPI C Transfer Complete */
#define DMA_CH_TRIGSRC_USARTC0_RXC_gc (0x4B) /* USART C0 Receive Complete */
#define DMA_CH_TRIGSRC_USARTC0_DRE_gc (0x4C) /* USART C0 Data Register Empty */
#define DMA_CH_TRIGSRC_USARTC1_RXC_gc (0x4E) /* USART C1 Receive Complete */
#define DMA_CH_TRIGSRC_USARTC1_DRE_gc (0x4F) /* USART C1 Data Register Empty */
#define DMA_CH_TRIGSRC_TCD0_OVF_gc    (0x60) /* Timer/Counter D0 Overflow */
#define DMA_CH_TRIGSRC_TCD0_ERR_gc    (0x61) /* Timer/Counter D0 Error */
#define DMA_CH_TRIGSRC_TCD0_CCA_gc    (0x62) /* Timer/Counter D0 Compare or Capture A */
#define DMA_CH_TRIGSRC_TCD0_CCB_gc    (0x63) /* Timer/Counter D0 Compare or Capture B */
#define DMA_CH_TRIGSRC_TCD0_CCC_gc    (0x64) /* Timer/Counter D0 Compare or Capture C */
#define DMA_CH_TRIGSRC_TCD0_CCD_gc    (0x65) /* Timer/Counter D0 Compare or Capture D */
#define DMA_CH_TRIGSRC_TCD1_OVF_gc    (0x66) /* Timer/Counter D1 Overflow */
#define DMA_CH_TRIGSRC_TCD1_ERR_gc    (0x67) /* Timer/Counter D1 Error */
#define DMA_CH_TRIGSRC_TCD1_CCA_gc    (0x68) /* Timer/Counter D1 Compare or Capture A */
#define DMA_CH_TRIGSRC_TCD1_CCB_gc    (0x69) /* Timer/Counter D1 Compare or Capture B */
#define DMA_CH_TRIGSRC_SPID_gc        (0x6A) /* SPI D Transfer Complete */
#define DMA_CH_TRIGSRC_USARTD0_RXC_gc (0x6B) /* USART D0 Receive Complete */
#define DMA_CH_TRIGSRC_USARTD0_DRE_gc (0x6C) /* USART D0 Data Register Empty */
#define DMA_CH_TRIGSRC_USARTD1_RXC_gc (0x6E) /* USART D1 Receive Complete */
#define DMA_CH_TRIGSRC_USARTD1_DRE_gc (0x6F) /* USART D1 Data Register Empty */
#define DMA_CH_TRIGSRC_TCE0_OVF_gc    (0x80) /* Timer/Counter E0 Overflow */
#define DMA_CH_TRIGSRC_TCE0_ERR_gc    (0x81) /* Timer/Counter E0 Error */
#define DMA_CH_TRIGSRC_TCE0_CCA_gc    (0x82) /* Timer/Counter E0 Compare or Capture A */
#define DMA_CH_TRIGSRC_TCE0_CCB_gc    (0x83) /* Timer/Counter E0 Compare or Capture B */
#define DMA_CH_TRIGSRC_TCE0_CCC_gc    (0x84) /* Timer/Counter E0 Compare or Capture C */
#define DMA_CH_TRIGSRC_TCE0_CCD_gc    (0x85) /* Timer/Counter E0 Compare or Capture D */
#define DMA_CH_TRIGSRC_TCE1_OVF_gc    (0x86) /* Timer/Counter E1 Overflow */
#define DMA_CH_TRIGSRC_TCE1_ERR_gc    (0x87) /* Timer/Counter E1 Error */
#define DMA_CH_TRIGSRC_TCE1_CCA_gc    (0x88) /* Timer/Counter E1 Compare or Capture A */
#define DMA_CH_TRIGSRC_TCE1_CCB_gc    (0x89) /* Timer/Counter E1 Compare or Capture B */
#define DMA_CH_TRIGSRC_SPIE_gc        (0x8A) /* SPI E Transfer Complete */
#define DMA_CH_TRIGSRC_USARTE0_RXC_gc (0x8B) /* USART E0 Receive Complete */
#define DMA_CH_TRIGSRC_USARTE0_DRE_gc (0x8C) /* USART E0 Data Register Empty */
#define DMA_CH_TRIGSRC_USARTE1_RXC_gc (0x8E) /* USART E1 Receive Complete */
#define DMA_CH_TRIGSRC_USARTE1_DRE_gc (0x8F) /* USART E1 Data Register Empty */
#define DMA_CH_TRIGSRC_TCF0_OVF_gc    (0xA0) /* Timer/Counter F0 Overflow */
#define DMA_CH_TRIGSRC_TCF0_ERR_gc    (0xA1) /* Timer/Counter F0 Error */
#define DMA_CH_TRIGSRC_TCF0_CCA_gc    (0xA2) /* Timer/Counter F0 Compare or Capture A */
#define DMA_CH_TRIGSRC_TCF0_CCB_gc    (0xA3) /* Timer/Counter F0 Compare or Capture B */
#define DMA_CH_TRIGSRC_TCF0_CCC_gc    (0xA4) /* Timer/Counter F0 Compare or Capture C */
#define DMA_CH_TRIGSRC_TCF0_CCD_gc    (0xA5) /* Timer/Counter F0 Compare or Capture D */
#define DMA_CH_TRIGSRC_TCF1_OVF_gc    (0xA6) /* Timer/Counter F1 Overflow */
#define DMA_CH_TRIGSRC_TCF1_ERR_gc    (0xA7) /* Timer/Counter F1 Error */
#define DMA_CH_TRIGSRC_TCF1_CCA_gc    (0xA8) /* Timer/Counter F1 Compare or Capture A */
#define DMA_CH_TRIGSRC_TCF1_CCB_gc    (0xA9) /* Timer/Counter F1 Compare or Capture B */
#define DMA_CH_TRIGSRC_SPIF_gc        (0xAA) /* SPI F Transfer Complete */
#define DMA_CH_TRIGSRC_USARTF0_RXC_gc (0xAB) /* USART F0 Receive Complete */
#define DMA_CH_TRIGSRC_USARTF0_DRE_gc (0xAC) /* USART F0 Data Register Empty */
#define DMA_CH_TRIGSRC_USARTF1_RXC_gc (0xAE) /* USART F1 Receive Complete */
#define DMA_CH_TRIGSRC_USARTF1_DRE_gc (0xAF) /* USART F1 Data Register Empty */


/* Enable */
#define DMA_ENABLE_CLEAR_gc (0x00) /* Enable - CLEAR */
#define DMA_ENABLE_SET_gc   (0x80) /* Enable - SET */


/* Software Reset */
#define DMA_RESET_CLEAR_gc (0x00) /* Software Reset - CLEAR */
#define DMA_RESET_SET_gc   (0x40) /* Software Reset - SET */


/* Double Buffering Mode */
#define DMA_DBUFMODE_DISABLED_gc (0x00<<2) /* Double buffering disabled */
#define DMA_DBUFMODE_CH01_gc     (0x01<<2) /* Double buffering enabled on channel 0/1 */
#define DMA_DBUFMODE_CH23_gc     (0x02<<2) /* Double buffering enabled on channel 2/3 */
#define DMA_DBUFMODE_CH01CH23_gc (0x03<<2) /* Double buffering enabled on ch. 0/1 and ch. 2/3 */


/* Channel Priority Mode */
#define DMA_PRIMODE_RR0123_gc   (0x00) /* Round Robin */
#define DMA_PRIMODE_CH0RR123_gc (0x01) /* Channel 0 > Round Robin on channel 1/2/3 */
#define DMA_PRIMODE_CH01RR23_gc (0x02) /* Channel 0 > channel 1 > Round Robin on channel 2/3 */
#define DMA_PRIMODE_CH0123_gc   (0x03) /* Channel 0 > channel 1 > channel 2 > channel 3 */


/* Channel 3 Block Transfer Error Interrupt Flag */
#define DMA_CH3ERRIF_CLEAR_gc (0x00) /* Channel 3 Block Transfer Error Interrupt Flag - CLEAR */
#define DMA_CH3ERRIF_SET_gc   (0x80) /* Channel 3 Block Transfer Error Interrupt Flag - SET */


/* Channel 2 Block Transfer Error Interrupt Flag */
#define DMA_CH2ERRIF_CLEAR_gc (0x00) /* Channel 2 Block Transfer Error Interrupt Flag - CLEAR */
#define DMA_CH2ERRIF_SET_gc   (0x40) /* Channel 2 Block Transfer Error Interrupt Flag - SET */


/* Channel 1 Block Transfer Error Interrupt Flag */
#define DMA_CH1ERRIF_CLEAR_gc (0x00) /* Channel 1 Block Transfer Error Interrupt Flag - CLEAR */
#define DMA_CH1ERRIF_SET_gc   (0x20) /* Channel 1 Block Transfer Error Interrupt Flag - SET */


/* Channel 0 Block Transfer Error Interrupt Flag */
#define DMA_CH0ERRIF_CLEAR_gc (0x00) /* Channel 0 Block Transfer Error Interrupt Flag - CLEAR */
#define DMA_CH0ERRIF_SET_gc   (0x10) /* Channel 0 Block Transfer Error Interrupt Flag - SET */


/* Channel 3 Transaction Complete Interrupt Flag */
#define DMA_CH3TRNIF_CLEAR_gc (0x00) /* Channel 3 Transaction Complete Interrupt Flag - CLEAR */
#define DMA_CH3TRNIF_SET_gc   (0x08) /* Channel 3 Transaction Complete Interrupt Flag - SET */


/* Channel 2 Transaction Complete Interrupt Flag */
#define DMA_CH2TRNIF_CLEAR_gc (0x00) /* Channel 2 Transaction Complete Interrupt Flag - CLEAR */
#define DMA_CH2TRNIF_SET_gc   (0x04) /* Channel 2 Transaction Complete Interrupt Flag - SET */


/* Channel 1 Transaction Complete Interrupt Flag */
#define DMA_CH1TRNIF_CLEAR_gc (0x00) /* Channel 1 Transaction Complete Interrupt Flag - CLEAR */
#define DMA_CH1TRNIF_SET_gc   (0x02) /* Channel 1 Transaction Complete Interrupt Flag - SET */


/* Channel 0 Transaction Complete Interrupt Flag */
#define DMA_CH0TRNIF_CLEAR_gc (0x00) /* Channel 0 Transaction Complete Interrupt Flag - CLEAR */
#define DMA_CH0TRNIF_SET_gc   (0x01) /* Channel 0 Transaction Complete Interrupt Flag - SET */


/* Channel 3 Block Transfer Busy */
#define DMA_CH3BUSY_CLEAR_gc (0x00) /* Channel 3 Block Transfer Busy - CLEAR */
#define DMA_CH3BUSY_SET_gc   (0x80) /* Channel 3 Block Transfer Busy - SET */


/* Channel 2 Block Transfer Busy */
#define DMA_CH2BUSY_CLEAR_gc (0x00) /* Channel 2 Block Transfer Busy - CLEAR */
#define DMA_CH2BUSY_SET_gc   (0x40) /* Channel 2 Block Transfer Busy - SET */


/* Channel 1 Block Transfer Busy */
#define DMA_CH1BUSY_CLEAR_gc (0x00) /* Channel 1 Block Transfer Busy - CLEAR */
#define DMA_CH1BUSY_SET_gc   (0x20) /* Channel 1 Block Transfer Busy - SET */


/* Channel 0 Block Transfer Busy */
#define DMA_CH0BUSY_CLEAR_gc (0x00) /* Channel 0 Block Transfer Busy - CLEAR */
#define DMA_CH0BUSY_SET_gc   (0x10) /* Channel 0 Block Transfer Busy - SET */


/* Channel 3 Block Transfer Pending */
#define DMA_CH3PEND_CLEAR_gc (0x00) /* Channel 3 Block Transfer Pending - CLEAR */
#define DMA_CH3PEND_SET_gc   (0x08) /* Channel 3 Block Transfer Pending - SET */


/* Channel 2 Block Transfer Pending */
#define DMA_CH2PEND_CLEAR_gc (0x00) /* Channel 2 Block Transfer Pending - CLEAR */
#define DMA_CH2PEND_SET_gc   (0x04) /* Channel 2 Block Transfer Pending - SET */


/* Channel 1 Block Transfer Pending */
#define DMA_CH1PEND_CLEAR_gc (0x00) /* Channel 1 Block Transfer Pending - CLEAR */
#define DMA_CH1PEND_SET_gc   (0x02) /* Channel 1 Block Transfer Pending - SET */


/* Channel 0 Block Transfer Pending */
#define DMA_CH0PEND_CLEAR_gc (0x00) /* Channel 0 Block Transfer Pending - CLEAR */
#define DMA_CH0PEND_SET_gc   (0x01) /* Channel 0 Block Transfer Pending - SET */


/*
--------------------------------------------------------------------------------
EVSYS - Event System
--------------------------------------------------------------------------------
*/


/* Event Channel 0 Multiplexer */
#define EVSYS_CHMUX_OFF_gc             (0x00) /* Off */
#define EVSYS_CHMUX_RTC_OVF_gc         (0x08) /* RTC Overflow */
#define EVSYS_CHMUX_RTC_CMP_gc         (0x09) /* RTC Compare Match */
#define EVSYS_CHMUX_ACA_CH0_gc         (0x10) /* Analog Comparator A Channel 0 */
#define EVSYS_CHMUX_ACA_CH1_gc         (0x11) /* Analog Comparator A Channel 1 */
#define EVSYS_CHMUX_ACA_WIN_gc         (0x12) /* Analog Comparator A Window */
#define EVSYS_CHMUX_ACB_CH0_gc         (0x13) /* Analog Comparator B Channel 0 */
#define EVSYS_CHMUX_ACB_CH1_gc         (0x14) /* Analog Comparator B Channel 1 */
#define EVSYS_CHMUX_ACB_WIN_gc         (0x15) /* Analog Comparator B Window */
#define EVSYS_CHMUX_ADCA_CH0_gc        (0x20) /* ADC A Channel 0 */
#define EVSYS_CHMUX_ADCA_CH1_gc        (0x21) /* ADC A Channel 1 */
#define EVSYS_CHMUX_ADCA_CH2_gc        (0x22) /* ADC A Channel 2 */
#define EVSYS_CHMUX_ADCA_CH3_gc        (0x23) /* ADC A Channel 3 */
#define EVSYS_CHMUX_ADCB_CH0_gc        (0x24) /* ADC B Channel 0 */
#define EVSYS_CHMUX_ADCB_CH1_gc        (0x25) /* ADC B Channel 1 */
#define EVSYS_CHMUX_ADCB_CH2_gc        (0x26) /* ADC B Channel 2 */
#define EVSYS_CHMUX_ADCB_CH3_gc        (0x27) /* ADC B Channel 3 */
#define EVSYS_CHMUX_PORTA_PIN0_gc      (0x50) /* Port A, Pin0 */
#define EVSYS_CHMUX_PORTA_PIN1_gc      (0x51) /* Port A, Pin1 */
#define EVSYS_CHMUX_PORTA_PIN2_gc      (0x52) /* Port A, Pin2 */
#define EVSYS_CHMUX_PORTA_PIN3_gc      (0x53) /* Port A, Pin3 */
#define EVSYS_CHMUX_PORTA_PIN4_gc      (0x54) /* Port A, Pin4 */
#define EVSYS_CHMUX_PORTA_PIN5_gc      (0x55) /* Port A, Pin5 */
#define EVSYS_CHMUX_PORTA_PIN6_gc      (0x56) /* Port A, Pin6 */
#define EVSYS_CHMUX_PORTA_PIN7_gc      (0x57) /* Port A, Pin7 */
#define EVSYS_CHMUX_PORTB_PIN0_gc      (0x58) /* Port B, Pin0 */
#define EVSYS_CHMUX_PORTB_PIN1_gc      (0x59) /* Port B, Pin1 */
#define EVSYS_CHMUX_PORTB_PIN2_gc      (0x5A) /* Port B, Pin2 */
#define EVSYS_CHMUX_PORTB_PIN3_gc      (0x5B) /* Port B, Pin3 */
#define EVSYS_CHMUX_PORTB_PIN4_gc      (0x5C) /* Port B, Pin4 */
#define EVSYS_CHMUX_PORTB_PIN5_gc      (0x5D) /* Port B, Pin5 */
#define EVSYS_CHMUX_PORTB_PIN6_gc      (0x5E) /* Port B, Pin6 */
#define EVSYS_CHMUX_PORTB_PIN7_gc      (0x5F) /* Port B, Pin7 */
#define EVSYS_CHMUX_PORTC_PIN0_gc      (0x60) /* Port C, Pin0 */
#define EVSYS_CHMUX_PORTC_PIN1_gc      (0x61) /* Port C, Pin1 */
#define EVSYS_CHMUX_PORTC_PIN2_gc      (0x62) /* Port C, Pin2 */
#define EVSYS_CHMUX_PORTC_PIN3_gc      (0x63) /* Port C, Pin3 */
#define EVSYS_CHMUX_PORTC_PIN4_gc      (0x64) /* Port C, Pin4 */
#define EVSYS_CHMUX_PORTC_PIN5_gc      (0x65) /* Port C, Pin5 */
#define EVSYS_CHMUX_PORTC_PIN6_gc      (0x66) /* Port C, Pin6 */
#define EVSYS_CHMUX_PORTC_PIN7_gc      (0x67) /* Port C, Pin7 */
#define EVSYS_CHMUX_PORTD_PIN0_gc      (0x68) /* Port D, Pin0 */
#define EVSYS_CHMUX_PORTD_PIN1_gc      (0x69) /* Port D, Pin1 */
#define EVSYS_CHMUX_PORTD_PIN2_gc      (0x6A) /* Port D, Pin2 */
#define EVSYS_CHMUX_PORTD_PIN3_gc      (0x6B) /* Port D, Pin3 */
#define EVSYS_CHMUX_PORTD_PIN4_gc      (0x6C) /* Port D, Pin4 */
#define EVSYS_CHMUX_PORTD_PIN5_gc      (0x6D) /* Port D, Pin5 */
#define EVSYS_CHMUX_PORTD_PIN6_gc      (0x6E) /* Port D, Pin6 */
#define EVSYS_CHMUX_PORTD_PIN7_gc      (0x6F) /* Port D, Pin7 */
#define EVSYS_CHMUX_PORTE_PIN0_gc      (0x70) /* Port E, Pin0 */
#define EVSYS_CHMUX_PORTE_PIN1_gc      (0x71) /* Port E, Pin1 */
#define EVSYS_CHMUX_PORTE_PIN2_gc      (0x72) /* Port E, Pin2 */
#define EVSYS_CHMUX_PORTE_PIN3_gc      (0x73) /* Port E, Pin3 */
#define EVSYS_CHMUX_PORTE_PIN4_gc      (0x74) /* Port E, Pin4 */
#define EVSYS_CHMUX_PORTE_PIN5_gc      (0x75) /* Port E, Pin5 */
#define EVSYS_CHMUX_PORTE_PIN6_gc      (0x76) /* Port E, Pin6 */
#define EVSYS_CHMUX_PORTE_PIN7_gc      (0x77) /* Port E, Pin7 */
#define EVSYS_CHMUX_PORTF_PIN0_gc      (0x78) /* Port F, Pin0 */
#define EVSYS_CHMUX_PORTF_PIN1_gc      (0x79) /* Port F, Pin1 */
#define EVSYS_CHMUX_PORTF_PIN2_gc      (0x7A) /* Port F, Pin2 */
#define EVSYS_CHMUX_PORTF_PIN3_gc      (0x7B) /* Port F, Pin3 */
#define EVSYS_CHMUX_PORTF_PIN4_gc      (0x7C) /* Port F, Pin4 */
#define EVSYS_CHMUX_PORTF_PIN5_gc      (0x7D) /* Port F, Pin5 */
#define EVSYS_CHMUX_PORTF_PIN6_gc      (0x7E) /* Port F, Pin6 */
#define EVSYS_CHMUX_PORTF_PIN7_gc      (0x7F) /* Port F, Pin7 */
#define EVSYS_CHMUX_PRESCALER_1_gc     (0x80) /* Prescaler, divide by 1 */
#define EVSYS_CHMUX_PRESCALER_2_gc     (0x81) /* Prescaler, divide by 2 */
#define EVSYS_CHMUX_PRESCALER_4_gc     (0x82) /* Prescaler, divide by 4 */
#define EVSYS_CHMUX_PRESCALER_8_gc     (0x83) /* Prescaler, divide by 8 */
#define EVSYS_CHMUX_PRESCALER_16_gc    (0x84) /* Prescaler, divide by 16 */
#define EVSYS_CHMUX_PRESCALER_32_gc    (0x85) /* Prescaler, divide by 32 */
#define EVSYS_CHMUX_PRESCALER_64_gc    (0x86) /* Prescaler, divide by 64 */
#define EVSYS_CHMUX_PRESCALER_128_gc   (0x87) /* Prescaler, divide by 128 */
#define EVSYS_CHMUX_PRESCALER_256_gc   (0x88) /* Prescaler, divide by 256 */
#define EVSYS_CHMUX_PRESCALER_512_gc   (0x89) /* Prescaler, divide by 512 */
#define EVSYS_CHMUX_PRESCALER_1024_gc  (0x8A) /* Prescaler, divide by 1024 */
#define EVSYS_CHMUX_PRESCALER_2048_gc  (0x8B) /* Prescaler, divide by 2048 */
#define EVSYS_CHMUX_PRESCALER_4096_gc  (0x8C) /* Prescaler, divide by 4096 */
#define EVSYS_CHMUX_PRESCALER_8192_gc  (0x8D) /* Prescaler, divide by 8192 */
#define EVSYS_CHMUX_PRESCALER_16384_gc (0x8E) /* Prescaler, divide by 16384 */
#define EVSYS_CHMUX_PRESCALER_32768_gc (0x8F) /* Prescaler, divide by 32768 */
#define EVSYS_CHMUX_TCC0_OVF_gc        (0xC0) /* Timer/Counter C0 Overflow */
#define EVSYS_CHMUX_TCC0_ERR_gc        (0xC1) /* Timer/Counter C0 Error */
#define EVSYS_CHMUX_TCC0_CCA_gc        (0xC4) /* Timer/Counter C0 Compare or Capture A */
#define EVSYS_CHMUX_TCC0_CCB_gc        (0xC5) /* Timer/Counter C0 Compare or Capture B */
#define EVSYS_CHMUX_TCC0_CCC_gc        (0xC6) /* Timer/Counter C0 Compare or Capture C */
#define EVSYS_CHMUX_TCC0_CCD_gc        (0xC7) /* Timer/Counter C0 Compare or Capture D */
#define EVSYS_CHMUX_TCC1_OVF_gc        (0xC8) /* Timer/Counter C1 Overflow */
#define EVSYS_CHMUX_TCC1_ERR_gc        (0xC9) /* Timer/Counter C1 Error */
#define EVSYS_CHMUX_TCC1_CCA_gc        (0xCC) /* Timer/Counter C1 Compare or Capture A */
#define EVSYS_CHMUX_TCC1_CCB_gc        (0xCD) /* Timer/Counter C1 Compare or Capture B */
#define EVSYS_CHMUX_TCD0_OVF_gc        (0xD0) /* Timer/Counter D0 Overflow */
#define EVSYS_CHMUX_TCD0_ERR_gc        (0xD1) /* Timer/Counter D0 Error */
#define EVSYS_CHMUX_TCD0_CCA_gc        (0xD4) /* Timer/Counter D0 Compare or Capture A */
#define EVSYS_CHMUX_TCD0_CCB_gc        (0xD5) /* Timer/Counter D0 Compare or Capture B */
#define EVSYS_CHMUX_TCD0_CCC_gc        (0xD6) /* Timer/Counter D0 Compare or Capture C */
#define EVSYS_CHMUX_TCD0_CCD_gc        (0xD7) /* Timer/Counter D0 Compare or Capture D */
#define EVSYS_CHMUX_TCD1_OVF_gc        (0xD8) /* Timer/Counter D1 Overflow */
#define EVSYS_CHMUX_TCD1_ERR_gc        (0xD9) /* Timer/Counter D1 Error */
#define EVSYS_CHMUX_TCD1_CCA_gc        (0xDC) /* Timer/Counter D1 Compare or Capture A */
#define EVSYS_CHMUX_TCD1_CCB_gc        (0xDD) /* Timer/Counter D1 Compare or Capture B */
#define EVSYS_CHMUX_TCE0_OVF_gc        (0xE0) /* Timer/Counter E0 Overflow */
#define EVSYS_CHMUX_TCE0_ERR_gc        (0xE1) /* Timer/Counter E0 Error */
#define EVSYS_CHMUX_TCE0_CCA_gc        (0xE4) /* Timer/Counter E0 Compare or Capture A */
#define EVSYS_CHMUX_TCE0_CCB_gc        (0xE5) /* Timer/Counter E0 Compare or Capture B */
#define EVSYS_CHMUX_TCE0_CCC_gc        (0xE6) /* Timer/Counter E0 Compare or Capture C */
#define EVSYS_CHMUX_TCE0_CCD_gc        (0xE7) /* Timer/Counter E0 Compare or Capture D */
#define EVSYS_CHMUX_TCE1_OVF_gc        (0xE8) /* Timer/Counter E1 Overflow */
#define EVSYS_CHMUX_TCE1_ERR_gc        (0xE9) /* Timer/Counter E1 Error */
#define EVSYS_CHMUX_TCE1_CCA_gc        (0xEC) /* Timer/Counter E1 Compare or Capture A */
#define EVSYS_CHMUX_TCE1_CCB_gc        (0xED) /* Timer/Counter E1 Compare or Capture B */
#define EVSYS_CHMUX_TCF0_OVF_gc        (0xF0) /* Timer/Counter F0 Overflow */
#define EVSYS_CHMUX_TCF0_ERR_gc        (0xF1) /* Timer/Counter F0 Error */
#define EVSYS_CHMUX_TCF0_CCA_gc        (0xF4) /* Timer/Counter F0 Compare or Capture A */
#define EVSYS_CHMUX_TCF0_CCB_gc        (0xF5) /* Timer/Counter F0 Compare or Capture B */
#define EVSYS_CHMUX_TCF0_CCC_gc        (0xF6) /* Timer/Counter F0 Compare or Capture C */
#define EVSYS_CHMUX_TCF0_CCD_gc        (0xF7) /* Timer/Counter F0 Compare or Capture D */
#define EVSYS_CHMUX_TCF1_OVF_gc        (0xF8) /* Timer/Counter F1 Overflow */
#define EVSYS_CHMUX_TCF1_ERR_gc        (0xF9) /* Timer/Counter F1 Error */
#define EVSYS_CHMUX_TCF1_CCA_gc        (0xFC) /* Timer/Counter F1 Compare or Capture A */
#define EVSYS_CHMUX_TCF1_CCB_gc        (0xFD) /* Timer/Counter F1 Compare or Capture B */


/* Event Channel 1 Multiplexer */
/* EVSYS_CHMUX_OFF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_RTC_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_RTC_CMP_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACA_CH0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACA_CH1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACA_WIN_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACB_CH0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACB_CH1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACB_WIN_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCA_CH0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCA_CH1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCA_CH2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCA_CH3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCB_CH0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCB_CH1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCB_CH2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCB_CH3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN4_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN5_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN6_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN7_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTB_PIN0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTB_PIN1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTB_PIN2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTB_PIN3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTB_PIN4_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTB_PIN5_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTB_PIN6_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTB_PIN7_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTC_PIN0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTC_PIN1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTC_PIN2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTC_PIN3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTC_PIN4_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTC_PIN5_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTC_PIN6_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTC_PIN7_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTD_PIN0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTD_PIN1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTD_PIN2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTD_PIN3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTD_PIN4_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTD_PIN5_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTD_PIN6_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTD_PIN7_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTE_PIN0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTE_PIN1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTE_PIN2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTE_PIN3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTE_PIN4_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTE_PIN5_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTE_PIN6_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTE_PIN7_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTF_PIN0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTF_PIN1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTF_PIN2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTF_PIN3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTF_PIN4_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTF_PIN5_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTF_PIN6_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTF_PIN7_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_4_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_8_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_16_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_32_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_64_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_128_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_256_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_512_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_1024_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_2048_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_4096_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_8192_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_16384_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_32768_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC0_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC0_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC0_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC0_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC0_CCC_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC0_CCD_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC1_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC1_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC1_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC1_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD0_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD0_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD0_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD0_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD0_CCC_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD0_CCD_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD1_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD1_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD1_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD1_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE0_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE0_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE0_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE0_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE0_CCC_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE0_CCD_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE1_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE1_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE1_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE1_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF0_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF0_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF0_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF0_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF0_CCC_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF0_CCD_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF1_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF1_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF1_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF1_CCB_gc ALREADY DEFINED */


/* Event Channel 2 Multiplexer */
/* EVSYS_CHMUX_OFF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_RTC_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_RTC_CMP_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACA_CH0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACA_CH1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACA_WIN_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACB_CH0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACB_CH1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACB_WIN_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCA_CH0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCA_CH1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCA_CH2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCA_CH3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCB_CH0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCB_CH1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCB_CH2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCB_CH3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN4_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN5_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN6_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN7_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTB_PIN0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTB_PIN1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTB_PIN2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTB_PIN3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTB_PIN4_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTB_PIN5_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTB_PIN6_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTB_PIN7_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTC_PIN0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTC_PIN1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTC_PIN2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTC_PIN3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTC_PIN4_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTC_PIN5_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTC_PIN6_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTC_PIN7_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTD_PIN0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTD_PIN1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTD_PIN2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTD_PIN3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTD_PIN4_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTD_PIN5_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTD_PIN6_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTD_PIN7_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTE_PIN0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTE_PIN1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTE_PIN2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTE_PIN3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTE_PIN4_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTE_PIN5_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTE_PIN6_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTE_PIN7_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTF_PIN0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTF_PIN1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTF_PIN2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTF_PIN3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTF_PIN4_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTF_PIN5_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTF_PIN6_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTF_PIN7_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_4_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_8_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_16_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_32_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_64_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_128_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_256_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_512_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_1024_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_2048_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_4096_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_8192_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_16384_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_32768_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC0_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC0_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC0_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC0_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC0_CCC_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC0_CCD_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC1_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC1_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC1_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC1_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD0_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD0_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD0_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD0_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD0_CCC_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD0_CCD_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD1_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD1_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD1_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD1_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE0_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE0_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE0_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE0_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE0_CCC_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE0_CCD_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE1_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE1_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE1_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE1_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF0_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF0_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF0_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF0_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF0_CCC_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF0_CCD_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF1_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF1_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF1_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF1_CCB_gc ALREADY DEFINED */


/* Event Channel 3 Multiplexer */
/* EVSYS_CHMUX_OFF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_RTC_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_RTC_CMP_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACA_CH0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACA_CH1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACA_WIN_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACB_CH0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACB_CH1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACB_WIN_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCA_CH0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCA_CH1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCA_CH2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCA_CH3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCB_CH0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCB_CH1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCB_CH2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCB_CH3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN4_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN5_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN6_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN7_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTB_PIN0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTB_PIN1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTB_PIN2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTB_PIN3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTB_PIN4_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTB_PIN5_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTB_PIN6_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTB_PIN7_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTC_PIN0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTC_PIN1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTC_PIN2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTC_PIN3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTC_PIN4_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTC_PIN5_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTC_PIN6_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTC_PIN7_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTD_PIN0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTD_PIN1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTD_PIN2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTD_PIN3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTD_PIN4_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTD_PIN5_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTD_PIN6_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTD_PIN7_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTE_PIN0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTE_PIN1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTE_PIN2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTE_PIN3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTE_PIN4_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTE_PIN5_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTE_PIN6_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTE_PIN7_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTF_PIN0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTF_PIN1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTF_PIN2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTF_PIN3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTF_PIN4_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTF_PIN5_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTF_PIN6_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTF_PIN7_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_4_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_8_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_16_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_32_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_64_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_128_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_256_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_512_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_1024_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_2048_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_4096_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_8192_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_16384_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_32768_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC0_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC0_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC0_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC0_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC0_CCC_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC0_CCD_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC1_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC1_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC1_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC1_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD0_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD0_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD0_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD0_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD0_CCC_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD0_CCD_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD1_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD1_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD1_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD1_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE0_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE0_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE0_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE0_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE0_CCC_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE0_CCD_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE1_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE1_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE1_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE1_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF0_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF0_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF0_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF0_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF0_CCC_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF0_CCD_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF1_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF1_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF1_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF1_CCB_gc ALREADY DEFINED */


/* Event Channel 4 Multiplexer */
/* EVSYS_CHMUX_OFF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_RTC_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_RTC_CMP_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACA_CH0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACA_CH1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACA_WIN_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACB_CH0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACB_CH1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACB_WIN_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCA_CH0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCA_CH1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCA_CH2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCA_CH3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCB_CH0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCB_CH1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCB_CH2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCB_CH3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN4_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN5_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN6_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN7_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTB_PIN0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTB_PIN1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTB_PIN2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTB_PIN3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTB_PIN4_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTB_PIN5_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTB_PIN6_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTB_PIN7_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTC_PIN0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTC_PIN1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTC_PIN2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTC_PIN3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTC_PIN4_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTC_PIN5_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTC_PIN6_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTC_PIN7_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTD_PIN0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTD_PIN1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTD_PIN2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTD_PIN3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTD_PIN4_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTD_PIN5_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTD_PIN6_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTD_PIN7_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTE_PIN0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTE_PIN1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTE_PIN2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTE_PIN3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTE_PIN4_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTE_PIN5_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTE_PIN6_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTE_PIN7_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTF_PIN0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTF_PIN1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTF_PIN2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTF_PIN3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTF_PIN4_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTF_PIN5_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTF_PIN6_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTF_PIN7_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_4_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_8_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_16_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_32_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_64_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_128_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_256_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_512_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_1024_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_2048_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_4096_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_8192_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_16384_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_32768_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC0_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC0_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC0_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC0_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC0_CCC_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC0_CCD_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC1_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC1_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC1_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC1_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD0_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD0_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD0_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD0_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD0_CCC_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD0_CCD_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD1_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD1_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD1_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD1_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE0_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE0_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE0_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE0_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE0_CCC_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE0_CCD_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE1_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE1_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE1_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE1_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF0_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF0_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF0_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF0_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF0_CCC_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF0_CCD_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF1_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF1_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF1_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF1_CCB_gc ALREADY DEFINED */


/* Event Channel 5 Multiplexer */
/* EVSYS_CHMUX_OFF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_RTC_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_RTC_CMP_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACA_CH0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACA_CH1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACA_WIN_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACB_CH0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACB_CH1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACB_WIN_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCA_CH0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCA_CH1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCA_CH2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCA_CH3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCB_CH0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCB_CH1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCB_CH2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCB_CH3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN4_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN5_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN6_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN7_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTB_PIN0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTB_PIN1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTB_PIN2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTB_PIN3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTB_PIN4_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTB_PIN5_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTB_PIN6_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTB_PIN7_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTC_PIN0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTC_PIN1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTC_PIN2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTC_PIN3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTC_PIN4_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTC_PIN5_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTC_PIN6_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTC_PIN7_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTD_PIN0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTD_PIN1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTD_PIN2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTD_PIN3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTD_PIN4_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTD_PIN5_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTD_PIN6_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTD_PIN7_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTE_PIN0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTE_PIN1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTE_PIN2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTE_PIN3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTE_PIN4_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTE_PIN5_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTE_PIN6_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTE_PIN7_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTF_PIN0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTF_PIN1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTF_PIN2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTF_PIN3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTF_PIN4_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTF_PIN5_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTF_PIN6_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTF_PIN7_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_4_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_8_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_16_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_32_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_64_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_128_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_256_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_512_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_1024_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_2048_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_4096_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_8192_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_16384_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_32768_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC0_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC0_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC0_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC0_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC0_CCC_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC0_CCD_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC1_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC1_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC1_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC1_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD0_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD0_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD0_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD0_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD0_CCC_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD0_CCD_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD1_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD1_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD1_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD1_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE0_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE0_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE0_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE0_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE0_CCC_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE0_CCD_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE1_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE1_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE1_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE1_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF0_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF0_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF0_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF0_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF0_CCC_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF0_CCD_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF1_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF1_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF1_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF1_CCB_gc ALREADY DEFINED */


/* Event Channel 6 Multiplexer */
/* EVSYS_CHMUX_OFF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_RTC_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_RTC_CMP_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACA_CH0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACA_CH1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACA_WIN_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACB_CH0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACB_CH1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACB_WIN_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCA_CH0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCA_CH1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCA_CH2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCA_CH3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCB_CH0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCB_CH1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCB_CH2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCB_CH3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN4_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN5_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN6_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN7_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTB_PIN0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTB_PIN1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTB_PIN2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTB_PIN3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTB_PIN4_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTB_PIN5_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTB_PIN6_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTB_PIN7_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTC_PIN0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTC_PIN1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTC_PIN2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTC_PIN3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTC_PIN4_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTC_PIN5_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTC_PIN6_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTC_PIN7_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTD_PIN0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTD_PIN1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTD_PIN2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTD_PIN3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTD_PIN4_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTD_PIN5_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTD_PIN6_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTD_PIN7_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTE_PIN0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTE_PIN1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTE_PIN2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTE_PIN3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTE_PIN4_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTE_PIN5_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTE_PIN6_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTE_PIN7_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTF_PIN0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTF_PIN1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTF_PIN2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTF_PIN3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTF_PIN4_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTF_PIN5_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTF_PIN6_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTF_PIN7_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_4_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_8_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_16_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_32_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_64_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_128_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_256_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_512_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_1024_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_2048_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_4096_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_8192_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_16384_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_32768_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC0_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC0_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC0_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC0_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC0_CCC_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC0_CCD_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC1_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC1_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC1_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC1_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD0_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD0_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD0_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD0_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD0_CCC_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD0_CCD_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD1_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD1_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD1_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD1_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE0_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE0_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE0_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE0_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE0_CCC_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE0_CCD_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE1_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE1_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE1_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE1_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF0_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF0_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF0_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF0_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF0_CCC_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF0_CCD_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF1_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF1_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF1_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF1_CCB_gc ALREADY DEFINED */


/* Event Channel 7 Multiplexer */
/* EVSYS_CHMUX_OFF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_RTC_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_RTC_CMP_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACA_CH0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACA_CH1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACA_WIN_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACB_CH0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACB_CH1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACB_WIN_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCA_CH0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCA_CH1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCA_CH2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCA_CH3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCB_CH0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCB_CH1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCB_CH2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCB_CH3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN4_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN5_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN6_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN7_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTB_PIN0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTB_PIN1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTB_PIN2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTB_PIN3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTB_PIN4_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTB_PIN5_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTB_PIN6_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTB_PIN7_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTC_PIN0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTC_PIN1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTC_PIN2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTC_PIN3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTC_PIN4_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTC_PIN5_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTC_PIN6_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTC_PIN7_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTD_PIN0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTD_PIN1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTD_PIN2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTD_PIN3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTD_PIN4_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTD_PIN5_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTD_PIN6_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTD_PIN7_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTE_PIN0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTE_PIN1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTE_PIN2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTE_PIN3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTE_PIN4_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTE_PIN5_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTE_PIN6_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTE_PIN7_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTF_PIN0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTF_PIN1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTF_PIN2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTF_PIN3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTF_PIN4_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTF_PIN5_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTF_PIN6_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTF_PIN7_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_4_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_8_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_16_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_32_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_64_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_128_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_256_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_512_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_1024_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_2048_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_4096_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_8192_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_16384_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PRESCALER_32768_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC0_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC0_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC0_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC0_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC0_CCC_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC0_CCD_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC1_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC1_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC1_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC1_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD0_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD0_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD0_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD0_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD0_CCC_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD0_CCD_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD1_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD1_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD1_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD1_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE0_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE0_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE0_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE0_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE0_CCC_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE0_CCD_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE1_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE1_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE1_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCE1_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF0_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF0_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF0_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF0_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF0_CCC_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF0_CCD_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF1_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF1_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF1_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCF1_CCB_gc ALREADY DEFINED */


/* Quadrature Decoder Index Recognition Mode */
#define EVSYS_CH0CTRL_QDIRM_gc(x) ((x<<5) & 0x60)

/* Quadrature Decoder Index Enable */
#define EVSYS_QDIEN_CLEAR_gc (0x00) /* Quadrature Decoder Index Enable - CLEAR */
#define EVSYS_QDIEN_SET_gc   (0x10) /* Quadrature Decoder Index Enable - SET */


/* Quadrature Decoder Enable */
#define EVSYS_QDEN_CLEAR_gc (0x00) /* Quadrature Decoder Enable - CLEAR */
#define EVSYS_QDEN_SET_gc   (0x08) /* Quadrature Decoder Enable - SET */


/* Digital Filter */
#define EVSYS_DIGFILT_1SAMPLE_gc  (0x00) /* 1 SAMPLE */
#define EVSYS_DIGFILT_2SAMPLES_gc (0x01) /* 2 SAMPLES */
#define EVSYS_DIGFILT_3SAMPLES_gc (0x02) /* 3 SAMPLES */
#define EVSYS_DIGFILT_4SAMPLES_gc (0x03) /* 4 SAMPLES */
#define EVSYS_DIGFILT_5SAMPLES_gc (0x04) /* 5 SAMPLES */
#define EVSYS_DIGFILT_6SAMPLES_gc (0x05) /* 6 SAMPLES */
#define EVSYS_DIGFILT_7SAMPLES_gc (0x06) /* 7 SAMPLES */
#define EVSYS_DIGFILT_8SAMPLES_gc (0x07) /* 8 SAMPLES */


/* Digital Filter */
/* EVSYS_DIGFILT_1SAMPLE_gc ALREADY DEFINED */
/* EVSYS_DIGFILT_2SAMPLES_gc ALREADY DEFINED */
/* EVSYS_DIGFILT_3SAMPLES_gc ALREADY DEFINED */
/* EVSYS_DIGFILT_4SAMPLES_gc ALREADY DEFINED */
/* EVSYS_DIGFILT_5SAMPLES_gc ALREADY DEFINED */
/* EVSYS_DIGFILT_6SAMPLES_gc ALREADY DEFINED */
/* EVSYS_DIGFILT_7SAMPLES_gc ALREADY DEFINED */
/* EVSYS_DIGFILT_8SAMPLES_gc ALREADY DEFINED */


/* Quadrature Decoder Index Recognition Mode */
#define EVSYS_QDIRM_00_gc (0x00<<5) /* QDPH0 = 0, QDPH90 = 0 */
#define EVSYS_QDIRM_01_gc (0x01<<5) /* QDPH0 = 0, QDPH90 = 1 */
#define EVSYS_QDIRM_10_gc (0x02<<5) /* QDPH0 = 1, QDPH90 = 0 */
#define EVSYS_QDIRM_11_gc (0x03<<5) /* QDPH0 = 1, QDPH90 = 1 */


/* Quadrature Decoder Index Enable */
/* EVSYS_QDIEN_CLEAR_gc ALREADY DEFINED */
/* EVSYS_QDIEN_SET_gc ALREADY DEFINED */


/* Quadrature Decoder Enable */
/* EVSYS_QDEN_CLEAR_gc ALREADY DEFINED */
/* EVSYS_QDEN_SET_gc ALREADY DEFINED */


/* Digital Filter */
/* EVSYS_DIGFILT_1SAMPLE_gc ALREADY DEFINED */
/* EVSYS_DIGFILT_2SAMPLES_gc ALREADY DEFINED */
/* EVSYS_DIGFILT_3SAMPLES_gc ALREADY DEFINED */
/* EVSYS_DIGFILT_4SAMPLES_gc ALREADY DEFINED */
/* EVSYS_DIGFILT_5SAMPLES_gc ALREADY DEFINED */
/* EVSYS_DIGFILT_6SAMPLES_gc ALREADY DEFINED */
/* EVSYS_DIGFILT_7SAMPLES_gc ALREADY DEFINED */
/* EVSYS_DIGFILT_8SAMPLES_gc ALREADY DEFINED */


/* Digital Filter */
/* EVSYS_DIGFILT_1SAMPLE_gc ALREADY DEFINED */
/* EVSYS_DIGFILT_2SAMPLES_gc ALREADY DEFINED */
/* EVSYS_DIGFILT_3SAMPLES_gc ALREADY DEFINED */
/* EVSYS_DIGFILT_4SAMPLES_gc ALREADY DEFINED */
/* EVSYS_DIGFILT_5SAMPLES_gc ALREADY DEFINED */
/* EVSYS_DIGFILT_6SAMPLES_gc ALREADY DEFINED */
/* EVSYS_DIGFILT_7SAMPLES_gc ALREADY DEFINED */
/* EVSYS_DIGFILT_8SAMPLES_gc ALREADY DEFINED */


/* Quadrature Decoder Index Recognition Mode */
/* EVSYS_QDIRM_00_gc ALREADY DEFINED */
/* EVSYS_QDIRM_01_gc ALREADY DEFINED */
/* EVSYS_QDIRM_10_gc ALREADY DEFINED */
/* EVSYS_QDIRM_11_gc ALREADY DEFINED */


/* Quadrature Decoder Index Enable */
/* EVSYS_QDIEN_CLEAR_gc ALREADY DEFINED */
/* EVSYS_QDIEN_SET_gc ALREADY DEFINED */


/* Quadrature Decoder Enable */
/* EVSYS_QDEN_CLEAR_gc ALREADY DEFINED */
/* EVSYS_QDEN_SET_gc ALREADY DEFINED */


/* Digital Filter */
/* EVSYS_DIGFILT_1SAMPLE_gc ALREADY DEFINED */
/* EVSYS_DIGFILT_2SAMPLES_gc ALREADY DEFINED */
/* EVSYS_DIGFILT_3SAMPLES_gc ALREADY DEFINED */
/* EVSYS_DIGFILT_4SAMPLES_gc ALREADY DEFINED */
/* EVSYS_DIGFILT_5SAMPLES_gc ALREADY DEFINED */
/* EVSYS_DIGFILT_6SAMPLES_gc ALREADY DEFINED */
/* EVSYS_DIGFILT_7SAMPLES_gc ALREADY DEFINED */
/* EVSYS_DIGFILT_8SAMPLES_gc ALREADY DEFINED */


/* Digital Filter */
/* EVSYS_DIGFILT_1SAMPLE_gc ALREADY DEFINED */
/* EVSYS_DIGFILT_2SAMPLES_gc ALREADY DEFINED */
/* EVSYS_DIGFILT_3SAMPLES_gc ALREADY DEFINED */
/* EVSYS_DIGFILT_4SAMPLES_gc ALREADY DEFINED */
/* EVSYS_DIGFILT_5SAMPLES_gc ALREADY DEFINED */
/* EVSYS_DIGFILT_6SAMPLES_gc ALREADY DEFINED */
/* EVSYS_DIGFILT_7SAMPLES_gc ALREADY DEFINED */
/* EVSYS_DIGFILT_8SAMPLES_gc ALREADY DEFINED */


/* Digital Filter */
/* EVSYS_DIGFILT_1SAMPLE_gc ALREADY DEFINED */
/* EVSYS_DIGFILT_2SAMPLES_gc ALREADY DEFINED */
/* EVSYS_DIGFILT_3SAMPLES_gc ALREADY DEFINED */
/* EVSYS_DIGFILT_4SAMPLES_gc ALREADY DEFINED */
/* EVSYS_DIGFILT_5SAMPLES_gc ALREADY DEFINED */
/* EVSYS_DIGFILT_6SAMPLES_gc ALREADY DEFINED */
/* EVSYS_DIGFILT_7SAMPLES_gc ALREADY DEFINED */
/* EVSYS_DIGFILT_8SAMPLES_gc ALREADY DEFINED */


/* Digital Filter */
/* EVSYS_DIGFILT_1SAMPLE_gc ALREADY DEFINED */
/* EVSYS_DIGFILT_2SAMPLES_gc ALREADY DEFINED */
/* EVSYS_DIGFILT_3SAMPLES_gc ALREADY DEFINED */
/* EVSYS_DIGFILT_4SAMPLES_gc ALREADY DEFINED */
/* EVSYS_DIGFILT_5SAMPLES_gc ALREADY DEFINED */
/* EVSYS_DIGFILT_6SAMPLES_gc ALREADY DEFINED */
/* EVSYS_DIGFILT_7SAMPLES_gc ALREADY DEFINED */
/* EVSYS_DIGFILT_8SAMPLES_gc ALREADY DEFINED */


/*
--------------------------------------------------------------------------------
NVM - Non Volatile Memory Controller
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
NVM - Non Volatile Memory Controller
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
NVM - Non Volatile Memory Controller
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
NVM - Non Volatile Memory Controller
--------------------------------------------------------------------------------
*/


/* Command */
#define NVM_CMD_NO_OPERATION_gc            (0x00) /* Noop/Ordinary LPM */
#define NVM_CMD_READ_CALIB_ROW_gc          (0x02) /* Read calibration row */
#define NVM_CMD_READ_USER_SIG_ROW_gc       (0x01) /* Read user signature row */
#define NVM_CMD_READ_EEPROM_gc             (0x06) /* Read EEPROM */
#define NVM_CMD_READ_FUSES_gc              (0x07) /* Read fuse byte */
#define NVM_CMD_WRITE_LOCK_BITS_gc         (0x08) /* Write lock bits */
#define NVM_CMD_ERASE_USER_SIG_ROW_gc      (0x18) /* Erase user signature row */
#define NVM_CMD_WRITE_USER_SIG_ROW_gc      (0x1A) /* Write user signature row */
#define NVM_CMD_ERASE_APP_gc               (0x20) /* Erase Application Section */
#define NVM_CMD_ERASE_APP_PAGE_gc          (0x22) /* Erase Application Section page */
#define NVM_CMD_LOAD_FLASH_BUFFER_gc       (0x23) /* Load Flash page buffer */
#define NVM_CMD_WRITE_APP_PAGE_gc          (0x24) /* Write Application Section page */
#define NVM_CMD_ERASE_WRITE_APP_PAGE_gc    (0x25) /* Erase-and-write Application Section page */
#define NVM_CMD_ERASE_FLASH_BUFFER_gc      (0x26) /* Erase/flush Flash page buffer */
#define NVM_CMD_ERASE_BOOT_PAGE_gc         (0x2A) /* Erase Boot Section page */
#define NVM_CMD_ERASE_FLASH_PAGE_gc        (0x2B) /* Erase Flash page */
#define NVM_CMD_WRITE_BOOT_PAGE_gc         (0x2C) /* Write Boot Section page */
#define NVM_CMD_ERASE_WRITE_BOOT_PAGE_gc   (0x2D) /* Erase-and-write Boot Section page */
#define NVM_CMD_WRITE_FLASH_PAGE_gc        (0x2E) /* Write Flash page */
#define NVM_CMD_ERASE_WRITE_FLASH_PAGE_gc  (0x2F) /* Erase and Write Flash page */
#define NVM_CMD_ERASE_EEPROM_gc            (0x30) /* Erase EEPROM */
#define NVM_CMD_ERASE_EEPROM_PAGE_gc       (0x32) /* Erase EEPROM page */
#define NVM_CMD_LOAD_EEPROM_BUFFER_gc      (0x33) /* Load EEPROM page buffer */
#define NVM_CMD_WRITE_EEPROM_PAGE_gc       (0x34) /* Write EEPROM page */
#define NVM_CMD_ERASE_WRITE_EEPROM_PAGE_gc (0x35) /* Erase-and-write EEPROM page */
#define NVM_CMD_ERASE_EEPROM_BUFFER_gc     (0x36) /* Erase/flush EEPROM page buffer */
#define NVM_CMD_APP_CRC_gc                 (0x38) /* Generate Application section CRC */
#define NVM_CMD_BOOT_CRC_gc                (0x39) /* Generate Boot Section CRC */
#define NVM_CMD_FLASH_RANGE_CRC_gc         (0x3A) /* Generate Flash Range CRC */


/* Command Execute */
#define NVM_CMDEX_CLEAR_gc (0x00) /* Command Execute - CLEAR */
#define NVM_CMDEX_SET_gc   (0x01) /* Command Execute - SET */


/* EEPROM Mapping Enable */
#define NVM_EEMAPEN_CLEAR_gc (0x00) /* EEPROM Mapping Enable - CLEAR */
#define NVM_EEMAPEN_SET_gc   (0x08) /* EEPROM Mapping Enable - SET */


/* Flash Power Reduction Enable */
#define NVM_FPRM_CLEAR_gc (0x00) /* Flash Power Reduction Enable - CLEAR */
#define NVM_FPRM_SET_gc   (0x04) /* Flash Power Reduction Enable - SET */


/* EEPROM Power Reduction Enable */
#define NVM_EPRM_CLEAR_gc (0x00) /* EEPROM Power Reduction Enable - CLEAR */
#define NVM_EPRM_SET_gc   (0x02) /* EEPROM Power Reduction Enable - SET */


/* SPM Lock */
#define NVM_SPMLOCK_CLEAR_gc (0x00) /* SPM Lock - CLEAR */
#define NVM_SPMLOCK_SET_gc   (0x01) /* SPM Lock - SET */


/* SPM Interrupt Level */
#define NVM_SPMLVL_OFF_gc (0x00<<2) /* Interrupt disabled */
#define NVM_SPMLVL_LO_gc  (0x01<<2) /* Low level */
#define NVM_SPMLVL_MED_gc (0x02<<2) /* Medium level */
#define NVM_SPMLVL_HI_gc  (0x03<<2) /* High level */


/* EEPROM Interrupt Level */
#define NVM_EELVL_OFF_gc (0x00) /* Interrupt disabled */
#define NVM_EELVL_LO_gc  (0x01) /* Low level */
#define NVM_EELVL_MED_gc (0x02) /* Medium level */
#define NVM_EELVL_HI_gc  (0x03) /* High level */


/* Non-volatile Memory Busy */
#define NVM_NVMBUSY_CLEAR_gc (0x00) /* Non-volatile Memory Busy - CLEAR */
#define NVM_NVMBUSY_SET_gc   (0x80) /* Non-volatile Memory Busy - SET */


/* Flash Memory Busy */
#define NVM_FBUSY_CLEAR_gc (0x00) /* Flash Memory Busy - CLEAR */
#define NVM_FBUSY_SET_gc   (0x40) /* Flash Memory Busy - SET */


/* EEPROM Page Buffer Active Loading */
#define NVM_EELOAD_CLEAR_gc (0x00) /* EEPROM Page Buffer Active Loading - CLEAR */
#define NVM_EELOAD_SET_gc   (0x02) /* EEPROM Page Buffer Active Loading - SET */


/* Flash Page Buffer Active Loading */
#define NVM_FLOAD_CLEAR_gc (0x00) /* Flash Page Buffer Active Loading - CLEAR */
#define NVM_FLOAD_SET_gc   (0x01) /* Flash Page Buffer Active Loading - SET */


/* Boot Lock Bits - Boot Section */
#define NVM_BLBB_NOLOCK_gc (0x03<<6) /* No locks */
#define NVM_BLBB_WLOCK_gc  (0x02<<6) /* Write not allowed */
#define NVM_BLBB_RLOCK_gc  (0x01<<6) /* Read not allowed */
#define NVM_BLBB_RWLOCK_gc (0x00<<6) /* Read and write not allowed */


/* Boot Lock Bits - Application Section */
#define NVM_BLBA_NOLOCK_gc (0x03<<4) /* No locks */
#define NVM_BLBA_WLOCK_gc  (0x02<<4) /* Write not allowed */
#define NVM_BLBA_RLOCK_gc  (0x01<<4) /* Read not allowed */
#define NVM_BLBA_RWLOCK_gc (0x00<<4) /* Read and write not allowed */


/* Boot Lock Bits - Application Table */
#define NVM_BLBAT_NOLOCK_gc (0x03<<2) /* No locks */
#define NVM_BLBAT_WLOCK_gc  (0x02<<2) /* Write not allowed */
#define NVM_BLBAT_RLOCK_gc  (0x01<<2) /* Read not allowed */
#define NVM_BLBAT_RWLOCK_gc (0x00<<2) /* Read and write not allowed */


/* Lock Bits */
#define NVM_LB_NOLOCK_gc (0x03) /* No locks */
#define NVM_LB_WLOCK_gc  (0x02) /* Write not allowed */
#define NVM_LB_RWLOCK_gc (0x00) /* Read and write not allowed */


/* Boot Lock Bits - Boot Section */
#define NVM_LOCKBITS_BLBB_NOLOCK_gc (0x03<<6) /* No locks */
#define NVM_LOCKBITS_BLBB_WLOCK_gc  (0x02<<6) /* Write not allowed */
#define NVM_LOCKBITS_BLBB_RLOCK_gc  (0x01<<6) /* Read not allowed */
#define NVM_LOCKBITS_BLBB_RWLOCK_gc (0x00<<6) /* Read and write not allowed */


/* Boot Lock Bits - Application Section */
#define NVM_LOCKBITS_BLBA_NOLOCK_gc (0x03<<4) /* No locks */
#define NVM_LOCKBITS_BLBA_WLOCK_gc  (0x02<<4) /* Write not allowed */
#define NVM_LOCKBITS_BLBA_RLOCK_gc  (0x01<<4) /* Read not allowed */
#define NVM_LOCKBITS_BLBA_RWLOCK_gc (0x00<<4) /* Read and write not allowed */


/* Boot Lock Bits - Application Table */
#define NVM_LOCKBITS_BLBAT_NOLOCK_gc (0x03<<2) /* No locks */
#define NVM_LOCKBITS_BLBAT_WLOCK_gc  (0x02<<2) /* Write not allowed */
#define NVM_LOCKBITS_BLBAT_RLOCK_gc  (0x01<<2) /* Read not allowed */
#define NVM_LOCKBITS_BLBAT_RWLOCK_gc (0x00<<2) /* Read and write not allowed */


/* Lock Bits */
#define NVM_LOCKBITS_LB_NOLOCK_gc (0x03) /* No locks */
#define NVM_LOCKBITS_LB_WLOCK_gc  (0x02) /* Write not allowed */
#define NVM_LOCKBITS_LB_RWLOCK_gc (0x00) /* Read and write not allowed */


/* Watchdog Window Timeout Period */
#define NVM_FUSES_WDWP_8CLK_gc   (0x00<<4) /* 8 cycles (8ms @ 3.3V) */
#define NVM_FUSES_WDWP_16CLK_gc  (0x01<<4) /* 16 cycles (16ms @ 3.3V) */
#define NVM_FUSES_WDWP_32CLK_gc  (0x02<<4) /* 32 cycles (32ms @ 3.3V) */
#define NVM_FUSES_WDWP_64CLK_gc  (0x03<<4) /* 64 cycles (64ms @ 3.3V) */
#define NVM_FUSES_WDWP_128CLK_gc (0x04<<4) /* 128 cycles (0.125s @ 3.3V) */
#define NVM_FUSES_WDWP_256CLK_gc (0x05<<4) /* 256 cycles (0.25s @ 3.3V) */
#define NVM_FUSES_WDWP_512CLK_gc (0x06<<4) /* 512 cycles (0.5s @ 3.3V) */
#define NVM_FUSES_WDWP_1KCLK_gc  (0x07<<4) /* 1K cycles (1s @ 3.3V) */
#define NVM_FUSES_WDWP_2KCLK_gc  (0x08<<4) /* 2K cycles (2s @ 3.3V) */
#define NVM_FUSES_WDWP_4KCLK_gc  (0x09<<4) /* 4K cycles (4s @ 3.3V) */
#define NVM_FUSES_WDWP_8KCLK_gc  (0x0A<<4) /* 8K cycles (8s @ 3.3V) */


/* Watchdog Timeout Period */
#define NVM_FUSES_WDP_8CLK_gc   (0x00) /* 8 cycles (8ms @ 3.3V) */
#define NVM_FUSES_WDP_16CLK_gc  (0x01) /* 16 cycles (16ms @ 3.3V) */
#define NVM_FUSES_WDP_32CLK_gc  (0x02) /* 32 cycles (32ms @ 3.3V) */
#define NVM_FUSES_WDP_64CLK_gc  (0x03) /* 64 cycles (64ms @ 3.3V) */
#define NVM_FUSES_WDP_128CLK_gc (0x04) /* 128 cycles (0.125s @ 3.3V) */
#define NVM_FUSES_WDP_256CLK_gc (0x05) /* 256 cycles (0.25s @ 3.3V) */
#define NVM_FUSES_WDP_512CLK_gc (0x06) /* 512 cycles (0.5s @ 3.3V) */
#define NVM_FUSES_WDP_1KCLK_gc  (0x07) /* 1K cycles (1s @ 3.3V) */
#define NVM_FUSES_WDP_2KCLK_gc  (0x08) /* 2K cycles (2s @ 3.3V) */
#define NVM_FUSES_WDP_4KCLK_gc  (0x09) /* 4K cycles (4s @ 3.3V) */
#define NVM_FUSES_WDP_8KCLK_gc  (0x0A) /* 8K cycles (8s @ 3.3V) */


/* Boot Loader Section Reset Vector */
#define NVM_FUSES_BOOTRST_BOOTLDR_gc     (0x00<<6) /* Boot Loader Reset */
#define NVM_FUSES_BOOTRST_APPLICATION_gc (0x01<<6) /* Application Reset */


/* BOD Operation in Power-Down Mode */
#define NVM_FUSES_BODPD_INSAMPLEDMODE_gc (0x01) /* BOD enabled in sampled mode */
#define NVM_FUSES_BODPD_CONTINOUSLY_gc   (0x02) /* BOD enabled continuously */
#define NVM_FUSES_BODPD_DISABLED_gc      (0x03) /* BOD Disabled */


/* External Reset Disable */
#define NVM_FUSES_RSTDISBL_CLEAR_gc (0x00) /* External Reset Disable - CLEAR */
#define NVM_FUSES_RSTDISBL_SET_gc   (0x10) /* External Reset Disable - SET */


/* Start-up Time */
#define NVM_FUSES_STARTUPTIME_0MS_gc  (0x03<<2) /* 0 ms */
#define NVM_FUSES_STARTUPTIME_4MS_gc  (0x01<<2) /* 4 ms */
#define NVM_FUSES_STARTUPTIME_64MS_gc (0x00<<2) /* 64 ms */


/* Watchdog Timer Lock */
#define NVM_FUSES_WDLOCK_CLEAR_gc (0x00) /* Watchdog Timer Lock - CLEAR */
#define NVM_FUSES_WDLOCK_SET_gc   (0x02) /* Watchdog Timer Lock - SET */


/* JTAG Interface Enable */
#define NVM_FUSES_JTAGEN_CLEAR_gc (0x00) /* JTAG Interface Enable - CLEAR */
#define NVM_FUSES_JTAGEN_SET_gc   (0x01) /* JTAG Interface Enable - SET */


/* BOD Operation in Active Mode */
#define NVM_FUSES_BODACT_INSAMPLEDMODE_gc (0x01<<4) /* BOD enabled in sampled mode */
#define NVM_FUSES_BODACT_CONTINOUSLY_gc   (0x02<<4) /* BOD enabled continuously */
#define NVM_FUSES_BODACT_DISABLED_gc      (0x03<<4) /* BOD Disabled */


/* Preserve EEPROM Through Chip Erase */
#define NVM_FUSES_EESAVE_CLEAR_gc (0x00) /* Preserve EEPROM Through Chip Erase - CLEAR */
#define NVM_FUSES_EESAVE_SET_gc   (0x08) /* Preserve EEPROM Through Chip Erase - SET */


/* Brownout Detection Voltage Level */
#define NVM_FUSES_BODLEVEL_1V6_gc (0x07) /* 1.6 V */
#define NVM_FUSES_BODLEVEL_1V9_gc (0x06) /* 1.9 V */
#define NVM_FUSES_BODLEVEL_2V1_gc (0x05) /* 2.1 V */
#define NVM_FUSES_BODLEVEL_2V4_gc (0x04) /* 2.4 V */
#define NVM_FUSES_BODLEVEL_2V7_gc (0x03) /* 2.7 V */
#define NVM_FUSES_BODLEVEL_3V0_gc (0x02) /* 3.0 V */
#define NVM_FUSES_BODLEVEL_3V2_gc (0x01) /* 3.2 V */
#define NVM_FUSES_BODLEVEL_3V5_gc (0x00) /* 3.5 V */


/*
--------------------------------------------------------------------------------
AC - Analog Comparator
--------------------------------------------------------------------------------
*/


/* Interrupt Mode */
#define AC_INTMODE_BOTHEDGES_gc (0x00<<6) /* Interrupt on both edges */
#define AC_INTMODE_FALLING_gc   (0x02<<6) /* Interrupt on falling edge */
#define AC_INTMODE_RISING_gc    (0x03<<6) /* Interrupt on rising edge */


/* Interrupt Level */
#define AC_INTLVL_OFF_gc (0x00<<4) /* Interrupt disabled */
#define AC_INTLVL_LO_gc  (0x01<<4) /* Low level */
#define AC_INTLVL_MED_gc (0x02<<4) /* Medium level */
#define AC_INTLVL_HI_gc  (0x03<<4) /* High level */


/* High-speed Mode */
#define AC_HSMODE_CLEAR_gc (0x00) /* High-speed Mode - CLEAR */
#define AC_HSMODE_SET_gc   (0x08) /* High-speed Mode - SET */


/* Hysteresis Mode */
#define AC_HYSMODE_NO_gc    (0x00<<1) /* No hysteresis */
#define AC_HYSMODE_SMALL_gc (0x01<<1) /* Small hysteresis */
#define AC_HYSMODE_LARGE_gc (0x02<<1) /* Large hysteresis */


/* Enable */
#define AC_ENABLE_CLEAR_gc (0x00) /* Enable - CLEAR */
#define AC_ENABLE_SET_gc   (0x01) /* Enable - SET */


/* Interrupt Mode */
/* AC_INTMODE_BOTHEDGES_gc ALREADY DEFINED */
/* AC_INTMODE_FALLING_gc ALREADY DEFINED */
/* AC_INTMODE_RISING_gc ALREADY DEFINED */


/* Interrupt Level */
/* AC_INTLVL_OFF_gc ALREADY DEFINED */
/* AC_INTLVL_LO_gc ALREADY DEFINED */
/* AC_INTLVL_MED_gc ALREADY DEFINED */
/* AC_INTLVL_HI_gc ALREADY DEFINED */


/* High-speed Mode */
/* AC_HSMODE_CLEAR_gc ALREADY DEFINED */
/* AC_HSMODE_SET_gc ALREADY DEFINED */


/* Hysteresis Mode */
/* AC_HYSMODE_NO_gc ALREADY DEFINED */
/* AC_HYSMODE_SMALL_gc ALREADY DEFINED */
/* AC_HYSMODE_LARGE_gc ALREADY DEFINED */


/* Enable */
/* AC_ENABLE_CLEAR_gc ALREADY DEFINED */
/* AC_ENABLE_SET_gc ALREADY DEFINED */


/* MUX Positive Input */
#define AC_MUXPOS_PIN0_gc (0x00<<3) /* Pin 0 */
#define AC_MUXPOS_PIN1_gc (0x01<<3) /* Pin 1 */
#define AC_MUXPOS_PIN2_gc (0x02<<3) /* Pin 2 */
#define AC_MUXPOS_PIN3_gc (0x03<<3) /* Pin 3 */
#define AC_MUXPOS_PIN4_gc (0x04<<3) /* Pin 4 */
#define AC_MUXPOS_PIN5_gc (0x05<<3) /* Pin 5 */
#define AC_MUXPOS_PIN6_gc (0x06<<3) /* Pin 6 */
#define AC_MUXPOS_DAC_gc  (0x07<<3) /* DAC output */


/* MUX Negative Input */
#define AC_MUXNEG_PIN0_gc    (0x00) /* Pin 0 */
#define AC_MUXNEG_PIN1_gc    (0x01) /* Pin 1 */
#define AC_MUXNEG_PIN3_gc    (0x02) /* Pin 3 */
#define AC_MUXNEG_PIN5_gc    (0x03) /* Pin 5 */
#define AC_MUXNEG_PIN7_gc    (0x04) /* Pin 7 */
#define AC_MUXNEG_DAC_gc     (0x05) /* DAC output */
#define AC_MUXNEG_BANDGAP_gc (0x06) /* Bandgap Reference */
#define AC_MUXNEG_SCALER_gc  (0x07) /* Internal voltage scaler */


/* MUX Positive Input */
/* AC_MUXPOS_PIN0_gc ALREADY DEFINED */
/* AC_MUXPOS_PIN1_gc ALREADY DEFINED */
/* AC_MUXPOS_PIN2_gc ALREADY DEFINED */
/* AC_MUXPOS_PIN3_gc ALREADY DEFINED */
/* AC_MUXPOS_PIN4_gc ALREADY DEFINED */
/* AC_MUXPOS_PIN5_gc ALREADY DEFINED */
/* AC_MUXPOS_PIN6_gc ALREADY DEFINED */
/* AC_MUXPOS_DAC_gc ALREADY DEFINED */


/* MUX Negative Input */
/* AC_MUXNEG_PIN0_gc ALREADY DEFINED */
/* AC_MUXNEG_PIN1_gc ALREADY DEFINED */
/* AC_MUXNEG_PIN3_gc ALREADY DEFINED */
/* AC_MUXNEG_PIN5_gc ALREADY DEFINED */
/* AC_MUXNEG_PIN7_gc ALREADY DEFINED */
/* AC_MUXNEG_DAC_gc ALREADY DEFINED */
/* AC_MUXNEG_BANDGAP_gc ALREADY DEFINED */
/* AC_MUXNEG_SCALER_gc ALREADY DEFINED */


/* Analog Comparator 0 Output Enable */
#define AC_AC0OUT_CLEAR_gc (0x00) /* Analog Comparator 0 Output Enable - CLEAR */
#define AC_AC0OUT_SET_gc   (0x01) /* Analog Comparator 0 Output Enable - SET */


/* Window Mode Enable */
#define AC_WEN_CLEAR_gc (0x00) /* Window Mode Enable - CLEAR */
#define AC_WEN_SET_gc   (0x10) /* Window Mode Enable - SET */


/* Window Interrupt Mode */
#define AC_WINTMODE_ABOVE_gc   (0x00<<2) /* Interrupt on above window */
#define AC_WINTMODE_INSIDE_gc  (0x01<<2) /* Interrupt on inside window */
#define AC_WINTMODE_BELOW_gc   (0x02<<2) /* Interrupt on below window */
#define AC_WINTMODE_OUTSIDE_gc (0x03<<2) /* Interrupt on outside window */


/* Window Interrupt Level */
#define AC_WINTLVL_OFF_gc (0x00) /* Interrupt disabled */
#define AC_WINTLVL_LO_gc  (0x01) /* Low priority */
#define AC_WINTLVL_MED_gc (0x02) /* Medium priority */
#define AC_WINTLVL_HI_gc  (0x03) /* High priority */


/* Window Mode State */
#define AC_WSTATE_ABOVE_gc  (0x00<<6) /* Signal above window */
#define AC_WSTATE_INSIDE_gc (0x01<<6) /* Signal inside window */
#define AC_WSTATE_BELOW_gc  (0x02<<6) /* Signal below window */


/* Analog Comparator 1 State */
#define AC_AC1STATE_CLEAR_gc (0x00) /* Analog Comparator 1 State - CLEAR */
#define AC_AC1STATE_SET_gc   (0x20) /* Analog Comparator 1 State - SET */


/* Analog Comparator 0 State */
#define AC_AC0STATE_CLEAR_gc (0x00) /* Analog Comparator 0 State - CLEAR */
#define AC_AC0STATE_SET_gc   (0x10) /* Analog Comparator 0 State - SET */


/* Window Mode Interrupt Flag */
#define AC_WIF_CLEAR_gc (0x00) /* Window Mode Interrupt Flag - CLEAR */
#define AC_WIF_SET_gc   (0x04) /* Window Mode Interrupt Flag - SET */


/* Analog Comparator 1 Interrupt Flag */
#define AC_AC1IF_CLEAR_gc (0x00) /* Analog Comparator 1 Interrupt Flag - CLEAR */
#define AC_AC1IF_SET_gc   (0x02) /* Analog Comparator 1 Interrupt Flag - SET */


/* Analog Comparator 0 Interrupt Flag */
#define AC_AC0IF_CLEAR_gc (0x00) /* Analog Comparator 0 Interrupt Flag - CLEAR */
#define AC_AC0IF_SET_gc   (0x01) /* Analog Comparator 0 Interrupt Flag - SET */


/*
--------------------------------------------------------------------------------
ADC - Analog/Digital Converter
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
ADC - Analog/Digital Converter
--------------------------------------------------------------------------------
*/


/* Channel Start Conversion */
#define ADC_CH_START_CLEAR_gc (0x00) /* Channel Start Conversion - CLEAR */
#define ADC_CH_START_SET_gc   (0x80) /* Channel Start Conversion - SET */


/* Gain Factor */
#define ADC_CH_GAINFAC_1X_gc   (0x00<<2) /* 1x gain */
#define ADC_CH_GAINFAC_2X_gc   (0x01<<2) /* 2x gain */
#define ADC_CH_GAINFAC_4X_gc   (0x02<<2) /* 4x gain */
#define ADC_CH_GAINFAC_8X_gc   (0x03<<2) /* 8x gain */
#define ADC_CH_GAINFAC_16X_gc  (0x04<<2) /* 16x gain */
#define ADC_CH_GAINFAC_32X_gc  (0x05<<2) /* 32x gain */
#define ADC_CH_GAINFAC_64X_gc  (0x06<<2) /* 64x gain */
#define ADC_CH_GAINFAC_DIV2_gc (0x07<<2) /* x/2 gain */


/* Input Mode Select */
#define ADC_CH_INPUTMODE_INTERNAL_gc    (0x00) /* Internal inputs, no gain */
#define ADC_CH_INPUTMODE_SINGLEENDED_gc (0x01) /* Single-ended input, no gain */
#define ADC_CH_INPUTMODE_DIFF_gc        (0x02) /* Differential input, no gain */
#define ADC_CH_INPUTMODE_DIFFWGAIN_gc   (0x03) /* Differential input, with gain */


/* Positive Input Select */
#define ADC_CH_MUXPOS_PIN0_gc  (0x00<<3) /* Input pin 0 */
#define ADC_CH_MUXPOS_PIN1_gc  (0x01<<3) /* Input pin 1 */
#define ADC_CH_MUXPOS_PIN2_gc  (0x02<<3) /* Input pin 2 */
#define ADC_CH_MUXPOS_PIN3_gc  (0x03<<3) /* Input pin 3 */
#define ADC_CH_MUXPOS_PIN4_gc  (0x04<<3) /* Input pin 4 */
#define ADC_CH_MUXPOS_PIN5_gc  (0x05<<3) /* Input pin 5 */
#define ADC_CH_MUXPOS_PIN6_gc  (0x06<<3) /* Input pin 6 */
#define ADC_CH_MUXPOS_PIN7_gc  (0x07<<3) /* Input pin 7 */
#define ADC_CH_MUXPOS_PIN8_gc  (0x08<<3) /* Input pin 8 */
#define ADC_CH_MUXPOS_PIN9_gc  (0x09<<3) /* Input pin 9 */
#define ADC_CH_MUXPOS_PIN10_gc (0x0A<<3) /* Input pin 10 */
#define ADC_CH_MUXPOS_PIN11_gc (0x0B<<3) /* Input pin 11 */


/* Internal Input Select */
#define ADC_CH_MUXINT_TEMP_gc      (0x00<<3) /* Temperature Reference */
#define ADC_CH_MUXINT_BANDGAP_gc   (0x01<<3) /* Bandgap Reference */
#define ADC_CH_MUXINT_SCALEDVCC_gc (0x02<<3) /* 1/10 scaled VCC */
#define ADC_CH_MUXINT_DAC_gc       (0x03<<3) /* DAC output */


/* Negative Input Select */
#define ADC_CH_MUXNEG_PIN0_gc (0x00) /* Input pin 0 */
#define ADC_CH_MUXNEG_PIN1_gc (0x01) /* Input pin 1 */
#define ADC_CH_MUXNEG_PIN2_gc (0x02) /* Input pin 2 */
#define ADC_CH_MUXNEG_PIN3_gc (0x03) /* Input pin 3 */
#define ADC_CH_MUXNEG_PIN4_gc (0x00) /* Input pin 4 */
#define ADC_CH_MUXNEG_PIN5_gc (0x01) /* Input pin 5 */
#define ADC_CH_MUXNEG_PIN6_gc (0x02) /* Input pin 6 */
#define ADC_CH_MUXNEG_PIN7_gc (0x03) /* Input pin 7 */


/* MUX selection on Negative ADC Input Gain on 4 LSB pins */
#define ADC_CH_MUXNEGL_PIN0_gc (0x00) /* Input pin 0 */
#define ADC_CH_MUXNEGL_PIN1_gc (0x01) /* Input pin 1 */
#define ADC_CH_MUXNEGL_PIN2_gc (0x02) /* Input pin 2 */
#define ADC_CH_MUXNEGL_PIN3_gc (0x03) /* Input pin 3 */


/* MUX selection on Negative ADC Input Gain on 4 MSB pins */
#define ADC_CH_MUXNEGH_PIN4_gc (0x00) /* Input pin 4 */
#define ADC_CH_MUXNEGH_PIN5_gc (0x01) /* Input pin 5 */
#define ADC_CH_MUXNEGH_PIN6_gc (0x02) /* Input pin 6 */
#define ADC_CH_MUXNEGH_PIN7_gc (0x03) /* Input pin 7 */


/* Interrupt Mode */
#define ADC_CH_INTMODE_COMPLETE_gc (0x00<<2) /* Interrupt on conversion complete */
#define ADC_CH_INTMODE_BELOW_gc    (0x01<<2) /* Interrupt on result below compare value */
#define ADC_CH_INTMODE_ABOVE_gc    (0x03<<2) /* Interrupt on result above compare value */


/* Interrupt Level */
#define ADC_CH_INTLVL_OFF_gc (0x00) /* Interrupt disabled */
#define ADC_CH_INTLVL_LO_gc  (0x01) /* Low level */
#define ADC_CH_INTLVL_MED_gc (0x02) /* Medium level */
#define ADC_CH_INTLVL_HI_gc  (0x03) /* High level */


/* Channel Interrupt Flag */
#define ADC_CH_CHIF_CLEAR_gc (0x00) /* Channel Interrupt Flag - CLEAR */
#define ADC_CH_CHIF_SET_gc   (0x01) /* Channel Interrupt Flag - SET */


/* DMA Selection */
#define ADC_DMASEL_OFF_gc    (0x00<<6) /* Combined DMA request OFF */
#define ADC_DMASEL_CH01_gc   (0x01<<6) /* ADC Channel 0 or 1 */
#define ADC_DMASEL_CH012_gc  (0x02<<6) /* ADC Channel 0 or 1 or 2 */
#define ADC_DMASEL_CH0123_gc (0x03<<6) /* ADC Channel 0 or 1 or 2 or 3 */


/* Channel 3 Start Conversion */
#define ADC_CH3START_CLEAR_gc (0x00) /* Channel 3 Start Conversion - CLEAR */
#define ADC_CH3START_SET_gc   (0x20) /* Channel 3 Start Conversion - SET */


/* Channel 2 Start Conversion */
#define ADC_CH2START_CLEAR_gc (0x00) /* Channel 2 Start Conversion - CLEAR */
#define ADC_CH2START_SET_gc   (0x10) /* Channel 2 Start Conversion - SET */


/* Channel 1 Start Conversion */
#define ADC_CH1START_CLEAR_gc (0x00) /* Channel 1 Start Conversion - CLEAR */
#define ADC_CH1START_SET_gc   (0x08) /* Channel 1 Start Conversion - SET */


/* Channel 0 Start Conversion */
#define ADC_CH0START_CLEAR_gc (0x00) /* Channel 0 Start Conversion - CLEAR */
#define ADC_CH0START_SET_gc   (0x04) /* Channel 0 Start Conversion - SET */


/* Flush Pipeline */
#define ADC_FLUSH_CLEAR_gc (0x00) /* Flush Pipeline - CLEAR */
#define ADC_FLUSH_SET_gc   (0x02) /* Flush Pipeline - SET */


/* Enable ADC */
#define ADC_ENABLE_CLEAR_gc (0x00) /* Enable ADC - CLEAR */
#define ADC_ENABLE_SET_gc   (0x01) /* Enable ADC - SET */


/* Conversion Mode */
#define ADC_CONMODE_CLEAR_gc (0x00) /* Conversion Mode - CLEAR */
#define ADC_CONMODE_SET_gc   (0x10) /* Conversion Mode - SET */


/* Free Running Mode Enable */
#define ADC_FREERUN_CLEAR_gc (0x00) /* Free Running Mode Enable - CLEAR */
#define ADC_FREERUN_SET_gc   (0x08) /* Free Running Mode Enable - SET */


/* Result Resolution */
#define ADC_RESOLUTION_12BIT_gc     (0x00<<1) /* 12-bit right-adjusted result */
#define ADC_RESOLUTION_8BIT_gc      (0x02<<1) /* 8-bit right-adjusted result */
#define ADC_RESOLUTION_LEFT12BIT_gc (0x03<<1) /* 12-bit left-adjusted result */


/* Reference Selection */
#define ADC_REFSEL_INT1V_gc  (0x00<<4) /* Internal 1V */
#define ADC_REFSEL_INTVCC_gc (0x01<<4) /* Internal VCC / 1.6V */
#define ADC_REFSEL_AREFA_gc  (0x02<<4) /* External reference on PORT A */
#define ADC_REFSEL_AREFB_gc  (0x03<<4) /* External reference on PORT B */


/* Bandgap enable */
#define ADC_BANDGAP_CLEAR_gc (0x00) /* Bandgap enable - CLEAR */
#define ADC_BANDGAP_SET_gc   (0x02) /* Bandgap enable - SET */


/* Temperature Reference Enable */
#define ADC_TEMPREF_CLEAR_gc (0x00) /* Temperature Reference Enable - CLEAR */
#define ADC_TEMPREF_SET_gc   (0x01) /* Temperature Reference Enable - SET */


/* Channel Sweep Selection */
#define ADC_SWEEP_0_gc    (0x00<<6) /* ADC Channel 0 */
#define ADC_SWEEP_01_gc   (0x01<<6) /* ADC Channel 0,1 */
#define ADC_SWEEP_012_gc  (0x02<<6) /* ADC Channel 0,1,2 */
#define ADC_SWEEP_0123_gc (0x03<<6) /* ADC Channel 0,1,2,3 */


/* Event Input Select */
#define ADC_EVSEL_0123_gc (0x00<<3) /* Event Channel 0,1,2,3 */
#define ADC_EVSEL_1234_gc (0x01<<3) /* Event Channel 1,2,3,4 */
#define ADC_EVSEL_2345_gc (0x02<<3) /* Event Channel 2,3,4,5 */
#define ADC_EVSEL_3456_gc (0x03<<3) /* Event Channel 3,4,5,6 */
#define ADC_EVSEL_4567_gc (0x04<<3) /* Event Channel 4,5,6,7 */
#define ADC_EVSEL_567_gc  (0x05<<3) /* Event Channel 5,6,7 */
#define ADC_EVSEL_67_gc   (0x06<<3) /* Event Channel 6,7 */
#define ADC_EVSEL_7_gc    (0x07<<3) /* Event Channel 7 */


/* Event Action Select */
#define ADC_EVACT_NONE_gc      (0x00) /* No event action */
#define ADC_EVACT_CH0_gc       (0x01) /* First event triggers channel 0 */
#define ADC_EVACT_CH01_gc      (0x02) /* First two events trigger channel 0,1 */
#define ADC_EVACT_CH012_gc     (0x03) /* First three events trigger channel 0,1,2 */
#define ADC_EVACT_CH0123_gc    (0x04) /* Events trigger channel 0,1,2,3 */
#define ADC_EVACT_SWEEP_gc     (0x05) /* First event triggers sweep */
#define ADC_EVACT_SYNCSWEEP_gc (0x06) /* The ADC is flushed and restarted for accurate timing */


/* Clock Prescaler Selection */
#define ADC_PRESCALER_DIV4_gc   (0x00) /* Divide clock by 4 */
#define ADC_PRESCALER_DIV8_gc   (0x01) /* Divide clock by 8 */
#define ADC_PRESCALER_DIV16_gc  (0x02) /* Divide clock by 16 */
#define ADC_PRESCALER_DIV32_gc  (0x03) /* Divide clock by 32 */
#define ADC_PRESCALER_DIV64_gc  (0x04) /* Divide clock by 64 */
#define ADC_PRESCALER_DIV128_gc (0x05) /* Divide clock by 128 */
#define ADC_PRESCALER_DIV256_gc (0x06) /* Divide clock by 256 */
#define ADC_PRESCALER_DIV512_gc (0x07) /* Divide clock by 512 */


/* Channel 3 Interrupt Flag */
#define ADC_CH3IF_CLEAR_gc (0x00) /* Channel 3 Interrupt Flag - CLEAR */
#define ADC_CH3IF_SET_gc   (0x08) /* Channel 3 Interrupt Flag - SET */


/* Channel 2 Interrupt Flag */
#define ADC_CH2IF_CLEAR_gc (0x00) /* Channel 2 Interrupt Flag - CLEAR */
#define ADC_CH2IF_SET_gc   (0x04) /* Channel 2 Interrupt Flag - SET */


/* Channel 1 Interrupt Flag */
#define ADC_CH1IF_CLEAR_gc (0x00) /* Channel 1 Interrupt Flag - CLEAR */
#define ADC_CH1IF_SET_gc   (0x02) /* Channel 1 Interrupt Flag - SET */


/* Channel 0 Interrupt Flag */
#define ADC_CH0IF_CLEAR_gc (0x00) /* Channel 0 Interrupt Flag - CLEAR */
#define ADC_CH0IF_SET_gc   (0x01) /* Channel 0 Interrupt Flag - SET */


/*
--------------------------------------------------------------------------------
DAC - Digital/Analog Converter
--------------------------------------------------------------------------------
*/


/* Internal Output Enable */
#define DAC_IDOEN_CLEAR_gc (0x00) /* Internal Output Enable - CLEAR */
#define DAC_IDOEN_SET_gc   (0x10) /* Internal Output Enable - SET */


/* Channel 1 Output Enable */
#define DAC_CH1EN_CLEAR_gc (0x00) /* Channel 1 Output Enable - CLEAR */
#define DAC_CH1EN_SET_gc   (0x08) /* Channel 1 Output Enable - SET */


/* Channel 0 Output Enable */
#define DAC_CH0EN_CLEAR_gc (0x00) /* Channel 0 Output Enable - CLEAR */
#define DAC_CH0EN_SET_gc   (0x04) /* Channel 0 Output Enable - SET */


/* Low Power Mode */
#define DAC_LPMODE_CLEAR_gc (0x00) /* Low Power Mode - CLEAR */
#define DAC_LPMODE_SET_gc   (0x02) /* Low Power Mode - SET */


/* Enable */
#define DAC_ENABLE_CLEAR_gc (0x00) /* Enable - CLEAR */
#define DAC_ENABLE_SET_gc   (0x01) /* Enable - SET */


/* Channel Select */
#define DAC_CHSEL_SINGLE_gc (0x00<<5) /* Single channel operation (Channel A only) */
#define DAC_CHSEL_DUAL_gc   (0x02<<5) /* Dual channel operation (S/H on both channels) */


/* Channel 1 Event Trig Enable */
#define DAC_CH1TRIG_CLEAR_gc (0x00) /* Channel 1 Event Trig Enable - CLEAR */
#define DAC_CH1TRIG_SET_gc   (0x02) /* Channel 1 Event Trig Enable - SET */


/* Channel 0 Event Trig Enable */
#define DAC_CH0TRIG_CLEAR_gc (0x00) /* Channel 0 Event Trig Enable - CLEAR */
#define DAC_CH0TRIG_SET_gc   (0x01) /* Channel 0 Event Trig Enable - SET */


/* Reference Select */
#define DAC_REFSEL_INT1V_gc (0x00<<3) /* Internal 1V  */
#define DAC_REFSEL_AVCC_gc  (0x01<<3) /* Analog supply voltage */
#define DAC_REFSEL_AREFA_gc (0x02<<3) /* External reference on AREF on PORTA */
#define DAC_REFSEL_AREFB_gc (0x03<<3) /* External reference on AREF on PORTB */


/* Left-adjust Result */
#define DAC_LEFTADJ_CLEAR_gc (0x00) /* Left-adjust Result - CLEAR */
#define DAC_LEFTADJ_SET_gc   (0x01) /* Left-adjust Result - SET */


/* Event Input Selection */
#define DAC_EVSEL_0_gc (0x00) /* Event Channel 0 */
#define DAC_EVSEL_1_gc (0x01) /* Event Channel 1 */
#define DAC_EVSEL_2_gc (0x02) /* Event Channel 2 */
#define DAC_EVSEL_3_gc (0x03) /* Event Channel 3 */
#define DAC_EVSEL_4_gc (0x04) /* Event Channel 4 */
#define DAC_EVSEL_5_gc (0x05) /* Event Channel 5 */
#define DAC_EVSEL_6_gc (0x06) /* Event Channel 6 */
#define DAC_EVSEL_7_gc (0x07) /* Event Channel 7 */


/* Conversion Intercal */
#define DAC_CONINTVAL_1CLK_gc   (0x00<<4) /* 1 CLK / 2 CLK in S/H mode */
#define DAC_CONINTVAL_2CLK_gc   (0x01<<4) /* 2 CLK / 3 CLK in S/H mode */
#define DAC_CONINTVAL_4CLK_gc   (0x02<<4) /* 4 CLK / 6 CLK in S/H mode */
#define DAC_CONINTVAL_8CLK_gc   (0x03<<4) /* 8 CLK / 12 CLK in S/H mode */
#define DAC_CONINTVAL_16CLK_gc  (0x04<<4) /* 16 CLK / 24 CLK in S/H mode */
#define DAC_CONINTVAL_32CLK_gc  (0x05<<4) /* 32 CLK / 48 CLK in S/H mode */
#define DAC_CONINTVAL_64CLK_gc  (0x06<<4) /* 64 CLK / 96 CLK in S/H mode */
#define DAC_CONINTVAL_128CLK_gc (0x07<<4) /* 128 CLK / 192 CLK in S/H mode */


/* Refresh Timing Control */
#define DAC_REFRESH_16CLK_gc    (0x00) /* 16 CLK */
#define DAC_REFRESH_32CLK_gc    (0x01) /* 32 CLK */
#define DAC_REFRESH_64CLK_gc    (0x02) /* 64 CLK */
#define DAC_REFRESH_128CLK_gc   (0x03) /* 128 CLK */
#define DAC_REFRESH_256CLK_gc   (0x04) /* 256 CLK */
#define DAC_REFRESH_512CLK_gc   (0x05) /* 512 CLK */
#define DAC_REFRESH_1024CLK_gc  (0x06) /* 1024 CLK */
#define DAC_REFRESH_2048CLK_gc  (0x07) /* 2048 CLK */
#define DAC_REFRESH_4096CLK_gc  (0x08) /* 4096 CLK */
#define DAC_REFRESH_8192CLK_gc  (0x09) /* 8192 CLK */
#define DAC_REFRESH_16384CLK_gc (0x0A) /* 16384 CLK */
#define DAC_REFRESH_32768CLK_gc (0x0B) /* 32768 CLK */
#define DAC_REFRESH_65536CLK_gc (0x0C) /* 65536 CLK */
#define DAC_REFRESH_OFF_gc      (0x0F) /* Auto refresh OFF */


/* Channel 1 Data Register Empty */
#define DAC_CH1DRE_CLEAR_gc (0x00) /* Channel 1 Data Register Empty - CLEAR */
#define DAC_CH1DRE_SET_gc   (0x02) /* Channel 1 Data Register Empty - SET */


/* Channel 0 Data Register Empty */
#define DAC_CH0DRE_CLEAR_gc (0x00) /* Channel 0 Data Register Empty - CLEAR */
#define DAC_CH0DRE_SET_gc   (0x01) /* Channel 0 Data Register Empty - SET */


/*
--------------------------------------------------------------------------------
RTC - Real-Time Counter
--------------------------------------------------------------------------------
*/


/* Prescaling Factor */
#define RTC_PRESCALER_OFF_gc     (0x00) /* RTC Off */
#define RTC_PRESCALER_DIV1_gc    (0x01) /* RTC Clock */
#define RTC_PRESCALER_DIV2_gc    (0x02) /* RTC Clock / 2 */
#define RTC_PRESCALER_DIV8_gc    (0x03) /* RTC Clock / 8 */
#define RTC_PRESCALER_DIV16_gc   (0x04) /* RTC Clock / 16 */
#define RTC_PRESCALER_DIV64_gc   (0x05) /* RTC Clock / 64 */
#define RTC_PRESCALER_DIV256_gc  (0x06) /* RTC Clock / 256 */
#define RTC_PRESCALER_DIV1024_gc (0x07) /* RTC Clock / 1024 */


/* Synchronization Busy Flag */
#define RTC_SYNCBUSY_CLEAR_gc (0x00) /* Synchronization Busy Flag - CLEAR */
#define RTC_SYNCBUSY_SET_gc   (0x01) /* Synchronization Busy Flag - SET */


/* Compare Match Interrupt Level */
#define RTC_COMPINTLVL_OFF_gc (0x00<<2) /* Interrupt Disabled */
#define RTC_COMPINTLVL_LO_gc  (0x01<<2) /* Low Level */
#define RTC_COMPINTLVL_MED_gc (0x02<<2) /* Medium Level */
#define RTC_COMPINTLVL_HI_gc  (0x03<<2) /* High Level */


/* Overflow Interrupt Level */
#define RTC_OVFINTLVL_OFF_gc (0x00) /* Interrupt Disabled */
#define RTC_OVFINTLVL_LO_gc  (0x01) /* Low Level */
#define RTC_OVFINTLVL_MED_gc (0x02) /* Medium Level */
#define RTC_OVFINTLVL_HI_gc  (0x03) /* High Level */


/* Compare Match Interrupt Flag */
#define RTC_COMPIF_CLEAR_gc (0x00) /* Compare Match Interrupt Flag - CLEAR */
#define RTC_COMPIF_SET_gc   (0x02) /* Compare Match Interrupt Flag - SET */


/* Overflow Interrupt Flag */
#define RTC_OVFIF_CLEAR_gc (0x00) /* Overflow Interrupt Flag - CLEAR */
#define RTC_OVFIF_SET_gc   (0x01) /* Overflow Interrupt Flag - SET */


/*
--------------------------------------------------------------------------------
TWI - Two-Wire Interface
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
TWI - Two-Wire Interface
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
TWI - Two-Wire Interface
--------------------------------------------------------------------------------
*/


/* Interrupt Level */
#define TWI_MASTER_INTLVL_OFF_gc (0x00<<6) /* Interrupt Disabled */
#define TWI_MASTER_INTLVL_LO_gc  (0x01<<6) /* Low Level */
#define TWI_MASTER_INTLVL_MED_gc (0x02<<6) /* Medium Level */
#define TWI_MASTER_INTLVL_HI_gc  (0x03<<6) /* High Level */


/* Read Interrupt Enable */
#define TWI_MASTER_RIEN_CLEAR_gc (0x00) /* Read Interrupt Enable - CLEAR */
#define TWI_MASTER_RIEN_SET_gc   (0x20) /* Read Interrupt Enable - SET */


/* Write Interrupt Enable */
#define TWI_MASTER_WIEN_CLEAR_gc (0x00) /* Write Interrupt Enable - CLEAR */
#define TWI_MASTER_WIEN_SET_gc   (0x10) /* Write Interrupt Enable - SET */


/* Enable TWI Master */
#define TWI_MASTER_ENABLE_CLEAR_gc (0x00) /* Enable TWI Master - CLEAR */
#define TWI_MASTER_ENABLE_SET_gc   (0x08) /* Enable TWI Master - SET */


/* Inactive Bus timeout */
#define TWI_MASTER_TIMEOUT_DISABLED_gc (0x00<<2) /* Bus Timeout Disabled */
#define TWI_MASTER_TIMEOUT_50US_gc     (0x01<<2) /* 50 Microseconds */
#define TWI_MASTER_TIMEOUT_100US_gc    (0x02<<2) /* 100 Microseconds */
#define TWI_MASTER_TIMEOUT_200US_gc    (0x03<<2) /* 200 Microseconds */


/* Quick Command Enable */
#define TWI_MASTER_QCEN_CLEAR_gc (0x00) /* Quick Command Enable - CLEAR */
#define TWI_MASTER_QCEN_SET_gc   (0x02) /* Quick Command Enable - SET */


/* Smart Mode Enable */
#define TWI_MASTER_SMEN_CLEAR_gc (0x00) /* Smart Mode Enable - CLEAR */
#define TWI_MASTER_SMEN_SET_gc   (0x01) /* Smart Mode Enable - SET */


/* Acknowledge Action */
#define TWI_MASTER_ACKACT_CLEAR_gc (0x00) /* Acknowledge Action - CLEAR */
#define TWI_MASTER_ACKACT_SET_gc   (0x04) /* Acknowledge Action - SET */


/* Command */
#define TWI_MASTER_CMD_NOACT_gc     (0x00) /* No Action */
#define TWI_MASTER_CMD_REPSTART_gc  (0x01) /* Issue Repeated Start Condition */
#define TWI_MASTER_CMD_RECVTRANS_gc (0x02) /* Receive or Transmit Data */
#define TWI_MASTER_CMD_STOP_gc      (0x03) /* Issue Stop Condition */


/* Read Interrupt Flag */
#define TWI_MASTER_RIF_CLEAR_gc (0x00) /* Read Interrupt Flag - CLEAR */
#define TWI_MASTER_RIF_SET_gc   (0x80) /* Read Interrupt Flag - SET */


/* Write Interrupt Flag */
#define TWI_MASTER_WIF_CLEAR_gc (0x00) /* Write Interrupt Flag - CLEAR */
#define TWI_MASTER_WIF_SET_gc   (0x40) /* Write Interrupt Flag - SET */


/* Clock Hold */
#define TWI_MASTER_CLKHOLD_CLEAR_gc (0x00) /* Clock Hold - CLEAR */
#define TWI_MASTER_CLKHOLD_SET_gc   (0x20) /* Clock Hold - SET */


/* Received Acknowledge */
#define TWI_MASTER_RXACK_CLEAR_gc (0x00) /* Received Acknowledge - CLEAR */
#define TWI_MASTER_RXACK_SET_gc   (0x10) /* Received Acknowledge - SET */


/* Arbitration Lost */
#define TWI_MASTER_ARBLOST_CLEAR_gc (0x00) /* Arbitration Lost - CLEAR */
#define TWI_MASTER_ARBLOST_SET_gc   (0x08) /* Arbitration Lost - SET */


/* Bus Error */
#define TWI_MASTER_BUSERR_CLEAR_gc (0x00) /* Bus Error - CLEAR */
#define TWI_MASTER_BUSERR_SET_gc   (0x04) /* Bus Error - SET */


/* Bus State */
#define TWI_MASTER_BUSSTATE_UNKNOWN_gc (0x00) /* Unknown Bus State */
#define TWI_MASTER_BUSSTATE_IDLE_gc    (0x01) /* Bus is Idle */
#define TWI_MASTER_BUSSTATE_OWNER_gc   (0x02) /* This Module Controls The Bus */
#define TWI_MASTER_BUSSTATE_BUSY_gc    (0x03) /* The Bus is Busy */


/* Interrupt Level */
#define TWI_SLAVE_INTLVL_OFF_gc (0x00<<6) /* Interrupt Disabled */
#define TWI_SLAVE_INTLVL_LO_gc  (0x01<<6) /* Low Level */
#define TWI_SLAVE_INTLVL_MED_gc (0x02<<6) /* Medium Level */
#define TWI_SLAVE_INTLVL_HI_gc  (0x03<<6) /* High Level */


/* Data Interrupt Enable */
#define TWI_SLAVE_DIEN_CLEAR_gc (0x00) /* Data Interrupt Enable - CLEAR */
#define TWI_SLAVE_DIEN_SET_gc   (0x20) /* Data Interrupt Enable - SET */


/* Address/Stop Interrupt Enable */
#define TWI_SLAVE_APIEN_CLEAR_gc (0x00) /* Address/Stop Interrupt Enable - CLEAR */
#define TWI_SLAVE_APIEN_SET_gc   (0x10) /* Address/Stop Interrupt Enable - SET */


/* Enable TWI Slave */
#define TWI_SLAVE_ENABLE_CLEAR_gc (0x00) /* Enable TWI Slave - CLEAR */
#define TWI_SLAVE_ENABLE_SET_gc   (0x08) /* Enable TWI Slave - SET */


/* Stop Interrupt Enable */
#define TWI_SLAVE_PIEN_CLEAR_gc (0x00) /* Stop Interrupt Enable - CLEAR */
#define TWI_SLAVE_PIEN_SET_gc   (0x04) /* Stop Interrupt Enable - SET */


/* Promiscuous Mode Enable */
#define TWI_SLAVE_PMEN_CLEAR_gc (0x00) /* Promiscuous Mode Enable - CLEAR */
#define TWI_SLAVE_PMEN_SET_gc   (0x02) /* Promiscuous Mode Enable - SET */


/* Smart Mode Enable */
#define TWI_SLAVE_SMEN_CLEAR_gc (0x00) /* Smart Mode Enable - CLEAR */
#define TWI_SLAVE_SMEN_SET_gc   (0x01) /* Smart Mode Enable - SET */


/* Acknowledge Action */
#define TWI_SLAVE_ACKACT_CLEAR_gc (0x00) /* Acknowledge Action - CLEAR */
#define TWI_SLAVE_ACKACT_SET_gc   (0x04) /* Acknowledge Action - SET */


/* Command */
#define TWI_SLAVE_CMD_NOACT_gc     (0x00) /* No Action */
#define TWI_SLAVE_CMD_COMPTRANS_gc (0x02) /* Used To Complete a Transaction */
#define TWI_SLAVE_CMD_RESPONSE_gc  (0x03) /* Used in Response to Address/Data Interrupt */


/* Data Interrupt Flag */
#define TWI_SLAVE_DIF_CLEAR_gc (0x00) /* Data Interrupt Flag - CLEAR */
#define TWI_SLAVE_DIF_SET_gc   (0x80) /* Data Interrupt Flag - SET */


/* Address/Stop Interrupt Flag */
#define TWI_SLAVE_APIF_CLEAR_gc (0x00) /* Address/Stop Interrupt Flag - CLEAR */
#define TWI_SLAVE_APIF_SET_gc   (0x40) /* Address/Stop Interrupt Flag - SET */


/* Clock Hold */
#define TWI_SLAVE_CLKHOLD_CLEAR_gc (0x00) /* Clock Hold - CLEAR */
#define TWI_SLAVE_CLKHOLD_SET_gc   (0x20) /* Clock Hold - SET */


/* Received Acknowledge */
#define TWI_SLAVE_RXACK_CLEAR_gc (0x00) /* Received Acknowledge - CLEAR */
#define TWI_SLAVE_RXACK_SET_gc   (0x10) /* Received Acknowledge - SET */


/* Collision */
#define TWI_SLAVE_COLL_CLEAR_gc (0x00) /* Collision - CLEAR */
#define TWI_SLAVE_COLL_SET_gc   (0x08) /* Collision - SET */


/* Bus Error */
#define TWI_SLAVE_BUSERR_CLEAR_gc (0x00) /* Bus Error - CLEAR */
#define TWI_SLAVE_BUSERR_SET_gc   (0x04) /* Bus Error - SET */


/* Read/Write Direction */
#define TWI_SLAVE_DIR_CLEAR_gc (0x00) /* Read/Write Direction - CLEAR */
#define TWI_SLAVE_DIR_SET_gc   (0x02) /* Read/Write Direction - SET */


/* Slave Address or Stop */
#define TWI_SLAVE_AP_CLEAR_gc (0x00) /* Slave Address or Stop - CLEAR */
#define TWI_SLAVE_AP_SET_gc   (0x01) /* Slave Address or Stop - SET */


/* Address Mask */
#define TWI_SLAVE_ADDRMASK_ADDRMASK_gc(x) ((x<<1) & 0xFE)

/* Address Enable */
#define TWI_SLAVE_ADDREN_CLEAR_gc (0x00) /* Address Enable - CLEAR */
#define TWI_SLAVE_ADDREN_SET_gc   (0x01) /* Address Enable - SET */


/* SDA Hold Time Enable */
#define TWI_SDAHOLD_OFF_gc   (0x00<<1) /* SDA hold time off */
#define TWI_SDAHOLD_50NS_gc  (0x01<<1) /* Typical 50ns hold time */
#define TWI_SDAHOLD_300NS_gc (0x02<<1) /* Typical 300ns hold time */
#define TWI_SDAHOLD_400NS_gc (0x03<<1) /* Typical 400ns hold time */


/* External Driver Interface Enable */
#define TWI_EDIEN_CLEAR_gc (0x00) /* External Driver Interface Enable - CLEAR */
#define TWI_EDIEN_SET_gc   (0x01) /* External Driver Interface Enable - SET */


/*
--------------------------------------------------------------------------------
PORT - Port Configuration
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
PORT - Port Configuration
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
PORT - Port Configuration
--------------------------------------------------------------------------------
*/


/* Virtual Port 1 Mapping */
#define PORTCFG_VP1MAP_PORTA_gc (0x00<<4) /* Mapped To PORTA */
#define PORTCFG_VP1MAP_PORTB_gc (0x01<<4) /* Mapped To PORTB */
#define PORTCFG_VP1MAP_PORTC_gc (0x02<<4) /* Mapped To PORTC */
#define PORTCFG_VP1MAP_PORTD_gc (0x03<<4) /* Mapped To PORTD */
#define PORTCFG_VP1MAP_PORTE_gc (0x04<<4) /* Mapped To PORTE */
#define PORTCFG_VP1MAP_PORTF_gc (0x05<<4) /* Mapped To PORTF */
#define PORTCFG_VP1MAP_PORTG_gc (0x06<<4) /* Mapped To PORTG */
#define PORTCFG_VP1MAP_PORTH_gc (0x07<<4) /* Mapped To PORTH */
#define PORTCFG_VP1MAP_PORTJ_gc (0x08<<4) /* Mapped To PORTJ */
#define PORTCFG_VP1MAP_PORTK_gc (0x09<<4) /* Mapped To PORTK */
#define PORTCFG_VP1MAP_PORTL_gc (0x0A<<4) /* Mapped To PORTL */
#define PORTCFG_VP1MAP_PORTM_gc (0x0B<<4) /* Mapped To PORTM */
#define PORTCFG_VP1MAP_PORTN_gc (0x0C<<4) /* Mapped To PORTN */
#define PORTCFG_VP1MAP_PORTP_gc (0x0D<<4) /* Mapped To PORTP */
#define PORTCFG_VP1MAP_PORTQ_gc (0x0E<<4) /* Mapped To PORTQ */
#define PORTCFG_VP1MAP_PORTR_gc (0x0F<<4) /* Mapped To PORTR */


/* Virtual Port 0 Mapping */
#define PORTCFG_VP0MAP_PORTA_gc (0x00) /* Mapped To PORTA */
#define PORTCFG_VP0MAP_PORTB_gc (0x01) /* Mapped To PORTB */
#define PORTCFG_VP0MAP_PORTC_gc (0x02) /* Mapped To PORTC */
#define PORTCFG_VP0MAP_PORTD_gc (0x03) /* Mapped To PORTD */
#define PORTCFG_VP0MAP_PORTE_gc (0x04) /* Mapped To PORTE */
#define PORTCFG_VP0MAP_PORTF_gc (0x05) /* Mapped To PORTF */
#define PORTCFG_VP0MAP_PORTG_gc (0x06) /* Mapped To PORTG */
#define PORTCFG_VP0MAP_PORTH_gc (0x07) /* Mapped To PORTH */
#define PORTCFG_VP0MAP_PORTJ_gc (0x08) /* Mapped To PORTJ */
#define PORTCFG_VP0MAP_PORTK_gc (0x09) /* Mapped To PORTK */
#define PORTCFG_VP0MAP_PORTL_gc (0x0A) /* Mapped To PORTL */
#define PORTCFG_VP0MAP_PORTM_gc (0x0B) /* Mapped To PORTM */
#define PORTCFG_VP0MAP_PORTN_gc (0x0C) /* Mapped To PORTN */
#define PORTCFG_VP0MAP_PORTP_gc (0x0D) /* Mapped To PORTP */
#define PORTCFG_VP0MAP_PORTQ_gc (0x0E) /* Mapped To PORTQ */
#define PORTCFG_VP0MAP_PORTR_gc (0x0F) /* Mapped To PORTR */


/* Virtual Port 3 Mapping */
#define PORTCFG_VP3MAP_PORTA_gc (0x00<<4) /* Mapped To PORTA */
#define PORTCFG_VP3MAP_PORTB_gc (0x01<<4) /* Mapped To PORTB */
#define PORTCFG_VP3MAP_PORTC_gc (0x02<<4) /* Mapped To PORTC */
#define PORTCFG_VP3MAP_PORTD_gc (0x03<<4) /* Mapped To PORTD */
#define PORTCFG_VP3MAP_PORTE_gc (0x04<<4) /* Mapped To PORTE */
#define PORTCFG_VP3MAP_PORTF_gc (0x05<<4) /* Mapped To PORTF */
#define PORTCFG_VP3MAP_PORTG_gc (0x06<<4) /* Mapped To PORTG */
#define PORTCFG_VP3MAP_PORTH_gc (0x07<<4) /* Mapped To PORTH */
#define PORTCFG_VP3MAP_PORTJ_gc (0x08<<4) /* Mapped To PORTJ */
#define PORTCFG_VP3MAP_PORTK_gc (0x09<<4) /* Mapped To PORTK */
#define PORTCFG_VP3MAP_PORTL_gc (0x0A<<4) /* Mapped To PORTL */
#define PORTCFG_VP3MAP_PORTM_gc (0x0B<<4) /* Mapped To PORTM */
#define PORTCFG_VP3MAP_PORTN_gc (0x0C<<4) /* Mapped To PORTN */
#define PORTCFG_VP3MAP_PORTP_gc (0x0D<<4) /* Mapped To PORTP */
#define PORTCFG_VP3MAP_PORTQ_gc (0x0E<<4) /* Mapped To PORTQ */
#define PORTCFG_VP3MAP_PORTR_gc (0x0F<<4) /* Mapped To PORTR */


/* Virtual Port 2 Mapping */
#define PORTCFG_VP2MAP_PORTA_gc (0x00) /* Mapped To PORTA */
#define PORTCFG_VP2MAP_PORTB_gc (0x01) /* Mapped To PORTB */
#define PORTCFG_VP2MAP_PORTC_gc (0x02) /* Mapped To PORTC */
#define PORTCFG_VP2MAP_PORTD_gc (0x03) /* Mapped To PORTD */
#define PORTCFG_VP2MAP_PORTE_gc (0x04) /* Mapped To PORTE */
#define PORTCFG_VP2MAP_PORTF_gc (0x05) /* Mapped To PORTF */
#define PORTCFG_VP2MAP_PORTG_gc (0x06) /* Mapped To PORTG */
#define PORTCFG_VP2MAP_PORTH_gc (0x07) /* Mapped To PORTH */
#define PORTCFG_VP2MAP_PORTJ_gc (0x08) /* Mapped To PORTJ */
#define PORTCFG_VP2MAP_PORTK_gc (0x09) /* Mapped To PORTK */
#define PORTCFG_VP2MAP_PORTL_gc (0x0A) /* Mapped To PORTL */
#define PORTCFG_VP2MAP_PORTM_gc (0x0B) /* Mapped To PORTM */
#define PORTCFG_VP2MAP_PORTN_gc (0x0C) /* Mapped To PORTN */
#define PORTCFG_VP2MAP_PORTP_gc (0x0D) /* Mapped To PORTP */
#define PORTCFG_VP2MAP_PORTQ_gc (0x0E) /* Mapped To PORTQ */
#define PORTCFG_VP2MAP_PORTR_gc (0x0F) /* Mapped To PORTR */


/* Clock Output Port */
#define PORTCFG_CLKOUT_OFF_gc (0x00) /* Clock Output Disabled */
#define PORTCFG_CLKOUT_PC7_gc (0x01) /* Clock Output on Port C pin 7 */
#define PORTCFG_CLKOUT_PD7_gc (0x02) /* Clock Output on Port D pin 7 */
#define PORTCFG_CLKOUT_PE7_gc (0x03) /* Clock Output on Port E pin 7 */


/* Event Output Port */
#define PORTCFG_EVOUT_OFF_gc (0x00<<4) /* Event Output Disabled */
#define PORTCFG_EVOUT_PC7_gc (0x01<<4) /* Event Channel 7 Output on Port C pin 7 */
#define PORTCFG_EVOUT_PD7_gc (0x02<<4) /* Event Channel 7 Output on Port D pin 7 */
#define PORTCFG_EVOUT_PE7_gc (0x03<<4) /* Event Channel 7 Output on Port E pin 7 */


/* Port Interrupt 1 Flag */
#define VPORT_INT1IF_CLEAR_gc (0x00) /* Port Interrupt 1 Flag - CLEAR */
#define VPORT_INT1IF_SET_gc   (0x02) /* Port Interrupt 1 Flag - SET */


/* Port Interrupt 0 Flag */
#define VPORT_INT0IF_CLEAR_gc (0x00) /* Port Interrupt 0 Flag - CLEAR */
#define VPORT_INT0IF_SET_gc   (0x01) /* Port Interrupt 0 Flag - SET */


/* Port Interrupt 1 Level */
#define PORT_INT1LVL_OFF_gc (0x00<<2) /* Interrupt Disabled */
#define PORT_INT1LVL_LO_gc  (0x01<<2) /* Low Level */
#define PORT_INT1LVL_MED_gc (0x02<<2) /* Medium Level */
#define PORT_INT1LVL_HI_gc  (0x03<<2) /* High Level */


/* Port Interrupt 0 Level */
#define PORT_INT0LVL_OFF_gc (0x00) /* Interrupt Disabled */
#define PORT_INT0LVL_LO_gc  (0x01) /* Low Level */
#define PORT_INT0LVL_MED_gc (0x02) /* Medium Level */
#define PORT_INT0LVL_HI_gc  (0x03) /* High Level */


/* Port Interrupt 1 Flag */
#define PORT_INT1IF_CLEAR_gc (0x00) /* Port Interrupt 1 Flag - CLEAR */
#define PORT_INT1IF_SET_gc   (0x02) /* Port Interrupt 1 Flag - SET */


/* Port Interrupt 0 Flag */
#define PORT_INT0IF_CLEAR_gc (0x00) /* Port Interrupt 0 Flag - CLEAR */
#define PORT_INT0IF_SET_gc   (0x01) /* Port Interrupt 0 Flag - SET */


/* Slew Rate Enable */
#define PORT_SRLEN_CLEAR_gc (0x00) /* Slew Rate Enable - CLEAR */
#define PORT_SRLEN_SET_gc   (0x80) /* Slew Rate Enable - SET */


/* Inverted I/O Enable */
#define PORT_INVEN_CLEAR_gc (0x00) /* Inverted I/O Enable - CLEAR */
#define PORT_INVEN_SET_gc   (0x40) /* Inverted I/O Enable - SET */


/* Output/Pull Configuration */
#define PORT_OPC_TOTEM_gc        (0x00<<3) /* Totempole */
#define PORT_OPC_BUSKEEPER_gc    (0x01<<3) /* Totempole w/ Bus keeper on Input and Output */
#define PORT_OPC_PULLDOWN_gc     (0x02<<3) /* Totempole w/ Pull-down on Input */
#define PORT_OPC_PULLUP_gc       (0x03<<3) /* Totempole w/ Pull-up on Input */
#define PORT_OPC_WIREDOR_gc      (0x04<<3) /* Wired OR */
#define PORT_OPC_WIREDAND_gc     (0x05<<3) /* Wired AND */
#define PORT_OPC_WIREDORPULL_gc  (0x06<<3) /* Wired OR w/ Pull-down */
#define PORT_OPC_WIREDANDPULL_gc (0x07<<3) /* Wired AND w/ Pull-up */


/* Input/Sense Configuration */
#define PORT_ISC_BOTHEDGES_gc     (0x00) /* Sense Both Edges */
#define PORT_ISC_RISING_gc        (0x01) /* Sense Rising Edge */
#define PORT_ISC_FALLING_gc       (0x02) /* Sense Falling Edge */
#define PORT_ISC_LEVEL_gc         (0x03) /* Sense Level (Transparent For Events) */
#define PORT_ISC_INPUT_DISABLE_gc (0x07) /* Disable Digital Input Buffer */


/* Slew Rate Enable */
/* PORT_SRLEN_CLEAR_gc ALREADY DEFINED */
/* PORT_SRLEN_SET_gc ALREADY DEFINED */


/* Inverted I/O Enable */
/* PORT_INVEN_CLEAR_gc ALREADY DEFINED */
/* PORT_INVEN_SET_gc ALREADY DEFINED */


/* Output/Pull Configuration */
/* PORT_OPC_TOTEM_gc ALREADY DEFINED */
/* PORT_OPC_BUSKEEPER_gc ALREADY DEFINED */
/* PORT_OPC_PULLDOWN_gc ALREADY DEFINED */
/* PORT_OPC_PULLUP_gc ALREADY DEFINED */
/* PORT_OPC_WIREDOR_gc ALREADY DEFINED */
/* PORT_OPC_WIREDAND_gc ALREADY DEFINED */
/* PORT_OPC_WIREDORPULL_gc ALREADY DEFINED */
/* PORT_OPC_WIREDANDPULL_gc ALREADY DEFINED */


/* Input/Sense Configuration */
/* PORT_ISC_BOTHEDGES_gc ALREADY DEFINED */
/* PORT_ISC_RISING_gc ALREADY DEFINED */
/* PORT_ISC_FALLING_gc ALREADY DEFINED */
/* PORT_ISC_LEVEL_gc ALREADY DEFINED */
/* PORT_ISC_INPUT_DISABLE_gc ALREADY DEFINED */


/* Slew Rate Enable */
/* PORT_SRLEN_CLEAR_gc ALREADY DEFINED */
/* PORT_SRLEN_SET_gc ALREADY DEFINED */


/* Inverted I/O Enable */
/* PORT_INVEN_CLEAR_gc ALREADY DEFINED */
/* PORT_INVEN_SET_gc ALREADY DEFINED */


/* Output/Pull Configuration */
/* PORT_OPC_TOTEM_gc ALREADY DEFINED */
/* PORT_OPC_BUSKEEPER_gc ALREADY DEFINED */
/* PORT_OPC_PULLDOWN_gc ALREADY DEFINED */
/* PORT_OPC_PULLUP_gc ALREADY DEFINED */
/* PORT_OPC_WIREDOR_gc ALREADY DEFINED */
/* PORT_OPC_WIREDAND_gc ALREADY DEFINED */
/* PORT_OPC_WIREDORPULL_gc ALREADY DEFINED */
/* PORT_OPC_WIREDANDPULL_gc ALREADY DEFINED */


/* Input/Sense Configuration */
/* PORT_ISC_BOTHEDGES_gc ALREADY DEFINED */
/* PORT_ISC_RISING_gc ALREADY DEFINED */
/* PORT_ISC_FALLING_gc ALREADY DEFINED */
/* PORT_ISC_LEVEL_gc ALREADY DEFINED */
/* PORT_ISC_INPUT_DISABLE_gc ALREADY DEFINED */


/* Slew Rate Enable */
/* PORT_SRLEN_CLEAR_gc ALREADY DEFINED */
/* PORT_SRLEN_SET_gc ALREADY DEFINED */


/* Inverted I/O Enable */
/* PORT_INVEN_CLEAR_gc ALREADY DEFINED */
/* PORT_INVEN_SET_gc ALREADY DEFINED */


/* Output/Pull Configuration */
/* PORT_OPC_TOTEM_gc ALREADY DEFINED */
/* PORT_OPC_BUSKEEPER_gc ALREADY DEFINED */
/* PORT_OPC_PULLDOWN_gc ALREADY DEFINED */
/* PORT_OPC_PULLUP_gc ALREADY DEFINED */
/* PORT_OPC_WIREDOR_gc ALREADY DEFINED */
/* PORT_OPC_WIREDAND_gc ALREADY DEFINED */
/* PORT_OPC_WIREDORPULL_gc ALREADY DEFINED */
/* PORT_OPC_WIREDANDPULL_gc ALREADY DEFINED */


/* Input/Sense Configuration */
/* PORT_ISC_BOTHEDGES_gc ALREADY DEFINED */
/* PORT_ISC_RISING_gc ALREADY DEFINED */
/* PORT_ISC_FALLING_gc ALREADY DEFINED */
/* PORT_ISC_LEVEL_gc ALREADY DEFINED */
/* PORT_ISC_INPUT_DISABLE_gc ALREADY DEFINED */


/* Slew Rate Enable */
/* PORT_SRLEN_CLEAR_gc ALREADY DEFINED */
/* PORT_SRLEN_SET_gc ALREADY DEFINED */


/* Inverted I/O Enable */
/* PORT_INVEN_CLEAR_gc ALREADY DEFINED */
/* PORT_INVEN_SET_gc ALREADY DEFINED */


/* Output/Pull Configuration */
/* PORT_OPC_TOTEM_gc ALREADY DEFINED */
/* PORT_OPC_BUSKEEPER_gc ALREADY DEFINED */
/* PORT_OPC_PULLDOWN_gc ALREADY DEFINED */
/* PORT_OPC_PULLUP_gc ALREADY DEFINED */
/* PORT_OPC_WIREDOR_gc ALREADY DEFINED */
/* PORT_OPC_WIREDAND_gc ALREADY DEFINED */
/* PORT_OPC_WIREDORPULL_gc ALREADY DEFINED */
/* PORT_OPC_WIREDANDPULL_gc ALREADY DEFINED */


/* Input/Sense Configuration */
/* PORT_ISC_BOTHEDGES_gc ALREADY DEFINED */
/* PORT_ISC_RISING_gc ALREADY DEFINED */
/* PORT_ISC_FALLING_gc ALREADY DEFINED */
/* PORT_ISC_LEVEL_gc ALREADY DEFINED */
/* PORT_ISC_INPUT_DISABLE_gc ALREADY DEFINED */


/* Slew Rate Enable */
/* PORT_SRLEN_CLEAR_gc ALREADY DEFINED */
/* PORT_SRLEN_SET_gc ALREADY DEFINED */


/* Inverted I/O Enable */
/* PORT_INVEN_CLEAR_gc ALREADY DEFINED */
/* PORT_INVEN_SET_gc ALREADY DEFINED */


/* Output/Pull Configuration */
/* PORT_OPC_TOTEM_gc ALREADY DEFINED */
/* PORT_OPC_BUSKEEPER_gc ALREADY DEFINED */
/* PORT_OPC_PULLDOWN_gc ALREADY DEFINED */
/* PORT_OPC_PULLUP_gc ALREADY DEFINED */
/* PORT_OPC_WIREDOR_gc ALREADY DEFINED */
/* PORT_OPC_WIREDAND_gc ALREADY DEFINED */
/* PORT_OPC_WIREDORPULL_gc ALREADY DEFINED */
/* PORT_OPC_WIREDANDPULL_gc ALREADY DEFINED */


/* Input/Sense Configuration */
/* PORT_ISC_BOTHEDGES_gc ALREADY DEFINED */
/* PORT_ISC_RISING_gc ALREADY DEFINED */
/* PORT_ISC_FALLING_gc ALREADY DEFINED */
/* PORT_ISC_LEVEL_gc ALREADY DEFINED */
/* PORT_ISC_INPUT_DISABLE_gc ALREADY DEFINED */


/* Slew Rate Enable */
/* PORT_SRLEN_CLEAR_gc ALREADY DEFINED */
/* PORT_SRLEN_SET_gc ALREADY DEFINED */


/* Inverted I/O Enable */
/* PORT_INVEN_CLEAR_gc ALREADY DEFINED */
/* PORT_INVEN_SET_gc ALREADY DEFINED */


/* Output/Pull Configuration */
/* PORT_OPC_TOTEM_gc ALREADY DEFINED */
/* PORT_OPC_BUSKEEPER_gc ALREADY DEFINED */
/* PORT_OPC_PULLDOWN_gc ALREADY DEFINED */
/* PORT_OPC_PULLUP_gc ALREADY DEFINED */
/* PORT_OPC_WIREDOR_gc ALREADY DEFINED */
/* PORT_OPC_WIREDAND_gc ALREADY DEFINED */
/* PORT_OPC_WIREDORPULL_gc ALREADY DEFINED */
/* PORT_OPC_WIREDANDPULL_gc ALREADY DEFINED */


/* Input/Sense Configuration */
/* PORT_ISC_BOTHEDGES_gc ALREADY DEFINED */
/* PORT_ISC_RISING_gc ALREADY DEFINED */
/* PORT_ISC_FALLING_gc ALREADY DEFINED */
/* PORT_ISC_LEVEL_gc ALREADY DEFINED */
/* PORT_ISC_INPUT_DISABLE_gc ALREADY DEFINED */


/* Slew Rate Enable */
/* PORT_SRLEN_CLEAR_gc ALREADY DEFINED */
/* PORT_SRLEN_SET_gc ALREADY DEFINED */


/* Inverted I/O Enable */
/* PORT_INVEN_CLEAR_gc ALREADY DEFINED */
/* PORT_INVEN_SET_gc ALREADY DEFINED */


/* Output/Pull Configuration */
/* PORT_OPC_TOTEM_gc ALREADY DEFINED */
/* PORT_OPC_BUSKEEPER_gc ALREADY DEFINED */
/* PORT_OPC_PULLDOWN_gc ALREADY DEFINED */
/* PORT_OPC_PULLUP_gc ALREADY DEFINED */
/* PORT_OPC_WIREDOR_gc ALREADY DEFINED */
/* PORT_OPC_WIREDAND_gc ALREADY DEFINED */
/* PORT_OPC_WIREDORPULL_gc ALREADY DEFINED */
/* PORT_OPC_WIREDANDPULL_gc ALREADY DEFINED */


/* Input/Sense Configuration */
/* PORT_ISC_BOTHEDGES_gc ALREADY DEFINED */
/* PORT_ISC_RISING_gc ALREADY DEFINED */
/* PORT_ISC_FALLING_gc ALREADY DEFINED */
/* PORT_ISC_LEVEL_gc ALREADY DEFINED */
/* PORT_ISC_INPUT_DISABLE_gc ALREADY DEFINED */


/*
--------------------------------------------------------------------------------
TC - 16-bit Timer/Counter With PWM
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
TC - 16-bit Timer/Counter With PWM
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
TC - 16-bit Timer/Counter With PWM
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
TC - 16-bit Timer/Counter With PWM
--------------------------------------------------------------------------------
*/


/* Clock Selection */
#define TC0_CLKSEL_OFF_gc     (0x00) /* Timer Off */
#define TC0_CLKSEL_DIV1_gc    (0x01) /* System Clock */
#define TC0_CLKSEL_DIV2_gc    (0x02) /* System Clock / 2 */
#define TC0_CLKSEL_DIV4_gc    (0x03) /* System Clock / 4 */
#define TC0_CLKSEL_DIV8_gc    (0x04) /* System Clock / 8 */
#define TC0_CLKSEL_DIV64_gc   (0x05) /* System Clock / 64 */
#define TC0_CLKSEL_DIV256_gc  (0x06) /* System Clock / 256 */
#define TC0_CLKSEL_DIV1024_gc (0x07) /* System Clock / 1024 */
#define TC0_CLKSEL_EVCH0_gc   (0x08) /* Event Channel 0 */
#define TC0_CLKSEL_EVCH1_gc   (0x09) /* Event Channel 1 */
#define TC0_CLKSEL_EVCH2_gc   (0x0A) /* Event Channel 2 */
#define TC0_CLKSEL_EVCH3_gc   (0x0B) /* Event Channel 3 */
#define TC0_CLKSEL_EVCH4_gc   (0x0C) /* Event Channel 4 */
#define TC0_CLKSEL_EVCH5_gc   (0x0D) /* Event Channel 5 */
#define TC0_CLKSEL_EVCH6_gc   (0x0E) /* Event Channel 6 */
#define TC0_CLKSEL_EVCH7_gc   (0x0F) /* Event Channel 7 */


/* Compare or Capture D Enable */
#define TC0_CCDEN_CLEAR_gc (0x00) /* Compare or Capture D Enable - CLEAR */
#define TC0_CCDEN_SET_gc   (0x80) /* Compare or Capture D Enable - SET */


/* Compare or Capture C Enable */
#define TC0_CCCEN_CLEAR_gc (0x00) /* Compare or Capture C Enable - CLEAR */
#define TC0_CCCEN_SET_gc   (0x40) /* Compare or Capture C Enable - SET */


/* Compare or Capture B Enable */
#define TC0_CCBEN_CLEAR_gc (0x00) /* Compare or Capture B Enable - CLEAR */
#define TC0_CCBEN_SET_gc   (0x20) /* Compare or Capture B Enable - SET */


/* Compare or Capture A Enable */
#define TC0_CCAEN_CLEAR_gc (0x00) /* Compare or Capture A Enable - CLEAR */
#define TC0_CCAEN_SET_gc   (0x10) /* Compare or Capture A Enable - SET */


/* Waveform generation mode */
#define TC0_WGMODE_NORMAL_gc (0x00) /* Normal Mode */
#define TC0_WGMODE_FRQ_gc    (0x01) /* Frequency Generation Mode */
#define TC0_WGMODE_SS_gc     (0x03) /* Single Slope */
#define TC0_WGMODE_DS_T_gc   (0x05) /* Dual Slope, Update on TOP */
#define TC0_WGMODE_DS_TB_gc  (0x06) /* Dual Slope, Update on TOP and BOTTOM */
#define TC0_WGMODE_DS_B_gc   (0x07) /* Dual Slope, Update on BOTTOM */


/* Compare D Output Value */
#define TC0_CMPD_CLEAR_gc (0x00) /* Compare D Output Value - CLEAR */
#define TC0_CMPD_SET_gc   (0x08) /* Compare D Output Value - SET */


/* Compare C Output Value */
#define TC0_CMPC_CLEAR_gc (0x00) /* Compare C Output Value - CLEAR */
#define TC0_CMPC_SET_gc   (0x04) /* Compare C Output Value - SET */


/* Compare B Output Value */
#define TC0_CMPB_CLEAR_gc (0x00) /* Compare B Output Value - CLEAR */
#define TC0_CMPB_SET_gc   (0x02) /* Compare B Output Value - SET */


/* Compare A Output Value */
#define TC0_CMPA_CLEAR_gc (0x00) /* Compare A Output Value - CLEAR */
#define TC0_CMPA_SET_gc   (0x01) /* Compare A Output Value - SET */


/* Event Action */
#define TC0_EVACT_OFF_gc     (0x00<<5) /* No Event Action */
#define TC0_EVACT_CAPT_gc    (0x01<<5) /* Input Capture */
#define TC0_EVACT_UPDOWN_gc  (0x02<<5) /* Externally Controlled Up/Down Count */
#define TC0_EVACT_QDEC_gc    (0x03<<5) /* Quadrature Decode */
#define TC0_EVACT_RESTART_gc (0x04<<5) /* Restart */
#define TC0_EVACT_FRQ_gc     (0x05<<5) /* Frequency Capture */
#define TC0_EVACT_PW_gc      (0x06<<5) /* Pulse-width Capture */


/* Event Delay */
#define TC0_EVDLY_CLEAR_gc (0x00) /* Event Delay - CLEAR */
#define TC0_EVDLY_SET_gc   (0x10) /* Event Delay - SET */


/* Event Source Select */
#define TC0_EVSEL_OFF_gc (0x00) /* No Event Source */
#define TC0_EVSEL_CH0_gc (0x08) /* Event Channel 0 */
#define TC0_EVSEL_CH1_gc (0x09) /* Event Channel 1 */
#define TC0_EVSEL_CH2_gc (0x0A) /* Event Channel 2 */
#define TC0_EVSEL_CH3_gc (0x0B) /* Event Channel 3 */
#define TC0_EVSEL_CH4_gc (0x0C) /* Event Channel 4 */
#define TC0_EVSEL_CH5_gc (0x0D) /* Event Channel 5 */
#define TC0_EVSEL_CH6_gc (0x0E) /* Event Channel 6 */
#define TC0_EVSEL_CH7_gc (0x0F) /* Event Channel 7 */


/* Byte Mode */
#define TC0_BYTEM_CLEAR_gc (0x00) /* Byte Mode - CLEAR */
#define TC0_BYTEM_SET_gc   (0x01) /* Byte Mode - SET */


/* Error Interrupt Level */
#define TC0_ERRINTLVL_OFF_gc (0x00<<2) /* Interrupt Disabled */
#define TC0_ERRINTLVL_LO_gc  (0x01<<2) /* Low Level */
#define TC0_ERRINTLVL_MED_gc (0x02<<2) /* Medium Level */
#define TC0_ERRINTLVL_HI_gc  (0x03<<2) /* High Level */


/* Overflow interrupt level */
#define TC0_OVFINTLVL_OFF_gc (0x00) /* Interrupt Disabled */
#define TC0_OVFINTLVL_LO_gc  (0x01) /* Low Level */
#define TC0_OVFINTLVL_MED_gc (0x02) /* Medium Level */
#define TC0_OVFINTLVL_HI_gc  (0x03) /* High Level */


/* Compare or Capture D Interrupt Level */
#define TC0_CCDINTLVL_OFF_gc (0x00<<6) /* Interrupt Disabled */
#define TC0_CCDINTLVL_LO_gc  (0x01<<6) /* Low Level */
#define TC0_CCDINTLVL_MED_gc (0x02<<6) /* Medium Level */
#define TC0_CCDINTLVL_HI_gc  (0x03<<6) /* High Level */


/* Compare or Capture C Interrupt Level */
#define TC0_CCCINTLVL_OFF_gc (0x00<<4) /* Interrupt Disabled */
#define TC0_CCCINTLVL_LO_gc  (0x01<<4) /* Low Level */
#define TC0_CCCINTLVL_MED_gc (0x02<<4) /* Medium Level */
#define TC0_CCCINTLVL_HI_gc  (0x03<<4) /* High Level */


/* Compare or Capture B Interrupt Level */
#define TC0_CCBINTLVL_OFF_gc (0x00<<2) /* Interrupt Disabled */
#define TC0_CCBINTLVL_LO_gc  (0x01<<2) /* Low Level */
#define TC0_CCBINTLVL_MED_gc (0x02<<2) /* Medium Level */
#define TC0_CCBINTLVL_HI_gc  (0x03<<2) /* High Level */


/* Compare or Capture A Interrupt Level */
#define TC0_CCAINTLVL_OFF_gc (0x00) /* Interrupt Disabled */
#define TC0_CCAINTLVL_LO_gc  (0x01) /* Low Level */
#define TC0_CCAINTLVL_MED_gc (0x02) /* Medium Level */
#define TC0_CCAINTLVL_HI_gc  (0x03) /* High Level */


/* Command */
#define TC0_CTRLFCLR_CMD_gc(x) ((x<<2) & 0x0C)

/* Lock Update */
#define TC0_LUPD_CLEAR_gc (0x00) /* Lock Update - CLEAR */
#define TC0_LUPD_SET_gc   (0x02) /* Lock Update - SET */


/* Direction */
#define TC0_DIR_CLEAR_gc (0x00) /* Direction - CLEAR */
#define TC0_DIR_SET_gc   (0x01) /* Direction - SET */


/* Command */
#define TC0_CMD_NONE_gc    (0x00<<2) /* No Command */
#define TC0_CMD_UPDATE_gc  (0x01<<2) /* Force Update */
#define TC0_CMD_RESTART_gc (0x02<<2) /* Force Restart */
#define TC0_CMD_RESET_gc   (0x03<<2) /* Force Hard Reset */


/* Lock Update */
/* TC0_LUPD_CLEAR_gc ALREADY DEFINED */
/* TC0_LUPD_SET_gc ALREADY DEFINED */


/* Direction */
/* TC0_DIR_CLEAR_gc ALREADY DEFINED */
/* TC0_DIR_SET_gc ALREADY DEFINED */


/* Compare or Capture D Buffer Valid */
#define TC0_CCDBV_CLEAR_gc (0x00) /* Compare or Capture D Buffer Valid - CLEAR */
#define TC0_CCDBV_SET_gc   (0x10) /* Compare or Capture D Buffer Valid - SET */


/* Compare or Capture C Buffer Valid */
#define TC0_CCCBV_CLEAR_gc (0x00) /* Compare or Capture C Buffer Valid - CLEAR */
#define TC0_CCCBV_SET_gc   (0x08) /* Compare or Capture C Buffer Valid - SET */


/* Compare or Capture B Buffer Valid */
#define TC0_CCBBV_CLEAR_gc (0x00) /* Compare or Capture B Buffer Valid - CLEAR */
#define TC0_CCBBV_SET_gc   (0x04) /* Compare or Capture B Buffer Valid - SET */


/* Compare or Capture A Buffer Valid */
#define TC0_CCABV_CLEAR_gc (0x00) /* Compare or Capture A Buffer Valid - CLEAR */
#define TC0_CCABV_SET_gc   (0x02) /* Compare or Capture A Buffer Valid - SET */


/* Period Buffer Valid */
#define TC0_PERBV_CLEAR_gc (0x00) /* Period Buffer Valid - CLEAR */
#define TC0_PERBV_SET_gc   (0x01) /* Period Buffer Valid - SET */


/* Compare or Capture D Buffer Valid */
/* TC0_CCDBV_CLEAR_gc ALREADY DEFINED */
/* TC0_CCDBV_SET_gc ALREADY DEFINED */


/* Compare or Capture C Buffer Valid */
/* TC0_CCCBV_CLEAR_gc ALREADY DEFINED */
/* TC0_CCCBV_SET_gc ALREADY DEFINED */


/* Compare or Capture B Buffer Valid */
/* TC0_CCBBV_CLEAR_gc ALREADY DEFINED */
/* TC0_CCBBV_SET_gc ALREADY DEFINED */


/* Compare or Capture A Buffer Valid */
/* TC0_CCABV_CLEAR_gc ALREADY DEFINED */
/* TC0_CCABV_SET_gc ALREADY DEFINED */


/* Period Buffer Valid */
/* TC0_PERBV_CLEAR_gc ALREADY DEFINED */
/* TC0_PERBV_SET_gc ALREADY DEFINED */


/* Compare or Capture D Interrupt Flag */
#define TC0_CCDIF_CLEAR_gc (0x00) /* Compare or Capture D Interrupt Flag - CLEAR */
#define TC0_CCDIF_SET_gc   (0x80) /* Compare or Capture D Interrupt Flag - SET */


/* Compare or Capture C Interrupt Flag */
#define TC0_CCCIF_CLEAR_gc (0x00) /* Compare or Capture C Interrupt Flag - CLEAR */
#define TC0_CCCIF_SET_gc   (0x40) /* Compare or Capture C Interrupt Flag - SET */


/* Compare or Capture B Interrupt Flag */
#define TC0_CCBIF_CLEAR_gc (0x00) /* Compare or Capture B Interrupt Flag - CLEAR */
#define TC0_CCBIF_SET_gc   (0x20) /* Compare or Capture B Interrupt Flag - SET */


/* Compare or Capture A Interrupt Flag */
#define TC0_CCAIF_CLEAR_gc (0x00) /* Compare or Capture A Interrupt Flag - CLEAR */
#define TC0_CCAIF_SET_gc   (0x10) /* Compare or Capture A Interrupt Flag - SET */


/* Error Interrupt Flag */
#define TC0_ERRIF_CLEAR_gc (0x00) /* Error Interrupt Flag - CLEAR */
#define TC0_ERRIF_SET_gc   (0x02) /* Error Interrupt Flag - SET */


/* Overflow Interrupt Flag */
#define TC0_OVFIF_CLEAR_gc (0x00) /* Overflow Interrupt Flag - CLEAR */
#define TC0_OVFIF_SET_gc   (0x01) /* Overflow Interrupt Flag - SET */


/* Clock Selection */
#define TC1_CLKSEL_OFF_gc     (0x00) /* Timer Off */
#define TC1_CLKSEL_DIV1_gc    (0x01) /* System Clock */
#define TC1_CLKSEL_DIV2_gc    (0x02) /* System Clock / 2 */
#define TC1_CLKSEL_DIV4_gc    (0x03) /* System Clock / 4 */
#define TC1_CLKSEL_DIV8_gc    (0x04) /* System Clock / 8 */
#define TC1_CLKSEL_DIV64_gc   (0x05) /* System Clock / 64 */
#define TC1_CLKSEL_DIV256_gc  (0x06) /* System Clock / 256 */
#define TC1_CLKSEL_DIV1024_gc (0x07) /* System Clock / 1024 */
#define TC1_CLKSEL_EVCH0_gc   (0x08) /* Event Channel 0 */
#define TC1_CLKSEL_EVCH1_gc   (0x09) /* Event Channel 1 */
#define TC1_CLKSEL_EVCH2_gc   (0x0A) /* Event Channel 2 */
#define TC1_CLKSEL_EVCH3_gc   (0x0B) /* Event Channel 3 */
#define TC1_CLKSEL_EVCH4_gc   (0x0C) /* Event Channel 4 */
#define TC1_CLKSEL_EVCH5_gc   (0x0D) /* Event Channel 5 */
#define TC1_CLKSEL_EVCH6_gc   (0x0E) /* Event Channel 6 */
#define TC1_CLKSEL_EVCH7_gc   (0x0F) /* Event Channel 7 */


/* Compare or Capture B Enable */
#define TC1_CCBEN_CLEAR_gc (0x00) /* Compare or Capture B Enable - CLEAR */
#define TC1_CCBEN_SET_gc   (0x20) /* Compare or Capture B Enable - SET */


/* Compare or Capture A Enable */
#define TC1_CCAEN_CLEAR_gc (0x00) /* Compare or Capture A Enable - CLEAR */
#define TC1_CCAEN_SET_gc   (0x10) /* Compare or Capture A Enable - SET */


/* Waveform generation mode */
#define TC1_WGMODE_NORMAL_gc (0x00) /* Normal Mode */
#define TC1_WGMODE_FRQ_gc    (0x01) /* Frequency Generation Mode */
#define TC1_WGMODE_SS_gc     (0x03) /* Single Slope */
#define TC1_WGMODE_DS_T_gc   (0x05) /* Dual Slope, Update on TOP */
#define TC1_WGMODE_DS_TB_gc  (0x06) /* Dual Slope, Update on TOP and BOTTOM */
#define TC1_WGMODE_DS_B_gc   (0x07) /* Dual Slope, Update on BOTTOM */


/* Compare B Output Value */
#define TC1_CMPB_CLEAR_gc (0x00) /* Compare B Output Value - CLEAR */
#define TC1_CMPB_SET_gc   (0x02) /* Compare B Output Value - SET */


/* Compare A Output Value */
#define TC1_CMPA_CLEAR_gc (0x00) /* Compare A Output Value - CLEAR */
#define TC1_CMPA_SET_gc   (0x01) /* Compare A Output Value - SET */


/* Event Action */
#define TC1_EVACT_OFF_gc     (0x00<<5) /* No Event Action */
#define TC1_EVACT_CAPT_gc    (0x01<<5) /* Input Capture */
#define TC1_EVACT_UPDOWN_gc  (0x02<<5) /* Externally Controlled Up/Down Count */
#define TC1_EVACT_QDEC_gc    (0x03<<5) /* Quadrature Decode */
#define TC1_EVACT_RESTART_gc (0x04<<5) /* Restart */
#define TC1_EVACT_FRQ_gc     (0x05<<5) /* Frequency Capture */
#define TC1_EVACT_PW_gc      (0x06<<5) /* Pulse-width Capture */


/* Event Delay */
#define TC1_EVDLY_CLEAR_gc (0x00) /* Event Delay - CLEAR */
#define TC1_EVDLY_SET_gc   (0x10) /* Event Delay - SET */


/* Event Source Select */
#define TC1_EVSEL_OFF_gc (0x00) /* No Event Source */
#define TC1_EVSEL_CH0_gc (0x08) /* Event Channel 0 */
#define TC1_EVSEL_CH1_gc (0x09) /* Event Channel 1 */
#define TC1_EVSEL_CH2_gc (0x0A) /* Event Channel 2 */
#define TC1_EVSEL_CH3_gc (0x0B) /* Event Channel 3 */
#define TC1_EVSEL_CH4_gc (0x0C) /* Event Channel 4 */
#define TC1_EVSEL_CH5_gc (0x0D) /* Event Channel 5 */
#define TC1_EVSEL_CH6_gc (0x0E) /* Event Channel 6 */
#define TC1_EVSEL_CH7_gc (0x0F) /* Event Channel 7 */


/* Byte Mode */
#define TC1_BYTEM_CLEAR_gc (0x00) /* Byte Mode - CLEAR */
#define TC1_BYTEM_SET_gc   (0x01) /* Byte Mode - SET */


/* Error Interrupt Level */
#define TC1_ERRINTLVL_OFF_gc (0x00<<2) /* Interrupt Disabled */
#define TC1_ERRINTLVL_LO_gc  (0x01<<2) /* Low Level */
#define TC1_ERRINTLVL_MED_gc (0x02<<2) /* Medium Level */
#define TC1_ERRINTLVL_HI_gc  (0x03<<2) /* High Level */


/* Overflow interrupt level */
#define TC1_OVFINTLVL_OFF_gc (0x00) /* Interrupt Disabled */
#define TC1_OVFINTLVL_LO_gc  (0x01) /* Low Level */
#define TC1_OVFINTLVL_MED_gc (0x02) /* Medium Level */
#define TC1_OVFINTLVL_HI_gc  (0x03) /* High Level */


/* Compare or Capture B Interrupt Level */
#define TC1_CCBINTLVL_OFF_gc (0x00<<2) /* Interrupt Disabled */
#define TC1_CCBINTLVL_LO_gc  (0x01<<2) /* Low Level */
#define TC1_CCBINTLVL_MED_gc (0x02<<2) /* Medium Level */
#define TC1_CCBINTLVL_HI_gc  (0x03<<2) /* High Level */


/* Compare or Capture A Interrupt Level */
#define TC1_CCAINTLVL_OFF_gc (0x00) /* Interrupt Disabled */
#define TC1_CCAINTLVL_LO_gc  (0x01) /* Low Level */
#define TC1_CCAINTLVL_MED_gc (0x02) /* Medium Level */
#define TC1_CCAINTLVL_HI_gc  (0x03) /* High Level */


/* Command */
#define TC1_CTRLFCLR_CMD_gc(x) ((x<<2) & 0x0C)

/* Lock Update */
#define TC1_LUPD_CLEAR_gc (0x00) /* Lock Update - CLEAR */
#define TC1_LUPD_SET_gc   (0x02) /* Lock Update - SET */


/* Direction */
#define TC1_DIR_CLEAR_gc (0x00) /* Direction - CLEAR */
#define TC1_DIR_SET_gc   (0x01) /* Direction - SET */


/* Command */
#define TC1_CMD_NONE_gc    (0x00<<2) /* No Command */
#define TC1_CMD_UPDATE_gc  (0x01<<2) /* Force Update */
#define TC1_CMD_RESTART_gc (0x02<<2) /* Force Restart */
#define TC1_CMD_RESET_gc   (0x03<<2) /* Force Hard Reset */


/* Lock Update */
/* TC1_LUPD_CLEAR_gc ALREADY DEFINED */
/* TC1_LUPD_SET_gc ALREADY DEFINED */


/* Direction */
/* TC1_DIR_CLEAR_gc ALREADY DEFINED */
/* TC1_DIR_SET_gc ALREADY DEFINED */


/* Compare or Capture B Buffer Valid */
#define TC1_CCBBV_CLEAR_gc (0x00) /* Compare or Capture B Buffer Valid - CLEAR */
#define TC1_CCBBV_SET_gc   (0x04) /* Compare or Capture B Buffer Valid - SET */


/* Compare or Capture A Buffer Valid */
#define TC1_CCABV_CLEAR_gc (0x00) /* Compare or Capture A Buffer Valid - CLEAR */
#define TC1_CCABV_SET_gc   (0x02) /* Compare or Capture A Buffer Valid - SET */


/* Period Buffer Valid */
#define TC1_PERBV_CLEAR_gc (0x00) /* Period Buffer Valid - CLEAR */
#define TC1_PERBV_SET_gc   (0x01) /* Period Buffer Valid - SET */


/* Compare or Capture B Buffer Valid */
/* TC1_CCBBV_CLEAR_gc ALREADY DEFINED */
/* TC1_CCBBV_SET_gc ALREADY DEFINED */


/* Compare or Capture A Buffer Valid */
/* TC1_CCABV_CLEAR_gc ALREADY DEFINED */
/* TC1_CCABV_SET_gc ALREADY DEFINED */


/* Period Buffer Valid */
/* TC1_PERBV_CLEAR_gc ALREADY DEFINED */
/* TC1_PERBV_SET_gc ALREADY DEFINED */


/* Compare or Capture B Interrupt Flag */
#define TC1_CCBIF_CLEAR_gc (0x00) /* Compare or Capture B Interrupt Flag - CLEAR */
#define TC1_CCBIF_SET_gc   (0x20) /* Compare or Capture B Interrupt Flag - SET */


/* Compare or Capture A Interrupt Flag */
#define TC1_CCAIF_CLEAR_gc (0x00) /* Compare or Capture A Interrupt Flag - CLEAR */
#define TC1_CCAIF_SET_gc   (0x10) /* Compare or Capture A Interrupt Flag - SET */


/* Error Interrupt Flag */
#define TC1_ERRIF_CLEAR_gc (0x00) /* Error Interrupt Flag - CLEAR */
#define TC1_ERRIF_SET_gc   (0x02) /* Error Interrupt Flag - SET */


/* Overflow Interrupt Flag */
#define TC1_OVFIF_CLEAR_gc (0x00) /* Overflow Interrupt Flag - CLEAR */
#define TC1_OVFIF_SET_gc   (0x01) /* Overflow Interrupt Flag - SET */


/* Pattern Generation Mode */
#define AWEX_PGM_CLEAR_gc (0x00) /* Pattern Generation Mode - CLEAR */
#define AWEX_PGM_SET_gc   (0x20) /* Pattern Generation Mode - SET */


/* Common Waveform Channel Mode */
#define AWEX_CWCM_CLEAR_gc (0x00) /* Common Waveform Channel Mode - CLEAR */
#define AWEX_CWCM_SET_gc   (0x10) /* Common Waveform Channel Mode - SET */


/* Dead Time Insertion Compare Channel D Enable */
#define AWEX_DTICCDEN_CLEAR_gc (0x00) /* Dead Time Insertion Compare Channel D Enable - CLEAR */
#define AWEX_DTICCDEN_SET_gc   (0x08) /* Dead Time Insertion Compare Channel D Enable - SET */


/* Dead Time Insertion Compare Channel C Enable */
#define AWEX_DTICCCEN_CLEAR_gc (0x00) /* Dead Time Insertion Compare Channel C Enable - CLEAR */
#define AWEX_DTICCCEN_SET_gc   (0x04) /* Dead Time Insertion Compare Channel C Enable - SET */


/* Dead Time Insertion Compare Channel B Enable */
#define AWEX_DTICCBEN_CLEAR_gc (0x00) /* Dead Time Insertion Compare Channel B Enable - CLEAR */
#define AWEX_DTICCBEN_SET_gc   (0x02) /* Dead Time Insertion Compare Channel B Enable - SET */


/* Dead Time Insertion Compare Channel A Enable */
#define AWEX_DTICCAEN_CLEAR_gc (0x00) /* Dead Time Insertion Compare Channel A Enable - CLEAR */
#define AWEX_DTICCAEN_SET_gc   (0x01) /* Dead Time Insertion Compare Channel A Enable - SET */


/* Fault Detect on Disable Break Disable */
#define AWEX_FDDBD_CLEAR_gc (0x00) /* Fault Detect on Disable Break Disable - CLEAR */
#define AWEX_FDDBD_SET_gc   (0x10) /* Fault Detect on Disable Break Disable - SET */


/* Fault Detect Mode */
#define AWEX_FDMODE_CLEAR_gc (0x00) /* Fault Detect Mode - CLEAR */
#define AWEX_FDMODE_SET_gc   (0x04) /* Fault Detect Mode - SET */


/* Fault Detect Action */
#define AWEX_FDACT_NONE_gc     (0x00) /* No Fault Protection */
#define AWEX_FDACT_CLEAROE_gc  (0x01) /* Clear Output Enable Bits */
#define AWEX_FDACT_CLEARDIR_gc (0x03) /* Clear I/O Port Direction Bits */


/* Fault Detect Flag */
#define AWEX_FDF_CLEAR_gc (0x00) /* Fault Detect Flag - CLEAR */
#define AWEX_FDF_SET_gc   (0x04) /* Fault Detect Flag - SET */


/* Dead Time High Side Buffer Valid */
#define AWEX_DTHSBUFV_CLEAR_gc (0x00) /* Dead Time High Side Buffer Valid - CLEAR */
#define AWEX_DTHSBUFV_SET_gc   (0x02) /* Dead Time High Side Buffer Valid - SET */


/* Dead Time Low Side Buffer Valid */
#define AWEX_DTLSBUFV_CLEAR_gc (0x00) /* Dead Time Low Side Buffer Valid - CLEAR */
#define AWEX_DTLSBUFV_SET_gc   (0x01) /* Dead Time Low Side Buffer Valid - SET */


/* High Resolution Enable */
#define HIRES_HREN_NONE_gc (0x00) /* No Fault Protection */
#define HIRES_HREN_TC0_gc  (0x01) /* Enable High Resolution on Timer/Counter 0 */
#define HIRES_HREN_TC1_gc  (0x02) /* Enable High Resolution on Timer/Counter 1 */
#define HIRES_HREN_BOTH_gc (0x03) /* Enable High Resolution both Timer/Counters */


/*
--------------------------------------------------------------------------------
USART - Universal Asynchronous Receiver-Transmitter
--------------------------------------------------------------------------------
*/


/* Receive Interrupt Flag */
#define USART_RXCIF_CLEAR_gc (0x00) /* Receive Interrupt Flag - CLEAR */
#define USART_RXCIF_SET_gc   (0x80) /* Receive Interrupt Flag - SET */


/* Transmit Interrupt Flag */
#define USART_TXCIF_CLEAR_gc (0x00) /* Transmit Interrupt Flag - CLEAR */
#define USART_TXCIF_SET_gc   (0x40) /* Transmit Interrupt Flag - SET */


/* Data Register Empty Flag */
#define USART_DREIF_CLEAR_gc (0x00) /* Data Register Empty Flag - CLEAR */
#define USART_DREIF_SET_gc   (0x20) /* Data Register Empty Flag - SET */


/* Frame Error */
#define USART_FERR_CLEAR_gc (0x00) /* Frame Error - CLEAR */
#define USART_FERR_SET_gc   (0x10) /* Frame Error - SET */


/* Buffer Overflow */
#define USART_BUFOVF_CLEAR_gc (0x00) /* Buffer Overflow - CLEAR */
#define USART_BUFOVF_SET_gc   (0x08) /* Buffer Overflow - SET */


/* Parity Error */
#define USART_PERR_CLEAR_gc (0x00) /* Parity Error - CLEAR */
#define USART_PERR_SET_gc   (0x04) /* Parity Error - SET */


/* Receive Bit 8 */
#define USART_RXB8_CLEAR_gc (0x00) /* Receive Bit 8 - CLEAR */
#define USART_RXB8_SET_gc   (0x01) /* Receive Bit 8 - SET */


/* Receive Interrupt Level */
#define USART_RXCINTLVL_OFF_gc (0x00<<4) /* Interrupt Disabled */
#define USART_RXCINTLVL_LO_gc  (0x01<<4) /* Low Level */
#define USART_RXCINTLVL_MED_gc (0x02<<4) /* Medium Level */
#define USART_RXCINTLVL_HI_gc  (0x03<<4) /* High Level */


/* Transmit Interrupt Level */
#define USART_TXCINTLVL_OFF_gc (0x00<<2) /* Interrupt Disabled */
#define USART_TXCINTLVL_LO_gc  (0x01<<2) /* Low Level */
#define USART_TXCINTLVL_MED_gc (0x02<<2) /* Medium Level */
#define USART_TXCINTLVL_HI_gc  (0x03<<2) /* High Level */


/* Data Register Empty Interrupt Level */
#define USART_DREINTLVL_OFF_gc (0x00) /* Interrupt Disabled */
#define USART_DREINTLVL_LO_gc  (0x01) /* Low Level */
#define USART_DREINTLVL_MED_gc (0x02) /* Medium Level */
#define USART_DREINTLVL_HI_gc  (0x03) /* High Level */


/* Receiver Enable */
#define USART_RXEN_CLEAR_gc (0x00) /* Receiver Enable - CLEAR */
#define USART_RXEN_SET_gc   (0x10) /* Receiver Enable - SET */


/* Transmitter Enable */
#define USART_TXEN_CLEAR_gc (0x00) /* Transmitter Enable - CLEAR */
#define USART_TXEN_SET_gc   (0x08) /* Transmitter Enable - SET */


/* Double transmission speed */
#define USART_CLK2X_CLEAR_gc (0x00) /* Double transmission speed - CLEAR */
#define USART_CLK2X_SET_gc   (0x04) /* Double transmission speed - SET */


/* Multi-processor Communication Mode */
#define USART_MPCM_CLEAR_gc (0x00) /* Multi-processor Communication Mode - CLEAR */
#define USART_MPCM_SET_gc   (0x02) /* Multi-processor Communication Mode - SET */


/* Transmit bit 8 */
#define USART_TXB8_CLEAR_gc (0x00) /* Transmit bit 8 - CLEAR */
#define USART_TXB8_SET_gc   (0x01) /* Transmit bit 8 - SET */


/* Communication Mode */
#define USART_CMODE_ASYNCHRONOUS_gc (0x00<<6) /* Asynchronous Mode */
#define USART_CMODE_SYNCHRONOUS_gc  (0x01<<6) /* Synchronous Mode */
#define USART_CMODE_IRDA_gc         (0x02<<6) /* IrDA Mode */
#define USART_CMODE_MSPI_gc         (0x03<<6) /* Master SPI Mode */


/* Parity Mode */
#define USART_PMODE_DISABLED_gc (0x00<<4) /* No Parity */
#define USART_PMODE_EVEN_gc     (0x02<<4) /* Even Parity */
#define USART_PMODE_ODD_gc      (0x03<<4) /* Odd Parity */


/* Stop Bit Mode */
#define USART_SBMODE_CLEAR_gc (0x00) /* Stop Bit Mode - CLEAR */
#define USART_SBMODE_SET_gc   (0x08) /* Stop Bit Mode - SET */


/* Character Size */
#define USART_CHSIZE_5BIT_gc (0x00) /* Character size: 5 bit */
#define USART_CHSIZE_6BIT_gc (0x01) /* Character size: 6 bit */
#define USART_CHSIZE_7BIT_gc (0x02) /* Character size: 7 bit */
#define USART_CHSIZE_8BIT_gc (0x03) /* Character size: 8 bit */
#define USART_CHSIZE_9BIT_gc (0x07) /* Character size: 9 bit */


/* SPI Master Mode, Data Order */
#define USART_UDORD_CLEAR_gc (0x00) /* SPI Master Mode, Data Order - CLEAR */
#define USART_UDORD_SET_gc   (0x04) /* SPI Master Mode, Data Order - SET */


/* SPI Master Mode, Clock Phase */
#define USART_UCPHA_CLEAR_gc (0x00) /* SPI Master Mode, Clock Phase - CLEAR */
#define USART_UCPHA_SET_gc   (0x02) /* SPI Master Mode, Clock Phase - SET */


/* Baud Rate Scale */
#define USART_BAUDCTRLB_BSCALE_gc(x) ((x<<4) & 0xF0)

/* Baud Rate Selection bits[11:8] */
#define USART_BAUDCTRLB_BSEL_gc(x) (x & 0x0F)

/*
--------------------------------------------------------------------------------
SPI - Serial Peripheral Interface
--------------------------------------------------------------------------------
*/


/* Enable Double Speed */
#define SPI_CLK2X_CLEAR_gc (0x00) /* Enable Double Speed - CLEAR */
#define SPI_CLK2X_SET_gc   (0x80) /* Enable Double Speed - SET */


/* Enable Module */
#define SPI_ENABLE_CLEAR_gc (0x00) /* Enable Module - CLEAR */
#define SPI_ENABLE_SET_gc   (0x40) /* Enable Module - SET */


/* Data Order Setting */
#define SPI_DORD_CLEAR_gc (0x00) /* Data Order Setting - CLEAR */
#define SPI_DORD_SET_gc   (0x20) /* Data Order Setting - SET */


/* Master Operation Enable */
#define SPI_MASTER_CLEAR_gc (0x00) /* Master Operation Enable - CLEAR */
#define SPI_MASTER_SET_gc   (0x10) /* Master Operation Enable - SET */


/* SPI Mode */
#define SPI_MODE_0_gc (0x00<<2) /* SPI Mode 0 */
#define SPI_MODE_1_gc (0x01<<2) /* SPI Mode 1 */
#define SPI_MODE_2_gc (0x02<<2) /* SPI Mode 2 */
#define SPI_MODE_3_gc (0x03<<2) /* SPI Mode 3 */


/* Prescaler */
#define SPI_PRESCALER_DIV4_gc   (0x00) /* System Clock / 4 */
#define SPI_PRESCALER_DIV16_gc  (0x01) /* System Clock / 16 */
#define SPI_PRESCALER_DIV64_gc  (0x02) /* System Clock / 64 */
#define SPI_PRESCALER_DIV128_gc (0x03) /* System Clock / 128 */


/* Interrupt level */
#define SPI_INTLVL_OFF_gc (0x00) /* Interrupt Disabled */
#define SPI_INTLVL_LO_gc  (0x01) /* Low Level */
#define SPI_INTLVL_MED_gc (0x02) /* Medium Level */
#define SPI_INTLVL_HI_gc  (0x03) /* High Level */


/* Interrupt Flag */
#define SPI_IF_CLEAR_gc (0x00) /* Interrupt Flag - CLEAR */
#define SPI_IF_SET_gc   (0x80) /* Interrupt Flag - SET */


/* Write Collision */
#define SPI_WRCOL_CLEAR_gc (0x00) /* Write Collision - CLEAR */
#define SPI_WRCOL_SET_gc   (0x40) /* Write Collision - SET */


/*
--------------------------------------------------------------------------------
IRCOM - IR Communication Module
--------------------------------------------------------------------------------
*/


/* Event Channel Select */
#define IRCOM_EVSEL_OFF_gc (0x00) /* No Event Source */
#define IRCOM_EVSEL_0_gc   (0x08) /* Event Channel 0 */
#define IRCOM_EVSEL_1_gc   (0x09) /* Event Channel 1 */
#define IRCOM_EVSEL_2_gc   (0x0A) /* Event Channel 2 */
#define IRCOM_EVSEL_3_gc   (0x0B) /* Event Channel 3 */
#define IRCOM_EVSEL_4_gc   (0x0C) /* Event Channel 4 */
#define IRCOM_EVSEL_5_gc   (0x0D) /* Event Channel 5 */
#define IRCOM_EVSEL_6_gc   (0x0E) /* Event Channel 6 */
#define IRCOM_EVSEL_7_gc   (0x0F) /* Event Channel 7 */


/*
--------------------------------------------------------------------------------
AES - AES Module
--------------------------------------------------------------------------------
*/


/* Start/Run */
#define AES_START_CLEAR_gc (0x00) /* Start/Run - CLEAR */
#define AES_START_SET_gc   (0x80) /* Start/Run - SET */


/* Auto Start Trigger */
#define AES_AUTO_CLEAR_gc (0x00) /* Auto Start Trigger - CLEAR */
#define AES_AUTO_SET_gc   (0x40) /* Auto Start Trigger - SET */


/* AES Software Reset */
#define AES_RESET_CLEAR_gc (0x00) /* AES Software Reset - CLEAR */
#define AES_RESET_SET_gc   (0x20) /* AES Software Reset - SET */


/* Decryption / Direction */
#define AES_DECRYPT_CLEAR_gc (0x00) /* Decryption / Direction - CLEAR */
#define AES_DECRYPT_SET_gc   (0x10) /* Decryption / Direction - SET */


/* State XOR Load Enable */
#define AES_XOR_CLEAR_gc (0x00) /* State XOR Load Enable - CLEAR */
#define AES_XOR_SET_gc   (0x04) /* State XOR Load Enable - SET */


/* AES Error */
#define AES_ERROR_CLEAR_gc (0x00) /* AES Error - CLEAR */
#define AES_ERROR_SET_gc   (0x80) /* AES Error - SET */


/* State Ready Interrupt Flag */
#define AES_SRIF_CLEAR_gc (0x00) /* State Ready Interrupt Flag - CLEAR */
#define AES_SRIF_SET_gc   (0x01) /* State Ready Interrupt Flag - SET */


/* Interrupt level */
#define AES_INTLVL_OFF_gc (0x00) /* Interrupt Disabled */
#define AES_INTLVL_LO_gc  (0x01) /* Low Level */
#define AES_INTLVL_MED_gc (0x02) /* Medium Level */
#define AES_INTLVL_HI_gc  (0x03) /* High Level */

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


/* GPIO - General Purpose IO Registers (0x0000) */
#define GPIO_BASE                                  _SFR_MEM8 (0x0000) /* GPIO Base Address */
#define GPIO_GPIOR0                                _SFR_MEM8 (0x0000) /* General Purpose IO Register 0 */
#define GPIO_GPIOR1                                _SFR_MEM8 (0x0001) /* General Purpose IO Register 1 */
#define GPIO_GPIOR2                                _SFR_MEM8 (0x0002) /* General Purpose IO Register 2 */
#define GPIO_GPIOR3                                _SFR_MEM8 (0x0003) /* General Purpose IO Register 3 */
#define GPIO_GPIOR4                                _SFR_MEM8 (0x0004) /* General Purpose IO Register 4 */
#define GPIO_GPIOR5                                _SFR_MEM8 (0x0005) /* General Purpose IO Register 5 */
#define GPIO_GPIOR6                                _SFR_MEM8 (0x0006) /* General Purpose IO Register 6 */
#define GPIO_GPIOR7                                _SFR_MEM8 (0x0007) /* General Purpose IO Register 7 */
#define GPIO_GPIOR8                                _SFR_MEM8 (0x0008) /* General Purpose IO Register 8 */
#define GPIO_GPIOR9                                _SFR_MEM8 (0x0009) /* General Purpose IO Register 9 */
#define GPIO_GPIORA                                _SFR_MEM8 (0x000A) /* General Purpose IO Register 10 */
#define GPIO_GPIORB                                _SFR_MEM8 (0x000B) /* General Purpose IO Register 11 */
#define GPIO_GPIORC                                _SFR_MEM8 (0x000C) /* General Purpose IO Register 12 */
#define GPIO_GPIORD                                _SFR_MEM8 (0x000D) /* General Purpose IO Register 13 */
#define GPIO_GPIORE                                _SFR_MEM8 (0x000E) /* General Purpose IO Register 14 */
#define GPIO_GPIORF                                _SFR_MEM8 (0x000F) /* General Purpose IO Register 15 */

/* FUSE - Fuses (0x0000) */
#define FUSE_FUSES_BASE                            _SFR_MEM8 (0x0000) /* FUSE_FUSES Base Address */
#define FUSE_FUSES_FUSEBYTE0                       _SFR_MEM8 (0x0000) /* JTAG User ID */
#define FUSE_FUSES_FUSEBYTE1                       _SFR_MEM8 (0x0001) /* Watchdog Configuration */
#define FUSE_FUSES_FUSEBYTE2                       _SFR_MEM8 (0x0002) /* Reset Configuration */
#define FUSE_FUSES_FUSEBYTE4                       _SFR_MEM8 (0x0004) /* Start-up Configuration */
#define FUSE_FUSES_FUSEBYTE5                       _SFR_MEM8 (0x0005) /* EESAVE and BOD Level */

/* LOCKBIT - Lock Bits (0x0000) */
#define LOCKBIT_LOCKBITS_BASE                      _SFR_MEM8 (0x0000) /* LOCKBIT_LOCKBITS Base Address */
#define LOCKBIT_LOCKBITS_LOCKBITS                  _SFR_MEM8 (0x0000) /* Lock Bits */

/* PROD_SIGNATURES - Production Signatures (0x0000) */
#define PROD_SIGNATURES_PROD_SIGNATURES_BASE       _SFR_MEM8 (0x0000) /* PROD_SIGNATURES_PROD_SIGNATURES Base Address */
#define PROD_SIGNATURES_PROD_SIGNATURES_RCOSC2M    _SFR_MEM8 (0x0000) /* RCOSC 2MHz Calibration Value */
#define PROD_SIGNATURES_PROD_SIGNATURES_RCOSC32K   _SFR_MEM8 (0x0002) /* RCOSC 32kHz Calibration Value */
#define PROD_SIGNATURES_PROD_SIGNATURES_RCOSC32M   _SFR_MEM8 (0x0003) /* RCOSC 32MHz Calibration Value */
#define PROD_SIGNATURES_PROD_SIGNATURES_LOTNUM0    _SFR_MEM8 (0x0008) /* Lot Number Byte 0, ASCII */
#define PROD_SIGNATURES_PROD_SIGNATURES_LOTNUM1    _SFR_MEM8 (0x0009) /* Lot Number Byte 1, ASCII */
#define PROD_SIGNATURES_PROD_SIGNATURES_LOTNUM2    _SFR_MEM8 (0x000A) /* Lot Number Byte 2, ASCII */
#define PROD_SIGNATURES_PROD_SIGNATURES_LOTNUM3    _SFR_MEM8 (0x000B) /* Lot Number Byte 3, ASCII */
#define PROD_SIGNATURES_PROD_SIGNATURES_LOTNUM4    _SFR_MEM8 (0x000C) /* Lot Number Byte 4, ASCII */
#define PROD_SIGNATURES_PROD_SIGNATURES_LOTNUM5    _SFR_MEM8 (0x000D) /* Lot Number Byte 5, ASCII */
#define PROD_SIGNATURES_PROD_SIGNATURES_WAFNUM     _SFR_MEM8 (0x0010) /* Wafer Number */
#define PROD_SIGNATURES_PROD_SIGNATURES_COORDX0    _SFR_MEM8 (0x0012) /* Wafer Coordinate X Byte 0 */
#define PROD_SIGNATURES_PROD_SIGNATURES_COORDX1    _SFR_MEM8 (0x0013) /* Wafer Coordinate X Byte 1 */
#define PROD_SIGNATURES_PROD_SIGNATURES_COORDY0    _SFR_MEM8 (0x0014) /* Wafer Coordinate Y Byte 0 */
#define PROD_SIGNATURES_PROD_SIGNATURES_COORDY1    _SFR_MEM8 (0x0015) /* Wafer Coordinate Y Byte 1 */
#define PROD_SIGNATURES_PROD_SIGNATURES_ADCACAL0   _SFR_MEM8 (0x0020) /* ADCA Calibration Byte 0 */
#define PROD_SIGNATURES_PROD_SIGNATURES_ADCACAL1   _SFR_MEM8 (0x0021) /* ADCA Calibration Byte 1 */
#define PROD_SIGNATURES_PROD_SIGNATURES_ADCBCAL0   _SFR_MEM8 (0x0024) /* ADCB Calibration Byte 0 */
#define PROD_SIGNATURES_PROD_SIGNATURES_ADCBCAL1   _SFR_MEM8 (0x0025) /* ADCB Calibration Byte 1 */
#define PROD_SIGNATURES_PROD_SIGNATURES_TEMPSENSE0 _SFR_MEM8 (0x002E) /* Temperature Sensor Calibration Byte 0 */
#define PROD_SIGNATURES_PROD_SIGNATURES_TEMPSENSE1 _SFR_MEM8 (0x002F) /* Temperature Sensor Calibration Byte 0 */

/* VPORT0 - Virtual Port (0x0010) */
#define PORT_BASE                                  _SFR_MEM8 (0x0010) /* PORT Base Address */
#define PORT_DIR                                   _SFR_MEM8 (0x0010) /* I/O Port Data Direction */
#define PORT_OUT                                   _SFR_MEM8 (0x0011) /* I/O Port Output */
#define PORT_IN                                    _SFR_MEM8 (0x0012) /* I/O Port Input */
#define PORT_INTFLAGS                              _SFR_MEM8 (0x0013) /* Interrupt Flag Register */

/* VPORT1 - Virtual Port (0x0014) */
/* WARNING: PORT_BASE ALREADY DEFINED as '_SFR_MEM8 (0x0010)' NOT '_SFR_MEM8 (0x0014)' */
/* WARNING: PORT_DIR ALREADY DEFINED as '_SFR_MEM8 (0x0010)' NOT '_SFR_MEM8 (0x0014)' */
/* WARNING: PORT_OUT ALREADY DEFINED as '_SFR_MEM8 (0x0011)' NOT '_SFR_MEM8 (0x0015)' */
/* WARNING: PORT_IN ALREADY DEFINED as '_SFR_MEM8 (0x0012)' NOT '_SFR_MEM8 (0x0016)' */
/* WARNING: PORT_INTFLAGS ALREADY DEFINED as '_SFR_MEM8 (0x0013)' NOT '_SFR_MEM8 (0x0017)' */

/* VPORT2 - Virtual Port (0x0018) */
/* WARNING: PORT_BASE ALREADY DEFINED as '_SFR_MEM8 (0x0010)' NOT '_SFR_MEM8 (0x0018)' */
/* WARNING: PORT_DIR ALREADY DEFINED as '_SFR_MEM8 (0x0010)' NOT '_SFR_MEM8 (0x0018)' */
/* WARNING: PORT_OUT ALREADY DEFINED as '_SFR_MEM8 (0x0011)' NOT '_SFR_MEM8 (0x0019)' */
/* WARNING: PORT_IN ALREADY DEFINED as '_SFR_MEM8 (0x0012)' NOT '_SFR_MEM8 (0x001A)' */
/* WARNING: PORT_INTFLAGS ALREADY DEFINED as '_SFR_MEM8 (0x0013)' NOT '_SFR_MEM8 (0x001B)' */

/* VPORT3 - Virtual Port (0x001C) */
/* WARNING: PORT_BASE ALREADY DEFINED as '_SFR_MEM8 (0x0010)' NOT '_SFR_MEM8 (0x001C)' */
/* WARNING: PORT_DIR ALREADY DEFINED as '_SFR_MEM8 (0x0010)' NOT '_SFR_MEM8 (0x001C)' */
/* WARNING: PORT_OUT ALREADY DEFINED as '_SFR_MEM8 (0x0011)' NOT '_SFR_MEM8 (0x001D)' */
/* WARNING: PORT_IN ALREADY DEFINED as '_SFR_MEM8 (0x0012)' NOT '_SFR_MEM8 (0x001E)' */
/* WARNING: PORT_INTFLAGS ALREADY DEFINED as '_SFR_MEM8 (0x0013)' NOT '_SFR_MEM8 (0x001F)' */

/* OCD - On-Chip Debug System (0x002E) */
#define XOCD_BASE                                  _SFR_MEM8 (0x002E) /* XOCD Base Address */
#define XOCD_OCDR0                                 _SFR_MEM8 (0x002E) /* OCD Register 0 */
#define XOCD_OCDR1                                 _SFR_MEM8 (0x002F) /* OCD Register 1 */

/* CPU - CPU registers (0x0030) */
#define CPU_BASE                                   _SFR_MEM8 (0x0030) /* CPU Base Address */
#define CPU_CCP                                    _SFR_MEM8 (0x0034) /* Configuration Change Protection */
#define CPU_RAMPD                                  _SFR_MEM8 (0x0038) /* Ramp D */
#define CPU_RAMPX                                  _SFR_MEM8 (0x0039) /* Ramp X */
#define CPU_RAMPY                                  _SFR_MEM8 (0x003A) /* Ramp Y */
#define CPU_RAMPZ                                  _SFR_MEM8 (0x003B) /* Ramp Z */
#define CPU_EIND                                   _SFR_MEM8 (0x003C) /* Extended Indirect Jump */
#define CPU_SPL                                    _SFR_MEM8 (0x003D) /* Stack Pointer Low */
#define CPU_SPH                                    _SFR_MEM8 (0x003E) /* Stack Pointer High */
#define CPU_SREG                                   _SFR_MEM8 (0x003F) /* Status Register */

/* CLK - Clock System (0x0040) */
#define CLK_BASE                                   _SFR_MEM8 (0x0040) /* CLK Base Address */
#define CLK_CTRL                                   _SFR_MEM8 (0x0040) /* Control Register */
#define CLK_PSCTRL                                 _SFR_MEM8 (0x0041) /* Prescaler Control Register */
#define CLK_LOCK                                   _SFR_MEM8 (0x0042) /* Lock register */
#define CLK_RTCCTRL                                _SFR_MEM8 (0x0043) /* RTC Control Register */

/* SLEEP - Sleep Controller (0x0048) */
#define SLEEP_BASE                                 _SFR_MEM8 (0x0048) /* SLEEP Base Address */
#define SLEEP_CTRL                                 _SFR_MEM8 (0x0048) /* Control Register */

/* OSC - Oscillator (0x0050) */
#define OSC_BASE                                   _SFR_MEM8 (0x0050) /* OSC Base Address */
#define OSC_CTRL                                   _SFR_MEM8 (0x0050) /* Control Register */
#define OSC_STATUS                                 _SFR_MEM8 (0x0051) /* Status Register */
#define OSC_XOSCCTRL                               _SFR_MEM8 (0x0052) /* External Oscillator Control Register */
#define OSC_XOSCFAIL                               _SFR_MEM8 (0x0053) /* External Oscillator Failure Detection Register */
#define OSC_RC32KCAL                               _SFR_MEM8 (0x0054) /* 32kHz Internal Oscillator Calibration Register */
#define OSC_PLLCTRL                                _SFR_MEM8 (0x0055) /* PLL Control REgister */
#define OSC_DFLLCTRL                               _SFR_MEM8 (0x0056) /* DFLL Control Register */

/* DFLLRC32M - DFLL (0x0060) */
#define DFLLRC32M_BASE                             _SFR_MEM8 (0x0060) /* DFLLRC32M Base Address */
#define DFLLRC32M_CTRL                             _SFR_MEM8 (0x0060) /* Control Register */
#define DFLLRC32M_CALA                             _SFR_MEM8 (0x0062) /* Calibration Register A */
#define DFLLRC32M_CALB                             _SFR_MEM8 (0x0063) /* Calibration Register B */
#define DFLLRC32M_COMP0                            _SFR_MEM8 (0x0064) /* Oscillator Compare Register 0 */
#define DFLLRC32M_COMP1                            _SFR_MEM8 (0x0065) /* Oscillator Compare Register 1 */
#define DFLLRC32M_COMP2                            _SFR_MEM8 (0x0066) /* Oscillator Compare Register 2 */

/* DFLLRC2M - DFLL (0x0068) */
#define DFLLRC2M_BASE                              _SFR_MEM8 (0x0068) /* DFLLRC2M Base Address */
#define DFLLRC2M_CTRL                              _SFR_MEM8 (0x0068) /* Control Register */
#define DFLLRC2M_CALA                              _SFR_MEM8 (0x006A) /* Calibration Register A */
#define DFLLRC2M_CALB                              _SFR_MEM8 (0x006B) /* Calibration Register B */
#define DFLLRC2M_COMP0                             _SFR_MEM8 (0x006C) /* Oscillator Compare Register 0 */
#define DFLLRC2M_COMP1                             _SFR_MEM8 (0x006D) /* Oscillator Compare Register 1 */
#define DFLLRC2M_COMP2                             _SFR_MEM8 (0x006E) /* Oscillator Compare Register 2 */

/* PR - Power Reduction (0x0070) */
/* WARNING: CLK_BASE ALREADY DEFINED as '_SFR_MEM8 (0x0040)' NOT '_SFR_MEM8 (0x0070)' */
#define CLK_PRGEN                                  _SFR_MEM8 (0x0070) /* General Power Reduction */
#define CLK_PRPA                                   _SFR_MEM8 (0x0071) /* Power Reduction Port A */
#define CLK_PRPB                                   _SFR_MEM8 (0x0072) /* Power Reduction Port B */
#define CLK_PRPC                                   _SFR_MEM8 (0x0073) /* Power Reduction Port C */
#define CLK_PRPD                                   _SFR_MEM8 (0x0074) /* Power Reduction Port D */
#define CLK_PRPE                                   _SFR_MEM8 (0x0075) /* Power Reduction Port E */
#define CLK_PRPF                                   _SFR_MEM8 (0x0076) /* Power Reduction Port F */

/* RST - Reset (0x0078) */
#define RST_BASE                                   _SFR_MEM8 (0x0078) /* RST Base Address */
#define RST_STATUS                                 _SFR_MEM8 (0x0078) /* Status Register */
#define RST_CTRL                                   _SFR_MEM8 (0x0079) /* Control Register */

/* WDT - Watch-Dog Timer (0x0080) */
#define WDT_BASE                                   _SFR_MEM8 (0x0080) /* WDT Base Address */
#define WDT_CTRL                                   _SFR_MEM8 (0x0080) /* Control */
#define WDT_WINCTRL                                _SFR_MEM8 (0x0081) /* Windowed Mode Control */
#define WDT_STATUS                                 _SFR_MEM8 (0x0082) /* Status */

/* MCU - MCU Control (0x0090) */
#define MCU_BASE                                   _SFR_MEM8 (0x0090) /* MCU Base Address */
#define MCU_DEVID0                                 _SFR_MEM8 (0x0090) /* Device ID byte 0 */
#define MCU_DEVID1                                 _SFR_MEM8 (0x0091) /* Device ID byte 1 */
#define MCU_DEVID2                                 _SFR_MEM8 (0x0092) /* Device ID byte 2 */
#define MCU_REVID                                  _SFR_MEM8 (0x0093) /* Revision ID */
#define MCU_JTAGUID                                _SFR_MEM8 (0x0094) /* JTAG User ID */
#define MCU_MCUCR                                  _SFR_MEM8 (0x0096) /* MCU Control */
#define MCU_EVSYSLOCK                              _SFR_MEM8 (0x0098) /* Event System Lock */
#define MCU_AWEXLOCK                               _SFR_MEM8 (0x0099) /* AWEX Lock */

/* PMIC - Programmable Multi-level Interrupt Controller (0x00A0) */
#define PMIC_BASE                                  _SFR_MEM8 (0x00A0) /* PMIC Base Address */
#define PMIC_STATUS                                _SFR_MEM8 (0x00A0) /* Status Register */
#define PMIC_INTPRI                                _SFR_MEM8 (0x00A1) /* Interrupt Priority */
#define PMIC_CTRL                                  _SFR_MEM8 (0x00A2) /* Control Register */

/* PORT_CFG - I/O port Configuration (0x00B0) */
#define PORT_CFGCFG_BASE                           _SFR_MEM8 (0x00B0) /* PORT_CFGCFG Base Address */
#define PORT_CFGCFG_MPCMASK                        _SFR_MEM8 (0x00B0) /* Multi-pin Configuration Mask */
#define PORT_CFGCFG_VPCTRLA                        _SFR_MEM8 (0x00B2) /* Virtual Port Control Register A */
#define PORT_CFGCFG_VPCTRLB                        _SFR_MEM8 (0x00B3) /* Virtual Port Control Register B */
#define PORT_CFGCFG_CLKEVOUT                       _SFR_MEM8 (0x00B4) /* Clock and Event Out Register */

/* AES - AES Module (0x00C0) */
#define AES_BASE                                   _SFR_MEM8 (0x00C0) /* AES Base Address */
#define AES_CTRL                                   _SFR_MEM8 (0x00C0) /* AES Control Register */
#define AES_STATUS                                 _SFR_MEM8 (0x00C1) /* AES Status Register */
#define AES_STATE                                  _SFR_MEM8 (0x00C2) /* AES State Register */
#define AES_KEY                                    _SFR_MEM8 (0x00C3) /* AES Key Register */
#define AES_INTCTRL                                _SFR_MEM8 (0x00C4) /* AES Interrupt Control Register */

/* DMA - DMA Controller (0x0100) */
#define DMA_BASE                                   _SFR_MEM8 (0x0100) /* DMA Base Address */
#define DMA_CTRL                                   _SFR_MEM8 (0x0100) /* Control */
#define DMA_INTFLAGS                               _SFR_MEM8 (0x0103) /* Transfer Interrupt Status */
#define DMA_STATUS                                 _SFR_MEM8 (0x0104) /* Status */
#define DMA_TEMP                                   _SFR_MEM16(0x0106) /* Temporary Register For 16/24-bit Access */
#define DMA_TEMPL                                  _SFR_MEM8 (0x0106) /* Temporary Register For 16/24-bit Access LOW BYTE */
#define DMA_TEMPH                                  _SFR_MEM8 (0x0107) /* Temporary Register For 16/24-bit Access HIGH BYTE */

/* EVSYS - Event System (0x0180) */
#define EVSYS_BASE                                 _SFR_MEM8 (0x0180) /* EVSYS Base Address */
#define EVSYS_CH0MUX                               _SFR_MEM8 (0x0180) /* Event Channel 0 Multiplexer */
#define EVSYS_CH1MUX                               _SFR_MEM8 (0x0181) /* Event Channel 1 Multiplexer */
#define EVSYS_CH2MUX                               _SFR_MEM8 (0x0182) /* Event Channel 2 Multiplexer */
#define EVSYS_CH3MUX                               _SFR_MEM8 (0x0183) /* Event Channel 3 Multiplexer */
#define EVSYS_CH4MUX                               _SFR_MEM8 (0x0184) /* Event Channel 4 Multiplexer */
#define EVSYS_CH5MUX                               _SFR_MEM8 (0x0185) /* Event Channel 5 Multiplexer */
#define EVSYS_CH6MUX                               _SFR_MEM8 (0x0186) /* Event Channel 6 Multiplexer */
#define EVSYS_CH7MUX                               _SFR_MEM8 (0x0187) /* Event Channel 7 Multiplexer */
#define EVSYS_CH0CTRL                              _SFR_MEM8 (0x0188) /* Channel 0 Control Register */
#define EVSYS_CH1CTRL                              _SFR_MEM8 (0x0189) /* Channel 1 Control Register */
#define EVSYS_CH2CTRL                              _SFR_MEM8 (0x018A) /* Channel 2 Control Register */
#define EVSYS_CH3CTRL                              _SFR_MEM8 (0x018B) /* Channel 3 Control Register */
#define EVSYS_CH4CTRL                              _SFR_MEM8 (0x018C) /* Channel 4 Control Register */
#define EVSYS_CH5CTRL                              _SFR_MEM8 (0x018D) /* Channel 5 Control Register */
#define EVSYS_CH6CTRL                              _SFR_MEM8 (0x018E) /* Channel 6 Control Register */
#define EVSYS_CH7CTRL                              _SFR_MEM8 (0x018F) /* Channel 7 Control Register */
#define EVSYS_STROBE                               _SFR_MEM8 (0x0190) /* Event Strobe */
#define EVSYS_DATA                                 _SFR_MEM8 (0x0191) /* Event Data */

/* NVM - Non-volatile Memory Controller (0x01C0) */
#define NVM_BASE                                   _SFR_MEM8 (0x01C0) /* NVM Base Address */
#define NVM_ADDR0                                  _SFR_MEM8 (0x01C0) /* Address Register 0 */
#define NVM_ADDR1                                  _SFR_MEM8 (0x01C1) /* Address Register 1 */
#define NVM_ADDR2                                  _SFR_MEM8 (0x01C2) /* Address Register 2 */
#define NVM_DATA0                                  _SFR_MEM8 (0x01C4) /* Data Register 0 */
#define NVM_DATA1                                  _SFR_MEM8 (0x01C5) /* Data Register 1 */
#define NVM_DATA2                                  _SFR_MEM8 (0x01C6) /* Data Register 2 */
#define NVM_CMD                                    _SFR_MEM8 (0x01CA) /* Command */
#define NVM_CTRLA                                  _SFR_MEM8 (0x01CB) /* Control Register A */
#define NVM_CTRLB                                  _SFR_MEM8 (0x01CC) /* Control Register B */
#define NVM_INTCTRL                                _SFR_MEM8 (0x01CD) /* Interrupt Control */
#define NVM_STATUS                                 _SFR_MEM8 (0x01CF) /* Status */
#define NVM_LOCKBITS                               _SFR_MEM8 (0x01D0) /* Lock Bits */

/* ADCA - Analog-to-Digital Converter (0x0200) */
#define ADCA_BASE                                  _SFR_MEM8 (0x0200) /* ADCA Base Address */
#define ADCA_CTRLA                                 _SFR_MEM8 (0x0200) /* Control Register A */
#define ADCA_CTRLB                                 _SFR_MEM8 (0x0201) /* Control Register B */
#define ADCA_REFCTRL                               _SFR_MEM8 (0x0202) /* Reference Control */
#define ADCA_EVCTRL                                _SFR_MEM8 (0x0203) /* Event Control */
#define ADCA_PRESCALER                             _SFR_MEM8 (0x0204) /* Clock Prescaler */
#define ADCA_INTFLAGS                              _SFR_MEM8 (0x0206) /* Interrupt Flags */
#define ADCA_TEMP                                  _SFR_MEM8 (0x0207) /* Temporary register */
#define ADCA_CAL                                   _SFR_MEM16(0x020C) /* Calibration Value */
#define ADCA_CALL                                  _SFR_MEM8 (0x020C) /* Calibration Value LOW BYTE */
#define ADCA_CALH                                  _SFR_MEM8 (0x020D) /* Calibration Value HIGH BYTE */
#define ADCA_CH0RES                                _SFR_MEM16(0x0210) /* Channel 0 Result */
#define ADCA_CH0RESL                               _SFR_MEM8 (0x0210) /* Channel 0 Result LOW BYTE */
#define ADCA_CH0RESH                               _SFR_MEM8 (0x0211) /* Channel 0 Result HIGH BYTE */
#define ADCA_CH1RES                                _SFR_MEM16(0x0212) /* Channel 1 Result */
#define ADCA_CH1RESL                               _SFR_MEM8 (0x0212) /* Channel 1 Result LOW BYTE */
#define ADCA_CH1RESH                               _SFR_MEM8 (0x0213) /* Channel 1 Result HIGH BYTE */
#define ADCA_CH2RES                                _SFR_MEM16(0x0214) /* Channel 2 Result */
#define ADCA_CH2RESL                               _SFR_MEM8 (0x0214) /* Channel 2 Result LOW BYTE */
#define ADCA_CH2RESH                               _SFR_MEM8 (0x0215) /* Channel 2 Result HIGH BYTE */
#define ADCA_CH3RES                                _SFR_MEM16(0x0216) /* Channel 3 Result */
#define ADCA_CH3RESL                               _SFR_MEM8 (0x0216) /* Channel 3 Result LOW BYTE */
#define ADCA_CH3RESH                               _SFR_MEM8 (0x0217) /* Channel 3 Result HIGH BYTE */
#define ADCA_CMP                                   _SFR_MEM16(0x0218) /* Compare Value */
#define ADCA_CMPL                                  _SFR_MEM8 (0x0218) /* Compare Value LOW BYTE */
#define ADCA_CMPH                                  _SFR_MEM8 (0x0219) /* Compare Value HIGH BYTE */

/* DACB - Digital-to-Analog Converter (0x0320) */
#define DACB_BASE                                  _SFR_MEM8 (0x0320) /* DACB Base Address */
#define DACB_CTRLA                                 _SFR_MEM8 (0x0320) /* Control Register A */
#define DACB_CTRLB                                 _SFR_MEM8 (0x0321) /* Control Register B */
#define DACB_CTRLC                                 _SFR_MEM8 (0x0322) /* Control Register C */
#define DACB_EVCTRL                                _SFR_MEM8 (0x0323) /* Event Input Control */
#define DACB_TIMCTRL                               _SFR_MEM8 (0x0324) /* Timing Control */
#define DACB_STATUS                                _SFR_MEM8 (0x0325) /* Status */
#define DACB_GAINCAL                               _SFR_MEM8 (0x0328) /* Gain Calibration */
#define DACB_OFFSETCAL                             _SFR_MEM8 (0x0329) /* Offset Calibration */
#define DACB_CH0DATA                               _SFR_MEM16(0x0338) /* Channel 0 Data */
#define DACB_CH0DATAL                              _SFR_MEM8 (0x0338) /* Channel 0 Data LOW BYTE */
#define DACB_CH0DATAH                              _SFR_MEM8 (0x0339) /* Channel 0 Data HIGH BYTE */
#define DACB_CH1DATA                               _SFR_MEM16(0x033A) /* Channel 1 Data */
#define DACB_CH1DATAL                              _SFR_MEM8 (0x033A) /* Channel 1 Data LOW BYTE */
#define DACB_CH1DATAH                              _SFR_MEM8 (0x033B) /* Channel 1 Data HIGH BYTE */

/* ACA - Analog Comparator (0x0380) */
#define ACA_BASE                                   _SFR_MEM8 (0x0380) /* ACA Base Address */
#define ACA_AC0CTRL                                _SFR_MEM8 (0x0380) /* Analog Comparator 0 Control */
#define ACA_AC1CTRL                                _SFR_MEM8 (0x0381) /* Analog Comparator 1 Control */
#define ACA_AC0MUXCTRL                             _SFR_MEM8 (0x0382) /* Analog Comparator 0 MUX Control */
#define ACA_AC1MUXCTRL                             _SFR_MEM8 (0x0383) /* Analog Comparator 1 MUX Control */
#define ACA_CTRLA                                  _SFR_MEM8 (0x0384) /* Control Register A */
#define ACA_CTRLB                                  _SFR_MEM8 (0x0385) /* Control Register B */
#define ACA_WINCTRL                                _SFR_MEM8 (0x0386) /* Window Mode Control */
#define ACA_STATUS                                 _SFR_MEM8 (0x0387) /* Status */

/* RTC - Real-Time Counter (0x0400) */
#define RTC_BASE                                   _SFR_MEM8 (0x0400) /* RTC Base Address */
#define RTC_CTRL                                   _SFR_MEM8 (0x0400) /* Control Register */
#define RTC_STATUS                                 _SFR_MEM8 (0x0401) /* Status Register */
#define RTC_INTCTRL                                _SFR_MEM8 (0x0402) /* Interrupt Control Register */
#define RTC_INTFLAGS                               _SFR_MEM8 (0x0403) /* Interrupt Flags */
#define RTC_TEMP                                   _SFR_MEM8 (0x0404) /* Temporary register */
#define RTC_CNT                                    _SFR_MEM16(0x0408) /* Count Register */
#define RTC_CNTL                                   _SFR_MEM8 (0x0408) /* Count Register LOW BYTE */
#define RTC_CNTH                                   _SFR_MEM8 (0x0409) /* Count Register HIGH BYTE */
#define RTC_PER                                    _SFR_MEM16(0x040A) /* Period Register */
#define RTC_PERL                                   _SFR_MEM8 (0x040A) /* Period Register LOW BYTE */
#define RTC_PERH                                   _SFR_MEM8 (0x040B) /* Period Register HIGH BYTE */
#define RTC_COMP                                   _SFR_MEM16(0x040C) /* Compare Register */
#define RTC_COMPL                                  _SFR_MEM8 (0x040C) /* Compare Register LOW BYTE */
#define RTC_COMPH                                  _SFR_MEM8 (0x040D) /* Compare Register HIGH BYTE */

/* TWIC - Two-Wire Interface (0x0480) */
#define TWIC_BASE                                  _SFR_MEM8 (0x0480) /* TWIC Base Address */
#define TWIC_CTRL                                  _SFR_MEM8 (0x0480) /* TWI Common Control Register */

/* TWIE - Two-Wire Interface (0x04A0) */
#define TWIE_BASE                                  _SFR_MEM8 (0x04A0) /* TWIE Base Address */
#define TWIE_CTRL                                  _SFR_MEM8 (0x04A0) /* TWI Common Control Register */

/* PORTA - I/O Ports (0x0600) */
#define PORTA_BASE                                 _SFR_MEM8 (0x0600) /* PORTA Base Address */
#define PORTA_DIR                                  _SFR_MEM8 (0x0600) /* I/O Port Data Direction */
#define PORTA_DIRSET                               _SFR_MEM8 (0x0601) /* I/O Port Data Direction Set */
#define PORTA_DIRCLR                               _SFR_MEM8 (0x0602) /* I/O Port Data Direction Clear */
#define PORTA_DIRTGL                               _SFR_MEM8 (0x0603) /* I/O Port Data Direction Toggle */
#define PORTA_OUT                                  _SFR_MEM8 (0x0604) /* I/O Port Output */
#define PORTA_OUTSET                               _SFR_MEM8 (0x0605) /* I/O Port Output Set */
#define PORTA_OUTCLR                               _SFR_MEM8 (0x0606) /* I/O Port Output Clear */
#define PORTA_OUTTGL                               _SFR_MEM8 (0x0607) /* I/O Port Output Toggle */
#define PORTA_IN                                   _SFR_MEM8 (0x0608) /* I/O port Input */
#define PORTA_INTCTRL                              _SFR_MEM8 (0x0609) /* Interrupt Control Register */
#define PORTA_INT0MASK                             _SFR_MEM8 (0x060A) /* Port Interrupt 0 Mask */
#define PORTA_INT1MASK                             _SFR_MEM8 (0x060B) /* Port Interrupt 1 Mask */
#define PORTA_INTFLAGS                             _SFR_MEM8 (0x060C) /* Interrupt Flag Register */
#define PORTA_PIN0CTRL                             _SFR_MEM8 (0x0610) /* Pin 0 Control Register */
#define PORTA_PIN1CTRL                             _SFR_MEM8 (0x0611) /* Pin 1 Control Register */
#define PORTA_PIN2CTRL                             _SFR_MEM8 (0x0612) /* Pin 2 Control Register */
#define PORTA_PIN3CTRL                             _SFR_MEM8 (0x0613) /* Pin 3 Control Register */
#define PORTA_PIN4CTRL                             _SFR_MEM8 (0x0614) /* Pin 4 Control Register */
#define PORTA_PIN5CTRL                             _SFR_MEM8 (0x0615) /* Pin 5 Control Register */
#define PORTA_PIN6CTRL                             _SFR_MEM8 (0x0616) /* Pin 6 Control Register */
#define PORTA_PIN7CTRL                             _SFR_MEM8 (0x0617) /* Pin 7 Control Register */

/* PORTB - I/O Ports (0x0620) */
#define PORTB_BASE                                 _SFR_MEM8 (0x0620) /* PORTB Base Address */
#define PORTB_DIR                                  _SFR_MEM8 (0x0620) /* I/O Port Data Direction */
#define PORTB_DIRSET                               _SFR_MEM8 (0x0621) /* I/O Port Data Direction Set */
#define PORTB_DIRCLR                               _SFR_MEM8 (0x0622) /* I/O Port Data Direction Clear */
#define PORTB_DIRTGL                               _SFR_MEM8 (0x0623) /* I/O Port Data Direction Toggle */
#define PORTB_OUT                                  _SFR_MEM8 (0x0624) /* I/O Port Output */
#define PORTB_OUTSET                               _SFR_MEM8 (0x0625) /* I/O Port Output Set */
#define PORTB_OUTCLR                               _SFR_MEM8 (0x0626) /* I/O Port Output Clear */
#define PORTB_OUTTGL                               _SFR_MEM8 (0x0627) /* I/O Port Output Toggle */
#define PORTB_IN                                   _SFR_MEM8 (0x0628) /* I/O port Input */
#define PORTB_INTCTRL                              _SFR_MEM8 (0x0629) /* Interrupt Control Register */
#define PORTB_INT0MASK                             _SFR_MEM8 (0x062A) /* Port Interrupt 0 Mask */
#define PORTB_INT1MASK                             _SFR_MEM8 (0x062B) /* Port Interrupt 1 Mask */
#define PORTB_INTFLAGS                             _SFR_MEM8 (0x062C) /* Interrupt Flag Register */
#define PORTB_PIN0CTRL                             _SFR_MEM8 (0x0630) /* Pin 0 Control Register */
#define PORTB_PIN1CTRL                             _SFR_MEM8 (0x0631) /* Pin 1 Control Register */
#define PORTB_PIN2CTRL                             _SFR_MEM8 (0x0632) /* Pin 2 Control Register */
#define PORTB_PIN3CTRL                             _SFR_MEM8 (0x0633) /* Pin 3 Control Register */
#define PORTB_PIN4CTRL                             _SFR_MEM8 (0x0634) /* Pin 4 Control Register */
#define PORTB_PIN5CTRL                             _SFR_MEM8 (0x0635) /* Pin 5 Control Register */
#define PORTB_PIN6CTRL                             _SFR_MEM8 (0x0636) /* Pin 6 Control Register */
#define PORTB_PIN7CTRL                             _SFR_MEM8 (0x0637) /* Pin 7 Control Register */

/* PORTC - I/O Ports (0x0640) */
#define PORTC_BASE                                 _SFR_MEM8 (0x0640) /* PORTC Base Address */
#define PORTC_DIR                                  _SFR_MEM8 (0x0640) /* I/O Port Data Direction */
#define PORTC_DIRSET                               _SFR_MEM8 (0x0641) /* I/O Port Data Direction Set */
#define PORTC_DIRCLR                               _SFR_MEM8 (0x0642) /* I/O Port Data Direction Clear */
#define PORTC_DIRTGL                               _SFR_MEM8 (0x0643) /* I/O Port Data Direction Toggle */
#define PORTC_OUT                                  _SFR_MEM8 (0x0644) /* I/O Port Output */
#define PORTC_OUTSET                               _SFR_MEM8 (0x0645) /* I/O Port Output Set */
#define PORTC_OUTCLR                               _SFR_MEM8 (0x0646) /* I/O Port Output Clear */
#define PORTC_OUTTGL                               _SFR_MEM8 (0x0647) /* I/O Port Output Toggle */
#define PORTC_IN                                   _SFR_MEM8 (0x0648) /* I/O port Input */
#define PORTC_INTCTRL                              _SFR_MEM8 (0x0649) /* Interrupt Control Register */
#define PORTC_INT0MASK                             _SFR_MEM8 (0x064A) /* Port Interrupt 0 Mask */
#define PORTC_INT1MASK                             _SFR_MEM8 (0x064B) /* Port Interrupt 1 Mask */
#define PORTC_INTFLAGS                             _SFR_MEM8 (0x064C) /* Interrupt Flag Register */
#define PORTC_PIN0CTRL                             _SFR_MEM8 (0x0650) /* Pin 0 Control Register */
#define PORTC_PIN1CTRL                             _SFR_MEM8 (0x0651) /* Pin 1 Control Register */
#define PORTC_PIN2CTRL                             _SFR_MEM8 (0x0652) /* Pin 2 Control Register */
#define PORTC_PIN3CTRL                             _SFR_MEM8 (0x0653) /* Pin 3 Control Register */
#define PORTC_PIN4CTRL                             _SFR_MEM8 (0x0654) /* Pin 4 Control Register */
#define PORTC_PIN5CTRL                             _SFR_MEM8 (0x0655) /* Pin 5 Control Register */
#define PORTC_PIN6CTRL                             _SFR_MEM8 (0x0656) /* Pin 6 Control Register */
#define PORTC_PIN7CTRL                             _SFR_MEM8 (0x0657) /* Pin 7 Control Register */

/* PORTD - I/O Ports (0x0660) */
#define PORTD_BASE                                 _SFR_MEM8 (0x0660) /* PORTD Base Address */
#define PORTD_DIR                                  _SFR_MEM8 (0x0660) /* I/O Port Data Direction */
#define PORTD_DIRSET                               _SFR_MEM8 (0x0661) /* I/O Port Data Direction Set */
#define PORTD_DIRCLR                               _SFR_MEM8 (0x0662) /* I/O Port Data Direction Clear */
#define PORTD_DIRTGL                               _SFR_MEM8 (0x0663) /* I/O Port Data Direction Toggle */
#define PORTD_OUT                                  _SFR_MEM8 (0x0664) /* I/O Port Output */
#define PORTD_OUTSET                               _SFR_MEM8 (0x0665) /* I/O Port Output Set */
#define PORTD_OUTCLR                               _SFR_MEM8 (0x0666) /* I/O Port Output Clear */
#define PORTD_OUTTGL                               _SFR_MEM8 (0x0667) /* I/O Port Output Toggle */
#define PORTD_IN                                   _SFR_MEM8 (0x0668) /* I/O port Input */
#define PORTD_INTCTRL                              _SFR_MEM8 (0x0669) /* Interrupt Control Register */
#define PORTD_INT0MASK                             _SFR_MEM8 (0x066A) /* Port Interrupt 0 Mask */
#define PORTD_INT1MASK                             _SFR_MEM8 (0x066B) /* Port Interrupt 1 Mask */
#define PORTD_INTFLAGS                             _SFR_MEM8 (0x066C) /* Interrupt Flag Register */
#define PORTD_PIN0CTRL                             _SFR_MEM8 (0x0670) /* Pin 0 Control Register */
#define PORTD_PIN1CTRL                             _SFR_MEM8 (0x0671) /* Pin 1 Control Register */
#define PORTD_PIN2CTRL                             _SFR_MEM8 (0x0672) /* Pin 2 Control Register */
#define PORTD_PIN3CTRL                             _SFR_MEM8 (0x0673) /* Pin 3 Control Register */
#define PORTD_PIN4CTRL                             _SFR_MEM8 (0x0674) /* Pin 4 Control Register */
#define PORTD_PIN5CTRL                             _SFR_MEM8 (0x0675) /* Pin 5 Control Register */
#define PORTD_PIN6CTRL                             _SFR_MEM8 (0x0676) /* Pin 6 Control Register */
#define PORTD_PIN7CTRL                             _SFR_MEM8 (0x0677) /* Pin 7 Control Register */

/* PORTE - I/O Ports (0x0680) */
#define PORTE_BASE                                 _SFR_MEM8 (0x0680) /* PORTE Base Address */
#define PORTE_DIR                                  _SFR_MEM8 (0x0680) /* I/O Port Data Direction */
#define PORTE_DIRSET                               _SFR_MEM8 (0x0681) /* I/O Port Data Direction Set */
#define PORTE_DIRCLR                               _SFR_MEM8 (0x0682) /* I/O Port Data Direction Clear */
#define PORTE_DIRTGL                               _SFR_MEM8 (0x0683) /* I/O Port Data Direction Toggle */
#define PORTE_OUT                                  _SFR_MEM8 (0x0684) /* I/O Port Output */
#define PORTE_OUTSET                               _SFR_MEM8 (0x0685) /* I/O Port Output Set */
#define PORTE_OUTCLR                               _SFR_MEM8 (0x0686) /* I/O Port Output Clear */
#define PORTE_OUTTGL                               _SFR_MEM8 (0x0687) /* I/O Port Output Toggle */
#define PORTE_IN                                   _SFR_MEM8 (0x0688) /* I/O port Input */
#define PORTE_INTCTRL                              _SFR_MEM8 (0x0689) /* Interrupt Control Register */
#define PORTE_INT0MASK                             _SFR_MEM8 (0x068A) /* Port Interrupt 0 Mask */
#define PORTE_INT1MASK                             _SFR_MEM8 (0x068B) /* Port Interrupt 1 Mask */
#define PORTE_INTFLAGS                             _SFR_MEM8 (0x068C) /* Interrupt Flag Register */
#define PORTE_PIN0CTRL                             _SFR_MEM8 (0x0690) /* Pin 0 Control Register */
#define PORTE_PIN1CTRL                             _SFR_MEM8 (0x0691) /* Pin 1 Control Register */
#define PORTE_PIN2CTRL                             _SFR_MEM8 (0x0692) /* Pin 2 Control Register */
#define PORTE_PIN3CTRL                             _SFR_MEM8 (0x0693) /* Pin 3 Control Register */
#define PORTE_PIN4CTRL                             _SFR_MEM8 (0x0694) /* Pin 4 Control Register */
#define PORTE_PIN5CTRL                             _SFR_MEM8 (0x0695) /* Pin 5 Control Register */
#define PORTE_PIN6CTRL                             _SFR_MEM8 (0x0696) /* Pin 6 Control Register */
#define PORTE_PIN7CTRL                             _SFR_MEM8 (0x0697) /* Pin 7 Control Register */

/* PORTR - I/O Ports (0x07E0) */
#define PORTR_BASE                                 _SFR_MEM8 (0x07E0) /* PORTR Base Address */
#define PORTR_DIR                                  _SFR_MEM8 (0x07E0) /* I/O Port Data Direction */
#define PORTR_DIRSET                               _SFR_MEM8 (0x07E1) /* I/O Port Data Direction Set */
#define PORTR_DIRCLR                               _SFR_MEM8 (0x07E2) /* I/O Port Data Direction Clear */
#define PORTR_DIRTGL                               _SFR_MEM8 (0x07E3) /* I/O Port Data Direction Toggle */
#define PORTR_OUT                                  _SFR_MEM8 (0x07E4) /* I/O Port Output */
#define PORTR_OUTSET                               _SFR_MEM8 (0x07E5) /* I/O Port Output Set */
#define PORTR_OUTCLR                               _SFR_MEM8 (0x07E6) /* I/O Port Output Clear */
#define PORTR_OUTTGL                               _SFR_MEM8 (0x07E7) /* I/O Port Output Toggle */
#define PORTR_IN                                   _SFR_MEM8 (0x07E8) /* I/O port Input */
#define PORTR_INTCTRL                              _SFR_MEM8 (0x07E9) /* Interrupt Control Register */
#define PORTR_INT0MASK                             _SFR_MEM8 (0x07EA) /* Port Interrupt 0 Mask */
#define PORTR_INT1MASK                             _SFR_MEM8 (0x07EB) /* Port Interrupt 1 Mask */
#define PORTR_INTFLAGS                             _SFR_MEM8 (0x07EC) /* Interrupt Flag Register */
#define PORTR_PIN0CTRL                             _SFR_MEM8 (0x07F0) /* Pin 0 Control Register */
#define PORTR_PIN1CTRL                             _SFR_MEM8 (0x07F1) /* Pin 1 Control Register */
#define PORTR_PIN2CTRL                             _SFR_MEM8 (0x07F2) /* Pin 2 Control Register */
#define PORTR_PIN3CTRL                             _SFR_MEM8 (0x07F3) /* Pin 3 Control Register */
#define PORTR_PIN4CTRL                             _SFR_MEM8 (0x07F4) /* Pin 4 Control Register */
#define PORTR_PIN5CTRL                             _SFR_MEM8 (0x07F5) /* Pin 5 Control Register */
#define PORTR_PIN6CTRL                             _SFR_MEM8 (0x07F6) /* Pin 6 Control Register */
#define PORTR_PIN7CTRL                             _SFR_MEM8 (0x07F7) /* Pin 7 Control Register */

/* TCC0 - 16-bit Timer/Counter 0 (0x0800) */
#define TCC00_BASE                                 _SFR_MEM8 (0x0800) /* TCC00 Base Address */
#define TCC00_CTRLA                                _SFR_MEM8 (0x0800) /* Control Register A */
#define TCC00_CTRLB                                _SFR_MEM8 (0x0801) /* Control Register B */
#define TCC00_CTRLC                                _SFR_MEM8 (0x0802) /* Control register C */
#define TCC00_CTRLD                                _SFR_MEM8 (0x0803) /* Control Register D */
#define TCC00_CTRLE                                _SFR_MEM8 (0x0804) /* Control Register E */
#define TCC00_INTCTRLA                             _SFR_MEM8 (0x0806) /* Interrupt Control Register A */
#define TCC00_INTCTRLB                             _SFR_MEM8 (0x0807) /* Interrupt Control Register B */
#define TCC00_CTRLFCLR                             _SFR_MEM8 (0x0808) /* Control Register F Clear */
#define TCC00_CTRLFSET                             _SFR_MEM8 (0x0809) /* Control Register F Set */
#define TCC00_CTRLGCLR                             _SFR_MEM8 (0x080A) /* Control Register G Clear */
#define TCC00_CTRLGSET                             _SFR_MEM8 (0x080B) /* Control Register G Set */
#define TCC00_INTFLAGS                             _SFR_MEM8 (0x080C) /* Interrupt Flag Register */
#define TCC00_TEMP                                 _SFR_MEM8 (0x080F) /* Temporary Register For 16-bit Access */
#define TCC00_CNT                                  _SFR_MEM16(0x0820) /* Count */
#define TCC00_CNTL                                 _SFR_MEM8 (0x0820) /* Count LOW BYTE */
#define TCC00_CNTH                                 _SFR_MEM8 (0x0821) /* Count HIGH BYTE */
#define TCC00_PER                                  _SFR_MEM16(0x0826) /* Period */
#define TCC00_PERL                                 _SFR_MEM8 (0x0826) /* Period LOW BYTE */
#define TCC00_PERH                                 _SFR_MEM8 (0x0827) /* Period HIGH BYTE */
#define TCC00_CCA                                  _SFR_MEM16(0x0828) /* Compare or Capture A */
#define TCC00_CCAL                                 _SFR_MEM8 (0x0828) /* Compare or Capture A LOW BYTE */
#define TCC00_CCAH                                 _SFR_MEM8 (0x0829) /* Compare or Capture A HIGH BYTE */
#define TCC00_CCB                                  _SFR_MEM16(0x082A) /* Compare or Capture B */
#define TCC00_CCBL                                 _SFR_MEM8 (0x082A) /* Compare or Capture B LOW BYTE */
#define TCC00_CCBH                                 _SFR_MEM8 (0x082B) /* Compare or Capture B HIGH BYTE */
#define TCC00_CCC                                  _SFR_MEM16(0x082C) /* Compare or Capture C */
#define TCC00_CCCL                                 _SFR_MEM8 (0x082C) /* Compare or Capture C LOW BYTE */
#define TCC00_CCCH                                 _SFR_MEM8 (0x082D) /* Compare or Capture C HIGH BYTE */
#define TCC00_CCD                                  _SFR_MEM16(0x082E) /* Compare or Capture D */
#define TCC00_CCDL                                 _SFR_MEM8 (0x082E) /* Compare or Capture D LOW BYTE */
#define TCC00_CCDH                                 _SFR_MEM8 (0x082F) /* Compare or Capture D HIGH BYTE */
#define TCC00_PERBUF                               _SFR_MEM16(0x0836) /* Period Buffer */
#define TCC00_PERBUFL                              _SFR_MEM8 (0x0836) /* Period Buffer LOW BYTE */
#define TCC00_PERBUFH                              _SFR_MEM8 (0x0837) /* Period Buffer HIGH BYTE */
#define TCC00_CCABUF                               _SFR_MEM16(0x0838) /* Compare Or Capture A Buffer */
#define TCC00_CCABUFL                              _SFR_MEM8 (0x0838) /* Compare Or Capture A Buffer LOW BYTE */
#define TCC00_CCABUFH                              _SFR_MEM8 (0x0839) /* Compare Or Capture A Buffer HIGH BYTE */
#define TCC00_CCBBUF                               _SFR_MEM16(0x083A) /* Compare Or Capture B Buffer */
#define TCC00_CCBBUFL                              _SFR_MEM8 (0x083A) /* Compare Or Capture B Buffer LOW BYTE */
#define TCC00_CCBBUFH                              _SFR_MEM8 (0x083B) /* Compare Or Capture B Buffer HIGH BYTE */
#define TCC00_CCCBUF                               _SFR_MEM16(0x083C) /* Compare Or Capture C Buffer */
#define TCC00_CCCBUFL                              _SFR_MEM8 (0x083C) /* Compare Or Capture C Buffer LOW BYTE */
#define TCC00_CCCBUFH                              _SFR_MEM8 (0x083D) /* Compare Or Capture C Buffer HIGH BYTE */
#define TCC00_CCDBUF                               _SFR_MEM16(0x083E) /* Compare Or Capture D Buffer */
#define TCC00_CCDBUFL                              _SFR_MEM8 (0x083E) /* Compare Or Capture D Buffer LOW BYTE */
#define TCC00_CCDBUFH                              _SFR_MEM8 (0x083F) /* Compare Or Capture D Buffer HIGH BYTE */

/* TCC1 - 16-bit Timer/Counter 1 (0x0840) */
#define TCC11_BASE                                 _SFR_MEM8 (0x0840) /* TCC11 Base Address */
#define TCC11_CTRLA                                _SFR_MEM8 (0x0840) /* Control  Register A */
#define TCC11_CTRLB                                _SFR_MEM8 (0x0841) /* Control Register B */
#define TCC11_CTRLC                                _SFR_MEM8 (0x0842) /* Control register C */
#define TCC11_CTRLD                                _SFR_MEM8 (0x0843) /* Control Register D */
#define TCC11_CTRLE                                _SFR_MEM8 (0x0844) /* Control Register E */
#define TCC11_INTCTRLA                             _SFR_MEM8 (0x0846) /* Interrupt Control Register A */
#define TCC11_INTCTRLB                             _SFR_MEM8 (0x0847) /* Interrupt Control Register B */
#define TCC11_CTRLFCLR                             _SFR_MEM8 (0x0848) /* Control Register F Clear */
#define TCC11_CTRLFSET                             _SFR_MEM8 (0x0849) /* Control Register F Set */
#define TCC11_CTRLGCLR                             _SFR_MEM8 (0x084A) /* Control Register G Clear */
#define TCC11_CTRLGSET                             _SFR_MEM8 (0x084B) /* Control Register G Set */
#define TCC11_INTFLAGS                             _SFR_MEM8 (0x084C) /* Interrupt Flag Register */
#define TCC11_TEMP                                 _SFR_MEM8 (0x084F) /* Temporary Register For 16-bit Access */
#define TCC11_CNT                                  _SFR_MEM16(0x0860) /* Count */
#define TCC11_CNTL                                 _SFR_MEM8 (0x0860) /* Count LOW BYTE */
#define TCC11_CNTH                                 _SFR_MEM8 (0x0861) /* Count HIGH BYTE */
#define TCC11_PER                                  _SFR_MEM16(0x0866) /* Period */
#define TCC11_PERL                                 _SFR_MEM8 (0x0866) /* Period LOW BYTE */
#define TCC11_PERH                                 _SFR_MEM8 (0x0867) /* Period HIGH BYTE */
#define TCC11_CCA                                  _SFR_MEM16(0x0868) /* Compare or Capture A */
#define TCC11_CCAL                                 _SFR_MEM8 (0x0868) /* Compare or Capture A LOW BYTE */
#define TCC11_CCAH                                 _SFR_MEM8 (0x0869) /* Compare or Capture A HIGH BYTE */
#define TCC11_CCB                                  _SFR_MEM16(0x086A) /* Compare or Capture B */
#define TCC11_CCBL                                 _SFR_MEM8 (0x086A) /* Compare or Capture B LOW BYTE */
#define TCC11_CCBH                                 _SFR_MEM8 (0x086B) /* Compare or Capture B HIGH BYTE */
#define TCC11_PERBUF                               _SFR_MEM16(0x0876) /* Period Buffer */
#define TCC11_PERBUFL                              _SFR_MEM8 (0x0876) /* Period Buffer LOW BYTE */
#define TCC11_PERBUFH                              _SFR_MEM8 (0x0877) /* Period Buffer HIGH BYTE */
#define TCC11_CCABUF                               _SFR_MEM16(0x0878) /* Compare Or Capture A Buffer */
#define TCC11_CCABUFL                              _SFR_MEM8 (0x0878) /* Compare Or Capture A Buffer LOW BYTE */
#define TCC11_CCABUFH                              _SFR_MEM8 (0x0879) /* Compare Or Capture A Buffer HIGH BYTE */
#define TCC11_CCBBUF                               _SFR_MEM16(0x087A) /* Compare Or Capture B Buffer */
#define TCC11_CCBBUFL                              _SFR_MEM8 (0x087A) /* Compare Or Capture B Buffer LOW BYTE */
#define TCC11_CCBBUFH                              _SFR_MEM8 (0x087B) /* Compare Or Capture B Buffer HIGH BYTE */

/* AWEXC - Advanced Waveform Extension (0x0880) */
#define TC_BASE                                    _SFR_MEM8 (0x0880) /* TC Base Address */
#define TC_CTRL                                    _SFR_MEM8 (0x0880) /* Control Register */
#define TC_FDEMASK                                 _SFR_MEM8 (0x0882) /* Fault Detection Event Mask */
#define TC_FDCTRL                                  _SFR_MEM8 (0x0883) /* Fault Detection Control Register */
#define TC_STATUS                                  _SFR_MEM8 (0x0884) /* Status Register */
#define TC_DTBOTH                                  _SFR_MEM8 (0x0886) /* Dead Time Both Sides */
#define TC_DTBOTHBUF                               _SFR_MEM8 (0x0887) /* Dead Time Both Sides Buffer */
#define TC_DTLS                                    _SFR_MEM8 (0x0888) /* Dead Time Low Side */
#define TC_DTHS                                    _SFR_MEM8 (0x0889) /* Dead Time High Side */
#define TC_DTLSBUF                                 _SFR_MEM8 (0x088A) /* Dead Time Low Side Buffer */
#define TC_DTHSBUF                                 _SFR_MEM8 (0x088B) /* Dead Time High Side Buffer */
#define TC_OUTOVEN                                 _SFR_MEM8 (0x088C) /* Output Override Enable */

/* HIRESC - High-Resolution Extension (0x0890) */
/* WARNING: TC_BASE ALREADY DEFINED as '_SFR_MEM8 (0x0880)' NOT '_SFR_MEM8 (0x0890)' */
#define TC_CTRLA                                   _SFR_MEM8 (0x0890) /* Control Register */

/* USARTC0 - Universal Synchronous/Asynchronous Receiver/Transmitter (0x08A0) */
#define USARTC0_BASE                               _SFR_MEM8 (0x08A0) /* USARTC0 Base Address */
#define USARTC0_DATA                               _SFR_MEM8 (0x08A0) /* Data Register */
#define USARTC0_STATUS                             _SFR_MEM8 (0x08A1) /* Status Register */
#define USARTC0_CTRLA                              _SFR_MEM8 (0x08A3) /* Control Register A */
#define USARTC0_CTRLB                              _SFR_MEM8 (0x08A4) /* Control Register B */
#define USARTC0_CTRLC                              _SFR_MEM8 (0x08A5) /* Control Register C */
#define USARTC0_BAUDCTRLA                          _SFR_MEM8 (0x08A6) /* Baud Rate Control Register A */
#define USARTC0_BAUDCTRLB                          _SFR_MEM8 (0x08A7) /* Baud Rate Control Register B */

/* USARTC1 - Universal Synchronous/Asynchronous Receiver/Transmitter (0x08B0) */
#define USARTC1_BASE                               _SFR_MEM8 (0x08B0) /* USARTC1 Base Address */
#define USARTC1_DATA                               _SFR_MEM8 (0x08B0) /* Data Register */
#define USARTC1_STATUS                             _SFR_MEM8 (0x08B1) /* Status Register */
#define USARTC1_CTRLA                              _SFR_MEM8 (0x08B3) /* Control Register A */
#define USARTC1_CTRLB                              _SFR_MEM8 (0x08B4) /* Control Register B */
#define USARTC1_CTRLC                              _SFR_MEM8 (0x08B5) /* Control Register C */
#define USARTC1_BAUDCTRLA                          _SFR_MEM8 (0x08B6) /* Baud Rate Control Register A */
#define USARTC1_BAUDCTRLB                          _SFR_MEM8 (0x08B7) /* Baud Rate Control Register B */

/* SPIC - Serial Peripheral Interface (0x08C0) */
#define SPIC_BASE                                  _SFR_MEM8 (0x08C0) /* SPIC Base Address */
#define SPIC_CTRL                                  _SFR_MEM8 (0x08C0) /* Control Register */
#define SPIC_INTCTRL                               _SFR_MEM8 (0x08C1) /* Interrupt Control Register */
#define SPIC_STATUS                                _SFR_MEM8 (0x08C2) /* Status Register */
#define SPIC_DATA                                  _SFR_MEM8 (0x08C3) /* Data Register */

/* IRCOM - IR Communication Module (0x08F8) */
#define IRCOM_BASE                                 _SFR_MEM8 (0x08F8) /* IRCOM Base Address */
#define IRCOM_CTRL                                 _SFR_MEM8 (0x08F8) /* Control Register */
#define IRCOM_TXPLCTRL                             _SFR_MEM8 (0x08F9) /* IrDA Transmitter Pulse Length Control Register */
#define IRCOM_RXPLCTRL                             _SFR_MEM8 (0x08FA) /* IrDA Receiver Pulse Length Control Register */

/* TCD0 - 16-bit Timer/Counter 0 (0x0900) */
#define TCD00_BASE                                 _SFR_MEM8 (0x0900) /* TCD00 Base Address */
#define TCD00_CTRLA                                _SFR_MEM8 (0x0900) /* Control Register A */
#define TCD00_CTRLB                                _SFR_MEM8 (0x0901) /* Control Register B */
#define TCD00_CTRLC                                _SFR_MEM8 (0x0902) /* Control register C */
#define TCD00_CTRLD                                _SFR_MEM8 (0x0903) /* Control Register D */
#define TCD00_CTRLE                                _SFR_MEM8 (0x0904) /* Control Register E */
#define TCD00_INTCTRLA                             _SFR_MEM8 (0x0906) /* Interrupt Control Register A */
#define TCD00_INTCTRLB                             _SFR_MEM8 (0x0907) /* Interrupt Control Register B */
#define TCD00_CTRLFCLR                             _SFR_MEM8 (0x0908) /* Control Register F Clear */
#define TCD00_CTRLFSET                             _SFR_MEM8 (0x0909) /* Control Register F Set */
#define TCD00_CTRLGCLR                             _SFR_MEM8 (0x090A) /* Control Register G Clear */
#define TCD00_CTRLGSET                             _SFR_MEM8 (0x090B) /* Control Register G Set */
#define TCD00_INTFLAGS                             _SFR_MEM8 (0x090C) /* Interrupt Flag Register */
#define TCD00_TEMP                                 _SFR_MEM8 (0x090F) /* Temporary Register For 16-bit Access */
#define TCD00_CNT                                  _SFR_MEM16(0x0920) /* Count */
#define TCD00_CNTL                                 _SFR_MEM8 (0x0920) /* Count LOW BYTE */
#define TCD00_CNTH                                 _SFR_MEM8 (0x0921) /* Count HIGH BYTE */
#define TCD00_PER                                  _SFR_MEM16(0x0926) /* Period */
#define TCD00_PERL                                 _SFR_MEM8 (0x0926) /* Period LOW BYTE */
#define TCD00_PERH                                 _SFR_MEM8 (0x0927) /* Period HIGH BYTE */
#define TCD00_CCA                                  _SFR_MEM16(0x0928) /* Compare or Capture A */
#define TCD00_CCAL                                 _SFR_MEM8 (0x0928) /* Compare or Capture A LOW BYTE */
#define TCD00_CCAH                                 _SFR_MEM8 (0x0929) /* Compare or Capture A HIGH BYTE */
#define TCD00_CCB                                  _SFR_MEM16(0x092A) /* Compare or Capture B */
#define TCD00_CCBL                                 _SFR_MEM8 (0x092A) /* Compare or Capture B LOW BYTE */
#define TCD00_CCBH                                 _SFR_MEM8 (0x092B) /* Compare or Capture B HIGH BYTE */
#define TCD00_CCC                                  _SFR_MEM16(0x092C) /* Compare or Capture C */
#define TCD00_CCCL                                 _SFR_MEM8 (0x092C) /* Compare or Capture C LOW BYTE */
#define TCD00_CCCH                                 _SFR_MEM8 (0x092D) /* Compare or Capture C HIGH BYTE */
#define TCD00_CCD                                  _SFR_MEM16(0x092E) /* Compare or Capture D */
#define TCD00_CCDL                                 _SFR_MEM8 (0x092E) /* Compare or Capture D LOW BYTE */
#define TCD00_CCDH                                 _SFR_MEM8 (0x092F) /* Compare or Capture D HIGH BYTE */
#define TCD00_PERBUF                               _SFR_MEM16(0x0936) /* Period Buffer */
#define TCD00_PERBUFL                              _SFR_MEM8 (0x0936) /* Period Buffer LOW BYTE */
#define TCD00_PERBUFH                              _SFR_MEM8 (0x0937) /* Period Buffer HIGH BYTE */
#define TCD00_CCABUF                               _SFR_MEM16(0x0938) /* Compare Or Capture A Buffer */
#define TCD00_CCABUFL                              _SFR_MEM8 (0x0938) /* Compare Or Capture A Buffer LOW BYTE */
#define TCD00_CCABUFH                              _SFR_MEM8 (0x0939) /* Compare Or Capture A Buffer HIGH BYTE */
#define TCD00_CCBBUF                               _SFR_MEM16(0x093A) /* Compare Or Capture B Buffer */
#define TCD00_CCBBUFL                              _SFR_MEM8 (0x093A) /* Compare Or Capture B Buffer LOW BYTE */
#define TCD00_CCBBUFH                              _SFR_MEM8 (0x093B) /* Compare Or Capture B Buffer HIGH BYTE */
#define TCD00_CCCBUF                               _SFR_MEM16(0x093C) /* Compare Or Capture C Buffer */
#define TCD00_CCCBUFL                              _SFR_MEM8 (0x093C) /* Compare Or Capture C Buffer LOW BYTE */
#define TCD00_CCCBUFH                              _SFR_MEM8 (0x093D) /* Compare Or Capture C Buffer HIGH BYTE */
#define TCD00_CCDBUF                               _SFR_MEM16(0x093E) /* Compare Or Capture D Buffer */
#define TCD00_CCDBUFL                              _SFR_MEM8 (0x093E) /* Compare Or Capture D Buffer LOW BYTE */
#define TCD00_CCDBUFH                              _SFR_MEM8 (0x093F) /* Compare Or Capture D Buffer HIGH BYTE */

/* TCD1 - 16-bit Timer/Counter 1 (0x0940) */
#define TCD11_BASE                                 _SFR_MEM8 (0x0940) /* TCD11 Base Address */
#define TCD11_CTRLA                                _SFR_MEM8 (0x0940) /* Control  Register A */
#define TCD11_CTRLB                                _SFR_MEM8 (0x0941) /* Control Register B */
#define TCD11_CTRLC                                _SFR_MEM8 (0x0942) /* Control register C */
#define TCD11_CTRLD                                _SFR_MEM8 (0x0943) /* Control Register D */
#define TCD11_CTRLE                                _SFR_MEM8 (0x0944) /* Control Register E */
#define TCD11_INTCTRLA                             _SFR_MEM8 (0x0946) /* Interrupt Control Register A */
#define TCD11_INTCTRLB                             _SFR_MEM8 (0x0947) /* Interrupt Control Register B */
#define TCD11_CTRLFCLR                             _SFR_MEM8 (0x0948) /* Control Register F Clear */
#define TCD11_CTRLFSET                             _SFR_MEM8 (0x0949) /* Control Register F Set */
#define TCD11_CTRLGCLR                             _SFR_MEM8 (0x094A) /* Control Register G Clear */
#define TCD11_CTRLGSET                             _SFR_MEM8 (0x094B) /* Control Register G Set */
#define TCD11_INTFLAGS                             _SFR_MEM8 (0x094C) /* Interrupt Flag Register */
#define TCD11_TEMP                                 _SFR_MEM8 (0x094F) /* Temporary Register For 16-bit Access */
#define TCD11_CNT                                  _SFR_MEM16(0x0960) /* Count */
#define TCD11_CNTL                                 _SFR_MEM8 (0x0960) /* Count LOW BYTE */
#define TCD11_CNTH                                 _SFR_MEM8 (0x0961) /* Count HIGH BYTE */
#define TCD11_PER                                  _SFR_MEM16(0x0966) /* Period */
#define TCD11_PERL                                 _SFR_MEM8 (0x0966) /* Period LOW BYTE */
#define TCD11_PERH                                 _SFR_MEM8 (0x0967) /* Period HIGH BYTE */
#define TCD11_CCA                                  _SFR_MEM16(0x0968) /* Compare or Capture A */
#define TCD11_CCAL                                 _SFR_MEM8 (0x0968) /* Compare or Capture A LOW BYTE */
#define TCD11_CCAH                                 _SFR_MEM8 (0x0969) /* Compare or Capture A HIGH BYTE */
#define TCD11_CCB                                  _SFR_MEM16(0x096A) /* Compare or Capture B */
#define TCD11_CCBL                                 _SFR_MEM8 (0x096A) /* Compare or Capture B LOW BYTE */
#define TCD11_CCBH                                 _SFR_MEM8 (0x096B) /* Compare or Capture B HIGH BYTE */
#define TCD11_PERBUF                               _SFR_MEM16(0x0976) /* Period Buffer */
#define TCD11_PERBUFL                              _SFR_MEM8 (0x0976) /* Period Buffer LOW BYTE */
#define TCD11_PERBUFH                              _SFR_MEM8 (0x0977) /* Period Buffer HIGH BYTE */
#define TCD11_CCABUF                               _SFR_MEM16(0x0978) /* Compare Or Capture A Buffer */
#define TCD11_CCABUFL                              _SFR_MEM8 (0x0978) /* Compare Or Capture A Buffer LOW BYTE */
#define TCD11_CCABUFH                              _SFR_MEM8 (0x0979) /* Compare Or Capture A Buffer HIGH BYTE */
#define TCD11_CCBBUF                               _SFR_MEM16(0x097A) /* Compare Or Capture B Buffer */
#define TCD11_CCBBUFL                              _SFR_MEM8 (0x097A) /* Compare Or Capture B Buffer LOW BYTE */
#define TCD11_CCBBUFH                              _SFR_MEM8 (0x097B) /* Compare Or Capture B Buffer HIGH BYTE */

/* HIRESD - High-Resolution Extension (0x0990) */
/* WARNING: TC_BASE ALREADY DEFINED as '_SFR_MEM8 (0x0880)' NOT '_SFR_MEM8 (0x0990)' */
/* WARNING: TC_CTRLA ALREADY DEFINED as '_SFR_MEM8 (0x0890)' NOT '_SFR_MEM8 (0x0990)' */

/* USARTD0 - Universal Synchronous/Asynchronous Receiver/Transmitter (0x09A0) */
#define USARTD0_BASE                               _SFR_MEM8 (0x09A0) /* USARTD0 Base Address */
#define USARTD0_DATA                               _SFR_MEM8 (0x09A0) /* Data Register */
#define USARTD0_STATUS                             _SFR_MEM8 (0x09A1) /* Status Register */
#define USARTD0_CTRLA                              _SFR_MEM8 (0x09A3) /* Control Register A */
#define USARTD0_CTRLB                              _SFR_MEM8 (0x09A4) /* Control Register B */
#define USARTD0_CTRLC                              _SFR_MEM8 (0x09A5) /* Control Register C */
#define USARTD0_BAUDCTRLA                          _SFR_MEM8 (0x09A6) /* Baud Rate Control Register A */
#define USARTD0_BAUDCTRLB                          _SFR_MEM8 (0x09A7) /* Baud Rate Control Register B */

/* USARTD1 - Universal Synchronous/Asynchronous Receiver/Transmitter (0x09B0) */
#define USARTD1_BASE                               _SFR_MEM8 (0x09B0) /* USARTD1 Base Address */
#define USARTD1_DATA                               _SFR_MEM8 (0x09B0) /* Data Register */
#define USARTD1_STATUS                             _SFR_MEM8 (0x09B1) /* Status Register */
#define USARTD1_CTRLA                              _SFR_MEM8 (0x09B3) /* Control Register A */
#define USARTD1_CTRLB                              _SFR_MEM8 (0x09B4) /* Control Register B */
#define USARTD1_CTRLC                              _SFR_MEM8 (0x09B5) /* Control Register C */
#define USARTD1_BAUDCTRLA                          _SFR_MEM8 (0x09B6) /* Baud Rate Control Register A */
#define USARTD1_BAUDCTRLB                          _SFR_MEM8 (0x09B7) /* Baud Rate Control Register B */

/* SPID - Serial Peripheral Interface (0x09C0) */
#define SPID_BASE                                  _SFR_MEM8 (0x09C0) /* SPID Base Address */
#define SPID_CTRL                                  _SFR_MEM8 (0x09C0) /* Control Register */
#define SPID_INTCTRL                               _SFR_MEM8 (0x09C1) /* Interrupt Control Register */
#define SPID_STATUS                                _SFR_MEM8 (0x09C2) /* Status Register */
#define SPID_DATA                                  _SFR_MEM8 (0x09C3) /* Data Register */

/* TCE0 - 16-bit Timer/Counter 0 (0x0A00) */
#define TCE00_BASE                                 _SFR_MEM8 (0x0A00) /* TCE00 Base Address */
#define TCE00_CTRLA                                _SFR_MEM8 (0x0A00) /* Control Register A */
#define TCE00_CTRLB                                _SFR_MEM8 (0x0A01) /* Control Register B */
#define TCE00_CTRLC                                _SFR_MEM8 (0x0A02) /* Control register C */
#define TCE00_CTRLD                                _SFR_MEM8 (0x0A03) /* Control Register D */
#define TCE00_CTRLE                                _SFR_MEM8 (0x0A04) /* Control Register E */
#define TCE00_INTCTRLA                             _SFR_MEM8 (0x0A06) /* Interrupt Control Register A */
#define TCE00_INTCTRLB                             _SFR_MEM8 (0x0A07) /* Interrupt Control Register B */
#define TCE00_CTRLFCLR                             _SFR_MEM8 (0x0A08) /* Control Register F Clear */
#define TCE00_CTRLFSET                             _SFR_MEM8 (0x0A09) /* Control Register F Set */
#define TCE00_CTRLGCLR                             _SFR_MEM8 (0x0A0A) /* Control Register G Clear */
#define TCE00_CTRLGSET                             _SFR_MEM8 (0x0A0B) /* Control Register G Set */
#define TCE00_INTFLAGS                             _SFR_MEM8 (0x0A0C) /* Interrupt Flag Register */
#define TCE00_TEMP                                 _SFR_MEM8 (0x0A0F) /* Temporary Register For 16-bit Access */
#define TCE00_CNT                                  _SFR_MEM16(0x0A20) /* Count */
#define TCE00_CNTL                                 _SFR_MEM8 (0x0A20) /* Count LOW BYTE */
#define TCE00_CNTH                                 _SFR_MEM8 (0x0A21) /* Count HIGH BYTE */
#define TCE00_PER                                  _SFR_MEM16(0x0A26) /* Period */
#define TCE00_PERL                                 _SFR_MEM8 (0x0A26) /* Period LOW BYTE */
#define TCE00_PERH                                 _SFR_MEM8 (0x0A27) /* Period HIGH BYTE */
#define TCE00_CCA                                  _SFR_MEM16(0x0A28) /* Compare or Capture A */
#define TCE00_CCAL                                 _SFR_MEM8 (0x0A28) /* Compare or Capture A LOW BYTE */
#define TCE00_CCAH                                 _SFR_MEM8 (0x0A29) /* Compare or Capture A HIGH BYTE */
#define TCE00_CCB                                  _SFR_MEM16(0x0A2A) /* Compare or Capture B */
#define TCE00_CCBL                                 _SFR_MEM8 (0x0A2A) /* Compare or Capture B LOW BYTE */
#define TCE00_CCBH                                 _SFR_MEM8 (0x0A2B) /* Compare or Capture B HIGH BYTE */
#define TCE00_CCC                                  _SFR_MEM16(0x0A2C) /* Compare or Capture C */
#define TCE00_CCCL                                 _SFR_MEM8 (0x0A2C) /* Compare or Capture C LOW BYTE */
#define TCE00_CCCH                                 _SFR_MEM8 (0x0A2D) /* Compare or Capture C HIGH BYTE */
#define TCE00_CCD                                  _SFR_MEM16(0x0A2E) /* Compare or Capture D */
#define TCE00_CCDL                                 _SFR_MEM8 (0x0A2E) /* Compare or Capture D LOW BYTE */
#define TCE00_CCDH                                 _SFR_MEM8 (0x0A2F) /* Compare or Capture D HIGH BYTE */
#define TCE00_PERBUF                               _SFR_MEM16(0x0A36) /* Period Buffer */
#define TCE00_PERBUFL                              _SFR_MEM8 (0x0A36) /* Period Buffer LOW BYTE */
#define TCE00_PERBUFH                              _SFR_MEM8 (0x0A37) /* Period Buffer HIGH BYTE */
#define TCE00_CCABUF                               _SFR_MEM16(0x0A38) /* Compare Or Capture A Buffer */
#define TCE00_CCABUFL                              _SFR_MEM8 (0x0A38) /* Compare Or Capture A Buffer LOW BYTE */
#define TCE00_CCABUFH                              _SFR_MEM8 (0x0A39) /* Compare Or Capture A Buffer HIGH BYTE */
#define TCE00_CCBBUF                               _SFR_MEM16(0x0A3A) /* Compare Or Capture B Buffer */
#define TCE00_CCBBUFL                              _SFR_MEM8 (0x0A3A) /* Compare Or Capture B Buffer LOW BYTE */
#define TCE00_CCBBUFH                              _SFR_MEM8 (0x0A3B) /* Compare Or Capture B Buffer HIGH BYTE */
#define TCE00_CCCBUF                               _SFR_MEM16(0x0A3C) /* Compare Or Capture C Buffer */
#define TCE00_CCCBUFL                              _SFR_MEM8 (0x0A3C) /* Compare Or Capture C Buffer LOW BYTE */
#define TCE00_CCCBUFH                              _SFR_MEM8 (0x0A3D) /* Compare Or Capture C Buffer HIGH BYTE */
#define TCE00_CCDBUF                               _SFR_MEM16(0x0A3E) /* Compare Or Capture D Buffer */
#define TCE00_CCDBUFL                              _SFR_MEM8 (0x0A3E) /* Compare Or Capture D Buffer LOW BYTE */
#define TCE00_CCDBUFH                              _SFR_MEM8 (0x0A3F) /* Compare Or Capture D Buffer HIGH BYTE */

/* HIRESE - High-Resolution Extension (0x0A90) */
/* WARNING: TC_BASE ALREADY DEFINED as '_SFR_MEM8 (0x0880)' NOT '_SFR_MEM8 (0x0A90)' */
/* WARNING: TC_CTRLA ALREADY DEFINED as '_SFR_MEM8 (0x0890)' NOT '_SFR_MEM8 (0x0A90)' */

/* USARTE0 - Universal Synchronous/Asynchronous Receiver/Transmitter (0x0AA0) */
#define USARTE0_BASE                               _SFR_MEM8 (0x0AA0) /* USARTE0 Base Address */
#define USARTE0_DATA                               _SFR_MEM8 (0x0AA0) /* Data Register */
#define USARTE0_STATUS                             _SFR_MEM8 (0x0AA1) /* Status Register */
#define USARTE0_CTRLA                              _SFR_MEM8 (0x0AA3) /* Control Register A */
#define USARTE0_CTRLB                              _SFR_MEM8 (0x0AA4) /* Control Register B */
#define USARTE0_CTRLC                              _SFR_MEM8 (0x0AA5) /* Control Register C */
#define USARTE0_BAUDCTRLA                          _SFR_MEM8 (0x0AA6) /* Baud Rate Control Register A */
#define USARTE0_BAUDCTRLB                          _SFR_MEM8 (0x0AA7) /* Baud Rate Control Register B */
/* avr-libc typedef for avr/fuse.h */
typedef FUSE_t NVM_FUSES_t;

/*
================================================================================
Interrupt Vector Definitions
================================================================================
*/

/* Vector 0 is the reset vector */

/* OSC interrupt vectors */
#define OSC_OSCF_vect_num    (1)                 
#define OSC_OSCF_vect        _VECTOR(1)          /* OSC - OSCF Interrupt */

/* PORTC interrupt vectors */
#define PORTC_INT0_vect_num  (2)                 
#define PORTC_INT0_vect      _VECTOR(2)          /* PORTC - INT0 Interrupt */
#define PORTC_INT1_vect_num  (3)                 
#define PORTC_INT1_vect      _VECTOR(3)          /* PORTC - INT1 Interrupt */

/* PORTR interrupt vectors */
#define PORTR_INT0_vect_num  (4)                 
#define PORTR_INT0_vect      _VECTOR(4)          /* PORTR - INT0 Interrupt */
#define PORTR_INT1_vect_num  (5)                 
#define PORTR_INT1_vect      _VECTOR(5)          /* PORTR - INT1 Interrupt */

/* DMA interrupt vectors */
#define DMA_CH0_vect_num     (6)                 
#define DMA_CH0_vect         _VECTOR(6)          /* DMA - CH0 Interrupt */
#define DMA_CH1_vect_num     (7)                 
#define DMA_CH1_vect         _VECTOR(7)          /* DMA - CH1 Interrupt */
#define DMA_CH2_vect_num     (8)                 
#define DMA_CH2_vect         _VECTOR(8)          /* DMA - CH2 Interrupt */
#define DMA_CH3_vect_num     (9)                 
#define DMA_CH3_vect         _VECTOR(9)          /* DMA - CH3 Interrupt */

/* RTC interrupt vectors */
#define RTC_OVF_vect_num     (10)                
#define RTC_OVF_vect         _VECTOR(10)         /* RTC - OVF Interrupt */
#define RTC_COMP_vect_num    (11)                
#define RTC_COMP_vect        _VECTOR(11)         /* RTC - COMP Interrupt */

/* TWIC interrupt vectors */
#define TWIC_TWIS_vect_num   (12)                
#define TWIC_TWIS_vect       _VECTOR(12)         /* TWIC - TWIS Interrupt */
#define TWIC_TWIM_vect_num   (13)                
#define TWIC_TWIM_vect       _VECTOR(13)         /* TWIC - TWIM Interrupt */

/* TCC0 interrupt vectors */
#define TCC0_OVF_vect_num    (14)                
#define TCC0_OVF_vect        _VECTOR(14)         /* TCC0 - OVF Interrupt */
#define TCC0_ERR_vect_num    (15)                
#define TCC0_ERR_vect        _VECTOR(15)         /* TCC0 - ERR Interrupt */
#define TCC0_CCA_vect_num    (16)                
#define TCC0_CCA_vect        _VECTOR(16)         /* TCC0 - CCA Interrupt */
#define TCC0_CCB_vect_num    (17)                
#define TCC0_CCB_vect        _VECTOR(17)         /* TCC0 - CCB Interrupt */
#define TCC0_CCC_vect_num    (18)                
#define TCC0_CCC_vect        _VECTOR(18)         /* TCC0 - CCC Interrupt */
#define TCC0_CCD_vect_num    (19)                
#define TCC0_CCD_vect        _VECTOR(19)         /* TCC0 - CCD Interrupt */

/* TCC1 interrupt vectors */
#define TCC1_OVF_vect_num    (20)                
#define TCC1_OVF_vect        _VECTOR(20)         /* TCC1 - OVF Interrupt */
#define TCC1_ERR_vect_num    (21)                
#define TCC1_ERR_vect        _VECTOR(21)         /* TCC1 - ERR Interrupt */
#define TCC1_CCA_vect_num    (22)                
#define TCC1_CCA_vect        _VECTOR(22)         /* TCC1 - CCA Interrupt */
#define TCC1_CCB_vect_num    (23)                
#define TCC1_CCB_vect        _VECTOR(23)         /* TCC1 - CCB Interrupt */

/* SPIC interrupt vectors */
#define SPIC_INT_vect_num    (24)                
#define SPIC_INT_vect        _VECTOR(24)         /* SPIC - INT Interrupt */

/* USARTC0 interrupt vectors */
#define USARTC0_RXC_vect_num (25)                
#define USARTC0_RXC_vect     _VECTOR(25)         /* USARTC0 - RXC Interrupt */
#define USARTC0_DRE_vect_num (26)                
#define USARTC0_DRE_vect     _VECTOR(26)         /* USARTC0 - DRE Interrupt */
#define USARTC0_TXC_vect_num (27)                
#define USARTC0_TXC_vect     _VECTOR(27)         /* USARTC0 - TXC Interrupt */

/* USARTC1 interrupt vectors */
#define USARTC1_RXC_vect_num (28)                
#define USARTC1_RXC_vect     _VECTOR(28)         /* USARTC1 - RXC Interrupt */
#define USARTC1_DRE_vect_num (29)                
#define USARTC1_DRE_vect     _VECTOR(29)         /* USARTC1 - DRE Interrupt */
#define USARTC1_TXC_vect_num (30)                
#define USARTC1_TXC_vect     _VECTOR(30)         /* USARTC1 - TXC Interrupt */

/* AES interrupt vectors */
#define AES_INT_vect_num     (31)                
#define AES_INT_vect         _VECTOR(31)         /* AES - INT Interrupt */

/* NVM interrupt vectors */
#define NVM_EE_vect_num      (32)                
#define NVM_EE_vect          _VECTOR(32)         /* NVM - EE Interrupt */
#define NVM_SPM_vect_num     (33)                
#define NVM_SPM_vect         _VECTOR(33)         /* NVM - SPM Interrupt */

/* PORTB interrupt vectors */
#define PORTB_INT0_vect_num  (34)                
#define PORTB_INT0_vect      _VECTOR(34)         /* PORTB - INT0 Interrupt */
#define PORTB_INT1_vect_num  (35)                
#define PORTB_INT1_vect      _VECTOR(35)         /* PORTB - INT1 Interrupt */

/* PORTE interrupt vectors */
#define PORTE_INT0_vect_num  (43)                
#define PORTE_INT0_vect      _VECTOR(43)         /* PORTE - INT0 Interrupt */
#define PORTE_INT1_vect_num  (44)                
#define PORTE_INT1_vect      _VECTOR(44)         /* PORTE - INT1 Interrupt */

/* TWIE interrupt vectors */
#define TWIE_TWIS_vect_num   (45)                
#define TWIE_TWIS_vect       _VECTOR(45)         /* TWIE - TWIS Interrupt */
#define TWIE_TWIM_vect_num   (46)                
#define TWIE_TWIM_vect       _VECTOR(46)         /* TWIE - TWIM Interrupt */

/* TCE0 interrupt vectors */
#define TCE0_OVF_vect_num    (47)                
#define TCE0_OVF_vect        _VECTOR(47)         /* TCE0 - OVF Interrupt */
#define TCE0_ERR_vect_num    (48)                
#define TCE0_ERR_vect        _VECTOR(48)         /* TCE0 - ERR Interrupt */
#define TCE0_CCA_vect_num    (49)                
#define TCE0_CCA_vect        _VECTOR(49)         /* TCE0 - CCA Interrupt */
#define TCE0_CCB_vect_num    (50)                
#define TCE0_CCB_vect        _VECTOR(50)         /* TCE0 - CCB Interrupt */
#define TCE0_CCC_vect_num    (51)                
#define TCE0_CCC_vect        _VECTOR(51)         /* TCE0 - CCC Interrupt */
#define TCE0_CCD_vect_num    (52)                
#define TCE0_CCD_vect        _VECTOR(52)         /* TCE0 - CCD Interrupt */

/* HIRESE interrupt vectors */
#define HIRESE_OVF_vect_num  (53)                
#define HIRESE_OVF_vect      _VECTOR(53)         /* HIRESE - OVF Interrupt */
#define HIRESE_ERR_vect_num  (54)                
#define HIRESE_ERR_vect      _VECTOR(54)         /* HIRESE - ERR Interrupt */
#define HIRESE_CCA_vect_num  (55)                
#define HIRESE_CCA_vect      _VECTOR(55)         /* HIRESE - CCA Interrupt */
#define HIRESE_CCB_vect_num  (56)                
#define HIRESE_CCB_vect      _VECTOR(56)         /* HIRESE - CCB Interrupt */

/* USARTE0 interrupt vectors */
#define USARTE0_RXC_vect_num (58)                
#define USARTE0_RXC_vect     _VECTOR(58)         /* USARTE0 - RXC Interrupt */
#define USARTE0_DRE_vect_num (59)                
#define USARTE0_DRE_vect     _VECTOR(59)         /* USARTE0 - DRE Interrupt */
#define USARTE0_TXC_vect_num (60)                
#define USARTE0_TXC_vect     _VECTOR(60)         /* USARTE0 - TXC Interrupt */

/* PORTD interrupt vectors */
#define PORTD_INT0_vect_num  (64)                
#define PORTD_INT0_vect      _VECTOR(64)         /* PORTD - INT0 Interrupt */
#define PORTD_INT1_vect_num  (65)                
#define PORTD_INT1_vect      _VECTOR(65)         /* PORTD - INT1 Interrupt */

/* PORTA interrupt vectors */
#define PORTA_INT0_vect_num  (66)                
#define PORTA_INT0_vect      _VECTOR(66)         /* PORTA - INT0 Interrupt */
#define PORTA_INT1_vect_num  (67)                
#define PORTA_INT1_vect      _VECTOR(67)         /* PORTA - INT1 Interrupt */

/* ACA interrupt vectors */
#define ACA_AC0_vect_num     (68)                
#define ACA_AC0_vect         _VECTOR(68)         /* ACA - AC0 Interrupt */
#define ACA_AC1_vect_num     (69)                
#define ACA_AC1_vect         _VECTOR(69)         /* ACA - AC1 Interrupt */
#define ACA_ACW_vect_num     (70)                
#define ACA_ACW_vect         _VECTOR(70)         /* ACA - ACW Interrupt */

/* ADCA interrupt vectors */
#define ADCA_CH0_vect_num    (71)                
#define ADCA_CH0_vect        _VECTOR(71)         /* ADCA - CH0 Interrupt */
#define ADCA_CH1_vect_num    (72)                
#define ADCA_CH1_vect        _VECTOR(72)         /* ADCA - CH1 Interrupt */
#define ADCA_CH2_vect_num    (73)                
#define ADCA_CH2_vect        _VECTOR(73)         /* ADCA - CH2 Interrupt */
#define ADCA_CH3_vect_num    (74)                
#define ADCA_CH3_vect        _VECTOR(74)         /* ADCA - CH3 Interrupt */

/* TCD0 interrupt vectors */
#define TCD0_OVF_vect_num    (77)                
#define TCD0_OVF_vect        _VECTOR(77)         /* TCD0 - OVF Interrupt */
#define TCD0_ERR_vect_num    (78)                
#define TCD0_ERR_vect        _VECTOR(78)         /* TCD0 - ERR Interrupt */
#define TCD0_CCA_vect_num    (79)                
#define TCD0_CCA_vect        _VECTOR(79)         /* TCD0 - CCA Interrupt */
#define TCD0_CCB_vect_num    (80)                
#define TCD0_CCB_vect        _VECTOR(80)         /* TCD0 - CCB Interrupt */
#define TCD0_CCC_vect_num    (81)                
#define TCD0_CCC_vect        _VECTOR(81)         /* TCD0 - CCC Interrupt */
#define TCD0_CCD_vect_num    (82)                
#define TCD0_CCD_vect        _VECTOR(82)         /* TCD0 - CCD Interrupt */

/* TCD1 interrupt vectors */
#define TCD1_OVF_vect_num    (83)                
#define TCD1_OVF_vect        _VECTOR(83)         /* TCD1 - OVF Interrupt */
#define TCD1_ERR_vect_num    (84)                
#define TCD1_ERR_vect        _VECTOR(84)         /* TCD1 - ERR Interrupt */
#define TCD1_CCA_vect_num    (85)                
#define TCD1_CCA_vect        _VECTOR(85)         /* TCD1 - CCA Interrupt */
#define TCD1_CCB_vect_num    (86)                
#define TCD1_CCB_vect        _VECTOR(86)         /* TCD1 - CCB Interrupt */

/* SPID interrupt vectors */
#define SPID_INT_vect_num    (87)                
#define SPID_INT_vect        _VECTOR(87)         /* SPID - INT Interrupt */

/* USARTD0 interrupt vectors */
#define USARTD0_RXC_vect_num (88)                
#define USARTD0_RXC_vect     _VECTOR(88)         /* USARTD0 - RXC Interrupt */
#define USARTD0_DRE_vect_num (89)                
#define USARTD0_DRE_vect     _VECTOR(89)         /* USARTD0 - DRE Interrupt */
#define USARTD0_TXC_vect_num (90)                
#define USARTD0_TXC_vect     _VECTOR(90)         /* USARTD0 - TXC Interrupt */

/* USARTD1 interrupt vectors */
#define USARTD1_RXC_vect_num (91)                
#define USARTD1_RXC_vect     _VECTOR(91)         /* USARTD1 - RXC Interrupt */
#define USARTD1_DRE_vect_num (92)                
#define USARTD1_DRE_vect     _VECTOR(92)         /* USARTD1 - DRE Interrupt */
#define USARTD1_TXC_vect_num (93)                
#define USARTD1_TXC_vect     _VECTOR(93)         /* USARTD1 - TXC Interrupt */

/* Vector Table Size */
#define _VECTOR_SIZE         (4)                 /* Size of individual vector. */
#define _VECTORS_SIZE        (94 * _VECTOR_SIZE) /* Size of all vectors */
/*
================================================================================
Constants
================================================================================
*/

#define PROGMEM_START              (0x0000)                                             
#define PROGMEM_SIZE               (0x9000)                                             
#define PROGMEM_END                (PROGMEM_START + PROGMEM_SIZE - 1)                   

#define APP_SECTION_START          (0x0000)                                             
#define APP_SECTION_SIZE           (0x8000)                                             
#define APP_SECTION_PAGE_SIZE      (0x0100)                                             
#define APP_SECTION_END            (APP_SECTION_START + APP_SECTION_SIZE - 1)           

#define APPTABLE_SECTION_START     (0x7000)                                             
#define APPTABLE_SECTION_SIZE      (0x1000)                                             
#define APPTABLE_SECTION_PAGE_SIZE (0x0100)                                             
#define APPTABLE_SECTION_END       (APPTABLE_SECTION_START + APPTABLE_SECTION_SIZE - 1) 

#define BOOT_SECTION_START         (0x8000)                                             
#define BOOT_SECTION_SIZE          (0x1000)                                             
#define BOOT_SECTION_PAGE_SIZE     (0x0100)                                             
#define BOOT_SECTION_END           (BOOT_SECTION_START + BOOT_SECTION_SIZE - 1)         

#define DATAMEM_START           (0x0000)                                       
#define DATAMEM_SIZE            (0x3000)                                       
#define DATAMEM_END             (DATAMEM_START + DATAMEM_SIZE - 1)             

#define IO_START                (0x0000)                                       
#define IO_SIZE                 (0x1000)                                       
#define IO_PAGE_SIZE            (0x0001)                                       
#define IO_END                  (IO_START + IO_SIZE - 1)                       

#define MAPPED_EEPROM_START     (0x1000)                                       
#define MAPPED_EEPROM_SIZE      (0x0400)                                       
#define MAPPED_EEPROM_PAGE_SIZE (0x0001)                                       
#define MAPPED_EEPROM_END       (MAPPED_EEPROM_START + MAPPED_EEPROM_SIZE - 1) 

#define INTERNAL_SRAM_START     (0x2000)                                       
#define INTERNAL_SRAM_SIZE      (0x1000)                                       
#define INTERNAL_SRAM_PAGE_SIZE (0x0001)                                       
#define INTERNAL_SRAM_END       (INTERNAL_SRAM_START + INTERNAL_SRAM_SIZE - 1) 

#define EEPROMMEM_START  (0x0000)                               
#define EEPROMMEM_SIZE   (0x0400)                               
#define EEPROMMEM_END    (EEPROMMEM_START + EEPROMMEM_SIZE - 1) 

#define EEPROM_START     (0x0000)                               
#define EEPROM_SIZE      (0x0400)                               
#define EEPROM_PAGE_SIZE (0x0020)                               
#define EEPROM_END       (EEPROM_START + EEPROM_SIZE - 1)       

#define SIGNATURESMEM_START  (0x0000)                                       
#define SIGNATURESMEM_SIZE   (0x0003)                                       
#define SIGNATURESMEM_END    (SIGNATURESMEM_START + SIGNATURESMEM_SIZE - 1) 

#define SIGNATURES_START     (0x0000)                                       
#define SIGNATURES_SIZE      (0x0003)                                       
#define SIGNATURES_PAGE_SIZE (0x0001)                                       
#define SIGNATURES_END       (SIGNATURES_START + SIGNATURES_SIZE - 1)       

#define FUSESMEM_START  (0x0000)                             
#define FUSESMEM_SIZE   (0x0006)                             
#define FUSESMEM_END    (FUSESMEM_START + FUSESMEM_SIZE - 1) 

#define FUSES_START     (0x0000)                             
#define FUSES_SIZE      (0x0006)                             
#define FUSES_PAGE_SIZE (0x0001)                             
#define FUSES_END       (FUSES_START + FUSES_SIZE - 1)       

#define LOCKBITSMEM_START  (0x0000)                                   
#define LOCKBITSMEM_SIZE   (0x0001)                                   
#define LOCKBITSMEM_END    (LOCKBITSMEM_START + LOCKBITSMEM_SIZE - 1) 

#define LOCKBITS_START     (0x0000)                                   
#define LOCKBITS_SIZE      (0x0001)                                   
#define LOCKBITS_PAGE_SIZE (0x0001)                                   
#define LOCKBITS_END       (LOCKBITS_START + LOCKBITS_SIZE - 1)       

#define USER_SIGNATURESMEM_START  (0x0000)                                                 
#define USER_SIGNATURESMEM_SIZE   (0x0100)                                                 
#define USER_SIGNATURESMEM_END    (USER_SIGNATURESMEM_START + USER_SIGNATURESMEM_SIZE - 1) 

#define USER_SIGNATURES_START     (0x0000)                                                 
#define USER_SIGNATURES_SIZE      (0x0100)                                                 
#define USER_SIGNATURES_PAGE_SIZE (0x0100)                                                 
#define USER_SIGNATURES_END       (USER_SIGNATURES_START + USER_SIGNATURES_SIZE - 1)       

#define PROD_SIGNATURESMEM_START  (0x0000)                                                 
#define PROD_SIGNATURESMEM_SIZE   (0x0034)                                                 
#define PROD_SIGNATURESMEM_END    (PROD_SIGNATURESMEM_START + PROD_SIGNATURESMEM_SIZE - 1) 

#define PROD_SIGNATURES_START     (0x0000)                                                 
#define PROD_SIGNATURES_SIZE      (0x0034)                                                 
#define PROD_SIGNATURES_PAGE_SIZE (0x0100)                                                 
#define PROD_SIGNATURES_END       (PROD_SIGNATURES_START + PROD_SIGNATURES_SIZE - 1)       

/* ============ Port Bits ============ */

#define PORT_CFG0 (0) 
#define PORT_CFG1 (1) 
#define PORT_CFG2 (2) 
#define PORT_CFG3 (3) 
#define PORT_CFG4 (4) 
#define PORT_CFG5 (5) 
#define PORT_CFG6 (6) 
#define PORT_CFG7 (7) 
#define VPORT00   (0) 
#define VPORT01   (1) 
#define VPORT02   (2) 
#define VPORT03   (3) 
#define VPORT04   (4) 
#define VPORT05   (5) 
#define VPORT06   (6) 
#define VPORT07   (7) 
#define VPORT10   (0) 
#define VPORT11   (1) 
#define VPORT12   (2) 
#define VPORT13   (3) 
#define VPORT14   (4) 
#define VPORT15   (5) 
#define VPORT16   (6) 
#define VPORT17   (7) 
#define VPORT20   (0) 
#define VPORT21   (1) 
#define VPORT22   (2) 
#define VPORT23   (3) 
#define VPORT24   (4) 
#define VPORT25   (5) 
#define VPORT26   (6) 
#define VPORT27   (7) 
#define VPORT30   (0) 
#define VPORT31   (1) 
#define VPORT32   (2) 
#define VPORT33   (3) 
#define VPORT34   (4) 
#define VPORT35   (5) 
#define VPORT36   (6) 
#define VPORT37   (7) 
#define PORTA0    (0) 
#define PORTA1    (1) 
#define PORTA2    (2) 
#define PORTA3    (3) 
#define PORTA4    (4) 
#define PORTA5    (5) 
#define PORTA6    (6) 
#define PORTA7    (7) 
#define PORTB0    (0) 
#define PORTB1    (1) 
#define PORTB2    (2) 
#define PORTB3    (3) 
#define PORTB4    (4) 
#define PORTB5    (5) 
#define PORTB6    (6) 
#define PORTB7    (7) 
#define PORTC0    (0) 
#define PORTC1    (1) 
#define PORTC2    (2) 
#define PORTC3    (3) 
#define PORTC4    (4) 
#define PORTC5    (5) 
#define PORTC6    (6) 
#define PORTC7    (7) 
#define PORTD0    (0) 
#define PORTD1    (1) 
#define PORTD2    (2) 
#define PORTD3    (3) 
#define PORTD4    (4) 
#define PORTD5    (5) 
#define PORTD6    (6) 
#define PORTD7    (7) 
#define PORTE0    (0) 
#define PORTE1    (1) 
#define PORTE2    (2) 
#define PORTE3    (3) 
#define PORTE4    (4) 
#define PORTE5    (5) 
#define PORTE6    (6) 
#define PORTE7    (7) 
#define PORTR0    (0) 
#define PORTR1    (1) 
#define PORTR2    (2) 
#define PORTR3    (3) 
#define PORTR4    (4) 
#define PORTR5    (5) 
#define PORTR6    (6) 
#define PORTR7    (7) 

/*
================================================================================
Fuses/LockBits/Signatures
================================================================================
*/

/* ============ Fuses ============ */

#define FUSE_MEMORY_SIZE 5 

/* Fuse offset 0x00 */

/* Fuse offset 0x01 */

/* Fuse offset 0x02 */

/* Fuse offset 0x03 */

/* Fuse offset 0x04 */

/* Fuse offset 0x05 */


/* ========== Lock Bits ========== */
#define __LOCK_BITS_EXIST  


/* ========== Signature ========== */
#define SIGNATURE_0 (0x1E) 
#define SIGNATURE_1 (0x95) 
#define SIGNATURE_2 (0x41) 

#endif /* #ifdef _AVR_ATxmega32A4_H_INCLUDED */
