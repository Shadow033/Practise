#include <stdio.h>

int main()
{
    int n;
    printf("Enter the rows/columns : ");
    scanf("%d", &n);
    int arr[n][n];
    printf("Enter the elements of matrix : ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The entered matrix is : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("The wave print of matrix is : \n");
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d ", arr[i][j]);
            }
        }
        else
        {
            for (int j = n - 1; j >= 0; j--)
            {
                printf("%d ", arr[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}