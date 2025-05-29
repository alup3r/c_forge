#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "vector.h"


Vector *create_vector(size_t capacity, size_t element_size) {
    Vector *vector = (Vector*)malloc(sizeof(Vector));
    if (vector == NULL)
        return NULL;

    vector->data = malloc(capacity * element_size);
    if (vector->data == NULL) {
        free(vector);
        return NULL;
    }

    vector->size = 0;
    vector->capacity = capacity;
    vector->element_size = element_size;

    return vector;
}


void free_vector(Vector *vector) {
    if (vector != NULL) {
        if (vector->data != NULL)
            free(vector->data);
        free(vector);
    }
}


int is_empty(Vector *vector) {
    if (vector == NULL)
        return 1;
    return vector->size == 0;
}
