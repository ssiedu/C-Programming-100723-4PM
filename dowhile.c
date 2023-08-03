#include<stdio.h>
void main()
{
	int i,s,n;
	printf("\n Enter Start limit :");
	scanf("%d",&s);
	printf("\n Enter End limit :");
	scanf("%d",&n);
	i=s;
	do
	{
		printf("\t%d",i);
		i++;
	}while(i<=n);
	getch();
}
