#include <stdio.h>

unsigned rotate_left(unsigned x, int n)
{
	int w = sizeof(unsigned)*8;
	return (x<<n)|(x>>(w-n));
}

int main()
{
	printf("%x",rotate_left(0x12345678,20));	
}
