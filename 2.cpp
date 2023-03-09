#include <stdio.h>
#include <string.h>
#include <string>
#include <stdlib.h>
char* KTT(char * st, char * a)
{
	int b = 0;
	char c;
	printf("\n\nXoa ky tu trang\n\n");
	for(int i = 0; i < strlen(st); i++)
	{
		c = st[i];
		if(c == 32)
		{
			continue;
		}
		a[b++] = c;
	}
	return a;
}
char * Tim (char * st, char * c)
{
	for(int i = 0; i < strlen(st); i++)
	{
		for(int j = 0; j < strlen(c); j++)
		{
			if(st[i] == c[j])
			{
				printf(n"%d", i);
			}
		}
	}
}
char * XD (char * st)
{
	for(int i = 0; i < strlen(st); i++)
	{
		if(st[i] != 32)
			printf("%c", st[i]);	
		else
			printf("\n");
	}
}

main()
{
	char * st;
	char * a = (char * )malloc(20);
	st = (char*)malloc(20);
	char * c = (char * )malloc(20);
	gets(st);
//	gets(c);
//	Tim(st, c);
	printf("In cac tu trong chuoi '%s' thanh tung dong`\n\n", st);
	XD(st);
	puts(KTT(st, a));
}
