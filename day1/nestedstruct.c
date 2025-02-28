#include <stdio.h>
#include <string.h>
//structure definition
//method 1
struct date {
	int dd, mm, yy;
};

typedef struct student{
	int rollno; // 4
	char name[30]; // 30
	double cgpa; // 8
	struct date doj; // structure within structure
}stu;
//typedef struct student{
//	int rollno; // 4
//	char name[30]; // 30
//	double cgpa; // 8
//	// structure within structure
//	struct {
//		int dd, mm, yy;
//	}doj;
//}stu;

//typedef struct student stu;
int main(){
	//structure variable declaration
//	printf("%d", sizeof(stu));
//	return 0;
	stu s1,s2,s3;
	s1.rollno = 101;
	strcpy(s1.name, "Manohar");
	s1.cgpa = 20.0;
	s1.doj.dd = 10;
	s1.doj.mm = 10;
	s1.doj.yy = 2022;
	printf("Roll Number  : %d\n", s1.rollno);
	printf("Student name : %s\n", s1.name);
	printf("CGPA         : %.2lf\n", s1.cgpa);
	printf("Date of Joining : %d/%d/%d\n", s1.doj.dd,s1.doj.mm,s1.doj.yy);
	return 0;
}

