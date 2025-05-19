#include <stdio.h>
#include "fibonacci.h"

#define MAX_SEQ 20

int main() {
    for (int i = 0; i < MAX_SEQ; i++)
        printf("fibonacci: %d\n", fibonacci());

    return 0;
}
