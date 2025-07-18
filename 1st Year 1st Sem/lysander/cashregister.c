#include <stdio.h>
#include <stdlib.h>
#include "dispenser.h"
#include "CashRegister.h"

void currentBalance1 (int *rembal1)
{
    getProductCost (&amount, &total1, &total2, &total3, &total4);
    rembal1 = total1;
    system("cls");

    if (rembal1 != 0){
        printf("[Balance to pay]: %d.\n\nPlease deposit balance: ", rembal1);
        scanf("%d", &deposit1);

        rembal1 = total1 - deposit1;
        total12 = rembal1;

        if (rembal1 != 0){
            printf("[Remaining Balance]: %d.\n\nPlease deposit remaining Balance: ", rembal1);
            scanf("%d", &deposit2);
        }
    }
}

void acceptMoney1 (int *transact1)
{
    transact1 = total12 - deposit2;

    if (total12 != 0){
        if (transact1 != 0){
            system("cls");
            printf("\nFailed to submit balance.\n\n");
        }
        else{
            system("cls");
            printf("\nTransaction successful. Thanks for buying!\n\n");
        }
    }
    else{
        system("cls");
        printf("\nTransaction successful. Thanks for buying!\n\n");
    }
}

void currentBalance2 (int *rembal2)
{
    getProductCost (&amount, &total1, &total2, &total3, &total4);
    rembal2 = total2;
    system("cls");

    if (rembal2 != 0){
        printf("[Balance to pay]: %d.\n\nPlease deposit balance: ", rembal2);
        scanf("%d", &deposit1);
        rembal2 = total2 - deposit1;
        total22 = rembal2;

        if (rembal2 != 0){
            printf("[Remaining Balance]: %d.\n\nPlease deposit remaining Balance: ", rembal2);
            scanf("%d", &deposit2);
        }
    }
}

void acceptMoney2 (int *transact2)
{
    transact1 = total22 - deposit2;

    if (total22 != 0){
        if (transact2 != 0){
            system("cls");
            printf("\nFailed to submit balance.\n\n");
        }
        else{
            system("cls");
            printf("\nTransaction successful. Thanks for buying!\n\n");
        }
    }
    else{
        system("cls");
        printf("\nTransaction successful. Thanks for buying!\n\n");
    }
}

void currentBalance3 (int *rembal3)
{
    getProductCost (&amount, &total1, &total2, &total3, &total4);
    rembal3 = total3;
    system("cls");

    if (rembal3 != 0){
        printf("[Balance to pay]: %d.\n\nPlease deposit balance: ", rembal3);
        scanf("%d", &deposit1);
        rembal3 = total3 - deposit1;
        total32 = rembal3;

        if (rembal3 != 0){
            printf("[Remaining Balance]: %d.\n\nPlease deposit remaining Balance: ", rembal3);
            scanf("%d", &deposit2);
        }
    }
}

void acceptMoney3 (int *transact3)
{
    transact1 = total32 - deposit2;

    if (total32 != 0){
        if (transact3 != 0){
            system("cls");
            printf("\nFailed to submit balance.\n\n");
        }
        else{
            system("cls");
            printf("\nTransaction successful. Thanks for buying!\n\n");
        }
    }
    else{
        system("cls");
        printf("\nTransaction successful. Thanks for buying!\n\n");
    }
}

void currentBalance4 (int *rembal4)
{
    getProductCost (&amount, &total1, &total2, &total3, &total4);
    rembal4 = total4;
    system("cls");

    if (rembal4 != 0){
        printf("[Balance to pay]: %d.\n\nPlease deposit balance: ", rembal4);
        scanf("%d", &deposit1);
        rembal4 = total4 - deposit1;
        total42 = rembal4;

        if (rembal4 != 0){
            printf("[Remaining Balance]: %d.\n\nPlease deposit remaining Balance: ", rembal4);
            scanf("%d", &deposit2);

        }
    }
}

void acceptMoney4 (int *transact4)
{
    transact1 = total42 - deposit2;

    if (total42 != 0){
        if (transact4 != 0){
            system("cls");
            printf("\nFailed to submit balance.\n\n");
        }
        else{
            system("cls");
            printf("\nTransaction successful. Thanks for buying!\n\n");
        }
    }
    else{
        system("cls");
        printf("\nTransaction successful. Thanks for buying!\n\n");
    }
}
