#include <stdio.h>
#include <stdlib.h>

void print_arr(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    /*1. Define integer variables for size and loop counter*/
    int size, i;
    /*2. Declare a pointer for storing integers*/
    int *numbers;
    /*3. Display a prompt asking the user how many numbers they want to store*/
    printf("how many numbers do you want to store? ");
    /*4. Read the desired array size from user input*/
    scanf("%d", &size);
    /*5. Allocate memory dynamically for an array of integers based on user input*/
    numbers = (int*)malloc(size * sizeof(int));
    /*6. Add error handling to check if memory allocation succeeded*/
    if (numbers == NULL) {
        printf("memory allocation failed\n");
        return 1;
    }
    /*7. Display a prompt for the user to enter the numbers*/
    printf("enter %d numbers:\n", size);
    /*8. Create a loop to read each number from the user and store it in the array*/
    for (i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }
    /*9. Initialize a variable to store the sum of all numbers*/
    /*10. Create a loop to calculate the sum of all numbers in the array*/
    /*11. Display the calculated sum to the user*/
    int sum = 0;
    for (i = 0; i < size; i++) {
        sum += numbers[i];
    }
    printf("total sum: %d\n", sum);
    /*12. Calculate a new size for the array (original size plus 5)*/
    int new_size = size + 5;
    /*13. Use realloc to resize the array to the new size*/
    numbers = (int*)realloc(numbers, new_size * sizeof(int));
    /*14. Add error handling to check if memory reallocation succeeded*/
    if (numbers == NULL) {
        printf("memory reallocation failed\n");
        return 1;
    }
    /*15. Display a message confirming the array was resized*/
    printf("numbers array resized successfully, new size: %d", new_size);

    /*16. Free the allocated memory to prevent memory leaks*/
    /*17. Return 0 to indicate successful program execution*/
    free(numbers);
    return 0;
}
