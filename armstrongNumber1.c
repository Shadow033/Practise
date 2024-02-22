#include <stdio.h>
#include <math.h>

int main()
{
    int rem;
    printf("Armstrong Numbers are : ");

    for (int i = 1; i <= 500; i++)
    {
        int temp = i;
        int sum = 0;
        while (temp > 0)
        {
            rem = temp % 10;
            sum = sum + rem * rem * rem; // pow(rem, 3)
            temp = temp / 10;
        }

        if (i == sum)
        {
            printf("%d ", i);
        }
    }
}