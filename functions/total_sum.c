#include <stdio.h>

/* Write a program that:
   Uses a register variable to sum numbers from 1 to 100.
   Prints the final result. */
int main() {
    register int i;
    int sum = 0;
    for (i = 1; i <= 100; i++)
        sum += i;
    printf("Total sum: %d\n", sum);
    return 0;
}
