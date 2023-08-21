#include<stdio.h>
#include<string.h>
void main()
{
	char str1[20];
	char str2[20];
	printf("\n Enter any string : ");
	gets(str1);
	strcpy(str2,str1);
	printf("\n String 1 is : %s",str1);
	printf("\n String 2 is : %s",str2);
	getch();
}
