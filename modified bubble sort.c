#include <stdio.h>

int main() {
    int arr[100], n, i, j, temp, swapped;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n - 1; i++) {
        swapped = 0; // Reset flag for each pass
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1; // Mark that a swap happened
            }
        }
        // If no two elements were swapped by inner loop, then break
        if (swapped == 0)
            break;
    }

    printf("Sorted list in ascending order:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}