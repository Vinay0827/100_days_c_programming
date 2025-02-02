// Read and write data to a text file.

#include<stdio.h>

int main()
{

    FILE *fptr;
    char data[100];

    fptr=fopen("textfile.txt","w");
   
    if(fptr==NULL)
    {
        printf("error");
        return 1;
    }

    printf("Enter the data you want to write into file(press enter twice for end): ");

    while(1)
    {
         fgets(data, sizeof(data), stdin);
         if(data[0]=='\n')
         {
            break;
         }
         fputs(data,fptr);
    }

    fclose(fptr);

    fptr=fopen("textfile.txt","r");

    if(fptr==NULL)
    {
        printf("error");
        return 1;
    }

    while(fgets(data,sizeof(data),fptr))
    {
       printf("%s",data);
    }

    fclose(fptr);

    return 0;

}

