/*
============================================================================
 FILE        : rederaJo_LE3_13.c
 AUTHOR      : John Isaac A. Redera
 DESCRIPTION : A program that prints the tuition for 2 semesters at ABC College. ABC charges PHP 450 for registration,
 plus PHP 450 per unit and a penalty of PHP 2,260 for each 12 units or fraction OF 12.
 COPYRIGHT   : 08 September 2022
 REVISION HISTORY
 Date:               By:             Description:
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
int main()
{
    const int regFee = 450, unitFee = 450;
    int firstUnits, secondUnits;
    float firstSem, secondSem, penaltyFee, totalFee;


    printf("\t                            Welcome to ABC College's Tuition Computing System\n \n");
    printf("Please fill in the number of units taken below: \n");
    printf("1st Semester Number of Units: ");
    scanf("%d", &firstUnits);
    printf("2nd Semester Number of Units: ");
    scanf("%d", &secondUnits);

    penaltyFee= (float)2260/12;

    firstSem =  (regFee) + (firstUnits * unitFee) + (firstUnits * penaltyFee);
    secondSem = (regFee) + (secondUnits * unitFee) + (secondUnits * penaltyFee);
    totalFee = firstSem + secondSem;

    printf("\nComputing Tuition Fee:\n");
    printf("1st Semester Tuition Fee: %.2f\n", firstSem);
    printf("2nd Semester Tuition Fee: %.2f\n", secondSem);
    printf("Total Tuition Fee: %.2f\n", totalFee);

    return 0;
}
