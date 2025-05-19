#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20
/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300 */
int main() {
    int celsius;
    printf("Cels\tFahr\n");
    for (celsius = LOWER; celsius <= UPPER; celsius = celsius + STEP) {
        printf("%4d\t%3.1f\n", celsius, (celsius * 5.0/9.0) + 32);
    }
    return 0;
}
