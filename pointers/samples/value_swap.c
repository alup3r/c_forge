#include <stdio.h>

// function prototype
void swap(int *a, int *b);

int main() {
    int x = 5, y = 10;
    printf("Before: x = %d, y = %d\n", x, y);

    swap(&x, &y);
    printf("After: x = %d, y = %d\n", x, y);

    return 0;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
