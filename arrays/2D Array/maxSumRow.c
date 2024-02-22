#include <stdio.h>

int main()
{
    int r, c, maxSum = 0, maxIndex = 0;
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
    printf("The entered matrix is : \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < r; i++)
    {
        int sum = 0;
        for (int j = 0; j < c; j++)
        {
            sum += arr[i][j];
        }
        if (maxSum < sum)
        {
            maxSum = sum;
            maxIndex = i;
        }
    }
    printf("The maximum sum of the row in array is : %d and row is : %d ", maxSum, maxIndex);
    return 0;
}