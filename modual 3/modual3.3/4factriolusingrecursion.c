// WAP to find factorial using recursion
#include <stdio.h>
int fac(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        return num * fac(num - 1);
    }
}
void main()
{
    int num, i;
    printf("Enter Number:");
    scanf("%d", &num);
    i = fac(num);
    printf("Factriol of %d is: %d", num, i);
}
