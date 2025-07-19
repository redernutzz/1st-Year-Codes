#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	struct node *link;
	char data;
} *LIST;

void initialize(LIST *A);
void insertSorted(LIST *A,char elem);
void deleteElem(LIST *A,char elem);
void display(LIST A);
void deleteAll(LIST *A,char elem);

int main(void) {
	LIST L;
	
	initialize(&L);
	
	insertSorted(&L,'A');
	insertSorted(&L,'C');
	insertSorted(&L,'B');
	insertSorted(&L,'A');
	
	display(L);
	
	deleteAll(&L,'A');
	
	display(L);
	
	return 0;
}

void initialize(LIST *A) {
	*A=NULL;
}

void insertSorted(LIST *A, VirtualHeap *VH, char elem) {
    LIST *curr;

    for(curr=A;*curr != -1 && VH->elem[*curr].data < elem;curr = &VH->elem[*curr].next;) {}

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

void deleteElem(LIST *A,char elem) {
	LIST *trav;
	
	for(trav=A;*trav!=NULL && (*trav)->data!=elem;trav=&(*trav)->link) {}
	
	if(*trav!=NULL) {
		LIST temp = *trav;
		*trav = (*trav)->link;
		free(temp);
	}
}

void display(LIST A) {
	LIST trav;
	for(trav=A;trav!=NULL;trav=trav->link) {
		printf("%c ",trav->data);
	}
	printf("\n");
}

void deleteAll(LIST *A,char elem) {
	LIST *trav;
	
	for(trav=A;*trav!=NULL;) {
		if((*trav)->data == elem) {
			LIST temp = *trav;
			*trav = (*trav)->link;
			free(temp);
		}
		else {
			trav=&(*trav)->link;
		}
	}
	
}


