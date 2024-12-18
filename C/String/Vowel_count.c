#include<stdio.h>
#include<string.h>
int main()
{
    char str[101];
    gets(str);
    int i,ac=0,ec=0,ic=0,oc=0,uc=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a' || str[i]=='A') ac++;
        if(str[i]=='e' || str[i]=='E') ec++;
        if(str[i]=='i' || str[i]=='I') ic++;
        if(str[i]=='o' || str[i]=='O') oc++;
        if(str[i]=='u' || str[i]=='u') uc++;
    }
    printf("a=%d, e=%d, i=%d, o=%d, u=%d\n",ac,ec,ic,oc,uc);
}