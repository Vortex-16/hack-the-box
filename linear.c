#include <stdio.h>

int main() {
    int arr[100], n, i, search, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter value to find: ");
    scanf("%d", &search);

    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            printf("%d is present at location %d.\n", search, i + 1);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("%d is not present in the array.\n", search);

    return 0;
}