#include <stdio.h>
#include <unistd.h>     // for access()
#include <sys/stat.h>   // for stat()

int main(int argc, char *argv[])
{
    // check if filepath was provided
    if (argc < 2) {
        printf("usage: %s <filename>\n", argv[0]);
        return 1;
    }

    char *filename = argv[1];
    if (access(filename, R_OK) == 0) {
        printf("File is readable.\n");
    } else {
        printf("File is NOT readable.\n");
    }

    // step 2: get file size
    struct stat file_stat;
    if (stat(filename, &file_stat) == -1) {
        perror("stat");
        return 1;
    }
    printf("File size: %ld bytes\n", file_stat.st_size);

    // step 3: count lines
    FILE *fp = fopen(filename, "r");
    if (!fp) {
        perror("fopen");
        return 1;
    }

    int ch;
    int lines = 0;
    int prev_char = '\n';
    while ((ch = fgetc(fp)) != EOF) {
        if (ch == '\n') {
            lines++;
        }
        prev_char = ch;
    }

    if (prev_char != '\n') {
        lines++;    // count last line if no trailing newline
    }

    fclose(fp);
    printf("line count: %d\n", lines);

    return 0;
}
