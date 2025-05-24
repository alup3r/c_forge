#include <stdio.h>
#include <stdlib.h>
#include "student.h"

int main() {
    int capacity = 2;
    int count = 0;

    Student *database = create_student_database(capacity);
    if (database == NULL) {
        return 1;
    }

    add_student(&database, &capacity, &count, "Linus Torvalds", 103, 4.4);
    add_student(&database, &capacity, &count, "Dennis Ritchie", 104, 3.4);
    add_student(&database, &capacity, &count, "Kenn Thompson", 105, 2.5);
    add_student(&database, &capacity, &count, "Brian Kernighan", 106, 4.5);
    add_student(&database, &capacity, &count, "Richard Stallman", 107, 3.5);
    
    print_students(database, count);
    printf("Current capacity: %d\n", capacity);

    free_student_database(database);
    return 0;
}
