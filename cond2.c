#include <stdio.h>

char grade(int marks);

int main()
{
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);

    printf("Grade: %c\n", grade(marks));
    return 0;
}

char grade(int marks)
{
    if (marks >= 80) return 'A';
    else if (marks >= 70) return 'B';
    else if (marks >= 60) return 'C';
    else if (marks >= 50) return 'D';
    else return 'F';
}
