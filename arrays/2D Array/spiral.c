#include <stdio.h>

int main()
{
    int r, c;
    printf("Enter the rows and columns of the matrix : ");
    scanf("%d %d", &r, &c);
    int arr[r][c];
    printf("Enter the elements of matrix : ");
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
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    printf("The spiral of matrix is : \n");
    int minr = 0, maxr = r - 1, minc = 0, maxc = c - 1, count = 0, tne = r * c;
    while (count < tne)
    {
        for (int i = minc; i <= maxc && count < tne; i++)
        {
            printf("%d ", arr[minr][i]);
            count++;
        }
        minr++;
        for (int j = minr; j <= maxr && count < tne; j++)
        {
            printf("%d ", arr[j][maxc]);
            count++;
        }
        maxc--;
        // if condition or &&count < tne in for condition
        if (count >= tne)
        {
            break;
        }
        for (int i = maxc; i >= minc; i--)
        {
            printf("%d ", arr[maxr][i]);
            count++;
        }
        maxr--;
        for (int j = maxr; j >= minr && count < tne; j--)
        {
            printf("%d ", arr[j][minc]);
            count++;
        }
        minc++;
    }

    return 0;
}
