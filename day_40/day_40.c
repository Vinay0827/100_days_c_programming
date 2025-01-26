// intersection of two arrays

#include<stdio.h>

void intersection(int n, int *arr1, int m, int *arr2)
{
    printf("The intrsection of the arrays is: ");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(*(arr1+i)==*(arr2+j))
            {
                printf("%d ", *(arr1+i));
                break;
            }
        }
    }
}    

int main()
{
    int n;
    printf("Enter size of array 1: ");
    scanf("%d",&n);
   
    int arr1[n];
    printf("Entr elements of array 1: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr1[i]);
    }

    int m ;
    printf("Enter size of array 2 : ");
    scanf("%d",&m);
           
    int arr2[m];
    printf("Entr elements of array 2: ");
    for(int i=0; i<m; i++)
    {
    scanf("%d",&arr2[i]);
    }

    intersection(n,arr1,m,arr2);

    return 0;
}



