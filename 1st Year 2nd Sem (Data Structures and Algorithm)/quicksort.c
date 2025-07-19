#include <stdio.h>
#include <stdlib.h>

#define MAX 10

struct Node{
	char name [50];
	int idNum;
	
	struct Node *next;
};

struct List{
	int counter;
	struct Node *start, *end;
};


int main ()
{
	int inp;
	struct List *list = makeList();
	
	do
	{
		printf("Please pick an action below:\n");
		printf("[1] APPEND\n");
		printf("[2] PREPEND\n");
		printf("[3] DELETE\n");
		printf("[4] EDIT\n");
		printf("[5] SORT\n");
		printf("[6] SEARCH\n");
		printf("[7] QUIT\n");
		scanf("%d", &inp);
		
		if (inp == 1)
		{
			int add;
			printf("How many students would you like to add?");
			scanf("%d", &add);
			append(list, add);
		}
		
		
		
		
		
	} while (inp != 7);
}

struct List* makeList()
{
	struct List *l = malloc(sizeof(List));
	
	l->counter = 0;
	l->start = NULL;
	l->end = NULL;
	
	return l;
}

struct Node* createNode()
{
	struct Node *newStudent = malloc(sizeof(Node));
	
	printf("\nEnter student's name:");
	gets(newStudent->name);
	
	printf("\nEnter student's ID Number:");
	scanf("%d", &newStudent->idNum);
	
	newStudent->next = NULL;
	
	return newStudent;
}

void append(struct List *list, int add)
{
	struct Node *newNode = createNode();
	
	list->start = newNode;
	list->end = newNode;
	
	
}
