 /*FILENAME   : rederaJo_bagualRo_LE6_11.c
 DESCRIPTION: A program that extracts and adds the two least significant digits of an integer.

 AUTHOR     : John Isaac A. Redera
 			  Roger Al Miguel B. Bagual
 			  
 CREATED    : 10 November 2022
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

int extractFirstLSD (int num);
int extractSecondLSD (int num);
int sumDigits (int x, int y);
int newValue (int num);

int main ()
{
	int num, x, y, sum;
	printf("Enter a number: ");
	scanf("%d", &num);
	x = extractFirstLSD (num);
	num = newValue (num);
	y = extractSecondLSD (num);
	sum = sumDigits(x, y);
	printf("Sum\t      : %d + %d = %d", x, y, sum);
	return 0;
}

/*=============================================================
 FUNCTION   : extractFirstLSD
 DESCRIPTION: Extracts the first least significant digit.
 ARGUMENTS  : firstLSD
 RETURN     : int - exit codes
===============================================================*/

int extractFirstLSD (int num)
{
	int firstLSD;
	firstLSD = num%10;
	return firstLSD;
}

/*=============================================================
 FUNCTION   : newValue
 DESCRIPTION: Gets the new value after getting the first LSD.
 ARGUMENTS  : num
 RETURN     : int - exit codes
===============================================================*/

int newValue (int num)
{
	num = num/10;
	return num;
}

/*=============================================================
 FUNCTION   : extractSecondLSD
 DESCRIPTION: Extracts the second least significant digit.
 ARGUMENTS  : secondLSD
 RETURN     : int - exit codes
===============================================================*/

int extractSecondLSD (int num)
{
	int secondLSD;
	secondLSD = num%10;
	return secondLSD;
}

/*=============================================================
 FUNCTION   : sumDigits
 DESCRIPTION: Computes the sum of the two LSDs.
 ARGUMENTS  : sum
 RETURN     : int - exit codes
===============================================================*/

int sumDigits (int x, int y)
{
	int sum;
	sum = x + y;
	return sum;
}

