#include <stdio.h>
#include <time.h>

int main(int argc, char *argv[]) {
    time_t now = time(NULL);
    if (now == ((time_t)-1)) {
        perror("time");
        return 1;
    }
    printf("unix time: %ld\n", now);

    char *timestr = ctime(&now);
    if (timestr == NULL) {
        perror("ctime");
        return 1;
    }
    printf("Current local time: %s", timestr);
    
    return 0;
}
