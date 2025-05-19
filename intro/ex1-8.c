#include <stdio.h>

/* write a program to count blanks, tabs, and newlines */
int main() {
    int c, blanks, tabs, nl;

    nl = tabs = blanks = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            ++blanks;
        } else if (c == '\t') {
            ++tabs;
        } else if (c == '\n') {
            ++nl;
        }
    }
    printf("%d %d %d\n", blanks, tabs, nl);
    return 0;
}
