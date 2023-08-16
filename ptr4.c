#include<stdio.h>
void main()
{
	int n1,n2;
	int *ptr1=&n1,*ptr2=&n2;
	printf("\n Enter First number : ");
	scanf("%d",&n1);
	printf("\n Enter second Number : ");
	scanf("%d",&n2);
	if(*ptr1>*ptr2)
		printf("%d is largest Number ",*ptr1);
	else
		printf("%d is largest number ",*ptr2);
	getch();
	
}
