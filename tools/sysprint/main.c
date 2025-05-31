#include "sysprint.h"

int main(void)
{
    print_version();
    get_kernel_version();
    get_memory();
    get_cpu();
    return 0;
}
