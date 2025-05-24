#include <stdio.h>
#include <stdlib.h>

typedef struct {
    void *start_address;
    size_t size;
    int is_free;
} MemoryBlock;

int set_used(MemoryBlock *ptr, size_t num_blocks);

int main() {
    // Example: create an array of 3 memory blocks
    MemoryBlock blocks[3];

    // initialize blocks: simulate allocation with malloc and mark all free
    for (int i = 0; i < 3; i++) {
        blocks[i].start_address = malloc(100);
        blocks[i].size = 100;
        blocks[i].is_free = 1;
    }
    return 0;
}
