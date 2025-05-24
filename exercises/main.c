#include <stdio.h>

void to_upper(char *s) {
    while (*s != '\0') {
        if (*s >= 'a' && *s <= 'z') {
            *s -= 32;
        }
        s++;
    }
}

int main() {
    char s[] = { "hello" };
    printf("Before:\n");
    printf("%s\n", s);

    to_upper(s);
    printf("\nAfter:\n");
    printf("%s\n", s);
    return 0;
}
