#include<stdio.h>
int main()
{
    char s[20]="Dhaka";
    char s2[20]="Mymensingh";
    char temp[20];
    
    printf("Before swapping:\n");
    printf("String 1= %s\n",s);
    printf("String 2= %s\n",s2);

    strcpy(temp,s);
    strcpy(s,s2);
    strcpy(s2,temp);

    printf("\nAfter swapping:\n");
    printf("String 1= %s\n",s);
    printf("String 2= %s\n",s2);
}