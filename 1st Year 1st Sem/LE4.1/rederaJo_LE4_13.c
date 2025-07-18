/*=============================================================
 FILENAME   : rederaJo_LE4_11.c
 DESCRIPTION: A program that determines a student’s final grade and indicate whether it is passing or failing. 
 The final grade is calculated as the average of four marks (between 0 and 100). Passing grade of 50.
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
	int firstMark, secondMark, thirdMark, fourthMark;
	float finalGrade;
	printf("\t                                     FINAL GRADE CALCULATOR\n \n");
	printf("Please input your respective grades below:\n");
	printf("First Mark : ");
	scanf("%d", &firstMark);
	printf("Second Mark : ");
	scanf("%d", &secondMark);
	printf("Third Mark : ");
	scanf("%d", &thirdMark);
	printf("Fourth Mark : ");
	scanf("%d", &fourthMark);
	
	if(0 <= firstMark && 0 <= secondMark && 0 <= thirdMark && 0 <= fourthMark)
	{
		if ( firstMark <= 100 && secondMark  <= 100 && thirdMark <= 100 && fourthMark  <= 100)
		{
			finalGrade = (float)(firstMark + secondMark + thirdMark + fourthMark) / 4;
			if (50<=finalGrade)
			{
				printf("\nFINAL GRADE: %.2f       REMARKS: PASSED!", finalGrade);
			}
			else if (finalGrade<50)
			{
				printf("\nFINAL GRADE: %.2f       REMARKS: FAILED!", finalGrade);
			}
		}
		else 
		{
			printf("\nINVALID INPUT!");	
		}	
	}
	else 
	{
		printf("\nINVALID INPUT!");	
	}
	
		
	return 0;
}
