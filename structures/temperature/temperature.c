#include <stdio.h>
#include "temperature.h"

Temperature create_temp(float value, char unit) {
    Temperature temp = { value, unit };
    return temp;
}

Temperature convert_temp(Temperature temp, char target_unit) {
    Temperature new_temp;
    if (temp.unit == target_unit) {
        new_temp.value = temp.value;
        new_temp.unit = target_unit;
    }
    if (temp.unit == 'F') {
        if (target_unit == 'C') {
            new_temp.value = (5.0/9.0) * (temp.value-32);
            new_temp.unit = target_unit;
        } else if (target_unit == 'K') {
            new_temp.value = (temp.value - 32) * (5.0/9.0) + 273.15;
            new_temp.unit = target_unit;
        }
    } else if (temp.unit == 'C') {
        if (target_unit == 'F') {
            new_temp.value = (temp.value * 9.0/5.0) + 32;
            new_temp.unit = target_unit;
        } else if (target_unit == 'K') {
            new_temp.value = temp.value + 273.15;
            new_temp.unit = target_unit;
        }
    } else if (temp.unit == 'K') {
        if (target_unit == 'C') {
            new_temp.value = temp.value - 273.15;
            new_temp.unit = target_unit;
        } else if (target_unit == 'F') {
            new_temp.value = (temp.value - 273.15) * 9.0/5.0 + 32;
            new_temp.unit = target_unit;
        }
    } else {
        printf("Target unit not found: %c\n", target_unit);
        return temp;
    }
    return new_temp;
}

void print_temp(Temperature temp) {
    printf("Unit: %c\n", temp.unit);
    printf("Temperature: %.2f\n", temp.value);
}
