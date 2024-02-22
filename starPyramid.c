#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number \n");
    scanf("%d", &n);
    int nst = 1;
    int nsp = n-1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nsp; j++) //or j<= n-i;
        {
            printf("  ");
        }
        for (int k = 1; k <= nst; k++)
        {
            printf("* ");
        }
        nst = nst + 2; // or use aithmetic progression k<=2*i-1
        nsp--;
        printf("\n");
    }
    return 0;
}