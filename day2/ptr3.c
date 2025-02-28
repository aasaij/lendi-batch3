//Program to demonstrate pointers
#include <stdio.h>

int main(){
	int x=10, *ptr;
	ptr = &x;
	*ptr++ = 200;
	printf("%d %p %d %p", x, ptr, *ptr, &x);
	
	return 0;
}