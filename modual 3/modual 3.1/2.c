/*
Write a program to make Simple calculator (to make addition, subtraction,
multiplication, division and modulo) */

#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter the value of a & b : \n");
	scanf("%d%d",&a,&b);
	printf("Addition of a & b is :%d\n",a+b);
	printf("Subtraction of a & b is :%d\n",a-b);
	printf("Multiplication of a & b is :%d\n",a*b);
	printf("Division of a & b is :%d\n",a/b);
  //printf("Modulo of a & b is : %lf",a%b);
	return 0;
}


