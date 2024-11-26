#include <stdio.h>
#include <stdlib.h>

// Structure for a node
struct Node {
    int data;
    struct Node* next;
};

// Function prototypes
struct Node* insertAtEnd(struct Node* head, int value);
void searchElement(struct Node* head, int key);
void displayList(struct Node* head);

void main() {
    struct Node* head = NULL;
    int choice, value, key;

    do {
        printf("\n\nSingly Linked List Operations:");
        printf("\n1. Insert at End");
        printf("\n2. Search");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                head = insertAtEnd(head, value);
                break;

            case 2:
                printf("Enter element to search: ");
                scanf("%d", &key);
                searchElement(head, key);
                break;

            case 3:
                displayList(head);
                break;

            case 4:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice!\n");
        }
    } while(choice != 4);
}

// Function to insert a node at the end of the list
struct Node* insertAtEnd(struct Node* head, int value) {
    // Create new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    // If list is empty, make new node the head
    if (head == NULL) {
        head = newNode;
        printf("Node inserted successfully!");
        return head;
    }

    // Traverse to the last node
    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    // Add new node at the end
    temp->next = newNode;
    printf("Node inserted successfully!");
    return head;
}

// Function to search for an element in the list
void searchElement(struct Node* head, int key) {
    struct Node* temp = head;
    int position = 1;
    int found = 0;

    // If list is empty
    if (head == NULL) {
        printf("List is empty!");
        return;
    }

    // Traverse the list
    while (temp != NULL) {
        if (temp->data == key) {
            printf("Element %d found at position %d", key, position);
            found = 1;
            break;
        }
        temp = temp->next;
        position++;
    }

    if (!found) {
        printf("Element %d not found in the list!", key);
    }
}

// Function to display the list
void displayList(struct Node* head) {
    struct Node* temp = head;

    // If list is empty
    if (head == NULL) {
        printf("List is empty!");
        return;
    }

    printf("List elements are: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
