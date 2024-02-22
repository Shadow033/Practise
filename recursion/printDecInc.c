#include <stdio.h>

void decInc(int n);

int main()
{
    int n;
    printf("Enter the number ");
    scanf("%d", &n);
    decInc(n);
    return 0;
}
void decInc(int n)
{
    if (n == 0)
    {
        return;
    }
    printf("%d\n", n);
    decInc(n - 1);
    printf("%d\n", n);
    return;
}