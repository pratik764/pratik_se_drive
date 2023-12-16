/*Write a program of structure for five employee that provides the following
information -print and display empno, empname, address and age*/
#include<stdio.h>
struct emp
{
    int empno,age;
    char name[10],add[20];
}a1,a2,a3,a4,a5;
void main()
{
    printf("Enter Employee No.:");
    scanf("%d",&a1.empno);
    printf("Enter Employee Name:");
    scanf("%s",&a1.name);
    printf("Enter Employee Address:");
    scanf("%s",&a1.add);
    printf("Enter Employee Age:");
    scanf("%d",&a1.age);
    printf("Enter Employee No.:");
    scanf("%d",&a2.empno);
    printf("Enter Employee Name:");
    scanf("%s",&a2.name);
    printf("Enter Employee Address:");
    scanf("%s",&a2.add);
    printf("Enter Employee Age:");
    scanf("%d",&a2.age);

    printf("Enter Employee No.:");
    scanf("%d",&a3.empno);
    printf("Enter Employee Name:");
    scanf("%s",&a3.name);
    printf("Enter Employee Address:");
    scanf("%s",&a3.add);
    printf("Enter Employee Age:");
    scanf("%d",&a3.age);

    printf("Enter Employee No.:");
    scanf("%d",&a4.empno);
    printf("Enter Employee Name:");
    scanf("%s",&a4.name);
    printf("Enter Employee Address:");
    scanf("%s",&a4.add);
    printf("Enter Employee Age:");
    scanf("%d",&a4.age);

    printf("Enter Employee No.:");
    scanf("%d",&a5.empno);
    printf("Enter Employee Name:");
    scanf("%s",&a5.name);
    printf("Enter Employee Address:");
    scanf("%s",&a5.add);
    printf("Enter Employee Age:");
    scanf("%d",&a5.age);

    printf("Employee No\tEmployee Name\tEmployee Address\tEmployee Age\n");
    printf("%d\t\t%s\t\t%s\t\t\t%d\n",a1.empno,a1.name,a1.add,a1.age);
    printf("%d\t\t%s\t\t%s\t\t\t%d\n",a2.empno,a2.name,a2.add,a2.age);
    printf("%d\t\t%s\t\t%s\t\t\t%d\n",a3.empno,a3.name,a3.add,a3.age);
    printf("%d\t\t%s\t\t%s\t\t\t%d\n",a4.empno,a4.name,a4.add,a4.age);
    printf("%d\t\t%s\t\t%s\t\t\t%d\n",a5.empno,a5.name,a5.add,a5.age);
}
