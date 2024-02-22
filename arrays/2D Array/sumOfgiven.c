#include <stdio.h>

int main()
{
    int r, c, sum = 0, l1, r1, l2, r2;
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
    printf("The array is : \n");
     for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\nEnter the rectangular l1,r1,l2,r2 : ");
    scanf("%d %d %d %d", &l1, &r1, &l2, &r2);
    for (int i = l1; i <= l2; i++)
    {
        for (int j = r1; j <= r2; j++)
        {
            sum += arr[i][j];
        }
    }
    printf("The sum of the array is : %d ", sum);
    return 0;
}