#include<stdio.h>
void main()
{
	int a;
	printf("\n Enter any number : ");
	scanf("%d",&a);
	if(a%2==0 && a%3==0)
		printf("\n number is divisible by both");
	else
		printf("\n number is not divisible by both");
	getch();
}
