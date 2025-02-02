//copy contents of one file to another

#include<stdio.h>

int main() 
{
    FILE *file1, *file2;
    char data[1000];

    file1= fopen("file1.txt","r");

    if(file1==NULL)
    {
        printf("error");
        return 1;
    }

    file2= fopen("file2.txt","w");
    if(file2==NULL)
    {
        printf("error");
        return 1;
    }

    while(fgets(data,sizeof(file1),file1)!=NULL)
    {
        fputs(data,file2);
    
    }

    printf("file copied");

    fclose(file1);
    fclose(file2);

    return 0;

}



