#include <stdio.h>
typedef unsigned float_bits;

/* Compute 0.5*f. If f is NaN, then return f. */
float_bits float_half(float_bits f)
{
	if(f==0x7F800000||f==0xFF800000) return f;
	unsigned sign = (f>>31)<<31;
	f = (f<<1)>>1;
	if(f<0x00800000){
		return sign+f>>1; 
	} else {
		return sign+f-0x00800000;
	} 
}
