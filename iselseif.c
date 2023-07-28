#include<stdio.h>
void main()
{
	int num;
	printf("\n Enter any number : ");
	scanf("%d",&num);
	if(num==0)
		printf("\n Zero");
	else if(num%2==0)
		printf("\n Even Number ");
	else
		printf("\n Odd Number");
	getch();
}
