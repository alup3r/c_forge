#include <stdio.h>
#include "power.h"

/* test power function */
int main() {
    const int base = 2;
    for (int exp = 0; exp <= 10; ++exp) {
        printf("2^%2d: %5d\n", exp, power(base, exp));
    }
    return 0;
}

/* power: raise base to n-th power; n >= 0 */
int power(int base, int n) {
    int p;
    for (p = 1; n > 0; --n) {
        p *= base;
    }
    return p;
}
