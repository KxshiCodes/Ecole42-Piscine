#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char message[] = "  Hello World!!  ";
    char password[] = "Caput Draconis";

    // Comparing strings
    printf("%d\n", strcmp(password, "Caput Draconis") == 0);

    // String length
    printf("%zu\n", strlen(message));

    // Find a character
    char *position = strchr(message, 'H');
    if (position != NULL)
    {
        printf("%ld\n", (long)(position - message));
    }

    // Check how a string ends
    printf("%d\n", strcmp(message + strlen(message) - 2, "  ") == 0);

    // Replace characters
    char replaced[] = "  Hello World!!  ";
    for (int i = 0; replaced[i] != '\0'; i++)
    {
        if (replaced[i] == '!')
        {
            replaced[i] = '*';
        }
    }
    printf("%s\n", replaced);

    // Convert to lowercase
    for (int i = 0; message[i] != '\0'; i++)
    {
        message[i] = (char)tolower((unsigned char)message[i]);
    }
    printf("%s\n", message);

    // Convert to uppercase
    for (int i = 0; message[i] != '\0'; i++)
    {
        message[i] = (char)toupper((unsigned char)message[i]);
    }
    printf("%s\n", message);

    // Remove leading and trailing spaces
    char trimmed[] = "  Hello World!!  ";
    int start = 0;
    int end = (int)strlen(trimmed) - 1;

    while (trimmed[start] == ' ')
    {
        start++;
    }

    while (end >= start && trimmed[end] == ' ')
    {
        end--;
    }

    printf("%.*s\n", end - start + 1, trimmed + start);

    return 0;
}

