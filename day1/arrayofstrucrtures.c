//Program to demonstrate array of structures
#include <stdio.h>
typedef struct employee{
	int id;
	char name[30];
	double salary;
}Employee;
void printLine(int size){
	for (int i = 1; i<=size; i++)
		printf("*");
	printf("\n");
}
int main(){
	//Array of structures
	Employee emps[5];
	for (int i = 0; i<5; i++){
		scanf("%d %s %lf", 
			&emps[i].id, emps[i].name,&emps[i].salary);
	}
	printLine(52);
	printf("EmployeeID Employee Name%17s Salary\n","");
	printLine(52);
	for (int i = 0; i<5; i++)
		printf("%10d %30s %10.2lf\n", emps[i].id,
				emps[i].name, emps[i].salary);
	printLine(52);
	return 0;
}
/*
Output
*********************************
EmployeeID Employee Name Salary
*********************************
101         Venu          1000000.00
102         Lokesh        2000000.00
*********************************
*/