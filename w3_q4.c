#include<stdio.h>

void main()
{
int num,i,fac=1,*p1,*p2;

p1=&num;
p2=&fac;
printf("Enter any number ");
scanf("%d",p1);

for(i=1;i<=*p1;i++)
{
 *p2=*p2*i;
}
printf("\nFactorial of %d is =  %d",*p1,*p2);

}