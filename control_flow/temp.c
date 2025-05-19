#include <stdio.h>

/* write a program that checks for temperature, if num is less than 10 it is
 * cold if it is between 10 and 20 (inclusive) it is cool, and between 21 and 30
 * (inclusive) it's warm, otherwise it is hot. */
int main() {
    int temp = 31;

    if (temp < 10)
        printf("Cold\n");
    else if (temp <= 20)
        printf("Cool\n");
    else if (temp <= 30)
        printf("Warm\n");
    else
        printf("Hot\n");
    return 0;
}
