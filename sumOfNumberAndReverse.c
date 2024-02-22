#include <stdio.h>

int main()
{
    int n;
    printf("Enter the Number : \n");
    scanf("%d", &n);
    int temp = n;
    int reverse = 0;

    while (n != 0)
    {
        int rem = n % 10;
        n = n / 10;
        reverse = (reverse * 10) + rem;
    }
    int sum = temp + reverse;
    printf("The reverse of number you entered : %d \n", reverse);
    printf("The sum of %d and its reverse %d is : %d \n", temp, reverse, sum);
}