#ifndef LIST_H
#define LIST_H

#include <stdbool.h>

typedef struct Node{
    int data;
    struct Node *next;
} Node;

void destructor(Node *head);
Node* constructor(int value);

void push_back(Node *head, int value);
void push_front(Node **head, int value);
void pop_back(Node *head);

void insert_After1(Node *prev_node, int now_data);
void insert_After2(Node *head, int key, int now_data);

void delete_Node(Node *head, int key);
Node* delete_Node2(Node *head, int key);

bool is_empty(Node *head);
int getSize(Node *head);
void print_list(Node *head);
 
#endif //LIST_H

