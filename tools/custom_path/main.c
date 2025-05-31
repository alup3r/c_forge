#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define EXIT_SUCCESS 0

const char *get_path_variable(void) {
    return getenv("PATH");
}


void print_path_entries(const char *path) {
    if (path == NULL) {
        printf("PATH variable not set.\n");
        return;
    }

    // Copy to buffer since strtok() modifies the string
    char buffer[4096];
    strncpy(buffer, path, sizeof(buffer) - 1);
    buffer[sizeof(buffer) - 1] = '\0';

    char *token = strtok(buffer, ":");
    while (token != NULL) {
        printf(" %s\n", token);
        token = strtok(NULL, ":");
    }
}

int main(int argc, char *argv[])
{
    const char *path = get_path_variable();
    print_path_entries(path);

    return EXIT_SUCCESS;
}
