#include <stdio.h>
//Program to demonstrate union
typedef union course{
	short int longTerm;
	int shortTerm;
}course;
int main(){
//	union course  mycourse;
	//initiazling union member when it is declared
	course mycourse = {100, .shortTerm=200};
	printf("%d %d", mycourse.longTerm, mycourse.shortTerm);
	return 0;
}