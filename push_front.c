#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void push_front(Node** head, int value) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = value;
    new_node->next = *head;
    *head = new_node;
}
