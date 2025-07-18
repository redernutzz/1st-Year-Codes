/*FILENAME   : rederaJo_LE7_11.c
 DESCRIPTION: A  program that allows a user to enter 10 numbers, then display all of the numbers, the largest number, and the smallest.

 AUTHOR     : John Isaac A. Redera
 			  
 CREATED    : 16 November 2022
 REVISION HISTORY
    DATE            REMARKS
    -------         -------
===============================================================*/

#include<stdio.h>
#include<stdlib.h>

int checkLarge (int usInp[]);
int checkSmall (int usInp[], int large);

/*=============================================================
 FUNCTION   : main
 DESCRIPTION: Execute the main program.
 ARGUMENTS  : void
 RETURN     : int - exit codes
===============================================================*/

int main()
{
	int i, large, small, usInp [10];
	for (i = 0; i < 10; i++)
	{
		printf ("Enter ten numbers [%d]: ", i+1);
		scanf ("%d", &usInp[i]);	
	}
	
	large = checkLarge(usInp);
	small = checkSmall(usInp, large);
	
	printf("\nThe numbers inputted are: \n" );
	for (i = 0; i < 10; i++)
	{
		printf(" %d \n", usInp[i]);
	}
	printf("\n\nThe Largert Number in the series is: %d\n\n", large);
	printf("The Smallest Number in the series is: %d", small);
	return 0;
}

/*=============================================================
 FUNCTION   : checkLarge
 DESCRIPTION: Checks which value is the largest.
 ARGUMENTS  : largest
 RETURN     : int - exit codes
===============================================================*/
int checkLarge (int usInp[])
{
	int i, largest = 0; 
	for (i = 0; i < 10; i++)
	{
		if (usInp[i] > largest)
		{
			largest = usInp[i];
		}	
	}
	return largest;
}

/*=============================================================
 FUNCTION   : checkSmall
 DESCRIPTION: Checks which value is the smallest.
 ARGUMENTS  : smallest
 RETURN     : int - exit codes
===============================================================*/

int checkSmall (int usInp[], int large)
{
	int i, smallest = large; 
	for (i = 0; i < 10; i++)
	{
		if (usInp[i] < smallest)
		{
			smallest = usInp[i];
		}	
	}
	return smallest;
}
