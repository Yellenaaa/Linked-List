#include <stdio.h>
#include <stdlib.h>
#include "list.h"

Node* constructor(int value){
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = value;
    new_node->next = NULL;
    return new_node;
}