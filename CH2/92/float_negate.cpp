#include <stdio.h>
typedef unsigned float_bits;
/* Compute -f. If f is NaN, then return f. */
float_bits float_negate(float_bits f)
{
	if(f==0x7F800000||f==0xFF800000) return f;
	return (((f>>31)^0x1)<<31)+((f<<1)>>1);
}

int main()
{
	printf("%x",float_negate(0xFF800000));
}
