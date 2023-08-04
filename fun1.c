#include<stdio.h>
void Hello();//function declaration
void Bye();
void main()
{
	int i;
	for(i=1;i<=10;i++)
	{
		Hello(); //function call
		
	}

	getch();
}
//function definition
void Hello()
{
	printf("\n Hello Everyone ");
	printf("\n Welcome to ssi digital");
	Bye();

}
void Bye()
{
	printf("\n Thank you");
	printf("\n Bye");
}
