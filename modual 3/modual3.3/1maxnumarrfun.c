//Write a program to find out the max number from given array using function
#include<stdio.h>
void fun()
{
    int i,arr[]={1,2,15,3,14},max;
    max=arr[0];
    for(i=0;i<5;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        
    }printf("Maximum number is :%d",max);
}
void main()
{
    fun();
}
