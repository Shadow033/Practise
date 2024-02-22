#include <stdio.h>

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int x;
    printf("Enter the number : ");
    scanf("%d", &x);
    int count = 0;
    for (int i = 0; i <= 9; i++) // or initial i =x and remove if condition
    {
        if (a[i] > x)
            count++;
    }
    printf("The number of elements after %d is %d ", x, count);
    return 0;
}