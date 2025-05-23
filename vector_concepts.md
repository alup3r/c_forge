# Understanding C Programming Concepts for Vector Implementation

This comprehensive guide covers the fundamental concepts needed to create a
dynamic array (vector) implementation in C. Each section explores a key concept
with detailed explanations, code demonstrations, and practical exercises.

## 1. Structures in C

Structures allow grouping related data of different types under a single name,
creating custom data types that represent complex objects.

### Key Concepts:

- **Definition**: Structures are defined using the `struct` keyword
- **Members**: Variables inside a structure are called members or fields
- **Typedef**: Creates an alias for a structure type, simplifying usage
- **Memory Layout**: Members are stored sequentially in memory
- **Scope**: Structures are typically defined globally for wider accessibility

### Code Demonstration:

```c
#include <stdio.h>

// Structure definition 
typedef struct { 
    char name[50]; 
    int age; 
    float salary;
} Employee;

void print_employee(Employee emp) { 
    printf("Name: %s\n", emp.name);
    printf("Age: %d\n", emp.age); 
    printf("Salary: $%.2f\n", emp.salary); 
}

int main() { 
    // Creating and initializing a structure 
    Employee manager = {"Sarah Johnson", 42, 78500.00};
    
    // Accessing and modifying structure members 
    printf("Original salary: $%.2f\n", manager.salary); 
    manager.salary *= 1.1;  // 10% raise 
    printf("New salary: $%.2f\n", manager.salary);
    
    // Passing structure to function 
    print_employee(manager);
    
    return 0; 
}
```

### Exercise: Temperature Conversion System

Create a temperature conversion system using structures:

1. Define a `Temperature` structure with:
   - A float value
   - A char unit (C for Celsius, F for Fahrenheit, K for Kelvin)

2. Implement these functions:
   - `Temperature create_temp(float value, char unit)`
   - `Temperature convert_temp(Temperature temp, char target_unit)`
   - `void print_temp(Temperature temp)`

3. In main(), demonstrate conversions between all three units.

## 2. Dynamic Memory Allocation

Dynamic memory allocation allows programs to request memory during runtime
rather than compile time, enabling data structures to grow and shrink as
needed.

### Key Concepts:

- **Heap vs Stack**: Dynamic memory comes from the heap, not the stack
- **malloc()**: Allocates a specified number of bytes and returns a pointer
- **realloc()**: Resizes previously allocated memory while preserving content
- **free()**: Releases allocated memory to prevent memory leaks
- **NULL Checking**: Always check if memory allocation succeeded

