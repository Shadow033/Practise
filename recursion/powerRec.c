#include <stdio.h>

int power(int a, int b);

int main()
{
    int a, b;
    printf("Enter Base and Power numbers : ");
    scanf("%d %d", &a, &b);
    int p = power(a, b);
    printf("The power of %d to the %d is : %d ", a, b, p);
}

int power(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    int s = a * power(a, b - 1);
    return s; // or return = a * power(a,b-1)
}