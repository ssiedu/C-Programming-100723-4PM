//function without arguments and with return value
#include<stdio.h>
int Addition();//function declaration
void main()
{
	//int sum;
	//sum=Addition();
	printf("\n sum is : %d",Addition());
	getch();
}
int Addition()
{
	int n1,n2,add;
	printf("\n Enter Two Numbers : ");
	scanf("%d%d",&n1,&n2);
	add=n1+n2;
	return add;
	//printf("\n Addition is : %d",add);
}
