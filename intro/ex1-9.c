#include <stdio.h>

/* write a program to copy its input to its output, replacing each string of
 * one or more blanks by a single blank */
int main() {
    int c, lastc;
    lastc = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            if (lastc != ' ') {
                putchar(c);
            }
        } else {
            putchar(c);
        }
        lastc = c;
    }
    return 0;
}
