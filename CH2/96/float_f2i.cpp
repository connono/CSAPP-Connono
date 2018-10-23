#include <stdio.h>
typedef unsigned float_bits;

/*
 * Compute (int)f.
 * If conversion causes overflow or f is NaN, return 0x80000000
 */
int float_f2i(float_bits f)
{
	if(f==0x7F800000||f==0xFF800000) return 0x80000000;
	unsigned sign = (f>>31)<<31;
	unsigned exp = (f<<1)>>24-0xFF;
	unsigned frac = 0x0080000+(f<<9)>>9;
	if(exp>30){
		return 0x80000000;
	} else if(exp>23) {
		if(sign) return (int)(frac<<(exp-23))*-1;
		return (int)(frac<<(exp-23));
	} else {
		if(sign) return (int)(frac>>(23-exp))*-1;
		return (int)(frac>>(23-exp));
	}
}
