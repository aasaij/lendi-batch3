//Program to demonstrate links
#include <stdio.h>
#include <stdlib.h>
typedef struct node {
	char element;
	struct node *link;
}Node;

int main(){
	Node *x, *y, *z;
	x = (Node *)malloc(sizeof(Node));
	y = (Node *)malloc(sizeof(Node));
	z = (Node *)malloc(sizeof(Node));
	x->element = 'A';
	x->link = y;
	y->element = 'B';
	y->link = z;
	z->element = 'C';
	z->link = NULL;
	printf("%c", x->link->link->element);
	return 0;
}