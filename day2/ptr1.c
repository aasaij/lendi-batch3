//Pointers
//*	Indirection or dereferencing or value at operator
//&	Address operator
//-> 	structure pointer member accessing operator
#include <stdio.h>

int main(){
	int x = 10;
	//Pointer declaration -- integer pointer declaration
	int* ptr; // int *ptr;
//	printf("%d", sizeof(int*));
	printf("%d %p %d", x, &x, *(&x));
	return 0;
}
