/*=============================================================
 FILENAME   : rederaJo_LE5_23.c
 DESCRIPTION: A program that will display the 1-N value of the Fibonacci sequence. 
 Use a space for the spacing between numbers horizontally.

 AUTHOR     : John Isaac A. Redera
 CREATED    : 05 October 2022
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

int main (void){
	int firstTwo = 1, thirdNum = 1, sumFS, userInp, counter1, counter2;
	printf("Enter limit: ");
	scanf("%d", &userInp);
	if (userInp == 1)
	{
		printf("%d", userInp);
	}
	else
	{
		for (counter1 = 2; counter1 <= userInp ; counter1++)//2 because it skips 2 rounds since 1 is displayed twice
		{
			if (counter1 == 2)
			{
				for (counter2 = 1; counter2 <= 2; counter2++) 
				{	
					printf(" %d ", firstTwo); //1 is repeated as the first 2 digits in the sequence
				
				}
			}
			else
			{
				sumFS = firstTwo + thirdNum;
				printf("%d ", sumFS);
				firstTwo = thirdNum; //assigning the second num as the third num
				thirdNum = sumFS; // assigning the third number as the result in the earlier computation
			}
			printf(" ");
		}
	}
	
	return 0;
}
