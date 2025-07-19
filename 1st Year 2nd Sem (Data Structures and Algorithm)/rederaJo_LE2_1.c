#include<stdlib.h>
#include<stdio.h>

typedef struct {
	char nameBook [50];
	char subjectBook [50];
	int numPages;	
}BOOK; 

BOOK askData (BOOK b);
void displayData (BOOK b);

int main ()
{
	BOOK books[20];
	int numBooks, i, displayBooks;
	printf("How many books would you like to register (maximum of 20)? ");
	scanf("%d", &numBooks);
	if (numBooks<=20)
	{
		for (i = 0; i < numBooks; i++)
		{
			books [i] = askData (books[i]);
		}
		printf("\n--------------------------------------------\n");
		printf("\nWould you like to display the summary of books you entered? Press 1 if YES and 0 for NO: ");
		scanf("%d", &displayBooks);
	
		if (displayBooks == 1)
		{
			system("cls");
			
			for (i = 0; i < numBooks; i++)
			{
				displayData (books [i]);
			}
		
		}
		else if (displayBooks == 0)
		{
			system("cls");
			printf("Thank you for using our service");
		}
	}
	
	else
	{
		printf("This program can't handle more than 20 books");
	}
	
	return 0;
}

BOOK askData (BOOK b)
{
	fflush(stdin);
	printf("\nEnter the name of the book: ");
	gets(b.nameBook);
	
	fflush(stdin);
	printf("\nEnter what subject field the book belongs to (ex. Math, Science, etc.): ");
	gets(b.subjectBook);
		
	printf("\nEnter the number of pages of the book: ");
	scanf("%d", &b.numPages);	
	
	
	return b;
}

void displayData (BOOK b)
{
	
	printf("\nBook Name: %s", b.nameBook);
		
	printf("\nBook Subject: %s ", b.subjectBook);
		
	printf("\nNumber of Pages: %d", b.numPages);
	printf("\n--------------------------------------------\n");	
}
