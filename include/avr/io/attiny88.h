/******************************************************************************
 *   This file is part of avr-libc3.                                          * 
 *                                                                            * 
 *   Automatically created by devtools/gen-ioheader-atdf.py (V0.91)           * 
 *                                                                            * 
 *   .atpack File: ATtiny88.atdf                                              * 
 *   .ATDF File:   atdf/ATtiny88.atdf                                         * 
 *   Version:      2.0.10                                                     * 
 *   Date:         2019-04-25                                                 * 
 *   Device:       ATtiny88                                                   * 
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
#  define _AVR_IOXXX_H_ "ioATtiny88.h"
#else
#  error "Attempt to include more than one <avr/ioXXX.h> file."
#endif

#ifndef _AVR_ATtiny88_H_INCLUDED
#  define _AVR_ATtiny88_H_INCLUDED

/*
================================================================================
Ungrouped common register
================================================================================
*/

#define PORTCR _SFR_MEM8 (0x32) /* Port Configuration Register */

#define GPIOR0 _SFR_MEM8 (0x3E) /* General Purpose I/O Register 0 */

#define GPIOR1 _SFR_MEM8 (0x4A) /* General Purpose I/O Register 1 */
#define GPIOR2 _SFR_MEM8 (0x4B) /* General Purpose I/O Register 2 */

#define SMCR   _SFR_MEM8 (0x53) /* Sleep Mode Control Register */
#define MCUSR  _SFR_MEM8 (0x54) /* MCU Status Register */
#define MCUCR  _SFR_MEM8 (0x55) /* MCU Control Register */

#define SPMCSR _SFR_MEM8 (0x57) /* Store Program Memory Control Register */

#define SPL    _SFR_MEM8 (0x5D) /* Stack Pointer Low */
#define SPH    _SFR_MEM8 (0x5E) /* Stack Pointer High */
#define SREG   _SFR_MEM8 (0x5F) /* Status Register */

#define CLKPR  _SFR_MEM8 (0x61) /* Clock Prescale Register */

#define PRR    _SFR_MEM8 (0x64) /* Power Reduction Register */

#define OSCCAL _SFR_MEM8 (0x66) /* Oscillator Calibration Value */


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


/* Self Programming enable */
typedef enum FUSE_SELFPRGEN_enum
{
    FUSE_SELFPRGEN_CLEAR_gc = (0x00), /* Self Programming enable - CLEAR */
    FUSE_SELFPRGEN_SET_gc   = (0x01), /* Self Programming enable - SET */
} FUSE_SELFPRGEN_t;

