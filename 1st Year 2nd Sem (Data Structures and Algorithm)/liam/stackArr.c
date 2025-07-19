#include <stdio.h>
#include <stdbool.h>

#define MAX 5

typedef struct {
	int top;
	int data[MAX];
} STACK; 

void initialize(STACK *A);

void push(STACK *A,char elem);
void pop(STACK *A);
char top(STACK A);
bool isFull(STACK A);
bool isEmpty(STACK A);

int main(void) {
	STACK S;
	initialize(&S);
	
	char elem;
	
	push(&S,'A');	
	elem = top(S);
	printf("%c ",elem);
	
	push(&S,'B');	
	pop(&S);
	elem = top(S);
	printf("%c ",elem);
	
	push(&S,'C');	
	elem = top(S);
	printf("%c ",elem);
	
	push(&S,'D');	
	elem = top(S);
	printf("%c ",elem);
	
	S.top=-1;
	if(isEmpty(S)) {
		printf("IS EMPTY ");
	}
	
	S.top = MAX-1;
	if(isFull(S)) {
		printf("IS FULL");
	}
	
	
	return 0;
}

void initialize(STACK *A) {
	A->top = -1;
}

void push(STACK *A,char elem) {
	A->data[++A->top] = elem;
}

void pop(STACK *A) {
	A->top--;
}

char top(STACK A) {
	if(!isEmpty(A)) {
		return A.data[A.top];
	}
}

bool isFull(STACK A) {
	bool check = false;
	if(A.top == MAX-1) {
		check = true;
	}
	return check;
}

bool isEmpty(STACK A) {
	bool check = false;
	if(A.top == -1) {
		check = true;
	}
	return check;
}



