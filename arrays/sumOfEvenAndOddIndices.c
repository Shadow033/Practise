#include <stdio.h>

int main()
{
    int n, sumEven = 0, sumOdd = 0;
    printf("Enter the size of the Array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of Array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The Entered Array is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            sumEven += arr[i];
        }
        else
        {
            sumOdd += arr[i];
        }
    }
    printf("\nThe difference is : %d ", sumEven - sumOdd);
    return 0;
}