#include <stdio.h>

int main()
{
    int r, c, sum = 0;
    printf("Enter the rows and column of the matix : ");
    scanf("%d %d", &r, &c);
    int arr[r][c];
    printf("Enter the elements of the matrix : ");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum += arr[i][j];
        }
    }
    printf("The sum of the array is : %d ", sum);
    return 0;
}