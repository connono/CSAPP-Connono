#include <stdio.h>

int lower_one_mask(int n)
{
	unsigned num=0xFFFFFFFF;
	int w = sizeof(int);
	return num>>(w*8-n);
}

int main()
{
	printf("%x",lower_one_mask(17));
}
