/*=============================================================
 FILENAME   : rederaJo_LE5_21.c
 DESCRIPTION: A program that will ask the user to input the number of rows and 
columns the table should have and display the multiplication table on screen. Use tab 
for the spacing between numbers horizontally.

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

int main (void)
{
	int numCol, numRow, countCol, countRow, prodAns;
	printf("Enter a value for the number of column: ");
	scanf("%d", &numRow);
	printf("Enter a value for the number of rows: ");
	scanf("%d", &numCol);	
	
	for (countCol = 1; countCol <= numCol; countCol++)
	{
		for (countRow = 1; countRow <= numRow; countRow++)
		{
			prodAns = countCol*countRow;
			printf("%d\t", prodAns);
		}
		printf("\n");
	}
	return 0;
}
