#include <stdio.h>

int main()
{
    int n;
    printf("enter the number: \n");
    scanf("%d", &n);
    int sum = 0;
    while (n != 0)
    {
        int rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }
    printf("sum of digits is : %d\n", sum);
}