#include <stdio.h>

int is_leap(int year);

int main()
{
    int year;
    printf("Enter year: ");
    scanf("%d", &year);

    if (is_leap(year))
        printf("Leap Year\n");
    else
        printf("Not Leap Year\n");

    return 0;
}

int is_leap(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        return 1;
    else
        return 0;
}
