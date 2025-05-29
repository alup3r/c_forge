#include <stdio.h>
#include "vector.h"

#define EXIT_SUCCESS 0

int main(int argc, char *argv[])
{
    printf("Creating Vector\n");
    Vector *v1 = create_vector(2, sizeof(int));

    if (is_empty(v1))
        printf("vector is empty\n");
    else
        printf("vector is not empty\n");

    free_vector(v1);
    return EXIT_SUCCESS;
}
