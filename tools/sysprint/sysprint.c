#define _POSIX_C_SOURCE 200809L

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "sysprint.h"


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
        if (strncmp(buffer, "Mem:", 4) == 0) {
            char *token;
            int token_count = 0;
            token = strtok(buffer, " ");
            while (token != NULL) {
                token_count++;
                if (token_count == 2) {
                    printf("memory: %s\n", token);
                    break;
                }
                token = strtok(NULL, " ");
            }
            break;
        }
    }

    pclose(memp);
}


void get_cpu(void) {
    FILE *fp;
    char buffer[256];

    fp = popen("lscpu", "r");
    if (fp == NULL) {
        perror("popen");
        return;
    }

    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        if (strncmp(buffer, "Core", 4) == 0) {
            char *token;
            int token_count = 0;
            token = strtok(buffer, " ");
            while (token != NULL) {
                token_count++;
                if (token_count == 4) {
                    printf("Cores: %s", token);
                    printf("Logical Processors: %d\n", atoi(token) * 2);
                    break;
                }
                token = strtok(NULL, " ");
            }
            break;
        }
    }

    pclose(fp);
}
