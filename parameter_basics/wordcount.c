#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    int char_count = 0;
    for (int i = 1; i < argc; i++) {
        char_count += strlen(argv[i]);
    }
    printf("total args: %d\n", argc-1);
    printf("total chars: %d\n", char_count);
    return 0;
}
