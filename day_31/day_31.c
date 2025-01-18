//function to calculate power of a number

#include<stdio.h>

int power(int num, int pow)
{
int result=1;
for(int i=0; i<pow; i++)
{
result*=num;
}
return result;
}



int main(){

int num,pow;
printf("enter the number: ");
scanf("%d", &num);

printf("enter the power you want to find out: ");
scanf("%d", &pow);

printf("the power of %d is %d", num, power(num,pow));

return 0;
}
