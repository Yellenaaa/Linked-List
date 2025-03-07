#include <stdio.h>
#include "list.h"

int getSize(Node* head) {
    int size = 0;
    Node* temp = head;
    while (temp != NULL) {
        size++;
        temp = temp->next;
    }
    return size;
}
