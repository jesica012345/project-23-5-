#include<stdio.h>

main()

{
	 int a,b,c,d;
	 	printf("Enter the value of A:-");
	 	scanf("%d",&a);
	 	printf("Enter the value of B:-");
	 	scanf("%d",&b);
	 	printf("Enter the value of C:-");
	 	scanf("%d",&c);
	 	printf("Enter the value of D:-");
	 	scanf("%d",&d);
	 	
	 	if(a>b)
	 	{
	 		if(a>c)
	 	    {
	 	    	if(a>d)
	 	    	{ 
	 	    	printf("A is Maximum.");
	 	        }
			}
			else 
			{
				printf("D is Maximum.");
		    }	
		}
		else
		{
			if(b>c)
			{
				if(b>d)
				{
					printf("C is Maximum.");
				}
				else
				{
				printf("D is Maximum.");
			    }
			}
			else
			{
				if(c>d)
				{
					printf("C is Maximum.");
				}
				else
				{
					printf("D is Maximum.");
				}
			}
		}
	 	
}


