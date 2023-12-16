//WAP to check if the given year is a leap year or not.

#include<stdio.h>
main()
{
	int year;
	printf("enter year:");
	scanf("%d",&year);
	if(year%400==0 ||year%4==0 && year%100!=00)
	{
		printf("This Year Is Leap Year:");
	}
	else
	{
		printf("This Year Is Base Year:");
	}
}
