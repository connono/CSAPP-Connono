#include <stdio.h>

int int_size_is_32(){
	int set_msb = ((1<<15)<<15)<<1;
	int beyond_msb = ((1<<15)<<15)<<2;
	return set_msb && !beyond_msb;
}

int main()
{
	printf("%d",int_size_is_32());
}
