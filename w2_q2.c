#include<stdio.h>
void main()
{
    
    int i,j,m,n,l,k;
    printf("Enter the no of elements in array 1 and array 2");
    scanf("%d %d", &m,&n);
    int arr[m],brr[n];
    printf("\nEnter the elements in array 1");
    for(i=0;i<m;i++)
    scanf("%d", &arr[i]);
    printf("\nEnter the elements in array 2");
    for(i=0;i<n;i++)
    scanf("%d", &brr[i]);
    l=m+n;
    int crr[l];
    for(k=0;k<m;k++)
    {
    crr[k]=arr[k];
    }
    for(i=0,j=m;i<n,j<l;i++,j++)
        crr[j]=brr[i];
    
    printf("\nThe merged array is:");
    for(i=l;i<0;i--)
    printf("\n%d", crr[i]);
}
