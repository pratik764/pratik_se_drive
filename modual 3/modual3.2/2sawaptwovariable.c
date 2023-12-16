//WAP to swap two numbers without using third variable
#include<stdio.h>
main()
{
	int a,b;
	printf("Enter the value of A and B :");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("Value of A is :%d\n",a);
	printf("Value of B is :%d\n",b);
}
