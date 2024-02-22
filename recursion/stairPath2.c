#include <stdio.h>

int stair(int n);

int main()
{
    int n;
    printf("Enter the number of stairs : ");
    scanf("%d", &n);
    int ways = stair(n);
    printf("The number of ways is : %d", ways);
    return 0;
}

int stair(int n)
{
    if (n <= 2)
    {
        return n;
    }
    if(n==3){
        return n+1;
    }
    int totalWays = stair(n - 1) + stair(n - 2) + stair(n-3);
    return totalWays;
}