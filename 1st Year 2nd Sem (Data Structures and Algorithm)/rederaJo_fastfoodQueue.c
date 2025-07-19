#include<stdlib.h>
#include<stdio.h>
#define SIOMAI 8
#define PROBEN 20
#define PUSO 10

typedef struct node {
	int siomaiOrder;
	int probenOrder;
	int pusoOrder;
	int money;
	
	struct node *next;
}Node;

typedef struct {
	Node *front;
	Node *rear;
	int counter;
}Queue;

Queue *createQueue();
Node *createNode();
void enqueue(Queue *q, Node *n);
Node *dequeue(Queue *q);
void displayQueue();
void entertainOrder(Node *order);
float computeOrder(Node *order, int total);
void peekFront(Queue *q);
void peekLast(Queue *q);

int main ()
{
	int userInp;
	Queue *q = createQueue();
	
	do
	{
		printf("\t\t\t\t      Welcome to Redernutzz Fastfood Proben and Siomai!\n");
		printf("\t\t\t\t    Please select a feature you would like to try below:\n");
		printf("\t\t\t\t\t\t  ----------------------\n");
		printf("\t\t\t\t\t\t  | [1] ENQUEUE        |\n");
		printf("\t\t\t\t\t\t  | [2] DEQUEUE        |\n");
		printf("\t\t\t\t\t\t  | [3] QUEUE FRONT    |\n");
		printf("\t\t\t\t\t\t  | [4] QUEUE REAR     |\n");
		printf("\t\t\t\t\t\t  | [5] DONE ORDERING  |\n");
		printf("\t\t\t\t\t\t  ---------------------- ");
		printf("\n\t\t\t\t\t\t  Enter Choice Here: ");
		scanf("%d", &userInp); 
		
		if (userInp == 1)
		{
			Node *n = createNode();
			enqueue(q, n);
		}
		
		else if (userInp == 2)
		{
			Node *orderToDequeue = dequeue(q);
			if (orderToDequeue != NULL) 
			{
    		  entertainOrder(orderToDequeue);
   			}

		}
		else if (userInp == 3)
		{
			peekFront(q);
		}
		else if (userInp == 4)
		{
			peekLast(q);
		}
	} while (userInp != 5);
	
}

Queue *createQueue()
{
	Queue *q = (Queue *) malloc(sizeof(Queue));
	q->counter = 0;
	q->front = NULL;
	q->rear = NULL;
	
	return q;
}

Node *createNode()
{
	int siomaiOrder, probenOrder, pusoOrder, moneyOfCustomer;
	Node *n = (Node *) malloc(sizeof(Node));

	printf("\nHow many Proben would you like to order? [PHP 20 EACH]\n");
	printf("Enter here: ");
	scanf("%d", &probenOrder);
	n->probenOrder = probenOrder;	
	
	printf("\nHow many Siomai would you like to order? [PHP 8 EACH]\n");
	printf("Enter here: ");
	scanf("%d", &siomaiOrder);
	n->siomaiOrder = siomaiOrder;

	printf("\nHow many Puso would you like to order? [PHP 10 EACH]\n");
	printf("Enter here: ");
	scanf("%d", &pusoOrder);
	n->pusoOrder = pusoOrder;
	
	printf("\nHow much is your money?\n");
	printf("Enter here: ");
	scanf("%d", &moneyOfCustomer);
	n->money = moneyOfCustomer;
	
	n->next = NULL;
	
	return n;
}

void enqueue(Queue *q, Node *n)
{
	if (q->front == NULL && q->rear == NULL)
	{
		q->front = n;
		q->rear = n;
	}
	q->rear->next = n;
	q->rear = n;
	
	(q->counter)++;
}

Node *dequeue(Queue *q)
{
	if (q->front == NULL && q->rear == NULL) {
  	  	printf("\n\t\t\t\t\t      Empty queue. Please add orders\n\n");
    	return NULL;
	}

	Node *temp = q->front;
	q->front = q->front->next;
	temp->next = NULL;
	
	if (q->front == NULL)
	{
		q->rear = NULL;
	}

	return temp;		
}

void entertainOrder(Node *order)
{
	int siomai = (order->siomaiOrder) * SIOMAI;
	int proben = (order->probenOrder) * PROBEN;
	int puso = (order->pusoOrder) * PUSO;
	int total = siomai + proben + puso;
	
	while ((order->money) < total)
	{
		float lacking = (order->money - total) * (-1);
		printf("\n\n\t\t\t\t\t\t You are lacking PHP %.2f", lacking);		
		
		int addMoney;
		printf("\n\t\t\t\t\tPlease add money here: ");
		scanf("%d", &addMoney);
		order->money = order->money + addMoney;
	}
	
	float change = computeOrder(order, total);
	

	
	printf("\n\t\t\t\t\t\t      ORDER SUMMARY: \n");
	printf("\t\t\t\t\t -----------------------------------\n");
	printf("\t\t\t\t\t  FOOD:      QUANTITY:   TOTAL:   \n");
	printf("\t\t\t\t\t  SIOMAI     %d      	   %d      \n", order->siomaiOrder, siomai);
	printf("\t\t\t\t\t  PROBEN     %d      	   %d      \n", order->probenOrder, proben);
	printf("\t\t\t\t\t  PUSO       %d      	   %d      \n", order->pusoOrder, puso);
	printf("\t\t\t\t\t ------------------------------------\n");	
	printf("\t\t\t\t\t                                  \n");
	printf("\t\t\t\t\t  TOTAL                  %d       \n", total);
	printf("\t\t\t\t\t  MONEY                  %d        \n", order->money);
	printf("\t\t\t\t\t  CHANGE                 %0.2f     \n", change);
	
	
	
	printf("\n\t\t\t\tThank you for ordering. Here's your PHP %0.2f change!\n\n", change);
}

float computeOrder(Node *order, int total)
{
	float change;
	change = (order->money) - total;
	
	return change;
}

void peekFront(Queue *q)
{
	if (q->front == NULL)
	{
		printf("\n\t\t\t\t\t      Empty queue. Please add orders\n\n");
		return NULL;
	}
	
	printf("\n\t\t\t\t\t\t        FIRST ORDER: \n");
	printf("\t\t\t\t\t\t -------------------------\n");
	printf("\t\t\t\t\t\t  FOOD:      QUANTITY:  \n");
	printf("\t\t\t\t\t\t  SIOMAI     %d          \n", q->front->siomaiOrder);
	printf("\t\t\t\t\t\t  PROBEN     %d          \n", q->front->probenOrder);
	printf("\t\t\t\t\t\t  PUSO       %d          \n", q->front->pusoOrder);
	printf("\t\t\t\t\t\t -------------------------\n");
}

void peekLast(Queue *q)
{
	if (q->rear == NULL)
	{
		printf("\n\t\t\t\t\t      Empty queue. Please add orders\n\n");
		return NULL;
	}
	
	printf("\n\t\t\t\t\t\t        LAST ORDER: \n");
	printf("\t\t\t\t\t\t -------------------------\n");
	printf("\t\t\t\t\t\t  FOOD:      QUANTITY:  \n");
	printf("\t\t\t\t\t\t  SIOMAI     %d          \n", q->rear->siomaiOrder);
	printf("\t\t\t\t\t\t  PROBEN     %d          \n", q->rear->probenOrder);
	printf("\t\t\t\t\t\t  PUSO       %d          \n", q->rear->pusoOrder);
	printf("\t\t\t\t\t\t -------------------------\n");
}

