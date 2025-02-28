#include <stdio.h>

int main(){
	int x = 10;
	//Pointer declaration -- integer pointer declaration
	int* ptr; // int *ptr;
	ptr = &x;
	*ptr = 200;
	printf("%d %d %d", x, *ptr, *(&x));
	return 0;
}
