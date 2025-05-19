#include <stdio.h>

/* Write a program that:
   Defines a function count_vowels(const char *s) that returns how many vowels
   (a, e, i, o, u) are in a string. Use pointer traversal in the function (while
   (*s)). In main(), call it with "Reforge the code" and print the result. */
int count_vowels(const char *s);

int main() {
    char *word = "reforge the code";
    int vowel_count = count_vowels(word);
    printf("number of vowels: %d\n", vowel_count);
    return 0;
}

int count_vowels(const char *s) {
    int count = 0;
    while (*s) {
        if (*s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' || *s == 'u')
            count++;
        s++;
    }
    return count;
}
