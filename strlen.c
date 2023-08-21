#include<stdio.h>
#include<string.h>
void main()
{
	char str[20];
	int len;
	printf("\n Enter any String : ");
	gets(str);
	len=strlen(str);
	printf("\n Length of string :%d",len);
	getch();
}