/* Reset Disabled (Enable PC6 as i/o pin) */
typedef enum FUSE_RSTDISBL_enum
{
    FUSE_RSTDISBL_CLEAR_gc = (0x00), /* Reset Disabled (Enable PC6 as i/o pin) - CLEAR */
    FUSE_RSTDISBL_SET_gc   = (0x80), /* Reset Disabled (Enable PC6 as i/o pin) - SET */
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
    FUSE_BODLEVEL_4V3_gc      = (0x04), /* Brown-out detection at VCC=4.3 V */
    FUSE_BODLEVEL_2V7_gc      = (0x05), /* Brown-out detection at VCC=2.7 V */
    FUSE_BODLEVEL_1V8_gc      = (0x06), /* Brown-out detection at VCC=1.8 V */
    FUSE_BODLEVEL_DISABLED_gc = (0x07), /* Brown-out detection disabled */
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
    FUSE_SUT_CKSEL_EXTCLK_6CK_14CK_0MS_gc                 = (0x0C), /* Ext. Clock; Start-up time PWRDWN/RESET: 6 CK/14 CK + 0 ms */
    FUSE_SUT_CKSEL_EXTCLK_6CK_14CK_4MS1_gc                = (0x1C), /* Ext. Clock; Start-up time PWRDWN/RESET: 6 CK/14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTCLK_6CK_14CK_65MS_gc                = (0x2C), /* Ext. Clock; Start-up time PWRDWN/RESET: 6 CK/14 CK + 65 ms */
    FUSE_SUT_CKSEL_INTRCOSC_8MHZ_6CK_14CK_0MS_gc          = (0x0E), /* Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 0 ms */
    FUSE_SUT_CKSEL_INTRCOSC_8MHZ_6CK_14CK_4MS1_gc         = (0x1E), /* Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_INTRCOSC_8MHZ_6CK_14CK_65MS_DEFAULT_gc = (0x2E), /* Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 65 ms; default value */
    FUSE_SUT_CKSEL_INTRCOSC_128KHZ_6CK_14CK_0MS_gc        = (0x0F), /* Int. RC Osc. 128kHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 0 ms */
    FUSE_SUT_CKSEL_INTRCOSC_128KHZ_6CK_14CK_4MS1_gc       = (0x1F), /* Int. RC Osc. 128kHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_INTRCOSC_128KHZ_6CK_14CK_65MS_gc       = (0x2F), /* Int. RC Osc. 128kHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 65 ms */
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
AC - Analog Comparator
--------------------------------------------------------------------------------
*/

typedef struct AC_struct
{
    register8_t rsv_0x00[80]; /* RESERVED REGISTER BLOCK */
    register8_t ACSR;         /* Analog Comparator Control And Status Register */
    register8_t rsv_0x51[46]; /* RESERVED REGISTER BLOCK */
    register8_t DIDR1;        /* Digital Input Disable Register 1 */
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
PORT - I/O Port
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
PORT - I/O Port
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
PORT - I/O Port
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
--------------------------------------------------------------------------------
PORT - I/O Port
--------------------------------------------------------------------------------
*/

typedef struct PORTA_struct
{
    register8_t rsv_0x00[44]; /* RESERVED REGISTER BLOCK */
    register8_t PINA;         /* Port A Input Pins */
    register8_t DDRA;         /* Port A Data Direction Register */
    register8_t PORTA;        /* Port A Data Register */
} PORTA_t;


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
WDT - Watchdog Timer
--------------------------------------------------------------------------------
*/

typedef struct WDT_struct
{
    register8_t rsv_0x00[96]; /* RESERVED REGISTER BLOCK */
    register8_t WDTCSR;       /* Watchdog Timer Control Register */
} WDT_t;


/* Watchdog Timeout Interrupt Flag */
typedef enum WDT_WDIF_enum
{
    WDT_WDIF_CLEAR_gc = (0x00), /* Watchdog Timeout Interrupt Flag - CLEAR */
    WDT_WDIF_SET_gc   = (0x80), /* Watchdog Timeout Interrupt Flag - SET */
} WDT_WDIF_t;

/* Watchdog Timeout Interrupt Enable */
typedef enum WDT_WDIE_enum
{
    WDT_WDIE_CLEAR_gc = (0x00), /* Watchdog Timeout Interrupt Enable - CLEAR */
    WDT_WDIE_SET_gc   = (0x40), /* Watchdog Timeout Interrupt Enable - SET */
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

/*
--------------------------------------------------------------------------------
TWI - Two Wire Serial Interface
--------------------------------------------------------------------------------
*/

typedef struct TWI_struct
{
    register8_t rsv_0x00[184]; /* RESERVED REGISTER BLOCK */
    register8_t TWBR;          /* TWI Bit Rate register */
    register8_t TWSR;          /* TWI Status Register */
    register8_t TWAR;          /* TWI (Slave) Address register */
    register8_t TWDR;          /* TWI Data register */
    register8_t TWCR;          /* TWI Control Register */
    register8_t TWAMR;         /* TWI (Slave) Address Mask Register */
    register8_t TWHSR;         /* TWHSR */
} TWI_t;


/* TWHSR-TWHS */
typedef enum TWI_TWHS_enum
{
    TWI_TWHS_CLEAR_gc = (0x00), /* TWHSR-TWHS - CLEAR */
    TWI_TWHS_SET_gc   = (0x01), /* TWHSR-TWHS - SET */
} TWI_TWHS_t;

/* TWI Interrupt Flag */
typedef enum TWI_TWINT_enum
{
    TWI_TWINT_CLEAR_gc = (0x00), /* TWI Interrupt Flag - CLEAR */
    TWI_TWINT_SET_gc   = (0x80), /* TWI Interrupt Flag - SET */
} TWI_TWINT_t;

/* TWI Enable Acknowledge Bit */
typedef enum TWI_TWEA_enum
{
    TWI_TWEA_CLEAR_gc = (0x00), /* TWI Enable Acknowledge Bit - CLEAR */
    TWI_TWEA_SET_gc   = (0x40), /* TWI Enable Acknowledge Bit - SET */
} TWI_TWEA_t;

/* TWI Start Condition Bit */
typedef enum TWI_TWSTA_enum
{
    TWI_TWSTA_CLEAR_gc = (0x00), /* TWI Start Condition Bit - CLEAR */
    TWI_TWSTA_SET_gc   = (0x20), /* TWI Start Condition Bit - SET */
} TWI_TWSTA_t;

/* TWI Stop Condition Bit */
typedef enum TWI_TWSTO_enum
{
    TWI_TWSTO_CLEAR_gc = (0x00), /* TWI Stop Condition Bit - CLEAR */
    TWI_TWSTO_SET_gc   = (0x10), /* TWI Stop Condition Bit - SET */
} TWI_TWSTO_t;

/* TWI Write Collition Flag */
typedef enum TWI_TWWC_enum
{
    TWI_TWWC_CLEAR_gc = (0x00), /* TWI Write Collition Flag - CLEAR */
    TWI_TWWC_SET_gc   = (0x08), /* TWI Write Collition Flag - SET */
} TWI_TWWC_t;

/* TWI Enable Bit */
typedef enum TWI_TWEN_enum
{
    TWI_TWEN_CLEAR_gc = (0x00), /* TWI Enable Bit - CLEAR */
    TWI_TWEN_SET_gc   = (0x04), /* TWI Enable Bit - SET */
} TWI_TWEN_t;

/* TWI Interrupt Enable */
typedef enum TWI_TWIE_enum
{
    TWI_TWIE_CLEAR_gc = (0x00), /* TWI Interrupt Enable - CLEAR */
    TWI_TWIE_SET_gc   = (0x01), /* TWI Interrupt Enable - SET */
} TWI_TWIE_t;

/* TWI Status */
#define TWI_TWSR_TWS_gc(x) ((x<<3) & 0xF8)

/* TWI Prescaler */
typedef enum TWI_TWPS_enum
{
    TWI_TWPS_VAL_0x00_gc = (0x00), /* 1 */
    TWI_TWPS_VAL_0x01_gc = (0x01), /* 4 */
    TWI_TWPS_VAL_0x02_gc = (0x02), /* 16 */
    TWI_TWPS_VAL_0x03_gc = (0x03), /* 64 */
} TWI_TWPS_t;

/* TWI (Slave) Address register Bits */
#define TWI_TWAR_TWA_gc(x) ((x<<1) & 0xFE)

/* TWI General Call Recognition Enable Bit */
typedef enum TWI_TWGCE_enum
{
    TWI_TWGCE_CLEAR_gc = (0x00), /* TWI General Call Recognition Enable Bit - CLEAR */
    TWI_TWGCE_SET_gc   = (0x01), /* TWI General Call Recognition Enable Bit - SET */
} TWI_TWGCE_t;

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
    register8_t ADCSRA;        /* The ADC Control and Status register A */
    register8_t ADCSRB;        /* The ADC Control and Status register B */
    register8_t ADMUX;         /* The ADC multiplexer Selection Register */
    register8_t rsv_0x7D;      /* RESERVED REGISTER */
    register8_t DIDR0;         /* Digital Input Disable Register 0 */
    register8_t DIDR1;         /* Digital Input Disable Register 1 */
} ADC_t;


/* Reference Selection Bit 0 */
typedef enum ADC_REFS0_enum
{
    ADC_REFS0_VAL_0x00_gc = (0x00<<6), /* Internal 1.1V Voltage Reference */
    ADC_REFS0_VAL_0x01_gc = (0x01<<6), /* AVcc Reference */
} ADC_REFS0_t;

/* Left Adjust Result */
typedef enum ADC_ADLAR_enum
{
    ADC_ADLAR_CLEAR_gc = (0x00), /* Left Adjust Result - CLEAR */
    ADC_ADLAR_SET_gc   = (0x20), /* Left Adjust Result - SET */
} ADC_ADLAR_t;

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

/* The ADC Control and Status register B-ACME */
typedef enum ADC_ACME_enum
{
    ADC_ACME_CLEAR_gc = (0x00), /* The ADC Control and Status register B-ACME - CLEAR */
    ADC_ACME_SET_gc   = (0x40), /* The ADC Control and Status register B-ACME - SET */
} ADC_ACME_t;

/* ADC Auto Trigger Source bits */
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

/* Digital Input Disable Register 1-AIN1D */
typedef enum ADC_AIN1D_enum
{
    ADC_AIN1D_CLEAR_gc = (0x00), /* Digital Input Disable Register 1-AIN1D - CLEAR */
    ADC_AIN1D_SET_gc   = (0x02), /* Digital Input Disable Register 1-AIN1D - SET */
} ADC_AIN1D_t;

/* Digital Input Disable Register 1-AIN0D */
typedef enum ADC_AIN0D_enum
{
    ADC_AIN0D_CLEAR_gc = (0x00), /* Digital Input Disable Register 1-AIN0D - CLEAR */
    ADC_AIN0D_SET_gc   = (0x01), /* Digital Input Disable Register 1-AIN0D - SET */
} ADC_AIN0D_t;

/* Digital Input Disable Register 0-ADC7D */
typedef enum ADC_ADC7D_enum
{
    ADC_ADC7D_CLEAR_gc = (0x00), /* Digital Input Disable Register 0-ADC7D - CLEAR */
    ADC_ADC7D_SET_gc   = (0x80), /* Digital Input Disable Register 0-ADC7D - SET */
} ADC_ADC7D_t;

/* Digital Input Disable Register 0-ADC6D */
typedef enum ADC_ADC6D_enum
{
    ADC_ADC6D_CLEAR_gc = (0x00), /* Digital Input Disable Register 0-ADC6D - CLEAR */
    ADC_ADC6D_SET_gc   = (0x40), /* Digital Input Disable Register 0-ADC6D - SET */
} ADC_ADC6D_t;

/* Digital Input Disable Register 0-ADC5D */
typedef enum ADC_ADC5D_enum
{
    ADC_ADC5D_CLEAR_gc = (0x00), /* Digital Input Disable Register 0-ADC5D - CLEAR */
    ADC_ADC5D_SET_gc   = (0x20), /* Digital Input Disable Register 0-ADC5D - SET */
} ADC_ADC5D_t;

/* Digital Input Disable Register 0-ADC4D */
typedef enum ADC_ADC4D_enum
{
    ADC_ADC4D_CLEAR_gc = (0x00), /* Digital Input Disable Register 0-ADC4D - CLEAR */
    ADC_ADC4D_SET_gc   = (0x10), /* Digital Input Disable Register 0-ADC4D - SET */
} ADC_ADC4D_t;

/* Digital Input Disable Register 0-ADC3D */
typedef enum ADC_ADC3D_enum
{
    ADC_ADC3D_CLEAR_gc = (0x00), /* Digital Input Disable Register 0-ADC3D - CLEAR */
    ADC_ADC3D_SET_gc   = (0x08), /* Digital Input Disable Register 0-ADC3D - SET */
} ADC_ADC3D_t;

/* Digital Input Disable Register 0-ADC2D */
typedef enum ADC_ADC2D_enum
{
    ADC_ADC2D_CLEAR_gc = (0x00), /* Digital Input Disable Register 0-ADC2D - CLEAR */
    ADC_ADC2D_SET_gc   = (0x04), /* Digital Input Disable Register 0-ADC2D - SET */
} ADC_ADC2D_t;

/* Digital Input Disable Register 0-ADC1D */
typedef enum ADC_ADC1D_enum
{
    ADC_ADC1D_CLEAR_gc = (0x00), /* Digital Input Disable Register 0-ADC1D - CLEAR */
    ADC_ADC1D_SET_gc   = (0x02), /* Digital Input Disable Register 0-ADC1D - SET */
} ADC_ADC1D_t;

/* Digital Input Disable Register 0-ADC0D */
typedef enum ADC_ADC0D_enum
{
    ADC_ADC0D_CLEAR_gc = (0x00), /* Digital Input Disable Register 0-ADC0D - CLEAR */
    ADC_ADC0D_SET_gc   = (0x01), /* Digital Input Disable Register 0-ADC0D - SET */
} ADC_ADC0D_t;

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
    register8_t PCICR;       
    register8_t EICRA;        /* External Interrupt Control Register */
    register8_t PCMSK3;       /* Pin Change Mask Register 3 */
    register8_t PCMSK0;       /* Pin Change Mask Register 0 */
    register8_t PCMSK1;       /* Pin Change Mask Register 1 */
    register8_t PCMSK2;       /* Pin Change Mask Register 2 */
} EXINT_t;


/* External Interrupt Sense Control 1 Bits */
typedef enum EXINT_ISC1_enum
{
    EXINT_ISC1_VAL_0x00_gc = (0x00<<2), /* Low Level of INTX */
    EXINT_ISC1_VAL_0x01_gc = (0x01<<2), /* Any Logical Change in INTX */
    EXINT_ISC1_VAL_0x02_gc = (0x02<<2), /* Falling Edge of INTX */
    EXINT_ISC1_VAL_0x03_gc = (0x03<<2), /* Rising Edge of INTX */
} EXINT_ISC1_t;

/* External Interrupt Sense Control 0 Bits */
typedef enum EXINT_ISC0_enum
{
    EXINT_ISC0_VAL_0x00_gc = (0x00), /* Low Level of INTX */
    EXINT_ISC0_VAL_0x01_gc = (0x01), /* Any Logical Change in INTX */
    EXINT_ISC0_VAL_0x02_gc = (0x02), /* Falling Edge of INTX */
    EXINT_ISC0_VAL_0x03_gc = (0x03), /* Rising Edge of INTX */
} EXINT_ISC0_t;

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
    register8_t rsv_0x44;     /* RESERVED REGISTER */
    register8_t TCCR0A;       /* Timer/Counter  Control Register A */
    register8_t TCNT0;        /* Timer/Counter0 */
    register8_t OCR0A;        /* Timer/Counter0 Output Compare Register */
    register8_t OCR0B;        /* Timer/Counter0 Output Compare Register */
    register8_t rsv_0x49[37]; /* RESERVED REGISTER BLOCK */
    register8_t TIMSK0;       /* Timer/Counter0 Interrupt Mask Register */
} TC0_t;


