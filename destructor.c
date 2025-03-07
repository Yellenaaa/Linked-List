#include <stdio.h>
#include <stdlib.h> 
#include "list.h"

void destructor(Node* head) {
    Node* current = head;
    Node* next;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }

    head = NULL;
}