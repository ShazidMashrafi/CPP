#include<stdio.h>
int main()
{
    int i=0;
    char s[50];
    printf("Enter your name: ");
    gets(s);
    printf("Your name with their individual letters: \n");
    while(s[i]!='\0')
    {
        printf("%c\n",s[i]);
        i++;
    }  
}