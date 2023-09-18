#include <stdio.h>
int main(){
    int  a ;
    printf("enter the side of the square ");
    scanf("%d",&a);
    for(int i = 0; i<=a; i++){
        for(int j=0 ; j <=a ; j++){
            printf("v ");
        }
        printf("\n");
    }
    return 0;
}
