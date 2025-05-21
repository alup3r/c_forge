#include <stdio.h>

int main() {
    int *pointerArray[3];

    int a = 10, b = 20, c = 30;

    pointerArray[0] = &a;
    pointerArray[1] = &b;
    pointerArray[2] = &c;

    for (int i = 0; i < 3; i++)
        printf("value at pointerArray[%d]: %p\n", i, pointerArray[i]);

    return 0;
}
