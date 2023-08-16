#include<stdio.h>
void  getarray(int a[]);
void main()
{
	int arr[5]={11,22,33,44,55};
	getarray(arr);
	getch();
}
void getarray(int a[])
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("\n%d",a[i]);
	}
}
