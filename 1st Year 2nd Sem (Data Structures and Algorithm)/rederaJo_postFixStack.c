#include<stdlib.h>
#include<stdio.h>
#define QUIT 0

typedef struct node{
	
	struct node *next;
	float num;
}Node;

typedef struct {
	Node *top;
	int counter;
}Stack;

Stack *createStack();
Node *createNode(float numInp);
void push (Stack *s, float numInp);
Node *pop (Stack *s);
void display (Stack *s);
float operate (Node *first, Node *second, char op);

int main()
{
	char operationInp;
	int i, input;
	float numInp, result;
	Stack *s = createStack();
	
	do
	{
		//system ("cls");
		printf("\n\nCurrent Elements in the Stack:\n ");
		display(s);
		
		printf("\nPlease choose what would you like to input?\n");
		printf("\n[1] NUMBER");
		printf("\n[2] OPERATION");
		printf("\n[0] QUIT\n");
		printf("\nEnter here: ");
		scanf("%d", &input);
		
		if (input == 1)
		{
			printf("Enter a number: ");
			scanf("%f", &numInp);
			push(s, numInp);
		}
		else if (input == 2)
		{
			do
			{
				printf("\nEnter the symbol of operation chosen (+, -, *, /): ");
				operationInp = getche();	
			}while(operationInp != '+' && operationInp != '-' && operationInp != '*' && operationInp != '/');

			Node *firstPop = pop(s);
			Node *secondPop = pop(s);
			if (firstPop == NULL || secondPop == NULL)
			{
				printf("\n\nNot enough elements in the stack to perform operation. \nPlease make sure there are two or more elements in the stack.\n");
				continue;
			}
			
			result = operate(firstPop, secondPop, operationInp);
			push(s, result);
			
		}
	}while (input != QUIT);

	return 0;
}

Stack *createStack()
{
	Stack *s = (Stack *) malloc(sizeof(Stack));
	s->counter = 0;
	s->top = NULL;
	
	return s;
}

Node *createNode(float numInp)
{
	Node *n = (Node *) malloc(sizeof(Node));
	n->num = numInp;
	n->next = NULL;
	
	return n;
}

void push (Stack *s, float numInp)
{
	Node *n = createNode(numInp);
	n->next = s->top;
	s->top = n;
	(s->counter)++;
}

Node *pop (Stack *s)
{
	if (s->top == NULL)
	{
		return NULL;
	}
	else
	{
		Node *itemToPop = s->top;
		s->top = s->top->next;
		(s->counter)--;
		return itemToPop;
	}
}

void display (Stack *s)
{
	
	Node *n = s->top;
	while(n != NULL)
	{
		printf("\n[%.2f]\n", n->num);
		n = n->next;
	}	
}

float operate (Node *first, Node *second, char op)
{
	float result;
	
	if (op == '+')
	{
		result = (float)first->num + (float)second->num;
		return result;
	}
	else if (op == '-')
	{
		result = (float)first->num - (float)second->num;
		return result;
	}
	else if (op == '*')
	{
		result = (float)first->num * (float)second->num;
		return result;
	}
	else
	{
		result = (float)first->num / (float)second->num;
		return result;
	}
}
