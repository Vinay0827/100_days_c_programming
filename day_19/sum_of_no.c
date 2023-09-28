#include <stdio.h>

int main() {
    int number, originalNumber, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number;

    while (number != 0) {
        int digit = number % 10;
        sum += digit;
        number /= 10;
    }

    printf("The sum of digits of %d is %d\n", originalNumber, sum);

    return 0;
}
