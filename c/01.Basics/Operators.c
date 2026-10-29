
#include <stdio.h>

int main(void)
{
    int age;
    int number;

    // Ask the user for their age.
    printf("How old are you? ");

    // Read an integer from standard input.
    // The & symbol gives scanf the address of the variable
    // where the input should be stored.
    if (scanf("%d", &age) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    // Check whether the age is within the accepted range.
    // && means "AND": both conditions must be true.
    // >= means "greater than or equal to".
    // <= means "less than or equal to".
    if (age >= 0 && age <= 120)
    {
        printf("Valid age.\n");
    }
    else
    {
        printf("Impossible!\n");
    }

    // Ask the user for a number.
    printf("Give a number: ");

    // Read the integer and check that the input is valid.
    if (scanf("%d", &number) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    // The modulo operator (%) gives the remainder of a division.
    // If number % 2 equals 0, the number is even.
    // Otherwise, the number is odd.
    if (number % 2 == 0)
    {
        printf("Number %d is even.\n", number);
    }
    else
    {
        printf("Number %d is odd.\n", number);
    }

    // Return 0 to indicate that the program finished successfully.
    return 0;
}
