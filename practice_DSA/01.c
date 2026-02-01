//1. Write a program to read and display n numbers using an array

#include<stdio.h>
int main()
{
    int i=0,n,arr[20];
    // clrscr();
    printf("\n Enter the number of Elements: ");

    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
        printf("\n The array elements are ");
        scanf("%d",&arr[i]);
    }
    printf("\n The array elements are ");
    for (i=0;i<n;i++)
        printf("arr[%d]=%d\t",i,arr[i]);
    return 0;
}