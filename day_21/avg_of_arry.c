#include <stdio.h>
#include <stdint.h>

int main()
{
    uint16_t a[10] = {5, 6, 4, 2, 7};
    uint16_t sum = 0; // Initialize sum to zero

    for (uint16_t i = 0; i < 10; i++)
    {                // Changed the loop limit to 5
        sum = sum + a[i]; // Update the sum with the current element
    }

    //printf("Sum: %d\n", sum); // Print the total sum
    printf("the avg of the arr is =      %d", sum/5);

    return 0;
}
