#include<stdio.h>
void main()
{
	int i;
	for(i=1;i<=10;i++)//
	{
		if(i==5)
		{
			goto ABC;//continue;//break;
		}
		printf("\n%d",i);//
	}
	ABC:
		printf("\n this is goto statement");
	getch();
}

