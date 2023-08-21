#include<stdio.h>
void main()
{
	char str[10];
	char *ptr=str;
	printf("\n Enter any string : ");
	gets(str);
	printf("\n string is : %s",ptr);
	getch();
}
