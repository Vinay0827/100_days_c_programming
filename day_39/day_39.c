// function to convert decimal to binary

#include<stdio.h>

void toBinary(int num)
{
    int arr[64];
    int i=0;
    
    for(i=0; num>0; i++)
    {
        arr[i]=num%2;
        num=num/2;
     
    }
    
    printf("The binary form is: ");
    
    for(int j=i-1; j>=0; j--)
    {
        printf("%d", arr[j]);

    }

    printf("\n");
}

int main()
{
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    
    if(num==0)
    {
        printf("The binary form is: 0\n");
    }
    else
    {
         toBinary(num);  
    }

    return 0;
}        
