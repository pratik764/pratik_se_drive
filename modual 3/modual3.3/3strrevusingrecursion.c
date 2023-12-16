//   WAP to find reverse of string using recursion

#include<stdio.h>
#include<string.h>

void abs(char name[])
{
    return abs(strrev(name));
}
void main()
{
    char name[10];
    printf("Enter your string:");
    scanf("%s",&name);
   printf("Reverse String is :%s",strrev(name));
   abs(name);
}
