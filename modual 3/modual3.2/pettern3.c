/*
A 
B C
D E F
G H I J
K L M N O       */
#include<stdio.h>
void main()
{
    int i,j,k=0;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;++j,++k)
        {
            printf("%c ",k+'A');
        }printf("\n");
    }
}
