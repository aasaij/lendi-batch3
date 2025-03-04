//program to print the following pattern
//1				5
//	2		4	
//		3		
#include<stdio.h>
int main(){
	int n, i,j;
	scanf("%d", &n);
	for(i =1, j = n; i<j; i++, j--)
//		printf("%*d%*d\n", i,i,j-i, j);
		printf("%*c%*c\n", i,i+64,j-i, j+64);
//	printf("%*d\n",i ,i);		
	printf("%*c\n",i ,i+64);		

		
	return 0;
}