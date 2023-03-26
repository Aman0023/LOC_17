#include<stdio.h>
int occur(int arr[],int n,int x)
{
    int i,c=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
        c++;
    }
    return c;
}
void main()
{
    
    int a,b,c=0,i;
    printf("Enter the size of array");
    scanf("%d", &a);
    int brr[a];
    printf("Enter the elements of array \n");
    for(i=0;i<a;i++)
    {
    scanf("%d", &brr[i]);
    }
    printf("Enter the number whose occurences you want to check");
    scanf("%d", &b);
    c=occur(brr,a,b);
    printf("The Occurences of %d is %d", b,c);
}


