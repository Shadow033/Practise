#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of Array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of Array : ");
    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The Entered Array is : ");
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    for (int i = 0, j = n - 1; i <= j; i++, j--)
    {
        if (arr[i] != arr[j])
        {
            printf("\nThe entered Array is not palindrome.");
            break;
        }
        else if (i == j || arr[i] == arr[j-1])
        {
            printf("\nThe Entered Array is Palindrome.");
        }
    }
    return 0;
}


    // int isPalindrome = 1; // Assume it's a palindrome

    // for (int i = 0, j = n - 1; i <= j; i++, j--)
    // {
    //     if (arr[i] != arr[j])
    //     {
    //         isPalindrome = 0; // Set flag to false
    //         break;
    //     }
    // }

    // if (isPalindrome)
    // {
    //     printf("\nThe Entered Array is Palindrome.");
    // }
    // else
    // {
    //     printf("\nThe entered Array is not palindrome.");
    // }