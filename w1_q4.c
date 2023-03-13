#include<stdio.h>
int main()
{
    int a,b,c,sol;
    printf("enter the first number");
    scanf("%d", &a);
    printf("Enter the second number");
    scanf("%d", &b);
    printf("Enter  operation:\n");
    printf("1.Add\n");
    printf("2.Subtract\n");
    printf("3.Multiply\n");
    printf("4.Division\n");
    printf("5.Remainder\n");
    scanf("d", &c);
    switch(c)
    {
        case 1:
        sol=a+b;
        printf("Sum of two numbers is:%d\n",sol);

        case 2:
        sol=a-b;
        printf("difference of two number:%d\n",sol);

        case 3:
        sol=a*b;
        printf("product of two number:%d\n",sol);

        case 4:
        sol=a/b;
        printf("division of two number:%d\n",sol);

        case 5:
        sol=a%b;
        printf("remainder of two number:%d\n",sol);

        break;
        default:
        printf("invalid entry\n");
    }
    return 0;
    }
}