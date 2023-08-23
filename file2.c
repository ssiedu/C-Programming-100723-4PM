#include<stdio.h>
void main()
{
	FILE *fp;
	char ch[30];
	fp=fopen("Myfile1.txt","w");
	fprintf(fp,"Welcome to ssi digital");
	fclose(fp);
	fp=fopen("Myfile1.txt","r");
	while(fscanf(fp,"%s",ch)!=EOF)
	{
		printf("%s",ch);
	}
	fclose(fp);
	getch();
}
