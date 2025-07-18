/*FILENAME   : rederaJo_LE7_13.c
 DESCRIPTION: A  program that asks for 5 strings and displays the longest string.

 AUTHOR     : John Isaac A. Redera
 			  
 CREATED    : 18 November 2022
 REVISION HISTORY
    DATE            REMARKS
    -------         -------
===============================================================*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int checkLongest (int strL[]);

/*=============================================================
 FUNCTION   : main
 DESCRIPTION: Execute the main program.
 ARGUMENTS  : void
 RETURN     : int - exit codes
===============================================================*/

int main()
{
	int i, strL[5], flag, z;
	char userStr[5] [100], longest;
	printf("Please input 5 string of characters: \n");
	for(i = 0; i < 5; i++)
	{
		printf("%d.) ", i+1);
		gets(userStr[i]);			
	}
	
	for (i = 0; i < 5; i++)
	{
		strL[i] = strlen(userStr[i]);
	}
	
	z = checkLongest (strL);
	printf("\nThe longest string/s is/are: ");
	for (i = 0; i < 5; i++)
	{
		if (z == strL [i])
		{
			printf("\n%s", userStr[i]);
		}
	}	
	
	return 0;
}

/*=============================================================
 FUNCTION   : checkLongest
 DESCRIPTION: Checks what is the length of the longest string.
 ARGUMENTS  : longest
 RETURN     : int - exit codes
===============================================================*/

int checkLongest (int strL[])
{
	int i, longest = 0 ;
	for (i = 0; i < 5; i++)
	{
		if (strL[i] > longest)
		{
			longest = strL[i];
		}		
	}
	return longest;
}


