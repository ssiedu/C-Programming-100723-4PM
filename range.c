#include<stdio.h>
void main()
{
	int ch;
	printf("\n Enter any number : ");
	scanf("%d",&ch);
	if(ch>=100 && ch<=200)
		printf("\n number is in range");
	else
		printf("\n number is out of range");
	getch();
}
