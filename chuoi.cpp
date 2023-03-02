#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *string(char*st, int kt, int dem)
{
	kt = strlen(st);
	for(int i = strlen(st); i > 0; i--)
	{
		if(st[i] == ' ')
		{
			dem = i + 1;	
			break;
		}
	}
	for(int i = dem; i < strlen(st); i++)
	{
		printf("%c", st[i]);
	}
}
char* xoaphai(char* st, int kt)
{
	kt = 0;
	for(int i = 0; i < strlen(st) ; i++)
	{
		kt++;
		if(st[i] == ' ')
		{
			break;
		}
	}
	for(int j = 0; j < kt - 1; j++)
	{
		printf("%c", st[j]);
	}
	return st;
}
char* ktt(char* st, char s)
{

	//return s;
}
main()
{
	char *st = (char*)malloc(20);
	//p = st;
	char* s;
	gets(st);
	int kt = 0, dem;
	xoaphai(st,kt);
	string(st, kt, dem);
	
	printf("end");
	int kq = 0;
//	for(int i = 0; i < strlen(st); i++)
//	{
//		char c = st[i];
//		if(c == ' ')
//		{
//			continue;
//		}
//		s[kq++] = c;
//	}
	//puts(s);
}
