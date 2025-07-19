#include<stdlib.h>
#include<stdio.h>
#include<string.h>

typedef struct {
	char nameBook [50];
	char subjectBook [50];
	int numPages;	
}Book; 

void populate(Book *b);
void addBooks (Book *b, int numBooks);
void display(Book *b);

int main ()
{
	int numBooks, i=0, displayBooks, userInp;
	char str[100];
	char *token;
	
	FILE *f;
	f = fopen("database.txt", "a+"); 
	printf("\nCurrent Books in the Library:\n");
        
   	while (fgets(str, 100, f) != NULL) //
	{
		printf("\nBook Number: %d", i+1);
			
		token = strtok(str, ";");
		printf("\nTitle: %s\n", token);
	
		token =	strtok(NULL, ";");
		printf("Subject Field: %s\n", token);

		token =	strtok(NULL, ";");
		token = atoi(token);
		printf("No. of Pages: %d\n", token);	
		
		i++;
	}	

	do
	{
		printf("\nHello and Welcome to Isaac's Library!\n");
		printf("Please select a feature you would like to try below:\n");
		printf("-------------------------------------------------------------\n");
		printf("| [1] ADD BOOKS TO THE LIBRARY                              |\n");
		printf("| [2] QUIT THE PROGRAM/SAVE THE ADDED BOOKS TO THE LIBRARY  |\n");
		printf("------------------------------------------------------------- = ");
		scanf("%d", &userInp); //ask what action
		
		if (userInp == 1)	
		{
			system("cls");
			printf("\nHow many books would you like to add to the library (maximum of 20)? ");
			scanf("%d", &numBooks);
		
			Book *b = (Book *)malloc(numBooks*sizeof(Book));
	
			if (numBooks<=20)
			{
				for (i = 0; i < numBooks; i++)
				{
					populate(b+i);		//populatio
				}
		
				addBooks(b, numBooks);
			
				printf("\nWould you like to display the books you added to the library? Press 1 if YES and 0 for NO: ");
				scanf("%d", &displayBooks);
	
				if (displayBooks == 1)
				{
					system("cls");
					printf("BOOKS ADDED TO LIBRARY:");
					for (i = 0; i < numBooks; i++)
					{
						display(b+i);
					}
				}	
				else if (displayBooks == 0)
				{
					system("cls");
					printf("Thank you for using our service\n");					
				}
				else
				{
					printf("This program can't add more than 20 books\n");
				}					
			}
			free(b);	
		}
		else if (userInp == 2)
		{
			system("cls");
			printf("Thank you for using our service!\n");	
			printf("\nIf you added new books, run the program again to view the updated list of books in the Library!\n");	
		}
		else
		{
			system ("cls");
			printf("You entered an invalid action\n");
		}
	} while(userInp!= 2);	
	
	fclose(f);	
	return 0;
}

void populate(Book *b)
{
	fflush(stdin);
	printf("\nEnter the name of the book: ");
	gets(b->nameBook);
	
	fflush(stdin);
	printf("\nEnter what subject field the book belongs to (ex. Math, Science, etc.): ");
	gets(b->subjectBook);
		
	printf("\nEnter the number of pages of the book: ");
	scanf("%d", &b->numPages);	
	
	printf("--------------------------------");
}

void addBooks(Book *b, int numBooks)
{
	int i = 0;
	FILE *f;
	f = fopen ("database.txt", "a+");
	while (i < numBooks)
	{
		fprintf(f, "%s;%s;%d\n", (b+i)->nameBook, (b+i)->subjectBook, (b+i)->numPages);
		i++;
	}
}

void display(Book *b)
{
	printf("\n--------------------------------");
	printf("\nBook Name: %s", b->nameBook);
	printf("\nBook Subject: %s ", b->subjectBook);
	printf("\nNumber of Pages: %d\n", b->numPages);
}

