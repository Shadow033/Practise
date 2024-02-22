#include <stdio.h>

int main()
{
    int arr[5] = {2, 3, 5, 1, 7};
    int min = arr[0];
    int smin = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (min > arr[i])
        {
            smin = min;
            min = arr[i];
        }
        else if (smin > arr[i] && min != arr[i])
        {
            smin = arr[i];
        }
    }
    printf("Minimum is %d ", smin);
    return 0;
}