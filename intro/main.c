#include <stdio.h>

int lower(int c);

int main() {
    int c = getchar();
    printf("%d\n", c);
    return 0;
}

int lower(int c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 'a' - 'A';
    } else {
        return c;
    }
}
