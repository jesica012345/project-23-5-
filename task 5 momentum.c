#include <stdio.h>

main()
{
	int unit,Electricity_bill,sur_charges,total_eb;
	printf("Enter Unit:-");
	scanf("%i", &unit);
	
	if(unit<=50)
	{
		Electricity_bill=unit*0.50;
	}
	else if(unit<=150)
	{
		Electricity_bill=(unit-50)*0.75+25;
	}
	else if(unit<=250)
	{
		Electricity_bill=(unit-150)*1.20+100;
	}
	else 
	{
		Electricity_bill=(unit-250)*1.50+220;
	}
	sur_charges=Electricity_bill*0.2;
	
	total_eb = Electricity_bill + sur_charges;
	
	printf("Total Electricity bill = %d", total_eb);
	
}

