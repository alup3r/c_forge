// account.c
#include <stdio.h>
#include "account.h"

static int balance = 1000;

void deposit(int amount) {
    balance += amount;
}

void show_balance() {
    printf("Account balance: %d\n", balance);
}
