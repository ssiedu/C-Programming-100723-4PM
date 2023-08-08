#include<stdio.h>
void EvenOdd(int num);
void main()
{
	int n;
	printf("\n Enter any number : ");
	scanf("%d",&n);
	EvenOdd(n);
	getch();
}
void EvenOdd(int num)
{
	if(num>0)
	{
		printf("\n Positive Number");
		if(num%2==0)
		printf("\n Even Number ");
		else
		printf("\n Odd Number");
	}
	else
	{
		printf("\n Negative Number");
		if(num%2==0)
		printf("\n Even Number ");
		else
		printf("\n Odd Number");
	}

}
