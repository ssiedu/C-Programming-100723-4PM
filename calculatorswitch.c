#include<stdio.h>
void main()
{
	int n1,n2;
	char ch,n;
	while(1)
	{
	  printf("\n Do you want to continue...\n 1.Yes(y)\n2.Exit(n)\n");
	  scanf(" %c",&n);
	  if(n=='y'|| n=='Y')
	 {
		
		printf("\n Please Select any One :- \n");
		printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
	
		printf("\n Enter Your choice : ");
		scanf(" %c",&ch);
	
		printf("\n Enter First number : ");
		scanf("%d",&n1);
		printf("\n Enter Second number : ");
		scanf("%d",&n2);
		switch(ch)
		{
			case '+':
				printf("\n %d + %d = %d",n1,n2,n1+n2);
				break;
			case '-':
				printf("\n %d - %d = %d",n1,n2,n1-n2);
				break;
			case '*':
				printf("\n %d * %d = %d",n1,n2,n1*n2);
				break;
			case '/':
				printf("\n %d / %d = %.2f",n1,n2,(float)n1/n2);
				break;
			default:
				printf("\n Please Enter valid Input");
				break;
		}
	 }
	 else
	  {
		printf("\n Thank You");
		break;
	  }
   }
	getch();
}
