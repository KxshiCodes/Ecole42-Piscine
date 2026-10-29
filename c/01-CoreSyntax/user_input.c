#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[100];
    int age;
    double height;

    // Read a string
    printf("Enter your name: ");

    if (fgets(name, sizeof(name), stdin) == NULL)
    {
        return 1;
    }

    name[strcspn(name, "\n")] = '\0';
    printf("Hello, %s!\n", name);

    // Read an int
    printf("Enter your age: ");

    if (scanf("%d", &age) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    printf("You are %d years old.\n", age);

    // Read a double
    printf("How tall are you (meters)? ");

    if (scanf("%lf", &height) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    printf("You are %.2f meters tall.\n", height);

    return 0;
}
