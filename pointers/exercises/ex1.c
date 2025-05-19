#include <stdio.h>

/* declare an integer variable, create a pointer to it, and print both the value
  and ist address using the pointer */
int main() {
    int num = 10;
    int *p = &num;

    printf("num var value: %d\n", num);
    printf("num var addr: %p\n", p);
    printf("%d\n", *p);

    return 0;
}
