#include<stdio.h>
void main()
{
	int x=5;
	++x;
	printf("\n value of x : %d",x);//6
	--x;
	printf("\n value of x : %d",x);//5
	x++;
	printf("\n value of x : %d",x);//6
	x--;
	printf("\n value of x : %d",x);//5
	getch();
}
