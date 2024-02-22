#include <stdio.h>

void reverse(int a[]);

int main()
{
    int arr[5] = {2, 3, 5, 1, 7};
    reverse(arr);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

void reverse(int a[])
{
    int tmp;
    int i = 0;
    int j = 4;
    while (i <= j)
    {
        tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
        i++;
        j--;
    }
}