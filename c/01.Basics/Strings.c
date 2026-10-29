
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function prototypes.
void compare_password(void);
void explore_string_methods(void);

int main(void)
{
    // Call both string demonstrations.
    compare_password();
    explore_string_methods();

    return 0; // Program finished successfully.
}

// Compare the user's password with the expected password.
void compare_password(void)
{
    // Create a character array to store the password.
    // fgets() reads a line of text, including spaces.
    char password[100];

    printf("Password? ");

    if (fgets(password, sizeof(password), stdin) == NULL)
    {
        printf("Input error.\n");
        return;
    }

    // fgets() usually stores the newline when there is room.
    // Replace it with '\0' so the password can be compared.
    password[strcspn(password, "\n")] = '\0';

    // strcmp() compares two strings.
    // It returns 0 when the strings are exactly equal.
    if (strcmp(password, "Caput Draconis") == 0)
    {
        printf("Welcome!\n");
    }
    else
    {
        printf("Off with you!\n");
    }
}

// Explore common string operations in C.
void explore_string_methods(void)
{
    // In C, strings are character arrays ending with '\0'.
    // The extra space allows room for the null terminator.
    char message[] = "  Hello World!!  ";

    // Check whether the message ends with two spaces.
    // strlen() gives the number of characters before '\0'.
    size_t length = strlen(message);

    if (length >= 2
        && message[length - 1] == ' '
        && message[length - 2] == ' ')
    {
        printf("1\n"); // True, represented as 1.
    }
    else
    {
        printf("0\n"); // False, represented as 0.
    }

    // Get the string length.
    // Unlike sizeof(message), strlen() excludes '\0'.
    printf("%zu\n", strlen(message));

    // Find the first occurrence of "H".
    // strchr() returns a pointer to the character, or NULL.
    char *position = strchr(message, 'H');

    if (position != NULL)
    {
        // Subtract pointers to get the character's index.
        printf("%td\n", position - message);
    }
    else
    {
        printf("-1\n"); // Similar to Java indexOf() when not found.
    }

    // C has no built-in replace() method.
    // Print each character, replacing '!' with " *".
    for (int i = 0; message[i] != '\0'; i++)
    {
        if (message[i] == '!')
        {
            printf(" *");
        }
        else
        {
            putchar(message[i]);
        }
    }
    putchar('\n');

    // Convert the message to lowercase.
    // tolower() operates on one character at a time.
    // Cast to unsigned char to use it safely with char values.
    for (int i = 0; message[i] != '\0'; i++)
    {
        putchar(tolower((unsigned char)message[i]));
    }
    putchar('\n');

    // Convert the message to uppercase.
    for (int i = 0; message[i] != '\0'; i++)
    {
        putchar(toupper((unsigned char)message[i]));
    }
    putchar('\n');

    // C has no direct equivalent of Java trim().
    // Find the first and last non-space characters.
    int start = 0;
    int end = (int)strlen(message) - 1;

    // Move start past leading spaces.
    while (message[start] == ' ')
    {
        start++;
    }

    // Move end backwards past trailing spaces.
    while (end >= start && message[end] == ' ')
    {
        end--;
    }

    // Print only the characters between start and end.
    for (int i = start; i <= end; i++)
    {
        putchar(message[i]);
    }
    putchar('\n');
}
