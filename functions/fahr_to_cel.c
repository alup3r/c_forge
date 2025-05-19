#include <stdio.h>

/* write a program that defines a function to convert Fahrenheit to Celsius */
float convert_to_celsius(int fahr);

int main() {
    int fahr = 0;
    float celsius = convert_to_celsius(fahr);
    printf("Fahrenheit - %d: Celsius - %.2f\n", fahr, celsius);

    return 0;
}

float convert_to_celsius(int fahr) {
    return (fahr - 32) * (5.0/9.0);
}
