#include <stdio.h>

int main()
{
    int arr[5] = {2, 3,-5, 1, 7};
    int min = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("Minimum is %d ", min);
    return 0;
}