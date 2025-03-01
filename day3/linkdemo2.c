//Program to demonstrate links
//Program to demonstrate linked list
#include <stdio.h>
#include <stdlib.h>
typedef struct node {
	char element;
	struct node *link;
}Node;

Node *createNode(char data){
	Node *temp = (Node *)calloc(1,sizeof(Node));
	temp->element = data;
	return temp;
}

int main(){
	Node *x, *y, *z;
	x=createNode('A');
	y=createNode('B');
	z=createNode('C');
	x->link = y;
	y->link = z;

	return 0;
}