#include "temperature.h"

int main() {
    Temperature temp = { 0, 'C' };
    Temperature new_temp = convert_temp(temp, 'F');
    print_temp(new_temp);
    return 0;
}
