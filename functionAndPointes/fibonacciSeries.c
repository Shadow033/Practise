#include <stdio.h>

void fibonacci(int n);

int main()
{
    int n;
    printf("Enter the number for fibonacci series :");
    scanf("%d", &n);
    printf("The fibonacci series upto %d is : 1 1 ", n);
    fibonacci(n);
    return 0;
}

void fibonacci(int n)
{
    int temp1 = 1, temp2 = 1, fibonacci;

    for (int i = 1; i <= n - 2; i++)
    {
        fibonacci = temp1 + temp2;
        temp1 = temp2;
        temp2 = fibonacci;
        printf("%d ", fibonacci);
    }
    return;
}