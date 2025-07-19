#include <stdio.h>
#include <stdlib.h>
#define MAX 5


typedef struct Node {
	char data;
	int next;
} Nodes;

typedef struct virtualHeap {
	int avail;
	Nodes elem[MAX];
} VirtualHeap;

typedef int LIST;

void initVheap(VirtualHeap *A); 
int allocSpace(VirtualHeap *A);
void deallocSpace(VirtualHeap *A, int index);


void insertSorted(LIST *C,VirtualHeap *A,char elem);
void deleteElem(LIST *C,VirtualHeap *A,char elem);
void display(LIST C,VirtualHeap A);

int main(void) {
	LIST L = -1;
	VirtualHeap V;
	
	initVheap(&V);
	
	insertSorted(&L,&V,'A');
	insertSorted(&L,&V,'B');
	insertSorted(&L,&V,'A');
	insertSorted(&L,&V,'C');
	insertSorted(&L,&V,'A');
	
	
	
	display(L,V);
	deleteElem(&L,&V,'A');
	deleteElem(&L,&V,'C');
	
	display(L,V);
	
	return 0;
}

void initVheap(VirtualHeap *A) {
	A->avail = 0;
	int lastIndx = MAX-1;
	int x;
	for(x=0;x<lastIndx;x++) {
		A->elem[x].next=x+1;
	}
	
	A->elem[x].next=-1;	
}

int allocSpace(VirtualHeap *A) {
	int space = A->avail;
	if(space!=-1) {
		A->avail=A->elem[space].next;
	}
	return space;
}

void deallocSpace(VirtualHeap *A,int index) {
	if(index>=0&&index<MAX) {
		A->elem[index].next = A->avail;
        A->avail = index;
	}
}	
	
void insertSorted(LIST *A, VirtualHeap *VH, char elem) {
    LIST *curr;

    for(curr=A;*curr != -1 && VH->elem[*curr].data < elem;curr = &VH->elem[*curr].next) {}

    int space = allocSpace(VH);

    if (space != -1) {
       
        VH->elem[space].data = elem;
        VH->elem[space].next = *curr;

        *curr = space;
        
        if (*A == -1) {
            *A = space; 
        }
    }
}

void deleteElem(LIST *C,VirtualHeap *A,char elem) {
	LIST *trav,temp;
	
	for(trav=C;*trav!=-1&&A->elem[*trav].data!=elem;trav=&A->elem[*trav].next) {}
	
	if(*trav!=-1) {
		temp = *trav;
		*trav = A->elem[temp].next;
		deallocSpace(A,temp);
	}
}

void display(LIST C,VirtualHeap A) {
	for(;C!=-1;C=A.elem[C].next) {
		printf("%c ",A.elem[C].data);
	}
	printf("\n");
}
