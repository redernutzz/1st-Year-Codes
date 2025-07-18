/*FILENAME   : rederaJo_LE7_12.c
 DESCRIPTION: A  program that asks for a string and determines how many vowels and consonants.

 AUTHOR     : John Isaac A. Redera
 			  
 CREATED    : 16 November 2022
 REVISION HISTORY
    DATE            REMARKS
    -------         -------
===============================================================*/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int checkVowel (char usInp);

/*=============================================================
 FUNCTION   : main
 DESCRIPTION: Execute the main program.
 ARGUMENTS  : void
 RETURN     : int - exit codes
===============================================================*/

int main()
{
	int i, isLetter, numV, countV = 0, countC = 0;
	char usInp [100];
	printf ("Enter a string of characters: ");
	gets(usInp);	
	
	for (i = 0; usInp[i] != '\0'; i++)
	{
		isLetter = isalpha(usInp[i]);
		if (isLetter)
		{
			numV = checkVowel(usInp[i]);
			if (numV == 1)
			{
				countV++;
			}
			else
			{
				countC++;
			}
		}		
	}

	printf("No. of Vowels: %d\n", countV);
	printf("No. of Consonants: %d", countC);
	return 0;
}

/*=============================================================
 FUNCTION   : checkVowel
 DESCRIPTION: Checks if the character inputted is a vowel.
 ARGUMENTS  : 1 or 0
 RETURN     : int - exit codes
===============================================================*/

int checkVowel (char usInp)
{
	if (usInp == 'A' || usInp == 'a' || usInp == 'E' || usInp == 'e' || usInp == 'I' || usInp == 'i' || usInp == 'O' || usInp == 'o' || usInp == 'U' || usInp  == 'u')
	{
		return 1;
	}	
	return 0;
}


