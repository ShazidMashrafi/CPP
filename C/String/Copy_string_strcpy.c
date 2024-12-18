#include<stdio.h>
int main()
{
    char s[]="Shazid";
    char c[20];
    strcpy(c,s);
    printf("String: %s\n",s);
    printf("Copied String: %s\n",c);
}