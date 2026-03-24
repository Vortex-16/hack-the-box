#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void create() {
    int val;
    struct node *newNode, *temp;
    printf("Enter data (-1 to stop): ");
    while (scanf("%d", &val) && val != -1) {
        newNode = (struct node*)malloc(sizeof(struct node));
        newNode->data = val;
        newNode->next = NULL;
        if (head == NULL) head = newNode;
        else {
            temp = head;
            while (temp->next != NULL) temp = temp->next;
            temp->next = newNode;
        }
        printf("Enter data: ");
    }
}

void insertBefore() {
    int val, target;
    struct node *newNode, *ptr, *preptr;
    printf("Enter value to insert: ");
    scanf("%d", &val);
    printf("Enter target value (to insert before): ");
    scanf("%d", &target);

    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = val;

    ptr = head;
    if (ptr->data == target) { // Case: Target is the first node
        newNode->next = head;
        head = newNode;
    } else {
        while (ptr != NULL && ptr->data != target) {
            preptr = ptr;
            ptr = ptr->next;
        }
        if (ptr == NULL) printf("Target node not found!\n");
        else {
            preptr->next = newNode;
            newNode->next = ptr;
        }
    }
}

void display() {
    struct node *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    int choice;
    while (1) {
        printf("\n1. Create\n2. Insert Before\n3. Display\n4. Exit\nChoice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: create(); break;
            case 2: insertBefore(); break;
            case 3: display(); break;
            case 4: exit(0);
        }
    }
}