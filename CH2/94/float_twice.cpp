#include <stdio.h>
typedef unsigned float_bits;

/* Compute 2*f. If f is NaN, then return f. */
float_bits float_twice(float_bits f)
{
	if(f==0x7F800000||f==0xFF800000) return f;
	unsigned sign = (f>>31)<<31;
	f = (f<<1)>>1;
	if(f<0x00400000){ //部分非规格化数 
		return sign+(f<<1);
	} else if(f>0x7F800000){ //部分规格化数 
		return 0x7F800000;
	} else {
		return sign+0x00800000+f; 
	}
}
