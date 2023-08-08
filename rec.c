#include<stdio.h>
void show();
void main()
{
	show();
	getch();
}
void show()
{
	printf("\n Hello");
	show();
}
