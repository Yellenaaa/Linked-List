#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void insert_After2(Node *head, int key, int now_data){
    Node* temp = head;

    while (temp != NULL && temp->data != key) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("The given key is not present in the list\n");
        return;
    }

    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = new_data;
    new_node->next = temp->next;
    temp->next = new_node;

}