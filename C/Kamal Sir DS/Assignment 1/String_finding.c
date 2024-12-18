#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    char string[100], sub[50];
    printf("Enter the string: ");
    scanf("%s",string);
    printf("Enter the substring: ");
    scanf("%s",sub);
    int string_len = strlen(string);
    int sub_len = strlen(sub);
    bool found = false;
    int ind=0;
    for(int i=0; i<=string_len-sub_len; ++i)
    {
        int j;
        for(j=0; j<sub_len; ++j)
        {
            if(string[i+j]!=sub[j])
            {
                break;
            }
        }
        if(j==sub_len)
        {
            found = true;
            ind = i;
            break;
        }
    }
    if(found)
        printf("Substring found at position: %d",ind+1);
    else
        printf("Substring not found");

}