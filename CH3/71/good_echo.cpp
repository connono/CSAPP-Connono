#include <stdio.h>

int main()
{
	char buffer[10];
	int i;
	while(fgets(buffer, sizeof(buffer), stdin)!=NULL)
	{
		for(i=0; buffer[i]!='\0'; i++){
			putchar(buffer[i]);
		}
		if(i<sizeof(buffer)-1) break;
	}
	return 0;
}
