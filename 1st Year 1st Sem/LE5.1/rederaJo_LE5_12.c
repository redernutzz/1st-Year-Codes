/*=============================================================
 FILENAME   : rederaJo_LE5_12.c
 DESCRIPTION: A program that will ask the correct numeric passcode before the user can continue his task. 
 The user is given only three trials to enter the correct passcode. When the user hit the correct passcode the program will display 
 “ACCESS GRANTED”, otherwise it will display “ACCESS DENIED” after three attempts.

 AUTHOR     : John Isaac A. Redera
 CREATED    : 27 September 2022
 REVISION HISTORY
    DATE            REMARKS
    -------         -------
===============================================================*/
#include<stdio.h>
#include<stdlib.h>

/*=============================================================
 FUNCTION   : main
 DESCRIPTION: Execute the main program.
 ARGUMENTS  : void
 RETURN     : int - exit codes
===============================================================*/
int main(){
	int trialNum = 1, userInput, correctPass=5454;
	do
	{
		printf("\nTrials Used: %d", trialNum);
		printf("\nPlease input your 4-digit password: ");
		scanf("%d", &userInput);
		trialNum++;
		
		if(userInput==correctPass)
		{
			printf("\nACCESS GRANTED");
		}
		else if (trialNum==4)
		{
			printf("\nACCESS DENIED");
		}
	} while (userInput != correctPass && trialNum <= 3);
	
	return 0;
}

