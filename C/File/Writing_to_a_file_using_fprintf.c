#include<stdio.h>
int main()
{
    FILE *file;
    char name[20];
    int age;
    file = fopen("fprintf.txt","a");
    if(file==NULL)
        printf("File doesn't exist");
    else
    {
        printf("File opened\n");
        printf("Enter your name: ");
        gets(name);
        printf("Enter your age: ");
        scanf("%d",&age);
        fprintf(file,"Name: %s\n",name);
        fprintf(file,"Age: %d\n",age);
        //syntax: fprintf(filepointer,format specifier,variable name);
        printf("File is written successfully\n");
        fclose(file);
    }
}