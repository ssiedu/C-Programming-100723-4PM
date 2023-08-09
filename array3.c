#include<stdio.h>
void main()
{
	int a[10];
	int i,n;
	printf("\n Enter the soze of array : ");
	scanf("%d",&n);
	printf("\n Enter Array Elements : \n");
	for(i=0;i<n;i++)
	{
		printf("\n a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	printf("\n Array is : \n");
	for(i=0;i<n;i++)
	{
		printf("\na[%d] : %d",i,a[i]);
	}
}
