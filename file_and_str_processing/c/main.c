#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_version() {
    FILE *fp = fopen("/etc/redhat-release", "r");
    if (fp == NULL) {
        perror("fopen");
        return;
    }

    char buffer[256];
    while (fgets(buffer, sizeof(buffer), fp)) {
        printf("%s", buffer);
    }

    fclose(fp);
}


void get_kernel_version(void) {
    FILE *fp;
    char buffer[256];

    fp = popen("uname -a", "r");
    if (fp == NULL) {
        perror("popen failed");
        return;
    }

    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        char *token;
        int token_count = 0;

        token = strtok(buffer, " ");
        while (token != NULL) {
            token_count++;
            if (token_count == 3) {
                printf("kernel version: %s\n", token);
                break;
            }
            token = strtok(NULL, " ");
        }
    }

    pclose(fp);
}


void get_memory(void) {
    FILE *memp;
    char buffer[256];

    memp = popen("free -h", "r");
    if (memp == NULL) {
        perror("popen");
        return;
    }

    while (fgets(buffer, sizeof(buffer), memp) != NULL) {
        printf("%s", buffer);
    }

    if (pclose(memp) == -1)
        perror("pclose failed");
}


int main(void)
{
    print_version();
    get_kernel_version();
    /*get_memory();*/
    return 0;
}
