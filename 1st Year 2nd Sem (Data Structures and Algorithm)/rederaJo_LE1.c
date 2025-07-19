#include<stdlib.h>
#include<stdio.h>


struct book {
	char nameBook [50];
	char subjectBook [50];
	int numPages;
	
};

int main ()
{
//	struct book books[20];
//	int numBooks, i, displayBooks;
//	printf("How many books would you like to register (maximum of 20)? ");
//	scanf("%d", &numBooks);
//	if (numBooks<=20)
//	{
//		for (i = 0; i < numBooks; i++)
//		{
//			fflush(stdin);
//			printf("\nEnter the name of the book: ");
//			gets(books[i].nameBook);
//	
//			fflush(stdin);
//			printf("\nEnter what subject field the book belongs to (ex. Math, Science, etc.): ");
//			gets(books[i].subjectBook);
//		
//			printf("\nEnter the number of pages of the book: ");
//			scanf("%d", &books[i].numPages);
//		
//			printf("\n--------------------------------------------\n");
//		}
//	
//		printf("\nWould you like to display the summary of books you entered? Press 1 if YES and 0 for NO: ");
//		scanf("%d", &displayBooks);
//	
//		if (displayBooks == 1)
//		{
//			system("cls");
//			for (i = 1; i <= numBooks; i++)
//			{
//				printf("\nBook No. %d: ", i);
//		
//				printf("\nBook Name: %s", books[i-1].nameBook);
//		
//				printf("\nBook Subject: %s ", books[i-1].subjectBook);
//		
//				printf("\nNumber of Pages: %d", books[i-1].numPages);
//		
//				printf("\n--------------------------------------------\n");
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


//	int  ***p, **q, *r,a;
//	a = 7;
//	r=&a;
//	q=&r;
//	p=&q;
//	
//
//	printf("Address of a: %d \n",&a);
//	printf("Address pointed by r: %d              Adress of r: %d\n",r, &r);
//	printf("Address pointed by q: %d              Adress of q: %d\n",q, &q);
//	printf("Address pointed by p: %d              Adress of p: %d\n",p, &p);
//	
//	printf("\nValue stored in q1: %d\n",*q);
//	printf("\nValue stored in q2: %d\n",**q);
//	
//	printf("\nValue stored in p1: %d\n",*p);
//	printf("\nValue stored in p2: %d\n",**p);
//	printf("\nValue stored in p3: %d\n",***p);
	
	
	int a =32, b=18, ***p3, **p2, *p1,p,s;
	p3=&p2;
	p2=&p1;
	p1=&b;
	
	a=***p3;
	s=**p2;
	
	printf("\nValue stored in p3: %d\n",***p3);
	printf("\nValue stored in p2: %d\n",**p2);
	printf("\nValue stored in p1: %d\n",*p1);
	printf("\nValue stored in p: %d\n",p);
	
	printf("\nValue stored in a: %d\n",a);
	printf("\nValue stored in a: %d\n",s);
	
	return 0;
}
