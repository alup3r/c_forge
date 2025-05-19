#include <stdio.h>

/* create a function called double_value that takes a pointer to an int and
 * doubles its value */
void double_value(int *n);

int main() {
    int n = 6;

    double_value(&n);
    printf("%d\n", n);
    return 0;
}

void double_value(int *n) {
    *n *= 2;
}
