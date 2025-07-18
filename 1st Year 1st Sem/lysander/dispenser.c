#include <stdio.h>
#include <stdlib.h>
#include "dispenser.h"

//gets current stock of each item
void getCandyCount ()
{
	FILE *fcandy;

	fcandy = fopen ("candy.txt", "r");

	printf ("Current Stock:\n");

	while (!feof(fcandy))
	{
		fscanf (fcandy, "%d", &stock[0]);
		printf ("%d", stock[0]);
	}

	fclose (fcandy);
}


void getChipsCount ()
{
	FILE *fchips;

	fchips = fopen ("chips.txt", "r");

	printf ("Current Stock:\n");

	while (!feof(fchips))//if f
	{
		fscanf (fchips, "%d", &stock[1]);
		printf ("%d", stock[1]);
	}

	fclose (fchips);
}

void getCookiesCount ()
{
	FILE *fcookies;

	fcookies = fopen ("cookies.txt", "r");

	printf ("Current Stock:\n");

	while (!feof(fcookies))
	{
		fscanf (fcookies, "%d", &stock[2]);
		printf ("%d", stock[2]);
	}

	fclose (fcookies);
}

void getSodaCount ()
{
	FILE *fsoda;

	fsoda = fopen ("soda.txt", "r");

	printf ("Current Stock:\n");

	while (!feof(fsoda))
	{
		fscanf (fsoda, "%d", &stock[3]);
		printf ("%d", stock[3]);
	}

	fclose (fsoda);
}

//updates the stocks of different items
void updateCandyCount ()
{
	FILE *fcandy;

	fcandy = fopen ("candy.txt", "w");

    newcount1 = stock[0] - amount;

	fprintf (fcandy, "%d", newcount1);

	fclose (fcandy);

	printf ("\n[Previous Stock]: %d", stock[0]);
	printf ("\n\n[Desired Item Amount]: %d", amount);
	printf ("\n\n[Updated Stock]: %d ", newcount1);
}

void updateChipsCount ()
{
	FILE *fchips;

	fchips = fopen ("chips.txt", "w");

    newcount1 = stock[1] - amount;

	fprintf (fchips, "%d", newcount1);

	fclose (fchips);

	printf ("\n[Previous Stock]: %d", stock[1]);
	printf ("\n\n[Desired Item Amount]: %d", amount);
	printf ("\n\n[Updated Stock]: %d", newcount1);
}

void updateCookiesCount ()
{
	FILE *fcookies;

	fcookies = fopen ("cookies.txt", "w");

    newcount1 = stock[2] - amount;

	fprintf (fcookies, "%d", newcount1);

	fclose (fcookies);

	printf ("\n[Previous Stock]: %d",stock[2]);
	printf ("\n\n[Desired Item Amount]: %d",amount);
	printf ("\n\n[Updated Stock]: %d", newcount1);
}

void updateSodaCount ()
{
	FILE *fsoda;

	fsoda = fopen ("soda.txt", "w");

    newcount1 = stock[3] - amount;

	fprintf (fsoda, "%d", newcount1);

	fclose (fsoda);

	printf ("\n[Previous Stock]: %d",stock[3]);
	printf ("\n\n[Desired Item Amount]: %d",amount);
	printf ("\n\n[Updated Stock]: %d", newcount1);
}

//calculates product cost
void getProductCost (int *amount, int *total1, int *total2, int *total3, int *total4)
{
	*total1 = *amount * 15000;
	*total2 = *amount * 35000;
	*total3 = *amount * 20000;
	*total4 = *amount * 60000;
}

//makes the sale
void makeSale1 ()
{
	currentBalance1 (&rembal1);
	acceptMoney1 (&transact1);
}
void makeSale2 ()
{
	currentBalance2 (&rembal2);
	acceptMoney2 (&transact2);
}

void makeSale3 ()
{
	currentBalance3 (&rembal3);
	acceptMoney3 (&transact3);
}

void makeSale4 ()
{
	currentBalance4 (&rembal4);
	acceptMoney4 (&transact4);
}
