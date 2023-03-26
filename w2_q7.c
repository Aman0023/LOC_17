#include<stdio.h>
void main()
{
    int n,i,a=0,j;
    printf("Enter the no of elements of array");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the elements of the array");
    for(i=0;i<n;i++)
    scanf("%d", &arr[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j]) 
            {
                a=arr[i];
                arr[i]=arr[j];
                arr[j]=a;
            }      
             }
    }
    printf("\nAll negative numbers on one side:");
    for(i=0;i<n;i++)
    printf("\n%d",arr[i]);
}