/* Clear Timer on Compare Match */
typedef enum TC0_CTC0_enum
{
    TC0_CTC0_CLEAR_gc = (0x00), /* Clear Timer on Compare Match - CLEAR */
    TC0_CTC0_SET_gc   = (0x08), /* Clear Timer on Compare Match - SET */
} TC0_CTC0_t;

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
CPU - CPU Registers
--------------------------------------------------------------------------------
*/

typedef struct CPU_struct
{
    register8_t rsv_0x00[50]; /* RESERVED REGISTER BLOCK */
    register8_t PORTCR;       /* Port Configuration Register */
    register8_t rsv_0x33[11]; /* RESERVED REGISTER BLOCK */
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
    register8_t rsv_0x58[5];  /* RESERVED REGISTER BLOCK */
    register8_t SPL;          /* Stack Pointer Low */
    register8_t SPH;          /* Stack Pointer High */
    register8_t SREG;         /* Status Register */
    register8_t rsv_0x60;     /* RESERVED REGISTER */
    register8_t CLKPR;        /* Clock Prescale Register */
    register8_t rsv_0x62[2];  /* RESERVED REGISTER BLOCK */
    register8_t PRR;          /* Power Reduction Register */
    register8_t rsv_0x65;     /* RESERVED REGISTER */
    register8_t OSCCAL;       /* Oscillator Calibration Value */
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

/* Power Reduction Serial Peripheral Interface */
typedef enum CPU_PRSPI_enum
{
    CPU_PRSPI_CLEAR_gc = (0x00), /* Power Reduction Serial Peripheral Interface - CLEAR */
    CPU_PRSPI_SET_gc   = (0x04), /* Power Reduction Serial Peripheral Interface - SET */
} CPU_PRSPI_t;

/* Power Reduction ADC */
typedef enum CPU_PRADC_enum
{
    CPU_PRADC_CLEAR_gc = (0x00), /* Power Reduction ADC - CLEAR */
    CPU_PRADC_SET_gc   = (0x01), /* Power Reduction ADC - SET */
} CPU_PRADC_t;

/* Clock Prescaler Change Enable */
typedef enum CPU_CLKPCE_enum
{
    CPU_CLKPCE_CLEAR_gc = (0x00), /* Clock Prescaler Change Enable - CLEAR */
    CPU_CLKPCE_SET_gc   = (0x80), /* Clock Prescaler Change Enable - SET */
} CPU_CLKPCE_t;

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

/* Read-While-Write Section Busy */
typedef enum CPU_RWWSB_enum
{
    CPU_RWWSB_CLEAR_gc = (0x00), /* Read-While-Write Section Busy - CLEAR */
    CPU_RWWSB_SET_gc   = (0x40), /* Read-While-Write Section Busy - SET */
} CPU_RWWSB_t;

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

/* Self Programming Enable */
typedef enum CPU_SELFPRGEN_enum
{
    CPU_SELFPRGEN_CLEAR_gc = (0x00), /* Self Programming Enable - CLEAR */
    CPU_SELFPRGEN_SET_gc   = (0x01), /* Self Programming Enable - SET */
} CPU_SELFPRGEN_t;

/* BOD Sleep */
typedef enum CPU_BODS_enum
{
    CPU_BODS_CLEAR_gc = (0x00), /* BOD Sleep - CLEAR */
    CPU_BODS_SET_gc   = (0x40), /* BOD Sleep - SET */
} CPU_BODS_t;

/* BOD Sleep Enable */
typedef enum CPU_BODSE_enum
{
    CPU_BODSE_CLEAR_gc = (0x00), /* BOD Sleep Enable - CLEAR */
    CPU_BODSE_SET_gc   = (0x20), /* BOD Sleep Enable - SET */
} CPU_BODSE_t;

/* Pull-up Disable */
typedef enum CPU_PUD_enum
{
    CPU_PUD_CLEAR_gc = (0x00), /* Pull-up Disable - CLEAR */
    CPU_PUD_SET_gc   = (0x10), /* Pull-up Disable - SET */
} CPU_PUD_t;

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

/* Sleep Mode */
typedef enum CPU_SM_enum
{
    CPU_SM_IDLE_gc     = (0x00<<1), /* Idle */
    CPU_SM_ADC_gc      = (0x01<<1), /* ADC Noise Reduction (If Available) */
    CPU_SM_PDOWN_gc    = (0x02<<1), /* Power Down */
    CPU_SM_PSAVE_gc    = (0x03<<1), /* Power Save */
    CPU_SM_VAL_0x04_gc = (0x04<<1), /* Reserved */
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

/* Port Configuration Register-BBMD */
typedef enum CPU_BBMD_enum
{
    CPU_BBMD_CLEAR_gc = (0x00), /* Port Configuration Register-BBMD - CLEAR */
    CPU_BBMD_SET_gc   = (0x80), /* Port Configuration Register-BBMD - SET */
} CPU_BBMD_t;

/* Port Configuration Register-BBMC */
typedef enum CPU_BBMC_enum
{
    CPU_BBMC_CLEAR_gc = (0x00), /* Port Configuration Register-BBMC - CLEAR */
    CPU_BBMC_SET_gc   = (0x40), /* Port Configuration Register-BBMC - SET */
} CPU_BBMC_t;

/* Port Configuration Register-BBMB */
typedef enum CPU_BBMB_enum
{
    CPU_BBMB_CLEAR_gc = (0x00), /* Port Configuration Register-BBMB - CLEAR */
    CPU_BBMB_SET_gc   = (0x20), /* Port Configuration Register-BBMB - SET */
} CPU_BBMB_t;

/* Port Configuration Register-BBMA */
typedef enum CPU_BBMA_enum
{
    CPU_BBMA_CLEAR_gc = (0x00), /* Port Configuration Register-BBMA - CLEAR */
    CPU_BBMA_SET_gc   = (0x10), /* Port Configuration Register-BBMA - SET */
} CPU_BBMA_t;

/* Port Configuration Register-PUDD */
typedef enum CPU_PUDD_enum
{
    CPU_PUDD_CLEAR_gc = (0x00), /* Port Configuration Register-PUDD - CLEAR */
    CPU_PUDD_SET_gc   = (0x08), /* Port Configuration Register-PUDD - SET */
} CPU_PUDD_t;

/* Port Configuration Register-PUDC */
typedef enum CPU_PUDC_enum
{
    CPU_PUDC_CLEAR_gc = (0x00), /* Port Configuration Register-PUDC - CLEAR */
    CPU_PUDC_SET_gc   = (0x04), /* Port Configuration Register-PUDC - SET */
} CPU_PUDC_t;

/* Port Configuration Register-PUDB */
typedef enum CPU_PUDB_enum
{
    CPU_PUDB_CLEAR_gc = (0x00), /* Port Configuration Register-PUDB - CLEAR */
    CPU_PUDB_SET_gc   = (0x02), /* Port Configuration Register-PUDB - SET */
} CPU_PUDB_t;

/* Port Configuration Register-PUDA */
typedef enum CPU_PUDA_enum
{
    CPU_PUDA_CLEAR_gc = (0x00), /* Port Configuration Register-PUDA - CLEAR */
    CPU_PUDA_SET_gc   = (0x01), /* Port Configuration Register-PUDA - SET */
} CPU_PUDA_t;

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
    register8_t EEARL;        /* EEPROM Address Register Low Byte */
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
================================================================================
IO Module Instances. Mapped to memory.
================================================================================
*/

#define TC1     (*(TC1_t *) 0x0000)     /* Timer/Counter, 16-bit */
#define AC      (*(AC_t *) 0x0000)      /* Analog Comparator */
#define PORTB   (*(PORTB_t *) 0x0000)   /* I/O Port */
#define PORTD   (*(PORTD_t *) 0x0000)   /* I/O Port */
#define PORTC   (*(PORTC_t *) 0x0000)   /* I/O Port */
#define PORTA   (*(PORTA_t *) 0x0000)   /* I/O Port */
#define SPI     (*(SPI_t *) 0x0000)     /* Serial Peripheral Interface */
#define WDT     (*(WDT_t *) 0x0000)     /* Watchdog Timer */
#define TWI     (*(TWI_t *) 0x0000)     /* Two Wire Serial Interface */
#define ADC     (*(ADC_t *) 0x0000)     /* Analog-to-Digital Converter */
#define EXINT   (*(EXINT_t *) 0x0000)   /* External Interrupts */
#define TC0     (*(TC0_t *) 0x0000)     /* Timer/Counter, 8-bit */
#define CPU     (*(CPU_t *) 0x0000)     /* CPU Registers */
#define EEPROM  (*(EEPROM_t *) 0x0000)  /* EEPROM */
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


/* Self Programming enable */
#define FUSE_SELFPRGEN_CLEAR_gc (0x00) /* Self Programming enable - CLEAR */
#define FUSE_SELFPRGEN_SET_gc   (0x01) /* Self Programming enable - SET */


/* Reset Disabled (Enable PC6 as i/o pin) */
#define FUSE_RSTDISBL_CLEAR_gc (0x00) /* Reset Disabled (Enable PC6 as i/o pin) - CLEAR */
#define FUSE_RSTDISBL_SET_gc   (0x80) /* Reset Disabled (Enable PC6 as i/o pin) - SET */


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
#define FUSE_BODLEVEL_4V3_gc      (0x04) /* Brown-out detection at VCC=4.3 V */
#define FUSE_BODLEVEL_2V7_gc      (0x05) /* Brown-out detection at VCC=2.7 V */
#define FUSE_BODLEVEL_1V8_gc      (0x06) /* Brown-out detection at VCC=1.8 V */
#define FUSE_BODLEVEL_DISABLED_gc (0x07) /* Brown-out detection disabled */


/* Divide clock by 8 internally */
#define FUSE_CKDIV8_CLEAR_gc (0x00) /* Divide clock by 8 internally - CLEAR */
#define FUSE_CKDIV8_SET_gc   (0x80) /* Divide clock by 8 internally - SET */


/* Clock output on PORTB0 */
#define FUSE_CKOUT_CLEAR_gc (0x00) /* Clock output on PORTB0 - CLEAR */
#define FUSE_CKOUT_SET_gc   (0x40) /* Clock output on PORTB0 - SET */


/* Select Clock Source */
#define FUSE_SUT_CKSEL_EXTCLK_6CK_14CK_0MS_gc                 (0x0C) /* Ext. Clock; Start-up time PWRDWN/RESET: 6 CK/14 CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTCLK_6CK_14CK_4MS1_gc                (0x1C) /* Ext. Clock; Start-up time PWRDWN/RESET: 6 CK/14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTCLK_6CK_14CK_65MS_gc                (0x2C) /* Ext. Clock; Start-up time PWRDWN/RESET: 6 CK/14 CK + 65 ms */
#define FUSE_SUT_CKSEL_INTRCOSC_8MHZ_6CK_14CK_0MS_gc          (0x0E) /* Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 0 ms */
#define FUSE_SUT_CKSEL_INTRCOSC_8MHZ_6CK_14CK_4MS1_gc         (0x1E) /* Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_INTRCOSC_8MHZ_6CK_14CK_65MS_DEFAULT_gc (0x2E) /* Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 65 ms; default value */
#define FUSE_SUT_CKSEL_INTRCOSC_128KHZ_6CK_14CK_0MS_gc        (0x0F) /* Int. RC Osc. 128kHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 0 ms */
#define FUSE_SUT_CKSEL_INTRCOSC_128KHZ_6CK_14CK_4MS1_gc       (0x1F) /* Int. RC Osc. 128kHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_INTRCOSC_128KHZ_6CK_14CK_65MS_gc       (0x2F) /* Int. RC Osc. 128kHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 65 ms */


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


/* Analog Comparator Input Capture Enable */
#define AC_ACIC_CLEAR_gc (0x00) /* Analog Comparator Input Capture Enable - CLEAR */
#define AC_ACIC_SET_gc   (0x04) /* Analog Comparator Input Capture Enable - SET */


/* Analog Comparator Interrupt Mode Select bits */
#define AC_ACIS_VAL_0x00_gc (0x00) /* Interrupt on Toggle */
#define AC_ACIS_VAL_0x01_gc (0x01) /* Reserved */
#define AC_ACIS_VAL_0x02_gc (0x02) /* Interrupt on Falling Edge */
#define AC_ACIS_VAL_0x03_gc (0x03) /* Interrupt on Rising Edge */


/* AIN1 Digital Input Disable */
#define AC_AIN1D_CLEAR_gc (0x00) /* AIN1 Digital Input Disable - CLEAR */
#define AC_AIN1D_SET_gc   (0x02) /* AIN1 Digital Input Disable - SET */


/* AIN0 Digital Input Disable */
#define AC_AIN0D_CLEAR_gc (0x00) /* AIN0 Digital Input Disable - CLEAR */
#define AC_AIN0D_SET_gc   (0x01) /* AIN0 Digital Input Disable - SET */


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
WDT - Watchdog Timer
--------------------------------------------------------------------------------
*/


/* Watchdog Timeout Interrupt Flag */
#define WDT_WDIF_CLEAR_gc (0x00) /* Watchdog Timeout Interrupt Flag - CLEAR */
#define WDT_WDIF_SET_gc   (0x80) /* Watchdog Timeout Interrupt Flag - SET */


/* Watchdog Timeout Interrupt Enable */
#define WDT_WDIE_CLEAR_gc (0x00) /* Watchdog Timeout Interrupt Enable - CLEAR */
#define WDT_WDIE_SET_gc   (0x40) /* Watchdog Timeout Interrupt Enable - SET */


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


/* Watchdog Change Enable */
#define WDT_WDCE_CLEAR_gc (0x00) /* Watchdog Change Enable - CLEAR */
#define WDT_WDCE_SET_gc   (0x10) /* Watchdog Change Enable - SET */


/* Watch Dog Enable */
#define WDT_WDE_CLEAR_gc (0x00) /* Watch Dog Enable - CLEAR */
#define WDT_WDE_SET_gc   (0x08) /* Watch Dog Enable - SET */


/*
--------------------------------------------------------------------------------
TWI - Two Wire Serial Interface
--------------------------------------------------------------------------------
*/


/* TWHSR-TWHS */
#define TWI_TWHS_CLEAR_gc (0x00) /* TWHSR-TWHS - CLEAR */
#define TWI_TWHS_SET_gc   (0x01) /* TWHSR-TWHS - SET */


/* TWI Interrupt Flag */
#define TWI_TWINT_CLEAR_gc (0x00) /* TWI Interrupt Flag - CLEAR */
#define TWI_TWINT_SET_gc   (0x80) /* TWI Interrupt Flag - SET */


/* TWI Enable Acknowledge Bit */
#define TWI_TWEA_CLEAR_gc (0x00) /* TWI Enable Acknowledge Bit - CLEAR */
#define TWI_TWEA_SET_gc   (0x40) /* TWI Enable Acknowledge Bit - SET */


/* TWI Start Condition Bit */
#define TWI_TWSTA_CLEAR_gc (0x00) /* TWI Start Condition Bit - CLEAR */
#define TWI_TWSTA_SET_gc   (0x20) /* TWI Start Condition Bit - SET */


/* TWI Stop Condition Bit */
#define TWI_TWSTO_CLEAR_gc (0x00) /* TWI Stop Condition Bit - CLEAR */
#define TWI_TWSTO_SET_gc   (0x10) /* TWI Stop Condition Bit - SET */


/* TWI Write Collition Flag */
#define TWI_TWWC_CLEAR_gc (0x00) /* TWI Write Collition Flag - CLEAR */
#define TWI_TWWC_SET_gc   (0x08) /* TWI Write Collition Flag - SET */


/* TWI Enable Bit */
#define TWI_TWEN_CLEAR_gc (0x00) /* TWI Enable Bit - CLEAR */
#define TWI_TWEN_SET_gc   (0x04) /* TWI Enable Bit - SET */


/* TWI Interrupt Enable */
#define TWI_TWIE_CLEAR_gc (0x00) /* TWI Interrupt Enable - CLEAR */
#define TWI_TWIE_SET_gc   (0x01) /* TWI Interrupt Enable - SET */


/* TWI Status */
#define TWI_TWSR_TWS_gc(x) ((x<<3) & 0xF8)

/* TWI Prescaler */
#define TWI_TWPS_VAL_0x00_gc (0x00) /* 1 */
#define TWI_TWPS_VAL_0x01_gc (0x01) /* 4 */
#define TWI_TWPS_VAL_0x02_gc (0x02) /* 16 */
#define TWI_TWPS_VAL_0x03_gc (0x03) /* 64 */


/* TWI (Slave) Address register Bits */
#define TWI_TWAR_TWA_gc(x) ((x<<1) & 0xFE)

/* TWI General Call Recognition Enable Bit */
#define TWI_TWGCE_CLEAR_gc (0x00) /* TWI General Call Recognition Enable Bit - CLEAR */
#define TWI_TWGCE_SET_gc   (0x01) /* TWI General Call Recognition Enable Bit - SET */


/*
--------------------------------------------------------------------------------
ADC - Analog-to-Digital Converter
--------------------------------------------------------------------------------
*/


/* Reference Selection Bit 0 */
#define ADC_REFS0_VAL_0x00_gc (0x00<<6) /* Internal 1.1V Voltage Reference */
#define ADC_REFS0_VAL_0x01_gc (0x01<<6) /* AVcc Reference */


/* Left Adjust Result */
#define ADC_ADLAR_CLEAR_gc (0x00) /* Left Adjust Result - CLEAR */
#define ADC_ADLAR_SET_gc   (0x20) /* Left Adjust Result - SET */


/* Analog Channel and Gain Selection Bits */
#define ADC_ADMUX_MUX_gc(x) (x & 0x0F)

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


/* The ADC Control and Status register B-ACME */
#define ADC_ACME_CLEAR_gc (0x00) /* The ADC Control and Status register B-ACME - CLEAR */
#define ADC_ACME_SET_gc   (0x40) /* The ADC Control and Status register B-ACME - SET */


/* ADC Auto Trigger Source bits */
#define ADC_ADTS_VAL_0x00_gc (0x00) /* Free Running mode */
#define ADC_ADTS_VAL_0x01_gc (0x01) /* Analog Comparator */
#define ADC_ADTS_VAL_0x02_gc (0x02) /* External Interrupt Request 0 */
#define ADC_ADTS_VAL_0x03_gc (0x03) /* Timer/Counter0 Compare Match A */
#define ADC_ADTS_VAL_0x04_gc (0x04) /* Timer/Counter0 Overflow */
#define ADC_ADTS_VAL_0x05_gc (0x05) /* Timer/Counter1 Compare Match B */
#define ADC_ADTS_VAL_0x06_gc (0x06) /* Timer/Counter1 Overflow */
#define ADC_ADTS_VAL_0x07_gc (0x07) /* Timer/Counter1 Capture Event */


/* Digital Input Disable Register 1-AIN1D */
#define ADC_AIN1D_CLEAR_gc (0x00) /* Digital Input Disable Register 1-AIN1D - CLEAR */
#define ADC_AIN1D_SET_gc   (0x02) /* Digital Input Disable Register 1-AIN1D - SET */


/* Digital Input Disable Register 1-AIN0D */
#define ADC_AIN0D_CLEAR_gc (0x00) /* Digital Input Disable Register 1-AIN0D - CLEAR */
#define ADC_AIN0D_SET_gc   (0x01) /* Digital Input Disable Register 1-AIN0D - SET */


/* Digital Input Disable Register 0-ADC7D */
#define ADC_ADC7D_CLEAR_gc (0x00) /* Digital Input Disable Register 0-ADC7D - CLEAR */
#define ADC_ADC7D_SET_gc   (0x80) /* Digital Input Disable Register 0-ADC7D - SET */


/* Digital Input Disable Register 0-ADC6D */
#define ADC_ADC6D_CLEAR_gc (0x00) /* Digital Input Disable Register 0-ADC6D - CLEAR */
#define ADC_ADC6D_SET_gc   (0x40) /* Digital Input Disable Register 0-ADC6D - SET */


/* Digital Input Disable Register 0-ADC5D */
#define ADC_ADC5D_CLEAR_gc (0x00) /* Digital Input Disable Register 0-ADC5D - CLEAR */
#define ADC_ADC5D_SET_gc   (0x20) /* Digital Input Disable Register 0-ADC5D - SET */


/* Digital Input Disable Register 0-ADC4D */
#define ADC_ADC4D_CLEAR_gc (0x00) /* Digital Input Disable Register 0-ADC4D - CLEAR */
#define ADC_ADC4D_SET_gc   (0x10) /* Digital Input Disable Register 0-ADC4D - SET */


/* Digital Input Disable Register 0-ADC3D */
#define ADC_ADC3D_CLEAR_gc (0x00) /* Digital Input Disable Register 0-ADC3D - CLEAR */
#define ADC_ADC3D_SET_gc   (0x08) /* Digital Input Disable Register 0-ADC3D - SET */


/* Digital Input Disable Register 0-ADC2D */
#define ADC_ADC2D_CLEAR_gc (0x00) /* Digital Input Disable Register 0-ADC2D - CLEAR */
#define ADC_ADC2D_SET_gc   (0x04) /* Digital Input Disable Register 0-ADC2D - SET */


/* Digital Input Disable Register 0-ADC1D */
#define ADC_ADC1D_CLEAR_gc (0x00) /* Digital Input Disable Register 0-ADC1D - CLEAR */
#define ADC_ADC1D_SET_gc   (0x02) /* Digital Input Disable Register 0-ADC1D - SET */


/* Digital Input Disable Register 0-ADC0D */
#define ADC_ADC0D_CLEAR_gc (0x00) /* Digital Input Disable Register 0-ADC0D - CLEAR */
#define ADC_ADC0D_SET_gc   (0x01) /* Digital Input Disable Register 0-ADC0D - SET */


/*
--------------------------------------------------------------------------------
EXINT - External Interrupts
--------------------------------------------------------------------------------
*/


/* External Interrupt Sense Control 1 Bits */
#define EXINT_ISC1_VAL_0x00_gc (0x00<<2) /* Low Level of INTX */
#define EXINT_ISC1_VAL_0x01_gc (0x01<<2) /* Any Logical Change in INTX */
#define EXINT_ISC1_VAL_0x02_gc (0x02<<2) /* Falling Edge of INTX */
#define EXINT_ISC1_VAL_0x03_gc (0x03<<2) /* Rising Edge of INTX */


/* External Interrupt Sense Control 0 Bits */
#define EXINT_ISC0_VAL_0x00_gc (0x00) /* Low Level of INTX */
#define EXINT_ISC0_VAL_0x01_gc (0x01) /* Any Logical Change in INTX */
#define EXINT_ISC0_VAL_0x02_gc (0x02) /* Falling Edge of INTX */
#define EXINT_ISC0_VAL_0x03_gc (0x03) /* Rising Edge of INTX */


/*
--------------------------------------------------------------------------------
TC8 - Timer/Counter, 8-bit
--------------------------------------------------------------------------------
*/


/* Clear Timer on Compare Match */
#define TC0_CTC0_CLEAR_gc (0x00) /* Clear Timer on Compare Match - CLEAR */
#define TC0_CTC0_SET_gc   (0x08) /* Clear Timer on Compare Match - SET */


/* Clock Select */
#define TC0_CS0_VAL_0x00_gc (0x00) /* No Clock Source (Stopped) */
#define TC0_CS0_VAL_0x01_gc (0x01) /* Running, No Prescaling */
#define TC0_CS0_VAL_0x02_gc (0x02) /* Running, CLK/8 */
#define TC0_CS0_VAL_0x03_gc (0x03) /* Running, CLK/64 */
#define TC0_CS0_VAL_0x04_gc (0x04) /* Running, CLK/256 */
#define TC0_CS0_VAL_0x05_gc (0x05) /* Running, CLK/1024 */
#define TC0_CS0_VAL_0x06_gc (0x06) /* Running, ExtClk Tx Falling Edge */
#define TC0_CS0_VAL_0x07_gc (0x07) /* Running, ExtClk Tx Rising Edge */


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


/* Power Reduction Serial Peripheral Interface */
#define CPU_PRSPI_CLEAR_gc (0x00) /* Power Reduction Serial Peripheral Interface - CLEAR */
#define CPU_PRSPI_SET_gc   (0x04) /* Power Reduction Serial Peripheral Interface - SET */


/* Power Reduction ADC */
#define CPU_PRADC_CLEAR_gc (0x00) /* Power Reduction ADC - CLEAR */
#define CPU_PRADC_SET_gc   (0x01) /* Power Reduction ADC - SET */


/* Clock Prescaler Change Enable */
#define CPU_CLKPCE_CLEAR_gc (0x00) /* Clock Prescaler Change Enable - CLEAR */
#define CPU_CLKPCE_SET_gc   (0x80) /* Clock Prescaler Change Enable - SET */


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


/* Read-While-Write Section Busy */
#define CPU_RWWSB_CLEAR_gc (0x00) /* Read-While-Write Section Busy - CLEAR */
#define CPU_RWWSB_SET_gc   (0x40) /* Read-While-Write Section Busy - SET */


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


/* Self Programming Enable */
#define CPU_SELFPRGEN_CLEAR_gc (0x00) /* Self Programming Enable - CLEAR */
#define CPU_SELFPRGEN_SET_gc   (0x01) /* Self Programming Enable - SET */


/* BOD Sleep */
#define CPU_BODS_CLEAR_gc (0x00) /* BOD Sleep - CLEAR */
#define CPU_BODS_SET_gc   (0x40) /* BOD Sleep - SET */


/* BOD Sleep Enable */
#define CPU_BODSE_CLEAR_gc (0x00) /* BOD Sleep Enable - CLEAR */
#define CPU_BODSE_SET_gc   (0x20) /* BOD Sleep Enable - SET */


/* Pull-up Disable */
#define CPU_PUD_CLEAR_gc (0x00) /* Pull-up Disable - CLEAR */
#define CPU_PUD_SET_gc   (0x10) /* Pull-up Disable - SET */


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


/* Sleep Mode */
#define CPU_SM_IDLE_gc     (0x00<<1) /* Idle */
#define CPU_SM_ADC_gc      (0x01<<1) /* ADC Noise Reduction (If Available) */
#define CPU_SM_PDOWN_gc    (0x02<<1) /* Power Down */
#define CPU_SM_PSAVE_gc    (0x03<<1) /* Power Save */
#define CPU_SM_VAL_0x04_gc (0x04<<1) /* Reserved */
#define CPU_SM_VAL_0x05_gc (0x05<<1) /* Reserved */
#define CPU_SM_VAL_0x06_gc (0x06<<1) /* Reserved */
#define CPU_SM_VAL_0x07_gc (0x07<<1) /* Reserved */


/* Sleep Enable */
#define CPU_SE_CLEAR_gc (0x00) /* Sleep Enable - CLEAR */
#define CPU_SE_SET_gc   (0x01) /* Sleep Enable - SET */


/* Port Configuration Register-BBMD */
#define CPU_BBMD_CLEAR_gc (0x00) /* Port Configuration Register-BBMD - CLEAR */
#define CPU_BBMD_SET_gc   (0x80) /* Port Configuration Register-BBMD - SET */


/* Port Configuration Register-BBMC */
#define CPU_BBMC_CLEAR_gc (0x00) /* Port Configuration Register-BBMC - CLEAR */
#define CPU_BBMC_SET_gc   (0x40) /* Port Configuration Register-BBMC - SET */


/* Port Configuration Register-BBMB */
#define CPU_BBMB_CLEAR_gc (0x00) /* Port Configuration Register-BBMB - CLEAR */
#define CPU_BBMB_SET_gc   (0x20) /* Port Configuration Register-BBMB - SET */


/* Port Configuration Register-BBMA */
#define CPU_BBMA_CLEAR_gc (0x00) /* Port Configuration Register-BBMA - CLEAR */
#define CPU_BBMA_SET_gc   (0x10) /* Port Configuration Register-BBMA - SET */


/* Port Configuration Register-PUDD */
#define CPU_PUDD_CLEAR_gc (0x00) /* Port Configuration Register-PUDD - CLEAR */
#define CPU_PUDD_SET_gc   (0x08) /* Port Configuration Register-PUDD - SET */


/* Port Configuration Register-PUDC */
#define CPU_PUDC_CLEAR_gc (0x00) /* Port Configuration Register-PUDC - CLEAR */
#define CPU_PUDC_SET_gc   (0x04) /* Port Configuration Register-PUDC - SET */


/* Port Configuration Register-PUDB */
#define CPU_PUDB_CLEAR_gc (0x00) /* Port Configuration Register-PUDB - CLEAR */
#define CPU_PUDB_SET_gc   (0x02) /* Port Configuration Register-PUDB - SET */


/* Port Configuration Register-PUDA */
#define CPU_PUDA_CLEAR_gc (0x00) /* Port Configuration Register-PUDA - CLEAR */
#define CPU_PUDA_SET_gc   (0x01) /* Port Configuration Register-PUDA - SET */


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

/* AC - Analog Comparator (0x0000) */
#define AC_BASE         _SFR_MEM8 (0x0000) /* AC Base Address */
#define AC_ACSR         _SFR_MEM8 (0x0050) /* Analog Comparator Control And Status Register */
#define AC_DIDR1        _SFR_MEM8 (0x007F) /* Digital Input Disable Register 1 */

/* PORTB - I/O Port (0x0000) */
#define PORTBB_BASE     _SFR_MEM8 (0x0000) /* PORTBB Base Address */
#define PORTBB_PINB     _SFR_MEM8 (0x0023) /* Port B Input Pins */
#define PORTBB_DDRB     _SFR_MEM8 (0x0024) /* Port B Data Direction Register */
#define PORTBB_PORTB    _SFR_MEM8 (0x0025) /* Port B Data Register */

/* PORTD - I/O Port (0x0000) */
#define PORTDD_BASE     _SFR_MEM8 (0x0000) /* PORTDD Base Address */
#define PORTDD_PIND     _SFR_MEM8 (0x0029) /* Port D Input Pins */
#define PORTDD_DDRD     _SFR_MEM8 (0x002A) /* Port D Data Direction Register */
#define PORTDD_PORTD    _SFR_MEM8 (0x002B) /* Port D Data Register */

/* PORTC - I/O Port (0x0000) */
#define PORTCC_BASE     _SFR_MEM8 (0x0000) /* PORTCC Base Address */
#define PORTCC_PINC     _SFR_MEM8 (0x0026) /* Port C Input Pins */
#define PORTCC_DDRC     _SFR_MEM8 (0x0027) /* Port C Data Direction Register */
#define PORTCC_PORTC    _SFR_MEM8 (0x0028) /* Port C Data Register */

/* PORTA - I/O Port (0x0000) */
#define PORTAA_BASE     _SFR_MEM8 (0x0000) /* PORTAA Base Address */
#define PORTAA_PINA     _SFR_MEM8 (0x002C) /* Port A Input Pins */
#define PORTAA_DDRA     _SFR_MEM8 (0x002D) /* Port A Data Direction Register */
#define PORTAA_PORTA    _SFR_MEM8 (0x002E) /* Port A Data Register */

/* SPI - Serial Peripheral Interface (0x0000) */
#define SPI_BASE        _SFR_MEM8 (0x0000) /* SPI Base Address */
#define SPI_SPCR        _SFR_MEM8 (0x004C) /* SPI Control Register */
#define SPI_SPSR        _SFR_MEM8 (0x004D) /* SPI Status Register */
#define SPI_SPDR        _SFR_MEM8 (0x004E) /* SPI Data Register */

/* WDT - Watchdog Timer (0x0000) */
#define WDT_BASE        _SFR_MEM8 (0x0000) /* WDT Base Address */
#define WDT_WDTCSR      _SFR_MEM8 (0x0060) /* Watchdog Timer Control Register */

/* TWI - Two Wire Serial Interface (0x0000) */
#define TWI_BASE        _SFR_MEM8 (0x0000) /* TWI Base Address */
#define TWI_TWBR        _SFR_MEM8 (0x00B8) /* TWI Bit Rate register */
#define TWI_TWSR        _SFR_MEM8 (0x00B9) /* TWI Status Register */
#define TWI_TWAR        _SFR_MEM8 (0x00BA) /* TWI (Slave) Address register */
#define TWI_TWDR        _SFR_MEM8 (0x00BB) /* TWI Data register */
#define TWI_TWCR        _SFR_MEM8 (0x00BC) /* TWI Control Register */
#define TWI_TWAMR       _SFR_MEM8 (0x00BD) /* TWI (Slave) Address Mask Register */
#define TWI_TWHSR       _SFR_MEM8 (0x00BE) /* TWHSR */

/* ADC - Analog-to-Digital Converter (0x0000) */
#define ADC_BASE        _SFR_MEM16(0x0000) /* ADC Base Address */
#define ADC_ADC         _SFR_MEM16(0x0078) /* ADC Data Register  Bytes */
#define ADC_ADCL        _SFR_MEM8 (0x0078) /* ADC Data Register  Bytes LOW BYTE */
#define ADC_ADCH        _SFR_MEM8 (0x0079) /* ADC Data Register  Bytes HIGH BYTE */
#define ADC_ADCSRA      _SFR_MEM8 (0x007A) /* The ADC Control and Status register A */
#define ADC_ADCSRB      _SFR_MEM8 (0x007B) /* The ADC Control and Status register B */
#define ADC_ADMUX       _SFR_MEM8 (0x007C) /* The ADC multiplexer Selection Register */
#define ADC_DIDR0       _SFR_MEM8 (0x007E) /* Digital Input Disable Register 0 */
#define ADC_DIDR1       _SFR_MEM8 (0x007F) /* Digital Input Disable Register 1 */

/* EXINT - External Interrupts (0x0000) */
#define EXINT_BASE      _SFR_MEM8 (0x0000) /* EXINT Base Address */
#define EXINT_PCIFR     _SFR_MEM8 (0x003B) /* Pin Change Interrupt Flag Register */
#define EXINT_EIFR      _SFR_MEM8 (0x003C) /* External Interrupt Flag Register */
#define EXINT_EIMSK     _SFR_MEM8 (0x003D) /* External Interrupt Mask Register */
#define EXINT_PCICR     _SFR_MEM8 (0x0068) 
#define EXINT_EICRA     _SFR_MEM8 (0x0069) /* External Interrupt Control Register */
#define EXINT_PCMSK3    _SFR_MEM8 (0x006A) /* Pin Change Mask Register 3 */
#define EXINT_PCMSK0    _SFR_MEM8 (0x006B) /* Pin Change Mask Register 0 */
#define EXINT_PCMSK1    _SFR_MEM8 (0x006C) /* Pin Change Mask Register 1 */
#define EXINT_PCMSK2    _SFR_MEM8 (0x006D) /* Pin Change Mask Register 2 */

/* TC0 - Timer/Counter, 8-bit (0x0000) */
#define TC8_BASE        _SFR_MEM8 (0x0000) /* TC8 Base Address */
#define TC8_TIFR0       _SFR_MEM8 (0x0035) /* Timer/Counter0 Interrupt Flag register */
#define TC8_GTCCR       _SFR_MEM8 (0x0043) /* General Timer/Counter Control Register */
#define TC8_TCCR0A      _SFR_MEM8 (0x0045) /* Timer/Counter  Control Register A */
#define TC8_TCNT0       _SFR_MEM8 (0x0046) /* Timer/Counter0 */
#define TC8_OCR0A       _SFR_MEM8 (0x0047) /* Timer/Counter0 Output Compare Register */
#define TC8_OCR0B       _SFR_MEM8 (0x0048) /* Timer/Counter0 Output Compare Register */
#define TC8_TIMSK0      _SFR_MEM8 (0x006E) /* Timer/Counter0 Interrupt Mask Register */

/* CPU - CPU Registers (0x0000) */
#define CPU_BASE        _SFR_MEM8 (0x0000) /* CPU Base Address */
#define CPU_PORTCR      _SFR_MEM8 (0x0032) /* Port Configuration Register */
#define CPU_GPIOR0      _SFR_MEM8 (0x003E) /* General Purpose I/O Register 0 */
#define CPU_GPIOR1      _SFR_MEM8 (0x004A) /* General Purpose I/O Register 1 */
#define CPU_GPIOR2      _SFR_MEM8 (0x004B) /* General Purpose I/O Register 2 */
#define CPU_SMCR        _SFR_MEM8 (0x0053) /* Sleep Mode Control Register */
#define CPU_MCUSR       _SFR_MEM8 (0x0054) /* MCU Status Register */
#define CPU_MCUCR       _SFR_MEM8 (0x0055) /* MCU Control Register */
#define CPU_SPMCSR      _SFR_MEM8 (0x0057) /* Store Program Memory Control Register */
#define CPU_SPL         _SFR_MEM8 (0x005D) /* Stack Pointer Low */
#define CPU_SPH         _SFR_MEM8 (0x005E) /* Stack Pointer High */
#define CPU_SREG        _SFR_MEM8 (0x005F) /* Status Register */
#define CPU_CLKPR       _SFR_MEM8 (0x0061) /* Clock Prescale Register */
#define CPU_PRR         _SFR_MEM8 (0x0064) /* Power Reduction Register */
#define CPU_OSCCAL      _SFR_MEM8 (0x0066) /* Oscillator Calibration Value */

/* EEPROM - EEPROM (0x0000) */
#define EEPROM_BASE     _SFR_MEM8 (0x0000) /* EEPROM Base Address */
#define EEPROM_EECR     _SFR_MEM8 (0x003F) /* EEPROM Control Register */
#define EEPROM_EEDR     _SFR_MEM8 (0x0040) /* EEPROM Data Register */
#define EEPROM_EEARL    _SFR_MEM8 (0x0041) /* EEPROM Address Register Low Byte */

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
#define None_TIMER0_COMPA_vect     _VECTOR(12)         /* TimerCounter0 Compare Match A */
#define None_TIMER0_COMPB_vect_num (13)                
#define None_TIMER0_COMPB_vect     _VECTOR(13)         /* TimerCounter0 Compare Match B */
#define None_TIMER0_OVF_vect_num   (14)                
#define None_TIMER0_OVF_vect       _VECTOR(14)         /* Timer/Couner0 Overflow */
#define None_SPI_STC_vect_num      (15)                
#define None_SPI_STC_vect          _VECTOR(15)         /* SPI Serial Transfer Complete */
#define None_ADC_vect_num          (16)                
#define None_ADC_vect              _VECTOR(16)         /* ADC Conversion Complete */
#define None_EE_RDY_vect_num       (17)                
#define None_EE_RDY_vect           _VECTOR(17)         /* EEPROM Ready */
#define None_ANALOG_COMP_vect_num  (18)                
#define None_ANALOG_COMP_vect      _VECTOR(18)         /* Analog Comparator */
#define None_TWI_vect_num          (19)                
#define None_TWI_vect              _VECTOR(19)         /* Two-wire Serial Interface */

/* Vector Table Size */
#define _VECTOR_SIZE               (2)                 /* Size of individual vector. */
#define _VECTORS_SIZE              (20 * _VECTOR_SIZE) /* Size of all vectors */
/*
================================================================================
Constants
================================================================================
*/

#define PROGMEM_START   (0x0000)                           
#define PROGMEM_SIZE    (0x2000)                           
#define PROGMEM_END     (PROGMEM_START + PROGMEM_SIZE - 1) 

#define FLASH_START     (0x0000)                           
#define FLASH_SIZE      (0x2000)                           
#define FLASH_PAGE_SIZE (0x0040)                           
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
#define IRAM_SIZE           (0x0200)                               
#define IRAM_PAGE_SIZE      (0x0001)                               
#define IRAM_END            (IRAM_START + IRAM_SIZE - 1)           

#define EEPROMMEM_START         (0x0000)                               
#define EEPROMMEM_SIZE          (0x0040)                               
#define EEPROMMEM_END           (EEPROMMEM_START + EEPROMMEM_SIZE - 1) 

#define EEPROM_START            (0x0000)                               
#define EEPROM_SIZE             (0x0040)                               
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
#define PB4 (4) 
#define PB5 (5) 
#define PB6 (6) 
#define PB7 (7) 

#define PD0 (0) 
#define PD1 (1) 
#define PD2 (2) 
#define PD3 (3) 
#define PD4 (4) 
#define PD5 (5) 
#define PD6 (6) 
#define PD7 (7) 

#define PC0 (0) 
#define PC1 (1) 
#define PC2 (2) 
#define PC3 (3) 
#define PC4 (4) 
#define PC5 (5) 
#define PC6 (6) 
#define PC7 (7) 

#define PA0 (0) 
#define PA1 (1) 
#define PA2 (2) 
#define PA3 (3) 

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
#define SUT_CKSEL5 (unsigned char)~_BV(5) /* Select Clock Source bit 5 */
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
#define RSTDISBL  (unsigned char)~_BV(7) /* Reset Disabled (Enable PC6 as i/o pin) */

/* Fuse offset 0x02 */
#define SELFPRGEN (unsigned char)~_BV(0) /* Self Programming enable */


/* ========== Lock Bits ========== */
#define __LOCK_BITS_EXIST  


/* ========== Signature ========== */
#define SIGNATURE_0 (0x1E) 
#define SIGNATURE_1 (0x93) 
#define SIGNATURE_2 (0x11) 

#endif /* #ifdef _AVR_ATtiny88_H_INCLUDED */
