/******************************************************************************
 *   This file is part of avr-libc3.                                          * 
 *                                                                            * 
 *   Automatically created by devtools/gen-ioheader-atdf.py (V0.91)           * 
 *                                                                            * 
 *   .atpack File: ATtiny1634.atdf                                            * 
 *   .ATDF File:   atdf/ATtiny1634.atdf                                       * 
 *   Version:      2.0.10                                                     * 
 *   Date:         2019-04-25                                                 * 
 *   Device:       ATtiny1634                                                 * 
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
#  define _AVR_IOXXX_H_ "ioATtiny1634.h"
#else
#  error "Attempt to include more than one <avr/ioXXX.h> file."
#endif

#ifndef _AVR_ATtiny1634_H_INCLUDED
#  define _AVR_ATtiny1634_H_INCLUDED

/*
================================================================================
Ungrouped common register
================================================================================
*/

#define GPIOR0    _SFR_MEM8 (0x34) /* General Purpose I/O Register 0 */
#define GPIOR1    _SFR_MEM8 (0x35) /* General Purpose I/O Register 1 */
#define GPIOR2    _SFR_MEM8 (0x36) /* General Purpose I/O Register 2 */

#define CCP       _SFR_MEM8 (0x4F) /* Configuration Change Protection */

#define CLKSR     _SFR_MEM8 (0x52) /* Clock Setting Register */
#define CLKPR     _SFR_MEM8 (0x53) /* Clock Prescale Register */
#define PRR       _SFR_MEM8 (0x54) /* Power Reduction Register */
#define MCUSR     _SFR_MEM8 (0x55) /* MCU Status Register */
#define MCUCR     _SFR_MEM8 (0x56) /* MCU Control Register */
#define SPMCSR    _SFR_MEM8 (0x57) /* Store Program Memory Control and Status Register */

#define SP        _SFR_MEM16(0x5D) /* Stack Pointer  */
#define SREG      _SFR_MEM8 (0x5F) /* Status Register */

#define OSCCAL0   _SFR_MEM8 (0x63) /* Oscillator Calibration Value */
#define OSCTCAL0A _SFR_MEM8 (0x64) 
#define OSCTCAL0B _SFR_MEM8 (0x65) 
#define OSCCAL1   _SFR_MEM8 (0x66) 


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
    register8_t HIGH;    
    register8_t EXTENDED;
} FUSE_t;


/* BOD mode of operation when the device is in sleep mode */
typedef enum FUSE_BODPD_enum
{
    FUSE_BODPD_BOD_SAMPLED_gc  = (0x01<<3), /* Sampled */
    FUSE_BODPD_BOD_ENABLED_gc  = (0x02<<3), /* Enabled */
    FUSE_BODPD_BOD_DISABLED_gc = (0x03<<3), /* Disabled */
} FUSE_BODPD_t;

/* BOD mode of operation when the device is active or idle */
typedef enum FUSE_BODACT_enum
{
    FUSE_BODACT_BOD_SAMPLED_gc  = (0x01<<1), /* Sampled */
    FUSE_BODACT_BOD_ENABLED_gc  = (0x02<<1), /* Enabled */
    FUSE_BODACT_BOD_DISABLED_gc = (0x03<<1), /* Disabled */
} FUSE_BODACT_t;

/* Self Programming enable */
typedef enum FUSE_SELFPRGEN_enum
{
    FUSE_SELFPRGEN_CLEAR_gc = (0x00), /* Self Programming enable - CLEAR */
    FUSE_SELFPRGEN_SET_gc   = (0x01), /* Self Programming enable - SET */
} FUSE_SELFPRGEN_t;

/* Reset Disabled (Enable PC2 as i/o pin) */
typedef enum FUSE_RSTDISBL_enum
{
    FUSE_RSTDISBL_CLEAR_gc = (0x00), /* Reset Disabled (Enable PC2 as i/o pin) - CLEAR */
    FUSE_RSTDISBL_SET_gc   = (0x80), /* Reset Disabled (Enable PC2 as i/o pin) - SET */
} FUSE_RSTDISBL_t;

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

/* Brown-out Detector trigger level */
typedef enum FUSE_BODLEVEL_enum
{
    FUSE_BODLEVEL_4V3_gc = (0x04), /* Brown-out detection at VCC=4.3 V */
    FUSE_BODLEVEL_2V7_gc = (0x05), /* Brown-out detection at VCC=2.7 V */
    FUSE_BODLEVEL_1V8_gc = (0x06), /* Brown-out detection at VCC=1.8 V */
} FUSE_BODLEVEL_t;

/* Divide clock by 8 internally */
typedef enum FUSE_CKDIV8_enum
{
    FUSE_CKDIV8_CLEAR_gc = (0x00), /* Divide clock by 8 internally - CLEAR */
    FUSE_CKDIV8_SET_gc   = (0x80), /* Divide clock by 8 internally - SET */
} FUSE_CKDIV8_t;

/* Clock output on PORTC2 */
typedef enum FUSE_CKOUT_enum
{
    FUSE_CKOUT_CLEAR_gc = (0x00), /* Clock output on PORTC2 - CLEAR */
    FUSE_CKOUT_SET_gc   = (0x40), /* Clock output on PORTC2 - SET */
} FUSE_CKOUT_t;

/* Select Clock Source */
typedef enum FUSE_SUT_CKSEL_enum
{
    FUSE_SUT_CKSEL_EXTCLK_6CK_16CK_16MS_gc                = (0x00), /* Ext. Clock; Start-up time PWRDWN/RESET: 6 CK/16 CK + 16 ms */
    FUSE_SUT_CKSEL_INTRCOSC_8MHZ_6CK_16CK_16MS_gc         = (0x02), /* Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 CK/16 CK + 16 ms */
    FUSE_SUT_CKSEL_INTULPOSC_32KHZ_6CK_16CK_16MS_gc       = (0x04), /* Int. ULP Osc. 32 kHz; Start-up time PWRDWN/RESET: 6 CK/16 CK + 16 ms */
    FUSE_SUT_CKSEL_EXTCRES_0MHZ4_0MHZ9_258CK_16CK_16MS_gc = (0x08), /* Ext. Ceramic Res. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 258 CK/16 CK + 16 ms */
    FUSE_SUT_CKSEL_EXTCRES_0MHZ4_0MHZ9_1KCK_16CK_16MS_gc  = (0x18), /* Ext. Ceramic Res. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 1K CK/16 CK + 16 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_16KCK_16CK_16MS_gc = (0x09), /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 16 K CK/16 CK + 16 ms */
    FUSE_SUT_CKSEL_EXTCRES_0MHZ9_3MHZ_258CK_16CK_16MS_gc  = (0x0A), /* Ext. Ceramic Res. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 258 CK/16 CK + 16 ms */
    FUSE_SUT_CKSEL_EXTCRES_0MHZ9_3MHZ_1KCK_16CK_16MS_gc   = (0x1A), /* Ext. Ceramic Res. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 1K CK/16 CK + 16 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_16KCK_16CK_16MS_gc  = (0x0B), /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 16 K CK/16 CK + 16 ms */
    FUSE_SUT_CKSEL_EXTCRES_3MHZ_8MHZ_258CK_16CK_16MS_gc   = (0x0C), /* Ext. Ceramic Res. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 258 CK/16 CK + 16 ms */
    FUSE_SUT_CKSEL_EXTCRES_3MHZ_8MHZ_1KCK_16CK_16MS_gc    = (0x1C), /* Ext. Ceramic Res. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 1K CK/16 CK + 16 ms */
    FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_16KCK_16CK_16MS_gc   = (0x0D), /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 16 K CK/16 CK + 16 ms */
    FUSE_SUT_CKSEL_EXTCRES_8MHZ_XX_258CK_16CK_16MS_gc     = (0x0E), /* Ext. Ceramic Res. 8.0- MHz; Start-up time PWRDWN/RESET: 258 CK/16 CK + 16 ms */
    FUSE_SUT_CKSEL_EXTCRES_8MHZ_XX_1KCK_16CK_16MS_gc      = (0x1E), /* Ext. Ceramic Res. 8.0- MHz; Start-up time PWRDWN/RESET: 1K CK/16 CK + 16 ms */
    FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_16KCK_16CK_16MS_gc     = (0x0F), /* Ext. Crystal Osc. 8.0- MHz; Start-up time PWRDWN/RESET: 16 K CK/16 CK + 16 ms */
} FUSE_SUT_CKSEL_t;

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
TWI - Two Wire Serial Interface
--------------------------------------------------------------------------------
*/

typedef struct TWI_struct
{
    register8_t rsv_0x00[122]; /* RESERVED REGISTER BLOCK */
    register8_t TWSD;          /* TWI Slave Data Register */
    register8_t TWSAM;         /* TWI Slave Address Mask Register */
    register8_t TWSA;          /* TWI Slave Address Register */
    register8_t TWSSRA;        /* TWI Slave Status Register A */
    register8_t TWSCRB;        /* TWI Slave Control Register B */
    register8_t TWSCRA;        /* TWI Slave Control Register A */
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
PORT - I/O Port
--------------------------------------------------------------------------------
*/

typedef struct PORTB_struct
{
    register8_t rsv_0x00[43]; /* RESERVED REGISTER BLOCK */
    register8_t PINB;         /* Port B Data register */
    register8_t DDRB;         /* Data Direction Register, Port B */
    register8_t PORTB;        /* Input Pins, Port B */
    register8_t PUEB;         /* Pull-up Enable Control Register */
    register8_t rsv_0x2F[4];  /* RESERVED REGISTER BLOCK */
    register8_t PORTCR;       /* Port Control Register */
} PORTB_t;


/*
--------------------------------------------------------------------------------
PORT - I/O Port
--------------------------------------------------------------------------------
*/

typedef struct PORTC_struct
{
    register8_t rsv_0x00[39]; /* RESERVED REGISTER BLOCK */
    register8_t PINC;         /* Port C Input Pins */
    register8_t DDRC;         /* Data Direction Register, Port C */
    register8_t PORTC;        /* Port C Data Register */
    register8_t PUEC;         /* Pull-up Enable Control Register */
    register8_t rsv_0x2B[8];  /* RESERVED REGISTER BLOCK */
    register8_t PORTCR;       /* Port Control Register */
} PORTC_t;


/*
--------------------------------------------------------------------------------
PORT - I/O Port
--------------------------------------------------------------------------------
*/

typedef struct PORTA_struct
{
    register8_t rsv_0x00[47]; /* RESERVED REGISTER BLOCK */
    register8_t PINA;         /* Port A Input Pins */
    register8_t DDRA;         /* Data Direction Register, Port A */
    register8_t PORTA;        /* Port A Data Register */
    register8_t PUEA;         /* Pull-up Enable Control Register */
    register8_t PORTCR;       /* Port Control Register */
} PORTA_t;


/* Break-Before-Make Mode Enable */
typedef enum PORTB_BBMB_enum
{
    PORTB_BBMB_CLEAR_gc = (0x00), /* Break-Before-Make Mode Enable - CLEAR */
    PORTB_BBMB_SET_gc   = (0x02), /* Break-Before-Make Mode Enable - SET */
} PORTB_BBMB_t;

/* Break-Before-Make Mode Enable */
typedef enum PORTC_BBMC_enum
{
    PORTC_BBMC_CLEAR_gc = (0x00), /* Break-Before-Make Mode Enable - CLEAR */
    PORTC_BBMC_SET_gc   = (0x04), /* Break-Before-Make Mode Enable - SET */
} PORTC_BBMC_t;

/* Break-Before-Make Mode Enable */
typedef enum PORTA_BBMA_enum
{
    PORTA_BBMA_CLEAR_gc = (0x00), /* Break-Before-Make Mode Enable - CLEAR */
    PORTA_BBMA_SET_gc   = (0x01), /* Break-Before-Make Mode Enable - SET */
} PORTA_BBMA_t;

/*
--------------------------------------------------------------------------------
ADC - Analog-to-Digital Converter
--------------------------------------------------------------------------------
*/

typedef struct ADC_struct
{
    register8_t rsv_0x00[32]; /* RESERVED REGISTER BLOCK */
    _REGISTER16 (ADC);        /* ADC Data Register  Bytes */
    register8_t rsv_0x21;     /* RESERVED REGISTER */
    register8_t ADCSRB;       /* ADC Control and Status Register B */
    register8_t ADCSRA;       /* The ADC Control and Status register */
    register8_t ADMUX;        /* The ADC multiplexer Selection Register */
    register8_t rsv_0x25[59]; /* RESERVED REGISTER BLOCK */
    register8_t DIDR0;        /* Digital Input Disable Register 0 */
    register8_t DIDR1;        /* Digital Input Disable Register 1 */
    register8_t DIDR2;        /* Digital Input Disable Register 2 */
} ADC_t;


/* Reference Selection Bit */
#define ADC_ADMUX_REFS_gc(x) ((x<<6) & 0xC0)

/* The ADC multiplexer Selection Register-REFEN */
typedef enum ADC_REFEN_enum
{
    ADC_REFEN_CLEAR_gc = (0x00), /* The ADC multiplexer Selection Register-REFEN - CLEAR */
    ADC_REFEN_SET_gc   = (0x20), /* The ADC multiplexer Selection Register-REFEN - SET */
} ADC_REFEN_t;

/* The ADC multiplexer Selection Register-ADC0EN */
typedef enum ADC_ADC0EN_enum
{
    ADC_ADC0EN_CLEAR_gc = (0x00), /* The ADC multiplexer Selection Register-ADC0EN - CLEAR */
    ADC_ADC0EN_SET_gc   = (0x10), /* The ADC multiplexer Selection Register-ADC0EN - SET */
} ADC_ADC0EN_t;

/* Analog Channel and Gain Selection Bits */
#define ADC_ADMUX_MUX_gc(x) (x & 0x0F)

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

/* ADC Control and Status Register B-VDEN */
typedef enum ADC_VDEN_enum
{
    ADC_VDEN_CLEAR_gc = (0x00), /* ADC Control and Status Register B-VDEN - CLEAR */
    ADC_VDEN_SET_gc   = (0x80), /* ADC Control and Status Register B-VDEN - SET */
} ADC_VDEN_t;

/* ADC Control and Status Register B-VDPD */
typedef enum ADC_VDPD_enum
{
    ADC_VDPD_CLEAR_gc = (0x00), /* ADC Control and Status Register B-VDPD - CLEAR */
    ADC_VDPD_SET_gc   = (0x40), /* ADC Control and Status Register B-VDPD - SET */
} ADC_VDPD_t;

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
    ADC_ADTS_VAL_0x07_gc = (0x07), /* Timer/Counter1 Capture Event */
} ADC_ADTS_t;

/* ADC11 Digital input Disable */
typedef enum ADC_ADC11D_enum
{
    ADC_ADC11D_CLEAR_gc = (0x00), /* ADC11 Digital input Disable - CLEAR */
    ADC_ADC11D_SET_gc   = (0x04), /* ADC11 Digital input Disable - SET */
} ADC_ADC11D_t;

/* ADC10 Digital input Disable */
typedef enum ADC_ADC10D_enum
{
    ADC_ADC10D_CLEAR_gc = (0x00), /* ADC10 Digital input Disable - CLEAR */
    ADC_ADC10D_SET_gc   = (0x02), /* ADC10 Digital input Disable - SET */
} ADC_ADC10D_t;

/* ADC9 Digital input Disable */
typedef enum ADC_ADC9D_enum
{
    ADC_ADC9D_CLEAR_gc = (0x00), /* ADC9 Digital input Disable - CLEAR */
    ADC_ADC9D_SET_gc   = (0x01), /* ADC9 Digital input Disable - SET */
} ADC_ADC9D_t;

/* ADC8 Digital Input Disable */
typedef enum ADC_ADC8D_enum
{
    ADC_ADC8D_CLEAR_gc = (0x00), /* ADC8 Digital Input Disable - CLEAR */
    ADC_ADC8D_SET_gc   = (0x08), /* ADC8 Digital Input Disable - SET */
} ADC_ADC8D_t;

/* ADC7 Digital input Disable */
typedef enum ADC_ADC7D_enum
{
    ADC_ADC7D_CLEAR_gc = (0x00), /* ADC7 Digital input Disable - CLEAR */
    ADC_ADC7D_SET_gc   = (0x04), /* ADC7 Digital input Disable - SET */
} ADC_ADC7D_t;

/* ADC6 Digital input Disable */
typedef enum ADC_ADC6D_enum
{
    ADC_ADC6D_CLEAR_gc = (0x00), /* ADC6 Digital input Disable - CLEAR */
    ADC_ADC6D_SET_gc   = (0x02), /* ADC6 Digital input Disable - SET */
} ADC_ADC6D_t;

/* ADC5 Digital input Disable */
typedef enum ADC_ADC5D_enum
{
    ADC_ADC5D_CLEAR_gc = (0x00), /* ADC5 Digital input Disable - CLEAR */
    ADC_ADC5D_SET_gc   = (0x01), /* ADC5 Digital input Disable - SET */
} ADC_ADC5D_t;

/* ADC4 Digital input Disable */
typedef enum ADC_ADC4D_enum
{
    ADC_ADC4D_CLEAR_gc = (0x00), /* ADC4 Digital input Disable - CLEAR */
    ADC_ADC4D_SET_gc   = (0x80), /* ADC4 Digital input Disable - SET */
} ADC_ADC4D_t;

