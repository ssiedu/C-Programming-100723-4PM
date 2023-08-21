#include<stdio.h>
#include<string.h>
void main()
{
	char str1[10];
	char str2[10];
	printf("\n Enter First string : ");
	gets(str1);
	printf("\n Enter Second String : ");
	gets(str2);
	if(strcmp(str1,str2)==0)
		printf("\n Both are equal");
	else
		printf("\n Both are not equal");
	getch();
}
