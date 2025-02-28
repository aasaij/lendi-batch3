//Program to demonstrate pointers
#include <stdio.h>

int main(){
	int x=10, *ptr;
	ptr = &x;
	*++ptr = 200;
	printf("%d %p %d", x, ptr, *ptr);
	
	return 0;
}