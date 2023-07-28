#include<stdio.h>
void main()
{
	char ch;
	printf("\n Enter any character : ");
	scanf("%c",&ch);
	if(ch>='a' && ch<='z')
		printf("\n Lower case letter");
	else
		printf("\n Upper case letter");
	getch();
}
