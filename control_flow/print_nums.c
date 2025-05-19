#include <stdio.h>

/* Write a program that:
   Uses a while loop to print even numbers from 2 to 20.
   Then uses a for loop to print odd numbers from 19 down to 1. */
int main() {
    int i = 2;
    printf("While loop print even\n");
    while (i <= 20) {
        printf("%d\n", i);
        i += 2;
    }

    printf("\nFor loop print odds\n");
    for (i = 19; i >= 1; i -= 2)
        printf("%d\n", i);
    return 0;
}
