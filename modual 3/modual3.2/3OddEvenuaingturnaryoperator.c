// WAP to find number is even or odd using ternary operator


#include<stdio.h>
void main()
{
	int num;
	printf("Enter number :");
	scanf("%d",&num);
	(num%2==0) ? printf("Entered Number Is Even:%d",num): printf("Entered Number Is Odd:%d",num);
}
