#include<stdlib.h>
#include<stdio.h>
#include<string.h>

typedef struct {
	char nameBook [50];
	char subjectBook [50];
	int numPages;	
}Book; 

Book askData (Book b);
void displayData (Book b);

int main ()
{
	Book books[20];
	int numBooks, i, displayBooks;
	char str[100];
	char token;
	
	FILE *f;
	f = fopen("database.txt", "r+"); 
   	fgets(str, 100, f);
    printf("Existing file in the database: %s", str);

	token =	strtok(str, ";"); //title - strtok gets the string before the delimeter ";" and assigns it to token
	
	//use it before token changes its value
	strcpy(books[0].nameBook, token); // token now contains title so transfer it to an array, copy the string inside token to books 0
	
	token =	strtok(NULL, ";");//subject - token here changes value to the next string before the second delimeter ";" 
	strcpy(books[0].subjectBook, token);
	
	token =	strtok(NULL, ";");//number of pages
	books[0].numPages = atoi(token); //atoi changes string into an integer (use direct assignment not strcpy because it is now an integer)
	
	printf("%s belongs to the field of %s, with %d number of pages", books[0].nameBook, books[0].subjectBook, books[0].numPages);
	
	
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

Book askData (Book b)
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

void displayData (Book b)
{
	
	printf("\nBook Name: %s", b.nameBook);
		
	printf("\nBook Subject: %s ", b.subjectBook);
		
	printf("\nNumber of Pages: %d", b.numPages);
	printf("\n--------------------------------------------\n");	
}
