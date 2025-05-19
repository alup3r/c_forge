#include <stdio.h>
#include "str_utils.h"

/* Write a program that:
   Defines a function reverse_string(char *s) that reverses the string in place
   using pointer manipulation (not indexing). */

int main() {
    char str[] = "forge";
    char *p = str;

    print_string(p);
    reverse_string(str);
    print_string(p);
    return 0;
}
