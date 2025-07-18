#ifndef DISPENSER_H
#define DISPENSER_H

int amount, total1, total2, total3, total4;

void getCandyCount ();
void getChipsCount ();
void getCookiesCount ();
void getSodaCount ();
	int stock[4];

void updateCandyCount ();
	int newcount1;
void updateChipsCount ();
	int newcount2;
void updateCookiesCount ();
	int newcount3;
void updateSodaCount ();
	int newcount4;

void getProductCost (int *amount, int *total1, int *total2, int *total3, int *total4);

void makeSale1 ();
void makeSale2 ();
void makeSale3 ();
void makeSale4 ();

#endif
