//WAP to convert years into days and days into years

#include<stdio.h>
main()
{
	int choice;
	double years,days;
	printf("enter choice \n1=Convert year to days:\n2=Convert days to year:\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Enter the number of years:");
			scanf("%lf",&years);
			days=years*365.25;
			printf("%.2lf Entered Year is Approximately %.1lf days \n",years,days);
			break;
		case 2:
			printf("Enter the number of days:");
			scanf("%lf",&days);
			years=days/365.25;
			printf("%.2lf Entered Year is Approximately %.2lf years \n",days,years);
			break;
		default:
			printf("Invalid choice Please select 1 or 2 ");
			break;
	}
}

