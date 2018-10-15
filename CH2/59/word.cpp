#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, int len)
{
	int i;
	for (i=0; i<len; i++)
	  printf(" %.2x", start[i]);
	printf("\n");
}

void show_long(long x)
{
	show_bytes((byte_pointer) &x, sizeof(long));
}

int main()
{
	//不加上unsigned 
	//=> 由于x是负数，所以算术右移将空出的位填上f而达不到预期的效果 
	unsigned long x=0x89ABCDEF;
	unsigned long y=0x76543210;
	show_long(x);
	show_long(y);
	unsigned long z=((y>>8)<<8)+((x<<24)>>24);
	show_long(z);
}
