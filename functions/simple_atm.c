#include <stdio.h>

 /* Write a program that:
    Declares a global int variable named balance, initialized to 1000.
    Defines two functions:
        deposit(int amount) → adds to balance
        show_balance() → prints the balance
    In main(), call deposit() twice and then call show_balance(). */
int balance = 1000;

void deposit(int amount);
void show_balance();

int main() {
    deposit(100);
    deposit(500);
    show_balance();
    return 0;
}

void deposit(int amount) {
    balance += amount;
}

void show_balance() {
    printf("Account balance: %d\n", balance);
}
