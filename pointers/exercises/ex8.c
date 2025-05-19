#include <stdio.h>

void print_arr(float *n, int size);

/* write a program that declares a float array of size 4 initialized with
 * values, uses pointer arithmetic to double each element's value and prints all
 * elements with array indexing. */
int main() {
    float arr[4] = {1.1, 1.2, 1.3, 1.4};
    float *p = arr;
    for (int i = 0; i < 4; i++) {
        *(p + i) = 2.0 * *(p + i);
    }

    print_arr(arr, 4);
    return 0;
}

void print_arr(float *n, int size) {
    for (int i = 0; i < size; i++) {
        printf("%.1f ", *(n + i));
    }
}
