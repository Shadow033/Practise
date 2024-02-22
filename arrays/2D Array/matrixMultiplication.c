#include <stdio.h>

int main()
{
    int r1, c1, r2, c2;
    printf("Enter the rows and columns of Matrix A : ");
    scanf("%d %d", &r1, &c1);
    printf("Enter the rows and columns of Matrix B : ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2)
    {
        printf("These two matrix can not be multiplied ");
    }
    else
    {
        int a[r1][c1], b[r2][c2], mul[r1][c2];
        printf("Enter the elements of matrix A : ");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("Enter the elements of matrix B : ");
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        printf("The Matrix A : \n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
        printf("The Matrix B : \n");
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("%d ", b[i][j]);
            }
            printf("\n");
        }
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                mul[i][j] = 0;
                for (int k = 0; k < c1; k++)
                {
                    mul[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        printf("The Multiplication Of Matrix A and B is : \n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("%d ", mul[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}