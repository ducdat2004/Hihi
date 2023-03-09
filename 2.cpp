#include <stdio.h>
#include <string>
#include <string.h>
#include <stdlib.h>
main()
{
	char * st = (char*)malloc(20);
	gets(st);
	int dem1 = 0, dem2 = 0;
	for(int i = 0; i < strlen(st); i++)
	{
		for(int j = 65; j <= 90; j++)
		{
			if(st[i] == j)
			{
				dem1++;
			}
		}
		for(int k = 97; k <= 122; k++)
		{
			if(st[i] == k)
			{
				dem2++;
			}
		}
	}
	if(dem1 > dem2)
	{
		for(int i = 0; i < strlen(st); i++)
		{
			putchar(toupper(st[i]));
		}
	}
	else
	{
		for(int i = 0; i < strlen(st); i++)
		{
			putchar(tolower(st[i]));
		}
	}
}
