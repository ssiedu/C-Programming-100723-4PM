#include<stdio.h>
void main()
{
	int x=0,y=1,n,i=2,z;
	printf("\n Enter any number : ");
	scanf("%d",&n);
	printf("\n%d\n%d",x,y);
	while(i<n)
	{
		z=x+y;
		printf("\n%d",z);
		x=y;
		y=z;
		i++;
	}
	getch();
}
