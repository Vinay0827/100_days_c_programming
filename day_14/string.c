#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isPalindrome(const char *str);

int main()
{
    char input[100];

    printf("Enter a string: ");
    scanf("%s", input);

    if (isPalindrome(input))
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}

bool isPalindrome(const char *str)
{
    int length = strlen(str);
    int i, j;

    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        if (str[i] != str[j])
        {
            return false;
        }
    }

    return true;
}
