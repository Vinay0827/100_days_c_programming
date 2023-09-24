#include<stdio.h>

int main(){
int num ;
int rev_num = 0;
printf("enter the num");
scanf("%d",&num);

for(int i=0; num!=0; i++){
rev_num = rev_num * 10 + num % 10;
num = num / 10;}

printf("Reversed Number: %d", rev_num);
return 0;
}
