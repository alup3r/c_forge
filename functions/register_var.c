#include <stdio.h>

/* write a program that uses a register variable in a for loop to count from 1
 * to 10 and print each value. */
int main() {
    register int i;
    for (i = 1; i <= 10; i++)
        printf("%d\n", i);
    return 0;
}
