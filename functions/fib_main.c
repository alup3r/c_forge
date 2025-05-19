#include <stdio.h>
#include "fib.h"

#define MAX_SEQ 10

int main() {
    int n;
    for (n = 0; n < MAX_SEQ; n++)
        printf("Fib %d: %d\n", n, fib(n));
    return 0;
}
