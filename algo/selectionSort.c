#include <stdio.h>

int main()
{
    int n, arr[n];
    printf("Enter the size of Array : ");
    scanf("%d", &n);
    printf("Enter the Elements of Array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Entered Array is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        int min = arr[i];
        int minIdx = i;
        for (int j = i; j < n; j++)
        {
            if (min > arr[j])
            {
                min = arr[j];
                minIdx = j;
            }
        }
        int temp = arr[minIdx];
            arr[minIdx] = arr[i];
            arr[i] = temp;
    }
    printf("\nThe sorted Array (Selection sort) is : ");
    for (int i = 0; i < n ; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}