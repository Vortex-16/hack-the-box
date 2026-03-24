#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int hashTable[SIZE];

void init() {
    for (int i = 0; i < SIZE; i++) hashTable[i] = -1; // -1 indicates empty
}

void insert(int key) {
    int index = key % SIZE;
    int i = 0;

    while (hashTable[(index + i) % SIZE] != -1) {
        i++;
        if (i == SIZE) {
            printf("Hash Table is full!\n");
            return;
        }
    }
    hashTable[(index + i) % SIZE] = key;
    printf("Inserted %d at index %d\n", key, (index + i) % SIZE);
}

void search(int key) {
    int index = key % SIZE;
    int i = 0;

    while (hashTable[(index + i) % SIZE] != key) {
        i++;
        if (i == SIZE || hashTable[(index + i) % SIZE] == -1) {
            printf("Element %d not found.\n", key);
            return;
        }
    }
    printf("Element %d found at index %d.\n", key, (index + i) % SIZE);
}

void display() {
    printf("\nHash Table Content:\n");
    for (int i = 0; i < SIZE; i++) {
        if (hashTable[i] != -1) printf("Index %d: %d\n", i, hashTable[i]);
        else printf("Index %d: EMPTY\n", i);
    }
}

int main() {
    int choice, key;
    init();
    while (1) {
        printf("\n1. Insert\n2. Search\n3. Display\n4. Exit\nChoice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: printf("Enter key: "); scanf("%d", &key); insert(key); break;
            case 2: printf("Enter key to search: "); scanf("%d", &key); search(key); break;
            case 3: display(); break;
            case 4: exit(0);
        }
    }
}