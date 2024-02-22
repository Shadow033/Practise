#include <stdio.h>

int main()
{
    int arr[5];
    for (int i = 0; i <= 4; i++)
    {
        printf("Enter the element number %d \n", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("The Entered numbers in reverse order is : ");
    for (int i = 4; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}