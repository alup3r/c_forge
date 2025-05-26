#define _XOPEN_SOURCE 700
#include <stdio.h>
#include <time.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("usage: %s YYYY-MM-DD\n", argv[0]);
        return 1;
    }
    struct tm tm = {0};
    char *res = strptime(argv[1], "%Y-%m-%d", &tm);
    if (res == NULL) {
        printf("Invalide date format: Use YYYY-MM-DD.\n");
        return 1;
    }

    char weekday[10];
    strftime(weekday, sizeof(weekday), "%A", &tm);
    printf("Weekday: %s\n", weekday);
    return 0;
}