### Code Demonstration:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int size, i;
    int *numbers;
    
    // Get desired array size from user
    printf("How many numbers do you want to store? ");
    scanf("%d", &size);
    
    // Allocate memory dynamically
    numbers = (int*)malloc(size * sizeof(int));
    
    // Check if allocation succeeded
    if (numbers == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    // Use the allocated memory
    printf("Enter %d numbers:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }
    
    // Calculate sum
    int sum = 0;
    for (i = 0; i < size; i++) {
        sum += numbers[i];
    }
    printf("Sum: %d\n", sum);
    
    // Resize the array to hold more elements
    int new_size = size + 5;
    numbers = (int*)realloc(numbers, new_size * sizeof(int));
    
    if (numbers == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }
    
    printf("Array resized to hold %d numbers\n", new_size);
    
    // Free allocated memory
    free(numbers);
    
    return 0;
}
```

### Exercise: Dynamic Student Record System

Create a program that manages student records dynamically:

1. Define a `Student` structure with:
   - Name (string)
   - ID (integer)
   - GPA (float)

2. Implement these functions:
   - `Student* create_student_database(int initial_capacity)`
   - `void add_student(Student** database, int* capacity, int* count, char*
     name, int id, float gpa)`
   - `void print_students(Student* database, int count)`
   - `void free_student_database(Student* database)`

3. The `add_student` function should resize the database when it reaches
capacity.

4. Demonstrate adding at least 10 students and printing the database.

## 3. Pointers and Memory Management

Pointers are variables that store memory addresses, allowing indirect access
and manipulation of data, which is essential for dynamic data structures.

### Key Concepts:

- **Declaration**: Pointers are declared with an asterisk (*): `int *ptr;`
- **Address Operator**: The `&` operator gets a variable's memory address
- **Dereferencing**: The `*` operator accesses the value at a pointer's address
- **Pointer Arithmetic**: Adding/subtracting integers to navigate memory
- **Arrow Operator**: The `->` operator accesses structure members via pointers
- **Memory Leaks**: Occur when allocated memory is not freed

### Code Demonstration:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char *name;
    int age;
} Person;

Person* create_person(const char *name, int age) {
    // Allocate memory for Person structure
    Person *p = (Person*)malloc(sizeof(Person));
    if (p == NULL)
        return NULL;
    
    // Allocate memory for name and copy it
    p->name = (char*)malloc(strlen(name) + 1);
    if (p->name == NULL) {
        free(p);
        return NULL;
    }
    
    strcpy(p->name, name);
    p->age = age;
    
    return p;
}

void modify_person(Person *p, const char *new_name, int new_age) {
    // Reallocate memory for new name if needed
    if (strlen(new_name) > strlen(p->name)) {
        char *temp = (char*)realloc(p->name, strlen(new_name) + 1);
        if (temp == NULL)
            return;
        p->name = temp;
    }
    
    strcpy(p->name, new_name);
    p->age = new_age;
}

void free_person(Person *p) {
    if (p != NULL) {
        free(p->name);  // Free the name string
        free(p);        // Free the Person structure
    }
}

int main() {
    // Create a person
    Person *person1 = create_person("John Doe", 30);
    
    // Access using arrow operator
    printf("Name: %s, Age: %d\n", person1->name, person1->age);
    
    // Modify person
    modify_person(person1, "John Smith", 31);
    printf("Updated - Name: %s, Age: %d\n", person1->name, person1->age);
    
    // Clean up
    free_person(person1);
    
    return 0;
}
```

### Exercise: Linked List Node Management

Implement basic linked list node operations:

1. Define a `Node` structure with:
   - An integer value
   - A pointer to the next node

2. Implement these functions:
   - `Node* create_node(int value)`
   - `void insert_after(Node* node, int value)`
   - `void delete_after(Node* node)`
   - `void print_list(Node* head)`
   - `void free_list(Node* head)`

3. In main(), create a linked list with at least 5 nodes, then:
   - Insert a new node in the middle
   - Delete a node
   - Print the list before and after each operation
   - Free all memory

## 4. Size and Capacity Management

Managing size (actual elements) and capacity (allocated space) separately
enables efficient dynamic data structures that minimize expensive memory
reallocations.

### Key Concepts:

- **Size**: Number of elements currently in use
- **Capacity**: Total allocated space available
- **Growth Strategy**: Typically multiply capacity by a factor (often 2)
- **Amortized Complexity**: Spreading reallocation cost across many operations
- **Efficiency Trade-offs**: Balance between memory usage and performance

### Code Demonstration:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char **items;
    size_t size;      // Current number of items
    size_t capacity;  // Total space available
} Inventory;

Inventory* create_inventory(size_t initial_capacity) {
    Inventory *inv = (Inventory*)malloc(sizeof(Inventory));
    if (inv == NULL)
        return NULL;
    
    inv->items = (char**)malloc(initial_capacity * sizeof(char*));
    if (inv->items == NULL) {
        free(inv);
        return NULL;
    }
    
    inv->size = 0;
    inv->capacity = initial_capacity;
    return inv;
}

