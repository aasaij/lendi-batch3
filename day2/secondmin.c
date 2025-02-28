//Program to find second least element in the list of elements
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main(){
	int size, min, smin;
	int *arr;
	scanf("%d", &size);  // 5
	arr = (int *)malloc(size * sizeof(int));
	//Getting list of elements from the user
	for (int i = 0; i<size; scanf("%d", arr+i++));
	min=smin = INT_MAX; // 2147483647
	//algorithm to find second shortest element in the list
	for (int i = 0; i<size; i++){
		if (arr[i]<min){
			smin = min;
			min = arr[i];
		}
		else if (arr[i]<smin && arr[i]!=min){
			smin = arr[i];
		}
	}
	if (smin != INT_MAX)
		printf("Second Min : %d", smin);
	else
		printf("N/A");
	return 0;
}
/*
malloc() --> syntax
	void* malloc(size_t numBytes);
*/