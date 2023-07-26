#include<stdio.h>
void main()
{
	int num;
	printf("\n Enter any number : ");
	scanf("%d",&num);
	(num>=0)? printf("\n %d Positive Number ",num):
		printf("\n %d Negative Number ",num);
	getch();
}
