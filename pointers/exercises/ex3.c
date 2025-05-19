#include <stdio.h>

/* declare a char array with the string "hello". use a pointer to print each
 * character on a new line */
int main() {
    char str[] = "hello";
    char *p = str;

    for (int i = 0; i < 5; i++) {
        printf("%c\n", *(p + i));
    }

    return 0;
}
