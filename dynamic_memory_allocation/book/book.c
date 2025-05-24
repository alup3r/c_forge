#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "book.h"


Book *create_inventory(int initial_capacity) {
    Book *inventory = (Book*)calloc(initial_capacity, sizeof(Book));
    if (inventory == NULL) {
        fprintf(stderr, "[create_inventory] ERROR: memory allocation failed!\n");
        return NULL;
    }
    return inventory;
}


int add_book(Book **inventory, int *capacity, int *count, char *title,
              char *author, char *isbn, float price, int quantity) {
    if (inventory == NULL)
        return 1;
    if (*count == *capacity) {
        *capacity *= 2;
        Book *temp = (Book*)realloc(*inventory, *capacity * sizeof(Book));

        if (temp == NULL) {
            fprintf(stderr, "[add_book] ERROR: memory reallocation failed!\n");
            return 1;
        }
        *inventory = temp;
    }

    strncpy((*inventory)[*count].title, title, MAX_TITLE - 1);
    (*inventory)[*count].title[MAX_TITLE - 1] = '\0';
    strncpy((*inventory)[*count].author, author, MAX_AUTHOR - 1);
    (*inventory)[*count].author[MAX_AUTHOR - 1] = '\0';
    strncpy((*inventory)[*count].isbn, isbn, MAX_ISBN - 1);
    (*inventory)[*count].isbn[MAX_ISBN - 1] = '\0';
    (*inventory)[*count].price = price;
    (*inventory)[*count].quantity = quantity;
    (*count)++;

    return 0;
}


int find_book(const Book *inventory, int count, const char *title) {
    if (inventory == NULL || title == NULL)
        return -2;
    for (int i = 0; i < count; i++) {
        if (strcasecmp(title, inventory[i].title) == 0) {
            return i;
        }
    }
    return -1;
}


void print_book(const Book *inventory, int index) {
    if (inventory == NULL || index < 0) {
        fprintf(stderr, "[print_book] ERROR: Invalid book index.\n");
        return;
    }
    printf("Title: %s\n", inventory[index].title);
    printf("Author: %s\n", inventory[index].author);
    printf("ISBN: %s\n", inventory[index].isbn);
    printf("Price: $%.2f\n", inventory[index].price);
    printf("Qty: %d\n", inventory[index].quantity);
    printf("\n");
}


void update_quantity(Book *inventory, int count, char *isbn, int new_quantity) {
    for (int i = 0; i < count; i++) {
        if(strcmp(isbn, inventory[i].isbn) == 0) {
            inventory[i].quantity = new_quantity;
            printf("Quantity updated for book: %s\n", inventory[i].title);
            printf("New quantity: %d\n", inventory[i].quantity);
            return;
        }
    }
    fprintf(stderr, "[update_quantity] ERROR: ISBN %s not found!\n", isbn);
}


void print_inventory(const Book *inventory, int count) {
    for (int i = 0; i < count; i++) {
        printf("Title: %s\n", inventory[i].title);
        printf("Author: %s\n", inventory[i].author);
        printf("ISBN: %s\n", inventory[i].isbn);
        printf("Price: $%.2f\n", inventory[i].price);
        printf("Qty: %d\n", inventory[i].quantity);
        printf("\n");
    }
}


void free_inventory(Book *inventory) {
    if (inventory != NULL) {
        free(inventory);
    }
}
