#include<stdio.h>
void main()
{
	int var=50;
	int *ptr=&var;
	int **pptr = &ptr;
	int ***ppptr = &pptr;
	printf("\n variable address : %u",&var);
	printf("\n value of ptr     : %u",ptr);
	printf("\n value of var using ptr : %d",*ptr);
	
	printf("\n address of ptr : %u",&ptr);
	printf("\n value of pptr  : %u",pptr);
	printf("\n value of pptr  : %u",*pptr);
	printf("\n value of pptr  : %u",**pptr);
	
	printf("\n address of pptr : %u",&pptr);
	printf("\n value of ppptr  : %u",***ppptr);
	getch();
}
