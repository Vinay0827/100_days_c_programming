#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Please enter a positive number of elements.\n");
        return 1;
    }

    int arr[n];

    printf("Enter the elements of the array, separated by spaces:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("The smallest element in the array is: %d\n", min);
    printf("The largest element in the array is: %d\n", max);

    return 0;
}
