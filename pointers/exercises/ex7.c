#include <stdio.h>

void print_arr(int *n, int size);

/* create a program that declares an array of 10 integers, uses a pointer to set
 * all elements to the value of 5 and prints the array elements using pointer
 * arithmetic */
int main() {
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *p = arr;

    for (int i = 0; i < 10; i++) {
        *(p + i) = 5;
    }
    print_arr(arr, 10);
    return 0;
}

void print_arr(int *n, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(n + i));
    }
}
