#include <stdio.h>

int main()
{
	int x = 0x11111111;
	printf("%d\t%d\t%d\t%d\n",
	(!~x),
	(!x),
	(!!(x&0xFF)),
	(!(x>>24)));
}
