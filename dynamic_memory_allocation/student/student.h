#ifndef STUDENT_H
#define STUDENT_H

typedef struct {
    char name[50];
    int id;
    float gpa;
} Student;

Student *create_student_database(int initial_capacity);

int add_student(Student **database, int *capacity, int *count, char *name, int id, float gpa);

void print_students(const Student *database, int count);

void free_student_database(Student *database);

#endif // !STUDENT_H
