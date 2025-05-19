#include <stdio.h>

/* Write a program that:
   Declares an array of 4 floats initialized to some values.
   Uses a pointer to print all elements.
   Modifies the second element using pointer arithmetic.
   Prints the array after modification. */
int main() {
    float arr[4] = { 1.1, 1.2, 1.3, 1.4 };
    float *p = arr;
    for (int i = 0; i < 4; i++)
        printf("%.1f\n", *(p + i));

    printf("\nAfter mods\n");
    *(p + 1) = 2.2;
    for (int i = 0; i < 4; i++)
        printf("%.1f\n", *(p + i));
    return 0;
}
