/* $Id$	*/

#include <stdlib.h>
#include <string.h>

int main ()
{
    static struct t_s {
	int val;
	unsigned char pattern;
    } t[] = {
	{ 0, 0 },
	{ 1, 1 },
	{ 0xffff, 1 },
	{ 0x0002, 2 },
	{ 0x8002, 2 },
	{ 0xfff2, 2 },
	{ 0x0040, 7 },
	{ 0x0140, 7 },
	{ 0x0080, 8 },
	{ 0xff80, 8 },
	{ 0x0100, 9 },
	{ 0xff00, 9 },
	{ 0x8000, 16 },
    };
    volatile int vx;
    int i;
    
    /* Possibly, this is an inline substitution.	*/
    for (i = 0; i != (int)(sizeof(t)/sizeof(t[0])); i++) {
	if (ffs(t[i].val) != t[i].pattern)
	    exit (1 + i);
    }
    
    /* Force a function call (against inline substitution).	*/
    for (i = 0; i != (int)(sizeof(t)/sizeof(t[0])); i++) {
	int (* volatile vffs)(int) = ffs;
	if (vffs(t[i].val) != t[i].pattern)
	    exit (101 + i);
    }
    
    /* Side effects?	*/
    vx = 7;
    if (ffs(++vx) != 4 || vx != 8)
	exit (__LINE__);
    vx = 16;
    if (ffs(vx++) != 5 || vx != 17)
	exit (__LINE__);

    vx = 127;
    if (ffs(ffs(++vx)) != 4 || vx != 128)
	exit (__LINE__);

    /* Implicit check	*/
    vx = 1;
    if (__builtin_constant_p(++vx) || __builtin_constant_p(vx = -1))
	exit (__LINE__);
    if (vx != 1)    
	exit (__LINE__);

    return 0;
}
