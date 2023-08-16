#include<stdio.h>
void main()
{
	int num=100;
	int *ptr;
	ptr=&num;
	printf("\n value of variable : %d",num);
	printf("\n address of variable : %u",&num);
	printf("\n Ptr value : %u",ptr);
	printf("\n address of ptr : %u",&ptr);
	printf("\n value at position : %d",*ptr);
	getch();
}
