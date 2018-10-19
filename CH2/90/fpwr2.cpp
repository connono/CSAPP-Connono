float fpwr2(int x)
{
	/* Result exponent and fraction */
	unsigned exp, frac;
	unsigned u;
	
	if (x < -21-2<<7){
		/* Too small. Return 0.0 */
		exp = 0x00000000;
		frac = 0x00000000;
	} else if (x < 2-2<<7){
		/* Denormalized result */
		exp = 0x00000000;
		frac = 0x1<<(x+21+2<<7);
	} else if (x < 2<<7){
		/* Normalized result */
		exp = x+2<<7-1;
		frac = 0x00000000;
	} else {
		/*Too big. Return +¡Þ*/
		exp = 0x000000FF;
		frac = 0x00000000;
	}
	
	/* Pack exp and frac into 32 bits */
	u = exp << 23 | frac;
	/* Return as float */
	return u2f(u);
}
