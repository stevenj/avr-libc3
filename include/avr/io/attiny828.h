/******************************************************************************
 *   This file is part of avr-libc3.                                          * 
 *                                                                            * 
 *   Automatically created by devtools/gen-ioheader-atdf.py (V0.91)           * 
 *                                                                            * 
 *   .atpack File: ATtiny828.atdf                                             * 
 *   .ATDF File:   atdf/ATtiny828.atdf                                        * 
 *   Version:      2.0.10                                                     * 
 *   Date:         2019-04-25                                                 * 
 *   Device:       ATtiny828                                                  * 
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
#  define _AVR_IOXXX_H_ "ioATtiny828.h"
#else
#  error "Attempt to include more than one <avr/ioXXX.h> file."
#endif

#ifndef _AVR_ATtiny828_H_INCLUDED
#  define _AVR_ATtiny828_H_INCLUDED

/*
================================================================================
Ungrouped common register
================================================================================
*/

#define GPIOR0    _SFR_MEM8 (0x3E) /* General Purpose I/O Register 0 */

#define GPIOR1    _SFR_MEM8 (0x4A) /* General Purpose I/O Register 1 */
#define GPIOR2    _SFR_MEM8 (0x4B) /* General Purpose I/O Register 2 */

#define SMCR      _SFR_MEM8 (0x53) /* Sleep Mode Control Register */
#define MCUSR     _SFR_MEM8 (0x54) /* MCU Status Register */
#define MCUCR     _SFR_MEM8 (0x55) /* MCU Control Register */
#define CCP       _SFR_MEM8 (0x56) /* Configuration Change Protection */
#define SPMCSR    _SFR_MEM8 (0x57) /* Store Program Memory Control and Status Register */

#define SP        _SFR_MEM16(0x5D) /* Stack Pointer  */
#define SREG      _SFR_MEM8 (0x5F) /* Status Register */

#define CLKPR     _SFR_MEM8 (0x61) /* Clock Prescale Register */

#define PRR       _SFR_MEM8 (0x64) /* Power Reduction Register */

#define OSCCAL0   _SFR_MEM8 (0x66) /* Oscillator Calibration Register 8MHz */
#define OSCCAL1   _SFR_MEM8 (0x67) /* Oscillator Calibration Register 32kHz */

#define OSCTCAL0A _SFR_MEM8 (0xF0) /* Oscillator Temperature Calibration Register A */
#define OSCTCAL0B _SFR_MEM8 (0xF1) /* Oscillator Temperature Calibration Register B */


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


/* Select boot size */
typedef enum FUSE_BOOTSZ_enum
{
    FUSE_BOOTSZ_128W_0F80_gc  = (0x03<<1), /* Boot Flash size=128 words Boot address=$0F80 */
    FUSE_BOOTSZ_256W_0F00_gc  = (0x02<<1), /* Boot Flash size=256 words Boot address=$0F00 */
    FUSE_BOOTSZ_512W_0E00_gc  = (0x01<<1), /* Boot Flash size=512 words Boot address=$0E00 */
    FUSE_BOOTSZ_1024W_0C00_gc = (0x00<<1), /* Boot Flash size=1024 words Boot address=$0C00 */
} FUSE_BOOTSZ_t;

/* Boot Reset vector Enabled */
typedef enum FUSE_BOOTRST_enum
{
    FUSE_BOOTRST_CLEAR_gc = (0x00), /* Boot Reset vector Enabled - CLEAR */
    FUSE_BOOTRST_SET_gc   = (0x01), /* Boot Reset vector Enabled - SET */
} FUSE_BOOTRST_t;

/* BOD mode of operation when the device is in sleep mode */
typedef enum FUSE_BODPD_enum
{
    FUSE_BODPD_BOD_SAMPLED_gc  = (0x01<<6), /* Sampled */
    FUSE_BODPD_BOD_ENABLED_gc  = (0x02<<6), /* Enabled */
    FUSE_BODPD_BOD_DISABLED_gc = (0x03<<6), /* Disabled */
} FUSE_BODPD_t;

/* BOD mode of operation when the device is active or idle */
typedef enum FUSE_BODACT_enum
{
    FUSE_BODACT_BOD_SAMPLED_gc  = (0x01<<4), /* Sampled */
    FUSE_BODACT_BOD_ENABLED_gc  = (0x02<<4), /* Enabled */
    FUSE_BODACT_BOD_DISABLED_gc = (0x03<<4), /* Disabled */
} FUSE_BODACT_t;

/* Reset Disabled (Enable PC6 as i/o pin)] */
typedef enum FUSE_RSTDISBL_enum
{
    FUSE_RSTDISBL_CLEAR_gc = (0x00), /* Reset Disabled (Enable PC6 as i/o pin)] - CLEAR */
    FUSE_RSTDISBL_SET_gc   = (0x80), /* Reset Disabled (Enable PC6 as i/o pin)] - SET */
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
    FUSE_BODLEVEL_DISABLED_gc = (0x07), /* Brown-out detection disabled */
    FUSE_BODLEVEL_4V3_gc      = (0x04), /* Brown-out detection at VCC=4.3 V */
    FUSE_BODLEVEL_2V7_gc      = (0x05), /* Brown-out detection at VCC=2.7 V */
    FUSE_BODLEVEL_1V8_gc      = (0x06), /* Brown-out detection at VCC=1.8 V */
} FUSE_BODLEVEL_t;

/* Divide clock by 8 internally */
typedef enum FUSE_CKDIV8_enum
{
    FUSE_CKDIV8_CLEAR_gc = (0x00), /* Divide clock by 8 internally - CLEAR */
    FUSE_CKDIV8_SET_gc   = (0x80), /* Divide clock by 8 internally - SET */
} FUSE_CKDIV8_t;

/* Clock output on PORTB0 */
typedef enum FUSE_CKOUT_enum
{
    FUSE_CKOUT_CLEAR_gc = (0x00), /* Clock output on PORTB0 - CLEAR */
    FUSE_CKOUT_SET_gc   = (0x40), /* Clock output on PORTB0 - SET */
} FUSE_CKOUT_t;

