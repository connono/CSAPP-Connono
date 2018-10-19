#include <stdio.h>
typedef unsigned float_bits;

/* Compute |f|. If f is NaN, then return f. */
float_bits float_absval(float_bits f)
{
	if(f==0x7F800000||f==0xFF800000) return f;
	return (0x0<<31)+((f<<1)>>1);
}

int main()
{
	printf("%x",float_absval(0x9FFFFFFF));
}
