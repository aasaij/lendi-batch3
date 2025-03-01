//Program to demonstrate links
//Program to demonstrate linked list
#include <stdio.h>
#include <stdlib.h>
typedef struct node {
	char element;
	struct node *nxt;
}Node;
Node *createNode(char data){
	Node *temp = (Node *)calloc(1,sizeof(Node));
	temp->element = data;
	return temp;
}
Node* addFirst(Node* list, char data){
	Node* newNode = createNode(data);
	newNode->nxt = list;
	list = newNode;
	return list;
}

void printList(Node *list){
	if (list)	{ // if list is not empty
		Node *temp;
		printf("\n[");
		for (temp =list; temp->nxt; temp = temp->nxt){
			printf("'%c',", temp->element);
		}
		printf("'%c']\n", temp->element);
	}
	else{ // otherwise
		printf("\n[]\n");
	}
}
Node* addLast(Node *list, char data){
	Node *newNode = createNode(data);
	if (list){
		Node *temp;
		for (temp = list; temp->nxt; temp = temp->nxt);
		temp->nxt = newNode;
		return list;
	}
	return newNode;
}
Node* addAtPosition(Node *list, char data, int position){
	if (position == 1 || position == 0)
		return addFirst(list, data);
	//1. oisition should be > 1
	//2. List should not empty
	//3. List should contain minimum of 2 elements
	else if (position > 1 && list && list->nxt){
		Node* newNode = createNode(data);
		Node *temp=list;
		for (int i = 2; i<position && temp; i++, temp=temp->nxt);
		if(temp->nxt){
			newNode->nxt = temp->nxt;
			temp->nxt = newNode;			
		}
	}
	return list;
}
Node* deleteFirst(Node* list){
	if (list){//if list is not empty
		//if list is having more than one node
		if (list->nxt){
			Node *temp = list;
			list = temp->nxt;
			free(temp);
			return list;
		}
		free(list);
	}
	return NULL;
}
int main(){
	Node *root;
	root = createNode('A');
	root->nxt = createNode('B');
	root->nxt->nxt = createNode('C');
	root = addFirst(root, 'J');
	root = addLast(root, 'N');
	root = addAtPosition(root, 'T',3);
	root = addAtPosition(root, 'A', 1);
	root = addAtPosition(root, 'D', 8);
	printList(root);
	root = deleteFirst(root);
	printList(root);
	return 0;
}