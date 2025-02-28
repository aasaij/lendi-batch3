//Program to demonstrate void*
#include <stdio.h>

int main(){
	//void* --> general purpose pointer
	void* ptr;
	int x = 10;
	char ch = 'A';
	float f = 10.5;
	ptr = &x;
	printf("%d\n", *(int*)ptr);
	ptr = &ch;
		printf("%c\n", *(char*)ptr);
	ptr = &f;
		printf("%f\n", *(float*)ptr);
	return 0;
}