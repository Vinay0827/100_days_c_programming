//calculate factorial of a number using recursion

#include<stdio.h>

int factorial(int n)
{
if(n==0 || n==1)
{
return 1;
}
else
{
return n*factorial(n-1);
}
}

int main()
{
int num;
printf("enter the number whose factorial you want to find");
scanf("%d", &num);

if(num<0)
{
printf("factorial for negative numbers is undefined");
}
else
{
printf("the factorial of %d is %d ",num,factorial(num));
}

return 0;
}
