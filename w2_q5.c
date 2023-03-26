#include<stdio.h>
void main()
{
    int i,n,l;
    printf("Enter the no of elements in array ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array ");
    for(i=0;i<n;i++)
    scanf("%d", &arr[i]);
    printf("\nThe elements in 1st array");
    for(i=0;i<n;i++)
    printf("\n%d", arr[i]);
    l=sizeof(arr)/sizeof(arr[0]);
    int brr[l];
    for(i=0;i<l;i++)
    brr[i]=arr[i];
    printf("\nAfter copying the elements");
    for(i=0;i<l;i++)
    printf("\n%d", brr[i]);

}