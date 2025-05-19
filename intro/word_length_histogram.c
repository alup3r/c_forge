#include <stdio.h>

#define IN  1  // inside a word
#define OUT 0  // outside a word

int main() {
    int c, len, state;

    state = OUT;
    len = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (state == IN) {
                for (int i = 0; i < len; i++) {
                    putchar('*');
                }
                putchar('\n');
                len = 0;
                state = OUT;
            }
        } else {
            state = IN;
            len++;
        }
    }
    return 0;
}
