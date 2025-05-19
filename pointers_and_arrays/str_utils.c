// str_utils.c
#include <stdio.h>
#include "str_utils.h"

void reverse_string(char *str) {
    if (!str) return;
    char *start = str;
    char *end = str;

    while (*end != '\0') {
        end++;
    }
    end--;

    while (start < end) {
        char temp = *end;
        *end = *start;
        *start = temp;

        start++;
        end--;
    }
}

void print_string(const char *str) {
    while (*str)
        putchar(*str++);
    putchar('\n');
}
