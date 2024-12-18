#include<stdio.h>
int main()
{
    char s[50];
    printf("Enter anything: ");
    gets(s);
    strupr(s);
    printf("Uppercase: %s\n",s);
}