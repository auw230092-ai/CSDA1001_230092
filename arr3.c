#include <stdio.h>

void count_even_odd(int arr[], int n, int *even, int *odd);

int main()
{
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int even = 0, odd = 0;
    count_even_odd(arr, n, &even, &odd);

    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);

    return 0;
}

void count_even_odd(int arr[], int n, int *even, int *odd)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            (*even)++;
        else
            (*odd)++;
    }
}
