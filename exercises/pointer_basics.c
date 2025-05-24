#include <stdio.h>

int main() {
    int x = 10;
    int *ptr = &x;

    printf("value: %d\n", *ptr);
    printf("print address using x: %p\n", &x);
    printf("variable address: %p\n", ptr);
    printf("pointer address: %p\n", &ptr);
    return 0;
}
