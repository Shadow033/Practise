#include <stdio.h>

int main()
{
    int n;
    int marks[n];
    printf("Enter number of students : ");
    scanf("%d", &n);
    
    printf("Enter the marks of %d students : ", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i <= n-1; i++)
    {
        if (marks[i] <= 35)
        {
            printf("Failed %d\n", i);
        }
    }
    return 0;
}