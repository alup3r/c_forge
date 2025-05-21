// bubble_sort.c
#include <stdio.h>
#include "bubble_sort.h"

void bubble_sort(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        int swapped = 0;
        for (int j = 0; j < size-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0) {
            break;
        }
    }
}

void print_array(int *arr, int size) {
    printf("Sorted array: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}
