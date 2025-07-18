/*FILENAME   : rederaJo_LE8_12.c
 DESCRIPTION:   Search Element. Write a function to search an element in array using pointers and return the index location. 
 The function accepts the starting address of the array, number of entries and number to search.

 AUTHOR     : John Isaac A. Redera
 			  
 CREATED    : 03 December 2022
 REVISION HISTORY
    DATE            REMARKS
    -------         -------
===============================================================*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int searchElement (int *, int, int);

/*=============================================================
 FUNCTION   : main
 DESCRIPTION: Execute the main program.
 ARGUMENTS  : void
 RETURN     : int - exit codes
===============================================================*/

int main ()
{
	int numEntries, i, searchData, index;
	printf ("Enter number of entries: ");
	scanf ("%d", &numEntries);
	
	int userInp [numEntries];
	for (i = 0; i < numEntries; i++)
	{
		printf("Enter number: ");
		scanf("%d", &userInp[i]);
	}
	
	printf("\nSearch data: ");
	scanf("%d", &searchData);
	index = searchElement(userInp, numEntries, searchData); 
	
	if(index != -1)
	{
	printf("FOUND in Index: %d", index);
	}
	else
	{
		printf("NOT FOUND!");
	}	
	return 0;
}

/*=============================================================
 FUNCTION   : searchElement
 DESCRIPTION: Identifies which index is the number being searched is stored.
 ARGUMENTS  : index or -1
 RETURN     : int - exit codes
===============================================================*/

int searchElement (int *userInp, int numEntries, int searchData) 
{
	int i, index = 0, present = 0;
	for (i = 0; i < numEntries; i++)
	{
	   if(searchData == userInp[i])
	   {
	     i = numEntries;
	     present = 1;
	     index--;
	   }
    	index++;
	}
	if (present == 1)
	{
		return index;
	}
	return -1;
}
