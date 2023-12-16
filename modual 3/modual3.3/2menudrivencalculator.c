// WAP of Addition, Subtraction, Multiplication and Division using Switchcase.(Must Be Menu Driven)
#include <stdio.h>
void main()
{
    int choice;
    double a, b, ans;
    printf("----Menu----\n\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\nSelect Your Choice:");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter The Value Of a:");
        scanf("%lf", &a);
        printf("Enter The Value Of b:");
        scanf("%lf", &b);
        ans = a + b;
        printf("Addition Is :%lf", ans);
        break;
    case 2:
        printf("Enter The Value Of a:");
        scanf("%lf", &a);
        printf("Enter The Value Of b:");
        scanf("%lf", &b);
        ans = a - b;
        printf("Subtraction Is :%lf", ans);
        break;
    case 3:
        printf("Enter The Value Of a:");
        scanf("%lf", &a);
        printf("Enter The Value Of b:");
        scanf("%lf", &b);
        ans = a * b;
        printf("Multiplication Is :%lf", ans);
        break;
    case 4:
        printf("Enter The Value Of a:");
        scanf("%lf", &a);
        printf("Enter The Value Of b:");
        scanf("%lf", &b);
        if (b != 0)
        {
            ans = a / b;
            printf("Division Is : %lf\n", ans);
        }
        else
        {
            printf("Error: Division by zero!\n");
        }
        break;

    default:
        break;
    }
}



/*#include <stdio.h>
void print(int a,int b)
{
    int ans =a+b;
    printf("This is your answer for addtion of two numbers %d",ans);
}
void main()
{
    int choice;
    int a,b,ans;
    printf("----Menu----\n\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\nSelect Your Choice:");
    scanf("%d", &choice);
    printf("Enter your value of a here :");
    scanf("%d",&a);
    printf("Enter your value of b here :");
    scanf("%d",&b);
    switch (choice)
    {
    case 1:
        print(a,b);
        ans = a + b;
        printf("Addition Is :%d", ans);
        break;
    case 2:
        print(a,b);
        ans = a - b;
        printf("Subtraction Is :%d", ans);
        break;
    case 3:
        print(a,b);
        ans = a * b;
        printf("Multiplication Is :%f", ans);
        break;
    case 4:
        print(a,b);
        if (b != 0)
        {
            ans = a / b;
            printf("Division Is : %f\n", ans);
        }
        else
        {
            printf("Error: Division by zero!\n");
        }
        break;

    default:
        break;
    }
}*/



