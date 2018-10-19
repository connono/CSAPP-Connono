#include <stdio.h>
typedef unsigned float_bits;

/*
 * Compute (float)i 
 */
 
float_bits float_i2f(int i)
{
	if(i<0) unsigned sign=0x1; else unsigned sign=0x0;
	i = -1*i;
	unsigned exp = 0x0;
	unsigned frac = 0x0;
	unsigned expm = 0x0;
	int remain = i;
	while(remain<2){
		exp++;
		remain/=2;
	}
	expm=exp;
	i-=1<<expm;
	expm--;
	while(i!=0){
		if(i>=(1<<expm)){
			frac++;
			i-=(1<<expm);
		}
		frac<<=1;
		expm--;
	}
	return (sign<<31)+(exp<<23+0x3F800000)+(frac);
}
