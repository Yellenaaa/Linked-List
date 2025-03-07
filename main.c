#include <stdio.h>
#include <stdbool.h>
#include "list.h"

int main() {
    Node* head = NULL;
    int choice;
    int value;
    int key;

    do {
        printf("\nMenu:\n");
        printf("1. Create list with first node\n");
        printf("2. Add element at the end\n");
        printf("3. Add element at the beginning\n");
        printf("4. Remove element from the end\n");
        printf("5. Insert element after a given node\n");
        printf("6. Insert element after a given key\n");
        printf("7. Delete node with a given value\n");
        printf("8. Check if list is empty\n");
        printf("9. Get size of the list\n");
        printf("10. Print list\n");
        printf("11. Clear the list\n");
        printf("12. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (head == NULL) {
                    printf("Enter value for the first node: ");
                    scanf("%d", &value);
                    head = constructor(value);
                } else {
                    printf("List already created. Clear the list first to create a new one.\n");
                }
                break;

            case 2:
                if (head != NULL) {
                    printf("Enter value to add at the end: ");
                    scanf("%d", &value);
                    push_back(head, value);
                } else {
                    printf("Create the list first.\n");
                }
                break;

            case 3:
                printf("Enter value to add at the beginning: ");
                scanf("%d", &value);
                push_front(&head, value);
                break;

            case 4:
                if (head != NULL) {
                    pop_back(head);
                } else {
                    printf("List is empty.\n");
                }
                break;

            case 5:
                if (head != NULL) {
                    printf("Enter value to insert after and new value: ");
                    scanf("%d %d", &key, &value);
                    insert_After2(head, key, value);
                } else {
                    printf("List is empty.\n");
                }
                break;

            case 6:
                if (head != NULL) {
                    printf("Enter key and value to insert after key: ");
                    scanf("%d %d", &key, &value);
                    insert_After2(head, key, value);
                } else {
                    printf("List is empty.\n");
                }
                break;

            case 7:
                if (head != NULL) {
                    printf("Enter value to delete: ");
                    scanf("%d", &key);
                    deleteNode(&head, key);
                } else {
                    printf("List is empty.\n");
                }
                break;

            case 8:
                printf("List is %sempty.\n", is_empty(head) ? "" : "not ");
                break;

            case 9:
                printf("Size of the list: %d\n", getSize(head));
                break;

            case 10:
                print_list(head);
                break;

            case 11:
                destructor(head);
                head = NULL;
                printf("List cleared.\n");
                break;

            case 12:
                destructor(head);
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 12);

    return 0;
}
