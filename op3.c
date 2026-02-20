#include <stdio.h>

int is_even(int n);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (is_even(n))
        printf("Even\n");
    else
        printf("Odd\n");

    return 0;
}

int is_even(int n)
{
    return n % 2 == 0;
}
