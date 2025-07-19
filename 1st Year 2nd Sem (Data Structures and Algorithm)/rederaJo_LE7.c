#include<stdlib.h>
#include<stdio.h>

struct Node{
	char name[50];
	int idnum;
	char program[50];
	
	struct Node *prev;	
	struct Node *next;
};

void prepend(struct Node **start);
void append(struct Node **start);
void displayDormers(struct Node **start);
void insert(struct Node **start, int insertInp);
void removeDormer(struct Node **start, int removeInp);
void edit(struct Node **start, int editInp);
void displayReverse(struct Node **start);

int main()
{
	int userInp, insertInp, removeInp, editInp;
	struct Node *start;
	start = NULL;
	
	do
	{
		printf("\t\t\t\t\t\tWelcome to the USC Dormitory!\n");
		printf("\t\t\t\t   Please select a feature you would like to try below:\n");
		printf("\t\t\t\t\t\t  ----------------\n");
		printf("\t\t\t\t\t\t  | [1] PREPEND  |\n");
		printf("\t\t\t\t\t\t  | [2] APPEND   |\n");
		printf("\t\t\t\t\t\t  | [3] DISPLAY  |\n");
		printf("\t\t\t\t\t\t  | [4] INSERT   |\n");
		printf("\t\t\t\t\t\t  | [5] REMOVE   |\n");
		printf("\t\t\t\t\t\t  | [6] EDIT     |\n");
		printf("\t\t\t\t\t\t  | [7] REVERSE  |\n");
		printf("\t\t\t\t\t\t  | [8] QUIT     |\n");
		printf("\t\t\t\t\t\t  ---------------- = ");
		scanf("%d", &userInp); 
		
		if (userInp == 1)
		{
			prepend(&start);
		}
		
		else if (userInp == 2)
		{
			append(&start);
		}
		
		else if (userInp == 3)
		{
			displayDormers(&start);
		}
		
		else if (userInp == 4)
		{
		printf("\nSpecify what position would you like to insert this new dormer below: ");
		scanf("%d", &insertInp);

			insert(&start, insertInp);
		}
		
		else if (userInp == 5)
		{
			printf("Specify which Dormer would you like to remove (Enter Dormer Number): ");
			scanf("%d", &removeInp);
			
			removeDormer(&start, removeInp);	
		}
		
		else if (userInp == 6)
		{
			printf("Specify which Dormer would you like to edit the details (Enter Dormer Number): ");
			scanf("%d", &editInp);
			
			edit(&start, editInp);				
		}
		else if (userInp == 7)
		{
			displayReverse(&start);
		}	
	//	system ("cls");
	} while (userInp != 8);
	
	system("cls");
	printf("\n\t\t\t\t\tThank you for using our services!!\n\n");
	return 0;
}

void *createDormer()
{
	struct Node *newNode= malloc(sizeof(struct Node));

	fflush(stdin);
	printf("\nInput the name of the dormer: ");
	gets(newNode->name);
	
	printf("Input the ID Number of the dormer: ");
	scanf("%d", &(newNode->idnum));
	
	fflush(stdin);
	printf("Input the program of the dormer: ");
	gets(newNode->program);	
	
	(newNode->prev) = NULL;
	(newNode->next) = NULL;
}

void prepend(struct Node **start)
{
	struct Node *newNode = createDormer();
	
	if(*start == NULL)
	{
		*start = newNode;
		system("cls");
		return;
	}
	else
	{
		struct Node *tempNode = *start; 
		tempNode->prev = newNode;
		newNode->next = tempNode; 
		*start = newNode;
		
	}

	system("cls");
}

void append(struct Node **start)
{
	
	struct Node *newNode = createDormer();
	
	if(*start == NULL) 
	{
		*start = newNode;
		system("cls");
		return;
	}

	struct Node *tempNode = *start;
	struct Node *tempNode1 = *start;
		
	while(tempNode->next != NULL)
	{
		tempNode = tempNode->next;
		tempNode->prev = tempNode1;
		tempNode1 = tempNode;
	}
		
	tempNode->next = newNode;
	newNode->prev = tempNode1;
	
	system("cls");
}

void insert(struct Node **start, int insertInp) //can't insert sa last node :((
{
	struct Node *newNode = createDormer();
	
	if(*start == NULL) 
	{
		*start = newNode;
		system("cls");
		return;
	}
	
	if(insertInp == 1) 
	{
		struct Node *tempNode = *start;
		tempNode->prev = newNode;
		newNode->next = tempNode;
		*start = newNode;
		system("cls");
		return;
	}
	
    struct Node *checker = *start;
    int i = 0;
    while (i < (insertInp - 1) && checker != NULL)
    {
        checker = checker->next;	
        i++;
	}

    if (checker == NULL || insertInp == 0)
    {
    	system("cls");
        printf("\n\n    That position is not yet created. Thus, you cannot insert anything there. Please try again in another position.\n\n");
        return;
    }
	
	struct Node *tempNode = *start;
	struct Node *tempNode1 = newNode;
	
	for (i = 0; i < insertInp-2; i++)
	{
		tempNode = tempNode->next;
	}
    
	tempNode1->next = tempNode->next;
	(tempNode->next)->prev = tempNode1;
	tempNode->next = tempNode1;
	tempNode1->prev = tempNode;
	
	system("cls");
}

