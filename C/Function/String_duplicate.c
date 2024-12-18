#include<stdio.h>
#include<stdbool.h>
#include<string.h>

bool check_dupli(char s[])
{
    int i,j,l;
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        for(j=i+1;j<l;j++)
        {
            if(s[i]==s[j]) return true;
        }
    }
    return false;
    
}
int main()
{
    char str[50];
    printf("Enter string: ");
    scanf("%s",str);
    if(check_dupli(str)) printf("The string \"%s\" contains duplicate\n",str);
    else printf("The string \"%s\" doesn't contain duplicate\n",str);
}