#include<stdio.h>
#include<string.h>
int main()
{
    FILE *file;
    char name[20]="Shazid Mashrafi";
    int len= strlen(name);
    int i;
    file = fopen("fputc.txt","w");

    if(file==NULL)
        printf("File doesn't exist");
    else
    {
        printf("File opened\n");
        for(i=0;i<len;i++)
        {
            fputc(name[i],file);
            //syntax: fputc(array,file pointer)
        }
        printf("File is written succesfully\n");
        fclose(file);
    }
}