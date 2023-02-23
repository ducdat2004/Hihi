#include <stdio.h>

main()
{
	int n;
	scanf("%d", &n);
	int a[n];
	int k;
	scanf("%d", &k);
	for(int i; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n; i++)
	{
		if(k == a[i])
		{
			printf("%d", i);
		}
	}
}
