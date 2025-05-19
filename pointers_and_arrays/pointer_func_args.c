#include <stdio.h>

void no_change(int x) {
    x = 100;
}

void change(int *px) {
    *px = 100;
}

int main() {
    int a = 42;

    printf("Original a: %d\n", a);
    no_change(a);
    printf("After no_change(a): %d (unchanged)\n", a);

    change(&a);
    printf("After change(&a): %d (changed!)\n", a);

    return 0;
}
