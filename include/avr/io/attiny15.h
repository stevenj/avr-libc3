/******************************************************************************
 *   This file is part of avr-libc3.                                          * 
 *                                                                            * 
 *   Automatically created by devtools/gen-ioheader-atdf.py (V0.91)           * 
 *                                                                            * 
 *   .atpack File: ATtiny15.atdf                                              * 
 *   .ATDF File:   atdf/ATtiny15.atdf                                         * 
 *   Version:      2.0.10                                                     * 
 *   Date:         2019-04-25                                                 * 
 *   Device:       ATtiny15                                                   * 
 *   Architecture: AVR8                                                       * 
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
#  define _AVR_IOXXX_H_ "ioATtiny15.h"
#else
#  error "Attempt to include more than one <avr/ioXXX.h> file."
#endif

#ifndef _AVR_ATtiny15_H_INCLUDED
#  define _AVR_ATtiny15_H_INCLUDED

/*
================================================================================
Ungrouped common register
================================================================================
*/

#define OSCCAL _SFR_MEM8 (0x31) /* Status Register */

#define MCUSR  _SFR_MEM8 (0x34) /* MCU Status register */
#define MCUCR  _SFR_MEM8 (0x35) /* MCU Control Register */

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
    register8_t LOW;
} FUSE_t;


/* Brown-out Detection Level */
typedef enum FUSE_BODLEVEL_enum
{
    FUSE_BODLEVEL_2V7_gc = (0x01<<7), /* Brown-out detection at VCC=2.7 V */
    FUSE_BODLEVEL_4V0_gc = (0x00<<7), /* Brown-out detection at VCC=4.0 V */
} FUSE_BODLEVEL_t;

/* Brown-out detection enabled */
typedef enum FUSE_BODEN_enum
{
    FUSE_BODEN_CLEAR_gc = (0x00), /* Brown-out detection enabled - CLEAR */
    FUSE_BODEN_SET_gc   = (0x40), /* Brown-out detection enabled - SET */
} FUSE_BODEN_t;

/* Serial program downloading (SPI) enabled */
typedef enum FUSE_SPIEN_enum
{
    FUSE_SPIEN_CLEAR_gc = (0x00), /* Serial program downloading (SPI) enabled - CLEAR */
    FUSE_SPIEN_SET_gc   = (0x20), /* Serial program downloading (SPI) enabled - SET */
} FUSE_SPIEN_t;

/* External reset function of PB5 disabled */
typedef enum FUSE_RSTDISBL_enum
{
    FUSE_RSTDISBL_CLEAR_gc = (0x00), /* External reset function of PB5 disabled - CLEAR */
    FUSE_RSTDISBL_SET_gc   = (0x10), /* External reset function of PB5 disabled - SET */
} FUSE_RSTDISBL_t;

/* Clock Select */
typedef enum FUSE_CKSEL_enum
{
    FUSE_CKSEL_VQUICKPWR_gc = (0x03), /* Very quickly rising power */
    FUSE_CKSEL_QUICKPWR_gc  = (0x02), /* Quickly rising power */
    FUSE_CKSEL_SLOWPWR_gc   = (0x01), /* Slowly rising power */
    FUSE_CKSEL_SLOWPWR_gc   = (0x00), /* Slowly rising power */
} FUSE_CKSEL_t;

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
    LOCKBIT_LB_PROG_VER_DISABLED_gc = (0x00<<1), /* Further programming and verification disabled */
    LOCKBIT_LB_PROG_DISABLED_gc     = (0x01<<1), /* Further programming disabled */
    LOCKBIT_LB_NO_LOCK_gc           = (0x03<<1), /* No memory lock features enabled */
} LOCKBIT_LB_t;

/*
--------------------------------------------------------------------------------
ADC - Analog-to-Digital Converter
--------------------------------------------------------------------------------
*/

typedef struct ADC_struct
{
    register8_t rsv_0x00[4]; /* RESERVED REGISTER BLOCK */
    _REGISTER16 (ADC);       /* ADC Data Register  Bytes */
    register8_t rsv_0x05;    /* RESERVED REGISTER */
    register8_t ADCSR;       /* The ADC Control and Status register */
    register8_t ADMUX;       /* The ADC multiplexer Selection Register */
} ADC_t;


/* Reference Selection Bits */
typedef enum ADC_REFS_enum
{
    ADC_REFS_VAL_0x00_gc = (0x00<<6), /* AVCC */
    ADC_REFS_VAL_0x01_gc = (0x01<<6), /* AREF */
    ADC_REFS_VAL_0x02_gc = (0x02<<6), /* Internal Voltage Referance */
    ADC_REFS_VAL_0x03_gc = (0x03<<6), /* Internal Voltage Reference With External Capacitor at AREF Pin. */
} ADC_REFS_t;

/* Left Adjust Result */
typedef enum ADC_ADLAR_enum
{
    ADC_ADLAR_CLEAR_gc = (0x00), /* Left Adjust Result - CLEAR */
    ADC_ADLAR_SET_gc   = (0x20), /* Left Adjust Result - SET */
} ADC_ADLAR_t;

/* Analog Channel and Gain Selection Bits */
#define ADC_ADMUX_MUX_gc(x) (x & 0x07)

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

/* ADC  Free Running Select */
typedef enum ADC_ADFR_enum
{
    ADC_ADFR_CLEAR_gc = (0x00), /* ADC  Free Running Select - CLEAR */
    ADC_ADFR_SET_gc   = (0x20), /* ADC  Free Running Select - SET */
} ADC_ADFR_t;

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

/*
--------------------------------------------------------------------------------
AC - Analog Comparator
--------------------------------------------------------------------------------
*/

typedef struct AC_struct
{
    register8_t rsv_0x00[8]; /* RESERVED REGISTER BLOCK */
    register8_t ACSR;        /* Analog Comparator Control And Status Register */
} AC_t;


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
EEPROM - EEPROM
--------------------------------------------------------------------------------
*/

typedef struct EEPROM_struct
{
    register8_t rsv_0x00[28]; /* RESERVED REGISTER BLOCK */
    register8_t EECR;         /* EEPROM Control Register */
    register8_t EEDR;         /* EEPROM Data Register */
    register8_t EEAR;         /* EEPROM Read/Write Access */
} EEPROM_t;


