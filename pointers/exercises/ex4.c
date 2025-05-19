#include <stdio.h>

/* declare an int array of 5 values. use a pointer to modify the third element
 * and the print the whole array */
int main() {
    int numbers[5] = {2, 4, 6, 8, 10};

    int *p = &numbers[2];
    printf("%p\n", p);
    *p = 25;
    for (int i = 0; i < 5; i++) {
        printf("%d\n", numbers[i]);
    }

    return 0;
}
