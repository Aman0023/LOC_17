#include<stdio.h>
#include<string.h>
void main()
{
    char ch;char st[1000];
    int i,al=0,di=0,sl=0;
    printf("ENTER A STRING");
    gets(st);
    int len=strlen(st);
    for(i=0;i<len;i++)
    {
        ch=st[i];
        if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
        al++;
        else if(ch>=48&&ch<=57)
        di++;
        else
        sl++;
    }
    printf("\nTOTAL NO OF ALPHABETS:%d",al);
    printf("\nTOTAL NO OF DIGITS:%d",di);
    printf("\nTOTAL NO OF SPECIAL CHARACTER:%d",sl);
}
