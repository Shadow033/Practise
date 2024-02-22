#include <stdio.h>
void swap(int a, int b);
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Numbers before swapping a= %d and b= %d.\n", a, b);
    swap(a, b);
    return 0;
}

void swap(int a, int b)
{
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Swapped numbers a= %d and b= %d.", a, b);
    return;
}