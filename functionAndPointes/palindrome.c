#include <stdio.h>

int palindrome(int n);

int main()
{
    int n;
    printf("Enter the number the to reverse and check palindrome : ");
    scanf("%d", &n);
    int reverse = palindrome(n);
    if (n == reverse)
    {
        printf("The reverse of the number %d is : %d \n", n, reverse);
        printf("The entered number is Palindrome.");
    }
    else
    {
        printf("The reverse of the number %d is : %d \n", n, reverse);
        printf("The entered number is not a Palindrome.");
    }
    return 0;
}

int palindrome(int n)
{
    int rem, rev = 0;
    while (n > 0)
    {
        rem = n % 10;
        n = n / 10;
        rev = (rev * 10) + rem;
    }
    return rev;
}