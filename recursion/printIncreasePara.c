#include <stdio.h>

void increasing(int x, int n);

int main()
{
    int n;
    printf("Enter the number ");
    scanf("%d", &n);
    int x = 1;
    increasing(x, n);
    return 0;
}
void increasing(int x, int n)
{
    if (x > n)
    {
        return;
    }
    printf("%d\n", x);
    increasing(x + 1, n);

    return;
}