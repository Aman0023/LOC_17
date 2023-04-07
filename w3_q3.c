#include <stdio.h>

int add(int *a1, int *a2)
{
    return *a1 + *a2;
}

int main()
{
    int num1, num2;
    int *p1, *p2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1,&num2);


    p1 = &num1;
    p2 = &num2;

    int sum = add(p1, p2);
    printf("The sum is %d\n",  sum);

    return 0;
}