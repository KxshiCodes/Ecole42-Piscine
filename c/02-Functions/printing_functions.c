#include <stdio.h>

// Function prototypes
void print_stars(int number);
void print_square(int size);
void print_rectangle(int width, int height);
void print_triangle(int size);

int main(void)
{
    print_stars(3);
    printf("---\n");

    print_square(4);
    printf("---\n");

    print_rectangle(17, 3);
    printf("---\n");

    print_triangle(3);

    return 0;
}

// Function definitions
void print_stars(int number)
{
    while (number > 0)
    {
        printf("*");
        number--;
    }
    printf("\n");
}

void print_square(int size)
{
    for (int row = 0; row < size; row++)
    {
        print_stars(size);
    }
}

void print_rectangle(int width, int height)
{
    for (int row = 0; row < height; row++)
    {
        print_stars(width);
    }
}

void print_triangle(int size)
{
    for (int row = 1; row <= size; row++)
    {
        print_stars(row);
    }
}