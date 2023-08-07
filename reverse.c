#include<stdio.h>
void main()
{
	int rev=0,tod=0,sum=0,n,temp;
	printf("\n Enter any number : ");
	scanf("%d",&n);
	temp=n;
	while(n!=0)//1234
	{
		rev=rev*10+n%10;
		tod= tod+1;
		sum=sum+n%10;
		n=n/10;
		
	}
	printf("\n reverse number : %d",rev);
	printf("\n total number of digit : %d",tod);
	printf("\n sum of digit : %d",sum);
	if(temp==rev)
		printf("\n number is pallindrome");
	else
		printf("\n Number is not pallindrome");
	
	
	getch();
}
