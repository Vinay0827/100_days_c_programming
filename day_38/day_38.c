//Find the second largest element in an array


#include<stdio.h>

void secondLargest(int n, int *arr)
{
   int largest=*arr;
   int second=-1;

    for(int i=0; i<n; i++)
    {
        if(arr[i]>largest)
        {
            second=largest;
            largest=arr[i];
        }
        else if(arr[i]>second && arr[i]!=largest)
        {
            second=arr[i];
        }
    }


     printf("The second largest element is %d\n", second);
}

int main()
{
    int n; 
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    secondLargest(n,arr);

    return 0;
}
