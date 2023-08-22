#include<stdio.h>
#include<string.h>
struct Employee
{
	int id;
	char name[10];
	float sal;
};
void main()
{
	struct Employee emp;
	emp.id=101;
	strcpy(emp.name,"Ram");
	emp.sal=78000;
	
	printf("\n Employee Id : %d",emp.id);
	printf("\n Employee Name : %s",emp.name);
	printf("\n Employee salry : %.2f",emp.sal);
	
	getch();
}
