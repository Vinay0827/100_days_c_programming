#include <stdio.h> 

int main() {
    int a, b;
    char c;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the operation you want to perform: ");
    scanf(" %c", &c);

    printf("Enter the second number: ");
    scanf("%d", &b);

    switch (c) {
        case '+':
            printf("The sum is: %d", a + b);
            break;  // Add 'break' to exit the switch block
        case '-':
            printf("The difference is: %d", a - b);
            break;
        case '*':
            printf("The product is: %d", a * b);
            break;
        case '/':
            printf("the divesion is : %d", a / b);
            break;
        default:
            printf("Invalid operation");
    }

    return 0;
}
