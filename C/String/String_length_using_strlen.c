#include<stdio.h>
int main()
{
    char s[50];
    printf("Enter your name: ");
    gets(s);
    int len = strlen(s);
    printf("The number of characters in your namme is %d",len);
}