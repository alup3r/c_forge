#ifndef BOOK_H
#define BOOK_H

typedef struct {
    char title[100];
    char author[50];
    char isbn[50];
    float price;
    int quantity;
} Book;

Book *create_inventory(int initial_capacity);

void add_book(Book **inventory, int *capacity, int *count, char *title,
              char *author, char *isbn, float price, int quantity);

void update_quantity(Book *inventory, int count, char *isbn, int new_quantity);

void print_inventory(Book *inventory, int count);

void free_inventory(Book *inventory);

#endif // !BOOK_H
