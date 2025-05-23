#include <stdlib.h>
#include "student.h"

int main() {
    int capacity = 2;
    int count = 0;

    Student *database = create_student_database(capacity);
    if (database == NULL) {
        return 1;
    }

    add_student(&database, &capacity, &count, "Linus", 103, 4.4);
    add_student(&database, &capacity, &count, "Dennis", 104, 3.4);
    print_students(database, count);

    free_student_database(database);
    return 0;
}
