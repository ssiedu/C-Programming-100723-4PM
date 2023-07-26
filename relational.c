#include<stdio.h>
void main()
{
	float a,b;
	printf("\n Enter the value of a :");
	scanf("%f",&a);
	printf("\n Enter the value of b : ");
	scanf("%f",&b);
	printf("\n %f > %f : %d",a,b,a>b);//0
	printf("\n %f < %f : %d",a,b,a<b);//1
	printf("\n %f >= %f : %d",a,b,a>=b);//0
	printf("\n %f <= %f : %d",a,b,a<=b);//1
	printf("\n %f == %f : %d",a,b,a==b);//0
	printf("\n %f != %f : %d",a,b,a!=b);//1
	getch();
}
