#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

void insert() {
    int val;
    if ((rear + 1) % MAX == front) {
        printf("\nQueue Overflow!");
    } else {
        printf("Enter value to insert: ");
        scanf("%d", &val);
        if (front == -1) front = 0;
        rear = (rear + 1) % MAX;
        queue[rear] = val;
    }
}

void delete() {
    if (front == -1) {
        printf("\nQueue Underflow!");
    } else {
        printf("Deleted: %d", queue[front]);
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % MAX;
        }
    }
}

void display() {
    if (front == -1) {
        printf("\nQueue is empty.");
    } else {
        int i = front;
        printf("\nQueue elements: ");
        while (1) {
            printf("%d ", queue[i]);
            if (i == rear) break;
            i = (i + 1) % MAX;
        }
    }
}

int main() {
    int choice;
    while (1) {
        printf("\n\n--- Circular Queue Menu ---");
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