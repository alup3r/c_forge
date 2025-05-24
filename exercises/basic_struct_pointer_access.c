#include <stdio.h>

/* Task: Define a Process struct with pid and state. Write a function that takes
    a Process pointer and prints its fields.*/

typedef struct {
    int pid;
    int state;
} Process;

void print_process(Process *proc);

int main() {
    Process proc = { 1, 0 };
    print_process(&proc);
    return 0;
}

void print_process(Process *proc) {
    printf("PID: %d\n", (*proc).pid);
    printf("STATE: %d\n", (*proc).state);
}
