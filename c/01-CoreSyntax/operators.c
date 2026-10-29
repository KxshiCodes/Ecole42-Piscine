#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 3;

    // Arithmetic operators
    printf("%d\n", a + b); // Addition
    printf("%d\n", a - b); // Subtraction
    printf("%d\n", a * b); // Multiplication
    printf("%d\n", a / b); // Division (whole number result)
    printf("%d\n", a % b); // Remainder

    // Comparison operators
    printf("%d\n", a > b);  // Greater than
    printf("%d\n", a < b);  // Less than
    printf("%d\n", a == b); // Equal to
    printf("%d\n", a != b); // Not equal to
    printf("%d\n", a >= b); // Greater than or equal to
    printf("%d\n", a <= b); // Less than or equal to

    // Logical operators
    printf("%d\n", a > 0 && b > 0); // AND
    printf("%d\n", a > 0 || b < 0); // OR
    printf("%d\n", !(a > 0));       // NOT

    return 0;
}
