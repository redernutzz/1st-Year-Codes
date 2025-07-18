/*
============================================================================
 FILE        : rederaJo_LE3.12.c
 AUTHOR      : John Isaac A. Redera
 DESCRIPTION : A program that extracts and adds the two least significant digits of an integer.
 COPYRIGHT   : 07 September 2022
 REVISION HISTORY
 Date:                By:             Description:
 revision date        author          description of the change
 revision date        author          description of the change
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

int main ()
{
    int userNum, firstLeast, secondLeast, numSum;
    printf("Enter a number : ");
    scanf("%d", &userNum);

    firstLeast = ((userNum % 100) / 10);
    secondLeast = ((userNum % 100) % 10);
    numSum = firstLeast + secondLeast;

    printf("Sum            : %d + %d = %d", firstLeast, secondLeast, numSum);
    return 0;
}
