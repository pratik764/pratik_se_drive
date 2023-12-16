// Write a program make a summation of given number (E.g., 1523 Ans: 11)

#include<stdio.h>
main()
{
	int num=0,tem=0,sum=0,reminder=0;
	printf("Enter an integer:\n");
	scanf("%d",&num);
	tem=num;
	while(tem!=0)
	{
		reminder=tem%10;
		sum = sum+reminder;
		tem=tem/10;
	}
	printf("sum of %d is:%d",num,sum);
}
