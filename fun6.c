//function with arguments and with return value
#include<stdio.h>
int Addition(int a, int b);//function declaration
void main()
{
	int n1,n2,sum;
	printf("\n Enter Two Numbers : ");
	scanf("%d%d",&n1,&n2);
	sum=Addition(n1,n2);
	printf("\n Addition is : %d",sum);
	getch();
}
int Addition(int a, int b)
{
	int add;
	add=a+b;
	return add;
}
