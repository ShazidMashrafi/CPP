#include<stdio.h>
int main()
{
    char s[50];
    printf("Enter your full name: ");
    gets(s); //scanf can't work after spaces, gets only works in string.
    printf("Your full name is %s\n",s);
}