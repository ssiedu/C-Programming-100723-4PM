#include<stdio.h>
void main()
{
	char s[11]="SsiDigital";
	int i=0;
	int count=0;
	while(s[i]!='\0')
	{
		if(s[i]=='a' || s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u')
		{
			count++;
		}
		i++;
	}
	printf("\n Number of vowels in String : %d",count);
	getch();
}
