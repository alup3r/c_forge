#include <stdio.h>
#include <string.h>
#include "book.h"

int main() {
    int capacity = 2;
    int count = 0;
    Book *library = create_inventory(capacity);

    add_book(
        &library,
        &capacity,
        &count,
        "Lord of The Rings",
        "JR Tolkien",
        "978-1-4028-9462-6",
        10.99, 10);

    add_book(
        &library,
        &capacity,
        &count,
        "The Silmarilium",
        "JR Tolkien",
        "356-1-5983-1233-6",
        9.99, 20);

    add_book(
        &library,
        &capacity,
        &count,
        "The Hobbit",
        "JR Tolkien",
        "254-5-3512-4998-1",
        10.99, 12);

    char search_title[MAX_TITLE];
    printf("Enter title to search: ");
    fgets(search_title, MAX_TITLE, stdin);
    search_title[strcspn(search_title, "\n")] = 0;

    int index = find_book(library, count, search_title);
    if (index >= 0) {
        print_book(library, index);
    } else {
        fprintf(stderr, "Book not found in library\n");
    }

    free_inventory(library);
    return 0;
}
