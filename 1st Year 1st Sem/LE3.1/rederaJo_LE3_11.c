/*
============================================================================
 FILENAME   : rederaJo_LE3.11.c
 AUTHOR     : John Isaac A. Redera
 DESCRIPTION: A program that asks for the user's yearly pay and displays his weekly pay.
 COPYRIGHT   : 07 September 2022
 REVISION HISTORY
 Date:                By:             Description:
 revision date        author         description of the change
 revision date        author         description of the change
 .
 .
 .
 revision date        author         description of the change
============================================================================
/

/
============================================================================
 FUNCTION    : main
 DESCRIPTION : It is the function that is responsible for both running and terminating the program.
 ARGUMENTS   : (list all parameters pass in the function)
                dataType variableName - brief description
                dataType variableName - brief description
                .
                .
                .
                dataType variableName - brief description
 RETURNS     : (no return)     void
                (with return)dataType - brief description
===========================================================================
*/
#include<stdio.h>
#include<stdlib.h>

#define WIY 52.1429

int main ()
{
    float annualPay, weeklyPay;
    printf("Please input your annual pay in Php: ");
    scanf("%f", &annualPay);

    weeklyPay= annualPay/WIY;

    printf("Your weekly pay is: %.2f Php", weeklyPay);
    return 0;
}
