/*=============================================================
 FILENAME   : rederaJo_LE4_11.c
 DESCRIPTION: A program that computes the real roots of a quadratic equation. It will prompt the user to enter the constants (a, b, c) and 
 display the roots based on the following rules:
 
 - If both a and b are zero, there is no solution.
 - If a is zero, there is only one root (-c/b).
 - If the discriminate (b2-4ac) is negative, there are no real roots.
 - For all other combinations, there are two roots.

 AUTHOR     : John Isaac A. Redera
 CREATED    : 21 September 2022
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
	int constantA, constantB, constantC;
	float realRoot1, realRoot2, linearEq, disCrim;
	printf("\t   \t                     Quadratic and Linear Equation Calculator");
	printf("\n------------------------------------------------------------------------------------------------------------------------\n");
	printf("Please input the constants A, B, and C below:\n");
	printf("A: ");
	scanf("%d", &constantA);
	printf("B: ");
	scanf("%d", &constantB);
	printf("C: ");
	scanf("%d", &constantC);

	if (constantA == 0 && constantB == 0)
	{
		printf("\n Math Error! There is no solution.");
	}
	else if (constantA == 0)
	{
		linearEq = ((float)-1 * constantC)/constantB;
		printf("\nThe only root of your Linear Equation is: %.2f", linearEq);
	}
	else if (constantA != 0)
	{
		disCrim = (float)(constantB * constantB) - (4 * (constantA * constantC));
	
	if(disCrim<0)
	{
		printf("Math Error! There are no real roots.");
	}
	else
	{
		realRoot1 = ( (-1 * constantB) + (sqrt(disCrim) )) / (2 * constantA);
		realRoot2 = ( (-1 * constantB) - (sqrt(disCrim) )) / (2 * constantA);
		printf("\nThe real roots of your quadratic equation are: %.2f  and  %.2f", realRoot1, realRoot2);
	}
	}
	return 0;
}
