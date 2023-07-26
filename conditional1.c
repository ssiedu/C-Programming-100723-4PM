#include<stdio.h>
void main()
{
	int n1,n2,n3,res;
	printf("\n Enter First number : ");
	scanf("%d",&n1);
	printf("\n Enter Second number : ");
	scanf("%d",&n2);
	printf("\n Enter third Number :");
	scanf("%d",&n3);
	//res=(n1>n2 && n1>n3) ? n1 : (n2>n3) ? n2 : n3;
	res=(n1>n2) ? (n1>n3) ? n1 :n3 : (n2>n3) ? n2:n3;
	printf("\n Largest number : %d",res);
	getch();
}
