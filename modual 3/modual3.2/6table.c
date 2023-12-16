//WAP to print table up to given numbers

#include<stdio.h>
int main()
{
	int i,k;
	printf("Enter the no of you want to get table:",k);
	scanf("%d",&k);
	for(i=1;i<=10;i++)
	{
		printf("%d * %d = %d\n",k,i,k*i);
	}
	printf("Enter the no of you want to get table:",i);
	return 0;
}
