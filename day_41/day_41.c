//Create a structure to represent a student with name, roll number, and marks.

#include<stdio.h>

struct student{
    char name[50];
    int roll_no;
    int marks;
};

int main()
{
    struct student a1={"shreya",113,100};

    printf("Name of student is %s\n",a1.name);
    printf("uid of student is %d\n", a1.roll_no);
    printf("marks secured by student is %d\n", a1.marks);

    return 0;
}

