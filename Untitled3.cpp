#include <stdio.h>
#include <string.h>
#include <string>
#include <stdlib.h>
char Nhap (char * st, int n)
{
	int i = 0;
	for(int i = 0; i < n; i++)
	{
		scanf("%s", &st[i]);
	}
}
char* SapXep(char * st, int n)
{
	char tg;
	for(int i = 0; i < n - 1; i++)
	{
        for(int j = i + 1; j < n; j++){
            if(st[i] > st[j]){
                tg = st[i];
                st[i] = st[j];
                st[j] = tg;        
            }
        }
    }
    return st;
}
char KQ (char st[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("%s", st[i]);
	}
}
main()
{
	int n;
	do
	{
		scanf("%d", &n);
	}while(n > 50);
	char * st = (char*)malloc(50);
	Nhap(st, n);
	
	for(int i = 0; i < n; i++)
	{
		printf("%s\n", SapXep(st,n));
	}
}
