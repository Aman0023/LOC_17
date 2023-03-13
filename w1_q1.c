#include<stdio.h>
int main()
{
    int d;
    for(d=1;d<=100;d++)
    {
        if(d%3==0)
        {
            printf("FIZZ\n");
        }
        elseif(d%5==0)
        {
            printf("BUZZ\n");
        }
        else
        {
            printf("%d\n",d);
        }
    }
}
