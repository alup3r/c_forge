#include <stdio.h>
#include "bubble_sort.h"

int main() {
    int arr[5] = {3, 5, 2, 8, 4};
    bubble_sort(arr, 5);
    print_array(arr, 5);
    return 0;
}
