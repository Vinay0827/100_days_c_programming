#include <stdio.h>

int reverse(int a, int di) {
    int original = a; 
    int revers = 0;
    
    while (a > 0) {
        int num = a % di;
        revers = revers * di + num;
        a = a / di;
    }
    
    if (revers == original) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int a;
    int di = 10;
    
    printf("Enter the number you want to check: ");
    scanf("%d", &a);
    
    int c = reverse(a, di);
    
    if (c == 1){
        printf("The number is a palindrome.\n");
    }
    else if (c == 0) {
        printf("The number is not a palindrome.\n");
    }
    else {
        printf("enter a valid int");
    }
    
    return 0;
}
