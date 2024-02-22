#include <stdio.h>

int main()
{
    int n, min = 0, smin = 0;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of Array (use only 0-9) : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The Entered Array is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    for (int i = 1; i <= n - 1; i++)
    {
        int j = i;
        while (j >= 1 && arr[j] < arr[j - 1])
        {
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        min *= 10;
        min += arr[i];
    }
    printf("\nMinimum Number is : %d ", min);

    for (int i = n - 1; i >= 0; i--)
    {
        if (i > 0 && arr[i] != arr[i - 1])
        {
            int temp = arr[i];
            arr[i] = arr[i - 1];
            arr[i - 1] = temp;
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        smin *= 10;
        smin += arr[i];
    }
    printf("\nSecond Minimum Number is : %d \n", smin);
    printf("The sum of two possible minimum numbers is : %d ", min + smin);
    return 0;
}