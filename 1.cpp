#include <stdio.h>

main()
{
	char str[500];
	int dem = 0;
	for(int i = 0; i < 500; i++)
	{
		scanf("%c", &str[i]);
		if(str[i] == '\n')
		{
			break;
		}
		dem++;
	}
//	for(int i = 0; i < dem; i++)
//    {
//    	for(int j = 0; j < 128; ++j)
//		{
//	    	if(str[i] == )		
//	        printf("%4c\n", j, j);
//   		}
//	}

	char temp;
	for (int i = 0; i < dem-1; i++) 
		{
	      for (int j = i+1; j < dem; j++) {
	         if (str[i] > str[j]) {
	            temp = str[i];
	            str[i] = str[j];
	            str[j] = temp;
	         }
	      }
	   }

		
	for(int i = 0; i < dem; i++)
	{
		int dem1 = 0;
		for(int j = 0; j < dem; j++)
		{
			if(str[i] != ' ')
			{
				if(str[i] == str[j])
				{
					dem1++;
				}
			}
		}
		if(str[i] != ' ')
		{
			printf("%s", str);
			printf("%d", dem1);
		}	
	}
}
//		int dem1 = 0;
//		for(int j = 0; j < dem; j++)
//		{
//			if(str[i] == str[j])
//			{
//				dem1++;
//			}
//		}
		
//		printf("%4d\n", dem1);
	

