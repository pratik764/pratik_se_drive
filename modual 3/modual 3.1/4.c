//WAP to find simple interest

#include<stdio.h>
main()
{
	float p,t,r,si;
	printf("Enter the value of principle amount :\n");
	printf("Enter the value of rate of intrest :\n");
	printf("Enter the value of time period in year :\n");
	scanf("%f%f%f",&p,&t,&r);
	si=p*r*t/100;
	printf("Simple Intrest of entered amount is :%f",si);
}
