#include<stdio.h>
#include<string.h>
void main()
{
	char str1[20];
	char str2[20];
	printf("\n Enter First String : ");
	gets(str1);
	printf("\n Enter Second String : ");
	gets(str2);
	strcat(str1,str2);
	printf("\n str1 is : %s",str1);
	printf("\n str2 is : %s",str2);
	getch();
}
