#include<stdio.h>
void main()
{
	int a=10,b=20,c=10;
	printf("\n AND : %d",(a>b && b<c));//0
	printf("\n OR  : %d",(a!=b || a>c));//1
	printf("\n not : %d", !(b==c));//1
	printf("\n AND not : %d",!(b==c && a<b));//1
	printf("\n Or not : %d",(!(a==b) || b>c));//1
	printf("\n and or not : %d",!((a>b && c==a) || (b!=c)));//0
	getch();
}
