/*
Syntex:
Struct Struc_name{
    Member Function
}obj;
*/
#include <stdio.h>
#include <string.h>
struct person
{
    int age;
    float salary;
    char name[20];
} p1;
main()
{   char Name[10];
    printf("Enter Your Name:");
    scanf("%s", &Name);
    strcpy(p1.name,Name);
    printf("Enter Your age :");
    scanf("%d", &p1.age);
    printf("Enter Your Salary :");
    scanf("%f", &p1.salary);

    printf("%s\n",p1.name);
    printf("%d\n",p1.age);
    printf("%f\n",p1.salary);
}
