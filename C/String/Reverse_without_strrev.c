#include<stdio.h>
int main()
{
    char s[50];
    char s2[50];
    printf("Enter anything that you want to get in reverse: ");
    gets(s);
    int i=0,len=0,j;
    while(s[i]!='\0')
    {
        i++;
        len++;
    }
    for(j=0,i=len-1;i>=0; i--,j++)
    {
        s2[j]=s[i];
    }
    s2[j]='\0';
    printf("Reversed: %s",s2);
}