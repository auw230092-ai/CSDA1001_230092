#include <stdio.h>

int sign(int n);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int result = sign(n);

    if (result == 1)
        printf("Positive\n");
    else if (result == -1)
        printf("Negative\n");
    else
        printf("Zero\n");

    return 0;
}

int sign(int n)
{
    if (n > 0) return 1;
    else if (n < 0) return -1;
    else return 0;
}
