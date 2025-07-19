#include <stdio.h>
#include <stdbool.h>

#define MAX 10

typedef struct {
	int front;
	int rear;
	char data[MAX];
} Queue;

void initialize(Queue *A);
bool isFull(Queue A);
bool isEmpty(Queue A);

void enqueue(Queue *A,char elem);
void dequeue(Queue *A);
char front(Queue A);

int main(void) {	

	Queue L;
	initialize(&L);

	enqueue(&L,'A');
	char frontElem = front(L);
	printf("%c ",frontElem,L.data[L.front]);
	
	dequeue(&L);
	enqueue(&L,'B');
	frontElem = front(L);
	printf("%c ",frontElem);
	
	dequeue(&L);
	enqueue(&L,'C');
	frontElem = front(L);
	printf("%c ",frontElem);
	enqueue(&L,'C');
	enqueue(&L,'C');
	enqueue(&L,'C');
	enqueue(&L,'C');
	enqueue(&L,'C');
	enqueue(&L,'C');
	enqueue(&L,'C');
	enqueue(&L,'C');
	
	if(isFull(L)) {
		printf("%d %d",L.front,L.rear);
	}
	
	return 0;
}

void initialize(Queue *A) {
	A->front=0;
	A->rear=MAX-1;
}


bool isFull(Queue A) {
	bool check = false;
	if(A.front == (A.rear+2)%MAX) {
		check = true;
	}
	return check;
}

bool isEmpty(Queue A) {
	bool check = false;
	if(A.front == (A.rear+1)%MAX) {
		check = true;
	}
	return check;
}

void enqueue(Queue *A,char elem) {
	if(!isFull(*A)) {
		A->rear = (A->rear + 1) % MAX;
		A->data[A->rear] = elem;
	}
}

void dequeue(Queue *A) {
	if(!isEmpty(*A)) {
		A->front = (A->front+1) % MAX;
	}
}

char front(Queue A) {
	if(!isEmpty(A)) {
		return A.data[A.front];
	}
}
