#include <stdio.h>

int main() {
    int n;

    // Get the number of rows/columns
    printf("Enter the rows/columns: ");
    scanf("%d", &n);

    // Validate the input
    if (n <= 0) {
        printf("Invalid input. Please enter a positive integer for rows/columns.\n");
        return 1;  // Exit the program with an error code
    }

    int arr[n][n];

    // Get the elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Print the entered matrix
    printf("The entered matrix is:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Print the zigzag pattern with alternating "up, down" and "down, up" sequences for each column
    printf("The zigzag pattern of the matrix is:\n");
    for (int j = 0; j < n; j++) {
        if (j % 2 == 0) {
            // "up, down" sequence
            for (int i = 0; i < n; i++) {
                printf("%d ",arr[i][j]);
            }
        } else {
            // "down, up" sequence
            for (int i = n - 1; i >= 0; i--) {
                printf("%d ",arr[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
