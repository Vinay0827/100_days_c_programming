#include <stdio.h>
int main(){
    int a;
    printf("enter the  no to finds its table = ");
    scanf("%d",&a);
    for(int i=1 ; i<11 ; i++){
        printf("\n%d * %d=%-20d",i,a,(i*a));
    }
return 0;
}
