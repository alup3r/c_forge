#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"

Student *create_student_database(int initial_capacity) {
    Student *database = (Student*)calloc(initial_capacity, sizeof(Student));

    if (database == NULL) {
        printf("memory allocation failed for student database!\n");
        return NULL;
    }

    return database;
}

int add_student(Student **database, int *capacity, int *count, char *name, int id, float gpa) {
    if (*count == *capacity) {
        *capacity = *capacity * 2;
        Student *temp = (Student*)realloc(*database, *capacity * sizeof(Student));

        if (temp == NULL) {
            fprintf(stderr, "memory reallocation failed!\n");
            return 1;
        }
        *database = temp;
    }

    strncpy((*database)[*count].name, name, 49);
    (*database)[*count].name[49] = '\0';
    (*database)[*count].id = id;
    (*database)[*count].gpa = gpa;
    (*count)++;

    return 0;
}

void print_students(const Student *database, int count) {
    for (int i = 0; i < count; i++) {
        printf("Name: %s\n", database[i].name);
        printf("ID: %d\n", database[i].id);
        printf("GPA: %.2f\n", database[i].gpa);
        printf("\n");
    }
}

void free_student_database(Student *database) {
    if (database != NULL)
        free(database);
}
