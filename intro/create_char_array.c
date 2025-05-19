#include <stdio.h>

/* create a char array with a max of 10 values */
int main() {
    char input[11];     // 10 chars + 1 for null terminator which is '/0'
    int i = 0;
    int c;

    while (i < 10 && (c = getchar()) != EOF && c != '\n') {
        input[i++] = (char)c;
    }

    input[i] = '\0';
    printf("String: %s\n", input);
    return 0;
}
