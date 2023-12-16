// WAP to make simple calculator (operation include Addition, Subtraction,Multiplication, Division, modulo)

#include<stdio.h>
void main()
{
	char operation;
	int total,num1,num2;
	printf("Chooes Any One Operation +,-,*,/,%% :");
	scanf("%c",&operation);
	printf("Enter Value of Num1 & Num2 :");
	scanf("%d%d",&num1,&num2);
	switch (operation)
		{
			case '+':
			total=num1+num2;
			printf("Addition is: %d",total);
			break;
			case '-':
			total=num1-num2;
			printf("Subtraction Is is: %d",total);
			break;	
			case '*':
			total=num1*num2;
			printf("Multiplication is: %d",total);
			break;
			case '/':
			total=num1/num2;
			printf("Division is: %f",total);
			break;
		    case '%%':
//			total=(num1%2)==0;
//			printf("Modulo is: %c",total);
//			break; 
			default :
			printf("Invalid");
			break;
		}
}
