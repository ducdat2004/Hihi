#include <stdio.h>
#include <string.h>
#include <string>
#include <stdlib.h>
char * XD (char * st)
{
	for(int i = 0; i < strlen(st); i++)
	{
		if(st[i] != 32)
		{
			printf("%c", st[i]);
		}
		else
		{
			printf("\n");
		}
	}
}
main()
{
	char * st = (char*)malloc(20);
	gets(st);
	XD(st);
}
