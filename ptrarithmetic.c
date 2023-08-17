#include<stdio.h>
void main()
{
	int num=50;
	int *ptr=&num;
	printf("\n Address of ptr : %u",ptr);
	ptr--;
	//ptr=ptr+1;
	printf("\n Address of ptr : %u",ptr);
	getch();
}
