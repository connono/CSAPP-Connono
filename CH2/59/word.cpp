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
	//������unsigned 
	//=> ����x�Ǹ����������������ƽ��ճ���λ����f���ﲻ��Ԥ�ڵ�Ч�� 
	unsigned long x=0x89ABCDEF;
	unsigned long y=0x76543210;
	show_long(x);
	show_long(y);
	unsigned long z=((y>>8)<<8)+((x<<24)>>24);
	show_long(z);
}
