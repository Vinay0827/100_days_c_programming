//calculate sum of arrays in a 2D array

#include<stdio.h>

int sum_2D(int m, int n, int arr[m][n])
{
    int sum=0;

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            sum+=arr[i][j];
        }
    }

    return sum;
}

int main()
{
    int a,b;
    printf("enter the dimensions of the 2D array(row,column): ");
    scanf("%d%d",&a,&b);

    int arr[a][b];

    printf("enter the elements of the array");
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            scanf("%d", &arr[i][j]);
        }
   }

   printf("The sum of the elements of the array is %d\n",sum_2D(a,b,arr));

   return 0;

   }


