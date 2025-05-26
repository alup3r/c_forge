#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
    int value;
    struct Node *next;
} Node;


Node *create_node(int value) {
    Node *new_node = (Node*)malloc(sizeof(Node));
    if (new_node == NULL)
        return NULL;
    new_node->value = value;
    new_node->next = NULL;
    return new_node;
}


Node *add_node(Node **head, int value) {
    Node *new_node = create_node(value);
    if (*head == NULL) {
        *head = new_node;
    } else {
        Node *temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
    return *head;
}


void print_list(Node **head) {
    Node *temp = *head;
    while (temp != NULL) {
        printf("%d -> ", temp->value);
        temp = temp->next;
    }
}


void free_list(Node **head) {
    Node *current = *head;
    Node *next;

    while (current != NULL) {
        next = current->next;  // Save the next pointer before freeing
        free(current);         // Free the current node
        current = next;        // Move to the next node
    }

    *head = NULL;  // Set head to NULL to indicate empty list
}


int main() {
    Node *node = create_node(4);
    return 0;
}
