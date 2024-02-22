#include <stdio.h>

int main()
{
    int n, num = 1;
    printf("Enter a positive number for row/column of Matrix : ");
    scanf("%d", &n);
    int a[n][n];
    int minr = 0, maxr = n - 1, minc = 0, maxc = n - 1, count = 0, tne = n * n;
    printf("Enter the elements of matrix : \n");
    while (count < tne)
    {
        for (int i = minc; i <= maxc && count < tne; i++)
        {
            a[minr][i] = num;
            num++;
            count++;
        }
        minr++;
        for (int j = minr; j <= maxr && count < tne; j++)
        {
            a[j][maxc] = num;
            num++;
            count++;
        }
        maxc--;
        for (int i = maxc; i >= minc && count < tne; i--)
        {
            a[maxr][i] = num;
            num++;
            count++;
        }
        maxr--;
        for (int j = maxr; j >= minr && count < tne; j--)
        {
            a[j][minc] = num;
            num++;
            count++;
        }
        minc++;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}