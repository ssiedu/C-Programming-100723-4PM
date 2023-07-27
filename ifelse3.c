#include<stdio.h>
void main()
{
	int num1,num2;
	printf("\n Enter First Number : ");
	scanf("%d",&num1);
	printf("\n Enter Second Number : ");
	scanf("%d",&num2);
	if(num1>num2)
	{
		printf("\n %d is largest number",num1);
	}
	else
	{
		printf("\n %d is largest number",num2);
	}
	getch();
}
