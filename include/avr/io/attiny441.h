/******************************************************************************
 *   This file is part of avr-libc3.                                          * 
 *                                                                            * 
 *   Automatically created by devtools/gen-ioheader-atdf.py (V0.91)           * 
 *                                                                            * 
 *   .atpack File: ATtiny441.atdf                                             * 
 *   .ATDF File:   atdf/ATtiny441.atdf                                        * 
 *   Version:      2.0.10                                                     * 
 *   Date:         2019-04-25                                                 * 
 *   Device:       ATtiny441                                                  * 
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
#  define _AVR_IOXXX_H_ "ioATtiny441.h"
#else
#  error "Attempt to include more than one <avr/ioXXX.h> file."
#endif

#ifndef _AVR_ATtiny441_H_INCLUDED
#  define _AVR_ATtiny441_H_INCLUDED

/*
================================================================================
Ungrouped common register
================================================================================
*/

#define GPIOR0    _SFR_MEM8 (0x33) /* General Purpose I/O Register 0 */
#define GPIOR1    _SFR_MEM8 (0x34) /* General Purpose I/O Register 1 */
#define GPIOR2    _SFR_MEM8 (0x35) /* General Purpose I/O Register 2 */

#define MCUSR     _SFR_MEM8 (0x54) /* MCU Status Register */
#define MCUCR     _SFR_MEM8 (0x55) /* MCU Control Register */

#define SPMCSR    _SFR_MEM8 (0x57) /* Store Program Memory Control and Status Register */

#define SP        _SFR_MEM16(0x5D) /* Stack Pointer  */
#define SREG      _SFR_MEM8 (0x5F) /* Status Register */

#define PRR       _SFR_MEM8 (0x70) /* Power Reduction Register */
#define CCP       _SFR_MEM8 (0x71) /* Configuration Change Protection */
#define CLKCR     _SFR_MEM8 (0x72) /* Clock Control Register */
#define CLKPR     _SFR_MEM8 (0x73) /* Clock Prescale Register */
#define OSCCAL0   _SFR_MEM8 (0x74) /* Oscillator Calibration Register 8MHz */
#define OSCTCAL0A _SFR_MEM8 (0x75) /* Oscillator Temperature Calibration Register A */
#define OSCTCAL0B _SFR_MEM8 (0x76) /* Oscillator Temperature Calibration Register B */
#define OSCCAL1   _SFR_MEM8 (0x77) /* Oscillator Calibration Register 32kHz */


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


/* Frequency selection for internal ULP oscillator. The selection only affects system clock, watchdog and reset timeout always use 32 kHz clock. */
typedef enum FUSE_ULPOSCSEL_enum
{
    FUSE_ULPOSCSEL_ULPOSC_32KHZ_gc  = (0x07<<5), /* 32 kHz */
    FUSE_ULPOSCSEL_ULPOSC_64KHZ_gc  = (0x06<<5), /* 64 kHz */
    FUSE_ULPOSCSEL_ULPOSC_128KHZ_gc = (0x05<<5), /* 128 kHz */
    FUSE_ULPOSCSEL_ULPOSC_256KHZ_gc = (0x04<<5), /* 256 kHz */
    FUSE_ULPOSCSEL_ULPOSC_512KHZ_gc = (0x03<<5), /* 512 kHz */
} FUSE_ULPOSCSEL_t;

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
    FUSE_SUT_CKSEL_INTULPOSC_32KHZ_6CK_16CK_16MS_gc       = (0x04), /* Int. ULP Osc.; Start-up time PWRDWN/RESET: 6 CK/16 CK + 16 ms */
    FUSE_SUT_CKSEL_EXTLOFXTAL_1KCK_16CK_16MS_gc           = (0x06), /* Ext. Low-Freq. Crystal; Start-up time PWRDWN/RESET: 1K CK/16 CK + 16 ms */
    FUSE_SUT_CKSEL_EXTLOFXTAL_32KCK_14CK_16MS_gc          = (0x16), /* Ext. Low-Freq. Crystal; Start-up time PWRDWN/RESET: 32K CK/16 CK + 16 ms */
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
PORT - I/O Port
--------------------------------------------------------------------------------
*/

typedef struct PORTB_struct
{
    register8_t rsv_0x00[54]; /* RESERVED REGISTER BLOCK */
    register8_t PINB;         /* Port B Data register */
    register8_t DDRB;         /* Data Direction Register, Port B */
    register8_t PORTB;        /* Input Pins, Port B */
    register8_t rsv_0x39[41]; /* RESERVED REGISTER BLOCK */
    register8_t PUEB;         /* Pull-up Enable Control Register */
    register8_t rsv_0x63;     /* RESERVED REGISTER */
    register8_t PORTCR;       /* Port Control Register */
} PORTB_t;


/*
--------------------------------------------------------------------------------
PORT - I/O Port
--------------------------------------------------------------------------------
*/

