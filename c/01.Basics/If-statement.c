
#include <stdio.h>

int main(void)
{
    int age;

    // Ask the user for their age.
    printf("How old are you? ");

    // Read an integer from the keyboard.
    if (scanf("%d", &age) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    // Check whether the age is 18 or older.
    if (age >= 18)
    {
        // Runs if the condition is true.
        printf("You are an adult.\n");
    }
    else
    {
        // Runs if the condition is false.
        printf("You are not an adult.\n");
    }

    return 0; // Program finished successfully.
}
