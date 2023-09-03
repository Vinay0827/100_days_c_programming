#include <stdio.h>
int even_odd(int a ){
    if(a%2 == 0){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){
    int a;
    printf("enter a num to test = ");
    scanf("%d",&a);
    even_odd(a);
    if (even_odd(a) == 0){
    printf("the no is even");
    }
    else if (even_odd(a) == 1) {
        printf("the no is odd");
    }
    return 0;
}
