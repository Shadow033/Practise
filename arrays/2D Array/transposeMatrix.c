#include <stdio.h>

int main()
{
    int r, c;
    printf("Enter the number of rows and column : ");
    scanf("%d %d", &r, &c);
    int arr[r][c], brr[c][r];
    printf("Enter the elements of the matrix : ");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The entered matrix is : \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("The Transpose of the entered matrix is : \n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            brr[i][j] = arr[j][i];
            printf("%d ", brr[i][j]);
        }
        printf("\n");
    }
}