// Write a program to find the mean of n numbers using arrays.

#include<stdio.h>

int main(){
    int i,n,arr[20],sum=0;

    float mean=0.0;

    printf("\n Enter the number of Elements as you want within your ARRAY : ");
    scanf("%d",&n);
    // Input Elements
    for(i=0;i<n;i++)
    {
        printf("\n arra[%d]=",i);
        scanf("%d",&arr[i]);
    }
    // display output
    for (i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    mean=sum/n;

    printf("%d sum",sum);
    printf(" %f mean \n",mean);

}