#include <stdio.h>

/* write a program that uses a for loop to print numbers from 1 to 10, if the
 * number is divisible by 4, skipt it using continue, if the number is equal to
 * 8, stop the loop using break. */
int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 8)
            break;
        if (i % 4 == 0)
            continue;
        printf("%d\n", i);
    }
    return 0;
}
