#include <stdio.h>

int main()
{
    int arr[5][5],n;
    printf("Enter the number you want to store : ");
    scanf("%d",&n);
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         arr[i][j] = n;
    //     }
    // }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d\t", arr[i][j]=n);
        }
        printf("\n");
    }
    return 0;
}