int add_item(Inventory *inv, const char *item) {
    // Check if we need to resize
    if (inv->size >= inv->capacity) {
        size_t new_capacity = inv->capacity * 2;
        char **new_items = (char**)realloc(inv->items, 
                                          new_capacity * sizeof(char*));
        
        if (new_items == NULL) {
            return 0;  // Failed to resize
        }
        
        inv->items = new_items;
        inv->capacity = new_capacity;
        printf("Inventory resized from %zu to %zu slots\n", 
               inv->capacity/2, inv->capacity);
    }
    
    // Add the new item
    inv->items[inv->size] = strdup(item);
    if (inv->items[inv->size] == NULL) {
        return 0;  // Failed to copy string
    }
    
    inv->size++;
    return 1;  // Success
}

void print_inventory(Inventory *inv) {
    printf("Inventory: %zu items (capacity: %zu)\n", inv->size, inv->capacity);
    for (size_t i = 0; i < inv->size; i++) {
        printf("  %zu. %s\n", i+1, inv->items[i]);
    }
}

void free_inventory(Inventory *inv) {
    for (size_t i = 0; i < inv->size; i++) {
        free(inv->items[i]);
    }
    free(inv->items);
    free(inv);
}

int main() {
    // Create inventory with small initial capacity
    Inventory *backpack = create_inventory(2);
    
    // Add items (will trigger resize)
    add_item(backpack, "Water Bottle");
    add_item(backpack, "Sandwich");
    add_item(backpack, "Flashlight");  // This will trigger resize
    add_item(backpack, "First Aid Kit");
    add_item(backpack, "Map");
    
    // Display inventory
    print_inventory(backpack);
    
    // Clean up
    free_inventory(backpack);
    
    return 0;
}
```

### Exercise: Dynamic Message Queue

Implement a message queue system with dynamic resizing:

1. Define a `MessageQueue` structure with:
   - An array of message strings
   - Current number of messages (size)
   - Maximum capacity
   - A name for the queue

2. Implement these functions:
   - `MessageQueue* create_queue(const char* name, size_t initial_capacity)`
   - `int enqueue(MessageQueue* q, const char* message)`
   - `char* dequeue(MessageQueue* q)`
   - `void print_queue_status(MessageQueue* q)`
   - `void free_queue(MessageQueue* q)`

3. The `enqueue` function should resize when capacity is reached
4. The `dequeue` function should return the oldest message and shift remaining
messages
5. Demonstrate enqueueing enough messages to trigger at least two resize
operations

## 5. Error Handling and Bounds Checking

Proper error handling and bounds checking are essential for robust data
structures that can handle edge cases and prevent memory corruption.

### Key Concepts:

- **NULL Checking**: Always verify memory allocation succeeded
- **Bounds Checking**: Validate indices before accessing array elements
- **Error Codes**: Return meaningful error codes or status values
- **Graceful Degradation**: Handle errors without crashing
- **Resource Cleanup**: Free allocated resources even when errors occur

### Code Demonstration:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SUCCESS 0
#define ERROR_MEMORY_ALLOCATION 1
#define ERROR_INDEX_OUT_OF_BOUNDS 2
#define ERROR_EMPTY_COLLECTION 3

typedef struct {
    int *elements;
    size_t size;
    size_t capacity;
} IntCollection;

// Create a new collection
IntCollection* collection_create(size_t initial_capacity) {
    IntCollection *coll = (IntCollection*)malloc(sizeof(IntCollection));
    if (coll == NULL) {
        return NULL;
    }
    
    coll->elements = (int*)malloc(initial_capacity * sizeof(int));
    if (coll->elements == NULL) {
        free(coll);
        return NULL;
    }
    
    coll->size = 0;
    coll->capacity = initial_capacity;
    return coll;
}

// Add an element with error handling
int collection_add(IntCollection *coll, int value) {
    if (coll == NULL) {
        return ERROR_MEMORY_ALLOCATION;
    }
    
    // Resize if needed
    if (coll->size >= coll->capacity) {
        size_t new_capacity = coll->capacity * 2;
        int *new_elements = (int*)realloc(coll->elements,
                                         new_capacity * sizeof(int));
        
        if (new_elements == NULL) {
            return ERROR_MEMORY_ALLOCATION;
        }
        
        coll->elements = new_elements;
        coll->capacity = new_capacity;
    }
    
    coll->elements[coll->size++] = value;
    return SUCCESS;
}

// Get element with bounds checking
int collection_get(IntCollection *coll, size_t index, int *result) {
    if (coll == NULL || result == NULL) {
        return ERROR_MEMORY_ALLOCATION;
    }
    
    if (index >= coll->size) {
        return ERROR_INDEX_OUT_OF_BOUNDS;
    }
    
    *result = coll->elements[index];
    return SUCCESS;
}

// Remove element with bounds checking
int collection_remove_at(IntCollection *coll, size_t index) {
    if (coll == NULL) {
        return ERROR_MEMORY_ALLOCATION;
    }
    
    if (coll->size == 0) {
        return ERROR_EMPTY_COLLECTION;
    }
    
    if (index >= coll->size) {
        return ERROR_INDEX_OUT_OF_BOUNDS;
    }
    
    // Shift elements to fill the gap
    for (size_t i = index; i < coll->size - 1; i++) {
        coll->elements[i] = coll->elements[i + 1];
    }
    
    coll->size--;
    return SUCCESS;
}

// Free collection resources
void collection_free(IntCollection *coll) {
    if (coll != NULL) {
        free(coll->elements);
        free(coll);
    }
}

int main() {
    IntCollection *numbers = collection_create(2);
    if (numbers == NULL) {
        printf("Failed to create collection\n");
        return 1;
    }
    
    // Add elements
    int status;
    status = collection_add(numbers, 10);
    status = collection_add(numbers, 20);
    status = collection_add(numbers, 30);  // Will trigger resize
    
    // Get element with error handling
    int value;
    status = collection_get(numbers, 1, &value);
    if (status == SUCCESS) {
        printf("Element at index 1: %d\n", value);
    }
    
    // Try invalid index
    status = collection_get(numbers, 10, &value);
    if (status == ERROR_INDEX_OUT_OF_BOUNDS) {
        printf("Error: Index out of bounds\n");
    }
    
    // Remove element
    status = collection_remove_at(numbers, 0);
    if (status == SUCCESS) {
        printf("First element removed\n");
        
        // Verify first element is now the former second element
        collection_get(numbers, 0, &value);
        printf("New first element: %d\n", value);
    }
    
    // Clean up
    collection_free(numbers);
    
    return 0;
}
```

