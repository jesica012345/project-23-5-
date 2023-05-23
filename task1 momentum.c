#include<stdio.h>

main()

{
	char ch;
	printf("enter any character:-");
	scanf("%c",&ch);
	
	if (ch>='a' && ch<='z' || ch>='A' && ch<='Z')
    {
    	 	printf("this value is Alphabet.");
	}
	else if(ch>='0' && ch<='9')
	{
			printf(" this value is digit.");
	}
	else
	{
		printf(" this value is special chacter.");
	}
}