/* ADC3 Digital input Disable */
typedef enum ADC_ADC3D_enum
{
    ADC_ADC3D_CLEAR_gc = (0x00), /* ADC3 Digital input Disable - CLEAR */
    ADC_ADC3D_SET_gc   = (0x40), /* ADC3 Digital input Disable - SET */
} ADC_ADC3D_t;

/* ADC2 Digital input Disable */
typedef enum ADC_ADC2D_enum
{
    ADC_ADC2D_CLEAR_gc = (0x00), /* ADC2 Digital input Disable - CLEAR */
    ADC_ADC2D_SET_gc   = (0x20), /* ADC2 Digital input Disable - SET */
} ADC_ADC2D_t;

/* ADC1 Digital input Disable */
typedef enum ADC_ADC1D_enum
{
    ADC_ADC1D_CLEAR_gc = (0x00), /* ADC1 Digital input Disable - CLEAR */
    ADC_ADC1D_SET_gc   = (0x10), /* ADC1 Digital input Disable - SET */
} ADC_ADC1D_t;

/* ADC0 Digital Input Disable */
typedef enum ADC_ADC0D_enum
{
    ADC_ADC0D_CLEAR_gc = (0x00), /* ADC0 Digital Input Disable - CLEAR */
    ADC_ADC0D_SET_gc   = (0x08), /* ADC0 Digital Input Disable - SET */
} ADC_ADC0D_t;

/* AIN1 Digital input Disable */
typedef enum ADC_AIN1D_enum
{
    ADC_AIN1D_CLEAR_gc = (0x00), /* AIN1 Digital input Disable - CLEAR */
    ADC_AIN1D_SET_gc   = (0x04), /* AIN1 Digital input Disable - SET */
} ADC_AIN1D_t;

/* AIN0 Digital input Disable */
typedef enum ADC_AIN0D_enum
{
    ADC_AIN0D_CLEAR_gc = (0x00), /* AIN0 Digital input Disable - CLEAR */
    ADC_AIN0D_SET_gc   = (0x02), /* AIN0 Digital input Disable - SET */
} ADC_AIN0D_t;

/* AREF Digital input Disable */
typedef enum ADC_AREFD_enum
{
    ADC_AREFD_CLEAR_gc = (0x00), /* AREF Digital input Disable - CLEAR */
    ADC_AREFD_SET_gc   = (0x01), /* AREF Digital input Disable - SET */
} ADC_AREFD_t;

/*
--------------------------------------------------------------------------------
AC - Analog Comparator
--------------------------------------------------------------------------------
*/

