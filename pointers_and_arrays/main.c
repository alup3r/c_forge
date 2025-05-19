#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 30};
    int *p = arr;
    printf("%p\n", (void *)p);
    return 0;
}
