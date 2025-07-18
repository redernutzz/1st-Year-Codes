/*FILENAME   : rederaJo_LE8_11.c
 DESCRIPTION:  Days of the Week. Write a function that sets up an array called days, which contains pointers to the names of the days of the week and return the name of the day from the given day. 
 The function accepts the given day.

 AUTHOR     : John Isaac A. Redera
 			  
 CREATED    : 03 December 2022
 REVISION HISTORY
    DATE            REMARKS
    -------         -------
===============================================================*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* checkDay (int userInp);

/*=============================================================
 FUNCTION   : main
 DESCRIPTION: Execute the main program.
 ARGUMENTS  : void
 RETURN     : int - exit codes
===============================================================*/

int main ()
{
	int userInp;
	char *day;
	printf("Enter day: ");
	scanf("%d", &userInp);
	day = checkDay(userInp);
	printf("Day of the week: %s", day);
	return 0;
}

/*=============================================================
 FUNCTION   : checkDay
 DESCRIPTION: Checks which day did the user inputted.
 ARGUMENTS  : *(days +(userInp - 1)) or "INVALID INPUT!"
 RETURN     : char* - exit codes
===============================================================*/


char* checkDay (int userInp)
{
	int i;
	char *days [7] = {{"Monday"}, {"Tuesday"}, {"Wednesday"}, {"Thursday"}, {"Friday"},{"Saturday"}, {"Sunday"}} ;
	if (0 < userInp && userInp <= 7)
	{
		return *(days + (userInp - 1)); 
	}
	return "INVALID INPUT!";
}
