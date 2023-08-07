//function without arguments and without return value
#include<stdio.h>
void Addition();//function declaration
void main()
{
	Addition();
	getch();
}
void Addition()
{
	int n1,n2,add;
	printf("\n Enter Two Numbers : ");
	scanf("%d%d",&n1,&n2);
	add=n1+n2;
	printf("\n Addition is : %d",add);
}
