#include<stdio.h>
int factorial (int n);
void main()
{
	int num,res;
	printf("\n Enter any number : ");
	scanf("%d",&num);
	res=factorial(num);
	printf("\n factorial is : %d",res);
	getch();
}
int factorial(int n)
{
	int i,fact=1;
	i=1;
	do
	{
		fact=fact*i;
		i++;
	}while(i<=n);
	
	return fact;
}
