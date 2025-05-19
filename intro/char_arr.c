#include <stdio.h>

/* character array intro */
int main() {
    char str[] = "Hello";
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);
    }
    return 0;
}
