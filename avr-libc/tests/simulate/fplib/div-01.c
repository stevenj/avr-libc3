/* Test of division.  Simple cases.
   $Id$
 */
#include <stdio.h>
#include <stdlib.h>
#include "progmem.h"

union lofl_u {
    long lo;
    float fl;
};

volatile union lofl_u v = { .lo = 1 };

PROGMEM const struct {		/* Table of test cases:  x / y = z	*/
    union lofl_u x, y, z;
} t[] = {

    /* 0.0 / nonzero	*/
    { { 0x00000000 }, { 0x00000001 }, { 0x00000000 } },
    { { 0x00000000 }, { 0x007fffff }, { 0x00000000 } },
    { { 0x00000000 }, { 0x00800000 }, { 0x00000000 } },
    { { 0x00000000 }, { 0x7f7fffff }, { 0x00000000 } },
    { { 0x00000000 }, { 0x80000001 }, { 0x80000000 } },
    { { 0x00000000 }, { 0x807fffff }, { 0x80000000 } },
    { { 0x00000000 }, { 0x80800000 }, { 0x80000000 } },
    { { 0x00000000 }, { 0xff7fffff }, { 0x80000000 } },

    /* -0.0 / nonzero	*/
    { { 0x80000000 }, { 0x3f800000 }, { 0x80000000 } },
    { { 0x80000000 }, { 0xbf800000 }, { 0x00000000 } },

    /* x / +1.0	--> x	*/
    { { 0x00000000 }, { .fl = +1.0 }, { 0x00000000 } },
    { { 0x00000001 }, { .fl = +1.0 }, { 0x00000001 } },
    { { 0x00000100 }, { .fl = +1.0 }, { 0x00000100 } },
    { { 0x00010000 }, { .fl = +1.0 }, { 0x00010000 } },
    { { 0x007fffff }, { .fl = +1.0 }, { 0x007fffff } },
    { { 0x00800000 }, { .fl = +1.0 }, { 0x00800000 } },
    { { 0x3f800000 }, { .fl = +1.0 }, { 0x3f800000 } },
    { { 0x7f7fffff }, { .fl = +1.0 }, { 0x7f7fffff } },
    { { 0x80000000 }, { .fl = +1.0 }, { 0x80000000 } },
    { { 0x80000001 }, { .fl = +1.0 }, { 0x80000001 } },
    { { 0x80000100 }, { .fl = +1.0 }, { 0x80000100 } },
    { { 0x80010000 }, { .fl = +1.0 }, { 0x80010000 } },
    { { 0x807fffff }, { .fl = +1.0 }, { 0x807fffff } },
    { { 0x80800000 }, { .fl = +1.0 }, { 0x80800000 } },
    { { 0xbf800000 }, { .fl = +1.0 }, { 0xbf800000 } },
    { { 0xff7fffff }, { .fl = +1.0 }, { 0xff7fffff } },

    /* x / -1.0	--> -x	*/
    { { 0x00000000 }, { .fl = -1.0 }, { 0x80000000 } },
    { { 0x00000001 }, { .fl = -1.0 }, { 0x80000001 } },
    { { 0x00000100 }, { .fl = -1.0 }, { 0x80000100 } },
    { { 0x00010000 }, { .fl = -1.0 }, { 0x80010000 } },
    { { 0x007fffff }, { .fl = -1.0 }, { 0x807fffff } },
    { { 0x00800000 }, { .fl = -1.0 }, { 0x80800000 } },
    { { 0x3f800000 }, { .fl = -1.0 }, { 0xbf800000 } },
    { { 0x7f7fffff }, { .fl = -1.0 }, { 0xff7fffff } },
    { { 0x80000000 }, { .fl = -1.0 }, { 0x00000000 } },
    { { 0x80000001 }, { .fl = -1.0 }, { 0x00000001 } },
    { { 0x80000100 }, { .fl = -1.0 }, { 0x00000100 } },
    { { 0x80010000 }, { .fl = -1.0 }, { 0x00010000 } },
    { { 0x807fffff }, { .fl = -1.0 }, { 0x007fffff } },
    { { 0x80800000 }, { .fl = -1.0 }, { 0x00800000 } },
    { { 0xbf800000 }, { .fl = -1.0 }, { 0x3f800000 } },
    { { 0xff7fffff }, { .fl = -1.0 }, { 0x7f7fffff } },

    /* x/x --> 1.0	*/
    { { 0x00000001 }, { 0x00000001 }, { .fl = +1.0 } },
    { { 0x00000100 }, { 0x00000100 }, { .fl = +1.0 } },
    { { 0x00010000 }, { 0x00010000 }, { .fl = +1.0 } },
    { { 0x007fffff }, { 0x007fffff }, { .fl = +1.0 } },
    { { 0x00800000 }, { 0x00800000 }, { .fl = +1.0 } },
    { { 0x3f800000 }, { 0x3f800000 }, { .fl = +1.0 } },
    { { 0x7f7fffff }, { 0x7f7fffff }, { .fl = +1.0 } },
    { { 0x80000001 }, { 0x80000001 }, { .fl = +1.0 } },
    { { 0x80000100 }, { 0x80000100 }, { .fl = +1.0 } },
    { { 0x80010000 }, { 0x80010000 }, { .fl = +1.0 } },
    { { 0x807fffff }, { 0x807fffff }, { .fl = +1.0 } },
    { { 0x80800000 }, { 0x80800000 }, { .fl = +1.0 } },
    { { 0xbf800000 }, { 0xbf800000 }, { .fl = +1.0 } },
    { { 0xff7fffff }, { 0xff7fffff }, { .fl = +1.0 } },
};

void x_exit (int index)
{
#ifndef	__AVR__
    fprintf (stderr, "t[%d]:  %#lx\n", index - 1, v.lo);
#endif
    exit (index ? index : -1);
}

int main ()
{
    union lofl_u x,y,z;
    int i;
    
    for (i = 0; i < (int) (sizeof(t) / sizeof(t[0])); i++) {
	x.lo = pgm_read_dword (& t[i].x);
	y.lo = pgm_read_dword (& t[i].y);
	z.lo = pgm_read_dword (& t[i].z);
	v.fl = x.fl / y.fl;
	/* Comparison is integer to verify the zero sign.	*/
	if (v.lo != z.lo)
	    x_exit (i+1);
    }
    return 0;
}