#include <stdio.h>

/* write a program to use a do while loop to print numbers up to five */
int main() {
    int count = 1;
    do {
        printf("Looping: %d\n", count);
        count++;
    } while (count <= 5);
    return 0;
}
