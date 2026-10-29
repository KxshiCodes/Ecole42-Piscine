#include <stdio.h>
#include <string.h>

int main(void)
{
    // if / else if / else
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 0 || age > 120)
    {
        printf("Invalid age.\n");
    }
    else if (age < 18)
    {
        printf("You are not an adult.\n");
    }
    else
    {
        printf("You are an adult.\n");
    }

    // Multiple conditions
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }

    // Grading with else if
    int points;

    printf("Enter points [0-100]: ");
    scanf("%d", &points);

    if (points < 0 || points > 100)
    {
        printf("Invalid points.\n");
    }
    else if (points < 50)
    {
        printf("Failed\n");
    }
    else if (points < 60)
    {
        printf("Grade: 1\n");
    }
    else if (points < 70)
    {
        printf("Grade: 2\n");
    }
    else if (points < 80)
    {
        printf("Grade: 3\n");
    }
    else if (points < 90)
    {
        printf("Grade: 4\n");
    }
    else
    {
        printf("Grade: 5\n");
    }

    // String comparison
    char role[] = "admin";

    if (strcmp(role, "admin") == 0)
    {
        printf("You are an admin.\n");
    }
    else if (strcmp(role, "moderator") == 0)
    {
        printf("You are a moderator.\n");
    }
    else
    {
        printf("You are a guest.\n");
    }

    return 0;
}
