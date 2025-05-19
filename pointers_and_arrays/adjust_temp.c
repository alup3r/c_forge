#include <stdio.h>

/* Write a program with:
   A float variable representing temperature.
   A function adjust_temp(float *t) that adds 5.5 to it via pointer.
   Print the value before and after calling the function to verify it changed.
 */
void adjust_temp(float *temp);

int main() {
    float temp = 1.2;

    printf("value before calling function: %.1f\n", temp);
    adjust_temp(&temp);

    printf("value after calling function: %.1f\n", temp);
    return 0;
}

void adjust_temp(float *temp) {
    *temp += 5.5;
}
