#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *calloc(size_t nmemb, size_t size)
{
	if(nmemb&&size){
		void *mem = malloc(size*nmemb);
		mem = memset(mem, 0, size*nmemb);
		return mem;	
	} else {
		return NULL;
	}
}
