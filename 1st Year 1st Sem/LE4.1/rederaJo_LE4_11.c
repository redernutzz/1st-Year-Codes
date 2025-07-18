 /*DESCRIPTION: A program that determines whether the letter entered by the user is vowel or consonant.
 AUTHOR     : John Isaac A. Redera
 CREATED    : 21 September 2022
 REVISION HISTORY
    DATE            REMARKS
    -------         -------
===============================================================*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

/*=============================================================
 FUNCTION   : main
 DESCRIPTION: Execute the main program.
 ARGUMENTS  : void
 RETURN     : int - exit codes
===============================================================*/
int main(){
    int input;
    printf("Enter a letter: ");
    input = getche();
	
	if (65 <= input && input <= 90 || 97 <= input && input <= 122)
	{
		if (input == 'A' || input == 'a'|| input == 'E' || input == 'e'||input == 'I' || input == 'i'||input == 'O' || input == 'o'||input == 'U' || input == 'u')
		{
			printf("     VOWEL!");
		}
		else
		{
			printf("     CONSONANT!");
		}
	}
	else 
	{
		printf("     INVALID INPUT!");
	}
   
    return 0;
}
