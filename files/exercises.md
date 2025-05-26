## Basic Struct Pointer Access

Task: Define a Process struct with pid and state. Write a function that takes a
Process pointer and prints its fields.

## Simulated Memory Allocation Table

Task: Define a MemoryBlock struct with a start_address, size, and is_free flag.
Write a function that takes a pointer to an array of MemoryBlock structs and
sets one of them to "used".

## Linked List: Inserting a Node

Task: Define a Task struct that has a char name[32] and a Task next. Write a
function to insert a new Task after a given one.

## Simulated I/O Device

Task: Define a Device struct with id, status, and a void buffer. Write a
function that initializes a device and allocates a memory buffer.

## Lightweight Kernel Thread Control Block

Task: Define a Thread struct with fields like tid, priority, and void
(entry_point)(void). Write a function that sets up a new thread.

## Swap Two Structs via Pointers
 
Task: Define a FileDescriptor struct. Write a function that swaps two
FileDescriptor structs using pointers (don’t return anything).

## Build a Struct Array for File Metadata

Task: Define a FileMetadata struct with char name[64], size, and permissions.
Create an array of 10, and write a function to populate and print them using
pointer arithmetic.

## Device Driver Init Routine

Task: Define a Driver struct with fields for name, init(), and shutdown()
function pointers. Write a function that takes a pointer to Driver and calls
init().

## Simulate Page Table Entry Updates

Task: Define a PageTableEntry struct with fields for frame_number and present
bit. Write a function that sets an entry via a PageTableEntry.

## Process Scheduling Queue

Task: Define a Process struct with pid, priority, and a Process *next. Write a
function to enqueue and dequeue processes from a priority-based scheduler queue
(linked list).
