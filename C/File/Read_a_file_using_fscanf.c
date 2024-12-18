#include<stdio.h>
int main()
{
    FILE *file;
    char type[10],firstname[15],lastname[15],type2[20];
    int age;
    file= fopen("fprintf.txt","r");

    if(file==NULL)
        printf("File doesn't exist");
    else
    {
        printf("\nFile opened\n\n");
        fscanf(file,"%s %s %s %s %d",&type,&firstname,&lastname,&type2,&age);
        printf("%s %s %s\n%s %d",type,firstname,lastname,type2,age);
        //fscanf(file pointer,format specifier,variable name);
        fclose(file);
    }
}