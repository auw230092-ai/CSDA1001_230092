#include <stdio.h>

float fahrenheit(float c);

int main()
{
    float c;
    printf("Enter Celsius: ");
    scanf("%f", &c);

    printf("Fahrenheit: %.2f\n", fahrenheit(c));
    return 0;
}

float fahrenheit(float c)
{
    return (c * 9 / 5) + 32;
}
