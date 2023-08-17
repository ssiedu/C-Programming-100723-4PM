#include<stdio.h>
int mul(int a, int b);
void main()
{
	int a,b,res;
	int (*ptr)(int,int);
	printf("\n Enter the value of a :");
	scanf("%d",&a);
	printf("\n Enter the value of b : ");
	scanf("%d",&b);
	ptr=&mul;
	res=(*ptr)(a,b);
	printf("\n Multiplication : %d",res);
	getch();
}
int mul(int a ,int b)
{
	
	return a*b;
}





