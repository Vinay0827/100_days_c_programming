#include <stdio.h>
#include <stdbool.h> 

int main() {
    int a, b;
    printf("Enter the number to begin = ");
    scanf("%d", &a);
    printf("Enter the last number to check = ");
    scanf("%d", &b);

    bool isPrime = true;

    for (int n = a; n <= b; n++) {
        if (n < 2) {
            isPrime = false;
        }
        else {
            for (int i = 2; i * i <= n; i++) {
                if (n % i == 0) {
                    isPrime = false;
                    break; 
                }
            }
        }

        if (isPrime) {
            printf("%d is a prime number\n", n);
        }
        else {
            printf("%d is not a prime number\n", n);
        }

        isPrime = true;
    }

    return 0;
}
