
#include <stdio.h>

// Function prototypes.
// These tell the compiler which functions are defined below.
void count_to_number(void);
void print_fruits(void);
void calculate_squares(void);

int main(void)
{
    // Call each function in order.
    count_to_number();
    print_fruits();
    calculate_squares();

    return 0; // Program finished successfully.
}

// Print "Hello World" from 0 up to the user's number.
void count_to_number(void)
{
    int number;

    printf("Enter a number: ");

    // Read an integer from the user.
    if (scanf("%d", &number) != 1)
    {
        printf("Invalid input.\n");
        return;
    }

    // A for loop has three parts:
    // 1. Initialization: int i = 0
    // 2. Condition: i <= number
    // 3. Update: i++
    //
    // The loop repeats while the condition is true.
    for (int i = 0; i <= number; i++)
    {
        printf("Hello World %d\n", i);
    }
}

// Print each fruit in an array.
void print_fruits(void)
{
    // An array stores multiple values of the same type.
    // Each string is a character array.
    char *fruits[] = {"Apple", "Mango", "Orange"};

    // Calculate the number of elements in the array.
    // sizeof(fruits) gives the total array size in bytes.
    // sizeof(fruits[0]) gives the size of one pointer.
    int length = sizeof(fruits) / sizeof(fruits[0]);

    // Use a regular for loop when the index matters.
    for (int i = 0; i < length; i++)
    {
        // Arrays start at index 0.
        // fruits[0] is Apple, fruits[1] is Mango, etc.
        printf("%s\n", fruits[i]);
    }

    // C has no built-in for-each loop like Java.
    // A second indexed loop can visit every element.
    for (int i = 0; i < length; i++)
    {
        char *fruit = fruits[i];
        printf("%s\n", fruit);
    }
}

// Keep asking for numbers and print their squares.
void calculate_squares(void)
{
    int number;

    // while (1) creates a loop that continues indefinitely
    // until a break statement exits it.
    while (1)
    {
        printf("Give a number (0 to quit): ");

        if (scanf("%d", &number) != 1)
        {
            printf("Invalid input.\n");
            return;
        }

        // Reject negative numbers.
        if (number < 0)
        {
            printf("Unsuitable number\n");

            // continue skips the remaining code in this
            // iteration and returns to the start of the loop.
            continue;
        }

        // Stop the loop when the user enters zero.
        if (number == 0)
        {
            // break immediately exits the nearest loop.
            break;
        }

        // Multiply the number by itself to calculate its square.
        printf("%d\n", number * number);
    }
}
