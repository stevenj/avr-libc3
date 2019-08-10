/******************************************************************************
 *   This file is part of avr-libc3.                                          * 
 *                                                                            * 
 *   Automatically created by devtools/gen-ioheader-atdf.py (V0.91)           * 
 *                                                                            * 
 *   .atpack File: ATxmega16E5.atdf                                           * 
 *   .ATDF File:   atdf/ATxmega16E5.atdf                                      * 
 *   Version:      2.0.9                                                      * 
 *   Date:         2019-07-11                                                 * 
 *   Device:       ATxmega16E5                                                * 
 *   Architecture: AVR8_XMEGA                                                 * 
 *                                                                            * 
 *   Changelog:                                                               * 
 *                                                                            * 
 *    2.0.9 2019-07-11 :                                                      * 
 *        - Added description for some interrupts and added                   * 
 *        - memberofperipheral for VirtualPin in PIC files.                   * 
 *    2.0.5    UNKNOWN :                                                      * 
 *        - Added isexecutable attribute to SRAM in PIC files.                * 
 *    2.0.2 2019-01-24 :                                                      * 
 *        - Corrected fuse names.                                             * 
 *        - Corrected SPI SCK and MOSI signal definitions.                    * 
 *        - Succeeds Atmel.XMEGAE_DFP 1.2.51.                                 * 
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
#  define _AVR_IOXXX_H_ "ioATxmega16E5.h"
#else
#  error "Attempt to include more than one <avr/ioXXX.h> file."
#endif

#ifndef _AVR_ATxmega16E5_H_INCLUDED
#  define _AVR_ATxmega16E5_H_INCLUDED

/*
================================================================================
Ungrouped common register
================================================================================
*/

#define GPIOR0 _SFR_MEM8 (0x0)  /* General Purpose IO Register 0 */
#define GPIOR1 _SFR_MEM8 (0x1)  /* General Purpose IO Register 1 */
#define GPIOR2 _SFR_MEM8 (0x2)  /* General Purpose IO Register 2 */
#define GPIOR3 _SFR_MEM8 (0x3)  /* General Purpose IO Register 3 */

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
} GPIO_t;


/*
--------------------------------------------------------------------------------
VPORT - Virtual Ports
--------------------------------------------------------------------------------
*/

typedef struct VPORT_struct
{
    register8_t DIR;      /* I/O Port Data Direction */
    register8_t OUT;      /* I/O Port Output */
    register8_t IN;       /* I/O Port Input */
    register8_t INTFLAGS; /* Interrupt Flag Register */
} VPORT_t;


/* Interrupt Pin 7 Flag */
typedef enum VPORT_INT7IF_enum
{
    VPORT_INT7IF_CLEAR_gc = (0x00), /* Interrupt Pin 7 Flag - CLEAR */
    VPORT_INT7IF_SET_gc   = (0x80), /* Interrupt Pin 7 Flag - SET */
} VPORT_INT7IF_t;

/* Interrupt Pin 6 Flag */
typedef enum VPORT_INT6IF_enum
{
    VPORT_INT6IF_CLEAR_gc = (0x00), /* Interrupt Pin 6 Flag - CLEAR */
    VPORT_INT6IF_SET_gc   = (0x40), /* Interrupt Pin 6 Flag - SET */
} VPORT_INT6IF_t;

/* Interrupt Pin 5 Flag */
typedef enum VPORT_INT5IF_enum
{
    VPORT_INT5IF_CLEAR_gc = (0x00), /* Interrupt Pin 5 Flag - CLEAR */
    VPORT_INT5IF_SET_gc   = (0x20), /* Interrupt Pin 5 Flag - SET */
} VPORT_INT5IF_t;

/* Interrupt Pin 4 Flag */
typedef enum VPORT_INT4IF_enum
{
    VPORT_INT4IF_CLEAR_gc = (0x00), /* Interrupt Pin 4 Flag - CLEAR */
    VPORT_INT4IF_SET_gc   = (0x10), /* Interrupt Pin 4 Flag - SET */
} VPORT_INT4IF_t;

/* Interrupt Pin 3 Flag */
typedef enum VPORT_INT3IF_enum
{
    VPORT_INT3IF_CLEAR_gc = (0x00), /* Interrupt Pin 3 Flag - CLEAR */
    VPORT_INT3IF_SET_gc   = (0x08), /* Interrupt Pin 3 Flag - SET */
} VPORT_INT3IF_t;

/* Interrupt Pin 2 Flag */
typedef enum VPORT_INT2IF_enum
{
    VPORT_INT2IF_CLEAR_gc = (0x00), /* Interrupt Pin 2 Flag - CLEAR */
    VPORT_INT2IF_SET_gc   = (0x04), /* Interrupt Pin 2 Flag - SET */
} VPORT_INT2IF_t;

/* Interrupt Pin 1 Flag */
typedef enum VPORT_INT1IF_enum
{
    VPORT_INT1IF_CLEAR_gc = (0x00), /* Interrupt Pin 1 Flag - CLEAR */
    VPORT_INT1IF_SET_gc   = (0x02), /* Interrupt Pin 1 Flag - SET */
} VPORT_INT1IF_t;

/* Interrupt Pin 0 Flag */
typedef enum VPORT_INT0IF_enum
{
    VPORT_INT0IF_CLEAR_gc = (0x00), /* Interrupt Pin 0 Flag - CLEAR */
    VPORT_INT0IF_SET_gc   = (0x01), /* Interrupt Pin 0 Flag - SET */
} VPORT_INT0IF_t;

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


/* System Clock Selection */
typedef enum CLK_SCLKSEL_enum
{
    CLK_SCLKSEL_RC2M_gc  = (0x00), /* Internal 2 MHz RC Oscillator */
    CLK_SCLKSEL_RC32M_gc = (0x01), /* Internal 32 MHz RC Oscillator */
    CLK_SCLKSEL_RC32K_gc = (0x02), /* Internal 32.768 kHz RC Oscillator */
    CLK_SCLKSEL_XOSC_gc  = (0x03), /* External Crystal Oscillator or Clock */
    CLK_SCLKSEL_PLL_gc   = (0x04), /* Phase Locked Loop */
    CLK_SCLKSEL_RC8M_gc  = (0x05), /* Internal 8 MHz RC Oscillator */
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
    CLK_PSADIV_6_gc   = (0x13<<2), /* Divide by 6 */
    CLK_PSADIV_10_gc  = (0x15<<2), /* Divide by 10 */
    CLK_PSADIV_12_gc  = (0x17<<2), /* Divide by 12 */
    CLK_PSADIV_24_gc  = (0x19<<2), /* Divide by 24 */
    CLK_PSADIV_48_gc  = (0x1B<<2), /* Divide by 48 */
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

/* Clock Source */
typedef enum CLK_RTCSRC_enum
{
    CLK_RTCSRC_ULP_gc     = (0x00<<1), /* 1.024 kHz from internal 32kHz ULP */
    CLK_RTCSRC_TOSC_gc    = (0x01<<1), /* 1.024 kHz from 32.768 kHz crystal oscillator on TOSC */
    CLK_RTCSRC_RCOSC_gc   = (0x02<<1), /* 1.024 kHz from internal 32.768 kHz RC oscillator */
    CLK_RTCSRC_TOSC32_gc  = (0x05<<1), /* 32.768 kHz from 32.768 kHz crystal oscillator on TOSC */
    CLK_RTCSRC_RCOSC32_gc = (0x06<<1), /* 32.768 kHz from internal 32.768 kHz RC oscillator */
    CLK_RTCSRC_EXTCLK_gc  = (0x07<<1), /* External Clock from TOSC1 */
} CLK_RTCSRC_t;

/* Clock Source Enable */
typedef enum CLK_RTCEN_enum
{
    CLK_RTCEN_CLEAR_gc = (0x00), /* Clock Source Enable - CLEAR */
    CLK_RTCEN_SET_gc   = (0x01), /* Clock Source Enable - SET */
} CLK_RTCEN_t;

/*
--------------------------------------------------------------------------------
PR - Power Reduction
--------------------------------------------------------------------------------
*/

typedef struct PR_struct
{
    register8_t PRGEN;    /* General Power Reduction */
    register8_t PRPA;     /* Power Reduction Port A */
    register8_t rsv_0x02; /* RESERVED REGISTER */
    register8_t PRPC;     /* Power Reduction Port C */
    register8_t PRPD;     /* Power Reduction Port D */
} PR_t;


/* XMEGA Custom Logic */
typedef enum PR_XCL_enum
{
    PR_XCL_CLEAR_gc = (0x00), /* XMEGA Custom Logic - CLEAR */
    PR_XCL_SET_gc   = (0x80), /* XMEGA Custom Logic - SET */
} PR_XCL_t;

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

/* Enhanced DMA-Controller */
typedef enum PR_EDMA_enum
{
    PR_EDMA_CLEAR_gc = (0x00), /* Enhanced DMA-Controller - CLEAR */
    PR_EDMA_SET_gc   = (0x01), /* Enhanced DMA-Controller - SET */
} PR_EDMA_t;

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

/* Port C Two-wire Interface */
typedef enum PR_TWI_enum
{
    PR_TWI_CLEAR_gc = (0x00), /* Port C Two-wire Interface - CLEAR */
    PR_TWI_SET_gc   = (0x40), /* Port C Two-wire Interface - SET */
} PR_TWI_t;

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

/* Port C WEX */
typedef enum PR_HIRES_enum
{
    PR_HIRES_CLEAR_gc = (0x00), /* Port C WEX - CLEAR */
    PR_HIRES_SET_gc   = (0x04), /* Port C WEX - SET */
} PR_HIRES_t;

/* Port C Timer/Counter5 */
typedef enum PR_TC5_enum
{
    PR_TC5_CLEAR_gc = (0x00), /* Port C Timer/Counter5 - CLEAR */
    PR_TC5_SET_gc   = (0x02), /* Port C Timer/Counter5 - SET */
} PR_TC5_t;

/* Port C Timer/Counter4 */
typedef enum PR_TC4_enum
{
    PR_TC4_CLEAR_gc = (0x00), /* Port C Timer/Counter4 - CLEAR */
    PR_TC4_SET_gc   = (0x01), /* Port C Timer/Counter4 - SET */
} PR_TC4_t;

/* Port D USART0 */
typedef enum PR_USART0_enum
{
    PR_USART0_CLEAR_gc = (0x00), /* Port D USART0 - CLEAR */
    PR_USART0_SET_gc   = (0x10), /* Port D USART0 - SET */
} PR_USART0_t;

/* Port D Timer/Counter5 */
typedef enum PR_TC5_enum
{
    PR_TC5_CLEAR_gc = (0x00), /* Port D Timer/Counter5 - CLEAR */
    PR_TC5_SET_gc   = (0x02), /* Port D Timer/Counter5 - SET */
} PR_TC5_t;

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
    register8_t XOSCFAIL; /* Oscillator Failure Detection Register */
    register8_t RC32KCAL; /* 32.768 kHz Internal Oscillator Calibration Register */
    register8_t PLLCTRL;  /* PLL Control Register */
    register8_t DFLLCTRL; /* DFLL Control Register */
    register8_t RC8MCAL;  /* Internal 8 MHz RC Oscillator Calibration Register */
} OSC_t;


/* Internal 8 MHz RC Low Power Mode Enable */
typedef enum OSC_RC8MLPM_enum
{
    OSC_RC8MLPM_CLEAR_gc = (0x00), /* Internal 8 MHz RC Low Power Mode Enable - CLEAR */
    OSC_RC8MLPM_SET_gc   = (0x40), /* Internal 8 MHz RC Low Power Mode Enable - SET */
} OSC_RC8MLPM_t;

/* Internal 8 MHz RC Oscillator Enable */
typedef enum OSC_RC8MEN_enum
{
    OSC_RC8MEN_CLEAR_gc = (0x00), /* Internal 8 MHz RC Oscillator Enable - CLEAR */
    OSC_RC8MEN_SET_gc   = (0x20), /* Internal 8 MHz RC Oscillator Enable - SET */
} OSC_RC8MEN_t;

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

/* Internal 32.768 kHz RC Oscillator Enable */
typedef enum OSC_RC32KEN_enum
{
    OSC_RC32KEN_CLEAR_gc = (0x00), /* Internal 32.768 kHz RC Oscillator Enable - CLEAR */
    OSC_RC32KEN_SET_gc   = (0x04), /* Internal 32.768 kHz RC Oscillator Enable - SET */
} OSC_RC32KEN_t;

/* Internal 32 MHz RC Oscillator Enable */
typedef enum OSC_RC32MEN_enum
{
    OSC_RC32MEN_CLEAR_gc = (0x00), /* Internal 32 MHz RC Oscillator Enable - CLEAR */
    OSC_RC32MEN_SET_gc   = (0x02), /* Internal 32 MHz RC Oscillator Enable - SET */
} OSC_RC32MEN_t;

/* Internal 2 MHz RC Oscillator Enable */
typedef enum OSC_RC2MEN_enum
{
    OSC_RC2MEN_CLEAR_gc = (0x00), /* Internal 2 MHz RC Oscillator Enable - CLEAR */
    OSC_RC2MEN_SET_gc   = (0x01), /* Internal 2 MHz RC Oscillator Enable - SET */
} OSC_RC2MEN_t;

/* Internal 8 MHz RC Oscillator Ready */
typedef enum OSC_RC8MRDY_enum
{
    OSC_RC8MRDY_CLEAR_gc = (0x00), /* Internal 8 MHz RC Oscillator Ready - CLEAR */
    OSC_RC8MRDY_SET_gc   = (0x20), /* Internal 8 MHz RC Oscillator Ready - SET */
} OSC_RC8MRDY_t;

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

/* Internal 32.768 kHz RC Oscillator Ready */
typedef enum OSC_RC32KRDY_enum
{
    OSC_RC32KRDY_CLEAR_gc = (0x00), /* Internal 32.768 kHz RC Oscillator Ready - CLEAR */
    OSC_RC32KRDY_SET_gc   = (0x04), /* Internal 32.768 kHz RC Oscillator Ready - SET */
} OSC_RC32KRDY_t;

/* Internal 32 MHz RC Oscillator Ready */
typedef enum OSC_RC32MRDY_enum
{
    OSC_RC32MRDY_CLEAR_gc = (0x00), /* Internal 32 MHz RC Oscillator Ready - CLEAR */
    OSC_RC32MRDY_SET_gc   = (0x02), /* Internal 32 MHz RC Oscillator Ready - SET */
} OSC_RC32MRDY_t;

/* Internal 2 MHz RC Oscillator Ready */
typedef enum OSC_RC2MRDY_enum
{
    OSC_RC2MRDY_CLEAR_gc = (0x00), /* Internal 2 MHz RC Oscillator Ready - CLEAR */
    OSC_RC2MRDY_SET_gc   = (0x01), /* Internal 2 MHz RC Oscillator Ready - SET */
} OSC_RC2MRDY_t;

/* Frequency Range */
typedef enum OSC_FRQRANGE_enum
{
    OSC_FRQRANGE_04TO2_gc  = (0x00<<6), /* 0.4 - 2 MHz */
    OSC_FRQRANGE_2TO9_gc   = (0x01<<6), /* 2 - 9 MHz */
    OSC_FRQRANGE_9TO12_gc  = (0x02<<6), /* 9 - 12 MHz */
    OSC_FRQRANGE_12TO16_gc = (0x03<<6), /* 12 - 16 MHz */
} OSC_FRQRANGE_t;

/* 32.768 kHz XTAL OSC Low-power Mode */
typedef enum OSC_X32KLPM_enum
{
    OSC_X32KLPM_CLEAR_gc = (0x00), /* 32.768 kHz XTAL OSC Low-power Mode - CLEAR */
    OSC_X32KLPM_SET_gc   = (0x20), /* 32.768 kHz XTAL OSC Low-power Mode - SET */
} OSC_X32KLPM_t;

/* 16 MHz Crystal Oscillator High Power mode */
typedef enum OSC_XOSCPWR_enum
{
    OSC_XOSCPWR_CLEAR_gc = (0x00), /* 16 MHz Crystal Oscillator High Power mode - CLEAR */
    OSC_XOSCPWR_SET_gc   = (0x10), /* 16 MHz Crystal Oscillator High Power mode - SET */
} OSC_XOSCPWR_t;

/* External Oscillator Selection and Startup Time */
typedef enum OSC_XOSCSEL_enum
{
    OSC_XOSCSEL_EXTCLK_gc      = (0x00), /* External Clock on port R1 - 6 CLK */
    OSC_XOSCSEL_32KHz_gc       = (0x02), /* 32.768 kHz TOSC - 32K CLK */
    OSC_XOSCSEL_XTAL_256CLK_gc = (0x03), /* 0.4-16 MHz XTAL - 256 CLK */
    OSC_XOSCSEL_XTAL_1KCLK_gc  = (0x07), /* 0.4-16 MHz XTAL - 1K CLK */
    OSC_XOSCSEL_XTAL_16KCLK_gc = (0x0B), /* 0.4-16 MHz XTAL - 16K CLK */
    OSC_XOSCSEL_EXTCLK_C4_gc   = (0x14), /* External Clock on port C4 - 6 CLK */
} OSC_XOSCSEL_t;

/* PLL Failure Detection Interrupt Flag */
typedef enum OSC_PLLFDIF_enum
{
    OSC_PLLFDIF_CLEAR_gc = (0x00), /* PLL Failure Detection Interrupt Flag - CLEAR */
    OSC_PLLFDIF_SET_gc   = (0x08), /* PLL Failure Detection Interrupt Flag - SET */
} OSC_PLLFDIF_t;

/* PLL Failure Detection Enable */
typedef enum OSC_PLLFDEN_enum
{
    OSC_PLLFDEN_CLEAR_gc = (0x00), /* PLL Failure Detection Enable - CLEAR */
    OSC_PLLFDEN_SET_gc   = (0x04), /* PLL Failure Detection Enable - SET */
} OSC_PLLFDEN_t;

/* XOSC Failure Detection Interrupt Flag */
typedef enum OSC_XOSCFDIF_enum
{
    OSC_XOSCFDIF_CLEAR_gc = (0x00), /* XOSC Failure Detection Interrupt Flag - CLEAR */
    OSC_XOSCFDIF_SET_gc   = (0x02), /* XOSC Failure Detection Interrupt Flag - SET */
} OSC_XOSCFDIF_t;

/* XOSC Failure Detection Enable */
typedef enum OSC_XOSCFDEN_enum
{
    OSC_XOSCFDEN_CLEAR_gc = (0x00), /* XOSC Failure Detection Enable - CLEAR */
    OSC_XOSCFDEN_SET_gc   = (0x01), /* XOSC Failure Detection Enable - SET */
} OSC_XOSCFDEN_t;

/* Clock Source */
typedef enum OSC_PLLSRC_enum
{
    OSC_PLLSRC_RC2M_gc  = (0x00<<6), /* Internal 2 MHz RC Oscillator */
    OSC_PLLSRC_RC8M_gc  = (0x01<<6), /* Internal 8 MHz RC Oscillator */
    OSC_PLLSRC_RC32M_gc = (0x02<<6), /* Internal 32 MHz RC Oscillator */
    OSC_PLLSRC_XOSC_gc  = (0x03<<6), /* External Oscillator */
} OSC_PLLSRC_t;

/* Divide by 2 */
typedef enum OSC_PLLDIV_enum
{
    OSC_PLLDIV_CLEAR_gc = (0x00), /* Divide by 2 - CLEAR */
    OSC_PLLDIV_SET_gc   = (0x20), /* Divide by 2 - SET */
} OSC_PLLDIV_t;

/* Multiplication Factor */
#define OSC_PLLCTRL_PLLFAC_gc(x) (x & 0x1F)

/* 32 MHz DFLL Calibration Reference */
typedef enum OSC_RC32MCREF_enum
{
    OSC_RC32MCREF_RC32K_gc   = (0x00<<1), /* Internal 32.768 kHz RC Oscillator */
    OSC_RC32MCREF_XOSC32K_gc = (0x01<<1), /* External 32.768 kHz Crystal Oscillator */
} OSC_RC32MCREF_t;

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
    register8_t DEVID0;      /* Device ID byte 0 */
    register8_t DEVID1;      /* Device ID byte 1 */
    register8_t DEVID2;      /* Device ID byte 2 */
    register8_t REVID;       /* Revision ID */
    register8_t rsv_0x04[3]; /* RESERVED REGISTER BLOCK */
    register8_t ANAINIT;     /* Analog Startup Delay */
    register8_t EVSYSLOCK;   /* Event System Lock */
    register8_t WEXLOCK;     /* WEX Lock */
    register8_t FAULTLOCK;   /* FAULT Lock */
} MCU_t;


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

/* WeX on T/C C4 Lock */
typedef enum MCU_WEXCLOCK_enum
{
    MCU_WEXCLOCK_CLEAR_gc = (0x00), /* WeX on T/C C4 Lock - CLEAR */
    MCU_WEXCLOCK_SET_gc   = (0x01), /* WeX on T/C C4 Lock - SET */
} MCU_WEXCLOCK_t;

/* Fault on T/C C5 Lock */
typedef enum MCU_FAULTC5LOCK_enum
{
    MCU_FAULTC5LOCK_CLEAR_gc = (0x00), /* Fault on T/C C5 Lock - CLEAR */
    MCU_FAULTC5LOCK_SET_gc   = (0x02), /* Fault on T/C C5 Lock - SET */
} MCU_FAULTC5LOCK_t;

/* Fault on T/C C4 Lock */
typedef enum MCU_FAULTC4LOCK_enum
{
    MCU_FAULTC4LOCK_CLEAR_gc = (0x00), /* Fault on T/C C4 Lock - CLEAR */
    MCU_FAULTC4LOCK_SET_gc   = (0x01), /* Fault on T/C C4 Lock - SET */
} MCU_FAULTC4LOCK_t;

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
PORTCFG - Port Configuration
--------------------------------------------------------------------------------
*/

typedef struct PORTCFG_struct
{
    register8_t MPCMASK;     /* Multi-pin Configuration Mask */
    register8_t rsv_0x01[3]; /* RESERVED REGISTER BLOCK */
    register8_t CLKOUT;      /* Clock Out Register */
    register8_t rsv_0x05;    /* RESERVED REGISTER */
    register8_t ACEVOUT;     /* Analog Comparator and Event Out Register */
    register8_t SRLCTRL;     /* Slew Rate Limit Control Register */
} PORTCFG_t;


/* Clock and Event Output Pin Select */
typedef enum PORTCFG_CLKEVPIN_enum
{
    PORTCFG_CLKEVPIN_PIN7_gc = (0x00<<7), /* Clock and Event Output on PIN 7 */
    PORTCFG_CLKEVPIN_PIN4_gc = (0x01<<7), /* Clock and Event Output on PIN 4 */
} PORTCFG_CLKEVPIN_t;

/* RTC Clock Output Enable */
typedef enum PORTCFG_RTCOUT_enum
{
    PORTCFG_RTCOUT_OFF_gc = (0x00<<5), /* System Clock Output Disabled */
    PORTCFG_RTCOUT_PC6_gc = (0x01<<5), /* System Clock Output on Port C pin 6 */
    PORTCFG_RTCOUT_PD6_gc = (0x02<<5), /* System Clock Output on Port D pin 6 */
    PORTCFG_RTCOUT_PR0_gc = (0x03<<5), /* System Clock Output on Port R pin 0 */
} PORTCFG_RTCOUT_t;

/* Clock Output Select */
typedef enum PORTCFG_CLKOUTSEL_enum
{
    PORTCFG_CLKOUTSEL_CLK1X_gc = (0x00<<2), /* 1x Peripheral Clock Output to pin */
    PORTCFG_CLKOUTSEL_CLK2X_gc = (0x01<<2), /* 2x Peripheral Clock Output to pin */
    PORTCFG_CLKOUTSEL_CLK4X_gc = (0x02<<2), /* 4x Peripheral Clock Output to pin */
} PORTCFG_CLKOUTSEL_t;

/* Clock Output Port */
typedef enum PORTCFG_CLKOUT_enum
{
    PORTCFG_CLKOUT_OFF_gc = (0x00), /* System Clock Output Disabled */
    PORTCFG_CLKOUT_PC7_gc = (0x01), /* System Clock Output on Port C pin 7 */
    PORTCFG_CLKOUT_PD7_gc = (0x02), /* System Clock Output on Port D pin 7 */
    PORTCFG_CLKOUT_PR0_gc = (0x03), /* System Clock Output on Port R pin 0 */
} PORTCFG_CLKOUT_t;

/* Analog Comparator Output Port */
typedef enum PORTCFG_ACOUT_enum
{
    PORTCFG_ACOUT_PA_gc = (0x00<<6), /* Analog Comparator Outputs on Port A, Pin 6-7 */
    PORTCFG_ACOUT_PC_gc = (0x01<<6), /* Analog Comparator Outputs on Port C, Pin 6-7 */
    PORTCFG_ACOUT_PD_gc = (0x02<<6), /* Analog Comparator Outputs on Port D, Pin 6-7 */
    PORTCFG_ACOUT_PR_gc = (0x03<<6), /* Analog Comparator Outputs on Port R, Pin 0-1 */
} PORTCFG_ACOUT_t;

/* Event Channel Output Port */
typedef enum PORTCFG_EVOUT_enum
{
    PORTCFG_EVOUT_OFF_gc = (0x00<<4), /* Event Output Disabled */
    PORTCFG_EVOUT_PC7_gc = (0x01<<4), /* Event Channel n Output on Port C pin 7 */
    PORTCFG_EVOUT_PD7_gc = (0x02<<4), /* Event Channel n Output on Port D pin 7 */
    PORTCFG_EVOUT_PR0_gc = (0x03<<4), /* Event Channel n Output on Port R pin 0 */
} PORTCFG_EVOUT_t;

/* Asynchronous Event Enabled */
typedef enum PORTCFG_EVASYEN_enum
{
    PORTCFG_EVASYEN_CLEAR_gc = (0x00), /* Asynchronous Event Enabled - CLEAR */
    PORTCFG_EVASYEN_SET_gc   = (0x08), /* Asynchronous Event Enabled - SET */
} PORTCFG_EVASYEN_t;

/* Event Channel Output Selection */
typedef enum PORTCFG_EVOUTSEL_enum
{
    PORTCFG_EVOUTSEL_0_gc = (0x00), /* Event Channel 0 output to pin */
    PORTCFG_EVOUTSEL_1_gc = (0x01), /* Event Channel 1 output to pin */
    PORTCFG_EVOUTSEL_2_gc = (0x02), /* Event Channel 2 output to pin */
    PORTCFG_EVOUTSEL_3_gc = (0x03), /* Event Channel 3 output to pin */
    PORTCFG_EVOUTSEL_4_gc = (0x04), /* Event Channel 4 output to pin */
    PORTCFG_EVOUTSEL_5_gc = (0x05), /* Event Channel 5 output to pin */
    PORTCFG_EVOUTSEL_6_gc = (0x06), /* Event Channel 6 output to pin */
    PORTCFG_EVOUTSEL_7_gc = (0x07), /* Event Channel 7 output to pin */
} PORTCFG_EVOUTSEL_t;

/* Slew Rate Limit Enable on PORTA */
typedef enum PORTCFG_SRLENRA_enum
{
    PORTCFG_SRLENRA_CLEAR_gc = (0x00), /* Slew Rate Limit Enable on PORTA - CLEAR */
    PORTCFG_SRLENRA_SET_gc   = (0x01), /* Slew Rate Limit Enable on PORTA - SET */
} PORTCFG_SRLENRA_t;

/* Slew Rate Limit Enable on PORTC */
typedef enum PORTCFG_SRLENRC_enum
{
    PORTCFG_SRLENRC_CLEAR_gc = (0x00), /* Slew Rate Limit Enable on PORTC - CLEAR */
    PORTCFG_SRLENRC_SET_gc   = (0x04), /* Slew Rate Limit Enable on PORTC - SET */
} PORTCFG_SRLENRC_t;

/* Slew Rate Limit Enable on PORTD */
typedef enum PORTCFG_SRLENRD_enum
{
    PORTCFG_SRLENRD_CLEAR_gc = (0x00), /* Slew Rate Limit Enable on PORTD - CLEAR */
    PORTCFG_SRLENRD_SET_gc   = (0x08), /* Slew Rate Limit Enable on PORTD - SET */
} PORTCFG_SRLENRD_t;

/* Slew Rate Limit Enable on PORTR */
typedef enum PORTCFG_SRLENRR_enum
{
    PORTCFG_SRLENRR_CLEAR_gc = (0x00), /* Slew Rate Limit Enable on PORTR - CLEAR */
    PORTCFG_SRLENRR_SET_gc   = (0x80), /* Slew Rate Limit Enable on PORTR - SET */
} PORTCFG_SRLENRR_t;

/*
--------------------------------------------------------------------------------
CRC - Cyclic Redundancy Checker
--------------------------------------------------------------------------------
*/

typedef struct CRC_struct
{
    register8_t CTRL;      /* Control Register */
    register8_t STATUS;    /* Status Register */
    register8_t rsv_0x02;  /* RESERVED REGISTER */
    register8_t DATAIN;    /* Data Input */
    register8_t CHECKSUM0; /* Checksum byte 0 */
    register8_t CHECKSUM1; /* Checksum byte 1 */
    register8_t CHECKSUM2; /* Checksum byte 2 */
    register8_t CHECKSUM3; /* Checksum byte 3 */
} CRC_t;


/* Reset */
typedef enum CRC_RESET_enum
{
    CRC_RESET_NO_gc     = (0x00<<6), /* No Reset */
    CRC_RESET_RESET0_gc = (0x02<<6), /* Reset CRC with CHECKSUM to all zeros */
    CRC_RESET_RESET1_gc = (0x03<<6), /* Reset CRC with CHECKSUM to all ones */
} CRC_RESET_t;

/* CRC Mode */
typedef enum CRC_CRC32_enum
{
    CRC_CRC32_CLEAR_gc = (0x00), /* CRC Mode - CLEAR */
    CRC_CRC32_SET_gc   = (0x20), /* CRC Mode - SET */
} CRC_CRC32_t;

/* Input Source */
typedef enum CRC_SOURCE_enum
{
    CRC_SOURCE_DISABLE_gc = (0x00), /* Disabled */
    CRC_SOURCE_IO_gc      = (0x01), /* I/O Interface */
    CRC_SOURCE_FLASH_gc   = (0x02), /* Flash */
    CRC_SOURCE_DMAC0_gc   = (0x04), /* DMAC Channel 0 */
    CRC_SOURCE_DMAC1_gc   = (0x05), /* DMAC Channel 1 */
    CRC_SOURCE_DMAC2_gc   = (0x06), /* DMAC Channel 2 */
    CRC_SOURCE_DMAC3_gc   = (0x07), /* DMAC Channel 3 */
} CRC_SOURCE_t;

/* Zero detection */
typedef enum CRC_ZERO_enum
{
    CRC_ZERO_CLEAR_gc = (0x00), /* Zero detection - CLEAR */
    CRC_ZERO_SET_gc   = (0x02), /* Zero detection - SET */
} CRC_ZERO_t;

/* Busy */
typedef enum CRC_BUSY_enum
{
    CRC_BUSY_CLEAR_gc = (0x00), /* Busy - CLEAR */
    CRC_BUSY_SET_gc   = (0x01), /* Busy - SET */
} CRC_BUSY_t;

/*
--------------------------------------------------------------------------------
EDMA - Enhanced DMA Controller
--------------------------------------------------------------------------------
*/

typedef struct EDMA_struct
{
    register8_t CTRL;        /* Control */
    register8_t rsv_0x01[2]; /* RESERVED REGISTER BLOCK */
    register8_t INTFLAGS;    /* Transfer Interrupt Status */
    register8_t STATUS;      /* Status */
    register8_t rsv_0x05;    /* RESERVED REGISTER */
    register8_t TEMP;        /* Temporary Register For 16-bit Access */
} EDMA_t;


/*
--------------------------------------------------------------------------------
EDMA - Enhanced DMA Controller
--------------------------------------------------------------------------------
*/

typedef struct EDMA_CH_struct
{
    register8_t CTRLA;        /* Channel Control A */
    register8_t CTRLB;        /* Channel Control */
    register8_t ADDRCTRL;     /* Memory Address Control for Peripheral Ch., or Source Address Control for Standard Ch. */
    register8_t DESTADDRCTRL; /* Destination Address Control for Standard Channels Only. */
    register8_t TRIGSRC;      /* Channel Trigger Source */
    register8_t rsv_0x05;     /* RESERVED REGISTER */
    _REGISTER16 (TRFCNT);     /* Channel Block Transfer Count for Peripheral Ch., or Channel Block Transfer Count Low for Standard Ch. */
    register8_t rsv_0x07;     /* RESERVED REGISTER */
    _REGISTER16 (ADDR);       /* Channel Memory Address for Peripheral Ch., or Channel Source Address Low for Standard Ch. */
    register8_t rsv_0x09[3];  /* RESERVED REGISTER BLOCK */
    _REGISTER16 (DESTADDR);   /* Channel Destination Address for Standard Channels Only. */
} EDMA_CH_t;


/* Enable */
typedef enum EDMA_ENABLE_enum
{
    EDMA_ENABLE_CLEAR_gc = (0x00), /* Enable - CLEAR */
    EDMA_ENABLE_SET_gc   = (0x80), /* Enable - SET */
} EDMA_ENABLE_t;

/* Software Reset */
typedef enum EDMA_RESET_enum
{
    EDMA_RESET_CLEAR_gc = (0x00), /* Software Reset - CLEAR */
    EDMA_RESET_SET_gc   = (0x40), /* Software Reset - SET */
} EDMA_RESET_t;

/* Channel Mode */
typedef enum EDMA_CHMODE_enum
{
    EDMA_CHMODE_PER0123_gc = (0x00<<4), /* Channels 0, 1, 2 and 3 in peripheal conf. */
    EDMA_CHMODE_STD0_gc    = (0x01<<4), /* Channel 0 in standard conf.; channels 2 and 3 in peripheral conf. */
    EDMA_CHMODE_STD2_gc    = (0x02<<4), /* Channel 2 in standard conf.; channels 0 and 1 in peripheral conf. */
    EDMA_CHMODE_STD02_gc   = (0x03<<4), /* Channels 0 and 2 in standard conf. */
} EDMA_CHMODE_t;

/* Double Buffer Mode */
typedef enum EDMA_DBUFMODE_enum
{
    EDMA_DBUFMODE_DISABLE_gc = (0x00<<2), /* No double buffer enabled */
    EDMA_DBUFMODE_BUF01_gc   = (0x01<<2), /* Double buffer enabled on peripheral channels 0/1 (if exist)  */
    EDMA_DBUFMODE_BUF23_gc   = (0x02<<2), /* Double buffer enabled on peripheral channels 2/3 (if exist) */
    EDMA_DBUFMODE_BUF0123_gc = (0x03<<2), /* Double buffer enabled on peripheral channels 0/1 and 2/3 or standard channels 0/2 */
} EDMA_DBUFMODE_t;

/* Priority Mode */
typedef enum EDMA_PRIMODE_enum
{
    EDMA_PRIMODE_RR0123_gc = (0x00), /* Round robin on all channels */
    EDMA_PRIMODE_RR123_gc  = (0x01), /* Ch0 > round robin (Ch 1 ch2 Ch3) */
    EDMA_PRIMODE_RR23_gc   = (0x02), /* Ch0 > Ch 1 > round robin (Ch2 Ch3) */
    EDMA_PRIMODE_CH0123_gc = (0x03), /* Ch0 > Ch1 > Ch2 > Ch3  */
} EDMA_PRIMODE_t;

/* Channel 3 Transaction Error Interrupt Flag */
typedef enum EDMA_CH3ERRIF_enum
{
    EDMA_CH3ERRIF_CLEAR_gc = (0x00), /* Channel 3 Transaction Error Interrupt Flag - CLEAR */
    EDMA_CH3ERRIF_SET_gc   = (0x80), /* Channel 3 Transaction Error Interrupt Flag - SET */
} EDMA_CH3ERRIF_t;

/* Channel 2 Transaction Error Interrupt Flag */
typedef enum EDMA_CH2ERRIF_enum
{
    EDMA_CH2ERRIF_CLEAR_gc = (0x00), /* Channel 2 Transaction Error Interrupt Flag - CLEAR */
    EDMA_CH2ERRIF_SET_gc   = (0x40), /* Channel 2 Transaction Error Interrupt Flag - SET */
} EDMA_CH2ERRIF_t;

/* Channel 1 Transaction Error Interrupt Flag */
typedef enum EDMA_CH1ERRIF_enum
{
    EDMA_CH1ERRIF_CLEAR_gc = (0x00), /* Channel 1 Transaction Error Interrupt Flag - CLEAR */
    EDMA_CH1ERRIF_SET_gc   = (0x20), /* Channel 1 Transaction Error Interrupt Flag - SET */
} EDMA_CH1ERRIF_t;

/* Channel 0 Transaction Error Interrupt Flag */
typedef enum EDMA_CH0ERRIF_enum
{
    EDMA_CH0ERRIF_CLEAR_gc = (0x00), /* Channel 0 Transaction Error Interrupt Flag - CLEAR */
    EDMA_CH0ERRIF_SET_gc   = (0x10), /* Channel 0 Transaction Error Interrupt Flag - SET */
} EDMA_CH0ERRIF_t;

/* Channel 3 Transaction Complete Interrupt Flag */
typedef enum EDMA_CH3TRNFIF_enum
{
    EDMA_CH3TRNFIF_CLEAR_gc = (0x00), /* Channel 3 Transaction Complete Interrupt Flag - CLEAR */
    EDMA_CH3TRNFIF_SET_gc   = (0x08), /* Channel 3 Transaction Complete Interrupt Flag - SET */
} EDMA_CH3TRNFIF_t;

/* Channel 2 Transaction Complete Interrupt Flag */
typedef enum EDMA_CH2TRNFIF_enum
{
    EDMA_CH2TRNFIF_CLEAR_gc = (0x00), /* Channel 2 Transaction Complete Interrupt Flag - CLEAR */
    EDMA_CH2TRNFIF_SET_gc   = (0x04), /* Channel 2 Transaction Complete Interrupt Flag - SET */
} EDMA_CH2TRNFIF_t;

/* Channel 1 Transaction Complete Interrupt Flag */
typedef enum EDMA_CH1TRNFIF_enum
{
    EDMA_CH1TRNFIF_CLEAR_gc = (0x00), /* Channel 1 Transaction Complete Interrupt Flag - CLEAR */
    EDMA_CH1TRNFIF_SET_gc   = (0x02), /* Channel 1 Transaction Complete Interrupt Flag - SET */
} EDMA_CH1TRNFIF_t;

/* Channel 0 Transaction Complete Interrupt Flag */
typedef enum EDMA_CH0TRNFIF_enum
{
    EDMA_CH0TRNFIF_CLEAR_gc = (0x00), /* Channel 0 Transaction Complete Interrupt Flag - CLEAR */
    EDMA_CH0TRNFIF_SET_gc   = (0x01), /* Channel 0 Transaction Complete Interrupt Flag - SET */
} EDMA_CH0TRNFIF_t;

/* Channel 3 Busy Flag */
typedef enum EDMA_CH3BUSY_enum
{
    EDMA_CH3BUSY_CLEAR_gc = (0x00), /* Channel 3 Busy Flag - CLEAR */
    EDMA_CH3BUSY_SET_gc   = (0x80), /* Channel 3 Busy Flag - SET */
} EDMA_CH3BUSY_t;

/* Channel 2 Busy Flag */
typedef enum EDMA_CH2BUSY_enum
{
    EDMA_CH2BUSY_CLEAR_gc = (0x00), /* Channel 2 Busy Flag - CLEAR */
    EDMA_CH2BUSY_SET_gc   = (0x40), /* Channel 2 Busy Flag - SET */
} EDMA_CH2BUSY_t;

/* Channel 1 Busy Flag */
typedef enum EDMA_CH1BUSY_enum
{
    EDMA_CH1BUSY_CLEAR_gc = (0x00), /* Channel 1 Busy Flag - CLEAR */
    EDMA_CH1BUSY_SET_gc   = (0x20), /* Channel 1 Busy Flag - SET */
} EDMA_CH1BUSY_t;

/* Channel 0 Busy Flag */
typedef enum EDMA_CH0BUSY_enum
{
    EDMA_CH0BUSY_CLEAR_gc = (0x00), /* Channel 0 Busy Flag - CLEAR */
    EDMA_CH0BUSY_SET_gc   = (0x10), /* Channel 0 Busy Flag - SET */
} EDMA_CH0BUSY_t;

/* Channel 3 Pending Flag */
typedef enum EDMA_CH3PEND_enum
{
    EDMA_CH3PEND_CLEAR_gc = (0x00), /* Channel 3 Pending Flag - CLEAR */
    EDMA_CH3PEND_SET_gc   = (0x08), /* Channel 3 Pending Flag - SET */
} EDMA_CH3PEND_t;

/* Channel 2 Pending Flag */
typedef enum EDMA_CH2PEND_enum
{
    EDMA_CH2PEND_CLEAR_gc = (0x00), /* Channel 2 Pending Flag - CLEAR */
    EDMA_CH2PEND_SET_gc   = (0x04), /* Channel 2 Pending Flag - SET */
} EDMA_CH2PEND_t;

/* Channel 1 Pending Flag */
typedef enum EDMA_CH1PEND_enum
{
    EDMA_CH1PEND_CLEAR_gc = (0x00), /* Channel 1 Pending Flag - CLEAR */
    EDMA_CH1PEND_SET_gc   = (0x02), /* Channel 1 Pending Flag - SET */
} EDMA_CH1PEND_t;

/* Channel 0 Pending Flag */
typedef enum EDMA_CH0PEND_enum
{
    EDMA_CH0PEND_CLEAR_gc = (0x00), /* Channel 0 Pending Flag - CLEAR */
    EDMA_CH0PEND_SET_gc   = (0x01), /* Channel 0 Pending Flag - SET */
} EDMA_CH0PEND_t;

/* Channel Enable */
typedef enum EDMA_CH_ENABLE_enum
{
    EDMA_CH_ENABLE_CLEAR_gc = (0x00), /* Channel Enable - CLEAR */
    EDMA_CH_ENABLE_SET_gc   = (0x80), /* Channel Enable - SET */
} EDMA_CH_ENABLE_t;

/* Channel Software Reset */
typedef enum EDMA_CH_RESET_enum
{
    EDMA_CH_RESET_CLEAR_gc = (0x00), /* Channel Software Reset - CLEAR */
    EDMA_CH_RESET_SET_gc   = (0x40), /* Channel Software Reset - SET */
} EDMA_CH_RESET_t;

/* Channel Repeat Mode */
typedef enum EDMA_CH_REPEAT_enum
{
    EDMA_CH_REPEAT_CLEAR_gc = (0x00), /* Channel Repeat Mode - CLEAR */
    EDMA_CH_REPEAT_SET_gc   = (0x20), /* Channel Repeat Mode - SET */
} EDMA_CH_REPEAT_t;

/* Channel Transfer Request */
typedef enum EDMA_CH_TRFREQ_enum
{
    EDMA_CH_TRFREQ_CLEAR_gc = (0x00), /* Channel Transfer Request - CLEAR */
    EDMA_CH_TRFREQ_SET_gc   = (0x10), /* Channel Transfer Request - SET */
} EDMA_CH_TRFREQ_t;

/* Channel Single Shot Data Transfer */
typedef enum EDMA_CH_SINGLE_enum
{
    EDMA_CH_SINGLE_CLEAR_gc = (0x00), /* Channel Single Shot Data Transfer - CLEAR */
    EDMA_CH_SINGLE_SET_gc   = (0x04), /* Channel Single Shot Data Transfer - SET */
} EDMA_CH_SINGLE_t;

/* Channel 2-bytes Burst Length */
typedef enum EDMA_CH_BURSTLEN_enum
{
    EDMA_CH_BURSTLEN_CLEAR_gc = (0x00), /* Channel 2-bytes Burst Length - CLEAR */
    EDMA_CH_BURSTLEN_SET_gc   = (0x01), /* Channel 2-bytes Burst Length - SET */
} EDMA_CH_BURSTLEN_t;

/* Channel Block Transfer Busy */
typedef enum EDMA_CH_CHBUSY_enum
{
    EDMA_CH_CHBUSY_CLEAR_gc = (0x00), /* Channel Block Transfer Busy - CLEAR */
    EDMA_CH_CHBUSY_SET_gc   = (0x80), /* Channel Block Transfer Busy - SET */
} EDMA_CH_CHBUSY_t;

/* Channel Block Transfer Pending */
typedef enum EDMA_CH_CHPEND_enum
{
    EDMA_CH_CHPEND_CLEAR_gc = (0x00), /* Channel Block Transfer Pending - CLEAR */
    EDMA_CH_CHPEND_SET_gc   = (0x40), /* Channel Block Transfer Pending - SET */
} EDMA_CH_CHPEND_t;

/* Channel Transaction Error Interrupt Flag */
typedef enum EDMA_CH_ERRIF_enum
{
    EDMA_CH_ERRIF_CLEAR_gc = (0x00), /* Channel Transaction Error Interrupt Flag - CLEAR */
    EDMA_CH_ERRIF_SET_gc   = (0x20), /* Channel Transaction Error Interrupt Flag - SET */
} EDMA_CH_ERRIF_t;

/* Channel Transaction Complete Interrupt Flag */
typedef enum EDMA_CH_TRNIF_enum
{
    EDMA_CH_TRNIF_CLEAR_gc = (0x00), /* Channel Transaction Complete Interrupt Flag - CLEAR */
    EDMA_CH_TRNIF_SET_gc   = (0x10), /* Channel Transaction Complete Interrupt Flag - SET */
} EDMA_CH_TRNIF_t;

/* Channel Transaction Error Interrupt Level */
typedef enum EDMA_CH_ERRINTLVL_enum
{
    EDMA_CH_ERRINTLVL_OFF_gc = (0x00<<2), /* Interrupt disabled */
    EDMA_CH_ERRINTLVL_LO_gc  = (0x01<<2), /* Low level */
    EDMA_CH_ERRINTLVL_MED_gc = (0x02<<2), /* Medium level */
    EDMA_CH_ERRINTLVL_HI_gc  = (0x03<<2), /* High level */
} EDMA_CH_ERRINTLVL_t;

/* Channel Transaction Complete Interrupt Level */
typedef enum EDMA_CH_TRNINTLVL_enum
{
    EDMA_CH_TRNINTLVL_OFF_gc = (0x00), /* Interrupt disabled */
    EDMA_CH_TRNINTLVL_LO_gc  = (0x01), /* Low level */
    EDMA_CH_TRNINTLVL_MED_gc = (0x02), /* Medium level */
    EDMA_CH_TRNINTLVL_HI_gc  = (0x03), /* High level */
} EDMA_CH_TRNINTLVL_t;

/* Memory Address Reload for Peripheral Ch., or Source Address Reload for Standard Ch. */
typedef enum EDMA_CH_RELOAD_enum
{
    EDMA_CH_RELOAD_NONE_gc        = (0x00<<4), /* No reload */
    EDMA_CH_RELOAD_BLOCK_gc       = (0x01<<4), /* Reload at end of each block transfer */
    EDMA_CH_RELOAD_BURST_gc       = (0x02<<4), /* Reload at end of each burst transfer */
    EDMA_CH_RELOAD_TRANSACTION_gc = (0x03<<4), /* Reload at end of each transaction */
} EDMA_CH_RELOAD_t;

/* Memory Address Mode for Peripheral Ch., or Source Address Mode for Standard Ch. */
typedef enum EDMA_CH_DIR_enum
{
    EDMA_CH_DIR_FIXED_gc = (0x00), /* Fixed */
    EDMA_CH_DIR_INC_gc   = (0x01), /* Increment */
    EDMA_CH_DIR_MP1_gc   = (0x04), /* If Peripheral Ch. (Per ==> Mem), 1-byte 'mask-match' (data: ADDRL, mask: ADDRH), else reserved conf.  */
    EDMA_CH_DIR_MP2_gc   = (0x05), /* If Peripheral Ch. (Per ==> Mem), 1-byte 'OR-match' (data-1: ADDRL OR data-2: ADDRH), else reserved conf.  */
    EDMA_CH_DIR_MP3_gc   = (0x06), /* If Peripheral Ch. (Per ==> Mem), 2-byte 'match' (data-1: ADDRL followed by data-2: ADDRH), else reserved conf.  */
} EDMA_CH_DIR_t;

/* Destination Address Reload for Standard Channels Only. */
typedef enum EDMA_CH_DESTRELOAD_enum
{
    EDMA_CH_DESTRELOAD_NONE_gc        = (0x00<<4), /* No reload */
    EDMA_CH_DESTRELOAD_BLOCK_gc       = (0x01<<4), /* Reload at end of each block transfer */
    EDMA_CH_DESTRELOAD_BURST_gc       = (0x02<<4), /* Reload at end of each burst transfer */
    EDMA_CH_DESTRELOAD_TRANSACTION_gc = (0x03<<4), /* Reload at end of each transaction */
} EDMA_CH_DESTRELOAD_t;

/* Destination Address Mode for Standard Channels Only. */
typedef enum EDMA_CH_DESTDIR_enum
{
    EDMA_CH_DESTDIR_FIXED_gc = (0x00), /* Fixed */
    EDMA_CH_DESTDIR_INC_gc   = (0x01), /* Increment */
    EDMA_CH_DESTDIR_MP1_gc   = (0x04), /* 1-byte 'mask-match' (data: ADDRL, mask: ADDRH) */
    EDMA_CH_DESTDIR_MP2_gc   = (0x05), /* 1-byte 'OR-match' (data-1: ADDRL OR data-2: ADDRH) */
    EDMA_CH_DESTDIR_MP3_gc   = (0x06), /* 2-byte 'match' (data1: ADDRL followed by data2: ADDRH) */
} EDMA_CH_DESTDIR_t;

/* Channel Trigger Source */
typedef enum EDMA_CH_TRIGSRC_enum
{
    EDMA_CH_TRIGSRC_OFF_gc         = (0x00), /* Software triggers only */
    EDMA_CH_TRIGSRC_EVSYS_CH0_gc   = (0x01), /* Event CH0 as trigger (Standard Channels Only) */
    EDMA_CH_TRIGSRC_EVSYS_CH1_gc   = (0x02), /* Event CH1 as trigger (Standard Channels Only) */
    EDMA_CH_TRIGSRC_EVSYS_CH2_gc   = (0x03), /* Event CH2 as trigger (Standard Channels Only) */
    EDMA_CH_TRIGSRC_ADCA_CH0_gc    = (0x10), /* ADCA CH0 as trigger */
    EDMA_CH_TRIGSRC_DACA_CH0_gc    = (0x15), /* DACA CH0 as trigger */
    EDMA_CH_TRIGSRC_DACA_CH1_gc    = (0x16), /* DACA CH1 as trigger */
    EDMA_CH_TRIGSRC_TCC4_OVF_gc    = (0x40), /* TCC4 overflow/underflow as trigger (Standard Channels Only) */
    EDMA_CH_TRIGSRC_TCC4_ERR_gc    = (0x41), /* TCC4 error as trigger (Standard Channels Only) */
    EDMA_CH_TRIGSRC_TCC4_CCA_gc    = (0x42), /* TCC4 compare or capture channel A as trigger (Standard Channels Only) */
    EDMA_CH_TRIGSRC_TCC4_CCB_gc    = (0x43), /* TCC4 compare or capture channel B as trigger (Standard Channels Only) */
    EDMA_CH_TRIGSRC_TCC4_CCC_gc    = (0x44), /* TCC4 compare or capture channel C as trigger (Standard Channels Only) */
    EDMA_CH_TRIGSRC_TCC4_CCD_gc    = (0x45), /* TCC4 compare or capture channel D as trigger (Standard Channels Only) */
    EDMA_CH_TRIGSRC_TCC5_OVF_gc    = (0x46), /* TCC5 overflow/underflow as trigger (Standard Channels Only) */
    EDMA_CH_TRIGSRC_TCC5_ERR_gc    = (0x47), /* TCC5 error as trigger (Standard Channels Only) */
    EDMA_CH_TRIGSRC_TCC5_CCA_gc    = (0x48), /* TCC5 compare or capture channel A as trigger (Standard Channels Only) */
    EDMA_CH_TRIGSRC_TCC5_CCB_gc    = (0x49), /* TCC5 compare or capture channel B as trigger (Standard Channels Only) */
    EDMA_CH_TRIGSRC_SPIC_RXC_gc    = (0x4A), /* SPI C transfer complete (SPI Standard Mode) or SPI C receive complete as trigger (SPI Buffer Modes) */
    EDMA_CH_TRIGSRC_SPIC_DRE_gc    = (0x4B), /* SPI C transfer complete (SPI Standard Mode) or SPI C data register empty as trigger (SPI Buffer modes) */
    EDMA_CH_TRIGSRC_USARTC0_RXC_gc = (0x4C), /* USART C0 receive complete as trigger */
    EDMA_CH_TRIGSRC_USARTC0_DRE_gc = (0x4D), /* USART C0 data register empty as trigger */
    EDMA_CH_TRIGSRC_TCD5_OVF_gc    = (0x66), /* TCD5 overflow/underflow as trigger (Standard Channels Only) */
    EDMA_CH_TRIGSRC_TCD5_ERR_gc    = (0x67), /* TCD5 error as trigger (Standard Channels Only) */
    EDMA_CH_TRIGSRC_TCD5_CCA_gc    = (0x68), /* TCD5 compare or capture channel A as trigger (Standard Channels Only) */
    EDMA_CH_TRIGSRC_TCD5_CCB_gc    = (0x69), /* TCD5 compare or capture channel B as trigger (Standard Channels Only) */
    EDMA_CH_TRIGSRC_USARTD0_RXC_gc = (0x6C), /* USART D0 receive complete as trigger */
    EDMA_CH_TRIGSRC_USARTD0_DRE_gc = (0x6D), /* USART D0 data register empty as trigger */
} EDMA_CH_TRIGSRC_t;

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
    register8_t DFCTRL;  /* Digital Filter Control Register */
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
    EVSYS_CHMUX_ADCA_CH0_gc        = (0x20), /* ADC A Channel 0 */
    EVSYS_CHMUX_PORTA_PIN0_gc      = (0x50), /* Port A, Pin0 */
    EVSYS_CHMUX_PORTA_PIN1_gc      = (0x51), /* Port A, Pin1 */
    EVSYS_CHMUX_PORTA_PIN2_gc      = (0x52), /* Port A, Pin2 */
    EVSYS_CHMUX_PORTA_PIN3_gc      = (0x53), /* Port A, Pin3 */
    EVSYS_CHMUX_PORTA_PIN4_gc      = (0x54), /* Port A, Pin4 */
    EVSYS_CHMUX_PORTA_PIN5_gc      = (0x55), /* Port A, Pin5 */
    EVSYS_CHMUX_PORTA_PIN6_gc      = (0x56), /* Port A, Pin6 */
    EVSYS_CHMUX_PORTA_PIN7_gc      = (0x57), /* Port A, Pin7 */
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
    EVSYS_CHMUX_XCL_UNF0_gc        = (0xB0), /* XCL BTC0 underflow */
    EVSYS_CHMUX_XCL_UNF1_gc        = (0xB1), /* XCL BTC1 underflow */
    EVSYS_CHMUX_XCL_CC0_gc         = (0xB2), /* XCL BTC0 capture or compare */
    EVSYS_CHMUX_XCL_CC1_gc         = (0xB3), /* XCL BTC1 capture or compare */
    EVSYS_CHMUX_XCL_PEC0_gc        = (0xB4), /* XCL PEC0 restart */
    EVSYS_CHMUX_XCL_PEC1_gc        = (0xB5), /* XCL PEC1 restart */
    EVSYS_CHMUX_XCL_LUT0_gc        = (0xB6), /* XCL LUT0 output */
    EVSYS_CHMUX_XCL_LUT1_gc        = (0xB7), /* XCL LUT1 output */
    EVSYS_CHMUX_TCC4_OVF_gc        = (0xC0), /* Timer/Counter C4 Overflow */
    EVSYS_CHMUX_TCC4_ERR_gc        = (0xC1), /* Timer/Counter C4 Error */
    EVSYS_CHMUX_TCC4_CCA_gc        = (0xC4), /* Timer/Counter C4 Compare or Capture A */
    EVSYS_CHMUX_TCC4_CCB_gc        = (0xC5), /* Timer/Counter C4 Compare or Capture B */
    EVSYS_CHMUX_TCC4_CCC_gc        = (0xC6), /* Timer/Counter C4 Compare or Capture C */
    EVSYS_CHMUX_TCC4_CCD_gc        = (0xC7), /* Timer/Counter C4 Compare or Capture D */
    EVSYS_CHMUX_TCC5_OVF_gc        = (0xC8), /* Timer/Counter C5 Overflow */
    EVSYS_CHMUX_TCC5_ERR_gc        = (0xC9), /* Timer/Counter C5 Error */
    EVSYS_CHMUX_TCC5_CCA_gc        = (0xCC), /* Timer/Counter C5 Compare or Capture A */
    EVSYS_CHMUX_TCC5_CCB_gc        = (0xCD), /* Timer/Counter C5 Compare or Capture B */
    EVSYS_CHMUX_TCD5_OVF_gc        = (0xD8), /* Timer/Counter D5 Overflow */
    EVSYS_CHMUX_TCD5_ERR_gc        = (0xD9), /* Timer/Counter D5 Error */
    EVSYS_CHMUX_TCD5_CCA_gc        = (0xDC), /* Timer/Counter D5 Compare or Capture A */
    EVSYS_CHMUX_TCD5_CCB_gc        = (0xDD), /* Timer/Counter D5 Compare or Capture B */
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
    EVSYS_CHMUX_ADCA_CH0_gc        = (0x20), /* ADC A Channel 0 */
    EVSYS_CHMUX_PORTA_PIN0_gc      = (0x50), /* Port A, Pin0 */
    EVSYS_CHMUX_PORTA_PIN1_gc      = (0x51), /* Port A, Pin1 */
    EVSYS_CHMUX_PORTA_PIN2_gc      = (0x52), /* Port A, Pin2 */
    EVSYS_CHMUX_PORTA_PIN3_gc      = (0x53), /* Port A, Pin3 */
    EVSYS_CHMUX_PORTA_PIN4_gc      = (0x54), /* Port A, Pin4 */
    EVSYS_CHMUX_PORTA_PIN5_gc      = (0x55), /* Port A, Pin5 */
    EVSYS_CHMUX_PORTA_PIN6_gc      = (0x56), /* Port A, Pin6 */
    EVSYS_CHMUX_PORTA_PIN7_gc      = (0x57), /* Port A, Pin7 */
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
    EVSYS_CHMUX_XCL_UNF0_gc        = (0xB0), /* XCL BTC0 underflow */
    EVSYS_CHMUX_XCL_UNF1_gc        = (0xB1), /* XCL BTC1 underflow */
    EVSYS_CHMUX_XCL_CC0_gc         = (0xB2), /* XCL BTC0 capture or compare */
    EVSYS_CHMUX_XCL_CC1_gc         = (0xB3), /* XCL BTC1 capture or compare */
    EVSYS_CHMUX_XCL_PEC0_gc        = (0xB4), /* XCL PEC0 restart */
    EVSYS_CHMUX_XCL_PEC1_gc        = (0xB5), /* XCL PEC1 restart */
    EVSYS_CHMUX_XCL_LUT0_gc        = (0xB6), /* XCL LUT0 output */
    EVSYS_CHMUX_XCL_LUT1_gc        = (0xB7), /* XCL LUT1 output */
    EVSYS_CHMUX_TCC4_OVF_gc        = (0xC0), /* Timer/Counter C4 Overflow */
    EVSYS_CHMUX_TCC4_ERR_gc        = (0xC1), /* Timer/Counter C4 Error */
    EVSYS_CHMUX_TCC4_CCA_gc        = (0xC4), /* Timer/Counter C4 Compare or Capture A */
    EVSYS_CHMUX_TCC4_CCB_gc        = (0xC5), /* Timer/Counter C4 Compare or Capture B */
    EVSYS_CHMUX_TCC4_CCC_gc        = (0xC6), /* Timer/Counter C4 Compare or Capture C */
    EVSYS_CHMUX_TCC4_CCD_gc        = (0xC7), /* Timer/Counter C4 Compare or Capture D */
    EVSYS_CHMUX_TCC5_OVF_gc        = (0xC8), /* Timer/Counter C5 Overflow */
    EVSYS_CHMUX_TCC5_ERR_gc        = (0xC9), /* Timer/Counter C5 Error */
    EVSYS_CHMUX_TCC5_CCA_gc        = (0xCC), /* Timer/Counter C5 Compare or Capture A */
    EVSYS_CHMUX_TCC5_CCB_gc        = (0xCD), /* Timer/Counter C5 Compare or Capture B */
    EVSYS_CHMUX_TCD5_OVF_gc        = (0xD8), /* Timer/Counter D5 Overflow */
    EVSYS_CHMUX_TCD5_ERR_gc        = (0xD9), /* Timer/Counter D5 Error */
    EVSYS_CHMUX_TCD5_CCA_gc        = (0xDC), /* Timer/Counter D5 Compare or Capture A */
    EVSYS_CHMUX_TCD5_CCB_gc        = (0xDD), /* Timer/Counter D5 Compare or Capture B */
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
    EVSYS_CHMUX_ADCA_CH0_gc        = (0x20), /* ADC A Channel 0 */
    EVSYS_CHMUX_PORTA_PIN0_gc      = (0x50), /* Port A, Pin0 */
    EVSYS_CHMUX_PORTA_PIN1_gc      = (0x51), /* Port A, Pin1 */
    EVSYS_CHMUX_PORTA_PIN2_gc      = (0x52), /* Port A, Pin2 */
    EVSYS_CHMUX_PORTA_PIN3_gc      = (0x53), /* Port A, Pin3 */
    EVSYS_CHMUX_PORTA_PIN4_gc      = (0x54), /* Port A, Pin4 */
    EVSYS_CHMUX_PORTA_PIN5_gc      = (0x55), /* Port A, Pin5 */
    EVSYS_CHMUX_PORTA_PIN6_gc      = (0x56), /* Port A, Pin6 */
    EVSYS_CHMUX_PORTA_PIN7_gc      = (0x57), /* Port A, Pin7 */
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
    EVSYS_CHMUX_XCL_UNF0_gc        = (0xB0), /* XCL BTC0 underflow */
    EVSYS_CHMUX_XCL_UNF1_gc        = (0xB1), /* XCL BTC1 underflow */
    EVSYS_CHMUX_XCL_CC0_gc         = (0xB2), /* XCL BTC0 capture or compare */
    EVSYS_CHMUX_XCL_CC1_gc         = (0xB3), /* XCL BTC1 capture or compare */
    EVSYS_CHMUX_XCL_PEC0_gc        = (0xB4), /* XCL PEC0 restart */
    EVSYS_CHMUX_XCL_PEC1_gc        = (0xB5), /* XCL PEC1 restart */
    EVSYS_CHMUX_XCL_LUT0_gc        = (0xB6), /* XCL LUT0 output */
    EVSYS_CHMUX_XCL_LUT1_gc        = (0xB7), /* XCL LUT1 output */
    EVSYS_CHMUX_TCC4_OVF_gc        = (0xC0), /* Timer/Counter C4 Overflow */
    EVSYS_CHMUX_TCC4_ERR_gc        = (0xC1), /* Timer/Counter C4 Error */
    EVSYS_CHMUX_TCC4_CCA_gc        = (0xC4), /* Timer/Counter C4 Compare or Capture A */
    EVSYS_CHMUX_TCC4_CCB_gc        = (0xC5), /* Timer/Counter C4 Compare or Capture B */
    EVSYS_CHMUX_TCC4_CCC_gc        = (0xC6), /* Timer/Counter C4 Compare or Capture C */
    EVSYS_CHMUX_TCC4_CCD_gc        = (0xC7), /* Timer/Counter C4 Compare or Capture D */
    EVSYS_CHMUX_TCC5_OVF_gc        = (0xC8), /* Timer/Counter C5 Overflow */
    EVSYS_CHMUX_TCC5_ERR_gc        = (0xC9), /* Timer/Counter C5 Error */
    EVSYS_CHMUX_TCC5_CCA_gc        = (0xCC), /* Timer/Counter C5 Compare or Capture A */
    EVSYS_CHMUX_TCC5_CCB_gc        = (0xCD), /* Timer/Counter C5 Compare or Capture B */
    EVSYS_CHMUX_TCD5_OVF_gc        = (0xD8), /* Timer/Counter D5 Overflow */
    EVSYS_CHMUX_TCD5_ERR_gc        = (0xD9), /* Timer/Counter D5 Error */
    EVSYS_CHMUX_TCD5_CCA_gc        = (0xDC), /* Timer/Counter D5 Compare or Capture A */
    EVSYS_CHMUX_TCD5_CCB_gc        = (0xDD), /* Timer/Counter D5 Compare or Capture B */
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
    EVSYS_CHMUX_ADCA_CH0_gc        = (0x20), /* ADC A Channel 0 */
    EVSYS_CHMUX_PORTA_PIN0_gc      = (0x50), /* Port A, Pin0 */
    EVSYS_CHMUX_PORTA_PIN1_gc      = (0x51), /* Port A, Pin1 */
    EVSYS_CHMUX_PORTA_PIN2_gc      = (0x52), /* Port A, Pin2 */
    EVSYS_CHMUX_PORTA_PIN3_gc      = (0x53), /* Port A, Pin3 */
    EVSYS_CHMUX_PORTA_PIN4_gc      = (0x54), /* Port A, Pin4 */
    EVSYS_CHMUX_PORTA_PIN5_gc      = (0x55), /* Port A, Pin5 */
    EVSYS_CHMUX_PORTA_PIN6_gc      = (0x56), /* Port A, Pin6 */
    EVSYS_CHMUX_PORTA_PIN7_gc      = (0x57), /* Port A, Pin7 */
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
    EVSYS_CHMUX_XCL_UNF0_gc        = (0xB0), /* XCL BTC0 underflow */
    EVSYS_CHMUX_XCL_UNF1_gc        = (0xB1), /* XCL BTC1 underflow */
    EVSYS_CHMUX_XCL_CC0_gc         = (0xB2), /* XCL BTC0 capture or compare */
    EVSYS_CHMUX_XCL_CC1_gc         = (0xB3), /* XCL BTC1 capture or compare */
    EVSYS_CHMUX_XCL_PEC0_gc        = (0xB4), /* XCL PEC0 restart */
    EVSYS_CHMUX_XCL_PEC1_gc        = (0xB5), /* XCL PEC1 restart */
    EVSYS_CHMUX_XCL_LUT0_gc        = (0xB6), /* XCL LUT0 output */
    EVSYS_CHMUX_XCL_LUT1_gc        = (0xB7), /* XCL LUT1 output */
    EVSYS_CHMUX_TCC4_OVF_gc        = (0xC0), /* Timer/Counter C4 Overflow */
    EVSYS_CHMUX_TCC4_ERR_gc        = (0xC1), /* Timer/Counter C4 Error */
    EVSYS_CHMUX_TCC4_CCA_gc        = (0xC4), /* Timer/Counter C4 Compare or Capture A */
    EVSYS_CHMUX_TCC4_CCB_gc        = (0xC5), /* Timer/Counter C4 Compare or Capture B */
    EVSYS_CHMUX_TCC4_CCC_gc        = (0xC6), /* Timer/Counter C4 Compare or Capture C */
    EVSYS_CHMUX_TCC4_CCD_gc        = (0xC7), /* Timer/Counter C4 Compare or Capture D */
    EVSYS_CHMUX_TCC5_OVF_gc        = (0xC8), /* Timer/Counter C5 Overflow */
    EVSYS_CHMUX_TCC5_ERR_gc        = (0xC9), /* Timer/Counter C5 Error */
    EVSYS_CHMUX_TCC5_CCA_gc        = (0xCC), /* Timer/Counter C5 Compare or Capture A */
    EVSYS_CHMUX_TCC5_CCB_gc        = (0xCD), /* Timer/Counter C5 Compare or Capture B */
    EVSYS_CHMUX_TCD5_OVF_gc        = (0xD8), /* Timer/Counter D5 Overflow */
    EVSYS_CHMUX_TCD5_ERR_gc        = (0xD9), /* Timer/Counter D5 Error */
    EVSYS_CHMUX_TCD5_CCA_gc        = (0xDC), /* Timer/Counter D5 Compare or Capture A */
    EVSYS_CHMUX_TCD5_CCB_gc        = (0xDD), /* Timer/Counter D5 Compare or Capture B */
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
    EVSYS_CHMUX_ADCA_CH0_gc        = (0x20), /* ADC A Channel 0 */
    EVSYS_CHMUX_PORTA_PIN0_gc      = (0x50), /* Port A, Pin0 */
    EVSYS_CHMUX_PORTA_PIN1_gc      = (0x51), /* Port A, Pin1 */
    EVSYS_CHMUX_PORTA_PIN2_gc      = (0x52), /* Port A, Pin2 */
    EVSYS_CHMUX_PORTA_PIN3_gc      = (0x53), /* Port A, Pin3 */
    EVSYS_CHMUX_PORTA_PIN4_gc      = (0x54), /* Port A, Pin4 */
    EVSYS_CHMUX_PORTA_PIN5_gc      = (0x55), /* Port A, Pin5 */
    EVSYS_CHMUX_PORTA_PIN6_gc      = (0x56), /* Port A, Pin6 */
    EVSYS_CHMUX_PORTA_PIN7_gc      = (0x57), /* Port A, Pin7 */
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
    EVSYS_CHMUX_XCL_UNF0_gc        = (0xB0), /* XCL BTC0 underflow */
    EVSYS_CHMUX_XCL_UNF1_gc        = (0xB1), /* XCL BTC1 underflow */
    EVSYS_CHMUX_XCL_CC0_gc         = (0xB2), /* XCL BTC0 capture or compare */
    EVSYS_CHMUX_XCL_CC1_gc         = (0xB3), /* XCL BTC1 capture or compare */
    EVSYS_CHMUX_XCL_PEC0_gc        = (0xB4), /* XCL PEC0 restart */
    EVSYS_CHMUX_XCL_PEC1_gc        = (0xB5), /* XCL PEC1 restart */
    EVSYS_CHMUX_XCL_LUT0_gc        = (0xB6), /* XCL LUT0 output */
    EVSYS_CHMUX_XCL_LUT1_gc        = (0xB7), /* XCL LUT1 output */
    EVSYS_CHMUX_TCC4_OVF_gc        = (0xC0), /* Timer/Counter C4 Overflow */
    EVSYS_CHMUX_TCC4_ERR_gc        = (0xC1), /* Timer/Counter C4 Error */
    EVSYS_CHMUX_TCC4_CCA_gc        = (0xC4), /* Timer/Counter C4 Compare or Capture A */
    EVSYS_CHMUX_TCC4_CCB_gc        = (0xC5), /* Timer/Counter C4 Compare or Capture B */
    EVSYS_CHMUX_TCC4_CCC_gc        = (0xC6), /* Timer/Counter C4 Compare or Capture C */
    EVSYS_CHMUX_TCC4_CCD_gc        = (0xC7), /* Timer/Counter C4 Compare or Capture D */
    EVSYS_CHMUX_TCC5_OVF_gc        = (0xC8), /* Timer/Counter C5 Overflow */
    EVSYS_CHMUX_TCC5_ERR_gc        = (0xC9), /* Timer/Counter C5 Error */
    EVSYS_CHMUX_TCC5_CCA_gc        = (0xCC), /* Timer/Counter C5 Compare or Capture A */
    EVSYS_CHMUX_TCC5_CCB_gc        = (0xCD), /* Timer/Counter C5 Compare or Capture B */
    EVSYS_CHMUX_TCD5_OVF_gc        = (0xD8), /* Timer/Counter D5 Overflow */
    EVSYS_CHMUX_TCD5_ERR_gc        = (0xD9), /* Timer/Counter D5 Error */
    EVSYS_CHMUX_TCD5_CCA_gc        = (0xDC), /* Timer/Counter D5 Compare or Capture A */
    EVSYS_CHMUX_TCD5_CCB_gc        = (0xDD), /* Timer/Counter D5 Compare or Capture B */
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
    EVSYS_CHMUX_ADCA_CH0_gc        = (0x20), /* ADC A Channel 0 */
    EVSYS_CHMUX_PORTA_PIN0_gc      = (0x50), /* Port A, Pin0 */
    EVSYS_CHMUX_PORTA_PIN1_gc      = (0x51), /* Port A, Pin1 */
    EVSYS_CHMUX_PORTA_PIN2_gc      = (0x52), /* Port A, Pin2 */
    EVSYS_CHMUX_PORTA_PIN3_gc      = (0x53), /* Port A, Pin3 */
    EVSYS_CHMUX_PORTA_PIN4_gc      = (0x54), /* Port A, Pin4 */
    EVSYS_CHMUX_PORTA_PIN5_gc      = (0x55), /* Port A, Pin5 */
    EVSYS_CHMUX_PORTA_PIN6_gc      = (0x56), /* Port A, Pin6 */
    EVSYS_CHMUX_PORTA_PIN7_gc      = (0x57), /* Port A, Pin7 */
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
    EVSYS_CHMUX_XCL_UNF0_gc        = (0xB0), /* XCL BTC0 underflow */
    EVSYS_CHMUX_XCL_UNF1_gc        = (0xB1), /* XCL BTC1 underflow */
    EVSYS_CHMUX_XCL_CC0_gc         = (0xB2), /* XCL BTC0 capture or compare */
    EVSYS_CHMUX_XCL_CC1_gc         = (0xB3), /* XCL BTC1 capture or compare */
    EVSYS_CHMUX_XCL_PEC0_gc        = (0xB4), /* XCL PEC0 restart */
    EVSYS_CHMUX_XCL_PEC1_gc        = (0xB5), /* XCL PEC1 restart */
    EVSYS_CHMUX_XCL_LUT0_gc        = (0xB6), /* XCL LUT0 output */
    EVSYS_CHMUX_XCL_LUT1_gc        = (0xB7), /* XCL LUT1 output */
    EVSYS_CHMUX_TCC4_OVF_gc        = (0xC0), /* Timer/Counter C4 Overflow */
    EVSYS_CHMUX_TCC4_ERR_gc        = (0xC1), /* Timer/Counter C4 Error */
    EVSYS_CHMUX_TCC4_CCA_gc        = (0xC4), /* Timer/Counter C4 Compare or Capture A */
    EVSYS_CHMUX_TCC4_CCB_gc        = (0xC5), /* Timer/Counter C4 Compare or Capture B */
    EVSYS_CHMUX_TCC4_CCC_gc        = (0xC6), /* Timer/Counter C4 Compare or Capture C */
    EVSYS_CHMUX_TCC4_CCD_gc        = (0xC7), /* Timer/Counter C4 Compare or Capture D */
    EVSYS_CHMUX_TCC5_OVF_gc        = (0xC8), /* Timer/Counter C5 Overflow */
    EVSYS_CHMUX_TCC5_ERR_gc        = (0xC9), /* Timer/Counter C5 Error */
    EVSYS_CHMUX_TCC5_CCA_gc        = (0xCC), /* Timer/Counter C5 Compare or Capture A */
    EVSYS_CHMUX_TCC5_CCB_gc        = (0xCD), /* Timer/Counter C5 Compare or Capture B */
    EVSYS_CHMUX_TCD5_OVF_gc        = (0xD8), /* Timer/Counter D5 Overflow */
    EVSYS_CHMUX_TCD5_ERR_gc        = (0xD9), /* Timer/Counter D5 Error */
    EVSYS_CHMUX_TCD5_CCA_gc        = (0xDC), /* Timer/Counter D5 Compare or Capture A */
    EVSYS_CHMUX_TCD5_CCB_gc        = (0xDD), /* Timer/Counter D5 Compare or Capture B */
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
    EVSYS_CHMUX_ADCA_CH0_gc        = (0x20), /* ADC A Channel 0 */
    EVSYS_CHMUX_PORTA_PIN0_gc      = (0x50), /* Port A, Pin0 */
    EVSYS_CHMUX_PORTA_PIN1_gc      = (0x51), /* Port A, Pin1 */
    EVSYS_CHMUX_PORTA_PIN2_gc      = (0x52), /* Port A, Pin2 */
    EVSYS_CHMUX_PORTA_PIN3_gc      = (0x53), /* Port A, Pin3 */
    EVSYS_CHMUX_PORTA_PIN4_gc      = (0x54), /* Port A, Pin4 */
    EVSYS_CHMUX_PORTA_PIN5_gc      = (0x55), /* Port A, Pin5 */
    EVSYS_CHMUX_PORTA_PIN6_gc      = (0x56), /* Port A, Pin6 */
    EVSYS_CHMUX_PORTA_PIN7_gc      = (0x57), /* Port A, Pin7 */
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
    EVSYS_CHMUX_XCL_UNF0_gc        = (0xB0), /* XCL BTC0 underflow */
    EVSYS_CHMUX_XCL_UNF1_gc        = (0xB1), /* XCL BTC1 underflow */
    EVSYS_CHMUX_XCL_CC0_gc         = (0xB2), /* XCL BTC0 capture or compare */
    EVSYS_CHMUX_XCL_CC1_gc         = (0xB3), /* XCL BTC1 capture or compare */
    EVSYS_CHMUX_XCL_PEC0_gc        = (0xB4), /* XCL PEC0 restart */
    EVSYS_CHMUX_XCL_PEC1_gc        = (0xB5), /* XCL PEC1 restart */
    EVSYS_CHMUX_XCL_LUT0_gc        = (0xB6), /* XCL LUT0 output */
    EVSYS_CHMUX_XCL_LUT1_gc        = (0xB7), /* XCL LUT1 output */
    EVSYS_CHMUX_TCC4_OVF_gc        = (0xC0), /* Timer/Counter C4 Overflow */
    EVSYS_CHMUX_TCC4_ERR_gc        = (0xC1), /* Timer/Counter C4 Error */
    EVSYS_CHMUX_TCC4_CCA_gc        = (0xC4), /* Timer/Counter C4 Compare or Capture A */
    EVSYS_CHMUX_TCC4_CCB_gc        = (0xC5), /* Timer/Counter C4 Compare or Capture B */
    EVSYS_CHMUX_TCC4_CCC_gc        = (0xC6), /* Timer/Counter C4 Compare or Capture C */
    EVSYS_CHMUX_TCC4_CCD_gc        = (0xC7), /* Timer/Counter C4 Compare or Capture D */
    EVSYS_CHMUX_TCC5_OVF_gc        = (0xC8), /* Timer/Counter C5 Overflow */
    EVSYS_CHMUX_TCC5_ERR_gc        = (0xC9), /* Timer/Counter C5 Error */
    EVSYS_CHMUX_TCC5_CCA_gc        = (0xCC), /* Timer/Counter C5 Compare or Capture A */
    EVSYS_CHMUX_TCC5_CCB_gc        = (0xCD), /* Timer/Counter C5 Compare or Capture B */
    EVSYS_CHMUX_TCD5_OVF_gc        = (0xD8), /* Timer/Counter D5 Overflow */
    EVSYS_CHMUX_TCD5_ERR_gc        = (0xD9), /* Timer/Counter D5 Error */
    EVSYS_CHMUX_TCD5_CCA_gc        = (0xDC), /* Timer/Counter D5 Compare or Capture A */
    EVSYS_CHMUX_TCD5_CCB_gc        = (0xDD), /* Timer/Counter D5 Compare or Capture B */
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
    EVSYS_CHMUX_ADCA_CH0_gc        = (0x20), /* ADC A Channel 0 */
    EVSYS_CHMUX_PORTA_PIN0_gc      = (0x50), /* Port A, Pin0 */
    EVSYS_CHMUX_PORTA_PIN1_gc      = (0x51), /* Port A, Pin1 */
    EVSYS_CHMUX_PORTA_PIN2_gc      = (0x52), /* Port A, Pin2 */
    EVSYS_CHMUX_PORTA_PIN3_gc      = (0x53), /* Port A, Pin3 */
    EVSYS_CHMUX_PORTA_PIN4_gc      = (0x54), /* Port A, Pin4 */
    EVSYS_CHMUX_PORTA_PIN5_gc      = (0x55), /* Port A, Pin5 */
    EVSYS_CHMUX_PORTA_PIN6_gc      = (0x56), /* Port A, Pin6 */
    EVSYS_CHMUX_PORTA_PIN7_gc      = (0x57), /* Port A, Pin7 */
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
    EVSYS_CHMUX_XCL_UNF0_gc        = (0xB0), /* XCL BTC0 underflow */
    EVSYS_CHMUX_XCL_UNF1_gc        = (0xB1), /* XCL BTC1 underflow */
    EVSYS_CHMUX_XCL_CC0_gc         = (0xB2), /* XCL BTC0 capture or compare */
    EVSYS_CHMUX_XCL_CC1_gc         = (0xB3), /* XCL BTC1 capture or compare */
    EVSYS_CHMUX_XCL_PEC0_gc        = (0xB4), /* XCL PEC0 restart */
    EVSYS_CHMUX_XCL_PEC1_gc        = (0xB5), /* XCL PEC1 restart */
    EVSYS_CHMUX_XCL_LUT0_gc        = (0xB6), /* XCL LUT0 output */
    EVSYS_CHMUX_XCL_LUT1_gc        = (0xB7), /* XCL LUT1 output */
    EVSYS_CHMUX_TCC4_OVF_gc        = (0xC0), /* Timer/Counter C4 Overflow */
    EVSYS_CHMUX_TCC4_ERR_gc        = (0xC1), /* Timer/Counter C4 Error */
    EVSYS_CHMUX_TCC4_CCA_gc        = (0xC4), /* Timer/Counter C4 Compare or Capture A */
    EVSYS_CHMUX_TCC4_CCB_gc        = (0xC5), /* Timer/Counter C4 Compare or Capture B */
    EVSYS_CHMUX_TCC4_CCC_gc        = (0xC6), /* Timer/Counter C4 Compare or Capture C */
    EVSYS_CHMUX_TCC4_CCD_gc        = (0xC7), /* Timer/Counter C4 Compare or Capture D */
    EVSYS_CHMUX_TCC5_OVF_gc        = (0xC8), /* Timer/Counter C5 Overflow */
    EVSYS_CHMUX_TCC5_ERR_gc        = (0xC9), /* Timer/Counter C5 Error */
    EVSYS_CHMUX_TCC5_CCA_gc        = (0xCC), /* Timer/Counter C5 Compare or Capture A */
    EVSYS_CHMUX_TCC5_CCB_gc        = (0xCD), /* Timer/Counter C5 Compare or Capture B */
    EVSYS_CHMUX_TCD5_OVF_gc        = (0xD8), /* Timer/Counter D5 Overflow */
    EVSYS_CHMUX_TCD5_ERR_gc        = (0xD9), /* Timer/Counter D5 Error */
    EVSYS_CHMUX_TCD5_CCA_gc        = (0xDC), /* Timer/Counter D5 Compare or Capture A */
    EVSYS_CHMUX_TCD5_CCB_gc        = (0xDD), /* Timer/Counter D5 Compare or Capture B */
} EVSYS_CHMUX_t;

/* Rotary Decoder Enable */
typedef enum EVSYS_ROTARY_enum
{
    EVSYS_ROTARY_CLEAR_gc = (0x00), /* Rotary Decoder Enable - CLEAR */
    EVSYS_ROTARY_SET_gc   = (0x80), /* Rotary Decoder Enable - SET */
} EVSYS_ROTARY_t;

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

/* Prescaler Filter */
typedef enum EVSYS_PRESCFILT_enum
{
    EVSYS_PRESCFILT_CH04_gc = (0x01<<4), /* Enable prescaler filter for either channel 0 or 4 */
    EVSYS_PRESCFILT_CH15_gc = (0x02<<4), /* Enable prescaler filter for either channel 1 or 5 */
    EVSYS_PRESCFILT_CH26_gc = (0x04<<4), /* Enable prescaler filter for either channel 2 or 6 */
    EVSYS_PRESCFILT_CH37_gc = (0x08<<4), /* Enable prescaler filter for either channel 3 or 7 */
} EVSYS_PRESCFILT_t;

/* Prescaler Filter Select */
typedef enum EVSYS_FILTSEL_enum
{
    EVSYS_FILTSEL_CLEAR_gc = (0x00), /* Prescaler Filter Select - CLEAR */
    EVSYS_FILTSEL_SET_gc   = (0x08), /* Prescaler Filter Select - SET */
} EVSYS_FILTSEL_t;

/* Prescaler */
typedef enum EVSYS_PRESC_enum
{
    EVSYS_PRESC_CLKPER_8_gc     = (0x00), /* CLKPER, divide by 8 */
    EVSYS_PRESC_CLKPER_64_gc    = (0x01), /* CLKPER, divide by 64 */
    EVSYS_PRESC_CLKPER_512_gc   = (0x02), /* CLKPER, divide by 512 */
    EVSYS_PRESC_CLKPER_4096_gc  = (0x03), /* CLKPER, divide by 4096 */
    EVSYS_PRESC_CLKPER_32768_gc = (0x04), /* CLKPER, divide by 32768 */
} EVSYS_PRESC_t;

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


/* Command */
typedef enum NVM_CMD_enum
{
    NVM_CMD_NO_OPERATION_gc            = (0x00), /* Noop/Ordinary LPM */
    NVM_CMD_READ_USER_SIG_ROW_gc       = (0x01), /* Read user signature row */
    NVM_CMD_READ_CALIB_ROW_gc          = (0x02), /* Read calibration row */
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
    NVM_CMD_ERASE_FLASH_PAGE_gc        = (0x2B), /* Erase Flash Page */
    NVM_CMD_WRITE_BOOT_PAGE_gc         = (0x2C), /* Write Boot Section page */
    NVM_CMD_ERASE_WRITE_BOOT_PAGE_gc   = (0x2D), /* Erase-and-write Boot Section page */
    NVM_CMD_WRITE_FLASH_PAGE_gc        = (0x2E), /* Write Flash Page */
    NVM_CMD_ERASE_WRITE_FLASH_PAGE_gc  = (0x2F), /* Erase-and-write Flash Page */
    NVM_CMD_ERASE_EEPROM_gc            = (0x30), /* Erase EEPROM */
    NVM_CMD_ERASE_EEPROM_PAGE_gc       = (0x32), /* Erase EEPROM page */
    NVM_CMD_WRITE_EEPROM_PAGE_gc       = (0x34), /* Write EEPROM page */
    NVM_CMD_ERASE_WRITE_EEPROM_PAGE_gc = (0x35), /* Erase-and-write EEPROM page */
    NVM_CMD_ERASE_EEPROM_BUFFER_gc     = (0x36), /* Erase/flush EEPROM page buffer */
    NVM_CMD_APP_CRC_gc                 = (0x38), /* Application section CRC */
    NVM_CMD_BOOT_CRC_gc                = (0x39), /*  Boot Section CRC */
    NVM_CMD_FLASH_RANGE_CRC_gc         = (0x3A), /* Flash Range CRC */
    NVM_CMD_CHIP_ERASE_gc              = (0x40), /* Erase Chip */
    NVM_CMD_READ_NVM_gc                = (0x43), /* Read NVM */
    NVM_CMD_WRITE_FUSE_gc              = (0x4C), /* Write Fuse byte */
    NVM_CMD_ERASE_BOOT_gc              = (0x68), /* Erase Boot Section */
    NVM_CMD_FLASH_CRC_gc               = (0x78), /* Flash CRC */
} NVM_CMD_t;

/* Command Execute */
typedef enum NVM_CMDEX_enum
{
    NVM_CMDEX_CLEAR_gc = (0x00), /* Command Execute - CLEAR */
    NVM_CMDEX_SET_gc   = (0x01), /* Command Execute - SET */
} NVM_CMDEX_t;

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
    NVM_BLBB_RWLOCK_gc = (0x00<<6), /* Read and write not allowed */
    NVM_BLBB_RLOCK_gc  = (0x01<<6), /* Read not allowed */
    NVM_BLBB_WLOCK_gc  = (0x02<<6), /* Write not allowed */
    NVM_BLBB_NOLOCK_gc = (0x03<<6), /* No locks */
} NVM_BLBB_t;

/* Boot Lock Bits - Application Section */
typedef enum NVM_BLBA_enum
{
    NVM_BLBA_RWLOCK_gc = (0x00<<4), /* Read and write not allowed */
    NVM_BLBA_RLOCK_gc  = (0x01<<4), /* Read not allowed */
    NVM_BLBA_WLOCK_gc  = (0x02<<4), /* Write not allowed */
    NVM_BLBA_NOLOCK_gc = (0x03<<4), /* No locks */
} NVM_BLBA_t;

/* Boot Lock Bits - Application Table */
typedef enum NVM_BLBAT_enum
{
    NVM_BLBAT_RWLOCK_gc = (0x00<<2), /* Read and write not allowed */
    NVM_BLBAT_RLOCK_gc  = (0x01<<2), /* Read not allowed */
    NVM_BLBAT_WLOCK_gc  = (0x02<<2), /* Write not allowed */
    NVM_BLBAT_NOLOCK_gc = (0x03<<2), /* No locks */
} NVM_BLBAT_t;

/* Lock Bits */
typedef enum NVM_LB_enum
{
    NVM_LB_RWLOCK_gc = (0x00), /* Read and write not allowed */
    NVM_LB_WLOCK_gc  = (0x02), /* Write not allowed */
    NVM_LB_NOLOCK_gc = (0x03), /* No locks */
} NVM_LB_t;

/*
--------------------------------------------------------------------------------
ADC - Analog/Digital Converter
--------------------------------------------------------------------------------
*/

typedef struct ADC_CH_struct
{
    register8_t CTRL;        /* Control Register */
    register8_t MUXCTRL;     /* MUX Control */
    register8_t INTCTRL;     /* Channel Interrupt Control Register */
    register8_t INTFLAGS;    /* Interrupt Flags */
    _REGISTER16 (RES);       /* Channel Result */
    register8_t rsv_0x05;    /* RESERVED REGISTER */
    register8_t SCAN;        /* Input Channel Scan */
    register8_t CORRCTRL;    /* Correction Control Register */
    register8_t OFFSETCORR0; /* Offset Correction Register 0 */
    register8_t OFFSETCORR1; /* Offset Correction Register 1 */
    register8_t GAINCORR0;   /* Gain Correction Register 0 */
    register8_t GAINCORR1;   /* Gain Correction Register 1 */
    register8_t AVGCTRL;     /* Average Control Register */
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
    register8_t TEMP;        /* Temporary Register */
    register8_t SAMPCTRL;    /* ADC Sampling Time Control Register */
    register8_t rsv_0x09[3]; /* RESERVED REGISTER BLOCK */
    register8_t CAL;         /* Calibration Value */
    register8_t rsv_0x0D[3]; /* RESERVED REGISTER BLOCK */
    _REGISTER16 (CH0RES);    /* Channel 0 Result */
    register8_t rsv_0x11[7]; /* RESERVED REGISTER BLOCK */
    _REGISTER16 (CMP);       /* Compare Value */
} ADC_t;


/* Channel Start Conversion */
typedef enum ADC_CH_START_enum
{
    ADC_CH_START_CLEAR_gc = (0x00), /* Channel Start Conversion - CLEAR */
    ADC_CH_START_SET_gc   = (0x80), /* Channel Start Conversion - SET */
} ADC_CH_START_t;

/* Gain Factor */
typedef enum ADC_CH_GAIN_enum
{
    ADC_CH_GAIN_1X_gc   = (0x00<<2), /* 1x gain */
    ADC_CH_GAIN_2X_gc   = (0x01<<2), /* 2x gain */
    ADC_CH_GAIN_4X_gc   = (0x02<<2), /* 4x gain */
    ADC_CH_GAIN_8X_gc   = (0x03<<2), /* 8x gain */
    ADC_CH_GAIN_16X_gc  = (0x04<<2), /* 16x gain */
    ADC_CH_GAIN_32X_gc  = (0x05<<2), /* 32x gain */
    ADC_CH_GAIN_64X_gc  = (0x06<<2), /* 64x gain */
    ADC_CH_GAIN_DIV2_gc = (0x07<<2), /* x/2 gain */
} ADC_CH_GAIN_t;

/* Input Mode Select */
typedef enum ADC_CH_INPUTMODE_enum
{
    ADC_CH_INPUTMODE_INTERNAL_gc    = (0x00), /* Internal inputs, no gain */
    ADC_CH_INPUTMODE_SINGLEENDED_gc = (0x01), /* Single-ended input, no gain */
    ADC_CH_INPUTMODE_DIFFWGAINL_gc  = (0x02), /* Differential input, gain with 4 LSB pins selection */
    ADC_CH_INPUTMODE_DIFFWGAINH_gc  = (0x03), /* Differential input, gain with 4 MSB pins selection */
} ADC_CH_INPUTMODE_t;

/* MUX selection on Positive ADC Input */
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
    ADC_CH_MUXPOS_PIN12_gc = (0x0C<<3), /* Input pin 12 */
    ADC_CH_MUXPOS_PIN13_gc = (0x0D<<3), /* Input pin 13 */
    ADC_CH_MUXPOS_PIN14_gc = (0x0E<<3), /* Input pin 14 */
    ADC_CH_MUXPOS_PIN15_gc = (0x0F<<3), /* Input pin 15 */
} ADC_CH_MUXPOS_t;

/* MUX selection on Internal ADC Input */
typedef enum ADC_CH_MUXINT_enum
{
    ADC_CH_MUXINT_TEMP_gc      = (0x00<<3), /* Temperature Reference */
    ADC_CH_MUXINT_BANDGAP_gc   = (0x01<<3), /* Bandgap Reference */
    ADC_CH_MUXINT_SCALEDVCC_gc = (0x02<<3), /* 1/10 Scaled VCC */
    ADC_CH_MUXINT_DAC_gc       = (0x03<<3), /* DAC Output */
} ADC_CH_MUXINT_t;

/* MUX selection on Negative ADC Input */
typedef enum ADC_CH_MUXNEG_enum
{
    ADC_CH_MUXNEG_PIN0_gc         = (0x00), /* Input pin 0 (Input Mode = 2) */
    ADC_CH_MUXNEG_PIN1_gc         = (0x01), /* Input pin 1 (Input Mode = 2) */
    ADC_CH_MUXNEG_PIN2_gc         = (0x02), /* Input pin 2 (Input Mode = 2) */
    ADC_CH_MUXNEG_PIN3_gc         = (0x03), /* Input pin 3 (Input Mode = 2) */
    ADC_CH_MUXNEG_PIN4_gc         = (0x00), /* Input pin 4 (Input Mode = 3) */
    ADC_CH_MUXNEG_PIN5_gc         = (0x01), /* Input pin 5 (Input Mode = 3) */
    ADC_CH_MUXNEG_PIN6_gc         = (0x02), /* Input pin 6 (Input Mode = 3) */
    ADC_CH_MUXNEG_PIN7_gc         = (0x03), /* Input pin 7 (Input Mode = 3) */
    ADC_CH_MUXNEG_GND_MODE3_gc    = (0x05), /* PAD Ground (Input Mode = 2) */
    ADC_CH_MUXNEG_INTGND_MODE3_gc = (0x07), /* Internal Ground (Input Mode = 2) */
    ADC_CH_MUXNEG_INTGND_MODE4_gc = (0x04), /* Internal Ground (Input Mode = 3) */
    ADC_CH_MUXNEG_GND_MODE4_gc    = (0x07), /* PAD Ground (Input Mode = 3) */
} ADC_CH_MUXNEG_t;

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
typedef enum ADC_CH_IF_enum
{
    ADC_CH_IF_CLEAR_gc = (0x00), /* Channel Interrupt Flag - CLEAR */
    ADC_CH_IF_SET_gc   = (0x01), /* Channel Interrupt Flag - SET */
} ADC_CH_IF_t;

/* Positive MUX Setting Offset */
#define ADC_CH_SCAN_INPUTOFFSET_gc(x) ((x<<4) & 0xF0)

/* Number of Channels Included in Scan */
#define ADC_CH_SCAN_INPUTSCAN_gc(x) (x & 0x0F)

/* Correction Enable */
typedef enum ADC_CH_CORREN_enum
{
    ADC_CH_CORREN_CLEAR_gc = (0x00), /* Correction Enable - CLEAR */
    ADC_CH_CORREN_SET_gc   = (0x01), /* Correction Enable - SET */
} ADC_CH_CORREN_t;

/* Right Shift */
#define ADC_CH_AVGCTRL_RIGHTSHIFT_gc(x) ((x<<4) & 0x70)

/* Averaged Number of Samples */
typedef enum ADC_CH_SAMPNUM_enum
{
    ADC_CH_SAMPNUM_1X_gc    = (0x00), /* 1 Sample */
    ADC_CH_SAMPNUM_2X_gc    = (0x01), /* 2 Samples */
    ADC_CH_SAMPNUM_4X_gc    = (0x02), /* 4 Samples */
    ADC_CH_SAMPNUM_8X_gc    = (0x03), /* 8 Samples */
    ADC_CH_SAMPNUM_16X_gc   = (0x04), /* 16 Samples */
    ADC_CH_SAMPNUM_32X_gc   = (0x05), /* 32 Samples */
    ADC_CH_SAMPNUM_64X_gc   = (0x06), /* 64 Samples */
    ADC_CH_SAMPNUM_128X_gc  = (0x07), /* 128 Samples */
    ADC_CH_SAMPNUM_256X_gc  = (0x08), /* 256 Samples */
    ADC_CH_SAMPNUM_512X_gc  = (0x09), /* 512 Samples */
    ADC_CH_SAMPNUM_1024X_gc = (0x0A), /* 1024 Samples */
} ADC_CH_SAMPNUM_t;

/* Start Conversion */
typedef enum ADC_START_enum
{
    ADC_START_CLEAR_gc = (0x00), /* Start Conversion - CLEAR */
    ADC_START_SET_gc   = (0x04), /* Start Conversion - SET */
} ADC_START_t;

/* ADC Flush */
typedef enum ADC_FLUSH_enum
{
    ADC_FLUSH_CLEAR_gc = (0x00), /* ADC Flush - CLEAR */
    ADC_FLUSH_SET_gc   = (0x02), /* ADC Flush - SET */
} ADC_FLUSH_t;

/* Enable ADC */
typedef enum ADC_ENABLE_enum
{
    ADC_ENABLE_CLEAR_gc = (0x00), /* Enable ADC - CLEAR */
    ADC_ENABLE_SET_gc   = (0x01), /* Enable ADC - SET */
} ADC_ENABLE_t;

/* Current Limitation */
typedef enum ADC_CURRLIMIT_enum
{
    ADC_CURRLIMIT_NO_gc   = (0x00<<5), /* No current limit,     300ksps max sampling rate */
    ADC_CURRLIMIT_LOW_gc  = (0x01<<5), /* Low current limit,    250ksps max sampling rate */
    ADC_CURRLIMIT_MED_gc  = (0x02<<5), /* Medium current limit, 150ksps max sampling rate */
    ADC_CURRLIMIT_HIGH_gc = (0x03<<5), /* High current limit,   50ksps max sampling rate */
} ADC_CURRLIMIT_t;

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
    ADC_RESOLUTION_MT12BIT_gc   = (0x01<<1), /* More than 12-bit (oversapling) right-adjusted result */
    ADC_RESOLUTION_8BIT_gc      = (0x02<<1), /* 8-bit right-adjusted result */
    ADC_RESOLUTION_LEFT12BIT_gc = (0x03<<1), /* 12-bit left-adjusted result */
} ADC_RESOLUTION_t;

/* Reference Selection */
typedef enum ADC_REFSEL_enum
{
    ADC_REFSEL_INT1V_gc   = (0x00<<4), /* Internal 1V */
    ADC_REFSEL_INTVCC_gc  = (0x01<<4), /* Internal VCC / 1.6 */
    ADC_REFSEL_AREFA_gc   = (0x02<<4), /* External reference on PORT A */
    ADC_REFSEL_AREFD_gc   = (0x03<<4), /* External reference on PORT D */
    ADC_REFSEL_INTVCC2_gc = (0x04<<4), /* Internal VCC / 2 */
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

/* Event Input Select */
typedef enum ADC_EVSEL_enum
{
    ADC_EVSEL_0_gc = (0x00<<3), /* Event Channel 0 */
    ADC_EVSEL_1_gc = (0x01<<3), /* Event Channel 1 */
    ADC_EVSEL_2_gc = (0x02<<3), /* Event Channel 2 */
    ADC_EVSEL_3_gc = (0x03<<3), /* Event Channel 3 */
    ADC_EVSEL_4_gc = (0x04<<3), /* Event Channel 4 */
    ADC_EVSEL_5_gc = (0x05<<3), /* Event Channel 5 */
    ADC_EVSEL_6_gc = (0x06<<3), /* Event Channel 6 */
    ADC_EVSEL_7_gc = (0x07<<3), /* Event Channel 7 */
} ADC_EVSEL_t;

/* Event Action Select */
typedef enum ADC_EVACT_enum
{
    ADC_EVACT_NONE_gc      = (0x00), /* No event action */
    ADC_EVACT_CH0_gc       = (0x01), /* First event triggers channel conversion */
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
    register8_t rsv_0x04;     /* RESERVED REGISTER */
    register8_t STATUS;       /* Status */
    register8_t rsv_0x06[2];  /* RESERVED REGISTER BLOCK */
    register8_t CH0GAINCAL;   /* Gain Calibration */
    register8_t CH0OFFSETCAL; /* Offset Calibration */
    register8_t CH1GAINCAL;   /* Gain Calibration */
    register8_t CH1OFFSETCAL; /* Offset Calibration */
    register8_t rsv_0x0C[12]; /* RESERVED REGISTER BLOCK */
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
    DAC_CHSEL_SINGLE_gc  = (0x00<<5), /* Single channel operation (Channel 0 only) */
    DAC_CHSEL_SINGLE1_gc = (0x01<<5), /* Single channel operation (Channel 1 only) */
    DAC_CHSEL_DUAL_gc    = (0x02<<5), /* Dual channel operation (Channel 0 and channel 1) */
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
    DAC_REFSEL_AREFD_gc = (0x03<<3), /* External reference on AREF on PORTD */
    DAC_REFSEL_AREFB_gc = (0x03<<3), /* Define for PortB kept for legacy reasons */
} DAC_REFSEL_t;

/* Left-adjust Result */
typedef enum DAC_LEFTADJ_enum
{
    DAC_LEFTADJ_CLEAR_gc = (0x00), /* Left-adjust Result - CLEAR */
    DAC_LEFTADJ_SET_gc   = (0x01), /* Left-adjust Result - SET */
} DAC_LEFTADJ_t;

/* Separate Event Channel Input for Channel 1 */
typedef enum DAC_EVSPLIT_enum
{
    DAC_EVSPLIT_CLEAR_gc = (0x00), /* Separate Event Channel Input for Channel 1 - CLEAR */
    DAC_EVSPLIT_SET_gc   = (0x08), /* Separate Event Channel Input for Channel 1 - SET */
} DAC_EVSPLIT_t;

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
    register8_t CURRCTRL;   /* Current Source Control Register */
    register8_t CURRCALIB;  /* Current Source Calibration Register */
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

/* Analog Comparator 1 Output Invert Enable */
typedef enum AC_AC1INVEN_enum
{
    AC_AC1INVEN_CLEAR_gc = (0x00), /* Analog Comparator 1 Output Invert Enable - CLEAR */
    AC_AC1INVEN_SET_gc   = (0x08), /* Analog Comparator 1 Output Invert Enable - SET */
} AC_AC1INVEN_t;

/* Analog Comparator 0 Output Invert Enable */
typedef enum AC_AC0INVEN_enum
{
    AC_AC0INVEN_CLEAR_gc = (0x00), /* Analog Comparator 0 Output Invert Enable - CLEAR */
    AC_AC0INVEN_SET_gc   = (0x04), /* Analog Comparator 0 Output Invert Enable - SET */
} AC_AC0INVEN_t;

/* Analog Comparator 1 Output Enable */
typedef enum AC_AC1OUT_enum
{
    AC_AC1OUT_CLEAR_gc = (0x00), /* Analog Comparator 1 Output Enable - CLEAR */
    AC_AC1OUT_SET_gc   = (0x02), /* Analog Comparator 1 Output Enable - SET */
} AC_AC1OUT_t;

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

/* Current Source Enable */
typedef enum AC_CURREN_enum
{
    AC_CURREN_CLEAR_gc = (0x00), /* Current Source Enable - CLEAR */
    AC_CURREN_SET_gc   = (0x80), /* Current Source Enable - SET */
} AC_CURREN_t;

/* Current Mode */
typedef enum AC_CURRMODE_enum
{
    AC_CURRMODE_CLEAR_gc = (0x00), /* Current Mode - CLEAR */
    AC_CURRMODE_SET_gc   = (0x40), /* Current Mode - SET */
} AC_CURRMODE_t;

/* Analog Comparator 1 current source output */
typedef enum AC_AC1CURR_enum
{
    AC_AC1CURR_CLEAR_gc = (0x00), /* Analog Comparator 1 current source output - CLEAR */
    AC_AC1CURR_SET_gc   = (0x02), /* Analog Comparator 1 current source output - SET */
} AC_AC1CURR_t;

/* Analog Comparator 0 current source output */
typedef enum AC_AC0CURR_enum
{
    AC_AC0CURR_CLEAR_gc = (0x00), /* Analog Comparator 0 current source output - CLEAR */
    AC_AC0CURR_SET_gc   = (0x01), /* Analog Comparator 0 current source output - SET */
} AC_AC0CURR_t;

/*
--------------------------------------------------------------------------------
RTC - Real-Time Clounter
--------------------------------------------------------------------------------
*/

typedef struct RTC_struct
{
    register8_t CTRL;     /* Control Register */
    register8_t STATUS;   /* Status Register */
    register8_t INTCTRL;  /* Interrupt Control Register */
    register8_t INTFLAGS; /* Interrupt Flags */
    register8_t TEMP;     /* Temporary register */
    register8_t rsv_0x05; /* RESERVED REGISTER */
    register8_t CALIB;    /* Calibration Register */
    register8_t rsv_0x07; /* RESERVED REGISTER */
    _REGISTER16 (CNT);    /* Count Register */
    register8_t rsv_0x09; /* RESERVED REGISTER */
    _REGISTER16 (PER);    /* Period Register */
    register8_t rsv_0x0B; /* RESERVED REGISTER */
    _REGISTER16 (COMP);   /* Compare Register */
} RTC_t;


/* Correction Enable */
typedef enum RTC_CORREN_enum
{
    RTC_CORREN_CLEAR_gc = (0x00), /* Correction Enable - CLEAR */
    RTC_CORREN_SET_gc   = (0x08), /* Correction Enable - SET */
} RTC_CORREN_t;

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

/* Correction Sign */
typedef enum RTC_SIGN_enum
{
    RTC_SIGN_CLEAR_gc = (0x00), /* Correction Sign - CLEAR */
    RTC_SIGN_SET_gc   = (0x80), /* Correction Sign - SET */
} RTC_SIGN_t;

/* Error Value */
#define RTC_CALIB_ERROR_gc(x) (x & 0x7F)

/*
--------------------------------------------------------------------------------
XCL - XMEGA Custom Logic
--------------------------------------------------------------------------------
*/

typedef struct XCL_struct
{
    register8_t CTRLA;    /* Control Register A */
    register8_t CTRLB;    /* Control Register B */
    register8_t CTRLC;    /* Control Register C */
    register8_t CTRLD;    /* Control Register D */
    register8_t CTRLE;    /* Control Register E */
    register8_t CTRLF;    /* Control Register F */
    register8_t CTRLG;    /* Control Register G */
    register8_t INTCTRL;  /* Interrupt Control Register */
    register8_t INTFLAGS; /* Interrupt Flag Register */
    register8_t PLC;      /* Peripheral Lenght Control Register  */
    register8_t CNTL;     /* Counter Register Low */
    register8_t CNTH;     /* Counter Register High */
    register8_t CMPL;     /* Compare Register Low */
    register8_t CMPH;     /* Compare Register High */
    register8_t PERCAPTL; /* Period or Capture Register Low */
    register8_t PERCAPTH; /* Period or Capture Register High */
} XCL_t;


/* LUT0 Output Enable */
typedef enum XCL_LUT0OUTEN_enum
{
    XCL_LUT0OUTEN_DISABLE_gc = (0x00<<6), /* LUT0 output disabled */
    XCL_LUT0OUTEN_PIN0_gc    = (0x01<<6), /* LUT0 Output to pin 0 */
    XCL_LUT0OUTEN_PIN4_gc    = (0x02<<6), /* LUT0 Output to pin 4 */
} XCL_LUT0OUTEN_t;

/* Port Selection */
typedef enum XCL_PORTSEL_enum
{
    XCL_PORTSEL_PC_gc = (0x00<<4), /* Port C for LUT or USARTC0 for PEC */
    XCL_PORTSEL_PD_gc = (0x01<<4), /* Port D for LUT or USARTD0 for PEC */
} XCL_PORTSEL_t;

/* LUT Configuration */
typedef enum XCL_LUTCONF_enum
{
    XCL_LUTCONF_2LUT2IN_gc = (0x00), /* 2-Input two LUT */
    XCL_LUTCONF_2LUT1IN_gc = (0x01), /* Two LUT with duplicated input  */
    XCL_LUTCONF_2LUT3IN_gc = (0x02), /* Two LUT with one common input  */
    XCL_LUTCONF_1LUT3IN_gc = (0x03), /* 3-Input LUT  */
    XCL_LUTCONF_MUX_gc     = (0x04), /* One LUT Mux  */
    XCL_LUTCONF_DLATCH_gc  = (0x05), /* One D-Latch LUT  */
    XCL_LUTCONF_RSLATCH_gc = (0x06), /* One RS-Latch LUT  */
    XCL_LUTCONF_DFF_gc     = (0x07), /* One DFF LUT  */
} XCL_LUTCONF_t;

/* Input Selection 3 */
typedef enum XCL_IN3SEL_enum
{
    XCL_IN3SEL_EVSYS_gc = (0x00<<6), /* Event system selected as source */
    XCL_IN3SEL_XCL_gc   = (0x01<<6), /* XCL selected as source */
    XCL_IN3SEL_PINL_gc  = (0x02<<6), /* LSB port pin selected as source */
    XCL_IN3SEL_PINH_gc  = (0x03<<6), /* MSB port pin selected as source */
} XCL_IN3SEL_t;

/* Input Selection 2 */
typedef enum XCL_IN2SEL_enum
{
    XCL_IN2SEL_EVSYS_gc = (0x00<<4), /* Event system selected as source */
    XCL_IN2SEL_XCL_gc   = (0x01<<4), /* XCL selected as source */
    XCL_IN2SEL_PINL_gc  = (0x02<<4), /* LSB port pin selected as source */
    XCL_IN2SEL_PINH_gc  = (0x03<<4), /* MSB port pin selected as source */
} XCL_IN2SEL_t;

/* Input Selection 1 */
typedef enum XCL_IN1SEL_enum
{
    XCL_IN1SEL_EVSYS_gc = (0x00<<2), /* Event system selected as source */
    XCL_IN1SEL_XCL_gc   = (0x01<<2), /* XCL selected as source */
    XCL_IN1SEL_PINL_gc  = (0x02<<2), /* LSB port pin selected as source */
    XCL_IN1SEL_PINH_gc  = (0x03<<2), /* MSB port pin selected as source */
} XCL_IN1SEL_t;

/* Input Selection 0 */
typedef enum XCL_IN0SEL_enum
{
    XCL_IN0SEL_EVSYS_gc = (0x00), /* Event system selected as source */
    XCL_IN0SEL_XCL_gc   = (0x01), /* XCL selected as source */
    XCL_IN0SEL_PINL_gc  = (0x02), /* LSB port pin selected as source */
    XCL_IN0SEL_PINH_gc  = (0x03), /* MSB port pin selected as source */
} XCL_IN0SEL_t;

/* Asynchronous Event Line Selection for LUT1 */
typedef enum XCL_EVASYSEL1_enum
{
    XCL_EVASYSEL1_CLEAR_gc = (0x00), /* Asynchronous Event Line Selection for LUT1 - CLEAR */
    XCL_EVASYSEL1_SET_gc   = (0x80), /* Asynchronous Event Line Selection for LUT1 - SET */
} XCL_EVASYSEL1_t;

/* Asynchronous Event Line Selection for LUT0 */
typedef enum XCL_EVASYSEL0_enum
{
    XCL_EVASYSEL0_CLEAR_gc = (0x00), /* Asynchronous Event Line Selection for LUT0 - CLEAR */
    XCL_EVASYSEL0_SET_gc   = (0x40), /* Asynchronous Event Line Selection for LUT0 - SET */
} XCL_EVASYSEL0_t;

/* Delay Selection */
typedef enum XCL_DLYSEL_enum
{
    XCL_DLYSEL_DLY11_gc = (0x00<<4), /* One cycle delay for each LUT1 and LUT0 */
    XCL_DLYSEL_DLY12_gc = (0x01<<4), /* One cycle delay for LUT1 and two cycles for LUT0 */
    XCL_DLYSEL_DLY21_gc = (0x02<<4), /* Two cycles delay for LUT1 and one cycle for LUT0 */
    XCL_DLYSEL_DLY22_gc = (0x03<<4), /* Two cycle delays for each LUT1 and LUT0 */
} XCL_DLYSEL_t;

/* Delay Configuration on LUT1 */
typedef enum XCL_DLY1CONF_enum
{
    XCL_DLY1CONF_DISABLE_gc = (0x00<<2), /* Delay element disabled */
    XCL_DLY1CONF_IN_gc      = (0x01<<2), /* Delay enabled on LUT input */
    XCL_DLY1CONF_OUT_gc     = (0x02<<2), /* Delay enabled on LUT output */
} XCL_DLY1CONF_t;

/* Delay Configuration on LUT0 */
typedef enum XCL_DLY0CONF_enum
{
    XCL_DLY0CONF_DISABLE_gc = (0x00), /* Delay element disabled */
    XCL_DLY0CONF_IN_gc      = (0x01), /* Delay enabled on LUT input */
    XCL_DLY0CONF_OUT_gc     = (0x02), /* Delay enabled on LUT output */
} XCL_DLY0CONF_t;

/* Truth Table of LUT1 */
#define XCL_CTRLD_TRUTH1_gc(x) ((x<<4) & 0xF0)

/* Truth Table of LUT0 */
#define XCL_CTRLD_TRUTH0_gc(x) (x & 0x0F)

/* Timer/Counter Command Selection */
typedef enum XCL_CMDSEL_enum
{
    XCL_CMDSEL_NONE_gc    = (0x00<<7), /* None */
    XCL_CMDSEL_RESTART_gc = (0x01<<7), /* Force restart */
} XCL_CMDSEL_t;

/* Timer/Counter Selection */
typedef enum XCL_TCSEL_enum
{
    XCL_TCSEL_TC16_gc     = (0x00<<4), /* 16-bit timer/counter */
    XCL_TCSEL_BTC0_gc     = (0x01<<4), /* One 8-bit timer/counter */
    XCL_TCSEL_BTC01_gc    = (0x02<<4), /* Two 8-bit timer/counters */
    XCL_TCSEL_BTC0PEC1_gc = (0x03<<4), /* One 8-bit timer/counter and one 8-bit peripheral transmitter counter */
    XCL_TCSEL_PEC0BTC1_gc = (0x04<<4), /* One 8-bit timer/counter and one 8-bit peripheral receiver counter */
    XCL_TCSEL_PEC01_gc    = (0x05<<4), /* Two 8-bit peripheral counters */
    XCL_TCSEL_BTC0PEC2_gc = (0x06<<4), /* One 8-bit timer/counter and two 4-bit peripheral counters */
} XCL_TCSEL_t;

/* Clock Selection */
typedef enum XCL_CLKSEL_enum
{
    XCL_CLKSEL_OFF_gc     = (0x00), /* OFF */
    XCL_CLKSEL_DIV1_gc    = (0x01), /* Prescaler clk */
    XCL_CLKSEL_DIV2_gc    = (0x02), /* Prescaler clk/2 */
    XCL_CLKSEL_DIV4_gc    = (0x03), /* Prescaler clk/4 */
    XCL_CLKSEL_DIV8_gc    = (0x04), /* Prescaler clk/8 */
    XCL_CLKSEL_DIV64_gc   = (0x05), /* Prescaler clk/64 */
    XCL_CLKSEL_DIV256_gc  = (0x06), /* Prescaler clk/256 */
    XCL_CLKSEL_DIV1024_gc = (0x07), /* Prescaler clk/1024 */
    XCL_CLKSEL_EVCH0_gc   = (0x08), /* Event channel 0 */
    XCL_CLKSEL_EVCH1_gc   = (0x09), /* Event channel 1 */
    XCL_CLKSEL_EVCH2_gc   = (0x0A), /* Event channel 2 */
    XCL_CLKSEL_EVCH3_gc   = (0x0B), /* Event channel 3 */
    XCL_CLKSEL_EVCH4_gc   = (0x0C), /* Event channel 4 */
    XCL_CLKSEL_EVCH5_gc   = (0x0D), /* Event channel 5 */
    XCL_CLKSEL_EVCH6_gc   = (0x0E), /* Event channel 6 */
    XCL_CLKSEL_EVCH7_gc   = (0x0F), /* Event channel 7 */
} XCL_CLKSEL_t;

/* Command Enable */
typedef enum XCL_CMDEN_enum
{
    XCL_CMDEN_DISABLE_gc = (0x00<<6), /* Command Ignored */
    XCL_CMDEN_CMD0_gc    = (0x01<<6), /* Command valid for timer/counter 0 */
    XCL_CMDEN_CMD1_gc    = (0x02<<6), /* Command valid for timer/counter 1 */
    XCL_CMDEN_CMD01_gc   = (0x03<<6), /* Command valid for both timer/counter 0 and 1 */
} XCL_CMDEN_t;

/* Compare Channel 1 Output Value */
typedef enum XCL_CMP1_enum
{
    XCL_CMP1_CLEAR_gc = (0x00<<5), /* Clear WG Output  */
    XCL_CMP1_SET_gc   = (0x01<<5), /* Set WG Output  */
} XCL_CMP1_t;

/* Compare Channel 0 Output Value */
typedef enum XCL_CMP0_enum
{
    XCL_CMP0_CLEAR_gc = (0x00<<4), /* Clear WG Output  */
    XCL_CMP0_SET_gc   = (0x01<<4), /* Set WG Output  */
} XCL_CMP0_t;

/* Compare or Capture Channel 1 Enable */
typedef enum XCL_CCEN1_enum
{
    XCL_CCEN1_CLEAR_gc = (0x00), /* Compare or Capture Channel 1 Enable - CLEAR */
    XCL_CCEN1_SET_gc   = (0x08), /* Compare or Capture Channel 1 Enable - SET */
} XCL_CCEN1_t;

/* Compare or Capture Channel 0 Enable */
typedef enum XCL_CCEN0_enum
{
    XCL_CCEN0_CLEAR_gc = (0x00), /* Compare or Capture Channel 0 Enable - CLEAR */
    XCL_CCEN0_SET_gc   = (0x04), /* Compare or Capture Channel 0 Enable - SET */
} XCL_CCEN0_t;

/* Timer/Counter Mode */
typedef enum XCL_MODE_enum
{
    XCL_MODE_NORMAL_gc = (0x00), /* Normal mode with compare/period */
    XCL_MODE_CAPT_gc   = (0x01), /* Capture mode */
    XCL_MODE_PWM_gc    = (0x02), /* Single Slope PWM */
    XCL_MODE_1SHOT_gc  = (0x03), /* One-shot PWM */
} XCL_MODE_t;

/* Event Action Enable */
typedef enum XCL_EVACTEN_enum
{
    XCL_EVACTEN_CLEAR_gc = (0x00), /* Event Action Enable - CLEAR */
    XCL_EVACTEN_SET_gc   = (0x80), /* Event Action Enable - SET */
} XCL_EVACTEN_t;

/* Event Action Selection on Timer/Counter 1 */
typedef enum XCL_EVACT1_enum
{
    XCL_EVACT1_INPUT_gc   = (0x00<<5), /* Input Capture */
    XCL_EVACT1_FREQ_gc    = (0x01<<5), /* Frequency Capture */
    XCL_EVACT1_PW_gc      = (0x02<<5), /* Pulse Width Capture */
    XCL_EVACT1_RESTART_gc = (0x03<<5), /* Restart timer/counter */
} XCL_EVACT1_t;

/* Event Action Selection on Timer/Counter 0 */
typedef enum XCL_EVACT0_enum
{
    XCL_EVACT0_INPUT_gc   = (0x00<<3), /* Input Capture */
    XCL_EVACT0_FREQ_gc    = (0x01<<3), /* Frequency Capture */
    XCL_EVACT0_PW_gc      = (0x02<<3), /* Pulse Width Capture */
    XCL_EVACT0_RESTART_gc = (0x03<<3), /* Restart timer/counter */
} XCL_EVACT0_t;

/* Event Source Selection */
typedef enum XCL_EVSRC_enum
{
    XCL_EVSRC_EVCH0_gc = (0x00), /* Event channel 0 */
    XCL_EVSRC_EVCH1_gc = (0x01), /* Event channel 1 */
    XCL_EVSRC_EVCH2_gc = (0x02), /* Event channel 2 */
    XCL_EVSRC_EVCH3_gc = (0x03), /* Event channel 3 */
    XCL_EVSRC_EVCH4_gc = (0x04), /* Event channel 4 */
    XCL_EVSRC_EVCH5_gc = (0x05), /* Event channel 5 */
    XCL_EVSRC_EVCH6_gc = (0x06), /* Event channel 6 */
    XCL_EVSRC_EVCH7_gc = (0x07), /* Event channel 7 */
} XCL_EVSRC_t;

/* Underflow 1 Interrupt Enable */
typedef enum XCL_UNF1IE_enum
{
    XCL_UNF1IE_CLEAR_gc = (0x00), /* Underflow 1 Interrupt Enable - CLEAR */
    XCL_UNF1IE_SET_gc   = (0x80), /* Underflow 1 Interrupt Enable - SET */
} XCL_UNF1IE_t;

/* Peripheral Counter 1 Interrupt Enable */
typedef enum XCL_PEC1IE_enum
{
    XCL_PEC1IE_CLEAR_gc = (0x00), /* Peripheral Counter 1 Interrupt Enable - CLEAR */
    XCL_PEC1IE_SET_gc   = (0x80), /* Peripheral Counter 1 Interrupt Enable - SET */
} XCL_PEC1IE_t;

/* Peripheral High Counter 2 Interrupt Enable */
typedef enum XCL_PEC21IE_enum
{
    XCL_PEC21IE_CLEAR_gc = (0x00), /* Peripheral High Counter 2 Interrupt Enable - CLEAR */
    XCL_PEC21IE_SET_gc   = (0x80), /* Peripheral High Counter 2 Interrupt Enable - SET */
} XCL_PEC21IE_t;

/* Underflow 0 Interrupt Enable */
typedef enum XCL_UNF0IE_enum
{
    XCL_UNF0IE_CLEAR_gc = (0x00), /* Underflow 0 Interrupt Enable - CLEAR */
    XCL_UNF0IE_SET_gc   = (0x40), /* Underflow 0 Interrupt Enable - SET */
} XCL_UNF0IE_t;

/* Peripheral Counter 0 Interrupt Enable */
typedef enum XCL_PEC0IE_enum
{
    XCL_PEC0IE_CLEAR_gc = (0x00), /* Peripheral Counter 0 Interrupt Enable - CLEAR */
    XCL_PEC0IE_SET_gc   = (0x40), /* Peripheral Counter 0 Interrupt Enable - SET */
} XCL_PEC0IE_t;

/* Compare Or Capture 1 Interrupt Enable */
typedef enum XCL_CC1IE_enum
{
    XCL_CC1IE_CLEAR_gc = (0x00), /* Compare Or Capture 1 Interrupt Enable - CLEAR */
    XCL_CC1IE_SET_gc   = (0x20), /* Compare Or Capture 1 Interrupt Enable - SET */
} XCL_CC1IE_t;

/* Peripheral Low Counter 2 Interrupt Enable */
typedef enum XCL_PEC20IE_enum
{
    XCL_PEC20IE_CLEAR_gc = (0x00), /* Peripheral Low Counter 2 Interrupt Enable - CLEAR */
    XCL_PEC20IE_SET_gc   = (0x20), /* Peripheral Low Counter 2 Interrupt Enable - SET */
} XCL_PEC20IE_t;

/* Compare Or Capture 0 Interrupt Enable */
typedef enum XCL_CC0IE_enum
{
    XCL_CC0IE_CLEAR_gc = (0x00), /* Compare Or Capture 0 Interrupt Enable - CLEAR */
    XCL_CC0IE_SET_gc   = (0x10), /* Compare Or Capture 0 Interrupt Enable - SET */
} XCL_CC0IE_t;

/* Timer Underflow Interrupt Level */
typedef enum XCL_UNFINTLVL_enum
{
    XCL_UNFINTLVL_OFF_gc = (0x00<<2), /* Interrupt Disabled */
    XCL_UNFINTLVL_LO_gc  = (0x01<<2), /* Low Level */
    XCL_UNFINTLVL_MED_gc = (0x02<<2), /* Medium Level */
    XCL_UNFINTLVL_HI_gc  = (0x03<<2), /* High Level */
} XCL_UNFINTLVL_t;

/* Timer Compare or Capture Interrupt Level */
typedef enum XCL_CCINTLVL_enum
{
    XCL_CCINTLVL_OFF_gc = (0x00), /* Interrupt Disabled */
    XCL_CCINTLVL_LO_gc  = (0x01), /* Low Level */
    XCL_CCINTLVL_MED_gc = (0x02), /* Medium Level */
    XCL_CCINTLVL_HI_gc  = (0x03), /* High Level */
} XCL_CCINTLVL_t;

/* Timer/Counter 1 Underflow Interrupt Flag */
typedef enum XCL_UNF1IF_enum
{
    XCL_UNF1IF_CLEAR_gc = (0x00), /* Timer/Counter 1 Underflow Interrupt Flag - CLEAR */
    XCL_UNF1IF_SET_gc   = (0x80), /* Timer/Counter 1 Underflow Interrupt Flag - SET */
} XCL_UNF1IF_t;

/* Peripheral Counter 1 Interrupt Flag */
typedef enum XCL_PEC1IF_enum
{
    XCL_PEC1IF_CLEAR_gc = (0x00), /* Peripheral Counter 1 Interrupt Flag - CLEAR */
    XCL_PEC1IF_SET_gc   = (0x80), /* Peripheral Counter 1 Interrupt Flag - SET */
} XCL_PEC1IF_t;

/* Peripheral High Counter 2 Interrupt Flag */
typedef enum XCL_PEC21IF_enum
{
    XCL_PEC21IF_CLEAR_gc = (0x00), /* Peripheral High Counter 2 Interrupt Flag - CLEAR */
    XCL_PEC21IF_SET_gc   = (0x80), /* Peripheral High Counter 2 Interrupt Flag - SET */
} XCL_PEC21IF_t;

/* Timer/Counter 0 Underflow Interrupt Flag */
typedef enum XCL_UNF0IF_enum
{
    XCL_UNF0IF_CLEAR_gc = (0x00), /* Timer/Counter 0 Underflow Interrupt Flag - CLEAR */
    XCL_UNF0IF_SET_gc   = (0x40), /* Timer/Counter 0 Underflow Interrupt Flag - SET */
} XCL_UNF0IF_t;

/* Peripheral Counter 0 Interrupt Flag */
typedef enum XCL_PEC0IF_enum
{
    XCL_PEC0IF_CLEAR_gc = (0x00), /* Peripheral Counter 0 Interrupt Flag - CLEAR */
    XCL_PEC0IF_SET_gc   = (0x40), /* Peripheral Counter 0 Interrupt Flag - SET */
} XCL_PEC0IF_t;

/* Compare or Capture Channel 1 Interrupt Flag */
typedef enum XCL_CC1IF_enum
{
    XCL_CC1IF_CLEAR_gc = (0x00), /* Compare or Capture Channel 1 Interrupt Flag - CLEAR */
    XCL_CC1IF_SET_gc   = (0x20), /* Compare or Capture Channel 1 Interrupt Flag - SET */
} XCL_CC1IF_t;

/* Peripheral Low Counter 2 Interrupt Flag */
typedef enum XCL_PEC20IF_enum
{
    XCL_PEC20IF_CLEAR_gc = (0x00), /* Peripheral Low Counter 2 Interrupt Flag - CLEAR */
    XCL_PEC20IF_SET_gc   = (0x20), /* Peripheral Low Counter 2 Interrupt Flag - SET */
} XCL_PEC20IF_t;

/* Compare or Capture Channel 0 Interrupt Flag */
typedef enum XCL_CC0IF_enum
{
    XCL_CC0IF_CLEAR_gc = (0x00), /* Compare or Capture Channel 0 Interrupt Flag - CLEAR */
    XCL_CC0IF_SET_gc   = (0x10), /* Compare or Capture Channel 0 Interrupt Flag - SET */
} XCL_CC0IF_t;

/* Peripheral High Counter 2 Bits */
#define XCL_CNTH_PCNT21_gc(x) ((x<<4) & 0xF0)

/* Peripheral Low Counter 2 Bits */
#define XCL_CNTH_PCNT20_gc(x) (x & 0x0F)

/*
--------------------------------------------------------------------------------
TWI - Two-Wire Interface
--------------------------------------------------------------------------------
*/

typedef struct TWI_struct
{
    register8_t CTRL; /* TWI Common Control Register */
} TWI_t;


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

typedef struct TWI_TIMEOUT_struct
{
    register8_t TOS;    /* Timeout Status Register */
    register8_t TOCONF; /* Timeout Configuration Register */
} TWI_TIMEOUT_t;


/* Bridge Enable */
typedef enum TWI_BRIDGEEN_enum
{
    TWI_BRIDGEEN_CLEAR_gc = (0x00), /* Bridge Enable - CLEAR */
    TWI_BRIDGEEN_SET_gc   = (0x80), /* Bridge Enable - SET */
} TWI_BRIDGEEN_t;

/* Slave Fast Mode Plus Enable */
typedef enum TWI_SFMPEN_enum
{
    TWI_SFMPEN_CLEAR_gc = (0x00), /* Slave Fast Mode Plus Enable - CLEAR */
    TWI_SFMPEN_SET_gc   = (0x40), /* Slave Fast Mode Plus Enable - SET */
} TWI_SFMPEN_t;

/* Slave SDA Hold Time Enable */
typedef enum TWI_SSDAHOLD_enum
{
    TWI_SSDAHOLD_OFF_gc   = (0x00<<4), /* SDA Hold Time off */
    TWI_SSDAHOLD_50NS_gc  = (0x01<<4), /* SDA Hold Time 50 ns */
    TWI_SSDAHOLD_300NS_gc = (0x02<<4), /* SDA Hold Time 300 ns */
    TWI_SSDAHOLD_400NS_gc = (0x03<<4), /* SDA Hold Time 400 ns */
} TWI_SSDAHOLD_t;

/* FMPLUS Enable */
typedef enum TWI_FMPEN_enum
{
    TWI_FMPEN_CLEAR_gc = (0x00), /* FMPLUS Enable - CLEAR */
    TWI_FMPEN_SET_gc   = (0x08), /* FMPLUS Enable - SET */
} TWI_FMPEN_t;

/* SDA Hold Time Enable */
typedef enum TWI_SDAHOLD_enum
{
    TWI_SDAHOLD_OFF_gc   = (0x00<<1), /* SDA Hold Time off */
    TWI_SDAHOLD_50NS_gc  = (0x01<<1), /* SDA Hold Time 50 ns */
    TWI_SDAHOLD_300NS_gc = (0x02<<1), /* SDA Hold Time 300 ns */
    TWI_SDAHOLD_400NS_gc = (0x03<<1), /* SDA Hold Time 400 ns */
} TWI_SDAHOLD_t;

/* External Driver Interface Enable */
typedef enum TWI_EDIEN_enum
{
    TWI_EDIEN_CLEAR_gc = (0x00), /* External Driver Interface Enable - CLEAR */
    TWI_EDIEN_SET_gc   = (0x01), /* External Driver Interface Enable - SET */
} TWI_EDIEN_t;

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

/* Inactive Bus Timeout */
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

/* Ttimeout Enable */
typedef enum TWI_MASTER_TTOUTEN_enum
{
    TWI_MASTER_TTOUTEN_CLEAR_gc = (0x00), /* Ttimeout Enable - CLEAR */
    TWI_MASTER_TTOUTEN_SET_gc   = (0x10), /* Ttimeout Enable - SET */
} TWI_MASTER_TTOUTEN_t;

/* Slave Extend Timeout Enable */
typedef enum TWI_MASTER_TSEXTEN_enum
{
    TWI_MASTER_TSEXTEN_CLEAR_gc = (0x00), /* Slave Extend Timeout Enable - CLEAR */
    TWI_MASTER_TSEXTEN_SET_gc   = (0x20), /* Slave Extend Timeout Enable - SET */
} TWI_MASTER_TSEXTEN_t;

/* Master Extend Timeout Enable */
typedef enum TWI_MASTER_TMEXTEN_enum
{
    TWI_MASTER_TMEXTEN_CLEAR_gc = (0x00), /* Master Extend Timeout Enable - CLEAR */
    TWI_MASTER_TMEXTEN_SET_gc   = (0x40), /* Master Extend Timeout Enable - SET */
} TWI_MASTER_TMEXTEN_t;

/* Timeout Interrupt Enable */
typedef enum TWI_MASTER_TOIE_enum
{
    TWI_MASTER_TOIE_CLEAR_gc = (0x00), /* Timeout Interrupt Enable - CLEAR */
    TWI_MASTER_TOIE_SET_gc   = (0x80), /* Timeout Interrupt Enable - SET */
} TWI_MASTER_TOIE_t;

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

/* Ttimeout Enable */
typedef enum TWI_SLAVE_TTOUTEN_enum
{
    TWI_SLAVE_TTOUTEN_CLEAR_gc = (0x00), /* Ttimeout Enable - CLEAR */
    TWI_SLAVE_TTOUTEN_SET_gc   = (0x10), /* Ttimeout Enable - SET */
} TWI_SLAVE_TTOUTEN_t;

/* Timeout Interrupt Enable */
typedef enum TWI_SLAVE_TOIE_enum
{
    TWI_SLAVE_TOIE_CLEAR_gc = (0x00), /* Timeout Interrupt Enable - CLEAR */
    TWI_SLAVE_TOIE_SET_gc   = (0x80), /* Timeout Interrupt Enable - SET */
} TWI_SLAVE_TOIE_t;

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

/* Master Ttimeout Interrupt Flag */
typedef enum TWI_TIMEOUT_TTOUTMIF_enum
{
    TWI_TIMEOUT_TTOUTMIF_CLEAR_gc = (0x00), /* Master Ttimeout Interrupt Flag - CLEAR */
    TWI_TIMEOUT_TTOUTMIF_SET_gc   = (0x01), /* Master Ttimeout Interrupt Flag - SET */
} TWI_TIMEOUT_TTOUTMIF_t;

/* Slave Extend Interrupt Flag */
typedef enum TWI_TIMEOUT_TSEXTIF_enum
{
    TWI_TIMEOUT_TSEXTIF_CLEAR_gc = (0x00), /* Slave Extend Interrupt Flag - CLEAR */
    TWI_TIMEOUT_TSEXTIF_SET_gc   = (0x02), /* Slave Extend Interrupt Flag - SET */
} TWI_TIMEOUT_TSEXTIF_t;

/* Master Extend Interrupt Flag */
typedef enum TWI_TIMEOUT_TMEXTIF_enum
{
    TWI_TIMEOUT_TMEXTIF_CLEAR_gc = (0x00), /* Master Extend Interrupt Flag - CLEAR */
    TWI_TIMEOUT_TMEXTIF_SET_gc   = (0x04), /* Master Extend Interrupt Flag - SET */
} TWI_TIMEOUT_TMEXTIF_t;

/* Slave Ttimeout Interrupt Flag */
typedef enum TWI_TIMEOUT_TTOUTSIF_enum
{
    TWI_TIMEOUT_TTOUTSIF_CLEAR_gc = (0x00), /* Slave Ttimeout Interrupt Flag - CLEAR */
    TWI_TIMEOUT_TTOUTSIF_SET_gc   = (0x10), /* Slave Ttimeout Interrupt Flag - SET */
} TWI_TIMEOUT_TTOUTSIF_t;

/* Master Ttimeout Select */
typedef enum TWI_TIMEOUT_TTOUTMSEL_enum
{
    TWI_TIMEOUT_TTOUTMSEL_25MS_gc = (0x00), /* 25 Milliseconds */
    TWI_TIMEOUT_TTOUTMSEL_24MS_gc = (0x01), /* 24 Milliseconds */
    TWI_TIMEOUT_TTOUTMSEL_23MS_gc = (0x02), /* 23 Milliseconds */
    TWI_TIMEOUT_TTOUTMSEL_22MS_gc = (0x03), /* 22 Milliseconds */
    TWI_TIMEOUT_TTOUTMSEL_26MS_gc = (0x04), /* 26 Milliseconds */
    TWI_TIMEOUT_TTOUTMSEL_27MS_gc = (0x05), /* 27 Milliseconds */
    TWI_TIMEOUT_TTOUTMSEL_28MS_gc = (0x06), /* 28 Milliseconds */
    TWI_TIMEOUT_TTOUTMSEL_29MS_gc = (0x07), /* 29 Milliseconds */
} TWI_TIMEOUT_TTOUTMSEL_t;

/* Master/Slave Timeout Select */
typedef enum TWI_TIMEOUT_TMSEXTSEL_enum
{
    TWI_TIMEOUT_TMSEXTSEL_10MS25MS_gc = (0x00<<3), /* Tmext 10ms Tsext 25ms */
    TWI_TIMEOUT_TMSEXTSEL_9MS24MS_gc  = (0x01<<3), /* Tmext 9ms  Tsext 24ms */
    TWI_TIMEOUT_TMSEXTSEL_11MS26MS_gc = (0x02<<3), /* Tmext 11ms Tsext 26ms */
    TWI_TIMEOUT_TMSEXTSEL_12MS27MS_gc = (0x03<<3), /* Tmext 12ms Tsext 27ms */
} TWI_TIMEOUT_TMSEXTSEL_t;

/* Slave Ttimeout Select */
typedef enum TWI_TIMEOUT_TTOUTSSEL_enum
{
    TWI_TIMEOUT_TTOUTSSEL_25MS_gc = (0x00<<5), /* 25 Milliseconds */
    TWI_TIMEOUT_TTOUTSSEL_24MS_gc = (0x01<<5), /* 24 Milliseconds */
    TWI_TIMEOUT_TTOUTSSEL_23MS_gc = (0x02<<5), /* 23 Milliseconds */
    TWI_TIMEOUT_TTOUTSSEL_22MS_gc = (0x03<<5), /* 22 Milliseconds */
    TWI_TIMEOUT_TTOUTSSEL_26MS_gc = (0x04<<5), /* 26 Milliseconds */
    TWI_TIMEOUT_TTOUTSSEL_27MS_gc = (0x05<<5), /* 27 Milliseconds */
    TWI_TIMEOUT_TTOUTSSEL_28MS_gc = (0x06<<5), /* 28 Milliseconds */
    TWI_TIMEOUT_TTOUTSSEL_29MS_gc = (0x07<<5), /* 29 Milliseconds */
} TWI_TIMEOUT_TTOUTSSEL_t;

/*
--------------------------------------------------------------------------------
PORT - Port Configuration
--------------------------------------------------------------------------------
*/

typedef struct PORT_struct
{
    register8_t DIR;      /* I/O Port Data Direction */
    register8_t DIRSET;   /* I/O Port Data Direction Set */
    register8_t DIRCLR;   /* I/O Port Data Direction Clear */
    register8_t DIRTGL;   /* I/O Port Data Direction Toggle */
    register8_t OUT;      /* I/O Port Output */
    register8_t OUTSET;   /* I/O Port Output Set */
    register8_t OUTCLR;   /* I/O Port Output Clear */
    register8_t OUTTGL;   /* I/O Port Output Toggle */
    register8_t IN;       /* I/O port Input */
    register8_t INTCTRL;  /* Interrupt Control Register */
    register8_t INTMASK;  /* Port Interrupt Mask */
    register8_t rsv_0x0B; /* RESERVED REGISTER */
    register8_t INTFLAGS; /* Interrupt Flag Register */
    register8_t rsv_0x0D; /* RESERVED REGISTER */
    register8_t REMAP;    /* Pin Remap Register */
    register8_t rsv_0x0F; /* RESERVED REGISTER */
    register8_t PIN0CTRL; /* Pin 0 Control Register */
    register8_t PIN1CTRL; /* Pin 1 Control Register */
    register8_t PIN2CTRL; /* Pin 2 Control Register */
    register8_t PIN3CTRL; /* Pin 3 Control Register */
    register8_t PIN4CTRL; /* Pin 4 Control Register */
    register8_t PIN5CTRL; /* Pin 5 Control Register */
    register8_t PIN6CTRL; /* Pin 6 Control Register */
    register8_t PIN7CTRL; /* Pin 7 Control Register */
} PORT_t;


/* Port Interrupt Level */
typedef enum PORT_INTLVL_enum
{
    PORT_INTLVL_OFF_gc = (0x00), /* Interrupt Disabled */
    PORT_INTLVL_LO_gc  = (0x01), /* Low Level */
    PORT_INTLVL_MED_gc = (0x02), /* Medium Level */
    PORT_INTLVL_HI_gc  = (0x03), /* High Level */
} PORT_INTLVL_t;

/* Pin 7 Interrupt Flag */
typedef enum PORT_INT7IF_enum
{
    PORT_INT7IF_CLEAR_gc = (0x00), /* Pin 7 Interrupt Flag - CLEAR */
    PORT_INT7IF_SET_gc   = (0x80), /* Pin 7 Interrupt Flag - SET */
} PORT_INT7IF_t;

/* Pin 6 Interrupt Flag */
typedef enum PORT_INT6IF_enum
{
    PORT_INT6IF_CLEAR_gc = (0x00), /* Pin 6 Interrupt Flag - CLEAR */
    PORT_INT6IF_SET_gc   = (0x40), /* Pin 6 Interrupt Flag - SET */
} PORT_INT6IF_t;

/* Pin 5 Interrupt Flag */
typedef enum PORT_INT5IF_enum
{
    PORT_INT5IF_CLEAR_gc = (0x00), /* Pin 5 Interrupt Flag - CLEAR */
    PORT_INT5IF_SET_gc   = (0x20), /* Pin 5 Interrupt Flag - SET */
} PORT_INT5IF_t;

/* Pin 4 Interrupt Flag */
typedef enum PORT_INT4IF_enum
{
    PORT_INT4IF_CLEAR_gc = (0x00), /* Pin 4 Interrupt Flag - CLEAR */
    PORT_INT4IF_SET_gc   = (0x10), /* Pin 4 Interrupt Flag - SET */
} PORT_INT4IF_t;

/* Pin 3 Interrupt Flag */
typedef enum PORT_INT3IF_enum
{
    PORT_INT3IF_CLEAR_gc = (0x00), /* Pin 3 Interrupt Flag - CLEAR */
    PORT_INT3IF_SET_gc   = (0x08), /* Pin 3 Interrupt Flag - SET */
} PORT_INT3IF_t;

/* Pin 2 Interrupt Flag */
typedef enum PORT_INT2IF_enum
{
    PORT_INT2IF_CLEAR_gc = (0x00), /* Pin 2 Interrupt Flag - CLEAR */
    PORT_INT2IF_SET_gc   = (0x04), /* Pin 2 Interrupt Flag - SET */
} PORT_INT2IF_t;

/* Pin 1 Interrupt Flag */
typedef enum PORT_INT1IF_enum
{
    PORT_INT1IF_CLEAR_gc = (0x00), /* Pin 1 Interrupt Flag - CLEAR */
    PORT_INT1IF_SET_gc   = (0x02), /* Pin 1 Interrupt Flag - SET */
} PORT_INT1IF_t;

/* Pin 0 Interrupt Flag */
typedef enum PORT_INT0IF_enum
{
    PORT_INT0IF_CLEAR_gc = (0x00), /* Pin 0 Interrupt Flag - CLEAR */
    PORT_INT0IF_SET_gc   = (0x01), /* Pin 0 Interrupt Flag - SET */
} PORT_INT0IF_t;

/* Usart0 */
typedef enum PORT_USART0_enum
{
    PORT_USART0_CLEAR_gc = (0x00), /* Usart0 - CLEAR */
    PORT_USART0_SET_gc   = (0x10), /* Usart0 - SET */
} PORT_USART0_t;

/* Timer/Counter 4 Output Compare D */
typedef enum PORT_TC4D_enum
{
    PORT_TC4D_CLEAR_gc = (0x00), /* Timer/Counter 4 Output Compare D - CLEAR */
    PORT_TC4D_SET_gc   = (0x08), /* Timer/Counter 4 Output Compare D - SET */
} PORT_TC4D_t;

/* Timer/Counter 4 Output Compare C */
typedef enum PORT_TC4C_enum
{
    PORT_TC4C_CLEAR_gc = (0x00), /* Timer/Counter 4 Output Compare C - CLEAR */
    PORT_TC4C_SET_gc   = (0x04), /* Timer/Counter 4 Output Compare C - SET */
} PORT_TC4C_t;

/* Timer/Counter 4 Output Compare B */
typedef enum PORT_TC4B_enum
{
    PORT_TC4B_CLEAR_gc = (0x00), /* Timer/Counter 4 Output Compare B - CLEAR */
    PORT_TC4B_SET_gc   = (0x02), /* Timer/Counter 4 Output Compare B - SET */
} PORT_TC4B_t;

/* Timer/Counter 4 Output Compare A */
typedef enum PORT_TC4A_enum
{
    PORT_TC4A_CLEAR_gc = (0x00), /* Timer/Counter 4 Output Compare A - CLEAR */
    PORT_TC4A_SET_gc   = (0x01), /* Timer/Counter 4 Output Compare A - SET */
} PORT_TC4A_t;

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
    PORT_ISC_FORCE_ENABLE_gc  = (0x06), /* Digital Input Buffer Forced Enable */
    PORT_ISC_INPUT_DISABLE_gc = (0x07), /* Disable Digital Input Buffer */
} PORT_ISC_t;

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
    PORT_ISC_FORCE_ENABLE_gc  = (0x06), /* Digital Input Buffer Forced Enable */
    PORT_ISC_INPUT_DISABLE_gc = (0x07), /* Disable Digital Input Buffer */
} PORT_ISC_t;

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
    PORT_ISC_FORCE_ENABLE_gc  = (0x06), /* Digital Input Buffer Forced Enable */
    PORT_ISC_INPUT_DISABLE_gc = (0x07), /* Disable Digital Input Buffer */
} PORT_ISC_t;

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
    PORT_ISC_FORCE_ENABLE_gc  = (0x06), /* Digital Input Buffer Forced Enable */
    PORT_ISC_INPUT_DISABLE_gc = (0x07), /* Disable Digital Input Buffer */
} PORT_ISC_t;

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
    PORT_ISC_FORCE_ENABLE_gc  = (0x06), /* Digital Input Buffer Forced Enable */
    PORT_ISC_INPUT_DISABLE_gc = (0x07), /* Disable Digital Input Buffer */
} PORT_ISC_t;

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
    PORT_ISC_FORCE_ENABLE_gc  = (0x06), /* Digital Input Buffer Forced Enable */
    PORT_ISC_INPUT_DISABLE_gc = (0x07), /* Disable Digital Input Buffer */
} PORT_ISC_t;

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
    PORT_ISC_FORCE_ENABLE_gc  = (0x06), /* Digital Input Buffer Forced Enable */
    PORT_ISC_INPUT_DISABLE_gc = (0x07), /* Disable Digital Input Buffer */
} PORT_ISC_t;

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
    PORT_ISC_FORCE_ENABLE_gc  = (0x06), /* Digital Input Buffer Forced Enable */
    PORT_ISC_INPUT_DISABLE_gc = (0x07), /* Disable Digital Input Buffer */
} PORT_ISC_t;

/*
--------------------------------------------------------------------------------
TC - 16-bit Timer/Counter With PWM
--------------------------------------------------------------------------------
*/

typedef struct TC4_struct
{
    register8_t CTRLA;        /* Control  Register A */
    register8_t CTRLB;        /* Control Register B */
    register8_t CTRLC;        /* Control register C */
    register8_t CTRLD;        /* Control Register D */
    register8_t CTRLE;        /* Control Register E */
    register8_t CTRLF;        /* Control Register F */
    register8_t INTCTRLA;     /* Interrupt Control Register A */
    register8_t INTCTRLB;     /* Interrupt Control Register B */
    register8_t CTRLGCLR;     /* Control Register G Clear */
    register8_t CTRLGSET;     /* Control Register G Set */
    register8_t CTRLHCLR;     /* Control Register H Clear */
    register8_t CTRLHSET;     /* Control Register H Set */
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
} TC4_t;


/*
--------------------------------------------------------------------------------
TC - 16-bit Timer/Counter With PWM
--------------------------------------------------------------------------------
*/

typedef struct TC5_struct
{
    register8_t CTRLA;        /* Control  Register A */
    register8_t CTRLB;        /* Control Register B */
    register8_t CTRLC;        /* Control register C */
    register8_t CTRLD;        /* Control Register D */
    register8_t CTRLE;        /* Control Register E */
    register8_t CTRLF;        /* Control Register F */
    register8_t INTCTRLA;     /* Interrupt Control Register A */
    register8_t INTCTRLB;     /* Interrupt Control Register B */
    register8_t CTRLGCLR;     /* Control Register G Clear */
    register8_t CTRLGSET;     /* Control Register G Set */
    register8_t CTRLHCLR;     /* Control Register H Clear */
    register8_t CTRLHSET;     /* Control Register H Set */
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
} TC5_t;


/* Synchronization Enabled */
typedef enum TC4_SYNCHEN_enum
{
    TC4_SYNCHEN_CLEAR_gc = (0x00), /* Synchronization Enabled - CLEAR */
    TC4_SYNCHEN_SET_gc   = (0x40), /* Synchronization Enabled - SET */
} TC4_SYNCHEN_t;

/* Start on Next Event */
typedef enum TC4_EVSTART_enum
{
    TC4_EVSTART_CLEAR_gc = (0x00), /* Start on Next Event - CLEAR */
    TC4_EVSTART_SET_gc   = (0x20), /* Start on Next Event - SET */
} TC4_EVSTART_t;

/* Stop on Next Update */
typedef enum TC4_UPSTOP_enum
{
    TC4_UPSTOP_CLEAR_gc = (0x00), /* Stop on Next Update - CLEAR */
    TC4_UPSTOP_SET_gc   = (0x10), /* Stop on Next Update - SET */
} TC4_UPSTOP_t;

/* Clock Select */
typedef enum TC4_CLKSEL_enum
{
    TC4_CLKSEL_OFF_gc     = (0x00), /* Timer Off */
    TC4_CLKSEL_DIV1_gc    = (0x01), /* System Clock */
    TC4_CLKSEL_DIV2_gc    = (0x02), /* System Clock / 2 */
    TC4_CLKSEL_DIV4_gc    = (0x03), /* System Clock / 4 */
    TC4_CLKSEL_DIV8_gc    = (0x04), /* System Clock / 8 */
    TC4_CLKSEL_DIV64_gc   = (0x05), /* System Clock / 64 */
    TC4_CLKSEL_DIV256_gc  = (0x06), /* System Clock / 256 */
    TC4_CLKSEL_DIV1024_gc = (0x07), /* System Clock / 1024 */
    TC4_CLKSEL_EVCH0_gc   = (0x08), /* Event Channel 0 */
    TC4_CLKSEL_EVCH1_gc   = (0x09), /* Event Channel 1 */
    TC4_CLKSEL_EVCH2_gc   = (0x0A), /* Event Channel 2 */
    TC4_CLKSEL_EVCH3_gc   = (0x0B), /* Event Channel 3 */
    TC4_CLKSEL_EVCH4_gc   = (0x0C), /* Event Channel 4 */
    TC4_CLKSEL_EVCH5_gc   = (0x0D), /* Event Channel 5 */
    TC4_CLKSEL_EVCH6_gc   = (0x0E), /* Event Channel 6 */
    TC4_CLKSEL_EVCH7_gc   = (0x0F), /* Event Channel 7 */
} TC4_CLKSEL_t;

/* Byte Mode */
typedef enum TC4_BYTEM_enum
{
    TC4_BYTEM_NORMAL_gc   = (0x00<<6), /* 16-bit mode */
    TC4_BYTEM_BYTEMODE_gc = (0x01<<6), /* Timer/Counter Operating in Byte Mode Only */
} TC4_BYTEM_t;

/* Circular Buffer Enable */
typedef enum TC4_CIRCEN_enum
{
    TC4_CIRCEN_DISABLE_gc = (0x00<<4), /* Circular Buffer Disabled */
    TC4_CIRCEN_PER_gc     = (0x01<<4), /* Circular Buffer Enabled on PER/PERBUF */
    TC4_CIRCEN_CCA_gc     = (0x02<<4), /* Circular Buffer Enabled on CCA/CCABUF */
    TC4_CIRCEN_BOTH_gc    = (0x03<<4), /* Circular Buffer Enabled on All Buffered Registers */
} TC4_CIRCEN_t;

/* Waveform Generation Mode */
typedef enum TC4_WGMODE_enum
{
    TC4_WGMODE_NORMAL_gc      = (0x00), /* Normal Mode */
    TC4_WGMODE_FRQ_gc         = (0x01), /* Frequency Generation Mode */
    TC4_WGMODE_SINGLESLOPE_gc = (0x03), /* Single Slope */
    TC4_WGMODE_DSTOP_gc       = (0x05), /* Dual Slope, Update on TOP */
    TC4_WGMODE_DSBOTH_gc      = (0x06), /* Dual Slope, Both */
    TC4_WGMODE_DSBOTTOM_gc    = (0x07), /* Dual Slope, Update on BOTTOM */
} TC4_WGMODE_t;

/* Channel D Output Polarity */
typedef enum TC4_POLD_enum
{
    TC4_POLD_CLEAR_gc = (0x00), /* Channel D Output Polarity - CLEAR */
    TC4_POLD_SET_gc   = (0x80), /* Channel D Output Polarity - SET */
} TC4_POLD_t;

/* Channel C Output Polarity */
typedef enum TC4_POLC_enum
{
    TC4_POLC_CLEAR_gc = (0x00), /* Channel C Output Polarity - CLEAR */
    TC4_POLC_SET_gc   = (0x40), /* Channel C Output Polarity - SET */
} TC4_POLC_t;

/* Channel B Output Polarity */
typedef enum TC4_POLB_enum
{
    TC4_POLB_CLEAR_gc = (0x00), /* Channel B Output Polarity - CLEAR */
    TC4_POLB_SET_gc   = (0x20), /* Channel B Output Polarity - SET */
} TC4_POLB_t;

/* Channel A Output Polarity */
typedef enum TC4_POLA_enum
{
    TC4_POLA_CLEAR_gc = (0x00), /* Channel A Output Polarity - CLEAR */
    TC4_POLA_SET_gc   = (0x10), /* Channel A Output Polarity - SET */
} TC4_POLA_t;

/* Channel D Compare Output Value */
typedef enum TC4_CMPD_enum
{
    TC4_CMPD_CLEAR_gc = (0x00), /* Channel D Compare Output Value - CLEAR */
    TC4_CMPD_SET_gc   = (0x08), /* Channel D Compare Output Value - SET */
} TC4_CMPD_t;

/* Channel C Compare Output Value */
typedef enum TC4_CMPC_enum
{
    TC4_CMPC_CLEAR_gc = (0x00), /* Channel C Compare Output Value - CLEAR */
    TC4_CMPC_SET_gc   = (0x04), /* Channel C Compare Output Value - SET */
} TC4_CMPC_t;

/* Channel B Compare Output Value */
typedef enum TC4_CMPB_enum
{
    TC4_CMPB_CLEAR_gc = (0x00), /* Channel B Compare Output Value - CLEAR */
    TC4_CMPB_SET_gc   = (0x02), /* Channel B Compare Output Value - SET */
} TC4_CMPB_t;

/* Channel A Compare Output Value */
typedef enum TC4_CMPA_enum
{
    TC4_CMPA_CLEAR_gc = (0x00), /* Channel A Compare Output Value - CLEAR */
    TC4_CMPA_SET_gc   = (0x01), /* Channel A Compare Output Value - SET */
} TC4_CMPA_t;

/* High Channel D Compare Output Value */
typedef enum TC4_HCMPD_enum
{
    TC4_HCMPD_CLEAR_gc = (0x00), /* High Channel D Compare Output Value - CLEAR */
    TC4_HCMPD_SET_gc   = (0x80), /* High Channel D Compare Output Value - SET */
} TC4_HCMPD_t;

/* High Channel C Compare Output Value */
typedef enum TC4_HCMPC_enum
{
    TC4_HCMPC_CLEAR_gc = (0x00), /* High Channel C Compare Output Value - CLEAR */
    TC4_HCMPC_SET_gc   = (0x40), /* High Channel C Compare Output Value - SET */
} TC4_HCMPC_t;

/* High Channel B Compare Output Value */
typedef enum TC4_HCMPB_enum
{
    TC4_HCMPB_CLEAR_gc = (0x00), /* High Channel B Compare Output Value - CLEAR */
    TC4_HCMPB_SET_gc   = (0x20), /* High Channel B Compare Output Value - SET */
} TC4_HCMPB_t;

/* High Channel A Compare Output Value */
typedef enum TC4_HCMPA_enum
{
    TC4_HCMPA_CLEAR_gc = (0x00), /* High Channel A Compare Output Value - CLEAR */
    TC4_HCMPA_SET_gc   = (0x10), /* High Channel A Compare Output Value - SET */
} TC4_HCMPA_t;

/* Low Channel D Compare Output Value */
typedef enum TC4_LCMPD_enum
{
    TC4_LCMPD_CLEAR_gc = (0x00), /* Low Channel D Compare Output Value - CLEAR */
    TC4_LCMPD_SET_gc   = (0x08), /* Low Channel D Compare Output Value - SET */
} TC4_LCMPD_t;

/* Low Channel C Compare Output Value */
typedef enum TC4_LCMPC_enum
{
    TC4_LCMPC_CLEAR_gc = (0x00), /* Low Channel C Compare Output Value - CLEAR */
    TC4_LCMPC_SET_gc   = (0x04), /* Low Channel C Compare Output Value - SET */
} TC4_LCMPC_t;

/* Low Channel B Compare Output Value */
typedef enum TC4_LCMPB_enum
{
    TC4_LCMPB_CLEAR_gc = (0x00), /* Low Channel B Compare Output Value - CLEAR */
    TC4_LCMPB_SET_gc   = (0x02), /* Low Channel B Compare Output Value - SET */
} TC4_LCMPB_t;

/* Low Channel A Compare Output Value */
typedef enum TC4_LCMPA_enum
{
    TC4_LCMPA_CLEAR_gc = (0x00), /* Low Channel A Compare Output Value - CLEAR */
    TC4_LCMPA_SET_gc   = (0x01), /* Low Channel A Compare Output Value - SET */
} TC4_LCMPA_t;

/* Event Action */
typedef enum TC4_EVACT_enum
{
    TC4_EVACT_OFF_gc     = (0x00<<5), /* No Event Action */
    TC4_EVACT_FMODE1_gc  = (0x01<<5), /* Fault Mode 1 capture */
    TC4_EVACT_FMODE2_gc  = (0x02<<5), /* Fault Mode 2 capture */
    TC4_EVACT_UPDOWN_gc  = (0x03<<5), /* Up/down count */
    TC4_EVACT_QDEC_gc    = (0x04<<5), /* Quadrature decode */
    TC4_EVACT_RESTART_gc = (0x05<<5), /* Restart */
    TC4_EVACT_PWF_gc     = (0x06<<5), /* Pulse-width Capture */
} TC4_EVACT_t;

/* Event Delay */
typedef enum TC4_EVDLY_enum
{
    TC4_EVDLY_CLEAR_gc = (0x00), /* Event Delay - CLEAR */
    TC4_EVDLY_SET_gc   = (0x10), /* Event Delay - SET */
} TC4_EVDLY_t;

/* Event Source Select */
typedef enum TC4_EVSEL_enum
{
    TC4_EVSEL_OFF_gc = (0x00), /* No Event Source */
    TC4_EVSEL_CH0_gc = (0x08), /* Event Channel 0 */
    TC4_EVSEL_CH1_gc = (0x09), /* Event Channel 1 */
    TC4_EVSEL_CH2_gc = (0x0A), /* Event Channel 2 */
    TC4_EVSEL_CH3_gc = (0x0B), /* Event Channel 3 */
    TC4_EVSEL_CH4_gc = (0x0C), /* Event Channel 4 */
    TC4_EVSEL_CH5_gc = (0x0D), /* Event Channel 5 */
    TC4_EVSEL_CH6_gc = (0x0E), /* Event Channel 6 */
    TC4_EVSEL_CH7_gc = (0x0F), /* Event Channel 7 */
} TC4_EVSEL_t;

/* Channel D Compare or Capture Mode */
typedef enum TC4_CCDMODE_enum
{
    TC4_CCDMODE_DISABLE_gc = (0x00<<6), /* Channel Disabled */
    TC4_CCDMODE_COMP_gc    = (0x01<<6), /* Output Compare enabled */
    TC4_CCDMODE_CAPT_gc    = (0x02<<6), /* Input Capture enabled */
    TC4_CCDMODE_BOTHCC_gc  = (0x03<<6), /* Both Compare and Capture enabled */
} TC4_CCDMODE_t;

/* Channel C Compare or Capture Mode */
typedef enum TC4_CCCMODE_enum
{
    TC4_CCCMODE_DISABLE_gc = (0x00<<4), /* Channel Disabled */
    TC4_CCCMODE_COMP_gc    = (0x01<<4), /* Output Compare enabled */
    TC4_CCCMODE_CAPT_gc    = (0x02<<4), /* Input Capture enabled */
    TC4_CCCMODE_BOTHCC_gc  = (0x03<<4), /* Both Compare and Capture enabled */
} TC4_CCCMODE_t;

/* Channel B Compare or Capture Mode */
typedef enum TC4_CCBMODE_enum
{
    TC4_CCBMODE_DISABLE_gc = (0x00<<2), /* Channel Disabled */
    TC4_CCBMODE_COMP_gc    = (0x01<<2), /* Output Compare enabled */
    TC4_CCBMODE_CAPT_gc    = (0x02<<2), /* Input Capture enabled */
    TC4_CCBMODE_BOTHCC_gc  = (0x03<<2), /* Both Compare and Capture enabled */
} TC4_CCBMODE_t;

/* Channel A Compare or Capture Mode */
typedef enum TC4_CCAMODE_enum
{
    TC4_CCAMODE_DISABLE_gc = (0x00), /* Channel Disabled */
    TC4_CCAMODE_COMP_gc    = (0x01), /* Output Compare enabled */
    TC4_CCAMODE_CAPT_gc    = (0x02), /* Input Capture enabled */
    TC4_CCAMODE_BOTHCC_gc  = (0x03), /* Both Compare and Capture enabled */
} TC4_CCAMODE_t;

/* Channel Low D Compare or Capture Mode */
typedef enum TC4_LCCDMODE_enum
{
    TC4_LCCDMODE_DISABLE_gc = (0x00<<6), /* Channel Disabled */
    TC4_LCCDMODE_COMP_gc    = (0x01<<6), /* Output Compare enabled */
    TC4_LCCDMODE_CAPT_gc    = (0x02<<6), /* Input Capture enabled */
    TC4_LCCDMODE_BOTHCC_gc  = (0x03<<6), /* Both Compare and Capture enabled */
} TC4_LCCDMODE_t;

/* Channel Low C Compare or Capture Mode */
typedef enum TC4_LCCCMODE_enum
{
    TC4_LCCCMODE_DISABLE_gc = (0x00<<4), /* Channel Disabled */
    TC4_LCCCMODE_COMP_gc    = (0x01<<4), /* Output Compare enabled */
    TC4_LCCCMODE_CAPT_gc    = (0x02<<4), /* Input Capture enabled */
    TC4_LCCCMODE_BOTHCC_gc  = (0x03<<4), /* Both Compare and Capture enabled */
} TC4_LCCCMODE_t;

/* Channel Low B Compare or Capture Mode */
typedef enum TC4_LCCBMODE_enum
{
    TC4_LCCBMODE_DISABLE_gc = (0x00<<2), /* Channel Disabled */
    TC4_LCCBMODE_COMP_gc    = (0x01<<2), /* Output Compare enabled */
    TC4_LCCBMODE_CAPT_gc    = (0x02<<2), /* Input Capture enabled */
    TC4_LCCBMODE_BOTHCC_gc  = (0x03<<2), /* Both Compare and Capture enabled */
} TC4_LCCBMODE_t;

/* Channel Low A Compare or Capture Mode */
typedef enum TC4_LCCAMODE_enum
{
    TC4_LCCAMODE_DISABLE_gc = (0x00), /* Channel Disabled */
    TC4_LCCAMODE_COMP_gc    = (0x01), /* Output Compare enabled */
    TC4_LCCAMODE_CAPT_gc    = (0x02), /* Input Capture enabled */
    TC4_LCCAMODE_BOTHCC_gc  = (0x03), /* Both Compare and Capture enabled */
} TC4_LCCAMODE_t;

/* Channel High D Compare or Capture Mode */
typedef enum TC4_HCCDMODE_enum
{
    TC4_HCCDMODE_DISABLE_gc = (0x00<<6), /* Channel Disabled */
    TC4_HCCDMODE_COMP_gc    = (0x01<<6), /* Output Compare enabled */
    TC4_HCCDMODE_CAPT_gc    = (0x02<<6), /* Input Capture enabled */
    TC4_HCCDMODE_BOTHCC_gc  = (0x03<<6), /* Both Compare and Capture enabled */
} TC4_HCCDMODE_t;

/* Channel High C Compare or Capture Mode */
typedef enum TC4_HCCCMODE_enum
{
    TC4_HCCCMODE_DISABLE_gc = (0x00<<4), /* Channel Disabled */
    TC4_HCCCMODE_COMP_gc    = (0x01<<4), /* Output Compare enabled */
    TC4_HCCCMODE_CAPT_gc    = (0x02<<4), /* Input Capture enabled */
    TC4_HCCCMODE_BOTHCC_gc  = (0x03<<4), /* Both Compare and Capture enabled */
} TC4_HCCCMODE_t;

/* Channel High B Compare or Capture Mode */
typedef enum TC4_HCCBMODE_enum
{
    TC4_HCCBMODE_DISABLE_gc = (0x00<<2), /* Channel Disabled */
    TC4_HCCBMODE_COMP_gc    = (0x01<<2), /* Output Compare enabled */
    TC4_HCCBMODE_CAPT_gc    = (0x02<<2), /* Input Capture enabled */
    TC4_HCCBMODE_BOTHCC_gc  = (0x03<<2), /* Both Compare and Capture enabled */
} TC4_HCCBMODE_t;

/* Channel High A Compare or Capture Mode */
typedef enum TC4_HCCAMODE_enum
{
    TC4_HCCAMODE_DISABLE_gc = (0x00), /* Channel Disabled */
    TC4_HCCAMODE_COMP_gc    = (0x01), /* Output Compare enabled */
    TC4_HCCAMODE_CAPT_gc    = (0x02), /* Input Capture enabled */
    TC4_HCCAMODE_BOTHCC_gc  = (0x03), /* Both Compare and Capture enabled */
} TC4_HCCAMODE_t;

/* Timer Trigger Restart Interrupt Level */
typedef enum TC4_TRGINTLVL_enum
{
    TC4_TRGINTLVL_OFF_gc = (0x00<<4), /* Interrupt Disabled */
    TC4_TRGINTLVL_LO_gc  = (0x01<<4), /* Low Level */
    TC4_TRGINTLVL_MED_gc = (0x02<<4), /* Medium Level */
    TC4_TRGINTLVL_HI_gc  = (0x03<<4), /* High Level */
} TC4_TRGINTLVL_t;

/* Timer Error Interrupt Level */
typedef enum TC4_ERRINTLVL_enum
{
    TC4_ERRINTLVL_OFF_gc = (0x00<<2), /* Interrupt Disabled */
    TC4_ERRINTLVL_LO_gc  = (0x01<<2), /* Low Level */
    TC4_ERRINTLVL_MED_gc = (0x02<<2), /* Medium Level */
    TC4_ERRINTLVL_HI_gc  = (0x03<<2), /* High Level */
} TC4_ERRINTLVL_t;

/* Timer Overflow/Underflow Interrupt Level */
typedef enum TC4_OVFINTLVL_enum
{
    TC4_OVFINTLVL_OFF_gc = (0x00), /* Interrupt Disabled */
    TC4_OVFINTLVL_LO_gc  = (0x01), /* Low Level */
    TC4_OVFINTLVL_MED_gc = (0x02), /* Medium Level */
    TC4_OVFINTLVL_HI_gc  = (0x03), /* High Level */
} TC4_OVFINTLVL_t;

/* Channel D Compare or Capture Interrupt Level */
typedef enum TC4_CCDINTLVL_enum
{
    TC4_CCDINTLVL_OFF_gc = (0x00<<6), /* Interrupt Disabled */
    TC4_CCDINTLVL_LO_gc  = (0x01<<6), /* Low Level */
    TC4_CCDINTLVL_MED_gc = (0x02<<6), /* Medium Level */
    TC4_CCDINTLVL_HI_gc  = (0x03<<6), /* High Level */
} TC4_CCDINTLVL_t;

/* Channel C Compare or Capture Interrupt Level */
typedef enum TC4_CCCINTLVL_enum
{
    TC4_CCCINTLVL_OFF_gc = (0x00<<4), /* Interrupt Disabled */
    TC4_CCCINTLVL_LO_gc  = (0x01<<4), /* Low Level */
    TC4_CCCINTLVL_MED_gc = (0x02<<4), /* Medium Level */
    TC4_CCCINTLVL_HI_gc  = (0x03<<4), /* High Level */
} TC4_CCCINTLVL_t;

/* Channel B Compare or Capture Interrupt Level */
typedef enum TC4_CCBINTLVL_enum
{
    TC4_CCBINTLVL_OFF_gc = (0x00<<2), /* Interrupt Disabled */
    TC4_CCBINTLVL_LO_gc  = (0x01<<2), /* Low Level */
    TC4_CCBINTLVL_MED_gc = (0x02<<2), /* Medium Level */
    TC4_CCBINTLVL_HI_gc  = (0x03<<2), /* High Level */
} TC4_CCBINTLVL_t;

/* Channel A Compare or Capture Interrupt Level */
typedef enum TC4_CCAINTLVL_enum
{
    TC4_CCAINTLVL_OFF_gc = (0x00), /* Interrupt Disabled */
    TC4_CCAINTLVL_LO_gc  = (0x01), /* Low Level */
    TC4_CCAINTLVL_MED_gc = (0x02), /* Medium Level */
    TC4_CCAINTLVL_HI_gc  = (0x03), /* High Level */
} TC4_CCAINTLVL_t;

/* Channel Low D Compare or Capture Interrupt Level */
typedef enum TC4_LCCDINTLVL_enum
{
    TC4_LCCDINTLVL_OFF_gc = (0x00<<6), /* Interrupt Disabled */
    TC4_LCCDINTLVL_LO_gc  = (0x01<<6), /* Low Level */
    TC4_LCCDINTLVL_MED_gc = (0x02<<6), /* Medium Level */
    TC4_LCCDINTLVL_HI_gc  = (0x03<<6), /* High Level */
} TC4_LCCDINTLVL_t;

/* Channel Low C Compare or Capture Interrupt Level */
typedef enum TC4_LCCCINTLVL_enum
{
    TC4_LCCCINTLVL_OFF_gc = (0x00<<4), /* Interrupt Disabled */
    TC4_LCCCINTLVL_LO_gc  = (0x01<<4), /* Low Level */
    TC4_LCCCINTLVL_MED_gc = (0x02<<4), /* Medium Level */
    TC4_LCCCINTLVL_HI_gc  = (0x03<<4), /* High Level */
} TC4_LCCCINTLVL_t;

/* Channel Low B Compare or Capture Interrupt Level */
typedef enum TC4_LCCBINTLVL_enum
{
    TC4_LCCBINTLVL_OFF_gc = (0x00<<2), /* Interrupt Disabled */
    TC4_LCCBINTLVL_LO_gc  = (0x01<<2), /* Low Level */
    TC4_LCCBINTLVL_MED_gc = (0x02<<2), /* Medium Level */
    TC4_LCCBINTLVL_HI_gc  = (0x03<<2), /* High Level */
} TC4_LCCBINTLVL_t;

/* Channel Low A Compare or Capture Interrupt Level */
typedef enum TC4_LCCAINTLVL_enum
{
    TC4_LCCAINTLVL_OFF_gc = (0x00), /* Interrupt Disabled */
    TC4_LCCAINTLVL_LO_gc  = (0x01), /* Low Level */
    TC4_LCCAINTLVL_MED_gc = (0x02), /* Medium Level */
    TC4_LCCAINTLVL_HI_gc  = (0x03), /* High Level */
} TC4_LCCAINTLVL_t;

/* Timer/Counter Stop */
typedef enum TC4_STOP_enum
{
    TC4_STOP_CLEAR_gc = (0x00), /* Timer/Counter Stop - CLEAR */
    TC4_STOP_SET_gc   = (0x20), /* Timer/Counter Stop - SET */
} TC4_STOP_t;

/* Command */
typedef enum TC4_CMD_enum
{
    TC4_CMD_NONE_gc    = (0x00<<2), /* No Command */
    TC4_CMD_UPDATE_gc  = (0x01<<2), /* Force Update */
    TC4_CMD_RESTART_gc = (0x02<<2), /* Force Restart */
    TC4_CMD_RESET_gc   = (0x03<<2), /* Force Hard Reset */
} TC4_CMD_t;

/* Lock Update */
typedef enum TC4_LUPD_enum
{
    TC4_LUPD_CLEAR_gc = (0x00), /* Lock Update - CLEAR */
    TC4_LUPD_SET_gc   = (0x02), /* Lock Update - SET */
} TC4_LUPD_t;

/* Counter Direction */
typedef enum TC4_DIR_enum
{
    TC4_DIR_CLEAR_gc = (0x00), /* Counter Direction - CLEAR */
    TC4_DIR_SET_gc   = (0x01), /* Counter Direction - SET */
} TC4_DIR_t;

/* Timer/Counter Stop */
typedef enum TC4_STOP_enum
{
    TC4_STOP_CLEAR_gc = (0x00), /* Timer/Counter Stop - CLEAR */
    TC4_STOP_SET_gc   = (0x20), /* Timer/Counter Stop - SET */
} TC4_STOP_t;

/* Command */
typedef enum TC4_CMD_enum
{
    TC4_CMD_NONE_gc    = (0x00<<2), /* No Command */
    TC4_CMD_UPDATE_gc  = (0x01<<2), /* Force Update */
    TC4_CMD_RESTART_gc = (0x02<<2), /* Force Restart */
    TC4_CMD_RESET_gc   = (0x03<<2), /* Force Hard Reset */
} TC4_CMD_t;

/* Lock Update */
typedef enum TC4_LUPD_enum
{
    TC4_LUPD_CLEAR_gc = (0x00), /* Lock Update - CLEAR */
    TC4_LUPD_SET_gc   = (0x02), /* Lock Update - SET */
} TC4_LUPD_t;

/* Counter Direction */
typedef enum TC4_DIR_enum
{
    TC4_DIR_CLEAR_gc = (0x00), /* Counter Direction - CLEAR */
    TC4_DIR_SET_gc   = (0x01), /* Counter Direction - SET */
} TC4_DIR_t;

/* Channel D Compare or Capture Buffer Valid */
typedef enum TC4_CCDBV_enum
{
    TC4_CCDBV_CLEAR_gc = (0x00), /* Channel D Compare or Capture Buffer Valid - CLEAR */
    TC4_CCDBV_SET_gc   = (0x10), /* Channel D Compare or Capture Buffer Valid - SET */
} TC4_CCDBV_t;

/* Channel C Compare or Capture Buffer Valid */
typedef enum TC4_CCCBV_enum
{
    TC4_CCCBV_CLEAR_gc = (0x00), /* Channel C Compare or Capture Buffer Valid - CLEAR */
    TC4_CCCBV_SET_gc   = (0x08), /* Channel C Compare or Capture Buffer Valid - SET */
} TC4_CCCBV_t;

/* Channel B Compare or Capture Buffer Valid */
typedef enum TC4_CCBBV_enum
{
    TC4_CCBBV_CLEAR_gc = (0x00), /* Channel B Compare or Capture Buffer Valid - CLEAR */
    TC4_CCBBV_SET_gc   = (0x04), /* Channel B Compare or Capture Buffer Valid - SET */
} TC4_CCBBV_t;

/* Channel A Compare or Capture Buffer Valid */
typedef enum TC4_CCABV_enum
{
    TC4_CCABV_CLEAR_gc = (0x00), /* Channel A Compare or Capture Buffer Valid - CLEAR */
    TC4_CCABV_SET_gc   = (0x02), /* Channel A Compare or Capture Buffer Valid - SET */
} TC4_CCABV_t;

/* Period Buffer Valid */
typedef enum TC4_PERBV_enum
{
    TC4_PERBV_CLEAR_gc = (0x00), /* Period Buffer Valid - CLEAR */
    TC4_PERBV_SET_gc   = (0x01), /* Period Buffer Valid - SET */
} TC4_PERBV_t;

/* Channel Low D Compare or Capture Buffer Valid */
typedef enum TC4_LCCDBV_enum
{
    TC4_LCCDBV_CLEAR_gc = (0x00), /* Channel Low D Compare or Capture Buffer Valid - CLEAR */
    TC4_LCCDBV_SET_gc   = (0x10), /* Channel Low D Compare or Capture Buffer Valid - SET */
} TC4_LCCDBV_t;

/* Channel Low C Compare or Capture Buffer Valid */
typedef enum TC4_LCCCBV_enum
{
    TC4_LCCCBV_CLEAR_gc = (0x00), /* Channel Low C Compare or Capture Buffer Valid - CLEAR */
    TC4_LCCCBV_SET_gc   = (0x08), /* Channel Low C Compare or Capture Buffer Valid - SET */
} TC4_LCCCBV_t;

/* Channel Low B Compare or Capture Buffer Valid */
typedef enum TC4_LCCBBV_enum
{
    TC4_LCCBBV_CLEAR_gc = (0x00), /* Channel Low B Compare or Capture Buffer Valid - CLEAR */
    TC4_LCCBBV_SET_gc   = (0x04), /* Channel Low B Compare or Capture Buffer Valid - SET */
} TC4_LCCBBV_t;

/* Channel Low A Compare or Capture Buffer Valid */
typedef enum TC4_LCCABV_enum
{
    TC4_LCCABV_CLEAR_gc = (0x00), /* Channel Low A Compare or Capture Buffer Valid - CLEAR */
    TC4_LCCABV_SET_gc   = (0x02), /* Channel Low A Compare or Capture Buffer Valid - SET */
} TC4_LCCABV_t;

/* Period Low Buffer Valid */
typedef enum TC4_LPERBV_enum
{
    TC4_LPERBV_CLEAR_gc = (0x00), /* Period Low Buffer Valid - CLEAR */
    TC4_LPERBV_SET_gc   = (0x01), /* Period Low Buffer Valid - SET */
} TC4_LPERBV_t;

/* Channel D Compare or Capture Buffer Valid */
typedef enum TC4_CCDBV_enum
{
    TC4_CCDBV_CLEAR_gc = (0x00), /* Channel D Compare or Capture Buffer Valid - CLEAR */
    TC4_CCDBV_SET_gc   = (0x10), /* Channel D Compare or Capture Buffer Valid - SET */
} TC4_CCDBV_t;

/* Channel C Compare or Capture Buffer Valid */
typedef enum TC4_CCCBV_enum
{
    TC4_CCCBV_CLEAR_gc = (0x00), /* Channel C Compare or Capture Buffer Valid - CLEAR */
    TC4_CCCBV_SET_gc   = (0x08), /* Channel C Compare or Capture Buffer Valid - SET */
} TC4_CCCBV_t;

/* Channel B Compare or Capture Buffer Valid */
typedef enum TC4_CCBBV_enum
{
    TC4_CCBBV_CLEAR_gc = (0x00), /* Channel B Compare or Capture Buffer Valid - CLEAR */
    TC4_CCBBV_SET_gc   = (0x04), /* Channel B Compare or Capture Buffer Valid - SET */
} TC4_CCBBV_t;

/* Channel A Compare or Capture Buffer Valid */
typedef enum TC4_CCABV_enum
{
    TC4_CCABV_CLEAR_gc = (0x00), /* Channel A Compare or Capture Buffer Valid - CLEAR */
    TC4_CCABV_SET_gc   = (0x02), /* Channel A Compare or Capture Buffer Valid - SET */
} TC4_CCABV_t;

/* Period Buffer Valid */
typedef enum TC4_PERBV_enum
{
    TC4_PERBV_CLEAR_gc = (0x00), /* Period Buffer Valid - CLEAR */
    TC4_PERBV_SET_gc   = (0x01), /* Period Buffer Valid - SET */
} TC4_PERBV_t;

/* Channel Low D Compare or Capture Buffer Valid */
typedef enum TC4_LCCDBV_enum
{
    TC4_LCCDBV_CLEAR_gc = (0x00), /* Channel Low D Compare or Capture Buffer Valid - CLEAR */
    TC4_LCCDBV_SET_gc   = (0x10), /* Channel Low D Compare or Capture Buffer Valid - SET */
} TC4_LCCDBV_t;

/* Channel Low C Compare or Capture Buffer Valid */
typedef enum TC4_LCCCBV_enum
{
    TC4_LCCCBV_CLEAR_gc = (0x00), /* Channel Low C Compare or Capture Buffer Valid - CLEAR */
    TC4_LCCCBV_SET_gc   = (0x08), /* Channel Low C Compare or Capture Buffer Valid - SET */
} TC4_LCCCBV_t;

/* Channel Low B Compare or Capture Buffer Valid */
typedef enum TC4_LCCBBV_enum
{
    TC4_LCCBBV_CLEAR_gc = (0x00), /* Channel Low B Compare or Capture Buffer Valid - CLEAR */
    TC4_LCCBBV_SET_gc   = (0x04), /* Channel Low B Compare or Capture Buffer Valid - SET */
} TC4_LCCBBV_t;

/* Channel Low A Compare or Capture Buffer Valid */
typedef enum TC4_LCCABV_enum
{
    TC4_LCCABV_CLEAR_gc = (0x00), /* Channel Low A Compare or Capture Buffer Valid - CLEAR */
    TC4_LCCABV_SET_gc   = (0x02), /* Channel Low A Compare or Capture Buffer Valid - SET */
} TC4_LCCABV_t;

/* Period Low Buffer Valid */
typedef enum TC4_LPERBV_enum
{
    TC4_LPERBV_CLEAR_gc = (0x00), /* Period Low Buffer Valid - CLEAR */
    TC4_LPERBV_SET_gc   = (0x01), /* Period Low Buffer Valid - SET */
} TC4_LPERBV_t;

/* Channel D Compare or Capture Interrupt Flag */
typedef enum TC4_CCDIF_enum
{
    TC4_CCDIF_CLEAR_gc = (0x00), /* Channel D Compare or Capture Interrupt Flag - CLEAR */
    TC4_CCDIF_SET_gc   = (0x80), /* Channel D Compare or Capture Interrupt Flag - SET */
} TC4_CCDIF_t;

/* Channel C Compare or Capture Interrupt Flag */
typedef enum TC4_CCCIF_enum
{
    TC4_CCCIF_CLEAR_gc = (0x00), /* Channel C Compare or Capture Interrupt Flag - CLEAR */
    TC4_CCCIF_SET_gc   = (0x40), /* Channel C Compare or Capture Interrupt Flag - SET */
} TC4_CCCIF_t;

/* Channel B Compare or Capture Interrupt Flag */
typedef enum TC4_CCBIF_enum
{
    TC4_CCBIF_CLEAR_gc = (0x00), /* Channel B Compare or Capture Interrupt Flag - CLEAR */
    TC4_CCBIF_SET_gc   = (0x20), /* Channel B Compare or Capture Interrupt Flag - SET */
} TC4_CCBIF_t;

/* Channel A Compare or Capture Interrupt Flag */
typedef enum TC4_CCAIF_enum
{
    TC4_CCAIF_CLEAR_gc = (0x00), /* Channel A Compare or Capture Interrupt Flag - CLEAR */
    TC4_CCAIF_SET_gc   = (0x10), /* Channel A Compare or Capture Interrupt Flag - SET */
} TC4_CCAIF_t;

/* Trigger Restart Interrupt Flag */
typedef enum TC4_TRGIF_enum
{
    TC4_TRGIF_CLEAR_gc = (0x00), /* Trigger Restart Interrupt Flag - CLEAR */
    TC4_TRGIF_SET_gc   = (0x04), /* Trigger Restart Interrupt Flag - SET */
} TC4_TRGIF_t;

/* Error Interrupt Flag */
typedef enum TC4_ERRIF_enum
{
    TC4_ERRIF_CLEAR_gc = (0x00), /* Error Interrupt Flag - CLEAR */
    TC4_ERRIF_SET_gc   = (0x02), /* Error Interrupt Flag - SET */
} TC4_ERRIF_t;

/* Overflow/Underflow Interrupt Flag */
typedef enum TC4_OVFIF_enum
{
    TC4_OVFIF_CLEAR_gc = (0x00), /* Overflow/Underflow Interrupt Flag - CLEAR */
    TC4_OVFIF_SET_gc   = (0x01), /* Overflow/Underflow Interrupt Flag - SET */
} TC4_OVFIF_t;

/* Channel Low D Compare or Capture Interrupt Flag */
typedef enum TC4_LCCDIF_enum
{
    TC4_LCCDIF_CLEAR_gc = (0x00), /* Channel Low D Compare or Capture Interrupt Flag - CLEAR */
    TC4_LCCDIF_SET_gc   = (0x80), /* Channel Low D Compare or Capture Interrupt Flag - SET */
} TC4_LCCDIF_t;

/* Channel Low C Compare or Capture Interrupt Flag */
typedef enum TC4_LCCCIF_enum
{
    TC4_LCCCIF_CLEAR_gc = (0x00), /* Channel Low C Compare or Capture Interrupt Flag - CLEAR */
    TC4_LCCCIF_SET_gc   = (0x40), /* Channel Low C Compare or Capture Interrupt Flag - SET */
} TC4_LCCCIF_t;

/* Channel Low B Compare or Capture Interrupt Flag */
typedef enum TC4_LCCBIF_enum
{
    TC4_LCCBIF_CLEAR_gc = (0x00), /* Channel Low B Compare or Capture Interrupt Flag - CLEAR */
    TC4_LCCBIF_SET_gc   = (0x20), /* Channel Low B Compare or Capture Interrupt Flag - SET */
} TC4_LCCBIF_t;

/* Channel Low A Compare or Capture Interrupt Flag */
typedef enum TC4_LCCAIF_enum
{
    TC4_LCCAIF_CLEAR_gc = (0x00), /* Channel Low A Compare or Capture Interrupt Flag - CLEAR */
    TC4_LCCAIF_SET_gc   = (0x10), /* Channel Low A Compare or Capture Interrupt Flag - SET */
} TC4_LCCAIF_t;

/* Synchronization Enabled */
typedef enum TC5_SYNCHEN_enum
{
    TC5_SYNCHEN_CLEAR_gc = (0x00), /* Synchronization Enabled - CLEAR */
    TC5_SYNCHEN_SET_gc   = (0x40), /* Synchronization Enabled - SET */
} TC5_SYNCHEN_t;

/* Start on Next Event */
typedef enum TC5_EVSTART_enum
{
    TC5_EVSTART_CLEAR_gc = (0x00), /* Start on Next Event - CLEAR */
    TC5_EVSTART_SET_gc   = (0x20), /* Start on Next Event - SET */
} TC5_EVSTART_t;

/* Stop on Next Update */
typedef enum TC5_UPSTOP_enum
{
    TC5_UPSTOP_CLEAR_gc = (0x00), /* Stop on Next Update - CLEAR */
    TC5_UPSTOP_SET_gc   = (0x10), /* Stop on Next Update - SET */
} TC5_UPSTOP_t;

/* Clock Select */
typedef enum TC5_CLKSEL_enum
{
    TC5_CLKSEL_OFF_gc     = (0x00), /* Timer Off */
    TC5_CLKSEL_DIV1_gc    = (0x01), /* System Clock */
    TC5_CLKSEL_DIV2_gc    = (0x02), /* System Clock / 2 */
    TC5_CLKSEL_DIV4_gc    = (0x03), /* System Clock / 4 */
    TC5_CLKSEL_DIV8_gc    = (0x04), /* System Clock / 8 */
    TC5_CLKSEL_DIV64_gc   = (0x05), /* System Clock / 64 */
    TC5_CLKSEL_DIV256_gc  = (0x06), /* System Clock / 256 */
    TC5_CLKSEL_DIV1024_gc = (0x07), /* System Clock / 1024 */
    TC5_CLKSEL_EVCH0_gc   = (0x08), /* Event Channel 0 */
    TC5_CLKSEL_EVCH1_gc   = (0x09), /* Event Channel 1 */
    TC5_CLKSEL_EVCH2_gc   = (0x0A), /* Event Channel 2 */
    TC5_CLKSEL_EVCH3_gc   = (0x0B), /* Event Channel 3 */
    TC5_CLKSEL_EVCH4_gc   = (0x0C), /* Event Channel 4 */
    TC5_CLKSEL_EVCH5_gc   = (0x0D), /* Event Channel 5 */
    TC5_CLKSEL_EVCH6_gc   = (0x0E), /* Event Channel 6 */
    TC5_CLKSEL_EVCH7_gc   = (0x0F), /* Event Channel 7 */
} TC5_CLKSEL_t;

/* Byte Mode */
typedef enum TC5_BYTEM_enum
{
    TC5_BYTEM_NORMAL_gc   = (0x00<<6), /* 16-bit mode */
    TC5_BYTEM_BYTEMODE_gc = (0x01<<6), /* Timer/Counter Operating in Byte Mode Only */
} TC5_BYTEM_t;

/* Circular Buffer Enable */
typedef enum TC5_CIRCEN_enum
{
    TC5_CIRCEN_DISABLE_gc = (0x00<<4), /* Circular Buffer Disabled */
    TC5_CIRCEN_PER_gc     = (0x01<<4), /* Circular Buffer Enabled on PER/PERBUF */
    TC5_CIRCEN_CCA_gc     = (0x02<<4), /* Circular Buffer Enabled on CCA/CCABUF */
    TC5_CIRCEN_BOTH_gc    = (0x03<<4), /* Circular Buffer Enabled on All Buffered Registers */
} TC5_CIRCEN_t;

/* Waveform Generation Mode */
typedef enum TC5_WGMODE_enum
{
    TC5_WGMODE_NORMAL_gc      = (0x00), /* Normal Mode */
    TC5_WGMODE_FRQ_gc         = (0x01), /* Frequency Generation Mode */
    TC5_WGMODE_SINGLESLOPE_gc = (0x03), /* Single Slope */
    TC5_WGMODE_DSTOP_gc       = (0x05), /* Dual Slope, Update on TOP */
    TC5_WGMODE_DSBOTH_gc      = (0x06), /* Dual Slope, Both */
    TC5_WGMODE_DSBOTTOM_gc    = (0x07), /* Dual Slope, Update on BOTTOM */
} TC5_WGMODE_t;

/* Channel B Output Polarity */
typedef enum TC5_POLB_enum
{
    TC5_POLB_CLEAR_gc = (0x00), /* Channel B Output Polarity - CLEAR */
    TC5_POLB_SET_gc   = (0x20), /* Channel B Output Polarity - SET */
} TC5_POLB_t;

/* Channel A Output Polarity */
typedef enum TC5_POLA_enum
{
    TC5_POLA_CLEAR_gc = (0x00), /* Channel A Output Polarity - CLEAR */
    TC5_POLA_SET_gc   = (0x10), /* Channel A Output Polarity - SET */
} TC5_POLA_t;

/* Channel B Compare Output Value */
typedef enum TC5_CMPB_enum
{
    TC5_CMPB_CLEAR_gc = (0x00), /* Channel B Compare Output Value - CLEAR */
    TC5_CMPB_SET_gc   = (0x02), /* Channel B Compare Output Value - SET */
} TC5_CMPB_t;

/* Channel A Compare Output Value */
typedef enum TC5_CMPA_enum
{
    TC5_CMPA_CLEAR_gc = (0x00), /* Channel A Compare Output Value - CLEAR */
    TC5_CMPA_SET_gc   = (0x01), /* Channel A Compare Output Value - SET */
} TC5_CMPA_t;

/* High Channel B Compare Output Value */
typedef enum TC5_HCMPB_enum
{
    TC5_HCMPB_CLEAR_gc = (0x00), /* High Channel B Compare Output Value - CLEAR */
    TC5_HCMPB_SET_gc   = (0x20), /* High Channel B Compare Output Value - SET */
} TC5_HCMPB_t;

/* High Channel A Compare Output Value */
typedef enum TC5_HCMPA_enum
{
    TC5_HCMPA_CLEAR_gc = (0x00), /* High Channel A Compare Output Value - CLEAR */
    TC5_HCMPA_SET_gc   = (0x10), /* High Channel A Compare Output Value - SET */
} TC5_HCMPA_t;

/* Low Channel B Compare Output Value */
typedef enum TC5_LCMPB_enum
{
    TC5_LCMPB_CLEAR_gc = (0x00), /* Low Channel B Compare Output Value - CLEAR */
    TC5_LCMPB_SET_gc   = (0x02), /* Low Channel B Compare Output Value - SET */
} TC5_LCMPB_t;

/* Low Channel A Compare Output Value */
typedef enum TC5_LCMPA_enum
{
    TC5_LCMPA_CLEAR_gc = (0x00), /* Low Channel A Compare Output Value - CLEAR */
    TC5_LCMPA_SET_gc   = (0x01), /* Low Channel A Compare Output Value - SET */
} TC5_LCMPA_t;

/* Event Action */
typedef enum TC5_EVACT_enum
{
    TC5_EVACT_OFF_gc     = (0x00<<5), /* No Event Action */
    TC5_EVACT_FMODE1_gc  = (0x01<<5), /* Fault Mode 1 capture */
    TC5_EVACT_FMODE2_gc  = (0x02<<5), /* Fault Mode 2 capture */
    TC5_EVACT_UPDOWN_gc  = (0x03<<5), /* Up/down count */
    TC5_EVACT_QDEC_gc    = (0x04<<5), /* Quadrature decode */
    TC5_EVACT_RESTART_gc = (0x05<<5), /* Restart */
    TC5_EVACT_PWF_gc     = (0x06<<5), /* Pulse-width Capture */
} TC5_EVACT_t;

/* Event Delay */
typedef enum TC5_EVDLY_enum
{
    TC5_EVDLY_CLEAR_gc = (0x00), /* Event Delay - CLEAR */
    TC5_EVDLY_SET_gc   = (0x10), /* Event Delay - SET */
} TC5_EVDLY_t;

/* Event Source Select */
typedef enum TC5_EVSEL_enum
{
    TC5_EVSEL_OFF_gc = (0x00), /* No Event Source */
    TC5_EVSEL_CH0_gc = (0x08), /* Event Channel 0 */
    TC5_EVSEL_CH1_gc = (0x09), /* Event Channel 1 */
    TC5_EVSEL_CH2_gc = (0x0A), /* Event Channel 2 */
    TC5_EVSEL_CH3_gc = (0x0B), /* Event Channel 3 */
    TC5_EVSEL_CH4_gc = (0x0C), /* Event Channel 4 */
    TC5_EVSEL_CH5_gc = (0x0D), /* Event Channel 5 */
    TC5_EVSEL_CH6_gc = (0x0E), /* Event Channel 6 */
    TC5_EVSEL_CH7_gc = (0x0F), /* Event Channel 7 */
} TC5_EVSEL_t;

/* Channel B Compare or Capture Mode */
typedef enum TC5_CCBMODE_enum
{
    TC5_CCBMODE_DISABLE_gc = (0x00<<2), /* Channel Disabled */
    TC5_CCBMODE_COMP_gc    = (0x01<<2), /* Output Compare enabled */
    TC5_CCBMODE_CAPT_gc    = (0x02<<2), /* Input Capture enabled */
    TC5_CCBMODE_BOTHCC_gc  = (0x03<<2), /* Both Compare and Capture enabled */
} TC5_CCBMODE_t;

/* Channel A Compare or Capture Mode */
typedef enum TC5_CCAMODE_enum
{
    TC5_CCAMODE_DISABLE_gc = (0x00), /* Channel Disabled */
    TC5_CCAMODE_COMP_gc    = (0x01), /* Output Compare enabled */
    TC5_CCAMODE_CAPT_gc    = (0x02), /* Input Capture enabled */
    TC5_CCAMODE_BOTHCC_gc  = (0x03), /* Both Compare and Capture enabled */
} TC5_CCAMODE_t;

/* Channel Low B Compare or Capture Mode */
typedef enum TC5_LCCBMODE_enum
{
    TC5_LCCBMODE_DISABLE_gc = (0x00<<2), /* Channel Disabled */
    TC5_LCCBMODE_COMP_gc    = (0x01<<2), /* Output Compare enabled */
    TC5_LCCBMODE_CAPT_gc    = (0x02<<2), /* Input Capture enabled */
    TC5_LCCBMODE_BOTHCC_gc  = (0x03<<2), /* Both Compare and Capture enabled */
} TC5_LCCBMODE_t;

/* Channel Low A Compare or Capture Mode */
typedef enum TC5_LCCAMODE_enum
{
    TC5_LCCAMODE_DISABLE_gc = (0x00), /* Channel Disabled */
    TC5_LCCAMODE_COMP_gc    = (0x01), /* Output Compare enabled */
    TC5_LCCAMODE_CAPT_gc    = (0x02), /* Input Capture enabled */
    TC5_LCCAMODE_BOTHCC_gc  = (0x03), /* Both Compare and Capture enabled */
} TC5_LCCAMODE_t;

/* Channel High B Compare or Capture Mode */
typedef enum TC5_HCCBMODE_enum
{
    TC5_HCCBMODE_DISABLE_gc = (0x00<<2), /* Channel Disabled */
    TC5_HCCBMODE_COMP_gc    = (0x01<<2), /* Output Compare enabled */
    TC5_HCCBMODE_CAPT_gc    = (0x02<<2), /* Input Capture enabled */
    TC5_HCCBMODE_BOTHCC_gc  = (0x03<<2), /* Both Compare and Capture enabled */
} TC5_HCCBMODE_t;

/* Channel High A Compare or Capture Mode */
typedef enum TC5_HCCAMODE_enum
{
    TC5_HCCAMODE_DISABLE_gc = (0x00), /* Channel Disabled */
    TC5_HCCAMODE_COMP_gc    = (0x01), /* Output Compare enabled */
    TC5_HCCAMODE_CAPT_gc    = (0x02), /* Input Capture enabled */
    TC5_HCCAMODE_BOTHCC_gc  = (0x03), /* Both Compare and Capture enabled */
} TC5_HCCAMODE_t;

/* Timer Trigger Restart Interrupt Level */
typedef enum TC5_TRGINTLVL_enum
{
    TC5_TRGINTLVL_OFF_gc = (0x00<<4), /* Interrupt Disabled */
    TC5_TRGINTLVL_LO_gc  = (0x01<<4), /* Low Level */
    TC5_TRGINTLVL_MED_gc = (0x02<<4), /* Medium Level */
    TC5_TRGINTLVL_HI_gc  = (0x03<<4), /* High Level */
} TC5_TRGINTLVL_t;

/* Timer Error Interrupt Level */
typedef enum TC5_ERRINTLVL_enum
{
    TC5_ERRINTLVL_OFF_gc = (0x00<<2), /* Interrupt Disabled */
    TC5_ERRINTLVL_LO_gc  = (0x01<<2), /* Low Level */
    TC5_ERRINTLVL_MED_gc = (0x02<<2), /* Medium Level */
    TC5_ERRINTLVL_HI_gc  = (0x03<<2), /* High Level */
} TC5_ERRINTLVL_t;

/* Timer Overflow/Underflow Interrupt Level */
typedef enum TC5_OVFINTLVL_enum
{
    TC5_OVFINTLVL_OFF_gc = (0x00), /* Interrupt Disabled */
    TC5_OVFINTLVL_LO_gc  = (0x01), /* Low Level */
    TC5_OVFINTLVL_MED_gc = (0x02), /* Medium Level */
    TC5_OVFINTLVL_HI_gc  = (0x03), /* High Level */
} TC5_OVFINTLVL_t;

/* Channel B Compare or Capture Interrupt Level */
typedef enum TC5_CCBINTLVL_enum
{
    TC5_CCBINTLVL_OFF_gc = (0x00<<2), /* Interrupt Disabled */
    TC5_CCBINTLVL_LO_gc  = (0x01<<2), /* Low Level */
    TC5_CCBINTLVL_MED_gc = (0x02<<2), /* Medium Level */
    TC5_CCBINTLVL_HI_gc  = (0x03<<2), /* High Level */
} TC5_CCBINTLVL_t;

/* Channel A Compare or Capture Interrupt Level */
typedef enum TC5_CCAINTLVL_enum
{
    TC5_CCAINTLVL_OFF_gc = (0x00), /* Interrupt Disabled */
    TC5_CCAINTLVL_LO_gc  = (0x01), /* Low Level */
    TC5_CCAINTLVL_MED_gc = (0x02), /* Medium Level */
    TC5_CCAINTLVL_HI_gc  = (0x03), /* High Level */
} TC5_CCAINTLVL_t;

/* Channel Low B Compare or Capture Interrupt Level */
typedef enum TC5_LCCBINTLVL_enum
{
    TC5_LCCBINTLVL_OFF_gc = (0x00<<2), /* Interrupt Disabled */
    TC5_LCCBINTLVL_LO_gc  = (0x01<<2), /* Low Level */
    TC5_LCCBINTLVL_MED_gc = (0x02<<2), /* Medium Level */
    TC5_LCCBINTLVL_HI_gc  = (0x03<<2), /* High Level */
} TC5_LCCBINTLVL_t;

/* Channel Low A Compare or Capture Interrupt Level */
typedef enum TC5_LCCAINTLVL_enum
{
    TC5_LCCAINTLVL_OFF_gc = (0x00), /* Interrupt Disabled */
    TC5_LCCAINTLVL_LO_gc  = (0x01), /* Low Level */
    TC5_LCCAINTLVL_MED_gc = (0x02), /* Medium Level */
    TC5_LCCAINTLVL_HI_gc  = (0x03), /* High Level */
} TC5_LCCAINTLVL_t;

/* Timer/Counter Stop */
typedef enum TC5_STOP_enum
{
    TC5_STOP_CLEAR_gc = (0x00), /* Timer/Counter Stop - CLEAR */
    TC5_STOP_SET_gc   = (0x20), /* Timer/Counter Stop - SET */
} TC5_STOP_t;

/* Command */
typedef enum TC5_CMD_enum
{
    TC5_CMD_NONE_gc    = (0x00<<2), /* No Command */
    TC5_CMD_UPDATE_gc  = (0x01<<2), /* Force Update */
    TC5_CMD_RESTART_gc = (0x02<<2), /* Force Restart */
    TC5_CMD_RESET_gc   = (0x03<<2), /* Force Hard Reset */
} TC5_CMD_t;

/* Lock Update */
typedef enum TC5_LUPD_enum
{
    TC5_LUPD_CLEAR_gc = (0x00), /* Lock Update - CLEAR */
    TC5_LUPD_SET_gc   = (0x02), /* Lock Update - SET */
} TC5_LUPD_t;

/* Counter Direction */
typedef enum TC5_DIR_enum
{
    TC5_DIR_CLEAR_gc = (0x00), /* Counter Direction - CLEAR */
    TC5_DIR_SET_gc   = (0x01), /* Counter Direction - SET */
} TC5_DIR_t;

/* Timer/Counter Stop */
typedef enum TC5_STOP_enum
{
    TC5_STOP_CLEAR_gc = (0x00), /* Timer/Counter Stop - CLEAR */
    TC5_STOP_SET_gc   = (0x10), /* Timer/Counter Stop - SET */
} TC5_STOP_t;

/* Command */
typedef enum TC5_CMD_enum
{
    TC5_CMD_NONE_gc    = (0x00<<2), /* No Command */
    TC5_CMD_UPDATE_gc  = (0x01<<2), /* Force Update */
    TC5_CMD_RESTART_gc = (0x02<<2), /* Force Restart */
    TC5_CMD_RESET_gc   = (0x03<<2), /* Force Hard Reset */
} TC5_CMD_t;

/* Lock Update */
typedef enum TC5_LUPD_enum
{
    TC5_LUPD_CLEAR_gc = (0x00), /* Lock Update - CLEAR */
    TC5_LUPD_SET_gc   = (0x02), /* Lock Update - SET */
} TC5_LUPD_t;

/* Counter Direction */
typedef enum TC5_DIR_enum
{
    TC5_DIR_CLEAR_gc = (0x00), /* Counter Direction - CLEAR */
    TC5_DIR_SET_gc   = (0x01), /* Counter Direction - SET */
} TC5_DIR_t;

/* Channel B Compare or Capture Buffer Valid */
typedef enum TC5_CCBBV_enum
{
    TC5_CCBBV_CLEAR_gc = (0x00), /* Channel B Compare or Capture Buffer Valid - CLEAR */
    TC5_CCBBV_SET_gc   = (0x04), /* Channel B Compare or Capture Buffer Valid - SET */
} TC5_CCBBV_t;

/* Channel A Compare or Capture Buffer Valid */
typedef enum TC5_CCABV_enum
{
    TC5_CCABV_CLEAR_gc = (0x00), /* Channel A Compare or Capture Buffer Valid - CLEAR */
    TC5_CCABV_SET_gc   = (0x02), /* Channel A Compare or Capture Buffer Valid - SET */
} TC5_CCABV_t;

/* Period Buffer Valid */
typedef enum TC5_PERBV_enum
{
    TC5_PERBV_CLEAR_gc = (0x00), /* Period Buffer Valid - CLEAR */
    TC5_PERBV_SET_gc   = (0x01), /* Period Buffer Valid - SET */
} TC5_PERBV_t;

/* Channel Low B Compare or Capture Buffer Valid */
typedef enum TC5_LCCBBV_enum
{
    TC5_LCCBBV_CLEAR_gc = (0x00), /* Channel Low B Compare or Capture Buffer Valid - CLEAR */
    TC5_LCCBBV_SET_gc   = (0x04), /* Channel Low B Compare or Capture Buffer Valid - SET */
} TC5_LCCBBV_t;

/* Channel Low A Compare or Capture Buffer Valid */
typedef enum TC5_LCCABV_enum
{
    TC5_LCCABV_CLEAR_gc = (0x00), /* Channel Low A Compare or Capture Buffer Valid - CLEAR */
    TC5_LCCABV_SET_gc   = (0x02), /* Channel Low A Compare or Capture Buffer Valid - SET */
} TC5_LCCABV_t;

/* Period Low Buffer Valid */
typedef enum TC5_LPERBV_enum
{
    TC5_LPERBV_CLEAR_gc = (0x00), /* Period Low Buffer Valid - CLEAR */
    TC5_LPERBV_SET_gc   = (0x01), /* Period Low Buffer Valid - SET */
} TC5_LPERBV_t;

/* Channel B Compare or Capture Buffer Valid */
typedef enum TC5_CCBBV_enum
{
    TC5_CCBBV_CLEAR_gc = (0x00), /* Channel B Compare or Capture Buffer Valid - CLEAR */
    TC5_CCBBV_SET_gc   = (0x04), /* Channel B Compare or Capture Buffer Valid - SET */
} TC5_CCBBV_t;

/* Channel A Compare or Capture Buffer Valid */
typedef enum TC5_CCABV_enum
{
    TC5_CCABV_CLEAR_gc = (0x00), /* Channel A Compare or Capture Buffer Valid - CLEAR */
    TC5_CCABV_SET_gc   = (0x02), /* Channel A Compare or Capture Buffer Valid - SET */
} TC5_CCABV_t;

/* Period Buffer Valid */
typedef enum TC5_PERBV_enum
{
    TC5_PERBV_CLEAR_gc = (0x00), /* Period Buffer Valid - CLEAR */
    TC5_PERBV_SET_gc   = (0x01), /* Period Buffer Valid - SET */
} TC5_PERBV_t;

/* Channel Low B Compare or Capture Buffer Valid */
typedef enum TC5_LCCBBV_enum
{
    TC5_LCCBBV_CLEAR_gc = (0x00), /* Channel Low B Compare or Capture Buffer Valid - CLEAR */
    TC5_LCCBBV_SET_gc   = (0x04), /* Channel Low B Compare or Capture Buffer Valid - SET */
} TC5_LCCBBV_t;

/* Channel Low A Compare or Capture Buffer Valid */
typedef enum TC5_LCCABV_enum
{
    TC5_LCCABV_CLEAR_gc = (0x00), /* Channel Low A Compare or Capture Buffer Valid - CLEAR */
    TC5_LCCABV_SET_gc   = (0x02), /* Channel Low A Compare or Capture Buffer Valid - SET */
} TC5_LCCABV_t;

/* Period Low Buffer Valid */
typedef enum TC5_LPERBV_enum
{
    TC5_LPERBV_CLEAR_gc = (0x00), /* Period Low Buffer Valid - CLEAR */
    TC5_LPERBV_SET_gc   = (0x01), /* Period Low Buffer Valid - SET */
} TC5_LPERBV_t;

/* Channel B Compare or Capture Interrupt Flag */
typedef enum TC5_CCBIF_enum
{
    TC5_CCBIF_CLEAR_gc = (0x00), /* Channel B Compare or Capture Interrupt Flag - CLEAR */
    TC5_CCBIF_SET_gc   = (0x20), /* Channel B Compare or Capture Interrupt Flag - SET */
} TC5_CCBIF_t;

/* Channel A Compare or Capture Interrupt Flag */
typedef enum TC5_CCAIF_enum
{
    TC5_CCAIF_CLEAR_gc = (0x00), /* Channel A Compare or Capture Interrupt Flag - CLEAR */
    TC5_CCAIF_SET_gc   = (0x10), /* Channel A Compare or Capture Interrupt Flag - SET */
} TC5_CCAIF_t;

/* Trigger Restart Interrupt Flag */
typedef enum TC5_TRGIF_enum
{
    TC5_TRGIF_CLEAR_gc = (0x00), /* Trigger Restart Interrupt Flag - CLEAR */
    TC5_TRGIF_SET_gc   = (0x04), /* Trigger Restart Interrupt Flag - SET */
} TC5_TRGIF_t;

/* Error Interrupt Flag */
typedef enum TC5_ERRIF_enum
{
    TC5_ERRIF_CLEAR_gc = (0x00), /* Error Interrupt Flag - CLEAR */
    TC5_ERRIF_SET_gc   = (0x02), /* Error Interrupt Flag - SET */
} TC5_ERRIF_t;

/* Overflow/Underflow Interrupt Flag */
typedef enum TC5_OVFIF_enum
{
    TC5_OVFIF_CLEAR_gc = (0x00), /* Overflow/Underflow Interrupt Flag - CLEAR */
    TC5_OVFIF_SET_gc   = (0x01), /* Overflow/Underflow Interrupt Flag - SET */
} TC5_OVFIF_t;

/* Channel Low B Compare or Capture Interrupt Flag */
typedef enum TC5_LCCBIF_enum
{
    TC5_LCCBIF_CLEAR_gc = (0x00), /* Channel Low B Compare or Capture Interrupt Flag - CLEAR */
    TC5_LCCBIF_SET_gc   = (0x20), /* Channel Low B Compare or Capture Interrupt Flag - SET */
} TC5_LCCBIF_t;

/* Channel Low A Compare or Capture Interrupt Flag */
typedef enum TC5_LCCAIF_enum
{
    TC5_LCCAIF_CLEAR_gc = (0x00), /* Channel Low A Compare or Capture Interrupt Flag - CLEAR */
    TC5_LCCAIF_SET_gc   = (0x10), /* Channel Low A Compare or Capture Interrupt Flag - SET */
} TC5_LCCAIF_t;

/*
--------------------------------------------------------------------------------
FAULT - Fault Extension
--------------------------------------------------------------------------------
*/

typedef struct FAULT_struct
{
    register8_t CTRLA;    /* Control A Register */
    register8_t CTRLB;    /* Control B Register */
    register8_t CTRLC;    /* Control C Register */
    register8_t CTRLD;    /* Control D Register */
    register8_t CTRLE;    /* Control E Register */
    register8_t STATUS;   /* Status Register */
    register8_t CTRLGCLR; /* Control Register G Clear */
    register8_t CTRLGSET; /* Control Register G set */
} FAULT_t;


/* Ramp Mode Selection */
typedef enum FAULT_RAMP_enum
{
    FAULT_RAMP_RAMP1_gc = (0x00<<6), /* Normal Mode */
    FAULT_RAMP_RAMP2_gc = (0x02<<6), /* RAMP2 Mode */
} FAULT_RAMP_t;

/* Fault on Debug Break Detection */
typedef enum FAULT_FDDBD_enum
{
    FAULT_FDDBD_CLEAR_gc = (0x00), /* Fault on Debug Break Detection - CLEAR */
    FAULT_FDDBD_SET_gc   = (0x20), /* Fault on Debug Break Detection - SET */
} FAULT_FDDBD_t;

/* Port Control Mode */
typedef enum FAULT_PORTCTRL_enum
{
    FAULT_PORTCTRL_CLEAR_gc = (0x00), /* Port Control Mode - CLEAR */
    FAULT_PORTCTRL_SET_gc   = (0x10), /* Port Control Mode - SET */
} FAULT_PORTCTRL_t;

/* Fuse State  */
typedef enum FAULT_FUSE_enum
{
    FAULT_FUSE_CLEAR_gc = (0x00), /* Fuse State  - CLEAR */
    FAULT_FUSE_SET_gc   = (0x08), /* Fuse State  - SET */
} FAULT_FUSE_t;

/* Fault E Digital Filter Selection */
typedef enum FAULT_FILTERE_enum
{
    FAULT_FILTERE_CLEAR_gc = (0x00), /* Fault E Digital Filter Selection - CLEAR */
    FAULT_FILTERE_SET_gc   = (0x04), /* Fault E Digital Filter Selection - SET */
} FAULT_FILTERE_t;

/* Fault E Input selection */
typedef enum FAULT_SRCE_enum
{
    FAULT_SRCE_DISABLE_gc = (0x00), /* Fault Protection Disabled */
    FAULT_SRCE_CHN_gc     = (0x01), /* Event Channel n */
    FAULT_SRCE_CHN1_gc    = (0x02), /* Event Channel n+1 */
    FAULT_SRCE_CHN2_gc    = (0x03), /* Event Channel n+2 */
} FAULT_SRCE_t;

/* Fault A Software Mode */
typedef enum FAULT_SOFTA_enum
{
    FAULT_SOFTA_CLEAR_gc = (0x00), /* Fault A Software Mode - CLEAR */
    FAULT_SOFTA_SET_gc   = (0x80), /* Fault A Software Mode - SET */
} FAULT_SOFTA_t;

/* Fault A Halt Action */
typedef enum FAULT_HALTA_enum
{
    FAULT_HALTA_DISABLE_gc = (0x00<<5), /* Halt Action Disabled */
    FAULT_HALTA_HW_gc      = (0x01<<5), /* Hardware Halt Action */
    FAULT_HALTA_SW_gc      = (0x02<<5), /* Software Halt Action */
} FAULT_HALTA_t;

/* Fault A Restart Action */
typedef enum FAULT_RESTARTA_enum
{
    FAULT_RESTARTA_CLEAR_gc = (0x00), /* Fault A Restart Action - CLEAR */
    FAULT_RESTARTA_SET_gc   = (0x10), /* Fault A Restart Action - SET */
} FAULT_RESTARTA_t;

/* Fault A Keep Action */
typedef enum FAULT_KEEPA_enum
{
    FAULT_KEEPA_CLEAR_gc = (0x00), /* Fault A Keep Action - CLEAR */
    FAULT_KEEPA_SET_gc   = (0x08), /* Fault A Keep Action - SET */
} FAULT_KEEPA_t;

/* Fault A Source Selection */
typedef enum FAULT_SRCA_enum
{
    FAULT_SRCA_DISABLE_gc = (0x00), /* Fault A Disabled */
    FAULT_SRCA_CHN_gc     = (0x01), /* Event Channel n */
    FAULT_SRCA_CHN1_gc    = (0x02), /* Event Channel n+1 */
    FAULT_SRCA_LINK_gc    = (0x03), /* Fault A linked to Fault B State from previous cycle */
} FAULT_SRCA_t;

/* Fault A Capture */
typedef enum FAULT_CAPTA_enum
{
    FAULT_CAPTA_CLEAR_gc = (0x00), /* Fault A Capture - CLEAR */
    FAULT_CAPTA_SET_gc   = (0x20), /* Fault A Capture - SET */
} FAULT_CAPTA_t;

/* Fault A Digital Filter Selection */
typedef enum FAULT_FILTERA_enum
{
    FAULT_FILTERA_CLEAR_gc = (0x00), /* Fault A Digital Filter Selection - CLEAR */
    FAULT_FILTERA_SET_gc   = (0x04), /* Fault A Digital Filter Selection - SET */
} FAULT_FILTERA_t;

/* Fault A Blanking */
typedef enum FAULT_BLANKA_enum
{
    FAULT_BLANKA_CLEAR_gc = (0x00), /* Fault A Blanking - CLEAR */
    FAULT_BLANKA_SET_gc   = (0x02), /* Fault A Blanking - SET */
} FAULT_BLANKA_t;

/* Fault A Qualification */
typedef enum FAULT_QUALA_enum
{
    FAULT_QUALA_CLEAR_gc = (0x00), /* Fault A Qualification - CLEAR */
    FAULT_QUALA_SET_gc   = (0x01), /* Fault A Qualification - SET */
} FAULT_QUALA_t;

/* Fault B Software Mode */
typedef enum FAULT_SOFTB_enum
{
    FAULT_SOFTB_CLEAR_gc = (0x00), /* Fault B Software Mode - CLEAR */
    FAULT_SOFTB_SET_gc   = (0x80), /* Fault B Software Mode - SET */
} FAULT_SOFTB_t;

/* Fault B Halt Action */
typedef enum FAULT_HALTB_enum
{
    FAULT_HALTB_DISABLE_gc = (0x00<<5), /* Halt Action Disabled */
    FAULT_HALTB_HW_gc      = (0x01<<5), /* Hardware Halt Action */
    FAULT_HALTB_SW_gc      = (0x02<<5), /* Software Halt Action */
} FAULT_HALTB_t;

/* Fault B Restart Action */
typedef enum FAULT_RESTARTB_enum
{
    FAULT_RESTARTB_CLEAR_gc = (0x00), /* Fault B Restart Action - CLEAR */
    FAULT_RESTARTB_SET_gc   = (0x10), /* Fault B Restart Action - SET */
} FAULT_RESTARTB_t;

/* Fault B Keep Action */
typedef enum FAULT_KEEPB_enum
{
    FAULT_KEEPB_CLEAR_gc = (0x00), /* Fault B Keep Action - CLEAR */
    FAULT_KEEPB_SET_gc   = (0x08), /* Fault B Keep Action - SET */
} FAULT_KEEPB_t;

/* Fault B Source Selection */
typedef enum FAULT_SRCB_enum
{
    FAULT_SRCB_DISABLE_gc = (0x00), /* Fault B disabled */
    FAULT_SRCB_CHN_gc     = (0x01), /* Event Channel n */
    FAULT_SRCB_CHN1_gc    = (0x02), /* Event Channel n+1 */
    FAULT_SRCB_LINK_gc    = (0x03), /* Fault B linked to Fault A State from previous cycle */
} FAULT_SRCB_t;

/* Fault B Capture */
typedef enum FAULT_CAPTB_enum
{
    FAULT_CAPTB_CLEAR_gc = (0x00), /* Fault B Capture - CLEAR */
    FAULT_CAPTB_SET_gc   = (0x20), /* Fault B Capture - SET */
} FAULT_CAPTB_t;

/* Fault B Digital Filter Selection */
typedef enum FAULT_FILTERB_enum
{
    FAULT_FILTERB_CLEAR_gc = (0x00), /* Fault B Digital Filter Selection - CLEAR */
    FAULT_FILTERB_SET_gc   = (0x04), /* Fault B Digital Filter Selection - SET */
} FAULT_FILTERB_t;

/* Fault B Blanking */
typedef enum FAULT_BLANKB_enum
{
    FAULT_BLANKB_CLEAR_gc = (0x00), /* Fault B Blanking - CLEAR */
    FAULT_BLANKB_SET_gc   = (0x02), /* Fault B Blanking - SET */
} FAULT_BLANKB_t;

/* Fault B Qualification */
typedef enum FAULT_QUALB_enum
{
    FAULT_QUALB_CLEAR_gc = (0x00), /* Fault B Qualification - CLEAR */
    FAULT_QUALB_SET_gc   = (0x01), /* Fault B Qualification - SET */
} FAULT_QUALB_t;

/* Fault B State */
typedef enum FAULT_STATEB_enum
{
    FAULT_STATEB_CLEAR_gc = (0x00), /* Fault B State - CLEAR */
    FAULT_STATEB_SET_gc   = (0x80), /* Fault B State - SET */
} FAULT_STATEB_t;

/* Fault A State */
typedef enum FAULT_STATEA_enum
{
    FAULT_STATEA_CLEAR_gc = (0x00), /* Fault A State - CLEAR */
    FAULT_STATEA_SET_gc   = (0x40), /* Fault A State - SET */
} FAULT_STATEA_t;

/* Fault E State */
typedef enum FAULT_STATEE_enum
{
    FAULT_STATEE_CLEAR_gc = (0x00), /* Fault E State - CLEAR */
    FAULT_STATEE_SET_gc   = (0x20), /* Fault E State - SET */
} FAULT_STATEE_t;

/* Channel Index Flag */
typedef enum FAULT_IDX_enum
{
    FAULT_IDX_CLEAR_gc = (0x00), /* Channel Index Flag - CLEAR */
    FAULT_IDX_SET_gc   = (0x08), /* Channel Index Flag - SET */
} FAULT_IDX_t;

/* Fault B Flag */
typedef enum FAULT_FAULTBIN_enum
{
    FAULT_FAULTBIN_CLEAR_gc = (0x00), /* Fault B Flag - CLEAR */
    FAULT_FAULTBIN_SET_gc   = (0x04), /* Fault B Flag - SET */
} FAULT_FAULTBIN_t;

/* Fault A Flag */
typedef enum FAULT_FAULTAIN_enum
{
    FAULT_FAULTAIN_CLEAR_gc = (0x00), /* Fault A Flag - CLEAR */
    FAULT_FAULTAIN_SET_gc   = (0x02), /* Fault A Flag - SET */
} FAULT_FAULTAIN_t;

/* Fault E Flag */
typedef enum FAULT_FAULTEIN_enum
{
    FAULT_FAULTEIN_CLEAR_gc = (0x00), /* Fault E Flag - CLEAR */
    FAULT_FAULTEIN_SET_gc   = (0x01), /* Fault E Flag - SET */
} FAULT_FAULTEIN_t;

/* State B Clear */
typedef enum FAULT_HALTBCLR_enum
{
    FAULT_HALTBCLR_CLEAR_gc = (0x00), /* State B Clear - CLEAR */
    FAULT_HALTBCLR_SET_gc   = (0x80), /* State B Clear - SET */
} FAULT_HALTBCLR_t;

/* State A Clear */
typedef enum FAULT_HALTACLR_enum
{
    FAULT_HALTACLR_CLEAR_gc = (0x00), /* State A Clear - CLEAR */
    FAULT_HALTACLR_SET_gc   = (0x40), /* State A Clear - SET */
} FAULT_HALTACLR_t;

/* State E Clear */
typedef enum FAULT_STATEECLR_enum
{
    FAULT_STATEECLR_CLEAR_gc = (0x00), /* State E Clear - CLEAR */
    FAULT_STATEECLR_SET_gc   = (0x20), /* State E Clear - SET */
} FAULT_STATEECLR_t;

/* Fault B Flag */
typedef enum FAULT_FAULTB_enum
{
    FAULT_FAULTB_CLEAR_gc = (0x00), /* Fault B Flag - CLEAR */
    FAULT_FAULTB_SET_gc   = (0x04), /* Fault B Flag - SET */
} FAULT_FAULTB_t;

/* Fault A Flag */
typedef enum FAULT_FAULTA_enum
{
    FAULT_FAULTA_CLEAR_gc = (0x00), /* Fault A Flag - CLEAR */
    FAULT_FAULTA_SET_gc   = (0x02), /* Fault A Flag - SET */
} FAULT_FAULTA_t;

/* Fault E Flag */
typedef enum FAULT_FAULTE_enum
{
    FAULT_FAULTE_CLEAR_gc = (0x00), /* Fault E Flag - CLEAR */
    FAULT_FAULTE_SET_gc   = (0x01), /* Fault E Flag - SET */
} FAULT_FAULTE_t;

/* Software Fault B */
typedef enum FAULT_FAULTBSW_enum
{
    FAULT_FAULTBSW_CLEAR_gc = (0x00), /* Software Fault B - CLEAR */
    FAULT_FAULTBSW_SET_gc   = (0x80), /* Software Fault B - SET */
} FAULT_FAULTBSW_t;

/* Software Fault A */
typedef enum FAULT_FAULTASW_enum
{
    FAULT_FAULTASW_CLEAR_gc = (0x00), /* Software Fault A - CLEAR */
    FAULT_FAULTASW_SET_gc   = (0x40), /* Software Fault A - SET */
} FAULT_FAULTASW_t;

/* Software Fault E */
typedef enum FAULT_FAULTESW_enum
{
    FAULT_FAULTESW_CLEAR_gc = (0x00), /* Software Fault E - CLEAR */
    FAULT_FAULTESW_SET_gc   = (0x20), /* Software Fault E - SET */
} FAULT_FAULTESW_t;

/* Channel index Command */
typedef enum FAULT_IDXCMD_enum
{
    FAULT_IDXCMD_DISABLE_gc = (0x00<<3), /* Command Disabled */
    FAULT_IDXCMD_SET_gc     = (0x01<<3), /* Force Cycle B in Next Cycle */
    FAULT_IDXCMD_CLEAR_gc   = (0x02<<3), /* Force Cycle A in Next Cycle */
    FAULT_IDXCMD_HOLD_gc    = (0x03<<3), /* Hold Current Cycle Index in Next Cycle  */
} FAULT_IDXCMD_t;

/*
--------------------------------------------------------------------------------
WEX - Waveform Extension
--------------------------------------------------------------------------------
*/

typedef struct WEX_struct
{
    register8_t CTRL;        /* Control Register */
    register8_t DTBOTH;      /* Dead-time Concurrent Write to Both Sides Register */
    register8_t DTLS;        /* Dead-time Low Side Register */
    register8_t DTHS;        /* Dead-time High Side Register */
    register8_t STATUSCLR;   /* Status Clear Register */
    register8_t STATUSSET;   /* Status Set Register */
    register8_t SWAP;        /* Swap Register */
    register8_t PGO;         /* Pattern Generation Override Register */
    register8_t PGV;         /* Pattern Generation Value Register */
    register8_t rsv_0x09;    /* RESERVED REGISTER */
    register8_t SWAPBUF;     /* Dead Time Low Side Buffer */
    register8_t PGOBUF;      /* Pattern Generation Overwrite Buffer Register */
    register8_t PGVBUF;      /* Pattern Generation Value Buffer Register */
    register8_t rsv_0x0D[2]; /* RESERVED REGISTER BLOCK */
    register8_t OUTOVDIS;    /* Output Override Disable Register  */
} WEX_t;


/* Update Source Selection */
typedef enum WEX_UPSEL_enum
{
    WEX_UPSEL_CLEAR_gc = (0x00), /* Update Source Selection - CLEAR */
    WEX_UPSEL_SET_gc   = (0x80), /* Update Source Selection - SET */
} WEX_UPSEL_t;

/* Output Matrix */
typedef enum WEX_OTMX_enum
{
    WEX_OTMX_DEFAULT_gc = (0x00<<4), /* Default Output Matrix Mode */
    WEX_OTMX_FIRST_gc   = (0x01<<4), /* First Output matrix Mode */
    WEX_OTMX_SECOND_gc  = (0x02<<4), /* Second Output matrix Mode */
    WEX_OTMX_THIRD_gc   = (0x03<<4), /* Third Output matrix Mode */
    WEX_OTMX_FOURTH_gc  = (0x04<<4), /* Fourth Output matrix Mode */
} WEX_OTMX_t;

/* Dead-Time Insertion Generator 3 Enable */
typedef enum WEX_DTI3EN_enum
{
    WEX_DTI3EN_CLEAR_gc = (0x00), /* Dead-Time Insertion Generator 3 Enable - CLEAR */
    WEX_DTI3EN_SET_gc   = (0x08), /* Dead-Time Insertion Generator 3 Enable - SET */
} WEX_DTI3EN_t;

/* Dead-Time Insertion Generator 2 Enable */
typedef enum WEX_DTI2EN_enum
{
    WEX_DTI2EN_CLEAR_gc = (0x00), /* Dead-Time Insertion Generator 2 Enable - CLEAR */
    WEX_DTI2EN_SET_gc   = (0x04), /* Dead-Time Insertion Generator 2 Enable - SET */
} WEX_DTI2EN_t;

/* Dead-Time Insertion Generator 1 Enable */
typedef enum WEX_DTI1EN_enum
{
    WEX_DTI1EN_CLEAR_gc = (0x00), /* Dead-Time Insertion Generator 1 Enable - CLEAR */
    WEX_DTI1EN_SET_gc   = (0x02), /* Dead-Time Insertion Generator 1 Enable - SET */
} WEX_DTI1EN_t;

/* Dead-Time Insertion Generator 0 Enable */
typedef enum WEX_DTI0EN_enum
{
    WEX_DTI0EN_CLEAR_gc = (0x00), /* Dead-Time Insertion Generator 0 Enable - CLEAR */
    WEX_DTI0EN_SET_gc   = (0x01), /* Dead-Time Insertion Generator 0 Enable - SET */
} WEX_DTI0EN_t;

/* Swap Buffer Valid  */
typedef enum WEX_SWAPBUF_enum
{
    WEX_SWAPBUF_CLEAR_gc = (0x00), /* Swap Buffer Valid  - CLEAR */
    WEX_SWAPBUF_SET_gc   = (0x04), /* Swap Buffer Valid  - SET */
} WEX_SWAPBUF_t;

/* Pattern Generator Value Buffer Valid  */
typedef enum WEX_PGVBUFV_enum
{
    WEX_PGVBUFV_CLEAR_gc = (0x00), /* Pattern Generator Value Buffer Valid  - CLEAR */
    WEX_PGVBUFV_SET_gc   = (0x02), /* Pattern Generator Value Buffer Valid  - SET */
} WEX_PGVBUFV_t;

/* Pattern Generator Overwrite Buffer Valid */
typedef enum WEX_PGOBUFV_enum
{
    WEX_PGOBUFV_CLEAR_gc = (0x00), /* Pattern Generator Overwrite Buffer Valid - CLEAR */
    WEX_PGOBUFV_SET_gc   = (0x01), /* Pattern Generator Overwrite Buffer Valid - SET */
} WEX_PGOBUFV_t;

/* Swap Buffer Valid  */
typedef enum WEX_SWAPBUF_enum
{
    WEX_SWAPBUF_CLEAR_gc = (0x00), /* Swap Buffer Valid  - CLEAR */
    WEX_SWAPBUF_SET_gc   = (0x04), /* Swap Buffer Valid  - SET */
} WEX_SWAPBUF_t;

/* Pattern Generator Value Buffer Valid  */
typedef enum WEX_PGVBUFV_enum
{
    WEX_PGVBUFV_CLEAR_gc = (0x00), /* Pattern Generator Value Buffer Valid  - CLEAR */
    WEX_PGVBUFV_SET_gc   = (0x02), /* Pattern Generator Value Buffer Valid  - SET */
} WEX_PGVBUFV_t;

/* Pattern Generator Overwrite Buffer Valid  */
typedef enum WEX_PGOBUFV_enum
{
    WEX_PGOBUFV_CLEAR_gc = (0x00), /* Pattern Generator Overwrite Buffer Valid  - CLEAR */
    WEX_PGOBUFV_SET_gc   = (0x01), /* Pattern Generator Overwrite Buffer Valid  - SET */
} WEX_PGOBUFV_t;

/* Swap DTI output pair 3 */
typedef enum WEX_SWAP3_enum
{
    WEX_SWAP3_CLEAR_gc = (0x00), /* Swap DTI output pair 3 - CLEAR */
    WEX_SWAP3_SET_gc   = (0x08), /* Swap DTI output pair 3 - SET */
} WEX_SWAP3_t;

/* Swap DTI output pair 2 */
typedef enum WEX_SWAP2_enum
{
    WEX_SWAP2_CLEAR_gc = (0x00), /* Swap DTI output pair 2 - CLEAR */
    WEX_SWAP2_SET_gc   = (0x04), /* Swap DTI output pair 2 - SET */
} WEX_SWAP2_t;

/* Swap DTI output pair 1 */
typedef enum WEX_SWAP1_enum
{
    WEX_SWAP1_CLEAR_gc = (0x00), /* Swap DTI output pair 1 - CLEAR */
    WEX_SWAP1_SET_gc   = (0x02), /* Swap DTI output pair 1 - SET */
} WEX_SWAP1_t;

/* Swap DTI output pair 0 */
typedef enum WEX_SWAP0_enum
{
    WEX_SWAP0_CLEAR_gc = (0x00), /* Swap DTI output pair 0 - CLEAR */
    WEX_SWAP0_SET_gc   = (0x01), /* Swap DTI output pair 0 - SET */
} WEX_SWAP0_t;

/* Swap DTI output pair 3  */
typedef enum WEX_SWAP3BUF_enum
{
    WEX_SWAP3BUF_CLEAR_gc = (0x00), /* Swap DTI output pair 3  - CLEAR */
    WEX_SWAP3BUF_SET_gc   = (0x08), /* Swap DTI output pair 3  - SET */
} WEX_SWAP3BUF_t;

/* Swap DTI output pair 2 */
typedef enum WEX_SWAP2BUF_enum
{
    WEX_SWAP2BUF_CLEAR_gc = (0x00), /* Swap DTI output pair 2 - CLEAR */
    WEX_SWAP2BUF_SET_gc   = (0x04), /* Swap DTI output pair 2 - SET */
} WEX_SWAP2BUF_t;

/* Swap DTI output pair 1  */
typedef enum WEX_SWAP1BUF_enum
{
    WEX_SWAP1BUF_CLEAR_gc = (0x00), /* Swap DTI output pair 1  - CLEAR */
    WEX_SWAP1BUF_SET_gc   = (0x02), /* Swap DTI output pair 1  - SET */
} WEX_SWAP1BUF_t;

/* Swap DTI output pair 0 */
typedef enum WEX_SWAP0BUF_enum
{
    WEX_SWAP0BUF_CLEAR_gc = (0x00), /* Swap DTI output pair 0 - CLEAR */
    WEX_SWAP0BUF_SET_gc   = (0x01), /* Swap DTI output pair 0 - SET */
} WEX_SWAP0BUF_t;

/*
--------------------------------------------------------------------------------
HIRES - High-Resolution Extension
--------------------------------------------------------------------------------
*/

typedef struct HIRES_struct
{
    register8_t CTRLA; /* Control Register A */
} HIRES_t;


/* High Resolution Plus */
typedef enum HIRES_HRPLUS_enum
{
    HIRES_HRPLUS_NONE_gc = (0x00<<2), /* No Hi-Res Plus */
    HIRES_HRPLUS_HRP4_gc = (0x01<<2), /* Hi-Res Plus enabled on Timer 4 */
    HIRES_HRPLUS_HRP5_gc = (0x02<<2), /* Hi-Res Plus enabled on Timer 5 */
    HIRES_HRPLUS_BOTH_gc = (0x03<<2), /* Hi-Res Plus enabled on Timer 4 and 5 */
} HIRES_HRPLUS_t;

/* High Resolution Mode */
typedef enum HIRES_HREN_enum
{
    HIRES_HREN_NONE_gc = (0x00), /* No Hi-Res */
    HIRES_HREN_HRP4_gc = (0x01), /* Hi-Res enabled on Timer 4 */
    HIRES_HREN_HRP5_gc = (0x02), /* Hi-Res enabled on Timer 5 */
    HIRES_HREN_BOTH_gc = (0x03), /* Hi-Res enabled on Timer 4 and 5 */
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
    register8_t CTRLA;     /* Control Register A */
    register8_t CTRLB;     /* Control Register B */
    register8_t CTRLC;     /* Control Register C */
    register8_t CTRLD;     /* Control Register D */
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

/* Receive Start Bit Interrupt Flag */
typedef enum USART_RXSIF_enum
{
    USART_RXSIF_CLEAR_gc = (0x00), /* Receive Start Bit Interrupt Flag - CLEAR */
    USART_RXSIF_SET_gc   = (0x02), /* Receive Start Bit Interrupt Flag - SET */
} USART_RXSIF_t;

/* Receive Bit 8 */
typedef enum USART_RXB8_enum
{
    USART_RXB8_CLEAR_gc = (0x00), /* Receive Bit 8 - CLEAR */
    USART_RXB8_SET_gc   = (0x01), /* Receive Bit 8 - SET */
} USART_RXB8_t;

/* Data Reception Flag */
typedef enum USART_DRIF_enum
{
    USART_DRIF_CLEAR_gc = (0x00), /* Data Reception Flag - CLEAR */
    USART_DRIF_SET_gc   = (0x01), /* Data Reception Flag - SET */
} USART_DRIF_t;

/* Receive Start Interrupt Enable */
typedef enum USART_RXSIE_enum
{
    USART_RXSIE_CLEAR_gc = (0x00), /* Receive Start Interrupt Enable - CLEAR */
    USART_RXSIE_SET_gc   = (0x80), /* Receive Start Interrupt Enable - SET */
} USART_RXSIE_t;

/* Data Reception Interrupt Enable */
typedef enum USART_DRIE_enum
{
    USART_DRIE_CLEAR_gc = (0x00), /* Data Reception Interrupt Enable - CLEAR */
    USART_DRIE_SET_gc   = (0x40), /* Data Reception Interrupt Enable - SET */
} USART_DRIE_t;

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

/* One Wire Mode */
typedef enum USART_ONEWIRE_enum
{
    USART_ONEWIRE_CLEAR_gc = (0x00), /* One Wire Mode - CLEAR */
    USART_ONEWIRE_SET_gc   = (0x80), /* One Wire Mode - SET */
} USART_ONEWIRE_t;

/* Start Frame Detection Enable */
typedef enum USART_SFDEN_enum
{
    USART_SFDEN_CLEAR_gc = (0x00), /* Start Frame Detection Enable - CLEAR */
    USART_SFDEN_SET_gc   = (0x40), /* Start Frame Detection Enable - SET */
} USART_SFDEN_t;

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

/* Receive Interrupt Level */
typedef enum USART_DECTYPE_enum
{
    USART_DECTYPE_DATA_gc     = (0x00<<4), /* DATA Field Encoding */
    USART_DECTYPE_SDATA_gc    = (0x02<<4), /* Start and Data Fields Encoding */
    USART_DECTYPE_NOTSDATA_gc = (0x03<<4), /* Start and Data Fields Encoding, with invertion in START field */
} USART_DECTYPE_t;

/* Transmit Interrupt Level */
typedef enum USART_LUTACT_enum
{
    USART_LUTACT_OFF_gc  = (0x00<<2), /* Standard Frame Configuration */
    USART_LUTACT_RX_gc   = (0x01<<2), /* Receiver Decoding Enabled */
    USART_LUTACT_TX_gc   = (0x02<<2), /* Transmitter Encoding Enabled */
    USART_LUTACT_BOTH_gc = (0x03<<2), /* Both Encoding and Decoding Enabled */
} USART_LUTACT_t;

/* Data Register Empty Interrupt Level */
typedef enum USART_PECACT_enum
{
    USART_PECACT_OFF_gc    = (0x00), /* Standard Mode */
    USART_PECACT_PEC0_gc   = (0x01), /* Variable Data Lenght in Reception */
    USART_PECACT_PEC1_gc   = (0x02), /* Variable Data Lenght in Transmission */
    USART_PECACT_PERC01_gc = (0x03), /* Variable Data Lenght in both Reception and Transmission */
} USART_PECACT_t;

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
    register8_t CTRLB;   /* Control Register B */
} SPI_t;


/* Enable Double Speed */
typedef enum SPI_CLK2X_enum
{
    SPI_CLK2X_CLEAR_gc = (0x00), /* Enable Double Speed - CLEAR */
    SPI_CLK2X_SET_gc   = (0x80), /* Enable Double Speed - SET */
} SPI_CLK2X_t;

/* Enable SPI Module */
typedef enum SPI_ENABLE_enum
{
    SPI_ENABLE_CLEAR_gc = (0x00), /* Enable SPI Module - CLEAR */
    SPI_ENABLE_SET_gc   = (0x40), /* Enable SPI Module - SET */
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
    SPI_MODE_0_gc = (0x00<<2), /* SPI Mode 0, base clock at "0", sampling on leading edge (rising) & set-up on trailling edge (falling). */
    SPI_MODE_1_gc = (0x01<<2), /* SPI Mode 1, base clock at "0", set-up on leading edge (rising) & sampling on trailling edge (falling). */
    SPI_MODE_2_gc = (0x02<<2), /* SPI Mode 2, base clock at "1", sampling on leading edge (falling) & set-up on trailling edge (rising). */
    SPI_MODE_3_gc = (0x03<<2), /* SPI Mode 3, base clock at "1", set-up on leading edge (falling) & sampling on trailling edge (rising). */
} SPI_MODE_t;

/* Prescaler */
typedef enum SPI_PRESCALER_enum
{
    SPI_PRESCALER_DIV4_gc   = (0x00), /* If CLK2X=1 CLKper/2, else (CLK2X=0) CLKper/4. */
    SPI_PRESCALER_DIV16_gc  = (0x01), /* If CLK2X=1 CLKper/8, else (CLK2X=0) CLKper/16. */
    SPI_PRESCALER_DIV64_gc  = (0x02), /* If CLK2X=1 CLKper/32, else (CLK2X=0) CLKper/64. */
    SPI_PRESCALER_DIV128_gc = (0x03), /* If CLK2X=1 CLKper/64, else (CLK2X=0) CLKper/128. */
} SPI_PRESCALER_t;

/* Receive Complete Interrupt Enable (In Buffer Modes Only). */
typedef enum SPI_RXCIE_enum
{
    SPI_RXCIE_CLEAR_gc = (0x00), /* Receive Complete Interrupt Enable (In Buffer Modes Only). - CLEAR */
    SPI_RXCIE_SET_gc   = (0x80), /* Receive Complete Interrupt Enable (In Buffer Modes Only). - SET */
} SPI_RXCIE_t;

/* Transmit Complete Interrupt Enable (In Buffer Modes Only). */
typedef enum SPI_TXCIE_enum
{
    SPI_TXCIE_CLEAR_gc = (0x00), /* Transmit Complete Interrupt Enable (In Buffer Modes Only). - CLEAR */
    SPI_TXCIE_SET_gc   = (0x40), /* Transmit Complete Interrupt Enable (In Buffer Modes Only). - SET */
} SPI_TXCIE_t;

/* Data Register Empty Interrupt Enable (In Buffer Modes Only). */
typedef enum SPI_DREIE_enum
{
    SPI_DREIE_CLEAR_gc = (0x00), /* Data Register Empty Interrupt Enable (In Buffer Modes Only). - CLEAR */
    SPI_DREIE_SET_gc   = (0x20), /* Data Register Empty Interrupt Enable (In Buffer Modes Only). - SET */
} SPI_DREIE_t;

/* Slave Select Trigger Interrupt Enable (In Buffer Modes Only). */
typedef enum SPI_SSIE_enum
{
    SPI_SSIE_CLEAR_gc = (0x00), /* Slave Select Trigger Interrupt Enable (In Buffer Modes Only). - CLEAR */
    SPI_SSIE_SET_gc   = (0x10), /* Slave Select Trigger Interrupt Enable (In Buffer Modes Only). - SET */
} SPI_SSIE_t;

/* Interrupt level */
typedef enum SPI_INTLVL_enum
{
    SPI_INTLVL_OFF_gc = (0x00), /* Interrupt Disabled */
    SPI_INTLVL_LO_gc  = (0x01), /* Low Level */
    SPI_INTLVL_MED_gc = (0x02), /* Medium Level */
    SPI_INTLVL_HI_gc  = (0x03), /* High Level */
} SPI_INTLVL_t;

/* Interrupt Flag (In Standard Mode Only). */
typedef enum SPI_IF_enum
{
    SPI_IF_CLEAR_gc = (0x00), /* Interrupt Flag (In Standard Mode Only). - CLEAR */
    SPI_IF_SET_gc   = (0x80), /* Interrupt Flag (In Standard Mode Only). - SET */
} SPI_IF_t;

/* Receive Complete Interrupt Flag (In Buffer Modes Only). */
typedef enum SPI_RXCIF_enum
{
    SPI_RXCIF_CLEAR_gc = (0x00), /* Receive Complete Interrupt Flag (In Buffer Modes Only). - CLEAR */
    SPI_RXCIF_SET_gc   = (0x80), /* Receive Complete Interrupt Flag (In Buffer Modes Only). - SET */
} SPI_RXCIF_t;

/* Write Collision Flag (In Standard Mode Only). */
typedef enum SPI_WRCOL_enum
{
    SPI_WRCOL_CLEAR_gc = (0x00), /* Write Collision Flag (In Standard Mode Only). - CLEAR */
    SPI_WRCOL_SET_gc   = (0x40), /* Write Collision Flag (In Standard Mode Only). - SET */
} SPI_WRCOL_t;

/* Transmit Complete Interrupt Flag (In Buffer Modes Only). */
typedef enum SPI_TXCIF_enum
{
    SPI_TXCIF_CLEAR_gc = (0x00), /* Transmit Complete Interrupt Flag (In Buffer Modes Only). - CLEAR */
    SPI_TXCIF_SET_gc   = (0x40), /* Transmit Complete Interrupt Flag (In Buffer Modes Only). - SET */
} SPI_TXCIF_t;

/* Data Register Empty Interrupt Flag (In Buffer Modes Only). */
typedef enum SPI_DREIF_enum
{
    SPI_DREIF_CLEAR_gc = (0x00), /* Data Register Empty Interrupt Flag (In Buffer Modes Only). - CLEAR */
    SPI_DREIF_SET_gc   = (0x20), /* Data Register Empty Interrupt Flag (In Buffer Modes Only). - SET */
} SPI_DREIF_t;

/* Slave Select Trigger Interrupt Flag (In Buffer Modes Only). */
typedef enum SPI_SSIF_enum
{
    SPI_SSIF_CLEAR_gc = (0x00), /* Slave Select Trigger Interrupt Flag (In Buffer Modes Only). - CLEAR */
    SPI_SSIF_SET_gc   = (0x10), /* Slave Select Trigger Interrupt Flag (In Buffer Modes Only). - SET */
} SPI_SSIF_t;

/* Buffer Overflow (In Buffer Modes Only). */
typedef enum SPI_BUFOVF_enum
{
    SPI_BUFOVF_CLEAR_gc = (0x00), /* Buffer Overflow (In Buffer Modes Only). - CLEAR */
    SPI_BUFOVF_SET_gc   = (0x01), /* Buffer Overflow (In Buffer Modes Only). - SET */
} SPI_BUFOVF_t;

/* Buffer Modes */
typedef enum SPI_BUFMODE_enum
{
    SPI_BUFMODE_OFF_gc      = (0x00<<6), /* SPI Unbuffered Mode */
    SPI_BUFMODE_BUFMODE1_gc = (0x02<<6), /* Buffer Mode 1 (with dummy byte) */
    SPI_BUFMODE_BUFMODE2_gc = (0x03<<6), /* Buffer Mode 2 (no dummy byte) */
} SPI_BUFMODE_t;

/* Slave Select Disable */
typedef enum SPI_SSD_enum
{
    SPI_SSD_CLEAR_gc = (0x00), /* Slave Select Disable - CLEAR */
    SPI_SSD_SET_gc   = (0x04), /* Slave Select Disable - SET */
} SPI_SSD_t;

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
FUSE - Fuses and Lockbits
--------------------------------------------------------------------------------
*/

typedef struct NVM_LOCKBITS_struct
{
    register8_t LOCKBITS; /* Lock Bits */
} NVM_LOCKBITS_t;


/*
--------------------------------------------------------------------------------
FUSE - Fuses and Lockbits
--------------------------------------------------------------------------------
*/

typedef struct NVM_FUSES_struct
{
    register8_t rsv_0x00;  /* RESERVED REGISTER */
    register8_t FUSEBYTE1; /* Watchdog Configuration */
    register8_t FUSEBYTE2; /* Reset Configuration */
    register8_t rsv_0x03;  /* RESERVED REGISTER */
    register8_t FUSEBYTE4; /* Start-up Configuration */
    register8_t FUSEBYTE5; /* EESAVE and BOD Level */
    register8_t FUSEBYTE6; /* Fault State */
} NVM_FUSES_t;


/* Boot Lock Bits - Boot Section */
typedef enum NVM_LOCKBITS_BLBB_enum
{
    NVM_LOCKBITS_BLBB_RWLOCK_gc = (0x00<<6), /* Read and write not allowed */
    NVM_LOCKBITS_BLBB_RLOCK_gc  = (0x01<<6), /* Read not allowed */
    NVM_LOCKBITS_BLBB_WLOCK_gc  = (0x02<<6), /* Write not allowed */
    NVM_LOCKBITS_BLBB_NOLOCK_gc = (0x03<<6), /* No locks */
} NVM_LOCKBITS_BLBB_t;

/* Boot Lock Bits - Application Section */
typedef enum NVM_LOCKBITS_BLBA_enum
{
    NVM_LOCKBITS_BLBA_RWLOCK_gc = (0x00<<4), /* Read and write not allowed */
    NVM_LOCKBITS_BLBA_RLOCK_gc  = (0x01<<4), /* Read not allowed */
    NVM_LOCKBITS_BLBA_WLOCK_gc  = (0x02<<4), /* Write not allowed */
    NVM_LOCKBITS_BLBA_NOLOCK_gc = (0x03<<4), /* No locks */
} NVM_LOCKBITS_BLBA_t;

/* Boot Lock Bits - Application Table */
typedef enum NVM_LOCKBITS_BLBAT_enum
{
    NVM_LOCKBITS_BLBAT_RWLOCK_gc = (0x00<<2), /* Read and write not allowed */
    NVM_LOCKBITS_BLBAT_RLOCK_gc  = (0x01<<2), /* Read not allowed */
    NVM_LOCKBITS_BLBAT_WLOCK_gc  = (0x02<<2), /* Write not allowed */
    NVM_LOCKBITS_BLBAT_NOLOCK_gc = (0x03<<2), /* No locks */
} NVM_LOCKBITS_BLBAT_t;

/* Lock Bits */
typedef enum NVM_LOCKBITS_LB_enum
{
    NVM_LOCKBITS_LB_RWLOCK_gc = (0x00), /* Read and write not allowed */
    NVM_LOCKBITS_LB_WLOCK_gc  = (0x02), /* Write not allowed */
    NVM_LOCKBITS_LB_NOLOCK_gc = (0x03), /* No locks */
} NVM_LOCKBITS_LB_t;

/* Watchdog Window Timeout Period */
typedef enum NVM_FUSES_WDWPER_enum
{
    NVM_FUSES_WDWPER_8CLK_gc   = (0x00<<4), /* 8 cycles (8ms @ 3.3V) */
    NVM_FUSES_WDWPER_16CLK_gc  = (0x01<<4), /* 16 cycles (16ms @ 3.3V) */
    NVM_FUSES_WDWPER_32CLK_gc  = (0x02<<4), /* 32 cycles (32ms @ 3.3V) */
    NVM_FUSES_WDWPER_64CLK_gc  = (0x03<<4), /* 64 cycles (64ms @ 3.3V) */
    NVM_FUSES_WDWPER_128CLK_gc = (0x04<<4), /* 128 cycles (0.125s @ 3.3V) */
    NVM_FUSES_WDWPER_256CLK_gc = (0x05<<4), /* 256 cycles (0.25s @ 3.3V) */
    NVM_FUSES_WDWPER_512CLK_gc = (0x06<<4), /* 512 cycles (0.5s @ 3.3V) */
    NVM_FUSES_WDWPER_1KCLK_gc  = (0x07<<4), /* 1K cycles (1s @ 3.3V) */
    NVM_FUSES_WDWPER_2KCLK_gc  = (0x08<<4), /* 2K cycles (2s @ 3.3V) */
    NVM_FUSES_WDWPER_4KCLK_gc  = (0x09<<4), /* 4K cycles (4s @ 3.3V) */
    NVM_FUSES_WDWPER_8KCLK_gc  = (0x0A<<4), /* 8K cycles (8s @ 3.3V) */
} NVM_FUSES_WDWPER_t;

/* Watchdog Timeout Period */
typedef enum NVM_FUSES_WDPER_enum
{
    NVM_FUSES_WDPER_8CLK_gc   = (0x00), /* 8 cycles (8ms @ 3.3V) */
    NVM_FUSES_WDPER_16CLK_gc  = (0x01), /* 16 cycles (16ms @ 3.3V) */
    NVM_FUSES_WDPER_32CLK_gc  = (0x02), /* 32 cycles (32ms @ 3.3V) */
    NVM_FUSES_WDPER_64CLK_gc  = (0x03), /* 64 cycles (64ms @ 3.3V) */
    NVM_FUSES_WDPER_128CLK_gc = (0x04), /* 128 cycles (0.125s @ 3.3V) */
    NVM_FUSES_WDPER_256CLK_gc = (0x05), /* 256 cycles (0.25s @ 3.3V) */
    NVM_FUSES_WDPER_512CLK_gc = (0x06), /* 512 cycles (0.5s @ 3.3V) */
    NVM_FUSES_WDPER_1KCLK_gc  = (0x07), /* 1K cycles (1s @ 3.3V) */
    NVM_FUSES_WDPER_2KCLK_gc  = (0x08), /* 2K cycles (2s @ 3.3V) */
    NVM_FUSES_WDPER_4KCLK_gc  = (0x09), /* 4K cycles (4s @ 3.3V) */
    NVM_FUSES_WDPER_8KCLK_gc  = (0x0A), /* 8K cycles (8s @ 3.3V) */
} NVM_FUSES_WDPER_t;

/* Boot Loader Section Reset Vector */
typedef enum NVM_FUSES_BOOTRST_enum
{
    NVM_FUSES_BOOTRST_BOOTLDR_gc     = (0x00<<6), /* Boot Loader Reset */
    NVM_FUSES_BOOTRST_APPLICATION_gc = (0x01<<6), /* Application Reset */
} NVM_FUSES_BOOTRST_t;

/* BOD Operation in Power-Down Mode */
typedef enum NVM_FUSES_BODPD_enum
{
    NVM_FUSES_BODPD_SAMPLED_gc    = (0x01), /* BOD enabled in sampled mode */
    NVM_FUSES_BODPD_CONTINUOUS_gc = (0x02), /* BOD enabled continuously */
    NVM_FUSES_BODPD_DISABLED_gc   = (0x03), /* BOD Disabled */
} NVM_FUSES_BODPD_t;

/* External Reset Disable */
typedef enum NVM_FUSES_RSTDISBL_enum
{
    NVM_FUSES_RSTDISBL_CLEAR_gc = (0x00), /* External Reset Disable - CLEAR */
    NVM_FUSES_RSTDISBL_SET_gc   = (0x10), /* External Reset Disable - SET */
} NVM_FUSES_RSTDISBL_t;

/* Start-up Time */
#define NVM_FUSES_FUSEBYTE4_SUT_gc(x) ((x<<2) & 0x0C)

/* Watchdog Timer Lock */
typedef enum NVM_FUSES_WDLOCK_enum
{
    NVM_FUSES_WDLOCK_CLEAR_gc = (0x00), /* Watchdog Timer Lock - CLEAR */
    NVM_FUSES_WDLOCK_SET_gc   = (0x02), /* Watchdog Timer Lock - SET */
} NVM_FUSES_WDLOCK_t;

/* BOD Operation in Active Mode */
typedef enum NVM_FUSES_BODACT_enum
{
    NVM_FUSES_BODACT_SAMPLED_gc    = (0x01<<4), /* BOD enabled in sampled mode */
    NVM_FUSES_BODACT_CONTINUOUS_gc = (0x02<<4), /* BOD enabled continuously */
    NVM_FUSES_BODACT_DISABLED_gc   = (0x03<<4), /* BOD Disabled */
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
    NVM_FUSES_BODLEVEL_1V8_gc = (0x06), /* 1.8 V */
    NVM_FUSES_BODLEVEL_2V0_gc = (0x05), /* 2.0 V */
    NVM_FUSES_BODLEVEL_2V2_gc = (0x04), /* 2.2 V */
    NVM_FUSES_BODLEVEL_2V4_gc = (0x03), /* 2.4 V */
    NVM_FUSES_BODLEVEL_2V6_gc = (0x02), /* 2.6 V */
    NVM_FUSES_BODLEVEL_2V8_gc = (0x01), /* 2.8 V */
    NVM_FUSES_BODLEVEL_3V0_gc = (0x00), /* 3.0 V */
} NVM_FUSES_BODLEVEL_t;

/* Fault Dectection Action on TC5 */
typedef enum NVM_FUSES_FDACT5_enum
{
    NVM_FUSES_FDACT5_CLEAR_gc = (0x00), /* Fault Dectection Action on TC5 - CLEAR */
    NVM_FUSES_FDACT5_SET_gc   = (0x80), /* Fault Dectection Action on TC5 - SET */
} NVM_FUSES_FDACT5_t;

/* Fault Dectection Action on TC4 */
typedef enum NVM_FUSES_FDACT4_enum
{
    NVM_FUSES_FDACT4_CLEAR_gc = (0x00), /* Fault Dectection Action on TC4 - CLEAR */
    NVM_FUSES_FDACT4_SET_gc   = (0x40), /* Fault Dectection Action on TC4 - SET */
} NVM_FUSES_FDACT4_t;

/* Port Pin Value */
#define NVM_FUSES_FUSEBYTE6_VALUE_gc(x) (x & 0x3F)

/*
--------------------------------------------------------------------------------
SIGROW - Signature Row
--------------------------------------------------------------------------------
*/

typedef struct NVM_PROD_SIGNATURES_struct
{
    register8_t RCOSC8M;      /* RCOSC 8MHz Calibration Value */
    register8_t rsv_0x01;     /* RESERVED REGISTER */
    register8_t RCOSC32K;     /* RCOSC 32.768 kHz Calibration Value */
    register8_t RCOSC32M;     /* RCOSC 32 MHz Calibration Value B */
    register8_t RCOSC32MA;    /* RCOSC 32 MHz Calibration Value A */
    register8_t rsv_0x05[3];  /* RESERVED REGISTER BLOCK */
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
    register8_t rsv_0x16[8];  /* RESERVED REGISTER BLOCK */
    register8_t ROOMTEMP;     /* Temperature corresponds to TEMPSENSE3/2 */
    register8_t HOTTEMP;      /* Temperature corresponds to TEMPSENSE1/0 */
    register8_t ADCACAL0;     /* ADCA Calibration Byte 0 */
    register8_t ADCACAL1;     /* ADCA Calibration Byte 1 */
    register8_t rsv_0x22[6];  /* RESERVED REGISTER BLOCK */
    register8_t ACACURRCAL;   /* ACA Current Calibration Byte */
    register8_t rsv_0x29[3];  /* RESERVED REGISTER BLOCK */
    register8_t TEMPSENSE2;   /* Temperature Sensor Calibration Byte 2 */
    register8_t TEMPSENSE3;   /* Temperature Sensor Calibration Byte 3 */
    register8_t TEMPSENSE0;   /* Temperature Sensor Calibration Byte 0 */
    register8_t TEMPSENSE1;   /* Temperature Sensor Calibration Byte 1 */
    register8_t DACA0OFFCAL;  /* DACA0 Calibration Byte 0 */
    register8_t DACA0GAINCAL; /* DACA0 Calibration Byte 1 */
    register8_t rsv_0x32[2];  /* RESERVED REGISTER BLOCK */
    register8_t DACA1OFFCAL;  /* DACA1 Calibration Byte 0 */
    register8_t DACA1GAINCAL; /* DACA1 Calibration Byte 1 */
} NVM_PROD_SIGNATURES_t;

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
#define PR              (*(PR_t *) 0x0070)                  /* Power Reduction */
#define RST             (*(RST_t *) 0x0078)                 /* Reset */
#define WDT             (*(WDT_t *) 0x0080)                 /* Watch-Dog Timer */
#define MCU             (*(MCU_t *) 0x0090)                 /* MCU Control */
#define PMIC            (*(PMIC_t *) 0x00A0)                /* Programmable Multi-level Interrupt Controller */
#define PORTCFG         (*(PORTCFG_t *) 0x00B0)             /* I/O port Configuration */
#define CRC             (*(CRC_t *) 0x00D0)                 /* Cyclic Redundancy Checker */
#define EDMA            (*(EDMA_t *) 0x0100)                /* Enhanced DMA Controller */
#define EVSYS           (*(EVSYS_t *) 0x0180)               /* Event System */
#define NVM             (*(NVM_t *) 0x01C0)                 /* Non-volatile Memory Controller */
#define ADCA            (*(ADC_t *) 0x0200)                 /* Analog-to-Digital Converter */
#define DACA            (*(DAC_t *) 0x0300)                 /* Digital-to-Analog Converter */
#define ACA             (*(AC_t *) 0x0380)                  /* Analog Comparator */
#define RTC             (*(RTC_t *) 0x0400)                 /* Real-Time Counter */
#define XCL             (*(XCL_t *) 0x0460)                 /* XMEGA Custom Logic */
#define TWIC            (*(TWI_t *) 0x0480)                 /* Two-Wire Interface */
#define PORTA           (*(PORT_t *) 0x0600)                /* I/O Ports */
#define PORTC           (*(PORT_t *) 0x0640)                /* I/O Ports */
#define PORTD           (*(PORT_t *) 0x0660)                /* I/O Ports */
#define PORTR           (*(PORT_t *) 0x07E0)                /* I/O Ports */
#define TCC4            (*(TC4_t *) 0x0800)                 /* 16-bit Timer/Counter 4 */
#define TCC5            (*(TC5_t *) 0x0840)                 /* 16-bit Timer/Counter 5 */
#define FAULTC4         (*(FAULT_t *) 0x0880)               /* Fault Extension */
#define FAULTC5         (*(FAULT_t *) 0x0890)               /* Fault Extension */
#define WEXC            (*(WEX_t *) 0x08A0)                 /* Waveform Extension */
#define HIRESC          (*(HIRES_t *) 0x08B0)               /* High-Resolution Extension */
#define USARTC0         (*(USART_t *) 0x08C0)               /* Universal Synchronous/Asynchronous Receiver/Transmitter */
#define SPIC            (*(SPI_t *) 0x08E0)                 /* Serial Peripheral Interface with Buffer Modes */
#define IRCOM           (*(IRCOM_t *) 0x08F8)               /* IR Communication Module */
#define TCD5            (*(TC5_t *) 0x0940)                 /* 16-bit Timer/Counter 5 */
#define USARTD0         (*(USART_t *) 0x09C0)               /* Universal Synchronous/Asynchronous Receiver/Transmitter */
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
VPORT - Virtual Ports
--------------------------------------------------------------------------------
*/


/* Interrupt Pin 7 Flag */
#define VPORT_INT7IF_CLEAR_gc (0x00) /* Interrupt Pin 7 Flag - CLEAR */
#define VPORT_INT7IF_SET_gc   (0x80) /* Interrupt Pin 7 Flag - SET */


/* Interrupt Pin 6 Flag */
#define VPORT_INT6IF_CLEAR_gc (0x00) /* Interrupt Pin 6 Flag - CLEAR */
#define VPORT_INT6IF_SET_gc   (0x40) /* Interrupt Pin 6 Flag - SET */


/* Interrupt Pin 5 Flag */
#define VPORT_INT5IF_CLEAR_gc (0x00) /* Interrupt Pin 5 Flag - CLEAR */
#define VPORT_INT5IF_SET_gc   (0x20) /* Interrupt Pin 5 Flag - SET */


/* Interrupt Pin 4 Flag */
#define VPORT_INT4IF_CLEAR_gc (0x00) /* Interrupt Pin 4 Flag - CLEAR */
#define VPORT_INT4IF_SET_gc   (0x10) /* Interrupt Pin 4 Flag - SET */


/* Interrupt Pin 3 Flag */
#define VPORT_INT3IF_CLEAR_gc (0x00) /* Interrupt Pin 3 Flag - CLEAR */
#define VPORT_INT3IF_SET_gc   (0x08) /* Interrupt Pin 3 Flag - SET */


/* Interrupt Pin 2 Flag */
#define VPORT_INT2IF_CLEAR_gc (0x00) /* Interrupt Pin 2 Flag - CLEAR */
#define VPORT_INT2IF_SET_gc   (0x04) /* Interrupt Pin 2 Flag - SET */


/* Interrupt Pin 1 Flag */
#define VPORT_INT1IF_CLEAR_gc (0x00) /* Interrupt Pin 1 Flag - CLEAR */
#define VPORT_INT1IF_SET_gc   (0x02) /* Interrupt Pin 1 Flag - SET */


/* Interrupt Pin 0 Flag */
#define VPORT_INT0IF_CLEAR_gc (0x00) /* Interrupt Pin 0 Flag - CLEAR */
#define VPORT_INT0IF_SET_gc   (0x01) /* Interrupt Pin 0 Flag - SET */


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


/* System Clock Selection */
#define CLK_SCLKSEL_RC2M_gc  (0x00) /* Internal 2 MHz RC Oscillator */
#define CLK_SCLKSEL_RC32M_gc (0x01) /* Internal 32 MHz RC Oscillator */
#define CLK_SCLKSEL_RC32K_gc (0x02) /* Internal 32.768 kHz RC Oscillator */
#define CLK_SCLKSEL_XOSC_gc  (0x03) /* External Crystal Oscillator or Clock */
#define CLK_SCLKSEL_PLL_gc   (0x04) /* Phase Locked Loop */
#define CLK_SCLKSEL_RC8M_gc  (0x05) /* Internal 8 MHz RC Oscillator */


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
#define CLK_PSADIV_6_gc   (0x13<<2) /* Divide by 6 */
#define CLK_PSADIV_10_gc  (0x15<<2) /* Divide by 10 */
#define CLK_PSADIV_12_gc  (0x17<<2) /* Divide by 12 */
#define CLK_PSADIV_24_gc  (0x19<<2) /* Divide by 24 */
#define CLK_PSADIV_48_gc  (0x1B<<2) /* Divide by 48 */


/* Prescaler B and C Division factor */
#define CLK_PSBCDIV_1_1_gc (0x00) /* Divide B by 1 and C by 1 */
#define CLK_PSBCDIV_1_2_gc (0x01) /* Divide B by 1 and C by 2 */
#define CLK_PSBCDIV_4_1_gc (0x02) /* Divide B by 4 and C by 1 */
#define CLK_PSBCDIV_2_2_gc (0x03) /* Divide B by 2 and C by 2 */


/* Clock System Lock */
#define CLK_LOCK_CLEAR_gc (0x00) /* Clock System Lock - CLEAR */
#define CLK_LOCK_SET_gc   (0x01) /* Clock System Lock - SET */


/* Clock Source */
#define CLK_RTCSRC_ULP_gc     (0x00<<1) /* 1.024 kHz from internal 32kHz ULP */
#define CLK_RTCSRC_TOSC_gc    (0x01<<1) /* 1.024 kHz from 32.768 kHz crystal oscillator on TOSC */
#define CLK_RTCSRC_RCOSC_gc   (0x02<<1) /* 1.024 kHz from internal 32.768 kHz RC oscillator */
#define CLK_RTCSRC_TOSC32_gc  (0x05<<1) /* 32.768 kHz from 32.768 kHz crystal oscillator on TOSC */
#define CLK_RTCSRC_RCOSC32_gc (0x06<<1) /* 32.768 kHz from internal 32.768 kHz RC oscillator */
#define CLK_RTCSRC_EXTCLK_gc  (0x07<<1) /* External Clock from TOSC1 */


/* Clock Source Enable */
#define CLK_RTCEN_CLEAR_gc (0x00) /* Clock Source Enable - CLEAR */
#define CLK_RTCEN_SET_gc   (0x01) /* Clock Source Enable - SET */


/*
--------------------------------------------------------------------------------
PR - Power Reduction
--------------------------------------------------------------------------------
*/


/* XMEGA Custom Logic */
#define PR_XCL_CLEAR_gc (0x00) /* XMEGA Custom Logic - CLEAR */
#define PR_XCL_SET_gc   (0x80) /* XMEGA Custom Logic - SET */


/* Real-time Counter */
#define PR_RTC_CLEAR_gc (0x00) /* Real-time Counter - CLEAR */
#define PR_RTC_SET_gc   (0x04) /* Real-time Counter - SET */


/* Event System */
#define PR_EVSYS_CLEAR_gc (0x00) /* Event System - CLEAR */
#define PR_EVSYS_SET_gc   (0x02) /* Event System - SET */


/* Enhanced DMA-Controller */
#define PR_EDMA_CLEAR_gc (0x00) /* Enhanced DMA-Controller - CLEAR */
#define PR_EDMA_SET_gc   (0x01) /* Enhanced DMA-Controller - SET */


/* Port A DAC */
#define PR_DAC_CLEAR_gc (0x00) /* Port A DAC - CLEAR */
#define PR_DAC_SET_gc   (0x04) /* Port A DAC - SET */


/* Port A ADC */
#define PR_ADC_CLEAR_gc (0x00) /* Port A ADC - CLEAR */
#define PR_ADC_SET_gc   (0x02) /* Port A ADC - SET */


/* Port A Analog Comparator */
#define PR_AC_CLEAR_gc (0x00) /* Port A Analog Comparator - CLEAR */
#define PR_AC_SET_gc   (0x01) /* Port A Analog Comparator - SET */


/* Port C Two-wire Interface */
#define PR_TWI_CLEAR_gc (0x00) /* Port C Two-wire Interface - CLEAR */
#define PR_TWI_SET_gc   (0x40) /* Port C Two-wire Interface - SET */


/* Port C USART0 */
#define PR_USART0_CLEAR_gc (0x00) /* Port C USART0 - CLEAR */
#define PR_USART0_SET_gc   (0x10) /* Port C USART0 - SET */


/* Port C SPI */
#define PR_SPI_CLEAR_gc (0x00) /* Port C SPI - CLEAR */
#define PR_SPI_SET_gc   (0x08) /* Port C SPI - SET */


/* Port C WEX */
#define PR_HIRES_CLEAR_gc (0x00) /* Port C WEX - CLEAR */
#define PR_HIRES_SET_gc   (0x04) /* Port C WEX - SET */


/* Port C Timer/Counter5 */
#define PR_TC5_CLEAR_gc (0x00) /* Port C Timer/Counter5 - CLEAR */
#define PR_TC5_SET_gc   (0x02) /* Port C Timer/Counter5 - SET */


/* Port C Timer/Counter4 */
#define PR_TC4_CLEAR_gc (0x00) /* Port C Timer/Counter4 - CLEAR */
#define PR_TC4_SET_gc   (0x01) /* Port C Timer/Counter4 - SET */


/* Port D USART0 */
/* PR_USART0_CLEAR_gc ALREADY DEFINED */
/* PR_USART0_SET_gc ALREADY DEFINED */


/* Port D Timer/Counter5 */
/* PR_TC5_CLEAR_gc ALREADY DEFINED */
/* PR_TC5_SET_gc ALREADY DEFINED */


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


/* Internal 8 MHz RC Low Power Mode Enable */
#define OSC_RC8MLPM_CLEAR_gc (0x00) /* Internal 8 MHz RC Low Power Mode Enable - CLEAR */
#define OSC_RC8MLPM_SET_gc   (0x40) /* Internal 8 MHz RC Low Power Mode Enable - SET */


/* Internal 8 MHz RC Oscillator Enable */
#define OSC_RC8MEN_CLEAR_gc (0x00) /* Internal 8 MHz RC Oscillator Enable - CLEAR */
#define OSC_RC8MEN_SET_gc   (0x20) /* Internal 8 MHz RC Oscillator Enable - SET */


/* PLL Enable */
#define OSC_PLLEN_CLEAR_gc (0x00) /* PLL Enable - CLEAR */
#define OSC_PLLEN_SET_gc   (0x10) /* PLL Enable - SET */


/* External Oscillator Enable */
#define OSC_XOSCEN_CLEAR_gc (0x00) /* External Oscillator Enable - CLEAR */
#define OSC_XOSCEN_SET_gc   (0x08) /* External Oscillator Enable - SET */


/* Internal 32.768 kHz RC Oscillator Enable */
#define OSC_RC32KEN_CLEAR_gc (0x00) /* Internal 32.768 kHz RC Oscillator Enable - CLEAR */
#define OSC_RC32KEN_SET_gc   (0x04) /* Internal 32.768 kHz RC Oscillator Enable - SET */


/* Internal 32 MHz RC Oscillator Enable */
#define OSC_RC32MEN_CLEAR_gc (0x00) /* Internal 32 MHz RC Oscillator Enable - CLEAR */
#define OSC_RC32MEN_SET_gc   (0x02) /* Internal 32 MHz RC Oscillator Enable - SET */


/* Internal 2 MHz RC Oscillator Enable */
#define OSC_RC2MEN_CLEAR_gc (0x00) /* Internal 2 MHz RC Oscillator Enable - CLEAR */
#define OSC_RC2MEN_SET_gc   (0x01) /* Internal 2 MHz RC Oscillator Enable - SET */


/* Internal 8 MHz RC Oscillator Ready */
#define OSC_RC8MRDY_CLEAR_gc (0x00) /* Internal 8 MHz RC Oscillator Ready - CLEAR */
#define OSC_RC8MRDY_SET_gc   (0x20) /* Internal 8 MHz RC Oscillator Ready - SET */


/* PLL Ready */
#define OSC_PLLRDY_CLEAR_gc (0x00) /* PLL Ready - CLEAR */
#define OSC_PLLRDY_SET_gc   (0x10) /* PLL Ready - SET */


/* External Oscillator Ready */
#define OSC_XOSCRDY_CLEAR_gc (0x00) /* External Oscillator Ready - CLEAR */
#define OSC_XOSCRDY_SET_gc   (0x08) /* External Oscillator Ready - SET */


/* Internal 32.768 kHz RC Oscillator Ready */
#define OSC_RC32KRDY_CLEAR_gc (0x00) /* Internal 32.768 kHz RC Oscillator Ready - CLEAR */
#define OSC_RC32KRDY_SET_gc   (0x04) /* Internal 32.768 kHz RC Oscillator Ready - SET */


/* Internal 32 MHz RC Oscillator Ready */
#define OSC_RC32MRDY_CLEAR_gc (0x00) /* Internal 32 MHz RC Oscillator Ready - CLEAR */
#define OSC_RC32MRDY_SET_gc   (0x02) /* Internal 32 MHz RC Oscillator Ready - SET */


/* Internal 2 MHz RC Oscillator Ready */
#define OSC_RC2MRDY_CLEAR_gc (0x00) /* Internal 2 MHz RC Oscillator Ready - CLEAR */
#define OSC_RC2MRDY_SET_gc   (0x01) /* Internal 2 MHz RC Oscillator Ready - SET */


/* Frequency Range */
#define OSC_FRQRANGE_04TO2_gc  (0x00<<6) /* 0.4 - 2 MHz */
#define OSC_FRQRANGE_2TO9_gc   (0x01<<6) /* 2 - 9 MHz */
#define OSC_FRQRANGE_9TO12_gc  (0x02<<6) /* 9 - 12 MHz */
#define OSC_FRQRANGE_12TO16_gc (0x03<<6) /* 12 - 16 MHz */


/* 32.768 kHz XTAL OSC Low-power Mode */
#define OSC_X32KLPM_CLEAR_gc (0x00) /* 32.768 kHz XTAL OSC Low-power Mode - CLEAR */
#define OSC_X32KLPM_SET_gc   (0x20) /* 32.768 kHz XTAL OSC Low-power Mode - SET */


/* 16 MHz Crystal Oscillator High Power mode */
#define OSC_XOSCPWR_CLEAR_gc (0x00) /* 16 MHz Crystal Oscillator High Power mode - CLEAR */
#define OSC_XOSCPWR_SET_gc   (0x10) /* 16 MHz Crystal Oscillator High Power mode - SET */


/* External Oscillator Selection and Startup Time */
#define OSC_XOSCSEL_EXTCLK_gc      (0x00) /* External Clock on port R1 - 6 CLK */
#define OSC_XOSCSEL_32KHz_gc       (0x02) /* 32.768 kHz TOSC - 32K CLK */
#define OSC_XOSCSEL_XTAL_256CLK_gc (0x03) /* 0.4-16 MHz XTAL - 256 CLK */
#define OSC_XOSCSEL_XTAL_1KCLK_gc  (0x07) /* 0.4-16 MHz XTAL - 1K CLK */
#define OSC_XOSCSEL_XTAL_16KCLK_gc (0x0B) /* 0.4-16 MHz XTAL - 16K CLK */
#define OSC_XOSCSEL_EXTCLK_C4_gc   (0x14) /* External Clock on port C4 - 6 CLK */


/* PLL Failure Detection Interrupt Flag */
#define OSC_PLLFDIF_CLEAR_gc (0x00) /* PLL Failure Detection Interrupt Flag - CLEAR */
#define OSC_PLLFDIF_SET_gc   (0x08) /* PLL Failure Detection Interrupt Flag - SET */


/* PLL Failure Detection Enable */
#define OSC_PLLFDEN_CLEAR_gc (0x00) /* PLL Failure Detection Enable - CLEAR */
#define OSC_PLLFDEN_SET_gc   (0x04) /* PLL Failure Detection Enable - SET */


/* XOSC Failure Detection Interrupt Flag */
#define OSC_XOSCFDIF_CLEAR_gc (0x00) /* XOSC Failure Detection Interrupt Flag - CLEAR */
#define OSC_XOSCFDIF_SET_gc   (0x02) /* XOSC Failure Detection Interrupt Flag - SET */


/* XOSC Failure Detection Enable */
#define OSC_XOSCFDEN_CLEAR_gc (0x00) /* XOSC Failure Detection Enable - CLEAR */
#define OSC_XOSCFDEN_SET_gc   (0x01) /* XOSC Failure Detection Enable - SET */


/* Clock Source */
#define OSC_PLLSRC_RC2M_gc  (0x00<<6) /* Internal 2 MHz RC Oscillator */
#define OSC_PLLSRC_RC8M_gc  (0x01<<6) /* Internal 8 MHz RC Oscillator */
#define OSC_PLLSRC_RC32M_gc (0x02<<6) /* Internal 32 MHz RC Oscillator */
#define OSC_PLLSRC_XOSC_gc  (0x03<<6) /* External Oscillator */


/* Divide by 2 */
#define OSC_PLLDIV_CLEAR_gc (0x00) /* Divide by 2 - CLEAR */
#define OSC_PLLDIV_SET_gc   (0x20) /* Divide by 2 - SET */


/* Multiplication Factor */
#define OSC_PLLCTRL_PLLFAC_gc(x) (x & 0x1F)

/* 32 MHz DFLL Calibration Reference */
#define OSC_RC32MCREF_RC32K_gc   (0x00<<1) /* Internal 32.768 kHz RC Oscillator */
#define OSC_RC32MCREF_XOSC32K_gc (0x01<<1) /* External 32.768 kHz Crystal Oscillator */


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


/* Event Channel 4-7 Lock */
#define MCU_EVSYS1LOCK_CLEAR_gc (0x00) /* Event Channel 4-7 Lock - CLEAR */
#define MCU_EVSYS1LOCK_SET_gc   (0x10) /* Event Channel 4-7 Lock - SET */


/* Event Channel 0-3 Lock */
#define MCU_EVSYS0LOCK_CLEAR_gc (0x00) /* Event Channel 0-3 Lock - CLEAR */
#define MCU_EVSYS0LOCK_SET_gc   (0x01) /* Event Channel 0-3 Lock - SET */


/* WeX on T/C C4 Lock */
#define MCU_WEXCLOCK_CLEAR_gc (0x00) /* WeX on T/C C4 Lock - CLEAR */
#define MCU_WEXCLOCK_SET_gc   (0x01) /* WeX on T/C C4 Lock - SET */


/* Fault on T/C C5 Lock */
#define MCU_FAULTC5LOCK_CLEAR_gc (0x00) /* Fault on T/C C5 Lock - CLEAR */
#define MCU_FAULTC5LOCK_SET_gc   (0x02) /* Fault on T/C C5 Lock - SET */


/* Fault on T/C C4 Lock */
#define MCU_FAULTC4LOCK_CLEAR_gc (0x00) /* Fault on T/C C4 Lock - CLEAR */
#define MCU_FAULTC4LOCK_SET_gc   (0x01) /* Fault on T/C C4 Lock - SET */


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
PORTCFG - Port Configuration
--------------------------------------------------------------------------------
*/


/* Clock and Event Output Pin Select */
#define PORTCFG_CLKEVPIN_PIN7_gc (0x00<<7) /* Clock and Event Output on PIN 7 */
#define PORTCFG_CLKEVPIN_PIN4_gc (0x01<<7) /* Clock and Event Output on PIN 4 */


/* RTC Clock Output Enable */
#define PORTCFG_RTCOUT_OFF_gc (0x00<<5) /* System Clock Output Disabled */
#define PORTCFG_RTCOUT_PC6_gc (0x01<<5) /* System Clock Output on Port C pin 6 */
#define PORTCFG_RTCOUT_PD6_gc (0x02<<5) /* System Clock Output on Port D pin 6 */
#define PORTCFG_RTCOUT_PR0_gc (0x03<<5) /* System Clock Output on Port R pin 0 */


/* Clock Output Select */
#define PORTCFG_CLKOUTSEL_CLK1X_gc (0x00<<2) /* 1x Peripheral Clock Output to pin */
#define PORTCFG_CLKOUTSEL_CLK2X_gc (0x01<<2) /* 2x Peripheral Clock Output to pin */
#define PORTCFG_CLKOUTSEL_CLK4X_gc (0x02<<2) /* 4x Peripheral Clock Output to pin */


/* Clock Output Port */
#define PORTCFG_CLKOUT_OFF_gc (0x00) /* System Clock Output Disabled */
#define PORTCFG_CLKOUT_PC7_gc (0x01) /* System Clock Output on Port C pin 7 */
#define PORTCFG_CLKOUT_PD7_gc (0x02) /* System Clock Output on Port D pin 7 */
#define PORTCFG_CLKOUT_PR0_gc (0x03) /* System Clock Output on Port R pin 0 */


/* Analog Comparator Output Port */
#define PORTCFG_ACOUT_PA_gc (0x00<<6) /* Analog Comparator Outputs on Port A, Pin 6-7 */
#define PORTCFG_ACOUT_PC_gc (0x01<<6) /* Analog Comparator Outputs on Port C, Pin 6-7 */
#define PORTCFG_ACOUT_PD_gc (0x02<<6) /* Analog Comparator Outputs on Port D, Pin 6-7 */
#define PORTCFG_ACOUT_PR_gc (0x03<<6) /* Analog Comparator Outputs on Port R, Pin 0-1 */


/* Event Channel Output Port */
#define PORTCFG_EVOUT_OFF_gc (0x00<<4) /* Event Output Disabled */
#define PORTCFG_EVOUT_PC7_gc (0x01<<4) /* Event Channel n Output on Port C pin 7 */
#define PORTCFG_EVOUT_PD7_gc (0x02<<4) /* Event Channel n Output on Port D pin 7 */
#define PORTCFG_EVOUT_PR0_gc (0x03<<4) /* Event Channel n Output on Port R pin 0 */


/* Asynchronous Event Enabled */
#define PORTCFG_EVASYEN_CLEAR_gc (0x00) /* Asynchronous Event Enabled - CLEAR */
#define PORTCFG_EVASYEN_SET_gc   (0x08) /* Asynchronous Event Enabled - SET */


/* Event Channel Output Selection */
#define PORTCFG_EVOUTSEL_0_gc (0x00) /* Event Channel 0 output to pin */
#define PORTCFG_EVOUTSEL_1_gc (0x01) /* Event Channel 1 output to pin */
#define PORTCFG_EVOUTSEL_2_gc (0x02) /* Event Channel 2 output to pin */
#define PORTCFG_EVOUTSEL_3_gc (0x03) /* Event Channel 3 output to pin */
#define PORTCFG_EVOUTSEL_4_gc (0x04) /* Event Channel 4 output to pin */
#define PORTCFG_EVOUTSEL_5_gc (0x05) /* Event Channel 5 output to pin */
#define PORTCFG_EVOUTSEL_6_gc (0x06) /* Event Channel 6 output to pin */
#define PORTCFG_EVOUTSEL_7_gc (0x07) /* Event Channel 7 output to pin */


/* Slew Rate Limit Enable on PORTA */
#define PORTCFG_SRLENRA_CLEAR_gc (0x00) /* Slew Rate Limit Enable on PORTA - CLEAR */
#define PORTCFG_SRLENRA_SET_gc   (0x01) /* Slew Rate Limit Enable on PORTA - SET */


/* Slew Rate Limit Enable on PORTC */
#define PORTCFG_SRLENRC_CLEAR_gc (0x00) /* Slew Rate Limit Enable on PORTC - CLEAR */
#define PORTCFG_SRLENRC_SET_gc   (0x04) /* Slew Rate Limit Enable on PORTC - SET */


/* Slew Rate Limit Enable on PORTD */
#define PORTCFG_SRLENRD_CLEAR_gc (0x00) /* Slew Rate Limit Enable on PORTD - CLEAR */
#define PORTCFG_SRLENRD_SET_gc   (0x08) /* Slew Rate Limit Enable on PORTD - SET */


/* Slew Rate Limit Enable on PORTR */
#define PORTCFG_SRLENRR_CLEAR_gc (0x00) /* Slew Rate Limit Enable on PORTR - CLEAR */
#define PORTCFG_SRLENRR_SET_gc   (0x80) /* Slew Rate Limit Enable on PORTR - SET */


/*
--------------------------------------------------------------------------------
CRC - Cyclic Redundancy Checker
--------------------------------------------------------------------------------
*/


/* Reset */
#define CRC_RESET_NO_gc     (0x00<<6) /* No Reset */
#define CRC_RESET_RESET0_gc (0x02<<6) /* Reset CRC with CHECKSUM to all zeros */
#define CRC_RESET_RESET1_gc (0x03<<6) /* Reset CRC with CHECKSUM to all ones */


/* CRC Mode */
#define CRC_CRC32_CLEAR_gc (0x00) /* CRC Mode - CLEAR */
#define CRC_CRC32_SET_gc   (0x20) /* CRC Mode - SET */


/* Input Source */
#define CRC_SOURCE_DISABLE_gc (0x00) /* Disabled */
#define CRC_SOURCE_IO_gc      (0x01) /* I/O Interface */
#define CRC_SOURCE_FLASH_gc   (0x02) /* Flash */
#define CRC_SOURCE_DMAC0_gc   (0x04) /* DMAC Channel 0 */
#define CRC_SOURCE_DMAC1_gc   (0x05) /* DMAC Channel 1 */
#define CRC_SOURCE_DMAC2_gc   (0x06) /* DMAC Channel 2 */
#define CRC_SOURCE_DMAC3_gc   (0x07) /* DMAC Channel 3 */


/* Zero detection */
#define CRC_ZERO_CLEAR_gc (0x00) /* Zero detection - CLEAR */
#define CRC_ZERO_SET_gc   (0x02) /* Zero detection - SET */


/* Busy */
#define CRC_BUSY_CLEAR_gc (0x00) /* Busy - CLEAR */
#define CRC_BUSY_SET_gc   (0x01) /* Busy - SET */


/*
--------------------------------------------------------------------------------
EDMA - Enhanced DMA Controller
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
EDMA - Enhanced DMA Controller
--------------------------------------------------------------------------------
*/


/* Enable */
#define EDMA_ENABLE_CLEAR_gc (0x00) /* Enable - CLEAR */
#define EDMA_ENABLE_SET_gc   (0x80) /* Enable - SET */


/* Software Reset */
#define EDMA_RESET_CLEAR_gc (0x00) /* Software Reset - CLEAR */
#define EDMA_RESET_SET_gc   (0x40) /* Software Reset - SET */


/* Channel Mode */
#define EDMA_CHMODE_PER0123_gc (0x00<<4) /* Channels 0, 1, 2 and 3 in peripheal conf. */
#define EDMA_CHMODE_STD0_gc    (0x01<<4) /* Channel 0 in standard conf.; channels 2 and 3 in peripheral conf. */
#define EDMA_CHMODE_STD2_gc    (0x02<<4) /* Channel 2 in standard conf.; channels 0 and 1 in peripheral conf. */
#define EDMA_CHMODE_STD02_gc   (0x03<<4) /* Channels 0 and 2 in standard conf. */


/* Double Buffer Mode */
#define EDMA_DBUFMODE_DISABLE_gc (0x00<<2) /* No double buffer enabled */
#define EDMA_DBUFMODE_BUF01_gc   (0x01<<2) /* Double buffer enabled on peripheral channels 0/1 (if exist)  */
#define EDMA_DBUFMODE_BUF23_gc   (0x02<<2) /* Double buffer enabled on peripheral channels 2/3 (if exist) */
#define EDMA_DBUFMODE_BUF0123_gc (0x03<<2) /* Double buffer enabled on peripheral channels 0/1 and 2/3 or standard channels 0/2 */


/* Priority Mode */
#define EDMA_PRIMODE_RR0123_gc (0x00) /* Round robin on all channels */
#define EDMA_PRIMODE_RR123_gc  (0x01) /* Ch0 > round robin (Ch 1 ch2 Ch3) */
#define EDMA_PRIMODE_RR23_gc   (0x02) /* Ch0 > Ch 1 > round robin (Ch2 Ch3) */
#define EDMA_PRIMODE_CH0123_gc (0x03) /* Ch0 > Ch1 > Ch2 > Ch3  */


/* Channel 3 Transaction Error Interrupt Flag */
#define EDMA_CH3ERRIF_CLEAR_gc (0x00) /* Channel 3 Transaction Error Interrupt Flag - CLEAR */
#define EDMA_CH3ERRIF_SET_gc   (0x80) /* Channel 3 Transaction Error Interrupt Flag - SET */


/* Channel 2 Transaction Error Interrupt Flag */
#define EDMA_CH2ERRIF_CLEAR_gc (0x00) /* Channel 2 Transaction Error Interrupt Flag - CLEAR */
#define EDMA_CH2ERRIF_SET_gc   (0x40) /* Channel 2 Transaction Error Interrupt Flag - SET */


/* Channel 1 Transaction Error Interrupt Flag */
#define EDMA_CH1ERRIF_CLEAR_gc (0x00) /* Channel 1 Transaction Error Interrupt Flag - CLEAR */
#define EDMA_CH1ERRIF_SET_gc   (0x20) /* Channel 1 Transaction Error Interrupt Flag - SET */


/* Channel 0 Transaction Error Interrupt Flag */
#define EDMA_CH0ERRIF_CLEAR_gc (0x00) /* Channel 0 Transaction Error Interrupt Flag - CLEAR */
#define EDMA_CH0ERRIF_SET_gc   (0x10) /* Channel 0 Transaction Error Interrupt Flag - SET */


/* Channel 3 Transaction Complete Interrupt Flag */
#define EDMA_CH3TRNFIF_CLEAR_gc (0x00) /* Channel 3 Transaction Complete Interrupt Flag - CLEAR */
#define EDMA_CH3TRNFIF_SET_gc   (0x08) /* Channel 3 Transaction Complete Interrupt Flag - SET */


/* Channel 2 Transaction Complete Interrupt Flag */
#define EDMA_CH2TRNFIF_CLEAR_gc (0x00) /* Channel 2 Transaction Complete Interrupt Flag - CLEAR */
#define EDMA_CH2TRNFIF_SET_gc   (0x04) /* Channel 2 Transaction Complete Interrupt Flag - SET */


/* Channel 1 Transaction Complete Interrupt Flag */
#define EDMA_CH1TRNFIF_CLEAR_gc (0x00) /* Channel 1 Transaction Complete Interrupt Flag - CLEAR */
#define EDMA_CH1TRNFIF_SET_gc   (0x02) /* Channel 1 Transaction Complete Interrupt Flag - SET */


/* Channel 0 Transaction Complete Interrupt Flag */
#define EDMA_CH0TRNFIF_CLEAR_gc (0x00) /* Channel 0 Transaction Complete Interrupt Flag - CLEAR */
#define EDMA_CH0TRNFIF_SET_gc   (0x01) /* Channel 0 Transaction Complete Interrupt Flag - SET */


/* Channel 3 Busy Flag */
#define EDMA_CH3BUSY_CLEAR_gc (0x00) /* Channel 3 Busy Flag - CLEAR */
#define EDMA_CH3BUSY_SET_gc   (0x80) /* Channel 3 Busy Flag - SET */


/* Channel 2 Busy Flag */
#define EDMA_CH2BUSY_CLEAR_gc (0x00) /* Channel 2 Busy Flag - CLEAR */
#define EDMA_CH2BUSY_SET_gc   (0x40) /* Channel 2 Busy Flag - SET */


/* Channel 1 Busy Flag */
#define EDMA_CH1BUSY_CLEAR_gc (0x00) /* Channel 1 Busy Flag - CLEAR */
#define EDMA_CH1BUSY_SET_gc   (0x20) /* Channel 1 Busy Flag - SET */


/* Channel 0 Busy Flag */
#define EDMA_CH0BUSY_CLEAR_gc (0x00) /* Channel 0 Busy Flag - CLEAR */
#define EDMA_CH0BUSY_SET_gc   (0x10) /* Channel 0 Busy Flag - SET */


/* Channel 3 Pending Flag */
#define EDMA_CH3PEND_CLEAR_gc (0x00) /* Channel 3 Pending Flag - CLEAR */
#define EDMA_CH3PEND_SET_gc   (0x08) /* Channel 3 Pending Flag - SET */


/* Channel 2 Pending Flag */
#define EDMA_CH2PEND_CLEAR_gc (0x00) /* Channel 2 Pending Flag - CLEAR */
#define EDMA_CH2PEND_SET_gc   (0x04) /* Channel 2 Pending Flag - SET */


/* Channel 1 Pending Flag */
#define EDMA_CH1PEND_CLEAR_gc (0x00) /* Channel 1 Pending Flag - CLEAR */
#define EDMA_CH1PEND_SET_gc   (0x02) /* Channel 1 Pending Flag - SET */


/* Channel 0 Pending Flag */
#define EDMA_CH0PEND_CLEAR_gc (0x00) /* Channel 0 Pending Flag - CLEAR */
#define EDMA_CH0PEND_SET_gc   (0x01) /* Channel 0 Pending Flag - SET */


/* Channel Enable */
#define EDMA_CH_ENABLE_CLEAR_gc (0x00) /* Channel Enable - CLEAR */
#define EDMA_CH_ENABLE_SET_gc   (0x80) /* Channel Enable - SET */


/* Channel Software Reset */
#define EDMA_CH_RESET_CLEAR_gc (0x00) /* Channel Software Reset - CLEAR */
#define EDMA_CH_RESET_SET_gc   (0x40) /* Channel Software Reset - SET */


/* Channel Repeat Mode */
#define EDMA_CH_REPEAT_CLEAR_gc (0x00) /* Channel Repeat Mode - CLEAR */
#define EDMA_CH_REPEAT_SET_gc   (0x20) /* Channel Repeat Mode - SET */


/* Channel Transfer Request */
#define EDMA_CH_TRFREQ_CLEAR_gc (0x00) /* Channel Transfer Request - CLEAR */
#define EDMA_CH_TRFREQ_SET_gc   (0x10) /* Channel Transfer Request - SET */


/* Channel Single Shot Data Transfer */
#define EDMA_CH_SINGLE_CLEAR_gc (0x00) /* Channel Single Shot Data Transfer - CLEAR */
#define EDMA_CH_SINGLE_SET_gc   (0x04) /* Channel Single Shot Data Transfer - SET */


/* Channel 2-bytes Burst Length */
#define EDMA_CH_BURSTLEN_CLEAR_gc (0x00) /* Channel 2-bytes Burst Length - CLEAR */
#define EDMA_CH_BURSTLEN_SET_gc   (0x01) /* Channel 2-bytes Burst Length - SET */


/* Channel Block Transfer Busy */
#define EDMA_CH_CHBUSY_CLEAR_gc (0x00) /* Channel Block Transfer Busy - CLEAR */
#define EDMA_CH_CHBUSY_SET_gc   (0x80) /* Channel Block Transfer Busy - SET */


/* Channel Block Transfer Pending */
#define EDMA_CH_CHPEND_CLEAR_gc (0x00) /* Channel Block Transfer Pending - CLEAR */
#define EDMA_CH_CHPEND_SET_gc   (0x40) /* Channel Block Transfer Pending - SET */


/* Channel Transaction Error Interrupt Flag */
#define EDMA_CH_ERRIF_CLEAR_gc (0x00) /* Channel Transaction Error Interrupt Flag - CLEAR */
#define EDMA_CH_ERRIF_SET_gc   (0x20) /* Channel Transaction Error Interrupt Flag - SET */


/* Channel Transaction Complete Interrupt Flag */
#define EDMA_CH_TRNIF_CLEAR_gc (0x00) /* Channel Transaction Complete Interrupt Flag - CLEAR */
#define EDMA_CH_TRNIF_SET_gc   (0x10) /* Channel Transaction Complete Interrupt Flag - SET */


/* Channel Transaction Error Interrupt Level */
#define EDMA_CH_ERRINTLVL_OFF_gc (0x00<<2) /* Interrupt disabled */
#define EDMA_CH_ERRINTLVL_LO_gc  (0x01<<2) /* Low level */
#define EDMA_CH_ERRINTLVL_MED_gc (0x02<<2) /* Medium level */
#define EDMA_CH_ERRINTLVL_HI_gc  (0x03<<2) /* High level */


/* Channel Transaction Complete Interrupt Level */
#define EDMA_CH_TRNINTLVL_OFF_gc (0x00) /* Interrupt disabled */
#define EDMA_CH_TRNINTLVL_LO_gc  (0x01) /* Low level */
#define EDMA_CH_TRNINTLVL_MED_gc (0x02) /* Medium level */
#define EDMA_CH_TRNINTLVL_HI_gc  (0x03) /* High level */


/* Memory Address Reload for Peripheral Ch., or Source Address Reload for Standard Ch. */
#define EDMA_CH_RELOAD_NONE_gc        (0x00<<4) /* No reload */
#define EDMA_CH_RELOAD_BLOCK_gc       (0x01<<4) /* Reload at end of each block transfer */
#define EDMA_CH_RELOAD_BURST_gc       (0x02<<4) /* Reload at end of each burst transfer */
#define EDMA_CH_RELOAD_TRANSACTION_gc (0x03<<4) /* Reload at end of each transaction */


/* Memory Address Mode for Peripheral Ch., or Source Address Mode for Standard Ch. */
#define EDMA_CH_DIR_FIXED_gc (0x00) /* Fixed */
#define EDMA_CH_DIR_INC_gc   (0x01) /* Increment */
#define EDMA_CH_DIR_MP1_gc   (0x04) /* If Peripheral Ch. (Per ==> Mem), 1-byte 'mask-match' (data: ADDRL, mask: ADDRH), else reserved conf.  */
#define EDMA_CH_DIR_MP2_gc   (0x05) /* If Peripheral Ch. (Per ==> Mem), 1-byte 'OR-match' (data-1: ADDRL OR data-2: ADDRH), else reserved conf.  */
#define EDMA_CH_DIR_MP3_gc   (0x06) /* If Peripheral Ch. (Per ==> Mem), 2-byte 'match' (data-1: ADDRL followed by data-2: ADDRH), else reserved conf.  */


/* Destination Address Reload for Standard Channels Only. */
#define EDMA_CH_DESTRELOAD_NONE_gc        (0x00<<4) /* No reload */
#define EDMA_CH_DESTRELOAD_BLOCK_gc       (0x01<<4) /* Reload at end of each block transfer */
#define EDMA_CH_DESTRELOAD_BURST_gc       (0x02<<4) /* Reload at end of each burst transfer */
#define EDMA_CH_DESTRELOAD_TRANSACTION_gc (0x03<<4) /* Reload at end of each transaction */


/* Destination Address Mode for Standard Channels Only. */
#define EDMA_CH_DESTDIR_FIXED_gc (0x00) /* Fixed */
#define EDMA_CH_DESTDIR_INC_gc   (0x01) /* Increment */
#define EDMA_CH_DESTDIR_MP1_gc   (0x04) /* 1-byte 'mask-match' (data: ADDRL, mask: ADDRH) */
#define EDMA_CH_DESTDIR_MP2_gc   (0x05) /* 1-byte 'OR-match' (data-1: ADDRL OR data-2: ADDRH) */
#define EDMA_CH_DESTDIR_MP3_gc   (0x06) /* 2-byte 'match' (data1: ADDRL followed by data2: ADDRH) */


/* Channel Trigger Source */
#define EDMA_CH_TRIGSRC_OFF_gc         (0x00) /* Software triggers only */
#define EDMA_CH_TRIGSRC_EVSYS_CH0_gc   (0x01) /* Event CH0 as trigger (Standard Channels Only) */
#define EDMA_CH_TRIGSRC_EVSYS_CH1_gc   (0x02) /* Event CH1 as trigger (Standard Channels Only) */
#define EDMA_CH_TRIGSRC_EVSYS_CH2_gc   (0x03) /* Event CH2 as trigger (Standard Channels Only) */
#define EDMA_CH_TRIGSRC_ADCA_CH0_gc    (0x10) /* ADCA CH0 as trigger */
#define EDMA_CH_TRIGSRC_DACA_CH0_gc    (0x15) /* DACA CH0 as trigger */
#define EDMA_CH_TRIGSRC_DACA_CH1_gc    (0x16) /* DACA CH1 as trigger */
#define EDMA_CH_TRIGSRC_TCC4_OVF_gc    (0x40) /* TCC4 overflow/underflow as trigger (Standard Channels Only) */
#define EDMA_CH_TRIGSRC_TCC4_ERR_gc    (0x41) /* TCC4 error as trigger (Standard Channels Only) */
#define EDMA_CH_TRIGSRC_TCC4_CCA_gc    (0x42) /* TCC4 compare or capture channel A as trigger (Standard Channels Only) */
#define EDMA_CH_TRIGSRC_TCC4_CCB_gc    (0x43) /* TCC4 compare or capture channel B as trigger (Standard Channels Only) */
#define EDMA_CH_TRIGSRC_TCC4_CCC_gc    (0x44) /* TCC4 compare or capture channel C as trigger (Standard Channels Only) */
#define EDMA_CH_TRIGSRC_TCC4_CCD_gc    (0x45) /* TCC4 compare or capture channel D as trigger (Standard Channels Only) */
#define EDMA_CH_TRIGSRC_TCC5_OVF_gc    (0x46) /* TCC5 overflow/underflow as trigger (Standard Channels Only) */
#define EDMA_CH_TRIGSRC_TCC5_ERR_gc    (0x47) /* TCC5 error as trigger (Standard Channels Only) */
#define EDMA_CH_TRIGSRC_TCC5_CCA_gc    (0x48) /* TCC5 compare or capture channel A as trigger (Standard Channels Only) */
#define EDMA_CH_TRIGSRC_TCC5_CCB_gc    (0x49) /* TCC5 compare or capture channel B as trigger (Standard Channels Only) */
#define EDMA_CH_TRIGSRC_SPIC_RXC_gc    (0x4A) /* SPI C transfer complete (SPI Standard Mode) or SPI C receive complete as trigger (SPI Buffer Modes) */
#define EDMA_CH_TRIGSRC_SPIC_DRE_gc    (0x4B) /* SPI C transfer complete (SPI Standard Mode) or SPI C data register empty as trigger (SPI Buffer modes) */
#define EDMA_CH_TRIGSRC_USARTC0_RXC_gc (0x4C) /* USART C0 receive complete as trigger */
#define EDMA_CH_TRIGSRC_USARTC0_DRE_gc (0x4D) /* USART C0 data register empty as trigger */
#define EDMA_CH_TRIGSRC_TCD5_OVF_gc    (0x66) /* TCD5 overflow/underflow as trigger (Standard Channels Only) */
#define EDMA_CH_TRIGSRC_TCD5_ERR_gc    (0x67) /* TCD5 error as trigger (Standard Channels Only) */
#define EDMA_CH_TRIGSRC_TCD5_CCA_gc    (0x68) /* TCD5 compare or capture channel A as trigger (Standard Channels Only) */
#define EDMA_CH_TRIGSRC_TCD5_CCB_gc    (0x69) /* TCD5 compare or capture channel B as trigger (Standard Channels Only) */
#define EDMA_CH_TRIGSRC_USARTD0_RXC_gc (0x6C) /* USART D0 receive complete as trigger */
#define EDMA_CH_TRIGSRC_USARTD0_DRE_gc (0x6D) /* USART D0 data register empty as trigger */


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
#define EVSYS_CHMUX_ADCA_CH0_gc        (0x20) /* ADC A Channel 0 */
#define EVSYS_CHMUX_PORTA_PIN0_gc      (0x50) /* Port A, Pin0 */
#define EVSYS_CHMUX_PORTA_PIN1_gc      (0x51) /* Port A, Pin1 */
#define EVSYS_CHMUX_PORTA_PIN2_gc      (0x52) /* Port A, Pin2 */
#define EVSYS_CHMUX_PORTA_PIN3_gc      (0x53) /* Port A, Pin3 */
#define EVSYS_CHMUX_PORTA_PIN4_gc      (0x54) /* Port A, Pin4 */
#define EVSYS_CHMUX_PORTA_PIN5_gc      (0x55) /* Port A, Pin5 */
#define EVSYS_CHMUX_PORTA_PIN6_gc      (0x56) /* Port A, Pin6 */
#define EVSYS_CHMUX_PORTA_PIN7_gc      (0x57) /* Port A, Pin7 */
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
#define EVSYS_CHMUX_XCL_UNF0_gc        (0xB0) /* XCL BTC0 underflow */
#define EVSYS_CHMUX_XCL_UNF1_gc        (0xB1) /* XCL BTC1 underflow */
#define EVSYS_CHMUX_XCL_CC0_gc         (0xB2) /* XCL BTC0 capture or compare */
#define EVSYS_CHMUX_XCL_CC1_gc         (0xB3) /* XCL BTC1 capture or compare */
#define EVSYS_CHMUX_XCL_PEC0_gc        (0xB4) /* XCL PEC0 restart */
#define EVSYS_CHMUX_XCL_PEC1_gc        (0xB5) /* XCL PEC1 restart */
#define EVSYS_CHMUX_XCL_LUT0_gc        (0xB6) /* XCL LUT0 output */
#define EVSYS_CHMUX_XCL_LUT1_gc        (0xB7) /* XCL LUT1 output */
#define EVSYS_CHMUX_TCC4_OVF_gc        (0xC0) /* Timer/Counter C4 Overflow */
#define EVSYS_CHMUX_TCC4_ERR_gc        (0xC1) /* Timer/Counter C4 Error */
#define EVSYS_CHMUX_TCC4_CCA_gc        (0xC4) /* Timer/Counter C4 Compare or Capture A */
#define EVSYS_CHMUX_TCC4_CCB_gc        (0xC5) /* Timer/Counter C4 Compare or Capture B */
#define EVSYS_CHMUX_TCC4_CCC_gc        (0xC6) /* Timer/Counter C4 Compare or Capture C */
#define EVSYS_CHMUX_TCC4_CCD_gc        (0xC7) /* Timer/Counter C4 Compare or Capture D */
#define EVSYS_CHMUX_TCC5_OVF_gc        (0xC8) /* Timer/Counter C5 Overflow */
#define EVSYS_CHMUX_TCC5_ERR_gc        (0xC9) /* Timer/Counter C5 Error */
#define EVSYS_CHMUX_TCC5_CCA_gc        (0xCC) /* Timer/Counter C5 Compare or Capture A */
#define EVSYS_CHMUX_TCC5_CCB_gc        (0xCD) /* Timer/Counter C5 Compare or Capture B */
#define EVSYS_CHMUX_TCD5_OVF_gc        (0xD8) /* Timer/Counter D5 Overflow */
#define EVSYS_CHMUX_TCD5_ERR_gc        (0xD9) /* Timer/Counter D5 Error */
#define EVSYS_CHMUX_TCD5_CCA_gc        (0xDC) /* Timer/Counter D5 Compare or Capture A */
#define EVSYS_CHMUX_TCD5_CCB_gc        (0xDD) /* Timer/Counter D5 Compare or Capture B */


/* Event Channel 1 Multiplexer */
/* EVSYS_CHMUX_OFF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_RTC_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_RTC_CMP_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACA_CH0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACA_CH1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACA_WIN_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCA_CH0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN4_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN5_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN6_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN7_gc ALREADY DEFINED */
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
/* EVSYS_CHMUX_XCL_UNF0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_XCL_UNF1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_XCL_CC0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_XCL_CC1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_XCL_PEC0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_XCL_PEC1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_XCL_LUT0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_XCL_LUT1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC4_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC4_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC4_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC4_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC4_CCC_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC4_CCD_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC5_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC5_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC5_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC5_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD5_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD5_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD5_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD5_CCB_gc ALREADY DEFINED */


/* Event Channel 2 Multiplexer */
/* EVSYS_CHMUX_OFF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_RTC_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_RTC_CMP_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACA_CH0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACA_CH1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACA_WIN_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCA_CH0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN4_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN5_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN6_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN7_gc ALREADY DEFINED */
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
/* EVSYS_CHMUX_XCL_UNF0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_XCL_UNF1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_XCL_CC0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_XCL_CC1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_XCL_PEC0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_XCL_PEC1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_XCL_LUT0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_XCL_LUT1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC4_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC4_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC4_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC4_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC4_CCC_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC4_CCD_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC5_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC5_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC5_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC5_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD5_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD5_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD5_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD5_CCB_gc ALREADY DEFINED */


/* Event Channel 3 Multiplexer */
/* EVSYS_CHMUX_OFF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_RTC_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_RTC_CMP_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACA_CH0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACA_CH1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACA_WIN_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCA_CH0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN4_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN5_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN6_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN7_gc ALREADY DEFINED */
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
/* EVSYS_CHMUX_XCL_UNF0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_XCL_UNF1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_XCL_CC0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_XCL_CC1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_XCL_PEC0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_XCL_PEC1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_XCL_LUT0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_XCL_LUT1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC4_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC4_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC4_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC4_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC4_CCC_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC4_CCD_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC5_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC5_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC5_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC5_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD5_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD5_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD5_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD5_CCB_gc ALREADY DEFINED */


/* Event Channel 4 Multiplexer */
/* EVSYS_CHMUX_OFF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_RTC_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_RTC_CMP_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACA_CH0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACA_CH1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACA_WIN_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCA_CH0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN4_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN5_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN6_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN7_gc ALREADY DEFINED */
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
/* EVSYS_CHMUX_XCL_UNF0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_XCL_UNF1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_XCL_CC0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_XCL_CC1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_XCL_PEC0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_XCL_PEC1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_XCL_LUT0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_XCL_LUT1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC4_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC4_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC4_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC4_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC4_CCC_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC4_CCD_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC5_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC5_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC5_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC5_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD5_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD5_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD5_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD5_CCB_gc ALREADY DEFINED */


/* Event Channel 5 Multiplexer */
/* EVSYS_CHMUX_OFF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_RTC_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_RTC_CMP_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACA_CH0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACA_CH1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACA_WIN_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCA_CH0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN4_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN5_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN6_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN7_gc ALREADY DEFINED */
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
/* EVSYS_CHMUX_XCL_UNF0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_XCL_UNF1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_XCL_CC0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_XCL_CC1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_XCL_PEC0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_XCL_PEC1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_XCL_LUT0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_XCL_LUT1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC4_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC4_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC4_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC4_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC4_CCC_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC4_CCD_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC5_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC5_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC5_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC5_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD5_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD5_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD5_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD5_CCB_gc ALREADY DEFINED */


/* Event Channel 6 Multiplexer */
/* EVSYS_CHMUX_OFF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_RTC_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_RTC_CMP_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACA_CH0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACA_CH1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACA_WIN_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCA_CH0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN4_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN5_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN6_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN7_gc ALREADY DEFINED */
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
/* EVSYS_CHMUX_XCL_UNF0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_XCL_UNF1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_XCL_CC0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_XCL_CC1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_XCL_PEC0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_XCL_PEC1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_XCL_LUT0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_XCL_LUT1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC4_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC4_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC4_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC4_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC4_CCC_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC4_CCD_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC5_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC5_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC5_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC5_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD5_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD5_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD5_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD5_CCB_gc ALREADY DEFINED */


/* Event Channel 7 Multiplexer */
/* EVSYS_CHMUX_OFF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_RTC_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_RTC_CMP_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACA_CH0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACA_CH1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ACA_WIN_gc ALREADY DEFINED */
/* EVSYS_CHMUX_ADCA_CH0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN2_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN3_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN4_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN5_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN6_gc ALREADY DEFINED */
/* EVSYS_CHMUX_PORTA_PIN7_gc ALREADY DEFINED */
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
/* EVSYS_CHMUX_XCL_UNF0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_XCL_UNF1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_XCL_CC0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_XCL_CC1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_XCL_PEC0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_XCL_PEC1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_XCL_LUT0_gc ALREADY DEFINED */
/* EVSYS_CHMUX_XCL_LUT1_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC4_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC4_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC4_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC4_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC4_CCC_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC4_CCD_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC5_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC5_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC5_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCC5_CCB_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD5_OVF_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD5_ERR_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD5_CCA_gc ALREADY DEFINED */
/* EVSYS_CHMUX_TCD5_CCB_gc ALREADY DEFINED */


/* Rotary Decoder Enable */
#define EVSYS_ROTARY_CLEAR_gc (0x00) /* Rotary Decoder Enable - CLEAR */
#define EVSYS_ROTARY_SET_gc   (0x80) /* Rotary Decoder Enable - SET */


/* Quadrature Decoder Index Recognition Mode */
#define EVSYS_QDIRM_00_gc (0x00<<5) /* QDPH0 = 0, QDPH90 = 0 */
#define EVSYS_QDIRM_01_gc (0x01<<5) /* QDPH0 = 0, QDPH90 = 1 */
#define EVSYS_QDIRM_10_gc (0x02<<5) /* QDPH0 = 1, QDPH90 = 0 */
#define EVSYS_QDIRM_11_gc (0x03<<5) /* QDPH0 = 1, QDPH90 = 1 */


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


/* Prescaler Filter */
#define EVSYS_PRESCFILT_CH04_gc (0x01<<4) /* Enable prescaler filter for either channel 0 or 4 */
#define EVSYS_PRESCFILT_CH15_gc (0x02<<4) /* Enable prescaler filter for either channel 1 or 5 */
#define EVSYS_PRESCFILT_CH26_gc (0x04<<4) /* Enable prescaler filter for either channel 2 or 6 */
#define EVSYS_PRESCFILT_CH37_gc (0x08<<4) /* Enable prescaler filter for either channel 3 or 7 */


/* Prescaler Filter Select */
#define EVSYS_FILTSEL_CLEAR_gc (0x00) /* Prescaler Filter Select - CLEAR */
#define EVSYS_FILTSEL_SET_gc   (0x08) /* Prescaler Filter Select - SET */


/* Prescaler */
#define EVSYS_PRESC_CLKPER_8_gc     (0x00) /* CLKPER, divide by 8 */
#define EVSYS_PRESC_CLKPER_64_gc    (0x01) /* CLKPER, divide by 64 */
#define EVSYS_PRESC_CLKPER_512_gc   (0x02) /* CLKPER, divide by 512 */
#define EVSYS_PRESC_CLKPER_4096_gc  (0x03) /* CLKPER, divide by 4096 */
#define EVSYS_PRESC_CLKPER_32768_gc (0x04) /* CLKPER, divide by 32768 */


/*
--------------------------------------------------------------------------------
NVM - Non Volatile Memory Controller
--------------------------------------------------------------------------------
*/


/* Command */
#define NVM_CMD_NO_OPERATION_gc            (0x00) /* Noop/Ordinary LPM */
#define NVM_CMD_READ_USER_SIG_ROW_gc       (0x01) /* Read user signature row */
#define NVM_CMD_READ_CALIB_ROW_gc          (0x02) /* Read calibration row */
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
#define NVM_CMD_ERASE_FLASH_PAGE_gc        (0x2B) /* Erase Flash Page */
#define NVM_CMD_WRITE_BOOT_PAGE_gc         (0x2C) /* Write Boot Section page */
#define NVM_CMD_ERASE_WRITE_BOOT_PAGE_gc   (0x2D) /* Erase-and-write Boot Section page */
#define NVM_CMD_WRITE_FLASH_PAGE_gc        (0x2E) /* Write Flash Page */
#define NVM_CMD_ERASE_WRITE_FLASH_PAGE_gc  (0x2F) /* Erase-and-write Flash Page */
#define NVM_CMD_ERASE_EEPROM_gc            (0x30) /* Erase EEPROM */
#define NVM_CMD_ERASE_EEPROM_PAGE_gc       (0x32) /* Erase EEPROM page */
#define NVM_CMD_WRITE_EEPROM_PAGE_gc       (0x34) /* Write EEPROM page */
#define NVM_CMD_ERASE_WRITE_EEPROM_PAGE_gc (0x35) /* Erase-and-write EEPROM page */
#define NVM_CMD_ERASE_EEPROM_BUFFER_gc     (0x36) /* Erase/flush EEPROM page buffer */
#define NVM_CMD_APP_CRC_gc                 (0x38) /* Application section CRC */
#define NVM_CMD_BOOT_CRC_gc                (0x39) /*  Boot Section CRC */
#define NVM_CMD_FLASH_RANGE_CRC_gc         (0x3A) /* Flash Range CRC */
#define NVM_CMD_CHIP_ERASE_gc              (0x40) /* Erase Chip */
#define NVM_CMD_READ_NVM_gc                (0x43) /* Read NVM */
#define NVM_CMD_WRITE_FUSE_gc              (0x4C) /* Write Fuse byte */
#define NVM_CMD_ERASE_BOOT_gc              (0x68) /* Erase Boot Section */
#define NVM_CMD_FLASH_CRC_gc               (0x78) /* Flash CRC */


/* Command Execute */
#define NVM_CMDEX_CLEAR_gc (0x00) /* Command Execute - CLEAR */
#define NVM_CMDEX_SET_gc   (0x01) /* Command Execute - SET */


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
#define NVM_BLBB_RWLOCK_gc (0x00<<6) /* Read and write not allowed */
#define NVM_BLBB_RLOCK_gc  (0x01<<6) /* Read not allowed */
#define NVM_BLBB_WLOCK_gc  (0x02<<6) /* Write not allowed */
#define NVM_BLBB_NOLOCK_gc (0x03<<6) /* No locks */


/* Boot Lock Bits - Application Section */
#define NVM_BLBA_RWLOCK_gc (0x00<<4) /* Read and write not allowed */
#define NVM_BLBA_RLOCK_gc  (0x01<<4) /* Read not allowed */
#define NVM_BLBA_WLOCK_gc  (0x02<<4) /* Write not allowed */
#define NVM_BLBA_NOLOCK_gc (0x03<<4) /* No locks */


/* Boot Lock Bits - Application Table */
#define NVM_BLBAT_RWLOCK_gc (0x00<<2) /* Read and write not allowed */
#define NVM_BLBAT_RLOCK_gc  (0x01<<2) /* Read not allowed */
#define NVM_BLBAT_WLOCK_gc  (0x02<<2) /* Write not allowed */
#define NVM_BLBAT_NOLOCK_gc (0x03<<2) /* No locks */


/* Lock Bits */
#define NVM_LB_RWLOCK_gc (0x00) /* Read and write not allowed */
#define NVM_LB_WLOCK_gc  (0x02) /* Write not allowed */
#define NVM_LB_NOLOCK_gc (0x03) /* No locks */


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
#define ADC_CH_GAIN_1X_gc   (0x00<<2) /* 1x gain */
#define ADC_CH_GAIN_2X_gc   (0x01<<2) /* 2x gain */
#define ADC_CH_GAIN_4X_gc   (0x02<<2) /* 4x gain */
#define ADC_CH_GAIN_8X_gc   (0x03<<2) /* 8x gain */
#define ADC_CH_GAIN_16X_gc  (0x04<<2) /* 16x gain */
#define ADC_CH_GAIN_32X_gc  (0x05<<2) /* 32x gain */
#define ADC_CH_GAIN_64X_gc  (0x06<<2) /* 64x gain */
#define ADC_CH_GAIN_DIV2_gc (0x07<<2) /* x/2 gain */


/* Input Mode Select */
#define ADC_CH_INPUTMODE_INTERNAL_gc    (0x00) /* Internal inputs, no gain */
#define ADC_CH_INPUTMODE_SINGLEENDED_gc (0x01) /* Single-ended input, no gain */
#define ADC_CH_INPUTMODE_DIFFWGAINL_gc  (0x02) /* Differential input, gain with 4 LSB pins selection */
#define ADC_CH_INPUTMODE_DIFFWGAINH_gc  (0x03) /* Differential input, gain with 4 MSB pins selection */


/* MUX selection on Positive ADC Input */
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
#define ADC_CH_MUXPOS_PIN12_gc (0x0C<<3) /* Input pin 12 */
#define ADC_CH_MUXPOS_PIN13_gc (0x0D<<3) /* Input pin 13 */
#define ADC_CH_MUXPOS_PIN14_gc (0x0E<<3) /* Input pin 14 */
#define ADC_CH_MUXPOS_PIN15_gc (0x0F<<3) /* Input pin 15 */


/* MUX selection on Internal ADC Input */
#define ADC_CH_MUXINT_TEMP_gc      (0x00<<3) /* Temperature Reference */
#define ADC_CH_MUXINT_BANDGAP_gc   (0x01<<3) /* Bandgap Reference */
#define ADC_CH_MUXINT_SCALEDVCC_gc (0x02<<3) /* 1/10 Scaled VCC */
#define ADC_CH_MUXINT_DAC_gc       (0x03<<3) /* DAC Output */


/* MUX selection on Negative ADC Input */
#define ADC_CH_MUXNEG_PIN0_gc         (0x00) /* Input pin 0 (Input Mode = 2) */
#define ADC_CH_MUXNEG_PIN1_gc         (0x01) /* Input pin 1 (Input Mode = 2) */
#define ADC_CH_MUXNEG_PIN2_gc         (0x02) /* Input pin 2 (Input Mode = 2) */
#define ADC_CH_MUXNEG_PIN3_gc         (0x03) /* Input pin 3 (Input Mode = 2) */
#define ADC_CH_MUXNEG_PIN4_gc         (0x00) /* Input pin 4 (Input Mode = 3) */
#define ADC_CH_MUXNEG_PIN5_gc         (0x01) /* Input pin 5 (Input Mode = 3) */
#define ADC_CH_MUXNEG_PIN6_gc         (0x02) /* Input pin 6 (Input Mode = 3) */
#define ADC_CH_MUXNEG_PIN7_gc         (0x03) /* Input pin 7 (Input Mode = 3) */
#define ADC_CH_MUXNEG_GND_MODE3_gc    (0x05) /* PAD Ground (Input Mode = 2) */
#define ADC_CH_MUXNEG_INTGND_MODE3_gc (0x07) /* Internal Ground (Input Mode = 2) */
#define ADC_CH_MUXNEG_INTGND_MODE4_gc (0x04) /* Internal Ground (Input Mode = 3) */
#define ADC_CH_MUXNEG_GND_MODE4_gc    (0x07) /* PAD Ground (Input Mode = 3) */


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
#define ADC_CH_IF_CLEAR_gc (0x00) /* Channel Interrupt Flag - CLEAR */
#define ADC_CH_IF_SET_gc   (0x01) /* Channel Interrupt Flag - SET */


/* Positive MUX Setting Offset */
#define ADC_CH_SCAN_INPUTOFFSET_gc(x) ((x<<4) & 0xF0)

/* Number of Channels Included in Scan */
#define ADC_CH_SCAN_INPUTSCAN_gc(x) (x & 0x0F)

/* Correction Enable */
#define ADC_CH_CORREN_CLEAR_gc (0x00) /* Correction Enable - CLEAR */
#define ADC_CH_CORREN_SET_gc   (0x01) /* Correction Enable - SET */


/* Right Shift */
#define ADC_CH_AVGCTRL_RIGHTSHIFT_gc(x) ((x<<4) & 0x70)

/* Averaged Number of Samples */
#define ADC_CH_SAMPNUM_1X_gc    (0x00) /* 1 Sample */
#define ADC_CH_SAMPNUM_2X_gc    (0x01) /* 2 Samples */
#define ADC_CH_SAMPNUM_4X_gc    (0x02) /* 4 Samples */
#define ADC_CH_SAMPNUM_8X_gc    (0x03) /* 8 Samples */
#define ADC_CH_SAMPNUM_16X_gc   (0x04) /* 16 Samples */
#define ADC_CH_SAMPNUM_32X_gc   (0x05) /* 32 Samples */
#define ADC_CH_SAMPNUM_64X_gc   (0x06) /* 64 Samples */
#define ADC_CH_SAMPNUM_128X_gc  (0x07) /* 128 Samples */
#define ADC_CH_SAMPNUM_256X_gc  (0x08) /* 256 Samples */
#define ADC_CH_SAMPNUM_512X_gc  (0x09) /* 512 Samples */
#define ADC_CH_SAMPNUM_1024X_gc (0x0A) /* 1024 Samples */


/* Start Conversion */
#define ADC_START_CLEAR_gc (0x00) /* Start Conversion - CLEAR */
#define ADC_START_SET_gc   (0x04) /* Start Conversion - SET */


/* ADC Flush */
#define ADC_FLUSH_CLEAR_gc (0x00) /* ADC Flush - CLEAR */
#define ADC_FLUSH_SET_gc   (0x02) /* ADC Flush - SET */


/* Enable ADC */
#define ADC_ENABLE_CLEAR_gc (0x00) /* Enable ADC - CLEAR */
#define ADC_ENABLE_SET_gc   (0x01) /* Enable ADC - SET */


/* Current Limitation */
#define ADC_CURRLIMIT_NO_gc   (0x00<<5) /* No current limit,     300ksps max sampling rate */
#define ADC_CURRLIMIT_LOW_gc  (0x01<<5) /* Low current limit,    250ksps max sampling rate */
#define ADC_CURRLIMIT_MED_gc  (0x02<<5) /* Medium current limit, 150ksps max sampling rate */
#define ADC_CURRLIMIT_HIGH_gc (0x03<<5) /* High current limit,   50ksps max sampling rate */


/* Conversion Mode */
#define ADC_CONMODE_CLEAR_gc (0x00) /* Conversion Mode - CLEAR */
#define ADC_CONMODE_SET_gc   (0x10) /* Conversion Mode - SET */


/* Free Running Mode Enable */
#define ADC_FREERUN_CLEAR_gc (0x00) /* Free Running Mode Enable - CLEAR */
#define ADC_FREERUN_SET_gc   (0x08) /* Free Running Mode Enable - SET */


/* Result Resolution */
#define ADC_RESOLUTION_12BIT_gc     (0x00<<1) /* 12-bit right-adjusted result */
#define ADC_RESOLUTION_MT12BIT_gc   (0x01<<1) /* More than 12-bit (oversapling) right-adjusted result */
#define ADC_RESOLUTION_8BIT_gc      (0x02<<1) /* 8-bit right-adjusted result */
#define ADC_RESOLUTION_LEFT12BIT_gc (0x03<<1) /* 12-bit left-adjusted result */


/* Reference Selection */
#define ADC_REFSEL_INT1V_gc   (0x00<<4) /* Internal 1V */
#define ADC_REFSEL_INTVCC_gc  (0x01<<4) /* Internal VCC / 1.6 */
#define ADC_REFSEL_AREFA_gc   (0x02<<4) /* External reference on PORT A */
#define ADC_REFSEL_AREFD_gc   (0x03<<4) /* External reference on PORT D */
#define ADC_REFSEL_INTVCC2_gc (0x04<<4) /* Internal VCC / 2 */


/* Bandgap enable */
#define ADC_BANDGAP_CLEAR_gc (0x00) /* Bandgap enable - CLEAR */
#define ADC_BANDGAP_SET_gc   (0x02) /* Bandgap enable - SET */


/* Temperature Reference Enable */
#define ADC_TEMPREF_CLEAR_gc (0x00) /* Temperature Reference Enable - CLEAR */
#define ADC_TEMPREF_SET_gc   (0x01) /* Temperature Reference Enable - SET */


/* Event Input Select */
#define ADC_EVSEL_0_gc (0x00<<3) /* Event Channel 0 */
#define ADC_EVSEL_1_gc (0x01<<3) /* Event Channel 1 */
#define ADC_EVSEL_2_gc (0x02<<3) /* Event Channel 2 */
#define ADC_EVSEL_3_gc (0x03<<3) /* Event Channel 3 */
#define ADC_EVSEL_4_gc (0x04<<3) /* Event Channel 4 */
#define ADC_EVSEL_5_gc (0x05<<3) /* Event Channel 5 */
#define ADC_EVSEL_6_gc (0x06<<3) /* Event Channel 6 */
#define ADC_EVSEL_7_gc (0x07<<3) /* Event Channel 7 */


/* Event Action Select */
#define ADC_EVACT_NONE_gc      (0x00) /* No event action */
#define ADC_EVACT_CH0_gc       (0x01) /* First event triggers channel conversion */
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
#define DAC_CHSEL_SINGLE_gc  (0x00<<5) /* Single channel operation (Channel 0 only) */
#define DAC_CHSEL_SINGLE1_gc (0x01<<5) /* Single channel operation (Channel 1 only) */
#define DAC_CHSEL_DUAL_gc    (0x02<<5) /* Dual channel operation (Channel 0 and channel 1) */


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
#define DAC_REFSEL_AREFD_gc (0x03<<3) /* External reference on AREF on PORTD */
#define DAC_REFSEL_AREFB_gc (0x03<<3) /* Define for PortB kept for legacy reasons */


/* Left-adjust Result */
#define DAC_LEFTADJ_CLEAR_gc (0x00) /* Left-adjust Result - CLEAR */
#define DAC_LEFTADJ_SET_gc   (0x01) /* Left-adjust Result - SET */


/* Separate Event Channel Input for Channel 1 */
#define DAC_EVSPLIT_CLEAR_gc (0x00) /* Separate Event Channel Input for Channel 1 - CLEAR */
#define DAC_EVSPLIT_SET_gc   (0x08) /* Separate Event Channel Input for Channel 1 - SET */


/* Event Input Selection */
#define DAC_EVSEL_0_gc (0x00) /* Event Channel 0 */
#define DAC_EVSEL_1_gc (0x01) /* Event Channel 1 */
#define DAC_EVSEL_2_gc (0x02) /* Event Channel 2 */
#define DAC_EVSEL_3_gc (0x03) /* Event Channel 3 */
#define DAC_EVSEL_4_gc (0x04) /* Event Channel 4 */
#define DAC_EVSEL_5_gc (0x05) /* Event Channel 5 */
#define DAC_EVSEL_6_gc (0x06) /* Event Channel 6 */
#define DAC_EVSEL_7_gc (0x07) /* Event Channel 7 */


/* Channel 1 Data Register Empty */
#define DAC_CH1DRE_CLEAR_gc (0x00) /* Channel 1 Data Register Empty - CLEAR */
#define DAC_CH1DRE_SET_gc   (0x02) /* Channel 1 Data Register Empty - SET */


/* Channel 0 Data Register Empty */
#define DAC_CH0DRE_CLEAR_gc (0x00) /* Channel 0 Data Register Empty - CLEAR */
#define DAC_CH0DRE_SET_gc   (0x01) /* Channel 0 Data Register Empty - SET */


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


/* Analog Comparator 1 Output Invert Enable */
#define AC_AC1INVEN_CLEAR_gc (0x00) /* Analog Comparator 1 Output Invert Enable - CLEAR */
#define AC_AC1INVEN_SET_gc   (0x08) /* Analog Comparator 1 Output Invert Enable - SET */


/* Analog Comparator 0 Output Invert Enable */
#define AC_AC0INVEN_CLEAR_gc (0x00) /* Analog Comparator 0 Output Invert Enable - CLEAR */
#define AC_AC0INVEN_SET_gc   (0x04) /* Analog Comparator 0 Output Invert Enable - SET */


/* Analog Comparator 1 Output Enable */
#define AC_AC1OUT_CLEAR_gc (0x00) /* Analog Comparator 1 Output Enable - CLEAR */
#define AC_AC1OUT_SET_gc   (0x02) /* Analog Comparator 1 Output Enable - SET */


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


/* Current Source Enable */
#define AC_CURREN_CLEAR_gc (0x00) /* Current Source Enable - CLEAR */
#define AC_CURREN_SET_gc   (0x80) /* Current Source Enable - SET */


/* Current Mode */
#define AC_CURRMODE_CLEAR_gc (0x00) /* Current Mode - CLEAR */
#define AC_CURRMODE_SET_gc   (0x40) /* Current Mode - SET */


/* Analog Comparator 1 current source output */
#define AC_AC1CURR_CLEAR_gc (0x00) /* Analog Comparator 1 current source output - CLEAR */
#define AC_AC1CURR_SET_gc   (0x02) /* Analog Comparator 1 current source output - SET */


/* Analog Comparator 0 current source output */
#define AC_AC0CURR_CLEAR_gc (0x00) /* Analog Comparator 0 current source output - CLEAR */
#define AC_AC0CURR_SET_gc   (0x01) /* Analog Comparator 0 current source output - SET */


/*
--------------------------------------------------------------------------------
RTC - Real-Time Clounter
--------------------------------------------------------------------------------
*/


/* Correction Enable */
#define RTC_CORREN_CLEAR_gc (0x00) /* Correction Enable - CLEAR */
#define RTC_CORREN_SET_gc   (0x08) /* Correction Enable - SET */


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


/* Correction Sign */
#define RTC_SIGN_CLEAR_gc (0x00) /* Correction Sign - CLEAR */
#define RTC_SIGN_SET_gc   (0x80) /* Correction Sign - SET */


/* Error Value */
#define RTC_CALIB_ERROR_gc(x) (x & 0x7F)

/*
--------------------------------------------------------------------------------
XCL - XMEGA Custom Logic
--------------------------------------------------------------------------------
*/


/* LUT0 Output Enable */
#define XCL_LUT0OUTEN_DISABLE_gc (0x00<<6) /* LUT0 output disabled */
#define XCL_LUT0OUTEN_PIN0_gc    (0x01<<6) /* LUT0 Output to pin 0 */
#define XCL_LUT0OUTEN_PIN4_gc    (0x02<<6) /* LUT0 Output to pin 4 */


/* Port Selection */
#define XCL_PORTSEL_PC_gc (0x00<<4) /* Port C for LUT or USARTC0 for PEC */
#define XCL_PORTSEL_PD_gc (0x01<<4) /* Port D for LUT or USARTD0 for PEC */


/* LUT Configuration */
#define XCL_LUTCONF_2LUT2IN_gc (0x00) /* 2-Input two LUT */
#define XCL_LUTCONF_2LUT1IN_gc (0x01) /* Two LUT with duplicated input  */
#define XCL_LUTCONF_2LUT3IN_gc (0x02) /* Two LUT with one common input  */
#define XCL_LUTCONF_1LUT3IN_gc (0x03) /* 3-Input LUT  */
#define XCL_LUTCONF_MUX_gc     (0x04) /* One LUT Mux  */
#define XCL_LUTCONF_DLATCH_gc  (0x05) /* One D-Latch LUT  */
#define XCL_LUTCONF_RSLATCH_gc (0x06) /* One RS-Latch LUT  */
#define XCL_LUTCONF_DFF_gc     (0x07) /* One DFF LUT  */


/* Input Selection 3 */
#define XCL_IN3SEL_EVSYS_gc (0x00<<6) /* Event system selected as source */
#define XCL_IN3SEL_XCL_gc   (0x01<<6) /* XCL selected as source */
#define XCL_IN3SEL_PINL_gc  (0x02<<6) /* LSB port pin selected as source */
#define XCL_IN3SEL_PINH_gc  (0x03<<6) /* MSB port pin selected as source */


/* Input Selection 2 */
#define XCL_IN2SEL_EVSYS_gc (0x00<<4) /* Event system selected as source */
#define XCL_IN2SEL_XCL_gc   (0x01<<4) /* XCL selected as source */
#define XCL_IN2SEL_PINL_gc  (0x02<<4) /* LSB port pin selected as source */
#define XCL_IN2SEL_PINH_gc  (0x03<<4) /* MSB port pin selected as source */


/* Input Selection 1 */
#define XCL_IN1SEL_EVSYS_gc (0x00<<2) /* Event system selected as source */
#define XCL_IN1SEL_XCL_gc   (0x01<<2) /* XCL selected as source */
#define XCL_IN1SEL_PINL_gc  (0x02<<2) /* LSB port pin selected as source */
#define XCL_IN1SEL_PINH_gc  (0x03<<2) /* MSB port pin selected as source */


/* Input Selection 0 */
#define XCL_IN0SEL_EVSYS_gc (0x00) /* Event system selected as source */
#define XCL_IN0SEL_XCL_gc   (0x01) /* XCL selected as source */
#define XCL_IN0SEL_PINL_gc  (0x02) /* LSB port pin selected as source */
#define XCL_IN0SEL_PINH_gc  (0x03) /* MSB port pin selected as source */


/* Asynchronous Event Line Selection for LUT1 */
#define XCL_EVASYSEL1_CLEAR_gc (0x00) /* Asynchronous Event Line Selection for LUT1 - CLEAR */
#define XCL_EVASYSEL1_SET_gc   (0x80) /* Asynchronous Event Line Selection for LUT1 - SET */


/* Asynchronous Event Line Selection for LUT0 */
#define XCL_EVASYSEL0_CLEAR_gc (0x00) /* Asynchronous Event Line Selection for LUT0 - CLEAR */
#define XCL_EVASYSEL0_SET_gc   (0x40) /* Asynchronous Event Line Selection for LUT0 - SET */


/* Delay Selection */
#define XCL_DLYSEL_DLY11_gc (0x00<<4) /* One cycle delay for each LUT1 and LUT0 */
#define XCL_DLYSEL_DLY12_gc (0x01<<4) /* One cycle delay for LUT1 and two cycles for LUT0 */
#define XCL_DLYSEL_DLY21_gc (0x02<<4) /* Two cycles delay for LUT1 and one cycle for LUT0 */
#define XCL_DLYSEL_DLY22_gc (0x03<<4) /* Two cycle delays for each LUT1 and LUT0 */


/* Delay Configuration on LUT1 */
#define XCL_DLY1CONF_DISABLE_gc (0x00<<2) /* Delay element disabled */
#define XCL_DLY1CONF_IN_gc      (0x01<<2) /* Delay enabled on LUT input */
#define XCL_DLY1CONF_OUT_gc     (0x02<<2) /* Delay enabled on LUT output */


/* Delay Configuration on LUT0 */
#define XCL_DLY0CONF_DISABLE_gc (0x00) /* Delay element disabled */
#define XCL_DLY0CONF_IN_gc      (0x01) /* Delay enabled on LUT input */
#define XCL_DLY0CONF_OUT_gc     (0x02) /* Delay enabled on LUT output */


/* Truth Table of LUT1 */
#define XCL_CTRLD_TRUTH1_gc(x) ((x<<4) & 0xF0)

/* Truth Table of LUT0 */
#define XCL_CTRLD_TRUTH0_gc(x) (x & 0x0F)

/* Timer/Counter Command Selection */
#define XCL_CMDSEL_NONE_gc    (0x00<<7) /* None */
#define XCL_CMDSEL_RESTART_gc (0x01<<7) /* Force restart */


/* Timer/Counter Selection */
#define XCL_TCSEL_TC16_gc     (0x00<<4) /* 16-bit timer/counter */
#define XCL_TCSEL_BTC0_gc     (0x01<<4) /* One 8-bit timer/counter */
#define XCL_TCSEL_BTC01_gc    (0x02<<4) /* Two 8-bit timer/counters */
#define XCL_TCSEL_BTC0PEC1_gc (0x03<<4) /* One 8-bit timer/counter and one 8-bit peripheral transmitter counter */
#define XCL_TCSEL_PEC0BTC1_gc (0x04<<4) /* One 8-bit timer/counter and one 8-bit peripheral receiver counter */
#define XCL_TCSEL_PEC01_gc    (0x05<<4) /* Two 8-bit peripheral counters */
#define XCL_TCSEL_BTC0PEC2_gc (0x06<<4) /* One 8-bit timer/counter and two 4-bit peripheral counters */


/* Clock Selection */
#define XCL_CLKSEL_OFF_gc     (0x00) /* OFF */
#define XCL_CLKSEL_DIV1_gc    (0x01) /* Prescaler clk */
#define XCL_CLKSEL_DIV2_gc    (0x02) /* Prescaler clk/2 */
#define XCL_CLKSEL_DIV4_gc    (0x03) /* Prescaler clk/4 */
#define XCL_CLKSEL_DIV8_gc    (0x04) /* Prescaler clk/8 */
#define XCL_CLKSEL_DIV64_gc   (0x05) /* Prescaler clk/64 */
#define XCL_CLKSEL_DIV256_gc  (0x06) /* Prescaler clk/256 */
#define XCL_CLKSEL_DIV1024_gc (0x07) /* Prescaler clk/1024 */
#define XCL_CLKSEL_EVCH0_gc   (0x08) /* Event channel 0 */
#define XCL_CLKSEL_EVCH1_gc   (0x09) /* Event channel 1 */
#define XCL_CLKSEL_EVCH2_gc   (0x0A) /* Event channel 2 */
#define XCL_CLKSEL_EVCH3_gc   (0x0B) /* Event channel 3 */
#define XCL_CLKSEL_EVCH4_gc   (0x0C) /* Event channel 4 */
#define XCL_CLKSEL_EVCH5_gc   (0x0D) /* Event channel 5 */
#define XCL_CLKSEL_EVCH6_gc   (0x0E) /* Event channel 6 */
#define XCL_CLKSEL_EVCH7_gc   (0x0F) /* Event channel 7 */


/* Command Enable */
#define XCL_CMDEN_DISABLE_gc (0x00<<6) /* Command Ignored */
#define XCL_CMDEN_CMD0_gc    (0x01<<6) /* Command valid for timer/counter 0 */
#define XCL_CMDEN_CMD1_gc    (0x02<<6) /* Command valid for timer/counter 1 */
#define XCL_CMDEN_CMD01_gc   (0x03<<6) /* Command valid for both timer/counter 0 and 1 */


/* Compare Channel 1 Output Value */
#define XCL_CMP1_CLEAR_gc (0x00<<5) /* Clear WG Output  */
#define XCL_CMP1_SET_gc   (0x01<<5) /* Set WG Output  */


/* Compare Channel 0 Output Value */
#define XCL_CMP0_CLEAR_gc (0x00<<4) /* Clear WG Output  */
#define XCL_CMP0_SET_gc   (0x01<<4) /* Set WG Output  */


/* Compare or Capture Channel 1 Enable */
#define XCL_CCEN1_CLEAR_gc (0x00) /* Compare or Capture Channel 1 Enable - CLEAR */
#define XCL_CCEN1_SET_gc   (0x08) /* Compare or Capture Channel 1 Enable - SET */


/* Compare or Capture Channel 0 Enable */
#define XCL_CCEN0_CLEAR_gc (0x00) /* Compare or Capture Channel 0 Enable - CLEAR */
#define XCL_CCEN0_SET_gc   (0x04) /* Compare or Capture Channel 0 Enable - SET */


/* Timer/Counter Mode */
#define XCL_MODE_NORMAL_gc (0x00) /* Normal mode with compare/period */
#define XCL_MODE_CAPT_gc   (0x01) /* Capture mode */
#define XCL_MODE_PWM_gc    (0x02) /* Single Slope PWM */
#define XCL_MODE_1SHOT_gc  (0x03) /* One-shot PWM */


/* Event Action Enable */
#define XCL_EVACTEN_CLEAR_gc (0x00) /* Event Action Enable - CLEAR */
#define XCL_EVACTEN_SET_gc   (0x80) /* Event Action Enable - SET */


/* Event Action Selection on Timer/Counter 1 */
#define XCL_EVACT1_INPUT_gc   (0x00<<5) /* Input Capture */
#define XCL_EVACT1_FREQ_gc    (0x01<<5) /* Frequency Capture */
#define XCL_EVACT1_PW_gc      (0x02<<5) /* Pulse Width Capture */
#define XCL_EVACT1_RESTART_gc (0x03<<5) /* Restart timer/counter */


/* Event Action Selection on Timer/Counter 0 */
#define XCL_EVACT0_INPUT_gc   (0x00<<3) /* Input Capture */
#define XCL_EVACT0_FREQ_gc    (0x01<<3) /* Frequency Capture */
#define XCL_EVACT0_PW_gc      (0x02<<3) /* Pulse Width Capture */
#define XCL_EVACT0_RESTART_gc (0x03<<3) /* Restart timer/counter */


/* Event Source Selection */
#define XCL_EVSRC_EVCH0_gc (0x00) /* Event channel 0 */
#define XCL_EVSRC_EVCH1_gc (0x01) /* Event channel 1 */
#define XCL_EVSRC_EVCH2_gc (0x02) /* Event channel 2 */
#define XCL_EVSRC_EVCH3_gc (0x03) /* Event channel 3 */
#define XCL_EVSRC_EVCH4_gc (0x04) /* Event channel 4 */
#define XCL_EVSRC_EVCH5_gc (0x05) /* Event channel 5 */
#define XCL_EVSRC_EVCH6_gc (0x06) /* Event channel 6 */
#define XCL_EVSRC_EVCH7_gc (0x07) /* Event channel 7 */


/* Underflow 1 Interrupt Enable */
#define XCL_UNF1IE_CLEAR_gc (0x00) /* Underflow 1 Interrupt Enable - CLEAR */
#define XCL_UNF1IE_SET_gc   (0x80) /* Underflow 1 Interrupt Enable - SET */


/* Peripheral Counter 1 Interrupt Enable */
#define XCL_PEC1IE_CLEAR_gc (0x00) /* Peripheral Counter 1 Interrupt Enable - CLEAR */
#define XCL_PEC1IE_SET_gc   (0x80) /* Peripheral Counter 1 Interrupt Enable - SET */


/* Peripheral High Counter 2 Interrupt Enable */
#define XCL_PEC21IE_CLEAR_gc (0x00) /* Peripheral High Counter 2 Interrupt Enable - CLEAR */
#define XCL_PEC21IE_SET_gc   (0x80) /* Peripheral High Counter 2 Interrupt Enable - SET */


/* Underflow 0 Interrupt Enable */
#define XCL_UNF0IE_CLEAR_gc (0x00) /* Underflow 0 Interrupt Enable - CLEAR */
#define XCL_UNF0IE_SET_gc   (0x40) /* Underflow 0 Interrupt Enable - SET */


/* Peripheral Counter 0 Interrupt Enable */
#define XCL_PEC0IE_CLEAR_gc (0x00) /* Peripheral Counter 0 Interrupt Enable - CLEAR */
#define XCL_PEC0IE_SET_gc   (0x40) /* Peripheral Counter 0 Interrupt Enable - SET */


/* Compare Or Capture 1 Interrupt Enable */
#define XCL_CC1IE_CLEAR_gc (0x00) /* Compare Or Capture 1 Interrupt Enable - CLEAR */
#define XCL_CC1IE_SET_gc   (0x20) /* Compare Or Capture 1 Interrupt Enable - SET */


/* Peripheral Low Counter 2 Interrupt Enable */
#define XCL_PEC20IE_CLEAR_gc (0x00) /* Peripheral Low Counter 2 Interrupt Enable - CLEAR */
#define XCL_PEC20IE_SET_gc   (0x20) /* Peripheral Low Counter 2 Interrupt Enable - SET */


/* Compare Or Capture 0 Interrupt Enable */
#define XCL_CC0IE_CLEAR_gc (0x00) /* Compare Or Capture 0 Interrupt Enable - CLEAR */
#define XCL_CC0IE_SET_gc   (0x10) /* Compare Or Capture 0 Interrupt Enable - SET */


/* Timer Underflow Interrupt Level */
#define XCL_UNFINTLVL_OFF_gc (0x00<<2) /* Interrupt Disabled */
#define XCL_UNFINTLVL_LO_gc  (0x01<<2) /* Low Level */
#define XCL_UNFINTLVL_MED_gc (0x02<<2) /* Medium Level */
#define XCL_UNFINTLVL_HI_gc  (0x03<<2) /* High Level */


/* Timer Compare or Capture Interrupt Level */
#define XCL_CCINTLVL_OFF_gc (0x00) /* Interrupt Disabled */
#define XCL_CCINTLVL_LO_gc  (0x01) /* Low Level */
#define XCL_CCINTLVL_MED_gc (0x02) /* Medium Level */
#define XCL_CCINTLVL_HI_gc  (0x03) /* High Level */


/* Timer/Counter 1 Underflow Interrupt Flag */
#define XCL_UNF1IF_CLEAR_gc (0x00) /* Timer/Counter 1 Underflow Interrupt Flag - CLEAR */
#define XCL_UNF1IF_SET_gc   (0x80) /* Timer/Counter 1 Underflow Interrupt Flag - SET */


/* Peripheral Counter 1 Interrupt Flag */
#define XCL_PEC1IF_CLEAR_gc (0x00) /* Peripheral Counter 1 Interrupt Flag - CLEAR */
#define XCL_PEC1IF_SET_gc   (0x80) /* Peripheral Counter 1 Interrupt Flag - SET */


/* Peripheral High Counter 2 Interrupt Flag */
#define XCL_PEC21IF_CLEAR_gc (0x00) /* Peripheral High Counter 2 Interrupt Flag - CLEAR */
#define XCL_PEC21IF_SET_gc   (0x80) /* Peripheral High Counter 2 Interrupt Flag - SET */


/* Timer/Counter 0 Underflow Interrupt Flag */
#define XCL_UNF0IF_CLEAR_gc (0x00) /* Timer/Counter 0 Underflow Interrupt Flag - CLEAR */
#define XCL_UNF0IF_SET_gc   (0x40) /* Timer/Counter 0 Underflow Interrupt Flag - SET */


/* Peripheral Counter 0 Interrupt Flag */
#define XCL_PEC0IF_CLEAR_gc (0x00) /* Peripheral Counter 0 Interrupt Flag - CLEAR */
#define XCL_PEC0IF_SET_gc   (0x40) /* Peripheral Counter 0 Interrupt Flag - SET */


/* Compare or Capture Channel 1 Interrupt Flag */
#define XCL_CC1IF_CLEAR_gc (0x00) /* Compare or Capture Channel 1 Interrupt Flag - CLEAR */
#define XCL_CC1IF_SET_gc   (0x20) /* Compare or Capture Channel 1 Interrupt Flag - SET */


/* Peripheral Low Counter 2 Interrupt Flag */
#define XCL_PEC20IF_CLEAR_gc (0x00) /* Peripheral Low Counter 2 Interrupt Flag - CLEAR */
#define XCL_PEC20IF_SET_gc   (0x20) /* Peripheral Low Counter 2 Interrupt Flag - SET */


/* Compare or Capture Channel 0 Interrupt Flag */
#define XCL_CC0IF_CLEAR_gc (0x00) /* Compare or Capture Channel 0 Interrupt Flag - CLEAR */
#define XCL_CC0IF_SET_gc   (0x10) /* Compare or Capture Channel 0 Interrupt Flag - SET */


/* Peripheral High Counter 2 Bits */
#define XCL_CNTH_PCNT21_gc(x) ((x<<4) & 0xF0)

/* Peripheral Low Counter 2 Bits */
#define XCL_CNTH_PCNT20_gc(x) (x & 0x0F)

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


/*
--------------------------------------------------------------------------------
TWI - Two-Wire Interface
--------------------------------------------------------------------------------
*/


/* Bridge Enable */
#define TWI_BRIDGEEN_CLEAR_gc (0x00) /* Bridge Enable - CLEAR */
#define TWI_BRIDGEEN_SET_gc   (0x80) /* Bridge Enable - SET */


/* Slave Fast Mode Plus Enable */
#define TWI_SFMPEN_CLEAR_gc (0x00) /* Slave Fast Mode Plus Enable - CLEAR */
#define TWI_SFMPEN_SET_gc   (0x40) /* Slave Fast Mode Plus Enable - SET */


/* Slave SDA Hold Time Enable */
#define TWI_SSDAHOLD_OFF_gc   (0x00<<4) /* SDA Hold Time off */
#define TWI_SSDAHOLD_50NS_gc  (0x01<<4) /* SDA Hold Time 50 ns */
#define TWI_SSDAHOLD_300NS_gc (0x02<<4) /* SDA Hold Time 300 ns */
#define TWI_SSDAHOLD_400NS_gc (0x03<<4) /* SDA Hold Time 400 ns */


/* FMPLUS Enable */
#define TWI_FMPEN_CLEAR_gc (0x00) /* FMPLUS Enable - CLEAR */
#define TWI_FMPEN_SET_gc   (0x08) /* FMPLUS Enable - SET */


/* SDA Hold Time Enable */
#define TWI_SDAHOLD_OFF_gc   (0x00<<1) /* SDA Hold Time off */
#define TWI_SDAHOLD_50NS_gc  (0x01<<1) /* SDA Hold Time 50 ns */
#define TWI_SDAHOLD_300NS_gc (0x02<<1) /* SDA Hold Time 300 ns */
#define TWI_SDAHOLD_400NS_gc (0x03<<1) /* SDA Hold Time 400 ns */


/* External Driver Interface Enable */
#define TWI_EDIEN_CLEAR_gc (0x00) /* External Driver Interface Enable - CLEAR */
#define TWI_EDIEN_SET_gc   (0x01) /* External Driver Interface Enable - SET */


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


/* Inactive Bus Timeout */
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


/* Ttimeout Enable */
#define TWI_MASTER_TTOUTEN_CLEAR_gc (0x00) /* Ttimeout Enable - CLEAR */
#define TWI_MASTER_TTOUTEN_SET_gc   (0x10) /* Ttimeout Enable - SET */


/* Slave Extend Timeout Enable */
#define TWI_MASTER_TSEXTEN_CLEAR_gc (0x00) /* Slave Extend Timeout Enable - CLEAR */
#define TWI_MASTER_TSEXTEN_SET_gc   (0x20) /* Slave Extend Timeout Enable - SET */


/* Master Extend Timeout Enable */
#define TWI_MASTER_TMEXTEN_CLEAR_gc (0x00) /* Master Extend Timeout Enable - CLEAR */
#define TWI_MASTER_TMEXTEN_SET_gc   (0x40) /* Master Extend Timeout Enable - SET */


/* Timeout Interrupt Enable */
#define TWI_MASTER_TOIE_CLEAR_gc (0x00) /* Timeout Interrupt Enable - CLEAR */
#define TWI_MASTER_TOIE_SET_gc   (0x80) /* Timeout Interrupt Enable - SET */


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


/* Ttimeout Enable */
#define TWI_SLAVE_TTOUTEN_CLEAR_gc (0x00) /* Ttimeout Enable - CLEAR */
#define TWI_SLAVE_TTOUTEN_SET_gc   (0x10) /* Ttimeout Enable - SET */


/* Timeout Interrupt Enable */
#define TWI_SLAVE_TOIE_CLEAR_gc (0x00) /* Timeout Interrupt Enable - CLEAR */
#define TWI_SLAVE_TOIE_SET_gc   (0x80) /* Timeout Interrupt Enable - SET */


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


/* Master Ttimeout Interrupt Flag */
#define TWI_TIMEOUT_TTOUTMIF_CLEAR_gc (0x00) /* Master Ttimeout Interrupt Flag - CLEAR */
#define TWI_TIMEOUT_TTOUTMIF_SET_gc   (0x01) /* Master Ttimeout Interrupt Flag - SET */


/* Slave Extend Interrupt Flag */
#define TWI_TIMEOUT_TSEXTIF_CLEAR_gc (0x00) /* Slave Extend Interrupt Flag - CLEAR */
#define TWI_TIMEOUT_TSEXTIF_SET_gc   (0x02) /* Slave Extend Interrupt Flag - SET */


/* Master Extend Interrupt Flag */
#define TWI_TIMEOUT_TMEXTIF_CLEAR_gc (0x00) /* Master Extend Interrupt Flag - CLEAR */
#define TWI_TIMEOUT_TMEXTIF_SET_gc   (0x04) /* Master Extend Interrupt Flag - SET */


/* Slave Ttimeout Interrupt Flag */
#define TWI_TIMEOUT_TTOUTSIF_CLEAR_gc (0x00) /* Slave Ttimeout Interrupt Flag - CLEAR */
#define TWI_TIMEOUT_TTOUTSIF_SET_gc   (0x10) /* Slave Ttimeout Interrupt Flag - SET */


/* Master Ttimeout Select */
#define TWI_TIMEOUT_TTOUTMSEL_25MS_gc (0x00) /* 25 Milliseconds */
#define TWI_TIMEOUT_TTOUTMSEL_24MS_gc (0x01) /* 24 Milliseconds */
#define TWI_TIMEOUT_TTOUTMSEL_23MS_gc (0x02) /* 23 Milliseconds */
#define TWI_TIMEOUT_TTOUTMSEL_22MS_gc (0x03) /* 22 Milliseconds */
#define TWI_TIMEOUT_TTOUTMSEL_26MS_gc (0x04) /* 26 Milliseconds */
#define TWI_TIMEOUT_TTOUTMSEL_27MS_gc (0x05) /* 27 Milliseconds */
#define TWI_TIMEOUT_TTOUTMSEL_28MS_gc (0x06) /* 28 Milliseconds */
#define TWI_TIMEOUT_TTOUTMSEL_29MS_gc (0x07) /* 29 Milliseconds */


/* Master/Slave Timeout Select */
#define TWI_TIMEOUT_TMSEXTSEL_10MS25MS_gc (0x00<<3) /* Tmext 10ms Tsext 25ms */
#define TWI_TIMEOUT_TMSEXTSEL_9MS24MS_gc  (0x01<<3) /* Tmext 9ms  Tsext 24ms */
#define TWI_TIMEOUT_TMSEXTSEL_11MS26MS_gc (0x02<<3) /* Tmext 11ms Tsext 26ms */
#define TWI_TIMEOUT_TMSEXTSEL_12MS27MS_gc (0x03<<3) /* Tmext 12ms Tsext 27ms */


/* Slave Ttimeout Select */
#define TWI_TIMEOUT_TTOUTSSEL_25MS_gc (0x00<<5) /* 25 Milliseconds */
#define TWI_TIMEOUT_TTOUTSSEL_24MS_gc (0x01<<5) /* 24 Milliseconds */
#define TWI_TIMEOUT_TTOUTSSEL_23MS_gc (0x02<<5) /* 23 Milliseconds */
#define TWI_TIMEOUT_TTOUTSSEL_22MS_gc (0x03<<5) /* 22 Milliseconds */
#define TWI_TIMEOUT_TTOUTSSEL_26MS_gc (0x04<<5) /* 26 Milliseconds */
#define TWI_TIMEOUT_TTOUTSSEL_27MS_gc (0x05<<5) /* 27 Milliseconds */
#define TWI_TIMEOUT_TTOUTSSEL_28MS_gc (0x06<<5) /* 28 Milliseconds */
#define TWI_TIMEOUT_TTOUTSSEL_29MS_gc (0x07<<5) /* 29 Milliseconds */


/*
--------------------------------------------------------------------------------
PORT - Port Configuration
--------------------------------------------------------------------------------
*/


/* Port Interrupt Level */
#define PORT_INTLVL_OFF_gc (0x00) /* Interrupt Disabled */
#define PORT_INTLVL_LO_gc  (0x01) /* Low Level */
#define PORT_INTLVL_MED_gc (0x02) /* Medium Level */
#define PORT_INTLVL_HI_gc  (0x03) /* High Level */


/* Pin 7 Interrupt Flag */
#define PORT_INT7IF_CLEAR_gc (0x00) /* Pin 7 Interrupt Flag - CLEAR */
#define PORT_INT7IF_SET_gc   (0x80) /* Pin 7 Interrupt Flag - SET */


/* Pin 6 Interrupt Flag */
#define PORT_INT6IF_CLEAR_gc (0x00) /* Pin 6 Interrupt Flag - CLEAR */
#define PORT_INT6IF_SET_gc   (0x40) /* Pin 6 Interrupt Flag - SET */


/* Pin 5 Interrupt Flag */
#define PORT_INT5IF_CLEAR_gc (0x00) /* Pin 5 Interrupt Flag - CLEAR */
#define PORT_INT5IF_SET_gc   (0x20) /* Pin 5 Interrupt Flag - SET */


/* Pin 4 Interrupt Flag */
#define PORT_INT4IF_CLEAR_gc (0x00) /* Pin 4 Interrupt Flag - CLEAR */
#define PORT_INT4IF_SET_gc   (0x10) /* Pin 4 Interrupt Flag - SET */


/* Pin 3 Interrupt Flag */
#define PORT_INT3IF_CLEAR_gc (0x00) /* Pin 3 Interrupt Flag - CLEAR */
#define PORT_INT3IF_SET_gc   (0x08) /* Pin 3 Interrupt Flag - SET */


/* Pin 2 Interrupt Flag */
#define PORT_INT2IF_CLEAR_gc (0x00) /* Pin 2 Interrupt Flag - CLEAR */
#define PORT_INT2IF_SET_gc   (0x04) /* Pin 2 Interrupt Flag - SET */


/* Pin 1 Interrupt Flag */
#define PORT_INT1IF_CLEAR_gc (0x00) /* Pin 1 Interrupt Flag - CLEAR */
#define PORT_INT1IF_SET_gc   (0x02) /* Pin 1 Interrupt Flag - SET */


/* Pin 0 Interrupt Flag */
#define PORT_INT0IF_CLEAR_gc (0x00) /* Pin 0 Interrupt Flag - CLEAR */
#define PORT_INT0IF_SET_gc   (0x01) /* Pin 0 Interrupt Flag - SET */


/* Usart0 */
#define PORT_USART0_CLEAR_gc (0x00) /* Usart0 - CLEAR */
#define PORT_USART0_SET_gc   (0x10) /* Usart0 - SET */


/* Timer/Counter 4 Output Compare D */
#define PORT_TC4D_CLEAR_gc (0x00) /* Timer/Counter 4 Output Compare D - CLEAR */
#define PORT_TC4D_SET_gc   (0x08) /* Timer/Counter 4 Output Compare D - SET */


/* Timer/Counter 4 Output Compare C */
#define PORT_TC4C_CLEAR_gc (0x00) /* Timer/Counter 4 Output Compare C - CLEAR */
#define PORT_TC4C_SET_gc   (0x04) /* Timer/Counter 4 Output Compare C - SET */


/* Timer/Counter 4 Output Compare B */
#define PORT_TC4B_CLEAR_gc (0x00) /* Timer/Counter 4 Output Compare B - CLEAR */
#define PORT_TC4B_SET_gc   (0x02) /* Timer/Counter 4 Output Compare B - SET */


/* Timer/Counter 4 Output Compare A */
#define PORT_TC4A_CLEAR_gc (0x00) /* Timer/Counter 4 Output Compare A - CLEAR */
#define PORT_TC4A_SET_gc   (0x01) /* Timer/Counter 4 Output Compare A - SET */


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
#define PORT_ISC_FORCE_ENABLE_gc  (0x06) /* Digital Input Buffer Forced Enable */
#define PORT_ISC_INPUT_DISABLE_gc (0x07) /* Disable Digital Input Buffer */


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
/* PORT_ISC_FORCE_ENABLE_gc ALREADY DEFINED */
/* PORT_ISC_INPUT_DISABLE_gc ALREADY DEFINED */


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
/* PORT_ISC_FORCE_ENABLE_gc ALREADY DEFINED */
/* PORT_ISC_INPUT_DISABLE_gc ALREADY DEFINED */


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
/* PORT_ISC_FORCE_ENABLE_gc ALREADY DEFINED */
/* PORT_ISC_INPUT_DISABLE_gc ALREADY DEFINED */


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
/* PORT_ISC_FORCE_ENABLE_gc ALREADY DEFINED */
/* PORT_ISC_INPUT_DISABLE_gc ALREADY DEFINED */


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
/* PORT_ISC_FORCE_ENABLE_gc ALREADY DEFINED */
/* PORT_ISC_INPUT_DISABLE_gc ALREADY DEFINED */


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
/* PORT_ISC_FORCE_ENABLE_gc ALREADY DEFINED */
/* PORT_ISC_INPUT_DISABLE_gc ALREADY DEFINED */


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
/* PORT_ISC_FORCE_ENABLE_gc ALREADY DEFINED */
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


/* Synchronization Enabled */
#define TC4_SYNCHEN_CLEAR_gc (0x00) /* Synchronization Enabled - CLEAR */
#define TC4_SYNCHEN_SET_gc   (0x40) /* Synchronization Enabled - SET */


/* Start on Next Event */
#define TC4_EVSTART_CLEAR_gc (0x00) /* Start on Next Event - CLEAR */
#define TC4_EVSTART_SET_gc   (0x20) /* Start on Next Event - SET */


/* Stop on Next Update */
#define TC4_UPSTOP_CLEAR_gc (0x00) /* Stop on Next Update - CLEAR */
#define TC4_UPSTOP_SET_gc   (0x10) /* Stop on Next Update - SET */


/* Clock Select */
#define TC4_CLKSEL_OFF_gc     (0x00) /* Timer Off */
#define TC4_CLKSEL_DIV1_gc    (0x01) /* System Clock */
#define TC4_CLKSEL_DIV2_gc    (0x02) /* System Clock / 2 */
#define TC4_CLKSEL_DIV4_gc    (0x03) /* System Clock / 4 */
#define TC4_CLKSEL_DIV8_gc    (0x04) /* System Clock / 8 */
#define TC4_CLKSEL_DIV64_gc   (0x05) /* System Clock / 64 */
#define TC4_CLKSEL_DIV256_gc  (0x06) /* System Clock / 256 */
#define TC4_CLKSEL_DIV1024_gc (0x07) /* System Clock / 1024 */
#define TC4_CLKSEL_EVCH0_gc   (0x08) /* Event Channel 0 */
#define TC4_CLKSEL_EVCH1_gc   (0x09) /* Event Channel 1 */
#define TC4_CLKSEL_EVCH2_gc   (0x0A) /* Event Channel 2 */
#define TC4_CLKSEL_EVCH3_gc   (0x0B) /* Event Channel 3 */
#define TC4_CLKSEL_EVCH4_gc   (0x0C) /* Event Channel 4 */
#define TC4_CLKSEL_EVCH5_gc   (0x0D) /* Event Channel 5 */
#define TC4_CLKSEL_EVCH6_gc   (0x0E) /* Event Channel 6 */
#define TC4_CLKSEL_EVCH7_gc   (0x0F) /* Event Channel 7 */


/* Byte Mode */
#define TC4_BYTEM_NORMAL_gc   (0x00<<6) /* 16-bit mode */
#define TC4_BYTEM_BYTEMODE_gc (0x01<<6) /* Timer/Counter Operating in Byte Mode Only */


/* Circular Buffer Enable */
#define TC4_CIRCEN_DISABLE_gc (0x00<<4) /* Circular Buffer Disabled */
#define TC4_CIRCEN_PER_gc     (0x01<<4) /* Circular Buffer Enabled on PER/PERBUF */
#define TC4_CIRCEN_CCA_gc     (0x02<<4) /* Circular Buffer Enabled on CCA/CCABUF */
#define TC4_CIRCEN_BOTH_gc    (0x03<<4) /* Circular Buffer Enabled on All Buffered Registers */


/* Waveform Generation Mode */
#define TC4_WGMODE_NORMAL_gc      (0x00) /* Normal Mode */
#define TC4_WGMODE_FRQ_gc         (0x01) /* Frequency Generation Mode */
#define TC4_WGMODE_SINGLESLOPE_gc (0x03) /* Single Slope */
#define TC4_WGMODE_DSTOP_gc       (0x05) /* Dual Slope, Update on TOP */
#define TC4_WGMODE_DSBOTH_gc      (0x06) /* Dual Slope, Both */
#define TC4_WGMODE_DSBOTTOM_gc    (0x07) /* Dual Slope, Update on BOTTOM */


/* Channel D Output Polarity */
#define TC4_POLD_CLEAR_gc (0x00) /* Channel D Output Polarity - CLEAR */
#define TC4_POLD_SET_gc   (0x80) /* Channel D Output Polarity - SET */


/* Channel C Output Polarity */
#define TC4_POLC_CLEAR_gc (0x00) /* Channel C Output Polarity - CLEAR */
#define TC4_POLC_SET_gc   (0x40) /* Channel C Output Polarity - SET */


/* Channel B Output Polarity */
#define TC4_POLB_CLEAR_gc (0x00) /* Channel B Output Polarity - CLEAR */
#define TC4_POLB_SET_gc   (0x20) /* Channel B Output Polarity - SET */


/* Channel A Output Polarity */
#define TC4_POLA_CLEAR_gc (0x00) /* Channel A Output Polarity - CLEAR */
#define TC4_POLA_SET_gc   (0x10) /* Channel A Output Polarity - SET */


/* Channel D Compare Output Value */
#define TC4_CMPD_CLEAR_gc (0x00) /* Channel D Compare Output Value - CLEAR */
#define TC4_CMPD_SET_gc   (0x08) /* Channel D Compare Output Value - SET */


/* Channel C Compare Output Value */
#define TC4_CMPC_CLEAR_gc (0x00) /* Channel C Compare Output Value - CLEAR */
#define TC4_CMPC_SET_gc   (0x04) /* Channel C Compare Output Value - SET */


/* Channel B Compare Output Value */
#define TC4_CMPB_CLEAR_gc (0x00) /* Channel B Compare Output Value - CLEAR */
#define TC4_CMPB_SET_gc   (0x02) /* Channel B Compare Output Value - SET */


/* Channel A Compare Output Value */
#define TC4_CMPA_CLEAR_gc (0x00) /* Channel A Compare Output Value - CLEAR */
#define TC4_CMPA_SET_gc   (0x01) /* Channel A Compare Output Value - SET */


/* High Channel D Compare Output Value */
#define TC4_HCMPD_CLEAR_gc (0x00) /* High Channel D Compare Output Value - CLEAR */
#define TC4_HCMPD_SET_gc   (0x80) /* High Channel D Compare Output Value - SET */


/* High Channel C Compare Output Value */
#define TC4_HCMPC_CLEAR_gc (0x00) /* High Channel C Compare Output Value - CLEAR */
#define TC4_HCMPC_SET_gc   (0x40) /* High Channel C Compare Output Value - SET */


/* High Channel B Compare Output Value */
#define TC4_HCMPB_CLEAR_gc (0x00) /* High Channel B Compare Output Value - CLEAR */
#define TC4_HCMPB_SET_gc   (0x20) /* High Channel B Compare Output Value - SET */


/* High Channel A Compare Output Value */
#define TC4_HCMPA_CLEAR_gc (0x00) /* High Channel A Compare Output Value - CLEAR */
#define TC4_HCMPA_SET_gc   (0x10) /* High Channel A Compare Output Value - SET */


/* Low Channel D Compare Output Value */
#define TC4_LCMPD_CLEAR_gc (0x00) /* Low Channel D Compare Output Value - CLEAR */
#define TC4_LCMPD_SET_gc   (0x08) /* Low Channel D Compare Output Value - SET */


/* Low Channel C Compare Output Value */
#define TC4_LCMPC_CLEAR_gc (0x00) /* Low Channel C Compare Output Value - CLEAR */
#define TC4_LCMPC_SET_gc   (0x04) /* Low Channel C Compare Output Value - SET */


/* Low Channel B Compare Output Value */
#define TC4_LCMPB_CLEAR_gc (0x00) /* Low Channel B Compare Output Value - CLEAR */
#define TC4_LCMPB_SET_gc   (0x02) /* Low Channel B Compare Output Value - SET */


/* Low Channel A Compare Output Value */
#define TC4_LCMPA_CLEAR_gc (0x00) /* Low Channel A Compare Output Value - CLEAR */
#define TC4_LCMPA_SET_gc   (0x01) /* Low Channel A Compare Output Value - SET */


/* Event Action */
#define TC4_EVACT_OFF_gc     (0x00<<5) /* No Event Action */
#define TC4_EVACT_FMODE1_gc  (0x01<<5) /* Fault Mode 1 capture */
#define TC4_EVACT_FMODE2_gc  (0x02<<5) /* Fault Mode 2 capture */
#define TC4_EVACT_UPDOWN_gc  (0x03<<5) /* Up/down count */
#define TC4_EVACT_QDEC_gc    (0x04<<5) /* Quadrature decode */
#define TC4_EVACT_RESTART_gc (0x05<<5) /* Restart */
#define TC4_EVACT_PWF_gc     (0x06<<5) /* Pulse-width Capture */


/* Event Delay */
#define TC4_EVDLY_CLEAR_gc (0x00) /* Event Delay - CLEAR */
#define TC4_EVDLY_SET_gc   (0x10) /* Event Delay - SET */


/* Event Source Select */
#define TC4_EVSEL_OFF_gc (0x00) /* No Event Source */
#define TC4_EVSEL_CH0_gc (0x08) /* Event Channel 0 */
#define TC4_EVSEL_CH1_gc (0x09) /* Event Channel 1 */
#define TC4_EVSEL_CH2_gc (0x0A) /* Event Channel 2 */
#define TC4_EVSEL_CH3_gc (0x0B) /* Event Channel 3 */
#define TC4_EVSEL_CH4_gc (0x0C) /* Event Channel 4 */
#define TC4_EVSEL_CH5_gc (0x0D) /* Event Channel 5 */
#define TC4_EVSEL_CH6_gc (0x0E) /* Event Channel 6 */
#define TC4_EVSEL_CH7_gc (0x0F) /* Event Channel 7 */


/* Channel D Compare or Capture Mode */
#define TC4_CCDMODE_DISABLE_gc (0x00<<6) /* Channel Disabled */
#define TC4_CCDMODE_COMP_gc    (0x01<<6) /* Output Compare enabled */
#define TC4_CCDMODE_CAPT_gc    (0x02<<6) /* Input Capture enabled */
#define TC4_CCDMODE_BOTHCC_gc  (0x03<<6) /* Both Compare and Capture enabled */


/* Channel C Compare or Capture Mode */
#define TC4_CCCMODE_DISABLE_gc (0x00<<4) /* Channel Disabled */
#define TC4_CCCMODE_COMP_gc    (0x01<<4) /* Output Compare enabled */
#define TC4_CCCMODE_CAPT_gc    (0x02<<4) /* Input Capture enabled */
#define TC4_CCCMODE_BOTHCC_gc  (0x03<<4) /* Both Compare and Capture enabled */


/* Channel B Compare or Capture Mode */
#define TC4_CCBMODE_DISABLE_gc (0x00<<2) /* Channel Disabled */
#define TC4_CCBMODE_COMP_gc    (0x01<<2) /* Output Compare enabled */
#define TC4_CCBMODE_CAPT_gc    (0x02<<2) /* Input Capture enabled */
#define TC4_CCBMODE_BOTHCC_gc  (0x03<<2) /* Both Compare and Capture enabled */


/* Channel A Compare or Capture Mode */
#define TC4_CCAMODE_DISABLE_gc (0x00) /* Channel Disabled */
#define TC4_CCAMODE_COMP_gc    (0x01) /* Output Compare enabled */
#define TC4_CCAMODE_CAPT_gc    (0x02) /* Input Capture enabled */
#define TC4_CCAMODE_BOTHCC_gc  (0x03) /* Both Compare and Capture enabled */


/* Channel Low D Compare or Capture Mode */
#define TC4_LCCDMODE_DISABLE_gc (0x00<<6) /* Channel Disabled */
#define TC4_LCCDMODE_COMP_gc    (0x01<<6) /* Output Compare enabled */
#define TC4_LCCDMODE_CAPT_gc    (0x02<<6) /* Input Capture enabled */
#define TC4_LCCDMODE_BOTHCC_gc  (0x03<<6) /* Both Compare and Capture enabled */


/* Channel Low C Compare or Capture Mode */
#define TC4_LCCCMODE_DISABLE_gc (0x00<<4) /* Channel Disabled */
#define TC4_LCCCMODE_COMP_gc    (0x01<<4) /* Output Compare enabled */
#define TC4_LCCCMODE_CAPT_gc    (0x02<<4) /* Input Capture enabled */
#define TC4_LCCCMODE_BOTHCC_gc  (0x03<<4) /* Both Compare and Capture enabled */


/* Channel Low B Compare or Capture Mode */
#define TC4_LCCBMODE_DISABLE_gc (0x00<<2) /* Channel Disabled */
#define TC4_LCCBMODE_COMP_gc    (0x01<<2) /* Output Compare enabled */
#define TC4_LCCBMODE_CAPT_gc    (0x02<<2) /* Input Capture enabled */
#define TC4_LCCBMODE_BOTHCC_gc  (0x03<<2) /* Both Compare and Capture enabled */


/* Channel Low A Compare or Capture Mode */
#define TC4_LCCAMODE_DISABLE_gc (0x00) /* Channel Disabled */
#define TC4_LCCAMODE_COMP_gc    (0x01) /* Output Compare enabled */
#define TC4_LCCAMODE_CAPT_gc    (0x02) /* Input Capture enabled */
#define TC4_LCCAMODE_BOTHCC_gc  (0x03) /* Both Compare and Capture enabled */


/* Channel High D Compare or Capture Mode */
#define TC4_HCCDMODE_DISABLE_gc (0x00<<6) /* Channel Disabled */
#define TC4_HCCDMODE_COMP_gc    (0x01<<6) /* Output Compare enabled */
#define TC4_HCCDMODE_CAPT_gc    (0x02<<6) /* Input Capture enabled */
#define TC4_HCCDMODE_BOTHCC_gc  (0x03<<6) /* Both Compare and Capture enabled */


/* Channel High C Compare or Capture Mode */
#define TC4_HCCCMODE_DISABLE_gc (0x00<<4) /* Channel Disabled */
#define TC4_HCCCMODE_COMP_gc    (0x01<<4) /* Output Compare enabled */
#define TC4_HCCCMODE_CAPT_gc    (0x02<<4) /* Input Capture enabled */
#define TC4_HCCCMODE_BOTHCC_gc  (0x03<<4) /* Both Compare and Capture enabled */


/* Channel High B Compare or Capture Mode */
#define TC4_HCCBMODE_DISABLE_gc (0x00<<2) /* Channel Disabled */
#define TC4_HCCBMODE_COMP_gc    (0x01<<2) /* Output Compare enabled */
#define TC4_HCCBMODE_CAPT_gc    (0x02<<2) /* Input Capture enabled */
#define TC4_HCCBMODE_BOTHCC_gc  (0x03<<2) /* Both Compare and Capture enabled */


/* Channel High A Compare or Capture Mode */
#define TC4_HCCAMODE_DISABLE_gc (0x00) /* Channel Disabled */
#define TC4_HCCAMODE_COMP_gc    (0x01) /* Output Compare enabled */
#define TC4_HCCAMODE_CAPT_gc    (0x02) /* Input Capture enabled */
#define TC4_HCCAMODE_BOTHCC_gc  (0x03) /* Both Compare and Capture enabled */


/* Timer Trigger Restart Interrupt Level */
#define TC4_TRGINTLVL_OFF_gc (0x00<<4) /* Interrupt Disabled */
#define TC4_TRGINTLVL_LO_gc  (0x01<<4) /* Low Level */
#define TC4_TRGINTLVL_MED_gc (0x02<<4) /* Medium Level */
#define TC4_TRGINTLVL_HI_gc  (0x03<<4) /* High Level */


/* Timer Error Interrupt Level */
#define TC4_ERRINTLVL_OFF_gc (0x00<<2) /* Interrupt Disabled */
#define TC4_ERRINTLVL_LO_gc  (0x01<<2) /* Low Level */
#define TC4_ERRINTLVL_MED_gc (0x02<<2) /* Medium Level */
#define TC4_ERRINTLVL_HI_gc  (0x03<<2) /* High Level */


/* Timer Overflow/Underflow Interrupt Level */
#define TC4_OVFINTLVL_OFF_gc (0x00) /* Interrupt Disabled */
#define TC4_OVFINTLVL_LO_gc  (0x01) /* Low Level */
#define TC4_OVFINTLVL_MED_gc (0x02) /* Medium Level */
#define TC4_OVFINTLVL_HI_gc  (0x03) /* High Level */


/* Channel D Compare or Capture Interrupt Level */
#define TC4_CCDINTLVL_OFF_gc (0x00<<6) /* Interrupt Disabled */
#define TC4_CCDINTLVL_LO_gc  (0x01<<6) /* Low Level */
#define TC4_CCDINTLVL_MED_gc (0x02<<6) /* Medium Level */
#define TC4_CCDINTLVL_HI_gc  (0x03<<6) /* High Level */


/* Channel C Compare or Capture Interrupt Level */
#define TC4_CCCINTLVL_OFF_gc (0x00<<4) /* Interrupt Disabled */
#define TC4_CCCINTLVL_LO_gc  (0x01<<4) /* Low Level */
#define TC4_CCCINTLVL_MED_gc (0x02<<4) /* Medium Level */
#define TC4_CCCINTLVL_HI_gc  (0x03<<4) /* High Level */


/* Channel B Compare or Capture Interrupt Level */
#define TC4_CCBINTLVL_OFF_gc (0x00<<2) /* Interrupt Disabled */
#define TC4_CCBINTLVL_LO_gc  (0x01<<2) /* Low Level */
#define TC4_CCBINTLVL_MED_gc (0x02<<2) /* Medium Level */
#define TC4_CCBINTLVL_HI_gc  (0x03<<2) /* High Level */


/* Channel A Compare or Capture Interrupt Level */
#define TC4_CCAINTLVL_OFF_gc (0x00) /* Interrupt Disabled */
#define TC4_CCAINTLVL_LO_gc  (0x01) /* Low Level */
#define TC4_CCAINTLVL_MED_gc (0x02) /* Medium Level */
#define TC4_CCAINTLVL_HI_gc  (0x03) /* High Level */


/* Channel Low D Compare or Capture Interrupt Level */
#define TC4_LCCDINTLVL_OFF_gc (0x00<<6) /* Interrupt Disabled */
#define TC4_LCCDINTLVL_LO_gc  (0x01<<6) /* Low Level */
#define TC4_LCCDINTLVL_MED_gc (0x02<<6) /* Medium Level */
#define TC4_LCCDINTLVL_HI_gc  (0x03<<6) /* High Level */


/* Channel Low C Compare or Capture Interrupt Level */
#define TC4_LCCCINTLVL_OFF_gc (0x00<<4) /* Interrupt Disabled */
#define TC4_LCCCINTLVL_LO_gc  (0x01<<4) /* Low Level */
#define TC4_LCCCINTLVL_MED_gc (0x02<<4) /* Medium Level */
#define TC4_LCCCINTLVL_HI_gc  (0x03<<4) /* High Level */


/* Channel Low B Compare or Capture Interrupt Level */
#define TC4_LCCBINTLVL_OFF_gc (0x00<<2) /* Interrupt Disabled */
#define TC4_LCCBINTLVL_LO_gc  (0x01<<2) /* Low Level */
#define TC4_LCCBINTLVL_MED_gc (0x02<<2) /* Medium Level */
#define TC4_LCCBINTLVL_HI_gc  (0x03<<2) /* High Level */


/* Channel Low A Compare or Capture Interrupt Level */
#define TC4_LCCAINTLVL_OFF_gc (0x00) /* Interrupt Disabled */
#define TC4_LCCAINTLVL_LO_gc  (0x01) /* Low Level */
#define TC4_LCCAINTLVL_MED_gc (0x02) /* Medium Level */
#define TC4_LCCAINTLVL_HI_gc  (0x03) /* High Level */


/* Timer/Counter Stop */
#define TC4_STOP_CLEAR_gc (0x00) /* Timer/Counter Stop - CLEAR */
#define TC4_STOP_SET_gc   (0x20) /* Timer/Counter Stop - SET */


/* Command */
#define TC4_CMD_NONE_gc    (0x00<<2) /* No Command */
#define TC4_CMD_UPDATE_gc  (0x01<<2) /* Force Update */
#define TC4_CMD_RESTART_gc (0x02<<2) /* Force Restart */
#define TC4_CMD_RESET_gc   (0x03<<2) /* Force Hard Reset */


/* Lock Update */
#define TC4_LUPD_CLEAR_gc (0x00) /* Lock Update - CLEAR */
#define TC4_LUPD_SET_gc   (0x02) /* Lock Update - SET */


/* Counter Direction */
#define TC4_DIR_CLEAR_gc (0x00) /* Counter Direction - CLEAR */
#define TC4_DIR_SET_gc   (0x01) /* Counter Direction - SET */


/* Timer/Counter Stop */
/* TC4_STOP_CLEAR_gc ALREADY DEFINED */
/* TC4_STOP_SET_gc ALREADY DEFINED */


/* Command */
/* TC4_CMD_NONE_gc ALREADY DEFINED */
/* TC4_CMD_UPDATE_gc ALREADY DEFINED */
/* TC4_CMD_RESTART_gc ALREADY DEFINED */
/* TC4_CMD_RESET_gc ALREADY DEFINED */


/* Lock Update */
/* TC4_LUPD_CLEAR_gc ALREADY DEFINED */
/* TC4_LUPD_SET_gc ALREADY DEFINED */


/* Counter Direction */
/* TC4_DIR_CLEAR_gc ALREADY DEFINED */
/* TC4_DIR_SET_gc ALREADY DEFINED */


/* Channel D Compare or Capture Buffer Valid */
#define TC4_CCDBV_CLEAR_gc (0x00) /* Channel D Compare or Capture Buffer Valid - CLEAR */
#define TC4_CCDBV_SET_gc   (0x10) /* Channel D Compare or Capture Buffer Valid - SET */


/* Channel C Compare or Capture Buffer Valid */
#define TC4_CCCBV_CLEAR_gc (0x00) /* Channel C Compare or Capture Buffer Valid - CLEAR */
#define TC4_CCCBV_SET_gc   (0x08) /* Channel C Compare or Capture Buffer Valid - SET */


/* Channel B Compare or Capture Buffer Valid */
#define TC4_CCBBV_CLEAR_gc (0x00) /* Channel B Compare or Capture Buffer Valid - CLEAR */
#define TC4_CCBBV_SET_gc   (0x04) /* Channel B Compare or Capture Buffer Valid - SET */


/* Channel A Compare or Capture Buffer Valid */
#define TC4_CCABV_CLEAR_gc (0x00) /* Channel A Compare or Capture Buffer Valid - CLEAR */
#define TC4_CCABV_SET_gc   (0x02) /* Channel A Compare or Capture Buffer Valid - SET */


/* Period Buffer Valid */
#define TC4_PERBV_CLEAR_gc (0x00) /* Period Buffer Valid - CLEAR */
#define TC4_PERBV_SET_gc   (0x01) /* Period Buffer Valid - SET */


/* Channel Low D Compare or Capture Buffer Valid */
#define TC4_LCCDBV_CLEAR_gc (0x00) /* Channel Low D Compare or Capture Buffer Valid - CLEAR */
#define TC4_LCCDBV_SET_gc   (0x10) /* Channel Low D Compare or Capture Buffer Valid - SET */


/* Channel Low C Compare or Capture Buffer Valid */
#define TC4_LCCCBV_CLEAR_gc (0x00) /* Channel Low C Compare or Capture Buffer Valid - CLEAR */
#define TC4_LCCCBV_SET_gc   (0x08) /* Channel Low C Compare or Capture Buffer Valid - SET */


/* Channel Low B Compare or Capture Buffer Valid */
#define TC4_LCCBBV_CLEAR_gc (0x00) /* Channel Low B Compare or Capture Buffer Valid - CLEAR */
#define TC4_LCCBBV_SET_gc   (0x04) /* Channel Low B Compare or Capture Buffer Valid - SET */


/* Channel Low A Compare or Capture Buffer Valid */
#define TC4_LCCABV_CLEAR_gc (0x00) /* Channel Low A Compare or Capture Buffer Valid - CLEAR */
#define TC4_LCCABV_SET_gc   (0x02) /* Channel Low A Compare or Capture Buffer Valid - SET */


/* Period Low Buffer Valid */
#define TC4_LPERBV_CLEAR_gc (0x00) /* Period Low Buffer Valid - CLEAR */
#define TC4_LPERBV_SET_gc   (0x01) /* Period Low Buffer Valid - SET */


/* Channel D Compare or Capture Buffer Valid */
/* TC4_CCDBV_CLEAR_gc ALREADY DEFINED */
/* TC4_CCDBV_SET_gc ALREADY DEFINED */


/* Channel C Compare or Capture Buffer Valid */
/* TC4_CCCBV_CLEAR_gc ALREADY DEFINED */
/* TC4_CCCBV_SET_gc ALREADY DEFINED */


/* Channel B Compare or Capture Buffer Valid */
/* TC4_CCBBV_CLEAR_gc ALREADY DEFINED */
/* TC4_CCBBV_SET_gc ALREADY DEFINED */


/* Channel A Compare or Capture Buffer Valid */
/* TC4_CCABV_CLEAR_gc ALREADY DEFINED */
/* TC4_CCABV_SET_gc ALREADY DEFINED */


/* Period Buffer Valid */
/* TC4_PERBV_CLEAR_gc ALREADY DEFINED */
/* TC4_PERBV_SET_gc ALREADY DEFINED */


/* Channel Low D Compare or Capture Buffer Valid */
/* TC4_LCCDBV_CLEAR_gc ALREADY DEFINED */
/* TC4_LCCDBV_SET_gc ALREADY DEFINED */


/* Channel Low C Compare or Capture Buffer Valid */
/* TC4_LCCCBV_CLEAR_gc ALREADY DEFINED */
/* TC4_LCCCBV_SET_gc ALREADY DEFINED */


/* Channel Low B Compare or Capture Buffer Valid */
/* TC4_LCCBBV_CLEAR_gc ALREADY DEFINED */
/* TC4_LCCBBV_SET_gc ALREADY DEFINED */


/* Channel Low A Compare or Capture Buffer Valid */
/* TC4_LCCABV_CLEAR_gc ALREADY DEFINED */
/* TC4_LCCABV_SET_gc ALREADY DEFINED */


/* Period Low Buffer Valid */
/* TC4_LPERBV_CLEAR_gc ALREADY DEFINED */
/* TC4_LPERBV_SET_gc ALREADY DEFINED */


/* Channel D Compare or Capture Interrupt Flag */
#define TC4_CCDIF_CLEAR_gc (0x00) /* Channel D Compare or Capture Interrupt Flag - CLEAR */
#define TC4_CCDIF_SET_gc   (0x80) /* Channel D Compare or Capture Interrupt Flag - SET */


/* Channel C Compare or Capture Interrupt Flag */
#define TC4_CCCIF_CLEAR_gc (0x00) /* Channel C Compare or Capture Interrupt Flag - CLEAR */
#define TC4_CCCIF_SET_gc   (0x40) /* Channel C Compare or Capture Interrupt Flag - SET */


/* Channel B Compare or Capture Interrupt Flag */
#define TC4_CCBIF_CLEAR_gc (0x00) /* Channel B Compare or Capture Interrupt Flag - CLEAR */
#define TC4_CCBIF_SET_gc   (0x20) /* Channel B Compare or Capture Interrupt Flag - SET */


/* Channel A Compare or Capture Interrupt Flag */
#define TC4_CCAIF_CLEAR_gc (0x00) /* Channel A Compare or Capture Interrupt Flag - CLEAR */
#define TC4_CCAIF_SET_gc   (0x10) /* Channel A Compare or Capture Interrupt Flag - SET */


/* Trigger Restart Interrupt Flag */
#define TC4_TRGIF_CLEAR_gc (0x00) /* Trigger Restart Interrupt Flag - CLEAR */
#define TC4_TRGIF_SET_gc   (0x04) /* Trigger Restart Interrupt Flag - SET */


/* Error Interrupt Flag */
#define TC4_ERRIF_CLEAR_gc (0x00) /* Error Interrupt Flag - CLEAR */
#define TC4_ERRIF_SET_gc   (0x02) /* Error Interrupt Flag - SET */


/* Overflow/Underflow Interrupt Flag */
#define TC4_OVFIF_CLEAR_gc (0x00) /* Overflow/Underflow Interrupt Flag - CLEAR */
#define TC4_OVFIF_SET_gc   (0x01) /* Overflow/Underflow Interrupt Flag - SET */


/* Channel Low D Compare or Capture Interrupt Flag */
#define TC4_LCCDIF_CLEAR_gc (0x00) /* Channel Low D Compare or Capture Interrupt Flag - CLEAR */
#define TC4_LCCDIF_SET_gc   (0x80) /* Channel Low D Compare or Capture Interrupt Flag - SET */


/* Channel Low C Compare or Capture Interrupt Flag */
#define TC4_LCCCIF_CLEAR_gc (0x00) /* Channel Low C Compare or Capture Interrupt Flag - CLEAR */
#define TC4_LCCCIF_SET_gc   (0x40) /* Channel Low C Compare or Capture Interrupt Flag - SET */


/* Channel Low B Compare or Capture Interrupt Flag */
#define TC4_LCCBIF_CLEAR_gc (0x00) /* Channel Low B Compare or Capture Interrupt Flag - CLEAR */
#define TC4_LCCBIF_SET_gc   (0x20) /* Channel Low B Compare or Capture Interrupt Flag - SET */


/* Channel Low A Compare or Capture Interrupt Flag */
#define TC4_LCCAIF_CLEAR_gc (0x00) /* Channel Low A Compare or Capture Interrupt Flag - CLEAR */
#define TC4_LCCAIF_SET_gc   (0x10) /* Channel Low A Compare or Capture Interrupt Flag - SET */


/* Synchronization Enabled */
#define TC5_SYNCHEN_CLEAR_gc (0x00) /* Synchronization Enabled - CLEAR */
#define TC5_SYNCHEN_SET_gc   (0x40) /* Synchronization Enabled - SET */


/* Start on Next Event */
#define TC5_EVSTART_CLEAR_gc (0x00) /* Start on Next Event - CLEAR */
#define TC5_EVSTART_SET_gc   (0x20) /* Start on Next Event - SET */


/* Stop on Next Update */
#define TC5_UPSTOP_CLEAR_gc (0x00) /* Stop on Next Update - CLEAR */
#define TC5_UPSTOP_SET_gc   (0x10) /* Stop on Next Update - SET */


/* Clock Select */
#define TC5_CLKSEL_OFF_gc     (0x00) /* Timer Off */
#define TC5_CLKSEL_DIV1_gc    (0x01) /* System Clock */
#define TC5_CLKSEL_DIV2_gc    (0x02) /* System Clock / 2 */
#define TC5_CLKSEL_DIV4_gc    (0x03) /* System Clock / 4 */
#define TC5_CLKSEL_DIV8_gc    (0x04) /* System Clock / 8 */
#define TC5_CLKSEL_DIV64_gc   (0x05) /* System Clock / 64 */
#define TC5_CLKSEL_DIV256_gc  (0x06) /* System Clock / 256 */
#define TC5_CLKSEL_DIV1024_gc (0x07) /* System Clock / 1024 */
#define TC5_CLKSEL_EVCH0_gc   (0x08) /* Event Channel 0 */
#define TC5_CLKSEL_EVCH1_gc   (0x09) /* Event Channel 1 */
#define TC5_CLKSEL_EVCH2_gc   (0x0A) /* Event Channel 2 */
#define TC5_CLKSEL_EVCH3_gc   (0x0B) /* Event Channel 3 */
#define TC5_CLKSEL_EVCH4_gc   (0x0C) /* Event Channel 4 */
#define TC5_CLKSEL_EVCH5_gc   (0x0D) /* Event Channel 5 */
#define TC5_CLKSEL_EVCH6_gc   (0x0E) /* Event Channel 6 */
#define TC5_CLKSEL_EVCH7_gc   (0x0F) /* Event Channel 7 */


/* Byte Mode */
#define TC5_BYTEM_NORMAL_gc   (0x00<<6) /* 16-bit mode */
#define TC5_BYTEM_BYTEMODE_gc (0x01<<6) /* Timer/Counter Operating in Byte Mode Only */


/* Circular Buffer Enable */
#define TC5_CIRCEN_DISABLE_gc (0x00<<4) /* Circular Buffer Disabled */
#define TC5_CIRCEN_PER_gc     (0x01<<4) /* Circular Buffer Enabled on PER/PERBUF */
#define TC5_CIRCEN_CCA_gc     (0x02<<4) /* Circular Buffer Enabled on CCA/CCABUF */
#define TC5_CIRCEN_BOTH_gc    (0x03<<4) /* Circular Buffer Enabled on All Buffered Registers */


/* Waveform Generation Mode */
#define TC5_WGMODE_NORMAL_gc      (0x00) /* Normal Mode */
#define TC5_WGMODE_FRQ_gc         (0x01) /* Frequency Generation Mode */
#define TC5_WGMODE_SINGLESLOPE_gc (0x03) /* Single Slope */
#define TC5_WGMODE_DSTOP_gc       (0x05) /* Dual Slope, Update on TOP */
#define TC5_WGMODE_DSBOTH_gc      (0x06) /* Dual Slope, Both */
#define TC5_WGMODE_DSBOTTOM_gc    (0x07) /* Dual Slope, Update on BOTTOM */


/* Channel B Output Polarity */
#define TC5_POLB_CLEAR_gc (0x00) /* Channel B Output Polarity - CLEAR */
#define TC5_POLB_SET_gc   (0x20) /* Channel B Output Polarity - SET */


/* Channel A Output Polarity */
#define TC5_POLA_CLEAR_gc (0x00) /* Channel A Output Polarity - CLEAR */
#define TC5_POLA_SET_gc   (0x10) /* Channel A Output Polarity - SET */


/* Channel B Compare Output Value */
#define TC5_CMPB_CLEAR_gc (0x00) /* Channel B Compare Output Value - CLEAR */
#define TC5_CMPB_SET_gc   (0x02) /* Channel B Compare Output Value - SET */


/* Channel A Compare Output Value */
#define TC5_CMPA_CLEAR_gc (0x00) /* Channel A Compare Output Value - CLEAR */
#define TC5_CMPA_SET_gc   (0x01) /* Channel A Compare Output Value - SET */


/* High Channel B Compare Output Value */
#define TC5_HCMPB_CLEAR_gc (0x00) /* High Channel B Compare Output Value - CLEAR */
#define TC5_HCMPB_SET_gc   (0x20) /* High Channel B Compare Output Value - SET */


/* High Channel A Compare Output Value */
#define TC5_HCMPA_CLEAR_gc (0x00) /* High Channel A Compare Output Value - CLEAR */
#define TC5_HCMPA_SET_gc   (0x10) /* High Channel A Compare Output Value - SET */


/* Low Channel B Compare Output Value */
#define TC5_LCMPB_CLEAR_gc (0x00) /* Low Channel B Compare Output Value - CLEAR */
#define TC5_LCMPB_SET_gc   (0x02) /* Low Channel B Compare Output Value - SET */


/* Low Channel A Compare Output Value */
#define TC5_LCMPA_CLEAR_gc (0x00) /* Low Channel A Compare Output Value - CLEAR */
#define TC5_LCMPA_SET_gc   (0x01) /* Low Channel A Compare Output Value - SET */


/* Event Action */
#define TC5_EVACT_OFF_gc     (0x00<<5) /* No Event Action */
#define TC5_EVACT_FMODE1_gc  (0x01<<5) /* Fault Mode 1 capture */
#define TC5_EVACT_FMODE2_gc  (0x02<<5) /* Fault Mode 2 capture */
#define TC5_EVACT_UPDOWN_gc  (0x03<<5) /* Up/down count */
#define TC5_EVACT_QDEC_gc    (0x04<<5) /* Quadrature decode */
#define TC5_EVACT_RESTART_gc (0x05<<5) /* Restart */
#define TC5_EVACT_PWF_gc     (0x06<<5) /* Pulse-width Capture */


/* Event Delay */
#define TC5_EVDLY_CLEAR_gc (0x00) /* Event Delay - CLEAR */
#define TC5_EVDLY_SET_gc   (0x10) /* Event Delay - SET */


/* Event Source Select */
#define TC5_EVSEL_OFF_gc (0x00) /* No Event Source */
#define TC5_EVSEL_CH0_gc (0x08) /* Event Channel 0 */
#define TC5_EVSEL_CH1_gc (0x09) /* Event Channel 1 */
#define TC5_EVSEL_CH2_gc (0x0A) /* Event Channel 2 */
#define TC5_EVSEL_CH3_gc (0x0B) /* Event Channel 3 */
#define TC5_EVSEL_CH4_gc (0x0C) /* Event Channel 4 */
#define TC5_EVSEL_CH5_gc (0x0D) /* Event Channel 5 */
#define TC5_EVSEL_CH6_gc (0x0E) /* Event Channel 6 */
#define TC5_EVSEL_CH7_gc (0x0F) /* Event Channel 7 */


/* Channel B Compare or Capture Mode */
#define TC5_CCBMODE_DISABLE_gc (0x00<<2) /* Channel Disabled */
#define TC5_CCBMODE_COMP_gc    (0x01<<2) /* Output Compare enabled */
#define TC5_CCBMODE_CAPT_gc    (0x02<<2) /* Input Capture enabled */
#define TC5_CCBMODE_BOTHCC_gc  (0x03<<2) /* Both Compare and Capture enabled */


/* Channel A Compare or Capture Mode */
#define TC5_CCAMODE_DISABLE_gc (0x00) /* Channel Disabled */
#define TC5_CCAMODE_COMP_gc    (0x01) /* Output Compare enabled */
#define TC5_CCAMODE_CAPT_gc    (0x02) /* Input Capture enabled */
#define TC5_CCAMODE_BOTHCC_gc  (0x03) /* Both Compare and Capture enabled */


/* Channel Low B Compare or Capture Mode */
#define TC5_LCCBMODE_DISABLE_gc (0x00<<2) /* Channel Disabled */
#define TC5_LCCBMODE_COMP_gc    (0x01<<2) /* Output Compare enabled */
#define TC5_LCCBMODE_CAPT_gc    (0x02<<2) /* Input Capture enabled */
#define TC5_LCCBMODE_BOTHCC_gc  (0x03<<2) /* Both Compare and Capture enabled */


/* Channel Low A Compare or Capture Mode */
#define TC5_LCCAMODE_DISABLE_gc (0x00) /* Channel Disabled */
#define TC5_LCCAMODE_COMP_gc    (0x01) /* Output Compare enabled */
#define TC5_LCCAMODE_CAPT_gc    (0x02) /* Input Capture enabled */
#define TC5_LCCAMODE_BOTHCC_gc  (0x03) /* Both Compare and Capture enabled */


/* Channel High B Compare or Capture Mode */
#define TC5_HCCBMODE_DISABLE_gc (0x00<<2) /* Channel Disabled */
#define TC5_HCCBMODE_COMP_gc    (0x01<<2) /* Output Compare enabled */
#define TC5_HCCBMODE_CAPT_gc    (0x02<<2) /* Input Capture enabled */
#define TC5_HCCBMODE_BOTHCC_gc  (0x03<<2) /* Both Compare and Capture enabled */


/* Channel High A Compare or Capture Mode */
#define TC5_HCCAMODE_DISABLE_gc (0x00) /* Channel Disabled */
#define TC5_HCCAMODE_COMP_gc    (0x01) /* Output Compare enabled */
#define TC5_HCCAMODE_CAPT_gc    (0x02) /* Input Capture enabled */
#define TC5_HCCAMODE_BOTHCC_gc  (0x03) /* Both Compare and Capture enabled */


/* Timer Trigger Restart Interrupt Level */
#define TC5_TRGINTLVL_OFF_gc (0x00<<4) /* Interrupt Disabled */
#define TC5_TRGINTLVL_LO_gc  (0x01<<4) /* Low Level */
#define TC5_TRGINTLVL_MED_gc (0x02<<4) /* Medium Level */
#define TC5_TRGINTLVL_HI_gc  (0x03<<4) /* High Level */


/* Timer Error Interrupt Level */
#define TC5_ERRINTLVL_OFF_gc (0x00<<2) /* Interrupt Disabled */
#define TC5_ERRINTLVL_LO_gc  (0x01<<2) /* Low Level */
#define TC5_ERRINTLVL_MED_gc (0x02<<2) /* Medium Level */
#define TC5_ERRINTLVL_HI_gc  (0x03<<2) /* High Level */


/* Timer Overflow/Underflow Interrupt Level */
#define TC5_OVFINTLVL_OFF_gc (0x00) /* Interrupt Disabled */
#define TC5_OVFINTLVL_LO_gc  (0x01) /* Low Level */
#define TC5_OVFINTLVL_MED_gc (0x02) /* Medium Level */
#define TC5_OVFINTLVL_HI_gc  (0x03) /* High Level */


/* Channel B Compare or Capture Interrupt Level */
#define TC5_CCBINTLVL_OFF_gc (0x00<<2) /* Interrupt Disabled */
#define TC5_CCBINTLVL_LO_gc  (0x01<<2) /* Low Level */
#define TC5_CCBINTLVL_MED_gc (0x02<<2) /* Medium Level */
#define TC5_CCBINTLVL_HI_gc  (0x03<<2) /* High Level */


/* Channel A Compare or Capture Interrupt Level */
#define TC5_CCAINTLVL_OFF_gc (0x00) /* Interrupt Disabled */
#define TC5_CCAINTLVL_LO_gc  (0x01) /* Low Level */
#define TC5_CCAINTLVL_MED_gc (0x02) /* Medium Level */
#define TC5_CCAINTLVL_HI_gc  (0x03) /* High Level */


/* Channel Low B Compare or Capture Interrupt Level */
#define TC5_LCCBINTLVL_OFF_gc (0x00<<2) /* Interrupt Disabled */
#define TC5_LCCBINTLVL_LO_gc  (0x01<<2) /* Low Level */
#define TC5_LCCBINTLVL_MED_gc (0x02<<2) /* Medium Level */
#define TC5_LCCBINTLVL_HI_gc  (0x03<<2) /* High Level */


/* Channel Low A Compare or Capture Interrupt Level */
#define TC5_LCCAINTLVL_OFF_gc (0x00) /* Interrupt Disabled */
#define TC5_LCCAINTLVL_LO_gc  (0x01) /* Low Level */
#define TC5_LCCAINTLVL_MED_gc (0x02) /* Medium Level */
#define TC5_LCCAINTLVL_HI_gc  (0x03) /* High Level */


/* Timer/Counter Stop */
#define TC5_STOP_CLEAR_gc (0x00) /* Timer/Counter Stop - CLEAR */
#define TC5_STOP_SET_gc   (0x20) /* Timer/Counter Stop - SET */


/* Command */
#define TC5_CMD_NONE_gc    (0x00<<2) /* No Command */
#define TC5_CMD_UPDATE_gc  (0x01<<2) /* Force Update */
#define TC5_CMD_RESTART_gc (0x02<<2) /* Force Restart */
#define TC5_CMD_RESET_gc   (0x03<<2) /* Force Hard Reset */


/* Lock Update */
#define TC5_LUPD_CLEAR_gc (0x00) /* Lock Update - CLEAR */
#define TC5_LUPD_SET_gc   (0x02) /* Lock Update - SET */


/* Counter Direction */
#define TC5_DIR_CLEAR_gc (0x00) /* Counter Direction - CLEAR */
#define TC5_DIR_SET_gc   (0x01) /* Counter Direction - SET */


/* Timer/Counter Stop */
/* TC5_STOP_CLEAR_gc ALREADY DEFINED */
/* WARNING: TC5_STOP_SET_gc ALREADY DEFINED as '(0x20)' NOT '(0x10)' */


/* Command */
/* TC5_CMD_NONE_gc ALREADY DEFINED */
/* TC5_CMD_UPDATE_gc ALREADY DEFINED */
/* TC5_CMD_RESTART_gc ALREADY DEFINED */
/* TC5_CMD_RESET_gc ALREADY DEFINED */


/* Lock Update */
/* TC5_LUPD_CLEAR_gc ALREADY DEFINED */
/* TC5_LUPD_SET_gc ALREADY DEFINED */


/* Counter Direction */
/* TC5_DIR_CLEAR_gc ALREADY DEFINED */
/* TC5_DIR_SET_gc ALREADY DEFINED */


/* Channel B Compare or Capture Buffer Valid */
#define TC5_CCBBV_CLEAR_gc (0x00) /* Channel B Compare or Capture Buffer Valid - CLEAR */
#define TC5_CCBBV_SET_gc   (0x04) /* Channel B Compare or Capture Buffer Valid - SET */


/* Channel A Compare or Capture Buffer Valid */
#define TC5_CCABV_CLEAR_gc (0x00) /* Channel A Compare or Capture Buffer Valid - CLEAR */
#define TC5_CCABV_SET_gc   (0x02) /* Channel A Compare or Capture Buffer Valid - SET */


/* Period Buffer Valid */
#define TC5_PERBV_CLEAR_gc (0x00) /* Period Buffer Valid - CLEAR */
#define TC5_PERBV_SET_gc   (0x01) /* Period Buffer Valid - SET */


/* Channel Low B Compare or Capture Buffer Valid */
#define TC5_LCCBBV_CLEAR_gc (0x00) /* Channel Low B Compare or Capture Buffer Valid - CLEAR */
#define TC5_LCCBBV_SET_gc   (0x04) /* Channel Low B Compare or Capture Buffer Valid - SET */


/* Channel Low A Compare or Capture Buffer Valid */
#define TC5_LCCABV_CLEAR_gc (0x00) /* Channel Low A Compare or Capture Buffer Valid - CLEAR */
#define TC5_LCCABV_SET_gc   (0x02) /* Channel Low A Compare or Capture Buffer Valid - SET */


/* Period Low Buffer Valid */
#define TC5_LPERBV_CLEAR_gc (0x00) /* Period Low Buffer Valid - CLEAR */
#define TC5_LPERBV_SET_gc   (0x01) /* Period Low Buffer Valid - SET */


/* Channel B Compare or Capture Buffer Valid */
/* TC5_CCBBV_CLEAR_gc ALREADY DEFINED */
/* TC5_CCBBV_SET_gc ALREADY DEFINED */


/* Channel A Compare or Capture Buffer Valid */
/* TC5_CCABV_CLEAR_gc ALREADY DEFINED */
/* TC5_CCABV_SET_gc ALREADY DEFINED */


/* Period Buffer Valid */
/* TC5_PERBV_CLEAR_gc ALREADY DEFINED */
/* TC5_PERBV_SET_gc ALREADY DEFINED */


/* Channel Low B Compare or Capture Buffer Valid */
/* TC5_LCCBBV_CLEAR_gc ALREADY DEFINED */
/* TC5_LCCBBV_SET_gc ALREADY DEFINED */


/* Channel Low A Compare or Capture Buffer Valid */
/* TC5_LCCABV_CLEAR_gc ALREADY DEFINED */
/* TC5_LCCABV_SET_gc ALREADY DEFINED */


/* Period Low Buffer Valid */
/* TC5_LPERBV_CLEAR_gc ALREADY DEFINED */
/* TC5_LPERBV_SET_gc ALREADY DEFINED */


/* Channel B Compare or Capture Interrupt Flag */
#define TC5_CCBIF_CLEAR_gc (0x00) /* Channel B Compare or Capture Interrupt Flag - CLEAR */
#define TC5_CCBIF_SET_gc   (0x20) /* Channel B Compare or Capture Interrupt Flag - SET */


/* Channel A Compare or Capture Interrupt Flag */
#define TC5_CCAIF_CLEAR_gc (0x00) /* Channel A Compare or Capture Interrupt Flag - CLEAR */
#define TC5_CCAIF_SET_gc   (0x10) /* Channel A Compare or Capture Interrupt Flag - SET */


/* Trigger Restart Interrupt Flag */
#define TC5_TRGIF_CLEAR_gc (0x00) /* Trigger Restart Interrupt Flag - CLEAR */
#define TC5_TRGIF_SET_gc   (0x04) /* Trigger Restart Interrupt Flag - SET */


/* Error Interrupt Flag */
#define TC5_ERRIF_CLEAR_gc (0x00) /* Error Interrupt Flag - CLEAR */
#define TC5_ERRIF_SET_gc   (0x02) /* Error Interrupt Flag - SET */


/* Overflow/Underflow Interrupt Flag */
#define TC5_OVFIF_CLEAR_gc (0x00) /* Overflow/Underflow Interrupt Flag - CLEAR */
#define TC5_OVFIF_SET_gc   (0x01) /* Overflow/Underflow Interrupt Flag - SET */


/* Channel Low B Compare or Capture Interrupt Flag */
#define TC5_LCCBIF_CLEAR_gc (0x00) /* Channel Low B Compare or Capture Interrupt Flag - CLEAR */
#define TC5_LCCBIF_SET_gc   (0x20) /* Channel Low B Compare or Capture Interrupt Flag - SET */


/* Channel Low A Compare or Capture Interrupt Flag */
#define TC5_LCCAIF_CLEAR_gc (0x00) /* Channel Low A Compare or Capture Interrupt Flag - CLEAR */
#define TC5_LCCAIF_SET_gc   (0x10) /* Channel Low A Compare or Capture Interrupt Flag - SET */


/*
--------------------------------------------------------------------------------
FAULT - Fault Extension
--------------------------------------------------------------------------------
*/


/* Ramp Mode Selection */
#define FAULT_RAMP_RAMP1_gc (0x00<<6) /* Normal Mode */
#define FAULT_RAMP_RAMP2_gc (0x02<<6) /* RAMP2 Mode */


/* Fault on Debug Break Detection */
#define FAULT_FDDBD_CLEAR_gc (0x00) /* Fault on Debug Break Detection - CLEAR */
#define FAULT_FDDBD_SET_gc   (0x20) /* Fault on Debug Break Detection - SET */


/* Port Control Mode */
#define FAULT_PORTCTRL_CLEAR_gc (0x00) /* Port Control Mode - CLEAR */
#define FAULT_PORTCTRL_SET_gc   (0x10) /* Port Control Mode - SET */


/* Fuse State  */
#define FAULT_FUSE_CLEAR_gc (0x00) /* Fuse State  - CLEAR */
#define FAULT_FUSE_SET_gc   (0x08) /* Fuse State  - SET */


/* Fault E Digital Filter Selection */
#define FAULT_FILTERE_CLEAR_gc (0x00) /* Fault E Digital Filter Selection - CLEAR */
#define FAULT_FILTERE_SET_gc   (0x04) /* Fault E Digital Filter Selection - SET */


/* Fault E Input selection */
#define FAULT_SRCE_DISABLE_gc (0x00) /* Fault Protection Disabled */
#define FAULT_SRCE_CHN_gc     (0x01) /* Event Channel n */
#define FAULT_SRCE_CHN1_gc    (0x02) /* Event Channel n+1 */
#define FAULT_SRCE_CHN2_gc    (0x03) /* Event Channel n+2 */


/* Fault A Software Mode */
#define FAULT_SOFTA_CLEAR_gc (0x00) /* Fault A Software Mode - CLEAR */
#define FAULT_SOFTA_SET_gc   (0x80) /* Fault A Software Mode - SET */


/* Fault A Halt Action */
#define FAULT_HALTA_DISABLE_gc (0x00<<5) /* Halt Action Disabled */
#define FAULT_HALTA_HW_gc      (0x01<<5) /* Hardware Halt Action */
#define FAULT_HALTA_SW_gc      (0x02<<5) /* Software Halt Action */


/* Fault A Restart Action */
#define FAULT_RESTARTA_CLEAR_gc (0x00) /* Fault A Restart Action - CLEAR */
#define FAULT_RESTARTA_SET_gc   (0x10) /* Fault A Restart Action - SET */


/* Fault A Keep Action */
#define FAULT_KEEPA_CLEAR_gc (0x00) /* Fault A Keep Action - CLEAR */
#define FAULT_KEEPA_SET_gc   (0x08) /* Fault A Keep Action - SET */


/* Fault A Source Selection */
#define FAULT_SRCA_DISABLE_gc (0x00) /* Fault A Disabled */
#define FAULT_SRCA_CHN_gc     (0x01) /* Event Channel n */
#define FAULT_SRCA_CHN1_gc    (0x02) /* Event Channel n+1 */
#define FAULT_SRCA_LINK_gc    (0x03) /* Fault A linked to Fault B State from previous cycle */


/* Fault A Capture */
#define FAULT_CAPTA_CLEAR_gc (0x00) /* Fault A Capture - CLEAR */
#define FAULT_CAPTA_SET_gc   (0x20) /* Fault A Capture - SET */


/* Fault A Digital Filter Selection */
#define FAULT_FILTERA_CLEAR_gc (0x00) /* Fault A Digital Filter Selection - CLEAR */
#define FAULT_FILTERA_SET_gc   (0x04) /* Fault A Digital Filter Selection - SET */


/* Fault A Blanking */
#define FAULT_BLANKA_CLEAR_gc (0x00) /* Fault A Blanking - CLEAR */
#define FAULT_BLANKA_SET_gc   (0x02) /* Fault A Blanking - SET */


/* Fault A Qualification */
#define FAULT_QUALA_CLEAR_gc (0x00) /* Fault A Qualification - CLEAR */
#define FAULT_QUALA_SET_gc   (0x01) /* Fault A Qualification - SET */


/* Fault B Software Mode */
#define FAULT_SOFTB_CLEAR_gc (0x00) /* Fault B Software Mode - CLEAR */
#define FAULT_SOFTB_SET_gc   (0x80) /* Fault B Software Mode - SET */


/* Fault B Halt Action */
#define FAULT_HALTB_DISABLE_gc (0x00<<5) /* Halt Action Disabled */
#define FAULT_HALTB_HW_gc      (0x01<<5) /* Hardware Halt Action */
#define FAULT_HALTB_SW_gc      (0x02<<5) /* Software Halt Action */


/* Fault B Restart Action */
#define FAULT_RESTARTB_CLEAR_gc (0x00) /* Fault B Restart Action - CLEAR */
#define FAULT_RESTARTB_SET_gc   (0x10) /* Fault B Restart Action - SET */


/* Fault B Keep Action */
#define FAULT_KEEPB_CLEAR_gc (0x00) /* Fault B Keep Action - CLEAR */
#define FAULT_KEEPB_SET_gc   (0x08) /* Fault B Keep Action - SET */


/* Fault B Source Selection */
#define FAULT_SRCB_DISABLE_gc (0x00) /* Fault B disabled */
#define FAULT_SRCB_CHN_gc     (0x01) /* Event Channel n */
#define FAULT_SRCB_CHN1_gc    (0x02) /* Event Channel n+1 */
#define FAULT_SRCB_LINK_gc    (0x03) /* Fault B linked to Fault A State from previous cycle */


/* Fault B Capture */
#define FAULT_CAPTB_CLEAR_gc (0x00) /* Fault B Capture - CLEAR */
#define FAULT_CAPTB_SET_gc   (0x20) /* Fault B Capture - SET */


/* Fault B Digital Filter Selection */
#define FAULT_FILTERB_CLEAR_gc (0x00) /* Fault B Digital Filter Selection - CLEAR */
#define FAULT_FILTERB_SET_gc   (0x04) /* Fault B Digital Filter Selection - SET */


/* Fault B Blanking */
#define FAULT_BLANKB_CLEAR_gc (0x00) /* Fault B Blanking - CLEAR */
#define FAULT_BLANKB_SET_gc   (0x02) /* Fault B Blanking - SET */


/* Fault B Qualification */
#define FAULT_QUALB_CLEAR_gc (0x00) /* Fault B Qualification - CLEAR */
#define FAULT_QUALB_SET_gc   (0x01) /* Fault B Qualification - SET */


/* Fault B State */
#define FAULT_STATEB_CLEAR_gc (0x00) /* Fault B State - CLEAR */
#define FAULT_STATEB_SET_gc   (0x80) /* Fault B State - SET */


/* Fault A State */
#define FAULT_STATEA_CLEAR_gc (0x00) /* Fault A State - CLEAR */
#define FAULT_STATEA_SET_gc   (0x40) /* Fault A State - SET */


/* Fault E State */
#define FAULT_STATEE_CLEAR_gc (0x00) /* Fault E State - CLEAR */
#define FAULT_STATEE_SET_gc   (0x20) /* Fault E State - SET */


/* Channel Index Flag */
#define FAULT_IDX_CLEAR_gc (0x00) /* Channel Index Flag - CLEAR */
#define FAULT_IDX_SET_gc   (0x08) /* Channel Index Flag - SET */


/* Fault B Flag */
#define FAULT_FAULTBIN_CLEAR_gc (0x00) /* Fault B Flag - CLEAR */
#define FAULT_FAULTBIN_SET_gc   (0x04) /* Fault B Flag - SET */


/* Fault A Flag */
#define FAULT_FAULTAIN_CLEAR_gc (0x00) /* Fault A Flag - CLEAR */
#define FAULT_FAULTAIN_SET_gc   (0x02) /* Fault A Flag - SET */


/* Fault E Flag */
#define FAULT_FAULTEIN_CLEAR_gc (0x00) /* Fault E Flag - CLEAR */
#define FAULT_FAULTEIN_SET_gc   (0x01) /* Fault E Flag - SET */


/* State B Clear */
#define FAULT_HALTBCLR_CLEAR_gc (0x00) /* State B Clear - CLEAR */
#define FAULT_HALTBCLR_SET_gc   (0x80) /* State B Clear - SET */


/* State A Clear */
#define FAULT_HALTACLR_CLEAR_gc (0x00) /* State A Clear - CLEAR */
#define FAULT_HALTACLR_SET_gc   (0x40) /* State A Clear - SET */


/* State E Clear */
#define FAULT_STATEECLR_CLEAR_gc (0x00) /* State E Clear - CLEAR */
#define FAULT_STATEECLR_SET_gc   (0x20) /* State E Clear - SET */


/* Fault B Flag */
#define FAULT_FAULTB_CLEAR_gc (0x00) /* Fault B Flag - CLEAR */
#define FAULT_FAULTB_SET_gc   (0x04) /* Fault B Flag - SET */


/* Fault A Flag */
#define FAULT_FAULTA_CLEAR_gc (0x00) /* Fault A Flag - CLEAR */
#define FAULT_FAULTA_SET_gc   (0x02) /* Fault A Flag - SET */


/* Fault E Flag */
#define FAULT_FAULTE_CLEAR_gc (0x00) /* Fault E Flag - CLEAR */
#define FAULT_FAULTE_SET_gc   (0x01) /* Fault E Flag - SET */


/* Software Fault B */
#define FAULT_FAULTBSW_CLEAR_gc (0x00) /* Software Fault B - CLEAR */
#define FAULT_FAULTBSW_SET_gc   (0x80) /* Software Fault B - SET */


/* Software Fault A */
#define FAULT_FAULTASW_CLEAR_gc (0x00) /* Software Fault A - CLEAR */
#define FAULT_FAULTASW_SET_gc   (0x40) /* Software Fault A - SET */


/* Software Fault E */
#define FAULT_FAULTESW_CLEAR_gc (0x00) /* Software Fault E - CLEAR */
#define FAULT_FAULTESW_SET_gc   (0x20) /* Software Fault E - SET */


/* Channel index Command */
#define FAULT_IDXCMD_DISABLE_gc (0x00<<3) /* Command Disabled */
#define FAULT_IDXCMD_SET_gc     (0x01<<3) /* Force Cycle B in Next Cycle */
#define FAULT_IDXCMD_CLEAR_gc   (0x02<<3) /* Force Cycle A in Next Cycle */
#define FAULT_IDXCMD_HOLD_gc    (0x03<<3) /* Hold Current Cycle Index in Next Cycle  */


/*
--------------------------------------------------------------------------------
WEX - Waveform Extension
--------------------------------------------------------------------------------
*/


/* Update Source Selection */
#define WEX_UPSEL_CLEAR_gc (0x00) /* Update Source Selection - CLEAR */
#define WEX_UPSEL_SET_gc   (0x80) /* Update Source Selection - SET */


/* Output Matrix */
#define WEX_OTMX_DEFAULT_gc (0x00<<4) /* Default Output Matrix Mode */
#define WEX_OTMX_FIRST_gc   (0x01<<4) /* First Output matrix Mode */
#define WEX_OTMX_SECOND_gc  (0x02<<4) /* Second Output matrix Mode */
#define WEX_OTMX_THIRD_gc   (0x03<<4) /* Third Output matrix Mode */
#define WEX_OTMX_FOURTH_gc  (0x04<<4) /* Fourth Output matrix Mode */


/* Dead-Time Insertion Generator 3 Enable */
#define WEX_DTI3EN_CLEAR_gc (0x00) /* Dead-Time Insertion Generator 3 Enable - CLEAR */
#define WEX_DTI3EN_SET_gc   (0x08) /* Dead-Time Insertion Generator 3 Enable - SET */


/* Dead-Time Insertion Generator 2 Enable */
#define WEX_DTI2EN_CLEAR_gc (0x00) /* Dead-Time Insertion Generator 2 Enable - CLEAR */
#define WEX_DTI2EN_SET_gc   (0x04) /* Dead-Time Insertion Generator 2 Enable - SET */


/* Dead-Time Insertion Generator 1 Enable */
#define WEX_DTI1EN_CLEAR_gc (0x00) /* Dead-Time Insertion Generator 1 Enable - CLEAR */
#define WEX_DTI1EN_SET_gc   (0x02) /* Dead-Time Insertion Generator 1 Enable - SET */


/* Dead-Time Insertion Generator 0 Enable */
#define WEX_DTI0EN_CLEAR_gc (0x00) /* Dead-Time Insertion Generator 0 Enable - CLEAR */
#define WEX_DTI0EN_SET_gc   (0x01) /* Dead-Time Insertion Generator 0 Enable - SET */


/* Swap Buffer Valid  */
#define WEX_SWAPBUF_CLEAR_gc (0x00) /* Swap Buffer Valid  - CLEAR */
#define WEX_SWAPBUF_SET_gc   (0x04) /* Swap Buffer Valid  - SET */


/* Pattern Generator Value Buffer Valid  */
#define WEX_PGVBUFV_CLEAR_gc (0x00) /* Pattern Generator Value Buffer Valid  - CLEAR */
#define WEX_PGVBUFV_SET_gc   (0x02) /* Pattern Generator Value Buffer Valid  - SET */


/* Pattern Generator Overwrite Buffer Valid */
#define WEX_PGOBUFV_CLEAR_gc (0x00) /* Pattern Generator Overwrite Buffer Valid - CLEAR */
#define WEX_PGOBUFV_SET_gc   (0x01) /* Pattern Generator Overwrite Buffer Valid - SET */


/* Swap Buffer Valid  */
/* WEX_SWAPBUF_CLEAR_gc ALREADY DEFINED */
/* WEX_SWAPBUF_SET_gc ALREADY DEFINED */


/* Pattern Generator Value Buffer Valid  */
/* WEX_PGVBUFV_CLEAR_gc ALREADY DEFINED */
/* WEX_PGVBUFV_SET_gc ALREADY DEFINED */


/* Pattern Generator Overwrite Buffer Valid  */
/* WEX_PGOBUFV_CLEAR_gc ALREADY DEFINED */
/* WEX_PGOBUFV_SET_gc ALREADY DEFINED */


/* Swap DTI output pair 3 */
#define WEX_SWAP3_CLEAR_gc (0x00) /* Swap DTI output pair 3 - CLEAR */
#define WEX_SWAP3_SET_gc   (0x08) /* Swap DTI output pair 3 - SET */


/* Swap DTI output pair 2 */
#define WEX_SWAP2_CLEAR_gc (0x00) /* Swap DTI output pair 2 - CLEAR */
#define WEX_SWAP2_SET_gc   (0x04) /* Swap DTI output pair 2 - SET */


/* Swap DTI output pair 1 */
#define WEX_SWAP1_CLEAR_gc (0x00) /* Swap DTI output pair 1 - CLEAR */
#define WEX_SWAP1_SET_gc   (0x02) /* Swap DTI output pair 1 - SET */


/* Swap DTI output pair 0 */
#define WEX_SWAP0_CLEAR_gc (0x00) /* Swap DTI output pair 0 - CLEAR */
#define WEX_SWAP0_SET_gc   (0x01) /* Swap DTI output pair 0 - SET */


/* Swap DTI output pair 3  */
#define WEX_SWAP3BUF_CLEAR_gc (0x00) /* Swap DTI output pair 3  - CLEAR */
#define WEX_SWAP3BUF_SET_gc   (0x08) /* Swap DTI output pair 3  - SET */


/* Swap DTI output pair 2 */
#define WEX_SWAP2BUF_CLEAR_gc (0x00) /* Swap DTI output pair 2 - CLEAR */
#define WEX_SWAP2BUF_SET_gc   (0x04) /* Swap DTI output pair 2 - SET */


/* Swap DTI output pair 1  */
#define WEX_SWAP1BUF_CLEAR_gc (0x00) /* Swap DTI output pair 1  - CLEAR */
#define WEX_SWAP1BUF_SET_gc   (0x02) /* Swap DTI output pair 1  - SET */


/* Swap DTI output pair 0 */
#define WEX_SWAP0BUF_CLEAR_gc (0x00) /* Swap DTI output pair 0 - CLEAR */
#define WEX_SWAP0BUF_SET_gc   (0x01) /* Swap DTI output pair 0 - SET */


/*
--------------------------------------------------------------------------------
HIRES - High-Resolution Extension
--------------------------------------------------------------------------------
*/


/* High Resolution Plus */
#define HIRES_HRPLUS_NONE_gc (0x00<<2) /* No Hi-Res Plus */
#define HIRES_HRPLUS_HRP4_gc (0x01<<2) /* Hi-Res Plus enabled on Timer 4 */
#define HIRES_HRPLUS_HRP5_gc (0x02<<2) /* Hi-Res Plus enabled on Timer 5 */
#define HIRES_HRPLUS_BOTH_gc (0x03<<2) /* Hi-Res Plus enabled on Timer 4 and 5 */


/* High Resolution Mode */
#define HIRES_HREN_NONE_gc (0x00) /* No Hi-Res */
#define HIRES_HREN_HRP4_gc (0x01) /* Hi-Res enabled on Timer 4 */
#define HIRES_HREN_HRP5_gc (0x02) /* Hi-Res enabled on Timer 5 */
#define HIRES_HREN_BOTH_gc (0x03) /* Hi-Res enabled on Timer 4 and 5 */


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


/* Receive Start Bit Interrupt Flag */
#define USART_RXSIF_CLEAR_gc (0x00) /* Receive Start Bit Interrupt Flag - CLEAR */
#define USART_RXSIF_SET_gc   (0x02) /* Receive Start Bit Interrupt Flag - SET */


/* Receive Bit 8 */
#define USART_RXB8_CLEAR_gc (0x00) /* Receive Bit 8 - CLEAR */
#define USART_RXB8_SET_gc   (0x01) /* Receive Bit 8 - SET */


/* Data Reception Flag */
#define USART_DRIF_CLEAR_gc (0x00) /* Data Reception Flag - CLEAR */
#define USART_DRIF_SET_gc   (0x01) /* Data Reception Flag - SET */


/* Receive Start Interrupt Enable */
#define USART_RXSIE_CLEAR_gc (0x00) /* Receive Start Interrupt Enable - CLEAR */
#define USART_RXSIE_SET_gc   (0x80) /* Receive Start Interrupt Enable - SET */


/* Data Reception Interrupt Enable */
#define USART_DRIE_CLEAR_gc (0x00) /* Data Reception Interrupt Enable - CLEAR */
#define USART_DRIE_SET_gc   (0x40) /* Data Reception Interrupt Enable - SET */


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


/* One Wire Mode */
#define USART_ONEWIRE_CLEAR_gc (0x00) /* One Wire Mode - CLEAR */
#define USART_ONEWIRE_SET_gc   (0x80) /* One Wire Mode - SET */


/* Start Frame Detection Enable */
#define USART_SFDEN_CLEAR_gc (0x00) /* Start Frame Detection Enable - CLEAR */
#define USART_SFDEN_SET_gc   (0x40) /* Start Frame Detection Enable - SET */


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


/* Receive Interrupt Level */
#define USART_DECTYPE_DATA_gc     (0x00<<4) /* DATA Field Encoding */
#define USART_DECTYPE_SDATA_gc    (0x02<<4) /* Start and Data Fields Encoding */
#define USART_DECTYPE_NOTSDATA_gc (0x03<<4) /* Start and Data Fields Encoding, with invertion in START field */


/* Transmit Interrupt Level */
#define USART_LUTACT_OFF_gc  (0x00<<2) /* Standard Frame Configuration */
#define USART_LUTACT_RX_gc   (0x01<<2) /* Receiver Decoding Enabled */
#define USART_LUTACT_TX_gc   (0x02<<2) /* Transmitter Encoding Enabled */
#define USART_LUTACT_BOTH_gc (0x03<<2) /* Both Encoding and Decoding Enabled */


/* Data Register Empty Interrupt Level */
#define USART_PECACT_OFF_gc    (0x00) /* Standard Mode */
#define USART_PECACT_PEC0_gc   (0x01) /* Variable Data Lenght in Reception */
#define USART_PECACT_PEC1_gc   (0x02) /* Variable Data Lenght in Transmission */
#define USART_PECACT_PERC01_gc (0x03) /* Variable Data Lenght in both Reception and Transmission */


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


/* Enable SPI Module */
#define SPI_ENABLE_CLEAR_gc (0x00) /* Enable SPI Module - CLEAR */
#define SPI_ENABLE_SET_gc   (0x40) /* Enable SPI Module - SET */


/* Data Order Setting */
#define SPI_DORD_CLEAR_gc (0x00) /* Data Order Setting - CLEAR */
#define SPI_DORD_SET_gc   (0x20) /* Data Order Setting - SET */


/* Master Operation Enable */
#define SPI_MASTER_CLEAR_gc (0x00) /* Master Operation Enable - CLEAR */
#define SPI_MASTER_SET_gc   (0x10) /* Master Operation Enable - SET */


/* SPI Mode */
#define SPI_MODE_0_gc (0x00<<2) /* SPI Mode 0, base clock at "0", sampling on leading edge (rising) & set-up on trailling edge (falling). */
#define SPI_MODE_1_gc (0x01<<2) /* SPI Mode 1, base clock at "0", set-up on leading edge (rising) & sampling on trailling edge (falling). */
#define SPI_MODE_2_gc (0x02<<2) /* SPI Mode 2, base clock at "1", sampling on leading edge (falling) & set-up on trailling edge (rising). */
#define SPI_MODE_3_gc (0x03<<2) /* SPI Mode 3, base clock at "1", set-up on leading edge (falling) & sampling on trailling edge (rising). */


/* Prescaler */
#define SPI_PRESCALER_DIV4_gc   (0x00) /* If CLK2X=1 CLKper/2, else (CLK2X=0) CLKper/4. */
#define SPI_PRESCALER_DIV16_gc  (0x01) /* If CLK2X=1 CLKper/8, else (CLK2X=0) CLKper/16. */
#define SPI_PRESCALER_DIV64_gc  (0x02) /* If CLK2X=1 CLKper/32, else (CLK2X=0) CLKper/64. */
#define SPI_PRESCALER_DIV128_gc (0x03) /* If CLK2X=1 CLKper/64, else (CLK2X=0) CLKper/128. */


/* Receive Complete Interrupt Enable (In Buffer Modes Only). */
#define SPI_RXCIE_CLEAR_gc (0x00) /* Receive Complete Interrupt Enable (In Buffer Modes Only). - CLEAR */
#define SPI_RXCIE_SET_gc   (0x80) /* Receive Complete Interrupt Enable (In Buffer Modes Only). - SET */


/* Transmit Complete Interrupt Enable (In Buffer Modes Only). */
#define SPI_TXCIE_CLEAR_gc (0x00) /* Transmit Complete Interrupt Enable (In Buffer Modes Only). - CLEAR */
#define SPI_TXCIE_SET_gc   (0x40) /* Transmit Complete Interrupt Enable (In Buffer Modes Only). - SET */


/* Data Register Empty Interrupt Enable (In Buffer Modes Only). */
#define SPI_DREIE_CLEAR_gc (0x00) /* Data Register Empty Interrupt Enable (In Buffer Modes Only). - CLEAR */
#define SPI_DREIE_SET_gc   (0x20) /* Data Register Empty Interrupt Enable (In Buffer Modes Only). - SET */


/* Slave Select Trigger Interrupt Enable (In Buffer Modes Only). */
#define SPI_SSIE_CLEAR_gc (0x00) /* Slave Select Trigger Interrupt Enable (In Buffer Modes Only). - CLEAR */
#define SPI_SSIE_SET_gc   (0x10) /* Slave Select Trigger Interrupt Enable (In Buffer Modes Only). - SET */


/* Interrupt level */
#define SPI_INTLVL_OFF_gc (0x00) /* Interrupt Disabled */
#define SPI_INTLVL_LO_gc  (0x01) /* Low Level */
#define SPI_INTLVL_MED_gc (0x02) /* Medium Level */
#define SPI_INTLVL_HI_gc  (0x03) /* High Level */


/* Interrupt Flag (In Standard Mode Only). */
#define SPI_IF_CLEAR_gc (0x00) /* Interrupt Flag (In Standard Mode Only). - CLEAR */
#define SPI_IF_SET_gc   (0x80) /* Interrupt Flag (In Standard Mode Only). - SET */


/* Receive Complete Interrupt Flag (In Buffer Modes Only). */
#define SPI_RXCIF_CLEAR_gc (0x00) /* Receive Complete Interrupt Flag (In Buffer Modes Only). - CLEAR */
#define SPI_RXCIF_SET_gc   (0x80) /* Receive Complete Interrupt Flag (In Buffer Modes Only). - SET */


/* Write Collision Flag (In Standard Mode Only). */
#define SPI_WRCOL_CLEAR_gc (0x00) /* Write Collision Flag (In Standard Mode Only). - CLEAR */
#define SPI_WRCOL_SET_gc   (0x40) /* Write Collision Flag (In Standard Mode Only). - SET */


/* Transmit Complete Interrupt Flag (In Buffer Modes Only). */
#define SPI_TXCIF_CLEAR_gc (0x00) /* Transmit Complete Interrupt Flag (In Buffer Modes Only). - CLEAR */
#define SPI_TXCIF_SET_gc   (0x40) /* Transmit Complete Interrupt Flag (In Buffer Modes Only). - SET */


/* Data Register Empty Interrupt Flag (In Buffer Modes Only). */
#define SPI_DREIF_CLEAR_gc (0x00) /* Data Register Empty Interrupt Flag (In Buffer Modes Only). - CLEAR */
#define SPI_DREIF_SET_gc   (0x20) /* Data Register Empty Interrupt Flag (In Buffer Modes Only). - SET */


/* Slave Select Trigger Interrupt Flag (In Buffer Modes Only). */
#define SPI_SSIF_CLEAR_gc (0x00) /* Slave Select Trigger Interrupt Flag (In Buffer Modes Only). - CLEAR */
#define SPI_SSIF_SET_gc   (0x10) /* Slave Select Trigger Interrupt Flag (In Buffer Modes Only). - SET */


/* Buffer Overflow (In Buffer Modes Only). */
#define SPI_BUFOVF_CLEAR_gc (0x00) /* Buffer Overflow (In Buffer Modes Only). - CLEAR */
#define SPI_BUFOVF_SET_gc   (0x01) /* Buffer Overflow (In Buffer Modes Only). - SET */


/* Buffer Modes */
#define SPI_BUFMODE_OFF_gc      (0x00<<6) /* SPI Unbuffered Mode */
#define SPI_BUFMODE_BUFMODE1_gc (0x02<<6) /* Buffer Mode 1 (with dummy byte) */
#define SPI_BUFMODE_BUFMODE2_gc (0x03<<6) /* Buffer Mode 2 (no dummy byte) */


/* Slave Select Disable */
#define SPI_SSD_CLEAR_gc (0x00) /* Slave Select Disable - CLEAR */
#define SPI_SSD_SET_gc   (0x04) /* Slave Select Disable - SET */


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
FUSE - Fuses and Lockbits
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
FUSE - Fuses and Lockbits
--------------------------------------------------------------------------------
*/


/* Boot Lock Bits - Boot Section */
#define NVM_LOCKBITS_BLBB_RWLOCK_gc (0x00<<6) /* Read and write not allowed */
#define NVM_LOCKBITS_BLBB_RLOCK_gc  (0x01<<6) /* Read not allowed */
#define NVM_LOCKBITS_BLBB_WLOCK_gc  (0x02<<6) /* Write not allowed */
#define NVM_LOCKBITS_BLBB_NOLOCK_gc (0x03<<6) /* No locks */


/* Boot Lock Bits - Application Section */
#define NVM_LOCKBITS_BLBA_RWLOCK_gc (0x00<<4) /* Read and write not allowed */
#define NVM_LOCKBITS_BLBA_RLOCK_gc  (0x01<<4) /* Read not allowed */
#define NVM_LOCKBITS_BLBA_WLOCK_gc  (0x02<<4) /* Write not allowed */
#define NVM_LOCKBITS_BLBA_NOLOCK_gc (0x03<<4) /* No locks */


/* Boot Lock Bits - Application Table */
#define NVM_LOCKBITS_BLBAT_RWLOCK_gc (0x00<<2) /* Read and write not allowed */
#define NVM_LOCKBITS_BLBAT_RLOCK_gc  (0x01<<2) /* Read not allowed */
#define NVM_LOCKBITS_BLBAT_WLOCK_gc  (0x02<<2) /* Write not allowed */
#define NVM_LOCKBITS_BLBAT_NOLOCK_gc (0x03<<2) /* No locks */


/* Lock Bits */
#define NVM_LOCKBITS_LB_RWLOCK_gc (0x00) /* Read and write not allowed */
#define NVM_LOCKBITS_LB_WLOCK_gc  (0x02) /* Write not allowed */
#define NVM_LOCKBITS_LB_NOLOCK_gc (0x03) /* No locks */


/* Watchdog Window Timeout Period */
#define NVM_FUSES_WDWPER_8CLK_gc   (0x00<<4) /* 8 cycles (8ms @ 3.3V) */
#define NVM_FUSES_WDWPER_16CLK_gc  (0x01<<4) /* 16 cycles (16ms @ 3.3V) */
#define NVM_FUSES_WDWPER_32CLK_gc  (0x02<<4) /* 32 cycles (32ms @ 3.3V) */
#define NVM_FUSES_WDWPER_64CLK_gc  (0x03<<4) /* 64 cycles (64ms @ 3.3V) */
#define NVM_FUSES_WDWPER_128CLK_gc (0x04<<4) /* 128 cycles (0.125s @ 3.3V) */
#define NVM_FUSES_WDWPER_256CLK_gc (0x05<<4) /* 256 cycles (0.25s @ 3.3V) */
#define NVM_FUSES_WDWPER_512CLK_gc (0x06<<4) /* 512 cycles (0.5s @ 3.3V) */
#define NVM_FUSES_WDWPER_1KCLK_gc  (0x07<<4) /* 1K cycles (1s @ 3.3V) */
#define NVM_FUSES_WDWPER_2KCLK_gc  (0x08<<4) /* 2K cycles (2s @ 3.3V) */
#define NVM_FUSES_WDWPER_4KCLK_gc  (0x09<<4) /* 4K cycles (4s @ 3.3V) */
#define NVM_FUSES_WDWPER_8KCLK_gc  (0x0A<<4) /* 8K cycles (8s @ 3.3V) */


/* Watchdog Timeout Period */
#define NVM_FUSES_WDPER_8CLK_gc   (0x00) /* 8 cycles (8ms @ 3.3V) */
#define NVM_FUSES_WDPER_16CLK_gc  (0x01) /* 16 cycles (16ms @ 3.3V) */
#define NVM_FUSES_WDPER_32CLK_gc  (0x02) /* 32 cycles (32ms @ 3.3V) */
#define NVM_FUSES_WDPER_64CLK_gc  (0x03) /* 64 cycles (64ms @ 3.3V) */
#define NVM_FUSES_WDPER_128CLK_gc (0x04) /* 128 cycles (0.125s @ 3.3V) */
#define NVM_FUSES_WDPER_256CLK_gc (0x05) /* 256 cycles (0.25s @ 3.3V) */
#define NVM_FUSES_WDPER_512CLK_gc (0x06) /* 512 cycles (0.5s @ 3.3V) */
#define NVM_FUSES_WDPER_1KCLK_gc  (0x07) /* 1K cycles (1s @ 3.3V) */
#define NVM_FUSES_WDPER_2KCLK_gc  (0x08) /* 2K cycles (2s @ 3.3V) */
#define NVM_FUSES_WDPER_4KCLK_gc  (0x09) /* 4K cycles (4s @ 3.3V) */
#define NVM_FUSES_WDPER_8KCLK_gc  (0x0A) /* 8K cycles (8s @ 3.3V) */


/* Boot Loader Section Reset Vector */
#define NVM_FUSES_BOOTRST_BOOTLDR_gc     (0x00<<6) /* Boot Loader Reset */
#define NVM_FUSES_BOOTRST_APPLICATION_gc (0x01<<6) /* Application Reset */


/* BOD Operation in Power-Down Mode */
#define NVM_FUSES_BODPD_SAMPLED_gc    (0x01) /* BOD enabled in sampled mode */
#define NVM_FUSES_BODPD_CONTINUOUS_gc (0x02) /* BOD enabled continuously */
#define NVM_FUSES_BODPD_DISABLED_gc   (0x03) /* BOD Disabled */


/* External Reset Disable */
#define NVM_FUSES_RSTDISBL_CLEAR_gc (0x00) /* External Reset Disable - CLEAR */
#define NVM_FUSES_RSTDISBL_SET_gc   (0x10) /* External Reset Disable - SET */


/* Start-up Time */
#define NVM_FUSES_FUSEBYTE4_SUT_gc(x) ((x<<2) & 0x0C)

/* Watchdog Timer Lock */
#define NVM_FUSES_WDLOCK_CLEAR_gc (0x00) /* Watchdog Timer Lock - CLEAR */
#define NVM_FUSES_WDLOCK_SET_gc   (0x02) /* Watchdog Timer Lock - SET */


/* BOD Operation in Active Mode */
#define NVM_FUSES_BODACT_SAMPLED_gc    (0x01<<4) /* BOD enabled in sampled mode */
#define NVM_FUSES_BODACT_CONTINUOUS_gc (0x02<<4) /* BOD enabled continuously */
#define NVM_FUSES_BODACT_DISABLED_gc   (0x03<<4) /* BOD Disabled */


/* Preserve EEPROM Through Chip Erase */
#define NVM_FUSES_EESAVE_CLEAR_gc (0x00) /* Preserve EEPROM Through Chip Erase - CLEAR */
#define NVM_FUSES_EESAVE_SET_gc   (0x08) /* Preserve EEPROM Through Chip Erase - SET */


/* Brownout Detection Voltage Level */
#define NVM_FUSES_BODLEVEL_1V6_gc (0x07) /* 1.6 V */
#define NVM_FUSES_BODLEVEL_1V8_gc (0x06) /* 1.8 V */
#define NVM_FUSES_BODLEVEL_2V0_gc (0x05) /* 2.0 V */
#define NVM_FUSES_BODLEVEL_2V2_gc (0x04) /* 2.2 V */
#define NVM_FUSES_BODLEVEL_2V4_gc (0x03) /* 2.4 V */
#define NVM_FUSES_BODLEVEL_2V6_gc (0x02) /* 2.6 V */
#define NVM_FUSES_BODLEVEL_2V8_gc (0x01) /* 2.8 V */
#define NVM_FUSES_BODLEVEL_3V0_gc (0x00) /* 3.0 V */


/* Fault Dectection Action on TC5 */
#define NVM_FUSES_FDACT5_CLEAR_gc (0x00) /* Fault Dectection Action on TC5 - CLEAR */
#define NVM_FUSES_FDACT5_SET_gc   (0x80) /* Fault Dectection Action on TC5 - SET */


/* Fault Dectection Action on TC4 */
#define NVM_FUSES_FDACT4_CLEAR_gc (0x00) /* Fault Dectection Action on TC4 - CLEAR */
#define NVM_FUSES_FDACT4_SET_gc   (0x40) /* Fault Dectection Action on TC4 - SET */


/* Port Pin Value */
#define NVM_FUSES_FUSEBYTE6_VALUE_gc(x) (x & 0x3F)

/*
--------------------------------------------------------------------------------
SIGROW - Signature Row
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


/* GPIO - General Purpose IO Registers (0x0000) */
#define GPIO_BASE           _SFR_MEM8 (0x0000) /* GPIO Base Address */
#define GPIO_GPIOR0         _SFR_MEM8 (0x0000) /* General Purpose IO Register 0 */
#define GPIO_GPIOR1         _SFR_MEM8 (0x0001) /* General Purpose IO Register 1 */
#define GPIO_GPIOR2         _SFR_MEM8 (0x0002) /* General Purpose IO Register 2 */
#define GPIO_GPIOR3         _SFR_MEM8 (0x0003) /* General Purpose IO Register 3 */

/* FUSE - Fuses (0x0000) */
#define FUSE_BASE           _SFR_MEM8 (0x0000) /* FUSE Base Address */
#define FUSE_FUSEBYTE1      _SFR_MEM8 (0x0001) /* Watchdog Configuration */
#define FUSE_FUSEBYTE2      _SFR_MEM8 (0x0002) /* Reset Configuration */
#define FUSE_FUSEBYTE4      _SFR_MEM8 (0x0004) /* Start-up Configuration */
#define FUSE_FUSEBYTE5      _SFR_MEM8 (0x0005) /* EESAVE and BOD Level */
#define FUSE_FUSEBYTE6      _SFR_MEM8 (0x0006) /* Fault State */

/* LOCKBIT - Lock Bits (0x0000) */
/* FUSE_BASE ALREADY DEFINED */
#define FUSE_LOCKBITS       _SFR_MEM8 (0x0000) /* Lock Bits */

/* PROD_SIGNATURES - Production Signatures (0x0000) */
#define SIGROW_BASE         _SFR_MEM8 (0x0000) /* SIGROW Base Address */
#define SIGROW_RCOSC8M      _SFR_MEM8 (0x0000) /* RCOSC 8MHz Calibration Value */
#define SIGROW_RCOSC32K     _SFR_MEM8 (0x0002) /* RCOSC 32.768 kHz Calibration Value */
#define SIGROW_RCOSC32M     _SFR_MEM8 (0x0003) /* RCOSC 32 MHz Calibration Value B */
#define SIGROW_RCOSC32MA    _SFR_MEM8 (0x0004) /* RCOSC 32 MHz Calibration Value A */
#define SIGROW_LOTNUM0      _SFR_MEM8 (0x0008) /* Lot Number Byte 0, ASCII */
#define SIGROW_LOTNUM1      _SFR_MEM8 (0x0009) /* Lot Number Byte 1, ASCII */
#define SIGROW_LOTNUM2      _SFR_MEM8 (0x000A) /* Lot Number Byte 2, ASCII */
#define SIGROW_LOTNUM3      _SFR_MEM8 (0x000B) /* Lot Number Byte 3, ASCII */
#define SIGROW_LOTNUM4      _SFR_MEM8 (0x000C) /* Lot Number Byte 4, ASCII */
#define SIGROW_LOTNUM5      _SFR_MEM8 (0x000D) /* Lot Number Byte 5, ASCII */
#define SIGROW_WAFNUM       _SFR_MEM8 (0x0010) /* Wafer Number */
#define SIGROW_COORDX0      _SFR_MEM8 (0x0012) /* Wafer Coordinate X Byte 0 */
#define SIGROW_COORDX1      _SFR_MEM8 (0x0013) /* Wafer Coordinate X Byte 1 */
#define SIGROW_COORDY0      _SFR_MEM8 (0x0014) /* Wafer Coordinate Y Byte 0 */
#define SIGROW_COORDY1      _SFR_MEM8 (0x0015) /* Wafer Coordinate Y Byte 1 */
#define SIGROW_ROOMTEMP     _SFR_MEM8 (0x001E) /* Temperature corresponds to TEMPSENSE3/2 */
#define SIGROW_HOTTEMP      _SFR_MEM8 (0x001F) /* Temperature corresponds to TEMPSENSE1/0 */
#define SIGROW_ADCACAL0     _SFR_MEM8 (0x0020) /* ADCA Calibration Byte 0 */
#define SIGROW_ADCACAL1     _SFR_MEM8 (0x0021) /* ADCA Calibration Byte 1 */
#define SIGROW_ACACURRCAL   _SFR_MEM8 (0x0028) /* ACA Current Calibration Byte */
#define SIGROW_TEMPSENSE2   _SFR_MEM8 (0x002C) /* Temperature Sensor Calibration Byte 2 */
#define SIGROW_TEMPSENSE3   _SFR_MEM8 (0x002D) /* Temperature Sensor Calibration Byte 3 */
#define SIGROW_TEMPSENSE0   _SFR_MEM8 (0x002E) /* Temperature Sensor Calibration Byte 0 */
#define SIGROW_TEMPSENSE1   _SFR_MEM8 (0x002F) /* Temperature Sensor Calibration Byte 1 */
#define SIGROW_DACA0OFFCAL  _SFR_MEM8 (0x0030) /* DACA0 Calibration Byte 0 */
#define SIGROW_DACA0GAINCAL _SFR_MEM8 (0x0031) /* DACA0 Calibration Byte 1 */
#define SIGROW_DACA1OFFCAL  _SFR_MEM8 (0x0034) /* DACA1 Calibration Byte 0 */
#define SIGROW_DACA1GAINCAL _SFR_MEM8 (0x0035) /* DACA1 Calibration Byte 1 */

/* VPORT0 - Virtual Port (0x0010) */
#define VPORT0_BASE         _SFR_MEM8 (0x0010) /* VPORT0 Base Address */
#define VPORT0_DIR          _SFR_MEM8 (0x0010) /* I/O Port Data Direction */
#define VPORT0_OUT          _SFR_MEM8 (0x0011) /* I/O Port Output */
#define VPORT0_IN           _SFR_MEM8 (0x0012) /* I/O Port Input */
#define VPORT0_INTFLAGS     _SFR_MEM8 (0x0013) /* Interrupt Flag Register */

/* VPORT1 - Virtual Port (0x0014) */
#define VPORT1_BASE         _SFR_MEM8 (0x0014) /* VPORT1 Base Address */
#define VPORT1_DIR          _SFR_MEM8 (0x0014) /* I/O Port Data Direction */
#define VPORT1_OUT          _SFR_MEM8 (0x0015) /* I/O Port Output */
#define VPORT1_IN           _SFR_MEM8 (0x0016) /* I/O Port Input */
#define VPORT1_INTFLAGS     _SFR_MEM8 (0x0017) /* Interrupt Flag Register */

/* VPORT2 - Virtual Port (0x0018) */
#define VPORT2_BASE         _SFR_MEM8 (0x0018) /* VPORT2 Base Address */
#define VPORT2_DIR          _SFR_MEM8 (0x0018) /* I/O Port Data Direction */
#define VPORT2_OUT          _SFR_MEM8 (0x0019) /* I/O Port Output */
#define VPORT2_IN           _SFR_MEM8 (0x001A) /* I/O Port Input */
#define VPORT2_INTFLAGS     _SFR_MEM8 (0x001B) /* Interrupt Flag Register */

/* VPORT3 - Virtual Port (0x001C) */
#define VPORT3_BASE         _SFR_MEM8 (0x001C) /* VPORT3 Base Address */
#define VPORT3_DIR          _SFR_MEM8 (0x001C) /* I/O Port Data Direction */
#define VPORT3_OUT          _SFR_MEM8 (0x001D) /* I/O Port Output */
#define VPORT3_IN           _SFR_MEM8 (0x001E) /* I/O Port Input */
#define VPORT3_INTFLAGS     _SFR_MEM8 (0x001F) /* Interrupt Flag Register */

/* OCD - On-Chip Debug System (0x002E) */
#define XOCD_BASE           _SFR_MEM8 (0x002E) /* XOCD Base Address */
#define XOCD_OCDR0          _SFR_MEM8 (0x002E) /* OCD Register 0 */
#define XOCD_OCDR1          _SFR_MEM8 (0x002F) /* OCD Register 1 */

/* CPU - CPU registers (0x0030) */
#define CPU_BASE            _SFR_MEM8 (0x0030) /* CPU Base Address */
#define CPU_CCP             _SFR_MEM8 (0x0034) /* Configuration Change Protection */
#define CPU_RAMPD           _SFR_MEM8 (0x0038) /* Ramp D */
#define CPU_RAMPX           _SFR_MEM8 (0x0039) /* Ramp X */
#define CPU_RAMPY           _SFR_MEM8 (0x003A) /* Ramp Y */
#define CPU_RAMPZ           _SFR_MEM8 (0x003B) /* Ramp Z */
#define CPU_EIND            _SFR_MEM8 (0x003C) /* Extended Indirect Jump */
#define CPU_SPL             _SFR_MEM8 (0x003D) /* Stack Pointer Low */
#define CPU_SPH             _SFR_MEM8 (0x003E) /* Stack Pointer High */
#define CPU_SREG            _SFR_MEM8 (0x003F) /* Status Register */

/* CLK - Clock System (0x0040) */
#define CLK_BASE            _SFR_MEM8 (0x0040) /* CLK Base Address */
#define CLK_CTRL            _SFR_MEM8 (0x0040) /* Control Register */
#define CLK_PSCTRL          _SFR_MEM8 (0x0041) /* Prescaler Control Register */
#define CLK_LOCK            _SFR_MEM8 (0x0042) /* Lock register */
#define CLK_RTCCTRL         _SFR_MEM8 (0x0043) /* RTC Control Register */

/* SLEEP - Sleep Controller (0x0048) */
#define SLEEP_BASE          _SFR_MEM8 (0x0048) /* SLEEP Base Address */
#define SLEEP_CTRL          _SFR_MEM8 (0x0048) /* Control Register */

/* OSC - Oscillator (0x0050) */
#define OSC_BASE            _SFR_MEM8 (0x0050) /* OSC Base Address */
#define OSC_CTRL            _SFR_MEM8 (0x0050) /* Control Register */
#define OSC_STATUS          _SFR_MEM8 (0x0051) /* Status Register */
#define OSC_XOSCCTRL        _SFR_MEM8 (0x0052) /* External Oscillator Control Register */
#define OSC_XOSCFAIL        _SFR_MEM8 (0x0053) /* Oscillator Failure Detection Register */
#define OSC_RC32KCAL        _SFR_MEM8 (0x0054) /* 32.768 kHz Internal Oscillator Calibration Register */
#define OSC_PLLCTRL         _SFR_MEM8 (0x0055) /* PLL Control Register */
#define OSC_DFLLCTRL        _SFR_MEM8 (0x0056) /* DFLL Control Register */
#define OSC_RC8MCAL         _SFR_MEM8 (0x0057) /* Internal 8 MHz RC Oscillator Calibration Register */

/* DFLLRC32M - DFLL (0x0060) */
#define DFLLRC32M_BASE      _SFR_MEM8 (0x0060) /* DFLLRC32M Base Address */
#define DFLLRC32M_CTRL      _SFR_MEM8 (0x0060) /* Control Register */
#define DFLLRC32M_CALA      _SFR_MEM8 (0x0062) /* Calibration Register A */
#define DFLLRC32M_CALB      _SFR_MEM8 (0x0063) /* Calibration Register B */
#define DFLLRC32M_COMP0     _SFR_MEM8 (0x0064) /* Oscillator Compare Register 0 */
#define DFLLRC32M_COMP1     _SFR_MEM8 (0x0065) /* Oscillator Compare Register 1 */
#define DFLLRC32M_COMP2     _SFR_MEM8 (0x0066) /* Oscillator Compare Register 2 */

/* PR - Power Reduction (0x0070) */
#define PR_BASE             _SFR_MEM8 (0x0070) /* PR Base Address */
#define PR_PRGEN            _SFR_MEM8 (0x0070) /* General Power Reduction */
#define PR_PRPA             _SFR_MEM8 (0x0071) /* Power Reduction Port A */
#define PR_PRPC             _SFR_MEM8 (0x0073) /* Power Reduction Port C */
#define PR_PRPD             _SFR_MEM8 (0x0074) /* Power Reduction Port D */

/* RST - Reset (0x0078) */
#define RST_BASE            _SFR_MEM8 (0x0078) /* RST Base Address */
#define RST_STATUS          _SFR_MEM8 (0x0078) /* Status Register */
#define RST_CTRL            _SFR_MEM8 (0x0079) /* Control Register */

/* WDT - Watch-Dog Timer (0x0080) */
#define WDT_BASE            _SFR_MEM8 (0x0080) /* WDT Base Address */
#define WDT_CTRL            _SFR_MEM8 (0x0080) /* Control */
#define WDT_WINCTRL         _SFR_MEM8 (0x0081) /* Windowed Mode Control */
#define WDT_STATUS          _SFR_MEM8 (0x0082) /* Status */

/* MCU - MCU Control (0x0090) */
#define MCU_BASE            _SFR_MEM8 (0x0090) /* MCU Base Address */
#define MCU_DEVID0          _SFR_MEM8 (0x0090) /* Device ID byte 0 */
#define MCU_DEVID1          _SFR_MEM8 (0x0091) /* Device ID byte 1 */
#define MCU_DEVID2          _SFR_MEM8 (0x0092) /* Device ID byte 2 */
#define MCU_REVID           _SFR_MEM8 (0x0093) /* Revision ID */
#define MCU_ANAINIT         _SFR_MEM8 (0x0097) /* Analog Startup Delay */
#define MCU_EVSYSLOCK       _SFR_MEM8 (0x0098) /* Event System Lock */
#define MCU_WEXLOCK         _SFR_MEM8 (0x0099) /* WEX Lock */
#define MCU_FAULTLOCK       _SFR_MEM8 (0x009A) /* FAULT Lock */

/* PMIC - Programmable Multi-level Interrupt Controller (0x00A0) */
#define PMIC_BASE           _SFR_MEM8 (0x00A0) /* PMIC Base Address */
#define PMIC_STATUS         _SFR_MEM8 (0x00A0) /* Status Register */
#define PMIC_INTPRI         _SFR_MEM8 (0x00A1) /* Interrupt Priority */
#define PMIC_CTRL           _SFR_MEM8 (0x00A2) /* Control Register */

/* PORTCFG - I/O port Configuration (0x00B0) */
#define PORTCFG_BASE        _SFR_MEM8 (0x00B0) /* PORTCFG Base Address */
#define PORTCFG_MPCMASK     _SFR_MEM8 (0x00B0) /* Multi-pin Configuration Mask */
#define PORTCFG_CLKOUT      _SFR_MEM8 (0x00B4) /* Clock Out Register */
#define PORTCFG_ACEVOUT     _SFR_MEM8 (0x00B6) /* Analog Comparator and Event Out Register */
#define PORTCFG_SRLCTRL     _SFR_MEM8 (0x00B7) /* Slew Rate Limit Control Register */

/* CRC - Cyclic Redundancy Checker (0x00D0) */
#define CRC_BASE            _SFR_MEM8 (0x00D0) /* CRC Base Address */
#define CRC_CTRL            _SFR_MEM8 (0x00D0) /* Control Register */
#define CRC_STATUS          _SFR_MEM8 (0x00D1) /* Status Register */
#define CRC_DATAIN          _SFR_MEM8 (0x00D3) /* Data Input */
#define CRC_CHECKSUM0       _SFR_MEM8 (0x00D4) /* Checksum byte 0 */
#define CRC_CHECKSUM1       _SFR_MEM8 (0x00D5) /* Checksum byte 1 */
#define CRC_CHECKSUM2       _SFR_MEM8 (0x00D6) /* Checksum byte 2 */
#define CRC_CHECKSUM3       _SFR_MEM8 (0x00D7) /* Checksum byte 3 */

/* EDMA - Enhanced DMA Controller (0x0100) */
#define EDMA_BASE           _SFR_MEM8 (0x0100) /* EDMA Base Address */
#define EDMA_CTRL           _SFR_MEM8 (0x0100) /* Control */
#define EDMA_INTFLAGS       _SFR_MEM8 (0x0103) /* Transfer Interrupt Status */
#define EDMA_STATUS         _SFR_MEM8 (0x0104) /* Status */
#define EDMA_TEMP           _SFR_MEM8 (0x0106) /* Temporary Register For 16-bit Access */

/* EVSYS - Event System (0x0180) */
#define EVSYS_BASE          _SFR_MEM8 (0x0180) /* EVSYS Base Address */
#define EVSYS_CH0MUX        _SFR_MEM8 (0x0180) /* Event Channel 0 Multiplexer */
#define EVSYS_CH1MUX        _SFR_MEM8 (0x0181) /* Event Channel 1 Multiplexer */
#define EVSYS_CH2MUX        _SFR_MEM8 (0x0182) /* Event Channel 2 Multiplexer */
#define EVSYS_CH3MUX        _SFR_MEM8 (0x0183) /* Event Channel 3 Multiplexer */
#define EVSYS_CH4MUX        _SFR_MEM8 (0x0184) /* Event Channel 4 Multiplexer */
#define EVSYS_CH5MUX        _SFR_MEM8 (0x0185) /* Event Channel 5 Multiplexer */
#define EVSYS_CH6MUX        _SFR_MEM8 (0x0186) /* Event Channel 6 Multiplexer */
#define EVSYS_CH7MUX        _SFR_MEM8 (0x0187) /* Event Channel 7 Multiplexer */
#define EVSYS_CH0CTRL       _SFR_MEM8 (0x0188) /* Channel 0 Control Register */
#define EVSYS_CH1CTRL       _SFR_MEM8 (0x0189) /* Channel 1 Control Register */
#define EVSYS_CH2CTRL       _SFR_MEM8 (0x018A) /* Channel 2 Control Register */
#define EVSYS_CH3CTRL       _SFR_MEM8 (0x018B) /* Channel 3 Control Register */
#define EVSYS_CH4CTRL       _SFR_MEM8 (0x018C) /* Channel 4 Control Register */
#define EVSYS_CH5CTRL       _SFR_MEM8 (0x018D) /* Channel 5 Control Register */
#define EVSYS_CH6CTRL       _SFR_MEM8 (0x018E) /* Channel 6 Control Register */
#define EVSYS_CH7CTRL       _SFR_MEM8 (0x018F) /* Channel 7 Control Register */
#define EVSYS_STROBE        _SFR_MEM8 (0x0190) /* Event Strobe */
#define EVSYS_DATA          _SFR_MEM8 (0x0191) /* Event Data */
#define EVSYS_DFCTRL        _SFR_MEM8 (0x0192) /* Digital Filter Control Register */

/* NVM - Non-volatile Memory Controller (0x01C0) */
#define NVM_BASE            _SFR_MEM8 (0x01C0) /* NVM Base Address */
#define NVM_ADDR0           _SFR_MEM8 (0x01C0) /* Address Register 0 */
#define NVM_ADDR1           _SFR_MEM8 (0x01C1) /* Address Register 1 */
#define NVM_ADDR2           _SFR_MEM8 (0x01C2) /* Address Register 2 */
#define NVM_DATA0           _SFR_MEM8 (0x01C4) /* Data Register 0 */
#define NVM_DATA1           _SFR_MEM8 (0x01C5) /* Data Register 1 */
#define NVM_DATA2           _SFR_MEM8 (0x01C6) /* Data Register 2 */
#define NVM_CMD             _SFR_MEM8 (0x01CA) /* Command */
#define NVM_CTRLA           _SFR_MEM8 (0x01CB) /* Control Register A */
#define NVM_CTRLB           _SFR_MEM8 (0x01CC) /* Control Register B */
#define NVM_INTCTRL         _SFR_MEM8 (0x01CD) /* Interrupt Control */
#define NVM_STATUS          _SFR_MEM8 (0x01CF) /* Status */
#define NVM_LOCKBITS        _SFR_MEM8 (0x01D0) /* Lock Bits */

/* ADCA - Analog-to-Digital Converter (0x0200) */
#define ADCA_BASE           _SFR_MEM8 (0x0200) /* ADCA Base Address */
#define ADCA_CTRLA          _SFR_MEM8 (0x0200) /* Control Register A */
#define ADCA_CTRLB          _SFR_MEM8 (0x0201) /* Control Register B */
#define ADCA_REFCTRL        _SFR_MEM8 (0x0202) /* Reference Control */
#define ADCA_EVCTRL         _SFR_MEM8 (0x0203) /* Event Control */
#define ADCA_PRESCALER      _SFR_MEM8 (0x0204) /* Clock Prescaler */
#define ADCA_INTFLAGS       _SFR_MEM8 (0x0206) /* Interrupt Flags */
#define ADCA_TEMP           _SFR_MEM8 (0x0207) /* Temporary Register */
#define ADCA_SAMPCTRL       _SFR_MEM8 (0x0208) /* ADC Sampling Time Control Register */
#define ADCA_CAL            _SFR_MEM8 (0x020C) /* Calibration Value */
#define ADCA_CH0RES         _SFR_MEM16(0x0210) /* Channel 0 Result */
#define ADCA_CH0RESL        _SFR_MEM8 (0x0210) /* Channel 0 Result LOW BYTE */
#define ADCA_CH0RESH        _SFR_MEM8 (0x0211) /* Channel 0 Result HIGH BYTE */
#define ADCA_CMP            _SFR_MEM16(0x0218) /* Compare Value */
#define ADCA_CMPL           _SFR_MEM8 (0x0218) /* Compare Value LOW BYTE */
#define ADCA_CMPH           _SFR_MEM8 (0x0219) /* Compare Value HIGH BYTE */

/* DACA - Digital-to-Analog Converter (0x0300) */
#define DACA_BASE           _SFR_MEM8 (0x0300) /* DACA Base Address */
#define DACA_CTRLA          _SFR_MEM8 (0x0300) /* Control Register A */
#define DACA_CTRLB          _SFR_MEM8 (0x0301) /* Control Register B */
#define DACA_CTRLC          _SFR_MEM8 (0x0302) /* Control Register C */
#define DACA_EVCTRL         _SFR_MEM8 (0x0303) /* Event Input Control */
#define DACA_STATUS         _SFR_MEM8 (0x0305) /* Status */
#define DACA_CH0GAINCAL     _SFR_MEM8 (0x0308) /* Gain Calibration */
#define DACA_CH0OFFSETCAL   _SFR_MEM8 (0x0309) /* Offset Calibration */
#define DACA_CH1GAINCAL     _SFR_MEM8 (0x030A) /* Gain Calibration */
#define DACA_CH1OFFSETCAL   _SFR_MEM8 (0x030B) /* Offset Calibration */
#define DACA_CH0DATA        _SFR_MEM16(0x0318) /* Channel 0 Data */
#define DACA_CH0DATAL       _SFR_MEM8 (0x0318) /* Channel 0 Data LOW BYTE */
#define DACA_CH0DATAH       _SFR_MEM8 (0x0319) /* Channel 0 Data HIGH BYTE */
#define DACA_CH1DATA        _SFR_MEM16(0x031A) /* Channel 1 Data */
#define DACA_CH1DATAL       _SFR_MEM8 (0x031A) /* Channel 1 Data LOW BYTE */
#define DACA_CH1DATAH       _SFR_MEM8 (0x031B) /* Channel 1 Data HIGH BYTE */

/* ACA - Analog Comparator (0x0380) */
#define ACA_BASE            _SFR_MEM8 (0x0380) /* ACA Base Address */
#define ACA_AC0CTRL         _SFR_MEM8 (0x0380) /* Analog Comparator 0 Control */
#define ACA_AC1CTRL         _SFR_MEM8 (0x0381) /* Analog Comparator 1 Control */
#define ACA_AC0MUXCTRL      _SFR_MEM8 (0x0382) /* Analog Comparator 0 MUX Control */
#define ACA_AC1MUXCTRL      _SFR_MEM8 (0x0383) /* Analog Comparator 1 MUX Control */
#define ACA_CTRLA           _SFR_MEM8 (0x0384) /* Control Register A */
#define ACA_CTRLB           _SFR_MEM8 (0x0385) /* Control Register B */
#define ACA_WINCTRL         _SFR_MEM8 (0x0386) /* Window Mode Control */
#define ACA_STATUS          _SFR_MEM8 (0x0387) /* Status */
#define ACA_CURRCTRL        _SFR_MEM8 (0x0388) /* Current Source Control Register */
#define ACA_CURRCALIB       _SFR_MEM8 (0x0389) /* Current Source Calibration Register */

/* RTC - Real-Time Counter (0x0400) */
#define RTC_BASE            _SFR_MEM8 (0x0400) /* RTC Base Address */
#define RTC_CTRL            _SFR_MEM8 (0x0400) /* Control Register */
#define RTC_STATUS          _SFR_MEM8 (0x0401) /* Status Register */
#define RTC_INTCTRL         _SFR_MEM8 (0x0402) /* Interrupt Control Register */
#define RTC_INTFLAGS        _SFR_MEM8 (0x0403) /* Interrupt Flags */
#define RTC_TEMP            _SFR_MEM8 (0x0404) /* Temporary register */
#define RTC_CALIB           _SFR_MEM8 (0x0406) /* Calibration Register */
#define RTC_CNT             _SFR_MEM16(0x0408) /* Count Register */
#define RTC_CNTL            _SFR_MEM8 (0x0408) /* Count Register LOW BYTE */
#define RTC_CNTH            _SFR_MEM8 (0x0409) /* Count Register HIGH BYTE */
#define RTC_PER             _SFR_MEM16(0x040A) /* Period Register */
#define RTC_PERL            _SFR_MEM8 (0x040A) /* Period Register LOW BYTE */
#define RTC_PERH            _SFR_MEM8 (0x040B) /* Period Register HIGH BYTE */
#define RTC_COMP            _SFR_MEM16(0x040C) /* Compare Register */
#define RTC_COMPL           _SFR_MEM8 (0x040C) /* Compare Register LOW BYTE */
#define RTC_COMPH           _SFR_MEM8 (0x040D) /* Compare Register HIGH BYTE */

/* XCL - XMEGA Custom Logic (0x0460) */
#define XCL_BASE            _SFR_MEM8 (0x0460) /* XCL Base Address */
#define XCL_CTRLA           _SFR_MEM8 (0x0460) /* Control Register A */
#define XCL_CTRLB           _SFR_MEM8 (0x0461) /* Control Register B */
#define XCL_CTRLC           _SFR_MEM8 (0x0462) /* Control Register C */
#define XCL_CTRLD           _SFR_MEM8 (0x0463) /* Control Register D */
#define XCL_CTRLE           _SFR_MEM8 (0x0464) /* Control Register E */
#define XCL_CTRLF           _SFR_MEM8 (0x0465) /* Control Register F */
#define XCL_CTRLG           _SFR_MEM8 (0x0466) /* Control Register G */
#define XCL_INTCTRL         _SFR_MEM8 (0x0467) /* Interrupt Control Register */
#define XCL_INTFLAGS        _SFR_MEM8 (0x0468) /* Interrupt Flag Register */
#define XCL_PLC             _SFR_MEM8 (0x0469) /* Peripheral Lenght Control Register  */
#define XCL_CNTL            _SFR_MEM8 (0x046A) /* Counter Register Low */
#define XCL_CNTH            _SFR_MEM8 (0x046B) /* Counter Register High */
#define XCL_CMPL            _SFR_MEM8 (0x046C) /* Compare Register Low */
#define XCL_CMPH            _SFR_MEM8 (0x046D) /* Compare Register High */
#define XCL_PERCAPTL        _SFR_MEM8 (0x046E) /* Period or Capture Register Low */
#define XCL_PERCAPTH        _SFR_MEM8 (0x046F) /* Period or Capture Register High */

/* TWIC - Two-Wire Interface (0x0480) */
#define TWIC_BASE           _SFR_MEM8 (0x0480) /* TWIC Base Address */
#define TWIC_CTRL           _SFR_MEM8 (0x0480) /* TWI Common Control Register */

/* PORTA - I/O Ports (0x0600) */
#define PORTA_BASE          _SFR_MEM8 (0x0600) /* PORTA Base Address */
#define PORTA_DIR           _SFR_MEM8 (0x0600) /* I/O Port Data Direction */
#define PORTA_DIRSET        _SFR_MEM8 (0x0601) /* I/O Port Data Direction Set */
#define PORTA_DIRCLR        _SFR_MEM8 (0x0602) /* I/O Port Data Direction Clear */
#define PORTA_DIRTGL        _SFR_MEM8 (0x0603) /* I/O Port Data Direction Toggle */
#define PORTA_OUT           _SFR_MEM8 (0x0604) /* I/O Port Output */
#define PORTA_OUTSET        _SFR_MEM8 (0x0605) /* I/O Port Output Set */
#define PORTA_OUTCLR        _SFR_MEM8 (0x0606) /* I/O Port Output Clear */
#define PORTA_OUTTGL        _SFR_MEM8 (0x0607) /* I/O Port Output Toggle */
#define PORTA_IN            _SFR_MEM8 (0x0608) /* I/O port Input */
#define PORTA_INTCTRL       _SFR_MEM8 (0x0609) /* Interrupt Control Register */
#define PORTA_INTMASK       _SFR_MEM8 (0x060A) /* Port Interrupt Mask */
#define PORTA_INTFLAGS      _SFR_MEM8 (0x060C) /* Interrupt Flag Register */
#define PORTA_REMAP         _SFR_MEM8 (0x060E) /* Pin Remap Register */
#define PORTA_PIN0CTRL      _SFR_MEM8 (0x0610) /* Pin 0 Control Register */
#define PORTA_PIN1CTRL      _SFR_MEM8 (0x0611) /* Pin 1 Control Register */
#define PORTA_PIN2CTRL      _SFR_MEM8 (0x0612) /* Pin 2 Control Register */
#define PORTA_PIN3CTRL      _SFR_MEM8 (0x0613) /* Pin 3 Control Register */
#define PORTA_PIN4CTRL      _SFR_MEM8 (0x0614) /* Pin 4 Control Register */
#define PORTA_PIN5CTRL      _SFR_MEM8 (0x0615) /* Pin 5 Control Register */
#define PORTA_PIN6CTRL      _SFR_MEM8 (0x0616) /* Pin 6 Control Register */
#define PORTA_PIN7CTRL      _SFR_MEM8 (0x0617) /* Pin 7 Control Register */

/* PORTC - I/O Ports (0x0640) */
#define PORTC_BASE          _SFR_MEM8 (0x0640) /* PORTC Base Address */
#define PORTC_DIR           _SFR_MEM8 (0x0640) /* I/O Port Data Direction */
#define PORTC_DIRSET        _SFR_MEM8 (0x0641) /* I/O Port Data Direction Set */
#define PORTC_DIRCLR        _SFR_MEM8 (0x0642) /* I/O Port Data Direction Clear */
#define PORTC_DIRTGL        _SFR_MEM8 (0x0643) /* I/O Port Data Direction Toggle */
#define PORTC_OUT           _SFR_MEM8 (0x0644) /* I/O Port Output */
#define PORTC_OUTSET        _SFR_MEM8 (0x0645) /* I/O Port Output Set */
#define PORTC_OUTCLR        _SFR_MEM8 (0x0646) /* I/O Port Output Clear */
#define PORTC_OUTTGL        _SFR_MEM8 (0x0647) /* I/O Port Output Toggle */
#define PORTC_IN            _SFR_MEM8 (0x0648) /* I/O port Input */
#define PORTC_INTCTRL       _SFR_MEM8 (0x0649) /* Interrupt Control Register */
#define PORTC_INTMASK       _SFR_MEM8 (0x064A) /* Port Interrupt Mask */
#define PORTC_INTFLAGS      _SFR_MEM8 (0x064C) /* Interrupt Flag Register */
#define PORTC_REMAP         _SFR_MEM8 (0x064E) /* Pin Remap Register */
#define PORTC_PIN0CTRL      _SFR_MEM8 (0x0650) /* Pin 0 Control Register */
#define PORTC_PIN1CTRL      _SFR_MEM8 (0x0651) /* Pin 1 Control Register */
#define PORTC_PIN2CTRL      _SFR_MEM8 (0x0652) /* Pin 2 Control Register */
#define PORTC_PIN3CTRL      _SFR_MEM8 (0x0653) /* Pin 3 Control Register */
#define PORTC_PIN4CTRL      _SFR_MEM8 (0x0654) /* Pin 4 Control Register */
#define PORTC_PIN5CTRL      _SFR_MEM8 (0x0655) /* Pin 5 Control Register */
#define PORTC_PIN6CTRL      _SFR_MEM8 (0x0656) /* Pin 6 Control Register */
#define PORTC_PIN7CTRL      _SFR_MEM8 (0x0657) /* Pin 7 Control Register */

/* PORTD - I/O Ports (0x0660) */
#define PORTD_BASE          _SFR_MEM8 (0x0660) /* PORTD Base Address */
#define PORTD_DIR           _SFR_MEM8 (0x0660) /* I/O Port Data Direction */
#define PORTD_DIRSET        _SFR_MEM8 (0x0661) /* I/O Port Data Direction Set */
#define PORTD_DIRCLR        _SFR_MEM8 (0x0662) /* I/O Port Data Direction Clear */
#define PORTD_DIRTGL        _SFR_MEM8 (0x0663) /* I/O Port Data Direction Toggle */
#define PORTD_OUT           _SFR_MEM8 (0x0664) /* I/O Port Output */
#define PORTD_OUTSET        _SFR_MEM8 (0x0665) /* I/O Port Output Set */
#define PORTD_OUTCLR        _SFR_MEM8 (0x0666) /* I/O Port Output Clear */
#define PORTD_OUTTGL        _SFR_MEM8 (0x0667) /* I/O Port Output Toggle */
#define PORTD_IN            _SFR_MEM8 (0x0668) /* I/O port Input */
#define PORTD_INTCTRL       _SFR_MEM8 (0x0669) /* Interrupt Control Register */
#define PORTD_INTMASK       _SFR_MEM8 (0x066A) /* Port Interrupt Mask */
#define PORTD_INTFLAGS      _SFR_MEM8 (0x066C) /* Interrupt Flag Register */
#define PORTD_REMAP         _SFR_MEM8 (0x066E) /* Pin Remap Register */
#define PORTD_PIN0CTRL      _SFR_MEM8 (0x0670) /* Pin 0 Control Register */
#define PORTD_PIN1CTRL      _SFR_MEM8 (0x0671) /* Pin 1 Control Register */
#define PORTD_PIN2CTRL      _SFR_MEM8 (0x0672) /* Pin 2 Control Register */
#define PORTD_PIN3CTRL      _SFR_MEM8 (0x0673) /* Pin 3 Control Register */
#define PORTD_PIN4CTRL      _SFR_MEM8 (0x0674) /* Pin 4 Control Register */
#define PORTD_PIN5CTRL      _SFR_MEM8 (0x0675) /* Pin 5 Control Register */
#define PORTD_PIN6CTRL      _SFR_MEM8 (0x0676) /* Pin 6 Control Register */
#define PORTD_PIN7CTRL      _SFR_MEM8 (0x0677) /* Pin 7 Control Register */

/* PORTR - I/O Ports (0x07E0) */
#define PORTR_BASE          _SFR_MEM8 (0x07E0) /* PORTR Base Address */
#define PORTR_DIR           _SFR_MEM8 (0x07E0) /* I/O Port Data Direction */
#define PORTR_DIRSET        _SFR_MEM8 (0x07E1) /* I/O Port Data Direction Set */
#define PORTR_DIRCLR        _SFR_MEM8 (0x07E2) /* I/O Port Data Direction Clear */
#define PORTR_DIRTGL        _SFR_MEM8 (0x07E3) /* I/O Port Data Direction Toggle */
#define PORTR_OUT           _SFR_MEM8 (0x07E4) /* I/O Port Output */
#define PORTR_OUTSET        _SFR_MEM8 (0x07E5) /* I/O Port Output Set */
#define PORTR_OUTCLR        _SFR_MEM8 (0x07E6) /* I/O Port Output Clear */
#define PORTR_OUTTGL        _SFR_MEM8 (0x07E7) /* I/O Port Output Toggle */
#define PORTR_IN            _SFR_MEM8 (0x07E8) /* I/O port Input */
#define PORTR_INTCTRL       _SFR_MEM8 (0x07E9) /* Interrupt Control Register */
#define PORTR_INTMASK       _SFR_MEM8 (0x07EA) /* Port Interrupt Mask */
#define PORTR_INTFLAGS      _SFR_MEM8 (0x07EC) /* Interrupt Flag Register */
#define PORTR_REMAP         _SFR_MEM8 (0x07EE) /* Pin Remap Register */
#define PORTR_PIN0CTRL      _SFR_MEM8 (0x07F0) /* Pin 0 Control Register */
#define PORTR_PIN1CTRL      _SFR_MEM8 (0x07F1) /* Pin 1 Control Register */
#define PORTR_PIN2CTRL      _SFR_MEM8 (0x07F2) /* Pin 2 Control Register */
#define PORTR_PIN3CTRL      _SFR_MEM8 (0x07F3) /* Pin 3 Control Register */
#define PORTR_PIN4CTRL      _SFR_MEM8 (0x07F4) /* Pin 4 Control Register */
#define PORTR_PIN5CTRL      _SFR_MEM8 (0x07F5) /* Pin 5 Control Register */
#define PORTR_PIN6CTRL      _SFR_MEM8 (0x07F6) /* Pin 6 Control Register */
#define PORTR_PIN7CTRL      _SFR_MEM8 (0x07F7) /* Pin 7 Control Register */

/* TCC4 - 16-bit Timer/Counter 4 (0x0800) */
#define TCC44_BASE          _SFR_MEM8 (0x0800) /* TCC44 Base Address */
#define TCC44_CTRLA         _SFR_MEM8 (0x0800) /* Control  Register A */
#define TCC44_CTRLB         _SFR_MEM8 (0x0801) /* Control Register B */
#define TCC44_CTRLC         _SFR_MEM8 (0x0802) /* Control register C */
#define TCC44_CTRLD         _SFR_MEM8 (0x0803) /* Control Register D */
#define TCC44_CTRLE         _SFR_MEM8 (0x0804) /* Control Register E */
#define TCC44_CTRLF         _SFR_MEM8 (0x0805) /* Control Register F */
#define TCC44_INTCTRLA      _SFR_MEM8 (0x0806) /* Interrupt Control Register A */
#define TCC44_INTCTRLB      _SFR_MEM8 (0x0807) /* Interrupt Control Register B */
#define TCC44_CTRLGCLR      _SFR_MEM8 (0x0808) /* Control Register G Clear */
#define TCC44_CTRLGSET      _SFR_MEM8 (0x0809) /* Control Register G Set */
#define TCC44_CTRLHCLR      _SFR_MEM8 (0x080A) /* Control Register H Clear */
#define TCC44_CTRLHSET      _SFR_MEM8 (0x080B) /* Control Register H Set */
#define TCC44_INTFLAGS      _SFR_MEM8 (0x080C) /* Interrupt Flag Register */
#define TCC44_TEMP          _SFR_MEM8 (0x080F) /* Temporary Register For 16-bit Access */
#define TCC44_CNT           _SFR_MEM16(0x0820) /* Count */
#define TCC44_CNTL          _SFR_MEM8 (0x0820) /* Count LOW BYTE */
#define TCC44_CNTH          _SFR_MEM8 (0x0821) /* Count HIGH BYTE */
#define TCC44_PER           _SFR_MEM16(0x0826) /* Period */
#define TCC44_PERL          _SFR_MEM8 (0x0826) /* Period LOW BYTE */
#define TCC44_PERH          _SFR_MEM8 (0x0827) /* Period HIGH BYTE */
#define TCC44_CCA           _SFR_MEM16(0x0828) /* Compare or Capture A */
#define TCC44_CCAL          _SFR_MEM8 (0x0828) /* Compare or Capture A LOW BYTE */
#define TCC44_CCAH          _SFR_MEM8 (0x0829) /* Compare or Capture A HIGH BYTE */
#define TCC44_CCB           _SFR_MEM16(0x082A) /* Compare or Capture B */
#define TCC44_CCBL          _SFR_MEM8 (0x082A) /* Compare or Capture B LOW BYTE */
#define TCC44_CCBH          _SFR_MEM8 (0x082B) /* Compare or Capture B HIGH BYTE */
#define TCC44_CCC           _SFR_MEM16(0x082C) /* Compare or Capture C */
#define TCC44_CCCL          _SFR_MEM8 (0x082C) /* Compare or Capture C LOW BYTE */
#define TCC44_CCCH          _SFR_MEM8 (0x082D) /* Compare or Capture C HIGH BYTE */
#define TCC44_CCD           _SFR_MEM16(0x082E) /* Compare or Capture D */
#define TCC44_CCDL          _SFR_MEM8 (0x082E) /* Compare or Capture D LOW BYTE */
#define TCC44_CCDH          _SFR_MEM8 (0x082F) /* Compare or Capture D HIGH BYTE */
#define TCC44_PERBUF        _SFR_MEM16(0x0836) /* Period Buffer */
#define TCC44_PERBUFL       _SFR_MEM8 (0x0836) /* Period Buffer LOW BYTE */
#define TCC44_PERBUFH       _SFR_MEM8 (0x0837) /* Period Buffer HIGH BYTE */
#define TCC44_CCABUF        _SFR_MEM16(0x0838) /* Compare Or Capture A Buffer */
#define TCC44_CCABUFL       _SFR_MEM8 (0x0838) /* Compare Or Capture A Buffer LOW BYTE */
#define TCC44_CCABUFH       _SFR_MEM8 (0x0839) /* Compare Or Capture A Buffer HIGH BYTE */
#define TCC44_CCBBUF        _SFR_MEM16(0x083A) /* Compare Or Capture B Buffer */
#define TCC44_CCBBUFL       _SFR_MEM8 (0x083A) /* Compare Or Capture B Buffer LOW BYTE */
#define TCC44_CCBBUFH       _SFR_MEM8 (0x083B) /* Compare Or Capture B Buffer HIGH BYTE */
#define TCC44_CCCBUF        _SFR_MEM16(0x083C) /* Compare Or Capture C Buffer */
#define TCC44_CCCBUFL       _SFR_MEM8 (0x083C) /* Compare Or Capture C Buffer LOW BYTE */
#define TCC44_CCCBUFH       _SFR_MEM8 (0x083D) /* Compare Or Capture C Buffer HIGH BYTE */
#define TCC44_CCDBUF        _SFR_MEM16(0x083E) /* Compare Or Capture D Buffer */
#define TCC44_CCDBUFL       _SFR_MEM8 (0x083E) /* Compare Or Capture D Buffer LOW BYTE */
#define TCC44_CCDBUFH       _SFR_MEM8 (0x083F) /* Compare Or Capture D Buffer HIGH BYTE */

/* TCC5 - 16-bit Timer/Counter 5 (0x0840) */
#define TCC55_BASE          _SFR_MEM8 (0x0840) /* TCC55 Base Address */
#define TCC55_CTRLA         _SFR_MEM8 (0x0840) /* Control  Register A */
#define TCC55_CTRLB         _SFR_MEM8 (0x0841) /* Control Register B */
#define TCC55_CTRLC         _SFR_MEM8 (0x0842) /* Control register C */
#define TCC55_CTRLD         _SFR_MEM8 (0x0843) /* Control Register D */
#define TCC55_CTRLE         _SFR_MEM8 (0x0844) /* Control Register E */
#define TCC55_CTRLF         _SFR_MEM8 (0x0845) /* Control Register F */
#define TCC55_INTCTRLA      _SFR_MEM8 (0x0846) /* Interrupt Control Register A */
#define TCC55_INTCTRLB      _SFR_MEM8 (0x0847) /* Interrupt Control Register B */
#define TCC55_CTRLGCLR      _SFR_MEM8 (0x0848) /* Control Register G Clear */
#define TCC55_CTRLGSET      _SFR_MEM8 (0x0849) /* Control Register G Set */
#define TCC55_CTRLHCLR      _SFR_MEM8 (0x084A) /* Control Register H Clear */
#define TCC55_CTRLHSET      _SFR_MEM8 (0x084B) /* Control Register H Set */
#define TCC55_INTFLAGS      _SFR_MEM8 (0x084C) /* Interrupt Flag Register */
#define TCC55_TEMP          _SFR_MEM8 (0x084F) /* Temporary Register For 16-bit Access */
#define TCC55_CNT           _SFR_MEM16(0x0860) /* Count */
#define TCC55_CNTL          _SFR_MEM8 (0x0860) /* Count LOW BYTE */
#define TCC55_CNTH          _SFR_MEM8 (0x0861) /* Count HIGH BYTE */
#define TCC55_PER           _SFR_MEM16(0x0866) /* Period */
#define TCC55_PERL          _SFR_MEM8 (0x0866) /* Period LOW BYTE */
#define TCC55_PERH          _SFR_MEM8 (0x0867) /* Period HIGH BYTE */
#define TCC55_CCA           _SFR_MEM16(0x0868) /* Compare or Capture A */
#define TCC55_CCAL          _SFR_MEM8 (0x0868) /* Compare or Capture A LOW BYTE */
#define TCC55_CCAH          _SFR_MEM8 (0x0869) /* Compare or Capture A HIGH BYTE */
#define TCC55_CCB           _SFR_MEM16(0x086A) /* Compare or Capture B */
#define TCC55_CCBL          _SFR_MEM8 (0x086A) /* Compare or Capture B LOW BYTE */
#define TCC55_CCBH          _SFR_MEM8 (0x086B) /* Compare or Capture B HIGH BYTE */
#define TCC55_PERBUF        _SFR_MEM16(0x0876) /* Period Buffer */
#define TCC55_PERBUFL       _SFR_MEM8 (0x0876) /* Period Buffer LOW BYTE */
#define TCC55_PERBUFH       _SFR_MEM8 (0x0877) /* Period Buffer HIGH BYTE */
#define TCC55_CCABUF        _SFR_MEM16(0x0878) /* Compare Or Capture A Buffer */
#define TCC55_CCABUFL       _SFR_MEM8 (0x0878) /* Compare Or Capture A Buffer LOW BYTE */
#define TCC55_CCABUFH       _SFR_MEM8 (0x0879) /* Compare Or Capture A Buffer HIGH BYTE */
#define TCC55_CCBBUF        _SFR_MEM16(0x087A) /* Compare Or Capture B Buffer */
#define TCC55_CCBBUFL       _SFR_MEM8 (0x087A) /* Compare Or Capture B Buffer LOW BYTE */
#define TCC55_CCBBUFH       _SFR_MEM8 (0x087B) /* Compare Or Capture B Buffer HIGH BYTE */

/* FAULTC4 - Fault Extension (0x0880) */
#define FAULTC4_BASE        _SFR_MEM8 (0x0880) /* FAULTC4 Base Address */
#define FAULTC4_CTRLA       _SFR_MEM8 (0x0880) /* Control A Register */
#define FAULTC4_CTRLB       _SFR_MEM8 (0x0881) /* Control B Register */
#define FAULTC4_CTRLC       _SFR_MEM8 (0x0882) /* Control C Register */
#define FAULTC4_CTRLD       _SFR_MEM8 (0x0883) /* Control D Register */
#define FAULTC4_CTRLE       _SFR_MEM8 (0x0884) /* Control E Register */
#define FAULTC4_STATUS      _SFR_MEM8 (0x0885) /* Status Register */
#define FAULTC4_CTRLGCLR    _SFR_MEM8 (0x0886) /* Control Register G Clear */
#define FAULTC4_CTRLGSET    _SFR_MEM8 (0x0887) /* Control Register G set */

/* FAULTC5 - Fault Extension (0x0890) */
#define FAULTC5_BASE        _SFR_MEM8 (0x0890) /* FAULTC5 Base Address */
#define FAULTC5_CTRLA       _SFR_MEM8 (0x0890) /* Control A Register */
#define FAULTC5_CTRLB       _SFR_MEM8 (0x0891) /* Control B Register */
#define FAULTC5_CTRLC       _SFR_MEM8 (0x0892) /* Control C Register */
#define FAULTC5_CTRLD       _SFR_MEM8 (0x0893) /* Control D Register */
#define FAULTC5_CTRLE       _SFR_MEM8 (0x0894) /* Control E Register */
#define FAULTC5_STATUS      _SFR_MEM8 (0x0895) /* Status Register */
#define FAULTC5_CTRLGCLR    _SFR_MEM8 (0x0896) /* Control Register G Clear */
#define FAULTC5_CTRLGSET    _SFR_MEM8 (0x0897) /* Control Register G set */

/* WEXC - Waveform Extension (0x08A0) */
#define WEXC_BASE           _SFR_MEM8 (0x08A0) /* WEXC Base Address */
#define WEXC_CTRL           _SFR_MEM8 (0x08A0) /* Control Register */
#define WEXC_DTBOTH         _SFR_MEM8 (0x08A1) /* Dead-time Concurrent Write to Both Sides Register */
#define WEXC_DTLS           _SFR_MEM8 (0x08A2) /* Dead-time Low Side Register */
#define WEXC_DTHS           _SFR_MEM8 (0x08A3) /* Dead-time High Side Register */
#define WEXC_STATUSCLR      _SFR_MEM8 (0x08A4) /* Status Clear Register */
#define WEXC_STATUSSET      _SFR_MEM8 (0x08A5) /* Status Set Register */
#define WEXC_SWAP           _SFR_MEM8 (0x08A6) /* Swap Register */
#define WEXC_PGO            _SFR_MEM8 (0x08A7) /* Pattern Generation Override Register */
#define WEXC_PGV            _SFR_MEM8 (0x08A8) /* Pattern Generation Value Register */
#define WEXC_SWAPBUF        _SFR_MEM8 (0x08AA) /* Dead Time Low Side Buffer */
#define WEXC_PGOBUF         _SFR_MEM8 (0x08AB) /* Pattern Generation Overwrite Buffer Register */
#define WEXC_PGVBUF         _SFR_MEM8 (0x08AC) /* Pattern Generation Value Buffer Register */
#define WEXC_OUTOVDIS       _SFR_MEM8 (0x08AF) /* Output Override Disable Register  */

/* HIRESC - High-Resolution Extension (0x08B0) */
#define HIRESC_BASE         _SFR_MEM8 (0x08B0) /* HIRESC Base Address */
#define HIRESC_CTRLA        _SFR_MEM8 (0x08B0) /* Control Register A */

/* USARTC0 - Universal Synchronous/Asynchronous Receiver/Transmitter (0x08C0) */
#define USARTC0_BASE        _SFR_MEM8 (0x08C0) /* USARTC0 Base Address */
#define USARTC0_DATA        _SFR_MEM8 (0x08C0) /* Data Register */
#define USARTC0_STATUS      _SFR_MEM8 (0x08C1) /* Status Register */
#define USARTC0_CTRLA       _SFR_MEM8 (0x08C2) /* Control Register A */
#define USARTC0_CTRLB       _SFR_MEM8 (0x08C3) /* Control Register B */
#define USARTC0_CTRLC       _SFR_MEM8 (0x08C4) /* Control Register C */
#define USARTC0_CTRLD       _SFR_MEM8 (0x08C5) /* Control Register D */
#define USARTC0_BAUDCTRLA   _SFR_MEM8 (0x08C6) /* Baud Rate Control Register A */
#define USARTC0_BAUDCTRLB   _SFR_MEM8 (0x08C7) /* Baud Rate Control Register B */

/* SPIC - Serial Peripheral Interface with Buffer Modes (0x08E0) */
#define SPIC_BASE           _SFR_MEM8 (0x08E0) /* SPIC Base Address */
#define SPIC_CTRL           _SFR_MEM8 (0x08E0) /* Control Register */
#define SPIC_INTCTRL        _SFR_MEM8 (0x08E1) /* Interrupt Control Register */
#define SPIC_STATUS         _SFR_MEM8 (0x08E2) /* Status Register */
#define SPIC_DATA           _SFR_MEM8 (0x08E3) /* Data Register */
#define SPIC_CTRLB          _SFR_MEM8 (0x08E4) /* Control Register B */

/* IRCOM - IR Communication Module (0x08F8) */
#define IRCOM_BASE          _SFR_MEM8 (0x08F8) /* IRCOM Base Address */
#define IRCOM_CTRL          _SFR_MEM8 (0x08F8) /* Control Register */
#define IRCOM_TXPLCTRL      _SFR_MEM8 (0x08F9) /* IrDA Transmitter Pulse Length Control Register */
#define IRCOM_RXPLCTRL      _SFR_MEM8 (0x08FA) /* IrDA Receiver Pulse Length Control Register */

/* TCD5 - 16-bit Timer/Counter 5 (0x0940) */
#define TCD55_BASE          _SFR_MEM8 (0x0940) /* TCD55 Base Address */
#define TCD55_CTRLA         _SFR_MEM8 (0x0940) /* Control  Register A */
#define TCD55_CTRLB         _SFR_MEM8 (0x0941) /* Control Register B */
#define TCD55_CTRLC         _SFR_MEM8 (0x0942) /* Control register C */
#define TCD55_CTRLD         _SFR_MEM8 (0x0943) /* Control Register D */
#define TCD55_CTRLE         _SFR_MEM8 (0x0944) /* Control Register E */
#define TCD55_CTRLF         _SFR_MEM8 (0x0945) /* Control Register F */
#define TCD55_INTCTRLA      _SFR_MEM8 (0x0946) /* Interrupt Control Register A */
#define TCD55_INTCTRLB      _SFR_MEM8 (0x0947) /* Interrupt Control Register B */
#define TCD55_CTRLGCLR      _SFR_MEM8 (0x0948) /* Control Register G Clear */
#define TCD55_CTRLGSET      _SFR_MEM8 (0x0949) /* Control Register G Set */
#define TCD55_CTRLHCLR      _SFR_MEM8 (0x094A) /* Control Register H Clear */
#define TCD55_CTRLHSET      _SFR_MEM8 (0x094B) /* Control Register H Set */
#define TCD55_INTFLAGS      _SFR_MEM8 (0x094C) /* Interrupt Flag Register */
#define TCD55_TEMP          _SFR_MEM8 (0x094F) /* Temporary Register For 16-bit Access */
#define TCD55_CNT           _SFR_MEM16(0x0960) /* Count */
#define TCD55_CNTL          _SFR_MEM8 (0x0960) /* Count LOW BYTE */
#define TCD55_CNTH          _SFR_MEM8 (0x0961) /* Count HIGH BYTE */
#define TCD55_PER           _SFR_MEM16(0x0966) /* Period */
#define TCD55_PERL          _SFR_MEM8 (0x0966) /* Period LOW BYTE */
#define TCD55_PERH          _SFR_MEM8 (0x0967) /* Period HIGH BYTE */
#define TCD55_CCA           _SFR_MEM16(0x0968) /* Compare or Capture A */
#define TCD55_CCAL          _SFR_MEM8 (0x0968) /* Compare or Capture A LOW BYTE */
#define TCD55_CCAH          _SFR_MEM8 (0x0969) /* Compare or Capture A HIGH BYTE */
#define TCD55_CCB           _SFR_MEM16(0x096A) /* Compare or Capture B */
#define TCD55_CCBL          _SFR_MEM8 (0x096A) /* Compare or Capture B LOW BYTE */
#define TCD55_CCBH          _SFR_MEM8 (0x096B) /* Compare or Capture B HIGH BYTE */
#define TCD55_PERBUF        _SFR_MEM16(0x0976) /* Period Buffer */
#define TCD55_PERBUFL       _SFR_MEM8 (0x0976) /* Period Buffer LOW BYTE */
#define TCD55_PERBUFH       _SFR_MEM8 (0x0977) /* Period Buffer HIGH BYTE */
#define TCD55_CCABUF        _SFR_MEM16(0x0978) /* Compare Or Capture A Buffer */
#define TCD55_CCABUFL       _SFR_MEM8 (0x0978) /* Compare Or Capture A Buffer LOW BYTE */
#define TCD55_CCABUFH       _SFR_MEM8 (0x0979) /* Compare Or Capture A Buffer HIGH BYTE */
#define TCD55_CCBBUF        _SFR_MEM16(0x097A) /* Compare Or Capture B Buffer */
#define TCD55_CCBBUFL       _SFR_MEM8 (0x097A) /* Compare Or Capture B Buffer LOW BYTE */
#define TCD55_CCBBUFH       _SFR_MEM8 (0x097B) /* Compare Or Capture B Buffer HIGH BYTE */

/* USARTD0 - Universal Synchronous/Asynchronous Receiver/Transmitter (0x09C0) */
#define USARTD0_BASE        _SFR_MEM8 (0x09C0) /* USARTD0 Base Address */
#define USARTD0_DATA        _SFR_MEM8 (0x09C0) /* Data Register */
#define USARTD0_STATUS      _SFR_MEM8 (0x09C1) /* Status Register */
#define USARTD0_CTRLA       _SFR_MEM8 (0x09C2) /* Control Register A */
#define USARTD0_CTRLB       _SFR_MEM8 (0x09C3) /* Control Register B */
#define USARTD0_CTRLC       _SFR_MEM8 (0x09C4) /* Control Register C */
#define USARTD0_CTRLD       _SFR_MEM8 (0x09C5) /* Control Register D */
#define USARTD0_BAUDCTRLA   _SFR_MEM8 (0x09C6) /* Baud Rate Control Register A */
#define USARTD0_BAUDCTRLB   _SFR_MEM8 (0x09C7) /* Baud Rate Control Register B */
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

/* PORTR interrupt vectors */
#define PORTR_INT_vect_num   (2)                 
#define PORTR_INT_vect       _VECTOR(2)          /* PORTR - INT Interrupt */

/* EDMA interrupt vectors */
#define EDMA_CH0_vect_num    (3)                 
#define EDMA_CH0_vect        _VECTOR(3)          /* EDMA - CH0 Interrupt */
#define EDMA_CH1_vect_num    (4)                 
#define EDMA_CH1_vect        _VECTOR(4)          /* EDMA - CH1 Interrupt */
#define EDMA_CH2_vect_num    (5)                 
#define EDMA_CH2_vect        _VECTOR(5)          /* EDMA - CH2 Interrupt */
#define EDMA_CH3_vect_num    (6)                 
#define EDMA_CH3_vect        _VECTOR(6)          /* EDMA - CH3 Interrupt */

/* RTC interrupt vectors */
#define RTC_OVF_vect_num     (7)                 
#define RTC_OVF_vect         _VECTOR(7)          /* RTC - OVF Interrupt */
#define RTC_COMP_vect_num    (8)                 
#define RTC_COMP_vect        _VECTOR(8)          /* RTC - COMP Interrupt */

/* PORTC interrupt vectors */
#define PORTC_INT_vect_num   (9)                 
#define PORTC_INT_vect       _VECTOR(9)          /* PORTC - INT Interrupt */

/* TWIC interrupt vectors */
#define TWIC_TWIS_vect_num   (10)                
#define TWIC_TWIS_vect       _VECTOR(10)         /* TWIC - TWIS Interrupt */
#define TWIC_TWIM_vect_num   (11)                
#define TWIC_TWIM_vect       _VECTOR(11)         /* TWIC - TWIM Interrupt */

/* TCC4 interrupt vectors */
#define TCC4_OVF_vect_num    (12)                
#define TCC4_OVF_vect        _VECTOR(12)         /* TCC4 - OVF Interrupt */
#define TCC4_ERR_vect_num    (13)                
#define TCC4_ERR_vect        _VECTOR(13)         /* TCC4 - ERR Interrupt */
#define TCC4_CCA_vect_num    (14)                
#define TCC4_CCA_vect        _VECTOR(14)         /* TCC4 - CCA Interrupt */
#define TCC4_CCB_vect_num    (15)                
#define TCC4_CCB_vect        _VECTOR(15)         /* TCC4 - CCB Interrupt */
#define TCC4_CCC_vect_num    (16)                
#define TCC4_CCC_vect        _VECTOR(16)         /* TCC4 - CCC Interrupt */
#define TCC4_CCD_vect_num    (17)                
#define TCC4_CCD_vect        _VECTOR(17)         /* TCC4 - CCD Interrupt */

/* TCC5 interrupt vectors */
#define TCC5_OVF_vect_num    (18)                
#define TCC5_OVF_vect        _VECTOR(18)         /* TCC5 - OVF Interrupt */
#define TCC5_ERR_vect_num    (19)                
#define TCC5_ERR_vect        _VECTOR(19)         /* TCC5 - ERR Interrupt */
#define TCC5_CCA_vect_num    (20)                
#define TCC5_CCA_vect        _VECTOR(20)         /* TCC5 - CCA Interrupt */
#define TCC5_CCB_vect_num    (21)                
#define TCC5_CCB_vect        _VECTOR(21)         /* TCC5 - CCB Interrupt */

/* SPIC interrupt vectors */
#define SPIC_INT_vect_num    (22)                
#define SPIC_INT_vect        _VECTOR(22)         /* SPIC - INT Interrupt */

/* USARTC0 interrupt vectors */
#define USARTC0_RXC_vect_num (23)                
#define USARTC0_RXC_vect     _VECTOR(23)         /* USARTC0 - RXC Interrupt */
#define USARTC0_DRE_vect_num (24)                
#define USARTC0_DRE_vect     _VECTOR(24)         /* USARTC0 - DRE Interrupt */
#define USARTC0_TXC_vect_num (25)                
#define USARTC0_TXC_vect     _VECTOR(25)         /* USARTC0 - TXC Interrupt */

/* NVM interrupt vectors */
#define NVM_EE_vect_num      (26)                
#define NVM_EE_vect          _VECTOR(26)         /* NVM - EE Interrupt */
#define NVM_SPM_vect_num     (27)                
#define NVM_SPM_vect         _VECTOR(27)         /* NVM - SPM Interrupt */

/* XCL interrupt vectors */
#define XCL_UNF_vect_num     (28)                
#define XCL_UNF_vect         _VECTOR(28)         /* XCL - UNF Interrupt */
#define XCL_CC_vect_num      (29)                
#define XCL_CC_vect          _VECTOR(29)         /* XCL - CC Interrupt */

/* PORTA interrupt vectors */
#define PORTA_INT_vect_num   (30)                
#define PORTA_INT_vect       _VECTOR(30)         /* PORTA - INT Interrupt */

/* ACA interrupt vectors */
#define ACA_AC0_vect_num     (31)                
#define ACA_AC0_vect         _VECTOR(31)         /* ACA - AC0 Interrupt */
#define ACA_AC1_vect_num     (32)                
#define ACA_AC1_vect         _VECTOR(32)         /* ACA - AC1 Interrupt */
#define ACA_ACW_vect_num     (33)                
#define ACA_ACW_vect         _VECTOR(33)         /* ACA - ACW Interrupt */

/* ADCA interrupt vectors */
#define ADCA_CH0_vect_num    (34)                
#define ADCA_CH0_vect        _VECTOR(34)         /* ADCA - CH0 Interrupt */

/* PORTD interrupt vectors */
#define PORTD_INT_vect_num   (35)                
#define PORTD_INT_vect       _VECTOR(35)         /* PORTD - INT Interrupt */

/* TCD5 interrupt vectors */
#define TCD5_OVF_vect_num    (36)                
#define TCD5_OVF_vect        _VECTOR(36)         /* TCD5 - OVF Interrupt */
#define TCD5_ERR_vect_num    (37)                
#define TCD5_ERR_vect        _VECTOR(37)         /* TCD5 - ERR Interrupt */
#define TCD5_CCA_vect_num    (38)                
#define TCD5_CCA_vect        _VECTOR(38)         /* TCD5 - CCA Interrupt */
#define TCD5_CCB_vect_num    (39)                
#define TCD5_CCB_vect        _VECTOR(39)         /* TCD5 - CCB Interrupt */

/* USARTD0 interrupt vectors */
#define USARTD0_RXC_vect_num (40)                
#define USARTD0_RXC_vect     _VECTOR(40)         /* USARTD0 - RXC Interrupt */
#define USARTD0_DRE_vect_num (41)                
#define USARTD0_DRE_vect     _VECTOR(41)         /* USARTD0 - DRE Interrupt */
#define USARTD0_TXC_vect_num (42)                
#define USARTD0_TXC_vect     _VECTOR(42)         /* USARTD0 - TXC Interrupt */

/* Vector Table Size */
#define _VECTOR_SIZE         (4)                 /* Size of individual vector. */
#define _VECTORS_SIZE        (43 * _VECTOR_SIZE) /* Size of all vectors */
/*
================================================================================
Constants
================================================================================
*/

#define PROGMEM_START              (0x0000)                                             
#define PROGMEM_SIZE               (0x5000)                                             
#define PROGMEM_END                (PROGMEM_START + PROGMEM_SIZE - 1)                   

#define APP_SECTION_START          (0x0000)                                             
#define APP_SECTION_SIZE           (0x4000)                                             
#define APP_SECTION_PAGE_SIZE      (0x0080)                                             
#define APP_SECTION_END            (APP_SECTION_START + APP_SECTION_SIZE - 1)           

#define APPTABLE_SECTION_START     (0x3000)                                             
#define APPTABLE_SECTION_SIZE      (0x1000)                                             
#define APPTABLE_SECTION_PAGE_SIZE (0x0080)                                             
#define APPTABLE_SECTION_END       (APPTABLE_SECTION_START + APPTABLE_SECTION_SIZE - 1) 

#define BOOT_SECTION_START         (0x4000)                                             
#define BOOT_SECTION_SIZE          (0x1000)                                             
#define BOOT_SECTION_PAGE_SIZE     (0x0080)                                             
#define BOOT_SECTION_END           (BOOT_SECTION_START + BOOT_SECTION_SIZE - 1)         

#define DATAMEM_START           (0x0000)                                       
#define DATAMEM_SIZE            (0x2800)                                       
#define DATAMEM_END             (DATAMEM_START + DATAMEM_SIZE - 1)             

#define IO_START                (0x0000)                                       
#define IO_SIZE                 (0x1000)                                       
#define IO_PAGE_SIZE            (0x0001)                                       
#define IO_END                  (IO_START + IO_SIZE - 1)                       

#define MAPPED_EEPROM_START     (0x1000)                                       
#define MAPPED_EEPROM_SIZE      (0x0200)                                       
#define MAPPED_EEPROM_PAGE_SIZE (0x0001)                                       
#define MAPPED_EEPROM_END       (MAPPED_EEPROM_START + MAPPED_EEPROM_SIZE - 1) 

#define INTERNAL_SRAM_START     (0x2000)                                       
#define INTERNAL_SRAM_SIZE      (0x0800)                                       
#define INTERNAL_SRAM_PAGE_SIZE (0x0001)                                       
#define INTERNAL_SRAM_END       (INTERNAL_SRAM_START + INTERNAL_SRAM_SIZE - 1) 

#define EEPROMMEM_START  (0x0000)                               
#define EEPROMMEM_SIZE   (0x0200)                               
#define EEPROMMEM_END    (EEPROMMEM_START + EEPROMMEM_SIZE - 1) 

#define EEPROM_START     (0x0000)                               
#define EEPROM_SIZE      (0x0200)                               
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
#define FUSESMEM_SIZE   (0x0007)                             
#define FUSESMEM_END    (FUSESMEM_START + FUSESMEM_SIZE - 1) 

#define FUSES_START     (0x0000)                             
#define FUSES_SIZE      (0x0007)                             
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
#define USER_SIGNATURESMEM_SIZE   (0x0080)                                                 
#define USER_SIGNATURESMEM_END    (USER_SIGNATURESMEM_START + USER_SIGNATURESMEM_SIZE - 1) 

#define USER_SIGNATURES_START     (0x0000)                                                 
#define USER_SIGNATURES_SIZE      (0x0080)                                                 
#define USER_SIGNATURES_PAGE_SIZE (0x0080)                                                 
#define USER_SIGNATURES_END       (USER_SIGNATURES_START + USER_SIGNATURES_SIZE - 1)       

#define PROD_SIGNATURESMEM_START  (0x0000)                                                 
#define PROD_SIGNATURESMEM_SIZE   (0x0036)                                                 
#define PROD_SIGNATURESMEM_END    (PROD_SIGNATURESMEM_START + PROD_SIGNATURESMEM_SIZE - 1) 

#define PROD_SIGNATURES_START     (0x0000)                                                 
#define PROD_SIGNATURES_SIZE      (0x0036)                                                 
#define PROD_SIGNATURES_PAGE_SIZE (0x0080)                                                 
#define PROD_SIGNATURES_END       (PROD_SIGNATURES_START + PROD_SIGNATURES_SIZE - 1)       

/* ============ Port Bits ============ */


#define PA0 (0) 
#define PA1 (1) 
#define PA2 (2) 
#define PA3 (3) 
#define PA4 (4) 
#define PA5 (5) 
#define PA6 (6) 
#define PA7 (7) 

#define PC0 (0) 
#define PC1 (1) 
#define PC2 (2) 
#define PC3 (3) 
#define PC4 (4) 
#define PC5 (5) 
#define PC6 (6) 
#define PC7 (7) 

#define PD0 (0) 
#define PD1 (1) 
#define PD2 (2) 
#define PD3 (3) 
#define PD4 (4) 
#define PD5 (5) 
#define PD6 (6) 
#define PD7 (7) 

#define PR0 (0) 
#define PR1 (1) 

/*
================================================================================
Fuses/LockBits/Signatures
================================================================================
*/

/* ============ Fuses ============ */

#define FUSE_MEMORY_SIZE 6 

/* Fuse offset 0x00 */

/* Fuse offset 0x01 */

/* Fuse offset 0x02 */

/* Fuse offset 0x03 */

/* Fuse offset 0x04 */

/* Fuse offset 0x05 */

/* Fuse offset 0x06 */


/* ========== Lock Bits ========== */
#define __LOCK_BITS_EXIST  


/* ========== Signature ========== */
#define SIGNATURE_0 (0x1E) 
#define SIGNATURE_1 (0x94) 
#define SIGNATURE_2 (0x45) 

#endif /* #ifdef _AVR_ATxmega16E5_H_INCLUDED */
