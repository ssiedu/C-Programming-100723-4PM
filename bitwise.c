#include<stdio.h>
void main()
{
	int num1=40,num2=80;
	printf("\n Bitwise And : %d",num1&num2);
	printf("\n Bitwise OR  : %d",num1|num2);
	printf("\n Bitwise Xor : %d",num1^num2);
	printf("\n Bitwise not : %d",~num1);
	printf("\n Bitwise left shift : %d",num1<<1);
	printf("\n Bitwise right shift : %d",num2>>1);
	getch();
}
