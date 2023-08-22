#include<stdio.h>
struct Employee
{
	int id;
	char name[10];
	float sal;
};
void main()
{
	int i,n;
	struct Employee e[10];
	printf("\n Enter Size of Array :");
	scanf("%d",&n);
	printf("\n Enter Employee Info : \n");
	for(i=0;i<n;i++)
	{
		printf("\n Employee %d : ",i+1);
		printf("\n Enter Employee Id : ");
		scanf("%d",&e[i].id);
		printf("\n Enter Employee Name : ");
		scanf("%s",&e[i].name);
		printf("\n Enter Employee Salary : ");
		scanf("%f",&e[i].sal);
	}
	
	
	
	printf("\n Employee Details :\n");
	for(i=0;i<n;i++)
	{
		printf("\n Employee %d : ",i+1);
		printf("\n Employee Id : %d",e[i].id);
		printf("\n Employee Name : %s",e[i].name);
		printf("\n Employee salary : %.2f",e[i].sal);
	}
	
	getch();
	
	
}
