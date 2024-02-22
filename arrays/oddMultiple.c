#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of Array : ");
    scanf("%d", &n);
    printf("Enter the Elements : ");
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The Array you Entered is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nThe Array in which Odd index multiplied by 2 and Even index is added by 10 is : ");
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            arr[i] += 10;
            printf("%d ", arr[i]);
        }
        else
        {
            arr[i] *= 2;
            printf("%d ", arr[i]);
        }
    }
    return 0;
}