#include<stdio.h>
int Add(int a, int b);//0
int Sub(int a, int b);//1
int Mul(int a, int b);//2
int Div(int a, int b);//3
void main()
{
	int x,y,res;
	int (*fp[4])(int,int);
	
	printf("\n Enter the value of x : ");
	scanf("%d",&x);
	printf("\n Enter the value of y : ");
	scanf("%d",&y);
	
	fp[0]=&Add;
	fp[1]=&Sub;
	fp[2]=&Mul;
	fp[3]=&Div;
	
	res= (*fp[0])(x,y);
	printf("\n Sum is : %d",res);
	
	res=(*fp[1])(x,y);
	printf("\n Sub is : %d",res);
	
	res= (*fp[2])(x,y);
	printf("\n Mul is : %d",res);
	
	res= (*fp[3])(x,y);
	printf("\n Div is : %d",res);
	
	getch();
	
}
int Add(int a, int b)
{
	return a+b;
}
int Sub(int a, int b)
{
	return a-b;
}
int Mul(int a ,int b)
{
	return a*b;
}
int Div(int a, int b)
{
	return a/b;
}












