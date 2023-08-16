#include<stdio.h>
void main()
{
	int a[3][3],b[3][3],mul[3][3];
	int i,j,k,r,c,r1,c1;
	printf("\n Enter first matrix row size : ");
	scanf("%d",&r);
	printf("\n Enter first matrix column size : ");
	scanf("%d",&c);
	printf("\n Enter second matrix row size : ");
	scanf("%d",&r1);
	printf("\n Enter second matrix column size : ");
	scanf("%d",&c1);
	printf("\n Enter First Matrix Elements : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n Enter Second Matrix Elements :\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			mul[i][j]=0;
			for(k=0;k<c;k++)
			{
				mul[i][j]=mul[i][j]+a[i][k]*b[k][j];
			}
		}
	}
	printf("\n Matrix Multiplication : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("\t%d",mul[i][j]);
		}
		printf("\n\n");
	}
	getch();
}
	
	
	
	
	
	
	
	
	
	
