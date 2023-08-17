#include<stdio.h>
void main()
{
	int a=10;
	int b=20;
	int *ptr1=&a;
	int *ptr2=&b;
	printf("\n address of ptr1 : %u",ptr1);
	printf("\n address of ptr2 : %u",ptr2);
	ptr1=ptr1-ptr2;
	printf("\n Address of ptr1 : %u",ptr1);
	printf("\n Address of ptr2 : %u",ptr2);
	getch();
}
