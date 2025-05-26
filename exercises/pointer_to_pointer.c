#include <stdio.h>
#include <stdlib.h>

int new_value(int **dptr, int new_value) {
    return **dptr = new_value;
}

int main() {
    int x = 10;
    int *ptr = &x;
    int **dptr = &ptr;

    printf("address of var (x): %p\n", ptr);
    printf("address of *ptr: %p\n", *dptr);
    return 0;
}
