//Program to demonstrate circular linked list
#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	char element;
	struct node *nxt;
}Node;
Node* createNode(char data){
	Node *temp = (Node*)calloc(1, sizeof(Node));
	temp->element = data;
	return temp;
}
Node* addFirst(Node* tail, char data){
	Node* newNode = createNode(data);
	if(!tail) {// checking whether the list is empty
		tail = newNode;
		tail->nxt = tail;
	}
	else{
		newNode->nxt = tail->nxt;
		tail->nxt = newNode;
	}
	return tail;
}
Node* addLast(Node* tail, char data){
	Node* newNode = createNode(data);
	if(!tail) {// checking whether the list is empty
		tail = newNode;
		tail->nxt = tail;
	}
	else{
		newNode->nxt = tail->nxt;
		tail->nxt = newNode;
		tail = newNode;
	}
	return tail;	
}
void printList(Node* tail){
	if (tail)	{ //if list is not empty
		printf("\n[");
		Node* temp;
		for (temp = tail->nxt; temp != tail; temp=temp->nxt)
			printf("'%c',", temp->element);
		printf("'%c']\n", temp->element);
	}
	else{ // otherwise -> list is emtpy
		printf("\n[]\n");
	}
}
Node* deleteFirst(Node* tail){
	if (tail){
		if (tail->nxt==tail){
			free(tail);
			return NULL;
		}
		Node *temp = tail->nxt;
		tail->nxt = temp->nxt;
		free(temp);
	}
	return tail;
}
Node* deleteLast(Node* tail){
	if (tail){
		if (tail->nxt==tail){
			free(tail);
			return NULL;
		}
		Node* temp;
		for(temp = tail->nxt;temp->nxt != tail; temp = temp->nxt);
		Node *t = tail;
		tail = temp;
		temp->nxt = t->nxt;
		free(t);
	}
	return tail;
}

int main(){
	Node* tail = NULL;
	tail = addFirst(tail, 'A');
	tail = addFirst(tail, 'J');
	printList(tail);
	tail = addLast(tail, 'Y');
	printList(tail);
	tail = deleteFirst(tail);
	printList(tail);
	tail = deleteLast(tail);
	printList(tail);
	return 0;
}
