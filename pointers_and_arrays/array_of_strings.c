#include <stdio.h>

int main() {
    // Array of string literals (array of char pointers)
    char *fruits[] = {
        "Apple",
        "Banana",
        "Cherry"
    };

    // Printing each string
    for (int i = 0; i < 3; i++) {
        printf("Fruit %d: %s\n", i+1, *(fruits + i));
    }

    return 0;
}
