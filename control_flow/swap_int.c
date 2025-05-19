#include <stdio.h>

/* write a program that  declares two integers and uses a block to swap their
 * valuse if the first is greater than the second. */
int main() {
    int a, b, temp;

    a = 10;
    b = 4;

    if (a > b) {
        printf("a is greater than b\n");
        printf("Swapping ...\n");
        temp = a;
        a = b;
        b = temp;
    } else {
        printf("Integers are in order!\n");
    }

    printf("a: %d\n", a);
    printf("b: %d\n", b);

    return 0;
}
