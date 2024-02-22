#include <stdio.h>

int gcd(int a, int b);
int min(int a, int b);

int main()
{
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);

    int hcf = gcd(a, b);

    printf("The HCF/GCD of %d and %d is : %d", a, b, hcf);

    return 0;
}

int gcd(int a, int b)
{
    int hcf;
    for (int i = min(a, b); i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
            break;
        }
    }
    return hcf;
}

int min(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}