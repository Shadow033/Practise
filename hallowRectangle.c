#include <stdio.h>

int main()
{
    int n, c;
    printf("Enter the number of rows : \n");
    scanf("%d", &n);
    printf("Enter the number of columns : \n");
    scanf("%d", &c);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (i == 1 || j == 1 || i == n || j == c)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}