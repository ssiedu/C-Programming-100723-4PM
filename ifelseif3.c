#include<stdio.h>
void main()
{
	int num1,num2,num3;
	printf("\n Enter First number : ");
	scanf("%d",&num1);
	printf("\n Enter Second number : ");
	scanf("%d",&num2);
	printf("\n Enter third Number : ");
	scanf("%d",&num3);
	if(num1>num2 && num1>num3)
		printf("\n %d is greater number",num1);
	else if(num2>num3)
		printf("\n %d is greater number",num2);
	else
		printf("\n %d is greater number",num3);
	getch();
}
