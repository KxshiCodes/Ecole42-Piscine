
#include <stdio.h>
#include <string.h>

// Function prototypes.
// These tell the compiler which functions are defined below.
void check_age(void);
void calculate_grade(void);
void demonstrate_switch(void);

int main(void)
{
    // Call each function in order.
    // Each function handles one specific conditional example.
    check_age();
    calculate_grade();

    // This function does not need user input.
    demonstrate_switch();

    return 0; // Program finished successfully.
}

// Check whether a person is old enough to be an adult.
void check_age(void)
{
    int age;

    printf("How old are you? ");

    // Read an integer and check that the input is valid.
    if (scanf("%d", &age) != 1)
    {
        printf("Invalid input.\n");
        return; // Exit this function if input is not an integer.
    }

    // if checks the first condition.
    if (age < 0)
    {
        printf("Invalid age.\n");
    }
    // else if checks another condition if the first was false.
    else if (age < 18)
    {
        printf("You are not an adult.\n");
    }
    // else runs when none of the previous conditions were true.
    else
    {
        printf("You are an adult.\n");
    }
}

// Convert a score between 0 and 100 into a grade.
void calculate_grade(void)
{
    int points;

    printf("Give points [0-100]: ");

    if (scanf("%d", &points) != 1)
    {
        printf("Invalid input.\n");
        return;
    }

    // || means logical OR.
    // The score is invalid if either condition is true.
    if (points < 0 || points > 100)
    {
        printf("Invalid points!\n");
    }
    else if (points < 50)
    {
        printf("Grade: failed\n");
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
        // If the score reaches this point, it must be 90-100.
        printf("Grade: 5\n");
    }
}

// Demonstrate switch statements with a string and an integer.
void demonstrate_switch(void)
{
    // C does not support switching directly on strings.
    // Use if / else if with strcmp() to compare strings instead.
    char role[] = "admin";

    if (strcmp(role, "admin") == 0)
    {
        // strcmp() returns 0 when both strings are equal.
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

    // C switch statements work with integer-like values,
    // including int, char, and enum.
    int role_number = 1;

    switch (role_number)
    {
        case 1:
            printf("You are an admin.\n");
            break; // Exit the switch instead of continuing.
        case 2:
            printf("You are a moderator.\n");
            break;
        default:
            // Runs when no case matches.
            printf("You are a guest.\n");
            break;
    }
}
