#include <stdio.h>

int main()
{
    int n;
    printf("enter the size of array : ");
    scanf("%d", &n);
    int a[n], b[n];
    printf("enter the elements of array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The entered array is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        b[i] = a[n - 1 - i];
    }
    printf("\nThe reverse of entered array is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}