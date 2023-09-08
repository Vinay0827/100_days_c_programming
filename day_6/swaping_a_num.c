#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers (separated by a space): ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swap 'a' and 'b' without using a temporary variable
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}