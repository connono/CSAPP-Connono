long decode2(long x, long y, long z)
{
	y -= z;
	x *= y;
	return ((y<<63)>>63)|x;
}
