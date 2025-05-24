#ifndef NODE_H
#define NODE_H

typedef struct Node {
    int value;
    struct Node *next;
} Node;

Node *create_node(int value);

#endif // !NODE_H
