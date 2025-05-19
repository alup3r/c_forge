#include <stdio.h>

/* Basic pointer assignment
   Write a program that declares a float, assigns it a value, then uses a
   pointer to print its address and value. */
int main() {
    float decimal = 1.2;
    float *p = &decimal;

    printf("float variable address: %p\n", p);
    printf("float variable value: %.2f\n", *p);

    printf("Modify the value via pointer\n");
    *p = 2.4;
    printf("float variable value: %.2f\n", *p);
    printf("printing variable defined: %.2f\n", decimal);
    return 0;
}
