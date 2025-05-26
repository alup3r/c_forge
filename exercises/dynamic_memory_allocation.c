#include <stdio.h>
#include <stdlib.h>

void print_arr(int *arr, int count) {
    for (int i = 0; i < count; i++) {
        printf("%d\n", *(arr + i));
    }
}

int main() {
    int capacity;
    printf("enter array capacity: ");
    scanf("%d", &capacity);

    int *numbers = (int*)malloc(capacity *sizeof(int));
    if (numbers == NULL)
        return 1;
    for (int i = 0; i < capacity; i++) {
        numbers[i] = i * 2;
    }

    print_arr(numbers, capacity);

    free(numbers);
    return 0;
}
