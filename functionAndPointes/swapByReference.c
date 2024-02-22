#include <stdio.h>

void swap(int* x, int* y);
int main()
{
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    printf("The numbers before swapping a=%d and b=%d.\n",a,b);
    swap(&a, &b);
    printf("The numbers before swapping a=%d and b=%d.\n",a,b);
    return 0;
}

void swap(int *x, int *y)
{
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
    return;
}