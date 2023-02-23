#include <stdio.h>

main()
{
	int n;
	scanf("%d", &n);
	float a[n];
	int k;
	scanf("%d", &k);
	for(int i; i < n; i++)
	{
		scanf("%f", &a[i]);
	}
	float tg;
	for(int i = 0; i < n - 1; i++)
	{
	    for(int j = i + 1; j < n; j++)
		{
	        if(a[i] < a[j])
			{
	            tg = a[i];
	            a[i] = a[j];
	            a[j] = tg;        
	        }
	    }
	}
	float tong = 0;
	for(int i = 0; i < k; i++)
	{
		tong += a[i];
	}
	printf("%.1f", tong);
}
