#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int nsp = 1;
    int nst = n;

    for(int l=1; l<=2*n+1; l++){
        printf("*");
    }
    printf("\n");

    for (int i = 0; i <= n; i++)
    {

        for (int j = 1; j <= nst; j++)
        {
            printf("*");
        }
        for (int k = 1; k <= nsp; k++)
        {
            printf(" ");
        }
        for (int k = 1; k <= nst; k++)
        {
            printf("*");
        }
        nst--;
        nsp += 2;
        printf("\n");
    }
}