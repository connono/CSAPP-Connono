#include <stdio.h>

#define TMax 0x00000001
#define TMin 0x00000010

int saturating_add(int x, int y)
{
	int z=x+y;
	printf("%d|%x\n",z,z);
	return ((~!~((x>>31)&(y>>31)&~(z>>31)))&TMax)
		  |((~!((x>>31)|(y>>31)|~(z>>31)))&TMin);
}

int main()
{
	
	printf("%d\n",saturating_add(0x80000000,0xFFFFFFFF));
	printf("%d\n",saturating_add(0x00000001,0x7FFFFFFF));
} 
