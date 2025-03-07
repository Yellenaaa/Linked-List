#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void push_back(Node* head, int value){
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = value;
    new_node->next = NULL;

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new_node;
}