#include<stdio.h>
void main()
{
	int num;
	int *ptr=&num;
	printf("\n Enter any number : ");
	scanf("%d",&num);
	if(*ptr%2==0)
		printf("\n Even Number");
	else
		printf("\n Odd Number ");
	getch();
	
}
