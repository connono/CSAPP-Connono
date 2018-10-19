#include <stdio.h>

int leftmost_one(unsigned x)
{   //¶þÎ»À©Õ¹ 
	x |= x>>1;
	x |= x>>2;
	x |= x>>4;
	x |= x>>8;
	x |= x>>16;
	return x^(x>>1);
}

int main()
{
	printf("%x",leftmost_one(0x62341234));
}
 
