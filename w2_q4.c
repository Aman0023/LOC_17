#include<stdio.h>
void main()
{
    int i,j;
    int k=0;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d\t", ++k);
        }
        printf("\n");

    }
}
