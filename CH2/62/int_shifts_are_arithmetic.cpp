#include <stdio.h>

int int_shifts_are_arithmetic()
{
	int i = -1;
	printf("%d", (!(~(i&(i>>1)))));
	return (!(~(i&(i>>1))));
}

int main()
{
	int_shifts_are_arithmetic();
} 
