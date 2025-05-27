#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    int is_active;
    int session_lock;
} Connection;

void initialize_lock(int *lock_ptr) {
    printf("Memory address: %p\n", lock_ptr);
    *lock_ptr = 0;
}

int main() {
    Connection *conn = malloc(sizeof(Connection));
    conn->id = 12345;
    conn->is_active = 1;

    printf("conn address: %p\n", conn);
    printf("session lock address: %p\n", &conn->session_lock);

    initialize_lock(&conn->session_lock);
    printf("session lock: %d\n", conn->session_lock);
    free(conn);
    return 0;
}
