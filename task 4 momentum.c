#include<stdio.h>

main()

{
	char week;
	printf("\nEnter the value ");
	scanf("%c",&week);
	
	switch(week)
	{
		case 'S':
			printf("Sunday");
			break;
			
		case 'M':
			printf("Monday");
			break;
		
		case 'T':
			printf("Tuesday");
			break;
			
		case 'W':
			printf("Wednesday");
			break;
			
		case 't':
			printf("thursday");
		    break;
		    
		case 'F':
			printf("Friday");
			break;
			
		case 's':
			printf("sunday");
			break;
			
		default :
			printf("PLEASE ENTER VALID VALUE");
	}
	
}
