#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="Shazid Mashrafi";
    char s2[]="Shazid";

    int d= strcmp(s1,s2);
    if(d=0)
        printf("Strings are same");
    else
        printf("Strings are not same");
    
}