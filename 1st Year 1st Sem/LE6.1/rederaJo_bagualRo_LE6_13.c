/*FILENAME   : rederaJo_bagualRo_LE6_13.c
 DESCRIPTION: A a program that lets the user choose an operation (power problem solver, factorial problem solver, or finding roots for quadratic 
 equations using quadratic formula) from the menu. The program will always go back to the menu and lets the user choose again an operation until 
 the user would like to quit using the app.

 Note: For quadratic problems, it still follow the rules below:
 If both a and b are zero, there is no solution
 If a is zero, there is only one root (-c/b).
 If the discriminate (b2-4ac) is negative, there are no real roots
 For all other combinations, there are two roots.
 
 AUTHOR     : John Isaac A. Redera
 			  Roger Al Miguel B. Bagual
 			  
 CREATED    : 11 November 2022
 REVISION HISTORY
    DATE            REMARKS
    -------         -------
===============================================================*/
#include<stdio.h>
#include<stdlib.h>

void displayMenu ();
int powerSolver(int base, int p);
int factorialSolver (int num);
int linearSolver (int b, int c);
int quadraticSolver (int a, int b, int c);
float discrimSolver (int a, int b, int c);

/*=============================================================
 FUNCTION   : main
 DESCRIPTION: Execute the main program.
 ARGUMENTS  : void
 RETURN     : int - exit codes
===============================================================*/

int main()
{
	printf("\t                                      Welcome to Problem Solver!");
	int userInput, base, p, prodPower, num, counter, a, b, c;
	long long facTotal;
	
	do
	{
		displayMenu();
		scanf("%d", &userInput);
		
		if (userInput == 1)
		{
			printf("\nEnter the number you want to raise: ");
			scanf("%d", &base);
			printf("To what power would you like to raise this number? ");
			scanf("%d", &p);
			
			prodPower = powerSolver (base, p);
			printf("\n%d raised to %d is equal to = %d", base, p, prodPower);
		}
		
		if (userInput == 2)
		{
			printf("\nEnter the number you want to get the factorial: ");
			scanf("%d", &num);
			facTotal = factorialSolver (num);
			printf("\nAnswer = %lld", facTotal);		
		}
		
		if (userInput == 3)
		{
			printf("\nPlease input the three constants A, B , and C:\n");
			printf("A: ");
			scanf("%d", &a);
			printf("B: ");
			scanf("%d", &b);
			printf("C: ");
			scanf("%d", &c);
			if (a == 0 && b == 0)
			{
				printf("\nMath error! The equation you entered is neither quadratic nor linear!");
			}	
			else if (a == 0)
			{
				linearSolver (b, c);	
			}
			else
				quadraticSolver (a, b, c);
		}
	} while(userInput != 4);
	system ("cls");
	printf("\nThank you for using our service. Goodbye!\n");
	
	
	return 0;
}

/*=============================================================
 FUNCTION   : displayMenu
 DESCRIPTION: Displays the choices for the Problem Solver Menu.
 ARGUMENTS  : void
 RETURN     : void - exit codes
===============================================================*/

void displayMenu()
{
	printf("\n\nPlease choose an option below\n");
	printf("[1] Power Problem Solver\n");
	printf("[2] Factorial Problem Solver\n");
	printf("[3] Finding Roots of Quadratic Equation Problem Solver\n");
	printf("[4] Exit\n");
	return;
}

/*=============================================================
 FUNCTION   : powerSolver
 DESCRIPTION: Computes the answer for problems involving raising a number to a power.
 ARGUMENTS  : prodPower
 RETURN     : int - exit codes
===============================================================*/

int powerSolver(int base, int p)
{
	int counter, prodPower = 1;
	for (counter = 1; counter <= p; counter++)
	{
		prodPower = prodPower *	base;
	}
	return prodPower;
}

/*=============================================================
 FUNCTION   : factorialSolver
 DESCRIPTION: Computes the answer for problems involving factorial.
 ARGUMENTS  : facTotal
 RETURN     : int - exit codes
===============================================================*/

int factorialSolver (int num)
{
	int counter, facTotal = 1;
	for (counter = 1; counter <= num; counter++)
	{
		facTotal = facTotal * counter;
	}
	return facTotal;
}

/*=============================================================
 FUNCTION   : linearSolver
 DESCRIPTION: Computes and displays the answer for problems involving Linear Equations (a == 0).
 ARGUMENTS  : void
 RETURN     : int - exit codes
===============================================================*/

int linearSolver (int b, int c)
{
	float linearEq;
	linearEq = (float)(-c)/(b);
	printf("You entered a Linear Equation and the only root is: %.2f", linearEq);
	return;
}

/*=============================================================
 FUNCTION   : quadraticSolver
 DESCRIPTION: Solves and displays the answer for problems involving Quadratic Equations.
 ARGUMENTS  : void
 RETURN     : int - exit codes
===============================================================*/

int quadraticSolver (int a, int b, int c)
{
	float disCrim, root1, root2;
	disCrim = discrimSolver(a, b, c);
	if (disCrim <0)
	{
		printf("There are no real roots.");
	}
	else
	{
		root1 = ( (-b) - (sqrt(disCrim)) ) / (2 * a);
		root2 = ( (-b) + (sqrt(disCrim)) ) / (2 * a);
		printf("\nThe roots of your Quadratic Equation are: %.2f    and    %.2f", root1, root2);
	}
	return;
}

/*=============================================================
 FUNCTION   : discrimSolver
 DESCRIPTION: Solves the value of the discriminant.
 ARGUMENTS  : disCrim
 RETURN     : float - exit codes
===============================================================*/

float discrimSolver (int a, int b, int c)
{
	float disCrim;
	disCrim = (b * b) - 4 *(a * c);
	return disCrim;
}

