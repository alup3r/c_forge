#ifndef STUDENT_H
#define STUDENT_H

typedef struct {
    char name[50];
    int id;
    float gpa;
} Student;

Student *create_student_database(int initial_capacity);

void add_student(Student **database, int *capacity, int *count, char *name, int id, float gpa);

void print_student(Student *database, int count);

#endif // !STUDENT_H
