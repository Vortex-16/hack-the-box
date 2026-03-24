#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int queue[MAX], front = -1, rear = -1;

void insert() {
    int val;
    if (rear == MAX - 1) {
        printf("\nQueue Overflow!");
    } else {
        printf("Enter value to insert: ");
        scanf("%d", &val);
        if (front == -1) front = 0;
        rear++;
        queue[rear] = val;
    }
}

void delete() {
    if (front == -1 || front > rear) {
        printf("\nQueue Underflow!");
    } else {
        printf("Deleted: %d", queue[front]);
        front++;
    }
}

void display() {
    if (front == -1 || front > rear) {
        printf("\nQueue is empty.");
    } else {
        printf("\nQueue elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
    }
}

int main() {
    int choice;
    while (1) {
        printf("\n\n--- Linear Queue Menu ---");
        printf("\n1. Insert\n2. Delete\n3. Display\n4. Exit\nChoice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: insert(); break;
            case 2: delete(); break;
            case 3: display(); break;
            case 4: exit(0);
        }
    }
}