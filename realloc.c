#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n1,n2,i,*ptr;
	printf("\n Enter Size of array : ");
	scanf("%d",&n1);
	ptr=(int*)malloc(n1*sizeof(int));
	printf("\n Previously Memory Allocation : \n");
	for(i=0;i<n1;i++)
	{
		printf("\n%d",(ptr+i));
	}
	printf("\n Enter new Size of array :\n");
	scanf("%d",&n2);
	ptr=realloc(ptr,n2*sizeof(int));
	printf("\n Newly Allocation of Memory :\n");
	for(i=0;i<n2;i++)
	{
		printf("\n%d",(ptr+i));
	}
	free(ptr);
	getch();
}
