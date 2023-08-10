#include<stdio.h>
#define MAX 50
void main()
{
	int a[MAX],i,n,se,found=0;
	printf("\n Enter size of array : ");
	scanf("%d",&n);
	printf("\n Enter Array Elements :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Enter Search Element :");
	scanf("%d",&se);
	
	for(i=0;i<n;i++)
	{
		if(a[i]==se)
		{
			found=1;
			break;
		}
	}
	
	if(found==1)
		printf("\n %d element found at position %d",se,i+1);
	else
		printf("\n Element not Found in array");
	
	getch();
}
