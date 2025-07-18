#include <stdio.h>
#include <stdlib.h>
#include "vending.c"
#include "dispenser.c"
#include "cashregister.c"

int main ()
{
    stock[0]=100;
    stock[1]=100;
    stock[2]=100;
    stock[3]=100;
    
	do
	{
		//call showSelection ()
		showSelection (&choice);

		printf ("Please enter item number\n");
		scanf ("%d", &choice);

		//call sellProduct ()
		sellProduct (&choice);
	}
	while (choice != 5);
}

