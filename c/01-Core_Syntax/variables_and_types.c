#include <stdio.h>
#include <stdbool.h>

int main(void) {

    // Variables and types
    char text[] = "Learning C";
    int whole_number = 25;
    double decimal_number = 5.5;
    bool is_true = false;

    // Print values
    printf("String: %s\n", text);
    printf("Integer: %d\n", whole_number);
    printf("Double: %.2f\n", decimal_number);
    printf("Boolean: %d\n", is_true);

    return 0;
}
