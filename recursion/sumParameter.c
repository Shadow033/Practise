#include <stdio.h>

void sum(int n, int s);

int main()
{
    int n;
    printf("Enter the number ");
    scanf("%d", &n);
    int s = 0;
    sum(n, s);
    return 0;
}

void sum(int n, int s)
{
    if (n == 0)
    {
        printf("%d", s);
        return;
    }
    sum(n - 1, s + n);
    return;
}