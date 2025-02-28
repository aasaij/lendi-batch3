//struct <structure_name>{
//	<datatype1> <variable1>;
//	<datatype2> <variable2>;
//	...
//	...
//	<datatype3> <variableN>;
//};
#include <stdio.h>
#include <string.h>
//structure definition
//method 1
struct student{
	int rollno;
	char name[30];
	double cgpa;
}s1, s2,s3;

int main(){
	s1.rollno = 101;
	strcpy(s1.name, "Manohar");
	s1.cgpa = 20.0;
	printf("Roll Number  : %d\n", s1.rollno);
	printf("Student name : %s\n", s1.name);
	printf("CGPA         : %.2lf\n", s1.cgpa);
	return 0;
}

