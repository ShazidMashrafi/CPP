#include<stdio.h>
int main()
{
    char s[50];
    printf("Enter anything: ");
    gets(s);
    strlwr(s);
    printf("Lowercase: %s\n",s);
}