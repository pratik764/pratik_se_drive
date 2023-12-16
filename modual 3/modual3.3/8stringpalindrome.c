// WAP to reverse a string and check that the string is palindrome or not

#include <stdio.h>
#include <string.h>
void main()
{
    char name[20];
    printf("Enter Your String:");
    gets(name);
    printf("Reverse String Is:%s\n", strrev(name));
    int length = 0;
    int h = strlen(name) - 1;
    while (h > length)
    {
        if(name[length++] != name[h--])
        {
            printf("\n Entered string is not a pelindrome\n", name);
            return 0;
        }
    }
    printf("Entered string is a pelindrome", name);
}
