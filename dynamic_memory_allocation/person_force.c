#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
    char *name;
    int age;
} Person;


Person *create_person(const char *name, int age) {
    // Allocate memory for Person structure
    Person *p = (Person*)malloc(sizeof(Person));
    if (p == NULL)
        return NULL;

    // Allocate memory for name and copy it
    p->name = (char*)malloc(strlen(name) + 1);
    if (p->name == NULL) {
        free(p);
        return NULL;
    }

    strcpy(p->name, name);
    p->age = age;

    return p;
}


void modify_person(Person *p, const char *new_name, int new_age) {
    // Reallocate memory for new name if needed
    if (strlen(new_name) > strlen(p->name)) {
        char *temp = (char*)realloc(p->name, strlen(new_name) + 1);
        if (temp == NULL)
            return;
        p->name = temp;
    }

    strcpy(p->name, new_name);
    p->age = new_age;
}


void free_person(Person *p) {
    if (p != NULL) {
        free(p->name);
        free(p);
    }
}


int main() {
    // Create a person
    Person *p1 = create_person("John Doe", 30);

    // Access using arrow operator
    printf("Name: %s, Age: %d\n", p1->name, p1->age);

    // Modify person
    modify_person(p1, "John Smith", 31);
    printf("Updated - Name: %s, Age: %d\n", p1->name, p1->age);

    // Clean up
    free_person(p1);

    return 0;
}
