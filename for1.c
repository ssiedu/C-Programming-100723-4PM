#include<stdio.h>
void main()
{
	int i,n,s;
	printf("\n Enter End Limit : ");
	scanf("%d",&n);
	printf("\n Enter Start Limit : ");
	scanf("%d",&s);
	for (i=s;i<=n;i++)
	{
		printf("\t%d",i);
	}

	getch();
}
