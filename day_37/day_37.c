// function to reverse a strirng

#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
int length = strlen(str);
int start = 0, end = length - 1;
char temp;

while (start < end) {

temp = str[start];
str[start] = str[end];
str[end] = temp;


start++;
end--;
}
}

int main() {
char str[100];

printf("Enter a string: ");
scanf("%[^\n]", str); // Read input including spaces

reverseString(str);
printf("Reversed string: %s\n", str);

return 0;
}

