/* WAP to take two Array input from user and sort them in ascending or
descending order as per user’s choice */

#include<stdio.h>
void main()
{
    int arr[100],i,j,a,size;
    printf("Enter size of array:");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        printf("Enter your array value:[%d]:",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<=size;j++)
        {
            if(arr[i]>arr[j])
            {
                a=arr[i];
                arr[i]=arr[j];
                arr[j]=a;
            }
        }
    }
    printf("Accending Number Is:");
    for(i=0;i<size;i++)
    {
        printf("%d,",arr[i]);
    }

}
