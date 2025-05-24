#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node *next;
} Node;

Node *create_node(int value) {
    Node *node = (Node*)malloc(sizeof(Node));
    if (node == NULL) {
        return NULL;
    }

    node->value = value;
    node->next = NULL;

    return node;
}


void insert_after(Node *node, int value) {
    if (node == NULL) return;

    Node *new_node = create_node(value);
    if (new_node == NULL) return;

    new_node->next = node->next;
    node->next = new_node;
}


void print_list(Node *head) {
    Node *current = head;
    while (current != NULL) {
        printf("%d -> ", current->value);
        current = current->next;
    }
    printf("NULL\n");
}


void free_list(Node *head) {
    Node *current = head;
    while (current != NULL) {
        Node *next = current->next;
        free(current);
        current = next;
    }
}


int main() {
    Node *head = create_node(2);
    if (head == NULL) {
        fprintf(stderr, "Failed to create head node\n");
    }

    insert_after(head, 4);
    insert_after(head->next, 6);
    print_list(head);

    free_list(head);
    return 0;
}
