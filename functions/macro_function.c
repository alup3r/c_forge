#include <stdio.h>

#define DEBUG 1
#define MAX(a,b) ((a) > (b) ? (a) : (b))

int main() {
    int x = 10, y = 20;

#ifdef DEBUG
    printf("Debug: x is %d - y is %d\n", x, y);
#endif /* ifdef DEBUG */

    printf("Max is %d\n", MAX(x, y));
    return 0;
}
