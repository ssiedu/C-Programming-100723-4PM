#include<stdio.h>
int a=50;
void main()
{
     int a=10;
	{
		int a=20;
		printf("\n value of a in block : %d",a);
	}
	printf("\n value of a : %d",a);
	getch();
}

