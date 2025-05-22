#include <stdio.h>
#include "circle.h"

int main() {
    Circle c1;
    c1.radius = 2;
    printf("Area of the circle: %.2f\n", calculate_area(c1));
    return 0;
}
