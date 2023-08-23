#include<stdio.h>
void main()
{
	FILE *fp;
	int len;
	fp=fopen("Myfile1.txt","r");
	fseek(fp,0,SEEK_END);
	len=ftell(fp);
	fclose(fp);
	printf("\n Size of file : %d",len);
	getch();
}
