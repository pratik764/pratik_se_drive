/* WAP to take 10 no. Input from user and find out …
 How many Even numbers are there
 How many odd numbers are there
 Sum of even numbers
 Sum of odd numbers*/


#include<stdio.h>
main()
{
	int i,even=0,odd=0,eventotal=0,oddtotal=0;
	for(i=0;i<=10;i++)	
	{
		printf("Enter values:");
		scanf("%d",&i);
	}
	for(i=1;i<=10;i++)
	{
		if(i%2==0)
		{
			even++;
			eventotal+=i;
		}
		else
		{
			odd++;
			oddtotal+=i;
		}
	}
	printf("Even no are there:%d\n",even);
	printf("Odd no are there:%d\n",odd);
	printf("Sum of even no are there:%d\n",eventotal);
	printf("Sum of odd no are there:%d\n",oddtotal);
}
2
