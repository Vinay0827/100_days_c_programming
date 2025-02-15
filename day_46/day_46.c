//count characters,words and lines in a text file


#include<stdio.h>

int main()
{
    int character=0,words=0,lines=0;
    char ch;

    FILE *fptr;
    fptr = fopen("textfile.txt","r");

    if(fptr==NULL)
    {
        printf("could not open.");
    }



  while((ch=fgetc(fptr))!=EOF)
  { 
    character++;

    if(ch==' ' || ch=='\n' || ch=='\t')
    {
        words++;
    }

    if(ch=='\n')
    {
        lines++;
    }
  }


    fclose(fptr);

    printf("Characters: %d\n", character);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);


    return 0;
}
