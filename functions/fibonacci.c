/* fibonacci.c */
#include "fibonacci.h"

#define MAX_SEQ 20

int fibonacci() {
    static int previous = 0;
    static int current = 1;
    static int call_count = 0;

    if (call_count == 0) {
        call_count++;
        return previous;
    }
    if (call_count == 1) {
        call_count++;
        return current;
    }
    
    int next = previous + current;
    previous = current;
    current = next;

    return next;
}
