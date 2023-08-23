#include<stdio.h>
void main()
{
	FILE *fp;
	char ch;
	fp=fopen("Myfile1.txt","r");
	while((ch=fgetc(fp))!=EOF)
	{
		printf("%c",ch);
	}
	printf("\n");
	rewind(fp);
	while((ch=fgetc(fp))!=EOF)
	{
		printf("%c",ch);
	}
	fclose(fp);
	getch();
}
