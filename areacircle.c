#include<stdio.h>
#define pi 3.14
void main()
{
	float radius;
	float area;
	printf("\n Enter radius of circle : ");
	scanf("%f",&radius);
	area=pi*radius*radius;
	printf("\n area of circle : %.2f",area);
	getch();
} 
