#include <stdio.h>
void febo(int a){
    int b=0 , c=1;
    int sum;
    for(int i = 1 ; i <= a ; i++){
        printf("%d",sum);
        sum = b + c;
        b = c;
        c = sum;
    }
    
}

int main(){
    int a;
    printf("enter the length of serese you want to see");
    scanf("%d",&a);
    printf("the nos are = %d");
    febo(a);
    return 0;
}
