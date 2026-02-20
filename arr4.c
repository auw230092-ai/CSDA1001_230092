#include <stdio.h>

long factorial(int n);

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    printf("Factorial: %ld\n", factorial(n));
    return 0;
}

long factorial(int n)
{
    long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}
