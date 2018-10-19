#include <stdio.h>

int fits_bits(int x, int n)
{
	//右移n-1位后正数变为0，负数变为-1 
	return (!(x>>n-1))|(!((x>>n-1)+1));
}

int main()
{
	printf("%d", fits_bits(0x00012345,18));
} 
