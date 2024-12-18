#include<stdio.h>
int main()
{
    char s[50];
    printf("Enter anything that you want to get reversed: ");
    gets(s);

    strrev(s);

    printf("Reversed: %s\n",s);
}