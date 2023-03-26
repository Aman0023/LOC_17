#include<stdio.h>
#include<string.h>
void main()
{
    int i,j,c=0,v=0;int len;
    char ch; char str[1000];
    printf("Enter a string");
    gets(str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        ch=str[i];
        if((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122))
        {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        v++;
        
        else 
        c++;
        }
        else 
        continue;
    }
    printf("\nTHE NO OF VOWELS:%d", v);
    printf("\nTHE NO OF CONSONANT:%d", c);
}