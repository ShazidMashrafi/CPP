#include<stdio.h>
int main()
{
    char s1[]="My name is ";
    char s2[]="Shazid Mashrafi";

    int i=0,len=0,j=0;
    while(s1[i]!='\0')
    {
        len++;
        i++;
    }
    while(s2[j]!='\0')
    {
        s1[len+j]=s2[j];
        j++;
    }
    printf("%s",s1);
}