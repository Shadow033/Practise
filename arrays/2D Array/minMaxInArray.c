#include <stdio.h>

int main()
{
    int r, c, mini=0, minj=0, k=0, l=0;
    printf("Enter the row and column of matrix : ");
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
    int max = arr[0][0];
    int min = arr[0][0];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {

            if (min > arr[i][j])
            {
                min = arr[i][j];
                mini = i;
                minj = j;
            }
            if (max < arr[i][j])
            {
                max = arr[i][j];
                k = i;
                l = j;
            }
        }
    }
    printf("The min element of Array is %d and its index is (%d,%d) \n", min, mini, minj);
    printf("The max element of Array is %d and its index is (%d,%d) \n", max, k, l);
    return 0;
}