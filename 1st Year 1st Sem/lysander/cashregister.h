#ifndef CASHREGISTER_H
#define CASHREGISTER_H

int rembal1, transact1;
int rembal2, transact2;
int rembal3, transact3;
int rembal4, transact4;
int deposit1, deposit2;
int total12, total22, total32, total42;

void currentBalance1 (int *rembal1);
void currentBalance2 (int *rembal2);
void currentBalance3 (int *rembal3);
void currentBalance4 (int *rembal4);

void acceptMoney1 (int *transact1);
void acceptMoney2 (int *transact2);
void acceptMoney3 (int *transact3);
void acceptMoney4 (int *transact4);

#endif
