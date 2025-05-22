#ifndef TEMPERATURE_H
#define TEMPERATURE_H

typedef struct {
    float value;
    char unit;
} Temperature;

Temperature create_temp(float value, char unit);

Temperature convert_temp(Temperature temp, char target_unit);

void print_temp(Temperature temp);

#endif // !TEMPERATURE_H
