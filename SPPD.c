#include <stdio.h>
#include <stdlib.h>

#define MAX 5  // Defining maximum size of stack

int stack[MAX], top = -1;

void push() {
    int val;
    if (top == MAX - 1) {
        printf("\nStack Overflow! Cannot add more elements.");
    } else {
        printf("Enter the value to push: ");
        scanf("%d", &val);
        top++;
        stack[top] = val;
        printf("Value pushed successfully.");
    }
}

void pop() {
    if (top == -1) {
        printf("\nStack Underflow! No elements to pop.");
    } else {
        printf("Popped element: %d", stack[top]);
        top--;
    }
}

void display() {
    if (top == -1) {
        printf("\nStack is empty.");
    } else {
        printf("\nStack elements: ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
    }
}

int main() {
    int choice;
    while (1) {
        printf("\n\n--- Stack Menu ---");
        printf("\n1. PUSH\n2. POP\n3. DISPLAY\n4. EXIT");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: exit(0);
            default: printf("Invalid choice, try again.");
        }
    }
    return 0;
}