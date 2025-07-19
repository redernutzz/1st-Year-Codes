#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node {
	struct node *next;
	char elem;
} Queue;

bool isFull(Queue A);
bool isEmpty(Queue A);

void enqueue(Queue *A,char elem);
void dequeue(Queue *A);
void initialize(Queue *A);


int main(void) {
	
	return 0;
}

void initialize(Queue *A) {
	A=NULL;
}

bool isFull(Queue A) {
	return false;
}

bool isEmpty(Queue A) {
	bool check = false;
	if(A.next==NULL) {
		check = true;
	}
	return check;
}

void enqueue(Queue *A,char elem) {
	
}

void dequeue(Queue *A) {
	
}

