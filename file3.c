#include<stdio.h>
void main()
{
	int id;
	char name[10];
	float sal;
	FILE *fp;
	fp=fopen("Employee.txt","w");
	printf("\n Enter Employee Id : ");
	scanf("%d",&id);
	fprintf(fp,"\nId=%d",id);
	printf("\n Enter Employee Name : ");
	scanf("%s",&name);
	fprintf(fp,"\nName=%s",name);
	printf("\n Enter Employee Salary : ");
	scanf("%f",&sal);
	fprintf(fp,"\nSalary=%.2f",sal);
	getch();
}
