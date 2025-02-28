#include <stdio.h>
#include <math.h>
int main(){
//	printf("%d", 123); //decimal integer
//	printf("%d", 0123); //Octal integer
//	printf("%d", 019); //Octal integer - error
//	printf("%hi", 0x10); // hexa decimal integer
//	printf("%d", 0b=1010); // binary integer
//	printf("%f", 10/4.0);
//	printf("%f", 10.5 % 2);// error
	printf("%f", fmod(10.5, 2));
//	signed decimal integer
	return 0;
}