#include<stdio.h>
void main()
{
	FILE *fp;
	int i,r;
	fp=fopen("MYfile5.txt","w");
	for(i=1;i<=10;i++)
		putw(i,fp);
	fclose(fp);
	fp=fopen("MYfile5.txt","r");
	for(i=1;i<=10;i++)
	{
		r=getw(fp);
		printf("\n%d",r);
	}
	fclose(fp);
	getch();
}
