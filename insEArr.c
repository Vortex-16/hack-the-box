#include <stdio.h>

int main() {
    int arr[100], n, i, position, value;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the location where you want to insert an element: ");
    scanf("%d", &position);

    printf("Enter the value to insert: ");
    scanf("%d", &value);

    // Shift elements to the right
    for (i = n - 1; i >= position - 1; i--)
        arr[i + 1] = arr[i];

    arr[position - 1] = value;

    printf("Resultant array is:\n");
    for (i = 0; i <= n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}