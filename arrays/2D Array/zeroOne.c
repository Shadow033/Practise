#include <stdio.h>

int main()
{
    int r, c, maxCount = 0, maxIndex = 0;
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
        int count = 0;
        for (int j = 0; j < c; j++)
        {
            if(arr[i][j]==1){
                count++;
            }
        }
        if (maxCount < count)
        {
            maxIndex = i;
        }
    }
    printf("The row with maximum one in array is : %d ",maxIndex);
    return 0;
}