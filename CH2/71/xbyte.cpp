#include <stdio.h>
typedef unsigned packed_t;

int xbyte(packed_t word, int bytenum)
{
	return ((int)(word<<((3-bytenum)<<3)))>>24;
} 

int main()
{
	packed_t word = 0xEEEE11;
	printf("%x",xbyte(word, 0));
}
