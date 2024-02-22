#include <stdio.h>

int main()
{
    int n, x, count = 0;
    printf("enter the size of array : ");
    scanf("%d", &n);
    int a[n];
    printf("enter the elements of array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the number for you want pairs : ");
    scanf("%d", &x);
    printf("The entered array is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    
    printf("\nThe pairs are :");

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (a[i] + a[j] + a[k] == x) // or a[i]+a[j]==x;
                {
                    count++;
                    printf("\n(%d,%d,%d)", a[i], a[j], a[k]);
                }
            }
        }
    }
    printf("\nTotal Number of pairs which has sum = %d is : %d", x, count);
    return 0;
}