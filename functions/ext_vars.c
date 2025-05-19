#include <stdio.h>

// External (global) variable
int counter = 0;

void increment();
void show_count();

int main() {
    increment();
    increment();
    show_count();  // Should print: Count is: 2

    return 0;
}

void increment() {
    counter++;
}

void show_count() {
    printf("Count is: %d\n", counter);
}

