//Write a program you have to make a summation of first and last Digit. (E.g.,1234 Ans:5)
#include<stdio.h>
void main()
{
    int num,firstdigit,lastdigit,sum;
    printf("enter value:");
    scanf("%d",&num);
    lastdigit=num%10;
    while(num>=10)
    {
        num/=10;
    }
    firstdigit=num;
    sum=firstdigit+lastdigit;
    printf("First And Last Digit Sum Is:%d",sum);

}
