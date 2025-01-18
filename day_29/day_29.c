//merging two sorted arrays

#include<stdio.h>

int main()
{
int n1,n2;

printf("enter size of array 1 :\n ");
scanf("%d",&n1);
int arr1[n1];     
printf("enter elements of array 1: \n");
for(int i=0; i<n1; i++)
{
scanf("%d", &arr1[i]);
}

printf("enter size of array 2 :\n ");
scanf("%d",&n2);
int arr2[n2];    
printf("enter elements of array 2: \n");
for(int i=0; i<n2; i++)
{
scanf("%d", &arr2[i]);
}

int merge[n1+n2];
int x=0;

int i=0,j=0;

while(i<n1 && j<n2)
{
if (arr1[i]<=arr2[j])
{
merge[x++]=arr1[i++];
}
else  
{
merge[x++]=arr2[j++];
}
}

while(i<n1)
{
merge[x++]=arr1[i++];
}

while(j<n2)
{
merge[x++]=arr2[j++];
}

printf("the merged array is : ");
for(int i=0; i<x; i++)
{
printf("%d ", merge[i]);
}


return 0;
}
