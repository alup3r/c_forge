#include <stdio.h>

// Function prototypes
float divide(int a, int b);
char grade_letter(int score);
void greet();

int main() {
    int a = 10, b = 3;
    float result = divide(a, b);
    printf("Result of division: %.2f\n", result);

    int score = 85;
    char grade = grade_letter(score);
    printf("Grade for %d: %c\n", score, grade);

    greet();

    return 0;
}

// Returns a floating-point division result
float divide(int a, int b) {
    return (float)a / b;
}

// Returns a character based on score
char grade_letter(int score) {
    if (score >= 90) return 'A';
    else if (score >= 80) return 'B';
    else if (score >= 70) return 'C';
    else return 'F';
}

// Returns nothing, just prints
void greet() {
    printf("Welcome to the Forge!\n");
}
