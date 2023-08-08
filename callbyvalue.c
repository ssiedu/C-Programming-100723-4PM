#include<stdio.h>
void swap(int a, int b);
void main()
{
	int x,y;
	printf("\n Enter x: ");
	scanf("%d",&x);
	printf("\n Enter Y : ");
	scanf("%d",&y);
	printf("\n Before Function Call :\n");
	printf("\n Value of x : %d",x);
	printf("\n value of y : %d",y);
	
	swap(x,y);
	
	printf("\n After Function Call :\n");
	printf("\n Value of x : %d",x);
	printf("\n value of y : %d",y);
	getch();
}
void swap(int a, int b)
{
	int c;
	printf("\n In Swap function : \n");
	printf("\n value of a : %d",a);
	printf("\n value of b : %d",b);
	c=a;
	a=b;
	b=c;
	
	printf("\n value of a : %d",a);
	printf("\n value of b : %d",b);
}
