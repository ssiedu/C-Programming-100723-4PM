#include<stdio.h>
int fact(int n);
void main()
{
	int num,res;
	printf("\n Enter any number : ");
	scanf("%d",&num);
	res=fact(num);
	printf("\n Factorial : %d",res);
	getch();
	
}
int fact(int n)//5
{
	if(n==0)
		return 1;
	else
		return n*fact(n-1);
	
}



