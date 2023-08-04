#include<stdio.h>
void main()
{
	int num1,num2,temp;
	printf("\n Enter first Number :");
	scanf("%d",&num1);
	printf("\n Enter Second Number : ");
	scanf("%d",&num2);
	/*num1=num1^num2;
	num2=num1^num2;
	num1=num1^num2;*/ 
	
	/*num1=num1*num2; // num1=200
	num2=num1/num2;// num2=200/20=10
	num1=num1/num2;// num1=200/10 =20*/
	
	
	/*num1=num1+num2;//num1=10+20=30
	num2=num1-num2; num2= 30-20=10
	num1=num1-num2;// num1=30-10 = 20*/
	/*temp=num1;
	num1=num2;
	num2=temp;*/
	printf("\n First Number : %d",num1);
	printf("\n Second Number : %d",num2);
	getch();
}
