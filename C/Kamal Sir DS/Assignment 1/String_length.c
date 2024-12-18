#include<stdio.h>
int main()
{
    char s[100];
    printf("Enter string: ");
    scanf("%s", s);
    int i = 0;
    while(s[i] != '\0')
    {
        i++;
    }
    printf("The length of the string is: %d", i);
}