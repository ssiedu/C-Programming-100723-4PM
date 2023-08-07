//function with arguments and without return value
#include<stdio.h>
void Addition(int a, int b);//function declaration
void main()
{
	int n1,n2,add;
	printf("\n Enter Two Numbers : ");
	scanf("%d%d",&n1,&n2);
	Addition(n1,n2);
	getch();
}
void Addition(int a, int b)
{
	int add;
	add=a+b;
	printf("\n Addition is : %d",add);
}
