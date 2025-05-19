#include <stdio.h>

/* write a function reset_array that sets all values of an int array to 0 using
 * pointers */
void reset_array(int *n, int arr_size);

int main() {
    int numbers[4] = {2, 4, 6, 8};
    
    // set all values in numbers array to 0
    reset_array(numbers, 4);
    for (int i = 0; i < 4; i++) {
        printf("%d ", numbers[i]);
    }
    return 0;
}

void reset_array(int *n, int arr_size) {
    for (int i = 0; i < arr_size; i++) {
        *(n + i) = 0;
    }
}
