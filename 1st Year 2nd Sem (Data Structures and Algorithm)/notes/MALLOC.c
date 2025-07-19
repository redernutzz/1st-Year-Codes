#include<stdlib.h>
#include<stdio.h>
#include<string.h>

typedef struct{
	char title [50];
	char author [50];
	int year_published;
	int pages;
}Book;

void populateBooks (Book *b);

int main ()
{
	int num;
	printf("Enter number of books: ");
	scanf("%d", &num);
	//malloc returns a pointer
	
	Book *b = (Book *)malloc(num*sizeof(Book)); //i asign ang void pointer sa Book pointer 
	//ang num* mag dictate if pila ka books, pwede ask user pila ka number of books

	populateBooks(b); // use malloc if passing pointers, b gigamit because address gipasa
	//to access first book use b+0, next book is b+1 and so on...

	for (i = 0; i<num)
	printf("\nTitle: %s", b->title);
	free(b);
	
}

void populateBooks (Book *b) //*b gigamit kay gareceive ug pointers
{
	printf("Enter the title: ");
	gets(b->title);
//	strcpy (b->title, "Harry Potter");
}
