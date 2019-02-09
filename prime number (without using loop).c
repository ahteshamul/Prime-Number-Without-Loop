#include<stdio.h>
	main()
	{
		int a;
		printf("\n ENTER NUMBER \n");
		scanf("%d",&a);
		if(a%2==0 || a%3==0 || a%5==0 || a%7==0)
		{
			float b= (int) a;
			if(b/2==1 || b/3 == 1 || b/5==1 || b/7 == 1 )
				printf("\n%d is a PRIME NUMBER ",a);
			else
				printf("\n%d is a COMPOSITE NUMBER ",a);
		}
		else
			printf("\n%d is a PRIME NUMBER ",a);
		
	}
