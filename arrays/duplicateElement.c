#include <stdio.h>

int main()
{
    int n, arr[n];
    printf("Enter the array size : ");
    scanf("%d", &n);
    printf("Enter the elements of Array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Entered elements of Array are : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nThe duplicate elements are : ");
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("\n(%d,%d)", i, j);
            }
        }
    }
    return 0;
}