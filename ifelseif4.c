#include<stdio.h>
void main()
{
	char ch;
	printf("\n Enter any character : ");
	scanf("%c",&ch);
	if(ch>='a' && ch<='z')
		printf("\n Lower Case letter");
	else if(ch>='A' && ch<='Z')
		printf("\n Upper case letter");
	else if(ch>='0' && ch<='9')
		printf("\n Digit");
	else
		printf("\n Special Symbol");
	getch();
}
