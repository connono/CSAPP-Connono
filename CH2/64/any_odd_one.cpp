#include <stdio.h>

int any_odd_one(unsigned x)
{
	return !!(x&0x55555555);
}

int main()
{
	printf("%d",any_odd_one(0x00000000));
}
