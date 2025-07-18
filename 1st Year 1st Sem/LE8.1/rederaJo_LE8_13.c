/*FILENAME   : rederaJo_LE8_13.c
 DESCRIPTION:   Maximum Number. Create a function that determines and returns the maximum number in an array of integers using pointers. 
 The function accepts the starting address of the array and number of entries.

 AUTHOR     : John Isaac A. Redera
 			  
 CREATED    : 03 December 2022
 REVISION HISTORY
    DATE            REMARKS
    -------         -------
===============================================================*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int maxElement (int *, int);

/*=============================================================
 FUNCTION   : main
 DESCRIPTION: Execute the main program.
 ARGUMENTS  : void
 RETURN     : int - exit codes
===============================================================*/

int main ()
{
	int numEntries, i, maxNum;
	printf ("Enter number of entries: ");
	scanf ("%d", &numEntries);
	
	int userInp [numEntries];
	for (i = 0; i < numEntries; i++)
	{
		printf("Enter number: ");
		scanf("%d", &userInp[i]);
	}
	
	maxNum = maxElement(userInp, numEntries); 
	
	printf("\nMaximum Num: %d", maxNum);

	return 0;
}

/*=============================================================
 FUNCTION   : maxElement
 DESCRIPTION: Looks for the maximum number in the array
 ARGUMENTS  : max
 RETURN     : int - exit codes
===============================================================*/

int maxElement (int *userInp, int numEntries) 
{
	int i, max = 0 ;
	for (i = 0; i < numEntries; i++)
	{
		if (*(userInp + i) > max)
		{
			max = *(userInp + i);
		}		
	}
	return max;	
}
