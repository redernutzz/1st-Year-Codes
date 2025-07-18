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
	int numBooks, i, displayBooks;
	char str[100];
	Book books[100];
	
	FILE *f;
	f = fopen("database.txt", "r+"); 
	char token;
	fgets(str, 100, f);//(where you want to store it, max num of letters i read, from what file sha i read FILE f)
	// fgets you get a string from file F and store it in str
	printf("%s", str);
	
	token =	strtok(str, ";"); //title - strtok gets the string before the delimeter ";" and assigns it to token
	
	//use it before token changes its value
	strcpy(books[0].title, token); // token now contains title so transfer it to an array, copy the string inside token to books 0
	
	token =	strtok(NULL, ";");//author - token here changes value to the next string before the second delimeter ";" 
	strcpy(books[0].author, token);
	
	token =	strtok(NULL, ";");//year published 
	books[0].year = atoi(token); //atoi changes string into an integer (use direct assignment not strcpy because it is now an integer)
	
	token =	strtok(NULL, ";");//num of Pages
	books[0].pages= atoi(token);//atoi changes string into an integer
	
	printf("%s belongs to %s, published in year %d with %d number of pages", books[0].title, books[0].author, books[0].year, books[0].pages);
	
	printf("How many books would you like to register (maximum of 20)? ");
	scanf("%d", &numBooks);
	
	Book *b = (Book *)malloc(numBooks*sizeof(Book));
	
	if (numBooks<=20)
	{
		for (i = 0; i < numBooks; i++)
		{
			populate(b+i);
		}
		
		printf("\nWould you like to display the summary of books you entered? Press 1 if YES and 0 for NO: ");
		scanf("%d", &displayBooks);
	
		if (displayBooks == 1)
		{
			system("cls");
			for (i = 0; i < numBooks; i++)
			{
				display(b+i);
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
	
//	FILE *f;
//	f = fopen("database.txt", "w");
//	for (i=0; i<numBooks;i++)
//	{
//		fprintf(f, "%s;%s;%d\n", (b+i)->nameBook, (b+i)->subjectBook, (b+i)->numPages);
//	}
	
	//database.txt
	//title;author;year;pages //first book
	//title;author;year;pages //second book
	
	fclose(f);
	free (b);
	return 0;
}

void populate(Book *b)
{
	fflush(stdin);
	printf("\nEnter the title of the book: ");
	gets(b->title);
	
	fflush(stdin);
	printf("\nEnter the author of the book? ");
	gets(b->author);
	
	printf("\nWhat year was the book published?  ");
	scanf("%d", &b->year);	
	
	printf("\nEnter the number of pages of the book: ");
	scanf("%d", &b->pages);	
	
	printf("--------------------------------");
}

void display(Book *b)
{
	printf("\n--------------------------------");
	printf("\nBook Title: %s", b->title);
	printf("\nAuthor: %s", b->author);
	printf("\nYear Published: %d ", b->year);
	printf("\nNumber of Pages: %d", b->pages);
}

