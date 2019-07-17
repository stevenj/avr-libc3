# AVR-LIBC3
## About

This is a FORK of the standard library for Atmel AVR devices together with the
AVR-GCC compiler.  The original and its SVN repository can be found here: https://www.nongnu.org/avr-libc/

The fork was created on the 17th of July 2019 with the intention of applying long 
standing patches and correcting any long standing bug/deficiencies.

## Changes since forking

### Merged Upstream Patch #9543

Adds support for:

+ attiny202, attiny204, attiny212, attiny214
+ attiny402, attiny404, attiny406, attiny412, attiny414, attiny416, attiny417
+ attiny804, attiny806, attiny807, attiny814, attiny816, attiny817
+ attiny1604, attiny1606, attiny1607, attiny1614, attiny1616, 1617
+ attiny3214, attiny3216, attiny3217

### Merged Upstream Patch #9553

This patch fixes some build warnings and a potential wrong-code issues in GETBYTE as used by vfprintf and vfscanf

### Merged Upstream Patch 9594

Add missing TXD0/TXD1/RXD0/RXD1 pins for the ATmega324PA

### Merged Upstream Patch 9405

This adds new ISR_NOGCISR macro to be used as ISR attribute with a similar naming like the already existing ones.  For the feature, see

https://gcc.gnu.org/onlinedocs/gcc/AVR-Function-Attributes.html

