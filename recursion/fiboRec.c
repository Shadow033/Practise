#include <stdio.h>

int fibo(int n);

int main()
{
    int n;
    printf("Ennter the number for fibonacci : ");
    scanf("%d", &n);
    // int f = fibo(n);
    printf("The %d term of fibonacci number is : %d ", n, fibo(n)); // fibo(n) insted of f
    return 0;
}

int fibo(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    return fibo(n - 1) + fibo(n - 2);
}