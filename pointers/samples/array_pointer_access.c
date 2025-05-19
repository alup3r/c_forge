#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    int *p = numbers;

    printf("Accessing using array indexing:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    printf("Accessing using pointers:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");

    return 0;
}
