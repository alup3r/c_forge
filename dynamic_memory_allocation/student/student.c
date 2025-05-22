#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"

Student *create_student_database(int initial_capacity) {
    Student *database = (Student*)malloc(initial_capacity * sizeof(Student));

    if (database == NULL) {
        printf("memory allocation failed for student database!\n");
        return NULL;
    }

    // zero out allocatted memmory
    for (int i = 0; i < initial_capacity; i++) {
        database[i].name[0] = '\0';
        database[i].id = 0;
        database[i].gpa = 0.0;
    }

    return database;
}

void print_student(Student *database, int count) {
    for (int i = 0; i < count; i++) {
        printf("Name: %s\n", database[i].name);
        printf("ID: %d\n", database[i].id);
        printf("GPA: %f\n", database[i].gpa);
    }
}
