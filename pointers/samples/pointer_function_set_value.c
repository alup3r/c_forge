#include <stdio.h>

void set_to_zero(int *n);

int main() {
    int a = 42;
    set_to_zero(&a);
    printf("a = %d\n", a);  // prints 0
    return 0;
}

void set_to_zero(int *n) {
    *n = 0;
}
