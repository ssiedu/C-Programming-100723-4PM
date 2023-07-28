#include<stdio.h>
void main()
{
	char ch;
	printf("\n Enter any number : ");
	scanf("%c",&ch);
	if(ch=='a' ||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
		printf("\n Vowel");
	else
		printf("\n Consonent");
	getch();
}
