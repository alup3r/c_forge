#ifndef CIRCLE_H
#define CIRCLE_H
#define PI 3.14

typedef struct {
    float radius;
} Circle;

float calculate_area(Circle c);

#endif // !CIRCLE_H
