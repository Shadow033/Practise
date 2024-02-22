#include <stdio.h>

int main()
{
    int n, sum = 0, arr[n];
    printf("Enter the array size : ");
    scanf("%d", &n);
    printf("Enter the elements of array : ");
    for (int i = 0; i <= n - 2; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i <= n - 2; i++)
    {
        sum += arr[i];
    }
    int sum2 = n * (n + 1) / 2;
    int x = sum2 - sum;
    printf("The missing number is %d ", x);
}