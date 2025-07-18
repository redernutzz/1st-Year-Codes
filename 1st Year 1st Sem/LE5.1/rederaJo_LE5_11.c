 /*
 FILENAME   : rederaJo_LE5_11.c
 DESCRIPTION: A program that will ask 10 integers and display the average of all even numbers and the product of all odd numbers entered by the user.
 AUTHOR     : John Isaac A. Redera
 CREATED    : 26 September 2022
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
	int prodOdd = 1, sumEven = 0, userInt, countEven=0, countOdd=0, numInt;
	float aveEven;
	
	for (numInt = 1; numInt <=10; numInt++)
	{
		printf("%d.) Enter an integer: ", numInt);
		scanf("%d", &userInt);
		if (userInt % 2 == 0)
		{
			sumEven = sumEven + userInt;
			countEven++;
		}
		else
		{
			prodOdd = prodOdd * userInt;
			countOdd++;
		}
	}
	if (countOdd<1)
	{
		prodOdd = prodOdd * 0;
	}
	if (countEven<1)
	{
		aveEven = aveEven * 0;
	}
	else
	{
	aveEven=(float) sumEven / countEven;		
	}
	printf("Average of Even Integers: %.2f", aveEven);
	printf("\nProduct of Odd Integers: %d", prodOdd);
	
	return 0;
}
