#include <stdio.h>

int divide_power2(int x, int k)
{
	//����ȡ�� 
	return x>>k;
}

int main()
{
	printf("%x",divide_power2(0xFFFFFFFF,1));
}
