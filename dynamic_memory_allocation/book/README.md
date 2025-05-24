## Dynamic Book Inventory System

Create a program that manages a bookstore inventory using dynamic memory
allocation.

1. Define a Book structure with:
   • Title (string)
   • Author (string)
   • ISBN (string)
   • Price (float)
   • Quantity in stock (int)

2. Implement these functions:
   • Book* create_inventory(int initial_capacity)
   • void add_book(Book** inventory, int* capacity, int* count, char* title,
     char* author, char* isbn, float price, int quantity)
   • void update_quantity(Book* inventory, int count, char* isbn, int
     new_quantity)
   • void print_inventory(Book* inventory, int count)
   • void free_inventory(Book* inventory)

3. The add_book function should resize the inventory when it reaches capacity,
   similar to your student database.

4. The update_quantity function should find a book by ISBN and update its
   quantity.

This exercise will give you more practice with:
• Dynamic memory allocation and reallocation
• Working with multiple string fields
• Searching through dynamically allocated arrays
• Memory management with more complex structures