/* EEProm Ready Interrupt Enable */
typedef enum EEPROM_EERIE_enum
{
    EEPROM_EERIE_CLEAR_gc = (0x00), /* EEProm Ready Interrupt Enable - CLEAR */
    EEPROM_EERIE_SET_gc   = (0x08), /* EEProm Ready Interrupt Enable - SET */
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
PORT - I/O Port
--------------------------------------------------------------------------------
*/

typedef struct PORTB_struct
{
    register8_t rsv_0x00[22]; /* RESERVED REGISTER BLOCK */
    register8_t PINB;         /* Input Pins, Port B */
    register8_t DDRB;         /* Data Direction Register, Port B */
    register8_t PORTB;        /* Data Register, Port B */
} PORTB_t;


/*
--------------------------------------------------------------------------------
TC8 - Timer/Counter, 8-bit
--------------------------------------------------------------------------------
*/

typedef struct TC0_struct
{
    register8_t rsv_0x00[50]; /* RESERVED REGISTER BLOCK */
    register8_t TCNT0;        /* Timer Counter 0 */
    register8_t TCCR0;        /* Timer/Counter0 Control Register */
    register8_t rsv_0x34[4];  /* RESERVED REGISTER BLOCK */
    register8_t TIFR;         /* Timer/Counter Interrupt Flag register */
    register8_t TIMSK;        /* Timer/Counter Interrupt Mask Register */
} TC0_t;


/*
--------------------------------------------------------------------------------
TC8 - Timer/Counter, 8-bit
--------------------------------------------------------------------------------
*/

typedef struct TC1_struct
{
    register8_t rsv_0x00[44]; /* RESERVED REGISTER BLOCK */
    register8_t SFIOR;        /* Special Function IO Register */
    register8_t OCR1B;        /* Output Compare Register */
    register8_t OCR1A;        /* Output Compare Register */
    register8_t TCNT1;        /* Timer/Counter Register */
    register8_t TCCR1;        /* Timer/Counter Control Register */
    register8_t rsv_0x31[7];  /* RESERVED REGISTER BLOCK */
    register8_t TIFR;         /* Timer/Counter Interrupt Flag Register */
    register8_t TIMSK;        /* Timer/Counter Interrupt Mask Register */
} TC1_t;


/* Timer/Counter0 Overflow Interrupt Enable */
typedef enum TC0_TOIE0_enum
{
    TC0_TOIE0_CLEAR_gc = (0x00), /* Timer/Counter0 Overflow Interrupt Enable - CLEAR */
    TC0_TOIE0_SET_gc   = (0x02), /* Timer/Counter0 Overflow Interrupt Enable - SET */
} TC0_TOIE0_t;

/* Timer/Counter0 Overflow Flag */
typedef enum TC0_TOV0_enum
{
    TC0_TOV0_CLEAR_gc = (0x00), /* Timer/Counter0 Overflow Flag - CLEAR */
    TC0_TOV0_SET_gc   = (0x02), /* Timer/Counter0 Overflow Flag - SET */
} TC0_TOV0_t;

/* Clock Select0 bit 2 */
typedef enum TC0_CS02_enum
{
    TC0_CS02_VAL_0x00_gc = (0x00<<2), /* No Clock Source (Stopped) */
    TC0_CS02_VAL_0x01_gc = (0x01<<2), /* Running, No Prescaling */
    TC0_CS02_VAL_0x02_gc = (0x02<<2), /* Running, CLK/8 */
    TC0_CS02_VAL_0x03_gc = (0x03<<2), /* Running, CLK/64 */
    TC0_CS02_VAL_0x04_gc = (0x04<<2), /* Running, CLK/256 */
    TC0_CS02_VAL_0x05_gc = (0x05<<2), /* Running, CLK/1024 */
    TC0_CS02_VAL_0x06_gc = (0x06<<2), /* Running, ExtClk Tx Falling Edge */
    TC0_CS02_VAL_0x07_gc = (0x07<<2), /* Running, ExtClk Tx Rising Edge */
} TC0_CS02_t;

/* Clock Select0 bit 1 */
typedef enum TC0_CS01_enum
{
    TC0_CS01_CLEAR_gc = (0x00), /* Clock Select0 bit 1 - CLEAR */
    TC0_CS01_SET_gc   = (0x02), /* Clock Select0 bit 1 - SET */
} TC0_CS01_t;

/* Clock Select0 bit 0 */
typedef enum TC0_CS00_enum
{
    TC0_CS00_CLEAR_gc = (0x00), /* Clock Select0 bit 0 - CLEAR */
    TC0_CS00_SET_gc   = (0x01), /* Clock Select0 bit 0 - SET */
} TC0_CS00_t;

/* Clear Timer/Counter on Compare Match */
typedef enum TC1_CTC1_enum
{
    TC1_CTC1_CLEAR_gc = (0x00), /* Clear Timer/Counter on Compare Match - CLEAR */
    TC1_CTC1_SET_gc   = (0x80), /* Clear Timer/Counter on Compare Match - SET */
} TC1_CTC1_t;

/* Pulse Width Modulator Enable */
typedef enum TC1_PWM1_enum
{
    TC1_PWM1_CLEAR_gc = (0x00), /* Pulse Width Modulator Enable - CLEAR */
    TC1_PWM1_SET_gc   = (0x40), /* Pulse Width Modulator Enable - SET */
} TC1_PWM1_t;

/* Compare Output Mode, Bits */
typedef enum TC1_COM1A_enum
{
    TC1_COM1A_VAL_0x00_gc = (0x00<<4), /* Disconnected from OCn/PWMn */
    TC1_COM1A_VAL_0x01_gc = (0x01<<4), /* Toggle OCn/PWMn output line */
    TC1_COM1A_VAL_0x02_gc = (0x02<<4), /* Clear OCn/PWMn output line */
    TC1_COM1A_VAL_0x03_gc = (0x03<<4), /* set OCn/PWMn output line */
} TC1_COM1A_t;

/* Clock Select Bits */
typedef enum TC1_CS1_enum
{
    TC1_CS1_VAL_0x00_gc = (0x00), /* No Clock Source (Stopped) */
    TC1_CS1_VAL_0x01_gc = (0x01), /* Running, CLK*16 */
    TC1_CS1_VAL_0x02_gc = (0x02), /* Running, CLK*8 */
    TC1_CS1_VAL_0x03_gc = (0x03), /* Running, CLK*4 */
    TC1_CS1_VAL_0x04_gc = (0x04), /* Running, CLK*2 */
    TC1_CS1_VAL_0x05_gc = (0x05), /* Running, No Prescaling */
    TC1_CS1_VAL_0x06_gc = (0x06), /* Running, CLK/2 */
    TC1_CS1_VAL_0x07_gc = (0x07), /* Running, CLK/4 */
    TC1_CS1_VAL_0x08_gc = (0x08), /* Running, CLK/8 */
    TC1_CS1_VAL_0x09_gc = (0x09), /* Running, CLK/16 */
    TC1_CS1_VAL_0x0A_gc = (0x0A), /* Running, CLK/32 */
    TC1_CS1_VAL_0x0B_gc = (0x0B), /* Running, CLK/64 */
    TC1_CS1_VAL_0x0C_gc = (0x0C), /* Running, CLK/128 */
    TC1_CS1_VAL_0x0D_gc = (0x0D), /* Running, CLK/256 */
    TC1_CS1_VAL_0x0E_gc = (0x0E), /* Running, CLK/512 */
    TC1_CS1_VAL_0x0F_gc = (0x0F), /* Running, CLK/1024 */
} TC1_CS1_t;

/* OCIE1A: Timer/Counter1 Output Compare Interrupt Enable */
typedef enum TC1_OCIE1A_enum
{
    TC1_OCIE1A_CLEAR_gc = (0x00), /* OCIE1A: Timer/Counter1 Output Compare Interrupt Enable - CLEAR */
    TC1_OCIE1A_SET_gc   = (0x40), /* OCIE1A: Timer/Counter1 Output Compare Interrupt Enable - SET */
} TC1_OCIE1A_t;

/* Timer/Counter1 Overflow Interrupt Enable */
typedef enum TC1_TOIE1_enum
{
    TC1_TOIE1_CLEAR_gc = (0x00), /* Timer/Counter1 Overflow Interrupt Enable - CLEAR */
    TC1_TOIE1_SET_gc   = (0x04), /* Timer/Counter1 Overflow Interrupt Enable - SET */
} TC1_TOIE1_t;

/* Timer/Counter1 Output Compare Flag 1A */
typedef enum TC1_OCF1A_enum
{
    TC1_OCF1A_CLEAR_gc = (0x00), /* Timer/Counter1 Output Compare Flag 1A - CLEAR */
    TC1_OCF1A_SET_gc   = (0x40), /* Timer/Counter1 Output Compare Flag 1A - SET */
} TC1_OCF1A_t;

/* Timer/Counter1 Overflow Flag */
typedef enum TC1_TOV1_enum
{
    TC1_TOV1_CLEAR_gc = (0x00), /* Timer/Counter1 Overflow Flag - CLEAR */
    TC1_TOV1_SET_gc   = (0x04), /* Timer/Counter1 Overflow Flag - SET */
} TC1_TOV1_t;

/* Force Output Compare 1A */
typedef enum TC1_FOC1A_enum
{
    TC1_FOC1A_CLEAR_gc = (0x00), /* Force Output Compare 1A - CLEAR */
    TC1_FOC1A_SET_gc   = (0x04), /* Force Output Compare 1A - SET */
} TC1_FOC1A_t;

/* Prescaler Reset Timer/Counter1 */
typedef enum TC1_PSR1_enum
{
    TC1_PSR1_CLEAR_gc = (0x00), /* Prescaler Reset Timer/Counter1 - CLEAR */
    TC1_PSR1_SET_gc   = (0x02), /* Prescaler Reset Timer/Counter1 - SET */
} TC1_PSR1_t;

/* Prescaler Reset Timer/Counter0 */
typedef enum TC1_PSR0_enum
{
    TC1_PSR0_CLEAR_gc = (0x00), /* Prescaler Reset Timer/Counter0 - CLEAR */
    TC1_PSR0_SET_gc   = (0x01), /* Prescaler Reset Timer/Counter0 - SET */
} TC1_PSR0_t;

/*
--------------------------------------------------------------------------------
WDT - Watchdog Timer
--------------------------------------------------------------------------------
*/

typedef struct WDT_struct
{
    register8_t rsv_0x00[33]; /* RESERVED REGISTER BLOCK */
    register8_t WDTCR;        /* Watchdog Timer Control Register */
} WDT_t;


/* RW */
typedef enum WDT_WDTOE_enum
{
    WDT_WDTOE_CLEAR_gc = (0x00), /* RW - CLEAR */
    WDT_WDTOE_SET_gc   = (0x10), /* RW - SET */
} WDT_WDTOE_t;

/* Watch Dog Enable */
typedef enum WDT_WDE_enum
{
    WDT_WDE_CLEAR_gc = (0x00), /* Watch Dog Enable - CLEAR */
    WDT_WDE_SET_gc   = (0x08), /* Watch Dog Enable - SET */
} WDT_WDE_t;

/* Watch Dog Timer Prescaler bits */
typedef enum WDT_WDP_enum
{
    WDT_WDP_VAL_0x00_gc = (0x00), /* Oscillator Cycles 16K */
    WDT_WDP_VAL_0x01_gc = (0x01), /* Oscillator Cycles 32K */
    WDT_WDP_VAL_0x02_gc = (0x02), /* Oscillator Cycles 64K */
    WDT_WDP_VAL_0x03_gc = (0x03), /* Oscillator Cycles 128K */
    WDT_WDP_VAL_0x04_gc = (0x04), /* Oscillator Cycles 256K */
    WDT_WDP_VAL_0x05_gc = (0x05), /* Oscillator Cycles 512K */
    WDT_WDP_VAL_0x06_gc = (0x06), /* Oscillator Cycles 1024K */
    WDT_WDP_VAL_0x07_gc = (0x07), /* Oscillator Cycles 2048K */
} WDT_WDP_t;

/*
--------------------------------------------------------------------------------
CPU - CPU Registers
--------------------------------------------------------------------------------
*/

typedef struct CPU_struct
{
    register8_t rsv_0x00[49]; /* RESERVED REGISTER BLOCK */
    register8_t OSCCAL;       /* Status Register */
    register8_t rsv_0x32[2];  /* RESERVED REGISTER BLOCK */
    register8_t MCUSR;        /* MCU Status register */
    register8_t MCUCR;        /* MCU Control Register */
    register8_t rsv_0x36[9];  /* RESERVED REGISTER BLOCK */
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

/* Pull-up Disable */
typedef enum CPU_PUD_enum
{
    CPU_PUD_CLEAR_gc = (0x00), /* Pull-up Disable - CLEAR */
    CPU_PUD_SET_gc   = (0x40), /* Pull-up Disable - SET */
} CPU_PUD_t;

/* Sleep Enable */
typedef enum CPU_SE_enum
{
    CPU_SE_CLEAR_gc = (0x00), /* Sleep Enable - CLEAR */
    CPU_SE_SET_gc   = (0x20), /* Sleep Enable - SET */
} CPU_SE_t;

/* Sleep Mode Select Bits */
typedef enum CPU_SM_enum
{
    CPU_SM_IDLE_gc     = (0x00<<3), /* Idle */
    CPU_SM_ADC_gc      = (0x01<<3), /* ADC Noise Reduction (If Available) */
    CPU_SM_PDOWN_gc    = (0x02<<3), /* Power Down */
    CPU_SM_VAL_0x03_gc = (0x03<<3), /* Reserved */
} CPU_SM_t;

/* Interrupt Sense Control 0 bits */
typedef enum CPU_ISC0_enum
{
    CPU_ISC0_VAL_0x00_gc = (0x00), /* Low Level of INTX */
    CPU_ISC0_VAL_0x01_gc = (0x01), /* Any Logical Change in INTX */
    CPU_ISC0_VAL_0x02_gc = (0x02), /* Falling Edge of INTX */
    CPU_ISC0_VAL_0x03_gc = (0x03), /* Rising Edge of INTX */
} CPU_ISC0_t;

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

/* Power-On Reset Flag */
typedef enum CPU_PORF_enum
{
    CPU_PORF_CLEAR_gc = (0x00), /* Power-On Reset Flag - CLEAR */
    CPU_PORF_SET_gc   = (0x01), /* Power-On Reset Flag - SET */
} CPU_PORF_t;

/*
--------------------------------------------------------------------------------
EXINT - External Interrupts
--------------------------------------------------------------------------------
*/

typedef struct EXINT_struct
{
    register8_t rsv_0x00[58]; /* RESERVED REGISTER BLOCK */
    register8_t GIFR;         /* General Interrupt Flag register */
    register8_t GIMSK;        /* General Interrupt Mask Register */
} EXINT_t;


/* External Interrupt Request 0 Enable */
typedef enum EXINT_INT0_enum
{
    EXINT_INT0_CLEAR_gc = (0x00), /* External Interrupt Request 0 Enable - CLEAR */
    EXINT_INT0_SET_gc   = (0x40), /* External Interrupt Request 0 Enable - SET */
} EXINT_INT0_t;

/* Pin Change Interrupt Enable */
typedef enum EXINT_PCIE_enum
{
    EXINT_PCIE_CLEAR_gc = (0x00), /* Pin Change Interrupt Enable - CLEAR */
    EXINT_PCIE_SET_gc   = (0x20), /* Pin Change Interrupt Enable - SET */
} EXINT_PCIE_t;

/* External Interrupt Flag 0 */
typedef enum EXINT_INTF0_enum
{
    EXINT_INTF0_CLEAR_gc = (0x00), /* External Interrupt Flag 0 - CLEAR */
    EXINT_INTF0_SET_gc   = (0x40), /* External Interrupt Flag 0 - SET */
} EXINT_INTF0_t;

/* Pin Change Interrupt Flag */
typedef enum EXINT_PCIF_enum
{
    EXINT_PCIF_CLEAR_gc = (0x00), /* Pin Change Interrupt Flag - CLEAR */
    EXINT_PCIF_SET_gc   = (0x20), /* Pin Change Interrupt Flag - SET */
} EXINT_PCIF_t;
/*
================================================================================
IO Module Instances. Mapped to memory.
================================================================================
*/

#define ADC     (*(ADC_t *) 0x0000)     /* Analog-to-Digital Converter */
#define AC      (*(AC_t *) 0x0000)      /* Analog Comparator */
#define EEPROM  (*(EEPROM_t *) 0x0000)  /* EEPROM */
#define PORTB   (*(PORTB_t *) 0x0000)   /* I/O Port */
#define TC0     (*(TC0_t *) 0x0000)     /* Timer/Counter, 8-bit */
#define TC1     (*(TC1_t *) 0x0000)     /* Timer/Counter, 8-bit */
#define WDT     (*(WDT_t *) 0x0000)     /* Watchdog Timer */
#define CPU     (*(CPU_t *) 0x0000)     /* CPU Registers */
#define EXINT   (*(EXINT_t *) 0x0000)   /* External Interrupts */
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


/* Brown-out Detection Level */
#define FUSE_BODLEVEL_2V7_gc (0x01<<7) /* Brown-out detection at VCC=2.7 V */
#define FUSE_BODLEVEL_4V0_gc (0x00<<7) /* Brown-out detection at VCC=4.0 V */


/* Brown-out detection enabled */
#define FUSE_BODEN_CLEAR_gc (0x00) /* Brown-out detection enabled - CLEAR */
#define FUSE_BODEN_SET_gc   (0x40) /* Brown-out detection enabled - SET */


/* Serial program downloading (SPI) enabled */
#define FUSE_SPIEN_CLEAR_gc (0x00) /* Serial program downloading (SPI) enabled - CLEAR */
#define FUSE_SPIEN_SET_gc   (0x20) /* Serial program downloading (SPI) enabled - SET */


/* External reset function of PB5 disabled */
#define FUSE_RSTDISBL_CLEAR_gc (0x00) /* External reset function of PB5 disabled - CLEAR */
#define FUSE_RSTDISBL_SET_gc   (0x10) /* External reset function of PB5 disabled - SET */


/* Clock Select */
#define FUSE_CKSEL_VQUICKPWR_gc (0x03) /* Very quickly rising power */
#define FUSE_CKSEL_QUICKPWR_gc  (0x02) /* Quickly rising power */
#define FUSE_CKSEL_SLOWPWR_gc   (0x01) /* Slowly rising power */
/* WARNING: FUSE_CKSEL_SLOWPWR_gc ALREADY DEFINED as '(0x01)' NOT '(0x00)' */


/*
--------------------------------------------------------------------------------
LOCKBIT - Lockbits
--------------------------------------------------------------------------------
*/


/* Memory Lock */
#define LOCKBIT_LB_PROG_VER_DISABLED_gc (0x00<<1) /* Further programming and verification disabled */
#define LOCKBIT_LB_PROG_DISABLED_gc     (0x01<<1) /* Further programming disabled */
#define LOCKBIT_LB_NO_LOCK_gc           (0x03<<1) /* No memory lock features enabled */


/*
--------------------------------------------------------------------------------
ADC - Analog-to-Digital Converter
--------------------------------------------------------------------------------
*/


/* Reference Selection Bits */
#define ADC_REFS_VAL_0x00_gc (0x00<<6) /* AVCC */
#define ADC_REFS_VAL_0x01_gc (0x01<<6) /* AREF */
#define ADC_REFS_VAL_0x02_gc (0x02<<6) /* Internal Voltage Referance */
#define ADC_REFS_VAL_0x03_gc (0x03<<6) /* Internal Voltage Reference With External Capacitor at AREF Pin. */


/* Left Adjust Result */
#define ADC_ADLAR_CLEAR_gc (0x00) /* Left Adjust Result - CLEAR */
#define ADC_ADLAR_SET_gc   (0x20) /* Left Adjust Result - SET */


/* Analog Channel and Gain Selection Bits */
#define ADC_ADMUX_MUX_gc(x) (x & 0x07)

/* ADC Enable */
#define ADC_ADEN_CLEAR_gc (0x00) /* ADC Enable - CLEAR */
#define ADC_ADEN_SET_gc   (0x80) /* ADC Enable - SET */


/* ADC Start Conversion */
#define ADC_ADSC_CLEAR_gc (0x00) /* ADC Start Conversion - CLEAR */
#define ADC_ADSC_SET_gc   (0x40) /* ADC Start Conversion - SET */


/* ADC  Free Running Select */
#define ADC_ADFR_CLEAR_gc (0x00) /* ADC  Free Running Select - CLEAR */
#define ADC_ADFR_SET_gc   (0x20) /* ADC  Free Running Select - SET */


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


/*
--------------------------------------------------------------------------------
AC - Analog Comparator
--------------------------------------------------------------------------------
*/


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


/* Analog Comparator Interrupt Mode Select bits */
#define AC_ACIS_VAL_0x00_gc (0x00) /* Interrupt on Toggle */
#define AC_ACIS_VAL_0x01_gc (0x01) /* Reserved */
#define AC_ACIS_VAL_0x02_gc (0x02) /* Interrupt on Falling Edge */
#define AC_ACIS_VAL_0x03_gc (0x03) /* Interrupt on Rising Edge */


/*
--------------------------------------------------------------------------------
EEPROM - EEPROM
--------------------------------------------------------------------------------
*/


/* EEProm Ready Interrupt Enable */
#define EEPROM_EERIE_CLEAR_gc (0x00) /* EEProm Ready Interrupt Enable - CLEAR */
#define EEPROM_EERIE_SET_gc   (0x08) /* EEProm Ready Interrupt Enable - SET */


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
PORT - I/O Port
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
TC8 - Timer/Counter, 8-bit
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
TC8 - Timer/Counter, 8-bit
--------------------------------------------------------------------------------
*/


/* Timer/Counter0 Overflow Interrupt Enable */
#define TC0_TOIE0_CLEAR_gc (0x00) /* Timer/Counter0 Overflow Interrupt Enable - CLEAR */
#define TC0_TOIE0_SET_gc   (0x02) /* Timer/Counter0 Overflow Interrupt Enable - SET */


/* Timer/Counter0 Overflow Flag */
#define TC0_TOV0_CLEAR_gc (0x00) /* Timer/Counter0 Overflow Flag - CLEAR */
#define TC0_TOV0_SET_gc   (0x02) /* Timer/Counter0 Overflow Flag - SET */


/* Clock Select0 bit 2 */
#define TC0_CS02_VAL_0x00_gc (0x00<<2) /* No Clock Source (Stopped) */
#define TC0_CS02_VAL_0x01_gc (0x01<<2) /* Running, No Prescaling */
#define TC0_CS02_VAL_0x02_gc (0x02<<2) /* Running, CLK/8 */
#define TC0_CS02_VAL_0x03_gc (0x03<<2) /* Running, CLK/64 */
#define TC0_CS02_VAL_0x04_gc (0x04<<2) /* Running, CLK/256 */
#define TC0_CS02_VAL_0x05_gc (0x05<<2) /* Running, CLK/1024 */
#define TC0_CS02_VAL_0x06_gc (0x06<<2) /* Running, ExtClk Tx Falling Edge */
#define TC0_CS02_VAL_0x07_gc (0x07<<2) /* Running, ExtClk Tx Rising Edge */


/* Clock Select0 bit 1 */
#define TC0_CS01_CLEAR_gc (0x00) /* Clock Select0 bit 1 - CLEAR */
#define TC0_CS01_SET_gc   (0x02) /* Clock Select0 bit 1 - SET */


/* Clock Select0 bit 0 */
#define TC0_CS00_CLEAR_gc (0x00) /* Clock Select0 bit 0 - CLEAR */
#define TC0_CS00_SET_gc   (0x01) /* Clock Select0 bit 0 - SET */


/* Clear Timer/Counter on Compare Match */
#define TC1_CTC1_CLEAR_gc (0x00) /* Clear Timer/Counter on Compare Match - CLEAR */
#define TC1_CTC1_SET_gc   (0x80) /* Clear Timer/Counter on Compare Match - SET */


/* Pulse Width Modulator Enable */
#define TC1_PWM1_CLEAR_gc (0x00) /* Pulse Width Modulator Enable - CLEAR */
#define TC1_PWM1_SET_gc   (0x40) /* Pulse Width Modulator Enable - SET */


/* Compare Output Mode, Bits */
#define TC1_COM1A_VAL_0x00_gc (0x00<<4) /* Disconnected from OCn/PWMn */
#define TC1_COM1A_VAL_0x01_gc (0x01<<4) /* Toggle OCn/PWMn output line */
#define TC1_COM1A_VAL_0x02_gc (0x02<<4) /* Clear OCn/PWMn output line */
#define TC1_COM1A_VAL_0x03_gc (0x03<<4) /* set OCn/PWMn output line */


/* Clock Select Bits */
#define TC1_CS1_VAL_0x00_gc (0x00) /* No Clock Source (Stopped) */
#define TC1_CS1_VAL_0x01_gc (0x01) /* Running, CLK*16 */
#define TC1_CS1_VAL_0x02_gc (0x02) /* Running, CLK*8 */
#define TC1_CS1_VAL_0x03_gc (0x03) /* Running, CLK*4 */
#define TC1_CS1_VAL_0x04_gc (0x04) /* Running, CLK*2 */
#define TC1_CS1_VAL_0x05_gc (0x05) /* Running, No Prescaling */
#define TC1_CS1_VAL_0x06_gc (0x06) /* Running, CLK/2 */
#define TC1_CS1_VAL_0x07_gc (0x07) /* Running, CLK/4 */
#define TC1_CS1_VAL_0x08_gc (0x08) /* Running, CLK/8 */
#define TC1_CS1_VAL_0x09_gc (0x09) /* Running, CLK/16 */
#define TC1_CS1_VAL_0x0A_gc (0x0A) /* Running, CLK/32 */
#define TC1_CS1_VAL_0x0B_gc (0x0B) /* Running, CLK/64 */
#define TC1_CS1_VAL_0x0C_gc (0x0C) /* Running, CLK/128 */
#define TC1_CS1_VAL_0x0D_gc (0x0D) /* Running, CLK/256 */
#define TC1_CS1_VAL_0x0E_gc (0x0E) /* Running, CLK/512 */
#define TC1_CS1_VAL_0x0F_gc (0x0F) /* Running, CLK/1024 */


/* OCIE1A: Timer/Counter1 Output Compare Interrupt Enable */
#define TC1_OCIE1A_CLEAR_gc (0x00) /* OCIE1A: Timer/Counter1 Output Compare Interrupt Enable - CLEAR */
#define TC1_OCIE1A_SET_gc   (0x40) /* OCIE1A: Timer/Counter1 Output Compare Interrupt Enable - SET */


/* Timer/Counter1 Overflow Interrupt Enable */
#define TC1_TOIE1_CLEAR_gc (0x00) /* Timer/Counter1 Overflow Interrupt Enable - CLEAR */
#define TC1_TOIE1_SET_gc   (0x04) /* Timer/Counter1 Overflow Interrupt Enable - SET */


/* Timer/Counter1 Output Compare Flag 1A */
#define TC1_OCF1A_CLEAR_gc (0x00) /* Timer/Counter1 Output Compare Flag 1A - CLEAR */
#define TC1_OCF1A_SET_gc   (0x40) /* Timer/Counter1 Output Compare Flag 1A - SET */


/* Timer/Counter1 Overflow Flag */
#define TC1_TOV1_CLEAR_gc (0x00) /* Timer/Counter1 Overflow Flag - CLEAR */
#define TC1_TOV1_SET_gc   (0x04) /* Timer/Counter1 Overflow Flag - SET */


/* Force Output Compare 1A */
#define TC1_FOC1A_CLEAR_gc (0x00) /* Force Output Compare 1A - CLEAR */
#define TC1_FOC1A_SET_gc   (0x04) /* Force Output Compare 1A - SET */


/* Prescaler Reset Timer/Counter1 */
#define TC1_PSR1_CLEAR_gc (0x00) /* Prescaler Reset Timer/Counter1 - CLEAR */
#define TC1_PSR1_SET_gc   (0x02) /* Prescaler Reset Timer/Counter1 - SET */


/* Prescaler Reset Timer/Counter0 */
#define TC1_PSR0_CLEAR_gc (0x00) /* Prescaler Reset Timer/Counter0 - CLEAR */
#define TC1_PSR0_SET_gc   (0x01) /* Prescaler Reset Timer/Counter0 - SET */


/*
--------------------------------------------------------------------------------
WDT - Watchdog Timer
--------------------------------------------------------------------------------
*/


/* RW */
#define WDT_WDTOE_CLEAR_gc (0x00) /* RW - CLEAR */
#define WDT_WDTOE_SET_gc   (0x10) /* RW - SET */


/* Watch Dog Enable */
#define WDT_WDE_CLEAR_gc (0x00) /* Watch Dog Enable - CLEAR */
#define WDT_WDE_SET_gc   (0x08) /* Watch Dog Enable - SET */


/* Watch Dog Timer Prescaler bits */
#define WDT_WDP_VAL_0x00_gc (0x00) /* Oscillator Cycles 16K */
#define WDT_WDP_VAL_0x01_gc (0x01) /* Oscillator Cycles 32K */
#define WDT_WDP_VAL_0x02_gc (0x02) /* Oscillator Cycles 64K */
#define WDT_WDP_VAL_0x03_gc (0x03) /* Oscillator Cycles 128K */
#define WDT_WDP_VAL_0x04_gc (0x04) /* Oscillator Cycles 256K */
#define WDT_WDP_VAL_0x05_gc (0x05) /* Oscillator Cycles 512K */
#define WDT_WDP_VAL_0x06_gc (0x06) /* Oscillator Cycles 1024K */
#define WDT_WDP_VAL_0x07_gc (0x07) /* Oscillator Cycles 2048K */


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


/* Pull-up Disable */
#define CPU_PUD_CLEAR_gc (0x00) /* Pull-up Disable - CLEAR */
#define CPU_PUD_SET_gc   (0x40) /* Pull-up Disable - SET */


/* Sleep Enable */
#define CPU_SE_CLEAR_gc (0x00) /* Sleep Enable - CLEAR */
#define CPU_SE_SET_gc   (0x20) /* Sleep Enable - SET */


/* Sleep Mode Select Bits */
#define CPU_SM_IDLE_gc     (0x00<<3) /* Idle */
#define CPU_SM_ADC_gc      (0x01<<3) /* ADC Noise Reduction (If Available) */
#define CPU_SM_PDOWN_gc    (0x02<<3) /* Power Down */
#define CPU_SM_VAL_0x03_gc (0x03<<3) /* Reserved */


/* Interrupt Sense Control 0 bits */
#define CPU_ISC0_VAL_0x00_gc (0x00) /* Low Level of INTX */
#define CPU_ISC0_VAL_0x01_gc (0x01) /* Any Logical Change in INTX */
#define CPU_ISC0_VAL_0x02_gc (0x02) /* Falling Edge of INTX */
#define CPU_ISC0_VAL_0x03_gc (0x03) /* Rising Edge of INTX */


/* Watchdog Reset Flag */
#define CPU_WDRF_CLEAR_gc (0x00) /* Watchdog Reset Flag - CLEAR */
#define CPU_WDRF_SET_gc   (0x08) /* Watchdog Reset Flag - SET */


/* Brown-out Reset Flag */
#define CPU_BORF_CLEAR_gc (0x00) /* Brown-out Reset Flag - CLEAR */
#define CPU_BORF_SET_gc   (0x04) /* Brown-out Reset Flag - SET */


/* External Reset Flag */
#define CPU_EXTRF_CLEAR_gc (0x00) /* External Reset Flag - CLEAR */
#define CPU_EXTRF_SET_gc   (0x02) /* External Reset Flag - SET */


/* Power-On Reset Flag */
#define CPU_PORF_CLEAR_gc (0x00) /* Power-On Reset Flag - CLEAR */
#define CPU_PORF_SET_gc   (0x01) /* Power-On Reset Flag - SET */


/*
--------------------------------------------------------------------------------
EXINT - External Interrupts
--------------------------------------------------------------------------------
*/


/* External Interrupt Request 0 Enable */
#define EXINT_INT0_CLEAR_gc (0x00) /* External Interrupt Request 0 Enable - CLEAR */
#define EXINT_INT0_SET_gc   (0x40) /* External Interrupt Request 0 Enable - SET */


/* Pin Change Interrupt Enable */
#define EXINT_PCIE_CLEAR_gc (0x00) /* Pin Change Interrupt Enable - CLEAR */
#define EXINT_PCIE_SET_gc   (0x20) /* Pin Change Interrupt Enable - SET */


/* External Interrupt Flag 0 */
#define EXINT_INTF0_CLEAR_gc (0x00) /* External Interrupt Flag 0 - CLEAR */
#define EXINT_INTF0_SET_gc   (0x40) /* External Interrupt Flag 0 - SET */


/* Pin Change Interrupt Flag */
#define EXINT_PCIF_CLEAR_gc (0x00) /* Pin Change Interrupt Flag - CLEAR */
#define EXINT_PCIF_SET_gc   (0x20) /* Pin Change Interrupt Flag - SET */

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
#define ADC_BASE        _SFR_MEM16(0x0000) /* ADC Base Address */
#define ADC_ADC         _SFR_MEM16(0x0004) /* ADC Data Register  Bytes */
#define ADC_ADCL        _SFR_MEM8 (0x0004) /* ADC Data Register  Bytes LOW BYTE */
#define ADC_ADCH        _SFR_MEM8 (0x0005) /* ADC Data Register  Bytes HIGH BYTE */
#define ADC_ADCSR       _SFR_MEM8 (0x0006) /* The ADC Control and Status register */
#define ADC_ADMUX       _SFR_MEM8 (0x0007) /* The ADC multiplexer Selection Register */

/* AC - Analog Comparator (0x0000) */
#define AC_BASE         _SFR_MEM8 (0x0000) /* AC Base Address */
#define AC_ACSR         _SFR_MEM8 (0x0008) /* Analog Comparator Control And Status Register */

/* EEPROM - EEPROM (0x0000) */
#define EEPROM_BASE     _SFR_MEM8 (0x0000) /* EEPROM Base Address */
#define EEPROM_EECR     _SFR_MEM8 (0x001C) /* EEPROM Control Register */
#define EEPROM_EEDR     _SFR_MEM8 (0x001D) /* EEPROM Data Register */
#define EEPROM_EEAR     _SFR_MEM8 (0x001E) /* EEPROM Read/Write Access */

/* PORTB - I/O Port (0x0000) */
#define PORTBB_BASE     _SFR_MEM8 (0x0000) /* PORTBB Base Address */
#define PORTBB_PINB     _SFR_MEM8 (0x0016) /* Input Pins, Port B */
#define PORTBB_DDRB     _SFR_MEM8 (0x0017) /* Data Direction Register, Port B */
#define PORTBB_PORTB    _SFR_MEM8 (0x0018) /* Data Register, Port B */

/* TC0 - Timer/Counter, 8-bit (0x0000) */
#define TC8_BASE        _SFR_MEM8 (0x0000) /* TC8 Base Address */
#define TC8_TCNT0       _SFR_MEM8 (0x0032) /* Timer Counter 0 */
#define TC8_TCCR0       _SFR_MEM8 (0x0033) /* Timer/Counter0 Control Register */
#define TC8_TIFR        _SFR_MEM8 (0x0038) /* Timer/Counter Interrupt Flag register */
#define TC8_TIMSK       _SFR_MEM8 (0x0039) /* Timer/Counter Interrupt Mask Register */

/* TC1 - Timer/Counter, 8-bit (0x0000) */
/* TC8_BASE ALREADY DEFINED */
#define TC8_SFIOR       _SFR_MEM8 (0x002C) /* Special Function IO Register */
#define TC8_OCR1B       _SFR_MEM8 (0x002D) /* Output Compare Register */
#define TC8_OCR1A       _SFR_MEM8 (0x002E) /* Output Compare Register */
#define TC8_TCNT1       _SFR_MEM8 (0x002F) /* Timer/Counter Register */
#define TC8_TCCR1       _SFR_MEM8 (0x0030) /* Timer/Counter Control Register */
/* TC8_TIFR ALREADY DEFINED */
/* TC8_TIMSK ALREADY DEFINED */

/* WDT - Watchdog Timer (0x0000) */
#define WDT_BASE        _SFR_MEM8 (0x0000) /* WDT Base Address */
#define WDT_WDTCR       _SFR_MEM8 (0x0021) /* Watchdog Timer Control Register */

/* CPU - CPU Registers (0x0000) */
#define CPU_BASE        _SFR_MEM8 (0x0000) /* CPU Base Address */
#define CPU_OSCCAL      _SFR_MEM8 (0x0031) /* Status Register */
#define CPU_MCUSR       _SFR_MEM8 (0x0034) /* MCU Status register */
#define CPU_MCUCR       _SFR_MEM8 (0x0035) /* MCU Control Register */
#define CPU_SREG        _SFR_MEM8 (0x003F) /* Status Register */

/* EXINT - External Interrupts (0x0000) */
#define EXINT_BASE      _SFR_MEM8 (0x0000) /* EXINT Base Address */
#define EXINT_GIFR      _SFR_MEM8 (0x003A) /* General Interrupt Flag register */
#define EXINT_GIMSK     _SFR_MEM8 (0x003B) /* General Interrupt Mask Register */

/* FUSE - Fuses (0x0000) */
#define FUSE_BASE       _SFR_MEM8 (0x0000) /* FUSE Base Address */
#define FUSE_LOW        _SFR_MEM8 (0x0000) 

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
#define None_RESET_vect_num       (0)                
#define None_RESET_vect           _VECTOR(0)         /* External Reset, Power-on Reset and Watchdog Reset */
#define None_INT0_vect_num        (1)                
#define None_INT0_vect            _VECTOR(1)         /* External Interrupt 0 */
#define None_IO_PINS_vect_num     (2)                
#define None_IO_PINS_vect         _VECTOR(2)         /* External Interrupt Request 0 */
#define None_TIMER1_COMP_vect_num (3)                
#define None_TIMER1_COMP_vect     _VECTOR(3)         /* Timer/Counter1 Compare Match */
#define None_TIMER1_OVF_vect_num  (4)                
#define None_TIMER1_OVF_vect      _VECTOR(4)         /* Timer/Counter1 Overflow */
#define None_TIMER0_OVF_vect_num  (5)                
#define None_TIMER0_OVF_vect      _VECTOR(5)         /* Timer/Counter0 Overflow */
#define None_EE_RDY_vect_num      (6)                
#define None_EE_RDY_vect          _VECTOR(6)         /* EEPROM Ready */
#define None_ANA_COMP_vect_num    (7)                
#define None_ANA_COMP_vect        _VECTOR(7)         /* Analog Comparator */
#define None_ADC_vect_num         (8)                
#define None_ADC_vect             _VECTOR(8)         /* ADC Conversion Ready */

/* Vector Table Size */
#define _VECTOR_SIZE              (2)                /* Size of individual vector. */
#define _VECTORS_SIZE             (9 * _VECTOR_SIZE) /* Size of all vectors */
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

#define DATAMEM_START       (0x0000)                               
#define DATAMEM_SIZE        (0x0060)                               
#define DATAMEM_END         (DATAMEM_START + DATAMEM_SIZE - 1)     

#define REGISTERS_START     (0x0000)                               
#define REGISTERS_SIZE      (0x0020)                               
#define REGISTERS_PAGE_SIZE (0x0001)                               
#define REGISTERS_END       (REGISTERS_START + REGISTERS_SIZE - 1) 

#define MAPPED_IO_START     (0x0020)                               
#define MAPPED_IO_SIZE      (0x0040)                               
#define MAPPED_IO_PAGE_SIZE (0x0001)                               
#define MAPPED_IO_END       (MAPPED_IO_START + MAPPED_IO_SIZE - 1) 

#define EEPROMMEM_START         (0x0000)                               
#define EEPROMMEM_SIZE          (0x0040)                               
#define EEPROMMEM_END           (EEPROMMEM_START + EEPROMMEM_SIZE - 1) 

#define EEPROM_START            (0x0000)                               
#define EEPROM_SIZE             (0x0040)                               
#define EEPROM_PAGE_SIZE        (0x0002)                               
#define EEPROM_END              (EEPROM_START + EEPROM_SIZE - 1)       

/* Added MAPPED_EEPROM segment names for avr-libc */
#define MAPPED_EEPROM_START     (EEPROM_START)                         
#define MAPPED_EEPROM_SIZE      (EEPROM_SIZE)                          
#define MAPPED_EEPROM_PAGE_SIZE (EEPROM_PAGE_SIZE)                     
#define MAPPED_EEPROM_END       (EEPROM_END)                           

#define IOMEM_START (0x0000)                       
#define IOMEM_SIZE  (0x0040)                       
#define IOMEM_END   (IOMEM_START + IOMEM_SIZE - 1) 

#define OSCCALMEM_START  (0x0000)                               
#define OSCCALMEM_SIZE   (0x0001)                               
#define OSCCALMEM_END    (OSCCALMEM_START + OSCCALMEM_SIZE - 1) 

#define OSCCAL_START     (0x0000)                               
#define OSCCAL_SIZE      (0x0001)                               
#define OSCCAL_PAGE_SIZE (0x0001)                               
#define OSCCAL_END       (OSCCAL_START + OSCCAL_SIZE - 1)       

/* ============ Port Bits ============ */

#define PORTB0 (0) 
#define PORTB1 (1) 
#define PORTB2 (2) 
#define PORTB3 (3) 
#define PORTB4 (4) 

/*
================================================================================
Fuses/LockBits/Signatures
================================================================================
*/

/* ============ Fuses ============ */

#define FUSE_MEMORY_SIZE 0 

/* Fuse offset 0x00 */
#define CKSEL0   (unsigned char)~_BV(0) /* Clock Select bit 0 */
#define CKSEL1   (unsigned char)~_BV(1) /* Clock Select bit 1 */
#define RSTDISBL (unsigned char)~_BV(4) /* External reset function of PB5 disabled */
#define SPIEN    (unsigned char)~_BV(5) /* Serial program downloading (SPI) enabled */
#define BODEN    (unsigned char)~_BV(6) /* Brown-out detection enabled */
#define BODLEVEL (unsigned char)~_BV(7) /* Brown-out Detection Level */


/* ========== Lock Bits ========== */
#define __LOCK_BITS_EXIST  


/* ========== Signature ========== */
#define SIGNATURE_0 (0x1E) 
#define SIGNATURE_1 (0x90) 
#define SIGNATURE_2 (0x06) 

#endif /* #ifdef _AVR_ATtiny15_H_INCLUDED */
