#include <stdio.h>

/* Write a program that:
   Declares a char array with 5 elements: 'A', 'B', 'C', 'D', 'E'.
   Uses a pointer to:
   Print each element’s value and memory address.
   Then print the ASCII value of the third character using pointer arithmetic.
 */
int main() {
    char arr[5] = {'A', 'B', 'C', 'D', 'E'};
    char *p = arr;

    for (int i = 0; i < 5; i++) {
        printf("value at %d: %c\n", i, *(p + i));
        printf("address at %d: %p\n", i, (void *)(p + i));
    }

    printf("\nASCII value of 3rd character: %d\n", *(p + 2));
    return 0;
}
