#include<stdio.h>
typedef struct Employee
{
	int id;
	char name[10];
	float sal;
}stud;
//stud e1;
void main()
{
	stud e1;
	printf("\n Enter Employee Id : ");
	scanf("%d",&e1.id);
	printf("\n Enter Employee Name : ");
	scanf("%s",&e1.name);
	printf("\n Enter Employee Salary : ");
	scanf("%f",&e1.sal);
	
	
	printf("\n Employee Details :\n");
	printf("\n Employee Id : %d",e1.id);
	printf("\n Employee Name : %s",e1.name);
	printf("\n Employee salary : %.2f",e1.sal);
	
	getch();
	
	
}
