#include <stdio.h>

/* write a program that declares a function that adds two integers and returns
 * their sum. */
int add(int a, int b);

int main() {
    int a, b;
    a = b = 2;
    int sum = add(a, b);
    printf("%d + %d: %d\n", a, b, sum);
    return 0;
}

int add(int a, int b) {
    return a + b;
}