### Exercise: Robust File Buffer

Create a system for safely buffering lines from a file:

1. Define a `FileBuffer` structure with:
   - An array of line strings
   - Current number of lines
   - Maximum capacity
   - Error status field

2. Implement these functions:
   - `FileBuffer* buffer_create(size_t initial_capacity)`
   - `int buffer_load_file(FileBuffer* buf, const char* filename, size_t
     max_lines)`
   - `int buffer_get_line(FileBuffer* buf, size_t line_num, char** result)`
   - `int buffer_append_line(FileBuffer* buf, const char* line)`
   - `int buffer_save_to_file(FileBuffer* buf, const char* filename)`
   - `void buffer_free(FileBuffer* buf)`

3. Each function should:
   - Handle all potential error conditions
   - Return appropriate error codes
   - Avoid memory leaks even when errors occur

4. Create a test program that:
   - Loads a text file into the buffer
   - Modifies some lines
   - Adds new lines
   - Saves to a new file
   - Properly handles any errors that occur

## Conclusion

These five core concepts—structures, dynamic memory allocation, pointers,
size/capacity management, and error handling—form the foundation for
implementing a robust vector data structure in C. By mastering these concepts,
you'll be able to create not only vectors but many other dynamic data
structures.

Remember that effective vector implementation requires balancing:
- Memory efficiency (not wasting space)
- Performance (minimizing reallocations)
- Safety (proper error handling)
- Usability (clear interface design)

In your vector implementation, you'll combine all these concepts to create a
flexible, efficient data structure that can grow and shrink as needed while
maintaining good performance characteristics.
