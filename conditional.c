#include<stdio.h>
void main()
{
	int num1,num2,res;
	printf("\n Enter First Number : ");
	scanf("%d",&num1);
	printf("\n Enter Second Number : ");
	scanf("%d",&num2);
	(num1>num2) ? 
	printf("\n Largest Number : %d",num1):
	printf("\n Largest Number : %d",num2);
	getch();
	
}
