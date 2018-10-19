void copy_int(int val, void *buf, int maxbytes){
	if (maxbytes-(int)(sizeof(val))>=0)
		memcpy(buf, (void *)&val, sizeof(val));	  
}
