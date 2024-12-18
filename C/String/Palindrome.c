#include<stdio.h>
int main()
{
    char s1[50],s2[50];
    printf("Enter anything: ");
    gets(s1);
    strcpy(s2,s1);
    strrev(s2);
    int d = strcmp(s1,s2);
    if (d==0)
        printf("Your input is palindrome.");
    else printf("Your input is not palindrome.");
}