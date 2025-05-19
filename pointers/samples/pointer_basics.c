#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;  // p stores the address of x

    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", &x);
    printf("Value of p (address of x): %p\n", p);
    printf("Value pointed to by p: %d\n", *p); // dereferencing

    return 0;
}
