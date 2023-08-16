#include<stdio.h>
void main()
{
	int a[3][3],b[3][3],temp[3][3];
	int i,j,r,c;
	printf("\n Enter row size : ");
	scanf("%d",&r);
	printf("\n Enter column size : ");
	scanf("%d",&c);
	
	printf("\n Enter First Matrix Elements : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n Enter Second Matrix Elements :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			temp[i][j]=a[i][j];
			a[i][j]=b[i][j];
			b[i][j]=temp[i][j];
		}
	}
	
	printf("\n First Matrix : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n\n");
	}
	
	printf("\n Second Matrix : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\t%d",b[i][j]);
		}
		printf("\n\n");
	}
	
	getch();
}
	
	
	
	
	
	
	
	
	
	
