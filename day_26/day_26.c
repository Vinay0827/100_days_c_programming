// remove spaces from string


#include<stdio.h>

int main(){

char str[100];
printf("enter a string: ");
fgets(str, sizeof(str), stdin);

//removing new line in case present
for(int i=0; str[i]!='\0' ; i++)
{
if (str[i]=='\n') 
{
str[i]='\0';
break ;
}
}

for(int i=0; str[i]!='\0' ; i++)
{
if (str[i]==' ')
{
for(int j=i; str[j]!='\0' ; j++)
{
str[j]=str[j+1];
}
i--;
}
}


printf("string after alterations is : %s", str);

return 0;

}

