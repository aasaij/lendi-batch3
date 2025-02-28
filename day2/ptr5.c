//Program to demonstrate pointers
#include <stdio.h>

int main(){
	char ch = 'A';
	int *ptr = &ch;
	printf("%c %c", ch, *ptr);
	return 0;
}