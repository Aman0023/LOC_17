#include<stdio.h>
int freq(int arr[],int n)
{
    int i,j,c=0;
    int max=0;
    for(i=0;i<n-1;i++)
    {
        int k=0;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            k++;
        }
        if(k>c)
        {
        c=k;
        max=arr[i];}
    }
    printf("\nThe most occuring integer is:%d", max);
}
void main()
{
    int i,n;
    printf("\nEnter the no of elements");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the elements of array");
    for(i=0;i<n;i++)
    scanf("%d", &arr[i]);
    freq(arr,n);

}