/*=============================================================
 FILENAME   : rederaJo_LE5_13.c
 DESCRIPTION: A a program that lets the user choose an operation (power problem solver, factorial problem solver, or finding roots for quadratic 
 equations using quadratic formula) from the menu. The program will always go back to the menu and lets the user choose again an operation until 
 the user would like to quit using the app.

Note: For quadratic problems, it still follow the rules below:
If both a and b are zero, there is no solution
If a is zero, there is only one root (-c/b).
If the discriminate (b2-4ac) is negative, there are no real roots
For all other combinations, there are two roots.

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

int main ()
{	
	int userInput, powerInput, powerRaised, counter, prodPower = 1, facInput, constantA, constantB, constantC;
	float linearEq, disCrim, root1, root2;
	long long facTotal = 1;
	printf("\t                                      Welcome to Problem Solver!");
	do
	{
		printf("\n\nPlease choose an option below\n");
		printf("[1] Power Problem Solver\n");
		printf("[2] Factorial Problem Solver\n");
		printf("[3] Finding Roots of Quadratic Equation Problem Solver\n");
		printf("[4] Exit\n");
		scanf("%d", &userInput);
		
		if (userInput == 1)
		{
			printf("\nEnter the number you want to raise: ");
			scanf("%d", &powerInput);
			printf("To what power would you like to raise this number? ");
			scanf("%d", &powerRaised);
			
			for (counter = 1; counter <= powerRaised; counter++)
			{
				prodPower = prodPower *	powerInput;
			}
			printf("%d raised to %d is equal to = %d", powerInput, powerRaised, prodPower);
		}
		
		if (userInput == 2)
		{
			printf("\nEnter the number you want to get the factorial: ");
			scanf("%d", &facInput);
			for (counter = 1; counter <= facInput; counter++)
			{
				facTotal= facTotal * counter;
			}
			printf("\nAnswer = %lld", facTotal);
			facTotal = 1;		
		}
		
		if (userInput == 3)
		{
			printf("\nPlease input the three constants A, B , and C:\n");
			printf("A: ");
			scanf("%d", &constantA);
			printf("B: ");
			scanf("%d", &constantB);
			printf("C: ");
			scanf("%d", &constantC);
			
			if (constantA == 0 && constantB == 0)
			{
				printf("\nMath error! The equation you entered is neither quadratic nor linear!");
			}	
			else if(constantA == 0)
			{
				linearEq = (float)(-constantC)/(constantB);
				printf("You entered a Linear Equation and the only root is: %.2f", linearEq);
			}
			else
			{
				disCrim = (constantB * constantB) - 4 *(constantA * constantC);
				if (disCrim <0)
				{
					printf("There are no real roots.");
				}
				else
				{
					root1 = ( (-constantB) - (sqrt(disCrim)) ) / (2 * constantA);
					root2 = ( (-constantB) + (sqrt(disCrim)) ) / (2 * constantA);
					printf("\nThe roots of your Quadratic Equation are: %.2f    and    %.2f", root1, root2);
				}
			}
		}
	} while(userInput!= 4);
	printf("Thank you for using our service. Goodbye!");
	return 0;
}
