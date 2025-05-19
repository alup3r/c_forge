#include <stdio.h>
#include "factorial.h"

#define MAX_SEQ 10

int main() {
    register int n;
    for (n = 0; n < MAX_SEQ; n++)
        printf("Factorial %d: %d\n", n, factorial(n));
    return 0;
}
