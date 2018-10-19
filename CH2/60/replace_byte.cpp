#include <stdio.h>

unsigned replace_byte (unsigned x, int i, unsigned char b){
	return((x&~(0xFF<<(i*8)))|(b<<(i*8))); //Ê¹ÓÃÑÚÂë 
}

int main()
{
   unsigned s = 0x12345678;
   unsigned s1 = replace_byte(s,2,0xAB);
   unsigned s2 = replace_byte(s,0,0xAB);
   printf("%x\n%x\n",s1,s2);
}
