 /*FILENAME   : rederaJo_bagualRo_LE6_12.c
 DESCRIPTION: A program that determines whether the letter entered by the user is vowel or consonant.

 AUTHOR     : John Isaac A. Redera
 			  Roger Al Miguel B. Bagual
 			  
 CREATED    : 10 November 2022
 REVISION HISTORY
    DATE            REMARKS
    -------         -------
===============================================================*/
#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>

/*=============================================================
 FUNCTION   : main
 DESCRIPTION: Execute the main program.
 ARGUMENTS  : void
 RETURN     : int - exit codes
===============================================================*/

bool isLetter (char ch);
bool isVowel (char ch);

int main ()
{
	char ch;
	bool vowel, letter;
	printf("Enter a letter: ");
	scanf(" %c", &ch);
	letter = isLetter(ch);
	if (letter)
	{
		vowel = isVowel (ch);
		if (vowel)
		{
			printf(" VOWEL!");
		}
		else
		{
			printf(" CONSONANT!");
		}
	}
	else
		printf(" INVALID INPUT!");
	return 0;
}

/*=============================================================
 FUNCTION   : isLetter
 DESCRIPTION: Checks if the user input is a letter.
 ARGUMENTS  : truth
 RETURN     : bool - exit codes
===============================================================*/


bool isLetter (char ch)
{
	int truth;
	if ( 'a' <= ch && ch <= 'z' || 'A' <= ch && ch <= 'Z' )
	{
		truth = 1;
	}
	else
		truth = 0;
	return truth;
}

/*=============================================================
 FUNCTION   : isVowel
 DESCRIPTION: Checks if the user input is a vowel.
 ARGUMENTS  : truth
 RETURN     : bool - exit codes
===============================================================*/

bool isVowel (char ch)
{
	int truth;
	if ( ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u')
	{
		truth = 1;
	}
	else
		truth = 0;
	return truth;
}



