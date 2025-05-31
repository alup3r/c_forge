#include <stdio.h>
#include <unistd.h>

#define EXIT_SUCCESS 0

int main(int argc, char *argv[])
{
    int opt;

    if (argc < 2) {
        printf("usage: %s [-v]\n", argv[0]);
        return 1;
    }

    while ((opt = getopt(argc, argv, "v")) != -1) {
        switch (opt) {
            case 'v':
                printf("Verbose mode ON\n");
                break;
            case '?': // unknown option
                fprintf(stderr, "usage: %s [-v]\n", argv[0]);
                return 1;
        }
    }

    return EXIT_SUCCESS;
}
