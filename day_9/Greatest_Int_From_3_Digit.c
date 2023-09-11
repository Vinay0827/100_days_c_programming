#include <stdio.h>

int Greatest_Int(int a, int b, int c)
{
    if (a >= b && a >= c)
    {
        return a;
    }
    else if (b >= a && b >= c)
    {
        return b;
    }
    else if (c >= a && c >= b)
    {
        return c;
    }
    else
    {
        printf("All the numbers are equal.\n");
    }
}

int main()
{
    int a = 4;
    int b = 8;
    int c = 10;

    printf("%d\n", Greatest_Int(a, b, c));

    return 0;
}
