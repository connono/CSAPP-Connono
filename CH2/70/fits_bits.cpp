#include <stdio.h>

int fits_bits(int x, int n)
{
	//����n-1λ��������Ϊ0��������Ϊ-1 
	return (!(x>>n-1))|(!((x>>n-1)+1));
}

int main()
{
	printf("%d", fits_bits(0x00012345,18));
} 
