#include <stdio.h>

int sum(int n);

int main()
{
    int n;
    printf("Enter the number ");
    scanf("%d", &n);
    int su = sum(n);
    printf("The sum of %d number is %d ", n, su);
}

int sum(int n)
{
    if (n == 1 || n == 0)
    {
        return n;
    }
    return n + sum(n - 1);
}