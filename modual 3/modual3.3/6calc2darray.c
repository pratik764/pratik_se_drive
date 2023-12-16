/* WAP to make addition, Subtraction and multiplication of two matrix using*/
#include <stdio.h>
int loop(int val1[2][2], int val2[2][2], int i, int j);
void main()
{
    int choice, i, j, val1[2][2], val2[2][2], res[2][2];
    printf("1.Addition\n");
    printf("2.Substraction\n");
    printf("3.Multiplication\n");
    printf("Select Any Choice Number :");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        loop(val1, val2, i, j);
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                res[i][j] = val1[i][j] + val2[i][j];
                printf("Sum of array[%d][%d] is :%d\n", val1[i][j], val2[i][j], res[i][j]);
            }
        }
        break;
    case 2:
        loop(val1, val2, i, j);
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                res[i][j] = val1[i][j] - val2[i][j];
                printf("Sub of array[%d][%d] is :%d\n", val1[i][j], val2[i][j], res[i][j]);
            }
        }
        break;
    case 3:
        loop(val1, val2, i, j);
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (int k = 0; k < 2; k++)
                {
                    res[i][j] += val1[i][k] * val2[k][j];
                }
            }
        }
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                // res[i][j] = val1[i][j] - val2[i][j];
                printf("%d \t", res[i][j]);
            }
            printf("\n");
        }
    default:
        printf("Invalid Input");
        break;
    }
}
int loop(int val1[2][2], int val2[2][2], int i, int j)
{
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter array :[%d][%d]", i, j);
            scanf("%d", &val1[i][j]);
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter array :[%d][%d]", i, j);
            scanf("%d", &val2[i][j]);
        }
    }
}
