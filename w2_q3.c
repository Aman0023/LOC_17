#include<stdio.h>
int sort(int arr[],int n)
{
    int i,a,j;
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
}
void main()
{
    int n,i;
    printf("Enter the no of elements in array");
    scanf("%d", &n);
    int crr[n];
    printf("Enter the elements of array");
    for(i=0;i<n;i++)
    scanf("%d", &crr[i]);
    sort(crr,n);
    printf("\nAfter sorting:");
    for(i=0;i<n;i++)
    printf("\n%d", crr[i]);
}