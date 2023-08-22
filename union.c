#include<stdio.h>
#include<string.h>
union Employee
{
	int id;
	char name[10];
	float sal;
};
void main()
{
	union Employee emp;
	
	//printf("\n Size of Union : %d",sizeof(emp));
	 emp.id=101;
	 printf("\n Employee Id : %d",emp.id);
	 strcpy(emp.name,"Ram");
	 printf("\n Employee Name : %s",emp.name);
	 emp.sal=78900;
	 printf("\n Employee salary : %.2f",emp.sal);
	
	
	
	
	getch();
}
