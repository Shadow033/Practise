#include <stdio.h>

int main()
{
    int n;
    printf("Enter Odd the Number : \n");
    scanf("%d", &n);
    int a = n / 2 + 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == a || i == a)
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
}