#include<stdio.h>
int main()
{
    FILE *file;
    char name[20];
    int i,age,phone,num;
    file=fopen("Person details.txt","a");

    printf("Enter number of entries: ");
    scanf("%d",&num);
    printf("Enter details..\n\n");
    for(i=1;i<=num;i++)
    {
        printf("Enter name: ");
        scanf("\n");
        gets(name);

        printf("Enter age: ");
        scanf("%d",&age);

        printf("Enter phone number: ");
        scanf("%d",&phone);
        printf("\n");

        fprintf(file,"\n%s\t\t%d\t\t%d",name,age,phone);
    }
    printf("\nEntry complete. File closed.\n");
    fclose(file);
}