// Write a program of structure employee that provides the following information -print and display empno, empname, address and age
#include <stdio.h>
struct emp
{
    int empno, age;
    char empname[10], empadd[10];
} s1;
void main()
{
    char empname[10], empadd[10];
    printf("Enter Employee No.:");
    scanf("%d", &s1.empno);
    printf("Enter Employee Name:");
    scanf("%s", &s1.empname);
    printf("Enter Employee Address:");
    scanf("%s", &s1.empadd);
    printf("Enter Employee Age:");
    scanf("%d", &s1.age);

    printf("\nYour Employ Number is :%d\n", s1.empno);
    printf("Your Employ Name is :%s\n", s1.empname);
    printf("Your Employ Address is :%s\n", s1.empadd);
    printf("Your Employ  Age is :%d\n", s1.age);
}
