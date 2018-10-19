#include <stdio.h>

int tsub_ok(int x, int y)
{
	y = -1 * y;
	int z = x + y;
	return !(((x>>31)&(y>>31)&!(z>>31))|
	       (!((x>>31)|(y>>31)|!(z>>31))));
}

int main()
{
	printf("%d",tsub_ok(0x80100000,0x01111111));
}
