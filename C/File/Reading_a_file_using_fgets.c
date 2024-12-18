#include<stdio.h>
int main()
{
    FILE *file;
    char ch[40];
    file = fopen("fputs.txt","r");

    if(file==NULL)
        printf("File doesn't exist");
    else
    {
        printf("File opened\n");
        while(fgets(ch,100,file)) 
        //syntax: fgets(variable name,size,filepointer);
        {
        printf("%s",ch);
        }
        fclose(file);
    }
}