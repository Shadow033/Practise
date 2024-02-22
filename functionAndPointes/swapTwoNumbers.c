#include <stdio.h>
int swap(int a, int b);
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Numbers before swapping a= %d and b= %d.\n", a, b);
    swap(a, b);
    return 0;
}

int swap(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
    printf("Swapped numbers a= %d and b= %d.", a, b);
    return 0;
}