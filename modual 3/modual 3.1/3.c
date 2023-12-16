//WAP to find area of circle, rectangle and triangle

/* #include<stdio.h>
void main()
{
	float redius,area_circle;
	printf("Enter Redius of Circle=");
	scanf("%f",&redius);
	area_circle=3.14*redius*redius;
	printf("Area of Circle=(3.14*redius*redius):%.2lf",area_circle);
} */


#include<stdio.h>
void main()
{
	int hight,width,area_reactangle;
	printf("Enter Height and Width of Rectangel=");
	scanf("%d%d",&hight,&width);
	area_reactangle=hight*width;
	printf("Area of Circle =%d",area_reactangle);
}

/*
#include<stdio.h>
main()
{
	int hight,base,area_triangle;
	printf("Enter Height and Width of Triangle=");
	scanf("%d%d",&hight,&base);
	area_triangle=base*hight*1/2;
	printf("Area of Circle:%d",area_triangle);
} */



