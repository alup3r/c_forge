#include <stdio.h>
#include "termc.h"

int main() {
    printf("%sPrinting Color\n%s", FG_YELLOW, RESET);
    return 0;
}
