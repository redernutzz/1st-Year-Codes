#include<stdlib.h>
#include<stdio.h>

typedef struct node{
	
	struct node *next;
	char symbol;
}Node;

typedef struct {
	Node *top;
	int counter;
}Stack;

Stack *createStack();
Node *createNode(char symbol);
void push (Stack *s, char symbol);
Node *pop (Stack *s);
void display (Node *n);

int main()
{
	char line [1000];
	int i;
	Stack *s = createStack();
	FILE *f = fopen ("MALLOC.c", "r");
	
	while(fgets(line, 1000, f) != NULL)
	{
		for (i = 0; i < 1000; i++)
		{
			if(line [i] == '(')
			{
				push(s, line[i]);
			}
			else if (line[i] == ')')
			{
				pop(s);
				Node *poppedItem = pop(s);
				if (poppedItem == NULL)
				{
					printf("Missing parenthesis on this line:\n %s", line);
					return 1;
				}
			}
		}
	}
	
	if (s->counter == 0)
	{
		printf("\nSuccess.");
	}
	else
	{
		printf("\nMismatched Symbols.");
	}
	
	fclose(f);
//	display(s->top);
//	printf("\ncount: %d", s->counter);

	return 0;
}

Stack *createStack()
{
	Stack *s = (Stack *) malloc(sizeof(Stack));
	s->counter = 0;
	s->top = NULL;
	
	return s;
}

Node *createNode(char symbol)
{
	Node *n = (Node *) malloc(sizeof(Node));
	n->symbol = symbol;
	n->next = NULL;
	
	return n;
}

void push (Stack *s, char symbol)
{
	Node *n = createNode(symbol);
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

//void display (Node *n)
//{
//	if (n == NULL)
//	{
//		return;
//	}
//	else
//	{
//		printf("%c", )
//	}
//}
