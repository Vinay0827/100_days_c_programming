#include<stdio.h>
int febo(int a){
    static int b = 0 , c = 1 , next;
    for( int i = 0 ; i < a; i++){
        next = b + c;
        b = c ;
        c = next ; 
        printf("%d \n", next);
    }
    
}

int main(){
    int a;
    printf("enter the lenth of febonachi serise you want = ");
    scanf("%d",&a);
    
    printf("the %d no of the seise are = \n",a);
    febo(a);
    return 0;
}
