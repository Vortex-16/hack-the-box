#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void insertEnd() {
    int val;
    struct node *newNode, *temp;
    printf("Enter value to insert at end: ");
    scanf("%d", &val);
    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = NULL;
    if (head == NULL) head = newNode;
    else {
        temp = head;
        while (temp->next != NULL) temp = temp->next;
        temp->next = newNode;
    }
}

void deleteBeg() {
    if (head == NULL) printf("List is empty!\n");
    else {
        struct node *temp = head;
        head = head->next;
        printf("Deleted: %d\n", temp->data);
        free(temp);
    }
}

void display() {
    struct node *temp = head;
    if (!temp) printf("Empty List");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    int choice;
    while (1) {
        printf("\n1. Insert at End\n2. Delete from Beginning\n3. Display\n4. Exit\nChoice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: insertEnd(); break;
            case 2: deleteBeg(); break;
            case 3: display(); break;
            case 4: exit(0);
        }
    }
}