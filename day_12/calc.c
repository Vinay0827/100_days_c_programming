#include<stdio.h>
int main(){
    int a ,b ;
    float c;
    char sig;
    printf("enter the calculation you want to do =");
    scanf("%d%c%d",&a,&sig,&b);
    switch (sig)
    {
    case '+':
    c=a+b;
        break;
    case '-':
    c=a-b;
    break;
    case '*':
    c=a*b;
    break;
    case '/':
    c=a/b;
    break;
    
    default:
    printf("enter a valid calculation");
        break;
    }
    printf("the result of %d and %d is = %f",a,b,c);

    return 0;
}
