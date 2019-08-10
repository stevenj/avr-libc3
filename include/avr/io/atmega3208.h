/******************************************************************************
 *   This file is part of avr-libc3.                                          * 
 *                                                                            * 
 *   Automatically created by devtools/gen-ioheader-atdf.py (V0.91)           * 
 *                                                                            * 
 *   .atpack File: ATmega3208.atdf                                            * 
 *   .ATDF File:   atdf/ATmega3208.atdf                                       * 
 *   Version:      2.0.12                                                     * 
 *   Date:         2019-04-26                                                 * 
 *   Device:       ATmega3208                                                 * 
 *   Architecture: AVR8X                                                      * 
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
#  define _AVR_IOXXX_H_ "ioATmega3208.h"
#else
#  error "Attempt to include more than one <avr/ioXXX.h> file."
#endif

#ifndef _AVR_ATmega3208_H_INCLUDED
#  define _AVR_ATmega3208_H_INCLUDED

/*
================================================================================
Ungrouped common register
================================================================================
*/

#define GPIOR0 _SFR_MEM8 (0x1C) /* General Purpose IO Register 0 */
#define GPIOR1 _SFR_MEM8 (0x1D) /* General Purpose IO Register 1 */
#define GPIOR2 _SFR_MEM8 (0x1E) /* General Purpose IO Register 2 */
#define GPIOR3 _SFR_MEM8 (0x1F) /* General Purpose IO Register 3 */

#define CCP    _SFR_MEM8 (0x34) /* Configuration Change Protection */

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
AC - Analog Comparator
--------------------------------------------------------------------------------
*/

typedef struct AC_struct
{
    register8_t CTRLA;    /* Control A */
    register8_t rsv_0x01; /* RESERVED REGISTER */
    register8_t MUXCTRLA; /* Mux Control A */
    register8_t rsv_0x03; /* RESERVED REGISTER */
    register8_t DACREF;   /* Referance scale control */
    register8_t rsv_0x05; /* RESERVED REGISTER */
    register8_t INTCTRL;  /* Interrupt Control */
    register8_t STATUS;   /* Status */
} AC_t;


/* Enable */
typedef enum AC_ENABLE_enum
{
    AC_ENABLE_CLEAR_gc = (0x00), /* Enable - CLEAR */
    AC_ENABLE_SET_gc   = (0x01), /* Enable - SET */
} AC_ENABLE_t;

/* Hysteresis Mode */
typedef enum AC_HYSMODE_enum
{
    AC_HYSMODE_OFF_gc  = (0x00<<1), /* No hysteresis */
    AC_HYSMODE_10mV_gc = (0x01<<1), /* 10mV hysteresis */
    AC_HYSMODE_25mV_gc = (0x02<<1), /* 25mV hysteresis */
    AC_HYSMODE_50mV_gc = (0x03<<1), /* 50mV hysteresis */
} AC_HYSMODE_t;

/* Interrupt Mode */
typedef enum AC_INTMODE_enum
{
    AC_INTMODE_BOTHEDGE_gc = (0x00<<4), /* Any Edge */
    AC_INTMODE_NEGEDGE_gc  = (0x02<<4), /* Negative Edge */
    AC_INTMODE_POSEDGE_gc  = (0x03<<4), /* Positive Edge */
} AC_INTMODE_t;

/* Low Power Mode */
typedef enum AC_LPMODE_enum
{
    AC_LPMODE_DIS_gc = (0x00<<3), /* Low power mode disabled */
    AC_LPMODE_EN_gc  = (0x01<<3), /* Low power mode enabled */
} AC_LPMODE_t;

/* Output Buffer Enable */
typedef enum AC_OUTEN_enum
{
    AC_OUTEN_CLEAR_gc = (0x00), /* Output Buffer Enable - CLEAR */
    AC_OUTEN_SET_gc   = (0x40), /* Output Buffer Enable - SET */
} AC_OUTEN_t;

/* Run in Standby Mode */
typedef enum AC_RUNSTDBY_enum
{
    AC_RUNSTDBY_CLEAR_gc = (0x00), /* Run in Standby Mode - CLEAR */
    AC_RUNSTDBY_SET_gc   = (0x80), /* Run in Standby Mode - SET */
} AC_RUNSTDBY_t;

/* Analog Comparator 0 Interrupt Enable */
typedef enum AC_CMP_enum
{
    AC_CMP_CLEAR_gc = (0x00), /* Analog Comparator 0 Interrupt Enable - CLEAR */
    AC_CMP_SET_gc   = (0x01), /* Analog Comparator 0 Interrupt Enable - SET */
} AC_CMP_t;

/* Invert AC Output */
typedef enum AC_INVERT_enum
{
    AC_INVERT_CLEAR_gc = (0x00), /* Invert AC Output - CLEAR */
    AC_INVERT_SET_gc   = (0x80), /* Invert AC Output - SET */
} AC_INVERT_t;

/* Negative Input MUX Selection */
typedef enum AC_MUXNEG_enum
{
    AC_MUXNEG_PIN0_gc   = (0x00), /* Negative Pin 0 */
    AC_MUXNEG_PIN1_gc   = (0x01), /* Negative Pin 1 */
    AC_MUXNEG_PIN2_gc   = (0x02), /* Negative Pin 2 */
    AC_MUXNEG_DACREF_gc = (0x03), /* DAC Voltage Reference */
} AC_MUXNEG_t;

/* Positive Input MUX Selection */
typedef enum AC_MUXPOS_enum
{
    AC_MUXPOS_PIN0_gc = (0x00<<3), /* Positive Pin 0 */
    AC_MUXPOS_PIN1_gc = (0x01<<3), /* Positive Pin 1 */
    AC_MUXPOS_PIN2_gc = (0x02<<3), /* Positive Pin 2 */
    AC_MUXPOS_PIN3_gc = (0x03<<3), /* Positive Pin 3 */
} AC_MUXPOS_t;

/* Analog Comparator Interrupt Flag */
typedef enum AC_CMP_enum
{
    AC_CMP_CLEAR_gc = (0x00), /* Analog Comparator Interrupt Flag - CLEAR */
    AC_CMP_SET_gc   = (0x01), /* Analog Comparator Interrupt Flag - SET */
} AC_CMP_t;

/* Analog Comparator State */
typedef enum AC_STATE_enum
{
    AC_STATE_CLEAR_gc = (0x00), /* Analog Comparator State - CLEAR */
    AC_STATE_SET_gc   = (0x10), /* Analog Comparator State - SET */
} AC_STATE_t;

/*
--------------------------------------------------------------------------------
ADC - Analog to Digital Converter
--------------------------------------------------------------------------------
*/

typedef struct ADC_struct
{
    register8_t CTRLA;       /* Control A */
    register8_t CTRLB;       /* Control B */
    register8_t CTRLC;       /* Control C */
    register8_t CTRLD;       /* Control D */
    register8_t CTRLE;       /* Control E */
    register8_t SAMPCTRL;    /* Sample Control */
    register8_t MUXPOS;      /* Positive mux input */
    register8_t rsv_0x07;    /* RESERVED REGISTER */
    register8_t COMMAND;     /* Command */
    register8_t EVCTRL;      /* Event Control */
    register8_t INTCTRL;     /* Interrupt Control */
    register8_t INTFLAGS;    /* Interrupt Flags */
    register8_t DBGCTRL;     /* Debug Control */
    register8_t TEMP;        /* Temporary Data */
    register8_t rsv_0x0E[2]; /* RESERVED REGISTER BLOCK */
    _REGISTER16 (RES);       /* ADC Accumulator Result */
    register8_t rsv_0x11;    /* RESERVED REGISTER */
    _REGISTER16 (WINLT);     /* Window comparator low threshold */
    register8_t rsv_0x13;    /* RESERVED REGISTER */
    _REGISTER16 (WINHT);     /* Window comparator high threshold */
    register8_t rsv_0x15;    /* RESERVED REGISTER */
    register8_t CALIB;       /* Calibration */
} ADC_t;


/* Duty Cycle */
typedef enum ADC_DUTYCYC_enum
{
    ADC_DUTYCYC_DUTY50_gc = (0x00), /* 50% Duty cycle */
    ADC_DUTYCYC_DUTY25_gc = (0x01), /* 25% Duty cycle */
} ADC_DUTYCYC_t;

/* Start Conversion Operation */
typedef enum ADC_STCONV_enum
{
    ADC_STCONV_CLEAR_gc = (0x00), /* Start Conversion Operation - CLEAR */
    ADC_STCONV_SET_gc   = (0x01), /* Start Conversion Operation - SET */
} ADC_STCONV_t;

/* ADC Enable */
typedef enum ADC_ENABLE_enum
{
    ADC_ENABLE_CLEAR_gc = (0x00), /* ADC Enable - CLEAR */
    ADC_ENABLE_SET_gc   = (0x01), /* ADC Enable - SET */
} ADC_ENABLE_t;

/* ADC Freerun mode */
typedef enum ADC_FREERUN_enum
{
    ADC_FREERUN_CLEAR_gc = (0x00), /* ADC Freerun mode - CLEAR */
    ADC_FREERUN_SET_gc   = (0x02), /* ADC Freerun mode - SET */
} ADC_FREERUN_t;

/* ADC Resolution */
typedef enum ADC_RESSEL_enum
{
    ADC_RESSEL_10BIT_gc = (0x00<<2), /* 10-bit mode */
    ADC_RESSEL_8BIT_gc  = (0x01<<2), /* 8-bit mode */
} ADC_RESSEL_t;

/* Run standby mode */
typedef enum ADC_RUNSTBY_enum
{
    ADC_RUNSTBY_CLEAR_gc = (0x00), /* Run standby mode - CLEAR */
    ADC_RUNSTBY_SET_gc   = (0x80), /* Run standby mode - SET */
} ADC_RUNSTBY_t;

/* Accumulation Samples */
typedef enum ADC_SAMPNUM_enum
{
    ADC_SAMPNUM_ACC1_gc  = (0x00), /* 1 ADC sample */
    ADC_SAMPNUM_ACC2_gc  = (0x01), /* Accumulate 2 samples */
    ADC_SAMPNUM_ACC4_gc  = (0x02), /* Accumulate 4 samples */
    ADC_SAMPNUM_ACC8_gc  = (0x03), /* Accumulate 8 samples */
    ADC_SAMPNUM_ACC16_gc = (0x04), /* Accumulate 16 samples */
    ADC_SAMPNUM_ACC32_gc = (0x05), /* Accumulate 32 samples */
    ADC_SAMPNUM_ACC64_gc = (0x06), /* Accumulate 64 samples */
} ADC_SAMPNUM_t;

/* Clock Pre-scaler */
typedef enum ADC_PRESC_enum
{
    ADC_PRESC_DIV2_gc   = (0x00), /* CLK_PER divided by 2 */
    ADC_PRESC_DIV4_gc   = (0x01), /* CLK_PER divided by 4 */
    ADC_PRESC_DIV8_gc   = (0x02), /* CLK_PER divided by 8 */
    ADC_PRESC_DIV16_gc  = (0x03), /* CLK_PER divided by 16 */
    ADC_PRESC_DIV32_gc  = (0x04), /* CLK_PER divided by 32 */
    ADC_PRESC_DIV64_gc  = (0x05), /* CLK_PER divided by 64 */
    ADC_PRESC_DIV128_gc = (0x06), /* CLK_PER divided by 128 */
    ADC_PRESC_DIV256_gc = (0x07), /* CLK_PER divided by 256 */
} ADC_PRESC_t;

/* Reference Selection */
typedef enum ADC_REFSEL_enum
{
    ADC_REFSEL_INTREF_gc = (0x00<<4), /* Internal reference */
    ADC_REFSEL_VDDREF_gc = (0x01<<4), /* VDD */
    ADC_REFSEL_VREFA_gc  = (0x02<<4), /* External reference */
} ADC_REFSEL_t;

/* Sample Capacitance Selection */
typedef enum ADC_SAMPCAP_enum
{
    ADC_SAMPCAP_CLEAR_gc = (0x00), /* Sample Capacitance Selection - CLEAR */
    ADC_SAMPCAP_SET_gc   = (0x40), /* Sample Capacitance Selection - SET */
} ADC_SAMPCAP_t;

/* Automatic Sampling Delay Variation */
typedef enum ADC_ASDV_enum
{
    ADC_ASDV_ASVOFF_gc = (0x00<<4), /* The Automatic Sampling Delay Variation is disabled */
    ADC_ASDV_ASVON_gc  = (0x01<<4), /* The Automatic Sampling Delay Variation is enabled */
} ADC_ASDV_t;

/* Initial Delay Selection */
typedef enum ADC_INITDLY_enum
{
    ADC_INITDLY_DLY0_gc   = (0x00<<5), /* Delay 0 CLK_ADC cycles */
    ADC_INITDLY_DLY16_gc  = (0x01<<5), /* Delay 16 CLK_ADC cycles */
    ADC_INITDLY_DLY32_gc  = (0x02<<5), /* Delay 32 CLK_ADC cycles */
    ADC_INITDLY_DLY64_gc  = (0x03<<5), /* Delay 64 CLK_ADC cycles */
    ADC_INITDLY_DLY128_gc = (0x04<<5), /* Delay 128 CLK_ADC cycles */
    ADC_INITDLY_DLY256_gc = (0x05<<5), /* Delay 256 CLK_ADC cycles */
} ADC_INITDLY_t;

/* Sampling Delay Selection */
#define ADC_CTRLD_SAMPDLY_gc(x) (x & 0x0F)

/* Window Comparator Mode */
typedef enum ADC_WINCM_enum
{
    ADC_WINCM_NONE_gc    = (0x00), /* No Window Comparison */
    ADC_WINCM_BELOW_gc   = (0x01), /* Below Window */
    ADC_WINCM_ABOVE_gc   = (0x02), /* Above Window */
    ADC_WINCM_INSIDE_gc  = (0x03), /* Inside Window */
    ADC_WINCM_OUTSIDE_gc = (0x04), /* Outside Window */
} ADC_WINCM_t;

/* Debug run */
typedef enum ADC_DBGRUN_enum
{
    ADC_DBGRUN_CLEAR_gc = (0x00), /* Debug run - CLEAR */
    ADC_DBGRUN_SET_gc   = (0x01), /* Debug run - SET */
} ADC_DBGRUN_t;

/* Start Event Input Enable */
typedef enum ADC_STARTEI_enum
{
    ADC_STARTEI_CLEAR_gc = (0x00), /* Start Event Input Enable - CLEAR */
    ADC_STARTEI_SET_gc   = (0x01), /* Start Event Input Enable - SET */
} ADC_STARTEI_t;

/* Result Ready Interrupt Enable */
typedef enum ADC_RESRDY_enum
{
    ADC_RESRDY_CLEAR_gc = (0x00), /* Result Ready Interrupt Enable - CLEAR */
    ADC_RESRDY_SET_gc   = (0x01), /* Result Ready Interrupt Enable - SET */
} ADC_RESRDY_t;

/* Window Comparator Interrupt Enable */
typedef enum ADC_WCMP_enum
{
    ADC_WCMP_CLEAR_gc = (0x00), /* Window Comparator Interrupt Enable - CLEAR */
    ADC_WCMP_SET_gc   = (0x02), /* Window Comparator Interrupt Enable - SET */
} ADC_WCMP_t;

/* Result Ready Flag */
typedef enum ADC_RESRDY_enum
{
    ADC_RESRDY_CLEAR_gc = (0x00), /* Result Ready Flag - CLEAR */
    ADC_RESRDY_SET_gc   = (0x01), /* Result Ready Flag - SET */
} ADC_RESRDY_t;

/* Window Comparator Flag */
typedef enum ADC_WCMP_enum
{
    ADC_WCMP_CLEAR_gc = (0x00), /* Window Comparator Flag - CLEAR */
    ADC_WCMP_SET_gc   = (0x02), /* Window Comparator Flag - SET */
} ADC_WCMP_t;

/* Analog Channel Selection Bits */
typedef enum ADC_MUXPOS_enum
{
    ADC_MUXPOS_AIN0_gc      = (0x00), /* ADC input pin 0 */
    ADC_MUXPOS_AIN1_gc      = (0x01), /* ADC input pin 1 */
    ADC_MUXPOS_AIN2_gc      = (0x02), /* ADC input pin 2 */
    ADC_MUXPOS_AIN3_gc      = (0x03), /* ADC input pin 3 */
    ADC_MUXPOS_AIN4_gc      = (0x04), /* ADC input pin 4 */
    ADC_MUXPOS_AIN5_gc      = (0x05), /* ADC input pin 5 */
    ADC_MUXPOS_AIN6_gc      = (0x06), /* ADC input pin 6 */
    ADC_MUXPOS_AIN7_gc      = (0x07), /* ADC input pin 7 */
    ADC_MUXPOS_AIN8_gc      = (0x08), /* ADC input pin 8 */
    ADC_MUXPOS_AIN9_gc      = (0x09), /* ADC input pin 9 */
    ADC_MUXPOS_AIN10_gc     = (0x0A), /* ADC input pin 10 */
    ADC_MUXPOS_AIN11_gc     = (0x0B), /* ADC input pin 11 */
    ADC_MUXPOS_AIN12_gc     = (0x0C), /* ADC input pin 12 */
    ADC_MUXPOS_AIN13_gc     = (0x0D), /* ADC input pin 13 */
    ADC_MUXPOS_AIN14_gc     = (0x0E), /* ADC input pin 14 */
    ADC_MUXPOS_AIN15_gc     = (0x0F), /* ADC input pin 15 */
    ADC_MUXPOS_DACREF_gc    = (0x1C), /* AC DAC Reference */
    ADC_MUXPOS_TEMPSENSE_gc = (0x1E), /* Temperature sensor */
    ADC_MUXPOS_GND_gc       = (0x1F), /* 0V (GND) */
} ADC_MUXPOS_t;

/*
--------------------------------------------------------------------------------
BOD - Bod interface
--------------------------------------------------------------------------------
*/

typedef struct BOD_struct
{
    register8_t CTRLA;       /* Control A */
    register8_t CTRLB;       /* Control B */
    register8_t rsv_0x02[6]; /* RESERVED REGISTER BLOCK */
    register8_t VLMCTRLA;    /* Voltage level monitor Control */
    register8_t INTCTRL;     /* Voltage level monitor interrupt Control */
    register8_t INTFLAGS;    /* Voltage level monitor interrupt Flags */
    register8_t STATUS;      /* Voltage level monitor status */
} BOD_t;


/* Operation in active mode */
typedef enum BOD_ACTIVE_enum
{
    BOD_ACTIVE_DIS_gc     = (0x00<<2), /* Disabled */
    BOD_ACTIVE_ENABLED_gc = (0x01<<2), /* Enabled */
    BOD_ACTIVE_SAMPLED_gc = (0x02<<2), /* Sampled */
    BOD_ACTIVE_ENWAKE_gc  = (0x03<<2), /* Enabled with wake-up halted until BOD is ready */
} BOD_ACTIVE_t;

/* Sample frequency */
typedef enum BOD_SAMPFREQ_enum
{
    BOD_SAMPFREQ_1KHZ_gc  = (0x00<<4), /* 1kHz sampling frequency */
    BOD_SAMPFREQ_125HZ_gc = (0x01<<4), /* 125Hz sampling frequency */
} BOD_SAMPFREQ_t;

/* Operation in sleep mode */
typedef enum BOD_SLEEP_enum
{
    BOD_SLEEP_DIS_gc     = (0x00), /* Disabled */
    BOD_SLEEP_ENABLED_gc = (0x01), /* Enabled */
    BOD_SLEEP_SAMPLED_gc = (0x02), /* Sampled */
} BOD_SLEEP_t;

/* Bod level */
typedef enum BOD_LVL_enum
{
    BOD_LVL_BODLEVEL0_gc = (0x00), /* 1.8 V */
    BOD_LVL_BODLEVEL2_gc = (0x02), /* 2.6 V */
    BOD_LVL_BODLEVEL7_gc = (0x07), /* 4.2 V */
} BOD_LVL_t;

/* Configuration */
typedef enum BOD_VLMCFG_enum
{
    BOD_VLMCFG_BELOW_gc = (0x00<<1), /* Interrupt when supply goes below VLM level */
    BOD_VLMCFG_ABOVE_gc = (0x01<<1), /* Interrupt when supply goes above VLM level */
    BOD_VLMCFG_CROSS_gc = (0x02<<1), /* Interrupt when supply crosses VLM level */
} BOD_VLMCFG_t;

/* voltage level monitor interrrupt enable */
typedef enum BOD_VLMIE_enum
{
    BOD_VLMIE_CLEAR_gc = (0x00), /* voltage level monitor interrrupt enable - CLEAR */
    BOD_VLMIE_SET_gc   = (0x01), /* voltage level monitor interrrupt enable - SET */
} BOD_VLMIE_t;

/* Voltage level monitor interrupt flag */
typedef enum BOD_VLMIF_enum
{
    BOD_VLMIF_CLEAR_gc = (0x00), /* Voltage level monitor interrupt flag - CLEAR */
    BOD_VLMIF_SET_gc   = (0x01), /* Voltage level monitor interrupt flag - SET */
} BOD_VLMIF_t;

/* Voltage level monitor status */
typedef enum BOD_VLMS_enum
{
    BOD_VLMS_CLEAR_gc = (0x00), /* Voltage level monitor status - CLEAR */
    BOD_VLMS_SET_gc   = (0x01), /* Voltage level monitor status - SET */
} BOD_VLMS_t;

/* voltage level monitor level */
typedef enum BOD_VLMLVL_enum
{
    BOD_VLMLVL_5ABOVE_gc  = (0x00), /* VLM threshold 5% above BOD level */
    BOD_VLMLVL_15ABOVE_gc = (0x01), /* VLM threshold 15% above BOD level */
    BOD_VLMLVL_25ABOVE_gc = (0x02), /* VLM threshold 25% above BOD level */
} BOD_VLMLVL_t;

/*
--------------------------------------------------------------------------------
CCL - Configurable Custom Logic
--------------------------------------------------------------------------------
*/

typedef struct CCL_struct
{
    register8_t CTRLA;       /* Control Register A */
    register8_t SEQCTRL0;    /* Sequential Control 0 */
    register8_t SEQCTRL1;    /* Sequential Control 1 */
    register8_t rsv_0x03[2]; /* RESERVED REGISTER BLOCK */
    register8_t INTCTRL0;    /* Interrupt Control 0 */
    register8_t rsv_0x06;    /* RESERVED REGISTER */
    register8_t INTFLAGS;    /* Interrupt Flags */
    register8_t LUT0CTRLA;   /* LUT Control 0 A */
    register8_t LUT0CTRLB;   /* LUT Control 0 B */
    register8_t LUT0CTRLC;   /* LUT Control 0 C */
    register8_t TRUTH0;      /* Truth 0 */
    register8_t LUT1CTRLA;   /* LUT Control 1 A */
    register8_t LUT1CTRLB;   /* LUT Control 1 B */
    register8_t LUT1CTRLC;   /* LUT Control 1 C */
    register8_t TRUTH1;      /* Truth 1 */
    register8_t LUT2CTRLA;   /* LUT Control 2 A */
    register8_t LUT2CTRLB;   /* LUT Control 2 B */
    register8_t LUT2CTRLC;   /* LUT Control 2 C */
    register8_t TRUTH2;      /* Truth 2 */
    register8_t LUT3CTRLA;   /* LUT Control 3 A */
    register8_t LUT3CTRLB;   /* LUT Control 3 B */
    register8_t LUT3CTRLC;   /* LUT Control 3 C */
    register8_t TRUTH3;      /* Truth 3 */
} CCL_t;


/* Enable */
typedef enum CCL_ENABLE_enum
{
    CCL_ENABLE_CLEAR_gc = (0x00), /* Enable - CLEAR */
    CCL_ENABLE_SET_gc   = (0x01), /* Enable - SET */
} CCL_ENABLE_t;

/* Run in Standby */
typedef enum CCL_RUNSTDBY_enum
{
    CCL_RUNSTDBY_CLEAR_gc = (0x00), /* Run in Standby - CLEAR */
    CCL_RUNSTDBY_SET_gc   = (0x40), /* Run in Standby - SET */
} CCL_RUNSTDBY_t;

/* Interrupt Mode for LUT0 */
typedef enum CCL_INTMODE0_enum
{
    CCL_INTMODE0_INTDISABLE_gc = (0x00), /* Interrupt disabled */
    CCL_INTMODE0_RISING_gc     = (0x01), /* Sense rising edge */
    CCL_INTMODE0_FALLING_gc    = (0x02), /* Sense falling edge */
    CCL_INTMODE0_BOTH_gc       = (0x03), /* Sense both edges */
} CCL_INTMODE0_t;

/* Interrupt Mode for LUT1 */
typedef enum CCL_INTMODE1_enum
{
    CCL_INTMODE1_INTDISABLE_gc = (0x00<<2), /* Interrupt disabled */
    CCL_INTMODE1_RISING_gc     = (0x01<<2), /* Sense rising edge */
    CCL_INTMODE1_FALLING_gc    = (0x02<<2), /* Sense falling edge */
    CCL_INTMODE1_BOTH_gc       = (0x03<<2), /* Sense both edges */
} CCL_INTMODE1_t;

/* Interrupt Mode for LUT2 */
typedef enum CCL_INTMODE2_enum
{
    CCL_INTMODE2_INTDISABLE_gc = (0x00<<4), /* Interrupt disabled */
    CCL_INTMODE2_RISING_gc     = (0x01<<4), /* Sense rising edge */
    CCL_INTMODE2_FALLING_gc    = (0x02<<4), /* Sense falling edge */
    CCL_INTMODE2_BOTH_gc       = (0x03<<4), /* Sense both edges */
} CCL_INTMODE2_t;

/* Interrupt Mode for LUT3 */
typedef enum CCL_INTMODE3_enum
{
    CCL_INTMODE3_INTDISABLE_gc = (0x00<<6), /* Interrupt disabled */
    CCL_INTMODE3_RISING_gc     = (0x01<<6), /* Sense rising edge */
    CCL_INTMODE3_FALLING_gc    = (0x02<<6), /* Sense falling edge */
    CCL_INTMODE3_BOTH_gc       = (0x03<<6), /* Sense both edges */
} CCL_INTMODE3_t;

/* Clock Source Selection */
typedef enum CCL_CLKSRC_enum
{
    CCL_CLKSRC_CLKPER_gc    = (0x00<<1), /* CLK_PER is clocking the LUT */
    CCL_CLKSRC_IN2_gc       = (0x01<<1), /* IN[2] is clocking the LUT */
    CCL_CLKSRC_OSC20M_gc    = (0x04<<1), /* 20MHz oscillator before prescaler is clocking the LUT */
    CCL_CLKSRC_OSCULP32K_gc = (0x05<<1), /* 32kHz oscillator is clocking the LUT */
    CCL_CLKSRC_OSCULP1K_gc  = (0x06<<1), /* 32kHz oscillator after DIV32 is clocking the LUT */
} CCL_CLKSRC_t;

/* Edge Detection Enable */
typedef enum CCL_EDGEDET_enum
{
    CCL_EDGEDET_DIS_gc = (0x00<<7), /* Edge detector is disabled */
    CCL_EDGEDET_EN_gc  = (0x01<<7), /* Edge detector is enabled */
} CCL_EDGEDET_t;

/* LUT Enable */
typedef enum CCL_ENABLE_enum
{
    CCL_ENABLE_CLEAR_gc = (0x00), /* LUT Enable - CLEAR */
    CCL_ENABLE_SET_gc   = (0x01), /* LUT Enable - SET */
} CCL_ENABLE_t;

/* Filter Selection */
typedef enum CCL_FILTSEL_enum
{
    CCL_FILTSEL_DISABLE_gc = (0x00<<4), /* Filter disabled */
    CCL_FILTSEL_SYNCH_gc   = (0x01<<4), /* Synchronizer enabled */
    CCL_FILTSEL_FILTER_gc  = (0x02<<4), /* Filter enabled */
} CCL_FILTSEL_t;

/* Output Enable */
typedef enum CCL_OUTEN_enum
{
    CCL_OUTEN_CLEAR_gc = (0x00), /* Output Enable - CLEAR */
    CCL_OUTEN_SET_gc   = (0x40), /* Output Enable - SET */
} CCL_OUTEN_t;

/* LUT Input 0 Source Selection */
typedef enum CCL_INSEL0_enum
{
    CCL_INSEL0_MASK_gc     = (0x00), /* Masked input */
    CCL_INSEL0_FEEDBACK_gc = (0x01), /* Feedback input source */
    CCL_INSEL0_LINK_gc     = (0x02), /* Linked LUT input source */
    CCL_INSEL0_EVENTA_gc   = (0x03), /* Event input source A */
    CCL_INSEL0_EVENTB_gc   = (0x04), /* Event input source B */
    CCL_INSEL0_IO_gc       = (0x05), /* IO pin LUTn-IN0 input source */
    CCL_INSEL0_AC0_gc      = (0x06), /* AC0 OUT input source */
    CCL_INSEL0_USART0_gc   = (0x08), /* USART0 TXD input source */
    CCL_INSEL0_SPI0_gc     = (0x09), /* SPI0 MOSI input source */
    CCL_INSEL0_TCA0_gc     = (0x0A), /* TCA0 WO0 input source */
    CCL_INSEL0_TCB0_gc     = (0x0C), /* TCB0 WO input source */
} CCL_INSEL0_t;

/* LUT Input 1 Source Selection */
typedef enum CCL_INSEL1_enum
{
    CCL_INSEL1_MASK_gc     = (0x00<<4), /* Masked input */
    CCL_INSEL1_FEEDBACK_gc = (0x01<<4), /* Feedback input source */
    CCL_INSEL1_LINK_gc     = (0x02<<4), /* Linked LUT input source */
    CCL_INSEL1_EVENTA_gc   = (0x03<<4), /* Event input source A */
    CCL_INSEL1_EVENTB_gc   = (0x04<<4), /* Event input source B */
    CCL_INSEL1_IO_gc       = (0x05<<4), /* IO pin LUTn-N1 input source */
    CCL_INSEL1_AC0_gc      = (0x06<<4), /* AC0 OUT input source */
    CCL_INSEL1_USART1_gc   = (0x08<<4), /* USART1 TXD input source */
    CCL_INSEL1_SPI0_gc     = (0x09<<4), /* SPI0 MOSI input source */
    CCL_INSEL1_TCA0_gc     = (0x0A<<4), /* TCA0 WO1 input source */
    CCL_INSEL1_TCB1_gc     = (0x0C<<4), /* TCB1 WO input source */
} CCL_INSEL1_t;

/* LUT Input 2 Source Selection */
typedef enum CCL_INSEL2_enum
{
    CCL_INSEL2_MASK_gc     = (0x00), /* Masked input */
    CCL_INSEL2_FEEDBACK_gc = (0x01), /* Feedback input source */
    CCL_INSEL2_LINK_gc     = (0x02), /* Linked LUT input source */
    CCL_INSEL2_EVENTA_gc   = (0x03), /* Event input source A */
    CCL_INSEL2_EVENTB_gc   = (0x04), /* Event input source B */
    CCL_INSEL2_IO_gc       = (0x05), /* IO pin LUTn-IN2 input source */
    CCL_INSEL2_AC0_gc      = (0x06), /* AC0 OUT input source */
    CCL_INSEL2_USART2_gc   = (0x08), /* USART2 TXD input source */
    CCL_INSEL2_SPI0_gc     = (0x09), /* SPI0 SCK input source */
    CCL_INSEL2_TCA0_gc     = (0x0A), /* TCA0 WO2 input source */
    CCL_INSEL2_TCB2_gc     = (0x0C), /* TCB2 WO input source */
} CCL_INSEL2_t;

/* Clock Source Selection */
typedef enum CCL_CLKSRC_enum
{
    CCL_CLKSRC_CLKPER_gc    = (0x00<<1), /* CLK_PER is clocking the LUT */
    CCL_CLKSRC_IN2_gc       = (0x01<<1), /* IN[2] is clocking the LUT */
    CCL_CLKSRC_OSC20M_gc    = (0x04<<1), /* 20MHz oscillator before prescaler is clocking the LUT */
    CCL_CLKSRC_OSCULP32K_gc = (0x05<<1), /* 32kHz oscillator is clocking the LUT */
    CCL_CLKSRC_OSCULP1K_gc  = (0x06<<1), /* 32kHz oscillator after DIV32 is clocking the LUT */
} CCL_CLKSRC_t;

/* Edge Detection Enable */
typedef enum CCL_EDGEDET_enum
{
    CCL_EDGEDET_DIS_gc = (0x00<<7), /* Edge detector is disabled */
    CCL_EDGEDET_EN_gc  = (0x01<<7), /* Edge detector is enabled */
} CCL_EDGEDET_t;

/* LUT Enable */
typedef enum CCL_ENABLE_enum
{
    CCL_ENABLE_CLEAR_gc = (0x00), /* LUT Enable - CLEAR */
    CCL_ENABLE_SET_gc   = (0x01), /* LUT Enable - SET */
} CCL_ENABLE_t;

/* Filter Selection */
typedef enum CCL_FILTSEL_enum
{
    CCL_FILTSEL_DISABLE_gc = (0x00<<4), /* Filter disabled */
    CCL_FILTSEL_SYNCH_gc   = (0x01<<4), /* Synchronizer enabled */
    CCL_FILTSEL_FILTER_gc  = (0x02<<4), /* Filter enabled */
} CCL_FILTSEL_t;

/* Output Enable */
typedef enum CCL_OUTEN_enum
{
    CCL_OUTEN_CLEAR_gc = (0x00), /* Output Enable - CLEAR */
    CCL_OUTEN_SET_gc   = (0x40), /* Output Enable - SET */
} CCL_OUTEN_t;

/* LUT Input 0 Source Selection */
typedef enum CCL_INSEL0_enum
{
    CCL_INSEL0_MASK_gc     = (0x00), /* Masked input */
    CCL_INSEL0_FEEDBACK_gc = (0x01), /* Feedback input source */
    CCL_INSEL0_LINK_gc     = (0x02), /* Linked LUT input source */
    CCL_INSEL0_EVENTA_gc   = (0x03), /* Event input source A */
    CCL_INSEL0_EVENTB_gc   = (0x04), /* Event input source B */
    CCL_INSEL0_IO_gc       = (0x05), /* IO pin LUTn-IN0 input source */
    CCL_INSEL0_AC0_gc      = (0x06), /* AC0 OUT input source */
    CCL_INSEL0_USART0_gc   = (0x08), /* USART0 TXD input source */
    CCL_INSEL0_SPI0_gc     = (0x09), /* SPI0 MOSI input source */
    CCL_INSEL0_TCA0_gc     = (0x0A), /* TCA0 WO0 input source */
    CCL_INSEL0_TCB0_gc     = (0x0C), /* TCB0 WO input source */
} CCL_INSEL0_t;

/* LUT Input 1 Source Selection */
typedef enum CCL_INSEL1_enum
{
    CCL_INSEL1_MASK_gc     = (0x00<<4), /* Masked input */
    CCL_INSEL1_FEEDBACK_gc = (0x01<<4), /* Feedback input source */
    CCL_INSEL1_LINK_gc     = (0x02<<4), /* Linked LUT input source */
    CCL_INSEL1_EVENTA_gc   = (0x03<<4), /* Event input source A */
    CCL_INSEL1_EVENTB_gc   = (0x04<<4), /* Event input source B */
    CCL_INSEL1_IO_gc       = (0x05<<4), /* IO pin LUTn-N1 input source */
    CCL_INSEL1_AC0_gc      = (0x06<<4), /* AC0 OUT input source */
    CCL_INSEL1_USART1_gc   = (0x08<<4), /* USART1 TXD input source */
    CCL_INSEL1_SPI0_gc     = (0x09<<4), /* SPI0 MOSI input source */
    CCL_INSEL1_TCA0_gc     = (0x0A<<4), /* TCA0 WO1 input source */
    CCL_INSEL1_TCB1_gc     = (0x0C<<4), /* TCB1 WO input source */
} CCL_INSEL1_t;

/* LUT Input 2 Source Selection */
typedef enum CCL_INSEL2_enum
{
    CCL_INSEL2_MASK_gc     = (0x00), /* Masked input */
    CCL_INSEL2_FEEDBACK_gc = (0x01), /* Feedback input source */
    CCL_INSEL2_LINK_gc     = (0x02), /* Linked LUT input source */
    CCL_INSEL2_EVENTA_gc   = (0x03), /* Event input source A */
    CCL_INSEL2_EVENTB_gc   = (0x04), /* Event input source B */
    CCL_INSEL2_IO_gc       = (0x05), /* IO pin LUTn-IN2 input source */
    CCL_INSEL2_AC0_gc      = (0x06), /* AC0 OUT input source */
    CCL_INSEL2_USART2_gc   = (0x08), /* USART2 TXD input source */
    CCL_INSEL2_SPI0_gc     = (0x09), /* SPI0 SCK input source */
    CCL_INSEL2_TCA0_gc     = (0x0A), /* TCA0 WO2 input source */
    CCL_INSEL2_TCB2_gc     = (0x0C), /* TCB2 WO input source */
} CCL_INSEL2_t;

/* Clock Source Selection */
typedef enum CCL_CLKSRC_enum
{
    CCL_CLKSRC_CLKPER_gc    = (0x00<<1), /* CLK_PER is clocking the LUT */
    CCL_CLKSRC_IN2_gc       = (0x01<<1), /* IN[2] is clocking the LUT */
    CCL_CLKSRC_OSC20M_gc    = (0x04<<1), /* 20MHz oscillator before prescaler is clocking the LUT */
    CCL_CLKSRC_OSCULP32K_gc = (0x05<<1), /* 32kHz oscillator is clocking the LUT */
    CCL_CLKSRC_OSCULP1K_gc  = (0x06<<1), /* 32kHz oscillator after DIV32 is clocking the LUT */
} CCL_CLKSRC_t;

/* Edge Detection Enable */
typedef enum CCL_EDGEDET_enum
{
    CCL_EDGEDET_DIS_gc = (0x00<<7), /* Edge detector is disabled */
    CCL_EDGEDET_EN_gc  = (0x01<<7), /* Edge detector is enabled */
} CCL_EDGEDET_t;

/* LUT Enable */
typedef enum CCL_ENABLE_enum
{
    CCL_ENABLE_CLEAR_gc = (0x00), /* LUT Enable - CLEAR */
    CCL_ENABLE_SET_gc   = (0x01), /* LUT Enable - SET */
} CCL_ENABLE_t;

/* Filter Selection */
typedef enum CCL_FILTSEL_enum
{
    CCL_FILTSEL_DISABLE_gc = (0x00<<4), /* Filter disabled */
    CCL_FILTSEL_SYNCH_gc   = (0x01<<4), /* Synchronizer enabled */
    CCL_FILTSEL_FILTER_gc  = (0x02<<4), /* Filter enabled */
} CCL_FILTSEL_t;

/* Output Enable */
typedef enum CCL_OUTEN_enum
{
    CCL_OUTEN_CLEAR_gc = (0x00), /* Output Enable - CLEAR */
    CCL_OUTEN_SET_gc   = (0x40), /* Output Enable - SET */
} CCL_OUTEN_t;

/* LUT Input 0 Source Selection */
typedef enum CCL_INSEL0_enum
{
    CCL_INSEL0_MASK_gc     = (0x00), /* Masked input */
    CCL_INSEL0_FEEDBACK_gc = (0x01), /* Feedback input source */
    CCL_INSEL0_LINK_gc     = (0x02), /* Linked LUT input source */
    CCL_INSEL0_EVENTA_gc   = (0x03), /* Event input source A */
    CCL_INSEL0_EVENTB_gc   = (0x04), /* Event input source B */
    CCL_INSEL0_IO_gc       = (0x05), /* IO pin LUTn-IN0 input source */
    CCL_INSEL0_AC0_gc      = (0x06), /* AC0 OUT input source */
    CCL_INSEL0_USART0_gc   = (0x08), /* USART0 TXD input source */
    CCL_INSEL0_SPI0_gc     = (0x09), /* SPI0 MOSI input source */
    CCL_INSEL0_TCA0_gc     = (0x0A), /* TCA0 WO0 input source */
    CCL_INSEL0_TCB0_gc     = (0x0C), /* TCB0 WO input source */
} CCL_INSEL0_t;

/* LUT Input 1 Source Selection */
typedef enum CCL_INSEL1_enum
{
    CCL_INSEL1_MASK_gc     = (0x00<<4), /* Masked input */
    CCL_INSEL1_FEEDBACK_gc = (0x01<<4), /* Feedback input source */
    CCL_INSEL1_LINK_gc     = (0x02<<4), /* Linked LUT input source */
    CCL_INSEL1_EVENTA_gc   = (0x03<<4), /* Event input source A */
    CCL_INSEL1_EVENTB_gc   = (0x04<<4), /* Event input source B */
    CCL_INSEL1_IO_gc       = (0x05<<4), /* IO pin LUTn-N1 input source */
    CCL_INSEL1_AC0_gc      = (0x06<<4), /* AC0 OUT input source */
    CCL_INSEL1_USART1_gc   = (0x08<<4), /* USART1 TXD input source */
    CCL_INSEL1_SPI0_gc     = (0x09<<4), /* SPI0 MOSI input source */
    CCL_INSEL1_TCA0_gc     = (0x0A<<4), /* TCA0 WO1 input source */
    CCL_INSEL1_TCB1_gc     = (0x0C<<4), /* TCB1 WO input source */
} CCL_INSEL1_t;

/* LUT Input 2 Source Selection */
typedef enum CCL_INSEL2_enum
{
    CCL_INSEL2_MASK_gc     = (0x00), /* Masked input */
    CCL_INSEL2_FEEDBACK_gc = (0x01), /* Feedback input source */
    CCL_INSEL2_LINK_gc     = (0x02), /* Linked LUT input source */
    CCL_INSEL2_EVENTA_gc   = (0x03), /* Event input source A */
    CCL_INSEL2_EVENTB_gc   = (0x04), /* Event input source B */
    CCL_INSEL2_IO_gc       = (0x05), /* IO pin LUTn-IN2 input source */
    CCL_INSEL2_AC0_gc      = (0x06), /* AC0 OUT input source */
    CCL_INSEL2_USART2_gc   = (0x08), /* USART2 TXD input source */
    CCL_INSEL2_SPI0_gc     = (0x09), /* SPI0 SCK input source */
    CCL_INSEL2_TCA0_gc     = (0x0A), /* TCA0 WO2 input source */
    CCL_INSEL2_TCB2_gc     = (0x0C), /* TCB2 WO input source */
} CCL_INSEL2_t;

/* Clock Source Selection */
typedef enum CCL_CLKSRC_enum
{
    CCL_CLKSRC_CLKPER_gc    = (0x00<<1), /* CLK_PER is clocking the LUT */
    CCL_CLKSRC_IN2_gc       = (0x01<<1), /* IN[2] is clocking the LUT */
    CCL_CLKSRC_OSC20M_gc    = (0x04<<1), /* 20MHz oscillator before prescaler is clocking the LUT */
    CCL_CLKSRC_OSCULP32K_gc = (0x05<<1), /* 32kHz oscillator is clocking the LUT */
    CCL_CLKSRC_OSCULP1K_gc  = (0x06<<1), /* 32kHz oscillator after DIV32 is clocking the LUT */
} CCL_CLKSRC_t;

/* Edge Detection Enable */
typedef enum CCL_EDGEDET_enum
{
    CCL_EDGEDET_DIS_gc = (0x00<<7), /* Edge detector is disabled */
    CCL_EDGEDET_EN_gc  = (0x01<<7), /* Edge detector is enabled */
} CCL_EDGEDET_t;

/* LUT Enable */
typedef enum CCL_ENABLE_enum
{
    CCL_ENABLE_CLEAR_gc = (0x00), /* LUT Enable - CLEAR */
    CCL_ENABLE_SET_gc   = (0x01), /* LUT Enable - SET */
} CCL_ENABLE_t;

/* Filter Selection */
typedef enum CCL_FILTSEL_enum
{
    CCL_FILTSEL_DISABLE_gc = (0x00<<4), /* Filter disabled */
    CCL_FILTSEL_SYNCH_gc   = (0x01<<4), /* Synchronizer enabled */
    CCL_FILTSEL_FILTER_gc  = (0x02<<4), /* Filter enabled */
} CCL_FILTSEL_t;

/* Output Enable */
typedef enum CCL_OUTEN_enum
{
    CCL_OUTEN_CLEAR_gc = (0x00), /* Output Enable - CLEAR */
    CCL_OUTEN_SET_gc   = (0x40), /* Output Enable - SET */
} CCL_OUTEN_t;

/* LUT Input 0 Source Selection */
typedef enum CCL_INSEL0_enum
{
    CCL_INSEL0_MASK_gc     = (0x00), /* Masked input */
    CCL_INSEL0_FEEDBACK_gc = (0x01), /* Feedback input source */
    CCL_INSEL0_LINK_gc     = (0x02), /* Linked LUT input source */
    CCL_INSEL0_EVENTA_gc   = (0x03), /* Event input source A */
    CCL_INSEL0_EVENTB_gc   = (0x04), /* Event input source B */
    CCL_INSEL0_IO_gc       = (0x05), /* IO pin LUTn-IN0 input source */
    CCL_INSEL0_AC0_gc      = (0x06), /* AC0 OUT input source */
    CCL_INSEL0_USART0_gc   = (0x08), /* USART0 TXD input source */
    CCL_INSEL0_SPI0_gc     = (0x09), /* SPI0 MOSI input source */
    CCL_INSEL0_TCA0_gc     = (0x0A), /* TCA0 WO0 input source */
    CCL_INSEL0_TCB0_gc     = (0x0C), /* TCB0 WO input source */
} CCL_INSEL0_t;

/* LUT Input 1 Source Selection */
typedef enum CCL_INSEL1_enum
{
    CCL_INSEL1_MASK_gc     = (0x00<<4), /* Masked input */
    CCL_INSEL1_FEEDBACK_gc = (0x01<<4), /* Feedback input source */
    CCL_INSEL1_LINK_gc     = (0x02<<4), /* Linked LUT input source */
    CCL_INSEL1_EVENTA_gc   = (0x03<<4), /* Event input source A */
    CCL_INSEL1_EVENTB_gc   = (0x04<<4), /* Event input source B */
    CCL_INSEL1_IO_gc       = (0x05<<4), /* IO pin LUTn-N1 input source */
    CCL_INSEL1_AC0_gc      = (0x06<<4), /* AC0 OUT input source */
    CCL_INSEL1_USART1_gc   = (0x08<<4), /* USART1 TXD input source */
    CCL_INSEL1_SPI0_gc     = (0x09<<4), /* SPI0 MOSI input source */
    CCL_INSEL1_TCA0_gc     = (0x0A<<4), /* TCA0 WO1 input source */
    CCL_INSEL1_TCB1_gc     = (0x0C<<4), /* TCB1 WO input source */
} CCL_INSEL1_t;

/* LUT Input 2 Source Selection */
typedef enum CCL_INSEL2_enum
{
    CCL_INSEL2_MASK_gc     = (0x00), /* Masked input */
    CCL_INSEL2_FEEDBACK_gc = (0x01), /* Feedback input source */
    CCL_INSEL2_LINK_gc     = (0x02), /* Linked LUT input source */
    CCL_INSEL2_EVENTA_gc   = (0x03), /* Event input source A */
    CCL_INSEL2_EVENTB_gc   = (0x04), /* Event input source B */
    CCL_INSEL2_IO_gc       = (0x05), /* IO pin LUTn-IN2 input source */
    CCL_INSEL2_AC0_gc      = (0x06), /* AC0 OUT input source */
    CCL_INSEL2_USART2_gc   = (0x08), /* USART2 TXD input source */
    CCL_INSEL2_SPI0_gc     = (0x09), /* SPI0 SCK input source */
    CCL_INSEL2_TCA0_gc     = (0x0A), /* TCA0 WO2 input source */
    CCL_INSEL2_TCB2_gc     = (0x0C), /* TCB2 WO input source */
} CCL_INSEL2_t;

/* Sequential Selection */
typedef enum CCL_SEQSEL0_enum
{
    CCL_SEQSEL0_DISABLE_gc = (0x00), /* Sequential logic disabled */
    CCL_SEQSEL0_DFF_gc     = (0x01), /* D FlipFlop */
    CCL_SEQSEL0_JK_gc      = (0x02), /* JK FlipFlop */
    CCL_SEQSEL0_LATCH_gc   = (0x03), /* D Latch */
    CCL_SEQSEL0_RS_gc      = (0x04), /* RS Latch */
} CCL_SEQSEL0_t;

/* Sequential Selection */
typedef enum CCL_SEQSEL1_enum
{
    CCL_SEQSEL1_DISABLE_gc = (0x00), /* Sequential logic disabled */
    CCL_SEQSEL1_DFF_gc     = (0x01), /* D FlipFlop */
    CCL_SEQSEL1_JK_gc      = (0x02), /* JK FlipFlop */
    CCL_SEQSEL1_LATCH_gc   = (0x03), /* D Latch */
    CCL_SEQSEL1_RS_gc      = (0x04), /* RS Latch */
} CCL_SEQSEL1_t;

/*
--------------------------------------------------------------------------------
CLKCTRL - Clock controller
--------------------------------------------------------------------------------
*/

typedef struct CLKCTRL_struct
{
    register8_t MCLKCTRLA;    /* MCLK Control A */
    register8_t MCLKCTRLB;    /* MCLK Control B */
    register8_t MCLKLOCK;     /* MCLK Lock */
    register8_t MCLKSTATUS;   /* MCLK Status */
    register8_t rsv_0x04[12]; /* RESERVED REGISTER BLOCK */
    register8_t OSC20MCTRLA;  /* OSC20M Control A */
    register8_t OSC20MCALIBA; /* OSC20M Calibration A */
    register8_t OSC20MCALIBB; /* OSC20M Calibration B */
    register8_t rsv_0x13[5];  /* RESERVED REGISTER BLOCK */
    register8_t OSC32KCTRLA;  /* OSC32K Control A */
    register8_t rsv_0x19[3];  /* RESERVED REGISTER BLOCK */
    register8_t XOSC32KCTRLA; /* XOSC32K Control A */
} CLKCTRL_t;


/* System clock out */
typedef enum CLKCTRL_CLKOUT_enum
{
    CLKCTRL_CLKOUT_CLEAR_gc = (0x00), /* System clock out - CLEAR */
    CLKCTRL_CLKOUT_SET_gc   = (0x80), /* System clock out - SET */
} CLKCTRL_CLKOUT_t;

/* clock select */
typedef enum CLKCTRL_CLKSEL_enum
{
    CLKCTRL_CLKSEL_OSC20M_gc    = (0x00), /* 20MHz oscillator */
    CLKCTRL_CLKSEL_OSCULP32K_gc = (0x01), /* 32KHz oscillator */
    CLKCTRL_CLKSEL_XOSC32K_gc   = (0x02), /* 32.768kHz crystal oscillator */
    CLKCTRL_CLKSEL_EXTCLK_gc    = (0x03), /* External clock */
} CLKCTRL_CLKSEL_t;

/* Prescaler division */
typedef enum CLKCTRL_PDIV_enum
{
    CLKCTRL_PDIV_2X_gc  = (0x00<<1), /* 2X */
    CLKCTRL_PDIV_4X_gc  = (0x01<<1), /* 4X */
    CLKCTRL_PDIV_8X_gc  = (0x02<<1), /* 8X */
    CLKCTRL_PDIV_16X_gc = (0x03<<1), /* 16X */
    CLKCTRL_PDIV_32X_gc = (0x04<<1), /* 32X */
    CLKCTRL_PDIV_64X_gc = (0x05<<1), /* 64X */
    CLKCTRL_PDIV_6X_gc  = (0x08<<1), /* 6X */
    CLKCTRL_PDIV_10X_gc = (0x09<<1), /* 10X */
    CLKCTRL_PDIV_12X_gc = (0x0A<<1), /* 12X */
    CLKCTRL_PDIV_24X_gc = (0x0B<<1), /* 24X */
    CLKCTRL_PDIV_48X_gc = (0x0C<<1), /* 48X */
} CLKCTRL_PDIV_t;

/* Prescaler enable */
typedef enum CLKCTRL_PEN_enum
{
    CLKCTRL_PEN_CLEAR_gc = (0x00), /* Prescaler enable - CLEAR */
    CLKCTRL_PEN_SET_gc   = (0x01), /* Prescaler enable - SET */
} CLKCTRL_PEN_t;

/* lock ebable */
typedef enum CLKCTRL_LOCKEN_enum
{
    CLKCTRL_LOCKEN_CLEAR_gc = (0x00), /* lock ebable - CLEAR */
    CLKCTRL_LOCKEN_SET_gc   = (0x01), /* lock ebable - SET */
} CLKCTRL_LOCKEN_t;

/* External Clock status */
typedef enum CLKCTRL_EXTS_enum
{
    CLKCTRL_EXTS_CLEAR_gc = (0x00), /* External Clock status - CLEAR */
    CLKCTRL_EXTS_SET_gc   = (0x80), /* External Clock status - SET */
} CLKCTRL_EXTS_t;

/* 20MHz oscillator status */
typedef enum CLKCTRL_OSC20MS_enum
{
    CLKCTRL_OSC20MS_CLEAR_gc = (0x00), /* 20MHz oscillator status - CLEAR */
    CLKCTRL_OSC20MS_SET_gc   = (0x10), /* 20MHz oscillator status - SET */
} CLKCTRL_OSC20MS_t;

/* 32KHz oscillator status */
typedef enum CLKCTRL_OSC32KS_enum
{
    CLKCTRL_OSC32KS_CLEAR_gc = (0x00), /* 32KHz oscillator status - CLEAR */
    CLKCTRL_OSC32KS_SET_gc   = (0x20), /* 32KHz oscillator status - SET */
} CLKCTRL_OSC32KS_t;

/* System Oscillator changing */
typedef enum CLKCTRL_SOSC_enum
{
    CLKCTRL_SOSC_CLEAR_gc = (0x00), /* System Oscillator changing - CLEAR */
    CLKCTRL_SOSC_SET_gc   = (0x01), /* System Oscillator changing - SET */
} CLKCTRL_SOSC_t;

/* 32.768 kHz Crystal Oscillator status */
typedef enum CLKCTRL_XOSC32KS_enum
{
    CLKCTRL_XOSC32KS_CLEAR_gc = (0x00), /* 32.768 kHz Crystal Oscillator status - CLEAR */
    CLKCTRL_XOSC32KS_SET_gc   = (0x40), /* 32.768 kHz Crystal Oscillator status - SET */
} CLKCTRL_XOSC32KS_t;

/* Lock */
typedef enum CLKCTRL_LOCK_enum
{
    CLKCTRL_LOCK_CLEAR_gc = (0x00), /* Lock - CLEAR */
    CLKCTRL_LOCK_SET_gc   = (0x80), /* Lock - SET */
} CLKCTRL_LOCK_t;

/* Oscillator temperature coefficient */
#define CLKCTRL_OSC20MCALIBB_TEMPCAL20M_gc(x) (x & 0x0F)

/* Run standby */
typedef enum CLKCTRL_RUNSTDBY_enum
{
    CLKCTRL_RUNSTDBY_CLEAR_gc = (0x00), /* Run standby - CLEAR */
    CLKCTRL_RUNSTDBY_SET_gc   = (0x02), /* Run standby - SET */
} CLKCTRL_RUNSTDBY_t;

/* Run standby */
typedef enum CLKCTRL_RUNSTDBY_enum
{
    CLKCTRL_RUNSTDBY_CLEAR_gc = (0x00), /* Run standby - CLEAR */
    CLKCTRL_RUNSTDBY_SET_gc   = (0x02), /* Run standby - SET */
} CLKCTRL_RUNSTDBY_t;

/* Crystal startup time */
typedef enum CLKCTRL_CSUT_enum
{
    CLKCTRL_CSUT_1K_gc  = (0x00<<4), /* 1k cycles */
    CLKCTRL_CSUT_16K_gc = (0x01<<4), /* 16k cycles */
    CLKCTRL_CSUT_32K_gc = (0x02<<4), /* 32k cycles */
    CLKCTRL_CSUT_64K_gc = (0x03<<4), /* 64k cycles */
} CLKCTRL_CSUT_t;

/* Enable */
typedef enum CLKCTRL_ENABLE_enum
{
    CLKCTRL_ENABLE_CLEAR_gc = (0x00), /* Enable - CLEAR */
    CLKCTRL_ENABLE_SET_gc   = (0x01), /* Enable - SET */
} CLKCTRL_ENABLE_t;

/* Run standby */
typedef enum CLKCTRL_RUNSTDBY_enum
{
    CLKCTRL_RUNSTDBY_CLEAR_gc = (0x00), /* Run standby - CLEAR */
    CLKCTRL_RUNSTDBY_SET_gc   = (0x02), /* Run standby - SET */
} CLKCTRL_RUNSTDBY_t;

/* Select */
typedef enum CLKCTRL_SEL_enum
{
    CLKCTRL_SEL_CLEAR_gc = (0x00), /* Select - CLEAR */
    CLKCTRL_SEL_SET_gc   = (0x04), /* Select - SET */
} CLKCTRL_SEL_t;

/*
--------------------------------------------------------------------------------
CPU - CPU
--------------------------------------------------------------------------------
*/

typedef struct CPU_struct
{
    register8_t rsv_0x00[4]; /* RESERVED REGISTER BLOCK */
    register8_t CCP;         /* Configuration Change Protection */
    register8_t rsv_0x05[8]; /* RESERVED REGISTER BLOCK */
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

/* Carry Flag */
typedef enum CPU_C_enum
{
    CPU_C_CLEAR_gc = (0x00), /* Carry Flag - CLEAR */
    CPU_C_SET_gc   = (0x01), /* Carry Flag - SET */
} CPU_C_t;

/* Half Carry Flag */
typedef enum CPU_H_enum
{
    CPU_H_CLEAR_gc = (0x00), /* Half Carry Flag - CLEAR */
    CPU_H_SET_gc   = (0x20), /* Half Carry Flag - SET */
} CPU_H_t;

/* Global Interrupt Enable Flag */
typedef enum CPU_I_enum
{
    CPU_I_CLEAR_gc = (0x00), /* Global Interrupt Enable Flag - CLEAR */
    CPU_I_SET_gc   = (0x80), /* Global Interrupt Enable Flag - SET */
} CPU_I_t;

/* Negative Flag */
typedef enum CPU_N_enum
{
    CPU_N_CLEAR_gc = (0x00), /* Negative Flag - CLEAR */
    CPU_N_SET_gc   = (0x04), /* Negative Flag - SET */
} CPU_N_t;

/* N Exclusive Or V Flag */
typedef enum CPU_S_enum
{
    CPU_S_CLEAR_gc = (0x00), /* N Exclusive Or V Flag - CLEAR */
    CPU_S_SET_gc   = (0x10), /* N Exclusive Or V Flag - SET */
} CPU_S_t;

/* Transfer Bit */
typedef enum CPU_T_enum
{
    CPU_T_CLEAR_gc = (0x00), /* Transfer Bit - CLEAR */
    CPU_T_SET_gc   = (0x40), /* Transfer Bit - SET */
} CPU_T_t;

/* Two's Complement Overflow Flag */
typedef enum CPU_V_enum
{
    CPU_V_CLEAR_gc = (0x00), /* Two's Complement Overflow Flag - CLEAR */
    CPU_V_SET_gc   = (0x08), /* Two's Complement Overflow Flag - SET */
} CPU_V_t;

/* Zero Flag */
typedef enum CPU_Z_enum
{
    CPU_Z_CLEAR_gc = (0x00), /* Zero Flag - CLEAR */
    CPU_Z_SET_gc   = (0x02), /* Zero Flag - SET */
} CPU_Z_t;

/*
--------------------------------------------------------------------------------
CPUINT - Interrupt Controller
--------------------------------------------------------------------------------
*/

typedef struct CPUINT_struct
{
    register8_t CTRLA;   /* Control A */
    register8_t STATUS;  /* Status */
    register8_t LVL0PRI; /* Interrupt Level 0 Priority */
    register8_t LVL1VEC; /* Interrupt Level 1 Priority Vector */
} CPUINT_t;


/* Compact Vector Table */
typedef enum CPUINT_CVT_enum
{
    CPUINT_CVT_CLEAR_gc = (0x00), /* Compact Vector Table - CLEAR */
    CPUINT_CVT_SET_gc   = (0x20), /* Compact Vector Table - SET */
} CPUINT_CVT_t;

/* Interrupt Vector Select */
typedef enum CPUINT_IVSEL_enum
{
    CPUINT_IVSEL_CLEAR_gc = (0x00), /* Interrupt Vector Select - CLEAR */
    CPUINT_IVSEL_SET_gc   = (0x40), /* Interrupt Vector Select - SET */
} CPUINT_IVSEL_t;

/* Round-robin Scheduling Enable */
typedef enum CPUINT_LVL0RR_enum
{
    CPUINT_LVL0RR_CLEAR_gc = (0x00), /* Round-robin Scheduling Enable - CLEAR */
    CPUINT_LVL0RR_SET_gc   = (0x01), /* Round-robin Scheduling Enable - SET */
} CPUINT_LVL0RR_t;

/* Level 0 Interrupt Executing */
typedef enum CPUINT_LVL0EX_enum
{
    CPUINT_LVL0EX_CLEAR_gc = (0x00), /* Level 0 Interrupt Executing - CLEAR */
    CPUINT_LVL0EX_SET_gc   = (0x01), /* Level 0 Interrupt Executing - SET */
} CPUINT_LVL0EX_t;

/* Level 1 Interrupt Executing */
typedef enum CPUINT_LVL1EX_enum
{
    CPUINT_LVL1EX_CLEAR_gc = (0x00), /* Level 1 Interrupt Executing - CLEAR */
    CPUINT_LVL1EX_SET_gc   = (0x02), /* Level 1 Interrupt Executing - SET */
} CPUINT_LVL1EX_t;

/* Non-maskable Interrupt Executing */
typedef enum CPUINT_NMIEX_enum
{
    CPUINT_NMIEX_CLEAR_gc = (0x00), /* Non-maskable Interrupt Executing - CLEAR */
    CPUINT_NMIEX_SET_gc   = (0x80), /* Non-maskable Interrupt Executing - SET */
} CPUINT_NMIEX_t;

/*
--------------------------------------------------------------------------------
CRCSCAN - CRCSCAN
--------------------------------------------------------------------------------
*/

typedef struct CRCSCAN_struct
{
    register8_t CTRLA;  /* Control A */
    register8_t CTRLB;  /* Control B */
    register8_t STATUS; /* Status */
} CRCSCAN_t;


/* Enable CRC scan */
typedef enum CRCSCAN_ENABLE_enum
{
    CRCSCAN_ENABLE_CLEAR_gc = (0x00), /* Enable CRC scan - CLEAR */
    CRCSCAN_ENABLE_SET_gc   = (0x01), /* Enable CRC scan - SET */
} CRCSCAN_ENABLE_t;

/* Enable NMI Trigger */
typedef enum CRCSCAN_NMIEN_enum
{
    CRCSCAN_NMIEN_CLEAR_gc = (0x00), /* Enable NMI Trigger - CLEAR */
    CRCSCAN_NMIEN_SET_gc   = (0x02), /* Enable NMI Trigger - SET */
} CRCSCAN_NMIEN_t;

/* Reset CRC scan */
typedef enum CRCSCAN_RESET_enum
{
    CRCSCAN_RESET_CLEAR_gc = (0x00), /* Reset CRC scan - CLEAR */
    CRCSCAN_RESET_SET_gc   = (0x80), /* Reset CRC scan - SET */
} CRCSCAN_RESET_t;

/* CRC Source */
typedef enum CRCSCAN_SRC_enum
{
    CRCSCAN_SRC_FLASH_gc       = (0x00), /* CRC on entire flash */
    CRCSCAN_SRC_APPLICATION_gc = (0x01), /* CRC on boot and appl section of flash */
    CRCSCAN_SRC_BOOT_gc        = (0x02), /* CRC on boot section of flash */
} CRCSCAN_SRC_t;

/* CRC Busy */
typedef enum CRCSCAN_BUSY_enum
{
    CRCSCAN_BUSY_CLEAR_gc = (0x00), /* CRC Busy - CLEAR */
    CRCSCAN_BUSY_SET_gc   = (0x01), /* CRC Busy - SET */
} CRCSCAN_BUSY_t;

/* CRC Ok */
typedef enum CRCSCAN_OK_enum
{
    CRCSCAN_OK_CLEAR_gc = (0x00), /* CRC Ok - CLEAR */
    CRCSCAN_OK_SET_gc   = (0x02), /* CRC Ok - SET */
} CRCSCAN_OK_t;

/*
--------------------------------------------------------------------------------
EVSYS - Event System
--------------------------------------------------------------------------------
*/

typedef struct EVSYS_struct
{
    register8_t STROBE;       /* Channel Strobe */
    register8_t rsv_0x01[15]; /* RESERVED REGISTER BLOCK */
    register8_t CHANNEL0;     /* Multiplexer Channel 0 */
    register8_t CHANNEL1;     /* Multiplexer Channel 1 */
    register8_t CHANNEL2;     /* Multiplexer Channel 2 */
    register8_t CHANNEL3;     /* Multiplexer Channel 3 */
    register8_t CHANNEL4;     /* Multiplexer Channel 4 */
    register8_t CHANNEL5;     /* Multiplexer Channel 5 */
    register8_t rsv_0x16[10]; /* RESERVED REGISTER BLOCK */
    register8_t USERCCLLUT0A; /* User CCL LUT0 Event A */
    register8_t USERCCLLUT0B; /* User CCL LUT0 Event B */
    register8_t USERCCLLUT1A; /* User CCL LUT1 Event A */
    register8_t USERCCLLUT1B; /* User CCL LUT1 Event B */
    register8_t USERCCLLUT2A; /* User CCL LUT2 Event A */
    register8_t USERCCLLUT2B; /* User CCL LUT2 Event B */
    register8_t USERCCLLUT3A; /* User CCL LUT3 Event A */
    register8_t USERCCLLUT3B; /* User CCL LUT3 Event B */
    register8_t USERADC0;     /* User ADC0 */
    register8_t USEREVOUTA;   /* User EVOUT Port A */
    register8_t USEREVOUTB;   /* User EVOUT Port B */
    register8_t USEREVOUTC;   /* User EVOUT Port C */
    register8_t USEREVOUTD;   /* User EVOUT Port D */
    register8_t USEREVOUTE;   /* User EVOUT Port E */
    register8_t USEREVOUTF;   /* User EVOUT Port F */
    register8_t USERUSART0;   /* User USART0 */
    register8_t USERUSART1;   /* User USART1 */
    register8_t USERUSART2;   /* User USART2 */
    register8_t USERUSART3;   /* User USART3 */
    register8_t USERTCA0;     /* User TCA0 */
    register8_t USERTCB0;     /* User TCB0 */
    register8_t USERTCB1;     /* User TCB1 */
    register8_t USERTCB2;     /* User TCB2 */
    register8_t USERTCB3;     /* User TCB3 */
} EVSYS_t;


/* Generator selector */
typedef enum EVSYS_GENERATOR_enum
{
    EVSYS_GENERATOR_OFF_gc           = (0x00), /* Off */
    EVSYS_GENERATOR_UPDI_gc          = (0x01), /* Unified Program and Debug Interface */
    EVSYS_GENERATOR_RTC_OVF_gc       = (0x06), /* Real Time Counter overflow */
    EVSYS_GENERATOR_RTC_CMP_gc       = (0x07), /* Real Time Counter compare */
    EVSYS_GENERATOR_RTC_PIT0_gc      = (0x08), /* Periodic Interrupt Timer output 0 */
    EVSYS_GENERATOR_RTC_PIT1_gc      = (0x09), /* Periodic Interrupt Timer output 1 */
    EVSYS_GENERATOR_RTC_PIT2_gc      = (0x0A), /* Periodic Interrupt Timer output 2 */
    EVSYS_GENERATOR_RTC_PIT3_gc      = (0x0B), /* Periodic Interrupt Timer output 3 */
    EVSYS_GENERATOR_CCL_LUT0_gc      = (0x10), /* Configurable Custom Logic LUT0 */
    EVSYS_GENERATOR_CCL_LUT1_gc      = (0x11), /* Configurable Custom Logic LUT1 */
    EVSYS_GENERATOR_CCL_LUT2_gc      = (0x12), /* Configurable Custom Logic LUT2 */
    EVSYS_GENERATOR_CCL_LUT3_gc      = (0x13), /* Configurable Custom Logic LUT3 */
    EVSYS_GENERATOR_AC0_OUT_gc       = (0x20), /* Analog Comparator 0 out */
    EVSYS_GENERATOR_ADC0_RESRDY_gc   = (0x24), /* ADC 0 Result Ready Event */
    EVSYS_GENERATOR_PORT0_PIN0_gc    = (0x40), /* Port 0 Pin 0 */
    EVSYS_GENERATOR_PORT0_PIN1_gc    = (0x41), /* Port 0 Pin 1 */
    EVSYS_GENERATOR_PORT0_PIN2_gc    = (0x42), /* Port 0 Pin 2 */
    EVSYS_GENERATOR_PORT0_PIN3_gc    = (0x43), /* Port 0 Pin 3 */
    EVSYS_GENERATOR_PORT0_PIN4_gc    = (0x44), /* Port 0 Pin 4 */
    EVSYS_GENERATOR_PORT0_PIN5_gc    = (0x45), /* Port 0 Pin 5 */
    EVSYS_GENERATOR_PORT0_PIN6_gc    = (0x46), /* Port 0 Pin 6 */
    EVSYS_GENERATOR_PORT0_PIN7_gc    = (0x47), /* Port 0 Pin 7 */
    EVSYS_GENERATOR_PORT1_PIN0_gc    = (0x48), /* Port 1 Pin 0 */
    EVSYS_GENERATOR_PORT1_PIN1_gc    = (0x49), /* Port 1 Pin 1 */
    EVSYS_GENERATOR_PORT1_PIN2_gc    = (0x4A), /* Port 1 Pin 2 */
    EVSYS_GENERATOR_PORT1_PIN3_gc    = (0x4B), /* Port 1 Pin 3 */
    EVSYS_GENERATOR_PORT1_PIN4_gc    = (0x4C), /* Port 1 Pin 4 */
    EVSYS_GENERATOR_PORT1_PIN5_gc    = (0x4D), /* Port 1 Pin 5 */
    EVSYS_GENERATOR_PORT1_PIN6_gc    = (0x4E), /* Port 1 Pin 6 */
    EVSYS_GENERATOR_PORT1_PIN7_gc    = (0x4F), /* Port 1 Pin 7 */
    EVSYS_GENERATOR_USART0_XCK_gc    = (0x60), /* USART 0 Xclock */
    EVSYS_GENERATOR_USART1_XCK_gc    = (0x61), /* USART 1 Xclock */
    EVSYS_GENERATOR_USART2_XCK_gc    = (0x62), /* USART 2 Xclock */
    EVSYS_GENERATOR_USART3_XCK_gc    = (0x63), /* USART 3 Xclock */
    EVSYS_GENERATOR_SPI0_SCK_gc      = (0x68), /* SPI 0 Sclock */
    EVSYS_GENERATOR_TCA0_OVF_LUNF_gc = (0x80), /* Timer/Counter A0 overflow / low byte underflow */
    EVSYS_GENERATOR_TCA0_HUNF_gc     = (0x81), /* Timer/Counter A0 high byte underflow (split mode) */
    EVSYS_GENERATOR_TCA0_CMP0_gc     = (0x84), /* Timer/Counter A0 compare 0 */
    EVSYS_GENERATOR_TCA0_CMP1_gc     = (0x85), /* Timer/Counter A0 compare 1 */
    EVSYS_GENERATOR_TCA0_CMP2_gc     = (0x86), /* Timer/Counter A0 compare 2 */
    EVSYS_GENERATOR_TCB0_CAPT_gc     = (0xA0), /* Timer/Counter B0 capture */
    EVSYS_GENERATOR_TCB1_CAPT_gc     = (0xA2), /* Timer/Counter B1 capture */
    EVSYS_GENERATOR_TCB2_CAPT_gc     = (0xA4), /* Timer/Counter B2 capture */
    EVSYS_GENERATOR_TCB3_CAPT_gc     = (0xA6), /* Timer/Counter B3 capture */
} EVSYS_GENERATOR_t;

/* Generator selector */
typedef enum EVSYS_GENERATOR_enum
{
    EVSYS_GENERATOR_OFF_gc           = (0x00), /* Off */
    EVSYS_GENERATOR_UPDI_gc          = (0x01), /* Unified Program and Debug Interface */
    EVSYS_GENERATOR_RTC_OVF_gc       = (0x06), /* Real Time Counter overflow */
    EVSYS_GENERATOR_RTC_CMP_gc       = (0x07), /* Real Time Counter compare */
    EVSYS_GENERATOR_RTC_PIT0_gc      = (0x08), /* Periodic Interrupt Timer output 0 */
    EVSYS_GENERATOR_RTC_PIT1_gc      = (0x09), /* Periodic Interrupt Timer output 1 */
    EVSYS_GENERATOR_RTC_PIT2_gc      = (0x0A), /* Periodic Interrupt Timer output 2 */
    EVSYS_GENERATOR_RTC_PIT3_gc      = (0x0B), /* Periodic Interrupt Timer output 3 */
    EVSYS_GENERATOR_CCL_LUT0_gc      = (0x10), /* Configurable Custom Logic LUT0 */
    EVSYS_GENERATOR_CCL_LUT1_gc      = (0x11), /* Configurable Custom Logic LUT1 */
    EVSYS_GENERATOR_CCL_LUT2_gc      = (0x12), /* Configurable Custom Logic LUT2 */
    EVSYS_GENERATOR_CCL_LUT3_gc      = (0x13), /* Configurable Custom Logic LUT3 */
    EVSYS_GENERATOR_AC0_OUT_gc       = (0x20), /* Analog Comparator 0 out */
    EVSYS_GENERATOR_ADC0_RESRDY_gc   = (0x24), /* ADC 0 Result Ready Event */
    EVSYS_GENERATOR_PORT0_PIN0_gc    = (0x40), /* Port 0 Pin 0 */
    EVSYS_GENERATOR_PORT0_PIN1_gc    = (0x41), /* Port 0 Pin 1 */
    EVSYS_GENERATOR_PORT0_PIN2_gc    = (0x42), /* Port 0 Pin 2 */
    EVSYS_GENERATOR_PORT0_PIN3_gc    = (0x43), /* Port 0 Pin 3 */
    EVSYS_GENERATOR_PORT0_PIN4_gc    = (0x44), /* Port 0 Pin 4 */
    EVSYS_GENERATOR_PORT0_PIN5_gc    = (0x45), /* Port 0 Pin 5 */
    EVSYS_GENERATOR_PORT0_PIN6_gc    = (0x46), /* Port 0 Pin 6 */
    EVSYS_GENERATOR_PORT0_PIN7_gc    = (0x47), /* Port 0 Pin 7 */
    EVSYS_GENERATOR_PORT1_PIN0_gc    = (0x48), /* Port 1 Pin 0 */
    EVSYS_GENERATOR_PORT1_PIN1_gc    = (0x49), /* Port 1 Pin 1 */
    EVSYS_GENERATOR_PORT1_PIN2_gc    = (0x4A), /* Port 1 Pin 2 */
    EVSYS_GENERATOR_PORT1_PIN3_gc    = (0x4B), /* Port 1 Pin 3 */
    EVSYS_GENERATOR_PORT1_PIN4_gc    = (0x4C), /* Port 1 Pin 4 */
    EVSYS_GENERATOR_PORT1_PIN5_gc    = (0x4D), /* Port 1 Pin 5 */
    EVSYS_GENERATOR_PORT1_PIN6_gc    = (0x4E), /* Port 1 Pin 6 */
    EVSYS_GENERATOR_PORT1_PIN7_gc    = (0x4F), /* Port 1 Pin 7 */
    EVSYS_GENERATOR_USART0_XCK_gc    = (0x60), /* USART 0 Xclock */
    EVSYS_GENERATOR_USART1_XCK_gc    = (0x61), /* USART 1 Xclock */
    EVSYS_GENERATOR_USART2_XCK_gc    = (0x62), /* USART 2 Xclock */
    EVSYS_GENERATOR_USART3_XCK_gc    = (0x63), /* USART 3 Xclock */
    EVSYS_GENERATOR_SPI0_SCK_gc      = (0x68), /* SPI 0 Sclock */
    EVSYS_GENERATOR_TCA0_OVF_LUNF_gc = (0x80), /* Timer/Counter A0 overflow / low byte underflow */
    EVSYS_GENERATOR_TCA0_HUNF_gc     = (0x81), /* Timer/Counter A0 high byte underflow (split mode) */
    EVSYS_GENERATOR_TCA0_CMP0_gc     = (0x84), /* Timer/Counter A0 compare 0 */
    EVSYS_GENERATOR_TCA0_CMP1_gc     = (0x85), /* Timer/Counter A0 compare 1 */
    EVSYS_GENERATOR_TCA0_CMP2_gc     = (0x86), /* Timer/Counter A0 compare 2 */
    EVSYS_GENERATOR_TCB0_CAPT_gc     = (0xA0), /* Timer/Counter B0 capture */
    EVSYS_GENERATOR_TCB1_CAPT_gc     = (0xA2), /* Timer/Counter B1 capture */
    EVSYS_GENERATOR_TCB2_CAPT_gc     = (0xA4), /* Timer/Counter B2 capture */
    EVSYS_GENERATOR_TCB3_CAPT_gc     = (0xA6), /* Timer/Counter B3 capture */
} EVSYS_GENERATOR_t;

/* Generator selector */
typedef enum EVSYS_GENERATOR_enum
{
    EVSYS_GENERATOR_OFF_gc           = (0x00), /* Off */
    EVSYS_GENERATOR_UPDI_gc          = (0x01), /* Unified Program and Debug Interface */
    EVSYS_GENERATOR_RTC_OVF_gc       = (0x06), /* Real Time Counter overflow */
    EVSYS_GENERATOR_RTC_CMP_gc       = (0x07), /* Real Time Counter compare */
    EVSYS_GENERATOR_RTC_PIT0_gc      = (0x08), /* Periodic Interrupt Timer output 0 */
    EVSYS_GENERATOR_RTC_PIT1_gc      = (0x09), /* Periodic Interrupt Timer output 1 */
    EVSYS_GENERATOR_RTC_PIT2_gc      = (0x0A), /* Periodic Interrupt Timer output 2 */
    EVSYS_GENERATOR_RTC_PIT3_gc      = (0x0B), /* Periodic Interrupt Timer output 3 */
    EVSYS_GENERATOR_CCL_LUT0_gc      = (0x10), /* Configurable Custom Logic LUT0 */
    EVSYS_GENERATOR_CCL_LUT1_gc      = (0x11), /* Configurable Custom Logic LUT1 */
    EVSYS_GENERATOR_CCL_LUT2_gc      = (0x12), /* Configurable Custom Logic LUT2 */
    EVSYS_GENERATOR_CCL_LUT3_gc      = (0x13), /* Configurable Custom Logic LUT3 */
    EVSYS_GENERATOR_AC0_OUT_gc       = (0x20), /* Analog Comparator 0 out */
    EVSYS_GENERATOR_ADC0_RESRDY_gc   = (0x24), /* ADC 0 Result Ready Event */
    EVSYS_GENERATOR_PORT0_PIN0_gc    = (0x40), /* Port 0 Pin 0 */
    EVSYS_GENERATOR_PORT0_PIN1_gc    = (0x41), /* Port 0 Pin 1 */
    EVSYS_GENERATOR_PORT0_PIN2_gc    = (0x42), /* Port 0 Pin 2 */
    EVSYS_GENERATOR_PORT0_PIN3_gc    = (0x43), /* Port 0 Pin 3 */
    EVSYS_GENERATOR_PORT0_PIN4_gc    = (0x44), /* Port 0 Pin 4 */
    EVSYS_GENERATOR_PORT0_PIN5_gc    = (0x45), /* Port 0 Pin 5 */
    EVSYS_GENERATOR_PORT0_PIN6_gc    = (0x46), /* Port 0 Pin 6 */
    EVSYS_GENERATOR_PORT0_PIN7_gc    = (0x47), /* Port 0 Pin 7 */
    EVSYS_GENERATOR_PORT1_PIN0_gc    = (0x48), /* Port 1 Pin 0 */
    EVSYS_GENERATOR_PORT1_PIN1_gc    = (0x49), /* Port 1 Pin 1 */
    EVSYS_GENERATOR_PORT1_PIN2_gc    = (0x4A), /* Port 1 Pin 2 */
    EVSYS_GENERATOR_PORT1_PIN3_gc    = (0x4B), /* Port 1 Pin 3 */
    EVSYS_GENERATOR_PORT1_PIN4_gc    = (0x4C), /* Port 1 Pin 4 */
    EVSYS_GENERATOR_PORT1_PIN5_gc    = (0x4D), /* Port 1 Pin 5 */
    EVSYS_GENERATOR_PORT1_PIN6_gc    = (0x4E), /* Port 1 Pin 6 */
    EVSYS_GENERATOR_PORT1_PIN7_gc    = (0x4F), /* Port 1 Pin 7 */
    EVSYS_GENERATOR_USART0_XCK_gc    = (0x60), /* USART 0 Xclock */
    EVSYS_GENERATOR_USART1_XCK_gc    = (0x61), /* USART 1 Xclock */
    EVSYS_GENERATOR_USART2_XCK_gc    = (0x62), /* USART 2 Xclock */
    EVSYS_GENERATOR_USART3_XCK_gc    = (0x63), /* USART 3 Xclock */
    EVSYS_GENERATOR_SPI0_SCK_gc      = (0x68), /* SPI 0 Sclock */
    EVSYS_GENERATOR_TCA0_OVF_LUNF_gc = (0x80), /* Timer/Counter A0 overflow / low byte underflow */
    EVSYS_GENERATOR_TCA0_HUNF_gc     = (0x81), /* Timer/Counter A0 high byte underflow (split mode) */
    EVSYS_GENERATOR_TCA0_CMP0_gc     = (0x84), /* Timer/Counter A0 compare 0 */
    EVSYS_GENERATOR_TCA0_CMP1_gc     = (0x85), /* Timer/Counter A0 compare 1 */
    EVSYS_GENERATOR_TCA0_CMP2_gc     = (0x86), /* Timer/Counter A0 compare 2 */
    EVSYS_GENERATOR_TCB0_CAPT_gc     = (0xA0), /* Timer/Counter B0 capture */
    EVSYS_GENERATOR_TCB1_CAPT_gc     = (0xA2), /* Timer/Counter B1 capture */
    EVSYS_GENERATOR_TCB2_CAPT_gc     = (0xA4), /* Timer/Counter B2 capture */
    EVSYS_GENERATOR_TCB3_CAPT_gc     = (0xA6), /* Timer/Counter B3 capture */
} EVSYS_GENERATOR_t;

/* Generator selector */
typedef enum EVSYS_GENERATOR_enum
{
    EVSYS_GENERATOR_OFF_gc           = (0x00), /* Off */
    EVSYS_GENERATOR_UPDI_gc          = (0x01), /* Unified Program and Debug Interface */
    EVSYS_GENERATOR_RTC_OVF_gc       = (0x06), /* Real Time Counter overflow */
    EVSYS_GENERATOR_RTC_CMP_gc       = (0x07), /* Real Time Counter compare */
    EVSYS_GENERATOR_RTC_PIT0_gc      = (0x08), /* Periodic Interrupt Timer output 0 */
    EVSYS_GENERATOR_RTC_PIT1_gc      = (0x09), /* Periodic Interrupt Timer output 1 */
    EVSYS_GENERATOR_RTC_PIT2_gc      = (0x0A), /* Periodic Interrupt Timer output 2 */
    EVSYS_GENERATOR_RTC_PIT3_gc      = (0x0B), /* Periodic Interrupt Timer output 3 */
    EVSYS_GENERATOR_CCL_LUT0_gc      = (0x10), /* Configurable Custom Logic LUT0 */
    EVSYS_GENERATOR_CCL_LUT1_gc      = (0x11), /* Configurable Custom Logic LUT1 */
    EVSYS_GENERATOR_CCL_LUT2_gc      = (0x12), /* Configurable Custom Logic LUT2 */
    EVSYS_GENERATOR_CCL_LUT3_gc      = (0x13), /* Configurable Custom Logic LUT3 */
    EVSYS_GENERATOR_AC0_OUT_gc       = (0x20), /* Analog Comparator 0 out */
    EVSYS_GENERATOR_ADC0_RESRDY_gc   = (0x24), /* ADC 0 Result Ready Event */
    EVSYS_GENERATOR_PORT0_PIN0_gc    = (0x40), /* Port 0 Pin 0 */
    EVSYS_GENERATOR_PORT0_PIN1_gc    = (0x41), /* Port 0 Pin 1 */
    EVSYS_GENERATOR_PORT0_PIN2_gc    = (0x42), /* Port 0 Pin 2 */
    EVSYS_GENERATOR_PORT0_PIN3_gc    = (0x43), /* Port 0 Pin 3 */
    EVSYS_GENERATOR_PORT0_PIN4_gc    = (0x44), /* Port 0 Pin 4 */
    EVSYS_GENERATOR_PORT0_PIN5_gc    = (0x45), /* Port 0 Pin 5 */
    EVSYS_GENERATOR_PORT0_PIN6_gc    = (0x46), /* Port 0 Pin 6 */
    EVSYS_GENERATOR_PORT0_PIN7_gc    = (0x47), /* Port 0 Pin 7 */
    EVSYS_GENERATOR_PORT1_PIN0_gc    = (0x48), /* Port 1 Pin 0 */
    EVSYS_GENERATOR_PORT1_PIN1_gc    = (0x49), /* Port 1 Pin 1 */
    EVSYS_GENERATOR_PORT1_PIN2_gc    = (0x4A), /* Port 1 Pin 2 */
    EVSYS_GENERATOR_PORT1_PIN3_gc    = (0x4B), /* Port 1 Pin 3 */
    EVSYS_GENERATOR_PORT1_PIN4_gc    = (0x4C), /* Port 1 Pin 4 */
    EVSYS_GENERATOR_PORT1_PIN5_gc    = (0x4D), /* Port 1 Pin 5 */
    EVSYS_GENERATOR_PORT1_PIN6_gc    = (0x4E), /* Port 1 Pin 6 */
    EVSYS_GENERATOR_PORT1_PIN7_gc    = (0x4F), /* Port 1 Pin 7 */
    EVSYS_GENERATOR_USART0_XCK_gc    = (0x60), /* USART 0 Xclock */
    EVSYS_GENERATOR_USART1_XCK_gc    = (0x61), /* USART 1 Xclock */
    EVSYS_GENERATOR_USART2_XCK_gc    = (0x62), /* USART 2 Xclock */
    EVSYS_GENERATOR_USART3_XCK_gc    = (0x63), /* USART 3 Xclock */
    EVSYS_GENERATOR_SPI0_SCK_gc      = (0x68), /* SPI 0 Sclock */
    EVSYS_GENERATOR_TCA0_OVF_LUNF_gc = (0x80), /* Timer/Counter A0 overflow / low byte underflow */
    EVSYS_GENERATOR_TCA0_HUNF_gc     = (0x81), /* Timer/Counter A0 high byte underflow (split mode) */
    EVSYS_GENERATOR_TCA0_CMP0_gc     = (0x84), /* Timer/Counter A0 compare 0 */
    EVSYS_GENERATOR_TCA0_CMP1_gc     = (0x85), /* Timer/Counter A0 compare 1 */
    EVSYS_GENERATOR_TCA0_CMP2_gc     = (0x86), /* Timer/Counter A0 compare 2 */
    EVSYS_GENERATOR_TCB0_CAPT_gc     = (0xA0), /* Timer/Counter B0 capture */
    EVSYS_GENERATOR_TCB1_CAPT_gc     = (0xA2), /* Timer/Counter B1 capture */
    EVSYS_GENERATOR_TCB2_CAPT_gc     = (0xA4), /* Timer/Counter B2 capture */
    EVSYS_GENERATOR_TCB3_CAPT_gc     = (0xA6), /* Timer/Counter B3 capture */
} EVSYS_GENERATOR_t;

/* Generator selector */
typedef enum EVSYS_GENERATOR_enum
{
    EVSYS_GENERATOR_OFF_gc           = (0x00), /* Off */
    EVSYS_GENERATOR_UPDI_gc          = (0x01), /* Unified Program and Debug Interface */
    EVSYS_GENERATOR_RTC_OVF_gc       = (0x06), /* Real Time Counter overflow */
    EVSYS_GENERATOR_RTC_CMP_gc       = (0x07), /* Real Time Counter compare */
    EVSYS_GENERATOR_RTC_PIT0_gc      = (0x08), /* Periodic Interrupt Timer output 0 */
    EVSYS_GENERATOR_RTC_PIT1_gc      = (0x09), /* Periodic Interrupt Timer output 1 */
    EVSYS_GENERATOR_RTC_PIT2_gc      = (0x0A), /* Periodic Interrupt Timer output 2 */
    EVSYS_GENERATOR_RTC_PIT3_gc      = (0x0B), /* Periodic Interrupt Timer output 3 */
    EVSYS_GENERATOR_CCL_LUT0_gc      = (0x10), /* Configurable Custom Logic LUT0 */
    EVSYS_GENERATOR_CCL_LUT1_gc      = (0x11), /* Configurable Custom Logic LUT1 */
    EVSYS_GENERATOR_CCL_LUT2_gc      = (0x12), /* Configurable Custom Logic LUT2 */
    EVSYS_GENERATOR_CCL_LUT3_gc      = (0x13), /* Configurable Custom Logic LUT3 */
    EVSYS_GENERATOR_AC0_OUT_gc       = (0x20), /* Analog Comparator 0 out */
    EVSYS_GENERATOR_ADC0_RESRDY_gc   = (0x24), /* ADC 0 Result Ready Event */
    EVSYS_GENERATOR_PORT0_PIN0_gc    = (0x40), /* Port 0 Pin 0 */
    EVSYS_GENERATOR_PORT0_PIN1_gc    = (0x41), /* Port 0 Pin 1 */
    EVSYS_GENERATOR_PORT0_PIN2_gc    = (0x42), /* Port 0 Pin 2 */
    EVSYS_GENERATOR_PORT0_PIN3_gc    = (0x43), /* Port 0 Pin 3 */
    EVSYS_GENERATOR_PORT0_PIN4_gc    = (0x44), /* Port 0 Pin 4 */
    EVSYS_GENERATOR_PORT0_PIN5_gc    = (0x45), /* Port 0 Pin 5 */
    EVSYS_GENERATOR_PORT0_PIN6_gc    = (0x46), /* Port 0 Pin 6 */
    EVSYS_GENERATOR_PORT0_PIN7_gc    = (0x47), /* Port 0 Pin 7 */
    EVSYS_GENERATOR_PORT1_PIN0_gc    = (0x48), /* Port 1 Pin 0 */
    EVSYS_GENERATOR_PORT1_PIN1_gc    = (0x49), /* Port 1 Pin 1 */
    EVSYS_GENERATOR_PORT1_PIN2_gc    = (0x4A), /* Port 1 Pin 2 */
    EVSYS_GENERATOR_PORT1_PIN3_gc    = (0x4B), /* Port 1 Pin 3 */
    EVSYS_GENERATOR_PORT1_PIN4_gc    = (0x4C), /* Port 1 Pin 4 */
    EVSYS_GENERATOR_PORT1_PIN5_gc    = (0x4D), /* Port 1 Pin 5 */
    EVSYS_GENERATOR_PORT1_PIN6_gc    = (0x4E), /* Port 1 Pin 6 */
    EVSYS_GENERATOR_PORT1_PIN7_gc    = (0x4F), /* Port 1 Pin 7 */
    EVSYS_GENERATOR_USART0_XCK_gc    = (0x60), /* USART 0 Xclock */
    EVSYS_GENERATOR_USART1_XCK_gc    = (0x61), /* USART 1 Xclock */
    EVSYS_GENERATOR_USART2_XCK_gc    = (0x62), /* USART 2 Xclock */
    EVSYS_GENERATOR_USART3_XCK_gc    = (0x63), /* USART 3 Xclock */
    EVSYS_GENERATOR_SPI0_SCK_gc      = (0x68), /* SPI 0 Sclock */
    EVSYS_GENERATOR_TCA0_OVF_LUNF_gc = (0x80), /* Timer/Counter A0 overflow / low byte underflow */
    EVSYS_GENERATOR_TCA0_HUNF_gc     = (0x81), /* Timer/Counter A0 high byte underflow (split mode) */
    EVSYS_GENERATOR_TCA0_CMP0_gc     = (0x84), /* Timer/Counter A0 compare 0 */
    EVSYS_GENERATOR_TCA0_CMP1_gc     = (0x85), /* Timer/Counter A0 compare 1 */
    EVSYS_GENERATOR_TCA0_CMP2_gc     = (0x86), /* Timer/Counter A0 compare 2 */
    EVSYS_GENERATOR_TCB0_CAPT_gc     = (0xA0), /* Timer/Counter B0 capture */
    EVSYS_GENERATOR_TCB1_CAPT_gc     = (0xA2), /* Timer/Counter B1 capture */
    EVSYS_GENERATOR_TCB2_CAPT_gc     = (0xA4), /* Timer/Counter B2 capture */
    EVSYS_GENERATOR_TCB3_CAPT_gc     = (0xA6), /* Timer/Counter B3 capture */
} EVSYS_GENERATOR_t;

/* Generator selector */
typedef enum EVSYS_GENERATOR_enum
{
    EVSYS_GENERATOR_OFF_gc           = (0x00), /* Off */
    EVSYS_GENERATOR_UPDI_gc          = (0x01), /* Unified Program and Debug Interface */
    EVSYS_GENERATOR_RTC_OVF_gc       = (0x06), /* Real Time Counter overflow */
    EVSYS_GENERATOR_RTC_CMP_gc       = (0x07), /* Real Time Counter compare */
    EVSYS_GENERATOR_RTC_PIT0_gc      = (0x08), /* Periodic Interrupt Timer output 0 */
    EVSYS_GENERATOR_RTC_PIT1_gc      = (0x09), /* Periodic Interrupt Timer output 1 */
    EVSYS_GENERATOR_RTC_PIT2_gc      = (0x0A), /* Periodic Interrupt Timer output 2 */
    EVSYS_GENERATOR_RTC_PIT3_gc      = (0x0B), /* Periodic Interrupt Timer output 3 */
    EVSYS_GENERATOR_CCL_LUT0_gc      = (0x10), /* Configurable Custom Logic LUT0 */
    EVSYS_GENERATOR_CCL_LUT1_gc      = (0x11), /* Configurable Custom Logic LUT1 */
    EVSYS_GENERATOR_CCL_LUT2_gc      = (0x12), /* Configurable Custom Logic LUT2 */
    EVSYS_GENERATOR_CCL_LUT3_gc      = (0x13), /* Configurable Custom Logic LUT3 */
    EVSYS_GENERATOR_AC0_OUT_gc       = (0x20), /* Analog Comparator 0 out */
    EVSYS_GENERATOR_ADC0_RESRDY_gc   = (0x24), /* ADC 0 Result Ready Event */
    EVSYS_GENERATOR_PORT0_PIN0_gc    = (0x40), /* Port 0 Pin 0 */
    EVSYS_GENERATOR_PORT0_PIN1_gc    = (0x41), /* Port 0 Pin 1 */
    EVSYS_GENERATOR_PORT0_PIN2_gc    = (0x42), /* Port 0 Pin 2 */
    EVSYS_GENERATOR_PORT0_PIN3_gc    = (0x43), /* Port 0 Pin 3 */
    EVSYS_GENERATOR_PORT0_PIN4_gc    = (0x44), /* Port 0 Pin 4 */
    EVSYS_GENERATOR_PORT0_PIN5_gc    = (0x45), /* Port 0 Pin 5 */
    EVSYS_GENERATOR_PORT0_PIN6_gc    = (0x46), /* Port 0 Pin 6 */
    EVSYS_GENERATOR_PORT0_PIN7_gc    = (0x47), /* Port 0 Pin 7 */
    EVSYS_GENERATOR_PORT1_PIN0_gc    = (0x48), /* Port 1 Pin 0 */
    EVSYS_GENERATOR_PORT1_PIN1_gc    = (0x49), /* Port 1 Pin 1 */
    EVSYS_GENERATOR_PORT1_PIN2_gc    = (0x4A), /* Port 1 Pin 2 */
    EVSYS_GENERATOR_PORT1_PIN3_gc    = (0x4B), /* Port 1 Pin 3 */
    EVSYS_GENERATOR_PORT1_PIN4_gc    = (0x4C), /* Port 1 Pin 4 */
    EVSYS_GENERATOR_PORT1_PIN5_gc    = (0x4D), /* Port 1 Pin 5 */
    EVSYS_GENERATOR_PORT1_PIN6_gc    = (0x4E), /* Port 1 Pin 6 */
    EVSYS_GENERATOR_PORT1_PIN7_gc    = (0x4F), /* Port 1 Pin 7 */
    EVSYS_GENERATOR_USART0_XCK_gc    = (0x60), /* USART 0 Xclock */
    EVSYS_GENERATOR_USART1_XCK_gc    = (0x61), /* USART 1 Xclock */
    EVSYS_GENERATOR_USART2_XCK_gc    = (0x62), /* USART 2 Xclock */
    EVSYS_GENERATOR_USART3_XCK_gc    = (0x63), /* USART 3 Xclock */
    EVSYS_GENERATOR_SPI0_SCK_gc      = (0x68), /* SPI 0 Sclock */
    EVSYS_GENERATOR_TCA0_OVF_LUNF_gc = (0x80), /* Timer/Counter A0 overflow / low byte underflow */
    EVSYS_GENERATOR_TCA0_HUNF_gc     = (0x81), /* Timer/Counter A0 high byte underflow (split mode) */
    EVSYS_GENERATOR_TCA0_CMP0_gc     = (0x84), /* Timer/Counter A0 compare 0 */
    EVSYS_GENERATOR_TCA0_CMP1_gc     = (0x85), /* Timer/Counter A0 compare 1 */
    EVSYS_GENERATOR_TCA0_CMP2_gc     = (0x86), /* Timer/Counter A0 compare 2 */
    EVSYS_GENERATOR_TCB0_CAPT_gc     = (0xA0), /* Timer/Counter B0 capture */
    EVSYS_GENERATOR_TCB1_CAPT_gc     = (0xA2), /* Timer/Counter B1 capture */
    EVSYS_GENERATOR_TCB2_CAPT_gc     = (0xA4), /* Timer/Counter B2 capture */
    EVSYS_GENERATOR_TCB3_CAPT_gc     = (0xA6), /* Timer/Counter B3 capture */
} EVSYS_GENERATOR_t;

/* Software event on channels */
typedef enum EVSYS_STROBE0_enum
{
    EVSYS_STROBE0_EV_STROBE_CH0_gc = (0x01), /*  */
    EVSYS_STROBE0_EV_STROBE_CH1_gc = (0x02), /*  */
    EVSYS_STROBE0_EV_STROBE_CH2_gc = (0x04), /*  */
    EVSYS_STROBE0_EV_STROBE_CH3_gc = (0x08), /*  */
    EVSYS_STROBE0_EV_STROBE_CH4_gc = (0x10), /*  */
    EVSYS_STROBE0_EV_STROBE_CH5_gc = (0x20), /*  */
    EVSYS_STROBE0_EV_STROBE_CH6_gc = (0x40), /*  */
    EVSYS_STROBE0_EV_STROBE_CH7_gc = (0x80), /*  */
} EVSYS_STROBE0_t;

/* Channel selector */
typedef enum EVSYS_CHANNEL_enum
{
    EVSYS_CHANNEL_OFF_gc      = (0x00), /* Off */
    EVSYS_CHANNEL_CHANNEL0_gc = (0x01), /* Connect user to event channel 0 */
    EVSYS_CHANNEL_CHANNEL1_gc = (0x02), /* Connect user to event channel 1 */
    EVSYS_CHANNEL_CHANNEL2_gc = (0x03), /* Connect user to event channel 2 */
    EVSYS_CHANNEL_CHANNEL3_gc = (0x04), /* Connect user to event channel 3 */
    EVSYS_CHANNEL_CHANNEL4_gc = (0x05), /* Connect user to event channel 4 */
    EVSYS_CHANNEL_CHANNEL5_gc = (0x06), /* Connect user to event channel 5 */
} EVSYS_CHANNEL_t;

/* Channel selector */
typedef enum EVSYS_CHANNEL_enum
{
    EVSYS_CHANNEL_OFF_gc      = (0x00), /* Off */
    EVSYS_CHANNEL_CHANNEL0_gc = (0x01), /* Connect user to event channel 0 */
    EVSYS_CHANNEL_CHANNEL1_gc = (0x02), /* Connect user to event channel 1 */
    EVSYS_CHANNEL_CHANNEL2_gc = (0x03), /* Connect user to event channel 2 */
    EVSYS_CHANNEL_CHANNEL3_gc = (0x04), /* Connect user to event channel 3 */
    EVSYS_CHANNEL_CHANNEL4_gc = (0x05), /* Connect user to event channel 4 */
    EVSYS_CHANNEL_CHANNEL5_gc = (0x06), /* Connect user to event channel 5 */
} EVSYS_CHANNEL_t;

/* Channel selector */
typedef enum EVSYS_CHANNEL_enum
{
    EVSYS_CHANNEL_OFF_gc      = (0x00), /* Off */
    EVSYS_CHANNEL_CHANNEL0_gc = (0x01), /* Connect user to event channel 0 */
    EVSYS_CHANNEL_CHANNEL1_gc = (0x02), /* Connect user to event channel 1 */
    EVSYS_CHANNEL_CHANNEL2_gc = (0x03), /* Connect user to event channel 2 */
    EVSYS_CHANNEL_CHANNEL3_gc = (0x04), /* Connect user to event channel 3 */
    EVSYS_CHANNEL_CHANNEL4_gc = (0x05), /* Connect user to event channel 4 */
    EVSYS_CHANNEL_CHANNEL5_gc = (0x06), /* Connect user to event channel 5 */
} EVSYS_CHANNEL_t;

/* Channel selector */
typedef enum EVSYS_CHANNEL_enum
{
    EVSYS_CHANNEL_OFF_gc      = (0x00), /* Off */
    EVSYS_CHANNEL_CHANNEL0_gc = (0x01), /* Connect user to event channel 0 */
    EVSYS_CHANNEL_CHANNEL1_gc = (0x02), /* Connect user to event channel 1 */
    EVSYS_CHANNEL_CHANNEL2_gc = (0x03), /* Connect user to event channel 2 */
    EVSYS_CHANNEL_CHANNEL3_gc = (0x04), /* Connect user to event channel 3 */
    EVSYS_CHANNEL_CHANNEL4_gc = (0x05), /* Connect user to event channel 4 */
    EVSYS_CHANNEL_CHANNEL5_gc = (0x06), /* Connect user to event channel 5 */
} EVSYS_CHANNEL_t;

/* Channel selector */
typedef enum EVSYS_CHANNEL_enum
{
    EVSYS_CHANNEL_OFF_gc      = (0x00), /* Off */
    EVSYS_CHANNEL_CHANNEL0_gc = (0x01), /* Connect user to event channel 0 */
    EVSYS_CHANNEL_CHANNEL1_gc = (0x02), /* Connect user to event channel 1 */
    EVSYS_CHANNEL_CHANNEL2_gc = (0x03), /* Connect user to event channel 2 */
    EVSYS_CHANNEL_CHANNEL3_gc = (0x04), /* Connect user to event channel 3 */
    EVSYS_CHANNEL_CHANNEL4_gc = (0x05), /* Connect user to event channel 4 */
    EVSYS_CHANNEL_CHANNEL5_gc = (0x06), /* Connect user to event channel 5 */
} EVSYS_CHANNEL_t;

/* Channel selector */
typedef enum EVSYS_CHANNEL_enum
{
    EVSYS_CHANNEL_OFF_gc      = (0x00), /* Off */
    EVSYS_CHANNEL_CHANNEL0_gc = (0x01), /* Connect user to event channel 0 */
    EVSYS_CHANNEL_CHANNEL1_gc = (0x02), /* Connect user to event channel 1 */
    EVSYS_CHANNEL_CHANNEL2_gc = (0x03), /* Connect user to event channel 2 */
    EVSYS_CHANNEL_CHANNEL3_gc = (0x04), /* Connect user to event channel 3 */
    EVSYS_CHANNEL_CHANNEL4_gc = (0x05), /* Connect user to event channel 4 */
    EVSYS_CHANNEL_CHANNEL5_gc = (0x06), /* Connect user to event channel 5 */
} EVSYS_CHANNEL_t;

/* Channel selector */
typedef enum EVSYS_CHANNEL_enum
{
    EVSYS_CHANNEL_OFF_gc      = (0x00), /* Off */
    EVSYS_CHANNEL_CHANNEL0_gc = (0x01), /* Connect user to event channel 0 */
    EVSYS_CHANNEL_CHANNEL1_gc = (0x02), /* Connect user to event channel 1 */
    EVSYS_CHANNEL_CHANNEL2_gc = (0x03), /* Connect user to event channel 2 */
    EVSYS_CHANNEL_CHANNEL3_gc = (0x04), /* Connect user to event channel 3 */
    EVSYS_CHANNEL_CHANNEL4_gc = (0x05), /* Connect user to event channel 4 */
    EVSYS_CHANNEL_CHANNEL5_gc = (0x06), /* Connect user to event channel 5 */
} EVSYS_CHANNEL_t;

/* Channel selector */
typedef enum EVSYS_CHANNEL_enum
{
    EVSYS_CHANNEL_OFF_gc      = (0x00), /* Off */
    EVSYS_CHANNEL_CHANNEL0_gc = (0x01), /* Connect user to event channel 0 */
    EVSYS_CHANNEL_CHANNEL1_gc = (0x02), /* Connect user to event channel 1 */
    EVSYS_CHANNEL_CHANNEL2_gc = (0x03), /* Connect user to event channel 2 */
    EVSYS_CHANNEL_CHANNEL3_gc = (0x04), /* Connect user to event channel 3 */
    EVSYS_CHANNEL_CHANNEL4_gc = (0x05), /* Connect user to event channel 4 */
    EVSYS_CHANNEL_CHANNEL5_gc = (0x06), /* Connect user to event channel 5 */
} EVSYS_CHANNEL_t;

/* Channel selector */
typedef enum EVSYS_CHANNEL_enum
{
    EVSYS_CHANNEL_OFF_gc      = (0x00), /* Off */
    EVSYS_CHANNEL_CHANNEL0_gc = (0x01), /* Connect user to event channel 0 */
    EVSYS_CHANNEL_CHANNEL1_gc = (0x02), /* Connect user to event channel 1 */
    EVSYS_CHANNEL_CHANNEL2_gc = (0x03), /* Connect user to event channel 2 */
    EVSYS_CHANNEL_CHANNEL3_gc = (0x04), /* Connect user to event channel 3 */
    EVSYS_CHANNEL_CHANNEL4_gc = (0x05), /* Connect user to event channel 4 */
    EVSYS_CHANNEL_CHANNEL5_gc = (0x06), /* Connect user to event channel 5 */
} EVSYS_CHANNEL_t;

/* Channel selector */
typedef enum EVSYS_CHANNEL_enum
{
    EVSYS_CHANNEL_OFF_gc      = (0x00), /* Off */
    EVSYS_CHANNEL_CHANNEL0_gc = (0x01), /* Connect user to event channel 0 */
    EVSYS_CHANNEL_CHANNEL1_gc = (0x02), /* Connect user to event channel 1 */
    EVSYS_CHANNEL_CHANNEL2_gc = (0x03), /* Connect user to event channel 2 */
    EVSYS_CHANNEL_CHANNEL3_gc = (0x04), /* Connect user to event channel 3 */
    EVSYS_CHANNEL_CHANNEL4_gc = (0x05), /* Connect user to event channel 4 */
    EVSYS_CHANNEL_CHANNEL5_gc = (0x06), /* Connect user to event channel 5 */
} EVSYS_CHANNEL_t;

/* Channel selector */
typedef enum EVSYS_CHANNEL_enum
{
    EVSYS_CHANNEL_OFF_gc      = (0x00), /* Off */
    EVSYS_CHANNEL_CHANNEL0_gc = (0x01), /* Connect user to event channel 0 */
    EVSYS_CHANNEL_CHANNEL1_gc = (0x02), /* Connect user to event channel 1 */
    EVSYS_CHANNEL_CHANNEL2_gc = (0x03), /* Connect user to event channel 2 */
    EVSYS_CHANNEL_CHANNEL3_gc = (0x04), /* Connect user to event channel 3 */
    EVSYS_CHANNEL_CHANNEL4_gc = (0x05), /* Connect user to event channel 4 */
    EVSYS_CHANNEL_CHANNEL5_gc = (0x06), /* Connect user to event channel 5 */
} EVSYS_CHANNEL_t;

/* Channel selector */
typedef enum EVSYS_CHANNEL_enum
{
    EVSYS_CHANNEL_OFF_gc      = (0x00), /* Off */
    EVSYS_CHANNEL_CHANNEL0_gc = (0x01), /* Connect user to event channel 0 */
    EVSYS_CHANNEL_CHANNEL1_gc = (0x02), /* Connect user to event channel 1 */
    EVSYS_CHANNEL_CHANNEL2_gc = (0x03), /* Connect user to event channel 2 */
    EVSYS_CHANNEL_CHANNEL3_gc = (0x04), /* Connect user to event channel 3 */
    EVSYS_CHANNEL_CHANNEL4_gc = (0x05), /* Connect user to event channel 4 */
    EVSYS_CHANNEL_CHANNEL5_gc = (0x06), /* Connect user to event channel 5 */
} EVSYS_CHANNEL_t;

/* Channel selector */
typedef enum EVSYS_CHANNEL_enum
{
    EVSYS_CHANNEL_OFF_gc      = (0x00), /* Off */
    EVSYS_CHANNEL_CHANNEL0_gc = (0x01), /* Connect user to event channel 0 */
    EVSYS_CHANNEL_CHANNEL1_gc = (0x02), /* Connect user to event channel 1 */
    EVSYS_CHANNEL_CHANNEL2_gc = (0x03), /* Connect user to event channel 2 */
    EVSYS_CHANNEL_CHANNEL3_gc = (0x04), /* Connect user to event channel 3 */
    EVSYS_CHANNEL_CHANNEL4_gc = (0x05), /* Connect user to event channel 4 */
    EVSYS_CHANNEL_CHANNEL5_gc = (0x06), /* Connect user to event channel 5 */
} EVSYS_CHANNEL_t;

/* Channel selector */
typedef enum EVSYS_CHANNEL_enum
{
    EVSYS_CHANNEL_OFF_gc      = (0x00), /* Off */
    EVSYS_CHANNEL_CHANNEL0_gc = (0x01), /* Connect user to event channel 0 */
    EVSYS_CHANNEL_CHANNEL1_gc = (0x02), /* Connect user to event channel 1 */
    EVSYS_CHANNEL_CHANNEL2_gc = (0x03), /* Connect user to event channel 2 */
    EVSYS_CHANNEL_CHANNEL3_gc = (0x04), /* Connect user to event channel 3 */
    EVSYS_CHANNEL_CHANNEL4_gc = (0x05), /* Connect user to event channel 4 */
    EVSYS_CHANNEL_CHANNEL5_gc = (0x06), /* Connect user to event channel 5 */
} EVSYS_CHANNEL_t;

/* Channel selector */
typedef enum EVSYS_CHANNEL_enum
{
    EVSYS_CHANNEL_OFF_gc      = (0x00), /* Off */
    EVSYS_CHANNEL_CHANNEL0_gc = (0x01), /* Connect user to event channel 0 */
    EVSYS_CHANNEL_CHANNEL1_gc = (0x02), /* Connect user to event channel 1 */
    EVSYS_CHANNEL_CHANNEL2_gc = (0x03), /* Connect user to event channel 2 */
    EVSYS_CHANNEL_CHANNEL3_gc = (0x04), /* Connect user to event channel 3 */
    EVSYS_CHANNEL_CHANNEL4_gc = (0x05), /* Connect user to event channel 4 */
    EVSYS_CHANNEL_CHANNEL5_gc = (0x06), /* Connect user to event channel 5 */
} EVSYS_CHANNEL_t;

/* Channel selector */
typedef enum EVSYS_CHANNEL_enum
{
    EVSYS_CHANNEL_OFF_gc      = (0x00), /* Off */
    EVSYS_CHANNEL_CHANNEL0_gc = (0x01), /* Connect user to event channel 0 */
    EVSYS_CHANNEL_CHANNEL1_gc = (0x02), /* Connect user to event channel 1 */
    EVSYS_CHANNEL_CHANNEL2_gc = (0x03), /* Connect user to event channel 2 */
    EVSYS_CHANNEL_CHANNEL3_gc = (0x04), /* Connect user to event channel 3 */
    EVSYS_CHANNEL_CHANNEL4_gc = (0x05), /* Connect user to event channel 4 */
    EVSYS_CHANNEL_CHANNEL5_gc = (0x06), /* Connect user to event channel 5 */
} EVSYS_CHANNEL_t;

/* Channel selector */
typedef enum EVSYS_CHANNEL_enum
{
    EVSYS_CHANNEL_OFF_gc      = (0x00), /* Off */
    EVSYS_CHANNEL_CHANNEL0_gc = (0x01), /* Connect user to event channel 0 */
    EVSYS_CHANNEL_CHANNEL1_gc = (0x02), /* Connect user to event channel 1 */
    EVSYS_CHANNEL_CHANNEL2_gc = (0x03), /* Connect user to event channel 2 */
    EVSYS_CHANNEL_CHANNEL3_gc = (0x04), /* Connect user to event channel 3 */
    EVSYS_CHANNEL_CHANNEL4_gc = (0x05), /* Connect user to event channel 4 */
    EVSYS_CHANNEL_CHANNEL5_gc = (0x06), /* Connect user to event channel 5 */
} EVSYS_CHANNEL_t;

/* Channel selector */
typedef enum EVSYS_CHANNEL_enum
{
    EVSYS_CHANNEL_OFF_gc      = (0x00), /* Off */
    EVSYS_CHANNEL_CHANNEL0_gc = (0x01), /* Connect user to event channel 0 */
    EVSYS_CHANNEL_CHANNEL1_gc = (0x02), /* Connect user to event channel 1 */
    EVSYS_CHANNEL_CHANNEL2_gc = (0x03), /* Connect user to event channel 2 */
    EVSYS_CHANNEL_CHANNEL3_gc = (0x04), /* Connect user to event channel 3 */
    EVSYS_CHANNEL_CHANNEL4_gc = (0x05), /* Connect user to event channel 4 */
    EVSYS_CHANNEL_CHANNEL5_gc = (0x06), /* Connect user to event channel 5 */
} EVSYS_CHANNEL_t;

/* Channel selector */
typedef enum EVSYS_CHANNEL_enum
{
    EVSYS_CHANNEL_OFF_gc      = (0x00), /* Off */
    EVSYS_CHANNEL_CHANNEL0_gc = (0x01), /* Connect user to event channel 0 */
    EVSYS_CHANNEL_CHANNEL1_gc = (0x02), /* Connect user to event channel 1 */
    EVSYS_CHANNEL_CHANNEL2_gc = (0x03), /* Connect user to event channel 2 */
    EVSYS_CHANNEL_CHANNEL3_gc = (0x04), /* Connect user to event channel 3 */
    EVSYS_CHANNEL_CHANNEL4_gc = (0x05), /* Connect user to event channel 4 */
    EVSYS_CHANNEL_CHANNEL5_gc = (0x06), /* Connect user to event channel 5 */
} EVSYS_CHANNEL_t;

/* Channel selector */
typedef enum EVSYS_CHANNEL_enum
{
    EVSYS_CHANNEL_OFF_gc      = (0x00), /* Off */
    EVSYS_CHANNEL_CHANNEL0_gc = (0x01), /* Connect user to event channel 0 */
    EVSYS_CHANNEL_CHANNEL1_gc = (0x02), /* Connect user to event channel 1 */
    EVSYS_CHANNEL_CHANNEL2_gc = (0x03), /* Connect user to event channel 2 */
    EVSYS_CHANNEL_CHANNEL3_gc = (0x04), /* Connect user to event channel 3 */
    EVSYS_CHANNEL_CHANNEL4_gc = (0x05), /* Connect user to event channel 4 */
    EVSYS_CHANNEL_CHANNEL5_gc = (0x06), /* Connect user to event channel 5 */
} EVSYS_CHANNEL_t;

/* Channel selector */
typedef enum EVSYS_CHANNEL_enum
{
    EVSYS_CHANNEL_OFF_gc      = (0x00), /* Off */
    EVSYS_CHANNEL_CHANNEL0_gc = (0x01), /* Connect user to event channel 0 */
    EVSYS_CHANNEL_CHANNEL1_gc = (0x02), /* Connect user to event channel 1 */
    EVSYS_CHANNEL_CHANNEL2_gc = (0x03), /* Connect user to event channel 2 */
    EVSYS_CHANNEL_CHANNEL3_gc = (0x04), /* Connect user to event channel 3 */
    EVSYS_CHANNEL_CHANNEL4_gc = (0x05), /* Connect user to event channel 4 */
    EVSYS_CHANNEL_CHANNEL5_gc = (0x06), /* Connect user to event channel 5 */
} EVSYS_CHANNEL_t;

/* Channel selector */
typedef enum EVSYS_CHANNEL_enum
{
    EVSYS_CHANNEL_OFF_gc      = (0x00), /* Off */
    EVSYS_CHANNEL_CHANNEL0_gc = (0x01), /* Connect user to event channel 0 */
    EVSYS_CHANNEL_CHANNEL1_gc = (0x02), /* Connect user to event channel 1 */
    EVSYS_CHANNEL_CHANNEL2_gc = (0x03), /* Connect user to event channel 2 */
    EVSYS_CHANNEL_CHANNEL3_gc = (0x04), /* Connect user to event channel 3 */
    EVSYS_CHANNEL_CHANNEL4_gc = (0x05), /* Connect user to event channel 4 */
    EVSYS_CHANNEL_CHANNEL5_gc = (0x06), /* Connect user to event channel 5 */
} EVSYS_CHANNEL_t;

/* Channel selector */
typedef enum EVSYS_CHANNEL_enum
{
    EVSYS_CHANNEL_OFF_gc      = (0x00), /* Off */
    EVSYS_CHANNEL_CHANNEL0_gc = (0x01), /* Connect user to event channel 0 */
    EVSYS_CHANNEL_CHANNEL1_gc = (0x02), /* Connect user to event channel 1 */
    EVSYS_CHANNEL_CHANNEL2_gc = (0x03), /* Connect user to event channel 2 */
    EVSYS_CHANNEL_CHANNEL3_gc = (0x04), /* Connect user to event channel 3 */
    EVSYS_CHANNEL_CHANNEL4_gc = (0x05), /* Connect user to event channel 4 */
    EVSYS_CHANNEL_CHANNEL5_gc = (0x06), /* Connect user to event channel 5 */
} EVSYS_CHANNEL_t;

/* Channel selector */
typedef enum EVSYS_CHANNEL_enum
{
    EVSYS_CHANNEL_OFF_gc      = (0x00), /* Off */
    EVSYS_CHANNEL_CHANNEL0_gc = (0x01), /* Connect user to event channel 0 */
    EVSYS_CHANNEL_CHANNEL1_gc = (0x02), /* Connect user to event channel 1 */
    EVSYS_CHANNEL_CHANNEL2_gc = (0x03), /* Connect user to event channel 2 */
    EVSYS_CHANNEL_CHANNEL3_gc = (0x04), /* Connect user to event channel 3 */
    EVSYS_CHANNEL_CHANNEL4_gc = (0x05), /* Connect user to event channel 4 */
    EVSYS_CHANNEL_CHANNEL5_gc = (0x06), /* Connect user to event channel 5 */
} EVSYS_CHANNEL_t;

/*
--------------------------------------------------------------------------------
FUSE - Fuses
--------------------------------------------------------------------------------
*/

typedef struct FUSE_struct
{
    register8_t WDTCFG;      /* Watchdog Configuration */
    register8_t BODCFG;      /* BOD Configuration */
    register8_t OSCCFG;      /* Oscillator Configuration */
    register8_t rsv_0x03[2]; /* RESERVED REGISTER BLOCK */
    register8_t SYSCFG0;     /* System Configuration 0 */
    register8_t SYSCFG1;     /* System Configuration 1 */
    register8_t APPEND;      /* Application Code Section End */
    register8_t BOOTEND;     /* Boot Section End */
} FUSE_t;


/* BOD Operation in Active Mode */
typedef enum FUSE_ACTIVE_enum
{
    FUSE_ACTIVE_DIS_gc     = (0x00<<2), /* Disabled */
    FUSE_ACTIVE_ENABLED_gc = (0x01<<2), /* Enabled */
    FUSE_ACTIVE_SAMPLED_gc = (0x02<<2), /* Sampled */
    FUSE_ACTIVE_ENWAKE_gc  = (0x03<<2), /* Enabled with wake-up halted until BOD is ready */
} FUSE_ACTIVE_t;

/* BOD Level */
typedef enum FUSE_LVL_enum
{
    FUSE_LVL_BODLEVEL0_gc = (0x00<<5), /* 1.8 V */
    FUSE_LVL_BODLEVEL2_gc = (0x02<<5), /* 2.6 V */
    FUSE_LVL_BODLEVEL7_gc = (0x07<<5), /* 4.2 V */
} FUSE_LVL_t;

/* BOD Sample Frequency */
typedef enum FUSE_SAMPFREQ_enum
{
    FUSE_SAMPFREQ_1KHZ_gc  = (0x00<<4), /* 1kHz sampling frequency */
    FUSE_SAMPFREQ_125HZ_gc = (0x01<<4), /* 125Hz sampling frequency */
} FUSE_SAMPFREQ_t;

/* BOD Operation in Sleep Mode */
typedef enum FUSE_SLEEP_enum
{
    FUSE_SLEEP_DIS_gc     = (0x00), /* Disabled */
    FUSE_SLEEP_ENABLED_gc = (0x01), /* Enabled */
    FUSE_SLEEP_SAMPLED_gc = (0x02), /* Sampled */
} FUSE_SLEEP_t;

/* Frequency Select */
typedef enum FUSE_FREQSEL_enum
{
    FUSE_FREQSEL_16MHZ_gc = (0x01), /* 16 MHz */
    FUSE_FREQSEL_20MHZ_gc = (0x02), /* 20 MHz */
} FUSE_FREQSEL_t;

/* Oscillator Lock */
typedef enum FUSE_OSCLOCK_enum
{
    FUSE_OSCLOCK_CLEAR_gc = (0x00), /* Oscillator Lock - CLEAR */
    FUSE_OSCLOCK_SET_gc   = (0x80), /* Oscillator Lock - SET */
} FUSE_OSCLOCK_t;

/* CRC Source */
typedef enum FUSE_CRCSRC_enum
{
    FUSE_CRCSRC_FLASH_gc   = (0x00<<6), /* The CRC is performed on the entire Flash (boot, application code and application data section). */
    FUSE_CRCSRC_BOOT_gc    = (0x01<<6), /* The CRC is performed on the boot section of Flash */
    FUSE_CRCSRC_BOOTAPP_gc = (0x02<<6), /* The CRC is performed on the boot and application code section of Flash */
    FUSE_CRCSRC_NOCRC_gc   = (0x03<<6), /* Disable CRC. */
} FUSE_CRCSRC_t;

/* EEPROM Save */
typedef enum FUSE_EESAVE_enum
{
    FUSE_EESAVE_CLEAR_gc = (0x00), /* EEPROM Save - CLEAR */
    FUSE_EESAVE_SET_gc   = (0x01), /* EEPROM Save - SET */
} FUSE_EESAVE_t;

/* Reset Pin Configuration */
typedef enum FUSE_RSTPINCFG_enum
{
    FUSE_RSTPINCFG_GPIO_gc = (0x00<<3), /* GPIO mode */
    FUSE_RSTPINCFG_RST_gc  = (0x01<<3), /* Reset mode */
} FUSE_RSTPINCFG_t;

/* Startup Time */
typedef enum FUSE_SUT_enum
{
    FUSE_SUT_0MS_gc  = (0x00), /* 0 ms */
    FUSE_SUT_1MS_gc  = (0x01), /* 1 ms */
    FUSE_SUT_2MS_gc  = (0x02), /* 2 ms */
    FUSE_SUT_4MS_gc  = (0x03), /* 4 ms */
    FUSE_SUT_8MS_gc  = (0x04), /* 8 ms */
    FUSE_SUT_16MS_gc = (0x05), /* 16 ms */
    FUSE_SUT_32MS_gc = (0x06), /* 32 ms */
    FUSE_SUT_64MS_gc = (0x07), /* 64 ms */
} FUSE_SUT_t;

/* Watchdog Timeout Period */
typedef enum FUSE_PERIOD_enum
{
    FUSE_PERIOD_OFF_gc    = (0x00), /* Off */
    FUSE_PERIOD_8CLK_gc   = (0x01), /* 8 cycles (8ms) */
    FUSE_PERIOD_16CLK_gc  = (0x02), /* 16 cycles (16ms) */
    FUSE_PERIOD_32CLK_gc  = (0x03), /* 32 cycles (32ms) */
    FUSE_PERIOD_64CLK_gc  = (0x04), /* 64 cycles (64ms) */
    FUSE_PERIOD_128CLK_gc = (0x05), /* 128 cycles (0.128s) */
    FUSE_PERIOD_256CLK_gc = (0x06), /* 256 cycles (0.256s) */
    FUSE_PERIOD_512CLK_gc = (0x07), /* 512 cycles (0.512s) */
    FUSE_PERIOD_1KCLK_gc  = (0x08), /* 1K cycles (1.0s) */
    FUSE_PERIOD_2KCLK_gc  = (0x09), /* 2K cycles (2.0s) */
    FUSE_PERIOD_4KCLK_gc  = (0x0A), /* 4K cycles (4.1s) */
    FUSE_PERIOD_8KCLK_gc  = (0x0B), /* 8K cycles (8.2s) */
} FUSE_PERIOD_t;

/* Watchdog Window Timeout Period */
typedef enum FUSE_WINDOW_enum
{
    FUSE_WINDOW_OFF_gc    = (0x00<<4), /* Off */
    FUSE_WINDOW_8CLK_gc   = (0x01<<4), /* 8 cycles (8ms) */
    FUSE_WINDOW_16CLK_gc  = (0x02<<4), /* 16 cycles (16ms) */
    FUSE_WINDOW_32CLK_gc  = (0x03<<4), /* 32 cycles (32ms) */
    FUSE_WINDOW_64CLK_gc  = (0x04<<4), /* 64 cycles (64ms) */
    FUSE_WINDOW_128CLK_gc = (0x05<<4), /* 128 cycles (0.128s) */
    FUSE_WINDOW_256CLK_gc = (0x06<<4), /* 256 cycles (0.256s) */
    FUSE_WINDOW_512CLK_gc = (0x07<<4), /* 512 cycles (0.512s) */
    FUSE_WINDOW_1KCLK_gc  = (0x08<<4), /* 1K cycles (1.0s) */
    FUSE_WINDOW_2KCLK_gc  = (0x09<<4), /* 2K cycles (2.0s) */
    FUSE_WINDOW_4KCLK_gc  = (0x0A<<4), /* 4K cycles (4.1s) */
    FUSE_WINDOW_8KCLK_gc  = (0x0B<<4), /* 8K cycles (8.2s) */
} FUSE_WINDOW_t;

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
LOCKBIT - Lockbit
--------------------------------------------------------------------------------
*/

typedef struct LOCKBIT_struct
{
    register8_t LOCKBIT; /* Lock Bits */
} LOCKBIT_t;


/* Lock Bits */
typedef enum LOCKBIT_LB_enum
{
    LOCKBIT_LB_RWLOCK_gc = (0x3A), /* Read and write lock */
    LOCKBIT_LB_NOLOCK_gc = (0xC5), /* No locks */
} LOCKBIT_LB_t;

/*
--------------------------------------------------------------------------------
NVMCTRL - Non-volatile Memory Controller
--------------------------------------------------------------------------------
*/

typedef struct NVMCTRL_struct
{
    register8_t CTRLA;    /* Control A */
    register8_t CTRLB;    /* Control B */
    register8_t STATUS;   /* Status */
    register8_t INTCTRL;  /* Interrupt Control */
    register8_t INTFLAGS; /* Interrupt Flags */
    register8_t rsv_0x05; /* RESERVED REGISTER */
    _REGISTER16 (DATA);   /* Data */
    register8_t rsv_0x07; /* RESERVED REGISTER */
    _REGISTER16 (ADDR);   /* Address */
} NVMCTRL_t;


/* Command */
typedef enum NVMCTRL_CMD_enum
{
    NVMCTRL_CMD_NONE_gc           = (0x00), /* No Command */
    NVMCTRL_CMD_PAGEWRITE_gc      = (0x01), /* Write page */
    NVMCTRL_CMD_PAGEERASE_gc      = (0x02), /* Erase page */
    NVMCTRL_CMD_PAGEERASEWRITE_gc = (0x03), /* Erase and write page */
    NVMCTRL_CMD_PAGEBUFCLR_gc     = (0x04), /* Page buffer clear */
    NVMCTRL_CMD_CHIPERASE_gc      = (0x05), /* Chip erase */
    NVMCTRL_CMD_EEERASE_gc        = (0x06), /* EEPROM erase */
    NVMCTRL_CMD_FUSEWRITE_gc      = (0x07), /* Write fuse (PDI only) */
} NVMCTRL_CMD_t;

/* Application code write protect */
typedef enum NVMCTRL_APCWP_enum
{
    NVMCTRL_APCWP_CLEAR_gc = (0x00), /* Application code write protect - CLEAR */
    NVMCTRL_APCWP_SET_gc   = (0x01), /* Application code write protect - SET */
} NVMCTRL_APCWP_t;

/* Boot Lock */
typedef enum NVMCTRL_BOOTLOCK_enum
{
    NVMCTRL_BOOTLOCK_CLEAR_gc = (0x00), /* Boot Lock - CLEAR */
    NVMCTRL_BOOTLOCK_SET_gc   = (0x02), /* Boot Lock - SET */
} NVMCTRL_BOOTLOCK_t;

/* EEPROM Ready */
typedef enum NVMCTRL_EEREADY_enum
{
    NVMCTRL_EEREADY_CLEAR_gc = (0x00), /* EEPROM Ready - CLEAR */
    NVMCTRL_EEREADY_SET_gc   = (0x01), /* EEPROM Ready - SET */
} NVMCTRL_EEREADY_t;

/* EEPROM Ready */
typedef enum NVMCTRL_EEREADY_enum
{
    NVMCTRL_EEREADY_CLEAR_gc = (0x00), /* EEPROM Ready - CLEAR */
    NVMCTRL_EEREADY_SET_gc   = (0x01), /* EEPROM Ready - SET */
} NVMCTRL_EEREADY_t;

/* EEPROM busy */
typedef enum NVMCTRL_EEBUSY_enum
{
    NVMCTRL_EEBUSY_CLEAR_gc = (0x00), /* EEPROM busy - CLEAR */
    NVMCTRL_EEBUSY_SET_gc   = (0x02), /* EEPROM busy - SET */
} NVMCTRL_EEBUSY_t;

/* Flash busy */
typedef enum NVMCTRL_FBUSY_enum
{
    NVMCTRL_FBUSY_CLEAR_gc = (0x00), /* Flash busy - CLEAR */
    NVMCTRL_FBUSY_SET_gc   = (0x01), /* Flash busy - SET */
} NVMCTRL_FBUSY_t;

/* Write error */
typedef enum NVMCTRL_WRERROR_enum
{
    NVMCTRL_WRERROR_CLEAR_gc = (0x00), /* Write error - CLEAR */
    NVMCTRL_WRERROR_SET_gc   = (0x04), /* Write error - SET */
} NVMCTRL_WRERROR_t;

/*
--------------------------------------------------------------------------------
PORT - I/O Ports
--------------------------------------------------------------------------------
*/

typedef struct PORT_struct
{
    register8_t DIR;         /* Data Direction */
    register8_t DIRSET;      /* Data Direction Set */
    register8_t DIRCLR;      /* Data Direction Clear */
    register8_t DIRTGL;      /* Data Direction Toggle */
    register8_t OUT;         /* Output Value */
    register8_t OUTSET;      /* Output Value Set */
    register8_t OUTCLR;      /* Output Value Clear */
    register8_t OUTTGL;      /* Output Value Toggle */
    register8_t IN;          /* Input Value */
    register8_t INTFLAGS;    /* Interrupt Flags */
    register8_t PORTCTRL;    /* Port Control */
    register8_t rsv_0x0B[5]; /* RESERVED REGISTER BLOCK */
    register8_t PIN0CTRL;    /* Pin 0 Control */
    register8_t PIN1CTRL;    /* Pin 1 Control */
    register8_t PIN2CTRL;    /* Pin 2 Control */
    register8_t PIN3CTRL;    /* Pin 3 Control */
    register8_t PIN4CTRL;    /* Pin 4 Control */
    register8_t PIN5CTRL;    /* Pin 5 Control */
    register8_t PIN6CTRL;    /* Pin 6 Control */
    register8_t PIN7CTRL;    /* Pin 7 Control */
} PORT_t;


/* Inverted I/O Enable */
typedef enum PORT_INVEN_enum
{
    PORT_INVEN_CLEAR_gc = (0x00), /* Inverted I/O Enable - CLEAR */
    PORT_INVEN_SET_gc   = (0x80), /* Inverted I/O Enable - SET */
} PORT_INVEN_t;

/* Input/Sense Configuration */
typedef enum PORT_ISC_enum
{
    PORT_ISC_INTDISABLE_gc    = (0x00), /* Interrupt disabled but input buffer enabled */
    PORT_ISC_BOTHEDGES_gc     = (0x01), /* Sense Both Edges */
    PORT_ISC_RISING_gc        = (0x02), /* Sense Rising Edge */
    PORT_ISC_FALLING_gc       = (0x03), /* Sense Falling Edge */
    PORT_ISC_INPUT_DISABLE_gc = (0x04), /* Digital Input Buffer disabled */
    PORT_ISC_LEVEL_gc         = (0x05), /* Sense low Level */
} PORT_ISC_t;

/* Pullup enable */
typedef enum PORT_PULLUPEN_enum
{
    PORT_PULLUPEN_CLEAR_gc = (0x00), /* Pullup enable - CLEAR */
    PORT_PULLUPEN_SET_gc   = (0x08), /* Pullup enable - SET */
} PORT_PULLUPEN_t;

/* Inverted I/O Enable */
typedef enum PORT_INVEN_enum
{
    PORT_INVEN_CLEAR_gc = (0x00), /* Inverted I/O Enable - CLEAR */
    PORT_INVEN_SET_gc   = (0x80), /* Inverted I/O Enable - SET */
} PORT_INVEN_t;

/* Input/Sense Configuration */
typedef enum PORT_ISC_enum
{
    PORT_ISC_INTDISABLE_gc    = (0x00), /* Interrupt disabled but input buffer enabled */
    PORT_ISC_BOTHEDGES_gc     = (0x01), /* Sense Both Edges */
    PORT_ISC_RISING_gc        = (0x02), /* Sense Rising Edge */
    PORT_ISC_FALLING_gc       = (0x03), /* Sense Falling Edge */
    PORT_ISC_INPUT_DISABLE_gc = (0x04), /* Digital Input Buffer disabled */
    PORT_ISC_LEVEL_gc         = (0x05), /* Sense low Level */
} PORT_ISC_t;

/* Pullup enable */
typedef enum PORT_PULLUPEN_enum
{
    PORT_PULLUPEN_CLEAR_gc = (0x00), /* Pullup enable - CLEAR */
    PORT_PULLUPEN_SET_gc   = (0x08), /* Pullup enable - SET */
} PORT_PULLUPEN_t;

/* Inverted I/O Enable */
typedef enum PORT_INVEN_enum
{
    PORT_INVEN_CLEAR_gc = (0x00), /* Inverted I/O Enable - CLEAR */
    PORT_INVEN_SET_gc   = (0x80), /* Inverted I/O Enable - SET */
} PORT_INVEN_t;

/* Input/Sense Configuration */
typedef enum PORT_ISC_enum
{
    PORT_ISC_INTDISABLE_gc    = (0x00), /* Interrupt disabled but input buffer enabled */
    PORT_ISC_BOTHEDGES_gc     = (0x01), /* Sense Both Edges */
    PORT_ISC_RISING_gc        = (0x02), /* Sense Rising Edge */
    PORT_ISC_FALLING_gc       = (0x03), /* Sense Falling Edge */
    PORT_ISC_INPUT_DISABLE_gc = (0x04), /* Digital Input Buffer disabled */
    PORT_ISC_LEVEL_gc         = (0x05), /* Sense low Level */
} PORT_ISC_t;

/* Pullup enable */
typedef enum PORT_PULLUPEN_enum
{
    PORT_PULLUPEN_CLEAR_gc = (0x00), /* Pullup enable - CLEAR */
    PORT_PULLUPEN_SET_gc   = (0x08), /* Pullup enable - SET */
} PORT_PULLUPEN_t;

/* Inverted I/O Enable */
typedef enum PORT_INVEN_enum
{
    PORT_INVEN_CLEAR_gc = (0x00), /* Inverted I/O Enable - CLEAR */
    PORT_INVEN_SET_gc   = (0x80), /* Inverted I/O Enable - SET */
} PORT_INVEN_t;

/* Input/Sense Configuration */
typedef enum PORT_ISC_enum
{
    PORT_ISC_INTDISABLE_gc    = (0x00), /* Interrupt disabled but input buffer enabled */
    PORT_ISC_BOTHEDGES_gc     = (0x01), /* Sense Both Edges */
    PORT_ISC_RISING_gc        = (0x02), /* Sense Rising Edge */
    PORT_ISC_FALLING_gc       = (0x03), /* Sense Falling Edge */
    PORT_ISC_INPUT_DISABLE_gc = (0x04), /* Digital Input Buffer disabled */
    PORT_ISC_LEVEL_gc         = (0x05), /* Sense low Level */
} PORT_ISC_t;

/* Pullup enable */
typedef enum PORT_PULLUPEN_enum
{
    PORT_PULLUPEN_CLEAR_gc = (0x00), /* Pullup enable - CLEAR */
    PORT_PULLUPEN_SET_gc   = (0x08), /* Pullup enable - SET */
} PORT_PULLUPEN_t;

/* Inverted I/O Enable */
typedef enum PORT_INVEN_enum
{
    PORT_INVEN_CLEAR_gc = (0x00), /* Inverted I/O Enable - CLEAR */
    PORT_INVEN_SET_gc   = (0x80), /* Inverted I/O Enable - SET */
} PORT_INVEN_t;

/* Input/Sense Configuration */
typedef enum PORT_ISC_enum
{
    PORT_ISC_INTDISABLE_gc    = (0x00), /* Interrupt disabled but input buffer enabled */
    PORT_ISC_BOTHEDGES_gc     = (0x01), /* Sense Both Edges */
    PORT_ISC_RISING_gc        = (0x02), /* Sense Rising Edge */
    PORT_ISC_FALLING_gc       = (0x03), /* Sense Falling Edge */
    PORT_ISC_INPUT_DISABLE_gc = (0x04), /* Digital Input Buffer disabled */
    PORT_ISC_LEVEL_gc         = (0x05), /* Sense low Level */
} PORT_ISC_t;

/* Pullup enable */
typedef enum PORT_PULLUPEN_enum
{
    PORT_PULLUPEN_CLEAR_gc = (0x00), /* Pullup enable - CLEAR */
    PORT_PULLUPEN_SET_gc   = (0x08), /* Pullup enable - SET */
} PORT_PULLUPEN_t;

/* Inverted I/O Enable */
typedef enum PORT_INVEN_enum
{
    PORT_INVEN_CLEAR_gc = (0x00), /* Inverted I/O Enable - CLEAR */
    PORT_INVEN_SET_gc   = (0x80), /* Inverted I/O Enable - SET */
} PORT_INVEN_t;

/* Input/Sense Configuration */
typedef enum PORT_ISC_enum
{
    PORT_ISC_INTDISABLE_gc    = (0x00), /* Interrupt disabled but input buffer enabled */
    PORT_ISC_BOTHEDGES_gc     = (0x01), /* Sense Both Edges */
    PORT_ISC_RISING_gc        = (0x02), /* Sense Rising Edge */
    PORT_ISC_FALLING_gc       = (0x03), /* Sense Falling Edge */
    PORT_ISC_INPUT_DISABLE_gc = (0x04), /* Digital Input Buffer disabled */
    PORT_ISC_LEVEL_gc         = (0x05), /* Sense low Level */
} PORT_ISC_t;

/* Pullup enable */
typedef enum PORT_PULLUPEN_enum
{
    PORT_PULLUPEN_CLEAR_gc = (0x00), /* Pullup enable - CLEAR */
    PORT_PULLUPEN_SET_gc   = (0x08), /* Pullup enable - SET */
} PORT_PULLUPEN_t;

/* Inverted I/O Enable */
typedef enum PORT_INVEN_enum
{
    PORT_INVEN_CLEAR_gc = (0x00), /* Inverted I/O Enable - CLEAR */
    PORT_INVEN_SET_gc   = (0x80), /* Inverted I/O Enable - SET */
} PORT_INVEN_t;

/* Input/Sense Configuration */
typedef enum PORT_ISC_enum
{
    PORT_ISC_INTDISABLE_gc    = (0x00), /* Interrupt disabled but input buffer enabled */
    PORT_ISC_BOTHEDGES_gc     = (0x01), /* Sense Both Edges */
    PORT_ISC_RISING_gc        = (0x02), /* Sense Rising Edge */
    PORT_ISC_FALLING_gc       = (0x03), /* Sense Falling Edge */
    PORT_ISC_INPUT_DISABLE_gc = (0x04), /* Digital Input Buffer disabled */
    PORT_ISC_LEVEL_gc         = (0x05), /* Sense low Level */
} PORT_ISC_t;

/* Pullup enable */
typedef enum PORT_PULLUPEN_enum
{
    PORT_PULLUPEN_CLEAR_gc = (0x00), /* Pullup enable - CLEAR */
    PORT_PULLUPEN_SET_gc   = (0x08), /* Pullup enable - SET */
} PORT_PULLUPEN_t;

/* Inverted I/O Enable */
typedef enum PORT_INVEN_enum
{
    PORT_INVEN_CLEAR_gc = (0x00), /* Inverted I/O Enable - CLEAR */
    PORT_INVEN_SET_gc   = (0x80), /* Inverted I/O Enable - SET */
} PORT_INVEN_t;

/* Input/Sense Configuration */
typedef enum PORT_ISC_enum
{
    PORT_ISC_INTDISABLE_gc    = (0x00), /* Interrupt disabled but input buffer enabled */
    PORT_ISC_BOTHEDGES_gc     = (0x01), /* Sense Both Edges */
    PORT_ISC_RISING_gc        = (0x02), /* Sense Rising Edge */
    PORT_ISC_FALLING_gc       = (0x03), /* Sense Falling Edge */
    PORT_ISC_INPUT_DISABLE_gc = (0x04), /* Digital Input Buffer disabled */
    PORT_ISC_LEVEL_gc         = (0x05), /* Sense low Level */
} PORT_ISC_t;

/* Pullup enable */
typedef enum PORT_PULLUPEN_enum
{
    PORT_PULLUPEN_CLEAR_gc = (0x00), /* Pullup enable - CLEAR */
    PORT_PULLUPEN_SET_gc   = (0x08), /* Pullup enable - SET */
} PORT_PULLUPEN_t;

/* Slew Rate Limit Enable */
typedef enum PORT_SRL_enum
{
    PORT_SRL_CLEAR_gc = (0x00), /* Slew Rate Limit Enable - CLEAR */
    PORT_SRL_SET_gc   = (0x01), /* Slew Rate Limit Enable - SET */
} PORT_SRL_t;

/*
--------------------------------------------------------------------------------
PORTMUX - Port Multiplexer
--------------------------------------------------------------------------------
*/

typedef struct PORTMUX_struct
{
    register8_t EVSYSROUTEA;  /* Port Multiplexer EVSYS */
    register8_t CCLROUTEA;    /* Port Multiplexer CCL */
    register8_t USARTROUTEA;  /* Port Multiplexer USART register A */
    register8_t TWISPIROUTEA; /* Port Multiplexer TWI and SPI */
    register8_t TCAROUTEA;    /* Port Multiplexer TCA */
    register8_t TCBROUTEA;    /* Port Multiplexer TCB */
} PORTMUX_t;


/* CCL LUT0 */
typedef enum PORTMUX_LUT0_enum
{
    PORTMUX_LUT0_CLEAR_gc = (0x00), /* CCL LUT0 - CLEAR */
    PORTMUX_LUT0_SET_gc   = (0x01), /* CCL LUT0 - SET */
} PORTMUX_LUT0_t;

/* CCL LUT1 */
typedef enum PORTMUX_LUT1_enum
{
    PORTMUX_LUT1_CLEAR_gc = (0x00), /* CCL LUT1 - CLEAR */
    PORTMUX_LUT1_SET_gc   = (0x02), /* CCL LUT1 - SET */
} PORTMUX_LUT1_t;

/* CCL LUT2 */
typedef enum PORTMUX_LUT2_enum
{
    PORTMUX_LUT2_CLEAR_gc = (0x00), /* CCL LUT2 - CLEAR */
    PORTMUX_LUT2_SET_gc   = (0x04), /* CCL LUT2 - SET */
} PORTMUX_LUT2_t;

/* CCL LUT3 */
typedef enum PORTMUX_LUT3_enum
{
    PORTMUX_LUT3_CLEAR_gc = (0x00), /* CCL LUT3 - CLEAR */
    PORTMUX_LUT3_SET_gc   = (0x08), /* CCL LUT3 - SET */
} PORTMUX_LUT3_t;

/* Event Output 0 */
typedef enum PORTMUX_EVOUT0_enum
{
    PORTMUX_EVOUT0_CLEAR_gc = (0x00), /* Event Output 0 - CLEAR */
    PORTMUX_EVOUT0_SET_gc   = (0x01), /* Event Output 0 - SET */
} PORTMUX_EVOUT0_t;

/* Event Output 1 */
typedef enum PORTMUX_EVOUT1_enum
{
    PORTMUX_EVOUT1_CLEAR_gc = (0x00), /* Event Output 1 - CLEAR */
    PORTMUX_EVOUT1_SET_gc   = (0x02), /* Event Output 1 - SET */
} PORTMUX_EVOUT1_t;

/* Event Output 2 */
typedef enum PORTMUX_EVOUT2_enum
{
    PORTMUX_EVOUT2_CLEAR_gc = (0x00), /* Event Output 2 - CLEAR */
    PORTMUX_EVOUT2_SET_gc   = (0x04), /* Event Output 2 - SET */
} PORTMUX_EVOUT2_t;

/* Event Output 3 */
typedef enum PORTMUX_EVOUT3_enum
{
    PORTMUX_EVOUT3_CLEAR_gc = (0x00), /* Event Output 3 - CLEAR */
    PORTMUX_EVOUT3_SET_gc   = (0x08), /* Event Output 3 - SET */
} PORTMUX_EVOUT3_t;

/* Event Output 4 */
typedef enum PORTMUX_EVOUT4_enum
{
    PORTMUX_EVOUT4_CLEAR_gc = (0x00), /* Event Output 4 - CLEAR */
    PORTMUX_EVOUT4_SET_gc   = (0x10), /* Event Output 4 - SET */
} PORTMUX_EVOUT4_t;

/* Event Output 5 */
typedef enum PORTMUX_EVOUT5_enum
{
    PORTMUX_EVOUT5_CLEAR_gc = (0x00), /* Event Output 5 - CLEAR */
    PORTMUX_EVOUT5_SET_gc   = (0x20), /* Event Output 5 - SET */
} PORTMUX_EVOUT5_t;

/* Port Multiplexer TCA0 */
typedef enum PORTMUX_TCA0_enum
{
    PORTMUX_TCA0_PORTA_gc = (0x00), /* TCA0 pins on PA[5:0] */
    PORTMUX_TCA0_PORTB_gc = (0x01), /* TCA0 pins on PB[5:0] */
    PORTMUX_TCA0_PORTC_gc = (0x02), /* TCA0 pins on PC[5:0] */
    PORTMUX_TCA0_PORTD_gc = (0x03), /* TCA0 pins on PD[5:0] */
    PORTMUX_TCA0_PORTE_gc = (0x04), /* TCA0 pins on PE[5:0] */
    PORTMUX_TCA0_PORTF_gc = (0x05), /* TCA0 pins on PF[5:0] */
} PORTMUX_TCA0_t;

/* Port Multiplexer TCB0 */
typedef enum PORTMUX_TCB0_enum
{
    PORTMUX_TCB0_CLEAR_gc = (0x00), /* Port Multiplexer TCB0 - CLEAR */
    PORTMUX_TCB0_SET_gc   = (0x01), /* Port Multiplexer TCB0 - SET */
} PORTMUX_TCB0_t;

/* Port Multiplexer TCB1 */
typedef enum PORTMUX_TCB1_enum
{
    PORTMUX_TCB1_CLEAR_gc = (0x00), /* Port Multiplexer TCB1 - CLEAR */
    PORTMUX_TCB1_SET_gc   = (0x02), /* Port Multiplexer TCB1 - SET */
} PORTMUX_TCB1_t;

/* Port Multiplexer TCB2 */
typedef enum PORTMUX_TCB2_enum
{
    PORTMUX_TCB2_CLEAR_gc = (0x00), /* Port Multiplexer TCB2 - CLEAR */
    PORTMUX_TCB2_SET_gc   = (0x04), /* Port Multiplexer TCB2 - SET */
} PORTMUX_TCB2_t;

/* Port Multiplexer TCB3 */
typedef enum PORTMUX_TCB3_enum
{
    PORTMUX_TCB3_CLEAR_gc = (0x00), /* Port Multiplexer TCB3 - CLEAR */
    PORTMUX_TCB3_SET_gc   = (0x08), /* Port Multiplexer TCB3 - SET */
} PORTMUX_TCB3_t;

/* Port Multiplexer SPI0 */
typedef enum PORTMUX_SPI0_enum
{
    PORTMUX_SPI0_DEFAULT_gc = (0x00), /* SPI0 on PA[7:4] */
    PORTMUX_SPI0_ALT1_gc    = (0x01), /* SPI0 on PC[3:0] */
    PORTMUX_SPI0_ALT2_gc    = (0x02), /* SPI0 on PE[3:0] */
    PORTMUX_SPI0_NONE_gc    = (0x03), /* Not connected to any pins */
} PORTMUX_SPI0_t;

/* Port Multiplexer TWI0 */
typedef enum PORTMUX_TWI0_enum
{
    PORTMUX_TWI0_DEFAULT_gc = (0x00<<4), /* SCL/SDA on PA[3:2], Slave mode on PC[3:2] in dual TWI mode */
    PORTMUX_TWI0_ALT1_gc    = (0x01<<4), /* SCL/SDA on PA[3:2], Slave mode on PF[3:2] in dual TWI mode */
    PORTMUX_TWI0_ALT2_gc    = (0x02<<4), /* SCL/SDA on PC[3:2], Slave mode on PF[3:2] in dual TWI mode */
    PORTMUX_TWI0_NONE_gc    = (0x03<<4), /* Not connected to any pins */
} PORTMUX_TWI0_t;

/* Port Multiplexer USART0 */
typedef enum PORTMUX_USART0_enum
{
    PORTMUX_USART0_DEFAULT_gc = (0x00), /* USART0 on PA[3:0] */
    PORTMUX_USART0_ALT1_gc    = (0x01), /* USART0 on PA[7:4] */
    PORTMUX_USART0_NONE_gc    = (0x03), /* Not connected to any pins */
} PORTMUX_USART0_t;

/* Port Multiplexer USART1 */
typedef enum PORTMUX_USART1_enum
{
    PORTMUX_USART1_DEFAULT_gc = (0x00<<2), /* USART1 on PC[3:0] */
    PORTMUX_USART1_ALT1_gc    = (0x01<<2), /* USART1 on PC[7:4] */
    PORTMUX_USART1_NONE_gc    = (0x03<<2), /* Not connected to any pins */
} PORTMUX_USART1_t;

/* Port Multiplexer USART2 */
typedef enum PORTMUX_USART2_enum
{
    PORTMUX_USART2_DEFAULT_gc = (0x00<<4), /* USART2 on PF[3:0] */
    PORTMUX_USART2_ALT1_gc    = (0x01<<4), /* USART2 on PF[6:4] */
    PORTMUX_USART2_NONE_gc    = (0x03<<4), /* Not connected to any pins */
} PORTMUX_USART2_t;

/* Port Multiplexer USART3 */
typedef enum PORTMUX_USART3_enum
{
    PORTMUX_USART3_DEFAULT_gc = (0x00<<6), /* USART3 on PB[3:0] */
    PORTMUX_USART3_ALT1_gc    = (0x01<<6), /* USART3 on PB[5:4] */
    PORTMUX_USART3_NONE_gc    = (0x03<<6), /* Not connected to any pins */
} PORTMUX_USART3_t;

/*
--------------------------------------------------------------------------------
RSTCTRL - Reset controller
--------------------------------------------------------------------------------
*/

typedef struct RSTCTRL_struct
{
    register8_t RSTFR; /* Reset Flags */
    register8_t SWRR;  /* Software Reset */
} RSTCTRL_t;


/* Brown out detector Reset flag */
typedef enum RSTCTRL_BORF_enum
{
    RSTCTRL_BORF_CLEAR_gc = (0x00), /* Brown out detector Reset flag - CLEAR */
    RSTCTRL_BORF_SET_gc   = (0x02), /* Brown out detector Reset flag - SET */
} RSTCTRL_BORF_t;

/* External Reset flag */
typedef enum RSTCTRL_EXTRF_enum
{
    RSTCTRL_EXTRF_CLEAR_gc = (0x00), /* External Reset flag - CLEAR */
    RSTCTRL_EXTRF_SET_gc   = (0x04), /* External Reset flag - SET */
} RSTCTRL_EXTRF_t;

/* Power on Reset flag */
typedef enum RSTCTRL_PORF_enum
{
    RSTCTRL_PORF_CLEAR_gc = (0x00), /* Power on Reset flag - CLEAR */
    RSTCTRL_PORF_SET_gc   = (0x01), /* Power on Reset flag - SET */
} RSTCTRL_PORF_t;

/* Software Reset flag */
typedef enum RSTCTRL_SWRF_enum
{
    RSTCTRL_SWRF_CLEAR_gc = (0x00), /* Software Reset flag - CLEAR */
    RSTCTRL_SWRF_SET_gc   = (0x10), /* Software Reset flag - SET */
} RSTCTRL_SWRF_t;

/* UPDI Reset flag */
typedef enum RSTCTRL_UPDIRF_enum
{
    RSTCTRL_UPDIRF_CLEAR_gc = (0x00), /* UPDI Reset flag - CLEAR */
    RSTCTRL_UPDIRF_SET_gc   = (0x20), /* UPDI Reset flag - SET */
} RSTCTRL_UPDIRF_t;

/* Watch dog Reset flag */
typedef enum RSTCTRL_WDRF_enum
{
    RSTCTRL_WDRF_CLEAR_gc = (0x00), /* Watch dog Reset flag - CLEAR */
    RSTCTRL_WDRF_SET_gc   = (0x08), /* Watch dog Reset flag - SET */
} RSTCTRL_WDRF_t;

/* Software reset enable */
typedef enum RSTCTRL_SWRE_enum
{
    RSTCTRL_SWRE_CLEAR_gc = (0x00), /* Software reset enable - CLEAR */
    RSTCTRL_SWRE_SET_gc   = (0x01), /* Software reset enable - SET */
} RSTCTRL_SWRE_t;

/*
--------------------------------------------------------------------------------
RTC - Real-Time Counter
--------------------------------------------------------------------------------
*/

typedef struct RTC_struct
{
    register8_t CTRLA;       /* Control A */
    register8_t STATUS;      /* Status */
    register8_t INTCTRL;     /* Interrupt Control */
    register8_t INTFLAGS;    /* Interrupt Flags */
    register8_t TEMP;        /* Temporary */
    register8_t DBGCTRL;     /* Debug control */
    register8_t CALIB;       /* Calibration */
    register8_t CLKSEL;      /* Clock Select */
    _REGISTER16 (CNT);       /* Counter */
    register8_t rsv_0x09;    /* RESERVED REGISTER */
    _REGISTER16 (PER);       /* Period */
    register8_t rsv_0x0B;    /* RESERVED REGISTER */
    _REGISTER16 (CMP);       /* Compare */
    register8_t rsv_0x0D[3]; /* RESERVED REGISTER BLOCK */
    register8_t PITCTRLA;    /* PIT Control A */
    register8_t PITSTATUS;   /* PIT Status */
    register8_t PITINTCTRL;  /* PIT Interrupt Control */
    register8_t PITINTFLAGS; /* PIT Interrupt Flags */
    register8_t rsv_0x14;    /* RESERVED REGISTER */
    register8_t PITDBGCTRL;  /* PIT Debug control */
} RTC_t;


/* Error Correction Value */
#define RTC_CALIB_ERROR_gc(x) (x & 0x7F)

/* Error Correction Sign Bit */
typedef enum RTC_SIGN_enum
{
    RTC_SIGN_CLEAR_gc = (0x00), /* Error Correction Sign Bit - CLEAR */
    RTC_SIGN_SET_gc   = (0x80), /* Error Correction Sign Bit - SET */
} RTC_SIGN_t;

/* Clock Select */
typedef enum RTC_CLKSEL_enum
{
    RTC_CLKSEL_INT32K_gc  = (0x00), /* Internal 32kHz OSC */
    RTC_CLKSEL_INT1K_gc   = (0x01), /* Internal 1kHz OSC */
    RTC_CLKSEL_TOSC32K_gc = (0x02), /* 32KHz Crystal OSC */
    RTC_CLKSEL_EXTCLK_gc  = (0x03), /* External Clock */
} RTC_CLKSEL_t;

/* Correction enable */
typedef enum RTC_CORREN_enum
{
    RTC_CORREN_CLEAR_gc = (0x00), /* Correction enable - CLEAR */
    RTC_CORREN_SET_gc   = (0x04), /* Correction enable - SET */
} RTC_CORREN_t;

/* Prescaling Factor */
typedef enum RTC_PRESCALER_enum
{
    RTC_PRESCALER_DIV1_gc     = (0x00<<3), /* RTC Clock / 1 */
    RTC_PRESCALER_DIV2_gc     = (0x01<<3), /* RTC Clock / 2 */
    RTC_PRESCALER_DIV4_gc     = (0x02<<3), /* RTC Clock / 4 */
    RTC_PRESCALER_DIV8_gc     = (0x03<<3), /* RTC Clock / 8 */
    RTC_PRESCALER_DIV16_gc    = (0x04<<3), /* RTC Clock / 16 */
    RTC_PRESCALER_DIV32_gc    = (0x05<<3), /* RTC Clock / 32 */
    RTC_PRESCALER_DIV64_gc    = (0x06<<3), /* RTC Clock / 64 */
    RTC_PRESCALER_DIV128_gc   = (0x07<<3), /* RTC Clock / 128 */
    RTC_PRESCALER_DIV256_gc   = (0x08<<3), /* RTC Clock / 256 */
    RTC_PRESCALER_DIV512_gc   = (0x09<<3), /* RTC Clock / 512 */
    RTC_PRESCALER_DIV1024_gc  = (0x0A<<3), /* RTC Clock / 1024 */
    RTC_PRESCALER_DIV2048_gc  = (0x0B<<3), /* RTC Clock / 2048 */
    RTC_PRESCALER_DIV4096_gc  = (0x0C<<3), /* RTC Clock / 4096 */
    RTC_PRESCALER_DIV8192_gc  = (0x0D<<3), /* RTC Clock / 8192 */
    RTC_PRESCALER_DIV16384_gc = (0x0E<<3), /* RTC Clock / 16384 */
    RTC_PRESCALER_DIV32768_gc = (0x0F<<3), /* RTC Clock / 32768 */
} RTC_PRESCALER_t;

/* Enable */
typedef enum RTC_RTCEN_enum
{
    RTC_RTCEN_CLEAR_gc = (0x00), /* Enable - CLEAR */
    RTC_RTCEN_SET_gc   = (0x01), /* Enable - SET */
} RTC_RTCEN_t;

/* Run In Standby */
typedef enum RTC_RUNSTDBY_enum
{
    RTC_RUNSTDBY_CLEAR_gc = (0x00), /* Run In Standby - CLEAR */
    RTC_RUNSTDBY_SET_gc   = (0x80), /* Run In Standby - SET */
} RTC_RUNSTDBY_t;

/* Run in debug */
typedef enum RTC_DBGRUN_enum
{
    RTC_DBGRUN_CLEAR_gc = (0x00), /* Run in debug - CLEAR */
    RTC_DBGRUN_SET_gc   = (0x01), /* Run in debug - SET */
} RTC_DBGRUN_t;

/* Compare Match Interrupt enable */
typedef enum RTC_CMP_enum
{
    RTC_CMP_CLEAR_gc = (0x00), /* Compare Match Interrupt enable - CLEAR */
    RTC_CMP_SET_gc   = (0x02), /* Compare Match Interrupt enable - SET */
} RTC_CMP_t;

/* Overflow Interrupt enable */
typedef enum RTC_OVF_enum
{
    RTC_OVF_CLEAR_gc = (0x00), /* Overflow Interrupt enable - CLEAR */
    RTC_OVF_SET_gc   = (0x01), /* Overflow Interrupt enable - SET */
} RTC_OVF_t;

/* Compare Match Interrupt */
typedef enum RTC_CMP_enum
{
    RTC_CMP_CLEAR_gc = (0x00), /* Compare Match Interrupt - CLEAR */
    RTC_CMP_SET_gc   = (0x02), /* Compare Match Interrupt - SET */
} RTC_CMP_t;

/* Overflow Interrupt Flag */
typedef enum RTC_OVF_enum
{
    RTC_OVF_CLEAR_gc = (0x00), /* Overflow Interrupt Flag - CLEAR */
    RTC_OVF_SET_gc   = (0x01), /* Overflow Interrupt Flag - SET */
} RTC_OVF_t;

/* Period */
typedef enum RTC_PERIOD_enum
{
    RTC_PERIOD_OFF_gc      = (0x00<<3), /* Off */
    RTC_PERIOD_CYC4_gc     = (0x01<<3), /* RTC Clock Cycles 4 */
    RTC_PERIOD_CYC8_gc     = (0x02<<3), /* RTC Clock Cycles 8 */
    RTC_PERIOD_CYC16_gc    = (0x03<<3), /* RTC Clock Cycles 16 */
    RTC_PERIOD_CYC32_gc    = (0x04<<3), /* RTC Clock Cycles 32 */
    RTC_PERIOD_CYC64_gc    = (0x05<<3), /* RTC Clock Cycles 64 */
    RTC_PERIOD_CYC128_gc   = (0x06<<3), /* RTC Clock Cycles 128 */
    RTC_PERIOD_CYC256_gc   = (0x07<<3), /* RTC Clock Cycles 256 */
    RTC_PERIOD_CYC512_gc   = (0x08<<3), /* RTC Clock Cycles 512 */
    RTC_PERIOD_CYC1024_gc  = (0x09<<3), /* RTC Clock Cycles 1024 */
    RTC_PERIOD_CYC2048_gc  = (0x0A<<3), /* RTC Clock Cycles 2048 */
    RTC_PERIOD_CYC4096_gc  = (0x0B<<3), /* RTC Clock Cycles 4096 */
    RTC_PERIOD_CYC8192_gc  = (0x0C<<3), /* RTC Clock Cycles 8192 */
    RTC_PERIOD_CYC16384_gc = (0x0D<<3), /* RTC Clock Cycles 16384 */
    RTC_PERIOD_CYC32768_gc = (0x0E<<3), /* RTC Clock Cycles 32768 */
} RTC_PERIOD_t;

/* Enable */
typedef enum RTC_PITEN_enum
{
    RTC_PITEN_CLEAR_gc = (0x00), /* Enable - CLEAR */
    RTC_PITEN_SET_gc   = (0x01), /* Enable - SET */
} RTC_PITEN_t;

/* Run in debug */
typedef enum RTC_DBGRUN_enum
{
    RTC_DBGRUN_CLEAR_gc = (0x00), /* Run in debug - CLEAR */
    RTC_DBGRUN_SET_gc   = (0x01), /* Run in debug - SET */
} RTC_DBGRUN_t;

/* Periodic Interrupt */
typedef enum RTC_PI_enum
{
    RTC_PI_CLEAR_gc = (0x00), /* Periodic Interrupt - CLEAR */
    RTC_PI_SET_gc   = (0x01), /* Periodic Interrupt - SET */
} RTC_PI_t;

/* Periodic Interrupt */
typedef enum RTC_PI_enum
{
    RTC_PI_CLEAR_gc = (0x00), /* Periodic Interrupt - CLEAR */
    RTC_PI_SET_gc   = (0x01), /* Periodic Interrupt - SET */
} RTC_PI_t;

/* CTRLA Synchronization Busy Flag */
typedef enum RTC_CTRLBUSY_enum
{
    RTC_CTRLBUSY_CLEAR_gc = (0x00), /* CTRLA Synchronization Busy Flag - CLEAR */
    RTC_CTRLBUSY_SET_gc   = (0x01), /* CTRLA Synchronization Busy Flag - SET */
} RTC_CTRLBUSY_t;

/* Comparator Synchronization Busy Flag */
typedef enum RTC_CMPBUSY_enum
{
    RTC_CMPBUSY_CLEAR_gc = (0x00), /* Comparator Synchronization Busy Flag - CLEAR */
    RTC_CMPBUSY_SET_gc   = (0x08), /* Comparator Synchronization Busy Flag - SET */
} RTC_CMPBUSY_t;

/* Count Synchronization Busy Flag */
typedef enum RTC_CNTBUSY_enum
{
    RTC_CNTBUSY_CLEAR_gc = (0x00), /* Count Synchronization Busy Flag - CLEAR */
    RTC_CNTBUSY_SET_gc   = (0x02), /* Count Synchronization Busy Flag - SET */
} RTC_CNTBUSY_t;

/* CTRLA Synchronization Busy Flag */
typedef enum RTC_CTRLABUSY_enum
{
    RTC_CTRLABUSY_CLEAR_gc = (0x00), /* CTRLA Synchronization Busy Flag - CLEAR */
    RTC_CTRLABUSY_SET_gc   = (0x01), /* CTRLA Synchronization Busy Flag - SET */
} RTC_CTRLABUSY_t;

/* Period Synchronization Busy Flag */
typedef enum RTC_PERBUSY_enum
{
    RTC_PERBUSY_CLEAR_gc = (0x00), /* Period Synchronization Busy Flag - CLEAR */
    RTC_PERBUSY_SET_gc   = (0x04), /* Period Synchronization Busy Flag - SET */
} RTC_PERBUSY_t;

/*
--------------------------------------------------------------------------------
SIGROW - Signature row
--------------------------------------------------------------------------------
*/

typedef struct SIGROW_struct
{
    register8_t DEVICEID0;   /* Device ID Byte 0 */
    register8_t DEVICEID1;   /* Device ID Byte 1 */
    register8_t DEVICEID2;   /* Device ID Byte 2 */
    register8_t SERNUM0;     /* Serial Number Byte 0 */
    register8_t SERNUM1;     /* Serial Number Byte 1 */
    register8_t SERNUM2;     /* Serial Number Byte 2 */
    register8_t SERNUM3;     /* Serial Number Byte 3 */
    register8_t SERNUM4;     /* Serial Number Byte 4 */
    register8_t SERNUM5;     /* Serial Number Byte 5 */
    register8_t SERNUM6;     /* Serial Number Byte 6 */
    register8_t SERNUM7;     /* Serial Number Byte 7 */
    register8_t SERNUM8;     /* Serial Number Byte 8 */
    register8_t SERNUM9;     /* Serial Number Byte 9 */
    register8_t rsv_0x0D[7]; /* RESERVED REGISTER BLOCK */
    register8_t OSCCAL32K;   /* Oscillator Calibration for 32kHz ULP */
    register8_t rsv_0x15[3]; /* RESERVED REGISTER BLOCK */
    register8_t OSCCAL16M0;  /* Oscillator Calibration 16 MHz Byte 0 */
    register8_t OSCCAL16M1;  /* Oscillator Calibration 16 MHz Byte 1 */
    register8_t OSCCAL20M0;  /* Oscillator Calibration 20 MHz Byte 0 */
    register8_t OSCCAL20M1;  /* Oscillator Calibration 20 MHz Byte 1 */
    register8_t rsv_0x1C[4]; /* RESERVED REGISTER BLOCK */
    register8_t TEMPSENSE0;  /* Temperature Sensor Calibration Byte 0 */
    register8_t TEMPSENSE1;  /* Temperature Sensor Calibration Byte 1 */
    register8_t OSC16ERR3V;  /* OSC16 error at 3V */
    register8_t OSC16ERR5V;  /* OSC16 error at 5V */
    register8_t OSC20ERR3V;  /* OSC20 error at 3V */
    register8_t OSC20ERR5V;  /* OSC20 error at 5V */
    register8_t rsv_0x26[9]; /* RESERVED REGISTER BLOCK */
    register8_t CHECKSUM1;   /* CRC Checksum Byte 1 */
} SIGROW_t;


/*
--------------------------------------------------------------------------------
SLPCTRL - Sleep Controller
--------------------------------------------------------------------------------
*/

typedef struct SLPCTRL_struct
{
    register8_t CTRLA; /* Control */
} SLPCTRL_t;


/* Sleep enable */
typedef enum SLPCTRL_SEN_enum
{
    SLPCTRL_SEN_CLEAR_gc = (0x00), /* Sleep enable - CLEAR */
    SLPCTRL_SEN_SET_gc   = (0x01), /* Sleep enable - SET */
} SLPCTRL_SEN_t;

/* Sleep mode */
typedef enum SLPCTRL_SMODE_enum
{
    SLPCTRL_SMODE_IDLE_gc  = (0x00<<1), /* Idle mode */
    SLPCTRL_SMODE_STDBY_gc = (0x01<<1), /* Standby Mode */
    SLPCTRL_SMODE_PDOWN_gc = (0x02<<1), /* Power-down Mode */
} SLPCTRL_SMODE_t;

/*
--------------------------------------------------------------------------------
SPI - Serial Peripheral Interface
--------------------------------------------------------------------------------
*/

typedef struct SPI_struct
{
    register8_t CTRLA;    /* Control A */
    register8_t CTRLB;    /* Control B */
    register8_t INTCTRL;  /* Interrupt Control */
    register8_t INTFLAGS; /* Interrupt Flags */
    register8_t DATA;     /* Data */
} SPI_t;


/* Enable Double Speed */
typedef enum SPI_CLK2X_enum
{
    SPI_CLK2X_CLEAR_gc = (0x00), /* Enable Double Speed - CLEAR */
    SPI_CLK2X_SET_gc   = (0x10), /* Enable Double Speed - SET */
} SPI_CLK2X_t;

/* Data Order Setting */
typedef enum SPI_DORD_enum
{
    SPI_DORD_CLEAR_gc = (0x00), /* Data Order Setting - CLEAR */
    SPI_DORD_SET_gc   = (0x40), /* Data Order Setting - SET */
} SPI_DORD_t;

/* Enable Module */
typedef enum SPI_ENABLE_enum
{
    SPI_ENABLE_CLEAR_gc = (0x00), /* Enable Module - CLEAR */
    SPI_ENABLE_SET_gc   = (0x01), /* Enable Module - SET */
} SPI_ENABLE_t;

/* Master Operation Enable */
typedef enum SPI_MASTER_enum
{
    SPI_MASTER_CLEAR_gc = (0x00), /* Master Operation Enable - CLEAR */
    SPI_MASTER_SET_gc   = (0x20), /* Master Operation Enable - SET */
} SPI_MASTER_t;

/* Prescaler */
typedef enum SPI_PRESC_enum
{
    SPI_PRESC_DIV4_gc   = (0x00<<1), /* System Clock / 4 */
    SPI_PRESC_DIV16_gc  = (0x01<<1), /* System Clock / 16 */
    SPI_PRESC_DIV64_gc  = (0x02<<1), /* System Clock / 64 */
    SPI_PRESC_DIV128_gc = (0x03<<1), /* System Clock / 128 */
} SPI_PRESC_t;

/* Buffer Mode Enable */
typedef enum SPI_BUFEN_enum
{
    SPI_BUFEN_CLEAR_gc = (0x00), /* Buffer Mode Enable - CLEAR */
    SPI_BUFEN_SET_gc   = (0x80), /* Buffer Mode Enable - SET */
} SPI_BUFEN_t;

/* Buffer Write Mode */
typedef enum SPI_BUFWR_enum
{
    SPI_BUFWR_CLEAR_gc = (0x00), /* Buffer Write Mode - CLEAR */
    SPI_BUFWR_SET_gc   = (0x40), /* Buffer Write Mode - SET */
} SPI_BUFWR_t;

/* SPI Mode */
typedef enum SPI_MODE_enum
{
    SPI_MODE_0_gc = (0x00), /* SPI Mode 0 */
    SPI_MODE_1_gc = (0x01), /* SPI Mode 1 */
    SPI_MODE_2_gc = (0x02), /* SPI Mode 2 */
    SPI_MODE_3_gc = (0x03), /* SPI Mode 3 */
} SPI_MODE_t;

/* Slave Select Disable */
typedef enum SPI_SSD_enum
{
    SPI_SSD_CLEAR_gc = (0x00), /* Slave Select Disable - CLEAR */
    SPI_SSD_SET_gc   = (0x04), /* Slave Select Disable - SET */
} SPI_SSD_t;

/* Data Register Empty Interrupt Enable */
typedef enum SPI_DREIE_enum
{
    SPI_DREIE_CLEAR_gc = (0x00), /* Data Register Empty Interrupt Enable - CLEAR */
    SPI_DREIE_SET_gc   = (0x20), /* Data Register Empty Interrupt Enable - SET */
} SPI_DREIE_t;

/* Interrupt Enable */
typedef enum SPI_IE_enum
{
    SPI_IE_CLEAR_gc = (0x00), /* Interrupt Enable - CLEAR */
    SPI_IE_SET_gc   = (0x01), /* Interrupt Enable - SET */
} SPI_IE_t;

/* Receive Complete Interrupt Enable */
typedef enum SPI_RXCIE_enum
{
    SPI_RXCIE_CLEAR_gc = (0x00), /* Receive Complete Interrupt Enable - CLEAR */
    SPI_RXCIE_SET_gc   = (0x80), /* Receive Complete Interrupt Enable - SET */
} SPI_RXCIE_t;

/* Slave Select Trigger Interrupt Enable */
typedef enum SPI_SSIE_enum
{
    SPI_SSIE_CLEAR_gc = (0x00), /* Slave Select Trigger Interrupt Enable - CLEAR */
    SPI_SSIE_SET_gc   = (0x10), /* Slave Select Trigger Interrupt Enable - SET */
} SPI_SSIE_t;

/* Transfer Complete Interrupt Enable */
typedef enum SPI_TXCIE_enum
{
    SPI_TXCIE_CLEAR_gc = (0x00), /* Transfer Complete Interrupt Enable - CLEAR */
    SPI_TXCIE_SET_gc   = (0x40), /* Transfer Complete Interrupt Enable - SET */
} SPI_TXCIE_t;

/* Buffer Overflow */
typedef enum SPI_BUFFERED_BUFOVF_enum
{
    SPI_BUFFERED_BUFOVF_CLEAR_gc = (0x00), /* Buffer Overflow - CLEAR */
    SPI_BUFFERED_BUFOVF_SET_gc   = (0x01), /* Buffer Overflow - SET */
} SPI_BUFFERED_BUFOVF_t;

/* Data Register Empty Interrupt Flag */
typedef enum SPI_BUFFERED_DREIF_enum
{
    SPI_BUFFERED_DREIF_CLEAR_gc = (0x00), /* Data Register Empty Interrupt Flag - CLEAR */
    SPI_BUFFERED_DREIF_SET_gc   = (0x20), /* Data Register Empty Interrupt Flag - SET */
} SPI_BUFFERED_DREIF_t;

/* Receive Complete Interrupt Flag */
typedef enum SPI_BUFFERED_RXCIF_enum
{
    SPI_BUFFERED_RXCIF_CLEAR_gc = (0x00), /* Receive Complete Interrupt Flag - CLEAR */
    SPI_BUFFERED_RXCIF_SET_gc   = (0x80), /* Receive Complete Interrupt Flag - SET */
} SPI_BUFFERED_RXCIF_t;

/* Slave Select Trigger Interrupt Flag */
typedef enum SPI_BUFFERED_SSIF_enum
{
    SPI_BUFFERED_SSIF_CLEAR_gc = (0x00), /* Slave Select Trigger Interrupt Flag - CLEAR */
    SPI_BUFFERED_SSIF_SET_gc   = (0x10), /* Slave Select Trigger Interrupt Flag - SET */
} SPI_BUFFERED_SSIF_t;

/* Transfer Complete Interrupt Flag */
typedef enum SPI_BUFFERED_TXCIF_enum
{
    SPI_BUFFERED_TXCIF_CLEAR_gc = (0x00), /* Transfer Complete Interrupt Flag - CLEAR */
    SPI_BUFFERED_TXCIF_SET_gc   = (0x40), /* Transfer Complete Interrupt Flag - SET */
} SPI_BUFFERED_TXCIF_t;

/* Interrupt Flag */
typedef enum SPI_DEFAULT_IF_enum
{
    SPI_DEFAULT_IF_CLEAR_gc = (0x00), /* Interrupt Flag - CLEAR */
    SPI_DEFAULT_IF_SET_gc   = (0x80), /* Interrupt Flag - SET */
} SPI_DEFAULT_IF_t;

/* Write Collision */
typedef enum SPI_DEFAULT_WRCOL_enum
{
    SPI_DEFAULT_WRCOL_CLEAR_gc = (0x00), /* Write Collision - CLEAR */
    SPI_DEFAULT_WRCOL_SET_gc   = (0x40), /* Write Collision - SET */
} SPI_DEFAULT_WRCOL_t;

/*
--------------------------------------------------------------------------------
SYSCFG - System Configuration Registers
--------------------------------------------------------------------------------
*/

typedef struct SYSCFG_struct
{
    register8_t rsv_0x00;     /* RESERVED REGISTER */
    register8_t REVID;        /* Revision ID */
    register8_t EXTBRK;       /* External Break */
    register8_t rsv_0x03[21]; /* RESERVED REGISTER BLOCK */
    register8_t OCDM;         /* OCD Message Register */
    register8_t OCDMS;        /* OCD Message Status */
} SYSCFG_t;


/* External break enable */
typedef enum SYSCFG_ENEXTBRK_enum
{
    SYSCFG_ENEXTBRK_CLEAR_gc = (0x00), /* External break enable - CLEAR */
    SYSCFG_ENEXTBRK_SET_gc   = (0x01), /* External break enable - SET */
} SYSCFG_ENEXTBRK_t;

/* OCD Message Read */
typedef enum SYSCFG_OCDMR_enum
{
    SYSCFG_OCDMR_CLEAR_gc = (0x00), /* OCD Message Read - CLEAR */
    SYSCFG_OCDMR_SET_gc   = (0x01), /* OCD Message Read - SET */
} SYSCFG_OCDMR_t;

/*
--------------------------------------------------------------------------------
TCA - 16-bit Timer/Counter Type A
--------------------------------------------------------------------------------
*/

typedef struct TCA_SINGLE_struct
{
    register8_t CTRLA;        /* Control A */
    register8_t CTRLB;        /* Control B */
    register8_t CTRLC;        /* Control C */
    register8_t CTRLD;        /* Control D */
    register8_t CTRLECLR;     /* Control E Clear */
    register8_t CTRLESET;     /* Control E Set */
    register8_t CTRLFCLR;     /* Control F Clear */
    register8_t CTRLFSET;     /* Control F Set */
    register8_t rsv_0x08;     /* RESERVED REGISTER */
    register8_t EVCTRL;       /* Event Control */
    register8_t INTCTRL;      /* Interrupt Control */
    register8_t INTFLAGS;     /* Interrupt Flags */
    register8_t rsv_0x0C[2];  /* RESERVED REGISTER BLOCK */
    register8_t DBGCTRL;      /* Degbug Control */
    register8_t TEMP;         /* Temporary data for 16-bit Access */
    register8_t rsv_0x10[16]; /* RESERVED REGISTER BLOCK */
    _REGISTER16 (CNT);        /* Count */
    register8_t rsv_0x21[5];  /* RESERVED REGISTER BLOCK */
    _REGISTER16 (PER);        /* Period */
    register8_t rsv_0x27;     /* RESERVED REGISTER */
    _REGISTER16 (CMP0);       /* Compare 0 */
    register8_t rsv_0x29;     /* RESERVED REGISTER */
    _REGISTER16 (CMP1);       /* Compare 1 */
    register8_t rsv_0x2B;     /* RESERVED REGISTER */
    _REGISTER16 (CMP2);       /* Compare 2 */
    register8_t rsv_0x2D[9];  /* RESERVED REGISTER BLOCK */
    _REGISTER16 (PERBUF);     /* Period Buffer */
    register8_t rsv_0x37;     /* RESERVED REGISTER */
    _REGISTER16 (CMP0BUF);    /* Compare 0 Buffer */
    register8_t rsv_0x39;     /* RESERVED REGISTER */
    _REGISTER16 (CMP1BUF);    /* Compare 1 Buffer */
    register8_t rsv_0x3B;     /* RESERVED REGISTER */
    _REGISTER16 (CMP2BUF);    /* Compare 2 Buffer */
} TCA_SINGLE_t;


/*
--------------------------------------------------------------------------------
TCA - 16-bit Timer/Counter Type A
--------------------------------------------------------------------------------
*/

typedef struct TCA_SPLIT_struct
{
    register8_t CTRLA;        /* Control A */
    register8_t CTRLB;        /* Control B */
    register8_t CTRLC;        /* Control C */
    register8_t CTRLD;        /* Control D */
    register8_t CTRLECLR;     /* Control E Clear */
    register8_t CTRLESET;     /* Control E Set */
    register8_t rsv_0x06[4];  /* RESERVED REGISTER BLOCK */
    register8_t INTCTRL;      /* Interrupt Control */
    register8_t INTFLAGS;     /* Interrupt Flags */
    register8_t rsv_0x0C[2];  /* RESERVED REGISTER BLOCK */
    register8_t DBGCTRL;      /* Degbug Control */
    register8_t rsv_0x0F[17]; /* RESERVED REGISTER BLOCK */
    register8_t LCNT;         /* Low Count */
    register8_t HCNT;         /* High Count */
    register8_t rsv_0x22[4];  /* RESERVED REGISTER BLOCK */
    register8_t LPER;         /* Low Period */
    register8_t HPER;         /* High Period */
    register8_t LCMP0;        /* Low Compare */
    register8_t HCMP0;        /* High Compare */
    register8_t LCMP1;        /* Low Compare */
    register8_t HCMP1;        /* High Compare */
    register8_t LCMP2;        /* Low Compare */
    register8_t HCMP2;        /* High Compare */
} TCA_SPLIT_t;


/*
--------------------------------------------------------------------------------
TCA - 16-bit Timer/Counter Type A
--------------------------------------------------------------------------------
*/

/* 16-bit Timer/Counter Type A */
typedef union TCA_union {
    TCA_SINGLE_t SINGLE; /* TCA.SINGLE.CTRLD.SPLITM = 0 */
    TCA_SPLIT_t  SPLIT;  /* TCA.SINGLE.CTRLD.SPLITM = 1 */
} TCA_t;


/* Clock Selection */
typedef enum TCA_SINGLE_CLKSEL_enum
{
    TCA_SINGLE_CLKSEL_DIV1_gc    = (0x00<<1), /* System Clock */
    TCA_SINGLE_CLKSEL_DIV2_gc    = (0x01<<1), /* System Clock / 2 */
    TCA_SINGLE_CLKSEL_DIV4_gc    = (0x02<<1), /* System Clock / 4 */
    TCA_SINGLE_CLKSEL_DIV8_gc    = (0x03<<1), /* System Clock / 8 */
    TCA_SINGLE_CLKSEL_DIV16_gc   = (0x04<<1), /* System Clock / 16 */
    TCA_SINGLE_CLKSEL_DIV64_gc   = (0x05<<1), /* System Clock / 64 */
    TCA_SINGLE_CLKSEL_DIV256_gc  = (0x06<<1), /* System Clock / 256 */
    TCA_SINGLE_CLKSEL_DIV1024_gc = (0x07<<1), /* System Clock / 1024 */
} TCA_SINGLE_CLKSEL_t;

/* Module Enable */
typedef enum TCA_SINGLE_ENABLE_enum
{
    TCA_SINGLE_ENABLE_CLEAR_gc = (0x00), /* Module Enable - CLEAR */
    TCA_SINGLE_ENABLE_SET_gc   = (0x01), /* Module Enable - SET */
} TCA_SINGLE_ENABLE_t;

/* Auto Lock Update */
typedef enum TCA_SINGLE_ALUPD_enum
{
    TCA_SINGLE_ALUPD_CLEAR_gc = (0x00), /* Auto Lock Update - CLEAR */
    TCA_SINGLE_ALUPD_SET_gc   = (0x08), /* Auto Lock Update - SET */
} TCA_SINGLE_ALUPD_t;

/* Compare 0 Enable */
typedef enum TCA_SINGLE_CMP0EN_enum
{
    TCA_SINGLE_CMP0EN_CLEAR_gc = (0x00), /* Compare 0 Enable - CLEAR */
    TCA_SINGLE_CMP0EN_SET_gc   = (0x10), /* Compare 0 Enable - SET */
} TCA_SINGLE_CMP0EN_t;

/* Compare 1 Enable */
typedef enum TCA_SINGLE_CMP1EN_enum
{
    TCA_SINGLE_CMP1EN_CLEAR_gc = (0x00), /* Compare 1 Enable - CLEAR */
    TCA_SINGLE_CMP1EN_SET_gc   = (0x20), /* Compare 1 Enable - SET */
} TCA_SINGLE_CMP1EN_t;

/* Compare 2 Enable */
typedef enum TCA_SINGLE_CMP2EN_enum
{
    TCA_SINGLE_CMP2EN_CLEAR_gc = (0x00), /* Compare 2 Enable - CLEAR */
    TCA_SINGLE_CMP2EN_SET_gc   = (0x40), /* Compare 2 Enable - SET */
} TCA_SINGLE_CMP2EN_t;

/* Waveform generation mode */
typedef enum TCA_SINGLE_WGMODE_enum
{
    TCA_SINGLE_WGMODE_NORMAL_gc      = (0x00), /* Normal Mode */
    TCA_SINGLE_WGMODE_FRQ_gc         = (0x01), /* Frequency Generation Mode */
    TCA_SINGLE_WGMODE_SINGLESLOPE_gc = (0x03), /* Single Slope PWM */
    TCA_SINGLE_WGMODE_DSTOP_gc       = (0x05), /* Dual Slope PWM, overflow on TOP */
    TCA_SINGLE_WGMODE_DSBOTH_gc      = (0x06), /* Dual Slope PWM, overflow on TOP and BOTTOM */
    TCA_SINGLE_WGMODE_DSBOTTOM_gc    = (0x07), /* Dual Slope PWM, overflow on BOTTOM */
} TCA_SINGLE_WGMODE_t;

/* Compare 0 Waveform Output Value */
typedef enum TCA_SINGLE_CMP0OV_enum
{
    TCA_SINGLE_CMP0OV_CLEAR_gc = (0x00), /* Compare 0 Waveform Output Value - CLEAR */
    TCA_SINGLE_CMP0OV_SET_gc   = (0x01), /* Compare 0 Waveform Output Value - SET */
} TCA_SINGLE_CMP0OV_t;

/* Compare 1 Waveform Output Value */
typedef enum TCA_SINGLE_CMP1OV_enum
{
    TCA_SINGLE_CMP1OV_CLEAR_gc = (0x00), /* Compare 1 Waveform Output Value - CLEAR */
    TCA_SINGLE_CMP1OV_SET_gc   = (0x02), /* Compare 1 Waveform Output Value - SET */
} TCA_SINGLE_CMP1OV_t;

/* Compare 2 Waveform Output Value */
typedef enum TCA_SINGLE_CMP2OV_enum
{
    TCA_SINGLE_CMP2OV_CLEAR_gc = (0x00), /* Compare 2 Waveform Output Value - CLEAR */
    TCA_SINGLE_CMP2OV_SET_gc   = (0x04), /* Compare 2 Waveform Output Value - SET */
} TCA_SINGLE_CMP2OV_t;

/* Split Mode Enable */
typedef enum TCA_SINGLE_SPLITM_enum
{
    TCA_SINGLE_SPLITM_CLEAR_gc = (0x00), /* Split Mode Enable - CLEAR */
    TCA_SINGLE_SPLITM_SET_gc   = (0x01), /* Split Mode Enable - SET */
} TCA_SINGLE_SPLITM_t;

/* Command */
typedef enum TCA_SINGLE_CMD_enum
{
    TCA_SINGLE_CMD_NONE_gc    = (0x00<<2), /* No Command */
    TCA_SINGLE_CMD_UPDATE_gc  = (0x01<<2), /* Force Update */
    TCA_SINGLE_CMD_RESTART_gc = (0x02<<2), /* Force Restart */
    TCA_SINGLE_CMD_RESET_gc   = (0x03<<2), /* Force Hard Reset */
} TCA_SINGLE_CMD_t;

/* Direction */
typedef enum TCA_SINGLE_DIR_enum
{
    TCA_SINGLE_DIR_CLEAR_gc = (0x00), /* Direction - CLEAR */
    TCA_SINGLE_DIR_SET_gc   = (0x01), /* Direction - SET */
} TCA_SINGLE_DIR_t;

/* Lock Update */
typedef enum TCA_SINGLE_LUPD_enum
{
    TCA_SINGLE_LUPD_CLEAR_gc = (0x00), /* Lock Update - CLEAR */
    TCA_SINGLE_LUPD_SET_gc   = (0x02), /* Lock Update - SET */
} TCA_SINGLE_LUPD_t;

/* Command */
typedef enum TCA_SINGLE_CMD_enum
{
    TCA_SINGLE_CMD_NONE_gc    = (0x00<<2), /* No Command */
    TCA_SINGLE_CMD_UPDATE_gc  = (0x01<<2), /* Force Update */
    TCA_SINGLE_CMD_RESTART_gc = (0x02<<2), /* Force Restart */
    TCA_SINGLE_CMD_RESET_gc   = (0x03<<2), /* Force Hard Reset */
} TCA_SINGLE_CMD_t;

/* Direction */
typedef enum TCA_SINGLE_DIR_enum
{
    TCA_SINGLE_DIR_UP_gc   = (0x00), /* Count up */
    TCA_SINGLE_DIR_DOWN_gc = (0x01), /* Count down */
} TCA_SINGLE_DIR_t;

/* Lock Update */
typedef enum TCA_SINGLE_LUPD_enum
{
    TCA_SINGLE_LUPD_CLEAR_gc = (0x00), /* Lock Update - CLEAR */
    TCA_SINGLE_LUPD_SET_gc   = (0x02), /* Lock Update - SET */
} TCA_SINGLE_LUPD_t;

/* Compare 0 Buffer Valid */
typedef enum TCA_SINGLE_CMP0BV_enum
{
    TCA_SINGLE_CMP0BV_CLEAR_gc = (0x00), /* Compare 0 Buffer Valid - CLEAR */
    TCA_SINGLE_CMP0BV_SET_gc   = (0x02), /* Compare 0 Buffer Valid - SET */
} TCA_SINGLE_CMP0BV_t;

/* Compare 1 Buffer Valid */
typedef enum TCA_SINGLE_CMP1BV_enum
{
    TCA_SINGLE_CMP1BV_CLEAR_gc = (0x00), /* Compare 1 Buffer Valid - CLEAR */
    TCA_SINGLE_CMP1BV_SET_gc   = (0x04), /* Compare 1 Buffer Valid - SET */
} TCA_SINGLE_CMP1BV_t;

/* Compare 2 Buffer Valid */
typedef enum TCA_SINGLE_CMP2BV_enum
{
    TCA_SINGLE_CMP2BV_CLEAR_gc = (0x00), /* Compare 2 Buffer Valid - CLEAR */
    TCA_SINGLE_CMP2BV_SET_gc   = (0x08), /* Compare 2 Buffer Valid - SET */
} TCA_SINGLE_CMP2BV_t;

/* Period Buffer Valid */
typedef enum TCA_SINGLE_PERBV_enum
{
    TCA_SINGLE_PERBV_CLEAR_gc = (0x00), /* Period Buffer Valid - CLEAR */
    TCA_SINGLE_PERBV_SET_gc   = (0x01), /* Period Buffer Valid - SET */
} TCA_SINGLE_PERBV_t;

/* Compare 0 Buffer Valid */
typedef enum TCA_SINGLE_CMP0BV_enum
{
    TCA_SINGLE_CMP0BV_CLEAR_gc = (0x00), /* Compare 0 Buffer Valid - CLEAR */
    TCA_SINGLE_CMP0BV_SET_gc   = (0x02), /* Compare 0 Buffer Valid - SET */
} TCA_SINGLE_CMP0BV_t;

/* Compare 1 Buffer Valid */
typedef enum TCA_SINGLE_CMP1BV_enum
{
    TCA_SINGLE_CMP1BV_CLEAR_gc = (0x00), /* Compare 1 Buffer Valid - CLEAR */
    TCA_SINGLE_CMP1BV_SET_gc   = (0x04), /* Compare 1 Buffer Valid - SET */
} TCA_SINGLE_CMP1BV_t;

/* Compare 2 Buffer Valid */
typedef enum TCA_SINGLE_CMP2BV_enum
{
    TCA_SINGLE_CMP2BV_CLEAR_gc = (0x00), /* Compare 2 Buffer Valid - CLEAR */
    TCA_SINGLE_CMP2BV_SET_gc   = (0x08), /* Compare 2 Buffer Valid - SET */
} TCA_SINGLE_CMP2BV_t;

/* Period Buffer Valid */
typedef enum TCA_SINGLE_PERBV_enum
{
    TCA_SINGLE_PERBV_CLEAR_gc = (0x00), /* Period Buffer Valid - CLEAR */
    TCA_SINGLE_PERBV_SET_gc   = (0x01), /* Period Buffer Valid - SET */
} TCA_SINGLE_PERBV_t;

/* Debug Run */
typedef enum TCA_SINGLE_DBGRUN_enum
{
    TCA_SINGLE_DBGRUN_CLEAR_gc = (0x00), /* Debug Run - CLEAR */
    TCA_SINGLE_DBGRUN_SET_gc   = (0x01), /* Debug Run - SET */
} TCA_SINGLE_DBGRUN_t;

/* Count on Event Input */
typedef enum TCA_SINGLE_CNTEI_enum
{
    TCA_SINGLE_CNTEI_CLEAR_gc = (0x00), /* Count on Event Input - CLEAR */
    TCA_SINGLE_CNTEI_SET_gc   = (0x01), /* Count on Event Input - SET */
} TCA_SINGLE_CNTEI_t;

/* Event Action */
typedef enum TCA_SINGLE_EVACT_enum
{
    TCA_SINGLE_EVACT_POSEDGE_gc = (0x00<<1), /* Count on positive edge event */
    TCA_SINGLE_EVACT_ANYEDGE_gc = (0x01<<1), /* Count on any edge event */
    TCA_SINGLE_EVACT_HIGHLVL_gc = (0x02<<1), /* Count on prescaled clock while event line is 1. */
    TCA_SINGLE_EVACT_UPDOWN_gc  = (0x03<<1), /* Count on prescaled clock. Event controls count direction. Up-count when event line is 0, down-count when event line is 1. */
} TCA_SINGLE_EVACT_t;

/* Compare 0 Interrupt */
typedef enum TCA_SINGLE_CMP0_enum
{
    TCA_SINGLE_CMP0_CLEAR_gc = (0x00), /* Compare 0 Interrupt - CLEAR */
    TCA_SINGLE_CMP0_SET_gc   = (0x10), /* Compare 0 Interrupt - SET */
} TCA_SINGLE_CMP0_t;

/* Compare 1 Interrupt */
typedef enum TCA_SINGLE_CMP1_enum
{
    TCA_SINGLE_CMP1_CLEAR_gc = (0x00), /* Compare 1 Interrupt - CLEAR */
    TCA_SINGLE_CMP1_SET_gc   = (0x20), /* Compare 1 Interrupt - SET */
} TCA_SINGLE_CMP1_t;

/* Compare 2 Interrupt */
typedef enum TCA_SINGLE_CMP2_enum
{
    TCA_SINGLE_CMP2_CLEAR_gc = (0x00), /* Compare 2 Interrupt - CLEAR */
    TCA_SINGLE_CMP2_SET_gc   = (0x40), /* Compare 2 Interrupt - SET */
} TCA_SINGLE_CMP2_t;

/* Overflow Interrupt */
typedef enum TCA_SINGLE_OVF_enum
{
    TCA_SINGLE_OVF_CLEAR_gc = (0x00), /* Overflow Interrupt - CLEAR */
    TCA_SINGLE_OVF_SET_gc   = (0x01), /* Overflow Interrupt - SET */
} TCA_SINGLE_OVF_t;

/* Compare 0 Interrupt */
typedef enum TCA_SINGLE_CMP0_enum
{
    TCA_SINGLE_CMP0_CLEAR_gc = (0x00), /* Compare 0 Interrupt - CLEAR */
    TCA_SINGLE_CMP0_SET_gc   = (0x10), /* Compare 0 Interrupt - SET */
} TCA_SINGLE_CMP0_t;

/* Compare 1 Interrupt */
typedef enum TCA_SINGLE_CMP1_enum
{
    TCA_SINGLE_CMP1_CLEAR_gc = (0x00), /* Compare 1 Interrupt - CLEAR */
    TCA_SINGLE_CMP1_SET_gc   = (0x20), /* Compare 1 Interrupt - SET */
} TCA_SINGLE_CMP1_t;

/* Compare 2 Interrupt */
typedef enum TCA_SINGLE_CMP2_enum
{
    TCA_SINGLE_CMP2_CLEAR_gc = (0x00), /* Compare 2 Interrupt - CLEAR */
    TCA_SINGLE_CMP2_SET_gc   = (0x40), /* Compare 2 Interrupt - SET */
} TCA_SINGLE_CMP2_t;

/* Overflow Interrupt */
typedef enum TCA_SINGLE_OVF_enum
{
    TCA_SINGLE_OVF_CLEAR_gc = (0x00), /* Overflow Interrupt - CLEAR */
    TCA_SINGLE_OVF_SET_gc   = (0x01), /* Overflow Interrupt - SET */
} TCA_SINGLE_OVF_t;

/* Clock Selection */
typedef enum TCA_SPLIT_CLKSEL_enum
{
    TCA_SPLIT_CLKSEL_DIV1_gc    = (0x00<<1), /* System Clock */
    TCA_SPLIT_CLKSEL_DIV2_gc    = (0x01<<1), /* System Clock / 2 */
    TCA_SPLIT_CLKSEL_DIV4_gc    = (0x02<<1), /* System Clock / 4 */
    TCA_SPLIT_CLKSEL_DIV8_gc    = (0x03<<1), /* System Clock / 8 */
    TCA_SPLIT_CLKSEL_DIV16_gc   = (0x04<<1), /* System Clock / 16 */
    TCA_SPLIT_CLKSEL_DIV64_gc   = (0x05<<1), /* System Clock / 64 */
    TCA_SPLIT_CLKSEL_DIV256_gc  = (0x06<<1), /* System Clock / 256 */
    TCA_SPLIT_CLKSEL_DIV1024_gc = (0x07<<1), /* System Clock / 1024 */
} TCA_SPLIT_CLKSEL_t;

/* Module Enable */
typedef enum TCA_SPLIT_ENABLE_enum
{
    TCA_SPLIT_ENABLE_CLEAR_gc = (0x00), /* Module Enable - CLEAR */
    TCA_SPLIT_ENABLE_SET_gc   = (0x01), /* Module Enable - SET */
} TCA_SPLIT_ENABLE_t;

/* High Compare 0 Enable */
typedef enum TCA_SPLIT_HCMP0EN_enum
{
    TCA_SPLIT_HCMP0EN_CLEAR_gc = (0x00), /* High Compare 0 Enable - CLEAR */
    TCA_SPLIT_HCMP0EN_SET_gc   = (0x10), /* High Compare 0 Enable - SET */
} TCA_SPLIT_HCMP0EN_t;

/* High Compare 1 Enable */
typedef enum TCA_SPLIT_HCMP1EN_enum
{
    TCA_SPLIT_HCMP1EN_CLEAR_gc = (0x00), /* High Compare 1 Enable - CLEAR */
    TCA_SPLIT_HCMP1EN_SET_gc   = (0x20), /* High Compare 1 Enable - SET */
} TCA_SPLIT_HCMP1EN_t;

/* High Compare 2 Enable */
typedef enum TCA_SPLIT_HCMP2EN_enum
{
    TCA_SPLIT_HCMP2EN_CLEAR_gc = (0x00), /* High Compare 2 Enable - CLEAR */
    TCA_SPLIT_HCMP2EN_SET_gc   = (0x40), /* High Compare 2 Enable - SET */
} TCA_SPLIT_HCMP2EN_t;

/* Low Compare 0 Enable */
typedef enum TCA_SPLIT_LCMP0EN_enum
{
    TCA_SPLIT_LCMP0EN_CLEAR_gc = (0x00), /* Low Compare 0 Enable - CLEAR */
    TCA_SPLIT_LCMP0EN_SET_gc   = (0x01), /* Low Compare 0 Enable - SET */
} TCA_SPLIT_LCMP0EN_t;

/* Low Compare 1 Enable */
typedef enum TCA_SPLIT_LCMP1EN_enum
{
    TCA_SPLIT_LCMP1EN_CLEAR_gc = (0x00), /* Low Compare 1 Enable - CLEAR */
    TCA_SPLIT_LCMP1EN_SET_gc   = (0x02), /* Low Compare 1 Enable - SET */
} TCA_SPLIT_LCMP1EN_t;

/* Low Compare 2 Enable */
typedef enum TCA_SPLIT_LCMP2EN_enum
{
    TCA_SPLIT_LCMP2EN_CLEAR_gc = (0x00), /* Low Compare 2 Enable - CLEAR */
    TCA_SPLIT_LCMP2EN_SET_gc   = (0x04), /* Low Compare 2 Enable - SET */
} TCA_SPLIT_LCMP2EN_t;

/* High Compare 0 Output Value */
typedef enum TCA_SPLIT_HCMP0OV_enum
{
    TCA_SPLIT_HCMP0OV_CLEAR_gc = (0x00), /* High Compare 0 Output Value - CLEAR */
    TCA_SPLIT_HCMP0OV_SET_gc   = (0x10), /* High Compare 0 Output Value - SET */
} TCA_SPLIT_HCMP0OV_t;

/* High Compare 1 Output Value */
typedef enum TCA_SPLIT_HCMP1OV_enum
{
    TCA_SPLIT_HCMP1OV_CLEAR_gc = (0x00), /* High Compare 1 Output Value - CLEAR */
    TCA_SPLIT_HCMP1OV_SET_gc   = (0x20), /* High Compare 1 Output Value - SET */
} TCA_SPLIT_HCMP1OV_t;

/* High Compare 2 Output Value */
typedef enum TCA_SPLIT_HCMP2OV_enum
{
    TCA_SPLIT_HCMP2OV_CLEAR_gc = (0x00), /* High Compare 2 Output Value - CLEAR */
    TCA_SPLIT_HCMP2OV_SET_gc   = (0x40), /* High Compare 2 Output Value - SET */
} TCA_SPLIT_HCMP2OV_t;

/* Low Compare 0 Output Value */
typedef enum TCA_SPLIT_LCMP0OV_enum
{
    TCA_SPLIT_LCMP0OV_CLEAR_gc = (0x00), /* Low Compare 0 Output Value - CLEAR */
    TCA_SPLIT_LCMP0OV_SET_gc   = (0x01), /* Low Compare 0 Output Value - SET */
} TCA_SPLIT_LCMP0OV_t;

/* Low Compare 1 Output Value */
typedef enum TCA_SPLIT_LCMP1OV_enum
{
    TCA_SPLIT_LCMP1OV_CLEAR_gc = (0x00), /* Low Compare 1 Output Value - CLEAR */
    TCA_SPLIT_LCMP1OV_SET_gc   = (0x02), /* Low Compare 1 Output Value - SET */
} TCA_SPLIT_LCMP1OV_t;

/* Low Compare 2 Output Value */
typedef enum TCA_SPLIT_LCMP2OV_enum
{
    TCA_SPLIT_LCMP2OV_CLEAR_gc = (0x00), /* Low Compare 2 Output Value - CLEAR */
    TCA_SPLIT_LCMP2OV_SET_gc   = (0x04), /* Low Compare 2 Output Value - SET */
} TCA_SPLIT_LCMP2OV_t;

/* Split Mode Enable */
typedef enum TCA_SPLIT_SPLITM_enum
{
    TCA_SPLIT_SPLITM_CLEAR_gc = (0x00), /* Split Mode Enable - CLEAR */
    TCA_SPLIT_SPLITM_SET_gc   = (0x01), /* Split Mode Enable - SET */
} TCA_SPLIT_SPLITM_t;

/* Command */
typedef enum TCA_SPLIT_CMD_enum
{
    TCA_SPLIT_CMD_NONE_gc    = (0x00<<2), /* No Command */
    TCA_SPLIT_CMD_UPDATE_gc  = (0x01<<2), /* Force Update */
    TCA_SPLIT_CMD_RESTART_gc = (0x02<<2), /* Force Restart */
    TCA_SPLIT_CMD_RESET_gc   = (0x03<<2), /* Force Hard Reset */
} TCA_SPLIT_CMD_t;

/* Command */
typedef enum TCA_SPLIT_CMD_enum
{
    TCA_SPLIT_CMD_NONE_gc    = (0x00<<2), /* No Command */
    TCA_SPLIT_CMD_UPDATE_gc  = (0x01<<2), /* Force Update */
    TCA_SPLIT_CMD_RESTART_gc = (0x02<<2), /* Force Restart */
    TCA_SPLIT_CMD_RESET_gc   = (0x03<<2), /* Force Hard Reset */
} TCA_SPLIT_CMD_t;

/* Debug Run */
typedef enum TCA_SPLIT_DBGRUN_enum
{
    TCA_SPLIT_DBGRUN_CLEAR_gc = (0x00), /* Debug Run - CLEAR */
    TCA_SPLIT_DBGRUN_SET_gc   = (0x01), /* Debug Run - SET */
} TCA_SPLIT_DBGRUN_t;

/* High Underflow Interrupt Enable */
typedef enum TCA_SPLIT_HUNF_enum
{
    TCA_SPLIT_HUNF_CLEAR_gc = (0x00), /* High Underflow Interrupt Enable - CLEAR */
    TCA_SPLIT_HUNF_SET_gc   = (0x02), /* High Underflow Interrupt Enable - SET */
} TCA_SPLIT_HUNF_t;

/* Low Compare 0 Interrupt Enable */
typedef enum TCA_SPLIT_LCMP0_enum
{
    TCA_SPLIT_LCMP0_CLEAR_gc = (0x00), /* Low Compare 0 Interrupt Enable - CLEAR */
    TCA_SPLIT_LCMP0_SET_gc   = (0x10), /* Low Compare 0 Interrupt Enable - SET */
} TCA_SPLIT_LCMP0_t;

/* Low Compare 1 Interrupt Enable */
typedef enum TCA_SPLIT_LCMP1_enum
{
    TCA_SPLIT_LCMP1_CLEAR_gc = (0x00), /* Low Compare 1 Interrupt Enable - CLEAR */
    TCA_SPLIT_LCMP1_SET_gc   = (0x20), /* Low Compare 1 Interrupt Enable - SET */
} TCA_SPLIT_LCMP1_t;

/* Low Compare 2 Interrupt Enable */
typedef enum TCA_SPLIT_LCMP2_enum
{
    TCA_SPLIT_LCMP2_CLEAR_gc = (0x00), /* Low Compare 2 Interrupt Enable - CLEAR */
    TCA_SPLIT_LCMP2_SET_gc   = (0x40), /* Low Compare 2 Interrupt Enable - SET */
} TCA_SPLIT_LCMP2_t;

/* Low Underflow Interrupt Enable */
typedef enum TCA_SPLIT_LUNF_enum
{
    TCA_SPLIT_LUNF_CLEAR_gc = (0x00), /* Low Underflow Interrupt Enable - CLEAR */
    TCA_SPLIT_LUNF_SET_gc   = (0x01), /* Low Underflow Interrupt Enable - SET */
} TCA_SPLIT_LUNF_t;

/* High Underflow Interrupt Flag */
typedef enum TCA_SPLIT_HUNF_enum
{
    TCA_SPLIT_HUNF_CLEAR_gc = (0x00), /* High Underflow Interrupt Flag - CLEAR */
    TCA_SPLIT_HUNF_SET_gc   = (0x02), /* High Underflow Interrupt Flag - SET */
} TCA_SPLIT_HUNF_t;

/* Low Compare 2 Interrupt Flag */
typedef enum TCA_SPLIT_LCMP0_enum
{
    TCA_SPLIT_LCMP0_CLEAR_gc = (0x00), /* Low Compare 2 Interrupt Flag - CLEAR */
    TCA_SPLIT_LCMP0_SET_gc   = (0x10), /* Low Compare 2 Interrupt Flag - SET */
} TCA_SPLIT_LCMP0_t;

/* Low Compare 1 Interrupt Flag */
typedef enum TCA_SPLIT_LCMP1_enum
{
    TCA_SPLIT_LCMP1_CLEAR_gc = (0x00), /* Low Compare 1 Interrupt Flag - CLEAR */
    TCA_SPLIT_LCMP1_SET_gc   = (0x20), /* Low Compare 1 Interrupt Flag - SET */
} TCA_SPLIT_LCMP1_t;

/* Low Compare 0 Interrupt Flag */
typedef enum TCA_SPLIT_LCMP2_enum
{
    TCA_SPLIT_LCMP2_CLEAR_gc = (0x00), /* Low Compare 0 Interrupt Flag - CLEAR */
    TCA_SPLIT_LCMP2_SET_gc   = (0x40), /* Low Compare 0 Interrupt Flag - SET */
} TCA_SPLIT_LCMP2_t;

/* Low Underflow Interrupt Flag */
typedef enum TCA_SPLIT_LUNF_enum
{
    TCA_SPLIT_LUNF_CLEAR_gc = (0x00), /* Low Underflow Interrupt Flag - CLEAR */
    TCA_SPLIT_LUNF_SET_gc   = (0x01), /* Low Underflow Interrupt Flag - SET */
} TCA_SPLIT_LUNF_t;

/*
--------------------------------------------------------------------------------
TCB - 16-bit Timer Type B
--------------------------------------------------------------------------------
*/

typedef struct TCB_struct
{
    register8_t CTRLA;       /* Control A */
    register8_t CTRLB;       /* Control Register B */
    register8_t rsv_0x02[2]; /* RESERVED REGISTER BLOCK */
    register8_t EVCTRL;      /* Event Control */
    register8_t INTCTRL;     /* Interrupt Control */
    register8_t INTFLAGS;    /* Interrupt Flags */
    register8_t STATUS;      /* Status */
    register8_t DBGCTRL;     /* Debug Control */
    register8_t TEMP;        /* Temporary Value */
    _REGISTER16 (CNT);       /* Count */
    register8_t rsv_0x0B;    /* RESERVED REGISTER */
    _REGISTER16 (CCMP);      /* Compare or Capture */
} TCB_t;

/* 16-bit Timer/Counter Type A */
typedef union TCA_union {
    TCA_SINGLE_t SINGLE; /* None = 0 */
    TCA_SPLIT_t  SPLIT;  /* None = 1 */
} TCA_t;


/* Clock Select */
typedef enum TCB_CLKSEL_enum
{
    TCB_CLKSEL_CLKDIV1_gc = (0x00<<1), /* CLK_PER (No Prescaling) */
    TCB_CLKSEL_CLKDIV2_gc = (0x01<<1), /* CLK_PER/2 (From Prescaler) */
    TCB_CLKSEL_CLKTCA_gc  = (0x02<<1), /* Use Clock from TCA */
} TCB_CLKSEL_t;

/* Enable */
typedef enum TCB_ENABLE_enum
{
    TCB_ENABLE_CLEAR_gc = (0x00), /* Enable - CLEAR */
    TCB_ENABLE_SET_gc   = (0x01), /* Enable - SET */
} TCB_ENABLE_t;

/* Run Standby */
typedef enum TCB_RUNSTDBY_enum
{
    TCB_RUNSTDBY_CLEAR_gc = (0x00), /* Run Standby - CLEAR */
    TCB_RUNSTDBY_SET_gc   = (0x40), /* Run Standby - SET */
} TCB_RUNSTDBY_t;

/* Synchronize Update */
typedef enum TCB_SYNCUPD_enum
{
    TCB_SYNCUPD_CLEAR_gc = (0x00), /* Synchronize Update - CLEAR */
    TCB_SYNCUPD_SET_gc   = (0x10), /* Synchronize Update - SET */
} TCB_SYNCUPD_t;

/* Asynchronous Enable */
typedef enum TCB_ASYNC_enum
{
    TCB_ASYNC_CLEAR_gc = (0x00), /* Asynchronous Enable - CLEAR */
    TCB_ASYNC_SET_gc   = (0x40), /* Asynchronous Enable - SET */
} TCB_ASYNC_t;

/* Pin Output Enable */
typedef enum TCB_CCMPEN_enum
{
    TCB_CCMPEN_CLEAR_gc = (0x00), /* Pin Output Enable - CLEAR */
    TCB_CCMPEN_SET_gc   = (0x10), /* Pin Output Enable - SET */
} TCB_CCMPEN_t;

/* Pin Initial State */
typedef enum TCB_CCMPINIT_enum
{
    TCB_CCMPINIT_CLEAR_gc = (0x00), /* Pin Initial State - CLEAR */
    TCB_CCMPINIT_SET_gc   = (0x20), /* Pin Initial State - SET */
} TCB_CCMPINIT_t;

/* Timer Mode */
typedef enum TCB_CNTMODE_enum
{
    TCB_CNTMODE_INT_gc     = (0x00), /* Periodic Interrupt */
    TCB_CNTMODE_TIMEOUT_gc = (0x01), /* Periodic Timeout */
    TCB_CNTMODE_CAPT_gc    = (0x02), /* Input Capture Event */
    TCB_CNTMODE_FRQ_gc     = (0x03), /* Input Capture Frequency measurement */
    TCB_CNTMODE_PW_gc      = (0x04), /* Input Capture Pulse-Width measurement */
    TCB_CNTMODE_FRQPW_gc   = (0x05), /* Input Capture Frequency and Pulse-Width measurement */
    TCB_CNTMODE_SINGLE_gc  = (0x06), /* Single Shot */
    TCB_CNTMODE_PWM8_gc    = (0x07), /* 8-bit PWM */
} TCB_CNTMODE_t;

/* Debug Run */
typedef enum TCB_DBGRUN_enum
{
    TCB_DBGRUN_CLEAR_gc = (0x00), /* Debug Run - CLEAR */
    TCB_DBGRUN_SET_gc   = (0x01), /* Debug Run - SET */
} TCB_DBGRUN_t;

/* Event Input Enable */
typedef enum TCB_CAPTEI_enum
{
    TCB_CAPTEI_CLEAR_gc = (0x00), /* Event Input Enable - CLEAR */
    TCB_CAPTEI_SET_gc   = (0x01), /* Event Input Enable - SET */
} TCB_CAPTEI_t;

/* Event Edge */
typedef enum TCB_EDGE_enum
{
    TCB_EDGE_CLEAR_gc = (0x00), /* Event Edge - CLEAR */
    TCB_EDGE_SET_gc   = (0x10), /* Event Edge - SET */
} TCB_EDGE_t;

/* Input Capture Noise Cancellation Filter */
typedef enum TCB_FILTER_enum
{
    TCB_FILTER_CLEAR_gc = (0x00), /* Input Capture Noise Cancellation Filter - CLEAR */
    TCB_FILTER_SET_gc   = (0x40), /* Input Capture Noise Cancellation Filter - SET */
} TCB_FILTER_t;

/* Capture or Timeout */
typedef enum TCB_CAPT_enum
{
    TCB_CAPT_CLEAR_gc = (0x00), /* Capture or Timeout - CLEAR */
    TCB_CAPT_SET_gc   = (0x01), /* Capture or Timeout - SET */
} TCB_CAPT_t;

/* Capture or Timeout */
typedef enum TCB_CAPT_enum
{
    TCB_CAPT_CLEAR_gc = (0x00), /* Capture or Timeout - CLEAR */
    TCB_CAPT_SET_gc   = (0x01), /* Capture or Timeout - SET */
} TCB_CAPT_t;

/* Run */
typedef enum TCB_RUN_enum
{
    TCB_RUN_CLEAR_gc = (0x00), /* Run - CLEAR */
    TCB_RUN_SET_gc   = (0x01), /* Run - SET */
} TCB_RUN_t;

/*
--------------------------------------------------------------------------------
TWI - Two-Wire Interface
--------------------------------------------------------------------------------
*/

typedef struct TWI_struct
{
    register8_t CTRLA;     /* Control A */
    register8_t DUALCTRL;  /* Dual Control */
    register8_t DBGCTRL;   /* Debug Control Register */
    register8_t MCTRLA;    /* Master Control A */
    register8_t MCTRLB;    /* Master Control B */
    register8_t MSTATUS;   /* Master Status */
    register8_t MBAUD;     /* Master Baurd Rate Control */
    register8_t MADDR;     /* Master Address */
    register8_t MDATA;     /* Master Data */
    register8_t SCTRLA;    /* Slave Control A */
    register8_t SCTRLB;    /* Slave Control B */
    register8_t SSTATUS;   /* Slave Status */
    register8_t SADDR;     /* Slave Address */
    register8_t SDATA;     /* Slave Data */
    register8_t SADDRMASK; /* Slave Address Mask */
} TWI_t;

/* 16-bit Timer/Counter Type A */
typedef union TCA_union {
    TCA_SINGLE_t SINGLE; /* None = 0 */
    TCA_SPLIT_t  SPLIT;  /* None = 1 */
} TCA_t;


/* FM Plus Enable */
typedef enum TWI_DEFAULT_FMPEN_enum
{
    TWI_DEFAULT_FMPEN_CLEAR_gc = (0x00), /* FM Plus Enable - CLEAR */
    TWI_DEFAULT_FMPEN_SET_gc   = (0x02), /* FM Plus Enable - SET */
} TWI_DEFAULT_FMPEN_t;

/* SDA Hold Time */
typedef enum TWI_DEFAULT_SDAHOLD_enum
{
    TWI_DEFAULT_SDAHOLD_OFF_gc   = (0x00<<2), /* SDA hold time off */
    TWI_DEFAULT_SDAHOLD_50NS_gc  = (0x01<<2), /* Typical 50ns hold time */
    TWI_DEFAULT_SDAHOLD_300NS_gc = (0x02<<2), /* Typical 300ns hold time */
    TWI_DEFAULT_SDAHOLD_500NS_gc = (0x03<<2), /* Typical 500ns hold time */
} TWI_DEFAULT_SDAHOLD_t;

/* SDA Setup Time */
typedef enum TWI_DEFAULT_SDASETUP_enum
{
    TWI_DEFAULT_SDASETUP_4CYC_gc = (0x00<<4), /* SDA setup time is 4 clock cycles */
    TWI_DEFAULT_SDASETUP_8CYC_gc = (0x01<<4), /* SDA setup time is 8 clock cycles */
} TWI_DEFAULT_SDASETUP_t;

/* Debug Run */
typedef enum TWI_DEFAULT_DBGRUN_enum
{
    TWI_DEFAULT_DBGRUN_CLEAR_gc = (0x00), /* Debug Run - CLEAR */
    TWI_DEFAULT_DBGRUN_SET_gc   = (0x01), /* Debug Run - SET */
} TWI_DEFAULT_DBGRUN_t;

/* Dual Control Enable */
typedef enum TWI_DEFAULT_ENABLE_enum
{
    TWI_DEFAULT_ENABLE_CLEAR_gc = (0x00), /* Dual Control Enable - CLEAR */
    TWI_DEFAULT_ENABLE_SET_gc   = (0x01), /* Dual Control Enable - SET */
} TWI_DEFAULT_ENABLE_t;

/* FM Plus Enable */
typedef enum TWI_DEFAULT_FMPEN_enum
{
    TWI_DEFAULT_FMPEN_CLEAR_gc = (0x00), /* FM Plus Enable - CLEAR */
    TWI_DEFAULT_FMPEN_SET_gc   = (0x02), /* FM Plus Enable - SET */
} TWI_DEFAULT_FMPEN_t;

/* SDA Hold Time */
typedef enum TWI_DEFAULT_SDAHOLD_enum
{
    TWI_DEFAULT_SDAHOLD_OFF_gc   = (0x00<<2), /* SDA hold time off */
    TWI_DEFAULT_SDAHOLD_50NS_gc  = (0x01<<2), /* Typical 50ns hold time */
    TWI_DEFAULT_SDAHOLD_300NS_gc = (0x02<<2), /* Typical 300ns hold time */
    TWI_DEFAULT_SDAHOLD_500NS_gc = (0x03<<2), /* Typical 500ns hold time */
} TWI_DEFAULT_SDAHOLD_t;

/* Enable TWI Master */
typedef enum TWI_ENABLE_enum
{
    TWI_ENABLE_CLEAR_gc = (0x00), /* Enable TWI Master - CLEAR */
    TWI_ENABLE_SET_gc   = (0x01), /* Enable TWI Master - SET */
} TWI_ENABLE_t;

/* Quick Command Enable */
typedef enum TWI_QCEN_enum
{
    TWI_QCEN_CLEAR_gc = (0x00), /* Quick Command Enable - CLEAR */
    TWI_QCEN_SET_gc   = (0x10), /* Quick Command Enable - SET */
} TWI_QCEN_t;

/* Read Interrupt Enable */
typedef enum TWI_RIEN_enum
{
    TWI_RIEN_CLEAR_gc = (0x00), /* Read Interrupt Enable - CLEAR */
    TWI_RIEN_SET_gc   = (0x80), /* Read Interrupt Enable - SET */
} TWI_RIEN_t;

/* Smart Mode Enable */
typedef enum TWI_SMEN_enum
{
    TWI_SMEN_CLEAR_gc = (0x00), /* Smart Mode Enable - CLEAR */
    TWI_SMEN_SET_gc   = (0x02), /* Smart Mode Enable - SET */
} TWI_SMEN_t;

/* Inactive Bus Timeout */
typedef enum TWI_TIMEOUT_enum
{
    TWI_TIMEOUT_DISABLED_gc = (0x00<<2), /* Bus Timeout Disabled */
    TWI_TIMEOUT_50US_gc     = (0x01<<2), /* 50 Microseconds */
    TWI_TIMEOUT_100US_gc    = (0x02<<2), /* 100 Microseconds */
    TWI_TIMEOUT_200US_gc    = (0x03<<2), /* 200 Microseconds */
} TWI_TIMEOUT_t;

/* Write Interrupt Enable */
typedef enum TWI_WIEN_enum
{
    TWI_WIEN_CLEAR_gc = (0x00), /* Write Interrupt Enable - CLEAR */
    TWI_WIEN_SET_gc   = (0x40), /* Write Interrupt Enable - SET */
} TWI_WIEN_t;

/* Acknowledge Action */
typedef enum TWI_ACKACT_enum
{
    TWI_ACKACT_ACK_gc  = (0x00<<2), /* Send ACK */
    TWI_ACKACT_NACK_gc = (0x01<<2), /* Send NACK */
} TWI_ACKACT_t;

/* Flush */
typedef enum TWI_FLUSH_enum
{
    TWI_FLUSH_CLEAR_gc = (0x00), /* Flush - CLEAR */
    TWI_FLUSH_SET_gc   = (0x08), /* Flush - SET */
} TWI_FLUSH_t;

/* Command */
typedef enum TWI_MCMD_enum
{
    TWI_MCMD_NOACT_gc     = (0x00), /* No Action */
    TWI_MCMD_REPSTART_gc  = (0x01), /* Issue Repeated Start Condition */
    TWI_MCMD_RECVTRANS_gc = (0x02), /* Receive or Transmit Data, depending on DIR */
    TWI_MCMD_STOP_gc      = (0x03), /* Issue Stop Condition */
} TWI_MCMD_t;

/* Arbitration Lost */
typedef enum TWI_ARBLOST_enum
{
    TWI_ARBLOST_CLEAR_gc = (0x00), /* Arbitration Lost - CLEAR */
    TWI_ARBLOST_SET_gc   = (0x08), /* Arbitration Lost - SET */
} TWI_ARBLOST_t;

/* Bus Error */
typedef enum TWI_BUSERR_enum
{
    TWI_BUSERR_CLEAR_gc = (0x00), /* Bus Error - CLEAR */
    TWI_BUSERR_SET_gc   = (0x04), /* Bus Error - SET */
} TWI_BUSERR_t;

/* Bus State */
typedef enum TWI_BUSSTATE_enum
{
    TWI_BUSSTATE_UNKNOWN_gc = (0x00), /* Unknown Bus State */
    TWI_BUSSTATE_IDLE_gc    = (0x01), /* Bus is Idle */
    TWI_BUSSTATE_OWNER_gc   = (0x02), /* This Module Controls The Bus */
    TWI_BUSSTATE_BUSY_gc    = (0x03), /* The Bus is Busy */
} TWI_BUSSTATE_t;

/* Clock Hold */
typedef enum TWI_CLKHOLD_enum
{
    TWI_CLKHOLD_CLEAR_gc = (0x00), /* Clock Hold - CLEAR */
    TWI_CLKHOLD_SET_gc   = (0x20), /* Clock Hold - SET */
} TWI_CLKHOLD_t;

/* Read Interrupt Flag */
typedef enum TWI_RIF_enum
{
    TWI_RIF_CLEAR_gc = (0x00), /* Read Interrupt Flag - CLEAR */
    TWI_RIF_SET_gc   = (0x80), /* Read Interrupt Flag - SET */
} TWI_RIF_t;

/* Received Acknowledge */
typedef enum TWI_RXACK_enum
{
    TWI_RXACK_CLEAR_gc = (0x00), /* Received Acknowledge - CLEAR */
    TWI_RXACK_SET_gc   = (0x10), /* Received Acknowledge - SET */
} TWI_RXACK_t;

/* Write Interrupt Flag */
typedef enum TWI_WIF_enum
{
    TWI_WIF_CLEAR_gc = (0x00), /* Write Interrupt Flag - CLEAR */
    TWI_WIF_SET_gc   = (0x40), /* Write Interrupt Flag - SET */
} TWI_WIF_t;

/* Address Enable */
typedef enum TWI_ADDREN_enum
{
    TWI_ADDREN_CLEAR_gc = (0x00), /* Address Enable - CLEAR */
    TWI_ADDREN_SET_gc   = (0x01), /* Address Enable - SET */
} TWI_ADDREN_t;

/* Address Mask */
#define TWI_SADDRMASK_ADDRMASK_gc(x) ((x<<1) & 0xFE)

/* Address/Stop Interrupt Enable */
typedef enum TWI_APIEN_enum
{
    TWI_APIEN_CLEAR_gc = (0x00), /* Address/Stop Interrupt Enable - CLEAR */
    TWI_APIEN_SET_gc   = (0x40), /* Address/Stop Interrupt Enable - SET */
} TWI_APIEN_t;

/* Data Interrupt Enable */
typedef enum TWI_DIEN_enum
{
    TWI_DIEN_CLEAR_gc = (0x00), /* Data Interrupt Enable - CLEAR */
    TWI_DIEN_SET_gc   = (0x80), /* Data Interrupt Enable - SET */
} TWI_DIEN_t;

/* Enable TWI Slave */
typedef enum TWI_ENABLE_enum
{
    TWI_ENABLE_CLEAR_gc = (0x00), /* Enable TWI Slave - CLEAR */
    TWI_ENABLE_SET_gc   = (0x01), /* Enable TWI Slave - SET */
} TWI_ENABLE_t;

/* Stop Interrupt Enable */
typedef enum TWI_PIEN_enum
{
    TWI_PIEN_CLEAR_gc = (0x00), /* Stop Interrupt Enable - CLEAR */
    TWI_PIEN_SET_gc   = (0x20), /* Stop Interrupt Enable - SET */
} TWI_PIEN_t;

/* Promiscuous Mode Enable */
typedef enum TWI_PMEN_enum
{
    TWI_PMEN_CLEAR_gc = (0x00), /* Promiscuous Mode Enable - CLEAR */
    TWI_PMEN_SET_gc   = (0x04), /* Promiscuous Mode Enable - SET */
} TWI_PMEN_t;

/* Smart Mode Enable */
typedef enum TWI_SMEN_enum
{
    TWI_SMEN_CLEAR_gc = (0x00), /* Smart Mode Enable - CLEAR */
    TWI_SMEN_SET_gc   = (0x02), /* Smart Mode Enable - SET */
} TWI_SMEN_t;

/* Acknowledge Action */
typedef enum TWI_ACKACT_enum
{
    TWI_ACKACT_ACK_gc  = (0x00<<2), /* Send ACK */
    TWI_ACKACT_NACK_gc = (0x01<<2), /* Send NACK */
} TWI_ACKACT_t;

/* Command */
typedef enum TWI_SCMD_enum
{
    TWI_SCMD_NOACT_gc     = (0x00), /* No Action */
    TWI_SCMD_COMPTRANS_gc = (0x02), /* Used To Complete a Transaction */
    TWI_SCMD_RESPONSE_gc  = (0x03), /* Used in Response to Address/Data Interrupt */
} TWI_SCMD_t;

/* Slave Address or Stop */
typedef enum TWI_AP_enum
{
    TWI_AP_STOP_gc = (0x00), /* Stop condition generated APIF */
    TWI_AP_ADR_gc  = (0x01), /* Address detection generated APIF */
} TWI_AP_t;

/* Address/Stop Interrupt Flag */
typedef enum TWI_APIF_enum
{
    TWI_APIF_CLEAR_gc = (0x00), /* Address/Stop Interrupt Flag - CLEAR */
    TWI_APIF_SET_gc   = (0x40), /* Address/Stop Interrupt Flag - SET */
} TWI_APIF_t;

/* Bus Error */
typedef enum TWI_BUSERR_enum
{
    TWI_BUSERR_CLEAR_gc = (0x00), /* Bus Error - CLEAR */
    TWI_BUSERR_SET_gc   = (0x04), /* Bus Error - SET */
} TWI_BUSERR_t;

/* Clock Hold */
typedef enum TWI_CLKHOLD_enum
{
    TWI_CLKHOLD_CLEAR_gc = (0x00), /* Clock Hold - CLEAR */
    TWI_CLKHOLD_SET_gc   = (0x20), /* Clock Hold - SET */
} TWI_CLKHOLD_t;

/* Collision */
typedef enum TWI_COLL_enum
{
    TWI_COLL_CLEAR_gc = (0x00), /* Collision - CLEAR */
    TWI_COLL_SET_gc   = (0x08), /* Collision - SET */
} TWI_COLL_t;

/* Data Interrupt Flag */
typedef enum TWI_DIF_enum
{
    TWI_DIF_CLEAR_gc = (0x00), /* Data Interrupt Flag - CLEAR */
    TWI_DIF_SET_gc   = (0x80), /* Data Interrupt Flag - SET */
} TWI_DIF_t;

/* Read/Write Direction */
typedef enum TWI_DIR_enum
{
    TWI_DIR_CLEAR_gc = (0x00), /* Read/Write Direction - CLEAR */
    TWI_DIR_SET_gc   = (0x02), /* Read/Write Direction - SET */
} TWI_DIR_t;

/* Received Acknowledge */
typedef enum TWI_RXACK_enum
{
    TWI_RXACK_CLEAR_gc = (0x00), /* Received Acknowledge - CLEAR */
    TWI_RXACK_SET_gc   = (0x10), /* Received Acknowledge - SET */
} TWI_RXACK_t;

/*
--------------------------------------------------------------------------------
USART - Universal Synchronous and Asynchronous Receiver and Transmitter
--------------------------------------------------------------------------------
*/

typedef struct USART_struct
{
    register8_t RXDATAL;  /* Receive Data Low Byte */
    register8_t RXDATAH;  /* Receive Data High Byte */
    register8_t TXDATAL;  /* Transmit Data Low Byte */
    register8_t TXDATAH;  /* Transmit Data High Byte */
    register8_t STATUS;   /* Status */
    register8_t CTRLA;    /* Control A */
    register8_t CTRLB;    /* Control B */
    register8_t CTRLC;    /* Control C */
    _REGISTER16 (BAUD);   /* Baud Rate */
    register8_t rsv_0x09; /* RESERVED REGISTER */
    register8_t CTRLD;    /* Control D */
    register8_t DBGCTRL;  /* Debug Control */
    register8_t EVCTRL;   /* Event Control */
    register8_t TXPLCTRL; /* IRCOM Transmitter Pulse Length Control */
    register8_t RXPLCTRL; /* IRCOM Receiver Pulse Length Control */
} USART_t;

/* 16-bit Timer/Counter Type A */
typedef union TCA_union {
    TCA_SINGLE_t SINGLE; /* None = 0 */
    TCA_SPLIT_t  SPLIT;  /* None = 1 */
} TCA_t;


/* Auto-baud Error Interrupt Enable */
typedef enum USART_ABEIE_enum
{
    USART_ABEIE_CLEAR_gc = (0x00), /* Auto-baud Error Interrupt Enable - CLEAR */
    USART_ABEIE_SET_gc   = (0x04), /* Auto-baud Error Interrupt Enable - SET */
} USART_ABEIE_t;

/* Data Register Empty Interrupt Enable */
typedef enum USART_DREIE_enum
{
    USART_DREIE_CLEAR_gc = (0x00), /* Data Register Empty Interrupt Enable - CLEAR */
    USART_DREIE_SET_gc   = (0x20), /* Data Register Empty Interrupt Enable - SET */
} USART_DREIE_t;

/* Loop-back Mode Enable */
typedef enum USART_LBME_enum
{
    USART_LBME_CLEAR_gc = (0x00), /* Loop-back Mode Enable - CLEAR */
    USART_LBME_SET_gc   = (0x08), /* Loop-back Mode Enable - SET */
} USART_LBME_t;

/* RS485 Mode internal transmitter */
typedef enum USART_RS485_enum
{
    USART_RS485_OFF_gc = (0x00), /* RS485 Mode disabled */
    USART_RS485_EXT_gc = (0x01), /* RS485 Mode External drive */
    USART_RS485_INT_gc = (0x02), /* RS485 Mode Internal drive */
} USART_RS485_t;

/* Receive Complete Interrupt Enable */
typedef enum USART_RXCIE_enum
{
    USART_RXCIE_CLEAR_gc = (0x00), /* Receive Complete Interrupt Enable - CLEAR */
    USART_RXCIE_SET_gc   = (0x80), /* Receive Complete Interrupt Enable - SET */
} USART_RXCIE_t;

/* Receiver Start Frame Interrupt Enable */
typedef enum USART_RXSIE_enum
{
    USART_RXSIE_CLEAR_gc = (0x00), /* Receiver Start Frame Interrupt Enable - CLEAR */
    USART_RXSIE_SET_gc   = (0x10), /* Receiver Start Frame Interrupt Enable - SET */
} USART_RXSIE_t;

/* Transmit Complete Interrupt Enable */
typedef enum USART_TXCIE_enum
{
    USART_TXCIE_CLEAR_gc = (0x00), /* Transmit Complete Interrupt Enable - CLEAR */
    USART_TXCIE_SET_gc   = (0x40), /* Transmit Complete Interrupt Enable - SET */
} USART_TXCIE_t;

/* Multi-processor Communication Mode */
typedef enum USART_MPCM_enum
{
    USART_MPCM_CLEAR_gc = (0x00), /* Multi-processor Communication Mode - CLEAR */
    USART_MPCM_SET_gc   = (0x01), /* Multi-processor Communication Mode - SET */
} USART_MPCM_t;

/* Open Drain Mode Enable */
typedef enum USART_ODME_enum
{
    USART_ODME_CLEAR_gc = (0x00), /* Open Drain Mode Enable - CLEAR */
    USART_ODME_SET_gc   = (0x08), /* Open Drain Mode Enable - SET */
} USART_ODME_t;

/* Reciever enable */
typedef enum USART_RXEN_enum
{
    USART_RXEN_CLEAR_gc = (0x00), /* Reciever enable - CLEAR */
    USART_RXEN_SET_gc   = (0x80), /* Reciever enable - SET */
} USART_RXEN_t;

/* Receiver Mode */
typedef enum USART_RXMODE_enum
{
    USART_RXMODE_NORMAL_gc  = (0x00<<1), /* Normal mode */
    USART_RXMODE_CLK2X_gc   = (0x01<<1), /* CLK2x mode */
    USART_RXMODE_GENAUTO_gc = (0x02<<1), /* Generic autobaud mode */
    USART_RXMODE_LINAUTO_gc = (0x03<<1), /* LIN constrained autobaud mode */
} USART_RXMODE_t;

/* Start Frame Detection Enable */
typedef enum USART_SFDEN_enum
{
    USART_SFDEN_CLEAR_gc = (0x00), /* Start Frame Detection Enable - CLEAR */
    USART_SFDEN_SET_gc   = (0x10), /* Start Frame Detection Enable - SET */
} USART_SFDEN_t;

/* Transmitter Enable */
typedef enum USART_TXEN_enum
{
    USART_TXEN_CLEAR_gc = (0x00), /* Transmitter Enable - CLEAR */
    USART_TXEN_SET_gc   = (0x40), /* Transmitter Enable - SET */
} USART_TXEN_t;

/* Communication Mode */
typedef enum USART_MSPI_CMODE_enum
{
    USART_MSPI_CMODE_ASYNCHRONOUS_gc = (0x00<<6), /* Asynchronous Mode */
    USART_MSPI_CMODE_SYNCHRONOUS_gc  = (0x01<<6), /* Synchronous Mode */
    USART_MSPI_CMODE_IRCOM_gc        = (0x02<<6), /* Infrared Communication */
    USART_MSPI_CMODE_MSPI_gc         = (0x03<<6), /* Master SPI Mode */
} USART_MSPI_CMODE_t;

/* SPI Master Mode, Clock Phase */
typedef enum USART_MSPI_UCPHA_enum
{
    USART_MSPI_UCPHA_CLEAR_gc = (0x00), /* SPI Master Mode, Clock Phase - CLEAR */
    USART_MSPI_UCPHA_SET_gc   = (0x02), /* SPI Master Mode, Clock Phase - SET */
} USART_MSPI_UCPHA_t;

/* SPI Master Mode, Data Order */
typedef enum USART_MSPI_UDORD_enum
{
    USART_MSPI_UDORD_CLEAR_gc = (0x00), /* SPI Master Mode, Data Order - CLEAR */
    USART_MSPI_UDORD_SET_gc   = (0x04), /* SPI Master Mode, Data Order - SET */
} USART_MSPI_UDORD_t;

/* Character Size */
typedef enum USART_NORMAL_CHSIZE_enum
{
    USART_NORMAL_CHSIZE_5BIT_gc  = (0x00), /* Character size: 5 bit */
    USART_NORMAL_CHSIZE_6BIT_gc  = (0x01), /* Character size: 6 bit */
    USART_NORMAL_CHSIZE_7BIT_gc  = (0x02), /* Character size: 7 bit */
    USART_NORMAL_CHSIZE_8BIT_gc  = (0x03), /* Character size: 8 bit */
    USART_NORMAL_CHSIZE_9BITL_gc = (0x06), /* Character size: 9 bit read low byte first */
    USART_NORMAL_CHSIZE_9BITH_gc = (0x07), /* Character size: 9 bit read high byte first */
} USART_NORMAL_CHSIZE_t;

/* Communication Mode */
typedef enum USART_NORMAL_CMODE_enum
{
    USART_NORMAL_CMODE_ASYNCHRONOUS_gc = (0x00<<6), /* Asynchronous Mode */
    USART_NORMAL_CMODE_SYNCHRONOUS_gc  = (0x01<<6), /* Synchronous Mode */
    USART_NORMAL_CMODE_IRCOM_gc        = (0x02<<6), /* Infrared Communication */
    USART_NORMAL_CMODE_MSPI_gc         = (0x03<<6), /* Master SPI Mode */
} USART_NORMAL_CMODE_t;

/* Parity Mode */
typedef enum USART_NORMAL_PMODE_enum
{
    USART_NORMAL_PMODE_DISABLED_gc = (0x00<<4), /* No Parity */
    USART_NORMAL_PMODE_EVEN_gc     = (0x02<<4), /* Even Parity */
    USART_NORMAL_PMODE_ODD_gc      = (0x03<<4), /* Odd Parity */
} USART_NORMAL_PMODE_t;

/* Stop Bit Mode */
typedef enum USART_NORMAL_SBMODE_enum
{
    USART_NORMAL_SBMODE_1BIT_gc = (0x00<<3), /* 1 stop bit */
    USART_NORMAL_SBMODE_2BIT_gc = (0x01<<3), /* 2 stop bits */
} USART_NORMAL_SBMODE_t;

/* Auto Baud Window */
typedef enum USART_ABW_enum
{
    USART_ABW_WDW0_gc = (0x00<<6), /* 18% tolerance */
    USART_ABW_WDW1_gc = (0x01<<6), /* 15% tolerance */
    USART_ABW_WDW2_gc = (0x02<<6), /* 21% tolerance */
    USART_ABW_WDW3_gc = (0x03<<6), /* 25% tolerance */
} USART_ABW_t;

/* Autobaud majority voter bypass */
typedef enum USART_ABMBP_enum
{
    USART_ABMBP_CLEAR_gc = (0x00), /* Autobaud majority voter bypass - CLEAR */
    USART_ABMBP_SET_gc   = (0x80), /* Autobaud majority voter bypass - SET */
} USART_ABMBP_t;

/* Debug Run */
typedef enum USART_DBGRUN_enum
{
    USART_DBGRUN_CLEAR_gc = (0x00), /* Debug Run - CLEAR */
    USART_DBGRUN_SET_gc   = (0x01), /* Debug Run - SET */
} USART_DBGRUN_t;

/* IrDA Event Input Enable */
typedef enum USART_IREI_enum
{
    USART_IREI_CLEAR_gc = (0x00), /* IrDA Event Input Enable - CLEAR */
    USART_IREI_SET_gc   = (0x01), /* IrDA Event Input Enable - SET */
} USART_IREI_t;

/* Buffer Overflow */
typedef enum USART_BUFOVF_enum
{
    USART_BUFOVF_CLEAR_gc = (0x00), /* Buffer Overflow - CLEAR */
    USART_BUFOVF_SET_gc   = (0x40), /* Buffer Overflow - SET */
} USART_BUFOVF_t;

/* Receiver Data Register */
typedef enum USART_DATA8_enum
{
    USART_DATA8_CLEAR_gc = (0x00), /* Receiver Data Register - CLEAR */
    USART_DATA8_SET_gc   = (0x01), /* Receiver Data Register - SET */
} USART_DATA8_t;

/* Frame Error */
typedef enum USART_FERR_enum
{
    USART_FERR_CLEAR_gc = (0x00), /* Frame Error - CLEAR */
    USART_FERR_SET_gc   = (0x04), /* Frame Error - SET */
} USART_FERR_t;

/* Parity Error */
typedef enum USART_PERR_enum
{
    USART_PERR_CLEAR_gc = (0x00), /* Parity Error - CLEAR */
    USART_PERR_SET_gc   = (0x02), /* Parity Error - SET */
} USART_PERR_t;

/* Receive Complete Interrupt Flag */
typedef enum USART_RXCIF_enum
{
    USART_RXCIF_CLEAR_gc = (0x00), /* Receive Complete Interrupt Flag - CLEAR */
    USART_RXCIF_SET_gc   = (0x80), /* Receive Complete Interrupt Flag - SET */
} USART_RXCIF_t;

/* Break Detected Flag */
typedef enum USART_BDF_enum
{
    USART_BDF_CLEAR_gc = (0x00), /* Break Detected Flag - CLEAR */
    USART_BDF_SET_gc   = (0x02), /* Break Detected Flag - SET */
} USART_BDF_t;

/* Data Register Empty Flag */
typedef enum USART_DREIF_enum
{
    USART_DREIF_CLEAR_gc = (0x00), /* Data Register Empty Flag - CLEAR */
    USART_DREIF_SET_gc   = (0x20), /* Data Register Empty Flag - SET */
} USART_DREIF_t;

/* Inconsistent Sync Field Interrupt Flag */
typedef enum USART_ISFIF_enum
{
    USART_ISFIF_CLEAR_gc = (0x00), /* Inconsistent Sync Field Interrupt Flag - CLEAR */
    USART_ISFIF_SET_gc   = (0x08), /* Inconsistent Sync Field Interrupt Flag - SET */
} USART_ISFIF_t;

/* Receive Complete Interrupt Flag */
typedef enum USART_RXCIF_enum
{
    USART_RXCIF_CLEAR_gc = (0x00), /* Receive Complete Interrupt Flag - CLEAR */
    USART_RXCIF_SET_gc   = (0x80), /* Receive Complete Interrupt Flag - SET */
} USART_RXCIF_t;

/* Receive Start Interrupt */
typedef enum USART_RXSIF_enum
{
    USART_RXSIF_CLEAR_gc = (0x00), /* Receive Start Interrupt - CLEAR */
    USART_RXSIF_SET_gc   = (0x10), /* Receive Start Interrupt - SET */
} USART_RXSIF_t;

/* Transmit Interrupt Flag */
typedef enum USART_TXCIF_enum
{
    USART_TXCIF_CLEAR_gc = (0x00), /* Transmit Interrupt Flag - CLEAR */
    USART_TXCIF_SET_gc   = (0x40), /* Transmit Interrupt Flag - SET */
} USART_TXCIF_t;

/* Wait For Break */
typedef enum USART_WFB_enum
{
    USART_WFB_CLEAR_gc = (0x00), /* Wait For Break - CLEAR */
    USART_WFB_SET_gc   = (0x01), /* Wait For Break - SET */
} USART_WFB_t;

/* Transmit Data Register (CHSIZE=9bit) */
typedef enum USART_DATA8_enum
{
    USART_DATA8_CLEAR_gc = (0x00), /* Transmit Data Register (CHSIZE=9bit) - CLEAR */
    USART_DATA8_SET_gc   = (0x01), /* Transmit Data Register (CHSIZE=9bit) - SET */
} USART_DATA8_t;

/*
--------------------------------------------------------------------------------
USERROW - User Row
--------------------------------------------------------------------------------
*/

typedef struct USERROW_struct
{
    register8_t USERROW0;  /* User Row Byte 0 */
    register8_t USERROW1;  /* User Row Byte 1 */
    register8_t USERROW2;  /* User Row Byte 2 */
    register8_t USERROW3;  /* User Row Byte 3 */
    register8_t USERROW4;  /* User Row Byte 4 */
    register8_t USERROW5;  /* User Row Byte 5 */
    register8_t USERROW6;  /* User Row Byte 6 */
    register8_t USERROW7;  /* User Row Byte 7 */
    register8_t USERROW8;  /* User Row Byte 8 */
    register8_t USERROW9;  /* User Row Byte 9 */
    register8_t USERROW10; /* User Row Byte 10 */
    register8_t USERROW11; /* User Row Byte 11 */
    register8_t USERROW12; /* User Row Byte 12 */
    register8_t USERROW13; /* User Row Byte 13 */
    register8_t USERROW14; /* User Row Byte 14 */
    register8_t USERROW15; /* User Row Byte 15 */
    register8_t USERROW16; /* User Row Byte 16 */
    register8_t USERROW17; /* User Row Byte 17 */
    register8_t USERROW18; /* User Row Byte 18 */
    register8_t USERROW19; /* User Row Byte 19 */
    register8_t USERROW20; /* User Row Byte 20 */
    register8_t USERROW21; /* User Row Byte 21 */
    register8_t USERROW22; /* User Row Byte 22 */
    register8_t USERROW23; /* User Row Byte 23 */
    register8_t USERROW24; /* User Row Byte 24 */
    register8_t USERROW25; /* User Row Byte 25 */
    register8_t USERROW26; /* User Row Byte 26 */
    register8_t USERROW27; /* User Row Byte 27 */
    register8_t USERROW28; /* User Row Byte 28 */
    register8_t USERROW29; /* User Row Byte 29 */
    register8_t USERROW30; /* User Row Byte 30 */
    register8_t USERROW31; /* User Row Byte 31 */
    register8_t USERROW32; /* User Row Byte 32 */
    register8_t USERROW33; /* User Row Byte 33 */
    register8_t USERROW34; /* User Row Byte 34 */
    register8_t USERROW35; /* User Row Byte 35 */
    register8_t USERROW36; /* User Row Byte 36 */
    register8_t USERROW37; /* User Row Byte 37 */
    register8_t USERROW38; /* User Row Byte 38 */
    register8_t USERROW39; /* User Row Byte 39 */
    register8_t USERROW40; /* User Row Byte 40 */
    register8_t USERROW41; /* User Row Byte 41 */
    register8_t USERROW42; /* User Row Byte 42 */
    register8_t USERROW43; /* User Row Byte 43 */
    register8_t USERROW44; /* User Row Byte 44 */
    register8_t USERROW45; /* User Row Byte 45 */
    register8_t USERROW46; /* User Row Byte 46 */
    register8_t USERROW47; /* User Row Byte 47 */
    register8_t USERROW48; /* User Row Byte 48 */
    register8_t USERROW49; /* User Row Byte 49 */
    register8_t USERROW50; /* User Row Byte 50 */
    register8_t USERROW51; /* User Row Byte 51 */
    register8_t USERROW52; /* User Row Byte 52 */
    register8_t USERROW53; /* User Row Byte 53 */
    register8_t USERROW54; /* User Row Byte 54 */
    register8_t USERROW55; /* User Row Byte 55 */
    register8_t USERROW56; /* User Row Byte 56 */
    register8_t USERROW57; /* User Row Byte 57 */
    register8_t USERROW58; /* User Row Byte 58 */
    register8_t USERROW59; /* User Row Byte 59 */
    register8_t USERROW60; /* User Row Byte 60 */
    register8_t USERROW61; /* User Row Byte 61 */
    register8_t USERROW62; /* User Row Byte 62 */
    register8_t USERROW63; /* User Row Byte 63 */
} USERROW_t;

/* 16-bit Timer/Counter Type A */
typedef union TCA_union {
    TCA_SINGLE_t SINGLE; /* None = 0 */
    TCA_SPLIT_t  SPLIT;  /* None = 1 */
} TCA_t;


/*
--------------------------------------------------------------------------------
VPORT - Virtual Ports
--------------------------------------------------------------------------------
*/

typedef struct VPORT_struct
{
    register8_t DIR;      /* Data Direction */
    register8_t OUT;      /* Output Value */
    register8_t IN;       /* Input Value */
    register8_t INTFLAGS; /* Interrupt Flags */
} VPORT_t;

/* 16-bit Timer/Counter Type A */
typedef union TCA_union {
    TCA_SINGLE_t SINGLE; /* None = 0 */
    TCA_SPLIT_t  SPLIT;  /* None = 1 */
} TCA_t;


/*
--------------------------------------------------------------------------------
VREF - Voltage reference
--------------------------------------------------------------------------------
*/

typedef struct VREF_struct
{
    register8_t CTRLA; /* Control A */
    register8_t CTRLB; /* Control B */
} VREF_t;

/* 16-bit Timer/Counter Type A */
typedef union TCA_union {
    TCA_SINGLE_t SINGLE; /* None = 0 */
    TCA_SPLIT_t  SPLIT;  /* None = 1 */
} TCA_t;


/* AC0 reference select */
typedef enum VREF_AC0REFSEL_enum
{
    VREF_AC0REFSEL_0V55_gc = (0x00), /* Voltage reference at 0.55V */
    VREF_AC0REFSEL_1V1_gc  = (0x01), /* Voltage reference at 1.1V */
    VREF_AC0REFSEL_2V5_gc  = (0x02), /* Voltage reference at 2.5V */
    VREF_AC0REFSEL_4V34_gc = (0x03), /* Voltage reference at 4.34V */
    VREF_AC0REFSEL_1V5_gc  = (0x04), /* Voltage reference at 1.5V */
    VREF_AC0REFSEL_AVDD_gc = (0x07), /* AVDD */
} VREF_AC0REFSEL_t;

/* ADC0 reference select */
typedef enum VREF_ADC0REFSEL_enum
{
    VREF_ADC0REFSEL_0V55_gc = (0x00<<4), /* Voltage reference at 0.55V */
    VREF_ADC0REFSEL_1V1_gc  = (0x01<<4), /* Voltage reference at 1.1V */
    VREF_ADC0REFSEL_2V5_gc  = (0x02<<4), /* Voltage reference at 2.5V */
    VREF_ADC0REFSEL_4V34_gc = (0x03<<4), /* Voltage reference at 4.34V */
    VREF_ADC0REFSEL_1V5_gc  = (0x04<<4), /* Voltage reference at 1.5V */
} VREF_ADC0REFSEL_t;

/* AC0 DACREF reference enable */
typedef enum VREF_AC0REFEN_enum
{
    VREF_AC0REFEN_CLEAR_gc = (0x00), /* AC0 DACREF reference enable - CLEAR */
    VREF_AC0REFEN_SET_gc   = (0x01), /* AC0 DACREF reference enable - SET */
} VREF_AC0REFEN_t;

/* ADC0 reference enable */
typedef enum VREF_ADC0REFEN_enum
{
    VREF_ADC0REFEN_CLEAR_gc = (0x00), /* ADC0 reference enable - CLEAR */
    VREF_ADC0REFEN_SET_gc   = (0x02), /* ADC0 reference enable - SET */
} VREF_ADC0REFEN_t;

/*
--------------------------------------------------------------------------------
WDT - Watch-Dog Timer
--------------------------------------------------------------------------------
*/

typedef struct WDT_struct
{
    register8_t CTRLA;  /* Control A */
    register8_t STATUS; /* Status */
} WDT_t;

/* 16-bit Timer/Counter Type A */
typedef union TCA_union {
    TCA_SINGLE_t SINGLE; /* None = 0 */
    TCA_SPLIT_t  SPLIT;  /* None = 1 */
} TCA_t;


/* Period */
typedef enum WDT_PERIOD_enum
{
    WDT_PERIOD_OFF_gc    = (0x00), /* Off */
    WDT_PERIOD_8CLK_gc   = (0x01), /* 8 cycles (8ms) */
    WDT_PERIOD_16CLK_gc  = (0x02), /* 16 cycles (16ms) */
    WDT_PERIOD_32CLK_gc  = (0x03), /* 32 cycles (32ms) */
    WDT_PERIOD_64CLK_gc  = (0x04), /* 64 cycles (64ms) */
    WDT_PERIOD_128CLK_gc = (0x05), /* 128 cycles (0.128s) */
    WDT_PERIOD_256CLK_gc = (0x06), /* 256 cycles (0.256s) */
    WDT_PERIOD_512CLK_gc = (0x07), /* 512 cycles (0.512s) */
    WDT_PERIOD_1KCLK_gc  = (0x08), /* 1K cycles (1.0s) */
    WDT_PERIOD_2KCLK_gc  = (0x09), /* 2K cycles (2.0s) */
    WDT_PERIOD_4KCLK_gc  = (0x0A), /* 4K cycles (4.1s) */
    WDT_PERIOD_8KCLK_gc  = (0x0B), /* 8K cycles (8.2s) */
} WDT_PERIOD_t;

/* Window */
typedef enum WDT_WINDOW_enum
{
    WDT_WINDOW_OFF_gc    = (0x00<<4), /* Off */
    WDT_WINDOW_8CLK_gc   = (0x01<<4), /* 8 cycles (8ms) */
    WDT_WINDOW_16CLK_gc  = (0x02<<4), /* 16 cycles (16ms) */
    WDT_WINDOW_32CLK_gc  = (0x03<<4), /* 32 cycles (32ms) */
    WDT_WINDOW_64CLK_gc  = (0x04<<4), /* 64 cycles (64ms) */
    WDT_WINDOW_128CLK_gc = (0x05<<4), /* 128 cycles (0.128s) */
    WDT_WINDOW_256CLK_gc = (0x06<<4), /* 256 cycles (0.256s) */
    WDT_WINDOW_512CLK_gc = (0x07<<4), /* 512 cycles (0.512s) */
    WDT_WINDOW_1KCLK_gc  = (0x08<<4), /* 1K cycles (1.0s) */
    WDT_WINDOW_2KCLK_gc  = (0x09<<4), /* 2K cycles (2.0s) */
    WDT_WINDOW_4KCLK_gc  = (0x0A<<4), /* 4K cycles (4.1s) */
    WDT_WINDOW_8KCLK_gc  = (0x0B<<4), /* 8K cycles (8.2s) */
} WDT_WINDOW_t;

/* Lock enable */
typedef enum WDT_LOCK_enum
{
    WDT_LOCK_CLEAR_gc = (0x00), /* Lock enable - CLEAR */
    WDT_LOCK_SET_gc   = (0x80), /* Lock enable - SET */
} WDT_LOCK_t;

/* Syncronization busy */
typedef enum WDT_SYNCBUSY_enum
{
    WDT_SYNCBUSY_CLEAR_gc = (0x00), /* Syncronization busy - CLEAR */
    WDT_SYNCBUSY_SET_gc   = (0x01), /* Syncronization busy - SET */
} WDT_SYNCBUSY_t;
/*
================================================================================
IO Module Instances. Mapped to memory.
================================================================================
*/

#define VPORTA  (*(VPORT_t *) 0x0000)   /* Virtual Ports */
#define VPORTB  (*(VPORT_t *) 0x0004)   /* Virtual Ports */
#define VPORTC  (*(VPORT_t *) 0x0008)   /* Virtual Ports */
#define VPORTD  (*(VPORT_t *) 0x000C)   /* Virtual Ports */
#define VPORTE  (*(VPORT_t *) 0x0010)   /* Virtual Ports */
#define VPORTF  (*(VPORT_t *) 0x0014)   /* Virtual Ports */
#define GPIO    (*(GPIO_t *) 0x001C)    /* General Purpose IO */
#define CPU     (*(CPU_t *) 0x0030)     /* CPU */
#define RSTCTRL (*(RSTCTRL_t *) 0x0040) /* Reset controller */
#define SLPCTRL (*(SLPCTRL_t *) 0x0050) /* Sleep Controller */
#define CLKCTRL (*(CLKCTRL_t *) 0x0060) /* Clock controller */
#define BOD     (*(BOD_t *) 0x0080)     /* Bod interface */
#define VREF    (*(VREF_t *) 0x00A0)    /* Voltage reference */
#define WDT     (*(WDT_t *) 0x0100)     /* Watch-Dog Timer */
#define CPUINT  (*(CPUINT_t *) 0x0110)  /* Interrupt Controller */
#define CRCSCAN (*(CRCSCAN_t *) 0x0120) /* CRCSCAN */
#define RTC     (*(RTC_t *) 0x0140)     /* Real-Time Counter */
#define EVSYS   (*(EVSYS_t *) 0x0180)   /* Event System */
#define CCL     (*(CCL_t *) 0x01C0)     /* Configurable Custom Logic */
#define PORTA   (*(PORT_t *) 0x0400)    /* I/O Ports */
#define PORTB   (*(PORT_t *) 0x0420)    /* I/O Ports */
#define PORTC   (*(PORT_t *) 0x0440)    /* I/O Ports */
#define PORTD   (*(PORT_t *) 0x0460)    /* I/O Ports */
#define PORTE   (*(PORT_t *) 0x0480)    /* I/O Ports */
#define PORTF   (*(PORT_t *) 0x04A0)    /* I/O Ports */
#define PORTMUX (*(PORTMUX_t *) 0x05E0) /* Port Multiplexer */
#define ADC0    (*(ADC_t *) 0x0600)     /* Analog to Digital Converter */
#define AC0     (*(AC_t *) 0x0680)      /* Analog Comparator */
#define USART0  (*(USART_t *) 0x0800)   /* Universal Synchronous and Asynchronous Receiver and Transmitter */
#define USART1  (*(USART_t *) 0x0820)   /* Universal Synchronous and Asynchronous Receiver and Transmitter */
#define USART2  (*(USART_t *) 0x0840)   /* Universal Synchronous and Asynchronous Receiver and Transmitter */
#define TWI0    (*(TWI_t *) 0x08A0)     /* Two-Wire Interface */
#define SPI0    (*(SPI_t *) 0x08C0)     /* Serial Peripheral Interface */
#define TCA0    (*(TCA_t *) 0x0A00)     /* 16-bit Timer/Counter Type A */
#define TCB0    (*(TCB_t *) 0x0A80)     /* 16-bit Timer Type B */
#define TCB1    (*(TCB_t *) 0x0A90)     /* 16-bit Timer Type B */
#define TCB2    (*(TCB_t *) 0x0AA0)     /* 16-bit Timer Type B */
#define SYSCFG  (*(SYSCFG_t *) 0x0F00)  /* System Configuration Registers */
#define NVMCTRL (*(NVMCTRL_t *) 0x1000) /* Non-volatile Memory Controller */
#define SIGROW  (*(SIGROW_t *) 0x1100)  /* Signature row */
#define FUSE    (*(FUSE_t *) 0x1280)    /* Fuses */
#define LOCKBIT (*(LOCKBIT_t *) 0x128A) /* Lockbit */
#define USERROW (*(USERROW_t *) 0x1300) /* User Row */
#else
/*
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
ASM LANGUAGE - ONLY
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/


/*
--------------------------------------------------------------------------------
AC - Analog Comparator
--------------------------------------------------------------------------------
*/


/* Enable */
#define AC_ENABLE_CLEAR_gc (0x00) /* Enable - CLEAR */
#define AC_ENABLE_SET_gc   (0x01) /* Enable - SET */


/* Hysteresis Mode */
#define AC_HYSMODE_OFF_gc  (0x00<<1) /* No hysteresis */
#define AC_HYSMODE_10mV_gc (0x01<<1) /* 10mV hysteresis */
#define AC_HYSMODE_25mV_gc (0x02<<1) /* 25mV hysteresis */
#define AC_HYSMODE_50mV_gc (0x03<<1) /* 50mV hysteresis */


/* Interrupt Mode */
#define AC_INTMODE_BOTHEDGE_gc (0x00<<4) /* Any Edge */
#define AC_INTMODE_NEGEDGE_gc  (0x02<<4) /* Negative Edge */
#define AC_INTMODE_POSEDGE_gc  (0x03<<4) /* Positive Edge */


/* Low Power Mode */
#define AC_LPMODE_DIS_gc (0x00<<3) /* Low power mode disabled */
#define AC_LPMODE_EN_gc  (0x01<<3) /* Low power mode enabled */


/* Output Buffer Enable */
#define AC_OUTEN_CLEAR_gc (0x00) /* Output Buffer Enable - CLEAR */
#define AC_OUTEN_SET_gc   (0x40) /* Output Buffer Enable - SET */


/* Run in Standby Mode */
#define AC_RUNSTDBY_CLEAR_gc (0x00) /* Run in Standby Mode - CLEAR */
#define AC_RUNSTDBY_SET_gc   (0x80) /* Run in Standby Mode - SET */


/* Analog Comparator 0 Interrupt Enable */
#define AC_CMP_CLEAR_gc (0x00) /* Analog Comparator 0 Interrupt Enable - CLEAR */
#define AC_CMP_SET_gc   (0x01) /* Analog Comparator 0 Interrupt Enable - SET */


/* Invert AC Output */
#define AC_INVERT_CLEAR_gc (0x00) /* Invert AC Output - CLEAR */
#define AC_INVERT_SET_gc   (0x80) /* Invert AC Output - SET */


/* Negative Input MUX Selection */
#define AC_MUXNEG_PIN0_gc   (0x00) /* Negative Pin 0 */
#define AC_MUXNEG_PIN1_gc   (0x01) /* Negative Pin 1 */
#define AC_MUXNEG_PIN2_gc   (0x02) /* Negative Pin 2 */
#define AC_MUXNEG_DACREF_gc (0x03) /* DAC Voltage Reference */


/* Positive Input MUX Selection */
#define AC_MUXPOS_PIN0_gc (0x00<<3) /* Positive Pin 0 */
#define AC_MUXPOS_PIN1_gc (0x01<<3) /* Positive Pin 1 */
#define AC_MUXPOS_PIN2_gc (0x02<<3) /* Positive Pin 2 */
#define AC_MUXPOS_PIN3_gc (0x03<<3) /* Positive Pin 3 */


/* Analog Comparator Interrupt Flag */
/* AC_CMP_CLEAR_gc ALREADY DEFINED */
/* AC_CMP_SET_gc ALREADY DEFINED */


/* Analog Comparator State */
#define AC_STATE_CLEAR_gc (0x00) /* Analog Comparator State - CLEAR */
#define AC_STATE_SET_gc   (0x10) /* Analog Comparator State - SET */


/*
--------------------------------------------------------------------------------
ADC - Analog to Digital Converter
--------------------------------------------------------------------------------
*/


/* Duty Cycle */
#define ADC_DUTYCYC_DUTY50_gc (0x00) /* 50% Duty cycle */
#define ADC_DUTYCYC_DUTY25_gc (0x01) /* 25% Duty cycle */


/* Start Conversion Operation */
#define ADC_STCONV_CLEAR_gc (0x00) /* Start Conversion Operation - CLEAR */
#define ADC_STCONV_SET_gc   (0x01) /* Start Conversion Operation - SET */


/* ADC Enable */
#define ADC_ENABLE_CLEAR_gc (0x00) /* ADC Enable - CLEAR */
#define ADC_ENABLE_SET_gc   (0x01) /* ADC Enable - SET */


/* ADC Freerun mode */
#define ADC_FREERUN_CLEAR_gc (0x00) /* ADC Freerun mode - CLEAR */
#define ADC_FREERUN_SET_gc   (0x02) /* ADC Freerun mode - SET */


/* ADC Resolution */
#define ADC_RESSEL_10BIT_gc (0x00<<2) /* 10-bit mode */
#define ADC_RESSEL_8BIT_gc  (0x01<<2) /* 8-bit mode */


/* Run standby mode */
#define ADC_RUNSTBY_CLEAR_gc (0x00) /* Run standby mode - CLEAR */
#define ADC_RUNSTBY_SET_gc   (0x80) /* Run standby mode - SET */


/* Accumulation Samples */
#define ADC_SAMPNUM_ACC1_gc  (0x00) /* 1 ADC sample */
#define ADC_SAMPNUM_ACC2_gc  (0x01) /* Accumulate 2 samples */
#define ADC_SAMPNUM_ACC4_gc  (0x02) /* Accumulate 4 samples */
#define ADC_SAMPNUM_ACC8_gc  (0x03) /* Accumulate 8 samples */
#define ADC_SAMPNUM_ACC16_gc (0x04) /* Accumulate 16 samples */
#define ADC_SAMPNUM_ACC32_gc (0x05) /* Accumulate 32 samples */
#define ADC_SAMPNUM_ACC64_gc (0x06) /* Accumulate 64 samples */


/* Clock Pre-scaler */
#define ADC_PRESC_DIV2_gc   (0x00) /* CLK_PER divided by 2 */
#define ADC_PRESC_DIV4_gc   (0x01) /* CLK_PER divided by 4 */
#define ADC_PRESC_DIV8_gc   (0x02) /* CLK_PER divided by 8 */
#define ADC_PRESC_DIV16_gc  (0x03) /* CLK_PER divided by 16 */
#define ADC_PRESC_DIV32_gc  (0x04) /* CLK_PER divided by 32 */
#define ADC_PRESC_DIV64_gc  (0x05) /* CLK_PER divided by 64 */
#define ADC_PRESC_DIV128_gc (0x06) /* CLK_PER divided by 128 */
#define ADC_PRESC_DIV256_gc (0x07) /* CLK_PER divided by 256 */


/* Reference Selection */
#define ADC_REFSEL_INTREF_gc (0x00<<4) /* Internal reference */
#define ADC_REFSEL_VDDREF_gc (0x01<<4) /* VDD */
#define ADC_REFSEL_VREFA_gc  (0x02<<4) /* External reference */


/* Sample Capacitance Selection */
#define ADC_SAMPCAP_CLEAR_gc (0x00) /* Sample Capacitance Selection - CLEAR */
#define ADC_SAMPCAP_SET_gc   (0x40) /* Sample Capacitance Selection - SET */


/* Automatic Sampling Delay Variation */
#define ADC_ASDV_ASVOFF_gc (0x00<<4) /* The Automatic Sampling Delay Variation is disabled */
#define ADC_ASDV_ASVON_gc  (0x01<<4) /* The Automatic Sampling Delay Variation is enabled */


/* Initial Delay Selection */
#define ADC_INITDLY_DLY0_gc   (0x00<<5) /* Delay 0 CLK_ADC cycles */
#define ADC_INITDLY_DLY16_gc  (0x01<<5) /* Delay 16 CLK_ADC cycles */
#define ADC_INITDLY_DLY32_gc  (0x02<<5) /* Delay 32 CLK_ADC cycles */
#define ADC_INITDLY_DLY64_gc  (0x03<<5) /* Delay 64 CLK_ADC cycles */
#define ADC_INITDLY_DLY128_gc (0x04<<5) /* Delay 128 CLK_ADC cycles */
#define ADC_INITDLY_DLY256_gc (0x05<<5) /* Delay 256 CLK_ADC cycles */


/* Sampling Delay Selection */
#define ADC_CTRLD_SAMPDLY_gc(x) (x & 0x0F)

/* Window Comparator Mode */
#define ADC_WINCM_NONE_gc    (0x00) /* No Window Comparison */
#define ADC_WINCM_BELOW_gc   (0x01) /* Below Window */
#define ADC_WINCM_ABOVE_gc   (0x02) /* Above Window */
#define ADC_WINCM_INSIDE_gc  (0x03) /* Inside Window */
#define ADC_WINCM_OUTSIDE_gc (0x04) /* Outside Window */


/* Debug run */
#define ADC_DBGRUN_CLEAR_gc (0x00) /* Debug run - CLEAR */
#define ADC_DBGRUN_SET_gc   (0x01) /* Debug run - SET */


/* Start Event Input Enable */
#define ADC_STARTEI_CLEAR_gc (0x00) /* Start Event Input Enable - CLEAR */
#define ADC_STARTEI_SET_gc   (0x01) /* Start Event Input Enable - SET */


/* Result Ready Interrupt Enable */
#define ADC_RESRDY_CLEAR_gc (0x00) /* Result Ready Interrupt Enable - CLEAR */
#define ADC_RESRDY_SET_gc   (0x01) /* Result Ready Interrupt Enable - SET */


/* Window Comparator Interrupt Enable */
#define ADC_WCMP_CLEAR_gc (0x00) /* Window Comparator Interrupt Enable - CLEAR */
#define ADC_WCMP_SET_gc   (0x02) /* Window Comparator Interrupt Enable - SET */


/* Result Ready Flag */
/* ADC_RESRDY_CLEAR_gc ALREADY DEFINED */
/* ADC_RESRDY_SET_gc ALREADY DEFINED */


/* Window Comparator Flag */
/* ADC_WCMP_CLEAR_gc ALREADY DEFINED */
/* ADC_WCMP_SET_gc ALREADY DEFINED */


/* Analog Channel Selection Bits */
#define ADC_MUXPOS_AIN0_gc      (0x00) /* ADC input pin 0 */
#define ADC_MUXPOS_AIN1_gc      (0x01) /* ADC input pin 1 */
#define ADC_MUXPOS_AIN2_gc      (0x02) /* ADC input pin 2 */
#define ADC_MUXPOS_AIN3_gc      (0x03) /* ADC input pin 3 */
#define ADC_MUXPOS_AIN4_gc      (0x04) /* ADC input pin 4 */
#define ADC_MUXPOS_AIN5_gc      (0x05) /* ADC input pin 5 */
#define ADC_MUXPOS_AIN6_gc      (0x06) /* ADC input pin 6 */
#define ADC_MUXPOS_AIN7_gc      (0x07) /* ADC input pin 7 */
#define ADC_MUXPOS_AIN8_gc      (0x08) /* ADC input pin 8 */
#define ADC_MUXPOS_AIN9_gc      (0x09) /* ADC input pin 9 */
#define ADC_MUXPOS_AIN10_gc     (0x0A) /* ADC input pin 10 */
#define ADC_MUXPOS_AIN11_gc     (0x0B) /* ADC input pin 11 */
#define ADC_MUXPOS_AIN12_gc     (0x0C) /* ADC input pin 12 */
#define ADC_MUXPOS_AIN13_gc     (0x0D) /* ADC input pin 13 */
#define ADC_MUXPOS_AIN14_gc     (0x0E) /* ADC input pin 14 */
#define ADC_MUXPOS_AIN15_gc     (0x0F) /* ADC input pin 15 */
#define ADC_MUXPOS_DACREF_gc    (0x1C) /* AC DAC Reference */
#define ADC_MUXPOS_TEMPSENSE_gc (0x1E) /* Temperature sensor */
#define ADC_MUXPOS_GND_gc       (0x1F) /* 0V (GND) */


/*
--------------------------------------------------------------------------------
BOD - Bod interface
--------------------------------------------------------------------------------
*/


/* Operation in active mode */
#define BOD_ACTIVE_DIS_gc     (0x00<<2) /* Disabled */
#define BOD_ACTIVE_ENABLED_gc (0x01<<2) /* Enabled */
#define BOD_ACTIVE_SAMPLED_gc (0x02<<2) /* Sampled */
#define BOD_ACTIVE_ENWAKE_gc  (0x03<<2) /* Enabled with wake-up halted until BOD is ready */


/* Sample frequency */
#define BOD_SAMPFREQ_1KHZ_gc  (0x00<<4) /* 1kHz sampling frequency */
#define BOD_SAMPFREQ_125HZ_gc (0x01<<4) /* 125Hz sampling frequency */


/* Operation in sleep mode */
#define BOD_SLEEP_DIS_gc     (0x00) /* Disabled */
#define BOD_SLEEP_ENABLED_gc (0x01) /* Enabled */
#define BOD_SLEEP_SAMPLED_gc (0x02) /* Sampled */


/* Bod level */
#define BOD_LVL_BODLEVEL0_gc (0x00) /* 1.8 V */
#define BOD_LVL_BODLEVEL2_gc (0x02) /* 2.6 V */
#define BOD_LVL_BODLEVEL7_gc (0x07) /* 4.2 V */


/* Configuration */
#define BOD_VLMCFG_BELOW_gc (0x00<<1) /* Interrupt when supply goes below VLM level */
#define BOD_VLMCFG_ABOVE_gc (0x01<<1) /* Interrupt when supply goes above VLM level */
#define BOD_VLMCFG_CROSS_gc (0x02<<1) /* Interrupt when supply crosses VLM level */


/* voltage level monitor interrrupt enable */
#define BOD_VLMIE_CLEAR_gc (0x00) /* voltage level monitor interrrupt enable - CLEAR */
#define BOD_VLMIE_SET_gc   (0x01) /* voltage level monitor interrrupt enable - SET */


/* Voltage level monitor interrupt flag */
#define BOD_VLMIF_CLEAR_gc (0x00) /* Voltage level monitor interrupt flag - CLEAR */
#define BOD_VLMIF_SET_gc   (0x01) /* Voltage level monitor interrupt flag - SET */


/* Voltage level monitor status */
#define BOD_VLMS_CLEAR_gc (0x00) /* Voltage level monitor status - CLEAR */
#define BOD_VLMS_SET_gc   (0x01) /* Voltage level monitor status - SET */


/* voltage level monitor level */
#define BOD_VLMLVL_5ABOVE_gc  (0x00) /* VLM threshold 5% above BOD level */
#define BOD_VLMLVL_15ABOVE_gc (0x01) /* VLM threshold 15% above BOD level */
#define BOD_VLMLVL_25ABOVE_gc (0x02) /* VLM threshold 25% above BOD level */


/*
--------------------------------------------------------------------------------
CCL - Configurable Custom Logic
--------------------------------------------------------------------------------
*/


/* Enable */
#define CCL_ENABLE_CLEAR_gc (0x00) /* Enable - CLEAR */
#define CCL_ENABLE_SET_gc   (0x01) /* Enable - SET */


/* Run in Standby */
#define CCL_RUNSTDBY_CLEAR_gc (0x00) /* Run in Standby - CLEAR */
#define CCL_RUNSTDBY_SET_gc   (0x40) /* Run in Standby - SET */


/* Interrupt Mode for LUT0 */
#define CCL_INTMODE0_INTDISABLE_gc (0x00) /* Interrupt disabled */
#define CCL_INTMODE0_RISING_gc     (0x01) /* Sense rising edge */
#define CCL_INTMODE0_FALLING_gc    (0x02) /* Sense falling edge */
#define CCL_INTMODE0_BOTH_gc       (0x03) /* Sense both edges */


/* Interrupt Mode for LUT1 */
#define CCL_INTMODE1_INTDISABLE_gc (0x00<<2) /* Interrupt disabled */
#define CCL_INTMODE1_RISING_gc     (0x01<<2) /* Sense rising edge */
#define CCL_INTMODE1_FALLING_gc    (0x02<<2) /* Sense falling edge */
#define CCL_INTMODE1_BOTH_gc       (0x03<<2) /* Sense both edges */


/* Interrupt Mode for LUT2 */
#define CCL_INTMODE2_INTDISABLE_gc (0x00<<4) /* Interrupt disabled */
#define CCL_INTMODE2_RISING_gc     (0x01<<4) /* Sense rising edge */
#define CCL_INTMODE2_FALLING_gc    (0x02<<4) /* Sense falling edge */
#define CCL_INTMODE2_BOTH_gc       (0x03<<4) /* Sense both edges */


/* Interrupt Mode for LUT3 */
#define CCL_INTMODE3_INTDISABLE_gc (0x00<<6) /* Interrupt disabled */
#define CCL_INTMODE3_RISING_gc     (0x01<<6) /* Sense rising edge */
#define CCL_INTMODE3_FALLING_gc    (0x02<<6) /* Sense falling edge */
#define CCL_INTMODE3_BOTH_gc       (0x03<<6) /* Sense both edges */


/* Clock Source Selection */
#define CCL_CLKSRC_CLKPER_gc    (0x00<<1) /* CLK_PER is clocking the LUT */
#define CCL_CLKSRC_IN2_gc       (0x01<<1) /* IN[2] is clocking the LUT */
#define CCL_CLKSRC_OSC20M_gc    (0x04<<1) /* 20MHz oscillator before prescaler is clocking the LUT */
#define CCL_CLKSRC_OSCULP32K_gc (0x05<<1) /* 32kHz oscillator is clocking the LUT */
#define CCL_CLKSRC_OSCULP1K_gc  (0x06<<1) /* 32kHz oscillator after DIV32 is clocking the LUT */


/* Edge Detection Enable */
#define CCL_EDGEDET_DIS_gc (0x00<<7) /* Edge detector is disabled */
#define CCL_EDGEDET_EN_gc  (0x01<<7) /* Edge detector is enabled */


/* LUT Enable */
/* CCL_ENABLE_CLEAR_gc ALREADY DEFINED */
/* CCL_ENABLE_SET_gc ALREADY DEFINED */


/* Filter Selection */
#define CCL_FILTSEL_DISABLE_gc (0x00<<4) /* Filter disabled */
#define CCL_FILTSEL_SYNCH_gc   (0x01<<4) /* Synchronizer enabled */
#define CCL_FILTSEL_FILTER_gc  (0x02<<4) /* Filter enabled */


/* Output Enable */
#define CCL_OUTEN_CLEAR_gc (0x00) /* Output Enable - CLEAR */
#define CCL_OUTEN_SET_gc   (0x40) /* Output Enable - SET */


/* LUT Input 0 Source Selection */
#define CCL_INSEL0_MASK_gc     (0x00) /* Masked input */
#define CCL_INSEL0_FEEDBACK_gc (0x01) /* Feedback input source */
#define CCL_INSEL0_LINK_gc     (0x02) /* Linked LUT input source */
#define CCL_INSEL0_EVENTA_gc   (0x03) /* Event input source A */
#define CCL_INSEL0_EVENTB_gc   (0x04) /* Event input source B */
#define CCL_INSEL0_IO_gc       (0x05) /* IO pin LUTn-IN0 input source */
#define CCL_INSEL0_AC0_gc      (0x06) /* AC0 OUT input source */
#define CCL_INSEL0_USART0_gc   (0x08) /* USART0 TXD input source */
#define CCL_INSEL0_SPI0_gc     (0x09) /* SPI0 MOSI input source */
#define CCL_INSEL0_TCA0_gc     (0x0A) /* TCA0 WO0 input source */
#define CCL_INSEL0_TCB0_gc     (0x0C) /* TCB0 WO input source */


/* LUT Input 1 Source Selection */
#define CCL_INSEL1_MASK_gc     (0x00<<4) /* Masked input */
#define CCL_INSEL1_FEEDBACK_gc (0x01<<4) /* Feedback input source */
#define CCL_INSEL1_LINK_gc     (0x02<<4) /* Linked LUT input source */
#define CCL_INSEL1_EVENTA_gc   (0x03<<4) /* Event input source A */
#define CCL_INSEL1_EVENTB_gc   (0x04<<4) /* Event input source B */
#define CCL_INSEL1_IO_gc       (0x05<<4) /* IO pin LUTn-N1 input source */
#define CCL_INSEL1_AC0_gc      (0x06<<4) /* AC0 OUT input source */
#define CCL_INSEL1_USART1_gc   (0x08<<4) /* USART1 TXD input source */
#define CCL_INSEL1_SPI0_gc     (0x09<<4) /* SPI0 MOSI input source */
#define CCL_INSEL1_TCA0_gc     (0x0A<<4) /* TCA0 WO1 input source */
#define CCL_INSEL1_TCB1_gc     (0x0C<<4) /* TCB1 WO input source */


/* LUT Input 2 Source Selection */
#define CCL_INSEL2_MASK_gc     (0x00) /* Masked input */
#define CCL_INSEL2_FEEDBACK_gc (0x01) /* Feedback input source */
#define CCL_INSEL2_LINK_gc     (0x02) /* Linked LUT input source */
#define CCL_INSEL2_EVENTA_gc   (0x03) /* Event input source A */
#define CCL_INSEL2_EVENTB_gc   (0x04) /* Event input source B */
#define CCL_INSEL2_IO_gc       (0x05) /* IO pin LUTn-IN2 input source */
#define CCL_INSEL2_AC0_gc      (0x06) /* AC0 OUT input source */
#define CCL_INSEL2_USART2_gc   (0x08) /* USART2 TXD input source */
#define CCL_INSEL2_SPI0_gc     (0x09) /* SPI0 SCK input source */
#define CCL_INSEL2_TCA0_gc     (0x0A) /* TCA0 WO2 input source */
#define CCL_INSEL2_TCB2_gc     (0x0C) /* TCB2 WO input source */


/* Clock Source Selection */
/* CCL_CLKSRC_CLKPER_gc ALREADY DEFINED */
/* CCL_CLKSRC_IN2_gc ALREADY DEFINED */
/* CCL_CLKSRC_OSC20M_gc ALREADY DEFINED */
/* CCL_CLKSRC_OSCULP32K_gc ALREADY DEFINED */
/* CCL_CLKSRC_OSCULP1K_gc ALREADY DEFINED */


/* Edge Detection Enable */
/* CCL_EDGEDET_DIS_gc ALREADY DEFINED */
/* CCL_EDGEDET_EN_gc ALREADY DEFINED */


/* LUT Enable */
/* CCL_ENABLE_CLEAR_gc ALREADY DEFINED */
/* CCL_ENABLE_SET_gc ALREADY DEFINED */


/* Filter Selection */
/* CCL_FILTSEL_DISABLE_gc ALREADY DEFINED */
/* CCL_FILTSEL_SYNCH_gc ALREADY DEFINED */
/* CCL_FILTSEL_FILTER_gc ALREADY DEFINED */


/* Output Enable */
/* CCL_OUTEN_CLEAR_gc ALREADY DEFINED */
/* CCL_OUTEN_SET_gc ALREADY DEFINED */


/* LUT Input 0 Source Selection */
/* CCL_INSEL0_MASK_gc ALREADY DEFINED */
/* CCL_INSEL0_FEEDBACK_gc ALREADY DEFINED */
/* CCL_INSEL0_LINK_gc ALREADY DEFINED */
/* CCL_INSEL0_EVENTA_gc ALREADY DEFINED */
/* CCL_INSEL0_EVENTB_gc ALREADY DEFINED */
/* CCL_INSEL0_IO_gc ALREADY DEFINED */
/* CCL_INSEL0_AC0_gc ALREADY DEFINED */
/* CCL_INSEL0_USART0_gc ALREADY DEFINED */
/* CCL_INSEL0_SPI0_gc ALREADY DEFINED */
/* CCL_INSEL0_TCA0_gc ALREADY DEFINED */
/* CCL_INSEL0_TCB0_gc ALREADY DEFINED */


/* LUT Input 1 Source Selection */
/* CCL_INSEL1_MASK_gc ALREADY DEFINED */
/* CCL_INSEL1_FEEDBACK_gc ALREADY DEFINED */
/* CCL_INSEL1_LINK_gc ALREADY DEFINED */
/* CCL_INSEL1_EVENTA_gc ALREADY DEFINED */
/* CCL_INSEL1_EVENTB_gc ALREADY DEFINED */
/* CCL_INSEL1_IO_gc ALREADY DEFINED */
/* CCL_INSEL1_AC0_gc ALREADY DEFINED */
/* CCL_INSEL1_USART1_gc ALREADY DEFINED */
/* CCL_INSEL1_SPI0_gc ALREADY DEFINED */
/* CCL_INSEL1_TCA0_gc ALREADY DEFINED */
/* CCL_INSEL1_TCB1_gc ALREADY DEFINED */


/* LUT Input 2 Source Selection */
/* CCL_INSEL2_MASK_gc ALREADY DEFINED */
/* CCL_INSEL2_FEEDBACK_gc ALREADY DEFINED */
/* CCL_INSEL2_LINK_gc ALREADY DEFINED */
/* CCL_INSEL2_EVENTA_gc ALREADY DEFINED */
/* CCL_INSEL2_EVENTB_gc ALREADY DEFINED */
/* CCL_INSEL2_IO_gc ALREADY DEFINED */
/* CCL_INSEL2_AC0_gc ALREADY DEFINED */
/* CCL_INSEL2_USART2_gc ALREADY DEFINED */
/* CCL_INSEL2_SPI0_gc ALREADY DEFINED */
/* CCL_INSEL2_TCA0_gc ALREADY DEFINED */
/* CCL_INSEL2_TCB2_gc ALREADY DEFINED */


/* Clock Source Selection */
/* CCL_CLKSRC_CLKPER_gc ALREADY DEFINED */
/* CCL_CLKSRC_IN2_gc ALREADY DEFINED */
/* CCL_CLKSRC_OSC20M_gc ALREADY DEFINED */
/* CCL_CLKSRC_OSCULP32K_gc ALREADY DEFINED */
/* CCL_CLKSRC_OSCULP1K_gc ALREADY DEFINED */


/* Edge Detection Enable */
/* CCL_EDGEDET_DIS_gc ALREADY DEFINED */
/* CCL_EDGEDET_EN_gc ALREADY DEFINED */


/* LUT Enable */
/* CCL_ENABLE_CLEAR_gc ALREADY DEFINED */
/* CCL_ENABLE_SET_gc ALREADY DEFINED */


/* Filter Selection */
/* CCL_FILTSEL_DISABLE_gc ALREADY DEFINED */
/* CCL_FILTSEL_SYNCH_gc ALREADY DEFINED */
/* CCL_FILTSEL_FILTER_gc ALREADY DEFINED */


/* Output Enable */
/* CCL_OUTEN_CLEAR_gc ALREADY DEFINED */
/* CCL_OUTEN_SET_gc ALREADY DEFINED */


/* LUT Input 0 Source Selection */
/* CCL_INSEL0_MASK_gc ALREADY DEFINED */
/* CCL_INSEL0_FEEDBACK_gc ALREADY DEFINED */
/* CCL_INSEL0_LINK_gc ALREADY DEFINED */
/* CCL_INSEL0_EVENTA_gc ALREADY DEFINED */
/* CCL_INSEL0_EVENTB_gc ALREADY DEFINED */
/* CCL_INSEL0_IO_gc ALREADY DEFINED */
/* CCL_INSEL0_AC0_gc ALREADY DEFINED */
/* CCL_INSEL0_USART0_gc ALREADY DEFINED */
/* CCL_INSEL0_SPI0_gc ALREADY DEFINED */
/* CCL_INSEL0_TCA0_gc ALREADY DEFINED */
/* CCL_INSEL0_TCB0_gc ALREADY DEFINED */


/* LUT Input 1 Source Selection */
/* CCL_INSEL1_MASK_gc ALREADY DEFINED */
/* CCL_INSEL1_FEEDBACK_gc ALREADY DEFINED */
/* CCL_INSEL1_LINK_gc ALREADY DEFINED */
/* CCL_INSEL1_EVENTA_gc ALREADY DEFINED */
/* CCL_INSEL1_EVENTB_gc ALREADY DEFINED */
/* CCL_INSEL1_IO_gc ALREADY DEFINED */
/* CCL_INSEL1_AC0_gc ALREADY DEFINED */
/* CCL_INSEL1_USART1_gc ALREADY DEFINED */
/* CCL_INSEL1_SPI0_gc ALREADY DEFINED */
/* CCL_INSEL1_TCA0_gc ALREADY DEFINED */
/* CCL_INSEL1_TCB1_gc ALREADY DEFINED */


/* LUT Input 2 Source Selection */
/* CCL_INSEL2_MASK_gc ALREADY DEFINED */
/* CCL_INSEL2_FEEDBACK_gc ALREADY DEFINED */
/* CCL_INSEL2_LINK_gc ALREADY DEFINED */
/* CCL_INSEL2_EVENTA_gc ALREADY DEFINED */
/* CCL_INSEL2_EVENTB_gc ALREADY DEFINED */
/* CCL_INSEL2_IO_gc ALREADY DEFINED */
/* CCL_INSEL2_AC0_gc ALREADY DEFINED */
/* CCL_INSEL2_USART2_gc ALREADY DEFINED */
/* CCL_INSEL2_SPI0_gc ALREADY DEFINED */
/* CCL_INSEL2_TCA0_gc ALREADY DEFINED */
/* CCL_INSEL2_TCB2_gc ALREADY DEFINED */


/* Clock Source Selection */
/* CCL_CLKSRC_CLKPER_gc ALREADY DEFINED */
/* CCL_CLKSRC_IN2_gc ALREADY DEFINED */
/* CCL_CLKSRC_OSC20M_gc ALREADY DEFINED */
/* CCL_CLKSRC_OSCULP32K_gc ALREADY DEFINED */
/* CCL_CLKSRC_OSCULP1K_gc ALREADY DEFINED */


/* Edge Detection Enable */
/* CCL_EDGEDET_DIS_gc ALREADY DEFINED */
/* CCL_EDGEDET_EN_gc ALREADY DEFINED */


/* LUT Enable */
/* CCL_ENABLE_CLEAR_gc ALREADY DEFINED */
/* CCL_ENABLE_SET_gc ALREADY DEFINED */


/* Filter Selection */
/* CCL_FILTSEL_DISABLE_gc ALREADY DEFINED */
/* CCL_FILTSEL_SYNCH_gc ALREADY DEFINED */
/* CCL_FILTSEL_FILTER_gc ALREADY DEFINED */


/* Output Enable */
/* CCL_OUTEN_CLEAR_gc ALREADY DEFINED */
/* CCL_OUTEN_SET_gc ALREADY DEFINED */


/* LUT Input 0 Source Selection */
/* CCL_INSEL0_MASK_gc ALREADY DEFINED */
/* CCL_INSEL0_FEEDBACK_gc ALREADY DEFINED */
/* CCL_INSEL0_LINK_gc ALREADY DEFINED */
/* CCL_INSEL0_EVENTA_gc ALREADY DEFINED */
/* CCL_INSEL0_EVENTB_gc ALREADY DEFINED */
/* CCL_INSEL0_IO_gc ALREADY DEFINED */
/* CCL_INSEL0_AC0_gc ALREADY DEFINED */
/* CCL_INSEL0_USART0_gc ALREADY DEFINED */
/* CCL_INSEL0_SPI0_gc ALREADY DEFINED */
/* CCL_INSEL0_TCA0_gc ALREADY DEFINED */
/* CCL_INSEL0_TCB0_gc ALREADY DEFINED */


/* LUT Input 1 Source Selection */
/* CCL_INSEL1_MASK_gc ALREADY DEFINED */
/* CCL_INSEL1_FEEDBACK_gc ALREADY DEFINED */
/* CCL_INSEL1_LINK_gc ALREADY DEFINED */
/* CCL_INSEL1_EVENTA_gc ALREADY DEFINED */
/* CCL_INSEL1_EVENTB_gc ALREADY DEFINED */
/* CCL_INSEL1_IO_gc ALREADY DEFINED */
/* CCL_INSEL1_AC0_gc ALREADY DEFINED */
/* CCL_INSEL1_USART1_gc ALREADY DEFINED */
/* CCL_INSEL1_SPI0_gc ALREADY DEFINED */
/* CCL_INSEL1_TCA0_gc ALREADY DEFINED */
/* CCL_INSEL1_TCB1_gc ALREADY DEFINED */


/* LUT Input 2 Source Selection */
/* CCL_INSEL2_MASK_gc ALREADY DEFINED */
/* CCL_INSEL2_FEEDBACK_gc ALREADY DEFINED */
/* CCL_INSEL2_LINK_gc ALREADY DEFINED */
/* CCL_INSEL2_EVENTA_gc ALREADY DEFINED */
/* CCL_INSEL2_EVENTB_gc ALREADY DEFINED */
/* CCL_INSEL2_IO_gc ALREADY DEFINED */
/* CCL_INSEL2_AC0_gc ALREADY DEFINED */
/* CCL_INSEL2_USART2_gc ALREADY DEFINED */
/* CCL_INSEL2_SPI0_gc ALREADY DEFINED */
/* CCL_INSEL2_TCA0_gc ALREADY DEFINED */
/* CCL_INSEL2_TCB2_gc ALREADY DEFINED */


/* Sequential Selection */
#define CCL_SEQSEL0_DISABLE_gc (0x00) /* Sequential logic disabled */
#define CCL_SEQSEL0_DFF_gc     (0x01) /* D FlipFlop */
#define CCL_SEQSEL0_JK_gc      (0x02) /* JK FlipFlop */
#define CCL_SEQSEL0_LATCH_gc   (0x03) /* D Latch */
#define CCL_SEQSEL0_RS_gc      (0x04) /* RS Latch */


/* Sequential Selection */
#define CCL_SEQSEL1_DISABLE_gc (0x00) /* Sequential logic disabled */
#define CCL_SEQSEL1_DFF_gc     (0x01) /* D FlipFlop */
#define CCL_SEQSEL1_JK_gc      (0x02) /* JK FlipFlop */
#define CCL_SEQSEL1_LATCH_gc   (0x03) /* D Latch */
#define CCL_SEQSEL1_RS_gc      (0x04) /* RS Latch */


/*
--------------------------------------------------------------------------------
CLKCTRL - Clock controller
--------------------------------------------------------------------------------
*/


/* System clock out */
#define CLKCTRL_CLKOUT_CLEAR_gc (0x00) /* System clock out - CLEAR */
#define CLKCTRL_CLKOUT_SET_gc   (0x80) /* System clock out - SET */


/* clock select */
#define CLKCTRL_CLKSEL_OSC20M_gc    (0x00) /* 20MHz oscillator */
#define CLKCTRL_CLKSEL_OSCULP32K_gc (0x01) /* 32KHz oscillator */
#define CLKCTRL_CLKSEL_XOSC32K_gc   (0x02) /* 32.768kHz crystal oscillator */
#define CLKCTRL_CLKSEL_EXTCLK_gc    (0x03) /* External clock */


/* Prescaler division */
#define CLKCTRL_PDIV_2X_gc  (0x00<<1) /* 2X */
#define CLKCTRL_PDIV_4X_gc  (0x01<<1) /* 4X */
#define CLKCTRL_PDIV_8X_gc  (0x02<<1) /* 8X */
#define CLKCTRL_PDIV_16X_gc (0x03<<1) /* 16X */
#define CLKCTRL_PDIV_32X_gc (0x04<<1) /* 32X */
#define CLKCTRL_PDIV_64X_gc (0x05<<1) /* 64X */
#define CLKCTRL_PDIV_6X_gc  (0x08<<1) /* 6X */
#define CLKCTRL_PDIV_10X_gc (0x09<<1) /* 10X */
#define CLKCTRL_PDIV_12X_gc (0x0A<<1) /* 12X */
#define CLKCTRL_PDIV_24X_gc (0x0B<<1) /* 24X */
#define CLKCTRL_PDIV_48X_gc (0x0C<<1) /* 48X */


/* Prescaler enable */
#define CLKCTRL_PEN_CLEAR_gc (0x00) /* Prescaler enable - CLEAR */
#define CLKCTRL_PEN_SET_gc   (0x01) /* Prescaler enable - SET */


/* lock ebable */
#define CLKCTRL_LOCKEN_CLEAR_gc (0x00) /* lock ebable - CLEAR */
#define CLKCTRL_LOCKEN_SET_gc   (0x01) /* lock ebable - SET */


/* External Clock status */
#define CLKCTRL_EXTS_CLEAR_gc (0x00) /* External Clock status - CLEAR */
#define CLKCTRL_EXTS_SET_gc   (0x80) /* External Clock status - SET */


/* 20MHz oscillator status */
#define CLKCTRL_OSC20MS_CLEAR_gc (0x00) /* 20MHz oscillator status - CLEAR */
#define CLKCTRL_OSC20MS_SET_gc   (0x10) /* 20MHz oscillator status - SET */


/* 32KHz oscillator status */
#define CLKCTRL_OSC32KS_CLEAR_gc (0x00) /* 32KHz oscillator status - CLEAR */
#define CLKCTRL_OSC32KS_SET_gc   (0x20) /* 32KHz oscillator status - SET */


/* System Oscillator changing */
#define CLKCTRL_SOSC_CLEAR_gc (0x00) /* System Oscillator changing - CLEAR */
#define CLKCTRL_SOSC_SET_gc   (0x01) /* System Oscillator changing - SET */


/* 32.768 kHz Crystal Oscillator status */
#define CLKCTRL_XOSC32KS_CLEAR_gc (0x00) /* 32.768 kHz Crystal Oscillator status - CLEAR */
#define CLKCTRL_XOSC32KS_SET_gc   (0x40) /* 32.768 kHz Crystal Oscillator status - SET */


/* Lock */
#define CLKCTRL_LOCK_CLEAR_gc (0x00) /* Lock - CLEAR */
#define CLKCTRL_LOCK_SET_gc   (0x80) /* Lock - SET */


/* Oscillator temperature coefficient */
#define CLKCTRL_OSC20MCALIBB_TEMPCAL20M_gc(x) (x & 0x0F)

/* Run standby */
#define CLKCTRL_RUNSTDBY_CLEAR_gc (0x00) /* Run standby - CLEAR */
#define CLKCTRL_RUNSTDBY_SET_gc   (0x02) /* Run standby - SET */


/* Run standby */
/* CLKCTRL_RUNSTDBY_CLEAR_gc ALREADY DEFINED */
/* CLKCTRL_RUNSTDBY_SET_gc ALREADY DEFINED */


/* Crystal startup time */
#define CLKCTRL_CSUT_1K_gc  (0x00<<4) /* 1k cycles */
#define CLKCTRL_CSUT_16K_gc (0x01<<4) /* 16k cycles */
#define CLKCTRL_CSUT_32K_gc (0x02<<4) /* 32k cycles */
#define CLKCTRL_CSUT_64K_gc (0x03<<4) /* 64k cycles */


/* Enable */
#define CLKCTRL_ENABLE_CLEAR_gc (0x00) /* Enable - CLEAR */
#define CLKCTRL_ENABLE_SET_gc   (0x01) /* Enable - SET */


/* Run standby */
/* CLKCTRL_RUNSTDBY_CLEAR_gc ALREADY DEFINED */
/* CLKCTRL_RUNSTDBY_SET_gc ALREADY DEFINED */


/* Select */
#define CLKCTRL_SEL_CLEAR_gc (0x00) /* Select - CLEAR */
#define CLKCTRL_SEL_SET_gc   (0x04) /* Select - SET */


/*
--------------------------------------------------------------------------------
CPU - CPU
--------------------------------------------------------------------------------
*/


/* CCP signature */
#define CPU_CCP_SPM_gc   (0x9D) /* SPM Instruction Protection */
#define CPU_CCP_IOREG_gc (0xD8) /* IO Register Protection */


/* Carry Flag */
#define CPU_C_CLEAR_gc (0x00) /* Carry Flag - CLEAR */
#define CPU_C_SET_gc   (0x01) /* Carry Flag - SET */


/* Half Carry Flag */
#define CPU_H_CLEAR_gc (0x00) /* Half Carry Flag - CLEAR */
#define CPU_H_SET_gc   (0x20) /* Half Carry Flag - SET */


/* Global Interrupt Enable Flag */
#define CPU_I_CLEAR_gc (0x00) /* Global Interrupt Enable Flag - CLEAR */
#define CPU_I_SET_gc   (0x80) /* Global Interrupt Enable Flag - SET */


/* Negative Flag */
#define CPU_N_CLEAR_gc (0x00) /* Negative Flag - CLEAR */
#define CPU_N_SET_gc   (0x04) /* Negative Flag - SET */


/* N Exclusive Or V Flag */
#define CPU_S_CLEAR_gc (0x00) /* N Exclusive Or V Flag - CLEAR */
#define CPU_S_SET_gc   (0x10) /* N Exclusive Or V Flag - SET */


/* Transfer Bit */
#define CPU_T_CLEAR_gc (0x00) /* Transfer Bit - CLEAR */
#define CPU_T_SET_gc   (0x40) /* Transfer Bit - SET */


/* Two's Complement Overflow Flag */
#define CPU_V_CLEAR_gc (0x00) /* Two's Complement Overflow Flag - CLEAR */
#define CPU_V_SET_gc   (0x08) /* Two's Complement Overflow Flag - SET */


/* Zero Flag */
#define CPU_Z_CLEAR_gc (0x00) /* Zero Flag - CLEAR */
#define CPU_Z_SET_gc   (0x02) /* Zero Flag - SET */


/*
--------------------------------------------------------------------------------
CPUINT - Interrupt Controller
--------------------------------------------------------------------------------
*/


/* Compact Vector Table */
#define CPUINT_CVT_CLEAR_gc (0x00) /* Compact Vector Table - CLEAR */
#define CPUINT_CVT_SET_gc   (0x20) /* Compact Vector Table - SET */


/* Interrupt Vector Select */
#define CPUINT_IVSEL_CLEAR_gc (0x00) /* Interrupt Vector Select - CLEAR */
#define CPUINT_IVSEL_SET_gc   (0x40) /* Interrupt Vector Select - SET */


/* Round-robin Scheduling Enable */
#define CPUINT_LVL0RR_CLEAR_gc (0x00) /* Round-robin Scheduling Enable - CLEAR */
#define CPUINT_LVL0RR_SET_gc   (0x01) /* Round-robin Scheduling Enable - SET */


/* Level 0 Interrupt Executing */
#define CPUINT_LVL0EX_CLEAR_gc (0x00) /* Level 0 Interrupt Executing - CLEAR */
#define CPUINT_LVL0EX_SET_gc   (0x01) /* Level 0 Interrupt Executing - SET */


/* Level 1 Interrupt Executing */
#define CPUINT_LVL1EX_CLEAR_gc (0x00) /* Level 1 Interrupt Executing - CLEAR */
#define CPUINT_LVL1EX_SET_gc   (0x02) /* Level 1 Interrupt Executing - SET */


/* Non-maskable Interrupt Executing */
#define CPUINT_NMIEX_CLEAR_gc (0x00) /* Non-maskable Interrupt Executing - CLEAR */
#define CPUINT_NMIEX_SET_gc   (0x80) /* Non-maskable Interrupt Executing - SET */


/*
--------------------------------------------------------------------------------
CRCSCAN - CRCSCAN
--------------------------------------------------------------------------------
*/


/* Enable CRC scan */
#define CRCSCAN_ENABLE_CLEAR_gc (0x00) /* Enable CRC scan - CLEAR */
#define CRCSCAN_ENABLE_SET_gc   (0x01) /* Enable CRC scan - SET */


/* Enable NMI Trigger */
#define CRCSCAN_NMIEN_CLEAR_gc (0x00) /* Enable NMI Trigger - CLEAR */
#define CRCSCAN_NMIEN_SET_gc   (0x02) /* Enable NMI Trigger - SET */


/* Reset CRC scan */
#define CRCSCAN_RESET_CLEAR_gc (0x00) /* Reset CRC scan - CLEAR */
#define CRCSCAN_RESET_SET_gc   (0x80) /* Reset CRC scan - SET */


/* CRC Source */
#define CRCSCAN_SRC_FLASH_gc       (0x00) /* CRC on entire flash */
#define CRCSCAN_SRC_APPLICATION_gc (0x01) /* CRC on boot and appl section of flash */
#define CRCSCAN_SRC_BOOT_gc        (0x02) /* CRC on boot section of flash */


/* CRC Busy */
#define CRCSCAN_BUSY_CLEAR_gc (0x00) /* CRC Busy - CLEAR */
#define CRCSCAN_BUSY_SET_gc   (0x01) /* CRC Busy - SET */


/* CRC Ok */
#define CRCSCAN_OK_CLEAR_gc (0x00) /* CRC Ok - CLEAR */
#define CRCSCAN_OK_SET_gc   (0x02) /* CRC Ok - SET */


/*
--------------------------------------------------------------------------------
EVSYS - Event System
--------------------------------------------------------------------------------
*/


/* Generator selector */
#define EVSYS_GENERATOR_OFF_gc           (0x00) /* Off */
#define EVSYS_GENERATOR_UPDI_gc          (0x01) /* Unified Program and Debug Interface */
#define EVSYS_GENERATOR_RTC_OVF_gc       (0x06) /* Real Time Counter overflow */
#define EVSYS_GENERATOR_RTC_CMP_gc       (0x07) /* Real Time Counter compare */
#define EVSYS_GENERATOR_RTC_PIT0_gc      (0x08) /* Periodic Interrupt Timer output 0 */
#define EVSYS_GENERATOR_RTC_PIT1_gc      (0x09) /* Periodic Interrupt Timer output 1 */
#define EVSYS_GENERATOR_RTC_PIT2_gc      (0x0A) /* Periodic Interrupt Timer output 2 */
#define EVSYS_GENERATOR_RTC_PIT3_gc      (0x0B) /* Periodic Interrupt Timer output 3 */
#define EVSYS_GENERATOR_CCL_LUT0_gc      (0x10) /* Configurable Custom Logic LUT0 */
#define EVSYS_GENERATOR_CCL_LUT1_gc      (0x11) /* Configurable Custom Logic LUT1 */
#define EVSYS_GENERATOR_CCL_LUT2_gc      (0x12) /* Configurable Custom Logic LUT2 */
#define EVSYS_GENERATOR_CCL_LUT3_gc      (0x13) /* Configurable Custom Logic LUT3 */
#define EVSYS_GENERATOR_AC0_OUT_gc       (0x20) /* Analog Comparator 0 out */
#define EVSYS_GENERATOR_ADC0_RESRDY_gc   (0x24) /* ADC 0 Result Ready Event */
#define EVSYS_GENERATOR_PORT0_PIN0_gc    (0x40) /* Port 0 Pin 0 */
#define EVSYS_GENERATOR_PORT0_PIN1_gc    (0x41) /* Port 0 Pin 1 */
#define EVSYS_GENERATOR_PORT0_PIN2_gc    (0x42) /* Port 0 Pin 2 */
#define EVSYS_GENERATOR_PORT0_PIN3_gc    (0x43) /* Port 0 Pin 3 */
#define EVSYS_GENERATOR_PORT0_PIN4_gc    (0x44) /* Port 0 Pin 4 */
#define EVSYS_GENERATOR_PORT0_PIN5_gc    (0x45) /* Port 0 Pin 5 */
#define EVSYS_GENERATOR_PORT0_PIN6_gc    (0x46) /* Port 0 Pin 6 */
#define EVSYS_GENERATOR_PORT0_PIN7_gc    (0x47) /* Port 0 Pin 7 */
#define EVSYS_GENERATOR_PORT1_PIN0_gc    (0x48) /* Port 1 Pin 0 */
#define EVSYS_GENERATOR_PORT1_PIN1_gc    (0x49) /* Port 1 Pin 1 */
#define EVSYS_GENERATOR_PORT1_PIN2_gc    (0x4A) /* Port 1 Pin 2 */
#define EVSYS_GENERATOR_PORT1_PIN3_gc    (0x4B) /* Port 1 Pin 3 */
#define EVSYS_GENERATOR_PORT1_PIN4_gc    (0x4C) /* Port 1 Pin 4 */
#define EVSYS_GENERATOR_PORT1_PIN5_gc    (0x4D) /* Port 1 Pin 5 */
#define EVSYS_GENERATOR_PORT1_PIN6_gc    (0x4E) /* Port 1 Pin 6 */
#define EVSYS_GENERATOR_PORT1_PIN7_gc    (0x4F) /* Port 1 Pin 7 */
#define EVSYS_GENERATOR_USART0_XCK_gc    (0x60) /* USART 0 Xclock */
#define EVSYS_GENERATOR_USART1_XCK_gc    (0x61) /* USART 1 Xclock */
#define EVSYS_GENERATOR_USART2_XCK_gc    (0x62) /* USART 2 Xclock */
#define EVSYS_GENERATOR_USART3_XCK_gc    (0x63) /* USART 3 Xclock */
#define EVSYS_GENERATOR_SPI0_SCK_gc      (0x68) /* SPI 0 Sclock */
#define EVSYS_GENERATOR_TCA0_OVF_LUNF_gc (0x80) /* Timer/Counter A0 overflow / low byte underflow */
#define EVSYS_GENERATOR_TCA0_HUNF_gc     (0x81) /* Timer/Counter A0 high byte underflow (split mode) */
#define EVSYS_GENERATOR_TCA0_CMP0_gc     (0x84) /* Timer/Counter A0 compare 0 */
#define EVSYS_GENERATOR_TCA0_CMP1_gc     (0x85) /* Timer/Counter A0 compare 1 */
#define EVSYS_GENERATOR_TCA0_CMP2_gc     (0x86) /* Timer/Counter A0 compare 2 */
#define EVSYS_GENERATOR_TCB0_CAPT_gc     (0xA0) /* Timer/Counter B0 capture */
#define EVSYS_GENERATOR_TCB1_CAPT_gc     (0xA2) /* Timer/Counter B1 capture */
#define EVSYS_GENERATOR_TCB2_CAPT_gc     (0xA4) /* Timer/Counter B2 capture */
#define EVSYS_GENERATOR_TCB3_CAPT_gc     (0xA6) /* Timer/Counter B3 capture */


/* Generator selector */
/* EVSYS_GENERATOR_OFF_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_UPDI_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_RTC_OVF_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_RTC_CMP_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_RTC_PIT0_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_RTC_PIT1_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_RTC_PIT2_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_RTC_PIT3_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_CCL_LUT0_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_CCL_LUT1_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_CCL_LUT2_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_CCL_LUT3_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_AC0_OUT_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_ADC0_RESRDY_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT0_PIN0_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT0_PIN1_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT0_PIN2_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT0_PIN3_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT0_PIN4_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT0_PIN5_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT0_PIN6_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT0_PIN7_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT1_PIN0_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT1_PIN1_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT1_PIN2_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT1_PIN3_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT1_PIN4_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT1_PIN5_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT1_PIN6_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT1_PIN7_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_USART0_XCK_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_USART1_XCK_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_USART2_XCK_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_USART3_XCK_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_SPI0_SCK_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_TCA0_OVF_LUNF_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_TCA0_HUNF_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_TCA0_CMP0_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_TCA0_CMP1_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_TCA0_CMP2_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_TCB0_CAPT_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_TCB1_CAPT_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_TCB2_CAPT_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_TCB3_CAPT_gc ALREADY DEFINED */


/* Generator selector */
/* EVSYS_GENERATOR_OFF_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_UPDI_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_RTC_OVF_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_RTC_CMP_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_RTC_PIT0_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_RTC_PIT1_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_RTC_PIT2_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_RTC_PIT3_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_CCL_LUT0_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_CCL_LUT1_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_CCL_LUT2_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_CCL_LUT3_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_AC0_OUT_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_ADC0_RESRDY_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT0_PIN0_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT0_PIN1_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT0_PIN2_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT0_PIN3_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT0_PIN4_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT0_PIN5_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT0_PIN6_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT0_PIN7_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT1_PIN0_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT1_PIN1_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT1_PIN2_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT1_PIN3_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT1_PIN4_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT1_PIN5_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT1_PIN6_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT1_PIN7_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_USART0_XCK_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_USART1_XCK_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_USART2_XCK_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_USART3_XCK_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_SPI0_SCK_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_TCA0_OVF_LUNF_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_TCA0_HUNF_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_TCA0_CMP0_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_TCA0_CMP1_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_TCA0_CMP2_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_TCB0_CAPT_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_TCB1_CAPT_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_TCB2_CAPT_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_TCB3_CAPT_gc ALREADY DEFINED */


/* Generator selector */
/* EVSYS_GENERATOR_OFF_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_UPDI_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_RTC_OVF_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_RTC_CMP_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_RTC_PIT0_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_RTC_PIT1_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_RTC_PIT2_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_RTC_PIT3_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_CCL_LUT0_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_CCL_LUT1_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_CCL_LUT2_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_CCL_LUT3_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_AC0_OUT_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_ADC0_RESRDY_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT0_PIN0_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT0_PIN1_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT0_PIN2_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT0_PIN3_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT0_PIN4_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT0_PIN5_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT0_PIN6_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT0_PIN7_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT1_PIN0_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT1_PIN1_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT1_PIN2_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT1_PIN3_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT1_PIN4_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT1_PIN5_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT1_PIN6_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT1_PIN7_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_USART0_XCK_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_USART1_XCK_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_USART2_XCK_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_USART3_XCK_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_SPI0_SCK_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_TCA0_OVF_LUNF_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_TCA0_HUNF_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_TCA0_CMP0_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_TCA0_CMP1_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_TCA0_CMP2_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_TCB0_CAPT_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_TCB1_CAPT_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_TCB2_CAPT_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_TCB3_CAPT_gc ALREADY DEFINED */


/* Generator selector */
/* EVSYS_GENERATOR_OFF_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_UPDI_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_RTC_OVF_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_RTC_CMP_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_RTC_PIT0_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_RTC_PIT1_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_RTC_PIT2_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_RTC_PIT3_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_CCL_LUT0_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_CCL_LUT1_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_CCL_LUT2_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_CCL_LUT3_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_AC0_OUT_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_ADC0_RESRDY_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT0_PIN0_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT0_PIN1_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT0_PIN2_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT0_PIN3_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT0_PIN4_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT0_PIN5_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT0_PIN6_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT0_PIN7_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT1_PIN0_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT1_PIN1_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT1_PIN2_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT1_PIN3_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT1_PIN4_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT1_PIN5_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT1_PIN6_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT1_PIN7_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_USART0_XCK_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_USART1_XCK_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_USART2_XCK_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_USART3_XCK_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_SPI0_SCK_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_TCA0_OVF_LUNF_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_TCA0_HUNF_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_TCA0_CMP0_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_TCA0_CMP1_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_TCA0_CMP2_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_TCB0_CAPT_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_TCB1_CAPT_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_TCB2_CAPT_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_TCB3_CAPT_gc ALREADY DEFINED */


/* Generator selector */
/* EVSYS_GENERATOR_OFF_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_UPDI_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_RTC_OVF_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_RTC_CMP_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_RTC_PIT0_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_RTC_PIT1_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_RTC_PIT2_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_RTC_PIT3_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_CCL_LUT0_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_CCL_LUT1_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_CCL_LUT2_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_CCL_LUT3_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_AC0_OUT_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_ADC0_RESRDY_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT0_PIN0_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT0_PIN1_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT0_PIN2_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT0_PIN3_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT0_PIN4_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT0_PIN5_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT0_PIN6_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT0_PIN7_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT1_PIN0_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT1_PIN1_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT1_PIN2_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT1_PIN3_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT1_PIN4_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT1_PIN5_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT1_PIN6_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_PORT1_PIN7_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_USART0_XCK_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_USART1_XCK_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_USART2_XCK_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_USART3_XCK_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_SPI0_SCK_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_TCA0_OVF_LUNF_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_TCA0_HUNF_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_TCA0_CMP0_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_TCA0_CMP1_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_TCA0_CMP2_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_TCB0_CAPT_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_TCB1_CAPT_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_TCB2_CAPT_gc ALREADY DEFINED */
/* EVSYS_GENERATOR_TCB3_CAPT_gc ALREADY DEFINED */


/* Software event on channels */
#define EVSYS_STROBE0_EV_STROBE_CH0_gc (0x01) 
#define EVSYS_STROBE0_EV_STROBE_CH1_gc (0x02) 
#define EVSYS_STROBE0_EV_STROBE_CH2_gc (0x04) 
#define EVSYS_STROBE0_EV_STROBE_CH3_gc (0x08) 
#define EVSYS_STROBE0_EV_STROBE_CH4_gc (0x10) 
#define EVSYS_STROBE0_EV_STROBE_CH5_gc (0x20) 
#define EVSYS_STROBE0_EV_STROBE_CH6_gc (0x40) 
#define EVSYS_STROBE0_EV_STROBE_CH7_gc (0x80) 


/* Channel selector */
#define EVSYS_CHANNEL_OFF_gc      (0x00) /* Off */
#define EVSYS_CHANNEL_CHANNEL0_gc (0x01) /* Connect user to event channel 0 */
#define EVSYS_CHANNEL_CHANNEL1_gc (0x02) /* Connect user to event channel 1 */
#define EVSYS_CHANNEL_CHANNEL2_gc (0x03) /* Connect user to event channel 2 */
#define EVSYS_CHANNEL_CHANNEL3_gc (0x04) /* Connect user to event channel 3 */
#define EVSYS_CHANNEL_CHANNEL4_gc (0x05) /* Connect user to event channel 4 */
#define EVSYS_CHANNEL_CHANNEL5_gc (0x06) /* Connect user to event channel 5 */


/* Channel selector */
/* EVSYS_CHANNEL_OFF_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL0_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL1_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL2_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL3_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL4_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL5_gc ALREADY DEFINED */


/* Channel selector */
/* EVSYS_CHANNEL_OFF_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL0_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL1_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL2_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL3_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL4_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL5_gc ALREADY DEFINED */


/* Channel selector */
/* EVSYS_CHANNEL_OFF_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL0_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL1_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL2_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL3_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL4_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL5_gc ALREADY DEFINED */


/* Channel selector */
/* EVSYS_CHANNEL_OFF_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL0_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL1_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL2_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL3_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL4_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL5_gc ALREADY DEFINED */


/* Channel selector */
/* EVSYS_CHANNEL_OFF_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL0_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL1_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL2_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL3_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL4_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL5_gc ALREADY DEFINED */


/* Channel selector */
/* EVSYS_CHANNEL_OFF_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL0_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL1_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL2_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL3_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL4_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL5_gc ALREADY DEFINED */


/* Channel selector */
/* EVSYS_CHANNEL_OFF_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL0_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL1_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL2_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL3_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL4_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL5_gc ALREADY DEFINED */


/* Channel selector */
/* EVSYS_CHANNEL_OFF_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL0_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL1_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL2_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL3_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL4_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL5_gc ALREADY DEFINED */


/* Channel selector */
/* EVSYS_CHANNEL_OFF_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL0_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL1_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL2_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL3_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL4_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL5_gc ALREADY DEFINED */


/* Channel selector */
/* EVSYS_CHANNEL_OFF_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL0_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL1_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL2_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL3_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL4_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL5_gc ALREADY DEFINED */


/* Channel selector */
/* EVSYS_CHANNEL_OFF_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL0_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL1_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL2_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL3_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL4_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL5_gc ALREADY DEFINED */


/* Channel selector */
/* EVSYS_CHANNEL_OFF_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL0_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL1_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL2_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL3_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL4_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL5_gc ALREADY DEFINED */


/* Channel selector */
/* EVSYS_CHANNEL_OFF_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL0_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL1_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL2_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL3_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL4_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL5_gc ALREADY DEFINED */


/* Channel selector */
/* EVSYS_CHANNEL_OFF_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL0_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL1_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL2_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL3_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL4_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL5_gc ALREADY DEFINED */


/* Channel selector */
/* EVSYS_CHANNEL_OFF_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL0_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL1_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL2_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL3_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL4_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL5_gc ALREADY DEFINED */


/* Channel selector */
/* EVSYS_CHANNEL_OFF_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL0_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL1_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL2_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL3_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL4_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL5_gc ALREADY DEFINED */


/* Channel selector */
/* EVSYS_CHANNEL_OFF_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL0_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL1_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL2_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL3_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL4_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL5_gc ALREADY DEFINED */


/* Channel selector */
/* EVSYS_CHANNEL_OFF_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL0_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL1_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL2_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL3_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL4_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL5_gc ALREADY DEFINED */


/* Channel selector */
/* EVSYS_CHANNEL_OFF_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL0_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL1_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL2_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL3_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL4_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL5_gc ALREADY DEFINED */


/* Channel selector */
/* EVSYS_CHANNEL_OFF_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL0_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL1_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL2_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL3_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL4_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL5_gc ALREADY DEFINED */


/* Channel selector */
/* EVSYS_CHANNEL_OFF_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL0_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL1_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL2_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL3_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL4_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL5_gc ALREADY DEFINED */


/* Channel selector */
/* EVSYS_CHANNEL_OFF_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL0_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL1_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL2_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL3_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL4_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL5_gc ALREADY DEFINED */


/* Channel selector */
/* EVSYS_CHANNEL_OFF_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL0_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL1_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL2_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL3_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL4_gc ALREADY DEFINED */
/* EVSYS_CHANNEL_CHANNEL5_gc ALREADY DEFINED */


/*
--------------------------------------------------------------------------------
FUSE - Fuses
--------------------------------------------------------------------------------
*/


/* BOD Operation in Active Mode */
#define FUSE_ACTIVE_DIS_gc     (0x00<<2) /* Disabled */
#define FUSE_ACTIVE_ENABLED_gc (0x01<<2) /* Enabled */
#define FUSE_ACTIVE_SAMPLED_gc (0x02<<2) /* Sampled */
#define FUSE_ACTIVE_ENWAKE_gc  (0x03<<2) /* Enabled with wake-up halted until BOD is ready */


/* BOD Level */
#define FUSE_LVL_BODLEVEL0_gc (0x00<<5) /* 1.8 V */
#define FUSE_LVL_BODLEVEL2_gc (0x02<<5) /* 2.6 V */
#define FUSE_LVL_BODLEVEL7_gc (0x07<<5) /* 4.2 V */


/* BOD Sample Frequency */
#define FUSE_SAMPFREQ_1KHZ_gc  (0x00<<4) /* 1kHz sampling frequency */
#define FUSE_SAMPFREQ_125HZ_gc (0x01<<4) /* 125Hz sampling frequency */


/* BOD Operation in Sleep Mode */
#define FUSE_SLEEP_DIS_gc     (0x00) /* Disabled */
#define FUSE_SLEEP_ENABLED_gc (0x01) /* Enabled */
#define FUSE_SLEEP_SAMPLED_gc (0x02) /* Sampled */


/* Frequency Select */
#define FUSE_FREQSEL_16MHZ_gc (0x01) /* 16 MHz */
#define FUSE_FREQSEL_20MHZ_gc (0x02) /* 20 MHz */


/* Oscillator Lock */
#define FUSE_OSCLOCK_CLEAR_gc (0x00) /* Oscillator Lock - CLEAR */
#define FUSE_OSCLOCK_SET_gc   (0x80) /* Oscillator Lock - SET */


/* CRC Source */
#define FUSE_CRCSRC_FLASH_gc   (0x00<<6) /* The CRC is performed on the entire Flash (boot, application code and application data section). */
#define FUSE_CRCSRC_BOOT_gc    (0x01<<6) /* The CRC is performed on the boot section of Flash */
#define FUSE_CRCSRC_BOOTAPP_gc (0x02<<6) /* The CRC is performed on the boot and application code section of Flash */
#define FUSE_CRCSRC_NOCRC_gc   (0x03<<6) /* Disable CRC. */


/* EEPROM Save */
#define FUSE_EESAVE_CLEAR_gc (0x00) /* EEPROM Save - CLEAR */
#define FUSE_EESAVE_SET_gc   (0x01) /* EEPROM Save - SET */


/* Reset Pin Configuration */
#define FUSE_RSTPINCFG_GPIO_gc (0x00<<3) /* GPIO mode */
#define FUSE_RSTPINCFG_RST_gc  (0x01<<3) /* Reset mode */


/* Startup Time */
#define FUSE_SUT_0MS_gc  (0x00) /* 0 ms */
#define FUSE_SUT_1MS_gc  (0x01) /* 1 ms */
#define FUSE_SUT_2MS_gc  (0x02) /* 2 ms */
#define FUSE_SUT_4MS_gc  (0x03) /* 4 ms */
#define FUSE_SUT_8MS_gc  (0x04) /* 8 ms */
#define FUSE_SUT_16MS_gc (0x05) /* 16 ms */
#define FUSE_SUT_32MS_gc (0x06) /* 32 ms */
#define FUSE_SUT_64MS_gc (0x07) /* 64 ms */


/* Watchdog Timeout Period */
#define FUSE_PERIOD_OFF_gc    (0x00) /* Off */
#define FUSE_PERIOD_8CLK_gc   (0x01) /* 8 cycles (8ms) */
#define FUSE_PERIOD_16CLK_gc  (0x02) /* 16 cycles (16ms) */
#define FUSE_PERIOD_32CLK_gc  (0x03) /* 32 cycles (32ms) */
#define FUSE_PERIOD_64CLK_gc  (0x04) /* 64 cycles (64ms) */
#define FUSE_PERIOD_128CLK_gc (0x05) /* 128 cycles (0.128s) */
#define FUSE_PERIOD_256CLK_gc (0x06) /* 256 cycles (0.256s) */
#define FUSE_PERIOD_512CLK_gc (0x07) /* 512 cycles (0.512s) */
#define FUSE_PERIOD_1KCLK_gc  (0x08) /* 1K cycles (1.0s) */
#define FUSE_PERIOD_2KCLK_gc  (0x09) /* 2K cycles (2.0s) */
#define FUSE_PERIOD_4KCLK_gc  (0x0A) /* 4K cycles (4.1s) */
#define FUSE_PERIOD_8KCLK_gc  (0x0B) /* 8K cycles (8.2s) */


/* Watchdog Window Timeout Period */
#define FUSE_WINDOW_OFF_gc    (0x00<<4) /* Off */
#define FUSE_WINDOW_8CLK_gc   (0x01<<4) /* 8 cycles (8ms) */
#define FUSE_WINDOW_16CLK_gc  (0x02<<4) /* 16 cycles (16ms) */
#define FUSE_WINDOW_32CLK_gc  (0x03<<4) /* 32 cycles (32ms) */
#define FUSE_WINDOW_64CLK_gc  (0x04<<4) /* 64 cycles (64ms) */
#define FUSE_WINDOW_128CLK_gc (0x05<<4) /* 128 cycles (0.128s) */
#define FUSE_WINDOW_256CLK_gc (0x06<<4) /* 256 cycles (0.256s) */
#define FUSE_WINDOW_512CLK_gc (0x07<<4) /* 512 cycles (0.512s) */
#define FUSE_WINDOW_1KCLK_gc  (0x08<<4) /* 1K cycles (1.0s) */
#define FUSE_WINDOW_2KCLK_gc  (0x09<<4) /* 2K cycles (2.0s) */
#define FUSE_WINDOW_4KCLK_gc  (0x0A<<4) /* 4K cycles (4.1s) */
#define FUSE_WINDOW_8KCLK_gc  (0x0B<<4) /* 8K cycles (8.2s) */


/*
--------------------------------------------------------------------------------
GPIO - General Purpose IO
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
LOCKBIT - Lockbit
--------------------------------------------------------------------------------
*/


/* Lock Bits */
#define LOCKBIT_LB_RWLOCK_gc (0x3A) /* Read and write lock */
#define LOCKBIT_LB_NOLOCK_gc (0xC5) /* No locks */


/*
--------------------------------------------------------------------------------
NVMCTRL - Non-volatile Memory Controller
--------------------------------------------------------------------------------
*/


/* Command */
#define NVMCTRL_CMD_NONE_gc           (0x00) /* No Command */
#define NVMCTRL_CMD_PAGEWRITE_gc      (0x01) /* Write page */
#define NVMCTRL_CMD_PAGEERASE_gc      (0x02) /* Erase page */
#define NVMCTRL_CMD_PAGEERASEWRITE_gc (0x03) /* Erase and write page */
#define NVMCTRL_CMD_PAGEBUFCLR_gc     (0x04) /* Page buffer clear */
#define NVMCTRL_CMD_CHIPERASE_gc      (0x05) /* Chip erase */
#define NVMCTRL_CMD_EEERASE_gc        (0x06) /* EEPROM erase */
#define NVMCTRL_CMD_FUSEWRITE_gc      (0x07) /* Write fuse (PDI only) */


/* Application code write protect */
#define NVMCTRL_APCWP_CLEAR_gc (0x00) /* Application code write protect - CLEAR */
#define NVMCTRL_APCWP_SET_gc   (0x01) /* Application code write protect - SET */


/* Boot Lock */
#define NVMCTRL_BOOTLOCK_CLEAR_gc (0x00) /* Boot Lock - CLEAR */
#define NVMCTRL_BOOTLOCK_SET_gc   (0x02) /* Boot Lock - SET */


/* EEPROM Ready */
#define NVMCTRL_EEREADY_CLEAR_gc (0x00) /* EEPROM Ready - CLEAR */
#define NVMCTRL_EEREADY_SET_gc   (0x01) /* EEPROM Ready - SET */


/* EEPROM Ready */
/* NVMCTRL_EEREADY_CLEAR_gc ALREADY DEFINED */
/* NVMCTRL_EEREADY_SET_gc ALREADY DEFINED */


/* EEPROM busy */
#define NVMCTRL_EEBUSY_CLEAR_gc (0x00) /* EEPROM busy - CLEAR */
#define NVMCTRL_EEBUSY_SET_gc   (0x02) /* EEPROM busy - SET */


/* Flash busy */
#define NVMCTRL_FBUSY_CLEAR_gc (0x00) /* Flash busy - CLEAR */
#define NVMCTRL_FBUSY_SET_gc   (0x01) /* Flash busy - SET */


/* Write error */
#define NVMCTRL_WRERROR_CLEAR_gc (0x00) /* Write error - CLEAR */
#define NVMCTRL_WRERROR_SET_gc   (0x04) /* Write error - SET */


/*
--------------------------------------------------------------------------------
PORT - I/O Ports
--------------------------------------------------------------------------------
*/


/* Inverted I/O Enable */
#define PORT_INVEN_CLEAR_gc (0x00) /* Inverted I/O Enable - CLEAR */
#define PORT_INVEN_SET_gc   (0x80) /* Inverted I/O Enable - SET */


/* Input/Sense Configuration */
#define PORT_ISC_INTDISABLE_gc    (0x00) /* Interrupt disabled but input buffer enabled */
#define PORT_ISC_BOTHEDGES_gc     (0x01) /* Sense Both Edges */
#define PORT_ISC_RISING_gc        (0x02) /* Sense Rising Edge */
#define PORT_ISC_FALLING_gc       (0x03) /* Sense Falling Edge */
#define PORT_ISC_INPUT_DISABLE_gc (0x04) /* Digital Input Buffer disabled */
#define PORT_ISC_LEVEL_gc         (0x05) /* Sense low Level */


/* Pullup enable */
#define PORT_PULLUPEN_CLEAR_gc (0x00) /* Pullup enable - CLEAR */
#define PORT_PULLUPEN_SET_gc   (0x08) /* Pullup enable - SET */


/* Inverted I/O Enable */
/* PORT_INVEN_CLEAR_gc ALREADY DEFINED */
/* PORT_INVEN_SET_gc ALREADY DEFINED */


/* Input/Sense Configuration */
/* PORT_ISC_INTDISABLE_gc ALREADY DEFINED */
/* PORT_ISC_BOTHEDGES_gc ALREADY DEFINED */
/* PORT_ISC_RISING_gc ALREADY DEFINED */
/* PORT_ISC_FALLING_gc ALREADY DEFINED */
/* PORT_ISC_INPUT_DISABLE_gc ALREADY DEFINED */
/* PORT_ISC_LEVEL_gc ALREADY DEFINED */


/* Pullup enable */
/* PORT_PULLUPEN_CLEAR_gc ALREADY DEFINED */
/* PORT_PULLUPEN_SET_gc ALREADY DEFINED */


/* Inverted I/O Enable */
/* PORT_INVEN_CLEAR_gc ALREADY DEFINED */
/* PORT_INVEN_SET_gc ALREADY DEFINED */


/* Input/Sense Configuration */
/* PORT_ISC_INTDISABLE_gc ALREADY DEFINED */
/* PORT_ISC_BOTHEDGES_gc ALREADY DEFINED */
/* PORT_ISC_RISING_gc ALREADY DEFINED */
/* PORT_ISC_FALLING_gc ALREADY DEFINED */
/* PORT_ISC_INPUT_DISABLE_gc ALREADY DEFINED */
/* PORT_ISC_LEVEL_gc ALREADY DEFINED */


/* Pullup enable */
/* PORT_PULLUPEN_CLEAR_gc ALREADY DEFINED */
/* PORT_PULLUPEN_SET_gc ALREADY DEFINED */


/* Inverted I/O Enable */
/* PORT_INVEN_CLEAR_gc ALREADY DEFINED */
/* PORT_INVEN_SET_gc ALREADY DEFINED */


/* Input/Sense Configuration */
/* PORT_ISC_INTDISABLE_gc ALREADY DEFINED */
/* PORT_ISC_BOTHEDGES_gc ALREADY DEFINED */
/* PORT_ISC_RISING_gc ALREADY DEFINED */
/* PORT_ISC_FALLING_gc ALREADY DEFINED */
/* PORT_ISC_INPUT_DISABLE_gc ALREADY DEFINED */
/* PORT_ISC_LEVEL_gc ALREADY DEFINED */


/* Pullup enable */
/* PORT_PULLUPEN_CLEAR_gc ALREADY DEFINED */
/* PORT_PULLUPEN_SET_gc ALREADY DEFINED */


/* Inverted I/O Enable */
/* PORT_INVEN_CLEAR_gc ALREADY DEFINED */
/* PORT_INVEN_SET_gc ALREADY DEFINED */


/* Input/Sense Configuration */
/* PORT_ISC_INTDISABLE_gc ALREADY DEFINED */
/* PORT_ISC_BOTHEDGES_gc ALREADY DEFINED */
/* PORT_ISC_RISING_gc ALREADY DEFINED */
/* PORT_ISC_FALLING_gc ALREADY DEFINED */
/* PORT_ISC_INPUT_DISABLE_gc ALREADY DEFINED */
/* PORT_ISC_LEVEL_gc ALREADY DEFINED */


/* Pullup enable */
/* PORT_PULLUPEN_CLEAR_gc ALREADY DEFINED */
/* PORT_PULLUPEN_SET_gc ALREADY DEFINED */


/* Inverted I/O Enable */
/* PORT_INVEN_CLEAR_gc ALREADY DEFINED */
/* PORT_INVEN_SET_gc ALREADY DEFINED */


/* Input/Sense Configuration */
/* PORT_ISC_INTDISABLE_gc ALREADY DEFINED */
/* PORT_ISC_BOTHEDGES_gc ALREADY DEFINED */
/* PORT_ISC_RISING_gc ALREADY DEFINED */
/* PORT_ISC_FALLING_gc ALREADY DEFINED */
/* PORT_ISC_INPUT_DISABLE_gc ALREADY DEFINED */
/* PORT_ISC_LEVEL_gc ALREADY DEFINED */


/* Pullup enable */
/* PORT_PULLUPEN_CLEAR_gc ALREADY DEFINED */
/* PORT_PULLUPEN_SET_gc ALREADY DEFINED */


/* Inverted I/O Enable */
/* PORT_INVEN_CLEAR_gc ALREADY DEFINED */
/* PORT_INVEN_SET_gc ALREADY DEFINED */


/* Input/Sense Configuration */
/* PORT_ISC_INTDISABLE_gc ALREADY DEFINED */
/* PORT_ISC_BOTHEDGES_gc ALREADY DEFINED */
/* PORT_ISC_RISING_gc ALREADY DEFINED */
/* PORT_ISC_FALLING_gc ALREADY DEFINED */
/* PORT_ISC_INPUT_DISABLE_gc ALREADY DEFINED */
/* PORT_ISC_LEVEL_gc ALREADY DEFINED */


/* Pullup enable */
/* PORT_PULLUPEN_CLEAR_gc ALREADY DEFINED */
/* PORT_PULLUPEN_SET_gc ALREADY DEFINED */


/* Inverted I/O Enable */
/* PORT_INVEN_CLEAR_gc ALREADY DEFINED */
/* PORT_INVEN_SET_gc ALREADY DEFINED */


/* Input/Sense Configuration */
/* PORT_ISC_INTDISABLE_gc ALREADY DEFINED */
/* PORT_ISC_BOTHEDGES_gc ALREADY DEFINED */
/* PORT_ISC_RISING_gc ALREADY DEFINED */
/* PORT_ISC_FALLING_gc ALREADY DEFINED */
/* PORT_ISC_INPUT_DISABLE_gc ALREADY DEFINED */
/* PORT_ISC_LEVEL_gc ALREADY DEFINED */


/* Pullup enable */
/* PORT_PULLUPEN_CLEAR_gc ALREADY DEFINED */
/* PORT_PULLUPEN_SET_gc ALREADY DEFINED */


/* Slew Rate Limit Enable */
#define PORT_SRL_CLEAR_gc (0x00) /* Slew Rate Limit Enable - CLEAR */
#define PORT_SRL_SET_gc   (0x01) /* Slew Rate Limit Enable - SET */


/*
--------------------------------------------------------------------------------
PORTMUX - Port Multiplexer
--------------------------------------------------------------------------------
*/


/* CCL LUT0 */
#define PORTMUX_LUT0_CLEAR_gc (0x00) /* CCL LUT0 - CLEAR */
#define PORTMUX_LUT0_SET_gc   (0x01) /* CCL LUT0 - SET */


/* CCL LUT1 */
#define PORTMUX_LUT1_CLEAR_gc (0x00) /* CCL LUT1 - CLEAR */
#define PORTMUX_LUT1_SET_gc   (0x02) /* CCL LUT1 - SET */


/* CCL LUT2 */
#define PORTMUX_LUT2_CLEAR_gc (0x00) /* CCL LUT2 - CLEAR */
#define PORTMUX_LUT2_SET_gc   (0x04) /* CCL LUT2 - SET */


/* CCL LUT3 */
#define PORTMUX_LUT3_CLEAR_gc (0x00) /* CCL LUT3 - CLEAR */
#define PORTMUX_LUT3_SET_gc   (0x08) /* CCL LUT3 - SET */


/* Event Output 0 */
#define PORTMUX_EVOUT0_CLEAR_gc (0x00) /* Event Output 0 - CLEAR */
#define PORTMUX_EVOUT0_SET_gc   (0x01) /* Event Output 0 - SET */


/* Event Output 1 */
#define PORTMUX_EVOUT1_CLEAR_gc (0x00) /* Event Output 1 - CLEAR */
#define PORTMUX_EVOUT1_SET_gc   (0x02) /* Event Output 1 - SET */


/* Event Output 2 */
#define PORTMUX_EVOUT2_CLEAR_gc (0x00) /* Event Output 2 - CLEAR */
#define PORTMUX_EVOUT2_SET_gc   (0x04) /* Event Output 2 - SET */


/* Event Output 3 */
#define PORTMUX_EVOUT3_CLEAR_gc (0x00) /* Event Output 3 - CLEAR */
#define PORTMUX_EVOUT3_SET_gc   (0x08) /* Event Output 3 - SET */


/* Event Output 4 */
#define PORTMUX_EVOUT4_CLEAR_gc (0x00) /* Event Output 4 - CLEAR */
#define PORTMUX_EVOUT4_SET_gc   (0x10) /* Event Output 4 - SET */


/* Event Output 5 */
#define PORTMUX_EVOUT5_CLEAR_gc (0x00) /* Event Output 5 - CLEAR */
#define PORTMUX_EVOUT5_SET_gc   (0x20) /* Event Output 5 - SET */


/* Port Multiplexer TCA0 */
#define PORTMUX_TCA0_PORTA_gc (0x00) /* TCA0 pins on PA[5:0] */
#define PORTMUX_TCA0_PORTB_gc (0x01) /* TCA0 pins on PB[5:0] */
#define PORTMUX_TCA0_PORTC_gc (0x02) /* TCA0 pins on PC[5:0] */
#define PORTMUX_TCA0_PORTD_gc (0x03) /* TCA0 pins on PD[5:0] */
#define PORTMUX_TCA0_PORTE_gc (0x04) /* TCA0 pins on PE[5:0] */
#define PORTMUX_TCA0_PORTF_gc (0x05) /* TCA0 pins on PF[5:0] */


/* Port Multiplexer TCB0 */
#define PORTMUX_TCB0_CLEAR_gc (0x00) /* Port Multiplexer TCB0 - CLEAR */
#define PORTMUX_TCB0_SET_gc   (0x01) /* Port Multiplexer TCB0 - SET */


/* Port Multiplexer TCB1 */
#define PORTMUX_TCB1_CLEAR_gc (0x00) /* Port Multiplexer TCB1 - CLEAR */
#define PORTMUX_TCB1_SET_gc   (0x02) /* Port Multiplexer TCB1 - SET */


/* Port Multiplexer TCB2 */
#define PORTMUX_TCB2_CLEAR_gc (0x00) /* Port Multiplexer TCB2 - CLEAR */
#define PORTMUX_TCB2_SET_gc   (0x04) /* Port Multiplexer TCB2 - SET */


/* Port Multiplexer TCB3 */
#define PORTMUX_TCB3_CLEAR_gc (0x00) /* Port Multiplexer TCB3 - CLEAR */
#define PORTMUX_TCB3_SET_gc   (0x08) /* Port Multiplexer TCB3 - SET */


/* Port Multiplexer SPI0 */
#define PORTMUX_SPI0_DEFAULT_gc (0x00) /* SPI0 on PA[7:4] */
#define PORTMUX_SPI0_ALT1_gc    (0x01) /* SPI0 on PC[3:0] */
#define PORTMUX_SPI0_ALT2_gc    (0x02) /* SPI0 on PE[3:0] */
#define PORTMUX_SPI0_NONE_gc    (0x03) /* Not connected to any pins */


/* Port Multiplexer TWI0 */
#define PORTMUX_TWI0_DEFAULT_gc (0x00<<4) /* SCL/SDA on PA[3:2], Slave mode on PC[3:2] in dual TWI mode */
#define PORTMUX_TWI0_ALT1_gc    (0x01<<4) /* SCL/SDA on PA[3:2], Slave mode on PF[3:2] in dual TWI mode */
#define PORTMUX_TWI0_ALT2_gc    (0x02<<4) /* SCL/SDA on PC[3:2], Slave mode on PF[3:2] in dual TWI mode */
#define PORTMUX_TWI0_NONE_gc    (0x03<<4) /* Not connected to any pins */


/* Port Multiplexer USART0 */
#define PORTMUX_USART0_DEFAULT_gc (0x00) /* USART0 on PA[3:0] */
#define PORTMUX_USART0_ALT1_gc    (0x01) /* USART0 on PA[7:4] */
#define PORTMUX_USART0_NONE_gc    (0x03) /* Not connected to any pins */


/* Port Multiplexer USART1 */
#define PORTMUX_USART1_DEFAULT_gc (0x00<<2) /* USART1 on PC[3:0] */
#define PORTMUX_USART1_ALT1_gc    (0x01<<2) /* USART1 on PC[7:4] */
#define PORTMUX_USART1_NONE_gc    (0x03<<2) /* Not connected to any pins */


/* Port Multiplexer USART2 */
#define PORTMUX_USART2_DEFAULT_gc (0x00<<4) /* USART2 on PF[3:0] */
#define PORTMUX_USART2_ALT1_gc    (0x01<<4) /* USART2 on PF[6:4] */
#define PORTMUX_USART2_NONE_gc    (0x03<<4) /* Not connected to any pins */


/* Port Multiplexer USART3 */
#define PORTMUX_USART3_DEFAULT_gc (0x00<<6) /* USART3 on PB[3:0] */
#define PORTMUX_USART3_ALT1_gc    (0x01<<6) /* USART3 on PB[5:4] */
#define PORTMUX_USART3_NONE_gc    (0x03<<6) /* Not connected to any pins */


/*
--------------------------------------------------------------------------------
RSTCTRL - Reset controller
--------------------------------------------------------------------------------
*/


/* Brown out detector Reset flag */
#define RSTCTRL_BORF_CLEAR_gc (0x00) /* Brown out detector Reset flag - CLEAR */
#define RSTCTRL_BORF_SET_gc   (0x02) /* Brown out detector Reset flag - SET */


/* External Reset flag */
#define RSTCTRL_EXTRF_CLEAR_gc (0x00) /* External Reset flag - CLEAR */
#define RSTCTRL_EXTRF_SET_gc   (0x04) /* External Reset flag - SET */


/* Power on Reset flag */
#define RSTCTRL_PORF_CLEAR_gc (0x00) /* Power on Reset flag - CLEAR */
#define RSTCTRL_PORF_SET_gc   (0x01) /* Power on Reset flag - SET */


/* Software Reset flag */
#define RSTCTRL_SWRF_CLEAR_gc (0x00) /* Software Reset flag - CLEAR */
#define RSTCTRL_SWRF_SET_gc   (0x10) /* Software Reset flag - SET */


/* UPDI Reset flag */
#define RSTCTRL_UPDIRF_CLEAR_gc (0x00) /* UPDI Reset flag - CLEAR */
#define RSTCTRL_UPDIRF_SET_gc   (0x20) /* UPDI Reset flag - SET */


/* Watch dog Reset flag */
#define RSTCTRL_WDRF_CLEAR_gc (0x00) /* Watch dog Reset flag - CLEAR */
#define RSTCTRL_WDRF_SET_gc   (0x08) /* Watch dog Reset flag - SET */


/* Software reset enable */
#define RSTCTRL_SWRE_CLEAR_gc (0x00) /* Software reset enable - CLEAR */
#define RSTCTRL_SWRE_SET_gc   (0x01) /* Software reset enable - SET */


/*
--------------------------------------------------------------------------------
RTC - Real-Time Counter
--------------------------------------------------------------------------------
*/


/* Error Correction Value */
#define RTC_CALIB_ERROR_gc(x) (x & 0x7F)

/* Error Correction Sign Bit */
#define RTC_SIGN_CLEAR_gc (0x00) /* Error Correction Sign Bit - CLEAR */
#define RTC_SIGN_SET_gc   (0x80) /* Error Correction Sign Bit - SET */


/* Clock Select */
#define RTC_CLKSEL_INT32K_gc  (0x00) /* Internal 32kHz OSC */
#define RTC_CLKSEL_INT1K_gc   (0x01) /* Internal 1kHz OSC */
#define RTC_CLKSEL_TOSC32K_gc (0x02) /* 32KHz Crystal OSC */
#define RTC_CLKSEL_EXTCLK_gc  (0x03) /* External Clock */


/* Correction enable */
#define RTC_CORREN_CLEAR_gc (0x00) /* Correction enable - CLEAR */
#define RTC_CORREN_SET_gc   (0x04) /* Correction enable - SET */


/* Prescaling Factor */
#define RTC_PRESCALER_DIV1_gc     (0x00<<3) /* RTC Clock / 1 */
#define RTC_PRESCALER_DIV2_gc     (0x01<<3) /* RTC Clock / 2 */
#define RTC_PRESCALER_DIV4_gc     (0x02<<3) /* RTC Clock / 4 */
#define RTC_PRESCALER_DIV8_gc     (0x03<<3) /* RTC Clock / 8 */
#define RTC_PRESCALER_DIV16_gc    (0x04<<3) /* RTC Clock / 16 */
#define RTC_PRESCALER_DIV32_gc    (0x05<<3) /* RTC Clock / 32 */
#define RTC_PRESCALER_DIV64_gc    (0x06<<3) /* RTC Clock / 64 */
#define RTC_PRESCALER_DIV128_gc   (0x07<<3) /* RTC Clock / 128 */
#define RTC_PRESCALER_DIV256_gc   (0x08<<3) /* RTC Clock / 256 */
#define RTC_PRESCALER_DIV512_gc   (0x09<<3) /* RTC Clock / 512 */
#define RTC_PRESCALER_DIV1024_gc  (0x0A<<3) /* RTC Clock / 1024 */
#define RTC_PRESCALER_DIV2048_gc  (0x0B<<3) /* RTC Clock / 2048 */
#define RTC_PRESCALER_DIV4096_gc  (0x0C<<3) /* RTC Clock / 4096 */
#define RTC_PRESCALER_DIV8192_gc  (0x0D<<3) /* RTC Clock / 8192 */
#define RTC_PRESCALER_DIV16384_gc (0x0E<<3) /* RTC Clock / 16384 */
#define RTC_PRESCALER_DIV32768_gc (0x0F<<3) /* RTC Clock / 32768 */


/* Enable */
#define RTC_RTCEN_CLEAR_gc (0x00) /* Enable - CLEAR */
#define RTC_RTCEN_SET_gc   (0x01) /* Enable - SET */


/* Run In Standby */
#define RTC_RUNSTDBY_CLEAR_gc (0x00) /* Run In Standby - CLEAR */
#define RTC_RUNSTDBY_SET_gc   (0x80) /* Run In Standby - SET */


/* Run in debug */
#define RTC_DBGRUN_CLEAR_gc (0x00) /* Run in debug - CLEAR */
#define RTC_DBGRUN_SET_gc   (0x01) /* Run in debug - SET */


/* Compare Match Interrupt enable */
#define RTC_CMP_CLEAR_gc (0x00) /* Compare Match Interrupt enable - CLEAR */
#define RTC_CMP_SET_gc   (0x02) /* Compare Match Interrupt enable - SET */


/* Overflow Interrupt enable */
#define RTC_OVF_CLEAR_gc (0x00) /* Overflow Interrupt enable - CLEAR */
#define RTC_OVF_SET_gc   (0x01) /* Overflow Interrupt enable - SET */


/* Compare Match Interrupt */
/* RTC_CMP_CLEAR_gc ALREADY DEFINED */
/* RTC_CMP_SET_gc ALREADY DEFINED */


/* Overflow Interrupt Flag */
/* RTC_OVF_CLEAR_gc ALREADY DEFINED */
/* RTC_OVF_SET_gc ALREADY DEFINED */


/* Period */
#define RTC_PERIOD_OFF_gc      (0x00<<3) /* Off */
#define RTC_PERIOD_CYC4_gc     (0x01<<3) /* RTC Clock Cycles 4 */
#define RTC_PERIOD_CYC8_gc     (0x02<<3) /* RTC Clock Cycles 8 */
#define RTC_PERIOD_CYC16_gc    (0x03<<3) /* RTC Clock Cycles 16 */
#define RTC_PERIOD_CYC32_gc    (0x04<<3) /* RTC Clock Cycles 32 */
#define RTC_PERIOD_CYC64_gc    (0x05<<3) /* RTC Clock Cycles 64 */
#define RTC_PERIOD_CYC128_gc   (0x06<<3) /* RTC Clock Cycles 128 */
#define RTC_PERIOD_CYC256_gc   (0x07<<3) /* RTC Clock Cycles 256 */
#define RTC_PERIOD_CYC512_gc   (0x08<<3) /* RTC Clock Cycles 512 */
#define RTC_PERIOD_CYC1024_gc  (0x09<<3) /* RTC Clock Cycles 1024 */
#define RTC_PERIOD_CYC2048_gc  (0x0A<<3) /* RTC Clock Cycles 2048 */
#define RTC_PERIOD_CYC4096_gc  (0x0B<<3) /* RTC Clock Cycles 4096 */
#define RTC_PERIOD_CYC8192_gc  (0x0C<<3) /* RTC Clock Cycles 8192 */
#define RTC_PERIOD_CYC16384_gc (0x0D<<3) /* RTC Clock Cycles 16384 */
#define RTC_PERIOD_CYC32768_gc (0x0E<<3) /* RTC Clock Cycles 32768 */


/* Enable */
#define RTC_PITEN_CLEAR_gc (0x00) /* Enable - CLEAR */
#define RTC_PITEN_SET_gc   (0x01) /* Enable - SET */


/* Run in debug */
/* RTC_DBGRUN_CLEAR_gc ALREADY DEFINED */
/* RTC_DBGRUN_SET_gc ALREADY DEFINED */


/* Periodic Interrupt */
#define RTC_PI_CLEAR_gc (0x00) /* Periodic Interrupt - CLEAR */
#define RTC_PI_SET_gc   (0x01) /* Periodic Interrupt - SET */


/* Periodic Interrupt */
/* RTC_PI_CLEAR_gc ALREADY DEFINED */
/* RTC_PI_SET_gc ALREADY DEFINED */


/* CTRLA Synchronization Busy Flag */
#define RTC_CTRLBUSY_CLEAR_gc (0x00) /* CTRLA Synchronization Busy Flag - CLEAR */
#define RTC_CTRLBUSY_SET_gc   (0x01) /* CTRLA Synchronization Busy Flag - SET */


/* Comparator Synchronization Busy Flag */
#define RTC_CMPBUSY_CLEAR_gc (0x00) /* Comparator Synchronization Busy Flag - CLEAR */
#define RTC_CMPBUSY_SET_gc   (0x08) /* Comparator Synchronization Busy Flag - SET */


/* Count Synchronization Busy Flag */
#define RTC_CNTBUSY_CLEAR_gc (0x00) /* Count Synchronization Busy Flag - CLEAR */
#define RTC_CNTBUSY_SET_gc   (0x02) /* Count Synchronization Busy Flag - SET */


/* CTRLA Synchronization Busy Flag */
#define RTC_CTRLABUSY_CLEAR_gc (0x00) /* CTRLA Synchronization Busy Flag - CLEAR */
#define RTC_CTRLABUSY_SET_gc   (0x01) /* CTRLA Synchronization Busy Flag - SET */


/* Period Synchronization Busy Flag */
#define RTC_PERBUSY_CLEAR_gc (0x00) /* Period Synchronization Busy Flag - CLEAR */
#define RTC_PERBUSY_SET_gc   (0x04) /* Period Synchronization Busy Flag - SET */


/*
--------------------------------------------------------------------------------
SIGROW - Signature row
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
SLPCTRL - Sleep Controller
--------------------------------------------------------------------------------
*/


/* Sleep enable */
#define SLPCTRL_SEN_CLEAR_gc (0x00) /* Sleep enable - CLEAR */
#define SLPCTRL_SEN_SET_gc   (0x01) /* Sleep enable - SET */


/* Sleep mode */
#define SLPCTRL_SMODE_IDLE_gc  (0x00<<1) /* Idle mode */
#define SLPCTRL_SMODE_STDBY_gc (0x01<<1) /* Standby Mode */
#define SLPCTRL_SMODE_PDOWN_gc (0x02<<1) /* Power-down Mode */


/*
--------------------------------------------------------------------------------
SPI - Serial Peripheral Interface
--------------------------------------------------------------------------------
*/


/* Enable Double Speed */
#define SPI_CLK2X_CLEAR_gc (0x00) /* Enable Double Speed - CLEAR */
#define SPI_CLK2X_SET_gc   (0x10) /* Enable Double Speed - SET */


/* Data Order Setting */
#define SPI_DORD_CLEAR_gc (0x00) /* Data Order Setting - CLEAR */
#define SPI_DORD_SET_gc   (0x40) /* Data Order Setting - SET */


/* Enable Module */
#define SPI_ENABLE_CLEAR_gc (0x00) /* Enable Module - CLEAR */
#define SPI_ENABLE_SET_gc   (0x01) /* Enable Module - SET */


/* Master Operation Enable */
#define SPI_MASTER_CLEAR_gc (0x00) /* Master Operation Enable - CLEAR */
#define SPI_MASTER_SET_gc   (0x20) /* Master Operation Enable - SET */


/* Prescaler */
#define SPI_PRESC_DIV4_gc   (0x00<<1) /* System Clock / 4 */
#define SPI_PRESC_DIV16_gc  (0x01<<1) /* System Clock / 16 */
#define SPI_PRESC_DIV64_gc  (0x02<<1) /* System Clock / 64 */
#define SPI_PRESC_DIV128_gc (0x03<<1) /* System Clock / 128 */


/* Buffer Mode Enable */
#define SPI_BUFEN_CLEAR_gc (0x00) /* Buffer Mode Enable - CLEAR */
#define SPI_BUFEN_SET_gc   (0x80) /* Buffer Mode Enable - SET */


/* Buffer Write Mode */
#define SPI_BUFWR_CLEAR_gc (0x00) /* Buffer Write Mode - CLEAR */
#define SPI_BUFWR_SET_gc   (0x40) /* Buffer Write Mode - SET */


/* SPI Mode */
#define SPI_MODE_0_gc (0x00) /* SPI Mode 0 */
#define SPI_MODE_1_gc (0x01) /* SPI Mode 1 */
#define SPI_MODE_2_gc (0x02) /* SPI Mode 2 */
#define SPI_MODE_3_gc (0x03) /* SPI Mode 3 */


/* Slave Select Disable */
#define SPI_SSD_CLEAR_gc (0x00) /* Slave Select Disable - CLEAR */
#define SPI_SSD_SET_gc   (0x04) /* Slave Select Disable - SET */


/* Data Register Empty Interrupt Enable */
#define SPI_DREIE_CLEAR_gc (0x00) /* Data Register Empty Interrupt Enable - CLEAR */
#define SPI_DREIE_SET_gc   (0x20) /* Data Register Empty Interrupt Enable - SET */


/* Interrupt Enable */
#define SPI_IE_CLEAR_gc (0x00) /* Interrupt Enable - CLEAR */
#define SPI_IE_SET_gc   (0x01) /* Interrupt Enable - SET */


/* Receive Complete Interrupt Enable */
#define SPI_RXCIE_CLEAR_gc (0x00) /* Receive Complete Interrupt Enable - CLEAR */
#define SPI_RXCIE_SET_gc   (0x80) /* Receive Complete Interrupt Enable - SET */


/* Slave Select Trigger Interrupt Enable */
#define SPI_SSIE_CLEAR_gc (0x00) /* Slave Select Trigger Interrupt Enable - CLEAR */
#define SPI_SSIE_SET_gc   (0x10) /* Slave Select Trigger Interrupt Enable - SET */


/* Transfer Complete Interrupt Enable */
#define SPI_TXCIE_CLEAR_gc (0x00) /* Transfer Complete Interrupt Enable - CLEAR */
#define SPI_TXCIE_SET_gc   (0x40) /* Transfer Complete Interrupt Enable - SET */


/* Buffer Overflow */
#define SPI_BUFFERED_BUFOVF_CLEAR_gc (0x00) /* Buffer Overflow - CLEAR */
#define SPI_BUFFERED_BUFOVF_SET_gc   (0x01) /* Buffer Overflow - SET */


/* Data Register Empty Interrupt Flag */
#define SPI_BUFFERED_DREIF_CLEAR_gc (0x00) /* Data Register Empty Interrupt Flag - CLEAR */
#define SPI_BUFFERED_DREIF_SET_gc   (0x20) /* Data Register Empty Interrupt Flag - SET */


/* Receive Complete Interrupt Flag */
#define SPI_BUFFERED_RXCIF_CLEAR_gc (0x00) /* Receive Complete Interrupt Flag - CLEAR */
#define SPI_BUFFERED_RXCIF_SET_gc   (0x80) /* Receive Complete Interrupt Flag - SET */


/* Slave Select Trigger Interrupt Flag */
#define SPI_BUFFERED_SSIF_CLEAR_gc (0x00) /* Slave Select Trigger Interrupt Flag - CLEAR */
#define SPI_BUFFERED_SSIF_SET_gc   (0x10) /* Slave Select Trigger Interrupt Flag - SET */


/* Transfer Complete Interrupt Flag */
#define SPI_BUFFERED_TXCIF_CLEAR_gc (0x00) /* Transfer Complete Interrupt Flag - CLEAR */
#define SPI_BUFFERED_TXCIF_SET_gc   (0x40) /* Transfer Complete Interrupt Flag - SET */


/* Interrupt Flag */
#define SPI_DEFAULT_IF_CLEAR_gc (0x00) /* Interrupt Flag - CLEAR */
#define SPI_DEFAULT_IF_SET_gc   (0x80) /* Interrupt Flag - SET */


/* Write Collision */
#define SPI_DEFAULT_WRCOL_CLEAR_gc (0x00) /* Write Collision - CLEAR */
#define SPI_DEFAULT_WRCOL_SET_gc   (0x40) /* Write Collision - SET */


/*
--------------------------------------------------------------------------------
SYSCFG - System Configuration Registers
--------------------------------------------------------------------------------
*/


/* External break enable */
#define SYSCFG_ENEXTBRK_CLEAR_gc (0x00) /* External break enable - CLEAR */
#define SYSCFG_ENEXTBRK_SET_gc   (0x01) /* External break enable - SET */


/* OCD Message Read */
#define SYSCFG_OCDMR_CLEAR_gc (0x00) /* OCD Message Read - CLEAR */
#define SYSCFG_OCDMR_SET_gc   (0x01) /* OCD Message Read - SET */


/*
--------------------------------------------------------------------------------
TCA - 16-bit Timer/Counter Type A
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
TCA - 16-bit Timer/Counter Type A
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
TCA - 16-bit Timer/Counter Type A
--------------------------------------------------------------------------------
*/


/* Clock Selection */
#define TCA_SINGLE_CLKSEL_DIV1_gc    (0x00<<1) /* System Clock */
#define TCA_SINGLE_CLKSEL_DIV2_gc    (0x01<<1) /* System Clock / 2 */
#define TCA_SINGLE_CLKSEL_DIV4_gc    (0x02<<1) /* System Clock / 4 */
#define TCA_SINGLE_CLKSEL_DIV8_gc    (0x03<<1) /* System Clock / 8 */
#define TCA_SINGLE_CLKSEL_DIV16_gc   (0x04<<1) /* System Clock / 16 */
#define TCA_SINGLE_CLKSEL_DIV64_gc   (0x05<<1) /* System Clock / 64 */
#define TCA_SINGLE_CLKSEL_DIV256_gc  (0x06<<1) /* System Clock / 256 */
#define TCA_SINGLE_CLKSEL_DIV1024_gc (0x07<<1) /* System Clock / 1024 */


/* Module Enable */
#define TCA_SINGLE_ENABLE_CLEAR_gc (0x00) /* Module Enable - CLEAR */
#define TCA_SINGLE_ENABLE_SET_gc   (0x01) /* Module Enable - SET */


/* Auto Lock Update */
#define TCA_SINGLE_ALUPD_CLEAR_gc (0x00) /* Auto Lock Update - CLEAR */
#define TCA_SINGLE_ALUPD_SET_gc   (0x08) /* Auto Lock Update - SET */


/* Compare 0 Enable */
#define TCA_SINGLE_CMP0EN_CLEAR_gc (0x00) /* Compare 0 Enable - CLEAR */
#define TCA_SINGLE_CMP0EN_SET_gc   (0x10) /* Compare 0 Enable - SET */


/* Compare 1 Enable */
#define TCA_SINGLE_CMP1EN_CLEAR_gc (0x00) /* Compare 1 Enable - CLEAR */
#define TCA_SINGLE_CMP1EN_SET_gc   (0x20) /* Compare 1 Enable - SET */


/* Compare 2 Enable */
#define TCA_SINGLE_CMP2EN_CLEAR_gc (0x00) /* Compare 2 Enable - CLEAR */
#define TCA_SINGLE_CMP2EN_SET_gc   (0x40) /* Compare 2 Enable - SET */


/* Waveform generation mode */
#define TCA_SINGLE_WGMODE_NORMAL_gc      (0x00) /* Normal Mode */
#define TCA_SINGLE_WGMODE_FRQ_gc         (0x01) /* Frequency Generation Mode */
#define TCA_SINGLE_WGMODE_SINGLESLOPE_gc (0x03) /* Single Slope PWM */
#define TCA_SINGLE_WGMODE_DSTOP_gc       (0x05) /* Dual Slope PWM, overflow on TOP */
#define TCA_SINGLE_WGMODE_DSBOTH_gc      (0x06) /* Dual Slope PWM, overflow on TOP and BOTTOM */
#define TCA_SINGLE_WGMODE_DSBOTTOM_gc    (0x07) /* Dual Slope PWM, overflow on BOTTOM */


/* Compare 0 Waveform Output Value */
#define TCA_SINGLE_CMP0OV_CLEAR_gc (0x00) /* Compare 0 Waveform Output Value - CLEAR */
#define TCA_SINGLE_CMP0OV_SET_gc   (0x01) /* Compare 0 Waveform Output Value - SET */


/* Compare 1 Waveform Output Value */
#define TCA_SINGLE_CMP1OV_CLEAR_gc (0x00) /* Compare 1 Waveform Output Value - CLEAR */
#define TCA_SINGLE_CMP1OV_SET_gc   (0x02) /* Compare 1 Waveform Output Value - SET */


/* Compare 2 Waveform Output Value */
#define TCA_SINGLE_CMP2OV_CLEAR_gc (0x00) /* Compare 2 Waveform Output Value - CLEAR */
#define TCA_SINGLE_CMP2OV_SET_gc   (0x04) /* Compare 2 Waveform Output Value - SET */


/* Split Mode Enable */
#define TCA_SINGLE_SPLITM_CLEAR_gc (0x00) /* Split Mode Enable - CLEAR */
#define TCA_SINGLE_SPLITM_SET_gc   (0x01) /* Split Mode Enable - SET */


/* Command */
#define TCA_SINGLE_CMD_NONE_gc    (0x00<<2) /* No Command */
#define TCA_SINGLE_CMD_UPDATE_gc  (0x01<<2) /* Force Update */
#define TCA_SINGLE_CMD_RESTART_gc (0x02<<2) /* Force Restart */
#define TCA_SINGLE_CMD_RESET_gc   (0x03<<2) /* Force Hard Reset */


/* Direction */
#define TCA_SINGLE_DIR_CLEAR_gc (0x00) /* Direction - CLEAR */
#define TCA_SINGLE_DIR_SET_gc   (0x01) /* Direction - SET */


/* Lock Update */
#define TCA_SINGLE_LUPD_CLEAR_gc (0x00) /* Lock Update - CLEAR */
#define TCA_SINGLE_LUPD_SET_gc   (0x02) /* Lock Update - SET */


/* Command */
/* TCA_SINGLE_CMD_NONE_gc ALREADY DEFINED */
/* TCA_SINGLE_CMD_UPDATE_gc ALREADY DEFINED */
/* TCA_SINGLE_CMD_RESTART_gc ALREADY DEFINED */
/* TCA_SINGLE_CMD_RESET_gc ALREADY DEFINED */


/* Direction */
#define TCA_SINGLE_DIR_UP_gc   (0x00) /* Count up */
#define TCA_SINGLE_DIR_DOWN_gc (0x01) /* Count down */


/* Lock Update */
/* TCA_SINGLE_LUPD_CLEAR_gc ALREADY DEFINED */
/* TCA_SINGLE_LUPD_SET_gc ALREADY DEFINED */


/* Compare 0 Buffer Valid */
#define TCA_SINGLE_CMP0BV_CLEAR_gc (0x00) /* Compare 0 Buffer Valid - CLEAR */
#define TCA_SINGLE_CMP0BV_SET_gc   (0x02) /* Compare 0 Buffer Valid - SET */


/* Compare 1 Buffer Valid */
#define TCA_SINGLE_CMP1BV_CLEAR_gc (0x00) /* Compare 1 Buffer Valid - CLEAR */
#define TCA_SINGLE_CMP1BV_SET_gc   (0x04) /* Compare 1 Buffer Valid - SET */


/* Compare 2 Buffer Valid */
#define TCA_SINGLE_CMP2BV_CLEAR_gc (0x00) /* Compare 2 Buffer Valid - CLEAR */
#define TCA_SINGLE_CMP2BV_SET_gc   (0x08) /* Compare 2 Buffer Valid - SET */


/* Period Buffer Valid */
#define TCA_SINGLE_PERBV_CLEAR_gc (0x00) /* Period Buffer Valid - CLEAR */
#define TCA_SINGLE_PERBV_SET_gc   (0x01) /* Period Buffer Valid - SET */


/* Compare 0 Buffer Valid */
/* TCA_SINGLE_CMP0BV_CLEAR_gc ALREADY DEFINED */
/* TCA_SINGLE_CMP0BV_SET_gc ALREADY DEFINED */


/* Compare 1 Buffer Valid */
/* TCA_SINGLE_CMP1BV_CLEAR_gc ALREADY DEFINED */
/* TCA_SINGLE_CMP1BV_SET_gc ALREADY DEFINED */


/* Compare 2 Buffer Valid */
/* TCA_SINGLE_CMP2BV_CLEAR_gc ALREADY DEFINED */
/* TCA_SINGLE_CMP2BV_SET_gc ALREADY DEFINED */


/* Period Buffer Valid */
/* TCA_SINGLE_PERBV_CLEAR_gc ALREADY DEFINED */
/* TCA_SINGLE_PERBV_SET_gc ALREADY DEFINED */


/* Debug Run */
#define TCA_SINGLE_DBGRUN_CLEAR_gc (0x00) /* Debug Run - CLEAR */
#define TCA_SINGLE_DBGRUN_SET_gc   (0x01) /* Debug Run - SET */


/* Count on Event Input */
#define TCA_SINGLE_CNTEI_CLEAR_gc (0x00) /* Count on Event Input - CLEAR */
#define TCA_SINGLE_CNTEI_SET_gc   (0x01) /* Count on Event Input - SET */


/* Event Action */
#define TCA_SINGLE_EVACT_POSEDGE_gc (0x00<<1) /* Count on positive edge event */
#define TCA_SINGLE_EVACT_ANYEDGE_gc (0x01<<1) /* Count on any edge event */
#define TCA_SINGLE_EVACT_HIGHLVL_gc (0x02<<1) /* Count on prescaled clock while event line is 1. */
#define TCA_SINGLE_EVACT_UPDOWN_gc  (0x03<<1) /* Count on prescaled clock. Event controls count direction. Up-count when event line is 0, down-count when event line is 1. */


/* Compare 0 Interrupt */
#define TCA_SINGLE_CMP0_CLEAR_gc (0x00) /* Compare 0 Interrupt - CLEAR */
#define TCA_SINGLE_CMP0_SET_gc   (0x10) /* Compare 0 Interrupt - SET */


/* Compare 1 Interrupt */
#define TCA_SINGLE_CMP1_CLEAR_gc (0x00) /* Compare 1 Interrupt - CLEAR */
#define TCA_SINGLE_CMP1_SET_gc   (0x20) /* Compare 1 Interrupt - SET */


/* Compare 2 Interrupt */
#define TCA_SINGLE_CMP2_CLEAR_gc (0x00) /* Compare 2 Interrupt - CLEAR */
#define TCA_SINGLE_CMP2_SET_gc   (0x40) /* Compare 2 Interrupt - SET */


/* Overflow Interrupt */
#define TCA_SINGLE_OVF_CLEAR_gc (0x00) /* Overflow Interrupt - CLEAR */
#define TCA_SINGLE_OVF_SET_gc   (0x01) /* Overflow Interrupt - SET */


/* Compare 0 Interrupt */
/* TCA_SINGLE_CMP0_CLEAR_gc ALREADY DEFINED */
/* TCA_SINGLE_CMP0_SET_gc ALREADY DEFINED */


/* Compare 1 Interrupt */
/* TCA_SINGLE_CMP1_CLEAR_gc ALREADY DEFINED */
/* TCA_SINGLE_CMP1_SET_gc ALREADY DEFINED */


/* Compare 2 Interrupt */
/* TCA_SINGLE_CMP2_CLEAR_gc ALREADY DEFINED */
/* TCA_SINGLE_CMP2_SET_gc ALREADY DEFINED */


/* Overflow Interrupt */
/* TCA_SINGLE_OVF_CLEAR_gc ALREADY DEFINED */
/* TCA_SINGLE_OVF_SET_gc ALREADY DEFINED */


/* Clock Selection */
#define TCA_SPLIT_CLKSEL_DIV1_gc    (0x00<<1) /* System Clock */
#define TCA_SPLIT_CLKSEL_DIV2_gc    (0x01<<1) /* System Clock / 2 */
#define TCA_SPLIT_CLKSEL_DIV4_gc    (0x02<<1) /* System Clock / 4 */
#define TCA_SPLIT_CLKSEL_DIV8_gc    (0x03<<1) /* System Clock / 8 */
#define TCA_SPLIT_CLKSEL_DIV16_gc   (0x04<<1) /* System Clock / 16 */
#define TCA_SPLIT_CLKSEL_DIV64_gc   (0x05<<1) /* System Clock / 64 */
#define TCA_SPLIT_CLKSEL_DIV256_gc  (0x06<<1) /* System Clock / 256 */
#define TCA_SPLIT_CLKSEL_DIV1024_gc (0x07<<1) /* System Clock / 1024 */


/* Module Enable */
#define TCA_SPLIT_ENABLE_CLEAR_gc (0x00) /* Module Enable - CLEAR */
#define TCA_SPLIT_ENABLE_SET_gc   (0x01) /* Module Enable - SET */


/* High Compare 0 Enable */
#define TCA_SPLIT_HCMP0EN_CLEAR_gc (0x00) /* High Compare 0 Enable - CLEAR */
#define TCA_SPLIT_HCMP0EN_SET_gc   (0x10) /* High Compare 0 Enable - SET */


/* High Compare 1 Enable */
#define TCA_SPLIT_HCMP1EN_CLEAR_gc (0x00) /* High Compare 1 Enable - CLEAR */
#define TCA_SPLIT_HCMP1EN_SET_gc   (0x20) /* High Compare 1 Enable - SET */


/* High Compare 2 Enable */
#define TCA_SPLIT_HCMP2EN_CLEAR_gc (0x00) /* High Compare 2 Enable - CLEAR */
#define TCA_SPLIT_HCMP2EN_SET_gc   (0x40) /* High Compare 2 Enable - SET */


/* Low Compare 0 Enable */
#define TCA_SPLIT_LCMP0EN_CLEAR_gc (0x00) /* Low Compare 0 Enable - CLEAR */
#define TCA_SPLIT_LCMP0EN_SET_gc   (0x01) /* Low Compare 0 Enable - SET */


/* Low Compare 1 Enable */
#define TCA_SPLIT_LCMP1EN_CLEAR_gc (0x00) /* Low Compare 1 Enable - CLEAR */
#define TCA_SPLIT_LCMP1EN_SET_gc   (0x02) /* Low Compare 1 Enable - SET */


/* Low Compare 2 Enable */
#define TCA_SPLIT_LCMP2EN_CLEAR_gc (0x00) /* Low Compare 2 Enable - CLEAR */
#define TCA_SPLIT_LCMP2EN_SET_gc   (0x04) /* Low Compare 2 Enable - SET */


/* High Compare 0 Output Value */
#define TCA_SPLIT_HCMP0OV_CLEAR_gc (0x00) /* High Compare 0 Output Value - CLEAR */
#define TCA_SPLIT_HCMP0OV_SET_gc   (0x10) /* High Compare 0 Output Value - SET */


/* High Compare 1 Output Value */
#define TCA_SPLIT_HCMP1OV_CLEAR_gc (0x00) /* High Compare 1 Output Value - CLEAR */
#define TCA_SPLIT_HCMP1OV_SET_gc   (0x20) /* High Compare 1 Output Value - SET */


/* High Compare 2 Output Value */
#define TCA_SPLIT_HCMP2OV_CLEAR_gc (0x00) /* High Compare 2 Output Value - CLEAR */
#define TCA_SPLIT_HCMP2OV_SET_gc   (0x40) /* High Compare 2 Output Value - SET */


/* Low Compare 0 Output Value */
#define TCA_SPLIT_LCMP0OV_CLEAR_gc (0x00) /* Low Compare 0 Output Value - CLEAR */
#define TCA_SPLIT_LCMP0OV_SET_gc   (0x01) /* Low Compare 0 Output Value - SET */


/* Low Compare 1 Output Value */
#define TCA_SPLIT_LCMP1OV_CLEAR_gc (0x00) /* Low Compare 1 Output Value - CLEAR */
#define TCA_SPLIT_LCMP1OV_SET_gc   (0x02) /* Low Compare 1 Output Value - SET */


/* Low Compare 2 Output Value */
#define TCA_SPLIT_LCMP2OV_CLEAR_gc (0x00) /* Low Compare 2 Output Value - CLEAR */
#define TCA_SPLIT_LCMP2OV_SET_gc   (0x04) /* Low Compare 2 Output Value - SET */


/* Split Mode Enable */
#define TCA_SPLIT_SPLITM_CLEAR_gc (0x00) /* Split Mode Enable - CLEAR */
#define TCA_SPLIT_SPLITM_SET_gc   (0x01) /* Split Mode Enable - SET */


/* Command */
#define TCA_SPLIT_CMD_NONE_gc    (0x00<<2) /* No Command */
#define TCA_SPLIT_CMD_UPDATE_gc  (0x01<<2) /* Force Update */
#define TCA_SPLIT_CMD_RESTART_gc (0x02<<2) /* Force Restart */
#define TCA_SPLIT_CMD_RESET_gc   (0x03<<2) /* Force Hard Reset */


/* Command */
/* TCA_SPLIT_CMD_NONE_gc ALREADY DEFINED */
/* TCA_SPLIT_CMD_UPDATE_gc ALREADY DEFINED */
/* TCA_SPLIT_CMD_RESTART_gc ALREADY DEFINED */
/* TCA_SPLIT_CMD_RESET_gc ALREADY DEFINED */


/* Debug Run */
#define TCA_SPLIT_DBGRUN_CLEAR_gc (0x00) /* Debug Run - CLEAR */
#define TCA_SPLIT_DBGRUN_SET_gc   (0x01) /* Debug Run - SET */


/* High Underflow Interrupt Enable */
#define TCA_SPLIT_HUNF_CLEAR_gc (0x00) /* High Underflow Interrupt Enable - CLEAR */
#define TCA_SPLIT_HUNF_SET_gc   (0x02) /* High Underflow Interrupt Enable - SET */


/* Low Compare 0 Interrupt Enable */
#define TCA_SPLIT_LCMP0_CLEAR_gc (0x00) /* Low Compare 0 Interrupt Enable - CLEAR */
#define TCA_SPLIT_LCMP0_SET_gc   (0x10) /* Low Compare 0 Interrupt Enable - SET */


/* Low Compare 1 Interrupt Enable */
#define TCA_SPLIT_LCMP1_CLEAR_gc (0x00) /* Low Compare 1 Interrupt Enable - CLEAR */
#define TCA_SPLIT_LCMP1_SET_gc   (0x20) /* Low Compare 1 Interrupt Enable - SET */


/* Low Compare 2 Interrupt Enable */
#define TCA_SPLIT_LCMP2_CLEAR_gc (0x00) /* Low Compare 2 Interrupt Enable - CLEAR */
#define TCA_SPLIT_LCMP2_SET_gc   (0x40) /* Low Compare 2 Interrupt Enable - SET */


/* Low Underflow Interrupt Enable */
#define TCA_SPLIT_LUNF_CLEAR_gc (0x00) /* Low Underflow Interrupt Enable - CLEAR */
#define TCA_SPLIT_LUNF_SET_gc   (0x01) /* Low Underflow Interrupt Enable - SET */


/* High Underflow Interrupt Flag */
/* TCA_SPLIT_HUNF_CLEAR_gc ALREADY DEFINED */
/* TCA_SPLIT_HUNF_SET_gc ALREADY DEFINED */


/* Low Compare 2 Interrupt Flag */
/* TCA_SPLIT_LCMP0_CLEAR_gc ALREADY DEFINED */
/* TCA_SPLIT_LCMP0_SET_gc ALREADY DEFINED */


/* Low Compare 1 Interrupt Flag */
/* TCA_SPLIT_LCMP1_CLEAR_gc ALREADY DEFINED */
/* TCA_SPLIT_LCMP1_SET_gc ALREADY DEFINED */


/* Low Compare 0 Interrupt Flag */
/* TCA_SPLIT_LCMP2_CLEAR_gc ALREADY DEFINED */
/* TCA_SPLIT_LCMP2_SET_gc ALREADY DEFINED */


/* Low Underflow Interrupt Flag */
/* TCA_SPLIT_LUNF_CLEAR_gc ALREADY DEFINED */
/* TCA_SPLIT_LUNF_SET_gc ALREADY DEFINED */


/*
--------------------------------------------------------------------------------
TCB - 16-bit Timer Type B
--------------------------------------------------------------------------------
*/


/* Clock Select */
#define TCB_CLKSEL_CLKDIV1_gc (0x00<<1) /* CLK_PER (No Prescaling) */
#define TCB_CLKSEL_CLKDIV2_gc (0x01<<1) /* CLK_PER/2 (From Prescaler) */
#define TCB_CLKSEL_CLKTCA_gc  (0x02<<1) /* Use Clock from TCA */


/* Enable */
#define TCB_ENABLE_CLEAR_gc (0x00) /* Enable - CLEAR */
#define TCB_ENABLE_SET_gc   (0x01) /* Enable - SET */


/* Run Standby */
#define TCB_RUNSTDBY_CLEAR_gc (0x00) /* Run Standby - CLEAR */
#define TCB_RUNSTDBY_SET_gc   (0x40) /* Run Standby - SET */


/* Synchronize Update */
#define TCB_SYNCUPD_CLEAR_gc (0x00) /* Synchronize Update - CLEAR */
#define TCB_SYNCUPD_SET_gc   (0x10) /* Synchronize Update - SET */


/* Asynchronous Enable */
#define TCB_ASYNC_CLEAR_gc (0x00) /* Asynchronous Enable - CLEAR */
#define TCB_ASYNC_SET_gc   (0x40) /* Asynchronous Enable - SET */


/* Pin Output Enable */
#define TCB_CCMPEN_CLEAR_gc (0x00) /* Pin Output Enable - CLEAR */
#define TCB_CCMPEN_SET_gc   (0x10) /* Pin Output Enable - SET */


/* Pin Initial State */
#define TCB_CCMPINIT_CLEAR_gc (0x00) /* Pin Initial State - CLEAR */
#define TCB_CCMPINIT_SET_gc   (0x20) /* Pin Initial State - SET */


/* Timer Mode */
#define TCB_CNTMODE_INT_gc     (0x00) /* Periodic Interrupt */
#define TCB_CNTMODE_TIMEOUT_gc (0x01) /* Periodic Timeout */
#define TCB_CNTMODE_CAPT_gc    (0x02) /* Input Capture Event */
#define TCB_CNTMODE_FRQ_gc     (0x03) /* Input Capture Frequency measurement */
#define TCB_CNTMODE_PW_gc      (0x04) /* Input Capture Pulse-Width measurement */
#define TCB_CNTMODE_FRQPW_gc   (0x05) /* Input Capture Frequency and Pulse-Width measurement */
#define TCB_CNTMODE_SINGLE_gc  (0x06) /* Single Shot */
#define TCB_CNTMODE_PWM8_gc    (0x07) /* 8-bit PWM */


/* Debug Run */
#define TCB_DBGRUN_CLEAR_gc (0x00) /* Debug Run - CLEAR */
#define TCB_DBGRUN_SET_gc   (0x01) /* Debug Run - SET */


/* Event Input Enable */
#define TCB_CAPTEI_CLEAR_gc (0x00) /* Event Input Enable - CLEAR */
#define TCB_CAPTEI_SET_gc   (0x01) /* Event Input Enable - SET */


/* Event Edge */
#define TCB_EDGE_CLEAR_gc (0x00) /* Event Edge - CLEAR */
#define TCB_EDGE_SET_gc   (0x10) /* Event Edge - SET */


/* Input Capture Noise Cancellation Filter */
#define TCB_FILTER_CLEAR_gc (0x00) /* Input Capture Noise Cancellation Filter - CLEAR */
#define TCB_FILTER_SET_gc   (0x40) /* Input Capture Noise Cancellation Filter - SET */


/* Capture or Timeout */
#define TCB_CAPT_CLEAR_gc (0x00) /* Capture or Timeout - CLEAR */
#define TCB_CAPT_SET_gc   (0x01) /* Capture or Timeout - SET */


/* Capture or Timeout */
/* TCB_CAPT_CLEAR_gc ALREADY DEFINED */
/* TCB_CAPT_SET_gc ALREADY DEFINED */


/* Run */
#define TCB_RUN_CLEAR_gc (0x00) /* Run - CLEAR */
#define TCB_RUN_SET_gc   (0x01) /* Run - SET */


/*
--------------------------------------------------------------------------------
TWI - Two-Wire Interface
--------------------------------------------------------------------------------
*/


/* FM Plus Enable */
#define TWI_DEFAULT_FMPEN_CLEAR_gc (0x00) /* FM Plus Enable - CLEAR */
#define TWI_DEFAULT_FMPEN_SET_gc   (0x02) /* FM Plus Enable - SET */


/* SDA Hold Time */
#define TWI_DEFAULT_SDAHOLD_OFF_gc   (0x00<<2) /* SDA hold time off */
#define TWI_DEFAULT_SDAHOLD_50NS_gc  (0x01<<2) /* Typical 50ns hold time */
#define TWI_DEFAULT_SDAHOLD_300NS_gc (0x02<<2) /* Typical 300ns hold time */
#define TWI_DEFAULT_SDAHOLD_500NS_gc (0x03<<2) /* Typical 500ns hold time */


/* SDA Setup Time */
#define TWI_DEFAULT_SDASETUP_4CYC_gc (0x00<<4) /* SDA setup time is 4 clock cycles */
#define TWI_DEFAULT_SDASETUP_8CYC_gc (0x01<<4) /* SDA setup time is 8 clock cycles */


/* Debug Run */
#define TWI_DEFAULT_DBGRUN_CLEAR_gc (0x00) /* Debug Run - CLEAR */
#define TWI_DEFAULT_DBGRUN_SET_gc   (0x01) /* Debug Run - SET */


/* Dual Control Enable */
#define TWI_DEFAULT_ENABLE_CLEAR_gc (0x00) /* Dual Control Enable - CLEAR */
#define TWI_DEFAULT_ENABLE_SET_gc   (0x01) /* Dual Control Enable - SET */


/* FM Plus Enable */
/* TWI_DEFAULT_FMPEN_CLEAR_gc ALREADY DEFINED */
/* TWI_DEFAULT_FMPEN_SET_gc ALREADY DEFINED */


/* SDA Hold Time */
/* TWI_DEFAULT_SDAHOLD_OFF_gc ALREADY DEFINED */
/* TWI_DEFAULT_SDAHOLD_50NS_gc ALREADY DEFINED */
/* TWI_DEFAULT_SDAHOLD_300NS_gc ALREADY DEFINED */
/* TWI_DEFAULT_SDAHOLD_500NS_gc ALREADY DEFINED */


/* Enable TWI Master */
#define TWI_ENABLE_CLEAR_gc (0x00) /* Enable TWI Master - CLEAR */
#define TWI_ENABLE_SET_gc   (0x01) /* Enable TWI Master - SET */


/* Quick Command Enable */
#define TWI_QCEN_CLEAR_gc (0x00) /* Quick Command Enable - CLEAR */
#define TWI_QCEN_SET_gc   (0x10) /* Quick Command Enable - SET */


/* Read Interrupt Enable */
#define TWI_RIEN_CLEAR_gc (0x00) /* Read Interrupt Enable - CLEAR */
#define TWI_RIEN_SET_gc   (0x80) /* Read Interrupt Enable - SET */


/* Smart Mode Enable */
#define TWI_SMEN_CLEAR_gc (0x00) /* Smart Mode Enable - CLEAR */
#define TWI_SMEN_SET_gc   (0x02) /* Smart Mode Enable - SET */


/* Inactive Bus Timeout */
#define TWI_TIMEOUT_DISABLED_gc (0x00<<2) /* Bus Timeout Disabled */
#define TWI_TIMEOUT_50US_gc     (0x01<<2) /* 50 Microseconds */
#define TWI_TIMEOUT_100US_gc    (0x02<<2) /* 100 Microseconds */
#define TWI_TIMEOUT_200US_gc    (0x03<<2) /* 200 Microseconds */


/* Write Interrupt Enable */
#define TWI_WIEN_CLEAR_gc (0x00) /* Write Interrupt Enable - CLEAR */
#define TWI_WIEN_SET_gc   (0x40) /* Write Interrupt Enable - SET */


/* Acknowledge Action */
#define TWI_ACKACT_ACK_gc  (0x00<<2) /* Send ACK */
#define TWI_ACKACT_NACK_gc (0x01<<2) /* Send NACK */


/* Flush */
#define TWI_FLUSH_CLEAR_gc (0x00) /* Flush - CLEAR */
#define TWI_FLUSH_SET_gc   (0x08) /* Flush - SET */


/* Command */
#define TWI_MCMD_NOACT_gc     (0x00) /* No Action */
#define TWI_MCMD_REPSTART_gc  (0x01) /* Issue Repeated Start Condition */
#define TWI_MCMD_RECVTRANS_gc (0x02) /* Receive or Transmit Data, depending on DIR */
#define TWI_MCMD_STOP_gc      (0x03) /* Issue Stop Condition */


/* Arbitration Lost */
#define TWI_ARBLOST_CLEAR_gc (0x00) /* Arbitration Lost - CLEAR */
#define TWI_ARBLOST_SET_gc   (0x08) /* Arbitration Lost - SET */


/* Bus Error */
#define TWI_BUSERR_CLEAR_gc (0x00) /* Bus Error - CLEAR */
#define TWI_BUSERR_SET_gc   (0x04) /* Bus Error - SET */


/* Bus State */
#define TWI_BUSSTATE_UNKNOWN_gc (0x00) /* Unknown Bus State */
#define TWI_BUSSTATE_IDLE_gc    (0x01) /* Bus is Idle */
#define TWI_BUSSTATE_OWNER_gc   (0x02) /* This Module Controls The Bus */
#define TWI_BUSSTATE_BUSY_gc    (0x03) /* The Bus is Busy */


/* Clock Hold */
#define TWI_CLKHOLD_CLEAR_gc (0x00) /* Clock Hold - CLEAR */
#define TWI_CLKHOLD_SET_gc   (0x20) /* Clock Hold - SET */


/* Read Interrupt Flag */
#define TWI_RIF_CLEAR_gc (0x00) /* Read Interrupt Flag - CLEAR */
#define TWI_RIF_SET_gc   (0x80) /* Read Interrupt Flag - SET */


/* Received Acknowledge */
#define TWI_RXACK_CLEAR_gc (0x00) /* Received Acknowledge - CLEAR */
#define TWI_RXACK_SET_gc   (0x10) /* Received Acknowledge - SET */


/* Write Interrupt Flag */
#define TWI_WIF_CLEAR_gc (0x00) /* Write Interrupt Flag - CLEAR */
#define TWI_WIF_SET_gc   (0x40) /* Write Interrupt Flag - SET */


/* Address Enable */
#define TWI_ADDREN_CLEAR_gc (0x00) /* Address Enable - CLEAR */
#define TWI_ADDREN_SET_gc   (0x01) /* Address Enable - SET */


/* Address Mask */
#define TWI_SADDRMASK_ADDRMASK_gc(x) ((x<<1) & 0xFE)

/* Address/Stop Interrupt Enable */
#define TWI_APIEN_CLEAR_gc (0x00) /* Address/Stop Interrupt Enable - CLEAR */
#define TWI_APIEN_SET_gc   (0x40) /* Address/Stop Interrupt Enable - SET */


/* Data Interrupt Enable */
#define TWI_DIEN_CLEAR_gc (0x00) /* Data Interrupt Enable - CLEAR */
#define TWI_DIEN_SET_gc   (0x80) /* Data Interrupt Enable - SET */


/* Enable TWI Slave */
/* TWI_ENABLE_CLEAR_gc ALREADY DEFINED */
/* TWI_ENABLE_SET_gc ALREADY DEFINED */


/* Stop Interrupt Enable */
#define TWI_PIEN_CLEAR_gc (0x00) /* Stop Interrupt Enable - CLEAR */
#define TWI_PIEN_SET_gc   (0x20) /* Stop Interrupt Enable - SET */


/* Promiscuous Mode Enable */
#define TWI_PMEN_CLEAR_gc (0x00) /* Promiscuous Mode Enable - CLEAR */
#define TWI_PMEN_SET_gc   (0x04) /* Promiscuous Mode Enable - SET */


/* Smart Mode Enable */
/* TWI_SMEN_CLEAR_gc ALREADY DEFINED */
/* TWI_SMEN_SET_gc ALREADY DEFINED */


/* Acknowledge Action */
/* TWI_ACKACT_ACK_gc ALREADY DEFINED */
/* TWI_ACKACT_NACK_gc ALREADY DEFINED */


/* Command */
#define TWI_SCMD_NOACT_gc     (0x00) /* No Action */
#define TWI_SCMD_COMPTRANS_gc (0x02) /* Used To Complete a Transaction */
#define TWI_SCMD_RESPONSE_gc  (0x03) /* Used in Response to Address/Data Interrupt */


/* Slave Address or Stop */
#define TWI_AP_STOP_gc (0x00) /* Stop condition generated APIF */
#define TWI_AP_ADR_gc  (0x01) /* Address detection generated APIF */


/* Address/Stop Interrupt Flag */
#define TWI_APIF_CLEAR_gc (0x00) /* Address/Stop Interrupt Flag - CLEAR */
#define TWI_APIF_SET_gc   (0x40) /* Address/Stop Interrupt Flag - SET */


/* Bus Error */
/* TWI_BUSERR_CLEAR_gc ALREADY DEFINED */
/* TWI_BUSERR_SET_gc ALREADY DEFINED */


/* Clock Hold */
/* TWI_CLKHOLD_CLEAR_gc ALREADY DEFINED */
/* TWI_CLKHOLD_SET_gc ALREADY DEFINED */


/* Collision */
#define TWI_COLL_CLEAR_gc (0x00) /* Collision - CLEAR */
#define TWI_COLL_SET_gc   (0x08) /* Collision - SET */


/* Data Interrupt Flag */
#define TWI_DIF_CLEAR_gc (0x00) /* Data Interrupt Flag - CLEAR */
#define TWI_DIF_SET_gc   (0x80) /* Data Interrupt Flag - SET */


/* Read/Write Direction */
#define TWI_DIR_CLEAR_gc (0x00) /* Read/Write Direction - CLEAR */
#define TWI_DIR_SET_gc   (0x02) /* Read/Write Direction - SET */


/* Received Acknowledge */
/* TWI_RXACK_CLEAR_gc ALREADY DEFINED */
/* TWI_RXACK_SET_gc ALREADY DEFINED */


/*
--------------------------------------------------------------------------------
USART - Universal Synchronous and Asynchronous Receiver and Transmitter
--------------------------------------------------------------------------------
*/


/* Auto-baud Error Interrupt Enable */
#define USART_ABEIE_CLEAR_gc (0x00) /* Auto-baud Error Interrupt Enable - CLEAR */
#define USART_ABEIE_SET_gc   (0x04) /* Auto-baud Error Interrupt Enable - SET */


/* Data Register Empty Interrupt Enable */
#define USART_DREIE_CLEAR_gc (0x00) /* Data Register Empty Interrupt Enable - CLEAR */
#define USART_DREIE_SET_gc   (0x20) /* Data Register Empty Interrupt Enable - SET */


/* Loop-back Mode Enable */
#define USART_LBME_CLEAR_gc (0x00) /* Loop-back Mode Enable - CLEAR */
#define USART_LBME_SET_gc   (0x08) /* Loop-back Mode Enable - SET */


/* RS485 Mode internal transmitter */
#define USART_RS485_OFF_gc (0x00) /* RS485 Mode disabled */
#define USART_RS485_EXT_gc (0x01) /* RS485 Mode External drive */
#define USART_RS485_INT_gc (0x02) /* RS485 Mode Internal drive */


/* Receive Complete Interrupt Enable */
#define USART_RXCIE_CLEAR_gc (0x00) /* Receive Complete Interrupt Enable - CLEAR */
#define USART_RXCIE_SET_gc   (0x80) /* Receive Complete Interrupt Enable - SET */


/* Receiver Start Frame Interrupt Enable */
#define USART_RXSIE_CLEAR_gc (0x00) /* Receiver Start Frame Interrupt Enable - CLEAR */
#define USART_RXSIE_SET_gc   (0x10) /* Receiver Start Frame Interrupt Enable - SET */


/* Transmit Complete Interrupt Enable */
#define USART_TXCIE_CLEAR_gc (0x00) /* Transmit Complete Interrupt Enable - CLEAR */
#define USART_TXCIE_SET_gc   (0x40) /* Transmit Complete Interrupt Enable - SET */


/* Multi-processor Communication Mode */
#define USART_MPCM_CLEAR_gc (0x00) /* Multi-processor Communication Mode - CLEAR */
#define USART_MPCM_SET_gc   (0x01) /* Multi-processor Communication Mode - SET */


/* Open Drain Mode Enable */
#define USART_ODME_CLEAR_gc (0x00) /* Open Drain Mode Enable - CLEAR */
#define USART_ODME_SET_gc   (0x08) /* Open Drain Mode Enable - SET */


/* Reciever enable */
#define USART_RXEN_CLEAR_gc (0x00) /* Reciever enable - CLEAR */
#define USART_RXEN_SET_gc   (0x80) /* Reciever enable - SET */


/* Receiver Mode */
#define USART_RXMODE_NORMAL_gc  (0x00<<1) /* Normal mode */
#define USART_RXMODE_CLK2X_gc   (0x01<<1) /* CLK2x mode */
#define USART_RXMODE_GENAUTO_gc (0x02<<1) /* Generic autobaud mode */
#define USART_RXMODE_LINAUTO_gc (0x03<<1) /* LIN constrained autobaud mode */


/* Start Frame Detection Enable */
#define USART_SFDEN_CLEAR_gc (0x00) /* Start Frame Detection Enable - CLEAR */
#define USART_SFDEN_SET_gc   (0x10) /* Start Frame Detection Enable - SET */


/* Transmitter Enable */
#define USART_TXEN_CLEAR_gc (0x00) /* Transmitter Enable - CLEAR */
#define USART_TXEN_SET_gc   (0x40) /* Transmitter Enable - SET */


/* Communication Mode */
#define USART_MSPI_CMODE_ASYNCHRONOUS_gc (0x00<<6) /* Asynchronous Mode */
#define USART_MSPI_CMODE_SYNCHRONOUS_gc  (0x01<<6) /* Synchronous Mode */
#define USART_MSPI_CMODE_IRCOM_gc        (0x02<<6) /* Infrared Communication */
#define USART_MSPI_CMODE_MSPI_gc         (0x03<<6) /* Master SPI Mode */


/* SPI Master Mode, Clock Phase */
#define USART_MSPI_UCPHA_CLEAR_gc (0x00) /* SPI Master Mode, Clock Phase - CLEAR */
#define USART_MSPI_UCPHA_SET_gc   (0x02) /* SPI Master Mode, Clock Phase - SET */


/* SPI Master Mode, Data Order */
#define USART_MSPI_UDORD_CLEAR_gc (0x00) /* SPI Master Mode, Data Order - CLEAR */
#define USART_MSPI_UDORD_SET_gc   (0x04) /* SPI Master Mode, Data Order - SET */


/* Character Size */
#define USART_NORMAL_CHSIZE_5BIT_gc  (0x00) /* Character size: 5 bit */
#define USART_NORMAL_CHSIZE_6BIT_gc  (0x01) /* Character size: 6 bit */
#define USART_NORMAL_CHSIZE_7BIT_gc  (0x02) /* Character size: 7 bit */
#define USART_NORMAL_CHSIZE_8BIT_gc  (0x03) /* Character size: 8 bit */
#define USART_NORMAL_CHSIZE_9BITL_gc (0x06) /* Character size: 9 bit read low byte first */
#define USART_NORMAL_CHSIZE_9BITH_gc (0x07) /* Character size: 9 bit read high byte first */


/* Communication Mode */
#define USART_NORMAL_CMODE_ASYNCHRONOUS_gc (0x00<<6) /* Asynchronous Mode */
#define USART_NORMAL_CMODE_SYNCHRONOUS_gc  (0x01<<6) /* Synchronous Mode */
#define USART_NORMAL_CMODE_IRCOM_gc        (0x02<<6) /* Infrared Communication */
#define USART_NORMAL_CMODE_MSPI_gc         (0x03<<6) /* Master SPI Mode */


/* Parity Mode */
#define USART_NORMAL_PMODE_DISABLED_gc (0x00<<4) /* No Parity */
#define USART_NORMAL_PMODE_EVEN_gc     (0x02<<4) /* Even Parity */
#define USART_NORMAL_PMODE_ODD_gc      (0x03<<4) /* Odd Parity */


/* Stop Bit Mode */
#define USART_NORMAL_SBMODE_1BIT_gc (0x00<<3) /* 1 stop bit */
#define USART_NORMAL_SBMODE_2BIT_gc (0x01<<3) /* 2 stop bits */


/* Auto Baud Window */
#define USART_ABW_WDW0_gc (0x00<<6) /* 18% tolerance */
#define USART_ABW_WDW1_gc (0x01<<6) /* 15% tolerance */
#define USART_ABW_WDW2_gc (0x02<<6) /* 21% tolerance */
#define USART_ABW_WDW3_gc (0x03<<6) /* 25% tolerance */


/* Autobaud majority voter bypass */
#define USART_ABMBP_CLEAR_gc (0x00) /* Autobaud majority voter bypass - CLEAR */
#define USART_ABMBP_SET_gc   (0x80) /* Autobaud majority voter bypass - SET */


/* Debug Run */
#define USART_DBGRUN_CLEAR_gc (0x00) /* Debug Run - CLEAR */
#define USART_DBGRUN_SET_gc   (0x01) /* Debug Run - SET */


/* IrDA Event Input Enable */
#define USART_IREI_CLEAR_gc (0x00) /* IrDA Event Input Enable - CLEAR */
#define USART_IREI_SET_gc   (0x01) /* IrDA Event Input Enable - SET */


/* Buffer Overflow */
#define USART_BUFOVF_CLEAR_gc (0x00) /* Buffer Overflow - CLEAR */
#define USART_BUFOVF_SET_gc   (0x40) /* Buffer Overflow - SET */


/* Receiver Data Register */
#define USART_DATA8_CLEAR_gc (0x00) /* Receiver Data Register - CLEAR */
#define USART_DATA8_SET_gc   (0x01) /* Receiver Data Register - SET */


/* Frame Error */
#define USART_FERR_CLEAR_gc (0x00) /* Frame Error - CLEAR */
#define USART_FERR_SET_gc   (0x04) /* Frame Error - SET */


/* Parity Error */
#define USART_PERR_CLEAR_gc (0x00) /* Parity Error - CLEAR */
#define USART_PERR_SET_gc   (0x02) /* Parity Error - SET */


/* Receive Complete Interrupt Flag */
#define USART_RXCIF_CLEAR_gc (0x00) /* Receive Complete Interrupt Flag - CLEAR */
#define USART_RXCIF_SET_gc   (0x80) /* Receive Complete Interrupt Flag - SET */


/* Break Detected Flag */
#define USART_BDF_CLEAR_gc (0x00) /* Break Detected Flag - CLEAR */
#define USART_BDF_SET_gc   (0x02) /* Break Detected Flag - SET */


/* Data Register Empty Flag */
#define USART_DREIF_CLEAR_gc (0x00) /* Data Register Empty Flag - CLEAR */
#define USART_DREIF_SET_gc   (0x20) /* Data Register Empty Flag - SET */


/* Inconsistent Sync Field Interrupt Flag */
#define USART_ISFIF_CLEAR_gc (0x00) /* Inconsistent Sync Field Interrupt Flag - CLEAR */
#define USART_ISFIF_SET_gc   (0x08) /* Inconsistent Sync Field Interrupt Flag - SET */


/* Receive Complete Interrupt Flag */
/* USART_RXCIF_CLEAR_gc ALREADY DEFINED */
/* USART_RXCIF_SET_gc ALREADY DEFINED */


/* Receive Start Interrupt */
#define USART_RXSIF_CLEAR_gc (0x00) /* Receive Start Interrupt - CLEAR */
#define USART_RXSIF_SET_gc   (0x10) /* Receive Start Interrupt - SET */


/* Transmit Interrupt Flag */
#define USART_TXCIF_CLEAR_gc (0x00) /* Transmit Interrupt Flag - CLEAR */
#define USART_TXCIF_SET_gc   (0x40) /* Transmit Interrupt Flag - SET */


/* Wait For Break */
#define USART_WFB_CLEAR_gc (0x00) /* Wait For Break - CLEAR */
#define USART_WFB_SET_gc   (0x01) /* Wait For Break - SET */


/* Transmit Data Register (CHSIZE=9bit) */
/* USART_DATA8_CLEAR_gc ALREADY DEFINED */
/* USART_DATA8_SET_gc ALREADY DEFINED */


/*
--------------------------------------------------------------------------------
USERROW - User Row
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
VPORT - Virtual Ports
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
VREF - Voltage reference
--------------------------------------------------------------------------------
*/


/* AC0 reference select */
#define VREF_AC0REFSEL_0V55_gc (0x00) /* Voltage reference at 0.55V */
#define VREF_AC0REFSEL_1V1_gc  (0x01) /* Voltage reference at 1.1V */
#define VREF_AC0REFSEL_2V5_gc  (0x02) /* Voltage reference at 2.5V */
#define VREF_AC0REFSEL_4V34_gc (0x03) /* Voltage reference at 4.34V */
#define VREF_AC0REFSEL_1V5_gc  (0x04) /* Voltage reference at 1.5V */
#define VREF_AC0REFSEL_AVDD_gc (0x07) /* AVDD */


/* ADC0 reference select */
#define VREF_ADC0REFSEL_0V55_gc (0x00<<4) /* Voltage reference at 0.55V */
#define VREF_ADC0REFSEL_1V1_gc  (0x01<<4) /* Voltage reference at 1.1V */
#define VREF_ADC0REFSEL_2V5_gc  (0x02<<4) /* Voltage reference at 2.5V */
#define VREF_ADC0REFSEL_4V34_gc (0x03<<4) /* Voltage reference at 4.34V */
#define VREF_ADC0REFSEL_1V5_gc  (0x04<<4) /* Voltage reference at 1.5V */


/* AC0 DACREF reference enable */
#define VREF_AC0REFEN_CLEAR_gc (0x00) /* AC0 DACREF reference enable - CLEAR */
#define VREF_AC0REFEN_SET_gc   (0x01) /* AC0 DACREF reference enable - SET */


/* ADC0 reference enable */
#define VREF_ADC0REFEN_CLEAR_gc (0x00) /* ADC0 reference enable - CLEAR */
#define VREF_ADC0REFEN_SET_gc   (0x02) /* ADC0 reference enable - SET */


/*
--------------------------------------------------------------------------------
WDT - Watch-Dog Timer
--------------------------------------------------------------------------------
*/


/* Period */
#define WDT_PERIOD_OFF_gc    (0x00) /* Off */
#define WDT_PERIOD_8CLK_gc   (0x01) /* 8 cycles (8ms) */
#define WDT_PERIOD_16CLK_gc  (0x02) /* 16 cycles (16ms) */
#define WDT_PERIOD_32CLK_gc  (0x03) /* 32 cycles (32ms) */
#define WDT_PERIOD_64CLK_gc  (0x04) /* 64 cycles (64ms) */
#define WDT_PERIOD_128CLK_gc (0x05) /* 128 cycles (0.128s) */
#define WDT_PERIOD_256CLK_gc (0x06) /* 256 cycles (0.256s) */
#define WDT_PERIOD_512CLK_gc (0x07) /* 512 cycles (0.512s) */
#define WDT_PERIOD_1KCLK_gc  (0x08) /* 1K cycles (1.0s) */
#define WDT_PERIOD_2KCLK_gc  (0x09) /* 2K cycles (2.0s) */
#define WDT_PERIOD_4KCLK_gc  (0x0A) /* 4K cycles (4.1s) */
#define WDT_PERIOD_8KCLK_gc  (0x0B) /* 8K cycles (8.2s) */


/* Window */
#define WDT_WINDOW_OFF_gc    (0x00<<4) /* Off */
#define WDT_WINDOW_8CLK_gc   (0x01<<4) /* 8 cycles (8ms) */
#define WDT_WINDOW_16CLK_gc  (0x02<<4) /* 16 cycles (16ms) */
#define WDT_WINDOW_32CLK_gc  (0x03<<4) /* 32 cycles (32ms) */
#define WDT_WINDOW_64CLK_gc  (0x04<<4) /* 64 cycles (64ms) */
#define WDT_WINDOW_128CLK_gc (0x05<<4) /* 128 cycles (0.128s) */
#define WDT_WINDOW_256CLK_gc (0x06<<4) /* 256 cycles (0.256s) */
#define WDT_WINDOW_512CLK_gc (0x07<<4) /* 512 cycles (0.512s) */
#define WDT_WINDOW_1KCLK_gc  (0x08<<4) /* 1K cycles (1.0s) */
#define WDT_WINDOW_2KCLK_gc  (0x09<<4) /* 2K cycles (2.0s) */
#define WDT_WINDOW_4KCLK_gc  (0x0A<<4) /* 4K cycles (4.1s) */
#define WDT_WINDOW_8KCLK_gc  (0x0B<<4) /* 8K cycles (8.2s) */


/* Lock enable */
#define WDT_LOCK_CLEAR_gc (0x00) /* Lock enable - CLEAR */
#define WDT_LOCK_SET_gc   (0x80) /* Lock enable - SET */


/* Syncronization busy */
#define WDT_SYNCBUSY_CLEAR_gc (0x00) /* Syncronization busy - CLEAR */
#define WDT_SYNCBUSY_SET_gc   (0x01) /* Syncronization busy - SET */

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


/* VPORTA - Virtual Ports (0x0000) */
#define VPORTA_BASE          _SFR_MEM8 (0x0000) /* VPORTA Base Address */
#define VPORTA_DIR           _SFR_MEM8 (0x0000) /* Data Direction */
#define VPORTA_OUT           _SFR_MEM8 (0x0001) /* Output Value */
#define VPORTA_IN            _SFR_MEM8 (0x0002) /* Input Value */
#define VPORTA_INTFLAGS      _SFR_MEM8 (0x0003) /* Interrupt Flags */

/* VPORTB - Virtual Ports (0x0004) */
#define VPORTB_BASE          _SFR_MEM8 (0x0004) /* VPORTB Base Address */
#define VPORTB_DIR           _SFR_MEM8 (0x0004) /* Data Direction */
#define VPORTB_OUT           _SFR_MEM8 (0x0005) /* Output Value */
#define VPORTB_IN            _SFR_MEM8 (0x0006) /* Input Value */
#define VPORTB_INTFLAGS      _SFR_MEM8 (0x0007) /* Interrupt Flags */

/* VPORTC - Virtual Ports (0x0008) */
#define VPORTC_BASE          _SFR_MEM8 (0x0008) /* VPORTC Base Address */
#define VPORTC_DIR           _SFR_MEM8 (0x0008) /* Data Direction */
#define VPORTC_OUT           _SFR_MEM8 (0x0009) /* Output Value */
#define VPORTC_IN            _SFR_MEM8 (0x000A) /* Input Value */
#define VPORTC_INTFLAGS      _SFR_MEM8 (0x000B) /* Interrupt Flags */

/* VPORTD - Virtual Ports (0x000C) */
#define VPORTD_BASE          _SFR_MEM8 (0x000C) /* VPORTD Base Address */
#define VPORTD_DIR           _SFR_MEM8 (0x000C) /* Data Direction */
#define VPORTD_OUT           _SFR_MEM8 (0x000D) /* Output Value */
#define VPORTD_IN            _SFR_MEM8 (0x000E) /* Input Value */
#define VPORTD_INTFLAGS      _SFR_MEM8 (0x000F) /* Interrupt Flags */

/* VPORTE - Virtual Ports (0x0010) */
#define VPORTE_BASE          _SFR_MEM8 (0x0010) /* VPORTE Base Address */
#define VPORTE_DIR           _SFR_MEM8 (0x0010) /* Data Direction */
#define VPORTE_OUT           _SFR_MEM8 (0x0011) /* Output Value */
#define VPORTE_IN            _SFR_MEM8 (0x0012) /* Input Value */
#define VPORTE_INTFLAGS      _SFR_MEM8 (0x0013) /* Interrupt Flags */

/* VPORTF - Virtual Ports (0x0014) */
#define VPORTF_BASE          _SFR_MEM8 (0x0014) /* VPORTF Base Address */
#define VPORTF_DIR           _SFR_MEM8 (0x0014) /* Data Direction */
#define VPORTF_OUT           _SFR_MEM8 (0x0015) /* Output Value */
#define VPORTF_IN            _SFR_MEM8 (0x0016) /* Input Value */
#define VPORTF_INTFLAGS      _SFR_MEM8 (0x0017) /* Interrupt Flags */

/* GPIO - General Purpose IO (0x001C) */
#define GPIO_BASE            _SFR_MEM8 (0x001C) /* GPIO Base Address */
#define GPIO_GPIOR0          _SFR_MEM8 (0x001C) /* General Purpose IO Register 0 */
#define GPIO_GPIOR1          _SFR_MEM8 (0x001D) /* General Purpose IO Register 1 */
#define GPIO_GPIOR2          _SFR_MEM8 (0x001E) /* General Purpose IO Register 2 */
#define GPIO_GPIOR3          _SFR_MEM8 (0x001F) /* General Purpose IO Register 3 */

/* CPU - CPU (0x0030) */
#define CPU_BASE             _SFR_MEM8 (0x0030) /* CPU Base Address */
#define CPU_CCP              _SFR_MEM8 (0x0034) /* Configuration Change Protection */
#define CPU_SPL              _SFR_MEM8 (0x003D) /* Stack Pointer Low */
#define CPU_SPH              _SFR_MEM8 (0x003E) /* Stack Pointer High */
#define CPU_SREG             _SFR_MEM8 (0x003F) /* Status Register */

/* RSTCTRL - Reset controller (0x0040) */
#define RSTCTRL_BASE         _SFR_MEM8 (0x0040) /* RSTCTRL Base Address */
#define RSTCTRL_RSTFR        _SFR_MEM8 (0x0040) /* Reset Flags */
#define RSTCTRL_SWRR         _SFR_MEM8 (0x0041) /* Software Reset */

/* SLPCTRL - Sleep Controller (0x0050) */
#define SLPCTRL_BASE         _SFR_MEM8 (0x0050) /* SLPCTRL Base Address */
#define SLPCTRL_CTRLA        _SFR_MEM8 (0x0050) /* Control */

/* CLKCTRL - Clock controller (0x0060) */
#define CLKCTRL_BASE         _SFR_MEM8 (0x0060) /* CLKCTRL Base Address */
#define CLKCTRL_MCLKCTRLA    _SFR_MEM8 (0x0060) /* MCLK Control A */
#define CLKCTRL_MCLKCTRLB    _SFR_MEM8 (0x0061) /* MCLK Control B */
#define CLKCTRL_MCLKLOCK     _SFR_MEM8 (0x0062) /* MCLK Lock */
#define CLKCTRL_MCLKSTATUS   _SFR_MEM8 (0x0063) /* MCLK Status */
#define CLKCTRL_OSC20MCTRLA  _SFR_MEM8 (0x0070) /* OSC20M Control A */
#define CLKCTRL_OSC20MCALIBA _SFR_MEM8 (0x0071) /* OSC20M Calibration A */
#define CLKCTRL_OSC20MCALIBB _SFR_MEM8 (0x0072) /* OSC20M Calibration B */
#define CLKCTRL_OSC32KCTRLA  _SFR_MEM8 (0x0078) /* OSC32K Control A */
#define CLKCTRL_XOSC32KCTRLA _SFR_MEM8 (0x007C) /* XOSC32K Control A */

/* BOD - Bod interface (0x0080) */
#define BOD_BASE             _SFR_MEM8 (0x0080) /* BOD Base Address */
#define BOD_CTRLA            _SFR_MEM8 (0x0080) /* Control A */
#define BOD_CTRLB            _SFR_MEM8 (0x0081) /* Control B */
#define BOD_VLMCTRLA         _SFR_MEM8 (0x0088) /* Voltage level monitor Control */
#define BOD_INTCTRL          _SFR_MEM8 (0x0089) /* Voltage level monitor interrupt Control */
#define BOD_INTFLAGS         _SFR_MEM8 (0x008A) /* Voltage level monitor interrupt Flags */
#define BOD_STATUS           _SFR_MEM8 (0x008B) /* Voltage level monitor status */

/* VREF - Voltage reference (0x00A0) */
#define VREF_BASE            _SFR_MEM8 (0x00A0) /* VREF Base Address */
#define VREF_CTRLA           _SFR_MEM8 (0x00A0) /* Control A */
#define VREF_CTRLB           _SFR_MEM8 (0x00A1) /* Control B */

/* WDT - Watch-Dog Timer (0x0100) */
#define WDT_BASE             _SFR_MEM8 (0x0100) /* WDT Base Address */
#define WDT_CTRLA            _SFR_MEM8 (0x0100) /* Control A */
#define WDT_STATUS           _SFR_MEM8 (0x0101) /* Status */

/* CPUINT - Interrupt Controller (0x0110) */
#define CPUINT_BASE          _SFR_MEM8 (0x0110) /* CPUINT Base Address */
#define CPUINT_CTRLA         _SFR_MEM8 (0x0110) /* Control A */
#define CPUINT_STATUS        _SFR_MEM8 (0x0111) /* Status */
#define CPUINT_LVL0PRI       _SFR_MEM8 (0x0112) /* Interrupt Level 0 Priority */
#define CPUINT_LVL1VEC       _SFR_MEM8 (0x0113) /* Interrupt Level 1 Priority Vector */

/* CRCSCAN - CRCSCAN (0x0120) */
#define CRCSCAN_BASE         _SFR_MEM8 (0x0120) /* CRCSCAN Base Address */
#define CRCSCAN_CTRLA        _SFR_MEM8 (0x0120) /* Control A */
#define CRCSCAN_CTRLB        _SFR_MEM8 (0x0121) /* Control B */
#define CRCSCAN_STATUS       _SFR_MEM8 (0x0122) /* Status */

/* RTC - Real-Time Counter (0x0140) */
#define RTC_BASE             _SFR_MEM8 (0x0140) /* RTC Base Address */
#define RTC_CTRLA            _SFR_MEM8 (0x0140) /* Control A */
#define RTC_STATUS           _SFR_MEM8 (0x0141) /* Status */
#define RTC_INTCTRL          _SFR_MEM8 (0x0142) /* Interrupt Control */
#define RTC_INTFLAGS         _SFR_MEM8 (0x0143) /* Interrupt Flags */
#define RTC_TEMP             _SFR_MEM8 (0x0144) /* Temporary */
#define RTC_DBGCTRL          _SFR_MEM8 (0x0145) /* Debug control */
#define RTC_CALIB            _SFR_MEM8 (0x0146) /* Calibration */
#define RTC_CLKSEL           _SFR_MEM8 (0x0147) /* Clock Select */
#define RTC_CNT              _SFR_MEM16(0x0148) /* Counter */
#define RTC_CNTL             _SFR_MEM8 (0x0148) /* Counter LOW BYTE */
#define RTC_CNTH             _SFR_MEM8 (0x0149) /* Counter HIGH BYTE */
#define RTC_PER              _SFR_MEM16(0x014A) /* Period */
#define RTC_PERL             _SFR_MEM8 (0x014A) /* Period LOW BYTE */
#define RTC_PERH             _SFR_MEM8 (0x014B) /* Period HIGH BYTE */
#define RTC_CMP              _SFR_MEM16(0x014C) /* Compare */
#define RTC_CMPL             _SFR_MEM8 (0x014C) /* Compare LOW BYTE */
#define RTC_CMPH             _SFR_MEM8 (0x014D) /* Compare HIGH BYTE */
#define RTC_PITCTRLA         _SFR_MEM8 (0x0150) /* PIT Control A */
#define RTC_PITSTATUS        _SFR_MEM8 (0x0151) /* PIT Status */
#define RTC_PITINTCTRL       _SFR_MEM8 (0x0152) /* PIT Interrupt Control */
#define RTC_PITINTFLAGS      _SFR_MEM8 (0x0153) /* PIT Interrupt Flags */
#define RTC_PITDBGCTRL       _SFR_MEM8 (0x0155) /* PIT Debug control */

/* EVSYS - Event System (0x0180) */
#define EVSYS_BASE           _SFR_MEM8 (0x0180) /* EVSYS Base Address */
#define EVSYS_STROBE         _SFR_MEM8 (0x0180) /* Channel Strobe */
#define EVSYS_CHANNEL0       _SFR_MEM8 (0x0190) /* Multiplexer Channel 0 */
#define EVSYS_CHANNEL1       _SFR_MEM8 (0x0191) /* Multiplexer Channel 1 */
#define EVSYS_CHANNEL2       _SFR_MEM8 (0x0192) /* Multiplexer Channel 2 */
#define EVSYS_CHANNEL3       _SFR_MEM8 (0x0193) /* Multiplexer Channel 3 */
#define EVSYS_CHANNEL4       _SFR_MEM8 (0x0194) /* Multiplexer Channel 4 */
#define EVSYS_CHANNEL5       _SFR_MEM8 (0x0195) /* Multiplexer Channel 5 */
#define EVSYS_USERCCLLUT0A   _SFR_MEM8 (0x01A0) /* User CCL LUT0 Event A */
#define EVSYS_USERCCLLUT0B   _SFR_MEM8 (0x01A1) /* User CCL LUT0 Event B */
#define EVSYS_USERCCLLUT1A   _SFR_MEM8 (0x01A2) /* User CCL LUT1 Event A */
#define EVSYS_USERCCLLUT1B   _SFR_MEM8 (0x01A3) /* User CCL LUT1 Event B */
#define EVSYS_USERCCLLUT2A   _SFR_MEM8 (0x01A4) /* User CCL LUT2 Event A */
#define EVSYS_USERCCLLUT2B   _SFR_MEM8 (0x01A5) /* User CCL LUT2 Event B */
#define EVSYS_USERCCLLUT3A   _SFR_MEM8 (0x01A6) /* User CCL LUT3 Event A */
#define EVSYS_USERCCLLUT3B   _SFR_MEM8 (0x01A7) /* User CCL LUT3 Event B */
#define EVSYS_USERADC0       _SFR_MEM8 (0x01A8) /* User ADC0 */
#define EVSYS_USEREVOUTA     _SFR_MEM8 (0x01A9) /* User EVOUT Port A */
#define EVSYS_USEREVOUTB     _SFR_MEM8 (0x01AA) /* User EVOUT Port B */
#define EVSYS_USEREVOUTC     _SFR_MEM8 (0x01AB) /* User EVOUT Port C */
#define EVSYS_USEREVOUTD     _SFR_MEM8 (0x01AC) /* User EVOUT Port D */
#define EVSYS_USEREVOUTE     _SFR_MEM8 (0x01AD) /* User EVOUT Port E */
#define EVSYS_USEREVOUTF     _SFR_MEM8 (0x01AE) /* User EVOUT Port F */
#define EVSYS_USERUSART0     _SFR_MEM8 (0x01AF) /* User USART0 */
#define EVSYS_USERUSART1     _SFR_MEM8 (0x01B0) /* User USART1 */
#define EVSYS_USERUSART2     _SFR_MEM8 (0x01B1) /* User USART2 */
#define EVSYS_USERUSART3     _SFR_MEM8 (0x01B2) /* User USART3 */
#define EVSYS_USERTCA0       _SFR_MEM8 (0x01B3) /* User TCA0 */
#define EVSYS_USERTCB0       _SFR_MEM8 (0x01B4) /* User TCB0 */
#define EVSYS_USERTCB1       _SFR_MEM8 (0x01B5) /* User TCB1 */
#define EVSYS_USERTCB2       _SFR_MEM8 (0x01B6) /* User TCB2 */
#define EVSYS_USERTCB3       _SFR_MEM8 (0x01B7) /* User TCB3 */

/* CCL - Configurable Custom Logic (0x01C0) */
#define CCL_BASE             _SFR_MEM8 (0x01C0) /* CCL Base Address */
#define CCL_CTRLA            _SFR_MEM8 (0x01C0) /* Control Register A */
#define CCL_SEQCTRL0         _SFR_MEM8 (0x01C1) /* Sequential Control 0 */
#define CCL_SEQCTRL1         _SFR_MEM8 (0x01C2) /* Sequential Control 1 */
#define CCL_INTCTRL0         _SFR_MEM8 (0x01C5) /* Interrupt Control 0 */
#define CCL_INTFLAGS         _SFR_MEM8 (0x01C7) /* Interrupt Flags */
#define CCL_LUT0CTRLA        _SFR_MEM8 (0x01C8) /* LUT Control 0 A */
#define CCL_LUT0CTRLB        _SFR_MEM8 (0x01C9) /* LUT Control 0 B */
#define CCL_LUT0CTRLC        _SFR_MEM8 (0x01CA) /* LUT Control 0 C */
#define CCL_TRUTH0           _SFR_MEM8 (0x01CB) /* Truth 0 */
#define CCL_LUT1CTRLA        _SFR_MEM8 (0x01CC) /* LUT Control 1 A */
#define CCL_LUT1CTRLB        _SFR_MEM8 (0x01CD) /* LUT Control 1 B */
#define CCL_LUT1CTRLC        _SFR_MEM8 (0x01CE) /* LUT Control 1 C */
#define CCL_TRUTH1           _SFR_MEM8 (0x01CF) /* Truth 1 */
#define CCL_LUT2CTRLA        _SFR_MEM8 (0x01D0) /* LUT Control 2 A */
#define CCL_LUT2CTRLB        _SFR_MEM8 (0x01D1) /* LUT Control 2 B */
#define CCL_LUT2CTRLC        _SFR_MEM8 (0x01D2) /* LUT Control 2 C */
#define CCL_TRUTH2           _SFR_MEM8 (0x01D3) /* Truth 2 */
#define CCL_LUT3CTRLA        _SFR_MEM8 (0x01D4) /* LUT Control 3 A */
#define CCL_LUT3CTRLB        _SFR_MEM8 (0x01D5) /* LUT Control 3 B */
#define CCL_LUT3CTRLC        _SFR_MEM8 (0x01D6) /* LUT Control 3 C */
#define CCL_TRUTH3           _SFR_MEM8 (0x01D7) /* Truth 3 */

/* PORTA - I/O Ports (0x0400) */
#define PORTA_BASE           _SFR_MEM8 (0x0400) /* PORTA Base Address */
#define PORTA_DIR            _SFR_MEM8 (0x0400) /* Data Direction */
#define PORTA_DIRSET         _SFR_MEM8 (0x0401) /* Data Direction Set */
#define PORTA_DIRCLR         _SFR_MEM8 (0x0402) /* Data Direction Clear */
#define PORTA_DIRTGL         _SFR_MEM8 (0x0403) /* Data Direction Toggle */
#define PORTA_OUT            _SFR_MEM8 (0x0404) /* Output Value */
#define PORTA_OUTSET         _SFR_MEM8 (0x0405) /* Output Value Set */
#define PORTA_OUTCLR         _SFR_MEM8 (0x0406) /* Output Value Clear */
#define PORTA_OUTTGL         _SFR_MEM8 (0x0407) /* Output Value Toggle */
#define PORTA_IN             _SFR_MEM8 (0x0408) /* Input Value */
#define PORTA_INTFLAGS       _SFR_MEM8 (0x0409) /* Interrupt Flags */
#define PORTA_PORTCTRL       _SFR_MEM8 (0x040A) /* Port Control */
#define PORTA_PIN0CTRL       _SFR_MEM8 (0x0410) /* Pin 0 Control */
#define PORTA_PIN1CTRL       _SFR_MEM8 (0x0411) /* Pin 1 Control */
#define PORTA_PIN2CTRL       _SFR_MEM8 (0x0412) /* Pin 2 Control */
#define PORTA_PIN3CTRL       _SFR_MEM8 (0x0413) /* Pin 3 Control */
#define PORTA_PIN4CTRL       _SFR_MEM8 (0x0414) /* Pin 4 Control */
#define PORTA_PIN5CTRL       _SFR_MEM8 (0x0415) /* Pin 5 Control */
#define PORTA_PIN6CTRL       _SFR_MEM8 (0x0416) /* Pin 6 Control */
#define PORTA_PIN7CTRL       _SFR_MEM8 (0x0417) /* Pin 7 Control */

/* PORTB - I/O Ports (0x0420) */
#define PORTB_BASE           _SFR_MEM8 (0x0420) /* PORTB Base Address */
#define PORTB_DIR            _SFR_MEM8 (0x0420) /* Data Direction */
#define PORTB_DIRSET         _SFR_MEM8 (0x0421) /* Data Direction Set */
#define PORTB_DIRCLR         _SFR_MEM8 (0x0422) /* Data Direction Clear */
#define PORTB_DIRTGL         _SFR_MEM8 (0x0423) /* Data Direction Toggle */
#define PORTB_OUT            _SFR_MEM8 (0x0424) /* Output Value */
#define PORTB_OUTSET         _SFR_MEM8 (0x0425) /* Output Value Set */
#define PORTB_OUTCLR         _SFR_MEM8 (0x0426) /* Output Value Clear */
#define PORTB_OUTTGL         _SFR_MEM8 (0x0427) /* Output Value Toggle */
#define PORTB_IN             _SFR_MEM8 (0x0428) /* Input Value */
#define PORTB_INTFLAGS       _SFR_MEM8 (0x0429) /* Interrupt Flags */
#define PORTB_PORTCTRL       _SFR_MEM8 (0x042A) /* Port Control */
#define PORTB_PIN0CTRL       _SFR_MEM8 (0x0430) /* Pin 0 Control */
#define PORTB_PIN1CTRL       _SFR_MEM8 (0x0431) /* Pin 1 Control */
#define PORTB_PIN2CTRL       _SFR_MEM8 (0x0432) /* Pin 2 Control */
#define PORTB_PIN3CTRL       _SFR_MEM8 (0x0433) /* Pin 3 Control */
#define PORTB_PIN4CTRL       _SFR_MEM8 (0x0434) /* Pin 4 Control */
#define PORTB_PIN5CTRL       _SFR_MEM8 (0x0435) /* Pin 5 Control */
#define PORTB_PIN6CTRL       _SFR_MEM8 (0x0436) /* Pin 6 Control */
#define PORTB_PIN7CTRL       _SFR_MEM8 (0x0437) /* Pin 7 Control */

/* PORTC - I/O Ports (0x0440) */
#define PORTC_BASE           _SFR_MEM8 (0x0440) /* PORTC Base Address */
#define PORTC_DIR            _SFR_MEM8 (0x0440) /* Data Direction */
#define PORTC_DIRSET         _SFR_MEM8 (0x0441) /* Data Direction Set */
#define PORTC_DIRCLR         _SFR_MEM8 (0x0442) /* Data Direction Clear */
#define PORTC_DIRTGL         _SFR_MEM8 (0x0443) /* Data Direction Toggle */
#define PORTC_OUT            _SFR_MEM8 (0x0444) /* Output Value */
#define PORTC_OUTSET         _SFR_MEM8 (0x0445) /* Output Value Set */
#define PORTC_OUTCLR         _SFR_MEM8 (0x0446) /* Output Value Clear */
#define PORTC_OUTTGL         _SFR_MEM8 (0x0447) /* Output Value Toggle */
#define PORTC_IN             _SFR_MEM8 (0x0448) /* Input Value */
#define PORTC_INTFLAGS       _SFR_MEM8 (0x0449) /* Interrupt Flags */
#define PORTC_PORTCTRL       _SFR_MEM8 (0x044A) /* Port Control */
#define PORTC_PIN0CTRL       _SFR_MEM8 (0x0450) /* Pin 0 Control */
#define PORTC_PIN1CTRL       _SFR_MEM8 (0x0451) /* Pin 1 Control */
#define PORTC_PIN2CTRL       _SFR_MEM8 (0x0452) /* Pin 2 Control */
#define PORTC_PIN3CTRL       _SFR_MEM8 (0x0453) /* Pin 3 Control */
#define PORTC_PIN4CTRL       _SFR_MEM8 (0x0454) /* Pin 4 Control */
#define PORTC_PIN5CTRL       _SFR_MEM8 (0x0455) /* Pin 5 Control */
#define PORTC_PIN6CTRL       _SFR_MEM8 (0x0456) /* Pin 6 Control */
#define PORTC_PIN7CTRL       _SFR_MEM8 (0x0457) /* Pin 7 Control */

/* PORTD - I/O Ports (0x0460) */
#define PORTD_BASE           _SFR_MEM8 (0x0460) /* PORTD Base Address */
#define PORTD_DIR            _SFR_MEM8 (0x0460) /* Data Direction */
#define PORTD_DIRSET         _SFR_MEM8 (0x0461) /* Data Direction Set */
#define PORTD_DIRCLR         _SFR_MEM8 (0x0462) /* Data Direction Clear */
#define PORTD_DIRTGL         _SFR_MEM8 (0x0463) /* Data Direction Toggle */
#define PORTD_OUT            _SFR_MEM8 (0x0464) /* Output Value */
#define PORTD_OUTSET         _SFR_MEM8 (0x0465) /* Output Value Set */
#define PORTD_OUTCLR         _SFR_MEM8 (0x0466) /* Output Value Clear */
#define PORTD_OUTTGL         _SFR_MEM8 (0x0467) /* Output Value Toggle */
#define PORTD_IN             _SFR_MEM8 (0x0468) /* Input Value */
#define PORTD_INTFLAGS       _SFR_MEM8 (0x0469) /* Interrupt Flags */
#define PORTD_PORTCTRL       _SFR_MEM8 (0x046A) /* Port Control */
#define PORTD_PIN0CTRL       _SFR_MEM8 (0x0470) /* Pin 0 Control */
#define PORTD_PIN1CTRL       _SFR_MEM8 (0x0471) /* Pin 1 Control */
#define PORTD_PIN2CTRL       _SFR_MEM8 (0x0472) /* Pin 2 Control */
#define PORTD_PIN3CTRL       _SFR_MEM8 (0x0473) /* Pin 3 Control */
#define PORTD_PIN4CTRL       _SFR_MEM8 (0x0474) /* Pin 4 Control */
#define PORTD_PIN5CTRL       _SFR_MEM8 (0x0475) /* Pin 5 Control */
#define PORTD_PIN6CTRL       _SFR_MEM8 (0x0476) /* Pin 6 Control */
#define PORTD_PIN7CTRL       _SFR_MEM8 (0x0477) /* Pin 7 Control */

/* PORTE - I/O Ports (0x0480) */
#define PORTE_BASE           _SFR_MEM8 (0x0480) /* PORTE Base Address */
#define PORTE_DIR            _SFR_MEM8 (0x0480) /* Data Direction */
#define PORTE_DIRSET         _SFR_MEM8 (0x0481) /* Data Direction Set */
#define PORTE_DIRCLR         _SFR_MEM8 (0x0482) /* Data Direction Clear */
#define PORTE_DIRTGL         _SFR_MEM8 (0x0483) /* Data Direction Toggle */
#define PORTE_OUT            _SFR_MEM8 (0x0484) /* Output Value */
#define PORTE_OUTSET         _SFR_MEM8 (0x0485) /* Output Value Set */
#define PORTE_OUTCLR         _SFR_MEM8 (0x0486) /* Output Value Clear */
#define PORTE_OUTTGL         _SFR_MEM8 (0x0487) /* Output Value Toggle */
#define PORTE_IN             _SFR_MEM8 (0x0488) /* Input Value */
#define PORTE_INTFLAGS       _SFR_MEM8 (0x0489) /* Interrupt Flags */
#define PORTE_PORTCTRL       _SFR_MEM8 (0x048A) /* Port Control */
#define PORTE_PIN0CTRL       _SFR_MEM8 (0x0490) /* Pin 0 Control */
#define PORTE_PIN1CTRL       _SFR_MEM8 (0x0491) /* Pin 1 Control */
#define PORTE_PIN2CTRL       _SFR_MEM8 (0x0492) /* Pin 2 Control */
#define PORTE_PIN3CTRL       _SFR_MEM8 (0x0493) /* Pin 3 Control */
#define PORTE_PIN4CTRL       _SFR_MEM8 (0x0494) /* Pin 4 Control */
#define PORTE_PIN5CTRL       _SFR_MEM8 (0x0495) /* Pin 5 Control */
#define PORTE_PIN6CTRL       _SFR_MEM8 (0x0496) /* Pin 6 Control */
#define PORTE_PIN7CTRL       _SFR_MEM8 (0x0497) /* Pin 7 Control */

/* PORTF - I/O Ports (0x04A0) */
#define PORTF_BASE           _SFR_MEM8 (0x04A0) /* PORTF Base Address */
#define PORTF_DIR            _SFR_MEM8 (0x04A0) /* Data Direction */
#define PORTF_DIRSET         _SFR_MEM8 (0x04A1) /* Data Direction Set */
#define PORTF_DIRCLR         _SFR_MEM8 (0x04A2) /* Data Direction Clear */
#define PORTF_DIRTGL         _SFR_MEM8 (0x04A3) /* Data Direction Toggle */
#define PORTF_OUT            _SFR_MEM8 (0x04A4) /* Output Value */
#define PORTF_OUTSET         _SFR_MEM8 (0x04A5) /* Output Value Set */
#define PORTF_OUTCLR         _SFR_MEM8 (0x04A6) /* Output Value Clear */
#define PORTF_OUTTGL         _SFR_MEM8 (0x04A7) /* Output Value Toggle */
#define PORTF_IN             _SFR_MEM8 (0x04A8) /* Input Value */
#define PORTF_INTFLAGS       _SFR_MEM8 (0x04A9) /* Interrupt Flags */
#define PORTF_PORTCTRL       _SFR_MEM8 (0x04AA) /* Port Control */
#define PORTF_PIN0CTRL       _SFR_MEM8 (0x04B0) /* Pin 0 Control */
#define PORTF_PIN1CTRL       _SFR_MEM8 (0x04B1) /* Pin 1 Control */
#define PORTF_PIN2CTRL       _SFR_MEM8 (0x04B2) /* Pin 2 Control */
#define PORTF_PIN3CTRL       _SFR_MEM8 (0x04B3) /* Pin 3 Control */
#define PORTF_PIN4CTRL       _SFR_MEM8 (0x04B4) /* Pin 4 Control */
#define PORTF_PIN5CTRL       _SFR_MEM8 (0x04B5) /* Pin 5 Control */
#define PORTF_PIN6CTRL       _SFR_MEM8 (0x04B6) /* Pin 6 Control */
#define PORTF_PIN7CTRL       _SFR_MEM8 (0x04B7) /* Pin 7 Control */

/* PORTMUX - Port Multiplexer (0x05E0) */
#define PORTMUX_BASE         _SFR_MEM8 (0x05E0) /* PORTMUX Base Address */
#define PORTMUX_EVSYSROUTEA  _SFR_MEM8 (0x05E0) /* Port Multiplexer EVSYS */
#define PORTMUX_CCLROUTEA    _SFR_MEM8 (0x05E1) /* Port Multiplexer CCL */
#define PORTMUX_USARTROUTEA  _SFR_MEM8 (0x05E2) /* Port Multiplexer USART register A */
#define PORTMUX_TWISPIROUTEA _SFR_MEM8 (0x05E3) /* Port Multiplexer TWI and SPI */
#define PORTMUX_TCAROUTEA    _SFR_MEM8 (0x05E4) /* Port Multiplexer TCA */
#define PORTMUX_TCBROUTEA    _SFR_MEM8 (0x05E5) /* Port Multiplexer TCB */

/* ADC0 - Analog to Digital Converter (0x0600) */
#define ADC0_BASE            _SFR_MEM8 (0x0600) /* ADC0 Base Address */
#define ADC0_CTRLA           _SFR_MEM8 (0x0600) /* Control A */
#define ADC0_CTRLB           _SFR_MEM8 (0x0601) /* Control B */
#define ADC0_CTRLC           _SFR_MEM8 (0x0602) /* Control C */
#define ADC0_CTRLD           _SFR_MEM8 (0x0603) /* Control D */
#define ADC0_CTRLE           _SFR_MEM8 (0x0604) /* Control E */
#define ADC0_SAMPCTRL        _SFR_MEM8 (0x0605) /* Sample Control */
#define ADC0_MUXPOS          _SFR_MEM8 (0x0606) /* Positive mux input */
#define ADC0_COMMAND         _SFR_MEM8 (0x0608) /* Command */
#define ADC0_EVCTRL          _SFR_MEM8 (0x0609) /* Event Control */
#define ADC0_INTCTRL         _SFR_MEM8 (0x060A) /* Interrupt Control */
#define ADC0_INTFLAGS        _SFR_MEM8 (0x060B) /* Interrupt Flags */
#define ADC0_DBGCTRL         _SFR_MEM8 (0x060C) /* Debug Control */
#define ADC0_TEMP            _SFR_MEM8 (0x060D) /* Temporary Data */
#define ADC0_RES             _SFR_MEM16(0x0610) /* ADC Accumulator Result */
#define ADC0_RESL            _SFR_MEM8 (0x0610) /* ADC Accumulator Result LOW BYTE */
#define ADC0_RESH            _SFR_MEM8 (0x0611) /* ADC Accumulator Result HIGH BYTE */
#define ADC0_WINLT           _SFR_MEM16(0x0612) /* Window comparator low threshold */
#define ADC0_WINLTL          _SFR_MEM8 (0x0612) /* Window comparator low threshold LOW BYTE */
#define ADC0_WINLTH          _SFR_MEM8 (0x0613) /* Window comparator low threshold HIGH BYTE */
#define ADC0_WINHT           _SFR_MEM16(0x0614) /* Window comparator high threshold */
#define ADC0_WINHTL          _SFR_MEM8 (0x0614) /* Window comparator high threshold LOW BYTE */
#define ADC0_WINHTH          _SFR_MEM8 (0x0615) /* Window comparator high threshold HIGH BYTE */
#define ADC0_CALIB           _SFR_MEM8 (0x0616) /* Calibration */

/* AC0 - Analog Comparator (0x0680) */
#define AC0_BASE             _SFR_MEM8 (0x0680) /* AC0 Base Address */
#define AC0_CTRLA            _SFR_MEM8 (0x0680) /* Control A */
#define AC0_MUXCTRLA         _SFR_MEM8 (0x0682) /* Mux Control A */
#define AC0_DACREF           _SFR_MEM8 (0x0684) /* Referance scale control */
#define AC0_INTCTRL          _SFR_MEM8 (0x0686) /* Interrupt Control */
#define AC0_STATUS           _SFR_MEM8 (0x0687) /* Status */

/* USART0 - Universal Synchronous and Asynchronous Receiver and Transmitter (0x0800) */
#define USART0_BASE          _SFR_MEM8 (0x0800) /* USART0 Base Address */
#define USART0_RXDATAL       _SFR_MEM8 (0x0800) /* Receive Data Low Byte */
#define USART0_RXDATAH       _SFR_MEM8 (0x0801) /* Receive Data High Byte */
#define USART0_TXDATAL       _SFR_MEM8 (0x0802) /* Transmit Data Low Byte */
#define USART0_TXDATAH       _SFR_MEM8 (0x0803) /* Transmit Data High Byte */
#define USART0_STATUS        _SFR_MEM8 (0x0804) /* Status */
#define USART0_CTRLA         _SFR_MEM8 (0x0805) /* Control A */
#define USART0_CTRLB         _SFR_MEM8 (0x0806) /* Control B */
#define USART0_CTRLC         _SFR_MEM8 (0x0807) /* Control C */
#define USART0_BAUD          _SFR_MEM16(0x0808) /* Baud Rate */
#define USART0_BAUDL         _SFR_MEM8 (0x0808) /* Baud Rate LOW BYTE */
#define USART0_BAUDH         _SFR_MEM8 (0x0809) /* Baud Rate HIGH BYTE */
#define USART0_CTRLD         _SFR_MEM8 (0x080A) /* Control D */
#define USART0_DBGCTRL       _SFR_MEM8 (0x080B) /* Debug Control */
#define USART0_EVCTRL        _SFR_MEM8 (0x080C) /* Event Control */
#define USART0_TXPLCTRL      _SFR_MEM8 (0x080D) /* IRCOM Transmitter Pulse Length Control */
#define USART0_RXPLCTRL      _SFR_MEM8 (0x080E) /* IRCOM Receiver Pulse Length Control */

/* USART1 - Universal Synchronous and Asynchronous Receiver and Transmitter (0x0820) */
#define USART1_BASE          _SFR_MEM8 (0x0820) /* USART1 Base Address */
#define USART1_RXDATAL       _SFR_MEM8 (0x0820) /* Receive Data Low Byte */
#define USART1_RXDATAH       _SFR_MEM8 (0x0821) /* Receive Data High Byte */
#define USART1_TXDATAL       _SFR_MEM8 (0x0822) /* Transmit Data Low Byte */
#define USART1_TXDATAH       _SFR_MEM8 (0x0823) /* Transmit Data High Byte */
#define USART1_STATUS        _SFR_MEM8 (0x0824) /* Status */
#define USART1_CTRLA         _SFR_MEM8 (0x0825) /* Control A */
#define USART1_CTRLB         _SFR_MEM8 (0x0826) /* Control B */
#define USART1_CTRLC         _SFR_MEM8 (0x0827) /* Control C */
#define USART1_BAUD          _SFR_MEM16(0x0828) /* Baud Rate */
#define USART1_BAUDL         _SFR_MEM8 (0x0828) /* Baud Rate LOW BYTE */
#define USART1_BAUDH         _SFR_MEM8 (0x0829) /* Baud Rate HIGH BYTE */
#define USART1_CTRLD         _SFR_MEM8 (0x082A) /* Control D */
#define USART1_DBGCTRL       _SFR_MEM8 (0x082B) /* Debug Control */
#define USART1_EVCTRL        _SFR_MEM8 (0x082C) /* Event Control */
#define USART1_TXPLCTRL      _SFR_MEM8 (0x082D) /* IRCOM Transmitter Pulse Length Control */
#define USART1_RXPLCTRL      _SFR_MEM8 (0x082E) /* IRCOM Receiver Pulse Length Control */

/* USART2 - Universal Synchronous and Asynchronous Receiver and Transmitter (0x0840) */
#define USART2_BASE          _SFR_MEM8 (0x0840) /* USART2 Base Address */
#define USART2_RXDATAL       _SFR_MEM8 (0x0840) /* Receive Data Low Byte */
#define USART2_RXDATAH       _SFR_MEM8 (0x0841) /* Receive Data High Byte */
#define USART2_TXDATAL       _SFR_MEM8 (0x0842) /* Transmit Data Low Byte */
#define USART2_TXDATAH       _SFR_MEM8 (0x0843) /* Transmit Data High Byte */
#define USART2_STATUS        _SFR_MEM8 (0x0844) /* Status */
#define USART2_CTRLA         _SFR_MEM8 (0x0845) /* Control A */
#define USART2_CTRLB         _SFR_MEM8 (0x0846) /* Control B */
#define USART2_CTRLC         _SFR_MEM8 (0x0847) /* Control C */
#define USART2_BAUD          _SFR_MEM16(0x0848) /* Baud Rate */
#define USART2_BAUDL         _SFR_MEM8 (0x0848) /* Baud Rate LOW BYTE */
#define USART2_BAUDH         _SFR_MEM8 (0x0849) /* Baud Rate HIGH BYTE */
#define USART2_CTRLD         _SFR_MEM8 (0x084A) /* Control D */
#define USART2_DBGCTRL       _SFR_MEM8 (0x084B) /* Debug Control */
#define USART2_EVCTRL        _SFR_MEM8 (0x084C) /* Event Control */
#define USART2_TXPLCTRL      _SFR_MEM8 (0x084D) /* IRCOM Transmitter Pulse Length Control */
#define USART2_RXPLCTRL      _SFR_MEM8 (0x084E) /* IRCOM Receiver Pulse Length Control */

/* TWI0 - Two-Wire Interface (0x08A0) */
#define TWI0_BASE            _SFR_MEM8 (0x08A0) /* TWI0 Base Address */
#define TWI0_CTRLA           _SFR_MEM8 (0x08A0) /* Control A */
#define TWI0_DUALCTRL        _SFR_MEM8 (0x08A1) /* Dual Control */
#define TWI0_DBGCTRL         _SFR_MEM8 (0x08A2) /* Debug Control Register */
#define TWI0_MCTRLA          _SFR_MEM8 (0x08A3) /* Master Control A */
#define TWI0_MCTRLB          _SFR_MEM8 (0x08A4) /* Master Control B */
#define TWI0_MSTATUS         _SFR_MEM8 (0x08A5) /* Master Status */
#define TWI0_MBAUD           _SFR_MEM8 (0x08A6) /* Master Baurd Rate Control */
#define TWI0_MADDR           _SFR_MEM8 (0x08A7) /* Master Address */
#define TWI0_MDATA           _SFR_MEM8 (0x08A8) /* Master Data */
#define TWI0_SCTRLA          _SFR_MEM8 (0x08A9) /* Slave Control A */
#define TWI0_SCTRLB          _SFR_MEM8 (0x08AA) /* Slave Control B */
#define TWI0_SSTATUS         _SFR_MEM8 (0x08AB) /* Slave Status */
#define TWI0_SADDR           _SFR_MEM8 (0x08AC) /* Slave Address */
#define TWI0_SDATA           _SFR_MEM8 (0x08AD) /* Slave Data */
#define TWI0_SADDRMASK       _SFR_MEM8 (0x08AE) /* Slave Address Mask */

/* SPI0 - Serial Peripheral Interface (0x08C0) */
#define SPI0_BASE            _SFR_MEM8 (0x08C0) /* SPI0 Base Address */
#define SPI0_CTRLA           _SFR_MEM8 (0x08C0) /* Control A */
#define SPI0_CTRLB           _SFR_MEM8 (0x08C1) /* Control B */
#define SPI0_INTCTRL         _SFR_MEM8 (0x08C2) /* Interrupt Control */
#define SPI0_INTFLAGS        _SFR_MEM8 (0x08C3) /* Interrupt Flags */
#define SPI0_DATA            _SFR_MEM8 (0x08C4) /* Data */

/* TCA0 - 16-bit Timer/Counter Type A - Single Mode (0x0A00) */
#define TCA0_SINGLE_BASE     _SFR_MEM8 (0x0A00) /* TCA0_SINGLE Base Address */
#define TCA0_SINGLE_CTRLA    _SFR_MEM8 (0x0A00) /* Control A */
#define TCA0_SINGLE_CTRLB    _SFR_MEM8 (0x0A01) /* Control B */
#define TCA0_SINGLE_CTRLC    _SFR_MEM8 (0x0A02) /* Control C */
#define TCA0_SINGLE_CTRLD    _SFR_MEM8 (0x0A03) /* Control D */
#define TCA0_SINGLE_CTRLECLR _SFR_MEM8 (0x0A04) /* Control E Clear */
#define TCA0_SINGLE_CTRLESET _SFR_MEM8 (0x0A05) /* Control E Set */
#define TCA0_SINGLE_CTRLFCLR _SFR_MEM8 (0x0A06) /* Control F Clear */
#define TCA0_SINGLE_CTRLFSET _SFR_MEM8 (0x0A07) /* Control F Set */
#define TCA0_SINGLE_EVCTRL   _SFR_MEM8 (0x0A09) /* Event Control */
#define TCA0_SINGLE_INTCTRL  _SFR_MEM8 (0x0A0A) /* Interrupt Control */
#define TCA0_SINGLE_INTFLAGS _SFR_MEM8 (0x0A0B) /* Interrupt Flags */
#define TCA0_SINGLE_DBGCTRL  _SFR_MEM8 (0x0A0E) /* Degbug Control */
#define TCA0_SINGLE_TEMP     _SFR_MEM8 (0x0A0F) /* Temporary data for 16-bit Access */
#define TCA0_SINGLE_CNT      _SFR_MEM16(0x0A20) /* Count */
#define TCA0_SINGLE_CNTL     _SFR_MEM8 (0x0A20) /* Count LOW BYTE */
#define TCA0_SINGLE_CNTH     _SFR_MEM8 (0x0A21) /* Count HIGH BYTE */
#define TCA0_SINGLE_PER      _SFR_MEM16(0x0A26) /* Period */
#define TCA0_SINGLE_PERL     _SFR_MEM8 (0x0A26) /* Period LOW BYTE */
#define TCA0_SINGLE_PERH     _SFR_MEM8 (0x0A27) /* Period HIGH BYTE */
#define TCA0_SINGLE_CMP0     _SFR_MEM16(0x0A28) /* Compare 0 */
#define TCA0_SINGLE_CMP0L    _SFR_MEM8 (0x0A28) /* Compare 0 LOW BYTE */
#define TCA0_SINGLE_CMP0H    _SFR_MEM8 (0x0A29) /* Compare 0 HIGH BYTE */
#define TCA0_SINGLE_CMP1     _SFR_MEM16(0x0A2A) /* Compare 1 */
#define TCA0_SINGLE_CMP1L    _SFR_MEM8 (0x0A2A) /* Compare 1 LOW BYTE */
#define TCA0_SINGLE_CMP1H    _SFR_MEM8 (0x0A2B) /* Compare 1 HIGH BYTE */
#define TCA0_SINGLE_CMP2     _SFR_MEM16(0x0A2C) /* Compare 2 */
#define TCA0_SINGLE_CMP2L    _SFR_MEM8 (0x0A2C) /* Compare 2 LOW BYTE */
#define TCA0_SINGLE_CMP2H    _SFR_MEM8 (0x0A2D) /* Compare 2 HIGH BYTE */
#define TCA0_SINGLE_PERBUF   _SFR_MEM16(0x0A36) /* Period Buffer */
#define TCA0_SINGLE_PERBUFL  _SFR_MEM8 (0x0A36) /* Period Buffer LOW BYTE */
#define TCA0_SINGLE_PERBUFH  _SFR_MEM8 (0x0A37) /* Period Buffer HIGH BYTE */
#define TCA0_SINGLE_CMP0BUF  _SFR_MEM16(0x0A38) /* Compare 0 Buffer */
#define TCA0_SINGLE_CMP0BUFL _SFR_MEM8 (0x0A38) /* Compare 0 Buffer LOW BYTE */
#define TCA0_SINGLE_CMP0BUFH _SFR_MEM8 (0x0A39) /* Compare 0 Buffer HIGH BYTE */
#define TCA0_SINGLE_CMP1BUF  _SFR_MEM16(0x0A3A) /* Compare 1 Buffer */
#define TCA0_SINGLE_CMP1BUFL _SFR_MEM8 (0x0A3A) /* Compare 1 Buffer LOW BYTE */
#define TCA0_SINGLE_CMP1BUFH _SFR_MEM8 (0x0A3B) /* Compare 1 Buffer HIGH BYTE */
#define TCA0_SINGLE_CMP2BUF  _SFR_MEM16(0x0A3C) /* Compare 2 Buffer */
#define TCA0_SINGLE_CMP2BUFL _SFR_MEM8 (0x0A3C) /* Compare 2 Buffer LOW BYTE */
#define TCA0_SINGLE_CMP2BUFH _SFR_MEM8 (0x0A3D) /* Compare 2 Buffer HIGH BYTE */

/* TCA0 - 16-bit Timer/Counter Type A - Split Mode (0x0A00) */
#define TCA0_SPLIT_BASE      _SFR_MEM8 (0x0A00) /* TCA0_SPLIT Base Address */
#define TCA0_SPLIT_CTRLA     _SFR_MEM8 (0x0A00) /* Control A */
#define TCA0_SPLIT_CTRLB     _SFR_MEM8 (0x0A01) /* Control B */
#define TCA0_SPLIT_CTRLC     _SFR_MEM8 (0x0A02) /* Control C */
#define TCA0_SPLIT_CTRLD     _SFR_MEM8 (0x0A03) /* Control D */
#define TCA0_SPLIT_CTRLECLR  _SFR_MEM8 (0x0A04) /* Control E Clear */
#define TCA0_SPLIT_CTRLESET  _SFR_MEM8 (0x0A05) /* Control E Set */
#define TCA0_SPLIT_INTCTRL   _SFR_MEM8 (0x0A0A) /* Interrupt Control */
#define TCA0_SPLIT_INTFLAGS  _SFR_MEM8 (0x0A0B) /* Interrupt Flags */
#define TCA0_SPLIT_DBGCTRL   _SFR_MEM8 (0x0A0E) /* Degbug Control */
#define TCA0_SPLIT_LCNT      _SFR_MEM8 (0x0A20) /* Low Count */
#define TCA0_SPLIT_HCNT      _SFR_MEM8 (0x0A21) /* High Count */
#define TCA0_SPLIT_LPER      _SFR_MEM8 (0x0A26) /* Low Period */
#define TCA0_SPLIT_HPER      _SFR_MEM8 (0x0A27) /* High Period */
#define TCA0_SPLIT_LCMP0     _SFR_MEM8 (0x0A28) /* Low Compare */
#define TCA0_SPLIT_HCMP0     _SFR_MEM8 (0x0A29) /* High Compare */
#define TCA0_SPLIT_LCMP1     _SFR_MEM8 (0x0A2A) /* Low Compare */
#define TCA0_SPLIT_HCMP1     _SFR_MEM8 (0x0A2B) /* High Compare */
#define TCA0_SPLIT_LCMP2     _SFR_MEM8 (0x0A2C) /* Low Compare */
#define TCA0_SPLIT_HCMP2     _SFR_MEM8 (0x0A2D) /* High Compare */

/* TCB0 - 16-bit Timer Type B (0x0A80) */
#define TCB0_BASE            _SFR_MEM8 (0x0A80) /* TCB0 Base Address */
#define TCB0_CTRLA           _SFR_MEM8 (0x0A80) /* Control A */
#define TCB0_CTRLB           _SFR_MEM8 (0x0A81) /* Control Register B */
#define TCB0_EVCTRL          _SFR_MEM8 (0x0A84) /* Event Control */
#define TCB0_INTCTRL         _SFR_MEM8 (0x0A85) /* Interrupt Control */
#define TCB0_INTFLAGS        _SFR_MEM8 (0x0A86) /* Interrupt Flags */
#define TCB0_STATUS          _SFR_MEM8 (0x0A87) /* Status */
#define TCB0_DBGCTRL         _SFR_MEM8 (0x0A88) /* Debug Control */
#define TCB0_TEMP            _SFR_MEM8 (0x0A89) /* Temporary Value */
#define TCB0_CNT             _SFR_MEM16(0x0A8A) /* Count */
#define TCB0_CNTL            _SFR_MEM8 (0x0A8A) /* Count LOW BYTE */
#define TCB0_CNTH            _SFR_MEM8 (0x0A8B) /* Count HIGH BYTE */
#define TCB0_CCMP            _SFR_MEM16(0x0A8C) /* Compare or Capture */
#define TCB0_CCMPL           _SFR_MEM8 (0x0A8C) /* Compare or Capture LOW BYTE */
#define TCB0_CCMPH           _SFR_MEM8 (0x0A8D) /* Compare or Capture HIGH BYTE */

/* TCB1 - 16-bit Timer Type B (0x0A90) */
#define TCB1_BASE            _SFR_MEM8 (0x0A90) /* TCB1 Base Address */
#define TCB1_CTRLA           _SFR_MEM8 (0x0A90) /* Control A */
#define TCB1_CTRLB           _SFR_MEM8 (0x0A91) /* Control Register B */
#define TCB1_EVCTRL          _SFR_MEM8 (0x0A94) /* Event Control */
#define TCB1_INTCTRL         _SFR_MEM8 (0x0A95) /* Interrupt Control */
#define TCB1_INTFLAGS        _SFR_MEM8 (0x0A96) /* Interrupt Flags */
#define TCB1_STATUS          _SFR_MEM8 (0x0A97) /* Status */
#define TCB1_DBGCTRL         _SFR_MEM8 (0x0A98) /* Debug Control */
#define TCB1_TEMP            _SFR_MEM8 (0x0A99) /* Temporary Value */
#define TCB1_CNT             _SFR_MEM16(0x0A9A) /* Count */
#define TCB1_CNTL            _SFR_MEM8 (0x0A9A) /* Count LOW BYTE */
#define TCB1_CNTH            _SFR_MEM8 (0x0A9B) /* Count HIGH BYTE */
#define TCB1_CCMP            _SFR_MEM16(0x0A9C) /* Compare or Capture */
#define TCB1_CCMPL           _SFR_MEM8 (0x0A9C) /* Compare or Capture LOW BYTE */
#define TCB1_CCMPH           _SFR_MEM8 (0x0A9D) /* Compare or Capture HIGH BYTE */

/* TCB2 - 16-bit Timer Type B (0x0AA0) */
#define TCB2_BASE            _SFR_MEM8 (0x0AA0) /* TCB2 Base Address */
#define TCB2_CTRLA           _SFR_MEM8 (0x0AA0) /* Control A */
#define TCB2_CTRLB           _SFR_MEM8 (0x0AA1) /* Control Register B */
#define TCB2_EVCTRL          _SFR_MEM8 (0x0AA4) /* Event Control */
#define TCB2_INTCTRL         _SFR_MEM8 (0x0AA5) /* Interrupt Control */
#define TCB2_INTFLAGS        _SFR_MEM8 (0x0AA6) /* Interrupt Flags */
#define TCB2_STATUS          _SFR_MEM8 (0x0AA7) /* Status */
#define TCB2_DBGCTRL         _SFR_MEM8 (0x0AA8) /* Debug Control */
#define TCB2_TEMP            _SFR_MEM8 (0x0AA9) /* Temporary Value */
#define TCB2_CNT             _SFR_MEM16(0x0AAA) /* Count */
#define TCB2_CNTL            _SFR_MEM8 (0x0AAA) /* Count LOW BYTE */
#define TCB2_CNTH            _SFR_MEM8 (0x0AAB) /* Count HIGH BYTE */
#define TCB2_CCMP            _SFR_MEM16(0x0AAC) /* Compare or Capture */
#define TCB2_CCMPL           _SFR_MEM8 (0x0AAC) /* Compare or Capture LOW BYTE */
#define TCB2_CCMPH           _SFR_MEM8 (0x0AAD) /* Compare or Capture HIGH BYTE */

/* SYSCFG - System Configuration Registers (0x0F00) */
#define SYSCFG_BASE          _SFR_MEM8 (0x0F00) /* SYSCFG Base Address */
#define SYSCFG_REVID         _SFR_MEM8 (0x0F01) /* Revision ID */
#define SYSCFG_EXTBRK        _SFR_MEM8 (0x0F02) /* External Break */
#define SYSCFG_OCDM          _SFR_MEM8 (0x0F18) /* OCD Message Register */
#define SYSCFG_OCDMS         _SFR_MEM8 (0x0F19) /* OCD Message Status */

/* NVMCTRL - Non-volatile Memory Controller (0x1000) */
#define NVMCTRL_BASE         _SFR_MEM8 (0x1000) /* NVMCTRL Base Address */
#define NVMCTRL_CTRLA        _SFR_MEM8 (0x1000) /* Control A */
#define NVMCTRL_CTRLB        _SFR_MEM8 (0x1001) /* Control B */
#define NVMCTRL_STATUS       _SFR_MEM8 (0x1002) /* Status */
#define NVMCTRL_INTCTRL      _SFR_MEM8 (0x1003) /* Interrupt Control */
#define NVMCTRL_INTFLAGS     _SFR_MEM8 (0x1004) /* Interrupt Flags */
#define NVMCTRL_DATA         _SFR_MEM16(0x1006) /* Data */
#define NVMCTRL_DATAL        _SFR_MEM8 (0x1006) /* Data LOW BYTE */
#define NVMCTRL_DATAH        _SFR_MEM8 (0x1007) /* Data HIGH BYTE */
#define NVMCTRL_ADDR         _SFR_MEM16(0x1008) /* Address */
#define NVMCTRL_ADDRL        _SFR_MEM8 (0x1008) /* Address LOW BYTE */
#define NVMCTRL_ADDRH        _SFR_MEM8 (0x1009) /* Address HIGH BYTE */

/* SIGROW - Signature row (0x1100) */
#define SIGROW_BASE          _SFR_MEM8 (0x1100) /* SIGROW Base Address */
#define SIGROW_DEVICEID0     _SFR_MEM8 (0x1100) /* Device ID Byte 0 */
#define SIGROW_DEVICEID1     _SFR_MEM8 (0x1101) /* Device ID Byte 1 */
#define SIGROW_DEVICEID2     _SFR_MEM8 (0x1102) /* Device ID Byte 2 */
#define SIGROW_SERNUM0       _SFR_MEM8 (0x1103) /* Serial Number Byte 0 */
#define SIGROW_SERNUM1       _SFR_MEM8 (0x1104) /* Serial Number Byte 1 */
#define SIGROW_SERNUM2       _SFR_MEM8 (0x1105) /* Serial Number Byte 2 */
#define SIGROW_SERNUM3       _SFR_MEM8 (0x1106) /* Serial Number Byte 3 */
#define SIGROW_SERNUM4       _SFR_MEM8 (0x1107) /* Serial Number Byte 4 */
#define SIGROW_SERNUM5       _SFR_MEM8 (0x1108) /* Serial Number Byte 5 */
#define SIGROW_SERNUM6       _SFR_MEM8 (0x1109) /* Serial Number Byte 6 */
#define SIGROW_SERNUM7       _SFR_MEM8 (0x110A) /* Serial Number Byte 7 */
#define SIGROW_SERNUM8       _SFR_MEM8 (0x110B) /* Serial Number Byte 8 */
#define SIGROW_SERNUM9       _SFR_MEM8 (0x110C) /* Serial Number Byte 9 */
#define SIGROW_OSCCAL32K     _SFR_MEM8 (0x1114) /* Oscillator Calibration for 32kHz ULP */
#define SIGROW_OSCCAL16M0    _SFR_MEM8 (0x1118) /* Oscillator Calibration 16 MHz Byte 0 */
#define SIGROW_OSCCAL16M1    _SFR_MEM8 (0x1119) /* Oscillator Calibration 16 MHz Byte 1 */
#define SIGROW_OSCCAL20M0    _SFR_MEM8 (0x111A) /* Oscillator Calibration 20 MHz Byte 0 */
#define SIGROW_OSCCAL20M1    _SFR_MEM8 (0x111B) /* Oscillator Calibration 20 MHz Byte 1 */
#define SIGROW_TEMPSENSE0    _SFR_MEM8 (0x1120) /* Temperature Sensor Calibration Byte 0 */
#define SIGROW_TEMPSENSE1    _SFR_MEM8 (0x1121) /* Temperature Sensor Calibration Byte 1 */
#define SIGROW_OSC16ERR3V    _SFR_MEM8 (0x1122) /* OSC16 error at 3V */
#define SIGROW_OSC16ERR5V    _SFR_MEM8 (0x1123) /* OSC16 error at 5V */
#define SIGROW_OSC20ERR3V    _SFR_MEM8 (0x1124) /* OSC20 error at 3V */
#define SIGROW_OSC20ERR5V    _SFR_MEM8 (0x1125) /* OSC20 error at 5V */
#define SIGROW_CHECKSUM1     _SFR_MEM8 (0x112F) /* CRC Checksum Byte 1 */

/* FUSE - Fuses (0x1280) */
#define FUSE_BASE            _SFR_MEM8 (0x1280) /* FUSE Base Address */
#define FUSE_WDTCFG          _SFR_MEM8 (0x1280) /* Watchdog Configuration */
#define FUSE_BODCFG          _SFR_MEM8 (0x1281) /* BOD Configuration */
#define FUSE_OSCCFG          _SFR_MEM8 (0x1282) /* Oscillator Configuration */
#define FUSE_SYSCFG0         _SFR_MEM8 (0x1285) /* System Configuration 0 */
#define FUSE_SYSCFG1         _SFR_MEM8 (0x1286) /* System Configuration 1 */
#define FUSE_APPEND          _SFR_MEM8 (0x1287) /* Application Code Section End */
#define FUSE_BOOTEND         _SFR_MEM8 (0x1288) /* Boot Section End */

/* LOCKBIT - Lockbit (0x128A) */
#define LOCKBIT_BASE         _SFR_MEM8 (0x128A) /* LOCKBIT Base Address */
#define LOCKBIT_LOCKBIT      _SFR_MEM8 (0x128A) /* Lock Bits */

/* USERROW - User Row (0x1300) */
#define USERROW_BASE         _SFR_MEM8 (0x1300) /* USERROW Base Address */
#define USERROW_USERROW0     _SFR_MEM8 (0x1300) /* User Row Byte 0 */
#define USERROW_USERROW1     _SFR_MEM8 (0x1301) /* User Row Byte 1 */
#define USERROW_USERROW2     _SFR_MEM8 (0x1302) /* User Row Byte 2 */
#define USERROW_USERROW3     _SFR_MEM8 (0x1303) /* User Row Byte 3 */
#define USERROW_USERROW4     _SFR_MEM8 (0x1304) /* User Row Byte 4 */
#define USERROW_USERROW5     _SFR_MEM8 (0x1305) /* User Row Byte 5 */
#define USERROW_USERROW6     _SFR_MEM8 (0x1306) /* User Row Byte 6 */
#define USERROW_USERROW7     _SFR_MEM8 (0x1307) /* User Row Byte 7 */
#define USERROW_USERROW8     _SFR_MEM8 (0x1308) /* User Row Byte 8 */
#define USERROW_USERROW9     _SFR_MEM8 (0x1309) /* User Row Byte 9 */
#define USERROW_USERROW10    _SFR_MEM8 (0x130A) /* User Row Byte 10 */
#define USERROW_USERROW11    _SFR_MEM8 (0x130B) /* User Row Byte 11 */
#define USERROW_USERROW12    _SFR_MEM8 (0x130C) /* User Row Byte 12 */
#define USERROW_USERROW13    _SFR_MEM8 (0x130D) /* User Row Byte 13 */
#define USERROW_USERROW14    _SFR_MEM8 (0x130E) /* User Row Byte 14 */
#define USERROW_USERROW15    _SFR_MEM8 (0x130F) /* User Row Byte 15 */
#define USERROW_USERROW16    _SFR_MEM8 (0x1310) /* User Row Byte 16 */
#define USERROW_USERROW17    _SFR_MEM8 (0x1311) /* User Row Byte 17 */
#define USERROW_USERROW18    _SFR_MEM8 (0x1312) /* User Row Byte 18 */
#define USERROW_USERROW19    _SFR_MEM8 (0x1313) /* User Row Byte 19 */
#define USERROW_USERROW20    _SFR_MEM8 (0x1314) /* User Row Byte 20 */
#define USERROW_USERROW21    _SFR_MEM8 (0x1315) /* User Row Byte 21 */
#define USERROW_USERROW22    _SFR_MEM8 (0x1316) /* User Row Byte 22 */
#define USERROW_USERROW23    _SFR_MEM8 (0x1317) /* User Row Byte 23 */
#define USERROW_USERROW24    _SFR_MEM8 (0x1318) /* User Row Byte 24 */
#define USERROW_USERROW25    _SFR_MEM8 (0x1319) /* User Row Byte 25 */
#define USERROW_USERROW26    _SFR_MEM8 (0x131A) /* User Row Byte 26 */
#define USERROW_USERROW27    _SFR_MEM8 (0x131B) /* User Row Byte 27 */
#define USERROW_USERROW28    _SFR_MEM8 (0x131C) /* User Row Byte 28 */
#define USERROW_USERROW29    _SFR_MEM8 (0x131D) /* User Row Byte 29 */
#define USERROW_USERROW30    _SFR_MEM8 (0x131E) /* User Row Byte 30 */
#define USERROW_USERROW31    _SFR_MEM8 (0x131F) /* User Row Byte 31 */
#define USERROW_USERROW32    _SFR_MEM8 (0x1320) /* User Row Byte 32 */
#define USERROW_USERROW33    _SFR_MEM8 (0x1321) /* User Row Byte 33 */
#define USERROW_USERROW34    _SFR_MEM8 (0x1322) /* User Row Byte 34 */
#define USERROW_USERROW35    _SFR_MEM8 (0x1323) /* User Row Byte 35 */
#define USERROW_USERROW36    _SFR_MEM8 (0x1324) /* User Row Byte 36 */
#define USERROW_USERROW37    _SFR_MEM8 (0x1325) /* User Row Byte 37 */
#define USERROW_USERROW38    _SFR_MEM8 (0x1326) /* User Row Byte 38 */
#define USERROW_USERROW39    _SFR_MEM8 (0x1327) /* User Row Byte 39 */
#define USERROW_USERROW40    _SFR_MEM8 (0x1328) /* User Row Byte 40 */
#define USERROW_USERROW41    _SFR_MEM8 (0x1329) /* User Row Byte 41 */
#define USERROW_USERROW42    _SFR_MEM8 (0x132A) /* User Row Byte 42 */
#define USERROW_USERROW43    _SFR_MEM8 (0x132B) /* User Row Byte 43 */
#define USERROW_USERROW44    _SFR_MEM8 (0x132C) /* User Row Byte 44 */
#define USERROW_USERROW45    _SFR_MEM8 (0x132D) /* User Row Byte 45 */
#define USERROW_USERROW46    _SFR_MEM8 (0x132E) /* User Row Byte 46 */
#define USERROW_USERROW47    _SFR_MEM8 (0x132F) /* User Row Byte 47 */
#define USERROW_USERROW48    _SFR_MEM8 (0x1330) /* User Row Byte 48 */
#define USERROW_USERROW49    _SFR_MEM8 (0x1331) /* User Row Byte 49 */
#define USERROW_USERROW50    _SFR_MEM8 (0x1332) /* User Row Byte 50 */
#define USERROW_USERROW51    _SFR_MEM8 (0x1333) /* User Row Byte 51 */
#define USERROW_USERROW52    _SFR_MEM8 (0x1334) /* User Row Byte 52 */
#define USERROW_USERROW53    _SFR_MEM8 (0x1335) /* User Row Byte 53 */
#define USERROW_USERROW54    _SFR_MEM8 (0x1336) /* User Row Byte 54 */
#define USERROW_USERROW55    _SFR_MEM8 (0x1337) /* User Row Byte 55 */
#define USERROW_USERROW56    _SFR_MEM8 (0x1338) /* User Row Byte 56 */
#define USERROW_USERROW57    _SFR_MEM8 (0x1339) /* User Row Byte 57 */
#define USERROW_USERROW58    _SFR_MEM8 (0x133A) /* User Row Byte 58 */
#define USERROW_USERROW59    _SFR_MEM8 (0x133B) /* User Row Byte 59 */
#define USERROW_USERROW60    _SFR_MEM8 (0x133C) /* User Row Byte 60 */
#define USERROW_USERROW61    _SFR_MEM8 (0x133D) /* User Row Byte 61 */
#define USERROW_USERROW62    _SFR_MEM8 (0x133E) /* User Row Byte 62 */
#define USERROW_USERROW63    _SFR_MEM8 (0x133F) /* User Row Byte 63 */
/* avr-libc typedef for avr/fuse.h */
typedef FUSE_t NVM_FUSES_t;

/*
================================================================================
Interrupt Vector Definitions
================================================================================
*/

/* Vector 0 is the reset vector */

/* CRCSCAN interrupt vectors */
#define CRCSCAN_NMI_vect_num (1)                 
#define CRCSCAN_NMI_vect     _VECTOR(1)          /* CRCSCAN - NMI Interrupt */

/* BOD interrupt vectors */
#define BOD_VLM_vect_num     (2)                 
#define BOD_VLM_vect         _VECTOR(2)          /* BOD - VLM Interrupt */

/* RTC interrupt vectors */
#define RTC_CNT_vect_num     (3)                 
#define RTC_CNT_vect         _VECTOR(3)          /* RTC - CNT Interrupt */
#define RTC_PIT_vect_num     (4)                 
#define RTC_PIT_vect         _VECTOR(4)          /* RTC - PIT Interrupt */

/* CCL interrupt vectors */
#define CCL_CCL_vect_num     (5)                 
#define CCL_CCL_vect         _VECTOR(5)          /* CCL - CCL Interrupt */

/* PORTA interrupt vectors */
#define PORTA_PORT_vect_num  (6)                 
#define PORTA_PORT_vect      _VECTOR(6)          /* PORTA - PORT Interrupt */

/* TCA0 interrupt vectors */
#define TCA0_LUNF_vect_num   (7)                 
#define TCA0_LUNF_vect       _VECTOR(7)          /* TCA0 - LUNF Interrupt */
#define TCA0_OVF_vect_num    (7)                 
#define TCA0_OVF_vect        _VECTOR(7)          /* TCA0 - OVF Interrupt */
#define TCA0_HUNF_vect_num   (8)                 
#define TCA0_HUNF_vect       _VECTOR(8)          /* TCA0 - HUNF Interrupt */
#define TCA0_LCMP0_vect_num  (9)                 
#define TCA0_LCMP0_vect      _VECTOR(9)          /* TCA0 - LCMP0 Interrupt */
#define TCA0_CMP0_vect_num   (9)                 
#define TCA0_CMP0_vect       _VECTOR(9)          /* TCA0 - CMP0 Interrupt */
#define TCA0_CMP1_vect_num   (10)                
#define TCA0_CMP1_vect       _VECTOR(10)         /* TCA0 - CMP1 Interrupt */
#define TCA0_LCMP1_vect_num  (10)                
#define TCA0_LCMP1_vect      _VECTOR(10)         /* TCA0 - LCMP1 Interrupt */
#define TCA0_CMP2_vect_num   (11)                
#define TCA0_CMP2_vect       _VECTOR(11)         /* TCA0 - CMP2 Interrupt */
#define TCA0_LCMP2_vect_num  (11)                
#define TCA0_LCMP2_vect      _VECTOR(11)         /* TCA0 - LCMP2 Interrupt */

/* TCB0 interrupt vectors */
#define TCB0_INT_vect_num    (12)                
#define TCB0_INT_vect        _VECTOR(12)         /* TCB0 - INT Interrupt */

/* TCB1 interrupt vectors */
#define TCB1_INT_vect_num    (13)                
#define TCB1_INT_vect        _VECTOR(13)         /* TCB1 - INT Interrupt */

/* TWI0 interrupt vectors */
#define TWI0_TWIS_vect_num   (14)                
#define TWI0_TWIS_vect       _VECTOR(14)         /* TWI0 - TWIS Interrupt */
#define TWI0_TWIM_vect_num   (15)                
#define TWI0_TWIM_vect       _VECTOR(15)         /* TWI0 - TWIM Interrupt */

/* SPI0 interrupt vectors */
#define SPI0_INT_vect_num    (16)                
#define SPI0_INT_vect        _VECTOR(16)         /* SPI0 - INT Interrupt */

/* USART0 interrupt vectors */
#define USART0_RXC_vect_num  (17)                
#define USART0_RXC_vect      _VECTOR(17)         /* USART0 - RXC Interrupt */
#define USART0_DRE_vect_num  (18)                
#define USART0_DRE_vect      _VECTOR(18)         /* USART0 - DRE Interrupt */
#define USART0_TXC_vect_num  (19)                
#define USART0_TXC_vect      _VECTOR(19)         /* USART0 - TXC Interrupt */

/* PORTD interrupt vectors */
#define PORTD_PORT_vect_num  (20)                
#define PORTD_PORT_vect      _VECTOR(20)         /* PORTD - PORT Interrupt */

/* AC0 interrupt vectors */
#define AC0_AC_vect_num      (21)                
#define AC0_AC_vect          _VECTOR(21)         /* AC0 - AC Interrupt */

/* ADC0 interrupt vectors */
#define ADC0_RESRDY_vect_num (22)                
#define ADC0_RESRDY_vect     _VECTOR(22)         /* ADC0 - RESRDY Interrupt */
#define ADC0_WCOMP_vect_num  (23)                
#define ADC0_WCOMP_vect      _VECTOR(23)         /* ADC0 - WCOMP Interrupt */

/* PORTC interrupt vectors */
#define PORTC_PORT_vect_num  (24)                
#define PORTC_PORT_vect      _VECTOR(24)         /* PORTC - PORT Interrupt */

/* TCB2 interrupt vectors */
#define TCB2_INT_vect_num    (25)                
#define TCB2_INT_vect        _VECTOR(25)         /* TCB2 - INT Interrupt */

/* USART1 interrupt vectors */
#define USART1_RXC_vect_num  (26)                
#define USART1_RXC_vect      _VECTOR(26)         /* USART1 - RXC Interrupt */
#define USART1_DRE_vect_num  (27)                
#define USART1_DRE_vect      _VECTOR(27)         /* USART1 - DRE Interrupt */
#define USART1_TXC_vect_num  (28)                
#define USART1_TXC_vect      _VECTOR(28)         /* USART1 - TXC Interrupt */

/* PORTF interrupt vectors */
#define PORTF_PORT_vect_num  (29)                
#define PORTF_PORT_vect      _VECTOR(29)         /* PORTF - PORT Interrupt */

/* NVMCTRL interrupt vectors */
#define NVMCTRL_EE_vect_num  (30)                
#define NVMCTRL_EE_vect      _VECTOR(30)         /* NVMCTRL - EE Interrupt */

/* USART2 interrupt vectors */
#define USART2_RXC_vect_num  (31)                
#define USART2_RXC_vect      _VECTOR(31)         /* USART2 - RXC Interrupt */
#define USART2_DRE_vect_num  (32)                
#define USART2_DRE_vect      _VECTOR(32)         /* USART2 - DRE Interrupt */
#define USART2_TXC_vect_num  (33)                
#define USART2_TXC_vect      _VECTOR(33)         /* USART2 - TXC Interrupt */

/* PORTB interrupt vectors */
#define PORTB_PORT_vect_num  (34)                
#define PORTB_PORT_vect      _VECTOR(34)         /* PORTB - PORT Interrupt */

/* PORTE interrupt vectors */
#define PORTE_PORT_vect_num  (35)                
#define PORTE_PORT_vect      _VECTOR(35)         /* PORTE - PORT Interrupt */

/* Vector Table Size */
#define _VECTOR_SIZE         (4)                 /* Size of individual vector. */
#define _VECTORS_SIZE        (36 * _VECTOR_SIZE) /* Size of all vectors */
/*
================================================================================
Constants
================================================================================
*/

#define DATAMEM_START             (0x0000)                                           
#define DATAMEM_SIZE              (0x8000)                                           
#define DATAMEM_END               (DATAMEM_START + DATAMEM_SIZE - 1)                 

#define EEPROM_START              (0x1400)                                           
#define EEPROM_SIZE               (0x0100)                                           
#define EEPROM_PAGE_SIZE          (0x0040)                                           
#define EEPROM_END                (EEPROM_START + EEPROM_SIZE - 1)                   

/* Added MAPPED_EEPROM segment names for avr-libc */
#define MAPPED_EEPROM_START       (EEPROM_START)                                     
#define MAPPED_EEPROM_SIZE        (EEPROM_SIZE)                                      
#define MAPPED_EEPROM_PAGE_SIZE   (EEPROM_PAGE_SIZE)                                 
#define MAPPED_EEPROM_END         (EEPROM_END)                                       

#define FUSES_START               (0x1280)                                           
#define FUSES_SIZE                (0x000A)                                           
#define FUSES_PAGE_SIZE           (0x0040)                                           
#define FUSES_END                 (FUSES_START + FUSES_SIZE - 1)                     

#define INTERNAL_SRAM_START       (0x3000)                                           
#define INTERNAL_SRAM_SIZE        (0x1000)                                           
#define INTERNAL_SRAM_PAGE_SIZE   (0x0001)                                           
#define INTERNAL_SRAM_END         (INTERNAL_SRAM_START + INTERNAL_SRAM_SIZE - 1)     

#define IO_START                  (0x0000)                                           
#define IO_SIZE                   (0x1100)                                           
#define IO_PAGE_SIZE              (0x0001)                                           
#define IO_END                    (IO_START + IO_SIZE - 1)                           

#define LOCKBITS_START            (0x128A)                                           
#define LOCKBITS_SIZE             (0x0001)                                           
#define LOCKBITS_PAGE_SIZE        (0x0040)                                           
#define LOCKBITS_END              (LOCKBITS_START + LOCKBITS_SIZE - 1)               

#define MAPPED_PROGMEM_START      (0x4000)                                           
#define MAPPED_PROGMEM_SIZE       (0x8000)                                           
#define MAPPED_PROGMEM_PAGE_SIZE  (0x0080)                                           
#define MAPPED_PROGMEM_END        (MAPPED_PROGMEM_START + MAPPED_PROGMEM_SIZE - 1)   

#define PROD_SIGNATURES_START     (0x1103)                                           
#define PROD_SIGNATURES_SIZE      (0x007D)                                           
#define PROD_SIGNATURES_PAGE_SIZE (0x0080)                                           
#define PROD_SIGNATURES_END       (PROD_SIGNATURES_START + PROD_SIGNATURES_SIZE - 1) 

#define SIGNATURES_START          (0x1100)                                           
#define SIGNATURES_SIZE           (0x0003)                                           
#define SIGNATURES_PAGE_SIZE      (0x0080)                                           
#define SIGNATURES_END            (SIGNATURES_START + SIGNATURES_SIZE - 1)           

#define USER_SIGNATURES_START     (0x1300)                                           
#define USER_SIGNATURES_SIZE      (0x0040)                                           
#define USER_SIGNATURES_PAGE_SIZE (0x0040)                                           
#define USER_SIGNATURES_END       (USER_SIGNATURES_START + USER_SIGNATURES_SIZE - 1) 

#define PROGMEM_START     (0x0000)                           
#define PROGMEM_SIZE      (0x8000)                           
#define PROGMEM_END       (PROGMEM_START + PROGMEM_SIZE - 1) 

/* PROGMEM_START ALREADY DEFINED */
/* PROGMEM_SIZE ALREADY DEFINED */
#define PROGMEM_PAGE_SIZE (0x0080)                           
/* PROGMEM_END ALREADY DEFINED */

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
#define PB4 (4) 
#define PB5 (5) 

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

#define PE0 (0) 
#define PE1 (1) 
#define PE2 (2) 
#define PE3 (3) 

#define PF0 (0) 
#define PF1 (1) 
#define PF2 (2) 
#define PF3 (3) 
#define PF4 (4) 
#define PF5 (5) 
#define PF6 (6) 

/*
================================================================================
Fuses/LockBits/Signatures
================================================================================
*/

/* ============ Fuses ============ */

#define FUSE_MEMORY_SIZE 9 

/* Fuse offset 0x00 */
#define PERIOD0 (unsigned char)~_BV(0) /* Watchdog Timeout Period bit 0 */
#define PERIOD1 (unsigned char)~_BV(1) /* Watchdog Timeout Period bit 1 */
#define PERIOD2 (unsigned char)~_BV(2) /* Watchdog Timeout Period bit 2 */
#define PERIOD3 (unsigned char)~_BV(3) /* Watchdog Timeout Period bit 3 */
#define WINDOW0 (unsigned char)~_BV(4) /* Watchdog Window Timeout Period bit 0 */
#define WINDOW1 (unsigned char)~_BV(5) /* Watchdog Window Timeout Period bit 1 */
#define WINDOW2 (unsigned char)~_BV(6) /* Watchdog Window Timeout Period bit 2 */
#define WINDOW3 (unsigned char)~_BV(7) /* Watchdog Window Timeout Period bit 3 */

/* Fuse offset 0x01 */
#define SLEEP0   (unsigned char)~_BV(0) /* BOD Operation in Sleep Mode bit 0 */
#define SLEEP1   (unsigned char)~_BV(1) /* BOD Operation in Sleep Mode bit 1 */
#define ACTIVE0  (unsigned char)~_BV(2) /* BOD Operation in Active Mode bit 0 */
#define ACTIVE1  (unsigned char)~_BV(3) /* BOD Operation in Active Mode bit 1 */
#define SAMPFREQ (unsigned char)~_BV(4) /* BOD Sample Frequency */
#define LVL0     (unsigned char)~_BV(5) /* BOD Level bit 0 */
#define LVL1     (unsigned char)~_BV(6) /* BOD Level bit 1 */
#define LVL2     (unsigned char)~_BV(7) /* BOD Level bit 2 */

/* Fuse offset 0x02 */
#define FREQSEL0 (unsigned char)~_BV(0) /* Frequency Select bit 0 */
#define FREQSEL1 (unsigned char)~_BV(1) /* Frequency Select bit 1 */
#define OSCLOCK  (unsigned char)~_BV(7) /* Oscillator Lock */

/* Fuse offset 0x03 */

/* Fuse offset 0x04 */

/* Fuse offset 0x05 */
#define EESAVE    (unsigned char)~_BV(0) /* EEPROM Save */
#define RSTPINCFG (unsigned char)~_BV(3) /* Reset Pin Configuration */
#define CRCSRC0   (unsigned char)~_BV(6) /* CRC Source bit 0 */
#define CRCSRC1   (unsigned char)~_BV(7) /* CRC Source bit 1 */

/* Fuse offset 0x06 */
#define SUT0 (unsigned char)~_BV(0) /* Startup Time bit 0 */
#define SUT1 (unsigned char)~_BV(1) /* Startup Time bit 1 */
#define SUT2 (unsigned char)~_BV(2) /* Startup Time bit 2 */

/* Fuse offset 0x07 */

/* Fuse offset 0x08 */

/* Fuse offset 0x09 */


/* ========== Lock Bits ========== */
#define __LOCK_BITS_EXIST  


/* ========== Signature ========== */
#define SIGNATURE_0 (0x1E) 
#define SIGNATURE_1 (0x95) 
#define SIGNATURE_2 (0x30) 

#endif /* #ifdef _AVR_ATmega3208_H_INCLUDED */
