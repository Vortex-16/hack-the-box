#include <stdio.h>

int main() {
    int arr[100], position, i, n;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the location where you wish to delete element: ");
    scanf("%d", &position);

    if (position >= n + 1 || position < 1) {
        printf("Deletion not possible.\n");
    } else {
        for (i = position - 1; i < n - 1; i++)
            arr[i] = arr[i + 1];

        printf("Resultant array:\n");
        for (i = 0; i < n - 1; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }

    return 0;
}