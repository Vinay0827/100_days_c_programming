//Implement a function to find the length of a string.

#include<stdio.h>

int stringlen(char *str)
{
    int len=0;
    while(*str!='\0')
    {
        len++;
        str++;
    }

    return len;
}


int main()
{
    char str[100];
    printf("enter a string: ");
    scanf("%s[^\n]", str);

    printf("the length of string \"%s\" is %d", str, stringlen(str));

    return 0;
    }
   
