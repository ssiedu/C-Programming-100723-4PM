#include<stdio.h>
void main()
{
	int a[2][3];
	int i,j;
	a[0][0]=11;
	a[0][1]=12;
	a[0][2]=13;
	a[1][0]=21;
	a[1][1]=22;
	a[1][2]=23;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n\n");
	}
	getch();
}
