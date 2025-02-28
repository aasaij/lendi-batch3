#include <stdio.h>
//Program to demonstrate union
union course{
	short int longTerm;
	int shortTerm;
};
int main(){
	union course  mycourse;
	mycourse.longTerm = 100;
	mycourse.shortTerm = 200;
	printf("%d %d", mycourse.longTerm, mycourse.shortTerm);
	return 0;
}