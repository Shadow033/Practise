#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number \n");
    scanf("%d", &n);
    //int nst = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= 2*i-1; k++)
        {
            printf("%d ",k);
        }
        //nst = nst + 2; // or use aithmetic progression k<=2*i-1
        printf("\n");
    }
    return 0;
}