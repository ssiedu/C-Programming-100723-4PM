#include<stdio.h>
void main()
{
	int i;
	float f;
	char c;
	void *ptr;
	
	ptr=&i;
	i=100;
	printf("\n value of i : %d",i);//100
	printf("\n value of iptr : %d",*(int*)ptr);//100
	
	ptr=&f;
	f=12.45;
	printf("\n value of f : %.2f",f);//12.45
	printf("\n value of fptr : %.2f",*(float*)ptr);//12.45
	
	ptr=&c;
	c='Z';
	printf("\n value of c : %c",c);//Z
	printf("\n value of cptr : %c",*(char*)ptr);//Z
	
	getch();
	
	
	
	
	
	
}
