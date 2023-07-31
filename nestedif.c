#include<stdio.h>
void main()
{
	int num1,num2;
	printf("\n Enter First number : ");
	scanf("%d",&num1);
	printf("\n Enter Second number : ");
	scanf("%d",&num2);
	if(num1!=num2)
	{
		printf("%d is not equal to %d",num1,num2);
		if(num1>num2)
		{
			printf("\n %d is greater than %d",num1,num2);
		}
		else
		{
			printf("\n %d is greater than %d",num2,num1);
		}
	}
	else
	{
		printf("Both are equal");
	}
	getch();
}
