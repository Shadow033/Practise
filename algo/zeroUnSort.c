#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int n, last;
    printf("Enter the Array Size : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of Array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element/number you want to move to last : ");
    scanf("%d", &last);

    printf("The Entered Array is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        bool flag = true;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] == last)
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = false;
            }
        }
        if (flag == true)
        {
            break;
        }
    }
    printf("\nThe Sorted Array is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}