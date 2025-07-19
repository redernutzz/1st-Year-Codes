#include<stdlib.h>
#include<stdio.h>

typedef struct node{
	char title [50];
	char author [50];
	struct node *next;
}Node;

typedef struct {
	int counter;
	struct node	*start;
	struct node	*end;
}LinkedList;


Node *createNode ();
LinkedList *createList();
append(LinkedList *l, Node *newNode);

int main ()
{
	int num, i;
	Node *newNode;
	
	LinkedList *list = malloc(sizeof(LinkedList));

	printf("How many books? ");
	scanf("%d", &num);
	fflush(stdin);
	
	
	
	for(i = 0 ; i < num ; i++)
	{
		newNode = createNode(); // you create a node and populate it after calling this function.
		append(list, newNode);	// the new node you created will be passed into this function
	}
	
	display(list); //you display the 
	
	return 0;
}

LinkedList *createList()
{
	LinkedList *list = malloc(sizeof(LinkedList));
	list->counter = 0;
	list->start = NULL;
	list->end = NULL;
}

Node *createNode ()// you populate the books in this function
{
	Node *newNode = malloc(sizeof(Node)); 
	
	printf("Enter title:");
	gets(newNode->title);
	
	printf("Enter author:");
	gets(newNode->author);
	
	newNode->next = NULL; /*By setting newNode->next to NULL, the function is initializing the pointer to the next node to be NULL, 
						    which indicates the end of the linked list.*/
	
	return newNode; //returning an address so function return type is a pointer
}

append(LinkedList *list, Node *newNode)
{
	if(list->counter == 0)
	{
		list->start = newNode; // at the start since 0 pa ang counter imo ipa point imong BOOK sa first new node gimake
		list->end = newNode;	
	}
	else
	{
		Node *tempNode = list->start; // if counter is greater than zero na imo ipa point imong start sa BOOK newest Node na gimake
		
		//at second run, where counter = 1, this loop does not execute as the first node's next is not yet pointing to the second one
		while (tempNode->next != NULL)// if next sa node dli pa null adtoa ang next
		{
			tempNode = tempNode->next; //jumps from start to first node then the next node until one node has next = NULL
		}
		
		tempNode->next = newNode; //this line of code connects the previous node to the new node created, since tempNode is connected to list it also has a next
		//tempNode here also has a title, author, and next since it is pointing at the start of the Node.
		
		list->end = newNode; //this line makes the end of BOOK point at the new node created assigning it as the last node
	}

	//by this time tempNode->next is already NULL so end of list na
	
	(list->counter)++;

}

display (LinkedList *l)
{
	//loop through nodes inside list
	//until nest is NULL
	
	Node *tempNode = l->start;	

	
	while (tempNode->next != NULL)
	{
		tempNode = tempNode->next;
		printf("%s by %s\n", tempNode->title, tempNode->author);
	}
	
}



