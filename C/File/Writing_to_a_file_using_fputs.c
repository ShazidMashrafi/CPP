#include<stdio.h>
int main()
{
    FILE *file;
    char name[20];
    file = fopen("fputs.txt","w");
    if(file==NULL)
        printf("File doesn't exist");
    else
    {
        printf("File opened\n");
        printf("Enter your name: ");
        gets(name);
        fputs(name,file); 
        //sytax: fputs(string,file pointer)
        fputs("\n",file);
        printf("File is written successfully\n");
        fclose(file);
    }
}