/* Select Clock Source */
typedef enum FUSE_SUT_CKSEL_enum
{
    FUSE_SUT_CKSEL_EXTCLK_6CK_14CK_0MS_gc           = (0x00), /* Ext. Clock; Start-up time PWRDWN/RESET: 6 + 14 CK + 0 ms */
    FUSE_SUT_CKSEL_EXTCLK_6CK_14CK_0MS_gc           = (0x01), /* Ext. Clock; Start-up time PWRDWN/RESET: 6 + 14 CK + 0 ms */
    FUSE_SUT_CKSEL_EXTCLK_6CK_14CK_4MS1_gc          = (0x10), /* Ext. Clock; Start-up time PWRDWN/RESET: 6 + 14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTCLK_6CK_14CK_4MS1_gc          = (0x11), /* Ext. Clock; Start-up time PWRDWN/RESET: 6 + 14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTCLK_6CK_14CK_65MS_gc          = (0x20), /* Ext. Clock; Start-up time PWRDWN/RESET: 6 + 14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTCLK_6CK_14CK_65MS_gc          = (0x30), /* Ext. Clock; Start-up time PWRDWN/RESET: 6 + 14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTCLK_6CK_14CK_65MS_gc          = (0x21), /* Ext. Clock; Start-up time PWRDWN/RESET: 6 + 14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTCLK_6CK_14CK_65MS_gc          = (0x31), /* Ext. Clock; Start-up time PWRDWN/RESET: 6 + 14 CK + 65 ms */
    FUSE_SUT_CKSEL_INTRCOSC_8MHZ_6CK_14CK_0MS_gc    = (0x02), /* Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 + 14 CK + 0 ms */
    FUSE_SUT_CKSEL_INTRCOSC_8MHZ_6CK_14CK_4MS1_gc   = (0x12), /* Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 + 14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_INTRCOSC_8MHZ_6CK_14CK_65MS_gc   = (0x22), /* Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 + 14 CK + 65 ms */
    FUSE_SUT_CKSEL_INTRCOSC_8MHZ_6CK_14CK_65MS_gc   = (0x32), /* Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 + 14 CK + 65 ms */
    FUSE_SUT_CKSEL_INTULPOSC_32KHZ_6CK_14CK_0MS_gc  = (0x03), /* Int. ULP Osc. 32kHz; Start-up time PWRDWN/RESET: 6 + 14 CK + 0 ms */
    FUSE_SUT_CKSEL_INTULPOSC_32KHZ_6CK_14CK_4MS1_gc = (0x13), /* Int. ULP Osc. 32kHz; Start-up time PWRDWN/RESET: 6 + 14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_INTULPOSC_32KHZ_6CK_14CK_65MS_gc = (0x23), /* Int. ULP Osc. 32kHz; Start-up time PWRDWN/RESET: 6 + 14 CK + 65 ms */
    FUSE_SUT_CKSEL_INTULPOSC_32KHZ_6CK_14CK_65MS_gc = (0x33), /* Int. ULP Osc. 32kHz; Start-up time PWRDWN/RESET: 6 + 14 CK + 65 ms */
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

/* Boot Loader Protection Mode */
typedef enum LOCKBIT_BLB0_enum
{
    LOCKBIT_BLB0_LPM_SPM_DISABLE_gc = (0x00<<2), /* LPM and SPM prohibited in Application Section */
    LOCKBIT_BLB0_LPM_DISABLE_gc     = (0x01<<2), /* LPM prohibited in Application Section */
    LOCKBIT_BLB0_SPM_DISABLE_gc     = (0x02<<2), /* SPM prohibited in Application Section */
    LOCKBIT_BLB0_NO_LOCK_gc         = (0x03<<2), /* No lock on SPM and LPM in Application Section */
} LOCKBIT_BLB0_t;

/* Boot Loader Protection Mode */
typedef enum LOCKBIT_BLB1_enum
{
    LOCKBIT_BLB1_LPM_SPM_DISABLE_gc = (0x00<<4), /* LPM and SPM prohibited in Boot Section */
    LOCKBIT_BLB1_LPM_DISABLE_gc     = (0x01<<4), /* LPM prohibited in Boot Section */
    LOCKBIT_BLB1_SPM_DISABLE_gc     = (0x02<<4), /* SPM prohibited in Boot Section */
    LOCKBIT_BLB1_NO_LOCK_gc         = (0x03<<4), /* No lock on SPM and LPM in Boot Section */
} LOCKBIT_BLB1_t;

/*
--------------------------------------------------------------------------------
SPI - Serial Peripheral Interface
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
PORT - I/O Port
--------------------------------------------------------------------------------
*/

typedef struct PORTA_struct
{
    register8_t rsv_0x00[32]; /* RESERVED REGISTER BLOCK */
    register8_t PINA;         /* Port A Input Pins */
    register8_t DDRA;         /* Data Direction Register, Port A */
    register8_t PORTA;        /* Port A Data Register */
    register8_t PUEA;         /* Pull-up Enable Control Register */
} PORTA_t;


/*
--------------------------------------------------------------------------------
PORT - I/O Port
--------------------------------------------------------------------------------
*/

typedef struct PORTB_struct
{
    register8_t rsv_0x00[36]; /* RESERVED REGISTER BLOCK */
    register8_t PINB;         /* Port B Input Pins */
    register8_t DDRB;         /* Data Direction Register, Port B */
    register8_t PORTB;        /* Port B Data Register */
    register8_t PUEB;         /* Pull-up Enable Control Register */
} PORTB_t;


/*
--------------------------------------------------------------------------------
PORT - I/O Port
--------------------------------------------------------------------------------
*/

typedef struct PORTC_struct
{
    register8_t rsv_0x00[40]; /* RESERVED REGISTER BLOCK */
    register8_t PINC;         /* Port C Input Pins */
    register8_t DDRC;         /* Data Direction Register, Port C */
    register8_t PORTC;        /* Port C Data Register */
    register8_t PUEC;         /* Pull-up Enable Control Register */
    register8_t rsv_0x2C[8];  /* RESERVED REGISTER BLOCK */
    register8_t PHDE;         /* Port High Drive Enable Register */
} PORTC_t;


/*
--------------------------------------------------------------------------------
PORT - I/O Port
--------------------------------------------------------------------------------
*/

typedef struct PORTD_struct
{
    register8_t rsv_0x00[44]; /* RESERVED REGISTER BLOCK */
    register8_t PIND;         /* Port D Input Pins */
    register8_t DDRD;         /* Data Direction Register, Port D */
    register8_t PORTD;        /* Port D Data Register */
    register8_t PUED;         /* Pull-up Enable Control Register */
} PORTD_t;


/* Port C High Drive Enable */
typedef enum PORTC_PHDEC_enum
{
    PORTC_PHDEC_CLEAR_gc = (0x00), /* Port C High Drive Enable - CLEAR */
    PORTC_PHDEC_SET_gc   = (0x04), /* Port C High Drive Enable - SET */
} PORTC_PHDEC_t;

/*
--------------------------------------------------------------------------------
CPU - CPU Registers
--------------------------------------------------------------------------------
*/

typedef struct CPU_struct
{
    register8_t rsv_0x00[62];  /* RESERVED REGISTER BLOCK */
    register8_t GPIOR0;        /* General Purpose I/O Register 0 */
    register8_t rsv_0x3F[11];  /* RESERVED REGISTER BLOCK */
    register8_t GPIOR1;        /* General Purpose I/O Register 1 */
    register8_t GPIOR2;        /* General Purpose I/O Register 2 */
    register8_t rsv_0x4C[7];   /* RESERVED REGISTER BLOCK */
    register8_t SMCR;          /* Sleep Mode Control Register */
    register8_t MCUSR;         /* MCU Status Register */
    register8_t MCUCR;         /* MCU Control Register */
    register8_t CCP;           /* Configuration Change Protection */
    register8_t SPMCSR;        /* Store Program Memory Control and Status Register */
    register8_t rsv_0x58[5];   /* RESERVED REGISTER BLOCK */
    _REGISTER16 (SP);          /* Stack Pointer  */
    register8_t rsv_0x5E;      /* RESERVED REGISTER */
    register8_t SREG;          /* Status Register */
    register8_t rsv_0x60;      /* RESERVED REGISTER */
    register8_t CLKPR;         /* Clock Prescale Register */
    register8_t rsv_0x62[2];   /* RESERVED REGISTER BLOCK */
    register8_t PRR;           /* Power Reduction Register */
    register8_t rsv_0x65;      /* RESERVED REGISTER */
    register8_t OSCCAL0;       /* Oscillator Calibration Register 8MHz */
    register8_t OSCCAL1;       /* Oscillator Calibration Register 32kHz */
    register8_t rsv_0x68[136]; /* RESERVED REGISTER BLOCK */
    register8_t OSCTCAL0A;     /* Oscillator Temperature Calibration Register A */
    register8_t OSCTCAL0B;     /* Oscillator Temperature Calibration Register B */
} CPU_t;


/* Power Reduction TWI */
typedef enum CPU_PRTWI_enum
{
    CPU_PRTWI_CLEAR_gc = (0x00), /* Power Reduction TWI - CLEAR */
    CPU_PRTWI_SET_gc   = (0x80), /* Power Reduction TWI - SET */
} CPU_PRTWI_t;

/* Power Reduction Timer/Counter0 */
typedef enum CPU_PRTIM0_enum
{
    CPU_PRTIM0_CLEAR_gc = (0x00), /* Power Reduction Timer/Counter0 - CLEAR */
    CPU_PRTIM0_SET_gc   = (0x20), /* Power Reduction Timer/Counter0 - SET */
} CPU_PRTIM0_t;

/* Power Reduction Timer/Counter1 */
typedef enum CPU_PRTIM1_enum
{
    CPU_PRTIM1_CLEAR_gc = (0x00), /* Power Reduction Timer/Counter1 - CLEAR */
    CPU_PRTIM1_SET_gc   = (0x08), /* Power Reduction Timer/Counter1 - SET */
} CPU_PRTIM1_t;

/* Power Reduction SPI */
typedef enum CPU_PRSPI_enum
{
    CPU_PRSPI_CLEAR_gc = (0x00), /* Power Reduction SPI - CLEAR */
    CPU_PRSPI_SET_gc   = (0x04), /* Power Reduction SPI - SET */
} CPU_PRSPI_t;

/* Power Reduction USART 0 */
typedef enum CPU_PRUSART0_enum
{
    CPU_PRUSART0_CLEAR_gc = (0x00), /* Power Reduction USART 0 - CLEAR */
    CPU_PRUSART0_SET_gc   = (0x02), /* Power Reduction USART 0 - SET */
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

/* Interrupt Vector Select */
typedef enum CPU_IVSEL_enum
{
    CPU_IVSEL_CLEAR_gc = (0x00), /* Interrupt Vector Select - CLEAR */
    CPU_IVSEL_SET_gc   = (0x02), /* Interrupt Vector Select - SET */
} CPU_IVSEL_t;

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

/* Sleep Mode Select Bits */
typedef enum CPU_SM_enum
{
    CPU_SM_IDLE_gc     = (0x00<<1), /* Idle */
    CPU_SM_ADC_gc      = (0x01<<1), /* ADC Noise Reduction (If Available) */
    CPU_SM_PDOWN_gc    = (0x02<<1), /* Power Down */
    CPU_SM_VAL_0x03_gc = (0x03<<1), /* Reserved */
} CPU_SM_t;

/* Sleep Enable */
typedef enum CPU_SE_enum
{
    CPU_SE_CLEAR_gc = (0x00), /* Sleep Enable - CLEAR */
    CPU_SE_SET_gc   = (0x01), /* Sleep Enable - SET */
} CPU_SE_t;

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

/* Read Device Signature Imprint Table */
typedef enum CPU_RSIG_enum
{
    CPU_RSIG_CLEAR_gc = (0x00), /* Read Device Signature Imprint Table - CLEAR */
    CPU_RSIG_SET_gc   = (0x20), /* Read Device Signature Imprint Table - SET */
} CPU_RSIG_t;

/* Read-While-Write section read enable */
typedef enum CPU_RWWSRE_enum
{
    CPU_RWWSRE_CLEAR_gc = (0x00), /* Read-While-Write section read enable - CLEAR */
    CPU_RWWSRE_SET_gc   = (0x10), /* Read-While-Write section read enable - SET */
} CPU_RWWSRE_t;

/* Read/Write Fuse and Lock Bits */
typedef enum CPU_RWFLB_enum
{
    CPU_RWFLB_CLEAR_gc = (0x00), /* Read/Write Fuse and Lock Bits - CLEAR */
    CPU_RWFLB_SET_gc   = (0x08), /* Read/Write Fuse and Lock Bits - SET */
} CPU_RWFLB_t;

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

/* Store Program Memory Enable */
typedef enum CPU_SPMEN_enum
{
    CPU_SPMEN_CLEAR_gc = (0x00), /* Store Program Memory Enable - CLEAR */
    CPU_SPMEN_SET_gc   = (0x01), /* Store Program Memory Enable - SET */
} CPU_SPMEN_t;

/*
--------------------------------------------------------------------------------
TC8 - Timer/Counter, 8-bit
--------------------------------------------------------------------------------
*/

typedef struct TC0_struct
{
    register8_t rsv_0x00[53]; /* RESERVED REGISTER BLOCK */
    register8_t TIFR0;        /* Timer/Counter0 Interrupt Flag register */
    register8_t rsv_0x36[13]; /* RESERVED REGISTER BLOCK */
    register8_t GTCCR;        /* General Timer/Counter Control Register */
    register8_t TCCR0A;       /* Timer/Counter  Control Register A */
    register8_t TCCR0B;       /* Timer/Counter Control Register B */
    register8_t TCNT0;        /* Timer/Counter0 */
    register8_t OCR0A;        /* Timer/Counter0 Output Compare Register */
    register8_t OCR0B;        /* Timer/Counter0 Output Compare Register */
    register8_t rsv_0x49[37]; /* RESERVED REGISTER BLOCK */
    register8_t TIMSK0;       /* Timer/Counter0 Interrupt Mask Register */
} TC0_t;


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

/* Compare Output Mode, Phase Correct PWM Mode */
#define TC0_TCCR0A_COM0A_gc(x) ((x<<6) & 0xC0)

/* Compare Output Mode, Fast PWm */
#define TC0_TCCR0A_COM0B_gc(x) ((x<<4) & 0x30)

/* Waveform Generation Mode */
#define TC0_TCCR0A_WGM0_gc(x) (x & 0x03)

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

/* Timer/Counter0 Output Compare Flag 0B */
typedef enum TC0_OCF0B_enum
{
    TC0_OCF0B_CLEAR_gc = (0x00), /* Timer/Counter0 Output Compare Flag 0B - CLEAR */
    TC0_OCF0B_SET_gc   = (0x04), /* Timer/Counter0 Output Compare Flag 0B - SET */
} TC0_OCF0B_t;

/* Timer/Counter0 Output Compare Flag 0A */
typedef enum TC0_OCF0A_enum
{
    TC0_OCF0A_CLEAR_gc = (0x00), /* Timer/Counter0 Output Compare Flag 0A - CLEAR */
    TC0_OCF0A_SET_gc   = (0x02), /* Timer/Counter0 Output Compare Flag 0A - SET */
} TC0_OCF0A_t;

/* Timer/Counter0 Overflow Flag */
typedef enum TC0_TOV0_enum
{
    TC0_TOV0_CLEAR_gc = (0x00), /* Timer/Counter0 Overflow Flag - CLEAR */
    TC0_TOV0_SET_gc   = (0x01), /* Timer/Counter0 Overflow Flag - SET */
} TC0_TOV0_t;

/* Timer/Counter Synchronization Mode */
typedef enum TC0_TSM_enum
{
    TC0_TSM_CLEAR_gc = (0x00), /* Timer/Counter Synchronization Mode - CLEAR */
    TC0_TSM_SET_gc   = (0x80), /* Timer/Counter Synchronization Mode - SET */
} TC0_TSM_t;

/* Prescaler Reset Timer/Counter1 and Timer/Counter0 */
typedef enum TC0_PSRSYNC_enum
{
    TC0_PSRSYNC_CLEAR_gc = (0x00), /* Prescaler Reset Timer/Counter1 and Timer/Counter0 - CLEAR */
    TC0_PSRSYNC_SET_gc   = (0x01), /* Prescaler Reset Timer/Counter1 and Timer/Counter0 - SET */
} TC0_PSRSYNC_t;

/*
--------------------------------------------------------------------------------
TC16 - Timer/Counter, 16-bit
--------------------------------------------------------------------------------
*/

typedef struct TC1_struct
{
    register8_t rsv_0x00[54]; /* RESERVED REGISTER BLOCK */
    register8_t TIFR1;        /* Timer/Counter Interrupt Flag register */
    register8_t rsv_0x37[12]; /* RESERVED REGISTER BLOCK */
    register8_t GTCCR;        /* General Timer/Counter Control Register */
    register8_t rsv_0x44[43]; /* RESERVED REGISTER BLOCK */
    register8_t TIMSK1;       /* Timer/Counter Interrupt Mask Register */
    register8_t rsv_0x70[16]; /* RESERVED REGISTER BLOCK */
    register8_t TCCR1A;       /* Timer/Counter1 Control Register A */
    register8_t TCCR1B;       /* Timer/Counter1 Control Register B */
    register8_t TCCR1C;       /* Timer/Counter1 Control Register C */
    register8_t rsv_0x83;     /* RESERVED REGISTER */
    _REGISTER16 (TCNT1);      /* Timer/Counter1  Bytes */
    register8_t rsv_0x85;     /* RESERVED REGISTER */
    _REGISTER16 (ICR1);       /* Timer/Counter1 Input Capture Register  Bytes */
    register8_t rsv_0x87;     /* RESERVED REGISTER */
    _REGISTER16 (OCR1A);      /* Timer/Counter1 Output Compare Register  Bytes */
    register8_t rsv_0x89;     /* RESERVED REGISTER */
    _REGISTER16 (OCR1B);      /* Timer/Counter1 Output Compare Register  Bytes */
} TC1_t;


/* Timer/Counter1 Input Capture Interrupt Enable */
typedef enum TC1_ICIE1_enum
{
    TC1_ICIE1_CLEAR_gc = (0x00), /* Timer/Counter1 Input Capture Interrupt Enable - CLEAR */
    TC1_ICIE1_SET_gc   = (0x20), /* Timer/Counter1 Input Capture Interrupt Enable - SET */
} TC1_ICIE1_t;

/* Timer/Counter1 Output CompareB Match Interrupt Enable */
typedef enum TC1_OCIE1B_enum
{
    TC1_OCIE1B_CLEAR_gc = (0x00), /* Timer/Counter1 Output CompareB Match Interrupt Enable - CLEAR */
    TC1_OCIE1B_SET_gc   = (0x04), /* Timer/Counter1 Output CompareB Match Interrupt Enable - SET */
} TC1_OCIE1B_t;

/* Timer/Counter1 Output CompareA Match Interrupt Enable */
typedef enum TC1_OCIE1A_enum
{
    TC1_OCIE1A_CLEAR_gc = (0x00), /* Timer/Counter1 Output CompareA Match Interrupt Enable - CLEAR */
    TC1_OCIE1A_SET_gc   = (0x02), /* Timer/Counter1 Output CompareA Match Interrupt Enable - SET */
} TC1_OCIE1A_t;

/* Timer/Counter1 Overflow Interrupt Enable */
typedef enum TC1_TOIE1_enum
{
    TC1_TOIE1_CLEAR_gc = (0x00), /* Timer/Counter1 Overflow Interrupt Enable - CLEAR */
    TC1_TOIE1_SET_gc   = (0x01), /* Timer/Counter1 Overflow Interrupt Enable - SET */
} TC1_TOIE1_t;

/* Input Capture Flag 1 */
typedef enum TC1_ICF1_enum
{
    TC1_ICF1_CLEAR_gc = (0x00), /* Input Capture Flag 1 - CLEAR */
    TC1_ICF1_SET_gc   = (0x20), /* Input Capture Flag 1 - SET */
} TC1_ICF1_t;

/* Output Compare Flag 1B */
typedef enum TC1_OCF1B_enum
{
    TC1_OCF1B_CLEAR_gc = (0x00), /* Output Compare Flag 1B - CLEAR */
    TC1_OCF1B_SET_gc   = (0x04), /* Output Compare Flag 1B - SET */
} TC1_OCF1B_t;

/* Output Compare Flag 1A */
typedef enum TC1_OCF1A_enum
{
    TC1_OCF1A_CLEAR_gc = (0x00), /* Output Compare Flag 1A - CLEAR */
    TC1_OCF1A_SET_gc   = (0x02), /* Output Compare Flag 1A - SET */
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

/* Waveform Generation Mode */
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

/* Prescaler source of Timer/Counter 1 */
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

/* Timer/Counter1 Control Register C-FOC1A */
typedef enum TC1_FOC1A_enum
{
    TC1_FOC1A_CLEAR_gc = (0x00), /* Timer/Counter1 Control Register C-FOC1A - CLEAR */
    TC1_FOC1A_SET_gc   = (0x80), /* Timer/Counter1 Control Register C-FOC1A - SET */
} TC1_FOC1A_t;

/* Timer/Counter1 Control Register C-FOC1B */
typedef enum TC1_FOC1B_enum
{
    TC1_FOC1B_CLEAR_gc = (0x00), /* Timer/Counter1 Control Register C-FOC1B - CLEAR */
    TC1_FOC1B_SET_gc   = (0x40), /* Timer/Counter1 Control Register C-FOC1B - SET */
} TC1_FOC1B_t;

/* Timer/Counter Synchronization Mode */
typedef enum TC1_TSM_enum
{
    TC1_TSM_CLEAR_gc = (0x00), /* Timer/Counter Synchronization Mode - CLEAR */
    TC1_TSM_SET_gc   = (0x80), /* Timer/Counter Synchronization Mode - SET */
} TC1_TSM_t;

/* Prescaler Reset Timer/Counter1 and Timer/Counter0 */
typedef enum TC1_PSRSYNC_enum
{
    TC1_PSRSYNC_CLEAR_gc = (0x00), /* Prescaler Reset Timer/Counter1 and Timer/Counter0 - CLEAR */
    TC1_PSRSYNC_SET_gc   = (0x01), /* Prescaler Reset Timer/Counter1 and Timer/Counter0 - SET */
} TC1_PSRSYNC_t;

/*
--------------------------------------------------------------------------------
TOCPM - Timer/Counter Output Compare Pin
--------------------------------------------------------------------------------
*/

typedef struct TOCPM_struct
{
    register8_t rsv_0x00[226]; /* RESERVED REGISTER BLOCK */
    register8_t TOCPMCOE;      /* Timer Output Compare Pin Mux Channel Output Enable */
    register8_t rsv_0xE3[5];   /* RESERVED REGISTER BLOCK */
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
ADC - Analog-to-Digital Converter
--------------------------------------------------------------------------------
*/

typedef struct ADC_struct
{
    register8_t rsv_0x00[120]; /* RESERVED REGISTER BLOCK */
    _REGISTER16 (ADC);         /* ADC Data Register  Bytes */
    register8_t rsv_0x79;      /* RESERVED REGISTER */
    register8_t ADCSRA;        /* The ADC Control and Status register */
    register8_t ADCSRB;        /* ADC Control and Status Register B */
    register8_t ADMUXA;        /* The ADC multiplexer Selection Register A */
    register8_t ADMUXB;        /* The ADC multiplexer Selection Register B */
    register8_t DIDR0;         /* Digital Input Disable Register 0 */
    register8_t DIDR1;         /* Digital Input Disable Register 1 */
    register8_t rsv_0x80[94];  /* RESERVED REGISTER BLOCK */
    register8_t DIDR2;         /* Digital Input Disable Register 2 */
    register8_t DIDR3;         /* Digital Input Disable Register 2 */
} ADC_t;


/* Reference Selection Bit */
typedef enum ADC_REFS_enum
{
    ADC_REFS_CLEAR_gc = (0x00), /* Reference Selection Bit - CLEAR */
    ADC_REFS_SET_gc   = (0x20), /* Reference Selection Bit - SET */
} ADC_REFS_t;

/* Analog Channel Selection Bit 5 */
typedef enum ADC_MUX5_enum
{
    ADC_MUX5_CLEAR_gc = (0x00), /* Analog Channel Selection Bit 5 - CLEAR */
    ADC_MUX5_SET_gc   = (0x01), /* Analog Channel Selection Bit 5 - SET */
} ADC_MUX5_t;

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
    ADC_ADTS_VAL_0x07_gc = (0x07), /* Timer/Counter1 Capture Event */
} ADC_ADTS_t;

/* ADC27 Digital input Disable */
typedef enum ADC_ADC27D_enum
{
    ADC_ADC27D_CLEAR_gc = (0x00), /* ADC27 Digital input Disable - CLEAR */
    ADC_ADC27D_SET_gc   = (0x08), /* ADC27 Digital input Disable - SET */
} ADC_ADC27D_t;

/* ADC26 Digital input Disable */
typedef enum ADC_ADC26D_enum
{
    ADC_ADC26D_CLEAR_gc = (0x00), /* ADC26 Digital input Disable - CLEAR */
    ADC_ADC26D_SET_gc   = (0x04), /* ADC26 Digital input Disable - SET */
} ADC_ADC26D_t;

/* ADC25 Digital input Disable */
typedef enum ADC_ADC25D_enum
{
    ADC_ADC25D_CLEAR_gc = (0x00), /* ADC25 Digital input Disable - CLEAR */
    ADC_ADC25D_SET_gc   = (0x02), /* ADC25 Digital input Disable - SET */
} ADC_ADC25D_t;

/* ADC24 Digital input Disable */
typedef enum ADC_ADC24D_enum
{
    ADC_ADC24D_CLEAR_gc = (0x00), /* ADC24 Digital input Disable - CLEAR */
    ADC_ADC24D_SET_gc   = (0x01), /* ADC24 Digital input Disable - SET */
} ADC_ADC24D_t;

/* ADC23 Digital input Disable */
typedef enum ADC_ADC23D_enum
{
    ADC_ADC23D_CLEAR_gc = (0x00), /* ADC23 Digital input Disable - CLEAR */
    ADC_ADC23D_SET_gc   = (0x80), /* ADC23 Digital input Disable - SET */
} ADC_ADC23D_t;

/* ADC22 Digital input Disable */
typedef enum ADC_ADC22D_enum
{
    ADC_ADC22D_CLEAR_gc = (0x00), /* ADC22 Digital input Disable - CLEAR */
    ADC_ADC22D_SET_gc   = (0x40), /* ADC22 Digital input Disable - SET */
} ADC_ADC22D_t;

/* ADC21 Digital input Disable */
typedef enum ADC_ADC21D_enum
{
    ADC_ADC21D_CLEAR_gc = (0x00), /* ADC21 Digital input Disable - CLEAR */
    ADC_ADC21D_SET_gc   = (0x20), /* ADC21 Digital input Disable - SET */
} ADC_ADC21D_t;

/* ADC20 Digital input Disable */
typedef enum ADC_ADC20D_enum
{
    ADC_ADC20D_CLEAR_gc = (0x00), /* ADC20 Digital input Disable - CLEAR */
    ADC_ADC20D_SET_gc   = (0x10), /* ADC20 Digital input Disable - SET */
} ADC_ADC20D_t;

/* ADC19 Digital input Disable */
typedef enum ADC_ADC19D_enum
{
    ADC_ADC19D_CLEAR_gc = (0x00), /* ADC19 Digital input Disable - CLEAR */
    ADC_ADC19D_SET_gc   = (0x08), /* ADC19 Digital input Disable - SET */
} ADC_ADC19D_t;

/* ADC18 Digital input Disable */
typedef enum ADC_ADC18D_enum
{
    ADC_ADC18D_CLEAR_gc = (0x00), /* ADC18 Digital input Disable - CLEAR */
    ADC_ADC18D_SET_gc   = (0x04), /* ADC18 Digital input Disable - SET */
} ADC_ADC18D_t;

/* ADC17 Digital input Disable */
typedef enum ADC_ADC17D_enum
{
    ADC_ADC17D_CLEAR_gc = (0x00), /* ADC17 Digital input Disable - CLEAR */
    ADC_ADC17D_SET_gc   = (0x02), /* ADC17 Digital input Disable - SET */
} ADC_ADC17D_t;

/* ADC16 Digital input Disable */
typedef enum ADC_ADC16D_enum
{
    ADC_ADC16D_CLEAR_gc = (0x00), /* ADC16 Digital input Disable - CLEAR */
    ADC_ADC16D_SET_gc   = (0x01), /* ADC16 Digital input Disable - SET */
} ADC_ADC16D_t;

/* ADC15 Digital input Disable */
typedef enum ADC_ADC15D_enum
{
    ADC_ADC15D_CLEAR_gc = (0x00), /* ADC15 Digital input Disable - CLEAR */
    ADC_ADC15D_SET_gc   = (0x80), /* ADC15 Digital input Disable - SET */
} ADC_ADC15D_t;

/* ADC14 Digital input Disable */
typedef enum ADC_ADC14D_enum
{
    ADC_ADC14D_CLEAR_gc = (0x00), /* ADC14 Digital input Disable - CLEAR */
    ADC_ADC14D_SET_gc   = (0x40), /* ADC14 Digital input Disable - SET */
} ADC_ADC14D_t;

/* ADC13 Digital input Disable */
typedef enum ADC_ADC13D_enum
{
    ADC_ADC13D_CLEAR_gc = (0x00), /* ADC13 Digital input Disable - CLEAR */
    ADC_ADC13D_SET_gc   = (0x20), /* ADC13 Digital input Disable - SET */
} ADC_ADC13D_t;

/* ADC12 Digital input Disable */
typedef enum ADC_ADC12D_enum
{
    ADC_ADC12D_CLEAR_gc = (0x00), /* ADC12 Digital input Disable - CLEAR */
    ADC_ADC12D_SET_gc   = (0x10), /* ADC12 Digital input Disable - SET */
} ADC_ADC12D_t;

/* ADC11 Digital input Disable */
typedef enum ADC_ADC11D_enum
{
    ADC_ADC11D_CLEAR_gc = (0x00), /* ADC11 Digital input Disable - CLEAR */
    ADC_ADC11D_SET_gc   = (0x08), /* ADC11 Digital input Disable - SET */
} ADC_ADC11D_t;

/* ADC10 Digital input Disable */
typedef enum ADC_ADC10D_enum
{
    ADC_ADC10D_CLEAR_gc = (0x00), /* ADC10 Digital input Disable - CLEAR */
    ADC_ADC10D_SET_gc   = (0x04), /* ADC10 Digital input Disable - SET */
} ADC_ADC10D_t;

/* ADC9 Digital input Disable */
typedef enum ADC_ADC9D_enum
{
    ADC_ADC9D_CLEAR_gc = (0x00), /* ADC9 Digital input Disable - CLEAR */
    ADC_ADC9D_SET_gc   = (0x02), /* ADC9 Digital input Disable - SET */
} ADC_ADC9D_t;

/* ADC8 Digital input Disable */
typedef enum ADC_ADC8D_enum
{
    ADC_ADC8D_CLEAR_gc = (0x00), /* ADC8 Digital input Disable - CLEAR */
    ADC_ADC8D_SET_gc   = (0x01), /* ADC8 Digital input Disable - SET */
} ADC_ADC8D_t;

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

/* ADC4 Digital input Disable */
typedef enum ADC_ADC4D_enum
{
    ADC_ADC4D_CLEAR_gc = (0x00), /* ADC4 Digital input Disable - CLEAR */
    ADC_ADC4D_SET_gc   = (0x10), /* ADC4 Digital input Disable - SET */
} ADC_ADC4D_t;

/* ADC3 Digital input Disable */
typedef enum ADC_ADC3D_enum
{
    ADC_ADC3D_CLEAR_gc = (0x00), /* ADC3 Digital input Disable - CLEAR */
    ADC_ADC3D_SET_gc   = (0x08), /* ADC3 Digital input Disable - SET */
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
    register8_t rsv_0x00[79]; /* RESERVED REGISTER BLOCK */
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

/* Analog Comparator Negative Input Multiplexer */
#define AC_ACSRB_ACNMUX_gc(x) ((x<<2) & 0x0C)

/* Analog Comparator Positive Input Multiplexer Bits 1:0 */
#define AC_ACSRB_ACPMUX_gc(x) (x & 0x03)

/* Analog Comparator Disable */
typedef enum AC_ACD_enum
{
    AC_ACD_CLEAR_gc = (0x00), /* Analog Comparator Disable - CLEAR */
    AC_ACD_SET_gc   = (0x80), /* Analog Comparator Disable - SET */
} AC_ACD_t;

/* Analog Comparator Positive Input Multiplexer Bit 2 */
typedef enum AC_ACPMUX2_enum
{
    AC_ACPMUX2_CLEAR_gc = (0x00), /* Analog Comparator Positive Input Multiplexer Bit 2 - CLEAR */
    AC_ACPMUX2_SET_gc   = (0x40), /* Analog Comparator Positive Input Multiplexer Bit 2 - SET */
} AC_ACPMUX2_t;

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
EXINT - External Interrupts
--------------------------------------------------------------------------------
*/

typedef struct EXINT_struct
{
    register8_t rsv_0x00[59]; /* RESERVED REGISTER BLOCK */
    register8_t PCIFR;        /* Pin Change Interrupt Flag Register */
    register8_t EIFR;         /* External Interrupt Flag Register */
    register8_t EIMSK;        /* External Interrupt Mask Register */
    register8_t rsv_0x3E[42]; /* RESERVED REGISTER BLOCK */
    register8_t PCICR;        /* Pin Change Interrupt Control Register */
    register8_t EICRA;        /* External Interrupt Control Register */
    register8_t rsv_0x6A;     /* RESERVED REGISTER */
    register8_t PCMSK0;       /* Pin Change Mask Register 0 */
    register8_t PCMSK1;       /* Pin Change Mask Register 1 */
    register8_t PCMSK2;       /* Pin Change Mask Register 2 */
    register8_t rsv_0x6E[5];  /* RESERVED REGISTER BLOCK */
    register8_t PCMSK3;       /* Pin Change Mask Register 3 */
} EXINT_t;


/* External Interrupt Sense Control 1 Bits */
typedef enum EXINT_ISC1_enum
{
    EXINT_ISC1_VAL_0x00_gc = (0x00<<2), /* Low Level of INTX */
    EXINT_ISC1_VAL_0x01_gc = (0x01<<2), /* Any Logical Change of INTX */
    EXINT_ISC1_VAL_0x02_gc = (0x02<<2), /* Falling Edge of INTX */
    EXINT_ISC1_VAL_0x03_gc = (0x03<<2), /* Rising Edge of INTX */
} EXINT_ISC1_t;

/* External Interrupt Sense Control 0 Bits */
typedef enum EXINT_ISC0_enum
{
    EXINT_ISC0_VAL_0x00_gc = (0x00), /* Low Level of INTX */
    EXINT_ISC0_VAL_0x01_gc = (0x01), /* Any Logical Change of INTX */
    EXINT_ISC0_VAL_0x02_gc = (0x02), /* Falling Edge of INTX */
    EXINT_ISC0_VAL_0x03_gc = (0x03), /* Rising Edge of INTX */
} EXINT_ISC0_t;

/*
--------------------------------------------------------------------------------
WDT - Watchdog Timer
--------------------------------------------------------------------------------
*/

typedef struct WDT_struct
{
    register8_t rsv_0x00[96]; /* RESERVED REGISTER BLOCK */
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
EEPROM - EEPROM
--------------------------------------------------------------------------------
*/

typedef struct EEPROM_struct
{
    register8_t rsv_0x00[63]; /* RESERVED REGISTER BLOCK */
    register8_t EECR;         /* EEPROM Control Register */
    register8_t EEDR;         /* EEPROM Data Register */
    register8_t EEAR;         /* EEPROM Read/Write Access */
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
TWI - Two Wire Serial Interface
--------------------------------------------------------------------------------
*/

typedef struct TWI_struct
{
    register8_t rsv_0x00[184]; /* RESERVED REGISTER BLOCK */
    register8_t TWSCRA;        /* TWI Slave Control Register A */
    register8_t TWSCRB;        /* TWI Slave Control Register B */
    register8_t TWSSRA;        /* TWI Slave Status Register A */
    register8_t TWSAM;         /* TWI Slave Address Mask Register */
    register8_t TWSA;          /* TWI Slave Address Register */
    register8_t TWSD;          /* TWI Slave Data Register */
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
USART - USART
--------------------------------------------------------------------------------
*/

typedef struct USART_struct
{
    register8_t rsv_0x00[192]; /* RESERVED REGISTER BLOCK */
    register8_t UCSRA;         /* USART Control and Status Register A */
    register8_t UCSRB;         /* USART Control and Status Register B */
    register8_t UCSRC;         /* USART Control and Status Register C */
    register8_t UCSRD;         /* USART Control and Status Register D */
    _REGISTER16 (UBRR);        /* USART Baud Rate Register  Bytes */
    register8_t rsv_0xC5;      /* RESERVED REGISTER */
    register8_t UDR;           /* USART I/O Data Register */
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

/* USART RX Start Frame Detection Enable */
typedef enum USART_SFDE_enum
{
    USART_SFDE_CLEAR_gc = (0x00), /* USART RX Start Frame Detection Enable - CLEAR */
    USART_SFDE_SET_gc   = (0x20), /* USART RX Start Frame Detection Enable - SET */
} USART_SFDE_t;
/*
================================================================================
IO Module Instances. Mapped to memory.
================================================================================
*/

#define SPI     (*(SPI_t *) 0x0000)     /* Serial Peripheral Interface */
#define PORTA   (*(PORTA_t *) 0x0000)   /* I/O Port */
#define PORTB   (*(PORTB_t *) 0x0000)   /* I/O Port */
#define PORTC   (*(PORTC_t *) 0x0000)   /* I/O Port */
#define PORTD   (*(PORTD_t *) 0x0000)   /* I/O Port */
#define CPU     (*(CPU_t *) 0x0000)     /* CPU Registers */
#define TC0     (*(TC0_t *) 0x0000)     /* Timer/Counter, 8-bit */
#define TC1     (*(TC1_t *) 0x0000)     /* Timer/Counter, 16-bit */
#define TOCPM   (*(TOCPM_t *) 0x0000)   /* Timer/Counter Output Compare Pin */
#define ADC     (*(ADC_t *) 0x0000)     /* Analog-to-Digital Converter */
#define AC      (*(AC_t *) 0x0000)      /* Analog Comparator */
#define EXINT   (*(EXINT_t *) 0x0000)   /* External Interrupts */
#define WDT     (*(WDT_t *) 0x0000)     /* Watchdog Timer */
#define EEPROM  (*(EEPROM_t *) 0x0000)  /* EEPROM */
#define TWI     (*(TWI_t *) 0x0000)     /* Two Wire Serial Interface */
#define USART   (*(USART_t *) 0x0000)   /* USART */
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


/* Select boot size */
#define FUSE_BOOTSZ_128W_0F80_gc  (0x03<<1) /* Boot Flash size=128 words Boot address=$0F80 */
#define FUSE_BOOTSZ_256W_0F00_gc  (0x02<<1) /* Boot Flash size=256 words Boot address=$0F00 */
#define FUSE_BOOTSZ_512W_0E00_gc  (0x01<<1) /* Boot Flash size=512 words Boot address=$0E00 */
#define FUSE_BOOTSZ_1024W_0C00_gc (0x00<<1) /* Boot Flash size=1024 words Boot address=$0C00 */


/* Boot Reset vector Enabled */
#define FUSE_BOOTRST_CLEAR_gc (0x00) /* Boot Reset vector Enabled - CLEAR */
#define FUSE_BOOTRST_SET_gc   (0x01) /* Boot Reset vector Enabled - SET */


/* BOD mode of operation when the device is in sleep mode */
#define FUSE_BODPD_BOD_SAMPLED_gc  (0x01<<6) /* Sampled */
#define FUSE_BODPD_BOD_ENABLED_gc  (0x02<<6) /* Enabled */
#define FUSE_BODPD_BOD_DISABLED_gc (0x03<<6) /* Disabled */


/* BOD mode of operation when the device is active or idle */
#define FUSE_BODACT_BOD_SAMPLED_gc  (0x01<<4) /* Sampled */
#define FUSE_BODACT_BOD_ENABLED_gc  (0x02<<4) /* Enabled */
#define FUSE_BODACT_BOD_DISABLED_gc (0x03<<4) /* Disabled */


/* Reset Disabled (Enable PC6 as i/o pin)] */
#define FUSE_RSTDISBL_CLEAR_gc (0x00) /* Reset Disabled (Enable PC6 as i/o pin)] - CLEAR */
#define FUSE_RSTDISBL_SET_gc   (0x80) /* Reset Disabled (Enable PC6 as i/o pin)] - SET */


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
#define FUSE_BODLEVEL_DISABLED_gc (0x07) /* Brown-out detection disabled */
#define FUSE_BODLEVEL_4V3_gc      (0x04) /* Brown-out detection at VCC=4.3 V */
#define FUSE_BODLEVEL_2V7_gc      (0x05) /* Brown-out detection at VCC=2.7 V */
#define FUSE_BODLEVEL_1V8_gc      (0x06) /* Brown-out detection at VCC=1.8 V */


/* Divide clock by 8 internally */
#define FUSE_CKDIV8_CLEAR_gc (0x00) /* Divide clock by 8 internally - CLEAR */
#define FUSE_CKDIV8_SET_gc   (0x80) /* Divide clock by 8 internally - SET */


/* Clock output on PORTB0 */
#define FUSE_CKOUT_CLEAR_gc (0x00) /* Clock output on PORTB0 - CLEAR */
#define FUSE_CKOUT_SET_gc   (0x40) /* Clock output on PORTB0 - SET */


/* Select Clock Source */
#define FUSE_SUT_CKSEL_EXTCLK_6CK_14CK_0MS_gc           (0x00) /* Ext. Clock; Start-up time PWRDWN/RESET: 6 + 14 CK + 0 ms */
/* WARNING: FUSE_SUT_CKSEL_EXTCLK_6CK_14CK_0MS_gc ALREADY DEFINED as '(0x00)' NOT '(0x01)' */
#define FUSE_SUT_CKSEL_EXTCLK_6CK_14CK_4MS1_gc          (0x10) /* Ext. Clock; Start-up time PWRDWN/RESET: 6 + 14 CK + 4.1 ms */
/* WARNING: FUSE_SUT_CKSEL_EXTCLK_6CK_14CK_4MS1_gc ALREADY DEFINED as '(0x10)' NOT '(0x11)' */
#define FUSE_SUT_CKSEL_EXTCLK_6CK_14CK_65MS_gc          (0x20) /* Ext. Clock; Start-up time PWRDWN/RESET: 6 + 14 CK + 65 ms */
/* WARNING: FUSE_SUT_CKSEL_EXTCLK_6CK_14CK_65MS_gc ALREADY DEFINED as '(0x20)' NOT '(0x30)' */
/* WARNING: FUSE_SUT_CKSEL_EXTCLK_6CK_14CK_65MS_gc ALREADY DEFINED as '(0x20)' NOT '(0x21)' */
/* WARNING: FUSE_SUT_CKSEL_EXTCLK_6CK_14CK_65MS_gc ALREADY DEFINED as '(0x20)' NOT '(0x31)' */
#define FUSE_SUT_CKSEL_INTRCOSC_8MHZ_6CK_14CK_0MS_gc    (0x02) /* Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 + 14 CK + 0 ms */
#define FUSE_SUT_CKSEL_INTRCOSC_8MHZ_6CK_14CK_4MS1_gc   (0x12) /* Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 + 14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_INTRCOSC_8MHZ_6CK_14CK_65MS_gc   (0x22) /* Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 + 14 CK + 65 ms */
/* WARNING: FUSE_SUT_CKSEL_INTRCOSC_8MHZ_6CK_14CK_65MS_gc ALREADY DEFINED as '(0x22)' NOT '(0x32)' */
#define FUSE_SUT_CKSEL_INTULPOSC_32KHZ_6CK_14CK_0MS_gc  (0x03) /* Int. ULP Osc. 32kHz; Start-up time PWRDWN/RESET: 6 + 14 CK + 0 ms */
#define FUSE_SUT_CKSEL_INTULPOSC_32KHZ_6CK_14CK_4MS1_gc (0x13) /* Int. ULP Osc. 32kHz; Start-up time PWRDWN/RESET: 6 + 14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_INTULPOSC_32KHZ_6CK_14CK_65MS_gc (0x23) /* Int. ULP Osc. 32kHz; Start-up time PWRDWN/RESET: 6 + 14 CK + 65 ms */
/* WARNING: FUSE_SUT_CKSEL_INTULPOSC_32KHZ_6CK_14CK_65MS_gc ALREADY DEFINED as '(0x23)' NOT '(0x33)' */


/*
--------------------------------------------------------------------------------
LOCKBIT - Lockbits
--------------------------------------------------------------------------------
*/


/* Memory Lock */
#define LOCKBIT_LB_PROG_VER_DISABLED_gc (0x00) /* Further programming and verification disabled */
#define LOCKBIT_LB_PROG_DISABLED_gc     (0x02) /* Further programming disabled */
#define LOCKBIT_LB_NO_LOCK_gc           (0x03) /* No memory lock features enabled */


/* Boot Loader Protection Mode */
#define LOCKBIT_BLB0_LPM_SPM_DISABLE_gc (0x00<<2) /* LPM and SPM prohibited in Application Section */
#define LOCKBIT_BLB0_LPM_DISABLE_gc     (0x01<<2) /* LPM prohibited in Application Section */
#define LOCKBIT_BLB0_SPM_DISABLE_gc     (0x02<<2) /* SPM prohibited in Application Section */
#define LOCKBIT_BLB0_NO_LOCK_gc         (0x03<<2) /* No lock on SPM and LPM in Application Section */


/* Boot Loader Protection Mode */
#define LOCKBIT_BLB1_LPM_SPM_DISABLE_gc (0x00<<4) /* LPM and SPM prohibited in Boot Section */
#define LOCKBIT_BLB1_LPM_DISABLE_gc     (0x01<<4) /* LPM prohibited in Boot Section */
#define LOCKBIT_BLB1_SPM_DISABLE_gc     (0x02<<4) /* SPM prohibited in Boot Section */
#define LOCKBIT_BLB1_NO_LOCK_gc         (0x03<<4) /* No lock on SPM and LPM in Boot Section */


/*
--------------------------------------------------------------------------------
SPI - Serial Peripheral Interface
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


/*
--------------------------------------------------------------------------------
PORT - I/O Port
--------------------------------------------------------------------------------
*/


/* Port C High Drive Enable */
#define PORTC_PHDEC_CLEAR_gc (0x00) /* Port C High Drive Enable - CLEAR */
#define PORTC_PHDEC_SET_gc   (0x04) /* Port C High Drive Enable - SET */


/*
--------------------------------------------------------------------------------
CPU - CPU Registers
--------------------------------------------------------------------------------
*/


/* Power Reduction TWI */
#define CPU_PRTWI_CLEAR_gc (0x00) /* Power Reduction TWI - CLEAR */
#define CPU_PRTWI_SET_gc   (0x80) /* Power Reduction TWI - SET */


/* Power Reduction Timer/Counter0 */
#define CPU_PRTIM0_CLEAR_gc (0x00) /* Power Reduction Timer/Counter0 - CLEAR */
#define CPU_PRTIM0_SET_gc   (0x20) /* Power Reduction Timer/Counter0 - SET */


/* Power Reduction Timer/Counter1 */
#define CPU_PRTIM1_CLEAR_gc (0x00) /* Power Reduction Timer/Counter1 - CLEAR */
#define CPU_PRTIM1_SET_gc   (0x08) /* Power Reduction Timer/Counter1 - SET */


/* Power Reduction SPI */
#define CPU_PRSPI_CLEAR_gc (0x00) /* Power Reduction SPI - CLEAR */
#define CPU_PRSPI_SET_gc   (0x04) /* Power Reduction SPI - SET */


/* Power Reduction USART 0 */
#define CPU_PRUSART0_CLEAR_gc (0x00) /* Power Reduction USART 0 - CLEAR */
#define CPU_PRUSART0_SET_gc   (0x02) /* Power Reduction USART 0 - SET */


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


/* Interrupt Vector Select */
#define CPU_IVSEL_CLEAR_gc (0x00) /* Interrupt Vector Select - CLEAR */
#define CPU_IVSEL_SET_gc   (0x02) /* Interrupt Vector Select - SET */


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


/* Sleep Mode Select Bits */
#define CPU_SM_IDLE_gc     (0x00<<1) /* Idle */
#define CPU_SM_ADC_gc      (0x01<<1) /* ADC Noise Reduction (If Available) */
#define CPU_SM_PDOWN_gc    (0x02<<1) /* Power Down */
#define CPU_SM_VAL_0x03_gc (0x03<<1) /* Reserved */


/* Sleep Enable */
#define CPU_SE_CLEAR_gc (0x00) /* Sleep Enable - CLEAR */
#define CPU_SE_SET_gc   (0x01) /* Sleep Enable - SET */


/* SPM Interrupt Enable */
#define CPU_SPMIE_CLEAR_gc (0x00) /* SPM Interrupt Enable - CLEAR */
#define CPU_SPMIE_SET_gc   (0x80) /* SPM Interrupt Enable - SET */


/* Read-While-Write Section Busy */
#define CPU_RWWSB_CLEAR_gc (0x00) /* Read-While-Write Section Busy - CLEAR */
#define CPU_RWWSB_SET_gc   (0x40) /* Read-While-Write Section Busy - SET */


/* Read Device Signature Imprint Table */
#define CPU_RSIG_CLEAR_gc (0x00) /* Read Device Signature Imprint Table - CLEAR */
#define CPU_RSIG_SET_gc   (0x20) /* Read Device Signature Imprint Table - SET */


/* Read-While-Write section read enable */
#define CPU_RWWSRE_CLEAR_gc (0x00) /* Read-While-Write section read enable - CLEAR */
#define CPU_RWWSRE_SET_gc   (0x10) /* Read-While-Write section read enable - SET */


/* Read/Write Fuse and Lock Bits */
#define CPU_RWFLB_CLEAR_gc (0x00) /* Read/Write Fuse and Lock Bits - CLEAR */
#define CPU_RWFLB_SET_gc   (0x08) /* Read/Write Fuse and Lock Bits - SET */


/* Page Write */
#define CPU_PGWRT_CLEAR_gc (0x00) /* Page Write - CLEAR */
#define CPU_PGWRT_SET_gc   (0x04) /* Page Write - SET */


/* Page Erase */
#define CPU_PGERS_CLEAR_gc (0x00) /* Page Erase - CLEAR */
#define CPU_PGERS_SET_gc   (0x02) /* Page Erase - SET */


/* Store Program Memory Enable */
#define CPU_SPMEN_CLEAR_gc (0x00) /* Store Program Memory Enable - CLEAR */
#define CPU_SPMEN_SET_gc   (0x01) /* Store Program Memory Enable - SET */


/*
--------------------------------------------------------------------------------
TC8 - Timer/Counter, 8-bit
--------------------------------------------------------------------------------
*/


/* Force Output Compare A */
#define TC0_FOC0A_CLEAR_gc (0x00) /* Force Output Compare A - CLEAR */
#define TC0_FOC0A_SET_gc   (0x80) /* Force Output Compare A - SET */


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


/* Compare Output Mode, Phase Correct PWM Mode */
#define TC0_TCCR0A_COM0A_gc(x) ((x<<6) & 0xC0)

/* Compare Output Mode, Fast PWm */
#define TC0_TCCR0A_COM0B_gc(x) ((x<<4) & 0x30)

/* Waveform Generation Mode */
#define TC0_TCCR0A_WGM0_gc(x) (x & 0x03)

/* Timer/Counter0 Output Compare Match B Interrupt Enable */
#define TC0_OCIE0B_CLEAR_gc (0x00) /* Timer/Counter0 Output Compare Match B Interrupt Enable - CLEAR */
#define TC0_OCIE0B_SET_gc   (0x04) /* Timer/Counter0 Output Compare Match B Interrupt Enable - SET */


/* Timer/Counter0 Output Compare Match A Interrupt Enable */
#define TC0_OCIE0A_CLEAR_gc (0x00) /* Timer/Counter0 Output Compare Match A Interrupt Enable - CLEAR */
#define TC0_OCIE0A_SET_gc   (0x02) /* Timer/Counter0 Output Compare Match A Interrupt Enable - SET */


/* Timer/Counter0 Overflow Interrupt Enable */
#define TC0_TOIE0_CLEAR_gc (0x00) /* Timer/Counter0 Overflow Interrupt Enable - CLEAR */
#define TC0_TOIE0_SET_gc   (0x01) /* Timer/Counter0 Overflow Interrupt Enable - SET */


/* Timer/Counter0 Output Compare Flag 0B */
#define TC0_OCF0B_CLEAR_gc (0x00) /* Timer/Counter0 Output Compare Flag 0B - CLEAR */
#define TC0_OCF0B_SET_gc   (0x04) /* Timer/Counter0 Output Compare Flag 0B - SET */


/* Timer/Counter0 Output Compare Flag 0A */
#define TC0_OCF0A_CLEAR_gc (0x00) /* Timer/Counter0 Output Compare Flag 0A - CLEAR */
#define TC0_OCF0A_SET_gc   (0x02) /* Timer/Counter0 Output Compare Flag 0A - SET */


/* Timer/Counter0 Overflow Flag */
#define TC0_TOV0_CLEAR_gc (0x00) /* Timer/Counter0 Overflow Flag - CLEAR */
#define TC0_TOV0_SET_gc   (0x01) /* Timer/Counter0 Overflow Flag - SET */


/* Timer/Counter Synchronization Mode */
#define TC0_TSM_CLEAR_gc (0x00) /* Timer/Counter Synchronization Mode - CLEAR */
#define TC0_TSM_SET_gc   (0x80) /* Timer/Counter Synchronization Mode - SET */


/* Prescaler Reset Timer/Counter1 and Timer/Counter0 */
#define TC0_PSRSYNC_CLEAR_gc (0x00) /* Prescaler Reset Timer/Counter1 and Timer/Counter0 - CLEAR */
#define TC0_PSRSYNC_SET_gc   (0x01) /* Prescaler Reset Timer/Counter1 and Timer/Counter0 - SET */


/*
--------------------------------------------------------------------------------
TC16 - Timer/Counter, 16-bit
--------------------------------------------------------------------------------
*/


/* Timer/Counter1 Input Capture Interrupt Enable */
#define TC1_ICIE1_CLEAR_gc (0x00) /* Timer/Counter1 Input Capture Interrupt Enable - CLEAR */
#define TC1_ICIE1_SET_gc   (0x20) /* Timer/Counter1 Input Capture Interrupt Enable - SET */


/* Timer/Counter1 Output CompareB Match Interrupt Enable */
#define TC1_OCIE1B_CLEAR_gc (0x00) /* Timer/Counter1 Output CompareB Match Interrupt Enable - CLEAR */
#define TC1_OCIE1B_SET_gc   (0x04) /* Timer/Counter1 Output CompareB Match Interrupt Enable - SET */


/* Timer/Counter1 Output CompareA Match Interrupt Enable */
#define TC1_OCIE1A_CLEAR_gc (0x00) /* Timer/Counter1 Output CompareA Match Interrupt Enable - CLEAR */
#define TC1_OCIE1A_SET_gc   (0x02) /* Timer/Counter1 Output CompareA Match Interrupt Enable - SET */


/* Timer/Counter1 Overflow Interrupt Enable */
#define TC1_TOIE1_CLEAR_gc (0x00) /* Timer/Counter1 Overflow Interrupt Enable - CLEAR */
#define TC1_TOIE1_SET_gc   (0x01) /* Timer/Counter1 Overflow Interrupt Enable - SET */


/* Input Capture Flag 1 */
#define TC1_ICF1_CLEAR_gc (0x00) /* Input Capture Flag 1 - CLEAR */
#define TC1_ICF1_SET_gc   (0x20) /* Input Capture Flag 1 - SET */


/* Output Compare Flag 1B */
#define TC1_OCF1B_CLEAR_gc (0x00) /* Output Compare Flag 1B - CLEAR */
#define TC1_OCF1B_SET_gc   (0x04) /* Output Compare Flag 1B - SET */


/* Output Compare Flag 1A */
#define TC1_OCF1A_CLEAR_gc (0x00) /* Output Compare Flag 1A - CLEAR */
#define TC1_OCF1A_SET_gc   (0x02) /* Output Compare Flag 1A - SET */


/* Timer/Counter1 Overflow Flag */
#define TC1_TOV1_CLEAR_gc (0x00) /* Timer/Counter1 Overflow Flag - CLEAR */
#define TC1_TOV1_SET_gc   (0x01) /* Timer/Counter1 Overflow Flag - SET */


/* Compare Output Mode 1A, bits */
#define TC1_TCCR1A_COM1A_gc(x) ((x<<6) & 0xC0)

/* Compare Output Mode 1B, bits */
#define TC1_TCCR1A_COM1B_gc(x) ((x<<4) & 0x30)

/* Waveform Generation Mode */
#define TC1_TCCR1A_WGM1_gc(x) (x & 0x03)

/* Input Capture 1 Noise Canceler */
#define TC1_ICNC1_CLEAR_gc (0x00) /* Input Capture 1 Noise Canceler - CLEAR */
#define TC1_ICNC1_SET_gc   (0x80) /* Input Capture 1 Noise Canceler - SET */


/* Input Capture 1 Edge Select */
#define TC1_ICES1_CLEAR_gc (0x00) /* Input Capture 1 Edge Select - CLEAR */
#define TC1_ICES1_SET_gc   (0x40) /* Input Capture 1 Edge Select - SET */


/* Waveform Generation Mode */
#define TC1_TCCR1B_WGM1_gc(x) ((x<<3) & 0x18)

/* Prescaler source of Timer/Counter 1 */
#define TC1_CS1_VAL_0x00_gc (0x00) /* No Clock Source (Stopped) */
#define TC1_CS1_VAL_0x01_gc (0x01) /* Running, No Prescaling */
#define TC1_CS1_VAL_0x02_gc (0x02) /* Running, CLK/8 */
#define TC1_CS1_VAL_0x03_gc (0x03) /* Running, CLK/64 */
#define TC1_CS1_VAL_0x04_gc (0x04) /* Running, CLK/256 */
#define TC1_CS1_VAL_0x05_gc (0x05) /* Running, CLK/1024 */
#define TC1_CS1_VAL_0x06_gc (0x06) /* Running, ExtClk Tx Falling Edge */
#define TC1_CS1_VAL_0x07_gc (0x07) /* Running, ExtClk Tx Rising Edge */


/* Timer/Counter1 Control Register C-FOC1A */
#define TC1_FOC1A_CLEAR_gc (0x00) /* Timer/Counter1 Control Register C-FOC1A - CLEAR */
#define TC1_FOC1A_SET_gc   (0x80) /* Timer/Counter1 Control Register C-FOC1A - SET */


/* Timer/Counter1 Control Register C-FOC1B */
#define TC1_FOC1B_CLEAR_gc (0x00) /* Timer/Counter1 Control Register C-FOC1B - CLEAR */
#define TC1_FOC1B_SET_gc   (0x40) /* Timer/Counter1 Control Register C-FOC1B - SET */


/* Timer/Counter Synchronization Mode */
#define TC1_TSM_CLEAR_gc (0x00) /* Timer/Counter Synchronization Mode - CLEAR */
#define TC1_TSM_SET_gc   (0x80) /* Timer/Counter Synchronization Mode - SET */


/* Prescaler Reset Timer/Counter1 and Timer/Counter0 */
#define TC1_PSRSYNC_CLEAR_gc (0x00) /* Prescaler Reset Timer/Counter1 and Timer/Counter0 - CLEAR */
#define TC1_PSRSYNC_SET_gc   (0x01) /* Prescaler Reset Timer/Counter1 and Timer/Counter0 - SET */


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
ADC - Analog-to-Digital Converter
--------------------------------------------------------------------------------
*/


/* Reference Selection Bit */
#define ADC_REFS_CLEAR_gc (0x00) /* Reference Selection Bit - CLEAR */
#define ADC_REFS_SET_gc   (0x20) /* Reference Selection Bit - SET */


/* Analog Channel Selection Bit 5 */
#define ADC_MUX5_CLEAR_gc (0x00) /* Analog Channel Selection Bit 5 - CLEAR */
#define ADC_MUX5_SET_gc   (0x01) /* Analog Channel Selection Bit 5 - SET */


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
#define ADC_ADTS_VAL_0x07_gc (0x07) /* Timer/Counter1 Capture Event */


/* ADC27 Digital input Disable */
#define ADC_ADC27D_CLEAR_gc (0x00) /* ADC27 Digital input Disable - CLEAR */
#define ADC_ADC27D_SET_gc   (0x08) /* ADC27 Digital input Disable - SET */


/* ADC26 Digital input Disable */
#define ADC_ADC26D_CLEAR_gc (0x00) /* ADC26 Digital input Disable - CLEAR */
#define ADC_ADC26D_SET_gc   (0x04) /* ADC26 Digital input Disable - SET */


/* ADC25 Digital input Disable */
#define ADC_ADC25D_CLEAR_gc (0x00) /* ADC25 Digital input Disable - CLEAR */
#define ADC_ADC25D_SET_gc   (0x02) /* ADC25 Digital input Disable - SET */


/* ADC24 Digital input Disable */
#define ADC_ADC24D_CLEAR_gc (0x00) /* ADC24 Digital input Disable - CLEAR */
#define ADC_ADC24D_SET_gc   (0x01) /* ADC24 Digital input Disable - SET */


/* ADC23 Digital input Disable */
#define ADC_ADC23D_CLEAR_gc (0x00) /* ADC23 Digital input Disable - CLEAR */
#define ADC_ADC23D_SET_gc   (0x80) /* ADC23 Digital input Disable - SET */


/* ADC22 Digital input Disable */
#define ADC_ADC22D_CLEAR_gc (0x00) /* ADC22 Digital input Disable - CLEAR */
#define ADC_ADC22D_SET_gc   (0x40) /* ADC22 Digital input Disable - SET */


/* ADC21 Digital input Disable */
#define ADC_ADC21D_CLEAR_gc (0x00) /* ADC21 Digital input Disable - CLEAR */
#define ADC_ADC21D_SET_gc   (0x20) /* ADC21 Digital input Disable - SET */


/* ADC20 Digital input Disable */
#define ADC_ADC20D_CLEAR_gc (0x00) /* ADC20 Digital input Disable - CLEAR */
#define ADC_ADC20D_SET_gc   (0x10) /* ADC20 Digital input Disable - SET */


/* ADC19 Digital input Disable */
#define ADC_ADC19D_CLEAR_gc (0x00) /* ADC19 Digital input Disable - CLEAR */
#define ADC_ADC19D_SET_gc   (0x08) /* ADC19 Digital input Disable - SET */


/* ADC18 Digital input Disable */
#define ADC_ADC18D_CLEAR_gc (0x00) /* ADC18 Digital input Disable - CLEAR */
#define ADC_ADC18D_SET_gc   (0x04) /* ADC18 Digital input Disable - SET */


/* ADC17 Digital input Disable */
#define ADC_ADC17D_CLEAR_gc (0x00) /* ADC17 Digital input Disable - CLEAR */
#define ADC_ADC17D_SET_gc   (0x02) /* ADC17 Digital input Disable - SET */


/* ADC16 Digital input Disable */
#define ADC_ADC16D_CLEAR_gc (0x00) /* ADC16 Digital input Disable - CLEAR */
#define ADC_ADC16D_SET_gc   (0x01) /* ADC16 Digital input Disable - SET */


/* ADC15 Digital input Disable */
#define ADC_ADC15D_CLEAR_gc (0x00) /* ADC15 Digital input Disable - CLEAR */
#define ADC_ADC15D_SET_gc   (0x80) /* ADC15 Digital input Disable - SET */


/* ADC14 Digital input Disable */
#define ADC_ADC14D_CLEAR_gc (0x00) /* ADC14 Digital input Disable - CLEAR */
#define ADC_ADC14D_SET_gc   (0x40) /* ADC14 Digital input Disable - SET */


/* ADC13 Digital input Disable */
#define ADC_ADC13D_CLEAR_gc (0x00) /* ADC13 Digital input Disable - CLEAR */
#define ADC_ADC13D_SET_gc   (0x20) /* ADC13 Digital input Disable - SET */


/* ADC12 Digital input Disable */
#define ADC_ADC12D_CLEAR_gc (0x00) /* ADC12 Digital input Disable - CLEAR */
#define ADC_ADC12D_SET_gc   (0x10) /* ADC12 Digital input Disable - SET */


/* ADC11 Digital input Disable */
#define ADC_ADC11D_CLEAR_gc (0x00) /* ADC11 Digital input Disable - CLEAR */
#define ADC_ADC11D_SET_gc   (0x08) /* ADC11 Digital input Disable - SET */


/* ADC10 Digital input Disable */
#define ADC_ADC10D_CLEAR_gc (0x00) /* ADC10 Digital input Disable - CLEAR */
#define ADC_ADC10D_SET_gc   (0x04) /* ADC10 Digital input Disable - SET */


/* ADC9 Digital input Disable */
#define ADC_ADC9D_CLEAR_gc (0x00) /* ADC9 Digital input Disable - CLEAR */
#define ADC_ADC9D_SET_gc   (0x02) /* ADC9 Digital input Disable - SET */


/* ADC8 Digital input Disable */
#define ADC_ADC8D_CLEAR_gc (0x00) /* ADC8 Digital input Disable - CLEAR */
#define ADC_ADC8D_SET_gc   (0x01) /* ADC8 Digital input Disable - SET */


/* ADC7 Digital input Disable */
#define ADC_ADC7D_CLEAR_gc (0x00) /* ADC7 Digital input Disable - CLEAR */
#define ADC_ADC7D_SET_gc   (0x80) /* ADC7 Digital input Disable - SET */


/* ADC6 Digital input Disable */
#define ADC_ADC6D_CLEAR_gc (0x00) /* ADC6 Digital input Disable - CLEAR */
#define ADC_ADC6D_SET_gc   (0x40) /* ADC6 Digital input Disable - SET */


/* ADC5 Digital input Disable */
#define ADC_ADC5D_CLEAR_gc (0x00) /* ADC5 Digital input Disable - CLEAR */
#define ADC_ADC5D_SET_gc   (0x20) /* ADC5 Digital input Disable - SET */


/* ADC4 Digital input Disable */
#define ADC_ADC4D_CLEAR_gc (0x00) /* ADC4 Digital input Disable - CLEAR */
#define ADC_ADC4D_SET_gc   (0x10) /* ADC4 Digital input Disable - SET */


/* ADC3 Digital input Disable */
#define ADC_ADC3D_CLEAR_gc (0x00) /* ADC3 Digital input Disable - CLEAR */
#define ADC_ADC3D_SET_gc   (0x08) /* ADC3 Digital input Disable - SET */


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


/* Analog Comparator Negative Input Multiplexer */
#define AC_ACSRB_ACNMUX_gc(x) ((x<<2) & 0x0C)

/* Analog Comparator Positive Input Multiplexer Bits 1:0 */
#define AC_ACSRB_ACPMUX_gc(x) (x & 0x03)

/* Analog Comparator Disable */
#define AC_ACD_CLEAR_gc (0x00) /* Analog Comparator Disable - CLEAR */
#define AC_ACD_SET_gc   (0x80) /* Analog Comparator Disable - SET */


/* Analog Comparator Positive Input Multiplexer Bit 2 */
#define AC_ACPMUX2_CLEAR_gc (0x00) /* Analog Comparator Positive Input Multiplexer Bit 2 - CLEAR */
#define AC_ACPMUX2_SET_gc   (0x40) /* Analog Comparator Positive Input Multiplexer Bit 2 - SET */


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
EXINT - External Interrupts
--------------------------------------------------------------------------------
*/


/* External Interrupt Sense Control 1 Bits */
#define EXINT_ISC1_VAL_0x00_gc (0x00<<2) /* Low Level of INTX */
#define EXINT_ISC1_VAL_0x01_gc (0x01<<2) /* Any Logical Change of INTX */
#define EXINT_ISC1_VAL_0x02_gc (0x02<<2) /* Falling Edge of INTX */
#define EXINT_ISC1_VAL_0x03_gc (0x03<<2) /* Rising Edge of INTX */


/* External Interrupt Sense Control 0 Bits */
#define EXINT_ISC0_VAL_0x00_gc (0x00) /* Low Level of INTX */
#define EXINT_ISC0_VAL_0x01_gc (0x01) /* Any Logical Change of INTX */
#define EXINT_ISC0_VAL_0x02_gc (0x02) /* Falling Edge of INTX */
#define EXINT_ISC0_VAL_0x03_gc (0x03) /* Rising Edge of INTX */


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


/* USART RX Start Frame Detection Enable */
#define USART_SFDE_CLEAR_gc (0x00) /* USART RX Start Frame Detection Enable - CLEAR */
#define USART_SFDE_SET_gc   (0x20) /* USART RX Start Frame Detection Enable - SET */

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


/* SPI - Serial Peripheral Interface (0x0000) */
#define SPI_BASE        _SFR_MEM8 (0x0000) /* SPI Base Address */
#define SPI_SPCR        _SFR_MEM8 (0x004C) /* SPI Control Register */
#define SPI_SPSR        _SFR_MEM8 (0x004D) /* SPI Status Register */
#define SPI_SPDR        _SFR_MEM8 (0x004E) /* SPI Data Register */

/* PORTA - I/O Port (0x0000) */
#define PORTAA_BASE     _SFR_MEM8 (0x0000) /* PORTAA Base Address */
#define PORTAA_PINA     _SFR_MEM8 (0x0020) /* Port A Input Pins */
#define PORTAA_DDRA     _SFR_MEM8 (0x0021) /* Data Direction Register, Port A */
#define PORTAA_PORTA    _SFR_MEM8 (0x0022) /* Port A Data Register */
#define PORTAA_PUEA     _SFR_MEM8 (0x0023) /* Pull-up Enable Control Register */

/* PORTB - I/O Port (0x0000) */
#define PORTBB_BASE     _SFR_MEM8 (0x0000) /* PORTBB Base Address */
#define PORTBB_PINB     _SFR_MEM8 (0x0024) /* Port B Input Pins */
#define PORTBB_DDRB     _SFR_MEM8 (0x0025) /* Data Direction Register, Port B */
#define PORTBB_PORTB    _SFR_MEM8 (0x0026) /* Port B Data Register */
#define PORTBB_PUEB     _SFR_MEM8 (0x0027) /* Pull-up Enable Control Register */

/* PORTC - I/O Port (0x0000) */
#define PORTCC_BASE     _SFR_MEM8 (0x0000) /* PORTCC Base Address */
#define PORTCC_PINC     _SFR_MEM8 (0x0028) /* Port C Input Pins */
#define PORTCC_DDRC     _SFR_MEM8 (0x0029) /* Data Direction Register, Port C */
#define PORTCC_PORTC    _SFR_MEM8 (0x002A) /* Port C Data Register */
#define PORTCC_PUEC     _SFR_MEM8 (0x002B) /* Pull-up Enable Control Register */
#define PORTCC_PHDE     _SFR_MEM8 (0x0034) /* Port High Drive Enable Register */

/* PORTD - I/O Port (0x0000) */
#define PORTDD_BASE     _SFR_MEM8 (0x0000) /* PORTDD Base Address */
#define PORTDD_PIND     _SFR_MEM8 (0x002C) /* Port D Input Pins */
#define PORTDD_DDRD     _SFR_MEM8 (0x002D) /* Data Direction Register, Port D */
#define PORTDD_PORTD    _SFR_MEM8 (0x002E) /* Port D Data Register */
#define PORTDD_PUED     _SFR_MEM8 (0x002F) /* Pull-up Enable Control Register */

/* CPU - CPU Registers (0x0000) */
#define CPU_BASE        _SFR_MEM8 (0x0000) /* CPU Base Address */
#define CPU_GPIOR0      _SFR_MEM8 (0x003E) /* General Purpose I/O Register 0 */
#define CPU_GPIOR1      _SFR_MEM8 (0x004A) /* General Purpose I/O Register 1 */
#define CPU_GPIOR2      _SFR_MEM8 (0x004B) /* General Purpose I/O Register 2 */
#define CPU_SMCR        _SFR_MEM8 (0x0053) /* Sleep Mode Control Register */
#define CPU_MCUSR       _SFR_MEM8 (0x0054) /* MCU Status Register */
#define CPU_MCUCR       _SFR_MEM8 (0x0055) /* MCU Control Register */
#define CPU_CCP         _SFR_MEM8 (0x0056) /* Configuration Change Protection */
#define CPU_SPMCSR      _SFR_MEM8 (0x0057) /* Store Program Memory Control and Status Register */
#define CPU_SP          _SFR_MEM16(0x005D) /* Stack Pointer  */
#define CPU_SPL         _SFR_MEM8 (0x005D) /* Stack Pointer  LOW BYTE */
#define CPU_SPH         _SFR_MEM8 (0x005E) /* Stack Pointer  HIGH BYTE */
#define CPU_SREG        _SFR_MEM8 (0x005F) /* Status Register */
#define CPU_CLKPR       _SFR_MEM8 (0x0061) /* Clock Prescale Register */
#define CPU_PRR         _SFR_MEM8 (0x0064) /* Power Reduction Register */
#define CPU_OSCCAL0     _SFR_MEM8 (0x0066) /* Oscillator Calibration Register 8MHz */
#define CPU_OSCCAL1     _SFR_MEM8 (0x0067) /* Oscillator Calibration Register 32kHz */
#define CPU_OSCTCAL0A   _SFR_MEM8 (0x00F0) /* Oscillator Temperature Calibration Register A */
#define CPU_OSCTCAL0B   _SFR_MEM8 (0x00F1) /* Oscillator Temperature Calibration Register B */

/* TC0 - Timer/Counter, 8-bit (0x0000) */
#define TC8_BASE        _SFR_MEM8 (0x0000) /* TC8 Base Address */
#define TC8_TIFR0       _SFR_MEM8 (0x0035) /* Timer/Counter0 Interrupt Flag register */
#define TC8_GTCCR       _SFR_MEM8 (0x0043) /* General Timer/Counter Control Register */
#define TC8_TCCR0A      _SFR_MEM8 (0x0044) /* Timer/Counter  Control Register A */
#define TC8_TCCR0B      _SFR_MEM8 (0x0045) /* Timer/Counter Control Register B */
#define TC8_TCNT0       _SFR_MEM8 (0x0046) /* Timer/Counter0 */
#define TC8_OCR0A       _SFR_MEM8 (0x0047) /* Timer/Counter0 Output Compare Register */
#define TC8_OCR0B       _SFR_MEM8 (0x0048) /* Timer/Counter0 Output Compare Register */
#define TC8_TIMSK0      _SFR_MEM8 (0x006E) /* Timer/Counter0 Interrupt Mask Register */

/* TC1 - Timer/Counter, 16-bit (0x0000) */
#define TC16_BASE       _SFR_MEM8 (0x0000) /* TC16 Base Address */
#define TC16_TIFR1      _SFR_MEM8 (0x0036) /* Timer/Counter Interrupt Flag register */
#define TC16_GTCCR      _SFR_MEM8 (0x0043) /* General Timer/Counter Control Register */
#define TC16_TIMSK1     _SFR_MEM8 (0x006F) /* Timer/Counter Interrupt Mask Register */
#define TC16_TCCR1A     _SFR_MEM8 (0x0080) /* Timer/Counter1 Control Register A */
#define TC16_TCCR1B     _SFR_MEM8 (0x0081) /* Timer/Counter1 Control Register B */
#define TC16_TCCR1C     _SFR_MEM8 (0x0082) /* Timer/Counter1 Control Register C */
#define TC16_TCNT1      _SFR_MEM16(0x0084) /* Timer/Counter1  Bytes */
#define TC16_TCNT1L     _SFR_MEM8 (0x0084) /* Timer/Counter1  Bytes LOW BYTE */
#define TC16_TCNT1H     _SFR_MEM8 (0x0085) /* Timer/Counter1  Bytes HIGH BYTE */
#define TC16_ICR1       _SFR_MEM16(0x0086) /* Timer/Counter1 Input Capture Register  Bytes */
#define TC16_ICR1L      _SFR_MEM8 (0x0086) /* Timer/Counter1 Input Capture Register  Bytes LOW BYTE */
#define TC16_ICR1H      _SFR_MEM8 (0x0087) /* Timer/Counter1 Input Capture Register  Bytes HIGH BYTE */
#define TC16_OCR1A      _SFR_MEM16(0x0088) /* Timer/Counter1 Output Compare Register  Bytes */
#define TC16_OCR1AL     _SFR_MEM8 (0x0088) /* Timer/Counter1 Output Compare Register  Bytes LOW BYTE */
#define TC16_OCR1AH     _SFR_MEM8 (0x0089) /* Timer/Counter1 Output Compare Register  Bytes HIGH BYTE */
#define TC16_OCR1B      _SFR_MEM16(0x008A) /* Timer/Counter1 Output Compare Register  Bytes */
#define TC16_OCR1BL     _SFR_MEM8 (0x008A) /* Timer/Counter1 Output Compare Register  Bytes LOW BYTE */
#define TC16_OCR1BH     _SFR_MEM8 (0x008B) /* Timer/Counter1 Output Compare Register  Bytes HIGH BYTE */

/* TOCPM - Timer/Counter Output Compare Pin (0x0000) */
#define TOCPM_BASE      _SFR_MEM8 (0x0000) /* TOCPM Base Address */
#define TOCPM_TOCPMCOE  _SFR_MEM8 (0x00E2) /* Timer Output Compare Pin Mux Channel Output Enable */
#define TOCPM_TOCPMSA0  _SFR_MEM8 (0x00E8) /* Timer Output Compare Pin Mux Selection 0 */
#define TOCPM_TOCPMSA1  _SFR_MEM8 (0x00E9) /* Timer Output Compare Pin Mux Selection 1 */

/* ADC - Analog-to-Digital Converter (0x0000) */
#define ADC_BASE        _SFR_MEM16(0x0000) /* ADC Base Address */
#define ADC_ADC         _SFR_MEM16(0x0078) /* ADC Data Register  Bytes */
#define ADC_ADCL        _SFR_MEM8 (0x0078) /* ADC Data Register  Bytes LOW BYTE */
#define ADC_ADCH        _SFR_MEM8 (0x0079) /* ADC Data Register  Bytes HIGH BYTE */
#define ADC_ADCSRA      _SFR_MEM8 (0x007A) /* The ADC Control and Status register */
#define ADC_ADCSRB      _SFR_MEM8 (0x007B) /* ADC Control and Status Register B */
#define ADC_ADMUXA      _SFR_MEM8 (0x007C) /* The ADC multiplexer Selection Register A */
#define ADC_ADMUXB      _SFR_MEM8 (0x007D) /* The ADC multiplexer Selection Register B */
#define ADC_DIDR0       _SFR_MEM8 (0x007E) /* Digital Input Disable Register 0 */
#define ADC_DIDR1       _SFR_MEM8 (0x007F) /* Digital Input Disable Register 1 */
#define ADC_DIDR2       _SFR_MEM8 (0x00DE) /* Digital Input Disable Register 2 */
#define ADC_DIDR3       _SFR_MEM8 (0x00DF) /* Digital Input Disable Register 2 */

/* AC - Analog Comparator (0x0000) */
#define AC_BASE         _SFR_MEM8 (0x0000) /* AC Base Address */
#define AC_ACSRB        _SFR_MEM8 (0x004F) /* Analog Comparator Control And Status Register B */
#define AC_ACSRA        _SFR_MEM8 (0x0050) /* Analog Comparator Control And Status Register A */

/* EXINT - External Interrupts (0x0000) */
#define EXINT_BASE      _SFR_MEM8 (0x0000) /* EXINT Base Address */
#define EXINT_PCIFR     _SFR_MEM8 (0x003B) /* Pin Change Interrupt Flag Register */
#define EXINT_EIFR      _SFR_MEM8 (0x003C) /* External Interrupt Flag Register */
#define EXINT_EIMSK     _SFR_MEM8 (0x003D) /* External Interrupt Mask Register */
#define EXINT_PCICR     _SFR_MEM8 (0x0068) /* Pin Change Interrupt Control Register */
#define EXINT_EICRA     _SFR_MEM8 (0x0069) /* External Interrupt Control Register */
#define EXINT_PCMSK0    _SFR_MEM8 (0x006B) /* Pin Change Mask Register 0 */
#define EXINT_PCMSK1    _SFR_MEM8 (0x006C) /* Pin Change Mask Register 1 */
#define EXINT_PCMSK2    _SFR_MEM8 (0x006D) /* Pin Change Mask Register 2 */
#define EXINT_PCMSK3    _SFR_MEM8 (0x0073) /* Pin Change Mask Register 3 */

/* WDT - Watchdog Timer (0x0000) */
#define WDT_BASE        _SFR_MEM8 (0x0000) /* WDT Base Address */
#define WDT_WDTCSR      _SFR_MEM8 (0x0060) /* Watchdog Timer Control and Status Register */

/* EEPROM - EEPROM (0x0000) */
#define EEPROM_BASE     _SFR_MEM8 (0x0000) /* EEPROM Base Address */
#define EEPROM_EECR     _SFR_MEM8 (0x003F) /* EEPROM Control Register */
#define EEPROM_EEDR     _SFR_MEM8 (0x0040) /* EEPROM Data Register */
#define EEPROM_EEAR     _SFR_MEM8 (0x0041) /* EEPROM Read/Write Access */

/* TWI - Two Wire Serial Interface (0x0000) */
#define TWI_BASE        _SFR_MEM8 (0x0000) /* TWI Base Address */
#define TWI_TWSCRA      _SFR_MEM8 (0x00B8) /* TWI Slave Control Register A */
#define TWI_TWSCRB      _SFR_MEM8 (0x00B9) /* TWI Slave Control Register B */
#define TWI_TWSSRA      _SFR_MEM8 (0x00BA) /* TWI Slave Status Register A */
#define TWI_TWSAM       _SFR_MEM8 (0x00BB) /* TWI Slave Address Mask Register */
#define TWI_TWSA        _SFR_MEM8 (0x00BC) /* TWI Slave Address Register */
#define TWI_TWSD        _SFR_MEM8 (0x00BD) /* TWI Slave Data Register */

/* USART - USART (0x0000) */
#define USART_BASE      _SFR_MEM8 (0x0000) /* USART Base Address */
#define USART_UCSRA     _SFR_MEM8 (0x00C0) /* USART Control and Status Register A */
#define USART_UCSRB     _SFR_MEM8 (0x00C1) /* USART Control and Status Register B */
#define USART_UCSRC     _SFR_MEM8 (0x00C2) /* USART Control and Status Register C */
#define USART_UCSRD     _SFR_MEM8 (0x00C3) /* USART Control and Status Register D */
#define USART_UBRR      _SFR_MEM16(0x00C4) /* USART Baud Rate Register  Bytes */
#define USART_UBRRL     _SFR_MEM8 (0x00C4) /* USART Baud Rate Register  Bytes LOW BYTE */
#define USART_UBRRH     _SFR_MEM8 (0x00C5) /* USART Baud Rate Register  Bytes HIGH BYTE */
#define USART_UDR       _SFR_MEM8 (0x00C6) /* USART I/O Data Register */

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
#define None_INT1_vect_num         (2)                 
#define None_INT1_vect             _VECTOR(2)          /* External Interrupt Request 1 */
#define None_PCINT0_vect_num       (3)                 
#define None_PCINT0_vect           _VECTOR(3)          /* Pin Change Interrupt Request 0 */
#define None_PCINT1_vect_num       (4)                 
#define None_PCINT1_vect           _VECTOR(4)          /* Pin Change Interrupt Request 1 */
#define None_PCINT2_vect_num       (5)                 
#define None_PCINT2_vect           _VECTOR(5)          /* Pin Change Interrupt Request 2 */
#define None_PCINT3_vect_num       (6)                 
#define None_PCINT3_vect           _VECTOR(6)          /* Pin Change Interrupt Request 3 */
#define None_WDT_vect_num          (7)                 
#define None_WDT_vect              _VECTOR(7)          /* Watchdog Time-out Interrupt */
#define None_TIMER1_CAPT_vect_num  (8)                 
#define None_TIMER1_CAPT_vect      _VECTOR(8)          /* Timer/Counter1 Capture Event */
#define None_TIMER1_COMPA_vect_num (9)                 
#define None_TIMER1_COMPA_vect     _VECTOR(9)          /* Timer/Counter1 Compare Match A */
#define None_TIMER1_COMPB_vect_num (10)                
#define None_TIMER1_COMPB_vect     _VECTOR(10)         /* Timer/Counter1 Compare Match B */
#define None_TIMER1_OVF_vect_num   (11)                
#define None_TIMER1_OVF_vect       _VECTOR(11)         /* Timer/Counter1 Overflow */
#define None_TIMER0_COMPA_vect_num (12)                
#define None_TIMER0_COMPA_vect     _VECTOR(12)         /* Timer/Counter0 Compare Match A */
#define None_TIMER0_COMPB_vect_num (13)                
#define None_TIMER0_COMPB_vect     _VECTOR(13)         /* Timer/Counter0 Compare Match B */
#define None_TIMER0_OVF_vect_num   (14)                
#define None_TIMER0_OVF_vect       _VECTOR(14)         /* Timer/Counter0 Overflow */
#define None_SPI_STC_vect_num      (15)                
#define None_SPI_STC_vect          _VECTOR(15)         /* SPI Serial Transfer Complete */
#define None_USART_START_vect_num  (16)                
#define None_USART_START_vect      _VECTOR(16)         /* USART, Start */
#define None_USART_RX_vect_num     (17)                
#define None_USART_RX_vect         _VECTOR(17)         /* USART Rx Complete */
#define None_USART_UDRE_vect_num   (18)                
#define None_USART_UDRE_vect       _VECTOR(18)         /* USART, Data Register Empty */
#define None_USART_TX_vect_num     (19)                
#define None_USART_TX_vect         _VECTOR(19)         /* USART Tx Complete */
#define None_ADC_vect_num          (20)                
#define None_ADC_vect              _VECTOR(20)         /* ADC Conversion Complete */
#define None_EE_READY_vect_num     (21)                
#define None_EE_READY_vect         _VECTOR(21)         /* EEPROM Ready */
#define None_ANALOG_COMP_vect_num  (22)                
#define None_ANALOG_COMP_vect      _VECTOR(22)         /* Analog Comparator */
#define None_TWI_SLAVE_vect_num    (23)                
#define None_TWI_SLAVE_vect        _VECTOR(23)         /* Two-wire Serial Interface */
#define None_SPM_Ready_vect_num    (24)                
#define None_SPM_Ready_vect        _VECTOR(24)         /* Store Program Memory Read */
#define None_QTRIP_vect_num        (25)                
#define None_QTRIP_vect            _VECTOR(25)         /* Touch Sensing */

/* Vector Table Size */
#define _VECTOR_SIZE               (2)                 /* Size of individual vector. */
#define _VECTORS_SIZE              (26 * _VECTOR_SIZE) /* Size of all vectors */
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
#define IRAM_SIZE           (0x0200)                               
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

#define PORTA0 (0) 
#define PORTA1 (1) 
#define PORTA2 (2) 
#define PORTA3 (3) 
#define PORTA4 (4) 
#define PORTA5 (5) 
#define PORTA6 (6) 
#define PORTA7 (7) 
#define PORTB0 (0) 
#define PORTB1 (1) 
#define PORTB2 (2) 
#define PORTB3 (3) 
#define PORTB4 (4) 
#define PORTB5 (5) 
#define PORTB6 (6) 
#define PORTB7 (7) 
#define PORTC0 (0) 
#define PORTC1 (1) 
#define PORTC2 (2) 
#define PORTC3 (3) 
#define PORTC4 (4) 
#define PORTC5 (5) 
#define PORTC6 (6) 
#define PORTC7 (7) 
#define PORTD0 (0) 
#define PORTD1 (1) 
#define PORTD2 (2) 
#define PORTD3 (3) 

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
#define CKOUT      (unsigned char)~_BV(6) /* Clock output on PORTB0 */
#define CKDIV8     (unsigned char)~_BV(7) /* Divide clock by 8 internally */

/* Fuse offset 0x01 */
#define BODLEVEL0 (unsigned char)~_BV(0) /* Brown-out Detector trigger level bit 0 */
#define BODLEVEL1 (unsigned char)~_BV(1) /* Brown-out Detector trigger level bit 1 */
#define BODLEVEL2 (unsigned char)~_BV(2) /* Brown-out Detector trigger level bit 2 */
#define EESAVE    (unsigned char)~_BV(3) /* Preserve EEPROM through the Chip Erase cycle */
#define WDTON     (unsigned char)~_BV(4) /* Watch-dog Timer always on */
#define SPIEN     (unsigned char)~_BV(5) /* Serial program downloading (SPI) enabled */
#define DWEN      (unsigned char)~_BV(6) /* Debug Wire enable */
#define RSTDISBL  (unsigned char)~_BV(7) /* Reset Disabled (Enable PC6 as i/o pin)] */

/* Fuse offset 0x02 */
#define BOOTRST (unsigned char)~_BV(0) /* Boot Reset vector Enabled */
#define BOOTSZ0 (unsigned char)~_BV(1) /* Select boot size bit 0 */
#define BOOTSZ1 (unsigned char)~_BV(2) /* Select boot size bit 1 */
#define BODACT0 (unsigned char)~_BV(4) /* BOD mode of operation when the device is active or idle bit 0 */
#define BODACT1 (unsigned char)~_BV(5) /* BOD mode of operation when the device is active or idle bit 1 */
#define BODPD0  (unsigned char)~_BV(6) /* BOD mode of operation when the device is in sleep mode bit 0 */
#define BODPD1  (unsigned char)~_BV(7) /* BOD mode of operation when the device is in sleep mode bit 1 */


/* ========== Lock Bits ========== */
#define __LOCK_BITS_EXIST  


/* ========== Signature ========== */
#define SIGNATURE_0 (0x1E) 
#define SIGNATURE_1 (0x93) 
#define SIGNATURE_2 (0x14) 

#endif /* #ifdef _AVR_ATtiny828_H_INCLUDED */
