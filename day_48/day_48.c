//Read data from a csv file and perform calculations

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_LL 1024

int main(){

FILE *file =  fopen("result.csv", "r");
if(file==NULL)
{
    printf("ERROR OPENING");
    return 1;
}

char line[MAX_LL];
int col=0,row=0;
double *sum=NULL;

//find number of columns
if (fgets(line,sizeof(line),file))
{
    char *token=strtok(line, ",");
    while(token!=NULL)
    {
        col++;
        token=strtok(NULL,",");
    }
}

while (fgets(line, sizeof(line), file)) {
        char *token = strtok(line, ",");
        int col_index = 0;
        double total = 0;

        printf("%s,  ", token);
        token = strtok(NULL, ",");

        while (token != NULL) {
            total += atof(token);  // Convert Marks to Double
            token = strtok(NULL, ",");
            col_index++;
        }

        double average = total / (col - 1);
        printf("Average: %.2lf\n", average);
        row++;
    }

    fclose(file);

    return 0;
}

