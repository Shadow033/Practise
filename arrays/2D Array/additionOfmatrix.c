#include <stdio.h>

int main()
{
    int r, c;
    printf("Enter the rows and columns of the Matrix : ");
    scanf("%d %d", &r, &c);
    int arr[r][c], brr[r][c];
    printf("Enter the elements of Matrix A : ");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Enter the elements of Matrix B : ");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &brr[i][j]);
        }
    }
    printf("The Matrix A : \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("\nThe Matrix B : \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d\t", brr[i][j]);
        }
        printf("\n");
    }
    printf("\nThe sum of Matrix A and B is : \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d\t", arr[i][j] + brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}