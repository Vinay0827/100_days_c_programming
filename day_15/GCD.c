#include <stdio.h>
#include <stdint.h>

int findGCD(uint8_t a, uint8_t b)
{
    while (b != 0)
    {
        uint8_t temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    uint8_t a, b;
    printf("Enter two numbers to find GCD: ");
    scanf("%hhu %hhu", &a, &b); 

    uint8_t c = findGCD(a, b);
    printf("The GCD of %hhu and %hhu is %hhu\n", a, b, c); 

    return 0;
}
