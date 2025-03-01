//Program to print string pattern
#include <stdio.h>
int main(){
//	char str[] = "Mohan";
	char str[100];
	int len;
	scanf("%s%n", str, &len);
	for (int i = len; i>=1; i-- )	
		printf("%-*.*s%*.*s\n", len, i, str, len, i, str);
	for (int i = 1; i<=len; i++ )	
		printf("%-*.*s%*.*s\n", len, i, str, len, i, str);

//	printf("%*.*s\n", 5, 4, str);

//	printf("%*.*s\n", 5, 3, str);
//	printf("%*.*s\n", 5, 2, str);
//	printf("%*.*s\n", 5, 1, str);
	return 0;
}