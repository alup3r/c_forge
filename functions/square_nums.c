#include <stdio.h>

int square(int x);

int main() {
    int num = 5;
    int result = square(num);
    printf("Square of %d: %d\n", num, result);
    return 0;
}

int square(int x) {
    return x * x;
}
