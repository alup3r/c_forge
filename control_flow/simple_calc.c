#include <stdio.h>

/* write a program that declares two integers, and a character operator and uses
 * a switch to perform calculation based on the given operator, and print the
 * result */
int main() {
    int a = 3;
    int b = 0;
    int result;
    char op = '^';
    int valid = 1;

    switch (op) {
        case '+': result = (a+b); break;
        case '-': result = (a-b); break;
        case '*': result = (a*b); break;
        case '/': 
            if (b != 0)
                result = (a/b);
            else
                printf("Error: Division by zero!\n");
                valid = 0;
            break;
        default: 
            printf("Invalid operator\n"); 
            valid = 0;
            break;
    }

    if (valid)
        printf("Result: %d %c %d\n", a, op, b);

    return 0;
}
