/*1表示x大，0表示y大*/
int float_le(float x, float y)
{
	unsigned ux = f2u(x);
	unsigned uy = f2u(y);
	
	/* Get the sign bits */
	unsigned sx = ux>>31;
	unsigned sy = uy>>31;
	
	/* Give an expression using only ux, uy, sx, and sy */
	return (sx&(!sy))|
	       ((!(sx|sy))&(ux>=uy))|
	       ((sx|sy)&(ux<=uy));
} 
