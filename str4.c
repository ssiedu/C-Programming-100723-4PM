#include<stdio.h>
void main()
{
	char str[20];
	printf("\n Enter any string : ");
	fgets(str,20,stdin);
	printf("\n String is : %s",str);
	getch();
}
