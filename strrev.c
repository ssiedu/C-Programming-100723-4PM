#include<stdio.h>
#include<string.h>
void main()
{
	char str1[10];
	printf("\n Enter any string : ");
	gets(str1);
	strrev(str1);
	printf("\n String reverse : %s",str1);
	getch();
}
