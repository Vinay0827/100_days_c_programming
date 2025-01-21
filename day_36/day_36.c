//check if a number is prime number using function

#include<stdio.h>

int prime(int n)
{
    if(n<1)
    {
        return 0;
    }

    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }

    return 1;
}


int main()
{
    int num;
    printf("enter a number: ");
    scanf("%d",&num);

    if(prime(num))
    {
        printf("The number is prime");
    }
    else
    {
        printf("The number is not prime");
    }


    return 0;
    }
