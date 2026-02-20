#include <stdio.h>

int ticket_price(int age, int student);

int main()
{
    int age, student;
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Student? (1 = Yes, 0 = No): ");
    scanf("%d", &student);

    printf("Ticket Price: %d\n", ticket_price(age, student));
    return 0;
}

int ticket_price(int age, int student)
{
    if (age < 12)
        return 50;
    else if (age <= 60)
    {
        if (student == 1)
            return 80;
        else
            return 100;
    }
    else
        return 60;
}
