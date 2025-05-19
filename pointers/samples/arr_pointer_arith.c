#include <stdio.h>

int main() {
    int numbers[5] = {1, 2, 3, 4, 5};
    int *p = numbers;  // points to first element

    printf("Using array indexing:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    printf("Using pointer arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");

    return 0;
}
