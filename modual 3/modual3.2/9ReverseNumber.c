/*WAP to print number in reverse order e.g.: number = 64728 ---> reverse =82746*/

#include<stdio.h>
main()
{
    int num,rem,rev=0;
    printf("Enter the value:");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    printf("Reverse number of is %d",rev);
}
