#include<stdio.h>
void main()
{
	int n,i,fact=1;
	printf("\n Enter any number : ");
	scanf("%d",&n);//5
	for(i=1;i<=n;i++)//1 2 3 4 5 6
	{
		fact=fact*i;
		/*
		fact = 1*1 = 1
		fact= 1*2 = 2
		fact= 2*3 = 6
		fact= 6*4=24
		fact= 24*5 = 120
		*/
	}
	printf("\n factorial : %d",fact);
	getch();
}

