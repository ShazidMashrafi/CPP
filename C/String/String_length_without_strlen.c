#include<stdio.h>
int main()
{
    char s[50];
    int i=0,len=0;
    printf("Enter your name: ");
    gets(s);
    while(s[i]!='\0')
    {
        len++;
        i++;
    }
    printf("The number of characters in your name is %d",len);
}