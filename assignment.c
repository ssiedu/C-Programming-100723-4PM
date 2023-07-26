#include<stdio.h>
void main()
{
	int a=5,b=10;
	a+=b;//a=a+b
	printf("\n value of a : %d",a);//15
	printf("\n value of b : %d",b);//10
	a-=b;//a=a-b
	printf("\n value of a : %d",a);//5
	printf("\n value of b : %d",b);//10
	b*=3;//b=b*3
	printf("\n value of a : %d",a);//5
	printf("\n value of b : %d",b);//30
	b/=a;//b=b/a
	printf("\n value of a : %d",a);//5
	printf("\n value of b : %d",b);//6
	a%=b;//a=5%6
	printf("\n value of a : %d",a);//
	printf("\n value of b : %d",b);//
	getch();
}