void displayDormers(struct Node **start)
{
	
	if(*start == NULL)
	{
		system("cls");
		printf("\n\t\t\t\t\tYou haven't registered any Dormer yet.\n\n");
	}
	
	
	struct Node *newestNode = *start;
	while(newestNode != NULL)
	{
		printf("\nDormer Name: %s\n", newestNode->name);
		printf("Dormer ID No.: %d\n", newestNode->idnum);
		printf("Dormer Program: %s\n", newestNode->program);
		newestNode = newestNode->next;
	}		
}


void removeDormer(struct Node **start, int removeInp)
{
	struct Node *tempNode = *start;
	
	if(*start == NULL)
	{
		system("cls");
		printf("\n\t\t\t   I'm sorry, but it turns out you haven't registered any Dormer yet.\n\n");
		return;
	}
	else if (removeInp == 1)
	{
		*start = tempNode->next;
		free(tempNode);
		return;
	}
	
    struct Node *checker = *start;
    int i = 0;
    while (i < (removeInp - 1) && checker != NULL)
    {
        checker = checker->next;	
        i++;
	}

    if (checker == NULL || removeInp == 0)
    {
    	system("cls");
        printf("\n\n    There is nothing there. Thus, you cannot delete anything there. Please try again in another position.\n\n");
        return;
    }	
    
	for (i = 0; i < removeInp-2 ; i++)
	{
		tempNode = tempNode ->next;
	}
	
	struct Node *tempNode1 = tempNode->next;
	tempNode->next = tempNode1->next;
	(tempNode1->next)->prev = tempNode;
		
	free(tempNode1);
	return;
}

void edit(struct Node **start, int editInp)
{
	struct Node *tempNode = *start;

	if(*start == NULL)
	{
		system("cls");
		printf("\n\t\t\t   I'm sorry, but it turns out you haven't registered any Dormer yet.\n\n");
		return;
	}
		
	else if (editInp == 1)
	{
		struct Node *newNode= malloc(sizeof(struct Node));

		fflush(stdin);
		printf("\nInput the new name of the dormer: ");
		gets(newNode->name);
	
		printf("Input the new ID Number of the dormer: ");
		scanf("%d", &(newNode->idnum));
	
		fflush(stdin);
		printf("Input the new program of the dormer: ");
		gets(newNode->program);	
		
		(newNode->prev) = NULL;
		(newNode->next) = NULL;
		
		newNode->next = tempNode->next;
		(tempNode->next)->prev = newNode;
		*start = newNode;
		
		free(tempNode);
		return;
	}
	
    struct Node *checker = *start;
    int i = 0;
    while (i < (editInp - 1) && checker != NULL)
    {
        checker = checker->next;	
        i++;
	}

    if (checker == NULL|| editInp == 0)
    {
    	system("cls");
        printf("\n\n    That position is not yet created. Thus, you cannot edit anything there. Please try again in another position.\n\n");
        return;
    }	
	
	struct Node *newNode= malloc(sizeof(struct Node));

	fflush(stdin);
	printf("\nInput the new name of the dormer: ");
	gets(newNode->name);
	
	printf("Input the new ID Number of the dormer: ");
	scanf("%d", &(newNode->idnum));
	
	fflush(stdin);
	printf("Input the new program of the dormer: ");
	gets(newNode->program);	
	
	for (i = 0; i < editInp-2 ; i++)
	{
		tempNode = tempNode->next;
	}
		
	struct Node *tempNode1 = (tempNode->next);
	tempNode->next = newNode;
	newNode->prev = tempNode;
	
	free(tempNode1);
		
}

void displayReverse(struct Node **start)
{
	if(*start == NULL)
	{
		system("cls");
		printf("\n\t\t\t\t\tYou haven't registered any Dormer yet.\n\n");
		return;
	}
	
	struct Node *newestNode = *start;
	while(newestNode->next != NULL)
	{
		newestNode = newestNode->next;	
	}	
	while(newestNode != NULL)
	{
		printf("\nDormer Name: %s\n", newestNode->name);
		printf("Dormer ID No.: %d\n", newestNode->idnum);
		printf("Dormer Program: %s\n", newestNode->program);
		newestNode = newestNode->prev;
	}	
}
