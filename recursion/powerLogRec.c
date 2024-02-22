#include <stdio.h>

int powerlog(int a, int b);

int main()
{
    int a, b;
    printf("Enter the Base and Power : ");
    scanf("%d %d", &a, &b);
    int p = powerlog(a, b);
    printf("The answer of %d to the power %d is : %d ", a, b, p);
}

int powerlog(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    if (b == 1)
        return a;
    int x = powerlog(a, b / 2);

    if (b % 2 == 0)
    {
        return x * x;
    }
    else
    {
        return x * x * a;
    }
}