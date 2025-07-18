/*=============================================================
 FILENAME   : rederaJo_LE5_23.c
 DESCRIPTION: A program that prints a pyramid of numbers.

 AUTHOR     : John Isaac A. Redera
 CREATED    : 06 October 2022
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
	int rowInp, counter1, colNum, mirrorNum, mirrorAns, colSpace;
	printf("Enter a value for N: ");
	scanf("%d", &rowInp);
	
	for (counter1 = 1; counter1 <= rowInp; counter1++)
	{
		for (colSpace = 0; colSpace <= (rowInp - counter1); colSpace++)
		{
			printf("  ");
		} 
		for (colNum = 1; colNum <= counter1; colNum++)
		{
			printf(" %d", colNum);
		}
		for (mirrorNum = 1; mirrorNum <= counter1; mirrorNum++)
		{
			mirrorAns = counter1 - mirrorNum;
			if (mirrorAns == 0)
			{
				continue;
			}
			printf(" %d", mirrorAns);
		}
		printf("\n");
	}
	return 0;
}
