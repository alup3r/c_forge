#include <stdio.h>

/* declare an integer variable, assing a pointer to it, change the value of the
 * variable using the pointer (e.g, set it to 32). print the new value */
int main() {
    int num = 10;
    int *p = &num;

    printf("original variable value: %d\n", num);

    *p = 20;
    printf("value changed using pointer: %d\n", *p);
    printf("%d\n", num);
    return 0;
}
