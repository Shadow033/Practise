#include <stdio.h>

void reverseArray(int arr[], int a, int b);
void rotateArray(int arr[], int a, int b);
int main()
{
    int n, arr[n], index;
    printf("Enter the size of the Array : ");
    scanf("%d", &n);
    printf("Enter the elements of Array : ");
    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the Steps to Rotate the Array : ");
    scanf("%d", &index);
    printf("The Entered Array is : ");
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nThe Rotated Array by %d Steps is : ", index);
    index = index % n;
    rotateArray(arr, index, n - 1);
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

void reverseArray(int arr[], int a, int b)
{
    for (int i = a, j = b; i <= j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}

void rotateArray(int arr[], int a, int b)
{
    reverseArray(arr, 0, b);
    reverseArray(arr, 0, a-1);
    reverseArray(arr, a, b);
    return;
}