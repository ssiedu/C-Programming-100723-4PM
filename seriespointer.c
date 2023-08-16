#include<stdio.h>
void main()
{
	int n,sum=0,i;
	int *ptr1=&n;
	int *ptr2=&sum;
	printf("\n Enter any number : ");
	scanf("%d",&n);
	for(i=1;i<=*ptr1;i++)
	{
		if(i%2==0)
		{
			*ptr2=*ptr2+i;
		}
	}
	printf("\n sum of Even Series number : %d",*ptr2);
	getch();
}
