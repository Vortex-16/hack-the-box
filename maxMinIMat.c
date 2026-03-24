#include <stdio.h>

int main() {
    int m, n, i, j, matrix[10][10], max, min;

    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);

    printf("Enter elements:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    max = min = matrix[0][0];

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (matrix[i][j] > max) max = matrix[i][j];
            if (matrix[i][j] < min) min = matrix[i][j];
        }
    }

    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}