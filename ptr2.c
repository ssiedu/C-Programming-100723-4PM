#include<stdio.h>
void main()
{
	int a,b,add;
	int *ptr1,*ptr2;

	printf("\n Enter First Number : ");
	scanf("%d",&a);//100
	printf("\n Enter Second Number : ");
	scanf("%d",&b);//200
	ptr1=&a;
	ptr2=&b;
	add=*ptr1+*ptr2;
	
	printf("\n Addition : %d",add);
	getch();
}
