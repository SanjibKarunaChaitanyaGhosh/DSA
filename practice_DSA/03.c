// Write a program to find the largest of n numbers using arrays

#include<stdio.h>

//#include <limits.h>
// large = INT_MIN;

int main()
{
    int i,n,arr[20],large = arr[0];

    printf("\n Enter the number of elements in array : ");
    scanf("%d",&n);

    // Entering Elements in array

    for (i=0;i<n;i++)
    {
        printf("\n Enter Elements in array ");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>large)
        {
            large=arr[i];
            printf("\n The %d th element is %d", i, arr[i]);
        }
    }
    printf("\n The largest number is %d ", large);
    return 0;
}