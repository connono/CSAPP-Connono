#include <stdio.h>

int is_little_endian()
{
	int t;
	union data{
		int d;
		char c;
	}d1;
	d1.d = 0x1234;
	d1.c = 0x34;
	if(d1.d == 0x1234){
		return 1;
	}else{
		return 0;
	}
}

int main()
{
	printf("%d",is_little_endian());
}
