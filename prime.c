#include<stdio.h>
void main()
{
	int n,i,flag=1;
	printf("\n Enter any number : ");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)//13
	{
		if(n%i==0)
		{
			flag=0;
			break;
		}
	}
	if(flag==0)
		printf("\n Not prime");
	else
		printf("\n Prime Number");
	getch();
}
