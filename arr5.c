#include <stdio.h>

// Function prototype
int is_palindrome(int arr[], int len);

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    int temp = n;
    int len = 0;

    // Count digits
    while (temp > 0)
    {
        len++;
        temp /= 10;
    }

    int arr[len];
    temp = n;

    // Store digits in array
    for (int i = len - 1; i >= 0; i--)
    {
        arr[i] = temp % 10;
        temp /= 10;
    }

    if (is_palindrome(arr, len))
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}

// Function to check palindrome
int is_palindrome(int arr[], int len)
{
    for (int i = 0; i < len / 2; i++)
    {
        if (arr[i] != arr[len - 1 - i])
            return 0;
    }

    return 1;
}
