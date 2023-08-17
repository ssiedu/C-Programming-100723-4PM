#include<stdio.h>
void main()
{
	int a[5]={11,22,33,44,55};
	int *ptr=a;
	int i;
	for(i=0;i<5;i++)
	{
		printf("\n%d",*(ptr+i));
	}
	getch();
}
