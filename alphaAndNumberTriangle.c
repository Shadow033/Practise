#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         if (i % 2 == 0)
    //         {
    //             printf("%c ", j + 64);
    //         }
    //         else
    //         {
    //             printf("%d ", j);
    //         }
    //     }
    //     printf("\n");
    // }

    for(int i = 1; i<=n; i++){
        int a = 1;
        for(int j=1; j<=i; j++){
            int d=a+64;
            char ch = (char)d;
            if(i%2==0){
                printf("%d ",a);
            } else {
                printf("%c ",ch);
            }
            a++;
        }
        printf("\n");
    }

}