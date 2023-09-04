#include <stdio.h>
int main(){
    int a ;
    int b = 1;
    
    printf("enter the no for seeing its factorial = ");
    scanf("%d",&a);
    for(int i = 1; i <=a ; i++){
         b = b * i ;
    }
    printf("the facatorial of %d is = %d",a,b);
    return 0;
}
