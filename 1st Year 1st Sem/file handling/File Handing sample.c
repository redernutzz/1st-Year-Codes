#include<stdlib.h>
#include<stdio.h>
#include<string.h>

typedef struct {
	char author [50];
	char title [50];
	int year;	
	int pages;
}Book; 

void populate(Book *b);
void display(Book *b);

int main ()
{
	int numBooks, i, displayBooks, userInp;
//	char str[100];
//	Book books[100];
	
	do
	{
		system("cls");
		printf("------------------------\n");
		printf("| [1] ADD BOOKS        |\n");
		printf("| [2] BROWSE DATABASE  |\n");
		printf("| [3] QUIT             |\n");
		printf("------------------------\n");
		printf("Please select an action: ");
		scanf("%d", &userInp);
	} while (userInp != 3);
		
	if (userInp == 1)
	{
		printf("How many books would you like to add? \n");	
		scanf("%d", &booksToAdd);
		for (i = 0; i<booksToAdd; i++)
		{
			
			addBooks(books[i]);
		}
		
	}
	
//	FILE *f;
//	f = fopen("database.txt", "r+"); //w+ writing and reading, r+ reading and writing
//	char token;
//	fgets(str, 100, f);//(where you want to store it, max num of letters i read, from what file sha i read FILE f)
//	// fgets you get a string from file F and store it in str
//	printf("%s", str);
//	token =	strtok(str, ";"); //title
//	
//	//use it before token changes its value
//	strcpy(books[0].title, token); // copy the string inside token to books 0
//	
//	token =	strtok(NULL, ";");//subject
//	strcpy(books[0].author, token);
//	
//	token =	strtok(NULL, ";");//year published 
//	strcpy(books[0].year, atoi(token); //atoi changes string into an integer
//	
//	token =	strtok(NULL, ";");//num of Pages
//	strcpy(books[0].pages, atoi(token);//atoi changes string into an integer
//	printf("%s belongs to %s, published in year %d with %d number of pages", books[0].title, books[0].author, books[0].year, books[0].pages);
//	
//	printf("How many books would you like to register (maximum of 20)? ");
//	scanf("%d", &numBooks);
//	
//	Book *b = (Book *)malloc(numBooks*sizeof(Book));
//	
//	if (numBooks<=20)
//	{
//		for (i = 0; i < numBooks; i++)
//		{
//			populate(b+i);
//		}
//		
//		printf("\nWould you like to display the summary of books you entered? Press 1 if YES and 0 for NO: ");
//		scanf("%d", &displayBooks);
//	
//		if (displayBooks == 1)
//		{
//			system("cls");
//			for (i = 0; i < numBooks; i++)
//			{
//				display(b+i);
//			}
//		}
//		else if (displayBooks == 0)
//		{
//			system("cls");
//			printf("Thank you for using our service");
//		}
//	}
//	
//	else
//	{
//		printf("This program can't handle more than 20 books");
//	}
//	
////	FILE *f;
////	f = fopen("database.txt", "w");
////	for (i=0; i<numBooks;i++)
////	{
////		fprintf(f, "%s;%s;%d\n", (b+i)->nameBook, (b+i)->subjectBook, (b+i)->numPages);
////	}
//	
//	//database.txt
//	//title;author;year;pages //first book
//	//title;author;year;pages //second book
//	
//	fclose(f);
//	free (b);
//	return 0;
//}
//
//void populate(Book *b)
//{
//	fflush(stdin);
//	printf("\nEnter the name of the book: ");
//	gets(b->nameBook);
//	
//	fflush(stdin);
//	printf("\nEnter what subject field the book belongs to (ex. Math, Science, etc.): ");
//	gets(b->subjectBook);
//		
//	printf("\nEnter the number of pages of the book: ");
//	scanf("%d", &b->numPages);	
//	
//	printf("--------------------------------");
//}
//
//void display(Book *b)
//{
//	printf("\n--------------------------------");
//	printf("\nBook Name: %s", b->nameBook);
//	printf("\nBook Subject: %s ", b->subjectBook);
//	printf("\nNumber of Pages: %d", b->numPages);
//}

