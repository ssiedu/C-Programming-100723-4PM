#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i,*ptr,sum=0;
	printf("\n Enter Size of array :");
	scanf("%d",&n);
	ptr=(int*)calloc(n,sizeof(int));
	if(ptr==NULL)
	{
		printf("\n Sorry! Unable to allocate Memory");
		exit(0);
	}
	printf("\n Enter Array Elements :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
		sum=sum+ *(ptr+i);
	}
	printf("\n Sum of array Elements : %d",sum);
	free(ptr);
	getch();	
}