typedef struct AC_struct
{
    register8_t rsv_0x00[37]; /* RESERVED REGISTER BLOCK */
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

/* Analog Comparator Control And Status Register B-ACLP */
typedef enum AC_ACLP_enum
{
    AC_ACLP_CLEAR_gc = (0x00), /* Analog Comparator Control And Status Register B-ACLP - CLEAR */
    AC_ACLP_SET_gc   = (0x20), /* Analog Comparator Control And Status Register B-ACLP - SET */
} AC_ACLP_t;

/* Analog Comparator Control And Status Register B-ACCE */
typedef enum AC_ACCE_enum
{
    AC_ACCE_CLEAR_gc = (0x00), /* Analog Comparator Control And Status Register B-ACCE - CLEAR */
    AC_ACCE_SET_gc   = (0x08), /* Analog Comparator Control And Status Register B-ACCE - SET */
} AC_ACCE_t;

/* Analog Comparator Multiplexer Enable */
typedef enum AC_ACME_enum
{
    AC_ACME_CLEAR_gc = (0x00), /* Analog Comparator Multiplexer Enable - CLEAR */
    AC_ACME_SET_gc   = (0x04), /* Analog Comparator Multiplexer Enable - SET */
} AC_ACME_t;

/* Analog Comparator Control And Status Register B-ACIRS */
#define AC_ACSRB_ACIRS_gc(x) (x & 0x03)

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
EEPROM - EEPROM
--------------------------------------------------------------------------------
*/

typedef struct EEPROM_struct
{
    register8_t rsv_0x00[60]; /* RESERVED REGISTER BLOCK */
    register8_t EECR;         /* EEPROM Control Register */
    register8_t EEDR;         /* EEPROM Data Register */
    _REGISTER16 (EEAR);       /* EEPROM Read/Write Access */
} EEPROM_t;


/* EEPROM Programming Mode Bits */
typedef enum EEPROM_EEPM_enum
{
    EEPROM_EEPM_VAL_0x00_gc = (0x00<<4), /* Erase and Write in one operation */
    EEPROM_EEPM_VAL_0x01_gc = (0x01<<4), /* Erase Only */
    EEPROM_EEPM_VAL_0x02_gc = (0x02<<4), /* Write Only */
} EEPROM_EEPM_t;

/* EEProm Ready Interrupt Enable */
typedef enum EEPROM_EERIE_enum
{
    EEPROM_EERIE_CLEAR_gc = (0x00), /* EEProm Ready Interrupt Enable - CLEAR */
    EEPROM_EERIE_SET_gc   = (0x08), /* EEProm Ready Interrupt Enable - SET */
} EEPROM_EERIE_t;

/* EEPROM Master Write Enable */
typedef enum EEPROM_EEMPE_enum
{
    EEPROM_EEMPE_CLEAR_gc = (0x00), /* EEPROM Master Write Enable - CLEAR */
    EEPROM_EEMPE_SET_gc   = (0x04), /* EEPROM Master Write Enable - SET */
} EEPROM_EEMPE_t;

/* EEPROM Write Enable */
typedef enum EEPROM_EEPE_enum
{
    EEPROM_EEPE_CLEAR_gc = (0x00), /* EEPROM Write Enable - CLEAR */
    EEPROM_EEPE_SET_gc   = (0x02), /* EEPROM Write Enable - SET */
} EEPROM_EEPE_t;

/* EEPROM Read Enable */
typedef enum EEPROM_EERE_enum
{
    EEPROM_EERE_CLEAR_gc = (0x00), /* EEPROM Read Enable - CLEAR */
    EEPROM_EERE_SET_gc   = (0x01), /* EEPROM Read Enable - SET */
} EEPROM_EERE_t;

/*
--------------------------------------------------------------------------------
TC16 - Timer/Counter, 16-bit
--------------------------------------------------------------------------------
*/

typedef struct TC1_struct
{
    register8_t rsv_0x00[89]; /* RESERVED REGISTER BLOCK */
    register8_t TIFR;         /* Timer/Counter Interrupt Flag register */
    register8_t TIMSK;        /* Timer/Counter Interrupt Mask Register */
    register8_t rsv_0x5B[12]; /* RESERVED REGISTER BLOCK */
    register8_t GTCCR;        /* General Timer/Counter Control Register */
    _REGISTER16 (ICR1);       /* Timer/Counter1 Input Capture Register  Bytes */
    register8_t rsv_0x69;     /* RESERVED REGISTER */
    _REGISTER16 (OCR1B);      /* Timer/Counter1 Output Compare Register  Bytes */
    register8_t rsv_0x6B;     /* RESERVED REGISTER */
    _REGISTER16 (OCR1A);      /* Timer/Counter1 Output Compare Register  Bytes */
    register8_t rsv_0x6D;     /* RESERVED REGISTER */
    _REGISTER16 (TCNT1);      /* Timer/Counter1  Bytes */
    register8_t rsv_0x6F;     /* RESERVED REGISTER */
    register8_t TCCR1C;       /* Timer/Counter1 Control Register C */
    register8_t TCCR1B;       /* Timer/Counter1 Control Register B */
    register8_t TCCR1A;       /* Timer/Counter1 Control Register A */
} TC1_t;


/* Timer/Counter1 Overflow Interrupt Enable */
typedef enum TC1_TOIE1_enum
{
    TC1_TOIE1_CLEAR_gc = (0x00), /* Timer/Counter1 Overflow Interrupt Enable - CLEAR */
    TC1_TOIE1_SET_gc   = (0x80), /* Timer/Counter1 Overflow Interrupt Enable - SET */
} TC1_TOIE1_t;

/* Timer/Counter1 Output CompareA Match Interrupt Enable */
typedef enum TC1_OCIE1A_enum
{
    TC1_OCIE1A_CLEAR_gc = (0x00), /* Timer/Counter1 Output CompareA Match Interrupt Enable - CLEAR */
    TC1_OCIE1A_SET_gc   = (0x40), /* Timer/Counter1 Output CompareA Match Interrupt Enable - SET */
} TC1_OCIE1A_t;

/* Timer/Counter1 Output CompareB Match Interrupt Enable */
typedef enum TC1_OCIE1B_enum
{
    TC1_OCIE1B_CLEAR_gc = (0x00), /* Timer/Counter1 Output CompareB Match Interrupt Enable - CLEAR */
    TC1_OCIE1B_SET_gc   = (0x20), /* Timer/Counter1 Output CompareB Match Interrupt Enable - SET */
} TC1_OCIE1B_t;

/* Timer/Counter1 Input Capture Interrupt Enable */
typedef enum TC1_ICIE1_enum
{
    TC1_ICIE1_CLEAR_gc = (0x00), /* Timer/Counter1 Input Capture Interrupt Enable - CLEAR */
    TC1_ICIE1_SET_gc   = (0x08), /* Timer/Counter1 Input Capture Interrupt Enable - SET */
} TC1_ICIE1_t;

/* Timer/Counter1 Overflow Flag */
typedef enum TC1_TOV1_enum
{
    TC1_TOV1_CLEAR_gc = (0x00), /* Timer/Counter1 Overflow Flag - CLEAR */
    TC1_TOV1_SET_gc   = (0x80), /* Timer/Counter1 Overflow Flag - SET */
} TC1_TOV1_t;

/* Output Compare Flag 1A */
typedef enum TC1_OCF1A_enum
{
    TC1_OCF1A_CLEAR_gc = (0x00), /* Output Compare Flag 1A - CLEAR */
    TC1_OCF1A_SET_gc   = (0x40), /* Output Compare Flag 1A - SET */
} TC1_OCF1A_t;

/* Output Compare Flag 1B */
typedef enum TC1_OCF1B_enum
{
    TC1_OCF1B_CLEAR_gc = (0x00), /* Output Compare Flag 1B - CLEAR */
    TC1_OCF1B_SET_gc   = (0x20), /* Output Compare Flag 1B - SET */
} TC1_OCF1B_t;

/* Input Capture Flag 1 */
typedef enum TC1_ICF1_enum
{
    TC1_ICF1_CLEAR_gc = (0x00), /* Input Capture Flag 1 - CLEAR */
    TC1_ICF1_SET_gc   = (0x08), /* Input Capture Flag 1 - SET */
} TC1_ICF1_t;

/* Compare Output Mode 1A, bits */
#define TC1_TCCR1A_COM1A_gc(x) ((x<<6) & 0xC0)

/* Compare Output Mode 1B, bits */
#define TC1_TCCR1A_COM1B_gc(x) ((x<<4) & 0x30)

/* Pulse Width Modulator Select Bits */
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

/* Waveform Generation Mode Bits */
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

/* Force Output Compare for Channel A */
typedef enum TC1_FOC1A_enum
{
    TC1_FOC1A_CLEAR_gc = (0x00), /* Force Output Compare for Channel A - CLEAR */
    TC1_FOC1A_SET_gc   = (0x80), /* Force Output Compare for Channel A - SET */
} TC1_FOC1A_t;

/* Force Output Compare for Channel B */
typedef enum TC1_FOC1B_enum
{
    TC1_FOC1B_CLEAR_gc = (0x00), /* Force Output Compare for Channel B - CLEAR */
    TC1_FOC1B_SET_gc   = (0x40), /* Force Output Compare for Channel B - SET */
} TC1_FOC1B_t;

/* Timer/Counter Synchronization Mode */
typedef enum TC1_TSM_enum
{
    TC1_TSM_CLEAR_gc = (0x00), /* Timer/Counter Synchronization Mode - CLEAR */
    TC1_TSM_SET_gc   = (0x80), /* Timer/Counter Synchronization Mode - SET */
} TC1_TSM_t;

/* Prescaler Reset Timer/Counter1 and Timer/Counter0 */
typedef enum TC1_PSR10_enum
{
    TC1_PSR10_CLEAR_gc = (0x00), /* Prescaler Reset Timer/Counter1 and Timer/Counter0 - CLEAR */
    TC1_PSR10_SET_gc   = (0x01), /* Prescaler Reset Timer/Counter1 and Timer/Counter0 - SET */
} TC1_PSR10_t;

/*
--------------------------------------------------------------------------------
TC8 - Timer/Counter, 8-bit
--------------------------------------------------------------------------------
*/

typedef struct TC0_struct
{
    register8_t rsv_0x00[55]; /* RESERVED REGISTER BLOCK */
    register8_t OCR0B;        /* Timer/Counter0 Output Compare Register */
    register8_t OCR0A;        /* Timer/Counter0 Output Compare Register */
    register8_t TCNT0;        /* Timer/Counter0 */
    register8_t TCCR0B;       /* Timer/Counter Control Register B */
    register8_t TCCR0A;       /* Timer/Counter  Control Register A */
    register8_t rsv_0x3C[29]; /* RESERVED REGISTER BLOCK */
    register8_t TIFR;         /* Timer/Counter Interrupt Flag register */
    register8_t TIMSK;        /* Timer/Counter Interrupt Mask Register */
    register8_t rsv_0x5B[12]; /* RESERVED REGISTER BLOCK */
    register8_t GTCCR;        /* General Timer/Counter Control Register */
} TC0_t;


/* Timer/Counter0 Output Compare Match B Interrupt Enable */
typedef enum TC0_OCIE0B_enum
{
    TC0_OCIE0B_CLEAR_gc = (0x00), /* Timer/Counter0 Output Compare Match B Interrupt Enable - CLEAR */
    TC0_OCIE0B_SET_gc   = (0x04), /* Timer/Counter0 Output Compare Match B Interrupt Enable - SET */
} TC0_OCIE0B_t;

/* Timer/Counter0 Overflow Interrupt Enable */
typedef enum TC0_TOIE0_enum
{
    TC0_TOIE0_CLEAR_gc = (0x00), /* Timer/Counter0 Overflow Interrupt Enable - CLEAR */
    TC0_TOIE0_SET_gc   = (0x02), /* Timer/Counter0 Overflow Interrupt Enable - SET */
} TC0_TOIE0_t;

/* Timer/Counter0 Output Compare Match A Interrupt Enable */
typedef enum TC0_OCIE0A_enum
{
    TC0_OCIE0A_CLEAR_gc = (0x00), /* Timer/Counter0 Output Compare Match A Interrupt Enable - CLEAR */
    TC0_OCIE0A_SET_gc   = (0x01), /* Timer/Counter0 Output Compare Match A Interrupt Enable - SET */
} TC0_OCIE0A_t;

/* Timer/Counter0 Output Compare Flag 0B */
typedef enum TC0_OCF0B_enum
{
    TC0_OCF0B_CLEAR_gc = (0x00), /* Timer/Counter0 Output Compare Flag 0B - CLEAR */
    TC0_OCF0B_SET_gc   = (0x04), /* Timer/Counter0 Output Compare Flag 0B - SET */
} TC0_OCF0B_t;

/* Timer/Counter0 Overflow Flag */
typedef enum TC0_TOV0_enum
{
    TC0_TOV0_CLEAR_gc = (0x00), /* Timer/Counter0 Overflow Flag - CLEAR */
    TC0_TOV0_SET_gc   = (0x02), /* Timer/Counter0 Overflow Flag - SET */
} TC0_TOV0_t;

/* Timer/Counter0 Output Compare Flag 0A */
typedef enum TC0_OCF0A_enum
{
    TC0_OCF0A_CLEAR_gc = (0x00), /* Timer/Counter0 Output Compare Flag 0A - CLEAR */
    TC0_OCF0A_SET_gc   = (0x01), /* Timer/Counter0 Output Compare Flag 0A - SET */
} TC0_OCF0A_t;

/* Compare Match Output A Mode */
#define TC0_TCCR0A_COM0A_gc(x) ((x<<6) & 0xC0)

/* Compare Match Output B Mode */
#define TC0_TCCR0A_COM0B_gc(x) ((x<<4) & 0x30)

/* Waveform Generation Mode */
#define TC0_TCCR0A_WGM0_gc(x) (x & 0x03)

/* Force Output Compare B */
typedef enum TC0_FOC0A_enum
{
    TC0_FOC0A_CLEAR_gc = (0x00), /* Force Output Compare B - CLEAR */
    TC0_FOC0A_SET_gc   = (0x80), /* Force Output Compare B - SET */
} TC0_FOC0A_t;

/* Force Output Compare B */
typedef enum TC0_FOC0B_enum
{
    TC0_FOC0B_CLEAR_gc = (0x00), /* Force Output Compare B - CLEAR */
    TC0_FOC0B_SET_gc   = (0x40), /* Force Output Compare B - SET */
} TC0_FOC0B_t;

/* Timer/Counter Control Register B-WGM02 */
typedef enum TC0_WGM02_enum
{
    TC0_WGM02_CLEAR_gc = (0x00), /* Timer/Counter Control Register B-WGM02 - CLEAR */
    TC0_WGM02_SET_gc   = (0x08), /* Timer/Counter Control Register B-WGM02 - SET */
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

/* Timer/Counter Synchronization Mode */
typedef enum TC0_TSM_enum
{
    TC0_TSM_CLEAR_gc = (0x00), /* Timer/Counter Synchronization Mode - CLEAR */
    TC0_TSM_SET_gc   = (0x80), /* Timer/Counter Synchronization Mode - SET */
} TC0_TSM_t;

/* Prescaler Reset Timer/Counter1 and Timer/Counter0 */
typedef enum TC0_PSR10_enum
{
    TC0_PSR10_CLEAR_gc = (0x00), /* Prescaler Reset Timer/Counter1 and Timer/Counter0 - CLEAR */
    TC0_PSR10_SET_gc   = (0x01), /* Prescaler Reset Timer/Counter1 and Timer/Counter0 - SET */
} TC0_PSR10_t;

/*
--------------------------------------------------------------------------------
EXINT - External Interrupts
--------------------------------------------------------------------------------
*/

typedef struct EXINT_struct
{
    register8_t rsv_0x00[71]; /* RESERVED REGISTER BLOCK */
    register8_t PCMSK0;       /* Pin Change Mask Register 0 */
    register8_t PCMSK1;       /* Pin Change Mask Register 1 */
    register8_t PCMSK2;       /* Pin Change Mask Register 2 */
    register8_t rsv_0x4A[17]; /* RESERVED REGISTER BLOCK */
    register8_t GIFR;         /* General Interrupt Flag Register */
    register8_t GIMSK;        /* General Interrupt Mask Register */
} EXINT_t;


/* External Interrupt Flag 0 */
typedef enum EXINT_INTF0_enum
{
    EXINT_INTF0_CLEAR_gc = (0x00), /* External Interrupt Flag 0 - CLEAR */
    EXINT_INTF0_SET_gc   = (0x40), /* External Interrupt Flag 0 - SET */
} EXINT_INTF0_t;

/* Pin Change Interrupt Flags */
#define EXINT_GIFR_PCIF_gc(x) ((x<<3) & 0x38)

/* External Interrupt Request 0 Enable */
typedef enum EXINT_INT0_enum
{
    EXINT_INT0_CLEAR_gc = (0x00), /* External Interrupt Request 0 Enable - CLEAR */
    EXINT_INT0_SET_gc   = (0x40), /* External Interrupt Request 0 Enable - SET */
} EXINT_INT0_t;

/* Pin Change Interrupt Enables */
#define EXINT_GIMSK_PCIE_gc(x) ((x<<3) & 0x38)

/*
--------------------------------------------------------------------------------
CPU - CPU Registers
--------------------------------------------------------------------------------
*/

typedef struct CPU_struct
{
    register8_t rsv_0x00[52]; /* RESERVED REGISTER BLOCK */
    register8_t GPIOR0;       /* General Purpose I/O Register 0 */
    register8_t GPIOR1;       /* General Purpose I/O Register 1 */
    register8_t GPIOR2;       /* General Purpose I/O Register 2 */
    register8_t rsv_0x37[24]; /* RESERVED REGISTER BLOCK */
    register8_t CCP;          /* Configuration Change Protection */
    register8_t rsv_0x50[2];  /* RESERVED REGISTER BLOCK */
    register8_t CLKSR;        /* Clock Setting Register */
    register8_t CLKPR;        /* Clock Prescale Register */
    register8_t PRR;          /* Power Reduction Register */
    register8_t MCUSR;        /* MCU Status Register */
    register8_t MCUCR;        /* MCU Control Register */
    register8_t SPMCSR;       /* Store Program Memory Control and Status Register */
    register8_t rsv_0x58[5];  /* RESERVED REGISTER BLOCK */
    _REGISTER16 (SP);         /* Stack Pointer  */
    register8_t rsv_0x5E;     /* RESERVED REGISTER */
    register8_t SREG;         /* Status Register */
    register8_t rsv_0x60[3];  /* RESERVED REGISTER BLOCK */
    register8_t OSCCAL0;      /* Oscillator Calibration Value */
    register8_t OSCTCAL0A;   
    register8_t OSCTCAL0B;   
    register8_t OSCCAL1;     
} CPU_t;


/* Power Reduction TWI */
typedef enum CPU_PRTWI_enum
{
    CPU_PRTWI_CLEAR_gc = (0x00), /* Power Reduction TWI - CLEAR */
    CPU_PRTWI_SET_gc   = (0x40), /* Power Reduction TWI - SET */
} CPU_PRTWI_t;

/* Power Reduction Timer/Counter1 */
typedef enum CPU_PRTIM1_enum
{
    CPU_PRTIM1_CLEAR_gc = (0x00), /* Power Reduction Timer/Counter1 - CLEAR */
    CPU_PRTIM1_SET_gc   = (0x20), /* Power Reduction Timer/Counter1 - SET */
} CPU_PRTIM1_t;

/* Power Reduction Timer/Counter0 */
typedef enum CPU_PRTIM0_enum
{
    CPU_PRTIM0_CLEAR_gc = (0x00), /* Power Reduction Timer/Counter0 - CLEAR */
    CPU_PRTIM0_SET_gc   = (0x10), /* Power Reduction Timer/Counter0 - SET */
} CPU_PRTIM0_t;

/* Power Reduction USI */
typedef enum CPU_PRUSI_enum
{
    CPU_PRUSI_CLEAR_gc = (0x00), /* Power Reduction USI - CLEAR */
    CPU_PRUSI_SET_gc   = (0x08), /* Power Reduction USI - SET */
} CPU_PRUSI_t;

/* Power Reduction USART1 */
typedef enum CPU_PRUSART1_enum
{
    CPU_PRUSART1_CLEAR_gc = (0x00), /* Power Reduction USART1 - CLEAR */
    CPU_PRUSART1_SET_gc   = (0x04), /* Power Reduction USART1 - SET */
} CPU_PRUSART1_t;

/* Power Reduction USART0 */
typedef enum CPU_PRUSART0_enum
{
    CPU_PRUSART0_CLEAR_gc = (0x00), /* Power Reduction USART0 - CLEAR */
    CPU_PRUSART0_SET_gc   = (0x02), /* Power Reduction USART0 - SET */
} CPU_PRUSART0_t;

/* Power Reduction ADC */
typedef enum CPU_PRADC_enum
{
    CPU_PRADC_CLEAR_gc = (0x00), /* Power Reduction ADC - CLEAR */
    CPU_PRADC_SET_gc   = (0x01), /* Power Reduction ADC - SET */
} CPU_PRADC_t;

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

/* Oscillator Ready */
typedef enum CPU_OSCRDY_enum
{
    CPU_OSCRDY_CLEAR_gc = (0x00), /* Oscillator Ready - CLEAR */
    CPU_OSCRDY_SET_gc   = (0x80), /* Oscillator Ready - SET */
} CPU_OSCRDY_t;

/* Clock Switch Trigger */
typedef enum CPU_CSTR_enum
{
    CPU_CSTR_CLEAR_gc = (0x00), /* Clock Switch Trigger - CLEAR */
    CPU_CSTR_SET_gc   = (0x40), /* Clock Switch Trigger - SET */
} CPU_CSTR_t;

/* Clock Output (active low) */
typedef enum CPU_CKOUT_IO_enum
{
    CPU_CKOUT_IO_CLEAR_gc = (0x00), /* Clock Output (active low) - CLEAR */
    CPU_CKOUT_IO_SET_gc   = (0x20), /* Clock Output (active low) - SET */
} CPU_CKOUT_IO_t;

/* Start-up Time */
typedef enum CPU_SUT_enum
{
    CPU_SUT_CLEAR_gc = (0x00), /* Start-up Time - CLEAR */
    CPU_SUT_SET_gc   = (0x10), /* Start-up Time - SET */
} CPU_SUT_t;

/* Clock Select Bits */
#define CPU_CLKSR_CKSEL_gc(x) (x & 0x0F)

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

/* Sleep Mode Select Bits */
typedef enum CPU_SM_enum
{
    CPU_SM_IDLE_gc  = (0x00<<5), /* Idle */
    CPU_SM_ADC_gc   = (0x01<<5), /* ADC Noise Reduction (If Available) */
    CPU_SM_PDOWN_gc = (0x02<<5), /* Power Down */
    CPU_SM_STDBY_gc = (0x03<<5), /* Standby */
} CPU_SM_t;

/* Sleep Enable */
typedef enum CPU_SE_enum
{
    CPU_SE_CLEAR_gc = (0x00), /* Sleep Enable - CLEAR */
    CPU_SE_SET_gc   = (0x10), /* Sleep Enable - SET */
} CPU_SE_t;

/* Interrupt Sense Control 0 bits */
#define CPU_MCUCR_ISC0_gc(x) (x & 0x03)

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

/* Read Device Signature Imprint Table */
typedef enum CPU_RSIG_enum
{
    CPU_RSIG_CLEAR_gc = (0x00), /* Read Device Signature Imprint Table - CLEAR */
    CPU_RSIG_SET_gc   = (0x20), /* Read Device Signature Imprint Table - SET */
} CPU_RSIG_t;

/* Clear Temporary Page Buffer */
typedef enum CPU_CTPB_enum
{
    CPU_CTPB_CLEAR_gc = (0x00), /* Clear Temporary Page Buffer - CLEAR */
    CPU_CTPB_SET_gc   = (0x10), /* Clear Temporary Page Buffer - SET */
} CPU_CTPB_t;

/* Read Fuse and Lock Bits */
typedef enum CPU_RFLB_enum
{
    CPU_RFLB_CLEAR_gc = (0x00), /* Read Fuse and Lock Bits - CLEAR */
    CPU_RFLB_SET_gc   = (0x08), /* Read Fuse and Lock Bits - SET */
} CPU_RFLB_t;

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

/* Store program Memory Enable */
typedef enum CPU_SPMEN_enum
{
    CPU_SPMEN_CLEAR_gc = (0x00), /* Store program Memory Enable - CLEAR */
    CPU_SPMEN_SET_gc   = (0x01), /* Store program Memory Enable - SET */
} CPU_SPMEN_t;

/*
--------------------------------------------------------------------------------
USI - Universal Serial Interface
--------------------------------------------------------------------------------
*/

typedef struct USI_struct
{
    register8_t rsv_0x00[74]; /* RESERVED REGISTER BLOCK */
    register8_t USICR;        /* USI Control Register */
    register8_t USISR;        /* USI Status Register */
    register8_t USIDR;        /* USI Data Register */
    register8_t USIBR;        /* USI Buffer Register */
} USI_t;


/* Start Condition Interrupt Flag */
typedef enum USI_USISIF_enum
{
    USI_USISIF_CLEAR_gc = (0x00), /* Start Condition Interrupt Flag - CLEAR */
    USI_USISIF_SET_gc   = (0x80), /* Start Condition Interrupt Flag - SET */
} USI_USISIF_t;

/* Counter Overflow Interrupt Flag */
typedef enum USI_USIOIF_enum
{
    USI_USIOIF_CLEAR_gc = (0x00), /* Counter Overflow Interrupt Flag - CLEAR */
    USI_USIOIF_SET_gc   = (0x40), /* Counter Overflow Interrupt Flag - SET */
} USI_USIOIF_t;

/* Stop Condition Flag */
typedef enum USI_USIPF_enum
{
    USI_USIPF_CLEAR_gc = (0x00), /* Stop Condition Flag - CLEAR */
    USI_USIPF_SET_gc   = (0x20), /* Stop Condition Flag - SET */
} USI_USIPF_t;

/* Data Output Collision */
typedef enum USI_USIDC_enum
{
    USI_USIDC_CLEAR_gc = (0x00), /* Data Output Collision - CLEAR */
    USI_USIDC_SET_gc   = (0x10), /* Data Output Collision - SET */
} USI_USIDC_t;

/* USI Counter Value Bits */
#define USI_USISR_USICNT_gc(x) (x & 0x0F)

/* Start Condition Interrupt Enable */
typedef enum USI_USISIE_enum
{
    USI_USISIE_CLEAR_gc = (0x00), /* Start Condition Interrupt Enable - CLEAR */
    USI_USISIE_SET_gc   = (0x80), /* Start Condition Interrupt Enable - SET */
} USI_USISIE_t;

/* Counter Overflow Interrupt Enable */
typedef enum USI_USIOIE_enum
{
    USI_USIOIE_CLEAR_gc = (0x00), /* Counter Overflow Interrupt Enable - CLEAR */
    USI_USIOIE_SET_gc   = (0x40), /* Counter Overflow Interrupt Enable - SET */
} USI_USIOIE_t;

/* USI Wire Mode Bits */
typedef enum USI_USIWM_enum
{
    USI_USIWM_VAL_0x00_gc = (0x00<<4), /* Normal Operation */
    USI_USIWM_VAL_0x01_gc = (0x01<<4), /* Three-Wire Mode */
    USI_USIWM_VAL_0x02_gc = (0x02<<4), /* Two-Wire Mode */
    USI_USIWM_VAL_0x03_gc = (0x03<<4), /* Two-Wire Mode Held Low */
} USI_USIWM_t;

/* USI Clock Source Select Bits */
#define USI_USICR_USICS_gc(x) ((x<<2) & 0x0C)

/* Clock Strobe */
typedef enum USI_USICLK_enum
{
    USI_USICLK_CLEAR_gc = (0x00), /* Clock Strobe - CLEAR */
    USI_USICLK_SET_gc   = (0x02), /* Clock Strobe - SET */
} USI_USICLK_t;

/* Toggle Clock Port Pin */
typedef enum USI_USITC_enum
{
    USI_USITC_CLEAR_gc = (0x00), /* Toggle Clock Port Pin - CLEAR */
    USI_USITC_SET_gc   = (0x01), /* Toggle Clock Port Pin - SET */
} USI_USITC_t;

/*
--------------------------------------------------------------------------------
USART - USART
--------------------------------------------------------------------------------
*/

typedef struct USART0_struct
{
    register8_t rsv_0x00[64]; /* RESERVED REGISTER BLOCK */
    register8_t UDR0;         /* USART I/O Data Register */
    _REGISTER16 (UBRR0);      /* USART Baud Rate Register  Bytes */
    register8_t rsv_0x42;     /* RESERVED REGISTER */
    register8_t UCSR0D;       /* USART Control and Status Register D */
    register8_t UCSR0C;       /* USART Control and Status Register C */
    register8_t UCSR0B;       /* USART Control and Status Register B */
    register8_t UCSR0A;       /* USART Control and Status Register A */
} USART0_t;


/*
--------------------------------------------------------------------------------
USART - USART
--------------------------------------------------------------------------------
*/

typedef struct USART1_struct
{
    register8_t rsv_0x00[115]; /* RESERVED REGISTER BLOCK */
    register8_t UDR1;          /* USART I/O Data Register */
    _REGISTER16 (UBRR1);       /* USART Baud Rate Register  Bytes */
    register8_t rsv_0x75;      /* RESERVED REGISTER */
    register8_t UCSR1D;        /* USART Control and Status Register D */
    register8_t UCSR1C;        /* USART Control and Status Register C */
    register8_t UCSR1B;        /* USART Control and Status Register B */
    register8_t UCSR1A;        /* USART Control and Status Register A */
} USART1_t;


/* USART Receive Complete */
typedef enum USART0_RXC0_enum
{
    USART0_RXC0_CLEAR_gc = (0x00), /* USART Receive Complete - CLEAR */
    USART0_RXC0_SET_gc   = (0x80), /* USART Receive Complete - SET */
} USART0_RXC0_t;

/* USART Transmitt Complete */
typedef enum USART0_TXC0_enum
{
    USART0_TXC0_CLEAR_gc = (0x00), /* USART Transmitt Complete - CLEAR */
    USART0_TXC0_SET_gc   = (0x40), /* USART Transmitt Complete - SET */
} USART0_TXC0_t;

/* USART Data Register Empty */
typedef enum USART0_UDRE0_enum
{
    USART0_UDRE0_CLEAR_gc = (0x00), /* USART Data Register Empty - CLEAR */
    USART0_UDRE0_SET_gc   = (0x20), /* USART Data Register Empty - SET */
} USART0_UDRE0_t;

/* Framing Error */
typedef enum USART0_FE0_enum
{
    USART0_FE0_CLEAR_gc = (0x00), /* Framing Error - CLEAR */
    USART0_FE0_SET_gc   = (0x10), /* Framing Error - SET */
} USART0_FE0_t;

/* Data overRun */
typedef enum USART0_DOR0_enum
{
    USART0_DOR0_CLEAR_gc = (0x00), /* Data overRun - CLEAR */
    USART0_DOR0_SET_gc   = (0x08), /* Data overRun - SET */
} USART0_DOR0_t;

/* Parity Error */
typedef enum USART0_UPE0_enum
{
    USART0_UPE0_CLEAR_gc = (0x00), /* Parity Error - CLEAR */
    USART0_UPE0_SET_gc   = (0x04), /* Parity Error - SET */
} USART0_UPE0_t;

/* Double the USART transmission speed */
typedef enum USART0_U2X0_enum
{
    USART0_U2X0_CLEAR_gc = (0x00), /* Double the USART transmission speed - CLEAR */
    USART0_U2X0_SET_gc   = (0x02), /* Double the USART transmission speed - SET */
} USART0_U2X0_t;

/* Multi-processor Communication Mode */
typedef enum USART0_MPCM0_enum
{
    USART0_MPCM0_CLEAR_gc = (0x00), /* Multi-processor Communication Mode - CLEAR */
    USART0_MPCM0_SET_gc   = (0x01), /* Multi-processor Communication Mode - SET */
} USART0_MPCM0_t;

/* RX Complete Interrupt Enable */
typedef enum USART0_RXCIE0_enum
{
    USART0_RXCIE0_CLEAR_gc = (0x00), /* RX Complete Interrupt Enable - CLEAR */
    USART0_RXCIE0_SET_gc   = (0x80), /* RX Complete Interrupt Enable - SET */
} USART0_RXCIE0_t;

/* TX Complete Interrupt Enable */
typedef enum USART0_TXCIE0_enum
{
    USART0_TXCIE0_CLEAR_gc = (0x00), /* TX Complete Interrupt Enable - CLEAR */
    USART0_TXCIE0_SET_gc   = (0x40), /* TX Complete Interrupt Enable - SET */
} USART0_TXCIE0_t;

/* USART Data register Empty Interrupt Enable */
typedef enum USART0_UDRIE0_enum
{
    USART0_UDRIE0_CLEAR_gc = (0x00), /* USART Data register Empty Interrupt Enable - CLEAR */
    USART0_UDRIE0_SET_gc   = (0x20), /* USART Data register Empty Interrupt Enable - SET */
} USART0_UDRIE0_t;

/* Receiver Enable */
typedef enum USART0_RXEN0_enum
{
    USART0_RXEN0_CLEAR_gc = (0x00), /* Receiver Enable - CLEAR */
    USART0_RXEN0_SET_gc   = (0x10), /* Receiver Enable - SET */
} USART0_RXEN0_t;

/* Transmitter Enable */
typedef enum USART0_TXEN0_enum
{
    USART0_TXEN0_CLEAR_gc = (0x00), /* Transmitter Enable - CLEAR */
    USART0_TXEN0_SET_gc   = (0x08), /* Transmitter Enable - SET */
} USART0_TXEN0_t;

/* Character Size */
typedef enum USART0_UCSZ02_enum
{
    USART0_UCSZ02_CLEAR_gc = (0x00), /* Character Size - CLEAR */
    USART0_UCSZ02_SET_gc   = (0x04), /* Character Size - SET */
} USART0_UCSZ02_t;

/* Receive Data Bit 8 */
typedef enum USART0_RXB80_enum
{
    USART0_RXB80_CLEAR_gc = (0x00), /* Receive Data Bit 8 - CLEAR */
    USART0_RXB80_SET_gc   = (0x02), /* Receive Data Bit 8 - SET */
} USART0_RXB80_t;

/* Transmit Data Bit 8 */
typedef enum USART0_TXB80_enum
{
    USART0_TXB80_CLEAR_gc = (0x00), /* Transmit Data Bit 8 - CLEAR */
    USART0_TXB80_SET_gc   = (0x01), /* Transmit Data Bit 8 - SET */
} USART0_TXB80_t;

/* USART Mode Select */
typedef enum USART0_UMSEL0_enum
{
    USART0_UMSEL0_VAL_0x00_gc = (0x00<<6), /* Asynchronous USART */
    USART0_UMSEL0_VAL_0x01_gc = (0x01<<6), /* Synchronous USART */
    USART0_UMSEL0_VAL_0x03_gc = (0x03<<6), /* Master SPI */
} USART0_UMSEL0_t;

/* Parity Mode Bits */
typedef enum USART0_UPM0_enum
{
    USART0_UPM0_VAL_0x00_gc = (0x00<<4), /* Disabled */
    USART0_UPM0_VAL_0x01_gc = (0x01<<4), /* Reserved */
    USART0_UPM0_VAL_0x02_gc = (0x02<<4), /* Enabled, Even Parity */
    USART0_UPM0_VAL_0x03_gc = (0x03<<4), /* Enabled, Odd Parity */
} USART0_UPM0_t;

/* Stop Bit Select */
typedef enum USART0_USBS0_enum
{
    USART0_USBS0_VAL_0x00_gc = (0x00<<3), /* 1-bit */
    USART0_USBS0_VAL_0x01_gc = (0x01<<3), /* 2-bit */
} USART0_USBS0_t;

/* Character Size */
#define USART0_UCSR0C_UCSZ0_gc(x) ((x<<1) & 0x06)

/* Clock Polarity */
typedef enum USART0_UCPOL0_enum
{
    USART0_UCPOL0_CLEAR_gc = (0x00), /* Clock Polarity - CLEAR */
    USART0_UCPOL0_SET_gc   = (0x01), /* Clock Polarity - SET */
} USART0_UCPOL0_t;

/* USART RX Start Interrupt Enable */
typedef enum USART0_RXSIE0_enum
{
    USART0_RXSIE0_CLEAR_gc = (0x00), /* USART RX Start Interrupt Enable - CLEAR */
    USART0_RXSIE0_SET_gc   = (0x80), /* USART RX Start Interrupt Enable - SET */
} USART0_RXSIE0_t;

/* USART RX Start Flag */
typedef enum USART0_RXS0_enum
{
    USART0_RXS0_CLEAR_gc = (0x00), /* USART RX Start Flag - CLEAR */
    USART0_RXS0_SET_gc   = (0x40), /* USART RX Start Flag - SET */
} USART0_RXS0_t;

/* USART RX Start Frame Detection Enable */
typedef enum USART0_SFDE0_enum
{
    USART0_SFDE0_CLEAR_gc = (0x00), /* USART RX Start Frame Detection Enable - CLEAR */
    USART0_SFDE0_SET_gc   = (0x20), /* USART RX Start Frame Detection Enable - SET */
} USART0_SFDE0_t;

/* USART Receive Complete */
typedef enum USART1_RXC1_enum
{
    USART1_RXC1_CLEAR_gc = (0x00), /* USART Receive Complete - CLEAR */
    USART1_RXC1_SET_gc   = (0x80), /* USART Receive Complete - SET */
} USART1_RXC1_t;

/* USART Transmitt Complete */
typedef enum USART1_TXC1_enum
{
    USART1_TXC1_CLEAR_gc = (0x00), /* USART Transmitt Complete - CLEAR */
    USART1_TXC1_SET_gc   = (0x40), /* USART Transmitt Complete - SET */
} USART1_TXC1_t;

/* USART Data Register Empty */
typedef enum USART1_UDRE1_enum
{
    USART1_UDRE1_CLEAR_gc = (0x00), /* USART Data Register Empty - CLEAR */
    USART1_UDRE1_SET_gc   = (0x20), /* USART Data Register Empty - SET */
} USART1_UDRE1_t;

/* Framing Error */
typedef enum USART1_FE1_enum
{
    USART1_FE1_CLEAR_gc = (0x00), /* Framing Error - CLEAR */
    USART1_FE1_SET_gc   = (0x10), /* Framing Error - SET */
} USART1_FE1_t;

/* Data overRun */
typedef enum USART1_DOR1_enum
{
    USART1_DOR1_CLEAR_gc = (0x00), /* Data overRun - CLEAR */
    USART1_DOR1_SET_gc   = (0x08), /* Data overRun - SET */
} USART1_DOR1_t;

/* Parity Error */
typedef enum USART1_UPE1_enum
{
    USART1_UPE1_CLEAR_gc = (0x00), /* Parity Error - CLEAR */
    USART1_UPE1_SET_gc   = (0x04), /* Parity Error - SET */
} USART1_UPE1_t;

/* Double the USART transmission speed */
typedef enum USART1_U2X1_enum
{
    USART1_U2X1_CLEAR_gc = (0x00), /* Double the USART transmission speed - CLEAR */
    USART1_U2X1_SET_gc   = (0x02), /* Double the USART transmission speed - SET */
} USART1_U2X1_t;

/* Multi-processor Communication Mode */
typedef enum USART1_MPCM1_enum
{
    USART1_MPCM1_CLEAR_gc = (0x00), /* Multi-processor Communication Mode - CLEAR */
    USART1_MPCM1_SET_gc   = (0x01), /* Multi-processor Communication Mode - SET */
} USART1_MPCM1_t;

/* RX Complete Interrupt Enable */
typedef enum USART1_RXCIE1_enum
{
    USART1_RXCIE1_CLEAR_gc = (0x00), /* RX Complete Interrupt Enable - CLEAR */
    USART1_RXCIE1_SET_gc   = (0x80), /* RX Complete Interrupt Enable - SET */
} USART1_RXCIE1_t;

/* TX Complete Interrupt Enable */
typedef enum USART1_TXCIE1_enum
{
    USART1_TXCIE1_CLEAR_gc = (0x00), /* TX Complete Interrupt Enable - CLEAR */
    USART1_TXCIE1_SET_gc   = (0x40), /* TX Complete Interrupt Enable - SET */
} USART1_TXCIE1_t;

/* USART Data register Empty Interrupt Enable */
typedef enum USART1_UDRIE1_enum
{
    USART1_UDRIE1_CLEAR_gc = (0x00), /* USART Data register Empty Interrupt Enable - CLEAR */
    USART1_UDRIE1_SET_gc   = (0x20), /* USART Data register Empty Interrupt Enable - SET */
} USART1_UDRIE1_t;

/* Receiver Enable */
typedef enum USART1_RXEN1_enum
{
    USART1_RXEN1_CLEAR_gc = (0x00), /* Receiver Enable - CLEAR */
    USART1_RXEN1_SET_gc   = (0x10), /* Receiver Enable - SET */
} USART1_RXEN1_t;

/* Transmitter Enable */
typedef enum USART1_TXEN1_enum
{
    USART1_TXEN1_CLEAR_gc = (0x00), /* Transmitter Enable - CLEAR */
    USART1_TXEN1_SET_gc   = (0x08), /* Transmitter Enable - SET */
} USART1_TXEN1_t;

/* Character Size */
typedef enum USART1_UCSZ12_enum
{
    USART1_UCSZ12_CLEAR_gc = (0x00), /* Character Size - CLEAR */
    USART1_UCSZ12_SET_gc   = (0x04), /* Character Size - SET */
} USART1_UCSZ12_t;

/* Receive Data Bit 8 */
typedef enum USART1_RXB81_enum
{
    USART1_RXB81_CLEAR_gc = (0x00), /* Receive Data Bit 8 - CLEAR */
    USART1_RXB81_SET_gc   = (0x02), /* Receive Data Bit 8 - SET */
} USART1_RXB81_t;

/* Transmit Data Bit 8 */
typedef enum USART1_TXB81_enum
{
    USART1_TXB81_CLEAR_gc = (0x00), /* Transmit Data Bit 8 - CLEAR */
    USART1_TXB81_SET_gc   = (0x01), /* Transmit Data Bit 8 - SET */
} USART1_TXB81_t;

/* USART Mode Select */
typedef enum USART1_UMSEL1_enum
{
    USART1_UMSEL1_VAL_0x00_gc = (0x00<<6), /* Asynchronous USART */
    USART1_UMSEL1_VAL_0x01_gc = (0x01<<6), /* Synchronous USART */
    USART1_UMSEL1_VAL_0x03_gc = (0x03<<6), /* Master SPI */
} USART1_UMSEL1_t;

/* Parity Mode Bits */
typedef enum USART1_UPM1_enum
{
    USART1_UPM1_VAL_0x00_gc = (0x00<<4), /* Disabled */
    USART1_UPM1_VAL_0x01_gc = (0x01<<4), /* Reserved */
    USART1_UPM1_VAL_0x02_gc = (0x02<<4), /* Enabled, Even Parity */
    USART1_UPM1_VAL_0x03_gc = (0x03<<4), /* Enabled, Odd Parity */
} USART1_UPM1_t;

/* Stop Bit Select */
typedef enum USART1_USBS1_enum
{
    USART1_USBS1_VAL_0x00_gc = (0x00<<3), /* 1-bit */
    USART1_USBS1_VAL_0x01_gc = (0x01<<3), /* 2-bit */
} USART1_USBS1_t;

/* Character Size */
#define USART1_UCSR1C_UCSZ1_gc(x) ((x<<1) & 0x06)

/* Clock Polarity */
typedef enum USART1_UCPOL1_enum
{
    USART1_UCPOL1_CLEAR_gc = (0x00), /* Clock Polarity - CLEAR */
    USART1_UCPOL1_SET_gc   = (0x01), /* Clock Polarity - SET */
} USART1_UCPOL1_t;

/* USART RX Start Interrupt Enable */
typedef enum USART1_RXSIE1_enum
{
    USART1_RXSIE1_CLEAR_gc = (0x00), /* USART RX Start Interrupt Enable - CLEAR */
    USART1_RXSIE1_SET_gc   = (0x80), /* USART RX Start Interrupt Enable - SET */
} USART1_RXSIE1_t;

/* USART RX Start Flag */
typedef enum USART1_RXS1_enum
{
    USART1_RXS1_CLEAR_gc = (0x00), /* USART RX Start Flag - CLEAR */
    USART1_RXS1_SET_gc   = (0x40), /* USART RX Start Flag - SET */
} USART1_RXS1_t;

/* USART RX Start Frame Detection Enable */
typedef enum USART1_SFDE1_enum
{
    USART1_SFDE1_CLEAR_gc = (0x00), /* USART RX Start Frame Detection Enable - CLEAR */
    USART1_SFDE1_SET_gc   = (0x20), /* USART RX Start Frame Detection Enable - SET */
} USART1_SFDE1_t;

/*
--------------------------------------------------------------------------------
WDT - Watchdog Timer
--------------------------------------------------------------------------------
*/

typedef struct WDT_struct
{
    register8_t rsv_0x00[80]; /* RESERVED REGISTER BLOCK */
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
    WDT_WDP_VAL_0x00_gc = (0x00), /* Oscillator Cycles 512 (16 ms) */
    WDT_WDP_VAL_0x01_gc = (0x01), /* Oscillator Cycles 1K (32 ms) */
    WDT_WDP_VAL_0x02_gc = (0x02), /* Oscillator Cycles 2K (64 ms) */
    WDT_WDP_VAL_0x03_gc = (0x03), /* Oscillator Cycles 4K (0.125 s) */
    WDT_WDP_VAL_0x04_gc = (0x04), /* Oscillator Cycles 8K (0.25 s) */
    WDT_WDP_VAL_0x05_gc = (0x05), /* Oscillator Cycles 16K (0.5 s) */
    WDT_WDP_VAL_0x06_gc = (0x06), /* Oscillator Cycles 32K (1.0 s) */
    WDT_WDP_VAL_0x07_gc = (0x07), /* Oscillator Cycles 64K (2.0 s) */
    WDT_WDP_VAL_0x08_gc = (0x08), /* Oscillator Cycles 128K (4.0 s) */
    WDT_WDP_VAL_0x09_gc = (0x09), /* Oscillator Cycles 256K (8.0 s) */
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

#define TWI     (*(TWI_t *) 0x0000)     /* Two Wire Serial Interface */
#define PORTB   (*(PORTB_t *) 0x0000)   /* I/O Port */
#define PORTC   (*(PORTC_t *) 0x0000)   /* I/O Port */
#define PORTA   (*(PORTA_t *) 0x0000)   /* I/O Port */
#define ADC     (*(ADC_t *) 0x0000)     /* Analog-to-Digital Converter */
#define AC      (*(AC_t *) 0x0000)      /* Analog Comparator */
#define EEPROM  (*(EEPROM_t *) 0x0000)  /* EEPROM */
#define TC1     (*(TC1_t *) 0x0000)     /* Timer/Counter, 16-bit */
#define TC0     (*(TC0_t *) 0x0000)     /* Timer/Counter, 8-bit */
#define EXINT   (*(EXINT_t *) 0x0000)   /* External Interrupts */
#define CPU     (*(CPU_t *) 0x0000)     /* CPU Registers */
#define USI     (*(USI_t *) 0x0000)     /* Universal Serial Interface */
#define USART0  (*(USART0_t *) 0x0000)  /* USART */
#define USART1  (*(USART1_t *) 0x0000)  /* USART */
#define WDT     (*(WDT_t *) 0x0000)     /* Watchdog Timer */
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


/* BOD mode of operation when the device is in sleep mode */
#define FUSE_BODPD_BOD_SAMPLED_gc  (0x01<<3) /* Sampled */
#define FUSE_BODPD_BOD_ENABLED_gc  (0x02<<3) /* Enabled */
#define FUSE_BODPD_BOD_DISABLED_gc (0x03<<3) /* Disabled */


/* BOD mode of operation when the device is active or idle */
#define FUSE_BODACT_BOD_SAMPLED_gc  (0x01<<1) /* Sampled */
#define FUSE_BODACT_BOD_ENABLED_gc  (0x02<<1) /* Enabled */
#define FUSE_BODACT_BOD_DISABLED_gc (0x03<<1) /* Disabled */


/* Self Programming enable */
#define FUSE_SELFPRGEN_CLEAR_gc (0x00) /* Self Programming enable - CLEAR */
#define FUSE_SELFPRGEN_SET_gc   (0x01) /* Self Programming enable - SET */


/* Reset Disabled (Enable PC2 as i/o pin) */
#define FUSE_RSTDISBL_CLEAR_gc (0x00) /* Reset Disabled (Enable PC2 as i/o pin) - CLEAR */
#define FUSE_RSTDISBL_SET_gc   (0x80) /* Reset Disabled (Enable PC2 as i/o pin) - SET */


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


/* Brown-out Detector trigger level */
#define FUSE_BODLEVEL_4V3_gc (0x04) /* Brown-out detection at VCC=4.3 V */
#define FUSE_BODLEVEL_2V7_gc (0x05) /* Brown-out detection at VCC=2.7 V */
#define FUSE_BODLEVEL_1V8_gc (0x06) /* Brown-out detection at VCC=1.8 V */


/* Divide clock by 8 internally */
#define FUSE_CKDIV8_CLEAR_gc (0x00) /* Divide clock by 8 internally - CLEAR */
#define FUSE_CKDIV8_SET_gc   (0x80) /* Divide clock by 8 internally - SET */


/* Clock output on PORTC2 */
#define FUSE_CKOUT_CLEAR_gc (0x00) /* Clock output on PORTC2 - CLEAR */
#define FUSE_CKOUT_SET_gc   (0x40) /* Clock output on PORTC2 - SET */


/* Select Clock Source */
#define FUSE_SUT_CKSEL_EXTCLK_6CK_16CK_16MS_gc                (0x00) /* Ext. Clock; Start-up time PWRDWN/RESET: 6 CK/16 CK + 16 ms */
#define FUSE_SUT_CKSEL_INTRCOSC_8MHZ_6CK_16CK_16MS_gc         (0x02) /* Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 CK/16 CK + 16 ms */
#define FUSE_SUT_CKSEL_INTULPOSC_32KHZ_6CK_16CK_16MS_gc       (0x04) /* Int. ULP Osc. 32 kHz; Start-up time PWRDWN/RESET: 6 CK/16 CK + 16 ms */
#define FUSE_SUT_CKSEL_EXTCRES_0MHZ4_0MHZ9_258CK_16CK_16MS_gc (0x08) /* Ext. Ceramic Res. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 258 CK/16 CK + 16 ms */
#define FUSE_SUT_CKSEL_EXTCRES_0MHZ4_0MHZ9_1KCK_16CK_16MS_gc  (0x18) /* Ext. Ceramic Res. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 1K CK/16 CK + 16 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_16KCK_16CK_16MS_gc (0x09) /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 16 K CK/16 CK + 16 ms */
#define FUSE_SUT_CKSEL_EXTCRES_0MHZ9_3MHZ_258CK_16CK_16MS_gc  (0x0A) /* Ext. Ceramic Res. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 258 CK/16 CK + 16 ms */
#define FUSE_SUT_CKSEL_EXTCRES_0MHZ9_3MHZ_1KCK_16CK_16MS_gc   (0x1A) /* Ext. Ceramic Res. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 1K CK/16 CK + 16 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_16KCK_16CK_16MS_gc  (0x0B) /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 16 K CK/16 CK + 16 ms */
#define FUSE_SUT_CKSEL_EXTCRES_3MHZ_8MHZ_258CK_16CK_16MS_gc   (0x0C) /* Ext. Ceramic Res. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 258 CK/16 CK + 16 ms */
#define FUSE_SUT_CKSEL_EXTCRES_3MHZ_8MHZ_1KCK_16CK_16MS_gc    (0x1C) /* Ext. Ceramic Res. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 1K CK/16 CK + 16 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_16KCK_16CK_16MS_gc   (0x0D) /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 16 K CK/16 CK + 16 ms */
#define FUSE_SUT_CKSEL_EXTCRES_8MHZ_XX_258CK_16CK_16MS_gc     (0x0E) /* Ext. Ceramic Res. 8.0- MHz; Start-up time PWRDWN/RESET: 258 CK/16 CK + 16 ms */
#define FUSE_SUT_CKSEL_EXTCRES_8MHZ_XX_1KCK_16CK_16MS_gc      (0x1E) /* Ext. Ceramic Res. 8.0- MHz; Start-up time PWRDWN/RESET: 1K CK/16 CK + 16 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_16KCK_16CK_16MS_gc     (0x0F) /* Ext. Crystal Osc. 8.0- MHz; Start-up time PWRDWN/RESET: 16 K CK/16 CK + 16 ms */


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
PORT - I/O Port
--------------------------------------------------------------------------------
*/


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
#define PORTC_BBMC_CLEAR_gc (0x00) /* Break-Before-Make Mode Enable - CLEAR */
#define PORTC_BBMC_SET_gc   (0x04) /* Break-Before-Make Mode Enable - SET */


/* Break-Before-Make Mode Enable */
#define PORTA_BBMA_CLEAR_gc (0x00) /* Break-Before-Make Mode Enable - CLEAR */
#define PORTA_BBMA_SET_gc   (0x01) /* Break-Before-Make Mode Enable - SET */


/*
--------------------------------------------------------------------------------
ADC - Analog-to-Digital Converter
--------------------------------------------------------------------------------
*/


/* Reference Selection Bit */
#define ADC_ADMUX_REFS_gc(x) ((x<<6) & 0xC0)

/* The ADC multiplexer Selection Register-REFEN */
#define ADC_REFEN_CLEAR_gc (0x00) /* The ADC multiplexer Selection Register-REFEN - CLEAR */
#define ADC_REFEN_SET_gc   (0x20) /* The ADC multiplexer Selection Register-REFEN - SET */


/* The ADC multiplexer Selection Register-ADC0EN */
#define ADC_ADC0EN_CLEAR_gc (0x00) /* The ADC multiplexer Selection Register-ADC0EN - CLEAR */
#define ADC_ADC0EN_SET_gc   (0x10) /* The ADC multiplexer Selection Register-ADC0EN - SET */


/* Analog Channel and Gain Selection Bits */
#define ADC_ADMUX_MUX_gc(x) (x & 0x0F)

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


/* ADC Control and Status Register B-VDEN */
#define ADC_VDEN_CLEAR_gc (0x00) /* ADC Control and Status Register B-VDEN - CLEAR */
#define ADC_VDEN_SET_gc   (0x80) /* ADC Control and Status Register B-VDEN - SET */


/* ADC Control and Status Register B-VDPD */
#define ADC_VDPD_CLEAR_gc (0x00) /* ADC Control and Status Register B-VDPD - CLEAR */
#define ADC_VDPD_SET_gc   (0x40) /* ADC Control and Status Register B-VDPD - SET */


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
#define ADC_ADTS_VAL_0x07_gc (0x07) /* Timer/Counter1 Capture Event */


/* ADC11 Digital input Disable */
#define ADC_ADC11D_CLEAR_gc (0x00) /* ADC11 Digital input Disable - CLEAR */
#define ADC_ADC11D_SET_gc   (0x04) /* ADC11 Digital input Disable - SET */


/* ADC10 Digital input Disable */
#define ADC_ADC10D_CLEAR_gc (0x00) /* ADC10 Digital input Disable - CLEAR */
#define ADC_ADC10D_SET_gc   (0x02) /* ADC10 Digital input Disable - SET */


/* ADC9 Digital input Disable */
#define ADC_ADC9D_CLEAR_gc (0x00) /* ADC9 Digital input Disable - CLEAR */
#define ADC_ADC9D_SET_gc   (0x01) /* ADC9 Digital input Disable - SET */


/* ADC8 Digital Input Disable */
#define ADC_ADC8D_CLEAR_gc (0x00) /* ADC8 Digital Input Disable - CLEAR */
#define ADC_ADC8D_SET_gc   (0x08) /* ADC8 Digital Input Disable - SET */


/* ADC7 Digital input Disable */
#define ADC_ADC7D_CLEAR_gc (0x00) /* ADC7 Digital input Disable - CLEAR */
#define ADC_ADC7D_SET_gc   (0x04) /* ADC7 Digital input Disable - SET */


/* ADC6 Digital input Disable */
#define ADC_ADC6D_CLEAR_gc (0x00) /* ADC6 Digital input Disable - CLEAR */
#define ADC_ADC6D_SET_gc   (0x02) /* ADC6 Digital input Disable - SET */


/* ADC5 Digital input Disable */
#define ADC_ADC5D_CLEAR_gc (0x00) /* ADC5 Digital input Disable - CLEAR */
#define ADC_ADC5D_SET_gc   (0x01) /* ADC5 Digital input Disable - SET */


/* ADC4 Digital input Disable */
#define ADC_ADC4D_CLEAR_gc (0x00) /* ADC4 Digital input Disable - CLEAR */
#define ADC_ADC4D_SET_gc   (0x80) /* ADC4 Digital input Disable - SET */


/* ADC3 Digital input Disable */
#define ADC_ADC3D_CLEAR_gc (0x00) /* ADC3 Digital input Disable - CLEAR */
#define ADC_ADC3D_SET_gc   (0x40) /* ADC3 Digital input Disable - SET */


/* ADC2 Digital input Disable */
#define ADC_ADC2D_CLEAR_gc (0x00) /* ADC2 Digital input Disable - CLEAR */
#define ADC_ADC2D_SET_gc   (0x20) /* ADC2 Digital input Disable - SET */


/* ADC1 Digital input Disable */
#define ADC_ADC1D_CLEAR_gc (0x00) /* ADC1 Digital input Disable - CLEAR */
#define ADC_ADC1D_SET_gc   (0x10) /* ADC1 Digital input Disable - SET */


/* ADC0 Digital Input Disable */
#define ADC_ADC0D_CLEAR_gc (0x00) /* ADC0 Digital Input Disable - CLEAR */
#define ADC_ADC0D_SET_gc   (0x08) /* ADC0 Digital Input Disable - SET */


/* AIN1 Digital input Disable */
#define ADC_AIN1D_CLEAR_gc (0x00) /* AIN1 Digital input Disable - CLEAR */
#define ADC_AIN1D_SET_gc   (0x04) /* AIN1 Digital input Disable - SET */


/* AIN0 Digital input Disable */
#define ADC_AIN0D_CLEAR_gc (0x00) /* AIN0 Digital input Disable - CLEAR */
#define ADC_AIN0D_SET_gc   (0x02) /* AIN0 Digital input Disable - SET */


/* AREF Digital input Disable */
#define ADC_AREFD_CLEAR_gc (0x00) /* AREF Digital input Disable - CLEAR */
#define ADC_AREFD_SET_gc   (0x01) /* AREF Digital input Disable - SET */


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


/* Analog Comparator Control And Status Register B-ACLP */
#define AC_ACLP_CLEAR_gc (0x00) /* Analog Comparator Control And Status Register B-ACLP - CLEAR */
#define AC_ACLP_SET_gc   (0x20) /* Analog Comparator Control And Status Register B-ACLP - SET */


/* Analog Comparator Control And Status Register B-ACCE */
#define AC_ACCE_CLEAR_gc (0x00) /* Analog Comparator Control And Status Register B-ACCE - CLEAR */
#define AC_ACCE_SET_gc   (0x08) /* Analog Comparator Control And Status Register B-ACCE - SET */


/* Analog Comparator Multiplexer Enable */
#define AC_ACME_CLEAR_gc (0x00) /* Analog Comparator Multiplexer Enable - CLEAR */
#define AC_ACME_SET_gc   (0x04) /* Analog Comparator Multiplexer Enable - SET */


/* Analog Comparator Control And Status Register B-ACIRS */
#define AC_ACSRB_ACIRS_gc(x) (x & 0x03)

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
EEPROM - EEPROM
--------------------------------------------------------------------------------
*/


/* EEPROM Programming Mode Bits */
#define EEPROM_EEPM_VAL_0x00_gc (0x00<<4) /* Erase and Write in one operation */
#define EEPROM_EEPM_VAL_0x01_gc (0x01<<4) /* Erase Only */
#define EEPROM_EEPM_VAL_0x02_gc (0x02<<4) /* Write Only */


/* EEProm Ready Interrupt Enable */
#define EEPROM_EERIE_CLEAR_gc (0x00) /* EEProm Ready Interrupt Enable - CLEAR */
#define EEPROM_EERIE_SET_gc   (0x08) /* EEProm Ready Interrupt Enable - SET */


/* EEPROM Master Write Enable */
#define EEPROM_EEMPE_CLEAR_gc (0x00) /* EEPROM Master Write Enable - CLEAR */
#define EEPROM_EEMPE_SET_gc   (0x04) /* EEPROM Master Write Enable - SET */


/* EEPROM Write Enable */
#define EEPROM_EEPE_CLEAR_gc (0x00) /* EEPROM Write Enable - CLEAR */
#define EEPROM_EEPE_SET_gc   (0x02) /* EEPROM Write Enable - SET */


/* EEPROM Read Enable */
#define EEPROM_EERE_CLEAR_gc (0x00) /* EEPROM Read Enable - CLEAR */
#define EEPROM_EERE_SET_gc   (0x01) /* EEPROM Read Enable - SET */


/*
--------------------------------------------------------------------------------
TC16 - Timer/Counter, 16-bit
--------------------------------------------------------------------------------
*/


/* Timer/Counter1 Overflow Interrupt Enable */
#define TC1_TOIE1_CLEAR_gc (0x00) /* Timer/Counter1 Overflow Interrupt Enable - CLEAR */
#define TC1_TOIE1_SET_gc   (0x80) /* Timer/Counter1 Overflow Interrupt Enable - SET */


/* Timer/Counter1 Output CompareA Match Interrupt Enable */
#define TC1_OCIE1A_CLEAR_gc (0x00) /* Timer/Counter1 Output CompareA Match Interrupt Enable - CLEAR */
#define TC1_OCIE1A_SET_gc   (0x40) /* Timer/Counter1 Output CompareA Match Interrupt Enable - SET */


/* Timer/Counter1 Output CompareB Match Interrupt Enable */
#define TC1_OCIE1B_CLEAR_gc (0x00) /* Timer/Counter1 Output CompareB Match Interrupt Enable - CLEAR */
#define TC1_OCIE1B_SET_gc   (0x20) /* Timer/Counter1 Output CompareB Match Interrupt Enable - SET */


/* Timer/Counter1 Input Capture Interrupt Enable */
#define TC1_ICIE1_CLEAR_gc (0x00) /* Timer/Counter1 Input Capture Interrupt Enable - CLEAR */
#define TC1_ICIE1_SET_gc   (0x08) /* Timer/Counter1 Input Capture Interrupt Enable - SET */


/* Timer/Counter1 Overflow Flag */
#define TC1_TOV1_CLEAR_gc (0x00) /* Timer/Counter1 Overflow Flag - CLEAR */
#define TC1_TOV1_SET_gc   (0x80) /* Timer/Counter1 Overflow Flag - SET */


/* Output Compare Flag 1A */
#define TC1_OCF1A_CLEAR_gc (0x00) /* Output Compare Flag 1A - CLEAR */
#define TC1_OCF1A_SET_gc   (0x40) /* Output Compare Flag 1A - SET */


/* Output Compare Flag 1B */
#define TC1_OCF1B_CLEAR_gc (0x00) /* Output Compare Flag 1B - CLEAR */
#define TC1_OCF1B_SET_gc   (0x20) /* Output Compare Flag 1B - SET */


/* Input Capture Flag 1 */
#define TC1_ICF1_CLEAR_gc (0x00) /* Input Capture Flag 1 - CLEAR */
#define TC1_ICF1_SET_gc   (0x08) /* Input Capture Flag 1 - SET */


/* Compare Output Mode 1A, bits */
#define TC1_TCCR1A_COM1A_gc(x) ((x<<6) & 0xC0)

/* Compare Output Mode 1B, bits */
#define TC1_TCCR1A_COM1B_gc(x) ((x<<4) & 0x30)

/* Pulse Width Modulator Select Bits */
#define TC1_TCCR1A_WGM1_gc(x) (x & 0x03)

/* Input Capture 1 Noise Canceler */
#define TC1_ICNC1_CLEAR_gc (0x00) /* Input Capture 1 Noise Canceler - CLEAR */
#define TC1_ICNC1_SET_gc   (0x80) /* Input Capture 1 Noise Canceler - SET */


/* Input Capture 1 Edge Select */
#define TC1_ICES1_CLEAR_gc (0x00) /* Input Capture 1 Edge Select - CLEAR */
#define TC1_ICES1_SET_gc   (0x40) /* Input Capture 1 Edge Select - SET */


/* Waveform Generation Mode Bits */
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


/* Force Output Compare for Channel A */
#define TC1_FOC1A_CLEAR_gc (0x00) /* Force Output Compare for Channel A - CLEAR */
#define TC1_FOC1A_SET_gc   (0x80) /* Force Output Compare for Channel A - SET */


/* Force Output Compare for Channel B */
#define TC1_FOC1B_CLEAR_gc (0x00) /* Force Output Compare for Channel B - CLEAR */
#define TC1_FOC1B_SET_gc   (0x40) /* Force Output Compare for Channel B - SET */


/* Timer/Counter Synchronization Mode */
#define TC1_TSM_CLEAR_gc (0x00) /* Timer/Counter Synchronization Mode - CLEAR */
#define TC1_TSM_SET_gc   (0x80) /* Timer/Counter Synchronization Mode - SET */


/* Prescaler Reset Timer/Counter1 and Timer/Counter0 */
#define TC1_PSR10_CLEAR_gc (0x00) /* Prescaler Reset Timer/Counter1 and Timer/Counter0 - CLEAR */
#define TC1_PSR10_SET_gc   (0x01) /* Prescaler Reset Timer/Counter1 and Timer/Counter0 - SET */


/*
--------------------------------------------------------------------------------
TC8 - Timer/Counter, 8-bit
--------------------------------------------------------------------------------
*/


/* Timer/Counter0 Output Compare Match B Interrupt Enable */
#define TC0_OCIE0B_CLEAR_gc (0x00) /* Timer/Counter0 Output Compare Match B Interrupt Enable - CLEAR */
#define TC0_OCIE0B_SET_gc   (0x04) /* Timer/Counter0 Output Compare Match B Interrupt Enable - SET */


/* Timer/Counter0 Overflow Interrupt Enable */
#define TC0_TOIE0_CLEAR_gc (0x00) /* Timer/Counter0 Overflow Interrupt Enable - CLEAR */
#define TC0_TOIE0_SET_gc   (0x02) /* Timer/Counter0 Overflow Interrupt Enable - SET */


/* Timer/Counter0 Output Compare Match A Interrupt Enable */
#define TC0_OCIE0A_CLEAR_gc (0x00) /* Timer/Counter0 Output Compare Match A Interrupt Enable - CLEAR */
#define TC0_OCIE0A_SET_gc   (0x01) /* Timer/Counter0 Output Compare Match A Interrupt Enable - SET */


/* Timer/Counter0 Output Compare Flag 0B */
#define TC0_OCF0B_CLEAR_gc (0x00) /* Timer/Counter0 Output Compare Flag 0B - CLEAR */
#define TC0_OCF0B_SET_gc   (0x04) /* Timer/Counter0 Output Compare Flag 0B - SET */


/* Timer/Counter0 Overflow Flag */
#define TC0_TOV0_CLEAR_gc (0x00) /* Timer/Counter0 Overflow Flag - CLEAR */
#define TC0_TOV0_SET_gc   (0x02) /* Timer/Counter0 Overflow Flag - SET */


/* Timer/Counter0 Output Compare Flag 0A */
#define TC0_OCF0A_CLEAR_gc (0x00) /* Timer/Counter0 Output Compare Flag 0A - CLEAR */
#define TC0_OCF0A_SET_gc   (0x01) /* Timer/Counter0 Output Compare Flag 0A - SET */


/* Compare Match Output A Mode */
#define TC0_TCCR0A_COM0A_gc(x) ((x<<6) & 0xC0)

/* Compare Match Output B Mode */
#define TC0_TCCR0A_COM0B_gc(x) ((x<<4) & 0x30)

/* Waveform Generation Mode */
#define TC0_TCCR0A_WGM0_gc(x) (x & 0x03)

/* Force Output Compare B */
#define TC0_FOC0A_CLEAR_gc (0x00) /* Force Output Compare B - CLEAR */
#define TC0_FOC0A_SET_gc   (0x80) /* Force Output Compare B - SET */


/* Force Output Compare B */
#define TC0_FOC0B_CLEAR_gc (0x00) /* Force Output Compare B - CLEAR */
#define TC0_FOC0B_SET_gc   (0x40) /* Force Output Compare B - SET */


/* Timer/Counter Control Register B-WGM02 */
#define TC0_WGM02_CLEAR_gc (0x00) /* Timer/Counter Control Register B-WGM02 - CLEAR */
#define TC0_WGM02_SET_gc   (0x08) /* Timer/Counter Control Register B-WGM02 - SET */


/* Clock Select */
#define TC0_CS0_VAL_0x00_gc (0x00) /* No Clock Source (Stopped) */
#define TC0_CS0_VAL_0x01_gc (0x01) /* Running, No Prescaling */
#define TC0_CS0_VAL_0x02_gc (0x02) /* Running, CLK/8 */
#define TC0_CS0_VAL_0x03_gc (0x03) /* Running, CLK/64 */
#define TC0_CS0_VAL_0x04_gc (0x04) /* Running, CLK/256 */
#define TC0_CS0_VAL_0x05_gc (0x05) /* Running, CLK/1024 */
#define TC0_CS0_VAL_0x06_gc (0x06) /* Running, ExtClk Tx Falling Edge */
#define TC0_CS0_VAL_0x07_gc (0x07) /* Running, ExtClk Tx Rising Edge */


/* Timer/Counter Synchronization Mode */
#define TC0_TSM_CLEAR_gc (0x00) /* Timer/Counter Synchronization Mode - CLEAR */
#define TC0_TSM_SET_gc   (0x80) /* Timer/Counter Synchronization Mode - SET */


/* Prescaler Reset Timer/Counter1 and Timer/Counter0 */
#define TC0_PSR10_CLEAR_gc (0x00) /* Prescaler Reset Timer/Counter1 and Timer/Counter0 - CLEAR */
#define TC0_PSR10_SET_gc   (0x01) /* Prescaler Reset Timer/Counter1 and Timer/Counter0 - SET */


/*
--------------------------------------------------------------------------------
EXINT - External Interrupts
--------------------------------------------------------------------------------
*/


/* External Interrupt Flag 0 */
#define EXINT_INTF0_CLEAR_gc (0x00) /* External Interrupt Flag 0 - CLEAR */
#define EXINT_INTF0_SET_gc   (0x40) /* External Interrupt Flag 0 - SET */


/* Pin Change Interrupt Flags */
#define EXINT_GIFR_PCIF_gc(x) ((x<<3) & 0x38)

/* External Interrupt Request 0 Enable */
#define EXINT_INT0_CLEAR_gc (0x00) /* External Interrupt Request 0 Enable - CLEAR */
#define EXINT_INT0_SET_gc   (0x40) /* External Interrupt Request 0 Enable - SET */


/* Pin Change Interrupt Enables */
#define EXINT_GIMSK_PCIE_gc(x) ((x<<3) & 0x38)

/*
--------------------------------------------------------------------------------
CPU - CPU Registers
--------------------------------------------------------------------------------
*/


/* Power Reduction TWI */
#define CPU_PRTWI_CLEAR_gc (0x00) /* Power Reduction TWI - CLEAR */
#define CPU_PRTWI_SET_gc   (0x40) /* Power Reduction TWI - SET */


/* Power Reduction Timer/Counter1 */
#define CPU_PRTIM1_CLEAR_gc (0x00) /* Power Reduction Timer/Counter1 - CLEAR */
#define CPU_PRTIM1_SET_gc   (0x20) /* Power Reduction Timer/Counter1 - SET */


/* Power Reduction Timer/Counter0 */
#define CPU_PRTIM0_CLEAR_gc (0x00) /* Power Reduction Timer/Counter0 - CLEAR */
#define CPU_PRTIM0_SET_gc   (0x10) /* Power Reduction Timer/Counter0 - SET */


/* Power Reduction USI */
#define CPU_PRUSI_CLEAR_gc (0x00) /* Power Reduction USI - CLEAR */
#define CPU_PRUSI_SET_gc   (0x08) /* Power Reduction USI - SET */


/* Power Reduction USART1 */
#define CPU_PRUSART1_CLEAR_gc (0x00) /* Power Reduction USART1 - CLEAR */
#define CPU_PRUSART1_SET_gc   (0x04) /* Power Reduction USART1 - SET */


/* Power Reduction USART0 */
#define CPU_PRUSART0_CLEAR_gc (0x00) /* Power Reduction USART0 - CLEAR */
#define CPU_PRUSART0_SET_gc   (0x02) /* Power Reduction USART0 - SET */


/* Power Reduction ADC */
#define CPU_PRADC_CLEAR_gc (0x00) /* Power Reduction ADC - CLEAR */
#define CPU_PRADC_SET_gc   (0x01) /* Power Reduction ADC - SET */


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


/* Oscillator Ready */
#define CPU_OSCRDY_CLEAR_gc (0x00) /* Oscillator Ready - CLEAR */
#define CPU_OSCRDY_SET_gc   (0x80) /* Oscillator Ready - SET */


/* Clock Switch Trigger */
#define CPU_CSTR_CLEAR_gc (0x00) /* Clock Switch Trigger - CLEAR */
#define CPU_CSTR_SET_gc   (0x40) /* Clock Switch Trigger - SET */


/* Clock Output (active low) */
#define CPU_CKOUT_IO_CLEAR_gc (0x00) /* Clock Output (active low) - CLEAR */
#define CPU_CKOUT_IO_SET_gc   (0x20) /* Clock Output (active low) - SET */


/* Start-up Time */
#define CPU_SUT_CLEAR_gc (0x00) /* Start-up Time - CLEAR */
#define CPU_SUT_SET_gc   (0x10) /* Start-up Time - SET */


/* Clock Select Bits */
#define CPU_CLKSR_CKSEL_gc(x) (x & 0x0F)

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


/* Sleep Mode Select Bits */
#define CPU_SM_IDLE_gc  (0x00<<5) /* Idle */
#define CPU_SM_ADC_gc   (0x01<<5) /* ADC Noise Reduction (If Available) */
#define CPU_SM_PDOWN_gc (0x02<<5) /* Power Down */
#define CPU_SM_STDBY_gc (0x03<<5) /* Standby */


/* Sleep Enable */
#define CPU_SE_CLEAR_gc (0x00) /* Sleep Enable - CLEAR */
#define CPU_SE_SET_gc   (0x10) /* Sleep Enable - SET */


/* Interrupt Sense Control 0 bits */
#define CPU_MCUCR_ISC0_gc(x) (x & 0x03)

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


/* Read Device Signature Imprint Table */
#define CPU_RSIG_CLEAR_gc (0x00) /* Read Device Signature Imprint Table - CLEAR */
#define CPU_RSIG_SET_gc   (0x20) /* Read Device Signature Imprint Table - SET */


/* Clear Temporary Page Buffer */
#define CPU_CTPB_CLEAR_gc (0x00) /* Clear Temporary Page Buffer - CLEAR */
#define CPU_CTPB_SET_gc   (0x10) /* Clear Temporary Page Buffer - SET */


/* Read Fuse and Lock Bits */
#define CPU_RFLB_CLEAR_gc (0x00) /* Read Fuse and Lock Bits - CLEAR */
#define CPU_RFLB_SET_gc   (0x08) /* Read Fuse and Lock Bits - SET */


/* Page Write */
#define CPU_PGWRT_CLEAR_gc (0x00) /* Page Write - CLEAR */
#define CPU_PGWRT_SET_gc   (0x04) /* Page Write - SET */


/* Page Erase */
#define CPU_PGERS_CLEAR_gc (0x00) /* Page Erase - CLEAR */
#define CPU_PGERS_SET_gc   (0x02) /* Page Erase - SET */


/* Store program Memory Enable */
#define CPU_SPMEN_CLEAR_gc (0x00) /* Store program Memory Enable - CLEAR */
#define CPU_SPMEN_SET_gc   (0x01) /* Store program Memory Enable - SET */


/*
--------------------------------------------------------------------------------
USI - Universal Serial Interface
--------------------------------------------------------------------------------
*/


/* Start Condition Interrupt Flag */
#define USI_USISIF_CLEAR_gc (0x00) /* Start Condition Interrupt Flag - CLEAR */
#define USI_USISIF_SET_gc   (0x80) /* Start Condition Interrupt Flag - SET */


/* Counter Overflow Interrupt Flag */
#define USI_USIOIF_CLEAR_gc (0x00) /* Counter Overflow Interrupt Flag - CLEAR */
#define USI_USIOIF_SET_gc   (0x40) /* Counter Overflow Interrupt Flag - SET */


/* Stop Condition Flag */
#define USI_USIPF_CLEAR_gc (0x00) /* Stop Condition Flag - CLEAR */
#define USI_USIPF_SET_gc   (0x20) /* Stop Condition Flag - SET */


/* Data Output Collision */
#define USI_USIDC_CLEAR_gc (0x00) /* Data Output Collision - CLEAR */
#define USI_USIDC_SET_gc   (0x10) /* Data Output Collision - SET */


/* USI Counter Value Bits */
#define USI_USISR_USICNT_gc(x) (x & 0x0F)

/* Start Condition Interrupt Enable */
#define USI_USISIE_CLEAR_gc (0x00) /* Start Condition Interrupt Enable - CLEAR */
#define USI_USISIE_SET_gc   (0x80) /* Start Condition Interrupt Enable - SET */


/* Counter Overflow Interrupt Enable */
#define USI_USIOIE_CLEAR_gc (0x00) /* Counter Overflow Interrupt Enable - CLEAR */
#define USI_USIOIE_SET_gc   (0x40) /* Counter Overflow Interrupt Enable - SET */


/* USI Wire Mode Bits */
#define USI_USIWM_VAL_0x00_gc (0x00<<4) /* Normal Operation */
#define USI_USIWM_VAL_0x01_gc (0x01<<4) /* Three-Wire Mode */
#define USI_USIWM_VAL_0x02_gc (0x02<<4) /* Two-Wire Mode */
#define USI_USIWM_VAL_0x03_gc (0x03<<4) /* Two-Wire Mode Held Low */


/* USI Clock Source Select Bits */
#define USI_USICR_USICS_gc(x) ((x<<2) & 0x0C)

/* Clock Strobe */
#define USI_USICLK_CLEAR_gc (0x00) /* Clock Strobe - CLEAR */
#define USI_USICLK_SET_gc   (0x02) /* Clock Strobe - SET */


/* Toggle Clock Port Pin */
#define USI_USITC_CLEAR_gc (0x00) /* Toggle Clock Port Pin - CLEAR */
#define USI_USITC_SET_gc   (0x01) /* Toggle Clock Port Pin - SET */


/*
--------------------------------------------------------------------------------
USART - USART
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
USART - USART
--------------------------------------------------------------------------------
*/


/* USART Receive Complete */
#define USART0_RXC0_CLEAR_gc (0x00) /* USART Receive Complete - CLEAR */
#define USART0_RXC0_SET_gc   (0x80) /* USART Receive Complete - SET */


/* USART Transmitt Complete */
#define USART0_TXC0_CLEAR_gc (0x00) /* USART Transmitt Complete - CLEAR */
#define USART0_TXC0_SET_gc   (0x40) /* USART Transmitt Complete - SET */


/* USART Data Register Empty */
#define USART0_UDRE0_CLEAR_gc (0x00) /* USART Data Register Empty - CLEAR */
#define USART0_UDRE0_SET_gc   (0x20) /* USART Data Register Empty - SET */


/* Framing Error */
#define USART0_FE0_CLEAR_gc (0x00) /* Framing Error - CLEAR */
#define USART0_FE0_SET_gc   (0x10) /* Framing Error - SET */


/* Data overRun */
#define USART0_DOR0_CLEAR_gc (0x00) /* Data overRun - CLEAR */
#define USART0_DOR0_SET_gc   (0x08) /* Data overRun - SET */


/* Parity Error */
#define USART0_UPE0_CLEAR_gc (0x00) /* Parity Error - CLEAR */
#define USART0_UPE0_SET_gc   (0x04) /* Parity Error - SET */


/* Double the USART transmission speed */
#define USART0_U2X0_CLEAR_gc (0x00) /* Double the USART transmission speed - CLEAR */
#define USART0_U2X0_SET_gc   (0x02) /* Double the USART transmission speed - SET */


/* Multi-processor Communication Mode */
#define USART0_MPCM0_CLEAR_gc (0x00) /* Multi-processor Communication Mode - CLEAR */
#define USART0_MPCM0_SET_gc   (0x01) /* Multi-processor Communication Mode - SET */


/* RX Complete Interrupt Enable */
#define USART0_RXCIE0_CLEAR_gc (0x00) /* RX Complete Interrupt Enable - CLEAR */
#define USART0_RXCIE0_SET_gc   (0x80) /* RX Complete Interrupt Enable - SET */


/* TX Complete Interrupt Enable */
#define USART0_TXCIE0_CLEAR_gc (0x00) /* TX Complete Interrupt Enable - CLEAR */
#define USART0_TXCIE0_SET_gc   (0x40) /* TX Complete Interrupt Enable - SET */


/* USART Data register Empty Interrupt Enable */
#define USART0_UDRIE0_CLEAR_gc (0x00) /* USART Data register Empty Interrupt Enable - CLEAR */
#define USART0_UDRIE0_SET_gc   (0x20) /* USART Data register Empty Interrupt Enable - SET */


/* Receiver Enable */
#define USART0_RXEN0_CLEAR_gc (0x00) /* Receiver Enable - CLEAR */
#define USART0_RXEN0_SET_gc   (0x10) /* Receiver Enable - SET */


/* Transmitter Enable */
#define USART0_TXEN0_CLEAR_gc (0x00) /* Transmitter Enable - CLEAR */
#define USART0_TXEN0_SET_gc   (0x08) /* Transmitter Enable - SET */


/* Character Size */
#define USART0_UCSZ02_CLEAR_gc (0x00) /* Character Size - CLEAR */
#define USART0_UCSZ02_SET_gc   (0x04) /* Character Size - SET */


/* Receive Data Bit 8 */
#define USART0_RXB80_CLEAR_gc (0x00) /* Receive Data Bit 8 - CLEAR */
#define USART0_RXB80_SET_gc   (0x02) /* Receive Data Bit 8 - SET */


/* Transmit Data Bit 8 */
#define USART0_TXB80_CLEAR_gc (0x00) /* Transmit Data Bit 8 - CLEAR */
#define USART0_TXB80_SET_gc   (0x01) /* Transmit Data Bit 8 - SET */


/* USART Mode Select */
#define USART0_UMSEL0_VAL_0x00_gc (0x00<<6) /* Asynchronous USART */
#define USART0_UMSEL0_VAL_0x01_gc (0x01<<6) /* Synchronous USART */
#define USART0_UMSEL0_VAL_0x03_gc (0x03<<6) /* Master SPI */


/* Parity Mode Bits */
#define USART0_UPM0_VAL_0x00_gc (0x00<<4) /* Disabled */
#define USART0_UPM0_VAL_0x01_gc (0x01<<4) /* Reserved */
#define USART0_UPM0_VAL_0x02_gc (0x02<<4) /* Enabled, Even Parity */
#define USART0_UPM0_VAL_0x03_gc (0x03<<4) /* Enabled, Odd Parity */


/* Stop Bit Select */
#define USART0_USBS0_VAL_0x00_gc (0x00<<3) /* 1-bit */
#define USART0_USBS0_VAL_0x01_gc (0x01<<3) /* 2-bit */


/* Character Size */
#define USART0_UCSR0C_UCSZ0_gc(x) ((x<<1) & 0x06)

/* Clock Polarity */
#define USART0_UCPOL0_CLEAR_gc (0x00) /* Clock Polarity - CLEAR */
#define USART0_UCPOL0_SET_gc   (0x01) /* Clock Polarity - SET */


/* USART RX Start Interrupt Enable */
#define USART0_RXSIE0_CLEAR_gc (0x00) /* USART RX Start Interrupt Enable - CLEAR */
#define USART0_RXSIE0_SET_gc   (0x80) /* USART RX Start Interrupt Enable - SET */


/* USART RX Start Flag */
#define USART0_RXS0_CLEAR_gc (0x00) /* USART RX Start Flag - CLEAR */
#define USART0_RXS0_SET_gc   (0x40) /* USART RX Start Flag - SET */


/* USART RX Start Frame Detection Enable */
#define USART0_SFDE0_CLEAR_gc (0x00) /* USART RX Start Frame Detection Enable - CLEAR */
#define USART0_SFDE0_SET_gc   (0x20) /* USART RX Start Frame Detection Enable - SET */


/* USART Receive Complete */
#define USART1_RXC1_CLEAR_gc (0x00) /* USART Receive Complete - CLEAR */
#define USART1_RXC1_SET_gc   (0x80) /* USART Receive Complete - SET */


/* USART Transmitt Complete */
#define USART1_TXC1_CLEAR_gc (0x00) /* USART Transmitt Complete - CLEAR */
#define USART1_TXC1_SET_gc   (0x40) /* USART Transmitt Complete - SET */


/* USART Data Register Empty */
#define USART1_UDRE1_CLEAR_gc (0x00) /* USART Data Register Empty - CLEAR */
#define USART1_UDRE1_SET_gc   (0x20) /* USART Data Register Empty - SET */


/* Framing Error */
#define USART1_FE1_CLEAR_gc (0x00) /* Framing Error - CLEAR */
#define USART1_FE1_SET_gc   (0x10) /* Framing Error - SET */


/* Data overRun */
#define USART1_DOR1_CLEAR_gc (0x00) /* Data overRun - CLEAR */
#define USART1_DOR1_SET_gc   (0x08) /* Data overRun - SET */


/* Parity Error */
#define USART1_UPE1_CLEAR_gc (0x00) /* Parity Error - CLEAR */
#define USART1_UPE1_SET_gc   (0x04) /* Parity Error - SET */


/* Double the USART transmission speed */
#define USART1_U2X1_CLEAR_gc (0x00) /* Double the USART transmission speed - CLEAR */
#define USART1_U2X1_SET_gc   (0x02) /* Double the USART transmission speed - SET */


/* Multi-processor Communication Mode */
#define USART1_MPCM1_CLEAR_gc (0x00) /* Multi-processor Communication Mode - CLEAR */
#define USART1_MPCM1_SET_gc   (0x01) /* Multi-processor Communication Mode - SET */


/* RX Complete Interrupt Enable */
#define USART1_RXCIE1_CLEAR_gc (0x00) /* RX Complete Interrupt Enable - CLEAR */
#define USART1_RXCIE1_SET_gc   (0x80) /* RX Complete Interrupt Enable - SET */


/* TX Complete Interrupt Enable */
#define USART1_TXCIE1_CLEAR_gc (0x00) /* TX Complete Interrupt Enable - CLEAR */
#define USART1_TXCIE1_SET_gc   (0x40) /* TX Complete Interrupt Enable - SET */


/* USART Data register Empty Interrupt Enable */
#define USART1_UDRIE1_CLEAR_gc (0x00) /* USART Data register Empty Interrupt Enable - CLEAR */
#define USART1_UDRIE1_SET_gc   (0x20) /* USART Data register Empty Interrupt Enable - SET */


/* Receiver Enable */
#define USART1_RXEN1_CLEAR_gc (0x00) /* Receiver Enable - CLEAR */
#define USART1_RXEN1_SET_gc   (0x10) /* Receiver Enable - SET */


/* Transmitter Enable */
#define USART1_TXEN1_CLEAR_gc (0x00) /* Transmitter Enable - CLEAR */
#define USART1_TXEN1_SET_gc   (0x08) /* Transmitter Enable - SET */


/* Character Size */
#define USART1_UCSZ12_CLEAR_gc (0x00) /* Character Size - CLEAR */
#define USART1_UCSZ12_SET_gc   (0x04) /* Character Size - SET */


/* Receive Data Bit 8 */
#define USART1_RXB81_CLEAR_gc (0x00) /* Receive Data Bit 8 - CLEAR */
#define USART1_RXB81_SET_gc   (0x02) /* Receive Data Bit 8 - SET */


/* Transmit Data Bit 8 */
#define USART1_TXB81_CLEAR_gc (0x00) /* Transmit Data Bit 8 - CLEAR */
#define USART1_TXB81_SET_gc   (0x01) /* Transmit Data Bit 8 - SET */


/* USART Mode Select */
#define USART1_UMSEL1_VAL_0x00_gc (0x00<<6) /* Asynchronous USART */
#define USART1_UMSEL1_VAL_0x01_gc (0x01<<6) /* Synchronous USART */
#define USART1_UMSEL1_VAL_0x03_gc (0x03<<6) /* Master SPI */


/* Parity Mode Bits */
#define USART1_UPM1_VAL_0x00_gc (0x00<<4) /* Disabled */
#define USART1_UPM1_VAL_0x01_gc (0x01<<4) /* Reserved */
#define USART1_UPM1_VAL_0x02_gc (0x02<<4) /* Enabled, Even Parity */
#define USART1_UPM1_VAL_0x03_gc (0x03<<4) /* Enabled, Odd Parity */


/* Stop Bit Select */
#define USART1_USBS1_VAL_0x00_gc (0x00<<3) /* 1-bit */
#define USART1_USBS1_VAL_0x01_gc (0x01<<3) /* 2-bit */


/* Character Size */
#define USART1_UCSR1C_UCSZ1_gc(x) ((x<<1) & 0x06)

/* Clock Polarity */
#define USART1_UCPOL1_CLEAR_gc (0x00) /* Clock Polarity - CLEAR */
#define USART1_UCPOL1_SET_gc   (0x01) /* Clock Polarity - SET */


/* USART RX Start Interrupt Enable */
#define USART1_RXSIE1_CLEAR_gc (0x00) /* USART RX Start Interrupt Enable - CLEAR */
#define USART1_RXSIE1_SET_gc   (0x80) /* USART RX Start Interrupt Enable - SET */


/* USART RX Start Flag */
#define USART1_RXS1_CLEAR_gc (0x00) /* USART RX Start Flag - CLEAR */
#define USART1_RXS1_SET_gc   (0x40) /* USART RX Start Flag - SET */


/* USART RX Start Frame Detection Enable */
#define USART1_SFDE1_CLEAR_gc (0x00) /* USART RX Start Frame Detection Enable - CLEAR */
#define USART1_SFDE1_SET_gc   (0x20) /* USART RX Start Frame Detection Enable - SET */


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
#define WDT_WDP_VAL_0x00_gc (0x00) /* Oscillator Cycles 512 (16 ms) */
#define WDT_WDP_VAL_0x01_gc (0x01) /* Oscillator Cycles 1K (32 ms) */
#define WDT_WDP_VAL_0x02_gc (0x02) /* Oscillator Cycles 2K (64 ms) */
#define WDT_WDP_VAL_0x03_gc (0x03) /* Oscillator Cycles 4K (0.125 s) */
#define WDT_WDP_VAL_0x04_gc (0x04) /* Oscillator Cycles 8K (0.25 s) */
#define WDT_WDP_VAL_0x05_gc (0x05) /* Oscillator Cycles 16K (0.5 s) */
#define WDT_WDP_VAL_0x06_gc (0x06) /* Oscillator Cycles 32K (1.0 s) */
#define WDT_WDP_VAL_0x07_gc (0x07) /* Oscillator Cycles 64K (2.0 s) */
#define WDT_WDP_VAL_0x08_gc (0x08) /* Oscillator Cycles 128K (4.0 s) */
#define WDT_WDP_VAL_0x09_gc (0x09) /* Oscillator Cycles 256K (8.0 s) */


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


/* TWI - Two Wire Serial Interface (0x0000) */
#define TWI_BASE        _SFR_MEM8 (0x0000) /* TWI Base Address */
#define TWI_TWSD        _SFR_MEM8 (0x007A) /* TWI Slave Data Register */
#define TWI_TWSAM       _SFR_MEM8 (0x007B) /* TWI Slave Address Mask Register */
#define TWI_TWSA        _SFR_MEM8 (0x007C) /* TWI Slave Address Register */
#define TWI_TWSSRA      _SFR_MEM8 (0x007D) /* TWI Slave Status Register A */
#define TWI_TWSCRB      _SFR_MEM8 (0x007E) /* TWI Slave Control Register B */
#define TWI_TWSCRA      _SFR_MEM8 (0x007F) /* TWI Slave Control Register A */

/* PORTB - I/O Port (0x0000) */
#define PORTBB_BASE     _SFR_MEM8 (0x0000) /* PORTBB Base Address */
#define PORTBB_PINB     _SFR_MEM8 (0x002B) /* Port B Data register */
#define PORTBB_DDRB     _SFR_MEM8 (0x002C) /* Data Direction Register, Port B */
#define PORTBB_PORTB    _SFR_MEM8 (0x002D) /* Input Pins, Port B */
#define PORTBB_PUEB     _SFR_MEM8 (0x002E) /* Pull-up Enable Control Register */
#define PORTBB_PORTCR   _SFR_MEM8 (0x0033) /* Port Control Register */

/* PORTC - I/O Port (0x0000) */
#define PORTCC_BASE     _SFR_MEM8 (0x0000) /* PORTCC Base Address */
#define PORTCC_PINC     _SFR_MEM8 (0x0027) /* Port C Input Pins */
#define PORTCC_DDRC     _SFR_MEM8 (0x0028) /* Data Direction Register, Port C */
#define PORTCC_PORTC    _SFR_MEM8 (0x0029) /* Port C Data Register */
#define PORTCC_PUEC     _SFR_MEM8 (0x002A) /* Pull-up Enable Control Register */
#define PORTCC_PORTCR   _SFR_MEM8 (0x0033) /* Port Control Register */

/* PORTA - I/O Port (0x0000) */
#define PORTAA_BASE     _SFR_MEM8 (0x0000) /* PORTAA Base Address */
#define PORTAA_PINA     _SFR_MEM8 (0x002F) /* Port A Input Pins */
#define PORTAA_DDRA     _SFR_MEM8 (0x0030) /* Data Direction Register, Port A */
#define PORTAA_PORTA    _SFR_MEM8 (0x0031) /* Port A Data Register */
#define PORTAA_PUEA     _SFR_MEM8 (0x0032) /* Pull-up Enable Control Register */
#define PORTAA_PORTCR   _SFR_MEM8 (0x0033) /* Port Control Register */

/* ADC - Analog-to-Digital Converter (0x0000) */
#define ADC_BASE        _SFR_MEM16(0x0000) /* ADC Base Address */
#define ADC_ADC         _SFR_MEM16(0x0020) /* ADC Data Register  Bytes */
#define ADC_ADCL        _SFR_MEM8 (0x0020) /* ADC Data Register  Bytes LOW BYTE */
#define ADC_ADCH        _SFR_MEM8 (0x0021) /* ADC Data Register  Bytes HIGH BYTE */
#define ADC_ADCSRB      _SFR_MEM8 (0x0022) /* ADC Control and Status Register B */
#define ADC_ADCSRA      _SFR_MEM8 (0x0023) /* The ADC Control and Status register */
#define ADC_ADMUX       _SFR_MEM8 (0x0024) /* The ADC multiplexer Selection Register */
#define ADC_DIDR0       _SFR_MEM8 (0x0060) /* Digital Input Disable Register 0 */
#define ADC_DIDR1       _SFR_MEM8 (0x0061) /* Digital Input Disable Register 1 */
#define ADC_DIDR2       _SFR_MEM8 (0x0062) /* Digital Input Disable Register 2 */

/* AC - Analog Comparator (0x0000) */
#define AC_BASE         _SFR_MEM8 (0x0000) /* AC Base Address */
#define AC_ACSRB        _SFR_MEM8 (0x0025) /* Analog Comparator Control And Status Register B */
#define AC_ACSRA        _SFR_MEM8 (0x0026) /* Analog Comparator Control And Status Register A */

/* EEPROM - EEPROM (0x0000) */
#define EEPROM_BASE     _SFR_MEM8 (0x0000) /* EEPROM Base Address */
#define EEPROM_EECR     _SFR_MEM8 (0x003C) /* EEPROM Control Register */
#define EEPROM_EEDR     _SFR_MEM8 (0x003D) /* EEPROM Data Register */
#define EEPROM_EEAR     _SFR_MEM16(0x003E) /* EEPROM Read/Write Access */
#define EEPROM_EEARL    _SFR_MEM8 (0x003E) /* EEPROM Read/Write Access LOW BYTE */
#define EEPROM_EEARH    _SFR_MEM8 (0x003F) /* EEPROM Read/Write Access HIGH BYTE */

/* TC1 - Timer/Counter, 16-bit (0x0000) */
#define TC16_BASE       _SFR_MEM8 (0x0000) /* TC16 Base Address */
#define TC16_TIFR       _SFR_MEM8 (0x0059) /* Timer/Counter Interrupt Flag register */
#define TC16_TIMSK      _SFR_MEM8 (0x005A) /* Timer/Counter Interrupt Mask Register */
#define TC16_GTCCR      _SFR_MEM8 (0x0067) /* General Timer/Counter Control Register */
#define TC16_ICR1       _SFR_MEM16(0x0068) /* Timer/Counter1 Input Capture Register  Bytes */
#define TC16_ICR1L      _SFR_MEM8 (0x0068) /* Timer/Counter1 Input Capture Register  Bytes LOW BYTE */
#define TC16_ICR1H      _SFR_MEM8 (0x0069) /* Timer/Counter1 Input Capture Register  Bytes HIGH BYTE */
#define TC16_OCR1B      _SFR_MEM16(0x006A) /* Timer/Counter1 Output Compare Register  Bytes */
#define TC16_OCR1BL     _SFR_MEM8 (0x006A) /* Timer/Counter1 Output Compare Register  Bytes LOW BYTE */
#define TC16_OCR1BH     _SFR_MEM8 (0x006B) /* Timer/Counter1 Output Compare Register  Bytes HIGH BYTE */
#define TC16_OCR1A      _SFR_MEM16(0x006C) /* Timer/Counter1 Output Compare Register  Bytes */
#define TC16_OCR1AL     _SFR_MEM8 (0x006C) /* Timer/Counter1 Output Compare Register  Bytes LOW BYTE */
#define TC16_OCR1AH     _SFR_MEM8 (0x006D) /* Timer/Counter1 Output Compare Register  Bytes HIGH BYTE */
#define TC16_TCNT1      _SFR_MEM16(0x006E) /* Timer/Counter1  Bytes */
#define TC16_TCNT1L     _SFR_MEM8 (0x006E) /* Timer/Counter1  Bytes LOW BYTE */
#define TC16_TCNT1H     _SFR_MEM8 (0x006F) /* Timer/Counter1  Bytes HIGH BYTE */
#define TC16_TCCR1C     _SFR_MEM8 (0x0070) /* Timer/Counter1 Control Register C */
#define TC16_TCCR1B     _SFR_MEM8 (0x0071) /* Timer/Counter1 Control Register B */
#define TC16_TCCR1A     _SFR_MEM8 (0x0072) /* Timer/Counter1 Control Register A */

/* TC0 - Timer/Counter, 8-bit (0x0000) */
#define TC8_BASE        _SFR_MEM8 (0x0000) /* TC8 Base Address */
#define TC8_OCR0B       _SFR_MEM8 (0x0037) /* Timer/Counter0 Output Compare Register */
#define TC8_OCR0A       _SFR_MEM8 (0x0038) /* Timer/Counter0 Output Compare Register */
#define TC8_TCNT0       _SFR_MEM8 (0x0039) /* Timer/Counter0 */
#define TC8_TCCR0B      _SFR_MEM8 (0x003A) /* Timer/Counter Control Register B */
#define TC8_TCCR0A      _SFR_MEM8 (0x003B) /* Timer/Counter  Control Register A */
#define TC8_TIFR        _SFR_MEM8 (0x0059) /* Timer/Counter Interrupt Flag register */
#define TC8_TIMSK       _SFR_MEM8 (0x005A) /* Timer/Counter Interrupt Mask Register */
#define TC8_GTCCR       _SFR_MEM8 (0x0067) /* General Timer/Counter Control Register */

/* EXINT - External Interrupts (0x0000) */
#define EXINT_BASE      _SFR_MEM8 (0x0000) /* EXINT Base Address */
#define EXINT_PCMSK0    _SFR_MEM8 (0x0047) /* Pin Change Mask Register 0 */
#define EXINT_PCMSK1    _SFR_MEM8 (0x0048) /* Pin Change Mask Register 1 */
#define EXINT_PCMSK2    _SFR_MEM8 (0x0049) /* Pin Change Mask Register 2 */
#define EXINT_GIFR      _SFR_MEM8 (0x005B) /* General Interrupt Flag Register */
#define EXINT_GIMSK     _SFR_MEM8 (0x005C) /* General Interrupt Mask Register */

/* CPU - CPU Registers (0x0000) */
#define CPU_BASE        _SFR_MEM8 (0x0000) /* CPU Base Address */
#define CPU_GPIOR0      _SFR_MEM8 (0x0034) /* General Purpose I/O Register 0 */
#define CPU_GPIOR1      _SFR_MEM8 (0x0035) /* General Purpose I/O Register 1 */
#define CPU_GPIOR2      _SFR_MEM8 (0x0036) /* General Purpose I/O Register 2 */
#define CPU_CCP         _SFR_MEM8 (0x004F) /* Configuration Change Protection */
#define CPU_CLKSR       _SFR_MEM8 (0x0052) /* Clock Setting Register */
#define CPU_CLKPR       _SFR_MEM8 (0x0053) /* Clock Prescale Register */
#define CPU_PRR         _SFR_MEM8 (0x0054) /* Power Reduction Register */
#define CPU_MCUSR       _SFR_MEM8 (0x0055) /* MCU Status Register */
#define CPU_MCUCR       _SFR_MEM8 (0x0056) /* MCU Control Register */
#define CPU_SPMCSR      _SFR_MEM8 (0x0057) /* Store Program Memory Control and Status Register */
#define CPU_SP          _SFR_MEM16(0x005D) /* Stack Pointer  */
#define CPU_SPL         _SFR_MEM8 (0x005D) /* Stack Pointer  LOW BYTE */
#define CPU_SPH         _SFR_MEM8 (0x005E) /* Stack Pointer  HIGH BYTE */
#define CPU_SREG        _SFR_MEM8 (0x005F) /* Status Register */
#define CPU_OSCCAL0     _SFR_MEM8 (0x0063) /* Oscillator Calibration Value */
#define CPU_OSCTCAL0A   _SFR_MEM8 (0x0064) 
#define CPU_OSCTCAL0B   _SFR_MEM8 (0x0065) 
#define CPU_OSCCAL1     _SFR_MEM8 (0x0066) 

/* USI - Universal Serial Interface (0x0000) */
#define USI_BASE        _SFR_MEM8 (0x0000) /* USI Base Address */
#define USI_USICR       _SFR_MEM8 (0x004A) /* USI Control Register */
#define USI_USISR       _SFR_MEM8 (0x004B) /* USI Status Register */
#define USI_USIDR       _SFR_MEM8 (0x004C) /* USI Data Register */
#define USI_USIBR       _SFR_MEM8 (0x004D) /* USI Buffer Register */

/* USART0 - USART (0x0000) */
#define USART00_BASE    _SFR_MEM8 (0x0000) /* USART00 Base Address */
#define USART00_UDR0    _SFR_MEM8 (0x0040) /* USART I/O Data Register */
#define USART00_UBRR0   _SFR_MEM16(0x0041) /* USART Baud Rate Register  Bytes */
#define USART00_UBRR0L  _SFR_MEM8 (0x0041) /* USART Baud Rate Register  Bytes LOW BYTE */
#define USART00_UBRR0H  _SFR_MEM8 (0x0042) /* USART Baud Rate Register  Bytes HIGH BYTE */
#define USART00_UCSR0D  _SFR_MEM8 (0x0043) /* USART Control and Status Register D */
#define USART00_UCSR0C  _SFR_MEM8 (0x0044) /* USART Control and Status Register C */
#define USART00_UCSR0B  _SFR_MEM8 (0x0045) /* USART Control and Status Register B */
#define USART00_UCSR0A  _SFR_MEM8 (0x0046) /* USART Control and Status Register A */

/* USART1 - USART (0x0000) */
#define USART11_BASE    _SFR_MEM8 (0x0000) /* USART11 Base Address */
#define USART11_UDR1    _SFR_MEM8 (0x0073) /* USART I/O Data Register */
#define USART11_UBRR1   _SFR_MEM16(0x0074) /* USART Baud Rate Register  Bytes */
#define USART11_UBRR1L  _SFR_MEM8 (0x0074) /* USART Baud Rate Register  Bytes LOW BYTE */
#define USART11_UBRR1H  _SFR_MEM8 (0x0075) /* USART Baud Rate Register  Bytes HIGH BYTE */
#define USART11_UCSR1D  _SFR_MEM8 (0x0076) /* USART Control and Status Register D */
#define USART11_UCSR1C  _SFR_MEM8 (0x0077) /* USART Control and Status Register C */
#define USART11_UCSR1B  _SFR_MEM8 (0x0078) /* USART Control and Status Register B */
#define USART11_UCSR1A  _SFR_MEM8 (0x0079) /* USART Control and Status Register A */

/* WDT - Watchdog Timer (0x0000) */
#define WDT_BASE        _SFR_MEM8 (0x0000) /* WDT Base Address */
#define WDT_WDTCSR      _SFR_MEM8 (0x0050) /* Watchdog Timer Control and Status Register */

/* FUSE - Fuses (0x0000) */
#define FUSE_BASE       _SFR_MEM8 (0x0000) /* FUSE Base Address */
#define FUSE_LOW        _SFR_MEM8 (0x0000) 
#define FUSE_HIGH       _SFR_MEM8 (0x0001) 
#define FUSE_EXTENDED   _SFR_MEM8 (0x0002) 

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
#define None_RESET_vect_num        (0)                 
#define None_RESET_vect            _VECTOR(0)          /* External Pin, Power-on Reset, Brown-out Reset and Watchdog Reset */
#define None_INT0_vect_num         (1)                 
#define None_INT0_vect             _VECTOR(1)          /* External Interrupt Request 0 */
#define None_PCINT0_vect_num       (2)                 
#define None_PCINT0_vect           _VECTOR(2)          /* Pin Change Interrupt Request 0 */
#define None_PCINT1_vect_num       (3)                 
#define None_PCINT1_vect           _VECTOR(3)          /* Pin Change Interrupt Request 1 */
#define None_PCINT2_vect_num       (4)                 
#define None_PCINT2_vect           _VECTOR(4)          /* Pin Change Interrupt Request 2 */
#define None_WDT_vect_num          (5)                 
#define None_WDT_vect              _VECTOR(5)          /* Watchdog Time-out Interrupt */
#define None_TIMER1_CAPT_vect_num  (6)                 
#define None_TIMER1_CAPT_vect      _VECTOR(6)          /* Timer/Counter1 Capture Event */
#define None_TIM1_CAPT_vect_num    (6)                 
#define None_TIM1_CAPT_vect        _VECTOR(6)          /* Timer/Counter1 Capture Event */
#define None_TIMER1_COMPA_vect_num (7)                 
#define None_TIMER1_COMPA_vect     _VECTOR(7)          /* Timer/Counter1 Compare Match A */
#define None_TIM1_COMPA_vect_num   (7)                 
#define None_TIM1_COMPA_vect       _VECTOR(7)          /* Timer/Counter1 Compare Match A */
#define None_TIMER1_COMPB_vect_num (8)                 
#define None_TIMER1_COMPB_vect     _VECTOR(8)          /* Timer/Counter1 Compare Match B */
#define None_TIM1_COMPB_vect_num   (8)                 
#define None_TIM1_COMPB_vect       _VECTOR(8)          /* Timer/Counter1 Compare Match B */
#define None_TIMER1_OVF_vect_num   (9)                 
#define None_TIMER1_OVF_vect       _VECTOR(9)          /* Timer/Counter1 Overflow */
#define None_TIM1_OVF_vect_num     (9)                 
#define None_TIM1_OVF_vect         _VECTOR(9)          /* Timer/Counter1 Overflow */
#define None_TIMER0_COMPA_vect_num (10)                
#define None_TIMER0_COMPA_vect     _VECTOR(10)         /* TimerCounter0 Compare Match A */
#define None_TIM0_COMPA_vect_num   (10)                
#define None_TIM0_COMPA_vect       _VECTOR(10)         /* TimerCounter0 Compare Match A */
#define None_TIMER0_COMPB_vect_num (11)                
#define None_TIMER0_COMPB_vect     _VECTOR(11)         /* TimerCounter0 Compare Match B */
#define None_TIM0_COMPB_vect_num   (11)                
#define None_TIM0_COMPB_vect       _VECTOR(11)         /* TimerCounter0 Compare Match B */
#define None_TIMER0_OVF_vect_num   (12)                
#define None_TIMER0_OVF_vect       _VECTOR(12)         /* Timer/Couner0 Overflow */
#define None_TIM0_OVF_vect_num     (12)                
#define None_TIM0_OVF_vect         _VECTOR(12)         /* Timer/Couner0 Overflow */
#define None_ANA_COMP_vect_num     (13)                
#define None_ANA_COMP_vect         _VECTOR(13)         /* Analog Comparator */
#define None_ADC_vect_num          (14)                
#define None_ADC_vect              _VECTOR(14)         /* ADC Conversion Complete */
#define None_ADC_READY_vect_num    (14)                
#define None_ADC_READY_vect        _VECTOR(14)         /* ADC Conversion Complete */
#define None_USART0_START_vect_num (15)                
#define None_USART0_START_vect     _VECTOR(15)         /* USART0, Start */
#define None_USART0_RXS_vect_num   (15)                
#define None_USART0_RXS_vect       _VECTOR(15)         /* USART0, Start */
#define None_USART0_RX_vect_num    (16)                
#define None_USART0_RX_vect        _VECTOR(16)         /* USART0, Rx Complete */
#define None_USART0_RXC_vect_num   (16)                
#define None_USART0_RXC_vect       _VECTOR(16)         /* USART0, Rx Complete */
#define None_USART0_UDRE_vect_num  (17)                
#define None_USART0_UDRE_vect      _VECTOR(17)         /* USART0 Data Register Empty */
#define None_USART0_DRE_vect_num   (17)                
#define None_USART0_DRE_vect       _VECTOR(17)         /* USART0 Data Register Empty */
#define None_USART0_TX_vect_num    (18)                
#define None_USART0_TX_vect        _VECTOR(18)         /* USART0, Tx Complete */
#define None_USART0_TXC_vect_num   (18)                
#define None_USART0_TXC_vect       _VECTOR(18)         /* USART0, Tx Complete */
#define None_USART1_START_vect_num (19)                
#define None_USART1_START_vect     _VECTOR(19)         /* USART1, Start */
#define None_USART1_RXS_vect_num   (19)                
#define None_USART1_RXS_vect       _VECTOR(19)         /* USART1, Start */
#define None_USART1_RX_vect_num    (20)                
#define None_USART1_RX_vect        _VECTOR(20)         /* USART1, Rx Complete */
#define None_USART1_RXC_vect_num   (20)                
#define None_USART1_RXC_vect       _VECTOR(20)         /* USART1, Rx Complete */
#define None_USART1_UDRE_vect_num  (21)                
#define None_USART1_UDRE_vect      _VECTOR(21)         /* USART1 Data Register Empty */
#define None_USART1_DRE_vect_num   (21)                
#define None_USART1_DRE_vect       _VECTOR(21)         /* USART1 Data Register Empty */
#define None_USART1_TX_vect_num    (22)                
#define None_USART1_TX_vect        _VECTOR(22)         /* USART1, Tx Complete */
#define None_USART1_TXC_vect_num   (22)                
#define None_USART1_TXC_vect       _VECTOR(22)         /* USART1, Tx Complete */
#define None_USI_START_vect_num    (23)                
#define None_USI_START_vect        _VECTOR(23)         /* USI Start Condition */
#define None_USI_STR_vect_num      (23)                
#define None_USI_STR_vect          _VECTOR(23)         /* USI Start Condition */
#define None_USI_OVERFLOW_vect_num (24)                
#define None_USI_OVERFLOW_vect     _VECTOR(24)         /* USI Overflow */
#define None_USI_OVF_vect_num      (24)                
#define None_USI_OVF_vect          _VECTOR(24)         /* USI Overflow */
#define None_TWI_SLAVE_vect_num    (25)                
#define None_TWI_SLAVE_vect        _VECTOR(25)         /* Two-wire Serial Interface */
#define None_TWI_vect_num          (25)                
#define None_TWI_vect              _VECTOR(25)         /* Two-wire Serial Interface */
#define None_EE_RDY_vect_num       (26)                
#define None_EE_RDY_vect           _VECTOR(26)         /* EEPROM Ready */
#define None_QTRIP_vect_num        (27)                
#define None_QTRIP_vect            _VECTOR(27)         /* Touch Sensing */

/* Vector Table Size */
#define _VECTOR_SIZE               (4)                 /* Size of individual vector. */
#define _VECTORS_SIZE              (28 * _VECTOR_SIZE) /* Size of all vectors */
/*
================================================================================
Constants
================================================================================
*/

#define PROGMEM_START   (0x0000)                           
#define PROGMEM_SIZE    (0x4000)                           
#define PROGMEM_END     (PROGMEM_START + PROGMEM_SIZE - 1) 

#define FLASH_START     (0x0000)                           
#define FLASH_SIZE      (0x4000)                           
#define FLASH_PAGE_SIZE (0x0020)                           
#define FLASH_END       (FLASH_START + FLASH_SIZE - 1)     

#define SIGNATURESMEM_START  (0x0000)                                       
#define SIGNATURESMEM_SIZE   (0x0003)                                       
#define SIGNATURESMEM_END    (SIGNATURESMEM_START + SIGNATURESMEM_SIZE - 1) 

#define SIGNATURES_START     (0x0000)                                       
#define SIGNATURES_SIZE      (0x0003)                                       
#define SIGNATURES_PAGE_SIZE (0x0001)                                       
#define SIGNATURES_END       (SIGNATURES_START + SIGNATURES_SIZE - 1)       

#define FUSESMEM_START  (0x0000)                             
#define FUSESMEM_SIZE   (0x0003)                             
#define FUSESMEM_END    (FUSESMEM_START + FUSESMEM_SIZE - 1) 

#define FUSES_START     (0x0000)                             
#define FUSES_SIZE      (0x0003)                             
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
#define DATAMEM_SIZE        (0x0500)                               
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
#define IRAM_SIZE           (0x0400)                               
#define IRAM_PAGE_SIZE      (0x0001)                               
#define IRAM_END            (IRAM_START + IRAM_SIZE - 1)           

#define EEPROMMEM_START         (0x0000)                               
#define EEPROMMEM_SIZE          (0x0100)                               
#define EEPROMMEM_END           (EEPROMMEM_START + EEPROMMEM_SIZE - 1) 

#define EEPROM_START            (0x0000)                               
#define EEPROM_SIZE             (0x0100)                               
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
#define PORTC0 (0) 
#define PORTC1 (1) 
#define PORTC2 (2) 
#define PORTC3 (3) 
#define PORTC4 (4) 
#define PORTC5 (5) 
#define PORTA0 (0) 
#define PORTA1 (1) 
#define PORTA2 (2) 
#define PORTA3 (3) 
#define PORTA4 (4) 
#define PORTA5 (5) 
#define PORTA6 (6) 
#define PORTA7 (7) 

/*
================================================================================
Fuses/LockBits/Signatures
================================================================================
*/

/* ============ Fuses ============ */

#define FUSE_MEMORY_SIZE 2 

/* Fuse offset 0x00 */
#define SUT_CKSEL0 (unsigned char)~_BV(0) /* Select Clock Source bit 0 */
#define SUT_CKSEL1 (unsigned char)~_BV(1) /* Select Clock Source bit 1 */
#define SUT_CKSEL2 (unsigned char)~_BV(2) /* Select Clock Source bit 2 */
#define SUT_CKSEL3 (unsigned char)~_BV(3) /* Select Clock Source bit 3 */
#define SUT_CKSEL4 (unsigned char)~_BV(4) /* Select Clock Source bit 4 */
#define CKOUT      (unsigned char)~_BV(6) /* Clock output on PORTC2 */
#define CKDIV8     (unsigned char)~_BV(7) /* Divide clock by 8 internally */

/* Fuse offset 0x01 */
#define BODLEVEL0 (unsigned char)~_BV(0) /* Brown-out Detector trigger level bit 0 */
#define BODLEVEL1 (unsigned char)~_BV(1) /* Brown-out Detector trigger level bit 1 */
#define BODLEVEL2 (unsigned char)~_BV(2) /* Brown-out Detector trigger level bit 2 */
#define EESAVE    (unsigned char)~_BV(3) /* Preserve EEPROM through the Chip Erase cycle */
#define WDTON     (unsigned char)~_BV(4) /* Watch-dog Timer always on */
#define SPIEN     (unsigned char)~_BV(5) /* Serial program downloading (SPI) enabled */
#define DWEN      (unsigned char)~_BV(6) /* Debug Wire enable */
#define RSTDISBL  (unsigned char)~_BV(7) /* Reset Disabled (Enable PC2 as i/o pin) */

/* Fuse offset 0x02 */
#define SELFPRGEN (unsigned char)~_BV(0) /* Self Programming enable */
#define BODACT0   (unsigned char)~_BV(1) /* BOD mode of operation when the device is active or idle bit 0 */
#define BODACT1   (unsigned char)~_BV(2) /* BOD mode of operation when the device is active or idle bit 1 */
#define BODPD0    (unsigned char)~_BV(3) /* BOD mode of operation when the device is in sleep mode bit 0 */
#define BODPD1    (unsigned char)~_BV(4) /* BOD mode of operation when the device is in sleep mode bit 1 */


/* ========== Lock Bits ========== */
#define __LOCK_BITS_EXIST  


/* ========== Signature ========== */
#define SIGNATURE_0 (0x1E) 
#define SIGNATURE_1 (0x94) 
#define SIGNATURE_2 (0x12) 

#endif /* #ifdef _AVR_ATtiny1634_H_INCLUDED */
