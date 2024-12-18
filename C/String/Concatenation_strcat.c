#include<stdio.h>
int main()
{
    char s1[]="My name is ";
    char s2[]="Shazid Mashrafi";

    //Adds s2 with s1, no change to s2
    strcat(s1,s2);
    //Another way to add strings without declaring first- strcat(s1,"Shazid Mashrafi");
    
    printf("%s",s1);
}