#ifndef BOOK_H
#define BOOK_H
#define MAX_TITLE 100
#define MAX_AUTHOR 50
#define MAX_ISBN 50

typedef struct {
    char title[MAX_TITLE];
    char author[MAX_AUTHOR];
    char isbn[MAX_ISBN];
    float price;
    int quantity;
} Book;

Book *create_inventory(int initial_capacity);

int add_book(Book **inventory, int *capacity, int *count, char *title,
              char *author, char *isbn, float price, int quantity);

int find_book(const Book *inventory, int count, const char *title);

void print_book(const Book *inventory, int index);

void update_quantity(Book *inventory, int count, char *isbn, int new_quantity);

void print_inventory(const Book *inventory, int count);

void free_inventory(Book *inventory);

#endif // !BOOK_H
