
#include <stdio.h>

int main(void)
{
    int limit;

    // for loop: count from 1 to a number
    printf("Count to: ");

    if (scanf("%d", &limit) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    for (int i = 1; i <= limit; i++)
    {
        printf("%d\n", i);
    }

    // for loop: calculate a sum
    int sum = 0;

    for (int i = 1; i <= limit; i++)
    {
        sum += i;
    }

    printf("Sum: %d\n", sum);

    // for loop: iterate through an array
    char *fruits[] = {"Apple", "Mango", "Orange"};
    int length = sizeof(fruits) / sizeof(fruits[0]);

    for (int i = 0; i < length; i++)
    {
        printf("%s\n", fruits[i]);
    }

    // while loop: repeat until the user enters 0
    int number;

    while (1)
    {
        printf("Enter a number (0 to quit): ");

        if (scanf("%d", &number) != 1)
        {
            printf("Invalid input.\n");
            return 1;
        }

        if (number == 0)
        {
            break;
        }

        if (number < 0)
        {
            continue;
        }

        printf("Square: %d\n", number * number);
    }

    return 0;
}
