#include <stdio.h>
#include "binary_search.h"

int main() {
    int v[5] = { 3, 5, 2, 9, 1};
    printf("Location of 9: %d\n", binary_search(9, v, 5));
    return 0;
}
