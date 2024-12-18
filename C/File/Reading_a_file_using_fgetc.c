#include<stdio.h>
int main()
{
    FILE *file;
    file = fopen("fputc.txt","r");
    char ch;

    if(file==NULL)
        printf("File doesn't exist");
    else
    {
        printf("\n\nFile opened\n");
        while(!feof(file)) 
        //syntax: feof(file pointer) -- more details at end of the code; 
        {
           ch = fgetc(file);
           printf("%c",ch);
        }
        printf("File end.\n\n");
        fclose(file);
    }
}

/*
feof = file end of
!foef means until end of file
*/