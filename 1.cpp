#include <stdio.h>

main()
{
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	int max = a[0];
	int dem = 0;
	for(int i; i < n; i++)
	{
		if(a[i] > max)
		{
			max = a[i];
		}
	}
	for(int i; i < n; i++)
	{
		if(a[i] == max)
			{
				dem++;
			}
	}
	printf("%d %d", max, dem);
}
