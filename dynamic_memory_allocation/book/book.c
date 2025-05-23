#include <stdio.h>
#include <stdlib.h>
#include "book.h"

Book *create_inventory(int initial_capacity) {
    Book *inventory = (Book *)calloc(initial_capacity, sizeof(Book));

    if (inventory == NULL) {
        printf("memory allocation failed!\n");
        return NULL;
    }

    return inventory;
}

void add_book(Book **inventory, int *capacity, int *count, char *title,
              char *author, char *isbn, float price, int quantity) {
    if (*capacity == *count) {
        *capacity *= 2;
        Book *temp = (Book*)realloc(*inventory, *capacity *sizeof(Book));

        if (temp == NULL) {
            printf("memory reallocation failed!\n");
            return;
        }
        *inventory = temp;
    }
}