typedef struct PORTA_struct
{
    register8_t rsv_0x00[57]; /* RESERVED REGISTER BLOCK */
    register8_t PINA;         /* Port A Input Pins */
    register8_t DDRA;         /* Data Direction Register, Port A */
    register8_t PORTA;        /* Port A Data Register */
    register8_t rsv_0x3C[39]; /* RESERVED REGISTER BLOCK */
    register8_t PUEA;         /* Pull-up Enable Control Register */
    register8_t PORTCR;       /* Port Control Register */
    register8_t rsv_0x65[5];  /* RESERVED REGISTER BLOCK */
    register8_t PHDE;         /* Port High Drive Enable Register */
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
USART - USART
--------------------------------------------------------------------------------
*/

typedef struct USART1_struct
{
    register8_t rsv_0x00[144]; /* RESERVED REGISTER BLOCK */
    register8_t UDR1;          /* USART I/O Data Register */
    _REGISTER16 (UBRR1);       /* USART Baud Rate Register  Bytes */
    register8_t rsv_0x92;      /* RESERVED REGISTER */
    register8_t UCSR1D;        /* USART Control and Status Register D */
    register8_t UCSR1C;        /* USART Control and Status Register C */
    register8_t UCSR1B;        /* USART Control and Status Register B */
    register8_t UCSR1A;        /* USART Control and Status Register A */
} USART1_t;


/*
--------------------------------------------------------------------------------
USART - USART
--------------------------------------------------------------------------------
*/

typedef struct USART0_struct
{
    register8_t rsv_0x00[101]; /* RESERVED REGISTER BLOCK */
    register8_t REMAP;         /* Remap Port Pins */
    register8_t rsv_0x66[26];  /* RESERVED REGISTER BLOCK */
    register8_t UDR0;          /* USART I/O Data Register */
    _REGISTER16 (UBRR0);       /* USART Baud Rate Register  Bytes */
    register8_t rsv_0x82;      /* RESERVED REGISTER */
    register8_t UCSR0D;        /* USART Control and Status Register D */
    register8_t UCSR0C;        /* USART Control and Status Register C */
    register8_t UCSR0B;        /* USART Control and Status Register B */
    register8_t UCSR0A;        /* USART Control and Status Register A */
} USART0_t;


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

/* USART0 Pin Mapping */
typedef enum USART0_U0MAP_enum
{
    USART0_U0MAP_CLEAR_gc = (0x00), /* USART0 Pin Mapping - CLEAR */
    USART0_U0MAP_SET_gc   = (0x01), /* USART0 Pin Mapping - SET */
} USART0_U0MAP_t;

/*
--------------------------------------------------------------------------------
WDT - Watchdog Timer
--------------------------------------------------------------------------------
*/

typedef struct WDT_struct
{
    register8_t rsv_0x00[65]; /* RESERVED REGISTER BLOCK */
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
--------------------------------------------------------------------------------
TWI - Two Wire Serial Interface
--------------------------------------------------------------------------------
*/

typedef struct TWI_struct
{
    register8_t rsv_0x00[160]; /* RESERVED REGISTER BLOCK */
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

/* TWI High Noise Mode */
typedef enum TWI_TWHNM_enum
{
    TWI_TWHNM_CLEAR_gc = (0x00), /* TWI High Noise Mode - CLEAR */
    TWI_TWHNM_SET_gc   = (0x08), /* TWI High Noise Mode - SET */
} TWI_TWHNM_t;

/* TWI Acknowledge Action */
typedef enum TWI_TWAA_enum
{
    TWI_TWAA_CLEAR_gc = (0x00), /* TWI Acknowledge Action - CLEAR */
    TWI_TWAA_SET_gc   = (0x04), /* TWI Acknowledge Action - SET */
} TWI_TWAA_t;

/* TWI Slave Control Register B-TWCMD */
#define TWI_TWSCRB_TWCMD_gc(x) (x & 0x03)

/* TWI Data Interrupt Flag. */
typedef enum TWI_TWDIF_enum
{
    TWI_TWDIF_CLEAR_gc = (0x00), /* TWI Data Interrupt Flag. - CLEAR */
    TWI_TWDIF_SET_gc   = (0x80), /* TWI Data Interrupt Flag. - SET */
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

/* TWI Address Mask Bits */
#define TWI_TWSAM_TWSAM_gc(x) ((x<<1) & 0xFE)

/* TWI Address Enable */
typedef enum TWI_TWAE_enum
{
    TWI_TWAE_CLEAR_gc = (0x00), /* TWI Address Enable - CLEAR */
    TWI_TWAE_SET_gc   = (0x01), /* TWI Address Enable - SET */
} TWI_TWAE_t;

/*
--------------------------------------------------------------------------------
ADC - Analog-to-Digital Converter
--------------------------------------------------------------------------------
*/

typedef struct ADC_struct
{
    register8_t rsv_0x00[36]; /* RESERVED REGISTER BLOCK */
    register8_t ADCSRB;       /* ADC Control and Status Register B */
    register8_t ADCSRA;       /* The ADC Control and Status register */
    _REGISTER16 (ADC);        /* ADC Data Register  Bytes */
    register8_t rsv_0x27;     /* RESERVED REGISTER */
    register8_t ADMUXB;       /* The ADC multiplexer Selection Register B */
    register8_t ADMUXA;       /* The ADC multiplexer Selection Register A */
    register8_t rsv_0x2A[54]; /* RESERVED REGISTER BLOCK */
    register8_t DIDR0;        /* Digital Input Disable Register 0 */
    register8_t DIDR1;        /* Digital Input Disable Register 1 */
} ADC_t;


/* Reference Selection Bits */
#define ADC_ADMUXB_REFS_gc(x) ((x<<5) & 0xE0)

/* Gain Selection Bits */
#define ADC_ADMUXB_GSEL_gc(x) (x & 0x03)

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
    ADC_ADTS_VAL_0x01_gc = (0x01), /* Analog Comparator 0 */
    ADC_ADTS_VAL_0x02_gc = (0x02), /* External Interrupt Request 0 */
    ADC_ADTS_VAL_0x03_gc = (0x03), /* Timer/Counter0 Compare Match A */
    ADC_ADTS_VAL_0x04_gc = (0x04), /* Timer/Counter0 Overflow */
    ADC_ADTS_VAL_0x05_gc = (0x05), /* Timer/Counter1 Compare Match A */
    ADC_ADTS_VAL_0x06_gc = (0x06), /* Timer/Counter1 Overflow */
    ADC_ADTS_VAL_0x07_gc = (0x07), /* Timer/Counter1 Capture Event */
} ADC_ADTS_t;

/* ADC9 Digital Input Disable */
typedef enum ADC_ADC9D_enum
{
    ADC_ADC9D_CLEAR_gc = (0x00), /* ADC9 Digital Input Disable - CLEAR */
    ADC_ADC9D_SET_gc   = (0x08), /* ADC9 Digital Input Disable - SET */
} ADC_ADC9D_t;

/* ADC8 Digital input Disable */
typedef enum ADC_ADC8D_enum
{
    ADC_ADC8D_CLEAR_gc = (0x00), /* ADC8 Digital input Disable - CLEAR */
    ADC_ADC8D_SET_gc   = (0x04), /* ADC8 Digital input Disable - SET */
} ADC_ADC8D_t;

/* ADC10 Digital input Disable */
typedef enum ADC_ADC10D_enum
{
    ADC_ADC10D_CLEAR_gc = (0x00), /* ADC10 Digital input Disable - CLEAR */
    ADC_ADC10D_SET_gc   = (0x02), /* ADC10 Digital input Disable - SET */
} ADC_ADC10D_t;

/* ADC11 Digital input Disable */
typedef enum ADC_ADC11D_enum
{
    ADC_ADC11D_CLEAR_gc = (0x00), /* ADC11 Digital input Disable - CLEAR */
    ADC_ADC11D_SET_gc   = (0x01), /* ADC11 Digital input Disable - SET */
} ADC_ADC11D_t;

/* ADC7 Digital input Disable */
typedef enum ADC_ADC7D_enum
{
    ADC_ADC7D_CLEAR_gc = (0x00), /* ADC7 Digital input Disable - CLEAR */
    ADC_ADC7D_SET_gc   = (0x80), /* ADC7 Digital input Disable - SET */
} ADC_ADC7D_t;

/* ADC6 Digital input Disable */
typedef enum ADC_ADC6D_enum
{
    ADC_ADC6D_CLEAR_gc = (0x00), /* ADC6 Digital input Disable - CLEAR */
    ADC_ADC6D_SET_gc   = (0x40), /* ADC6 Digital input Disable - SET */
} ADC_ADC6D_t;

/* ADC5 Digital input Disable */
typedef enum ADC_ADC5D_enum
{
    ADC_ADC5D_CLEAR_gc = (0x00), /* ADC5 Digital input Disable - CLEAR */
    ADC_ADC5D_SET_gc   = (0x20), /* ADC5 Digital input Disable - SET */
} ADC_ADC5D_t;

/* ADC4/AIN11 Digital input Disable */
typedef enum ADC_ADC4D_enum
{
    ADC_ADC4D_CLEAR_gc = (0x00), /* ADC4/AIN11 Digital input Disable - CLEAR */
    ADC_ADC4D_SET_gc   = (0x10), /* ADC4/AIN11 Digital input Disable - SET */
} ADC_ADC4D_t;

/* ADC3/AIN10 Digital Input Disable */
typedef enum ADC_ADC3D_enum
{
    ADC_ADC3D_CLEAR_gc = (0x00), /* ADC3/AIN10 Digital Input Disable - CLEAR */
    ADC_ADC3D_SET_gc   = (0x08), /* ADC3/AIN10 Digital Input Disable - SET */
} ADC_ADC3D_t;

/* ADC2/AIN01 Digital input Disable */
typedef enum ADC_ADC2D_enum
{
    ADC_ADC2D_CLEAR_gc = (0x00), /* ADC2/AIN01 Digital input Disable - CLEAR */
    ADC_ADC2D_SET_gc   = (0x04), /* ADC2/AIN01 Digital input Disable - SET */
} ADC_ADC2D_t;

/* ADC1/AIN00 Digital input Disable */
typedef enum ADC_ADC1D_enum
{
    ADC_ADC1D_CLEAR_gc = (0x00), /* ADC1/AIN00 Digital input Disable - CLEAR */
    ADC_ADC1D_SET_gc   = (0x02), /* ADC1/AIN00 Digital input Disable - SET */
} ADC_ADC1D_t;

/* ADC0/AREF Digital input Disable */
typedef enum ADC_ADC0D_enum
{
    ADC_ADC0D_CLEAR_gc = (0x00), /* ADC0/AREF Digital input Disable - CLEAR */
    ADC_ADC0D_SET_gc   = (0x01), /* ADC0/AREF Digital input Disable - SET */
} ADC_ADC0D_t;

/*
--------------------------------------------------------------------------------
AC - Analog Comparator
--------------------------------------------------------------------------------
*/

typedef struct AC_struct
{
    register8_t rsv_0x00[42]; /* RESERVED REGISTER BLOCK */
    register8_t ACSR0A;       /* Analog Comparator 0 Control And Status Register A */
    register8_t ACSR0B;       /* Analog Comparator 0 Control And Status Register B */
    register8_t ACSR1A;       /* Analog Comparator 1 Control And Status Register A */
    register8_t ACSR1B;       /* Analog Comparator 1 Control And Status Register B */
} AC_t;


/* Analog Comparator 0 Hysteresis Select */
typedef enum AC_HSEL0_enum
{
    AC_HSEL0_CLEAR_gc = (0x00), /* Analog Comparator 0 Hysteresis Select - CLEAR */
    AC_HSEL0_SET_gc   = (0x80), /* Analog Comparator 0 Hysteresis Select - SET */
} AC_HSEL0_t;

/* Analog Comparator 0 Hysteresis Level */
typedef enum AC_HLEV0_enum
{
    AC_HLEV0_CLEAR_gc = (0x00), /* Analog Comparator 0 Hysteresis Level - CLEAR */
    AC_HLEV0_SET_gc   = (0x40), /* Analog Comparator 0 Hysteresis Level - SET */
} AC_HLEV0_t;

/* Analog Comparator 0 Output Pin Enable */
typedef enum AC_ACOE0_enum
{
    AC_ACOE0_CLEAR_gc = (0x00), /* Analog Comparator 0 Output Pin Enable - CLEAR */
    AC_ACOE0_SET_gc   = (0x10), /* Analog Comparator 0 Output Pin Enable - SET */
} AC_ACOE0_t;

/* Analog Comparator 0 Negative Input Multiplexer */
#define AC_ACSR0B_ACNMUX_gc(x) ((x<<2) & 0x0C)

/* Analog Comparator 0 Positive Input Multiplexer Bits 1:0 */
#define AC_ACSR0B_ACPMUX_gc(x) (x & 0x03)

/* Analog Comparator 0 Disable */
typedef enum AC_ACD0_enum
{
    AC_ACD0_CLEAR_gc = (0x00), /* Analog Comparator 0 Disable - CLEAR */
    AC_ACD0_SET_gc   = (0x80), /* Analog Comparator 0 Disable - SET */
} AC_ACD0_t;

/* Analog Comparator 0 Positive Input Multiplexer Bit 2 */
typedef enum AC_ACPMUX2_enum
{
    AC_ACPMUX2_CLEAR_gc = (0x00), /* Analog Comparator 0 Positive Input Multiplexer Bit 2 - CLEAR */
    AC_ACPMUX2_SET_gc   = (0x40), /* Analog Comparator 0 Positive Input Multiplexer Bit 2 - SET */
} AC_ACPMUX2_t;

/* Analog Comparator 0 Output */
typedef enum AC_ACO0_enum
{
    AC_ACO0_CLEAR_gc = (0x00), /* Analog Comparator 0 Output - CLEAR */
    AC_ACO0_SET_gc   = (0x20), /* Analog Comparator 0 Output - SET */
} AC_ACO0_t;

/* Analog Comparator 0 Interrupt Flag */
typedef enum AC_ACI0_enum
{
    AC_ACI0_CLEAR_gc = (0x00), /* Analog Comparator 0 Interrupt Flag - CLEAR */
    AC_ACI0_SET_gc   = (0x10), /* Analog Comparator 0 Interrupt Flag - SET */
} AC_ACI0_t;

/* Analog Comparator 0 Interrupt Enable */
typedef enum AC_ACIE0_enum
{
    AC_ACIE0_CLEAR_gc = (0x00), /* Analog Comparator 0 Interrupt Enable - CLEAR */
    AC_ACIE0_SET_gc   = (0x08), /* Analog Comparator 0 Interrupt Enable - SET */
} AC_ACIE0_t;

/* Analog Comparator 0 Input Capture Enable */
typedef enum AC_ACIC0_enum
{
    AC_ACIC0_CLEAR_gc = (0x00), /* Analog Comparator 0 Input Capture Enable - CLEAR */
    AC_ACIC0_SET_gc   = (0x04), /* Analog Comparator 0 Input Capture Enable - SET */
} AC_ACIC0_t;

/* Analog Comparator 0 Interrupt Mode Select bits */
typedef enum AC_ACIS0_enum
{
    AC_ACIS0_VAL_0x00_gc = (0x00), /* Interrupt on Toggle */
    AC_ACIS0_VAL_0x01_gc = (0x01), /* Reserved */
    AC_ACIS0_VAL_0x02_gc = (0x02), /* Interrupt on Falling Edge */
    AC_ACIS0_VAL_0x03_gc = (0x03), /* Interrupt on Rising Edge */
} AC_ACIS0_t;

/* Analog Comparator 1 Hysteresis Select */
typedef enum AC_HSEL1_enum
{
    AC_HSEL1_CLEAR_gc = (0x00), /* Analog Comparator 1 Hysteresis Select - CLEAR */
    AC_HSEL1_SET_gc   = (0x80), /* Analog Comparator 1 Hysteresis Select - SET */
} AC_HSEL1_t;

/* Analog Comparator 1 Hysteresis Level */
typedef enum AC_HLEV1_enum
{
    AC_HLEV1_CLEAR_gc = (0x00), /* Analog Comparator 1 Hysteresis Level - CLEAR */
    AC_HLEV1_SET_gc   = (0x40), /* Analog Comparator 1 Hysteresis Level - SET */
} AC_HLEV1_t;

/* Analog Comparator 1 Output Pin Enable */
typedef enum AC_ACOE1_enum
{
    AC_ACOE1_CLEAR_gc = (0x00), /* Analog Comparator 1 Output Pin Enable - CLEAR */
    AC_ACOE1_SET_gc   = (0x10), /* Analog Comparator 1 Output Pin Enable - SET */
} AC_ACOE1_t;

/* Analog Comparator 1 Multiplexer Enable */
typedef enum AC_ACME1_enum
{
    AC_ACME1_CLEAR_gc = (0x00), /* Analog Comparator 1 Multiplexer Enable - CLEAR */
    AC_ACME1_SET_gc   = (0x04), /* Analog Comparator 1 Multiplexer Enable - SET */
} AC_ACME1_t;

/* Analog Comparator 1 Disable */
typedef enum AC_ACD1_enum
{
    AC_ACD1_CLEAR_gc = (0x00), /* Analog Comparator 1 Disable - CLEAR */
    AC_ACD1_SET_gc   = (0x80), /* Analog Comparator 1 Disable - SET */
} AC_ACD1_t;

/* Analog Comparator 1 Bandgap Select */
typedef enum AC_ACBG1_enum
{
    AC_ACBG1_CLEAR_gc = (0x00), /* Analog Comparator 1 Bandgap Select - CLEAR */
    AC_ACBG1_SET_gc   = (0x40), /* Analog Comparator 1 Bandgap Select - SET */
} AC_ACBG1_t;

/* Analog Comparator 1 Output */
typedef enum AC_ACO1_enum
{
    AC_ACO1_CLEAR_gc = (0x00), /* Analog Comparator 1 Output - CLEAR */
    AC_ACO1_SET_gc   = (0x20), /* Analog Comparator 1 Output - SET */
} AC_ACO1_t;

/* Analog Comparator 1 Interrupt Flag */
typedef enum AC_ACI1_enum
{
    AC_ACI1_CLEAR_gc = (0x00), /* Analog Comparator 1 Interrupt Flag - CLEAR */
    AC_ACI1_SET_gc   = (0x10), /* Analog Comparator 1 Interrupt Flag - SET */
} AC_ACI1_t;

/* Analog Comparator 1 Interrupt Enable */
typedef enum AC_ACIE1_enum
{
    AC_ACIE1_CLEAR_gc = (0x00), /* Analog Comparator 1 Interrupt Enable - CLEAR */
    AC_ACIE1_SET_gc   = (0x08), /* Analog Comparator 1 Interrupt Enable - SET */
} AC_ACIE1_t;

/* Analog Comparator 1 Input Capture Enable */
typedef enum AC_ACIC1_enum
{
    AC_ACIC1_CLEAR_gc = (0x00), /* Analog Comparator 1 Input Capture Enable - CLEAR */
    AC_ACIC1_SET_gc   = (0x04), /* Analog Comparator 1 Input Capture Enable - SET */
} AC_ACIC1_t;

/* Analog Comparator 1 Interrupt Mode Select bits */
typedef enum AC_ACIS1_enum
{
    AC_ACIS1_VAL_0x00_gc = (0x00), /* Interrupt on Toggle */
    AC_ACIS1_VAL_0x01_gc = (0x01), /* Reserved */
    AC_ACIS1_VAL_0x02_gc = (0x02), /* Interrupt on Falling Edge */
    AC_ACIS1_VAL_0x03_gc = (0x03), /* Interrupt on Rising Edge */
} AC_ACIS1_t;

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
    _REGISTER16 (EEAR);       /* EEPROM Address Register  Bytes */
} EEPROM_t;


/* EEPROM Programming Mode Bits */
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
    register8_t rsv_0x00[46]; /* RESERVED REGISTER BLOCK */
    register8_t TIFR1;        /* Timer/Counter Interrupt Flag register */
    register8_t TIMSK1;       /* Timer/Counter1 Interrupt Mask Register */
    register8_t rsv_0x30[18]; /* RESERVED REGISTER BLOCK */
    register8_t TCCR1C;       /* Timer/Counter1 Control Register C */
    register8_t GTCCR;        /* General Timer/Counter Control Register */
    _REGISTER16 (ICR1);       /* Timer/Counter1 Input Capture Register  Bytes */
    register8_t rsv_0x45[3];  /* RESERVED REGISTER BLOCK */
    _REGISTER16 (OCR1B);      /* Timer/Counter1 Output Compare Register B  Bytes */
    register8_t rsv_0x49;     /* RESERVED REGISTER */
    _REGISTER16 (OCR1A);      /* Timer/Counter1 Output Compare Register A  Bytes */
    register8_t rsv_0x4B;     /* RESERVED REGISTER */
    _REGISTER16 (TCNT1);      /* Timer/Counter1  Bytes */
    register8_t rsv_0x4D;     /* RESERVED REGISTER */
    register8_t TCCR1B;       /* Timer/Counter1 Control Register B */
    register8_t TCCR1A;       /* Timer/Counter1 Control Register A */
} TC1_t;


/*
--------------------------------------------------------------------------------
TC16 - Timer/Counter, 16-bit
--------------------------------------------------------------------------------
*/

typedef struct TC2_struct
{
    register8_t rsv_0x00[48];  /* RESERVED REGISTER BLOCK */
    register8_t TIFR2;         /* Timer/Counter Interrupt Flag register */
    register8_t TIMSK2;        /* Timer/Counter2 Interrupt Mask Register */
    register8_t rsv_0x32[17];  /* RESERVED REGISTER BLOCK */
    register8_t GTCCR;         /* General Timer/Counter Control Register */
    register8_t rsv_0x44[124]; /* RESERVED REGISTER BLOCK */
    _REGISTER16 (ICR2);        /* Timer/Counter2 Input Capture Register  Bytes */
    register8_t rsv_0xC1;      /* RESERVED REGISTER */
    _REGISTER16 (OCR2B);       /* Timer/Counter2 Output Compare Register B  Bytes */
    register8_t rsv_0xC3;      /* RESERVED REGISTER */
    _REGISTER16 (OCR2A);       /* Timer/Counter2 Output Compare Register A  Bytes */
    register8_t rsv_0xC5;      /* RESERVED REGISTER */
    _REGISTER16 (TCNT2);       /* Timer/Counter2  Bytes */
    register8_t rsv_0xC7;      /* RESERVED REGISTER */
    register8_t TCCR2C;        /* Timer/Counter2 Control Register C */
    register8_t TCCR2B;        /* Timer/Counter2 Control Register B */
    register8_t TCCR2A;        /* Timer/Counter2 Control Register A */
} TC2_t;


/* Timer/Counter1 Input Capture Interrupt Enable */
typedef enum TC1_ICIE1_enum
{
    TC1_ICIE1_CLEAR_gc = (0x00), /* Timer/Counter1 Input Capture Interrupt Enable - CLEAR */
    TC1_ICIE1_SET_gc   = (0x20), /* Timer/Counter1 Input Capture Interrupt Enable - SET */
} TC1_ICIE1_t;

/* Timer/Counter1 Output Compare B Match Interrupt Enable */
typedef enum TC1_OCIE1B_enum
{
    TC1_OCIE1B_CLEAR_gc = (0x00), /* Timer/Counter1 Output Compare B Match Interrupt Enable - CLEAR */
    TC1_OCIE1B_SET_gc   = (0x04), /* Timer/Counter1 Output Compare B Match Interrupt Enable - SET */
} TC1_OCIE1B_t;

/* Timer/Counter1 Output Compare A Match Interrupt Enable */
typedef enum TC1_OCIE1A_enum
{
    TC1_OCIE1A_CLEAR_gc = (0x00), /* Timer/Counter1 Output Compare A Match Interrupt Enable - CLEAR */
    TC1_OCIE1A_SET_gc   = (0x02), /* Timer/Counter1 Output Compare A Match Interrupt Enable - SET */
} TC1_OCIE1A_t;

/* Timer/Counter1 Overflow Interrupt Enable */
typedef enum TC1_TOIE1_enum
{
    TC1_TOIE1_CLEAR_gc = (0x00), /* Timer/Counter1 Overflow Interrupt Enable - CLEAR */
    TC1_TOIE1_SET_gc   = (0x01), /* Timer/Counter1 Overflow Interrupt Enable - SET */
} TC1_TOIE1_t;

/* Timer/Counter1 Input Capture Flag */
typedef enum TC1_ICF1_enum
{
    TC1_ICF1_CLEAR_gc = (0x00), /* Timer/Counter1 Input Capture Flag - CLEAR */
    TC1_ICF1_SET_gc   = (0x20), /* Timer/Counter1 Input Capture Flag - SET */
} TC1_ICF1_t;

/* Timer/Counter1 Output Compare B Match Flag */
typedef enum TC1_OCF1B_enum
{
    TC1_OCF1B_CLEAR_gc = (0x00), /* Timer/Counter1 Output Compare B Match Flag - CLEAR */
    TC1_OCF1B_SET_gc   = (0x04), /* Timer/Counter1 Output Compare B Match Flag - SET */
} TC1_OCF1B_t;

/* Timer/Counter1 Output Compare A Match Flag */
typedef enum TC1_OCF1A_enum
{
    TC1_OCF1A_CLEAR_gc = (0x00), /* Timer/Counter1 Output Compare A Match Flag - CLEAR */
    TC1_OCF1A_SET_gc   = (0x02), /* Timer/Counter1 Output Compare A Match Flag - SET */
} TC1_OCF1A_t;

/* Timer/Counter1 Overflow Flag */
typedef enum TC1_TOV1_enum
{
    TC1_TOV1_CLEAR_gc = (0x00), /* Timer/Counter1 Overflow Flag - CLEAR */
    TC1_TOV1_SET_gc   = (0x01), /* Timer/Counter1 Overflow Flag - SET */
} TC1_TOV1_t;

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

/* Clock Select bits */
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

/* Prescaler Reset Timer/CounterN */
typedef enum TC1_PSR_enum
{
    TC1_PSR_CLEAR_gc = (0x00), /* Prescaler Reset Timer/CounterN - CLEAR */
    TC1_PSR_SET_gc   = (0x01), /* Prescaler Reset Timer/CounterN - SET */
} TC1_PSR_t;

/* Timer/Counter2 Input Capture Interrupt Enable */
typedef enum TC2_ICIE2_enum
{
    TC2_ICIE2_CLEAR_gc = (0x00), /* Timer/Counter2 Input Capture Interrupt Enable - CLEAR */
    TC2_ICIE2_SET_gc   = (0x20), /* Timer/Counter2 Input Capture Interrupt Enable - SET */
} TC2_ICIE2_t;

/* Timer/Counter2 Output Compare B Match Interrupt Enable */
typedef enum TC2_OCIE2B_enum
{
    TC2_OCIE2B_CLEAR_gc = (0x00), /* Timer/Counter2 Output Compare B Match Interrupt Enable - CLEAR */
    TC2_OCIE2B_SET_gc   = (0x04), /* Timer/Counter2 Output Compare B Match Interrupt Enable - SET */
} TC2_OCIE2B_t;

/* Timer/Counter2 Output Compare A Match Interrupt Enable */
typedef enum TC2_OCIE2A_enum
{
    TC2_OCIE2A_CLEAR_gc = (0x00), /* Timer/Counter2 Output Compare A Match Interrupt Enable - CLEAR */
    TC2_OCIE2A_SET_gc   = (0x02), /* Timer/Counter2 Output Compare A Match Interrupt Enable - SET */
} TC2_OCIE2A_t;

/* Timer/Counter2 Overflow Interrupt Enable */
typedef enum TC2_TOIE2_enum
{
    TC2_TOIE2_CLEAR_gc = (0x00), /* Timer/Counter2 Overflow Interrupt Enable - CLEAR */
    TC2_TOIE2_SET_gc   = (0x01), /* Timer/Counter2 Overflow Interrupt Enable - SET */
} TC2_TOIE2_t;

/* Timer/Counter2 Input Capture Flag */
typedef enum TC2_ICF2_enum
{
    TC2_ICF2_CLEAR_gc = (0x00), /* Timer/Counter2 Input Capture Flag - CLEAR */
    TC2_ICF2_SET_gc   = (0x20), /* Timer/Counter2 Input Capture Flag - SET */
} TC2_ICF2_t;

/* Timer/Counter2 Output Compare B Match Flag */
typedef enum TC2_OCF2B_enum
{
    TC2_OCF2B_CLEAR_gc = (0x00), /* Timer/Counter2 Output Compare B Match Flag - CLEAR */
    TC2_OCF2B_SET_gc   = (0x04), /* Timer/Counter2 Output Compare B Match Flag - SET */
} TC2_OCF2B_t;

/* Timer/Counter2 Output Compare A Match Flag */
typedef enum TC2_OCF2A_enum
{
    TC2_OCF2A_CLEAR_gc = (0x00), /* Timer/Counter2 Output Compare A Match Flag - CLEAR */
    TC2_OCF2A_SET_gc   = (0x02), /* Timer/Counter2 Output Compare A Match Flag - SET */
} TC2_OCF2A_t;

/* Timer/Counter2 Overflow Flag */
typedef enum TC2_TOV2_enum
{
    TC2_TOV2_CLEAR_gc = (0x00), /* Timer/Counter2 Overflow Flag - CLEAR */
    TC2_TOV2_SET_gc   = (0x01), /* Timer/Counter2 Overflow Flag - SET */
} TC2_TOV2_t;

/* Compare Output Mode 2A, bits */
#define TC2_TCCR2A_COM2A_gc(x) ((x<<6) & 0xC0)

/* Compare Output Mode 2B, bits */
#define TC2_TCCR2A_COM2B_gc(x) ((x<<4) & 0x30)

/* Pulse Width Modulator Select Bits */
#define TC2_TCCR2A_WGM2_gc(x) (x & 0x03)

/* Input Capture 2 Noise Canceler */
typedef enum TC2_ICNC2_enum
{
    TC2_ICNC2_CLEAR_gc = (0x00), /* Input Capture 2 Noise Canceler - CLEAR */
    TC2_ICNC2_SET_gc   = (0x80), /* Input Capture 2 Noise Canceler - SET */
} TC2_ICNC2_t;

/* Input Capture 2 Edge Select */
typedef enum TC2_ICES2_enum
{
    TC2_ICES2_CLEAR_gc = (0x00), /* Input Capture 2 Edge Select - CLEAR */
    TC2_ICES2_SET_gc   = (0x40), /* Input Capture 2 Edge Select - SET */
} TC2_ICES2_t;

/* Waveform Generation Mode Bits */
#define TC2_TCCR2B_WGM2_gc(x) ((x<<3) & 0x18)

/* Clock Select bits */
typedef enum TC2_CS2_enum
{
    TC2_CS2_VAL_0x00_gc = (0x00), /* No Clock Source (Stopped) */
    TC2_CS2_VAL_0x01_gc = (0x01), /* Running, No Prescaling */
    TC2_CS2_VAL_0x02_gc = (0x02), /* Running, CLK/8 */
    TC2_CS2_VAL_0x03_gc = (0x03), /* Running, CLK/64 */
    TC2_CS2_VAL_0x04_gc = (0x04), /* Running, CLK/256 */
    TC2_CS2_VAL_0x05_gc = (0x05), /* Running, CLK/1024 */
    TC2_CS2_VAL_0x06_gc = (0x06), /* Running, ExtClk Tx Falling Edge */
    TC2_CS2_VAL_0x07_gc = (0x07), /* Running, ExtClk Tx Rising Edge */
} TC2_CS2_t;

/* Force Output Compare for Channel A */
typedef enum TC2_FOC2A_enum
{
    TC2_FOC2A_CLEAR_gc = (0x00), /* Force Output Compare for Channel A - CLEAR */
    TC2_FOC2A_SET_gc   = (0x80), /* Force Output Compare for Channel A - SET */
} TC2_FOC2A_t;

/* Force Output Compare for Channel B */
typedef enum TC2_FOC2B_enum
{
    TC2_FOC2B_CLEAR_gc = (0x00), /* Force Output Compare for Channel B - CLEAR */
    TC2_FOC2B_SET_gc   = (0x40), /* Force Output Compare for Channel B - SET */
} TC2_FOC2B_t;

/* Timer/Counter Synchronization Mode */
typedef enum TC2_TSM_enum
{
    TC2_TSM_CLEAR_gc = (0x00), /* Timer/Counter Synchronization Mode - CLEAR */
    TC2_TSM_SET_gc   = (0x80), /* Timer/Counter Synchronization Mode - SET */
} TC2_TSM_t;

/* Prescaler Reset Timer/CounterN */
typedef enum TC2_PSR_enum
{
    TC2_PSR_CLEAR_gc = (0x00), /* Prescaler Reset Timer/CounterN - CLEAR */
    TC2_PSR_SET_gc   = (0x01), /* Prescaler Reset Timer/CounterN - SET */
} TC2_PSR_t;

/*
--------------------------------------------------------------------------------
TC8 - Timer/Counter, 8-bit
--------------------------------------------------------------------------------
*/

typedef struct TC0_struct
{
    register8_t rsv_0x00[67]; /* RESERVED REGISTER BLOCK */
    register8_t GTCCR;        /* General Timer/Counter Control Register */
    register8_t rsv_0x44[12]; /* RESERVED REGISTER BLOCK */
    register8_t TCCR0A;       /* Timer/Counter  Control Register A */
    register8_t rsv_0x51;     /* RESERVED REGISTER */
    register8_t TCNT0;        /* Timer/Counter0 */
    register8_t TCCR0B;       /* Timer/Counter Control Register B */
    register8_t rsv_0x54[2];  /* RESERVED REGISTER BLOCK */
    register8_t OCR0A;        /* Timer/Counter0 Output Compare Register A */
    register8_t rsv_0x57;     /* RESERVED REGISTER */
    register8_t TIFR0;        /* Timer/Counter0 Interrupt Flag Register */
    register8_t TIMSK0;       /* Timer/Counter Interrupt Mask Register */
    register8_t rsv_0x5A[2];  /* RESERVED REGISTER BLOCK */
    register8_t OCR0B;        /* Timer/Counter0 Output Compare Register B */
} TC0_t;


/* Timer/Counter0 Output Compare Match B Interrupt Enable */
typedef enum TC0_OCIE0B_enum
{
    TC0_OCIE0B_CLEAR_gc = (0x00), /* Timer/Counter0 Output Compare Match B Interrupt Enable - CLEAR */
    TC0_OCIE0B_SET_gc   = (0x04), /* Timer/Counter0 Output Compare Match B Interrupt Enable - SET */
} TC0_OCIE0B_t;

/* Timer/Counter0 Output Compare Match A Interrupt Enable */
typedef enum TC0_OCIE0A_enum
{
    TC0_OCIE0A_CLEAR_gc = (0x00), /* Timer/Counter0 Output Compare Match A Interrupt Enable - CLEAR */
    TC0_OCIE0A_SET_gc   = (0x02), /* Timer/Counter0 Output Compare Match A Interrupt Enable - SET */
} TC0_OCIE0A_t;

/* Timer/Counter0 Overflow Interrupt Enable */
typedef enum TC0_TOIE0_enum
{
    TC0_TOIE0_CLEAR_gc = (0x00), /* Timer/Counter0 Overflow Interrupt Enable - CLEAR */
    TC0_TOIE0_SET_gc   = (0x01), /* Timer/Counter0 Overflow Interrupt Enable - SET */
} TC0_TOIE0_t;

/* Timer/Counter0 Output Compare Flag B */
typedef enum TC0_OCF0B_enum
{
    TC0_OCF0B_CLEAR_gc = (0x00), /* Timer/Counter0 Output Compare Flag B - CLEAR */
    TC0_OCF0B_SET_gc   = (0x04), /* Timer/Counter0 Output Compare Flag B - SET */
} TC0_OCF0B_t;

/* Timer/Counter0 Output Compare Flag A */
typedef enum TC0_OCF0A_enum
{
    TC0_OCF0A_CLEAR_gc = (0x00), /* Timer/Counter0 Output Compare Flag A - CLEAR */
    TC0_OCF0A_SET_gc   = (0x02), /* Timer/Counter0 Output Compare Flag A - SET */
} TC0_OCF0A_t;

/* Timer/Counter0 Overflow Flag */
typedef enum TC0_TOV0_enum
{
    TC0_TOV0_CLEAR_gc = (0x00), /* Timer/Counter0 Overflow Flag - CLEAR */
    TC0_TOV0_SET_gc   = (0x01), /* Timer/Counter0 Overflow Flag - SET */
} TC0_TOV0_t;

/* Compare Match Output A Mode bits */
#define TC0_TCCR0A_COM0A_gc(x) ((x<<6) & 0xC0)

/* Compare Match Output B Mode bits */
#define TC0_TCCR0A_COM0B_gc(x) ((x<<4) & 0x30)

/* Waveform Generation Mode bits */
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

/* Waveform Generation Mode bit 2 */
typedef enum TC0_WGM02_enum
{
    TC0_WGM02_CLEAR_gc = (0x00), /* Waveform Generation Mode bit 2 - CLEAR */
    TC0_WGM02_SET_gc   = (0x08), /* Waveform Generation Mode bit 2 - SET */
} TC0_WGM02_t;

/* Clock Select bits */
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

/* Prescaler Reset Timer/CounterN */
typedef enum TC0_PSR_enum
{
    TC0_PSR_CLEAR_gc = (0x00), /* Prescaler Reset Timer/CounterN - CLEAR */
    TC0_PSR_SET_gc   = (0x01), /* Prescaler Reset Timer/CounterN - SET */
} TC0_PSR_t;

/*
--------------------------------------------------------------------------------
EXINT - External Interrupts
--------------------------------------------------------------------------------
*/

typedef struct EXINT_struct
{
    register8_t rsv_0x00[50]; /* RESERVED REGISTER BLOCK */
    register8_t PCMSK0;       /* Pin Change Enable Mask 0 */
    register8_t rsv_0x33[13]; /* RESERVED REGISTER BLOCK */
    register8_t PCMSK1;       /* Pin Change Enable Mask 1 */
    register8_t rsv_0x41[20]; /* RESERVED REGISTER BLOCK */
    register8_t MCUCR;        /* MCU Control Register */
    register8_t rsv_0x56[4];  /* RESERVED REGISTER BLOCK */
    register8_t GIFR;         /* General Interrupt Flag register */
    register8_t GIMSK;        /* General Interrupt Mask Register */
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
    EXINT_ISC00_VAL_0x00_gc = (0x00), /* Low Level of INTX */
    EXINT_ISC00_VAL_0x01_gc = (0x01), /* Reserved */
    EXINT_ISC00_VAL_0x02_gc = (0x02), /* Falling Edge of INTX */
    EXINT_ISC00_VAL_0x03_gc = (0x03), /* Rising Edge of INTX */
} EXINT_ISC00_t;

/* External Interrupt Request 0 Enable */
typedef enum EXINT_INT0_enum
{
    EXINT_INT0_CLEAR_gc = (0x00), /* External Interrupt Request 0 Enable - CLEAR */
    EXINT_INT0_SET_gc   = (0x40), /* External Interrupt Request 0 Enable - SET */
} EXINT_INT0_t;

/* Pin Change Interrupt Enables */
#define EXINT_GIMSK_PCIE_gc(x) ((x<<4) & 0x30)

/* External Interrupt Flag 0 */
typedef enum EXINT_INTF0_enum
{
    EXINT_INTF0_CLEAR_gc = (0x00), /* External Interrupt Flag 0 - CLEAR */
    EXINT_INTF0_SET_gc   = (0x40), /* External Interrupt Flag 0 - SET */
} EXINT_INTF0_t;

/* Pin Change Interrupt Flags */
#define EXINT_GIFR_PCIF_gc(x) ((x<<4) & 0x30)

/* Pin Change Enable Mask 1 Bit 0 */
typedef enum EXINT_PCINT8_enum
{
    EXINT_PCINT8_CLEAR_gc = (0x00), /* Pin Change Enable Mask 1 Bit 0 - CLEAR */
    EXINT_PCINT8_SET_gc   = (0x01), /* Pin Change Enable Mask 1 Bit 0 - SET */
} EXINT_PCINT8_t;

/* Pin Change Enable Mask 1 Bit 1 */
typedef enum EXINT_PCINT9_enum
{
    EXINT_PCINT9_CLEAR_gc = (0x00), /* Pin Change Enable Mask 1 Bit 1 - CLEAR */
    EXINT_PCINT9_SET_gc   = (0x02), /* Pin Change Enable Mask 1 Bit 1 - SET */
} EXINT_PCINT9_t;

/* Pin Change Enable Mask 1 Bit 2 */
typedef enum EXINT_PCINT10_enum
{
    EXINT_PCINT10_CLEAR_gc = (0x00), /* Pin Change Enable Mask 1 Bit 2 - CLEAR */
    EXINT_PCINT10_SET_gc   = (0x04), /* Pin Change Enable Mask 1 Bit 2 - SET */
} EXINT_PCINT10_t;

/* Pin Change Enable Mask 1 Bit 3 */
typedef enum EXINT_PCINT11_enum
{
    EXINT_PCINT11_CLEAR_gc = (0x00), /* Pin Change Enable Mask 1 Bit 3 - CLEAR */
    EXINT_PCINT11_SET_gc   = (0x08), /* Pin Change Enable Mask 1 Bit 3 - SET */
} EXINT_PCINT11_t;

/* Pin Change Enable Mask 0 Bit 0 */
typedef enum EXINT_PCINT0_enum
{
    EXINT_PCINT0_CLEAR_gc = (0x00), /* Pin Change Enable Mask 0 Bit 0 - CLEAR */
    EXINT_PCINT0_SET_gc   = (0x01), /* Pin Change Enable Mask 0 Bit 0 - SET */
} EXINT_PCINT0_t;

/* Pin Change Enable Mask 0 Bit 1 */
typedef enum EXINT_PCINT1_enum
{
    EXINT_PCINT1_CLEAR_gc = (0x00), /* Pin Change Enable Mask 0 Bit 1 - CLEAR */
    EXINT_PCINT1_SET_gc   = (0x02), /* Pin Change Enable Mask 0 Bit 1 - SET */
} EXINT_PCINT1_t;

/* Pin Change Enable Mask 0 Bit 2 */
typedef enum EXINT_PCINT2_enum
{
    EXINT_PCINT2_CLEAR_gc = (0x00), /* Pin Change Enable Mask 0 Bit 2 - CLEAR */
    EXINT_PCINT2_SET_gc   = (0x04), /* Pin Change Enable Mask 0 Bit 2 - SET */
} EXINT_PCINT2_t;

/* Pin Change Enable Mask 0 Bit 3 */
typedef enum EXINT_PCINT3_enum
{
    EXINT_PCINT3_CLEAR_gc = (0x00), /* Pin Change Enable Mask 0 Bit 3 - CLEAR */
    EXINT_PCINT3_SET_gc   = (0x08), /* Pin Change Enable Mask 0 Bit 3 - SET */
} EXINT_PCINT3_t;

/* Pin Change Enable Mask 0 Bit 4 */
typedef enum EXINT_PCINT4_enum
{
    EXINT_PCINT4_CLEAR_gc = (0x00), /* Pin Change Enable Mask 0 Bit 4 - CLEAR */
    EXINT_PCINT4_SET_gc   = (0x10), /* Pin Change Enable Mask 0 Bit 4 - SET */
} EXINT_PCINT4_t;

/* Pin Change Enable Mask 0 Bit 5 */
typedef enum EXINT_PCINT5_enum
{
    EXINT_PCINT5_CLEAR_gc = (0x00), /* Pin Change Enable Mask 0 Bit 5 - CLEAR */
    EXINT_PCINT5_SET_gc   = (0x20), /* Pin Change Enable Mask 0 Bit 5 - SET */
} EXINT_PCINT5_t;

/* Pin Change Enable Mask 0 Bit 6 */
typedef enum EXINT_PCINT6_enum
{
    EXINT_PCINT6_CLEAR_gc = (0x00), /* Pin Change Enable Mask 0 Bit 6 - CLEAR */
    EXINT_PCINT6_SET_gc   = (0x40), /* Pin Change Enable Mask 0 Bit 6 - SET */
} EXINT_PCINT6_t;

/* Pin Change Enable Mask 0 Bit 7 */
typedef enum EXINT_PCINT7_enum
{
    EXINT_PCINT7_CLEAR_gc = (0x00), /* Pin Change Enable Mask 0 Bit 7 - CLEAR */
    EXINT_PCINT7_SET_gc   = (0x80), /* Pin Change Enable Mask 0 Bit 7 - SET */
} EXINT_PCINT7_t;

/*
--------------------------------------------------------------------------------
CPU - CPU Registers
--------------------------------------------------------------------------------
*/

typedef struct CPU_struct
{
    register8_t rsv_0x00[51]; /* RESERVED REGISTER BLOCK */
    register8_t GPIOR0;       /* General Purpose I/O Register 0 */
    register8_t GPIOR1;       /* General Purpose I/O Register 1 */
    register8_t GPIOR2;       /* General Purpose I/O Register 2 */
    register8_t rsv_0x36[30]; /* RESERVED REGISTER BLOCK */
    register8_t MCUSR;        /* MCU Status Register */
    register8_t MCUCR;        /* MCU Control Register */
    register8_t rsv_0x56;     /* RESERVED REGISTER */
    register8_t SPMCSR;       /* Store Program Memory Control and Status Register */
    register8_t rsv_0x58[5];  /* RESERVED REGISTER BLOCK */
    _REGISTER16 (SP);         /* Stack Pointer  */
    register8_t rsv_0x5E;     /* RESERVED REGISTER */
    register8_t SREG;         /* Status Register */
    register8_t rsv_0x60[16]; /* RESERVED REGISTER BLOCK */
    register8_t PRR;          /* Power Reduction Register */
    register8_t CCP;          /* Configuration Change Protection */
    register8_t CLKCR;        /* Clock Control Register */
    register8_t CLKPR;        /* Clock Prescale Register */
    register8_t OSCCAL0;      /* Oscillator Calibration Register 8MHz */
    register8_t OSCTCAL0A;    /* Oscillator Temperature Calibration Register A */
    register8_t OSCTCAL0B;    /* Oscillator Temperature Calibration Register B */
    register8_t OSCCAL1;      /* Oscillator Calibration Register 32kHz */
} CPU_t;


/* Power Reduction TWI */
typedef enum CPU_PRTWI_enum
{
    CPU_PRTWI_CLEAR_gc = (0x00), /* Power Reduction TWI - CLEAR */
    CPU_PRTWI_SET_gc   = (0x80), /* Power Reduction TWI - SET */
} CPU_PRTWI_t;

/* Power Reduction USART1 */
typedef enum CPU_PRUSART1_enum
{
    CPU_PRUSART1_CLEAR_gc = (0x00), /* Power Reduction USART1 - CLEAR */
    CPU_PRUSART1_SET_gc   = (0x40), /* Power Reduction USART1 - SET */
} CPU_PRUSART1_t;

/* Power Reduction USART0 */
typedef enum CPU_PRUSART0_enum
{
    CPU_PRUSART0_CLEAR_gc = (0x00), /* Power Reduction USART0 - CLEAR */
    CPU_PRUSART0_SET_gc   = (0x20), /* Power Reduction USART0 - SET */
} CPU_PRUSART0_t;

/* Power Reduction SPI */
typedef enum CPU_PRSPI_enum
{
    CPU_PRSPI_CLEAR_gc = (0x00), /* Power Reduction SPI - CLEAR */
    CPU_PRSPI_SET_gc   = (0x10), /* Power Reduction SPI - SET */
} CPU_PRSPI_t;

/* Power Reduction Timer/Counter2 */
typedef enum CPU_PRTIM2_enum
{
    CPU_PRTIM2_CLEAR_gc = (0x00), /* Power Reduction Timer/Counter2 - CLEAR */
    CPU_PRTIM2_SET_gc   = (0x08), /* Power Reduction Timer/Counter2 - SET */
} CPU_PRTIM2_t;

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

/* Clock Output (Copy). Active low. */
typedef enum CPU_CKOUTC_enum
{
    CPU_CKOUTC_CLEAR_gc = (0x00), /* Clock Output (Copy). Active low. - CLEAR */
    CPU_CKOUTC_SET_gc   = (0x20), /* Clock Output (Copy). Active low. - SET */
} CPU_CKOUTC_t;

/* Start-up Time */
typedef enum CPU_SUT_enum
{
    CPU_SUT_CLEAR_gc = (0x00), /* Start-up Time - CLEAR */
    CPU_SUT_SET_gc   = (0x10), /* Start-up Time - SET */
} CPU_SUT_t;

/* Clock Select Bits */
#define CPU_CLKCR_CKSEL_gc(x) (x & 0x0F)

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

/* Sleep Enable */
typedef enum CPU_SE_enum
{
    CPU_SE_CLEAR_gc = (0x00), /* Sleep Enable - CLEAR */
    CPU_SE_SET_gc   = (0x20), /* Sleep Enable - SET */
} CPU_SE_t;

/* Sleep Mode Select Bits */
typedef enum CPU_SM_enum
{
    CPU_SM_IDLE_gc  = (0x00<<3), /* Idle */
    CPU_SM_ADC_gc   = (0x01<<3), /* ADC Noise Reduction (If Available) */
    CPU_SM_PDOWN_gc = (0x02<<3), /* Power Down */
    CPU_SM_STDBY_gc = (0x03<<3), /* Standby */
} CPU_SM_t;

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
TOCPM - Timer/Counter Output Compare Pin
--------------------------------------------------------------------------------
*/

typedef struct TOCPM_struct
{
    register8_t rsv_0x00[102]; /* RESERVED REGISTER BLOCK */
    register8_t TOCPMCOE;      /* Timer Output Compare Pin Mux Channel Output Enable */
    register8_t TOCPMSA0;      /* Timer Output Compare Pin Mux Selection 0 */
    register8_t TOCPMSA1;      /* Timer Output Compare Pin Mux Selection 1 */
} TOCPM_t;


/* Timer Output Compare Channel 7 Selection Bits */
#define TOCPM_TOCPMSA1_TOCC7S_gc(x) ((x<<6) & 0xC0)

/* Timer Output Compare Channel 6 Selection Bits */
#define TOCPM_TOCPMSA1_TOCC6S_gc(x) ((x<<4) & 0x30)

/* Timer Output Compare Channel 5 Selection Bits */
#define TOCPM_TOCPMSA1_TOCC5S_gc(x) ((x<<2) & 0x0C)

/* Timer Output Compare Channel 4 Selection Bits */
#define TOCPM_TOCPMSA1_TOCC4S_gc(x) (x & 0x03)

/* Timer Output Compare Channel 3 Selection Bits */
#define TOCPM_TOCPMSA0_TOCC3S_gc(x) ((x<<6) & 0xC0)

/* Timer Output Compare Channel 2 Selection Bits */
#define TOCPM_TOCPMSA0_TOCC2S_gc(x) ((x<<4) & 0x30)

/* Timer Output Compare Channel 1 Selection Bits */
#define TOCPM_TOCPMSA0_TOCC1S_gc(x) ((x<<2) & 0x0C)

/* Timer Output Compare Channel 0 Selection Bits */
#define TOCPM_TOCPMSA0_TOCC0S_gc(x) (x & 0x03)

/* Timer Output Compare Channel 7 Output Enable */
typedef enum TOCPM_TOCC7OE_enum
{
    TOCPM_TOCC7OE_CLEAR_gc = (0x00), /* Timer Output Compare Channel 7 Output Enable - CLEAR */
    TOCPM_TOCC7OE_SET_gc   = (0x80), /* Timer Output Compare Channel 7 Output Enable - SET */
} TOCPM_TOCC7OE_t;

/* Timer Output Compare Channel 6 Output Enable */
typedef enum TOCPM_TOCC6OE_enum
{
    TOCPM_TOCC6OE_CLEAR_gc = (0x00), /* Timer Output Compare Channel 6 Output Enable - CLEAR */
    TOCPM_TOCC6OE_SET_gc   = (0x40), /* Timer Output Compare Channel 6 Output Enable - SET */
} TOCPM_TOCC6OE_t;

/* Timer Output Compare Channel 5 Output Enable */
typedef enum TOCPM_TOCC5OE_enum
{
    TOCPM_TOCC5OE_CLEAR_gc = (0x00), /* Timer Output Compare Channel 5 Output Enable - CLEAR */
    TOCPM_TOCC5OE_SET_gc   = (0x20), /* Timer Output Compare Channel 5 Output Enable - SET */
} TOCPM_TOCC5OE_t;

/* Timer Output Compare Channel 4 Output Enable */
typedef enum TOCPM_TOCC4OE_enum
{
    TOCPM_TOCC4OE_CLEAR_gc = (0x00), /* Timer Output Compare Channel 4 Output Enable - CLEAR */
    TOCPM_TOCC4OE_SET_gc   = (0x10), /* Timer Output Compare Channel 4 Output Enable - SET */
} TOCPM_TOCC4OE_t;

/* Timer Output Compare Channel 3 Output Enable */
typedef enum TOCPM_TOCC3OE_enum
{
    TOCPM_TOCC3OE_CLEAR_gc = (0x00), /* Timer Output Compare Channel 3 Output Enable - CLEAR */
    TOCPM_TOCC3OE_SET_gc   = (0x08), /* Timer Output Compare Channel 3 Output Enable - SET */
} TOCPM_TOCC3OE_t;

/* Timer Output Compare Channel 2 Output Enable */
typedef enum TOCPM_TOCC2OE_enum
{
    TOCPM_TOCC2OE_CLEAR_gc = (0x00), /* Timer Output Compare Channel 2 Output Enable - CLEAR */
    TOCPM_TOCC2OE_SET_gc   = (0x04), /* Timer Output Compare Channel 2 Output Enable - SET */
} TOCPM_TOCC2OE_t;

/* Timer Output Compare Channel 1 Output Enable */
typedef enum TOCPM_TOCC1OE_enum
{
    TOCPM_TOCC1OE_CLEAR_gc = (0x00), /* Timer Output Compare Channel 1 Output Enable - CLEAR */
    TOCPM_TOCC1OE_SET_gc   = (0x02), /* Timer Output Compare Channel 1 Output Enable - SET */
} TOCPM_TOCC1OE_t;

/* Timer Output Compare Channel 0 Output Enable */
typedef enum TOCPM_TOCC0OE_enum
{
    TOCPM_TOCC0OE_CLEAR_gc = (0x00), /* Timer Output Compare Channel 0 Output Enable - CLEAR */
    TOCPM_TOCC0OE_SET_gc   = (0x01), /* Timer Output Compare Channel 0 Output Enable - SET */
} TOCPM_TOCC0OE_t;

/*
--------------------------------------------------------------------------------
SPI - Serial Peripheral Interface
--------------------------------------------------------------------------------
*/

typedef struct SPI_struct
{
    register8_t rsv_0x00[101]; /* RESERVED REGISTER BLOCK */
    register8_t REMAP;         /* Remap Port Pins */
    register8_t rsv_0x66[74];  /* RESERVED REGISTER BLOCK */
    register8_t SPDR;          /* SPI Data Register */
    register8_t SPSR;          /* SPI Status Register */
    register8_t SPCR;          /* SPI Control Register */
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

/* SPI Pin Mapping */
typedef enum SPI_SPIMAP_enum
{
    SPI_SPIMAP_CLEAR_gc = (0x00), /* SPI Pin Mapping - CLEAR */
    SPI_SPIMAP_SET_gc   = (0x02), /* SPI Pin Mapping - SET */
} SPI_SPIMAP_t;
/*
================================================================================
IO Module Instances. Mapped to memory.
================================================================================
*/

#define PORTB   (*(PORTB_t *) 0x0000)   /* I/O Port */
#define PORTA   (*(PORTA_t *) 0x0000)   /* I/O Port */
#define USART1  (*(USART1_t *) 0x0000)  /* USART */
#define USART0  (*(USART0_t *) 0x0000)  /* USART */
#define WDT     (*(WDT_t *) 0x0000)     /* Watchdog Timer */
#define TWI     (*(TWI_t *) 0x0000)     /* Two Wire Serial Interface */
#define ADC     (*(ADC_t *) 0x0000)     /* Analog-to-Digital Converter */
#define AC      (*(AC_t *) 0x0000)      /* Analog Comparator */
#define EEPROM  (*(EEPROM_t *) 0x0000)  /* EEPROM */
#define TC1     (*(TC1_t *) 0x0000)     /* Timer/Counter, 16-bit */
#define TC2     (*(TC2_t *) 0x0000)     /* Timer/Counter, 16-bit */
#define TC0     (*(TC0_t *) 0x0000)     /* Timer/Counter, 8-bit */
#define EXINT   (*(EXINT_t *) 0x0000)   /* External Interrupts */
#define CPU     (*(CPU_t *) 0x0000)     /* CPU Registers */
#define TOCPM   (*(TOCPM_t *) 0x0000)   /* Timer/Counter Output Compare Pin */
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


/* Frequency selection for internal ULP oscillator. The selection only affects system clock, watchdog and reset timeout always use 32 kHz clock. */
#define FUSE_ULPOSCSEL_ULPOSC_32KHZ_gc  (0x07<<5) /* 32 kHz */
#define FUSE_ULPOSCSEL_ULPOSC_64KHZ_gc  (0x06<<5) /* 64 kHz */
#define FUSE_ULPOSCSEL_ULPOSC_128KHZ_gc (0x05<<5) /* 128 kHz */
#define FUSE_ULPOSCSEL_ULPOSC_256KHZ_gc (0x04<<5) /* 256 kHz */
#define FUSE_ULPOSCSEL_ULPOSC_512KHZ_gc (0x03<<5) /* 512 kHz */


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
#define FUSE_SUT_CKSEL_INTULPOSC_32KHZ_6CK_16CK_16MS_gc       (0x04) /* Int. ULP Osc.; Start-up time PWRDWN/RESET: 6 CK/16 CK + 16 ms */
#define FUSE_SUT_CKSEL_EXTLOFXTAL_1KCK_16CK_16MS_gc           (0x06) /* Ext. Low-Freq. Crystal; Start-up time PWRDWN/RESET: 1K CK/16 CK + 16 ms */
#define FUSE_SUT_CKSEL_EXTLOFXTAL_32KCK_14CK_16MS_gc          (0x16) /* Ext. Low-Freq. Crystal; Start-up time PWRDWN/RESET: 32K CK/16 CK + 16 ms */
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
USART - USART
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
USART - USART
--------------------------------------------------------------------------------
*/


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


/* USART0 Pin Mapping */
#define USART0_U0MAP_CLEAR_gc (0x00) /* USART0 Pin Mapping - CLEAR */
#define USART0_U0MAP_SET_gc   (0x01) /* USART0 Pin Mapping - SET */


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


/* TWI High Noise Mode */
#define TWI_TWHNM_CLEAR_gc (0x00) /* TWI High Noise Mode - CLEAR */
#define TWI_TWHNM_SET_gc   (0x08) /* TWI High Noise Mode - SET */


/* TWI Acknowledge Action */
#define TWI_TWAA_CLEAR_gc (0x00) /* TWI Acknowledge Action - CLEAR */
#define TWI_TWAA_SET_gc   (0x04) /* TWI Acknowledge Action - SET */


/* TWI Slave Control Register B-TWCMD */
#define TWI_TWSCRB_TWCMD_gc(x) (x & 0x03)

/* TWI Data Interrupt Flag. */
#define TWI_TWDIF_CLEAR_gc (0x00) /* TWI Data Interrupt Flag. - CLEAR */
#define TWI_TWDIF_SET_gc   (0x80) /* TWI Data Interrupt Flag. - SET */


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


/* TWI Address Mask Bits */
#define TWI_TWSAM_TWSAM_gc(x) ((x<<1) & 0xFE)

/* TWI Address Enable */
#define TWI_TWAE_CLEAR_gc (0x00) /* TWI Address Enable - CLEAR */
#define TWI_TWAE_SET_gc   (0x01) /* TWI Address Enable - SET */


/*
--------------------------------------------------------------------------------
ADC - Analog-to-Digital Converter
--------------------------------------------------------------------------------
*/


/* Reference Selection Bits */
#define ADC_ADMUXB_REFS_gc(x) ((x<<5) & 0xE0)

/* Gain Selection Bits */
#define ADC_ADMUXB_GSEL_gc(x) (x & 0x03)

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
#define ADC_ADTS_VAL_0x01_gc (0x01) /* Analog Comparator 0 */
#define ADC_ADTS_VAL_0x02_gc (0x02) /* External Interrupt Request 0 */
#define ADC_ADTS_VAL_0x03_gc (0x03) /* Timer/Counter0 Compare Match A */
#define ADC_ADTS_VAL_0x04_gc (0x04) /* Timer/Counter0 Overflow */
#define ADC_ADTS_VAL_0x05_gc (0x05) /* Timer/Counter1 Compare Match A */
#define ADC_ADTS_VAL_0x06_gc (0x06) /* Timer/Counter1 Overflow */
#define ADC_ADTS_VAL_0x07_gc (0x07) /* Timer/Counter1 Capture Event */


/* ADC9 Digital Input Disable */
#define ADC_ADC9D_CLEAR_gc (0x00) /* ADC9 Digital Input Disable - CLEAR */
#define ADC_ADC9D_SET_gc   (0x08) /* ADC9 Digital Input Disable - SET */


/* ADC8 Digital input Disable */
#define ADC_ADC8D_CLEAR_gc (0x00) /* ADC8 Digital input Disable - CLEAR */
#define ADC_ADC8D_SET_gc   (0x04) /* ADC8 Digital input Disable - SET */


/* ADC10 Digital input Disable */
#define ADC_ADC10D_CLEAR_gc (0x00) /* ADC10 Digital input Disable - CLEAR */
#define ADC_ADC10D_SET_gc   (0x02) /* ADC10 Digital input Disable - SET */


/* ADC11 Digital input Disable */
#define ADC_ADC11D_CLEAR_gc (0x00) /* ADC11 Digital input Disable - CLEAR */
#define ADC_ADC11D_SET_gc   (0x01) /* ADC11 Digital input Disable - SET */


/* ADC7 Digital input Disable */
#define ADC_ADC7D_CLEAR_gc (0x00) /* ADC7 Digital input Disable - CLEAR */
#define ADC_ADC7D_SET_gc   (0x80) /* ADC7 Digital input Disable - SET */


/* ADC6 Digital input Disable */
#define ADC_ADC6D_CLEAR_gc (0x00) /* ADC6 Digital input Disable - CLEAR */
#define ADC_ADC6D_SET_gc   (0x40) /* ADC6 Digital input Disable - SET */


/* ADC5 Digital input Disable */
#define ADC_ADC5D_CLEAR_gc (0x00) /* ADC5 Digital input Disable - CLEAR */
#define ADC_ADC5D_SET_gc   (0x20) /* ADC5 Digital input Disable - SET */


/* ADC4/AIN11 Digital input Disable */
#define ADC_ADC4D_CLEAR_gc (0x00) /* ADC4/AIN11 Digital input Disable - CLEAR */
#define ADC_ADC4D_SET_gc   (0x10) /* ADC4/AIN11 Digital input Disable - SET */


/* ADC3/AIN10 Digital Input Disable */
#define ADC_ADC3D_CLEAR_gc (0x00) /* ADC3/AIN10 Digital Input Disable - CLEAR */
#define ADC_ADC3D_SET_gc   (0x08) /* ADC3/AIN10 Digital Input Disable - SET */


/* ADC2/AIN01 Digital input Disable */
#define ADC_ADC2D_CLEAR_gc (0x00) /* ADC2/AIN01 Digital input Disable - CLEAR */
#define ADC_ADC2D_SET_gc   (0x04) /* ADC2/AIN01 Digital input Disable - SET */


/* ADC1/AIN00 Digital input Disable */
#define ADC_ADC1D_CLEAR_gc (0x00) /* ADC1/AIN00 Digital input Disable - CLEAR */
#define ADC_ADC1D_SET_gc   (0x02) /* ADC1/AIN00 Digital input Disable - SET */


/* ADC0/AREF Digital input Disable */
#define ADC_ADC0D_CLEAR_gc (0x00) /* ADC0/AREF Digital input Disable - CLEAR */
#define ADC_ADC0D_SET_gc   (0x01) /* ADC0/AREF Digital input Disable - SET */


/*
--------------------------------------------------------------------------------
AC - Analog Comparator
--------------------------------------------------------------------------------
*/


/* Analog Comparator 0 Hysteresis Select */
#define AC_HSEL0_CLEAR_gc (0x00) /* Analog Comparator 0 Hysteresis Select - CLEAR */
#define AC_HSEL0_SET_gc   (0x80) /* Analog Comparator 0 Hysteresis Select - SET */


/* Analog Comparator 0 Hysteresis Level */
#define AC_HLEV0_CLEAR_gc (0x00) /* Analog Comparator 0 Hysteresis Level - CLEAR */
#define AC_HLEV0_SET_gc   (0x40) /* Analog Comparator 0 Hysteresis Level - SET */


/* Analog Comparator 0 Output Pin Enable */
#define AC_ACOE0_CLEAR_gc (0x00) /* Analog Comparator 0 Output Pin Enable - CLEAR */
#define AC_ACOE0_SET_gc   (0x10) /* Analog Comparator 0 Output Pin Enable - SET */


/* Analog Comparator 0 Negative Input Multiplexer */
#define AC_ACSR0B_ACNMUX_gc(x) ((x<<2) & 0x0C)

/* Analog Comparator 0 Positive Input Multiplexer Bits 1:0 */
#define AC_ACSR0B_ACPMUX_gc(x) (x & 0x03)

/* Analog Comparator 0 Disable */
#define AC_ACD0_CLEAR_gc (0x00) /* Analog Comparator 0 Disable - CLEAR */
#define AC_ACD0_SET_gc   (0x80) /* Analog Comparator 0 Disable - SET */


/* Analog Comparator 0 Positive Input Multiplexer Bit 2 */
#define AC_ACPMUX2_CLEAR_gc (0x00) /* Analog Comparator 0 Positive Input Multiplexer Bit 2 - CLEAR */
#define AC_ACPMUX2_SET_gc   (0x40) /* Analog Comparator 0 Positive Input Multiplexer Bit 2 - SET */


/* Analog Comparator 0 Output */
#define AC_ACO0_CLEAR_gc (0x00) /* Analog Comparator 0 Output - CLEAR */
#define AC_ACO0_SET_gc   (0x20) /* Analog Comparator 0 Output - SET */


/* Analog Comparator 0 Interrupt Flag */
#define AC_ACI0_CLEAR_gc (0x00) /* Analog Comparator 0 Interrupt Flag - CLEAR */
#define AC_ACI0_SET_gc   (0x10) /* Analog Comparator 0 Interrupt Flag - SET */


/* Analog Comparator 0 Interrupt Enable */
#define AC_ACIE0_CLEAR_gc (0x00) /* Analog Comparator 0 Interrupt Enable - CLEAR */
#define AC_ACIE0_SET_gc   (0x08) /* Analog Comparator 0 Interrupt Enable - SET */


/* Analog Comparator 0 Input Capture Enable */
#define AC_ACIC0_CLEAR_gc (0x00) /* Analog Comparator 0 Input Capture Enable - CLEAR */
#define AC_ACIC0_SET_gc   (0x04) /* Analog Comparator 0 Input Capture Enable - SET */


/* Analog Comparator 0 Interrupt Mode Select bits */
#define AC_ACIS0_VAL_0x00_gc (0x00) /* Interrupt on Toggle */
#define AC_ACIS0_VAL_0x01_gc (0x01) /* Reserved */
#define AC_ACIS0_VAL_0x02_gc (0x02) /* Interrupt on Falling Edge */
#define AC_ACIS0_VAL_0x03_gc (0x03) /* Interrupt on Rising Edge */


/* Analog Comparator 1 Hysteresis Select */
#define AC_HSEL1_CLEAR_gc (0x00) /* Analog Comparator 1 Hysteresis Select - CLEAR */
#define AC_HSEL1_SET_gc   (0x80) /* Analog Comparator 1 Hysteresis Select - SET */


/* Analog Comparator 1 Hysteresis Level */
#define AC_HLEV1_CLEAR_gc (0x00) /* Analog Comparator 1 Hysteresis Level - CLEAR */
#define AC_HLEV1_SET_gc   (0x40) /* Analog Comparator 1 Hysteresis Level - SET */


/* Analog Comparator 1 Output Pin Enable */
#define AC_ACOE1_CLEAR_gc (0x00) /* Analog Comparator 1 Output Pin Enable - CLEAR */
#define AC_ACOE1_SET_gc   (0x10) /* Analog Comparator 1 Output Pin Enable - SET */


/* Analog Comparator 1 Multiplexer Enable */
#define AC_ACME1_CLEAR_gc (0x00) /* Analog Comparator 1 Multiplexer Enable - CLEAR */
#define AC_ACME1_SET_gc   (0x04) /* Analog Comparator 1 Multiplexer Enable - SET */


/* Analog Comparator 1 Disable */
#define AC_ACD1_CLEAR_gc (0x00) /* Analog Comparator 1 Disable - CLEAR */
#define AC_ACD1_SET_gc   (0x80) /* Analog Comparator 1 Disable - SET */


/* Analog Comparator 1 Bandgap Select */
#define AC_ACBG1_CLEAR_gc (0x00) /* Analog Comparator 1 Bandgap Select - CLEAR */
#define AC_ACBG1_SET_gc   (0x40) /* Analog Comparator 1 Bandgap Select - SET */


/* Analog Comparator 1 Output */
#define AC_ACO1_CLEAR_gc (0x00) /* Analog Comparator 1 Output - CLEAR */
#define AC_ACO1_SET_gc   (0x20) /* Analog Comparator 1 Output - SET */


/* Analog Comparator 1 Interrupt Flag */
#define AC_ACI1_CLEAR_gc (0x00) /* Analog Comparator 1 Interrupt Flag - CLEAR */
#define AC_ACI1_SET_gc   (0x10) /* Analog Comparator 1 Interrupt Flag - SET */


/* Analog Comparator 1 Interrupt Enable */
#define AC_ACIE1_CLEAR_gc (0x00) /* Analog Comparator 1 Interrupt Enable - CLEAR */
#define AC_ACIE1_SET_gc   (0x08) /* Analog Comparator 1 Interrupt Enable - SET */


/* Analog Comparator 1 Input Capture Enable */
#define AC_ACIC1_CLEAR_gc (0x00) /* Analog Comparator 1 Input Capture Enable - CLEAR */
#define AC_ACIC1_SET_gc   (0x04) /* Analog Comparator 1 Input Capture Enable - SET */


/* Analog Comparator 1 Interrupt Mode Select bits */
#define AC_ACIS1_VAL_0x00_gc (0x00) /* Interrupt on Toggle */
#define AC_ACIS1_VAL_0x01_gc (0x01) /* Reserved */
#define AC_ACIS1_VAL_0x02_gc (0x02) /* Interrupt on Falling Edge */
#define AC_ACIS1_VAL_0x03_gc (0x03) /* Interrupt on Rising Edge */


/*
--------------------------------------------------------------------------------
EEPROM - EEPROM
--------------------------------------------------------------------------------
*/


/* EEPROM Programming Mode Bits */
#define EEPROM_EEPM_VAL_0x00_gc (0x00<<4) /* Erase and Write in one operation */
#define EEPROM_EEPM_VAL_0x01_gc (0x01<<4) /* Erase Only */
#define EEPROM_EEPM_VAL_0x02_gc (0x02<<4) /* Write Only */


/* EEPROM Ready Interrupt Enable */
#define EEPROM_EERIE_CLEAR_gc (0x00) /* EEPROM Ready Interrupt Enable - CLEAR */
#define EEPROM_EERIE_SET_gc   (0x08) /* EEPROM Ready Interrupt Enable - SET */


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


/*
--------------------------------------------------------------------------------
TC16 - Timer/Counter, 16-bit
--------------------------------------------------------------------------------
*/


/* Timer/Counter1 Input Capture Interrupt Enable */
#define TC1_ICIE1_CLEAR_gc (0x00) /* Timer/Counter1 Input Capture Interrupt Enable - CLEAR */
#define TC1_ICIE1_SET_gc   (0x20) /* Timer/Counter1 Input Capture Interrupt Enable - SET */


/* Timer/Counter1 Output Compare B Match Interrupt Enable */
#define TC1_OCIE1B_CLEAR_gc (0x00) /* Timer/Counter1 Output Compare B Match Interrupt Enable - CLEAR */
#define TC1_OCIE1B_SET_gc   (0x04) /* Timer/Counter1 Output Compare B Match Interrupt Enable - SET */


/* Timer/Counter1 Output Compare A Match Interrupt Enable */
#define TC1_OCIE1A_CLEAR_gc (0x00) /* Timer/Counter1 Output Compare A Match Interrupt Enable - CLEAR */
#define TC1_OCIE1A_SET_gc   (0x02) /* Timer/Counter1 Output Compare A Match Interrupt Enable - SET */


/* Timer/Counter1 Overflow Interrupt Enable */
#define TC1_TOIE1_CLEAR_gc (0x00) /* Timer/Counter1 Overflow Interrupt Enable - CLEAR */
#define TC1_TOIE1_SET_gc   (0x01) /* Timer/Counter1 Overflow Interrupt Enable - SET */


/* Timer/Counter1 Input Capture Flag */
#define TC1_ICF1_CLEAR_gc (0x00) /* Timer/Counter1 Input Capture Flag - CLEAR */
#define TC1_ICF1_SET_gc   (0x20) /* Timer/Counter1 Input Capture Flag - SET */


/* Timer/Counter1 Output Compare B Match Flag */
#define TC1_OCF1B_CLEAR_gc (0x00) /* Timer/Counter1 Output Compare B Match Flag - CLEAR */
#define TC1_OCF1B_SET_gc   (0x04) /* Timer/Counter1 Output Compare B Match Flag - SET */


/* Timer/Counter1 Output Compare A Match Flag */
#define TC1_OCF1A_CLEAR_gc (0x00) /* Timer/Counter1 Output Compare A Match Flag - CLEAR */
#define TC1_OCF1A_SET_gc   (0x02) /* Timer/Counter1 Output Compare A Match Flag - SET */


/* Timer/Counter1 Overflow Flag */
#define TC1_TOV1_CLEAR_gc (0x00) /* Timer/Counter1 Overflow Flag - CLEAR */
#define TC1_TOV1_SET_gc   (0x01) /* Timer/Counter1 Overflow Flag - SET */


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

/* Clock Select bits */
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


/* Prescaler Reset Timer/CounterN */
#define TC1_PSR_CLEAR_gc (0x00) /* Prescaler Reset Timer/CounterN - CLEAR */
#define TC1_PSR_SET_gc   (0x01) /* Prescaler Reset Timer/CounterN - SET */


/* Timer/Counter2 Input Capture Interrupt Enable */
#define TC2_ICIE2_CLEAR_gc (0x00) /* Timer/Counter2 Input Capture Interrupt Enable - CLEAR */
#define TC2_ICIE2_SET_gc   (0x20) /* Timer/Counter2 Input Capture Interrupt Enable - SET */


/* Timer/Counter2 Output Compare B Match Interrupt Enable */
#define TC2_OCIE2B_CLEAR_gc (0x00) /* Timer/Counter2 Output Compare B Match Interrupt Enable - CLEAR */
#define TC2_OCIE2B_SET_gc   (0x04) /* Timer/Counter2 Output Compare B Match Interrupt Enable - SET */


/* Timer/Counter2 Output Compare A Match Interrupt Enable */
#define TC2_OCIE2A_CLEAR_gc (0x00) /* Timer/Counter2 Output Compare A Match Interrupt Enable - CLEAR */
#define TC2_OCIE2A_SET_gc   (0x02) /* Timer/Counter2 Output Compare A Match Interrupt Enable - SET */


/* Timer/Counter2 Overflow Interrupt Enable */
#define TC2_TOIE2_CLEAR_gc (0x00) /* Timer/Counter2 Overflow Interrupt Enable - CLEAR */
#define TC2_TOIE2_SET_gc   (0x01) /* Timer/Counter2 Overflow Interrupt Enable - SET */


/* Timer/Counter2 Input Capture Flag */
#define TC2_ICF2_CLEAR_gc (0x00) /* Timer/Counter2 Input Capture Flag - CLEAR */
#define TC2_ICF2_SET_gc   (0x20) /* Timer/Counter2 Input Capture Flag - SET */


/* Timer/Counter2 Output Compare B Match Flag */
#define TC2_OCF2B_CLEAR_gc (0x00) /* Timer/Counter2 Output Compare B Match Flag - CLEAR */
#define TC2_OCF2B_SET_gc   (0x04) /* Timer/Counter2 Output Compare B Match Flag - SET */


/* Timer/Counter2 Output Compare A Match Flag */
#define TC2_OCF2A_CLEAR_gc (0x00) /* Timer/Counter2 Output Compare A Match Flag - CLEAR */
#define TC2_OCF2A_SET_gc   (0x02) /* Timer/Counter2 Output Compare A Match Flag - SET */


/* Timer/Counter2 Overflow Flag */
#define TC2_TOV2_CLEAR_gc (0x00) /* Timer/Counter2 Overflow Flag - CLEAR */
#define TC2_TOV2_SET_gc   (0x01) /* Timer/Counter2 Overflow Flag - SET */


/* Compare Output Mode 2A, bits */
#define TC2_TCCR2A_COM2A_gc(x) ((x<<6) & 0xC0)

/* Compare Output Mode 2B, bits */
#define TC2_TCCR2A_COM2B_gc(x) ((x<<4) & 0x30)

/* Pulse Width Modulator Select Bits */
#define TC2_TCCR2A_WGM2_gc(x) (x & 0x03)

/* Input Capture 2 Noise Canceler */
#define TC2_ICNC2_CLEAR_gc (0x00) /* Input Capture 2 Noise Canceler - CLEAR */
#define TC2_ICNC2_SET_gc   (0x80) /* Input Capture 2 Noise Canceler - SET */


/* Input Capture 2 Edge Select */
#define TC2_ICES2_CLEAR_gc (0x00) /* Input Capture 2 Edge Select - CLEAR */
#define TC2_ICES2_SET_gc   (0x40) /* Input Capture 2 Edge Select - SET */


/* Waveform Generation Mode Bits */
#define TC2_TCCR2B_WGM2_gc(x) ((x<<3) & 0x18)

/* Clock Select bits */
#define TC2_CS2_VAL_0x00_gc (0x00) /* No Clock Source (Stopped) */
#define TC2_CS2_VAL_0x01_gc (0x01) /* Running, No Prescaling */
#define TC2_CS2_VAL_0x02_gc (0x02) /* Running, CLK/8 */
#define TC2_CS2_VAL_0x03_gc (0x03) /* Running, CLK/64 */
#define TC2_CS2_VAL_0x04_gc (0x04) /* Running, CLK/256 */
#define TC2_CS2_VAL_0x05_gc (0x05) /* Running, CLK/1024 */
#define TC2_CS2_VAL_0x06_gc (0x06) /* Running, ExtClk Tx Falling Edge */
#define TC2_CS2_VAL_0x07_gc (0x07) /* Running, ExtClk Tx Rising Edge */


/* Force Output Compare for Channel A */
#define TC2_FOC2A_CLEAR_gc (0x00) /* Force Output Compare for Channel A - CLEAR */
#define TC2_FOC2A_SET_gc   (0x80) /* Force Output Compare for Channel A - SET */


/* Force Output Compare for Channel B */
#define TC2_FOC2B_CLEAR_gc (0x00) /* Force Output Compare for Channel B - CLEAR */
#define TC2_FOC2B_SET_gc   (0x40) /* Force Output Compare for Channel B - SET */


/* Timer/Counter Synchronization Mode */
#define TC2_TSM_CLEAR_gc (0x00) /* Timer/Counter Synchronization Mode - CLEAR */
#define TC2_TSM_SET_gc   (0x80) /* Timer/Counter Synchronization Mode - SET */


/* Prescaler Reset Timer/CounterN */
#define TC2_PSR_CLEAR_gc (0x00) /* Prescaler Reset Timer/CounterN - CLEAR */
#define TC2_PSR_SET_gc   (0x01) /* Prescaler Reset Timer/CounterN - SET */


/*
--------------------------------------------------------------------------------
TC8 - Timer/Counter, 8-bit
--------------------------------------------------------------------------------
*/


/* Timer/Counter0 Output Compare Match B Interrupt Enable */
#define TC0_OCIE0B_CLEAR_gc (0x00) /* Timer/Counter0 Output Compare Match B Interrupt Enable - CLEAR */
#define TC0_OCIE0B_SET_gc   (0x04) /* Timer/Counter0 Output Compare Match B Interrupt Enable - SET */


/* Timer/Counter0 Output Compare Match A Interrupt Enable */
#define TC0_OCIE0A_CLEAR_gc (0x00) /* Timer/Counter0 Output Compare Match A Interrupt Enable - CLEAR */
#define TC0_OCIE0A_SET_gc   (0x02) /* Timer/Counter0 Output Compare Match A Interrupt Enable - SET */


/* Timer/Counter0 Overflow Interrupt Enable */
#define TC0_TOIE0_CLEAR_gc (0x00) /* Timer/Counter0 Overflow Interrupt Enable - CLEAR */
#define TC0_TOIE0_SET_gc   (0x01) /* Timer/Counter0 Overflow Interrupt Enable - SET */


/* Timer/Counter0 Output Compare Flag B */
#define TC0_OCF0B_CLEAR_gc (0x00) /* Timer/Counter0 Output Compare Flag B - CLEAR */
#define TC0_OCF0B_SET_gc   (0x04) /* Timer/Counter0 Output Compare Flag B - SET */


/* Timer/Counter0 Output Compare Flag A */
#define TC0_OCF0A_CLEAR_gc (0x00) /* Timer/Counter0 Output Compare Flag A - CLEAR */
#define TC0_OCF0A_SET_gc   (0x02) /* Timer/Counter0 Output Compare Flag A - SET */


/* Timer/Counter0 Overflow Flag */
#define TC0_TOV0_CLEAR_gc (0x00) /* Timer/Counter0 Overflow Flag - CLEAR */
#define TC0_TOV0_SET_gc   (0x01) /* Timer/Counter0 Overflow Flag - SET */


/* Compare Match Output A Mode bits */
#define TC0_TCCR0A_COM0A_gc(x) ((x<<6) & 0xC0)

/* Compare Match Output B Mode bits */
#define TC0_TCCR0A_COM0B_gc(x) ((x<<4) & 0x30)

/* Waveform Generation Mode bits */
#define TC0_TCCR0A_WGM0_gc(x) (x & 0x03)

/* Force Output Compare A */
#define TC0_FOC0A_CLEAR_gc (0x00) /* Force Output Compare A - CLEAR */
#define TC0_FOC0A_SET_gc   (0x80) /* Force Output Compare A - SET */


/* Force Output Compare B */
#define TC0_FOC0B_CLEAR_gc (0x00) /* Force Output Compare B - CLEAR */
#define TC0_FOC0B_SET_gc   (0x40) /* Force Output Compare B - SET */


/* Waveform Generation Mode bit 2 */
#define TC0_WGM02_CLEAR_gc (0x00) /* Waveform Generation Mode bit 2 - CLEAR */
#define TC0_WGM02_SET_gc   (0x08) /* Waveform Generation Mode bit 2 - SET */


/* Clock Select bits */
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


/* Prescaler Reset Timer/CounterN */
#define TC0_PSR_CLEAR_gc (0x00) /* Prescaler Reset Timer/CounterN - CLEAR */
#define TC0_PSR_SET_gc   (0x01) /* Prescaler Reset Timer/CounterN - SET */


/*
--------------------------------------------------------------------------------
EXINT - External Interrupts
--------------------------------------------------------------------------------
*/


/* Interrupt Sense Control 0 Bit 1 */
#define EXINT_ISC01_CLEAR_gc (0x00) /* Interrupt Sense Control 0 Bit 1 - CLEAR */
#define EXINT_ISC01_SET_gc   (0x02) /* Interrupt Sense Control 0 Bit 1 - SET */


/* Interrupt Sense Control 0 Bit 0 */
#define EXINT_ISC00_VAL_0x00_gc (0x00) /* Low Level of INTX */
#define EXINT_ISC00_VAL_0x01_gc (0x01) /* Reserved */
#define EXINT_ISC00_VAL_0x02_gc (0x02) /* Falling Edge of INTX */
#define EXINT_ISC00_VAL_0x03_gc (0x03) /* Rising Edge of INTX */


/* External Interrupt Request 0 Enable */
#define EXINT_INT0_CLEAR_gc (0x00) /* External Interrupt Request 0 Enable - CLEAR */
#define EXINT_INT0_SET_gc   (0x40) /* External Interrupt Request 0 Enable - SET */


/* Pin Change Interrupt Enables */
#define EXINT_GIMSK_PCIE_gc(x) ((x<<4) & 0x30)

/* External Interrupt Flag 0 */
#define EXINT_INTF0_CLEAR_gc (0x00) /* External Interrupt Flag 0 - CLEAR */
#define EXINT_INTF0_SET_gc   (0x40) /* External Interrupt Flag 0 - SET */


/* Pin Change Interrupt Flags */
#define EXINT_GIFR_PCIF_gc(x) ((x<<4) & 0x30)

/* Pin Change Enable Mask 1 Bit 0 */
#define EXINT_PCINT8_CLEAR_gc (0x00) /* Pin Change Enable Mask 1 Bit 0 - CLEAR */
#define EXINT_PCINT8_SET_gc   (0x01) /* Pin Change Enable Mask 1 Bit 0 - SET */


/* Pin Change Enable Mask 1 Bit 1 */
#define EXINT_PCINT9_CLEAR_gc (0x00) /* Pin Change Enable Mask 1 Bit 1 - CLEAR */
#define EXINT_PCINT9_SET_gc   (0x02) /* Pin Change Enable Mask 1 Bit 1 - SET */


/* Pin Change Enable Mask 1 Bit 2 */
#define EXINT_PCINT10_CLEAR_gc (0x00) /* Pin Change Enable Mask 1 Bit 2 - CLEAR */
#define EXINT_PCINT10_SET_gc   (0x04) /* Pin Change Enable Mask 1 Bit 2 - SET */


/* Pin Change Enable Mask 1 Bit 3 */
#define EXINT_PCINT11_CLEAR_gc (0x00) /* Pin Change Enable Mask 1 Bit 3 - CLEAR */
#define EXINT_PCINT11_SET_gc   (0x08) /* Pin Change Enable Mask 1 Bit 3 - SET */


/* Pin Change Enable Mask 0 Bit 0 */
#define EXINT_PCINT0_CLEAR_gc (0x00) /* Pin Change Enable Mask 0 Bit 0 - CLEAR */
#define EXINT_PCINT0_SET_gc   (0x01) /* Pin Change Enable Mask 0 Bit 0 - SET */


/* Pin Change Enable Mask 0 Bit 1 */
#define EXINT_PCINT1_CLEAR_gc (0x00) /* Pin Change Enable Mask 0 Bit 1 - CLEAR */
#define EXINT_PCINT1_SET_gc   (0x02) /* Pin Change Enable Mask 0 Bit 1 - SET */


/* Pin Change Enable Mask 0 Bit 2 */
#define EXINT_PCINT2_CLEAR_gc (0x00) /* Pin Change Enable Mask 0 Bit 2 - CLEAR */
#define EXINT_PCINT2_SET_gc   (0x04) /* Pin Change Enable Mask 0 Bit 2 - SET */


/* Pin Change Enable Mask 0 Bit 3 */
#define EXINT_PCINT3_CLEAR_gc (0x00) /* Pin Change Enable Mask 0 Bit 3 - CLEAR */
#define EXINT_PCINT3_SET_gc   (0x08) /* Pin Change Enable Mask 0 Bit 3 - SET */


/* Pin Change Enable Mask 0 Bit 4 */
#define EXINT_PCINT4_CLEAR_gc (0x00) /* Pin Change Enable Mask 0 Bit 4 - CLEAR */
#define EXINT_PCINT4_SET_gc   (0x10) /* Pin Change Enable Mask 0 Bit 4 - SET */


/* Pin Change Enable Mask 0 Bit 5 */
#define EXINT_PCINT5_CLEAR_gc (0x00) /* Pin Change Enable Mask 0 Bit 5 - CLEAR */
#define EXINT_PCINT5_SET_gc   (0x20) /* Pin Change Enable Mask 0 Bit 5 - SET */


/* Pin Change Enable Mask 0 Bit 6 */
#define EXINT_PCINT6_CLEAR_gc (0x00) /* Pin Change Enable Mask 0 Bit 6 - CLEAR */
#define EXINT_PCINT6_SET_gc   (0x40) /* Pin Change Enable Mask 0 Bit 6 - SET */


/* Pin Change Enable Mask 0 Bit 7 */
#define EXINT_PCINT7_CLEAR_gc (0x00) /* Pin Change Enable Mask 0 Bit 7 - CLEAR */
#define EXINT_PCINT7_SET_gc   (0x80) /* Pin Change Enable Mask 0 Bit 7 - SET */


/*
--------------------------------------------------------------------------------
CPU - CPU Registers
--------------------------------------------------------------------------------
*/


/* Power Reduction TWI */
#define CPU_PRTWI_CLEAR_gc (0x00) /* Power Reduction TWI - CLEAR */
#define CPU_PRTWI_SET_gc   (0x80) /* Power Reduction TWI - SET */


/* Power Reduction USART1 */
#define CPU_PRUSART1_CLEAR_gc (0x00) /* Power Reduction USART1 - CLEAR */
#define CPU_PRUSART1_SET_gc   (0x40) /* Power Reduction USART1 - SET */


/* Power Reduction USART0 */
#define CPU_PRUSART0_CLEAR_gc (0x00) /* Power Reduction USART0 - CLEAR */
#define CPU_PRUSART0_SET_gc   (0x20) /* Power Reduction USART0 - SET */


/* Power Reduction SPI */
#define CPU_PRSPI_CLEAR_gc (0x00) /* Power Reduction SPI - CLEAR */
#define CPU_PRSPI_SET_gc   (0x10) /* Power Reduction SPI - SET */


/* Power Reduction Timer/Counter2 */
#define CPU_PRTIM2_CLEAR_gc (0x00) /* Power Reduction Timer/Counter2 - CLEAR */
#define CPU_PRTIM2_SET_gc   (0x08) /* Power Reduction Timer/Counter2 - SET */


/* Power Reduction Timer/Counter1 */
#define CPU_PRTIM1_CLEAR_gc (0x00) /* Power Reduction Timer/Counter1 - CLEAR */
#define CPU_PRTIM1_SET_gc   (0x04) /* Power Reduction Timer/Counter1 - SET */


/* Power Reduction Timer/Counter0 */
#define CPU_PRTIM0_CLEAR_gc (0x00) /* Power Reduction Timer/Counter0 - CLEAR */
#define CPU_PRTIM0_SET_gc   (0x02) /* Power Reduction Timer/Counter0 - SET */


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


/* Clock Output (Copy). Active low. */
#define CPU_CKOUTC_CLEAR_gc (0x00) /* Clock Output (Copy). Active low. - CLEAR */
#define CPU_CKOUTC_SET_gc   (0x20) /* Clock Output (Copy). Active low. - SET */


/* Start-up Time */
#define CPU_SUT_CLEAR_gc (0x00) /* Start-up Time - CLEAR */
#define CPU_SUT_SET_gc   (0x10) /* Start-up Time - SET */


/* Clock Select Bits */
#define CPU_CLKCR_CKSEL_gc(x) (x & 0x0F)

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


/* Sleep Enable */
#define CPU_SE_CLEAR_gc (0x00) /* Sleep Enable - CLEAR */
#define CPU_SE_SET_gc   (0x20) /* Sleep Enable - SET */


/* Sleep Mode Select Bits */
#define CPU_SM_IDLE_gc  (0x00<<3) /* Idle */
#define CPU_SM_ADC_gc   (0x01<<3) /* ADC Noise Reduction (If Available) */
#define CPU_SM_PDOWN_gc (0x02<<3) /* Power Down */
#define CPU_SM_STDBY_gc (0x03<<3) /* Standby */


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
TOCPM - Timer/Counter Output Compare Pin
--------------------------------------------------------------------------------
*/


/* Timer Output Compare Channel 7 Selection Bits */
#define TOCPM_TOCPMSA1_TOCC7S_gc(x) ((x<<6) & 0xC0)

/* Timer Output Compare Channel 6 Selection Bits */
#define TOCPM_TOCPMSA1_TOCC6S_gc(x) ((x<<4) & 0x30)

/* Timer Output Compare Channel 5 Selection Bits */
#define TOCPM_TOCPMSA1_TOCC5S_gc(x) ((x<<2) & 0x0C)

/* Timer Output Compare Channel 4 Selection Bits */
#define TOCPM_TOCPMSA1_TOCC4S_gc(x) (x & 0x03)

/* Timer Output Compare Channel 3 Selection Bits */
#define TOCPM_TOCPMSA0_TOCC3S_gc(x) ((x<<6) & 0xC0)

/* Timer Output Compare Channel 2 Selection Bits */
#define TOCPM_TOCPMSA0_TOCC2S_gc(x) ((x<<4) & 0x30)

/* Timer Output Compare Channel 1 Selection Bits */
#define TOCPM_TOCPMSA0_TOCC1S_gc(x) ((x<<2) & 0x0C)

/* Timer Output Compare Channel 0 Selection Bits */
#define TOCPM_TOCPMSA0_TOCC0S_gc(x) (x & 0x03)

/* Timer Output Compare Channel 7 Output Enable */
#define TOCPM_TOCC7OE_CLEAR_gc (0x00) /* Timer Output Compare Channel 7 Output Enable - CLEAR */
#define TOCPM_TOCC7OE_SET_gc   (0x80) /* Timer Output Compare Channel 7 Output Enable - SET */


/* Timer Output Compare Channel 6 Output Enable */
#define TOCPM_TOCC6OE_CLEAR_gc (0x00) /* Timer Output Compare Channel 6 Output Enable - CLEAR */
#define TOCPM_TOCC6OE_SET_gc   (0x40) /* Timer Output Compare Channel 6 Output Enable - SET */


/* Timer Output Compare Channel 5 Output Enable */
#define TOCPM_TOCC5OE_CLEAR_gc (0x00) /* Timer Output Compare Channel 5 Output Enable - CLEAR */
#define TOCPM_TOCC5OE_SET_gc   (0x20) /* Timer Output Compare Channel 5 Output Enable - SET */


/* Timer Output Compare Channel 4 Output Enable */
#define TOCPM_TOCC4OE_CLEAR_gc (0x00) /* Timer Output Compare Channel 4 Output Enable - CLEAR */
#define TOCPM_TOCC4OE_SET_gc   (0x10) /* Timer Output Compare Channel 4 Output Enable - SET */


/* Timer Output Compare Channel 3 Output Enable */
#define TOCPM_TOCC3OE_CLEAR_gc (0x00) /* Timer Output Compare Channel 3 Output Enable - CLEAR */
#define TOCPM_TOCC3OE_SET_gc   (0x08) /* Timer Output Compare Channel 3 Output Enable - SET */


/* Timer Output Compare Channel 2 Output Enable */
#define TOCPM_TOCC2OE_CLEAR_gc (0x00) /* Timer Output Compare Channel 2 Output Enable - CLEAR */
#define TOCPM_TOCC2OE_SET_gc   (0x04) /* Timer Output Compare Channel 2 Output Enable - SET */


/* Timer Output Compare Channel 1 Output Enable */
#define TOCPM_TOCC1OE_CLEAR_gc (0x00) /* Timer Output Compare Channel 1 Output Enable - CLEAR */
#define TOCPM_TOCC1OE_SET_gc   (0x02) /* Timer Output Compare Channel 1 Output Enable - SET */


/* Timer Output Compare Channel 0 Output Enable */
#define TOCPM_TOCC0OE_CLEAR_gc (0x00) /* Timer Output Compare Channel 0 Output Enable - CLEAR */
#define TOCPM_TOCC0OE_SET_gc   (0x01) /* Timer Output Compare Channel 0 Output Enable - SET */


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


/* SPI Pin Mapping */
#define SPI_SPIMAP_CLEAR_gc (0x00) /* SPI Pin Mapping - CLEAR */
#define SPI_SPIMAP_SET_gc   (0x02) /* SPI Pin Mapping - SET */

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
#define PORTBB_PINB     _SFR_MEM8 (0x0036) /* Port B Data register */
#define PORTBB_DDRB     _SFR_MEM8 (0x0037) /* Data Direction Register, Port B */
#define PORTBB_PORTB    _SFR_MEM8 (0x0038) /* Input Pins, Port B */
#define PORTBB_PUEB     _SFR_MEM8 (0x0062) /* Pull-up Enable Control Register */
#define PORTBB_PORTCR   _SFR_MEM8 (0x0064) /* Port Control Register */

/* PORTA - I/O Port (0x0000) */
#define PORTAA_BASE     _SFR_MEM8 (0x0000) /* PORTAA Base Address */
#define PORTAA_PINA     _SFR_MEM8 (0x0039) /* Port A Input Pins */
#define PORTAA_DDRA     _SFR_MEM8 (0x003A) /* Data Direction Register, Port A */
#define PORTAA_PORTA    _SFR_MEM8 (0x003B) /* Port A Data Register */
#define PORTAA_PUEA     _SFR_MEM8 (0x0063) /* Pull-up Enable Control Register */
#define PORTAA_PORTCR   _SFR_MEM8 (0x0064) /* Port Control Register */
#define PORTAA_PHDE     _SFR_MEM8 (0x006A) /* Port High Drive Enable Register */

/* USART1 - USART (0x0000) */
#define USART11_BASE    _SFR_MEM8 (0x0000) /* USART11 Base Address */
#define USART11_UDR1    _SFR_MEM8 (0x0090) /* USART I/O Data Register */
#define USART11_UBRR1   _SFR_MEM16(0x0091) /* USART Baud Rate Register  Bytes */
#define USART11_UBRR1L  _SFR_MEM8 (0x0091) /* USART Baud Rate Register  Bytes LOW BYTE */
#define USART11_UBRR1H  _SFR_MEM8 (0x0092) /* USART Baud Rate Register  Bytes HIGH BYTE */
#define USART11_UCSR1D  _SFR_MEM8 (0x0093) /* USART Control and Status Register D */
#define USART11_UCSR1C  _SFR_MEM8 (0x0094) /* USART Control and Status Register C */
#define USART11_UCSR1B  _SFR_MEM8 (0x0095) /* USART Control and Status Register B */
#define USART11_UCSR1A  _SFR_MEM8 (0x0096) /* USART Control and Status Register A */

/* USART0 - USART (0x0000) */
#define USART00_BASE    _SFR_MEM8 (0x0000) /* USART00 Base Address */
#define USART00_REMAP   _SFR_MEM8 (0x0065) /* Remap Port Pins */
#define USART00_UDR0    _SFR_MEM8 (0x0080) /* USART I/O Data Register */
#define USART00_UBRR0   _SFR_MEM16(0x0081) /* USART Baud Rate Register  Bytes */
#define USART00_UBRR0L  _SFR_MEM8 (0x0081) /* USART Baud Rate Register  Bytes LOW BYTE */
#define USART00_UBRR0H  _SFR_MEM8 (0x0082) /* USART Baud Rate Register  Bytes HIGH BYTE */
#define USART00_UCSR0D  _SFR_MEM8 (0x0083) /* USART Control and Status Register D */
#define USART00_UCSR0C  _SFR_MEM8 (0x0084) /* USART Control and Status Register C */
#define USART00_UCSR0B  _SFR_MEM8 (0x0085) /* USART Control and Status Register B */
#define USART00_UCSR0A  _SFR_MEM8 (0x0086) /* USART Control and Status Register A */

/* WDT - Watchdog Timer (0x0000) */
#define WDT_BASE        _SFR_MEM8 (0x0000) /* WDT Base Address */
#define WDT_WDTCSR      _SFR_MEM8 (0x0041) /* Watchdog Timer Control and Status Register */

/* TWI - Two Wire Serial Interface (0x0000) */
#define TWI_BASE        _SFR_MEM8 (0x0000) /* TWI Base Address */
#define TWI_TWSD        _SFR_MEM8 (0x00A0) /* TWI Slave Data Register */
#define TWI_TWSAM       _SFR_MEM8 (0x00A1) /* TWI Slave Address Mask Register */
#define TWI_TWSA        _SFR_MEM8 (0x00A2) /* TWI Slave Address Register */
#define TWI_TWSSRA      _SFR_MEM8 (0x00A3) /* TWI Slave Status Register A */
#define TWI_TWSCRB      _SFR_MEM8 (0x00A4) /* TWI Slave Control Register B */
#define TWI_TWSCRA      _SFR_MEM8 (0x00A5) /* TWI Slave Control Register A */

/* ADC - Analog-to-Digital Converter (0x0000) */
#define ADC_BASE        _SFR_MEM8 (0x0000) /* ADC Base Address */
#define ADC_ADCSRB      _SFR_MEM8 (0x0024) /* ADC Control and Status Register B */
#define ADC_ADCSRA      _SFR_MEM8 (0x0025) /* The ADC Control and Status register */
#define ADC_ADC         _SFR_MEM16(0x0026) /* ADC Data Register  Bytes */
#define ADC_ADCL        _SFR_MEM8 (0x0026) /* ADC Data Register  Bytes LOW BYTE */
#define ADC_ADCH        _SFR_MEM8 (0x0027) /* ADC Data Register  Bytes HIGH BYTE */
#define ADC_ADMUXB      _SFR_MEM8 (0x0028) /* The ADC multiplexer Selection Register B */
#define ADC_ADMUXA      _SFR_MEM8 (0x0029) /* The ADC multiplexer Selection Register A */
#define ADC_DIDR0       _SFR_MEM8 (0x0060) /* Digital Input Disable Register 0 */
#define ADC_DIDR1       _SFR_MEM8 (0x0061) /* Digital Input Disable Register 1 */

/* AC - Analog Comparator (0x0000) */
#define AC_BASE         _SFR_MEM8 (0x0000) /* AC Base Address */
#define AC_ACSR0A       _SFR_MEM8 (0x002A) /* Analog Comparator 0 Control And Status Register A */
#define AC_ACSR0B       _SFR_MEM8 (0x002B) /* Analog Comparator 0 Control And Status Register B */
#define AC_ACSR1A       _SFR_MEM8 (0x002C) /* Analog Comparator 1 Control And Status Register A */
#define AC_ACSR1B       _SFR_MEM8 (0x002D) /* Analog Comparator 1 Control And Status Register B */

/* EEPROM - EEPROM (0x0000) */
#define EEPROM_BASE     _SFR_MEM8 (0x0000) /* EEPROM Base Address */
#define EEPROM_EECR     _SFR_MEM8 (0x003C) /* EEPROM Control Register */
#define EEPROM_EEDR     _SFR_MEM8 (0x003D) /* EEPROM Data Register */
#define EEPROM_EEAR     _SFR_MEM16(0x003E) /* EEPROM Address Register  Bytes */
#define EEPROM_EEARL    _SFR_MEM8 (0x003E) /* EEPROM Address Register  Bytes LOW BYTE */
#define EEPROM_EEARH    _SFR_MEM8 (0x003F) /* EEPROM Address Register  Bytes HIGH BYTE */

/* TC1 - Timer/Counter, 16-bit (0x0000) */
#define TC16_BASE       _SFR_MEM8 (0x0000) /* TC16 Base Address */
#define TC16_TIFR1      _SFR_MEM8 (0x002E) /* Timer/Counter Interrupt Flag register */
#define TC16_TIMSK1     _SFR_MEM8 (0x002F) /* Timer/Counter1 Interrupt Mask Register */
#define TC16_TCCR1C     _SFR_MEM8 (0x0042) /* Timer/Counter1 Control Register C */
#define TC16_GTCCR      _SFR_MEM8 (0x0043) /* General Timer/Counter Control Register */
#define TC16_ICR1       _SFR_MEM16(0x0044) /* Timer/Counter1 Input Capture Register  Bytes */
#define TC16_ICR1L      _SFR_MEM8 (0x0044) /* Timer/Counter1 Input Capture Register  Bytes LOW BYTE */
#define TC16_ICR1H      _SFR_MEM8 (0x0045) /* Timer/Counter1 Input Capture Register  Bytes HIGH BYTE */
#define TC16_OCR1B      _SFR_MEM16(0x0048) /* Timer/Counter1 Output Compare Register B  Bytes */
#define TC16_OCR1BL     _SFR_MEM8 (0x0048) /* Timer/Counter1 Output Compare Register B  Bytes LOW BYTE */
#define TC16_OCR1BH     _SFR_MEM8 (0x0049) /* Timer/Counter1 Output Compare Register B  Bytes HIGH BYTE */
#define TC16_OCR1A      _SFR_MEM16(0x004A) /* Timer/Counter1 Output Compare Register A  Bytes */
#define TC16_OCR1AL     _SFR_MEM8 (0x004A) /* Timer/Counter1 Output Compare Register A  Bytes LOW BYTE */
#define TC16_OCR1AH     _SFR_MEM8 (0x004B) /* Timer/Counter1 Output Compare Register A  Bytes HIGH BYTE */
#define TC16_TCNT1      _SFR_MEM16(0x004C) /* Timer/Counter1  Bytes */
#define TC16_TCNT1L     _SFR_MEM8 (0x004C) /* Timer/Counter1  Bytes LOW BYTE */
#define TC16_TCNT1H     _SFR_MEM8 (0x004D) /* Timer/Counter1  Bytes HIGH BYTE */
#define TC16_TCCR1B     _SFR_MEM8 (0x004E) /* Timer/Counter1 Control Register B */
#define TC16_TCCR1A     _SFR_MEM8 (0x004F) /* Timer/Counter1 Control Register A */

/* TC2 - Timer/Counter, 16-bit (0x0000) */
/* TC16_BASE ALREADY DEFINED */
#define TC16_TIFR2      _SFR_MEM8 (0x0030) /* Timer/Counter Interrupt Flag register */
#define TC16_TIMSK2     _SFR_MEM8 (0x0031) /* Timer/Counter2 Interrupt Mask Register */
/* TC16_GTCCR ALREADY DEFINED */
#define TC16_ICR2       _SFR_MEM16(0x00C0) /* Timer/Counter2 Input Capture Register  Bytes */
#define TC16_ICR2L      _SFR_MEM8 (0x00C0) /* Timer/Counter2 Input Capture Register  Bytes LOW BYTE */
#define TC16_ICR2H      _SFR_MEM8 (0x00C1) /* Timer/Counter2 Input Capture Register  Bytes HIGH BYTE */
#define TC16_OCR2B      _SFR_MEM16(0x00C2) /* Timer/Counter2 Output Compare Register B  Bytes */
#define TC16_OCR2BL     _SFR_MEM8 (0x00C2) /* Timer/Counter2 Output Compare Register B  Bytes LOW BYTE */
#define TC16_OCR2BH     _SFR_MEM8 (0x00C3) /* Timer/Counter2 Output Compare Register B  Bytes HIGH BYTE */
#define TC16_OCR2A      _SFR_MEM16(0x00C4) /* Timer/Counter2 Output Compare Register A  Bytes */
#define TC16_OCR2AL     _SFR_MEM8 (0x00C4) /* Timer/Counter2 Output Compare Register A  Bytes LOW BYTE */
#define TC16_OCR2AH     _SFR_MEM8 (0x00C5) /* Timer/Counter2 Output Compare Register A  Bytes HIGH BYTE */
#define TC16_TCNT2      _SFR_MEM16(0x00C6) /* Timer/Counter2  Bytes */
#define TC16_TCNT2L     _SFR_MEM8 (0x00C6) /* Timer/Counter2  Bytes LOW BYTE */
#define TC16_TCNT2H     _SFR_MEM8 (0x00C7) /* Timer/Counter2  Bytes HIGH BYTE */
#define TC16_TCCR2C     _SFR_MEM8 (0x00C8) /* Timer/Counter2 Control Register C */
#define TC16_TCCR2B     _SFR_MEM8 (0x00C9) /* Timer/Counter2 Control Register B */
#define TC16_TCCR2A     _SFR_MEM8 (0x00CA) /* Timer/Counter2 Control Register A */

/* TC0 - Timer/Counter, 8-bit (0x0000) */
#define TC8_BASE        _SFR_MEM8 (0x0000) /* TC8 Base Address */
#define TC8_GTCCR       _SFR_MEM8 (0x0043) /* General Timer/Counter Control Register */
#define TC8_TCCR0A      _SFR_MEM8 (0x0050) /* Timer/Counter  Control Register A */
#define TC8_TCNT0       _SFR_MEM8 (0x0052) /* Timer/Counter0 */
#define TC8_TCCR0B      _SFR_MEM8 (0x0053) /* Timer/Counter Control Register B */
#define TC8_OCR0A       _SFR_MEM8 (0x0056) /* Timer/Counter0 Output Compare Register A */
#define TC8_TIFR0       _SFR_MEM8 (0x0058) /* Timer/Counter0 Interrupt Flag Register */
#define TC8_TIMSK0      _SFR_MEM8 (0x0059) /* Timer/Counter Interrupt Mask Register */
#define TC8_OCR0B       _SFR_MEM8 (0x005C) /* Timer/Counter0 Output Compare Register B */

/* EXINT - External Interrupts (0x0000) */
#define EXINT_BASE      _SFR_MEM8 (0x0000) /* EXINT Base Address */
#define EXINT_PCMSK0    _SFR_MEM8 (0x0032) /* Pin Change Enable Mask 0 */
#define EXINT_PCMSK1    _SFR_MEM8 (0x0040) /* Pin Change Enable Mask 1 */
#define EXINT_MCUCR     _SFR_MEM8 (0x0055) /* MCU Control Register */
#define EXINT_GIFR      _SFR_MEM8 (0x005A) /* General Interrupt Flag register */
#define EXINT_GIMSK     _SFR_MEM8 (0x005B) /* General Interrupt Mask Register */

/* CPU - CPU Registers (0x0000) */
#define CPU_BASE        _SFR_MEM8 (0x0000) /* CPU Base Address */
#define CPU_GPIOR0      _SFR_MEM8 (0x0033) /* General Purpose I/O Register 0 */
#define CPU_GPIOR1      _SFR_MEM8 (0x0034) /* General Purpose I/O Register 1 */
#define CPU_GPIOR2      _SFR_MEM8 (0x0035) /* General Purpose I/O Register 2 */
#define CPU_MCUSR       _SFR_MEM8 (0x0054) /* MCU Status Register */
#define CPU_MCUCR       _SFR_MEM8 (0x0055) /* MCU Control Register */
#define CPU_SPMCSR      _SFR_MEM8 (0x0057) /* Store Program Memory Control and Status Register */
#define CPU_SP          _SFR_MEM16(0x005D) /* Stack Pointer  */
#define CPU_SPL         _SFR_MEM8 (0x005D) /* Stack Pointer  LOW BYTE */
#define CPU_SPH         _SFR_MEM8 (0x005E) /* Stack Pointer  HIGH BYTE */
#define CPU_SREG        _SFR_MEM8 (0x005F) /* Status Register */
#define CPU_PRR         _SFR_MEM8 (0x0070) /* Power Reduction Register */
#define CPU_CCP         _SFR_MEM8 (0x0071) /* Configuration Change Protection */
#define CPU_CLKCR       _SFR_MEM8 (0x0072) /* Clock Control Register */
#define CPU_CLKPR       _SFR_MEM8 (0x0073) /* Clock Prescale Register */
#define CPU_OSCCAL0     _SFR_MEM8 (0x0074) /* Oscillator Calibration Register 8MHz */
#define CPU_OSCTCAL0A   _SFR_MEM8 (0x0075) /* Oscillator Temperature Calibration Register A */
#define CPU_OSCTCAL0B   _SFR_MEM8 (0x0076) /* Oscillator Temperature Calibration Register B */
#define CPU_OSCCAL1     _SFR_MEM8 (0x0077) /* Oscillator Calibration Register 32kHz */

/* TOCPM - Timer/Counter Output Compare Pin (0x0000) */
#define TOCPM_BASE      _SFR_MEM8 (0x0000) /* TOCPM Base Address */
#define TOCPM_TOCPMCOE  _SFR_MEM8 (0x0066) /* Timer Output Compare Pin Mux Channel Output Enable */
#define TOCPM_TOCPMSA0  _SFR_MEM8 (0x0067) /* Timer Output Compare Pin Mux Selection 0 */
#define TOCPM_TOCPMSA1  _SFR_MEM8 (0x0068) /* Timer Output Compare Pin Mux Selection 1 */

/* SPI - Serial Peripheral Interface (0x0000) */
#define SPI_BASE        _SFR_MEM8 (0x0000) /* SPI Base Address */
#define SPI_REMAP       _SFR_MEM8 (0x0065) /* Remap Port Pins */
#define SPI_SPDR        _SFR_MEM8 (0x00B0) /* SPI Data Register */
#define SPI_SPSR        _SFR_MEM8 (0x00B1) /* SPI Status Register */
#define SPI_SPCR        _SFR_MEM8 (0x00B2) /* SPI Control Register */

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
#define None_WDT_vect_num          (4)                 
#define None_WDT_vect              _VECTOR(4)          /* Watchdog Time-out Interrupt */
#define None_TIMER1_CAPT_vect_num  (5)                 
#define None_TIMER1_CAPT_vect      _VECTOR(5)          /* Timer/Counter1 Capture Event */
#define None_TIMER1_COMPA_vect_num (6)                 
#define None_TIMER1_COMPA_vect     _VECTOR(6)          /* Timer/Counter1 Compare Match A */
#define None_TIMER1_COMPB_vect_num (7)                 
#define None_TIMER1_COMPB_vect     _VECTOR(7)          /* Timer/Counter1 Compare Match B */
#define None_TIMER1_OVF_vect_num   (8)                 
#define None_TIMER1_OVF_vect       _VECTOR(8)          /* Timer/Counter1 Overflow */
#define None_TIMER0_COMPA_vect_num (9)                 
#define None_TIMER0_COMPA_vect     _VECTOR(9)          /* TimerCounter0 Compare Match A */
#define None_TIMER0_COMPB_vect_num (10)                
#define None_TIMER0_COMPB_vect     _VECTOR(10)         /* TimerCounter0 Compare Match B */
#define None_TIMER0_OVF_vect_num   (11)                
#define None_TIMER0_OVF_vect       _VECTOR(11)         /* Timer/Couner0 Overflow */
#define None_ANA_COMP0_vect_num    (12)                
#define None_ANA_COMP0_vect        _VECTOR(12)         /* Analog Comparator 0 */
#define None_ADC_vect_num          (13)                
#define None_ADC_vect              _VECTOR(13)         /* ADC Conversion Complete */
#define None_EE_RDY_vect_num       (14)                
#define None_EE_RDY_vect           _VECTOR(14)         /* EEPROM Ready */
#define None_ANA_COMP1_vect_num    (15)                
#define None_ANA_COMP1_vect        _VECTOR(15)         /* Analog Comparator 1 */
#define None_TIMER2_CAPT_vect_num  (16)                
#define None_TIMER2_CAPT_vect      _VECTOR(16)         /* Timer/Counter2 Capture Event */
#define None_TIMER2_COMPA_vect_num (17)                
#define None_TIMER2_COMPA_vect     _VECTOR(17)         /* Timer/Counter2 Compare Match A */
#define None_TIMER2_COMPB_vect_num (18)                
#define None_TIMER2_COMPB_vect     _VECTOR(18)         /* Timer/Counter2 Compare Match B */
#define None_TIMER2_OVF_vect_num   (19)                
#define None_TIMER2_OVF_vect       _VECTOR(19)         /* Timer/Counter2 Overflow */
#define None_SPI_vect_num          (20)                
#define None_SPI_vect              _VECTOR(20)         /* Serial Peripheral Interface */
#define None_USART0_START_vect_num (21)                
#define None_USART0_START_vect     _VECTOR(21)         /* USART0, Start */
#define None_USART0_RX_vect_num    (22)                
#define None_USART0_RX_vect        _VECTOR(22)         /* USART0, Rx Complete */
#define None_USART0_UDRE_vect_num  (23)                
#define None_USART0_UDRE_vect      _VECTOR(23)         /* USART0 Data Register Empty */
#define None_USART0_TX_vect_num    (24)                
#define None_USART0_TX_vect        _VECTOR(24)         /* USART0, Tx Complete */
#define None_USART1_START_vect_num (25)                
#define None_USART1_START_vect     _VECTOR(25)         /* USART1, Start */
#define None_USART1_RX_vect_num    (26)                
#define None_USART1_RX_vect        _VECTOR(26)         /* USART1, Rx Complete */
#define None_USART1_UDRE_vect_num  (27)                
#define None_USART1_UDRE_vect      _VECTOR(27)         /* USART1 Data Register Empty */
#define None_USART1_TX_vect_num    (28)                
#define None_USART1_TX_vect        _VECTOR(28)         /* USART1, Tx Complete */
#define None_TWI_SLAVE_vect_num    (29)                
#define None_TWI_SLAVE_vect        _VECTOR(29)         /* Two-wire Serial Interface */

/* Vector Table Size */
#define _VECTOR_SIZE               (2)                 /* Size of individual vector. */
#define _VECTORS_SIZE              (30 * _VECTOR_SIZE) /* Size of all vectors */
/*
================================================================================
Constants
================================================================================
*/

#define PROGMEM_START   (0x0000)                           
#define PROGMEM_SIZE    (0x1000)                           
#define PROGMEM_END     (PROGMEM_START + PROGMEM_SIZE - 1) 

#define FLASH_START     (0x0000)                           
#define FLASH_SIZE      (0x1000)                           
#define FLASH_PAGE_SIZE (0x0010)                           
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
#define IRAM_SIZE           (0x0100)                               
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

#define OSCCALMEM_START  (0x0000)                               
#define OSCCALMEM_SIZE   (0x0002)                               
#define OSCCALMEM_END    (OSCCALMEM_START + OSCCALMEM_SIZE - 1) 

#define OSCCAL_START     (0x0000)                               
#define OSCCAL_SIZE      (0x0002)                               
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
#define SELFPRGEN  (unsigned char)~_BV(0) /* Self Programming enable */
#define BODACT0    (unsigned char)~_BV(1) /* BOD mode of operation when the device is active or idle bit 0 */
#define BODACT1    (unsigned char)~_BV(2) /* BOD mode of operation when the device is active or idle bit 1 */
#define BODPD0     (unsigned char)~_BV(3) /* BOD mode of operation when the device is in sleep mode bit 0 */
#define BODPD1     (unsigned char)~_BV(4) /* BOD mode of operation when the device is in sleep mode bit 1 */
#define ULPOSCSEL0 (unsigned char)~_BV(5) /* Frequency selection for internal ULP oscillator. The selection only affects system clock, watchdog and reset timeout always use 32 kHz clock. bit 0 */
#define ULPOSCSEL1 (unsigned char)~_BV(6) /* Frequency selection for internal ULP oscillator. The selection only affects system clock, watchdog and reset timeout always use 32 kHz clock. bit 1 */
#define ULPOSCSEL2 (unsigned char)~_BV(7) /* Frequency selection for internal ULP oscillator. The selection only affects system clock, watchdog and reset timeout always use 32 kHz clock. bit 2 */


/* ========== Lock Bits ========== */
#define __LOCK_BITS_EXIST  


/* ========== Signature ========== */
#define SIGNATURE_0 (0x1E) 
#define SIGNATURE_1 (0x92) 
#define SIGNATURE_2 (0x15) 

#endif /* #ifdef _AVR_ATtiny441_H_INCLUDED */
