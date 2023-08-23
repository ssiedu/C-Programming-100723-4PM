#include<stdio.h>
void main()
{
	FILE *fp;
	fp=fopen("Myfile4.txt","w+");
	fputs("This is C class",fp);
	fseek(fp,8,SEEK_SET);
	fputs("python class",fp);
	fclose(fp);
	getch();
}
