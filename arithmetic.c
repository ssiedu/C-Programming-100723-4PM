#include<stdio.h>
void main()
{
	int a,b;
	printf("\n Enter Two Number : ");
	scanf("%d%d",&a,&b);
	printf("\n Addition : %d",a+b);
	printf("\n Subtraction : %d",a-b);
	printf("\n Multiplication : %d",a*b);
	printf("\n Division : %.2f",(float)a/b);
	printf("\n Modulus : %d",a%b);
	getch();
}
