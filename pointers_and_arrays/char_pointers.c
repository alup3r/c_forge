#include <stdio.h>

void print_string(const char *s);
int string_length(const char *s);

int main() {
    char *word = "Forge";

    print_string(word);

    int len = string_length(word);
    printf("Length of string: %d\n", len);

    return 0;
}

void print_string(const char *s) {
    while (*s != '\0') {
        putchar(*s);
        s++;
    }
    putchar('\n');
}

int string_length(const char *s) {
    int len = 0;
    while (*s++) {
        len++;
    }
    return len;
}
