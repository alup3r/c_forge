#include <stdio.h>
#include <stdlib.h>

int *find_largest_element(int *arr, int size) {
    int *ptr = arr;
    int target = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > target) {
            target = arr[i];
            ptr = arr + i;
        }
    }
    return ptr;
}

int main() {
    int arr[4] = { 12, 1, 3, 8 };
    int *x = find_largest_element(arr, 4);
    printf("%p\n", x);
    return 0;
}
