//find average of student marks using structur and array

#include<stdio.h>

struct Marks{
    char name[100];
    int marks;

};

int main()
{
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    int sum=0;

    struct Marks M[n]; 

    for(int i=0; i<n; i++)
    {
        printf("Enter name of student %d :  ", i+1 );
        scanf("%s", M[i].name);

        printf("Enter marks: ");
        scanf("%d", &M[i].marks);

        sum += M[i].marks;

    }


    printf("The average of marks of studets is : %.2f\n",(float)sum/n);


    return 0;

}
