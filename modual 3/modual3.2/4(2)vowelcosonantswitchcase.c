// Vowel or Consonant using switch case

#include<stdio.h>
void main()
{
	char a;
	printf("Enter Any Character :");
	scanf("%c",&a);
	switch (a)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'U':
			printf("Entered Character Is Vowel :");
			break;
		default:
			printf("Entered Character Is Consonant :");
	}
}
