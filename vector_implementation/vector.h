#ifndef VECTOR_H
#define VECTOR_H
#include <stddef.h>

typedef struct {
    void *data;
    size_t size;
    size_t capacity;
    size_t element_size;
} Vector;

Vector *create_vector(size_t capacity, size_t element_size);

void free_vector(Vector *vector);

void free_vector(Vector *vector);

int is_empty(Vector *vector);

#endif // !VECTOR_H
